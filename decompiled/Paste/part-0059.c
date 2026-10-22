/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000b25b4 | FUN_1000b25b4 */

void FUN_1000b25b4(long param_1,long param_2)

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



/* Address: 0x1000b25c8 | FUN_1000b25c8 */

void FUN_1000b25c8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000b25d0 | thunk_FUN_100004214 */

void thunk_FUN_100004214(void)

{
  FUN_100004214();
  return;
}



/* Address: 0x1000b25d4 | FUN_1000b25d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b25d4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000b25f8 | FUN_1000b25f8 */

void FUN_1000b25f8(void)

{
  long unaff_x20;
  
  objc_stub::close(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000b2600 | FUN_1000b2600 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b2600(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000b262c | thunk_FUN_10008d8dc */

void thunk_FUN_10008d8dc(void)

{
  FUN_10008d8dc();
  return;
}



/* Address: 0x1000b2630 | FUN_1000b2630 */

void FUN_1000b2630(void)

{
  FUN_1000b098c();
  return;
}



/* Address: 0x1000b2638 | FUN_1000b2638 */

void FUN_1000b2638(void)

{
  FUN_1000b11ac();
  return;
}



/* Address: 0x1000b2640 | FUN_1000b2640 */

void FUN_1000b2640(void)

{
  FUN_1000b1370();
  return;
}



/* Address: 0x1000b2648 | FUN_1000b2648 */

void FUN_1000b2648(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faba18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c95db0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c95db0,&DAT_100f32960);
  DAT_100faba18 = pTVar1;
  return;
}



/* Address: 0x1000b2688 | FUN_1000b2688 */

void FUN_1000b2688(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000b26ac | FUN_1000b26ac */

void FUN_1000b26ac(void)

{
  FUN_1000b1c94();
  return;
}



/* Address: 0x1000b26b4 | FUN_1000b26b4 */

undefined1  [16] FUN_1000b26b4(void)

{
  return ZEXT816(0x100eb4410);
}



/* Address: 0x1000b26c4 | FUN_1000b26c4 */

void FUN_1000b26c4(long param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = 0;
  FUN_1000b292c();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  FUN_1000b2714();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  FUN_10000cbb0(param_1);
  _swift_retain(uVar2);
  FUN_1000b2758(param_1);
  return;
}



/* Address: 0x1000b2714 | FUN_1000b2714 */

void FUN_1000b2714(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100faba28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1000b292c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c29ce8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c29ce8,uVar1);
  DAT_100faba28 = pTVar2;
  return;
}



/* Address: 0x1000b2758 | FUN_1000b2758 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b281c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b2758(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ObservedObject<undefined> OVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  long lVar9;
  ulong local_70 [2];
  
  puVar2 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar8 = (long)local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12;
  uVar3 = 0;
  FUN_1000c8fd0();
  puVar4 = &DAT_100faba38;
  FUN_100003a00(&DAT_100faba38,FUN_1000c8fd0,&TargetProtocolConformanceDescriptor_100c2a478);
  OVar5 = SwiftUI::ObservedObject::init(puVar4,uVar3,puVar4);
  *param_1 = OVar5.unknown;
  param_1[1] = uVar3;
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  local_70[0] = 0;
  local_70[1] = 0xe000000000000000;
  SwiftUI::State::init(param_1 + 2,OVar5.unknown,PTR___type_metadata_for_Swift_String_100eac208);
  lVar6 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar6 + 0x18);
  lVar7 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar9,1,1,lVar7);
  FUN_100011090(lVar9,lVar8,&DAT_100faba30,&DAT_100c29c60);
  SwiftUI::State::init((long)param_1 + (long)iVar1,lVar7,puVar2);
  FUN_100005808(lVar9,&DAT_100faba30,&DAT_100c29c60);
  local_70[0] = local_70[0] & 0xffffffffffffff00;
  SwiftUI::State::init
            ((long)param_1 + (long)*(int *)(lVar6 + 0x1c),lVar7,
             PTR___type_metadata_for_Swift_Bool_100eac570);
  local_70[0] = 0;
  local_70[1] = 0xe000000000000000;
  SwiftUI::State::init((long)param_1 + (long)*(int *)(lVar6 + 0x20),lVar7,puVar4);
  iVar1 = *(int *)(lVar6 + 0x24);
  local_70[0] = 0;
  local_70[1] = 0;
  puVar2 = &DAT_100fa8170;
  FUN_1000037f0(&DAT_100fa8170,&DAT_100c24ca0);
  SwiftUI::State::init((long)param_1 + (long)iVar1,puVar2,puVar2);
  return;
}



/* Address: 0x1000b292c | FUN_1000b292c */

void FUN_1000b292c(undefined8 param_1)

{
  if (DAT_100fabaa8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca22d8);
  return;
}



/* Address: 0x1000b2964 | FUN_1000b2964 */

long * FUN_1000b2964(long *param_1,long *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  void *pvVar10;
  UUID UVar11;
  Date DVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar16 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar16;
    param_1[2] = param_2[2];
    lVar20 = param_2[4];
    lVar22 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = lVar22;
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    lVar9 = 0;
    FUN_10045ba0c();
    lVar23 = *(long *)(lVar9 + -8);
    pcVar21 = *(code **)(lVar23 + 0x30);
    _swift_retain(lVar16);
    _swift_bridgeObjectRetain(lVar22);
    _swift_retain(lVar20);
    pvVar10 = pvVar2;
    (*pcVar21)(pvVar2,1,lVar9);
    if ((int)pvVar10 == 0) {
      UVar11 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar11.unknown + -8) + 0x10))(pvVar1,pvVar2,UVar11.unknown);
      puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar9 + 0x14));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x14));
      uVar17 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar17;
      *(undefined1 *)((long)pvVar1 + (long)*(int *)(lVar9 + 0x18)) =
           *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x18));
      iVar7 = *(int *)(lVar9 + 0x1c);
      DVar12 = Foundation::Date::typeMetadataAccessor();
      lVar22 = *(long *)(DVar12.unknown + -8);
      pcVar21 = *(code **)(lVar22 + 0x10);
      _swift_bridgeObjectRetain(uVar17);
      (*pcVar21)((long)pvVar1 + (long)iVar7,(long)pvVar2 + (long)iVar7,DVar12.unknown);
      lVar20 = (long)*(int *)(lVar9 + 0x20);
      lVar16 = (long)pvVar2 + lVar20;
      (**(code **)(lVar22 + 0x30))(lVar16,1,DVar12.unknown);
      if ((int)lVar16 == 0) {
        (*pcVar21)((long)pvVar1 + lVar20,(long)pvVar2 + lVar20,DVar12.unknown);
        (**(code **)(lVar22 + 0x38))((long)pvVar1 + lVar20,0,1,DVar12.unknown);
      }
      else {
        puVar13 = &DAT_100fa6660;
        FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
        _memcpy((void *)((long)pvVar1 + lVar20),(void *)((long)pvVar2 + lVar20),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar9 + 0x24));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x24));
      uVar17 = puVar6[1];
      *puVar5 = *puVar6;
      puVar5[1] = uVar17;
      puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar9 + 0x28));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x28));
      lVar16 = 0;
      FUN_10045bd80();
      lVar20 = *(long *)(lVar16 + -8);
      pcVar19 = *(code **)(lVar20 + 0x30);
      _swift_bridgeObjectRetain(uVar17);
      puVar14 = puVar6;
      (*pcVar19)(puVar6,1,lVar16);
      if ((int)puVar14 == 0) {
        *puVar5 = *puVar6;
        uVar17 = puVar6[2];
        uVar18 = puVar6[1];
        puVar5[2] = puVar6[2];
        puVar5[1] = uVar18;
        iVar7 = *(int *)(lVar16 + 0x18);
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar17);
        (*pcVar21)((long)puVar5 + (long)iVar7,(long)puVar6 + (long)iVar7,DVar12.unknown);
        (**(code **)(lVar20 + 0x38))(puVar5,0,1,lVar16);
      }
      else {
        puVar13 = &DAT_100faba40;
        FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
        _memcpy(puVar5,puVar6,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      (**(code **)(lVar23 + 0x38))(pvVar1,0,1,lVar9);
    }
    else {
      puVar13 = &DAT_100faba30;
      FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar13 = &DAT_100faba48;
    FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar13 + 0x1c)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar13 + 0x1c));
    iVar7 = *(int *)(param_3 + 0x20);
    puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *puVar3 = *puVar4;
    uVar17 = *(undefined8 *)(puVar4 + 8);
    *(undefined8 *)(puVar3 + 8) = uVar17;
    puVar5 = (undefined8 *)((long)param_1 + (long)iVar7);
    puVar6 = (undefined8 *)((long)param_2 + (long)iVar7);
    *puVar5 = *puVar6;
    uVar18 = puVar6[2];
    uVar24 = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar5[1] = uVar24;
    puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar6 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    *puVar5 = *puVar6;
    lVar16 = puVar6[2];
    uVar25 = puVar6[1];
    puVar5[2] = puVar6[2];
    puVar5[1] = uVar25;
    _swift_retain();
    _swift_retain(uVar17);
    _swift_bridgeObjectRetain(uVar24);
    _swift_retain(uVar18);
    _swift_bridgeObjectRetain(uVar25);
  }
  else {
    lVar16 = *param_2;
    *param_1 = lVar16;
    uVar15 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar16 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar16);
  return param_1;
}



/* Address: 0x1000b2d20 | FUN_1000b2d20 */

void FUN_1000b2d20(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  UUID UVar5;
  Date DVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  lVar1 = param_1 + *(int *)(param_2 + 0x18);
  lVar3 = 0;
  FUN_10045ba0c();
  lVar4 = lVar1;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(lVar1,1,lVar3);
  if ((int)lVar4 == 0) {
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar5.unknown + -8) + 8))(lVar1,UVar5.unknown);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x14) + 8));
    iVar2 = *(int *)(lVar3 + 0x1c);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar6.unknown + -8);
    pcVar8 = *(code **)(lVar9 + 8);
    (*pcVar8)(lVar1 + iVar2,DVar6.unknown);
    iVar2 = *(int *)(lVar3 + 0x20);
    lVar4 = lVar1 + iVar2;
    (**(code **)(lVar9 + 0x30))(lVar4,1,DVar6.unknown);
    if ((int)lVar4 == 0) {
      (*pcVar8)(lVar1 + iVar2,DVar6.unknown);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x24) + 8));
    lVar4 = lVar1 + *(int *)(lVar3 + 0x28);
    lVar9 = 0;
    FUN_10045bd80();
    lVar3 = lVar4;
    (**(code **)(*(long *)(lVar9 + -8) + 0x30))(lVar4,1,lVar9);
    if ((int)lVar3 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x10));
      (*pcVar8)(lVar4 + *(int *)(lVar9 + 0x18),DVar6.unknown);
    }
  }
  puVar7 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar7 + 0x1c)));
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  lVar1 = param_1 + *(int *)(param_2 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  _swift_release(*(undefined8 *)(lVar1 + 0x10));
  param_1 = param_1 + *(int *)(param_2 + 0x24);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1000b2ed4 | FUN_1000b2ed4 */

undefined8 * FUN_1000b2ed4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  void *pvVar9;
  UUID UVar10;
  Date DVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  code *pcVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  uVar15 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar15;
  param_1[2] = param_2[2];
  uVar19 = param_2[4];
  uVar16 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar16;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar8 = 0;
  FUN_10045ba0c();
  lVar22 = *(long *)(lVar8 + -8);
  pcVar20 = *(code **)(lVar22 + 0x30);
  _swift_retain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_retain(uVar19);
  pvVar9 = pvVar2;
  (*pcVar20)(pvVar2,1,lVar8);
  if ((int)pvVar9 == 0) {
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar10.unknown + -8) + 0x10))(pvVar1,pvVar2,UVar10.unknown);
    puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x14));
    puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x14));
    uVar15 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar15;
    *(undefined1 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x18));
    iVar7 = *(int *)(lVar8 + 0x1c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar21 = *(long *)(DVar11.unknown + -8);
    pcVar20 = *(code **)(lVar21 + 0x10);
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar20)((long)pvVar1 + (long)iVar7,(long)pvVar2 + (long)iVar7,DVar11.unknown);
    lVar17 = (long)*(int *)(lVar8 + 0x20);
    lVar13 = (long)pvVar2 + lVar17;
    (**(code **)(lVar21 + 0x30))(lVar13,1,DVar11.unknown);
    if ((int)lVar13 == 0) {
      (*pcVar20)((long)pvVar1 + lVar17,(long)pvVar2 + lVar17,DVar11.unknown);
      (**(code **)(lVar21 + 0x38))((long)pvVar1 + lVar17,0,1,DVar11.unknown);
    }
    else {
      puVar12 = &DAT_100fa6660;
      FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
      _memcpy((void *)((long)pvVar1 + lVar17),(void *)((long)pvVar2 + lVar17),
              *(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x24));
    puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x24));
    uVar15 = puVar6[1];
    *puVar5 = *puVar6;
    puVar5[1] = uVar15;
    puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x28));
    puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x28));
    lVar13 = 0;
    FUN_10045bd80();
    lVar17 = *(long *)(lVar13 + -8);
    pcVar18 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(uVar15);
    puVar14 = puVar6;
    (*pcVar18)(puVar6,1,lVar13);
    if ((int)puVar14 == 0) {
      *puVar5 = *puVar6;
      uVar15 = puVar6[2];
      uVar19 = puVar6[1];
      puVar5[2] = puVar6[2];
      puVar5[1] = uVar19;
      iVar7 = *(int *)(lVar13 + 0x18);
      _swift_bridgeObjectRetain(uVar19);
      _swift_bridgeObjectRetain(uVar15);
      (*pcVar20)((long)puVar5 + (long)iVar7,(long)puVar6 + (long)iVar7,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))(puVar5,0,1,lVar13);
    }
    else {
      puVar12 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar5,puVar6,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
    }
    (**(code **)(lVar22 + 0x38))(pvVar1,0,1,lVar8);
  }
  else {
    puVar12 = &DAT_100faba30;
    FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar12 + -8) + 0x40));
  }
  puVar12 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar12 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar12 + 0x1c));
  iVar7 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar3 = *puVar4;
  uVar19 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar3 + 8) = uVar19;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar7);
  puVar6 = (undefined8 *)((long)param_2 + (long)iVar7);
  *puVar5 = *puVar6;
  uVar16 = puVar6[2];
  uVar23 = puVar6[1];
  puVar5[2] = puVar6[2];
  puVar5[1] = uVar23;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar5 = *param_2;
  uVar15 = param_2[2];
  uVar24 = param_2[1];
  puVar5[2] = param_2[2];
  puVar5[1] = uVar24;
  _swift_retain();
  _swift_retain(uVar19);
  _swift_bridgeObjectRetain(uVar23);
  _swift_retain(uVar16);
  _swift_bridgeObjectRetain(uVar24);
  _swift_retain(uVar15);
  return param_1;
}



/* Address: 0x1000b3264 | FUN_1000b3264 */

