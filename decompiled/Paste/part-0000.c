/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100002b98 | entry */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 entry(void)

{
  __int32 _Var1;
  ID IVar2;
  UnsafeMutablePointer<static_Swift_CommandLine_unsafeArgv_getter_:_Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>>
  UVar3;
  
  DAT_101056fb0 = NSApplication::sharedApplication((ID)&_OBJC_CLASS___NSApplication);
  IVar2 = 0;
  FUN_100090644();
  _objc_allocWithZone();
  DAT_101056fb8 = objc_stub::init(IVar2);
  IVar2 = objc_stub::setDelegate_(DAT_101056fb0,DAT_101056fb8);
  _Var1 = Swift::CommandLine::get_argc((CommandLine)(__int8)IVar2);
  UVar3 = Swift::CommandLine::_get_unsafeArgv((CommandLine)(__int8)_Var1);
  AppKit::_NSApplicationMain
            (_Var1,(UnsafeMutablePointer<AppKit_NSApplicationMain(Swift_Int32,Swift_UnsafeMutablePointer<Swift_UnsafeMutablePointer<Swift_Int8>_>)__>_Swift_Int32>
                    )UVar3.unknown);
  return 0;
}



/* Address: 0x100002c10 | FUN_100002c10 */

void FUN_100002c10(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100002c1c | FUN_100002c1c */

undefined8 FUN_100002c1c(void)

{
  return 0;
}



/* Address: 0x100002c24 | FUN_100002c24 */

void FUN_100002c24(long param_1)

{
  undefined *puVar1;
  Optional OVar2;
  int iVar3;
  TagValueTraitKey TVar4;
  undefined8 uVar5;
  undefined8 local_48;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  iVar3 = 1;
  FUN_100bf158c(1,0x1a,0,0);
  if (iVar3 != 0) {
    SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor();
    SwiftUI::ModifiedContent::typeMetadataAccessor();
    return;
  }
  TVar4 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
  puVar1 = PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_100eaaa30;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_100eaaa30,
             TVar4.unknown);
  SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  local_48 = uVar5;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
             ,OVar2.value,&local_48);
  TVar4 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
  _swift_getWitnessTable(puVar1,TVar4.unknown);
  SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  return;
}



/* Address: 0x100002d5c | FUN_100002d5c */

void FUN_100002d5c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  Optional OVar3;
  int iVar4;
  _TagTraitWritingModifier _Var5;
  ModifiedContent MVar6;
  TagValueTraitKey TVar7;
  _TraitWritingModifier _Var8;
  ModifiedContent MVar9;
  _TraitWritingModifier _Var10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = *(undefined **)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  iVar4 = 1;
  FUN_100bf158c(1,0x1a,0,0);
  if (iVar4 == 0) {
    TVar7 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
    puVar14 = PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_100eaaa30;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI__TagValueTraitKey<undefined>_>SwiftUI___ViewTraitKey_100eaaa30,
               TVar7.unknown);
    _Var8 = SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
    MVar9 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    OVar3 = Swift::Optional::typeMetadataAccessor();
    local_58 = uVar2;
    _swift_getWitnessTable
              (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Hashable>_A____Swift_Hashable_in_Swift_>Swift__Hashable_100eae0a0
               ,OVar3.value,&local_58);
    TVar7 = SwiftUI::TagValueTraitKey::typeMetadataAccessor();
    _swift_getWitnessTable(puVar14,TVar7.unknown);
    _Var10 = SwiftUI::_TraitWritingModifier::typeMetadataAccessor();
    MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar13 = 
    PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8;
    puVar11 = 
    PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
               ,_Var8.unknown);
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    puVar12 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    local_68 = puVar1;
    puStack_60 = puVar11;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               MVar9.unknown,&local_68);
    _swift_getWitnessTable(puVar13,_Var10.unknown);
    ppuVar15 = &local_78;
    local_78 = puVar12;
    puStack_70 = puVar13;
  }
  else {
    _Var5 = SwiftUI::_TagTraitWritingModifier::typeMetadataAccessor();
    MVar6 = SwiftUI::ModifiedContent::typeMetadataAccessor();
    puVar13 = 
    PTR_SwiftUI__SwiftUI___TagTraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab018;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI___TagTraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab018
               ,_Var5.unknown);
    ppuVar15 = &local_50;
    puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    local_50 = puVar1;
    puStack_48 = puVar13;
  }
  _swift_getWitnessTable(puVar14,MVar6.unknown,ppuVar15);
  return;
}



