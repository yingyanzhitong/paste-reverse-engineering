/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a24780 | FUN_100a24780 */

void FUN_100a24780(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar7 = *unaff_x20;
  _swift_defaultActor_initialize();
  lVar1 = (long)unaff_x20 + *(long *)(*unaff_x20 + 0x68);
  lVar8 = *(long *)(lVar7 + 0x50);
  uVar4 = 0xff;
  FUN_100a2d4c0(0xff);
  puVar5 = &DAT_100ff5038;
  FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata3
            (0,lVar8,uVar4,puVar5,"childChannelSetup configuration onServerRunning ",0);
  iVar3 = *(int *)(lVar6 + 0x30);
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar6 + 0x40));
  (**(code **)(*(long *)(lVar8 + -8) + 0x20))(lVar1,param_1,lVar8);
  FUN_1000523d8(param_2,lVar1 + iVar3,FUN_100a2d4c0);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  uVar4 = 0;
  FUN_100a248b8(0,lVar8,*(undefined8 *)(lVar7 + 0x58));
  _swift_storeEnumTagMultiPayload(lVar1,uVar4,0);
  puVar2 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar2 = param_5;
  puVar2[1] = param_6;
  *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)) = param_7;
  return;
}



/* Address: 0x100a248b8 | FUN_100a248b8 */

void FUN_100a248b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a248c4 | FUN_100a248c4 */

void FUN_100a248c4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x1d8) = unaff_x20;
  lVar4 = *unaff_x20;
  uVar5 = *(undefined8 *)(lVar4 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar5;
  lVar6 = *(long *)(lVar4 + 0x50);
  *(long *)(unaff_x22 + 0x1e8) = lVar6;
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar5,lVar6,0x100cc971c,&TargetProtocolRequirement_100cc972c)
  ;
  lVar4 = 0;
  FUN_1005e3ae8(0,uVar1,PTR___type_metadata_for_Swift_Never_100eadc38);
  *(long *)(unaff_x22 + 0x1f0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x1f8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  lVar4 = 0;
  FUN_100a2d4c0();
  *(long *)(unaff_x22 + 0x208) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar2;
  lVar4 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x218) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar2;
  lVar4 = 0;
  FUN_100a248b8(0,lVar6,uVar5);
  *(long *)(unaff_x22 + 0x228) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x230) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar2;
  _swift_task_switch(FUN_100a249fc);
  return;
}



/* Address: 0x100a249fc | FUN_100a249fc */

void FUN_100a249fc(void)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  long lVar8;
  code *pcVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
  FUN_100a24680(uVar11);
  _swift_getEnumCaseMultiPayload(uVar11,uVar12);
  iVar2 = (int)uVar11;
  if (1 < iVar2) {
    if (iVar2 == 2) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x1e8);
      (**(code **)(*(long *)(unaff_x22 + 0x230) + 8))
                (*(undefined8 *)(unaff_x22 + 0x248),*(undefined8 *)(unaff_x22 + 0x228));
      uVar3 = 0;
      FUN_100a25654(0,uVar12,uVar11);
      uVar10 = 0;
    }
    else {
      if (iVar2 == 3) goto LAB_100a24cbc;
      uVar3 = 0;
      FUN_100a25654(0,*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1e0));
      uVar10 = 1;
    }
    pTVar7 = &TargetProtocolConformanceDescriptor_100c8e560;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e560,uVar3);
    _swift_allocError(uVar3,pTVar7,0,0);
    *(undefined1 *)&pTVar7->Protocol = uVar10;
    _swift_willThrow();
    uVar11 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x200);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100a24c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (iVar2 == 0) {
    lVar16 = *(long *)(unaff_x22 + 0x248);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x240);
    lVar8 = *(long *)(unaff_x22 + 0x230);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar17 = *(long *)(unaff_x22 + 0x218);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
    puVar4 = &DAT_100ff5038;
    FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
    lVar5 = 0;
    _swift_getTupleTypeMetadata3
              (0,uVar15,uVar14,puVar4,"childChannelSetup configuration onServerRunning ",0);
    *(long *)(unaff_x22 + 0x250) = lVar5;
    iVar2 = *(int *)(lVar5 + 0x30);
    puVar1 = (undefined8 *)(lVar16 + *(int *)(lVar5 + 0x40));
    *(undefined8 *)(unaff_x22 + 600) = *puVar1;
    *(undefined8 *)(unaff_x22 + 0x260) = puVar1[1];
    (**(code **)(lVar17 + 0x20))(uVar3,lVar16,uVar15);
    FUN_1000523d8(lVar16 + iVar2,uVar13,FUN_100a2d4c0);
    _swift_storeEnumTagMultiPayload(uVar11,uVar12,3);
    FUN_100a2af68(uVar11);
    pcVar9 = *(code **)(lVar8 + 8);
    *(code **)(unaff_x22 + 0x268) = pcVar9;
    (*pcVar9)(uVar11,uVar12);
    plVar6 = (long *)0x830;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x270) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a24d24;
    FUN_100a27b68(plVar6,*(undefined8 *)(unaff_x22 + 0x200),*(undefined8 *)(unaff_x22 + 0x220),
                  *(undefined8 *)(unaff_x22 + 0x210));
    return;
  }
  lVar16 = *(long *)(unaff_x22 + 0x248);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1f0);
  lVar5 = *(long *)(unaff_x22 + 0x1f8);
  uVar12 = 0xff;
  FUN_100974b84(0xff);
  lVar8 = 0;
  _swift_getTupleTypeMetadata2(0,uVar11,uVar12,"asyncChannel quiescingHelper ",0);
  _swift_release(*(undefined8 *)(lVar16 + *(int *)(lVar8 + 0x30)));
  (**(code **)(lVar5 + 8))(lVar16,uVar11);
LAB_100a24cbc:
  SVar18.bridgeObject = (void *)0x2;
  SVar18.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar18,(StaticString)0xd00000000000001e,0x8000000100db80a0,
             0xdb80a0);
  return;
}



/* Address: 0x100a24d24 | FUN_100a24d24 */

void FUN_100a24d24(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x278) = param_1;
  *(long *)(lVar2 + 0x280) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x270));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a24d90;
  }
  else {
    pcVar1 = FUN_100a25400;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x1d8),0);
  return;
}



/* Address: 0x100a24d90 | FUN_100a24d90 */

void FUN_100a24d90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  String SVar19;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x228);
  FUN_100a24680(uVar11);
  _swift_getEnumCaseMultiPayload(uVar11,uVar14);
  iVar3 = (int)uVar11;
  if (iVar3 < 2) {
    if (iVar3 == 0) {
      lVar17 = *(long *)(unaff_x22 + 0x238);
      iVar3 = *(int *)(*(long *)(unaff_x22 + 0x250) + 0x30);
      puVar13 = (undefined8 *)(lVar17 + *(int *)(*(long *)(unaff_x22 + 0x250) + 0x40));
      FUN_100004550(*puVar13,puVar13[1]);
      FUN_100a2afe0(lVar17 + iVar3);
      plVar12 = (long *)(unaff_x22 + 0x218);
      puVar13 = (undefined8 *)(unaff_x22 + 0x1e8);
    }
    else {
      lVar5 = *(long *)(unaff_x22 + 0x238);
      puVar13 = (undefined8 *)(unaff_x22 + 0x1f0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar11 = 0xff;
      FUN_100974b84(0xff);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,uVar14,uVar11,"asyncChannel quiescingHelper ",0);
      _swift_release(*(undefined8 *)(lVar5 + *(int *)(lVar17 + 0x30)));
      plVar12 = (long *)(unaff_x22 + 0x1f8);
    }
    (**(code **)(*plVar12 + 8))(*(undefined8 *)(unaff_x22 + 0x238),*puVar13);
    SVar19.bridgeObject = (void *)0x2;
    SVar19.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar19,(StaticString)0xd00000000000001e,0x8000000100db80c0,
               0xdb80a0);
    return;
  }
  if (iVar3 == 2) {
    (**(code **)(unaff_x22 + 0x268))
              (*(undefined8 *)(unaff_x22 + 0x238),*(undefined8 *)(unaff_x22 + 0x228));
  }
  else if (iVar3 == 3) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x278);
    pcVar9 = *(code **)(unaff_x22 + 0x268);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x260);
    uVar7 = *(undefined8 *)(unaff_x22 + 600);
    lVar16 = *(long *)(unaff_x22 + 0x240);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
    lVar17 = *(long *)(unaff_x22 + 0x1f8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar4 = 0xff;
    FUN_100974b84(0xff);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,uVar6,uVar4,"asyncChannel quiescingHelper ",0);
    iVar3 = *(int *)(lVar5 + 0x30);
    (**(code **)(lVar17 + 0x10))(lVar16,uVar1,uVar6);
    *(undefined8 *)(lVar16 + iVar3) = uVar15;
    _swift_storeEnumTagMultiPayload(lVar16,uVar18,1);
    _swift_retain(uVar15);
    FUN_100a2af68(lVar16);
    (*pcVar9)(lVar16,uVar18);
    uVar6 = 0xff;
    FUN_100a2b01c(0xff,uVar11,uVar2);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e5a0,uVar6);
    *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
    plVar12 = (long *)0x80;
    _swift_retain(uVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x288) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_100a25228;
    FUN_1009c5674();
    return;
  }
  lVar5 = *(long *)((long)*(long **)(unaff_x22 + 0x1d8) +
                   *(long *)(**(long **)(unaff_x22 + 0x1d8) + 0x70));
  _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0x1b8,0,0);
  FUN_100076688(lVar5 + 0x20,unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar17 = *(long *)(unaff_x22 + 0x188);
  FUN_100004640(unaff_x22 + 0x168,uVar11);
  (**(code **)(lVar17 + 0x70))(uVar11,lVar17);
  FUN_100004594(unaff_x22 + 0x168);
  if (((uint)uVar11 & 0xff) < 3) {
    FUN_100076688(lVar5 + 0x20,unaff_x22 + 400);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
    lVar17 = *(long *)(unaff_x22 + 0x1b0);
    FUN_100004640(unaff_x22 + 400,uVar11);
    *(undefined1 *)(unaff_x22 + 0x48) = 2;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x676e697474756853;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xed00006e776f6420;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0x98) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x8d;
    *(undefined1 *)(unaff_x22 + 0xa8) = 2;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x676e697474756853;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xed00006e776f6420;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0xf8) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x8d;
    FUN_1005bf638(unaff_x22 + 0x48,unaff_x22 + 0x108);
    FUN_1004eaa3c(unaff_x22 + 0xa8);
    (**(code **)(lVar17 + 0x28))(unaff_x22 + 0x48,uVar11,lVar17);
    FUN_1004eaa3c(unaff_x22 + 0x48);
    FUN_100004594(unaff_x22 + 400);
  }
  uVar14 = **(undefined8 **)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x290) = uVar14;
  lVar17 = (*(undefined8 **)(unaff_x22 + 0x200))[1];
  uVar11 = uVar14;
  _swift_getObjectType(uVar14);
  *(undefined8 *)(unaff_x22 + 0x1d0) = uVar14;
  plVar12 = (long *)0x80;
  _swift_unknownObjectRetain(uVar14);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x298) = plVar12;
  uVar14 = *(undefined8 *)(lVar17 + 8);
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_100a2538c;
  FUN_1005dc244(2,"HummingbirdCore/Server.swift",0x1c,2,0x8e,uVar11,uVar14);
  return;
}



