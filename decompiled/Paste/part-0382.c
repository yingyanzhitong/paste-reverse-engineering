/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004af634 | FUN_1004af634 */

void FUN_1004af634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x1e0) = param_1;
  *(undefined8 *)(lVar2 + 0x1e8) = param_2;
  *(undefined8 *)(lVar2 + 0x1f0) = param_3;
  *(undefined8 *)(lVar2 + 0x1f8) = param_4;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1d8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004af69c;
  }
  else {
    pcVar1 = FUN_1004afa78;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004af69c | FUN_1004af69c */

void FUN_1004af69c(void)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  long lVar29;
  long unaff_x22;
  undefined8 uVar30;
  long lVar31;
  
  lVar29 = *(long *)(unaff_x22 + 0x200);
  FUN_1004b84b4(*(undefined8 *)(unaff_x22 + 0x1e0),*(undefined8 *)(unaff_x22 + 0x1e8),
                *(undefined8 *)(unaff_x22 + 0xd8));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x1e8);
  if (lVar29 == 0) {
    lVar29 = *(long *)(unaff_x22 + 0x1c8);
    puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0xf0) + *(long *)(unaff_x22 + 0x1c0));
    uVar30 = *puVar1;
    uVar5 = puVar1[1];
    uVar4 = puVar1[2];
    uVar6 = puVar1[3];
    *puVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
    puVar1[1] = uVar28;
    puVar1[2] = uVar3;
    puVar1[3] = uVar10;
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar28);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1004b8bc8(uVar30,uVar5,uVar4,uVar6);
    bVar2 = *(long *)(lVar29 + 0x10) == 0;
    if (!bVar2) {
      uVar27 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x120) + 0x50);
      (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x10))
                (*(undefined8 *)(unaff_x22 + 0x178),
                 *(long *)(unaff_x22 + 0x1c8) + (uVar27 + 0x20 & (uVar27 ^ 0xffffffffffffffff)),
                 *(undefined8 *)(unaff_x22 + 0x118));
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1c8);
    pcVar20 = *(code **)(unaff_x22 + 0x1d0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x118);
    lVar31 = *(long *)(unaff_x22 + 0xf0);
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x180),&DAT_100fcb378,&DAT_100c50170);
    (*pcVar20)(uVar10,bVar2,1,uVar28);
    _swift_bridgeObjectRelease(uVar3);
    lVar29 = _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL;
    _swift_beginAccess(lVar31 + _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL,
                       unaff_x22 + 0x60,0x21,0);
    FUN_1004375f4(uVar10,lVar31 + lVar29,&DAT_100fcb378,&DAT_100c50170);
    _swift_endAccess(unaff_x22 + 0x60);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar4 = *(undefined8 *)(unaff_x22 + 400);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x178);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x110);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
    _swift_task_dealloc(uVar28);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar30);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar26);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001004afa74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar10,uVar14,uVar3,uVar13);
    return;
  }
  uVar30 = *(undefined8 *)(unaff_x22 + 0x1c8);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x180),&DAT_100fcb378,&DAT_100c50170);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar30);
  _swift_bridgeObjectRelease(uVar28);
  _swift_bridgeObjectRelease(uVar10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar28 = *(undefined8 *)(unaff_x22 + 400);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar30 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004af83c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004afa78 | FUN_1004afa78 */

void FUN_1004afa78(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long unaff_x22;
  
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1c8);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x180),&DAT_100fcb378,&DAT_100c50170);
  _swift_bridgeObjectRelease(uVar21);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x100);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1b8));
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001004afbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004afbe4 | FUN_1004afbe4 */

void FUN_1004afbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  URL UVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_6;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  *(undefined8 *)(unaff_x22 + 0x78) = param_4;
  puVar1 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x98) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar3;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = UVar4.unknown;
  lVar5 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  puVar1 = &DAT_100fcb588;
  FUN_1000f7830(&DAT_100fcb588,&DAT_100c503a8);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar3;
  lVar5 = 0;
  FUN_1004ce850();
  *(long *)(unaff_x22 + 0xe8) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar3;
  _swift_task_switch(FUN_1004afd28,0,0);
  return;
}



/* Address: 0x1004afd28 | FUN_1004afd28 */

/* WARNING: Removing unreachable block (ram,0x0001004afff8) */

void FUN_1004afd28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined1 *puVar11;
  long *plVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  code *UNRECOVERED_JUMPTABLE;
  long lVar21;
  
  lVar21 = _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata;
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar19 = *(long *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar18 = *(long *)(unaff_x22 + 0x88);
  *(long *)(unaff_x22 + 0x110) = _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata;
  _swift_beginAccess(lVar18 + lVar21,unaff_x22 + 0x10,0,0);
  FUN_1000f8cac(lVar18 + lVar21,uVar14,&DAT_100fcb588,&DAT_100c503a8);
  (**(code **)(lVar19 + 0x30))(uVar14,1,uVar16);
  if ((int)uVar14 != 1) {
    FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x108),FUN_1004ce850
                 );
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar1 = *(undefined8 *)(unaff_x22 + 200);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_1000523d8(uVar4,*(undefined8 *)(unaff_x22 + 0x70),FUN_1004ce850);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar17);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1004b01cc:
                    /* WARNING: Could not recover jumptable at 0x0001004b01e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar21 = *(long *)(unaff_x22 + 0xb0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar19 = *(long *)(unaff_x22 + 0x88);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0xe0),&DAT_100fcb588,&DAT_100c503a8);
  lVar19 = lVar19 + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar18 = 0;
  FUN_1004bcc58();
  iVar9 = *(int *)(lVar18 + 0x1c);
  lVar18 = 0;
  FUN_1004bcbcc();
  FUN_1000f8cac(lVar19 + (long)iVar9 + (long)*(int *)(lVar18 + 0x14),uVar14,&DAT_100fcb378,
                &DAT_100c50170);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x30);
  (*UNRECOVERED_JUMPTABLE)(uVar14,1,uVar16);
  if ((int)uVar14 == 1) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
    lVar21 = *(long *)(unaff_x22 + 0x88);
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0xa0),&DAT_100fcb378,&DAT_100c50170);
    lVar19 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
    _swift_beginAccess(lVar21 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,
                       unaff_x22 + 0x28,0,0);
    FUN_1000f8cac(lVar21 + lVar19,uVar14,&DAT_100fcb378,&DAT_100c50170);
    (*UNRECOVERED_JUMPTABLE)(uVar14,1,uVar16);
    if ((int)uVar14 == 1) {
      puVar10 = *(undefined8 **)(unaff_x22 + 0x98);
      lVar19 = *(long *)(unaff_x22 + 0x78);
      FUN_1000fb4c4(puVar10,&DAT_100fcb378,&DAT_100c50170);
      if (*(long *)(lVar19 + 0x10) == 0) {
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,puVar10,0,0);
        puVar10[1] = 0;
        *puVar10 = 0;
        puVar10[3] = 0;
        puVar10[2] = 0;
        *(undefined1 *)(puVar10 + 4) = 0xe;
        _swift_willThrow();
        uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
        uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar1 = *(undefined8 *)(unaff_x22 + 200);
        uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xb8);
        uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
        _swift_task_dealloc(uVar16);
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar4);
        _swift_task_dealloc(uVar14);
        _swift_task_dealloc(uVar5);
        _swift_task_dealloc(uVar1);
        _swift_task_dealloc(uVar6);
        _swift_task_dealloc(uVar2);
        _swift_task_dealloc(uVar7);
        _swift_task_dealloc(uVar3);
        _swift_task_dealloc(uVar13);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1004b01cc;
      }
      puVar15 = *(undefined **)(unaff_x22 + 0x78);
      _swift_bridgeObjectRetain(puVar15);
      goto LAB_1004b0098;
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar19 = *(long *)(unaff_x22 + 0xb0);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar19 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(uVar14,*(undefined8 *)(unaff_x22 + 0x98),uVar16);
    puVar15 = &DAT_100fcb4a0;
    FUN_1000f7830(&DAT_100fcb4a0,&DAT_100c502f0);
    bVar8 = *(byte *)(lVar19 + 0x50);
  }
  else {
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar19 = *(long *)(unaff_x22 + 0x88);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0xb0) + 0x20);
    (*UNRECOVERED_JUMPTABLE)
              (uVar16,*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
    puVar11 = (undefined1 *)(lVar19 + _TtC3MCP15OAuthAuthorizer::urlValidator);
    FUN_100004640(puVar11,*(undefined8 *)(puVar11 + 0x18));
    FUN_1004d0d18(uVar16,0xd00000000000001b,0x8000000100daa530,*puVar11);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa8);
    lVar19 = *(long *)(unaff_x22 + 0xb0);
    puVar15 = &DAT_100fcb4a0;
    FUN_1000f7830(&DAT_100fcb4a0,&DAT_100c502f0);
    bVar8 = *(byte *)(lVar19 + 0x50);
  }
  _swift_allocObject();
  *(undefined8 *)(puVar15 + 0x18) = 2;
  *(undefined8 *)(puVar15 + 0x10) = 1;
  (*UNRECOVERED_JUMPTABLE)
            (puVar15 + ((ulong)bVar8 + 0x20 & ((ulong)bVar8 ^ 0xffffffffffffffff)),uVar14,uVar16);
LAB_1004b0098:
  *(undefined **)(unaff_x22 + 0x118) = puVar15;
  lVar19 = *(long *)(unaff_x22 + 0x88) + _TtC3MCP15OAuthAuthorizer::discoveryClient;
  FUN_100004640(lVar19,*(undefined8 *)(lVar19 + 0x18));
  plVar12 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1004b01ec;
  FUN_1004c4f40(plVar12,*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xf8),puVar15,
                *(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x1004b01ec | FUN_1004b01ec */

