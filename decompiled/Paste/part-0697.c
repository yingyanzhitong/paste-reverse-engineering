/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100793864 | FUN_100793864 */

void FUN_100793864(void)

{
  FUN_100793798();
  return;
}



/* Address: 0x100793878 | FUN_100793878 */

void FUN_100793878(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long lVar1;
  
  lVar1 = *(long *)(param_3 + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x38);
  (*UNRECOVERED_JUMPTABLE)(param_1,1,1,param_3);
  (**(code **)(lVar1 + 0x20))(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001007938f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,0,1,param_3);
  return;
}



/* Address: 0x1007938f8 | FUN_1007938f8 */

void FUN_1007938f8(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar2;
  
  lVar4 = *(long *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar9 = *(long *)(lVar2 + -8);
  puVar6 = &stack0xffffffffffffffb0 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)puVar6 - (*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_2 + -8) + 0x20))(lVar5);
  (**(code **)(lVar9 + 0x20))(puVar6,lVar5,lVar2);
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x10) + -8) + 0x38))(lVar5,1,1);
  lVar8 = *(long *)(lVar4 + -8);
  pcVar7 = *(code **)(lVar8 + 0x30);
  puVar3 = puVar6;
  (*pcVar7)(puVar6,1,lVar4);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar8 + 0x20))(param_1,puVar6,lVar4);
    lVar8 = lVar5;
    (*pcVar7)(lVar5,1,lVar4);
    if ((int)lVar8 != 1) {
      (**(code **)(lVar9 + 8))(lVar5,lVar2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100793a28);
  (*pcVar7)();
}



/* Address: 0x100793a28 | FUN_100793a28 */

void FUN_100793a28(undefined8 param_1,long param_2)

{
  (**(code **)(*(long *)(param_2 + -8) + 0x20))(param_1);
                    /* WARNING: Could not recover jumptable at 0x000100793a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x38))();
  return;
}



/* Address: 0x100793a74 | FUN_100793a74 */

void FUN_100793a74(undefined8 param_1,undefined8 param_2,long param_3)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  int unaff_w20;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  long local_70;
  undefined8 local_68;
  
  lVar4 = *(long *)(param_3 + 0x10);
  local_68 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar9 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar3 = (long)&local_70 - uVar2;
  lVar6 = lVar3 - uVar2;
  lVar11 = *(long *)(lVar4 + -8);
  lVar7 = lVar6 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar5 = *(code **)(lVar11 + 0x20);
  (*pcVar5)(lVar7,param_2,lVar4);
  pcVar8 = *(code **)(lVar9 + 0x20);
  local_70 = lVar9;
  (*pcVar8)(lVar6);
  (**(code **)(*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + 0x10) + -8) + 0x38))();
  pcVar10 = *(code **)(lVar11 + 0x30);
  lVar9 = lVar6;
  (*pcVar10)(lVar6,1,lVar4);
  if ((int)lVar9 != 1) {
    (*pcVar5)(local_68,lVar6,lVar4);
    (*pcVar5)(lVar3,lVar7,lVar4);
    (**(code **)(lVar11 + 0x38))(lVar3,0,1,lVar4);
    (*pcVar10)();
    if (unaff_w20 != 1) {
      (**(code **)(local_70 + 8))();
    }
    (*pcVar8)();
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100793bf0);
  (*pcVar5)();
}



/* Address: 0x100793bf0 | FUN_100793bf0 */

undefined1  [16] FUN_100793bf0(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  if (uVar3 < 0x40) {
    local_28 = *(long *)(lVar2 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x18);
    lVar2 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar2;
  return auVar5;
}



/* Address: 0x100793c5c | FUN_100793c5c */

void FUN_100793c5c(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100793c60);
  (*pcVar1)();
}



/* Address: 0x100793c60 | FUN_100793c60 */

void FUN_100793c60(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100793c6c | FUN_100793c6c */

void FUN_100793c6c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100793ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x100793ca8 | FUN_100793ca8 */

void FUN_100793ca8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100793cb4 | FUN_100793cb4 */

void FUN_100793cb4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_2 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100793cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))();
  return;
}



/* Address: 0x100793cf0 | thunk_FUN_100793cf4 */

