/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10030cdfc | FUN_10030cdfc */

void FUN_10030cdfc(void)

{
  long unaff_x20;
  
  FUN_10030bfc4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10030ce04 | FUN_10030ce04 */

void FUN_10030ce04(long param_1,long param_2)

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



/* Address: 0x10030ce18 | FUN_10030ce18 */

void FUN_10030ce18(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10030ce20 | FUN_10030ce20 */

void FUN_10030ce20(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fbea10 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fbea10 = puVar2;
  return;
}



/* Address: 0x10030ce64 | FUN_10030ce64 */

void FUN_10030ce64(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10030c008(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10030ce7c | FUN_10030ce7c */

void FUN_10030ce7c(undefined8 param_1)

{
  if (DAT_100fbebc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cabee8);
  return;
}



/* Address: 0x10030ceb4 | FUN_10030ceb4 */

void FUN_10030ceb4(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fbea38;
  FUN_1000037f0(&DAT_100fbea38,&DAT_100c40970);
  lVar2 = 0;
  FUN_10030ce7c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  _swift_allocObject(puVar1,(uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(lVar2 + -8) + 0x48) * 3,uVar3 | 7);
  *(undefined8 *)(puVar1 + 0x18) = 6;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  if (DAT_100fbead0 != -1) {
    _swift_once(&DAT_100fbead0,FUN_10030d330);
  }
  FUN_1000cd990(lVar2,&DAT_100fbead8);
  FUN_10030d000();
  if (DAT_100fbeaf0 != -1) {
    _swift_once(&DAT_100fbeaf0,FUN_10030d34c);
  }
  FUN_1000cd990(lVar2,&DAT_100fbeaf8);
  FUN_10030d000();
  if (DAT_100fbeb10 != -1) {
    _swift_once(&DAT_100fbeb10,FUN_10030d368);
  }
  FUN_1000cd990(lVar2,&DAT_100fbeb18);
  FUN_10030d000();
  DAT_100fbea30 = puVar1;
  return;
}



/* Address: 0x10030d000 | FUN_10030d000 */

undefined8 FUN_10030d000(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10030ce7c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10030d044 | FUN_10030d044 */

undefined8 FUN_10030d044(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10030ce7c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10030d088 | FUN_10030d088 */

undefined8 FUN_10030d088(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10030ce7c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10030d0c4 | FUN_10030d0c4 */

void FUN_10030d0c4(void)

{
  int iVar1;
  int iVar2;
  LocalizedStringResource LVar3;
  String *pSVar4;
  String *pSVar5;
  undefined *puVar6;
  char *pcVar7;
  URL UVar8;
  long extraout_x8;
  String SVar9;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pSVar4 = (String *)0x0;
  FUN_10030ce7c();
  FUN_1000ce204();
  pSVar5 = pSVar4;
  FUN_1000cd990(pSVar4,&DAT_100fbea48);
  puVar6 = &DAT_100fbeac0;
  FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
  iVar1 = *(int *)(puVar6 + 0x40);
  iVar2 = *(int *)(puVar6 + 0x50);
  FUN_1001d41d4(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  pcVar7 = SVar9.str;
  *pSVar5 = SVar9;
  pSVar5[1].str = (char *)0xd000000000000015;
  pSVar5[1].bridgeObject = (void *)0x8000000100da1c40;
  FUN_1001aac20();
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)&pSVar5->str + (long)iVar1,pcVar7,UVar8.unknown);
  FUN_1001d4354(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  *(String *)((long)&pSVar5->str + (long)iVar2) = SVar9;
  _swift_storeEnumTagMultiPayload(pSVar5,pSVar4,1);
  return;
}



/* Address: 0x10030d1ec | FUN_10030d1ec */

void FUN_10030d1ec(void)

{
  int iVar1;
  int iVar2;
  LocalizedStringResource LVar3;
  String *pSVar4;
  String *pSVar5;
  undefined *puVar6;
  char *pcVar7;
  URL UVar8;
  long extraout_x8;
  String SVar9;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pSVar4 = (String *)0x0;
  FUN_10030ce7c();
  FUN_1000ce204();
  pSVar5 = pSVar4;
  FUN_1000cd990(pSVar4,&DAT_100fbea68);
  puVar6 = &DAT_100fbeac0;
  FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
  iVar1 = *(int *)(puVar6 + 0x40);
  iVar2 = *(int *)(puVar6 + 0x50);
  FUN_1001d2e54(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  pcVar7 = SVar9.str;
  *pSVar5 = SVar9;
  pSVar5[1].str = (char *)0xd000000000000017;
  pSVar5[1].bridgeObject = (void *)0x8000000100da1c20;
  FUN_1001abc30();
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)&pSVar5->str + (long)iVar1,pcVar7,UVar8.unknown);
  FUN_1001d2fd4(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  *(String *)((long)&pSVar5->str + (long)iVar2) = SVar9;
  _swift_storeEnumTagMultiPayload(pSVar5,pSVar4,1);
  return;
}



/* Address: 0x10030d314 | FUN_10030d314 */

void FUN_10030d314(undefined8 param_1)

{
  FUN_10030d384(param_1,&DAT_100fbeaa8,FUN_1001d47d4,FUN_1001d4654);
  return;
}



/* Address: 0x10030d330 | FUN_10030d330 */

void FUN_10030d330(undefined8 param_1)

{
  FUN_10030d384(param_1,&DAT_100fbead8,FUN_1001d38d4,FUN_1001d3754);
  return;
}



/* Address: 0x10030d34c | FUN_10030d34c */

void FUN_10030d34c(undefined8 param_1)

{
  FUN_10030d384(param_1,&DAT_100fbeaf8,FUN_1001d4054,FUN_1001d3ed4);
  return;
}



/* Address: 0x10030d368 | FUN_10030d368 */

void FUN_10030d368(undefined8 param_1)

{
  FUN_10030d384(param_1,&DAT_100fbeb18,FUN_1001d3454,FUN_1001d32d4);
  return;
}



/* Address: 0x10030d384 | FUN_10030d384 */

void FUN_10030d384(undefined8 param_1,undefined8 param_2,code *param_3,code *param_4)

{
  LocalizedStringResource LVar1;
  String *pSVar2;
  String *pSVar3;
  long extraout_x8;
  String SVar4;
  String SVar5;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pSVar2 = (String *)0x0;
  FUN_10030ce7c();
  FUN_1000ce204();
  pSVar3 = pSVar2;
  FUN_1000cd990(pSVar2,param_2);
  (*param_3)(LVar1.unknown);
  SVar4 = (extension_Foundation)::Swift::String::init(LVar1);
  (*param_4)(LVar1.unknown);
  SVar5 = (extension_Foundation)::Swift::String::init(LVar1);
  *pSVar3 = SVar4;
  pSVar3[1] = SVar5;
  _swift_storeEnumTagMultiPayload(pSVar3,pSVar2,0);
  return;
}



/* Address: 0x10030d454 | FUN_10030d454 */

void FUN_10030d454(void)

{
  int iVar1;
  int iVar2;
  LocalizedStringResource LVar3;
  String *pSVar4;
  String *pSVar5;
  undefined *puVar6;
  char *pcVar7;
  URL UVar8;
  long extraout_x8;
  String SVar9;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pSVar4 = (String *)0x0;
  FUN_10030ce7c();
  FUN_1000ce204();
  pSVar5 = pSVar4;
  FUN_1000cd990(pSVar4,&DAT_100fbea88);
  puVar6 = &DAT_100fbeac0;
  FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
  iVar1 = *(int *)(puVar6 + 0x40);
  iVar2 = *(int *)(puVar6 + 0x50);
  FUN_1001d2b54(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  pcVar7 = SVar9.str;
  *pSVar5 = SVar9;
  pSVar5[1].str = (char *)0xd00000000000001a;
  pSVar5[1].bridgeObject = (void *)0x8000000100da1c00;
  FUN_1001acf98();
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x10))
            ((long)&pSVar5->str + (long)iVar1,pcVar7,UVar8.unknown);
  FUN_1001d2cd4(LVar3.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
  *(String *)((long)&pSVar5->str + (long)iVar2) = SVar9;
  _swift_storeEnumTagMultiPayload(pSVar5,pSVar4,1);
  return;
}



/* Address: 0x10030d57c | FUN_10030d57c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030d57c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  UUID UVar2;
  UUID UVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSString *pNVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long extraout_x8;
  long lVar10;
  code *pcVar11;
  long unaff_x21;
  String SVar12;
  String SVar13;
  undefined8 local_b0;
  undefined8 uStack_a8;
  char *local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined *local_70;
  undefined8 uStack_68;
  
  pvVar9 = param_4;
  local_98 = param_3;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_5;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  local_70 = (undefined *)0x696472616f626e6f;
  uStack_68 = 0xeb000000002d676e;
  UVar3 = Foundation::UUID::init();
  SVar12 = Foundation::UUID::get_uuidString(UVar3);
  (**(code **)(lVar10 + 8))
            ((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  SVar13.bridgeObject = pvVar9;
  SVar13.str = param_3;
  Swift::String::append(SVar12,SVar13);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  uVar1 = uStack_68;
  puVar6 = local_70;
  puVar4 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  puVar5 = puVar4;
  _swift_allocObject();
  uStack_a8 = 3;
  local_b0 = 1;
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(void **)(puVar5 + 0x20) = param_4;
  lVar10 = *(long *)(param_7 + 0x10);
  (**(code **)(lVar10 + 8))(puVar6,uVar1,puVar5,param_6,lVar10);
  _swift_bridgeObjectRelease(uVar1);
  _swift_release(puVar5);
  if (unaff_x21 == 0) {
    objc_stub::setSourceApplication_((ID)puVar6,local_98);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setTitle_((ID)puVar6,pNVar7);
    _swift_allocObject(puVar4,0x28,7);
    *(undefined8 *)(puVar4 + 0x18) = uStack_a8;
    *(undefined8 *)(puVar4 + 0x10) = local_b0;
    *(undefined **)(puVar4 + 0x20) = puVar6;
    pcVar11 = *(code **)(lVar10 + 0x28);
    puVar6 = &DAT_100fbe920;
    local_70 = puVar4;
    FUN_1000037f0(&DAT_100fbe920,&DAT_100c408d0);
    puVar8 = &DAT_100fbe928;
    FUN_1001a7bdc(&DAT_100fbe928,&DAT_100fbe920,&DAT_100c408d0);
    (*pcVar11)(&local_70,local_80,puVar6,puVar8,param_6,lVar10);
    _swift_release(puVar4);
  }
  return;
}



/* Address: 0x10030d7c0 | FUN_10030d7c0 */

void FUN_10030d7c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_28;
  
  uVar1 = 0;
  FUN_10030e014(0);
  FUN_1000d80e0(&local_28,"PasteCore/DI+PasteCore.swift",0x1c,2,0x12,0x13,FUN_1002fd358,0,uVar1);
  *param_1 = local_28;
  param_1[1] = &PTR_PTR_100eca298;
  return;
}



/* Address: 0x10030d82c | FUN_10030d82c */

undefined * FUN_10030d82c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100fbea38;
  FUN_1000037f0(&DAT_100fbea38,&DAT_100c40970);
  lVar3 = 0;
  FUN_10030ce7c();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_allocObject(puVar2,(uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(lVar3 + -8) + 0x48) * 4,uVar4 | 7);
  *(undefined8 *)(puVar2 + 0x18) = 8;
  *(undefined8 *)(puVar2 + 0x10) = 4;
  if (DAT_100fbea40 != -1) {
    _swift_once(&DAT_100fbea40,FUN_10030d0c4);
  }
  FUN_1000cd990(lVar3,&DAT_100fbea48);
  FUN_10030d000();
  if (DAT_100fbea60 != -1) {
    _swift_once(&DAT_100fbea60,FUN_10030d1ec);
  }
  FUN_1000cd990(lVar3,&DAT_100fbea68);
  FUN_10030d000();
  if (DAT_100fbea80 != -1) {
    _swift_once(&DAT_100fbea80,FUN_10030d454);
  }
  FUN_1000cd990(lVar3,&DAT_100fbea88);
  FUN_10030d000();
  if (DAT_100fbeaa0 != -1) {
    _swift_once(&DAT_100fbeaa0,FUN_10030d314);
  }
  FUN_1000cd990(lVar3,&DAT_100fbeaa8);
  FUN_10030d000();
  FUN_100381b5c(puVar2);
  return puVar1;
}



/* Address: 0x10030d9dc | thunk_FUN_10030d7c0 */

void thunk_FUN_10030d7c0(void)

{
  FUN_10030d7c0();
  return;
}



/* Address: 0x10030d9e0 | FUN_10030d9e0 */

void FUN_10030d9e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fbeb48 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Swift__String_>Swift__CVarArg_100ea7870;
  _swift_getWitnessTable
            (PTR_Foundation__Swift__String_>Swift__CVarArg_100ea7870,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fbeb48 = puVar1;
  return;
}



/* Address: 0x10030da20 | FUN_10030da20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10030da20(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return param_1;
  }
  return 0;
}



/* Address: 0x10030da34 | FUN_10030da34 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10030da34(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRetain();
    return param_1;
  }
  return param_1;
}



/* Address: 0x10030da48 | FUN_10030da48 */

long * FUN_10030da48(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  long *plVar7;
  undefined *puVar8;
  URL UVar9;
  long lVar10;
  ulong uVar11;
  
  uVar4 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    plVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar10 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar10;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(lVar10);
    bVar6 = (int)plVar7 == 1;
    if (bVar6) {
      puVar8 = &DAT_100fbeac0;
      FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
      iVar5 = *(int *)(puVar8 + 0x40);
      UVar9 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar9.unknown + -8) + 0x10))
                ((long)param_1 + (long)iVar5,(long)param_2 + (long)iVar5,UVar9.unknown);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x50));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar8 + 0x50));
      uVar3 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar3;
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,bVar6);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar11 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar10 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10030db54 | FUN_10030db54 */

