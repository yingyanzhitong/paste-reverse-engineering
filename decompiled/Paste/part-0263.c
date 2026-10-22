/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10032b360 | thunk_FUN_10032b13c */

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



/* Address: 0x10032b364 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b368 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b36c | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b370 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b374 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b378 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b37c | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b380 | thunk_FUN_10032b150 */

void thunk_FUN_10032b150(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10032b384 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b388 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b38c | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b390 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b394 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b398 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b39c | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b3a0 | thunk_FUN_10032b180 */

void thunk_FUN_10032b180(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10032b3a4 | FUN_10032b3a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10032b3a4(ID param_1,undefined8 param_2,char *param_3,void *param_4)

{
  ID self;
  NSString *pNVar1;
  ID unaff_x20;
  String SVar2;
  String SVar3;
  
  _objc_allocWithZone();
  self = objc_stub::initWithContext_(unaff_x20);
  objc_stub::identifier(param_1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(&DAT_e500000000000000);
  objc_stub::setIdentifier_(self,pNVar1);
  objc_stub::setList_(self,param_1);
  objc_stub::FUN_100c0c320(self,param_2);
  return self;
}



/* Address: 0x10032b4b4 | _TtC9PasteCore18ListMetadataEntity::defaultSortDescriptors */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC9PasteCore18ListMetadataEntity::defaultSortDescriptors(ID param_1,SEL param_2)

{
  undefined *puVar1;
  undefined *self;
  NSString *pNVar2;
  ID IVar3;
  NSArray *pNVar4;
  
  puVar1 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 3;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  self = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::FUN_100c04440((ID)self,pNVar2,1);
  *(ID *)(puVar1 + 0x20) = IVar3;
  FUN_10032b6c8(0);
  pNVar4 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  return (ID)pNVar4;
}



/* Address: 0x10032b570 | FUN_10032b570 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10032b570(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::list(unaff_x20);
  return IVar1 != 0;
}



/* Address: 0x10032b5b0 | FUN_10032b5b0 */

undefined * FUN_10032b5b0(void)

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
  _swift_initStaticObject(puVar2,&DAT_100fc0150);
  FUN_10036c298();
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar1);
  return puVar4;
}



/* Address: 0x10032b654 | _TtC9PasteCore18ListMetadataEntity::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore18ListMetadataEntity::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x10032b6a8 | FUN_10032b6a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10032b6a8(void)

{
  return ZEXT816(0x100f97fe8);
}



/* Address: 0x10032b6c8 | FUN_10032b6c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10032b6c8(void)

{
  undefined *puVar1;
  
  if (DAT_100fbeca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSSortDescriptor;
  _swift_getObjCClassMetadata();
  DAT_100fbeca0 = puVar1;
  return;
}



/* Address: 0x10032b70c | thunk_FUN_10032b710 */

void thunk_FUN_10032b710(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc0190 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41dd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41dd8,&DAT_100ecb690);
  DAT_100fc0190 = pTVar1;
  return;
}



/* Address: 0x10032b710 | FUN_10032b710 */

void FUN_10032b710(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc0190 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41dd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41dd8,&DAT_100ecb690);
  DAT_100fc0190 = pTVar1;
  return;
}



/* Address: 0x10032b750 | FUN_10032b750 */

undefined1  [16] FUN_10032b750(void)

{
  return ZEXT816(0x100ecb690);
}



/* Address: 0x10032b760 | FUN_10032b760 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_10032b760(void)

{
  return 0;
}



/* Address: 0x10032b768 | FUN_10032b768 */

undefined1  [16]
FUN_10032b768(undefined8 *param_1,ulong param_2,int param_3,undefined8 param_4,long param_5)

{
  undefined1 (*pauVar1) [16];
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  code *pcVar6;
  
  if (param_2 >> ((ulong)*(byte *)(param_5 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10032b7ec);
    (*pcVar6)();
  }
  if ((*(ulong *)(param_5 + (param_2 >> 6) * 8 + 0x40) >> (param_2 & 0x3f) & 1) != 0) {
    if (*(int *)(param_5 + 0x24) == param_3) {
      pauVar1 = (undefined1 (*) [16])(*(long *)(param_5 + 0x30) + param_2 * 0x10);
      uVar3 = *(undefined8 *)(*pauVar1 + 8);
      auVar5 = *pauVar1;
      puVar2 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_2 * 0x10);
      uVar4 = puVar2[1];
      *param_1 = *puVar2;
      param_1[1] = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      return auVar5;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10032b7f4);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10032b7f0);
  (*pcVar6)();
}