void thunk_FUN_100793cf4(void)

{
  FUN_100793cf4();
  return;
}



/* Address: 0x100793cf4 | FUN_100793cf4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100793e6c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_100793cf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  __int64 _Var6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 uVar15;
  long local_70 [2];
  
  lVar2 = 0xff;
  local_70[1] = param_4;
  FUN_100793ca8(0xff,param_3);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar2,lVar2,0,0);
  puVar12 = (undefined8 *)
            ((long)local_70 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_70[0] = *(long *)(param_3 + -8);
  uVar7 = *(long *)(local_70[0] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)puVar12 - uVar7;
  lVar9 = lVar14 - uVar7;
  lVar11 = lVar9 - uVar7;
  puVar13 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar3 + 0x30));
  pcVar8 = *(code **)(*(long *)(lVar2 + -8) + 0x10);
  (*pcVar8)(puVar12,param_1,lVar2);
  (*pcVar8)(puVar13,param_2,lVar2);
  puVar4 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar2);
  puVar5 = puVar13;
  if ((int)puVar4 == 1) {
    uVar15 = *puVar12;
    _swift_getEnumCaseMultiPayload(puVar13,lVar2);
    if ((int)puVar5 == 1) {
      uVar10 = *puVar13;
      bVar1 = (extension_Swift)::Swift::Array<undefined>::____infix
                        (uVar15,uVar10,param_3,local_70[1]);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(uVar10);
      return bVar1;
    }
  }
  else {
    _swift_getEnumCaseMultiPayload(puVar13,lVar2);
    lVar2 = local_70[0];
    if ((int)puVar5 != 1) {
      pcVar8 = *(code **)(local_70[0] + 0x20);
      (*pcVar8)(lVar9,puVar12,param_3);
      (*pcVar8)(lVar14,puVar13,param_3);
      bVar1 = Swift::Equatable::___infix(lVar9,lVar14,param_3,local_70[1]);
      pcVar8 = *(code **)(lVar2 + 8);
      (*pcVar8)(lVar14,param_3);
      (*pcVar8)(lVar9,param_3);
      return bVar1;
    }
    uVar15 = *puVar13;
    puVar13 = puVar12;
  }
  lVar2 = local_70[0];
  (**(code **)(local_70[0] + 0x20))(lVar11,puVar13,param_3);
  _Var6 = Swift::Array<undefined>::get_count(puVar5,param_3);
  if (_Var6 == 1) {
    Swift::Array<undefined>::get_subscript(lVar9,0,uVar15,param_3);
    _swift_bridgeObjectRelease(uVar15);
    bVar1 = Swift::Equatable::___infix(lVar11,lVar9,param_3,local_70[1]);
    pcVar8 = *(code **)(lVar2 + 8);
    (*pcVar8)(lVar9,param_3);
    (*pcVar8)(lVar11,param_3);
  }
  else {
    (**(code **)(lVar2 + 8))(lVar11,param_3);
    _swift_bridgeObjectRelease(uVar15);
    bVar1 = false;
  }
  return bVar1;
}



/* Address: 0x100793f6c | FUN_100793f6c */

void FUN_100793f6c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  thunk_FUN_100793cf4(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8))
  ;
  return;
}



/* Address: 0x100793f78 | FUN_100793f78 */

void FUN_100793f78(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_2 + 0x10));
  FUN_100795564(param_1,uVar1,param_3);
  return;
}



/* Address: 0x100793fb8 | FUN_100793fb8 */

