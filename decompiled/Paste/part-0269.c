/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100342dc0 | FUN_100342dc0 */

int FUN_100342dc0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100342e08 | FUN_100342e08 */

void FUN_100342e08(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    param_1[1] = 0;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x100342e4c | FUN_100342e4c */

undefined1  [16] FUN_100342e4c(void)

{
  return ZEXT816(0x100ecbe98);
}



/* Address: 0x100342e5c | FUN_100342e5c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100342e5c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100342e88 | FUN_100342e88 */

void FUN_100342e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_100342270(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x100342f04 | FUN_100342f04 */

void FUN_100342f04(void)

{
  long unaff_x20;
  
  FUN_1003424ac(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100342f1c | FUN_100342f1c */

void FUN_100342f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1003420c0(plVar1,param_1,param_2,param_3,uVar2);
  return;
}



/* Address: 0x100342f8c | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342f90 | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342f94 | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342f98 | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342f9c | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342fa0 | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342fa4 | thunk_FUN_100342bac */

void thunk_FUN_100342bac(void)

{
  FUN_100342bac();
  return;
}



/* Address: 0x100342fa8 | FUN_100342fa8 */

void FUN_100342fa8(void)

{
  FUN_100342c00();
  return;
}



/* Address: 0x100342fbc | thunk_FUN_100342ccc */

undefined8 * thunk_FUN_100342ccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_10001f62c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100342fc0 | thunk_FUN_100342c4c */

void thunk_FUN_100342c4c(void)

{
  thunk_FUN_100342c4c();
  return;
}



/* Address: 0x100342fc4 | FUN_100342fc4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003430c8) */

void FUN_100342fc4(URL param_1)

{
  undefined8 uVar1;
  StoreType SVar2;
  URL self;
  NSString *pNVar3;
  ID IVar4;
  StoreType SVar5;
  Dictionary<String,static_(extension_in_CoreData):__C_NSPersistentStoreCoordinator_metadataForPersistentStore(type:_(extension_in_CoreData):__C_NSPersistentStore_StoreType,at:_Foundation_URL,options:_[Swift_AnyHashable_:_Any]_)_throws__>__Swift_String___Any_>
  DVar6;
  NSDictionary *pNVar7;
  ID IVar8;
  ID IVar9;
  _StringGuts extraout_x1;
  char *pcVar10;
  long extraout_x8;
  StoreType type;
  long lVar11;
  String SVar12;
  String SVar13;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  
  SVar2 = StoreType::_typeMetadataAccessor();
  lVar11 = *(long *)(SVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  type.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar12 = Foundation::URL::get_path(self);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  IVar4 = objc_stub::fileExistsAtPath_((ID)self.unknown,pNVar3);
  if ((int)IVar4 != 0) {
    SVar5.unknown = (undefined *)0x0;
    FUN_10000ec2c(0,&DAT_100fc01a8,&PTR__OBJC_CLASS___NSPersistentStoreCoordinator_100f8db88);
    StoreType::_get_sqlite(SVar5);
    DVar6 = (extension_CoreData)::__C::NSPersistentStoreCoordinator::_metadataForPersistentStore
                      (type,param_1);
    (**(code **)(lVar11 + 8))(type.unknown,SVar2.unknown);
    if (DAT_100fc0ee0 != -1) {
      _swift_once(&DAT_100fc0ee0,FUN_10035e28c);
    }
    IVar4 = DAT_101057980;
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    IVar4 = objc_stub::FUN_100c056a0(IVar4,0,pNVar7);
    if ((int)IVar4 == 0) {
      IVar4 = 0x3876;
      FUN_10034c014(0x3876,&SUB_e200000000000000);
      if (IVar4 != 0) {
        IVar8 = 0x3776;
        FUN_10034c014(0x3776,&SUB_e200000000000000);
        if (IVar8 != 0) {
          pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          pcVar10 = (char *)0x0;
          IVar9 = objc_stub::FUN_100c056a0(IVar4);
          local_68 = 0;
          local_60 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x1f,extraout_x1);
          _swift_bridgeObjectRelease(local_60);
          local_68 = 0x100000000000001d;
          local_60 = 0x8000000100da2a40;
          local_70 = 7;
          if ((int)IVar9 != 0) {
            local_70 = 8;
            IVar8 = IVar4;
          }
          SVar12 = Swift::CustomStringConvertible::get_description();
          SVar13.bridgeObject = pNVar7;
          SVar13.str = pcVar10;
          Swift::String::append(SVar12,SVar13);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          uVar1 = local_60;
          FUN_10034c35c(local_68,local_60);
          _swift_bridgeObjectRelease(uVar1);
          FUN_1003432e0(param_1.unknown,IVar8);
          _swift_bridgeObjectRelease(DVar6.unknown);
          return;
        }
      }
      FUN_10034c35c(0x100000000000002b,0x8000000100da2a10);
    }
    _swift_bridgeObjectRelease(DVar6.unknown);
  }
  return;
}



/* Address: 0x1003432e0 | FUN_1003432e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100343584) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100343408 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1003432e0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  NSNumber *this;
  NSNumber *pNVar5;
  undefined *puVar6;
  undefined *puVar7;
  ID self;
  void *pvVar8;
  void *pvVar9;
  void *pvVar10;
  void *pvVar11;
  long extraout_x8;
  undefined1 auStack_210 [8];
  undefined *local_208;
  undefined8 local_200;
  long local_1f8;
  undefined *puStack_1f0;
  undefined8 local_1e8;
  String local_1e0;
  code *local_1d0;
  undefined *puStack_1c8;
  code *local_1c0;
  undefined *local_1b8;
  
  local_200 = param_1;
  puStack_1f0 = (undefined *)StoreType::_typeMetadataAccessor();
  local_1f8 = *(long *)(puStack_1f0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1f8 + 0x40));
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar3 = 0xd000000000000015;
  FUN_1000d4624(0xd000000000000015,0x8000000100da2a60);
  puVar4 = &_OBJC_CLASS___NSPersistentStoreCoordinator;
  local_1e8 = uVar3;
  _objc_allocWithZone();
  local_208 = (undefined *)objc_stub::FUN_100c04500((ID)puVar4,param_2);
  StoreType::_get_sqlite((StoreType)local_208);
  puVar4 = &DAT_100fc0430;
  FUN_1000037f0(&DAT_100fc0430,&DAT_100c42308);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  local_1e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = local_1e0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar8);
  puVar1 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (puVar4 + 0x20,puVar4,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  puVar6 = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined **)(puVar4 + 0x60) = PTR___type_metadata_for_Swift_Bool_100eac570;
  puVar4[0x48] = 1;
  local_1e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar9 = local_1e0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar9);
  Swift::AnyHashable::_init(puVar4 + 0x68,puVar4,puVar7,puVar1);
  *(undefined **)(puVar4 + 0xa8) = puVar6;
  puVar4[0x90] = 1;
  local_1e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar10 = local_1e0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar10);
  Swift::AnyHashable::_init(puVar4 + 0xb0,puVar4,puVar7,puVar1);
  this = (NSNumber *)0x0;
  FUN_10000ec2c(0,&DAT_100fc0438,&PTR__OBJC_CLASS___NSNumber_100f8d750);
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,true);
  *(NSNumber **)(puVar4 + 0xf0) = this;
  *(NSNumber **)(puVar4 + 0xd8) = pNVar5;
  local_1e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar11 = local_1e0.bridgeObject;
  _swift_bridgeObjectRetain(pvVar11);
  Swift::AnyHashable::_init(puVar4 + 0xf8,pNVar5,puVar7,puVar1);
  pNVar5 = (extension_Foundation)::__C::NSNumber::__allocating_init(this,true);
  *(NSNumber **)(puVar4 + 0x138) = this;
  _swift_bridgeObjectRelease(pvVar8);
  _swift_bridgeObjectRelease(pvVar9);
  _swift_bridgeObjectRelease(pvVar10);
  _swift_bridgeObjectRelease(pvVar11);
  *(NSNumber **)(puVar4 + 0x120) = pNVar5;
  puVar6 = puVar4;
  FUN_1003c8e0c(puVar4);
  _swift_setDeallocating(puVar4);
  puVar7 = &DAT_100fc0440;
  FUN_1000037f0(&DAT_100fc0440,&DAT_100c42310);
  puVar1 = local_208;
  _swift_arrayDestroy(puVar4 + 0x20,4,puVar7);
  (extension_CoreData)::__C::NSPersistentStoreCoordinator::_addPersistentStore
            ((StoreType)(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),(URL)0x0);
  _swift_bridgeObjectRelease(puVar6);
  (**(code **)(local_1f8 + 8))(auStack_210 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),puStack_1f0)
  ;
  puVar4 = &_OBJC_CLASS___NSManagedObjectContext;
  _objc_allocWithZone();
  self = objc_stub::initWithConcurrencyType_((ID)puVar4,1);
  objc_stub::setPersistentStoreCoordinator_(self,puVar1);
  puVar4 = &DAT_100ecbf38;
  _swift_allocObject(&DAT_100ecbf38,0x20,7);
  uVar3 = local_1e8;
  *(ID *)(puVar4 + 0x10) = self;
  *(undefined8 *)(puVar4 + 0x18) = local_1e8;
  puVar7 = &DAT_100ecbf60;
  _swift_allocObject(&DAT_100ecbf60,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10034c654;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  local_1c0 = FUN_100209b34;
  local_1e0.bridgeObject = (void *)0x42000000;
  local_1e0.str = PTR___NSConcreteStackBlock_100ea82a0;
  local_1d0 = FUN_1000d5218;
  puStack_1c8 = &DAT_100ecbf78;
  local_1b8 = puVar7;
  pvVar8 = __Block_copy(&local_1e0);
  puVar6 = local_1b8;
  _swift_retain(uVar3);
  _swift_retain(puVar7);
  _swift_release(puVar6);
  objc_stub::performBlockAndWait_(self,pvVar8);
  __Block_release(pvVar8);
  puVar6 = puVar7;
  _swift_isEscapingClosureAtFileLocation(puVar7,"",0xa1,0x70,0x20,1);
  _swift_release(puVar7);
  if (((ulong)puVar6 & 1) == 0) {
    FUN_10034c688(puVar1);
    _swift_release(uVar3);
    FUN_100004550(FUN_10034c654,puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10034376c);
  (*pcVar2)();
}



/* Address: 0x10034376c | FUN_10034376c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100343928) */
/* WARNING: Removing unreachable block (ram,0x000100343a48) */

void FUN_10034376c(char *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;
  undefined *self;
  NSString *pNVar12;
  ID IVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  ID IVar18;
  char *pcVar19;
  _StringGuts _Var20;
  char *pcVar21;
  void *pvVar22;
  String SVar23;
  String SVar24;
  undefined1 auStack_100 [16];
  char *local_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined *local_d0;
  char *local_c8;
  char *pcStack_c0;
  char *local_b8;
  char *pcStack_b0;
  char *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  char *pcStack_90;
  char *local_88;
  char *pcStack_80;
  char *local_78;
  char *pcStack_70;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c92b8();
  pcVar19 = param_1;
  local_d0 = puVar2;
  FUN_10034c87c();
  pcVar3 = param_1;
  FUN_100343bb0(param_1,&local_d0);
  pcVar4 = param_1;
  FUN_100345c00(param_1,&local_d0);
  pcVar5 = param_1;
  FUN_100346294(param_1,&local_d0);
  if (SCARRY8((long)pcVar4,(long)pcVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100343bac);
    (*pcVar1)();
  }
  pcVar6 = param_1;
  FUN_10034de2c();
  pcVar7 = param_1;
  FUN_10034ed1c();
  uVar8 = 0x6e45656369766544;
  FUN_1003444cc(0x6e45656369766544,0xec00000079746974,0x696669746e656469,0xea00000000007265,param_1,
                &local_d0);
  uVar9 = 0xd000000000000011;
  pvVar22 = (void *)0x8000000100da1d40;
  FUN_1003444cc(0xd000000000000011,0x8000000100da1c80,0xd000000000000010,0x8000000100da1d40,param_1,
                &local_d0);
  puVar2 = local_d0;
  pcVar10 = param_1;
  FUN_10034f5dc(param_1,local_d0);
  pcVar11 = param_1;
  FUN_10034ffec();
  self = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar13 = objc_stub::initWithEntityName_((ID)self,pNVar12);
  FUN_10000ec2c(0,&DAT_100fc0660);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  IVar18 = IVar13;
  FUN_10034caf0();
  pcVar14 = param_1;
  FUN_100350e64(param_1,IVar18,param_1);
  _swift_bridgeObjectRelease(IVar18);
  IVar18 = IVar13;
  FUN_1003511b8(IVar13);
  _swift_bridgeObjectRelease(IVar13);
  pcVar15 = param_1;
  pcVar21 = param_1;
  FUN_100350e64(param_1,IVar18);
  _swift_bridgeObjectRelease(IVar18);
  if (!SCARRY8((long)pcVar14,(long)pcVar15)) {
    pcVar16 = param_1;
    FUN_10035268c();
    pcVar17 = param_1;
    FUN_100344d58();
    local_c8 = pcVar19;
    pcStack_c0 = pcVar3;
    local_b8 = pcVar4 + (long)pcVar5;
    pcStack_b0 = pcVar6;
    local_a8 = pcVar7;
    uStack_a0 = uVar8;
    local_98 = uVar9;
    pcStack_90 = pcVar10;
    local_88 = pcVar11;
    pcStack_80 = pcVar14 + (long)pcVar15;
    local_78 = pcVar16;
    pcStack_70 = pcVar17;
    IVar18 = objc_stub::hasChanges((ID)param_1);
    if ((int)IVar18 == 0) {
      FUN_10034c35c(0x1000000000000025,0x8000000100da2ae0);
      _swift_bridgeObjectRelease(puVar2);
      return;
    }
    local_f0 = param_1;
    FUN_1002ff9c8(FUN_10030844c,auStack_100);
    FUN_1000d468c(auStack_100);
    _Var20.unknown = local_e8;
    FUN_100004640(auStack_100);
    Swift::_StringGuts::grow(0x1d,_Var20);
    pcVar19 = (char *)0xe000000000000000;
    _swift_bridgeObjectRelease();
    FUN_10034512c();
    SVar23.bridgeObject = _Var20.unknown;
    SVar23.str = pcVar19;
    SVar24.bridgeObject = pvVar22;
    SVar24.str = pcVar21;
    Swift::String::append(SVar23,SVar24);
    _swift_bridgeObjectRelease(_Var20.unknown);
    uVar8 = 0x8000000100da2b10;
    FUN_1000d4dd4(0xd00000000000001b,0x8000000100da2b10,local_e8,uStack_e0);
    _swift_bridgeObjectRelease(0x8000000100da2b10);
    FUN_100004594(auStack_100);
    FUN_10034512c();
    FUN_10034c35c();
    _swift_bridgeObjectRelease(puVar2);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100343bb0);
  (*pcVar1)();
}



/* Address: 0x100343bb0 | FUN_100343bb0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100343da0) */

undefined1 * FUN_100343bb0(ID param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  _StringGuts _Var4;
  _CocoaArrayWrapper _Var5;
  bool bVar6;
  URL UVar7;
  undefined *puVar8;
  NSString *pNVar9;
  ID self;
  undefined *puVar10;
  ID IVar11;
  NSArray *pNVar12;
  undefined8 uVar13;
  ID IVar14;
  ContiguousArray CVar15;
  __int64 _Var16;
  long lVar17;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var18;
  _StringGuts _Var19;
  ContiguousArray CVar20;
  undefined *extraout_x1;
  void *pvVar22;
  _StringGuts _Var23;
  _StringGuts _Var24;
  void *pvVar25;
  uint uVar26;
  long extraout_x8;
  ulong uVar27;
  ulong uVar28;
  ulong *puVar29;
  _ArrayBuffer _Var30;
  _CocoaArrayWrapper _Var31;
  ulong uVar32;
  _CocoaArrayWrapper _Var33;
  undefined1 *puVar34;
  _CocoaArrayWrapper _Var35;
  long lVar36;
  code *pcVar37;
  String SVar38;
  String SVar39;
  undefined1 *local_110;
  void *local_108;
  undefined *local_100;
  ulong *local_f8;
  ID local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  ID local_d0;
  _StringGuts local_c8;
  ulong local_c0;
  ulong *local_b8;
  ID local_b0;
  ID local_a8;
  ulong local_a0;
  undefined8 local_98;
  ID IStack_90;
  long local_88;
  undefined1 *local_80;
  _CocoaArrayWrapper local_78 [3];
  _StringGuts _Var21;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar36 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar36 + 0x40));
  puVar8 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::initWithEntityName_((ID)puVar8,pNVar9);
  puVar8 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 5;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  puVar10 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar11 = objc_stub::FUN_100c04440((ID)puVar10,pNVar9,0);
  *(ID *)(puVar8 + 0x20) = IVar11;
  puVar10 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pvVar25 = (void *)0x0;
  IVar11 = objc_stub::FUN_100c04440((ID)puVar10,pNVar9);
  *(ID *)(puVar8 + 0x28) = IVar11;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar12 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  objc_stub::FUN_100c0dbc0(self,pNVar12);
  uVar13 = 0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  IVar11 = self;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_88 = 0;
  IVar14 = IVar11;
  local_f8 = param_2;
  local_f0 = param_1;
  local_e8 = (long)&local_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar36;
  local_d8 = UVar7.unknown;
  FUN_10034caf0();
  _swift_bridgeObjectRelease(IVar11);
  local_80 = (undefined1 *)0x0;
  lVar36 = 0;
  local_b8 = (ulong *)(IVar14 + 0x40);
  uVar27 = 1L << ((ulong)*(byte *)(IVar14 + 0x20) & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((*(byte *)(IVar14 + 0x20) & 0x3f) < 6) {
    uVar28 = ~(-1L << (uVar27 & 0x3f));
  }
  local_c0 = uVar27 + 0x3f >> 6;
  uVar28 = uVar28 & *local_b8;
  IStack_90 = self;
  local_98 = uVar13;
  local_b0 = IVar14;
  puVar29 = local_b8;
  uVar27 = local_c0;
joined_r0x000100343e48:
  do {
    while (uVar28 == 0) {
      bVar6 = SCARRY8(lVar36,1);
      lVar36 = lVar36 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x10034448c);
        (*pcVar37)();
      }
      if ((long)uVar27 <= lVar36) {
        _swift_release();
        return local_80;
      }
      uVar28 = puVar29[lVar36];
    }
    uVar32 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
    uVar32 = (uVar32 & 0xcccccccccccccccc) >> 2 | (uVar32 & 0x3333333333333333) << 2;
    uVar32 = (uVar32 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar32 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar32 = (uVar32 & 0xff00ff00ff00ff00) >> 8 | (uVar32 & 0xff00ff00ff00ff) << 8;
    uVar32 = (uVar32 & 0xffff0000ffff0000) >> 0x10 | (uVar32 & 0xffff0000ffff) << 0x10;
    uVar28 = uVar28 - 1 & uVar28;
    _Var30.unknown =
         *(undefined **)
          (*(long *)(IVar14 + 0x38) + LZCOUNT(uVar32 >> 0x20 | uVar32 << 0x20) * 8 + lVar36 * 0x200)
    ;
    if ((ulong)_Var30.unknown >> 0x3e != 0) goto LAB_100344360;
    uVar32 = *(ulong *)(((ulong)_Var30.unknown & 0xffffffffffffff8) + 0x10);
  } while (uVar32 < 2);
  local_78[0].unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_a0 = uVar28;
  _swift_bridgeObjectRetain(_Var30.unknown);
  goto LAB_100343eb8;
LAB_100344360:
  _Var31.unknown = _Var30.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var30.unknown) {
    _Var31.unknown = _Var30.unknown;
  }
  local_a0 = uVar28;
  _Var16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var31);
  uVar28 = local_a0;
  puVar29 = local_b8;
  uVar27 = local_c0;
  IVar14 = local_b0;
  if (_Var16 < 2) goto joined_r0x000100343e48;
  local_78[0].unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar32 = Swift::_CocoaArrayWrapper::get_endIndex(_Var31);
  _swift_bridgeObjectRetain(_Var30.unknown);
  _Var31.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar32 != 0) {
LAB_100343eb8:
    uVar28 = 0;
    do {
      if (((ulong)_Var30.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var30.unknown & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x100344488);
          (*pcVar37)();
        }
        uVar27 = *(ulong *)(_Var30.unknown + uVar28 * 8 + 0x20);
      }
      else {
        uVar27 = uVar28;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar28,_Var30);
      }
      uVar1 = uVar28 + 1;
      if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x100344484);
        (*pcVar37)();
      }
      CVar15.unknown = (undefined *)objc_stub::isDeleted(uVar27);
      if (((ulong)CVar15.unknown & 1) == 0) {
        CVar20.unknown = extraout_x1;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar15);
                    /* WARNING: Load size is inaccurate */
        CVar15.unknown = local_78[0].unknown[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar15.unknown,CVar20);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar15.unknown,uVar27);
        Swift::ContiguousArray::__endMutation(CVar15);
      }
      uVar28 = uVar28 + 1;
      _Var31.unknown = local_78[0].unknown;
    } while (uVar1 != uVar32);
  }
  _swift_bridgeObjectRelease(_Var30.unknown);
  if (((long)_Var31.unknown < 0) || (((ulong)_Var31.unknown >> 0x3e & 1) != 0)) {
    puVar8 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var31);
    _Var33.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar8 != (undefined *)0x0) {
      _Var33.unknown = puVar8;
      thunk_FUN_1003643c0(puVar8,0);
      _swift_bridgeObjectRetain(_Var31.unknown);
      _Var35.unknown = _Var31.unknown;
      FUN_100364444(_Var33.unknown + 0x20,puVar8);
      _swift_bridgeObjectRelease();
      if (_Var35.unknown != puVar8) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444b0);
        (*pcVar37)();
      }
    }
  }
  else {
    _swift_retain(_Var31.unknown);
    _Var33.unknown = _Var31.unknown;
  }
  lVar17 = local_88;
  local_78[0].unknown = _Var33.unknown;
  FUN_100347708(local_78);
  local_88 = lVar17;
  if (lVar17 != 0) {
    _swift_release(local_78[0].unknown);
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444bc);
    (*pcVar37)();
  }
  _swift_release(_Var31.unknown);
  _Var31.unknown = local_78[0].unknown;
  uVar26 = (uint)((ulong)local_78[0].unknown >> 0x3e) & 1;
  if ((long)local_78[0].unknown < 0) {
    uVar26 = 1;
  }
  if (uVar26 == 1) {
    _Var33.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(local_78[0]);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    _Var33.unknown = local_78[0].unknown[0x10];
  }
  if (_Var33.unknown == (undefined *)0x0) {
    _swift_release(_Var31.unknown);
    uVar28 = local_a0;
    puVar29 = local_b8;
    uVar27 = local_c0;
    IVar14 = local_b0;
    goto joined_r0x000100343e48;
  }
  if (((ulong)_Var31.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(_Var31.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x100344490);
      (*pcVar37)();
    }
    local_a8 = *(ID *)(_Var31.unknown + 0x20);
  }
  else {
    IVar11 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)_Var31.unknown);
    local_a8 = IVar11;
  }
  if ((long)_Var33.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444ac);
    (*pcVar37)();
  }
  if (uVar26 == 0) {
    lVar17 = *(long *)(_Var31.unknown + 0x10);
    if (lVar17 == 0) goto LAB_100344490;
  }
  else {
    _Var16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var31);
    if (_Var16 < 1) {
LAB_100344490:
                    /* WARNING: Does not return */
      pcVar37 = (code *)SoftwareBreakpoint(1,0x100344494);
      (*pcVar37)();
    }
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var31);
  }
  if (lVar17 < (long)_Var33.unknown) {
                    /* WARNING: Does not return */
    pcVar37 = (code *)SoftwareBreakpoint(1,0x100344498);
    (*pcVar37)();
  }
  if (((ulong)_Var31.unknown & 0xc000000000000001) == 0) {
    _swift_bridgeObjectRetain(_Var31.unknown);
  }
  else {
    _swift_bridgeObjectRetain(_Var31.unknown);
    if (_Var33.unknown != &DAT_00000001) {
      puVar34 = &DAT_00000001;
      do {
        puVar2 = puVar34 + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)puVar34,(_ArrayBuffer)_Var31.unknown);
        puVar34 = puVar2;
      } while (_Var33.unknown != puVar2);
    }
  }
  _swift_release(_Var31.unknown);
  if (uVar26 == 0) {
    puVar8 = _Var31.unknown + 0x20;
    _Var35.unknown = &DAT_00000001;
  }
  else {
    _Var35.unknown = _Var31.unknown;
    _Var18 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x1,_Var33);
    pvVar22 = pvVar25;
    _swift_release(_Var31.unknown);
    puVar34 = (undefined1 *)((ulong)pvVar25 >> 1);
    pvVar25 = pvVar22;
    _Var31.unknown = _Var18.unknown;
    puVar8 = _Var33.unknown;
    _Var33.unknown = puVar34;
  }
  if (_Var35.unknown == _Var33.unknown) {
    _swift_unknownObjectRelease(_Var31.unknown);
    uVar28 = local_a0;
    puVar29 = local_b8;
    uVar27 = local_c0;
    IVar14 = local_b0;
  }
  else {
    local_110 = _Var33.unknown + ((long)local_80 - (long)_Var35.unknown);
    puVar34 = local_80;
    local_100 = puVar8;
    do {
      if ((long)_Var33.unknown <= (long)_Var35.unknown) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x10034449c);
        (*pcVar37)();
      }
      local_d0 = *(ID *)(puVar8 + (long)_Var35.unknown * 8);
      local_80 = puVar34;
      IVar11 = objc_stub::objectID(local_d0);
      UVar7.unknown = (undefined *)objc_stub::URIRepresentation(IVar11);
      lVar17 = local_e8;
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
      SVar38 = Foundation::URL::get_absoluteString((URL)0x0);
      puVar8 = local_d8;
      _Var21.unknown = SVar38.bridgeObject;
      local_c8.unknown = SVar38.str;
      pcVar37 = *(code **)(local_e0 + 8);
      (*pcVar37)(lVar17,local_d8);
      IVar11 = objc_stub::objectID(local_a8);
      UVar7.unknown = (undefined *)objc_stub::URIRepresentation(IVar11);
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
      SVar39 = Foundation::URL::get_absoluteString((URL)0x0);
      _Var4.unknown = local_c8.unknown;
      pvVar22 = SVar39.bridgeObject;
      SVar38.bridgeObject = _Var21.unknown;
      SVar38.str = local_c8.unknown;
      (*pcVar37)(lVar17,puVar8);
      if ((SVar39 == SVar38) ||
         (pvVar25 = pvVar22,
         bVar6 = Swift::_stringCompareWithSmolCheck
                           (_Var4,_Var21,(_StringComparisonResult)(__int8)SVar39.str),
         puVar29 = local_f8, bVar6)) {
        _swift_bridgeObjectRelease(_Var21.unknown);
        _swift_bridgeObjectRelease(pvVar22);
      }
      else {
        uVar28 = *local_f8;
        local_108 = pvVar22;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = (undefined *)*puVar29;
        _Var19.unknown = _Var4.unknown;
        _Var23.unknown = _Var21.unknown;
        local_78[0].unknown = puVar8;
        FUN_100071370();
        uVar27 = (ulong)~(uint)_Var23.unknown & 1;
        lVar17 = *(long *)(puVar8 + 0x10) + uVar27;
        if (SCARRY8(*(long *)(puVar8 + 0x10),uVar27)) {
                    /* WARNING: Does not return */
          pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444a4);
          (*pcVar37)();
        }
        if (*(long *)(puVar8 + 0x18) < lVar17) {
          FUN_10031ddf4(lVar17,uVar28);
          _Var19.unknown = _Var4.unknown;
          _Var24.unknown = _Var21.unknown;
          FUN_100071370();
          if (((uint)_Var23.unknown & 1) != ((uint)_Var24.unknown & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444cc);
            (*pcVar37)();
          }
        }
        else if ((uVar28 & 1) == 0) {
          FUN_10031cd04();
        }
        _Var5.unknown = local_78[0].unknown;
        if (((ulong)_Var23.unknown & 1) == 0) {
          *(ulong *)(local_78[0].unknown + ((ulong)_Var19.unknown >> 6) * 8 + 0x40) =
               *(ulong *)(local_78[0].unknown + ((ulong)_Var19.unknown >> 6) * 8 + 0x40) |
               1L << ((ulong)_Var19.unknown & 0x3f);
          puVar3 = (undefined8 *)
                   (*(long *)(local_78[0].unknown + 0x30) + (long)_Var19.unknown * 0x10);
          *puVar3 = _Var4.unknown;
          puVar3[1] = _Var21.unknown;
          puVar3 = (undefined8 *)
                   (*(long *)(local_78[0].unknown + 0x38) + (long)_Var19.unknown * 0x10);
          *puVar3 = SVar39.str;
          puVar3[1] = local_108;
          if (SCARRY8(*(long *)(local_78[0].unknown + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444a8);
            (*pcVar37)();
          }
          *(long *)(local_78[0].unknown + 0x10) = *(long *)(local_78[0].unknown + 0x10) + 1;
        }
        else {
          puVar3 = (undefined8 *)
                   (*(long *)(local_78[0].unknown + 0x38) + (long)_Var19.unknown * 0x10);
          uVar13 = puVar3[1];
          *puVar3 = SVar39.str;
          puVar3[1] = local_108;
          _swift_bridgeObjectRelease(_Var21.unknown);
          _swift_bridgeObjectRelease(uVar13);
        }
        *local_f8 = (ulong)_Var5.unknown;
      }
      puVar8 = local_100;
      objc_stub::deleteObject_(local_f0,local_d0);
      if (SCARRY8((long)local_80,1)) {
                    /* WARNING: Does not return */
        pcVar37 = (code *)SoftwareBreakpoint(1,0x1003444a0);
        (*pcVar37)();
      }
      _Var35.unknown = _Var35.unknown + 1;
      puVar34 = local_80 + 1;
    } while (_Var33.unknown != _Var35.unknown);
    _swift_unknownObjectRelease(_Var31.unknown);
    local_80 = local_110;
    uVar28 = local_a0;
    puVar29 = local_b8;
    uVar27 = local_c0;
    IVar14 = local_b0;
  }
  goto joined_r0x000100343e48;
}