void FUN_10030db54(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  
  lVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  if ((int)lVar2 == 1) {
    puVar3 = &DAT_100fbeac0;
    FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
    iVar1 = *(int *)(puVar3 + 0x40);
    UVar4 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_1 + iVar1,UVar4.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(puVar3 + 0x50) + 8));
    return;
  }
  return;
}



/* Address: 0x10030dbec | FUN_10030dbec */

undefined8 * FUN_10030dbec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  URL UVar6;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  bVar3 = (int)puVar4 == 1;
  if (bVar3) {
    puVar5 = &DAT_100fbeac0;
    FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
    iVar2 = *(int *)(puVar5 + 0x40);
    UVar6 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar6.unknown);
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x50));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x50));
    uVar1 = param_2[1];
    *puVar4 = *param_2;
    puVar4[1] = uVar1;
    _swift_bridgeObjectRetain();
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,bVar3);
  return param_1;
}



/* Address: 0x10030dcc4 | FUN_10030dcc4 */

undefined8 * FUN_10030dcc4(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  URL UVar5;
  undefined8 uVar6;
  
  if (param_1 != param_2) {
    FUN_10030d088(param_1);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    param_1[2] = param_2[2];
    uVar6 = param_2[3];
    param_1[3] = uVar6;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar6);
    bVar2 = (int)puVar3 == 1;
    if (bVar2) {
      puVar4 = &DAT_100fbeac0;
      FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
      iVar1 = *(int *)(puVar4 + 0x40);
      UVar5 = Foundation::URL::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x10))
                ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar5.unknown);
      puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x50));
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar4 + 0x50));
      *puVar3 = *param_2;
      puVar3[1] = param_2[1];
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,bVar2);
  }
  return param_1;
}



/* Address: 0x10030ddc4 | FUN_10030ddc4 */

undefined8 * FUN_10030ddc4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  URL UVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar4 == 1) {
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    puVar2 = &DAT_100fbeac0;
    FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
    iVar1 = *(int *)(puVar2 + 0x40);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar3.unknown);
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x50));
    uVar5 = *param_2;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x50));
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return puVar4;
}



/* Address: 0x10030de94 | FUN_10030de94 */

undefined8 * FUN_10030de94(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  URL UVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    FUN_10030d088(param_1);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar4 != 1) {
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    uVar5 = *param_2;
    uVar7 = param_2[3];
    uVar6 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    puVar2 = &DAT_100fbeac0;
    FUN_1000037f0(&DAT_100fbeac0,&DAT_100c40978);
    iVar1 = *(int *)(puVar2 + 0x40);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar3.unknown);
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x50));
    uVar5 = *param_2;
    puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x50));
    puVar4[1] = param_2[1];
    *puVar4 = uVar5;
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x10030df74 | FUN_10030df74 */

undefined1  [16] FUN_10030df74(undefined8 param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined1 auStack_50 [32];
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = &DAT_100c409d0;
  local_70 = &DAT_100c409e8;
  puStack_68 = &DAT_100c40a00;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_60 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_58 = &DAT_100c409e8;
    _swift_getTupleTypeLayout(auStack_50,0,4,&local_70);
    local_28 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x10030e014 | FUN_10030e014 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10030e014(void)

{
  return ZEXT816(0x100fbec38);
}



/* Address: 0x10030e034 | FUN_10030e034 */

void FUN_10030e034(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x10030e064 | FUN_10030e064 */

void FUN_10030e064(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x10030e070 | FUN_10030e070 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10030e070(ulong param_1,ulong param_2)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  NSString *pNVar8;
  _ArrayBuffer self;
  NSArray *pNVar9;
  NSPredicate *pNVar10;
  undefined *puVar11;
  ID IVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  long unaff_x20;
  long unaff_x21;
  ulong uVar18;
  ulong uVar19;
  ulong local_c0;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar7 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar7,pNVar8);
  objc_stub::FUN_100c0d760((ID)self.unknown,2);
  objc_stub::FUN_100c0d780((ID)self.unknown,1);
  puVar7 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar7 + 0x20) = 0x656d616e;
  *(undefined1 **)(puVar7 + 0x28) = &DAT_e400000000000000;
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  objc_stub::FUN_100c0d3e0((ID)self.unknown,pNVar9);
  uVar19 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar19 = param_2 >> 0x38 & 0xf;
  }
  pNVar10 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  if (uVar19 != 0) {
    puVar7 = &DAT_100fbeb40;
    FUN_1000037f0("name MATCHES[cd] %@ AND items.@count > 0",&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    FUN_1002f5100();
    *(undefined **)(puVar7 + 0x38) = puVar11;
    uVar19 = param_1;
    FUN_10030d9e0();
    *(ulong *)(puVar7 + 0x40) = uVar19;
    *(ulong *)(puVar7 + 0x20) = param_1;
    *(ulong *)(puVar7 + 0x28) = param_2;
  }
  pNVar10 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar10);
  objc_stub::setPredicate_((ID)self.unknown,pNVar10);
  puVar7 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar11 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar12 = objc_stub::FUN_100c04440((ID)puVar11,pNVar8,1);
  *(ID *)(puVar7 + 0x20) = IVar12;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar9);
  puVar7 = *(undefined **)(unaff_x20 + 0x10);
  FUN_10000ec2c(0,&DAT_100fbeca8,&PTR__OBJC_CLASS___NSDictionary_100f8d8e0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    return puVar7;
  }
  if ((ulong)self.unknown >> 0x3e == 0) {
    uVar19 = *(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var2.unknown = self.unknown;
    }
    uVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar7;
  if (uVar19 != 0) {
    local_c0 = (ulong)self.unknown & 0xffffffffffffff8;
    uVar18 = 0;
    do {
      while( true ) {
        if (((ulong)self.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(local_c0 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10030e52c);
            (*pcVar6)();
          }
          uVar13 = *(ulong *)(self.unknown + uVar18 * 8 + 0x20);
        }
        else {
          uVar13 = uVar18;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar18,self);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10030e528);
          (*pcVar6)();
        }
        local_b0 = (undefined *)0x656d616e;
        puStack_a8 = &DAT_e400000000000000;
        ppuVar14 = &local_b0;
        Swift::__bridgeAnythingNonVerbatimToObjectiveC
                  (ppuVar14,PTR___type_metadata_for_Swift_String_100eac208);
        IVar12 = objc_stub::FUN_100bfd120(uVar13,ppuVar14);
        _swift_unknownObjectRelease(ppuVar14);
        if (IVar12 == 0) {
          puStack_a8 = (undefined1 *)0x0;
          local_b0 = (undefined *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar12);
        }
        puStack_88 = puStack_a8;
        local_90 = local_b0;
        local_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 != 0) break;
        FUN_10030e660(&local_90);
LAB_10030e3a4:
        uVar18 = uVar18 + 1;
        if (uVar1 == uVar19) goto LAB_10030e55c;
      }
      puVar15 = &local_70;
      _swift_dynamicCast(puVar15,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      lVar5 = local_68;
      uVar4 = local_70;
      if ((((ulong)puVar15 & 1) == 0) || (local_68 == 0)) goto LAB_10030e3a4;
      puVar11 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar7;
      if (((ulong)puVar11 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_10037f834(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar18 = *(ulong *)(puVar16 + 0x10);
      puVar7 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_10037f834(puVar7,uVar18 + 1,1,puVar16);
      }
      *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
      *(undefined8 *)(puVar7 + uVar18 * 0x10 + 0x20) = uVar4;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x28) = lVar5;
      uVar18 = uVar1;
    } while (uVar1 != uVar19);
  }