void FUN_100793fb8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  Hasher HVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_1 + 0x10));
  HVar2.unknown = auStack_78;
  FUN_100795564(HVar2.unknown,uVar1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100794018 | FUN_100794018 */

void FUN_100794018(undefined8 param_1,long param_2)

{
  FUN_100793fb8(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x100794020 | FUN_100794020 */

void FUN_100794020(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100793f78(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x100794028 | FUN_100794028 */

void FUN_100794028(void)

{
  FUN_10067788c();
  return;
}



/* Address: 0x100794034 | FUN_100794034 */

void FUN_100794034(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100794074(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100794074 | FUN_100794074 */

void FUN_100794074(undefined8 param_1,long param_2,long param_3,undefined8 param_4,void *param_5)

{
  long lVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  undefined8 *puVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long alStack_50 [2];
  StaticString local_40;
  undefined1 *local_38;
  
  lVar1 = -(*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var4.unknown = (undefined *)((long)alStack_50 + lVar1);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(_Var4.unknown);
  puVar3 = (undefined8 *)_Var4.unknown;
  _swift_getEnumCaseMultiPayload(_Var4.unknown,param_3);
  if ((int)puVar3 == 1) {
    uVar6 = *(undefined8 *)_Var4.unknown;
    Swift::Array<undefined>::get_subscript(param_1,param_2,uVar6,*(undefined8 *)(param_3 + 0x10));
    _swift_bridgeObjectRelease(uVar6);
  }
  else {
    pcVar5 = *(char **)(param_3 + 0x10);
    (**(code **)(*(long *)(pcVar5 + -8) + 0x20))(param_1);
    if (param_2 != 0) {
      local_40.unknown = (undefined *)0x0;
      local_38 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var4);
      _swift_bridgeObjectRelease(local_38);
      local_40.unknown = (undefined *)0x207865646e69;
      local_38 = &DAT_e600000000000000;
      alStack_50[1] = param_2;
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar9.bridgeObject = param_5;
      SVar9.str = pcVar5;
      Swift::String::append(SVar7,SVar9);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      SVar7.bridgeObject = (void *)0xee0073646e756f62;
      SVar7.str = (char *)0x20666f2074756f20;
      SVar10.bridgeObject = param_5;
      SVar10.str = pcVar5;
      Swift::String::append(SVar7,SVar10);
      line = local_38;
      file.unknown = local_40.unknown;
      *(undefined4 *)((long)auStack_58 + lVar1) = 0;
      *(undefined8 *)((long)&uStack_60 + lVar1) = 0x9a;
      SVar8.bridgeObject = (void *)0x2;
      SVar8.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar8,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007941f4);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x1007941f4 | FUN_1007941f4 */

void FUN_1007941f4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100795dd4();
                    /* WARNING: Could not recover jumptable at 0x00010079422c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x100794230 | FUN_100794230 */

void FUN_100794230(undefined8 param_1,long param_2,char *param_3,void *param_4)

{
  byte bVar1;
  StaticString file;
  undefined1 *line;
  undefined8 *puVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined8 *unaff_x20;
  code *pcVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  _ArrayBuffer _Var10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long alStack_70 [2];
  StaticString local_60;
  undefined1 *local_58;
  
  lVar9 = *(long *)(param_3 + -8);
  lVar8 = -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)alStack_70 + lVar8);
  pcVar5 = param_3;
  (**(code **)(lVar9 + 0x10))(puVar7);
  puVar2 = puVar7;
  _Var4.unknown = param_3;
  _swift_getEnumCaseMultiPayload();
  if ((int)puVar2 == 1) {
    (**(code **)(lVar9 + 8))();
    *unaff_x20 = *puVar7;
    lVar8 = *(long *)(param_3 + 0x10);
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::_makeMutableAndUnique();
    _Var10.unknown = (undefined *)*unaff_x20;
    FUN_100662648(param_2,_Var10.unknown,lVar8);
    _Var3 = Swift::_ArrayBuffer::get__native(_Var10);
    lVar9 = *(long *)(lVar8 + -8);
    bVar1 = *(byte *)(lVar9 + 0x50);
    _swift_release();
    (**(code **)(lVar9 + 0x28))
              (_Var3.unknown +
               *(long *)(lVar9 + 0x48) * param_2 +
               ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff)),param_1,lVar8);
    _swift_storeEnumTagMultiPayload();
  }
  else {
    if (param_2 != 0) {
      local_60.unknown = (undefined *)0x0;
      local_58 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var4);
      _swift_bridgeObjectRelease(local_58);
      local_60.unknown = (undefined *)0x207865646e69;
      local_58 = &DAT_e600000000000000;
      alStack_70[1] = param_2;
      SVar11 = Swift::CustomStringConvertible::get_description();
      SVar13.bridgeObject = param_4;
      SVar13.str = pcVar5;
      Swift::String::append(SVar11,SVar13);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar11.bridgeObject = (void *)0xee0073646e756f62;
      SVar11.str = (char *)0x20666f2074756f20;
      SVar14.bridgeObject = param_4;
      SVar14.str = pcVar5;
      Swift::String::append(SVar11,SVar14);
      line = local_58;
      file.unknown = local_60.unknown;
      *(undefined4 *)((long)auStack_78 + lVar8) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar8) = 0xa5;
      SVar12.bridgeObject = (void *)0x2;
      SVar12.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar12,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100794454);
      (*pcVar6)();
    }
    pcVar6 = *(code **)(lVar9 + 8);
    (*pcVar6)();
    (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x20))();
    _swift_storeEnumTagMultiPayload();
    (*pcVar6)(puVar7,param_3);
  }
  return;
}



/* Address: 0x100794454 | FUN_100794454 */

undefined1  [16] FUN_100794454(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long lVar6;
  void *pvVar7;
  undefined1 auVar8 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xd750);
  }
  *param_1 = puVar2;
  puVar2[1] = param_3;
  puVar2[2] = unaff_x20;
  *puVar2 = param_2;
  lVar6 = *(long *)(param_3 + 0x10);
  puVar2[3] = lVar6;
  lVar5 = *(long *)(lVar6 + -8);
  puVar2[4] = lVar5;
  pvVar7 = *(void **)(lVar5 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar7);
    puVar2[5] = pvVar3;
    pvVar7 = _malloc((size_t)pvVar7);
  }
  else {
    pvVar3 = pvVar7;
    _swift_coroFrameAlloc(pvVar7,0xd750);
    puVar2[5] = pvVar3;
    _swift_coroFrameAlloc(pvVar7,0xd750);
  }
  puVar2[6] = pvVar7;
  uVar4 = 0;
  FUN_100793ca8(0,lVar6);
  FUN_100794074(pvVar7,param_2,uVar4);
  auVar8._8_8_ = pvVar7;
  auVar8._0_8_ = FUN_100794530;
  return auVar8;
}



