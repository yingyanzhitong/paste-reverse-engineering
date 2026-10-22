/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002ec1c8 | FUN_1002ec1c8 */

void FUN_1002ec1c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002e4f44(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002ec234 | FUN_1002ec234 */

void FUN_1002ec234(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ec258 | FUN_1002ec258 */

void FUN_1002ec258(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return;
  }
  return;
}



/* Address: 0x1002ec26c | FUN_1002ec26c */

void FUN_1002ec26c(long param_1)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  Hasher into;
  ulong uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong unaff_x20;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [24];
  undefined *local_68;
  
  uVar16 = *(ulong *)(param_1 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x108,auStack_80,0,0);
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar16 == 0) {
    lVar15 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
  }
  else {
    uVar17 = 0;
    do {
      uVar5 = uVar17;
      if (uVar17 <= uVar16) {
        uVar5 = uVar16;
      }
      while( true ) {
        if (uVar17 == uVar5) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1002ec520);
          (*pcVar9)();
        }
        pSVar1 = (String *)(param_1 + 0x20 + uVar17 * 0x10);
        pcVar3 = pSVar1->str;
        puVar6 = pSVar1->bridgeObject;
        SVar8 = *pSVar1;
        _swift_bridgeObjectRetain(puVar6);
        uVar11 = unaff_x20;
        _swift_task_isCurrentExecutor(unaff_x20,0);
        if ((uVar11 & 1) == 0) {
          _swift_task_reportUnexpectedExecutor
                    ("PasteSearch/SpotlightIndexer+OCR.swift",0x26,1,5,unaff_x20,0);
        }
        uVar17 = uVar17 + 1;
        lVar15 = *(long *)(unaff_x20 + 0x108);
        if (*(long *)(lVar15 + 0x10) == 0) goto LAB_1002ec400;
        Swift::Hasher::init(*(__int64 *)(lVar15 + 0x28));
        _swift_bridgeObjectRetain(lVar15);
        into.unknown = auStack_c8;
        Swift::String::hash(into,SVar8);
        uVar11 = Swift::Hasher::_finalize(into);
        uVar13 = -1L << ((ulong)*(byte *)(lVar15 + 0x20) & 0x3f);
        uVar11 = uVar11 & (uVar13 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar15 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0) break;
        while( true ) {
          puVar2 = (undefined8 *)(*(long *)(lVar15 + 0x30) + uVar11 * 0x10);
          _Var4.unknown = (undefined *)*puVar2;
          _Var7.unknown = (undefined *)puVar2[1];
          if ((_Var4.unknown == pcVar3 && _Var7.unknown == puVar6) ||
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var4,_Var7,(_StringComparisonResult)(__int8)pcVar3), bVar10))
          break;
          uVar11 = uVar11 + 1 & ~uVar13;
          if ((*(ulong *)(lVar15 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) == 0)
          goto LAB_1002ec3f0;
        }
        _swift_bridgeObjectRelease(puVar6);
        _swift_bridgeObjectRelease(lVar15);
        if (uVar17 == uVar16) goto LAB_1002ec47c;
      }
LAB_1002ec3f0:
      _swift_bridgeObjectRelease(lVar15);
LAB_1002ec400:
      puVar12 = puVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      local_68 = puVar14;
      if (((ulong)puVar12 & 1) == 0) {
        FUN_1002dd1f8(0,*(long *)(puVar14 + 0x10) + 1,1);
      }
      uVar5 = *(ulong *)(local_68 + 0x10);
      if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar5) {
        FUN_1002dd1f8(1 < *(ulong *)(local_68 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar5 + 1;
      *(char **)(local_68 + uVar5 * 0x10 + 0x20) = pcVar3;
      *(undefined **)(local_68 + uVar5 * 0x10 + 0x28) = puVar6;
      puVar14 = local_68;
    } while (uVar17 != uVar16);
LAB_1002ec47c:
    lVar15 = *(long *)(puVar14 + 0x10);
  }
  if (lVar15 == 0) {
    _swift_release(puVar14);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x108,auStack_c8,0x21,0);
    _swift_retain(puVar14);
    FUN_1002ee748();
    _swift_endAccess(auStack_c8);
    _swift_release(puVar14);
    _swift_beginAccess(unaff_x20 + 0x100,auStack_c8,0x21,0);
    FUN_1002daab8(puVar14);
    _swift_endAccess(auStack_c8);
  }
  return;
}



/* Address: 0x1002ec520 | FUN_1002ec520 */

void FUN_1002ec520(void)

{
  undefined *puVar1;
  TaskPriority TVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  undefined1 *puVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar7 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_50 + -extraout_x8;
  if (*(char *)(unaff_x20 + 0xf0) == '\x01') {
    TVar2.unknown = (undefined *)(unaff_x20 + 0x100);
    _swift_beginAccess(TVar2.unknown,auStack_48,0,0);
    if (*(long *)(*(long *)(unaff_x20 + 0x100) + 0x10) != 0) {
      puVar7 = *(undefined **)(unaff_x20 + 0xf8);
      if (puVar7 != (undefined *)0x0) {
        puVar1 = puVar7;
        _swift_retain();
        _swift_task_isCancelled();
        _swift_release();
        TVar2.unknown = puVar7;
        if (((ulong)puVar1 & 1) == 0) {
          return;
        }
      }
      Swift::TaskPriority::get_low(TVar2);
      TVar2 = Swift::TaskPriority::typeMetadataAccessor();
      puVar3 = puVar6;
      (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(puVar6,0,1,TVar2.unknown);
      FUN_1002ee7b4();
      puVar7 = &DAT_100ec8bf0;
      _swift_allocObject(&DAT_100ec8bf0,0x28,7);
      *(long *)(puVar7 + 0x10) = unaff_x20;
      *(undefined1 **)(puVar7 + 0x18) = puVar3;
      *(long *)(puVar7 + 0x20) = unaff_x20;
      _swift_retain_n();
      uVar4 = 0;
      FUN_1002d62fc(0,0,puVar6,&DAT_100c3e950,puVar7);
      uVar5 = *(undefined8 *)(unaff_x20 + 0xf8);
      *(undefined8 *)(unaff_x20 + 0xf8) = uVar4;
      _swift_release(uVar5);
    }
  }
  return;
}



/* Address: 0x1002ec660 | FUN_1002ec660 */

void FUN_1002ec660(void)

{
  long *plVar1;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  plVar1 = (long *)0x3b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002ec6ac;
  FUN_1002ec72c();
  return;
}



/* Address: 0x1002ec6ac | FUN_1002ec6ac */

void FUN_1002ec6ac(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  _swift_task_switch(FUN_1002ec6f4,uVar1,0);
  return;
}



/* Address: 0x1002ec6f4 | FUN_1002ec6f4 */

void FUN_1002ec6f4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0xf8);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0xf8) = 0;
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002ec728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002ec72c | FUN_1002ec72c */

void FUN_1002ec72c(void)

{
  CancellationError CVar1;
  ulong uVar2;
  ContinuousClock CVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x2e8) = unaff_x20;
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x2f0) = CVar1.unknown;
  lVar4 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x2f8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x300) = uVar2;
  CVar3 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x308) = CVar3.unknown;
  lVar4 = *(long *)(CVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x310) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x318) = uVar2;
  lVar4 = 0;
  FUN_1002ee890();
  *(long *)(unaff_x22 + 800) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x328) = uVar2;
  _swift_task_switch(FUN_1002ec7d8);
  return;
}



/* Address: 0x1002ec7d8 | FUN_1002ec7d8 */

void FUN_1002ec7d8(void)

{
  int iVar1;
  bool bVar2;
  Task TVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  lVar9 = *(long *)(unaff_x22 + 0x2e8);
  *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(lVar9 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(lVar9 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x340) = *(undefined8 *)(lVar9 + 0x1a0);
  TVar3.unknown = (undefined *)(lVar9 + 0x100);
  _swift_beginAccess(TVar3.unknown,unaff_x22 + 0x220,0,0);
  if (*(char *)(lVar9 + 0xf0) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x348) = 0;
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    if (!bVar2) {
      lVar9 = *(long *)(unaff_x22 + 0x2e8);
      lVar10 = *(long *)(lVar9 + 0x100);
      if (*(long *)(lVar10 + 0x10) != 0) {
        _swift_beginAccess(lVar9 + 0x100,unaff_x22 + 0x238,0x21,0);
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x350) = uVar12;
        uVar11 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x358) = uVar11;
        _swift_bridgeObjectRetain(uVar11);
        FUN_1002ee68c(0,1);
        _swift_endAccess(unaff_x22 + 0x238);
        _swift_beginAccess(lVar9 + 0x108,unaff_x22 + 0x250,0x21,0);
        uVar8 = uVar11;
        FUN_1002ee560(uVar12,uVar11);
        _swift_endAccess(unaff_x22 + 0x250);
        _swift_bridgeObjectRelease(uVar8);
        uVar8 = *(undefined8 *)(lVar9 + 0xb0);
        lVar10 = *(long *)(lVar9 + 0xb8);
        FUN_100004640(lVar9 + 0x98,uVar8);
        puVar4 = &DAT_100fbd038;
        FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
        _swift_allocObject();
        *(undefined **)(unaff_x22 + 0x360) = puVar4;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x20) = uVar12;
        *(undefined8 *)(puVar4 + 0x28) = uVar11;
        puVar5 = puVar4;
        FUN_1002ee7b4();
        *(undefined **)(unaff_x22 + 0x368) = puVar5;
        piVar7 = *(int **)(lVar10 + 0x10);
        iVar1 = *piVar7;
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        _swift_bridgeObjectRetain(uVar11);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x370) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1002ec9d8;
                    /* WARNING: Could not recover jumptable at 0x0001002ec990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar7))(lVar9,puVar5,puVar4,uVar8,lVar10);
        return;
      }
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x328));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001002ec9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002ec9d8 | FUN_1002ec9d8 */

/* WARNING: Removing unreachable block (ram,0x0001002ecf9c) */

void FUN_1002ec9d8(Task param_1)

