/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002e0d40 | FUN_1002e0d40 */

undefined * FUN_1002e0d40(long param_1,_DictionaryStorage *param_2,ulong param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *capacity;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    FUN_1000037f0();
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(param_2,(__int64)capacity);
    _swift_retain();
    puVar7 = (undefined8 *)(param_1 + 0x28);
    do {
      bVar1 = *(byte *)(puVar7 + -1);
      uVar6 = (ulong)bVar1;
      uVar5 = *puVar7;
      _swift_bridgeObjectRetain(uVar5);
      FUN_1002f9310();
      if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0e20);
        (*pcVar2)();
      }
      uVar4 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar4 + 0x40) = *(ulong *)(puVar3 + uVar4 + 0x40) | 1L << (uVar6 & 0x3f);
      *(byte *)(*(long *)(puVar3 + 0x30) + uVar6) = bVar1;
      *(undefined8 *)(*(long *)(puVar3 + 0x38) + uVar6 * 8) = uVar5;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002e0e24);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      puVar7 = puVar7 + 2;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1002e0e24 | FUN_1002e0e24 */

undefined * FUN_1002e0e24(long param_1)

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
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fbd180;
    FUN_1000037f0(&DAT_100fbd180,&DAT_100c3e4b8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_100011090(param_1,&local_90,&DAT_100fbd188,&DAT_100c3e4c0);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e0f4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002e0f50);
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



/* Address: 0x1002e0f50 | thunk_FUN_1002dfe34 */

void thunk_FUN_1002dfe34(void)

{
  FUN_1002dfe34();
  return;
}



/* Address: 0x1002e0f54 | thunk_FUN_1002dfe34 */

void thunk_FUN_1002dfe34(void)

{
  FUN_1002dfe34();
  return;
}



/* Address: 0x1002e0f58 | thunk_FUN_1002dfe34 */

void thunk_FUN_1002dfe34(void)

{
  FUN_1002dfe34();
  return;
}



/* Address: 0x1002e0f5c | FUN_1002e0f5c */

void FUN_1002e0f5c(void)

{
  FUN_1002dfc04();
  return;
}



/* Address: 0x1002e0f70 | thunk_FUN_1002dffdc */

void thunk_FUN_1002dffdc(void)

{
  thunk_FUN_1002dffdc();
  return;
}



/* Address: 0x1002e0f74 | thunk_FUN_1002dffdc */

void thunk_FUN_1002dffdc(void)

{
  thunk_FUN_1002dffdc();
  return;
}



/* Address: 0x1002e0f78 | thunk_FUN_1002dffdc */

void thunk_FUN_1002dffdc(void)

{
  thunk_FUN_1002dffdc();
  return;
}



/* Address: 0x1002e0f7c | FUN_1002e0f7c */

void FUN_1002e0f7c(undefined8 param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char cVar4;
  CharacterSet CVar5;
  CharacterSet in;
  CharacterSet CVar6;
  long *plVar7;
  void *pvVar8;
  long lVar9;
  long unaff_x20;
  undefined *puVar10;
  long unaff_x22;
  long lVar11;
  char *pcVar12;
  String SVar13;
  
  CVar5 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar9 = *(long *)(CVar5.unknown + -8);
  in.unknown = (undefined *)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x30) = in.unknown;
  if (*(long *)(param_3 + 0x10) != 0) {
    pcVar12 = (char *)(param_3 + 0x38);
    lVar11 = *(long *)(param_3 + 0x10) + 1;
    while (lVar11 = lVar11 + -1, lVar11 != 0) {
      uVar2 = *(undefined8 *)(pcVar12 + -0x18);
      puVar3 = *(undefined **)(pcVar12 + -0x10);
      puVar10 = *(undefined **)(pcVar12 + -8);
      cVar4 = *pcVar12;
      if (cVar4 == '\x01') {
        *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
        *(undefined **)(unaff_x22 + 0x18) = puVar3;
        CVar6.unknown = puVar3;
      }
      else {
        *(undefined **)(unaff_x22 + 0x20) = puVar3;
        *(undefined **)(unaff_x22 + 0x28) = puVar10;
        CVar6.unknown = puVar10;
      }
      pcVar12 = pcVar12 + 0x20;
      _swift_bridgeObjectRetain();
      Foundation::CharacterSet::get_whitespaces(CVar6);
      FUN_1002da77c();
      SVar13 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      pvVar8 = SVar13.bridgeObject;
      (**(code **)(lVar9 + 8))(in.unknown,CVar5.unknown);
      _swift_bridgeObjectRelease(pvVar8);
      FUN_100008320(uVar2,puVar3,puVar10,cVar4);
      uVar1 = (ulong)SVar13.str & 0xffffffffffff;
      if (((ulong)pvVar8 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar8 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        FUN_100004640(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x28));
        plVar7 = (long *)0x80;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x38) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_1002e1140;
        FUN_1002e36dc(param_1,param_2 & 0xcfffffffffffffff,param_3);
        return;
      }
    }
    in.unknown = *(undefined **)(unaff_x22 + 0x30);
  }
  _swift_task_dealloc(in.unknown);
                    /* WARNING: Could not recover jumptable at 0x0001002e10dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1002e1140 | FUN_1002e1140 */

