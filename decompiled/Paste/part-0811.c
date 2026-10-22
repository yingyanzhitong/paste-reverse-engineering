/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008e1230 | FUN_1008e1230 */

void FUN_1008e1230(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar7 = param_3;
  FUN_100623594(param_3,&PTR_PTR_100f0f5c8,param_2);
  puVar1 = &DAT_100f13c38;
  _swift_allocObject(&DAT_100f13c38,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  uVar2 = uVar7;
  FUN_1008f7070(uVar7,thunk_FUN_1008fcb94,puVar1);
  _swift_release(uVar7);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f13c60;
  _swift_allocObject(&DAT_100f13c60,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  *(undefined8 *)(puVar1 + 0x38) = param_10;
  *(undefined8 *)(puVar1 + 0x40) = param_11;
  *(undefined8 *)(puVar1 + 0x48) = param_12;
  _swift_retain(param_3);
  _swift_retain(puVar1);
  FUN_100011128(param_6,param_7);
  _swift_bridgeObjectRetain(param_8);
  _swift_retain(param_10);
  _swift_unknownObjectRetain(param_11);
  uVar7 = uVar2;
  FUN_1008f7070(uVar2,FUN_1008fec40,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f13c88;
  _swift_allocObject(&DAT_100f13c88,0x20,7);
  *(code **)(puVar1 + 0x10) = thunk_FUN_1008fdcb4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_retain_n(param_3,2);
  pcVar3 = thunk_FUN_1008fd66c;
  FUN_1008f5090(thunk_FUN_1008fd66c,puVar1);
  _swift_release(uVar7);
  _swift_release(puVar1);
  puVar1 = &DAT_100f13cb0;
  _swift_allocObject(&DAT_100f13cb0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_11;
  *(undefined8 *)(puVar1 + 0x20) = param_12;
  puVar4 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar9 = *(long *)(pcVar3 + 0x30);
  uVar11 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f13cd8;
  _swift_allocObject(&DAT_100f13cd8,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = FUN_1008fec74;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  uVar6 = uVar11;
  _swift_getObjectType();
  pcVar8 = *(code **)(lVar9 + 0x10);
  _swift_unknownObjectRetain_n(param_11,2);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar1,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar6;
  (*pcVar8)(uVar6,lVar9);
  if ((uVar11 & 1) == 0) {
    puVar10 = &DAT_100f13d00;
    _swift_allocObject(&DAT_100f13d00,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar3;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    pcVar8 = *(code **)(lVar9 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar5);
    (*pcVar8)(thunk_FUN_1008fa090,puVar10,uVar6,lVar9);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar5);
      _swift_endAccess(auStack_90);
      pcVar8 = (code *)0x0;
      puVar10 = (undefined *)0x0;
      uVar7 = 0;
    }
    else {
      _swift_retain(param_3);
      _swift_unknownObjectRetain(param_11);
      pcVar8 = pcVar3;
      puVar10 = puVar4;
      uVar7 = param_3;
      FUN_1008f7988(pcVar3,puVar4,param_3,param_11,param_12);
      _swift_release(param_3);
      _swift_unknownObjectRelease(param_11);
    }
    FUN_1006486f8(pcVar8,puVar10,uVar7);
    FUN_100004550(pcVar8,puVar10);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_unknownObjectRelease(param_11);
  _swift_release(param_3);
  _swift_release(puVar1);
  _swift_release(puVar4);
  _swift_release(pcVar3);
  _swift_release(puVar5);
  *param_1 = puVar4;
  return;
}



/* Address: 0x1008e1678 | FUN_1008e1678 */

void FUN_1008e1678(void)

{
  FUN_1008f7360();
  return;
}



/* Address: 0x1008e168c | FUN_1008e168c */

/* WARNING: Removing unreachable block (ram,0x0001008e1760) */

void FUN_1008e168c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0xd8);
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e17d0);
    (*pcVar1)();
  }
  lVar2 = param_1;
  FUN_1008fa140();
  _swift_allocObject();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = param_4;
  _swift_retain(lVar3);
  FUN_100011128(param_2,param_3);
  _swift_bridgeObjectRetain(param_4);
  FUN_100626a9c(lVar2,&PTR_PTR_100f10890,0x6148747065636341,0xed000072656c646e,1,0x8000000000000000,
                lVar3);
  _swift_release(lVar3);
  _swift_release(lVar2);
  (*param_5)(param_7,param_8,param_1);
  return;
}



/* Address: 0x1008e17d0 | FUN_1008e17d0 */

void FUN_1008e17d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  FUN_10094e964(param_1,2,0);
  _swift_getObjectType(param_3);
  puVar1 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  FUN_10063dd74(param_1,param_3,puVar1,param_4);
  return;
}



/* Address: 0x1008e1844 | FUN_1008e1844 */

void FUN_1008e1844(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType(param_2);
  FUN_100642338();
  _swift_retain(param_4);
  FUN_100626c9c(param_1);
  _swift_release(param_4);
  return;
}



/* Address: 0x1008e18a0 | FUN_1008e18a0 */