LAB_10030e55c:
  _swift_bridgeObjectRelease(self.unknown);
  uVar19 = 0;
  uVar18 = *(ulong *)(puVar7 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    puVar17 = (ulong *)(puVar7 + uVar19 * 0x10 + 0x28);
    do {
      if (uVar18 == uVar19) {
        _swift_bridgeObjectRelease(puVar7);
        return puVar11;
      }
      if (*(ulong *)(puVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10030e660);
        (*pcVar6)();
      }
      uVar1 = puVar17[-1];
      uVar3 = *puVar17;
      puVar17 = puVar17 + 2;
      uVar19 = uVar19 + 1;
      uVar13 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar13 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar13 == 0);
    _swift_bridgeObjectRetain(uVar3);
    puVar16 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    local_90 = puVar11;
    if (((ulong)puVar16 & 1) == 0) {
      FUN_1003075b8(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar13 = *(ulong *)(local_90 + 0x10);
    if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar13) {
      FUN_1003075b8(1 < *(ulong *)(local_90 + 0x18),uVar13 + 1,1);
    }
    *(ulong *)(local_90 + 0x10) = uVar13 + 1;
    *(ulong *)(local_90 + uVar13 * 0x10 + 0x20) = uVar1;
    *(ulong *)(local_90 + uVar13 * 0x10 + 0x28) = uVar3;
    puVar11 = local_90;
  } while( true );
}



/* Address: 0x10030e660 | FUN_10030e660 */

undefined8 FUN_10030e660(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbe6f0;
  FUN_1000037f0(&DAT_100fbe6f0,&DAT_100c42750);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10030e6a8 | FUN_10030e6a8 */

void FUN_10030e6a8(void)

{
  FUN_10030f3e0();
  return;
}



/* Address: 0x10030e6bc | FUN_10030e6bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10030e6bc(ulong param_1,ulong param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  NSString *pNVar9;
  _ArrayBuffer self;
  NSArray *pNVar10;
  NSPredicate *pNVar11;
  undefined *puVar12;
  ID IVar13;
  ulong uVar14;
  long lVar15;
  undefined *unaff_x20;
  long unaff_x21;
  long lVar16;
  ulong uVar17;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ulong local_58;
  
  puVar8 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar8,pNVar9);
  objc_stub::FUN_100c0d760((ID)self.unknown,2);
  puVar8 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar8 + 0x20) = 0x696669746e656469;
  *(undefined8 *)(puVar8 + 0x28) = 0xea00000000007265;
  *(undefined **)(puVar8 + 0x58) = puVar12;
  *(undefined **)(puVar8 + 0x38) = puVar12;
  *(undefined8 *)(puVar8 + 0x40) = 0x656d616e;
  *(undefined1 **)(puVar8 + 0x48) = &DAT_e400000000000000;
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  objc_stub::FUN_100c0d3e0((ID)self.unknown,pNVar10);
  uVar17 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar17 = param_2 >> 0x38 & 0xf;
  }
  pNVar11 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  if (uVar17 == 0) {
    puVar8 = &DAT_100fbeb40;
    FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    puVar12 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
    *(undefined **)(puVar8 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined **)(puVar8 + 0x40) = puVar12;
    *(undefined8 *)(puVar8 + 0x20) = 2;
  }
  else {
    puVar8 = &DAT_100fbeb40;
    FUN_1000037f0("rawType == %d AND name MATCHES[cd] %@",&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar8 + 0x18) = 4;
    *(undefined8 *)(puVar8 + 0x10) = 2;
    puVar2 = PTR___protocol_witness_table_for_Swift_Int___Swift_CVarArg_in_Swift_100eac760;
    *(undefined **)(puVar8 + 0x38) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined **)(puVar8 + 0x40) = puVar2;
    *(undefined8 *)(puVar8 + 0x20) = 2;
    FUN_1002f5100();
    *(undefined **)(puVar8 + 0x60) = puVar12;
    uVar17 = param_1;
    FUN_10030d9e0();
    *(ulong *)(puVar8 + 0x68) = uVar17;
    *(ulong *)(puVar8 + 0x48) = param_1;
    *(ulong *)(puVar8 + 0x50) = param_2;
  }
  pNVar11 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar11);
  objc_stub::setPredicate_((ID)self.unknown,pNVar11);
  puVar8 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 3;
  *(undefined8 *)(puVar8 + 0x10) = 1;
  puVar12 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar13 = objc_stub::FUN_100c04440((ID)puVar12,pNVar9,1);
  *(ID *)(puVar8 + 0x20) = IVar13;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar10 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar8);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar10);
  FUN_10000ec2c(0,&DAT_100fbeca8,&PTR__OBJC_CLASS___NSDictionary_100f8d8e0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 == 0) {
    if ((ulong)self.unknown >> 0x3e == 0) {
      lVar16 = *(long *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
      unaff_x20 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      _Var1.unknown = self.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < self.unknown) {
        _Var1.unknown = self.unknown;
      }
      lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      unaff_x20 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    PTR___swiftEmptyArrayStorage_100eae0d8 = unaff_x20;
    if (lVar16 != 0) {
      uVar17 = 0;
      do {
        if (((ulong)self.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10030eb50);
            (*pcVar7)();
          }
          uVar14 = *(ulong *)(self.unknown + uVar17 * 8 + 0x20);
        }
        else {
          uVar14 = uVar17;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar17,self);
        }
        if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10030eb4c);
          (*pcVar7)();
        }
        lVar15 = uVar17 + 1;
        local_58 = uVar14;
        FUN_10030eba8(&local_80,&local_58);
        uVar6 = uStack_68;
        uVar5 = local_70;
        lVar4 = local_78;
        uVar3 = local_80;
        if (local_78 != 0) {
          puVar8 = unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = unaff_x20;
          if (((ulong)puVar8 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_10037fcdc(0,*(long *)(unaff_x20 + 0x10) + 1,1,unaff_x20);
          }
          uVar14 = *(ulong *)(puVar12 + 0x10);
          unaff_x20 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar14) {
            unaff_x20 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_10037fcdc(unaff_x20,uVar14 + 1,1,puVar12);
          }
          *(ulong *)(unaff_x20 + 0x10) = uVar14 + 1;
          *(undefined8 *)(unaff_x20 + uVar14 * 0x20 + 0x20) = uVar3;
          *(long *)(unaff_x20 + uVar14 * 0x20 + 0x28) = lVar4;
          *(undefined8 *)(unaff_x20 + uVar14 * 0x20 + 0x30) = uVar5;
          *(undefined8 *)(unaff_x20 + uVar14 * 0x20 + 0x38) = uVar6;
        }
        uVar17 = uVar17 + 1;
      } while (lVar15 != lVar16);
    }
    _swift_bridgeObjectRelease(self.unknown);
  }
  return unaff_x20;
}



/* Address: 0x10030eba8 | FUN_10030eba8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10030eba8(undefined8 *param_1,ID *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  ID self;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 local_70;
  undefined1 *puStack_68;
  undefined8 uStack_60;
  long local_58;
  
  uVar6 = 0;
  uVar7 = 0;
  self = *param_2;
  local_90 = 0x696669746e656469;
  puStack_88 = (undefined1 *)0xea00000000007265;
  puVar4 = &local_90;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC
            (puVar4,PTR___type_metadata_for_Swift_String_100eac208);
  IVar5 = objc_stub::FUN_100bfd120(self,puVar4);
  _swift_unknownObjectRelease(puVar4);
  if (IVar5 == 0) {
    puStack_88 = (undefined1 *)0x0;
    local_90 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
  }
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  puStack_68 = puStack_88;
  local_70 = local_90;
  local_58 = lStack_78;
  uStack_60 = uStack_80;
  if (lStack_78 != 0) {
    _swift_dynamicCast(&local_a0,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar3 = uStack_98;
    uVar2 = local_a0;
    if ((uVar6 & 1) == 0) goto LAB_10030ed38;
    local_90 = 0x656d616e;
    puStack_88 = &DAT_e400000000000000;
    puVar4 = &local_90;
    Swift::__bridgeAnythingNonVerbatimToObjectiveC
              (puVar4,PTR___type_metadata_for_Swift_String_100eac208);
    IVar5 = objc_stub::FUN_100bfd120(self,puVar4);
    _swift_unknownObjectRelease(puVar4);
    if (IVar5 == 0) {
      puStack_88 = (undefined1 *)0x0;
      local_90 = 0;
      lStack_78 = 0;
      uStack_80 = 0;
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar5);
    }
    puStack_68 = puStack_88;
    local_70 = local_90;
    local_58 = lStack_78;
    uStack_60 = uStack_80;
    if (lStack_78 != 0) {
      _swift_dynamicCast(&local_a0,&local_70,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if ((uVar7 & 1) != 0) {
        *param_1 = uVar2;
        param_1[1] = uVar3;
        param_1[2] = local_a0;
        param_1[3] = uStack_98;
        return;
      }
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_10030ed38;
    }
    _swift_bridgeObjectRelease(uVar3);
  }
  FUN_10030e660(&local_70);
LAB_10030ed38:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x10030ed6c | FUN_10030ed6c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10030ed6c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  NSString *pNVar8;
  _ArrayBuffer self;
  NSArray *pNVar9;
  NSPredicate *pNVar10;
  undefined *puVar11;
  ID IVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined8 *puVar15;
  undefined *puVar16;
  ulong *puVar17;
  long unaff_x20;
  long unaff_x21;
  ulong uVar18;
  ulong uVar19;
  ulong local_c0;
  undefined *local_b0;
  undefined1 *puStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined *local_90;
  undefined1 *puStack_88;
  undefined8 uStack_80;
  long local_78;
  undefined8 local_70;
  long local_68;
  
  puVar7 = &_OBJC_CLASS___NSFetchRequest;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self.unknown = (undefined *)objc_stub::initWithEntityName_(puVar7,pNVar8);
  objc_stub::FUN_100c0d760((ID)self.unknown,2);
  objc_stub::FUN_100c0d780((ID)self.unknown,1);
  puVar7 = &DAT_100fbec98;
  FUN_1000037f0(&DAT_100fbec98,&DAT_100c40a70);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar7 + 0x20) = 0x656d616e;
  *(undefined1 **)(puVar7 + 0x28) = &DAT_e400000000000000;
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  objc_stub::FUN_100c0d3e0((ID)self.unknown,pNVar9);
  uVar19 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar19 = param_2 >> 0x38 & 0xf;
  }
  pNVar10 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  if (uVar19 != 0) {
    puVar7 = &DAT_100fbeb40;
    FUN_1000037f0("name MATCHES[cd] %@ AND items.@count > 0",&DAT_100fbeb40,&DAT_100c42e40);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    FUN_1002f5100();
    *(undefined **)(puVar7 + 0x38) = puVar11;
    uVar19 = param_1;
    FUN_10030d9e0();
    *(ulong *)(puVar7 + 0x40) = uVar19;
    *(ulong *)(puVar7 + 0x20) = param_1;
    *(ulong *)(puVar7 + 0x28) = param_2;
  }
  pNVar10 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar10);
  objc_stub::setPredicate_((ID)self.unknown,pNVar10);
  puVar7 = &DAT_100fbe4e8;
  FUN_1000037f0(&DAT_100fbe4e8,&DAT_100c40a80);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar11 = &_OBJC_CLASS___NSSortDescriptor;
  _objc_allocWithZone();
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar12 = objc_stub::FUN_100c04440((ID)puVar11,pNVar8,1);
  *(ID *)(puVar7 + 0x20) = IVar12;
  FUN_10000ec2c(0,&DAT_100fbeca0,&PTR__OBJC_CLASS___NSSortDescriptor_100f8db40);
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar7);
  objc_stub::FUN_100c0dbc0((ID)self.unknown,pNVar9);
  puVar7 = *(undefined **)(unaff_x20 + 0x10);
  FUN_10000ec2c(0,&DAT_100fbeca8,&PTR__OBJC_CLASS___NSDictionary_100f8d8e0);
  (extension_CoreData)::__C::NSManagedObjectContext::_fetch();
  if (unaff_x21 != 0) {
    return puVar7;
  }
  if ((ulong)self.unknown >> 0x3e == 0) {
    uVar19 = *(ulong *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var2.unknown = self.unknown;
    }
    uVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar7;
  if (uVar19 != 0) {
    local_c0 = (ulong)self.unknown & 0xffffffffffffff8;
    uVar18 = 0;
    do {
      while( true ) {
        if (((ulong)self.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(local_c0 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10030f230);
            (*pcVar6)();
          }
          uVar13 = *(ulong *)(self.unknown + uVar18 * 8 + 0x20);
        }
        else {
          uVar13 = uVar18;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar18,self);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10030f22c);
          (*pcVar6)();
        }
        local_b0 = (undefined *)0x656d616e;
        puStack_a8 = &DAT_e400000000000000;
        ppuVar14 = &local_b0;
        Swift::__bridgeAnythingNonVerbatimToObjectiveC
                  (ppuVar14,PTR___type_metadata_for_Swift_String_100eac208);
        IVar12 = objc_stub::FUN_100bfd120(uVar13,ppuVar14);
        _swift_unknownObjectRelease(ppuVar14);
        if (IVar12 == 0) {
          puStack_a8 = (undefined1 *)0x0;
          local_b0 = (undefined *)0x0;
          lStack_98 = 0;
          uStack_a0 = 0;
        }
        else {
          Swift::__bridgeAnyObjectToAny();
          _swift_unknownObjectRelease(IVar12);
        }
        puStack_88 = puStack_a8;
        local_90 = local_b0;
        local_78 = lStack_98;
        uStack_80 = uStack_a0;
        if (lStack_98 != 0) break;
        FUN_10030e660(&local_90);
LAB_10030f0a8:
        uVar18 = uVar18 + 1;
        if (uVar1 == uVar19) goto LAB_10030f260;
      }
      puVar15 = &local_70;
      _swift_dynamicCast(puVar15,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      lVar5 = local_68;
      uVar4 = local_70;
      if ((((ulong)puVar15 & 1) == 0) || (local_68 == 0)) goto LAB_10030f0a8;
      puVar11 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar16 = puVar7;
      if (((ulong)puVar11 & 1) == 0) {
        puVar16 = (undefined *)0x0;
        FUN_10037f834(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar18 = *(ulong *)(puVar16 + 0x10);
      puVar7 = puVar16;
      if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar16 + 0x18));
        FUN_10037f834(puVar7,uVar18 + 1,1,puVar16);
      }
      *(ulong *)(puVar7 + 0x10) = uVar18 + 1;
      *(undefined8 *)(puVar7 + uVar18 * 0x10 + 0x20) = uVar4;
      *(long *)(puVar7 + uVar18 * 0x10 + 0x28) = lVar5;
      uVar18 = uVar1;
    } while (uVar1 != uVar19);
  }
LAB_10030f260:
  _swift_bridgeObjectRelease(self.unknown);
  uVar19 = 0;
  uVar18 = *(ulong *)(puVar7 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    puVar17 = (ulong *)(puVar7 + uVar19 * 0x10 + 0x28);
    do {
      if (uVar18 == uVar19) {
        _swift_bridgeObjectRelease(puVar7);
        return puVar11;
      }
      if (*(ulong *)(puVar7 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10030f364);
        (*pcVar6)();
      }
      uVar1 = puVar17[-1];
      uVar3 = *puVar17;
      puVar17 = puVar17 + 2;
      uVar19 = uVar19 + 1;
      uVar13 = uVar1 & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar13 = uVar3 >> 0x38 & 0xf;
      }
    } while (uVar13 == 0);
    _swift_bridgeObjectRetain(uVar3);
    puVar16 = puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    local_90 = puVar11;
    if (((ulong)puVar16 & 1) == 0) {
      FUN_1003075b8(0,*(long *)(puVar11 + 0x10) + 1,1);
    }
    uVar13 = *(ulong *)(local_90 + 0x10);
    if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar13) {
      FUN_1003075b8(1 < *(ulong *)(local_90 + 0x18),uVar13 + 1,1);
    }
    *(ulong *)(local_90 + 0x10) = uVar13 + 1;
    *(ulong *)(local_90 + uVar13 * 0x10 + 0x20) = uVar1;
    *(ulong *)(local_90 + uVar13 * 0x10 + 0x28) = uVar3;
    puVar11 = local_90;
  } while( true );
}



/* Address: 0x10030f364 | FUN_10030f364 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10030f364(void)

{
  return;
}



/* Address: 0x10030f380 | FUN_10030f380 */

void FUN_10030f380(void)

{
  FUN_10030e070();
  return;
}



/* Address: 0x10030f3a0 | FUN_10030f3a0 */

void FUN_10030f3a0(void)

{
  FUN_10030ed6c();
  return;
}



/* Address: 0x10030f3c0 | FUN_10030f3c0 */

void FUN_10030f3c0(void)

{
  FUN_10030e6bc();
  return;
}



/* Address: 0x10030f3e0 | FUN_10030f3e0 */

undefined * FUN_10030f3e0(char *param_1,void *param_2)

{
  ulong uVar1;
  char *pcVar2;
  void *pvVar3;
  code *pcVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  String SVar11;
  String SVar12;
  
  puVar6 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  _swift_initStaticObject();
  uVar10 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar10 = (ulong)param_2 >> 0x38 & 0xf;
  }
  puVar9 = puVar6;
  if (uVar10 != 0) {
    SVar11.bridgeObject = param_2;
    SVar11.str = param_1;
    SVar11 = Swift::String::lowercased(SVar11);
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    uVar10 = 0;
    do {
      uVar1 = uVar10;
      if (uVar10 < 7) {
        uVar1 = 6;
      }
      puVar8 = (undefined8 *)(puVar6 + uVar10 * 0x10 + 0x28);
      uVar10 = uVar10 + 1;
      while( true ) {
        if (uVar10 - uVar1 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10030f5a8);
          (*pcVar4)();
        }
        pcVar2 = (char *)puVar8[-1];
        pvVar3 = (void *)*puVar8;
        SVar12.bridgeObject = pvVar3;
        SVar12.str = pcVar2;
        SVar12 = Swift::String::lowercased(SVar12);
        _swift_bridgeObjectRetain(pvVar3);
        bVar5 = Swift::String::hasPrefix(SVar11,SVar12);
        _swift_bridgeObjectRelease(SVar12.bridgeObject);
        if (bVar5) break;
        _swift_bridgeObjectRelease(pvVar3);
        uVar10 = uVar10 + 1;
        puVar8 = puVar8 + 2;
        if (uVar10 == 7) goto LAB_10030f570;
      }
      puVar7 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_1003075b8(0,*(long *)(puVar9 + 0x10) + 1,1);
      }
      uVar1 = *(ulong *)(puVar9 + 0x10);
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
        FUN_1003075b8(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
      *(char **)(puVar9 + uVar1 * 0x10 + 0x20) = pcVar2;
      *(void **)(puVar9 + uVar1 * 0x10 + 0x28) = pvVar3;
    } while (uVar10 != 6);
LAB_10030f570:
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  return puVar9;
}



