/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008fdcb4 | FUN_1008fdcb4 */

void FUN_1008fdcb4(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008fdce0 | FUN_1008fdce0 */

void FUN_1008fdce0(void)

{
  FUN_1008ee488();
  return;
}



/* Address: 0x1008fdd00 | FUN_1008fdd00 */

void FUN_1008fdd00(void)

{
  FUN_1008fec80(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1008fdd0c | FUN_1008fdd0c */

void FUN_1008fdd0c(void)

{
  long unaff_x20;
  
  FUN_1008e80d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100f12db0,
                thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1008fdd38 | thunk_FUN_1008fe590 */

void thunk_FUN_1008fe590(void)

{
  FUN_1008fe590();
  return;
}



/* Address: 0x1008fdd3c | thunk_FUN_1008fe5ec */

void thunk_FUN_1008fe5ec(void)

{
  long unaff_x20;
  
  FUN_1008e6720(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008fdd40 | thunk_FUN_1008fe620 */

void thunk_FUN_1008fe620(void)

{
  FUN_1008fe620();
  return;
}



/* Address: 0x1008fdd44 | FUN_1008fdd44 */

void FUN_1008fdd44(void)

{
  long unaff_x20;
  
  FUN_1008e651c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fdd50 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  FUN_1005d7508();
  return;
}



/* Address: 0x1008fdd54 | thunk_FUN_1008fe664 */

void thunk_FUN_1008fe664(void)

{
  long unaff_x20;
  
  FUN_1008e6634(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008fdd58 | FUN_1008fdd58 */

void FUN_1008fdd58(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fdd88 | FUN_1008fdd88 */

void FUN_1008fdd88(void)

{
  long unaff_x20;
  
  FUN_1008f6468(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),thunk_FUN_1005de8f4,&DAT_100f131c0,FUN_1008d678c);
  return;
}



/* Address: 0x1008fddbc | FUN_1008fddbc */

void FUN_1008fddbc(void)

{
  long unaff_x20;
  
  FUN_1008f3474(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fddc8 | FUN_1008fddc8 */

void FUN_1008fddc8(undefined8 param_1,uint param_2)

{
  if (((param_2 ^ 0xffffffff) & 0xff) != 0) {
    FUN_1008fddf0(param_1,param_2,PTR__swift_release_100eae3e8);
  }
  return;
}



/* Address: 0x1008fddf0 | FUN_1008fddf0 */

void FUN_1008fddf0(undefined8 param_1,char param_2,code *UNRECOVERED_JUMPTABLE)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008fde00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1008fde04 | FUN_1008fde04 */

void FUN_1008fde04(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fde30 | FUN_1008fde30 */

void FUN_1008fde30(void)

{
  long unaff_x20;
  
  FUN_1008e438c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fde4c | FUN_1008fde4c */

void FUN_1008fde4c(void)

{
  long unaff_x20;
  
  FUN_1008f5e90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fde58 | FUN_1008fde58 */

void FUN_1008fde58(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008fde6c | FUN_1008fde6c */

void FUN_1008fde6c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1008fde58();
  }
  return;
}



/* Address: 0x1008fde8c | FUN_1008fde8c */

void FUN_1008fde8c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1008fdeac();
  }
  return;
}



/* Address: 0x1008fdeac | FUN_1008fdeac */

void FUN_1008fdeac(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x1008fdec0 | FUN_1008fdec0 */

void FUN_1008fdec0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100fec448 != 0) {
    return;
  }
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  puVar2 = &DAT_100febfb0;
  FUN_1000f8b08(&DAT_100febfb0,&DAT_100c84e90);
  uVar3 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar2,puVar1);
  DAT_100fec448 = uVar3;
  return;
}



/* Address: 0x1008fdf3c | FUN_1008fdf3c */

void FUN_1008fdf3c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fec450 != 0) {
    return;
  }
  puVar1 = &DAT_100febfb0;
  FUN_1000f8b08(&DAT_100febfb0,&DAT_100c84e90);
  uVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fec450 = uVar2;
  return;
}



/* Address: 0x1008fdfa0 | FUN_1008fdfa0 */

void FUN_1008fdfa0(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uStack_28 = param_1[1];
  local_30 = *param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_30);
  return;
}



/* Address: 0x1008fdfd4 | FUN_1008fdfd4 */

void FUN_1008fdfd4(void)

{
  long unaff_x20;
  
  FUN_100906f34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fdfe0 | FUN_1008fdfe0 */

void FUN_1008fdfe0(void)

{
  FUN_1008eef78(5);
  return;
}



/* Address: 0x1008fe008 | FUN_1008fe008 */

void FUN_1008fe008(void)

{
  FUN_1008f04bc();
  return;
}



/* Address: 0x1008fe010 | FUN_1008fe010 */

void FUN_1008fe010(void)

{
  FUN_1008f662c();
  return;
}



/* Address: 0x1008fe018 | FUN_1008fe018 */

void FUN_1008fe018(void)

{
  long unaff_x20;
  
  FUN_100906d08(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fe024 | FUN_1008fe024 */

void FUN_1008fe024(void)

{
  FUN_1008f1a94();
  return;
}



/* Address: 0x1008fe02c | FUN_1008fe02c */

void FUN_1008fe02c(void)

{
  long unaff_x20;
  
  FUN_100906e20(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fe038 | FUN_1008fe038 */

void FUN_1008fe038(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x100),1)) {
    *(long *)(unaff_x20 + 0x100) = *(long *)(unaff_x20 + 0x100) + 1;
    FUN_1008eef78(1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fe054);
  (*pcVar1)();
}



/* Address: 0x1008fe054 | FUN_1008fe054 */

void FUN_1008fe054(void)

{
  FUN_1008f6688();
  return;
}



/* Address: 0x1008fe05c | FUN_1008fe05c */

void FUN_1008fe05c(void)

{
  FUN_1008f1af0();
  return;
}



/* Address: 0x1008fe064 | FUN_1008fe064 */

void FUN_1008fe064(void)

{
  FUN_1008fe388();
  return;
}



/* Address: 0x1008fe06c | FUN_1008fe06c */

undefined * FUN_1008fe06c(undefined8 *param_1,undefined *param_2)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  undefined *puVar9;
  long unaff_x21;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  
  puVar9 = (undefined *)*param_1;
  puVar10 = puVar9;
  puVar11 = param_2;
  FUN_1008fe298();
  if (unaff_x21 == 0) {
    if (((uint)puVar11 & 0xff) == 1) {
      if ((ulong)puVar9 >> 0x3e == 0) {
        puVar10 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar9) {
          _Var2.unknown = puVar9;
        }
        puVar10 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
    }
    else {
      puVar11 = puVar10;
      if (SCARRY8((long)puVar10,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe0d4);
        (*pcVar3)();
      }
      while( true ) {
        puVar11 = puVar11 + 1;
        if ((ulong)puVar9 >> 0x3e == 0) {
          puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar9) {
            _Var2.unknown = puVar9;
          }
          puVar5 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (puVar11 == puVar5) break;
        if (((ulong)puVar9 & 0xc000000000000001) == 0) {
          if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe264);
            (*pcVar3)();
          }
          puVar5 = *(undefined **)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
          if (puVar5 <= puVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe268);
            (*pcVar3)();
          }
          puVar12 = *(undefined **)(puVar9 + (long)puVar11 * 8 + 0x20);
          if (puVar12 != param_2) {
            if (puVar10 != puVar11) {
              if ((long)puVar10 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe274);
                (*pcVar3)();
              }
              if (puVar5 <= puVar10) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe278);
                (*pcVar3)();
              }
              puVar5 = *(undefined **)(puVar9 + (long)puVar10 * 8 + 0x20);
              _swift_retain(puVar5);
              _swift_retain(puVar12);
LAB_1008fe164:
              puVar6 = puVar9;
              _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
              if ((((int)puVar6 == 0) || ((long)puVar9 < 0)) || (((ulong)puVar9 >> 0x3e & 1) != 0))
              {
                FUN_1009322a0();
                uVar8 = (uint)((ulong)puVar9 >> 0x3e) & 1;
              }
              else {
                uVar8 = 0;
              }
              uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
              lVar1 = uVar13 + (long)puVar10 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(undefined **)(lVar1 + 0x20) = puVar12;
              _swift_release(uVar7);
              if (((long)puVar9 < 0) || (uVar8 != 0)) {
                FUN_1009322a0();
                uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
              }
              if ((long)puVar11 < 0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe23c);
                (*pcVar3)();
              }
              if (*(undefined **)(uVar13 + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe27c);
                (*pcVar3)();
              }
              lVar1 = uVar13 + (long)puVar11 * 8;
              uVar7 = *(undefined8 *)(lVar1 + 0x20);
              *(undefined **)(lVar1 + 0x20) = puVar5;
              _swift_release(uVar7);
              *param_1 = puVar9;
            }
LAB_1008fe0e8:
            bVar4 = SCARRY8((long)puVar10,1);
            puVar10 = puVar10 + 1;
            if (bVar4) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe270);
              (*pcVar3)();
            }
          }
        }
        else {
          puVar5 = puVar11;
          FUN_100942e04(puVar11,puVar9);
          _swift_unknownObjectRelease();
          if (puVar5 != param_2) {
            if (puVar10 != puVar11) {
              puVar5 = puVar10;
              FUN_100942e04(puVar10,puVar9);
              puVar12 = puVar11;
              FUN_100942e04(puVar11,puVar9);
              goto LAB_1008fe164;
            }
            goto LAB_1008fe0e8;
          }
        }
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe26c);
          (*pcVar3)();
        }
      }
    }
  }
  return puVar10;
}