/* Address: 0x100a25228 | FUN_100a25228 */

void FUN_100a25228(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x288));
  uVar2 = *(undefined8 *)(lVar1 + 0x1d8);
  if (unaff_x20 != 0) {
    _swift_errorRelease();
    _swift_release(uVar2);
    return;
  }
  _swift_release(uVar2);
  _swift_task_switch(FUN_100a252a4,uVar2,0);
  return;
}



/* Address: 0x100a252a4 | FUN_100a252a4 */

void FUN_100a252a4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar9 = *(long *)(unaff_x22 + 0x218);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar1 = *(long *)(unaff_x22 + 0x1f8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  FUN_100004550(*(undefined8 *)(unaff_x22 + 600),*(undefined8 *)(unaff_x22 + 0x260));
  _swift_release(uVar8);
  FUN_100a2afe0(uVar11);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  (**(code **)(lVar9 + 8))(uVar10,uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a25388. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a2538c | FUN_100a2538c */

void FUN_100a2538c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x2a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x298));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    _swift_unknownObjectRelease(*(undefined8 *)(lVar3 + 0x290));
    pcVar1 = thunk_FUN_100a252a4;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    pcVar1 = FUN_100a25514;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100a25400 | FUN_100a25400 */

void FUN_100a25400(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  pcVar3 = *(code **)(unaff_x22 + 0x268);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 600);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar8 = *(long *)(unaff_x22 + 0x218);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  _swift_storeEnumTagMultiPayload(uVar4,uVar7,4);
  FUN_100a2af68(uVar4);
  (*pcVar3)(uVar4,uVar7);
  _swift_willThrow();
  FUN_100004550(uVar6,uVar5);
  FUN_100a2afe0(uVar9);
  (**(code **)(lVar8 + 8))(uVar2,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100a25510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a25514 | FUN_100a25514 */

void FUN_100a25514(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
  lVar8 = *(long *)(unaff_x22 + 0x1f8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x278));
  _swift_unknownObjectRelease(uVar3);
  (**(code **)(lVar8 + 8))(uVar1,uVar4);
  pcVar2 = *(code **)(unaff_x22 + 0x268);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar6 = *(undefined8 *)(unaff_x22 + 600);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar8 = *(long *)(unaff_x22 + 0x218);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  _swift_storeEnumTagMultiPayload(uVar4,uVar7,4);
  FUN_100a2af68(uVar4);
  (*pcVar2)(uVar4,uVar7);
  _swift_willThrow();
  FUN_100004550(uVar6,uVar5);
  FUN_100a2afe0(uVar9);
  (**(code **)(lVar8 + 8))(uVar3,uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x248));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100a25650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a25654 | FUN_100a25654 */

void FUN_100a25654(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a25660 | FUN_100a25660 */

void FUN_100a25660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 **)(unaff_x22 + 0x168) = param_5;
  *(undefined8 *)(unaff_x22 + 0x170) = param_6;
  *(undefined8 *)(unaff_x22 + 0x158) = param_3;
  *(undefined8 *)(unaff_x22 + 0x160) = param_4;
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x178) = *param_5;
  _swift_task_switch(FUN_100a25688,param_5,0);
  return;
}



/* Address: 0x100a25688 | FUN_100a25688 */

void FUN_100a25688(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  long *plVar7;
  UnownedSerialExecutor UVar8;
  int *piVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  piVar9 = *(int **)(unaff_x22 + 0x150);
  if (piVar9 != (int *)0x0) {
    uVar2 = **(undefined8 **)(unaff_x22 + 0x160);
    uVar3 = (*(undefined8 **)(unaff_x22 + 0x160))[1];
    iVar1 = *piVar9;
    plVar7 = (long *)(ulong)(uint)piVar9[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x180) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a25830;
                    /* WARNING: Could not recover jumptable at 0x000100a25708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar9 + (long)iVar1))(uVar2,uVar3);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar12 = *(undefined8 *)
            ((long)*(long **)(unaff_x22 + 0x168) + *(long *)(**(long **)(unaff_x22 + 0x168) + 0x70))
  ;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar12;
  uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0x178) + 0x50);
  *(undefined8 *)(unaff_x22 + 400) = uVar10;
  uVar11 = *(undefined8 *)(*(long *)(unaff_x22 + 0x178) + 0x58);
  *(undefined8 *)(unaff_x22 + 0x198) = uVar11;
  uVar5 = 0xff;
  FUN_100a2b01c(0xff,uVar10,uVar11);
  pTVar6 = &TargetProtocolConformanceDescriptor_100c8e5a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e5a0,uVar5);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar12;
  bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar4 & 1) != 0) {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withDiscardingTaskGroup_100eaefa8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1a0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a259c4;
    Swift::_withDiscardingTaskGroup();
    return;
  }
  _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x168));
  UVar8 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x1a8) = UVar8.unknown;
  *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x1b0) = pTVar6;
  _swift_task_switch(FUN_100a25a14,UVar8.unknown,pTVar6);
  return;
}



/* Address: 0x100a25830 | FUN_100a25830 */

void FUN_100a25830(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x168);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x180));
  _swift_task_switch(FUN_100a25884,uVar1,0);
  return;
}



/* Address: 0x100a25884 | FUN_100a25884 */

void FUN_100a25884(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined8 uVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  long *plVar6;
  UnownedSerialExecutor UVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar10 = *(undefined8 *)
            ((long)*(long **)(unaff_x22 + 0x168) + *(long *)(**(long **)(unaff_x22 + 0x168) + 0x70))
  ;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x188) = uVar10;
  uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x178) + 0x50);
  *(undefined8 *)(unaff_x22 + 400) = uVar8;
  uVar9 = *(undefined8 *)(*(long *)(unaff_x22 + 0x178) + 0x58);
  *(undefined8 *)(unaff_x22 + 0x198) = uVar9;
  uVar4 = 0xff;
  FUN_100a2b01c(0xff,uVar8,uVar9);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c8e5a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e5a0,uVar4);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x140) = uVar10;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar3 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withDiscardingTaskGroup_100eaefa8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1a0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a259c4;
    Swift::_withDiscardingTaskGroup();
    return;
  }
  _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x168));
  UVar7 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x1a8) = UVar7.unknown;
  *(TargetProtocolConformanceDescriptor **)(unaff_x22 + 0x1b0) = pTVar5;
  _swift_task_switch(FUN_100a25a14,UVar7.unknown,pTVar5);
  return;
}