/* Address: 0x10030f5a8 | FUN_10030f5a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10030f5a8(void)

{
  return ZEXT816(0x100fbecf0);
}



/* Address: 0x10030f5c8 | FUN_10030f5c8 */

void FUN_10030f5c8(ulong *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  
  if (param_2 == 0) {
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
    return;
  }
  uVar1 = (uint)(param_5 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar7 = param_5 >> 0x30 & 0xff;
    }
    else {
      iVar6 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar6,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f6e8);
        (*pcVar2)();
      }
      uVar7 = (ulong)(iVar6 - (int)param_4);
    }
  }
  else {
    if (uVar5 == 2) {
      uVar7 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f6e4);
        (*pcVar2)();
      }
      _swift_slowAlloc(uVar7,0xffffffffffffffff);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f64c);
        (*pcVar2)();
      }
      goto LAB_10030f678;
    }
    uVar7 = 0;
  }
  _swift_slowAlloc(uVar7,0xffffffffffffffff);
LAB_10030f678:
  uVar4 = uVar7;
  _compression_encode_buffer();
  if ((long)uVar4 < 1) {
    uVar3 = 0;
    uVar4 = 0xf000000000000000;
  }
  else {
    uVar3 = uVar7;
    FUN_10030fad8();
  }
  *param_1 = uVar3;
  param_1[1] = uVar4;
  _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Address: 0x10030f6e8 | FUN_10030f6e8 */

