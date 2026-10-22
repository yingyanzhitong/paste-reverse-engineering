/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002a0b58 | thunk_FUN_1002a0b5c */

void thunk_FUN_1002a0b5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b918;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b918,&DAT_100ec6040);
  DAT_100fbb048 = pTVar1;
  return;
}



/* Address: 0x1002a0b5c | FUN_1002a0b5c */

void FUN_1002a0b5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b918;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b918,&DAT_100ec6040);
  DAT_100fbb048 = pTVar1;
  return;
}



/* Address: 0x1002a0b9c | thunk_FUN_1002a0ba0 */

void thunk_FUN_1002a0ba0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b8c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b8c8,&DAT_100ec6040);
  DAT_100fbb050 = pTVar1;
  return;
}



/* Address: 0x1002a0ba0 | FUN_1002a0ba0 */

void FUN_1002a0ba0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b8c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b8c8,&DAT_100ec6040);
  DAT_100fbb050 = pTVar1;
  return;
}



/* Address: 0x1002a0be0 | FUN_1002a0be0 */

void FUN_1002a0be0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,CGPoint param_7,CGPoint param_8,Path param_9
                  )

{
  Path to;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  _CGRectGetWidth();
  _CGRectGetHeight(param_2,param_3,param_4,param_5);
  to = SwiftUI::Path::init();
  SwiftUI::Path::move((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addCurve((CGPoint)to.unknown,param_7,param_8,param_9);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addCurve((CGPoint)to.unknown,param_7,param_8,param_9);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addCurve((CGPoint)to.unknown,param_7,param_8,param_9);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addLine((CGPoint)to.unknown,(Path)param_7.unknown);
  SwiftUI::Path::addCurve((CGPoint)to.unknown,param_7,param_8,param_9);
  SwiftUI::Path::closeSubpath(to);
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  *(undefined1 *)(param_1 + 4) = local_70;
  return;
}



/* Address: 0x1002a0e78 | FUN_1002a0e78 */

void FUN_1002a0e78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3b968;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3b968,&DAT_100ec6040);
  DAT_100fbb058 = pTVar1;
  return;
}



/* Address: 0x1002a0eb8 | FUN_1002a0eb8 */

undefined1  [16] FUN_1002a0eb8(void)

{
  return ZEXT816(0x100ec6060);
}



/* Address: 0x1002a0ec8 | thunk_FUN_1002a0ecc */

void thunk_FUN_1002a0ecc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb0a8;
  FUN_100005c24(&DAT_100fbb0a8,&DAT_100c3ba10);
  puVar2 = puVar1;
  FUN_1002a0f44();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ShadowEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa7b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbb0b0 = puVar3;
  return;
}



/* Address: 0x1002a0ecc | FUN_1002a0ecc */

void FUN_1002a0ecc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb0a8;
  FUN_100005c24(&DAT_100fbb0a8,&DAT_100c3ba10);
  puVar2 = puVar1;
  FUN_1002a0f44();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ShadowEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa7b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0b0 = puVar3;
  return;
}



/* Address: 0x1002a0f44 | FUN_1002a0f44 */

void FUN_1002a0f44(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb0a0;
  FUN_100005c24(&DAT_100fbb0a0,&DAT_100c3ba08);
  puVar2 = puVar1;
  FUN_1002a0fdc();
  puVar3 = &DAT_100fb95d8;
  FUN_100016eac(&DAT_100fb95d8,&DAT_100fb94e8,&DAT_100c39280,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0b8 = puVar4;
  return;
}



/* Address: 0x1002a0fdc | FUN_1002a0fdc */

void FUN_1002a0fdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb080;
  FUN_100005c24(&DAT_100fbb080,&DAT_100c3b9e0);
  puVar2 = puVar1;
  FUN_1002a1074();
  puVar3 = &DAT_100fbb108;
  FUN_100016eac(&DAT_100fbb108,&DAT_100fbb090,&DAT_100c3b9f8,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0c0 = puVar4;
  return;
}



/* Address: 0x1002a1074 | FUN_1002a1074 */

void FUN_1002a1074(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb098;
  FUN_100005c24(&DAT_100fbb098,&DAT_100c3ba00);
  puVar2 = puVar1;
  FUN_1002a110c();
  puVar3 = &DAT_100fbb0f8;
  FUN_100016eac(&DAT_100fbb0f8,&DAT_100fbb100,&DAT_100c3ba30,
                PTR_SwiftUI__SwiftUI___OverlayModifier<undefined>_>SwiftUI__ViewModifier_100eaaa88);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0c8 = puVar4;
  return;
}



/* Address: 0x1002a110c | FUN_1002a110c */

void FUN_1002a110c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb078;
  FUN_100005c24(&DAT_100fbb078,&DAT_100c3b9d8);
  puVar2 = puVar1;
  FUN_1002a11a4();
  puVar3 = &DAT_100fbb0e8;
  FUN_100016eac(&DAT_100fbb0e8,&DAT_100fbb0f0,&DAT_100c3ba28,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0d0 = puVar4;
  return;
}



/* Address: 0x1002a11a4 | FUN_1002a11a4 */

void FUN_1002a11a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb0d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb070;
  FUN_100005c24(&DAT_100fbb070,&DAT_100c3b9d0);
  puVar2 = &DAT_100fbb0e0;
  FUN_100016eac(&DAT_100fbb0e0,&DAT_100fbb068,&DAT_100c3b9c0,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb0d8 = puVar3;
  return;
}



/* Address: 0x1002a123c | FUN_1002a123c */

void FUN_1002a123c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa920,1);
  return;
}



/* Address: 0x1002a124c | thunk_FUN_1002a1250 */

void thunk_FUN_1002a1250(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fbb138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb130;
  FUN_100005c24(&DAT_100fbb130,&DAT_100c3baa8);
  puVar2 = puVar1;
  FUN_1002a12c8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa7a0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fbb138 = puVar3;
  return;
}



/* Address: 0x1002a1250 | FUN_1002a1250 */

void FUN_1002a1250(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb130;
  FUN_100005c24(&DAT_100fbb130,&DAT_100c3baa8);
  puVar2 = puVar1;
  FUN_1002a12c8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__OffsetEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa7a0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb138 = puVar3;
  return;
}



/* Address: 0x1002a12c8 | FUN_1002a12c8 */

void FUN_1002a12c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb120;
  FUN_100005c24(&DAT_100fbb120,&DAT_100c3ba98);
  puVar2 = puVar1;
  FUN_1002a1340();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__BlendModeEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaaa38
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb140 = puVar3;
  return;
}



/* Address: 0x1002a1340 | FUN_1002a1340 */

void FUN_1002a1340(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb128;
  FUN_100005c24(&DAT_100fbb128,&DAT_100c3baa0);
  puVar2 = puVar1;
  FUN_1002a13b8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__RotationEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa978
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb148 = puVar3;
  return;
}



/* Address: 0x1002a13b8 | FUN_1002a13b8 */

void FUN_1002a13b8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb118;
  FUN_100005c24(&DAT_100fbb118,&DAT_100c3ba90);
  puVar2 = puVar1;
  FUN_1002a1430();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__BlurEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa668;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb150 = puVar3;
  return;
}



/* Address: 0x1002a1430 | FUN_1002a1430 */

void FUN_1002a1430(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb158 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb110;
  FUN_100005c24(&DAT_100fbb110,&DAT_100c3ba88);
  puVar2 = &DAT_100fbb160;
  FUN_100016eac(&DAT_100fbb160,&DAT_100fbb168,&DAT_100c3bab0,
                PTR_SwiftUI__SwiftUI___ShapeView<undefined,undefined>_>SwiftUI__View_100eaa5d8);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb158 = puVar3;
  return;
}



/* Address: 0x1002a14c8 | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14cc | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14d0 | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14d4 | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14d8 | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14dc | thunk_FUN_1002a0178 */

void thunk_FUN_1002a0178(void)

{
  thunk_FUN_1002a0178();
  return;
}



/* Address: 0x1002a14e0 | FUN_1002a14e0 */

long * FUN_1002a14e0(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  DateComponents DVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  Product PVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  undefined *local_88;
  
  uVar6 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar6 >> 0x11 & 1) != 0) {
    lVar12 = *param_2;
    *param_1 = lVar12;
    uVar15 = (ulong)uVar6 & 0xff;
    _swift_retain();
    return (long *)(lVar12 + (uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff)));
  }
  lVar12 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = lVar12;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar8 = 0;
  FUN_1002abb94();
  iVar7 = *(int *)(lVar8 + 0x14);
  DVar9 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar9.unknown + -8);
  pcVar18 = *(code **)(lVar16 + 0x30);
  _swift_retain(lVar12);
  puVar10 = puVar2 + iVar7;
  (*pcVar18)(puVar10,1,DVar9.unknown);
  if ((int)puVar10 == 0) {
    (**(code **)(lVar16 + 0x10))(puVar1 + iVar7,puVar2 + iVar7,DVar9.unknown);
    (**(code **)(lVar16 + 0x38))(puVar1 + iVar7,0,1,DVar9.unknown);
  }
  else {
    puVar11 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar7,puVar2 + iVar7,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar8 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar8 + 0x18));
  lVar12 = 0;
  FUN_1002abbf0();
  lVar17 = *(long *)(lVar12 + -8);
  puVar13 = puVar4;
  (**(code **)(lVar17 + 0x30))(puVar4,1,lVar12);
  if ((int)puVar13 != 0) {
    puVar11 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    goto LAB_1002a1748;
  }
  puVar13 = puVar4;
  _swift_getEnumCaseMultiPayload(puVar4,lVar12);
  if ((int)puVar13 == 2) {
    uVar5 = puVar4[1];
    *puVar3 = *puVar4;
    puVar3[1] = uVar5;
    _swift_bridgeObjectRetain();
    local_88 = &DAT_100fb8db0;
    FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
    iVar7 = *(int *)(local_88 + 0x30);
    pcVar18 = *(code **)(lVar16 + 0x10);
LAB_1002a16dc:
    (*pcVar18)((long)puVar3 + (long)iVar7,(long)puVar4 + (long)iVar7,DVar9.unknown);
    (*pcVar18)((long)puVar3 + (long)*(int *)(local_88 + 0x40),
               (long)puVar4 + (long)*(int *)(local_88 + 0x40),DVar9.unknown);
  }
  else {
    if ((int)puVar13 == 1) {
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      _swift_bridgeObjectRetain();
      local_88 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      iVar7 = *(int *)(local_88 + 0x30);
      pcVar18 = *(code **)(lVar16 + 0x10);
      goto LAB_1002a16dc;
    }
    (**(code **)(lVar16 + 0x10))(puVar3,puVar4,DVar9.unknown);
  }
  _swift_storeEnumTagMultiPayload(puVar3,lVar12,(ulong)puVar13 & 0xffffffff);
  (**(code **)(lVar17 + 0x38))(puVar3,0,1,lVar12);