void FUN_1002e1140(void)

{
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001002e1194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1002e1198 | FUN_1002e1198 */

void FUN_1002e1198(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1002e11bc | FUN_1002e11bc */

void FUN_1002e11bc(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002e11e8 | FUN_1002e11e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002e11e8(void)

{
  return ZEXT816(0x100fbd1e0);
}



/* Address: 0x1002e1208 | FUN_1002e1208 */

void FUN_1002e1208(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002e120c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e1210 | FUN_1002e1210 */

void FUN_1002e1210(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1002e1234 | FUN_1002e1234 */

void FUN_1002e1234(void)

{
  byte bVar1;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,4,0);
  DAT_101057930 = 5;
  if ((bVar1 & 1) != 0) {
    DAT_101057930 = 6;
  }
  return;
}



/* Address: 0x1002e1268 | FUN_1002e1268 */

undefined1  [16] FUN_1002e1268(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = 0xed00006e6f697372;
  bVar3 = *unaff_x20;
  uVar1 = 0xef706d617473656d;
  uVar4 = 0x6954747365646c6f;
  if (bVar3 != 3) {
    uVar1 = 0xec000000736d6574;
    uVar4 = 0x4964696c61766e69;
  }
  uVar2 = 0xec000000736d6574;
  uVar5 = 0x4964657865646e69;
  if (bVar3 != 2) {
    uVar2 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0x6556616d65686373;
  if (bVar3 != 0) {
    uVar6 = 0xea0000000000736d;
    uVar1 = 0x6574496c61746f74;
  }
  if (bVar3 < 2) {
    uVar2 = uVar6;
    uVar5 = uVar1;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = uVar5;
  return auVar7;
}



/* Address: 0x1002e1330 | FUN_1002e1330 */

void FUN_1002e1330(undefined1 *param_1,undefined1 param_2)

{
  FUN_1002e3b18();
  *param_1 = param_2;
  return;
}



/* Address: 0x1002e1354 | FUN_1002e1354 */

String FUN_1002e1354(void)

{
  String SVar1;
  
  FUN_1002e4488();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1002e137c | FUN_1002e137c */

String FUN_1002e137c(void)

{
  String SVar1;
  
  FUN_1002e4488();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1002e13a4 | FUN_1002e13a4 */

/* WARNING: Removing unreachable block (ram,0x0001002e14dc) */

void FUN_1002e13a4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [11];
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fbd4d8;
  FUN_1000037f0(&DAT_100fbd4d8,&DAT_100c3e6b0);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1002e4488();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[1],&local_52,puVar2);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],&local_53,puVar2);
    lVar3 = 0;
    FUN_1002e35d4();
    iVar1 = *(int *)(lVar3 + 0x1c);
    local_54 = 3;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    puVar5 = &DAT_100fbd4e0;
    FUN_1000e8c70(&DAT_100fbd4e0,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_54,puVar2,DVar4.unknown,puVar5);
    local_55 = 4;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar3 + 0x20)),&local_55,puVar2);
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1002e158c | FUN_1002e158c */

/* WARNING: Removing unreachable block (ram,0x0001002e17f0) */
/* WARNING: Removing unreachable block (ram,0x0001002e1714) */
/* WARNING: Removing unreachable block (ram,0x0001002e17f4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002e1708 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002e158c(__int64 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  Date DVar6;
  __int64 _Var7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  __int64 *p_Var9;
  long lVar10;
  long lVar11;
  __int64 local_90;
  long local_88 [3];
  undefined *local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_100fbcfb8;
  local_90 = param_1;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fbd4c0;
  local_88[0] = (long)&local_90 - extraout_x8;
  FUN_1000037f0(&DAT_100fbd4c0,&DAT_100c3e6a8);
  local_88[1] = *(long *)(puVar3 + -8);
  local_70 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_88[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  lVar4 = 0;
  FUN_1002e35d4();
  lVar5 = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  p_Var9 = (__int64 *)(lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar11 = (long)*(int *)(lVar5 + 0x1c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))((long)p_Var9 + lVar11,1,1,DVar6.unknown);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1002e4488();
  local_88[2] = lVar10;
  Swift::Decoder::_container();
  puVar3 = local_70;
  lVar10 = local_88[2];
  lVar5 = local_88[1];
  if (unaff_x21 == 0) {
    local_51 = 0;
    _Var7 = Swift::KeyedDecodingContainer::_decode(DVar6.unknown,local_70);
    *p_Var9 = _Var7;
    local_52 = 1;
    _Var7 = Swift::KeyedDecodingContainer::_decode(_Var7,puVar3);
    p_Var9[1] = _Var7;
    local_53 = 2;
    _Var7 = Swift::KeyedDecodingContainer::_decode(_Var7,puVar3);
    p_Var9[2] = _Var7;
    local_54 = 3;
    puVar8 = &DAT_100fbd4d0;
    FUN_1000e8c70(&DAT_100fbd4d0,PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    lVar2 = local_88[0];
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_88[0],DVar6.unknown,&local_54,puVar3,DVar6.unknown,puVar8);
    FUN_1001a7c4c(lVar2,(long)p_Var9 + lVar11,&DAT_100fbcfb8,&DAT_100c3e5d0);
    _Var7 = Swift::KeyedDecodingContainer::_decode(puVar8,puVar3);
    iVar1 = *(int *)(lVar4 + 0x20);
    (**(code **)(lVar5 + 8))(lVar10,puVar3);
    *(__int64 *)((long)p_Var9 + (long)iVar1) = _Var7;
    FUN_1002e44c8(p_Var9,local_90);
    FUN_100004594(param_2);
    FUN_1002e450c(p_Var9);
  }
  else {
    FUN_100004594(param_2);
    FUN_100005808((long)p_Var9 + lVar11,&DAT_100fbcfb8,&DAT_100c3e5d0);
  }
  return;
}



/* Address: 0x1002e1888 | FUN_1002e1888 */

void FUN_1002e1888(void)

{
  FUN_1002e158c();
  return;
}



/* Address: 0x1002e189c | FUN_1002e189c */

void FUN_1002e189c(void)

{
  FUN_1002e13a4();
  return;
}



/* Address: 0x1002e18b0 | FUN_1002e18b0 */

void FUN_1002e18b0(undefined8 param_1)

{
  FUN_1002e1948(param_1,0x7070416574736170,&DAT_e800000000000000,&DAT_101057938);
  return;
}



/* Address: 0x1002e18d0 | FUN_1002e18d0 */

void FUN_1002e18d0(undefined8 param_1)

{
  FUN_1002e1948(param_1,0x7079546574736170,0xe900000000000065,&DAT_101057940);
  return;
}



/* Address: 0x1002e18f4 | FUN_1002e18f4 */

void FUN_1002e18f4(undefined8 param_1)

{
  FUN_1002e1948(param_1,0x7665446574736170,0xeb00000000656369,&DAT_101057948);
  return;
}



/* Address: 0x1002e191c | FUN_1002e191c */

void FUN_1002e191c(undefined8 param_1)

{
  FUN_1002e1948(param_1,0x6e69506574736170,0xed00006472616f62,&DAT_101057950);
  return;
}



/* Address: 0x1002e1948 | FUN_1002e1948 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002e1948(void)

{
  code *pcVar1;
  undefined *self;
  NSString *pNVar2;
  ID IVar3;
  ID *in_x3;
  
  self = &_OBJC_CLASS___CSCustomAttributeKey;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = objc_stub::initWithKeyName_searchable_searchableByDefault_unique_multiValued_
                    ((ID)self,pNVar2,1,1,0,0);
  if (IVar3 != 0) {
    *in_x3 = IVar3;
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002e19c8);
  (*pcVar1)();
}



/* Address: 0x1002e19c8 | FUN_1002e19c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e19c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  TaskPriority TVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  NSString *pNVar5;
  ID IVar6;
  long extraout_x8;
  long unaff_x20;
  
  puVar4 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1002e2f60();
  _swift_allocObject();
  _swift_defaultActor_initialize();
  TVar1 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar1.unknown + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,TVar1.unknown);
  puVar2 = &DAT_100ec8900;
  _swift_allocObject(&DAT_100ec8900,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  uVar3 = 0;
  FUN_1002d62fc(0,0,&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100c3e6d0,puVar2);
  *(undefined8 *)(puVar4 + 0x70) = uVar3;
  *(undefined **)(unaff_x20 + 0x18) = puVar4;
  FUN_1000d4ca4(0);
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  _swift_allocObject();
  uVar3 = 0x6867696c746f7053;
  FUN_1000d4624(0x6867696c746f7053,0xee007865646e4974);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  puVar4 = &_OBJC_CLASS___CSSearchableIndex;
  _objc_allocWithZone();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar6 = objc_stub::initWithName_((ID)puVar4,pNVar5);
  *(ID *)(unaff_x20 + 0x10) = IVar6;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x1002e1b54 | FUN_1002e1b54 */

void FUN_1002e1b54(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_50 [24];
  undefined1 auStack_38 [40];
  
  FUN_100076688(param_1,auStack_38);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_50,0x21,0);
  FUN_1001a7c4c(auStack_38,unaff_x20 + 0x28,&DAT_100fbd248,&DAT_100c3e530);
  _swift_endAccess(auStack_50);
  return;
}



/* Address: 0x1002e1bac | FUN_1002e1bac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e1bac(undefined8 param_1,ContiguousArray param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  _CocoaArrayWrapper _Var3;
  undefined *puVar4;
  code *pcVar5;
  long lVar6;
  ulong self;
  ID IVar7;
  undefined *puVar8;
  long *plVar9;
  __int64 _Var10;
  ContiguousArray CVar11;
  _StringGuts _Var13;
  char *pcVar14;
  void *pvVar15;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ContiguousArray CVar19;
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
  undefined *puVar12;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined **)(unaff_x22 + 0x80) = param_2.unknown;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(param_3 + 0x10);
  if (lVar16 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001002e1dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  pcVar14 = param_3;
  pvVar15 = param_4;
  Swift::ContiguousArray::_reserveCapacity(lVar16,param_2);
  param_3 = param_3 + 0x20;
  lVar17 = lVar16;
  do {
    FUN_100076688(param_3,unaff_x22 + 0x10);
    lVar6 = unaff_x22 + 0x10;
    CVar11.unknown = (undefined *)(ulong)((uint)param_4 & 1);
    FUN_1002e3ce8(lVar6);
    CVar19.unknown = (undefined *)(unaff_x22 + 0x10);
    FUN_100004594();
    Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar19);
                    /* WARNING: Load size is inaccurate */
    CVar19.unknown = puVar4[0x10];
    Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer((__int64)CVar19.unknown,CVar11);
    Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar19.unknown,lVar6);
    Swift::ContiguousArray::__endMutation(CVar19);
    param_3 = param_3 + 0x28;
    lVar17 = lVar17 + -1;
  } while (lVar17 != 0);
  if (((long)puVar4 < 0) || (((ulong)puVar4 >> 0x3e & 1) != 0)) {
    lVar17 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)puVar4);
  }
  else {
    lVar17 = *(long *)(puVar4 + 0x10);
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar17 != 0) {
    uVar18 = 0;
    do {
      if (((ulong)puVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(puVar4 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002e1db8);
          (*pcVar5)();
        }
        self = *(ulong *)(puVar4 + uVar18 * 8 + 0x20);
      }
      else {
        self = uVar18;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar18,(_ArrayBuffer)puVar4);
      }
      lVar6 = uVar18 + 1;
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002e1db4);
        (*pcVar5)();
      }
      IVar7 = objc_stub::attributeSet(self);
      IVar7 = objc_stub::textContent(IVar7);
      if (IVar7 != 0) {
        SVar20 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        puVar12 = SVar20.bridgeObject;
        CVar19.unknown = puVar12;
        CVar11.unknown = puVar12;
        _swift_bridgeObjectRelease();
        uVar1 = (ulong)SVar20.str & 0xffffffffffff;
        if (((ulong)puVar12 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)puVar12 >> 0x38 & 0xf;
        }
        if (uVar1 != 0) {
          Swift::ContiguousArray::__makeUniqueAndReserveCapacityIfNotUnique(CVar19);
                    /* WARNING: Load size is inaccurate */
          CVar19.unknown = puVar4[0x10];
          Swift::ContiguousArray::__reserveCapacityAssumingUniqueBuffer
                    ((__int64)CVar19.unknown,CVar11);
          Swift::ContiguousArray::__appendElementAssumeUniqueAndCapacity(CVar19.unknown,self);
          Swift::ContiguousArray::__endMutation(CVar19);
        }
      }
      uVar18 = uVar18 + 1;
      _Var3.unknown = puVar4;
    } while (lVar6 != lVar17);
  }
  if (((long)_Var3.unknown < 0) || (((ulong)_Var3.unknown >> 0x3e & 1) != 0)) {
    _Var10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
  }
  else {
    _Var10 = *(__int64 *)(_Var3.unknown + 0x10);
  }
  _swift_release(_Var3.unknown);
  if (_Var10 < lVar16) {
    FUN_1000d468c(unaff_x22 + 0x38);
    puVar12 = *(undefined **)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    _Var13.unknown = puVar12;
    FUN_100004640();
    Swift::_StringGuts::grow(0x3d,_Var13);
    SVar20.bridgeObject = (void *)0x8000000100da1000;
    SVar20.str = (char *)0xd000000000000013;
    SVar24.bridgeObject = pvVar15;
    SVar24.str = pcVar14;
    Swift::String::append(SVar20,SVar24);
    *(long *)(unaff_x22 + 0x60) = lVar16;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = pvVar15;
    SVar25.str = pcVar14;
    Swift::String::append(SVar20,SVar25);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar21.bridgeObject = &DAT_e800000000000000;
    SVar21.str = (char *)0x2820736d65746920;
    SVar26.bridgeObject = pvVar15;
    SVar26.str = pcVar14;
    Swift::String::append(SVar21,SVar26);
    *(__int64 *)(unaff_x22 + 0x68) = _Var10;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = pvVar15;
    SVar27.str = pcVar14;
    Swift::String::append(SVar20,SVar27);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar22.bridgeObject = (void *)0x8000000100da1020;
    SVar22.str = (char *)0xd000000000000013;
    SVar28.bridgeObject = pvVar15;
    SVar28.str = pcVar14;
    Swift::String::append(SVar22,SVar28);
    if (SBORROW8(lVar16,_Var10)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1002e202c);
      (*pcVar5)();
    }
    *(long *)(unaff_x22 + 0x70) = lVar16 - _Var10;
    SVar20 = Swift::CustomStringConvertible::get_description();
    SVar29.bridgeObject = pvVar15;
    SVar29.str = pcVar14;
    Swift::String::append(SVar20,SVar29);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar23.bridgeObject = (void *)0xe900000000000029;
    SVar23.str = (char *)0x74756f6874697720;
    SVar30.bridgeObject = pvVar15;
    SVar30.str = pcVar14;
    Swift::String::append(SVar23,SVar30);
    FUN_1000d4dd4(0,0xe000000000000000,puVar12,uVar2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(unaff_x22 + 0x38);
  }
  puVar12 = &DAT_100ec8838;
  _swift_allocObject(&DAT_100ec8838,0x18,7);
  _swift_weakInit(puVar12 + 0x10,unaff_x20);
  puVar8 = &DAT_100ec8860;
  _swift_allocObject(&DAT_100ec8860,0x20,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar8;
  *(undefined **)(puVar8 + 0x10) = puVar12;
  *(undefined **)(puVar8 + 0x18) = puVar4;
  plVar9 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1002e202c;
  FUN_1002ef5d0(&DAT_100c3e680,puVar8);
  return;
}



