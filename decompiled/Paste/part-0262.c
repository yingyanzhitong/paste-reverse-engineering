/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100329860 | FUN_100329860 */

void FUN_100329860(void)

{
  FUN_1003298a0(0,FUN_100312518);
  return;
}



/* Address: 0x100329870 | FUN_100329870 */

void FUN_100329870(void)

{
  FUN_1003298a0(0,FUN_1003938f0);
  return;
}



/* Address: 0x100329880 | FUN_100329880 */

void FUN_100329880(void)

{
  FUN_1003298a0(0,FUN_10038fef4);
  return;
}



/* Address: 0x100329890 | FUN_100329890 */

void FUN_100329890(void)

{
  FUN_1003298a0(0,FUN_100394ee8);
  return;
}



/* Address: 0x1003298a0 | FUN_1003298a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1003298a0(ID param_1,code *param_2)

{
  undefined *self;
  NSString *pNVar1;
  ID self_00;
  ID IVar2;
  String SVar3;
  
  (*param_2)();
  SVar3 = Swift::__typeName(SUB81(param_1,0));
  self = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  self_00 = objc_stub::initWithEntityName_((ID)self,pNVar1);
  _swift_getObjCClassFromMetadata();
  IVar2 = objc_stub::FUN_100c00de0(param_1);
  objc_stub::FUN_100c0dbc0(self_00,IVar2);
  IVar2 = objc_stub::FUN_100c00d80(param_1);
  objc_stub::setPredicate_(self_00,IVar2);
  objc_stub::FUN_100c0bb60(self_00,0x14);
  return self_00;
}



/* Address: 0x100329980 | FUN_100329980 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100329980(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  _ArrayBuffer self;
  undefined1 *puVar8;
  NSArray *pNVar9;
  long lVar10;
  ulong self_00;
  char *pcVar11;
  void *in_x3;
  undefined **unaff_x20;
  String SVar12;
  String SVar13;
  undefined1 auStack_130 [24];
  long local_118;
  undefined1 auStack_110 [32];
  undefined8 local_f0;
  undefined1 *puStack_e8;
  undefined *local_d8;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_getObjectType();
  IVar3 = objc_stub::isDeleted((ID)unaff_x20);
  if ((IVar3 & 1) != 0) goto LAB_100329e0c;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c112a0((ID)unaff_x20,pNVar4);
  if (IVar3 != 0) {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar3);
    FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
    goto LAB_100329e0c;
  }
  puStack_88 = (undefined1 *)0x0;
  local_90 = (undefined *)0x0;
  local_78 = (undefined *)0x0;
  uStack_80 = 0;
  pcVar11 = "NF\v";
  FUN_100005808(&local_90,&DAT_100fbe6f0);
  IVar3 = objc_stub::managedObjectContext((ID)unaff_x20);
  if (IVar3 == 0) goto LAB_100329e0c;
  local_90 = (undefined *)0x3a7473696c;
  puStack_88 = &DAT_e500000000000000;
  objc_stub::identifier((ID)unaff_x20);
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar13.bridgeObject = in_x3;
  SVar13.str = pcVar11;
  Swift::String::append(SVar12,SVar13);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  puVar8 = puStack_88;
  puVar6 = local_90;
  puVar5 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar5 + 0x28) = 0xea00000000007265;
  *(undefined **)(puVar5 + 0x30) = puVar6;
  *(undefined1 **)(puVar5 + 0x38) = puVar8;
  puVar6 = puVar5;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar5);
  FUN_100005808(puVar5 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar5 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar7 = &local_90;
  local_90 = puVar6;
  local_78 = puVar5;
  FUN_100328bc8(ppuVar7,0,IVar3,0,FUN_10032b6a8,FUN_10032ac40);
  FUN_100004594(&local_90);
  if (ppuVar7 == (undefined **)0x0) {
    puStack_88 = (undefined1 *)0x0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
    local_d8 = PTR___type_metadata_for_Swift_String_100eac208;
    local_f0 = 0x7865646e69;
    puStack_e8 = &DAT_e500000000000000;
    self.unknown = (undefined *)0x0;
    FUN_1003298a0(0,FUN_10032b6a8);
    FUN_10032af50(&local_90,auStack_130);
    if (local_118 == 0) {
      FUN_100005808(auStack_130,&DAT_100fbe6f0,&DAT_100c42750);
    }
    else {
      FUN_100011080(auStack_130,auStack_110);
      puVar8 = auStack_110;
      FUN_10032ba78(puVar8,0);
      objc_stub::setPredicate_((ID)self.unknown,puVar8);
      FUN_100004594(auStack_110);
    }
    FUN_10032af50(&local_f0,auStack_130);
    if (local_118 == 0) {
      FUN_100005808(auStack_130,&DAT_100fbe6f0,&DAT_100c42750);
    }
    else {
      FUN_100011080(auStack_130,auStack_110);
      puVar8 = auStack_110;
      FUN_10032c450(puVar8);
      FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
      pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar8);
      objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar9);
      FUN_100004594(auStack_110);
    }
    objc_stub::FUN_100c0bba0((ID)self.unknown,0);
    FUN_10032ac40(self.unknown,IVar3);
    FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
    FUN_100005808(&local_f0,&DAT_100fbe6f0,&DAT_100c42750);
    if ((ulong)self.unknown >> 0x3e == 0) {
      lVar10 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
      if (lVar10 == 0) goto LAB_100329da8;
LAB_100329d40:
      self_00 = lVar10 - 1;
      if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100329ea8);
        (*pcVar2)();
      }
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        if ((long)self_00 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100329eb8);
          (*pcVar2)();
        }
        if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= self_00) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100329ebc);
          (*pcVar2)();
        }
        self_00 = *(ulong *)(self.unknown + self_00 * 8 + 0x20);
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(self_00,self);
      }
      _swift_bridgeObjectRelease(self.unknown);
      IVar3 = objc_stub::FUN_100c03880(self_00);
    }
    else {
      _Var1.unknown = self.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < self.unknown) {
        _Var1.unknown = self.unknown;
      }
      lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (lVar10 != 0) goto LAB_100329d40;
LAB_100329da8:
      _swift_bridgeObjectRelease(self.unknown);
      IVar3 = 0xffffffffffffffff;
    }
    FUN_10032b6a8(0);
    if (SCARRY8(IVar3,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100329ea4);
      (*pcVar2)();
    }
    ppuVar7 = unaff_x20;
    FUN_10032b3a4();
  }
  objc_stub::FUN_100c0cb00((ID)unaff_x20,ppuVar7);
LAB_100329e0c:
  local_90 = (undefined *)0x0;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xfffffffffffffec0,"validateForInsert:",&local_90)
  ;
  if ((int)IVar3 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100329ec0 | _TtC9PasteCore10ListEntity::validateForInsert: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100329ef4) */
