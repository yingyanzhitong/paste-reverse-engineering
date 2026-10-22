/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100035534 | FUN_100035534 */

void FUN_100035534(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7f08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7f10;
  FUN_100005c24(&DAT_100fa7f10,&DAT_100c24eb0);
  puVar2 = &DAT_100fa7f18;
  FUN_100016eac(&DAT_100fa7f18,&DAT_100fa7f20,&DAT_100c24eb8,
                PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8);
  puVar3 = puVar2;
  FUN_1000355cc();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7f08 = puVar4;
  return;
}



/* Address: 0x1000355cc | FUN_1000355cc */

void FUN_1000355cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7f28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c24f44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c24f44,&DAT_100eb15f8);
  DAT_100fa7f28 = pTVar1;
  return;
}



/* Address: 0x10003560c | FUN_10003560c */

void FUN_10003560c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7f30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7f38;
  FUN_100005c24(&DAT_100fa7f38,&DAT_100c24ec0);
  puVar2 = &DAT_100fa7f40;
  FUN_100016eac(&DAT_100fa7f40,&DAT_100fa7f48,&DAT_100c24ec8,
                PTR_SwiftUI__SwiftUI__IDView<undefined,undefined>_>SwiftUI__View_100eab8c8);
  puVar3 = puVar2;
  FUN_1000355cc();
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7f30 = puVar4;
  return;
}



/* Address: 0x1000356a4 | FUN_1000356a4 */

undefined8 FUN_1000356a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa7ed0;
  FUN_1000037f0(&DAT_100fa7ed0,&DAT_100c24e90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000356f4 | FUN_1000356f4 */

void FUN_1000356f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_100004594(unaff_x20 + 0x48);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x100035740 | FUN_100035740 */

void FUN_100035740(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000336d4(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100035748 | FUN_100035748 */

void FUN_100035748(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7f70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c230cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c230cc,&DAT_100eaff90);
  DAT_100fa7f70 = pTVar1;
  return;
}



/* Address: 0x100035788 | FUN_100035788 */

void FUN_100035788(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_100004594(unaff_x20 + 0x48);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000357dc | FUN_1000357dc */

void FUN_1000357dc(void)

{
  long unaff_x20;
  
  FUN_100033ef0(unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78)
               );
  return;
}



/* Address: 0x1000357e8 | FUN_1000357e8 */

void FUN_1000357e8(void)

{
  long unaff_x20;
  
  FUN_100033fb8(*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000357f0 | FUN_1000357f0 */

void FUN_1000357f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7f90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7f88;
  FUN_100005c24(&DAT_100fa7f88,&DAT_100c24ef8);
  puVar2 = puVar1;
  FUN_100035868();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7f90 = puVar3;
  return;
}



/* Address: 0x100035868 | FUN_100035868 */

void FUN_100035868(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7f98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7fa0;
  FUN_100005c24(&DAT_100fa7fa0,&DAT_100c24f00);
  puVar2 = puVar1;
  FUN_1000358e0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7f98 = puVar3;
  return;
}



/* Address: 0x1000358e0 | FUN_1000358e0 */

void FUN_1000358e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7fa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7fb0;
  FUN_100005c24(&DAT_100fa7fb0,&DAT_100c24f08);
  puVar2 = &DAT_100fa7fb8;
  FUN_100016eac(&DAT_100fa7fb8,&DAT_100fa7fc0,&DAT_100c24f10,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7fa8 = puVar3;
  return;
}



/* Address: 0x100035978 | FUN_100035978 */

void FUN_100035978(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  if (*(long *)(unaff_x20 + 0x60) != 0) {
    FUN_100004594(unaff_x20 + 0x48);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000359cc | FUN_1000359cc */

void FUN_1000359cc(void)

{
  long unaff_x20;
  
  FUN_100033e84(unaff_x20 + 0x10,*(undefined1 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78)
                ,*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x1000359dc | FUN_1000359dc */

undefined1  [16] FUN_1000359dc(void)

{
  return ZEXT816(0x100eb15f8);
}



/* Address: 0x1000359ec | thunk_FUN_1000359f0 */

void thunk_FUN_1000359f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa7fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e00;
  FUN_100005c24(&DAT_100fa7e00,&DAT_100c24dd0);
  puVar2 = puVar1;
  FUN_100035a68();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa7fe0 = puVar3;
  return;
}



/* Address: 0x1000359f0 | FUN_1000359f0 */

void FUN_1000359f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e00;
  FUN_100005c24(&DAT_100fa7e00,&DAT_100c24dd0);
  puVar2 = puVar1;
  FUN_100035a68();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7fe0 = puVar3;
  return;
}



/* Address: 0x100035a68 | FUN_100035a68 */

void FUN_100035a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined8 *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined8 *puStack_38;
  
  if (DAT_100fa7fe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7df8;
  FUN_100005c24(&DAT_100fa7df8,&DAT_100c24dc8);
  puVar2 = &DAT_100fa7d98;
  FUN_100005c24(&DAT_100fa7d98,&DAT_100c24d98);
  puVar3 = &DAT_100fa7d90;
  FUN_100005c24(&DAT_100fa7d90,&DAT_100c24d90);
  puVar4 = puVar3;
  FUN_100034b9c();
  ppuVar5 = &local_40;
  local_40 = puVar3;
  puStack_38 = (undefined8 *)puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar5,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onMoveCommand(perform:_((SwiftUI_MoveCommandDirection)__>_())_)__>_some>>_100eab418
             ,1);
  ppuVar6 = &local_40;
  local_40 = puVar2;
  puStack_38 = ppuVar5;
  _swift_getOpaqueTypeConformance2
            (ppuVar6,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onExitCommand(perform:_(()__>_())_)__>_some>>_100eab408
             ,1);
  puStack_48 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_50 = ppuVar6;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_50);
  DAT_100fa7fe8 = puVar2;
  return;
}



/* Address: 0x100035b48 | FUN_100035b48 */

void FUN_100035b48(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0b48,1);
  return;
}



/* Address: 0x100035b58 | FUN_100035b58 */

undefined8 FUN_100035b58(undefined8 param_1,undefined8 param_2)

{
  Capsule CVar1;
  
  CVar1 = SwiftUI::Capsule::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_2,param_1,CVar1.unknown);
  return param_2;
}



/* Address: 0x100035b9c | FUN_100035b9c */

undefined8 FUN_100035b9c(undefined8 param_1)

{
  Capsule CVar1;
  
  CVar1 = SwiftUI::Capsule::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 8))(param_1,CVar1.unknown);
  return param_1;
}