/* Address: 0x100a259c4 | FUN_100a259c4 */

void FUN_100a259c4(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1a0));
  _swift_task_switch(FUN_1000e5808,*(undefined8 *)(lVar1 + 0x168),0);
  return;
}



/* Address: 0x100a25a14 | FUN_100a25a14 */

void FUN_100a25a14(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_taskGroup_initializeWithFlags
            (0x100,unaff_x22 + 0x10,PTR___type_metadata_for____100eae0c8 + 8);
  *(long *)(unaff_x22 + 0x148) = unaff_x22 + 0x10;
  plVar1 = (long *)0x240;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a25a94;
  FUN_100a25bbc();
  return;
}



/* Address: 0x100a25a94 | FUN_100a25a94 */

void FUN_100a25a94(void)

{
  DiscardingTaskGroup DVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b8));
  DVar1.unknown = (undefined *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaef78 + 4);
  _swift_task_alloc();
  *(undefined **)(lVar2 + 0x1c0) = DVar1.unknown;
  *(long *)DVar1.unknown = lVar3;
  *(code **)(DVar1.unknown + 8) = FUN_100a25afc;
  Swift::DiscardingTaskGroup::_awaitAllRemainingTasks(DVar1);
  return;
}



/* Address: 0x100a25afc | FUN_100a25afc */

void FUN_100a25afc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1c0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a25b5c;
  }
  else {
    pcVar1 = FUN_100a25ba0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x1a8),*(undefined8 *)(lVar2 + 0x1b0));
  return;
}



/* Address: 0x100a25b5c | FUN_100a25b5c */

void FUN_100a25b5c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_task_switch(FUN_1000e5808,*(undefined8 *)(unaff_x22 + 0x168),0);
  return;
}



/* Address: 0x100a25ba0 | FUN_100a25ba0 */

void FUN_100a25ba0(void)

{
  long unaff_x22;
  
  _swift_unexpectedError
            (*(undefined8 *)(unaff_x22 + 0x1c8),"_Concurrency/arm64e-apple-macos.swiftinterface",
             0x2e,1,0x680);
  return;
}



/* Address: 0x100a25bbc | FUN_100a25bbc */

void FUN_100a25bbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x228) = param_7;
  *(undefined8 *)(unaff_x22 + 0x220) = param_6;
  *(undefined8 *)(unaff_x22 + 0x218) = param_5;
  *(undefined8 *)(unaff_x22 + 0x210) = param_4;
  *(undefined8 *)(unaff_x22 + 0x208) = param_3;
  *(undefined8 *)(unaff_x22 + 0x200) = param_2;
  _swift_task_switch(FUN_100a25be8,0,0);
  return;
}



/* Address: 0x100a25be8 | FUN_100a25be8 */

void FUN_100a25be8(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x228);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x218);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x210);
  plVar1 = (long *)0x140;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar1;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar3,uVar4,0x100cc971c,&TargetProtocolRequirement_100cc972c)
  ;
  FUN_1005e3ae8(0,uVar2,PTR___type_metadata_for_Swift_Never_100eadc38);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a25cc0;
  FUN_1005e2468();
  return;
}



/* Address: 0x100a25cc0 | FUN_100a25cc0 */

void FUN_100a25cc0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x238) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x230));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002e1208;
  }
  else {
    pcVar1 = FUN_100a25d24;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a25d24 | FUN_100a25d24 */

void FUN_100a25d24(void)

{
  undefined *puVar1;
  long lVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  String SVar8;
  String SVar9;
  
  lVar7 = *(long *)(unaff_x22 + 0x218);
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x1b8);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x180);
  lVar2 = *(long *)(unaff_x22 + 0x188);
  FUN_100004640(unaff_x22 + 0x168,uVar6);
  (**(code **)(lVar2 + 0x70))(uVar6,lVar2);
  FUN_100004594(unaff_x22 + 0x168);
  if (((uint)uVar6 & 0xff) < 6) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x238);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 400);
    puVar1 = *(undefined **)(unaff_x22 + 0x1a8);
    lVar2 = *(long *)(unaff_x22 + 0x1b0);
    _Var3.unknown = puVar1;
    FUN_100004640(unaff_x22 + 400);
    Swift::_StringGuts::grow(0x1c,_Var3);
    SVar8.bridgeObject = (void *)0x8000000100db8120;
    SVar8.str = (char *)0xd00000000000001a;
    SVar9.bridgeObject = pvVar5;
    SVar9.str = pcVar4;
    Swift::String::append(SVar8,SVar9);
    _swift_getErrorValue(uVar6,unaff_x22 + 0x1f8,unaff_x22 + 0x1d0);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x1d0),*(undefined8 *)(unaff_x22 + 0x1d8));
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0x0);
    *(undefined1 *)(unaff_x22 + 0xa8) = 5;
    *(undefined1 *)(unaff_x22 + 0x48) = 5;
    *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x1f0);
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x60) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0x98) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0x7f;
    *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x1e8);
    *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x1f0);
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0xf8) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x7f;
    FUN_1005bf638(unaff_x22 + 0x48,unaff_x22 + 0x108);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xa8));
    (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x48,puVar1,lVar2);
    _swift_errorRelease(uVar6);
    FUN_1004eaa3c(unaff_x22 + 0x48);
    FUN_100004594(unaff_x22 + 400);
  }
  else {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x238));
  }
                    /* WARNING: Could not recover jumptable at 0x000100a25f2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a25f30 | FUN_100a25f30 */

void FUN_100a25f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  Optional OVar1;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar4 = *(long *)(param_6 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar2 = lVar4 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,0x100cc971c,&TargetProtocolRequirement_100cc972c);
  *(long *)(unaff_x22 + 0x90) = lVar4;
  lVar5 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar5;
  lVar5 = *(long *)(lVar5 + 0x40);
  *(long *)(unaff_x22 + 0xa0) = lVar5;
  uVar2 = lVar5 + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  lVar5 = 0;
  FUN_1005e8e8c(0,lVar4);
  *(long *)(unaff_x22 + 0xc0) = lVar5;
  lVar4 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 200) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  _swift_task_switch(FUN_100a26044,0,0);
  return;
}



/* Address: 0x100a26044 | FUN_100a26044 */

