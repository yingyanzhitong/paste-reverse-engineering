/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10050131c | FUN_10050131c */

void FUN_10050131c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_100501334);
  return;
}



/* Address: 0x100501334 | FUN_100501334 */

void FUN_100501334(void)

{
  long unaff_x22;
  
  FUN_1005054ec();
                    /* WARNING: Could not recover jumptable at 0x000100501360. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100501364 | FUN_100501364 */

void FUN_100501364(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x198) = param_1;
  _swift_task_switch(FUN_100501380);
  return;
}



/* Address: 0x100501380 | FUN_100501380 */

void FUN_100501380(undefined8 *param_1)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x1a8) + 0xe8) & 1) == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1a0);
    FUN_1001037b4(uVar2,uVar3);
    FUN_1004ff9c8(unaff_x22 + 0x158,uVar2,uVar3);
    if (*(byte *)(unaff_x22 + 0x178) < 2) {
      uVar2 = *(undefined8 *)(unaff_x22 + 0x1a0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
      FUN_1000fb4c4(unaff_x22 + 0x158,&DAT_100fcd808,&DAT_100c53e10);
      FUN_100503fbc(uVar3,uVar2);
    }
    else if (*(byte *)(unaff_x22 + 0x178) == 2) {
      FUN_100503cf0(*(undefined8 *)(unaff_x22 + 0x198),*(undefined8 *)(unaff_x22 + 0x1a0),
                    *(undefined8 *)(unaff_x22 + 0x158),*(undefined8 *)(unaff_x22 + 0x160));
      FUN_1000fb4c4(unaff_x22 + 0x158,&DAT_100fcd808,&DAT_100c53e10);
    }
    else {
      lVar4 = *(long *)(*(long *)(unaff_x22 + 0x1a8) + 0x70);
      _swift_beginAccess(lVar4 + 0x20,unaff_x22 + 0x180,0,0);
      FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x70);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
      lVar1 = *(long *)(unaff_x22 + 0x90);
      FUN_100004640(unaff_x22 + 0x70,uVar2);
      (**(code **)(lVar1 + 0x70))(uVar2,lVar1);
      FUN_100004594(unaff_x22 + 0x70);
      if (((uint)uVar2 & 0xff) < 5) {
        FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x130);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
        lVar1 = *(long *)(unaff_x22 + 0x150);
        FUN_100004640(unaff_x22 + 0x130,uVar2);
        *(undefined1 *)(unaff_x22 + 0x10) = 4;
        *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000002f;
        *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dac4b0;
        *(undefined8 *)(unaff_x22 + 0x30) = 0;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000025;
        *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dac430;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x68) = 0x91;
        *(undefined1 *)(unaff_x22 + 0x70) = 4;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000002f;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dac4b0;
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000025;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dac430;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0xc0) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 200) = 0x91;
        FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
        FUN_1004eaa3c(unaff_x22 + 0x70);
        (**(code **)(lVar1 + 0x28))(unaff_x22 + 0x10,uVar2,lVar1);
        FUN_1004eaa3c(unaff_x22 + 0x10);
        FUN_100004594(unaff_x22 + 0x130);
      }
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 8;
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005015d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005015dc | FUN_1005015dc */

void FUN_1005015dc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP27StatefulHTTPServerTransport::incomingStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
                    /* WARNING: Could not recover jumptable at 0x00010050162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x100501630 | FUN_100501630 */

void FUN_100501630(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  puVar1 = &DAT_100fcd548;
  FUN_1000f7830(&DAT_100fcd548,&DAT_100c53e20);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar3 = 0;
  FUN_1004fe770();
  *(long *)(unaff_x22 + 0x60) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  _swift_task_switch(FUN_1005016c0);
  return;
}



/* Address: 0x1005016c0 | FUN_1005016c0 */

void FUN_1005016c0(void)

{
  long lVar1;
  undefined8 uVar2;
  bool bVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  _StringComparisonResult expecting;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  code *pcVar15;
  undefined8 uVar16;
  long lVar17;
  String SVar18;
  
  lVar9 = *(long *)(unaff_x22 + 0x50);
  if (*(char *)(lVar9 + 0xe8) == '\x01') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x40);
    uVar8 = *(undefined8 *)(lVar9 + 0xd8);
    uVar14 = *(undefined8 *)(lVar9 + 0xe0);
    _swift_bridgeObjectRetain(uVar14);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    puVar11[1] = 0xd000000000000026;
    *puVar11 = 0x194;
    puVar11[2] = 0x8000000100dac520;
    puVar11[3] = 0;
    *(undefined1 *)(puVar11 + 4) = 1;
    puVar11[5] = uVar8;
    puVar11[6] = uVar14;
    puVar11[7] = puVar5;
LAB_100501744:
    uVar8 = 4;
LAB_100501750:
    _swift_storeEnumTagMultiPayload(puVar11,uVar12,uVar8);
  }
  else {
    SVar18 = Swift::String::uppercased(**(String **)(unaff_x22 + 0x48));
    puVar7 = SVar18.bridgeObject;
    pcVar4 = SVar18.str;
    if (pcVar4 != (char *)0x54534f50 || puVar7 != &DAT_e400000000000000) {
      expecting.value = SVar18.str._0_1_;
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x54534f50,(_StringGuts)0xe400000000000000,expecting);
      if (!bVar3) {
        if ((pcVar4 == (char *)0x544547 && puVar7 == (undefined1 *)0xe300000000000000) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x544547,(_StringGuts)0xe300000000000000,expecting),
           bVar3)) {
          uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
          uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
          _swift_bridgeObjectRelease(puVar7);
          FUN_100503134(uVar14,uVar8);
          goto LAB_1005017c0;
        }
        if (pcVar4 == (char *)0x4554454c4544 && puVar7 == &DAT_e600000000000000) {
          _swift_bridgeObjectRelease(puVar7);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4554454c4544,(_StringGuts)0xe600000000000000,expecting);
          _swift_bridgeObjectRelease(puVar7);
          if (!bVar3) {
            uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
            puVar11 = *(undefined8 **)(unaff_x22 + 0x40);
            uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0xd8);
            uVar14 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0xe0);
            puVar5 = &DAT_100fcb888;
            FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
            _swift_initStaticObject();
            _swift_bridgeObjectRetain(uVar14);
            puVar6 = puVar5;
            FUN_1004a66a4();
            FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
            puVar11[1] = 0xd000000000000012;
            *puVar11 = 0x195;
            puVar11[2] = 0x8000000100dac4e0;
            puVar11[3] = 0;
            *(undefined1 *)(puVar11 + 4) = 1;
            puVar11[5] = uVar8;
            puVar11[6] = uVar14;
            puVar11[7] = puVar6;
            goto LAB_100501744;
          }
        }
        lVar9 = DAT_100fce788;
        lVar17 = *(long *)(unaff_x22 + 0x50);
        uVar8 = *(undefined8 *)(lVar17 + 0xd8);
        uVar14 = *(undefined8 *)(lVar17 + 0xe0);
        _swift_bridgeObjectRetain(uVar14);
        lVar10 = lVar17;
        if (lVar9 != -1) {
          _swift_once(&DAT_100fce788,FUN_100528524);
          lVar10 = *(long *)(unaff_x22 + 0x50);
        }
        uVar2 = DAT_101057b28;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
        lVar9 = *(long *)(unaff_x22 + 0x68);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x48);
        *(undefined8 *)(unaff_x22 + 0x10) = 0x4554454c4544;
        *(undefined1 **)(unaff_x22 + 0x18) = &DAT_e600000000000000;
        *(undefined8 *)(unaff_x22 + 0x20) = uVar8;
        *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
        *(undefined1 *)(unaff_x22 + 0x30) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
        uVar8 = *(undefined8 *)(lVar10 + 0xb8);
        lVar1 = *(long *)(lVar10 + 0xc0);
        FUN_100004640(lVar10 + 0xa0,uVar8);
        pcVar15 = *(code **)(lVar1 + 8);
        _swift_bridgeObjectRetain(uVar2);
        (*pcVar15)(uVar16,uVar13,unaff_x22 + 0x10,uVar8,lVar1);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease(uVar2);
        (**(code **)(lVar9 + 0x30))(uVar16,1,uVar12);
        if ((int)uVar16 != 1) {
          uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x40);
          FUN_100508068(*(undefined8 *)(unaff_x22 + 0x58),uVar14);
          FUN_100508068(uVar14,uVar8);
          goto LAB_1005017c0;
        }
        FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x58),&DAT_100fcd548,&DAT_100c53e20);
        FUN_1005054ec();
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004a66a4();
        lVar9 = *(long *)(lVar17 + 0xe0);
        if (lVar9 != 0) {
          uVar8 = *(undefined8 *)(lVar17 + 0xd8);
          _swift_bridgeObjectRetain(lVar9);
          puVar6 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native(puVar5);
          FUN_1004b4f30(uVar8,lVar9,0x737365532d50434d,0xee0064492d6e6f69,puVar6);
        }
        uVar12 = *(undefined8 *)(unaff_x22 + 0x60);
        puVar11 = *(undefined8 **)(unaff_x22 + 0x40);
        *puVar11 = puVar5;
        uVar8 = 1;
        goto LAB_100501750;
      }
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_bridgeObjectRelease(puVar7);
    FUN_100501ac4(uVar14,uVar8);
  }
LAB_1005017c0:
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001005017f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100501ac4 | FUN_100501ac4 */