/* Address: 0x100035bd8 | thunk_FUN_100035bdc */

void thunk_FUN_100035bdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa8018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7ff0;
  FUN_100005c24(&DAT_100fa7ff0,&DAT_100c24f98);
  puVar2 = &DAT_100fa8020;
  FUN_100016eac(&DAT_100fa8020,&DAT_100fa8000,&DAT_100c24fa8,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  puVar3 = &DAT_100fa8028;
  FUN_100016eac(&DAT_100fa8028,&DAT_100fa7ff8,&DAT_100c24fa0,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa8018 = puVar4;
  return;
}



/* Address: 0x100035bdc | FUN_100035bdc */

void FUN_100035bdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7ff0;
  FUN_100005c24(&DAT_100fa7ff0,&DAT_100c24f98);
  puVar2 = &DAT_100fa8020;
  FUN_100016eac(&DAT_100fa8020,&DAT_100fa8000,&DAT_100c24fa8,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  puVar3 = &DAT_100fa8028;
  FUN_100016eac(&DAT_100fa8028,&DAT_100fa7ff8,&DAT_100c24fa0,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8018 = puVar4;
  return;
}



/* Address: 0x100035c94 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035c98 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035c9c | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035ca0 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035ca4 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035ca8 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035cac | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x100035cb0 | FUN_100035cb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100035cb0(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  ulong *puVar16;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_88;
  undefined8 uStack_80;
  
  uVar2 = 0;
  FUN_1000e5c5c();
  _swift_allocObject();
  FUN_1000e508c();
  uVar3 = 0;
  lVar10 = 1;
  uVar12 = 1;
  FUN_100088df8(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar13 = *(ulong *)(uVar3 + 0x10);
  lVar11 = uVar13 + 1;
  uVar9 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar13) {
    uVar9 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    uVar12 = 1;
    lVar10 = lVar11;
    FUN_100088df8(uVar9,lVar11,1,uVar3);
  }
  *(long *)(uVar9 + 0x10) = lVar11;
  lVar11 = uVar9 + uVar13 * 0x10;
  *(undefined8 *)(lVar11 + 0x20) = uVar2;
  *(undefined ***)(lVar11 + 0x28) = &PTR_PTR_100eb63d8;
  puVar4 = &DAT_100c24fc0;
  _swift_getKeyPath(&DAT_100c24fc0);
  FUN_1002d0bc8();
  puVar5 = &DAT_100c24ff8;
  lVar11 = lVar10;
  uVar2 = uVar12;
  _swift_getKeyPath(&DAT_100c24ff8);
  FUN_1002d0bc8();
  uVar6 = 0;
  FUN_10024dab4();
  _swift_allocObject();
  FUN_1002480e4();
  uVar13 = *(ulong *)(uVar9 + 0x10);
  uVar3 = uVar9;
  if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar13) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
    FUN_100088df8(uVar3,uVar13 + 1,1,uVar9);
  }
  *(ulong *)(uVar3 + 0x10) = uVar13 + 1;
  lVar1 = uVar3 + uVar13 * 0x10;
  *(undefined8 *)(lVar1 + 0x20) = uVar6;
  *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100ec3d30;
  FUN_1002d0c78(&local_a0,puVar4,lVar10,uVar12,PTR___type_metadata_for_Swift_Bool_100eac570,
                PTR___protocol_witness_table_for_Swift_Bool___Swift_Decodable_in_Swift_100eac590,
                PTR___protocol_witness_table_for_Swift_Bool___Swift_Encodable_in_Swift_100eac578);
  uVar13 = uVar3;
  if ((char)local_a0 == '\x01') {
    FUN_1002d0c78(&local_a0,puVar5,lVar11,uVar2,PTR___type_metadata_for_Swift_Bool_100eac570,
                  PTR___protocol_witness_table_for_Swift_Bool___Swift_Decodable_in_Swift_100eac590,
                  PTR___protocol_witness_table_for_Swift_Bool___Swift_Encodable_in_Swift_100eac578);
    uVar15 = local_a0 & 0xff;
    uVar6 = 0;
    FUN_1002c16ec(0);
    _swift_allocObject();
    FUN_1002bf2f4(uVar15,uVar6);
    uVar9 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar9) {
      uVar13 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_100088df8(uVar13,uVar9 + 1,1,uVar3);
    }
    *(ulong *)(uVar13 + 0x10) = uVar9 + 1;
    lVar1 = uVar13 + uVar9 * 0x10;
    *(ulong *)(lVar1 + 0x20) = uVar15;
    *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100ec6b28;
  }
  puVar7 = (undefined8 *)0x0;
  FUN_1000e64dc();
  _swift_allocObject();
  FUN_1000e5fec();
  uVar9 = *(ulong *)(uVar13 + 0x10);
  uVar3 = uVar13;
  if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
    FUN_100088df8(uVar3,uVar9 + 1,1,uVar13);
  }
  *(ulong *)(uVar3 + 0x10) = uVar9 + 1;
  lVar1 = uVar3 + uVar9 * 0x10;
  *(undefined8 **)(lVar1 + 0x20) = puVar7;
  *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100eb6480;
  FUN_10019fbb0();
  puVar16 = (ulong *)*puVar7;
  puVar8 = puVar16;
  _swift_retain();
  FUN_1002cd5ac();
  _swift_beginAccess();
  local_a0 = *puVar8;
  pcVar14 = *(code **)(*puVar16 + 0x88);
  uStack_98 = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar14)(&local_a0);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(puVar16);
  FUN_1000d468c(&local_a0);
  puVar8 = &local_a0;
  FUN_100004640(puVar8,local_88);
  FUN_1000d4db8(0xd000000000000015,0x8000000100d8e400,local_88,uStack_80,puVar8);
  _swift_bridgeObjectRelease(uVar3);
  _swift_release(uVar12);
  _swift_release(lVar10);
  _swift_release(puVar4);
  _swift_release(uVar2);
  _swift_release(lVar11);
  _swift_release(puVar5);
  FUN_100004594(&local_a0);
  return;
}



/* Address: 0x100036060 | FUN_100036060 */

undefined * FUN_100036060(void)

{
  return PTR___protocol_witness_table_for_Swift_Bool___Swift_Decodable_in_Swift_100eac590;
}



/* Address: 0x10003606c | FUN_10003606c */

undefined * FUN_10003606c(void)

{
  return PTR___protocol_witness_table_for_Swift_Bool___Swift_Encodable_in_Swift_100eac578;
}



/* Address: 0x100036078 | FUN_100036078 */

void FUN_100036078(void)

{
  undefined1 local_11;
  
  local_11 = 1;
  FUN_1002ccc34(0xd000000000000021,0x8000000100d8e450,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x1000360c0 | FUN_1000360c0 */

void FUN_1000360c0(void)

{
  undefined1 local_11;
  
  local_11 = 0;
  FUN_1002ccc34(0xd000000000000026,0x8000000100d8e420,&local_11,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return;
}



/* Address: 0x100036104 | FUN_100036104 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100036104(void)

{
  long lVar1;
  byte bVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _TtC5Paste8MainView::___lazy_storage___backgroundView;
  lVar3 = *(long *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___backgroundView);
  if (lVar3 == 0) {
    bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
    uVar4 = 0x403a000000000000;
    if ((bVar2 & 1) == 0) {
      uVar4 = 0;
    }
    FUN_1002215f0(0);
    _objc_allocWithZone();
    lVar3 = 5;
    FUN_100220ffc(uVar4);
    *(long *)(unaff_x20 + lVar1) = lVar3;
  }
  return lVar3;
}



/* Address: 0x1000361a8 | FUN_1000361a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1000361a8(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste8MainView::___lazy_storage___toolbar;
  lVar2 = *(long *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___toolbar);
  if (lVar2 == 0) {
    lVar2 = *(long *)(*(long *)(unaff_x20 + _TtC5Paste8MainView::viewModel) + 0x10);
    FUN_10000ea4c();
    _objc_allocWithZone();
    _swift_retain();
    FUN_10000d2b4();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x100036234 | FUN_100036234 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100036234(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long local_48;
  
  lVar1 = _TtC5Paste8MainView::___lazy_storage___collectionView;
  lVar3 = *(long *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___collectionView);
  if (lVar3 == 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::viewModel);
    puVar4 = &DAT_100c250a8;
    _swift_getKeyPath(&DAT_100c250a8);
    puVar5 = &DAT_100c250d0;
    _swift_getKeyPath(&DAT_100c250d0);
    Combine::Published::_get_subscript(&local_48,uVar6,puVar4,puVar5);
    _swift_release(puVar4);
    _swift_release(puVar5);
    if (local_48 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100036318);
      (*pcVar2)();
    }
    FUN_10006db74(0);
    _objc_allocWithZone();
    FUN_1000671a8();
    *(long *)(unaff_x20 + lVar1) = local_48;
    lVar3 = local_48;
  }
  return lVar3;
}



/* Address: 0x100036318 | FUN_100036318 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100036318(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined *puVar7;
  undefined *puVar8;
  Published PVar9;
  AnyCancellable *this;
  __int64 _Var10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined1 auStack_130 [8];
  long local_128;
  undefined *local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined1 auStack_f0 [48];
  undefined1 auStack_c0 [16];
  ID local_b0;
  
  _swift_getObjectType();
  puVar4 = &DAT_100fa8098;
  FUN_1000037f0(&DAT_100fa8098,&DAT_100c250f8);
  local_128 = *(long *)(puVar4 + -8);
  local_120 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar4 = &DAT_100fa80a0;
  FUN_1000037f0(&DAT_100fa80a0,&DAT_100c25100);
  local_118 = *(long *)(puVar4 + -8);
  local_110 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = (long)(auStack_130 + -extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100fa80a8;
  FUN_1000037f0(&DAT_100fa80a8,&DAT_100c25108);
  local_100 = *(long *)(puVar4 + -8);
  local_f8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_108 = lVar12 - extraout_x8_01;
  *(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___backgroundView) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___toolbar) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::___lazy_storage___collectionView) = 0;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var10 = Swift::_CocoaArrayWrapper::get_endIndex
                         ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var10 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste8MainView::cancellables) = puVar4;
  *(long *)(unaff_x20 + _TtC5Paste8MainView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar5 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  IVar6 = IVar5;
  FUN_100036234();
  puVar4 = &DAT_100eb16a8;
  _swift_allocObject(&DAT_100eb16a8,0x18,7);
  _swift_weakInit(puVar4 + 0x10,param_1);
  puVar1 = (undefined8 *)(IVar6 + _TtC5Paste18ItemCollectionView::onSelectList);
  uVar11 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100037ec0;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar11,uVar2);
  _swift_release(puVar4);
  puVar4 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  puVar7 = puVar4;
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 3;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  puVar8 = puVar7;
  FUN_100036104();
  *(undefined **)(puVar7 + 0x20) = puVar8;
  local_b0 = IVar5;
  FUN_1001fa150(puVar7,FUN_100037ec8,auStack_c0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar7);
  puVar8 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
  _swift_arrayDestroy(puVar7 + 0x20,*(undefined8 *)(puVar7 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  uVar11 = *(undefined8 *)
            (*(long *)(IVar5 + _TtC5Paste8MainView::___lazy_storage___backgroundView) +
            _TtC7PasteUI20BackgroundEffectView::contentView);
  _swift_initStackObject(puVar4,auStack_f0);
  *(undefined8 *)(puVar4 + 0x18) = 5;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  FUN_1000361a8();
  *(undefined8 *)(puVar4 + 0x20) = uVar11;
  *(undefined8 *)(puVar4 + 0x28) =
       *(undefined8 *)(IVar5 + _TtC5Paste8MainView::___lazy_storage___collectionView);
  local_b0 = IVar5;
  FUN_1001fa150(puVar4,FUN_100037ed0,auStack_c0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,*(undefined8 *)(puVar4 + 0x10),puVar8 + 8);
  _swift_beginAccess(param_1 + _TtC5Paste13MainViewModel::_currentCollectionViewModel,auStack_c0,
                     0x21,0);
  PVar9.unknown = &DAT_100fa80b0;
  FUN_1000037f0(&DAT_100fa80b0,&DAT_100c25110);
  Combine::Published::_get_projectedValue(PVar9);
  _swift_endAccess(auStack_c0);
  FUN_100016eac(&DAT_100fa80b8,&DAT_100fa8098,&DAT_100c250f8,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  puVar4 = local_120;
  (extension_Combine)::Combine::Publisher::dropFirst(1);
  (**(code **)(local_128 + 8))(auStack_130 + -extraout_x8,puVar4);
  FUN_100053f90(0);
  FUN_100016eac(&DAT_100fa80c0,&DAT_100fa80a0,&DAT_100c25100,
                PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
  lVar3 = local_108;
  puVar4 = local_110;
  (extension_Combine)::Combine::Publisher::_compactMap();
  (**(code **)(local_118 + 8))(lVar12,puVar4);
  puVar4 = &DAT_100eb16d0;
  _swift_allocObject(&DAT_100eb16d0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,IVar5);
  FUN_100016eac(&DAT_100fa80c8,&DAT_100fa80a8,&DAT_100c25108,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  puVar8 = local_f8;
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar4);
  (**(code **)(local_100 + 8))(lVar3,puVar8);
  lVar12 = _TtC5Paste8MainView::cancellables;
  _swift_beginAccess(IVar5 + _TtC5Paste8MainView::cancellables,auStack_c0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(IVar5 + lVar12));
  _swift_endAccess(auStack_c0);
  _swift_release(param_1);
  _swift_release(this);
  return IVar5;
}



/* Address: 0x100036860 | FUN_100036860 */

void FUN_100036860(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_10007d9c8(param_1);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1000368a4 | FUN_1000368a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1000368a4(undefined8 param_1)

{
  byte bVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_70 [3];
  undefined8 local_58;
  undefined **ppuStack_50;
  undefined8 local_48;
  
  uVar7 = param_1;
  _swift_getObjectType();
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  local_48 = CONCAT71(extraout_var,bVar1);
  uVar8 = 0x4020000000000000;
  if ((bVar1 & 1) == 0) {
    uVar8 = 0;
  }
  FUN_100036104();
  ppuStack_50 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_70[0] = param_1;
  local_58 = uVar7;
  FUN_1002215f0(0);
  puVar3 = local_70;
  FUN_1001f97b4(0,uVar8,uVar8,uVar8,puVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_70);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar4 + 0x20) = puVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar7 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar7,puVar5);
  return puVar6;
}



/* Address: 0x1000369fc | FUN_1000369fc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_1000369fc(ID param_1)

{
  long lVar1;
  byte bVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  ID IVar10;
  ID IVar11;
  ID IVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 local_a8 [3];
  undefined8 local_90;
  undefined **ppuStack_88;
  long local_80;
  
  IVar3 = param_1;
  FUN_1000361a8();
  IVar3 = objc_stub::topAnchor(IVar3);
  IVar4 = objc_stub::topAnchor(param_1);
  IVar3 = objc_stub::constraintEqualToAnchor_(IVar3,IVar4);
  lVar1 = _TtC5Paste8MainView::___lazy_storage___toolbar;
  IVar4 = objc_stub::heightAnchor(*(ID *)(param_1 + _TtC5Paste8MainView::___lazy_storage___toolbar))
  ;
  IVar4 = objc_stub::constraintEqualToConstant_(IVar4,0x404e000000000000);
  lVar16 = *(long *)(param_1 + lVar1);
  local_80 = lVar16;
  FUN_100036104();
  uVar5 = *(undefined8 *)(lVar16 + _TtC7PasteUI20BackgroundEffectView::contentView);
  uVar6 = 0;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_88 = &PTR_PTR_100ec00e8;
  uVar7 = 0;
  local_a8[0] = uVar5;
  local_90 = uVar6;
  FUN_10000ea4c(0);
  puVar8 = local_a8;
  FUN_1001f9b74(0,puVar8,uVar7,&PTR_PTR_100ec00e8);
  puVar9 = local_a8;
  FUN_100004594();
  FUN_100036234();
  IVar10 = objc_stub::topAnchor((ID)puVar9);
  IVar11 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar10 = objc_stub::constraintEqualToAnchor_(IVar10,IVar11);
  lVar1 = _TtC5Paste8MainView::___lazy_storage___collectionView;
  IVar11 = objc_stub::bottomAnchor
                     (*(ID *)(param_1 + _TtC5Paste8MainView::___lazy_storage___collectionView));
  IVar12 = objc_stub::bottomAnchor(param_1);
  bVar2 = Swift::_stdlib_isOSVersionAtLeast(0x1a,0,0);
  uVar5 = 0xc020000000000000;
  if ((bVar2 & 1) == 0) {
    uVar5 = 0;
  }
  objc_stub::constraintEqualToAnchor_constant_(IVar11,uVar5,IVar12);
  uVar5 = 0;
  FUN_1001f9678(0x437a0000);
  local_80 = *(undefined8 *)(param_1 + lVar1);
  local_a8[0] = *(undefined8 *)
                 (*(long *)(param_1 + _TtC5Paste8MainView::___lazy_storage___backgroundView) +
                 _TtC7PasteUI20BackgroundEffectView::contentView);
  ppuStack_88 = &PTR_PTR_100ec00e8;
  uVar7 = 0;
  local_90 = uVar6;
  FUN_10006db74(0);
  puVar9 = local_a8;
  FUN_1001f9b74(0,puVar9,uVar7,&PTR_PTR_100ec00e8);
  FUN_100004594(local_a8);
  puVar13 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 0xc;
  *(undefined8 *)(puVar13 + 0x10) = 6;
  uVar6 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar13 + 0x38) = uVar6;
  *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x20) = IVar3;
  *(undefined8 *)(puVar13 + 0x60) = uVar6;
  *(undefined ***)(puVar13 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x48) = IVar4;
  puVar14 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar13 + 0x88) = puVar14;
  *(undefined ***)(puVar13 + 0x90) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar13 + 0x70) = puVar8;
  *(undefined8 *)(puVar13 + 0xb0) = uVar6;
  *(undefined ***)(puVar13 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar13 + 0x98) = IVar10;
  *(undefined8 *)(puVar13 + 0xd8) = uVar6;
  *(undefined ***)(puVar13 + 0xe0) = &PTR_PTR_100ec00a8;
  *(undefined8 *)(puVar13 + 0xc0) = uVar5;
  *(undefined **)(puVar13 + 0x100) = puVar14;
  *(undefined ***)(puVar13 + 0x108) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar13 + 0xe8) = puVar9;
  _swift_bridgeObjectRetain(puVar8);
  puVar15 = puVar13;
  FUN_1001f8d60(puVar13);
  _swift_bridgeObjectRelease(puVar8);
  _swift_setDeallocating(puVar13);
  uVar5 = *(undefined8 *)(puVar13 + 0x10);
  puVar14 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar13 + 0x20,uVar5,puVar14);
  return puVar15;
}



/* Address: 0x100036e28 | FUN_100036e28 */

void FUN_100036e28(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x2c,UVar4.unknown,puVar3);
  }
  _swift_retain(uVar6);
  _swift_release(pMVar2);
  *param_1 = uVar6;
  return;
}



/* Address: 0x100036ee0 | FUN_100036ee0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

MainActor * FUN_100036ee0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x2d,UVar4.unknown,puVar3);
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_100036234();
    uVar6 = *(undefined8 *)(param_2 + _TtC5Paste18ItemCollectionView::viewModel);
    *(undefined8 *)(param_2 + _TtC5Paste18ItemCollectionView::viewModel) = uVar7;
    _swift_retain(uVar7);
    _swift_release(uVar6);
    FUN_100067c84();
    _swift_release(pMVar2);
    return (MainActor *)0x0;
  }
  _swift_release(pMVar2);
  return pMVar2;
}



/* Address: 0x100036ff8 | _TtC5Paste8MainView::becomeFirstResponder */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

bool _TtC5Paste8MainView::becomeFirstResponder(ID param_1,SEL param_2)

{
  undefined *puVar1;
  bool bVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID IVar7;
  ID IVar8;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x33,UVar5.unknown,puVar4);
  }
  IVar7 = objc_stub::window(param_1);
  if (IVar7 == 0) {
    _swift_release(pMVar3);
    bVar2 = 0;
  }
  else {
    IVar8 = IVar7;
    FUN_100036234();
    IVar7 = objc_stub::makeFirstResponder_(IVar7,IVar8);
    bVar2 = (bool)IVar7;
    _swift_release(pMVar3);
  }
  return bVar2;
}