void FUN_1004b01ec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x118);
  *(long *)(lVar3 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x120));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1004b0250;
  }
  else {
    pcVar2 = FUN_1004b044c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1004b0250 | FUN_1004b0250 */

void FUN_1004b0250(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  lVar14 = *(long *)(unaff_x22 + 0x110);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar6 = *(long *)(unaff_x22 + 0xf0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar8 = *(long *)(unaff_x22 + 0xb0);
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar16 = *(code **)(lVar8 + 0x20);
  (*pcVar16)(uVar7,*(undefined8 *)(unaff_x22 + 0xb8),uVar3);
  FUN_1000523d8(uVar1,uVar5);
  (*pcVar16)(uVar9,uVar7,uVar3);
  (**(code **)(lVar8 + 0x38))(uVar9,0,1,uVar3);
  lVar8 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
  _swift_beginAccess(lVar4 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,unaff_x22 + 0x40
                     ,0x21,0);
  FUN_1004375f4(uVar9,lVar4 + lVar8,&DAT_100fcb378,&DAT_100c50170);
  _swift_endAccess(unaff_x22 + 0x40);
  FUN_1000c495c(uVar5,uVar15,FUN_1004ce850);
  (**(code **)(lVar6 + 0x38))(uVar15,0,1,uVar2);
  _swift_beginAccess(lVar4 + lVar14,unaff_x22 + 0x58,0x21,0);
  FUN_1004375f4(uVar15,lVar4 + lVar14,&DAT_100fcb588,&DAT_100c503a8);
  _swift_endAccess(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
  FUN_1000523d8(uVar1,*(undefined8 *)(unaff_x22 + 0x70),FUN_1004ce850);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001004b0448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b044c | FUN_1004b044c */

void FUN_1004b044c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001004b0518. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b051c | FUN_1004b051c */

/* WARNING: Removing unreachable block (ram,0x0001004b09bc) */
/* WARNING: Removing unreachable block (ram,0x0001004b0898) */
/* WARNING: Removing unreachable block (ram,0x0001004b08b0) */

void FUN_1004b051c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  undefined1 *puVar8;
  URL UVar9;
  String *pSVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  long unaff_x21;
  code *pcVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_e0 [8];
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  undefined1 *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar5 = &DAT_100fcb378;
  local_b8 = param_1;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  local_c0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_a8 = lVar11;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  local_b0 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  uVar18 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = uVar18 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar17 = lVar15 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = uVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar16 - extraout_x12_03;
  lVar11 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::discoveryClient;
  FUN_100004640(lVar11,*(undefined8 *)(lVar11 + 0x18));
  FUN_100076688();
  lVar1 = lStack_68;
  uVar4 = local_70;
  FUN_100004640(auStack_88,local_70);
  (**(code **)(lVar1 + 0x18))(lVar12,param_2,uVar4,lVar1);
  if (unaff_x21 != 0) {
    FUN_100004594(auStack_88);
    return;
  }
  local_d8 = lVar15;
  local_d0 = uVar18;
  local_c8 = uVar17;
  FUN_100004594(auStack_88);
  lVar1 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar15 = 0;
  FUN_1004bcc58();
  iVar2 = *(int *)(lVar15 + 0x1c);
  lVar7 = 0;
  FUN_1004bcbcc();
  lVar15 = local_a8;
  FUN_1000f8cac(lVar1 + (long)iVar2 + (long)*(int *)(lVar7 + 0x1c),local_a8,&DAT_100fcb378,
                &DAT_100c50170);
  lVar1 = local_b0;
  pcVar14 = *(code **)(local_b0 + 0x30);
  lVar7 = lVar15;
  (*pcVar14)(lVar15,1,UVar6.unknown);
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar15,&DAT_100fcb378,&DAT_100c50170);
    uVar4 = local_b8;
    if ((*(long *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata + 0x10) != 0) &&
       (lVar15 = *(long *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata + 8),
       lVar15 != 0)) {
      _swift_bridgeObjectRetain(lVar15);
      puVar3 = local_c0;
      Foundation::URL::_init();
      _swift_bridgeObjectRelease(lVar15);
      puVar8 = puVar3;
      (*pcVar14)(puVar3,1,UVar6.unknown);
      lVar15 = local_d8;
      if ((int)puVar8 != 1) {
        pcVar14 = *(code **)(lVar1 + 0x20);
        (*pcVar14)(local_d8,puVar3,UVar6.unknown);
        FUN_100004640(lVar11,*(undefined8 *)(lVar11 + 0x18));
        FUN_100076688();
        lVar16 = lStack_68;
        uVar4 = local_70;
        FUN_100004640(auStack_88,local_70);
        (**(code **)(lVar16 + 0x18))(local_d0,lVar15,uVar4,lVar16);
        FUN_100004594(auStack_88);
        FUN_100004640(lVar11,*(undefined8 *)(lVar11 + 0x18));
        FUN_100076688();
        FUN_100004640(auStack_88,local_70);
        uVar17 = local_d0;
        uVar18 = local_d0;
        (**(code **)(lStack_68 + 0x28))(local_d0,lVar12,local_70,lStack_68);
        UVar9.unknown = auStack_88;
        FUN_100004594();
        if ((uVar18 & 1) != 0) {
          pcVar13 = *(code **)(lVar1 + 8);
          (*pcVar13)(local_d8,UVar6.unknown);
          (*pcVar13)(lVar12,UVar6.unknown);
          (*pcVar14)(local_b8,uVar17,UVar6.unknown);
          return;
        }
        SVar19 = Foundation::URL::get_absoluteString(UVar9);
        SVar20 = Foundation::URL::get_absoluteString((URL)SVar19.str);
        pSVar10 = (String *)SVar20.str;
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,pSVar10,0,0);
        *pSVar10 = SVar19;
        pSVar10[1] = SVar20;
        *(undefined1 *)&pSVar10[2].str = 3;
        _swift_willThrow();
        pcVar14 = *(code **)(lVar1 + 8);
        (*pcVar14)(uVar17,UVar6.unknown);
        (*pcVar14)(local_d8,UVar6.unknown);
        goto LAB_1004b0a54;
      }
      FUN_1000fb4c4(puVar3,&DAT_100fcb378,&DAT_100c50170);
    }
    (**(code **)(lVar1 + 0x20))(uVar4,lVar12,UVar6.unknown);
  }
  else {
    pcVar14 = *(code **)(lVar1 + 0x20);
    (*pcVar14)(lVar16,lVar15,UVar6.unknown);
    FUN_100004640(lVar11,*(undefined8 *)(lVar11 + 0x18));
    FUN_100076688();
    lVar15 = lStack_68;
    uVar4 = local_70;
    FUN_100004640(auStack_88,local_70);
    uVar17 = local_c8;
    (**(code **)(lVar15 + 0x18))(local_c8,lVar16,uVar4,lVar15);
    FUN_100004594(auStack_88);
    FUN_100004640(lVar11,*(undefined8 *)(lVar11 + 0x18));
    FUN_100076688();
    FUN_100004640(auStack_88,local_70);
    uVar18 = uVar17;
    (**(code **)(lStack_68 + 0x28))(uVar17,lVar12,local_70,lStack_68);
    UVar9.unknown = auStack_88;
    FUN_100004594();
    if ((uVar18 & 1) != 0) {
      pcVar13 = *(code **)(lVar1 + 8);
      (*pcVar13)(lVar16,UVar6.unknown);
      (*pcVar13)(lVar12,UVar6.unknown);
      (*pcVar14)(local_b8,uVar17,UVar6.unknown);
      return;
    }
    SVar19 = Foundation::URL::get_absoluteString(UVar9);
    SVar20 = Foundation::URL::get_absoluteString((URL)SVar19.str);
    pSVar10 = (String *)SVar20.str;
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,pSVar10,0,0);
    *pSVar10 = SVar19;
    pSVar10[1] = SVar20;
    *(undefined1 *)&pSVar10[2].str = 3;
    _swift_willThrow();
    pcVar14 = *(code **)(lVar1 + 8);
    (*pcVar14)(uVar17,UVar6.unknown);
    (*pcVar14)(lVar16,UVar6.unknown);
LAB_1004b0a54:
    (*pcVar14)(lVar12,UVar6.unknown);
  }
  return;
}



/* Address: 0x1004b0b78 | FUN_1004b0b78 */

void FUN_1004b0b78(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1004b0b94,0,0);
  return;
}



/* Address: 0x1004b0b94 | FUN_1004b0b94 */

void FUN_1004b0b94(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x20) + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar3 = 0;
  FUN_1004bcc58();
  puVar2 = (undefined8 *)(lVar1 + *(int *)(lVar3 + 0x30));
  piVar6 = (int *)*puVar2;
  *(int **)(unaff_x22 + 0x28) = piVar6;
  uVar7 = puVar2[1];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
  if (piVar6 == (int *)0x0) {
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    uVar7 = 0;
    uVar5 = 0;
  }
  else {
    plVar4 = (long *)(ulong)(uint)piVar6[1];
    UNRECOVERED_JUMPTABLE = (code *)((long)piVar6 + (long)*piVar6);
    _swift_retain(uVar7);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x38) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1004b0c48;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004b0c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar7,uVar5);
  return;
}



/* Address: 0x1004b0c48 | FUN_1004b0c48 */

void FUN_1004b0c48(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1004b0cac;
  }
  else {
    pcVar1 = FUN_1004b0d10;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b0cac | FUN_1004b0cac */

void FUN_1004b0cac(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x48);
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
  if (lVar4 != 0) {
    uVar2 = *(ulong *)(unaff_x22 + 0x40);
    uVar3 = *(ulong *)(unaff_x22 + 0x48);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) goto LAB_1004b0cf8;
    _swift_bridgeObjectRelease(uVar3);
  }
  uVar2 = 0;
  uVar3 = 0;
LAB_1004b0cf8:
                    /* WARNING: Could not recover jumptable at 0x0001004b0d0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3);
  return;
}



/* Address: 0x1004b0d10 | FUN_1004b0d10 */

void FUN_1004b0d10(void)

{
  long unaff_x22;
  
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x0001004b0d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b0d44 | FUN_1004b0d44 */

void FUN_1004b0d44(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Date DVar10;
  undefined8 uVar11;
  long extraout_x8;
  long unaff_x20;
  ulong uVar12;
  undefined8 *puVar13;
  code *pcVar14;
  ulong uVar15;
  
  lVar8 = 0;
  FUN_1004c78dc();
  lVar9 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar8 + -8) + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar7);
  uVar11 = *(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  lVar5 = ((undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage))[1];
  iVar6 = *(int *)(lVar9 + 0x18);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar10.unknown + -8) + 0x38))
            ((undefined1 *)((long)puVar13 + (long)iVar6),1,1,DVar10.unknown);
  FUN_1000f8cac(param_4,(undefined1 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x20)),&DAT_100fcb378,
                &DAT_100c50170);
  uVar15 = *(ulong *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration + 8);
  uVar12 = *(ulong *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration + 0x10);
  _swift_bridgeObjectRetain(uVar12);
  uVar3 = uVar15 & 0xffffffffffff;
  if ((uVar12 & 0x2000000000000000) != 0) {
    uVar3 = uVar12 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_3);
  if (uVar3 == 0) {
    _swift_bridgeObjectRelease(uVar12);
    uVar15 = 0;
    uVar12 = 0;
  }
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    puVar4 = param_3;
  }
  _swift_getObjectType(uVar11);
  *puVar13 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar7) = param_2;
  *(undefined8 *)(&stack0xffffffffffffffb0 + lVar7) = 0x726572616542;
  *(undefined1 **)(&stack0xffffffffffffffb8 + lVar7) = &DAT_e600000000000000;
  *(undefined **)((long)puVar13 + (long)*(int *)(lVar8 + 0x1c)) = puVar4;
  puVar1 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x24));
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar2 = (ulong *)((long)puVar13 + (long)*(int *)(lVar8 + 0x28));
  *puVar2 = uVar15;
  puVar2[1] = uVar12;
  pcVar14 = *(code **)(lVar5 + 8);
  _swift_bridgeObjectRetain(param_2);
  (*pcVar14)(puVar13,uVar11,lVar5);
  FUN_10005241c(puVar13,FUN_1004c78dc);
  return;
}



/* Address: 0x1004b0ee8 | FUN_1004b0ee8 */

void FUN_1004b0ee8(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  Date DVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  *(undefined8 *)(unaff_x22 + 0x138) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x140) = UVar1.unknown;
  lVar6 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x148) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar3;
  puVar4 = &DAT_100fcb580;
  FUN_1000f7830(&DAT_100fcb580,&DAT_100c503a0);
  *(undefined **)(unaff_x22 + 0x178) = puVar4;
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar3;
  puVar4 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  puVar4 = &DAT_100fcb588;
  FUN_1000f7830(&DAT_100fcb588,&DAT_100c503a8);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar3;
  lVar6 = 0;
  FUN_1004ce850();
  *(long *)(unaff_x22 + 0x1a0) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x1a8) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar3;
  puVar4 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar3;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c0) = DVar5.unknown;
  lVar6 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x1c8) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar3;
  puVar4 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  uVar3 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar3;
  lVar6 = 0;
  FUN_1004c78dc();
  *(long *)(unaff_x22 + 0x1f0) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x1f8) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar3;
  _swift_task_switch(FUN_1004b10f8,0,0);
  return;
}



/* Address: 0x1004b10f8 | FUN_1004b10f8 */

/* WARNING: Removing unreachable block (ram,0x0001004b173c) */
/* WARNING: Removing unreachable block (ram,0x0001004b1600) */

void FUN_1004b10f8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  int iVar12;
  bool bVar13;
  long lVar14;
  undefined8 uVar15;
  Date DVar16;
  undefined8 *puVar17;
  long lVar18;
  long *plVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long unaff_x22;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  code *pcVar30;
  URL UVar31;
  undefined8 uVar32;
  double dVar33;
  String SVar34;
  
  lVar24 = *(long *)(unaff_x22 + 0x138);
  lVar1 = lVar24 + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar14 = 0;
  FUN_1004bcc58();
  if (*(double *)(lVar1 + *(int *)(lVar14 + 0x38)) <= 0.0) goto LAB_1004b13a0;
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f0);
  lVar18 = *(long *)(unaff_x22 + 0x1f8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1e8);
  puVar17 = (undefined8 *)(lVar24 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  lVar24 = puVar17[1];
  _swift_getObjectType(*puVar17);
  (**(code **)(lVar24 + 0x10))(uVar27);
  (**(code **)(lVar18 + 0x30))(uVar27,1,uVar15);
  if ((int)uVar27 == 1) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
    puVar20 = &DAT_100fcb558;
    puVar21 = &DAT_100c51960;
LAB_1004b11ac:
    FUN_1000fb4c4(uVar15,puVar20,puVar21);
    goto LAB_1004b13a0;
  }
  lVar25 = *(long *)(unaff_x22 + 0x200);
  lVar24 = *(long *)(unaff_x22 + 0x1f0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar18 = *(long *)(unaff_x22 + 0x1c8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1b8);
  FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x1e8),lVar25,FUN_1004c78dc);
  dVar33 = *(double *)(lVar1 + *(int *)(lVar14 + 0x38));
  Foundation::Date::init();
  FUN_1000f8cac(lVar25 + *(int *)(lVar24 + 0x18),uVar27,&DAT_100fcb550,&USHORT_100c50b50);
  (**(code **)(lVar18 + 0x30))(uVar27,1,uVar15);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  if ((int)uVar27 == 1) {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1b8);
    (**(code **)(*(long *)(unaff_x22 + 0x1c8) + 8))(uVar15,*(undefined8 *)(unaff_x22 + 0x1c0));
    FUN_1000fb4c4(uVar27,&DAT_100fcb550,&USHORT_100c50b50);