undefined8 * FUN_1000b3264(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  long lVar7;
  undefined8 *puVar8;
  void *pvVar9;
  UUID UVar10;
  Date DVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  
  *param_1 = *param_2;
  uVar18 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar18);
  param_1[2] = param_2[2];
  uVar18 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar18);
  uVar18 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar7 = 0;
  FUN_10045ba0c();
  lVar21 = *(long *)(lVar7 + -8);
  pcVar16 = *(code **)(lVar21 + 0x30);
  puVar8 = puVar1;
  (*pcVar16)(puVar1,1,lVar7);
  pvVar9 = pvVar2;
  (*pcVar16)(pvVar2,1,lVar7);
  if ((int)puVar8 == 0) {
    if ((int)pvVar9 == 0) {
      UVar10 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar10.unknown + -8) + 0x18))(puVar1,pvVar2,UVar10.unknown);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x14));
      puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x14));
      *puVar8 = *puVar3;
      uVar18 = puVar8[1];
      puVar8[1] = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar18);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x18)) =
           *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x18));
      iVar6 = *(int *)(lVar7 + 0x1c);
      DVar11 = Foundation::Date::typeMetadataAccessor();
      lVar17 = *(long *)(DVar11.unknown + -8);
      pcVar20 = *(code **)(lVar17 + 0x18);
      (*pcVar20)((long)puVar1 + (long)iVar6,(long)pvVar2 + (long)iVar6,DVar11.unknown);
      lVar19 = (long)*(int *)(lVar7 + 0x20);
      pcVar16 = *(code **)(lVar17 + 0x30);
      lVar21 = (long)puVar1 + lVar19;
      (*pcVar16)(lVar21,1,DVar11.unknown);
      lVar12 = (long)pvVar2 + lVar19;
      (*pcVar16)(lVar12,1,DVar11.unknown);
      if ((int)lVar21 == 0) {
        if ((int)lVar12 != 0) {
          (**(code **)(lVar17 + 8))((long)puVar1 + lVar19,DVar11.unknown);
          goto LAB_1000b3674;
        }
        (*pcVar20)((long)puVar1 + lVar19,(long)pvVar2 + lVar19,DVar11.unknown);
      }
      else if ((int)lVar12 == 0) {
        (**(code **)(lVar17 + 0x10))((long)puVar1 + lVar19,(long)pvVar2 + lVar19,DVar11.unknown);
        (**(code **)(lVar17 + 0x38))((long)puVar1 + lVar19,0,1,DVar11.unknown);
      }
      else {
LAB_1000b3674:
        puVar13 = &DAT_100fa6660;
        FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
        _memcpy((void *)((long)puVar1 + lVar19),(void *)((long)pvVar2 + lVar19),
                *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      }
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
      puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x24));
      *puVar8 = *puVar3;
      uVar18 = puVar8[1];
      puVar8[1] = puVar3[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar18);
      puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
      puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x28));
      lVar7 = 0;
      FUN_10045bd80();
      lVar21 = *(long *)(lVar7 + -8);
      pcVar16 = *(code **)(lVar21 + 0x30);
      puVar14 = puVar8;
      (*pcVar16)(puVar8,1,lVar7);
      puVar15 = puVar3;
      (*pcVar16)(puVar3,1,lVar7);
      if ((int)puVar14 == 0) {
        if ((int)puVar15 == 0) {
          *puVar8 = *puVar3;
          uVar18 = puVar8[1];
          puVar8[1] = puVar3[1];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar18);
          uVar18 = puVar8[2];
          puVar8[2] = puVar3[2];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRelease(uVar18);
          (*pcVar20)((long)puVar8 + (long)*(int *)(lVar7 + 0x18),
                     (long)puVar3 + (long)*(int *)(lVar7 + 0x18),DVar11.unknown);
          goto LAB_1000b37b0;
        }
        FUN_10005241c(puVar8,FUN_10045bd80);
      }
      else if ((int)puVar15 == 0) {
        *puVar8 = *puVar3;
        puVar8[1] = puVar3[1];
        uVar18 = puVar3[2];
        puVar8[2] = uVar18;
        iVar6 = *(int *)(lVar7 + 0x18);
        pcVar16 = *(code **)(lVar17 + 0x10);
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar18);
        (*pcVar16)((long)puVar8 + (long)iVar6,(long)puVar3 + (long)iVar6,DVar11.unknown);
        pcVar16 = *(code **)(lVar21 + 0x38);
        goto LAB_1000b3654;
      }
      puVar13 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar8,puVar3,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
      goto LAB_1000b37b0;
    }
    FUN_10005241c(puVar1,FUN_10045ba0c);
  }
  else if ((int)pvVar9 == 0) {
    UVar10 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar10.unknown + -8) + 0x10))(puVar1,pvVar2,UVar10.unknown);
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x14));
    puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x14));
    *puVar8 = *puVar3;
    uVar18 = puVar3[1];
    puVar8[1] = uVar18;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x18)) =
         *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x18));
    iVar6 = *(int *)(lVar7 + 0x1c);
    DVar11 = Foundation::Date::typeMetadataAccessor();
    lVar19 = *(long *)(DVar11.unknown + -8);
    pcVar16 = *(code **)(lVar19 + 0x10);
    _swift_bridgeObjectRetain(uVar18);
    (*pcVar16)((long)puVar1 + (long)iVar6,(long)pvVar2 + (long)iVar6,DVar11.unknown);
    lVar17 = (long)*(int *)(lVar7 + 0x20);
    lVar12 = (long)pvVar2 + lVar17;
    (**(code **)(lVar19 + 0x30))(lVar12,1,DVar11.unknown);
    if ((int)lVar12 == 0) {
      (*pcVar16)((long)puVar1 + lVar17,(long)pvVar2 + lVar17,DVar11.unknown);
      (**(code **)(lVar19 + 0x38))((long)puVar1 + lVar17,0,1,DVar11.unknown);
    }
    else {
      puVar13 = &DAT_100fa6660;
      FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
      _memcpy((void *)((long)puVar1 + lVar17),(void *)((long)pvVar2 + lVar17),
              *(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x24));
    puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x24));
    *puVar8 = *puVar3;
    uVar18 = puVar3[1];
    puVar8[1] = uVar18;
    puVar8 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar7 + 0x28));
    puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x28));
    lVar12 = 0;
    FUN_10045bd80();
    lVar17 = *(long *)(lVar12 + -8);
    pcVar20 = *(code **)(lVar17 + 0x30);
    _swift_bridgeObjectRetain(uVar18);
    puVar14 = puVar3;
    (*pcVar20)(puVar3,1,lVar12);
    if ((int)puVar14 == 0) {
      *puVar8 = *puVar3;
      puVar8[1] = puVar3[1];
      uVar18 = puVar3[2];
      puVar8[2] = uVar18;
      iVar6 = *(int *)(lVar12 + 0x18);
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar18);
      (*pcVar16)((long)puVar8 + (long)iVar6,(long)puVar3 + (long)iVar6,DVar11.unknown);
      (**(code **)(lVar17 + 0x38))(puVar8,0,1,lVar12);
    }
    else {
      puVar13 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar8,puVar3,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
    }
    pcVar16 = *(code **)(lVar21 + 0x38);
    puVar8 = puVar1;
LAB_1000b3654:
    (*pcVar16)(puVar8,0,1,lVar7);
    goto LAB_1000b37b0;
  }
  puVar13 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  _memcpy(puVar1,pvVar2,*(size_t *)(*(long *)(puVar13 + -8) + 0x40));
LAB_1000b37b0:
  puVar13 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  lVar7 = (long)*(int *)(puVar13 + 0x1c);
  uVar18 = *(undefined8 *)((long)puVar1 + lVar7);
  *(undefined8 *)((long)puVar1 + lVar7) = *(undefined8 *)((long)pvVar2 + lVar7);
  _swift_retain();
  _swift_release(uVar18);
  puVar4 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar5 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar4 = *puVar5;
  uVar18 = *(undefined8 *)(puVar4 + 8);
  *(undefined8 *)(puVar4 + 8) = *(undefined8 *)(puVar5 + 8);
  _swift_retain();
  _swift_release(uVar18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar8 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar8;
  uVar18 = puVar1[1];
  puVar1[1] = puVar8[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar18);
  uVar18 = puVar1[2];
  puVar1[2] = puVar8[2];
  _swift_retain();
  _swift_release(uVar18);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *param_2;
  uVar18 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar18);
  uVar18 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar18);
  return param_1;
}



/* Address: 0x1000b391c | FUN_1000b391c */

undefined8 * FUN_1000b391c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  UUID UVar8;
  Date DVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  param_1[4] = param_2[4];
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  FUN_10045ba0c();
  lVar13 = *(long *)(lVar6 + -8);
  pvVar7 = pvVar2;
  (**(code **)(lVar13 + 0x30))(pvVar2,1,lVar6);
  if ((int)pvVar7 == 0) {
    UVar8 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar8.unknown + -8) + 0x20))(pvVar1,pvVar2,UVar8.unknown);
    puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar6 + 0x14));
    uVar17 = *puVar4;
    puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar6 + 0x14));
    puVar5[1] = puVar4[1];
    *puVar5 = uVar17;
    *(undefined1 *)((long)pvVar1 + (long)*(int *)(lVar6 + 0x18)) =
         *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar6 + 0x18));
    iVar3 = *(int *)(lVar6 + 0x1c);
    DVar9 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar9.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x20);
    (*pcVar16)((long)pvVar1 + (long)iVar3,(long)pvVar2 + (long)iVar3,DVar9.unknown);
    lVar14 = (long)*(int *)(lVar6 + 0x20);
    lVar11 = (long)pvVar2 + lVar14;
    (**(code **)(lVar15 + 0x30))(lVar11,1,DVar9.unknown);
    if ((int)lVar11 == 0) {
      (*pcVar16)((long)pvVar1 + lVar14,(long)pvVar2 + lVar14,DVar9.unknown);
      (**(code **)(lVar15 + 0x38))((long)pvVar1 + lVar14,0,1,DVar9.unknown);
    }
    else {
      puVar10 = &DAT_100fa6660;
      FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
      _memcpy((void *)((long)pvVar1 + lVar14),(void *)((long)pvVar2 + lVar14),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    puVar4 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar6 + 0x24));
    uVar17 = *puVar4;
    puVar5 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar6 + 0x24));
    puVar5[1] = puVar4[1];
    *puVar5 = uVar17;
    puVar4 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar6 + 0x28));
    puVar5 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar6 + 0x28));
    lVar11 = 0;
    FUN_10045bd80();
    lVar14 = *(long *)(lVar11 + -8);
    puVar12 = puVar5;
    (**(code **)(lVar14 + 0x30))(puVar5,1,lVar11);
    if ((int)puVar12 == 0) {
      uVar17 = *puVar5;
      puVar4[1] = puVar5[1];
      *puVar4 = uVar17;
      puVar4[2] = puVar5[2];
      (*pcVar16)((long)puVar4 + (long)*(int *)(lVar11 + 0x18),
                 (long)puVar5 + (long)*(int *)(lVar11 + 0x18),DVar9.unknown);
      (**(code **)(lVar14 + 0x38))(puVar4,0,1,lVar11);
    }
    else {
      puVar10 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar4,puVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    (**(code **)(lVar13 + 0x38))(pvVar1,0,1,lVar6);
  }
  else {
    puVar10 = &DAT_100faba30;
    FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar10 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  *(undefined8 *)((long)pvVar1 + (long)*(int *)(puVar10 + 0x1c)) =
       *(undefined8 *)((long)pvVar2 + (long)*(int *)(puVar10 + 0x1c));
  iVar3 = *(int *)(param_3 + 0x20);
  puVar4 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar17 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar5[1] = puVar4[1];
  *puVar5 = uVar17;
  puVar4 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5 = (undefined8 *)((long)param_2 + (long)iVar3);
  puVar4[2] = puVar5[2];
  uVar17 = *puVar5;
  puVar4[1] = puVar5[1];
  *puVar4 = uVar17;
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar17 = *param_2;
  puVar4[1] = param_2[1];
  *puVar4 = uVar17;
  puVar4[2] = param_2[2];
  return param_1;
}



/* Address: 0x1000b3be4 | FUN_1000b3be4 */

undefined8 * FUN_1000b3be4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *puVar10;
  void *pvVar11;
  UUID UVar12;
  Date DVar13;
  long lVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  
  uVar8 = param_2[1];
  uVar7 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  _swift_release(uVar7);
  uVar8 = param_2[3];
  uVar7 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  uVar8 = param_1[4];
  param_1[4] = param_2[4];
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar9 = 0;
  FUN_10045ba0c();
  lVar18 = *(long *)(lVar9 + -8);
  pcVar19 = *(code **)(lVar18 + 0x30);
  puVar10 = puVar1;
  (*pcVar19)(puVar1,1,lVar9);
  pvVar11 = pvVar2;
  (*pcVar19)(pvVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)pvVar11 == 0) {
      UVar12 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar12.unknown + -8) + 0x28))(puVar1,pvVar2,UVar12.unknown);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x14));
      uVar8 = puVar6[1];
      uVar7 = puVar10[1];
      *puVar10 = *puVar6;
      puVar10[1] = uVar8;
      _swift_bridgeObjectRelease(uVar7);
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18)) =
           *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x18));
      iVar5 = *(int *)(lVar9 + 0x1c);
      DVar13 = Foundation::Date::typeMetadataAccessor();
      lVar20 = *(long *)(DVar13.unknown + -8);
      pcVar22 = *(code **)(lVar20 + 0x28);
      (*pcVar22)((long)puVar1 + (long)iVar5,(long)pvVar2 + (long)iVar5,DVar13.unknown);
      lVar21 = (long)*(int *)(lVar9 + 0x20);
      pcVar19 = *(code **)(lVar20 + 0x30);
      lVar18 = (long)puVar1 + lVar21;
      (*pcVar19)(lVar18,1,DVar13.unknown);
      lVar14 = (long)pvVar2 + lVar21;
      (*pcVar19)(lVar14,1,DVar13.unknown);
      if ((int)lVar18 == 0) {
        if ((int)lVar14 != 0) {
          (**(code **)(lVar20 + 8))((long)puVar1 + lVar21,DVar13.unknown);
          goto LAB_1000b3f70;
        }
        (*pcVar22)((long)puVar1 + lVar21,(long)pvVar2 + lVar21,DVar13.unknown);
      }
      else if ((int)lVar14 == 0) {
        (**(code **)(lVar20 + 0x20))((long)puVar1 + lVar21,(long)pvVar2 + lVar21,DVar13.unknown);
        (**(code **)(lVar20 + 0x38))((long)puVar1 + lVar21,0,1,DVar13.unknown);
      }
      else {
LAB_1000b3f70:
        puVar15 = &DAT_100fa6660;
        FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
        _memcpy((void *)((long)puVar1 + lVar21),(void *)((long)pvVar2 + lVar21),
                *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      }
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x24));
      uVar8 = puVar6[1];
      uVar7 = puVar10[1];
      *puVar10 = *puVar6;
      puVar10[1] = uVar8;
      _swift_bridgeObjectRelease(uVar7);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
      puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x28));
      lVar9 = 0;
      FUN_10045bd80();
      lVar18 = *(long *)(lVar9 + -8);
      pcVar19 = *(code **)(lVar18 + 0x30);
      puVar16 = puVar10;
      (*pcVar19)(puVar10,1,lVar9);
      puVar17 = puVar6;
      (*pcVar19)(puVar6,1,lVar9);
      if ((int)puVar16 == 0) {
        if ((int)puVar17 == 0) {
          uVar8 = puVar6[1];
          uVar7 = puVar10[1];
          *puVar10 = *puVar6;
          puVar10[1] = uVar8;
          _swift_bridgeObjectRelease(uVar7);
          uVar8 = puVar10[2];
          puVar10[2] = puVar6[2];
          _swift_bridgeObjectRelease(uVar8);
          (*pcVar22)((long)puVar10 + (long)*(int *)(lVar9 + 0x18),
                     (long)puVar6 + (long)*(int *)(lVar9 + 0x18),DVar13.unknown);
          goto LAB_1000b4080;
        }
        FUN_10005241c(puVar10,FUN_10045bd80);
      }
      else if ((int)puVar17 == 0) {
        uVar8 = *puVar6;
        puVar10[1] = puVar6[1];
        *puVar10 = uVar8;
        puVar10[2] = puVar6[2];
        (**(code **)(lVar20 + 0x20))
                  ((long)puVar10 + (long)*(int *)(lVar9 + 0x18),
                   (long)puVar6 + (long)*(int *)(lVar9 + 0x18),DVar13.unknown);
        pcVar19 = *(code **)(lVar18 + 0x38);
        goto LAB_1000b3f50;
      }
      puVar15 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar10,puVar6,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
      goto LAB_1000b4080;
    }
    FUN_10005241c(puVar1,FUN_10045ba0c);
  }
  else if ((int)pvVar11 == 0) {
    UVar12 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar12.unknown + -8) + 0x20))(puVar1,pvVar2,UVar12.unknown);
    puVar10 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x14));
    uVar8 = *puVar10;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14));
    puVar6[1] = puVar10[1];
    *puVar6 = uVar8;
    *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x18)) =
         *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x18));
    iVar5 = *(int *)(lVar9 + 0x1c);
    DVar13 = Foundation::Date::typeMetadataAccessor();
    lVar21 = *(long *)(DVar13.unknown + -8);
    pcVar19 = *(code **)(lVar21 + 0x20);
    (*pcVar19)((long)puVar1 + (long)iVar5,(long)pvVar2 + (long)iVar5,DVar13.unknown);
    lVar20 = (long)*(int *)(lVar9 + 0x20);
    lVar14 = (long)pvVar2 + lVar20;
    (**(code **)(lVar21 + 0x30))(lVar14,1,DVar13.unknown);
    if ((int)lVar14 == 0) {
      (*pcVar19)((long)puVar1 + lVar20,(long)pvVar2 + lVar20,DVar13.unknown);
      (**(code **)(lVar21 + 0x38))((long)puVar1 + lVar20,0,1,DVar13.unknown);
    }
    else {
      puVar15 = &DAT_100fa6660;
      FUN_1000037f0(&DAT_100fa6660,&DAT_100c22e18);
      _memcpy((void *)((long)puVar1 + lVar20),(void *)((long)pvVar2 + lVar20),
              *(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    puVar10 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x24));
    uVar8 = *puVar10;
    puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x24));
    puVar6[1] = puVar10[1];
    *puVar6 = uVar8;
    puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x28));
    puVar6 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar9 + 0x28));
    lVar14 = 0;
    FUN_10045bd80();
    lVar20 = *(long *)(lVar14 + -8);
    puVar16 = puVar6;
    (**(code **)(lVar20 + 0x30))(puVar6,1,lVar14);
    if ((int)puVar16 == 0) {
      uVar8 = *puVar6;
      puVar10[1] = puVar6[1];
      *puVar10 = uVar8;
      puVar10[2] = puVar6[2];
      (*pcVar19)((long)puVar10 + (long)*(int *)(lVar14 + 0x18),
                 (long)puVar6 + (long)*(int *)(lVar14 + 0x18),DVar13.unknown);
      (**(code **)(lVar20 + 0x38))(puVar10,0,1,lVar14);
    }
    else {
      puVar15 = &DAT_100faba40;
      FUN_1000037f0(&DAT_100faba40,&DAT_100c2a790);
      _memcpy(puVar10,puVar6,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
    }
    pcVar19 = *(code **)(lVar18 + 0x38);
    puVar10 = puVar1;
LAB_1000b3f50:
    (*pcVar19)(puVar10,0,1,lVar9);
    goto LAB_1000b4080;
  }
  puVar15 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  _memcpy(puVar1,pvVar2,*(size_t *)(*(long *)(puVar15 + -8) + 0x40));