/* Address: 0x100037108 | _TtC5Paste8MainView::viewDidMoveToWindow */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste8MainView::viewDidMoveToWindow(ID param_1,SEL param_2)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID self;
  ID IVar7;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x37,UVar5.unknown,puVar4);
  }
  local_50.receiver = param_1;
  local_50.super_class = pcVar2;
  _objc_msgSendSuper2(&local_50,"viewDidMoveToWindow");
  self = objc_stub::window(param_1);
  if (self == 0) {
    _swift_release(pMVar3);
  }
  else {
    IVar7 = self;
    FUN_100036234();
    objc_stub::setInitialFirstResponder_(self,IVar7);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x100037238 | _TtC5Paste8MainView::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste8MainView::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID self;
  ID IVar7;
  objc_super local_60;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x3c,UVar5.unknown,puVar4);
  }
  local_60.receiver = param_1;
  local_60.super_class = pcVar2;
  _objc_msgSendSuper2(&local_60,"mouseDown:",param_3);
  self = objc_stub::window(param_1);
  if (self == 0) {
    _swift_release(pMVar3);
  }
  else {
    IVar7 = self;
    FUN_100036234();
    objc_stub::makeFirstResponder_(self,IVar7);
    _swift_release(pMVar3);
  }
  return;
}