LAB_1004b1390:
    lVar18 = *(long *)(unaff_x22 + 0x200);
  }
  else {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1d0);
    puVar20 = *(undefined **)(unaff_x22 + 0x1d8);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1c0);
    lVar24 = *(long *)(unaff_x22 + 0x1c8);
    DVar16.unknown = puVar20;
    (**(code **)(lVar24 + 0x20))(puVar20,*(undefined8 *)(unaff_x22 + 0x1b8),uVar32);
    Foundation::Date::addingTimeInterval(dVar33,DVar16);
    puVar17 = &DAT_100fcb560;
    FUN_100003a00(&DAT_100fcb560,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar13 = Swift::Comparable::>__infix(uVar27,puVar20,uVar32,puVar17);
    pcVar30 = *(code **)(lVar24 + 8);
    (*pcVar30)(uVar27,uVar32);
    (*pcVar30)(puVar20,uVar32);
    (*pcVar30)(uVar15,uVar32);
    lVar24 = _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata;
    if (!bVar13) goto LAB_1004b1390;
    lVar18 = *(long *)(unaff_x22 + 0x200);
    puVar17 = (undefined8 *)(lVar18 + *(int *)(*(long *)(unaff_x22 + 0x1f0) + 0x24));
    lVar25 = puVar17[1];
    if (lVar25 != 0) {
      UVar31.unknown = (undefined *)*puVar17;
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1a0);
      lVar18 = *(long *)(unaff_x22 + 0x1a8);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x198);
      lVar28 = *(long *)(unaff_x22 + 0x138);
      _swift_beginAccess(lVar28 + _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata,
                         unaff_x22 + 0x100,0,0);
      FUN_1000f8cac(lVar28 + lVar24,uVar27,&DAT_100fcb588,&DAT_100c503a8);
      (**(code **)(lVar18 + 0x30))(uVar27,1,uVar15);
      if ((int)uVar27 == 1) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x198);
        FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x200),FUN_1004c78dc);
        puVar20 = &DAT_100fcb588;
        puVar21 = &DAT_100c503a8;
        goto LAB_1004b11ac;
      }
      lVar26 = *(long *)(unaff_x22 + 0x1b0);
      lVar28 = *(long *)(unaff_x22 + 0x1a0);
      uVar27 = *(undefined8 *)(unaff_x22 + 400);
      lVar18 = *(long *)(unaff_x22 + 0x178);
      lVar24 = *(long *)(unaff_x22 + 0x180);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
      lVar11 = *(long *)(unaff_x22 + 0x148);
      FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x198),lVar26,FUN_1004ce850);
      iVar12 = *(int *)(lVar28 + 0x18);
      (**(code **)(lVar11 + 0x38))(uVar27,1,1,uVar15);
      lVar28 = (long)*(int *)(lVar18 + 0x30);
      FUN_1000f8cac(lVar26 + iVar12,lVar24,&DAT_100fcb378,&DAT_100c50170);
      FUN_1000f8cac(uVar27,lVar24 + lVar28,&DAT_100fcb378,&DAT_100c50170);
      pcVar30 = *(code **)(lVar11 + 0x30);
      lVar18 = lVar24;
      (*pcVar30)(lVar24,1,uVar15);
      if ((int)lVar18 == 1) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 400),&DAT_100fcb378,&DAT_100c50170);
        lVar24 = lVar24 + lVar28;
        (*pcVar30)(lVar24,1,uVar15);
        if ((int)lVar24 != 1) {
LAB_1004b15cc:
          FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x180),&DAT_100fcb580,&DAT_100c503a0);
LAB_1004b15e4:
          FUN_1004b051c(*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x128));
          lVar24 = *(long *)(unaff_x22 + 0x200);
          lVar18 = *(long *)(unaff_x22 + 0x1f0);
          pcVar30 = *(code **)(*(long *)(unaff_x22 + 0x148) + 0x20);
          (*pcVar30)(*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x160),
                     *(undefined8 *)(unaff_x22 + 0x140));
          lVar24 = *(long *)(lVar24 + *(int *)(lVar18 + 0x1c));
          if (*(long *)(lVar24 + 0x10) == 0) {
            lVar24 = 0;
          }
          else {
            _swift_bridgeObjectRetain(lVar24);
          }
          *(long *)(unaff_x22 + 0x208) = lVar24;
          FUN_1004b3db0(*(undefined8 *)(unaff_x22 + 0x150),*(undefined8 *)(unaff_x22 + 0x1b0));
          lVar18 = *(long *)(unaff_x22 + 0x138);
          (*pcVar30)(*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x150),
                     *(undefined8 *)(unaff_x22 + 0x140));
          uVar27 = *(undefined8 *)(lVar1 + *(int *)(lVar14 + 0x28));
          *(undefined8 *)(unaff_x22 + 0x118) = uVar27;
          uVar15 = uVar27;
          _swift_bridgeObjectRetain(uVar27);
          _swift_isUniquelyReferenced_nonNull_native();
          FUN_1004b4f30(0x5f68736572666572,0xed00006e656b6f74,0x79745f746e617267,0xea00000000006570,
                        uVar15);
          *(undefined8 *)(unaff_x22 + 0x118) = uVar27;
          uVar15 = uVar27;
          _swift_isUniquelyReferenced_nonNull_native(uVar27);
          _swift_bridgeObjectRetain(lVar25);
          FUN_1004b4f30(UVar31.unknown,lVar25,0x5f68736572666572,0xed00006e656b6f74,uVar15);
          *(undefined8 *)(unaff_x22 + 0x118) = uVar27;
          SVar34 = Foundation::URL::get_absoluteString(UVar31);
          uVar15 = uVar27;
          _swift_isUniquelyReferenced_nonNull_native(uVar27);
          FUN_1004b4f30(SVar34.str,SVar34.bridgeObject,0x656372756f736572,&DAT_e800000000000000,
                        uVar15);
          *(undefined8 *)(unaff_x22 + 0x118) = uVar27;
          FUN_100076688(lVar18 + _TtC3MCP15OAuthAuthorizer::scopeSelector,unaff_x22 + 0x60);
          if (lVar24 == 0) {
            FUN_100004594(unaff_x22 + 0x60);
          }
          else {
            lVar14 = *(long *)(unaff_x22 + 0x78);
            lVar18 = *(long *)(unaff_x22 + 0x80);
            FUN_100004640(unaff_x22 + 0x60,lVar14);
            pcVar30 = *(code **)(lVar18 + 0x18);
            lVar18 = lVar24;
            _swift_bridgeObjectRetain(lVar24);
            (*pcVar30)();
            _swift_bridgeObjectRelease(lVar24);
            FUN_100004594(unaff_x22 + 0x60);
            if (lVar14 != 0) {
              uVar15 = uVar27;
              _swift_isUniquelyReferenced_nonNull_native(uVar27);
              FUN_1004b4f30(lVar18,lVar14,0x65706f6373,&DAT_e500000000000000,uVar15);
              *(undefined8 *)(unaff_x22 + 0x118) = uVar27;
            }
          }
          uVar27 = *(undefined8 *)(lVar1 + 0x10);
          uVar15 = *(undefined8 *)(lVar1 + 8);
          uVar23 = *(undefined8 *)(lVar1 + 0x20);
          uVar32 = *(undefined8 *)(lVar1 + 0x18);
          *(undefined1 *)(unaff_x22 + 0xa8) = *(undefined1 *)(lVar1 + 0x28);
          *(undefined8 *)(unaff_x22 + 0xa0) = uVar23;
          *(undefined8 *)(unaff_x22 + 0x98) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x90) = uVar27;
          *(undefined8 *)(unaff_x22 + 0x88) = uVar15;
          FUN_1004b8ab4(unaff_x22 + 0x88,unaff_x22 + 0xb0);
          plVar19 = (long *)0x190;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x210) = plVar19;
          *plVar19 = unaff_x22;
          plVar19[1] = (long)FUN_1004b19cc;
          FUN_1004d0304(plVar19,unaff_x22 + 0x10,unaff_x22 + 0x118,
                        *(undefined8 *)(unaff_x22 + 0x158),unaff_x22 + 0x88,
                        *(undefined8 *)(unaff_x22 + 0x130));
          return;
        }
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x180),&DAT_100fcb378,&DAT_100c50170);
      }
      else {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
        FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x180),*(undefined8 *)(unaff_x22 + 0x188),
                      &DAT_100fcb378,&DAT_100c50170);
        lVar18 = lVar24 + lVar28;
        (*pcVar30)(lVar18,1,uVar15);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x188);
        uVar27 = *(undefined8 *)(unaff_x22 + 400);
        if ((int)lVar18 == 1) {
          uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
          lVar24 = *(long *)(unaff_x22 + 0x148);
          FUN_1000fb4c4(uVar27,&DAT_100fcb378,&DAT_100c50170);
          (**(code **)(lVar24 + 8))(uVar15,uVar32);
          goto LAB_1004b15cc;
        }
        uVar23 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x170);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x140);
        lVar18 = *(long *)(unaff_x22 + 0x148);
        (**(code **)(lVar18 + 0x20))(uVar29,lVar24 + lVar28,uVar32);
        puVar17 = &DAT_100fcb590;
        FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
        bVar13 = Swift::Equatable::___infix(uVar15,uVar29,uVar32,puVar17);
        pcVar30 = *(code **)(lVar18 + 8);
        (*pcVar30)(uVar29,uVar32);
        FUN_1000fb4c4(uVar27,&DAT_100fcb378,&DAT_100c50170);
        (*pcVar30)(uVar15,uVar32);
        FUN_1000fb4c4(uVar23,&DAT_100fcb378,&DAT_100c50170);
        if (!bVar13) goto LAB_1004b15e4;
      }
      lVar18 = *(long *)(unaff_x22 + 0x200);
      FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x1b0),FUN_1004ce850);
    }
  }
  FUN_10005241c(lVar18,FUN_1004c78dc);
LAB_1004b13a0:
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 400);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x200));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar32);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar22);
                    /* WARNING: Could not recover jumptable at 0x0001004b1474. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b19cc | FUN_1004b19cc */

void FUN_1004b19cc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x218) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x210));
  if (unaff_x20 == 0) {
    FUN_1004b8af0(lVar2 + 0x88);
    pcVar1 = FUN_1004b1a30;
  }
  else {
    pcVar1 = FUN_1004b1ba0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b1a30 | FUN_1004b1a30 */

void FUN_1004b1a30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  code *pcVar17;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
  lVar5 = *(long *)(unaff_x22 + 0x148);
  FUN_1004b4220(unaff_x22 + 0x10,uVar14);
  FUN_1004b8b94(unaff_x22 + 0x10);
  pcVar17 = *(code **)(lVar5 + 8);
  (*pcVar17)(uVar16,uVar15);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_bridgeObjectRelease(uVar14);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x140));
  FUN_10005241c(uVar15,FUN_1004ce850);
  FUN_10005241c(uVar14,FUN_1004c78dc);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x200));
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001004b1b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b1ba0 | FUN_1004b1ba0 */

