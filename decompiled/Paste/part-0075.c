/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000dfaa8 | thunk_FUN_10002b9b8 */

void thunk_FUN_10002b9b8(void)

{
  FUN_10002b9b8();
  return;
}



/* Address: 0x1000dfaac | thunk_FUN_10002b83c */

void thunk_FUN_10002b83c(void)

{
  FUN_10002b83c();
  return;
}



/* Address: 0x1000dfab0 | thunk_FUN_1000dd5f0 */

void thunk_FUN_1000dd5f0(void)

{
  FUN_1000dd5f0();
  return;
}



/* Address: 0x1000dfab4 | thunk_FUN_10002b7f8 */

void thunk_FUN_10002b7f8(void)

{
  thunk_FUN_10002b7f8();
  return;
}



/* Address: 0x1000dfab8 | thunk_FUN_1000df608 */

void thunk_FUN_1000df608(void)

{
  thunk_FUN_1000df608();
  return;
}



/* Address: 0x1000dfabc | FUN_1000dfabc */

void FUN_1000dfabc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined1 param_4)

{
  int iVar1;
  undefined8 uVar2;
  URLRequest_conflict UVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x20;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x468) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x4f8) = param_4;
  *(ulong *)(unaff_x22 + 0x460) = param_3;
  *(undefined8 *)(unaff_x22 + 0x458) = param_2;
  *(undefined8 *)(unaff_x22 + 0x450) = param_1;
  UVar3 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x470) = UVar3.unknown;
  lVar8 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x478) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x480) = uVar4;
  puVar5 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  uVar4 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x488) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x490) = uVar4;
  puVar5 = &DAT_100fad4a0;
  FUN_1000037f0(&DAT_100fad4a0,&DAT_100c2c4c8);
  *(undefined **)(unaff_x22 + 0x498) = puVar5;
  uVar4 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4a0) = uVar4;
  lVar8 = 0;
  FUN_1000dcac4();
  *(long *)(unaff_x22 + 0x4a8) = lVar8;
  lVar8 = *(long *)(lVar8 + -8);
  *(long *)(unaff_x22 + 0x4b0) = lVar8;
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4b8) = uVar6;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4c0) = uVar6;
  uVar6 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4c8) = uVar6;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4d0) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x4d8) =
       *(undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::telemetry);
  FUN_1000da768(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar8 = *(long *)(unaff_x22 + 0x30);
  FUN_100004640(unaff_x22 + 0x10,uVar2);
  (**(code **)(lVar8 + 0x30))
            (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001c,0x8000000100d8fe80,uVar2,lVar8
            );
  FUN_100004594(unaff_x22 + 0x10);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar8 = *(long *)(unaff_x22 + 0x58);
  FUN_100004640(unaff_x22 + 0x38,uVar2);
  piVar9 = *(int **)(lVar8 + 8);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4e0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1000dfcd4;
                    /* WARNING: Could not recover jumptable at 0x0001000dfcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(param_2,param_3 & 0xcfffffffffffffff,uVar2,lVar8);
  return;
}



/* Address: 0x1000dfcd4 | FUN_1000dfcd4 */

void FUN_1000dfcd4(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  _StringGuts _Var8;
  long lVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  ID self;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  
  lVar24 = *unaff_x22;
  lVar13 = *(long *)(lVar24 + 0x468);
  cVar3 = *(char *)(lVar24 + 0x4f8);
  lVar9 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar24 + 0x4e0));
  FUN_100004594(lVar24 + 0x38);
  *(undefined8 *)(lVar24 + 0x4e8) =
       *(undefined8 *)(lVar13 + _TtC20PasteLicensingDirect20DirectLicenseManager::logger);
  FUN_1000d468c(lVar24 + 0x2e0);
  puVar12 = *(undefined **)(lVar24 + 0x2f8);
  uVar10 = *(undefined8 *)(lVar24 + 0x300);
  _Var8.unknown = puVar12;
  FUN_100004640();
  Swift::_StringGuts::grow(0x3a,_Var8);
  SVar25.bridgeObject = (void *)0x8000000100d8fea0;
  SVar25.str = (char *)0xd000000000000025;
  SVar30.bridgeObject = param_4;
  SVar30.str = param_3;
  Swift::String::append(SVar25,SVar30);
  bVar4 = (param_1 & 1) == 0;
  pcVar2 = (char *)0x65757274;
  if (bVar4) {
    pcVar2 = (char *)0x65736c6166;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar26.bridgeObject = puVar1;
  SVar26.str = pcVar2;
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar26,SVar31);
  _swift_bridgeObjectRelease(puVar1);
  SVar27.bridgeObject = (void *)0x8000000100d8fed0;
  SVar27.str = (char *)0xd000000000000010;
  SVar32.bridgeObject = param_4;
  SVar32.str = param_3;
  Swift::String::append(SVar27,SVar32);
  bVar4 = cVar3 == '\0';
  pcVar2 = (char *)0x65757274;
  if (bVar4) {
    pcVar2 = (char *)0x65736c6166;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4) {
    puVar1 = &DAT_e500000000000000;
  }
  SVar28.bridgeObject = puVar1;
  SVar28.str = pcVar2;
  SVar33.bridgeObject = param_4;
  SVar33.str = param_3;
  Swift::String::append(SVar28,SVar33);
  _swift_bridgeObjectRelease(puVar1);
  SVar29.bridgeObject = (void *)0xe100000000000000;
  SVar29.str = (char *)0x29;
  SVar34.bridgeObject = param_4;
  SVar34.str = param_3;
  Swift::String::append(SVar29,SVar34);
  FUN_1000d4db8(0,0xe000000000000000,puVar12,uVar10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  FUN_100004594(lVar24 + 0x2e0);
  if ((param_1 & 1) == 0) {
    if ((*(byte *)(lVar24 + 0x4f8) & 1) != 0) {
      uVar14 = *(undefined8 *)(lVar24 + 0x450);
      FUN_1000da768(lVar24 + 0xb0);
      uVar10 = *(undefined8 *)(lVar24 + 200);
      lVar13 = *(long *)(lVar24 + 0xd0);
      FUN_100004640(lVar24 + 0xb0,uVar10);
      (**(code **)(lVar13 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd000000000000023,0x8000000100d8ff40,uVar10,
                 lVar13);
      FUN_100004594(lVar24 + 0xb0);
      FUN_1000e0f10(uVar14,0x656e696c66666f,&DAT_e700000000000000);
      goto LAB_1000e0428;
    }
    lVar15 = *(long *)(lVar24 + 0x4b0);
    uVar21 = *(undefined8 *)(lVar24 + 0x4a8);
    uVar19 = *(undefined8 *)(lVar24 + 0x450);
    FUN_1000d468c(lVar24 + 0x88);
    uVar10 = *(undefined8 *)(lVar24 + 0xa0);
    uVar14 = *(undefined8 *)(lVar24 + 0xa8);
    lVar13 = lVar24 + 0x88;
    FUN_100004640(lVar13,uVar10);
    FUN_1000d4db8(0x100000000000004a,0x8000000100d8fef0,uVar10,uVar14,lVar13);
    FUN_100004594(lVar24 + 0x88);
    pcVar11 = *(code **)(lVar15 + 0x38);
    uVar10 = 2;
  }
  else {
    uVar10 = *(undefined8 *)(lVar24 + 0x4a0);
    uVar19 = *(undefined8 *)(lVar24 + 0x498);
    FUN_1000da768(lVar24 + 0x418);
    uVar14 = *(undefined8 *)(lVar24 + 0x418);
    FUN_1001a8a24(uVar10);
    _swift_release(uVar14);
    _swift_getEnumCaseMultiPayload(uVar10,uVar19);
    if ((uint)uVar10 < 2) {
      puVar20 = (undefined8 *)(lVar24 + 0x4c8);
      FUN_1000e4b40(*(undefined8 *)(lVar24 + 0x4a0),*(undefined8 *)(lVar24 + 0x4c8));
LAB_1000dfed0:
      puVar18 = *(undefined8 **)(lVar24 + 0x4d0);
      uVar16 = *(undefined8 *)(lVar24 + 0x480);
      FUN_1000e4b40(*puVar20,puVar18);
      FUN_1000da768(lVar24 + 0x1c8);
      uVar10 = *(undefined8 *)(lVar24 + 0x1e0);
      lVar13 = *(long *)(lVar24 + 0x1e8);
      FUN_100004640(lVar24 + 0x1c8,uVar10);
      (**(code **)(lVar13 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001b,0x8000000100d900f0,uVar10,
                 lVar13);
      FUN_100004594(lVar24 + 0x1c8);
      FUN_1000da768(lVar24 + 0x1f0);
      FUN_100004640(lVar24 + 0x1f0,*(undefined8 *)(lVar24 + 0x208));
      uVar10 = *puVar18;
      uVar19 = puVar18[1];
      uVar14 = puVar18[4];
      uVar21 = puVar18[5];
      puVar12 = &DAT_100fad118;
      FUN_1000037f0(&DAT_100fad118,&DAT_100c2bec0);
      _swift_allocObject();
      *(undefined8 *)(puVar12 + 0x18) = 4;
      *(undefined8 *)(puVar12 + 0x10) = 2;
      *(undefined8 *)(puVar12 + 0x20) = 0x5f65736e6563696c;
      *(undefined8 *)(puVar12 + 0x28) = 0xeb0000000079656b;
      *(undefined8 *)(puVar12 + 0x30) = uVar10;
      *(undefined8 *)(puVar12 + 0x38) = uVar19;
      *(undefined8 *)(puVar12 + 0x40) = 0x65636e6174736e69;
      *(undefined8 *)(puVar12 + 0x48) = 0xeb0000000064695f;
      *(undefined8 *)(puVar12 + 0x50) = uVar14;
      *(undefined8 *)(puVar12 + 0x58) = uVar21;
      _swift_bridgeObjectRetain(uVar21);
      _swift_bridgeObjectRetain(uVar19);
      puVar5 = puVar12;
      FUN_1000dea40(puVar12);
      _swift_setDeallocating(puVar12);
      puVar6 = &DAT_100fad120;
      FUN_1000037f0(&DAT_100fad120,&DAT_100c2bec8);
      _swift_arrayDestroy(puVar12 + 0x20,2,puVar6);
      _swift_deallocClassInstance(puVar12,0x20,7);
      FUN_1000dd650(uVar16,0x65746164696c6176,&DAT_e800000000000000,puVar5);
      _swift_bridgeObjectRelease(puVar5);
      plVar7 = (long *)0xc0;
      _swift_task_alloc();
      *(long **)(lVar24 + 0x4f0) = plVar7;
      *plVar7 = lVar9;
      plVar7[1] = (long)FUN_1000e0564;
      FUN_1000dd8b8(plVar7,*(undefined8 *)(lVar24 + 0x4b8),*(undefined8 *)(lVar24 + 0x458),
                    *(undefined8 *)(lVar24 + 0x460),*(undefined8 *)(lVar24 + 0x480));
      return;
    }
    if ((uint)uVar10 == 2) {
      lVar15 = *(long *)(lVar24 + 0x4b0);
      uVar14 = *(undefined8 *)(lVar24 + 0x4a8);
      uVar10 = *(undefined8 *)(lVar24 + 0x490);
      lVar17 = *(long *)(lVar24 + 0x468);
      self = *(ID *)(lVar17 + 0x18);
      objc_stub::lock(self);
      lVar13 = _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense;
      _swift_beginAccess(lVar17 + _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense,
                         lVar24 + 0x400,0,0);
      FUN_100011090(lVar17 + lVar13,uVar10,&DAT_100fad470,&DAT_100c2d0f0);
      objc_stub::unlock(self);
      (**(code **)(lVar15 + 0x30))(uVar10,1,uVar14);
      if ((int)uVar10 != 1) {
        puVar20 = (undefined8 *)(lVar24 + 0x4c0);
        FUN_1000e4b40(*(undefined8 *)(lVar24 + 0x490),*(undefined8 *)(lVar24 + 0x4c0));
        FUN_1000d468c(lVar24 + 0x178);
        uVar10 = *(undefined8 *)(lVar24 + 400);
        uVar14 = *(undefined8 *)(lVar24 + 0x198);
        lVar13 = lVar24 + 0x178;
        FUN_100004640(lVar13,uVar10);
        FUN_1000d4df0(0x1000000000000065,0x8000000100d90040,uVar10,uVar14,lVar13);
        FUN_100004594(lVar24 + 0x178);
        FUN_1000da768(lVar24 + 0x1a0);
        uVar10 = *(undefined8 *)(lVar24 + 0x1b8);
        lVar13 = *(long *)(lVar24 + 0x1c0);
        FUN_100004640(lVar24 + 0x1a0,uVar10);
        (**(code **)(lVar13 + 0x30))
                  (0x6c5f746365726964,0xee0065736e656369,0xd000000000000034,0x8000000100d900b0,
                   uVar10,lVar13);
        FUN_100004594(lVar24 + 0x1a0);
        goto LAB_1000dfed0;
      }
      lVar15 = *(long *)(lVar24 + 0x4b0);
      uVar21 = *(undefined8 *)(lVar24 + 0x4a8);
      uVar19 = *(undefined8 *)(lVar24 + 0x450);
      FUN_100005808(*(undefined8 *)(lVar24 + 0x490),&DAT_100fad470,&DAT_100c2d0f0);
      FUN_1000d468c(lVar24 + 0x128);
      uVar10 = *(undefined8 *)(lVar24 + 0x140);
      uVar14 = *(undefined8 *)(lVar24 + 0x148);
      lVar13 = lVar24 + 0x128;
      FUN_100004640(lVar13,uVar10);
      FUN_1000d4db8(0x100000000000002b,0x8000000100d8fff0,uVar10,uVar14,lVar13);
      FUN_100004594(lVar24 + 0x128);
      FUN_1000da768(lVar24 + 0x150);
      uVar10 = *(undefined8 *)(lVar24 + 0x168);
      lVar13 = *(long *)(lVar24 + 0x170);
      FUN_100004640(lVar24 + 0x150,uVar10);
      (**(code **)(lVar13 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd000000000000017,0x8000000100d90020,uVar10,
                 lVar13);
      FUN_100004594(lVar24 + 0x150);
      pcVar11 = *(code **)(lVar15 + 0x38);
      uVar10 = 1;
    }
    else {
      lVar15 = *(long *)(lVar24 + 0x4b0);
      uVar21 = *(undefined8 *)(lVar24 + 0x4a8);
      uVar19 = *(undefined8 *)(lVar24 + 0x450);
      FUN_1000d468c(lVar24 + 0xd8);
      uVar10 = *(undefined8 *)(lVar24 + 0xf0);
      uVar14 = *(undefined8 *)(lVar24 + 0xf8);
      lVar13 = lVar24 + 0xd8;
      FUN_100004640(lVar13,uVar10);
      FUN_1000d4df0(0x100000000000004f,0x8000000100d8ff70,uVar10,uVar14,lVar13);
      FUN_100004594(lVar24 + 0xd8);
      FUN_1000da768(lVar24 + 0x100);
      uVar10 = *(undefined8 *)(lVar24 + 0x118);
      lVar13 = *(long *)(lVar24 + 0x120);
      FUN_100004640(lVar24 + 0x100,uVar10);
      (**(code **)(lVar13 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd000000000000026,0x8000000100d8ffc0,uVar10,
                 lVar13);
      FUN_100004594(lVar24 + 0x100);
      pcVar11 = *(code **)(lVar15 + 0x38);
      uVar10 = 2;
    }
  }
  (*pcVar11)(uVar19,uVar10,2,uVar21);
LAB_1000e0428:
  uVar14 = *(undefined8 *)(lVar24 + 0x4c8);
  uVar10 = *(undefined8 *)(lVar24 + 0x4c0);
  uVar19 = *(undefined8 *)(lVar24 + 0x4b8);
  uVar21 = *(undefined8 *)(lVar24 + 0x4a0);
  uVar16 = *(undefined8 *)(lVar24 + 0x490);
  uVar22 = *(undefined8 *)(lVar24 + 0x488);
  uVar23 = *(undefined8 *)(lVar24 + 0x480);
  _swift_task_dealloc(*(undefined8 *)(lVar24 + 0x4d0));
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
                    /* WARNING: Could not recover jumptable at 0x0001000e04a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))();
  return;
}



/* Address: 0x1000e0564 | FUN_1000e0564 */

void FUN_1000e0564(void)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  long lVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  char *pcVar13;
  long lVar14;
  long *unaff_x22;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  _StringGuts _Var21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  
  lVar19 = *unaff_x22;
  uVar10 = *(undefined8 *)(lVar19 + 0x480);
  lVar11 = *(long *)(lVar19 + 0x478);
  uVar5 = *(undefined8 *)(lVar19 + 0x470);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x4f0));
  (**(code **)(lVar11 + 8))(uVar10,uVar5);
  FUN_100004594(lVar19 + 0x1f0);
  if (unaff_x20 == 0) {
    uVar10 = *(undefined8 *)(lVar19 + 0x4d0);
    uVar8 = *(undefined8 *)(lVar19 + 0x4b8);
    lVar14 = *(long *)(lVar19 + 0x4b0);
    uVar17 = *(undefined8 *)(lVar19 + 0x4a8);
    uVar20 = *(undefined8 *)(lVar19 + 0x488);
    uVar18 = *(undefined8 *)(lVar19 + 0x450);
    FUN_1000d468c(lVar19 + 0x3a8);
    uVar5 = *(undefined8 *)(lVar19 + 0x3c0);
    uVar15 = *(undefined8 *)(lVar19 + 0x3c8);
    lVar11 = lVar19 + 0x3a8;
    FUN_100004640(lVar11,uVar5);
    FUN_1000d4db8(0x1000000000000037,0x8000000100d902c0,uVar5,uVar15,lVar11);
    FUN_100004594(lVar19 + 0x3a8);
    FUN_1000da768(lVar19 + 0x60);
    uVar5 = *(undefined8 *)(lVar19 + 0x78);
    lVar11 = *(long *)(lVar19 + 0x80);
    FUN_100004640(lVar19 + 0x60,uVar5);
    (**(code **)(lVar11 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001d,0x8000000100d90300,uVar5,
               lVar11);
    FUN_100004594(lVar19 + 0x60);
    FUN_1000de684(uVar8,uVar20);
    pcVar16 = *(code **)(lVar14 + 0x38);
    (*pcVar16)(uVar20,0,1,uVar17);
    FUN_1000e15f4(uVar20);
    FUN_100005808(uVar20,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_1000de6c8(uVar10);
    FUN_1000e4b40(uVar8,uVar18);
    (*pcVar16)(uVar18,0,2,uVar17);
  }
  else {
    *(long *)(lVar19 + 0x420) = unaff_x20;
    _swift_errorRetain();
    pcVar13 = &DAT_100fad480;
    FUN_1000037f0(&DAT_100fad480,&DAT_100c2c4a0);
    puVar7 = &DAT_100eb5ff8;
    uVar2 = lVar19 + 0x3d0;
    _swift_dynamicCast(uVar2,lVar19 + 0x420,pcVar13,&DAT_100eb5ff8,0);
    if ((uVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(lVar19 + 0x4d0);
      uVar15 = *(undefined8 *)(lVar19 + 0x450);
      _swift_errorRelease(*(undefined8 *)(lVar19 + 0x420));
      FUN_1000d468c(lVar19 + 0x218);
      puVar9 = *(undefined **)(lVar19 + 0x230);
      uVar10 = *(undefined8 *)(lVar19 + 0x238);
      _Var21.unknown = puVar9;
      FUN_100004640(lVar19 + 0x218);
      Swift::_StringGuts::grow(0x38,_Var21);
      SVar23.bridgeObject = (void *)0x8000000100d90110;
      SVar23.str = (char *)0xd000000000000036;
      SVar32.bridgeObject = puVar7;
      SVar32.str = pcVar13;
      Swift::String::append(SVar23,SVar32);
      pcVar13 = (char *)(lVar19 + 1000);
      _swift_getErrorValue();
      SVar23 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar33.bridgeObject = puVar7;
      SVar33.str = pcVar13;
      Swift::String::append(SVar23,SVar33);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      FUN_1000d4df0(0,0xe000000000000000,puVar9,uVar10);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(lVar19 + 0x218);
      FUN_1000da768(lVar19 + 0x240);
      uVar10 = *(undefined8 *)(lVar19 + 600);
      lVar11 = *(long *)(lVar19 + 0x260);
      FUN_100004640(lVar19 + 0x240,uVar10);
      (**(code **)(lVar11 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001f,0x8000000100d90150,uVar10,
                 lVar11);
      FUN_100004594(lVar19 + 0x240);
      FUN_1000da768(lVar19 + 0x268);
      lVar11 = *(long *)(lVar19 + 0x288);
      FUN_100004640(lVar19 + 0x268,*(undefined8 *)(lVar19 + 0x280));
      (**(code **)(lVar11 + 0x20))();
      FUN_100004594(lVar19 + 0x268);
      FUN_1000e0f10(uVar15,0x206b726f7774656e,0xed0000726f727265);
      _swift_errorRelease();
      FUN_1000de6c8(uVar5);
    }
    else {
      _swift_errorRelease();
      bVar1 = *(byte *)(lVar19 + 0x3d0);
      uVar5 = *(undefined8 *)(lVar19 + 0x3d8);
      uVar17 = *(undefined8 *)(lVar19 + 0x3e0);
      FUN_1000d468c(lVar19 + 0x290);
      pcVar6 = *(char **)(lVar19 + 0x2a8);
      pvVar12 = *(void **)(lVar19 + 0x2b0);
      _Var21.unknown = pcVar6;
      FUN_100004640(lVar19 + 0x290);
      Swift::_StringGuts::grow(0x37,_Var21);
      SVar22.bridgeObject = (void *)0x8000000100d90170;
      SVar22.str = (char *)0xd000000000000035;
      SVar26.bridgeObject = puVar7;
      SVar26.str = pcVar13;
      Swift::String::append(SVar22,SVar26);
      uVar15 = *(undefined8 *)(&DAT_100c2c620 + (ulong)(uint)bVar1 * 8);
      *(undefined8 *)(lVar19 + 0x430) = uVar15;
      SVar23 = Swift::CustomStringConvertible::get_description();
      SVar27.bridgeObject = puVar7;
      SVar27.str = pcVar13;
      Swift::String::append(SVar23,SVar27);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      FUN_1000d4df0(0,0xe000000000000000);
      _swift_bridgeObjectRelease(0xe000000000000000);
      FUN_100004594(lVar19 + 0x290);
      FUN_1000da768(lVar19 + 0x2b8);
      puVar7 = *(undefined **)(lVar19 + 0x2d0);
      lVar11 = *(long *)(lVar19 + 0x2d8);
      _Var21.unknown = puVar7;
      FUN_100004640(lVar19 + 0x2b8);
      Swift::_StringGuts::grow(0x1d,_Var21);
      _swift_bridgeObjectRelease(0xe000000000000000);
      *(undefined8 *)(lVar19 + 0x438) = uVar15;
      SVar23 = Swift::CustomStringConvertible::get_description();
      SVar28.bridgeObject = pvVar12;
      SVar28.str = pcVar6;
      Swift::String::append(SVar23,SVar28);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      _Var21.unknown = (undefined *)0xee0065736e656369;
      (**(code **)(lVar11 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001b,0x8000000100d901b0,puVar7,
                 lVar11);
      _swift_bridgeObjectRelease(0x8000000100d901b0);
      FUN_100004594(lVar19 + 0x2b8);
      FUN_1000da768(lVar19 + 0x308);
      uVar10 = *(undefined8 *)(lVar19 + 800);
      pcVar13 = *(char **)(lVar19 + 0x328);
      pbVar3 = (byte *)(lVar19 + 0x308);
      FUN_100004640(pbVar3,uVar10);
      FUN_1000df5bc();
      puVar7 = &DAT_100eb5ff8;
      pvVar12 = (void *)0x0;
      _swift_allocError(&DAT_100eb5ff8,pbVar3,0);
      *pbVar3 = bVar1;
      *(undefined8 *)(pbVar3 + 8) = uVar5;
      *(undefined8 *)(pbVar3 + 0x10) = uVar17;
      pcVar16 = *(code **)(pcVar13 + 0x20);
      _swift_bridgeObjectRetain(uVar17);
      (*pcVar16)(puVar7,uVar10);
      _swift_errorRelease(puVar7);
      FUN_100004594(lVar19 + 0x308);
      if (bVar1 - 2 < 3) {
        uVar10 = *(undefined8 *)(lVar19 + 0x4d0);
        lVar11 = *(long *)(lVar19 + 0x4b0);
        uVar18 = *(undefined8 *)(lVar19 + 0x4a8);
        uVar20 = *(undefined8 *)(lVar19 + 0x488);
        uVar5 = *(undefined8 *)(lVar19 + 0x450);
        FUN_1000d468c(lVar19 + 0x358);
        puVar7 = *(undefined **)(lVar19 + 0x370);
        uVar8 = *(undefined8 *)(lVar19 + 0x378);
        _Var21.unknown = puVar7;
        FUN_100004640(lVar19 + 0x358);
        Swift::_StringGuts::grow(0x50,_Var21);
        SVar24.bridgeObject = (void *)0x8000000100d90230;
        SVar24.str = &DAT_d000000000000032;
        SVar29.bridgeObject = pvVar12;
        SVar29.str = pcVar13;
        Swift::String::append(SVar24,SVar29);
        *(undefined8 *)(lVar19 + 0x448) = uVar15;
        SVar23 = Swift::CustomStringConvertible::get_description();
        SVar30.bridgeObject = pvVar12;
        SVar30.str = pcVar13;
        Swift::String::append(SVar23,SVar30);
        _swift_bridgeObjectRelease(uVar17);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        SVar25.bridgeObject = (void *)0x8000000100d90270;
        SVar25.str = (char *)0x100000000000001c;
        SVar31.bridgeObject = pvVar12;
        SVar31.str = pcVar13;
        Swift::String::append(SVar25,SVar31);
        FUN_1000d4df0(0,0xe000000000000000,puVar7,uVar8);
        _swift_bridgeObjectRelease(0xe000000000000000);
        FUN_100004594(lVar19 + 0x358);
        FUN_1000da768(lVar19 + 0x380);
        uVar15 = *(undefined8 *)(lVar19 + 0x398);
        lVar14 = *(long *)(lVar19 + 0x3a0);
        FUN_100004640(lVar19 + 0x380,uVar15);
        (**(code **)(lVar14 + 0x30))
                  (0x6c5f746365726964,0xee0065736e656369,0xd00000000000002c,0x8000000100d90290,
                   uVar15,lVar14);
        FUN_100004594(lVar19 + 0x380);
        pcVar16 = *(code **)(lVar11 + 0x38);
        (*pcVar16)(uVar20,1,1,uVar18);
        FUN_1000e15f4(uVar20);
        FUN_100005808(uVar20,&DAT_100fad470,&DAT_100c2d0f0);
        FUN_1000de6c8(uVar10);
        (*pcVar16)(uVar5,1,2,uVar18);
      }
      else {
        uVar10 = *(undefined8 *)(lVar19 + 0x4d0);
        uVar5 = *(undefined8 *)(lVar19 + 0x450);
        FUN_1000da768(lVar19 + 0x330);
        lVar11 = *(long *)(lVar19 + 0x350);
        FUN_100004640(lVar19 + 0x330,*(undefined8 *)(lVar19 + 0x348));
        pcVar13 = (char *)0xd000000000000033;
        pvVar12 = (void *)0x8000000100d901d0;
        (**(code **)(lVar11 + 0x30))(0x6c5f746365726964);
        FUN_100004594(lVar19 + 0x330);
        Swift::_StringGuts::grow(0x16,_Var21);
        _swift_bridgeObjectRelease(0xe000000000000000);
        *(undefined8 *)(lVar19 + 0x440) = uVar15;
        SVar23 = Swift::CustomStringConvertible::get_description();
        SVar34.bridgeObject = pvVar12;
        SVar34.str = pcVar13;
        Swift::String::append(SVar23,SVar34);
        _swift_bridgeObjectRelease(uVar17);
        _swift_bridgeObjectRelease(SVar23.bridgeObject);
        FUN_1000e0f10(uVar5,0xd000000000000014,0x8000000100d90210);
        _swift_bridgeObjectRelease(0x8000000100d90210);
        FUN_1000de6c8(uVar10);
      }
      _swift_errorRelease(*(undefined8 *)(lVar19 + 0x420));
    }
  }
  uVar10 = *(undefined8 *)(lVar19 + 0x4c8);
  uVar5 = *(undefined8 *)(lVar19 + 0x4c0);
  uVar15 = *(undefined8 *)(lVar19 + 0x4b8);
  uVar17 = *(undefined8 *)(lVar19 + 0x4a0);
  uVar8 = *(undefined8 *)(lVar19 + 0x490);
  uVar18 = *(undefined8 *)(lVar19 + 0x488);
  uVar20 = *(undefined8 *)(lVar19 + 0x480);
  _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x4d0));
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
                    /* WARNING: Could not recover jumptable at 0x0001000e0f0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1000e0f10 | FUN_1000e0f10 */

void FUN_1000e0f10(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  char *pcVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ID IVar10;
  long unaff_x20;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  void *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_88 [3];
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fad470;
  local_c0 = param_3;
  local_b8 = param_1;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar15 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12;
  lVar3 = 0;
  FUN_1000dcac4();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar13 = lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fad4a0;
  FUN_1000037f0(&DAT_100fad4a0,&DAT_100c2c4c8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar13 - extraout_x8_01;
  FUN_1000da768(local_88);
  FUN_1001a8a24(lVar14);
  _swift_release(local_88[0]);
  lVar4 = lVar14;
  _swift_getEnumCaseMultiPayload(lVar14,puVar2);
  iVar1 = (int)lVar4;
  if (iVar1 < 2) {
    if (iVar1 == 0) {
      FUN_1000e4b40(lVar14,lVar13);
      IVar10 = *(ID *)(unaff_x20 + 0x18);
      objc_stub::lock(IVar10);
      FUN_1000de684(lVar13,lVar16);
      pcVar12 = *(code **)(lVar11 + 0x38);
      (*pcVar12)(lVar16,0,1,lVar3);
      lVar4 = _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense;
      pcVar7 = (char *)0x21;
      pvVar8 = (void *)0x0;
      _swift_beginAccess(unaff_x20 +
                         _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense,local_88)
      ;
      FUN_1000e4b84(lVar16,unaff_x20 + lVar4);
      _swift_endAccess(local_88);
      objc_stub::unlock(IVar10);
      FUN_1000d468c(local_88);
      _Var6.unknown = local_70;
      FUN_100004640(local_88);
      local_a0 = 0;
      local_98 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x32,_Var6);
      _swift_bridgeObjectRelease(local_98);
      local_a0 = 0xd000000000000025;
      local_98 = 0x8000000100d90320;
      SVar17.bridgeObject = local_c0;
      SVar17.str = param_2;
      SVar31.bridgeObject = pvVar8;
      SVar31.str = pcVar7;
      Swift::String::append(SVar17,SVar31);
      SVar18.bridgeObject = (void *)0xab0000000064696c;
      SVar18.str = (char *)0x6176209480e22029;
      SVar32.bridgeObject = pvVar8;
      SVar32.str = pcVar7;
      Swift::String::append(SVar18,SVar32);
      uVar5 = local_98;
      FUN_1000d4db8(local_a0,local_98,local_70,lStack_68);
      _swift_bridgeObjectRelease(uVar5);
      FUN_100004594(local_88);
      uVar5 = local_b8;
      FUN_1000de684(lVar13,local_b8);
      (*pcVar12)(uVar5,0,2,lVar3);
      FUN_1000de6c8(lVar13);
      return;
    }
    FUN_1000d468c(local_88);
    _Var6.unknown = local_70;
    FUN_100004640(local_88);
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3b,_Var6);
    SVar22.bridgeObject = (void *)0x8000000100d90320;
    SVar22.str = (char *)0xd000000000000025;
    SVar36.bridgeObject = param_5;
    SVar36.str = param_4;
    Swift::String::append(SVar22,SVar36);
    SVar23.bridgeObject = local_c0;
    SVar23.str = param_2;
    SVar37.bridgeObject = param_5;
    SVar37.str = param_4;
    Swift::String::append(SVar23,SVar37);
    SVar24.bridgeObject = (void *)0x8000000100d90420;
    SVar24.str = (char *)0x1000000000000014;
    SVar38.bridgeObject = param_5;
    SVar38.str = param_4;
    Swift::String::append(SVar24,SVar38);
    uVar5 = local_98;
    FUN_1000d4df0(local_a0,local_98,local_70,lStack_68);
    _swift_bridgeObjectRelease(uVar5);
    FUN_100004594(local_88);
    (**(code **)(lVar11 + 0x38))(local_b8,1,2,lVar3);
    FUN_100005808(lVar14,&DAT_100fad4a0,&DAT_100c2c4c8);
    return;
  }
  if (iVar1 == 2) {
    IVar10 = *(ID *)(unaff_x20 + 0x18);
    objc_stub::lock(IVar10);
    lVar4 = _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense;
    _swift_beginAccess(unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense
                       ,&local_a0,0,0);
    pcVar7 = "\x10b\v";
    pcVar9 = pcVar7;
    FUN_100011090(unaff_x20 + lVar4,lVar15,&DAT_100fad470);
    objc_stub::unlock(IVar10);
    lVar4 = lVar15;
    (**(code **)(lVar11 + 0x30))(lVar15,1,lVar3);
    FUN_100005808(lVar15,&DAT_100fad470);
    if ((int)lVar4 == 1) {
      FUN_1000d468c(local_88);
      _Var6.unknown = local_70;
      FUN_100004640(local_88);
      local_b0 = 0;
      uStack_a8 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x39,_Var6);
      SVar19.bridgeObject = (void *)0x8000000100d90320;
      SVar19.str = (char *)0xd000000000000025;
      SVar33.bridgeObject = pcVar9;
      SVar33.str = pcVar7;
      Swift::String::append(SVar19,SVar33);
      SVar20.bridgeObject = local_c0;
      SVar20.str = param_2;
      SVar34.bridgeObject = pcVar9;
      SVar34.str = pcVar7;
      Swift::String::append(SVar20,SVar34);
      SVar21.bridgeObject = (void *)0x8000000100d90390;
      SVar21.str = (char *)0x1000000000000012;
      SVar35.bridgeObject = pcVar9;
      SVar35.str = pcVar7;
      Swift::String::append(SVar21,SVar35);
      uVar5 = uStack_a8;
      FUN_1000d4df0(local_b0,uStack_a8,local_70,lStack_68);
      _swift_bridgeObjectRelease(uVar5);
      FUN_100004594(local_88);
      pcVar12 = *(code **)(lVar11 + 0x38);
      uVar5 = 1;
      goto LAB_1000e15c8;
    }
    FUN_1000d468c(local_88);
    lVar4 = lStack_68;
    puVar2 = local_70;
    _Var6.unknown = local_70;
    FUN_100004640(local_88);
    local_b0 = 0;
    uStack_a8 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x59,_Var6);
    SVar28.bridgeObject = (void *)0x8000000100d90320;
    SVar28.str = (char *)0xd000000000000025;
    SVar42.bridgeObject = pcVar9;
    SVar42.str = pcVar7;
    Swift::String::append(SVar28,SVar42);
    SVar29.bridgeObject = local_c0;
    SVar29.str = param_2;
    SVar43.bridgeObject = pcVar9;
    SVar43.str = pcVar7;
    Swift::String::append(SVar29,SVar43);
    SVar30.bridgeObject = (void *)0x8000000100d903b0;
    SVar30.str = (char *)0x1000000000000032;
    SVar44.bridgeObject = pcVar9;
    SVar44.str = pcVar7;
    Swift::String::append(SVar30,SVar44);
    uVar5 = uStack_a8;
    FUN_1000d4df0(local_b0,uStack_a8,puVar2,lVar4);
    _swift_bridgeObjectRelease(uVar5);
    FUN_100004594(local_88);
    FUN_1000da768(local_88);
    FUN_100004640(local_88,local_70);
    (**(code **)(lStack_68 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd00000000000002d,0x8000000100d903f0,local_70,
               lStack_68);
  }
  else {
    FUN_1000d468c(local_88);
    _Var6.unknown = local_70;
    FUN_100004640(local_88);
    local_a0 = 0;
    local_98 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x5d,_Var6);
    SVar25.bridgeObject = (void *)0x8000000100d90320;
    SVar25.str = (char *)0xd000000000000025;
    SVar39.bridgeObject = param_5;
    SVar39.str = param_4;
    Swift::String::append(SVar25,SVar39);
    SVar26.bridgeObject = local_c0;
    SVar26.str = param_2;
    SVar40.bridgeObject = param_5;
    SVar40.str = param_4;
    Swift::String::append(SVar26,SVar40);
    SVar27.bridgeObject = (void *)0x8000000100d90350;
    SVar27.str = (char *)0x1000000000000036;
    SVar41.bridgeObject = param_5;
    SVar41.str = param_4;
    Swift::String::append(SVar27,SVar41);
    uVar5 = local_98;
    FUN_1000d4df0(local_a0,local_98,local_70,lStack_68);
    _swift_bridgeObjectRelease(uVar5);
  }
  FUN_100004594(local_88);
  pcVar12 = *(code **)(lVar11 + 0x38);
  uVar5 = 2;
LAB_1000e15c8:
  (*pcVar12)(local_b8,uVar5,2,lVar3);
  return;
}



/* Address: 0x1000e15f4 | FUN_1000e15f4 */

/* WARNING: Removing unreachable block (ram,0x0001000e1850) */
/* WARNING: Removing unreachable block (ram,0x0001000e1860) */

void FUN_1000e15f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined1 *puVar7;
  PassthroughSubject *pPVar8;
  long lVar9;
  long lVar10;
  ID self;
  undefined1 local_e0 [80];
  undefined8 local_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  puVar3 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = local_e0 + -extraout_x8;
  lVar4 = 0;
  FUN_1000dcac4();
  lVar9 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense;
  _swift_beginAccess(unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense,
                     local_90,0x21,0);
  FUN_1000e4af0(param_1,unaff_x20 + lVar1);
  _swift_endAccess(local_90);
  objc_stub::unlock(self);
  FUN_100011090(param_1,puVar7,&DAT_100fad470);
  puVar5 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,lVar4);
  if ((int)puVar5 == 1) {
    FUN_100005808(puVar7,&DAT_100fad470,&DAT_100c2d0f0);
    FUN_1000da768(local_90);
    FUN_1001a962c();
    _swift_release(local_90[0]);
    FUN_1000d468c(local_90);
    lVar1 = lStack_70;
    uVar2 = local_78;
    puVar6 = local_90;
    FUN_100004640(puVar6,local_78);
    FUN_1000d4db8(0xd00000000000001c,0x8000000100d8fe10,uVar2,lVar1,puVar6);
    FUN_100004594(local_90);
    FUN_1000da768(local_90);
    FUN_100004640(local_90,local_78);
    (**(code **)(lStack_70 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd000000000000022,0x8000000100d8fe30,local_78,
               lStack_70);
  }
  else {
    FUN_1000e4b40(puVar7,lVar10);
    FUN_1000da768(local_90);
    FUN_1001a8654(lVar10);
    _swift_release(local_90[0]);
    FUN_1000da768(local_90);
    FUN_100004640(local_90,local_78);
    (**(code **)(lStack_70 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001b,0x8000000100d8fe60,local_78,
               lStack_70);
    FUN_1000de6c8(lVar10);
  }
  FUN_100004594(local_90);
  pPVar8 = *(PassthroughSubject **)(unaff_x20 + 0x10);
  _swift_retain(pPVar8);
  Combine::PassthroughSubject::send(pPVar8,param_1);
  _swift_release(pPVar8);
  return;
}



/* Address: 0x1000e1ae0 | FUN_1000e1ae0 */

void FUN_1000e1ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char *param_5,void *param_6)

{
  __int64 _Var1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  Date DVar5;
  undefined *puVar6;
  ulong uVar7;
  URLRequest_conflict UVar8;
  __int64 _Var9;
  undefined *puVar10;
  undefined *puVar11;
  long *plVar12;
  long unaff_x20;
  long unaff_x22;
  String SVar13;
  
  *(long *)(unaff_x22 + 0x228) = unaff_x20;
  lVar3 = 0;
  FUN_1000e78b4();
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar4;
  DVar5 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x238) = DVar5.unknown;
  lVar3 = *(long *)(DVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x240) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x248) = uVar4;
  puVar6 = &DAT_100fad220;
  FUN_1000037f0(&DAT_100fad220,&DAT_100c2c110);
  *(undefined **)(unaff_x22 + 0x250) = puVar6;
  uVar4 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 600) = uVar4;
  puVar6 = &DAT_100fad0e8;
  FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
  uVar4 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x260) = uVar7;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar4;
  puVar6 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  uVar4 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar4;
  UVar8 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x278) = UVar8.unknown;
  lVar3 = *(long *)(UVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x280) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x288) = uVar4;
  lVar3 = 0;
  FUN_1000dcac4();
  *(long *)(unaff_x22 + 0x290) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x298) = lVar3;
  uVar7 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2a0) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x2a8) =
       *(undefined8 *)(unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::telemetry);
  FUN_1000da768(unaff_x22 + 0x70);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar2);
  (**(code **)(lVar3 + 0x30))
            (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001a,0x8000000100d8fd20,uVar2,lVar3
            );
  FUN_100004594(unaff_x22 + 0x70);
  *(char **)(unaff_x22 + 0x1f0) = param_5;
  *(void **)(unaff_x22 + 0x1f8) = param_6;
  SVar13.bridgeObject = param_6;
  SVar13.str = param_5;
  _Var9 = Swift::String::get_count(SVar13);
  _Var1 = _Var9;
  if (_Var9 < 4) {
    _Var1 = 3;
  }
  *(undefined8 *)(unaff_x22 + 0x200) = 0x5f;
  *(undefined8 *)(unaff_x22 + 0x208) = 0xe100000000000000;
  FUN_1000e4ab0();
  SVar13 = (extension_Foundation)::Swift::StringProtocol::_padding
                     (_Var1,unaff_x22 + 0x200,0,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208,_Var9,_Var9);
  *(void **)(unaff_x22 + 0x2b0) = SVar13.bridgeObject;
  FUN_1000da768(unaff_x22 + 0x98);
  FUN_100004640(unaff_x22 + 0x98,*(undefined8 *)(unaff_x22 + 0xb0));
  puVar6 = &DAT_100fad118;
  FUN_1000037f0(&DAT_100fad118,&DAT_100c2bec0);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined8 *)(puVar6 + 0x20) = 0x5f65736e6563696c;
  *(undefined8 *)(puVar6 + 0x28) = 0xeb0000000079656b;
  *(undefined8 *)(puVar6 + 0x30) = param_3;
  *(undefined8 *)(puVar6 + 0x38) = param_4;
  *(undefined8 *)(puVar6 + 0x40) = 0x65636e6174736e69;
  *(undefined8 *)(puVar6 + 0x48) = 0xed0000656d616e5f;
  *(String *)(puVar6 + 0x50) = SVar13;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(SVar13.bridgeObject);
  puVar10 = puVar6;
  FUN_1000dea40(puVar6);
  _swift_setDeallocating(puVar6);
  puVar11 = &DAT_100fad120;
  FUN_1000037f0(&DAT_100fad120,&DAT_100c2bec8);
  _swift_arrayDestroy(puVar6 + 0x20,2,puVar11);
  FUN_1000dd650(uVar4,0x6574617669746361,&DAT_e800000000000000,puVar10);
  _swift_bridgeObjectRelease(puVar10);
  plVar12 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2b8) = plVar12;
  *plVar12 = unaff_x22;
  plVar12[1] = (long)FUN_1000e1e9c;
  FUN_1000dd8b8(plVar12,uVar7,param_1,param_2,uVar4);
  return;
}



