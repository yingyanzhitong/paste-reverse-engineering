/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100076838 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x10007683c | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x100076840 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x100076844 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x100076848 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x10007684c | thunk_FUN_100076520 */

void thunk_FUN_100076520(void)

{
  FUN_100076520();
  return;
}



/* Address: 0x100076850 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x100076854 | thunk_FUN_1000765e0 */

void thunk_FUN_1000765e0(void)

{
  FUN_1000765e0();
  return;
}



/* Address: 0x100076858 | thunk_FUN_100076710 */

void thunk_FUN_100076710(void)

{
  FUN_100076710();
  return;
}



/* Address: 0x10007685c | thunk_FUN_100076750 */

void thunk_FUN_100076750(long param_1,long param_2)

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



/* Address: 0x100076860 | thunk_FUN_100076764 */

void thunk_FUN_100076764(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100076864 | thunk_FUN_1000765b0 */

void thunk_FUN_1000765b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10006cb4c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100076868 | thunk_FUN_1000749a0 */

void thunk_FUN_1000749a0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001000749dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10007686c | thunk_FUN_10006e0c4 */

void thunk_FUN_10006e0c4(ID param_1)

{
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::init(param_1);
  return;
}



/* Address: 0x100076870 | thunk_FUN_10007619c */

void thunk_FUN_10007619c(void)

{
  FUN_100076568(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100076874 | thunk_FUN_10007619c */

void thunk_FUN_10007619c(void)

{
  FUN_100076568(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100076878 | thunk_FUN_10007619c */

void thunk_FUN_10007619c(void)

{
  FUN_100076568(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10007687c | thunk_FUN_10007619c */

void thunk_FUN_10007619c(void)

{
  FUN_100076568(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100076880 | thunk_FUN_10007619c */

void thunk_FUN_10007619c(void)

{
  FUN_100076568(PTR__swift_release_100eae3e8,PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100076884 | FUN_100076884 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100076884(void)

{
  URL UVar1;
  ID IVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  URL UVar5;
  long lVar6;
  NSURL *pNVar7;
  __int64 _Var8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar9;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined4 *puVar13;
  code *pcVar14;
  undefined *local_d0;
  undefined4 *local_c8;
  undefined *local_c0;
  long local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar9 = &DAT_100fa6f98;
  FUN_1000037f0(&DAT_100fa6f98,&DAT_100c23be0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar6 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar6 - extraout_x12;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar9 = (undefined *)(lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_c0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_d0 = puVar9 + -extraout_x12_00;
  puVar13 = (undefined4 *)(unaff_x20 + 0x10);
  *puVar13 = 0;
  local_c8 = (undefined4 *)(unaff_x20 + 0x14);
  *local_c8 = 0;
  puVar9 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_b8 = lVar6;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var8 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar9 = PTR___swiftEmptySetSingleton_100eae0e8, _Var8 != 0)) {
    puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + 0x18) = puVar9;
  _swift_getKeyPath(&DAT_100c26fb0);
  FUN_1002cb7e0(&local_98);
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x20) = local_98;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_80;
  *(undefined8 *)(unaff_x20 + 0x30) = local_88;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_70;
  *(undefined8 *)(unaff_x20 + 0x40) = local_78;
  *(undefined8 *)(unaff_x20 + 0x50) = local_68;
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown = (undefined *)NSBundle::URLForResource_withExtension_(IVar2,pNVar3,pNVar4);
  if (UVar5.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  }
  pcVar11 = *(code **)(lVar10 + 0x38);
  (*pcVar11)(lVar12,UVar5.unknown == (undefined *)0x0,1,UVar1.unknown);
  pcVar14 = *(code **)(lVar10 + 0x30);
  lVar6 = lVar12;
  (*pcVar14)(lVar12,1,UVar1.unknown);
  puVar9 = local_d0;
  if ((int)lVar6 == 1) {
    FUN_100054698(lVar12);
  }
  else {
    UVar5.unknown = local_d0;
    (**(code **)(lVar10 + 0x20))(local_d0,lVar12,UVar1.unknown);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    _swift_beginAccess(puVar13,auStack_b0,0x21,0);
    _AudioServicesCreateSystemSoundID(pNVar7,puVar13);
    _swift_endAccess(auStack_b0);
    (**(code **)(lVar10 + 8))(puVar9,UVar1.unknown);
  }
  IVar2 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown = (undefined *)NSBundle::URLForResource_withExtension_(IVar2,pNVar3,pNVar4);
  lVar6 = local_b8;
  if (UVar5.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  }
  (*pcVar11)(lVar6,UVar5.unknown == (undefined *)0x0,1,UVar1.unknown);
  lVar12 = lVar6;
  (*pcVar14)(lVar6,1,UVar1.unknown);
  puVar9 = local_c0;
  if ((int)lVar12 == 1) {
    FUN_100054698(lVar6);
  }
  else {
    UVar5.unknown = local_c0;
    (**(code **)(lVar10 + 0x20))(local_c0,lVar6,UVar1.unknown);
    pNVar7 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    puVar13 = local_c8;
    _swift_beginAccess(local_c8,auStack_b0,0x21,0);
    _AudioServicesCreateSystemSoundID(pNVar7,puVar13);
    _swift_endAccess(auStack_b0);
    (**(code **)(lVar10 + 8))(puVar9,UVar1.unknown);
  }
  FUN_100076ca0();
  return;
}



/* Address: 0x100076ca0 | FUN_100076ca0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100076d34 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100076ca0(void)

{
  Publisher PVar1;
  undefined *puVar2;
  AnyCancellable *pAVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  PVar1 = Publisher::_typeMetadataAccessor();
  lVar7 = *(long *)(PVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a75c();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar5,PVar1.unknown,0);
  puVar4 = &DAT_100eb2cd0;
  puVar2 = puVar4;
  _swift_allocObject(&DAT_100eb2cd0,0x18,7);
  _swift_weakInit(puVar2 + 0x10);
  FUN_100077220();
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar2);
  pcVar6 = *(code **)(lVar7 + 8);
  (*pcVar6)(puVar5,PVar1.unknown);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x18));
  _swift_endAccess(auStack_78);
  _swift_release(pAVar3);
  NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  FUN_10037a7ec();
  (extension_Foundation)::__C::NSNotificationCenter::_publisher(puVar5,auStack_78,0);
  _swift_allocObject(&DAT_100eb2cd0,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  pAVar3 = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (*pcVar6)(puVar5,PVar1.unknown);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0x21,0);
  Combine::AnyCancellable::store(pAVar3,(undefined *)(unaff_x20 + 0x18));
  _swift_endAccess(auStack_78);
  _swift_release(pAVar3);
  return;
}



/* Address: 0x100076ebc | FUN_100076ebc */

void FUN_100076ebc(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    local_90 = uVar2;
    uStack_88 = uVar4;
    local_80 = uVar5;
    local_70 = uVar3;
    local_60 = uVar1;
    _swift_retain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(uVar5);
    _swift_retain(uVar3);
    _swift_retain(uVar1);
    FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
    FUN_1002ca7e0(local_a8);
    _swift_release(uVar1);
    _swift_release(uVar3);
    _swift_release(uVar5);
    _swift_release(uVar4);
    _swift_release(uVar2);
    if (local_a8[0] == '\x01') {
      _swift_beginAccess(param_2 + 0x10,local_a8,0,0);
      _AudioServicesPlaySystemSound(*(undefined4 *)(param_2 + 0x10));
    }
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100076fc8 | FUN_100076fc8 */

void FUN_100076fc8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char local_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uStack_78 = *(undefined8 *)(param_2 + 0x38);
    uVar5 = *(undefined8 *)(param_2 + 0x30);
    uStack_68 = *(undefined8 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    local_90 = uVar2;
    uStack_88 = uVar4;
    local_80 = uVar5;
    local_70 = uVar3;
    local_60 = uVar1;
    _swift_retain(uVar2);
    _swift_retain(uVar4);
    _swift_retain(uVar5);
    _swift_retain(uVar3);
    _swift_retain(uVar1);
    FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
    FUN_1002ca7e0(local_a8);
    _swift_release(uVar1);
    _swift_release(uVar3);
    _swift_release(uVar5);
    _swift_release(uVar4);
    _swift_release(uVar2);
    if (local_a8[0] == '\x01') {
      _swift_beginAccess(param_2 + 0x14,local_a8,0,0);
      _AudioServicesPlaySystemSound(*(undefined4 *)(param_2 + 0x14));
    }
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x1000770d4 | FUN_1000770d4 */

void FUN_1000770d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100077144 | FUN_100077144 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100077144(void)

{
  return ZEXT816(0x100fa99b0);
}



/* Address: 0x100077164 | FUN_100077164 */

void FUN_100077164(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000015,0x8000000100d8ed30,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000771ac | FUN_1000771ac */

void FUN_1000771ac(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000015,0x8000000100d8ed30,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000771f4 | FUN_1000771f4 */

void FUN_1000771f4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100077218 | FUN_100077218 */

void FUN_100077218(void)

{
  FUN_100076ebc();
  return;
}



/* Address: 0x100077220 | FUN_100077220 */

void FUN_100077220(void)

{
  Publisher PVar1;
  undefined *puVar2;
  
  if (DAT_100fa6698 != (undefined *)0x0) {
    return;
  }
  PVar1 = Publisher::_typeMetadataAccessor();
  puVar2 = PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8;
  _swift_getWitnessTable(PTR__Foundation__Publisher_>Combine__Publisher_100ea79a8,PVar1.unknown);
  DAT_100fa6698 = puVar2;
  return;
}



/* Address: 0x100077264 | FUN_100077264 */

void FUN_100077264(void)

{
  FUN_100076fc8();
  return;
}



/* Address: 0x10007726c | FUN_10007726c */

undefined1  [16] FUN_10007726c(void)

{
  return ZEXT816(0x100eb2d50);
}



/* Address: 0x10007727c | FUN_10007727c */

void FUN_10007727c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  byte bVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  byte *unaff_x20;
  Hasher HVar6;
  undefined1 auStack_98 [72];
  
  bVar1 = *unaff_x20;
  SVar3 = *(String *)(unaff_x20 + 8);
  HVar5.unknown = ((String *)(unaff_x20 + 0x18))->str;
  SVar4 = *(String *)(unaff_x20 + 0x18);
  bVar2 = unaff_x20[0x28];
  HVar6.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((ulong)bVar1,param_2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::String::hash((Hasher)auStack_98,SVar4);
  Swift::Hasher::_combine(bVar2,HVar5);
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x100077310 | FUN_100077310 */

void FUN_100077310(Hasher param_1,Hasher param_2)

{
  __uint8 _Var1;
  String SVar2;
  String SVar3;
  Hasher HVar4;
  byte *unaff_x20;
  
  SVar2 = *(String *)(unaff_x20 + 8);
  HVar4.unknown = ((String *)(unaff_x20 + 0x18))->str;
  SVar3 = *(String *)(unaff_x20 + 0x18);
  _Var1 = unaff_x20[0x28];
  Swift::Hasher::_combine((ulong)*unaff_x20,param_2);
  Swift::String::hash(param_1,SVar2);
  Swift::String::hash(param_1,SVar3);
  Swift::Hasher::_combine(_Var1,HVar4);
  return;
}



/* Address: 0x100077384 | FUN_100077384 */

void FUN_100077384(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  byte bVar2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  byte *unaff_x20;
  Hasher HVar6;
  undefined1 auStack_98 [72];
  
  bVar1 = *unaff_x20;
  SVar3 = *(String *)(unaff_x20 + 8);
  HVar5.unknown = ((String *)(unaff_x20 + 0x18))->str;
  SVar4 = *(String *)(unaff_x20 + 0x18);
  bVar2 = unaff_x20[0x28];
  HVar6.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine((ulong)bVar1,param_2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::String::hash((Hasher)auStack_98,SVar4);
  Swift::Hasher::_combine(bVar2,HVar5);
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x100077414 | FUN_100077414 */

byte FUN_100077414(char *param_1,char *param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  _StringGuts _Var7;
  
  if (*param_1 == *param_2) {
    _Var2.unknown = *(undefined **)(param_1 + 0x18);
    _Var7.unknown = *(undefined **)(param_1 + 0x20);
    bVar6 = param_1[0x28];
    puVar1 = *(undefined **)(param_2 + 0x18);
    puVar3 = *(undefined **)(param_2 + 0x20);
    bVar4 = param_2[0x28];
    if ((((*(undefined **)(param_1 + 8) == *(undefined **)(param_2 + 8)) &&
         (*(undefined **)(param_1 + 0x10) == *(undefined **)(param_2 + 0x10))) ||
        (bVar5 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)*(undefined **)(param_1 + 8),
                            (_StringGuts)*(undefined **)(param_1 + 0x10),
                            (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 8)), bVar5))
       && (((_Var2.unknown == puVar1 && (_Var7.unknown == puVar3)) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var7,(_StringComparisonResult)(__int8)puVar1), bVar5)))) {
      bVar6 = bVar6 ^ bVar4 ^ 1;
    }
    else {
      bVar6 = 0;
    }
    return bVar6;
  }
  return 0;
}



/* Address: 0x1000774d0 | thunk_FUN_1000774d4 */

void thunk_FUN_1000774d4(void)

{
  FUN_1000774d4();
  return;
}



/* Address: 0x1000774d4 | FUN_1000774d4 */

void FUN_1000774d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa9a28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c26fe8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c26fe8,&DAT_100eb2d50);
  DAT_100fa9a28 = pTVar1;
  return;
}



/* Address: 0x100077514 | FUN_100077514 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100077514(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LocalizedStringResource LVar3;
  long extraout_x8;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  FUN_10020d770();
  uVar1 = *(undefined8 *)LVar3.unknown;
  uVar2 = *(undefined8 *)((long)LVar3.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001c51b8(&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _DAT_101057000 =
       (extension_Foundation)::Swift::String::init
                 ((LocalizedStringResource)
                  (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  DAT_101056fe8 = 5;
  DAT_101056ff0 = uVar1;
  DAT_101056ff8 = uVar2;
  DAT_101057010 = 0;
  return;
}



/* Address: 0x1000775a8 | FUN_1000775a8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000775a8(void)

{
  NSString *pNVar1;
  ID IVar2;
  ID IVar3;
  ID unaff_x20;
  double extraout_d0;
  double dVar4;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar2 = objc_stub::setFrameUsingName_(unaff_x20,pNVar1);
  IVar3 = 0;
  if ((IVar2 & 1) == 0) {
    IVar3 = objc_stub::frame(unaff_x20);
    dVar4 = extraout_d0;
    _CGRectGetHeight();
    if (dVar4 != 332.0) {
      objc_stub::frame(unaff_x20);
      objc_stub::setFrame_display_animate_(unaff_x20,1,0);
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::saveFrameUsingName_(unaff_x20,pNVar1);
      return 0;
    }
  }
  return IVar3;
}



/* Address: 0x10007767c | FUN_10007767c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10007767c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_70 [16];
  ID local_60;
  undefined8 uStack_58;
  
  IVar4 = 0;
  FUN_100092d6c();
  _objc_allocWithZone();
  IVar4 = objc_stub::initWithFrame_(IVar4,0,0,0,0);
  puVar6 = &DAT_100eb2db8;
  puVar5 = puVar6;
  _swift_allocObject(&DAT_100eb2db8,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(IVar4 + _TtCC5Paste10MainWindow12ResizeHandle::onLiveResize);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_1000781c4;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  puVar5 = puVar6;
  _swift_allocObject(&DAT_100eb2db8,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar1 = (undefined8 *)(IVar4 + _TtCC5Paste10MainWindow12ResizeHandle::onEndResize);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_1000782b0;
  puVar1[1] = puVar5;
  _swift_retain(puVar5);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar5);
  _swift_allocObject(&DAT_100eb2db8,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar1 = (undefined8 *)(IVar4 + _TtCC5Paste10MainWindow12ResizeHandle::onResetSize);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_100078364;
  puVar1[1] = puVar6;
  _swift_retain(puVar6);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar6);
  local_60 = IVar4;
  uStack_58 = param_1;
  FUN_1001fa09c(IVar4,FUN_1000785d8,auStack_70);
  _swift_bridgeObjectRelease(IVar4);
  return;
}



/* Address: 0x100077828 | _TtC5Paste10MainWindow::canBecomeMainWindow */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste10MainWindow::canBecomeMainWindow(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_100077838(bVar1,param_2,0x1b);
  return bVar1;
}



/* Address: 0x100077830 | _TtC5Paste10MainWindow::canBecomeKeyWindow */

/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste10MainWindow::canBecomeKeyWindow(ID param_1,SEL param_2)

{
  bool bVar1;
  
  bVar1 = (bool)param_1;
  FUN_100077838(bVar1,param_2,0x1f);
  return bVar1;
}



/* Address: 0x100077838 | FUN_100077838 */

undefined8 FUN_100077838(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MainWindow.swift",0x16,1,param_3,UVar3.unknown,pMVar1);
  }
  _swift_release(pMVar2);
  return 1;
}



/* Address: 0x1000778c0 | FUN_1000778c0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000778c0(long param_1)

{
  ID IVar1;
  ID unaff_x20;
  
  _swift_getObjectType();
  if (param_1 == 0) {
    IVar1 = objc_stub::initialFirstResponder(unaff_x20);
    if (IVar1 == 0) {
      IVar1 = objc_stub::contentView(unaff_x20);
    }
    IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"makeFirstResponder:",IVar1);
  }
  else {
    IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"makeFirstResponder:",param_1
                               );
  }
  return IVar1;
}



/* Address: 0x10007796c | _TtC5Paste10MainWindow::makeFirstResponder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste10MainWindow::makeFirstResponder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  uint uVar5;
  
  uVar5 = (uint)param_3;
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,0x23,UVar3.unknown,pMVar1);
  }
  FUN_1000778c0();
  _swift_release(pMVar2);
  return uVar5 & 1;
}



/* Address: 0x100077a38 | _TtC5Paste10MainWindow::performClose: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10MainWindow::performClose_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,0x2b,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  self = objc_stub::windowController(param_1);
  objc_stub::close(self);
  FUN_100013954(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100077b38 | _TtC5Paste10MainWindow::validateMenuItem: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste10MainWindow::validateMenuItem_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  UnsafeMutablePointer UVar8;
  __int64 in_x3;
  UnsafeMutablePointer in_x4;
  MainActor *in_x5;
  bool bVar9;
  Selector SVar10;
  Selector SVar11;
  Selector SVar12;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  UVar8.unknown = (undefined *)param_3;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    UVar8.unknown = &DAT_00000001;
    in_x3 = 0x2f;
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16);
    in_x4.unknown = UVar5.unknown;
    in_x5 = pMVar3;
  }
  SVar10.events.unknown = (undefined *)objc_stub::action(param_3);
  if ((SVar10.events.unknown == (undefined *)0x0) ||
     (SVar10.eventsCapacity = (__int64)"performClose:", SVar11.eventsCapacity = in_x3,
     SVar11.events.unknown = UVar8.unknown, SVar12.eventsCapacity = (__int64)in_x5,
     SVar12.events.unknown = in_x4.unknown,
     bVar1 = ObjectiveC::Selector::___infix(SVar10,SVar11,SVar12), !bVar1)) {
    local_50.receiver = param_1;
    local_50.super_class = pcVar2;
    IVar7 = _objc_msgSendSuper2(&local_50,"validateMenuItem:",param_3);
    bVar9 = (bool)IVar7;
  }
  else {
    bVar9 = 1;
  }
  _swift_release(pMVar4);
  return bVar9;
}



/* Address: 0x100077c54 | _TtC5Paste10MainWindow::layoutIfNeeded */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10MainWindow::layoutIfNeeded(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 in_d2;
  undefined8 in_d3;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,0x37,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"layoutIfNeeded");
  objc_stub::frame(param_1);
  objc_stub::setMinSize_(param_1,in_d2,in_d3);
  objc_stub::frame(param_1);
  objc_stub::setMaxSize_(param_1,in_d2,in_d3);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100077d4c | _TtC5Paste10MainWindow::initWithContentRect:styleMask:backing:defer: */

/* Function Stack Size: 0x44 bytes */

ID _TtC5Paste10MainWindow::initWithContentRect_styleMask_backing_defer_
             (ID param_1,SEL param_2,CGRect param_3,unsigned_long_long param_4,
             unsigned_long_long param_5,bool param_6)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,3,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.MainWindow",0x10,"init(contentRect:styleMask:backing:defer:)",0x2a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100077dd4);
  (*pcVar1)();
}



/* Address: 0x100077dd4 | _TtC5Paste10MainWindow::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC5Paste10MainWindow::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onDidResignKey),
                ((undefined8 *)(param_1 + onDidResignKey))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onDidChangeScreen),
                ((undefined8 *)(param_1 + onDidChangeScreen))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onWillReturnUndoManager),
                ((undefined8 *)(param_1 + onWillReturnUndoManager))[1]);
  return;
}



/* Address: 0x100077e28 | FUN_100077e28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100077e28(void)

{
  return ZEXT816(0x100f91838);
}



/* Address: 0x100077e48 | _TtC5Paste10MainWindow::windowDidResignKey: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10MainWindow::windowDidResignKey_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100077e68();
  return;
}



/* Address: 0x100077e58 | _TtC5Paste10MainWindow::windowDidChangeScreen: */

/* Function Stack Size: 0x18 bytes */

void _TtC5Paste10MainWindow::windowDidChangeScreen_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100077e68();
  return;
}



/* Address: 0x100077e68 | FUN_100077e68 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100077e68(long param_1,undefined8 param_2,char *param_3,void *param_4,long *param_5)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  long extraout_x8;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  Notification NVar10;
  void *pvVar6;
  
  NVar10 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar10.syncInProgress.bridgeObject;
  pcVar5 = NVar10.syncInProgress.str;
  pcVar1 = NVar10.pastePaused.str;
  lVar9 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar9 + 0x40),pcVar1,NVar10.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x16;
    pcVar5 = &DAT_00000001;
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift");
    pvVar6 = param_4;
  }
  NVar10.pastePaused.bridgeObject = pMVar2;
  NVar10.pastePaused.str = param_3;
  NVar10.syncInProgress.bridgeObject = pvVar6;
  NVar10.syncInProgress.str = pcVar5;
  NVar10 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar10);
  pcVar8 = *(code **)(param_1 + *param_5);
  if (pcVar8 == (code *)0x0) {
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1,
               NVar10.syncInProgress.str,NVar10.syncInProgress.bridgeObject);
    _swift_release(pMVar3);
  }
  else {
    uVar7 = ((undefined8 *)(param_1 + *param_5))[1];
    FUN_100011128(pcVar8,uVar7);
    (*pcVar8)();
    FUN_100004550(pcVar8,uVar7);
    (**(code **)(lVar9 + 8))
              (&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x100077fe0 | _TtC5Paste10MainWindow::windowWillReturnUndoManager: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste10MainWindow::windowWillReturnUndoManager_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,0x49,UVar3.unknown,pMVar1);
  }
  pcVar6 = *(code **)(param_1 + onWillReturnUndoManager);
  if (pcVar6 == (code *)0x0) {
    _swift_release(pMVar2);
    pcVar5 = (code *)0x0;
  }
  else {
    uVar7 = ((undefined8 *)(param_1 + onWillReturnUndoManager))[1];
    pcVar5 = pcVar6;
    FUN_100011128(pcVar6,uVar7);
    (*pcVar6)();
    FUN_100004550(pcVar6,uVar7);
    _swift_release(pMVar2);
  }
  return (ID)pcVar5;
}



/* Address: 0x1000780d4 | FUN_1000780d4 */

void FUN_1000780d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000780f8 | FUN_1000780f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000780f8(long param_1)

{
  ID self;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::frame(self);
    objc_stub::setFrame_display_(self,0);
    return 0;
  }
  return 0;
}



/* Address: 0x1000781c4 | FUN_1000781c4 */

void FUN_1000781c4(void)

{
  FUN_1000780f8();
  return;
}



/* Address: 0x1000781cc | FUN_1000781cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000781cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ID self;
  NSString *pNVar1;
  undefined8 extraout_d0;
  double extraout_d0_00;
  double dVar2;
  double dVar3;
  
  self = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::frame(self);
    objc_stub::frame(self);
    dVar2 = extraout_d0_00;
    _CGRectGetHeight();
    dVar3 = 412.0;
    if (dVar2 <= 412.0) {
      dVar3 = dVar2;
    }
    dVar2 = 252.0;
    if (252.0 < dVar3) {
      dVar2 = dVar3;
    }
    objc_stub::setFrame_display_animate_(self,extraout_d0,param_2,param_3,dVar2,1,1);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::saveFrameUsingName_(self,pNVar1);
    return 0;
  }
  return 0;
}



/* Address: 0x1000782b0 | FUN_1000782b0 */

void FUN_1000782b0(void)

{
  FUN_1000781cc();
  return;
}



/* Address: 0x1000782b8 | FUN_1000782b8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000782b8(long param_1)

{
  ID self;
  NSString *pNVar1;
  double extraout_d0;
  double dVar2;
  
  self = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (self != 0) {
    objc_stub::frame(self);
    dVar2 = extraout_d0;
    _CGRectGetHeight();
    if (dVar2 != 332.0) {
      objc_stub::frame(self);
      objc_stub::setFrame_display_animate_(self,1,1);
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::saveFrameUsingName_(self,pNVar1);
    }
    return 0;
  }
  return 0;
}



/* Address: 0x100078364 | FUN_100078364 */

void FUN_100078364(void)

{
  FUN_1000782b8();
  return;
}



/* Address: 0x10007836c | FUN_10007836c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10007836c(ID param_1,ID param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ID *pIVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  ID local_68;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainWindow.swift",0x16,1,0x65,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::topAnchor(param_1);
  IVar6 = objc_stub::topAnchor(param_2);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  uVar7 = 0;
  local_68 = param_1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  uVar8 = 0;
  local_90[0] = param_2;
  local_78 = uVar7;
  FUN_100092d6c(0);
  pIVar9 = local_90;
  FUN_1001f9b74(0,pIVar9,uVar8,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  IVar6 = objc_stub::heightAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToConstant_(IVar6,0x4024000000000000);
  puVar10 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 6;
  *(undefined8 *)(puVar10 + 0x10) = 3;
  uVar7 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar10 + 0x38) = uVar7;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x20) = IVar5;
  puVar11 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar10 + 0x60) = puVar11;
  *(undefined ***)(puVar10 + 0x68) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar10 + 0x48) = pIVar9;
  *(undefined8 *)(puVar10 + 0x88) = uVar7;
  *(undefined ***)(puVar10 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x70) = IVar6;
  puVar12 = puVar10;
  FUN_1001f8d60(puVar10);
  _swift_setDeallocating(puVar10);
  uVar7 = *(undefined8 *)(puVar10 + 0x10);
  puVar11 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar10 + 0x20,uVar7,puVar11);
  _swift_release(pMVar2);
  return puVar12;
}


