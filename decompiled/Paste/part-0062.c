/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000c5520 | FUN_1000c5520 */

void FUN_1000c5520(void)

{
  FUN_1000c6168(FUN_1000bf140);
  return;
}



/* Address: 0x1000c552c | FUN_1000c552c */

void FUN_1000c552c(void)

{
  long unaff_x20;
  
  FUN_1000bc028(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c5534 | FUN_1000c5534 */

void FUN_1000c5534(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fabe98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabe90;
  FUN_100005c24(&DAT_100fabe90,&DAT_100c2a108);
  puVar2 = &DAT_100fabea0;
  FUN_100016eac(&DAT_100fabea0,&DAT_100fabea8,&DAT_100c2a110,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_28);
  DAT_100fabe98 = puVar3;
  return;
}



/* Address: 0x1000c55c4 | thunk_FUN_1000c7fec */

void thunk_FUN_1000c7fec(void)

{
  FUN_1000c7fec();
  return;
}



/* Address: 0x1000c55c8 | thunk_FUN_1000c8054 */

void thunk_FUN_1000c8054(void)

{
  FUN_1000c8054();
  return;
}



/* Address: 0x1000c55cc | FUN_1000c55cc */

void FUN_1000c55cc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000c55dc | FUN_1000c55dc */

void FUN_1000c55dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1000bc23c(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c5628 | FUN_1000c5628 */

void FUN_1000c5628(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fabee0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c9a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c9a8,&DAT_100ed6a60);
  DAT_100fabee0 = pTVar1;
  return;
}



/* Address: 0x1000c5668 | FUN_1000c5668 */

void FUN_1000c5668(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  Date DVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar13 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar10 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar10 == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar2,UVar6.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(DVar7.unknown + -8);
    pcVar9 = *(code **)(lVar11 + 8);
    (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar10 = lVar2 + iVar3;
    (**(code **)(lVar11 + 0x30))(lVar10,1,DVar7.unknown);
    if ((int)lVar10 == 0) {
      (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar10 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar11 = 0;
    FUN_10045bd80();
    lVar5 = lVar10;
    (**(code **)(*(long *)(lVar11 + -8) + 0x30))(lVar10,1,lVar11);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar10 + 0x10));
      (*pcVar9)(lVar10 + *(int *)(lVar11 + 0x18),DVar7.unknown);
    }
  }
  lVar10 = *(long *)(lVar13 + 0x40);
  puVar8 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject(unaff_x20,uVar14 + lVar10 + 1,uVar12 | 7);
  return;
}



/* Address: 0x1000c586c | FUN_1000c586c */

void FUN_1000c586c(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1000b292c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff));
  FUN_1000bc5d8(lVar1,*(undefined1 *)(lVar1 + *(long *)(*(long *)(lVar2 + -8) + 0x40)));
  return;
}



/* Address: 0x1000c58a0 | FUN_1000c58a0 */

void FUN_1000c58a0(void)