void FUN_1008e18a0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = param_1;
  FUN_1008f6908();
  lVar14 = *(long *)(param_1 + 0x20);
  lVar1 = *(long *)(lVar14 + 0x30);
  uVar18 = *(undefined8 *)(lVar14 + 0x38);
  lVar17 = *(long *)(lVar5 + 0x30);
  lVar8 = *(long *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  if (lVar8 == 0) {
    puVar6 = &DAT_100f109c0;
    _swift_allocObject(&DAT_100f109c0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar17;
    *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f19fa8;
    _swift_retain(lVar17);
    pcVar15 = thunk_FUN_1008fe70c;
  }
  else {
    puVar6 = &DAT_100f10b50;
    _swift_allocObject(&DAT_100f10b50,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar8;
    *(undefined8 *)(puVar6 + 0x18) = uVar11;
    pcVar15 = thunk_FUN_1008fe864;
  }
  puVar7 = &DAT_100f109e8;
  _swift_allocObject(&DAT_100f109e8,0x20,7);
  *(code **)(puVar7 + 0x10) = pcVar15;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uVar16 = *(undefined8 *)(unaff_x20 + 0x20);
  if (lVar17 == lVar1) {
    _swift_retain(lVar17);
    _swift_unknownObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100011128(lVar8,uVar11);
    lVar8 = lVar5;
    FUN_100623594(lVar5,&PTR_PTR_100f0f5c8,uVar16);
    puVar6 = &DAT_100f10ab0;
    _swift_allocObject(&DAT_100f10ab0,0x38,7);
    *(long *)(puVar6 + 0x10) = lVar17;
    *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f19fa8;
    *(code **)(puVar6 + 0x20) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar6 + 0x28) = puVar7;
    *(long *)(puVar6 + 0x30) = lVar5;
    _swift_retain(lVar17);
    _swift_retain(puVar6);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    lVar9 = lVar8;
    FUN_1008f7070(lVar8,thunk_FUN_1008fd8bc,puVar6);
    _swift_bridgeObjectRelease(uVar16);
    _swift_release(lVar8);
    _swift_release_n(puVar6,2);
    _swift_getObjectType(*(undefined8 *)(lVar9 + 0x20));
    FUN_100642338();
    _swift_unknownObjectRetain(lVar1);
    _swift_retain(lVar5);
    _swift_retain(param_1);
    lVar8 = lVar9;
    FUN_1008f8700(lVar9,param_1,lVar1,uVar18,lVar5);
    _swift_release(lVar5);
    _swift_release(param_1);
    _swift_unknownObjectRelease(lVar1);
    puVar6 = &DAT_100f10ad8;
    _swift_allocObject(&DAT_100f10ad8,0x28,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(long *)(puVar6 + 0x18) = param_1;
    *(long *)(puVar6 + 0x20) = lVar5;
    puVar10 = &DAT_100f10b00;
    _swift_allocObject(&DAT_100f10b00,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar8;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1008fa398;
    *(undefined **)(puVar10 + 0x20) = puVar6;
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
    uVar18 = *(undefined8 *)(lVar8 + 0x10);
    cVar4 = *(char *)(lVar8 + 0x18);
    if (cVar4 == '\x01') {
      _swift_retain(lVar5);
      _swift_retain(param_1);
      _swift_retain();
      _swift_retain(puVar6);
      _swift_retain(lVar8);
      FUN_1005dfeb4(uVar18,1);
      uVar11 = 0;
      FUN_100952c0c(0);
      FUN_10061cf14(2,0,uVar11,&PTR_PTR_100f0f5c8);
      uVar2 = *(ulong *)(lVar14 + 0x30);
      lVar3 = *(long *)(lVar14 + 0x38);
      uVar12 = uVar2;
      _swift_getObjectType();
      pcVar15 = *(code **)(lVar3 + 0x10);
      _swift_unknownObjectRetain(uVar2);
      (*pcVar15)(uVar12,lVar3);
      _swift_unknownObjectRelease(uVar2);
      if ((uVar12 & 1) == 0) {
        uVar16 = *(undefined8 *)(lVar14 + 0x38);
        uVar20 = *(undefined8 *)(lVar14 + 0x38);
        uVar19 = *(undefined8 *)(lVar14 + 0x30);
        uVar11 = uVar19;
        _swift_getObjectType(uVar19);
        _swift_unknownObjectRetain(uVar19);
        FUN_100642338(uVar11,uVar16);
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
        lVar14 = *(long *)(lVar14 + 0x38);
        uVar16 = uVar11;
        _swift_getObjectType();
        puVar13 = &DAT_100f10b28;
        _swift_allocObject(&DAT_100f10b28,0x30,7);
        *(undefined8 *)(puVar13 + 0x18) = uVar20;
        *(undefined8 *)(puVar13 + 0x10) = uVar19;
        *(long *)(puVar13 + 0x20) = param_1;
        *(undefined8 *)(puVar13 + 0x28) = uVar18;
        pcVar15 = *(code **)(lVar14 + 0x18);
        _swift_retain_n(param_1,2);
        FUN_1005dfeb4(uVar18,1);
        _swift_unknownObjectRetain(uVar19);
        _swift_unknownObjectRetain(uVar11);
        (*pcVar15)(thunk_FUN_1008fa3b8,puVar13,uVar16,lVar14);
        _swift_release(param_1);
        _swift_unknownObjectRelease(uVar19);
        _swift_unknownObjectRelease(uVar11);
        _swift_release(puVar13);
      }
      else {
        FUN_100626c9c(uVar18);
      }
      FUN_100308538(uVar18,1);
      goto LAB_1008e2104;
    }
    if (cVar4 != -1) {
      _swift_retain(lVar5);
      _swift_retain(param_1);
      _swift_retain();
      _swift_retain(puVar6);
      _swift_retain(lVar8);
      FUN_100308538(uVar18,cVar4);
      goto LAB_1008e2104;
    }
    _swift_beginAccess(lVar8 + 0x30,auStack_90,0x21,0);
    _swift_retain(lVar5);
    _swift_retain(param_1);
    _swift_retain();
    _swift_retain(puVar6);
    _swift_retain(lVar8);
    pcVar15 = thunk_FUN_1008db354;
  }
  else {
    puVar6 = &DAT_100f10a10;
    _swift_allocObject(&DAT_100f10a10,0x40,7);
    *(undefined8 *)(puVar6 + 0x10) = uVar16;
    *(long *)(puVar6 + 0x18) = lVar5;
    *(long *)(puVar6 + 0x20) = lVar17;
    *(undefined ***)(puVar6 + 0x28) = &PTR_PTR_100f19fa8;
    *(code **)(puVar6 + 0x30) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar6 + 0x38) = puVar7;
    _swift_retain_n(lVar17,2);
    _swift_unknownObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100011128(lVar8,uVar11);
    _swift_retain(puVar7);
    _swift_retain(lVar5);
    pcVar15 = FUN_1008fa368;
    FUN_1008e2520(FUN_1008fa368,puVar6);
    _swift_release(puVar6);
    lVar9 = lVar1;
    FUN_100915740(lVar1,uVar18);
    _swift_release(pcVar15);
    _swift_getObjectType(*(undefined8 *)(lVar9 + 0x20));
    FUN_100642338();
    _swift_unknownObjectRetain(lVar1);
    _swift_retain(lVar5);
    _swift_retain(param_1);
    lVar8 = lVar9;
    FUN_1008f8700(lVar9,param_1,lVar1,uVar18,lVar5);
    _swift_release(lVar5);
    _swift_release(param_1);
    _swift_unknownObjectRelease(lVar1);
    puVar6 = &DAT_100f10a38;
    _swift_allocObject(&DAT_100f10a38,0x28,7);
    *(long *)(puVar6 + 0x10) = unaff_x20;
    *(long *)(puVar6 + 0x18) = param_1;
    *(long *)(puVar6 + 0x20) = lVar5;
    puVar10 = &DAT_100f10a60;
    _swift_allocObject(&DAT_100f10a60,0x28,7);
    *(long *)(puVar10 + 0x10) = lVar8;
    *(code **)(puVar10 + 0x18) = FUN_1008fa398;
    *(undefined **)(puVar10 + 0x20) = puVar6;
    _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
    uVar18 = *(undefined8 *)(lVar8 + 0x10);
    cVar4 = *(char *)(lVar8 + 0x18);
    if (cVar4 == '\x01') {
      _swift_retain(lVar5);
      _swift_retain(param_1);
      _swift_retain();
      _swift_retain(puVar6);
      _swift_retain(lVar8);
      FUN_1005dfeb4(uVar18,1);
      uVar11 = 0;
      FUN_100952c0c(0);
      FUN_10061cf14(2,0,uVar11,&PTR_PTR_100f0f5c8);
      uVar2 = *(ulong *)(lVar14 + 0x30);
      lVar3 = *(long *)(lVar14 + 0x38);
      uVar12 = uVar2;
      _swift_getObjectType();
      pcVar15 = *(code **)(lVar3 + 0x10);
      _swift_unknownObjectRetain(uVar2);
      (*pcVar15)(uVar12,lVar3);
      _swift_unknownObjectRelease(uVar2);
      if ((uVar12 & 1) == 0) {
        uVar16 = *(undefined8 *)(lVar14 + 0x38);
        uVar20 = *(undefined8 *)(lVar14 + 0x38);
        uVar19 = *(undefined8 *)(lVar14 + 0x30);
        uVar11 = uVar19;
        _swift_getObjectType(uVar19);
        _swift_unknownObjectRetain(uVar19);
        FUN_100642338(uVar11,uVar16);
        uVar11 = *(undefined8 *)(lVar14 + 0x30);
        lVar14 = *(long *)(lVar14 + 0x38);
        uVar16 = uVar11;
        _swift_getObjectType();
        puVar13 = &DAT_100f10a88;
        _swift_allocObject(&DAT_100f10a88,0x30,7);
        *(undefined8 *)(puVar13 + 0x18) = uVar20;
        *(undefined8 *)(puVar13 + 0x10) = uVar19;
        *(long *)(puVar13 + 0x20) = param_1;
        *(undefined8 *)(puVar13 + 0x28) = uVar18;
        pcVar15 = *(code **)(lVar14 + 0x18);
        _swift_retain_n(param_1,2);
        FUN_1005dfeb4(uVar18,1);
        _swift_unknownObjectRetain(uVar19);
        _swift_unknownObjectRetain(uVar11);
        (*pcVar15)(FUN_1008fa3b8,puVar13,uVar16,lVar14);
        _swift_release(param_1);
        _swift_unknownObjectRelease(uVar19);
        _swift_unknownObjectRelease(uVar11);
        _swift_release(puVar13);
      }
      else {
        FUN_100626c9c(uVar18);
      }
      FUN_100308538(uVar18,1);
      goto LAB_1008e2104;
    }
    if (cVar4 != -1) {
      _swift_retain(lVar5);
      _swift_retain(param_1);
      _swift_retain();
      _swift_retain(puVar6);
      _swift_retain(lVar8);
      FUN_100308538(uVar18,cVar4);
      goto LAB_1008e2104;
    }
    _swift_beginAccess(lVar8 + 0x30,auStack_90,0x21,0);
    _swift_retain(lVar5);
    _swift_retain(param_1);
    _swift_retain();
    _swift_retain(puVar6);
    _swift_retain(lVar8);
    pcVar15 = FUN_1008db354;
  }
  FUN_10064967c(pcVar15,puVar10);
  _swift_endAccess(auStack_90);
LAB_1008e2104:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar9);
  _swift_release(lVar17);
  _swift_unknownObjectRelease(lVar1);
  _swift_release(puVar7);
  _swift_release(lVar5);
  _swift_release(lVar8);
  _swift_release(puVar6);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x1008e2188 | FUN_1008e2188 */

void FUN_1008e2188(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *local_98 [3];
  undefined8 local_80;
  undefined1 local_57;
  
  uVar3 = *param_5;
  lVar2 = *(long *)(param_2 + 0x20);
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(param_1);
  if ((uVar1 & 1) == 0) {
    _swift_getObjectType(param_3);
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    FUN_10063dd74(DAT_101058180,param_3,PTR___type_metadata_for____100eae0c8 + 8,param_4);
  }
  else {
    local_57 = 2;
    local_98[0] = param_5;
    local_80 = uVar3;
    _swift_retain(param_5);
    FUN_100626ce0(local_98);
    FUN_1005e70f4(local_98);
    uVar3 = *(undefined8 *)(lVar2 + 0x30);
    _swift_getObjectType(uVar3);
    _swift_unknownObjectRetain(uVar3);
    FUN_10063dc68();
    _swift_unknownObjectRelease(uVar3);
  }
  return;
}



/* Address: 0x1008e22d0 | FUN_1008e22d0 */

void FUN_1008e22d0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  FUN_10061cf14(2,0,*param_4,&PTR_PTR_100f0f5c8);
  lVar7 = *(long *)(param_3 + 0x20);
  uVar1 = *(ulong *)(lVar7 + 0x30);
  lVar2 = *(long *)(lVar7 + 0x38);
  uVar3 = uVar1;
  _swift_getObjectType();
  pcVar8 = *(code **)(lVar2 + 0x10);
  _swift_unknownObjectRetain(uVar1);
  (*pcVar8)(uVar3,lVar2);
  _swift_unknownObjectRelease(uVar1);
  if ((uVar3 & 1) != 0) {
    FUN_100626c9c(param_1);
    return;
  }
  uVar6 = *(undefined8 *)(lVar7 + 0x38);
  uVar10 = *(undefined8 *)(lVar7 + 0x38);
  uVar9 = *(undefined8 *)(lVar7 + 0x30);
  uVar4 = uVar9;
  _swift_getObjectType(uVar9);
  _swift_unknownObjectRetain(uVar9);
  FUN_100642338(uVar4,uVar6);
  uVar4 = *(undefined8 *)(lVar7 + 0x30);
  lVar2 = *(long *)(lVar7 + 0x38);
  uVar6 = uVar4;
  _swift_getObjectType(uVar4);
  puVar5 = &DAT_100f10f60;
  _swift_allocObject(&DAT_100f10f60,0x30,7);
  *(undefined8 *)(puVar5 + 0x18) = uVar10;
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(long *)(puVar5 + 0x20) = param_3;
  *(undefined8 *)(puVar5 + 0x28) = param_1;
  pcVar8 = *(code **)(lVar2 + 0x18);
  _swift_retain_n(param_3,2);
  _swift_unknownObjectRetain(uVar9);
  _swift_unknownObjectRetain(uVar4);
  _swift_errorRetain(param_1);
  (*pcVar8)(thunk_FUN_1008fa3b8,puVar5,uVar6,lVar2);
  _swift_release(param_3);
  _swift_unknownObjectRelease(uVar9);
  _swift_unknownObjectRelease(uVar4);
  _swift_release(puVar5);
  return;
}



/* Address: 0x1008e2454 | FUN_1008e2454 */

undefined8
FUN_1008e2454(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  FUN_100623594(param_2,&PTR_PTR_100f0f5c8,param_1);
  puVar2 = &DAT_100f10f38;
  _swift_allocObject(&DAT_100f10f38,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  _swift_retain();
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_6);
  _swift_retain(param_2);
  uVar3 = uVar1;
  FUN_1008f7070(uVar1,thunk_FUN_1008fd8bc,puVar2);
  _swift_release(uVar1);
  _swift_release_n(puVar2,2);
  return uVar3;
}



/* Address: 0x1008e2520 | FUN_1008e2520 */

/* WARNING: Removing unreachable block (ram,0x0001008e2618) */

undefined * FUN_1008e2520(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  code *local_88;
  undefined *puStack_80;
  undefined1 local_60;
  undefined1 local_48;
  
  puVar1 = &DAT_100f10e20;
  _swift_allocObject(&DAT_100f10e20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100fec408;
  FUN_1000f7830(&DAT_100fec408,&DAT_100c83b10);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f10e48;
  _swift_allocObject(&DAT_100f10e48,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1002e0f5c;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  local_88 = FUN_1008fa424;
  local_60 = 0;
  local_48 = 1;
  puStack_80 = puVar3;
  _swift_retain(param_2);
  _swift_retain();
  _swift_retain(puVar2);
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  FUN_10093efc4(&local_88);
  FUN_1008fa458(&local_88);
  _swift_release(puVar1);
  _swift_release(puVar3);
  puVar1 = puVar2;
  FUN_1008f2820(puVar2);
  _swift_release(puVar2);
  return puVar1;
}



/* Address: 0x1008e2668 | FUN_1008e2668 */

/* WARNING: Removing unreachable block (ram,0x0001008e2760) */

undefined * FUN_1008e2668(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 unaff_x20;
  code *local_88;
  undefined *puStack_80;
  undefined1 local_60;
  undefined1 local_48;
  
  puVar1 = &DAT_100f12fe0;
  _swift_allocObject(&DAT_100f12fe0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100fec440;
  FUN_1000f7830(&DAT_100fec440,&DAT_100c83b38);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f13008;
  _swift_allocObject(&DAT_100f13008,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1002dfc04;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  local_88 = FUN_1008fdd88;
  local_60 = 0;
  local_48 = 1;
  puStack_80 = puVar3;
  _swift_retain(param_2);
  _swift_retain();
  _swift_retain(puVar2);
  _swift_retain(puVar1);
  _swift_retain(puVar3);
  FUN_10093efc4(&local_88);
  FUN_1008fa458(&local_88);
  _swift_release(puVar1);
  _swift_release(puVar3);
  puVar1 = puVar2;
  FUN_1008f25fc(puVar2);
  _swift_release(puVar2);
  return puVar1;
}



/* Address: 0x1008e27b0 | FUN_1008e27b0 */

void FUN_1008e27b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType();
  FUN_100642338();
  _swift_retain(param_3);
  FUN_100626c9c(param_4);
  _swift_release(param_3);
  return;
}



/* Address: 0x1008e2808 | FUN_1008e2808 */

void FUN_1008e2808(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008e2834 | FUN_1008e2834 */

void FUN_1008e2834(undefined8 *param_1,undefined8 param_2)

{
  FUN_1008f6908();
  *param_1 = param_2;
  return;
}



/* Address: 0x1008e285c | FUN_1008e285c */

void FUN_1008e285c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  FUN_100952c0c();
  param_1[3] = uVar1;
  *param_1 = uVar2;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x1008e2898 | thunk_FUN_1008e18a0 */

void thunk_FUN_1008e18a0(void)

{
  FUN_1008e18a0();
  return;
}



/* Address: 0x1008e289c | thunk_FUN_1008f7edc */

void thunk_FUN_1008f7edc(void)

{
  FUN_1008f7edc();
  return;
}



/* Address: 0x1008e28a0 | FUN_1008e28a0 */

void FUN_1008e28a0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008e28e4 | FUN_1008e28e4 */

void FUN_1008e28e4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008e2930 | FUN_1008e2930 */

void FUN_1008e2930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_10;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_9;
  *(undefined1 *)(unaff_x22 + 0x78) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008e2964,0,0);
  return;
}



/* Address: 0x1008e2964 | FUN_1008e2964 */

/* WARNING: Removing unreachable block (ram,0x0001008e299c) */

void FUN_1008e2964(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100668048(uVar1,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28));
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  plVar2 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1008e2a0c;
  FUN_1008e2af0(plVar2,*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined1 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
                *(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1008e2a0c | FUN_1008e2a0c */

void FUN_1008e2a0c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1008e2a70;
  }
  else {
    pcVar1 = FUN_1008e2ab0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008e2a70 | FUN_1008e2a70 */

void FUN_1008e2a70(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x60) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e2aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e2ab0 | FUN_1008e2ab0 */

void FUN_1008e2ab0(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x60) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e2aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e2af0 | FUN_1008e2af0 */

void FUN_1008e2af0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008e2b18,0,0);
  return;
}



/* Address: 0x1008e2b18 | FUN_1008e2b18 */

void FUN_1008e2b18(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar11 = *(ulong *)(unaff_x22 + 0x18);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar7 = &DAT_100f10298;
  _swift_allocObject(&DAT_100f10298,0x18,7);
  *(ulong *)(puVar7 + 0x10) = uVar11;
  puVar8 = &DAT_100f102c0;
  _swift_allocObject(&DAT_100f102c0,0x18,7);
  *(ulong *)(puVar8 + 0x10) = uVar11;
  _swift_retain_n(uVar11 & 0x3fffffffffffffff,2);
  pcVar9 = FUN_1008f739c;
  FUN_1008e2edc(FUN_1008f739c,puVar7,uVar3,uVar5,uVar6,uVar2,uVar4,FUN_1008f73b4,puVar8,uVar1,uVar12
               );
  *(code **)(unaff_x22 + 0x50) = pcVar9;
  _swift_release(puVar8);
  _swift_release(puVar7);
  plVar10 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)thunk_FUN_1008e3580;
  FUN_1005da4a4(plVar10,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1008e2c38 | FUN_1008e2c38 */

void FUN_1008e2c38(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x21;
  undefined *local_90 [3];
  undefined *local_78;
  undefined **ppuStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  if ((param_4 & 1) == 0) {
    uVar4 = (ulong)*(uint *)(&DAT_100c83b94 + (param_5 >> 0x3e) * 4);
    FUN_10094ccdc(0);
    _swift_allocObject();
    FUN_10094c550(uVar4,0,1);
    if (unaff_x21 == 0) {
      lVar2 = 0;
      FUN_10095456c();
      _swift_allocObject();
      *(undefined4 *)(lVar2 + 0x158) = 0x80;
      *(undefined8 *)(lVar2 + 0x160) = param_2;
      *(undefined8 *)(lVar2 + 0x168) = param_3;
      FUN_1006648f0(&local_68,0x40,0x800,0x10000);
      local_78 = &DAT_100ef25a0;
      ppuStack_70 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
      puVar3 = &DAT_100f138f0;
      _swift_allocObject(&DAT_100f138f0,0x38,7);
      *(undefined8 *)(puVar3 + 0x18) = uStack_60;
      *(undefined8 *)(puVar3 + 0x10) = local_68;
      *(undefined8 *)(puVar3 + 0x28) = uStack_50;
      *(undefined8 *)(puVar3 + 0x20) = local_58;
      puVar3[0x30] = local_48;
      local_90[0] = puVar3;
      _swift_unknownObjectRetain(param_2);
      _swift_retain(param_1);
      FUN_10094d468(uVar4,0,0,param_1,local_90,0);
    }
  }
  else {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar1 = DAT_1010581f0;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  return;
}



/* Address: 0x1008e2dbc | FUN_1008e2dbc */

char * FUN_1008e2dbc(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  
  puVar1 = &DAT_100f13ad0;
  _swift_allocObject(&DAT_100f13ad0,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_2;
  uVar2 = 0;
  FUN_10095456c(0);
  _swift_retain(param_2 & 0x3fffffffffffffff);
  pcVar3 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x30a,uVar2,&PTR_PTR_100f0f570);
  _swift_getObjectType(*(undefined8 *)(pcVar3 + 0x20));
  FUN_100642338();
  puVar4 = &DAT_100f13af8;
  _swift_allocObject(&DAT_100f13af8,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1008feb68;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  _swift_retain();
  _swift_retain(puVar1);
  _swift_retain(param_1);
  pcVar5 = pcVar3;
  FUN_1008f77b8(pcVar3,FUN_1008fcb94,puVar4);
  _swift_release(puVar1);
  _swift_release(pcVar3);
  _swift_release_n(puVar4,2);
  return pcVar5;
}



/* Address: 0x1008e2edc | FUN_1008e2edc */

/* WARNING: Removing unreachable block (ram,0x0001008e305c) */

code * FUN_1008e2edc(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  class_t *pcVar9;
  class_t *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long unaff_x20;
  class_t *pcVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcVar15 = *(class_t **)(unaff_x20 + 0x10);
  lVar14 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar14 + 0x10))();
  uVar11 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_80,0,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar1 == 0) {
    puVar7 = &DAT_100f13918;
    _swift_allocObject(&DAT_100f13918,0x20,7);
    *(class_t **)(puVar7 + 0x10) = pcVar15;
    *(long *)(puVar7 + 0x18) = lVar14;
    _swift_unknownObjectRetain(pcVar15);
    pcVar6 = thunk_FUN_1008fe70c;
  }
  else {
    puVar7 = &DAT_100f139b8;
    _swift_allocObject(&DAT_100f139b8,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    pcVar6 = thunk_FUN_1008fe864;
  }
  puVar8 = &DAT_100f13940;
  _swift_allocObject(&DAT_100f13940,0x20,7);
  *(code **)(puVar8 + 0x10) = pcVar6;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_98,0,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar9 = pcVar15;
  _object_getClass();
  if (pcVar9 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008e3284);
    (*pcVar6)();
  }
  uVar5 = *(undefined1 *)(unaff_x20 + 0x60);
  _swift_unknownObjectRetain(pcVar15);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100011128(lVar1,uVar3);
  FUN_100011128(uVar2,uVar4);
  _swift_bridgeObjectRetain(uVar16);
  pcVar9 = pcVar15;
  (*param_1)(pcVar15,uVar11,uVar12,uVar5);
  _swift_unknownObjectRelease(pcVar15);
  pcVar10 = pcVar15;
  _swift_getObjectType();
  puVar7 = &DAT_100f13968;
  _swift_allocObject(&DAT_100f13968,0x98,7);
  *(undefined8 *)(puVar7 + 0x10) = param_10;
  *(undefined8 *)(puVar7 + 0x18) = uVar17;
  *(class_t **)(puVar7 + 0x20) = pcVar9;
  *(code **)(puVar7 + 0x28) = thunk_FUN_1008fe75c;
  *(undefined **)(puVar7 + 0x30) = puVar8;
  *(undefined8 *)(puVar7 + 0x38) = uVar2;
  *(undefined8 *)(puVar7 + 0x40) = uVar4;
  *(undefined8 *)(puVar7 + 0x48) = uVar16;
  *(undefined8 *)(puVar7 + 0x50) = param_3;
  *(undefined8 *)(puVar7 + 0x58) = param_4;
  puVar7[0x60] = param_5;
  *(undefined8 *)(puVar7 + 0x68) = param_6;
  *(undefined8 *)(puVar7 + 0x70) = param_7;
  *(undefined8 *)(puVar7 + 0x78) = param_8;
  *(undefined8 *)(puVar7 + 0x80) = param_9;
  *(class_t **)(puVar7 + 0x88) = pcVar15;
  *(long *)(puVar7 + 0x90) = lVar14;
  pcVar13 = *(code **)(lVar14 + 0x20);
  _swift_unknownObjectRetain(pcVar15);
  FUN_100011128(uVar2,uVar4);
  uVar11 = 0xff;
  FUN_1005e3ae8(0xff,param_10,PTR___type_metadata_for_Swift_Never_100eadc38);
  uVar12 = 0;
  FUN_1006529e0(0,uVar11);
  _swift_retain(pcVar9);
  _swift_retain(puVar8);
  _swift_retain(param_7);
  _swift_retain(param_9);
  pcVar6 = FUN_1008fe7f8;
  (*pcVar13)(FUN_1008fe7f8,puVar7,uVar12,pcVar10,lVar14);
  _swift_release(puVar7);
  puVar7 = &DAT_100f13990;
  _swift_allocObject(&DAT_100f13990,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_10;
  pcVar13 = FUN_1008fe84c;
  thunk_FUN_10064a5bc(FUN_1008fe84c,puVar7,uVar11);
  _swift_release(puVar8);
  _swift_release(pcVar9);
  FUN_100004550(uVar2,uVar4);
  _swift_release(pcVar6);
  _swift_release(puVar7);
  _swift_unknownObjectRelease(pcVar15);
  return pcVar13;
}



/* Address: 0x1008e3284 | FUN_1008e3284 */

void FUN_1008e3284(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_10;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_8;
  *(undefined8 *)(unaff_x22 + 0x40) = param_9;
  *(undefined1 *)(unaff_x22 + 0x71) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008e32bc,0,0);
  return;
}



/* Address: 0x1008e32bc | FUN_1008e32bc */

/* WARNING: Removing unreachable block (ram,0x0001008e331c) */

void FUN_1008e32bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0x70) == '\x01') {
    FUN_1008d5170(*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20));
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_bridgeObjectRetain(uVar1);
  FUN_100667868(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar2;
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008e338c;
  FUN_1008e2af0(plVar3,*(undefined8 *)(unaff_x22 + 0x10),uVar2,*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined1 *)(unaff_x22 + 0x71),
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40),
                *(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1008e338c | FUN_1008e338c */

void FUN_1008e338c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1008e33f0;
  }
  else {
    pcVar1 = FUN_1008e3430;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008e33f0 | FUN_1008e33f0 */

void FUN_1008e33f0(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x58) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e342c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e3430 | FUN_1008e3430 */

void FUN_1008e3430(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x58) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e3470 | FUN_1008e3470 */

void FUN_1008e3470(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008e3498,0,0);
  return;
}



/* Address: 0x1008e3498 | FUN_1008e3498 */

void FUN_1008e3498(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  code *pcVar8;
  long *plVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined1 *)(unaff_x22 + 0x60);
  puVar7 = &DAT_100f102e8;
  _swift_allocObject(&DAT_100f102e8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar10;
  pcVar8 = FUN_1008e35cc;
  FUN_1008e2edc(FUN_1008e35cc,0,uVar3,uVar5,uVar6,uVar2,uVar4,FUN_1008f73cc,puVar7,uVar1);
  *(code **)(unaff_x22 + 0x50) = pcVar8;
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008e3580;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1008e3580 | FUN_1008e3580 */

void FUN_1008e3580(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008e35c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008e35cc | FUN_1008e35cc */

void FUN_1008e35cc(void)

{
  FUN_1008e35e0();
  return;
}



/* Address: 0x1008e35e0 | FUN_1008e35e0 */

/* WARNING: Removing unreachable block (ram,0x0001008e3698) */
/* WARNING: Removing unreachable block (ram,0x0001008e3688) */

void FUN_1008e35e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x21;
  undefined *local_a0 [3];
  undefined *local_88;
  undefined **ppuStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  if ((param_4 & 1) == 0) {
    lVar1 = 0;
    FUN_10094ccdc();
    lVar3 = lVar1;
    _swift_allocObject();
    uVar2 = 0x28;
    FUN_10095e480(0x28,1,0);
    if (unaff_x21 == 0) {
      FUN_10095ea98();
      *(undefined1 *)(lVar3 + 0x14) = 0;
      FUN_1008d5604(uVar2);
      lVar3 = 0;
      FUN_10095456c();
      _swift_allocObject();
      *(undefined4 *)(lVar3 + 0x158) = 0x80;
      *(undefined8 *)(lVar3 + 0x160) = param_2;
      *(undefined8 *)(lVar3 + 0x168) = param_3;
      FUN_1006648f0(&local_78,0x40,0x800,0x10000);
      local_88 = &DAT_100ef25a0;
      ppuStack_80 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
      puVar4 = &DAT_100f138f0;
      _swift_allocObject(&DAT_100f138f0,0x38,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_70;
      *(undefined8 *)(puVar4 + 0x10) = local_78;
      *(undefined8 *)(puVar4 + 0x28) = uStack_60;
      *(undefined8 *)(puVar4 + 0x20) = local_68;
      puVar4[0x30] = local_58;
      local_a0[0] = puVar4;
      _swift_unknownObjectRetain(param_2);
      _swift_retain(param_1);
      FUN_10094d468(uVar2,0,0,param_1,local_a0,0);
    }
    else {
      _swift_deallocPartialClassInstance(lVar3,lVar1,0x15,7);
    }
  }
  else {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar2 = DAT_1010581f0;
    _swift_willThrow();
    _swift_errorRetain(uVar2);
  }
  return;
}



/* Address: 0x1008e37cc | FUN_1008e37cc */

char * FUN_1008e37cc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  
  uVar1 = 0;
  FUN_10095456c(0);
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x288,uVar1,&PTR_PTR_100f0f570);
  puVar3 = &DAT_100f138c8;
  _swift_allocObject(&DAT_100f138c8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(int *)(puVar3 + 0x18) = (int)param_2;
  *(int *)(puVar3 + 0x1c) = (int)((ulong)param_2 >> 0x20);
  _swift_retain();
  _swift_retain(param_1);
  pcVar4 = pcVar2;
  FUN_1008f7070(pcVar2,FUN_1008fe6d0,puVar3);
  _swift_release(pcVar2);
  _swift_release_n(puVar3,2);
  return pcVar4;
}



/* Address: 0x1008e389c | FUN_1008e389c */

undefined * FUN_1008e389c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_48;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined ***)(puVar1 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  local_48 = &DAT_100f1c228;
  local_60 = (undefined4)param_2;
  uStack_5c = (undefined4)((ulong)param_2 >> 0x20);
  _swift_retain(uVar2);
  _swift_retain(puVar1);
  FUN_100950c78(&local_60,puVar1);
  _swift_release(puVar1);
  FUN_100004594(&local_60);
  return puVar1;
}



/* Address: 0x1008e3960 | FUN_1008e3960 */

void FUN_1008e3960(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_9;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_8;
  *(undefined1 *)(unaff_x22 + 0x5c) = param_6;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined4 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008e3994,0,0);
  return;
}