LAB_1000b4080:
  puVar15 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  lVar9 = (long)*(int *)(puVar15 + 0x1c);
  uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
  *(undefined8 *)((long)puVar1 + lVar9) = *(undefined8 *)((long)pvVar2 + lVar9);
  _swift_release(uVar8);
  puVar3 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar3 = *puVar4;
  uVar8 = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar3 + 8) = *(undefined8 *)(puVar4 + 8);
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar10 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar8 = puVar10[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar10;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  uVar8 = puVar1[2];
  puVar1[2] = puVar10[2];
  _swift_release(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar8 = param_2[1];
  uVar7 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar8;
  _swift_bridgeObjectRelease(uVar7);
  uVar8 = puVar1[2];
  puVar1[2] = param_2[2];
  _swift_release(uVar8);
  return param_1;
}



/* Address: 0x1000b4194 | FUN_1000b4194 */

void FUN_1000b4194(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000b41a0 | FUN_1000b41a0 */

ulong FUN_1000b41a0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  puVar1 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001000b4228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x1000b422c | FUN_1000b422c */

void FUN_1000b422c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000b4238 | FUN_1000b4238 */

void FUN_1000b4238(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
                    /* WARNING: Could not recover jumptable at 0x0001000b42b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1000b42b8 | FUN_1000b42b8 */

void FUN_1000b42b8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_50 = &DAT_100c29c88;
  puStack_48 = &DAT_100c29ca0;
  lVar1 = 0x13f;
  FUN_1000b4348();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c29cb8;
    local_30 = &DAT_100c29ca0;
    puStack_28 = &DAT_100c29cd0;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1000b4348 | FUN_1000b4348 */

void FUN_1000b4348(void)

{
  undefined *puVar1;
  State SVar2;
  
  if (DAT_100fabab8.unknown == (undefined *)0x0) {
    puVar1 = &DAT_100faba30;
    FUN_100005c24(&DAT_100faba30,&DAT_100c29c60);
    SVar2 = SwiftUI::State::typeMetadataAccessor();
    if (puVar1 == (undefined *)0x0) {
      DAT_100fabab8 = SVar2;
    }
  }
  return;
}



/* Address: 0x1000b43a8 | FUN_1000b43a8 */

void FUN_1000b43a8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca2300,1);
  return;
}



/* Address: 0x1000b43b8 | FUN_1000b43b8 */

void FUN_1000b43b8(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSRelativeDateTimeFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setUnitsStyle_(self_00,0);
  objc_stub::setDateTimeStyle_(self_00,1);
  DAT_100fabfd8 = self_00;
  return;
}



/* Address: 0x1000b4400 | FUN_1000b4400 */

void FUN_1000b4400(undefined8 param_1)

{
  ObservedObject OVar1;
  Binding<bool> BVar2;
  Binding<bool> BVar3;
  Binding<(extension_in_SwiftUI):SwiftUI_View_sheet<A,B_where_A1:_Swift_Identifiable,B1:_SwiftUI_View>(item:_SwiftUI_Binding<A1_>,onDismiss:_(()__>______content___A1___>_B1___>_some>
  item;
  long lVar4;
  SwitchToggleStyle SVar5;
  undefined *puVar6;
  undefined *puVar7;
  HorizontalAlignment HVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  Wrapper WVar12;
  Wrapper WVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined *puVar16;
  State SVar17;
  undefined *puVar18;
  undefined *puVar19;
  MainActor *pMVar20;
  MainActor *pMVar21;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar22;
  long lVar23;
  long lVar24;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar25;
  long extraout_x8_06;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long extraout_x12;
  MainActor *unaff_x20;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  undefined8 auStack_250 [12];
  undefined **appuStack_1f0 [6];
  undefined **local_1c0;
  undefined *local_1b8;
  Binding<bool> local_1b0;
  long local_1a8;
  Binding<(extension_in_SwiftUI):SwiftUI_View_sheet<A,B_where_A1:_Swift_Identifiable,B1:_SwiftUI_View>(item:_SwiftUI_Binding<A1_>,onDismiss:_(()__>______content___A1___>_B1___>_some>
  local_1a0;
  undefined *local_198;
  undefined **local_190;
  long local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined8 local_168;
  undefined1 auStack_110 [32];
  MainActor local_f0;
  undefined7 uStack_ef;
  undefined8 local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  long local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined **local_a0;
  undefined **ppuStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  
  puVar22 = &DAT_100faba30;
  local_168 = param_1;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_100fabaf8;
  local_170 = (long)appuStack_1f0 - extraout_x8;
  FUN_1000037f0(&DAT_100fabaf8,&DAT_100c29d38);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar22 = (undefined *)(((long)appuStack_1f0 - extraout_x8) - extraout_x8_00);
  lVar4 = 0;
  local_1a0.unknown = puVar22;
  FUN_1000b292c();
  lVar23 = *(long *)(lVar4 + -8);
  lVar28 = *(long *)(lVar23 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = (long)puVar22 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  SVar5 = SwiftUI::SwitchToggleStyle::typeMetadataAccessor();
  lVar31 = *(long *)(SVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar31 + 0x40));
  lVar30 = lVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar22 = &DAT_100fabb00;
  FUN_1000037f0(&DAT_100fabb00,&DAT_100c29d40);
  appuStack_1f0[5] = (undefined **)puVar22;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar29 = (undefined8 *)(lVar30 - extraout_x8_02);
  puVar6 = &DAT_100fabb08;
  FUN_1000037f0(&DAT_100fabb08,&DAT_100c29d48);
  local_1a8 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar32 = (long)puVar29 - extraout_x8_03;
  puVar7 = &DAT_100fabb10;
  local_1b0.unknown = (undefined *)lVar32;
  FUN_1000037f0(&DAT_100fabb10,&DAT_100c29d50);
  local_190 = *(undefined ***)(puVar7 + -8);
  local_198 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_190 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fabb18;
  FUN_1000037f0(&DAT_100fabb18,&DAT_100c29d58);
  local_188 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar25 = (lVar32 - extraout_x8_04) - extraout_x8_05;
  HVar8.unknown = &DAT_100fabb20;
  FUN_1000037f0(&DAT_100fabb20,&DAT_100c29d60);
  local_178 = *(long *)(HVar8.unknown + -8);
  local_180 = HVar8.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar26 = lVar25 - extraout_x8_06;
  HVar8 = SwiftUI::HorizontalAlignment::get_leading(HVar8);
  *puVar29 = HVar8.unknown;
  puVar29[1] = 0x4030000000000000;
  *(undefined1 *)(puVar29 + 2) = 0;
  puVar9 = &DAT_100fabb28;
  FUN_1000037f0(&DAT_100fabb28,&DAT_100c29d68);
  FUN_1000b50b8((long)puVar29 + (long)*(int *)(puVar9 + 0x2c));
  SwiftUI::SwitchToggleStyle::init();
  puVar9 = &DAT_100fabb30;
  FUN_100016eac(&DAT_100fabb30,&DAT_100fabb00,&DAT_100c29d40,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puVar10 = &DAT_100fa9348;
  appuStack_1f0[4] = (undefined **)puVar9;
  FUN_100003a00(&DAT_100fa9348,PTR_typeMetadataAccessor_100eaabd0,
                PTR_SwiftUI__SwiftUI__SwitchToggleStyle_>SwiftUI__ToggleStyle_100eaabc0);
  appuStack_1f0[1] = (undefined **)SVar5;
  appuStack_1f0[3] = (undefined **)puVar10;
  (extension_SwiftUI)::SwiftUI::View::_toggleStyle
            (lVar32,lVar30,puVar22,SVar5.unknown,puVar9,puVar10);
  (**(code **)(lVar31 + 8))(lVar30,SVar5.unknown);
  FUN_100005808(puVar29,&DAT_100fabb00,&DAT_100c29d40);
  OVar1.unknown = *(undefined **)unaff_x20;
  local_1b8 = *(undefined **)(unaff_x20 + 8);
  uVar11 = 0;
  FUN_1000c8fd0();
  local_1c0 = (undefined **)uVar11;
  FUN_100003a00(&DAT_100faba38,FUN_1000c8fd0,&TargetProtocolConformanceDescriptor_100c2a478);
  WVar12 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  WVar13.unknown = &DAT_100c29d70;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(WVar13);
  _swift_release(WVar12.unknown);
  _swift_release(WVar13.unknown);
  BVar2.unknown._1_7_ = uStack_ef;
  BVar2.unknown._0_1_ = local_f0;
  FUN_1000c495c();
  uVar27 = (ulong)*(byte *)(lVar23 + 0x50);
  uVar33 = uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
  puVar22 = &DAT_100eb4470;
  _swift_allocObject(&DAT_100eb4470,uVar33 + lVar28,uVar27 | 7);
  FUN_1000523d8(lVar24,puVar22 + uVar33,FUN_1000b292c);
  puVar9 = &DAT_100fabb38;
  FUN_1000037f0(&DAT_100fabb38,&DAT_100c29d98);
  local_b0 = (undefined *)appuStack_1f0[5];
  puStack_a8 = (undefined *)appuStack_1f0[1];
  local_a0 = appuStack_1f0[4];
  ppuStack_98 = appuStack_1f0[3];
  ppuVar14 = &local_b0;
  appuStack_1f0[2] = (undefined **)puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_toggleStyle<A_where_A1:_SwiftUI_ToggleStyle>(A1)__>_some>>_100eab3f0
             ,1);
  ppuVar15 = ppuVar14;
  appuStack_1f0[5] = ppuVar14;
  FUN_1000c301c();
  *(undefined ***)(lVar26 + -0x18) = ppuVar14;
  *(undefined ***)(lVar26 + -0x10) = ppuVar15;
  *(undefined **)(lVar26 + -0x20) = puVar9;
  BVar3.unknown = local_1b0.unknown;
  (extension_SwiftUI)::SwiftUI::View::_sheet(BVar2);
  _swift_release(local_e8);
  _swift_release(puVar22);
  _swift_release(BVar2.unknown);
  (**(code **)(local_1a8 + 8))(BVar3.unknown,puVar6);
  WVar12 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  WVar13.unknown = &DAT_100c29db8;
  _swift_getKeyPath();
  item.unknown = local_1a0.unknown;
  SwiftUI::ObservedObject::Wrapper::_get_subscript(WVar13);
  _swift_release(WVar12.unknown);
  _swift_release(WVar13.unknown);
  FUN_1000c495c(unaff_x20,lVar24,FUN_1000b292c);
  puVar22 = &DAT_100eb4498;
  _swift_allocObject(&DAT_100eb4498,uVar33 + lVar28,uVar27 | 7);
  FUN_1000523d8(lVar24,puVar22 + uVar33,FUN_1000b292c);
  uVar11 = 0;
  FUN_1000c99d0();
  puVar9 = &DAT_100fabb78;
  appuStack_1f0[4] = (undefined **)uVar11;
  FUN_1000037f0(&DAT_100fabb78,&DAT_100c29de0);
  puStack_a8 = (undefined *)appuStack_1f0[2];
  local_a0 = appuStack_1f0[5];
  ppuVar14 = &local_b0;
  local_b0 = puVar6;
  ppuStack_98 = ppuVar15;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puVar6 = &DAT_100fabb80;
  local_1c0 = ppuVar14;
  FUN_100003a00(&DAT_100fabb80,FUN_1000c99d0,&TargetProtocolConformanceDescriptor_100c2a440);
  puVar16 = puVar6;
  FUN_1000c31b8();
  *(undefined **)(lVar26 + -0x18) = puVar6;
  *(undefined **)(lVar26 + -0x10) = puVar16;
  *(undefined ***)(lVar26 + -0x20) = ppuVar14;
  puVar19 = local_198;
  (extension_SwiftUI)::SwiftUI::View::_sheet(item);
  _swift_release(puVar22);
  FUN_100005808(item.unknown,&DAT_100fabaf8,&DAT_100c29d38);
  (**(code **)((long)local_190 + 8))(lVar32 - extraout_x8_04,puVar19);
  local_f0 = unaff_x20[*(int *)(lVar4 + 0x1c)];
  local_e8 = *(undefined8 *)(unaff_x20 + *(int *)(lVar4 + 0x1c) + 8);
  SVar17.unknown = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::get_projectedValue(SVar17);
  local_1b0.unknown = local_b0;
  local_1b8 = puStack_a8;
  local_1a8 = CONCAT44(local_1a8._4_4_,(uint)(byte)local_a0);
  FUN_1000c495c(unaff_x20,lVar24,FUN_1000b292c);
  puVar22 = &DAT_100eb44c0;
  _swift_allocObject(&DAT_100eb44c0,uVar33 + lVar28,uVar27 | 7);
  FUN_1000523d8(lVar24,puVar22 + uVar33,FUN_1000b292c);
  puVar10 = &DAT_100fabbb0;
  FUN_1000037f0(&DAT_100fabbb0,&DAT_100c29df8);
  local_b0 = puVar19;
  puStack_a8 = (undefined *)appuStack_1f0[4];
  ppuStack_98 = local_1c0;
  ppuVar15 = &local_b0;
  local_1a0.unknown = puVar10;
  local_a0 = (undefined **)puVar9;
  local_90 = puVar6;
  puStack_88 = puVar16;
  _swift_getOpaqueTypeConformance2
            (ppuVar15,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A,B_where_A1:_Swift_Identifiable,B1:_SwiftUI_View>(item:_SwiftUI_Binding<A1_>,onDismiss:_(()__>_())_,content:_(A1)__>_B1___>_some>>_100eab5b0
             ,1);
  puVar6 = &DAT_100fabbb8;
  local_190 = ppuVar15;
  FUN_100005c24(&DAT_100fabbb8,&DAT_100c29e00);
  puVar9 = &DAT_100fa6e58;
  FUN_100005c24(&DAT_100fa6e58,&DAT_100c26330);
  puVar16 = puVar9;
  FUN_1000c32d4();
  puVar18 = puVar16;
  FUN_100008378();
  puVar19 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puStack_a8 = PTR___type_metadata_for_Swift_String_100eac208;
  ppuStack_98 = (undefined **)PTR___type_metadata_for_SwiftUI_Text_100eab358;
  local_90 = PTR___type_metadata_for_Swift_String_100eac208;
  local_70 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  ppuVar14 = &local_b0;
  local_b0 = puVar6;
  local_a0 = (undefined **)puVar9;
  puStack_88 = puVar16;
  local_80 = puVar18;
  puStack_78 = puVar19;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_alert<A,B,C,D_where_A1:_Swift_StringProtocol,B1:_SwiftUI_View,C1:_SwiftUI_View>(_:_A1,isPresented:_SwiftUI_Binding<Swift_Bool>,presenting:_D1_,actions:_(D1)__>_B1,message:_(D1)__>_C1___>_some>>_100eab560
             ,1);
  *(undefined ***)(lVar26 + -0x18) = ppuVar15;
  *(undefined ***)(lVar26 + -0x10) = ppuVar14;
  *(undefined **)(lVar26 + -0x20) = puVar10;
  BVar2.unknown = local_1b0.unknown;
  puVar6 = local_1b8;
  (extension_SwiftUI)::SwiftUI::View::_sheet(local_1b0);
  _swift_release(puVar6);
  _swift_release(puVar22);
  _swift_release(BVar2.unknown);
  puVar9 = puVar7;
  (**(code **)(local_188 + 8))();
  FUN_1000b616c();
  local_c0 = lVar25;
  puStack_b8 = puVar9;
  FUN_1000c495c(unaff_x20,lVar24,FUN_1000b292c);
  pMVar20 = Swift::MainActor::typeMetadataAccessor();
  puVar22 = PTR_typeMetadataAccessor_100eaec10;
  pMVar21 = Swift::MainActor::get_shared(pMVar20,pMVar20);
  puVar29 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar22,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  uVar33 = uVar27 + 0x20 & (uVar27 ^ 0xffffffffffffffff);
  puVar22 = &DAT_100eb44e8;
  _swift_allocObject(&DAT_100eb44e8,uVar33 + lVar28,uVar27 | 7);
  *(MainActor **)(puVar22 + 0x10) = pMVar21;
  *(undefined8 **)(puVar22 + 0x18) = puVar29;
  FUN_1000523d8(lVar24,puVar22 + uVar33,FUN_1000b292c);
  FUN_1000c495c(unaff_x20,lVar24,FUN_1000b292c);
  pMVar20 = Swift::MainActor::get_shared(pMVar20,unaff_x20);
  puVar22 = &DAT_100eb4510;
  _swift_allocObject(&DAT_100eb4510,uVar33 + lVar28,uVar27 | 7);
  *(MainActor **)(puVar22 + 0x10) = pMVar20;
  *(undefined8 **)(puVar22 + 0x18) = puVar29;
  FUN_1000523d8(lVar24,puVar22 + uVar33,FUN_1000b292c);
  SwiftUI::Binding::init();
  SVar17.unknown = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  lVar4 = local_170;
  SwiftUI::State::get_wrappedValue(SVar17);
  puVar22 = &DAT_100fa6e70;
  FUN_1000037f0(&DAT_100fa6e70,&DAT_100c239a0);
  uVar11 = 0;
  FUN_10045ba0c();
  puStack_a8 = local_1a0.unknown;
  local_a0 = local_190;
  ppuVar15 = &local_b0;
  local_b0 = puVar7;
  ppuStack_98 = ppuVar14;
  _swift_getOpaqueTypeConformance2
            (ppuVar15,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_sheet<A_where_A1:_SwiftUI_View>(isPresented:_SwiftUI_Binding<Swift_Bool>,onDismiss:_(()__>_())_,content:_()__>_A1___>_some>>_100eab5a0
             ,1);
  puVar6 = &DAT_100fa6e80;
  FUN_100016eac(&DAT_100fa6e80,&DAT_100fa6e70,&DAT_100c239a0,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  *(undefined **)(lVar26 + -0x18) = puVar6;
  *(undefined **)(lVar26 + -0x10) =
       PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  *(undefined ***)(lVar26 + -0x28) = ppuVar15;
  *(undefined **)(lVar26 + -0x20) = puVar18;
  *(undefined8 *)(lVar26 + -0x30) = uVar11;
  *(undefined **)(lVar26 + -0x40) = puVar22;
  *(undefined **)(lVar26 + -0x38) = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  *(undefined **)(lVar26 + -0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar22 = local_180;
  *(undefined1 **)(lVar26 + -0x58) = auStack_110;
  *(undefined **)(lVar26 + -0x50) = puVar22;
  *(code **)(lVar26 + -0x60) = FUN_1000c3408;
  (extension_SwiftUI)::SwiftUI::View::_confirmationDialog
            (local_168,&local_c0,local_d8,uStack_d0,local_c8,0,lVar4,FUN_1000c3400,&local_f0);
  _swift_release(uStack_d0);
  _swift_release(local_d8);
  FUN_100005808(lVar4,&DAT_100faba30,&DAT_100c29c60);
  _swift_bridgeObjectRelease(puVar9);
  (**(code **)(local_178 + 8))(lVar26,puVar22);
  return;
}



/* Address: 0x1000b50b8 | FUN_1000b50b8 */

void FUN_1000b50b8(long param_1,undefined *param_2)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  HorizontalAlignment HVar9;
  Animation AVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  MainActor *local_e0 [2];
  long local_d0 [2];
  undefined1 auStack_c0 [31];
  undefined1 local_a1;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  pMVar5 = (MainActor *)&DAT_100fabe28;
  local_d0[1] = param_1;
  FUN_1000037f0(&DAT_100fabe28,&DAT_100c2a0a8);
  local_e0[0] = pMVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pMVar5 + -8) + 0x40));
  lVar12 = (long)local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0[0] = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  puVar4 = &DAT_100fabe30;
  FUN_1000037f0(&DAT_100fabe30,&DAT_100c2a0b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar15 = (undefined8 *)(lVar13 - extraout_x12_00);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e0[1] = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x17,UVar7.unknown,puVar6);
  }
  *puVar15 = 0;
  puVar6 = (undefined8 *)((long)puVar15 + (long)*(int *)(puVar4 + 0x24));
  HVar9 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar8);
  *puVar6 = HVar9.unknown;
  puVar6[1] = 0x4024000000000000;
  *(undefined1 *)(puVar6 + 2) = 0;
  puVar4 = &DAT_100fabe38;
  FUN_1000037f0(&DAT_100fabe38,&DAT_100c2a0b8);
  FUN_1000b73ec((long)puVar6 + (long)*(int *)(puVar4 + 0x2c),param_2);
  AVar10.unknown = param_2;
  FUN_1000b5458(lVar12);
  AVar10 = SwiftUI::Animation::easeInOut(0.18,AVar10);
  lVar11 = *(long *)(param_2 + 8);
  _swift_beginAccess(lVar11 + 0x10,auStack_c0,0,0);
  uVar18 = *(undefined8 *)(lVar11 + 0x18);
  uVar16 = *(undefined8 *)(lVar11 + 0x10);
  uStack_88 = *(undefined8 *)(lVar11 + 0x28);
  uVar19 = *(undefined8 *)(lVar11 + 0x20);
  uStack_78 = *(undefined8 *)(lVar11 + 0x38);
  uVar17 = *(undefined8 *)(lVar11 + 0x30);
  uVar14 = *(undefined8 *)(lVar11 + 0x40);
  local_a0 = uVar16;
  uStack_98 = uVar18;
  local_90 = uVar19;
  local_80 = uVar17;
  local_70 = uVar14;
  _swift_retain(uVar16);
  _swift_retain(uVar18);
  _swift_retain(uVar19);
  _swift_retain(uVar17);
  _swift_retain(uVar14);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_a1);
  _swift_release(uVar14);
  _swift_release(uVar17);
  _swift_release(uVar19);
  _swift_release(uVar18);
  _swift_release(uVar16);
  iVar1 = *(int *)(local_e0[0] + 0x24);
  *(undefined8 *)(lVar12 + iVar1) = AVar10.unknown;
  *(undefined1 *)((undefined8 *)(lVar12 + iVar1) + 1) = local_a1;
  FUN_100011090(puVar15,lVar13,&DAT_100fabe30,&DAT_100c2a0b0);
  lVar11 = local_d0[0];
  FUN_100011090(lVar12,local_d0[0],&DAT_100fabe28,&DAT_100c2a0a8);
  lVar3 = local_d0[1];
  FUN_100011090(lVar13,local_d0[1],&DAT_100fabe30,&DAT_100c2a0b0);
  puVar4 = &DAT_100fabe40;
  FUN_1000037f0(&DAT_100fabe40,&DAT_100c2a0c0);
  FUN_100011090(lVar11,lVar3 + *(int *)(puVar4 + 0x30),&DAT_100fabe28,&DAT_100c2a0a8);
  puVar6 = (undefined8 *)(lVar3 + *(int *)(puVar4 + 0x40));
  *puVar6 = 0;
  *(undefined1 *)(puVar6 + 1) = 1;
  FUN_100005808(lVar12,&DAT_100fabe28,&DAT_100c2a0a8);
  FUN_100005808(puVar15,&DAT_100fabe30,&DAT_100c2a0b0);
  FUN_100005808(lVar11,&DAT_100fabe28,&DAT_100c2a0a8);
  FUN_100005808(lVar13,&DAT_100fabe30,&DAT_100c2a0b0);
  _swift_release(local_e0[1]);
  return;
}



/* Address: 0x1000b5458 | FUN_1000b5458 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b5684 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b5458(undefined8 *param_1,long param_2)

{
  OpacityTransition OVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  HorizontalAlignment HVar6;
  AnyTransition AVar7;
  undefined *puVar8;
  long extraout_x8;
  code *pcVar9;
  long extraout_x12;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_e0 [8];
  long local_d8;
  long local_d0;
  MainActor *local_c8;
  undefined1 auStack_c0 [31];
  char local_a1;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  OVar1 = SwiftUI::OpacityTransition::typeMetadataAccessor();
  local_d0 = *(long *)(OVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x19,UVar4.unknown,puVar3);
  }
  lVar10 = *(long *)(param_2 + 8);
  _swift_beginAccess(lVar10 + 0x10,auStack_c0,0,0);
  uVar14 = *(undefined8 *)(lVar10 + 0x18);
  HVar6.unknown = *(undefined **)(lVar10 + 0x10);
  uStack_88 = *(undefined8 *)(lVar10 + 0x28);
  uVar15 = *(undefined8 *)(lVar10 + 0x20);
  uStack_78 = *(undefined8 *)(lVar10 + 0x38);
  uVar13 = *(undefined8 *)(lVar10 + 0x30);
  uVar12 = *(undefined8 *)(lVar10 + 0x40);
  local_d8 = param_2;
  local_a0 = HVar6.unknown;
  uStack_98 = uVar14;
  local_90 = uVar15;
  local_80 = uVar13;
  local_70 = uVar12;
  _swift_retain(HVar6.unknown);
  _swift_retain(uVar14);
  _swift_retain(uVar15);
  _swift_retain(uVar13);
  _swift_retain(uVar12);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_a1);
  _swift_release(uVar12);
  _swift_release(uVar13);
  _swift_release(uVar15);
  _swift_release(uVar14);
  _swift_release();
  if (local_a1 != '\x01') {
    puVar8 = &DAT_100fabe48;
    FUN_1000037f0(&DAT_100fabe48,&DAT_100c2a0c8);
    pcVar9 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
  }
  else {
    HVar6 = SwiftUI::HorizontalAlignment::get_leading(HVar6);
    *param_1 = HVar6.unknown;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    puVar8 = &DAT_100fabe50;
    FUN_1000037f0(&DAT_100fabe50,&DAT_100c2a0d0);
    FUN_1000baaa0((long)param_1 + (long)*(int *)(puVar8 + 0x2c),local_d8);
    SwiftUI::OpacityTransition::init();
    lVar10 = local_d0;
    (**(code **)(local_d0 + 0x10))
              (auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar11,OVar1.unknown);
    puVar8 = &DAT_100fabe58;
    FUN_100003a00(&DAT_100fabe58,PTR_typeMetadataAccessor_100eaabb8,
                  PTR_SwiftUI__SwiftUI__OpacityTransition_>SwiftUI__Transition_100eaaba8);
    AVar7 = SwiftUI::AnyTransition::_init(puVar8,OVar1.unknown,puVar8);
    (**(code **)(lVar10 + 8))(lVar11,OVar1.unknown);
    puVar8 = &DAT_100fabe48;
    FUN_1000037f0(&DAT_100fabe48,&DAT_100c2a0c8);
    *(undefined **)((long)param_1 + (long)*(int *)(puVar8 + 0x24)) = AVar7.unknown;
    pcVar9 = *(code **)(*(long *)(puVar8 + -8) + 0x38);
  }
  (*pcVar9)(param_1,local_a1 != '\x01',1,puVar8);
  _swift_release(local_c8);
  return;
}



/* Address: 0x1000b5728 | FUN_1000b5728 */

void FUN_1000b5728(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c29d70;
  _swift_getKeyPath(&DAT_100c29d70);
  puVar2 = &DAT_100c2a088;
  _swift_getKeyPath(&DAT_100c2a088);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1000b5790 | FUN_1000b5790 */

void FUN_1000b5790(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000b57ac | FUN_1000b57ac */

void FUN_1000b57ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  undefined1 *puVar1;
  long lVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  undefined *puVar8;
  Set SVar9;
  Alignment AVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  FUN_1000b292c();
  lVar15 = *(long *)(lVar2 + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = (long)&local_a0 - (lVar13 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x23,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar6);
  *param_1 = HVar7.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar8 = &DAT_100fabe18;
  FUN_1000037f0(&DAT_100fabe18,&DAT_100c2a078);
  SVar9.unknown = param_6;
  FUN_1000be3c8((long)param_1 + (long)*(int *)(puVar8 + 0x2c));
  SVar9 = SwiftUI::Edge::Set::get_all(SVar9);
  uVar16 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar9.unknown);
  AVar10.unknown = &DAT_100fabb60;
  FUN_1000037f0(&DAT_100fabb60,&DAT_100c29da8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar10.unknown + 0x24));
  *puVar1 = (char)SVar9.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar16;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar10);
  SwiftUI::_FrameLayout::_init((Alignment)0x4076800000000000);
  puVar8 = &DAT_100fabb50;
  FUN_1000037f0(&DAT_100fabb50,&DAT_100c29da0);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar8 + 0x24));
  puVar4[1] = uStack_98;
  *puVar4 = local_a0;
  puVar4[3] = uStack_88;
  puVar4[2] = uStack_90;
  puVar4[5] = uStack_78;
  puVar4[4] = local_80;
  FUN_1000c495c(param_6,lVar2,FUN_1000b292c);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eb4790;
  _swift_allocObject(&DAT_100eb4790,uVar14 + lVar13,uVar12 | 7);
  FUN_1000523d8(lVar2,puVar8 + uVar14,FUN_1000b292c);
  _swift_release(pMVar3);
  puVar11 = &DAT_100fabb38;
  FUN_1000037f0(&DAT_100fabb38,&DAT_100c29d98);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar11 + 0x24));
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = FUN_1000c5508;
  param_1[3] = puVar8;
  return;
}