/* Address: 0x10003738c | FUN_10003738c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003738c(undefined8 param_1)

{
  bool bVar1;
  undefined *puVar2;
  SpecialKey SVar3;
  NSEvent *pNVar4;
  undefined1 *puVar5;
  NSArray *pNVar6;
  SpecialKey SVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  ID unaff_x20;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  
  _swift_getObjectType();
  puVar2 = &DAT_100fa8080;
  FUN_1000037f0(&DAT_100fa8080,&DAT_100c250f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = &stack0xffffffffffffff80 + -extraout_x8;
  SVar3 = SpecialKey::_typeMetadataAccessor();
  lVar11 = *(long *)(SVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar8 = puVar9 + -extraout_x12;
  pNVar4 = (NSEvent *)
           _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff90,"performKeyEquivalent:",
                               param_1);
  if (((ulong)pNVar4 & 1) != 0) {
    return;
  }
  (extension_AppKit)::__C::NSEvent::_get_specialKey(pNVar4);
  puVar5 = puVar10;
  (**(code **)(lVar11 + 0x30))(puVar10,1,SVar3.unknown);
  if ((int)puVar5 == 1) {
    FUN_100005808(puVar10,&DAT_100fa8080,&DAT_100c250f0);
LAB_1000374ac:
    puVar2 = &DAT_100fa6b80;
    FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 3;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = param_1;
    FUN_10000ec2c(0,&DAT_100fa8088,&PTR__OBJC_CLASS___NSEvent_100f8d710);
    pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_release(puVar2);
    objc_stub::interpretKeyEvents_(unaff_x20,pNVar6);
  }
  else {
    SVar7.unknown = puVar8;
    (**(code **)(lVar11 + 0x20))(puVar8,puVar10,SVar3.unknown);
    SpecialKey::_get_tab(SVar7);
    puVar2 = &DAT_100fa8090;
    FUN_100003a00(&DAT_100fa8090,PTR__typeMetadataAccessor_100ea8f78,
                  PTR__AppKit__SpecialKey_>Swift__Equatable_100ea8f88);
    bVar1 = Swift::Equatable::___infix(puVar8,puVar9,SVar3.unknown,puVar2);
    pcVar12 = *(code **)(lVar11 + 8);
    SVar7.unknown = puVar9;
    (*pcVar12)(puVar9,SVar3.unknown);
    if (!bVar1) {
      SpecialKey::_get_backTab(SVar7);
      bVar1 = Swift::Equatable::___infix(puVar8,puVar9,SVar3.unknown,puVar2);
      (*pcVar12)(puVar9,SVar3.unknown);
      if (!bVar1) {
        (*pcVar12)(puVar8,SVar3.unknown);
        goto LAB_1000374ac;
      }
    }
    _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff80,"keyDown:",param_1);
    (*pcVar12)(puVar8,SVar3.unknown);
  }
  return;
}



/* Address: 0x100037628 | _TtC5Paste8MainView::keyDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste8MainView::keyDown_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x42,UVar4.unknown,puVar3);
  }
  FUN_10003738c(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100037704 | FUN_100037704 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100037704(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  ID self;
  long extraout_x8;
  long lVar4;
  long *plVar5;
  Published *unaff_x20;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long local_60 [3];
  long local_48;
  
  lVar4 = *(long *)((long)&unaff_x20->unknown + _TtC5Paste8MainView::viewModel);
  puVar1 = &DAT_100c250a8;
  _swift_getKeyPath(&DAT_100c250a8);
  puVar2 = &DAT_100c250d0;
  _swift_getKeyPath(&DAT_100c250d0);
  Combine::Published::_get_subscript(local_60,lVar4,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if (local_60[0] == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100037948);
    (*pcVar7)();
  }
  uVar9 = *(ulong *)(local_60[0] + 0x40);
  FUN_10000444c(uVar9);
  _swift_release(local_60[0]);
  FUN_100021e40(uVar9);
  if (uVar9 >> 0x3e == 0) {
    plVar5 = *(long **)(*(long *)(lVar4 + 0x10) + 0x10);
    plVar3 = plVar5;
    _swift_retain();
    FUN_1002ddf60();
    lVar4 = *plVar3;
    puVar1 = &DAT_100c25060;
    _swift_getKeyPath(&DAT_100c25060);
    puVar2 = &DAT_100c25088;
    _swift_getKeyPath(&DAT_100c25088);
    local_60[0] = lVar4;
    _swift_bridgeObjectRetain(lVar4);
    plVar3 = local_60;
    Combine::Published::_set_subscript(unaff_x20,plVar3,plVar5,puVar1,puVar2);
    FUN_1000361a8();
    FUN_10000cd7c();
    pcVar7 = *(code **)((long)plVar3 + _TtC5Paste9SearchBar::onDismiss);
    if (pcVar7 != (code *)0x0) {
      uVar6 = ((undefined8 *)((long)plVar3 + _TtC5Paste9SearchBar::onDismiss))[1];
      _swift_retain(uVar6);
      (*pcVar7)();
      FUN_100004550(pcVar7,uVar6);
    }
  }
  else {
    self = objc_stub::window((ID)unaff_x20);
    if (self != 0) {
      FUN_10001a348(param_1,local_60);
      if (local_48 == 0) {
        lVar4 = 0;
      }
      else {
        FUN_100004640(local_60,local_48);
        lVar10 = *(long *)(local_48 + -8);
        (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
        lVar8 = (long)local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar10 + 0x10))(lVar8);
        lVar4 = lVar8;
        Swift::__bridgeAnythingToObjectiveC(lVar8,local_48);
        (**(code **)(lVar10 + 8))(lVar8,local_48);
        FUN_100004594(local_60);
      }
      objc_stub::performClose_(self,lVar4);
      _swift_unknownObjectRelease(lVar4);
    }
  }
  return;
}



/* Address: 0x100037948 | _TtC5Paste8MainView::cancelOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste8MainView::cancelOperation_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x4e,UVar4.unknown,puVar3);
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
  FUN_100037704(&local_60);
  FUN_100005808(&local_60,&DAT_100fa8810,&DAT_100c23ce0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100037a64 | FUN_100037a64 */