/* Address: 0x1002e202c | FUN_1002e202c */

void FUN_1002e202c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  long *unaff_x22;
  
  lVar5 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar5 + 0x88);
  uVar2 = *(undefined8 *)(lVar5 + 0x78);
  uVar4 = *(undefined8 *)(lVar5 + 0x80);
  *(long *)(lVar5 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x90));
  _swift_release(uVar1);
  FUN_1000da368(uVar2,uVar4);
  if (unaff_x20 == 0) {
    pcVar3 = FUN_1000e5808;
  }
  else {
    pcVar3 = FUN_1002e20ac;
  }
  _swift_task_switch(pcVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1002e20ac | FUN_1002e20ac */

void FUN_1002e20ac(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002e20b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e20b8 | FUN_1002e20b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e20b8(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  NSArray *pNVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar4;
  ID self;
  long unaff_x22;
  long lVar5;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined1 **)(unaff_x22 + 0x90) = param_1;
  puVar1 = &DAT_100fbd488;
  FUN_1000037f0(&DAT_100fbd488,&DAT_100c3e688);
  lVar5 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    self = *(ID *)(param_4 + 0x10);
    *(ID *)(unaff_x22 + 0xb0) = self;
    _swift_release(param_4);
    FUN_1002e441c(0);
    pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    *(NSArray **)(unaff_x22 + 0xb8) = pNVar3;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1002e2298;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined **)(unaff_x22 + 0x88) = puVar1;
    lVar4 = unaff_x22 + 0x70;
    FUN_10000cbb0(lVar4);
    FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
    function.bridgeObject = (void *)0x8000000100da1040;
    function.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,function);
    (**(code **)(lVar5 + 0x20))(lVar4,uVar2,puVar1);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1002e23a8;
    *(undefined **)(unaff_x22 + 0x68) = &DAT_100ec8878;
    objc_stub::indexSearchableItems_completionHandler_(self,pNVar3);
    (**(code **)(lVar5 + 8))(lVar4,puVar1);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  *param_1 = 1;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001002e2294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2298 | FUN_1002e2298 */