{
  undefined8 *puVar1;
  int iVar2;
  bool bVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  long *plVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  _StringGuts _Var13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  void *pvVar17;
  void *pvVar18;
  long lVar19;
  undefined *puVar20;
  long *unaff_x22;
  long lVar21;
  undefined8 uVar22;
  char *pcVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
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
  
  lVar26 = *unaff_x22;
  uVar16 = *(undefined8 *)(lVar26 + 0x360);
  lVar21 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x370));
  _swift_release(uVar16);
  if (*(long *)(param_1.unknown + 0x10) == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar26 + 0x358));
    _swift_bridgeObjectRelease();
    uVar16 = *(undefined8 *)(lVar26 + 0x348);
  }
  else {
    lVar19 = *(long *)(lVar26 + 0x348);
    FUN_100076688(param_1.unknown + 0x20,lVar26 + 0x130);
    _swift_bridgeObjectRelease(param_1.unknown);
    FUN_100076508(lVar26 + 0x130,lVar26 + 0x108);
    (extension_Swift)::Swift::Task::_checkCancellation();
    if (lVar19 == 0) {
      pcVar4 = *(code **)(lVar26 + 0x120);
      uVar11 = *(ulong *)(lVar26 + 0x128);
      FUN_100004640(lVar26 + 0x108,pcVar4);
      (**(code **)(uVar11 + 0x48))();
      if (pcVar4 != (code *)0x0) {
        pcVar5 = pcVar4;
        uVar12 = uVar11;
        (*pcVar4)();
        *(code **)(lVar26 + 0x378) = pcVar5;
        *(ulong *)(lVar26 + 0x380) = uVar12;
        FUN_100004550(pcVar4,uVar11);
        if (uVar12 >> 0x3c < 0xf) {
          FUN_1000da768(lVar26 + 0x1a8);
          uVar16 = *(undefined8 *)(lVar26 + 0x1c0);
          lVar19 = *(long *)(lVar26 + 0x1c8);
          FUN_100004640(lVar26 + 0x1a8,uVar16);
          (**(code **)(lVar19 + 8))(pcVar5,uVar12,uVar16,lVar19);
          *(code **)(lVar26 + 0x388) = pcVar5;
          FUN_100004594(lVar26 + 0x1a8);
          lVar19 = *(long *)(pcVar5 + 0x10);
          puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
          if (lVar19 != 0) {
            puVar1 = (undefined8 *)(lVar26 + 0x2d0);
            *puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
            _swift_bridgeObjectRetain(pcVar5);
            FUN_1002dd1f8(0,lVar19,0);
            puVar20 = (undefined *)*puVar1;
            pcVar4 = pcVar5 + 0x28;
            do {
              uVar16 = *(undefined8 *)(pcVar4 + -8);
              uVar22 = *(undefined8 *)pcVar4;
              *puVar1 = puVar20;
              uVar11 = *(ulong *)(puVar20 + 0x10);
              uVar12 = *(ulong *)(puVar20 + 0x18);
              _swift_bridgeObjectRetain(uVar22);
              if (uVar12 >> 1 <= uVar11) {
                FUN_1002dd1f8(1 < uVar12,uVar11 + 1,1);
                puVar20 = (undefined *)*puVar1;
              }
              pcVar4 = pcVar4 + 0x40;
              *(ulong *)(puVar20 + 0x10) = uVar11 + 1;
              *(undefined8 *)(puVar20 + uVar11 * 0x10 + 0x20) = uVar16;
              *(undefined8 *)(puVar20 + uVar11 * 0x10 + 0x28) = uVar22;
              lVar19 = lVar19 + -1;
            } while (lVar19 != 0);
            _swift_bridgeObjectRelease(pcVar5);
          }
          *(undefined **)(lVar26 + 0x2d8) = puVar20;
          pcVar7 = &DAT_100fbd080;
          FUN_1000037f0(&DAT_100fbd080,&DAT_100c3ecf0);
          pcVar23 = pcVar7;
          FUN_1002dd7b0();
          SVar29.bridgeObject = (void *)0xe100000000000000;
          SVar29.str = (char *)0x20;
          SVar29 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar29);
          pvVar17 = SVar29.bridgeObject;
          _swift_bridgeObjectRelease(puVar20);
          uVar11 = (ulong)SVar29.str & 0xffffffffffff;
          if (((ulong)pvVar17 & 0x2000000000000000) != 0) {
            uVar11 = (ulong)pvVar17 >> 0x38 & 0xf;
          }
          if (uVar11 == 0) {
            _swift_bridgeObjectRelease(pvVar17);
            lVar19 = *(long *)(lVar26 + 0x388);
            FUN_1000d468c(lVar26 + 0x1f8);
            puVar20 = *(undefined **)(lVar26 + 0x210);
            uVar22 = *(undefined8 *)(lVar26 + 0x218);
            _Var13.unknown = puVar20;
            FUN_100004640(lVar26 + 0x1f8);
            *(undefined8 *)(lVar26 + 0x2b0) = 0;
            *(undefined8 *)(lVar26 + 0x2b8) = 0xe000000000000000;
            Swift::_StringGuts::grow(0x29,_Var13);
            _swift_bridgeObjectRelease(*(undefined8 *)(lVar26 + 0x2b8));
            *(undefined8 *)(lVar26 + 0x2a0) = 0xd00000000000001d;
            *(undefined8 *)(lVar26 + 0x2a8) = 0x8000000100da12d0;
            pcVar10 = *(char **)(lVar26 + 0x120);
            pvVar17 = *(void **)(lVar26 + 0x128);
            FUN_100004640(lVar26 + 0x108,pcVar10);
            (**(code **)((long)pvVar17 + 8))();
            SVar30.bridgeObject = pvVar17;
            SVar30.str = pcVar10;
            SVar36.bridgeObject = pcVar23;
            SVar36.str = pcVar7;
            Swift::String::append(SVar30,SVar36);
            _swift_bridgeObjectRelease(pvVar17);
            SVar31.bridgeObject = &SUB_e200000000000000;
            SVar31.str = (char *)0x203a;
            SVar37.bridgeObject = pcVar23;
            SVar37.str = pcVar7;
            Swift::String::append(SVar31,SVar37);
            uVar16 = *(undefined8 *)(lVar19 + 0x10);
            _swift_bridgeObjectRelease(lVar19);
            *(undefined8 *)(lVar26 + 0x2e0) = uVar16;
            SVar29 = Swift::CustomStringConvertible::get_description();
            SVar38.bridgeObject = pcVar23;
            SVar38.str = pcVar7;
            Swift::String::append(SVar29,SVar38);
            _swift_bridgeObjectRelease(SVar29.bridgeObject);
            SVar32.bridgeObject = &DAT_e600000000000000;
            SVar32.str = (char *)0x7364726f7720;
            SVar39.bridgeObject = pcVar23;
            SVar39.str = pcVar7;
            Swift::String::append(SVar32,SVar39);
            uVar16 = *(undefined8 *)(lVar26 + 0x2a8);
            FUN_1000d4dd4(*(undefined8 *)(lVar26 + 0x2a0),uVar16,puVar20,uVar22);
            _swift_bridgeObjectRelease(uVar16);
            FUN_100004594(lVar26 + 0x1f8);
            (extension_Swift)::Swift::Clock::_get_continuous();
            plVar9 = (long *)0x80;
            _swift_task_alloc();
            *(long **)(lVar26 + 0x3a0) = plVar9;
            *plVar9 = lVar21;
            plVar9[1] = (long)FUN_1002eda2c;
            FUN_1002eb1f0(2000000000000000000,0,0,0,1);
            return;
          }
          uVar24 = *(undefined8 *)(lVar26 + 0x368);
          uVar22 = *(undefined8 *)(lVar26 + 0x328);
          uVar16 = *(undefined8 *)(lVar26 + 800);
          lVar19 = *(long *)(lVar26 + 0x2e8);
          FUN_100076688(lVar26 + 0x108,lVar26 + 0x1d0);
          FUN_1002ee16c(uVar22,lVar26 + 0x1d0,SVar29.str,pvVar17);
          FUN_100004640(lVar19 + 0x70,*(undefined8 *)(lVar19 + 0x88));
          puVar20 = &DAT_100fbd090;
          FUN_1000037f0(&DAT_100fbd090,&DAT_100c3e258);
          _swift_initStackObject();
          *(undefined **)(lVar26 + 0x390) = puVar20;
          *(undefined8 *)(puVar20 + 0x18) = 2;
          *(undefined8 *)(puVar20 + 0x10) = 1;
          *(undefined8 *)(puVar20 + 0x38) = uVar16;
          *(undefined ***)(puVar20 + 0x40) = &PTR_PTR_100ec8c30;
          puVar8 = puVar20 + 0x20;
          FUN_10000cbb0(puVar8);
          FUN_1002ee8c8(uVar22,puVar8);
          plVar9 = (long *)0xa0;
          _swift_task_alloc();
          *(long **)(lVar26 + 0x398) = plVar9;
          *plVar9 = lVar21;
          plVar9[1] = (long)FUN_1002ed360;
          FUN_1002e1bac(lVar19,uVar24,puVar20,1);
          return;
        }
      }
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar26 + 0x358));
      param_1.unknown = (undefined *)(lVar26 + 0x108);
    }
    else {
      uVar16 = *(undefined8 *)(lVar26 + 0x300);
      pvVar17 = *(void **)(lVar26 + 0x2f0);
      FUN_100004594(lVar26 + 0x108);
      *(long *)(lVar26 + 0x2c0) = lVar19;
      _swift_errorRetain(lVar19);
      pcVar7 = &DAT_100fbd498;
      FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
      _swift_dynamicCast(uVar16,lVar26 + 0x2c0,pcVar7,pvVar17,0);
      pvVar18 = *(void **)(lVar26 + 0x358);
      if ((int)uVar16 != 0) {
        uVar16 = *(undefined8 *)(lVar26 + 0x300);
        lVar25 = *(long *)(lVar26 + 0x2f8);
        uVar22 = *(undefined8 *)(lVar26 + 0x2f0);
        _swift_errorRelease(lVar19);
        _swift_bridgeObjectRelease(pvVar18);
        (**(code **)(lVar25 + 8))(uVar16,uVar22);
        _swift_errorRelease(*(undefined8 *)(lVar26 + 0x2c0));
        goto LAB_1002ecf18;
      }
      pcVar23 = *(char **)(lVar26 + 0x350);
      lVar14 = *(long *)(lVar26 + 0x2e8);
      _swift_errorRelease(*(undefined8 *)(lVar26 + 0x2c0));
      FUN_1000d468c(lVar26 + 0x158);
      puVar20 = *(undefined **)(lVar26 + 0x170);
      uVar16 = *(undefined8 *)(lVar26 + 0x178);
      _Var13.unknown = puVar20;
      FUN_100004640(lVar26 + 0x158);
      *(undefined8 *)(lVar26 + 0x290) = 0;
      *(undefined8 *)(lVar26 + 0x298) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x24,_Var13);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar26 + 0x298));
      *(undefined8 *)(lVar26 + 0x280) = 0xd00000000000001e;
      *(undefined8 *)(lVar26 + 0x288) = 0x8000000100da12b0;
      SVar27.bridgeObject = pvVar18;
      SVar27.str = pcVar23;
      SVar33.bridgeObject = pvVar17;
      SVar33.str = pcVar7;
      Swift::String::append(SVar27,SVar33);
      SVar28.bridgeObject = &SUB_e200000000000000;
      SVar28.str = (char *)0x203a;
      SVar34.bridgeObject = pvVar17;
      SVar34.str = pcVar7;
      Swift::String::append(SVar28,SVar34);
      pcVar7 = (char *)(lVar26 + 0x268);
      _swift_getErrorValue(lVar19,lVar26 + 0x2c8);
      SVar29 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar35.bridgeObject = pvVar17;
      SVar35.str = pcVar7;
      Swift::String::append(SVar29,SVar35);
      _swift_bridgeObjectRelease(SVar29.bridgeObject);
      uVar22 = *(undefined8 *)(lVar26 + 0x288);
      FUN_1000d4e0c(*(undefined8 *)(lVar26 + 0x280),uVar22,puVar20,uVar16);
      _swift_bridgeObjectRelease(uVar22);
      FUN_100004594(lVar26 + 0x158);
      FUN_1000da768(lVar26 + 0x180);
      uVar16 = *(undefined8 *)(lVar26 + 0x198);
      lVar25 = *(long *)(lVar26 + 0x1a0);
      FUN_100004640(lVar26 + 0x180,uVar16);
      puVar20 = &DAT_100fbd618;
      FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
      _swift_initStackObject();
      *(undefined8 *)(puVar20 + 0x18) = 6;
      *(undefined8 *)(puVar20 + 0x10) = 3;
      *(undefined8 *)(puVar20 + 0x20) = 0x656372756f73;
      puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar20 + 0x28) = &DAT_e600000000000000;
      *(undefined8 *)(puVar20 + 0x30) = 0x6867696c746f7073;
      *(undefined8 *)(puVar20 + 0x38) = 0xed000072636f2e74;
      *(undefined **)(puVar20 + 0x48) = puVar8;
      *(undefined8 *)(puVar20 + 0x50) = 0x44496d657469;
      *(undefined1 **)(puVar20 + 0x58) = &DAT_e600000000000000;
      *(char **)(puVar20 + 0x60) = pcVar23;
      *(void **)(puVar20 + 0x68) = pvVar18;
      *(undefined **)(puVar20 + 0x78) = puVar8;
      *(undefined8 *)(puVar20 + 0x80) = 0x7a69536575657571;
      *(undefined8 *)(puVar20 + 0x88) = 0xe900000000000065;
      uVar22 = *(undefined8 *)(*(long *)(lVar14 + 0x100) + 0x10);
      *(undefined **)(puVar20 + 0xa8) = PTR___type_metadata_for_Swift_Int_100eac6f8;
      *(undefined8 *)(puVar20 + 0x90) = uVar22;
      puVar6 = puVar20;
      FUN_1002e0e24();
      _swift_setDeallocating(puVar20);
      puVar8 = &DAT_100fbd188;
      FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
      _swift_arrayDestroy(puVar20 + 0x20,3,puVar8);
      (**(code **)(lVar25 + 0x28))(lVar19,puVar6,uVar16,lVar25);
      _swift_errorRelease(lVar19);
      _swift_bridgeObjectRelease(puVar6);
      param_1.unknown = (undefined *)(lVar26 + 0x180);
    }
    FUN_100004594();
    uVar16 = 0;
  }
  if ((*(byte *)(*(long *)(lVar26 + 0x2e8) + 0xf0) & 1) != 0) {
    *(undefined8 *)(lVar26 + 0x348) = uVar16;
    bVar3 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
    if (!bVar3) {
      lVar19 = *(long *)(lVar26 + 0x2e8);
      lVar25 = *(long *)(lVar19 + 0x100);
      if (*(long *)(lVar25 + 0x10) != 0) {
        _swift_beginAccess(lVar19 + 0x100,lVar26 + 0x238,0x21,0);
        uVar24 = *(undefined8 *)(lVar25 + 0x20);
        *(undefined8 *)(lVar26 + 0x350) = uVar24;
        uVar22 = *(undefined8 *)(lVar25 + 0x28);
        *(undefined8 *)(lVar26 + 0x358) = uVar22;
        _swift_bridgeObjectRetain(uVar22);
        FUN_1002ee68c(0,1);
        _swift_endAccess(lVar26 + 0x238);
        _swift_beginAccess(lVar19 + 0x108,lVar26 + 0x250,0x21,0);
        uVar16 = uVar22;
        FUN_1002ee560(uVar24,uVar22);
        _swift_endAccess(lVar26 + 0x250);
        _swift_bridgeObjectRelease(uVar16);
        uVar16 = *(undefined8 *)(lVar19 + 0xb0);
        lVar25 = *(long *)(lVar19 + 0xb8);
        FUN_100004640(lVar19 + 0x98,uVar16);
        puVar20 = &DAT_100fbd038;
        FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
        _swift_allocObject();
        *(undefined **)(lVar26 + 0x360) = puVar20;
        *(undefined8 *)(puVar20 + 0x18) = 2;
        *(undefined8 *)(puVar20 + 0x10) = 1;
        *(undefined8 *)(puVar20 + 0x20) = uVar24;
        *(undefined8 *)(puVar20 + 0x28) = uVar22;
        puVar8 = puVar20;
        FUN_1002ee7b4();
        *(undefined **)(lVar26 + 0x368) = puVar8;
        piVar15 = *(int **)(lVar25 + 0x10);
        iVar2 = *piVar15;
        plVar9 = (long *)(ulong)(uint)piVar15[1];
        _swift_bridgeObjectRetain(uVar22);
        _swift_task_alloc();
        *(long **)(lVar26 + 0x370) = plVar9;
        *plVar9 = lVar21;
        plVar9[1] = (long)FUN_1002ec9d8;
                    /* WARNING: Could not recover jumptable at 0x0001002ecf14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar15))(lVar19,puVar8,puVar20,uVar16,lVar25);
        return;
      }
    }
  }
LAB_1002ecf18:
  uVar22 = *(undefined8 *)(lVar26 + 0x318);
  uVar16 = *(undefined8 *)(lVar26 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x328));
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x0001002ecf58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar21 + 8))();
  return;
}



/* Address: 0x1002ed360 | FUN_1002ed360 */

void FUN_1002ed360(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  Task TVar7;
  _StringGuts _Var8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  void *pvVar15;
  void *pvVar16;
  undefined *puVar17;
  long *unaff_x22;
  long lVar18;
  undefined8 uVar19;
  char *pcVar20;
  undefined8 uVar21;
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
  
  lVar11 = *unaff_x22;
  lVar18 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar11 + 0x398));
  if (unaff_x20 == 0) {
    lVar12 = *(long *)(lVar11 + 0x390);
    FUN_1002ee90c(*(undefined8 *)(lVar11 + 0x328));
    _swift_setDeallocating(lVar12);
    FUN_100004594(lVar12 + 0x20);
    lVar12 = *(long *)(lVar11 + 0x388);
    FUN_1000d468c(lVar11 + 0x1f8);
    puVar17 = *(undefined **)(lVar11 + 0x210);
    uVar19 = *(undefined8 *)(lVar11 + 0x218);
    _Var8.unknown = puVar17;
    FUN_100004640(lVar11 + 0x1f8);
    *(undefined8 *)(lVar11 + 0x2b0) = 0;
    *(undefined8 *)(lVar11 + 0x2b8) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x2b8));
    *(undefined8 *)(lVar11 + 0x2a0) = 0xd00000000000001d;
    *(undefined8 *)(lVar11 + 0x2a8) = 0x8000000100da12d0;
    pcVar3 = *(char **)(lVar11 + 0x120);
    pvVar15 = *(void **)(lVar11 + 0x128);
    FUN_100004640(lVar11 + 0x108,pcVar3);
    (**(code **)((long)pvVar15 + 8))();
    SVar26.bridgeObject = pvVar15;
    SVar26.str = pcVar3;
    SVar27.bridgeObject = param_4;
    SVar27.str = param_3;
    Swift::String::append(SVar26,SVar27);
    _swift_bridgeObjectRelease(pvVar15);
    SVar22.bridgeObject = &SUB_e200000000000000;
    SVar22.str = (char *)0x203a;
    SVar28.bridgeObject = param_4;
    SVar28.str = param_3;
    Swift::String::append(SVar22,SVar28);
    uVar14 = *(undefined8 *)(lVar12 + 0x10);
    _swift_bridgeObjectRelease(lVar12);
    *(undefined8 *)(lVar11 + 0x2e0) = uVar14;
    SVar26 = Swift::CustomStringConvertible::get_description();
    SVar29.bridgeObject = param_4;
    SVar29.str = param_3;
    Swift::String::append(SVar26,SVar29);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar23.bridgeObject = &DAT_e600000000000000;
    SVar23.str = (char *)0x7364726f7720;
    SVar30.bridgeObject = param_4;
    SVar30.str = param_3;
    Swift::String::append(SVar23,SVar30);
    uVar14 = *(undefined8 *)(lVar11 + 0x2a8);
    FUN_1000d4dd4(*(undefined8 *)(lVar11 + 0x2a0),uVar14,puVar17,uVar19);
    _swift_bridgeObjectRelease(uVar14);
    FUN_100004594(lVar11 + 0x1f8);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar4 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(lVar11 + 0x3a0) = plVar4;
    *plVar4 = lVar18;
    plVar4[1] = (long)FUN_1002eda2c;
    FUN_1002eb1f0(2000000000000000000,0,0,0,1);
    return;
  }
  lVar12 = *(long *)(lVar11 + 0x390);
  uVar14 = *(undefined8 *)(lVar11 + 0x380);
  uVar19 = *(undefined8 *)(lVar11 + 0x378);
  uVar21 = *(undefined8 *)(lVar11 + 0x328);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x388));
  FUN_1002ee90c(uVar21);
  FUN_10003bf18(uVar19,uVar14);
  _swift_setDeallocating(lVar12);
  FUN_100004594(lVar12 + 0x20);
  uVar13 = *(ulong *)(lVar11 + 0x300);
  pvVar15 = *(void **)(lVar11 + 0x2f0);
  FUN_100004594(lVar11 + 0x108);
  *(long *)(lVar11 + 0x2c0) = unaff_x20;
  _swift_errorRetain();
  pcVar3 = &DAT_100fbd498;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  _swift_dynamicCast(uVar13,lVar11 + 0x2c0,pcVar3,pvVar15,0);
  pvVar16 = *(void **)(lVar11 + 0x358);
  if ((uVar13 & 1) == 0) {
    pcVar20 = *(char **)(lVar11 + 0x350);
    lVar9 = *(long *)(lVar11 + 0x2e8);
    _swift_errorRelease(*(undefined8 *)(lVar11 + 0x2c0));
    FUN_1000d468c(lVar11 + 0x158);
    puVar17 = *(undefined **)(lVar11 + 0x170);
    uVar14 = *(undefined8 *)(lVar11 + 0x178);
    _Var8.unknown = puVar17;
    FUN_100004640(lVar11 + 0x158);
    *(undefined8 *)(lVar11 + 0x290) = 0;
    *(undefined8 *)(lVar11 + 0x298) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x24,_Var8);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 0x298));
    *(undefined8 *)(lVar11 + 0x280) = 0xd00000000000001e;
    *(undefined8 *)(lVar11 + 0x288) = 0x8000000100da12b0;
    SVar24.bridgeObject = pvVar16;
    SVar24.str = pcVar20;
    SVar31.bridgeObject = pvVar15;
    SVar31.str = pcVar3;
    Swift::String::append(SVar24,SVar31);
    SVar25.bridgeObject = &SUB_e200000000000000;
    SVar25.str = (char *)0x203a;
    SVar32.bridgeObject = pvVar15;
    SVar32.str = pcVar3;
    Swift::String::append(SVar25,SVar32);
    pcVar3 = (char *)(lVar11 + 0x268);
    _swift_getErrorValue();
    SVar26 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar33.bridgeObject = pvVar15;
    SVar33.str = pcVar3;
    Swift::String::append(SVar26,SVar33);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    uVar19 = *(undefined8 *)(lVar11 + 0x288);
    FUN_1000d4e0c(*(undefined8 *)(lVar11 + 0x280),uVar19,puVar17,uVar14);
    _swift_bridgeObjectRelease(uVar19);
    FUN_100004594(lVar11 + 0x158);
    FUN_1000da768(lVar11 + 0x180);
    lVar12 = *(long *)(lVar11 + 0x1a0);
    FUN_100004640(lVar11 + 0x180,*(undefined8 *)(lVar11 + 0x198));
    puVar17 = &DAT_100fbd618;
    FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
    _swift_initStackObject();
    *(undefined8 *)(puVar17 + 0x18) = 6;
    *(undefined8 *)(puVar17 + 0x10) = 3;
    *(undefined8 *)(puVar17 + 0x20) = 0x656372756f73;
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar17 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar17 + 0x30) = 0x6867696c746f7073;
    *(undefined8 *)(puVar17 + 0x38) = 0xed000072636f2e74;
    *(undefined **)(puVar17 + 0x48) = puVar6;
    *(undefined8 *)(puVar17 + 0x50) = 0x44496d657469;
    *(undefined1 **)(puVar17 + 0x58) = &DAT_e600000000000000;
    *(char **)(puVar17 + 0x60) = pcVar20;
    *(void **)(puVar17 + 0x68) = pvVar16;
    *(undefined **)(puVar17 + 0x78) = puVar6;
    *(undefined8 *)(puVar17 + 0x80) = 0x7a69536575657571;
    *(undefined8 *)(puVar17 + 0x88) = 0xe900000000000065;
    uVar14 = *(undefined8 *)(*(long *)(lVar9 + 0x100) + 0x10);
    *(undefined **)(puVar17 + 0xa8) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined8 *)(puVar17 + 0x90) = uVar14;
    puVar5 = puVar17;
    FUN_1002e0e24();
    _swift_setDeallocating(puVar17);
    puVar6 = &DAT_100fbd188;
    FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
    _swift_arrayDestroy(puVar17 + 0x20,3,puVar6);
    (**(code **)(lVar12 + 0x28))();
    _swift_errorRelease();
    _swift_bridgeObjectRelease(puVar5);
    TVar7.unknown = (undefined *)(lVar11 + 0x180);
    FUN_100004594();
    if ((*(byte *)(*(long *)(lVar11 + 0x2e8) + 0xf0) & 1) != 0) {
      *(undefined8 *)(lVar11 + 0x348) = 0;
      bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
      if (!bVar2) {
        lVar9 = *(long *)(lVar11 + 0x2e8);
        lVar12 = *(long *)(lVar9 + 0x100);
        if (*(long *)(lVar12 + 0x10) != 0) {
          _swift_beginAccess(lVar9 + 0x100,lVar11 + 0x238,0x21,0);
          uVar21 = *(undefined8 *)(lVar12 + 0x20);
          *(undefined8 *)(lVar11 + 0x350) = uVar21;
          uVar19 = *(undefined8 *)(lVar12 + 0x28);
          *(undefined8 *)(lVar11 + 0x358) = uVar19;
          _swift_bridgeObjectRetain(uVar19);
          FUN_1002ee68c(0,1);
          _swift_endAccess(lVar11 + 0x238);
          _swift_beginAccess(lVar9 + 0x108,lVar11 + 0x250,0x21,0);
          uVar14 = uVar19;
          FUN_1002ee560(uVar21,uVar19);
          _swift_endAccess(lVar11 + 0x250);
          _swift_bridgeObjectRelease(uVar14);
          uVar14 = *(undefined8 *)(lVar9 + 0xb0);
          lVar12 = *(long *)(lVar9 + 0xb8);
          FUN_100004640(lVar9 + 0x98,uVar14);
          puVar17 = &DAT_100fbd038;
          FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
          _swift_allocObject();
          *(undefined **)(lVar11 + 0x360) = puVar17;
          *(undefined8 *)(puVar17 + 0x18) = 2;
          *(undefined8 *)(puVar17 + 0x10) = 1;
          *(undefined8 *)(puVar17 + 0x20) = uVar21;
          *(undefined8 *)(puVar17 + 0x28) = uVar19;
          puVar6 = puVar17;
          FUN_1002ee7b4();
          *(undefined **)(lVar11 + 0x368) = puVar6;
          piVar10 = *(int **)(lVar12 + 0x10);
          iVar1 = *piVar10;
          plVar4 = (long *)(ulong)(uint)piVar10[1];
          _swift_bridgeObjectRetain(uVar19);
          _swift_task_alloc();
          *(long **)(lVar11 + 0x370) = plVar4;
          *plVar4 = lVar18;
          plVar4[1] = (long)FUN_1002ec9d8;
                    /* WARNING: Could not recover jumptable at 0x0001002ed9e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar10))(lVar9,puVar6,puVar17,uVar14,lVar12);
          return;
        }
      }
    }
  }
  else {
    uVar14 = *(undefined8 *)(lVar11 + 0x300);
    lVar12 = *(long *)(lVar11 + 0x2f8);
    uVar19 = *(undefined8 *)(lVar11 + 0x2f0);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(pvVar16);
    (**(code **)(lVar12 + 8))(uVar14,uVar19);
    _swift_errorRelease(*(undefined8 *)(lVar11 + 0x2c0));
  }
  uVar19 = *(undefined8 *)(lVar11 + 0x318);
  uVar14 = *(undefined8 *)(lVar11 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(lVar11 + 0x328));
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001002eda28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar18 + 8))();
  return;
}



/* Address: 0x1002eda2c | FUN_1002eda2c */

void FUN_1002eda2c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x3a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x3a0));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0x358);
    uVar2 = *(undefined8 *)(lVar3 + 0x2e8);
    (**(code **)(*(long *)(lVar3 + 0x310) + 8))
              (*(undefined8 *)(lVar3 + 0x318),*(undefined8 *)(lVar3 + 0x308));
    _swift_bridgeObjectRelease(uVar4);
    pcVar1 = FUN_1002edab0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x2e8);
    pcVar1 = FUN_1002edc9c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1002edab0 | FUN_1002edab0 */