/* Address: 0x1008e3994 | FUN_1008e3994 */

void FUN_1008e3994(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  code *pcVar9;
  long *plVar10;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined4 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined1 *)(unaff_x22 + 0x5c);
  puVar8 = &DAT_100f10310;
  _swift_allocObject(&DAT_100f10310,0x14,7);
  *(undefined4 *)(puVar8 + 0x10) = uVar6;
  pcVar9 = FUN_1008f73e4;
  FUN_1008e2edc(FUN_1008f73e4,puVar8,uVar3,uVar5,uVar7,uVar2,uVar4,FUN_1008e3b1c,0,uVar1);
  *(code **)(unaff_x22 + 0x48) = pcVar9;
  _swift_release(puVar8);
  plVar10 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1005dbf20;
  FUN_1005da4a4(plVar10,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1008e3a7c | FUN_1008e3a7c */

void FUN_1008e3a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if ((param_4 & 1) == 0) {
    _swift_retain();
    _swift_unknownObjectRetain(param_2);
    FUN_10095ad10(param_5,param_1,param_2,param_3);
  }
  else {
    if (DAT_100fec610 != -1) {
      _swift_once(&DAT_100fec610,FUN_100901fcc);
    }
    uVar1 = DAT_1010581f0;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  return;
}



/* Address: 0x1008e3b1c | FUN_1008e3b1c */

undefined * FUN_1008e3b1c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  puVar1 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = uVar2;
  *(undefined ***)(puVar1 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  _swift_retain(uVar2);
  _swift_retain(puVar1);
  FUN_1008de514();
  _swift_release(puVar1);
  return puVar1;
}



/* Address: 0x1008e3ba8 | FUN_1008e3ba8 */

void FUN_1008e3ba8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined1 param_11,undefined4 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar3 = param_3;
  FUN_100623594(param_3,&PTR_PTR_100f0f5c8,param_2);
  puVar1 = &DAT_100f139e0;
  _swift_allocObject(&DAT_100f139e0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  uVar2 = uVar3;
  FUN_1008f7070(uVar3,thunk_FUN_1008fcb94,puVar1);
  _swift_release(uVar3);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f13a08;
  _swift_allocObject(&DAT_100f13a08,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_19;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_8;
  *(undefined8 *)(puVar1 + 0x38) = param_9;
  *(undefined8 *)(puVar1 + 0x40) = param_10;
  puVar1[0x48] = param_11;
  *(undefined8 *)(puVar1 + 0x50) = param_13;
  *(undefined8 *)(puVar1 + 0x58) = param_14;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_16;
  *(undefined8 *)(puVar1 + 0x70) = param_17;
  *(undefined8 *)(puVar1 + 0x78) = param_18;
  _swift_retain_n(param_3,2);
  FUN_100011128(param_6,param_7);
  uVar3 = 0;
  FUN_1005e3ae8(0,param_19,PTR___type_metadata_for_Swift_Never_100eadc38);
  _swift_bridgeObjectRetain(param_8);
  _swift_retain(param_14);
  _swift_retain(param_16);
  _swift_unknownObjectRetain(param_17);
  pcVar4 = FUN_1008fe8e8;
  thunk_FUN_10064a5bc(FUN_1008fe8e8,puVar1,uVar3);
  _swift_release(uVar2);
  _swift_release(puVar1);
  puVar1 = &DAT_100f13a30;
  _swift_allocObject(&DAT_100f13a30,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_19;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_17;
  *(undefined8 *)(puVar1 + 0x28) = param_18;
  _swift_unknownObjectRetain(param_17);
  pcVar5 = FUN_1008fe93c;
  FUN_100649240(FUN_1008fe93c,puVar1);
  _swift_release(pcVar4);
  _swift_release(puVar1);
  *param_1 = pcVar5;
  return;
}



/* Address: 0x1008e3dec | FUN_1008e3dec */

/* WARNING: Removing unreachable block (ram,0x0001008e3ff8) */
/* WARNING: Removing unreachable block (ram,0x0001008e4000) */

code * FUN_1008e3dec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                    undefined8 param_9,undefined8 param_10,code *param_11)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 in_stack_00000030;
  undefined8 auStack_a0 [2];
  long local_90;
  long local_88;
  long local_80;
  undefined1 *local_78;
  undefined4 local_6c;
  
  lVar5 = *(long *)(param_2 + 0xd8);
  local_6c = param_8;
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e4130);
    (*pcVar1)();
  }
  FUN_100622624(0);
  _swift_allocObject();
  lVar2 = 0;
  FUN_10061fe40(0,FUN_10061fd60,0);
  _swift_retain(lVar5);
  FUN_100626a9c(lVar2,&PTR_PTR_100eebef0,0xd000000000000014,0x8000000100db48b0,1,0x8000000000000000,
                lVar5);
  _swift_release(lVar5);
  _swift_release();
  lVar5 = *(long *)(param_2 + 0xd8);
  if (lVar5 != 0) {
    FUN_1008fa140();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x10) = param_3;
    *(undefined8 *)(lVar2 + 0x18) = param_4;
    *(undefined8 *)(lVar2 + 0x20) = param_5;
    _swift_retain(lVar5);
    FUN_100011128(param_3,param_4);
    _swift_bridgeObjectRetain(param_5);
    FUN_100626a9c(lVar2,&PTR_PTR_100f10890,0x6148747065636341,0xed000072656c646e,1,
                  0x8000000000000000,lVar5);
    _swift_release(lVar5);
    _swift_release(lVar2);
    lVar2 = 0;
    FUN_1005e3ae8(0,in_stack_00000030,PTR___type_metadata_for_Swift_Never_100eadc38);
    local_88 = *(long *)(lVar2 + -8);
    local_90 = *(long *)(local_88 + 0x40);
    uVar7 = local_90 + 0xfU & 0xfffffffffffffff0;
    lVar5 = -uVar7;
    lVar8 = (long)&local_90 + lVar5;
    puVar3 = &DAT_100f13a58;
    local_80 = lVar2;
    local_78 = (undefined1 *)&local_90;
    _swift_allocObject(&DAT_100f13a58,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = in_stack_00000030;
    *(undefined8 *)(puVar3 + 0x18) = param_9;
    *(undefined8 *)(puVar3 + 0x20) = param_10;
    _swift_retain(param_10);
    *(undefined8 *)((long)auStack_a0 + lVar5) = in_stack_00000030;
    FUN_1005e106c(lVar8,param_2,&PTR_PTR_100f0f5c8,param_6,param_7,local_6c,0,FUN_1008fe948,puVar3);
    _swift_release(puVar3);
    (*param_11)(param_2);
    lVar2 = local_80;
    lVar5 = local_88;
    lVar4 = lVar8 - uVar7;
    (**(code **)(local_88 + 0x10))(lVar4,lVar8,local_80);
    uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
    uVar6 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f13a80;
    _swift_allocObject(&DAT_100f13a80,uVar6 + local_90,uVar7 | 7);
    *(undefined8 *)(puVar3 + 0x10) = in_stack_00000030;
    (**(code **)(lVar5 + 0x20))(puVar3 + uVar6,lVar4,lVar2);
    pcVar1 = FUN_1008fea9c;
    thunk_FUN_10064b138(FUN_1008fea9c,puVar3,lVar2);
    _swift_release(param_2);
    _swift_release(puVar3);
    (**(code **)(lVar5 + 8))(lVar8,lVar2);
    return pcVar1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e4134);
  (*pcVar1)();
}