/* Address: 0x1000e1e9c | FUN_1000e1e9c */

void FUN_1000e1e9c(void)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  bool bVar5;
  char *pcVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  byte *pbVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ID self;
  long unaff_x20;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  String SVar31;
  String SVar32;
  
  lVar27 = *unaff_x22;
  uVar17 = *(undefined8 *)(lVar27 + 0x2b0);
  uVar18 = *(undefined8 *)(lVar27 + 0x288);
  lVar15 = *(long *)(lVar27 + 0x280);
  uVar21 = *(undefined8 *)(lVar27 + 0x278);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x2b8));
  _swift_bridgeObjectRelease(uVar17);
  (**(code **)(lVar15 + 8))(uVar18,uVar21);
  FUN_100004594(lVar27 + 0x98);
  if (unaff_x20 != 0) {
    *(long *)(lVar27 + 0x210) = unaff_x20;
    _swift_errorRetain();
    pcVar6 = &DAT_100fad480;
    FUN_1000037f0(&DAT_100fad480,&DAT_100c2c4a0);
    puVar9 = &DAT_100eb5ff8;
    uVar7 = lVar27 + 0x1d8;
    _swift_dynamicCast(uVar7,lVar27 + 0x210,pcVar6,&DAT_100eb5ff8,0);
    if ((uVar7 & 1) == 0) {
      _swift_errorRelease(*(undefined8 *)(lVar27 + 0x210));
      FUN_1000da768(lVar27 + 0xc0);
      uVar17 = *(undefined8 *)(lVar27 + 0xd8);
      lVar15 = *(long *)(lVar27 + 0xe0);
      FUN_100004640(lVar27 + 0xc0,uVar17);
      (**(code **)(lVar15 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd00000000000002c,0x8000000100d8fd40,uVar17,
                 lVar15);
      FUN_100004594(lVar27 + 0xc0);
      FUN_1000da768(lVar27 + 0xe8);
      lVar15 = *(long *)(lVar27 + 0x108);
      FUN_100004640(lVar27 + 0xe8,*(undefined8 *)(lVar27 + 0x100));
      (**(code **)(lVar15 + 0x20))();
      FUN_100004594(lVar27 + 0xe8);
      _swift_willThrow();
    }
    else {
      _swift_errorRelease();
      bVar3 = *(byte *)(lVar27 + 0x1d8);
      uVar17 = *(undefined8 *)(lVar27 + 0x1e0);
      uVar21 = *(undefined8 *)(lVar27 + 0x1e8);
      FUN_1000da768(lVar27 + 0x110);
      puVar1 = *(undefined **)(lVar27 + 0x128);
      lVar15 = *(long *)(lVar27 + 0x130);
      _Var10.unknown = puVar1;
      FUN_100004640(lVar27 + 0x110);
      Swift::_StringGuts::grow(0x1d,_Var10);
      _swift_bridgeObjectRelease(0xe000000000000000);
      *(undefined8 *)(lVar27 + 0x218) = *(undefined8 *)(&DAT_100c2c620 + (ulong)bVar3 * 8);
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar32.bridgeObject = puVar9;
      SVar32.str = pcVar6;
      Swift::String::append(SVar31,SVar32);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      (**(code **)(lVar15 + 0x30))
                (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001b,0x8000000100d8fd70,puVar1,
                 lVar15);
      _swift_bridgeObjectRelease(0x8000000100d8fd70);
      FUN_100004594(lVar27 + 0x110);
      FUN_1000da768(lVar27 + 0x138);
      uVar18 = *(undefined8 *)(lVar27 + 0x150);
      lVar15 = *(long *)(lVar27 + 0x158);
      pbVar8 = (byte *)(lVar27 + 0x138);
      FUN_100004640(pbVar8,uVar18);
      FUN_1000df5bc();
      puVar9 = &DAT_100eb5ff8;
      pbVar11 = pbVar8;
      _swift_allocError(&DAT_100eb5ff8,pbVar8,0,0);
      *pbVar11 = bVar3;
      *(undefined8 *)(pbVar11 + 8) = uVar17;
      *(undefined8 *)(pbVar11 + 0x10) = uVar21;
      UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x20);
      _swift_bridgeObjectRetain();
      (*UNRECOVERED_JUMPTABLE)(puVar9,uVar18,lVar15);
      _swift_errorRelease(puVar9);
      FUN_100004594(lVar27 + 0x138);
      FUN_1000da768(lVar27 + 0x160);
      lVar15 = *(long *)(lVar27 + 0x180);
      FUN_100004640(lVar27 + 0x160,*(undefined8 *)(lVar27 + 0x178));
      uVar7 = (ulong)((ulong)bVar3 < 2);
      uVar18 = 0;
      FUN_100191c80(1,uVar7,0,0);
      (**(code **)(lVar15 + 0x18))();
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar18);
      FUN_100004594(lVar27 + 0x160);
      _swift_allocError(&DAT_100eb5ff8,pbVar8,0,0);
      *pbVar8 = bVar3;
      *(undefined8 *)(pbVar8 + 8) = uVar17;
      *(undefined8 *)(pbVar8 + 0x10) = uVar21;
      _swift_willThrow();
      _swift_errorRelease(*(undefined8 *)(lVar27 + 0x210));
    }
    uVar29 = *(undefined8 *)(lVar27 + 0x288);
    uVar17 = *(undefined8 *)(lVar27 + 0x270);
    uVar18 = *(undefined8 *)(lVar27 + 0x268);
    uVar21 = *(undefined8 *)(lVar27 + 0x260);
    uVar19 = *(undefined8 *)(lVar27 + 600);
    uVar23 = *(undefined8 *)(lVar27 + 0x248);
    uVar25 = *(undefined8 *)(lVar27 + 0x230);
    _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x2a0));
    _swift_task_dealloc(uVar29);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar25);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
    goto LAB_1000e26a4;
  }
  lVar22 = *(long *)(lVar27 + 0x2a0);
  lVar24 = *(long *)(lVar27 + 0x298);
  lVar28 = *(long *)(lVar27 + 0x290);
  uVar19 = *(undefined8 *)(lVar27 + 0x270);
  uVar21 = *(undefined8 *)(lVar27 + 0x268);
  lVar15 = *(long *)(lVar27 + 600);
  lVar13 = *(long *)(lVar27 + 0x250);
  lVar14 = *(long *)(lVar27 + 0x240);
  uVar18 = *(undefined8 *)(lVar27 + 0x238);
  FUN_1000da768(lVar27 + 0x188);
  uVar17 = *(undefined8 *)(lVar27 + 0x1a0);
  lVar2 = *(long *)(lVar27 + 0x1a8);
  FUN_100004640(lVar27 + 0x188,uVar17);
  (**(code **)(lVar2 + 0x30))
            (0x6c5f746365726964,0xee0065736e656369,0xd00000000000001d,0x8000000100d8fd90,uVar17,
             lVar2);
  FUN_100004594(lVar27 + 0x188);
  FUN_1000de684(lVar22,uVar19);
  (**(code **)(lVar24 + 0x38))(uVar19,0,1,lVar28);
  FUN_1000e15f4(uVar19);
  FUN_100005808(uVar19,&DAT_100fad470,&DAT_100c2d0f0);
  FUN_1000da768(lVar27 + 0x1b0);
  lVar2 = *(long *)(lVar27 + 0x1d0);
  FUN_100004640();
  iVar4 = *(int *)(lVar28 + 0x1c);
  (**(code **)(lVar14 + 0x38))(uVar21,1,1,uVar18);
  lVar24 = (long)*(int *)(lVar13 + 0x30);
  FUN_100011090(lVar22 + iVar4,lVar15,&DAT_100fad0e8,&DAT_100c2bea0);
  FUN_100011090(uVar21,lVar15 + lVar24,&DAT_100fad0e8,&DAT_100c2bea0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 0x30);
  lVar13 = lVar15;
  (*UNRECOVERED_JUMPTABLE)(lVar15,1,uVar18);
  if ((int)lVar13 == 1) {
    uVar17 = *(undefined8 *)(lVar27 + 0x238);
    FUN_100005808(*(undefined8 *)(lVar27 + 0x268),&DAT_100fad0e8,&DAT_100c2bea0);
    lVar15 = lVar15 + lVar24;
    (*UNRECOVERED_JUMPTABLE)(lVar15,1,uVar17);
    if ((int)lVar15 != 1) {
LAB_1000e250c:
      FUN_100005808(*(undefined8 *)(lVar27 + 600),&DAT_100fad220,&DAT_100c2c110);
      goto LAB_1000e2524;
    }
    FUN_100005808(*(undefined8 *)(lVar27 + 600),&DAT_100fad0e8,&DAT_100c2bea0);
    uVar12 = 2;
  }
  else {
    uVar17 = *(undefined8 *)(lVar27 + 0x238);
    FUN_100011090(*(undefined8 *)(lVar27 + 600),*(undefined8 *)(lVar27 + 0x260),&DAT_100fad0e8,
                  &DAT_100c2bea0);
    lVar13 = lVar15 + lVar24;
    (*UNRECOVERED_JUMPTABLE)(lVar13,1,uVar17);
    uVar17 = *(undefined8 *)(lVar27 + 0x268);
    uVar18 = *(undefined8 *)(lVar27 + 0x260);
    if ((int)lVar13 == 1) {
      lVar15 = *(long *)(lVar27 + 0x240);
      uVar21 = *(undefined8 *)(lVar27 + 0x238);
      FUN_100005808(uVar17,&DAT_100fad0e8,&DAT_100c2bea0);
      (**(code **)(lVar15 + 8))(uVar18,uVar21);
      goto LAB_1000e250c;
    }
    uVar19 = *(undefined8 *)(lVar27 + 600);
    uVar23 = *(undefined8 *)(lVar27 + 0x248);
    lVar13 = *(long *)(lVar27 + 0x240);
    uVar21 = *(undefined8 *)(lVar27 + 0x238);
    (**(code **)(lVar13 + 0x20))(uVar23,lVar15 + lVar24,uVar21);
    puVar9 = &DAT_100fad228;
    FUN_100003a00(&DAT_100fad228,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    bVar5 = Swift::Equatable::___infix(uVar18,uVar23,uVar21,puVar9);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 8);
    (*UNRECOVERED_JUMPTABLE)(uVar23,uVar21);
    FUN_100005808(uVar17,&DAT_100fad0e8,&DAT_100c2bea0);
    (*UNRECOVERED_JUMPTABLE)(uVar18,uVar21);
    FUN_100005808(uVar19,&DAT_100fad0e8,&DAT_100c2bea0);
    if (bVar5) {
      uVar12 = 2;
      goto LAB_1000e2528;
    }
LAB_1000e2524:
    uVar12 = 3;
  }