void FUN_1002edab0(void)

{
  int iVar1;
  bool bVar2;
  Task TVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x378),*(undefined8 *)(unaff_x22 + 0x380));
  TVar3.unknown = (undefined *)(unaff_x22 + 0x108);
  FUN_100004594();
  if (*(char *)(*(long *)(unaff_x22 + 0x2e8) + 0xf0) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x348) = *(undefined8 *)(unaff_x22 + 0x3a8);
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    if (!bVar2) {
      lVar8 = *(long *)(unaff_x22 + 0x2e8);
      lVar10 = *(long *)(lVar8 + 0x100);
      if (*(long *)(lVar10 + 0x10) != 0) {
        _swift_beginAccess(lVar8 + 0x100,unaff_x22 + 0x238,0x21,0);
        uVar12 = *(undefined8 *)(lVar10 + 0x20);
        *(undefined8 *)(unaff_x22 + 0x350) = uVar12;
        uVar11 = *(undefined8 *)(lVar10 + 0x28);
        *(undefined8 *)(unaff_x22 + 0x358) = uVar11;
        _swift_bridgeObjectRetain(uVar11);
        FUN_1002ee68c(0,1);
        _swift_endAccess(unaff_x22 + 0x238);
        _swift_beginAccess(lVar8 + 0x108,unaff_x22 + 0x250,0x21,0);
        uVar9 = uVar11;
        FUN_1002ee560(uVar12,uVar11);
        _swift_endAccess(unaff_x22 + 0x250);
        _swift_bridgeObjectRelease(uVar9);
        uVar9 = *(undefined8 *)(lVar8 + 0xb0);
        lVar10 = *(long *)(lVar8 + 0xb8);
        FUN_100004640(lVar8 + 0x98,uVar9);
        puVar4 = &DAT_100fbd038;
        FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
        _swift_allocObject();
        *(undefined **)(unaff_x22 + 0x360) = puVar4;
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x20) = uVar12;
        *(undefined8 *)(puVar4 + 0x28) = uVar11;
        puVar5 = puVar4;
        FUN_1002ee7b4();
        *(undefined **)(unaff_x22 + 0x368) = puVar5;
        piVar7 = *(int **)(lVar10 + 0x10);
        iVar1 = *piVar7;
        plVar6 = (long *)(ulong)(uint)piVar7[1];
        _swift_bridgeObjectRetain(uVar11);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x370) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1002ec9d8;
                    /* WARNING: Could not recover jumptable at 0x0001002edc54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar7))(lVar8,puVar5,puVar4,uVar9,lVar10);
        return;
      }
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x328));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001002edc98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002edc9c | FUN_1002edc9c */

void FUN_1002edc9c(void)