void FUN_100501ac4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  byte bVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  uint uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  AsyncThrowingStream throwing;
  undefined *puVar17;
  ulong uVar18;
  undefined1 auStack_190 [8];
  undefined8 local_188;
  undefined8 local_180;
  _StringGuts local_178;
  _StringGuts local_170;
  undefined1 *local_168;
  uint local_15c;
  undefined *local_158;
  undefined *local_128;
  ulong local_120;
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  _StringGuts local_c8;
  _StringGuts _Stack_c0;
  byte local_b8;
  undefined *local_b0;
  ulong uStack_a8;
  undefined8 local_98;
  undefined1 *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  
  uVar18 = *(ulong *)(param_2 + 0x20);
  puVar17 = *(undefined **)(param_2 + 0x18);
  local_b0 = puVar17;
  uStack_a8 = uVar18;
  if (uVar18 >> 0x3c < 0xf) {
    uVar12 = (uint)(uVar18 >> 0x20);
    uVar11 = uVar12 >> 0x1e;
    if (1 < uVar12 >> 0x1e) {
      if (uVar11 == 2) {
        if (*(long *)(puVar17 + 0x10) != *(long *)(puVar17 + 0x18)) goto LAB_100501be0;
      }
      else {
LAB_100501b38:
        FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
      }
      goto LAB_100501b64;
    }
    if (uVar11 == 0) {
      if ((uVar18 & 0xff000000000000) == 0) goto LAB_100501b38;
    }
    else {
      if ((long)(int)puVar17 == (long)puVar17 >> 0x20) goto LAB_100501b64;
LAB_100501be0:
      FUN_1000f8cac(&local_b0,&local_128,&DAT_100fcdb08,&DAT_100c53ff0);
    }
    FUN_1001037b4(puVar17,uVar18);
    FUN_1004ff9c8(&local_d8,puVar17,uVar18);
    uVar12 = (uint)local_b8;
    if (uVar12 != 0xff) {
      local_180 = local_d8;
      local_188 = uStack_d0;
      uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
      uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
      local_170.unknown = local_c8.unknown;
      local_178.unknown = _Stack_c0.unknown;
      local_15c = uVar12;
      if (local_b8 == 0) {
        if ((local_c8.unknown == (undefined *)0x696c616974696e69) &&
           (_Stack_c0.unknown == (undefined *)0xea0000000000657a)) {
          bVar3 = true;
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            (local_c8,_Stack_c0,(_StringComparisonResult)0x69);
        }
      }
      else {
        bVar3 = false;
      }
      lVar5 = DAT_100fce788;
      local_158 = puVar17;
      _swift_bridgeObjectRetain(uVar1);
      if (lVar5 != -1) {
        _swift_once(&DAT_100fce788,FUN_100528524);
      }
      uVar7 = DAT_101057b28;
      local_98 = 0x54534f50;
      puStack_90 = &DAT_e400000000000000;
      local_70 = DAT_101057b28;
      lVar5 = 0;
      local_88 = uVar10;
      uStack_80 = uVar1;
      local_78 = bVar3;
      FUN_1004fe770();
      lVar16 = *(long *)(lVar5 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
      uVar10 = *(undefined8 *)(unaff_x20 + 0xb8);
      lVar15 = *(long *)(unaff_x20 + 0xc0);
      local_168 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
      FUN_100004640(unaff_x20 + 0xa0,uVar10);
      puVar17 = &DAT_100fcd548;
      FUN_1000f7830(&DAT_100fcd548,&DAT_100c53e20);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar13 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
      pcVar14 = *(code **)(lVar15 + 8);
      _swift_bridgeObjectRetain(uVar7);
      (*pcVar14)(lVar13,param_2,&local_98,uVar10,lVar15);
      _swift_bridgeObjectRelease(uVar7);
      _swift_bridgeObjectRelease(uVar1);
      lVar15 = lVar13;
      (**(code **)(lVar16 + 0x30))(lVar13,1,lVar5);
      if ((int)lVar15 != 1) {
        FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
        FUN_1000fb4c4(&local_d8,&DAT_100fcd808,&DAT_100c53e10);
        puVar2 = local_168;
        FUN_100508068(lVar13,local_168);
        FUN_100508068(puVar2,param_1);
        return;
      }
      FUN_1000fb4c4(lVar13,&DAT_100fcd548,&DAT_100c53e20);
      local_120 = uVar18;
      if (local_15c == 0) {
        if (((local_170.unknown != (undefined *)0x696c616974696e69) ||
            (local_178.unknown != (undefined *)0xea0000000000657a)) &&
           (bVar3 = Swift::_stringCompareWithSmolCheck
                              (local_170,local_178,(_StringComparisonResult)0x69), !bVar3)) {
          puVar17 = &DAT_100fcb3a0;
          FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
          lVar16 = *(long *)(puVar17 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
          throwing.unknown = auStack_190 + -extraout_x8_02;
          puVar6 = &DAT_100fcd148;
          FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
          lVar13 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar15 = (long)throwing.unknown - extraout_x8_03;
          (**(code **)(lVar13 + 0x68))
                    (lVar15,*(undefined4 *)
                             PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
                     ,puVar6);
          bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
          if ((bVar4 & 1) == 0) {
            FUN_100505e68(param_1,throwing.unknown,lVar15);
          }
          else {
            Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)param_1,throwing);
          }
          (**(code **)(lVar13 + 8))(lVar15,puVar6);
          puVar6 = &DAT_100fcd158;
          FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar15 = (long)throwing.unknown - extraout_x8_04;
          (**(code **)(lVar16 + 0x10))(lVar15,throwing.unknown,puVar17);
          (**(code **)(lVar16 + 0x38))(lVar15,0,1,puVar17);
          _swift_beginAccess(unaff_x20 +
                             _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                             &local_128,0x21,0);
          uVar10 = local_188;
          _swift_bridgeObjectRetain(local_188);
          uVar1 = local_180;
          FUN_100508a38(lVar15,local_180,uVar10);
          _swift_endAccess(&local_128);
          lVar15 = _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts;
          _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,
                             auStack_f0,0x21,0);
          _swift_bridgeObjectRetain(uVar10);
          FUN_1005085f8(param_2,&local_128);
          uVar7 = *(undefined8 *)(unaff_x20 + lVar15);
          _swift_isUniquelyReferenced_nonNull_native(uVar7);
          local_128 = *(undefined **)(unaff_x20 + lVar15);
          *(undefined8 *)(unaff_x20 + lVar15) = 0x8000000000000000;
          FUN_1004b528c(param_2,uVar1,uVar10,uVar7);
          _swift_bridgeObjectRelease(uVar10);
          *(undefined **)(unaff_x20 + lVar15) = local_128;
          _swift_endAccess(auStack_f0);
          puVar8 = local_158;
          puVar6 = local_158;
          uVar9 = uVar18;
          FUN_100508634(local_158,uVar18,param_2);
          FUN_100504f60(uVar1,uVar10,throwing.unknown,puVar6,uVar9);
          _swift_bridgeObjectRelease(uVar9);
          puVar6 = &DAT_100fcd490;
          FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
          lVar15 = *(long *)(puVar6 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
          local_128 = puVar8;
          FUN_1001037b4(puVar8,uVar18);
          Swift::AsyncThrowingStream::Continuation::_yield
                    ((long)throwing.unknown - extraout_x8_05,&local_128,puVar17);
          (**(code **)(lVar15 + 8))((long)throwing.unknown - extraout_x8_05,puVar6);
          puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_1004a66a4();
          lVar15 = *(long *)(unaff_x20 + 0xe0);
          if (lVar15 != 0) {
            uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
            _swift_bridgeObjectRetain(lVar15);
            puVar8 = puVar6;
            _swift_isUniquelyReferenced_nonNull_native(puVar6);
            local_128 = puVar6;
            FUN_1004b4f30(uVar10,lVar15,0x737365532d50434d,0xee0064492d6e6f69,puVar8);
            puVar6 = local_128;
          }
          puVar8 = &DAT_100fcd6a8;
          FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
          lVar15 = (long)*(int *)(puVar8 + 0x30);
          *(undefined **)((long)param_1 + lVar15) = puVar6;
          _swift_isUniquelyReferenced_nonNull_native(puVar6);
          local_128 = *(undefined **)((long)param_1 + lVar15);
          FUN_1004b4f30(0xd000000000000011,0x8000000100dab8a0,0x2d746e65746e6f43,0xec00000065707954,
                        puVar6);
          *(undefined **)((long)param_1 + lVar15) = local_128;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = local_128;
          local_128 = *(undefined **)((long)param_1 + lVar15);
          FUN_1004b4f30(0xd000000000000016,0x8000000100dac570,0x6f432d6568636143,0xed00006c6f72746e,
                        puVar6);
          *(undefined **)((long)param_1 + lVar15) = local_128;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar6 = local_128;
          local_128 = *(undefined **)((long)param_1 + lVar15);
          FUN_1004b4f30(0x696c612d7065656b,0xea00000000006576,0x697463656e6e6f43,0xea00000000006e6f,
                        puVar6);
          FUN_1000fb4c4(&local_d8,&DAT_100fcd808,&DAT_100c53e10);
          FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
          *(undefined **)((long)param_1 + lVar15) = local_128;
          (**(code **)(lVar16 + 8))(throwing.unknown,puVar17);
          _swift_storeEnumTagMultiPayload(param_1,lVar5,3);
          return;
        }
        FUN_1000fb4c4(&local_d8,&DAT_100fcd808,&DAT_100c53e10);
        FUN_1005026e8(param_1,local_158,uVar18,param_2);
        FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
        return;
      }
      FUN_1000fb4c4(&local_d8,&DAT_100fcd808,&DAT_100c53e10);
      puVar17 = &DAT_100fcd490;
      FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
      lVar15 = *(long *)(puVar17 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_128 = local_158;
      FUN_1001037b4(local_158,uVar18);
      puVar6 = &DAT_100fcb3a0;
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      Swift::AsyncThrowingStream::Continuation::_yield
                (auStack_190 + -extraout_x8_01,&local_128,puVar6);
      (**(code **)(lVar15 + 8))(auStack_190 + -extraout_x8_01,puVar17);
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      lVar15 = *(long *)(unaff_x20 + 0xe0);
      if (lVar15 == 0) {
        FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
      }
      else {
        uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
        _swift_bridgeObjectRetain(lVar15);
        puVar6 = puVar17;
        _swift_isUniquelyReferenced_nonNull_native(puVar17);
        local_128 = puVar17;
        FUN_1004b4f30(uVar10,lVar15,0x737365532d50434d,0xee0064492d6e6f69,puVar6);
        FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
        puVar17 = local_128;
      }
      *param_1 = puVar17;
      uVar10 = 0;
      goto LAB_100501bbc;
    }
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    _swift_bridgeObjectRetain(uVar1);
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    FUN_1000fb4c4(&local_b0,&DAT_100fcdb08,&DAT_100c53ff0);
    param_1[1] = 0xd000000000000018;
    *param_1 = 400;
    param_1[2] = 0x8000000100dac730;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = uVar10;
    param_1[6] = uVar1;
    param_1[7] = puVar17;
  }
  else {
LAB_100501b64:
    uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
    uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
    _swift_bridgeObjectRetain(uVar1);
    puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    param_1[1] = 0xd000000000000012;
    *param_1 = 400;
    param_1[2] = 0x8000000100dac710;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = uVar10;
    param_1[6] = uVar1;
    param_1[7] = puVar17;
  }
  lVar5 = 0;
  FUN_1004fe770(0);
  uVar10 = 4;
LAB_100501bbc:
  _swift_storeEnumTagMultiPayload(param_1,lVar5,uVar10);
  return;
}



/* Address: 0x1005026e8 | FUN_1005026e8 */

void FUN_1005026e8(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  void *pvVar9;
  char *pcVar10;
  undefined8 uVar11;
  char *pcVar12;
  void *pvVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar14;
  undefined8 uVar15;
  AsyncThrowingStream throwing;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined1 auStack_210 [8];
  undefined *local_208;
  undefined1 *local_200;
  undefined1 *local_1f8;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1b8;
  char local_1b0;
  undefined1 auStack_170 [24];
  undefined8 local_158;
  long lStack_150;
  undefined *local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [32];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar14 = *(long *)(unaff_x20 + 0xe0);
  if (lVar14 != 0) {
    uVar15 = *(undefined8 *)(unaff_x20 + 0xd8);
    _swift_bridgeObjectRetain(lVar14);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    param_1[1] = 0xd000000000000028;
    *param_1 = 400;
    param_1[2] = 0x8000000100dac6e0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    param_1[5] = uVar15;
    param_1[6] = lVar14;
    param_1[7] = puVar5;
    uVar15 = 0;
    FUN_1004fe770(0);
    _swift_storeEnumTagMultiPayload(param_1,uVar15,4);
    return;
  }
  pcVar3 = *(char **)(unaff_x20 + 0x90);
  pvVar9 = *(void **)(unaff_x20 + 0x98);
  local_1e8 = param_4;
  local_1e0 = param_2;
  local_1d8 = param_3;
  FUN_100004640(unaff_x20 + 0x78,pcVar3);
  (**(code **)((long)pvVar9 + 8))();
  uVar1 = (ulong)pcVar3 & 0xffffffffffff;
  if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || (pcVar10 = pcVar3, FUN_100500ab8(), ((ulong)pcVar10 & 1) != 0)) {
    _swift_bridgeObjectRelease(pvVar9);
    lVar14 = *(long *)(unaff_x20 + 0x70);
    _swift_beginAccess(lVar14 + 0x20,auStack_e8,0,0);
    FUN_100076688(lVar14 + 0x20,&local_c8);
    puVar5 = puStack_a8;
    uVar15 = local_b0;
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puVar5 + 0x70))(uVar15,puVar5);
    FUN_100004594(&local_c8);
    if (((uint)uVar15 & 0xff) < 6) {
      FUN_100076688(lVar14 + 0x20,auStack_170);
      FUN_100004640(auStack_170,local_158);
      local_c8 = CONCAT71(local_c8._1_7_,5);
      local_c0 = 0xd000000000000030;
      uStack_b8 = 0x8000000100dac670;
      puStack_a8 = (undefined *)0x0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      local_90 = 0xd000000000000025;
      uStack_88 = 0x8000000100dac430;
      local_80 = 0xd000000000000027;
      uStack_78 = 0x8000000100dac600;
      local_70 = 0x105;
      local_148 = (undefined *)CONCAT71(local_148._1_7_,5);
      local_140 = 0xd000000000000030;
      uStack_138 = 0x8000000100dac670;
      puStack_128 = (undefined *)0x0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = 0;
      local_110 = 0xd000000000000025;
      uStack_108 = 0x8000000100dac430;
      local_100 = 0xd000000000000027;
      uStack_f8 = 0x8000000100dac600;
      local_f0 = 0x105;
      FUN_1004eaa00(&local_c8,&local_1d0);
      FUN_1004eaa3c(&local_148);
      (**(code **)(lStack_150 + 0x28))(&local_c8,local_158,lStack_150);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_170);
    }
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    param_1[1] = 0xd00000000000002c;
    *param_1 = 500;
    param_1[2] = 0x8000000100dac6b0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 4;
    param_1[5] = 0;
    param_1[6] = 0;
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x20 + 0xe0);
    *(char **)(unaff_x20 + 0xd8) = pcVar3;
    *(void **)(unaff_x20 + 0xe0) = pvVar9;
    _swift_bridgeObjectRetain_n(pvVar9,2);
    _swift_bridgeObjectRelease(uVar15);
    lVar14 = *(long *)(unaff_x20 + 0x70);
    pvVar13 = (void *)0x0;
    _swift_beginAccess(lVar14 + 0x20,auStack_e8,0);
    FUN_100076688(lVar14 + 0x20,&local_c8);
    puVar5 = puStack_a8;
    uVar15 = local_b0;
    FUN_100004640(&local_c8,local_b0);
    (**(code **)(puVar5 + 0x70))(uVar15,puVar5);
    FUN_100004594(&local_c8);
    if (((uint)uVar15 & 0xff) < 3) {
      local_208 = (undefined *)0x8000000100dac430;
      FUN_100076688(lVar14 + 0x20,auStack_170);
      local_1f8 = (undefined1 *)lStack_150;
      local_1f0 = (undefined *)local_158;
      puVar4 = auStack_170;
      FUN_100004640();
      puVar5 = &DAT_100fcd4a8;
      local_200 = puVar4;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar10 = (char *)0x60;
      pcVar12 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x20) = 0x496e6f6973736573;
      *(undefined8 *)(puVar5 + 0x18) = 2;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      *(undefined8 *)(puVar5 + 0x28) = 0xe900000000000044;
      local_c8 = 0;
      local_c0 = 0xe000000000000000;
      SVar19.bridgeObject = pcVar12;
      SVar19.str = pcVar10;
      Swift::String::reserveCapacity(2,SVar19);
      SVar18.bridgeObject = pvVar9;
      SVar18.str = pcVar3;
      SVar20.bridgeObject = pvVar13;
      SVar20.str = pcVar12;
      Swift::String::write(SVar18,SVar20);
      *(undefined8 *)(puVar5 + 0x30) = local_c8;
      *(undefined8 *)(puVar5 + 0x38) = local_c0;
      puVar5[0x58] = 0;
      puVar6 = puVar5;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar5);
      FUN_1000fb4c4(puVar5 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar5,0x20,7);
      local_c8 = CONCAT71(local_c8._1_7_,2);
      local_c0 = 0xd000000000000013;
      uStack_b8 = 0x8000000100dac630;
      local_b0 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_90 = 0xd000000000000025;
      uStack_88 = local_208;
      local_80 = 0xd000000000000027;
      uStack_78 = 0x8000000100dac600;
      local_70 = 0x10d;
      local_148 = (undefined *)CONCAT71(local_148._1_7_,2);
      local_140 = 0xd000000000000013;
      uStack_138 = 0x8000000100dac630;
      local_130 = 0;
      local_120 = 0;
      uStack_118 = 0;
      local_110 = 0xd000000000000025;
      uStack_108 = local_208;
      local_100 = 0xd000000000000027;
      uStack_f8 = 0x8000000100dac600;
      local_f0 = 0x10d;
      puStack_128 = puVar6;
      puStack_a8 = puVar6;
      FUN_1004eaa00(&local_c8,&local_1d0);
      FUN_1004eaa3c(&local_148);
      (**(code **)((long)local_1f8 + 0x28))(&local_c8,local_1f0);
      FUN_1004eaa3c(&local_c8);
      FUN_100004594(auStack_170);
    }
    uVar15 = local_1d8;
    puVar5 = local_1e0;
    FUN_1001037b4(local_1e0,local_1d8);
    FUN_1004ff9c8(&local_1d0,puVar5,uVar15);
    if (local_1b0 == '\0') {
      local_208 = (undefined *)local_1d0;
      _swift_bridgeObjectRelease(local_1b8);
      _swift_bridgeObjectRelease_n(pvVar9,2);
      puVar5 = &DAT_100fcb3a0;
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      lVar14 = *(long *)(puVar5 + -8);
      local_1f8 = auStack_210;
      local_1f0 = puVar5;
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
      throwing.unknown = auStack_210 + -extraout_x8;
      puVar5 = &DAT_100fcd148;
      FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
      lVar17 = *(long *)(puVar5 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar16 = (long)throwing.unknown - extraout_x8_00;
      (**(code **)(lVar17 + 0x68))
                (lVar16,*(undefined4 *)
                         PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
                 ,puVar5);
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
      if ((bVar2 & 1) == 0) {
        FUN_100505e68(param_1,throwing.unknown,lVar16);
      }
      else {
        Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)param_1,throwing);
      }
      (**(code **)(lVar17 + 8))(lVar16,puVar5);
      puVar5 = &DAT_100fcd158;
      FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      puVar5 = local_1f0;
      lVar16 = (long)throwing.unknown - extraout_x8_01;
      (**(code **)(lVar14 + 0x10))(lVar16,throwing.unknown,local_1f0);
      local_200 = (undefined1 *)lVar14;
      (**(code **)(lVar14 + 0x38))(lVar16,0,1,puVar5);
      _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                         &local_148,0x21,0);
      _swift_bridgeObjectRetain(uStack_1c8);
      puVar5 = local_208;
      FUN_100508a38(lVar16,local_208,uStack_1c8);
      _swift_endAccess(&local_148);
      lVar14 = _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts;
      _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,
                         auStack_170,0x21,0);
      _swift_bridgeObjectRetain(uStack_1c8);
      uVar15 = local_1e8;
      FUN_1005085f8(local_1e8,&local_148);
      uVar7 = *(undefined8 *)(unaff_x20 + lVar14);
      _swift_isUniquelyReferenced_nonNull_native(uVar7);
      local_148 = *(undefined **)(unaff_x20 + lVar14);
      *(undefined8 *)(unaff_x20 + lVar14) = 0x8000000000000000;
      FUN_1004b528c(uVar15,puVar5,uStack_1c8,uVar7);
      _swift_bridgeObjectRelease(uStack_1c8);
      *(undefined **)(unaff_x20 + lVar14) = local_148;
      _swift_endAccess(auStack_170);
      uVar7 = local_1d8;
      puVar6 = local_1e0;
      puVar8 = local_1e0;
      uVar11 = local_1d8;
      FUN_100508634(local_1e0,local_1d8,uVar15);
      local_1e8 = uStack_1c8;
      local_208 = throwing.unknown;
      FUN_100504f60(puVar5,uStack_1c8,throwing.unknown,puVar8,uVar11);
      _swift_bridgeObjectRelease(uVar11);
      puVar5 = &DAT_100fcd490;
      FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
      lVar14 = *(long *)(puVar5 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_148 = puVar6;
      local_140 = uVar7;
      FUN_1001037b4(puVar6,uVar7);
      Swift::AsyncThrowingStream::Continuation::_yield
                ((long)throwing.unknown - extraout_x8_02,&local_148,local_1f0);
      (**(code **)(lVar14 + 8))((long)throwing.unknown - extraout_x8_02,puVar5);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      lVar14 = *(long *)(unaff_x20 + 0xe0);
      if (lVar14 != 0) {
        uVar15 = *(undefined8 *)(unaff_x20 + 0xd8);
        _swift_bridgeObjectRetain(lVar14);
        puVar6 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native(puVar5);
        local_148 = puVar5;
        FUN_1004b4f30(uVar15,lVar14,0x737365532d50434d,0xee0064492d6e6f69,puVar6);
        puVar5 = local_148;
      }
      puVar6 = &DAT_100fcd6a8;
      FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
      lVar14 = (long)*(int *)(puVar6 + 0x30);
      *(undefined **)((long)param_1 + lVar14) = puVar5;
      _swift_isUniquelyReferenced_nonNull_native(puVar5);
      local_148 = *(undefined **)((long)param_1 + lVar14);
      FUN_1004b4f30(0xd000000000000011,0x8000000100dab8a0,0x2d746e65746e6f43,0xec00000065707954,
                    puVar5);
      *(undefined **)((long)param_1 + lVar14) = local_148;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_148;
      local_148 = *(undefined **)((long)param_1 + lVar14);
      FUN_1004b4f30(0xd000000000000016,0x8000000100dac570,0x6f432d6568636143,0xed00006c6f72746e,
                    puVar5);
      *(undefined **)((long)param_1 + lVar14) = local_148;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_148;
      local_148 = *(undefined **)((long)param_1 + lVar14);
      FUN_1004b4f30(0x696c612d7065656b,0xea00000000006576,0x697463656e6e6f43,0xea00000000006e6f,
                    puVar5);
      _swift_bridgeObjectRelease(local_1e8);
      *(undefined **)((long)param_1 + lVar14) = local_148;
      (**(code **)((long)local_200 + 8))(local_208,local_1f0);
      uVar15 = 0;
      FUN_1004fe770(0);
      _swift_storeEnumTagMultiPayload(param_1,uVar15,3);
      return;
    }
    if (local_1b0 != -1) {
      FUN_1000fb4c4(&local_1d0,&DAT_100fcd808,&DAT_100c53e10);
    }
    _swift_bridgeObjectRelease(pvVar9);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    param_1[1] = 0xd00000000000001a;
    *param_1 = 400;
    param_1[2] = 0x8000000100dac650;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[5] = pcVar3;
    param_1[6] = pvVar9;
  }
  param_1[7] = puVar5;
  uVar15 = 0;
  FUN_1004fe770(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar15,4);
  return;
}