{
  long unaff_x20;
  
  FUN_1000bc71c(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000c58ac | FUN_1000c58ac */

void FUN_1000c58ac(void)

{
  long unaff_x20;
  
  FUN_1000bc820(*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c58b4 | FUN_1000c58b4 */

void FUN_1000c58b4(void)

{
  long unaff_x20;
  
  FUN_1000bca1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000c58c0 | FUN_1000c58c0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c58c0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000c58e4 | FUN_1000c58e4 */

void FUN_1000c58e4(void)

{
  long unaff_x20;
  
  FUN_1000c3708(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000c58ec | FUN_1000c58ec */

void FUN_1000c58ec(long param_1,long param_2)

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



/* Address: 0x1000c5900 | FUN_1000c5900 */

void FUN_1000c5900(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000c5908 | FUN_1000c5908 */

void FUN_1000c5908(undefined8 param_1)

{
  FUN_1000c5914(param_1,FUN_1000bb60c);
  return;
}



/* Address: 0x1000c5914 | FUN_1000c5914 */

void FUN_1000c5914(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001000c596c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c5970 | FUN_1000c5970 */

void FUN_1000c5970(void)

{
  long unaff_x20;
  
  FUN_1000bde1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000c5978 | FUN_1000c5978 */

void FUN_1000c5978(__int8 *param_1,EnvironmentValues param_2)

{
  Visibility VVar1;
  
  VVar1 = SwiftUI::EnvironmentValues::get_menuIndicatorVisibility(param_2);
  *param_1 = VVar1.value;
  return;
}



/* Address: 0x1000c59a0 | FUN_1000c59a0 */

void FUN_1000c59a0(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_menuIndicatorVisibility(param_2,(Visibility)*param_1);
  return;
}



/* Address: 0x1000c59c4 | FUN_1000c59c4 */

void FUN_1000c59c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fabfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fabf78;
  FUN_100005c24(&DAT_100fabf78,&DAT_100c2a1f8);
  puVar2 = puVar1;
  FUN_1000c5a3c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fabfa8 = puVar3;
  return;
}



/* Address: 0x1000c5a3c | FUN_1000c5a3c */

void FUN_1000c5a3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  BorderlessButtonMenuStyle BVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_100fabfb0 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100fabfa0;
  FUN_100005c24(&DAT_100fabfa0,&DAT_100c2a238);
  puVar3 = &DAT_100fabf70;
  FUN_100005c24(&DAT_100fabf70,&DAT_100c2a1f0);
  BVar4 = SwiftUI::BorderlessButtonMenuStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eab030;
  puVar5 = &DAT_100fabf90;
  FUN_100016eac(&DAT_100fabf90,&DAT_100fabf70,&DAT_100c2a1f0,
                PTR_SwiftUI__SwiftUI__Menu<undefined,undefined>_>SwiftUI__View_100eab2e0);
  puVar6 = &DAT_100fabf98;
  FUN_100003a00(&DAT_100fabf98,puVar1,
                PTR_SwiftUI__SwiftUI__BorderlessButtonMenuStyle_>SwiftUI__MenuStyle_100eab020);
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = BVar4.unknown;
  local_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_menuStyle<A_where_A1:_SwiftUI_MenuStyle>(A1)__>_some>>_100eab648
             ,1);
  puVar3 = &DAT_100fabfb8;
  FUN_100016eac(&DAT_100fabfb8,&DAT_100fabfc0,&DAT_100c2a240,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar5 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = ppuVar7;
  puStack_68 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar2,&local_70);
  DAT_100fabfb0 = puVar5;
  return;
}



/* Address: 0x1000c5b68 | thunk_FUN_1000c5b6c */

void thunk_FUN_1000c5b6c(void)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  Date DVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar5 = 0;
  FUN_1000b292c();
  bVar2 = *(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar14 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  FUN_10045ba0c();
  lVar17 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar17 + 0x50);
  uVar11 = uVar14 + lVar13 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar13 = lVar1 + *(int *)(lVar5 + 0x18);
  lVar15 = lVar13;
  (**(code **)(lVar17 + 0x30))(lVar13,1,lVar6);
  if ((int)lVar15 == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar13,UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x14) + 8));
    iVar4 = *(int *)(lVar6 + 0x1c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar8.unknown + -8);
    pcVar12 = *(code **)(lVar16 + 8);
    (*pcVar12)(lVar13 + iVar4,DVar8.unknown);
    iVar4 = *(int *)(lVar6 + 0x20);
    lVar15 = lVar13 + iVar4;
    (**(code **)(lVar16 + 0x30))(lVar15,1,DVar8.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar12)(lVar13 + iVar4,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x24) + 8));
    lVar15 = lVar13 + *(int *)(lVar6 + 0x28);
    lVar9 = 0;
    FUN_10045bd80();
    lVar16 = lVar15;
    (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar15,1,lVar9);
    if ((int)lVar16 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 0x10));
      (*pcVar12)(lVar15 + *(int *)(lVar9 + 0x18),DVar8.unknown);
    }
  }
  puVar10 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar13 + *(int *)(puVar10 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c) + 8));
  lVar13 = lVar1 + *(int *)(lVar5 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 8));
  _swift_release(*(undefined8 *)(lVar13 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar5 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  lVar1 = unaff_x20 + uVar11;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar1,UVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar4 = *(int *)(lVar6 + 0x1c);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar8.unknown + -8);
  pcVar12 = *(code **)(lVar15 + 8);
  (*pcVar12)(lVar1 + iVar4,DVar8.unknown);
  iVar4 = *(int *)(lVar6 + 0x20);
  lVar13 = lVar1 + iVar4;
  (**(code **)(lVar15 + 0x30))(lVar13,1,DVar8.unknown);
  if ((int)lVar13 == 0) {
    (*pcVar12)(lVar1 + iVar4,DVar8.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x24) + 8));
  lVar1 = lVar1 + *(int *)(lVar6 + 0x28);
  lVar15 = 0;
  FUN_10045bd80();
  lVar13 = lVar1;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(lVar1,1,lVar15);
  if ((int)lVar13 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
    (*pcVar12)(lVar1 + *(int *)(lVar15 + 0x18),DVar8.unknown);
  }
  _swift_deallocObject(unaff_x20,*(long *)(lVar17 + 0x40) + uVar11,bVar2 | bVar3 | 7);
  return;
}



