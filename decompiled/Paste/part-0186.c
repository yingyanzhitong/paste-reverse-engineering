/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10021fb34 | FUN_10021fb34 */

undefined8 * FUN_10021fb34(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  KeyEquivalent KVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 2) {
    uVar3 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar3;
    _swift_bridgeObjectRetain();
    uVar3 = 2;
  }
  else {
    if ((int)puVar2 != 0) {
      puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar2;
    }
    KVar1 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
    (**(code **)(*(long *)(KVar1.unknown + -8) + 0x10))(param_1,param_2,KVar1.unknown);
    uVar3 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  return param_1;
}



/* Address: 0x10021fbe8 | FUN_10021fbe8 */

undefined8 * FUN_10021fbe8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  KeyEquivalent KVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10021fcb4(param_1);
    puVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar2 == 2) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      uVar3 = 2;
    }
    else {
      if ((int)puVar2 != 0) {
        puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
        return puVar2;
      }
      KVar1 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
      (**(code **)(*(long *)(KVar1.unknown + -8) + 0x10))(param_1,param_2,KVar1.unknown);
      uVar3 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar3);
  }
  return param_1;
}



/* Address: 0x10021fcb4 | FUN_10021fcb4 */

undefined8 FUN_10021fcb4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10021fcf0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10021fcf0 | FUN_10021fcf0 */

void FUN_10021fcf0(undefined8 param_1)

{
  if (DAT_100fb7488 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100ca8888);
  return;
}



/* Address: 0x10021fd28 | FUN_10021fd28 */

void * FUN_10021fd28(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  KeyEquivalent KVar2;
  
  pvVar1 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar1 != 0) {
    pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar1;
  }
  KVar2 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
  (**(code **)(*(long *)(KVar2.unknown + -8) + 0x20))(param_1,param_2,KVar2.unknown);
  _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  return param_1;
}



/* Address: 0x10021fdb8 | FUN_10021fdb8 */

void * FUN_10021fdb8(void *param_1,void *param_2,long param_3)

{
  void *pvVar1;
  KeyEquivalent KVar2;
  
  if (param_1 != param_2) {
    FUN_10021fcb4(param_1);
    pvVar1 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar1 != 0) {
      pvVar1 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar1;
    }
    KVar2 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
    (**(code **)(*(long *)(KVar2.unknown + -8) + 0x20))(param_1,param_2,KVar2.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,0);
  }
  return param_1;
}



/* Address: 0x10021fe58 | FUN_10021fe58 */

undefined1  [16] FUN_10021fe58(undefined8 param_1,ulong param_2)

{
  KeyEquivalent KVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  KVar1 = SwiftUI::KeyEquivalent::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_38 = *(long *)(KVar1.unknown + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_28 = &DAT_100c36b98;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_38);
    KVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = KVar1.unknown;
  return auVar3;
}



/* Address: 0x10021fed4 | thunk_FUN_10021fed8 */

undefined8 * thunk_FUN_10021fed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10021fed8 | FUN_10021fed8 */

undefined8 * FUN_10021fed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10021ff34 | thunk_FUN_1000d0cf0 */

void thunk_FUN_1000d0cf0(void)

{
  FUN_1000d0cf0();
  return;
}



/* Address: 0x10021ff38 | thunk_FUN_1000d0d2c */

int thunk_FUN_1000d0d2c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10021ff3c | thunk_FUN_1000d0d74 */

void thunk_FUN_1000d0d74(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10021ff40 | FUN_10021ff40 */

undefined1  [16] FUN_10021ff40(void)

{
  return ZEXT816(0x100ec2600);
}



/* Address: 0x10021ff50 | FUN_10021ff50 */

undefined1  [16] FUN_10021ff50(void)

{
  return ZEXT816(0x100ec2698);
}



/* Address: 0x10021ff60 | thunk_FUN_10021ff64 */

void thunk_FUN_10021ff64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb74c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7310;
  FUN_100005c24(&DAT_100fb7310,&DAT_100c36a28);
  puVar2 = puVar1;
  FUN_10021ffdc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb74c0 = puVar3;
  return;
}