/* Address: 0x1000b59f8 | FUN_1000b59f8 */

void FUN_1000b59f8(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x25,UVar3.unknown,puVar2);
  }
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  puVar5 = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + 0x10),&local_50,puVar5);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000b5ad8 | FUN_1000b5ad8 */

void FUN_1000b5ad8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,Set param_7)

{
  undefined1 *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  Set _all;
  Alignment AVar8;
  undefined8 uVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x27,UVar4.unknown,puVar3);
  }
  HVar6 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar5);
  *param_1 = HVar6.unknown;
  param_1[1] = 0x4030000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar7 = &DAT_100fabc60;
  FUN_1000037f0(&DAT_100fabc60,&DAT_100c29eb8);
  FUN_1000bf250((long)param_1 + (long)*(int *)(puVar7 + 0x2c),param_7.unknown,param_6);
  _all = SwiftUI::Edge::Set::get_all(param_7);
  uVar9 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  AVar8.unknown = &DAT_100fabb98;
  FUN_1000037f0(&DAT_100fabb98,&DAT_100c29de8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar8.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar9;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar8);
  SwiftUI::_FrameLayout::_init((Alignment)0x407ae00000000000);
  _swift_release(pMVar2);
  puVar7 = &DAT_100fabb78;
  FUN_1000037f0(&DAT_100fabb78,&DAT_100c29de0);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  return;
}



/* Address: 0x1000b5c78 | FUN_1000b5c78 */

void FUN_1000b5c78(undefined8 param_1)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x2a,UVar4.unknown,puVar3);
  }
  FUN_1000b5d30(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000b5d30 | FUN_1000b5d30 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1000b5d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  void *pvVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  Set SVar8;
  Alignment AVar9;
  MainActor *this;
  MainActor *pMVar10;
  undefined8 *puVar11;
  State SVar12;
  undefined *puVar13;
  undefined *puVar14;
  long extraout_x8;
  long extraout_x8_00;
  MainActor *unaff_x20;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 auStack_180 [10];
  void *local_130 [2];
  long local_120 [3];
  undefined8 auStack_108 [3];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  String local_c8;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar3 = 0;
  local_120[1] = param_1;
  FUN_1000b292c();
  lVar18 = *(long *)(lVar3 + -8);
  lVar15 = *(long *)(lVar18 + 0x40);
  local_120[0] = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar3 = (long)local_130 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)(lVar3 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fabbb8;
  FUN_1000037f0(&DAT_100fabbb8,&DAT_100c29e00);
  HVar6.unknown = puVar5;
  local_130[1] = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(LVar4.unknown + -extraout_x8_00);
  HVar6 = SwiftUI::HorizontalAlignment::get_leading(HVar6);
  *puVar17 = HVar6.unknown;
  puVar17[1] = 0x4030000000000000;
  *(undefined1 *)(puVar17 + 2) = 0;
  puVar7 = &DAT_100fabbf0;
  FUN_1000037f0(&DAT_100fabbf0,&DAT_100c29e20);
  SVar8.unknown = unaff_x20;
  FUN_1000b8c44((long)puVar17 + (long)*(int *)(puVar7 + 0x2c));
  SVar8 = SwiftUI::Edge::Set::get_all(SVar8);
  uVar20 = 0x4034000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  AVar9.unknown = &DAT_100fabbd0;
  FUN_1000037f0(&DAT_100fabbd0,&DAT_100c29e08);
  puVar1 = (undefined1 *)((long)puVar17 + (long)*(int *)(AVar9.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar20;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar9);
  SwiftUI::_FrameLayout::_init((Alignment)0x4074000000000000);
  puVar11 = (undefined8 *)((long)puVar17 + (long)*(int *)(puVar5 + 0x24));
  puVar11[1] = uStack_b0;
  *puVar11 = local_b8;
  puVar11[3] = uStack_a0;
  puVar11[2] = local_a8;
  puVar11[5] = uStack_90;
  puVar11[4] = local_98;
  FUN_1001de9d4(LVar4.unknown);
  local_c8 = (extension_Foundation)::Swift::String::init(LVar4);
  local_130[0] = local_c8.bridgeObject;
  FUN_1000c495c();
  this = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(this,this);
  puVar11 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  uVar16 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar19 = uVar16 + 0x20 & (uVar16 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100eb4588;
  _swift_allocObject(&DAT_100eb4588,uVar19 + lVar15,uVar16 | 7);
  *(MainActor **)(puVar5 + 0x10) = pMVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar11;
  FUN_1000523d8(lVar3,puVar5 + uVar19,FUN_1000b292c);
  pMVar10 = unaff_x20;
  FUN_1000c495c();
  pMVar10 = Swift::MainActor::get_shared(this,pMVar10);
  puVar5 = &DAT_100eb45b0;
  _swift_allocObject(&DAT_100eb45b0,uVar19 + lVar15,uVar16 | 7);
  *(MainActor **)(puVar5 + 0x10) = pMVar10;
  *(undefined8 **)(puVar5 + 0x18) = puVar11;
  FUN_1000523d8(lVar3,puVar5 + uVar19,FUN_1000b292c);
  SwiftUI::Binding::init();
  auStack_108[2] = *(undefined8 *)(unaff_x20 + *(int *)(local_120[0] + 0x24) + 8);
  auStack_108[1] = *(undefined8 *)(unaff_x20 + *(int *)(local_120[0] + 0x24));
  SVar12.unknown = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::get_wrappedValue(SVar12);
  puVar5 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  puVar13 = puVar5;
  FUN_1000c32d4();
  puVar14 = puVar13;
  FUN_100008378();
  puVar7 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar17[-2] = puVar7;
  puVar17[-1] = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puVar17[-4] = puVar13;
  puVar17[-3] = puVar14;
  puVar17[-6] = PTR___type_metadata_for_SwiftUI_Text_100eab358;
  puVar17[-5] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar17[-8] = PTR___type_metadata_for_Swift_String_100eac208;
  puVar17[-7] = puVar5;
  pvVar2 = local_130[1];
  puVar17[-10] = 0;
  puVar17[-9] = pvVar2;
  (extension_SwiftUI)::SwiftUI::View::_alert
            (local_120[1],&local_c8,local_e0,uStack_d8,local_d0,local_120 + 2,FUN_1000c36f4,
             auStack_108 + 1,FUN_1000ba9a8);
  _swift_bridgeObjectRelease(local_130[0]);
  _swift_release(uStack_d8);
  _swift_release(local_e0);
  _swift_bridgeObjectRelease(auStack_108[0]);
  FUN_100005808(puVar17,&DAT_100fabbb8,&DAT_100c29e00);
  return;
}



/* Address: 0x1000b616c | FUN_1000b616c */

String FUN_1000b616c(void)

{
  LocalizedStringResource LVar1;
  undefined *puVar2;
  long lVar3;
  State SVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  String SVar9;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)LVar1.unknown - extraout_x8_00;
  lVar3 = 0;
  FUN_10045ba0c();
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000b292c();
  SVar4.unknown = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::get_wrappedValue(SVar4);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,lVar3);
  if ((int)lVar5 == 1) {
    FUN_100005808(lVar7,&DAT_100faba30,&DAT_100c29c60);
    SVar9 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    lVar5 = lVar6;
    FUN_1000523d8(lVar7,lVar6,FUN_10045ba0c);
    FUN_1000b72d4(lVar6);
    thunk_FUN_1001e7144(LVar1.unknown);
    _swift_bridgeObjectRelease(lVar5);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar1);
    FUN_10005241c(lVar6,FUN_10045ba0c);
  }
  return SVar9;
}



