/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000cd608 | FUN_1000cd608 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cd644 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_1000cd608(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000037f0(&DAT_100faa2d8,&DAT_100c27960);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x1000cd674 | FUN_1000cd674 */

undefined4 FUN_1000cd674(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x6b6e696c;
  if (param_1 != '\x01') {
    uVar1 = 0x74786574;
  }
  return uVar1;
}



/* Address: 0x1000cd698 | FUN_1000cd698 */

void FUN_1000cd698(void)

{
  char cVar1;
  uint uVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  uVar2 = 0x6b6e696c;
  if (cVar1 != '\x01') {
    uVar2 = 0x74786574;
  }
  SVar4.bridgeObject = &DAT_e400000000000000;
  SVar4.str = (char *)(ulong)uVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  HVar3.unknown = &DAT_e400000000000000;
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1000cd6fc | FUN_1000cd6fc */

void FUN_1000cd6fc(Hasher param_1)

{
  uint uVar1;
  char *unaff_x20;
  String SVar2;
  
  uVar1 = 0x6b6e696c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x74786574;
  }
  SVar2.bridgeObject = &DAT_e400000000000000;
  SVar2.str = (char *)(ulong)uVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(&DAT_e400000000000000);
  return;
}



/* Address: 0x1000cd734 | FUN_1000cd734 */

void FUN_1000cd734(__int64 param_1)

{
  char cVar1;
  uint uVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  uVar2 = 0x6b6e696c;
  if (cVar1 != '\x01') {
    uVar2 = 0x74786574;
  }
  SVar4.bridgeObject = &DAT_e400000000000000;
  SVar4.str = (char *)(ulong)uVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  HVar3.unknown = &DAT_e400000000000000;
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1000cd794 | FUN_1000cd794 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000cd7d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000cd794(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000037f0(&DAT_100faa2d8,&DAT_100c27960);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000cd80c | FUN_1000cd80c */

void FUN_1000cd80c(ulong *param_1)

{
  uint uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6b6e696c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x74786574;
  }
  *param_1 = (ulong)uVar1;
  param_1[1] = (ulong)&DAT_e400000000000000;
  return;
}



/* Address: 0x1000cd834 | FUN_1000cd834 */

void FUN_1000cd834(void)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  TypeDisplayRepresentation TVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  String stringLiteral;
  
  puVar1 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar4 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  TVar3 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  FUN_1000ce204(TVar3.unknown,&DAT_101057078);
  FUN_1000cd990(TVar3.unknown,&DAT_101057078);
  stringLiteral.bridgeObject = (void *)0xe900000000000065;
  stringLiteral.str = (char *)0x707954206d657449;
  Foundation::LocalizedStringResource::init(stringLiteral);
  (**(code **)(lVar4 + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,LVar2.unknown);
  AppIntents::TypeDisplayRepresentation::_init
            ((LocalizedStringResource)
             (&stack0xffffffffffffffc0 + -extraout_x8 +
             -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1000cd948 | FUN_1000cd948 */

void FUN_1000cd948(void)

{
  TypeDisplayRepresentation TVar1;
  
  if (DAT_100fac380 != -1) {
    _swift_once(&DAT_100fac380,FUN_1000cd834);
  }
  TVar1 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  FUN_1000cd990(TVar1.unknown,&DAT_101057078);
  return;
}



/* Address: 0x1000cd990 | FUN_1000cd990 */

undefined8 * FUN_1000cd990(long param_1,undefined8 *param_2)

{
  if ((*(byte *)(*(long *)(param_1 + -8) + 0x52) >> 1 & 1) != 0) {
    param_2 = (undefined8 *)*param_2;
  }
  return param_2;
}



/* Address: 0x1000cd9a8 | FUN_1000cd9a8 */

void FUN_1000cd9a8(undefined8 param_1)

{
  TypeDisplayRepresentation TVar1;
  TypeDisplayRepresentation TVar2;
  
  if (DAT_100fac380 != -1) {
    _swift_once(&DAT_100fac380,FUN_1000cd834);
  }
  TVar1 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  TVar2 = TVar1;
  FUN_1000cd990(TVar1.unknown,&DAT_101057078);
                    /* WARNING: Could not recover jumptable at 0x0001000cd9fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(TVar1.unknown + -8) + 0x10))(param_1,TVar2.unknown,TVar1.unknown);
  return;
}



/* Address: 0x1000cda18 | FUN_1000cda18 */

void FUN_1000cda18(void)

{
  long lVar1;
  undefined1 *puVar2;
  byte bVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  _DictionaryStorage *this;
  DisplayRepresentation DVar7;
  byte *pbVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  byte *pbVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  String stringLiteral;
  String stringLiteral_00;
  undefined *local_70;
  undefined *local_68;
  
  puVar5 = &DAT_100fac468;
  FUN_1000037f0(&DAT_100fac468,&DAT_100c2aa50);
  lVar10 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar13 = (byte *)((long)&local_70 - extraout_x8);
  puVar6 = &DAT_100fac470;
  FUN_1000037f0(&DAT_100fac470,&DAT_100c2aa58);
  lVar11 = *(long *)(lVar10 + 0x48);
  bVar3 = *(byte *)(lVar10 + 0x50);
  _swift_allocObject();
  puVar2 = puVar6 + ((ulong)bVar3 + 0x20 & ((ulong)bVar3 ^ 0xffffffffffffffff));
  *puVar2 = 0;
  stringLiteral.bridgeObject = &DAT_e400000000000000;
  stringLiteral.str = (char *)0x74786554;
  AppIntents::DisplayRepresentation::init(stringLiteral);
  puVar2[lVar11] = 1;
  stringLiteral_00.bridgeObject = &DAT_e400000000000000;
  stringLiteral_00.str = (char *)0x6b6e694c;
  AppIntents::DisplayRepresentation::init(stringLiteral_00);
  this = (_DictionaryStorage *)&DAT_100fac478;
  FUN_1000037f0(&DAT_100fac478,&DAT_100c2aa60);
  lVar10 = 2;
  Swift::_DictionaryStorage::_allocate(this,2);
  iVar4 = *(int *)(puVar5 + 0x30);
  pbVar8 = pbVar13;
  FUN_1000ce1b4(puVar2);
  bVar3 = *pbVar13;
  uVar14 = (ulong)bVar3;
  _swift_retain(lVar10);
  FUN_1000713d4();
  if (((ulong)pbVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cdc6c);
    (*pcVar15)();
  }
  lVar1 = lVar10 + 0x40;
  uVar9 = uVar14 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar14 & 0x3f);
  *(byte *)(*(long *)(lVar10 + 0x30) + uVar14) = bVar3;
  lVar16 = *(long *)(lVar10 + 0x38);
  local_70 = puVar5;
  local_68 = puVar6;
  DVar7 = AppIntents::DisplayRepresentation::typeMetadataAccessor();
  lVar12 = *(long *)(*(long *)(DVar7.unknown + -8) + 0x48);
  pcVar15 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x20);
  (*pcVar15)(lVar16 + lVar12 * uVar14,pbVar13 + iVar4,DVar7.unknown);
  if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cdc70);
    (*pcVar15)();
  }
  *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
  pbVar8 = pbVar13;
  FUN_1000ce1b4(puVar2 + lVar11);
  bVar3 = *pbVar13;
  uVar14 = (ulong)bVar3;
  FUN_1000713d4();
  if (((ulong)pbVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cdc74);
    (*pcVar15)();
  }
  uVar9 = uVar14 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar14 & 0x3f);
  *(byte *)(*(long *)(lVar10 + 0x30) + uVar14) = bVar3;
  (*pcVar15)(*(long *)(lVar10 + 0x38) + uVar14 * lVar12,pbVar13 + iVar4,DVar7.unknown);
  _swift_release(lVar10);
  puVar5 = local_68;
  _swift_setDeallocating(local_68);
  _swift_arrayDestroy(puVar2,2,local_70);
  _swift_deallocClassInstance(puVar5,0x20,7);
  if (!SCARRY8(*(long *)(lVar10 + 0x10),1)) {
    *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
    DAT_101057090 = lVar10;
    return;
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x1000cdc78);
  (*pcVar15)();
}



/* Address: 0x1000cdc78 | FUN_1000cdc78 */

undefined8 * FUN_1000cdc78(void)

{
  if (DAT_100fac388 != -1) {
    _swift_once(&DAT_100fac388,FUN_1000cda18);
  }
  return &DAT_101057090;
}



/* Address: 0x1000cdcb8 | FUN_1000cdcb8 */

void FUN_1000cdcb8(void)

{
  if (DAT_100fac388 != -1) {
    _swift_once(&DAT_100fac388,FUN_1000cda18);
  }
  _swift_bridgeObjectRetain(DAT_101057090);
  return;
}



/* Address: 0x1000cdcf8 | FUN_1000cdcf8 */

void FUN_1000cdcf8(void)

{
  FUN_1000037f0(&DAT_100fac3c0,&DAT_100c2b6a0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1000cdd24 | thunk_FUN_1000cdd28 */

void thunk_FUN_1000cdd28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a798,&DAT_100eb4c00);
  DAT_100fac3c8 = pTVar1;
  return;
}



/* Address: 0x1000cdd28 | FUN_1000cdd28 */

void FUN_1000cdd28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a798;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a798,&DAT_100eb4c00);
  DAT_100fac3c8 = pTVar1;
  return;
}