LAB_1000e2528:
  uVar17 = *(undefined8 *)(lVar27 + 0x230);
  FUN_1000da768(lVar27 + 0x220);
  lVar15 = *(long *)(lVar27 + 0x220);
  self = *(ID *)(lVar15 + 0x18);
  objc_stub::lock(self);
  FUN_1000e6eb4(uVar17);
  puVar9 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  (**(code **)(*(long *)(puVar9 + -8) + 0x30))(uVar17,3,puVar9);
  if ((int)uVar17 - 1U < 2) {
    uVar17 = 0;
  }
  else {
    if ((int)uVar17 == 0) {
      (**(code **)(*(long *)(lVar27 + 0x240) + 8))
                (*(undefined8 *)(lVar27 + 0x230),*(undefined8 *)(lVar27 + 0x238));
    }
    uVar17 = 1;
  }
  uVar25 = *(undefined8 *)(lVar27 + 0x2a0);
  uVar20 = *(undefined8 *)(lVar27 + 0x288);
  uVar23 = *(undefined8 *)(lVar27 + 0x270);
  uVar29 = *(undefined8 *)(lVar27 + 0x268);
  uVar30 = *(undefined8 *)(lVar27 + 0x260);
  uVar26 = *(undefined8 *)(lVar27 + 600);
  uVar19 = *(undefined8 *)(lVar27 + 0x248);
  uVar21 = *(undefined8 *)(lVar27 + 0x230);
  objc_stub::unlock(self);
  _swift_release(lVar15);
  uVar7 = (ulong)uVar12;
  uVar18 = 0;
  FUN_100192204(1,uVar7,0,0,1,uVar17,0,0,3);
  (**(code **)(lVar2 + 0x18))();
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar18);
  FUN_1000de6c8(uVar25);
  FUN_100004594(lVar27 + 0x1b0);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar30);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