LAB_1002a1748:
  iVar7 = *(int *)(lVar8 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x10))(puVar1 + iVar7,puVar2 + iVar7,PVar14.unknown)
  ;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x1002a17a0 | FUN_1002a17a0 */

undefined8 * FUN_1002a17a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  Product PVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar6 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar8.unknown + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  _swift_retain(uVar5);
  puVar9 = puVar2 + iVar6;
  (*pcVar15)(puVar9,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    (**(code **)(lVar16 + 0x10))(puVar1 + iVar6,puVar2 + iVar6,DVar8.unknown);
    (**(code **)(lVar16 + 0x38))(puVar1 + iVar6,0,1,DVar8.unknown);
  }
  else {
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar6,puVar2 + iVar6,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar14 = *(long *)(lVar11 + -8);
  puVar12 = puVar4;
  (**(code **)(lVar14 + 0x30))(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      uVar5 = puVar4[1];
      *puVar3 = *puVar4;
      puVar3[1] = uVar5;
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar16 + 0x10);
      (*pcVar15)((long)puVar3 + (long)*(int *)(puVar10 + 0x30),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x30),DVar8.unknown);
      (*pcVar15)((long)puVar3 + (long)*(int *)(puVar10 + 0x40),
                 (long)puVar4 + (long)*(int *)(puVar10 + 0x40),DVar8.unknown);
    }
    else {
      (**(code **)(lVar16 + 0x10))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,(ulong)puVar12 & 0xffffffff);
    (**(code **)(lVar14 + 0x38))(puVar3,0,1,lVar11);
  }
  else {
    puVar10 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar6 = *(int *)(lVar7 + 0x1c);
  PVar13 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar13.unknown + -8) + 0x10))(puVar1 + iVar6,puVar2 + iVar6,PVar13.unknown)
  ;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x1002a19f4 | FUN_1002a19f4 */

undefined8 * FUN_1002a19f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  Product PVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  long lVar18;
  
  *param_1 = *param_2;
  uVar16 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar16);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar7.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar8 = puVar1 + iVar5;
  (*pcVar17)(puVar8,1,DVar7.unknown);
  puVar9 = puVar2 + iVar5;
  (*pcVar17)(puVar9,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    if ((int)puVar9 != 0) {
      (**(code **)(lVar18 + 8))(puVar1 + iVar5,DVar7.unknown);
      goto LAB_1002a1af0;
    }
    (**(code **)(lVar18 + 0x18))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
  }
  else if ((int)puVar9 == 0) {
    (**(code **)(lVar18 + 0x10))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
LAB_1002a1af0:
    puVar10 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar11 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar17 = *(code **)(lVar15 + 0x30);
  puVar12 = puVar3;
  (*pcVar17)(puVar3,1,lVar11);
  puVar13 = puVar4;
  (*pcVar17)(puVar4,1,lVar11);
  if ((int)puVar12 == 0) {
    if ((int)puVar13 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar12 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar11);
        if ((int)puVar12 == 2) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,2);
        }
        else if ((int)puVar12 == 1) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          _swift_bridgeObjectRetain();
          puVar10 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x10);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,1);
        }
        else {
          (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar11,0);
        }
      }
      goto LAB_1002a1d38;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar13 == 0) {
    puVar12 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar11);
    if (((int)puVar12 == 2) || ((int)puVar12 == 1)) {
      *puVar3 = *puVar4;
      puVar3[1] = puVar4[1];
      _swift_bridgeObjectRetain();
      puVar10 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x10);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x30)),DVar7.unknown);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar10 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar10 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x10))(puVar3,puVar4,DVar7.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar11,puVar12);
    (**(code **)(lVar15 + 0x38))(puVar3,0,1,lVar11);
    goto LAB_1002a1d38;
  }
  puVar10 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar10 + -8) + 0x40));
LAB_1002a1d38:
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar14 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar14.unknown + -8) + 0x18))(puVar1 + iVar5,puVar2 + iVar5,PVar14.unknown)
  ;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x1002a1e2c | FUN_1002a1e2c */

undefined8 * FUN_1002a1e2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  long lVar6;
  DateComponents DVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 *puVar11;
  Product PVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar16 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar16;
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar6 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar6 + 0x14);
  DVar7 = Foundation::DateComponents::typeMetadataAccessor();
  lVar14 = *(long *)(DVar7.unknown + -8);
  puVar8 = puVar2 + iVar5;
  (**(code **)(lVar14 + 0x30))(puVar8,1,DVar7.unknown);
  if ((int)puVar8 == 0) {
    (**(code **)(lVar14 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar7.unknown);
    (**(code **)(lVar14 + 0x38))(puVar1 + iVar5,0,1,DVar7.unknown);
  }
  else {
    puVar9 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar6 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar6 + 0x18));
  lVar10 = 0;
  FUN_1002abbf0();
  lVar13 = *(long *)(lVar10 + -8);
  puVar11 = puVar4;
  (**(code **)(lVar13 + 0x30))(puVar4,1,lVar10);
  if ((int)puVar11 == 0) {
    puVar11 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar10);
    if (((int)puVar11 == 2) || ((int)puVar11 == 1)) {
      uVar16 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar16;
      puVar9 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar14 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x30)),DVar7.unknown);
      (*pcVar15)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar9 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar9 + 0x40)),DVar7.unknown);
    }
    else {
      (**(code **)(lVar14 + 0x20))(puVar3,puVar4,DVar7.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar10,(ulong)puVar11 & 0xffffffff);
    (**(code **)(lVar13 + 0x38))(puVar3,0,1,lVar10);
  }
  else {
    puVar9 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar5 = *(int *)(lVar6 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x20))(puVar1 + iVar5,puVar2 + iVar5,PVar12.unknown)
  ;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x1002a2068 | FUN_1002a2068 */

undefined8 * FUN_1002a2068(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  DateComponents DVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  Product PVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined8 uVar19;
  
  uVar19 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar19;
  _swift_release(uVar6);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
  puVar2 = (undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *puVar1 = *puVar2;
  lVar7 = 0;
  FUN_1002abb94();
  iVar5 = *(int *)(lVar7 + 0x14);
  DVar8 = Foundation::DateComponents::typeMetadataAccessor();
  lVar18 = *(long *)(DVar8.unknown + -8);
  pcVar17 = *(code **)(lVar18 + 0x30);
  puVar9 = puVar1 + iVar5;
  (*pcVar17)(puVar9,1,DVar8.unknown);
  puVar10 = puVar2 + iVar5;
  (*pcVar17)(puVar10,1,DVar8.unknown);
  if ((int)puVar9 == 0) {
    if ((int)puVar10 != 0) {
      (**(code **)(lVar18 + 8))(puVar1 + iVar5,DVar8.unknown);
      goto LAB_1002a2154;
    }
    (**(code **)(lVar18 + 0x28))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
  }
  else if ((int)puVar10 == 0) {
    (**(code **)(lVar18 + 0x20))(puVar1 + iVar5,puVar2 + iVar5,DVar8.unknown);
    (**(code **)(lVar18 + 0x38))(puVar1 + iVar5,0,1,DVar8.unknown);
  }
  else {
LAB_1002a2154:
    puVar11 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(puVar1 + iVar5,puVar2 + iVar5,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
  }
  puVar3 = (undefined8 *)(puVar1 + *(int *)(lVar7 + 0x18));
  puVar4 = (undefined8 *)(puVar2 + *(int *)(lVar7 + 0x18));
  lVar12 = 0;
  FUN_1002abbf0();
  lVar16 = *(long *)(lVar12 + -8);
  pcVar17 = *(code **)(lVar16 + 0x30);
  puVar13 = puVar3;
  (*pcVar17)(puVar3,1,lVar12);
  puVar14 = puVar4;
  (*pcVar17)(puVar4,1,lVar12);
  if ((int)puVar13 == 0) {
    if ((int)puVar14 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar3,FUN_1002abbf0);
        puVar13 = puVar4;
        _swift_getEnumCaseMultiPayload(puVar4,lVar12);
        if ((int)puVar13 == 2) {
          uVar19 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar19;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,2);
        }
        else if ((int)puVar13 == 1) {
          uVar19 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar19;
          puVar11 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar17 = *(code **)(lVar18 + 0x20);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
          (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                     (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,1);
        }
        else {
          (**(code **)(lVar18 + 0x20))(puVar3,puVar4,DVar8.unknown);
          _swift_storeEnumTagMultiPayload(puVar3,lVar12,0);
        }
      }
      goto LAB_1002a2384;
    }
    FUN_10005241c(puVar3,FUN_1002abbf0);
  }
  else if ((int)puVar14 == 0) {
    puVar13 = puVar4;
    _swift_getEnumCaseMultiPayload(puVar4,lVar12);
    if (((int)puVar13 == 2) || ((int)puVar13 == 1)) {
      uVar19 = *puVar4;
      puVar3[1] = puVar4[1];
      *puVar3 = uVar19;
      puVar11 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar17 = *(code **)(lVar18 + 0x20);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x30)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x30)),DVar8.unknown);
      (*pcVar17)((undefined1 *)((long)puVar3 + (long)*(int *)(puVar11 + 0x40)),
                 (undefined1 *)((long)puVar4 + (long)*(int *)(puVar11 + 0x40)),DVar8.unknown);
    }
    else {
      (**(code **)(lVar18 + 0x20))(puVar3,puVar4,DVar8.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar3,lVar12,puVar13);
    (**(code **)(lVar16 + 0x38))(puVar3,0,1,lVar12);
    goto LAB_1002a2384;
  }
  puVar11 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar3,puVar4,*(size_t *)(*(long *)(puVar11 + -8) + 0x40));