/* Address: 0x100002f10 | FUN_100002f10 */

void FUN_100002f10(void)

{
  (extension_Foundation)::__int64::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100002f18 | FUN_100002f18 */

/* WARNING: Removing unreachable block (ram,0x000100002f50) */

void FUN_100002f18(NSNumber *param_1,undefined8 *param_2)

{
  (extension_Foundation)::__int64::__forceBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  return;
}



/* Address: 0x100002f6c | FUN_100002f6c */

/* WARNING: Removing unreachable block (ram,0x000100002fa4) */

bool FUN_100002f6c(NSNumber *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = (extension_Foundation)::__int64::__conditionallyBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  *(undefined1 *)(param_2 + 1) = 1;
  return bVar1;
}



/* Address: 0x100002fc4 | FUN_100002fc4 */

void FUN_100002fc4(__int64 *param_1)

{
  __int64 _Var1;
  
  _Var1 = (extension_Foundation)::__int64::__unconditionallyBridgeFromObjectiveC();
  *param_1 = _Var1;
  return;
}



/* Address: 0x100002fe8 | FUN_100002fe8 */

void FUN_100002fe8(undefined8 *param_1)

{
  *param_1 = 0;
  return;
}



/* Address: 0x100002ff0 | FUN_100002ff0 */

void FUN_100002ff0(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}



/* Address: 0x100003004 | FUN_100003004 */

void FUN_100003004(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 ^ *param_2;
  return;
}



/* Address: 0x100003018 | FUN_100003018 */

bool FUN_100003018(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  return (uVar1 & (uVar2 ^ 0xffffffffffffffff)) != 0;
}



/* Address: 0x100003038 | FUN_100003038 */

void FUN_100003038(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20 & *param_2;
  if (uVar1 != 0) {
    *unaff_x20 = *unaff_x20 & (*param_2 ^ 0xffffffffffffffff);
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 == 0;
  return;
}



/* Address: 0x100003068 | FUN_100003068 */

void FUN_100003068(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = *unaff_x20;
  *unaff_x20 = uVar2 | uVar1;
  uVar2 = uVar2 & uVar1;
  *param_1 = uVar2;
  *(bool *)(param_1 + 1) = uVar2 == 0;
  return;
}



/* Address: 0x10000308c | FUN_10000308c */

void FUN_10000308c(ulong *param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 | *param_1;
  return;
}



/* Address: 0x1000030a0 | FUN_1000030a0 */

void FUN_1000030a0(ulong *param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 ^ *param_1;
  return;
}



/* Address: 0x1000030b4 | FUN_1000030b4 */

void FUN_1000030b4(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 & (*param_2 ^ 0xffffffffffffffff);
  return;
}



/* Address: 0x1000030c8 | FUN_1000030c8 */

bool FUN_1000030c8(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*unaff_x20 & *param_1) == 0;
}



/* Address: 0x1000030dc | FUN_1000030dc */

bool FUN_1000030dc(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}



/* Address: 0x1000030f0 | FUN_1000030f0 */

bool FUN_1000030f0(void)

{
  long *unaff_x20;
  
  return *unaff_x20 == 0;
}



/* Address: 0x100003100 | FUN_100003100 */

void FUN_100003100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (extension_Swift)::Swift::SetAlgebra::_init(param_1,param_4,param_2,param_5,param_3);
  return;
}



/* Address: 0x100003118 | FUN_100003118 */

void FUN_100003118(ulong *param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & (*param_1 ^ 0xffffffffffffffff);
  return;
}



/* Address: 0x10000312c | FUN_10000312c */

bool FUN_10000312c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x100003140 | FUN_100003140 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100003140(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x100003148 | thunk_FUN_100003154 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100003190) */

void thunk_FUN_100003154(NSString *param_1,undefined8 *param_2)

{
  (extension_Foundation)::Swift::String::__forceBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return;
}



/* Address: 0x10000314c | thunk_FUN_1000031c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100003208) */