/* Address: 0x100794530 | FUN_100794530 */

void FUN_100794530(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[5];
  pvVar4 = (void *)param_1[6];
  uVar2 = param_1[3];
  lVar5 = param_1[4];
  uVar3 = param_1[1];
  uVar7 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_100795dd4(pvVar4,uVar7,uVar3);
    pcVar6 = *(code **)(lVar5 + 8);
  }
  else {
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_100795dd4(pvVar1,uVar7,uVar3);
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)(pvVar1,uVar2);
  }
  (*pcVar6)(pvVar4,uVar2);
  _free(pvVar4);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007945e4 | FUN_1007945e4 */

void FUN_1007945e4(long param_1)

{
  FUN_100793ca8(0,*(undefined8 *)(param_1 + 0x10));
  FUN_100675708();
  return;
}



/* Address: 0x100794600 | FUN_100794600 */

void FUN_100794600(void)

{
  _swift_getWitnessTable(0x100c774e0);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100794650 | FUN_100794650 */

void FUN_100794650(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x100794664 | FUN_100794664 */

void FUN_100794664(__int64 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c774e0,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x1007946c8 | FUN_1007946c8 */

void FUN_1007946c8(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(0x100c774e0,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x10079472c | FUN_10079472c */

void FUN_10079472c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c774e0,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_distance();
  return;
}



/* Address: 0x100794780 | FUN_100794780 */

void FUN_100794780(undefined8 *param_1,undefined8 param_2)

{
  FUN_1007945e4();
  *param_1 = param_2;
  return;
}



/* Address: 0x1007947a4 | FUN_1007947a4 */

code * FUN_1007947a4(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x4df2);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_100794818();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return thunk_FUN_10026c674;
}



/* Address: 0x100794818 | FUN_100794818 */

undefined1  [16] FUN_100794818(long *param_1,undefined8 param_2,long param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar4 + -8);
  *param_1 = lVar4;
  param_1[1] = lVar3;
  pvVar1 = *(void **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x9bb3);
  }
  param_1[2] = (long)pvVar1;
  uVar2 = 0;
  FUN_100793ca8(0,lVar4);
  FUN_100794074(pvVar1,param_2,uVar2);
  auVar5._8_8_ = pvVar1;
  auVar5._0_8_ = thunk_FUN_1006333c4;
  return auVar5;
}



/* Address: 0x1007948a4 | FUN_1007948a4 */

void FUN_1007948a4(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c774e0,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x1007948f0 | FUN_1007948f0 */

void FUN_1007948f0(void)

{
  _swift_getWitnessTable(0x100c774e0);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x100794940 | FUN_100794940 */

void FUN_100794940(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x100794954 | FUN_100794954 */

void FUN_100794954(undefined8 param_1,undefined8 param_2)

{
  FUN_100795c38(param_1,param_2,0x100c77590);
  return;
}



/* Address: 0x100794960 | FUN_100794960 */

void FUN_100794960(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c77590,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100794994 | FUN_100794994 */

void FUN_100794994(undefined8 param_1,undefined8 param_2)

{
  FUN_100795ce0(param_1,param_2,0x100c77590);
  return;
}



/* Address: 0x1007949a0 | FUN_1007949a0 */

void FUN_1007949a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2);
  FUN_100794a3c(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,
                param_4,param_5);
  (**(code **)(lVar2 + 8))(param_2,param_4);
  return;
}



/* Address: 0x100794a3c | FUN_100794a3c */

void FUN_100794a3c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  Optional OVar1;
  int iVar2;
  undefined7 extraout_var;
  long lVar3;
  __int64 _Var4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  code *pcVar16;
  long lVar17;
  tuple2_conflict3 tVar18;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0;
  code *local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long lStack_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  code *local_80;
  undefined8 *local_78;
  long local_70;
  undefined8 local_68;
  
  local_90 = param_2;
  local_78 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_a0 = CONCAT71(extraout_var,OVar1.value);
  local_a8 = *(long *)(lStack_a0 + -8);
  uVar7 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = auStack_f0 + -uVar7;
  local_80 = (code *)(puVar15 + -uVar7);
  lVar14 = (long)local_80 - uVar7;
  local_70 = *(long *)(param_3 + -8);
  uVar7 = *(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = lVar14 - uVar7;
  local_d0 = lVar13 - uVar7;
  local_c0 = local_d0 - uVar7;
  local_98 = local_c0 - uVar7;
  lVar8 = *(long *)(param_4 + -8);
  lVar11 = local_98 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_b0 = *(long *)(lVar3 + -8);
  lVar17 = lVar11 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar8;
  (**(code **)(lVar8 + 0x10))(lVar11,local_90,param_4);
  Swift::Sequence::_makeIterator();
  _swift_getAssociatedConformanceWitness
            (param_5,param_4,lVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  Swift::IteratorProtocol::_next();
  lVar8 = local_70;
  pcVar9 = *(code **)(local_70 + 0x30);
  lVar11 = lVar14;
  (*pcVar9)(lVar14,1,param_3);
  if ((int)lVar11 == 1) {
    (**(code **)(local_a8 + 8))(lVar14,lStack_a0);
    tVar18 = Swift::Array<undefined>::_allocateUninitialized(0,param_3);
    (**(code **)(local_b8 + 8))(local_90,param_4);
    (**(code **)(local_b0 + 8))(lVar17,lVar3);
    *local_78 = tVar18._0_8_;
    uVar10 = 1;
    puVar12 = local_78;
  }
  else {
    local_c8 = *(code **)(lVar8 + 0x20);
    local_d8 = param_4;
    (*local_c8)(local_98,lVar14,param_3);
    pcVar16 = local_80;
    Swift::IteratorProtocol::_next();
    (*pcVar9)(pcVar16,1,param_3);
    if ((int)pcVar16 == 1) {
      (**(code **)(local_b8 + 8))(local_90,local_d8);
      (**(code **)(local_b0 + 8))(lVar17,lVar3);
      (**(code **)(local_a8 + 8))(local_80,lStack_a0);
      puVar12 = local_78;
      (*local_c8)(local_78,local_98,param_3);
      uVar10 = 0;
    }
    else {
      (*local_c8)(local_c0,local_80,param_3);
      tVar18 = Swift::Array<undefined>::_allocateUninitialized(0,param_3);
      local_68 = tVar18._0_8_;
      *local_78 = local_68;
      uVar10 = 0;
      Swift::Array<undefined>::typeMetadataAccessor();
      local_e8 = lVar3;
      uStack_e0 = param_5;
      _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar10)
      ;
      local_80 = pcVar9;
      _Var4 = (extension_Swift)::Swift::Collection::get_underestimatedCount();
      Swift::Array<undefined>::reserveCapacity(_Var4,uVar10);
      lVar11 = local_d0;
      pcVar16 = *(code **)(local_70 + 0x10);
      (*pcVar16)(local_d0,local_98,param_3);
      Swift::Array<undefined>::append(lVar11,uVar10);
      (*pcVar16)(lVar11,local_c0,param_3);
      Swift::Array<undefined>::append(lVar11,uVar10);
      lVar8 = local_e8;
      local_88 = lVar17;
      Swift::IteratorProtocol::_next();
      puVar5 = puVar15;
      (*local_80)(puVar15,1,param_3);
      pcVar9 = local_c8;
      iVar2 = (int)puVar5;
      while (iVar2 != 1) {
        (*pcVar9)(lVar13,puVar15,param_3);
        (*pcVar16)(lVar11,lVar13,param_3);
        Swift::Array<undefined>::append(lVar11,uVar10);
        (**(code **)(local_70 + 8))(lVar13,param_3);
        Swift::IteratorProtocol::_next();
        puVar5 = puVar15;
        (*local_80)(puVar15,1,param_3);
        iVar2 = (int)puVar5;
      }
      (**(code **)(local_b8 + 8))(local_90,local_d8);
      pcVar9 = *(code **)(local_70 + 8);
      (*pcVar9)(local_c0,param_3);
      (*pcVar9)(local_98,param_3);
      (**(code **)(local_b0 + 8))(local_88,lVar8);
      (**(code **)(local_a8 + 8))(puVar15,lStack_a0);
      uVar10 = 1;
      puVar12 = local_78;
    }
  }
  uVar6 = 0;
  FUN_100793ca8(0,param_3);
  _swift_storeEnumTagMultiPayload(puVar12,uVar6,uVar10);
  return;
}



/* Address: 0x100794ef0 | thunk_FUN_100794ef4 */

void thunk_FUN_100794ef4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,param_2);
  *param_1 = tVar2._0_8_;
  uVar1 = 0;
  FUN_100793ca8(0,param_2);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x100794ef4 | FUN_100794ef4 */

void FUN_100794ef4(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  tuple2_conflict3 tVar2;
  
  tVar2 = Swift::Array<undefined>::_allocateUninitialized(0,param_2);
  *param_1 = tVar2._0_8_;
  uVar1 = 0;
  FUN_100793ca8(0,param_2);
  _swift_storeEnumTagMultiPayload(param_1,uVar1,1);
  return;
}



/* Address: 0x100794f3c | FUN_100794f3c */

void FUN_100794f3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_2 + 0x10));
  FUN_1006768a8(param_1,uVar1);
  return;
}