void FUN_100a26044(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_1005e835c(0,*(undefined8 *)(unaff_x22 + 0x90));
  FUN_1005e81d0(uVar2);
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a260bc;
  FUN_1005e7af0(plVar1,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Address: 0x100a260bc | FUN_100a260bc */

void FUN_100a260bc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xd8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a26120;
  }
  else {
    *(long *)(lVar2 + 0xe8) = unaff_x20;
    pcVar1 = FUN_100a265c0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a26120 | FUN_100a26120 */

void FUN_100a26120(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  __uint8 _Var5;
  undefined8 uVar6;
  undefined *puVar7;
  ulong uVar8;
  TaskPriority TVar9;
  ulong uVar10;
  TaskPriority TVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  long *plVar14;
  code *pcVar15;
  long lVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar25 = *(long *)(unaff_x22 + 0x98);
  uVar6 = uVar19;
  (**(code **)(lVar25 + 0x30))(uVar19,1,uVar21);
  if ((int)uVar6 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x88);
    (**(code **)(*(long *)(unaff_x22 + 200) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x000100a261d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar18 = *(long *)(unaff_x22 + 0xa0);
  lVar24 = *(long *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar26 = *(long *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  TVar11.unknown = *(undefined **)(unaff_x22 + 0x60);
  pcVar15 = *(code **)(lVar25 + 0x20);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x68);
  (*pcVar15)(uVar23,uVar19,uVar21);
  puVar7 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  uVar10 = *(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xf;
  uVar8 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  TVar9 = Swift::TaskPriority::typeMetadataAccessor();
  lVar16 = *(long *)(TVar9.unknown + -8);
  (**(code **)(lVar16 + 0x38))(uVar8,1,1,TVar9.unknown);
  (**(code **)(lVar26 + 0x10))(uVar2,uVar1,uVar28);
  (**(code **)(lVar25 + 0x10))(uVar6,uVar23,uVar21);
  bVar3 = *(byte *)(lVar26 + 0x50);
  uVar20 = (ulong)bVar3 + 0x30 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  bVar4 = *(byte *)(lVar25 + 0x50);
  uVar22 = lVar24 + (ulong)bVar4 + uVar20 & ((ulong)bVar4 ^ 0xffffffffffffffff);
  uVar27 = lVar18 + uVar22 + 7 & 0xfffffffffffffff8;
  puVar7 = &DAT_100f29098;
  _swift_allocObject(&DAT_100f29098,uVar27 + 8,bVar3 | bVar4 | 7);
  *(long *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  *(undefined8 *)(puVar7 + 0x28) = uVar29;
  *(undefined8 *)(puVar7 + 0x20) = uVar28;
  (**(code **)(lVar26 + 0x20))(puVar7 + uVar20,uVar2,uVar28);
  (*pcVar15)(puVar7 + uVar22,uVar6,uVar21);
  *(undefined **)(puVar7 + uVar27) = TVar11.unknown;
  uVar10 = uVar10 & 0xfffffffffffffff0;
  _swift_task_alloc();
  FUN_1000f8cac(uVar8,uVar10,&DAT_100ff3d28,&DAT_100c8e750);
  uVar20 = uVar10;
  (**(code **)(lVar16 + 0x30))(uVar10,1,TVar9.unknown);
  _swift_retain();
  if ((int)uVar20 == 1) {
    FUN_1000fb4c4(uVar10,&DAT_100ff3d28,&DAT_100c8e750);
    uVar20 = 0x7100;
  }
  else {
    _Var5 = Swift::TaskPriority::get_rawValue(TVar11);
    (**(code **)(lVar16 + 8))(uVar10,TVar9.unknown);
    uVar20 = (ulong)_Var5 | 0x7100;
  }
  _swift_task_dealloc(uVar10);
  lVar25 = *(long *)(puVar7 + 0x10);
  if (lVar25 == 0) {
    UVar12.unknown = (undefined *)0x0;
    lVar24 = 0;
  }
  else {
    lVar24 = *(long *)(puVar7 + 0x18);
    _swift_getObjectType(lVar25);
    _swift_unknownObjectRetain(lVar25);
    UVar12 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar25);
  }
  uVar21 = **(undefined8 **)(unaff_x22 + 0x50);
  puVar13 = &DAT_100f290c0;
  _swift_allocObject(&DAT_100f290c0,0x20,7);
  *(undefined **)(puVar13 + 0x10) = &DAT_100c8e7a8;
  *(undefined **)(puVar13 + 0x18) = puVar7;
  _swift_retain(puVar7);
  if (lVar24 == 0 && UVar12.unknown == (undefined *)0x0) {
    puVar17 = (undefined8 *)0x0;
  }
  else {
    puVar17 = (undefined8 *)(unaff_x22 + 0x10);
    *puVar17 = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0;
    *(undefined **)(unaff_x22 + 0x20) = UVar12.unknown;
    *(long *)(unaff_x22 + 0x28) = lVar24;
  }
  uVar19 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  lVar25 = *(long *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x30) = 1;
  *(undefined8 **)(unaff_x22 + 0x38) = puVar17;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar21;
  _swift_task_create(uVar20,(undefined8 *)(unaff_x22 + 0x30),
                     PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8e7b8,puVar13);
  _swift_release(puVar7);
  _swift_release(uVar20);
  FUN_1000fb4c4(uVar8,&DAT_100ff3d28,&DAT_100c8e750);
  (**(code **)(lVar25 + 8))(uVar19,uVar6);
  _swift_task_dealloc(uVar8);
  plVar14 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_100a2655c;
  FUN_1005e7af0(plVar14,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xc0));
  return;
}



/* Address: 0x100a2655c | FUN_100a2655c */

void FUN_100a2655c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xe0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a26120;
  }
  else {
    *(long *)(lVar2 + 0xe8) = unaff_x20;
    pcVar1 = FUN_100a265c0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a265c0 | FUN_100a265c0 */

void FUN_100a265c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  (**(code **)(*(long *)(unaff_x22 + 200) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a26644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a26648 | FUN_100a26648 */

void FUN_100a26648(void)

{
  int iVar1;
  long *plVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long in_x6;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(in_x6 + 0x20);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a266d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(in_x3,in_x4,in_x5,in_x6);
  return;
}



/* Address: 0x100a266dc | FUN_100a266dc */

void FUN_100a266dc(undefined8 param_1)

{
  undefined *puVar1;
  TaskPriority TVar2;
  long extraout_x8;
  
  puVar1 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  puVar1 = &DAT_100f29020;
  _swift_allocObject(&DAT_100f29020,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  _swift_retain(param_1);
  FUN_100a26a84(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c8e760,puVar1);
  _swift_release();
  return;
}



/* Address: 0x100a267ac | FUN_100a267ac */

void FUN_100a267ac(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = in_x3;
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a26800;
  FUN_100a26d20();
  return;
}



/* Address: 0x100a26800 | FUN_100a26800 */

void FUN_100a26800(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x1d8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1d0));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a2686c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a26868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100a2686c | FUN_100a2686c */

void FUN_100a2686c(void)

{
  undefined *puVar1;
  long lVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  undefined8 uVar6;
  long unaff_x22;
  long lVar7;
  String SVar8;
  String SVar9;
  
  lVar7 = *(long *)((long)*(long **)(unaff_x22 + 0x1c8) +
                   *(long *)(**(long **)(unaff_x22 + 0x1c8) + 0x70));
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x180);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar2 = *(long *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar6);
  (**(code **)(lVar2 + 0x70))(uVar6,lVar2);
  FUN_100004594(unaff_x22 + 0x130);
  if (((uint)uVar6 & 0xff) < 6) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1d8);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x158);
    puVar1 = *(undefined **)(unaff_x22 + 0x170);
    lVar2 = *(long *)(unaff_x22 + 0x178);
    _Var3.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x158);
    Swift::_StringGuts::grow(0x19,_Var3);
    SVar8.bridgeObject = (void *)0x8000000100db8100;
    SVar8.str = (char *)0xd000000000000017;
    SVar9.bridgeObject = pvVar5;
    SVar9.str = pcVar4;
    Swift::String::append(SVar8,SVar9);
    _swift_getErrorValue(uVar6,unaff_x22 + 0x1c0,unaff_x22 + 0x198);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x1a0));
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0x0);
    *(undefined1 *)(unaff_x22 + 0x70) = 5;
    *(undefined1 *)(unaff_x22 + 0x10) = 5;
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x87;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1b0);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1b8);
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x29286e7572;
    *(undefined1 **)(unaff_x22 + 0xc0) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 200) = 0x87;
    FUN_1005bf638(unaff_x22 + 0x10,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x10,puVar1,lVar2);
    _swift_errorRelease(uVar6);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x158);
  }
  else {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
  }
                    /* WARNING: Could not recover jumptable at 0x000100a26a80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a26a84 | FUN_100a26a84 */

void FUN_100a26a84(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_1000f8cac(param_3,puVar9,&DAT_100ff3d28,&DAT_100c8e750);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(puVar9,&DAT_100ff3d28,&DAT_100c8e750);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_1000fb4c4(param_3,&DAT_100ff3d28,&DAT_100c8e750);
    puVar2 = &DAT_100f29048;
    _swift_allocObject(&DAT_100f29048,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8e770,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100f29070;
    _swift_allocObject(&DAT_100f29070,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c8e778,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_1000fb4c4(param_3,&DAT_100ff3d28,&DAT_100c8e750);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x100a26d20 | FUN_100a26d20 */

void FUN_100a26d20(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0xf8) = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(*unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x100) = uVar1;
  uVar3 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar2,uVar1,0x100cc971c,&TargetProtocolRequirement_100cc972c)
  ;
  lVar4 = 0;
  FUN_1005e3ae8(0,uVar3,PTR___type_metadata_for_Swift_Never_100eadc38);
  *(long *)(unaff_x22 + 0x108) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x110) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar5;
  lVar4 = 0;
  FUN_100a248b8(0,uVar1,uVar2);
  *(long *)(unaff_x22 + 0x120) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar4;
  uVar5 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar6;
  uVar6 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar6;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar5;
  _swift_task_switch(FUN_100a26e10);
  return;
}



/* Address: 0x100a26e10 | FUN_100a26e10 */