/* Address: 0x1000c5b6c | FUN_1000c5b6c */

void FUN_1000c5b6c(void)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  UUID UVar7;
  Date DVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  code *pcVar12;
  long unaff_x20;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar5 = 0;
  FUN_1000b292c();
  bVar2 = *(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar14 = (ulong)bVar2 + 0x10 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  lVar13 = *(long *)(*(long *)(lVar5 + -8) + 0x40);
  lVar6 = 0;
  FUN_10045ba0c();
  lVar17 = *(long *)(lVar6 + -8);
  bVar3 = *(byte *)(lVar17 + 0x50);
  uVar11 = uVar14 + lVar13 + (ulong)bVar3 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar13 = lVar1 + *(int *)(lVar5 + 0x18);
  lVar15 = lVar13;
  (**(code **)(lVar17 + 0x30))(lVar13,1,lVar6);
  if ((int)lVar15 == 0) {
    UVar7 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar13,UVar7.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x14) + 8));
    iVar4 = *(int *)(lVar6 + 0x1c);
    DVar8 = Foundation::Date::typeMetadataAccessor();
    lVar16 = *(long *)(DVar8.unknown + -8);
    pcVar12 = *(code **)(lVar16 + 8);
    (*pcVar12)(lVar13 + iVar4,DVar8.unknown);
    iVar4 = *(int *)(lVar6 + 0x20);
    lVar15 = lVar13 + iVar4;
    (**(code **)(lVar16 + 0x30))(lVar15,1,DVar8.unknown);
    if ((int)lVar15 == 0) {
      (*pcVar12)(lVar13 + iVar4,DVar8.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + *(int *)(lVar6 + 0x24) + 8));
    lVar15 = lVar13 + *(int *)(lVar6 + 0x28);
    lVar9 = 0;
    FUN_10045bd80();
    lVar16 = lVar15;
    (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar15,1,lVar9);
    if ((int)lVar16 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 0x10));
      (*pcVar12)(lVar15 + *(int *)(lVar9 + 0x18),DVar8.unknown);
    }
  }
  puVar10 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar13 + *(int *)(puVar10 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar5 + 0x1c) + 8));
  lVar13 = lVar1 + *(int *)(lVar5 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar13 + 8));
  _swift_release(*(undefined8 *)(lVar13 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar5 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  lVar1 = unaff_x20 + uVar11;
  UVar7 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar7.unknown + -8) + 8))(lVar1,UVar7.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x14) + 8));
  iVar4 = *(int *)(lVar6 + 0x1c);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar8.unknown + -8);
  pcVar12 = *(code **)(lVar15 + 8);
  (*pcVar12)(lVar1 + iVar4,DVar8.unknown);
  iVar4 = *(int *)(lVar6 + 0x20);
  lVar13 = lVar1 + iVar4;
  (**(code **)(lVar15 + 0x30))(lVar13,1,DVar8.unknown);
  if ((int)lVar13 == 0) {
    (*pcVar12)(lVar1 + iVar4,DVar8.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar6 + 0x24) + 8));
  lVar1 = lVar1 + *(int *)(lVar6 + 0x28);
  lVar15 = 0;
  FUN_10045bd80();
  lVar13 = lVar1;
  (**(code **)(*(long *)(lVar15 + -8) + 0x30))(lVar1,1,lVar15);
  if ((int)lVar13 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
    (*pcVar12)(lVar1 + *(int *)(lVar15 + 0x18),DVar8.unknown);
  }
  _swift_deallocObject(unaff_x20,*(long *)(lVar17 + 0x40) + uVar11,bVar2 | bVar3 | 7);
  return;
}