void FUN_1004b1ba0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long unaff_x22;
  code *pcVar24;
  
  uVar22 = *(undefined8 *)(unaff_x22 + 0x218);
  FUN_1004b8af0(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar22;
  _swift_errorRetain(uVar22);
  puVar17 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  lVar18 = unaff_x22 + 0xd8;
  _swift_dynamicCast(lVar18,unaff_x22 + 0x120,puVar17,&DAT_100ed9e90,0);
  plVar20 = *(long **)(unaff_x22 + 0x218);
  plVar21 = plVar20;
  if ((int)lVar18 != 0) {
    _swift_errorRelease();
    lVar18 = *(long *)(unaff_x22 + 0xd8);
    lVar7 = *(long *)(unaff_x22 + 0xe0);
    lVar1 = *(long *)(unaff_x22 + 0xe8);
    lVar8 = *(long *)(unaff_x22 + 0xf0);
    cVar16 = *(char *)(unaff_x22 + 0xf8);
    if ((cVar16 == '\0') && (lVar18 - 400U < 100)) {
      uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
      pcVar24 = *(code **)(*(long *)(unaff_x22 + 0x148) + 8);
      (*pcVar24)(*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x140));
      FUN_1004b8b24(lVar18,lVar7,lVar1,lVar8,0);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x118));
      plVar21 = *(long **)(unaff_x22 + 0x120);
      goto LAB_1004b1ccc;
    }
    FUN_1004a3fb4();
    plVar21 = (long *)&DAT_100ed9e90;
    _swift_allocError(&DAT_100ed9e90,plVar20,0,0);
    *plVar20 = lVar18;
    plVar20[1] = lVar7;
    plVar20[2] = lVar1;
    plVar20[3] = lVar8;
    *(char *)(plVar20 + 4) = cVar16;
    _swift_willThrow();
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x208);
  pcVar24 = *(code **)(*(long *)(unaff_x22 + 0x148) + 8);
  (*pcVar24)(*(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x140));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x118));
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x120));
LAB_1004b1ccc:
  _swift_errorRelease(plVar21);
  _swift_bridgeObjectRelease(uVar22);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1b0);
  (*pcVar24)(*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x140));
  FUN_10005241c(uVar22,FUN_1004ce850);
  FUN_10005241c(uVar23,FUN_1004c78dc);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x150);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x200));
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x0001004b1de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b1de4 | FUN_1004b1de4 */

void FUN_1004b1de4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  Date DVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  lVar1 = 0;
  FUN_1004bcc58();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar2;
  puVar3 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  uVar2 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar2;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xf0) = DVar5.unknown;
  lVar1 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xf8) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  _swift_task_switch(FUN_1004b1eac,0,0);
  return;
}



/* Address: 0x1004b1eac | FUN_1004b1eac */

void FUN_1004b1eac(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  bool bVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  
  lVar3 = _TtC3MCP15OAuthAuthorizer::clientSecretExpiresAt;
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  lVar9 = *(long *)(unaff_x22 + 0xf8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar12 = *(long *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x110) = _TtC3MCP15OAuthAuthorizer::clientSecretExpiresAt;
  _swift_beginAccess(lVar12 + lVar3,unaff_x22 + 0x78,0,0);
  FUN_1000f8cac(lVar12 + lVar3,uVar8,&DAT_100fcb550,&USHORT_100c50b50);
  (**(code **)(lVar9 + 0x30))(uVar8,1,uVar10);
  if ((int)uVar8 == 1) {
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0xe8),&DAT_100fcb550,&USHORT_100c50b50);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar9 = *(long *)(unaff_x22 + 0xf8);
    (**(code **)(lVar9 + 0x20))(uVar1,*(undefined8 *)(unaff_x22 + 0xe8),uVar8);
    Foundation::Date::init();
    puVar5 = &DAT_100fcb560;
    FUN_100003a00(&DAT_100fcb560,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar4 = Swift::Comparable::>__infix(uVar10,uVar1,uVar8,puVar5);
    pcVar13 = *(code **)(lVar9 + 8);
    (*pcVar13)(uVar10,uVar8);
    (*pcVar13)(uVar1,uVar8);
    if (bVar4) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar9 = *(long *)(unaff_x22 + 0xd0);
      (**(code **)(*(long *)(unaff_x22 + 0xf8) + 0x38))
                (uVar10,1,1,*(undefined8 *)(unaff_x22 + 0xf0));
      _swift_beginAccess(lVar12 + lVar3,unaff_x22 + 0xa8,0x21,0);
      FUN_1004375f4(uVar10,lVar12 + lVar3,&DAT_100fcb550,&USHORT_100c50b50);
      _swift_endAccess(unaff_x22 + 0xa8);
      *(undefined1 *)(lVar9 + _TtC3MCP15OAuthAuthorizer::clientRegistrationAttempted) = 0;
      lVar9 = lVar9 + _TtC3MCP15OAuthAuthorizer::configuration;
      uVar10 = *(undefined8 *)(lVar9 + 8);
      uVar1 = *(undefined8 *)(lVar9 + 0x10);
      uVar8 = *(undefined8 *)(lVar9 + 0x18);
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      *(undefined8 *)(lVar9 + 0x18) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      uVar2 = *(undefined1 *)(lVar9 + 0x28);
      *(undefined1 *)(lVar9 + 0x28) = 2;
      _swift_bridgeObjectRetain(uVar1);
      FUN_1004b8e9c(uVar10,uVar1,uVar8,uVar11,uVar2);
    }
  }
  lVar3 = _TtC3MCP15OAuthAuthorizer::configuration;
  lVar9 = _TtC3MCP15OAuthAuthorizer::clientRegistrationAttempted;
  lVar12 = *(long *)(unaff_x22 + 0xd0);
  if ((*(byte *)(lVar12 + _TtC3MCP15OAuthAuthorizer::clientRegistrationAttempted) & 1) == 0) {
    *(long *)(unaff_x22 + 0x118) = _TtC3MCP15OAuthAuthorizer::configuration;
    if (*(char *)(lVar12 + lVar3 + 0x28) == '\x02') {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xd8);
      *(undefined1 *)(lVar12 + lVar9) = 1;
      puVar6 = (undefined1 *)(lVar12 + _TtC3MCP15OAuthAuthorizer::clientRegistrar);
      FUN_100004640(puVar6,*(undefined8 *)(puVar6 + 0x18));
      FUN_1000c495c(lVar12 + lVar3,uVar10,FUN_1004bcc58);
      uVar2 = *puVar6;
      plVar7 = (long *)0x280;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x120) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_1004b2178;
      FUN_1004b8fbc(plVar7,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xd8),
                    *(undefined8 *)(unaff_x22 + 0xc0),*(undefined8 *)(unaff_x22 + 200),uVar2);
      return;
    }
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004b2174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b2178 | FUN_1004b2178 */

void FUN_1004b2178(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    FUN_10005241c(*(undefined8 *)(lVar2 + 0xd8),FUN_1004bcc58);
    pcVar1 = FUN_1004b21e4;
  }
  else {
    pcVar1 = FUN_1004b23c4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b21e4 | FUN_1004b21e4 */

void FUN_1004b21e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  char cVar11;
  undefined1 uVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar15 = *(long *)(unaff_x22 + 0x18);
  if (lVar15 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar10 = *(undefined1 *)(unaff_x22 + 0x70);
    lVar16 = *(long *)(unaff_x22 + 0xd0) + *(long *)(unaff_x22 + 0x118);
    cVar11 = *(char *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar7 = *(ulong *)(unaff_x22 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar14 = *(undefined8 *)(lVar16 + 8);
    uVar8 = *(undefined8 *)(lVar16 + 0x10);
    uVar4 = *(undefined8 *)(lVar16 + 0x18);
    uVar9 = *(undefined8 *)(lVar16 + 0x20);
    *(undefined8 *)(lVar16 + 8) = uVar1;
    *(undefined8 *)(lVar16 + 0x10) = uVar5;
    *(undefined8 *)(lVar16 + 0x18) = uVar2;
    *(undefined8 *)(lVar16 + 0x20) = uVar6;
    uVar12 = *(undefined1 *)(lVar16 + 0x28);
    *(undefined1 *)(lVar16 + 0x28) = uVar10;
    FUN_1004b8e20(uVar1,uVar5,uVar2,uVar6,uVar10);
    FUN_1004b8e9c(uVar14,uVar8,uVar4,uVar9,uVar12);
    _swift_bridgeObjectRelease(lVar15);
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar3);
    if ((cVar11 == '\x01') || ((long)uVar7 < 1)) {
      FUN_1004b8e9c(uVar1,uVar5,uVar2,uVar6,uVar10);
    }
    else {
      lVar16 = *(long *)(unaff_x22 + 0x110);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
      lVar15 = *(long *)(unaff_x22 + 0xf8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar17 = *(long *)(unaff_x22 + 0xd0);
      Foundation::Date::init((double)uVar7);
      FUN_1004b8e9c(uVar1,uVar5,uVar2,uVar6,uVar10);
      (**(code **)(lVar15 + 0x38))(uVar14,0,1,uVar3);
      _swift_beginAccess(lVar17 + lVar16,unaff_x22 + 0x90,0x21,0);
      FUN_1004375f4(uVar14,lVar17 + lVar16,&DAT_100fcb550,&USHORT_100c50b50);
      _swift_endAccess(unaff_x22 + 0x90);
    }
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x108));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001004b23c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b23c4 | FUN_1004b23c4 */

void FUN_1004b23c4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd8);
  FUN_10005241c(uVar5,FUN_1004bcc58);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001004b2440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b2444 | FUN_1004b2444 */

void FUN_1004b2444(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  URL UVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0x100) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_1;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x108) = UVar1.unknown;
  lVar3 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x110) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  _swift_task_switch(FUN_1004b24ac,0,0);
  return;
}



/* Address: 0x1004b24ac | FUN_1004b24ac */

/* WARNING: Removing unreachable block (ram,0x0001004b24e4) */

void FUN_1004b24ac(void)

{
  long lVar1;
  long lVar2;
  URL UVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  String SVar12;
  
  FUN_1004b3db0(*(undefined8 *)(unaff_x22 + 0x118),*(undefined8 *)(unaff_x22 + 0xf0));
  lVar8 = *(long *)(unaff_x22 + 0x100);
  lVar5 = *(long *)(unaff_x22 + 0xe8);
  lVar1 = lVar8 + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar2 = 0;
  FUN_1004bcc58();
  uVar6 = *(undefined8 *)(lVar1 + *(int *)(lVar2 + 0x28));
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
  uVar10 = uVar6;
  _swift_bridgeObjectRetain(uVar6);
  _swift_isUniquelyReferenced_nonNull_native();
  UVar3.unknown = (undefined *)0xd000000000000012;
  FUN_1004b4f30(0xd000000000000012,0x8000000100daa4f0,0x79745f746e617267,0xea00000000006570,uVar10);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
  SVar12 = Foundation::URL::get_absoluteString(UVar3);
  uVar10 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  FUN_1004b4f30(SVar12.str,SVar12.bridgeObject,0x656372756f736572,&DAT_e800000000000000,uVar10);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
  FUN_100076688(lVar8 + _TtC3MCP15OAuthAuthorizer::scopeSelector,unaff_x22 + 0x60);
  if (lVar5 == 0) {
    FUN_100004594(unaff_x22 + 0x60);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar5 = *(long *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    FUN_100004640(unaff_x22 + 0x60,lVar5);
    pcVar9 = *(code **)(lVar2 + 0x18);
    uVar10 = uVar7;
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar9)();
    _swift_bridgeObjectRelease(uVar7);
    FUN_100004594(unaff_x22 + 0x60);
    if (lVar5 != 0) {
      uVar7 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native(uVar6);
      FUN_1004b4f30(uVar10,lVar5,0x65706f6373,&DAT_e500000000000000,uVar7);
      *(undefined8 *)(unaff_x22 + 0xd8) = uVar6;
    }
  }
  uVar6 = *(undefined8 *)(lVar1 + 0x10);
  uVar10 = *(undefined8 *)(lVar1 + 8);
  uVar11 = *(undefined8 *)(lVar1 + 0x20);
  uVar7 = *(undefined8 *)(lVar1 + 0x18);
  *(undefined1 *)(unaff_x22 + 0xa8) = *(undefined1 *)(lVar1 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x98) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  FUN_1004b8ab4(unaff_x22 + 0x88,unaff_x22 + 0xb0);
  plVar4 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1004b270c;
  FUN_1004d0304(plVar4,unaff_x22 + 0x10,unaff_x22 + 0xd8,*(undefined8 *)(unaff_x22 + 0x118),
                unaff_x22 + 0x88,*(undefined8 *)(unaff_x22 + 0xf8));
  return;
}