void FUN_100a26e10(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  FUN_100a24680(uVar8);
  _swift_getEnumCaseMultiPayload(uVar8,uVar11);
  iVar3 = (int)uVar8;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      puVar1 = *(undefined8 **)(unaff_x22 + 0x138);
      lVar9 = *(long *)(unaff_x22 + 0x140);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
      lVar10 = *(long *)(unaff_x22 + 0x128);
      lVar5 = *(long *)(unaff_x22 + 0x110);
      puVar2 = *(undefined8 **)(unaff_x22 + 0x118);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
      uVar11 = 0xff;
      FUN_100974b84(0xff);
      lVar6 = 0;
      _swift_getTupleTypeMetadata2(0,uVar12,uVar11,"asyncChannel quiescingHelper ",0);
      *(long *)(unaff_x22 + 0x148) = lVar6;
      *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(lVar9 + *(int *)(lVar6 + 0x30));
      (**(code **)(lVar5 + 0x20))(puVar2,lVar9,uVar12);
      uVar11 = *puVar2;
      lVar5 = puVar2[1];
      uVar12 = uVar11;
      _swift_getObjectType();
      *(undefined8 *)(unaff_x22 + 0xf0) = uVar11;
      (**(code **)(*(long *)(lVar5 + 8) + 0x50))();
      FUN_100a2aee0();
      *(undefined8 *)(unaff_x22 + 0x158) = uVar12;
      *puVar1 = uVar12;
      _swift_storeEnumTagMultiPayload(puVar1,uVar8,2);
      _swift_retain(uVar12);
      FUN_100a2af68(puVar1);
      pcVar7 = *(code **)(lVar10 + 8);
      *(code **)(unaff_x22 + 0x160) = pcVar7;
      (*pcVar7)(puVar1,uVar8);
      _swift_retain(uVar12);
      FUN_100973694();
      _swift_release(uVar12);
      _swift_retain(uVar12);
      pcVar7 = FUN_100a270b4;
      goto LAB_100a2708c;
    }
    lVar10 = *(long *)(unaff_x22 + 0x140);
    lVar9 = *(long *)(unaff_x22 + 0x100);
    uVar8 = 0xff;
    FUN_100a2d4c0(0xff);
    puVar4 = &DAT_100ff5038;
    FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
    lVar5 = 0;
    _swift_getTupleTypeMetadata3
              (0,lVar9,uVar8,puVar4,"childChannelSetup configuration onServerRunning ",0);
    iVar3 = *(int *)(lVar5 + 0x30);
    puVar1 = (undefined8 *)(lVar10 + *(int *)(lVar5 + 0x40));
    FUN_100004550(*puVar1,puVar1[1]);
    FUN_100a2afe0(lVar10 + iVar3);
    (**(code **)(*(long *)(lVar9 + -8) + 8))(lVar10,lVar9);
  }
  else {
    if (iVar3 == 2) {
      *(undefined8 *)(unaff_x22 + 0x170) = **(undefined8 **)(unaff_x22 + 0x140);
      _swift_retain();
      pcVar7 = FUN_100a27730;
LAB_100a2708c:
      _swift_task_switch(pcVar7,0,0);
      return;
    }
    if (iVar3 != 3) goto LAB_100a26f28;
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar5 = *(long *)(unaff_x22 + 0x128);
  _swift_storeEnumTagMultiPayload(uVar11,uVar8,4);
  FUN_100a2af68(uVar11);
  (**(code **)(lVar5 + 8))(uVar11,uVar8);
LAB_100a26f28:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000100a26f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a270b4 | FUN_100a270b4 */

void FUN_100a270b4(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  code *pcVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x158);
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_100a27318;
  lVar2 = unaff_x22 + 0x50;
  _swift_continuation_init(lVar2,1);
  puVar3 = &DAT_100f28b68;
  _swift_allocObject(&DAT_100f28b68,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  puVar4 = &DAT_100f28b90;
  _swift_allocObject(&DAT_100f28b90,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_100a157c0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = lVar11;
  uVar5 = *(ulong *)(lVar11 + 0x20);
  lVar10 = *(long *)(lVar11 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar10 + 0x10);
  _swift_retain_n(lVar11,2);
  _swift_retain_n(puVar3,2);
  uVar6 = uVar5;
  (*pcVar13)(uVar5,lVar10);
  if ((uVar6 & 1) == 0) {
    puVar12 = *(undefined **)(unaff_x22 + 0x158);
    puVar9 = &DAT_100f28bb8;
    _swift_allocObject(&DAT_100f28bb8,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar12;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar4;
    pcVar13 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar12);
    _swift_retain(puVar4);
    (*pcVar13)(thunk_FUN_1008c1400,puVar9,uVar5,lVar10);
    _swift_release(puVar4);
    puVar4 = puVar3;
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x158);
    _swift_beginAccess(lVar10 + 0x10,unaff_x22 + 0xc0,0,0);
    uVar8 = *(undefined8 *)(lVar10 + 0x10);
    cVar1 = *(char *)(lVar10 + 0x18);
    if (cVar1 == '\x01') {
      puVar9 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar7 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar7 = uVar8;
      FUN_1005dfeb4(uVar8,1);
      _swift_continuation_throwingResumeWithError(lVar2,puVar9);
    }
    else if (cVar1 == -1) {
      _swift_beginAccess(*(long *)(unaff_x22 + 0x158) + 0x30,unaff_x22 + 0xd8,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar4);
      _swift_endAccess(unaff_x22 + 0xd8);
    }
    else {
      _swift_continuation_throwingResume(lVar2);
      FUN_100308538(uVar8,cVar1);
    }
    puVar9 = *(undefined **)(unaff_x22 + 0x158);
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_bridgeObjectRelease(0);
    puVar12 = puVar3;
  }
  _swift_release(puVar4);
  _swift_release(puVar3);
  _swift_release(puVar12);
  _swift_release(puVar9);
  _swift_continuation_await(unaff_x22 + 0x50);
  return;
}



/* Address: 0x100a27318 | FUN_100a27318 */

void FUN_100a27318(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x70);
  *(long *)(*unaff_x22 + 0x168) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_100a27384;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a2765c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a27384 | FUN_100a27384 */

void FUN_100a27384(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
  _swift_task_switch(FUN_100a273cc,uVar1,0);
  return;
}



/* Address: 0x100a273cc | FUN_100a273cc */

void FUN_100a273cc(undefined8 param_1,undefined8 param_2,char *param_3,undefined *param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  _StringGuts _Var10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  code *pcVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  _Var10.unknown = *(undefined **)(unaff_x22 + 0x120);
  FUN_100a24680(uVar8);
  _swift_getEnumCaseMultiPayload();
  iVar4 = (int)uVar8;
  if (iVar4 < 3) {
    if (iVar4 == 0) {
      lVar15 = *(long *)(unaff_x22 + 0x130);
      puVar11 = (undefined8 *)(unaff_x22 + 0x100);
      lVar9 = *(long *)(unaff_x22 + 0x100);
      param_3 = (char *)0xff;
      FUN_100a2d4c0();
      param_4 = &DAT_100ff5038;
      FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3
                (0,lVar9,param_3,param_4,"childChannelSetup configuration onServerRunning ",0);
      iVar4 = *(int *)(lVar5 + 0x30);
      puVar1 = (undefined8 *)(lVar15 + *(int *)(lVar5 + 0x40));
      FUN_100004550(*puVar1,puVar1[1]);
      FUN_100a2afe0(lVar15 + iVar4);
      plVar7 = (long *)(lVar9 + -8);
    }
    else {
      if (iVar4 != 1) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x158);
        pcVar16 = *(code **)(unaff_x22 + 0x160);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
        lVar5 = *(long *)(unaff_x22 + 0x110);
        (*pcVar16)(*(undefined8 *)(unaff_x22 + 0x130),uVar3);
        _swift_storeEnumTagMultiPayload(uVar2,uVar3,4);
        FUN_100a2af68(uVar2);
        (*pcVar16)(uVar2,uVar3);
        _swift_release(uVar8);
        _swift_release(uVar13);
        (**(code **)(lVar5 + 8))(uVar12,uVar14);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
        _swift_task_dealloc(uVar8);
        _swift_task_dealloc(uVar12);
        _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x000100a27658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_release(*(undefined8 *)
                      (*(long *)(unaff_x22 + 0x130) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0x148) + 0x30)));
      plVar7 = (long *)(unaff_x22 + 0x110);
      puVar11 = (undefined8 *)(unaff_x22 + 0x108);
    }
    _Var10.unknown = (undefined *)*puVar11;
    (**(code **)(*plVar7 + 8))(*(undefined8 *)(unaff_x22 + 0x130));
  }
  pcVar16 = *(code **)(unaff_x22 + 0x160);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  Swift::_StringGuts::grow(0x13,_Var10);
  SVar17.bridgeObject = (void *)0x8000000100db80e0;
  SVar17.str = (char *)0xd000000000000011;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar17,SVar19);
  FUN_100a24680(uVar8);
  pTVar6 = &TargetProtocolConformanceDescriptor_100c8e700;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e700,uVar12);
  Swift::DefaultStringInterpolation::_appendInterpolation(uVar8,uVar12,pTVar6);
  (*pcVar16)(uVar8,uVar12);
  SVar18.bridgeObject = (void *)0x2;
  SVar18.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar18,(StaticString)0x0,0xe000000000000000,0xdb80a0);
  return;
}



/* Address: 0x100a2765c | FUN_100a2765c */

void FUN_100a2765c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
  _swift_task_switch(FUN_100a276a4,uVar1,0);
  return;
}



/* Address: 0x100a276a4 | FUN_100a276a4 */