/* Address: 0x1000cdd68 | thunk_FUN_1000cdd6c */

void thunk_FUN_1000cdd6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a878;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a878,&DAT_100eb4c00);
  DAT_100fac3d0 = pTVar1;
  return;
}



/* Address: 0x1000cdd6c | FUN_1000cdd6c */

void FUN_1000cdd6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a878;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a878,&DAT_100eb4c00);
  DAT_100fac3d0 = pTVar1;
  return;
}



/* Address: 0x1000cddac | thunk_FUN_1000cddb0 */

void thunk_FUN_1000cddb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a8b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a8b0,&DAT_100eb4c00);
  DAT_100fac3d8 = pTVar1;
  return;
}



/* Address: 0x1000cddb0 | FUN_1000cddb0 */

void FUN_1000cddb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a8b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a8b0,&DAT_100eb4c00);
  DAT_100fac3d8 = pTVar1;
  return;
}



/* Address: 0x1000cddf0 | thunk_FUN_1000cddf4 */

void thunk_FUN_1000cddf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a800,&DAT_100eb4c00);
  DAT_100fac3e0 = pTVar1;
  return;
}



/* Address: 0x1000cddf4 | FUN_1000cddf4 */

void FUN_1000cddf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a800,&DAT_100eb4c00);
  DAT_100fac3e0 = pTVar1;
  return;
}