/* Address: 0x1000c5e68 | FUN_1000c5e68 */

void FUN_1000c5e68(void)

{
  FUN_1000c5e7c(FUN_10045ba0c,FUN_1000be034);
  return;
}



/* Address: 0x1000c5e7c | FUN_1000c5e7c */

void FUN_1000c5e7c(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  (*param_1)();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001000c5eec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (unaff_x20 + uVar3,unaff_x20 + (uVar3 + lVar4 + uVar2 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c5ef0 | FUN_1000c5ef0 */

void FUN_1000c5ef0(void)

{
  FUN_1000c5efc(FUN_1000b7ac4);
  return;
}



/* Address: 0x1000c5efc | FUN_1000c5efc */

void FUN_1000c5efc(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001000c5f44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c5f48 | thunk_FUN_10009cde8 */

void thunk_FUN_10009cde8(void)

{
  FUN_10009cde8();
  return;
}



/* Address: 0x1000c5f4c | thunk_FUN_10009ce14 */

void thunk_FUN_10009ce14(void)

{
  FUN_10009ce14();
  return;
}



/* Address: 0x1000c5f50 | FUN_1000c5f50 */

void FUN_1000c5f50(void)

{
  FUN_1000c6168(FUN_1000b8620);
  return;
}



/* Address: 0x1000c5f5c | FUN_1000c5f5c */

void FUN_1000c5f5c(void)

{
  long lVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  UUID UVar6;
  Date DVar7;
  undefined *puVar8;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  
  lVar4 = 0;
  FUN_1000b292c();
  lVar14 = *(long *)(lVar4 + -8);
  uVar12 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar13 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar13;
  _swift_release(*(undefined8 *)(lVar1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x18));
  _swift_release(*(undefined8 *)(lVar1 + 0x20));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar5 = 0;
  FUN_10045ba0c();
  lVar11 = lVar2;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar2,1,lVar5);
  if ((int)lVar11 == 0) {
    UVar6 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 8))(lVar2,UVar6.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x14) + 8));
    iVar3 = *(int *)(lVar5 + 0x1c);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    lVar10 = *(long *)(DVar7.unknown + -8);
    pcVar9 = *(code **)(lVar10 + 8);
    (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    iVar3 = *(int *)(lVar5 + 0x20);
    lVar11 = lVar2 + iVar3;
    (**(code **)(lVar10 + 0x30))(lVar11,1,DVar7.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar9)(lVar2 + iVar3,DVar7.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar5 + 0x24) + 8));
    lVar11 = lVar2 + *(int *)(lVar5 + 0x28);
    lVar10 = 0;
    FUN_10045bd80();
    lVar5 = lVar11;
    (**(code **)(*(long *)(lVar10 + -8) + 0x30))(lVar11,1,lVar10);
    if ((int)lVar5 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x10));
      (*pcVar9)(lVar11 + *(int *)(lVar10 + 0x18),DVar7.unknown);
    }
  }
  lVar11 = *(long *)(lVar14 + 0x40);
  puVar8 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(puVar8 + 0x1c)));
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar4 + 0x1c) + 8));
  lVar2 = lVar1 + *(int *)(lVar4 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x10));
  lVar1 = lVar1 + *(int *)(lVar4 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  _swift_deallocObject(unaff_x20,lVar11 + uVar13,uVar12 | 7);
  return;
}



/* Address: 0x1000c615c | FUN_1000c615c */

void FUN_1000c615c(void)

{
  FUN_1000c6168(FUN_1000b8960);
  return;
}



/* Address: 0x1000c6168 | FUN_1000c6168 */