/* Address: 0x1003444cc | FUN_1003444cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003445b8) */

undefined1 * FUN_1003444cc(void)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  String SVar4;
  long *plVar5;
  bool bVar6;
  undefined *puVar7;
  NSString *pNVar8;
  ID IVar9;
  undefined8 uVar10;
  __int64 _Var11;
  long lVar12;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var13;
  ID IVar14;
  ID self;
  undefined1 *puVar15;
  URL UVar16;
  char *pcVar17;
  undefined *puVar18;
  void *pvVar19;
  undefined *puVar20;
  void *in_x3;
  ID in_x4;
  long *in_x5;
  uint uVar21;
  long extraout_x8;
  ulong uVar22;
  _CocoaArrayWrapper _Var23;
  _CocoaArrayWrapper _Var24;
  undefined *puVar25;
  long lVar26;
  ulong uVar27;
  code *pcVar28;
  undefined8 uVar29;
  long lVar30;
  ulong *puVar31;
  _CocoaArrayWrapper _Var32;
  String SVar33;
  undefined1 auStack_150 [8];
  undefined1 *local_148;
  uint local_140;
  uint local_13c;
  char *local_138;
  long local_130;
  undefined8 local_128;
  long *local_120;
  ID local_118;
  undefined1 *local_110;
  long local_108;
  undefined *puStack_100;
  ID local_f8;
  undefined1 *local_f0;
  undefined *local_e8;
  String local_e0;
  ulong local_d0;
  ID local_c8;
  undefined1 *local_c0;
  ID local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  _CocoaArrayWrapper local_90 [6];
  
  local_120 = in_x5;
  puStack_100 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_108 = *(long *)(puStack_100 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_108 + 0x40));
  local_110 = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = objc_stub::initWithEntityName_((ID)puVar7,pNVar8);
  uVar10 = 0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  local_118 = in_x4;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  IVar14 = IVar9;
  FUN_10034caf0();
  _swift_bridgeObjectRelease(IVar9);
  lVar26 = 0;
  local_c0 = (undefined1 *)0x0;
  lVar30 = 0;
  puVar31 = (ulong *)(IVar14 + 0x40);
  uVar22 = 1L << ((ulong)*(byte *)(IVar14 + 0x20) & 0x3f);
  uVar27 = 0xffffffffffffffff;
  if ((*(byte *)(IVar14 + 0x20) & 0x3f) < 6) {
    uVar27 = ~(-1L << (uVar22 & 0x3f));
  }
  uVar27 = uVar27 & *puVar31;
  local_d0 = uVar22 + 0x3f >> 6;
  local_f8 = IVar14;
  uVar22 = local_d0;
joined_r0x00010034464c:
  do {
    while (uVar27 == 0) {
      bVar6 = SCARRY8(lVar30,1);
      lVar30 = lVar30 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d1c);
        (*pcVar28)();
      }
      if ((long)uVar22 <= lVar30) {
        _swift_release(IVar14);
        return local_c0;
      }
      uVar27 = puVar31[lVar30];
    }
    uVar3 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
    uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
    uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
    uVar27 = uVar27 - 1 & uVar27;
    puVar7 = *(undefined **)
              (*(long *)(IVar14 + 0x38) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 +
              lVar30 * 0x200);
    if ((ulong)puVar7 >> 0x3e != 0) goto LAB_100344c50;
    puVar25 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  } while (*(ulong *)(puVar25 + 0x10) < 2);
  _swift_bridgeObjectRetain_n(puVar7,2);
  goto LAB_1003446b0;
LAB_100344c50:
  _Var24.unknown = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
  if ((undefined *)0x7fffffffffffffff < puVar7) {
    _Var24.unknown = puVar7;
  }
  puVar18 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var24);
  if ((long)puVar18 < 2) goto joined_r0x00010034464c;
  _swift_bridgeObjectRetain(puVar7);
  puVar25 = puVar18;
  thunk_FUN_1003643c0(puVar18,0);
  _swift_bridgeObjectRetain(puVar7);
  puVar20 = puVar7;
  FUN_100364444(puVar25 + 0x20,puVar18);
  _swift_bridgeObjectRelease();
  IVar14 = local_f8;
  if (puVar20 != puVar18) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d3c);
    (*pcVar28)();
  }
LAB_1003446b0:
  local_90[0].unknown = puVar25;
  FUN_100347708(local_90);
  if (lVar26 != 0) {
    _swift_release(local_90[0].unknown);
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d48);
    (*pcVar28)();
  }
  _swift_bridgeObjectRelease(puVar7);
  _Var24.unknown = local_90[0].unknown;
  uVar21 = (uint)((ulong)local_90[0].unknown >> 0x3e) & 1;
  if ((long)local_90[0].unknown < 0) {
    uVar21 = 1;
  }
  if (uVar21 == 1) {
    _Var32.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(local_90[0]);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    _Var32.unknown = local_90[0].unknown[0x10];
  }
  if (_Var32.unknown == (undefined *)0x0) {
    _swift_release(_Var24.unknown);
    uVar22 = local_d0;
    goto joined_r0x00010034464c;
  }
  if (((ulong)_Var24.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(_Var24.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d20);
      (*pcVar28)();
    }
    local_b8 = *(ID *)(_Var24.unknown + 0x20);
  }
  else {
    IVar9 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)_Var24.unknown);
    local_b8 = IVar9;
  }
  if ((long)_Var32.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x100344cec);
    (*pcVar28)();
  }
  if (uVar21 == 0) {
    lVar12 = *(long *)(_Var24.unknown + 0x10);
    if (lVar12 == 0) goto LAB_100344d20;
  }
  else {
    _Var11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var24);
    if (_Var11 < 1) {
LAB_100344d20:
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d24);
      (*pcVar28)();
    }
    lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var24);
  }
  if (lVar12 < (long)_Var32.unknown) {
                    /* WARNING: Does not return */
    pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d28);
    (*pcVar28)();
  }
  if (((ulong)_Var24.unknown & 0xc000000000000001) == 0) {
    _swift_bridgeObjectRetain(_Var24.unknown);
  }
  else {
    _swift_bridgeObjectRetain(_Var24.unknown);
    if (_Var32.unknown != &DAT_00000001) {
      puVar15 = &DAT_00000001;
      do {
        puVar1 = puVar15 + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)puVar15,(_ArrayBuffer)_Var24.unknown);
        puVar15 = puVar1;
      } while (_Var32.unknown != puVar1);
    }
  }
  _swift_release(_Var24.unknown);
  if (uVar21 == 0) {
    local_e8 = _Var24.unknown + 0x20;
    _Var23.unknown = &DAT_00000001;
    if (_Var32.unknown == &DAT_00000001) goto LAB_100344c38;
  }
  else {
    _Var23.unknown = _Var24.unknown;
    _Var13 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x1,_Var32);
    pvVar19 = in_x3;
    local_e8 = _Var32.unknown;
    _swift_release(_Var24.unknown);
    _Var32.unknown = (undefined *)((ulong)in_x3 >> 1);
    in_x3 = pvVar19;
    _Var24.unknown = _Var13.unknown;
    if (_Var23.unknown == _Var32.unknown) {
LAB_100344c38:
      _swift_unknownObjectRelease(_Var24.unknown);
      uVar22 = local_d0;
      goto joined_r0x00010034464c;
    }
  }
  local_148 = _Var32.unknown + ((long)local_c0 - (long)_Var23.unknown);
  local_130 = lVar26;
  local_128 = uVar10;
  do {
    if ((long)_Var32.unknown <= (long)_Var23.unknown) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d2c);
      (*pcVar28)();
    }
    IVar14 = *(ID *)(local_e8 + (long)_Var23.unknown * 8);
    local_f0 = _Var23.unknown;
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_c8 = IVar14;
    IVar14 = objc_stub::FUN_100c07020(IVar14,pNVar8);
    IVar9 = objc_stub::FUN_100bfdae0(IVar14);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_e0.bridgeObject = (void *)IVar14;
    objc_stub::FUN_100c08ee0(IVar14);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = objc_stub::FUN_100c07020(local_b8,pNVar8);
    IVar14 = IVar9;
    for (lVar26 = *(long *)(IVar9 + 0x10); lVar26 != 0; lVar26 = lVar26 + -1) {
      IVar14 = IVar14 + 0x20;
      FUN_10000cbfc(IVar14,local_90);
      FUN_100011080(local_90,auStack_b0);
      puVar15 = auStack_b0;
      FUN_100004640(puVar15,local_98);
      Swift::__bridgeAnythingToObjectiveC();
      objc_stub::addObject_(self,puVar15);
      _swift_unknownObjectRelease(puVar15);
      FUN_100004594(auStack_b0);
    }
    _swift_bridgeObjectRelease(IVar9);
    IVar14 = objc_stub::objectID(local_c8);
    UVar16.unknown = (undefined *)objc_stub::URIRepresentation(IVar14);
    puVar15 = local_110;
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar16);
    local_e0 = Foundation::URL::get_absoluteString((URL)0x0);
    puVar7 = puStack_100;
    pcVar28 = *(code **)(local_108 + 8);
    (*pcVar28)(puVar15,puStack_100);
    IVar14 = objc_stub::objectID(local_b8);
    UVar16.unknown = (undefined *)objc_stub::URIRepresentation(IVar14);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar16);
    SVar33 = Foundation::URL::get_absoluteString((URL)0x0);
    pvVar19 = SVar33.bridgeObject;
    puVar18 = local_e0.bridgeObject;
    (*pcVar28)(puVar15,puVar7);
    pcVar17 = local_e0.str;
    SVar4.bridgeObject = puVar18;
    SVar4.str = local_e0.str;
    if ((SVar33 == SVar4) ||
       (in_x3 = pvVar19,
       bVar6 = Swift::_stringCompareWithSmolCheck
                         ((_StringGuts)local_e0.str,(_StringGuts)puVar18,
                          (_StringComparisonResult)(__int8)SVar33.str), plVar5 = local_120, bVar6))
    {
      _swift_bridgeObjectRelease(puVar18);
      _swift_bridgeObjectRelease(pvVar19);
      IVar9 = local_c8;
      uVar10 = local_128;
    }
    else {
      local_138 = SVar33.str;
      uVar21 = (uint)*local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      local_13c = uVar21;
      puVar7 = (undefined *)*plVar5;
      local_90[0].unknown = puVar7;
      FUN_100071370();
      IVar9 = local_c8;
      uVar10 = local_128;
      uVar21 = (uint)puVar18;
      lVar26 = *(long *)(puVar7 + 0x10) + ((ulong)~uVar21 & 1);
      if (SCARRY8(*(long *)(puVar7 + 0x10),(ulong)~uVar21 & 1)) {
                    /* WARNING: Does not return */
        pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d34);
        (*pcVar28)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar26) {
        local_140 = uVar21;
        FUN_10031ddf4(lVar26,local_13c);
        pcVar17 = local_e0.str;
        uVar21 = (uint)local_e0.bridgeObject;
        FUN_100071370();
        if ((local_140 & 1) != (uVar21 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d58);
          (*pcVar28)();
        }
joined_r0x000100344b58:
        if ((local_140 & 1) != 0) goto LAB_100344b10;
LAB_100344b5c:
        *(ulong *)(local_90[0].unknown + ((ulong)pcVar17 >> 6) * 8 + 0x40) =
             *(ulong *)(local_90[0].unknown + ((ulong)pcVar17 >> 6) * 8 + 0x40) |
             1L << ((ulong)pcVar17 & 0x3f);
        puVar2 = (undefined8 *)(*(long *)(local_90[0].unknown + 0x30) + (long)pcVar17 * 0x10);
        *puVar2 = local_e0.str;
        puVar2[1] = local_e0.bridgeObject;
        puVar2 = (undefined8 *)(*(long *)(local_90[0].unknown + 0x38) + (long)pcVar17 * 0x10);
        *puVar2 = local_138;
        puVar2[1] = pvVar19;
        if (SCARRY8(*(long *)(local_90[0].unknown + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d38);
          (*pcVar28)();
        }
        *(long *)(local_90[0].unknown + 0x10) = *(long *)(local_90[0].unknown + 0x10) + 1;
        _Var23.unknown = local_90[0].unknown;
      }
      else {
        if ((local_13c & 1) == 0) {
          local_140 = uVar21;
          FUN_10031cd04();
          goto joined_r0x000100344b58;
        }
        if (((ulong)puVar18 & 1) == 0) goto LAB_100344b5c;
LAB_100344b10:
        _Var23.unknown = local_90[0].unknown;
        puVar2 = (undefined8 *)(*(long *)(local_90[0].unknown + 0x38) + (long)pcVar17 * 0x10);
        uVar29 = puVar2[1];
        *puVar2 = local_138;
        puVar2[1] = pvVar19;
        _swift_bridgeObjectRelease(local_e0.bridgeObject);
        _swift_bridgeObjectRelease(uVar29);
      }
      *local_120 = (long)_Var23.unknown;
    }
    IVar14 = local_f8;
    lVar26 = local_130;
    objc_stub::deleteObject_(local_118,IVar9);
    bVar6 = SCARRY8((long)local_c0,1);
    local_c0 = local_c0 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar28 = (code *)SoftwareBreakpoint(1,0x100344d30);
      (*pcVar28)();
    }
    _Var23.unknown = local_f0 + 1;
  } while (_Var23.unknown != _Var32.unknown);
  _swift_unknownObjectRelease(_Var24.unknown);
  local_c0 = local_148;
  uVar22 = local_d0;
  goto joined_r0x00010034464c;
}



/* Address: 0x100344d58 | FUN_100344d58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100345110) */
/* WARNING: Removing unreachable block (ram,0x000100344f18) */

undefined * FUN_100344d58(undefined *param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  undefined *puVar4;
  NSString *pNVar5;
  _ArrayBuffer self;
  undefined *puVar6;
  ID IVar7;
  NSArray *pNVar8;
  ulong uVar9;
  undefined *puVar10;
  ContiguousArray CVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ContiguousArray CVar15;
  ulong local_80;
  undefined *local_78;
  long local_70 [2];
  
  puVar4 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar4,pNVar5);
  puVar4 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar6 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = objc_stub::FUN_100c04440((ID)puVar6,pNVar5,1);
  *(ID *)(puVar4 + 0x20) = IVar7;
  puVar6 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar7 = objc_stub::FUN_100c04440((ID)puVar6,pNVar5,1);
  *(ID *)(puVar4 + 0x28) = IVar7;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar8);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_70[0] = 0;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)self.unknown >> 0x3e == 0) {
    lVar13 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var2.unknown = self.unknown;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar13 == 0) {
    lVar12 = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar14 = 0;
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034503c);
          (*pcVar3)();
        }
        uVar9 = *(ulong *)(self.unknown + uVar14 * 8 + 0x20);
      }
      else {
        uVar9 = uVar14;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar14,self);
      }
      lVar1 = uVar14 + 1;
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100345038);
        (*pcVar3)();
      }
      CVar15.unknown = (undefined *)&local_80;
      CVar11.unknown = param_1;
      local_80 = uVar9;
      FUN_100352e04(CVar15.unknown,param_1,local_70);
      if (((ulong)CVar15.unknown & 1) != 0) {
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar15);
                    /* WARNING: Load size is inaccurate */
        CVar15.unknown = local_78[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar15.unknown,CVar11);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar15.unknown,uVar9);
        Swift::ContiguousArray::__endMutation(CVar15);
      }
      uVar14 = uVar14 + 1;
      lVar12 = local_70[0];
      puVar4 = local_78;
    } while (lVar1 != lVar13);
  }
  _swift_bridgeObjectRelease(self.unknown);
  puVar6 = puVar4;
  FUN_100352fb8(puVar4,thunk_FUN_100353db4,0);
  puVar10 = param_1;
  FUN_100353a64(param_1,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  if (SCARRY8(lVar12,(long)puVar10)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10034510c);
    (*pcVar3)();
  }
  puVar6 = puVar4;
  FUN_100352fb8(puVar4,thunk_FUN_100353f5c,0);
  _swift_release(puVar4);
  FUN_100353a64(param_1,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  if (!SCARRY8((long)(puVar10 + lVar12),(long)param_1)) {
    return puVar10 + lVar12 + (long)param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100345110);
  (*pcVar3)();
}



/* Address: 0x10034512c | FUN_10034512c */

undefined1  [16] FUN_10034512c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
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
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  _StringGuts _Var6;
  
  Swift::_StringGuts::grow(0x45,param_2);
  SVar7.bridgeObject = (void *)0x8000000100da2bb0;
  SVar7.str = (char *)0x100000000000002b;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar7,SVar21);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar8,SVar22);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar9.bridgeObject = (void *)0xe900000000000020;
  SVar9.str = (char *)0x3a736d657469202c;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar9,SVar23);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar8,SVar24);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar10.bridgeObject = (void *)0xe900000000000020;
  SVar10.str = (char *)0x3a737473696c202c;
  SVar25.bridgeObject = param_4;
  SVar25.str = param_3;
  Swift::String::append(SVar10,SVar25);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar8,SVar26);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x202c;
  _Var6.unknown = &SUB_e200000000000000;
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar11,SVar27);
  Swift::_StringGuts::grow(0x2c,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar28.bridgeObject = param_4;
  SVar28.str = param_3;
  Swift::String::append(SVar8,SVar28);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar12.bridgeObject = (void *)0x8000000100da2be0;
  SVar12.str = (char *)0xd000000000000018;
  SVar29.bridgeObject = param_4;
  SVar29.str = param_3;
  Swift::String::append(SVar12,SVar29);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar8,SVar30);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x202c;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar13,SVar31);
  _Var6.unknown = (undefined *)0xee00203a61746164;
  SVar8.bridgeObject = (void *)0xee00203a61746164;
  SVar8.str = (char *)0x6174654d7473696c;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar32.bridgeObject = param_4;
  SVar32.str = param_3;
  Swift::String::append(SVar8,SVar32);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xee00203a61746164);
  Swift::_StringGuts::grow(0x1f,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar33.bridgeObject = param_4;
  SVar33.str = param_3;
  Swift::String::append(SVar8,SVar33);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar14.bridgeObject = (void *)0x8000000100da2c00;
  SVar14.str = (char *)0xd000000000000010;
  SVar34.bridgeObject = param_4;
  SVar34.str = param_3;
  Swift::String::append(SVar14,SVar34);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar35.bridgeObject = param_4;
  SVar35.str = param_3;
  Swift::String::append(SVar8,SVar35);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar15.bridgeObject = &SUB_e200000000000000;
  SVar15.str = (char *)0x202c;
  SVar36.bridgeObject = param_4;
  SVar36.str = param_3;
  Swift::String::append(SVar15,SVar36);
  _Var6.unknown = (undefined *)0xe900000000000020;
  SVar1.bridgeObject = (void *)0xe900000000000020;
  SVar1.str = (char *)0x3a73656369766564;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar37.bridgeObject = param_4;
  SVar37.str = param_3;
  Swift::String::append(SVar1,SVar37);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xe900000000000020);
  Swift::_StringGuts::grow(0x1f,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar38.bridgeObject = param_4;
  SVar38.str = param_3;
  Swift::String::append(SVar8,SVar38);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar16.bridgeObject = &SUB_e200000000000000;
  SVar16.str = (char *)0x202c;
  SVar39.bridgeObject = param_4;
  SVar39.str = param_3;
  Swift::String::append(SVar16,SVar39);
  _Var6.unknown = (undefined *)0x8000000100da2c20;
  SVar2.bridgeObject = (void *)0x8000000100da2c20;
  SVar2.str = (char *)0xd00000000000001b;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar40.bridgeObject = param_4;
  SVar40.str = param_3;
  Swift::String::append(SVar2,SVar40);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x8000000100da2c20);
  Swift::_StringGuts::grow(0x17,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar41.bridgeObject = param_4;
  SVar41.str = param_3;
  Swift::String::append(SVar8,SVar41);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar17.bridgeObject = &SUB_e200000000000000;
  SVar17.str = (char *)0x202c;
  SVar42.bridgeObject = param_4;
  SVar42.str = param_3;
  Swift::String::append(SVar17,SVar42);
  _Var6.unknown = (undefined *)0x8000000100da2c40;
  SVar3.bridgeObject = (void *)0x8000000100da2c40;
  SVar3.str = (char *)0xd000000000000013;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar43.bridgeObject = param_4;
  SVar43.str = param_3;
  Swift::String::append(SVar3,SVar43);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x8000000100da2c40);
  Swift::_StringGuts::grow(0x2f,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar44.bridgeObject = param_4;
  SVar44.str = param_3;
  Swift::String::append(SVar8,SVar44);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar18.bridgeObject = (void *)0x8000000100da2c80;
  SVar18.str = (char *)0xd000000000000019;
  SVar45.bridgeObject = param_4;
  SVar45.str = param_3;
  Swift::String::append(SVar18,SVar45);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar46.bridgeObject = param_4;
  SVar46.str = param_3;
  Swift::String::append(SVar8,SVar46);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar19.bridgeObject = &SUB_e200000000000000;
  SVar19.str = (char *)0x202c;
  SVar47.bridgeObject = param_4;
  SVar47.str = param_3;
  Swift::String::append(SVar19,SVar47);
  _Var6.unknown = (undefined *)0x8000000100da2c60;
  SVar4.bridgeObject = (void *)0x8000000100da2c60;
  SVar4.str = (char *)0xd000000000000010;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar48.bridgeObject = param_4;
  SVar48.str = param_3;
  Swift::String::append(SVar4,SVar48);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x8000000100da2c60);
  Swift::_StringGuts::grow(0x1b,_Var6);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar49.bridgeObject = param_4;
  SVar49.str = param_3;
  Swift::String::append(SVar8,SVar49);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar20.bridgeObject = (void *)0xe900000000000020;
  SVar20.str = (char *)0x3a6c61746f74202c;
  SVar50.bridgeObject = param_4;
  SVar50.str = param_3;
  Swift::String::append(SVar20,SVar50);
  FUN_100347528();
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar51.bridgeObject = param_4;
  SVar51.str = param_3;
  Swift::String::append(SVar8,SVar51);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar5.bridgeObject = (void *)0xee00203a73657261;
  SVar5.str = (char *)0x68537463656a626f;
  _swift_bridgeObjectRetain(0xe000000000000000);
  SVar52.bridgeObject = param_4;
  SVar52.str = param_3;
  Swift::String::append(SVar5,SVar52);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xee00203a73657261);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x10034579c | FUN_10034579c */

bool FUN_10034579c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  bool bVar2;
  Date DVar3;
  Date DVar4;
  Date DVar5;
  Date DVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  undefined *puVar8;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long lVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  Date DVar13;
  long lVar14;
  long lVar15;
  undefined auStack_90 [8];
  long local_88;
  undefined *local_80;
  undefined *local_78;
  long local_70;
  undefined8 local_68;
  
  puVar8 = &DAT_100fbe6e8;
  local_68 = param_2;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  local_80 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_00;
  local_70 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar11 = (undefined *)(lVar7 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar11 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar14 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar12 - extraout_x12_05;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar8 = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_78 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar13.unknown = puVar8 + -extraout_x12_06;
  FUN_100347324(lVar9,param_1,0x4164657461647075,0xe900000000000074);
  FUN_100354148(lVar9,lVar12);
  pcVar10 = *(code **)(lVar15 + 0x30);
  lVar9 = lVar12;
  (*pcVar10)(lVar12,1,DVar3.unknown);
  if ((int)lVar9 == 1) {
    FUN_100347324(lVar14,param_1,0x4164657461657263,0xe900000000000074);
    FUN_100354148(lVar14,puVar11);
    DVar4.unknown = puVar11;
    (*pcVar10)(puVar11,1,DVar3.unknown);
    if ((int)DVar4.unknown == 1) {
      Foundation::Date::get_distantPast(DVar4);
      puVar8 = puVar11;
      (*pcVar10)(puVar11,1,DVar3.unknown);
      lVar9 = local_70;
      DVar4.unknown = local_78;
      if ((int)puVar8 != 1) {
        FUN_100005808(puVar11,&DAT_100fbe6e8,&DAT_100c43250);
      }
    }
    else {
      (**(code **)(lVar15 + 0x20))(DVar13.unknown,puVar11,DVar3.unknown);
      lVar9 = local_70;
      DVar4.unknown = local_78;
    }
    lVar14 = lVar12;
    (*pcVar10)(lVar12,1,DVar3.unknown);
    if ((int)lVar14 != 1) {
      FUN_100005808(lVar12,&DAT_100fbe6e8,&DAT_100c43250);
    }
  }
  else {
    (**(code **)(lVar15 + 0x20))(DVar13.unknown,lVar12,DVar3.unknown);
    lVar9 = local_70;
    DVar4.unknown = local_78;
  }
  uVar1 = local_68;
  FUN_100347324(lVar7,local_68,0x4164657461647075,0xe900000000000074);
  FUN_100354148(lVar7,lVar9);
  lVar12 = lVar9;
  (*pcVar10)(lVar9,1,DVar3.unknown);
  lVar7 = local_88;
  DVar6 = DVar3;
  if ((int)lVar12 == 1) {
    FUN_100347324(local_88,uVar1,0x4164657461657263,0xe900000000000074);
    puVar8 = local_80;
    FUN_100354148(lVar7,local_80);
    DVar5.unknown = puVar8;
    (*pcVar10)(puVar8,1,DVar3.unknown);
    if ((int)DVar5.unknown == 1) {
      Foundation::Date::get_distantPast(DVar5);
      puVar11 = puVar8;
      (*pcVar10)(puVar8,1,DVar3.unknown);
      if ((int)puVar11 != 1) {
        FUN_100005808(puVar8,&DAT_100fbe6e8,&DAT_100c43250);
      }
    }
    else {
      (**(code **)(lVar15 + 0x20))(DVar4.unknown,puVar8,DVar3.unknown);
    }
    lVar7 = lVar9;
    (*pcVar10)(lVar9,1);
    if ((int)lVar7 != 1) {
      DVar6.unknown = &DAT_100c43250;
      FUN_100005808(lVar9,&DAT_100fbe6e8);
    }
  }
  else {
    (**(code **)(lVar15 + 0x20))(DVar4.unknown,lVar9);
  }
  bVar2 = Foundation::Date::>_infix(DVar13,DVar4,DVar6);
  pcVar10 = *(code **)(lVar15 + 8);
  (*pcVar10)(DVar4.unknown,DVar3.unknown);
  (*pcVar10)(DVar13.unknown,DVar3.unknown);
  return bVar2;
}