/* WARNING: Removing unreachable block (ram,0x000100329f1c) */
/* WARNING: Removing unreachable block (ram,0x000100329efc) */
/* Function Stack Size: 0x18 bytes */

bool _TtC9PasteCore10ListEntity::validateForInsert_(ID param_1,SEL param_2,ID *param_3)

{
  FUN_100329980(param_1);
  return 1;
}



/* Address: 0x100329f3c | FUN_100329f3c */

undefined * FUN_100329f3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar3 = puVar2;
  _swift_initStaticObject();
  puVar4 = puVar3;
  FUN_1002fc6c0();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  _swift_arrayDestroy(puVar3 + 0x20,3,PTR___type_metadata_for_Swift_String_100eac208);
  _swift_initStaticObject(puVar2,&DAT_100fc0068);
  FUN_10036c298();
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar1);
  return puVar4;
}



/* Address: 0x100329fe0 | FUN_100329fe0 */

void FUN_100329fe0(undefined8 param_1,long param_2)

{
  FUN_1003b4444();
  if (param_2 != 0) {
    FUN_10032670c(param_1);
    return;
  }
  FUN_100325588();
                    /* WARNING: Could not recover jumptable at 0x00010032a02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + -8) + 0x38))(param_1,1,1,param_2);
  return;
}



/* Address: 0x10032a030 | FUN_10032a030 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Data FUN_10032a030(Data param_1,ulong param_2)

{
  Data DVar1;
  Data DVar2;
  NSData *pNVar3;
  ulong extraout_x1;
  ID unaff_x20;
  ulong uVar4;
  
  DVar1.unknown = (undefined *)objc_stub::rawShareRecord(unaff_x20);
  if (DVar1.unknown == (undefined *)0x0) {
    DVar1.unknown = (undefined *)0x0;
    uVar4 = 0xf000000000000000;
LAB_10032a104:
    if (0xe < param_2 >> 0x3c) {
      FUN_10011da54(param_1.unknown,param_2);
      FUN_10003bf18(DVar1.unknown,uVar4);
      return (Data)DVar1.unknown;
    }
LAB_10032a138:
    FUN_10011da54(param_1.unknown,param_2);
    FUN_10003bf18(DVar1.unknown,uVar4);
    FUN_10003bf18(param_1.unknown,param_2);
    if (0xe < param_2 >> 0x3c) {
      pNVar3 = (NSData *)0x0;
      goto LAB_10032a180;
    }
  }
  else {
    uVar4 = extraout_x1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    if (0xe < uVar4 >> 0x3c) goto LAB_10032a104;
    if (0xe < param_2 >> 0x3c) goto LAB_10032a138;
    FUN_10011da54(param_1.unknown,param_2);
    FUN_10011da54(DVar1.unknown,uVar4);
    DVar2 = DVar1;
    FUN_10031b830(DVar1.unknown,uVar4,param_1.unknown,param_2);
    FUN_10003bf18(DVar1.unknown,uVar4);
    FUN_10003bf18(param_1.unknown,param_2);
    FUN_10003bf18(DVar1.unknown,uVar4);
    if (((ulong)DVar2.unknown & 1) != 0) {
      return (Data)DVar1.unknown;
    }
  }
  pNVar3 = Foundation::Data::_bridgeToObjectiveC(param_1);
LAB_10032a180:
  objc_stub::setRawShareRecord_(unaff_x20,pNVar3);
  return (Data)(undefined *)0x0;
}



/* Address: 0x10032a1a4 | FUN_10032a1a4 */

undefined1  [16] FUN_10032a1a4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec000000736b6e69;
  auVar1._0_8_ = 0x6c5f6c7566657375;
  return auVar1;
}