/* Address: 0x1004b270c | FUN_1004b270c */

void FUN_1004b270c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    FUN_1004b8af0(lVar2 + 0x88);
    pcVar1 = FUN_1004b2770;
  }
  else {
    pcVar1 = FUN_1004b27e0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b2770 | FUN_1004b2770 */

void FUN_1004b2770(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  FUN_1004b4220(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xe8));
  FUN_1004b8b94(unaff_x22 + 0x10);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001004b27dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b27e0 | FUN_1004b27e0 */

void FUN_1004b27e0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  FUN_1004b8af0(unaff_x22 + 0x88);
  (**(code **)(lVar1 + 8))(uVar2,uVar3);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xd8));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x118));
                    /* WARNING: Could not recover jumptable at 0x0001004b2840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b2844 | FUN_1004b2844 */

void FUN_1004b2844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  URLQueryItem UVar1;
  ulong uVar2;
  URLComponents UVar3;
  UUID UVar4;
  undefined *puVar5;
  ulong uVar6;
  URL UVar7;
  long lVar8;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x148) = param_4;
  *(undefined8 *)(unaff_x22 + 0x150) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x138) = param_2;
  *(undefined8 *)(unaff_x22 + 0x140) = param_3;
  *(undefined8 *)(unaff_x22 + 0x130) = param_1;
  UVar1 = Foundation::URLQueryItem::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x158) = UVar1.unknown;
  lVar8 = *(long *)(UVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x160) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar2;
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x170) = UVar3.unknown;
  lVar8 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x178) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar2;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x188) = UVar4.unknown;
  lVar8 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 400) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar2;
  puVar5 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar6;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar2;
  puVar5 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  uVar2 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar6;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b8) = uVar2;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1c0) = UVar7.unknown;
  lVar8 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0x1c8) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar6;
  uVar6 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar6;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x208) = uVar2;
  _swift_task_switch(FUN_1004b29e8,0,0);
  return;
}



/* Address: 0x1004b29e8 | FUN_1004b29e8 */

/* WARNING: Removing unreachable block (ram,0x0001004b2cc8) */
/* WARNING: Removing unreachable block (ram,0x0001004b2dcc) */
/* WARNING: Removing unreachable block (ram,0x0001004b2cd4) */
/* WARNING: Removing unreachable block (ram,0x0001004b2b1c) */

void FUN_1004b29e8(void)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  char *pcVar6;
  UUID UVar7;
  undefined *puVar8;
  URLQueryItem UVar9;
  long *plVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  URL UVar13;
  undefined8 uVar14;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  URLComponents UVar28;
  undefined8 uVar29;
  URLComponents *this;
  long lVar30;
  long lVar31;
  long unaff_x22;
  long lVar32;
  long lVar33;
  code *pcVar34;
  code *pcVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  code *pcVar40;
  String SVar41;
  String SVar42;
  void *pvVar15;
  
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar25 = *(long *)(unaff_x22 + 0x1c8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1b8);
  lVar30 = *(long *)(unaff_x22 + 0x140);
  lVar4 = 0;
  FUN_1004ce850();
  FUN_1000f8cac(lVar30 + *(int *)(lVar4 + 0x14),uVar24,&DAT_100fcb378,&DAT_100c50170);
  pcVar36 = *(code **)(lVar25 + 0x30);
  (*pcVar36)(uVar24,1,uVar27);
  if ((int)uVar24 == 1) {
    puVar5 = *(undefined8 **)(unaff_x22 + 0x1b8);
    FUN_1000fb4c4(puVar5,&DAT_100fcb378,&DAT_100c50170);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,puVar5,0,0);
    *puVar5 = 3;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    *(undefined1 *)(puVar5 + 4) = 0xe;
    _swift_willThrow();
  }
  else {
    uVar27 = *(undefined8 *)(unaff_x22 + 0x208);
    lVar25 = *(long *)(unaff_x22 + 0x150);
    pcVar40 = *(code **)(*(long *)(unaff_x22 + 0x1c8) + 0x20);
    (*pcVar40)(uVar27,*(undefined8 *)(unaff_x22 + 0x1b8),*(undefined8 *)(unaff_x22 + 0x1c0));
    puVar12 = (undefined1 *)(lVar25 + _TtC3MCP15OAuthAuthorizer::urlValidator);
    FUN_100004640(puVar12,*(undefined8 *)(puVar12 + 0x18));
    FUN_1004d0d18(uVar27,0xd000000000000016,0x8000000100daa510,*puVar12);
    UVar28.unknown = *(undefined **)(unaff_x22 + 0x1a8);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar25 = *(long *)(unaff_x22 + 0x178);
    Foundation::URLComponents::_init(SUB81(*(undefined8 *)(unaff_x22 + 0x208),0));
    pcVar16 = *(code **)(lVar25 + 0x30);
    puVar12 = &DAT_00000001;
    (*pcVar16)(UVar28.unknown,1,uVar27);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1a8);
    if ((int)UVar28.unknown == 1) {
      FUN_1000fb4c4(uVar27,&DAT_100fcb380,&DAT_100c504a0);
    }
    else {
      uVar24 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar25 = *(long *)(unaff_x22 + 0x178);
      Foundation::URLComponents::_get_host(UVar28);
      (**(code **)(lVar25 + 8))(uVar27,uVar24);
      if (puVar12 != (undefined1 *)0x0) {
        SVar41.bridgeObject = puVar12;
        SVar41.str = UVar28.unknown;
        SVar41 = Swift::String::lowercased(SVar41);
        UVar13.unknown = SVar41.bridgeObject;
        pcVar6 = SVar41.str;
        _swift_bridgeObjectRelease(puVar12);
        FUN_1004d19e4(pcVar6,UVar13.unknown);
        _swift_bridgeObjectRelease();
        if (((ulong)pcVar6 & 1) != 0) {
          uVar24 = *(undefined8 *)(unaff_x22 + 0x208);
          uVar27 = *(undefined8 *)(unaff_x22 + 0x1c0);
          lVar25 = *(long *)(unaff_x22 + 0x1c8);
          SVar41 = Foundation::URL::get_absoluteString(UVar13);
          pcVar6 = SVar41.str;
          FUN_1004a3fb4();
          _swift_allocError(&DAT_100ed9e90,pcVar6,0,0);
          pcVar6[0] = '\x16';
          pcVar6[1] = '\0';
          pcVar6[2] = '\0';
          pcVar6[3] = '\0';
          pcVar6[4] = '\0';
          pcVar6[5] = '\0';
          pcVar6[6] = '\0';
          pcVar6[7] = -0x30;
          pcVar6[8] = '\x10';
          pcVar6[9] = -0x5b;
          pcVar6[10] = -0x26;
          pcVar6[0xb] = '\0';
          pcVar6[0xc] = '\x01';
          pcVar6[0xd] = '\0';
          pcVar6[0xe] = '\0';
          pcVar6[0xf] = -0x80;
          *(String *)(pcVar6 + 0x10) = SVar41;
          pcVar6[0x20] = '\x05';
          _swift_willThrow();
          (**(code **)(lVar25 + 8))(uVar24,uVar27);
          goto LAB_1004b2cd8;
        }
      }
    }
    lVar25 = _TtC3MCP15OAuthAuthorizer::configuration;
    uVar24 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x1c0);
    lVar4 = *(long *)(unaff_x22 + 0x1c8);
    *(long *)(unaff_x22 + 0x210) = _TtC3MCP15OAuthAuthorizer::configuration;
    lVar25 = *(long *)(unaff_x22 + 0x150) + lVar25;
    lVar30 = 0;
    FUN_1004bcc58();
    *(long *)(unaff_x22 + 0x218) = lVar30;
    iVar3 = *(int *)(lVar30 + 0x24);
    pcVar34 = *(code **)(lVar4 + 0x10);
    *(code **)(unaff_x22 + 0x220) = pcVar34;
    (*pcVar34)(uVar24,lVar25 + iVar3,uVar27);
    FUN_1004d1e0c(uVar24);
    pcVar35 = *(code **)(lVar4 + 8);
    *(code **)(unaff_x22 + 0x228) = pcVar35;
    (*pcVar35)(uVar24);
    FUN_1004d3fa0(*(undefined8 *)(unaff_x22 + 0x140));
    uVar24 = 0x40;
    FUN_1004d4108();
    *(undefined8 *)(unaff_x22 + 0x230) = uVar24;
    *(undefined8 *)(unaff_x22 + 0x238) = uVar27;
    uVar14 = uVar27;
    FUN_1004d429c();
    uVar38 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar4 = *(long *)(unaff_x22 + 400);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar32 = *(long *)(unaff_x22 + 0x150);
    UVar7 = Foundation::UUID::init();
    SVar41 = Foundation::UUID::get_uuidString(UVar7);
    pvVar15 = SVar41.bridgeObject;
    *(void **)(unaff_x22 + 0x240) = pvVar15;
    (**(code **)(lVar4 + 8))(uVar24,uVar26);
    (*pcVar34)(uVar23,lVar25 + *(int *)(lVar30 + 0x24),uVar19);
    lVar4 = _TtC3MCP15OAuthAuthorizer::scopeSelector;
    uVar24 = *(undefined8 *)(lVar25 + 0x10);
    *(long *)(unaff_x22 + 0x248) = _TtC3MCP15OAuthAuthorizer::scopeSelector;
    _swift_bridgeObjectRetain(uVar24);
    Foundation::URLComponents::_init(SUB81(uVar38,0));
    (*pcVar16)(uVar29,1,uVar20);
    puVar5 = *(undefined8 **)(unaff_x22 + 0x1a0);
    if ((int)uVar29 == 1) {
      uVar29 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x1c0);
      FUN_1000fb4c4(puVar5,&DAT_100fcb380,&DAT_100c504a0);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar5,0,0);
      *puVar5 = 2;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0xe;
      _swift_willThrow();
      _swift_bridgeObjectRelease(uVar27);
      _swift_bridgeObjectRelease(pvVar15);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(uVar24);
      (*pcVar35)(uVar19,uVar26);
      (*pcVar35)(uVar29,uVar26);
    }
    else {
      lVar31 = *(long *)(unaff_x22 + 0x160);
      lVar2 = *(long *)(unaff_x22 + 0x138);
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x180),puVar5,*(undefined8 *)(unaff_x22 + 0x170));
      puVar8 = &DAT_100fcb390;
      FUN_1000f7830(&DAT_100fcb390,&DAT_100c50180);
      lVar33 = *(long *)(lVar31 + 0x48);
      uVar21 = (ulong)*(byte *)(lVar31 + 0x50);
      _swift_allocObject();
      *(undefined8 *)(puVar8 + 0x18) = 0xe;
      *(undefined8 *)(puVar8 + 0x10) = 7;
      Foundation::URLQueryItem::_init();
      UVar9 = Foundation::URLQueryItem::_init();
      SVar42 = Foundation::URL::get_absoluteString((URL)UVar9.unknown);
      Foundation::URLQueryItem::_init();
      _swift_bridgeObjectRelease(SVar42.bridgeObject);
      UVar9 = Foundation::URLQueryItem::_init();
      SVar42 = Foundation::URL::get_absoluteString((URL)UVar9.unknown);
      Foundation::URLQueryItem::_init();
      _swift_bridgeObjectRelease(SVar42.bridgeObject);
      Foundation::URLQueryItem::_init();
      Foundation::URLQueryItem::_init();
      FUN_100076688(lVar32 + lVar4,unaff_x22 + 0x60);
      if (lVar2 == 0) {
        FUN_100004594(unaff_x22 + 0x60);
      }
      else {
        uVar26 = *(undefined8 *)(unaff_x22 + 0x138);
        lVar4 = *(long *)(unaff_x22 + 0x78);
        lVar32 = *(long *)(unaff_x22 + 0x80);
        FUN_100004640(unaff_x22 + 0x60,lVar4);
        pcVar16 = *(code **)(lVar32 + 0x18);
        _swift_bridgeObjectRetain(uVar26);
        (*pcVar16)();
        _swift_bridgeObjectRelease(uVar26);
        FUN_100004594(unaff_x22 + 0x60);
        if (lVar4 != 0) {
          Foundation::URLQueryItem::_init();
          _swift_bridgeObjectRelease(lVar4);
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puVar11 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_1004a42cc(puVar11,uVar1 + 1,1,puVar8);
          }
          lVar4 = *(long *)(unaff_x22 + 0x160);
          uVar26 = *(undefined8 *)(unaff_x22 + 0x168);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x158);
          *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
          (**(code **)(lVar4 + 0x20))
                    (puVar11 + uVar1 * lVar33 + (uVar21 + 0x20 & (uVar21 ^ 0xffffffffffffffff)),
                     uVar26,uVar29);
          puVar8 = puVar11;
        }
      }
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1c0);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
      this = *(URLComponents **)(unaff_x22 + 0x180);
      UVar28.unknown = puVar8;
      _swift_bridgeObjectRetain();
      Foundation::URLComponents::_set_queryItems(this);
      Foundation::URLComponents::_get_url(UVar28);
      (*pcVar36)(uVar26,1,uVar29);
      if ((int)uVar26 != 1) {
        uVar27 = *(undefined8 *)(unaff_x22 + 0x1f0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1f8);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x1e0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1e8);
        uVar38 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1b0);
        lVar4 = *(long *)(unaff_x22 + 0x178);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x180);
        uVar39 = *(undefined8 *)(unaff_x22 + 0x170);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar24);
        (**(code **)(lVar4 + 8))(uVar20,uVar39);
        (*pcVar35)(uVar27,uVar38);
        _swift_bridgeObjectRelease(puVar8);
        (*pcVar40)(uVar19,uVar23,uVar38);
        (*pcVar40)(uVar29,uVar19,uVar38);
        (*pcVar34)(uVar26,lVar25 + *(int *)(lVar30 + 0x24),uVar38);
        FUN_1000f8cac(lVar25 + *(int *)(lVar30 + 0x34),unaff_x22 + 0x88,&DAT_100fcb4c8,
                      &DAT_100c504b0);
        plVar10 = (long *)0x110;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x250) = plVar10;
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_1004b3444;
        FUN_1004a5ba4(*(undefined8 *)(unaff_x22 + 0x1f8),*(undefined8 *)(unaff_x22 + 0x1e0),
                      SVar41.str,pvVar15,unaff_x22 + 0x88,*(undefined8 *)(unaff_x22 + 0x148));
        return;
      }
      uVar19 = *(undefined8 *)(unaff_x22 + 0x208);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1c0);
      puVar5 = *(undefined8 **)(unaff_x22 + 0x1b0);
      lVar25 = *(long *)(unaff_x22 + 0x178);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x180);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x170);
      FUN_1000fb4c4(puVar5,&DAT_100fcb378,&DAT_100c50170);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar5,0,0);
      *puVar5 = 2;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
      *(undefined1 *)(puVar5 + 4) = 0xe;
      _swift_willThrow();
      _swift_bridgeObjectRelease(uVar27);
      _swift_bridgeObjectRelease(pvVar15);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(uVar24);
      (**(code **)(lVar25 + 8))(uVar26,uVar23);
      (*pcVar35)(uVar20,uVar29);
      (*pcVar35)(uVar19,uVar29);
      _swift_bridgeObjectRelease(puVar8);
    }
  }