/* Address: 0x100345c00 | FUN_100345c00 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100345da0) */

long FUN_100345c00(ID param_1,undefined8 *param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  bool bVar7;
  URL UVar8;
  undefined *puVar9;
  NSString *pNVar10;
  undefined *self;
  NSPredicate *pNVar11;
  undefined *puVar12;
  _ArrayBuffer _Var13;
  _ArrayBuffer _Var14;
  ulong self_00;
  ContiguousArray CVar15;
  char *self_01;
  ID IVar16;
  undefined8 uVar17;
  NSString *pNVar18;
  NSNumber *pNVar19;
  ContiguousArray CVar20;
  undefined *extraout_x1;
  char *pcVar22;
  long extraout_x8;
  char *pcVar23;
  long lVar24;
  code *pcVar25;
  __int64 _Var26;
  void *pvVar27;
  ulong uVar28;
  char *self_02;
  long lVar29;
  char *pcVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  undefined8 *local_d0;
  char *local_c8;
  undefined *puStack_c0;
  void *local_b8;
  long lStack_b0;
  undefined1 *local_a8;
  undefined *local_a0;
  ID local_98;
  char *local_90;
  ulong local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  _StringGuts _Var21;
  
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar29 = *(long *)(UVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar29 + 0x40));
  puVar9 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = (undefined *)objc_stub::initWithEntityName_((ID)puVar9,pNVar10);
  pNVar11 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar9 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar9 + 0x18) = 4;
  *(undefined8 *)(puVar9 + 0x10) = 2;
  *(undefined **)(puVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar12 = puVar9;
  FUN_10030d9e0();
  puVar3 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(puVar9 + 0x20) = 0x65707954776172;
  *(undefined1 **)(puVar9 + 0x28) = &DAT_e700000000000000;
  *(undefined **)(puVar9 + 0x60) = puVar2;
  *(undefined **)(puVar9 + 0x68) = puVar3;
  *(undefined **)(puVar9 + 0x40) = puVar12;
  *(undefined8 *)(puVar9 + 0x48) = 1;
  pNVar11 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar11);
  objc_stub::setPredicate_((ID)self,pNVar11);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  _Var13.unknown = self;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  _Var14.unknown = _Var13.unknown;
  FUN_100346c0c();
  local_90 = _Var14.unknown;
  if (_Var14.unknown == (char *)0x0) {
    _swift_bridgeObjectRelease(_Var13.unknown);
    return 0;
  }
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_a0 = UVar8.unknown;
  if ((ulong)_Var13.unknown >> 0x3e == 0) {
    _Var26 = *(long *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var13.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var13.unknown) {
      _Var1.unknown = _Var13.unknown;
    }
    _Var26 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  _Var14.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_d8 = self;
  local_d0 = param_2;
  local_a8 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_98 = param_1;
  if (_Var26 != 0) {
    uVar28 = 0;
    do {
      if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10) <= uVar28) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x100346138);
          (*pcVar25)();
        }
        self_00 = *(ulong *)(_Var13.unknown + uVar28 * 8 + 0x20);
      }
      else {
        self_00 = uVar28;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar28,_Var13);
      }
      lVar24 = uVar28 + 1;
      if (SCARRY8(uVar28,1)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x100346134);
        (*pcVar25)();
      }
      CVar15.unknown = (undefined *)objc_stub::isDeleted(self_00);
      if (((ulong)CVar15.unknown & 1) == 0) {
        CVar20.unknown = extraout_x1;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar15);
                    /* WARNING: Load size is inaccurate */
        CVar15.unknown = local_78[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar15.unknown,CVar20);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar15.unknown,self_00);
        Swift::ContiguousArray::__endMutation(CVar15);
      }
      uVar28 = uVar28 + 1;
      _Var14.unknown = local_78;
    } while (lVar24 != _Var26);
  }
  _swift_bridgeObjectRelease(_Var13.unknown);
  if (((long)_Var14.unknown < 0) || (((ulong)_Var14.unknown >> 0x3e & 1) != 0)) {
    pcVar30 = (char *)Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var14.unknown);
    self_02 = local_90;
  }
  else {
    pcVar30 = *(char **)(_Var14.unknown + 0x10);
    self_02 = local_90;
  }
  local_90 = self_02;
  if (pcVar30 == (char *)0x0) {
    _swift_release(_Var14.unknown);
    lVar24 = 0;
    pvVar27 = (void *)0x8000000100da2350;
    self_02 = local_90;
  }
  else {
    if ((long)pcVar30 < 1) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x100346294);
      (*pcVar25)();
    }
    lVar24 = 0;
    pcVar23 = (char *)0x0;
    local_88 = (ulong)_Var14.unknown & 0xc000000000000001;
    pvVar27 = (void *)0x8000000100da2350;
    local_b8 = (void *)0x8000000100da2350;
    local_c8 = pcVar30;
    puStack_c0 = _Var14.unknown;
    lStack_b0 = lVar29;
    do {
      if (local_88 == 0) {
        self_01 = *(char **)(_Var14.unknown + (long)pcVar23 * 8 + 0x20);
      }
      else {
        self_01 = pcVar23;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pcVar23,_Var14);
      }
      if (self_01 != self_02) {
        pcVar30 = self_01;
        pcVar22 = self_02;
        local_80 = lVar24;
        FUN_10034cfcc(0x736d657469,&DAT_e500000000000000);
        local_78 = (undefined *)0x3a7473696c;
        local_70 = &DAT_e500000000000000;
        SVar31.bridgeObject = pvVar27;
        SVar31.str = (char *)0xd000000000000017;
        SVar32.bridgeObject = pcVar22;
        SVar32.str = pcVar30;
        Swift::String::append(SVar31,SVar32);
        puVar5 = local_70;
        FUN_10034d354(self_02,self_01,local_78,local_70);
        _swift_bridgeObjectRelease(puVar5);
        FUN_10034d790(self_02,self_01);
        IVar16 = objc_stub::objectID((ID)self_01);
        UVar8.unknown = (undefined *)objc_stub::URIRepresentation(IVar16);
        puVar5 = local_a8;
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
        SVar31 = Foundation::URL::get_absoluteString((URL)0x0);
        puVar9 = local_a0;
        _Var21.unknown = SVar31.bridgeObject;
        pcVar25 = *(code **)(lVar29 + 8);
        (*pcVar25)(puVar5,local_a0);
        IVar16 = objc_stub::objectID((ID)self_02);
        UVar8.unknown = (undefined *)objc_stub::URIRepresentation(IVar16);
        Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
        SVar32 = Foundation::URL::get_absoluteString((URL)0x0);
        (*pcVar25)(puVar5,puVar9);
        if ((SVar31 == SVar32) ||
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar31.str,_Var21,
                               (_StringComparisonResult)(__int8)SVar32.str), puVar4 = local_d0,
           bVar7)) {
          _swift_bridgeObjectRelease(_Var21.unknown);
          _swift_bridgeObjectRelease(SVar32.bridgeObject);
        }
        else {
          uVar17 = *local_d0;
          _swift_isUniquelyReferenced_nonNull_native(uVar17);
          local_78 = (undefined *)*puVar4;
          FUN_100381030(SVar32.str,SVar32.bridgeObject,SVar31.str,_Var21.unknown,uVar17);
          _swift_bridgeObjectRelease(_Var21.unknown);
          *puVar4 = local_78;
        }
        lVar6 = local_80;
        lVar29 = lStack_b0;
        pvVar27 = local_b8;
        _Var14.unknown = puStack_c0;
        pcVar30 = local_c8;
        objc_stub::deleteObject_(local_98,self_01);
        lVar24 = lVar6 + 1;
        self_02 = local_90;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x100346124);
          (*pcVar25)();
        }
      }
      pcVar23 = pcVar23 + 1;
    } while (pcVar30 != pcVar23);
    _swift_release(_Var14.unknown);
  }
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar18 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_((ID)self_02,pNVar10,pNVar18);
  pNVar19 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_((ID)self_02);
  local_78 = (undefined *)0x3a7473696c;
  local_70 = &DAT_e500000000000000;
  SVar33.bridgeObject = pvVar27;
  SVar33.str = (char *)0xd000000000000017;
  SVar34.bridgeObject = pNVar10;
  SVar34.str = (char *)pNVar19;
  Swift::String::append(SVar33,SVar34);
  puVar5 = local_70;
  FUN_10034dcd4(self_02,local_78,local_70);
  _swift_bridgeObjectRelease(puVar5);
  return lVar24;
}



/* Address: 0x100346294 | FUN_100346294 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100346384) */

undefined1 * FUN_100346294(ID param_1,long *param_2,undefined8 param_3,char *param_4)

{
  ulong uVar1;
  undefined1 *puVar2;
  String *pSVar3;
  long *plVar4;
  int iVar5;
  bool bVar6;
  undefined *puVar7;
  NSString *pNVar8;
  ID IVar9;
  undefined8 uVar10;
  ContiguousArray CVar11;
  ID IVar12;
  __int64 _Var13;
  long lVar14;
  _SliceBuffer<Swift__CocoaArrayWrapper_subscript_getter_:_(Swift_Range<Swift_Int>)__>_Swift__SliceBuffer<Swift_AnyObject>>
  _Var15;
  ID IVar16;
  ID self;
  URL UVar17;
  _StringGuts _Var18;
  char *pcVar19;
  char *pcVar20;
  _CocoaArrayWrapper _Var21;
  ContiguousArray CVar22;
  undefined *extraout_x1;
  _StringGuts _Var23;
  char *pcVar24;
  uint uVar25;
  long extraout_x8;
  ulong uVar26;
  ulong uVar27;
  ulong *puVar28;
  _ArrayBuffer _Var29;
  ulong uVar30;
  code *pcVar31;
  _CocoaArrayWrapper _Var32;
  void *pvVar33;
  long lVar34;
  _CocoaArrayWrapper _Var35;
  undefined1 *puVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  undefined1 *local_140;
  uint local_138;
  int local_134;
  undefined *local_130;
  ID local_128;
  long *local_120;
  ID local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined1 *local_f0;
  ulong local_e8;
  ulong *local_e0;
  ID local_d8;
  ID local_d0;
  ulong local_c8;
  undefined1 *local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  _CocoaArrayWrapper local_90 [6];
  
  local_120 = param_2;
  local_100 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_108 = *(long *)(local_100 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_108 + 0x40));
  local_110 = (long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = objc_stub::initWithEntityName_((ID)puVar7,pNVar8);
  uVar10 = 0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  local_118 = param_1;
  local_f8 = uVar10;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  local_b8 = 0;
  IVar12 = IVar9;
  FUN_10034caf0();
  _swift_bridgeObjectRelease(IVar9);
  local_c0 = (undefined1 *)0x0;
  lVar34 = 0;
  local_e0 = (ulong *)(IVar12 + 0x40);
  uVar26 = 1L << ((ulong)*(byte *)(IVar12 + 0x20) & 0x3f);
  uVar27 = 0xffffffffffffffff;
  if ((*(byte *)(IVar12 + 0x20) & 0x3f) < 6) {
    uVar27 = ~(-1L << (uVar26 & 0x3f));
  }
  local_e8 = uVar26 + 0x3f >> 6;
  uVar27 = uVar27 & *local_e0;
  local_d8 = IVar12;
  puVar28 = local_e0;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar26 = local_e8;
joined_r0x000100346434:
  do {
    while (uVar27 == 0) {
      bVar6 = SCARRY8(lVar34,1);
      lVar34 = lVar34 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bd0);
        (*pcVar31)();
      }
      if ((long)uVar26 <= lVar34) {
        _swift_release(IVar12);
        return local_c0;
      }
      uVar27 = puVar28[lVar34];
    }
    uVar30 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
    uVar30 = (uVar30 & 0xcccccccccccccccc) >> 2 | (uVar30 & 0x3333333333333333) << 2;
    uVar30 = (uVar30 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar30 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar30 = (uVar30 & 0xff00ff00ff00ff00) >> 8 | (uVar30 & 0xff00ff00ff00ff) << 8;
    uVar30 = (uVar30 & 0xffff0000ffff0000) >> 0x10 | (uVar30 & 0xffff0000ffff) << 0x10;
    uVar27 = uVar27 - 1 & uVar27;
    _Var29.unknown =
         *(undefined **)
          (*(long *)(IVar12 + 0x38) + LZCOUNT(uVar30 >> 0x20 | uVar30 << 0x20) * 8 + lVar34 * 0x200)
    ;
    if ((ulong)_Var29.unknown >> 0x3e != 0) goto LAB_100346aac;
    uVar30 = *(ulong *)(((ulong)_Var29.unknown & 0xffffffffffffff8) + 0x10);
  } while (uVar30 < 2);
  local_c8 = uVar27;
  local_90[0].unknown = puVar7;
  _swift_bridgeObjectRetain(_Var29.unknown);
  goto LAB_10034649c;
LAB_100346aac:
  _Var21.unknown = _Var29.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var29.unknown) {
    _Var21.unknown = _Var29.unknown;
  }
  local_c8 = uVar27;
  _Var13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
  _Var35.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar27 = local_c8;
  IVar12 = local_d8;
  puVar28 = local_e0;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar26 = local_e8;
  if (_Var13 < 2) goto joined_r0x000100346434;
  local_90[0].unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar30 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
  _swift_bridgeObjectRetain(_Var29.unknown);
  if (uVar30 != 0) {
LAB_10034649c:
    uVar27 = 0;
    do {
      if (((ulong)_Var29.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var29.unknown & 0xffffffffffffff8) + 0x10) <= uVar27) {
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bcc);
          (*pcVar31)();
        }
        uVar26 = *(ulong *)(_Var29.unknown + uVar27 * 8 + 0x20);
      }
      else {
        uVar26 = uVar27;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar27,_Var29);
      }
      uVar1 = uVar27 + 1;
      if (SCARRY8(uVar27,1)) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bc8);
        (*pcVar31)();
      }
      CVar11.unknown = (undefined *)objc_stub::isDeleted(uVar26);
      if (((ulong)CVar11.unknown & 1) == 0) {
        CVar22.unknown = extraout_x1;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar11);
                    /* WARNING: Load size is inaccurate */
        CVar11.unknown = local_90[0].unknown[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar11.unknown,CVar22);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar11.unknown,uVar26);
        Swift::ContiguousArray::__endMutation(CVar11);
      }
      uVar27 = uVar27 + 1;
      _Var35.unknown = local_90[0].unknown;
    } while (uVar1 != uVar30);
  }
  _swift_bridgeObjectRelease(_Var29.unknown);
  if (((long)_Var35.unknown < 0) || (((ulong)_Var35.unknown >> 0x3e & 1) != 0)) {
    puVar7 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var35);
    _Var21.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar7 != (undefined *)0x0) {
      _Var21.unknown = puVar7;
      thunk_FUN_1003643c0(puVar7,0);
      _swift_bridgeObjectRetain(_Var35.unknown);
      _Var32.unknown = _Var35.unknown;
      FUN_100364444(_Var21.unknown + 0x20,puVar7);
      _swift_bridgeObjectRelease();
      if (_Var32.unknown != puVar7) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bf0);
        (*pcVar31)();
      }
    }
  }
  else {
    _swift_retain(_Var35.unknown);
    _Var21.unknown = _Var35.unknown;
  }
  lVar14 = local_b8;
  local_90[0].unknown = _Var21.unknown;
  FUN_1003475dc(local_90);
  local_b8 = lVar14;
  if (lVar14 != 0) {
    _swift_release(local_90[0].unknown);
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bfc);
    (*pcVar31)();
  }
  _swift_release(_Var35.unknown);
  _Var21.unknown = local_90[0].unknown;
  uVar25 = (uint)((ulong)local_90[0].unknown >> 0x3e) & 1;
  if ((long)local_90[0].unknown < 0) {
    uVar25 = 1;
  }
  if (uVar25 == 1) {
    _Var35.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(local_90[0]);
  }
  else {
                    /* WARNING: Load size is inaccurate */
    _Var35.unknown = local_90[0].unknown[0x10];
  }
  if (_Var35.unknown == (undefined *)0x0) {
    _swift_release(_Var21.unknown);
    uVar27 = local_c8;
    IVar12 = local_d8;
    puVar28 = local_e0;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar26 = local_e8;
    goto joined_r0x000100346434;
  }
  if (((ulong)_Var21.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(_Var21.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bd4);
      (*pcVar31)();
    }
    IVar12 = *(ID *)(_Var21.unknown + 0x20);
  }
  else {
    IVar12 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,(_ArrayBuffer)_Var21.unknown);
  }
  if ((long)_Var35.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bec);
    (*pcVar31)();
  }
  if (uVar25 == 0) {
    lVar14 = *(long *)(_Var21.unknown + 0x10);
    if (lVar14 == 0) goto LAB_100346bd4;
  }
  else {
    _Var13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
    if (_Var13 < 1) {
LAB_100346bd4:
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bd8);
      (*pcVar31)();
    }
    lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var21);
  }
  if (lVar14 < (long)_Var35.unknown) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x100346bdc);
    (*pcVar31)();
  }
  if (((ulong)_Var21.unknown & 0xc000000000000001) == 0) {
    _swift_bridgeObjectRetain(_Var21.unknown);
  }
  else {
    _swift_bridgeObjectRetain(_Var21.unknown);
    if (_Var35.unknown != &DAT_00000001) {
      puVar36 = &DAT_00000001;
      do {
        puVar2 = puVar36 + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)puVar36,(_ArrayBuffer)_Var21.unknown);
        puVar36 = puVar2;
      } while (_Var35.unknown != puVar2);
    }
  }
  _swift_release(_Var21.unknown);
  if (uVar25 == 0) {
    puVar7 = _Var21.unknown + 0x20;
    _Var32.unknown = &DAT_00000001;
    bVar6 = SBORROW8(1,(long)_Var35.unknown);
    lVar14 = 1 - (long)_Var35.unknown;
    if (_Var35.unknown == &DAT_00000001) goto LAB_100346a98;
  }
  else {
    _Var32.unknown = _Var21.unknown;
    _Var15 = Swift::_CocoaArrayWrapper::_get_subscript((Range<__int64>)0x1,_Var35);
    pcVar19 = param_4;
    _swift_release(_Var21.unknown);
    puVar36 = (undefined1 *)((ulong)param_4 >> 1);
    bVar6 = SBORROW8((long)_Var32.unknown,(long)puVar36);
    lVar14 = (long)_Var32.unknown - (long)puVar36;
    param_4 = pcVar19;
    _Var21.unknown = _Var15.unknown;
    puVar7 = _Var35.unknown;
    _Var35.unknown = puVar36;
    if (_Var32.unknown == puVar36) {
LAB_100346a98:
      _swift_unknownObjectRelease(_Var21.unknown);
      uVar27 = local_c8;
      IVar12 = local_d8;
      puVar28 = local_e0;
      puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar26 = local_e8;
      goto joined_r0x000100346434;
    }
  }
  if (lVar14 < 0 == bVar6) {
                    /* WARNING: Does not return */
    pcVar31 = (code *)SoftwareBreakpoint(1,0x100346be8);
    (*pcVar31)();
  }
  local_140 = _Var35.unknown + ((long)local_c0 - (long)_Var32.unknown);
  local_130 = puVar7;
  local_128 = IVar12;
  do {
    IVar9 = *(ID *)(local_130 + (long)_Var32.unknown * 8);
    local_f0 = _Var32.unknown;
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    local_d0 = IVar9;
    IVar9 = objc_stub::FUN_100c07020(IVar9,pNVar8);
    IVar16 = objc_stub::FUN_100bfdae0(IVar9);
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    objc_stub::FUN_100c08ee0(IVar9);
    pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    self = objc_stub::FUN_100c07020(IVar12,pNVar8);
    IVar9 = IVar16;
    for (lVar14 = *(long *)(IVar16 + 0x10); lVar14 != 0; lVar14 = lVar14 + -1) {
      IVar9 = IVar9 + 0x20;
      FUN_10000cbfc(IVar9,local_90);
      FUN_100011080(local_90,auStack_b0);
      puVar36 = auStack_b0;
      FUN_100004640(puVar36,local_98);
      Swift::__bridgeAnythingToObjectiveC();
      objc_stub::addObject_(self,puVar36);
      _swift_unknownObjectRelease(puVar36);
      FUN_100004594(auStack_b0);
    }
    _swift_bridgeObjectRelease(IVar16);
    IVar9 = local_d0;
    param_4 = (char *)0x0;
    FUN_10034d354(IVar12,local_d0,0);
    IVar9 = objc_stub::objectID(IVar9);
    UVar17.unknown = (undefined *)objc_stub::URIRepresentation(IVar9);
    lVar14 = local_110;
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar17);
    SVar37 = Foundation::URL::get_absoluteString((URL)0x0);
    puVar7 = local_100;
    _Var23.unknown = SVar37.bridgeObject;
    _Var18.unknown = SVar37.str;
    pcVar31 = *(code **)(local_108 + 8);
    (*pcVar31)(lVar14,local_100);
    IVar12 = objc_stub::objectID(IVar12);
    UVar17.unknown = (undefined *)objc_stub::URIRepresentation(IVar12);
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar17);
    SVar38 = Foundation::URL::get_absoluteString((URL)0x0);
    pcVar24 = SVar38.bridgeObject;
    pcVar19 = SVar38.str;
    (*pcVar31)(lVar14,puVar7);
    if ((SVar37 == SVar38) ||
       (param_4 = pcVar24,
       bVar6 = Swift::_stringCompareWithSmolCheck
                         (_Var18,_Var23,(_StringComparisonResult)(__int8)SVar38.str),
       plVar4 = local_120, bVar6)) {
      _swift_bridgeObjectRelease(_Var23.unknown);
      _swift_bridgeObjectRelease(pcVar24);
      IVar12 = local_128;
    }
    else {
      iVar5 = (int)*local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      local_134 = iVar5;
      puVar7 = (undefined *)*plVar4;
      SVar39 = SVar37;
      local_90[0].unknown = puVar7;
      FUN_100071370();
      IVar12 = local_128;
      pcVar20 = SVar39.str;
      uVar25 = (uint)SVar39.bridgeObject;
      lVar14 = *(long *)(puVar7 + 0x10) + ((ulong)~uVar25 & 1);
      if (SCARRY8(*(long *)(puVar7 + 0x10),(ulong)~uVar25 & 1)) {
                    /* WARNING: Does not return */
        pcVar31 = (code *)SoftwareBreakpoint(1,0x100346be4);
        (*pcVar31)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar14) {
        local_138 = uVar25;
        FUN_10031ddf4(lVar14,local_134);
        FUN_100071370();
        pcVar20 = SVar37.str;
        if ((local_138 & 1) != ((uint)SVar37.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar31 = (code *)SoftwareBreakpoint(1,0x100346c0c);
          (*pcVar31)();
        }
joined_r0x0001003469f8:
        if ((local_138 & 1) != 0) goto LAB_1003469b8;
LAB_1003469fc:
        _Var32.unknown = local_90[0].unknown;
        FUN_1002b0fc0(pcVar20,_Var18.unknown,_Var23.unknown,pcVar19,pcVar24,local_90[0].unknown);
        param_4 = pcVar19;
      }
      else {
        if (local_134 == 0) {
          local_138 = uVar25;
          FUN_10031cd04();
          goto joined_r0x0001003469f8;
        }
        if (((ulong)SVar39.bridgeObject & 1) == 0) goto LAB_1003469fc;
LAB_1003469b8:
        _Var32.unknown = local_90[0].unknown;
        pSVar3 = (String *)(*(long *)(local_90[0].unknown + 0x38) + (long)pcVar20 * 0x10);
        pvVar33 = pSVar3->bridgeObject;
        *pSVar3 = SVar38;
        _swift_bridgeObjectRelease(_Var23.unknown);
        _swift_bridgeObjectRelease(pvVar33);
      }
      *local_120 = (long)_Var32.unknown;
    }
    objc_stub::deleteObject_(local_118,local_d0);
    bVar6 = SCARRY8((long)local_c0,1);
    local_c0 = local_c0 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar31 = (code *)SoftwareBreakpoint(1,0x100346be0);
      (*pcVar31)();
    }
    _Var32.unknown = local_f0 + 1;
  } while (_Var32.unknown != _Var35.unknown);
  _swift_unknownObjectRelease(_Var21.unknown);
  local_c0 = local_140;
  uVar27 = local_c8;
  IVar12 = local_d8;
  puVar28 = local_e0;
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar26 = local_e8;
  goto joined_r0x000100346434;
}