/* Address: 0x100794f6c | FUN_100794f6c */

void FUN_100794f6c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_2 + 0x10));
  FUN_1006769d8(param_1,uVar1,param_3,param_4);
  return;
}



/* Address: 0x100794fb4 | FUN_100794fb4 */

void FUN_100794fb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100794ff4(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100794ff4 | FUN_100794ff4 */

void FUN_100794ff4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,void *param_5)

{
  long lVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  _StringGuts _Var5;
  char *pcVar6;
  undefined8 *unaff_x20;
  char *pcVar7;
  long lVar8;
  tuple2_conflict3 tVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long alStack_70 [2];
  StaticString local_60;
  undefined1 *local_58;
  
  lVar8 = *(long *)(param_3 + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var5.unknown = (undefined *)((long)alStack_70 + lVar1);
  (**(code **)(lVar8 + 0x10))(_Var5.unknown);
  puVar3 = (undefined8 *)_Var5.unknown;
  _swift_getEnumCaseMultiPayload(_Var5.unknown,param_3);
  if ((int)puVar3 == 1) {
    local_60.unknown = *(undefined **)_Var5.unknown;
    uVar4 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    Swift::Array<undefined>::remove(param_1,param_2,uVar4);
    FUN_100795d3c();
    _swift_bridgeObjectRelease(local_60.unknown);
  }
  else {
    pcVar7 = *(char **)(param_3 + 0x10);
    pcVar6 = pcVar7;
    (**(code **)(*(long *)(pcVar7 + -8) + 0x20))(param_1);
    if (param_2 != 0) {
      local_60.unknown = (undefined *)0x0;
      local_58 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var5);
      _swift_bridgeObjectRelease(local_58);
      local_60.unknown = (undefined *)0x207865646e69;
      local_58 = &DAT_e600000000000000;
      alStack_70[1] = param_2;
      SVar10 = Swift::CustomStringConvertible::get_description();
      SVar12.bridgeObject = param_5;
      SVar12.str = pcVar6;
      Swift::String::append(SVar10,SVar12);
      _swift_bridgeObjectRelease(SVar10.bridgeObject);
      SVar10.bridgeObject = (void *)0xee0073646e756f62;
      SVar10.str = (char *)0x20666f2074756f20;
      SVar13.bridgeObject = param_5;
      SVar13.str = pcVar6;
      Swift::String::append(SVar10,SVar13);
      line = local_58;
      file.unknown = local_60.unknown;
      *(undefined4 *)((long)auStack_78 + lVar1) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar1) = 0x113;
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,file,(__uint64)line,0xdb16d0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007951dc);
      (*pcVar2)();
    }
    (**(code **)(lVar8 + 8))();
    tVar9 = Swift::Array<undefined>::_allocateUninitialized(0,pcVar7);
    *unaff_x20 = tVar9._0_8_;
    _swift_storeEnumTagMultiPayload();
  }
  return;
}