/* Address: 0x10032b7f4 | FUN_10032b7f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10032b7f4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  undefined8 uVar6;
  NSString *pNVar7;
  NSArray *pNVar8;
  ID IVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  lVar14 = 0;
  while( true ) {
    for (; uVar15 != 0; uVar15 = uVar15 - 1 & uVar15) {
      uVar11 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      uVar6 = *puVar1;
      uVar2 = puVar1[1];
      uVar16 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar11 * 8);
      puVar10 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _swift_allocObject();
      *(undefined8 *)(puVar10 + 0x18) = 4;
      *(undefined8 *)(puVar10 + 0x10) = 2;
      *(undefined **)(puVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined8 *)(puVar10 + 0x20) = uVar6;
      *(undefined8 *)(puVar10 + 0x28) = uVar2;
      uVar6 = uVar16;
      _swift_getObjectType();
      *(undefined8 *)(puVar10 + 0x58) = uVar6;
      *(undefined8 *)(puVar10 + 0x40) = uVar16;
      _swift_unknownObjectRetain_n(uVar16,2);
      _swift_bridgeObjectRetain(uVar2);
      pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      _swift_release(puVar10);
      IVar9 = objc_stub::FUN_100c07fc0((ID)&_OBJC_CLASS___NSPredicate,pNVar7,pNVar8);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique(0);
      uVar12 = (ulong)puVar3 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar12 + 0x10);
      uVar12 = *(ulong *)(uVar12 + 0x18);
      if (uVar12 >> 1 <= uVar11) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar12,uVar11 + 1,1);
      }
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar11,IVar9);
      _swift_unknownObjectRelease(uVar16);
    }
    bVar5 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar5) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar14) {
      _swift_release(param_1);
      puVar10 = &_OBJC_CLASS___NSCompoundPredicate;
      _objc_allocWithZone();
      FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
      pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      IVar9 = objc_stub::FUN_100c05060((ID)puVar10,1,pNVar8);
      _swift_bridgeObjectRelease(puVar3);
      return IVar9;
    }
    uVar15 = ((ulong *)(param_1 + 0x40))[lVar14];
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10032ba78);
  (*pcVar4)();
}



/* Address: 0x10032ba78 | FUN_10032ba78 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10032ba78(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined8 uVar4;
  NSString *pNVar5;
  NSArray *pNVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  ID local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&local_60;
  iVar2 = (int)&local_60;
  iVar3 = (int)&local_60;
  FUN_10000cbfc(param_1,auStack_50);
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_60,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar4,6);
  if (iVar1 == 0) {
    FUN_10000cbfc(param_1,auStack_50);
    _swift_dynamicCast(&local_60,auStack_50,puVar9 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (iVar2 == 0) {
      FUN_10000cbfc(param_1,auStack_50);
      puVar7 = &DAT_100fc0198;
      FUN_1000037f0(&DAT_100fc0198,&DAT_100c41ec8);
      _swift_dynamicCast(&local_60,auStack_50,puVar9 + 8,puVar7,6);
      if (iVar3 == 0) {
        puVar9 = &_OBJC_CLASS___NSPredicate;
        _objc_allocWithZone();
        local_60 = objc_stub::init((ID)puVar9);
      }
      else {
        IVar8 = local_60;
        FUN_10032b7f4(local_60);
        _swift_bridgeObjectRelease(local_60);
        local_60 = IVar8;
      }
    }
    else {
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uStack_58);
      pNVar6 = (NSArray *)0x0;
      if (param_2 != 0) {
        pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
      }
      local_60 = objc_stub::FUN_100c07fc0((ID)&_OBJC_CLASS___NSPredicate,pNVar5,pNVar6);
    }
  }
  return local_60;
}



/* Address: 0x10032bbf4 | FUN_10032bbf4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10032bbf4(ID param_1,ID param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  ID IVar3;
  code *pcVar4;
  bool bVar5;
  ID *pIVar6;
  undefined8 uVar7;
  ID *pIVar8;
  undefined *puVar9;
  undefined *puVar10;
  NSString *pNVar11;
  ID IVar12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ID IVar17;
  ID IVar18;
  ID IVar19;
  uint uVar20;
  ulong uVar21;
  String SVar22;
  ID local_b8;
  ID local_b0;
  ID local_a8;
  ID IStack_a0;
  ID local_88;
  ID IStack_80;
  undefined *local_70;
  undefined *local_68;
  
  local_a8 = 0x2c;
  IStack_a0 = 0xe100000000000000;
  local_88 = param_1;
  IStack_80 = param_2;
  FUN_10030cce0();
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  pIVar6 = &local_a8;
  (extension_Foundation)::Swift::StringProtocol::_components
            (pIVar6,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,param_1,param_1);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  IVar18 = pIVar6[2];
  if (IVar18 != 0) {
    IVar19 = 0;
    puVar10 = PTR___type_metadata_for_Any_100eae0c0;
    do {
      local_88 = pIVar6[IVar19 * 2 + 4];
      IVar12 = (pIVar6 + IVar19 * 2 + 4)[1];
      local_70 = puVar2;
      IStack_80 = IVar12;
      FUN_10000cbfc(&local_88,&local_a8);
      uVar7 = 0;
      FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
      _swift_bridgeObjectRetain(IVar12);
      pIVar8 = &local_b8;
      _swift_dynamicCast(pIVar8,&local_a8,puVar10 + 8,uVar7,6);
      IVar12 = local_b8;
      if ((int)pIVar8 == 0) {
        FUN_10000cbfc(&local_88,&local_a8);
        pIVar8 = &local_b8;
        _swift_dynamicCast(pIVar8,&local_a8,puVar10 + 8,puVar2,6);
        IVar3 = local_b0;
        if (((ulong)pIVar8 & 1) == 0) {
          FUN_10000cbfc(&local_88,&local_a8);
          puVar9 = &DAT_100fbef78;
          FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
          pIVar8 = &local_b8;
          _swift_dynamicCast(pIVar8,&local_a8,puVar10 + 8,puVar9,6);
          IVar3 = local_b8;
          if ((int)pIVar8 == 0) {
            puVar9 = &_OBJC_CLASS___NSSortDescriptor;
            _objc_allocWithZone();
            IVar12 = objc_stub::init((ID)puVar9);
          }
          else {
            lVar14 = 0;
            uVar21 = 0;
            lVar15 = 1L << ((ulong)*(byte *)(local_b8 + 0x20) & 0x3f);
            do {
              uVar16 = *(ulong *)(local_b8 + uVar21 * 8 + 0x40);
              if (uVar16 != 0) {
                uVar16 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20);
                if (uVar16 - lVar15 != lVar14) {
                  if ((-lVar14 < 0) || (lVar15 <= (long)(uVar16 - lVar14))) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10032c080);
                    (*pcVar4)();
                  }
                  if ((*(ulong *)(local_b8 + 0x40 + (uVar21 & 0x3ffffffffffffff) * 8) >>
                       (uVar16 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10032c084);
                    (*pcVar4)();
                  }
                  lVar14 = (uVar16 - lVar14) * 0x10;
                  uVar7 = *(undefined8 *)(*(long *)(local_b8 + 0x30) + lVar14 + 8);
                  SVar22 = Swift::String::uppercased
                                     (*(String *)(*(long *)(local_b8 + 0x38) + lVar14));
                  _Var13.unknown = SVar22.bridgeObject;
                  if (SVar22.str == (undefined *)0x43534544 &&
                      _Var13.unknown == &DAT_e400000000000000) {
                    uVar20 = 0;
                  }
                  else {
                    bVar5 = Swift::_stringCompareWithSmolCheck
                                      ((_StringGuts)SVar22.str,_Var13,(_StringComparisonResult)0x44)
                    ;
                    uVar20 = bVar5 ^ 1;
                  }
                  _swift_bridgeObjectRetain(uVar7);
                  _swift_bridgeObjectRelease(_Var13.unknown);
                  puVar10 = &_OBJC_CLASS___NSSortDescriptor;
                  _objc_allocWithZone();
                  pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
                  _swift_bridgeObjectRelease(uVar7);
                  IVar12 = objc_stub::FUN_100c04440((ID)puVar10,pNVar11,(ulong)uVar20);
                  _swift_bridgeObjectRelease(IVar3);
                  puVar10 = PTR___type_metadata_for_Any_100eae0c0;
                  goto LAB_10032bf0c;
                }
                break;
              }
              uVar21 = uVar21 + 1;
              lVar14 = lVar14 + -0x40;
            } while (lVar15 + 0x3fU >> 6 != uVar21);
            puVar9 = &_OBJC_CLASS___NSSortDescriptor;
            _objc_allocWithZone();
            IVar12 = objc_stub::init((ID)puVar9);
            _swift_bridgeObjectRelease(IVar3);
          }
        }
        else {
          local_a8 = local_b8;
          IStack_a0 = local_b0;
          local_b8 = 0x20;
          local_b0 = 0xe100000000000000;
          pIVar8 = &local_b8;
          (extension_Foundation)::Swift::StringProtocol::_components
                    (pIVar8,puVar2,puVar2,param_1,param_1);
          if (pIVar8[2] < 2) {
            _swift_bridgeObjectRelease();
            _swift_bridgeObjectRetain(IVar3);
            uVar21 = 1;
            IVar17 = IVar3;
          }
          else {
            IVar17 = pIVar8[5];
            _Var13.unknown = (undefined *)pIVar8[6];
            _Var1.unknown = (undefined *)pIVar8[7];
            _swift_bridgeObjectRetain(IVar17);
            _swift_bridgeObjectRetain(_Var1.unknown);
            _swift_bridgeObjectRelease(pIVar8);
            if ((_Var13.unknown == (undefined *)0x435341) &&
               (_Var1.unknown == (undefined *)0xe300000000000000)) {
              _swift_bridgeObjectRelease(0xe300000000000000);
              uVar21 = 1;
            }
            else {
              bVar5 = Swift::_stringCompareWithSmolCheck(_Var13,_Var1,(_StringComparisonResult)0x41)
              ;
              uVar21 = (ulong)bVar5;
              _swift_bridgeObjectRelease(_Var1.unknown);
            }
          }
          puVar10 = &_OBJC_CLASS___NSSortDescriptor;
          _objc_allocWithZone();
          pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          IVar12 = objc_stub::FUN_100c04440((ID)puVar10,pNVar11,uVar21);
          _swift_bridgeObjectRelease(IVar3);
          _swift_bridgeObjectRelease(IVar17);
          puVar10 = PTR___type_metadata_for_Any_100eae0c0;
        }
      }
LAB_10032bf0c:
      FUN_100004594(&local_88);
      Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
      uVar21 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x10);
      uVar16 = *(ulong *)(((ulong)local_68 & 0xffffffffffffff8) + 0x18);
      if (uVar16 >> 1 <= uVar21) {
        Swift::Array<undefined>::__createNewBuffer(1 < uVar16,uVar21 + 1,1);
      }
      IVar19 = IVar19 + 1;
      Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar21,IVar12);
    } while (IVar19 != IVar18);
  }
  puVar2 = local_68;
  _swift_bridgeObjectRelease();
  return puVar2;
}



/* Address: 0x10032c084 | FUN_10032c084 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10032c084(undefined8 param_1,undefined8 param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *self;
  NSString *pNVar5;
  ID IVar6;
  ulong uVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar4 = &local_60;
  local_60 = 0x20;
  uStack_58 = 0xe100000000000000;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_10030cce0();
  (extension_Foundation)::Swift::StringProtocol::_components
            (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208,param_1,param_1);
  if (*(ulong *)((long)puVar4 + 0x10) < 2) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    param_2 = *(undefined8 *)((long)puVar4 + 0x28);
    _Var1.unknown = *(undefined **)((long)puVar4 + 0x30);
    _Var2.unknown = *(undefined **)((long)puVar4 + 0x38);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(_Var2.unknown);
    _swift_bridgeObjectRelease(puVar4);
    if (_Var1.unknown != (undefined *)0x435341 || _Var2.unknown != (undefined *)0xe300000000000000)
    {
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x41);
      uVar7 = (ulong)bVar3;
      _swift_bridgeObjectRelease(_Var2.unknown);
      goto LAB_10032c168;
    }
    _swift_bridgeObjectRelease(_Var2.unknown);
  }
  uVar7 = 1;
LAB_10032c168:
  self = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::FUN_100c04440((ID)self,pNVar5,uVar7);
  _swift_bridgeObjectRelease(param_2);
  return IVar6;
}



/* Address: 0x10032c1c8 | FUN_10032c1c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10032c1c8(long param_1)

{
  undefined4 uVar1;
  byte bVar2;
  bool bVar3;
  long lVar4;
  Bucket BVar5;
  undefined *puVar6;
  ID IVar7;
  NSString *pNVar8;
  uint uVar10;
  String SVar11;
  char *local_50;
  void *pvStack_48;
  _StringGuts _Var9;
  
  lVar4 = param_1;
  _swift_bridgeObjectRetain(*(undefined1 *)(param_1 + 0x20));
  BVar5 = Swift::_HashTable::get_startBucket((undefined *)(lVar4 + 0x40));
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  bVar2 = *(byte *)(param_1 + 0x20);
  _swift_bridgeObjectRelease(param_1);
  if (BVar5.offset == 1L << ((ulong)bVar2 & 0x3f)) {
    puVar6 = &_OBJC_CLASS___NSSortDescriptor;
    _objc_allocWithZone();
    IVar7 = objc_stub::init((ID)puVar6);
    return IVar7;
  }
  FUN_10032b768(&local_50,BVar5.offset,uVar1,0,param_1);
  SVar11.bridgeObject = pvStack_48;
  SVar11.str = local_50;
  SVar11 = Swift::String::uppercased(SVar11);
  _Var9.unknown = SVar11.bridgeObject;
  _swift_bridgeObjectRelease(pvStack_48);
  if (SVar11.str == (undefined *)0x43534544 && _Var9.unknown == &DAT_e400000000000000) {
    _swift_bridgeObjectRelease(_Var9.unknown);
    uVar10 = 0;
  }
  else {
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar11.str,_Var9,(_StringComparisonResult)0x44);
    _swift_bridgeObjectRelease(_Var9.unknown);
    uVar10 = bVar3 ^ 1;
  }
  puVar6 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(BVar5.offset);
  IVar7 = objc_stub::FUN_100c04440((ID)puVar6,pNVar8,(ulong)uVar10);
  return IVar7;
}



/* Address: 0x10032c338 | FUN_10032c338 */