void FUN_100a276a4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar2 = *(long *)(unaff_x22 + 0x110);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x158));
  _swift_release(uVar1);
  (**(code **)(lVar2 + 8))(uVar4,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a2772c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a27730 | FUN_100a27730 */

void FUN_100a27730(void)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  code *pcVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x170);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100a27994;
  lVar2 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar2,1);
  puVar3 = &DAT_100f28af0;
  _swift_allocObject(&DAT_100f28af0,0x18,7);
  *(long *)(puVar3 + 0x10) = lVar2;
  puVar4 = &DAT_100f28b18;
  _swift_allocObject(&DAT_100f28b18,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_100a157c0;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = lVar11;
  uVar5 = *(ulong *)(lVar11 + 0x20);
  lVar10 = *(long *)(lVar11 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar10 + 0x10);
  _swift_retain_n(lVar11,2);
  _swift_retain_n(puVar3,2);
  uVar6 = uVar5;
  (*pcVar13)(uVar5,lVar10);
  if ((uVar6 & 1) == 0) {
    puVar12 = *(undefined **)(unaff_x22 + 0x170);
    puVar9 = &DAT_100f28b40;
    _swift_allocObject(&DAT_100f28b40,0x28,7);
    *(undefined **)(puVar9 + 0x10) = puVar12;
    *(code **)(puVar9 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar4;
    pcVar13 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar12);
    _swift_retain(puVar4);
    (*pcVar13)(FUN_1008c1400,puVar9,uVar5,lVar10);
    _swift_release(puVar4);
    puVar4 = puVar3;
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x170);
    _swift_beginAccess(lVar10 + 0x10,unaff_x22 + 0x90,0,0);
    uVar8 = *(undefined8 *)(lVar10 + 0x10);
    cVar1 = *(char *)(lVar10 + 0x18);
    if (cVar1 == '\x01') {
      puVar9 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar7 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar7 = uVar8;
      FUN_1005dfeb4(uVar8,1);
      _swift_continuation_throwingResumeWithError(lVar2,puVar9);
    }
    else if (cVar1 == -1) {
      _swift_beginAccess(*(long *)(unaff_x22 + 0x170) + 0x30,unaff_x22 + 0xa8,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar4);
      _swift_endAccess(unaff_x22 + 0xa8);
    }
    else {
      _swift_continuation_throwingResume(lVar2);
      FUN_100308538(uVar8,cVar1);
    }
    puVar9 = *(undefined **)(unaff_x22 + 0x170);
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_bridgeObjectRelease(0);
    puVar12 = puVar3;
  }
  _swift_release(puVar4);
  _swift_release(puVar3);
  _swift_release(puVar12);
  _swift_release(puVar9);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a27994 | FUN_100a27994 */

void FUN_100a27994(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x178) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_100a27a00;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a27ab4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a27a00 | FUN_100a27a00 */

void FUN_100a27a00(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  _swift_task_switch(FUN_100a27a48,uVar1,0);
  return;
}



/* Address: 0x100a27a48 | FUN_100a27a48 */

void FUN_100a27a48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a27ab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a27ab4 | FUN_100a27ab4 */

void FUN_100a27ab4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  _swift_task_switch(FUN_100a27afc,uVar1,0);
  return;
}



/* Address: 0x100a27afc | FUN_100a27afc */

void FUN_100a27afc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x170));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x140));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100a27b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a27b68 | FUN_100a27b68 */

void FUN_100a27b68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x6f0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x6e8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x6e0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x6d8) = param_1;
  lVar7 = *unaff_x20;
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x6f8) = CONCAT71(extraout_var,NVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  *(long *)(unaff_x22 + 0x700) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x708) = uVar2;
  lVar8 = *(long *)(lVar7 + 0x50);
  *(long *)(unaff_x22 + 0x710) = lVar8;
  lVar6 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x718) = lVar6;
  lVar6 = *(long *)(lVar6 + 0x40);
  *(long *)(unaff_x22 + 0x720) = lVar6;
  uVar2 = lVar6 + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x728) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x730) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x738) = uVar2;
  uVar5 = *(undefined8 *)(lVar7 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x740) = uVar5;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar5,lVar8,0x100cc971c,&TargetProtocolRequirement_100cc972c)
  ;
  *(undefined8 *)(unaff_x22 + 0x748) = uVar4;
  lVar6 = 0;
  FUN_1005e3ae8(0,uVar4,PTR___type_metadata_for_Swift_Never_100eadc38);
  *(long *)(unaff_x22 + 0x750) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x758) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x760) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x768) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x770) = uVar2;
  lVar6 = 0;
  FUN_100a0de2c();
  *(long *)(unaff_x22 + 0x778) = lVar6;
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x780) = uVar2;
  lVar6 = 0;
  FUN_100a0e718();
  uVar2 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x788) = uVar2;
  lVar6 = 0;
  FUN_100a2d4c0();
  *(long *)(unaff_x22 + 0x790) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x798) = lVar6;
  lVar6 = *(long *)(lVar6 + 0x40);
  *(long *)(unaff_x22 + 0x7a0) = lVar6;
  uVar2 = lVar6 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x7a8) = uVar2;
  _swift_task_switch(FUN_100a27d0c,0,0);
  return;
}



/* Address: 0x100a27d0c | FUN_100a27d0c */