void FUN_10030f6e8(__DataStorage *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  long lVar4;
  __DataStorage *p_Var5;
  long lVar6;
  __DataStorage *p_Var7;
  uint uVar8;
  long lVar9;
  __DataStorage local_7e [4];
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)(param_3 >> 0x20);
  uVar8 = uVar1 >> 0x1e;
  lVar4 = param_2 >> 0x20;
  if (uVar1 >> 0x1e < 2) {
    if (uVar8 == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
        local_7e[0] = SUB81(param_2,0);
        local_7e[1] = SUB81((ulong)param_2 >> 8,0);
        local_7e[2] = SUB81((ulong)param_2 >> 0x10,0);
        local_7e[3] = SUB81((ulong)param_2 >> 0x18,0);
        local_7a = (undefined1)((ulong)param_2 >> 0x20);
        local_79 = (undefined1)((ulong)param_2 >> 0x28);
        local_78 = (undefined1)((ulong)param_2 >> 0x30);
        local_77 = (undefined1)((ulong)param_2 >> 0x38);
        local_76 = (undefined1)param_3;
        local_75 = (undefined1)(param_3 >> 8);
        local_74 = (undefined1)(param_3 >> 0x10);
        local_73 = (undefined1)(param_3 >> 0x18);
        local_72 = (undefined1)(param_3 >> 0x20);
        local_71 = (undefined1)(param_3 >> 0x28);
        p_Var5 = local_7e;
        p_Var7 = local_7e + (param_3 >> 0x30 & 0xff);
        goto LAB_10030f8c4;
      }
    }
    else if ((int)param_2 != lVar4) goto LAB_10030f7d0;
  }
  else if ((uVar8 == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
LAB_10030f7d0:
    if (param_3 >> 0x3e == 2) {
      lVar4 = *(long *)(param_2 + 0x10);
      lVar9 = *(long *)(param_2 + 0x18);
      p_Var5 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      p_Var3 = (__DataStorage *)0x0;
      if (p_Var5 != (__DataStorage *)0x0) {
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar4,(long)p_Var3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f918);
          (*pcVar2)();
        }
        p_Var5 = p_Var5 + (lVar4 - (long)p_Var3);
      }
      lVar6 = lVar9 - lVar4;
      if (SBORROW8(lVar9,lVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f914);
        (*pcVar2)();
      }
      lVar4 = Foundation::__DataStorage::get__length
                        ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
      if (lVar6 <= lVar4) {
        lVar4 = lVar6;
      }
      p_Var7 = (__DataStorage *)0x0;
      if (p_Var5 != (__DataStorage *)0x0) {
        p_Var7 = p_Var5 + lVar4;
      }
    }
    else {
      lVar9 = (long)(int)param_2;
      if (lVar4 < lVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f910);
        (*pcVar2)();
      }
      p_Var3 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (p_Var3 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        p_Var5 = (__DataStorage *)0x0;
        p_Var7 = (__DataStorage *)0x0;
      }
      else {
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
        if (SBORROW8(lVar9,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f91c);
          (*pcVar2)();
        }
        p_Var3 = p_Var3 + (lVar9 - (long)p_Var5);
        lVar6 = Foundation::__DataStorage::get__length
                          ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (lVar4 - lVar9 <= lVar6) {
          lVar6 = lVar4 - lVar9;
        }
        p_Var5 = (__DataStorage *)0x0;
        if (p_Var3 != (__DataStorage *)0x0) {
          p_Var5 = p_Var3;
        }
        p_Var7 = (__DataStorage *)0x0;
        if (p_Var3 != (__DataStorage *)0x0) {
          p_Var7 = p_Var3 + lVar6;
        }
      }
    }
LAB_10030f8c4:
    FUN_10030f920(&local_68,p_Var5,p_Var7,param_2,param_3,param_1);
    goto LAB_10030f8d8;
  }
  local_68 = 0;
  uStack_60 = 0xc000000000000000;
LAB_10030f8d8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_68,uStack_60);
  }
  return;
}



/* Address: 0x10030f920 | FUN_10030f920 */

void FUN_10030f920(long *param_1,long param_2,undefined8 param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  
  if (param_2 == 0) {
    param_1[1] = -0x4000000000000000;
    *param_1 = 0;
    return;
  }
  uVar10 = param_5 >> 0x30 & 0xff;
  uVar1 = (uint)(param_5 >> 0x20);
  uVar9 = uVar1 >> 0x1e;
  iVar8 = (int)param_4;
  iVar7 = (int)((ulong)param_4 >> 0x20);
  if (uVar1 >> 0x1e < 2) {
    uVar5 = uVar10;
    if (uVar9 != 0) {
      if (SBORROW4(iVar7,iVar8)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fad8);
        (*pcVar2)();
      }
      uVar5 = (long)(iVar7 - iVar8);
    }
  }
  else {
    if (uVar9 != 2) {
      uVar5 = 0;
      goto LAB_10030f9b8;
    }
    uVar5 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f998);
      (*pcVar2)();
    }
  }
  if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10030f9b4);
    (*pcVar2)();
  }
LAB_10030f9b8:
  lVar6 = uVar5 * 2;
  if (lVar6 < 0x10001) {
    lVar6 = 0x10000;
  }
  while( true ) {
    lVar3 = lVar6;
    _swift_slowAlloc(lVar6,0xffffffffffffffff);
    if (uVar9 < 2) {
      uVar5 = uVar10;
      if ((uVar9 != 0) && (uVar5 = (long)(iVar7 - iVar8), SBORROW4(iVar7,iVar8))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fad0);
        (*pcVar2)();
      }
    }
    else if (uVar9 == 2) {
      uVar5 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10030fad4);
        (*pcVar2)();
      }
    }
    else {
      uVar5 = 0;
    }
    lVar4 = lVar3;
    _compression_decode_buffer(lVar3,lVar6,param_2,uVar5,0,param_6);
    if (lVar4 == 0) break;
    if (lVar4 != lVar6) {
      lVar6 = lVar3;
      FUN_10030fad8();
      *param_1 = lVar6;
      param_1[1] = lVar4;
      goto LAB_10030fa98;
    }
    if (0xfffffff < lVar6) break;
    lVar6 = lVar6 << 1;
    _swift_slowDealloc(lVar3,0xffffffffffffffff,0xffffffffffffffff);
  }
  param_1[1] = -0x1000000000000000;
  *param_1 = 0;
LAB_10030fa98:
  _swift_slowDealloc(lVar3,0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Address: 0x10030fad8 | FUN_10030fad8 */

undefined1  [16] FUN_10030fad8(RangeReference *param_1,ulong param_2)

{
  __DataStorage *p_Var1;
  RangeReference *pRVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_2 != 0) {
    if (param_2 < 0xf) {
      pRVar2 = param_1 + param_2;
      FUN_10017499c(param_1,pRVar2);
      uVar3 = (ulong)pRVar2 & 0xffffffffffffff;
    }
    else {
      p_Var1 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var1,*(undefined4 *)(p_Var1 + 0x30),*(undefined2 *)(p_Var1 + 0x34));
      p_Var1 = Foundation::__DataStorage::_init(p_Var1,(__int64)param_1);
      if (param_2 < 0x7fffffff) {
        param_1 = (RangeReference *)(param_2 << 0x20);
        uVar3 = (ulong)p_Var1 | 0x4000000000000000;
      }
      else {
        param_1 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(param_1,0x20,7);
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(ulong *)(param_1 + 0x18) = param_2;
        uVar3 = (ulong)p_Var1 | 0x8000000000000000;
      }
    }
    auVar4._8_8_ = uVar3;
    auVar4._0_8_ = param_1;
    return auVar4;
  }
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Address: 0x10030fb80 | FUN_10030fb80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100310600) */

String FUN_10030fb80(char *param_1,long param_2)