/* Address: 0x1000b6314 | FUN_1000b6314 */

void FUN_1000b6314(byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  State SVar9;
  byte bVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined8 local_70;
  byte *local_68;
  
  lVar2 = 0;
  local_70 = param_4;
  local_68 = param_1;
  FUN_10045ba0c();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar3 = &DAT_100fabbe8;
  local_78 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fabbe8,&DAT_100c29e18);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  puVar4 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar15 = lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar15 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar17 - extraout_x12_00;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x30,UVar7.unknown,puVar6);
  }
  FUN_1000b292c();
  SVar9.unknown = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::get_wrappedValue(SVar9);
  (**(code **)(lVar13 + 0x38))(lVar17,1,1,lVar2);
  lVar12 = (long)*(int *)(puVar3 + 0x30);
  FUN_100011090(lVar16,lVar11,&DAT_100faba30,&DAT_100c29c60);
  FUN_100011090(lVar17,lVar11 + lVar12,&DAT_100faba30,&DAT_100c29c60);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar13 = lVar11;
  (*pcVar14)(lVar11,1,lVar2);
  if ((int)lVar13 == 1) {
    FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
    FUN_100005808(lVar16,&DAT_100faba30,&DAT_100c29c60);
    lVar12 = lVar11 + lVar12;
    (*pcVar14)(lVar12,1,lVar2);
    if ((int)lVar12 == 1) {
      FUN_100005808(lVar11,&DAT_100faba30,&DAT_100c29c60);
      _swift_release(pMVar5);
      bVar10 = 0;
      goto LAB_1000b66c4;
    }
  }
  else {
    FUN_100011090(lVar11,lVar15,&DAT_100faba30,&DAT_100c29c60);
    lVar13 = lVar11 + lVar12;
    (*pcVar14)(lVar13,1,lVar2);
    puVar1 = local_78;
    if ((int)lVar13 != 1) {
      FUN_1000523d8(lVar11 + lVar12,local_78,FUN_10045ba0c);
      lVar2 = lVar15;
      thunk_FUN_10045d51c(lVar15,puVar1);
      FUN_10005241c(puVar1,FUN_10045ba0c);
      FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
      FUN_100005808(lVar16,&DAT_100faba30,&DAT_100c29c60);
      FUN_10005241c(lVar15,FUN_10045ba0c);
      FUN_100005808(lVar11,&DAT_100faba30,&DAT_100c29c60);
      _swift_release(pMVar5);
      bVar10 = (byte)lVar2 ^ 1;
      goto LAB_1000b66c4;
    }
    FUN_100005808(lVar17,&DAT_100faba30,&DAT_100c29c60);
    FUN_100005808(lVar16,&DAT_100faba30,&DAT_100c29c60);
    FUN_10005241c(lVar15,FUN_10045ba0c);
  }
  FUN_100005808(lVar11,&DAT_100fabbe8,&DAT_100c29e18);
  _swift_release(pMVar5);
  bVar10 = 1;
LAB_1000b66c4:
  *local_68 = bVar10 & 1;
  return;
}



/* Address: 0x1000b66f0 | FUN_1000b66f0 */

void FUN_1000b66f0(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar9;
  long lVar10;
  
  puVar3 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar9 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)puVar9 - extraout_x12;
  bVar1 = *param_1;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x31,UVar6.unknown,puVar5);
  }
  if ((bVar1 & 1) != 0) {
    _swift_release(pMVar4);
    return;
  }
  lVar8 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar10,1,1,lVar8);
  lVar8 = 0;
  FUN_1000b292c();
  iVar2 = *(int *)(lVar8 + 0x18);
  FUN_100011090(lVar10,puVar9,&DAT_100faba30,&DAT_100c29c60);
  puVar3 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::set_wrappedValue((State *)(param_4 + iVar2),puVar9,puVar3);
  FUN_100005808(lVar10,&DAT_100faba30,&DAT_100c29c60);
  _swift_release(pMVar4);
  return;
}



/* Address: 0x1000b68b8 | FUN_1000b68b8 */

void FUN_1000b68b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  ButtonRole BVar7;
  undefined *puVar8;
  Button<undefined> BVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  undefined8 local_c0;
  code *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  MainActor *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long local_68;
  
  lVar1 = 0;
  local_b0 = param_2;
  local_68 = param_1;
  FUN_10045ba0c();
  local_a8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (long)&local_c0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  local_a0 = extraout_x12;
  FUN_1000b292c();
  lVar18 = *(long *)(lVar1 + -8);
  lVar1 = *(long *)(lVar18 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar10 - (lVar1 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa6e90;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar19 = lVar16 - extraout_x8;
  puVar2 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_78 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar13 = lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_00;
  local_80 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_01;
  local_88 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_98 = lVar13 - extraout_x12_02;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_90 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x34,UVar5.unknown,puVar4);
  }
  SwiftUI::ButtonRole::get_destructive((ButtonRole)pcVar6);
  BVar7 = SwiftUI::ButtonRole::typeMetadataAccessor();
  local_b8 = *(code **)(*(long *)(BVar7.unknown + -8) + 0x38);
  (*local_b8)(lVar19,0,1,BVar7.unknown);
  FUN_1000c495c(param_3,lVar16,FUN_1000b292c);
  local_c0 = param_3;
  FUN_1000c495c(local_b0,lVar10,FUN_10045ba0c);
  uVar11 = (ulong)*(byte *)(lVar18 + 0x50);
  uVar15 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
  uVar12 = (ulong)*(byte *)(local_a8 + 0x50);
  lVar1 = uVar15 + lVar1;
  uVar17 = lVar1 + uVar12 & (uVar12 ^ 0xffffffffffffffff);
  puVar8 = &DAT_100eb4538;
  _swift_allocObject(&DAT_100eb4538,uVar17 + local_a0,uVar11 | 7 | uVar12);
  FUN_1000523d8(lVar16,puVar8 + uVar15,FUN_1000b292c);
  FUN_1000523d8(lVar10,puVar8 + uVar17,FUN_10045ba0c);
  lVar10 = local_98;
  BVar9 = SwiftUI::Button::_init();
  SwiftUI::ButtonRole::get_cancel((ButtonRole)BVar9.unknown);
  (*local_b8)(lVar19,0,1,BVar7.unknown);
  FUN_1000c495c(local_c0,lVar16,FUN_1000b292c);
  puVar8 = &DAT_100eb4560;
  _swift_allocObject(&DAT_100eb4560,lVar1,uVar11 | 7);
  FUN_1000523d8(lVar16,puVar8 + uVar15,FUN_1000b292c);
  lVar1 = local_88;
  SwiftUI::Button::_init();
  lVar16 = local_78;
  lVar13 = local_80;
  pcVar14 = *(code **)(local_78 + 0x10);
  (*pcVar14)(local_80,lVar10,puVar2);
  lVar18 = local_70;
  (*pcVar14)(local_70,lVar1,puVar2);
  lVar19 = local_68;
  (*pcVar14)(local_68,lVar13,puVar2);
  puVar8 = &DAT_100fa6e98;
  FUN_1000037f0(&DAT_100fa6e98,&DAT_100c26360);
  (*pcVar14)(lVar19 + *(int *)(puVar8 + 0x30),lVar18,puVar2);
  pcVar14 = *(code **)(lVar16 + 8);
  (*pcVar14)(lVar1,puVar2);
  (*pcVar14)(lVar10,puVar2);
  (*pcVar14)(lVar18,puVar2);
  (*pcVar14)(lVar13,puVar2);
  _swift_release(local_90);
  return;
}



/* Address: 0x1000b6d18 | FUN_1000b6d18 */

void FUN_1000b6d18(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  
  puVar2 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x35,UVar5.unknown,puVar4);
  }
  FUN_1000c675c(param_2);
  lVar7 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar9,1,1,lVar7);
  lVar7 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar7 + 0x18);
  FUN_100011090(lVar9,puVar8,&DAT_100faba30,&DAT_100c29c60);
  puVar2 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar8,puVar2);
  FUN_100005808(lVar9,&DAT_100faba30,&DAT_100c29c60);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000b6ec4 | FUN_1000b6ec4 */

void FUN_1000b6ec4(void)

{
  FUN_1000b7080(0x38,FUN_1001de3d4);
  return;
}



/* Address: 0x1000b6ed4 | FUN_1000b6ed4 */

void FUN_1000b6ed4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar8;
  long lVar9;
  
  puVar2 = &DAT_100faba30;
  FUN_1000037f0(&DAT_100faba30,&DAT_100c29c60);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar8 - extraout_x12;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x3b,UVar5.unknown,puVar4);
  }
  lVar7 = 0;
  FUN_10045ba0c();
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(lVar9,1,1,lVar7);
  lVar7 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar7 + 0x18);
  FUN_100011090(lVar9,puVar8,&DAT_100faba30,&DAT_100c29c60);
  puVar2 = &DAT_100faba48;
  FUN_1000037f0(&DAT_100faba48,&DAT_100c29c68);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),puVar8,puVar2);
  FUN_100005808(lVar9,&DAT_100faba30,&DAT_100c29c60);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000b7070 | FUN_1000b7070 */

void FUN_1000b7070(void)

{
  FUN_1000b7080(0x3d,FUN_1001c0788);
  return;
}



/* Address: 0x1000b7080 | FUN_1000b7080 */

void FUN_1000b7080(undefined8 *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  Text TVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  undefined *puVar8;
  long extraout_x8;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar6 = &DAT_100fa6bb0;
  puVar8 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  uVar7 = SUB81(puVar8,0);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar6 = (undefined8 *)0x1b;
    uVar7 = 1;
    _swift_task_reportUnexpectedExecutor("Paste/MCPSettingsView.swift");
    param_5 = param_2;
  }
  (*param_3)(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  TVar5 = SwiftUI::Text::init((LocalizedStringResource)
                              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)
                              ));
  _swift_release(pMVar3);
  *param_1 = TVar5.unknown;
  param_1[1] = puVar6;
  *(undefined1 *)(param_1 + 2) = uVar7;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000b719c | FUN_1000b719c */

void FUN_1000b719c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  Text TVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 uVar8;
  undefined *puVar9;
  long extraout_x8;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar6 = &DAT_100fa6bb0;
  puVar9 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  uVar8 = SUB81(puVar9,0);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    puVar6 = (undefined8 *)0x1b;
    uVar8 = 1;
    param_5 = 0x40;
    _swift_task_reportUnexpectedExecutor("Paste/MCPSettingsView.swift");
  }
  FUN_1000b72d4(param_2);
  puVar7 = puVar6;
  thunk_FUN_1001e7134(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_bridgeObjectRelease(puVar6);
  TVar5 = SwiftUI::Text::init((LocalizedStringResource)
                              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)
                              ));
  _swift_release(pMVar3);
  *param_1 = TVar5.unknown;
  param_1[1] = puVar7;
  *(undefined1 *)(param_1 + 2) = uVar8;
  param_1[3] = param_5;
  return;
}



/* Address: 0x1000b72d4 | FUN_1000b72d4 */