/* Address: 0x10021ff64 | FUN_10021ff64 */

void FUN_10021ff64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb74c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7310;
  FUN_100005c24(&DAT_100fb7310,&DAT_100c36a28);
  puVar2 = puVar1;
  FUN_10021ffdc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb74c0 = puVar3;
  return;
}



/* Address: 0x10021ffdc | FUN_10021ffdc */

void FUN_10021ffdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb74c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7308;
  FUN_100005c24(&DAT_100fb7308,&DAT_100c36a20);
  puVar2 = &DAT_100fb74d0;
  FUN_100220154(&DAT_100fb74d0,&DAT_100fb7300,&DAT_100c36a18);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb74c8 = puVar3;
  return;
}



/* Address: 0x10022006c | FUN_10022006c */

void FUN_10022006c(undefined8 param_1)

{
  FUN_1002201ec(param_1,&DAT_100ec2580,FUN_100220080);
  return;
}



/* Address: 0x100220080 | FUN_100220080 */

void FUN_100220080(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb74d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36a40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36a40,&DAT_100ec2580);
  DAT_100fb74d8 = pTVar1;
  return;
}



/* Address: 0x1002200c0 | thunk_FUN_1002200c4 */

void thunk_FUN_1002200c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb74e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7330;
  FUN_100005c24(&DAT_100fb7330,&DAT_100c36a38);
  puVar2 = &DAT_100fb74e8;
  FUN_100220154(&DAT_100fb74e8,&DAT_100fb7328,&DAT_100c36a30);
  puVar3 = puVar2;
  FUN_100220198();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb74e0 = puVar4;
  return;
}



/* Address: 0x1002200c4 | FUN_1002200c4 */

void FUN_1002200c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb74e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb7330;
  FUN_100005c24(&DAT_100fb7330,&DAT_100c36a38);
  puVar2 = &DAT_100fb74e8;
  FUN_100220154(&DAT_100fb74e8,&DAT_100fb7328,&DAT_100c36a30);
  puVar3 = puVar2;
  FUN_100220198();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb74e0 = puVar4;
  return;
}



/* Address: 0x100220154 | FUN_100220154 */

void FUN_100220154(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    puVar1 = PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8;
    _swift_getWitnessTable
              (PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8,
               param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100220198 | FUN_100220198 */

void FUN_100220198(void)

{
  undefined *puVar1;
  
  if (DAT_100fb74f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI___HoverRegionModifier_>SwiftUI__ViewModifier_100eaae18;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI___HoverRegionModifier_>SwiftUI__ViewModifier_100eaae18,
             PTR___type_metadata_for_SwiftUI__HoverRegionModifier_100eaae28);
  DAT_100fb74f0 = puVar1;
  return;
}



/* Address: 0x1002201d8 | FUN_1002201d8 */

void FUN_1002201d8(undefined8 param_1)

{
  FUN_1002201ec(param_1,&DAT_100ec2600,FUN_100220248);
  return;
}



/* Address: 0x1002201ec | FUN_1002201ec */

void FUN_1002201ec(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  ModifiedContent MVar2;
  ModifiedContent MVar3;
  undefined8 local_40;
  undefined *puStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  MVar3 = MVar2;
  (*param_3)();
  local_40 = uVar1;
  puStack_38 = MVar3.unknown;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar2.unknown,&local_40);
  return;
}



/* Address: 0x100220248 | FUN_100220248 */

void FUN_100220248(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb74f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c36af8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c36af8,&DAT_100ec2600);
  DAT_100fb74f8 = pTVar1;
  return;
}



/* Address: 0x100220288 | FUN_100220288 */