/* Address: 0x1000cde34 | FUN_1000cde34 */

undefined * FUN_1000cde34(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
  ;
}



/* Address: 0x1000cde40 | thunk_FUN_1000cde44 */

void thunk_FUN_1000cde44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a8e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a8e0,&DAT_100eb4c00);
  DAT_100fac3e8 = pTVar1;
  return;
}



/* Address: 0x1000cde44 | FUN_1000cde44 */

void FUN_1000cde44(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a8e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a8e0,&DAT_100eb4c00);
  DAT_100fac3e8 = pTVar1;
  return;
}



/* Address: 0x1000cde84 | thunk_FUN_1000cde88 */

void thunk_FUN_1000cde88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a908,&DAT_100eb4c00);
  DAT_100fac3f0 = pTVar1;
  return;
}



/* Address: 0x1000cde88 | FUN_1000cde88 */

void FUN_1000cde88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a908;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a908,&DAT_100eb4c00);
  DAT_100fac3f0 = pTVar1;
  return;
}



/* Address: 0x1000cdec8 | FUN_1000cdec8 */

void FUN_1000cdec8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a930,&DAT_100eb4c00);
  DAT_100fac3f8 = pTVar1;
  return;
}



/* Address: 0x1000cdf08 | thunk_FUN_1000cdf0c */

void thunk_FUN_1000cdf0c(void)

{
  FUN_1000cdf0c();
  return;
}



/* Address: 0x1000cdf0c | FUN_1000cdf0c */

void FUN_1000cdf0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a988;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a988,&DAT_100eb4c00);
  DAT_100fac400 = pTVar1;
  return;
}