void FUN_1000c6168(code *param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1000b292c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (*param_1)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1000c61a4 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x1000c61a8 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x1000c61ac | thunk_FUN_1000b7c0c */

void thunk_FUN_1000b7c0c(void)

{
  FUN_1000b7c0c();
  return;
}



/* Address: 0x1000c61b0 | FUN_1000c61b0 */

void FUN_1000c61b0(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000c61dc | FUN_1000c61dc */

void FUN_1000c61dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  SwitchToggleStyle SVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 *local_98;
  undefined8 *puStack_90;
  undefined *local_88;
  undefined8 *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  
  puVar1 = &DAT_100fabb20;
  FUN_100005c24(&DAT_100fabb20,&DAT_100c29d60);
  puVar2 = &DAT_100fa6e70;
  FUN_100005c24(&DAT_100fa6e70,&DAT_100c239a0);
  uVar3 = 0xff;
  FUN_10045ba0c();
  puVar4 = &DAT_100fabb18;
  FUN_100005c24(&DAT_100fabb18,&DAT_100c29d58);
  puVar5 = &DAT_100fabbb0;
  FUN_100005c24(&DAT_100fabbb0,&DAT_100c29df8);
  puVar6 = &DAT_100fabb10;
  FUN_100005c24(&DAT_100fabb10,&DAT_100c29d50);
  uVar7 = 0xff;
  FUN_1000c99d0();
  puVar8 = &DAT_100fabb78;
  FUN_100005c24(&DAT_100fabb78,&DAT_100c29de0);
  puVar9 = &DAT_100fabb08;
  FUN_100005c24(&DAT_100fabb08,&DAT_100c29d48);
  puVar10 = &DAT_100fabb38;
  FUN_100005c24(&DAT_100fabb38,&DAT_100c29d98);
  puVar11 = &DAT_100fabb00;
  FUN_100005c24(&DAT_100fabb00,&DAT_100c29d40);
  SVar12 = SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  puVar18 = PTR_typeMetadataAccessor_100eaabd0;
  puVar13 = &DAT_100fabb30;
  FUN_100016eac(&DAT_100fabb30,&DAT_100fabb00,&DAT_100c29d40,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar14 = &DAT_100fa9348;
  FUN_100003a00(&DAT_100fa9348,puVar18,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_100eaabc0);
  ppuVar15 = &local_a8;
  local_a8 = puVar11;
  puStack_a0 = SVar12.unknown;
  local_98 = (undefined8 *)puVar13;
  puStack_90 = (undefined8 *)puVar14;
  _swift_getOpaqueTypeConformance2
            (ppuVar15,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_toggleStyle<A_where_A1:_SwiftUI_ToggleStyle>(A1)__>_some>>_100eab3f0
             ,1);
  ppuVar16 = ppuVar15;
  FUN_1000c301c();
  puVar13 = 
  PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
  ;
  ppuVar17 = &local_a8;
  local_a8 = puVar9;
  puStack_a0 = puVar10;
  local_98 = ppuVar15;
  puStack_90 = ppuVar16;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puVar9 = &DAT_100fabb80;
  FUN_100003a00(&DAT_100fabb80,FUN_1000c99d0,&TargetProtocolConformanceDescriptor_100c2a440);
  puVar10 = puVar9;
  FUN_1000c31b8();
  ppuVar15 = &local_a8;
  local_a8 = puVar6;
  puStack_a0 = (undefined *)uVar7;
  local_98 = (undefined8 *)puVar8;
  puStack_90 = ppuVar17;
  local_88 = puVar9;
  puStack_80 = (undefined8 *)puVar10;
  _swift_getOpaqueTypeConformance2
            (ppuVar15,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A,B_where_A1:_Swift_Identifiable,B1:_SwiftUI_View>(item:_SwiftUI_Binding<A1_>,onDismiss:_(()__>_())_,content:_(A1)__>_B1___>_some>>_100eab5b0
             ,1);
  puVar6 = &DAT_100fabbb8;
  FUN_100005c24(&DAT_100fabbb8,&DAT_100c29e00);
  puVar8 = &DAT_100fa6e58;
  FUN_100005c24(&DAT_100fa6e58,&DAT_100c26330);
  puVar18 = puVar8;
  FUN_1000c32d4();
  puVar19 = puVar18;
  FUN_100008378();
  puVar9 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar11 = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  puVar10 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_a0 = PTR___type_metadata_for_Swift_String_100eac208;
  puStack_90 = (undefined8 *)PTR___type_metadata_for_SwiftUI_Text_100eab358;
  local_88 = PTR___type_metadata_for_Swift_String_100eac208;
  local_68 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  ppuVar17 = &local_a8;
  local_a8 = puVar6;
  local_98 = (undefined8 *)puVar8;
  puStack_80 = (undefined8 *)puVar18;
  local_78 = puVar19;
  puStack_70 = puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar17,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B,C,D_where_A1:_Swift_StringProtocol,B1:_SwiftUI_View,C1:_SwiftUI_View>(_:_A1,isPresented:_SwiftUI_Binding<Swift_Bool>,presenting:_D1_,actions:_(D1)__>_B1,message:_(D1)__>_C1___>_some>>_100eab560
             ,1);
  ppuVar16 = &local_a8;
  local_a8 = puVar4;
  puStack_a0 = puVar5;
  local_98 = ppuVar15;
  puStack_90 = ppuVar17;
  _swift_getOpaqueTypeConformance2(ppuVar16,puVar13,1);
  puVar4 = &DAT_100fa6e80;
  FUN_100016eac(&DAT_100fa6e80,&DAT_100fa6e70,&DAT_100c239a0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puStack_a0 = puVar14;
  puStack_90 = (undefined8 *)puVar11;
  local_68 = puVar10;
  local_a8 = puVar1;
  local_98 = (undefined8 *)puVar2;
  local_88 = (undefined *)uVar3;
  puStack_80 = ppuVar16;
  local_78 = puVar19;
  puStack_70 = puVar4;
  _swift_getOpaqueTypeConformance2
            (&local_a8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_confirmationDialog<A,B,C,D_where_A1:_Swift_StringProtocol,B1:_SwiftUI_View,C1:_SwiftUI_View>(_:_A1,isPresented:_SwiftUI_Binding<Swift_Bool>,titleVisibility:_SwiftUI_Visibility,presenting:_D1_,actions:_(D1)__>_B1,message:_(D1)__>_C1___>_some>>_100eab4b8
             ,1);
  return;
}



/* Address: 0x1000c6508 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c650c | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6510 | thunk_FUN_1000c348c */

void thunk_FUN_1000c348c(void)

{
  thunk_FUN_1000c348c();
  return;
}



/* Address: 0x1000c6514 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6518 | thunk_FUN_1000c348c */

void thunk_FUN_1000c348c(void)

{
  thunk_FUN_1000c348c();
  return;
}



/* Address: 0x1000c651c | thunk_FUN_1000c348c */

void thunk_FUN_1000c348c(void)

{
  thunk_FUN_1000c348c();
  return;
}



/* Address: 0x1000c6520 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6524 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6528 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c652c | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6530 | thunk_FUN_1000c5084 */

void thunk_FUN_1000c5084(void)

{
  thunk_FUN_1000c5084();
  return;
}



/* Address: 0x1000c6534 | thunk_FUN_1000c5084 */

void thunk_FUN_1000c5084(void)

{
  thunk_FUN_1000c5084();
  return;
}



/* Address: 0x1000c6538 | thunk_FUN_1000c503c */

void thunk_FUN_1000c503c(void)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1000b292c();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar3 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar1 = (undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(lVar2 + -8) + 0x40) + uVar3 + 7 & 0xfffffffffffffff8));
  FUN_1000c384c(unaff_x20 + uVar3,*puVar1,puVar1[1]);
  return;
}



/* Address: 0x1000c653c | thunk_FUN_1000c5084 */

void thunk_FUN_1000c5084(void)

{
  thunk_FUN_1000c5084();
  return;
}



/* Address: 0x1000c6540 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6544 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6548 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c654c | thunk_FUN_1000c55cc */

void thunk_FUN_1000c55cc(void)

{
  FUN_1000c55cc();
  return;
}



/* Address: 0x1000c6550 | thunk_FUN_1000c55cc */

void thunk_FUN_1000c55cc(void)

{
  FUN_1000c55cc();
  return;
}



/* Address: 0x1000c6554 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c6558 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}



/* Address: 0x1000c655c | thunk_FUN_1000c5b6c */

void thunk_FUN_1000c5b6c(void)

{
  thunk_FUN_1000c5b6c();
  return;
}



/* Address: 0x1000c6560 | thunk_FUN_1000c5f5c */

void thunk_FUN_1000c5f5c(void)

{
  thunk_FUN_1000c5f5c();
  return;
}