/* Address: 0x100346c0c | FUN_100346c0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100346c0c(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  _ArrayBuffer _Var4;
  _StringGuts _Var5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ContiguousArray CVar9;
  ID IVar10;
  Dictionary<undefined,undefined> DVar11;
  NSString *pNVar12;
  _StringGuts *p_Var13;
  ulong uVar14;
  ulong uVar15;
  ContiguousArray CVar16;
  undefined *extraout_x1;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  ulong self;
  _StringGuts local_b0;
  _StringGuts _Stack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar19 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  _Var4.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar19 != 0) {
    uVar20 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100346d04);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(param_1.unknown + uVar20 * 8 + 0x20);
      }
      else {
        uVar8 = uVar20;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar20,param_1);
      }
      lVar1 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100346d00);
        (*pcVar6)();
      }
      CVar9.unknown = (undefined *)objc_stub::isDeleted(uVar8);
      if (((ulong)CVar9.unknown & 1) == 0) {
        CVar16.unknown = extraout_x1;
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar9);
                    /* WARNING: Load size is inaccurate */
        CVar9.unknown = local_80[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar9.unknown,CVar16)
        ;
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar9.unknown,uVar8);
        Swift::ContiguousArray::__endMutation(CVar9);
      }
      uVar20 = uVar20 + 1;
      _Var4.unknown = local_80;
    } while (lVar1 != lVar19);
  }
  if (((long)_Var4.unknown < 0) || (((ulong)_Var4.unknown >> 0x3e & 1) != 0)) {
    uVar20 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var4.unknown);
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  else {
    uVar20 = *(ulong *)(_Var4.unknown + 0x10);
    puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  PTR___type_metadata_for_Swift_String_100eac208 = puVar3;
  if (uVar20 == 0) {
    _swift_release(_Var4.unknown);
    self = 0;
  }
  else {
    uVar8 = 0;
    uVar18 = (ulong)_Var4.unknown & 0xc000000000000001;
    do {
      if (uVar18 == 0) {
        if (*(ulong *)(_Var4.unknown + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100347170);
          (*pcVar6)();
        }
        self = *(ulong *)(_Var4.unknown + uVar8 * 8 + 0x20);
      }
      else {
        self = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,_Var4);
      }
      uVar14 = uVar8 + 1;
      if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10034716c);
        (*pcVar6)();
      }
      IVar10 = objc_stub::entity(self);
      objc_stub::FUN_100bfe2e0(IVar10);
      FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
      DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
      if (*(long *)(DVar11.unknown + 0x10) == 0) {
        _swift_bridgeObjectRelease(DVar11.unknown);
      }
      else {
        _swift_bridgeObjectRetain(DVar11.unknown);
        uVar17 = 0xea00000000007265;
        FUN_100071370(0x696669746e656469);
        if ((uVar17 & 1) == 0) {
          _swift_bridgeObjectRelease_n(DVar11.unknown,2);
        }
        else {
          _swift_bridgeObjectRelease_n(DVar11.unknown,2);
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar10 = objc_stub::FUN_100c112a0(self,pNVar12);
          if (IVar10 == 0) {
            uStack_98 = 0;
            local_a0 = (undefined *)0x0;
            lStack_88 = 0;
            uStack_90 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar10);
          }
          uStack_78 = uStack_98;
          local_80 = local_a0;
          local_68 = lStack_88;
          uStack_70 = uStack_90;
          if (lStack_88 == 0) {
            FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          }
          else {
            p_Var13 = &local_b0;
            _swift_dynamicCast(p_Var13,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6)
            ;
            _Var5.unknown = _Stack_a8.unknown;
            if (((ulong)p_Var13 & 1) != 0) {
              if ((local_b0.unknown == (undefined *)0xd000000000000017) &&
                 (_Stack_a8.unknown == (undefined *)0x8000000100da2350)) {
                _swift_release(_Var4.unknown);
                _swift_bridgeObjectRelease(0x8000000100da2350);
                return self;
              }
              bVar7 = Swift::_stringCompareWithSmolCheck
                                (local_b0,_Stack_a8,(_StringComparisonResult)0x17);
              _swift_bridgeObjectRelease(_Var5.unknown);
              if (bVar7) goto LAB_100347148;
            }
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while (uVar14 != uVar20);
    if (uVar18 == 0) {
      if (*(long *)(_Var4.unknown + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1003471d0);
        (*pcVar6)();
      }
      self = *(ulong *)(_Var4.unknown + 0x20);
    }
    else {
      self = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var4);
    }
    if (uVar20 != 1) {
      uVar8 = 1;
      do {
        while( true ) {
          if (uVar18 == 0) {
            if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100347178);
              (*pcVar6)();
            }
            if (*(ulong *)(_Var4.unknown + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x10034717c);
              (*pcVar6)();
            }
            uVar14 = *(ulong *)(_Var4.unknown + uVar8 * 8 + 0x20);
          }
          else {
            uVar14 = uVar8;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar8,_Var4);
          }
          uVar17 = uVar8 + 1;
          if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100347174);
            (*pcVar6)();
          }
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          uVar15 = objc_stub::FUN_100c112a0(uVar14,pNVar12);
          if (uVar15 == 0) {
            uStack_78 = 0;
            local_80 = (undefined *)0x0;
            local_68 = 0;
            uStack_70 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(uVar15);
          }
          FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar10 = objc_stub::FUN_100c112a0(self,pNVar12);
          if (IVar10 == 0) {
            uStack_78 = 0;
            local_80 = (undefined *)0x0;
            local_68 = 0;
            uStack_70 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar10);
          }
          FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          if ((uVar15 != 0) == (IVar10 != 0)) {
            IVar10 = uVar14;
            FUN_10034579c(uVar14,self);
            uVar15 = IVar10 & 1;
          }
          if (uVar15 != 0) break;
          uVar8 = uVar8 + 1;
          if (uVar17 == uVar20) goto LAB_100347148;
        }
        self = uVar14;
        uVar8 = uVar17;
      } while (uVar17 != uVar20);
    }
LAB_100347148:
    _swift_release(_Var4.unknown);
  }
  return self;
}



/* Address: 0x1003471d0 | FUN_1003471d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_1003471d0(ID param_1,ID param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  uint uVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_1,pNVar1);
  uVar4 = (uint)(IVar2 != 0);
  if (IVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c112a0(param_2,pNVar1);
  if (IVar3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
  }
  FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
  if ((IVar2 != 0) == (IVar3 != 0)) {
    FUN_10034579c(param_1,param_2);
    uVar4 = (uint)param_1;
  }
  return uVar4 & 1;
}



/* Address: 0x100347324 | FUN_100347324 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100347324(undefined8 param_1,ID param_2,undefined8 param_3,ulong param_4)

{
  ID IVar1;
  Dictionary<undefined,undefined> DVar2;
  NSString *pNVar3;
  Date DVar4;
  undefined8 uVar5;
  uint uVar6;
  code *pcVar7;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  IVar1 = objc_stub::entity(param_2);
  objc_stub::FUN_100bfe2e0(IVar1);
  FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar2.unknown + 0x10) != 0) {
    _swift_bridgeObjectRetain(DVar2.unknown);
    FUN_100071370(param_3);
    _swift_bridgeObjectRelease(DVar2.unknown);
    if ((param_4 & 1) != 0) {
      _swift_bridgeObjectRelease(DVar2.unknown);
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar1 = objc_stub::FUN_100c112a0(param_2,pNVar3);
      if (IVar1 == 0) {
        uStack_78 = 0;
        local_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar1);
      }
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
        DVar4 = Foundation::Date::typeMetadataAccessor();
        pcVar7 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
        uVar6 = 1;
      }
      else {
        DVar4 = Foundation::Date::typeMetadataAccessor();
        uVar5 = param_1;
        _swift_dynamicCast(param_1,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,DVar4.unknown
                           ,6);
        pcVar7 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
        uVar6 = (uint)uVar5 ^ 1;
      }
      (*pcVar7)(param_1,uVar6,1,DVar4.unknown);
      return;
    }
  }
  _swift_bridgeObjectRelease(DVar2.unknown);
  DVar4 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100347470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))(param_1,1,1,DVar4.unknown);
  return;
}



/* Address: 0x100347528 | FUN_100347528 */

long FUN_100347528(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long *unaff_x20;
  
  lVar1 = *unaff_x20 + unaff_x20[1];
  if (SCARRY8(*unaff_x20,unaff_x20[1])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475b4);
    (*pcVar3)();
  }
  lVar2 = lVar1 + unaff_x20[2];
  if (SCARRY8(lVar1,unaff_x20[2])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475b8);
    (*pcVar3)();
  }
  lVar1 = lVar2 + unaff_x20[3];
  if (SCARRY8(lVar2,unaff_x20[3])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475bc);
    (*pcVar3)();
  }
  lVar2 = lVar1 + unaff_x20[4];
  if (SCARRY8(lVar1,unaff_x20[4])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475c0);
    (*pcVar3)();
  }
  lVar1 = lVar2 + unaff_x20[5];
  if (SCARRY8(lVar2,unaff_x20[5])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475c4);
    (*pcVar3)();
  }
  lVar2 = lVar1 + unaff_x20[6];
  if (SCARRY8(lVar1,unaff_x20[6])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475c8);
    (*pcVar3)();
  }
  lVar1 = lVar2 + unaff_x20[9];
  if (SCARRY8(lVar2,unaff_x20[9])) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475cc);
    (*pcVar3)();
  }
  lVar2 = lVar1 + unaff_x20[7];
  if (!SCARRY8(lVar1,unaff_x20[7])) {
    lVar1 = lVar2 + unaff_x20[8];
    if (SCARRY8(lVar2,unaff_x20[8])) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475d4);
      (*pcVar3)();
    }
    lVar2 = lVar1 + unaff_x20[10];
    if (!SCARRY8(lVar1,unaff_x20[10])) {
      if (!SCARRY8(lVar2,unaff_x20[0xb])) {
        return lVar2 + unaff_x20[0xb];
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475dc);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475d8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1003475d0);
  (*pcVar3)();
}



/* Address: 0x1003475dc | FUN_1003475dc */

void FUN_1003475dc(ulong *param_1)

{
  ContiguousArray CVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_1 = uVar4;
  if ((uVar5 & 1) == 0) {
    thunk_FUN_100392bb0();
    *param_1 = uVar4;
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  CVar1.unknown = (undefined *)Swift::_minimumMergeRunLength(uVar5);
  if ((long)CVar1.unknown < (long)uVar5) {
    uVar4 = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = (undefined *)0x0;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(uVar4,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = uVar4;
    }
    local_68 = _Var3.unknown + 0x20;
    CVar2.unknown = (undefined *)&local_68;
    uStack_60 = uVar4;
    FUN_100347834(CVar2.unknown,auStack_58,&local_50,CVar1.unknown);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    Swift::ContiguousArray::__endMutation(CVar2);
    _swift_release();
    CVar1.unknown = _Var3.unknown;
  }
  else if (uVar5 != 0) {
    CVar1.unknown = (undefined *)0x0;
    FUN_100349bc8(0,uVar5,1,&local_50);
  }
  Swift::ContiguousArray::__endMutation(CVar1);
  return;
}



/* Address: 0x100347708 | FUN_100347708 */

void FUN_100347708(ulong *param_1)

{
  ContiguousArray CVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *param_1 = uVar4;
  if ((uVar5 & 1) == 0) {
    thunk_FUN_100392bb0();
    *param_1 = uVar4;
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  CVar1.unknown = (undefined *)Swift::_minimumMergeRunLength(uVar5);
  if ((long)CVar1.unknown < (long)uVar5) {
    uVar4 = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = (undefined *)0x0;
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(uVar4,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = uVar4;
    }
    local_68 = _Var3.unknown + 0x20;
    CVar2.unknown = (undefined *)&local_68;
    uStack_60 = uVar4;
    FUN_1003487f8(CVar2.unknown,auStack_58,&local_50,CVar1.unknown);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    Swift::ContiguousArray::__endMutation(CVar2);
    _swift_release();
    CVar1.unknown = _Var3.unknown;
  }
  else if (uVar5 != 0) {
    CVar1.unknown = (undefined *)0x0;
    FUN_10034a238(0,uVar5,1,&local_50);
  }
  Swift::ContiguousArray::__endMutation(CVar1);
  return;
}



/* Address: 0x100347834 | FUN_100347834 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100347834(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  Date DVar2;
  ulong uVar3;
  NSString *pNVar4;
  ID IVar5;
  ID IVar6;
  Date DVar7;
  long lVar8;
  Date DVar9;
  ID IVar10;
  ID IVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long lVar16;
  long lVar17;
  long extraout_x8_00;
  Date DVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  long lVar27;
  Date DVar28;
  Date DVar29;
  Date DVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  long lVar33;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  undefined8 uVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  long unaff_x21;
  long lVar38;
  code *pcVar39;
  undefined *puVar40;
  ulong uVar41;
  ID *pIVar42;
  ID *pIVar43;
  long lVar44;
  long lVar45;
  undefined *puVar46;
  undefined auStack_190 [8];
  long local_188;
  long *local_180;
  long *local_178;
  long local_170;
  long local_168;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *local_58;
  
  puVar26 = &DAT_100fbe6e8;
  local_188 = param_4;
  local_180 = param_1;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar26 + -8) + 0x40));
  puVar35 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (long)puVar35 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar38 = lVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar38 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar40 = (undefined *)(lVar21 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = (long)puVar40 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar45 = lVar22 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar45 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar46 = (undefined *)(lVar23 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_168 = (long)puVar46 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = ((long)puVar46 - extraout_x12_07) - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar24 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar26 = (undefined *)(lVar25 - extraout_x12_10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_170 = (long)puVar26 - extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = ((long)puVar26 - extraout_x12_11) - extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar27 - extraout_x12_13;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar17 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  DVar28.unknown = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar29.unknown = DVar28.unknown + -extraout_x12_14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar30.unknown = DVar29.unknown + -extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar18.unknown = DVar30.unknown + -extraout_x12_16;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar44 = param_3[1];
  local_178 = param_3;
  if (0 < lVar44) {
    lVar36 = 0;
    do {
      lVar8 = lVar36 + 1;
      if (lVar8 < lVar44) {
        uVar3 = *(ulong *)(*param_3 + lVar8 * 8);
        puVar32 = (undefined8 *)(*param_3 + lVar36 * 8);
        pIVar42 = puVar32 + 2;
        FUN_1003471d0(uVar3,*puVar32);
        lVar33 = lVar36 + 2;
        uVar41 = uVar3;
        do {
          lVar19 = lVar33;
          lVar8 = lVar44;
          if (lVar44 == lVar19) break;
          IVar10 = pIVar42[-1];
          IVar11 = *pIVar42;
          pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar5 = objc_stub::FUN_100c112a0(IVar11,pNVar4);
          bVar1 = IVar5 != 0;
          if (IVar5 == 0) {
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar5);
          }
          FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
          pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar6 = objc_stub::FUN_100c112a0(IVar10,pNVar4);
          if (IVar6 == 0) {
            uStack_88 = 0;
            local_90 = 0;
            uStack_78 = 0;
            uStack_80 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar6);
          }
          FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
          if ((IVar5 != 0) == (IVar6 != 0)) {
            FUN_100347324(lVar16,IVar11,0x4164657461647075,0xe900000000000074);
            FUN_100354148(lVar16,lVar27);
            pcVar39 = *(code **)(lVar17 + 0x30);
            lVar33 = lVar27;
            (*pcVar39)(lVar27,1,DVar2.unknown);
            lVar8 = local_170;
            if ((int)lVar33 == 1) {
              FUN_100347324(local_170,IVar11,0x4164657461657263,0xe900000000000074);
              FUN_100354148(lVar8,puVar26);
              DVar7.unknown = puVar26;
              (*pcVar39)(puVar26,1,DVar2.unknown);
              if ((int)DVar7.unknown == 1) {
                Foundation::Date::get_distantPast(DVar7);
                puVar15 = puVar26;
                (*pcVar39)(puVar26,1,DVar2.unknown);
                if ((int)puVar15 != 1) {
                  FUN_100005808(puVar26,&DAT_100fbe6e8,&DAT_100c43250);
                }
              }
              else {
                (**(code **)(lVar17 + 0x20))(DVar18.unknown,puVar26,DVar2.unknown);
              }
              lVar8 = lVar27;
              (*pcVar39)(lVar27,1,DVar2.unknown);
              if ((int)lVar8 != 1) {
                FUN_100005808(lVar27,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar17 + 0x20))(DVar18.unknown,lVar27,DVar2.unknown);
            }
            FUN_100347324(lVar25,IVar10,0x4164657461647075,0xe900000000000074);
            FUN_100354148(lVar25,lVar24);
            lVar33 = lVar24;
            (*pcVar39)(lVar24,1,DVar2.unknown);
            lVar8 = local_168;
            DVar7 = DVar2;
            if ((int)lVar33 == 1) {
              FUN_100347324(local_168,IVar10,0x4164657461657263,0xe900000000000074);
              FUN_100354148(lVar8,puVar46);
              DVar9.unknown = puVar46;
              (*pcVar39)(puVar46,1,DVar2.unknown);
              if ((int)DVar9.unknown == 1) {
                Foundation::Date::get_distantPast(DVar9);
                puVar15 = puVar46;
                (*pcVar39)(puVar46,1,DVar2.unknown);
                if ((int)puVar15 != 1) {
                  FUN_100005808(puVar46,&DAT_100fbe6e8,&DAT_100c43250);
                }
              }
              else {
                (**(code **)(lVar17 + 0x20))(DVar30.unknown,puVar46,DVar2.unknown);
              }
              lVar8 = lVar24;
              (*pcVar39)(lVar24,1);
              if ((int)lVar8 != 1) {
                DVar7.unknown = &DAT_100c43250;
                FUN_100005808(lVar24,&DAT_100fbe6e8);
              }
            }
            else {
              (**(code **)(lVar17 + 0x20))(DVar30.unknown,lVar24);
            }
            bVar1 = Foundation::Date::>_infix(DVar18,DVar30,DVar7);
            pcVar39 = *(code **)(lVar17 + 8);
            (*pcVar39)(DVar30.unknown,DVar2.unknown);
            (*pcVar39)(DVar18.unknown,DVar2.unknown);
            uVar41 = uVar3 & 0xffffffff;
          }
          pIVar42 = pIVar42 + 1;
          lVar33 = lVar19 + 1;
          lVar8 = lVar19;
        } while (((uint)uVar41 & 1) == (uint)bVar1);
        param_3 = local_178;
        if ((uVar41 & 1) != 0) {
          if (lVar8 < lVar36) {
                    /* WARNING: Does not return */
            pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487cc);
            (*pcVar39)();
          }
          if (lVar36 < lVar8) {
            lVar19 = *local_178;
            puVar31 = (undefined8 *)(lVar19 + lVar8 * 8);
            puVar32 = (undefined8 *)(lVar19 + lVar36 * 8);
            lVar33 = lVar8;
            lVar44 = lVar36;
            do {
              puVar31 = puVar31 + -1;
              lVar33 = lVar33 + -1;
              if (lVar44 != lVar33) {
                if (lVar19 == 0) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487ec);
                  (*pcVar39)();
                }
                uVar34 = *puVar32;
                *puVar32 = *puVar31;
                *puVar31 = uVar34;
              }
              lVar44 = lVar44 + 1;
              puVar32 = puVar32 + 1;
            } while (lVar44 < lVar33);
          }
        }
      }
      lVar44 = param_3[1];
      lVar33 = lVar8;
      if (lVar8 < lVar44) {
        if (SBORROW8(lVar8,lVar36)) {
                    /* WARNING: Does not return */
          pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487c8);
          (*pcVar39)();
        }
        if (lVar8 - lVar36 < local_188) {
          if (SCARRY8(lVar36,local_188)) {
                    /* WARNING: Does not return */
            pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487d0);
            (*pcVar39)();
          }
          lVar19 = lVar36 + local_188;
          if (lVar44 <= lVar36 + local_188) {
            lVar19 = lVar44;
          }
          if (lVar19 < lVar36) {
                    /* WARNING: Does not return */
            pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487d4);
            (*pcVar39)();
          }
          if (lVar8 != lVar19) {
            lVar44 = *param_3;
            pIVar42 = (ID *)(lVar44 + lVar8 * 8 + -8);
            lVar37 = lVar36 - lVar8;
            do {
              IVar10 = *(ID *)(lVar44 + lVar8 * 8);
              lVar33 = lVar37;
              pIVar43 = pIVar42;
              do {
                IVar5 = *pIVar43;
                pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                IVar11 = objc_stub::FUN_100c112a0(IVar10,pNVar4);
                if (IVar11 == 0) {
                  uStack_88 = 0;
                  local_90 = 0;
                  uStack_78 = 0;
                  uStack_80 = 0;
                }
                else {
                  Swift::__bridgeAnyObjectToAny();
                  _swift_unknownObjectRelease(IVar11);
                }
                FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
                pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                IVar6 = objc_stub::FUN_100c112a0(IVar5,pNVar4);
                if (IVar6 == 0) {
                  uStack_88 = 0;
                  local_90 = 0;
                  uStack_78 = 0;
                  uStack_80 = 0;
                }
                else {
                  Swift::__bridgeAnyObjectToAny();
                  _swift_unknownObjectRelease(IVar6);
                }
                FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
                if ((IVar11 != 0) == (IVar6 != 0)) {
                  FUN_100347324(lVar23,IVar10,0x4164657461647075,0xe900000000000074);
                  FUN_100354148(lVar23,lVar45);
                  pcVar39 = *(code **)(lVar17 + 0x30);
                  lVar12 = lVar45;
                  (*pcVar39)(lVar45,1,DVar2.unknown);
                  if ((int)lVar12 == 1) {
                    FUN_100347324(lVar22,IVar10,0x4164657461657263,0xe900000000000074);
                    FUN_100354148(lVar22,puVar40);
                    DVar7.unknown = puVar40;
                    (*pcVar39)(puVar40,1,DVar2.unknown);
                    if ((int)DVar7.unknown == 1) {
                      Foundation::Date::get_distantPast(DVar7);
                      puVar15 = puVar40;
                      (*pcVar39)(puVar40,1,DVar2.unknown);
                      if ((int)puVar15 != 1) {
                        FUN_100005808(puVar40,&DAT_100fbe6e8,&DAT_100c43250);
                      }
                    }
                    else {
                      (**(code **)(lVar17 + 0x20))(DVar29.unknown,puVar40,DVar2.unknown);
                    }
                    lVar12 = lVar45;
                    (*pcVar39)(lVar45,1,DVar2.unknown);
                    if ((int)lVar12 != 1) {
                      FUN_100005808(lVar45,&DAT_100fbe6e8,&DAT_100c43250);
                    }
                  }
                  else {
                    (**(code **)(lVar17 + 0x20))(DVar29.unknown,lVar45,DVar2.unknown);
                  }
                  FUN_100347324(lVar21,IVar5,0x4164657461647075,0xe900000000000074);
                  FUN_100354148(lVar21,lVar38);
                  lVar12 = lVar38;
                  (*pcVar39)(lVar38,1,DVar2.unknown);
                  DVar7 = DVar2;
                  if ((int)lVar12 == 1) {
                    FUN_100347324(lVar20,IVar5,0x4164657461657263,0xe900000000000074);
                    FUN_100354148(lVar20,puVar35);
                    DVar9.unknown = puVar35;
                    (*pcVar39)(puVar35,1,DVar2.unknown);
                    if ((int)DVar9.unknown == 1) {
                      Foundation::Date::get_distantPast(DVar9);
                      puVar15 = puVar35;
                      (*pcVar39)(puVar35,1,DVar2.unknown);
                      if ((int)puVar15 != 1) {
                        FUN_100005808(puVar35,&DAT_100fbe6e8,&DAT_100c43250);
                      }
                    }
                    else {
                      (**(code **)(lVar17 + 0x20))(DVar28.unknown,puVar35,DVar2.unknown);
                    }
                    lVar12 = lVar38;
                    (*pcVar39)(lVar38,1);
                    if ((int)lVar12 != 1) {
                      DVar7.unknown = &DAT_100c43250;
                      FUN_100005808(lVar38,&DAT_100fbe6e8);
                    }
                  }
                  else {
                    (**(code **)(lVar17 + 0x20))(DVar28.unknown,lVar38);
                  }
                  bVar1 = Foundation::Date::>_infix(DVar29,DVar28,DVar7);
                  pcVar39 = *(code **)(lVar17 + 8);
                  (*pcVar39)(DVar28.unknown,DVar2.unknown);
                  (*pcVar39)(DVar29.unknown,DVar2.unknown);
                  if (!bVar1) break;
                }
                else if (IVar11 == 0) break;
                if (lVar44 == 0) {
                    /* WARNING: Does not return */
                  pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487d8);
                  (*pcVar39)();
                }
                IVar11 = *pIVar43;
                IVar10 = pIVar43[1];
                *pIVar43 = IVar10;
                pIVar43[1] = IVar11;
                bVar1 = lVar33 != -1;
                lVar33 = lVar33 + 1;
                pIVar43 = pIVar43 + -1;
              } while (bVar1);
              lVar8 = lVar8 + 1;
              pIVar42 = pIVar42 + 1;
              lVar37 = lVar37 + -1;
              param_3 = local_178;
              lVar33 = lVar19;
            } while (lVar8 != lVar19);
          }
        }
      }
      puVar15 = local_58;
      if (lVar33 < lVar36) {
                    /* WARNING: Does not return */
        pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487bc);
        (*pcVar39)();
      }
      puVar13 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar14 = puVar15;
      if (((ulong)puVar13 & 1) == 0) {
        puVar14 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar15 + 0x10) + 1,1,puVar15);
      }
      uVar41 = *(ulong *)(puVar14 + 0x10);
      puVar15 = puVar14;
      if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar41) {
        puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
        FUN_100392630(puVar15,uVar41 + 1,1,puVar14);
      }
      *(ulong *)(puVar15 + 0x10) = uVar41 + 1;
      *(long *)(puVar15 + uVar41 * 0x10 + 0x20) = lVar36;
      *(long *)(puVar15 + uVar41 * 0x10 + 0x28) = lVar33;
      local_58 = puVar15;
      if (*local_180 == 0) {
                    /* WARNING: Does not return */
        pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487f0);
        (*pcVar39)();
      }
      FUN_10034aaa0(&local_58,*local_180,param_3);
      puVar15 = local_58;
      if (unaff_x21 != 0) goto LAB_10034878c;
      lVar44 = param_3[1];
      lVar36 = lVar33;
    } while (lVar33 < lVar44);
  }
  puVar15 = local_58;
  lVar16 = *local_180;
  if (lVar16 == 0) {
                    /* WARNING: Does not return */
    pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487f8);
    (*pcVar39)();
  }
  puVar26 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar26 & 1) == 0) {
    FUN_100392b74();
  }
  uVar41 = *(ulong *)(puVar15 + 0x10);
  while (local_58 = puVar15, 1 < uVar41) {
    lVar17 = *param_3;
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487f4);
      (*pcVar39)();
    }
    lVar21 = uVar41 - 1;
    lVar22 = *(long *)(puVar15 + uVar41 * 0x10);
    lVar20 = *(long *)(puVar15 + lVar21 * 0x10 + 0x28);
    FUN_10034af70(lVar17 + lVar22 * 8,lVar17 + *(long *)(puVar15 + lVar21 * 0x10 + 0x20) * 8,
                  lVar17 + lVar20 * 8,lVar16);
    if (unaff_x21 != 0) break;
    if (lVar20 < lVar22) {
                    /* WARNING: Does not return */
      pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487c0);
      (*pcVar39)();
    }
    puVar26 = puVar15;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar26 & 1) == 0) {
      FUN_100392b74();
    }
    if (*(ulong *)(puVar15 + 0x10) <= uVar41 - 2) {
                    /* WARNING: Does not return */
      pcVar39 = (code *)SoftwareBreakpoint(1,0x1003487c4);
      (*pcVar39)();
    }
    *(long *)(puVar15 + uVar41 * 0x10) = lVar22;
    *(long *)((long)(puVar15 + uVar41 * 0x10) + 8) = lVar20;
    local_58 = puVar15;
    FUN_100392aec(lVar21);
    puVar15 = local_58;
    param_3 = local_178;
    uVar41 = *(ulong *)(local_58 + 0x10);
  }
LAB_10034878c:
  _swift_bridgeObjectRelease(puVar15);
  return;
}