/* Address: 0x1000cdf4c | /System/Library/Frameworks/AppIntents.framework/Versions/A/AppIntents::(extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier */

String (extension_AppIntents)::AppIntents::PersistentlyIdentifiable::get_persistentIdentifier(void)

{
  String SVar1;
  
  SVar1 = get_persistentIdentifier();
  return SVar1;
}



/* Address: 0x1000cdf50 | FUN_1000cdf50 */

void FUN_1000cdf50(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_1000cdf90();
  local_30 = param_2;
  uStack_28 = param_1;
  _swift_getOpaqueTypeConformance2
            (&local_30,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_static_(extension_in_AppIntents):AppIntents_AppEnum_defaultResolverSpecification_:_some>>_100ea8c78
             ,1);
  return;
}



/* Address: 0x1000cdf90 | FUN_1000cdf90 */

void FUN_1000cdf90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a838;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a838,&DAT_100eb4c00);
  DAT_100fac408 = pTVar1;
  return;
}



/* Address: 0x1000cdfd0 | thunk_FUN_1000cdec8 */

void thunk_FUN_1000cdec8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac3f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a930;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a930,&DAT_100eb4c00);
  DAT_100fac3f8 = pTVar1;
  return;
}



/* Address: 0x1000cdfd4 | FUN_1000cdfd4 */

void FUN_1000cdfd4(void)

{
  FUN_1000cdf90();
  (extension_AppIntents)::AppIntents::AppEnum::_get_defaultResolverSpecification();
  return;
}



/* Address: 0x1000ce00c | thunk_FUN_1000ce010 */

void thunk_FUN_1000ce010(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a9c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a9c8,&DAT_100eb4c00);
  DAT_100fac410 = pTVar1;
  return;
}



/* Address: 0x1000ce010 | FUN_1000ce010 */

void FUN_1000ce010(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac410 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a9c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a9c8,&DAT_100eb4c00);
  DAT_100fac410 = pTVar1;
  return;
}



/* Address: 0x1000ce050 | thunk_FUN_1000ce054 */

void thunk_FUN_1000ce054(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a9f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a9f8,&DAT_100eb4c00);
  DAT_100fac418 = pTVar1;
  return;
}



/* Address: 0x1000ce054 | FUN_1000ce054 */

void FUN_1000ce054(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac418 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a9f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a9f8,&DAT_100eb4c00);
  DAT_100fac418 = pTVar1;
  return;
}



/* Address: 0x1000ce094 | thunk_FUN_1000ce098 */

void thunk_FUN_1000ce098(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a7c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a7c0,&DAT_100eb4c00);
  DAT_100fac420 = pTVar1;
  return;
}



/* Address: 0x1000ce098 | FUN_1000ce098 */

void FUN_1000ce098(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac420 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2a7c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2a7c0,&DAT_100eb4c00);
  DAT_100fac420 = pTVar1;
  return;
}



/* Address: 0x1000ce0d8 | FUN_1000ce0d8 */

void FUN_1000ce0d8(void)

{
  FUN_1000cdf0c();
  (extension_AppIntents)::AppIntents::CaseDisplayRepresentable::get_localizedStringResource();
  return;
}



/* Address: 0x1000ce110 | thunk_FUN_1000ce114 */