{
  int iVar1;
  bool bVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Task TVar7;
  long *plVar8;
  _StringGuts _Var9;
  long lVar10;
  int *piVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  void *pvVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  char *pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x318);
  lVar15 = *(long *)(unaff_x22 + 0x310);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x308);
  FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x378),*(undefined8 *)(unaff_x22 + 0x380));
  (**(code **)(lVar15 + 8))(uVar13,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3a8);
  uVar14 = *(ulong *)(unaff_x22 + 0x300);
  pvVar16 = *(void **)(unaff_x22 + 0x2f0);
  FUN_100004594(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x2c0) = uVar12;
  _swift_errorRetain(uVar12);
  pcVar3 = &DAT_100fbd498;
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  _swift_dynamicCast(uVar14,unaff_x22 + 0x2c0,pcVar3,pvVar16,0);
  if ((uVar14 & 1) == 0) {
    uVar17 = *(undefined8 *)(unaff_x22 + 0x358);
    pcVar19 = ((String *)(unaff_x22 + 0x350))->str;
    SVar20 = *(String *)(unaff_x22 + 0x350);
    lVar10 = *(long *)(unaff_x22 + 0x2e8);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
    FUN_1000d468c(unaff_x22 + 0x158);
    puVar4 = *(undefined **)(unaff_x22 + 0x170);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x178);
    _Var9.unknown = puVar4;
    FUN_100004640(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x290) = 0;
    *(undefined8 *)(unaff_x22 + 0x298) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x24,_Var9);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x298));
    *(undefined8 *)(unaff_x22 + 0x280) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100da12b0;
    SVar21.bridgeObject = pvVar16;
    SVar21.str = pcVar3;
    Swift::String::append(SVar20,SVar21);
    SVar20.bridgeObject = &SUB_e200000000000000;
    SVar20.str = (char *)0x203a;
    SVar22.bridgeObject = pvVar16;
    SVar22.str = pcVar3;
    Swift::String::append(SVar20,SVar22);
    pcVar3 = (char *)(unaff_x22 + 0x268);
    _swift_getErrorValue(uVar12,unaff_x22 + 0x2c8);
    SVar20 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar23.bridgeObject = pvVar16;
    SVar23.str = pcVar3;
    Swift::String::append(SVar20,SVar23);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x288);
    FUN_1000d4e0c(*(undefined8 *)(unaff_x22 + 0x280),uVar18,puVar4,uVar13);
    _swift_bridgeObjectRelease(uVar18);
    FUN_100004594(unaff_x22 + 0x158);
    FUN_1000da768(unaff_x22 + 0x180);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x198);
    lVar15 = *(long *)(unaff_x22 + 0x1a0);
    FUN_100004640(unaff_x22 + 0x180,uVar13);
    puVar4 = &DAT_100fbd618;
    FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(undefined8 *)(puVar4 + 0x20) = 0x656372756f73;
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar4 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar4 + 0x30) = 0x6867696c746f7073;
    *(undefined8 *)(puVar4 + 0x38) = 0xed000072636f2e74;
    *(undefined **)(puVar4 + 0x48) = puVar6;
    *(undefined8 *)(puVar4 + 0x50) = 0x44496d657469;
    *(undefined1 **)(puVar4 + 0x58) = &DAT_e600000000000000;
    *(char **)(puVar4 + 0x60) = pcVar19;
    *(undefined8 *)(puVar4 + 0x68) = uVar17;
    *(undefined **)(puVar4 + 0x78) = puVar6;
    *(undefined8 *)(puVar4 + 0x80) = 0x7a69536575657571;
    *(undefined8 *)(puVar4 + 0x88) = 0xe900000000000065;
    uVar17 = *(undefined8 *)(*(long *)(lVar10 + 0x100) + 0x10);
    *(undefined **)(puVar4 + 0xa8) = PTR___type_metadata_for_Swift_Int_100eac6f8;
    *(undefined8 *)(puVar4 + 0x90) = uVar17;
    puVar5 = puVar4;
    FUN_1002e0e24();
    _swift_setDeallocating(puVar4);
    puVar6 = &DAT_100fbd188;
    FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
    _swift_arrayDestroy(puVar4 + 0x20,3,puVar6);
    (**(code **)(lVar15 + 0x28))(uVar12,puVar5,uVar13,lVar15);
    _swift_errorRelease(uVar12);
    _swift_bridgeObjectRelease(puVar5);
    TVar7.unknown = (undefined *)(unaff_x22 + 0x180);
    FUN_100004594();
    if ((*(byte *)(*(long *)(unaff_x22 + 0x2e8) + 0xf0) & 1) != 0) {
      *(undefined8 *)(unaff_x22 + 0x348) = 0;
      bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar7);
      if (!bVar2) {
        lVar15 = *(long *)(unaff_x22 + 0x2e8);
        lVar10 = *(long *)(lVar15 + 0x100);
        if (*(long *)(lVar10 + 0x10) != 0) {
          _swift_beginAccess(lVar15 + 0x100,unaff_x22 + 0x238,0x21,0);
          uVar17 = *(undefined8 *)(lVar10 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x350) = uVar17;
          uVar13 = *(undefined8 *)(lVar10 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x358) = uVar13;
          _swift_bridgeObjectRetain(uVar13);
          FUN_1002ee68c(0,1);
          _swift_endAccess(unaff_x22 + 0x238);
          _swift_beginAccess(lVar15 + 0x108,unaff_x22 + 0x250,0x21,0);
          uVar12 = uVar13;
          FUN_1002ee560(uVar17,uVar13);
          _swift_endAccess(unaff_x22 + 0x250);
          _swift_bridgeObjectRelease(uVar12);
          uVar12 = *(undefined8 *)(lVar15 + 0xb0);
          lVar10 = *(long *)(lVar15 + 0xb8);
          FUN_100004640(lVar15 + 0x98,uVar12);
          puVar4 = &DAT_100fbd038;
          FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
          _swift_allocObject();
          *(undefined **)(unaff_x22 + 0x360) = puVar4;
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          *(undefined8 *)(puVar4 + 0x20) = uVar17;
          *(undefined8 *)(puVar4 + 0x28) = uVar13;
          puVar6 = puVar4;
          FUN_1002ee7b4();
          *(undefined **)(unaff_x22 + 0x368) = puVar6;
          piVar11 = *(int **)(lVar10 + 0x10);
          iVar1 = *piVar11;
          plVar8 = (long *)(ulong)(uint)piVar11[1];
          _swift_bridgeObjectRetain(uVar13);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x370) = plVar8;
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_1002ec9d8;
                    /* WARNING: Could not recover jumptable at 0x0001002ee124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar11))(lVar15,puVar6,puVar4,uVar12,lVar10);
          return;
        }
      }
    }
  }
  else {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x300);
    lVar15 = *(long *)(unaff_x22 + 0x2f8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x2f0);
    _swift_errorRelease(uVar12);
    _swift_bridgeObjectRelease(uVar13);
    (**(code **)(lVar15 + 8))(uVar17,uVar18);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x2c0));
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x300);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x328));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x0001002ee168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002ee16c | FUN_1002ee16c */

void FUN_1002ee16c(undefined8 *param_1,long param_2,code *param_3,char *param_4,void *param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  code *pcVar10;
  char *pcVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  lVar3 = 0;
  pcVar9 = param_4;
  FUN_1002ee890();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x30));
  *puVar1 = 0;
  puVar1[1] = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 8))();
  *param_1 = uVar4;
  param_1[1] = lVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x10))();
  param_1[2] = uVar4;
  param_1[3] = lVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x18))((long)param_1 + (long)*(int *)(lVar3 + 0x18),uVar4,lVar7);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x20))();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x1c));
  *puVar1 = uVar4;
  puVar1[1] = lVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x40))();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x20));
  *puVar1 = uVar4;
  puVar1[1] = lVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x28))();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x24));
  *puVar1 = uVar4;
  puVar1[1] = lVar7;
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar4);
  (**(code **)(lVar7 + 0x30))();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x28));
  *puVar1 = uVar4;
  puVar1[1] = lVar7;
  pcVar5 = *(code **)(param_2 + 0x18);
  pcVar8 = *(char **)(param_2 + 0x20);
  FUN_100004640(param_2,pcVar5);
  (**(code **)(pcVar8 + 0x38))();
  if (pcVar5 != (code *)0x0) {
    pcVar10 = pcVar5;
    pcVar11 = pcVar8;
    (*pcVar5)();
    FUN_100004550(pcVar5,pcVar8);
    if (pcVar11 != (char *)0x0) goto LAB_1002ee348;
  }
  pcVar10 = (code *)0x0;
  pcVar11 = (char *)0xe000000000000000;
LAB_1002ee348:
  uVar2 = (ulong)pcVar10 & 0xffffffffffff;
  if (((ulong)pcVar11 & 0x2000000000000000) != 0) {
    uVar2 = (ulong)pcVar11 >> 0x38 & 0xf;
  }
  if (uVar2 == 0) {
    _swift_bridgeObjectRelease(pcVar11);
  }
  else {
    _swift_bridgeObjectRetain(pcVar11);
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0xa;
    SVar14.bridgeObject = param_5;
    SVar14.str = pcVar9;
    Swift::String::append(SVar12,SVar14);
    _swift_bridgeObjectRelease(pcVar11);
    _swift_bridgeObjectRetain(pcVar11);
    SVar13.bridgeObject = param_4;
    SVar13.str = (char *)param_3;
    SVar15.bridgeObject = param_5;
    SVar15.str = pcVar9;
    Swift::String::append(SVar13,SVar15);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(pcVar11);
    param_4 = pcVar11;
    param_3 = pcVar10;
  }
  puVar6 = &DAT_100ec8c18;
  _swift_allocObject(&DAT_100ec8c18,0x20,7);
  *(code **)(puVar6 + 0x10) = param_3;
  *(char **)(puVar6 + 0x18) = param_4;
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar3 + 0x2c));
  *param_1 = FUN_1000ce47c;
  param_1[1] = puVar6;
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1002ee410 | FUN_1002ee410 */

void FUN_1002ee410(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  FUN_1002ef580(unaff_x20 + *(int *)(param_2 + 0x18),param_1);
  return;
}



/* Address: 0x1002ee420 | FUN_1002ee420 */

undefined1  [16] FUN_1002ee420(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x1c));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee454 | FUN_1002ee454 */

undefined1  [16] FUN_1002ee454(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x24));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee488 | FUN_1002ee488 */

undefined1  [16] FUN_1002ee488(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x28));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee4bc | FUN_1002ee4bc */

undefined1  [16] FUN_1002ee4bc(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x2c));
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee4f4 | FUN_1002ee4f4 */

undefined1  [16] FUN_1002ee4f4(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x20));
  auVar2 = *pauVar1;
  _swift_bridgeObjectRetain(*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee528 | FUN_1002ee528 */

undefined1  [16] FUN_1002ee528(long param_1)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(unaff_x20 + *(int *)(param_1 + 0x30));
  auVar2 = *pauVar1;
  FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(*pauVar1 + 8));
  return auVar2;
}



/* Address: 0x1002ee560 | FUN_1002ee560 */

undefined1  [16] FUN_1002ee560(char *param_1,undefined *param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  bool bVar4;
  Hasher into;
  ulong uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auVar10 [16];
  String SVar11;
  ulong local_98 [9];
  
  uVar9 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(uVar9 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar11.bridgeObject = param_2;
  SVar11.str = param_1;
  Swift::String::hash(into,SVar11);
  uVar5 = Swift::Hasher::_finalize(into);
  uVar6 = -1L << ((ulong)*(byte *)(uVar9 + 0x20) & 0x3f);
  uVar5 = uVar5 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(uVar9 + 0x30) + uVar5 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar4)) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        local_98[0] = *unaff_x20;
        if ((uVar6 & 1) == 0) {
          FUN_1002dc198();
        }
        uVar6 = local_98[0];
        puVar1 = (undefined8 *)(*(long *)(local_98[0] + 0x30) + uVar5 * 0x10);
        uVar7 = *puVar1;
        uVar8 = puVar1[1];
        FUN_100007cc4(uVar5);
        *unaff_x20 = uVar6;
        goto LAB_1002ee658;
      }
      uVar5 = uVar5 + 1 & ~uVar6;
    } while ((*(ulong *)(uVar9 + 0x38 + (uVar5 >> 6) * 8) >> (uVar5 & 0x3f) & 1) != 0);
  }
  uVar7 = 0;
  uVar8 = 0;
LAB_1002ee658:
  auVar10._8_8_ = uVar8;
  auVar10._0_8_ = uVar7;
  return auVar10;
}



/* Address: 0x1002ee68c | FUN_1002ee68c */

void FUN_1002ee68c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ee738);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ee73c);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ee740);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1002daf0c();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_10012ad88(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ee748);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1002ee744);
  (*pcVar2)();
}



/* Address: 0x1002ee748 | FUN_1002ee748 */

void FUN_1002ee748(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 auStack_50 [8];
  undefined8 local_48;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    puVar4 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar4[-1];
      uVar2 = *puVar4;
      _swift_bridgeObjectRetain(uVar2);
      FUN_1002db610(auStack_50,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_48);
      puVar4 = puVar4 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x1002ee7b4 | FUN_1002ee7b4 */

void FUN_1002ee7b4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbd610 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002f2f88(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3eac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3eac0,uVar1);
  DAT_100fbd610 = pTVar2;
  return;
}



/* Address: 0x1002ee7f8 | FUN_1002ee7f8 */

void FUN_1002ee7f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ee824 | FUN_1002ee824 */