LAB_1002a2384:
  iVar5 = *(int *)(lVar7 + 0x1c);
  PVar15 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar15.unknown + -8) + 0x28))(puVar1 + iVar5,puVar2 + iVar5,PVar15.unknown)
  ;
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x1002a246c | FUN_1002a246c */

void FUN_1002a246c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a2478 | FUN_1002a2478 */

ulong FUN_1002a2478(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_1002abb94();
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0001002a24f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Address: 0x1002a24f4 | FUN_1002a24f4 */

void FUN_1002a24f4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a2500 | FUN_1002a2500 */

void FUN_1002a2500(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_1002abb94();
                    /* WARNING: Could not recover jumptable at 0x0001002a2570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,lVar1);
  return;
}



/* Address: 0x1002a2574 | FUN_1002a2574 */

void FUN_1002a2574(undefined8 param_1)

{
  if (DAT_100fbb1c8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caa948);
  return;
}



/* Address: 0x1002a25ac | FUN_1002a25ac */

void FUN_1002a25ac(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = &DAT_100c3bad8;
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c3baf0;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002a2628 | FUN_1002a2628 */

void FUN_1002a2628(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa98c,1);
  return;
}



/* Address: 0x1002a2638 | FUN_1002a2638 */

void FUN_1002a2638(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  int iVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  Set SVar5;
  Alignment AVar6;
  Alignment AVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  SafeAreaRegions SVar12;
  Set SVar13;
  undefined *puVar14;
  Set unaff_x20;
  undefined8 uVar15;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined2 local_78;
  
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fbb208;
  FUN_1000037f0(&DAT_100fbb208,&DAT_100c3bb58);
  FUN_1002a2888((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SVar5 = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  SVar13 = SVar5;
  if (DAT_100fbb210 != -1) {
    SVar13.unknown = (undefined *)&DAT_100fbb210;
    _swift_once(&DAT_100fbb210,FUN_1002a47c8);
  }
  uVar15 = DAT_100fbb218;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  AVar7.unknown = &DAT_100fbb220;
  puVar4 = &DAT_100c3bb60;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar7.unknown + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar6 = SwiftUI::Alignment::get_center(AVar7);
  FUN_1002a2cb4(&local_88);
  AVar7.unknown = &DAT_100fbb228;
  puVar14 = &DAT_100c3bb68;
  FUN_1000037f0();
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar7.unknown + 0x24));
  *puVar9 = local_88;
  puVar9[1] = uStack_80;
  *(undefined2 *)(puVar9 + 2) = local_78;
  puVar9[3] = AVar6.unknown;
  puVar9[4] = puVar4;
  AVar7 = SwiftUI::Alignment::get_bottom(AVar7);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x33,UVar10.unknown,puVar9);
  }
  puVar4 = &DAT_100fbb230;
  FUN_1000037f0(&DAT_100fbb230,&DAT_100c3bb70);
  iVar2 = *(int *)(puVar4 + 0x24);
  FUN_1002a2ecc((long)param_1 + (long)iVar2);
  _swift_release(pMVar8);
  SVar12.unknown = &DAT_100fbb238;
  FUN_1000037f0(&DAT_100fbb238,&DAT_100c3bb78);
  puVar9 = (undefined8 *)((long)param_1 + (long)iVar2 + (long)*(int *)(SVar12.unknown + 0x24));
  *puVar9 = AVar7.unknown;
  puVar9[1] = puVar14;
  SVar12 = SwiftUI::SafeAreaRegions::get_all(SVar12);
  SVar13 = SwiftUI::Edge::Set::get_all(SVar12.unknown);
  puVar4 = &DAT_100fbb240;
  FUN_1000037f0(&DAT_100fbb240,&DAT_100c3bb80);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = SVar12.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = (char)SVar13.unknown;
  return;
}



/* Address: 0x1002a2884 | thunk_FUN_1002a2638 */

void thunk_FUN_1002a2638(undefined8 *param_1,undefined8 param_2,undefined8 param_3,
                        undefined8 param_4,undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  int iVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  Set SVar5;
  Alignment AVar6;
  Alignment AVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  SafeAreaRegions SVar12;
  Set SVar13;
  undefined *puVar14;
  Set unaff_x20;
  undefined8 uVar15;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined2 uStack_78;
  
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4040000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fbb208;
  FUN_1000037f0(&DAT_100fbb208,&DAT_100c3bb58);
  FUN_1002a2888((long)param_1 + (long)*(int *)(puVar4 + 0x2c));
  SVar5 = SwiftUI::Edge::Set::get_horizontal(unaff_x20);
  SVar13 = SVar5;
  if (DAT_100fbb210 != -1) {
    SVar13.unknown = (undefined *)&DAT_100fbb210;
    _swift_once(&DAT_100fbb210,FUN_1002a47c8);
  }
  uVar15 = DAT_100fbb218;
  SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
  AVar7.unknown = &DAT_100fbb220;
  puVar4 = &DAT_100c3bb60;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar7.unknown + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar15;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar6 = SwiftUI::Alignment::get_center(AVar7);
  FUN_1002a2cb4(&uStack_88);
  AVar7.unknown = &DAT_100fbb228;
  puVar14 = &DAT_100c3bb68;
  FUN_1000037f0();
  puVar9 = (undefined8 *)((long)param_1 + (long)*(int *)(AVar7.unknown + 0x24));
  *puVar9 = uStack_88;
  puVar9[1] = uStack_80;
  *(undefined2 *)(puVar9 + 2) = uStack_78;
  puVar9[3] = AVar6.unknown;
  puVar9[4] = puVar4;
  AVar7 = SwiftUI::Alignment::get_bottom(AVar7);
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x33,UVar10.unknown,puVar9);
  }
  puVar4 = &DAT_100fbb230;
  FUN_1000037f0(&DAT_100fbb230,&DAT_100c3bb70);
  iVar2 = *(int *)(puVar4 + 0x24);
  FUN_1002a2ecc((long)param_1 + (long)iVar2);
  _swift_release(pMVar8);
  SVar12.unknown = &DAT_100fbb238;
  FUN_1000037f0(&DAT_100fbb238,&DAT_100c3bb78);
  puVar9 = (undefined8 *)((long)param_1 + (long)iVar2 + (long)*(int *)(SVar12.unknown + 0x24));
  *puVar9 = AVar7.unknown;
  puVar9[1] = puVar14;
  SVar12 = SwiftUI::SafeAreaRegions::get_all(SVar12);
  SVar13 = SwiftUI::Edge::Set::get_all(SVar12.unknown);
  puVar4 = &DAT_100fbb240;
  FUN_1000037f0(&DAT_100fbb240,&DAT_100c3bb80);
  iVar2 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)param_1 + (long)iVar2) = SVar12.unknown;
  *(char *)((undefined8 *)((long)param_1 + (long)iVar2) + 1) = (char)SVar13.unknown;
  return;
}



/* Address: 0x1002a2888 | FUN_1002a2888 */