/* Address: 0x100503134 | FUN_100503134 */

void FUN_100503134(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  AsyncThrowingStream throwing;
  long lVar13;
  long local_f0;
  undefined *local_c0 [3];
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  undefined8 local_68;
  
  lVar7 = DAT_100fce788;
  uVar8 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar11 = *(undefined8 *)(unaff_x20 + 0xe0);
  _swift_bridgeObjectRetain(uVar11);
  if (lVar7 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  uVar1 = DAT_101057b28;
  local_90 = 0x544547;
  uStack_88 = 0xe300000000000000;
  local_70 = 0;
  local_68 = DAT_101057b28;
  lVar3 = 0;
  local_80 = uVar8;
  uStack_78 = uVar11;
  FUN_1004fe770();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0xb8);
  lVar7 = *(long *)(unaff_x20 + 0xc0);
  FUN_100004640(unaff_x20 + 0xa0,uVar8);
  puVar4 = &DAT_100fcd548;
  FUN_1000f7830(&DAT_100fcd548,&DAT_100c53e20);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = lVar9 - extraout_x8_00;
  pcVar10 = *(code **)(lVar7 + 8);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar10)(lVar13,param_2,&local_90,uVar8,lVar7);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar11);
  lVar7 = lVar13;
  local_f0 = lVar3;
  (**(code **)(lVar12 + 0x30))(lVar13,1,lVar3);
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar13,&DAT_100fcd548,&DAT_100c53e20);
    lVar7 = -0x12ffffbbb6d28b92;
    FUN_1004fe364(0x6576452d7473614c);
    if (lVar7 == 0) {
      puVar4 = &DAT_100fcd158;
      FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
      lVar9 = *(long *)(*(long *)(puVar4 + -8) + 0x40);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
      lVar7 = _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation;
      lVar12 = (long)&local_f0 - extraout_x8_01;
      _swift_beginAccess(unaff_x20 +
                         _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation,auStack_a8
                         ,0,0);
      FUN_1000f8cac(unaff_x20 + lVar7,lVar12,&DAT_100fcd158,&DAT_100c53740);
      puVar4 = &DAT_100fcb3a0;
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      lVar13 = *(long *)(puVar4 + -8);
      lVar3 = lVar12;
      (**(code **)(lVar13 + 0x30))(lVar12,1);
      FUN_1000fb4c4(lVar12,&DAT_100fcd158,&DAT_100c53740);
      if ((int)lVar3 == 1) {
        (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
        throwing.unknown =
             (undefined *)((long)&local_f0 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
        puVar5 = &DAT_100fcd148;
        FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
        lVar3 = *(long *)(puVar5 + -8);
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar12 = (long)throwing.unknown - extraout_x8_03;
        (**(code **)(lVar3 + 0x68))
                  (lVar12,*(undefined4 *)
                           PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
                   ,puVar5);
        bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
        if ((bVar2 & 1) == 0) {
          FUN_100505e68(param_1,throwing.unknown,lVar12);
        }
        else {
          Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)param_1,throwing);
        }
        (**(code **)(lVar3 + 8))(lVar12,puVar5);
        (*(code *)PTR____chkstk_darwin_100ea82c0)();
        lVar3 = (long)throwing.unknown - (lVar9 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar13 + 0x10))(lVar3,throwing.unknown,puVar4);
        (**(code **)(lVar13 + 0x38))(lVar3,0,1,puVar4);
        _swift_beginAccess(unaff_x20 + lVar7,local_c0,0x21,0);
        FUN_1005085a8(lVar3,unaff_x20 + lVar7);
        _swift_endAccess(local_c0);
        uVar8 = 0xd000000000000014;
        lVar7 = -0x7ffffffeff2548f0;
        FUN_1004fe364(0xd000000000000014);
        if (lVar7 == 0) {
          if (DAT_100fce780 != -1) {
            _swift_once(&DAT_100fce780,FUN_1005286e4);
          }
          lVar7 = DAT_101057b38;
          uVar8 = DAT_101057b30;
          _swift_bridgeObjectRetain(DAT_101057b38);
        }
        FUN_100504f60(*(undefined8 *)
                       (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID),
                      ((undefined8 *)
                      (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID))[1],
                      throwing.unknown,uVar8,lVar7);
        _swift_bridgeObjectRelease(lVar7);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004a66a4();
        lVar7 = *(long *)(unaff_x20 + 0xe0);
        if (lVar7 != 0) {
          uVar8 = *(undefined8 *)(unaff_x20 + 0xd8);
          _swift_bridgeObjectRetain(lVar7);
          puVar6 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native(puVar5);
          local_c0[0] = puVar5;
          FUN_1004b4f30(uVar8,lVar7,0x737365532d50434d,0xee0064492d6e6f69,puVar6);
          puVar5 = local_c0[0];
        }
        puVar6 = &DAT_100fcd6a8;
        FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
        lVar7 = (long)*(int *)(puVar6 + 0x30);
        *(undefined **)((long)param_1 + lVar7) = puVar5;
        _swift_isUniquelyReferenced_nonNull_native(puVar5);
        local_c0[0] = *(undefined **)((long)param_1 + lVar7);
        FUN_1004b4f30(0xd000000000000011,0x8000000100dab8a0,0x2d746e65746e6f43,0xec00000065707954,
                      puVar5);
        *(undefined **)((long)param_1 + lVar7) = local_c0[0];
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = local_c0[0];
        local_c0[0] = *(undefined **)((long)param_1 + lVar7);
        FUN_1004b4f30(0xd000000000000016,0x8000000100dac570,0x6f432d6568636143,0xed00006c6f72746e,
                      puVar5);
        *(undefined **)((long)param_1 + lVar7) = local_c0[0];
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = local_c0[0];
        local_c0[0] = *(undefined **)((long)param_1 + lVar7);
        FUN_1004b4f30(0x696c612d7065656b,0xea00000000006576,0x697463656e6e6f43,0xea00000000006e6f,
                      puVar5);
        *(undefined **)((long)param_1 + lVar7) = local_c0[0];
        (**(code **)(lVar13 + 8))(throwing.unknown,puVar4);
        _swift_storeEnumTagMultiPayload(param_1,local_f0,3);
      }
      else {
        uVar11 = *(undefined8 *)(unaff_x20 + 0xd8);
        uVar8 = *(undefined8 *)(unaff_x20 + 0xe0);
        _swift_bridgeObjectRetain(uVar8);
        puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1004a66a4();
        param_1[1] = 0xd000000000000034;
        *param_1 = 0x199;
        param_1[2] = 0x8000000100dac750;
        param_1[3] = 0;
        *(undefined1 *)(param_1 + 4) = 1;
        param_1[5] = uVar11;
        param_1[6] = uVar8;
        param_1[7] = puVar4;
        _swift_storeEnumTagMultiPayload(param_1,local_f0,4);
      }
    }
    else {
      FUN_100504330(param_1);
      _swift_bridgeObjectRelease(lVar7);
    }
  }
  else {
    FUN_100508068(lVar13,lVar9);
    FUN_100508068(lVar9,param_1);
  }
  return;
}



/* Address: 0x100503864 | FUN_100503864 */