void FUN_100037a64(undefined8 param_1)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  Published *pPVar5;
  _StringGuts local_60;
  _StringGuts _Stack_58;
  undefined1 local_50 [32];
  
  uVar2 = 0;
  FUN_10000cbfc(param_1,local_50);
  _swift_dynamicCast(&local_60,local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_String_100eac208,6);
  if ((uVar2 & 1) != 0) {
    if ((local_60.unknown == (undefined *)0x20 &&
         _Stack_58.unknown == (undefined *)0xe100000000000000) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck(local_60,_Stack_58,(_StringComparisonResult)0x20)
       , bVar1)) {
      _swift_bridgeObjectRelease(_Stack_58.unknown);
    }
    else {
      pPVar5 = *(Published **)
                (*(long *)(*(long *)(unaff_x20 + _TtC5Paste8MainView::viewModel) + 0x10) + 0x10);
      _swift_retain(pPVar5);
      FUN_1002ddfe0(local_60.unknown,_Stack_58.unknown);
      _swift_bridgeObjectRelease(_Stack_58.unknown);
      puVar3 = &DAT_100c25060;
      _swift_getKeyPath(&DAT_100c25060);
      puVar4 = &DAT_100c25088;
      _swift_getKeyPath(&DAT_100c25088);
      Combine::Published::_set_subscript(pPVar5,local_50,pPVar5,puVar3,puVar4);
    }
  }
  return;
}