LAB_1004b2cd8:
  uVar27 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar37 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar39 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x168);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar27);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar37);
  _swift_task_dealloc(uVar38);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar39);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001004b2da4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b3444 | FUN_1004b3444 */

void FUN_1004b3444(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  code *pcVar4;
  
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar3 + 600) = param_1;
  *(undefined8 *)(lVar3 + 0x260) = param_2;
  *(long *)(lVar3 + 0x268) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x250));
  if (unaff_x20 == 0) {
    pcVar4 = *(code **)(lVar3 + 0x228);
    uVar2 = *(undefined8 *)(lVar3 + 0x1e0);
    uVar1 = *(undefined8 *)(lVar3 + 0x1c0);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x240));
    FUN_1000fb4c4(lVar3 + 0x88,&DAT_100fcb4c8,&DAT_100c504b0);
    (*pcVar4)(uVar2,uVar1);
    pcVar4 = FUN_1004b3500;
  }
  else {
    uVar1 = *(undefined8 *)(lVar3 + 0x238);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 0x240));
    _swift_bridgeObjectRelease(uVar1);
    pcVar4 = FUN_1004b397c;
  }
  _swift_task_switch(pcVar4,0,0);
  return;
}



/* Address: 0x1004b3500 | FUN_1004b3500 */

void FUN_1004b3500(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  URL UVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  String SVar26;
  
  lVar16 = *(long *)(unaff_x22 + 0x268);
  FUN_1004b3db0(*(undefined8 *)(unaff_x22 + 0x1d8),*(undefined8 *)(unaff_x22 + 0x140));
  if (lVar16 != 0) {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
    pcVar20 = *(code **)(unaff_x22 + 0x228);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x238));
    _swift_bridgeObjectRelease(uVar15);
    (*pcVar20)(uVar18,uVar19);
    (*pcVar20)(uVar14,uVar19);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
    uVar24 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1b0);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x1a0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001004b3644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar22 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar24 = *(undefined8 *)(unaff_x22 + 600);
  lVar13 = *(long *)(unaff_x22 + 0x248);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x230);
  pcVar20 = *(code **)(unaff_x22 + 0x228);
  pcVar9 = *(code **)(unaff_x22 + 0x220);
  lVar25 = *(long *)(unaff_x22 + 0x218);
  puVar17 = *(undefined **)(unaff_x22 + 0x1d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1c0);
  lVar12 = *(long *)(unaff_x22 + 0x150);
  lVar11 = *(long *)(unaff_x22 + 0x138);
  lVar16 = lVar12 + *(long *)(unaff_x22 + 0x210);
  uVar18 = *(undefined8 *)(lVar16 + *(int *)(lVar25 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  uVar14 = uVar18;
  _swift_bridgeObjectRetain(uVar18);
  _swift_isUniquelyReferenced_nonNull_native();
  FUN_1004b4f30(0xd000000000000012,0x8000000100da8430,0x79745f746e617267,0xea00000000006570,uVar14);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  uVar14 = uVar18;
  _swift_isUniquelyReferenced_nonNull_native(uVar18);
  FUN_1004b4f30(uVar24,uVar22,0x65646f63,&DAT_e400000000000000,uVar14);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  uVar14 = uVar18;
  _swift_isUniquelyReferenced_nonNull_native(uVar18);
  FUN_1004b4f30(uVar21,uVar15,0x7265765f65646f63,0xed00007265696669,uVar14);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  UVar5.unknown = puVar17;
  (*pcVar9)(puVar17,lVar16 + *(int *)(lVar25 + 0x24),uVar19);
  SVar26 = Foundation::URL::get_absoluteString(UVar5);
  UVar5.unknown = SVar26.str;
  (*pcVar20)(puVar17,uVar19);
  uVar14 = uVar18;
  _swift_isUniquelyReferenced_nonNull_native(uVar18);
  FUN_1004b4f30(UVar5.unknown,SVar26.bridgeObject,0x7463657269646572,0xec0000006972755f,uVar14);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  SVar26 = Foundation::URL::get_absoluteString(UVar5);
  uVar14 = uVar18;
  _swift_isUniquelyReferenced_nonNull_native(uVar18);
  FUN_1004b4f30(SVar26.str,SVar26.bridgeObject,0x656372756f736572,&DAT_e800000000000000,uVar14);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
  FUN_100076688(lVar12 + lVar13,unaff_x22 + 0xb0);
  if (lVar11 == 0) {
    FUN_100004594(unaff_x22 + 0xb0);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar16 = *(long *)(unaff_x22 + 200);
    lVar11 = *(long *)(unaff_x22 + 0xd0);
    FUN_100004640(unaff_x22 + 0xb0,lVar16);
    pcVar20 = *(code **)(lVar11 + 0x18);
    uVar14 = uVar15;
    _swift_bridgeObjectRetain(uVar15);
    (*pcVar20)();
    _swift_bridgeObjectRelease(uVar15);
    FUN_100004594(unaff_x22 + 0xb0);
    if (lVar16 != 0) {
      uVar15 = uVar18;
      _swift_isUniquelyReferenced_nonNull_native(uVar18);
      FUN_1004b4f30(uVar14,lVar16,0x65706f6373,&DAT_e500000000000000,uVar15);
      *(undefined8 *)(unaff_x22 + 0x128) = uVar18;
    }
  }
  lVar16 = *(long *)(unaff_x22 + 0x150) + *(long *)(unaff_x22 + 0x210);
  uVar4 = *(undefined1 *)(lVar16 + 0x28);
  uVar15 = *(undefined8 *)(lVar16 + 0x20);
  uVar14 = *(undefined8 *)(lVar16 + 0x18);
  uVar18 = *(undefined8 *)(lVar16 + 8);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(lVar16 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xd8) = uVar18;
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar14;
  *(undefined1 *)(unaff_x22 + 0xf8) = uVar4;
  FUN_1004b8ab4(unaff_x22 + 0xd8,unaff_x22 + 0x100);
  plVar6 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x270) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1004b3ac4;
  FUN_1004d0304(plVar6,unaff_x22 + 0x10,unaff_x22 + 0x128,*(undefined8 *)(unaff_x22 + 0x1d8),
                unaff_x22 + 0xd8,*(undefined8 *)(unaff_x22 + 0x148));
  return;
}



/* Address: 0x1004b397c | FUN_1004b397c */

void FUN_1004b397c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  pcVar14 = *(code **)(unaff_x22 + 0x228);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
  FUN_1000fb4c4(unaff_x22 + 0x88,&DAT_100fcb4c8,&DAT_100c504b0);
  (*pcVar14)(uVar12,uVar13);
  (*pcVar14)(uVar10,uVar13);
  (*pcVar14)(uVar11,uVar13);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001004b3ac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b3ac4 | FUN_1004b3ac4 */

void FUN_1004b3ac4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x270));
  if (unaff_x20 == 0) {
    FUN_1004b8af0(lVar2 + 0xd8);
    pcVar1 = FUN_1004b3b28;
  }
  else {
    pcVar1 = FUN_1004b3c70;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1004b3b28 | FUN_1004b3b28 */

void FUN_1004b3b28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  pcVar16 = *(code **)(unaff_x22 + 0x228);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x168);
  FUN_1004b4220(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x138));
  FUN_1004b8b94(unaff_x22 + 0x10);
  (*pcVar16)(uVar3,uVar10);
  (*pcVar16)(uVar1,uVar10);
  (*pcVar16)(uVar17,uVar10);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x128));
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001004b3c6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b3c70 | FUN_1004b3c70 */

void FUN_1004b3c70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  pcVar14 = *(code **)(unaff_x22 + 0x228);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1c0);
  FUN_1004b8af0(unaff_x22 + 0xd8);
  (*pcVar14)(uVar12,uVar13);
  (*pcVar14)(uVar10,uVar13);
  (*pcVar14)(uVar11,uVar13);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x128));
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x168);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x208));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001004b3dac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004b3db0 | FUN_1004b3db0 */