void thunk_FUN_1000ce114(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fac428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac430;
  FUN_100005c24(&DAT_100fac430,&DAT_100c2a9f0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fac428 = puVar2;
  return;
}



/* Address: 0x1000ce114 | FUN_1000ce114 */

void FUN_1000ce114(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fac428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac430;
  FUN_100005c24(&DAT_100fac430,&DAT_100c2a9f0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fac428 = puVar2;
  return;
}



/* Address: 0x1000ce164 | FUN_1000ce164 */

void FUN_1000ce164(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac3c0;
  FUN_1000037f0(&DAT_100fac3c0,&DAT_100c2b6a0);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1000ce1a4 | FUN_1000ce1a4 */

undefined1  [16] FUN_1000ce1a4(void)

{
  return ZEXT816(0x100eb4c00);
}



/* Address: 0x1000ce1b4 | FUN_1000ce1b4 */

undefined8 FUN_1000ce1b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fac468;
  FUN_1000037f0(&DAT_100fac468,&DAT_100c2aa50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000ce204 | FUN_1000ce204 */

undefined8 * FUN_1000ce204(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(uint *)(*(long *)(param_1 + -8) + 0x50);
  puVar2 = param_2;
  if ((uVar1 >> 0x11 & 1) != 0) {
    puVar2 = *(undefined8 **)(*(long *)(param_1 + -8) + 0x40);
    _swift_slowAlloc(puVar2,uVar1 & 0xff);
    *param_2 = puVar2;
  }
  return puVar2;
}



/* Address: 0x1000ce244 | thunk_FUN_1000cde88 */

void thunk_FUN_1000cde88(void)

{
  thunk_FUN_1000cde88();
  return;
}



/* Address: 0x1000ce248 | thunk_FUN_1000cdec8 */

void thunk_FUN_1000cdec8(void)

{
  thunk_FUN_1000cdec8();
  return;
}



/* Address: 0x1000ce24c | FUN_1000ce24c */

void FUN_1000ce24c(void)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  TypeDisplayRepresentation TVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  String stringLiteral;
  
  puVar1 = &DAT_100fabcb0;
  FUN_1000037f0(&DAT_100fabcb0,&DAT_100c2b690);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar4 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  TVar3 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  FUN_1000ce204(TVar3.unknown,&DAT_101057098);
  FUN_1000cd990(TVar3.unknown,&DAT_101057098);
  stringLiteral.bridgeObject = &DAT_e400000000000000;
  stringLiteral.str = (char *)0x7473694c;
  Foundation::LocalizedStringResource::init(stringLiteral);
  (**(code **)(lVar4 + 0x38))(&stack0xffffffffffffffc0 + -extraout_x8,1,1,LVar2.unknown);
  AppIntents::TypeDisplayRepresentation::_init
            ((LocalizedStringResource)
             (&stack0xffffffffffffffc0 + -extraout_x8 +
             -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  return;
}



/* Address: 0x1000ce354 | FUN_1000ce354 */

void FUN_1000ce354(void)

{
  TypeDisplayRepresentation TVar1;
  
  if (DAT_100fac480 != -1) {
    _swift_once(&DAT_100fac480,FUN_1000ce24c);
  }
  TVar1 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  FUN_1000cd990(TVar1.unknown,&DAT_101057098);
  return;
}



/* Address: 0x1000ce39c | FUN_1000ce39c */

void FUN_1000ce39c(undefined8 param_1)

{
  TypeDisplayRepresentation TVar1;
  TypeDisplayRepresentation TVar2;
  
  if (DAT_100fac480 != -1) {
    _swift_once(&DAT_100fac480,FUN_1000ce24c);
  }
  TVar1 = AppIntents::TypeDisplayRepresentation::typeMetadataAccessor();
  TVar2 = TVar1;
  FUN_1000cd990(TVar1.unknown,&DAT_101057098);
                    /* WARNING: Could not recover jumptable at 0x0001000ce3f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(TVar1.unknown + -8) + 0x10))(param_1,TVar2.unknown,TVar1.unknown);
  return;
}



/* Address: 0x1000ce40c | FUN_1000ce40c */

undefined1  [16] FUN_1000ce40c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Address: 0x1000ce438 | FUN_1000ce438 */

void FUN_1000ce438(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x1000ce46c | FUN_1000ce46c */

code * FUN_1000ce46c(void)

{
  return FUN_100004520;
}



/* Address: 0x1000ce47c | FUN_1000ce47c */

undefined1  [16] FUN_1000ce47c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Address: 0x1000ce4a8 | FUN_1000ce4a8 */

void FUN_1000ce4a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1000ce4dc | FUN_1000ce4dc */

undefined1  [16] FUN_1000ce4dc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1000ce4ec | FUN_1000ce4ec */

undefined1  [16] FUN_1000ce4ec(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Address: 0x1000ce518 | FUN_1000ce518 */

void FUN_1000ce518(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Address: 0x1000ce54c | FUN_1000ce54c */

undefined1  [16] FUN_1000ce54c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1000ce55c | FUN_1000ce55c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1000ce55c(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x30);
}