void FUN_1002a2888(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined8 *puVar9;
  MainActor *apMStack_800 [37];
  undefined1 auStack_6d8 [7];
  undefined8 local_6d1;
  undefined8 uStack_6c9;
  undefined8 local_6c1;
  undefined8 uStack_6b9;
  undefined8 local_6b1;
  undefined8 uStack_6a9;
  undefined8 local_6a1;
  undefined8 uStack_699;
  undefined8 local_691;
  undefined8 uStack_689;
  undefined8 local_681;
  undefined8 uStack_679;
  undefined8 local_671;
  undefined8 uStack_669;
  undefined8 local_661;
  undefined8 uStack_659;
  undefined8 local_651;
  undefined8 uStack_649;
  undefined8 local_641;
  undefined8 uStack_639;
  undefined8 local_631;
  undefined8 uStack_629;
  undefined8 local_621;
  undefined8 uStack_619;
  undefined8 local_611;
  undefined8 uStack_609;
  undefined8 local_601;
  undefined8 uStack_5f9;
  undefined8 local_5f1;
  undefined8 uStack_5e9;
  undefined8 local_5e1;
  undefined8 uStack_5d9;
  undefined8 local_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined *local_3b8;
  undefined8 local_3b0;
  undefined1 local_3a8;
  undefined1 auStack_3a7 [263];
  undefined *local_2a0;
  undefined8 local_298;
  undefined1 local_290;
  undefined1 auStack_28f [263];
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  
  puVar2 = &DAT_100fbb2a8;
  FUN_1000037f0(&DAT_100fbb2a8,&DAT_100c3bbf8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar8 = (long)apMStack_800 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar9 = (undefined8 *)(lVar8 - extraout_x12);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar2,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  apMStack_800[1] = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "PasteLicensingAppStore/PromoPaywallView.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x27,UVar5.unknown,puVar4);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar6);
  FUN_1002a3968(&local_188,param_2);
  uStack_4f8 = uStack_c0;
  local_500 = local_c8;
  uStack_4e8 = uStack_b0;
  uStack_4f0 = local_b8;
  uStack_4d8 = uStack_a0;
  local_4e0 = local_a8;
  uStack_4c8 = uStack_90;
  uStack_4d0 = local_98;
  uStack_538 = uStack_100;
  local_540 = local_108;
  uStack_528 = uStack_f0;
  uStack_530 = local_f8;
  uStack_518 = uStack_e0;
  local_520 = local_e8;
  uStack_508 = uStack_d0;
  uStack_510 = local_d8;
  uStack_578 = uStack_140;
  local_580 = local_148;
  uStack_568 = uStack_130;
  uStack_570 = local_138;
  uStack_558 = uStack_120;
  local_560 = local_128;
  uStack_548 = uStack_110;
  uStack_550 = local_118;
  uStack_5b8 = uStack_180;
  local_5c0 = local_188;
  uStack_5a8 = uStack_170;
  uStack_5b0 = local_178;
  uStack_598 = uStack_160;
  local_5a0 = local_168;
  uStack_588 = uStack_150;
  uStack_590 = local_158;
  uStack_3e8 = uStack_b0;
  local_3f0 = local_b8;
  uStack_3d8 = uStack_a0;
  local_3e0 = local_a8;
  uStack_3c8 = uStack_90;
  local_3d0 = local_98;
  uStack_438 = uStack_100;
  local_440 = local_108;
  uStack_428 = uStack_f0;
  uStack_430 = local_f8;
  uStack_418 = uStack_e0;
  local_420 = local_e8;
  uStack_408 = uStack_d0;
  local_410 = local_d8;
  uStack_3f8 = uStack_c0;
  uStack_400 = local_c8;
  uStack_478 = uStack_140;
  local_480 = local_148;
  uStack_468 = uStack_130;
  uStack_470 = local_138;
  uStack_458 = uStack_120;
  local_460 = local_128;
  uStack_448 = uStack_110;
  uStack_450 = local_118;
  uStack_4b8 = uStack_180;
  local_4c0 = local_188;
  uStack_4a8 = uStack_170;
  uStack_4b0 = local_178;
  uStack_498 = uStack_160;
  local_4a0 = local_168;
  uStack_488 = uStack_150;
  uStack_490 = local_158;
  FUN_100011090(&local_5c0,&local_2a0,&DAT_100fbb2b0,&DAT_100c3bc00);
  FUN_100005808(&local_4c0,&DAT_100fbb2b0,&DAT_100c3bc00);
  uStack_609 = uStack_4f8;
  local_611 = local_500;
  uStack_5f9 = uStack_4e8;
  local_601 = uStack_4f0;
  uStack_5e9 = uStack_4d8;
  local_5f1 = local_4e0;
  uStack_5d9 = uStack_4c8;
  local_5e1 = uStack_4d0;
  uStack_649 = uStack_538;
  local_651 = local_540;
  uStack_639 = uStack_528;
  local_641 = uStack_530;
  uStack_629 = uStack_518;
  local_631 = local_520;
  uStack_619 = uStack_508;
  local_621 = uStack_510;
  uStack_689 = uStack_578;
  local_691 = local_580;
  uStack_679 = uStack_568;
  local_681 = uStack_570;
  uStack_669 = uStack_558;
  local_671 = local_560;
  uStack_659 = uStack_548;
  local_661 = uStack_550;
  uStack_6c9 = uStack_5b8;
  local_6d1 = local_5c0;
  uStack_6b9 = uStack_5a8;
  local_6c1 = uStack_5b0;
  uStack_6a9 = uStack_598;
  local_6b1 = local_5a0;
  uStack_699 = uStack_588;
  local_6a1 = uStack_590;
  local_3b0 = 0x4028000000000000;
  local_3a8 = 0;
  local_3b8 = HVar7.unknown;
  _memcpy(auStack_3a7,auStack_6d8,0x107);
  local_298 = 0x4028000000000000;
  local_290 = 0;
  local_2a0 = HVar7.unknown;
  _memcpy(auStack_28f,auStack_6d8,0x107);
  FUN_100011090(&local_3b8,&local_188,&DAT_100fbb2b8,&DAT_100c3bc08);
  HVar7.unknown = (undefined *)&local_2a0;
  FUN_100005808(HVar7.unknown,&DAT_100fbb2b8,&DAT_100c3bc08);
  HVar7 = SwiftUI::HorizontalAlignment::get_center(HVar7);
  *puVar9 = HVar7.unknown;
  puVar9[1] = 0x4040000000000000;
  *(undefined1 *)(puVar9 + 2) = 0;
  puVar2 = &DAT_100fbb2c0;
  FUN_1000037f0(&DAT_100fbb2c0,&DAT_100c3bc10);
  FUN_1002a314c((long)puVar9 + (long)*(int *)(puVar2 + 0x2c),param_2);
  _memcpy(auStack_6d8,&local_3b8,0x118);
  FUN_100011090(puVar9,lVar8,&DAT_100fbb2a8,&DAT_100c3bbf8);
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  _memcpy(&local_188,auStack_6d8,0x118);
  _memcpy(param_1 + 2,auStack_6d8,0x118);
  puVar2 = &DAT_100fbb2c8;
  FUN_1000037f0(&DAT_100fbb2c8,&DAT_100c3bc18);
  FUN_100011090(lVar8,(long)param_1 + (long)*(int *)(puVar2 + 0x40),&DAT_100fbb2a8,&DAT_100c3bbf8);
  iVar1 = *(int *)(puVar2 + 0x50);
  *(undefined8 *)((long)param_1 + (long)iVar1) = 0;
  *(undefined1 *)((undefined8 *)((long)param_1 + (long)iVar1) + 1) = 1;
  FUN_100011090(&local_188,apMStack_800 + 2,&DAT_100fbb2b8,&DAT_100c3bc08);
  FUN_100005808(puVar9,&DAT_100fbb2a8,&DAT_100c3bbf8);
  FUN_100005808(lVar8,&DAT_100fbb2a8,&DAT_100c3bbf8);
  FUN_100005808(auStack_6d8,&DAT_100fbb2b8,&DAT_100c3bc08);
  _swift_release(apMStack_800[1]);
  return;
}



/* Address: 0x1002a2cb4 | FUN_1002a2cb4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a2cb4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  char *pcVar9;
  Image IVar10;
  Image IVar11;
  long extraout_x8;
  EdgeInsets capInsets;
  void *pvVar12;
  long lVar13;
  String SVar14;
  undefined *puVar3;
  
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar13 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  capInsets.unknown = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x2e,UVar6.unknown,puVar5);
  }
  pvVar12 = (void *)0xef67622d79616469;
  lVar8 = 0;
  FUN_1002a2574();
  if (*(char *)(param_2 + *(int *)(lVar8 + 0x18)) == '\x01') {
    if (DAT_100fb7de8 != -1) {
      _swift_once(&DAT_100fb7de8,FUN_100241de8);
    }
    pcVar9 = (char *)0x6f6d2d7265627963;
    pvVar12 = (void *)0xef67622d7961646e;
  }
  else {
    if (DAT_100fb7de8 != -1) {
      _swift_once(&DAT_100fb7de8,FUN_100241de8);
    }
    pcVar9 = (char *)0x72662d6b63616c62;
  }
  SVar14.bridgeObject = pvVar12;
  SVar14.str = pcVar9;
  IVar10 = SwiftUI::Image::_init(SVar14);
  IVar11.unknown = puVar3;
  (**(code **)(lVar13 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar11 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar10.unknown,IVar11);
  _swift_release(IVar10.unknown);
  (**(code **)(lVar13 + 8))(capInsets.unknown,puVar3);
  _swift_release(pMVar4);
  *param_1 = IVar11.unknown;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 0x101;
  return;
}



/* Address: 0x1002a2ecc | FUN_1002a2ecc */

void FUN_1002a2ecc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  Weight WVar2;
  PlainButtonStyle PVar3;
  undefined *puVar4;
  VerticalAlignment VVar5;
  undefined *puVar6;
  Font FVar7;
  PlainButtonStyle PVar8;
  Color CVar9;
  Set SVar10;
  code *pcVar11;
  long extraout_x8;
  long extraout_x8_00;
  Weight unaff_x20;
  Color CVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined8 uVar15;
  
  PVar3 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  lVar14 = *(long *)(PVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar13 = &stack0xffffffffffffff90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fbb248;
  FUN_1000037f0(&DAT_100fbb248,&DAT_100c3bb88);
  VVar5.unknown = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar12.unknown = puVar13 + -extraout_x8_00;
  if (DAT_100fbb250 != -1) {
    VVar5.unknown = (undefined *)&DAT_100fbb250;
    _swift_once(&DAT_100fbb250,FUN_1002a4788);
  }
  uVar15 = DAT_100fbb258;
  VVar5 = SwiftUI::VerticalAlignment::get_center(VVar5);
  *(undefined **)CVar12.unknown = VVar5.unknown;
  *(undefined8 *)((long)CVar12.unknown + 8) = uVar15;
  *(undefined1 *)((long)CVar12.unknown + 0x10) = 0;
  puVar6 = &DAT_100fbb260;
  pcVar11 = (code *)&DAT_100c3bb90;
  FUN_1000037f0();
  FUN_1002a41e0((undefined1 *)((long)CVar12.unknown + (long)*(int *)(puVar6 + 0x2c)));
  if (DAT_100fbb268 != -1) {
    unaff_x20.unknown = (undefined *)&DAT_100fbb268;
    pcVar11 = FUN_1002a47a8;
    _swift_once();
  }
  WVar2.unknown = DAT_100fbb270.unknown;
  SwiftUI::Font::Weight::get_medium(unaff_x20);
  FVar7 = SwiftUI::Font::weight(WVar2,(Font)pcVar11);
  puVar6 = &DAT_100c3bb98;
  _swift_getKeyPath();
  iVar1 = *(int *)(puVar4 + 0x24);
  *(undefined8 *)((long)CVar12.unknown + (long)iVar1) = puVar6;
  ((undefined8 *)((long)CVar12.unknown + (long)iVar1))[1] = FVar7.unknown;
  PVar8 = SwiftUI::PlainButtonStyle::init();
  FUN_1002a4810();
  puVar6 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (param_1,puVar13,puVar4,PVar3.unknown,PVar8.unknown,puVar6);
  (**(code **)(lVar14 + 8))(puVar13,PVar3.unknown);
  FUN_100005808(CVar12.unknown,&DAT_100fbb248,&DAT_100c3bb88);
  CVar12 = SwiftUI::Color::get_white(CVar12);
  CVar9 = SwiftUI::Color::opacity(0.55,CVar12);
  _swift_release(CVar12.unknown);
  SVar10.unknown = &DAT_100fbb290;
  FUN_1000037f0(&DAT_100fbb290,&DAT_100c3bbd8);
  *(undefined **)(param_1 + *(int *)(SVar10.unknown + 0x24)) = CVar9.unknown;
  SVar10 = SwiftUI::Edge::Set::get_bottom(SVar10);
  SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
  puVar4 = &DAT_100fbb298;
  FUN_1000037f0(&DAT_100fbb298,&DAT_100c3bbe0);
  puVar13 = (undefined1 *)(param_1 + *(int *)(puVar4 + 0x24));
  *puVar13 = (char)SVar10.unknown;
  *(undefined8 *)(puVar13 + 8) = uVar15;
  *(undefined8 *)(puVar13 + 0x10) = param_3;
  *(undefined8 *)(puVar13 + 0x18) = param_4;
  *(undefined8 *)(puVar13 + 0x20) = param_5;
  puVar13[0x28] = 0;
  return;
}



/* Address: 0x1002a314c | FUN_1002a314c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002a3480 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002a314c(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  RGBColorSpace RVar7;
  RoundedCornerStyle RVar8;
  long lVar9;
  undefined *puVar10;
  PlainButtonStyle PVar11;
  LocalizedStringResource LVar12;
  undefined *puVar13;
  MainActor *pMVar14;
  undefined8 *puVar15;
  UnownedSerialExecutor UVar16;
  UnownedSerialExecutor UVar17;
  undefined8 uVar18;
  ObservedObject<undefined> OVar19;
  char *pcVar20;
  Text TVar21;
  Text TVar22;
  Set SVar23;
  NSColor *pNVar24;
  Set SVar25;
  Color CVar26;
  RoundedRectangle RVar27;
  Text TVar28;
  char *pcVar29;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar30;
  code *pcVar31;
  long lVar32;
  String SVar33;
  long local_140 [3];
  undefined *local_128;
  long local_120;
  long local_118;
  long local_110;
  undefined *local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  long local_e0;
  long local_d8;
  MainActor *local_d0;
  undefined *local_c8;
  long local_c0;
  long local_b8;
  undefined *local_b0;
  undefined *local_a8;
  long local_a0;
  long local_98;
  long local_90;
  String local_88;
  
  lVar9 = 0;
  local_90 = param_1;
  FUN_10027446c();
  local_b8 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  puVar13 = (undefined *)((long)local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100fbb2d0;
  local_a8 = puVar13;
  FUN_1000037f0(&DAT_100fbb2d0,&DAT_100c3bc20);
  local_b0 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar9 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  local_a0 = lVar9;
  RVar7 = SwiftUI::Color::RGBColorSpace::typeMetadataAccessor();
  local_140[1] = CONCAT71((int7)((ulong)puVar10 >> 8),RVar7.value);
  local_140[0] = *(long *)(local_140[1] + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140[0] + 0x40));
  lVar9 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_140[2] = lVar9;
  PVar11 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_110 = *(long *)(PVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar9;
  LVar12 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar12.unknown + -8) + 0x40));
  LVar12.unknown = (undefined *)(lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100fb90d0;
  FUN_1000037f0(&DAT_100fb90d0,&DAT_100c38de8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar32 = (long)LVar12.unknown - extraout_x8_04;
  puVar13 = &DAT_100fbb2d8;
  FUN_1000037f0(&DAT_100fbb2d8,&DAT_100c3bc30);
  local_e8 = puVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar13 + -8) + 0x40));
  lVar9 = lVar32 - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_e0 = lVar9 - extraout_x12_00;
  pMVar14 = Swift::MainActor::typeMetadataAccessor();
  puVar13 = PTR_typeMetadataAccessor_100eaec10;
  pMVar14 = Swift::MainActor::get_shared(pMVar14,pMVar14);
  puVar15 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar13,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_d0 = pMVar14;
  UVar16 = Swift::Actor::get_unownedExecutor();
  UVar17 = UVar16;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar17.unknown & 1) == 0) {
    param_5 = 0x3a;
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x3a,UVar16.unknown,puVar15);
  }
  lVar9 = 0;
  local_c8 = PVar11.unknown;
  FUN_1002a2574();
  local_100 = (long)*(int *)(lVar9 + 0x14);
  local_118 = lVar9;
  FUN_1000c495c(param_2 + local_100,lVar32,FUN_1002abb94);
  uVar30 = *(undefined8 *)(param_2 + 8);
  iVar2 = *(int *)(puVar10 + 0x24);
  uVar18 = 0;
  FUN_10025cdc8();
  puVar13 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain_n(uVar30,2);
  local_108 = puVar13;
  local_f8 = uVar18;
  uStack_f0 = uVar30;
  OVar19 = SwiftUI::ObservedObject::init(puVar13,uVar18,puVar13);
  *(undefined8 *)(lVar32 + iVar2) = OVar19.unknown;
  ((undefined8 *)(lVar32 + iVar2))[1] = uVar18;
  iVar2 = *(int *)(puVar10 + 0x28);
  *(undefined8 *)(lVar32 + iVar2) = 0;
  ((undefined8 *)(lVar32 + iVar2))[1] = 0;
  puVar15 = (undefined8 *)(lVar32 + *(int *)(puVar10 + 0x2c));
  FUN_1001cd2d4(LVar12.unknown);
  SVar33 = (extension_Foundation)::Swift::String::init(LVar12);
  local_88 = SVar33;
  FUN_1002538a0();
  pcVar20 = SVar33.str;
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar21 = SwiftUI::Text::_init();
  local_128 = puVar10;
  local_120 = param_2;
  if (DAT_100fbb2e0 != -1) {
    _swift_once(&DAT_100fbb2e0,FUN_1002a4744);
  }
  TVar28 = TVar21;
  puVar10 = puVar13;
  pcVar29 = pcVar20;
  TVar22 = SwiftUI::Text::_font(DAT_100fbb2e8);
  FUN_100016d74(TVar21.unknown,puVar13,pcVar20);
  _swift_bridgeObjectRelease(param_5);
  *puVar15 = TVar22.unknown;
  puVar15[1] = TVar28.unknown;
  *(char *)(puVar15 + 2) = (char)puVar10;
  puVar15[3] = pcVar29;
  lVar4 = local_d8;
  SwiftUI::PlainButtonStyle::init();
  puVar10 = &DAT_100fbb2f0;
  FUN_100016eac(&DAT_100fbb2f0,&DAT_100fb90d0,&DAT_100c38de8,
                &TargetProtocolConformanceDescriptor_100c39ae8);
  puVar13 = &DAT_100fb9b00;
  FUN_100003a00(&DAT_100fb9b00,PTR_typeMetadataAccessor_100eaa9d0,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  puVar5 = local_c8;
  lVar3 = local_e0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_e0,lVar4,local_128,local_c8,puVar10,puVar13);
  pcVar31 = *(code **)(local_110 + 8);
  (*pcVar31)(lVar4,puVar5);
  FUN_100005808(lVar32,&DAT_100fb90d0,&DAT_100c38de8);
  lVar32 = local_120;
  lVar9 = local_140[2];
  if (*(char *)(local_120 + *(int *)(local_118 + 0x18)) == '\x01') {
    (**(code **)(local_140[0] + 0x68))
              (local_140[2],
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Color_RGBColorSpace_sRGB_SwiftUI_Color_RGBColorSpace_Type___>_SwiftUI_Color_RGBColorSpace_100eab698
               ,local_140[1]);
    SVar23.unknown =
         (undefined *)SwiftUI::Color::init((RGBColorSpace)(__int8)lVar9,0.35,0.78,0.96,1.0);
  }
  else {
    pNVar24 = (NSColor *)NSColor::systemPinkColor((ID)&_OBJC_CLASS___NSColor);
    SVar23.unknown = (undefined *)SwiftUI::Color::init(pNVar24);
  }
  SVar25 = SwiftUI::Edge::Set::get_all(SVar23);
  CVar26.unknown = &DAT_100fbb2f8;
  FUN_1000037f0(&DAT_100fbb2f8,&DAT_100c3bc38);
  iVar2 = *(int *)(CVar26.unknown + 0x24);
  *(undefined8 *)(lVar3 + iVar2) = SVar23.unknown;
  *(char *)((undefined8 *)(lVar3 + iVar2) + 1) = (char)SVar25.unknown;
  CVar26 = SwiftUI::Color::get_white(CVar26);
  puVar10 = &DAT_100fbb300;
  FUN_1000037f0(&DAT_100fbb300,&DAT_100c3bc40);
  *(undefined **)(lVar3 + *(int *)(puVar10 + 0x24)) = CVar26.unknown;
  if (DAT_100fbb308 != -1) {
    _swift_once(&DAT_100fbb308,FUN_1002a4724);
  }
  uVar18 = DAT_100fbb310;
  puVar15 = (undefined8 *)(lVar3 + *(int *)(local_e8 + 0x24));
  RVar27 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar2 = *(int *)(RVar27.unknown + 0x14);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar8 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar9 = CONCAT71((int7)((ulong)RVar27.unknown >> 8),RVar8.value);
  (**(code **)(*(long *)(lVar9 + -8) + 0x68))((long)puVar15 + (long)iVar2,uVar1,lVar9);
  *puVar15 = uVar18;
  puVar15[1] = uVar18;
  puVar10 = &DAT_100fb94e8;
  FUN_1000037f0(&DAT_100fb94e8,&DAT_100c39280);
  CVar26.unknown = local_a8;
  *(undefined2 *)((long)puVar15 + (long)*(int *)(puVar10 + 0x24)) = 0x100;
  FUN_1000c495c(lVar32 + local_100,local_a8,FUN_1002abb94);
  uVar30 = 0;
  FUN_1002716e8(0);
  _swift_storeEnumTagMultiPayload(CVar26.unknown,uVar30,1);
  lVar9 = local_b8;
  iVar2 = *(int *)(local_b8 + 0x14);
  uVar18 = local_f8;
  OVar19 = SwiftUI::ObservedObject::init(uVar30,local_f8,local_108);
  *(undefined **)(CVar26.unknown + iVar2) = OVar19.unknown;
  *(undefined8 *)((long)(CVar26.unknown + iVar2) + 8) = uVar18;
  SwiftUI::PlainButtonStyle::init();
  puVar10 = &DAT_100fbb318;
  FUN_100003a00(&DAT_100fbb318,FUN_10027446c,&TargetProtocolConformanceDescriptor_100c39a98);
  lVar32 = local_a0;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(local_a0,lVar4,lVar9,puVar5,puVar10,puVar13);
  (*pcVar31)(lVar4,puVar5);
  FUN_10005241c(CVar26.unknown,FUN_10027446c);
  CVar26 = SwiftUI::Color::get_white(CVar26);
  lVar9 = local_c0;
  *(undefined **)(lVar32 + *(int *)(local_b0 + 0x24)) = CVar26.unknown;
  FUN_100011090(lVar3,local_c0,&DAT_100fbb2d8,&DAT_100c3bc30);
  lVar4 = local_98;
  FUN_100011090(lVar32,local_98,&DAT_100fbb2d0,&DAT_100c3bc20);
  lVar6 = local_90;
  FUN_100011090(lVar9,local_90,&DAT_100fbb2d8,&DAT_100c3bc30);
  puVar10 = &DAT_100fbb320;
  FUN_1000037f0(&DAT_100fbb320,&DAT_100c3bc50);
  FUN_100011090(lVar4,lVar6 + *(int *)(puVar10 + 0x30),&DAT_100fbb2d0,&DAT_100c3bc20);
  FUN_100005808(lVar32,&DAT_100fbb2d0,&DAT_100c3bc20);
  FUN_100005808(lVar3,&DAT_100fbb2d8,&DAT_100c3bc30);
  FUN_100005808(lVar4,&DAT_100fbb2d0,&DAT_100c3bc20);
  FUN_100005808(lVar9,&DAT_100fbb2d8,&DAT_100c3bc30);
  _swift_release(local_d0);
  return;
}



/* Address: 0x1002a3968 | FUN_1002a3968 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002a3968(undefined8 *param_1,long param_2)

{
  Design DVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  Text TVar8;
  undefined7 extraout_var;
  Font FVar9;
  Text TVar10;
  Text TVar11;
  Weight WVar12;
  Alignment AVar13;
  Color CVar14;
  Color CVar15;
  UnitPoint UVar16;
  Gradient gradient;
  undefined8 uVar17;
  Text TVar18;
  UnitPoint startPoint;
  undefined *puVar19;
  undefined8 uVar20;
  UnitPoint endPoint;
  undefined8 uVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  Text TVar23;
  char *pcVar24;
  undefined1 *puVar25;
  String SVar26;
  undefined8 uStack_980;
  undefined1 auStack_978 [8];
  undefined8 uStack_970;
  undefined1 auStack_968 [8];
  undefined8 auStack_960 [2];
  undefined1 auStack_950 [8];
  undefined8 local_948;
  undefined8 local_940;
  undefined8 uStack_938;
  uint local_92c;
  undefined8 local_928;
  uint local_91c;
  undefined8 local_918;
  undefined *local_910;
  MainActor *local_908;
  undefined8 *local_900;
  undefined1 auStack_8f8 [200];
  undefined *local_830;
  undefined8 uStack_828;
  undefined1 local_820;
  undefined7 uStack_81f;
  undefined *local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 local_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 local_7b0;
  undefined8 uStack_7a8;
  undefined *local_7a0;
  undefined8 uStack_798;
  undefined1 local_790;
  undefined *local_788;
  undefined8 local_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 local_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 local_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 local_720;
  undefined8 uStack_718;
  undefined *local_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined *puStack_6f8;
  undefined8 local_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 local_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 local_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 local_690;
  undefined1 uStack_688;
  undefined7 uStack_687;
  undefined1 local_680;
  undefined7 uStack_67f;
  undefined1 local_678;
  undefined *local_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined *puStack_658;
  undefined8 local_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 uStack_5e8;
  undefined *local_5e0;
  undefined1 local_5d8;
  undefined *local_5d0;
  undefined8 uStack_5c8;
  undefined8 local_5c0;
  undefined *puStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 local_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 local_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 local_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined8 uStack_538;
  undefined8 local_530;
  undefined8 uStack_528;
  undefined8 local_520;
  undefined8 uStack_518;
  undefined8 local_510;
  undefined *local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined *puStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 local_458;
  undefined8 local_450;
  undefined8 local_448;
  undefined8 local_440;
  undefined *local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 uStack_108;
  undefined7 uStack_107;
  undefined1 local_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 local_e8;
  byte local_e0;
  undefined8 local_d8;
  byte local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  
  puVar19 = &DAT_100fb92d0;
  local_900 = param_1;
  FUN_1000037f0(&DAT_100fb92d0,&DAT_100c3abc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar25 = auStack_950 + -extraout_x8;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  LVar2.unknown = puVar25 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar19 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar19,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_908 = pMVar3;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x4e,UVar5.unknown,puVar4);
  }
  lVar7 = 0;
  FUN_1002a2574();
  if (*(char *)(param_2 + *(int *)(lVar7 + 0x18)) == '\x01') {
    pcVar24 = "cyber-monday-header";
  }
  else {
    pcVar24 = "black-friday-header";
  }
  if (DAT_100fb7de8 != -1) {
    _swift_once(&DAT_100fb7de8,FUN_100241de8);
  }
  SVar26.bridgeObject = (void *)((ulong)(pcVar24 + -0x20) | 0x8000000000000000);
  SVar26.str = (char *)0xd000000000000013;
  local_910 = (undefined *)SwiftUI::Image::_init(SVar26);
  SwiftUI::Alignment::get_center((Alignment)local_910);
  uVar17 = 0;
  puVar19 = (undefined *)0x0;
  uVar21 = 1;
  SwiftUI::_FrameLayout::_init((Alignment)0x406e000000000000);
  local_918 = local_e8;
  local_91c = (uint)local_e0;
  local_928 = local_d8;
  local_92c = (uint)local_d0;
  local_940 = uStack_c0;
  uStack_938 = local_c8;
  FUN_1001cb354(LVar2.unknown);
  TVar8 = SwiftUI::Text::init(LVar2);
  if (DAT_100fbb328 != -1) {
    _swift_once(&DAT_100fbb328,FUN_1002a47e8);
  }
  DVar1 = SwiftUI::Font::Design::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar1.value) + -8) + 0x38))
            (puVar25,1,1,CONCAT71(extraout_var,DVar1.value));
  FVar9 = SwiftUI::Font::_system((CGFloat)0x0,(Font)0x1);
  FUN_100005808(puVar25,&DAT_100fb92d0,&DAT_100c3abc0);
  TVar18 = TVar8;
  uVar20 = uVar17;
  WVar12.unknown = puVar19;
  TVar10 = SwiftUI::Text::_font(FVar9.unknown);
  local_948 = uVar21;
  _swift_release(FVar9.unknown);
  FUN_100016d74(TVar8.unknown,uVar17,puVar19);
  _swift_bridgeObjectRelease(local_948);
  TVar23.unknown = (undefined *)0x3fd7ef9db22d0e56;
  TVar8.unknown = TVar18.unknown;
  uVar17 = uVar20;
  AVar13.unknown = WVar12.unknown;
  TVar11 = SwiftUI::Text::kerning(TVar10.unknown,TVar18);
  FUN_100016d74(TVar10.unknown,TVar18.unknown,uVar20);
  _swift_bridgeObjectRelease();
  SwiftUI::Font::Weight::get_bold(WVar12);
  uVar21 = 0;
  TVar18 = TVar11;
  puVar22 = TVar8.unknown;
  TVar10 = SwiftUI::Text::_fontWeight(TVar23);
  FUN_100016d74(TVar11.unknown,TVar8.unknown,uVar17);
  _swift_bridgeObjectRelease();
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  *(undefined **)(LVar2.unknown + -0x10) = AVar13.unknown;
  *(undefined **)(LVar2.unknown + -8) = TVar8.unknown;
  LVar2.unknown[-0x18] = 1;
  *(undefined8 *)(LVar2.unknown + -0x20) = 0;
  LVar2.unknown[-0x28] = 1;
  *(undefined8 *)(LVar2.unknown + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_7c8 = uStack_248;
  local_7d0 = local_250;
  uStack_7b8 = uStack_238;
  uStack_7c0 = local_240;
  uStack_7a8 = uStack_228;
  local_7b0 = local_230;
  uStack_808 = uStack_288;
  local_810 = local_290;
  uStack_7f8 = uStack_278;
  uStack_800 = local_280;
  uStack_7e8 = uStack_268;
  local_7f0 = local_270;
  uStack_7d8 = uStack_258;
  uStack_7e0 = local_260;
  puVar19 = &DAT_100c3bc60;
  local_830 = TVar10.unknown;
  uStack_828 = uVar21;
  local_820 = (char)TVar18.unknown;
  local_818 = puVar22;
  _swift_getKeyPath();
  uStack_1c8 = uStack_7d8;
  local_1d0 = uStack_7e0;
  uStack_1b8 = uStack_7c8;
  local_1c0 = local_7d0;
  uStack_1a8 = uStack_7b8;
  local_1b0 = uStack_7c0;
  uStack_198 = uStack_7a8;
  local_1a0 = local_7b0;
  local_210 = CONCAT71(uStack_81f,local_820);
  puStack_208 = local_818;
  uStack_1f8 = uStack_808;
  local_200 = local_810;
  uStack_1e8 = uStack_7f8;
  local_1f0 = uStack_800;
  uStack_1d8 = uStack_7e8;
  local_1e0 = local_7f0;
  uStack_218 = uStack_828;
  local_220 = local_830;
  uStack_738 = uStack_248;
  local_740 = local_250;
  uStack_728 = uStack_238;
  uStack_730 = local_240;
  uStack_718 = uStack_228;
  local_720 = local_230;
  uStack_778 = uStack_288;
  local_780 = local_290;
  uStack_768 = uStack_278;
  uStack_770 = local_280;
  uStack_758 = uStack_268;
  local_760 = local_270;
  uStack_748 = uStack_258;
  uStack_750 = local_260;
  local_7a0 = TVar10.unknown;
  uStack_798 = uVar21;
  local_790 = (char)TVar18.unknown;
  local_788 = puVar22;
  FUN_100011090(&local_830,&local_360,&DAT_100fba2c0,&DAT_100c3a9b0);
  FUN_100005808(&local_7a0,&DAT_100fba2c0,&DAT_100c3a9b0);
  CVar14.unknown = &DAT_100fba3e0;
  FUN_1000037f0(&DAT_100fba3e0,&DAT_100c3aaf0);
  startPoint.unknown = &DAT_00000030;
  endPoint.unknown = (undefined *)0x7;
  _swift_allocObject();
  *(undefined8 *)(CVar14.unknown + 0x18) = 4;
  *(undefined8 *)(CVar14.unknown + 0x10) = 2;
  CVar15 = SwiftUI::Color::get_white(CVar14);
  *(undefined **)(CVar14.unknown + 0x20) = CVar15.unknown;
  UVar16.unknown = (undefined *)SwiftUI::Color::get_white(CVar15);
  CVar15 = SwiftUI::Color::opacity(0.72,(Color)UVar16.unknown);
  _swift_release();
  *(undefined **)(CVar14.unknown + 0x28) = CVar15.unknown;
  UVar16 = SwiftUI::UnitPoint::get_leading(UVar16);
  SwiftUI::UnitPoint::get_trailing(UVar16);
  gradient = SwiftUI::Gradient::init();
  SwiftUI::LinearGradient::init(gradient,startPoint,endPoint);
  uStack_6a8 = uStack_1b8;
  local_6b0 = local_1c0;
  uStack_698 = uStack_1a8;
  uStack_6a0 = local_1b0;
  uStack_688 = (undefined1)uStack_198;
  uStack_687 = (undefined7)((ulong)uStack_198 >> 8);
  local_690 = local_1a0;
  uStack_6e8 = uStack_1f8;
  local_6f0 = local_200;
  uStack_6d8 = uStack_1e8;
  uStack_6e0 = local_1f0;
  uStack_6c8 = uStack_1d8;
  local_6d0 = local_1e0;
  uStack_6b8 = uStack_1c8;
  uStack_6c0 = local_1d0;
  uStack_708 = uStack_218;
  local_710 = local_220;
  puStack_6f8 = puStack_208;
  uStack_700 = local_210;
  local_680 = SUB81(puVar19,0);
  uStack_67f = (undefined7)((ulong)puVar19 >> 8);
  local_678 = 1;
  uStack_128 = uStack_1b8;
  local_130 = local_1c0;
  uStack_118 = uStack_1a8;
  local_120 = local_1b0;
  local_110 = local_1a0;
  uStack_168 = uStack_1f8;
  local_170 = local_200;
  uStack_158 = uStack_1e8;
  local_160 = local_1f0;
  uStack_148 = uStack_1d8;
  local_150 = local_1e0;
  uStack_138 = uStack_1c8;
  local_140 = local_1d0;
  uStack_188 = uStack_218;
  local_190 = local_220;
  puStack_178 = puStack_208;
  local_180 = local_210;
  uStack_ff = uStack_67f;
  uStack_f8 = 1;
  uStack_107 = uStack_687;
  local_100 = local_680;
  uStack_608 = uStack_1b8;
  local_610 = local_1c0;
  uStack_5f8 = uStack_1a8;
  uStack_600 = local_1b0;
  uStack_5e8 = uStack_198;
  local_5f0 = local_1a0;
  uStack_648 = uStack_1f8;
  local_650 = local_200;
  uStack_638 = uStack_1e8;
  uStack_640 = local_1f0;
  uStack_628 = uStack_1d8;
  local_630 = local_1e0;
  uStack_618 = uStack_1c8;
  uStack_620 = local_1d0;
  uStack_668 = uStack_218;
  local_670 = local_220;
  puStack_658 = puStack_208;
  uStack_660 = local_210;
  local_5d8 = 1;
  local_5e0 = puVar19;
  uStack_108 = uStack_688;
  FUN_100011090(&local_710,&local_360,&DAT_100fba2c8,&DAT_100c3bc90);
  FUN_100005808(&local_670,&DAT_100fba2c8,&DAT_100c3bc90);
  uStack_568 = uStack_128;
  local_570 = local_130;
  uStack_558 = uStack_118;
  local_560 = local_120;
  uStack_548 = CONCAT71(uStack_107,uStack_108);
  uStack_478 = CONCAT71(uStack_107,uStack_108);
  uStack_538 = CONCAT71(uStack_f7,uStack_f8);
  local_540 = CONCAT71(uStack_ff,local_100);
  local_550 = local_110;
  uStack_5a8 = uStack_168;
  local_5b0 = local_170;
  uStack_598 = uStack_158;
  local_5a0 = local_160;
  uStack_588 = uStack_148;
  local_590 = local_150;
  uStack_578 = uStack_138;
  local_580 = local_140;
  uStack_5c8 = uStack_188;
  local_5d0 = local_190;
  puStack_5b8 = puStack_178;
  local_5c0 = local_180;
  uStack_498 = uStack_128;
  local_4a0 = local_130;
  uStack_488 = uStack_118;
  uStack_490 = local_120;
  uStack_468 = CONCAT71(uStack_f7,uStack_f8);
  uStack_470 = CONCAT71(uStack_ff,local_100);
  local_480 = local_110;
  uStack_4d8 = uStack_168;
  local_4e0 = local_170;
  uStack_4c8 = uStack_158;
  uStack_4d0 = local_160;
  uStack_4b8 = uStack_148;
  local_4c0 = local_150;
  uStack_4a8 = uStack_138;
  uStack_4b0 = local_140;
  local_530 = local_b8;
  uStack_528 = local_b0;
  local_520 = uStack_a8;
  uStack_518 = local_a0;
  local_510 = uStack_98;
  uStack_4f8 = uStack_188;
  local_500 = local_190;
  puStack_4e8 = puStack_178;
  uStack_4f0 = local_180;
  local_460 = local_b8;
  local_458 = local_b0;
  local_450 = uStack_a8;
  local_448 = local_a0;
  local_440 = uStack_98;
  FUN_100011090(&local_5d0,&local_360,&DAT_100fbb338,&DAT_100c3bc98);
  FUN_100005808(&local_500,&DAT_100fbb338,&DAT_100c3bc98);
  puVar19 = local_910;
  uStack_2c8 = uStack_538;
  local_2d0 = local_540;
  uStack_2b8 = uStack_528;
  local_2c0 = local_530;
  uStack_2a8 = uStack_518;
  local_2b0 = local_520;
  uStack_2f8 = uStack_568;
  local_300 = local_570;
  uStack_2e8 = uStack_558;
  local_2f0 = local_560;
  uStack_2d8 = uStack_548;
  local_2e0 = local_550;
  uStack_338 = uStack_5a8;
  local_340 = local_5b0;
  uStack_328 = uStack_598;
  uStack_330 = local_5a0;
  uStack_318 = uStack_588;
  local_320 = local_590;
  uStack_308 = uStack_578;
  uStack_310 = local_580;
  uStack_358 = uStack_5c8;
  local_360 = local_5d0;
  puStack_348 = puStack_5b8;
  uStack_350 = local_5c0;
  uStack_388 = uStack_528;
  local_390 = local_530;
  uStack_378 = uStack_518;
  uStack_380 = local_520;
  uStack_3c8 = uStack_568;
  local_3d0 = local_570;
  uStack_3b8 = uStack_558;
  uStack_3c0 = local_560;
  uStack_3a8 = uStack_548;
  local_3b0 = local_550;
  uStack_398 = uStack_538;
  uStack_3a0 = local_540;
  uStack_408 = uStack_5a8;
  local_410 = local_5b0;
  uStack_3f8 = uStack_598;
  uStack_400 = local_5a0;
  uStack_3e8 = uStack_588;
  local_3f0 = local_590;
  uStack_3d8 = uStack_578;
  uStack_3e0 = local_580;
  uStack_428 = uStack_5c8;
  local_430 = local_5d0;
  puStack_418 = puStack_5b8;
  uStack_420 = local_5c0;
  local_900[0x1a] = uStack_538;
  local_900[0x19] = local_540;
  local_900[0x1c] = uStack_528;
  local_900[0x1b] = local_530;
  local_900[0x1e] = uStack_518;
  local_900[0x1d] = local_520;
  local_900[0x12] = uStack_578;
  local_900[0x11] = local_580;
  local_900[0x14] = uStack_568;
  local_900[0x13] = local_570;
  local_900[0x16] = uStack_558;
  local_900[0x15] = local_560;
  local_900[0x18] = uStack_548;
  local_900[0x17] = local_550;
  local_900[10] = puStack_5b8;
  local_900[9] = local_5c0;
  local_900[0xc] = uStack_5a8;
  local_900[0xb] = local_5b0;
  local_900[0xe] = uStack_598;
  local_900[0xd] = local_5a0;
  local_900[0x10] = uStack_588;
  local_900[0xf] = local_590;
  local_2a0 = local_510;
  local_370 = local_510;
  *local_900 = local_910;
  local_900[1] = local_918;
  *(char *)(local_900 + 2) = (char)local_91c;
  local_900[3] = local_928;
  *(char *)(local_900 + 4) = (char)local_92c;
  local_900[5] = uStack_938;
  local_900[6] = local_940;
  local_900[0x1f] = local_510;
  local_900[8] = uStack_5c8;
  local_900[7] = local_5d0;
  _swift_retain(local_910);
  FUN_100011090(&local_430,auStack_8f8,&DAT_100fbb338,&DAT_100c3bc98);
  FUN_100005808(&local_360,&DAT_100fbb338,&DAT_100c3bc98);
  _swift_release(local_908);
  _swift_release(puVar19);
  return;
}



/* Address: 0x1002a41e0 | FUN_1002a41e0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002a43d8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002a41e0(undefined8 *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  undefined8 uVar9;
  undefined *puVar10;
  long lVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_c0;
  undefined *puStack_b8;
  long local_b0;
  long local_a8;
  MainActor *local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined8 *local_78;
  String local_70;
  
  lVar2 = 0;
  local_78 = param_1;
  FUN_1002a2574();
  lVar14 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)&local_c0 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  local_b0 = extraout_x12;
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)(lVar16 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = &DAT_100fb90b8;
  FUN_1000037f0(&DAT_100fb90b8,&DAT_100c38dd0);
  local_90 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar2 = (long)LVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = lVar2 - extraout_x12_00;
  local_88 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar2 = lVar2 - extraout_x12_01;
  local_98 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a8 = lVar2 - extraout_x12_02;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_a0 = pMVar5;
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,0x61,UVar7.unknown,puVar6);
  }
  uVar12 = *(undefined8 *)(param_2 + 8);
  uVar9 = 0;
  FUN_10025cdc8();
  puVar10 = &DAT_100fb7f50;
  FUN_100003a00(&DAT_100fb7f50,FUN_10025cdc8,&TargetProtocolConformanceDescriptor_100c386d0);
  _swift_retain(uVar12);
  puStack_b8 = (undefined *)SwiftUI::ObservedObject::init(puVar10,uVar9,puVar10);
  local_c0 = uVar9;
  FUN_1001c67a4(LVar3.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar3);
  FUN_1000c495c(param_2,lVar16,FUN_1002a2574);
  uVar17 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar15 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100ec6148;
  _swift_allocObject(&DAT_100ec6148,uVar15 + local_b0,uVar17 | 7);
  lVar11 = lVar16;
  FUN_1002a48cc(lVar16,puVar10 + uVar15);
  FUN_1002538a0();
  lVar2 = local_a8;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (local_a8,lVar11,FUN_1002a4910,puVar10,PTR___type_metadata_for_Swift_String_100eac208,
             lVar11);
  FUN_1001c5e80(LVar3.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar3);
  FUN_1000c495c(param_2,lVar16,FUN_1002a2574);
  puVar10 = &DAT_100ec6170;
  _swift_allocObject(&DAT_100ec6170,uVar15 + local_b0,uVar17 | 7);
  FUN_1002a48cc(lVar16,puVar10 + uVar15);
  lVar14 = local_98;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (local_98,puVar10,FUN_1002a4aa8,puVar10,PTR___type_metadata_for_Swift_String_100eac208,
             lVar11);
  lVar11 = local_88;
  lVar16 = local_90;
  pcVar13 = *(code **)(local_90 + 0x10);
  (*pcVar13)(local_88,lVar2,puVar4);
  lVar1 = local_80;
  (*pcVar13)(local_80,lVar14,puVar4);
  puVar6 = local_78;
  uVar9 = local_c0;
  *local_78 = puStack_b8;
  local_78[1] = local_c0;
  puVar10 = &DAT_100fbb2a0;
  FUN_1000037f0(&DAT_100fbb2a0,&DAT_100c3bbf0);
  (*pcVar13)((long)puVar6 + (long)*(int *)(puVar10 + 0x30),lVar11,puVar4);
  (*pcVar13)((long)puVar6 + (long)*(int *)(puVar10 + 0x40),lVar1,puVar4);
  pcVar13 = *(code **)(lVar16 + 8);
  _swift_retain(uVar9);
  (*pcVar13)(lVar14,puVar4);
  (*pcVar13)(lVar2,puVar4);
  (*pcVar13)(lVar1,puVar4);
  (*pcVar13)(lVar11,puVar4);
  _swift_release(local_a0);
  _swift_release(uVar9);
  return;
}



/* Address: 0x1002a45c4 | FUN_1002a45c4 */

void FUN_1002a45c4(long param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  URL UVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  long extraout_x8;
  undefined1 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/PromoPaywallView.swift",0x2d,1,param_2,UVar5.unknown,puVar4);
  }
  lVar7 = *(long *)(param_1 + 8) + _TtC22PasteLicensingAppStore16PaywallViewModel::router;
  uVar9 = *(undefined8 *)(lVar7 + 0x18);
  lVar10 = *(long *)(lVar7 + 0x28);
  FUN_100004640(lVar7,uVar9);
  (*param_3)();
  (**(code **)(lVar11 + 0x10))(puVar8,lVar7,UVar2.unknown);
  (**(code **)(lVar10 + 8))(puVar8,uVar9,lVar10);
  (**(code **)(lVar11 + 8))(puVar8,UVar2.unknown);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1002a4724 | FUN_1002a4724 */

void FUN_1002a4724(void)

{
  FUN_1000f3588();
  DAT_100fbb310 = 0x4014000000000000;
  return;
}



/* Address: 0x1002a4744 | FUN_1002a4744 */

void FUN_1002a4744(Font param_1,Font param_2)

{
  Font FVar1;
  Font FVar2;
  
  FUN_1000f3588();
  FVar1 = SwiftUI::Font::get_headline(param_1);
  SwiftUI::Font::Weight::get_medium((Weight)FVar1.unknown);
  FVar2 = SwiftUI::Font::weight(FVar1.unknown,param_2);
  _swift_release(FVar1.unknown);
  DAT_100fbb2e8 = FVar2.unknown;
  return;
}



/* Address: 0x1002a4788 | FUN_1002a4788 */

void FUN_1002a4788(void)

{
  FUN_1000f3588();
  DAT_100fbb258 = 0x4040000000000000;
  return;
}



/* Address: 0x1002a47a8 | FUN_1002a47a8 */

void FUN_1002a47a8(Font param_1)

{
  FUN_1000f3588();
  DAT_100fbb270 = SwiftUI::Font::get_headline(param_1);
  return;
}



/* Address: 0x1002a47c8 | FUN_1002a47c8 */

void FUN_1002a47c8(void)

{
  FUN_1000f3588();
  DAT_100fbb218 = 0x4038000000000000;
  return;
}



/* Address: 0x1002a47e8 | FUN_1002a47e8 */

void FUN_1002a47e8(void)

{
  FUN_1000f3588();
  DAT_100fbb330 = 0x4044000000000000;
  return;
}



/* Address: 0x1002a4808 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1002a480c | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x1002a4810 | FUN_1002a4810 */

void FUN_1002a4810(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fbb278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbb248;
  FUN_100005c24(&DAT_100fbb248,&DAT_100c3bb88);
  puVar2 = &DAT_100fbb280;
  FUN_100016eac(&DAT_100fbb280,&DAT_100fbb288,&DAT_100c3bbc8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar3 = &DAT_100fb9b50;
  FUN_100016eac(&DAT_100fb9b50,&DAT_100fb9b58,&DAT_100c3a6a0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fbb278 = puVar4;
  return;
}



/* Address: 0x1002a48c8 | thunk_FUN_1002a4920 */

void thunk_FUN_1002a4920(void)

{
  FUN_1002a4920();
  return;
}



/* Address: 0x1002a48cc | FUN_1002a48cc */

undefined8 FUN_1002a48cc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002a2574();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002a4910 | FUN_1002a4910 */

void FUN_1002a4910(void)

{
  FUN_1002a4ab8(99,FUN_1001abd38);
  return;
}



/* Address: 0x1002a4920 | FUN_1002a4920 */

void FUN_1002a4920(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar3 = 0;
  FUN_1002a2574();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  lVar1 = lVar1 + *(int *)(lVar3 + 0x14);
  lVar4 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  lVar3 = lVar1 + iVar2;
  (**(code **)(lVar11 + 0x30))(lVar3,1,DVar5.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar11 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  lVar3 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar6 = 0;
  FUN_1002abbf0();
  lVar7 = lVar3;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = lVar3;
    _swift_getEnumCaseMultiPayload(lVar3,lVar6);
    iVar2 = (int)lVar7;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar12 = *(code **)(lVar11 + 8);
      (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x30),DVar5.unknown);
      (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x40),DVar5.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar11 + 8))(lVar3,DVar5.unknown);
    }
  }
  iVar2 = *(int *)(lVar4 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002a4aa8 | FUN_1002a4aa8 */

void FUN_1002a4aa8(void)

{
  FUN_1002a4ab8(100,FUN_1001abce4);
  return;
}



/* Address: 0x1002a4ab8 | FUN_1002a4ab8 */

void FUN_1002a4ab8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1002a2574();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1002a45c4(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),param_1,param_2);
  return;
}



/* Address: 0x1002a4b08 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}