undefined1  [16] FUN_1000b72d4(long param_1)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined1 auVar6 [16];
  
  Foundation::LocalizedStringResource::typeMetadataAccessor();
  lVar3 = 0;
  FUN_10045ba0c();
  bVar2 = *(byte *)(param_1 + *(int *)(lVar3 + 0x18));
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      puVar5 = (undefined1 *)0xee00706f746b7365;
      uVar4 = 0x4420656475616c43;
    }
    else if (bVar2 == 1) {
      puVar5 = (undefined1 *)0xeb0000000065646f;
      uVar4 = 0x4320656475616c43;
    }
    else {
      puVar5 = &DAT_e500000000000000;
      uVar4 = 0x7865646f43;
    }
  }
  else if (bVar2 < 5) {
    if (bVar2 == 3) {
      puVar5 = &DAT_e600000000000000;
      uVar4 = 0x726f73727543;
    }
    else {
      puVar5 = &DAT_e700000000000000;
      uVar4 = 0x65646f43205356;
    }
  }
  else if (bVar2 == 5) {
    puVar5 = &DAT_e800000000000000;
    uVar4 = 0x66727573646e6957;
  }
  else {
    puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
    uVar4 = *puVar1;
    puVar5 = (undefined1 *)puVar1[1];
    _swift_bridgeObjectRetain(puVar5);
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1000b73ec | FUN_1000b73ec */

void FUN_1000b73ec(char *param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  char *pcVar3;
  void *pvVar4;
  void *pvVar5;
  bool bVar6;
  undefined *puVar7;
  long lVar8;
  LocalizedStringResource LVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  Divider DVar14;
  VerticalAlignment VVar15;
  Font FVar16;
  Alignment AVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  ulong uVar21;
  code *pcVar22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 *puVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  undefined8 uStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined8 auStack_1c0 [2];
  undefined *apuStack_1b0 [2];
  long local_1a0 [3];
  undefined *local_188;
  long local_180;
  char *local_178 [4];
  void *local_158 [2];
  MainActor *local_148;
  long local_140;
  undefined1 auStack_138 [24];
  char local_120;
  undefined7 uStack_11f;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar7 = &DAT_100fabfe0;
  local_178[2] = (char *)param_2;
  FUN_1000037f0(&DAT_100fabfe0,&DAT_100c2a250);
  apuStack_1b0[1] = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar8 = (long)apuStack_1b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_180 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar26 = (undefined8 *)(lVar8 - extraout_x12);
  local_188 = (undefined *)SwiftUI::Divider::typeMetadataAccessor();
  local_1a0[1] = *(long *)(local_188 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_1a0[1] + 0x40));
  lVar20 = (long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_1a0[2] = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12_00;
  puVar7 = &DAT_100fabfe8;
  local_1a0[0] = lVar20;
  FUN_1000037f0(&DAT_100fabfe8,&DAT_100c2a258);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_140 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12_01;
  lVar8 = 0;
  FUN_1000b292c();
  lVar8 = *(long *)(lVar8 + -8);
  lVar25 = *(long *)(lVar8 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar23 = lVar20 - (lVar25 + 0xfU & 0xfffffffffffffff0);
  LVar9 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar9.unknown + -8) + 0x40));
  LVar9.unknown = (undefined *)(lVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_148 = pMVar10;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x4c,UVar12.unknown,puVar11);
  }
  FUN_1001de6d4(LVar9.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar9);
  local_158[1] = SVar31.bridgeObject;
  local_178[1] = SVar31.str;
  FUN_1001de554(LVar9.unknown);
  SVar31 = (extension_Foundation)::Swift::String::init(LVar9);
  FVar16.unknown = local_178[2];
  local_158[0] = SVar31.bridgeObject;
  local_178[0] = SVar31.str;
  FUN_1000c495c(local_178[2],lVar23,FUN_1000b292c);
  uVar19 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar21 = uVar19 + 0x10 & (uVar19 ^ 0xffffffffffffffff);
  puVar7 = &DAT_100eb4948;
  _swift_allocObject(&DAT_100eb4948,uVar21 + lVar25,uVar19 | 7);
  local_178[3] = puVar7;
  FUN_1000523d8(lVar23,puVar7 + uVar21,FUN_1000b292c);
  lVar8 = *(long *)((long)FVar16.unknown + 8);
  _swift_beginAccess(lVar8 + 0x10,auStack_138,0,0);
  uVar29 = *(undefined8 *)(lVar8 + 0x18);
  uVar27 = *(undefined8 *)(lVar8 + 0x10);
  uStack_98 = *(undefined8 *)(lVar8 + 0x28);
  uVar30 = *(undefined8 *)(lVar8 + 0x20);
  uStack_88 = *(undefined8 *)(lVar8 + 0x38);
  uVar28 = *(undefined8 *)(lVar8 + 0x30);
  uVar24 = *(undefined8 *)(lVar8 + 0x40);
  local_b0 = uVar27;
  uStack_a8 = uVar29;
  local_a0 = uVar30;
  local_90 = uVar28;
  local_80 = uVar24;
  _swift_retain(uVar27);
  _swift_retain(uVar29);
  _swift_retain(uVar30);
  _swift_retain(uVar28);
  _swift_retain(uVar24);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(&local_120);
  _swift_release(uVar24);
  _swift_release(uVar28);
  _swift_release(uVar30);
  _swift_release(uVar29);
  _swift_release(uVar27);
  lVar8 = local_1a0[0];
  bVar6 = local_120 != '\x01';
  if (!bVar6) {
    DVar14 = SwiftUI::Divider::init();
    VVar15 = SwiftUI::VerticalAlignment::get_center(DVar14.unknown);
    *puVar26 = VVar15.unknown;
    puVar26[1] = 0x4018000000000000;
    *(undefined1 *)(puVar26 + 2) = 0;
    puVar7 = &DAT_100fac000;
    FUN_1000037f0(&DAT_100fac000,&DAT_100c2a270);
    FUN_1000b7cf4((long)puVar26 + (long)*(int *)(puVar7 + 0x2c));
    FVar16 = SwiftUI::Font::get_body(FVar16);
    puVar7 = &DAT_100c2a030;
    _swift_getKeyPath();
    AVar17.unknown = &DAT_100fac008;
    puVar18 = &DAT_100c2a278;
    FUN_1000037f0();
    iVar1 = *(int *)(AVar17.unknown + 0x24);
    *(undefined8 *)((long)puVar26 + (long)iVar1) = puVar7;
    ((undefined8 *)((long)puVar26 + (long)iVar1))[1] = FVar16.unknown;
    AVar17 = SwiftUI::Alignment::get_center(AVar17);
    *(undefined **)(LVar9.unknown + -0x10) = AVar17.unknown;
    *(undefined **)(LVar9.unknown + -8) = puVar18;
    LVar9.unknown[-0x18] = 1;
    *(undefined8 *)(LVar9.unknown + -0x20) = 0;
    LVar9.unknown[-0x28] = 1;
    *(undefined8 *)(LVar9.unknown + -0x30) = 0;
    SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
    puVar11 = (undefined8 *)((long)puVar26 + (long)*(int *)(apuStack_1b0[1] + 0x24));
    puVar11[9] = uStack_d8;
    puVar11[8] = local_e0;
    puVar11[0xb] = uStack_c8;
    puVar11[10] = uStack_d0;
    puVar11[0xd] = uStack_b8;
    puVar11[0xc] = local_c0;
    puVar11[1] = uStack_118;
    *puVar11 = CONCAT71(uStack_11f,local_120);
    puVar11[3] = uStack_108;
    puVar11[2] = local_110;
    lVar23 = local_1a0[1];
    puVar11[5] = uStack_f8;
    puVar11[4] = uStack_100;
    puVar18 = local_188;
    lVar25 = local_1a0[2];
    puVar11[7] = uStack_e8;
    puVar11[6] = local_f0;
    pcVar22 = *(code **)(local_1a0[1] + 0x10);
    local_178[2] = param_1;
    (*pcVar22)(local_1a0[2],lVar8,local_188);
    lVar2 = local_180;
    FUN_100011090(puVar26,local_180,&DAT_100fabfe0,&DAT_100c2a250);
    (*pcVar22)(lVar20,lVar25,puVar18);
    puVar7 = &DAT_100fac010;
    FUN_1000037f0(&DAT_100fac010,&DAT_100c2a280);
    FUN_100011090(lVar2,lVar20 + *(int *)(puVar7 + 0x30),&DAT_100fabfe0,&DAT_100c2a250);
    FUN_100005808(puVar26,&DAT_100fabfe0,&DAT_100c2a250);
    param_1 = local_178[2];
    pcVar22 = *(code **)(lVar23 + 8);
    (*pcVar22)(lVar8,puVar18);
    FUN_100005808(lVar2,&DAT_100fabfe0,&DAT_100c2a250);
    (*pcVar22)(lVar25,puVar18);
  }
  puVar7 = &DAT_100fabff0;
  FUN_1000037f0(&DAT_100fabff0,&DAT_100c2a260);
  (**(code **)(*(long *)(puVar7 + -8) + 0x38))(lVar20,bVar6,1,puVar7);
  lVar8 = local_140;
  FUN_100011090(lVar20,local_140,&DAT_100fabfe8,&DAT_100c2a258);
  pvVar5 = local_158[1];
  pvVar4 = local_158[0];
  pcVar3 = local_178[3];
  *(char **)param_1 = local_178[1];
  *(void **)((long)param_1 + 8) = local_158[1];
  *(char **)((long)param_1 + 0x10) = local_178[0];
  *(void **)((long)param_1 + 0x18) = local_158[0];
  *(code **)((long)param_1 + 0x20) = FUN_1000c5ef0;
  *(char **)((long)param_1 + 0x28) = local_178[3];
  puVar7 = &DAT_100fabff8;
  FUN_1000037f0(&DAT_100fabff8,&DAT_100c2a268);
  FUN_100011090(lVar8,(undefined *)((long)param_1 + (long)*(int *)(puVar7 + 0x30)),&DAT_100fabfe8,
                &DAT_100c2a258);
  _swift_bridgeObjectRetain(pvVar5);
  _swift_bridgeObjectRetain(pvVar4);
  _swift_retain(pcVar3);
  FUN_100005808(lVar20,&DAT_100fabfe8,&DAT_100c2a258);
  FUN_100005808(lVar8,&DAT_100fabfe8,&DAT_100c2a258);
  _swift_release(local_148);
  _swift_release(pcVar3);
  _swift_bridgeObjectRelease(pvVar4);
  _swift_bridgeObjectRelease(pvVar5);
  return;
}



/* Address: 0x1000b7ac4 | FUN_1000b7ac4 */

void FUN_1000b7ac4(long param_1,undefined8 *param_2)

{
  ObservedObject OVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ControlSize CVar5;
  Wrapper WVar6;
  Wrapper dynamicMember;
  undefined *puVar7;
  undefined7 extraout_var;
  Binding<bool> local_58;
  
  OVar1.unknown = (undefined *)*param_2;
  FUN_1000c8fd0(0);
  FUN_100003a00(&DAT_100faba38,FUN_1000c8fd0,&TargetProtocolConformanceDescriptor_100c2a478);
  WVar6 = SwiftUI::ObservedObject::_get_projectedValue(OVar1);
  dynamicMember.unknown = &DAT_100c2a300;
  _swift_getKeyPath();
  SwiftUI::ObservedObject::Wrapper::_get_subscript(dynamicMember);
  _swift_release(WVar6.unknown);
  _swift_release(dynamicMember.unknown);
  SwiftUI::Toggle::_init(local_58);
  puVar7 = &DAT_100fa9548;
  FUN_1000037f0(&DAT_100fa9548,&DAT_100c26610);
  iVar3 = *(int *)(puVar7 + 0x24);
  puVar7 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar4 = *(int *)(puVar7 + 0x1c);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_mini_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa600
  ;
  CVar5 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar5.value) + -8) + 0x68))
            (param_1 + iVar3 + (long)iVar4,uVar2,CONCAT71(extraout_var,CVar5.value));
  puVar7 = &DAT_100c2a2c8;
  _swift_getKeyPath();
  *(undefined **)(param_1 + iVar3) = puVar7;
  return;
}



/* Address: 0x1000b7c0c | FUN_1000b7c0c */

void FUN_1000b7c0c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x10,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  uStack_78 = *(undefined8 *)(lVar1 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  uStack_68 = *(undefined8 *)(lVar1 + 0x38);
  uVar4 = *(undefined8 *)(lVar1 + 0x30);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1000b7cf4 | FUN_1000b7cf4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000b7cf4(undefined8 *param_1,long param_2)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ControlSize CVar4;
  LocalizedStringResource LVar5;
  char *pcVar6;
  URL UVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  NSColor *nsColor;
  Color CVar12;
  undefined *puVar13;
  URL UVar14;
  Text TVar15;
  undefined7 extraout_var;
  undefined *puVar16;
  char *pcVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x8;
  long lVar20;
  long extraout_x8_00;
  undefined *puVar21;
  long extraout_x8_01;
  long lVar22;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  String SVar26;
  ulong local_2b0;
  long local_2a8;
  undefined *local_2a0;
  undefined4 local_294;
  undefined *local_290;
  undefined *puStack_288;
  undefined *local_280;
  ulong local_278;
  long local_270;
  char *local_268;
  long local_260;
  long local_258;
  long local_250;
  undefined *local_248;
  undefined *local_240;
  LocalizedStringResource local_238;
  MainActor *local_230;
  undefined *local_228;
  undefined8 *local_220;
  long local_218;
  long local_210;
  long local_208;
  long local_200;
  long local_1f8;
  long local_1f0;
  long local_1e8;
  undefined1 auStack_1e0 [64];
  undefined6 uStack_1a0;
  undefined2 local_19a;
  undefined6 uStack_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 local_18a;
  undefined6 uStack_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 local_17a;
  undefined6 uStack_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined8 uStack_168;
  undefined *local_160;
  undefined2 uStack_158;
  undefined6 uStack_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 local_146;
  undefined2 uStack_140;
  undefined6 uStack_13e;
  undefined2 uStack_138;
  undefined6 local_136;
  undefined2 uStack_130;
  undefined6 uStack_12e;
  undefined2 uStack_128;
  undefined6 uStack_126;
  undefined *puStack_120;
  undefined2 local_118;
  undefined8 local_116;
  undefined8 uStack_10e;
  undefined8 local_106;
  undefined8 uStack_fe;
  undefined8 local_f6;
  undefined6 uStack_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  String local_e0;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  puVar21 = &DAT_100fac018;
  local_220 = param_1;
  FUN_1000037f0(&DAT_100fac018,&DAT_100c2a288);
  local_228 = puVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar21 + -8) + 0x40));
  lVar20 = (long)&local_2b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_218 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12;
  local_1e8 = lVar20;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  puVar21 = (undefined *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_238.unknown = puVar21;
  local_240 = (undefined *)SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_250 = *(long *)(local_240 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_250 + 0x40));
  lVar22 = (long)puVar21 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar20 = 0;
  local_260 = lVar22;
  FUN_1000b292c();
  local_278 = *(long *)(lVar20 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar22 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  pcVar6 = &DAT_100fabd98;
  local_208 = extraout_x12_00;
  local_200 = lVar22;
  FUN_1000037f0(&DAT_100fabd98,&DAT_100c29ff8);
  local_270 = *(long *)(pcVar6 + -8);
  local_268 = pcVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_270 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar22 = lVar22 - extraout_x8_02;
  puVar21 = &DAT_100fabda0;
  FUN_1000037f0(&DAT_100fabda0,&DAT_100c2a000);
  local_258 = *(long *)(puVar21 + -8);
  local_248 = puVar21;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_258 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar20 = lVar22 - extraout_x8_03;
  puVar21 = &DAT_100fabda8;
  local_210 = lVar20;
  FUN_1000037f0(&DAT_100fabda8,&DAT_100c2a008);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar21 + -8) + 0x40));
  lVar20 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_1f0 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12_01;
  local_1f8 = lVar20;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar25 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  lVar20 = lVar20 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar21 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar21,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_230 = pMVar8;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x5e,UVar10.unknown,puVar9);
  }
  nsColor = (NSColor *)NSColor::systemGreenColor((ID)&_OBJC_CLASS___NSColor);
  CVar12 = SwiftUI::Color::init(nsColor);
  SwiftUI::Alignment::get_center((Alignment)CVar12.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4018000000000000);
  uStack_192 = (undefined2)uStack_98;
  uStack_190 = (undefined6)((ulong)uStack_98 >> 0x10);
  local_19a = (undefined2)local_a0;
  uStack_198 = (undefined6)((ulong)local_a0 >> 0x10);
  uStack_182 = (undefined2)uStack_88;
  uStack_180 = (undefined6)((ulong)uStack_88 >> 0x10);
  local_18a = (undefined2)uStack_90;
  uStack_188 = (undefined6)((ulong)uStack_90 >> 0x10);
  uStack_172 = (undefined2)uStack_78;
  uStack_170 = (undefined6)((ulong)uStack_78 >> 0x10);
  local_17a = (undefined2)local_80;
  uStack_178 = (undefined6)((ulong)local_80 >> 0x10);
  uStack_158 = 0x100;
  uStack_fe = CONCAT26(uStack_182,uStack_188);
  local_106 = CONCAT26(local_18a,uStack_190);
  uStack_10e = CONCAT26(uStack_192,uStack_198);
  local_116 = CONCAT26(local_19a,uStack_1a0);
  uStack_14e = uStack_198;
  uStack_148 = uStack_192;
  uStack_156 = uStack_1a0;
  uStack_150 = local_19a;
  local_f6 = CONCAT26(local_17a,uStack_180);
  uStack_13e = uStack_188;
  uStack_138 = uStack_182;
  local_146 = uStack_190;
  uStack_140 = local_18a;
  uStack_12e = uStack_178;
  local_136 = uStack_180;
  uStack_130 = local_17a;
  local_118 = 0x100;
  uStack_ee = uStack_178;
  uStack_e8 = uStack_172;
  puVar21 = &DAT_100c2a290;
  local_160 = CVar12.unknown;
  uStack_128 = uStack_172;
  uStack_126 = uStack_170;
  puStack_120 = CVar12.unknown;
  uStack_e6 = uStack_170;
  FUN_100011090(&local_160,&local_e0,&DAT_100fac020);
  FUN_100005808(&puStack_120,&DAT_100fac020,&DAT_100c2a290);
  uVar23 = *(undefined8 *)(param_2 + 8);
  puVar13 = &DAT_100c29f98;
  _swift_getKeyPath(&DAT_100c29f98);
  UVar14.unknown = &DAT_100c29fc0;
  _swift_getKeyPath();
  Combine::Published::_get_subscript(lVar20,uVar23,puVar13,UVar14.unknown);
  _swift_release(puVar13);
  _swift_release();
  SVar26 = Foundation::URL::get_absoluteString(UVar14);
  (**(code **)(lVar25 + 8))(lVar20,UVar7.unknown);
  local_294 = (undefined4)lVar20;
  local_e0 = SVar26;
  FUN_100008378();
  puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
  puStack_288 = (undefined *)SwiftUI::Text::_init();
  puVar13 = &DAT_100c2a298;
  local_290 = puVar16;
  local_280 = puVar21;
  _swift_getKeyPath();
  lVar20 = local_200;
  local_2a0 = puVar13;
  FUN_1000c495c(param_2,local_200,FUN_1000b292c);
  local_278 = (ulong)*(byte *)(local_278 + 0x50);
  uVar24 = local_278 + 0x10 & (local_278 ^ 0xffffffffffffffff);
  puVar21 = &DAT_100eb4970;
  local_2b0 = uVar24;
  local_2a8 = param_2;
  _swift_allocObject(&DAT_100eb4970,uVar24 + local_208,local_278 | 7);
  FUN_1000523d8(lVar20,puVar21 + uVar24,FUN_1000b292c);
  FUN_1000037f0(&DAT_100fabdb8,&DAT_100c2a018);
  FUN_1000c52a0();
  SwiftUI::Button::_init();
  lVar20 = local_260;
  SwiftUI::PlainButtonStyle::init();
  puVar21 = &DAT_100fabdd8;
  FUN_100016eac(&DAT_100fabdd8,&DAT_100fabd98,&DAT_100c29ff8,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar13 = &DAT_100fa7200;
  FUN_100003a00(&DAT_100fa7200,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar16 = local_240;
  pcVar6 = local_268;
  puVar18 = local_240;
  puVar19 = puVar21;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_210,lVar20,local_268,local_240,puVar21,puVar13);
  (**(code **)(local_250 + 8))(lVar20,puVar16);
  pcVar17 = pcVar6;
  (**(code **)(local_270 + 8))(lVar22,pcVar6);
  LVar5.unknown = local_238.unknown;
  FUN_1001de0d4(local_238.unknown);
  TVar15 = SwiftUI::Text::init(LVar5);
  local_e0.bridgeObject = puVar16;
  local_e0.str = pcVar6;
  local_d0 = puVar21;
  puStack_c8 = puVar13;
  _swift_getOpaqueTypeConformance2
            (&local_e0,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  lVar22 = local_1f8;
  lVar20 = local_210;
  puVar21 = local_248;
  (extension_SwiftUI)::SwiftUI::View::accessibilityLabel(TVar15);
  FUN_100016d74(TVar15.unknown,pcVar17,puVar18);
  _swift_bridgeObjectRelease(puVar19);
  (**(code **)(local_258 + 8))(lVar20,puVar21);
  lVar20 = local_200;
  FUN_1000c495c(local_2a8,local_200,FUN_1000b292c);
  uVar24 = local_2b0;
  puVar21 = &DAT_100eb4998;
  _swift_allocObject(&DAT_100eb4998,local_2b0 + local_208,local_278 | 7);
  FUN_1000523d8(lVar20,puVar21 + uVar24,FUN_1000b292c);
  lVar3 = local_1e8;
  SwiftUI::Button::_init();
  puVar9 = (undefined8 *)(lVar3 + *(int *)(local_228 + 0x24));
  puVar21 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar2 = *(int *)(puVar21 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_small_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa610
  ;
  CVar4 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar4.value) + -8) + 0x68))
            ((long)puVar9 + (long)iVar2,uVar1,CONCAT71(extraout_var,CVar4.value));
  puVar21 = &DAT_100c2a2c8;
  _swift_getKeyPath();
  lVar25 = local_1f0;
  *puVar9 = puVar21;
  uStack_198 = (undefined6)CONCAT62(uStack_156,uStack_158);
  uStack_192 = (undefined2)((uint6)uStack_156 >> 0x20);
  uStack_1a0 = SUB86(local_160,0);
  local_19a = (undefined2)((ulong)local_160 >> 0x30);
  uStack_188 = (undefined6)CONCAT62(local_146,uStack_148);
  uStack_182 = (undefined2)((uint6)local_146 >> 0x20);
  uStack_190 = (undefined6)CONCAT62(uStack_14e,uStack_150);
  local_18a = (undefined2)((uint6)uStack_14e >> 0x20);
  uStack_168 = CONCAT62(uStack_126,uStack_128);
  uStack_178 = (undefined6)CONCAT62(local_136,uStack_138);
  uStack_172 = (undefined2)((uint6)local_136 >> 0x20);
  uStack_180 = (undefined6)CONCAT62(uStack_13e,uStack_140);
  local_17a = (undefined2)((uint6)uStack_13e >> 0x20);
  uStack_170 = (undefined6)CONCAT62(uStack_12e,uStack_130);
  uStack_16a = (undefined2)((uint6)uStack_12e >> 0x20);
  FUN_100011090(lVar22,local_1f0,&DAT_100fabda8,&DAT_100c2a008);
  lVar20 = local_218;
  FUN_100011090(lVar3,local_218,&DAT_100fac018,&DAT_100c2a288);
  puVar9 = local_220;
  puVar19 = local_280;
  puVar18 = puStack_288;
  puVar16 = local_290;
  uVar1 = local_294;
  puVar13 = local_2a0;
  puStack_c8 = (undefined *)CONCAT26(uStack_182,uStack_188);
  local_d0 = (undefined *)CONCAT26(local_18a,uStack_190);
  local_e0.bridgeObject = (void *)CONCAT26(uStack_192,uStack_198);
  local_e0.str = (char *)CONCAT26(local_19a,uStack_1a0);
  uStack_b8 = CONCAT26(uStack_172,uStack_178);
  local_c0 = CONCAT26(local_17a,uStack_180);
  uStack_b0 = CONCAT26(uStack_16a,uStack_170);
  uStack_a8 = uStack_168;
  local_220[1] = (void *)CONCAT26(uStack_192,uStack_198);
  *local_220 = (char *)CONCAT26(local_19a,uStack_1a0);
  local_220[3] = puStack_c8;
  local_220[2] = local_d0;
  local_220[5] = uStack_b8;
  local_220[4] = local_c0;
  local_220[7] = uStack_168;
  local_220[6] = uStack_b0;
  local_220[8] = puStack_288;
  local_220[9] = local_290;
  *(char *)(local_220 + 10) = (char)local_294;
  local_220[0xb] = local_280;
  local_220[0xc] = local_2a0;
  local_220[0xd] = 1;
  *(undefined1 *)(local_220 + 0xe) = 0;
  puVar21 = &DAT_100fac028;
  FUN_1000037f0(&DAT_100fac028,&DAT_100c2a2f8);
  FUN_100011090(lVar25,(long)puVar9 + (long)*(int *)(puVar21 + 0x40),&DAT_100fabda8,&DAT_100c2a008);
  iVar2 = *(int *)(puVar21 + 0x50);
  *(undefined8 *)((long)puVar9 + (long)iVar2) = 0x4020000000000000;
  *(undefined1 *)((undefined8 *)((long)puVar9 + (long)iVar2) + 1) = 0;
  FUN_100011090(lVar20,(long)puVar9 + (long)*(int *)(puVar21 + 0x60),&DAT_100fac018,&DAT_100c2a288);
  FUN_100011090(&local_e0,auStack_1e0,&DAT_100fac020,&DAT_100c2a290);
  FUN_100016d5c(puVar18,puVar16,uVar1);
  _swift_bridgeObjectRetain(puVar19);
  _swift_retain(puVar13);
  FUN_100005808(local_1e8,&DAT_100fac018,&DAT_100c2a288);
  FUN_100005808(local_1f8,&DAT_100fabda8,&DAT_100c2a008);
  FUN_100005808(lVar20,&DAT_100fac018,&DAT_100c2a288);
  FUN_100005808(local_1f0,&DAT_100fabda8,&DAT_100c2a008);
  FUN_100016d74(puVar18,puVar16,uVar1);
  _swift_release(puVar13);
  _swift_bridgeObjectRelease(puVar19);
  FUN_100005808(&uStack_1a0,&DAT_100fac020,&DAT_100c2a290);
  _swift_release(local_230);
  return;
}