void FUN_100503864(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  bool bVar1;
  String SVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  char *local_280;
  undefined8 local_278;
  undefined8 uStack_270;
  long local_268;
  long local_260;
  undefined *puStack_258;
  char *local_250;
  void *pvStack_248;
  undefined1 auStack_240 [96];
  char acStack_1e0 [96];
  undefined1 auStack_180 [24];
  undefined8 local_168;
  long lStack_160;
  void *local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  local_260 = *(long *)(puVar3 + -8);
  puStack_258 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_260 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar3 = &DAT_100fcd158;
  local_268 = (long)&local_280 - extraout_x8;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = ((long)&local_280 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar7 = param_3;
  pvVar8 = param_4;
  local_278 = param_1;
  uStack_270 = param_2;
  FUN_100504a00(param_3,param_4,param_1,param_2);
  lVar9 = _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations;
  local_280 = pcVar7;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                     auStack_e0,0,0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  local_250 = param_3;
  pvStack_248 = param_4;
  if (*(long *)(lVar9 + 0x10) == 0) {
    (**(code **)(lVar11 + 0x38))(lVar10,1,1,puVar3);
  }
  else {
    _swift_bridgeObjectRetain(lVar9);
    FUN_100071370(param_3);
    bVar1 = ((ulong)param_4 & 1) == 0;
    if (!bVar1) {
      (**(code **)(lVar11 + 0x10))
                (lVar10,*(long *)(lVar9 + 0x38) + *(long *)(lVar11 + 0x48) * (long)param_3,puVar3);
    }
    (**(code **)(lVar11 + 0x38))(lVar10,bVar1,1,puVar3);
    _swift_bridgeObjectRelease(lVar9);
    lVar9 = lVar10;
    (**(code **)(lVar11 + 0x30))(lVar10,1,puVar3);
    if ((int)lVar9 != 1) {
      (**(code **)(lVar11 + 0x20))(lVar10 - extraout_x8_01,lVar10,puVar3);
      uVar6 = uStack_270;
      FUN_1004ff5a8(&local_c8,local_278,uStack_270,local_280,pvVar8);
      _swift_bridgeObjectRelease();
      FUN_1004ff01c();
      FUN_100508574(&local_c8);
      lVar9 = local_268;
      local_158 = pvVar8;
      local_150 = uVar6;
      Swift::AsyncThrowingStream::Continuation::_yield(local_268,&local_158,puVar3);
      (**(code **)(local_260 + 8))(lVar9,puStack_258);
      (**(code **)(lVar11 + 8))(lVar10 - extraout_x8_01,puVar3);
      return;
    }
  }
  _swift_bridgeObjectRelease(pvVar8);
  FUN_1000fb4c4(lVar10,&DAT_100fcd158,&DAT_100c53740);
  lVar9 = *(long *)(unaff_x20 + 0x70);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar9 + 0x20,auStack_f8);
  FUN_100076688(lVar9 + 0x20,&local_c8);
  FUN_100004640(&local_c8,local_b0);
  (**(code **)((long)puStack_a8 + 0x70))(local_b0,puStack_a8);
  FUN_100004594(&local_c8);
  if (((uint)local_b0 & 0xff) < 2) {
    FUN_100076688(lVar9 + 0x20,auStack_180);
    FUN_100004640(auStack_180,local_168);
    puVar3 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = acStack_1e0;
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x20) = 0x4974736575716572;
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000044;
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    SVar12.bridgeObject = pcVar7;
    SVar12.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar12);
    SVar2.bridgeObject = pvStack_248;
    SVar2.str = local_250;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::write(SVar2,SVar13);
    *(undefined8 *)(puVar3 + 0x30) = local_c8;
    *(undefined8 *)(puVar3 + 0x38) = local_c0;
    puVar3[0x58] = 0;
    puVar4 = puVar3;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar3);
    FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    local_c8 = CONCAT71(local_c8._1_7_,1);
    local_c0 = 0xd000000000000037;
    uStack_b8 = 0x8000000100dac5c0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0xd000000000000025;
    uStack_88 = 0x8000000100dac430;
    local_80 = 0xd000000000000022;
    uStack_78 = 0x8000000100dac590;
    local_70 = 0x189;
    local_158 = (void *)CONCAT71(local_158._1_7_,1);
    local_150 = 0xd000000000000037;
    uStack_148 = 0x8000000100dac5c0;
    local_140 = 0;
    local_130 = 0;
    uStack_128 = 0;
    local_120 = 0xd000000000000025;
    uStack_118 = 0x8000000100dac430;
    local_110 = 0xd000000000000022;
    uStack_108 = 0x8000000100dac590;
    local_100 = 0x189;
    puStack_138 = puVar4;
    puStack_a8 = puVar4;
    FUN_1004eaa00(&local_c8,auStack_240);
    FUN_1004eaa3c(&local_158);
    (**(code **)(lStack_160 + 0x28))(&local_c8,local_168,lStack_160);
    FUN_1004eaa3c(&local_c8);
    FUN_100004594(auStack_180);
  }
  return;
}



/* Address: 0x100503cf0 | FUN_100503cf0 */

void FUN_100503cf0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)puVar7 - extraout_x12;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100503864(param_1,param_2,param_3,param_4);
  lVar2 = _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                     auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar6 + 0x10) == 0) {
    (**(code **)(lVar9 + 0x38))(lVar8,1,1,puVar3);
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    lVar4 = param_3;
    uVar5 = param_4;
    FUN_100071370(param_3);
    bVar1 = (uVar5 & 1) == 0;
    if (!bVar1) {
      (**(code **)(lVar9 + 0x10))
                (lVar8,*(long *)(lVar6 + 0x38) + *(long *)(lVar9 + 0x48) * lVar4,puVar3);
    }
    (**(code **)(lVar9 + 0x38))(lVar8,bVar1,1,puVar3);
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar8;
    (**(code **)(lVar9 + 0x30))(lVar8,1,puVar3);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar8 - extraout_x8_00,lVar8,puVar3);
      local_b0 = 0;
      Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_b0);
      _swift_beginAccess(unaff_x20 + lVar2,&local_b0,0x21,0);
      FUN_100506294(puVar7,param_3,param_4,&DAT_100fcb3a0,&DAT_100c501a0,&DAT_100fcb478,
                    &DAT_100c53fc0);
      _swift_endAccess(&local_b0);
      FUN_1000fb4c4(puVar7,&DAT_100fcd158,&DAT_100c53740);
      (**(code **)(lVar9 + 8))(lVar8 - extraout_x8_00,puVar3);
      goto LAB_100503f50;
    }
  }
  FUN_1000fb4c4(lVar8,&DAT_100fcd158,&DAT_100c53740);
LAB_100503f50:
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,
                     auStack_c8,0x21,0);
  FUN_100506158(&local_b0,param_3,param_4);
  _swift_endAccess(auStack_c8);
  FUN_1005080ac(local_b0,uStack_a8,local_a0,uStack_98,local_90,uStack_88,local_80);
  return;
}



/* Address: 0x100503fbc | FUN_100503fbc */

void FUN_100503fbc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_200;
  long local_1f8;
  long local_1f0;
  undefined *puStack_1e8;
  undefined1 auStack_1e0 [96];
  undefined1 auStack_180 [24];
  undefined8 local_168;
  long lStack_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 local_c8 [8];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar1 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  local_1f0 = *(long *)(puVar1 + -8);
  puStack_1e8 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_1f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar1 = &DAT_100fcd158;
  local_1f8 = (long)&local_200 - extraout_x8;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = ((long)&local_200 - extraout_x8) - extraout_x8_00;
  puVar1 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID);
  uVar3 = ((undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID))[1]
  ;
  local_200 = param_1;
  FUN_100504a00(uVar2,uVar3,param_1,param_2);
  lVar5 = _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation,
                     auStack_e0,0,0);
  FUN_1000f8cac(unaff_x20 + lVar5,lVar6,&DAT_100fcd158,&DAT_100c53740);
  lVar5 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar5 == 1) {
    _swift_bridgeObjectRelease(uVar3);
    FUN_1000fb4c4(lVar6,&DAT_100fcd158,&DAT_100c53740);
    lVar5 = *(long *)(unaff_x20 + 0x70);
    _swift_beginAccess(lVar5 + 0x20,auStack_f8,0,0);
    FUN_100076688(lVar5 + 0x20,local_c8);
    FUN_100004640(local_c8,local_b0);
    (**(code **)(lStack_a8 + 0x70))(local_b0,lStack_a8);
    FUN_100004594(local_c8);
    if (((uint)local_b0 & 0xff) < 2) {
      FUN_100076688(lVar5 + 0x20,auStack_180);
      FUN_100004640(auStack_180,local_168);
      local_c8[0] = 1;
      local_c0 = 0xd00000000000003d;
      uStack_b8 = 0x8000000100dac7b0;
      lStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      local_90 = 0xd000000000000025;
      uStack_88 = 0x8000000100dac430;
      local_80 = 0xd00000000000001f;
      uStack_78 = 0x8000000100dac790;
      local_70 = 0x1a6;
      local_158 = CONCAT71(local_158._1_7_,1);
      local_150 = 0xd00000000000003d;
      uStack_148 = 0x8000000100dac7b0;
      uStack_138 = 0;
      local_140 = 0;
      uStack_128 = 0;
      local_130 = 0;
      local_120 = 0xd000000000000025;
      uStack_118 = 0x8000000100dac430;
      local_110 = 0xd00000000000001f;
      uStack_108 = 0x8000000100dac790;
      local_100 = 0x1a6;
      FUN_1004eaa00(local_c8,auStack_1e0);
      FUN_1004eaa3c(&local_158);
      (**(code **)(lStack_160 + 0x28))(local_c8,local_168,lStack_160);
      FUN_1004eaa3c(local_c8);
      FUN_100004594(auStack_180);
    }
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6 - extraout_x8_01,lVar6,puVar1);
    FUN_1004ff5a8(local_c8,local_200,param_2,uVar2,uVar3);
    _swift_bridgeObjectRelease();
    FUN_1004ff01c();
    FUN_100508574(local_c8);
    lVar5 = local_1f8;
    local_158 = uVar3;
    local_150 = param_2;
    Swift::AsyncThrowingStream::Continuation::_yield(local_1f8,&local_158,puVar1);
    (**(code **)(local_1f0 + 8))(lVar5,puStack_1e8);
    (**(code **)(lVar4 + 8))(lVar6 - extraout_x8_01,puVar1);
  }
  return;
}



/* Address: 0x100504330 | FUN_100504330 */

void FUN_100504330(undefined8 *param_1,_StringGuts param_2,_StringGuts param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 *puVar12;
  AsyncThrowingStream throwing;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *local_110;
  long local_108;
  undefined8 *local_100;
  long local_f8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined1 auStack_a8 [72];
  
  lVar13 = param_4;
  FUN_100504b9c();
  if (param_3.unknown != (undefined *)0x0) {
    puVar7 = &DAT_100fcb3a0;
    local_f8 = param_4;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    lVar15 = *(long *)(puVar7 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
    throwing.unknown = (undefined *)((long)&local_110 - extraout_x8);
    puVar6 = &DAT_100fcd148;
    FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
    lVar11 = *(long *)(puVar6 + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar14 = (long)throwing.unknown - extraout_x8_00;
    (**(code **)(lVar11 + 0x68))
              (lVar14,*(undefined4 *)
                       PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
               ,puVar6);
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
    if ((bVar4 & 1) == 0) {
      FUN_100505e68(param_1,throwing.unknown,lVar14);
    }
    else {
      Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)param_1,throwing);
    }
    (**(code **)(lVar11 + 8))(lVar14,puVar6);
    lVar11 = *(long *)(lVar13 + 0x10);
    if (lVar11 != 0) {
      lVar14 = lVar13;
      local_110 = param_3.unknown;
      local_108 = lVar15;
      local_100 = param_1;
      _swift_bridgeObjectRetain();
      puVar12 = (undefined8 *)(lVar14 + 0x38);
      do {
        uVar10 = puVar12[-3];
        uVar2 = puVar12[-2];
        uVar1 = puVar12[-1];
        uVar3 = *puVar12;
        _swift_bridgeObjectRetain(uVar2);
        FUN_1001037b4(uVar1,uVar3);
        FUN_1004ff5a8(auStack_a8,uVar1,uVar3,uVar10,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        puVar6 = &DAT_100fcd490;
        puVar9 = &DAT_100c538b0;
        FUN_1000f7830();
        lVar15 = *(long *)(puVar6 + -8);
        puVar8 = puVar6;
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
        FUN_1004ff01c();
        FUN_100508574(auStack_a8);
        local_c0 = puVar8;
        puStack_b8 = puVar9;
        Swift::AsyncThrowingStream::Continuation::_yield
                  ((long)throwing.unknown - extraout_x8_01,&local_c0,puVar7);
        FUN_10003bf2c(uVar1,uVar3);
        (**(code **)(lVar15 + 8))((long)throwing.unknown - extraout_x8_01,puVar6);
        puVar12 = puVar12 + 4;
        lVar11 = lVar11 + -1;
      } while (lVar11 != 0);
      _swift_bridgeObjectRelease(lVar13);
      param_1 = local_100;
      param_3.unknown = local_110;
      lVar15 = local_108;
    }
    puVar6 = *(undefined **)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID);
    if ((param_2.unknown == puVar6 &&
         param_3.unknown ==
         (undefined *)
         ((long *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID))[1]) ||
       (bVar5 = Swift::_stringCompareWithSmolCheck
                          (param_2,param_3,(_StringComparisonResult)(__int8)puVar6), bVar5)) {
      puVar6 = &DAT_100fcd158;
      FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar14 = (long)throwing.unknown - extraout_x8_02;
      (**(code **)(lVar15 + 0x10))(lVar14,throwing.unknown,puVar7);
      (**(code **)(lVar15 + 0x38))(lVar14,0,1,puVar7);
      lVar11 = _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation;
      _swift_beginAccess(unaff_x20 +
                         _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation,&local_c0,
                         0x21,0);
      FUN_1005085a8(lVar14,unaff_x20 + lVar11);
    }
    else {
      puVar6 = &DAT_100fcd158;
      FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
      (*(code *)PTR____chkstk_darwin_100ea82c0)
                (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar11 = (long)throwing.unknown - extraout_x8_03;
      (**(code **)(lVar15 + 0x10))(lVar11,throwing.unknown,puVar7);
      (**(code **)(lVar15 + 0x38))(lVar11,0,1,puVar7);
      _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                         &local_c0,0x21,0);
      _swift_bridgeObjectRetain(param_3.unknown);
      FUN_100508a38(lVar11,param_2.unknown,param_3.unknown);
    }
    _swift_endAccess(&local_c0);
    uVar10 = 0xd000000000000014;
    lVar11 = -0x7ffffffeff2548f0;
    FUN_1004fe364(0xd000000000000014);
    if (lVar11 == 0) {
      if (DAT_100fce780 != -1) {
        _swift_once(&DAT_100fce780,FUN_1005286e4);
      }
      lVar11 = DAT_101057b38;
      uVar10 = DAT_101057b30;
      _swift_bridgeObjectRetain(DAT_101057b38);
    }
    FUN_100504f60(param_2.unknown,param_3.unknown,throwing.unknown,uVar10,lVar11);
    _swift_bridgeObjectRelease(lVar13);
    _swift_bridgeObjectRelease(param_3.unknown);
    _swift_bridgeObjectRelease(lVar11);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    lVar13 = *(long *)(unaff_x20 + 0xe0);
    if (lVar13 != 0) {
      uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
      _swift_bridgeObjectRetain(lVar13);
      puVar9 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native(puVar6);
      local_c0 = puVar6;
      FUN_1004b4f30(uVar10,lVar13,0x737365532d50434d,0xee0064492d6e6f69,puVar9);
      puVar6 = local_c0;
    }
    puVar9 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    lVar13 = (long)*(int *)(puVar9 + 0x30);
    *(undefined **)((long)param_1 + lVar13) = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_c0 = *(undefined **)((long)param_1 + lVar13);
    FUN_1004b4f30(0xd000000000000011,0x8000000100dab8a0,0x2d746e65746e6f43,0xec00000065707954,puVar6
                 );
    *(undefined **)((long)param_1 + lVar13) = local_c0;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = local_c0;
    local_c0 = *(undefined **)((long)param_1 + lVar13);
    FUN_1004b4f30(0xd000000000000016,0x8000000100dac570,0x6f432d6568636143,0xed00006c6f72746e,puVar6
                 );
    *(undefined **)((long)param_1 + lVar13) = local_c0;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = local_c0;
    local_c0 = *(undefined **)((long)param_1 + lVar13);
    FUN_1004b4f30(0x696c612d7065656b,0xea00000000006576,0x697463656e6e6f43,0xea00000000006e6f,puVar6
                 );
    *(undefined **)((long)param_1 + lVar13) = local_c0;
    (**(code **)(lVar15 + 8))(throwing.unknown,puVar7);
    uVar10 = 0;
    FUN_1004fe770(0);
    _swift_storeEnumTagMultiPayload(param_1,uVar10,3);
    return;
  }
  uVar10 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xe0);
  _swift_bridgeObjectRetain(uVar1);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a66a4();
  param_1[1] = 0xd000000000000015;
  *param_1 = 400;
  param_1[2] = 0x8000000100dac550;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = uVar10;
  param_1[6] = uVar1;
  param_1[7] = puVar7;
  uVar10 = 0;
  FUN_1004fe770(0);
  _swift_storeEnumTagMultiPayload(param_1,uVar10,4);
  return;
}