ID FUN_10032c338(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  ID local_50;
  ID IStack_48;
  undefined1 auStack_40 [32];
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&local_50;
  iVar2 = (int)&local_50;
  iVar3 = (int)&local_50;
  FUN_10000cbfc(param_1,auStack_40);
  uVar4 = 0;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  puVar6 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_50,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar4,6);
  if (iVar1 == 0) {
    FUN_10000cbfc(param_1,auStack_40);
    _swift_dynamicCast(&local_50,auStack_40,puVar6 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (iVar2 == 0) {
      FUN_10000cbfc(param_1,auStack_40);
      puVar5 = &DAT_100fbef78;
      FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
      _swift_dynamicCast(&local_50,auStack_40,puVar6 + 8,puVar5,6);
      if (iVar3 == 0) {
        puVar6 = &_OBJC_CLASS___NSSortDescriptor;
        _objc_allocWithZone();
        IVar7 = objc_stub::init((ID)puVar6);
        return IVar7;
      }
      IVar7 = local_50;
      FUN_10032c1c8(local_50);
      IStack_48 = local_50;
    }
    else {
      FUN_10032c084(local_50,IStack_48);
      IVar7 = local_50;
    }
    _swift_bridgeObjectRelease(IStack_48);
    local_50 = IVar7;
  }
  return local_50;
}



/* Address: 0x10032c450 | FUN_10032c450 */

void FUN_10032c450(undefined8 param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [32];
  int iVar3;
  int iVar4;
  
  iVar2 = (int)&local_50;
  iVar3 = (int)&local_50;
  iVar4 = (int)&local_50;
  FUN_10000cbfc(param_1,auStack_40);
  puVar5 = &DAT_100fc01a0;
  FUN_1000037f0(&DAT_100fc01a0,&DAT_100c41ed0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_50,auStack_40,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar5,6);
  if (iVar2 == 0) {
    FUN_10000cbfc(param_1,auStack_40);
    uVar6 = 0;
    FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
    _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,uVar6,6);
    if (iVar3 == 0) {
      FUN_10000cbfc(param_1,auStack_40);
      _swift_dynamicCast(&local_50,auStack_40,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if (iVar4 == 0) {
        puVar5 = &DAT_100fbe4e8;
        FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
        _swift_allocObject();
        *(undefined8 *)(puVar5 + 0x18) = 3;
        *(undefined8 *)(puVar5 + 0x10) = 1;
        FUN_10032c338();
        *(undefined8 *)(puVar5 + 0x20) = param_1;
      }
      else {
        FUN_10032bbf4(local_50,uStack_48);
        _swift_bridgeObjectRelease(uStack_48);
      }
    }
    else {
      puVar5 = &DAT_100fbe4e8;
      FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 3;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      *(undefined8 *)(puVar5 + 0x20) = local_50;
    }
  }
  return;
}