/* Address: 0x1000b8620 | FUN_1000b8620 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000b8620(long param_1)

{
  URL UVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  URL UVar7;
  ID self;
  NSString *pNVar8;
  long extraout_x8;
  undefined8 uVar9;
  long lVar10;
  String SVar11;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x66,UVar4.unknown,puVar3);
  }
  uVar9 = *(undefined8 *)(param_1 + 8);
  puVar6 = &DAT_100c29f98;
  _swift_getKeyPath(&DAT_100c29f98);
  UVar7.unknown = &DAT_100c29fc0;
  _swift_getKeyPath();
  Combine::Published::_get_subscript
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar9,puVar6,
             UVar7.unknown);
  _swift_release(puVar6);
  _swift_release();
  SVar11 = Foundation::URL::get_absoluteString(UVar7);
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  self = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard);
  NSPasteboard::clearContents(self);
  pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  NSPasteboard::setString_forType_(self,pNVar8,*(undefined8 *)PTR__NSPasteboardTypeString_100ea9100)
  ;
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  return 0;
}



/* Address: 0x1000b87d8 | FUN_1000b87d8 */

void FUN_1000b87d8(undefined8 *param_1,CGFloat param_2)

{
  String systemName;
  Design DVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Image IVar7;
  undefined7 extraout_var;
  Font FVar8;
  HierarchicalShapeStyle HVar9;
  HierarchicalShapeStyle HVar10;
  long extraout_x8;
  
  puVar2 = &DAT_100fa73a0;
  FUN_1000037f0(&DAT_100fa73a0,&DAT_100c241c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x68,UVar5.unknown,puVar4);
  }
  FUN_10020ce14();
  systemName = *(String *)pcVar6;
  _swift_bridgeObjectRetain(((String *)pcVar6)->bridgeObject);
  IVar7 = SwiftUI::Image::init(systemName);
  SwiftUI::Font::Weight::get_semibold((Weight)IVar7.unknown);
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (&stack0xffffffffffffffc0 + -extraout_x8,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar8 = SwiftUI::Font::_system(param_2,(Font)0x0);
  FUN_100005808(&stack0xffffffffffffffc0 + -extraout_x8,&DAT_100fa73a0,&DAT_100c241c8);
  HVar9.unknown = &DAT_100c2a030;
  _swift_getKeyPath();
  HVar10 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar9);
  _swift_release(pMVar3);
  *param_1 = IVar7.unknown;
  param_1[1] = HVar9.unknown;
  param_1[2] = FVar8.unknown;
  *(int *)(param_1 + 3) = (int)HVar10.unknown;
  return;
}



/* Address: 0x1000b8960 | FUN_1000b8960 */

void FUN_1000b8960(long param_1)

{
  int iVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  long lVar6;
  undefined *puVar7;
  String SVar8;
  String local_50;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x72,UVar4.unknown,puVar3);
  }
  FUN_1000c69a0();
  local_50.str = pcVar5;
  SVar8 = Swift::CustomStringConvertible::get_description();
  lVar6 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar6 + 0x20);
  puVar7 = &DAT_100fabc18;
  local_50 = SVar8;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_50,puVar7);
  iVar1 = *(int *)(lVar6 + 0x24);
  local_50 = (String)ZEXT816(0);
  puVar7 = &DAT_100fabbf8;
  FUN_1000037f0(&DAT_100fabbf8,&DAT_100c29e28);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_50,puVar7);
  iVar1 = *(int *)(lVar6 + 0x1c);
  local_50.str._0_1_ = 1;
  puVar7 = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_50,puVar7);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000b8ad4 | FUN_1000b8ad4 */

void FUN_1000b8ad4(undefined8 *param_1)