/* Address: 0x10032a1c4 | FUN_10032a1c4 */

undefined * FUN_10032a1c4(void)

{
  return &DAT_100ecb138;
}



/* Address: 0x10032a1d0 | FUN_10032a1d0 */

undefined1  [16] FUN_10032a1d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da2350;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x10032a1ec | FUN_10032a1ec */

bool FUN_10032a1ec(void)

{
  char cVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar2 = &DAT_100fbfa58;
  FUN_1000037f0(&DAT_100fbfa58,&DAT_100c44ed0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffc0 + -extraout_x8;
  lVar3 = 0;
  FUN_100325588();
  lVar8 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_1003b4444();
  if (lVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,lVar3);
  }
  else {
    FUN_10032670c(puVar6);
    puVar5 = puVar6;
    (**(code **)(lVar8 + 0x30))(puVar6,1,lVar3);
    if ((int)puVar5 != 1) {
      FUN_10005425c(puVar6,lVar7);
      cVar1 = *(char *)(lVar7 + 0x18);
      FUN_100325d24(lVar7);
      return cVar1 == '\0';
    }
  }
  FUN_100005808(puVar6,&DAT_100fbfa58,&DAT_100c44ed0);
  return true;
}



/* Address: 0x10032a310 | FUN_10032a310 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a310(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb198;
  _swift_allocObject(&DAT_100ecb198,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb1c0;
  _swift_allocObject(&DAT_100ecb1c0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b114;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb1d8;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a460);
  (*pcVar1)();
}



/* Address: 0x10032a460 | FUN_10032a460 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a460(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb3f0;
  _swift_allocObject(&DAT_100ecb3f0,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb418;
  _swift_allocObject(&DAT_100ecb418,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b208;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb430;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a5b0);
  (*pcVar1)();
}



/* Address: 0x10032a5b0 | FUN_10032a5b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a5b0(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb468;
  _swift_allocObject(&DAT_100ecb468,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb490;
  _swift_allocObject(&DAT_100ecb490,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b270;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb4a8;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a700);
  (*pcVar1)();
}



/* Address: 0x10032a700 | FUN_10032a700 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a700(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb288;
  _swift_allocObject(&DAT_100ecb288,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb2b0;
  _swift_allocObject(&DAT_100ecb2b0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b190;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb2c8;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a850);
  (*pcVar1)();
}



/* Address: 0x10032a850 | FUN_10032a850 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a850(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb300;
  _swift_allocObject(&DAT_100ecb300,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb328;
  _swift_allocObject(&DAT_100ecb328,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b1b8;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb340;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032a9a0);
  (*pcVar1)();
}



/* Address: 0x10032a9a0 | FUN_10032a9a0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032a9a0(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb4e0;
  _swift_allocObject(&DAT_100ecb4e0,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb508;
  _swift_allocObject(&DAT_100ecb508,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b294;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb520;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032aaf0);
  (*pcVar1)();
}



/* Address: 0x10032aaf0 | FUN_10032aaf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032aaf0(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb210;
  _swift_allocObject(&DAT_100ecb210,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb238;
  _swift_allocObject(&DAT_100ecb238,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b158;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb250;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032ac40);
  (*pcVar1)();
}



/* Address: 0x10032ac40 | FUN_10032ac40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032ac40(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb558;
  _swift_allocObject(&DAT_100ecb558,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb580;
  _swift_allocObject(&DAT_100ecb580,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b2bc;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb598;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032ad90);
  (*pcVar1)();
}



/* Address: 0x10032ad90 | FUN_10032ad90 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10032ad90(undefined8 param_1,ID param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  code *local_58;
  undefined *local_50;
  undefined *local_48;
  
  local_48 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ecb378;
  _swift_allocObject(&DAT_100ecb378,0x28,7);
  *(undefined ***)(puVar2 + 0x10) = &local_48;
  *(ID *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100ecb3a0;
  _swift_allocObject(&DAT_100ecb3a0,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10032b1e0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_58 = thunk_FUN_100209b34;
  local_78 = PTR___NSConcreteStackBlock_100ea82a0;
  local_70 = 0x42000000;
  local_68 = FUN_1000d5218;
  puStack_60 = &DAT_100ecb3b8;
  local_50 = puVar3;
  aBlock = __Block_copy(&local_78);
  puVar4 = local_50;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  objc_stub::performBlockAndWait_(param_2,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x87,0x26,0x20,1);
  _swift_release(puVar3);
  puVar3 = local_48;
  if (((ulong)puVar4 & 1) == 0) {
    _swift_release(puVar2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10032aee0);
  (*pcVar1)();
}



/* Address: 0x10032aee0 | FUN_10032aee0 */