LAB_1000e26a4:
                    /* WARNING: Could not recover jumptable at 0x0001000e26c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1000e2774 | FUN_1000e2774 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e2774(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100005808(unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense,
                &DAT_100fad470,&DAT_100c2d0f0);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::networkStatus));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::licenseCache));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::licenseAPI));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::telemetry));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::analytics));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::trialManager));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20PasteLicensingDirect20DirectLicenseManager::logger));
  return;
}



/* Address: 0x1000e2828 | FUN_1000e2828 */

void FUN_1000e2828(void)

{
  FUN_1000e2774();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000e284c | FUN_1000e284c */

void FUN_1000e284c(void)

{
  FUN_1000e2854(0);
  return;
}



/* Address: 0x1000e2854 | FUN_1000e2854 */

void FUN_1000e2854(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fad2e8,&TargetClassDescriptor_100ca2bfc);
  return;
}



/* Address: 0x1000e2868 | FUN_1000e2868 */

void FUN_1000e2868(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_68 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  lVar2 = 0x13f;
  local_70 = puVar1;
  FUN_1000e28fc();
  if (param_2 < 0x40) {
    local_60 = *(long *)(lVar2 + -8) + 0x40;
    puStack_58 = puVar1;
    local_50 = puVar1;
    puStack_48 = puVar1;
    local_40 = puVar1;
    puStack_38 = puVar1;
    local_30 = puVar1;
    puStack_28 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000e28fc | FUN_1000e28fc */

void FUN_1000e28fc(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fad2f8 == 0) {
    lVar2 = 0xff;
    FUN_1000dcac4();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fad2f8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1000e2950 | FUN_1000e2950 */

long * FUN_1000e2950(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  Date DVar6;
  undefined *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  lVar10 = *(long *)(param_3 + -8);
  uVar3 = *(uint *)(lVar10 + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    lVar4 = 0;
    FUN_1000dcac4();
    lVar11 = *(long *)(lVar4 + -8);
    plVar5 = param_2;
    (**(code **)(lVar11 + 0x30))(param_2,2,lVar4);
    if ((int)plVar5 != 0) {
      plVar5 = _memcpy(param_1,param_2,*(size_t *)(lVar10 + 0x40));
      return plVar5;
    }
    lVar10 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar10;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    lVar12 = (long)*(int *)(lVar4 + 0x1c);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar6.unknown + -8);
    pcVar13 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar10);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    lVar10 = (long)param_2 + lVar12;
    (*pcVar13)(lVar10,1,DVar6.unknown);
    if ((int)lVar10 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fad0e8;
      FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    (**(code **)(lVar11 + 0x38))(param_1,0,2,lVar4);
  }
  else {
    lVar10 = *param_2;
    *param_1 = lVar10;
    uVar8 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar10 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000e2af0 | FUN_1000e2af0 */

void FUN_1000e2af0(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  Date DVar4;
  
  lVar2 = 0;
  FUN_1000dcac4();
  lVar3 = param_1;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,2,lVar2);
  if ((int)lVar3 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
    iVar1 = *(int *)(lVar2 + 0x1c);
    DVar4 = Foundation::Date::typeMetadataAccessor();
    lVar2 = *(long *)(DVar4.unknown + -8);
    lVar3 = param_1 + iVar1;
    (**(code **)(lVar2 + 0x30))(lVar3,1,DVar4.unknown);
    if ((int)lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000e2b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar2 + 8))(param_1 + iVar1,DVar4.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x1000e2b9c | FUN_1000e2b9c */

undefined8 * FUN_1000e2b9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  Date DVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  lVar4 = 0;
  FUN_1000dcac4();
  lVar10 = *(long *)(lVar4 + -8);
  puVar5 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,2,lVar4);
  if ((int)puVar5 != 0) {
    puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar5;
  }
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  lVar11 = (long)*(int *)(lVar4 + 0x1c);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar6.unknown + -8);
  pcVar12 = *(code **)(lVar9 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  lVar7 = (long)param_2 + lVar11;
  (*pcVar12)(lVar7,1,DVar6.unknown);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar9 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar6.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar11,0,1,DVar6.unknown);
  }
  else {
    puVar8 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  (**(code **)(lVar10 + 0x38))(param_1,0,2,lVar4);
  return param_1;
}



/* Address: 0x1000e2d18 | FUN_1000e2d18 */

undefined8 * FUN_1000e2d18(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined8 *puVar2;
  Date DVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  DVar1.unknown = (undefined *)0x0;
  FUN_1000dcac4();
  lVar12 = *(long *)(DVar1.unknown + -8);
  pcVar9 = *(code **)(lVar12 + 0x30);
  puVar4 = param_1;
  (*pcVar9)(param_1,2,DVar1.unknown);
  puVar2 = param_2;
  (*pcVar9)(param_2,2,DVar1.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar2 != 0) {
      FUN_1000de6c8(param_1);
      goto LAB_1000e2e34;
    }
    *param_1 = *param_2;
    uVar8 = param_1[1];
    param_1[1] = param_2[1];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
    param_1[2] = param_2[2];
    uVar8 = param_1[3];
    param_1[3] = param_2[3];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
    param_1[4] = param_2[4];
    uVar8 = param_1[5];
    param_1[5] = param_2[5];
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar8);
    lVar7 = (long)*(int *)(DVar1.unknown + 0x1c);
    DVar1 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar1.unknown + -8);
    pcVar9 = *(code **)(lVar13 + 0x30);
    lVar12 = (long)param_1 + lVar7;
    (*pcVar9)(lVar12,1,DVar1.unknown);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,DVar1.unknown);
    if ((int)lVar12 == 0) {
      if ((int)lVar5 == 0) {
        (**(code **)(lVar13 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar1.unknown);
        return param_1;
      }
      (**(code **)(lVar13 + 8))((long)param_1 + lVar7,DVar1.unknown);
    }
    else if ((int)lVar5 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar1.unknown);
      pcVar9 = *(code **)(lVar13 + 0x38);
      puVar4 = (undefined8 *)((long)param_1 + lVar7);
      uVar8 = 1;
      goto LAB_1000e2f70;
    }
    puVar6 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  else {
    if ((int)puVar2 != 0) {
LAB_1000e2e34:
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    *param_1 = *param_2;
    uVar8 = param_2[1];
    param_1[1] = uVar8;
    param_1[2] = param_2[2];
    uVar10 = param_2[3];
    param_1[3] = uVar10;
    param_1[4] = param_2[4];
    uVar11 = param_2[5];
    param_1[5] = uVar11;
    lVar13 = (long)*(int *)(DVar1.unknown + 0x1c);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar7 = *(long *)(DVar3.unknown + -8);
    pcVar9 = *(code **)(lVar7 + 0x30);
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRetain(uVar10);
    _swift_bridgeObjectRetain(uVar11);
    lVar5 = (long)param_2 + lVar13;
    (*pcVar9)(lVar5,1,DVar3.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar7 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,DVar3.unknown);
      (**(code **)(lVar7 + 0x38))((long)param_1 + lVar13,0,1,DVar3.unknown);
    }
    else {
      puVar6 = &DAT_100fad0e8;
      FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    pcVar9 = *(code **)(lVar12 + 0x38);
    uVar8 = 2;
    puVar4 = param_1;
LAB_1000e2f70:
    (*pcVar9)(puVar4,0,uVar8,DVar1.unknown);
  }
  return param_1;
}