void FUN_1002e2298(void)

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
  *(long *)(lVar4 + 0xc0) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_1002e22fc;
  }
  else {
    pcVar2 = FUN_1002e2348;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002e22fc | FUN_1002e22fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e22fc(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x90) = 0;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001002e2344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2348 | FUN_1002e2348 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e2348(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_willThrow();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002e23a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e23a8 | FUN_1002e23a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e23a8(long param_1,long param_2)

{
  undefined *puVar1;
  long local_28;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_2 == 0) {
    FUN_1000037f0(&DAT_100fbd488,&DAT_100c3e688);
    Swift::CheckedContinuation::resume();
  }
  else {
    puVar1 = &DAT_100fbd488;
    local_28 = param_2;
    FUN_1000037f0(&DAT_100fbd488,&DAT_100c3e688);
    Swift::CheckedContinuation::resume(&local_28,puVar1);
  }
  return;
}



/* Address: 0x1002e243c | FUN_1002e243c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e243c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  NSArray *pNVar3;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar4;
  ID self;
  long unaff_x22;
  long lVar5;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined1 **)(unaff_x22 + 0x90) = param_1;
  puVar1 = &DAT_100fbd488;
  FUN_1000037f0(&DAT_100fbd488,&DAT_100c3e688);
  lVar5 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    self = *(ID *)(param_4 + 0x10);
    *(ID *)(unaff_x22 + 0xb0) = self;
    _swift_release(param_4);
    pNVar3 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    *(NSArray **)(unaff_x22 + 0xb8) = pNVar3;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1002e2618;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined **)(unaff_x22 + 0x88) = puVar1;
    lVar4 = unaff_x22 + 0x70;
    FUN_10000cbb0(lVar4);
    FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
    function.bridgeObject = (void *)0x8000000100da1040;
    function.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,function);
    (**(code **)(lVar5 + 0x20))(lVar4,uVar2,puVar1);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1002e23a8;
    *(undefined **)(unaff_x22 + 0x68) = &DAT_100ec88a0;
    objc_stub::deleteSearchableItemsWithIdentifiers_completionHandler_(self,pNVar3);
    (**(code **)(lVar5 + 8))(lVar4,puVar1);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  *param_1 = 1;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001002e2614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2618 | FUN_1002e2618 */

void FUN_1002e2618(void)

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
  *(long *)(lVar4 + 0xc0) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = thunk_FUN_1002e22fc;
  }
  else {
    pcVar2 = thunk_FUN_1002e2348;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002e267c | FUN_1002e267c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e267c(undefined1 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  ulong uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar3;
  ID self;
  long unaff_x22;
  long lVar4;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_3;
  *(undefined1 **)(unaff_x22 + 0x90) = param_1;
  puVar1 = &DAT_100fbd488;
  FUN_1000037f0(&DAT_100fbd488,&DAT_100c3e688);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  if (param_4 != 0) {
    self = *(ID *)(param_4 + 0x10);
    *(ID *)(unaff_x22 + 0xb0) = self;
    _swift_release(param_4);
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1002e2838;
    continuation.unknown = (undefined *)(unaff_x22 + 0x10);
    _swift_continuation_init(continuation.unknown,1);
    *(undefined **)(unaff_x22 + 0x88) = puVar1;
    lVar3 = unaff_x22 + 0x70;
    FUN_10000cbb0(lVar3);
    FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
    function.bridgeObject = (void *)0x8000000100da1040;
    function.str = (char *)0xd000000000000026;
    Swift::CheckedContinuation::init(continuation,function);
    (**(code **)(lVar4 + 0x20))(lVar3,uVar2,puVar1);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_1002e23a8;
    *(undefined **)(unaff_x22 + 0x68) = &DAT_100ec88c8;
    objc_stub::deleteAllSearchableItemsWithCompletionHandler_(self);
    (**(code **)(lVar4 + 8))(lVar3,puVar1);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
  *param_1 = 1;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001002e2834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2838 | FUN_1002e2838 */

void FUN_1002e2838(void)

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
  *(long *)(lVar4 + 0xb8) = lVar5;
  FUN_1000da368(uVar1,uVar3);
  if (lVar5 == 0) {
    pcVar2 = FUN_1002e289c;
  }
  else {
    pcVar2 = FUN_1002e28e0;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002e289c | FUN_1002e289c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e289c(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x90) = 0;
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
                    /* WARNING: Could not recover jumptable at 0x0001002e28dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e28e0 | FUN_1002e28e0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e28e0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_willThrow();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002e292c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2930 | FUN_1002e2930 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002e2930(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  Item IVar2;
  ulong uVar3;
  ulong uVar4;
  Results RVar5;
  ulong uVar6;
  Iterator IVar7;
  ulong uVar8;
  undefined *puVar9;
  ID IVar10;
  NSArray *pNVar11;
  undefined *self;
  NSString *pNVar12;
  Results RVar13;
  long *plVar14;
  long lVar15;
  undefined8 unaff_x20;
  long unaff_x22;
  long lVar16;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  IVar2 = Results::Item::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x28) = IVar2.unknown;
  lVar15 = *(long *)(IVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x30) = lVar15;
  uVar3 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  puVar9 = &DAT_100fbd480;
  FUN_1000037f0(&DAT_100fbd480,&DAT_100c3e668);
  uVar4 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar4;
  RVar5 = Results::_typeMetadataAccessor();
  lVar16 = *(long *)(RVar5.unknown + -8);
  uVar6 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar6;
  IVar7 = Results::Iterator::_typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = IVar7.unknown;
  lVar15 = *(long *)(IVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar15;
  uVar8 = *(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar8;
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    puVar9 = &_OBJC_CLASS___CSSearchQueryContext;
    _objc_allocWithZone();
    IVar10 = objc_stub::init((ID)puVar9);
    *(ID *)(unaff_x22 + 0x68) = IVar10;
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    objc_stub::setFetchAttributes_(IVar10,pNVar11);
    self = &_OBJC_CLASS___CSSearchQuery;
    _objc_allocWithZone();
    pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar10 = objc_stub::initWithQueryString_queryContext_((ID)self,pNVar12,IVar10);
    *(ID *)(unaff_x22 + 0x70) = IVar10;
    RVar13 = (extension_CoreSpotlight)::__C::CSSearchQuery::_get_results((CSSearchQuery *)0x0);
    Results::_makeAsyncIterator(RVar13);
    (**(code **)(lVar16 + 8))(uVar6,RVar5.unknown);
    *(undefined **)(unaff_x22 + 0x78) = puVar9;
    plVar14 = (long *)(ulong)*(uint *)(PTR__next_100ea68c8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar14;
    *plVar14 = unaff_x22;
    plVar14[1] = (long)FUN_1002e2b90;
    Results::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x40));
    return;
  }
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002e2b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1002e2b90 | FUN_1002e2b90 */

void FUN_1002e2b90(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x80));
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1002e2bf8;
  }
  else {
    pcVar2 = FUN_1002e2e3c;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002e2bf8 | FUN_1002e2bf8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e2bf8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  CSSearchableItem *self;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  Item IVar11;
  String SVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x30);
  uVar4 = uVar9;
  (**(code **)(lVar10 + 0x30))(uVar9,1,uVar1);
  uVar7 = *(ulong *)(unaff_x22 + 0x78);
  if ((int)uVar4 != 1) {
    IVar11.unknown = *(undefined **)(unaff_x22 + 0x38);
    (**(code **)(lVar10 + 0x20))(IVar11.unknown,uVar9,uVar1);
    self = Results::Item::_get_item(IVar11);
    objc_stub::uniqueIdentifier((ID)self);
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = *(ulong *)(unaff_x22 + 0x78);
    uVar6 = uVar8;
    if ((uVar7 & 1) == 0) {
      uVar6 = 0;
      FUN_1002db014(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    }
    uVar8 = *(ulong *)(uVar6 + 0x10);
    lVar10 = uVar8 + 1;
    uVar7 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar8) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_1002db014(uVar7,lVar10,1,uVar6);
    }
    lVar2 = *(long *)(unaff_x22 + 0x30);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
    lVar3 = *(long *)(unaff_x22 + 0x20);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
    *(long *)(uVar7 + 0x10) = lVar10;
    *(String *)(uVar7 + uVar8 * 0x10 + 0x20) = SVar12;
    (**(code **)(lVar2 + 8))(uVar1,uVar4);
    if (lVar10 != *(long *)(lVar3 + 0x20)) {
      *(ulong *)(unaff_x22 + 0x78) = uVar7;
      plVar5 = (long *)(ulong)*(uint *)(PTR__next_100ea68c8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x80) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_1002e2b90;
      Results::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x40));
      return;
    }
  }
  lVar10 = *(long *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
  (extension_Swift)::Swift::Task::_checkCancellation();
  if (lVar10 != 0) {
    _swift_bridgeObjectRelease(uVar7);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001002e2d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001002e2da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar7);
  return;
}