/* WARNING: Removing unreachable block (ram,0x00010032af20) */

void FUN_10032aee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  (*param_5)(param_4);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  uVar1 = *param_1;
  *param_1 = param_3;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10032af50 | FUN_10032af50 */

undefined8 FUN_10032af50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6f0;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10032afa0 | thunk_FUN_1003120dc */

void thunk_FUN_1003120dc(void)

{
  FUN_1003120dc();
  return;
}



/* Address: 0x10032afa4 | FUN_10032afa4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10032afa4(undefined8 param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setIdentifier_(self,pNVar1);
  return 0;
}



/* Address: 0x10032afe4 | thunk_FUN_10031208c */

void thunk_FUN_10031208c(void)

{
  FUN_10031208c();
  return;
}



/* Address: 0x10032afe8 | FUN_10032afe8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10032afe8(undefined8 param_1,ID *param_2)

{
  NSString *pNVar1;
  ID self;
  
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setName_(self,pNVar1);
  return 0;
}



/* Address: 0x10032b028 | FUN_10032b028 */

void FUN_10032b028(undefined1 *param_1,ID *param_2)

{
  undefined1 uVar1;
  ID IVar2;
  
  IVar2 = objc_stub::rawType(*param_2);
  uVar1 = 2;
  if (IVar2 != 2) {
    uVar1 = IVar2 == 1;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10032b064 | FUN_10032b064 */

void FUN_10032b064(byte *param_1,ID *param_2)

{
  objc_stub::setRawType_(*param_2,(ulong)*param_1);
  return;
}



/* Address: 0x10032b070 | FUN_10032b070 */

void FUN_10032b070(undefined8 *param_1,undefined8 param_2,undefined1 param_3)

{
  FUN_1003293c4();
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Address: 0x10032b09c | FUN_10032b09c */

void FUN_10032b09c(undefined8 *param_1)

{
  FUN_1003294d0(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10032b0c8 | FUN_10032b0c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10032b0c8(void)

{
  return ZEXT816(0x100f97ec8);
}



/* Address: 0x10032b0e8 | FUN_10032b0e8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032b0e8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b114 | FUN_10032b114 */

void FUN_10032b114(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_1003214a8);
  return;
}



/* Address: 0x10032b13c | FUN_10032b13c */

void FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b150 | FUN_10032b150 */

void FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b158 | FUN_10032b158 */

void FUN_10032b158(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_1003b4868);
  return;
}



/* Address: 0x10032b180 | FUN_10032b180 */

void FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b190 | FUN_10032b190 */

void FUN_10032b190(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_10038fef4);
  return;
}



/* Address: 0x10032b1b8 | FUN_10032b1b8 */

void FUN_10032b1b8(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_100394ee8);
  return;
}



/* Address: 0x10032b1e0 | FUN_10032b1e0 */

void FUN_10032b1e0(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_1003938f0);
  return;
}