/* Address: 0x1000e2ff4 | FUN_1000e2ff4 */

undefined8 * FUN_1000e2ff4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar1 = 0;
  FUN_1000dcac4();
  lVar6 = *(long *)(lVar1 + -8);
  puVar2 = param_2;
  (**(code **)(lVar6 + 0x30))(param_2,2,lVar1);
  if ((int)puVar2 != 0) {
    puVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return puVar2;
  }
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  lVar7 = (long)*(int *)(lVar1 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  lVar4 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  (**(code **)(lVar6 + 0x38))(param_1,0,2,lVar1);
  return param_1;
}



/* Address: 0x1000e3130 | FUN_1000e3130 */

undefined8 * FUN_1000e3130(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  undefined8 *puVar2;
  Date DVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  DVar1.unknown = (undefined *)0x0;
  FUN_1000dcac4();
  lVar10 = *(long *)(DVar1.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  puVar4 = param_1;
  (*pcVar11)(param_1,2,DVar1.unknown);
  puVar2 = param_2;
  (*pcVar11)(param_2,2,DVar1.unknown);
  if ((int)puVar4 == 0) {
    if ((int)puVar2 != 0) {
      FUN_1000de6c8(param_1);
      goto LAB_1000e3208;
    }
    uVar8 = param_2[1];
    uVar5 = param_1[1];
    *param_1 = *param_2;
    param_1[1] = uVar8;
    _swift_bridgeObjectRelease(uVar5);
    uVar8 = param_2[3];
    uVar5 = param_1[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar8;
    _swift_bridgeObjectRelease(uVar5);
    uVar8 = param_2[5];
    uVar5 = param_1[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar8;
    _swift_bridgeObjectRelease(uVar5);
    lVar9 = (long)*(int *)(DVar1.unknown + 0x1c);
    DVar1 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar1.unknown + -8);
    pcVar11 = *(code **)(lVar12 + 0x30);
    lVar10 = (long)param_1 + lVar9;
    (*pcVar11)(lVar10,1,DVar1.unknown);
    lVar6 = (long)param_2 + lVar9;
    (*pcVar11)(lVar6,1,DVar1.unknown);
    if ((int)lVar10 == 0) {
      if ((int)lVar6 == 0) {
        (**(code **)(lVar12 + 0x28))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar1.unknown);
        return param_1;
      }
      (**(code **)(lVar12 + 8))((long)param_1 + lVar9,DVar1.unknown);
    }
    else if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar1.unknown);
      pcVar11 = *(code **)(lVar12 + 0x38);
      puVar4 = (undefined8 *)((long)param_1 + lVar9);
      uVar8 = 1;
      goto LAB_1000e3308;
    }
    puVar7 = &DAT_100fad0e8;
    FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  else {
    if ((int)puVar2 != 0) {
LAB_1000e3208:
      puVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar4;
    }
    uVar8 = *param_2;
    uVar13 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar13;
    param_1[2] = uVar5;
    uVar8 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    lVar9 = (long)*(int *)(DVar1.unknown + 0x1c);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar12 = *(long *)(DVar3.unknown + -8);
    lVar6 = (long)param_2 + lVar9;
    (**(code **)(lVar12 + 0x30))(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 0) {
      (**(code **)(lVar12 + 0x20))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
    }
    else {
      puVar7 = &DAT_100fad0e8;
      FUN_1000037f0(&DAT_100fad0e8,&DAT_100c2bea0);
      _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    pcVar11 = *(code **)(lVar10 + 0x38);
    uVar8 = 2;
    puVar4 = param_1;
LAB_1000e3308:
    (*pcVar11)(puVar4,0,uVar8,DVar1.unknown);
  }
  return param_1;
}



/* Address: 0x1000e3384 | FUN_1000e3384 */

void FUN_1000e3384(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e3390 | FUN_1000e3390 */

int FUN_1000e3390(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1000dcac4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(param_1,param_2,lVar2);
  iVar1 = 0;
  if (1 < (uint)param_1) {
    iVar1 = (uint)param_1 - 2;
  }
  return iVar1;
}



/* Address: 0x1000e33d8 | FUN_1000e33d8 */

void FUN_1000e33d8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e33e4 | FUN_1000e33e4 */

void FUN_1000e33e4(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 2;
  }
  lVar2 = 0;
  FUN_1000dcac4();
                    /* WARNING: Could not recover jumptable at 0x0001000e3434. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(param_1,iVar1,param_3,lVar2);
  return;
}



/* Address: 0x1000e3438 | FUN_1000e3438 */

void FUN_1000e3438(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000dcac4();
                    /* WARNING: Could not recover jumptable at 0x0001000e346c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,2,lVar1);
  return;
}



/* Address: 0x1000e3470 | FUN_1000e3470 */

void FUN_1000e3470(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000dcac4();
                    /* WARNING: Could not recover jumptable at 0x0001000e34ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,2,lVar1);
  return;
}



/* Address: 0x1000e34b0 | FUN_1000e34b0 */

void FUN_1000e34b0(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fad430,&TargetEnumDescriptor_100ca2c44);
  return;
}



/* Address: 0x1000e34c4 | FUN_1000e34c4 */

void FUN_1000e34c4(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_1000dcac4();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,2);
  }
  return;
}



/* Address: 0x1000e3518 | FUN_1000e3518 */

void FUN_1000e3518(void)

{
  long lVar1;
  PassthroughSubject *this;
  undefined *puVar2;
  ID IVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  
  this = (PassthroughSubject *)&DAT_100fad4a8;
  FUN_1000037f0(&DAT_100fad4a8,&DAT_100c2c4d0);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(this);
  *(PassthroughSubject **)(unaff_x20 + 0x10) = this;
  puVar2 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar3 = objc_stub::init((ID)puVar2);
  *(ID *)(unaff_x20 + 0x18) = IVar3;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::lastHeldLicense;
  lVar4 = 0;
  FUN_1000dcac4();
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar4);
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::networkStatus;
  puVar2 = &DAT_100c2c4d8;
  _swift_getKeyPath();
  puVar5 = &DAT_100fad4b0;
  FUN_1000037f0(&DAT_100fad4b0,&DAT_100c2c508);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::licenseCache;
  puVar2 = &DAT_100c2c510;
  _swift_getKeyPath();
  puVar5 = &DAT_100fad4b8;
  FUN_1000037f0(&DAT_100fad4b8,&DAT_100c2c538);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::licenseAPI;
  puVar2 = &DAT_100c2c540;
  _swift_getKeyPath();
  puVar5 = &DAT_100fad4c0;
  FUN_1000037f0(&DAT_100fad4c0,&DAT_100c2c568);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::telemetry;
  puVar2 = &DAT_100c2c570;
  _swift_getKeyPath();
  puVar5 = &DAT_100facff0;
  FUN_1000037f0(&DAT_100facff0,&DAT_100c2c5a0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::analytics;
  puVar2 = &DAT_100c2c5a8;
  _swift_getKeyPath();
  puVar5 = &DAT_100facff8;
  FUN_1000037f0(&DAT_100facff8,&DAT_100c2be10);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::trialManager;
  puVar2 = &DAT_100c2c5e0;
  _swift_getKeyPath();
  puVar5 = &DAT_100facfd8;
  FUN_1000037f0(&DAT_100facfd8,&DAT_100c2c7b0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _TtC20PasteLicensingDirect20DirectLicenseManager::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar6 = 0xd000000000000014;
  FUN_1000d4624(0xd000000000000014,0x8000000100c2c400);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar6;
  return;
}



/* Address: 0x1000e37b4 | FUN_1000e37b4 */

undefined8 FUN_1000e37b4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  TaskPriority TVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 unaff_x20;
  ulong local_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  puVar1 = &DAT_100fad440;
  puVar5 = &DAT_100c2c460;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_1;
  FUN_1000e424c();
  if (((uVar2 & 1) == 0) || (FUN_1000e443c(), puVar5 == (undefined *)0x0)) {
    FUN_1000da768(auStack_88);
    FUN_100004640(auStack_88,local_70);
    (**(code **)(lStack_68 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd000000000000016,0x8000000100d8fcb0,local_70,
               lStack_68);
    FUN_100004594(auStack_88);
    uVar4 = 0;
  }
  else {
    local_90 = param_1;
    FUN_1000da768(auStack_88);
    FUN_100004640(auStack_88,local_70);
    (**(code **)(lStack_68 + 0x30))
              (0x6c5f746365726964,0xee0065736e656369,0xd000000000000016,0x8000000100d8fcd0,local_70,
               lStack_68);
    FUN_100004594(auStack_88);
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
              (auStack_88 + (-8 - extraout_x8),1,1,TVar3.unknown);
    puVar1 = &DAT_100eb6290;
    _swift_allocObject(&DAT_100eb6290,0x48,7);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
    *(ulong *)(puVar1 + 0x28) = local_90;
    *(undefined **)(puVar1 + 0x30) = puVar5;
    *(undefined8 *)(puVar1 + 0x38) = param_2;
    *(undefined8 *)(puVar1 + 0x40) = param_3;
    _swift_retain();
    _swift_retain(param_3);
    FUN_1000e3fb0(0,0,auStack_88 + (-8 - extraout_x8),&DAT_100c2c470,puVar1);
    _swift_release();
    uVar4 = 1;
  }
  return uVar4;
}



/* Address: 0x1000e39d0 | FUN_1000e39d0 */

void FUN_1000e39d0(void)

{
  DispatchWorkItemFlags DVar1;
  ulong uVar2;
  DispatchQoS DVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = in_x6;
  *(undefined8 *)(unaff_x22 + 0xa0) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x88) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x90) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x80) = in_x3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xa8) = DVar1.unknown;
  lVar4 = *(long *)(DVar1.unknown + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar2;
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xc0) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 200) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  _swift_task_switch(FUN_1000e3a60,0,0);
  return;
}