/* Address: 0x1003487f8 | FUN_1003487f8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003487f8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  undefined *puVar2;
  Date DVar3;
  ulong uVar4;
  ID IVar5;
  Dictionary<undefined,undefined> DVar6;
  NSString *pNVar7;
  long lVar8;
  Date DVar9;
  ID IVar10;
  Date DVar11;
  ID IVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  long extraout_x8;
  long lVar19;
  long extraout_x8_00;
  Date DVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  Date DVar33;
  Date DVar34;
  Date DVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  ID *pIVar38;
  long lVar39;
  long lVar40;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  undefined8 uVar41;
  long lVar42;
  long lVar43;
  long unaff_x21;
  long lVar44;
  ID *pIVar45;
  long lVar46;
  long lVar47;
  code *pcVar48;
  code *pcVar49;
  long lVar50;
  undefined auStack_1c0 [8];
  long local_1b8;
  long *local_1b0;
  long *local_1a8;
  code *local_f0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined *local_58;
  
  puVar2 = &DAT_100fbe6e8;
  local_1b8 = param_4;
  local_1b0 = param_1;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar2 = auStack_1c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = (long)puVar2 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar22 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar42 = lVar23 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined *)(lVar42 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = (long)puVar24 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar25 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar47 = lVar26 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar27 = (undefined *)(lVar47 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = (long)puVar27 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar43 = lVar28 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar29 = lVar43 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar30 = (undefined *)(lVar29 - extraout_x12_10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar31 = (long)puVar30 - extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar32 = lVar31 - extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar32 - extraout_x12_13;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar46 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar46 + 0x40));
  DVar33.unknown = (undefined *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar34.unknown = DVar33.unknown + -extraout_x12_14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar35.unknown = DVar34.unknown + -extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar20.unknown = DVar35.unknown + -extraout_x12_16;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar50 = param_3[1];
  local_1a8 = param_3;
  if (0 < lVar50) {
    lVar44 = 0;
    do {
      lVar8 = lVar44 + 1;
      if (lVar8 < lVar50) {
        uVar4 = *(ulong *)(*param_3 + lVar8 * 8);
        puVar37 = (undefined8 *)(*param_3 + lVar44 * 8);
        pIVar38 = puVar37 + 2;
        FUN_10034579c(uVar4,*puVar37);
        lVar39 = lVar44 + 2;
        do {
          lVar21 = lVar39;
          lVar8 = lVar50;
          if (lVar50 == lVar21) break;
          IVar12 = pIVar38[-1];
          IVar10 = *pIVar38;
          IVar5 = objc_stub::entity(IVar10);
          objc_stub::FUN_100bfe2e0(IVar5);
          FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
          DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC()
          ;
          if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_100348d84:
            _swift_bridgeObjectRelease(DVar6.unknown);
            local_f0 = *(code **)(lVar46 + 0x38);
            (*local_f0)(lVar19,1,1,DVar3.unknown);
          }
          else {
            _swift_bridgeObjectRetain(DVar6.unknown);
            uVar18 = 0;
            FUN_100071370(0x4164657461647075);
            _swift_bridgeObjectRelease(DVar6.unknown);
            if ((uVar18 & 1) == 0) goto LAB_100348d84;
            _swift_bridgeObjectRelease(DVar6.unknown);
            pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            IVar5 = objc_stub::FUN_100c112a0(IVar10,pNVar7);
            if (IVar5 == 0) {
              uStack_a8 = 0;
              local_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              Swift::__bridgeAnyObjectToAny();
              _swift_unknownObjectRelease(IVar5);
            }
            uStack_88 = uStack_a8;
            local_90 = local_b0;
            local_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
              local_f0 = *(code **)(lVar46 + 0x38);
              uVar17 = 1;
            }
            else {
              lVar8 = lVar19;
              _swift_dynamicCast(lVar19,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                 DVar3.unknown,6);
              local_f0 = *(code **)(lVar46 + 0x38);
              uVar17 = (uint)lVar8 ^ 1;
            }
            (*local_f0)(lVar19,uVar17,1,DVar3.unknown);
          }
          FUN_100354148(lVar19,lVar32);
          pcVar48 = *(code **)(lVar46 + 0x30);
          lVar8 = lVar32;
          (*pcVar48)(lVar32,1,DVar3.unknown);
          if ((int)lVar8 == 1) {
            FUN_100347324(lVar31,IVar10,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar31,puVar30);
            DVar9.unknown = puVar30;
            (*pcVar48)(puVar30,1,DVar3.unknown);
            if ((int)DVar9.unknown == 1) {
              Foundation::Date::get_distantPast(DVar9);
              puVar16 = puVar30;
              (*pcVar48)(puVar30,1,DVar3.unknown);
              if ((int)puVar16 != 1) {
                FUN_100005808(puVar30,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar46 + 0x20))(DVar20.unknown,puVar30,DVar3.unknown);
            }
            lVar8 = lVar32;
            (*pcVar48)(lVar32,1,DVar3.unknown);
            if ((int)lVar8 != 1) {
              FUN_100005808(lVar32,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar46 + 0x20))(DVar20.unknown,lVar32,DVar3.unknown);
          }
          IVar10 = objc_stub::entity(IVar12);
          objc_stub::FUN_100bfe2e0(IVar10);
          DVar6 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC()
          ;
          if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_100349084:
            _swift_bridgeObjectRelease(DVar6.unknown);
            (*local_f0)(lVar29,1,1,DVar3.unknown);
          }
          else {
            _swift_bridgeObjectRetain(DVar6.unknown);
            uVar18 = 0;
            FUN_100071370(0x4164657461647075);
            _swift_bridgeObjectRelease(DVar6.unknown);
            if ((uVar18 & 1) == 0) goto LAB_100349084;
            _swift_bridgeObjectRelease(DVar6.unknown);
            pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            IVar10 = objc_stub::FUN_100c112a0(IVar12,pNVar7);
            if (IVar10 == 0) {
              uStack_a8 = 0;
              local_b0 = 0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              Swift::__bridgeAnyObjectToAny();
              _swift_unknownObjectRelease(IVar10);
            }
            uStack_88 = uStack_a8;
            local_90 = local_b0;
            local_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
              uVar17 = 1;
            }
            else {
              lVar8 = lVar29;
              _swift_dynamicCast(lVar29,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                 DVar3.unknown,6);
              uVar17 = (uint)lVar8 ^ 1;
            }
            (*local_f0)(lVar29,uVar17,1,DVar3.unknown);
          }
          FUN_100354148(lVar29,lVar43);
          lVar8 = lVar43;
          (*pcVar48)(lVar43,1,DVar3.unknown);
          DVar9 = DVar3;
          if ((int)lVar8 == 1) {
            FUN_100347324(lVar28,IVar12,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar28,puVar27);
            DVar11.unknown = puVar27;
            (*pcVar48)(puVar27,1,DVar3.unknown);
            if ((int)DVar11.unknown == 1) {
              Foundation::Date::get_distantPast(DVar11);
              puVar16 = puVar27;
              (*pcVar48)(puVar27,1,DVar3.unknown);
              if ((int)puVar16 != 1) {
                FUN_100005808(puVar27,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar46 + 0x20))(DVar35.unknown,puVar27,DVar3.unknown);
            }
            lVar8 = lVar43;
            (*pcVar48)(lVar43,1);
            if ((int)lVar8 != 1) {
              DVar9.unknown = &DAT_100c43250;
              FUN_100005808(lVar43,&DAT_100fbe6e8);
            }
          }
          else {
            (**(code **)(lVar46 + 0x20))(DVar35.unknown,lVar43);
          }
          bVar1 = Foundation::Date::>_infix(DVar20,DVar35,DVar9);
          pcVar48 = *(code **)(lVar46 + 8);
          (*pcVar48)(DVar35.unknown,DVar3.unknown);
          (*pcVar48)(DVar20.unknown,DVar3.unknown);
          pIVar38 = pIVar38 + 1;
          lVar39 = lVar21 + 1;
          lVar8 = lVar21;
        } while ((((uint)uVar4 ^ (uint)bVar1) & 1) == 0);
        param_3 = local_1a8;
        if ((uVar4 & 1) != 0) {
          if (lVar8 < lVar44) {
                    /* WARNING: Does not return */
            pcVar48 = (code *)SoftwareBreakpoint(1,0x100349b9c);
            (*pcVar48)();
          }
          if (lVar44 < lVar8) {
            lVar21 = *local_1a8;
            puVar36 = (undefined8 *)(lVar21 + lVar8 * 8);
            puVar37 = (undefined8 *)(lVar21 + lVar44 * 8);
            lVar39 = lVar8;
            lVar50 = lVar44;
            do {
              puVar36 = puVar36 + -1;
              lVar39 = lVar39 + -1;
              if (lVar50 != lVar39) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar48 = (code *)SoftwareBreakpoint(1,0x100349bbc);
                  (*pcVar48)();
                }
                uVar41 = *puVar37;
                *puVar37 = *puVar36;
                *puVar36 = uVar41;
              }
              lVar50 = lVar50 + 1;
              puVar37 = puVar37 + 1;
            } while (lVar50 < lVar39);
          }
        }
      }
      lVar50 = param_3[1];
      lVar39 = lVar8;
      if (lVar8 < lVar50) {
        if (SBORROW8(lVar8,lVar44)) {
                    /* WARNING: Does not return */
          pcVar48 = (code *)SoftwareBreakpoint(1,0x100349b98);
          (*pcVar48)();
        }
        if (lVar8 - lVar44 < local_1b8) {
          if (SCARRY8(lVar44,local_1b8)) {
                    /* WARNING: Does not return */
            pcVar48 = (code *)SoftwareBreakpoint(1,0x100349ba0);
            (*pcVar48)();
          }
          lVar21 = lVar44 + local_1b8;
          if (lVar50 <= lVar44 + local_1b8) {
            lVar21 = lVar50;
          }
          if (lVar21 < lVar44) {
                    /* WARNING: Does not return */
            pcVar48 = (code *)SoftwareBreakpoint(1,0x100349ba4);
            (*pcVar48)();
          }
          if (lVar8 != lVar21) {
            lVar50 = *param_3;
            pIVar38 = (ID *)(lVar50 + lVar8 * 8 + -8);
            lVar40 = lVar44 - lVar8;
            do {
              IVar12 = *(ID *)(lVar50 + lVar8 * 8);
              pIVar45 = pIVar38;
              lVar39 = lVar40;
              do {
                IVar5 = *pIVar45;
                IVar10 = objc_stub::entity(IVar12);
                objc_stub::FUN_100bfe2e0(IVar10);
                FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
                DVar6 = (extension_Foundation)::Swift::Dictionary::
                        __unconditionallyBridgeFromObjectiveC();
                if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_1003494d4:
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  pcVar48 = *(code **)(lVar46 + 0x38);
                  (*pcVar48)(lVar47,1,1,DVar3.unknown);
                }
                else {
                  _swift_bridgeObjectRetain(DVar6.unknown);
                  uVar4 = 0;
                  FUN_100071370(0x4164657461647075);
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  if ((uVar4 & 1) == 0) goto LAB_1003494d4;
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  IVar10 = objc_stub::FUN_100c112a0(IVar12,pNVar7);
                  if (IVar10 == 0) {
                    uStack_a8 = 0;
                    local_b0 = 0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    Swift::__bridgeAnyObjectToAny();
                    _swift_unknownObjectRelease(IVar10);
                  }
                  uStack_88 = uStack_a8;
                  local_90 = local_b0;
                  local_78 = lStack_98;
                  uStack_80 = uStack_a0;
                  if (lStack_98 == 0) {
                    FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
                    pcVar48 = *(code **)(lVar46 + 0x38);
                    uVar17 = 1;
                  }
                  else {
                    lVar13 = lVar47;
                    _swift_dynamicCast(lVar47,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                       DVar3.unknown,6);
                    pcVar48 = *(code **)(lVar46 + 0x38);
                    uVar17 = (uint)lVar13 ^ 1;
                  }
                  (*pcVar48)(lVar47,uVar17,1,DVar3.unknown);
                }
                FUN_100354148(lVar47,lVar26);
                pcVar49 = *(code **)(lVar46 + 0x30);
                lVar13 = lVar26;
                (*pcVar49)(lVar26,1,DVar3.unknown);
                if ((int)lVar13 == 1) {
                  FUN_100347324(lVar25,IVar12,0x4164657461657263,0xe900000000000074);
                  FUN_100354148(lVar25,puVar24);
                  DVar9.unknown = puVar24;
                  (*pcVar49)(puVar24,1,DVar3.unknown);
                  if ((int)DVar9.unknown == 1) {
                    Foundation::Date::get_distantPast(DVar9);
                    puVar16 = puVar24;
                    (*pcVar49)(puVar24,1,DVar3.unknown);
                    if ((int)puVar16 != 1) {
                      FUN_100005808(puVar24,&DAT_100fbe6e8,&DAT_100c43250);
                    }
                  }
                  else {
                    (**(code **)(lVar46 + 0x20))(DVar34.unknown,puVar24,DVar3.unknown);
                  }
                  lVar13 = lVar26;
                  (*pcVar49)(lVar26,1,DVar3.unknown);
                  if ((int)lVar13 != 1) {
                    FUN_100005808(lVar26,&DAT_100fbe6e8,&DAT_100c43250);
                  }
                }
                else {
                  (**(code **)(lVar46 + 0x20))(DVar34.unknown,lVar26,DVar3.unknown);
                }
                IVar12 = objc_stub::entity(IVar5);
                objc_stub::FUN_100bfe2e0(IVar12);
                DVar6 = (extension_Foundation)::Swift::Dictionary::
                        __unconditionallyBridgeFromObjectiveC();
                if (*(long *)(DVar6.unknown + 0x10) == 0) {
LAB_100349790:
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  (*pcVar48)(lVar42,1,1,DVar3.unknown);
                }
                else {
                  _swift_bridgeObjectRetain(DVar6.unknown);
                  uVar4 = 0;
                  FUN_100071370(0x4164657461647075);
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  if ((uVar4 & 1) == 0) goto LAB_100349790;
                  _swift_bridgeObjectRelease(DVar6.unknown);
                  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  IVar12 = objc_stub::FUN_100c112a0(IVar5,pNVar7);
                  if (IVar12 == 0) {
                    uStack_a8 = 0;
                    local_b0 = 0;
                    lStack_98 = 0;
                    uStack_a0 = 0;
                  }
                  else {
                    Swift::__bridgeAnyObjectToAny();
                    _swift_unknownObjectRelease(IVar12);
                  }
                  uStack_88 = uStack_a8;
                  local_90 = local_b0;
                  local_78 = lStack_98;
                  uStack_80 = uStack_a0;
                  if (lStack_98 == 0) {
                    FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
                    uVar17 = 1;
                  }
                  else {
                    lVar13 = lVar42;
                    _swift_dynamicCast(lVar42,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                       DVar3.unknown,6);
                    uVar17 = (uint)lVar13 ^ 1;
                  }
                  (*pcVar48)(lVar42,uVar17,1,DVar3.unknown);
                }
                FUN_100354148(lVar42,lVar23);
                lVar13 = lVar23;
                (*pcVar49)(lVar23,1,DVar3.unknown);
                DVar9 = DVar3;
                if ((int)lVar13 == 1) {
                  FUN_100347324(lVar22,IVar5,0x4164657461657263,0xe900000000000074);
                  FUN_100354148(lVar22,puVar2);
                  DVar11.unknown = puVar2;
                  (*pcVar49)(puVar2,1,DVar3.unknown);
                  if ((int)DVar11.unknown == 1) {
                    Foundation::Date::get_distantPast(DVar11);
                    puVar16 = puVar2;
                    (*pcVar49)(puVar2,1,DVar3.unknown);
                    if ((int)puVar16 != 1) {
                      FUN_100005808(puVar2,&DAT_100fbe6e8,&DAT_100c43250);
                    }
                  }
                  else {
                    (**(code **)(lVar46 + 0x20))(DVar33.unknown,puVar2,DVar3.unknown);
                  }
                  lVar13 = lVar23;
                  (*pcVar49)(lVar23,1);
                  if ((int)lVar13 != 1) {
                    DVar9.unknown = &DAT_100c43250;
                    FUN_100005808(lVar23,&DAT_100fbe6e8);
                  }
                }
                else {
                  (**(code **)(lVar46 + 0x20))(DVar33.unknown,lVar23);
                }
                bVar1 = Foundation::Date::>_infix(DVar34,DVar33,DVar9);
                pcVar48 = *(code **)(lVar46 + 8);
                (*pcVar48)(DVar33.unknown,DVar3.unknown);
                (*pcVar48)(DVar34.unknown,DVar3.unknown);
                if (!bVar1) break;
                if (lVar50 == 0) {
                    /* WARNING: Does not return */
                  pcVar48 = (code *)SoftwareBreakpoint(1,0x100349ba8);
                  (*pcVar48)();
                }
                IVar10 = *pIVar45;
                IVar12 = pIVar45[1];
                *pIVar45 = IVar12;
                pIVar45[1] = IVar10;
                bVar1 = lVar39 != -1;
                lVar39 = lVar39 + 1;
                pIVar45 = pIVar45 + -1;
              } while (bVar1);
              lVar8 = lVar8 + 1;
              pIVar38 = pIVar38 + 1;
              lVar40 = lVar40 + -1;
              param_3 = local_1a8;
              lVar39 = lVar21;
            } while (lVar8 != lVar21);
          }
        }
      }
      puVar16 = local_58;
      if (lVar39 < lVar44) {
                    /* WARNING: Does not return */
        pcVar48 = (code *)SoftwareBreakpoint(1,0x100349b8c);
        (*pcVar48)();
      }
      puVar14 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar15 = puVar16;
      if (((ulong)puVar14 & 1) == 0) {
        puVar15 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar16 + 0x10) + 1,1,puVar16);
      }
      uVar4 = *(ulong *)(puVar15 + 0x10);
      puVar16 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar4) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(puVar15 + 0x18));
        FUN_100392630(puVar16,uVar4 + 1,1,puVar15);
      }
      *(ulong *)(puVar16 + 0x10) = uVar4 + 1;
      *(long *)(puVar16 + uVar4 * 0x10 + 0x20) = lVar44;
      *(long *)(puVar16 + uVar4 * 0x10 + 0x28) = lVar39;
      local_58 = puVar16;
      if (*local_1b0 == 0) {
                    /* WARNING: Does not return */
        pcVar48 = (code *)SoftwareBreakpoint(1,0x100349bc0);
        (*pcVar48)();
      }
      FUN_10034ad08(&local_58,*local_1b0,param_3);
      puVar16 = local_58;
      if (unaff_x21 != 0) goto LAB_100349b5c;
      lVar50 = param_3[1];
      lVar44 = lVar39;
    } while (lVar39 < lVar50);
  }
  puVar16 = local_58;
  lVar19 = *local_1b0;
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar48 = (code *)SoftwareBreakpoint(1,0x100349bc8);
    (*pcVar48)();
  }
  puVar2 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar2 & 1) == 0) {
    FUN_100392b74();
  }
  uVar4 = *(ulong *)(puVar16 + 0x10);
  while (local_58 = puVar16, 1 < uVar4) {
    lVar22 = *param_3;
    if (lVar22 == 0) {
                    /* WARNING: Does not return */
      pcVar48 = (code *)SoftwareBreakpoint(1,0x100349bc4);
      (*pcVar48)();
    }
    lVar25 = uVar4 - 1;
    lVar26 = *(long *)(puVar16 + uVar4 * 0x10);
    lVar23 = *(long *)(puVar16 + lVar25 * 0x10 + 0x28);
    FUN_10034b484(lVar22 + lVar26 * 8,lVar22 + *(long *)(puVar16 + lVar25 * 0x10 + 0x20) * 8,
                  lVar22 + lVar23 * 8,lVar19);
    if (unaff_x21 != 0) break;
    if (lVar23 < lVar26) {
                    /* WARNING: Does not return */
      pcVar48 = (code *)SoftwareBreakpoint(1,0x100349b90);
      (*pcVar48)();
    }
    puVar2 = puVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar2 & 1) == 0) {
      FUN_100392b74();
    }
    if (*(ulong *)(puVar16 + 0x10) <= uVar4 - 2) {
                    /* WARNING: Does not return */
      pcVar48 = (code *)SoftwareBreakpoint(1,0x100349b94);
      (*pcVar48)();
    }
    *(long *)(puVar16 + uVar4 * 0x10) = lVar26;
    *(long *)((long)(puVar16 + uVar4 * 0x10) + 8) = lVar23;
    local_58 = puVar16;
    FUN_100392aec(lVar25);
    puVar16 = local_58;
    param_3 = local_1a8;
    uVar4 = *(ulong *)(local_58 + 0x10);
  }
LAB_100349b5c:
  _swift_bridgeObjectRelease(puVar16);
  return;
}



/* Address: 0x100349bc8 | FUN_100349bc8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100349bc8(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  Date DVar3;
  ID self;
  NSString *pNVar4;
  ID IVar5;
  ID IVar6;
  long lVar7;
  Date DVar8;
  undefined *puVar9;
  Date DVar10;
  undefined1 *puVar11;
  long extraout_x8;
  long lVar12;
  long lVar13;
  long extraout_x8_00;
  Date DVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ID *pIVar23;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  ID *pIVar24;
  ID self_00;
  Date DVar25;
  long lVar26;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar20 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  puVar16 = &stack0xfffffffffffffef0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = (long)puVar16 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar17 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar18 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = (undefined *)(lVar19 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar20 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar21 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar22 - extraout_x12_05;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  DVar25.unknown = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar14.unknown = DVar25.unknown + -extraout_x12_06;
  if (param_3 != param_2) {
    lVar15 = *param_4;
    pIVar23 = (ID *)(lVar15 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      self = *(ID *)(lVar15 + param_3 * 8);
      pIVar24 = pIVar23;
      lVar26 = param_1;
      do {
        self_00 = *pIVar24;
        pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar5 = objc_stub::FUN_100c112a0(self,pNVar4);
        if (IVar5 == 0) {
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar5);
        }
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
        pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar6 = objc_stub::FUN_100c112a0(self_00,pNVar4);
        if (IVar6 == 0) {
          uStack_88 = 0;
          local_90 = 0;
          uStack_78 = 0;
          uStack_80 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar6);
        }
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
        if ((IVar5 != 0) == (IVar6 != 0)) {
          FUN_100347324(lVar12,self,0x4164657461647075,0xe900000000000074);
          FUN_100354148(lVar12,lVar22);
          pcVar1 = *(code **)(lVar13 + 0x30);
          lVar7 = lVar22;
          (*pcVar1)(lVar22,1,DVar3.unknown);
          if ((int)lVar7 == 1) {
            FUN_100347324(lVar21,self,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar21,puVar20);
            DVar8.unknown = puVar20;
            (*pcVar1)(puVar20,1,DVar3.unknown);
            if ((int)DVar8.unknown == 1) {
              Foundation::Date::get_distantPast(DVar8);
              puVar9 = puVar20;
              (*pcVar1)(puVar20,1,DVar3.unknown);
              if ((int)puVar9 != 1) {
                FUN_100005808(puVar20,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar13 + 0x20))(DVar14.unknown,puVar20,DVar3.unknown);
            }
            lVar7 = lVar22;
            (*pcVar1)(lVar22,1,DVar3.unknown);
            if ((int)lVar7 != 1) {
              FUN_100005808(lVar22,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar13 + 0x20))(DVar14.unknown,lVar22,DVar3.unknown);
          }
          FUN_100347324(lVar19,self_00,0x4164657461647075,0xe900000000000074);
          FUN_100354148(lVar19,lVar18);
          lVar7 = lVar18;
          (*pcVar1)(lVar18,1,DVar3.unknown);
          DVar8 = DVar3;
          if ((int)lVar7 == 1) {
            FUN_100347324(lVar17,self_00,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar17,puVar16);
            DVar10.unknown = puVar16;
            (*pcVar1)(puVar16,1,DVar3.unknown);
            if ((int)DVar10.unknown == 1) {
              Foundation::Date::get_distantPast(DVar10);
              puVar11 = puVar16;
              (*pcVar1)(puVar16,1,DVar3.unknown);
              if ((int)puVar11 != 1) {
                FUN_100005808(puVar16,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar13 + 0x20))(DVar25.unknown,puVar16,DVar3.unknown);
            }
            lVar7 = lVar18;
            (*pcVar1)(lVar18,1);
            if ((int)lVar7 != 1) {
              DVar8.unknown = &DAT_100c43250;
              FUN_100005808(lVar18,&DAT_100fbe6e8);
            }
          }
          else {
            (**(code **)(lVar13 + 0x20))(DVar25.unknown,lVar18);
          }
          bVar2 = Foundation::Date::>_infix(DVar14,DVar25,DVar8);
          pcVar1 = *(code **)(lVar13 + 8);
          (*pcVar1)(DVar25.unknown,DVar3.unknown);
          (*pcVar1)(DVar14.unknown,DVar3.unknown);
          if (!bVar2) break;
        }
        else if (IVar5 == 0) break;
        if (lVar15 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10034a238);
          (*pcVar1)();
        }
        IVar5 = *pIVar24;
        self = pIVar24[1];
        *pIVar24 = self;
        pIVar24[1] = IVar5;
        bVar2 = lVar26 != -1;
        lVar26 = lVar26 + 1;
        pIVar24 = pIVar24 + -1;
      } while (bVar2);
      param_3 = param_3 + 1;
      pIVar23 = pIVar23 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x10034a238 | FUN_10034a238 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034a238(long param_1,long param_2,long param_3,long *param_4)

{
  bool bVar1;
  Date DVar2;
  ID IVar3;
  ID IVar4;
  Dictionary<undefined,undefined> DVar5;
  NSString *pNVar6;
  long lVar7;
  Date DVar8;
  undefined *puVar9;
  Date DVar10;
  undefined1 *puVar11;
  uint uVar12;
  ulong uVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  Date DVar15;
  long lVar16;
  ID *pIVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  Date extraout_x13;
  ID self;
  long lVar23;
  undefined1 *puVar24;
  ID *pIVar25;
  long lVar26;
  code *pcVar27;
  long lVar28;
  code *pcVar29;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar20 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar20 + -8) + 0x40));
  puVar24 = &stack0xfffffffffffffec0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = (long)puVar24 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar26 = lVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar26 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = (undefined *)(lVar19 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar20 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar21 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar22 - extraout_x12_05;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar15.unknown =
       (undefined *)((lVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_06);
  if (param_3 != param_2) {
    lVar16 = *param_4;
    pIVar17 = (ID *)(lVar16 + param_3 * 8 + -8);
    param_1 = param_1 - param_3;
    do {
      IVar3 = *(ID *)(lVar16 + param_3 * 8);
      lVar23 = param_1;
      pIVar25 = pIVar17;
      do {
        self = *pIVar25;
        IVar4 = objc_stub::entity(IVar3);
        objc_stub::FUN_100bfe2e0(IVar4);
        FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
        DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        if (*(long *)(DVar5.unknown + 0x10) == 0) {
LAB_10034a5c8:
          _swift_bridgeObjectRelease(DVar5.unknown);
          pcVar27 = *(code **)(lVar14 + 0x38);
          (*pcVar27)(lVar28,1,1,DVar2.unknown);
        }
        else {
          _swift_bridgeObjectRetain(DVar5.unknown);
          uVar13 = 0;
          FUN_100071370(0x4164657461647075);
          _swift_bridgeObjectRelease(DVar5.unknown);
          if ((uVar13 & 1) == 0) goto LAB_10034a5c8;
          _swift_bridgeObjectRelease(DVar5.unknown);
          pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar4 = objc_stub::FUN_100c112a0(IVar3,pNVar6);
          if (IVar4 == 0) {
            uStack_a8 = 0;
            local_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar4);
          }
          uStack_88 = uStack_a8;
          local_90 = local_b0;
          local_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
            pcVar27 = *(code **)(lVar14 + 0x38);
            uVar12 = 1;
          }
          else {
            lVar7 = lVar28;
            _swift_dynamicCast(lVar28,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                               DVar2.unknown,6);
            pcVar27 = *(code **)(lVar14 + 0x38);
            uVar12 = (uint)lVar7 ^ 1;
          }
          (*pcVar27)(lVar28,uVar12,1,DVar2.unknown);
        }
        FUN_100354148(lVar28,lVar22);
        pcVar29 = *(code **)(lVar14 + 0x30);
        lVar7 = lVar22;
        (*pcVar29)(lVar22,1,DVar2.unknown);
        if ((int)lVar7 == 1) {
          FUN_100347324(lVar21,IVar3,0x4164657461657263,0xe900000000000074);
          FUN_100354148(lVar21,puVar20);
          DVar8.unknown = puVar20;
          (*pcVar29)(puVar20,1,DVar2.unknown);
          if ((int)DVar8.unknown == 1) {
            Foundation::Date::get_distantPast(DVar8);
            puVar9 = puVar20;
            (*pcVar29)(puVar20,1,DVar2.unknown);
            if ((int)puVar9 != 1) {
              FUN_100005808(puVar20,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar14 + 0x20))(DVar15.unknown,puVar20,DVar2.unknown);
          }
          lVar7 = lVar22;
          (*pcVar29)(lVar22,1,DVar2.unknown);
          if ((int)lVar7 != 1) {
            FUN_100005808(lVar22,&DAT_100fbe6e8,&DAT_100c43250);
          }
        }
        else {
          (**(code **)(lVar14 + 0x20))(DVar15.unknown,lVar22,DVar2.unknown);
        }
        IVar3 = objc_stub::entity(self);
        objc_stub::FUN_100bfe2e0(IVar3);
        DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        if (*(long *)(DVar5.unknown + 0x10) == 0) {
LAB_10034a87c:
          _swift_bridgeObjectRelease(DVar5.unknown);
          (*pcVar27)(lVar19,1,1,DVar2.unknown);
        }
        else {
          _swift_bridgeObjectRetain(DVar5.unknown);
          uVar13 = 0;
          FUN_100071370(0x4164657461647075);
          _swift_bridgeObjectRelease(DVar5.unknown);
          if ((uVar13 & 1) == 0) goto LAB_10034a87c;
          _swift_bridgeObjectRelease(DVar5.unknown);
          pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar3 = objc_stub::FUN_100c112a0(self,pNVar6);
          if (IVar3 == 0) {
            uStack_a8 = 0;
            local_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar3);
          }
          uStack_88 = uStack_a8;
          local_90 = local_b0;
          local_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
            uVar12 = 1;
          }
          else {
            lVar7 = lVar19;
            _swift_dynamicCast(lVar19,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                               DVar2.unknown,6);
            uVar12 = (uint)lVar7 ^ 1;
          }
          (*pcVar27)(lVar19,uVar12,1,DVar2.unknown);
        }
        FUN_100354148(lVar19,lVar26);
        lVar7 = lVar26;
        (*pcVar29)(lVar26,1,DVar2.unknown);
        DVar8 = DVar2;
        if ((int)lVar7 == 1) {
          FUN_100347324(lVar18,self,0x4164657461657263,0xe900000000000074);
          FUN_100354148(lVar18,puVar24);
          DVar10.unknown = puVar24;
          (*pcVar29)(puVar24,1,DVar2.unknown);
          if ((int)DVar10.unknown == 1) {
            Foundation::Date::get_distantPast(DVar10);
            puVar11 = puVar24;
            (*pcVar29)(puVar24,1,DVar2.unknown);
            if ((int)puVar11 != 1) {
              FUN_100005808(puVar24,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar14 + 0x20))(extraout_x13.unknown,puVar24,DVar2.unknown);
          }
          lVar7 = lVar26;
          (*pcVar29)(lVar26,1);
          if ((int)lVar7 != 1) {
            DVar8.unknown = &DAT_100c43250;
            FUN_100005808(lVar26,&DAT_100fbe6e8);
          }
        }
        else {
          (**(code **)(lVar14 + 0x20))(extraout_x13.unknown,lVar26);
        }
        bVar1 = Foundation::Date::>_infix(DVar15,extraout_x13,DVar8);
        pcVar27 = *(code **)(lVar14 + 8);
        (*pcVar27)(extraout_x13.unknown,DVar2.unknown);
        (*pcVar27)(DVar15.unknown,DVar2.unknown);
        if (!bVar1) break;
        if (lVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar27 = (code *)SoftwareBreakpoint(1,0x10034aaa0);
          (*pcVar27)();
        }
        IVar4 = *pIVar25;
        IVar3 = pIVar25[1];
        *pIVar25 = IVar3;
        pIVar25[1] = IVar4;
        bVar1 = lVar23 != -1;
        lVar23 = lVar23 + 1;
        pIVar25 = pIVar25 + -1;
      } while (bVar1);
      param_3 = param_3 + 1;
      pIVar17 = pIVar17 + 1;
      param_1 = param_1 + -1;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x10034aaa0 | FUN_10034aaa0 */