void FUN_100a27d0c(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  int *piVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  code *pcVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined **ppuVar18;
  long lVar19;
  ulong uVar20;
  long *plVar21;
  undefined8 uVar22;
  
  lVar2 = *(long *)(unaff_x22 + 0x6e8);
  FUN_100a29658();
  if (lVar2 == 0) {
    if (*(long *)(*(long *)(unaff_x22 + 0x6e8) + (long)*(int *)(*(long *)(unaff_x22 + 0x790) + 0x24)
                 ) != 0) {
      lVar12 = *(long *)((long)*(long **)(unaff_x22 + 0x6f0) +
                        *(long *)(**(long **)(unaff_x22 + 0x6f0) + 0x70));
      _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x690,0,0);
      FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x5a8);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x5c0);
      lVar2 = *(long *)(unaff_x22 + 0x5c8);
      FUN_100004640(unaff_x22 + 0x5a8,uVar3);
      (**(code **)(lVar2 + 0x70))(uVar3,lVar2);
      FUN_100004594(unaff_x22 + 0x5a8);
      if (((uint)uVar3 & 0xff) < 5) {
        FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x5f8);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x610);
        lVar2 = *(long *)(unaff_x22 + 0x618);
        FUN_100004640(unaff_x22 + 0x5f8,uVar3);
        *(undefined1 *)(unaff_x22 + 0x10) = 4;
        *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000008e;
        *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100db8200;
        *(undefined8 *)(unaff_x22 + 0x30) = 0;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001c;
        *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100db8080;
        *(undefined8 *)(unaff_x22 + 0x58) = 0xd00000000000002c;
        *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100db8140;
        *(undefined8 *)(unaff_x22 + 0x68) = 0xd0;
        *(undefined1 *)(unaff_x22 + 0x3d0) = 4;
        *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd00000000000008e;
        *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100db8200;
        *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
        *(undefined8 *)(unaff_x22 + 1000) = 0;
        *(undefined8 *)(unaff_x22 + 0x400) = 0;
        *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001c;
        *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100db8080;
        *(undefined8 *)(unaff_x22 + 0x418) = 0xd00000000000002c;
        *(undefined8 *)(unaff_x22 + 0x420) = 0x8000000100db8140;
        *(undefined8 *)(unaff_x22 + 0x428) = 0xd0;
        FUN_1005bf638(unaff_x22 + 0x10,unaff_x22 + 0x70);
        FUN_1004eaa3c(unaff_x22 + 0x3d0);
        (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x10,uVar3,lVar2);
        FUN_1004eaa3c(unaff_x22 + 0x10);
        FUN_100004594(unaff_x22 + 0x5f8);
      }
    }
    lVar2 = *(long *)(unaff_x22 + 0x6e8);
    FUN_100a294c4();
    uVar3 = 0;
    FUN_1008fa0ac();
    ppuVar18 = &PTR_PTR_100f28be0;
  }
  else {
    uVar3 = 0;
    FUN_1009a140c();
    ppuVar18 = &PTR_PTR_100f28c00;
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x7a8);
  lVar12 = *(long *)(unaff_x22 + 0x7a0);
  lVar19 = *(long *)(unaff_x22 + 0x798);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x778);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x740);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x710);
  plVar21 = *(long **)(unaff_x22 + 0x6f0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x6e8);
  *(undefined8 *)(unaff_x22 + 0x5e8) = uVar3;
  *(undefined ***)(unaff_x22 + 0x5f0) = ppuVar18;
  *(long *)(unaff_x22 + 0x5d0) = lVar2;
  uVar10 = *(undefined8 *)((long)plVar21 + *(long *)(*plVar21 + 0x78));
  FUN_100974b84(0);
  _swift_allocObject();
  _swift_unknownObjectRetain();
  FUN_1009733c4();
  *(undefined8 *)(unaff_x22 + 0x7b0) = uVar10;
  FUN_100004640(unaff_x22 + 0x5d0,uVar3);
  FUN_1000c495c(uVar17,uVar22,FUN_100a2d4c0);
  uVar9 = (ulong)*(byte *)(lVar19 + 0x50);
  uVar20 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  uVar15 = lVar12 + uVar20 + 7 & 0xfffffffffffffff8;
  puVar4 = &DAT_100f290e8;
  _swift_allocObject(&DAT_100f290e8,uVar15 + 8,uVar9 | 7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x18) = uVar14;
  *(long **)(puVar4 + 0x20) = plVar21;
  FUN_1000523d8(uVar22,puVar4 + uVar20,FUN_100a2d4c0);
  *(undefined8 *)(puVar4 + uVar15) = uVar10;
  pcVar16 = (code *)ppuVar18[1];
  *(undefined8 *)(unaff_x22 + 0x598) = uVar3;
  *(undefined ***)(unaff_x22 + 0x5a0) = ppuVar18;
  lVar2 = unaff_x22 + 0x580;
  FUN_10000cbb0(lVar2);
  _swift_retain(plVar21);
  _swift_retain(uVar10);
  (*pcVar16)(lVar2,FUN_100a2d0f8,puVar4,uVar3,ppuVar18);
  _swift_release(puVar4);
  FUN_100004594(unaff_x22 + 0x5d0);
  FUN_100076508(unaff_x22 + 0x580,unaff_x22 + 0x5d0);
  FUN_1000c495c(uVar17,uVar13,FUN_100a0e718);
  FUN_1000523d8(uVar13,uVar6,FUN_100a0de2c);
  _swift_getEnumCaseMultiPayload(uVar6,uVar7);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x780);
  if ((int)uVar6 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x738);
    lVar12 = *(long *)(unaff_x22 + 0x720);
    lVar2 = *(long *)(unaff_x22 + 0x718);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x6f0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x6e0);
    uVar10 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x7b8) = uVar10;
    uVar6 = puVar5[1];
    *(undefined8 *)(unaff_x22 + 0x7c0) = uVar6;
    uVar7 = puVar5[2];
    *(undefined8 *)(unaff_x22 + 0x7c8) = uVar7;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x5e8);
    lVar19 = *(long *)(unaff_x22 + 0x5f0);
    FUN_100004640(unaff_x22 + 0x5d0,uVar8);
    (**(code **)(lVar2 + 0x10))(uVar13,uVar22,uVar14);
    uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
    uVar20 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    uVar15 = lVar12 + uVar20 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f29160;
    _swift_allocObject(&DAT_100f29160,uVar15 + 8,uVar9 | 7);
    *(undefined **)(unaff_x22 + 2000) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar14;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    (**(code **)(lVar2 + 0x20))(puVar4 + uVar20,uVar13,uVar14);
    *(undefined8 *)(puVar4 + uVar15) = uVar17;
    piVar11 = *(int **)(lVar19 + 0x10);
    iVar1 = *piVar11;
    plVar21 = (long *)(ulong)(uint)piVar11[1];
    _swift_retain(uVar17);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x7d8) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a28494;
    (*(code *)((long)iVar1 + (long)piVar11))
              (*(undefined8 *)(unaff_x22 + 0x770),uVar10,uVar6,uVar7,0,0,2,thunk_FUN_100a2d1c8,
               puVar4,*(undefined8 *)(unaff_x22 + 0x748),uVar8,lVar19);
    return;
  }
  if ((int)uVar6 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x730);
    lVar12 = *(long *)(unaff_x22 + 0x720);
    lVar2 = *(long *)(unaff_x22 + 0x718);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x6f0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x6e0);
    uVar10 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x7e8) = uVar10;
    uVar6 = puVar5[1];
    *(undefined8 *)(unaff_x22 + 0x7f0) = uVar6;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x5e8);
    lVar19 = *(long *)(unaff_x22 + 0x5f0);
    FUN_100004640(unaff_x22 + 0x5d0,uVar7);
    (**(code **)(lVar2 + 0x10))(uVar8,uVar17,uVar13);
    uVar9 = (ulong)*(byte *)(lVar2 + 0x50);
    uVar15 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    uVar20 = lVar12 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f29138;
    _swift_allocObject(&DAT_100f29138,uVar20 + 8,uVar9 | 7);
    *(undefined **)(unaff_x22 + 0x7f8) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar13;
    *(undefined8 *)(puVar4 + 0x18) = uVar3;
    (**(code **)(lVar2 + 0x20))(puVar4 + uVar15,uVar8,uVar13);
    *(undefined8 *)(puVar4 + uVar20) = uVar14;
    piVar11 = *(int **)(lVar19 + 0x18);
    iVar1 = *piVar11;
    plVar21 = (long *)(ulong)(uint)piVar11[1];
    _swift_retain(uVar14);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x800) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a28878;
    (*(code *)((long)iVar1 + (long)piVar11))
              (*(undefined8 *)(unaff_x22 + 0x768),uVar10,uVar6,1,0,0,2,thunk_FUN_100a2d1c8,puVar4,
               *(undefined8 *)(unaff_x22 + 0x748),uVar7,lVar19);
    return;
  }
  (**(code **)(*(long *)(unaff_x22 + 0x700) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x708),puVar5,*(undefined8 *)(unaff_x22 + 0x6f8));
  FUN_100076688(unaff_x22 + 0x5d0,unaff_x22 + 0x530);
  puVar4 = &DAT_100ff5238;
  FUN_1000f7830(&DAT_100ff5238,&DAT_100c8e7c0);
  uVar3 = 0;
  FUN_1009a140c(0);
  lVar2 = unaff_x22 + 0x6c8;
  _swift_dynamicCast(lVar2,unaff_x22 + 0x530,puVar4,uVar3,6);
  if ((int)lVar2 != 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x740);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x728);
    lVar2 = *(long *)(unaff_x22 + 0x720);
    lVar12 = *(long *)(unaff_x22 + 0x718);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x710);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x6f0);
    *(undefined8 *)(unaff_x22 + 0x810) = *(undefined8 *)(unaff_x22 + 0x6c8);
    (**(code **)(lVar12 + 0x10))(uVar3,*(undefined8 *)(unaff_x22 + 0x6e0),uVar10);
    uVar9 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar15 = uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff);
    uVar20 = lVar2 + uVar15 + 7 & 0xfffffffffffffff8;
    puVar4 = &DAT_100f29110;
    _swift_allocObject(&DAT_100f29110,uVar20 + 8,uVar9 | 7);
    *(undefined **)(unaff_x22 + 0x818) = puVar4;
    *(undefined8 *)(puVar4 + 0x10) = uVar10;
    *(undefined8 *)(puVar4 + 0x18) = uVar7;
    (**(code **)(lVar12 + 0x20))(puVar4 + uVar15,uVar3,uVar10);
    *(undefined8 *)(puVar4 + uVar20) = uVar6;
    plVar21 = (long *)0x70;
    _swift_retain(uVar6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x820) = plVar21;
    *plVar21 = unaff_x22;
    plVar21[1] = (long)FUN_100a28bc8;
    FUN_10099e630(plVar21,*(undefined8 *)(unaff_x22 + 0x760),*(undefined8 *)(unaff_x22 + 0x708),0,0,
                  2,thunk_FUN_100a2d1c8,puVar4,*(undefined8 *)(unaff_x22 + 0x748));
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x100a28494);
  (*pcVar16)();
}



/* Address: 0x100a28494 | FUN_100a28494 */

void FUN_100a28494(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x7e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x7d8));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 2000));
    pcVar1 = FUN_100a28510;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x7c0);
    _swift_release(*(undefined8 *)(lVar2 + 2000));
    _swift_bridgeObjectRelease(uVar3);
    pcVar1 = FUN_100a28ee0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a28510 | FUN_100a28510 */