/* Address: 0x10032c5c4 | thunk_FUN_10032b760 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_10032b760(void)

{
  return 0;
}



/* Address: 0x10032c5c8 | thunk_FUN_10032b760 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_10032b760(void)

{
  return 0;
}



/* Address: 0x10032c5cc | FUN_10032c5cc */

uint FUN_10032c5cc(undefined8 param_1,undefined8 param_2,URL param_3)

{
  long *plVar1;
  URL UVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x12;
  uint uVar5;
  long lVar6;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = (long)puVar7 - extraout_x12;
  if (((DAT_101057988 & 1) == 0) && (FUN_10034277c(), ((ulong)UVar3.unknown & 1) == 0)) {
    if (DAT_100fbe470 != -1) {
      _swift_once(&DAT_100fbe470,FUN_1002fd274);
    }
    plVar1 = DAT_101057968;
    puVar4 = &DAT_100c41ee0;
    _swift_getKeyPath(&DAT_100c41ee0);
    (**(code **)(*plVar1 + 0x98))(puVar7);
    _swift_release(puVar4);
    SVar10.bridgeObject = (void *)0xe900000000000065;
    SVar10.str = (char *)0x74696c71732e6264;
    Foundation::URL::appendingPathComponent(SVar10,param_3);
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(puVar7,UVar2.unknown);
    lVar9 = lVar6;
    FUN_10032c714(lVar6);
    uVar5 = (uint)lVar9;
    (*pcVar8)(lVar6,UVar2.unknown);
  }
  else {
    uVar5 = 1;
  }
  return uVar5 & 1;
}



/* Address: 0x10032c714 | FUN_10032c714 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010032c808) */

uint FUN_10032c714(URL param_1)

{
  uint uVar1;
  StoreType SVar2;
  URL self;
  NSString *pNVar3;
  ID IVar4;
  StoreType SVar5;
  Dictionary<String,static_(extension_in_CoreData):__C_NSPersistentStoreCoordinator_metadataForPersistentStore(type:_(extension_in_CoreData):__C_NSPersistentStore_StoreType,at:_Foundation_URL,options:_[Swift_AnyHashable_:_Any]_)_throws__>__Swift_String___Any_>
  DVar6;
  NSDictionary *pNVar7;
  long extraout_x8;
  long lVar8;
  String SVar9;
  undefined1 auStack_60 [16];
  
  SVar2 = StoreType::_typeMetadataAccessor();
  lVar8 = *(long *)(SVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar9 = Foundation::URL::get_path(self);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  IVar4 = objc_stub::fileExistsAtPath_((ID)self.unknown,pNVar3);
  if ((int)IVar4 == 0) {
    uVar1 = 0;
  }
  else {
    SVar5.unknown = (undefined *)0x0;
    FUN_10032c8ec();
    StoreType::_get_sqlite(SVar5);
    DVar6 = (extension_CoreData)::__C::NSPersistentStoreCoordinator::_metadataForPersistentStore
                      ((StoreType)(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)),param_1)
    ;
    (**(code **)(lVar8 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),SVar2.unknown);
    if (DAT_100fc0ee0 != -1) {
      _swift_once(&DAT_100fc0ee0,FUN_10035e28c);
    }
    IVar4 = DAT_101057980;
    pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(DVar6.unknown);
    IVar4 = objc_stub::FUN_100c056a0(IVar4,0,pNVar7);
    uVar1 = (uint)IVar4 ^ 1;
  }
  return uVar1;
}



/* Address: 0x10032c8dc | FUN_10032c8dc */

undefined1  [16] FUN_10032c8dc(void)

{
  return ZEXT816(0x100ecb728);
}



/* Address: 0x10032c8ec | FUN_10032c8ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10032c8ec(void)

{
  undefined *puVar1;
  
  if (DAT_100fc01a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSPersistentStoreCoordinator;
  _swift_getObjCClassMetadata();
  DAT_100fc01a8 = puVar1;
  return;
}



/* Address: 0x10032c930 | FUN_10032c930 */

void FUN_10032c930(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100004594(param_1);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_100004594(param_1 + 0x30);
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    FUN_100004594(param_1 + 0x50);
    return;
  }
  return;
}



/* Address: 0x10032c98c | FUN_10032c98c */

undefined8 * FUN_10032c98c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (lVar1 == 0) {
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  lVar1 = param_2[9];
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    lVar1 = param_2[0xd];
  }
  else {
    param_1[9] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6,lVar1);
    lVar1 = param_2[0xd];
  }
  if (lVar1 == 0) {
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
  }
  else {
    param_1[0xd] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 10,param_2 + 10);
  }
  return param_1;
}



/* Address: 0x10032ca50 | FUN_10032ca50 */

undefined8 * FUN_10032ca50(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = param_2[3];
  if (param_1[3] == 0) {
    if (lVar1 == 0) goto LAB_10032caac;
    param_1[3] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
  }
  else if (lVar1 == 0) {
    FUN_100004594(param_1);
LAB_10032caac:
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  else {
    FUN_10003083c(param_1,param_2);
  }
  param_1[4] = param_2[4];
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  lVar1 = param_2[9];
  if (param_1[9] == 0) {
    if (lVar1 != 0) {
      param_1[9] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 6,param_2 + 6);
      goto LAB_10032cb20;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 6,param_2 + 6);
      goto LAB_10032cb20;
    }
    FUN_100004594(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
LAB_10032cb20:
  lVar1 = param_2[0xd];
  if (param_1[0xd] == 0) {
    if (lVar1 != 0) {
      param_1[0xd] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 10,param_2 + 10);
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 10,param_2 + 10);
      return param_1;
    }
    FUN_100004594(param_1 + 10);
  }
  uVar2 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  return param_1;
}



/* Address: 0x10032cb80 | FUN_10032cb80 */

void FUN_10032cb80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  return;
}



/* Address: 0x10032cba4 | FUN_10032cba4 */

undefined8 * FUN_10032cba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1[3] != 0) {
    FUN_100004594(param_1);
  }
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (param_1[9] != 0) {
    FUN_100004594(param_1 + 6);
  }
  uVar2 = param_2[6];
  uVar3 = param_2[9];
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  param_1[9] = uVar3;
  param_1[8] = uVar1;
  if (param_1[0xd] != 0) {
    FUN_100004594(param_1 + 10);
  }
  uVar2 = param_2[10];
  uVar3 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar2;
  param_1[0xd] = uVar3;
  param_1[0xc] = uVar1;
  return param_1;
}



/* Address: 0x10032cc20 | FUN_10032cc20 */

int FUN_10032cc20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10032cc68 | FUN_10032cc68 */