{
  undefined *puVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  Text TVar7;
  Font FVar8;
  Text TVar9;
  undefined8 *puVar10;
  Text TVar11;
  undefined *puVar12;
  undefined8 in_x3;
  undefined1 *puVar13;
  long extraout_x8;
  undefined1 auStack_70 [8];
  MainActor *local_68;
  
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  puVar12 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar1);
  local_68 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  puVar10 = puVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    puVar10 = (undefined8 *)0x1b;
    puVar12 = &DAT_00000001;
    in_x3 = 0x79;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x79,UVar5.unknown,puVar4);
  }
  FUN_1001dcd54(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  TVar7 = SwiftUI::Text::init((LocalizedStringResource)
                              (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  FVar8 = SwiftUI::Font::get_callout(TVar7.unknown);
  TVar11 = TVar7;
  puVar4 = puVar10;
  puVar13 = puVar12;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar7.unknown,puVar10,puVar12);
  _swift_release(local_68);
  _swift_bridgeObjectRelease(in_x3);
  *param_1 = TVar9.unknown;
  param_1[1] = TVar11.unknown;
  *(char *)(param_1 + 2) = (char)puVar4;
  param_1[3] = puVar13;
  return;
}



/* Address: 0x1000b8c44 | FUN_1000b8c44 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000b8ffc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000b8c44(undefined8 *param_1,Text param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,Weight param_6)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  undefined *puVar7;
  LocalizedStringResource LVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  Text TVar12;
  Font FVar13;
  Text TVar14;
  undefined1 *puVar15;
  long lVar16;
  State SVar17;
  Binding<undefined> BVar18;
  HierarchicalShapeStyle HVar19;
  VerticalAlignment VVar20;
  undefined8 *puVar21;
  Text TVar22;
  undefined8 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long extraout_x8;
  undefined8 *puVar27;
  long extraout_x8_00;
  long lVar28;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar29;
  ulong uVar30;
  String SVar31;
  undefined8 auStack_160 [4];
  undefined *apuStack_140 [2];
  long local_130;
  long local_128;
  undefined *local_120;
  ulong local_118;
  undefined *local_110;
  undefined *local_108;
  MainActor *local_100;
  undefined8 *local_f8;
  undefined8 *local_f0;
  undefined *local_e8;
  undefined4 local_dc;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  String local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar7 = &DAT_100fabc00;
  local_f8 = param_1;
  local_c8 = param_3;
  FUN_1000037f0(&DAT_100fabc00,&DAT_100c29e30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar28 = (long)apuStack_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar27 = (undefined8 *)(lVar28 - extraout_x12);
  local_f0 = puVar27;
  local_108 = (undefined *)SwiftUI::RoundedBorderTextFieldStyle::typeMetadataAccessor();
  local_110 = *(undefined **)(local_108 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_110 + 0x40));
  lVar28 = (long)puVar27 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100fabc08;
  local_118 = lVar28;
  FUN_1000037f0(&DAT_100fabc08,&DAT_100c29e38);
  local_128 = *(long *)(puVar7 + -8);
  local_120 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_128 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar28 = lVar28 - extraout_x8_01;
  puVar7 = &DAT_100fabc10;
  local_130 = lVar28;
  FUN_1000037f0(&DAT_100fabc10,&DAT_100c29e40);
  local_d0 = *(long *)(puVar7 + -8);
  local_b8 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  lVar28 = lVar28 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar28;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar28 = lVar28 - extraout_x12_00;
  local_a8 = lVar28;
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  LVar8.unknown = (undefined *)(lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  pMVar9 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar9 = Swift::MainActor::get_shared(pMVar9,pMVar9);
  puVar27 = &DAT_100fa6bb0;
  puVar24 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar7);
  local_100 = pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  puVar21 = puVar27;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    puVar21 = (undefined8 *)0x1b;
    puVar24 = &DAT_00000001;
    param_6.unknown = (undefined *)0x84;
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x84,UVar10.unknown,puVar27);
  }
  FUN_1001deb54(LVar8.unknown);
  TVar12 = SwiftUI::Text::init(LVar8);
  FVar13 = SwiftUI::Font::get_title3(TVar12.unknown);
  TVar22 = TVar12;
  puVar27 = puVar21;
  puVar15 = puVar24;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar12.unknown,puVar21,puVar24);
  _swift_bridgeObjectRelease();
  SwiftUI::Font::Weight::get_semibold(param_6);
  uVar23 = 0;
  TVar12 = TVar14;
  puVar7 = TVar22.unknown;
  apuStack_140[1] = (undefined *)SwiftUI::Text::_fontWeight(param_2);
  local_dc = SUB84(TVar12.unknown,0);
  local_e8 = puVar7;
  local_d8 = uVar23;
  FUN_100016d74(TVar14.unknown,TVar22.unknown,puVar27);
  _swift_bridgeObjectRelease();
  lVar28 = local_c8;
  FUN_1000c69a0();
  local_a0.str = puVar15;
  SVar31 = Swift::CustomStringConvertible::get_description();
  lVar16 = 0;
  FUN_1000b292c();
  puVar27 = (undefined8 *)(lVar28 + *(int *)(lVar16 + 0x20));
  uStack_78 = puVar27[1];
  local_80 = *puVar27;
  local_70 = puVar27[2];
  SVar17.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  BVar18 = SwiftUI::State::get_projectedValue(SVar17);
  pvVar6 = local_a0.bridgeObject;
  pcVar5 = local_a0.str;
  local_a0 = SVar31;
  FUN_100008378();
  *(undefined **)(LVar8.unknown + -0x10) = BVar18.unknown;
  *(undefined8 *)(LVar8.unknown + -0x20) = 0;
  *(undefined **)(LVar8.unknown + -0x18) = PTR___type_metadata_for_Swift_String_100eac208;
  lVar28 = local_130;
  (extension_SwiftUI)::SwiftUI::TextField::_init
            (local_130,BVar18.unknown,pcVar5,pvVar6,local_90,uStack_88,FUN_100004520,0,FUN_100004520
            );
  uVar30 = local_118;
  SwiftUI::RoundedBorderTextFieldStyle::init();
  HVar19.unknown = &DAT_100fabc20;
  FUN_100016eac(&DAT_100fabc20,&DAT_100fabc08,&DAT_100c29e38,
                PTR_SwiftUI__SwiftUI__TextField<undefined>_>SwiftUI__View_100eabb10);
  puVar7 = &DAT_100fabc28;
  FUN_100003a00(&DAT_100fabc28,PTR_typeMetadataAccessor_100eab0a8,
                PTR_SwiftUI__SwiftUI__RoundedBorderTextFieldStyle_>SwiftUI__TextFieldStyle_100eab098
               );
  puVar26 = local_108;
  puVar24 = local_120;
  puVar25 = local_108;
  (extension_SwiftUI)::SwiftUI::View::_textFieldStyle
            (local_a8,uVar30,local_120,local_108,HVar19.unknown,puVar7);
  (**(code **)((long)local_110 + 8))(uVar30,puVar26);
  (**(code **)(local_128 + 8))(lVar28);
  FUN_1001decd4(LVar8.unknown);
  TVar12 = SwiftUI::Text::init(LVar8);
  FVar13 = SwiftUI::Font::get_callout(TVar12.unknown);
  TVar22 = TVar12;
  puVar7 = puVar24;
  VVar20.unknown = puVar25;
  TVar14 = SwiftUI::Text::_font(FVar13.unknown);
  _swift_release(FVar13.unknown);
  FUN_100016d74(TVar12.unknown,puVar24,puVar25);
  _swift_bridgeObjectRelease();
  HVar19 = SwiftUI::HierarchicalShapeStyle::get_secondary(HVar19);
  local_a0.str._0_4_ = (int)HVar19.unknown;
  FUN_1000c4248();
  TVar12 = TVar14;
  puVar24 = TVar22.unknown;
  puVar26 = puVar7;
  local_108 = (undefined *)SwiftUI::Text::_foregroundStyle();
  local_118 = CONCAT44(local_118._4_4_,(int)puVar24);
  local_120 = puVar26;
  local_110 = TVar12.unknown;
  FUN_100016d74(TVar14.unknown,TVar22.unknown,puVar7);
  _swift_bridgeObjectRelease();
  VVar20 = SwiftUI::VerticalAlignment::get_center(VVar20);
  puVar2 = local_f0;
  *local_f0 = VVar20.unknown;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  puVar7 = &DAT_100fabc38;
  FUN_1000037f0(&DAT_100fabc38,&DAT_100c29e50);
  FUN_1000b936c((long)puVar2 + (long)*(int *)(puVar7 + 0x2c),local_c8);
  puVar26 = local_b8;
  lVar28 = local_c0;
  pcVar29 = *(code **)(local_d0 + 0x10);
  (*pcVar29)(local_c0,local_a8,local_b8);
  FUN_100011090(puVar2,local_b0,&DAT_100fabc00,&DAT_100c29e30);
  uVar23 = local_d8;
  uVar3 = local_dc;
  puVar21 = local_f8;
  puVar24 = apuStack_140[1];
  *local_f8 = apuStack_140[1];
  local_f8[1] = local_d8;
  *(char *)(local_f8 + 2) = (char)local_dc;
  local_f8[3] = local_e8;
  puVar7 = &DAT_100fabc40;
  FUN_1000037f0(&DAT_100fabc40,&DAT_100c29e58);
  (*pcVar29)((long)puVar21 + (long)*(int *)(puVar7 + 0x30),lVar28,puVar26);
  lVar28 = local_b0;
  puVar1 = local_108;
  puVar25 = local_110;
  puVar26 = local_120;
  puVar27 = (undefined8 *)((long)puVar21 + (long)*(int *)(puVar7 + 0x40));
  *puVar27 = local_108;
  puVar27[1] = local_110;
  uVar30 = local_118 & 0xffffffff;
  *(char *)(puVar27 + 2) = (char)local_118;
  puVar27[3] = local_120;
  *(undefined2 *)(puVar27 + 4) = 0x100;
  FUN_100011090(local_b0,(long)puVar21 + (long)*(int *)(puVar7 + 0x50),&DAT_100fabc00,&DAT_100c29e30
               );
  FUN_100016d5c(puVar24,uVar23,uVar3);
  puVar7 = local_e8;
  _swift_bridgeObjectRetain(local_e8);
  FUN_100016d5c(puVar1,puVar25,uVar30);
  _swift_bridgeObjectRetain(puVar26);
  FUN_100005808(puVar2,&DAT_100fabc00,&DAT_100c29e30);
  puVar4 = local_b8;
  pcVar29 = *(code **)(local_d0 + 8);
  (*pcVar29)(local_a8,local_b8);
  FUN_100005808(lVar28,&DAT_100fabc00,&DAT_100c29e30);
  FUN_100016d74(puVar1,puVar25,uVar30);
  _swift_bridgeObjectRelease(puVar26);
  (*pcVar29)(local_c0,puVar4);
  FUN_100016d74(puVar24,local_d8,local_dc);
  _swift_release(local_100);
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x1000b936c | FUN_1000b936c */

void FUN_1000b936c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  KeyboardShortcut KVar3;
  bool bVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  ButtonRole BVar11;
  Button<undefined> BVar12;
  State SVar13;
  UnownedSerialExecutor UVar14;
  long extraout_x8;
  long lVar15;
  long extraout_x8_00;
  undefined *puVar16;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  UnsafeBufferPointer<__int8> UVar18;
  undefined **ppuVar19;
  long lVar20;
  MainActor *pMVar21;
  byte *pbVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  uint uVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  ulong uVar27;
  undefined1 auStack_130 [8];
  undefined8 *local_128;
  MainActor *local_120;
  long local_118;
  MainActor *local_110;
  long local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined8 *local_e8;
  undefined1 *local_e0;
  undefined *local_d8;
  long local_d0;
  code *local_c8;
  KeyboardShortcut local_c0;
  code *local_b8;
  undefined *puStack_b0;
  long local_a8;
  long local_a0;
  long local_98;
  _StringObject local_90;
  MainActor *pMStack_88;
  undefined *local_80;
  ulong uStack_78;
  undefined8 local_70;
  
  puVar16 = &DAT_100fabc48;
  local_e8 = param_1;
  local_98 = param_2;
  FUN_1000037f0(&DAT_100fabc48,&DAT_100c29e60);
  local_f0 = puVar16;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar16 + -8) + 0x40));
  local_e0 = auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)(auStack_130 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_a0 = lVar15;
  puStack_b0 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_b8 = *(code **)(puStack_b0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_b8 + 0x40));
  puVar16 = (undefined *)(lVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar15 = 0;
  local_c0.unknown = puVar16;
  FUN_1000b292c();
  lVar25 = *(long *)(lVar15 + -8);
  local_a8 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)puVar16 - (extraout_x12_00 + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100fa6e90;
  FUN_1000037f0(&DAT_100fa6e90,&DAT_100c239b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar16 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_c8 = *(code **)(puVar16 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)((long)local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (lVar15 - extraout_x8_01) - extraout_x8_02;
  puVar5 = &DAT_100fabc50;
  FUN_1000037f0(&DAT_100fabc50,&DAT_100c29e68);
  local_108 = *(long *)(puVar5 + -8);
  local_f8 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_108 + 0x40));
  lVar20 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar8 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_128 = puVar8;
  local_120 = pMVar6;
  local_110 = pMVar7;
  UVar9 = Swift::Actor::get_unownedExecutor();
  pcVar10 = (char *)UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar10 & 1) == 0) {
    pcVar10 = "Paste/MCPSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x8e,UVar9.unknown,puVar8);
  }
  SwiftUI::ButtonRole::get_cancel((ButtonRole)pcVar10);
  BVar11 = SwiftUI::ButtonRole::typeMetadataAccessor();
  (**(code **)(*(long *)(BVar11.unknown + -8) + 0x38))(lVar15 - extraout_x8_01,0,1,BVar11.unknown);
  FUN_1000c495c(local_98,lVar15,FUN_1000b292c);
  uVar27 = (ulong)*(byte *)(lVar25 + 0x50);
  uVar26 = uVar27 + 0x10 & (uVar27 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100eb4600;
  local_d0 = extraout_x12_00;
  _swift_allocObject(&DAT_100eb4600,uVar26 + extraout_x12_00,uVar27 | 7);
  FUN_1000523d8(lVar15,puVar5 + uVar26,FUN_1000b292c);
  BVar12 = SwiftUI::Button::_init();
  KVar3.unknown = local_c0.unknown;
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar12.unknown);
  puVar5 = &DAT_100fa6e78;
  FUN_100016eac(&DAT_100fa6e78,&DAT_100fa6e58,&DAT_100c26330,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  local_118 = lVar20 - extraout_x12_01;
  local_d8 = puVar5;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar3);
  puVar1 = puStack_b0;
  local_b8 = *(code **)((long)local_b8 + 8);
  (*local_b8)(KVar3.unknown,puStack_b0);
  local_c8 = *(code **)((long)local_c8 + 8);
  (*local_c8)(lVar17,puVar16);
  lVar20 = local_98;
  FUN_1000c495c(local_98,lVar15,FUN_1000b292c);
  puVar5 = &DAT_100eb4628;
  _swift_allocObject(&DAT_100eb4628,uVar26 + local_d0,uVar27 | 7);
  FUN_1000523d8(lVar15,puVar5 + uVar26,FUN_1000b292c);
  BVar12 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar12.unknown);
  lVar15 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar3);
  (*local_b8)(KVar3.unknown,puVar1);
  (*local_c8)(lVar17,puVar16);
  puVar8 = (undefined8 *)(lVar20 + *(int *)(local_a8 + 0x20));
  uStack_78 = puVar8[1];
  local_80 = (undefined *)*puVar8;
  local_70 = puVar8[2];
  SVar13.unknown = &DAT_100fabc18;
  FUN_1000037f0(&DAT_100fabc18,&DAT_100c29e48);
  SwiftUI::State::get_wrappedValue(SVar13);
  pMVar7 = (MainActor *)((ulong)local_90.unknown & 0xffffffffffff);
  pMVar21 = (MainActor *)((ulong)pMStack_88 >> 0x38 & 0xf);
  pMVar6 = pMVar7;
  if (((ulong)pMStack_88 & 0x2000000000000000) != 0) {
    pMVar6 = pMVar21;
  }
  if (pMVar6 == (MainActor *)0x0) {
    _swift_bridgeObjectRelease();
    bVar4 = true;
    goto LAB_1000b9af0;
  }
  if (((ulong)pMStack_88 >> 0x3c & 1) == 0) {
    if (((ulong)pMStack_88 >> 0x3d & 1) == 0) {
      if (((ulong)local_90.unknown >> 0x3c & 1) == 0) {
        pMVar7 = pMStack_88;
        UVar18 = Swift::_StringObject::get_sharedUTF8(local_90);
      }
      else {
        UVar18.unknown = (undefined *)(((ulong)pMStack_88 & 0xfffffffffffffff) + 0x20);
      }
      if (*UVar18.unknown == 0x2b) {
        if ((long)pMVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1000b9ca4);
          (*pcVar24)();
        }
        pMVar7 = pMVar7 + -1;
        if (pMVar7 == (MainActor *)0x0) goto LAB_1000b9a64;
        puVar16 = (undefined *)0x0;
        do {
          UVar18.unknown = UVar18.unknown + 1;
          if (((9 < (byte)*UVar18.unknown - 0x30) ||
              (lVar17 = (long)puVar16 * 10,
              SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
             (uVar26 = (ulong)(byte)((byte)*UVar18.unknown - 0x30),
             puVar16 = (undefined *)(lVar17 + uVar26), SCARRY8(lVar17,uVar26))) goto LAB_1000b9a64;
          uVar23 = 0;
          pMVar7 = pMVar7 + -1;
        } while (pMVar7 != (MainActor *)0x0);
      }
      else if (*UVar18.unknown == 0x2d) {
        if ((long)pMVar7 < 1) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1000b9c9c);
          (*pcVar24)();
        }
        pMVar7 = pMVar7 + -1;
        if (pMVar7 == (MainActor *)0x0) {
LAB_1000b9a64:
          uVar23 = 1;
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = (undefined *)0x0;
          do {
            UVar18.unknown = UVar18.unknown + 1;
            if (((9 < (byte)*UVar18.unknown - 0x30) ||
                (lVar17 = (long)puVar16 * 10,
                SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
               (uVar26 = (ulong)(byte)((byte)*UVar18.unknown - 0x30),
               puVar16 = (undefined *)(lVar17 - uVar26), SBORROW8(lVar17,uVar26)))
            goto LAB_1000b9a64;
            uVar23 = 0;
            pMVar7 = pMVar7 + -1;
          } while (pMVar7 != (MainActor *)0x0);
        }
      }
      else {
        if (pMVar7 == (MainActor *)0x0) goto LAB_1000b9a64;
        if (UVar18.unknown == (byte *)0x0) {
          uVar23 = 0;
          puVar16 = (undefined *)0x0;
        }
        else {
          puVar16 = (undefined *)0x0;
          do {
            if (((9 < (byte)*UVar18.unknown - 0x30) ||
                (lVar17 = (long)puVar16 * 10,
                SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
               (uVar26 = (ulong)(byte)((byte)*UVar18.unknown - 0x30),
               puVar16 = (undefined *)(lVar17 + uVar26), SCARRY8(lVar17,uVar26)))
            goto LAB_1000b9a64;
            uVar23 = 0;
            pMVar7 = pMVar7 + -1;
            UVar18.unknown = UVar18.unknown + 1;
          } while (pMVar7 != (MainActor *)0x0);
        }
      }
    }
    else {
      local_80 = local_90.unknown;
      uStack_78 = (ulong)pMStack_88 & 0xffffffffffffff;
      uVar23 = (uint)local_90.unknown & 0xff;
      if (uVar23 == 0x2b) {
        if (pMVar21 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1000b9ca8);
          (*pcVar24)();
        }
        pMVar21 = pMVar21 + -1;
        if (pMVar21 == (MainActor *)0x0) goto LAB_1000b9a64;
        puVar16 = (undefined *)0x0;
        pbVar22 = (byte *)((ulong)&local_80 | 1);
        do {
          if (((9 < *pbVar22 - 0x30) ||
              (lVar17 = (long)puVar16 * 10,
              SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
             (uVar26 = (ulong)(byte)(*pbVar22 - 0x30), puVar16 = (undefined *)(lVar17 + uVar26),
             SCARRY8(lVar17,uVar26))) goto LAB_1000b9a64;
          uVar23 = 0;
          pMVar21 = pMVar21 + -1;
          pbVar22 = pbVar22 + 1;
        } while (pMVar21 != (MainActor *)0x0);
      }
      else if (uVar23 == 0x2d) {
        if (pMVar21 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1000b9ca0);
          (*pcVar24)();
        }
        pMVar21 = pMVar21 + -1;
        if (pMVar21 == (MainActor *)0x0) goto LAB_1000b9a64;
        puVar16 = (undefined *)0x0;
        pbVar22 = (byte *)((ulong)&local_80 | 1);
        do {
          if (((9 < *pbVar22 - 0x30) ||
              (lVar17 = (long)puVar16 * 10,
              SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
             (uVar26 = (ulong)(byte)(*pbVar22 - 0x30), puVar16 = (undefined *)(lVar17 - uVar26),
             SBORROW8(lVar17,uVar26))) goto LAB_1000b9a64;
          uVar23 = 0;
          pMVar21 = pMVar21 + -1;
          pbVar22 = pbVar22 + 1;
        } while (pMVar21 != (MainActor *)0x0);
      }
      else {
        if (pMVar21 == (MainActor *)0x0) goto LAB_1000b9a64;
        puVar16 = (undefined *)0x0;
        ppuVar19 = &local_80;
        do {
          if (((9 < *(byte *)ppuVar19 - 0x30) ||
              (lVar17 = (long)puVar16 * 10,
              SUB168(SEXT816((long)puVar16) * SEXT816(10),8) != lVar17 >> 0x3f)) ||
             (uVar26 = (ulong)(byte)(*(byte *)ppuVar19 - 0x30),
             puVar16 = (undefined *)(lVar17 + uVar26), SCARRY8(lVar17,uVar26))) goto LAB_1000b9a64;
          uVar23 = 0;
          pMVar21 = pMVar21 + -1;
          ppuVar19 = (undefined **)((long)ppuVar19 + 1);
        } while (pMVar21 != (MainActor *)0x0);
      }
    }
  }
  else {
    pMVar6 = pMStack_88;
    FUN_1000c42a0(local_90.unknown,pMStack_88,10);
    uVar23 = (uint)pMVar6;
    puVar16 = local_90.unknown;
  }
  _swift_bridgeObjectRelease();
  if ((uVar23 & 0xff) == 1) {
    bVar4 = true;
  }
  else {
    pMVar6 = Swift::MainActor::get_shared(local_120,pMStack_88);
    puVar8 = local_128;
    UVar14 = Swift::Actor::get_unownedExecutor();
    UVar9 = UVar14;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar9.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/MCPSettingsView.swift",0x1b,1,0xa4,UVar14.unknown,puVar8);
    }
    _swift_release(pMVar6);
    bVar4 = puVar16 + -0x10000 < (undefined *)0xffffffffffff0400;
  }
LAB_1000b9af0:
  puVar2 = local_e0;
  puVar16 = &DAT_100c29e70;
  _swift_getKeyPath();
  puVar5 = &DAT_100eb4650;
  _swift_allocObject(&DAT_100eb4650,0x11,7);
  puVar1 = local_f8;
  lVar25 = local_100;
  lVar20 = local_108;
  lVar17 = local_118;
  puVar5[0x10] = bVar4;
  puVar8 = (undefined8 *)(lVar15 + *(int *)(local_f0 + 0x24));
  *puVar8 = puVar16;
  puVar8[1] = FUN_100082388;
  puVar8[2] = puVar5;
  pcVar24 = *(code **)(local_108 + 0x10);
  (*pcVar24)(local_100,local_118,local_f8);
  FUN_100011090(lVar15,puVar2,&DAT_100fabc48,&DAT_100c29e60);
  puVar8 = local_e8;
  *local_e8 = 0;
  *(undefined1 *)(local_e8 + 1) = 1;
  puVar16 = &DAT_100fabc58;
  FUN_1000037f0(&DAT_100fabc58,&DAT_100c29ea0);
  (*pcVar24)((long)puVar8 + (long)*(int *)(puVar16 + 0x30),lVar25,puVar1);
  FUN_100011090(puVar2,(long)puVar8 + (long)*(int *)(puVar16 + 0x40),&DAT_100fabc48,&DAT_100c29e60);
  FUN_100005808(lVar15,&DAT_100fabc48,&DAT_100c29e60);
  pcVar24 = *(code **)(lVar20 + 8);
  (*pcVar24)(lVar17,puVar1);
  FUN_100005808(puVar2,&DAT_100fabc48,&DAT_100c29e60);
  (*pcVar24)(lVar25,puVar1);
  _swift_release(local_110);
  return;
}



/* Address: 0x1000b9ca8 | FUN_1000b9ca8 */

void FUN_1000b9ca8(long param_1)

{
  int iVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  undefined *puVar7;
  undefined1 local_41;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/MCPSettingsView.swift",0x1b,1,0x90,UVar4.unknown,puVar3);
  }
  lVar6 = 0;
  FUN_1000b292c();
  iVar1 = *(int *)(lVar6 + 0x1c);
  local_41 = 0;
  puVar7 = &DAT_100fa6e68;
  FUN_1000037f0(&DAT_100fa6e68,&DAT_100c26340);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + iVar1),&local_41,puVar7);
  _swift_release(pMVar2);
  return;
}