void FUN_1004b3db0(undefined8 param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  URL UVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  URLComponents UVar7;
  URLComponents UVar8;
  char *pcVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  long lVar13;
  long unaff_x20;
  long unaff_x21;
  long lVar14;
  code *pcVar15;
  undefined8 *puVar16;
  String SVar17;
  undefined *local_80 [2];
  long local_70;
  long local_68;
  URL UVar11;
  
  puVar2 = &DAT_100fcb380;
  local_80[1] = (undefined *)param_1;
  local_68 = param_2;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fcb378;
  local_80[0] = (undefined *)((long)local_80 - extraout_x8);
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  puVar16 = (undefined8 *)
            ((undefined *)((long)local_80 - extraout_x8) +
            -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar16 - extraout_x12;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar12 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_00;
  lVar5 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration;
  lVar4 = 0;
  FUN_1004bcc58();
  iVar1 = *(int *)(lVar4 + 0x1c);
  lVar4 = 0;
  FUN_1004bcbcc();
  FUN_1000f8cac(lVar5 + (long)iVar1 + (long)*(int *)(lVar4 + 0x18),lVar13,&DAT_100fcb378,
                &DAT_100c50170);
  pcVar15 = *(code **)(lVar14 + 0x30);
  lVar5 = lVar13;
  (*pcVar15)(lVar13,1,UVar3.unknown);
  if ((int)lVar5 == 1) {
    FUN_1000fb4c4(lVar13,&DAT_100fcb378,&DAT_100c50170);
    lVar5 = 0;
    FUN_1004ce850();
    FUN_1000f8cac(local_68 + *(int *)(lVar5 + 0x18),puVar16,&DAT_100fcb378,&DAT_100c50170);
    puVar6 = puVar16;
    (*pcVar15)(puVar16,1,UVar3.unknown);
    lVar12 = local_70;
    if ((int)puVar6 == 1) {
      FUN_1000fb4c4(puVar16,&DAT_100fcb378,&DAT_100c50170);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar16,0,0);
      *puVar16 = 3;
      puVar16[1] = 0;
      puVar16[2] = 0;
      puVar16[3] = 0;
      *(undefined1 *)(puVar16 + 4) = 0xe;
      _swift_willThrow();
      return;
    }
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(local_70,puVar16,UVar3.unknown);
    puVar10 = (undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::urlValidator);
    FUN_100004640(puVar10,*(undefined8 *)(puVar10 + 0x18));
    FUN_1004d0d18(lVar12,0x6e65206e656b6f54,0xee00746e696f7064,*puVar10);
    puVar2 = local_80[0];
    if (unaff_x21 == 0) {
      Foundation::URLComponents::_init(SUB81(lVar12,0));
      UVar7 = Foundation::URLComponents::typeMetadataAccessor();
      lVar5 = *(long *)(UVar7.unknown + -8);
      puVar10 = &DAT_00000001;
      UVar8.unknown = puVar2;
      (**(code **)(lVar5 + 0x30))(puVar2,1,UVar7.unknown);
      if ((int)UVar8.unknown == 1) {
        FUN_1000fb4c4(puVar2,&DAT_100fcb380,&DAT_100c504a0);
      }
      else {
        Foundation::URLComponents::_get_host(UVar8);
        (**(code **)(lVar5 + 8))(puVar2,UVar7.unknown);
        if (puVar10 != (undefined1 *)0x0) {
          SVar17.bridgeObject = puVar10;
          SVar17.str = UVar8.unknown;
          SVar17 = Swift::String::lowercased(SVar17);
          UVar11.unknown = SVar17.bridgeObject;
          pcVar9 = SVar17.str;
          _swift_bridgeObjectRelease(puVar10);
          FUN_1004d19e4(pcVar9,UVar11.unknown);
          _swift_bridgeObjectRelease();
          lVar12 = local_70;
          if (((ulong)pcVar9 & 1) != 0) {
            SVar17 = Foundation::URL::get_absoluteString(UVar11);
            pcVar9 = SVar17.str;
            FUN_1004a3fb4();
            _swift_allocError(&DAT_100ed9e90,pcVar9,0,0);
            pcVar9[8] = 'd';
            pcVar9[9] = 'p';
            pcVar9[10] = 'o';
            pcVar9[0xb] = 'i';
            pcVar9[0xc] = 'n';
            pcVar9[0xd] = 't';
            pcVar9[0xe] = '\0';
            pcVar9[0xf] = -0x12;
            pcVar9[0] = 'T';
            pcVar9[1] = 'o';
            pcVar9[2] = 'k';
            pcVar9[3] = 'e';
            pcVar9[4] = 'n';
            pcVar9[5] = ' ';
            pcVar9[6] = 'e';
            pcVar9[7] = 'n';
            *(String *)(pcVar9 + 0x10) = SVar17;
            pcVar9[0x20] = '\x05';
            _swift_willThrow();
            pcVar15 = *(code **)(lVar14 + 8);
            goto LAB_1004b40b8;
          }
        }
      }
      (*pcVar15)(local_80[1],local_70,UVar3.unknown);
      return;
    }
    pcVar15 = *(code **)(lVar14 + 8);
  }
  else {
    pcVar15 = *(code **)(lVar14 + 0x20);
    (*pcVar15)(lVar12,lVar13,UVar3.unknown);
    puVar10 = (undefined1 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::urlValidator);
    FUN_100004640(puVar10,*(undefined8 *)(puVar10 + 0x18));
    FUN_1004d0d18(lVar12,0xd000000000000019,0x8000000100daa4d0,*puVar10);
    if (unaff_x21 == 0) {
      (*pcVar15)(local_80[1],lVar12,UVar3.unknown);
      return;
    }
    pcVar15 = *(code **)(lVar14 + 8);
  }
LAB_1004b40b8:
  (*pcVar15)(lVar12,UVar3.unknown);
  return;
}



/* Address: 0x1004b4220 | FUN_1004b4220 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1004b4220(undefined8 *param_1,undefined *param_2)

{
  long lVar1;
  ulong *puVar2;
  long lVar3;
  char cVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  Date DVar10;
  Date DVar11;
  undefined8 uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  ulong local_d0;
  long local_c0;
  undefined8 auStack_b8 [2];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  lVar9 = 0;
  FUN_1004c78dc();
  local_c0 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar9 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined8 *)((long)&local_d0 + lVar9);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  uVar16 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar19 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = uVar16 - extraout_x8_01;
  lVar18 = param_1[7];
  if (lVar18 == 0) {
    puVar19 = PTR___swiftEmptySetSingleton_100eae0e8;
    if (param_2 != (undefined *)0x0) {
      puVar19 = param_2;
    }
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    puVar19 = (undefined *)param_1[6];
    lVar1 = unaff_x20 + _TtC3MCP15OAuthAuthorizer::scopeSelector;
    uVar12 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    local_d0 = uVar16;
    FUN_100004640(lVar1,uVar12);
    uVar16 = local_d0;
    (**(code **)(lVar3 + 0x10))(puVar19,lVar18,uVar12,lVar3);
  }
  cVar4 = *(char *)(param_1 + 5);
  if (cVar4 != '\x01') {
    lVar18 = param_1[4];
    DVar11 = Foundation::Date::init();
    Foundation::Date::addingTimeInterval((double)lVar18,DVar11);
    (**(code **)(lVar14 + 8))(uVar16,DVar10.unknown);
  }
  lVar1 = local_c0;
  (**(code **)(lVar14 + 0x38))(lVar20,cVar4 == '\x01',1,DVar10.unknown);
  uVar12 = *(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage);
  lVar14 = ((undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage))[1];
  FUN_1000f8cac(lVar20,(long)puVar13 + (long)*(int *)(lVar1 + 0x18),&DAT_100fcb550,&USHORT_100c50b50
               );
  lVar18 = _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer;
  _swift_beginAccess(unaff_x20 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,auStack_a8,0
                     ,0);
  FUN_1000f8cac(unaff_x20 + lVar18,(long)puVar13 + (long)*(int *)(lVar1 + 0x20),&DAT_100fcb378,
                &DAT_100c50170);
  uVar15 = *(ulong *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration + 8);
  uVar17 = *(ulong *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration + 0x10);
  _swift_bridgeObjectRetain(uVar17);
  uVar16 = uVar15 & 0xffffffffffff;
  if ((uVar17 & 0x2000000000000000) != 0) {
    uVar16 = uVar17 >> 0x38 & 0xf;
  }
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  if (uVar16 == 0) {
    FUN_10000ca28(&uStack_80,auStack_b8);
    FUN_1000f8cac(&local_90,auStack_b8,&DAT_100fcb6e0,&DAT_100c50490);
    _swift_bridgeObjectRelease(uVar17);
    uVar15 = 0;
    uVar17 = 0;
  }
  else {
    FUN_10000ca28(&uStack_80,auStack_b8);
    FUN_1000f8cac(&local_90,auStack_b8,&DAT_100fcb6e0,&DAT_100c50490);
  }
  _swift_getObjectType(uVar12);
  uVar8 = uStack_80;
  uVar7 = uStack_88;
  uVar6 = local_90;
  *(undefined8 *)(auStack_a8 + lVar9 + -0x20) = uStack_78;
  *puVar13 = uVar8;
  *(undefined8 *)(auStack_a8 + lVar9 + -0x18) = 0x726572616542;
  *(undefined1 **)((long)auStack_b8 + lVar9) = &DAT_e600000000000000;
  *(undefined **)((long)puVar13 + (long)*(int *)(lVar1 + 0x1c)) = puVar19;
  puVar5 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar1 + 0x24));
  puVar5[1] = uVar7;
  *puVar5 = uVar6;
  puVar2 = (ulong *)((long)puVar13 + (long)*(int *)(lVar1 + 0x28));
  *puVar2 = uVar15;
  puVar2[1] = uVar17;
  (**(code **)(lVar14 + 8))(puVar13,uVar12,lVar14);
  FUN_10005241c(puVar13,FUN_1004c78dc);
  FUN_1000fb4c4(lVar20,&DAT_100fcb550,&USHORT_100c50b50);
  return;
}



/* Address: 0x1004b4584 | FUN_1004b4584 */

void FUN_1004b4584(undefined8 param_1,bool param_2)

{
  bool bVar1;
  undefined *puVar2;
  URLComponents UVar3;
  undefined1 *puVar4;
  URLComponents UVar5;
  _StringGuts _Var6;
  URLComponents UVar7;
  URL UVar8;
  _StringGuts _Var10;
  long extraout_x8;
  long extraout_x8_00;
  URLComponents *this;
  long lVar11;
  String SVar12;
  String SVar13;
  _StringGuts _Var9;
  
  puVar2 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar7.unknown = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  this = (URLComponents *)(UVar7.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::_init(param_2);
  puVar4 = UVar7.unknown;
  (**(code **)(lVar11 + 0x30))(UVar7.unknown,1,UVar3.unknown);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(UVar7.unknown,&DAT_100fcb380,&DAT_100c504a0);
  }
  else {
    UVar5.unknown = (undefined *)this;
    (**(code **)(lVar11 + 0x20))(this,UVar7.unknown,UVar3.unknown);
    Foundation::URLComponents::_get_scheme(UVar5);
    if (UVar7.unknown != (undefined1 *)0x0) {
      SVar12.bridgeObject = UVar7.unknown;
      SVar12.str = UVar5.unknown;
      SVar12 = Swift::String::lowercased(SVar12);
      _Var9.unknown = SVar12.bridgeObject;
      _Var6.unknown = SVar12.str;
      _Var10.unknown = _Var9.unknown;
      _swift_bridgeObjectRelease();
      Foundation::URLComponents::_get_host(UVar7);
      if (_Var10.unknown != (undefined *)0x0) {
        SVar13.bridgeObject = _Var10.unknown;
        SVar13.str = UVar7.unknown;
        SVar12 = Swift::String::lowercased(SVar13);
        _swift_bridgeObjectRelease(_Var10.unknown);
        if ((((_Var6.unknown != (undefined *)0x70747468 || _Var9.unknown != &DAT_e400000000000000)
             && (bVar1 = Swift::_stringCompareWithSmolCheck
                                   (_Var6,_Var9,(_StringComparisonResult)0x68), !bVar1)) &&
            (_Var6.unknown != (undefined *)0x7370747468 || _Var9.unknown != &DAT_e500000000000000))
           && (bVar1 = Swift::_stringCompareWithSmolCheck(_Var6,_Var9,(_StringComparisonResult)0x68)
              , !bVar1)) {
          (**(code **)(lVar11 + 8))(this,UVar3.unknown);
          _swift_bridgeObjectRelease(_Var9.unknown);
          _swift_bridgeObjectRelease(SVar12.bridgeObject);
          goto LAB_1004b47a8;
        }
        Foundation::URLComponents::_set_scheme(this);
        Foundation::URLComponents::_set_host(this);
        Foundation::URLComponents::_set_query(this);
        UVar7.unknown = (undefined *)0x0;
        Foundation::URLComponents::_set_fragment(this);
        SVar12 = Foundation::URLComponents::get_path(UVar7);
        UVar7.unknown = SVar12.bridgeObject;
        if (SVar12.str == (undefined *)0x2f && UVar7.unknown == (undefined *)0xe100000000000000) {
          _swift_bridgeObjectRelease(UVar7.unknown);
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar12.str,(_StringGuts)UVar7.unknown,
                             (_StringComparisonResult)0x2f);
          _swift_bridgeObjectRelease();
          if (!bVar1) goto LAB_1004b4800;
        }
        UVar7.unknown = (undefined *)0x0;
        Foundation::URLComponents::set_path(this,(String)(ZEXT816(0xe000000000000000) << 0x40));
LAB_1004b4800:
        Foundation::URLComponents::_get_url(UVar7);
        (**(code **)(lVar11 + 8))(this,UVar3.unknown);
        return;
      }
      _swift_bridgeObjectRelease(_Var9.unknown);
    }
    (**(code **)(lVar11 + 8))(this,UVar3.unknown);
  }