void FUN_100220288(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002202b4 | FUN_1002202b4 */

ID FUN_1002202b4(ID param_1,code *param_2)

{
  ID IVar1;
  EventModifiers EVar2;
  EventModifiers EVar3;
  ulong rawValue;
  long lVar4;
  ulong *puVar5;
  
  IVar1 = objc_stub::modifierFlags(param_1);
  EVar2 = SwiftUI::EventModifiers::init(0);
  if (DAT_100fb7318 != -1) {
    _swift_once(&DAT_100fb7318,FUN_10021f89c);
  }
  lVar4 = *(long *)(DAT_100fb7320 + 0x10);
  if (lVar4 != 0) {
    puVar5 = (ulong *)(DAT_100fb7320 + 0x28);
    do {
      if ((puVar5[-1] & (IVar1 ^ 0xffffffffffffffff)) == 0) {
        rawValue = *puVar5;
        EVar3 = SwiftUI::EventModifiers::init(rawValue);
        SwiftUI::EventModifiers::init((ulong)EVar3.unknown & (ulong)EVar2.unknown);
        EVar2 = SwiftUI::EventModifiers::init(rawValue | (ulong)EVar2.unknown);
      }
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  (*param_2)(EVar2.unknown);
  return param_1;
}



/* Address: 0x10022038c | FUN_10022038c */

undefined8 FUN_10022038c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10021fcf0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002203d0 | FUN_1002203d0 */

undefined8 FUN_1002203d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10021fcf0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100220414 | thunk_FUN_10021f92c */

void thunk_FUN_10021f92c(void)

{
  FUN_10021f92c();
  return;
}



/* Address: 0x100220418 | thunk_FUN_1000d0c30 */

void thunk_FUN_1000d0c30(void)

{
  FUN_1000d0c30();
  return;
}



/* Address: 0x10022041c | thunk_FUN_1000d0d74 */

void thunk_FUN_1000d0d74(void)

{
  thunk_FUN_1000d0d74();
  return;
}



/* Address: 0x100220420 | thunk_FUN_10021f97c */

void thunk_FUN_10021f97c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10021f454(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100220424 | thunk_FUN_10021e80c */

void thunk_FUN_10021e80c(void)

{
  long unaff_x20;
  
  FUN_10021e830(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x30,
                FUN_10021e404);
  return;
}



/* Address: 0x100220428 | thunk_FUN_10021e910 */

void thunk_FUN_10021e910(void)

{
  long unaff_x20;
  
  FUN_10021e830(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x31,
                FUN_10021e5ac);
  return;
}



/* Address: 0x10022042c | thunk_FUN_10021fed8 */

void thunk_FUN_10021fed8(void)

{
  thunk_FUN_10021fed8();
  return;
}



/* Address: 0x100220430 | thunk_FUN_1000d0cf0 */

void thunk_FUN_1000d0cf0(void)

{
  FUN_1000d0cf0();
  return;
}



/* Address: 0x100220434 | thunk_FUN_1000d0d2c */

void thunk_FUN_1000d0d2c(void)

{
  thunk_FUN_1000d0d2c();
  return;
}



/* Address: 0x100220438 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x10022043c | thunk_FUN_10021f36c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010021f38c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] thunk_FUN_10021f36c(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  FUN_10021e6dc();
  SwiftUI::State::init(&uStack_20,param_1,param_1);
  auVar1._8_8_ = uStack_18;
  auVar1._0_8_ = uStack_20;
  return auVar1;
}



/* Address: 0x100220440 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100220444 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100220448 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x10022044c | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100220450 | _TtC7PasteUI24AdaptiveTooltipTextField::toolTip */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PasteUI24AdaptiveTooltipTextField::toolTip(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  NSString *pNVar7;
  String SVar8;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveTooltipTextField.swift",0x26,1,8,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  IVar6 = _objc_msgSendSuper2(&local_50,"toolTip");
  if (IVar6 == 0) {
    _swift_release(pMVar3);
    pNVar7 = (NSString *)0x0;
  }
  else {
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_release(pMVar3);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
  }
  return (ID)pNVar7;
}



/* Address: 0x100220570 | FUN_100220570 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100220570(void)

{
  ID IVar1;
  String SVar2;
  
  _swift_getObjectType();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"toolTip");
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x1002205ec | _TtC7PasteUI24AdaptiveTooltipTextField::setToolTip: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PasteUI24AdaptiveTooltipTextField::setToolTip_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveTooltipTextField.swift",0x26,1,8,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    SVar5 = (String)(ZEXT816(0) << 0x40);
  }
  else {
    SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1002206bc(SVar5.str,SVar5.bridgeObject);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1002206bc | FUN_1002206bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002206bc(undefined8 param_1,long param_2)

{
  String *pSVar1;
  NSString *pNVar2;
  ID IVar3;
  long unaff_x20;
  String SVar4;
  
  _swift_getObjectType();
  if (param_2 == 0) {
    pNVar2 = (NSString *)0x0;
  }
  else {
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(param_2);
  }
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"setToolTip:",pNVar2);
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"toolTip");
  if (IVar3 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pSVar1 = (String *)(unaff_x20 + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip);
  *pSVar1 = SVar4;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  FUN_10022079c();
  return;
}



/* Address: 0x10022079c | FUN_10022079c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10022079c(undefined8 param_1,double param_2,double param_3,double param_4)

{
  String *pSVar1;
  _StringGuts _Var2;
  String SVar3;
  bool bVar4;
  ID IVar5;
  NSString *pNVar6;
  undefined *puVar7;
  ID unaff_x20;
  _StringGuts _Var8;
  void *pvVar9;
  double extraout_d0;
  String SVar10;
  
  _swift_getObjectType();
  objc_stub::bounds(unaff_x20);
  _CGRectGetWidth();
  objc_stub::setPreferredMaxLayoutWidth_(unaff_x20);
  objc_stub::fittingSize(unaff_x20);
  objc_stub::bounds(unaff_x20);
  pSVar1 = (String *)(unaff_x20 + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip);
  _Var2.unknown = pSVar1->str;
  _Var8.unknown = pSVar1->bridgeObject;
  SVar3 = *pSVar1;
  _swift_bridgeObjectRetain(_Var8.unknown);
  IVar5 = objc_stub::text(unaff_x20);
  if (IVar5 == 0) {
    if (_Var8.unknown != (undefined *)0x0) goto LAB_10022089c;
LAB_1002208b0:
    if (param_3 * param_4 < extraout_d0 * param_2) {
LAB_1002208d4:
      pvVar9 = pSVar1->bridgeObject;
      if (pvVar9 == (void *)0x0) goto LAB_100220904;
      goto LAB_1002208dc;
    }
  }
  else {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar7 = SVar10.bridgeObject;
    if (_Var8.unknown == (undefined *)0x0) {
      _Var8.unknown = puVar7;
      if (puVar7 == (undefined *)0x0) goto LAB_1002208b0;
    }
    else if (puVar7 != (undefined *)0x0) {
      if (SVar10 == SVar3) {
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar7);
        if (extraout_d0 * param_2 <= param_3 * param_4) goto LAB_100220904;
      }
      else {
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var2,_Var8,(_StringComparisonResult)(__int8)SVar10.str);
        _swift_bridgeObjectRelease(_Var8.unknown);
        _swift_bridgeObjectRelease(puVar7);
        if (bVar4) goto LAB_1002208b0;
      }
      goto LAB_1002208d4;
    }
LAB_10022089c:
    _swift_bridgeObjectRelease(_Var8.unknown);
    pvVar9 = pSVar1->bridgeObject;
    if (pvVar9 != (void *)0x0) {
LAB_1002208dc:
      _swift_bridgeObjectRetain(pvVar9);
      pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(pvVar9);
      goto LAB_100220908;
    }
  }
LAB_100220904:
  pNVar6 = (NSString *)0x0;
LAB_100220908:
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"setToolTip:",pNVar6);
  return 0;
}



/* Address: 0x10022094c | FUN_10022094c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10022094c(undefined8 *param_1)

{
  String *pSVar1;
  char *pcVar2;
  ID IVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auVar5 [16];
  
  pSVar1 = (String *)0x60;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pSVar1 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0x79f4);
  }
  *param_1 = pSVar1;
  pSVar1[5].str = unaff_x20;
  pcVar2 = unaff_x20;
  _swift_getObjectType();
  ((objc_super *)(pSVar1 + 1))->receiver = (ID)unaff_x20;
  pSVar1[5].bridgeObject = pcVar2;
  pSVar1[1].bridgeObject = pcVar2;
  IVar3 = _objc_msgSendSuper2((objc_super *)(pSVar1 + 1),"toolTip");
  if (IVar3 == 0) {
    SVar4 = (String)ZEXT816(0);
  }
  else {
    SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *pSVar1 = SVar4;
  auVar5._8_8_ = pSVar1;
  auVar5._0_8_ = FUN_100220a04;
  return auVar5;
}



/* Address: 0x100220a04 | FUN_100220a04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100220a04(undefined8 *param_1,ulong param_2)

{
  String *pSVar1;
  NSString *pNVar2;
  ID IVar3;
  void *pvVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  
  pvVar4 = (void *)*param_1;
  lVar5 = *(long *)((long)pvVar4 + 8);
  if ((param_2 & 1) == 0) {
    if (lVar5 == 0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar5);
    }
    uVar6 = *(undefined8 *)((long)pvVar4 + 0x58);
    uVar7 = *(undefined8 *)((long)pvVar4 + 0x50);
    *(undefined8 *)((long)pvVar4 + 0x38) = *(undefined8 *)((long)pvVar4 + 0x58);
    *(undefined8 *)((long)pvVar4 + 0x30) = uVar7;
    _objc_msgSendSuper2((objc_super *)((long)pvVar4 + 0x30),"setToolTip:",pNVar2);
    *(undefined8 *)((long)pvVar4 + 0x40) = uVar7;
    *(undefined8 *)((long)pvVar4 + 0x48) = uVar6;
    IVar3 = _objc_msgSendSuper2((objc_super *)((long)pvVar4 + 0x40),"toolTip");
    if (IVar3 == 0) {
      SVar8 = (String)ZEXT816(0);
    }
    else {
      SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    pSVar1 = (String *)
             (*(long *)((long)pvVar4 + 0x50) + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip
             );
    *pSVar1 = SVar8;
    _swift_bridgeObjectRelease(pSVar1->bridgeObject);
    FUN_10022079c();
  }
  else {
    if (lVar5 == 0) {
      pNVar2 = (NSString *)0x0;
    }
    else {
      _swift_bridgeObjectRetain(lVar5);
      pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(lVar5);
    }
    *(undefined8 *)((long)pvVar4 + 0x28) = *(undefined8 *)((long)pvVar4 + 0x58);
    *(undefined8 *)((long)pvVar4 + 0x20) = *(undefined8 *)((long)pvVar4 + 0x50);
    _objc_msgSendSuper2((objc_super *)((long)pvVar4 + 0x20),"setToolTip:",pNVar2);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)pvVar4 + 8));
  }
  _free(pvVar4);
  return;
}



/* Address: 0x100220b60 | FUN_100220b60 */

void FUN_100220b60(void)

{
  long unaff_x20;
  
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"layout");
  if (*(long *)(unaff_x20 + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip + 8) != 0) {
    FUN_10022079c();
  }
  return;
}



/* Address: 0x100220bac | _TtC7PasteUI24AdaptiveTooltipTextField::layout */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI24AdaptiveTooltipTextField::layout(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1001f7290();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveTooltipTextField.swift",0x26,1,0xf,UVar4.unknown,pMVar2);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar1;
  _objc_msgSendSuper2(&local_50,"layout");
  if (*(long *)(param_1 + storedToolTip + 8) != 0) {
    FUN_10022079c();
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x100220c90 | FUN_100220c90 */

void FUN_100220c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip);
  *puVar1 = 0;
  puVar1[1] = 0;
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",param_1,param_2,
                      param_3,param_4);
  return;
}



/* Address: 0x100220d04 | _TtC7PasteUI24AdaptiveTooltipTextField::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC7PasteUI24AdaptiveTooltipTextField::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_70;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType
            (param_1,param_2,param_3.field0_0x0.field0_0x0,param_3.field0_0x0.field1_0x8,
             param_3.field1_0x10.field0_0x0,param_3.field1_0x10.field1_0x8);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001f7290();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveTooltipTextField.swift",0x26,1,5,UVar5.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + storedToolTip);
  *puVar1 = 0;
  puVar1[1] = 0;
  local_70.receiver = param_1;
  local_70.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_70,"initWithFrame:");
  _swift_release(pMVar4);
  return IVar7;
}



/* Address: 0x100220dfc | FUN_100220dfc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100220dfc(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  long unaff_x20;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PasteUI24AdaptiveTooltipTextField::storedToolTip);
  *puVar1 = 0;
  puVar1[1] = 0;
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithCoder:",param_1);
  return IVar2;
}



/* Address: 0x100220e7c | _TtC7PasteUI24AdaptiveTooltipTextField::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI24AdaptiveTooltipTextField::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1001f7290();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/AdaptiveTooltipTextField.swift",0x26,1,5,UVar5.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + storedToolTip);
  *puVar1 = 0;
  puVar1[1] = 0;
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  IVar7 = _objc_msgSendSuper2(&local_50,"initWithCoder:",param_3);
  _swift_release(pMVar4);
  return IVar7;
}



/* Address: 0x100220f78 | _TtC7PasteUI24AdaptiveTooltipTextField::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC7PasteUI24AdaptiveTooltipTextField::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + storedToolTip + 8));
  return;
}



/* Address: 0x100220f8c | FUN_100220f8c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100220f8c(void)

{
  return ZEXT816(0x100f967a0);
}



/* Address: 0x100220fac | FUN_100220fac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100220fac(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + _TtC7PasteUI20BackgroundEffectView::contentView);
}



/* Address: 0x100220fbc | FUN_100220fbc */

void FUN_100220fbc(undefined8 param_1,undefined8 param_2)

{
  _objc_allocWithZone();
  FUN_100220ffc(param_1,param_2);
  return;
}



/* Address: 0x100220ffc | FUN_100220ffc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_100220ffc(double param_1,undefined8 param_2)

{
  long lVar1;
  byte bVar2;
  undefined *puVar3;
  ID IVar4;
  ID self;
  ID self_00;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  _ArrayBuffer _Var8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  NSArray *pNVar11;
  ID IVar12;
  long unaff_x20;
  ID *pIVar13;
  
  _swift_getObjectType();
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  if ((bVar2 & 1) == 0) {
    puVar3 = &_OBJC_CLASS___NSVisualEffectView;
    _objc_allocWithZone();
    IVar4 = objc_stub::init((ID)puVar3);
    objc_stub::setMaterial_(IVar4,param_2);
    objc_stub::setBlendingMode_(IVar4,0);
    objc_stub::setState_(IVar4,1);
    if (0.0 < param_1) {
      objc_stub::setCornerRadius_curve_
                (IVar4,param_1,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
    }
  }
  else {
    puVar3 = &_OBJC_CLASS___NSView;
    _objc_allocWithZone();
    IVar4 = objc_stub::init((ID)puVar3);
  }
  *(ID *)(unaff_x20 + _TtC7PasteUI20BackgroundEffectView::contentView) = IVar4;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"initWithFrame:",0,0,0,0);
  lVar1 = _TtC7PasteUI20BackgroundEffectView::contentView;
  IVar4 = self;
  if ((bVar2 & 1) == 0) {
    IVar12 = *(ID *)(self + _TtC7PasteUI20BackgroundEffectView::contentView);
    _Var8.unknown = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_initStackObject();
    *(undefined8 *)(_Var8.unknown + 0x18) = 3;
    *(undefined8 *)(_Var8.unknown + 0x10) = 1;
    pIVar13 = (ID *)(_Var8.unknown + 0x20);
    *pIVar13 = IVar12;
    if (((ulong)_Var8.unknown & 0xc000000000000001) != 0) {
      IVar12 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var8);
    }
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
    pMVar5 = pMVar6;
    FUN_1001f7290();
    UVar7 = Swift::Actor::get_unownedExecutor();
    UVar9 = UVar7;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar9.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar7.unknown,pMVar5);
    }
    objc_stub::addSubview_(self,IVar12);
    objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar12,0);
    _swift_release(pMVar6);
    if (DAT_100fb6230 != -1) {
      _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
    }
    FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,
                  *(undefined8 *)(self + lVar1));
    puVar3 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  }
  else {
    puVar3 = &_OBJC_CLASS___NSGlassEffectView;
    _objc_allocWithZone();
    self_00 = objc_stub::init((ID)puVar3);
    objc_stub::setContentView_
              (self_00,*(undefined8 *)(self + _TtC7PasteUI20BackgroundEffectView::contentView));
    objc_stub::setCornerRadius_(self_00,param_1);
    _Var8.unknown = &DAT_100fb7040;
    FUN_1000037f0(&DAT_100fb7040,&DAT_100c34f70);
    _swift_initStackObject();
    *(undefined8 *)(_Var8.unknown + 0x18) = 3;
    *(undefined8 *)(_Var8.unknown + 0x10) = 1;
    pIVar13 = (ID *)(_Var8.unknown + 0x20);
    *pIVar13 = self_00;
    IVar12 = self_00;
    if (((ulong)_Var8.unknown & 0xc000000000000001) != 0) {
      IVar12 = 0;
      Swift::_ArrayBuffer::__getElementSlowPath(0,_Var8);
    }
    pMVar5 = Swift::MainActor::typeMetadataAccessor();
    pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
    pMVar5 = pMVar6;
    FUN_1001f7290();
    UVar7 = Swift::Actor::get_unownedExecutor();
    UVar9 = UVar7;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar9.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("PasteUI/NSView+LayoutBuilder.swift",0x22,1,0x15,UVar7.unknown,pMVar5);
    }
    objc_stub::addSubview_(self,IVar12);
    objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(IVar12,0);
    _swift_release(pMVar6);
    if (DAT_100fb6230 != -1) {
      _swift_once(&DAT_100fb6230,FUN_1001f9ff4);
    }
    FUN_100211c08(DAT_101057750,DAT_101057758,DAT_101057760,DAT_101057768,self,self_00);
    puVar3 = &DAT_100fb7ad0;
    FUN_1000037f0(&DAT_100fb7ad0,&DAT_100c36620);
  }
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar10 = &DAT_100fb7050;
  FUN_1000037f0(&DAT_100fb7050,&DAT_100c366b0);
  *(undefined **)(puVar3 + 0x38) = puVar10;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID *)(puVar3 + 0x20) = IVar4;
  puVar10 = puVar3;
  thunk_FUN_1001f9238(puVar3);
  _swift_setDeallocating(puVar3);
  FUN_100004594(puVar3 + 0x20);
  FUN_1001f91f4(0);
  pNVar11 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  NSLayoutConstraint::activateConstraints_((ID)&_OBJC_CLASS___NSLayoutConstraint,pNVar11);
  _swift_bridgeObjectRelease(puVar10);
  _swift_setDeallocating(_Var8.unknown);
  _swift_arrayDestroy(pIVar13,*(undefined8 *)(_Var8.unknown + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return self;
}



/* Address: 0x1002214a0 | _TtC7PasteUI20BackgroundEffectView::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC7PasteUI20BackgroundEffectView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  String SVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/BackgroundEffectView.swift",0x22,1,0x3c,UVar3.unknown,pMVar2);
  }
  SVar5.bridgeObject = (void *)0x2;
  SVar5.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar5,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd9e8f0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100221554);
  (*pcVar1)();
}