/* Address: 0x1008e4134 | FUN_1008e4134 */

code * FUN_1008e4134(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long lVar5;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar5 = *(long *)(param_2 + 8);
  (**(code **)(lVar5 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  puVar3 = &DAT_100f13aa8;
  _swift_allocObject(&DAT_100f13aa8,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_1;
  *(long *)(puVar3 + 0x30) = param_2;
  _swift_retain(param_4);
  _swift_unknownObjectRetain(param_1);
  pcVar4 = FUN_1008feb40;
  FUN_100641014(FUN_1008feb40,puVar3,uVar2,param_5,lVar5);
  _swift_unknownObjectRelease(uVar1);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x1008e4218 | FUN_1008e4218 */

void FUN_1008e4218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_10094e964(param_1,2,0);
  _swift_getObjectType(param_3);
  uVar1 = 0;
  FUN_1005e3ae8(0,param_5,PTR___type_metadata_for_Swift_Never_100eadc38);
  FUN_10063dd74(param_1,param_3,uVar1,param_4);
  return;
}



/* Address: 0x1008e4298 | FUN_1008e4298 */

undefined8
FUN_1008e4298(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar1 = param_1;
  (*param_3)();
  uVar2 = param_1;
  _swift_getObjectType(param_1);
  (**(code **)(*(long *)(param_2 + 8) + 0x50))();
  uVar3 = uVar2;
  FUN_100915740();
  _swift_release(uVar1);
  _swift_unknownObjectRelease(uVar2);
  puVar4 = &DAT_100f132b0;
  _swift_allocObject(&DAT_100f132b0,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(long *)(puVar4 + 0x18) = param_2;
  *(undefined8 *)(puVar4 + 0x20) = param_5;
  *(undefined8 *)(puVar4 + 0x28) = param_6;
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_6);
  uVar1 = uVar3;
  FUN_10095b09c(uVar3,FUN_1008fde30,puVar4);
  _swift_release(uVar3);
  _swift_release_n(puVar4,2);
  return uVar1;
}



/* Address: 0x1008e438c | FUN_1008e438c */

void FUN_1008e438c(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  (**(code **)(param_2 + 0x28))();
  uVar1 = param_1;
  (*param_3)();
  FUN_100632174();
  _swift_release(param_1);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008e4414 | FUN_1008e4414 */

void FUN_1008e4414(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1008e4448 | FUN_1008e4448 */

void FUN_1008e4448(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x40,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008e448c | FUN_1008e448c */

undefined1  [16] FUN_1008e448c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x40,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1008e44bc | FUN_1008e44bc */

long FUN_1008e44bc(class_t *param_1,undefined8 param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  pcVar2 = param_1;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    _swift_allocObject();
    *(undefined8 *)(unaff_x20 + 0x48) = 10000000000;
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    pcVar2 = param_1;
    _swift_unknownObjectRetain();
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x40) = pcVar2;
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x40),auStack_48,0x21,0);
    FUN_1008df228(0x100000006,1);
    _swift_endAccess(auStack_48);
    _swift_unknownObjectRelease(param_1);
    *(code **)(unaff_x20 + 0x30) = thunk_FUN_1008e865c;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000007;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
    return unaff_x20;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e45ac);
  (*pcVar1)();
}



/* Address: 0x1008e45ac | FUN_1008e45ac */

long FUN_1008e45ac(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = 10000000000;
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    pcVar1 = param_1;
    _swift_unknownObjectRetain();
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x40) = pcVar1;
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x40),auStack_48,0x21,0);
    FUN_1008df228(0x100000006,1);
    _swift_endAccess(auStack_48);
    _swift_unknownObjectRelease(param_1);
    *(code **)(unaff_x20 + 0x30) = thunk_FUN_1008e865c;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000007;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance(unaff_x20);
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008e46c0 | FUN_1008e46c0 */