void FUN_1002ee824(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1002ec660(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x1002ee890 | FUN_1002ee890 */

void FUN_1002ee890(undefined8 param_1)

{
  if (DAT_100fbd6b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cab7dc);
  return;
}



/* Address: 0x1002ee8c8 | FUN_1002ee8c8 */

undefined8 FUN_1002ee8c8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002ee890();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002ee90c | FUN_1002ee90c */

undefined8 FUN_1002ee90c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002ee890();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1002ee948 | FUN_1002ee948 */

void FUN_1002ee948(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002ee96c | FUN_1002ee96c */

long * FUN_1002ee96c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  uint uVar9;
  Date DVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  
  uVar9 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar9 >> 0x11 & 1) == 0) {
    lVar17 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar17;
    lVar12 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar12;
    lVar14 = (long)*(int *)(param_3 + 0x18);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    lVar15 = *(long *)(DVar10.unknown + -8);
    pcVar16 = *(code **)(lVar15 + 0x30);
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(lVar12);
    lVar17 = (long)param_2 + lVar14;
    (*pcVar16)(lVar17,1,DVar10.unknown);
    if ((int)lVar17 == 0) {
      (**(code **)(lVar15 + 0x10))((long)param_1 + lVar14,(long)param_2 + lVar14,DVar10.unknown);
      (**(code **)(lVar15 + 0x38))((long)param_1 + lVar14,0,1,DVar10.unknown);
    }
    else {
      puVar11 = &DAT_100fbcfb8;
      FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(puVar11 + -8) + 0x40));
    }
    iVar8 = *(int *)(param_3 + 0x20);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar8 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
    plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
    lVar17 = *plVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    if (lVar17 == 0) {
      lVar17 = *plVar4;
      plVar3[1] = plVar4[1];
      *plVar3 = lVar17;
    }
    else {
      lVar12 = plVar4[1];
      *plVar3 = lVar17;
      plVar3[1] = lVar12;
      _swift_retain();
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
    param_2 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
    if (*param_2 == 0) {
      lVar17 = *param_2;
      plVar3[1] = param_2[1];
      *plVar3 = lVar17;
    }
    else {
      lVar17 = param_2[1];
      *plVar3 = *param_2;
      plVar3[1] = lVar17;
      _swift_retain();
    }
  }
  else {
    lVar17 = *param_2;
    *param_1 = lVar17;
    uVar13 = (ulong)uVar9 & 0xff;
    param_1 = (long *)(lVar17 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002eeb40 | FUN_1002eeb40 */

void FUN_1002eeb40(long param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar2 = *(int *)(param_2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar2;
  (**(code **)(lVar5 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar2,DVar3.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x2c));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
  }
  plVar1 = (long *)(param_1 + *(int *)(param_2 + 0x30));
  if (*plVar1 != 0) {
    _swift_release(plVar1[1]);
    return;
  }
  return;
}



/* Address: 0x1002eec3c | FUN_1002eec3c */

undefined8 * FUN_1002eec3c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  Date DVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar6 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar6;
  lVar11 = (long)*(int *)(param_3 + 0x18);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar9.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  lVar14 = (long)param_2 + lVar11;
  (*pcVar13)(lVar14,1,DVar9.unknown);
  if ((int)lVar14 == 0) {
    (**(code **)(lVar12 + 0x10))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar9.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar9.unknown);
  }
  else {
    puVar10 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
  }
  iVar8 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar8 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar7 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar14 = *plVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  if (lVar14 == 0) {
    lVar14 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar14;
  }
  else {
    lVar11 = plVar4[1];
    *plVar3 = lVar14;
    plVar3[1] = lVar11;
    _swift_retain();
  }
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  if (*plVar4 == 0) {
    lVar14 = *plVar4;
    plVar3[1] = plVar4[1];
    *plVar3 = lVar14;
  }
  else {
    lVar14 = plVar4[1];
    *plVar3 = *plVar4;
    plVar3[1] = lVar14;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1002eede4 | FUN_1002eede4 */

undefined8 * FUN_1002eede4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  *param_1 = *param_2;
  uVar9 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  param_1[2] = param_2[2];
  uVar9 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  lVar10 = (long)*(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar8 = (long)param_1 + lVar10;
  (*pcVar12)(lVar8,1,DVar5.unknown);
  lVar7 = (long)param_2 + lVar10;
  (*pcVar12)(lVar7,1,DVar5.unknown);
  if ((int)lVar8 == 0) {
    if ((int)lVar7 != 0) {
      (**(code **)(lVar11 + 8))((long)param_1 + lVar10,DVar5.unknown);
      goto LAB_1002eeed0;
    }
    (**(code **)(lVar11 + 0x18))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
  }
  else if ((int)lVar7 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
LAB_1002eeed0:
    puVar6 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar9 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar8 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      goto LAB_1002ef004;
    }
  }
  else {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      lVar10 = plVar3[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      _swift_release(lVar10);
      goto LAB_1002ef004;
    }
    _swift_release(plVar3[1]);
  }
  lVar8 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar8;
LAB_1002ef004:
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar8 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar8 != 0) {
      lVar7 = plVar4[1];
      lVar10 = plVar3[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar7;
      _swift_retain();
      _swift_release(lVar10);
      return param_1;
    }
    _swift_release(plVar3[1]);
  }
  lVar8 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar8;
  return param_1;
}



/* Address: 0x1002ef094 | FUN_1002ef094 */

undefined8 * FUN_1002ef094(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  lVar7 = (long)*(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar8 + 0x20))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar4.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x20);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  iVar1 = *(int *)(param_3 + 0x28);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  iVar1 = *(int *)(param_3 + 0x30);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar9 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar9;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar9 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar9;
  return param_1;
}



/* Address: 0x1002ef194 | FUN_1002ef194 */

undefined8 * FUN_1002ef194(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  Date DVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  
  uVar5 = param_2[1];
  uVar6 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  uVar5 = param_2[3];
  uVar6 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  lVar11 = (long)*(int *)(param_3 + 0x18);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar7.unknown + -8);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar10 = (long)param_1 + lVar11;
  (*pcVar13)(lVar10,1,DVar7.unknown);
  lVar9 = (long)param_2 + lVar11;
  (*pcVar13)(lVar9,1,DVar7.unknown);
  if ((int)lVar10 == 0) {
    if ((int)lVar9 != 0) {
      (**(code **)(lVar12 + 8))((long)param_1 + lVar11,DVar7.unknown);
      goto LAB_1002ef260;
    }
    (**(code **)(lVar12 + 0x28))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
  }
  else if ((int)lVar9 == 0) {
    (**(code **)(lVar12 + 0x20))((long)param_1 + lVar11,(long)param_2 + lVar11,DVar7.unknown);
    (**(code **)(lVar12 + 0x38))((long)param_1 + lVar11,0,1,DVar7.unknown);
  }
  else {
LAB_1002ef260:
    puVar8 = &DAT_100fbcfb8;
    FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
    _memcpy((void *)((long)param_1 + lVar11),(void *)((long)param_2 + lVar11),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar5 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar5 = puVar2[1];
  uVar6 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar6);
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  lVar10 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar10 != 0) {
      lVar9 = plVar4[1];
      *plVar3 = lVar10;
      plVar3[1] = lVar9;
      goto LAB_1002ef348;
    }
  }
  else {
    if (lVar10 != 0) {
      lVar11 = plVar4[1];
      lVar9 = plVar3[1];
      *plVar3 = lVar10;
      plVar3[1] = lVar11;
      _swift_release(lVar9);
      goto LAB_1002ef348;
    }
    _swift_release(plVar3[1]);
  }
  lVar10 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar10;
LAB_1002ef348:
  plVar3 = (long *)((long)param_1 + (long)*(int *)(param_3 + 0x30));
  plVar4 = (long *)((long)param_2 + (long)*(int *)(param_3 + 0x30));
  lVar10 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar10 != 0) {
      lVar9 = plVar4[1];
      *plVar3 = lVar10;
      plVar3[1] = lVar9;
      return param_1;
    }
  }
  else {
    if (lVar10 != 0) {
      lVar11 = plVar4[1];
      lVar9 = plVar3[1];
      *plVar3 = lVar10;
      plVar3[1] = lVar11;
      _swift_release(lVar9);
      return param_1;
    }
    _swift_release(plVar3[1]);
  }
  lVar10 = *plVar4;
  plVar3[1] = plVar4[1];
  *plVar3 = lVar10;
  return param_1;
}



/* Address: 0x1002ef3cc | FUN_1002ef3cc */

void FUN_1002ef3cc(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002ef3d8 | FUN_1002ef3d8 */

ulong FUN_1002ef3d8(long param_1,undefined8 param_2,long param_3)

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
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001002ef460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(uVar2,param_2,puVar1);
  return uVar2;
}



/* Address: 0x1002ef464 | FUN_1002ef464 */

void FUN_1002ef464(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002ef470 | FUN_1002ef470 */

void FUN_1002ef470(long param_1,undefined8 param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
                    /* WARNING: Could not recover jumptable at 0x0001002ef4ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1002ef4f0 | FUN_1002ef4f0 */

void FUN_1002ef4f0(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_78 = &DAT_100c3e980;
  puStack_70 = &DAT_100c3e998;
  lVar1 = 0x13f;
  FUN_1002e3688();
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = &DAT_100c3e998;
    local_58 = &DAT_100c3e998;
    puStack_50 = &DAT_100c3e980;
    local_48 = &DAT_100c3e980;
    puStack_40 = &DAT_100c3e998;
    local_38 = &DAT_100c3e998;
    _swift_initStructMetadata(param_1,0x100,9,&local_78,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1002ef580 | FUN_1002ef580 */

undefined8 FUN_1002ef580(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002ef5d0 | FUN_1002ef5d0 */

void FUN_1002ef5d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  _swift_task_switch(FUN_1002ef638);
  return;
}



/* Address: 0x1002ef638 | FUN_1002ef638 */

void FUN_1002ef638(void)

{
  long lVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *(long *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar6 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(TVar2.unknown + -8) + 0x38);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x10);
  (*pcVar8)(uVar5,1,1,TVar2.unknown);
  puVar3 = &DAT_100ec8d30;
  _swift_allocObject(&DAT_100ec8d30,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  *(undefined8 *)(puVar3 + 0x30) = uVar10;
  *(undefined8 *)(puVar3 + 0x28) = uVar9;
  _swift_retain_n(uVar6,2);
  _swift_retain(uVar7);
  uVar6 = 0;
  FUN_1002e4cd4(0,0,uVar5,&DAT_100c3ebd0,puVar3);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar6;
  (*pcVar8)(uVar5,1,1,TVar2.unknown);
  puVar3 = &DAT_100ec8d58;
  _swift_allocObject(&DAT_100ec8d58,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined8 *)(puVar3 + 0x20) = uVar6;
  _swift_retain(uVar6);
  uVar6 = 0;
  FUN_1002d62fc(0,0,uVar5,&DAT_100c3ebd8,puVar3);
  uVar5 = *(undefined8 *)(lVar1 + 0x70);
  *(undefined8 *)(lVar1 + 0x70) = uVar6;
  _swift_release(uVar5);
  plVar4 = (long *)(ulong)*(uint *)(PTR__get_value_100eaed10 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  FUN_1000037f0(&DAT_100fbcf50,&DAT_100c3ebe0);
  FUN_1000037f0(&DAT_100fbd498,&DAT_100c3e690);
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1002ef7e8;
  Swift::Task::get_value((undefined *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1002ef7e8 | FUN_1002ef7e8 */

void FUN_1002ef7e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002ef844;
  }
  else {
    pcVar1 = FUN_1002ef894;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x20),0);
  return;
}



/* Address: 0x1002ef844 | FUN_1002ef844 */

void FUN_1002ef844(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_release(uVar1);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001002ef890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2);
  return;
}



/* Address: 0x1002ef894 | FUN_1002ef894 */

void FUN_1002ef894(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_release(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002ef8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002ef8dc | FUN_1002ef8dc */

void FUN_1002ef8dc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x128),auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x138);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x150);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x158);
  local_90 = uVar2;
  uStack_88 = uVar4;
  local_80 = uVar5;
  local_70 = uVar3;
  local_60 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fbd950,&DAT_100c3eaf8);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return;
}



/* Address: 0x1002ef9c4 | FUN_1002ef9c4 */

undefined1  [16] FUN_1002ef9c4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  _swift_beginAccess(unaff_x20 + 0x160,auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x170);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x20 + 400);
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar5;
  local_60 = uVar3;
  local_50 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100fbd958,&DAT_100c3eb00);
  FUN_1002ca7e0(local_90);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return local_90;
}



/* Address: 0x1002efaa0 | FUN_1002efaa0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002efaa0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *plVar4;
  class_t *pcVar5;
  class_t *pcVar6;
  ID IVar7;
  long unaff_x20;
  objc_super local_80;
  long local_70;
  undefined1 auStack_68 [40];
  
  if (*(long *)(unaff_x20 + 0x1b0) == 0) {
    FUN_100076688(unaff_x20 + 0x70,auStack_68);
    puVar2 = &DAT_100fbd960;
    FUN_1000037f0(&DAT_100fbd960,&DAT_100c3ebf0);
    uVar3 = 0;
    FUN_1002e2f80(0);
    plVar4 = &local_70;
    _swift_dynamicCast(plVar4,auStack_68,puVar2,uVar3,6);
    if (((ulong)plVar4 & 1) != 0) {
      pcVar5 = (class_t *)0x0;
      FUN_1002e4b0c();
      pcVar6 = pcVar5;
      _objc_allocWithZone();
      lVar1 = _TtC11PasteSearch22SpotlightIndexDelegate::indexer;
      _swift_weakInit((long)&pcVar6->isa + _TtC11PasteSearch22SpotlightIndexDelegate::indexer,0);
      _swift_weakAssign((long)&pcVar6->isa + lVar1);
      local_80.receiver = (ID)pcVar6;
      local_80.super_class = pcVar5;
      IVar7 = _objc_msgSendSuper2(&local_80,"init");
      *(ID *)(unaff_x20 + 0x1b0) = IVar7;
      objc_stub::setIndexDelegate_(*(ID *)(local_70 + 0x10),IVar7);
      _swift_release(local_70);
    }
  }
  return;
}



/* Address: 0x1002efba0 | FUN_1002efba0 */

void FUN_1002efba0(void)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x308) = unaff_x20;
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x310) = uVar2;
  lVar3 = 0;
  FUN_1002e35d4();
  *(long *)(unaff_x22 + 0x318) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 800) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x328) = uVar2;
  puVar1 = &DAT_100fbcfb8;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x330) = uVar2;
  puVar1 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x338) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x340) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x348) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x350) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x358) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x360) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x368) = uVar2;
  _swift_task_switch(FUN_1002efccc);
  return;
}