/* Address: 0x1008fe298 | FUN_1008fe298 */

undefined1  [16] FUN_1008fe298(undefined *param_1,ulong param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  puVar8 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar7 = *(ulong *)(puVar8 + 0x10);
  }
  else {
    _Var1.unknown = puVar8;
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    uVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = 0;
  do {
    if (uVar7 == uVar4) {
      uVar4 = 0;
      uVar5 = 1;
LAB_1008fe344:
      auVar9._8_8_ = uVar5;
      auVar9._0_8_ = uVar4;
      return auVar9;
    }
    if (((ulong)param_1 & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar8 + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008fe360);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_1 + uVar4 * 8 + 0x20);
    }
    else {
      uVar6 = uVar4;
      FUN_100942e04(uVar4,param_1);
      _swift_unknownObjectRelease();
    }
    if (uVar6 == param_2) {
      uVar5 = 0;
      goto LAB_1008fe344;
    }
    bVar3 = SCARRY8(uVar4,1);
    uVar4 = uVar4 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008fe364);
      (*pcVar2)();
    }
  } while( true );
}



/* Address: 0x1008fe388 | FUN_1008fe388 */

void FUN_1008fe388(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x90);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    uVar1 = *(undefined8 *)(param_1 + 0xa0);
    _swift_retain(lVar5);
    _swift_retain(uVar1);
    FUN_100950b80(lVar5,uVar4,uVar1);
    _swift_release(uVar1);
    _swift_release(lVar5);
    uVar4 = *(undefined8 *)(param_1 + 0x90);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  uVar2 = *(undefined8 *)(param_1 + 0xa0);
  *(long *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  FUN_100622430(uVar4,uVar1,uVar2);
  if (!SCARRY8(*(long *)(param_1 + 0x100),1)) {
    *(long *)(param_1 + 0x100) = *(long *)(param_1 + 0x100) + 1;
    FUN_1008eef78(2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1008fe42c);
  (*pcVar3)();
}



/* Address: 0x1008fe42c | FUN_1008fe42c */

void FUN_1008fe42c(void)

{
  FUN_1008f062c();
  return;
}



/* Address: 0x1008fe444 | thunk_FUN_1008fe50c */

void thunk_FUN_1008fe50c(void)

{
  FUN_1008fe50c();
  return;
}



/* Address: 0x1008fe448 | FUN_1008fe448 */

void FUN_1008fe448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008f1108(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fe454 | FUN_1008fe454 */

void FUN_1008fe454(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe48c | FUN_1008fe48c */

void FUN_1008fe48c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008f1904(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fe498 | FUN_1008fe498 */

void FUN_1008fe498(void)

{
  long unaff_x20;
  
  FUN_1008f60e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fe4a4 | FUN_1008fe4a4 */

void FUN_1008fe4a4(void)

{
  FUN_1008fe4b4(PTR__swift_unknownObjectRelease_100eae458,0x30);
  return;
}



/* Address: 0x1008fe4b4 | FUN_1008fe4b4 */

void FUN_1008fe4b4(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe500 | FUN_1008fe500 */

void FUN_1008fe500(void)

{
  long unaff_x20;
  
  FUN_1008f1630(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fe50c | FUN_1008fe50c */

void FUN_1008fe50c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(ulong *)(unaff_x20 + 0x20) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe544 | FUN_1008fe544 */

void FUN_1008fe544(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008f1768(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fe550 | FUN_1008fe550 */

void FUN_1008fe550(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c840a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c840a0,&DAT_100f14508);
  DAT_100fec478 = pTVar1;
  return;
}



/* Address: 0x1008fe590 | FUN_1008fe590 */

void FUN_1008fe590(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  if (((*(ulong *)(unaff_x20 + 0x30) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_release(*(ulong *)(unaff_x20 + 0x30) & 0x3fffffffffffffff);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe5ec | FUN_1008fe5ec */

void FUN_1008fe5ec(void)

{
  long unaff_x20;
  
  FUN_1008e6720(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008fe620 | FUN_1008fe620 */

void FUN_1008fe620(void)

{
  long unaff_x20;
  
  if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe664 | FUN_1008fe664 */

void FUN_1008fe664(void)

{
  long unaff_x20;
  
  FUN_1008e6634(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008fe674 | FUN_1008fe674 */

void FUN_1008fe674(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fec480;
  FUN_1000f7830(&DAT_100fec480,&DAT_100c85b00);
  FUN_10061cf14(2,0,puVar1,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008fe6ac | FUN_1008fe6ac */

void FUN_1008fe6ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe6d0 | FUN_1008fe6d0 */

void FUN_1008fe6d0(void)

{
  long unaff_x20;
  
  FUN_1008e389c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008fe6d8 | FUN_1008fe6d8 */

void FUN_1008fe6d8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe6e8 | FUN_1008fe6e8 */

void FUN_1008fe6e8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe70c | FUN_1008fe70c */

void FUN_1008fe70c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_getObjectType();
  FUN_10063dc68();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008fe75c | FUN_1008fe75c */

undefined8 FUN_1008fe75c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&local_38,&local_30);
  return local_38;
}



/* Address: 0x1008fe794 | FUN_1008fe794 */

void FUN_1008fe794(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe7f8 | FUN_1008fe7f8 */

void FUN_1008fe7f8(void)

{
  long unaff_x20;
  
  FUN_1008e3ba8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x60));
  return;
}