/* Address: 0x100037b60 | _TtC5Paste8MainView::insertText: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste8MainView::insertText_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined1 auStack_60 [32];
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,0x57,UVar4.unknown,puVar3);
  }
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  FUN_100037a64(auStack_60);
  FUN_100004594(auStack_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100037c58 | _TtC5Paste8MainView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste8MainView::init(ID param_1,SEL param_2)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,5,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.MainView",0xe,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100037d00);
  (*pcVar2)();
}



/* Address: 0x100037d00 | _TtC5Paste8MainView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste8MainView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *this;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  Swift::MainActor::get_shared(this,this);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/MainView.swift",0x14,1,5,UVar4.unknown,puVar3);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.MainView",0xe,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100037da8);
  (*pcVar2)();
}



/* Address: 0x100037da8 | FUN_100037da8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100037da8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC5Paste8MainView::cancellables));
  return;
}



/* Address: 0x100037e04 | _TtC5Paste8MainView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste8MainView::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + cancellables));
  return;
}



/* Address: 0x100037e6c | FUN_100037e6c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100037e6c(void)

{
  return ZEXT816(0x100f900f8);
}



/* Address: 0x100037e8c | thunk_FUN_100041a74 */

void thunk_FUN_100041a74(void)

{
  FUN_100041a74();
  return;
}



/* Address: 0x100037e90 | thunk_FUN_100041adc */

void thunk_FUN_100041adc(void)

{
  FUN_100041adc();
  return;
}



/* Address: 0x100037e94 | thunk_FUN_100021d58 */

void thunk_FUN_100021d58(void)

{
  FUN_100021d58();
  return;
}



/* Address: 0x100037e98 | thunk_FUN_100021dc4 */

void thunk_FUN_100021dc4(void)

{
  FUN_100021dc4();
  return;
}



/* Address: 0x100037e9c | FUN_100037e9c */

void FUN_100037e9c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}