/* Address: 0x1002efccc | FUN_1002efccc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002efccc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  int iVar2;
  long lVar3;
  bool bVar4;
  ID IVar5;
  long lVar6;
  long *plVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  undefined1 *puVar13;
  int *piVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  
  lVar17 = *(long *)(unaff_x22 + 0x308);
  IVar5 = CSSearchableIndex::isIndexingAvailable((ID)&_OBJC_CLASS___CSSearchableIndex);
  *(undefined8 *)(unaff_x22 + 0x370) = *(undefined8 *)(lVar17 + 0x198);
  FUN_1000d468c(unaff_x22 + 0x198);
  puVar9 = *(undefined **)(unaff_x22 + 0x1b0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1b8);
  _Var12.unknown = puVar9;
  FUN_100004640(unaff_x22 + 0x198);
  Swift::_StringGuts::grow(0x20,_Var12);
  _swift_bridgeObjectRelease(0xe000000000000000);
  bVar4 = (int)IVar5 == 0;
  pcVar1 = (char *)0x65757274;
  if (bVar4) {
    pcVar1 = (char *)0x65736c6166;
  }
  puVar8 = &DAT_e400000000000000;
  if (bVar4) {
    puVar8 = &DAT_e500000000000000;
  }
  SVar25.bridgeObject = puVar8;
  SVar25.str = pcVar1;
  SVar26.bridgeObject = param_4;
  SVar26.str = param_3;
  Swift::String::append(SVar25,SVar26);
  _swift_bridgeObjectRelease(puVar8);
  FUN_1000d4dd4(0xd00000000000001e,0x8000000100da12f0,puVar9,uVar15);
  _swift_bridgeObjectRelease(0x8000000100da12f0);
  FUN_100004594(unaff_x22 + 0x198);
  lVar17 = *(long *)(unaff_x22 + 0x308);
  if ((IVar5 & 1) != 0) {
    uVar18 = *(undefined8 *)(unaff_x22 + 0x368);
    _swift_beginAccess((undefined8 *)(lVar17 + 0x128),unaff_x22 + 0x288,0,0);
    uVar16 = *(undefined8 *)(lVar17 + 0x130);
    uVar15 = *(undefined8 *)(lVar17 + 0x128);
    uVar20 = *(undefined8 *)(lVar17 + 0x140);
    uVar19 = *(undefined8 *)(lVar17 + 0x138);
    uVar21 = *(undefined8 *)(lVar17 + 0x150);
    uVar22 = *(undefined8 *)(lVar17 + 0x148);
    *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(lVar17 + 0x158);
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar21;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar22;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar19;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar16;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar15;
    uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar22 = *(undefined8 *)(unaff_x22 + 200);
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar19);
    _swift_retain(uVar20);
    _swift_retain(uVar22);
    FUN_1000037f0(&DAT_100fbd950,&DAT_100c3eaf8);
    FUN_1002ca7e0(uVar18);
    _swift_release(uVar15);
    _swift_release(uVar16);
    _swift_release(uVar19);
    _swift_release(uVar20);
    _swift_release(uVar22);
    uVar15 = *(undefined8 *)(lVar17 + 0xb0);
    lVar3 = *(long *)(lVar17 + 0xb8);
    lVar6 = lVar17 + 0x98;
    FUN_100004640(lVar6,uVar15);
    FUN_1002ee7b4();
    *(long *)(unaff_x22 + 0x378) = lVar6;
    piVar14 = *(int **)(lVar3 + 0x18);
    iVar2 = *piVar14;
    plVar7 = (long *)(ulong)(uint)piVar14[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x380) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1002f00dc;
                    /* WARNING: Could not recover jumptable at 0x0001002eff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar14))(lVar17,lVar6,uVar15,lVar3);
    return;
  }
  FUN_1000da768(unaff_x22 + 0xf8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar17 = *(long *)(unaff_x22 + 0x118);
  puVar8 = (undefined1 *)(unaff_x22 + 0xf8);
  FUN_100004640(puVar8,uVar15);
  FUN_1002ebf18();
  puVar9 = &DAT_100ec8df0;
  puVar13 = puVar8;
  _swift_allocError(&DAT_100ec8df0,puVar8,0,0);
  *puVar13 = 1;
  puVar10 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x20) = 0x656372756f73;
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined **)(puVar10 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar10 + 0x28) = &DAT_e600000000000000;
  *(undefined8 *)(puVar10 + 0x30) = 0xd000000000000015;
  *(undefined8 *)(puVar10 + 0x38) = 0x8000000100da1310;
  puVar11 = puVar10;
  FUN_1002e0e24();
  _swift_setDeallocating(puVar10);
  FUN_100005808(puVar10 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  (**(code **)(lVar17 + 0x28))(puVar9,puVar11,uVar15,lVar17);
  _swift_bridgeObjectRelease(puVar11);
  _swift_errorRelease(puVar9);
  FUN_100004594(unaff_x22 + 0xf8);
  _swift_allocError(&DAT_100ec8df0,puVar8,0,0);
  *puVar8 = 1;
  _swift_willThrow();
  uVar16 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x368));
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001002f00d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f00dc | FUN_1002f00dc */

void FUN_1002f00dc(char *param_1,undefined *param_2)