/* Address: 0x100504a00 | FUN_100504a00 */

undefined1  [16] FUN_100504a00(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  void *pvVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_68;
  
  lVar2 = _TtC3MCP27StatefulHTTPServerTransport::eventCounter;
  if (!SCARRY8(*(long *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::eventCounter),1)) {
    *(long *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::eventCounter) =
         *(long *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::eventCounter) + 1;
    pcVar8 = param_3;
    pvVar9 = param_4;
    local_80 = param_1;
    local_78 = param_2;
    _swift_bridgeObjectRetain(param_2);
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x5f;
    SVar13.bridgeObject = pvVar9;
    SVar13.str = pcVar8;
    Swift::String::append(SVar12,SVar13);
    local_68 = *(undefined8 *)(unaff_x20 + lVar2);
    SVar12 = Swift::CustomStringConvertible::get_description();
    SVar14.bridgeObject = pvVar9;
    SVar14.str = pcVar8;
    Swift::String::append(SVar12,SVar14);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    uVar4 = local_78;
    uVar3 = local_80;
    lVar2 = _TtC3MCP27StatefulHTTPServerTransport::storedEvents;
    auVar1._8_8_ = local_78;
    auVar1._0_8_ = local_80;
    _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::storedEvents,&local_80,
                       0x21,0);
    uVar11 = *(ulong *)(unaff_x20 + lVar2);
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(uVar4);
    FUN_10011da54(param_3,param_4);
    uVar6 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + lVar2) = uVar11;
    uVar7 = uVar11;
    if ((uVar6 & 1) == 0) {
      uVar7 = 0;
      FUN_1004a49cc(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(unaff_x20 + lVar2) = uVar7;
    }
    uVar6 = *(ulong *)(uVar7 + 0x10);
    uVar11 = uVar7;
    if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar6) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
      FUN_1004a49cc(uVar11,uVar6 + 1,1,uVar7);
    }
    *(ulong *)(uVar11 + 0x10) = uVar6 + 1;
    lVar10 = uVar11 + uVar6 * 0x30;
    *(undefined8 *)(lVar10 + 0x20) = param_1;
    *(undefined8 *)(lVar10 + 0x28) = param_2;
    *(undefined8 *)(lVar10 + 0x30) = uVar3;
    *(undefined8 *)(lVar10 + 0x38) = uVar4;
    *(char **)(lVar10 + 0x40) = param_3;
    *(void **)(lVar10 + 0x48) = param_4;
    *(ulong *)(unaff_x20 + lVar2) = uVar11;
    _swift_endAccess(&local_80);
    return auVar1;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100504b58);
  (*pcVar5)();
}



/* Address: 0x100504b9c | FUN_100504b9c */

undefined * FUN_100504b9c(undefined *param_1,undefined *param_2)

{
  _StringGuts _Var1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long unaff_x20;
  undefined8 *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *puStack_90;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar12 = _TtC3MCP27StatefulHTTPServerTransport::storedEvents;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::storedEvents,auStack_80,0,0)
  ;
  lVar12 = *(long *)(unaff_x20 + lVar12);
  uVar16 = *(ulong *)(lVar12 + 0x10);
  if (uVar16 != 0) {
    uVar17 = 0;
    puVar14 = (undefined8 *)(lVar12 + 0x38);
    do {
      if (((undefined *)puVar14[-1] == param_1 && (undefined *)*puVar14 == param_2) ||
         (bVar10 = Swift::_stringCompareWithSmolCheck
                             ((undefined *)puVar14[-1],(undefined *)*puVar14,
                              (_StringComparisonResult)(__int8)param_1), bVar10)) {
        uVar16 = *(ulong *)(lVar12 + 0x10);
        if (uVar16 <= uVar17) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100504f58);
          (*pcVar9)();
        }
        puStack_90 = (undefined *)puVar14[-3];
        puVar5 = (undefined *)puVar14[-2];
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(lVar12);
        puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar16 - 1 == uVar17) goto LAB_100504e18;
        uVar18 = uVar17 + 1;
        uVar13 = uVar17;
        goto LAB_100504c9c;
      }
      uVar17 = uVar17 + 1;
      puVar14 = puVar14 + 6;
    } while (uVar16 != uVar17);
  }
  puStack_90 = (undefined *)0x0;
LAB_100504f0c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return puStack_90;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
LAB_100504c9c:
  puVar15 = (ulong *)(lVar12 + 0x48 + uVar18 * 0x30);
  uVar18 = uVar18 + 1;
  do {
    if (((long)uVar13 < (long)uVar17) || (uVar13 = uVar18 - 1, (long)uVar16 <= (long)uVar13)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100504f54);
      (*pcVar9)();
    }
    _Var1.unknown = (undefined *)puVar15[-5];
    _Var6.unknown = (undefined *)puVar15[-4];
    uVar2 = puVar15[-3];
    uVar19 = puVar15[-2];
    uVar3 = puVar15[-1];
    uVar7 = *puVar15;
    if ((_Var1.unknown == puStack_90 && _Var6.unknown == puVar5) ||
       (bVar10 = Swift::_stringCompareWithSmolCheck
                           (_Var1,_Var6,(_StringComparisonResult)(__int8)puStack_90), bVar10)) {
      FUN_10011da54(uVar3,uVar7);
      if (uVar7 >> 0x3c < 0xf) break;
      FUN_10003bf18(uVar3,uVar7);
    }
    uVar18 = uVar18 + 1;
    puVar15 = puVar15 + 6;
    if (uVar18 - uVar16 == 1) goto LAB_100504e18;
  } while( true );
  _swift_bridgeObjectRetain(_Var6.unknown);
  _swift_bridgeObjectRetain(uVar19);
  FUN_10011da54(uVar3,uVar7);
  FUN_10003bf18(uVar3,uVar7);
  FUN_10003bf18(0,0xf000000000000000);
  puVar11 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_1004d6e7c(0,*(long *)(puVar8 + 0x10) + 1,1);
  }
  uVar4 = *(ulong *)(puVar8 + 0x10);
  if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar4) {
    FUN_1004d6e7c(1 < *(ulong *)(puVar8 + 0x18),uVar4 + 1,1);
  }
  *(ulong *)(puVar8 + 0x10) = uVar4 + 1;
  *(undefined **)(puVar8 + uVar4 * 0x30 + 0x20) = _Var1.unknown;
  *(undefined **)(puVar8 + uVar4 * 0x30 + 0x28) = _Var6.unknown;
  *(ulong *)(puVar8 + uVar4 * 0x30 + 0x30) = uVar2;
  *(ulong *)(puVar8 + uVar4 * 0x30 + 0x38) = uVar19;
  *(ulong *)(puVar8 + uVar4 * 0x30 + 0x40) = uVar3;
  *(ulong *)(puVar8 + uVar4 * 0x30 + 0x48) = uVar7;
  if (uVar18 == uVar16) goto LAB_100504e18;
  goto LAB_100504c9c;
LAB_100504e18:
  _swift_bridgeObjectRelease(lVar12);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar16 = *(ulong *)(puVar8 + 0x10);
  if (uVar16 == 0) {
    _swift_release(puVar8);
  }
  else {
    FUN_1004d6e60(0,uVar16,0);
    uVar17 = 0;
    puVar15 = (ulong *)(puVar8 + 0x48);
    do {
      if (*(ulong *)(puVar8 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100504f50);
        (*pcVar9)();
      }
      uVar18 = *puVar15;
      if (0xe < uVar18 >> 0x3c) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100504f5c);
        (*pcVar9)();
      }
      uVar13 = puVar15[-3];
      uVar3 = puVar15[-2];
      uVar19 = puVar15[-1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_10011da54(uVar19,uVar18);
      uVar2 = *(ulong *)(puVar5 + 0x10);
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        FUN_1004d6e60(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar17 = uVar17 + 1;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(ulong *)(puVar5 + uVar2 * 0x20 + 0x20) = uVar13;
      *(ulong *)(puVar5 + uVar2 * 0x20 + 0x28) = uVar3;
      *(ulong *)(puVar5 + uVar2 * 0x20 + 0x30) = uVar19;
      *(ulong *)(puVar5 + uVar2 * 0x20 + 0x38) = uVar18;
      puVar15 = puVar15 + 6;
    } while (uVar16 != uVar17);
    _swift_release(puVar8);
  }
  goto LAB_100504f0c;
}



/* Address: 0x100504f60 | FUN_100504f60 */

void FUN_100504f60(undefined8 param_1,undefined8 param_2,undefined8 param_3,_StringGuts param_4,
                  _StringGuts param_5)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  puVar2 = &DAT_100fcd490;
  local_108 = param_3;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (((param_4.unknown == (undefined *)0x2d33302d35323032) &&
      (param_5.unknown == (undefined *)0xea00000000003632)) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck(param_4,param_5,(_StringComparisonResult)0x32),
     !bVar1)) {
    FUN_100504a00(param_1,param_2,0,0xf000000000000000);
    local_b8 = *(undefined1 *)(unaff_x20 + 0xd0);
    local_e0 = 0;
    uStack_d8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    uStack_c7 = 0xe0000000000000;
    local_c0 = (undefined1)*(undefined8 *)(unaff_x20 + 200);
    uStack_bf = (undefined7)((ulong)*(undefined8 *)(unaff_x20 + 200) >> 8);
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_7f = CONCAT17(local_b8,uStack_bf);
    uStack_87 = 0xe0000000000000;
    uStack_80 = local_c0;
    local_f0 = param_1;
    uStack_e8 = param_2;
    local_b0 = param_1;
    uStack_a8 = param_2;
    FUN_1004ff01c();
    FUN_100508574(&local_f0);
    puVar3 = &DAT_100fcb3a0;
    local_100 = param_1;
    uStack_f8 = param_2;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_yield(auStack_110 + -extraout_x8,&local_100,puVar3);
    (**(code **)(lVar4 + 8))(auStack_110 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1005050dc | FUN_1005050dc */

void FUN_1005050dc(long param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)puVar7 - extraout_x12;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar9 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                     auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar2);
  if (*(long *)(lVar6 + 0x10) == 0) {
    (**(code **)(lVar9 + 0x38))(lVar8,1,1,puVar3);
  }
  else {
    _swift_bridgeObjectRetain(lVar6);
    lVar4 = param_1;
    uVar5 = param_2;
    FUN_100071370(param_1);
    bVar1 = (uVar5 & 1) == 0;
    if (!bVar1) {
      (**(code **)(lVar9 + 0x10))
                (lVar8,*(long *)(lVar6 + 0x38) + *(long *)(lVar9 + 0x48) * lVar4,puVar3);
    }
    (**(code **)(lVar9 + 0x38))(lVar8,bVar1,1,puVar3);
    _swift_bridgeObjectRelease(lVar6);
    lVar6 = lVar8;
    (**(code **)(lVar9 + 0x30))(lVar8,1,puVar3);
    if ((int)lVar6 != 1) {
      (**(code **)(lVar9 + 0x20))(lVar8 - extraout_x8_00,lVar8,puVar3);
      local_b0 = 0;
      Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_b0);
      _swift_beginAccess(unaff_x20 + lVar2,&local_b0,0x21,0);
      FUN_100506294(puVar7,param_1,param_2,&DAT_100fcb3a0,&DAT_100c501a0,&DAT_100fcb478,
                    &DAT_100c53fc0);
      _swift_endAccess(&local_b0);
      FUN_1000fb4c4(puVar7,&DAT_100fcd158,&DAT_100c53740);
      _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,
                         auStack_c8,0x21,0);
      FUN_100506158(&local_b0,param_1,param_2);
      _swift_endAccess(auStack_c8);
      FUN_1005080ac(local_b0,uStack_a8,local_a0,uStack_98,local_90,uStack_88,local_80);
      (**(code **)(lVar9 + 8))(lVar8 - extraout_x8_00,puVar3);
      return;
    }
  }
  FUN_1000fb4c4(lVar8,&DAT_100fcd158,&DAT_100c53740);
  return;
}