{
  String *pSVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  char *pcVar4;
  code *pcVar5;
  char *pcVar6;
  bool bVar7;
  Dictionary<undefined,undefined> DVar8;
  char **ppcVar9;
  char *pcVar10;
  ID IVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  Dictionary<undefined,undefined> DVar15;
  void *pvVar16;
  _ArrayBuffer *p_Var17;
  _ArrayBuffer _Var18;
  undefined *puVar19;
  __int64 _Var20;
  void *pvVar21;
  long lVar22;
  ulong uVar23;
  long extraout_x8;
  ulong uVar24;
  long lVar25;
  long extraout_x12;
  undefined *puVar26;
  long lVar27;
  ulong uVar28;
  _ArrayBuffer _Var29;
  String SVar30;
  String SVar31;
  String SVar33;
  String separator;
  String SVar34;
  String separator_00;
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
  char acStack_140 [8];
  char *local_138;
  char *local_130;
  char *local_128;
  char *local_120;
  long local_118;
  char *local_110;
  char *local_108;
  void *pvStack_100;
  _ArrayBuffer local_f8;
  undefined *puStack_f0;
  String local_d0;
  undefined8 local_c0;
  char *pcStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined8 uStack_90;
  char *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  String SVar32;
  
  pcVar6 = acStack_140;
  local_128 = param_1;
  local_118 = param_2;
  objc_stub::userInfo((ID)param_1);
  pcVar14 = PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218;
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  uVar24 = 1L << ((ulong)(byte)DVar8.unknown[0x20] & 0x3f);
  uVar28 = 0xffffffffffffffff;
  if ((DVar8.unknown[0x20] & 0x3f) < 6) {
    uVar28 = ~(-1L << (uVar24 & 0x3f));
  }
  uVar28 = uVar28 & *(ulong *)(DVar8.unknown + 0x40);
  local_110 = *(char **)PTR__NSDetailedErrorsKey_100ea7b98;
  uVar24 = uVar24 + 0x3f >> 6;
  lVar22 = 0;
  local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
joined_r0x00010030fc54:
  if (uVar28 == 0) {
    uVar28 = uVar24;
    if ((long)uVar24 <= lVar22 + 1) {
      uVar28 = lVar22 + 1;
    }
    lVar25 = uVar28 - 1;
    lVar27 = lVar22;
    do {
      lVar22 = lVar27 + 1;
      if (SCARRY8(lVar27,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10031055c);
        (*pcVar5)();
      }
      if ((long)uVar24 <= lVar22) {
        uVar28 = 0;
        pcStack_b8 = (char *)0x0;
        local_c0 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        local_d0 = (String)ZEXT816(0);
        goto LAB_10030fcbc;
      }
      uVar28 = *(ulong *)((long)(DVar8.unknown + 0x40) + lVar22 * 8);
      lVar27 = lVar27 + 1;
    } while (uVar28 == 0);
  }
  uVar23 = (uVar28 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar28 & 0x5555555555555555) << 1;
  uVar23 = (uVar23 & 0xcccccccccccccccc) >> 2 | (uVar23 & 0x3333333333333333) << 2;
  uVar23 = (uVar23 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar23 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar23 = (uVar23 & 0xff00ff00ff00ff00) >> 8 | (uVar23 & 0xff00ff00ff00ff) << 8;
  uVar23 = (uVar23 & 0xffff0000ffff0000) >> 0x10 | (uVar23 & 0xffff0000ffff) << 0x10;
  uVar28 = uVar28 - 1 & uVar28;
  uVar23 = LZCOUNT(uVar23 >> 0x20 | uVar23 << 0x20) | lVar22 << 6;
  pSVar1 = (String *)(*(long *)(DVar8.unknown + 0x30) + uVar23 * 0x10);
  pvVar16 = pSVar1->bridgeObject;
  local_d0 = *pSVar1;
  FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + uVar23 * 0x20,&local_c0);
  _swift_bridgeObjectRetain(pvVar16);
  lVar25 = lVar22;
LAB_10030fcbc:
  SVar31 = local_d0;
  puVar26 = local_d0.bridgeObject;
  pcVar13 = local_d0.str;
  local_a0 = local_d0;
  local_88 = pcStack_b8;
  uStack_90 = local_c0;
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  if (local_d0.bridgeObject != (undefined *)0x0) {
    FUN_100011080(&uStack_90,&local_d0);
    SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    lVar22 = lVar25;
    if (SVar30 == SVar31) {
LAB_10030fc60:
      _swift_bridgeObjectRelease(puVar26);
      puVar26 = SVar30.bridgeObject;
LAB_10030fc68:
      _swift_bridgeObjectRelease(puVar26);
      FUN_100004594(&local_d0);
    }
    else {
      pcVar14 = SVar30.bridgeObject;
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)pcVar13,(_StringGuts)puVar26,
                         (_StringComparisonResult)(__int8)SVar30.str);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      if (bVar7) goto LAB_10030fc68;
      SVar30 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar30 == SVar31) goto LAB_10030fc60;
      pcVar14 = SVar30.bridgeObject;
      bVar7 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)pcVar13,(_StringGuts)puVar26,
                         (_StringComparisonResult)(__int8)SVar30.str);
      _swift_bridgeObjectRelease(SVar30.bridgeObject);
      if (bVar7) goto LAB_10030fc68;
      FUN_10000cbfc(&local_d0,&local_f8);
      puVar19 = PTR___type_metadata_for_Any_100eae0c0;
      ppcVar9 = &local_108;
      pcVar14 = PTR___type_metadata_for_Any_100eae0c0 + 8;
      pcVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      _swift_dynamicCast(ppcVar9,&local_f8,pcVar14,PTR___type_metadata_for_Swift_String_100eac208,0)
      ;
      if ((int)ppcVar9 == 0) {
        pcVar10 = (char *)0x0;
        FUN_10000ec2c(0,&DAT_100fbedf8,&PTR__OBJC_CLASS___NSException_100f8d8c0);
        ppcVar9 = &local_108;
        pcVar14 = puVar19 + 8;
        _swift_dynamicCast(ppcVar9,&local_f8,pcVar14,pcVar10,0);
        pcVar4 = pcStack_b8;
        pcVar12 = local_108;
        if ((int)ppcVar9 == 0) {
          FUN_100004640(&local_d0,pcStack_b8);
          local_138 = pcVar6;
          (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pcVar4 + -8) + 0x40));
          lVar27 = (long)pcVar6 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
          pcVar14 = pcVar4;
          (**(code **)(extraout_x12 + 0x10))(lVar27);
          SVar31 = Swift::String::_init(lVar27,pcVar4);
          pcVar6 = local_138;
        }
        else {
          IVar11 = objc_stub::reason((ID)local_108);
          if (IVar11 == 0) {
            local_138 = (char *)objc_stub::name((ID)pcVar12);
          }
          else {
            local_138 = pcVar12;
          }
          SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
      }
      else {
        SVar31.bridgeObject = pvStack_100;
        SVar31.str = local_108;
      }
      local_130 = SVar31.str;
      FUN_100004594(&local_f8);
      local_f8.unknown = pcVar13;
      puStack_f0 = puVar26;
      SVar30.bridgeObject = (void *)0xe100000000000000;
      SVar30.str = (char *)0x3d;
      SVar36.bridgeObject = pcVar10;
      SVar36.str = pcVar14;
      Swift::String::append(SVar30,SVar36);
      pcVar12 = (char *)0xc8;
      pcVar14 = local_130;
      pcVar13 = SVar31.bridgeObject;
      FUN_1002e3a8c();
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar32.bridgeObject = pcVar14;
      SVar32.str = pcVar12;
      pcVar14 = pcVar10;
      SVar31 = Swift::String::__fromSubstring(SVar32);
      SVar37.bridgeObject = pcVar14;
      SVar37.str = pcVar13;
      Swift::String::append(SVar31,SVar37);
      _swift_bridgeObjectRelease(pcVar10);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      puVar26 = puStack_f0;
      _Var18.unknown = local_f8.unknown;
      pcVar13 = local_120;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)pcVar13 & 1) == 0) {
        pcVar13 = (char *)0x0;
        FUN_10037f834(0,*(long *)(local_120 + 0x10) + 1,1);
        pcVar14 = local_120;
        local_120 = pcVar13;
      }
      uVar23 = *(ulong *)(local_120 + 0x10);
      if (*(ulong *)(local_120 + 0x18) >> 1 <= uVar23) {
        pcVar13 = (char *)(ulong)(1 < *(ulong *)(local_120 + 0x18));
        FUN_10037f834(pcVar13,uVar23 + 1,1);
        pcVar14 = local_120;
        local_120 = pcVar13;
      }
      *(ulong *)(local_120 + 0x10) = uVar23 + 1;
      *(undefined **)(local_120 + uVar23 * 0x10 + 0x20) = _Var18.unknown;
      *(undefined **)(local_120 + uVar23 * 0x10 + 0x28) = puVar26;
      FUN_100004594(&local_d0);
    }
    goto joined_r0x00010030fc54;
  }
  _swift_release(DVar8.unknown);
  pcVar6 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  pcVar12 = (char *)0x7;
  _swift_allocObject();
  pcVar13 = local_128;
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
  objc_stub::domain((ID)local_128);
  local_a0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar33.bridgeObject = (void *)0xe100000000000000;
  SVar33.str = (char *)0x23;
  SVar38.bridgeObject = pcVar14;
  SVar38.str = pcVar12;
  Swift::String::append(SVar33,SVar38);
  pcVar10 = (char *)objc_stub::code((ID)pcVar13);
  local_d0.str = pcVar10;
  SVar31 = Swift::CustomStringConvertible::get_description();
  SVar39.bridgeObject = pcVar14;
  SVar39.str = pcVar12;
  Swift::String::append(SVar31,SVar39);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  pcVar10 = local_120;
  *(char **)(pcVar6 + 0x20) = local_a0.str;
  *(void **)(pcVar6 + 0x28) = local_a0.bridgeObject;
  local_a0.str = local_120;
  _swift_bridgeObjectRetain(local_120);
  FUN_100310608(&local_a0);
  local_a0.str = pcVar6;
  FUN_10038195c();
  pcVar6 = local_a0.str;
  pcVar14 = &DAT_100fbedd8;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  pcVar12 = pcVar14;
  FUN_100310704();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar31 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar6);
  local_d0 = SVar31;
  if (3 < local_118) {
    _swift_bridgeObjectRelease(pcVar10);
    return SVar31;
  }
  objc_stub::userInfo((ID)pcVar13);
  puVar26 = PTR___type_metadata_for_Any_100eae0c0;
  DVar15 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar8.unknown = SVar31.bridgeObject;
  if (*(long *)(DVar15.unknown + 0x10) == 0) {
LAB_10031022c:
    local_a0 = (String)ZEXT816(0);
    local_88 = (char *)0x0;
    uStack_90 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar15.unknown);
    FUN_100071370(SVar31.str);
    if (((ulong)SVar31.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(DVar15.unknown);
      goto LAB_10031022c;
    }
    FUN_10000cbfc(*(long *)(DVar15.unknown + 0x38) + (long)SVar31.str * 0x20,&local_a0);
    _swift_bridgeObjectRelease(DVar8.unknown);
    DVar8 = DVar15;
  }
  _swift_bridgeObjectRelease(DVar8.unknown);
  _swift_bridgeObjectRelease(DVar15.unknown);
  if (local_88 == (char *)0x0) {
    FUN_10030e660(&local_a0);
  }
  else {
    pvVar16 = (void *)0x0;
    FUN_10000ec2c(0,&DAT_100fbedf0,&PTR__OBJC_CLASS___NSError_100f8d818);
    p_Var17 = &local_f8;
    pcVar6 = puVar26 + 8;
    _swift_dynamicCast(p_Var17,&local_a0,pcVar6,pvVar16,6);
    if (((ulong)p_Var17 & 1) != 0) {
      local_a0.bridgeObject = &DAT_e400000000000000;
      local_a0.str = (char *)0x202d3c20;
      pvVar21 = (void *)(local_118 + 1);
      _Var18.unknown = local_f8.unknown;
      FUN_10030fb80();
      SVar34.bridgeObject = pvVar21;
      SVar34.str = _Var18.unknown;
      SVar40.bridgeObject = pvVar16;
      SVar40.str = pcVar6;
      Swift::String::append(SVar34,SVar40);
      _swift_bridgeObjectRelease(pvVar21);
      pvVar21 = local_a0.bridgeObject;
      SVar41.bridgeObject = pvVar16;
      SVar41.str = pcVar6;
      Swift::String::append(local_a0,SVar41);
      _swift_bridgeObjectRelease(pvVar21);
    }
  }
  objc_stub::userInfo((ID)pcVar13);
  DVar15 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  SVar31 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  DVar8.unknown = SVar31.bridgeObject;
  if (*(long *)(DVar15.unknown + 0x10) == 0) {
LAB_100310378:
    local_a0 = (String)ZEXT816(0);
    local_88 = (char *)0x0;
    uStack_90 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar15.unknown);
    FUN_100071370(SVar31.str);
    if (((ulong)SVar31.bridgeObject & 1) == 0) {
      _swift_bridgeObjectRelease(DVar15.unknown);
      goto LAB_100310378;
    }
    FUN_10000cbfc(*(long *)(DVar15.unknown + 0x38) + (long)SVar31.str * 0x20,&local_a0);
    _swift_bridgeObjectRelease(DVar8.unknown);
    DVar8 = DVar15;
  }
  _swift_bridgeObjectRelease(DVar8.unknown);
  _swift_bridgeObjectRelease(DVar15.unknown);
  if (local_88 == (char *)0x0) {
    FUN_10030e660(&local_a0);
    goto LAB_1003105cc;
  }
  puVar19 = &DAT_100fbede8;
  FUN_1000037f0(&DAT_100fbede8,&DAT_100c40ad8);
  p_Var17 = &local_f8;
  _swift_dynamicCast(p_Var17,&local_a0,puVar26 + 8,puVar19,6);
  _Var18.unknown = local_f8.unknown;
  if (((ulong)p_Var17 & 1) == 0) goto LAB_1003105cc;
  if ((ulong)local_f8.unknown >> 0x3e == 0) {
    uVar28 = *(ulong *)(((ulong)local_f8.unknown & 0xffffffffffffff8) + 0x10);
    if (uVar28 == 0) {
LAB_1003105c0:
      _swift_bridgeObjectRelease(_Var18.unknown);
      goto LAB_1003105cc;
    }
    local_a0.bridgeObject = (void *)0xea00000000005b3d;
    local_a0.str = (char *)0x736c696174656420;
LAB_1003103fc:
    local_f8.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_128 = pcVar12;
    local_110 = pcVar14;
    FUN_1003075b8(0,uVar28 & ((long)uVar28 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar28 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100310600);
      (*pcVar5)();
    }
    uVar24 = 0;
    do {
      _Var29.unknown = local_f8.unknown;
      if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
        uVar23 = *(ulong *)(_Var18.unknown + uVar24 * 8 + 0x20);
      }
      else {
        uVar23 = uVar24;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar24,_Var18);
      }
      lVar22 = local_118 + 1;
      FUN_10030fb80();
      uVar3 = *(ulong *)(_Var29.unknown + 0x10);
      local_f8.unknown = _Var29.unknown;
      if (*(ulong *)(_Var29.unknown + 0x18) >> 1 <= uVar3) {
        FUN_1003075b8(1 < *(ulong *)(_Var29.unknown + 0x18),uVar3 + 1,1);
      }
      _Var29.unknown = local_f8.unknown;
      uVar24 = uVar24 + 1;
      *(ulong *)(local_f8.unknown + 0x10) = uVar3 + 1;
      *(ulong *)(local_f8.unknown + uVar3 * 0x10 + 0x20) = uVar23;
      *(long *)(local_f8.unknown + uVar3 * 0x10 + 0x28) = lVar22;
    } while (uVar28 != uVar24);
    _swift_bridgeObjectRelease(_Var18.unknown);
  }
  else {
    _Var2.unknown = local_f8.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < local_f8.unknown) {
      _Var2.unknown = local_f8.unknown;
    }
    _Var20 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    if (_Var20 == 0) goto LAB_1003105c0;
    local_a0.bridgeObject = (void *)0xea00000000005b3d;
    local_a0.str = (char *)0x736c696174656420;
    uVar28 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    if (uVar28 != 0) goto LAB_1003103fc;
    local_128 = pcVar12;
    local_110 = pcVar14;
    _swift_bridgeObjectRelease(_Var18.unknown);
    _Var29.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  separator_00.bridgeObject = &SUB_e200000000000000;
  separator_00.str = (char *)0x203b;
  pcVar14 = local_110;
  pcVar6 = local_128;
  local_f8.unknown = _Var29.unknown;
  SVar31 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
  _swift_bridgeObjectRelease(_Var29.unknown);
  SVar42.bridgeObject = pcVar6;
  SVar42.str = pcVar14;
  Swift::String::append(SVar31,SVar42);
  _swift_bridgeObjectRelease(SVar31.bridgeObject);
  SVar35.bridgeObject = (void *)0xe100000000000000;
  SVar35.str = (char *)0x5d;
  SVar43.bridgeObject = pcVar6;
  SVar43.str = pcVar14;
  Swift::String::append(SVar35,SVar43);
  pcVar10 = local_a0.bridgeObject;
  SVar44.bridgeObject = pcVar6;
  SVar44.str = pcVar14;
  Swift::String::append(local_a0,SVar44);
  _swift_bridgeObjectRelease(local_120);