undefined8 FUN_10034aaa0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100392b74();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10034ab74;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acf0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10034abd8:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034ace0);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034ace8);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acc8);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034accc);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acd4);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acdc);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10034ab74:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acd0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acd8);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034ace4);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acec);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10034abd8;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acf4);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acbc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034ad08);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_10034af70(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acc0);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100392b74();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034acc4);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100392aec(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x10034ad08 | FUN_10034ad08 */

undefined8 FUN_10034ad08(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100392b74();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_10034addc;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af58);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_10034ae40:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af48);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af50);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af30);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af34);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af3c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af44);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_10034addc:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af38);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af40);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af4c);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af54);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_10034ae40;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af5c);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af24);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af70);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_10034b484(lVar9 + lVar12 * 8,lVar9 + *plVar1 * 8,lVar9 + lVar7 * 8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af28);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100392b74();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10034af2c);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_100392aec(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x10034af70 | FUN_10034af70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10034af70(ID *param_1,ID *param_2,ID *param_3,ID *param_4)

{
  ulong uVar1;
  NSString *pNVar2;
  ID IVar3;
  ID IVar4;
  long lVar5;
  ID *pIVar6;
  ulong uVar7;
  long lVar8;
  ID *pIVar9;
  ID *pIVar10;
  long lVar11;
  long lVar12;
  ID IVar13;
  ID *pIVar14;
  ID *pIVar15;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar11 = (long)param_2 - (long)param_1;
  lVar5 = lVar11 + 7;
  if (-1 < lVar11) {
    lVar5 = lVar11;
  }
  lVar5 = lVar5 >> 3;
  lVar12 = (long)param_3 - (long)param_2;
  lVar8 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar8 = lVar12;
  }
  lVar8 = lVar8 >> 3;
  if (lVar5 < lVar8) {
    if (((param_4 < param_1) || (param_1 + lVar5 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar5 << 3);
    }
    pIVar10 = param_4 + lVar5;
    pIVar15 = param_1;
    if (7 < lVar11) {
      do {
        if (param_3 <= param_2) break;
        uVar1 = *param_2;
        IVar13 = *param_4;
        pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar3 = objc_stub::FUN_100c112a0(uVar1,pNVar2);
        if (IVar3 == 0) {
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar3);
        }
        FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
        pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar4 = objc_stub::FUN_100c112a0(IVar13,pNVar2);
        if (IVar4 == 0) {
          uStack_78 = 0;
          local_80 = 0;
          uStack_68 = 0;
          uStack_70 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar4);
        }
        FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
        if ((IVar3 != 0) == (IVar4 != 0)) {
          FUN_10034579c(uVar1,IVar13);
          if ((uVar1 & 1) != 0) goto LAB_10034b184;
LAB_10034b1bc:
          pIVar6 = param_4;
          param_4 = param_4 + 1;
        }
        else {
          if (IVar3 == 0) goto LAB_10034b1bc;
LAB_10034b184:
          pIVar6 = param_2;
          param_2 = param_2 + 1;
        }
        if (pIVar15 != pIVar6) {
          *pIVar15 = *pIVar6;
        }
        pIVar15 = pIVar15 + 1;
      } while (param_4 < pIVar10);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar8 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar8 << 3);
    }
    pIVar6 = param_4 + lVar8;
    pIVar10 = pIVar6;
    pIVar15 = param_2;
    if ((param_1 < param_2) && (7 < lVar12)) {
      do {
        pIVar9 = param_2 + -1;
        pIVar14 = param_3;
        while( true ) {
          pIVar10 = pIVar6 + -1;
          uVar7 = *pIVar10;
          IVar3 = *pIVar9;
          pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          uVar1 = objc_stub::FUN_100c112a0(uVar7,pNVar2);
          if (uVar1 == 0) {
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(uVar1);
          }
          FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar13 = objc_stub::FUN_100c112a0(IVar3,pNVar2);
          if (IVar13 == 0) {
            uStack_78 = 0;
            local_80 = 0;
            uStack_68 = 0;
            uStack_70 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar13);
          }
          FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
          if ((uVar1 != 0) == (IVar13 != 0)) {
            FUN_10034579c(uVar7,IVar3);
            uVar1 = uVar7 & 1;
          }
          if (uVar1 != 0) break;
          if (pIVar6 != pIVar14) {
            pIVar14[-1] = *pIVar10;
          }
          pIVar6 = pIVar10;
          pIVar15 = param_2;
          pIVar14 = pIVar14 + -1;
          if (pIVar10 <= param_4) goto LAB_10034b420;
        }
        param_3 = pIVar14 + -1;
        if (pIVar14 != param_2) {
          *param_3 = *pIVar9;
        }
        pIVar10 = pIVar6;
        pIVar15 = pIVar9;
      } while ((param_1 < pIVar9) && (param_2 = pIVar9, param_4 < pIVar6));
    }
  }