/* Address: 0x100505388 | FUN_100505388 */

void FUN_100505388(undefined8 *param_1,char *param_2,void *param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  char *local_68 [3];
  
  if (param_4 == '\x01') {
    local_68[0] = param_2;
    SVar15 = Swift::CustomStringConvertible::get_description();
  }
  else {
    SVar15.bridgeObject = param_3;
    SVar15.str = param_2;
    _swift_bridgeObjectRetain(param_3);
  }
  lVar4 = _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts;
  pvVar5 = SVar15.bridgeObject;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,local_68
                     ,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_100071370();
    if (((ulong)SVar15.bridgeObject & 1) != 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)SVar15.str * 0x38);
      uVar8 = *puVar3;
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
      uVar10 = puVar3[2];
      uVar9 = puVar3[1];
      uVar6 = puVar3[6];
      uVar14 = puVar3[6];
      uVar13 = puVar3[5];
      uVar12 = puVar3[4];
      uVar11 = puVar3[3];
      uVar7 = puVar3[4];
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar1);
      FUN_10011da54(uVar2,uVar7);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease(pvVar5);
      goto LAB_1005054c0;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_bridgeObjectRelease(pvVar5);
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
LAB_1005054c0:
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[6] = uVar14;
  param_1[5] = uVar13;
  return;
}



/* Address: 0x1005054ec | FUN_1005054ec */

void FUN_1005054ec(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  char *pcVar9;
  void *pvVar10;
  long extraout_x8;
  long extraout_x8_00;
  long lVar11;
  long extraout_x8_01;
  undefined8 *puVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  char *pcVar18;
  ulong uVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  long local_2a0 [3];
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_228 [12];
  undefined1 local_1c8 [8];
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  char acStack_168 [96];
  undefined1 auStack_108 [24];
  undefined8 local_f0;
  long lStack_e8;
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar7 = (long)local_2a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar7 - extraout_x12;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar15 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar17 - extraout_x8_00;
  puVar4 = &DAT_100fcdb10;
  FUN_1000f7830(&DAT_100fcdb10,&DAT_100c53ff8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar12 = (undefined8 *)(lVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (long)puVar12 - extraout_x12_00;
  if ((*(byte *)(unaff_x20 + 0xe8) & 1) != 0) {
    return;
  }
  *(undefined1 *)(unaff_x20 + 0xe8) = 1;
  lVar14 = *(long *)(unaff_x20 + 0x70);
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
  local_2a0[1] = lVar17;
  local_2a0[2] = lVar7;
  _swift_beginAccess(lVar14 + 0x20,auStack_e0);
  FUN_100076688(lVar14 + 0x20,&local_c8);
  puVar4 = puStack_a8;
  uVar8 = local_b0;
  FUN_100004640(&local_c8,local_b0);
  (**(code **)(puVar4 + 0x70))(uVar8,puVar4);
  FUN_100004594(&local_c8);
  if (((uint)uVar8 & 0xff) < 3) {
    FUN_100076688(lVar14 + 0x20,auStack_108);
    FUN_100004640(auStack_108,local_f0);
    puVar4 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar18 = acStack_168;
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x20) = 0x496e6f6973736573;
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined8 *)(puVar4 + 0x28) = 0xe900000000000044;
    local_c8 = 0;
    local_c0 = 0xe000000000000000;
    SVar22.bridgeObject = pcVar9;
    SVar22.str = pcVar18;
    Swift::String::reserveCapacity(2,SVar22);
    local_240 = local_c8;
    uStack_238 = local_c0;
    puVar5 = *(undefined1 **)(unaff_x20 + 0xe0);
    if (puVar5 == (undefined1 *)0x0) {
      puVar5 = &DAT_e400000000000000;
      pcVar18 = (char *)0x656e6f6e;
    }
    else {
      pcVar18 = *(char **)(unaff_x20 + 0xd8);
    }
    _swift_bridgeObjectRetain();
    SVar21.bridgeObject = puVar5;
    SVar21.str = pcVar18;
    SVar23.bridgeObject = pvVar10;
    SVar23.str = pcVar9;
    Swift::String::write(SVar21,SVar23);
    _swift_bridgeObjectRelease(puVar5);
    *(undefined8 *)(puVar4 + 0x30) = local_240;
    *(undefined8 *)(puVar4 + 0x38) = uStack_238;
    puVar4[0x58] = 0;
    puVar6 = puVar4;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar4);
    FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    local_c8 = CONCAT71(local_c8._1_7_,2);
    local_c0 = 0xd000000000000013;
    uStack_b8 = 0x8000000100dac7f0;
    local_b0 = 0;
    local_a0 = 0;
    uStack_98 = 0;
    local_90 = 0xd000000000000025;
    uStack_88 = 0x8000000100dac430;
    local_80 = 0x74616e696d726574;
    uStack_78 = 0xeb00000000292865;
    local_70 = 0x232;
    local_1c8[0] = 2;
    local_1c0 = 0xd000000000000013;
    uStack_1b8 = 0x8000000100dac7f0;
    local_1b0 = 0;
    local_1a0 = 0;
    uStack_198 = 0;
    local_190 = 0xd000000000000025;
    uStack_188 = 0x8000000100dac430;
    local_180 = 0x74616e696d726574;
    uStack_178 = 0xeb00000000292865;
    local_170 = 0x232;
    puStack_1a8 = puVar6;
    puStack_a8 = puVar6;
    FUN_1004eaa00(&local_c8,local_228);
    FUN_1004eaa3c(local_1c8);
    (**(code **)(lStack_e8 + 0x28))(&local_c8,local_f0);
    FUN_1004eaa3c(&local_c8);
    FUN_100004594(auStack_108);
  }
  lVar7 = _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations;
  _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations,
                     local_1c8,1,0);
  local_2a0[0] = lVar7;
  lVar7 = *(long *)(unaff_x20 + lVar7);
  uVar13 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(lVar7 + 0x40);
  uVar13 = uVar13 + 0x3f >> 6;
  _swift_bridgeObjectRetain();
  lVar14 = 0;
  lVar17 = lVar14;
  if (uVar16 == 0) goto LAB_1005058d8;
LAB_100505908:
  do {
    uVar19 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
    uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
    uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
    uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar17 << 6;
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar19 * 0x10);
    uVar8 = puVar1[1];
    uVar16 = uVar16 - 1 & uVar16;
    *puVar12 = *puVar1;
    puVar12[1] = uVar8;
    puVar4 = &DAT_100fcdb18;
    FUN_1000f7830(&DAT_100fcdb18,&DAT_100c54000);
    (**(code **)(lVar15 + 0x10))
              ((long)puVar12 + (long)*(int *)(puVar4 + 0x30),
               *(long *)(lVar7 + 0x38) + *(long *)(lVar15 + 0x48) * uVar19,puVar3);
    (**(code **)(*(long *)(puVar4 + -8) + 0x38))(puVar12,0,1,puVar4);
    _swift_bridgeObjectRetain(uVar8);
    lVar14 = lVar17;
    while( true ) {
      puVar4 = &DAT_100fcdb18;
      FUN_1005089e8(puVar12,lVar20);
      FUN_1000f7830(&DAT_100fcdb18,&DAT_100c54000);
      lVar17 = lVar20;
      (**(code **)(*(long *)(puVar4 + -8) + 0x30))(lVar20,1,puVar4);
      if ((int)lVar17 == 1) {
        _swift_release(lVar7);
        puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
        uVar8 = *(undefined8 *)(unaff_x20 + local_2a0[0]);
        *(undefined **)(unaff_x20 + local_2a0[0]) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
        _swift_bridgeObjectRelease(uVar8);
        lVar7 = _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts;
        _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts,
                           local_228,1,0);
        uVar8 = *(undefined8 *)(unaff_x20 + lVar7);
        *(undefined **)(unaff_x20 + lVar7) = puVar4;
        _swift_bridgeObjectRelease(uVar8);
        lVar7 = _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation;
        _swift_beginAccess(unaff_x20 +
                           _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation,
                           auStack_108,0,0);
        lVar17 = local_2a0[1];
        FUN_1000f8cac(unaff_x20 + lVar7,local_2a0[1],&DAT_100fcd158,&DAT_100c53740);
        lVar20 = lVar17;
        (**(code **)(lVar15 + 0x30))(lVar17,1,puVar3);
        if ((int)lVar20 == 0) {
          (**(code **)(lVar15 + 0x10))(lVar11,lVar17,puVar3);
          FUN_1000fb4c4(lVar17,&DAT_100fcd158,&DAT_100c53740);
          local_240 = 0;
          Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_240);
          (**(code **)(lVar15 + 8))(lVar11,puVar3);
        }
        else {
          FUN_1000fb4c4(lVar17,&DAT_100fcd158,&DAT_100c53740);
        }
        lVar11 = local_2a0[2];
        (**(code **)(lVar15 + 0x38))(local_2a0[2],1,1,puVar3);
        _swift_beginAccess(unaff_x20 + lVar7,&local_240,0x21,0);
        FUN_1005085a8(lVar11,unaff_x20 + lVar7);
        _swift_endAccess(&local_240);
        lVar11 = _TtC3MCP27StatefulHTTPServerTransport::storedEvents;
        _swift_beginAccess(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::storedEvents,
                           &local_240,1,0);
        uVar8 = *(undefined8 *)(unaff_x20 + lVar11);
        *(undefined **)(unaff_x20 + lVar11) = PTR___swiftEmptyArrayStorage_100eae0d8;
        _swift_bridgeObjectRelease(uVar8);
        local_248 = 0;
        Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_248);
        return;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar20 + 8));
      (**(code **)(lVar15 + 0x20))(lVar11,lVar20 + *(int *)(puVar4 + 0x30),puVar3);
      local_228[0] = 0;
      Swift::AsyncThrowingStream::Continuation::_finish((Continuation)local_228);
      (**(code **)(lVar15 + 8))(lVar11,puVar3);
      lVar17 = lVar14;
      if (uVar16 != 0) break;
LAB_1005058d8:
      uVar19 = uVar13;
      if ((long)uVar13 <= lVar14 + 1) {
        uVar19 = lVar14 + 1;
      }
      while( true ) {
        lVar17 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100505c34);
          (*pcVar2)();
        }
        if ((long)uVar13 <= lVar17) break;
        uVar16 = ((ulong *)(lVar7 + 0x40))[lVar17];
        lVar14 = lVar14 + 1;
        if (uVar16 != 0) goto LAB_100505908;
      }
      puVar4 = &DAT_100fcdb18;
      FUN_1000f7830(&DAT_100fcdb18,&DAT_100c54000);
      (**(code **)(*(long *)(puVar4 + -8) + 0x38))(puVar12,1,1,puVar4);
      uVar16 = 0;
      lVar14 = uVar19 - 1;
    }
  } while( true );
}



/* Address: 0x100505c34 | FUN_100505c34 */

void FUN_100505c34(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100004594(unaff_x20 + 0x78);
  FUN_100004594(unaff_x20 + 0xa0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
  lVar1 = _TtC3MCP27StatefulHTTPServerTransport::incomingStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP27StatefulHTTPServerTransport::incomingContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts)
            );
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation,
                &DAT_100fcd158,&DAT_100c53740);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID + 8));
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::storedEvents));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100505d3c | FUN_100505d3c */

void FUN_100505d3c(void)

{
  FUN_100505c34();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100505d54 | FUN_100505d54 */

void FUN_100505d54(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_100501118();
  return;
}



/* Address: 0x100505d98 | FUN_100505d98 */

void FUN_100505d98(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_100501364(param_1,param_2);
  return;
}



/* Address: 0x100505df4 | FUN_100505df4 */

void FUN_100505df4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  _swift_task_switch(FUN_100505e14,uVar1,0);
  return;
}



/* Address: 0x100505e14 | FUN_100505e14 */

void FUN_100505e14(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  FUN_100505388(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58)
                ,*(undefined1 *)(unaff_x22 + 0x68));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[6] = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x000100505e64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100505e68 | FUN_100505e68 */