LAB_1003105cc:
  _swift_bridgeObjectRelease(pcVar10);
  return local_d0;
}



/* Address: 0x100310608 | FUN_100310608 */

void FUN_100310608(ulong *param_1)

{
  __int64 _Var1;
  _ContiguousArrayBuffer<undefined> _Var2;
  ulong uVar3;
  ulong uVar4;
  ulong minimumCapacity;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar3 = *param_1;
  uVar4 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100392b88();
  }
  uVar4 = *(ulong *)(uVar3 + 0x10);
  local_50 = uVar3 + 0x20;
  uStack_48 = uVar4;
  _Var1 = Swift::_minimumMergeRunLength(uVar4);
  if (_Var1 < (long)uVar4) {
    minimumCapacity = uVar4 >> 1;
    _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar4) {
      _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized
                        (minimumCapacity,PTR___type_metadata_for_Swift_String_100eac208);
      *(ulong *)(_Var2.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var2.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100310754(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var2.unknown + 0x10) = 0;
    _swift_release(_Var2.unknown);
  }
  else if (uVar4 != 0) {
    FUN_1001129c0(0,uVar4,1,&local_50);
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x100310704 | FUN_100310704 */

void FUN_100310704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fbede0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbedd8;
  FUN_100005c24(&DAT_100fbedd8,&DAT_100c42ed0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fbede0 = puVar2;
  return;
}



/* Address: 0x100310754 | FUN_100310754 */

void FUN_100310754(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  long lVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  long *plVar20;
  long unaff_x21;
  long lVar21;
  ulong *puVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar25 = param_3[1];
  if (0 < lVar25) {
    lVar15 = 0;
    do {
      lVar24 = lVar15 + 1;
      if (lVar24 < lVar25) {
        lVar21 = *param_3;
        puVar1 = (undefined8 *)(lVar21 + lVar24 * 0x10);
        _Var12.unknown = (undefined *)*puVar1;
        _Var13.unknown = (undefined *)puVar1[1];
        puVar1 = (undefined8 *)(lVar21 + lVar15 * 0x10);
        if (_Var12.unknown == (undefined *)*puVar1 && _Var13.unknown == (undefined *)puVar1[1]) {
          bVar7 = false;
        }
        else {
          bVar7 = Swift::_stringCompareWithSmolCheck
                            (_Var12,_Var13,(_StringComparisonResult)(__int8)(undefined *)*puVar1);
        }
        lVar18 = lVar15 + 2;
        lVar24 = lVar18;
        if (lVar18 < lVar25) {
          plVar19 = puVar1 + 3;
          do {
            _Var12.unknown = (undefined *)plVar19[2];
            if ((undefined *)plVar19[1] == (undefined *)plVar19[-1] &&
                _Var12.unknown == (undefined *)*plVar19) {
              if (bVar7 != false) goto LAB_10031084c;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar19[1],_Var12,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar19[-1]);
              lVar24 = lVar18;
              if (bVar7 != bVar8) break;
            }
            lVar18 = lVar18 + 1;
            plVar19 = plVar19 + 2;
            lVar24 = lVar25;
          } while (lVar25 != lVar18);
        }
        lVar18 = lVar24;
        if (bVar7 != false) {
LAB_10031084c:
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b3c);
            (*pcVar6)();
          }
          lVar24 = lVar18;
          if (lVar15 < lVar18) {
            lVar14 = lVar18 << 4;
            lVar16 = lVar15 << 4;
            lVar25 = lVar15;
            do {
              lVar18 = lVar18 + -1;
              if (lVar25 != lVar18) {
                if (lVar21 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b5c);
                  (*pcVar6)();
                }
                puVar1 = (undefined8 *)(lVar21 + lVar16);
                lVar2 = lVar21 + lVar14;
                uVar4 = *puVar1;
                uVar5 = puVar1[1];
                uVar26 = *(undefined8 *)(lVar2 + -0x10);
                puVar1[1] = *(undefined8 *)(lVar2 + -8);
                *puVar1 = uVar26;
                *(undefined8 *)(lVar2 + -0x10) = uVar4;
                *(undefined8 *)(lVar2 + -8) = uVar5;
              }
              lVar25 = lVar25 + 1;
              lVar14 = lVar14 + -0x10;
              lVar16 = lVar16 + 0x10;
            } while (lVar25 < lVar18);
          }
        }
      }
      lVar25 = param_3[1];
      lVar21 = lVar24;
      if (lVar24 < lVar25) {
        if (SBORROW8(lVar24,lVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b38);
          (*pcVar6)();
        }
        if (lVar24 - lVar15 < param_4) {
          if (SCARRY8(lVar15,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b40);
            (*pcVar6)();
          }
          lVar18 = lVar15 + param_4;
          if (lVar25 <= lVar15 + param_4) {
            lVar18 = lVar25;
          }
          if (lVar18 < lVar15) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b44);
            (*pcVar6)();
          }
          if (lVar24 != lVar18) {
            lVar16 = *param_3;
            plVar19 = (long *)(lVar16 + lVar24 * 0x10);
            lVar25 = lVar15 - lVar24;
            do {
              puVar1 = (undefined8 *)(lVar16 + lVar24 * 0x10);
              _Var12.unknown = (undefined *)*puVar1;
              _Var13.unknown = (undefined *)puVar1[1];
              plVar20 = plVar19;
              lVar21 = lVar25;
              do {
                puVar11 = (undefined *)plVar20[-2];
                if ((_Var12.unknown == puVar11 && _Var13.unknown == (undefined *)plVar20[-1]) ||
                   (bVar7 = Swift::_stringCompareWithSmolCheck
                                      (_Var12,_Var13,(_StringComparisonResult)(__int8)puVar11),
                   !bVar7)) break;
                if (lVar16 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b48);
                  (*pcVar6)();
                }
                _Var12.unknown = (undefined *)*plVar20;
                _Var13.unknown = (undefined *)plVar20[1];
                plVar20[1] = plVar20[-1];
                *plVar20 = plVar20[-2];
                plVar20[-1] = (long)_Var13.unknown;
                plVar20 = plVar20 + -2;
                *plVar20 = (long)_Var12.unknown;
                bVar7 = lVar21 != -1;
                lVar21 = lVar21 + 1;
              } while (bVar7);
              lVar24 = lVar24 + 1;
              plVar19 = plVar19 + 2;
              lVar25 = lVar25 + -1;
              lVar21 = lVar18;
            } while (lVar24 != lVar18);
          }
        }
      }
      puVar11 = local_58;
      if (lVar21 < lVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b28);
        (*pcVar6)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100392630(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
      }
      uVar23 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar23) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_100392630(puVar11,uVar23 + 1,1,puVar10);
      }
      *(ulong *)(puVar11 + 0x10) = uVar23 + 1;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar11 + uVar23 * 0x10 + 0x28) = lVar21;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b60);
        (*pcVar6)();
      }
      FUN_100310b68(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_100310af8;
      lVar25 = param_3[1];
      lVar15 = lVar21;
    } while (lVar21 < lVar25);
  }
  puVar11 = local_58;
  lVar25 = *param_1;
  if (lVar25 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b68);
    (*pcVar6)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_100392b74();
  }
  puVar22 = (ulong *)(puVar11 + 0x10);
  uVar23 = *puVar22;
  while( true ) {
    if (uVar23 < 2) {
      _swift_bridgeObjectRelease(puVar11);
      return;
    }
    lVar15 = *param_3;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b64);
      (*pcVar6)();
    }
    plVar19 = (long *)(puVar11 + uVar23 * 0x10);
    lVar24 = *plVar19;
    puVar3 = puVar22 + uVar23 * 2;
    uVar17 = puVar3[1];
    FUN_100112cf4(lVar15 + lVar24 * 0x10,lVar15 + *puVar3 * 0x10,lVar15 + uVar17 * 0x10,lVar25);
    if (unaff_x21 != 0) break;
    if ((long)uVar17 < lVar24) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b2c);
      (*pcVar6)();
    }
    if (*puVar22 <= uVar23 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b30);
      (*pcVar6)();
    }
    *plVar19 = lVar24;
    plVar19[1] = uVar17;
    uVar17 = *puVar22;
    lVar15 = uVar17 - uVar23;
    if (uVar17 < uVar23) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100310b34);
      (*pcVar6)();
    }
    uVar23 = uVar17 - 1;
    _memmove(puVar3,puVar3 + 2,lVar15 * 0x10);
    *puVar22 = uVar23;
  }