{
  char *pcVar1;
  undefined *puVar2;
  int iVar3;
  bool bVar4;
  Date DVar5;
  undefined8 *puVar6;
  TaskPriority TVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  undefined8 uVar10;
  code *pcVar11;
  long lVar12;
  int *piVar13;
  long lVar14;
  undefined8 uVar15;
  long *plVar16;
  undefined8 uVar17;
  long *unaff_x22;
  char *pcVar18;
  undefined8 uVar19;
  _StringGuts _Var20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  _StringGuts _Var24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  undefined8 uVar31;
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
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  
  lVar30 = *unaff_x22;
  lVar14 = *(long *)(lVar30 + 0x308);
  lVar28 = *unaff_x22;
  *(char **)(lVar30 + 0x388) = param_1;
  *(undefined **)(lVar30 + 0x390) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar30 + 0x380));
  puVar9 = (undefined *)0x0;
  _swift_beginAccess(lVar14 + 0x160,lVar30 + 0x2a0,0);
  uVar10 = *(undefined8 *)(lVar14 + 400);
  uVar23 = *(undefined8 *)(lVar14 + 0x178);
  uVar19 = *(undefined8 *)(lVar14 + 0x170);
  uVar17 = *(undefined8 *)(lVar14 + 0x188);
  uVar15 = *(undefined8 *)(lVar14 + 0x180);
  uVar22 = *(undefined8 *)(lVar14 + 0x160);
  *(undefined8 *)(lVar30 + 0x68) = *(undefined8 *)(lVar14 + 0x168);
  *(undefined8 *)(lVar30 + 0x60) = uVar22;
  *(undefined8 *)(lVar30 + 0x78) = uVar23;
  *(undefined8 *)(lVar30 + 0x70) = uVar19;
  *(undefined8 *)(lVar30 + 0x88) = uVar17;
  *(undefined8 *)(lVar30 + 0x80) = uVar15;
  *(undefined8 *)(lVar30 + 0x90) = uVar10;
  uVar15 = *(undefined8 *)(lVar30 + 0x60);
  uVar17 = *(undefined8 *)(lVar30 + 0x68);
  uVar19 = *(undefined8 *)(lVar30 + 0x70);
  uVar23 = *(undefined8 *)(lVar30 + 0x80);
  _swift_retain(uVar15);
  _swift_retain(uVar17);
  _swift_retain(uVar19);
  _swift_retain(uVar23);
  _swift_retain(uVar10);
  FUN_1000037f0(&DAT_100fbd958,&DAT_100c3eb00);
  FUN_1002ca7e0(lVar30 + 0x2b8);
  _swift_release(uVar15);
  _swift_release(uVar17);
  _swift_release(uVar19);
  _swift_release(uVar23);
  _swift_release(uVar10);
  bVar4 = false;
  _Var24.unknown = *(undefined **)(lVar30 + 0x2b8);
  _Var20.unknown = *(undefined **)(lVar30 + 0x2c0);
  if ((_Var20.unknown != (undefined *)0x0) && (param_2 != (undefined *)0x0)) {
    if ((_Var24.unknown == param_1) && (_Var20.unknown == param_2)) {
      bVar4 = false;
    }
    else {
      puVar9 = param_2;
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var24,_Var20,(_StringComparisonResult)(__int8)param_1);
      bVar4 = !bVar4;
    }
  }
  uVar15 = *(undefined8 *)(lVar30 + 0x360);
  lVar14 = *(long *)(lVar30 + 800);
  pcVar18 = *(char **)(lVar30 + 0x318);
  FUN_1002f39e4(*(undefined8 *)(lVar30 + 0x368),uVar15);
  pcVar11 = *(code **)(lVar14 + 0x30);
  *(code **)(lVar30 + 0x398) = pcVar11;
  (*pcVar11)(uVar15,1);
  if ((int)uVar15 == 1) {
    lVar25 = lVar30 + 0x120;
    uVar15 = *(undefined8 *)(lVar30 + 0x360);
    _swift_bridgeObjectRelease(_Var20.unknown);
    FUN_100005808(uVar15,&DAT_100fbcf60,&DAT_100c3e020);
    FUN_1000d468c(lVar25);
    uVar15 = *(undefined8 *)(lVar30 + 0x138);
    uVar17 = *(undefined8 *)(lVar30 + 0x140);
    lVar14 = lVar25;
    FUN_100004640(lVar25,uVar15);
    FUN_1000d4dd4(0xd000000000000029,0x8000000100da1330,uVar15,uVar17,lVar14);
  }
  else {
    FUN_1002f3b80(*(undefined8 *)(lVar30 + 0x360),*(undefined8 *)(lVar30 + 0x328));
    if (bVar4) {
      lVar25 = lVar30 + 0x260;
      uVar15 = *(undefined8 *)(lVar30 + 0x328);
      FUN_1000d468c(lVar25);
      puVar29 = *(undefined **)(lVar30 + 0x278);
      uVar17 = *(undefined8 *)(lVar30 + 0x280);
      _Var8.unknown = puVar29;
      FUN_100004640(lVar25);
      Swift::_StringGuts::grow(0x2f,_Var8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      _Var8.unknown = (char *)0x3f;
      if (_Var20.unknown != (undefined *)0x0) {
        _Var8.unknown = _Var24.unknown;
      }
      _Var24.unknown = (undefined *)0xe100000000000000;
      if (_Var20.unknown != (undefined *)0x0) {
        _Var24.unknown = _Var20.unknown;
      }
      SVar32.bridgeObject = _Var24.unknown;
      SVar32.str = _Var8.unknown;
      SVar40.bridgeObject = puVar9;
      SVar40.str = pcVar18;
      Swift::String::append(SVar32,SVar40);
      _swift_bridgeObjectRelease(_Var24.unknown);
      SVar33.bridgeObject = (void *)0xa500000000000000;
      SVar33.str = (char *)0x209286e220;
      SVar41.bridgeObject = puVar9;
      SVar41.str = pcVar18;
      Swift::String::append(SVar33,SVar41);
      pcVar1 = (char *)0x3f;
      if (param_2 != (undefined *)0x0) {
        pcVar1 = param_1;
      }
      puVar2 = (undefined *)0xe100000000000000;
      if (param_2 != (undefined *)0x0) {
        puVar2 = param_2;
      }
      _swift_bridgeObjectRetain(param_2);
      SVar34.bridgeObject = puVar2;
      SVar34.str = pcVar1;
      SVar42.bridgeObject = puVar9;
      SVar42.str = pcVar18;
      Swift::String::append(SVar34,SVar42);
      _swift_bridgeObjectRelease(puVar2);
      SVar35.bridgeObject = (void *)0xee00676e69786564;
      SVar35.str = (char *)0x6e692d6572202c29;
      SVar43.bridgeObject = puVar9;
      SVar43.str = pcVar18;
      Swift::String::append(SVar35,SVar43);
      FUN_1000d4dd4(0xd000000000000018,0x8000000100da1460,puVar29,uVar17);
      _swift_bridgeObjectRelease(0x8000000100da1460);
    }
    else {
      plVar16 = *(long **)(lVar30 + 0x328);
      _swift_bridgeObjectRelease(_Var20.unknown);
      lVar14 = *plVar16;
      if (DAT_100fbd4e8 != -1) {
        _swift_once(&DAT_100fbd4e8,FUN_1002e1234);
      }
      lVar21 = DAT_101057930;
      if (lVar14 == DAT_101057930) {
        lVar14 = *(long *)(lVar30 + 0x328);
        lVar25 = *(long *)(lVar14 + 0x10);
        *(long *)(lVar30 + 0x3a0) = lVar25;
        lVar21 = *(long *)(lVar14 + 8);
        *(long *)(lVar30 + 0x3a8) = lVar21;
        if (lVar25 < lVar21) {
          uVar17 = *(undefined8 *)(lVar30 + 0x330);
          lVar12 = *(long *)(lVar30 + 0x318);
          FUN_1000d468c(lVar30 + 0xd0);
          puVar29 = *(undefined **)(lVar30 + 0xe8);
          uVar15 = *(undefined8 *)(lVar30 + 0xf0);
          _Var20.unknown = puVar29;
          FUN_100004640(lVar30 + 0xd0);
          Swift::_StringGuts::grow(0x1e,_Var20);
          _swift_bridgeObjectRelease(0xe000000000000000);
          *(long *)(lVar30 + 0x2d8) = lVar25;
          SVar36 = Swift::CustomStringConvertible::get_description();
          SVar44.bridgeObject = puVar9;
          SVar44.str = pcVar18;
          Swift::String::append(SVar36,SVar44);
          _swift_bridgeObjectRelease(SVar36.bridgeObject);
          SVar37.bridgeObject = (void *)0xe100000000000000;
          SVar37.str = (char *)0x2f;
          SVar45.bridgeObject = puVar9;
          SVar45.str = pcVar18;
          Swift::String::append(SVar37,SVar45);
          *(long *)(lVar30 + 0x2e0) = lVar21;
          SVar36 = Swift::CustomStringConvertible::get_description();
          SVar46.bridgeObject = puVar9;
          SVar46.str = pcVar18;
          Swift::String::append(SVar36,SVar46);
          _swift_bridgeObjectRelease(SVar36.bridgeObject);
          FUN_1000d4dd4(0xd000000000000019,0x8000000100da1380,puVar29,uVar15);
          _swift_bridgeObjectRelease(0x8000000100da1380);
          FUN_100004594(lVar30 + 0xd0);
          FUN_1002eb7dc(lVar14 + *(int *)(lVar12 + 0x1c),uVar17);
        }
        else {
          if (0 < lVar21) {
            plVar16 = (long *)0x70;
            _swift_task_alloc();
            *(long **)(lVar30 + 0x3b0) = plVar16;
            *plVar16 = lVar28;
            plVar16[1] = (long)FUN_1002f0c38;
            FUN_1002f3230();
            return;
          }
          uVar17 = *(undefined8 *)(lVar30 + 0x330);
          FUN_1000d468c(lVar30 + 0x1c0);
          puVar29 = *(undefined **)(lVar30 + 0x1d8);
          uVar15 = *(undefined8 *)(lVar30 + 0x1e0);
          _Var20.unknown = puVar29;
          FUN_100004640(lVar30 + 0x1c0);
          Swift::_StringGuts::grow(0x1b,_Var20);
          _swift_bridgeObjectRelease(0xe000000000000000);
          *(long *)(lVar30 + 0x2e8) = lVar25;
          SVar36 = Swift::CustomStringConvertible::get_description();
          SVar51.bridgeObject = puVar9;
          SVar51.str = pcVar18;
          Swift::String::append(SVar36,SVar51);
          _swift_bridgeObjectRelease(SVar36.bridgeObject);
          SVar39.bridgeObject = &DAT_e700000000000000;
          SVar39.str = (char *)0x29736d65746920;
          SVar52.bridgeObject = puVar9;
          SVar52.str = pcVar18;
          Swift::String::append(SVar39,SVar52);
          FUN_1000d4dd4(0xd000000000000012,0x8000000100da13a0,puVar29,uVar15);
          _swift_bridgeObjectRelease(0x8000000100da13a0);
          FUN_1002e450c(lVar14);
          FUN_100004594(lVar30 + 0x1c0);
          DVar5 = Foundation::Date::typeMetadataAccessor();
          (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(uVar17,1,1,DVar5.unknown);
        }
        *(undefined1 *)(lVar30 + 0x3e9) = 0;
        lVar14 = *(long *)(lVar30 + 0x390);
        if (lVar14 != 0) {
          uVar17 = *(undefined8 *)(lVar30 + 0x388);
          uVar15 = *(undefined8 *)(lVar30 + 0x308);
          puVar9 = &DAT_100c3eb70;
          _swift_getKeyPath(&DAT_100c3eb70);
          puVar29 = &DAT_100c3eb98;
          _swift_getKeyPath(&DAT_100c3eb98);
          *(undefined8 *)(lVar30 + 0x2c8) = uVar17;
          *(long *)(lVar30 + 0x2d0) = lVar14;
          _swift_retain(uVar15);
          FUN_1002cb5a0(lVar30 + 0x2c8,uVar15,puVar9,puVar29);
        }
        uVar17 = *(undefined8 *)(lVar30 + 0x310);
        lVar14 = *(long *)(lVar30 + 0x308);
        TVar7 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar17,1,1,TVar7.unknown);
        puVar9 = &DAT_100ec8ce0;
        _swift_allocObject(&DAT_100ec8ce0,0x18,7);
        _swift_weakInit(puVar9 + 0x10,lVar14);
        FUN_100076688(lVar14 + 0x98,lVar30 + 0x148);
        puVar29 = &DAT_100ec8d08;
        _swift_allocObject(&DAT_100ec8d08,0x50,7);
        *(undefined8 *)(puVar29 + 0x10) = 0;
        *(undefined8 *)(puVar29 + 0x18) = 0;
        FUN_100076508(lVar30 + 0x148,puVar29 + 0x20);
        *(undefined **)(puVar29 + 0x48) = puVar9;
        uVar15 = 0;
        FUN_1002d62fc(0,0,uVar17,&DAT_100c3eb68,puVar29);
        uVar17 = *(undefined8 *)(lVar14 + 0x120);
        *(undefined8 *)(lVar14 + 0x120) = uVar15;
        _swift_release(uVar17);
        pcVar11 = *(code **)(lVar30 + 0x398);
        uVar15 = *(undefined8 *)(lVar30 + 0x348);
        uVar17 = *(undefined8 *)(lVar30 + 0x318);
        FUN_1002f39e4(*(undefined8 *)(lVar30 + 0x368),uVar15);
        (*pcVar11)(uVar15,1,uVar17);
        lVar14 = *(long *)(lVar30 + 0x348);
        if ((int)uVar15 == 1) {
          FUN_100005808(lVar14,&DAT_100fbcf60,&DAT_100c3e020);
        }
        else {
          lVar21 = *(long *)(lVar14 + 8);
          lVar14 = *(long *)(lVar14 + 0x10);
          FUN_1002e450c();
          if (lVar14 < lVar21) {
            uVar17 = *(undefined8 *)(lVar30 + 0x378);
            lVar21 = *(long *)(lVar30 + 0x308);
            uVar15 = *(undefined8 *)(lVar21 + 0xb0);
            lVar14 = *(long *)(lVar21 + 0xb8);
            FUN_100004640(lVar21 + 0x98,uVar15);
            piVar13 = *(int **)(lVar14 + 8);
            iVar3 = *piVar13;
            plVar16 = (long *)(ulong)(uint)piVar13[1];
            _swift_task_alloc();
            *(long **)(lVar30 + 0x3d0) = plVar16;
            *plVar16 = lVar28;
            plVar16[1] = (long)FUN_1002f177c;
                    /* WARNING: Could not recover jumptable at 0x0001002f0b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar3 + (long)piVar13))
                      (lVar21,uVar17,*(undefined8 *)(lVar30 + 0x330),uVar15,lVar14);
            return;
          }
        }
        uVar15 = *(undefined8 *)(lVar30 + 0x368);
        FUN_100005808(*(undefined8 *)(lVar30 + 0x330),&DAT_100fbcfb8,&DAT_100c3e5d0);
        FUN_100005808(uVar15,&DAT_100fbcf60,&DAT_100c3e020);
        uVar17 = *(undefined8 *)(lVar30 + 0x360);
        uVar19 = *(undefined8 *)(lVar30 + 0x358);
        uVar15 = *(undefined8 *)(lVar30 + 0x350);
        uVar10 = *(undefined8 *)(lVar30 + 0x348);
        uVar23 = *(undefined8 *)(lVar30 + 0x340);
        uVar22 = *(undefined8 *)(lVar30 + 0x338);
        uVar26 = *(undefined8 *)(lVar30 + 0x330);
        uVar27 = *(undefined8 *)(lVar30 + 0x328);
        uVar31 = *(undefined8 *)(lVar30 + 0x310);
        _swift_task_dealloc(*(undefined8 *)(lVar30 + 0x368));
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar15);
        _swift_task_dealloc(uVar10);
        _swift_task_dealloc(uVar23);
        _swift_task_dealloc(uVar22);
        _swift_task_dealloc(uVar26);
        _swift_task_dealloc(uVar27);
        _swift_task_dealloc(uVar31);
                    /* WARNING: Could not recover jumptable at 0x0001002f0c1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar28 + 8))();
        return;
      }
      lVar25 = lVar30 + 0x238;
      uVar15 = *(undefined8 *)(lVar30 + 0x328);
      FUN_1000d468c(lVar25);
      puVar29 = *(undefined **)(lVar30 + 0x250);
      uVar17 = *(undefined8 *)(lVar30 + 600);
      _Var20.unknown = puVar29;
      FUN_100004640(lVar25);
      Swift::_StringGuts::grow(0x2f,_Var20);
      _swift_bridgeObjectRelease(0xe000000000000000);
      *(long *)(lVar30 + 0x2f8) = lVar14;
      SVar36 = Swift::CustomStringConvertible::get_description();
      SVar47.bridgeObject = puVar9;
      SVar47.str = pcVar18;
      Swift::String::append(SVar36,SVar47);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      SVar36.bridgeObject = (void *)0xa500000000000000;
      SVar36.str = (char *)0x209286e220;
      SVar48.bridgeObject = puVar9;
      SVar48.str = pcVar18;
      Swift::String::append(SVar36,SVar48);
      *(long *)(lVar30 + 0x300) = lVar21;
      SVar36 = Swift::CustomStringConvertible::get_description();
      SVar49.bridgeObject = puVar9;
      SVar49.str = pcVar18;
      Swift::String::append(SVar36,SVar49);
      _swift_bridgeObjectRelease(SVar36.bridgeObject);
      SVar38.bridgeObject = (void *)0xee00676e69786564;
      SVar38.str = (char *)0x6e692d6572202c29;
      SVar50.bridgeObject = puVar9;
      SVar50.str = pcVar18;
      Swift::String::append(SVar38,SVar50);
      FUN_1000d4dd4(0xd000000000000018,0x8000000100da1440,puVar29,uVar17);
      _swift_bridgeObjectRelease(0x8000000100da1440);
    }
    FUN_1002e450c(uVar15);
  }
  FUN_100004594(lVar25);
  uVar10 = *(undefined8 *)(lVar30 + 0x358);
  uVar15 = *(undefined8 *)(lVar30 + 0x350);
  uVar17 = *(undefined8 *)(lVar30 + 0x330);
  lVar21 = *(long *)(lVar30 + 800);
  uVar19 = *(undefined8 *)(lVar30 + 0x318);
  lVar14 = *(long *)(lVar30 + 0x308);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(uVar17,1,1,DVar5.unknown);
  (**(code **)(lVar21 + 0x38))(uVar10,1,1,uVar19);
  puVar9 = &DAT_100c3eb08;
  _swift_getKeyPath(&DAT_100c3eb08);
  puVar29 = &DAT_100c3eb30;
  _swift_getKeyPath(&DAT_100c3eb30);
  FUN_1002f39e4(uVar10,uVar15);
  _swift_retain(lVar14);
  FUN_1002cb5a0(uVar15,lVar14,puVar9,puVar29);
  FUN_100005808(uVar10,&DAT_100fbcf60,&DAT_100c3e020);
  puVar6 = (undefined8 *)(lVar14 + 0x70);
  FUN_100004640(puVar6,*(undefined8 *)(lVar14 + 0x88));
  uVar15 = *puVar6;
  puVar9 = &DAT_100ec8cb8;
  _swift_allocObject(&DAT_100ec8cb8,0x18,7);
  *(undefined **)(lVar30 + 0x3b8) = puVar9;
  _swift_weakInit(puVar9 + 0x10,uVar15);
  plVar16 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(lVar30 + 0x3c0) = plVar16;
  *plVar16 = lVar28;
  plVar16[1] = (long)FUN_1002f1444;
  FUN_1002ef5d0(&DAT_100c3eb50,puVar9);
  return;
}



/* Address: 0x1002f0c38 | FUN_1002f0c38 */

void FUN_1002f0c38(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x308);
  *(undefined1 *)(lVar1 + 1000) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x3b0));
  _swift_task_switch(FUN_1002f0c8c,uVar2,0);
  return;
}



/* Address: 0x1002f0c8c | FUN_1002f0c8c */

void FUN_1002f0c8c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Date DVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  TaskPriority TVar8;
  long *plVar9;
  _StringGuts _Var10;
  undefined8 uVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  code *pcVar15;
  long unaff_x22;
  undefined *puVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  
  if (*(char *)(unaff_x22 + 1000) == '\x01') {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x3a8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x328);
    FUN_1000d468c(unaff_x22 + 0x1e8);
    puVar16 = *(undefined **)(unaff_x22 + 0x200);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x208);
    _Var10.unknown = puVar16;
    FUN_100004640(unaff_x22 + 0x1e8);
    Swift::_StringGuts::grow(0x4b,_Var10);
    SVar25.bridgeObject = (void *)0x8000000100da13c0;
    SVar25.str = (char *)0xd000000000000014;
    SVar28.bridgeObject = param_4;
    SVar28.str = param_3;
    Swift::String::append(SVar25,SVar28);
    *(undefined8 *)(unaff_x22 + 0x2f0) = uVar14;
    puVar3 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    SVar26 = Swift::CustomStringConvertible::get_description();
    SVar29.bridgeObject = param_4;
    SVar29.str = param_3;
    Swift::String::append(SVar26,SVar29);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar27.bridgeObject = (void *)0x8000000100da13e0;
    SVar27.str = (char *)0x1000000000000035;
    SVar30.bridgeObject = param_4;
    SVar30.str = param_3;
    Swift::String::append(SVar27,SVar30);
    FUN_1000d4df0(0,0xe000000000000000,puVar16,uVar17);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(unaff_x22 + 0x1e8);
    FUN_1000da768(unaff_x22 + 0x210);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar18 = *(long *)(unaff_x22 + 0x230);
    puVar2 = (undefined1 *)(unaff_x22 + 0x210);
    FUN_100004640(puVar2,uVar17);
    FUN_1002ebf18();
    puVar16 = &DAT_100ec8df0;
    _swift_allocError(&DAT_100ec8df0,puVar2,0,0);
    *puVar2 = 2;
    puVar7 = &DAT_100fbd618;
    FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(undefined8 *)(puVar7 + 0x20) = 0x656372756f73;
    puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar7 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(puVar7 + 0x30) = 0xd000000000000013;
    *(undefined8 *)(puVar7 + 0x38) = 0x8000000100da1420;
    *(undefined **)(puVar7 + 0x48) = puVar4;
    *(undefined8 *)(puVar7 + 0x50) = 0x6574496c61746f74;
    *(undefined8 *)(puVar7 + 0x58) = 0xea0000000000736d;
    *(undefined8 *)(puVar7 + 0x60) = uVar13;
    *(undefined **)(puVar7 + 0x78) = puVar3;
    *(undefined8 *)(puVar7 + 0x80) = 0x4964657865646e69;
    *(undefined **)(puVar7 + 0xa8) = puVar3;
    *(undefined8 *)(puVar7 + 0x88) = 0xec000000736d6574;
    *(undefined8 *)(puVar7 + 0x90) = uVar14;
    puVar3 = puVar7;
    FUN_1002e0e24();
    _swift_setDeallocating(puVar7);
    puVar4 = &DAT_100fbd188;
    FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
    _swift_arrayDestroy(puVar7 + 0x20,3,puVar4);
    _swift_deallocClassInstance(puVar7,0x20,7);
    (**(code **)(lVar18 + 0x28))(puVar16,puVar3,uVar17,lVar18);
    _swift_bridgeObjectRelease(puVar3);
    FUN_1002e450c(uVar11);
    _swift_errorRelease(puVar16);
    FUN_100004594(unaff_x22 + 0x210);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x358);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x330);
    lVar20 = *(long *)(unaff_x22 + 800);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x318);
    lVar18 = *(long *)(unaff_x22 + 0x308);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(uVar14,1,1,DVar5.unknown);
    (**(code **)(lVar20 + 0x38))(uVar11,1,1,uVar17);
    puVar16 = &DAT_100c3eb08;
    _swift_getKeyPath(&DAT_100c3eb08);
    puVar7 = &DAT_100c3eb30;
    _swift_getKeyPath(&DAT_100c3eb30);
    FUN_1002f39e4(uVar11,uVar13);
    _swift_retain(lVar18);
    FUN_1002cb5a0(uVar13,lVar18,puVar16,puVar7);
    FUN_100005808(uVar11,&DAT_100fbcf60,&DAT_100c3e020);
    puVar6 = (undefined8 *)(lVar18 + 0x70);
    FUN_100004640(puVar6,*(undefined8 *)(lVar18 + 0x88));
    uVar11 = *puVar6;
    puVar16 = &DAT_100ec8cb8;
    _swift_allocObject(&DAT_100ec8cb8,0x18,7);
    *(undefined **)(unaff_x22 + 0x3b8) = puVar16;
    _swift_weakInit(puVar16 + 0x10,uVar11);
    plVar9 = (long *)0x60;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x3c0) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1002f1444;
    FUN_1002ef5d0(&DAT_100c3eb50,puVar16);
    return;
  }
  uVar17 = *(undefined8 *)(unaff_x22 + 0x3a0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x328);
  FUN_1000d468c(unaff_x22 + 0x1c0);
  puVar16 = *(undefined **)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1e0);
  _Var10.unknown = puVar16;
  FUN_100004640(unaff_x22 + 0x1c0);
  Swift::_StringGuts::grow(0x1b,_Var10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x2e8) = uVar17;
  SVar26 = Swift::CustomStringConvertible::get_description();
  SVar31.bridgeObject = param_4;
  SVar31.str = param_3;
  Swift::String::append(SVar26,SVar31);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  SVar26.bridgeObject = &DAT_e700000000000000;
  SVar26.str = (char *)0x29736d65746920;
  SVar32.bridgeObject = param_4;
  SVar32.str = param_3;
  Swift::String::append(SVar26,SVar32);
  FUN_1000d4dd4(0xd000000000000012,0x8000000100da13a0,puVar16,uVar11);
  _swift_bridgeObjectRelease(0x8000000100da13a0);
  FUN_1002e450c(uVar14);
  FUN_100004594(unaff_x22 + 0x1c0);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(uVar13,1,1,DVar5.unknown);
  *(undefined1 *)(unaff_x22 + 0x3e9) = 0;
  lVar18 = *(long *)(unaff_x22 + 0x390);
  if (lVar18 != 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x308);
    puVar16 = &DAT_100c3eb70;
    _swift_getKeyPath(&DAT_100c3eb70);
    puVar7 = &DAT_100c3eb98;
    _swift_getKeyPath(&DAT_100c3eb98);
    *(undefined8 *)(unaff_x22 + 0x2c8) = uVar13;
    *(long *)(unaff_x22 + 0x2d0) = lVar18;
    _swift_retain(uVar11);
    FUN_1002cb5a0(unaff_x22 + 0x2c8,uVar11,puVar16,puVar7);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x310);
  lVar18 = *(long *)(unaff_x22 + 0x308);
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar8.unknown + -8) + 0x38))(uVar13,1,1,TVar8.unknown);
  puVar16 = &DAT_100ec8ce0;
  _swift_allocObject(&DAT_100ec8ce0,0x18,7);
  _swift_weakInit(puVar16 + 0x10,lVar18);
  FUN_100076688(lVar18 + 0x98,unaff_x22 + 0x148);
  puVar7 = &DAT_100ec8d08;
  _swift_allocObject(&DAT_100ec8d08,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = 0;
  *(undefined8 *)(puVar7 + 0x18) = 0;
  FUN_100076508(unaff_x22 + 0x148,puVar7 + 0x20);
  *(undefined **)(puVar7 + 0x48) = puVar16;
  uVar11 = 0;
  FUN_1002d62fc(0,0,uVar13,&DAT_100c3eb68,puVar7);
  uVar13 = *(undefined8 *)(lVar18 + 0x120);
  *(undefined8 *)(lVar18 + 0x120) = uVar11;
  _swift_release(uVar13);
  pcVar15 = *(code **)(unaff_x22 + 0x398);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x318);
  FUN_1002f39e4(*(undefined8 *)(unaff_x22 + 0x368),uVar11);
  (*pcVar15)(uVar11,1,uVar13);
  lVar18 = *(long *)(unaff_x22 + 0x348);
  if ((int)uVar11 == 1) {
    FUN_100005808(lVar18,&DAT_100fbcf60,&DAT_100c3e020);
  }
  else {
    lVar20 = *(long *)(lVar18 + 8);
    lVar18 = *(long *)(lVar18 + 0x10);
    FUN_1002e450c();
    if (lVar18 < lVar20) {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x378);
      lVar20 = *(long *)(unaff_x22 + 0x308);
      uVar11 = *(undefined8 *)(lVar20 + 0xb0);
      lVar18 = *(long *)(lVar20 + 0xb8);
      FUN_100004640(lVar20 + 0x98,uVar11);
      piVar12 = *(int **)(lVar18 + 8);
      iVar1 = *piVar12;
      plVar9 = (long *)(ulong)(uint)piVar12[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x3d0) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_1002f177c;
                    /* WARNING: Could not recover jumptable at 0x0001002f1370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar12))
                (lVar20,uVar13,*(undefined8 *)(unaff_x22 + 0x330),uVar11,lVar18);
      return;
    }
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x368);
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x330),&DAT_100fbcfb8,&DAT_100c3e5d0);
  FUN_100005808(uVar11,&DAT_100fbcf60,&DAT_100c3e020);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x368));
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x0001002f1440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f1444 | FUN_1002f1444 */

void FUN_1002f1444(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  undefined8 uVar5;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x3b8);
  uVar4 = *(undefined8 *)(lVar2 + 0x378);
  uVar5 = *(undefined8 *)(lVar2 + 0x308);
  *(long *)(lVar2 + 0x3c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x3c0));
  _swift_release(uVar3);
  FUN_1000da368(uVar5,uVar4);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002f14cc;
  }
  else {
    pcVar1 = FUN_1002f1674;
  }
  _swift_task_switch(pcVar1,uVar5,uVar4);
  return;
}