LAB_10034b420:
  uVar7 = (long)pIVar10 - (long)param_4;
  uVar1 = uVar7 + 7;
  if (-1 < (long)uVar7) {
    uVar1 = uVar7;
  }
  if ((pIVar15 != param_4) || ((ID *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= pIVar15)) {
    _memmove(pIVar15,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Address: 0x10034b484 | FUN_10034b484 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_10034b484(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  Date DVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  Date DVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  Date DVar24;
  Date DVar25;
  Date DVar26;
  long lVar27;
  undefined8 *puVar28;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  long extraout_x12_06;
  long extraout_x12_07;
  long extraout_x12_08;
  long extraout_x12_09;
  long extraout_x12_10;
  long extraout_x12_11;
  long extraout_x12_12;
  long extraout_x12_13;
  long extraout_x12_14;
  long extraout_x12_15;
  long extraout_x12_16;
  long lVar29;
  code *pcVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  undefined *puVar34;
  undefined8 *puVar35;
  undefined *puVar36;
  undefined auStack_130 [8];
  undefined8 *local_70;
  
  puVar3 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar3 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = (long)puVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar12 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined *)(lVar14 - extraout_x12_02);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)puVar15 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_04;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar17 - extraout_x12_05;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar34 = (undefined *)(lVar18 - extraout_x12_06);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)puVar34 - extraout_x12_07;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar19 - extraout_x12_08;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = lVar20 - extraout_x12_09;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar36 = (undefined *)(lVar21 - extraout_x12_10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = (long)puVar36 - extraout_x12_11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar22 - extraout_x12_12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar23 - extraout_x12_13;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar33 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar33 + 0x40));
  DVar24.unknown = (undefined *)(lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar25.unknown = DVar24.unknown + -extraout_x12_14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar26.unknown = DVar25.unknown + -extraout_x12_15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar8.unknown = DVar26.unknown + -extraout_x12_16;
  lVar29 = (long)param_2 - (long)param_1;
  lVar9 = lVar29 + 7;
  if (-1 < lVar29) {
    lVar9 = lVar29;
  }
  lVar9 = lVar9 >> 3;
  lVar31 = (long)param_3 - (long)param_2;
  lVar27 = lVar31 + 7;
  if (-1 < lVar31) {
    lVar27 = lVar31;
  }
  lVar27 = lVar27 >> 3;
  if (lVar9 < lVar27) {
    if (((param_4 < param_1) || (param_1 + lVar9 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar9 << 3);
    }
    local_70 = param_4 + lVar9;
    puVar6 = param_1;
    if (7 < lVar29) {
      do {
        if (param_3 <= param_2) break;
        uVar5 = *param_2;
        uVar32 = *param_4;
        FUN_100347324(lVar7,uVar5,0x4164657461647075,0xe900000000000074);
        FUN_100354148(lVar7,lVar23);
        pcVar30 = *(code **)(lVar33 + 0x30);
        lVar9 = lVar23;
        (*pcVar30)(lVar23,1,DVar4.unknown);
        if ((int)lVar9 == 1) {
          FUN_100347324(lVar22,uVar5,0x4164657461657263,0xe900000000000074);
          FUN_100354148(lVar22,puVar36);
          DVar24.unknown = puVar36;
          (*pcVar30)(puVar36,1,DVar4.unknown);
          if ((int)DVar24.unknown == 1) {
            Foundation::Date::get_distantPast(DVar24);
            puVar3 = puVar36;
            (*pcVar30)(puVar36,1,DVar4.unknown);
            if ((int)puVar3 != 1) {
              FUN_100005808(puVar36,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar33 + 0x20))(DVar8.unknown,puVar36,DVar4.unknown);
          }
          lVar9 = lVar23;
          (*pcVar30)(lVar23,1,DVar4.unknown);
          if ((int)lVar9 != 1) {
            FUN_100005808(lVar23,&DAT_100fbe6e8,&DAT_100c43250);
          }
        }
        else {
          (**(code **)(lVar33 + 0x20))(DVar8.unknown,lVar23,DVar4.unknown);
        }
        FUN_100347324(lVar21,uVar32,0x4164657461647075,0xe900000000000074);
        FUN_100354148(lVar21,lVar20);
        lVar9 = lVar20;
        (*pcVar30)(lVar20,1,DVar4.unknown);
        DVar24 = DVar4;
        if ((int)lVar9 == 1) {
          FUN_100347324(lVar19,uVar32,0x4164657461657263,0xe900000000000074);
          FUN_100354148(lVar19,puVar34);
          DVar25.unknown = puVar34;
          (*pcVar30)(puVar34,1,DVar4.unknown);
          if ((int)DVar25.unknown == 1) {
            Foundation::Date::get_distantPast(DVar25);
            puVar3 = puVar34;
            (*pcVar30)(puVar34,1,DVar4.unknown);
            if ((int)puVar3 != 1) {
              FUN_100005808(puVar34,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar33 + 0x20))(DVar26.unknown,puVar34,DVar4.unknown);
          }
          lVar9 = lVar20;
          (*pcVar30)(lVar20,1);
          if ((int)lVar9 != 1) {
            DVar24.unknown = &DAT_100c43250;
            FUN_100005808(lVar20,&DAT_100fbe6e8);
          }
        }
        else {
          (**(code **)(lVar33 + 0x20))(DVar26.unknown,lVar20);
        }
        bVar2 = Foundation::Date::>_infix(DVar8,DVar26,DVar24);
        pcVar30 = *(code **)(lVar33 + 8);
        (*pcVar30)(DVar26.unknown,DVar4.unknown);
        (*pcVar30)(DVar8.unknown,DVar4.unknown);
        if (bVar2) {
          puVar10 = param_4;
          puVar28 = param_2 + 1;
          puVar35 = param_2;
        }
        else {
          puVar10 = param_4 + 1;
          puVar28 = param_2;
          puVar35 = param_4;
        }
        param_2 = puVar28;
        param_4 = puVar10;
        if (puVar6 != puVar35) {
          *puVar6 = *puVar35;
        }
        puVar6 = puVar6 + 1;
      } while (param_4 < local_70);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar27 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar27 << 3);
    }
    local_70 = param_4 + lVar27;
    puVar6 = param_2;
    if (7 < lVar31) {
      while (puVar6 = param_2, param_1 < param_2) {
        puVar10 = param_2 + -1;
        puVar35 = param_3;
        while( true ) {
          param_3 = puVar35 + -1;
          puVar28 = local_70 + -1;
          uVar5 = *puVar28;
          uVar32 = *puVar10;
          FUN_100347324(lVar18,uVar5,0x4164657461647075,0xe900000000000074);
          FUN_100354148(lVar18,lVar17);
          pcVar30 = *(code **)(lVar33 + 0x30);
          lVar9 = lVar17;
          (*pcVar30)(lVar17,1,DVar4.unknown);
          if ((int)lVar9 == 1) {
            FUN_100347324(lVar16,uVar5,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar16,puVar15);
            DVar8.unknown = puVar15;
            (*pcVar30)(puVar15,1,DVar4.unknown);
            if ((int)DVar8.unknown == 1) {
              Foundation::Date::get_distantPast(DVar8);
              puVar34 = puVar15;
              (*pcVar30)(puVar15,1,DVar4.unknown);
              if ((int)puVar34 != 1) {
                FUN_100005808(puVar15,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar33 + 0x20))(DVar25.unknown,puVar15,DVar4.unknown);
            }
            lVar9 = lVar17;
            (*pcVar30)(lVar17,1,DVar4.unknown);
            if ((int)lVar9 != 1) {
              FUN_100005808(lVar17,&DAT_100fbe6e8,&DAT_100c43250);
            }
          }
          else {
            (**(code **)(lVar33 + 0x20))(DVar25.unknown,lVar17,DVar4.unknown);
          }
          FUN_100347324(lVar14,uVar32,0x4164657461647075,0xe900000000000074);
          FUN_100354148(lVar14,lVar13);
          lVar9 = lVar13;
          (*pcVar30)(lVar13,1,DVar4.unknown);
          DVar8 = DVar4;
          if ((int)lVar9 == 1) {
            FUN_100347324(lVar12,uVar32,0x4164657461657263,0xe900000000000074);
            FUN_100354148(lVar12,puVar3);
            DVar26.unknown = puVar3;
            (*pcVar30)(puVar3,1,DVar4.unknown);
            if ((int)DVar26.unknown == 1) {
              Foundation::Date::get_distantPast(DVar26);
              puVar34 = puVar3;
              (*pcVar30)(puVar3,1,DVar4.unknown);
              if ((int)puVar34 != 1) {
                FUN_100005808(puVar3,&DAT_100fbe6e8,&DAT_100c43250);
              }
            }
            else {
              (**(code **)(lVar33 + 0x20))(DVar24.unknown,puVar3,DVar4.unknown);
            }
            lVar9 = lVar13;
            (*pcVar30)(lVar13,1);
            if ((int)lVar9 != 1) {
              DVar8.unknown = &DAT_100c43250;
              FUN_100005808(lVar13,&DAT_100fbe6e8);
            }
          }
          else {
            (**(code **)(lVar33 + 0x20))(DVar24.unknown,lVar13);
          }
          bVar2 = Foundation::Date::>_infix(DVar25,DVar24,DVar8);
          pcVar30 = *(code **)(lVar33 + 8);
          (*pcVar30)(DVar24.unknown,DVar4.unknown);
          (*pcVar30)(DVar25.unknown,DVar4.unknown);
          if (bVar2) break;
          if (puVar35 != local_70) {
            *param_3 = *puVar28;
          }
          puVar35 = param_3;
          local_70 = puVar28;
          if (puVar28 <= param_4) goto LAB_10034bfac;
        }
        if (puVar35 != param_2) {
          *param_3 = *puVar10;
        }
        puVar6 = puVar10;
        param_2 = puVar10;
        if (local_70 <= param_4) break;
      }
    }
  }
LAB_10034bfac:
  uVar11 = (long)local_70 - (long)param_4;
  uVar1 = uVar11 + 7;
  if (-1 < (long)uVar11) {
    uVar1 = uVar11;
  }
  if ((puVar6 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= puVar6)) {
    _memmove(puVar6,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}



/* Address: 0x10034c014 | FUN_10034c014 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10034c014(char *param_1,void *param_2)

{
  _CocoaArrayWrapper _Var1;
  void *pvVar2;
  URL UVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  URL UVar6;
  NSURL *pNVar7;
  ID IVar8;
  _ArrayBuffer _Var9;
  ID self;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ID IVar13;
  long lVar14;
  ID IVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  code *local_80;
  undefined *local_78;
  char *local_70;
  void *pvStack_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar11 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar14 - extraout_x12_00;
  if (DAT_100fbe6d8 != -1) {
    _swift_once(&DAT_100fbe6d8,FUN_100308a24);
  }
  IVar8 = DAT_101057970;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar6.unknown = (undefined *)objc_stub::URLForResource_withExtension_(IVar8,pNVar4);
  if (UVar6.unknown == (undefined *)0x0) {
    IVar8 = 0;
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar6);
    UVar6 = UVar3;
    (**(code **)(lVar16 + 0x20))(lVar10,lVar14);
    local_70 = param_1;
    pvStack_68 = param_2;
    _swift_bridgeObjectRetain(param_2);
    SVar17.bridgeObject = &DAT_e400000000000000;
    SVar17.str = (char *)0x6d6f6d2e;
    SVar19.bridgeObject = pNVar5;
    SVar19.str = UVar6.unknown;
    Swift::String::append(SVar17,SVar19);
    pvVar2 = pvStack_68;
    SVar18.bridgeObject = pvStack_68;
    SVar18.str = local_70;
    Foundation::URL::appendingPathComponent(SVar18,UVar6);
    _swift_bridgeObjectRelease(pvVar2);
    UVar6.unknown = &_OBJC_CLASS___NSManagedObjectModel;
    _objc_allocWithZone();
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar6);
    IVar8 = objc_stub::FUN_100c03de0((ID)UVar6.unknown,pNVar7);
    pcVar12 = *(code **)(lVar16 + 8);
    (*pcVar12)(lVar11,UVar3.unknown);
    if (IVar8 != 0) {
      local_80 = pcVar12;
      _Var9.unknown = (undefined *)objc_stub::FUN_100c01ba0(IVar8);
      FUN_10000ec2c(0,&DAT_100fc04b0,&PTR__OBJC_CLASS___NSEntityDescription_100f8db90);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      local_78 = UVar3.unknown;
      if ((ulong)_Var9.unknown >> 0x3e == 0) {
        IVar13 = *(ID *)(((ulong)_Var9.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var9.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var9.unknown) {
          _Var1.unknown = _Var9.unknown;
        }
        IVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (IVar13 != 0) {
        pNVar4 = (NSString *)0x0;
        FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
        _swift_getObjCClassFromMetadata();
        if ((long)IVar13 < 1) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10034c35c);
          (*pcVar12)();
        }
        IVar15 = 0;
        do {
          if (((ulong)_Var9.unknown & 0xc000000000000001) == 0) {
            self = *(ID *)(_Var9.unknown + IVar15 * 8 + 0x20);
          }
          else {
            self = IVar15;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar15,_Var9);
          }
          pNVar5 = pNVar4;
          _NSStringFromClass();
          if (pNVar5 == (NSString *)0x0) {
            SVar18 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar18.bridgeObject);
          }
          IVar15 = IVar15 + 1;
          objc_stub::FUN_100c0c840(self,pNVar5);
        } while (IVar13 != IVar15);
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
      UVar3.unknown = local_78;
      pcVar12 = local_80;
    }
    (*pcVar12)(lVar10,UVar3.unknown);
  }
  return IVar8;
}



/* Address: 0x10034c35c | FUN_10034c35c */

void FUN_10034c35c(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  String SVar4;
  String SVar5;
  undefined1 auStack_68 [24];
  undefined *local_50;
  long lStack_48;
  
  puVar1 = &DAT_100c42318;
  _swift_getKeyPath(&DAT_100c42318);
  puVar2 = &DAT_100fbdbb0;
  FUN_1000037f0(&DAT_100fbdbb0,&DAT_100c3eff0);
  _swift_initStackObject();
  FUN_1000da6e0(puVar1,puVar2);
  FUN_1000da768(auStack_68);
  _swift_release(puVar1);
  _Var3.unknown = local_50;
  FUN_100004640(auStack_68);
  Swift::_StringGuts::grow(0x1d,_Var3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar4,SVar5);
  (**(code **)(lStack_48 + 0x30))
            (0x6573616261746164,&DAT_e800000000000000,0xd00000000000001b,0x8000000100da2b10,local_50
             ,lStack_48);
  _swift_bridgeObjectRelease(0x8000000100da2b10);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10034c480 | FUN_10034c480 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034c480(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  char *pcVar2;
  NSError *pNVar3;
  undefined8 uVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  char *local_d8;
  void *pvStack_d0;
  undefined *local_c0;
  undefined8 uStack_b8;
  
  pcVar8 = param_3;
  pvVar9 = param_4;
  local_d8 = param_1;
  pvStack_d0 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar10.bridgeObject = &SUB_e200000000000000;
  SVar10.str = (char *)0x203a;
  SVar12.bridgeObject = pvVar9;
  SVar12.str = pcVar8;
  Swift::String::append(SVar10,SVar12);
  pNVar3 = Foundation::__convertErrorToNSError();
  pvVar6 = (void *)0x0;
  FUN_10030fb80();
  SVar11.bridgeObject = pvVar6;
  SVar11.str = (char *)pNVar3;
  SVar13.bridgeObject = pvVar9;
  SVar13.str = pcVar8;
  Swift::String::append(SVar11,SVar13);
  _swift_bridgeObjectRelease(pvVar6);
  pvVar6 = pvStack_d0;
  pcVar2 = local_d8;
  SVar1.bridgeObject = pvStack_d0;
  SVar1.str = local_d8;
  FUN_1000d4ca4(0);
  _swift_initStackObject();
  uVar4 = 0xd00000000000001e;
  FUN_1000d4624(0xd00000000000001e,0x8000000100da2d00);
  FUN_1000d468c(&local_d8);
  _Var7.unknown = local_c0;
  FUN_100004640(&local_d8);
  Swift::_StringGuts::grow(0x1d,_Var7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar14.bridgeObject = pvVar9;
  SVar14.str = pcVar8;
  Swift::String::append(SVar1,SVar14);
  FUN_1000d4e0c(0xd00000000000001b,0x8000000100da2b10,local_c0,uStack_b8);
  _swift_bridgeObjectRelease(0x8000000100da2b10);
  FUN_100004594(&local_d8);
  FUN_10034c35c(pcVar2,pvVar6);
  _swift_bridgeObjectRelease(pvVar6);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c8f44(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_100377dbc(param_3,param_4,puVar5);
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Address: 0x10034c628 | FUN_10034c628 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034c628(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10034c654 | FUN_10034c654 */

void FUN_10034c654(void)

{
  long unaff_x20;
  
  FUN_10034376c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10034c65c | FUN_10034c65c */

void FUN_10034c65c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10034c66c | FUN_10034c66c */

void FUN_10034c66c(long param_1,long param_2)

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



/* Address: 0x10034c680 | FUN_10034c680 */

void FUN_10034c680(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10034c688 | FUN_10034c688 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034c688(ID param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var3.unknown = (undefined *)objc_stub::persistentStores(param_1);
  FUN_10000ec2c(0,&DAT_100fc0448,&PTR__OBJC_CLASS___NSPersistentStore_100f8dbb0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar7 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      return;
    }
  }
  else {
    if (lVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c878);
      (*pcVar2)();
    }
    lVar8 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        lVar5 = *(long *)(_Var3.unknown + lVar8 * 8 + 0x20);
      }
      else {
        lVar5 = lVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar8,_Var3);
      }
      local_70 = 0;
      IVar6 = objc_stub::FUN_100c091a0(param_1,lVar5,&local_70);
      if ((int)IVar6 == 0) {
        uVar4 = local_70;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        FUN_10034c480(0xd000000000000024,0x8000000100da2ab0,uVar4,5);
        _swift_errorRelease(uVar4);
      }
      lVar8 = lVar8 + 1;
    } while (lVar7 != lVar8);
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10034c87c | FUN_10034c87c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034c9c8) */

__int64 FUN_10034c87c(ID param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  undefined *puVar4;
  NSString *pNVar5;
  _ArrayBuffer self;
  NSPredicate *pNVar6;
  undefined *puVar7;
  ulong uVar8;
  __int64 _Var9;
  ulong uVar10;
  
  puVar4 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar4,pNVar5);
  pNVar6 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar4 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined **)(puVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar7 = puVar4;
  FUN_10030d9e0();
  *(undefined **)(puVar4 + 0x40) = puVar7;
  *(undefined8 *)(puVar4 + 0x20) = 0x6d657469;
  *(undefined1 **)(puVar4 + 0x28) = &DAT_e400000000000000;
  pNVar6 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar6);
  objc_stub::setPredicate_((ID)self.unknown,pNVar6);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if ((ulong)self.unknown >> 0x3e == 0) {
    _Var9 = *(__int64 *)((self.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = self.unknown & 0xffffffffffffff8U;
    if (((ulong)self.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = self.unknown;
    }
    _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (_Var9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034cadc);
          (*pcVar3)();
        }
        uVar8 = *(ulong *)(self.unknown + uVar10 * 8 + 0x20);
      }
      else {
        uVar8 = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,self);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10034cad8);
        (*pcVar3)();
      }
      objc_stub::deleteObject_(param_1,uVar8);
      uVar10 = uVar10 + 1;
    } while (lVar1 != _Var9);
  }
  if ((ulong)self.unknown >> 0x3e == 0) {
    _Var9 = *(__int64 *)((self.unknown & 0xffffffffffffff8U) + 0x10);
  }
  else {
    _Var2.unknown = self.unknown & 0xffffffffffffff8U;
    if (((ulong)self.unknown & 0x8000000000000000) != 0) {
      _Var2.unknown = self.unknown;
    }
    _Var9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  _swift_bridgeObjectRelease(self.unknown);
  return _Var9;
}



/* Address: 0x10034caf0 | FUN_10034caf0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10034caf0(_ArrayBuffer param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  long lVar4;
  ulong self;
  NSString *pNVar5;
  ID IVar6;
  ulong *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  long lVar15;
  ulong uVar16;
  ulong local_b0;
  ulong uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c977c();
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar4 != 0) {
    pcVar14 = (code *)0x0;
    lVar15 = 4;
    do {
      uVar13 = lVar15 - 4;
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10034cde0);
          (*pcVar14)();
        }
        self = *(ulong *)(param_1.unknown + lVar15 * 8);
      }
      else {
        self = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,param_1);
      }
      lVar1 = lVar15 + -3;
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10034cdd4);
        (*pcVar14)();
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar6 = objc_stub::FUN_100c112a0(self,pNVar5);
      if (IVar6 == 0) {
        uStack_98 = 0;
        local_a0 = (undefined *)0x0;
        lStack_88 = 0;
        uStack_90 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar6);
      }
      uStack_78 = uStack_98;
      local_80 = local_a0;
      local_68 = lStack_88;
      uStack_70 = uStack_90;
      if (lStack_88 == 0) {
        FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10034cc48:
        FUN_100004550(pcVar14,0);
        uVar13 = 0;
        uVar16 = 0xe000000000000000;
      }
      else {
        puVar7 = &local_b0;
        _swift_dynamicCast(puVar7,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        uVar16 = uStack_a8;
        uVar13 = local_b0;
        if (((ulong)puVar7 & 1) == 0) goto LAB_10034cc48;
        FUN_100004550(pcVar14,0);
      }
      puVar8 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar11 = uVar13;
      uVar9 = uVar16;
      local_80 = puVar3;
      FUN_100071370();
      uVar12 = (ulong)~(uint)uVar9 & 1;
      lVar10 = *(long *)(puVar3 + 0x10) + uVar12;
      if (SCARRY8(*(long *)(puVar3 + 0x10),uVar12)) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x10034cdd8);
        (*pcVar14)();
      }
      if (*(long *)(puVar3 + 0x18) < lVar10) {
        FUN_10031db58(lVar10,puVar8);
        puVar3 = local_80;
        uVar11 = uVar13;
        uVar12 = uVar16;
        FUN_100071370();
        if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10034ce30);
          (*pcVar14)();
        }
      }
      else if (((ulong)puVar8 & 1) == 0) {
        FUN_10031cb94();
        puVar3 = local_80;
      }
      if ((uVar9 & 1) == 0) {
        *(ulong *)(puVar3 + (uVar11 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar3 + (uVar11 >> 6) * 8 + 0x40) | 1L << (uVar11 & 0x3f);
        puVar7 = (ulong *)(*(long *)(puVar3 + 0x30) + uVar11 * 0x10);
        *puVar7 = uVar13;
        puVar7[1] = uVar16;
        *(undefined **)(*(long *)(puVar3 + 0x38) + uVar11 * 8) =
             PTR___swiftEmptyArrayStorage_100eae0d8;
        if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x10034cddc);
          (*pcVar14)();
        }
        *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
        _swift_bridgeObjectRetain(uVar16);
      }
      lVar10 = *(long *)(puVar3 + 0x38);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar11 = *(ulong *)(lVar10 + uVar11 * 8) & 0xffffffffffffff8;
      uVar13 = *(ulong *)(uVar11 + 0x10);
      uVar11 = *(ulong *)(uVar11 + 0x18);
      if (uVar11 >> 1 <= uVar13) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar11,uVar13 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar13,self);
      _swift_bridgeObjectRelease(uVar16);
      lVar15 = lVar15 + 1;
      pcVar14 = thunk_FUN_1002f3d84;
    } while (lVar1 != lVar4);
  }
  return puVar3;
}



/* Address: 0x10034ce30 | FUN_10034ce30 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10034ce30(ID param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  NSString *pNVar4;
  undefined1 auVar5 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  iVar1 = (int)&local_90;
  IVar2 = objc_stub::entity(param_1);
  objc_stub::FUN_100bfe2e0(IVar2);
  FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar3.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(DVar3.unknown);
    FUN_100071370(param_2);
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    if ((param_3 & 1) != 0) {
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar2 = objc_stub::FUN_100c112a0(param_1,pNVar4);
      if (IVar2 == 0) {
        uStack_78 = 0;
        local_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar2);
      }
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 != 0) {
        _swift_dynamicCast(&local_90,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (iVar1 == 0) {
          local_90 = 0;
          uStack_88 = 0;
        }
        goto LAB_10034cfb4;
      }
      FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
    }
  }
  local_90 = 0;
  uStack_88 = 0;
LAB_10034cfb4:
  auVar5._8_8_ = uStack_88;
  auVar5._0_8_ = local_90;
  return auVar5;
}



/* Address: 0x10034cfcc | FUN_10034cfcc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10034cfcc(undefined8 param_1,undefined8 param_2,ID param_3,ID param_4)

{
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  ID self;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  undefined1 auStack_60 [32];
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c07020(param_3,pNVar1);
  IVar3 = objc_stub::FUN_100bfdae0(IVar2);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  objc_stub::FUN_100c08ee0(IVar2);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::FUN_100c07020(param_4,pNVar1);
  IVar2 = IVar3;
  for (lVar5 = *(long *)(IVar3 + 0x10); lVar5 != 0; lVar5 = lVar5 + -1) {
    IVar2 = IVar2 + 0x20;
    FUN_10000cbfc(IVar2,auStack_60);
    FUN_100011080(auStack_60,auStack_80);
    puVar4 = auStack_80;
    FUN_100004640(auStack_80,local_68);
    Swift::__bridgeAnythingToObjectiveC();
    objc_stub::addObject_(self,puVar4);
    _swift_unknownObjectRelease(puVar4);
    FUN_100004594(auStack_80);
  }
  _swift_bridgeObjectRelease(IVar3);
  return 0;
}



/* Address: 0x10034d11c | FUN_10034d11c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10034d11c(ID param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  NSString *pNVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  IVar2 = objc_stub::entity(param_1);
  objc_stub::FUN_100bfe2e0(IVar2);
  FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
  DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(DVar3.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
  else {
    _swift_bridgeObjectRetain(DVar3.unknown);
    FUN_100071370(param_2);
    _swift_bridgeObjectRelease_n(DVar3.unknown,2);
    if ((param_3 & 1) != 0) {
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar2 = objc_stub::FUN_100c112a0(param_1,pNVar4);
      if (IVar2 == 0) {
        uStack_78 = 0;
        local_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar2);
      }
      puVar1 = PTR___type_metadata_for_Any_100eae0c0;
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 != 0) {
        puVar5 = &local_88;
        _swift_dynamicCast(puVar5,&local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_Int_100eac6f8,6);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10034d2a8;
LAB_10034d32c:
        uVar6 = 0;
        goto LAB_10034d234;
      }
      FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10034d2a8:
      pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar2 = objc_stub::FUN_100c112a0(param_1,pNVar4);
      if (IVar2 == 0) {
        uStack_78 = 0;
        local_80 = 0;
        lStack_68 = 0;
        uStack_70 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar2);
      }
      uStack_58 = uStack_78;
      local_60 = local_80;
      local_48 = lStack_68;
      uStack_50 = uStack_70;
      if (lStack_68 == 0) {
        FUN_100005808(&local_60,&DAT_100fbe6f0,&DAT_100c42750);
      }
      else {
        puVar5 = &local_88;
        _swift_dynamicCast(puVar5,&local_60,puVar1 + 8,PTR___type_metadata_for_Swift_Int64_100eadc00
                           ,6);
        if (((ulong)puVar5 & 1) != 0) goto LAB_10034d32c;
      }
    }
  }
  local_88 = 0;
  uVar6 = 1;
LAB_10034d234:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = local_88;
  return auVar7;
}



/* Address: 0x10034d354 | FUN_10034d354 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034d354(char *param_1,ID param_2,undefined8 param_3,undefined1 *param_4)

{
  char *pcVar1;
  void *pvVar2;
  undefined *puVar3;
  char *pcVar4;
  NSString *pNVar5;
  ID IVar6;
  undefined8 uVar7;
  ID *pIVar8;
  ID IVar9;
  NSNumber *pNVar10;
  NSString *pNVar11;
  char *pcVar12;
  undefined1 *puVar13;
  void *pvVar14;
  String SVar15;
  String SVar16;
  ID local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 uStack_70;
  long local_68;
  
  pvVar14 = (void *)0x696669746e656469;
  puVar13 = param_4;
  if (param_4 == (undefined1 *)0x0) {
    local_80 = 0x3a7473696c;
    puStack_78 = &DAT_e500000000000000;
    pcVar12 = (char *)0xea00000000007265;
    pcVar4 = param_1;
    FUN_10034ce30();
    pcVar1 = (char *)0x0;
    if (pvVar14 != (void *)0x0) {
      pcVar1 = pcVar4;
    }
    pvVar2 = (void *)0xe000000000000000;
    if (pvVar14 != (void *)0x0) {
      pvVar2 = pvVar14;
    }
    SVar15.bridgeObject = pvVar2;
    SVar15.str = pcVar1;
    SVar16.bridgeObject = puVar13;
    SVar16.str = pcVar12;
    Swift::String::append(SVar15,SVar16);
    _swift_bridgeObjectRelease(pvVar2);
    puVar13 = puStack_78;
  }
  _swift_bridgeObjectRetain(param_4);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::FUN_100c112a0((ID)param_1,pNVar5);
  if (IVar6 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar6);
  }
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  puStack_78 = (undefined1 *)uStack_98;
  local_80 = local_a0;
  local_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
    IVar6 = 0;
  }
  else {
    uVar7 = 0;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    pIVar8 = &local_a8;
    _swift_dynamicCast(pIVar8,&local_80,puVar3 + 8,uVar7,6);
    IVar6 = local_a8;
    if ((int)pIVar8 == 0) {
      IVar6 = 0;
    }
  }
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar9 = objc_stub::FUN_100c112a0(param_2,pNVar5);
  if (IVar9 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    lStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar9);
  }
  puStack_78 = (undefined1 *)uStack_98;
  local_80 = local_a0;
  local_68 = lStack_88;
  uStack_70 = uStack_90;
  if (lStack_88 == 0) {
    FUN_100005808(&local_80,&DAT_100fbe6f0,&DAT_100c42750);
    if (IVar6 == 0) goto LAB_10034d768;
  }
  else {
    uVar7 = 0;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    pIVar8 = &local_a8;
    _swift_dynamicCast(pIVar8,&local_80,puVar3 + 8,uVar7,6);
    IVar9 = local_a8;
    if ((int)pIVar8 == 0) {
      IVar9 = 0;
    }
    if (IVar6 == 0) {
      if (IVar9 != 0) {
        pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(param_2,0,pNVar5);
        pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_((ID)param_1,IVar9,pNVar5);
        pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar13);
        pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(IVar9,pNVar5,pNVar11);
        return;
      }
LAB_10034d768:
      _swift_bridgeObjectRelease(puVar13);
      return;
    }
    if (IVar9 != 0) {
      FUN_10034d11c(IVar6,0x7865646e69,&DAT_e500000000000000);
      FUN_10034d11c(IVar9,0x7865646e69,&DAT_e500000000000000);
      pNVar10 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKey_(IVar6,pNVar10,pNVar5);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar13);
      pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKey_(IVar6,pNVar5,pNVar11);
      return;
    }
  }
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar13);
  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_(IVar6,pNVar5,pNVar11);
  return;
}



/* Address: 0x10034d790 | FUN_10034d790 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034d984) */
/* WARNING: Removing unreachable block (ram,0x00010034dc3c) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010034dc34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined8 FUN_10034d790(ID param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  _ArrayBuffer _Var8;
  ID IVar9;
  NSString *pNVar10;
  undefined8 *puVar11;
  JSONDecoder *pJVar12;
  undefined *puVar13;
  JSONEncoder *pJVar14;
  JSONEncoder *pJVar15;
  Data DVar16;
  NSData *pNVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ID *pIVar24;
  ID IVar25;
  undefined *local_130;
  long local_100;
  undefined1 *puStack_f8;
  long local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long local_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  
  _Var8.unknown = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_initStackObject();
  *(undefined8 *)(_Var8.unknown + 0x18) = 5;
  *(undefined8 *)(_Var8.unknown + 0x10) = 2;
  pIVar24 = (ID *)(_Var8.unknown + 0x20);
  *pIVar24 = param_1;
  *(undefined8 *)(_Var8.unknown + 0x28) = param_2;
  local_130 = PTR___swiftEmptyArrayStorage_100eae0d8;
  IVar25 = 0;
  do {
    while( true ) {
      if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(_Var8.unknown + 0x10) <= (long)IVar25) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10034dcd4);
          (*pcVar6)();
        }
        IVar9 = pIVar24[IVar25];
      }
      else {
        IVar9 = IVar25;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar25,_Var8);
      }
      pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar9 = objc_stub::FUN_100c112a0(IVar9,pNVar10);
      if (IVar9 == 0) {
        puStack_b8 = (undefined1 *)0x0;
        local_c0 = 0;
        uStack_a8 = 0;
        uStack_b0 = 0;
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar9);
      }
      puStack_f8 = puStack_b8;
      local_100 = local_c0;
      local_e8 = uStack_a8;
      local_f0 = uStack_b0;
      if (uStack_a8 != 0) break;
      FUN_100005808(&local_100,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10034d864:
      IVar25 = IVar25 + 1;
      if (IVar25 == 2) goto LAB_10034db44;
    }
    puVar11 = &local_d0;
    _swift_dynamicCast(puVar11,&local_100,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Foundation_Data_100ea7300,6);
    uVar5 = uStack_c8;
    uVar4 = local_d0;
    if (((ulong)puVar11 & 1) == 0) goto LAB_10034d864;
    pJVar12 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar12,*(undefined4 *)(pJVar12 + 0x30),*(undefined2 *)(pJVar12 + 0x34));
    FUN_1001037b4(uVar4,uVar5);
    pJVar12 = Foundation::JSONDecoder::init(pJVar12);
    FUN_1003254cc();
    Foundation::JSONDecoder::_decode(pJVar12,(Data)0x100eca9e8);
    FUN_10003bf2c(uVar4,uVar5);
    _swift_release(pJVar12);
    lVar19 = local_f0;
    puVar2 = puStack_f8;
    cVar3 = (char)local_e8;
    if (puStack_f8 != (undefined1 *)0x0) {
      if ((local_100 == 0x6472616f626e6970) && (puStack_f8 == &DAT_e800000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e800000000000000);
        FUN_10003bf2c(uVar4,uVar5);
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6472616f626e6970,(_StringGuts)0xe800000000000000,
                           (_StringComparisonResult)(__int8)local_100);
        _swift_bridgeObjectRelease(puVar2);
        FUN_10003bf2c(uVar4,uVar5);
        if (!bVar7) goto LAB_10034dab8;
      }
      goto LAB_10034d864;
    }
    FUN_10003bf2c(uVar4,uVar5);
LAB_10034dab8:
    lVar18 = 0x1e;
    if (cVar3 != '\x01') {
      lVar18 = lVar19;
    }
    puVar13 = local_130;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar13 & 1) == 0) {
      plVar20 = (long *)(local_130 + 0x10);
      local_130 = (undefined *)0x0;
      FUN_100380258(0,*plVar20 + 1,1);
    }
    uVar1 = *(ulong *)(local_130 + 0x10);
    if (*(ulong *)(local_130 + 0x18) >> 1 <= uVar1) {
      puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_130 + 0x18));
      FUN_100380258(puVar13,uVar1 + 1,1,local_130);
      local_130 = puVar13;
    }
    *(ulong *)(local_130 + 0x10) = uVar1 + 1;
    *(long *)(local_130 + uVar1 * 8 + 0x20) = lVar18;
    bVar7 = IVar25 != 1;
    IVar25 = IVar25 + 1;
  } while (bVar7);
LAB_10034db44:
  _swift_setDeallocating(_Var8.unknown);
  _swift_arrayDestroy(pIVar24,*(undefined8 *)(_Var8.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  lVar19 = 0;
  lVar18 = *(long *)(local_130 + 0x10);
  do {
    if (lVar18 == lVar19) {
      if (lVar18 == 0) {
        lVar19 = 0x1e;
      }
      else {
        lVar22 = *(long *)(local_130 + 0x20);
        lVar18 = lVar18 + -1;
        lVar19 = lVar22;
        if (lVar18 != 0) {
          plVar20 = (long *)(local_130 + 0x28);
          lVar23 = lVar22;
          do {
            lVar21 = *plVar20;
            lVar19 = lVar21;
            if (lVar21 <= lVar22) {
              lVar19 = lVar23;
            }
            if (lVar22 <= lVar21) {
              lVar22 = lVar21;
            }
            lVar18 = lVar18 + -1;
            plVar20 = plVar20 + 1;
            lVar23 = lVar19;
          } while (lVar18 != 0);
        }
      }
      goto LAB_10034dbdc;
    }
    lVar22 = lVar19 * 8;
    lVar19 = lVar19 + 1;
  } while (*(long *)(local_130 + lVar22 + 0x20) != 0);
  lVar19 = 0;
LAB_10034dbdc:
  _swift_bridgeObjectRelease();
  pJVar14 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar14,*(undefined4 *)(pJVar14 + 0x30),*(undefined2 *)(pJVar14 + 0x34));
  pJVar15 = Foundation::JSONEncoder::init(pJVar14);
  puStack_f8 = (undefined1 *)0xe900000000000064;
  local_100._0_1_ = 'c';
  local_100._1_1_ = 'l';
  local_100._2_1_ = 'i';
  local_100._3_1_ = 'p';
  local_100._4_1_ = 'b';
  local_100._5_1_ = 'o';
  local_100._6_1_ = 'a';
  local_100._7_1_ = 'r';
  local_e8 = local_e8 & 0xffffffffffffff00;
  local_e0 = 0;
  local_d8 = 1;
  pJVar14 = pJVar15;
  local_f0 = lVar19;
  FUN_10032b230();
  puVar13 = &DAT_100eca9e8;
  DVar16 = Foundation::JSONEncoder::_encode(pJVar15,pJVar14,&DAT_100eca9e8,pJVar14);
  _swift_release(pJVar15);
  pNVar17 = Foundation::Data::_bridgeToObjectiveC(DVar16);
  FUN_10003bf2c(DVar16.unknown,puVar13);
  pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setValue_forKey_(param_1,pNVar17,pNVar10);
  _swift_unknownObjectRelease(pNVar17);
  return 0;
}



/* Address: 0x10034dcd4 | FUN_10034dcd4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034dcd4(ID param_1)

{
  NSString *pNVar1;
  ID IVar2;
  undefined8 uVar3;
  ID *pIVar4;
  NSString *pNVar5;
  ID local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(param_1,pNVar1);
  if (IVar2 == 0) {
    uStack_68 = 0;
    local_70 = 0;
    lStack_58 = 0;
    uStack_60 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_48 = uStack_68;
  local_50 = local_70;
  local_38 = lStack_58;
  uStack_40 = uStack_60;
  if (lStack_58 == 0) {
    FUN_100005808(&local_50,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    uVar3 = 0;
    FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
    pIVar4 = &local_78;
    _swift_dynamicCast(pIVar4,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar3,6);
    if (((ulong)pIVar4 & 1) != 0) {
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKey_(local_78,pNVar1,pNVar5);
    }
  }
  return;
}



/* Address: 0x10034de2c | FUN_10034de2c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034ded0) */

long FUN_10034de2c(ID param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  NSString *pNVar5;
  ID IVar6;
  ID IVar7;
  ulong uVar8;
  Range<__int64> RVar9;
  _ArrayBuffer _Var10;
  __ContiguousArrayStorageBase *p_Var11;
  _ArrayBuffer _Var12;
  long lVar13;
  __int64 _Var14;
  ContiguousArray CVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  Range<__int64> RVar20;
  long lVar21;
  _CocoaArrayWrapper _Var22;
  long lVar23;
  ContiguousArray CVar24;
  long lVar25;
  _ArrayBuffer _Var26;
  ulong uVar27;
  long local_c0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *local_70;
  
  puVar4 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::initWithEntityName_((ID)puVar4,pNVar5);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  IVar7 = IVar6;
  FUN_10034caf0();
  _swift_bridgeObjectRelease(IVar6);
  local_c0 = 0;
  lVar25 = 0;
  uVar17 = 1L << ((ulong)*(byte *)(IVar7 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(IVar7 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar17 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(IVar7 + 0x40);
joined_r0x00010034df78:
  do {
    while (uVar18 == 0) {
      bVar3 = SCARRY8(lVar25,1);
      lVar25 = lVar25 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e564);
        (*pcVar2)();
      }
      if ((long)(uVar17 + 0x3f >> 6) <= lVar25) {
        _swift_release(IVar7);
        return local_c0;
      }
      uVar18 = ((ulong *)(IVar7 + 0x40))[lVar25];
    }
    uVar27 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar27 = (uVar27 & 0xcccccccccccccccc) >> 2 | (uVar27 & 0x3333333333333333) << 2;
    uVar27 = (uVar27 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar27 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar27 = (uVar27 & 0xff00ff00ff00ff00) >> 8 | (uVar27 & 0xff00ff00ff00ff) << 8;
    uVar27 = (uVar27 & 0xffff0000ffff0000) >> 0x10 | (uVar27 & 0xffff0000ffff) << 0x10;
    uVar18 = uVar18 - 1 & uVar18;
    _Var26.unknown =
         *(undefined **)
          (*(long *)(IVar7 + 0x38) + LZCOUNT(uVar27 >> 0x20 | uVar27 << 0x20) * 8 + lVar25 * 0x200);
    if ((ulong)_Var26.unknown >> 0x3e != 0) goto LAB_10034e3bc;
    uVar27 = *(ulong *)(((ulong)_Var26.unknown & 0xffffffffffffff8) + 0x10);
  } while (uVar27 < 2);
  local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRetain(_Var26.unknown);
  goto LAB_10034dfe8;
LAB_10034e3bc:
  _Var22.unknown = _Var26.unknown & 0xffffffffffffff8;
  if ((undefined *)0x7fffffffffffffff < _Var26.unknown) {
    _Var22.unknown = _Var26.unknown;
  }
  _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
  if (_Var14 < 2) goto joined_r0x00010034df78;
  local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
  _swift_bridgeObjectRetain(_Var26.unknown);
  _Var22.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  _Var12.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar27 != 0) {
LAB_10034dfe8:
    uVar19 = 0;
    do {
      if (((ulong)_Var26.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var26.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e558);
          (*pcVar2)();
        }
        uVar8 = *(ulong *)(_Var26.unknown + uVar19 * 8 + 0x20);
      }
      else {
        uVar8 = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var26);
      }
      uVar1 = uVar19 + 1;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e554);
        (*pcVar2)();
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar6 = objc_stub::FUN_100c112a0(uVar8,pNVar5);
      if (IVar6 == 0) {
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar6);
        CVar24.unknown = (undefined *)&local_90;
        CVar15.unknown = &DAT_100fbe6f0;
        FUN_100005808(CVar24.unknown,&DAT_100fbe6f0,&DAT_100c42750);
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar24);
                    /* WARNING: Load size is inaccurate */
        CVar24.unknown = local_70[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar24.unknown,CVar15);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar24.unknown,uVar8);
        Swift::ContiguousArray::__endMutation(CVar24);
      }
      _Var22.unknown = local_70;
      uVar19 = uVar19 + 1;
    } while (uVar1 != uVar27);
    uVar19 = 0;
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (((ulong)_Var26.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var26.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e560);
          (*pcVar2)();
        }
        uVar8 = *(ulong *)(_Var26.unknown + uVar19 * 8 + 0x20);
      }
      else {
        uVar8 = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var26);
      }
      uVar1 = uVar19 + 1;
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e55c);
        (*pcVar2)();
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar6 = objc_stub::FUN_100c112a0(uVar8,pNVar5);
      if (IVar6 == 0) {
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        CVar24.unknown = (undefined *)&local_90;
        CVar15.unknown = &DAT_100fbe6f0;
        FUN_100005808(CVar24.unknown,&DAT_100fbe6f0,&DAT_100c42750);
        Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar24);
                    /* WARNING: Load size is inaccurate */
        CVar24.unknown = local_70[0x10];
        Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                  ((__int64)CVar24.unknown,CVar15);
        Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar24.unknown,uVar8);
        Swift::ContiguousArray::__endMutation(CVar24);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar6);
        FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
      }
      uVar19 = uVar19 + 1;
      _Var12.unknown = local_70;
    } while (uVar1 != uVar27);
  }
  _swift_bridgeObjectRelease(_Var26.unknown);
  if (((long)_Var22.unknown < 0) || (((ulong)_Var22.unknown >> 0x3e & 1) != 0)) {
    _Var14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
    if (1 < _Var14) goto LAB_10034e438;
    uVar27 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
  }
  else {
    uVar27 = *(ulong *)(_Var22.unknown + 0x10);
    if (1 < uVar27) {
LAB_10034e438:
      _swift_release(_Var22.unknown);
      _swift_release(_Var12.unknown);
      goto joined_r0x00010034df78;
    }
  }
  _swift_release(_Var22.unknown);
  if (uVar27 != 0) goto LAB_10034e39c;
  uVar16 = (uint)((ulong)_Var12.unknown >> 0x3e) & 1;
  if ((long)_Var12.unknown < 0) {
    uVar16 = 1;
  }
  if (uVar16 == 1) {
    _Var22.unknown = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var12.unknown);
    if ((long)_Var22.unknown < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e57c);
      (*pcVar2)();
    }
    RVar20.unknown = (undefined *)(ulong)(_Var22.unknown != (undefined *)0x0);
    _Var14 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var12.unknown);
    if (_Var14 < (long)RVar20.unknown) goto LAB_10034e568;
    _Var14 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)_Var12.unknown);
    uVar27 = param_4;
    if (_Var14 < (long)_Var22.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e570);
      (*pcVar2)();
    }
  }
  else {
                    /* WARNING: Load size is inaccurate */
    _Var22.unknown = _Var12.unknown[0x10];
    RVar20.unknown = (undefined *)(ulong)(_Var22.unknown != (undefined *)0x0);
    uVar27 = param_4;
    if (_Var22.unknown < RVar20.unknown) {
LAB_10034e568:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e56c);
      (*pcVar2)();
    }
  }
  if (((ulong)_Var12.unknown & 0xc000000000000001) == 0) {
    _swift_bridgeObjectRetain(_Var12.unknown);
  }
  else {
    _swift_bridgeObjectRetain(_Var12.unknown);
    RVar9.unknown = RVar20.unknown;
    if (&DAT_00000001 < _Var22.unknown) {
      do {
        puVar4 = RVar9.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar9.unknown,_Var12);
        RVar9.unknown = puVar4;
      } while (_Var22.unknown != puVar4);
    }
  }
  _swift_release(_Var12.unknown);
  if (uVar16 == 0) {
    param_4 = uVar27;
    _Var26.unknown = RVar20.unknown;
    _Var10.unknown = _Var12.unknown;
    uVar27 = (long)_Var22.unknown << 1 | 1;
    _Var22.unknown = _Var12.unknown + 0x20;
LAB_10034e318:
    p_Var11 = Swift::__ContiguousArrayStorageBase::typeMetadataAccessor();
    puVar4 = _Var10.unknown;
    _swift_unknownObjectRetain_n(_Var10.unknown,3);
    _swift_dynamicCastClass();
    if (puVar4 == (undefined *)0x0) {
      _swift_unknownObjectRelease(_Var10.unknown);
      puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar21 = *(long *)(puVar4 + 0x10);
    _swift_release();
    if (SBORROW8(uVar27 >> 1,(long)_Var26.unknown)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e574);
      (*pcVar2)();
    }
    if (lVar21 != (uVar27 >> 1) - (long)_Var26.unknown) {
      _swift_unknownObjectRelease_n(_Var10.unknown,2);
      goto LAB_10034e2fc;
    }
    _Var12.unknown = _Var10.unknown;
    _swift_dynamicCastClass(_Var10.unknown,p_Var11);
    _swift_unknownObjectRelease_n(_Var10.unknown,2);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (_Var12.unknown != (undefined *)0x0) goto LAB_10034e39c;
  }
  else {
    _Var26.unknown = _Var12.unknown;
    _Var10.unknown = (undefined *)Swift::_CocoaArrayWrapper::_get_subscript(RVar20,_Var22);
    param_4 = uVar27;
    _swift_release(_Var12.unknown);
    if ((uVar27 & 1) != 0) goto LAB_10034e318;
LAB_10034e2fc:
    param_4 = uVar27;
    puVar4 = _Var10.unknown;
    FUN_1003370a4(_Var10.unknown,_Var22.unknown,_Var26.unknown);
  }
  _swift_unknownObjectRelease(_Var10.unknown);
  _Var12.unknown = puVar4;