long FUN_1008e46c0(class_t *param_1,undefined8 param_2)

{
  class_t *pcVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  *(undefined8 *)(unaff_x20 + 0x48) = 10000000000;
  pcVar1 = param_1;
  _object_getClass();
  if ((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0) {
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    pcVar1 = param_1;
    _swift_unknownObjectRetain();
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x40) = pcVar1;
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x40),auStack_48,0x21,0);
    FUN_1008df228(0x100000006,1);
    _swift_endAccess(auStack_48);
    _swift_unknownObjectRelease(param_1);
    *(code **)(unaff_x20 + 0x30) = thunk_FUN_1008e865c;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x58) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x68) = 0;
    *(undefined8 *)(unaff_x20 + 0x60) = 0;
    *(undefined8 *)(unaff_x20 + 0x70) = 0;
    *(undefined8 *)(unaff_x20 + 0x78) = 0xf000000000000007;
    *(undefined1 *)(unaff_x20 + 0x80) = 0;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008e47c4 | thunk_FUN_1008e865c */

void thunk_FUN_1008e865c(void)

{
  FUN_1008e865c();
  return;
}



/* Address: 0x1008e47c8 | FUN_1008e47c8 */

void FUN_1008e47c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar1);
  _swift_retain();
  return;
}



/* Address: 0x1008e47fc | FUN_1008e47fc */