/* Address: 0x1000e3a60 | FUN_1000e3a60 */

void FUN_1000e3a60(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  FUN_1000f3588();
  uVar3 = *param_1;
  uVar1 = uVar3;
  _swift_retain(uVar3);
  FUN_1000f39b4();
  _swift_release(uVar3);
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  plVar2 = (long *)0x2c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1000e3aec;
  FUN_1000e1ae0(0,0,*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),uVar1,
                param_2);
  return;
}



/* Address: 0x1000e3aec | FUN_1000e3aec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000e3aec(void)

{
  long lVar1;
  undefined8 uVar2;
  DispatchWorkItemFlags qos;
  undefined8 uVar3;
  long lVar4;
  OS_dispatch_queue *pOVar5;
  void *pvVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *unaff_x20;
  DispatchQoS DVar10;
  undefined8 uVar11;
  long *unaff_x22;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *local_80;
  
  lVar13 = *unaff_x22;
  uVar11 = *(undefined8 *)(lVar13 + 0xd8);
  lVar12 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xe0));
  _swift_bridgeObjectRelease(uVar11);
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_1000e499c();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
  lVar1 = *(long *)(lVar13 + 200);
  qos.unknown = *(undefined **)(lVar13 + 0xd0);
  uVar11 = *(undefined8 *)(lVar13 + 0xb8);
  uVar3 = *(undefined8 *)(lVar13 + 0xc0);
  uVar2 = *(undefined8 *)(lVar13 + 0xa8);
  lVar4 = *(long *)(lVar13 + 0xb0);
  DVar10.unknown = *(undefined **)(lVar13 + 0xa0);
  uVar15 = *(undefined8 *)(lVar13 + 0xa0);
  uVar14 = *(undefined8 *)(lVar13 + 0x98);
  if (unaff_x20 == (undefined *)0x0) {
    puVar7 = &DAT_100eb6358;
    _swift_allocObject(&DAT_100eb6358,0x20,7);
    *(undefined8 *)(puVar7 + 0x18) = uVar15;
    *(undefined8 *)(puVar7 + 0x10) = uVar14;
    *(undefined8 *)(lVar13 + 0x40) = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = (undefined8 *)(lVar13 + 0x68);
    *local_80 = puVar7;
    *(undefined8 *)(lVar13 + 0x48) = 0x42000000;
    *(code **)(lVar13 + 0x50) = FUN_100030410;
    *(undefined **)(lVar13 + 0x58) = &DAT_100eb6370;
    *(code **)(lVar13 + 0x60) = FUN_1000e4aa8;
    pvVar6 = __Block_copy((undefined8 *)(lVar13 + 0x40));
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined8 *)(lVar13 + 0x78) = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar7 = &DAT_100fad450;
    FUN_100003a00(&DAT_100fad450,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar8 = &DAT_100fad458;
    FUN_1000037f0(&DAT_100fad458,&DAT_100c2c498);
    puVar9 = puVar8;
    FUN_1000e4a34();
    Swift::SetAlgebra::_init(uVar11,(undefined8 *)(lVar13 + 0x78),puVar8,puVar9,uVar2,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar6);
  }
  else {
    puVar7 = &DAT_100eb6308;
    _swift_allocObject(&DAT_100eb6308,0x28,7);
    *(undefined8 *)(puVar7 + 0x10) = uVar14;
    *(undefined **)(puVar7 + 0x18) = DVar10.unknown;
    *(undefined **)(puVar7 + 0x20) = unaff_x20;
    *(undefined8 *)(lVar13 + 0x10) = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = (undefined8 *)(lVar13 + 0x38);
    *local_80 = puVar7;
    *(undefined8 *)(lVar13 + 0x18) = 0x42000000;
    *(code **)(lVar13 + 0x20) = FUN_100030410;
    *(undefined **)(lVar13 + 0x28) = &DAT_100eb6320;
    *(code **)(lVar13 + 0x30) = FUN_1000e4a0c;
    pvVar6 = __Block_copy((undefined8 *)(lVar13 + 0x10));
    _swift_retain(DVar10.unknown);
    DVar10.unknown = unaff_x20;
    _swift_errorRetain();
    Dispatch::DispatchQoS::get_unspecified(DVar10);
    *(undefined8 *)(lVar13 + 0x70) = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar7 = &DAT_100fad450;
    FUN_100003a00(&DAT_100fad450,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar8 = &DAT_100fad458;
    FUN_1000037f0(&DAT_100fad458,&DAT_100c2c498);
    puVar9 = puVar8;
    FUN_1000e4a34();
    Swift::SetAlgebra::_init(uVar11,(undefined8 *)(lVar13 + 0x70),puVar8,puVar9,uVar2,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar6);
    _swift_errorRelease(unaff_x20);
  }
  (**(code **)(lVar4 + 8))(uVar11,uVar2);
  (**(code **)(lVar1 + 8))(qos.unknown,uVar3);
  _swift_release(*local_80);
  uVar11 = *(undefined8 *)(lVar13 + 0xb8);
  _swift_task_dealloc(*(undefined8 *)(lVar13 + 0xd0));
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001000e3e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar12 + 8))();
  return;
}



/* Address: 0x1000e3e34 | FUN_1000e3e34 */