/* Address: 0x1007951dc | FUN_1007951dc */

void FUN_1007951dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100795228(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100795228 | FUN_100795228 */

void FUN_100795228(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 *puVar5;
  long unaff_x21;
  long lVar6;
  ulong uVar7;
  long lVar8;
  tuple2_conflict3 tVar9;
  undefined8 uStack_70;
  undefined8 local_58;
  
  lVar4 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar4 + -8);
  uVar7 = (long)&uStack_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_3 + -8);
  puVar5 = (undefined8 *)(uVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar6 + 0x10))(puVar5);
  puVar1 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,param_3);
  if ((int)puVar1 == 1) {
    local_58 = *puVar5;
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar2);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar2
              );
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
    FUN_100795d3c(unaff_x20,&stack0xffffffffffffffa8,lVar4);
    _swift_bridgeObjectRelease(local_58);
  }
  else {
    (**(code **)(lVar8 + 0x20))(uVar7,puVar5,lVar4);
    uVar3 = uVar7;
    (*param_1)();
    if ((unaff_x21 == 0) && ((uVar3 & 1) != 0)) {
      (**(code **)(lVar6 + 8))(unaff_x20,param_3);
      tVar9 = Swift::Array<undefined>::_allocateUninitialized(0,lVar4);
      (**(code **)(lVar8 + 8))(uVar7,lVar4);
      *unaff_x20 = tVar9._0_8_;
      _swift_storeEnumTagMultiPayload(unaff_x20,param_3,1);
    }
    else {
      (**(code **)(lVar8 + 8))(uVar7,lVar4);
    }
  }
  return;
}