void FUN_10032cc68(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xe) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (param_2 != 0) {
      param_1[5] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10032ccc4 | FUN_10032ccc4 */

undefined1  [16] FUN_10032ccc4(void)

{
  return ZEXT816(0x100ecb7a0);
}



/* Address: 0x10032ccd4 | FUN_10032ccd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10032ccd4(long *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  NSString *pNVar4;
  _ArrayBuffer _Var5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  ulong local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar3 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _Var5.unknown = (undefined *)objc_stub::initWithEntityName_(puVar3,pNVar4);
  FUN_100308464(0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    return 0;
  }
  if ((ulong)_Var5.unknown >> 0x3e == 0) {
    uVar7 = *(ulong *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = _Var5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var5.unknown) {
      _Var1.unknown = _Var5.unknown;
    }
    uVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar3;
  if (uVar7 == 0) {
    _swift_bridgeObjectRelease(_Var5.unknown);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_100307738(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10032cf08);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      if (((ulong)_Var5.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)_Var5.unknown & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10032ceac);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(_Var5.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar6 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,_Var5);
      }
      local_d8 = uVar6;
      FUN_10032cf08(&local_d0,&local_d8);
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_100307738(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x38) = uStack_b8;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x30) = uStack_c0;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x48) = uStack_a8;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x40) = local_b0;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x28) = uStack_c8;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x20) = local_d0;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x78) = uStack_78;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x70) = local_80;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x88) = uStack_68;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x80) = uStack_70;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x58) = uStack_98;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x50) = local_a0;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x68) = uStack_88;
      *(undefined8 *)(puVar3 + uVar6 * 0x70 + 0x60) = uStack_90;
    } while (uVar7 != uVar8);
    _swift_bridgeObjectRelease(_Var5.unknown);
  }
  *param_1 = (long)puVar3;
  return 0;
}



/* Address: 0x10032cf08 | FUN_10032cf08 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032cf08(undefined8 *param_1,ID *param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ulong uVar3;
  ID self;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  
  uVar3 = 0;
  self = *param_2;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    uStack_88 = 0;
    local_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_68 = uStack_88;
  local_70 = local_90;
  local_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 == 0) {
    FUN_100005808(&local_70,&DAT_100fbe6f0,&DAT_100c42750);
  }
  else {
    _swift_dynamicCast(&local_a0,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar4 = local_a0;
    uVar5 = uStack_98;
    if ((uVar3 & 1) != 0) goto LAB_10032d04c;
  }
  uVar4 = 0;
  uVar5 = 0xe000000000000000;
LAB_10032d04c:
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::FUN_100c112a0(self,pNVar1);
  if (IVar2 == 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  return;
}



/* Address: 0x10032d124 | FUN_10032d124 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10032d124(long param_1,ID param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  NSString *pNVar8;
  ID self;
  NSString *pNVar9;
  ID IVar10;
  ulong uVar11;
  char *pcVar12;
  ulong uVar13;
  _StringGuts _Var14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String separator;
  undefined8 local_240;
  undefined8 uStack_238;
  char *local_230;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 auStack_1e8 [8];
  ulong local_1e0;
  ulong uStack_1d8;
  undefined8 local_1d0;
  undefined *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_190;
  undefined8 local_188;
  undefined1 auStack_180 [32];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
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
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar19 = *(long *)(param_1 + 0x10);
  if (lVar19 != 0) {
    param_1 = param_1 + 0x20;
    this = (_DictionaryStorage *)&DAT_100fc01b0;
    FUN_1000037f0(&DAT_100fc01b0,&DAT_100c41f28);
    local_230 = "sharedPasteboardHistory";
    uStack_238 = 2;
    local_240 = 1;
    do {
      FUN_10032d7f0(param_1,&local_e8);
      uStack_118 = uStack_a0;
      local_120 = local_a8;
      uStack_108 = uStack_90;
      uStack_110 = uStack_98;
      uStack_f8 = uStack_80;
      local_100 = local_88;
      uStack_158 = uStack_e0;
      local_160 = local_e8;
      uStack_148 = uStack_d0;
      uStack_150 = uStack_d8;
      uStack_138 = uStack_c0;
      local_140 = local_c8;
      uStack_128 = uStack_b0;
      uStack_130 = uStack_b8;
      local_190 = 0xd000000000000010;
      local_188 = 0x8000000100da1d40;
      FUN_100011090(&local_160,auStack_180,&DAT_100fbe6f0,&DAT_100c42750);
      uVar4 = 1;
      Swift::_DictionaryStorage::_allocate(this,1);
      _swift_retain();
      FUN_100011090(&local_190,&local_1e0,&DAT_100fc01b8,&DAT_100c41f30);
      uVar2 = uStack_1d8;
      uVar11 = local_1e0;
      uVar5 = local_1e0;
      uVar13 = uStack_1d8;
      FUN_100071370();
      if ((uVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10032d7e8);
        (*pcVar3)();
      }
      lVar17 = uVar4 + (uVar5 >> 6) * 8;
      *(ulong *)(lVar17 + 0x40) = *(ulong *)(lVar17 + 0x40) | 1L << (uVar5 & 0x3f);
      puVar7 = (ulong *)(*(long *)(uVar4 + 0x30) + uVar5 * 0x10);
      *puVar7 = uVar11;
      puVar7[1] = uVar2;
      puVar1 = (undefined8 *)(*(long *)(uVar4 + 0x38) + uVar5 * 0x20);
      puVar1[1] = puStack_1c8;
      *puVar1 = local_1d0;
      puVar1[3] = uStack_1b8;
      puVar1[2] = uStack_1c0;
      if (SCARRY8(*(long *)(uVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10032d7ec);
        (*pcVar3)();
      }
      *(long *)(uVar4 + 0x10) = *(long *)(uVar4 + 0x10) + 1;
      _swift_release(uVar4);
      FUN_100005808(&local_190,&DAT_100fc01b8,&DAT_100c41f30);
      puVar6 = &DAT_100fc01c0;
      FUN_1000037f0(&DAT_100fc01c0,&DAT_100c41f38);
      puVar7 = &local_1e0;
      local_1e0 = uVar4;
      puStack_1c8 = puVar6;
      FUN_100328e18(puVar7,0,param_2);
      FUN_100004594(&local_1e0);
      if (puVar7 == (ulong *)0x0) {
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        self = objc_stub::FUN_100c052e0((ID)&_OBJC_CLASS___NSEntityDescription,pNVar8,param_2);
        FUN_100011090(&local_160,&local_1e0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar6 = puStack_1c8;
        if (puStack_1c8 == (undefined *)0x0) {
          lVar17 = 0;
        }
        else {
          FUN_100004640(&local_1e0,puStack_1c8);
          lVar16 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
          lVar18 = (long)&local_240 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar16 + 0x10))(lVar18);
          lVar17 = lVar18;
          Swift::__bridgeAnythingToObjectiveC(lVar18,puVar6);
          (**(code **)(lVar16 + 8))(lVar18,puVar6);
          FUN_100004594(&local_1e0);
        }
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,lVar17,pNVar8);
        _swift_unknownObjectRelease(lVar17);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,pNVar8,pNVar9);
        FUN_100011090(&uStack_130,&local_1e0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar6 = puStack_1c8;
        if (puStack_1c8 == (undefined *)0x0) {
          lVar17 = 0;
        }
        else {
          FUN_100004640(&local_1e0,puStack_1c8);
          lVar16 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
          lVar18 = (long)&local_240 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar16 + 0x10))(lVar18);
          lVar17 = lVar18;
          Swift::__bridgeAnythingToObjectiveC(lVar18,puVar6);
          (**(code **)(lVar16 + 8))(lVar18,puVar6);
          FUN_100004594(&local_1e0);
        }
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,lVar17,pNVar8);
        _swift_unknownObjectRelease(lVar17);
        FUN_100011090(&uStack_110,&local_1e0,&DAT_100fbe6f0,&DAT_100c42750);
        puVar6 = puStack_1c8;
        if (puStack_1c8 == (undefined *)0x0) {
          lVar17 = 0;
        }
        else {
          FUN_100004640(&local_1e0,puStack_1c8);
          lVar16 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
          lVar18 = (long)&local_240 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
          (**(code **)(lVar16 + 0x10))(lVar18);
          lVar17 = lVar18;
          Swift::__bridgeAnythingToObjectiveC(lVar18,puVar6);
          (**(code **)(lVar16 + 8))(lVar18,puVar6);
          FUN_100004594(&local_1e0);
        }
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        objc_stub::setValue_forKey_(self,lVar17);
        _swift_unknownObjectRelease(lVar17);
        local_1e0 = 0;
        IVar10 = objc_stub::validateForInsert_(self,&local_1e0);
        if ((int)IVar10 == 0) {
          uVar11 = local_1e0;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          pcVar12 = &DAT_100fbec98;
          FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
          _Var14.unknown = (undefined *)0x40;
          pcVar15 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(pcVar12 + 0x18) = uStack_238;
          *(undefined8 *)(pcVar12 + 0x10) = local_240;
          local_1e0 = 0;
          uStack_1d8 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x2c,_Var14);
          SVar20.bridgeObject = (void *)((ulong)local_230 | 0x8000000000000000);
          SVar20.str = (char *)0xd00000000000002a;
          SVar22.bridgeObject = pNVar8;
          SVar22.str = pcVar15;
          Swift::String::append(SVar20,SVar22);
          _swift_getErrorValue(uVar11,auStack_1e8,&local_200);
          Swift::DefaultStringInterpolation::_appendInterpolation(local_200,uStack_1f8);
          *(undefined **)(pcVar12 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
          *(ulong *)(pcVar12 + 0x20) = local_1e0;
          *(ulong *)(pcVar12 + 0x28) = uStack_1d8;
          SVar21.bridgeObject = (void *)0x20;
          SVar21.str = pcVar12;
          separator.bridgeObject = (void *)0xa;
          separator.str = (char *)0xe100000000000000;
          Swift::_print(SVar21,separator);
          _swift_release(pcVar12);
          objc_stub::deleteObject_(param_2,self);
          _swift_errorRelease(uVar11);
        }
      }
      FUN_10032d824(&local_160);
      param_1 = param_1 + 0x70;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10032d7f0 | FUN_10032d7f0 */

undefined8 FUN_10032d7f0(undefined8 param_1,undefined8 param_2)

{
  FUN_10032c98c(param_2,param_1,&DAT_100ecb7a0);
  return param_2;
}



/* Address: 0x10032d824 | FUN_10032d824 */

undefined8 FUN_10032d824(undefined8 param_1)

{
  FUN_10032c930(param_1,&DAT_100ecb7a0);
  return param_1;
}



/* Address: 0x10032d850 | FUN_10032d850 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032d850(undefined8 param_1,undefined8 param_2)

{
  CancellationError CVar1;
  ulong uVar2;
  undefined *puVar3;
  NSString *pNVar4;
  ID self;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar9;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1a8) = CVar1.unknown;
  lVar7 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x1b0) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  puVar3 = &DAT_100fc01c8;
  FUN_1000037f0(&DAT_100fc01c8,&DAT_100c41f48);
  *(undefined **)(unaff_x22 + 0x1c0) = puVar3;
  lVar9 = *(long *)(puVar3 + -8);
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar2;
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = CKContainer::containerWithIdentifier_((ID)&_OBJC_CLASS___CKContainer,pNVar4);
  *(ID *)(unaff_x22 + 0x1d0) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x150;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10032da48;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  *(undefined **)(unaff_x22 + 200) = puVar3;
  lVar7 = unaff_x22 + 0xb0;
  FUN_10000cbb0(lVar7);
  uVar5 = 0;
  FUN_1002fc1ec();
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar5;
  puVar6 = &DAT_100fc1bb0;
  FUN_1000037f0(&DAT_100fc1bb0,&DAT_100c422e0);
  *(undefined **)(unaff_x22 + 0x1e0) = puVar6;
  function.bridgeObject = (void *)0x8000000100da1040;
  function.str = (char *)0xd000000000000026;
  Swift::CheckedContinuation::init(continuation,function);
  pcVar8 = *(code **)(lVar9 + 0x20);
  *(code **)(unaff_x22 + 0x1e8) = pcVar8;
  (*pcVar8)(lVar7,uVar2,puVar3);
  *(undefined8 *)(unaff_x22 + 0x90) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0x42000000;
  *(code **)(unaff_x22 + 0xa0) = FUN_1003b1114;
  *(undefined **)(unaff_x22 + 0xa8) = &DAT_100ecb7c8;
  CKContainer::accountStatusWithCompletionHandler_(self,(undefined8 *)(unaff_x22 + 0x90));
  pcVar8 = *(code **)(lVar9 + 8);
  *(code **)(unaff_x22 + 0x1f0) = pcVar8;
  (*pcVar8)(lVar7,puVar3);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10032da48 | FUN_10032da48 */

void FUN_10032da48(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 400);
  uVar3 = *(undefined8 *)(lVar5 + 0x198);
  lVar4 = *(long *)(lVar5 + 0x30);
  *(long *)(lVar5 + 0x1f8) = lVar4;
  FUN_1000da368();
  *(undefined8 *)(lVar5 + 0x200) = uVar1;
  *(undefined8 *)(lVar5 + 0x208) = uVar3;
  if (lVar4 == 0) {
    pcVar2 = FUN_10032dab4;
  }
  else {
    pcVar2 = FUN_10032e2c8;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10032dab4 | FUN_10032dab4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032dab4(void)

{
  code *pcVar1;
  code *pcVar2;
  ID self;
  CKRecordZoneID *this;
  CKRecordZoneID *pCVar3;
  ID IVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  String SVar8;
  String zoneName;
  
  if (*(long *)(unaff_x22 + 0x150) == 1) {
    pcVar1 = *(code **)(unaff_x22 + 0x1e8);
    pcVar2 = *(code **)(unaff_x22 + 0x1f0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1c8);
    self = *(ID *)(unaff_x22 + 0x1d0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1c0);
    this = (CKRecordZoneID *)0x0;
    FUN_10000ec2c(0,&DAT_100fc01d0,&PTR__OBJC_CLASS___CKRecordZoneID_100f8db98);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    zoneName.bridgeObject = &DAT_e400000000000000;
    zoneName.str = (char *)0x6e69614d;
    pCVar3 = (extension_CloudKit)::__C::CKRecordZoneID::__allocating_init(this,zoneName,SVar8);
    *(CKRecordZoneID **)(unaff_x22 + 0x210) = pCVar3;
    IVar4 = objc_stub::privateCloudDatabase(self);
    *(ID *)(unaff_x22 + 0x218) = IVar4;
    *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x158;
    *(long *)(unaff_x22 + 0x50) = unaff_x22;
    *(code **)(unaff_x22 + 0x58) = FUN_10032dc78;
    continuation.unknown = (undefined *)(unaff_x22 + 0x50);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined8 *)(unaff_x22 + 0x108) = uVar7;
    lVar5 = unaff_x22 + 0xf0;
    FUN_10000cbb0(lVar5);
    SVar8.bridgeObject = (void *)0x8000000100da1040;
    SVar8.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,SVar8);
    (*pcVar1)(lVar5,uVar6,uVar7);
    *(undefined **)(unaff_x22 + 0xd0) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0x42000000;
    *(code **)(unaff_x22 + 0xe0) = FUN_1003b1114;
    *(undefined **)(unaff_x22 + 0xe8) = &DAT_100ecb7f0;
    objc_stub::accountStatusWithCompletionHandler_(self);
    (*pcVar2)(lVar5,uVar7);
    _swift_continuation_await(unaff_x22 + 0x50);
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010032dc74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032dc78 | FUN_10032dc78 */

void FUN_10032dc78(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x220) = *(long *)(lVar2 + 0x70);
  if (*(long *)(lVar2 + 0x70) == 0) {
    pcVar1 = FUN_10032dcd0;
  }
  else {
    pcVar1 = FUN_10032e32c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x200),*(undefined8 *)(lVar2 + 0x208));
  return;
}