void FUN_1000e3e34(code *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/DirectLicenseManager.swift",0x2f,1,0xf0,UVar4.unknown,puVar3);
  }
  (*param_1)(0);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000e3eec | FUN_1000e3eec */

void FUN_1000e3eec(code *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fad468;
  FUN_100003a00(&DAT_100fad468,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingDirect/DirectLicenseManager.swift",0x2f,1,0xf2,UVar4.unknown,puVar3);
  }
  (*param_1)(param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000e3fb0 | FUN_1000e3fb0 */

void FUN_1000e3fb0(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
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
  
  puVar2 = &DAT_100fad440;
  FUN_1000037f0(&DAT_100fad440,&DAT_100c2c460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fad440,&DAT_100c2c460);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fad440,&DAT_100c2c460);
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
    FUN_100005808(param_3,&DAT_100fad440,&DAT_100c2c460);
    puVar2 = &DAT_100eb62b8;
    _swift_allocObject(&DAT_100eb62b8,0x20,7);
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
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c2c480,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100eb62e0;
    _swift_allocObject(&DAT_100eb62e0,0x20,7);
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
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c2c488,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fad440,&DAT_100c2c460);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1000e424c | FUN_1000e424c */

bool FUN_1000e424c(void)

{
  bool bVar1;
  URL UVar2;
  URL UVar3;
  _StringGuts _Var4;
  URL UVar5;
  _StringGuts _Var6;
  URL UVar7;
  long extraout_x8;
  long extraout_x12;
  URL UVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar2.unknown + -8);
  UVar3 = UVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  UVar5.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar8.unknown = UVar5.unknown + -extraout_x12;
  FUN_1001acef8();
  pcVar10 = *(code **)(lVar9 + 0x10);
  _Var4.unknown = UVar8.unknown;
  _Var6.unknown = UVar3.unknown;
  (*pcVar10)(UVar8.unknown,UVar3.unknown,UVar2.unknown);
  Foundation::URL::_get_scheme((URL)_Var4.unknown);
  pcVar11 = *(code **)(lVar9 + 8);
  UVar7 = UVar2;
  (*pcVar11)();
  Foundation::URL::_get_scheme(UVar8);
  if (_Var6.unknown == (undefined *)0x0) {
    if (UVar7.unknown != (undefined *)0x0) {
      bVar1 = false;
      goto LAB_1000e4408;
    }
LAB_1000e4370:
    _Var4.unknown = UVar5.unknown;
    (*pcVar10)(UVar5.unknown,UVar3.unknown,UVar2.unknown);
    Foundation::URL::_get_host((URL)_Var4.unknown);
    (*pcVar11)();
    Foundation::URL::_get_host(UVar5);
    if (UVar3.unknown != (undefined *)0x0) {
      if (UVar2.unknown == (undefined *)0x0) {
        bVar1 = false;
        UVar7.unknown = UVar3.unknown;
      }
      else {
        UVar7.unknown = UVar2.unknown;
        if (_Var4.unknown == UVar5.unknown && UVar3.unknown == UVar2.unknown) {
          _swift_bridgeObjectRelease(UVar3.unknown);
          bVar1 = true;
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            (_Var4,(_StringGuts)UVar3.unknown,
                             (_StringComparisonResult)(__int8)UVar5.unknown);
          _swift_bridgeObjectRelease(UVar3.unknown);
        }
      }
      goto LAB_1000e4408;
    }
    _Var6.unknown = UVar2.unknown;
    if (UVar2.unknown == (undefined *)0x0) {
      return true;
    }
  }
  else if (UVar7.unknown != (undefined *)0x0) {
    if (_Var4.unknown == UVar8.unknown && _Var6.unknown == UVar7.unknown) {
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(UVar7.unknown);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (_Var4,_Var6,(_StringComparisonResult)(__int8)UVar8.unknown);
      _swift_bridgeObjectRelease(_Var6.unknown);
      _swift_bridgeObjectRelease(UVar7.unknown);
      if (!bVar1) {
        return false;
      }
    }
    goto LAB_1000e4370;
  }
  UVar7.unknown = _Var6.unknown;
  bVar1 = false;
LAB_1000e4408:
  _swift_bridgeObjectRelease(UVar7.unknown);
  return bVar1;
}