void FUN_1008e47fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x20) == 0) {
    *(undefined8 *)(unaff_x20 + 0x20) = param_1;
    *(undefined8 *)(unaff_x20 + 0x28) = param_2;
    _swift_retain(param_2);
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e4828);
  (*pcVar1)();
}



/* Address: 0x1008e4828 | FUN_1008e4828 */

void FUN_1008e4828(void)

{
  FUN_1008f890c();
  _swift_retain();
  return;
}



/* Address: 0x1008e483c | FUN_1008e483c */

void FUN_1008e483c(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  _swift_retain();
  return;
}



/* Address: 0x1008e4848 | FUN_1008e4848 */

void FUN_1008e4848(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_38,0x21,0);
  FUN_1008f8988(param_1,unaff_x20 + 0x50);
  _swift_endAccess(auStack_38);
  _swift_retain();
  return;
}



/* Address: 0x1008e489c | FUN_1008e489c */

void FUN_1008e489c(byte param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  *(byte *)(unaff_x20 + 0x80) = param_1;
  if ((param_1 & 1) != 0) {
    local_28 = 0x100000006;
    lVar1 = unaff_x20 + 0x40;
    _swift_beginAccess(lVar1,auStack_40,0x21,0);
    FUN_1008df8a4();
    FUN_100623cbc(&local_28,&DAT_100eec8d0,lVar1);
    _swift_endAccess(auStack_40);
  }
  _swift_retain();
  return;
}