void FUN_100505e68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_70;
  
  puVar2 = &DAT_100fcd148;
  local_98 = param_2;
  local_90 = param_3;
  local_88 = param_1;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  lVar5 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_a0 + -extraout_x8) - extraout_x8_00;
  puVar4 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar8 = lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12;
  puVar4 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar10 = *(long *)(puVar4 + -8);
  (**(code **)(lVar10 + 0x38))(lVar9,1,1,puVar4);
  (**(code **)(lVar6 + 0x10))(auStack_a0 + -extraout_x8,local_90,puVar2);
  local_70 = lVar9;
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  (**(code **)(lVar5 + 0x10))(local_88,lVar7,puVar3);
  FUN_1000f8cac(lVar9,lVar8,&DAT_100fcd158,&DAT_100c53740);
  lVar6 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,puVar4);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar5 + 8))(lVar7,puVar3);
    (**(code **)(lVar10 + 0x20))(local_98,lVar8,puVar4);
    FUN_1000fb4c4(lVar9,&DAT_100fcd158,&DAT_100c53740);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100506088);
  (*pcVar1)();
}



/* Address: 0x100506088 | FUN_100506088 */

void FUN_100506088(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100506800();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_2 * 0x10 + 8));
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1000d9d9c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x100506158 | FUN_100506158 */

void FUN_100506158(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_3 & 1) == 0) {
    param_1[6] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100506b0c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x38);
    *param_1 = *puVar2;
    uVar4 = puVar2[1];
    param_1[2] = puVar2[2];
    param_1[1] = uVar4;
    uVar4 = puVar2[3];
    param_1[4] = puVar2[4];
    param_1[3] = uVar4;
    uVar4 = puVar2[5];
    param_1[6] = puVar2[6];
    param_1[5] = uVar4;
    FUN_10050789c(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Address: 0x10050624c | FUN_10050624c */

void FUN_10050624c(undefined8 param_1,undefined8 param_2)

{
  FUN_100506294(param_1,param_2,&DAT_100fcb3a0,&DAT_100c501a0,&DAT_100fcb478,&DAT_100c53fc0);
  return;
}



/* Address: 0x100506270 | FUN_100506270 */

void FUN_100506270(undefined8 param_1,undefined8 param_2)

{
  FUN_100506294(param_1,param_2,&DAT_100fcb460,&DAT_100c502b0,&DAT_100fcb458,&DAT_100c50470);
  return;
}



/* Address: 0x100506294 | FUN_100506294 */

void FUN_100506294(undefined8 param_1,long param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar5);
  if ((param_3 & 1) == 0) {
    FUN_1000f7830(param_4,param_5);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_4 + -8) + 0x38);
    uVar3 = 1;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100506d34(param_4,param_5,param_6,param_7);
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar5 + 0x30) + param_2 * 0x10 + 8));
    lVar4 = *(long *)(lVar5 + 0x38);
    lVar2 = param_4;
    FUN_1000f7830(param_4,param_5);
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x20))(param_1,lVar4 + *(long *)(lVar6 + 0x48) * param_2,lVar2);
    FUN_100507a60(param_2,lVar5,param_4,param_5);
    *unaff_x20 = lVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 0x38);
    uVar3 = 0;
    param_4 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x0001005063c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar3,1,param_4);
  return;
}



/* Address: 0x1005063ec | FUN_1005063ec */

void FUN_1005063ec(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined8 *puVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar4);
  if ((param_3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 4) = 0xff;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_100506f44();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar4 + 0x30) + param_2 * 0x10 + 8));
    puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_2 * 0x28);
    uVar1 = *(undefined1 *)(puVar3 + 4);
    uVar5 = *puVar3;
    uVar7 = puVar3[3];
    uVar6 = puVar3[2];
    param_1[1] = puVar3[1];
    *param_1 = uVar5;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    *(undefined1 *)(param_1 + 4) = uVar1;
    FUN_1001977c8(param_2,lVar4);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Address: 0x1005064d4 | FUN_1005064d4 */

undefined1  [16] FUN_1005064d4(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_1004b4b04(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
    uVar5 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100507278();
    }
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + param_1 * 0x18);
    FUN_1004dc818(*puVar2,puVar2[1],*(undefined1 *)(puVar2 + 2));
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 0x10);
    uVar3 = *puVar2;
    uVar5 = puVar2[1];
    FUN_100507c40(param_1,lVar4);
    *unaff_x20 = lVar4;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1005065b4 | FUN_1005065b4 */

undefined8 FUN_1005065b4(long param_1,ulong param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar4);
  FUN_1004b4b04(param_1,param_2,param_3);
  _swift_bridgeObjectRelease(lVar4);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar4 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100507720();
    }
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x30) + param_1 * 0x18);
    FUN_1004dc818(*puVar2,puVar2[1],*(undefined1 *)(puVar2 + 2));
    uVar3 = *(undefined8 *)(*(long *)(lVar4 + 0x38) + param_1 * 8);
    FUN_100507e54(param_1,lVar4);
    *unaff_x20 = lVar4;
  }
  return uVar3;
}



/* Address: 0x100506688 | FUN_100506688 */

void FUN_100506688(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fcb4b8;
  FUN_1000f7830(&DAT_100fcb4b8,&DAT_100c50480);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_100506764;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_100506764:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100506800);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1005067d8;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_1005067d8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x100506800 | FUN_100506800 */

void FUN_100506800(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fcb4a8;
  FUN_1000f7830(&DAT_100fcb4a8,&DAT_100c502f8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10050697c:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_1005068e8;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1005068e8:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005069a4);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_10050697c;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x1005069a4 | FUN_1005069a4 */

void FUN_1005069a4(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fcb4c0;
  FUN_1000f7830(&DAT_100fcb4c0,&DAT_100c50310);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_100506a80;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        if (uVar8 != 0) break;
LAB_100506a80:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100506b0c);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_100506ae4;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_100506ae4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100506b0c | FUN_100506b0c */

void FUN_100506b0c(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  this = (_DictionaryStorage *)&DAT_100fcb468;
  FUN_1000f7830(&DAT_100fcb468,&DAT_100c502b8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var10 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar11 = (1L << ((ulong)(byte)p_Var10[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var10 != original || p_Var1 + uVar11 * 8 <= p_Var10 + 0x40) {
      _memmove(p_Var10 + 0x40,p_Var1,uVar11 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(p_Var10 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(original + 0x40);
    if (uVar11 == 0) goto LAB_100506bf4;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar18 << 6;
        lVar14 = uVar13 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar7 = puVar3[1];
        lVar2 = uVar13 * 0x38;
        puVar4 = (undefined8 *)(*(long *)(original + 0x38) + lVar2);
        uVar15 = *puVar4;
        uVar16 = puVar4[6];
        puVar5 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + lVar14);
        uVar20 = puVar4[5];
        uVar19 = puVar4[4];
        uVar6 = puVar4[3];
        uVar8 = puVar4[4];
        uVar17 = puVar4[2];
        uVar22 = puVar4[2];
        uVar21 = puVar4[1];
        *puVar5 = *puVar3;
        puVar5[1] = uVar7;
        puVar3 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + lVar2);
        *puVar3 = uVar15;
        puVar3[2] = uVar22;
        puVar3[1] = uVar21;
        puVar3[3] = uVar6;
        puVar3[5] = uVar20;
        puVar3[4] = uVar19;
        puVar3[6] = uVar16;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar17);
        FUN_10011da54(uVar6,uVar8);
        _swift_bridgeObjectRetain(uVar16);
        if (uVar11 != 0) break;
LAB_100506bf4:
        do {
          lVar2 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100506cec);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar2) goto LAB_100506cb8;
          uVar11 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar18 = lVar2;
      }
    } while( true );
  }
LAB_100506cb8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var10;
  return;
}



/* Address: 0x100506cec | FUN_100506cec */

void FUN_100506cec(void)

{
  FUN_100506d34(&DAT_100fcb3a0,&DAT_100c501a0,&DAT_100fcb478,&DAT_100c53fc0);
  return;
}



/* Address: 0x100506d10 | FUN_100506d10 */

void FUN_100506d10(void)

{
  FUN_100506d34(&DAT_100fcb460,&DAT_100c502b0,&DAT_100fcb458,&DAT_100c50470);
  return;
}



/* Address: 0x100506d34 | FUN_100506d34 */

void FUN_100506d34(long param_1,undefined8 param_2,_DictionaryStorage *param_3,undefined8 param_4)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  __RawDictionaryStorage *p_Var6;
  long lVar7;
  long extraout_x8;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_a0 [8];
  ulong local_68;
  
  FUN_1000f7830();
  lVar7 = *(long *)(param_1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(param_3,param_4);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(param_3,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100506f1c:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar8 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar8 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar8 << 3);
  }
  lVar12 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_68 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_68 = ~(-1L << (uVar8 & 0x3f));
  }
  local_68 = local_68 & *(ulong *)(original + 0x40);
  if (local_68 == 0) goto LAB_100506e5c;
  do {
    uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    local_68 = local_68 - 1 & local_68;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar12 << 6;
      lVar10 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar11 = *(long *)(lVar7 + 0x48) * uVar9;
      (**(code **)(lVar7 + 0x10))
                (auStack_a0 + -extraout_x8,*(long *)(original + 0x38) + lVar11,param_1);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      (**(code **)(lVar7 + 0x20))
                (*(long *)(p_Var6 + 0x38) + lVar11,auStack_a0 + -extraout_x8,param_1);
      _swift_bridgeObjectRetain(uVar4);
      if (local_68 != 0) break;
LAB_100506e5c:
      do {
        lVar10 = lVar12 + 1;
        if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100506f44);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100506f1c;
        }
        local_68 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar12 = lVar12 + 1;
      } while (local_68 == 0);
      uVar9 = (local_68 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_68 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      local_68 = local_68 - 1 & local_68;
      lVar12 = lVar10;
    }
  } while( true );
}



/* Address: 0x100506f44 | FUN_100506f44 */

void FUN_100506f44(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar18;
  
  this = (_DictionaryStorage *)&DAT_100fcb498;
  FUN_1000f7830(&DAT_100fcb498,&DAT_100c519f0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var12 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar13 = (1L << ((ulong)(byte)p_Var12[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var12 != original || p_Var1 + uVar13 * 8 <= p_Var12 + 0x40) {
      _memmove(p_Var12 + 0x40,p_Var1,uVar13 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(p_Var12 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(original + 0x40);
    if (uVar13 == 0) goto LAB_100507034;
    do {
      uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      while( true ) {
        uVar15 = LZCOUNT(uVar15) | lVar18 << 6;
        lVar17 = uVar15 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar17);
        uVar7 = puVar2[1];
        lVar16 = uVar15 * 0x28;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar16);
        uVar5 = *puVar3;
        uVar8 = puVar3[1];
        uVar6 = puVar3[2];
        uVar9 = puVar3[3];
        puVar4 = (undefined8 *)(*(long *)(p_Var12 + 0x30) + lVar17);
        uVar10 = *(undefined1 *)(puVar3 + 4);
        *puVar4 = *puVar2;
        puVar4[1] = uVar7;
        puVar2 = (undefined8 *)(*(long *)(p_Var12 + 0x38) + lVar16);
        *puVar2 = uVar5;
        puVar2[1] = uVar8;
        puVar2[2] = uVar6;
        puVar2[3] = uVar9;
        *(undefined1 *)(puVar2 + 4) = uVar10;
        _swift_bridgeObjectRetain();
        FUN_10045b2bc(uVar5,uVar8,uVar6,uVar9,uVar10);
        if (uVar13 != 0) break;
LAB_100507034:
        do {
          lVar16 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x100507108);
            (*pcVar11)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar16) goto LAB_1005070d4;
          uVar13 = *(ulong *)(p_Var1 + lVar16 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar13 == 0);
        uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar18 = lVar16;
      }
    } while( true );
  }
LAB_1005070d4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var12;
  return;
}



/* Address: 0x100507108 | FUN_100507108 */

void FUN_100507108(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fcb430;
  FUN_1000f7830(&DAT_100fcb430,&DAT_100c50280);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_1005071e4;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar11);
        if (uVar8 != 0) break;
LAB_1005071e4:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100507278);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_100507250;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_100507250:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100507278 | FUN_100507278 */

void FUN_100507278(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  this = (_DictionaryStorage *)&DAT_100fcb420;
  FUN_1000f7830(&DAT_100fcb420,&DAT_100c50270);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar9 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar9 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar9 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(original + 0x40);
    if (uVar9 == 0) goto LAB_100507354;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar15 << 6;
        lVar13 = uVar11 * 0x18;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar13);
        uVar5 = puVar2[1];
        lVar12 = uVar11 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar12);
        puVar4 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + lVar13);
        uVar14 = puVar3[1];
        uVar17 = puVar3[1];
        uVar16 = *puVar3;
        uVar6 = *(undefined1 *)(puVar2 + 2);
        *puVar4 = *puVar2;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        puVar2 = (undefined8 *)(*(long *)(p_Var8 + 0x38) + lVar12);
        puVar2[1] = uVar17;
        *puVar2 = uVar16;
        FUN_1004a7398();
        _swift_retain(uVar14);
        if (uVar9 != 0) break;
LAB_100507354:
        do {
          lVar12 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100507400);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1005073d8;
          uVar9 = *(ulong *)(p_Var1 + lVar12 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar15 = lVar12;
      }
    } while( true );
  }
LAB_1005073d8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}



/* Address: 0x100507400 | FUN_100507400 */

void FUN_100507400(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  this = (_DictionaryStorage *)&DAT_100fcb440;
  FUN_1000f7830(&DAT_100fcb440,&DAT_100c50290);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100507588:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_1005074e8;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x30;
      FUN_1004b8da8(*(long *)(original + 0x38) + lVar10,&local_90);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x38) + lVar10);
      puVar2[1] = uStack_88;
      *puVar2 = local_90;
      puVar2[3] = CONCAT71(local_77,uStack_78);
      puVar2[2] = uStack_80;
      *(undefined8 *)((long)puVar2 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar2 + 0x19) = CONCAT17(uStack_70,local_77);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1005074e8:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005075b0);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100507588;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x1005075b0 | FUN_1005075b0 */