bool thunk_FUN_1000031c8(NSString *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = (extension_Foundation)::Swift::String::__conditionallyBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return bVar1;
}



/* Address: 0x100003150 | thunk_FUN_100003244 */

void thunk_FUN_100003244(undefined8 *param_1)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  *param_1 = pNVar1;
  return;
}



/* Address: 0x100003154 | FUN_100003154 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100003190) */

void FUN_100003154(NSString *param_1,undefined8 *param_2)

{
  (extension_Foundation)::Swift::String::__forceBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return;
}



/* Address: 0x1000031c8 | FUN_1000031c8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100003208) */

bool FUN_1000031c8(NSString *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = (extension_Foundation)::Swift::String::__conditionallyBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return bVar1;
}



/* Address: 0x100003244 | FUN_100003244 */

void FUN_100003244(undefined8 *param_1)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  *param_1 = pNVar1;
  return;
}



/* Address: 0x100003284 | FUN_100003284 */

void FUN_100003284(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100003290 | FUN_100003290 */

void FUN_100003290(ulong *param_1,ulong *param_2)

{
  ulong *unaff_x20;
  
  *param_1 = *unaff_x20 & *param_2;
  return;
}



/* Address: 0x1000032a4 | FUN_1000032a4 */

void FUN_1000032a4(ulong *param_1)

{
  ulong *unaff_x20;
  
  *unaff_x20 = *unaff_x20 & *param_1;
  return;
}



/* Address: 0x1000032b8 | FUN_1000032b8 */

bool FUN_1000032b8(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*unaff_x20 & (*param_1 ^ 0xffffffffffffffff)) == 0;
}



/* Address: 0x1000032cc | FUN_1000032cc */