/* Address: 0x10032dcd0 | FUN_10032dcd0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032dcd0(void)

{
  undefined *puVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  String SVar6;
  String separator;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  if (*(long *)(unaff_x22 + 0x158) == 1) {
    puVar1 = &DAT_100ecb828;
    _swift_allocObject(&DAT_100ecb828,0x20,7);
    *(undefined **)(unaff_x22 + 0x228) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    *(undefined8 *)(puVar1 + 0x18) = uVar5;
    plVar2 = (long *)0x1b0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x230) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10032de58;
    FUN_10032fcb8(0x404e000000000000,*(undefined8 *)(unaff_x22 + 400),
                  *(undefined8 *)(unaff_x22 + 0x198),&DAT_100c41f58,puVar1);
    return;
  }
  pcVar3 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  pcVar3[0x18] = '\x02';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x10] = '\x01';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar3[0x20] = '@';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x24] = '\0';
  pcVar3[0x25] = '\0';
  pcVar3[0x26] = '\0';
  pcVar3[0x27] = -0x30;
  pcVar3[0x28] = -0x70;
  pcVar3[0x29] = '$';
  pcVar3[0x2a] = -0x26;
  pcVar3[0x2b] = '\0';
  pcVar3[0x2c] = '\x01';
  pcVar3[0x2d] = '\0';
  pcVar3[0x2e] = '\0';
  pcVar3[0x2f] = -0x80;
  SVar6.bridgeObject = (void *)0x20;
  SVar6.str = pcVar3;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar6,separator);
  _swift_release(pcVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010032de54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032de58 | FUN_10032de58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032de58(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  char *pcVar5;
  long unaff_x20;
  char *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x22;
  long lVar10;
  void *pvVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String separator;
  String SVar17;
  String separator_00;
  String separator_01;
  
  lVar12 = *unaff_x22;
  lVar10 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x230));
  pcVar6 = *(char **)(lVar12 + 0x228);
  if (unaff_x20 != 0) {
    _swift_release(pcVar6);
    uVar7 = *(undefined8 *)(lVar12 + 0x1e0);
    uVar8 = *(ulong *)(lVar12 + 0x1b8);
    pvVar11 = *(void **)(lVar12 + 0x1a8);
    *(long *)(lVar12 + 0x160) = unaff_x20;
    _swift_errorRetain();
    _swift_dynamicCast(uVar8,lVar12 + 0x160,uVar7,pvVar11,0);
    if ((uVar8 & 1) != 0) {
      lVar1 = *(long *)(lVar12 + 0x1b0);
      uVar7 = *(undefined8 *)(lVar12 + 0x1b8);
      uVar9 = *(undefined8 *)(lVar12 + 0x1a8);
      _swift_errorRelease();
      pcVar6 = &DAT_100fbec98;
      FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
      _swift_allocObject();
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar6[0x20] = ' ';
      pcVar6[0x21] = '\0';
      pcVar6[0x22] = '\0';
      pcVar6[0x23] = '\0';
      pcVar6[0x24] = '\0';
      pcVar6[0x25] = '\0';
      pcVar6[0x26] = '\0';
      pcVar6[0x27] = -0x30;
      pcVar6[0x28] = '`';
      pcVar6[0x29] = '$';
      pcVar6[0x2a] = -0x26;
      pcVar6[0x2b] = '\0';
      pcVar6[0x2c] = '\x01';
      pcVar6[0x2d] = '\0';
      pcVar6[0x2e] = '\0';
      pcVar6[0x2f] = -0x80;
      SVar13.bridgeObject = (void *)0x20;
      SVar13.str = pcVar6;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar13,separator);
      _swift_release(pcVar6);
      (**(code **)(lVar1 + 8))(uVar7,uVar9);
      _swift_errorRelease(*(undefined8 *)(lVar12 + 0x160));
      goto LAB_10032e268;
    }
    uVar9 = *(undefined8 *)(lVar12 + 0x1e0);
    _swift_errorRelease(*(undefined8 *)(lVar12 + 0x160));
    pcVar6 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _Var4.unknown = (undefined *)0x40;
    pcVar5 = (char *)0x7;
    pcVar3 = pcVar6;
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    Swift::_StringGuts::grow(0x23,_Var4);
    SVar14.bridgeObject = (void *)0x8000000100da23c0;
    SVar14.str = (char *)0xd000000000000021;
    SVar17.bridgeObject = pvVar11;
    SVar17.str = pcVar5;
    Swift::String::append(SVar14,SVar17);
    _swift_getErrorValue();
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(lVar12 + 0x138),*(undefined8 *)(lVar12 + 0x140));
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = '\0';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = '\0';
    pcVar3[0x28] = '\0';
    pcVar3[0x29] = '\0';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\0';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x20;
    SVar15.bridgeObject = (void *)0x20;
    SVar15.str = pcVar3;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar15,separator_00);
    _swift_release(pcVar3);
    FUN_1000da768(lVar12 + 0x110);
    lVar1 = *(long *)(lVar12 + 0x130);
    FUN_100004640(lVar12 + 0x110,*(undefined8 *)(lVar12 + 0x128));
    (**(code **)(lVar1 + 0x20))();
    FUN_100004594(lVar12 + 0x110);
    *(long *)(lVar12 + 0x170) = unaff_x20;
    _swift_errorRetain();
    uVar7 = 0;
    FUN_1002fbb58(0);
    uVar8 = lVar12 + 0x178;
    _swift_dynamicCast(uVar8,lVar12 + 0x170,uVar9,uVar7,6);
    if ((uVar8 & 1) == 0) {
LAB_10032e1c8:
      _swift_errorRelease();
      goto LAB_10032e268;
    }
    *(undefined8 *)(lVar12 + 0x180) = *(undefined8 *)(lVar12 + 0x178);
    FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
    if (*(long *)(lVar12 + 0x188) - 3U < 2) {
      _swift_allocObject(pcVar6,0x40,7);
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      pcVar3 = "Network error during CloudKit cleanup";
      *(undefined **)(pcVar6 + 0x38) = puVar2;
      uVar7 = 0xd000000000000025;
    }
    else {
      if (*(long *)(lVar12 + 0x188) != 0x1a) goto LAB_10032e1c8;
      _swift_allocObject(pcVar6,0x40,7);
      pcVar6[0x18] = '\x02';
      pcVar6[0x19] = '\0';
      pcVar6[0x1a] = '\0';
      pcVar6[0x1b] = '\0';
      pcVar6[0x1c] = '\0';
      pcVar6[0x1d] = '\0';
      pcVar6[0x1e] = '\0';
      pcVar6[0x1f] = '\0';
      pcVar6[0x10] = '\x01';
      pcVar6[0x11] = '\0';
      pcVar6[0x12] = '\0';
      pcVar6[0x13] = '\0';
      pcVar6[0x14] = '\0';
      pcVar6[0x15] = '\0';
      pcVar6[0x16] = '\0';
      pcVar6[0x17] = '\0';
      pcVar3 = "V4 CloudKit zone already deleted or never existed";
      *(undefined **)(pcVar6 + 0x38) = puVar2;
      uVar7 = 0xd000000000000031;
    }
    *(undefined8 *)(pcVar6 + 0x20) = uVar7;
    *(ulong *)(pcVar6 + 0x28) = (ulong)(pcVar3 + -0x20) | 0x8000000000000000;
    SVar16.bridgeObject = (void *)0x20;
    SVar16.str = pcVar6;
    separator_01.bridgeObject = (void *)0xa;
    separator_01.str = (char *)0xe100000000000000;
    Swift::_print(SVar16,separator_01);
    _swift_errorRelease();
  }
  _swift_release(pcVar6);
LAB_10032e268:
  uVar7 = *(undefined8 *)(lVar12 + 0x1b8);
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x1c8));
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010032e29c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar10 + 8))();
  return;
}



/* Address: 0x10032e2c8 | FUN_10032e2c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032e2c8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  _swift_willThrow();
  _swift_errorRelease(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010032e328. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032e32c | FUN_10032e32c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10032e32c(void)

{
  long lVar1;
  undefined *puVar2;
  char *pcVar3;
  char *pcVar4;
  _StringGuts _Var5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long unaff_x22;
  void *pvVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String separator;
  String SVar16;
  String separator_00;
  String separator_01;
  
  _swift_willThrow();
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar9 = *(ulong *)(unaff_x22 + 0x1b8);
  pvVar11 = *(void **)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x160) = uVar7;
  _swift_errorRetain(uVar7);
  _swift_dynamicCast(uVar9,unaff_x22 + 0x160,uVar8,pvVar11,0);
  if ((uVar9 & 1) == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x160));
    pcVar3 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _Var5.unknown = (undefined *)0x40;
    pcVar6 = (char *)0x7;
    pcVar4 = pcVar3;
    _swift_allocObject();
    pcVar4[0x18] = '\x02';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\x01';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    Swift::_StringGuts::grow(0x23,_Var5);
    SVar13.bridgeObject = (void *)0x8000000100da23c0;
    SVar13.str = (char *)0xd000000000000021;
    SVar16.bridgeObject = pvVar11;
    SVar16.str = pcVar6;
    Swift::String::append(SVar13,SVar16);
    _swift_getErrorValue(uVar7,unaff_x22 + 0x168,unaff_x22 + 0x138);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x140));
    puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined **)(pcVar4 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = -0x20;
    SVar14.bridgeObject = (void *)0x20;
    SVar14.str = pcVar4;
    separator_00.bridgeObject = (void *)0xa;
    separator_00.str = (char *)0xe100000000000000;
    Swift::_print(SVar14,separator_00);
    _swift_release(pcVar4);
    FUN_1000da768(unaff_x22 + 0x110);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
    lVar1 = *(long *)(unaff_x22 + 0x130);
    FUN_100004640(unaff_x22 + 0x110,uVar8);
    (**(code **)(lVar1 + 0x20))(uVar7,uVar8,lVar1);
    FUN_100004594(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x170) = uVar7;
    _swift_errorRetain(uVar7);
    uVar8 = 0;
    FUN_1002fbb58(0);
    uVar9 = unaff_x22 + 0x178;
    _swift_dynamicCast(uVar9,unaff_x22 + 0x170,uVar10,uVar8,6);
    if ((uVar9 & 1) != 0) {
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x178);
      FUN_100003a00(&DAT_100fbddb0,FUN_1002fbb58,&TargetProtocolConformanceDescriptor_100c3fa10);
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_get_code();
      if (*(long *)(unaff_x22 + 0x188) - 3U < 2) {
        _swift_allocObject(pcVar3,0x40,7);
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        pcVar4 = "Network error during CloudKit cleanup";
        *(undefined **)(pcVar3 + 0x38) = puVar2;
        uVar8 = 0xd000000000000025;
      }
      else {
        if (*(long *)(unaff_x22 + 0x188) != 0x1a) goto LAB_10032e64c;
        _swift_allocObject(pcVar3,0x40,7);
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        pcVar4 = "V4 CloudKit zone already deleted or never existed";
        *(undefined **)(pcVar3 + 0x38) = puVar2;
        uVar8 = 0xd000000000000031;
      }
      *(undefined8 *)(pcVar3 + 0x20) = uVar8;
      *(ulong *)(pcVar3 + 0x28) = (ulong)(pcVar4 + -0x20) | 0x8000000000000000;
      SVar15.bridgeObject = (void *)0x20;
      SVar15.str = pcVar3;
      separator_01.bridgeObject = (void *)0xa;
      separator_01.str = (char *)0xe100000000000000;
      Swift::_print(SVar15,separator_01);
      _swift_errorRelease(uVar7);
      _swift_release(pcVar3);
      goto LAB_10032e650;
    }
  }
  else {
    lVar1 = *(long *)(unaff_x22 + 0x1b0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_errorRelease(uVar7);
    pcVar3 = &DAT_100fbec98;
    FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = ' ';
    pcVar3[0x21] = '\0';
    pcVar3[0x22] = '\0';
    pcVar3[0x23] = '\0';
    pcVar3[0x24] = '\0';
    pcVar3[0x25] = '\0';
    pcVar3[0x26] = '\0';
    pcVar3[0x27] = -0x30;
    pcVar3[0x28] = '`';
    pcVar3[0x29] = '$';
    pcVar3[0x2a] = -0x26;
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\x01';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x80;
    SVar12.bridgeObject = (void *)0x20;
    SVar12.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar12,separator);
    _swift_release(pcVar3);
    (**(code **)(lVar1 + 8))(uVar8,uVar10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  }
LAB_10032e64c:
  _swift_errorRelease(uVar7);
LAB_10032e650:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010032e684. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10032e744 | FUN_10032e744 */

void FUN_10032e744(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}