/* Address: 0x1007953ec | FUN_1007953ec */

void FUN_1007953ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100793ca8(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100795438(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100795438 | FUN_100795438 */

void FUN_100795438(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 auStack_60 [2];
  
  lVar4 = *(long *)(param_3 + -8);
  puVar3 = (undefined8 *)((long)auStack_60 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar4 + 0x10))(puVar3);
  puVar1 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,param_3);
  if ((int)puVar1 == 1) {
    auStack_60[1] = *puVar3;
    uVar2 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar2);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540,uVar2);
    (extension_Swift)::Swift::MutableCollection::_sort();
    FUN_100795d3c();
    _swift_bridgeObjectRelease(auStack_60[1]);
  }
  else {
    (**(code **)(lVar4 + 8))(puVar3,param_3);
  }
  return;
}



/* Address: 0x100795558 | FUN_100795558 */

void FUN_100795558(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  FUN_100793cf4(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x100795564 | FUN_100795564 */

void FUN_100795564(Hasher param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  Hasher HVar2;
  IndexingIterator IVar3;
  __uint64 _Var4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  
  lVar7 = *(long *)(param_2 + 0x10);
  lVar10 = *(long *)(lVar7 + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_80 - uVar6;
  lVar9 = lVar8 - uVar6;
  HVar2.unknown = (undefined *)&TargetResilientWitness_100c77804.Implementation;
  local_70 = param_3;
  _swift_getWitnessTable();
  IVar3 = Swift::IndexingIterator::typeMetadataAccessor();
  local_80 = *(long *)(IVar3.unknown + -8);
  lVar11 = lVar9 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var4 = (extension_Swift)::Swift::Collection::get_count();
  Swift::Hasher::_combine(_Var4,HVar2);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))(lVar11);
  iVar1 = *(int *)(IVar3.unknown + 0x24);
  local_78 = IVar3.unknown;
  *(undefined8 *)(lVar11 + iVar1) = 0;
  lVar12 = param_2;
  FUN_100675708();
  if (lVar12 != 0) {
    lVar12 = 0;
    do {
      FUN_100794074(lVar9,lVar12,param_2);
      local_68 = lVar12;
      _swift_getWitnessTable(0x100c77758,param_2);
      (extension_Swift)::Swift::RandomAccessCollection::_index();
      (**(code **)(lVar10 + 0x20))(lVar8,lVar9,lVar7);
      Swift::Hashable::hash(param_1);
      (**(code **)(lVar10 + 8))(lVar8,lVar7);
      lVar5 = param_2;
      FUN_100675708();
      lVar12 = *(long *)(lVar11 + iVar1);
    } while (lVar12 != lVar5);
  }
  (**(code **)(local_80 + 8))(lVar11,local_78);
  return;
}



/* Address: 0x100795718 | FUN_100795718 */

void FUN_100795718(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_100795564(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10079576c | FUN_10079576c */

void FUN_10079576c(undefined8 param_1,long param_2)

{
  FUN_100795718(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x100795774 | FUN_100795774 */

void FUN_100795774(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100795564(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x10079577c | FUN_10079577c */

void FUN_10079577c(void)

{
  FUN_10067788c();
  return;
}



/* Address: 0x100795788 | FUN_100795788 */

undefined1  [16] FUN_100795788(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  undefined8 unaff_x20;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x4682);
  }
  *param_1 = puVar2;
  puVar2[1] = param_3;
  puVar2[2] = unaff_x20;
  *puVar2 = param_2;
  lVar4 = *(long *)(param_3 + 0x10);
  puVar2[3] = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  puVar2[4] = lVar4;
  pvVar5 = *(void **)(lVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar5);
    puVar2[5] = pvVar3;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar3 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0x4682);
    puVar2[5] = pvVar3;
    _swift_coroFrameAlloc(pvVar5,0x4682);
  }
  puVar2[6] = pvVar5;
  FUN_100794074(pvVar5,param_2,param_3);
  auVar6._8_8_ = pvVar5;
  auVar6._0_8_ = FUN_100795858;
  return auVar6;
}



/* Address: 0x100795858 | FUN_100795858 */

void FUN_100795858(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  pvVar1 = (void *)param_1[5];
  pvVar4 = (void *)param_1[6];
  if ((param_2 & 1) == 0) {
    FUN_100794230(pvVar4,*param_1,param_1[1]);
  }
  else {
    uVar2 = param_1[3];
    lVar5 = param_1[4];
    uVar3 = param_1[1];
    uVar6 = *param_1;
    (**(code **)(lVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_100794230(pvVar1,uVar6,uVar3);
    (**(code **)(lVar5 + 8))(pvVar4,uVar2);
  }
  _free(pvVar4);
  _free(pvVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007958fc | FUN_1007958fc */

void FUN_1007958fc(void)

{
  _swift_getWitnessTable(0x100c77758);
  (extension_Swift)::Swift::RandomAccessCollection::_index();
  return;
}



/* Address: 0x10079594c | FUN_10079594c */

void FUN_10079594c(void)

{
  FUN_100677c54();
  return;
}



/* Address: 0x100795960 | FUN_100795960 */

void FUN_100795960(__int64 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(0x100c77758,param_3);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x1007959c4 | FUN_1007959c4 */

void FUN_1007959c4(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(0x100c77758,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}