void FUN_1000032cc(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  byte bVar41;
  byte bVar43;
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined8 uVar42;
  byte bVar49;
  byte bVar50;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  undefined8 uVar51;
  byte bVar58;
  byte bVar59;
  byte bVar61;
  byte bVar62;
  byte bVar63;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  undefined8 uVar60;
  byte bVar67;
  byte bVar68;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  undefined8 uVar69;
  byte bVar76;
  undefined8 uVar77;
  undefined8 uVar78;
  undefined8 uVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 8) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffff8;
      puVar6 = (undefined8 *)(param_2 + 0x50);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar42 = 0;
      uVar51 = 0;
      uVar60 = 0;
      uVar69 = 0;
      uVar7 = uVar4;
      do {
        uVar78 = puVar6[-5];
        uVar77 = puVar6[-6];
        uVar80 = puVar6[-3];
        uVar79 = puVar6[-4];
        uVar82 = puVar6[-1];
        uVar81 = puVar6[-2];
        uVar84 = puVar6[1];
        uVar83 = *puVar6;
        bVar8 = (byte)uVar77 | bVar8;
        bVar9 = (byte)((ulong)uVar77 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar77 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar77 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar77 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar77 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar77 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar77 >> 0x38) | bVar15;
        bVar16 = (byte)uVar78 | bVar16;
        bVar17 = (byte)((ulong)uVar78 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar78 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar78 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar78 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar78 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar78 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar78 >> 0x38) | bVar23;
        bVar24 = (byte)uVar79 | bVar24;
        bVar26 = (byte)((ulong)uVar79 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar79 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar79 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar79 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar79 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar79 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar79 >> 0x38) | bVar32;
        bVar33 = (byte)uVar80 | bVar33;
        bVar34 = (byte)((ulong)uVar80 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar80 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar80 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar80 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar80 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar80 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar80 >> 0x38) | bVar40;
        bVar41 = (byte)uVar81 | (byte)uVar42;
        bVar43 = (byte)((ulong)uVar81 >> 8) | (byte)((ulong)uVar42 >> 8);
        bVar44 = (byte)((ulong)uVar81 >> 0x10) | (byte)((ulong)uVar42 >> 0x10);
        bVar45 = (byte)((ulong)uVar81 >> 0x18) | (byte)((ulong)uVar42 >> 0x18);
        bVar46 = (byte)((ulong)uVar81 >> 0x20) | (byte)((ulong)uVar42 >> 0x20);
        bVar47 = (byte)((ulong)uVar81 >> 0x28) | (byte)((ulong)uVar42 >> 0x28);
        bVar48 = (byte)((ulong)uVar81 >> 0x30) | (byte)((ulong)uVar42 >> 0x30);
        bVar49 = (byte)((ulong)uVar81 >> 0x38) | (byte)((ulong)uVar42 >> 0x38);
        uVar42 = CONCAT17(bVar49,CONCAT16(bVar48,CONCAT15(bVar47,CONCAT14(bVar46,CONCAT13(bVar45,
                                                  CONCAT12(bVar44,CONCAT11(bVar43,bVar41)))))));
        bVar50 = (byte)uVar82 | (byte)uVar51;
        bVar52 = (byte)((ulong)uVar82 >> 8) | (byte)((ulong)uVar51 >> 8);
        bVar53 = (byte)((ulong)uVar82 >> 0x10) | (byte)((ulong)uVar51 >> 0x10);
        bVar54 = (byte)((ulong)uVar82 >> 0x18) | (byte)((ulong)uVar51 >> 0x18);
        bVar55 = (byte)((ulong)uVar82 >> 0x20) | (byte)((ulong)uVar51 >> 0x20);
        bVar56 = (byte)((ulong)uVar82 >> 0x28) | (byte)((ulong)uVar51 >> 0x28);
        bVar57 = (byte)((ulong)uVar82 >> 0x30) | (byte)((ulong)uVar51 >> 0x30);
        bVar58 = (byte)((ulong)uVar82 >> 0x38) | (byte)((ulong)uVar51 >> 0x38);
        uVar51 = CONCAT17(bVar58,CONCAT16(bVar57,CONCAT15(bVar56,CONCAT14(bVar55,CONCAT13(bVar54,
                                                  CONCAT12(bVar53,CONCAT11(bVar52,bVar50)))))));
        bVar59 = (byte)uVar83 | (byte)uVar60;
        bVar61 = (byte)((ulong)uVar83 >> 8) | (byte)((ulong)uVar60 >> 8);
        bVar62 = (byte)((ulong)uVar83 >> 0x10) | (byte)((ulong)uVar60 >> 0x10);
        bVar63 = (byte)((ulong)uVar83 >> 0x18) | (byte)((ulong)uVar60 >> 0x18);
        bVar64 = (byte)((ulong)uVar83 >> 0x20) | (byte)((ulong)uVar60 >> 0x20);
        bVar65 = (byte)((ulong)uVar83 >> 0x28) | (byte)((ulong)uVar60 >> 0x28);
        bVar66 = (byte)((ulong)uVar83 >> 0x30) | (byte)((ulong)uVar60 >> 0x30);
        bVar67 = (byte)((ulong)uVar83 >> 0x38) | (byte)((ulong)uVar60 >> 0x38);
        uVar60 = CONCAT17(bVar67,CONCAT16(bVar66,CONCAT15(bVar65,CONCAT14(bVar64,CONCAT13(bVar63,
                                                  CONCAT12(bVar62,CONCAT11(bVar61,bVar59)))))));
        bVar68 = (byte)uVar84 | (byte)uVar69;
        bVar70 = (byte)((ulong)uVar84 >> 8) | (byte)((ulong)uVar69 >> 8);
        bVar71 = (byte)((ulong)uVar84 >> 0x10) | (byte)((ulong)uVar69 >> 0x10);
        bVar72 = (byte)((ulong)uVar84 >> 0x18) | (byte)((ulong)uVar69 >> 0x18);
        bVar73 = (byte)((ulong)uVar84 >> 0x20) | (byte)((ulong)uVar69 >> 0x20);
        bVar74 = (byte)((ulong)uVar84 >> 0x28) | (byte)((ulong)uVar69 >> 0x28);
        bVar75 = (byte)((ulong)uVar84 >> 0x30) | (byte)((ulong)uVar69 >> 0x30);
        bVar76 = (byte)((ulong)uVar84 >> 0x38) | (byte)((ulong)uVar69 >> 0x38);
        uVar69 = CONCAT17(bVar76,CONCAT16(bVar75,CONCAT15(bVar74,CONCAT14(bVar73,CONCAT13(bVar72,
                                                  CONCAT12(bVar71,CONCAT11(bVar70,bVar68)))))));
        puVar6 = puVar6 + 8;
        uVar7 = uVar7 - 8;
      } while (uVar7 != 0);
      bVar59 = bVar59 | bVar41 | bVar24 | bVar8;
      bVar61 = bVar61 | bVar43 | bVar26 | bVar9;
      bVar62 = bVar62 | bVar44 | bVar27 | bVar10;
      bVar63 = bVar63 | bVar45 | bVar28 | bVar11;
      bVar64 = bVar64 | bVar46 | bVar29 | bVar12;
      bVar65 = bVar65 | bVar47 | bVar30 | bVar13;
      bVar66 = bVar66 | bVar48 | bVar31 | bVar14;
      bVar67 = bVar67 | bVar49 | bVar32 | bVar15;
      bVar68 = bVar68 | bVar50 | bVar33 | bVar16;
      bVar70 = bVar70 | bVar52 | bVar34 | bVar17;
      bVar71 = bVar71 | bVar53 | bVar35 | bVar18;
      bVar72 = bVar72 | bVar54 | bVar36 | bVar19;
      bVar73 = bVar73 | bVar55 | bVar37 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar38 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar39 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar40 | bVar23;
      auVar25[1] = bVar61;
      auVar25[0] = bVar59;
      auVar25[2] = bVar62;
      auVar25[3] = bVar63;
      auVar25[4] = bVar64;
      auVar25[5] = bVar65;
      auVar25[6] = bVar66;
      auVar25[7] = bVar67;
      auVar25[8] = bVar68;
      auVar25[9] = bVar70;
      auVar25[10] = bVar71;
      auVar25[0xb] = bVar72;
      auVar25[0xc] = bVar73;
      auVar25[0xd] = bVar74;
      auVar25[0xe] = bVar75;
      auVar25[0xf] = bVar76;
      auVar1[1] = bVar61;
      auVar1[0] = bVar59;
      auVar1[2] = bVar62;
      auVar1[3] = bVar63;
      auVar1[4] = bVar64;
      auVar1[5] = bVar65;
      auVar1[6] = bVar66;
      auVar1[7] = bVar67;
      auVar1[8] = bVar68;
      auVar1[9] = bVar70;
      auVar1[10] = bVar71;
      auVar1[0xb] = bVar72;
      auVar1[0xc] = bVar73;
      auVar1[0xd] = bVar74;
      auVar1[0xe] = bVar75;
      auVar1[0xf] = bVar76;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar67 | auVar25[7],
                       CONCAT16(bVar66 | auVar25[6],
                                CONCAT15(bVar65 | auVar25[5],
                                         CONCAT14(bVar64 | auVar25[4],
                                                  CONCAT13(bVar63 | auVar25[3],
                                                           CONCAT12(bVar62 | auVar25[2],
                                                                    CONCAT11(bVar61 | auVar25[1],
                                                                             bVar59 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10000337c;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10000337c:
  _swift_bridgeObjectRelease();
  *param_1 = uVar7;
  return;
}



/* Address: 0x100003390 | FUN_100003390 */

void FUN_100003390(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Address: 0x10000339c | FUN_10000339c */

void FUN_10000339c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x1000033ac | FUN_1000033ac */

void FUN_1000033ac(void)

{
  FUN_100003a00(&DAT_100fa6540,FUN_100003c60,&TargetProtocolConformanceDescriptor_100c22c7c);
  FUN_100003a00(&DAT_100fa6548,FUN_100003c60,&TargetProtocolConformanceDescriptor_100c22c1c);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x100003440 | FUN_100003440 */

void FUN_100003440(void)

{
  FUN_100003a00(&DAT_100fa8660,FUN_100003980,&TargetProtocolConformanceDescriptor_100c2262c);
  FUN_100003a00(&DAT_100fa64b0,FUN_100003980,&TargetProtocolConformanceDescriptor_100c225cc);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1000034c4 | thunk_FUN_100003574 */

void thunk_FUN_100003574(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  NSString *pNVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = pNVar2;
  return;
}



/* Address: 0x1000034c8 | FUN_1000034c8 */

void FUN_1000034c8(String *param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  return;
}



/* Address: 0x1000034f0 | FUN_1000034f0 */

void FUN_1000034f0(void)

{
  FUN_100003a00(&DAT_100fa6500,FUN_100003b1c,&TargetProtocolConformanceDescriptor_100c22af8);
  FUN_100003a00(&DAT_100fa6508,FUN_100003b1c,&TargetProtocolConformanceDescriptor_100c22a98);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x100003574 | FUN_100003574 */

void FUN_100003574(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  NSString *pNVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 8);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = pNVar2;
  return;
}



/* Address: 0x1000035b8 | FUN_1000035b8 */

void FUN_1000035b8(void)

{
  FUN_100003a00(&DAT_100fa6510,FUN_100003b30,&TargetProtocolConformanceDescriptor_100c229a0);
  FUN_100003a00(&DAT_100fa6518,FUN_100003b30,&TargetProtocolConformanceDescriptor_100c22940);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x10000363c | FUN_10000363c */

void FUN_10000363c(void)

{
  __int64 *unaff_x20;
  
  __int64::get_hashValue(*unaff_x20);
  return;
}



/* Address: 0x100003644 | FUN_100003644 */

void FUN_100003644(undefined8 param_1,Hasher param_2)

{
  __uint64 *unaff_x20;
  
  Swift::Hasher::_combine(*unaff_x20,param_2);
  return;
}



/* Address: 0x10000366c | FUN_10000366c */

void FUN_10000366c(__int64 param_1,undefined8 param_2,Hasher param_3)

{
  __uint64 *unaff_x20;
  
  Swift::Hasher::_hash(param_1,*unaff_x20,param_3);
  return;
}



/* Address: 0x100003674 | thunk_FUN_100003680 */

__int64 thunk_FUN_100003680(void)

{
  __int64 _Var1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var1 = Swift::String::get_hashValue(SVar2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return _Var1;
}



/* Address: 0x100003678 | thunk_FUN_1000036b8 */

void thunk_FUN_1000036b8(Hasher param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::String::hash(param_1,SVar1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x10000367c | thunk_FUN_1000036f8 */

__int64 thunk_FUN_1000036f8(__int64 param_1)

{
  Hasher into;
  __int64 _Var1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(param_1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return _Var1;
}



/* Address: 0x100003680 | FUN_100003680 */

__int64 FUN_100003680(void)

{
  __int64 _Var1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var1 = Swift::String::get_hashValue(SVar2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return _Var1;
}



/* Address: 0x1000036b8 | FUN_1000036b8 */

void FUN_1000036b8(Hasher param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::String::hash(param_1,SVar1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x1000036f8 | FUN_1000036f8 */

__int64 FUN_1000036f8(__int64 param_1)

{
  Hasher into;
  __int64 _Var1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(param_1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return _Var1;
}



/* Address: 0x100003768 | thunk_FUN_10000376c */

bool thunk_FUN_10000376c(void)

{
  bool bVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar2 == SVar3) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar2.str,(_StringGuts)SVar2.bridgeObject,
                       (_StringComparisonResult)(__int8)SVar3.str);
  }
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return bVar1;
}



/* Address: 0x10000376c | FUN_10000376c */

bool FUN_10000376c(void)

{
  bool bVar1;
  String SVar2;
  String SVar3;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar2 == SVar3) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar2.str,(_StringGuts)SVar2.bridgeObject,
                       (_StringComparisonResult)(__int8)SVar3.str);
  }
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return bVar1;
}



/* Address: 0x1000037f0 | FUN_1000037f0 */

void FUN_1000037f0(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext2(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100003840 | FUN_100003840 */

void FUN_100003840(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10000384c | FUN_10000384c */

void FUN_10000384c(void)

{
  return;
}



/* Address: 0x100003850 | FUN_100003850 */

void FUN_100003850(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6440,&DAT_100eaf940);
  return;
}



/* Address: 0x100003864 | FUN_100003864 */

int FUN_100003864(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100003884 | FUN_100003884 */

void FUN_100003884(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 2) = uVar1;
  return;
}



/* Address: 0x1000038ac | FUN_1000038ac */

void FUN_1000038ac(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6448,&DAT_100eaf9c0);
  return;
}



/* Address: 0x1000038c0 | FUN_1000038c0 */

void FUN_1000038c0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6450,&DAT_100eaf9e8);
  return;
}