/* Address: 0x1000e443c | FUN_1000e443c */

undefined1  [16] FUN_1000e443c(bool param_1)

{
  bool bVar1;
  URLQueryItem UVar2;
  URLComponents UVar3;
  URLComponents UVar4;
  URLQueryItem UVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  String SVar18;
  undefined1 auVar19 [16];
  undefined *local_70;
  undefined *local_68;
  
  UVar2 = Foundation::URLQueryItem::typeMetadataAccessor();
  lVar17 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar7 = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)puVar7 - extraout_x12;
  puVar15 = &DAT_100fad490;
  FUN_1000037f0(&DAT_100fad490,&DAT_100c2c4b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar15 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_100fad498;
  local_68 = (undefined *)(lVar14 - extraout_x8_00);
  FUN_1000037f0(&DAT_100fad498,&DAT_100c2c4b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  puVar15 = (undefined *)(lVar14 - extraout_x8_00) + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar12 = puVar15 + -extraout_x12_00;
  Foundation::URLComponents::_init(param_1);
  FUN_100011090(puVar12,puVar15,&DAT_100fad498,&DAT_100c2c4b8);
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  UVar4.unknown = puVar15;
  (**(code **)(lVar10 + 0x30))(puVar15,1,UVar3.unknown);
  if ((int)UVar4.unknown == 1) {
    puVar7 = &DAT_100fad498;
    puVar9 = &DAT_100c2c4b8;
    FUN_100005808(puVar12,&DAT_100fad498,&DAT_100c2c4b8);
  }
  else {
    local_70 = puVar12;
    Foundation::URLComponents::_get_queryItems(UVar4);
    (**(code **)(lVar10 + 8))(puVar15,UVar3.unknown);
    if (UVar4.unknown == (undefined *)0x0) {
      puVar7 = &DAT_100fad498;
      puVar9 = &DAT_100c2c4b8;
      puVar15 = local_70;
    }
    else {
      uVar16 = *(ulong *)(UVar4.unknown + 0x10);
      if (uVar16 != 0) {
        uVar11 = 0;
        do {
          if (*(ulong *)(UVar4.unknown + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1000e47ec);
            (*pcVar13)();
          }
          (**(code **)(lVar17 + 0x10))
                    (lVar14,UVar4.unknown +
                            *(long *)(lVar17 + 0x48) * uVar11 +
                            ((ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff)),UVar2.unknown);
          pcVar13 = *(code **)(lVar17 + 0x20);
          UVar5.unknown = puVar7;
          (*pcVar13)(puVar7,lVar14,UVar2.unknown);
          SVar18 = Foundation::URLQueryItem::get_name(UVar5);
          _Var6.unknown = SVar18.bridgeObject;
          if ((SVar18.str == (undefined *)0x79656b) &&
             (_Var6.unknown == (undefined *)0xe300000000000000)) {
            _swift_bridgeObjectRelease(UVar4.unknown);
            UVar4.unknown = (undefined *)0xe300000000000000;
LAB_1000e46f8:
            _swift_bridgeObjectRelease(UVar4.unknown);
            puVar15 = local_68;
            (*pcVar13)(local_68,puVar7,UVar2.unknown);
            uVar8 = 0;
            goto LAB_1000e4718;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar18.str,_Var6,(_StringComparisonResult)0x6b);
          _swift_bridgeObjectRelease(_Var6.unknown);
          if (bVar1) goto LAB_1000e46f8;
          uVar11 = uVar11 + 1;
          (**(code **)(lVar17 + 8))(puVar7,UVar2.unknown);
        } while (uVar16 != uVar11);
      }
      _swift_bridgeObjectRelease(UVar4.unknown);
      uVar8 = 1;
      puVar15 = local_68;
LAB_1000e4718:
      puVar12 = local_70;
      (**(code **)(lVar17 + 0x38))(puVar15,uVar8,1,UVar2.unknown);
      uVar8 = 1;
      UVar5.unknown = puVar15;
      (**(code **)(lVar17 + 0x30))(puVar15,1,UVar2.unknown);
      if ((int)UVar5.unknown != 1) {
        Foundation::URLQueryItem::_get_value(UVar5);
        FUN_100005808(puVar12,&DAT_100fad498,&DAT_100c2c4b8);
        (**(code **)(lVar17 + 8))(puVar15,UVar2.unknown);
        goto LAB_1000e4784;
      }
      FUN_100005808(puVar12,&DAT_100fad498,&DAT_100c2c4b8);
      puVar7 = &DAT_100fad490;
      puVar9 = &DAT_100c2c4b0;
    }
  }
  FUN_100005808(puVar15,puVar7,puVar9);
  UVar5.unknown = (undefined *)0x0;
  uVar8 = 0;
LAB_1000e4784:
  auVar19._8_8_ = uVar8;
  auVar19._0_8_ = UVar5.unknown;
  return auVar19;
}



/* Address: 0x1000e47ec | FUN_1000e47ec */

void FUN_1000e47ec(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e4828 | FUN_1000e4828 */

void FUN_1000e4828(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100008284;
  FUN_1000e39d0(plVar7,param_1,uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar8);
  return;
}



/* Address: 0x1000e48bc | FUN_1000e48bc */

void FUN_1000e48bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000e492c | FUN_1000e492c */

void FUN_1000e492c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000e499c | FUN_1000e499c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000e499c(void)

{
  undefined *puVar1;
  
  if (DAT_100fad448 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fad448 = puVar1;
  return;
}



/* Address: 0x1000e49e0 | FUN_1000e49e0 */

void FUN_1000e49e0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e4a0c | FUN_1000e4a0c */

void FUN_1000e4a0c(void)

{
  long unaff_x20;
  
  FUN_1000e3eec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1000e4a18 | FUN_1000e4a18 */

void FUN_1000e4a18(long param_1,long param_2)

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



/* Address: 0x1000e4a2c | FUN_1000e4a2c */

void FUN_1000e4a2c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000e4a34 | FUN_1000e4a34 */

void FUN_1000e4a34(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fad460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fad458;
  FUN_100005c24(&DAT_100fad458,&DAT_100c2c498);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fad460 = puVar2;
  return;
}



/* Address: 0x1000e4a84 | FUN_1000e4a84 */

void FUN_1000e4a84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e4aa8 | FUN_1000e4aa8 */

void FUN_1000e4aa8(void)

{
  long unaff_x20;
  
  FUN_1000e3e34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000e4ab0 | FUN_1000e4ab0 */

void FUN_1000e4ab0(void)

{
  undefined *puVar1;
  
  if (DAT_100fad478 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fad478 = puVar1;
  return;
}



/* Address: 0x1000e4af0 | FUN_1000e4af0 */

undefined8 FUN_1000e4af0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000e4b40 | FUN_1000e4b40 */

undefined8 FUN_1000e4b40(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000dcac4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1000e4b84 | FUN_1000e4b84 */

undefined8 FUN_1000e4b84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad470;
  FUN_1000037f0(&DAT_100fad470,&DAT_100c2d0f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000e4bd4 | thunk_FUN_10019fcd4 */

void thunk_FUN_10019fcd4(void)

{
  FUN_10019fcd4();
  return;
}



/* Address: 0x1000e4bd8 | FUN_1000e4bd8 */

void FUN_1000e4bd8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad0b8;
  FUN_1000037f0(&DAT_100fad0b8,&DAT_100c2c610);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x23,0x13,FUN_1000dc540,0,
                puVar1);
  return;
}



/* Address: 0x1000e4c34 | FUN_1000e4c34 */

void FUN_1000e4c34(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &DAT_100eb5ef0;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100eb5ec8;
  return;
}



/* Address: 0x1000e4c4c | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1000e4c50 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x1000e4c54 | thunk_FUN_1000e5db8 */

void thunk_FUN_1000e5db8(void)

{
  FUN_1000e5db8();
  return;
}