LAB_100310af8:
  _swift_bridgeObjectRelease(puVar11);
  return;
}



/* Address: 0x100310b68 | FUN_100310b68 */

undefined8 FUN_100310b68(ulong *param_1,undefined8 param_2,long *param_3)

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
          goto LAB_100310c3c;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310db8);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100310ca0:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310da8);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310db0);
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
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d90);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d94);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d9c);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100310da4);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_100310c3c:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d98);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100310da0);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100310dac);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100310db4);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100310ca0;
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
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100310dbc);
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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d84);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100310dd0);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100112cf4(lVar9 + lVar12 * 0x10,lVar9 + *plVar1 * 0x10,lVar9 + lVar7 * 0x10,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d88);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100392b74();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100310d8c);
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



/* Address: 0x100310dd0 | FUN_100310dd0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100310dd0(void)

{
  Data DVar1;
  undefined *puVar2;
  NSData *pNVar3;
  ID IVar4;
  undefined8 extraout_x1;
  undefined8 uVar5;
  ID unaff_x20;
  
  DVar1.unknown = (undefined *)objc_stub::rawIcon(unaff_x20);
  if (DVar1.unknown != (undefined *)0x0) {
    uVar5 = extraout_x1;
    DVar1 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar1);
    puVar2 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(DVar1.unknown,uVar5);
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar1);
    IVar4 = objc_stub::initWithData_((ID)puVar2,pNVar3);
    FUN_10003bf2c(DVar1.unknown,uVar5);
    FUN_10003bf2c(DVar1.unknown,uVar5);
    if (IVar4 != 0) {
      return IVar4;
    }
  }
  puVar2 = &_OBJC_CLASS___NSImage;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar2);
  return IVar4;
}



/* Address: 0x100310ea4 | FUN_100310ea4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100310ea4(Data param_1,ID *param_2)

{
  ID self;
  NSData *pNVar1;
  
  self = *param_2;
  FUN_1003c89c8();
  if ((ulong)param_2 >> 0x3c < 0xf) {
    pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
    FUN_10003bf18(param_1.unknown,param_2);
  }
  else {
    pNVar1 = (NSData *)0x0;
  }
  objc_stub::setRawIcon_(self,pNVar1);
  return 0;
}



/* Address: 0x100310f10 | FUN_100310f10 */

void FUN_100310f10(void)

{
  code *pcVar1;
  ID IVar2;
  ID unaff_x20;
  
  FUN_10000ec2c(0,&DAT_100fbee00,&PTR__OBJC_CLASS___NSColor_100f8d680);
  IVar2 = objc_stub::rawColor(unaff_x20);
  if (-1 < (long)IVar2) {
    FUN_100308ea0();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100310f5c);
  (*pcVar1)();
}



/* Address: 0x100310f5c | FUN_100310f5c */

void FUN_100310f5c(ID *param_1,ID *param_2)

{
  code *pcVar1;
  ID IVar2;
  
  IVar2 = *param_2;
  FUN_10000ec2c(0,&DAT_100fbee00,&PTR__OBJC_CLASS___NSColor_100f8d680);
  IVar2 = objc_stub::rawColor(IVar2);
  if (-1 < (long)IVar2) {
    FUN_100308ea0();
    *param_1 = IVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100310fb8);
  (*pcVar1)();
}



/* Address: 0x100310fb8 | FUN_100310fb8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined **
FUN_100310fb8(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ID param_5,
             undefined8 param_6)

{
  code *pcVar1;
  undefined *puVar2;
  NSString *pNVar3;
  Data DVar4;
  undefined *puVar5;
  NSData *pNVar6;
  ID IVar7;
  undefined **ppuVar8;
  void *pvVar9;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong uVar10;
  ulong extraout_x1_01;
  ulong uVar11;
  ID unaff_x20;
  String SVar12;
  undefined *local_80 [3];
  undefined *local_68;
  
  puVar5 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da1d40;
  *(ID *)(puVar5 + 0x30) = param_1;
  *(undefined8 *)(puVar5 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  puVar2 = puVar5;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar5);
  FUN_100312044(puVar5 + 0x20);
  puVar5 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar8 = local_80;
  local_80[0] = puVar2;
  local_68 = puVar5;
  FUN_100328e00(ppuVar8,0,param_6);
  FUN_100004594(local_80);
  if (ppuVar8 == (undefined **)0x0) {
    _objc_allocWithZone();
    ppuVar8 = (undefined **)objc_stub::initWithContext_(unaff_x20,param_6);
    objc_stub::setSize_(param_5,0x4060000000000000,0x4060000000000000);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::FUN_100c0aca0((ID)ppuVar8,pNVar3);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setName_((ID)ppuVar8,pNVar3);
    DVar4.unknown = (undefined *)0x0;
    uVar11 = extraout_x1_01;
    FUN_1003c89c8();
    if (uVar11 >> 0x3c < 0xf) {
      pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar4);
      FUN_10003bf18(DVar4.unknown,uVar11);
    }
    else {
      pNVar6 = (NSData *)0x0;
    }
    objc_stub::setRawIcon_((ID)ppuVar8,pNVar6);
    FUN_100311f7c(param_1,param_2);
    if ((param_1 == 0) && (FUN_1003c8664(), param_1 = param_5, param_5 == 0)) {
      param_1 = objc_stub::FUN_100c03140((ID)&_OBJC_CLASS___NSColor);
    }
    FUN_100308c8c();
    if (-1 < (long)param_1) {
      objc_stub::setRawColor_((ID)ppuVar8,param_1);
      return ppuVar8;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10031147c);
    (*pcVar1)();
  }
  objc_stub::name((ID)ppuVar8);
  SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar9 = SVar12.bridgeObject;
  _swift_bridgeObjectRelease(pvVar9);
  uVar11 = (ulong)SVar12.str & 0xffffffffffff;
  if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
    uVar11 = (ulong)pvVar9 >> 0x38 & 0xf;
  }
  if (uVar11 == 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setName_((ID)ppuVar8,pNVar3);
  }
  objc_stub::setSize_(param_5,0x4060000000000000,0x4060000000000000);
  DVar4.unknown = (undefined *)objc_stub::rawIcon((ID)ppuVar8);
  if (DVar4.unknown == (undefined *)0x0) {
LAB_1003111ac:
    puVar5 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    DVar4.unknown = (undefined *)objc_stub::init(puVar5);
    uVar11 = extraout_x1_00;
  }
  else {
    uVar11 = extraout_x1;
    DVar4 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    puVar5 = &_OBJC_CLASS___NSImage;
    _objc_allocWithZone();
    FUN_1001037b4(DVar4.unknown,uVar11);
    pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar4);
    IVar7 = objc_stub::initWithData_((ID)puVar5,pNVar6);
    FUN_10003bf2c(DVar4.unknown,uVar11);
    FUN_10003bf2c();
    if (IVar7 == 0) goto LAB_1003111ac;
  }
  FUN_1003c89c8();
  puVar5 = (undefined *)0x0;
  uVar10 = uVar11;
  FUN_1003c89c8();
  if (uVar11 >> 0x3c < 0xf) {
    if (uVar10 >> 0x3c < 0xf) {
      FUN_10011da54(DVar4.unknown,uVar11);
      FUN_10011da54(puVar5,uVar10);
      puVar2 = DVar4.unknown;
      FUN_10031b830(DVar4.unknown,uVar11,puVar5,uVar10);
      FUN_10003bf18(puVar5,uVar10);
      FUN_10003bf18(DVar4.unknown,uVar11);
      FUN_10003bf18(puVar5,uVar10);
      FUN_10003bf18();
      if (((ulong)puVar2 & 1) != 0) {
        return ppuVar8;
      }
      goto LAB_1003112c0;
    }
  }
  else if (0xe < uVar10 >> 0x3c) {
    FUN_10003bf18(DVar4.unknown,uVar11);
    return ppuVar8;
  }
  FUN_10003bf18(DVar4.unknown,uVar11);
  FUN_10003bf18();
  DVar4.unknown = puVar5;
  uVar11 = uVar10;
LAB_1003112c0:
  FUN_1003c89c8();
  if (uVar11 >> 0x3c < 0xf) {
    pNVar6 = Foundation::Data::_bridgeToObjectiveC(DVar4);
    FUN_10003bf18(DVar4.unknown,uVar11);
  }
  else {
    pNVar6 = (NSData *)0x0;
  }
  objc_stub::setRawIcon_((ID)ppuVar8,pNVar6);
  FUN_100311f7c(param_1,param_2);
  if ((param_1 == 0) && (FUN_1003c8664(), param_1 = param_5, param_5 == 0)) {
    param_1 = objc_stub::FUN_100c03140((ID)&_OBJC_CLASS___NSColor);
  }
  FUN_100308c8c();
  if (-1 < (long)param_1) {
    objc_stub::setRawColor_((ID)ppuVar8,param_1);
    return ppuVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100311478);
  (*pcVar1)();
}



/* Address: 0x10031147c | FUN_10031147c */

undefined1  [16] FUN_10031147c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da1d40;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x100311498 | FUN_100311498 */

undefined * FUN_100311498(void)

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
  _swift_initStaticObject(puVar2,&DAT_100fbef18);
  FUN_10036c298();
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar1);
  return puVar4;
}



/* Address: 0x10031153c | FUN_10031153c */

undefined * FUN_10031153c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fc1bf0;
  FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
  puVar2 = puVar1;
  _swift_initStaticObject();
  puVar3 = puVar2;
  FUN_1002fc6c0();
  FUN_10000caac(puVar2 + 0x20);
  _swift_initStaticObject(puVar1,&DAT_100fbee88);
  FUN_10036c298();
  FUN_10000caac(puVar1 + 0x20);
  return puVar3;
}