void FUN_1005075b0(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fcb428;
  FUN_1000f7830(&DAT_100fcb428,&DAT_100c53fe0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_10050768c;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        _swift_retain(uVar11);
        if (uVar8 != 0) break;
LAB_10050768c:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100507720);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1005076f8;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1005076f8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100507720 | FUN_100507720 */

void FUN_100507720(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar12;
  long lVar13;
  
  this = (_DictionaryStorage *)&DAT_100fcb408;
  FUN_1000f7830(&DAT_100fcb408,&DAT_100c50258);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar9 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar9 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar9 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(original + 0x40);
    if (uVar9 == 0) goto LAB_1005077fc;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar11 * 0x18);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(original + 0x38) + uVar11 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x18);
        uVar6 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined1 *)(puVar4 + 2) = uVar6;
        *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar11 * 8) = uVar12;
        FUN_1004a7398();
        _swift_retain(uVar12);
        if (uVar9 != 0) break;
LAB_1005077fc:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10050789c);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_100507874;
          uVar9 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_100507874:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}



/* Address: 0x10050789c | FUN_10050789c */

void FUN_10050789c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  void *pvVar3;
  String SVar4;
  code *pcVar5;
  Bucket BVar6;
  Hasher into;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    BVar6 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar6.offset + 1U & uVar8;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar3 = pSVar2->bridgeObject;
      SVar4 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar3);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar4);
      uVar7 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar3);
      uVar7 = uVar7 & uVar8;
      if (param_1.offset < (long)uVar12) {
        if (uVar7 < uVar12) {
LAB_1005079a4:
          if (param_1.offset < (long)uVar7) goto LAB_10050792c;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar10 + 2 <= puVar9 || param_1.offset != uVar11))
        {
          uVar13 = *puVar10;
          puVar9[1] = puVar10[1];
          *puVar9 = uVar13;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x38);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x38);
        if (((param_1.offset < (long)uVar11) || (puVar10 + 7 <= puVar9)) ||
           (param_1.offset != uVar11)) {
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          uVar16 = puVar10[3];
          uVar15 = puVar10[2];
          uVar18 = puVar10[5];
          uVar17 = puVar10[4];
          puVar9[6] = puVar10[6];
          puVar9[3] = uVar16;
          puVar9[2] = uVar15;
          puVar9[5] = uVar18;
          puVar9[4] = uVar17;
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar7) goto LAB_1005079a4;
LAB_10050792c:
      uVar11 = uVar11 + 1 & uVar8;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100507a60);
  (*pcVar5)();
}



/* Address: 0x100507a60 | FUN_100507a60 */

void FUN_100507a60(Bucket param_1,long param_2,long param_3,undefined8 param_4)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar17 = param_1.offset + 1U & (uVar11 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0) {
    uVar11 = ~uVar11;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar16 = BVar8.offset + 1U & uVar11;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
      pvVar5 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar6);
      uVar9 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar5);
      uVar9 = uVar9 & uVar11;
      if (param_1.offset < (long)uVar16) {
        if (uVar9 < uVar16) {
LAB_100507b5c:
          if (param_1.offset < (long)uVar9) goto LAB_100507ae4;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar4 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar17 * 0x10);
        if ((param_1.offset != uVar17) || (puVar4 + 2 <= puVar3)) {
          uVar18 = *puVar4;
          puVar3[1] = puVar4[1];
          *puVar3 = uVar18;
        }
        lVar15 = *(long *)(param_2 + 0x38);
        lVar10 = param_3;
        FUN_1000f7830(param_3,param_4);
        lVar14 = *(long *)(*(long *)(lVar10 + -8) + 0x48);
        lVar12 = lVar14 * param_1.offset;
        uVar9 = lVar15 + lVar12;
        lVar13 = lVar14 * uVar17;
        lVar15 = lVar15 + lVar13;
        param_1.offset = uVar17;
        if (lVar12 < lVar13 || (ulong)(lVar15 + lVar14) <= uVar9) {
          _swift_arrayInitWithTakeFrontToBack(uVar9,lVar15,1,lVar10);
        }
        else if (lVar12 - lVar13 != 0) {
          _swift_arrayInitWithTakeBackToFront(uVar9,lVar15,1);
        }
      }
      else if (uVar16 <= uVar9) goto LAB_100507b5c;
LAB_100507ae4:
      uVar17 = uVar17 + 1 & uVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar17 >> 6) * 8) >> (uVar17 & 0x3f) & 1) != 0);
  }
  uVar11 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar11) =
       *(ulong *)(_Var1.unknown + uVar11) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100507c40);
  (*pcVar7)();
}



/* Address: 0x100507c40 | FUN_100507c40 */

void FUN_100507c40(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char cVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  _HashTable _Var10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = param_1.offset + 1U & (uVar12 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
    uVar12 = ~uVar12;
    _Var10.unknown = _Var1.unknown;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar14 = BVar8.offset + 1U & uVar12;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar15 * 0x18);
      pcVar4 = pSVar2->str;
      puVar11 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      cVar5 = *(char *)&pSVar2[1].str;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      if (cVar5 == '\x01') {
        Swift::Hasher::_combine(1,(Hasher)_Var10.unknown);
        into.unknown = pcVar4;
        Swift::Hasher::_combine((__uint64)pcVar4,(Hasher)_Var10.unknown);
      }
      else {
        Swift::Hasher::_combine(0,(Hasher)_Var10.unknown);
        _swift_bridgeObjectRetain(puVar11);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar6);
      }
      uVar9 = Swift::Hasher::_finalize(into);
      FUN_1004dc818(pcVar4,puVar11,cVar5);
      uVar9 = uVar9 & uVar12;
      if (param_1.offset < (long)uVar14) {
        if (uVar9 < uVar14) {
LAB_100507d94:
          if (param_1.offset < (long)uVar9) goto LAB_100507cc0;
        }
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x18);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar15 * 0x18);
        if ((param_1.offset != uVar15) || (puVar3 + 3 <= puVar13)) {
          uVar17 = puVar3[1];
          uVar16 = *puVar3;
          puVar13[2] = puVar3[2];
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x10);
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar15 * 0x10);
        if ((param_1.offset != uVar15) || (puVar13 + 2 <= puVar3)) {
          uVar16 = *puVar13;
          puVar3[1] = puVar13[1];
          *puVar3 = uVar16;
          param_1.offset = uVar15;
        }
      }
      else if (uVar14 <= uVar9) goto LAB_100507d94;
LAB_100507cc0:
      uVar15 = uVar15 + 1 & uVar12;
      _Var10.unknown = puVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
  }
  uVar12 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar12) =
       *(ulong *)(_Var1.unknown + uVar12) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100507e54);
    (*pcVar7)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Address: 0x100507e54 | FUN_100507e54 */

void FUN_100507e54(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char cVar5;
  String SVar6;
  code *pcVar7;
  Bucket BVar8;
  Hasher into;
  ulong uVar9;
  _HashTable _Var10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar15 = param_1.offset + 1U & (uVar12 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0) {
    uVar12 = ~uVar12;
    _Var10.unknown = _Var1.unknown;
    BVar8 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar14 = BVar8.offset + 1U & uVar12;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar15 * 0x18);
      pcVar4 = pSVar2->str;
      puVar11 = pSVar2->bridgeObject;
      SVar6 = *pSVar2;
      cVar5 = *(char *)&pSVar2[1].str;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      if (cVar5 == '\x01') {
        Swift::Hasher::_combine(1,(Hasher)_Var10.unknown);
        into.unknown = pcVar4;
        Swift::Hasher::_combine((__uint64)pcVar4,(Hasher)_Var10.unknown);
      }
      else {
        Swift::Hasher::_combine(0,(Hasher)_Var10.unknown);
        _swift_bridgeObjectRetain(puVar11);
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar6);
      }
      uVar9 = Swift::Hasher::_finalize(into);
      FUN_1004dc818(pcVar4,puVar11,cVar5);
      uVar9 = uVar9 & uVar12;
      if (param_1.offset < (long)uVar14) {
        if (uVar9 < uVar14) {
LAB_100507fa8:
          if (param_1.offset < (long)uVar9) goto LAB_100507ed4;
        }
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x18);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar15 * 0x18);
        if ((param_1.offset != uVar15) || (puVar3 + 3 <= puVar13)) {
          uVar17 = puVar3[1];
          uVar16 = *puVar3;
          puVar13[2] = puVar3[2];
          puVar13[1] = uVar17;
          *puVar13 = uVar16;
        }
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 8);
        puVar13 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar15 * 8);
        if ((param_1.offset != uVar15) || (puVar13 + 1 <= puVar3)) {
          *puVar3 = *puVar13;
          param_1.offset = uVar15;
        }
      }
      else if (uVar14 <= uVar9) goto LAB_100507fa8;
LAB_100507ed4:
      uVar15 = uVar15 + 1 & uVar12;
      _Var10.unknown = puVar11;
    } while ((*(ulong *)(_Var1.unknown + (uVar15 >> 6) * 8) >> (uVar15 & 0x3f) & 1) != 0);
  }
  uVar12 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar12) =
       *(ulong *)(_Var1.unknown + uVar12) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100508068);
    (*pcVar7)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return;
}



/* Address: 0x100508068 | FUN_100508068 */

undefined8 FUN_100508068(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004fe770();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1005080ac | FUN_1005080ac */

void FUN_1005080ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_3);
    FUN_10003bf18(param_4,param_5);
    _swift_bridgeObjectRelease(param_7);
    return;
  }
  return;
}



/* Address: 0x100508104 | FUN_100508104 */

void FUN_100508104(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100508128();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x100508128 | FUN_100508128 */

void FUN_100508128(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fcd858 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10050816c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c53e30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c53e30,uVar1);
  DAT_100fcd858 = pTVar2;
  return;
}



/* Address: 0x10050816c | FUN_10050816c */

void FUN_10050816c(undefined8 param_1)

{
  if (DAT_100fcd888 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb3090);
  return;
}



/* Address: 0x1005081a4 | FUN_1005081a4 */

void FUN_1005081a4(void)

{
  FUN_10050816c(0);
  return;
}



/* Address: 0x1005081ac | FUN_1005081ac */

void FUN_1005081ac(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  long local_60;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  puStack_98 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_a0 = &DAT_100c53f10;
  local_90 = &DAT_100c53f28;
  puStack_88 = &DAT_100c53f28;
  local_80 = &DAT_100c53f40;
  puStack_78 = &DAT_100c53f58;
  local_70 = &DAT_100c53f70;
  puStack_68 = &DAT_100c53f70;
  puVar3 = &DAT_100fcd218;
  lVar2 = 0x13f;
  FUN_1004f9364(0x13f,&DAT_100fcd218,PTR_typeMetadataAccessor_100eaeea0);
  if (puVar3 < (undefined8 *)0x40) {
    local_60 = *(long *)(lVar2 + -8) + 0x40;
    puVar4 = &DAT_100fcd220;
    lVar2 = 0x13f;
    FUN_1004f9364(0x13f,&DAT_100fcd220,PTR_typeMetadataAccessor_100eaee68);
    if (puVar4 < (undefined *)0x40) {
      local_58 = *(long *)(lVar2 + -8) + 0x40;
      puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      lVar2 = 0x13f;
      puStack_50 = puVar1;
      local_48 = puVar1;
      FUN_1005082d8();
      if (puVar4 < (undefined *)0x40) {
        local_40 = *(long *)(lVar2 + -8) + 0x40;
        puStack_38 = &DAT_100c53f90;
        puStack_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
        local_30 = puVar1;
        _swift_updateClassMetadata2(param_1,0x100,0x10,&local_a0,param_1 + 0x50);
      }
    }
  }
  return;
}



/* Address: 0x1005082d8 | FUN_1005082d8 */

void FUN_1005082d8(void)

{
  Optional OVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  
  if (DAT_100fcd898 == 0) {
    puVar2 = &DAT_100fcb3a0;
    FUN_1000f8b08(&DAT_100fcb3a0,&DAT_100c501a0);
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fcd898 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100508338 | FUN_100508338 */

void FUN_100508338(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  if (0xe < *(ulong *)(param_1 + 0x28) >> 0x3c) {
    return;
  }
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100508384 | FUN_100508384 */

undefined8 * FUN_100508384(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  if (uVar2 >> 0x3c < 0xf) {
    uVar1 = param_2[4];
    FUN_1001037b4(uVar1,uVar2);
    param_1[4] = uVar1;
    param_1[5] = uVar2;
  }
  else {
    uVar1 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
  }
  return param_1;
}



/* Address: 0x1005083fc | FUN_1005083fc */

undefined8 * FUN_1005083fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  uVar4 = param_2[5];
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    if (uVar4 >> 0x3c < 0xf) {
      uVar2 = param_2[4];
      FUN_1001037b4(uVar2,uVar4);
      uVar3 = param_1[4];
      uVar1 = param_1[5];
      param_1[4] = uVar2;
      param_1[5] = uVar4;
      FUN_10003bf2c(uVar3,uVar1);
      return param_1;
    }
    FUN_10031275c(param_1 + 4);
  }
  else if (uVar4 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    FUN_1001037b4(uVar3,uVar4);
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    return param_1;
  }
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  return param_1;
}



/* Address: 0x1005084dc | FUN_1005084dc */

undefined8 * FUN_1005084dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      FUN_10003bf2c(uVar2);
      return param_1;
    }
    FUN_10031275c(param_1 + 4);
  }
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  return param_1;
}