void FUN_100a28510(void)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  void *pvVar18;
  undefined8 uVar19;
  char *pcVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong *puVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  
  lVar16 = *(long *)((long)*(long **)(unaff_x22 + 0x6f0) +
                    *(long *)(**(long **)(unaff_x22 + 0x6f0) + 0x70));
  pcVar5 = (char *)0x0;
  pvVar6 = (void *)0x0;
  _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0x678);
  FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x490);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4a8);
  lVar14 = *(long *)(unaff_x22 + 0x4b0);
  FUN_100004640(unaff_x22 + 0x490,uVar10);
  (**(code **)(lVar14 + 0x70))(uVar10,lVar14);
  FUN_100004594(unaff_x22 + 0x490);
  pvVar18 = *(void **)(unaff_x22 + 0x7c0);
  if (((uint)uVar10 & 0xff) < 3) {
    pcVar20 = *(char **)(unaff_x22 + 0x7b8);
    puVar24 = *(ulong **)(unaff_x22 + 0x770);
    FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x558);
    puVar11 = *(undefined **)(unaff_x22 + 0x570);
    lVar14 = *(long *)(unaff_x22 + 0x578);
    _Var4.unknown = puVar11;
    FUN_100004640(unaff_x22 + 0x558);
    Swift::_StringGuts::grow(0x25,_Var4);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar27.bridgeObject = pvVar18;
    SVar27.str = pcVar20;
    SVar28.bridgeObject = pvVar6;
    SVar28.str = pcVar5;
    Swift::String::append(SVar27,SVar28);
    SVar26.bridgeObject = (void *)0xe100000000000000;
    SVar26.str = &DAT_0000003a;
    SVar29.bridgeObject = pvVar6;
    SVar29.str = pcVar5;
    Swift::String::append(SVar26,SVar29);
    uVar1 = *puVar24;
    uVar21 = puVar24[1];
    _swift_getObjectType();
    (**(code **)(uVar21 + 0x30))();
    uVar3 = (uint)uVar21;
    uVar21 = *(ulong *)(unaff_x22 + 0x7c8);
    if (((uVar1 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
      uVar2 = uVar1;
      FUN_100666f78();
      FUN_1005d8534(uVar1);
      if ((uVar3 & 0xff) != 1) {
        uVar21 = uVar2;
      }
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x7c0);
    *(ulong *)(unaff_x22 + 0x6d0) = uVar21;
    SVar27 = Swift::CustomStringConvertible::get_description();
    SVar30.bridgeObject = pvVar6;
    SVar30.str = pcVar5;
    Swift::String::append(SVar27,SVar30);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0xd000000000000020);
    *(undefined1 *)(unaff_x22 + 0x130) = 2;
    *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x6b8);
    *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x6c0);
    *(undefined8 *)(unaff_x22 + 0x150) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x188) = 0xf7;
    *(undefined1 *)(unaff_x22 + 0x370) = 2;
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x6b8);
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x6c0);
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    *(undefined8 *)(unaff_x22 + 0x388) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a8) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x3b0) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x3b8) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x3c0) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x3c8) = 0xf7;
    FUN_1005bf638(unaff_x22 + 0x130,unaff_x22 + 0x430);
    FUN_1004eaa3c(unaff_x22 + 0x370);
    (**(code **)(lVar14 + 0x28))(unaff_x22 + 0x130,puVar11,lVar14);
    _swift_bridgeObjectRelease(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    FUN_100004594(unaff_x22 + 0x558);
  }
  else {
    _swift_bridgeObjectRelease(pvVar18);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x760);
  lVar14 = *(long *)(unaff_x22 + 0x758);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x6d8);
  FUN_100004594(unaff_x22 + 0x5d0);
  (**(code **)(lVar14 + 0x20))(uVar25,uVar13,uVar23);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100a28874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x7b0));
  return;
}



/* Address: 0x100a28878 | FUN_100a28878 */

void FUN_100a28878(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x808) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x800));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x7f8));
    pcVar1 = FUN_100a288f4;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x7f0);
    _swift_release(*(undefined8 *)(lVar2 + 0x7f8));
    _swift_bridgeObjectRelease(uVar3);
    pcVar1 = FUN_100a28fd0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a288f4 | FUN_100a288f4 */

void FUN_100a288f4(void)

{
  String SVar1;
  _StringGuts _Var2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  String SVar20;
  
  lVar14 = *(long *)((long)*(long **)(unaff_x22 + 0x6f0) +
                    *(long *)(**(long **)(unaff_x22 + 0x6f0) + 0x70));
  pcVar3 = (char *)0x0;
  pvVar4 = (void *)0x0;
  _swift_beginAccess(lVar14 + 0x20,unaff_x22 + 0x660);
  FUN_100076688(lVar14 + 0x20,unaff_x22 + 0x508);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x520);
  lVar11 = *(long *)(unaff_x22 + 0x528);
  FUN_100004640(unaff_x22 + 0x508,uVar8);
  (**(code **)(lVar11 + 0x70))(uVar8,lVar11);
  FUN_100004594(unaff_x22 + 0x508);
  if (((uint)uVar8 & 0xff) < 3) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x7f0);
    SVar1 = *(String *)(unaff_x22 + 0x7e8);
    FUN_100076688(lVar14 + 0x20,unaff_x22 + 0x620);
    puVar12 = *(undefined **)(unaff_x22 + 0x638);
    lVar11 = *(long *)(unaff_x22 + 0x640);
    _Var2.unknown = puVar12;
    FUN_100004640(unaff_x22 + 0x620);
    Swift::_StringGuts::grow(0x2e,_Var2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar20.bridgeObject = pvVar4;
    SVar20.str = pcVar3;
    Swift::String::append(SVar1,SVar20);
    FUN_100a15770();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0xd00000000000002c);
    *(undefined1 *)(unaff_x22 + 0xd0) = 2;
    *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x6a8);
    *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x6b0);
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x105;
    *(undefined1 *)(unaff_x22 + 0x250) = 2;
    *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x6a8);
    *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x6b0);
    *(undefined8 *)(unaff_x22 + 0x270) = 0;
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined8 *)(unaff_x22 + 0x280) = 0;
    *(undefined8 *)(unaff_x22 + 0x278) = 0;
    *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x2a8) = 0x105;
    FUN_1005bf638(unaff_x22 + 0xd0,unaff_x22 + 0x310);
    FUN_1004eaa3c(unaff_x22 + 0x250);
    (**(code **)(lVar11 + 0x28))(unaff_x22 + 0xd0,puVar12,lVar11);
    _swift_bridgeObjectRelease(uVar8);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    FUN_100004594(unaff_x22 + 0x620);
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x7f0));
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x760);
  lVar11 = *(long *)(unaff_x22 + 0x758);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x6d8);
  FUN_100004594(unaff_x22 + 0x5d0);
  (**(code **)(lVar11 + 0x20))(uVar19,uVar10,uVar18);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a28bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x7b0));
  return;
}



/* Address: 0x100a28bc8 | FUN_100a28bc8 */

void FUN_100a28bc8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x818);
  *(long *)(lVar2 + 0x828) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x820));
  _swift_release(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a28c38;
  }
  else {
    pcVar1 = FUN_100a290c0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a28c38 | FUN_100a28c38 */

void FUN_100a28c38(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar10 = *(long *)((long)*(long **)(unaff_x22 + 0x6f0) +
                    *(long *)(**(long **)(unaff_x22 + 0x6f0) + 0x70));
  _swift_beginAccess(lVar10 + 0x20,unaff_x22 + 0x648,0,0);
  FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x4b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4d0);
  lVar7 = *(long *)(unaff_x22 + 0x4d8);
  FUN_100004640(unaff_x22 + 0x4b8,uVar3);
  (**(code **)(lVar7 + 0x70))(uVar3,lVar7);
  FUN_100004594(unaff_x22 + 0x4b8);
  if (((uint)uVar3 & 0xff) < 3) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x810);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x708);
    lVar13 = *(long *)(unaff_x22 + 0x700);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x6f8);
    FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x4e0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x4f8);
    lVar7 = *(long *)(unaff_x22 + 0x500);
    FUN_100004640(unaff_x22 + 0x4e0,uVar2);
    *(undefined1 *)(unaff_x22 + 0x2b0) = 2;
    *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100db8170;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x300) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x116;
    *(undefined1 *)(unaff_x22 + 400) = 2;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db8170;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100db8080;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd00000000000002c;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100db8140;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x116;
    FUN_1005bf638(unaff_x22 + 0x2b0,unaff_x22 + 0x1f0);
    FUN_1004eaa3c(unaff_x22 + 400);
    (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x2b0,uVar2,lVar7);
    _swift_release(uVar1);
    FUN_1004eaa3c(unaff_x22 + 0x2b0);
    (**(code **)(lVar13 + 8))(uVar3,uVar5);
    FUN_100004594(unaff_x22 + 0x4e0);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
    lVar7 = *(long *)(unaff_x22 + 0x700);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x6f8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x810));
    (**(code **)(lVar7 + 8))(uVar5,uVar3);
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x768);
  lVar7 = *(long *)(unaff_x22 + 0x758);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x750);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x6d8);
  FUN_100004594(unaff_x22 + 0x5d0);
  (**(code **)(lVar7 + 0x20))(uVar15,uVar6,uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a28edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x7b0));
  return;
}



/* Address: 0x100a28ee0 | FUN_100a28ee0 */

void FUN_100a28ee0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x7b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x708);
  _swift_willThrow();
  _swift_release(uVar5);
  FUN_100004594(unaff_x22 + 0x5d0);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a28fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a28fd0 | FUN_100a28fd0 */

void FUN_100a28fd0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x7b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x708);
  _swift_willThrow();
  _swift_release(uVar5);
  FUN_100004594(unaff_x22 + 0x5d0);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a290bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a290c0 | FUN_100a290c0 */

void FUN_100a290c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
  lVar6 = *(long *)(unaff_x22 + 0x700);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x6f8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x810));
  (**(code **)(lVar6 + 8))(uVar5,uVar3);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x7b0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x7a8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x788);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x780);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x770);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x768);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x760);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x738);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x730);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x728);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x708);
  _swift_willThrow();
  _swift_release(uVar4);
  FUN_100004594(unaff_x22 + 0x5d0);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a291d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a291d4 | FUN_100a291d4 */

code * FUN_100a291d4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar4 = *(long *)(param_2 + 8);
  local_58 = param_1;
  (**(code **)(lVar4 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  pcVar3 = FUN_100a2d224;
  local_80 = param_1;
  lStack_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5;
  FUN_1006413ec(FUN_100a2d224,auStack_90,uVar2,PTR___type_metadata_for____100eae0c8 + 8,lVar4);
  _swift_unknownObjectRelease(uVar1);
  return pcVar3;
}