/* Address: 0x10032b208 | FUN_10032b208 */

void FUN_10032b208(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_100312518);
  return;
}



/* Address: 0x10032b230 | FUN_10032b230 */

void FUN_10032b230(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc00b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c411e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c411e8,&DAT_100eca9e8);
  DAT_100fc00b8 = pTVar1;
  return;
}



/* Address: 0x10032b270 | FUN_10032b270 */

void FUN_10032b270(void)

{
  undefined8 in_x3;
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),in_x3,FUN_10032b0c8);
  return;
}



/* Address: 0x10032b294 | FUN_10032b294 */

void FUN_10032b294(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_100311d0c);
  return;
}



/* Address: 0x10032b2bc | FUN_10032b2bc */

void FUN_10032b2bc(void)

{
  long unaff_x20;
  
  FUN_10032aee0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0,FUN_10032b6a8);
  return;
}



/* Address: 0x10032b2e4 | FUN_10032b2e4 */

void FUN_10032b2e4(void)

{
  long lVar1;
  undefined *puVar2;
  
  if (DAT_100fc00c0 != (undefined *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100fc00c0;
  FUN_10032b0c8();
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__CVarArg_100eae8e0,lVar1);
  DAT_100fc00c0 = puVar2;
  return;
}



/* Address: 0x10032b324 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b328 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b32c | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b330 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b334 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b338 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b33c | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b340 | thunk_FUN_10032b0e8 */

void thunk_FUN_10032b0e8(void)

{
  FUN_10032b0e8();
  return;
}



/* Address: 0x10032b344 | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b348 | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b34c | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b350 | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b354 | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b358 | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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



/* Address: 0x10032b35c | thunk_FUN_10032b13c */

void thunk_FUN_10032b13c(long param_1,long param_2)

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