/* Address: 0x1002e2e3c | FUN_1002e2e3c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e2e3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))
            (*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x50));
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x60));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002e2ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002e2ed0 | FUN_1002e2ed0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e2ed0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100005808(unaff_x20 + 0x28,&DAT_100fbd248,&DAT_100c3e530);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1002e2f14 | FUN_1002e2f14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e2f14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100005808(unaff_x20 + 0x28,&DAT_100fbd248,&DAT_100c3e530);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002e2f60 | FUN_1002e2f60 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002e2f60(void)

{
  return ZEXT816(0x100fbd290);
}



/* Address: 0x1002e2f80 | FUN_1002e2f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002e2f80(void)

{
  return ZEXT816(0x100fbd358);
}



/* Address: 0x1002e2fa0 | FUN_1002e2fa0 */

long * FUN_1002e2fa0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar4;
    param_1[2] = param_2[2];
    lVar6 = (long)*(int *)(param_3 + 0x1c);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar7 = *(long *)(DVar2.unknown + -8);
    lVar4 = (long)param_2 + lVar6;
    (**(code **)(lVar7 + 0x30))(lVar4,1,DVar2.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar2.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar2.unknown);
    }
    else {
      puVar3 = &DAT_100fbcfb8;
      FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
      _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002e30a4 | FUN_1002e30a4 */

void FUN_1002e30a4(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002e310c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1002e3110 | FUN_1002e3110 */

undefined8 * FUN_1002e3110(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[2] = param_2[2];
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x10))((long)param_1 + lVar4,(long)param_2 + lVar4,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Address: 0x1002e31e8 | FUN_1002e31e8 */

undefined8 * FUN_1002e31e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x18))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
      goto LAB_1002e32d4;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar1.unknown);
    goto LAB_1002e32d4;
  }
  puVar4 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1002e32d4:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Address: 0x1002e3314 | FUN_1002e3314 */

undefined8 * FUN_1002e3314(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  param_1[2] = param_2[2];
  lVar4 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Address: 0x1002e33ec | FUN_1002e33ec */

undefined8 * FUN_1002e33ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[2] = param_2[2];
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  lVar2 = (long)param_1 + lVar5;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar5;
  (*pcVar7)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar6 + 0x28))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
      goto LAB_1002e34d0;
    }
    (**(code **)(lVar6 + 8))((long)param_1 + lVar5,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar1.unknown);
    goto LAB_1002e34d0;
  }
  puVar4 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1002e34d0:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  return param_1;
}



/* Address: 0x1002e3510 | FUN_1002e3510 */

void FUN_1002e3510(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002e351c | FUN_1002e351c */

void FUN_1002e351c(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_3 + 0x1c);
  puVar2 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
                    /* WARNING: Could not recover jumptable at 0x0001002e356c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1 + iVar1,param_2,puVar2);
  return;
}



/* Address: 0x1002e3570 | FUN_1002e3570 */

void FUN_1002e3570(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002e357c | FUN_1002e357c */

void FUN_1002e357c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = *(int *)(param_4 + 0x1c);
  puVar2 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
                    /* WARNING: Could not recover jumptable at 0x0001002e35d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}