LAB_10034e39c:
  if ((ulong)_Var12.unknown >> 0x3e == 0) {
    lVar21 = *(long *)(((ulong)_Var12.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var22.unknown = _Var12.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var12.unknown) {
      _Var22.unknown = _Var12.unknown;
    }
    lVar21 = Swift::_CocoaArrayWrapper::get_endIndex(_Var22);
  }
  if (lVar21 != 0) {
    if (lVar21 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e578);
      (*pcVar2)();
    }
    lVar23 = 0;
    do {
      if (((ulong)_Var12.unknown & 0xc000000000000001) == 0) {
        lVar13 = *(long *)(_Var12.unknown + lVar23 * 8 + 0x20);
      }
      else {
        lVar13 = lVar23;
        Swift::_ArrayBuffer::__getElementSlowPath(lVar23,_Var12);
      }
      objc_stub::deleteObject_(param_1,lVar13);
      if (local_c0 == 0x7fffffffffffffff) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034e568);
        (*pcVar2)();
      }
      local_c0 = local_c0 + 1;
      lVar23 = lVar23 + 1;
    } while (lVar21 != lVar23);
  }
  _swift_bridgeObjectRelease(_Var12.unknown);
  goto joined_r0x00010034df78;
}



/* Address: 0x10034e57c | FUN_10034e57c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034e6c0) */

undefined * FUN_10034e57c(void)

{
  long lVar1;
  long lVar2;
  _CocoaArrayWrapper _Var3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  NSString *pNVar7;
  _ArrayBuffer self;
  NSPredicate *pNVar8;
  undefined *puVar9;
  ulong self_00;
  ID IVar10;
  Dictionary<undefined,undefined> DVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar6 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar6,pNVar7);
  pNVar8 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar6 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined **)(puVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar9 = puVar6;
  FUN_10030d9e0();
  *(undefined **)(puVar6 + 0x40) = puVar9;
  *(undefined8 *)(puVar6 + 0x20) = 0x7473696c;
  *(undefined1 **)(puVar6 + 0x28) = &DAT_e400000000000000;
  pNVar8 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar8);
  objc_stub::setPredicate_((ID)self.unknown,pNVar8);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003c9878();
  if ((ulong)self.unknown >> 0x3e == 0) {
    lVar17 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var3.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var3.unknown = self.unknown;
    }
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  if (lVar17 != 0) {
    lVar18 = 4;
    do {
      uVar16 = lVar18 - 4;
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10034ea48);
          (*pcVar5)();
        }
        self_00 = *(ulong *)(self.unknown + lVar18 * 8);
      }
      else {
        self_00 = uVar16;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar16,self);
      }
      lVar1 = lVar18 + -3;
      if (SCARRY8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10034ea44);
        (*pcVar5)();
      }
      IVar10 = objc_stub::isDeleted(self_00);
      if ((int)IVar10 == 0) {
        IVar10 = objc_stub::entity(self_00);
        objc_stub::FUN_100bfe2e0(IVar10);
        FUN_10000ec2c(0,&DAT_100fc0450,&PTR__OBJC_CLASS___NSAttributeDescription_100f8dbb8);
        DVar11 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        if (*(long *)(DVar11.unknown + 0x10) != 0) {
          uVar16 = 0xea00000000007265;
          FUN_100071370(0x696669746e656469);
          if ((uVar16 & 1) != 0) {
            _swift_bridgeObjectRelease(DVar11.unknown);
            pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            IVar10 = objc_stub::FUN_100c112a0(self_00,pNVar7);
            if (IVar10 == 0) {
              uStack_a8 = 0;
              local_b0 = (undefined *)0x0;
              lStack_98 = 0;
              uStack_a0 = 0;
            }
            else {
              Swift::__bridgeAnyObjectToAny();
              _swift_unknownObjectRelease(IVar10);
            }
            uStack_88 = uStack_a8;
            local_90 = local_b0;
            local_78 = lStack_98;
            uStack_80 = uStack_a0;
            if (lStack_98 == 0) {
              FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
            }
            else {
              puVar12 = &local_c0;
              _swift_dynamicCast(puVar12,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                                 PTR___type_metadata_for_Swift_String_100eac208,6);
              uVar4 = uStack_b8;
              uVar16 = local_c0;
              if (((ulong)puVar12 & 1) != 0) {
                puVar9 = puVar6;
                _swift_isUniquelyReferenced_nonNull_native();
                uVar13 = uVar16;
                uVar14 = uVar4;
                local_90 = puVar6;
                FUN_100071370();
                uVar15 = (ulong)~(uint)uVar14 & 1;
                lVar2 = *(long *)(puVar6 + 0x10) + uVar15;
                if (SCARRY8(*(long *)(puVar6 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10034ea98);
                  (*pcVar5)();
                }
                if (*(long *)(puVar6 + 0x18) < lVar2) {
                  FUN_10031e0a8(lVar2,puVar9);
                  uVar13 = uVar16;
                  uVar15 = uVar4;
                  FUN_100071370();
                  puVar6 = local_90;
                  if (((uint)uVar14 & 1) != ((uint)uVar15 & 1)) {
                    Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10034eaac);
                    (*pcVar5)();
                  }
                }
                else {
                  puVar6 = local_90;
                  if (((ulong)puVar9 & 1) == 0) {
                    FUN_10031ce7c();
                    puVar6 = local_90;
                  }
                }
                local_90 = puVar6;
                if ((uVar14 & 1) == 0) {
                  *(ulong *)(puVar6 + (uVar13 >> 6) * 8 + 0x40) =
                       *(ulong *)(puVar6 + (uVar13 >> 6) * 8 + 0x40) | 1L << (uVar13 & 0x3f);
                  puVar12 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar13 * 0x10);
                  *puVar12 = uVar16;
                  puVar12[1] = uVar4;
                  *(ulong *)(*(long *)(puVar6 + 0x38) + uVar13 * 8) = self_00;
                  if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x10034ea9c);
                    (*pcVar5)();
                  }
                  *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
                }
                else {
                  *(ulong *)(*(long *)(puVar6 + 0x38) + uVar13 * 8) = self_00;
                  _swift_bridgeObjectRelease(uVar4);
                }
              }
            }
            goto LAB_10034e740;
          }
        }
        _swift_bridgeObjectRelease(DVar11.unknown);
      }
LAB_10034e740:
      lVar18 = lVar18 + 1;
    } while (lVar1 != lVar17);
  }
  _swift_bridgeObjectRelease(self.unknown);
  return puVar6;
}



/* Address: 0x10034eaac | FUN_10034eaac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034eb44) */

undefined1  [16] FUN_10034eaac(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  NSString *pNVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  undefined *puVar7;
  uint uVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 auVar19 [16];
  undefined *local_70;
  
  puVar3 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _Var5.unknown = (undefined *)objc_stub::initWithEntityName_(puVar3,pNVar4);
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  puVar3 = _Var5.unknown & 0xffffffffffffff8;
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    uVar17 = *(ulong *)(puVar3 + 0x10);
  }
  else {
    _Var1.unknown = puVar3;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    uVar17 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar18 = 0;
  while( true ) {
    if (uVar17 == uVar18) {
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (*(long *)(local_70 + 0x10) == 0) {
        lVar15 = 0;
        uVar16 = 1;
      }
      else {
        lVar13 = *(long *)(local_70 + 0x20);
        lVar9 = *(long *)(local_70 + 0x10) + -1;
        lVar15 = lVar13;
        if (lVar9 != 0) {
          plVar10 = (long *)(local_70 + 0x28);
          lVar14 = lVar13;
          do {
            lVar11 = *plVar10;
            lVar15 = lVar11;
            if (lVar11 <= lVar13) {
              lVar15 = lVar14;
            }
            if (lVar13 <= lVar11) {
              lVar13 = lVar11;
            }
            lVar9 = lVar9 + -1;
            plVar10 = plVar10 + 1;
            lVar14 = lVar15;
          } while (lVar9 != 0);
        }
        uVar16 = 0;
      }
      _swift_bridgeObjectRelease();
      auVar19._8_8_ = uVar16;
      auVar19._0_8_ = lVar15;
      return auVar19;
    }
    if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar3 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034ed08);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(_Var5.unknown + uVar18 * 8 + 0x20);
    }
    else {
      uVar6 = uVar18;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar18,_Var5);
    }
    if (SCARRY8(uVar18,1)) break;
    uVar12 = uVar18 + 1;
    uVar8 = 0x65646e69;
    FUN_10034d11c();
    uVar18 = uVar18 + 1;
    if ((uVar8 & 0xff) != 1) {
      puVar7 = local_70;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar7 & 1) == 0) {
        plVar10 = (long *)(local_70 + 0x10);
        local_70 = (undefined *)0x0;
        FUN_100380258(0,*plVar10 + 1,1);
      }
      uVar18 = *(ulong *)(local_70 + 0x10);
      if (*(ulong *)(local_70 + 0x18) >> 1 <= uVar18) {
        local_70 = (undefined *)(ulong)(1 < *(ulong *)(local_70 + 0x18));
        FUN_100380258(local_70,uVar18 + 1,1);
      }
      *(ulong *)(local_70 + 0x10) = uVar18 + 1;
      *(ulong *)(local_70 + uVar18 * 8 + 0x20) = uVar6;
      uVar18 = uVar12;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10034ed04);
  (*pcVar2)();
}



/* Address: 0x10034ed1c | FUN_10034ed1c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034f09c) */
/* WARNING: Removing unreachable block (ram,0x00010034edf8) */

char * FUN_10034ed1c(long param_1,undefined8 param_2,undefined8 param_3,NSString *param_4)

{
  NSString *pNVar1;
  char *pcVar2;
  void *pvVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  Date DVar7;
  undefined *puVar8;
  NSString *pNVar9;
  NSString *pNVar10;
  _ArrayBuffer _Var11;
  NSString *self;
  ID IVar12;
  NSString *pNVar13;
  NSString *pNVar14;
  ID IVar15;
  NSPredicate *pNVar16;
  undefined8 uVar17;
  __int64 _Var18;
  long lVar19;
  NSDate *pNVar20;
  char *self_00;
  char *pcVar21;
  long lVar22;
  NSNumber *pNVar23;
  uint extraout_w1;
  uint uVar24;
  ContiguousArray CVar25;
  void *pvVar26;
  undefined1 *puVar27;
  char *pcVar28;
  long extraout_x8;
  _CocoaArrayWrapper _Var29;
  long lVar30;
  ulong uVar31;
  ContiguousArray CVar32;
  char *pcVar33;
  _ArrayBuffer _Var34;
  char *pcVar35;
  long lVar36;
  String SVar37;
  String SVar38;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  char *local_118;
  undefined *local_110;
  ID local_108;
  undefined1 *local_100;
  long local_f8;
  undefined *local_f0;
  NSString *local_e8;
  long local_e0;
  _ArrayBuffer local_d8;
  ulong local_d0;
  ID local_c8;
  long local_c0;
  undefined1 *puStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  long local_a0;
  undefined1 *puStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined *local_78;
  
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar30 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar30 + 0x40));
  puVar8 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  puVar8 = (undefined *)objc_stub::initWithEntityName_((ID)puVar8,pNVar9);
  pNVar10 = (NSString *)0x0;
  FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
  _Var11.unknown = puVar8;
  pNVar9 = pNVar10;
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  uVar24 = (uint)pNVar9;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_e8 = pNVar10;
  if ((ulong)_Var11.unknown >> 0x3e == 0) {
    pNVar9 = *(NSString **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var29.unknown = _Var11.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
      _Var29.unknown = _Var11.unknown;
    }
    pNVar9 = (NSString *)Swift::_CocoaArrayWrapper::get_endIndex(_Var29);
  }
  _Var29.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_138 = puVar8;
  local_100 = auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar30;
  local_f0 = DVar7.unknown;
  local_e0 = param_1;
  if (pNVar9 != (NSString *)0x0) {
    pNVar10 = (NSString *)0x0;
    uVar31 = (ulong)_Var11.unknown & 0xc000000000000001;
    _Var34.unknown = _Var11.unknown & 0xffffffffffffff8;
    local_118 = "ObjectPendingMapping";
    uStack_128 = 2;
    local_130 = 1;
    pNVar14 = local_e8;
    local_110 = _Var11.unknown;
    local_d8.unknown = _Var34.unknown;
    local_d0 = uVar31;
    do {
      if (uVar31 == 0) {
        if (*(NSString **)((long)_Var34.unknown + 0x10) <= pNVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10034f598);
          (*pcVar5)();
        }
        self = *(NSString **)(_Var11.unknown + (long)pNVar10 * 8 + 0x20);
      }
      else {
        self = pNVar10;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pNVar10,_Var11);
      }
      pNVar1 = pNVar10 + 1;
      if (SCARRY8((long)pNVar10,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10034f594);
        (*pcVar5)();
      }
      IVar12 = objc_stub::isDeleted((ID)self);
      uVar24 = extraout_w1;
      if ((IVar12 & 1) == 0) {
        pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar12 = objc_stub::FUN_100c112a0((ID)self,pNVar13);
        if (IVar12 == 0) {
          puStack_b8 = (undefined1 *)0x0;
          local_c0 = 0;
          lStack_a8 = 0;
          uStack_b0 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar12);
        }
        puStack_98 = puStack_b8;
        local_a0 = local_c0;
        local_88 = lStack_a8;
        uStack_90 = uStack_b0;
        if (lStack_a8 == 0) {
          CVar32.unknown = (undefined *)&local_a0;
          CVar25.unknown = &DAT_100fbe6f0;
          FUN_100005808(CVar32.unknown,&DAT_100fbe6f0,&DAT_100c42750);
LAB_10034f0e0:
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar32);
                    /* WARNING: Load size is inaccurate */
          CVar32.unknown = local_78[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar32.unknown,CVar25);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity();
          Swift::ContiguousArray::__endMutation(CVar32);
          CVar25.unknown = self;
        }
        else {
          CVar32.unknown = (undefined *)&local_c8;
          CVar25.unknown = (undefined *)&local_a0;
          param_4 = pNVar14;
          _swift_dynamicCast(CVar32.unknown,CVar25.unknown,PTR___type_metadata_for_Any_100eae0c0 + 8
                             ,pNVar14,6);
          IVar12 = local_c8;
          if (((ulong)CVar32.unknown & 1) == 0) goto LAB_10034f0e0;
          puVar8 = &_OBJC_CLASS___NSFetchRequest;
          _objc_allocWithZone();
          pNVar14 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar15 = objc_stub::initWithEntityName_((ID)puVar8,pNVar14);
          pNVar16 = (NSPredicate *)0x0;
          FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
          puVar8 = &DAT_100fbeb40;
          FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
          _swift_allocObject();
          *(undefined8 *)(puVar8 + 0x18) = uStack_128;
          *(undefined8 *)(puVar8 + 0x10) = local_130;
          local_108 = IVar12;
          IVar12 = objc_stub::objectID(IVar12);
          uVar17 = 0;
          FUN_10000ec2c(0,&DAT_100fbe420,&PTR__OBJC_CLASS___NSManagedObjectID_100f8d7a8);
          *(undefined8 *)(puVar8 + 0x38) = uVar17;
          FUN_100354198();
          *(undefined8 *)(puVar8 + 0x40) = uVar17;
          *(ID *)(puVar8 + 0x20) = IVar12;
          pNVar16 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar16);
          objc_stub::setPredicate_(IVar15,pNVar16);
          objc_stub::setFetchLimit_(IVar15,1);
          CVar25.unknown = local_e8;
          _Var18 = (extension_CoreData)::__C::NSManagedObjectContext::_count();
          CVar32.unknown = (undefined *)0x0;
          _Var11.unknown = local_110;
          pNVar14 = local_e8;
          if (_Var18 == 0) goto LAB_10034f0e0;
        }
        uVar24 = (uint)CVar25.unknown;
        uVar31 = local_d0;
        _Var34.unknown = local_d8.unknown;
      }
      pNVar10 = pNVar10 + 1;
      _Var29.unknown = local_78;
    } while (pNVar1 != pNVar9);
  }
  lVar30 = local_e0;
  _swift_bridgeObjectRelease(_Var11.unknown);
  if (((long)_Var29.unknown < 0) || (((ulong)_Var29.unknown >> 0x3e & 1) != 0)) {
    pcVar35 = (char *)Swift::_CocoaArrayWrapper::get_endIndex(_Var29);
  }
  else {
    pcVar35 = *(char **)(_Var29.unknown + 0x10);
  }
  if (pcVar35 == (char *)0x0) {
    _swift_release(_Var29.unknown);
    pcVar35 = (char *)0x0;
  }
  else {
    lVar19 = lVar30;
    FUN_10034e57c();
    FUN_10034eaac();
    if ((uVar24 & 0xff) == 1) {
      lVar36 = 0;
    }
    else {
      lVar36 = lVar30 + 1;
      if (SCARRY8(lVar30,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10034f5dc);
        (*pcVar5)();
      }
    }
    if ((long)pcVar35 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10034f5d8);
      (*pcVar5)();
    }
    pcVar33 = (char *)0x0;
    local_d0 = (ulong)_Var29.unknown & 0xc000000000000001;
    local_e8 = (NSString *)0x100da2ce0;
    local_d8.unknown = _Var29.unknown;
    do {
      if (local_d0 == 0) {
        self_00 = *(char **)(local_d8.unknown + (long)pcVar33 * 8 + 0x20);
      }
      else {
        self_00 = pcVar33;
        Swift::_ArrayBuffer::__getElementSlowPath((__int64)pcVar33,local_d8);
      }
      local_a0 = 0x3a7473696c;
      puStack_98 = &DAT_e500000000000000;
      pcVar28 = (char *)0xea00000000007265;
      pcVar21 = self_00;
      pvVar26 = (void *)0x696669746e656469;
      FUN_10034ce30();
      pcVar2 = (char *)0x0;
      if (pvVar26 != (void *)0x0) {
        pcVar2 = pcVar21;
      }
      pvVar3 = (void *)0xe000000000000000;
      if (pvVar26 != (void *)0x0) {
        pvVar3 = pvVar26;
      }
      SVar37.bridgeObject = pvVar3;
      SVar37.str = pcVar2;
      SVar38.bridgeObject = param_4;
      SVar38.str = pcVar28;
      Swift::String::append(SVar37,SVar38);
      _swift_bridgeObjectRelease(pvVar3);
      puVar4 = puStack_98;
      lVar30 = local_a0;
      _swift_bridgeObjectRetain(lVar19);
      puVar27 = puVar4;
      FUN_100071370();
      _swift_bridgeObjectRelease(lVar19);
      if (((ulong)puVar27 & 1) == 0) {
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar12 = objc_stub::FUN_100c052e0((ID)&_OBJC_CLASS___NSEntityDescription,pNVar9,local_e0);
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(puVar4);
        pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(IVar12,pNVar9,pNVar10);
        pNVar23 = (extension_Foundation)::__int64::_bridgeToObjectiveC();
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(IVar12,pNVar23,pNVar9);
        bVar6 = SCARRY8(lVar36,1);
        lVar36 = lVar36 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10034f59c);
          (*pcVar5)();
        }
      }
      else {
        lVar22 = lVar19;
        _swift_isUniquelyReferenced_nonNull_native();
        local_a0 = lVar19;
        if ((int)lVar22 == 0) {
          FUN_10031ce7c();
        }
        lVar19 = local_a0;
        _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(local_a0 + 0x30) + lVar30 * 0x10 + 8));
        IVar12 = *(ID *)(*(long *)(lVar19 + 0x38) + lVar30 * 8);
        FUN_100172164(lVar30,lVar19);
        _swift_bridgeObjectRelease(puVar4);
      }
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      IVar15 = objc_stub::FUN_100c112a0(IVar12,pNVar9);
      if (IVar15 == 0) {
        puStack_98 = (undefined1 *)0x0;
        local_a0 = 0;
        local_88 = 0;
        uStack_90 = 0;
        FUN_100005808(&local_a0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar4 = local_100;
        DVar7 = Foundation::Date::init();
        pNVar20 = Foundation::Date::_bridgeToObjectiveC(DVar7);
        (**(code **)(local_f8 + 8))(puVar4,local_f0);
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(IVar12,pNVar20,pNVar9);
      }
      else {
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar15);
        FUN_100005808(&local_a0,&DAT_100fbe6f0,&DAT_100c42750);
      }
      pcVar33 = pcVar33 + 1;
      param_4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setValue_forKey_((ID)self_00,IVar12);
      _Var11.unknown = local_d8.unknown;
    } while (pcVar35 != pcVar33);
    _swift_bridgeObjectRelease(lVar19);
    _swift_release(_Var11.unknown);
  }
  return pcVar35;
}



/* Address: 0x10034f5dc | FUN_10034f5dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010034f640) */

long FUN_10034f5dc(undefined8 param_1,long param_2)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  NSString *pNVar12;
  _ArrayBuffer _Var13;
  ID self;
  ID IVar14;
  _StringGuts *p_Var15;
  _StringGuts _Var16;
  NSString *pNVar17;
  _StringGuts _Var18;
  long lVar19;
  ID IVar20;
  ID IVar21;
  long local_f8;
  long local_e8;
  _StringGuts local_c0;
  _StringGuts local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  puVar6 = PTR___type_metadata_for_Any_100eae0c0;
  if (*(long *)(param_2 + 0x10) == 0) {
    local_f8 = 0;
  }
  else {
    local_f8 = 0;
    local_e8 = 0;
    lVar19 = 0;
    bVar5 = false;
    do {
      uVar3 = *(undefined8 *)(s_ObjectMetadata_100fc0488 + lVar19 * 0x10 + 8);
      puVar11 = &_OBJC_CLASS___NSFetchRequest;
      _objc_allocWithZone();
      _swift_bridgeObjectRetain(uVar3);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar3);
      _Var13.unknown = (undefined *)objc_stub::initWithEntityName_(puVar11,pNVar12);
      FUN_10000ec2c(0,&DAT_100fc0660,&PTR__OBJC_CLASS___NSManagedObject_100f8db08);
      (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
      if ((ulong)_Var13.unknown >> 0x3e == 0) {
        IVar20 = *(ID *)(((ulong)_Var13.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var13.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var13.unknown) {
          _Var2.unknown = _Var13.unknown;
        }
        IVar20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (IVar20 == 0) {
        _swift_bridgeObjectRelease(_Var13.unknown);
      }
      else {
        if ((long)IVar20 < 1) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10034fa08);
          (*pcVar9)();
        }
        IVar21 = 0;
        do {
          if (((ulong)_Var13.unknown & 0xc000000000000001) == 0) {
            self = *(ID *)(_Var13.unknown + IVar21 * 8 + 0x20);
          }
          else {
            self = IVar21;
            Swift::_ArrayBuffer::__getElementSlowPath(IVar21,_Var13);
          }
          pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar14 = objc_stub::FUN_100c112a0(self,pNVar12);
          if (IVar14 == 0) {
            uStack_a8 = 0;
            local_b0 = 0;
            lStack_98 = 0;
            uStack_a0 = 0;
          }
          else {
            Swift::__bridgeAnyObjectToAny();
            _swift_unknownObjectRelease(IVar14);
          }
          uStack_88 = uStack_a8;
          local_90 = local_b0;
          local_78 = lStack_98;
          uStack_80 = uStack_a0;
          if (lStack_98 == 0) {
            FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
          }
          else {
            p_Var15 = &local_c0;
            _swift_dynamicCast(p_Var15,&local_90,puVar6 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            _Var8.unknown = local_b8.unknown;
            _Var7.unknown = local_c0.unknown;
            if (((ulong)p_Var15 & 1) != 0) {
              if ((*(long *)(param_2 + 0x10) == 0) ||
                 (_Var16.unknown = local_c0.unknown, _Var18.unknown = local_b8.unknown,
                 FUN_100071370(), ((ulong)_Var18.unknown & 1) == 0)) {
                _swift_bridgeObjectRelease(_Var8.unknown);
              }
              else {
                plVar1 = (long *)(*(long *)(param_2 + 0x38) + (long)_Var16.unknown * 0x10);
                puVar11 = (undefined *)*plVar1;
                puVar4 = (undefined *)plVar1[1];
                if ((_Var7.unknown == puVar11) && (_Var8.unknown == puVar4)) {
                  _swift_bridgeObjectRelease(_Var8.unknown);
                }
                else {
                  bVar10 = Swift::_stringCompareWithSmolCheck
                                     (_Var7,_Var8,(_StringComparisonResult)(__int8)puVar11);
                  _swift_bridgeObjectRetain(puVar4);
                  _swift_bridgeObjectRelease(_Var8.unknown);
                  if (bVar10) {
                    _swift_bridgeObjectRelease(puVar4);
                  }
                  else {
                    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                    _swift_bridgeObjectRelease(puVar4);
                    pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                    objc_stub::setValue_forKey_(self,pNVar12,pNVar17);
                    bVar10 = SCARRY8(local_e8,1);
                    local_f8 = local_e8 + 1;
                    local_e8 = local_f8;
                    if (bVar10) {
                    /* WARNING: Does not return */
                      pcVar9 = (code *)SoftwareBreakpoint(1,0x10034fa0c);
                      (*pcVar9)();
                    }
                  }
                }
              }
            }
          }
          IVar21 = IVar21 + 1;
        } while (IVar20 != IVar21);
        _swift_bridgeObjectRelease(_Var13.unknown);
      }
      lVar19 = 1;
      bVar10 = !bVar5;
      bVar5 = true;
    } while (bVar10);
    _swift_arrayDestroy(s_ObjectMetadata_100fc0488,2,PTR___type_metadata_for_Swift_String_100eac208)
    ;
  }
  return local_f8;
}



/* Address: 0x10034fa0c | FUN_10034fa0c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034fa0c(undefined8 param_1,long param_2,ID param_3)

{
  uint uVar1;
  undefined *puVar2;
  URL UVar3;
  undefined1 *puVar4;
  URL self;
  NSURL *pNVar5;
  ID IVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_70 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    Foundation::URL::_init();
    puVar4 = puVar9;
    (**(code **)(lVar10 + 0x30))(puVar9,1,UVar3.unknown);
    if ((int)puVar4 == 1) {
      FUN_100005808(puVar9,&DAT_100fc1a40,&DAT_100c40660);
    }
    else {
      (**(code **)(lVar10 + 0x20))(lVar8,puVar9,UVar3.unknown);
      self.unknown = (undefined *)objc_stub::persistentStoreCoordinator(param_3);
      if (self.unknown != (undefined *)0x0) {
        pNVar5 = Foundation::URL::_bridgeToObjectiveC(self);
        IVar6 = objc_stub::managedObjectIDForURIRepresentation_((ID)self.unknown,pNVar5);
        if (IVar6 != 0) {
          local_60 = 0;
          IVar6 = objc_stub::FUN_100c02080(param_3,IVar6,&local_60);
          if (IVar6 != 0) {
            IVar6 = objc_stub::isDeleted(IVar6);
            (**(code **)(lVar10 + 8))(lVar8,UVar3.unknown);
            uVar1 = (uint)IVar6 ^ 1;
            goto LAB_10034fc10;
          }
          uVar7 = local_60;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar7);
        }
      }
      (**(code **)(lVar10 + 8))(lVar8,UVar3.unknown);
    }
  }
  uVar1 = 0;
LAB_10034fc10:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar1);
}