/* Address: 0x1002f14cc | FUN_1002f14cc */

void FUN_1002f14cc(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  TaskPriority TVar4;
  long *plVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  
  *(undefined1 *)(unaff_x22 + 0x3e9) = 1;
  lVar9 = *(long *)(unaff_x22 + 0x390);
  if (lVar9 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x388);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x308);
    puVar2 = &DAT_100c3eb70;
    _swift_getKeyPath(&DAT_100c3eb70);
    puVar3 = &DAT_100c3eb98;
    _swift_getKeyPath(&DAT_100c3eb98);
    *(undefined8 *)(unaff_x22 + 0x2c8) = uVar10;
    *(long *)(unaff_x22 + 0x2d0) = lVar9;
    _swift_retain(uVar8);
    FUN_1002cb5a0(unaff_x22 + 0x2c8,uVar8,puVar2,puVar3);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
  lVar9 = *(long *)(unaff_x22 + 0x308);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(uVar10,1,1,TVar4.unknown);
  puVar2 = &DAT_100ec8ce0;
  _swift_allocObject(&DAT_100ec8ce0,0x18,7);
  _swift_weakInit(puVar2 + 0x10,lVar9);
  FUN_100076688(lVar9 + 0x98,unaff_x22 + 0x148);
  puVar3 = &DAT_100ec8d08;
  _swift_allocObject(&DAT_100ec8d08,0x50,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  FUN_100076508(unaff_x22 + 0x148,puVar3 + 0x20);
  *(undefined **)(puVar3 + 0x48) = puVar2;
  uVar8 = 0;
  FUN_1002d62fc(0,0,uVar10,&DAT_100c3eb68,puVar3);
  uVar10 = *(undefined8 *)(lVar9 + 0x120);
  *(undefined8 *)(lVar9 + 0x120) = uVar8;
  _swift_release(uVar10);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x378);
  lVar7 = *(long *)(unaff_x22 + 0x308);
  uVar8 = *(undefined8 *)(lVar7 + 0xb0);
  lVar9 = *(long *)(lVar7 + 0xb8);
  FUN_100004640(lVar7 + 0x98,uVar8);
  piVar6 = *(int **)(lVar9 + 8);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x3d0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1002f177c;
                    /* WARNING: Could not recover jumptable at 0x0001002f1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (lVar7,uVar10,*(undefined8 *)(unaff_x22 + 0x330),uVar8,lVar9);
  return;
}



/* Address: 0x1002f1674 | FUN_1002f1674 */

void FUN_1002f1674(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x330);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x390));
  FUN_100005808(uVar1,&DAT_100fbcfb8,&DAT_100c3e5d0);
  FUN_100005808(uVar2,&DAT_100fbcf60,&DAT_100c3e020);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x368));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001002f1778. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f177c | FUN_1002f177c */

void FUN_1002f177c(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  
  lVar12 = *unaff_x22;
  lVar5 = *unaff_x22;
  *(long *)(lVar12 + 0x3d8) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x3d0));
  if (unaff_x20 == 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    if (lVar9 != 0) {
      if ((*(byte *)(lVar12 + 0x3e9) & 1) == 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x398);
        uVar2 = *(undefined8 *)(lVar12 + 0x340);
        uVar3 = *(undefined8 *)(lVar12 + 0x318);
        FUN_1002f39e4(*(undefined8 *)(lVar12 + 0x368),uVar2);
        (*UNRECOVERED_JUMPTABLE)(uVar2,1,uVar3);
        if ((int)uVar2 == 1) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002f1a40);
          (*UNRECOVERED_JUMPTABLE)();
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar12 + 0x398);
        uVar3 = *(undefined8 *)(lVar12 + 0x368);
        uVar2 = *(undefined8 *)(lVar12 + 0x338);
        uVar4 = *(undefined8 *)(lVar12 + 0x318);
        lVar9 = *(long *)(*(long *)(lVar12 + 0x340) + 8);
        FUN_1002e450c();
        FUN_1002f39e4(uVar3,uVar2);
        (*UNRECOVERED_JUMPTABLE)(uVar2,1,uVar4);
        if ((int)uVar2 == 1) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1002f1a44);
          (*UNRECOVERED_JUMPTABLE)();
        }
        uVar2 = *(undefined8 *)(*(long *)(lVar12 + 0x338) + 0x10);
        FUN_1002e450c();
      }
      else {
        uVar2 = 0;
      }
      plVar1 = (long *)0x4a0;
      _swift_task_alloc();
      *(long **)(lVar12 + 0x3e0) = plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)FUN_1002f1a44;
      FUN_1002e87e4(param_1,uVar2,lVar9);
      return;
    }
    uVar2 = *(undefined8 *)(lVar12 + 0x368);
    uVar3 = *(undefined8 *)(lVar12 + 0x330);
    _swift_bridgeObjectRelease(param_1);
    FUN_100005808(uVar3,&DAT_100fbcfb8,&DAT_100c3e5d0);
    FUN_100005808(uVar2,&DAT_100fbcf60,&DAT_100c3e020);
    uVar3 = *(undefined8 *)(lVar12 + 0x360);
    uVar2 = *(undefined8 *)(lVar12 + 0x358);
    uVar4 = *(undefined8 *)(lVar12 + 0x350);
    uVar6 = *(undefined8 *)(lVar12 + 0x348);
    uVar7 = *(undefined8 *)(lVar12 + 0x340);
    uVar8 = *(undefined8 *)(lVar12 + 0x338);
    uVar10 = *(undefined8 *)(lVar12 + 0x330);
    uVar11 = *(undefined8 *)(lVar12 + 0x328);
    uVar13 = *(undefined8 *)(lVar12 + 0x310);
    _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x368));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    uVar2 = *(undefined8 *)(lVar12 + 0x368);
    FUN_100005808(*(undefined8 *)(lVar12 + 0x330),&DAT_100fbcfb8,&DAT_100c3e5d0);
    FUN_100005808(uVar2,&DAT_100fbcf60,&DAT_100c3e020);
    uVar3 = *(undefined8 *)(lVar12 + 0x360);
    uVar4 = *(undefined8 *)(lVar12 + 0x358);
    uVar6 = *(undefined8 *)(lVar12 + 0x350);
    uVar7 = *(undefined8 *)(lVar12 + 0x348);
    uVar8 = *(undefined8 *)(lVar12 + 0x340);
    uVar10 = *(undefined8 *)(lVar12 + 0x338);
    uVar11 = *(undefined8 *)(lVar12 + 0x330);
    uVar2 = *(undefined8 *)(lVar12 + 0x328);
    uVar13 = *(undefined8 *)(lVar12 + 0x310);
    _swift_task_dealloc(*(undefined8 *)(lVar12 + 0x368));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002f1a44 | FUN_1002f1a44 */

void FUN_1002f1a44(undefined1 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar1 + 0x3d8);
  uVar2 = *(undefined8 *)(lVar1 + 0x308);
  *(undefined1 *)(lVar1 + 0x3ea) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x3e0));
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_switch(FUN_1002f1aa4,uVar2,0);
  return;
}



/* Address: 0x1002f1aa4 | FUN_1002f1aa4 */

void FUN_1002f1aa4(void)

{
  long lVar1;
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
  
  if (*(char *)(unaff_x22 + 0x3ea) == '\x01') {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x330);
    FUN_1000d468c(unaff_x22 + 0x170);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar4 = *(undefined8 *)(unaff_x22 + 400);
    lVar1 = unaff_x22 + 0x170;
    FUN_100004640(lVar1,uVar3);
    FUN_1000d4dd4(0xd00000000000001e,0x8000000100da1360,uVar3,uVar4,lVar1);
    FUN_100005808(uVar5,&DAT_100fbcfb8,&DAT_100c3e5d0);
    FUN_100005808(uVar2,&DAT_100fbcf60,&DAT_100c3e020);
    FUN_100004594(unaff_x22 + 0x170);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x368);
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0x330),&DAT_100fbcfb8,&DAT_100c3e5d0);
    FUN_100005808(uVar3,&DAT_100fbcf60,&DAT_100c3e020);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x360);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x358);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x348);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x340);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x310);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x368));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x0001002f1c2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