LAB_1004b47a8:
  UVar8 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar8.unknown + -8) + 0x38))(param_1,1,1,UVar8.unknown);
  return;
}



/* Address: 0x1004b4840 | FUN_1004b4840 */

void FUN_1004b4840(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  FUN_10005241c(unaff_x20 + _TtC3MCP15OAuthAuthorizer::configuration,FUN_1004bcc58);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenStorage));
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP15OAuthAuthorizer::selectedAuthorizationServer,&DAT_100fcb378,
                &DAT_100c50170);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::protectedResourceMetadata);
  FUN_1004b8bc8(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP15OAuthAuthorizer::authorizationServerMetadata,&DAT_100fcb588,
                &DAT_100c503a8);
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP15OAuthAuthorizer::cachedProtectedResourceMetadataURL,
                &DAT_100fcb378,&DAT_100c50170);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _TtC3MCP15OAuthAuthorizer::stepUpAttempts))
  ;
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP15OAuthAuthorizer::clientSecretExpiresAt,&DAT_100fcb550,
                &USHORT_100c50b50);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::scopeSelector);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::challengeParser);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::urlValidator);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::discoveryClient);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::tokenEndpointClient);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::clientRegistrar);
  FUN_100004594(unaff_x20 + _TtC3MCP15OAuthAuthorizer::authCodeFlow);
  return;
}



/* Address: 0x1004b49a4 | FUN_1004b49a4 */

void FUN_1004b49a4(void)

{
  FUN_1004b4840();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1004b49c8 | thunk_FUN_1004a78e8 */

void thunk_FUN_1004a78e8(void)

{
  FUN_1004a78e8();
  return;
}



/* Address: 0x1004b49cc | FUN_1004b49cc */

void FUN_1004b49cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x520;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004b4a58;
  FUN_1004a81b4(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x1004b4a58 | FUN_1004b4a58 */

void FUN_1004b4a58(uint param_1)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 == 0) {
    param_1 = param_1 & 1;
  }
  else {
    param_1 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004b4aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Address: 0x1004b4aa8 | FUN_1004b4aa8 */

void FUN_1004b4aa8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1004b0ee8(param_1,param_2);
  return;
}



/* Address: 0x1004b4b04 | FUN_1004b4b04 */

void FUN_1004b4b04(char *param_1,undefined *param_2,undefined8 param_3)

{
  Hasher into;
  __int64 _Var1;
  Hasher HVar2;
  long unaff_x20;
  String SVar3;
  undefined1 auStack_88 [72];
  
  HVar2.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  if (((uint)param_3 & 0xff) == 1) {
    Swift::Hasher::_combine(1,HVar2);
    into.unknown = param_1;
    Swift::Hasher::_combine((__uint64)param_1,HVar2);
  }
  else {
    Swift::Hasher::_combine(0,HVar2);
    into.unknown = auStack_88;
    SVar3.bridgeObject = param_2;
    SVar3.str = param_1;
    Swift::String::hash(into,SVar3);
  }
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1004b4bac(param_1,param_2,param_3,_Var1);
  return;
}



/* Address: 0x1004b4bac | FUN_1004b4bac */

undefined1  [16] FUN_1004b4bac(undefined *param_1,undefined *param_2,char param_3,ulong param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_4 = param_4 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0) {
    lVar6 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar5 = (undefined8 *)(lVar6 + param_4 * 0x18);
      _Var2.unknown = (undefined *)*puVar5;
      if (*(char *)(puVar5 + 2) == '\x01') {
        if ((param_3 == '\x01') && (_Var2.unknown == param_1)) {
LAB_1004b4c78:
          uVar3 = 1;
          goto LAB_1004b4c84;
        }
      }
      else if ((param_3 != '\x01') &&
              ((_Var2.unknown == param_1 && (undefined *)puVar5[1] == param_2 ||
               (bVar1 = Swift::_stringCompareWithSmolCheck
                                  (_Var2,(undefined *)puVar5[1],
                                   (_StringComparisonResult)(__int8)param_1), bVar1))))
      goto LAB_1004b4c78;
      param_4 = param_4 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_4 >> 6) * 8) >> (param_4 & 0x3f) & 1) != 0);
  }
  uVar3 = 0;
LAB_1004b4c84:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = param_4;
  return auVar7;
}



/* Address: 0x1004b4ca0 | FUN_1004b4ca0 */

undefined * FUN_1004b4ca0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fcb488;
    FUN_1000f7830(&DAT_100fcb488,&DAT_100c504c0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x1004b4d20 | FUN_1004b4d20 */

undefined * FUN_1004b4d20(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fcb6e8;
    FUN_1000f7830(&DAT_100fcb6e8,&DAT_100c51f00);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -1;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  return puVar2;
}



/* Address: 0x1004b4da0 | FUN_1004b4da0 */

undefined * FUN_1004b4da0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fcb6d8;
    FUN_1000f7830(&DAT_100fcb6d8,&DAT_100c50488);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x1004b4e24 | FUN_1004b4e24 */

void FUN_1004b4e24(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar9 = 0;
  puVar8 = (ulong *)(param_1 + 0x38);
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar10 < 0x40) {
    uVar11 = ~(-1L << (-uVar10 & 0x3f));
  }
  uVar11 = uVar11 & *puVar8;
  lVar1 = lVar9;
  while( true ) {
    for (; uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      puVar2 = (undefined8 *)
               (*(long *)(param_1 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
               lVar1 * 0x400);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      _swift_bridgeObjectRetain(uVar4);
      FUN_1004c12b4(auStack_70,uVar3,uVar4);
      _swift_bridgeObjectRelease(local_68);
      lVar9 = lVar1;
    }
    bVar7 = SCARRY8(lVar1,1);
    lVar1 = lVar1 + 1;
    if (bVar7) break;
    if ((long)(0x3f - uVar10 >> 6) <= lVar1) {
      FUN_10000c650(param_1,puVar8,~uVar10,lVar9,0);
      return;
    }
    uVar11 = puVar8[lVar1];
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1004b4f30);
  (*pcVar6)();
}



/* Address: 0x1004b4f30 | FUN_1004b4f30 */

void FUN_1004b4f30(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_3;
  uVar5 = param_4;
  FUN_100071370();
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004b500c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1004b5c40(lVar6,param_5 & 1);
    uVar8 = param_4;
    FUN_100071370();
    lVar3 = param_3;
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004b4fd4);
      (*pcVar2)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_100506688();
    lVar6 = *unaff_x20;
    goto joined_r0x0001004b5020;
  }
  lVar6 = *unaff_x20;
joined_r0x0001004b5020:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar4);
    return;
  }
  FUN_1002b0fc0();
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x1004b5054 | FUN_1004b5054 */

void FUN_1004b5054(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5134);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1004b5ef4(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b50f4);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100506800();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b5148;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b5148:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + lVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return;
  }
  FUN_1000d93f0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b5178 | FUN_1004b5178 */

void FUN_1004b5178(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5248);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1004b61b0(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5218);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1005069a4();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b525c;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b525c:
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
    return;
  }
  FUN_10016fc7c();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b528c | FUN_1004b528c */

void FUN_1004b528c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5364);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1004b6444(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b532c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100506b0c();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b5378;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b5378:
  if ((uVar3 & 1) != 0) {
    FUN_1004b8d6c(param_1,*(long *)(lVar4 + 0x38) + lVar2 * 0x38);
    return;
  }
  FUN_1004d6c5c();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b53a8 | FUN_1004b53a8 */

void FUN_1004b53a8(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  FUN_100071370(param_2);
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b54c8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_1004b6764(lVar5,param_4 & 1,&DAT_100fcb3a0,&DAT_100c501a0,&DAT_100fcb478,&DAT_100c53fc0);
    uVar7 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5468);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100506cec();
    lVar5 = *unaff_x20;
    goto joined_r0x0001004b54dc;
  }
  lVar5 = *unaff_x20;
joined_r0x0001004b54dc:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    puVar3 = &DAT_100fcb3a0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
                    /* WARNING: Could not recover jumptable at 0x0001004b54c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar3 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar2,param_1,puVar3);
    return;
  }
  FUN_1004d6c48();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b550c | FUN_1004b550c */

void FUN_1004b550c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar4 = param_3;
  FUN_100071370(param_2);
  lVar6 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar5 = lVar6 + uVar7;
  if (SCARRY8(lVar6,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b562c);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    FUN_1004b6764(lVar5,param_4 & 1,&DAT_100fcb460,&DAT_100c502b0,&DAT_100fcb458,&DAT_100c50470);
    uVar7 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b55cc);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100506d10();
    lVar5 = *unaff_x20;
    goto joined_r0x0001004b5640;
  }
  lVar5 = *unaff_x20;
joined_r0x0001004b5640:
  if ((uVar4 & 1) != 0) {
    lVar5 = *(long *)(lVar5 + 0x38);
    puVar3 = &DAT_100fcb460;
    FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
                    /* WARNING: Could not recover jumptable at 0x0001004b5624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(puVar3 + -8) + 0x28))
              (lVar5 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar2,param_1,puVar3);
    return;
  }
  FUN_1004d6cc0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b5670 | FUN_1004b5670 */

void FUN_1004b5670(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5748);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1004b6a84(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5710);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100506f44();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b575c;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b575c:
  if ((uVar3 & 1) != 0) {
    FUN_1004b8de4(param_1,*(long *)(lVar4 + 0x38) + lVar2 * 0x28);
    return;
  }
  FUN_1004d6bec();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b578c | FUN_1004b578c */

void FUN_1004b578c(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5864);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_1004b6d9c(lVar4,param_4 & 1);
    uVar7 = param_3;
    FUN_100071370();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b582c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100507108();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b5878;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b5878:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
    _swift_bridgeObjectRelease(uVar6);
    return;
  }
  FUN_10016fc7c();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b58a8 | FUN_1004b58a8 */

void FUN_1004b58a8(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4,
                  undefined8 param_5,uint param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  lVar3 = param_3;
  uVar5 = param_4;
  FUN_1004b4b04(param_3,param_4,param_5);
  lVar7 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar6 = lVar7 + uVar8;
  if (SCARRY8(lVar7,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004b5998);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1004b7038(lVar6,param_6 & 1);
    lVar3 = param_3;
    uVar8 = param_4;
    FUN_1004b4b04(param_3,param_4,param_5);
    if (((uint)uVar5 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004b595c);
      (*pcVar2)();
    }
  }
  else if ((param_6 & 1) == 0) {
    FUN_100507278();
    lVar6 = *unaff_x20;
    goto joined_r0x0001004b59ac;
  }
  lVar6 = *unaff_x20;
joined_r0x0001004b59ac:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar6 + 0x38) + lVar3 * 0x10);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_release(uVar4);
    return;
  }
  FUN_1004d6d68();
  FUN_1004a7398(param_3,param_4,param_5);
  return;
}



/* Address: 0x1004b59f0 | FUN_1004b59f0 */

void FUN_1004b59f0(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5ac8);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_1004b75fc(lVar4,param_4 & 1);
    uVar7 = param_3;
    FUN_100071370();
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5a90);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1005075b0();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b5adc;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b5adc:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
    _swift_release(uVar6);
    return;
  }
  FUN_10016fc7c();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1004b5b0c | FUN_1004b5b0c */

void FUN_1004b5b0c(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,uint param_5)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_1004b4b04(param_2,param_3,param_4);
  lVar5 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5bf0);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar4) {
    FUN_1004b7898(lVar4,param_5 & 1);
    lVar2 = param_2;
    uVar7 = param_3;
    FUN_1004b4b04(param_2,param_3,param_4);
    if (((uint)uVar3 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004b5bb8);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_100507720();
    lVar4 = *unaff_x20;
    goto joined_r0x0001004b5c04;
  }
  lVar4 = *unaff_x20;
joined_r0x0001004b5c04:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8);
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + lVar2 * 8) = param_1;
    _swift_release(uVar6);
    return;
  }
  FUN_1004d6dbc();
  FUN_1004a7398(param_2,param_3,param_4);
  return;
}


