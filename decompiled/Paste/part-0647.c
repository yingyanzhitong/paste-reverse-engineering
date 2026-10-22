/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006d5824 | FUN_1006d5824 */

undefined * FUN_1006d5824(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  String *pSVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  void *pvVar6;
  int iVar7;
  undefined *puVar8;
  code *pcVar9;
  Bucket BVar10;
  char *pcVar11;
  long lVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    pcVar11 = (char *)0x0;
    FUN_1006bf7c0(0,lVar14);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar10 = Swift::_HashTable::get_startBucket(_Var1);
    lVar12 = 0;
    iVar7 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar10.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5aac);
        (*pcVar9)();
      }
      uVar18 = (ulong)BVar10.offset >> 6;
      uVar17 = 1L << (BVar10.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar18 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5ab0);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5ab4);
        (*pcVar9)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + BVar10.offset * 0x10);
      uVar4 = *puVar2;
      uVar5 = puVar2[1];
      pSVar3 = (String *)(*(long *)(param_1 + 0x38) + BVar10.offset * 0x10);
      pvVar6 = pSVar3->bridgeObject;
      SVar20 = *pSVar3;
      _swift_bridgeObjectRetain_n(uVar5,2);
      _swift_bridgeObjectRetain(pvVar6);
      SVar19.bridgeObject = &SUB_e200000000000000;
      SVar19.str = (char *)0x223d;
      SVar21.bridgeObject = param_4;
      SVar21.str = pcVar11;
      Swift::String::append(SVar19,SVar21);
      SVar22.bridgeObject = param_4;
      SVar22.str = pcVar11;
      Swift::String::append(SVar20,SVar22);
      SVar20.bridgeObject = (void *)0xe100000000000000;
      SVar20.str = (char *)0x22;
      SVar23.bridgeObject = param_4;
      SVar23.str = pcVar11;
      Swift::String::append(SVar20,SVar23);
      _swift_bridgeObjectRelease(pvVar6);
      _swift_bridgeObjectRelease(uVar5);
      uVar15 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar15) {
        pcVar11 = &DAT_00000001;
        FUN_1006bf7c0(1 < *(ulong *)(puVar8 + 0x18),uVar15 + 1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x20) = uVar4;
      *(undefined8 *)(puVar8 + uVar15 * 0x10 + 0x28) = uVar5;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= (ulong)BVar10.offset) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5ab8);
        (*pcVar9)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar18 * 8) & uVar17) == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5abc);
        (*pcVar9)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006d5ac0);
        (*pcVar9)();
      }
      uVar17 = *(ulong *)(_Var1.unknown + uVar18 * 8) & -2L << (BVar10.offset & 0x3fU);
      if (uVar17 == 0) {
        lVar16 = uVar18 << 6;
        puVar13 = (ulong *)(param_1 + 0x48 + uVar18 * 8);
        do {
          uVar18 = uVar18 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar18) {
            pcVar11 = (char *)0x0;
            FUN_10000cae0(BVar10.offset,iVar7);
            goto LAB_1006d58c4;
          }
          uVar17 = *puVar13;
          lVar16 = lVar16 + 0x40;
          puVar13 = puVar13 + 1;
        } while (uVar17 == 0);
        pcVar11 = (char *)0x0;
        FUN_10000cae0(BVar10.offset,iVar7);
        uVar18 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) + lVar16;
      }
      else {
        uVar18 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar18 >> 0x20 | uVar18 << 0x20) | BVar10.offset & 0x7fffffffffffffc0U;
      }
LAB_1006d58c4:
      lVar12 = lVar12 + 1;
      BVar10.offset = uVar15;
    } while (lVar12 != lVar14);
  }
  return puVar8;
}



/* Address: 0x1006d5ac0 | FUN_1006d5ac0 */

undefined * FUN_1006d5ac0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  String SVar8;
  String separator;
  String separator_00;
  
  puVar2 = &DAT_100fdd048;
  FUN_1000f7830(&DAT_100fdd048,&DAT_100c71a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000017;
  *(undefined8 *)(puVar2 + 0x28) = 0x8000000100da8990;
  *(undefined8 *)(puVar2 + 0x30) = 0xd000000000000017;
  *(undefined8 *)(puVar2 + 0x38) = 0x8000000100db0ad0;
  puVar3 = &DAT_100fdc730;
  FUN_1000f7830(&DAT_100fdc730,&BYTE_100c70f68);
  puVar7 = puVar3;
  FUN_1006c6514();
  SVar8.bridgeObject = &SUB_e200000000000000;
  SVar8.str = (char *)0x203b;
  SVar8 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar8);
  _swift_bridgeObjectRelease(param_1);
  *(String *)(puVar2 + 0x40) = SVar8;
  *(undefined8 *)(puVar2 + 0x50) = 0xd000000000000016;
  *(undefined8 *)(puVar2 + 0x58) = 0x8000000100db0af0;
  *(undefined8 *)(puVar2 + 0x60) = 0xd000000000000016;
  *(undefined8 *)(puVar2 + 0x68) = 0x8000000100db0b10;
  *(undefined8 *)(puVar2 + 0x70) = 0x6666696e736f6e;
  *(undefined1 **)(puVar2 + 0x78) = &DAT_e700000000000000;
  FUN_10085d78c();
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x203b;
    SVar8 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease_n(param_2,2);
    puVar3 = (undefined *)0xd000000000000023;
    puVar7 = (undefined *)0x8000000100db0b50;
    FUN_10085c664(SVar8.str,SVar8.bridgeObject,0xd000000000000023,0x8000000100db0b50,
                  0xd000000000000023,0x8000000100db0b80);
  }
  if (param_3 != 0) {
    uVar4 = 0xd000000000000013;
    lVar6 = -0x7ffffffeff24f4d0;
    thunk_FUN_10085af9c(0xd000000000000013);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d5d5c);
      (*pcVar1)();
    }
    lVar5 = param_3;
    FUN_1006d5824();
    _swift_bridgeObjectRelease(param_3);
    FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
    FUN_1006d5d5c(&DAT_100fdc3b0,&DAT_100fdc3a8,&DAT_100c71a80);
    separator_00.bridgeObject = (void *)0xe100000000000000;
    separator_00.str = (char *)0x2c;
    SVar8 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
    _swift_bridgeObjectRelease(lVar5);
    FUN_10085c664(SVar8.str,SVar8.bridgeObject,uVar4,lVar6,puVar3,puVar7);
  }
  return puVar2;
}



/* Address: 0x1006d5d5c | FUN_1006d5d5c */

void FUN_1006d5d5c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    puVar1 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,param_2)
    ;
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x1006d5da0 | FUN_1006d5da0 */

void FUN_1006d5da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  *(undefined8 *)(unaff_x22 + 0x118) = param_6;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006d5e20;
                    /* WARNING: Could not recover jumptable at 0x0001006d5e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0x10,param_2,param_3);
  return;
}



/* Address: 0x1006d5e20 | FUN_1006d5e20 */

void FUN_1006d5e20(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d5e84;
  }
  else {
    pcVar1 = FUN_1006d5f9c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d5e84 | FUN_1006d5e84 */

void FUN_1006d5e84(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar3 = *(long *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined1 *)(unaff_x22 + 0x98) = *(undefined1 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_retain();
  FUN_10085d8f8();
  if (lVar3 != 0) {
    lVar3 = 0;
    do {
      lVar4 = *(long *)(unaff_x22 + 0x118);
      FUN_10085d980(unaff_x22 + 0xa0,lVar3,lVar4);
      FUN_10085d8f8();
      if (lVar4 <= lVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006d5f9c);
        (*pcVar2)();
      }
      lVar4 = *(long *)(unaff_x22 + 0x118);
      lVar3 = lVar3 + 1;
      *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0xa8);
      *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0xa0);
      *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0xb8);
      *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0xb0);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 200);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0xc0);
      *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xd0);
      FUN_1006bd6b8();
      Swift::RangeReplaceableCollection::_append();
      FUN_10085d8f8();
    } while (lVar3 != lVar4);
  }
  puVar1 = *(undefined8 **)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x118));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x60);
  *puVar1 = uVar5;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 0x98);
  puVar1[5] = uVar8;
  puVar1[4] = uVar7;
  puVar1[7] = uVar10;
  puVar1[6] = uVar9;
  puVar1[3] = uVar6;
  puVar1[2] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x0001006d5f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d5f9c | FUN_1006d5f9c */

void FUN_1006d5f9c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006d5fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d5fa8 | FUN_1006d5fa8 */

void FUN_1006d5fa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_6 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  uVar2 = *unaff_x20;
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006d6040;
  FUN_1006d5da0(plVar1,unaff_x22 + 0x40,param_2,param_3,&DAT_100c71c58,unaff_x22 + 0x10,uVar2);
  return;
}



/* Address: 0x1006d6040 | FUN_1006d6040 */

void FUN_1006d6040(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x88);
    uVar4 = *(undefined8 *)(lVar2 + 0x40);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x48);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x50);
    uVar7 = *(undefined8 *)(lVar2 + 0x68);
    uVar6 = *(undefined8 *)(lVar2 + 0x60);
    uVar9 = *(undefined8 *)(lVar2 + 0x78);
    uVar8 = *(undefined8 *)(lVar2 + 0x70);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x80);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006d60a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006d60ac | FUN_1006d60ac */

void FUN_1006d60ac(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71bf0;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x1006d60d8 | FUN_1006d60d8 */

void FUN_1006d60d8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006d60e4 | FUN_1006d60e4 */

Character FUN_1006d60e4(char *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  Index IVar3;
  uint uVar4;
  Character CVar5;
  String SVar6;
  String SVar7;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar4 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if (((ulong)param_2 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    IVar3 = Swift::String::index((Index)(uVar2 | uVar1 << 0x10),SVar6);
    SVar7.bridgeObject = param_2;
    SVar7.str = param_1;
    CVar5 = Swift::String::get_subscript(IVar3,SVar7);
    return CVar5;
  }
  return (Character)ZEXT816(0);
}



/* Address: 0x1006d615c | FUN_1006d615c */

void FUN_1006d615c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  ulong local_98;
  
  _swift_retain(param_8);
  _swift_retain(param_9);
  uVar2 = param_8;
  uVar3 = param_9;
  FUN_1006c3bdc();
  local_98 = CONCAT71(local_98._1_7_,(char)uVar3) & 0xffffffffffffff01;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_b0 = param_2;
  uStack_a8 = param_3;
  local_a0 = uVar2;
  FUN_1006c26c0(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_1006d6288(&local_f8,&local_b0,param_4,param_5,param_6,param_7,0,puVar1,param_10,&DAT_100ef8310
                ,param_11,&PTR_PTR_100fdc5c8,&PTR_PTR_100ef8288);
  _swift_release(param_8);
  _swift_release(param_9);
  param_1[5] = uStack_d0;
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  param_1[8] = local_b8;
  param_1[1] = uStack_f0;
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  return;
}



/* Address: 0x1006d6288 | FUN_1006d6288 */

void FUN_1006d6288(undefined8 *param_1,undefined8 param_2,char *param_3,void *param_4,
                  undefined8 param_5,undefined1 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  bool bVar2;
  Substring SVar3;
  long lVar4;
  uint uVar6;
  String SVar7;
  String SVar8;
  String SVar10;
  String SVar11;
  undefined8 local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  String SVar9;
  void *pvVar5;
  
  *param_1 = param_5;
  *(undefined1 *)(param_1 + 1) = param_6;
  *(undefined1 *)((long)param_1 + 9) = param_7;
  if (param_4 == (void *)0x0) {
    param_1[2] = param_3;
    param_1[3] = 0;
  }
  else {
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x2f;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    pvVar5 = param_4;
    bVar2 = Swift::String::hasSuffix(SVar8,SVar11);
    if (bVar2) {
      _swift_bridgeObjectRetain(param_4);
      SVar7.bridgeObject = (void *)0xe100000000000000;
      SVar7.str = (char *)0x2f;
      SVar3.unknown = (undefined *)Swift::String::get_count(SVar7);
      FUN_10048178c(SVar3.unknown,param_3,param_4);
      _swift_bridgeObjectRelease(param_4);
    }
    else {
      SVar10.str = param_3;
      if (((ulong)param_4 & 0x2000000000000000) != 0) {
        SVar10.str = (char *)((ulong)param_4 >> 0x38 & 0xf);
      }
      uVar6 = (uint)((ulong)param_3 >> 0x3b) & 1;
      if (((ulong)param_4 & 0x1000000000000000) == 0) {
        uVar6 = 1;
      }
      uVar1 = 7;
      if (uVar6 == 0) {
        uVar1 = 0xb;
      }
      SVar10.str = (char *)(uVar1 | (long)SVar10.str << 0x10);
      SVar10.bridgeObject = param_3;
      pvVar5 = param_4;
      SVar3 = Swift::String::get_subscript((Range<Index>)0xf,SVar10);
      param_3 = SVar10.str;
    }
    SVar9.bridgeObject = param_3;
    SVar9.str = SVar3.unknown;
    SVar8 = Swift::String::__fromSubstring(SVar9);
    _swift_bridgeObjectRelease(pvVar5);
    _swift_bridgeObjectRelease(param_4);
    *(String *)(param_1 + 2) = SVar8;
  }
  lStack_80 = param_10;
  local_78 = param_11;
  uStack_70 = param_12;
  local_68 = param_13;
  lVar4 = 0;
  local_88 = param_9;
  FUN_1006dcd64(0,&local_88);
  (**(code **)(*(long *)(param_10 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar4 + 0x48),param_2,param_10);
  *(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x4c)) = param_8;
  return;
}



/* Address: 0x1006d642c | FUN_1006d642c */

void FUN_1006d642c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long alStack_a0 [4];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  lVar4 = *(long *)(param_8 + -8);
  lVar3 = param_8;
  local_78 = param_5;
  local_6c = param_6;
  local_68 = param_7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(auStack_80 + lVar1,param_2,lVar3);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c26c0(PTR___swiftEmptyArrayStorage_100eae0d8);
  *(undefined8 *)((long)alStack_a0 + lVar1 + 0x10) = param_10;
  *(undefined8 *)((long)alStack_a0 + lVar1 + 0x18) = param_11;
  *(long *)((long)alStack_a0 + lVar1) = param_8;
  *(undefined8 *)((long)alStack_a0 + lVar1 + 8) = param_9;
  FUN_1006d6288(param_1,auStack_80 + lVar1,param_3,param_4,local_78,local_6c,0,puVar2,local_68);
  (**(code **)(lVar4 + 8))(param_2,param_8);
  return;
}



/* Address: 0x1006d6528 | FUN_1006d6528 */

void FUN_1006d6528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  String SVar1;
  String SVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = param_3;
  uStack_58 = param_4;
  _swift_bridgeObjectRetain(param_4);
  SVar1 = Swift::String::_init
                    (&local_60,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  SVar2 = Swift::String::lowercased(SVar1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  FUN_1006d65d0(param_1,param_2,SVar2.str,SVar2.bridgeObject,param_5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return;
}



/* Address: 0x1006d65d0 | FUN_1006d65d0 */

void FUN_1006d65d0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [160];
  
  puVar1 = &DAT_100fdd038;
  FUN_1000f7830(&DAT_100fdd038,&DAT_100c71c60);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar8 = param_2[1];
  uVar7 = *param_2;
  *(undefined8 *)(puVar1 + 0x60) = param_2[6];
  *(undefined8 *)(puVar1 + 0x48) = uVar6;
  *(undefined8 *)(puVar1 + 0x40) = uVar5;
  *(undefined8 *)(puVar1 + 0x58) = uVar4;
  *(undefined8 *)(puVar1 + 0x50) = uVar3;
  *(undefined8 *)(puVar1 + 0x38) = uVar8;
  *(undefined8 *)(puVar1 + 0x30) = uVar7;
  _swift_bridgeObjectRetain(param_4);
  FUN_1006dc190(param_2,auStack_f0);
  puVar2 = puVar1;
  FUN_1006c26c0(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_1000fb4c4(puVar1 + 0x20,&DAT_100fdd040,&DAT_100c71a70);
  FUN_1006d66c4(param_1,puVar2,param_5);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x1006d66c4 | FUN_1006d66c4 */

/* WARNING: Removing unreachable block (ram,0x0001006d681c) */

void FUN_1006d66c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long alStack_b0 [4];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_68;
  
  lVar11 = *(long *)(param_3 + 0x18);
  lVar7 = *(long *)(lVar11 + -8);
  lVar6 = param_3;
  local_78 = param_1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar9 = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(lVar6 + 0x4c));
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(param_2);
  uVar5 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native(uVar9);
  local_68 = uVar9;
  FUN_1006dc1cc(param_2,FUN_1006db130,0,uVar5,&local_68);
  _swift_bridgeObjectRelease(param_2);
  uVar4 = local_68;
  (**(code **)(lVar7 + 0x10))
            ((long)&local_90 + lVar3,(long)unaff_x20 + (long)*(int *)(param_3 + 0x48),lVar11);
  uVar5 = unaff_x20[2];
  uVar9 = unaff_x20[3];
  uVar12 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 9);
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uStack_88 = *(undefined8 *)(param_3 + 0x28);
  local_90 = *(undefined8 *)(param_3 + 0x20);
  uVar10 = *(undefined8 *)(param_3 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar12);
  *(undefined8 *)((long)alStack_b0 + lVar3 + 0x18) = uVar10;
  uVar10 = local_90;
  *(undefined8 *)((long)alStack_b0 + lVar3 + 0x10) = uStack_88;
  *(undefined8 *)((long)alStack_b0 + lVar3 + 8) = uVar10;
  *(long *)((long)alStack_b0 + lVar3) = lVar11;
  FUN_1006d6288(local_78,(long)&local_90 + lVar3,uVar5,uVar9,uVar12,uVar1,uVar2,uVar4,uVar8);
  return;
}



/* Address: 0x1006d6828 | FUN_1006d6828 */

void FUN_1006d6828(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
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
  undefined1 uVar14;
  code *pcVar15;
  bool bVar16;
  undefined *puVar17;
  char *pcVar18;
  ulong uVar19;
  undefined1 *puVar20;
  ulong uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined *puVar24;
  ulong uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  undefined *local_78;
  undefined8 local_70;
  
  uVar21 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar25 = 0xffffffffffffffff;
  if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
    uVar25 = ~(-1L << (uVar21 & 0x3f));
  }
  uVar25 = uVar25 & *(ulong *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  lVar22 = 0;
  puVar24 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  while( true ) {
    while (uVar25 != 0) {
      uVar19 = (uVar25 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar25 & 0x5555555555555555) << 1;
      uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
      uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
      uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
      uVar19 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | lVar22 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar19 * 0x10);
      local_78 = (undefined *)*puVar1;
      uVar10 = puVar1[1];
      puVar20 = (undefined1 *)(*(long *)(param_2 + 0x38) + uVar19 * 0x38);
      uVar14 = *puVar20;
      uVar5 = *(undefined8 *)(puVar20 + 8);
      uVar11 = *(undefined8 *)(puVar20 + 0x10);
      uVar6 = *(undefined8 *)(puVar20 + 0x18);
      uVar12 = *(undefined8 *)(puVar20 + 0x20);
      uVar7 = *(undefined8 *)(puVar20 + 0x28);
      uVar13 = *(undefined8 *)(puVar20 + 0x30);
      local_70 = uVar10;
      _swift_bridgeObjectRetain_n(uVar10,2);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1006bcff0(uVar6,uVar12,uVar7,uVar13);
      SVar26 = Swift::String::_init
                         (&local_78,PTR___type_metadata_for_Swift_String_100eac208,
                          PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                          ,
                          PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                         );
      SVar27 = Swift::String::lowercased(SVar26);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1006bcff0(uVar6,uVar12,uVar7,uVar13);
      _swift_bridgeObjectRelease(uVar10);
      puVar17 = puVar24;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar26 = SVar27;
      local_78 = puVar24;
      FUN_10046483c();
      pcVar18 = SVar26.str;
      uVar19 = (ulong)~(uint)SVar26.bridgeObject & 1;
      lVar2 = *(long *)(puVar24 + 0x10) + uVar19;
      if (SCARRY8(*(long *)(puVar24 + 0x10),uVar19)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1006d6bb8);
        (*pcVar15)();
      }
      if (*(long *)(puVar24 + 0x18) < lVar2) {
        FUN_1006bb448(lVar2,puVar17);
        SVar28 = SVar27;
        FUN_10046483c();
        pcVar18 = SVar28.str;
        if (((uint)SVar26.bridgeObject & 1) != ((uint)SVar28.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1006d6bcc);
          (*pcVar15)();
        }
      }
      else if (((ulong)puVar17 & 1) == 0) {
        FUN_1006ba6b8();
      }
      puVar24 = local_78;
      uVar25 = uVar25 - 1 & uVar25;
      if (((ulong)SVar26.bridgeObject & 1) == 0) {
        *(ulong *)(local_78 + ((ulong)pcVar18 >> 6) * 8 + 0x40) =
             *(ulong *)(local_78 + ((ulong)pcVar18 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar18 & 0x3f)
        ;
        *(String *)(*(long *)(local_78 + 0x30) + (long)pcVar18 * 0x10) = SVar27;
        puVar20 = (undefined1 *)(*(long *)(local_78 + 0x38) + (long)pcVar18 * 0x38);
        *puVar20 = uVar14;
        *(undefined8 *)(puVar20 + 8) = uVar5;
        *(undefined8 *)(puVar20 + 0x10) = uVar11;
        *(undefined8 *)(puVar20 + 0x18) = uVar6;
        *(undefined8 *)(puVar20 + 0x20) = uVar12;
        *(undefined8 *)(puVar20 + 0x28) = uVar7;
        *(undefined8 *)(puVar20 + 0x30) = uVar13;
        _swift_bridgeObjectRelease();
        _swift_bridgeObjectRelease(uVar10);
        FUN_1006bf814(uVar6,uVar12,uVar7,uVar13);
        if (SCARRY8(*(long *)(puVar24 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1006d6bbc);
          (*pcVar15)();
        }
        *(long *)(puVar24 + 0x10) = *(long *)(puVar24 + 0x10) + 1;
      }
      else {
        puVar20 = (undefined1 *)(*(long *)(local_78 + 0x38) + (long)pcVar18 * 0x38);
        uVar3 = *(undefined8 *)(puVar20 + 0x10);
        uVar8 = *(undefined8 *)(puVar20 + 0x18);
        uVar4 = *(undefined8 *)(puVar20 + 0x20);
        uVar9 = *(undefined8 *)(puVar20 + 0x28);
        uVar23 = *(undefined8 *)(puVar20 + 0x30);
        *puVar20 = uVar14;
        *(undefined8 *)(puVar20 + 8) = uVar5;
        *(undefined8 *)(puVar20 + 0x10) = uVar11;
        *(undefined8 *)(puVar20 + 0x18) = uVar6;
        *(undefined8 *)(puVar20 + 0x20) = uVar12;
        *(undefined8 *)(puVar20 + 0x28) = uVar7;
        *(undefined8 *)(puVar20 + 0x30) = uVar13;
        _swift_bridgeObjectRelease(uVar3);
        FUN_1006bf814(uVar8,uVar4,uVar9,uVar23);
        _swift_bridgeObjectRelease(uVar11);
        _swift_bridgeObjectRelease(uVar10);
        _swift_bridgeObjectRelease(SVar27.bridgeObject);
        FUN_1006bf814(uVar6,uVar12,uVar7,uVar13);
      }
    }
    bVar16 = SCARRY8(lVar22,1);
    lVar22 = lVar22 + 1;
    if (bVar16) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1006d6bb4);
      (*pcVar15)();
    }
    if ((long)(uVar21 + 0x3f >> 6) <= lVar22) break;
    uVar25 = ((ulong *)(param_2 + 0x40))[lVar22];
  }
  _swift_release(param_2);
  FUN_1006d66c4(param_1,puVar24,param_3);
  _swift_bridgeObjectRelease(puVar24);
  return;
}



/* Address: 0x1006d6bcc | FUN_1006d6bcc */

void FUN_1006d6bcc(undefined8 param_1,undefined4 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long alStack_a0 [4];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_64;
  
  lVar9 = *(long *)(param_3 + 0x18);
  lVar5 = param_3;
  local_64 = param_2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar4 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))
            ((long)&local_80 + lVar4,(long)unaff_x20 + (long)*(int *)(lVar5 + 0x48),lVar9);
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar10 = *unaff_x20;
  uVar3 = *(undefined1 *)(unaff_x20 + 1);
  uVar7 = *(undefined8 *)((long)unaff_x20 + (long)*(int *)(param_3 + 0x4c));
  uVar8 = *(undefined8 *)(param_3 + 0x10);
  uStack_78 = *(undefined8 *)(param_3 + 0x28);
  local_80 = *(undefined8 *)(param_3 + 0x20);
  uVar6 = *(undefined8 *)(param_3 + 0x30);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar10);
  _swift_bridgeObjectRetain(uVar7);
  *(undefined8 *)((long)alStack_a0 + lVar4 + 0x18) = uVar6;
  uVar6 = local_80;
  *(undefined8 *)((long)alStack_a0 + lVar4 + 0x10) = uStack_78;
  *(undefined8 *)((long)alStack_a0 + lVar4 + 8) = uVar6;
  *(long *)((long)alStack_a0 + lVar4) = lVar9;
  FUN_1006d6288(param_1,(long)&local_80 + lVar4,uVar1,uVar2,uVar10,uVar3,local_64,uVar7,uVar8);
  return;
}



/* Address: 0x1006d6cdc | FUN_1006d6cdc */

void FUN_1006d6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long *plVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1f0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1f8) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006d6d6c;
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0xe8,param_2,param_3);
  return;
}



/* Address: 0x1006d6d6c | FUN_1006d6d6c */

void FUN_1006d6d6c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1f8));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0x170) = *(undefined1 *)(lVar2 + 0x128);
    *(undefined8 *)(lVar2 + 0x138) = *(undefined8 *)(lVar2 + 0xf0);
    *(undefined8 *)(lVar2 + 0x130) = *(undefined8 *)(lVar2 + 0xe8);
    *(undefined8 *)(lVar2 + 0x148) = *(undefined8 *)(lVar2 + 0x100);
    *(undefined8 *)(lVar2 + 0x140) = *(undefined8 *)(lVar2 + 0xf8);
    *(undefined8 *)(lVar2 + 0x158) = *(undefined8 *)(lVar2 + 0x110);
    *(undefined8 *)(lVar2 + 0x150) = *(undefined8 *)(lVar2 + 0x108);
    *(undefined8 *)(lVar2 + 0x168) = *(undefined8 *)(lVar2 + 0x120);
    *(undefined8 *)(lVar2 + 0x160) = *(undefined8 *)(lVar2 + 0x118);
    pcVar1 = FUN_1006d6df0;
  }
  else {
    pcVar1 = FUN_1006d6fc4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d6df0 | FUN_1006d6df0 */

void FUN_1006d6df0(void)

{
  undefined1 uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((*(char *)(*(long *)(unaff_x22 + 0x1f0) + 9) == '\x01') &&
     (*(long *)(unaff_x22 + 0xe8) == 0x194)) {
    *(undefined1 *)(unaff_x22 + 0x50) = *(undefined1 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x148);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x140);
    *(undefined1 *)(unaff_x22 + 0x51) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x148);
    *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x140);
    *(undefined2 *)(unaff_x22 + 0x98) = *(undefined2 *)(unaff_x22 + 0x50);
    plVar2 = (long *)0x6c0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x208) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1006d6ef8;
    FUN_1006d7190(plVar2,unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 0x1d8),
                  *(undefined8 *)(unaff_x22 + 0x1e0),(undefined8 *)(unaff_x22 + 0x58),
                  *(undefined8 *)(unaff_x22 + 0x1e8));
    return;
  }
  uVar1 = *(undefined1 *)(unaff_x22 + 0x128);
  lVar3 = *(long *)(unaff_x22 + 0xf0);
  plVar2 = *(long **)(unaff_x22 + 0x1d0);
  lVar5 = *(long *)(unaff_x22 + 0x110);
  lVar4 = *(long *)(unaff_x22 + 0x108);
  lVar7 = *(long *)(unaff_x22 + 0x120);
  lVar6 = *(long *)(unaff_x22 + 0x118);
  lVar9 = *(long *)(unaff_x22 + 0x100);
  lVar8 = *(long *)(unaff_x22 + 0xf8);
  *plVar2 = *(long *)(unaff_x22 + 0xe8);
  plVar2[1] = lVar3;
  plVar2[3] = lVar9;
  plVar2[2] = lVar8;
  plVar2[5] = lVar5;
  plVar2[4] = lVar4;
  plVar2[7] = lVar7;
  plVar2[6] = lVar6;
  *(undefined1 *)(plVar2 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001006d6ef4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d6ef8 | FUN_1006d6ef8 */

void FUN_1006d6ef8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x210) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x208));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d6f5c;
  }
  else {
    pcVar1 = FUN_1006d7144;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d6f5c | FUN_1006d6f5c */

void FUN_1006d6f5c(void)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long unaff_x22;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fdd320,&DAT_100c71c98);
  uVar1 = *(undefined1 *)(unaff_x22 + 0xe0);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1d0);
  uVar4 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar2[1] = *(undefined8 *)(unaff_x22 + 0xa8);
  *puVar2 = uVar7;
  puVar2[3] = uVar9;
  puVar2[2] = uVar8;
  puVar2[5] = uVar4;
  puVar2[4] = uVar3;
  puVar2[7] = uVar6;
  puVar2[6] = uVar5;
  *(undefined1 *)(puVar2 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001006d6fc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d6fc4 | FUN_1006d6fc4 */

void FUN_1006d6fc4(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_errorRetain();
  puVar2 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar3 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  uVar4 = unaff_x22 + 0x1a0;
  _swift_dynamicCast(uVar4,unaff_x22 + 0x1c8,puVar2,puVar3,0xe);
  if ((uVar4 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
    FUN_1000fb4c4(unaff_x22 + 0x1a0,&DAT_100fdc4d0,&DAT_100c724e0);
  }
  else {
    FUN_100076508(unaff_x22 + 0x1a0,unaff_x22 + 0x178);
    lVar5 = *(long *)(unaff_x22 + 400);
    lVar1 = *(long *)(unaff_x22 + 0x198);
    FUN_100004640(unaff_x22 + 0x178,lVar5);
    (**(code **)(lVar1 + 0x18))(lVar5,lVar1);
    _swift_bridgeObjectRelease(puVar2);
    FUN_100004594(unaff_x22 + 0x178);
    if (lVar5 == 0x194) {
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x200);
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x28);
      *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x38);
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x30);
      *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x48);
      *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x40);
      *(undefined1 *)(unaff_x22 + 0x51) = 1;
      *(undefined2 *)(unaff_x22 + 0x98) = *(undefined2 *)(unaff_x22 + 0x50);
      *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x18);
      *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x10);
      plVar6 = (long *)0x6c0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x208) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1006d6ef8;
      FUN_1006d7190(plVar6,unaff_x22 + 0xa0,*(undefined8 *)(unaff_x22 + 0x1d8),
                    *(undefined8 *)(unaff_x22 + 0x1e0),unaff_x22 + 0x58,
                    *(undefined8 *)(unaff_x22 + 0x1e8));
      return;
    }
  }
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001006d7140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d7144 | FUN_1006d7144 */

void FUN_1006d7144(void)

{
  long unaff_x22;
  
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fdd320,&DAT_100c71c98);
                    /* WARNING: Could not recover jumptable at 0x0001006d718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d7190 | FUN_1006d7190 */

void FUN_1006d7190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x580) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x578) = param_5;
  *(undefined8 *)(unaff_x22 + 0x570) = param_3;
  *(undefined8 *)(unaff_x22 + 0x568) = param_2;
  *(undefined8 *)(unaff_x22 + 0x560) = param_1;
  uVar1 = *param_4;
  uVar3 = param_4[3];
  uVar2 = param_4[2];
  *(undefined8 *)(unaff_x22 + 0x590) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x588) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x5a0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x598) = uVar2;
  uVar1 = param_4[4];
  uVar3 = param_4[7];
  uVar2 = param_4[6];
  *(undefined8 *)(unaff_x22 + 0x5b0) = param_4[5];
  *(undefined8 *)(unaff_x22 + 0x5a8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x5c0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x5b8) = uVar2;
  *(undefined2 *)(unaff_x22 + 0x102) = *(undefined2 *)(param_4 + 8);
  _swift_task_switch(FUN_1006d71d4,0,0);
  return;
}



/* Address: 0x1006d71d4 | FUN_1006d71d4 */

void FUN_1006d71d4(void)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 *puVar4;
  bool bVar5;
  byte bVar6;
  _StringGuts _Var7;
  char *pcVar8;
  undefined8 *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  Index IVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long *plVar14;
  _StringGuts _Var15;
  _StringGuts _Var16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined *puVar24;
  _StringGuts _Var25;
  undefined8 uVar26;
  void *pvVar27;
  long unaff_x22;
  char *pcVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  String SVar32;
  String SVar33;
  Character CVar34;
  String SVar35;
  String SVar37;
  String SVar36;
  
  _Var25.unknown = *(undefined **)(*(long *)(unaff_x22 + 0x568) + 0xb0);
  *(undefined **)(unaff_x22 + 0x5c8) = _Var25.unknown;
  puVar24 = *(undefined **)(*(long *)(unaff_x22 + 0x568) + 0xb8);
  *(undefined **)(unaff_x22 + 0x5d0) = puVar24;
  _Var16.unknown = _Var25.unknown;
  _Var7.unknown = puVar24;
  FUN_100867ea8();
  puVar4 = (undefined1 *)0xe300000000000000;
  _Var15.unknown = _Var7.unknown;
  if (_Var16.unknown == (undefined *)0x544547 && _Var7.unknown == (undefined *)0xe300000000000000) {
LAB_1006d7320:
    _Var7.unknown = puVar4;
    _swift_bridgeObjectRelease();
LAB_1006d7324:
    puVar21 = *(undefined8 **)(unaff_x22 + 0x568);
    uVar22 = puVar21[3];
    uVar20 = puVar21[2];
    uVar19 = puVar21[5];
    uVar26 = puVar21[4];
    uVar23 = *puVar21;
    *(undefined8 *)(unaff_x22 + 0x18) = puVar21[1];
    *(undefined8 *)(unaff_x22 + 0x10) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x20) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar26;
    uVar26 = puVar21[10];
    uVar20 = puVar21[0xd];
    uVar19 = puVar21[0xc];
    uVar30 = puVar21[7];
    uVar29 = puVar21[6];
    uVar23 = puVar21[9];
    uVar22 = puVar21[8];
    *(undefined8 *)(unaff_x22 + 0x68) = puVar21[0xb];
    *(undefined8 *)(unaff_x22 + 0x60) = uVar26;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x48) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x58) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x50) = uVar22;
    uVar26 = puVar21[0x12];
    uVar20 = puVar21[0x15];
    uVar19 = puVar21[0x14];
    uVar30 = puVar21[0xf];
    uVar29 = puVar21[0xe];
    uVar23 = puVar21[0x11];
    uVar22 = puVar21[0x10];
    *(undefined8 *)(unaff_x22 + 0xa8) = puVar21[0x13];
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar26;
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar20;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar19;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x98) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar22;
    FUN_1009fc75c();
    *(undefined **)(unaff_x22 + 0x4e8) = _Var7.unknown;
    *(undefined **)(unaff_x22 + 0x4f0) = _Var15.unknown;
    FUN_1006b7aa4();
    puVar24 = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar28 = PTR___type_metadata_for_Swift_String_100eac208;
    FUN_10024279c(PTR___type_metadata_for_Swift_String_100eac208,_Var7.unknown);
    pcVar8 = pcVar28;
    FUN_100a3516c();
    _swift_bridgeObjectRelease(pcVar28);
    _swift_bridgeObjectRelease(_Var15.unknown);
    if (puVar24 == (undefined *)0x0) {
      puVar21 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar9 = puVar21;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar9,0,0);
      builtin_strncpy((char *)(puVar9 + 1),"Bad Requ",8);
      *puVar9 = 400;
      puVar9[2] = 0xeb00000000747365;
      puVar9[3] = puVar21;
      puVar9[4] = 0xd00000000000001f;
      puVar9[5] = 0x8000000100db0bb0;
      _swift_willThrow();
    }
    else {
      *(char **)(unaff_x22 + 0x4f8) = pcVar8;
      *(undefined **)(unaff_x22 + 0x500) = puVar24;
      *(undefined8 *)(unaff_x22 + 0x508) = 0x2e2e;
      *(undefined1 **)(unaff_x22 + 0x510) = &SUB_e200000000000000;
      bVar5 = (extension_Foundation)::Swift::StringProtocol::_contains
                        (unaff_x22 + 0x508,PTR___type_metadata_for_Swift_String_100eac208,
                         PTR___type_metadata_for_Swift_String_100eac208,_Var7.unknown,_Var7.unknown)
      ;
      if (!bVar5) {
        pvVar27 = *(void **)(*(long *)(unaff_x22 + 0x580) + 0x18);
        if (pvVar27 == (void *)0x0) {
          SVar35.bridgeObject = puVar24;
          SVar35.str = pcVar8;
          goto LAB_1006d775c;
        }
        pcVar28 = *(char **)(*(long *)(unaff_x22 + 0x580) + 0x10);
        SVar32.bridgeObject = pvVar27;
        SVar32.str = pcVar28;
        SVar37.bridgeObject = puVar24;
        SVar37.str = pcVar8;
        puVar11 = puVar24;
        bVar5 = Swift::String::hasPrefix(SVar32,SVar37);
        if (bVar5) {
          _swift_bridgeObjectRetain(puVar24);
          SVar33.bridgeObject = pvVar27;
          SVar33.str = pcVar28;
          IVar10.cmsgPointer.unknown = (UnsafeMutablePointer)Swift::String::get_count(SVar33);
          FUN_100108f9c(IVar10.cmsgPointer.unknown,pcVar8,puVar24);
          _swift_bridgeObjectRelease(puVar24);
          if (((ulong)IVar10.cmsgPointer.unknown ^ (ulong)pcVar8) >> 0xe == 0) {
            _swift_bridgeObjectRelease(puVar11);
            _swift_bridgeObjectRelease(puVar24);
            SVar35.bridgeObject = (void *)0xe100000000000000;
            SVar35.str = (char *)0x2f;
            goto LAB_1006d775c;
          }
          CVar34 = Swift::Substring::get_subscript(IVar10,(Substring)IVar10.cmsgPointer.unknown);
          _swift_bridgeObjectRelease(CVar34.bridgeObject);
          CVar34 = Swift::Substring::get_subscript(IVar10,(Substring)IVar10.cmsgPointer.unknown);
          _Var16.unknown = CVar34.bridgeObject;
          if ((CVar34.str == (undefined *)0x2f) &&
             (_Var16.unknown == (undefined *)0xe100000000000000)) {
            _swift_bridgeObjectRelease(0xe100000000000000);
          }
          else {
            bVar5 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar34.str,_Var16,(_StringComparisonResult)0x2f);
            _swift_bridgeObjectRelease(_Var16.unknown);
            if (!bVar5) {
              cVar2 = *(char *)(unaff_x22 + 0x103);
              _swift_bridgeObjectRelease(puVar11);
              if (cVar2 == '\x01') {
                uVar26 = *(undefined8 *)(unaff_x22 + 0x588);
                *(undefined8 *)(unaff_x22 + 0x550) = uVar26;
                bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
                if ((bVar6 & 1) != 0) {
                  puVar11 = &DAT_100fdbdb8;
                  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
                  lVar18 = unaff_x22 + 0x550;
                  goto LAB_1006d75d4;
                }
                goto LAB_1006d75d8;
              }
              uVar3 = *(undefined2 *)(unaff_x22 + 0x102);
              uVar26 = *(undefined8 *)(unaff_x22 + 0x590);
              uVar19 = *(undefined8 *)(unaff_x22 + 0x588);
              uVar31 = *(undefined8 *)(unaff_x22 + 0x5b0);
              uVar30 = *(undefined8 *)(unaff_x22 + 0x5a8);
              uVar23 = *(undefined8 *)(unaff_x22 + 0x5c0);
              uVar20 = *(undefined8 *)(unaff_x22 + 0x5b8);
              uVar29 = *(undefined8 *)(unaff_x22 + 0x5a0);
              uVar22 = *(undefined8 *)(unaff_x22 + 0x598);
              _swift_bridgeObjectRelease(puVar24);
              *(undefined8 *)(unaff_x22 + 0x108) = uVar19;
              *(undefined8 *)(unaff_x22 + 0x110) = uVar26;
              *(undefined8 *)(unaff_x22 + 0x120) = uVar29;
              *(undefined8 *)(unaff_x22 + 0x118) = uVar22;
              *(undefined8 *)(unaff_x22 + 0x130) = uVar31;
              *(undefined8 *)(unaff_x22 + 0x128) = uVar30;
              *(undefined8 *)(unaff_x22 + 0x140) = uVar23;
              *(undefined8 *)(unaff_x22 + 0x138) = uVar20;
              *(undefined2 *)(unaff_x22 + 0x148) = uVar3;
              lVar18 = unaff_x22 + 0x108;
              lVar17 = unaff_x22 + 0x228;
              goto LAB_1006d76c4;
            }
          }
          SVar36.bridgeObject = pcVar8;
          SVar36.str = (char *)IVar10.cmsgPointer.unknown;
          SVar35 = Swift::String::__fromSubstring(SVar36);
          _swift_bridgeObjectRelease(puVar11);
          _swift_bridgeObjectRelease(puVar24);
LAB_1006d775c:
          *(void **)(unaff_x22 + 0x5d8) = SVar35.bridgeObject;
          lVar18 = *(long *)(unaff_x22 + 0x578);
          uVar19 = *(undefined8 *)(lVar18 + 0x10);
          *(undefined8 *)(unaff_x22 + 0x5e0) = uVar19;
          uVar20 = *(undefined8 *)(lVar18 + 0x18);
          *(undefined8 *)(unaff_x22 + 0x5e8) = uVar20;
          uVar22 = *(undefined8 *)(lVar18 + 0x20);
          *(undefined8 *)(unaff_x22 + 0x5f0) = uVar22;
          uVar23 = *(undefined8 *)(lVar18 + 0x28);
          *(undefined8 *)(unaff_x22 + 0x5f8) = uVar23;
          uVar26 = *(undefined8 *)(lVar18 + 0x30);
          *(undefined8 *)(unaff_x22 + 0x420) = uVar19;
          *(undefined8 *)(unaff_x22 + 0x428) = uVar20;
          *(undefined8 *)(unaff_x22 + 0x430) = uVar22;
          *(undefined8 *)(unaff_x22 + 0x438) = uVar23;
          *(undefined8 *)(unaff_x22 + 0x440) = uVar26;
          lVar18 = 0;
          FUN_1006dce28(0,unaff_x22 + 0x420);
          *(long *)(unaff_x22 + 0x600) = lVar18;
          lVar18 = *(long *)(lVar18 + -8);
          *(long *)(unaff_x22 + 0x608) = lVar18;
          lVar18 = *(long *)(lVar18 + 0x40);
          *(long *)(unaff_x22 + 0x610) = lVar18;
          uVar13 = lVar18 + 0xf;
          uVar12 = uVar13 & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(ulong *)(unaff_x22 + 0x618) = uVar12;
          uVar13 = uVar13 & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(ulong *)(unaff_x22 + 0x620) = uVar13;
          plVar14 = (long *)0x1b0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x628) = plVar14;
          *plVar14 = unaff_x22;
          plVar14[1] = (long)FUN_1006d78e4;
          FUN_1006d8e80(plVar14,uVar13,SVar35.str,SVar35.bridgeObject,
                        *(undefined8 *)(unaff_x22 + 0x578));
          return;
        }
        cVar2 = *(char *)(unaff_x22 + 0x103);
        if (cVar2 == '\x01') {
          uVar26 = *(undefined8 *)(unaff_x22 + 0x588);
          *(undefined8 *)(unaff_x22 + 0x548) = uVar26;
          bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
          if ((bVar6 & 1) != 0) {
            puVar11 = &DAT_100fdbdb8;
            FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
            lVar18 = unaff_x22 + 0x548;
LAB_1006d75d4:
            _swift_willThrowTypedImpl
                      (lVar18,puVar11,
                       PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
          }
LAB_1006d75d8:
          _swift_bridgeObjectRelease(puVar24);
          goto LAB_1006d75e0;
        }
        uVar1 = *(undefined1 *)(unaff_x22 + 0x102);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x590);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x588);
        uVar31 = *(undefined8 *)(unaff_x22 + 0x5b0);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x5a8);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x5c0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x5b8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x5a0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x598);
        _swift_bridgeObjectRelease(puVar24);
        *(undefined8 *)(unaff_x22 + 0x150) = uVar19;
        *(undefined8 *)(unaff_x22 + 0x158) = uVar26;
        *(undefined8 *)(unaff_x22 + 0x168) = uVar29;
        *(undefined8 *)(unaff_x22 + 0x160) = uVar22;
        *(undefined8 *)(unaff_x22 + 0x188) = uVar23;
        *(undefined8 *)(unaff_x22 + 0x180) = uVar20;
        *(undefined8 *)(unaff_x22 + 0x178) = uVar31;
        *(undefined8 *)(unaff_x22 + 0x170) = uVar30;
        *(undefined1 *)(unaff_x22 + 400) = uVar1;
        *(char *)(unaff_x22 + 0x191) = cVar2;
        lVar18 = unaff_x22 + 0x150;
        lVar17 = unaff_x22 + 0x390;
LAB_1006d76c4:
        FUN_1006be04c(lVar18,lVar17);
        uVar1 = *(undefined1 *)(unaff_x22 + 0x102);
        uVar26 = *(undefined8 *)(unaff_x22 + 0x5c0);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x5b8);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x5b0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x5a8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x5a0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x598);
        uVar30 = *(undefined8 *)(unaff_x22 + 0x588);
        puVar21 = *(undefined8 **)(unaff_x22 + 0x560);
        puVar21[1] = *(undefined8 *)(unaff_x22 + 0x590);
        *puVar21 = uVar30;
        puVar21[3] = uVar29;
        puVar21[2] = uVar23;
        puVar21[5] = uVar22;
        puVar21[4] = uVar20;
        puVar21[6] = uVar19;
        puVar21[7] = uVar26;
        *(undefined1 *)(puVar21 + 8) = uVar1;
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1006d74cc;
      }
      puVar21 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar9 = puVar21;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar9,0,0);
      builtin_strncpy((char *)(puVar9 + 1),"Bad Requ",8);
      *puVar9 = 400;
      puVar9[2] = 0xeb00000000747365;
      puVar9[3] = puVar21;
      puVar9[4] = 0;
      puVar9[5] = 0;
      _swift_willThrow();
      _swift_bridgeObjectRelease(puVar24);
    }
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var16,_Var7,(_StringComparisonResult)0x47);
    _swift_bridgeObjectRelease();
    if (bVar5) goto LAB_1006d7324;
    _Var7.unknown = puVar24;
    FUN_100867ea8();
    puVar4 = &DAT_e400000000000000;
    _Var15.unknown = _Var7.unknown;
    if (_Var25.unknown == (undefined *)0x44414548 && _Var7.unknown == &DAT_e400000000000000)
    goto LAB_1006d7320;
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var25,_Var7,(_StringComparisonResult)0x48);
    _swift_bridgeObjectRelease();
    if (bVar5) goto LAB_1006d7324;
    if (*(char *)(unaff_x22 + 0x103) != '\x01') {
      *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x590);
      *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x588);
      *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x5a0);
      *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x598);
      *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x5b0);
      *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x5a8);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x5c0);
      *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x5b8);
      *(undefined1 *)(unaff_x22 + 0x100) = *(undefined1 *)(unaff_x22 + 0x102);
      *(char *)(unaff_x22 + 0x101) = *(char *)(unaff_x22 + 0x103);
      lVar18 = unaff_x22 + 0xc0;
      lVar17 = unaff_x22 + 0x270;
      goto LAB_1006d76c4;
    }
    uVar26 = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x520) = uVar26;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar6 & 1) != 0) {
      puVar24 = &DAT_100fdbdb8;
      FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x520,puVar24,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
LAB_1006d75e0:
    _swift_errorRetain(uVar26);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1006d74cc:
                    /* WARNING: Could not recover jumptable at 0x0001006d74e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006d78e4 | FUN_1006d78e4 */

void FUN_1006d78e4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x630) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x628));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d7948;
  }
  else {
    pcVar1 = FUN_1006d8938;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d7948 | FUN_1006d7948 */

void FUN_1006d7948(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  undefined8 uVar16;
  String SVar17;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x620);
  lVar7 = *(long *)(unaff_x22 + 0x610);
  lVar11 = *(long *)(unaff_x22 + 0x608);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x600);
  (**(code **)(lVar11 + 0x20))(*(undefined8 *)(unaff_x22 + 0x618),uVar9,uVar10);
  _swift_task_dealloc(uVar9);
  puVar3 = (undefined8 *)(lVar7 + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined8 **)(unaff_x22 + 0x638) = puVar3;
  (**(code **)(lVar11 + 0x10))();
  puVar8 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,uVar10);
  uVar9 = *puVar3;
  uVar10 = puVar3[1];
  *(undefined8 *)(unaff_x22 + 0x640) = uVar10;
  if ((int)puVar8 == 1) {
    uVar14 = 0x2d746e65746e6f43;
    puVar4 = &DAT_100fdd048;
    FUN_1000f7830(&DAT_100fdd048,&DAT_100c71a90);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined8 *)(puVar4 + 0x20) = 0x6e6f697461636f4c;
    *(undefined1 **)(puVar4 + 0x28) = &DAT_e800000000000000;
    *(undefined8 *)(puVar4 + 0x30) = 0x6e6f697461636f6c;
    *(undefined1 **)(puVar4 + 0x38) = &DAT_e800000000000000;
    *(undefined8 *)(puVar4 + 0x40) = uVar9;
    *(undefined8 *)(puVar4 + 0x48) = uVar10;
    _swift_bridgeObjectRetain(uVar10);
    FUN_10085d78c();
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar4
                 );
    if ((uVar14 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x528) = 0;
      SVar17 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar17.str,SVar17.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(puVar4);
    }
    else {
      _swift_release(puVar4);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x618);
    lVar7 = *(long *)(unaff_x22 + 0x608);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x600);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
    _swift_bridgeObjectRelease(uVar10);
    (**(code **)(lVar7 + 8))(uVar9,uVar13);
    _swift_task_dealloc(puVar3);
    _swift_task_dealloc(uVar9);
    puVar8 = *(undefined8 **)(unaff_x22 + 0x560);
    puVar8[1] = 0xd000000000000011;
    *puVar8 = 0x12d;
    puVar8[2] = 0x8000000100db0bd0;
    puVar8[3] = puVar4;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    *(undefined1 *)(puVar8 + 8) = 2;
                    /* WARNING: Could not recover jumptable at 0x0001006d7d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x5f8);
  lVar15 = *(long *)(unaff_x22 + 0x5f0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x5e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x5e0);
  lVar11 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar16,0x100cbb850,&TargetProtocolRequirement_100cbb860);
  *(long *)(unaff_x22 + 0x648) = lVar11;
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar12,uVar16,0x100cbb850,&TargetProtocolRequirement_100cbb858);
  *(long *)(unaff_x22 + 0x650) = lVar5;
  lVar7 = lVar5;
  _swift_getTupleTypeMetadata3
            (0,PTR___type_metadata_for_Swift_String_100eac208,lVar11,lVar5,"path id attributes ",0);
  lVar11 = *(long *)(lVar11 + -8);
  *(long *)(unaff_x22 + 0x658) = lVar11;
  uVar14 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x660) = uVar14;
  (**(code **)(lVar11 + 0x20))();
  lVar11 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x668) = lVar11;
  uVar14 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x670) = uVar14;
  (**(code **)(lVar11 + 0x20))();
  (**(code **)(lVar15 + 0x40))(uVar13);
  _swift_release();
  _swift_bridgeObjectRelease(lVar5);
  _swift_bridgeObjectRelease(lVar7);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar15 + 0x20));
  if (iVar2 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar15 + 0x18));
    *(undefined8 *)(lVar15 + 0x18) = 0xee0065726177656c;
    builtin_strncpy((char *)(lVar15 + 0x10),"FileMidd",8);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar15 + 0x20));
    if (iVar2 == 0) {
      _swift_release(lVar15);
      plVar6 = (long *)0x110;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x678) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1006d7d2c;
      FUN_1006d9c74(uVar9,uVar10,uVar14,*(undefined8 *)(unaff_x22 + 0x568),
                    *(undefined8 *)(unaff_x22 + 0x578));
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d7d2c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006d7d28);
  (*pcVar1)();
}



/* Address: 0x1006d7d2c | FUN_1006d7d2c */

void FUN_1006d7d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x640);
  *(undefined8 *)(lVar2 + 0x680) = param_1;
  *(undefined8 *)(lVar2 + 0x688) = param_2;
  *(undefined8 *)(lVar2 + 0x690) = param_3;
  *(undefined1 *)(lVar2 + 0x104) = param_4;
  *(long *)(lVar2 + 0x698) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x678));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d7db0;
  }
  else {
    pcVar1 = FUN_1006d8b68;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d7db0 | FUN_1006d7db0 */

void FUN_1006d7db0(void)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  bool bVar4;
  byte bVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  undefined *puVar7;
  undefined1 uVar8;
  int *piVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  String SVar34;
  
  bVar5 = *(byte *)(unaff_x22 + 0x104);
  if ((char)bVar5 < '\0') {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x680);
    puVar10 = *(undefined1 **)(unaff_x22 + 0x5d0);
    lVar23 = *(long *)(unaff_x22 + 0x5c8);
    FUN_100867ea8();
    if (lVar23 == 0x544547 && puVar10 == (undefined1 *)0xe300000000000000) {
LAB_1006d7ec0:
      _swift_retain(uVar12);
      _swift_bridgeObjectRelease(puVar10);
      if ((bVar5 & 0x7f) == 1) {
        piVar9 = *(int **)(*(long *)(unaff_x22 + 0x5f8) + 0x28);
        iVar1 = *piVar9;
        plVar6 = (long *)(ulong)(uint)piVar9[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x6b0) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_1006d8770;
                    /* WARNING: Could not recover jumptable at 0x0001006d7f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar1 + (long)piVar9))
                  (plVar6,unaff_x22 + 0x4c0,*(undefined8 *)(unaff_x22 + 0x660),
                   *(undefined8 *)(unaff_x22 + 0x570),*(undefined8 *)(unaff_x22 + 0x5e0),
                   *(undefined8 *)(unaff_x22 + 0x5f0),*(undefined8 *)(unaff_x22 + 0x5e8),
                   *(undefined8 *)(unaff_x22 + 0x5f8));
        return;
      }
      piVar9 = *(int **)(*(long *)(unaff_x22 + 0x5f8) + 0x30);
      iVar1 = *piVar9;
      plVar6 = (long *)(ulong)(uint)piVar9[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x6a0) = plVar6;
      *plVar6 = unaff_x22;
      plVar6[1] = (long)FUN_1006d8594;
                    /* WARNING: Could not recover jumptable at 0x0001006d8104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar9))
                (unaff_x22 + 0x498,*(undefined8 *)(unaff_x22 + 0x660),
                 *(undefined8 *)(unaff_x22 + 0x688),*(undefined8 *)(unaff_x22 + 0x690),
                 *(undefined8 *)(unaff_x22 + 0x570),*(undefined8 *)(unaff_x22 + 0x5e0),
                 *(undefined8 *)(unaff_x22 + 0x5f0),*(undefined8 *)(unaff_x22 + 0x5e8),
                 *(undefined8 *)(unaff_x22 + 0x5f8));
      return;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x544547,(_StringGuts)0xe300000000000000,
                       (_StringComparisonResult)(__int8)lVar23);
    if (bVar4) goto LAB_1006d7ec0;
    if ((lVar23 == 0x44414548) && (puVar10 == &DAT_e400000000000000)) {
      _swift_retain(uVar12);
      _swift_bridgeObjectRelease(&DAT_e400000000000000);
LAB_1006d816c:
      uVar13 = 0x2d746e65746e6f43;
      _swift_retain(uVar12);
      FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                    uVar12);
      uVar8 = *(undefined1 *)(unaff_x22 + 0x104);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x690);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x688);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x680);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x5d8);
      if ((uVar13 & 1) == 0) {
        *(undefined8 *)(unaff_x22 + 0x538) = 0;
        SVar34 = Swift::CustomStringConvertible::get_description();
        FUN_10085c664(SVar34.str,SVar34.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                      0x2d746e65746e6f63,0xee006874676e656c);
        _swift_release(uVar19,uVar16,uVar14,uVar8);
        _swift_bridgeObjectRelease(uVar22);
        _swift_release(uVar19,uVar16,uVar14,uVar8);
      }
      else {
        _swift_release(uVar19,uVar16,uVar14,uVar8);
        _swift_bridgeObjectRelease(uVar22);
        _swift_release(uVar19,uVar16,uVar14,uVar8);
      }
      uVar14 = *(undefined8 *)(unaff_x22 + 0x670);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x660);
      lVar23 = *(long *)(unaff_x22 + 0x658);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x648);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x638);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x618);
      lVar26 = *(long *)(unaff_x22 + 0x608);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x600);
      (**(code **)(*(long *)(unaff_x22 + 0x668) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0x650));
      (**(code **)(lVar23 + 8))(uVar16,uVar19);
      (**(code **)(lVar26 + 8))(uVar17,uVar20);
      _swift_task_dealloc(uVar14);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar22);
      _swift_task_dealloc(uVar17);
      uVar16 = 0x4b4f;
      uVar14 = 200;
      puVar10 = &SUB_e200000000000000;
      goto LAB_1006d8048;
    }
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x44414548,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)lVar23);
    _swift_retain(uVar12);
    _swift_bridgeObjectRelease(puVar10);
    if (bVar4) goto LAB_1006d816c;
    cVar2 = *(char *)(unaff_x22 + 0x103);
    if (cVar2 == '\x01') {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x588);
      *(undefined8 *)(unaff_x22 + 0x530) = uVar12;
      bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar5 & 1) != 0) {
        puVar7 = &DAT_100fdbdb8;
        FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
        _swift_willThrowTypedImpl
                  (unaff_x22 + 0x530,puVar7,
                   PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
      }
      uVar22 = *(undefined8 *)(unaff_x22 + 0x690);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x688);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x680);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x670);
      lVar24 = *(long *)(unaff_x22 + 0x668);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x660);
      lVar26 = *(long *)(unaff_x22 + 0x658);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x650);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x648);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x638);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x618);
      lVar23 = *(long *)(unaff_x22 + 0x608);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x600);
      uVar8 = *(undefined1 *)(unaff_x22 + 0x104);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
      _swift_release(uVar20,uVar17,uVar22,uVar8);
      _swift_release(uVar20,uVar17,uVar22,uVar8);
      (**(code **)(lVar24 + 8))(uVar15,uVar21);
      (**(code **)(lVar26 + 8))(uVar18,uVar14);
      (**(code **)(lVar23 + 8))(uVar27,uVar16);
      _swift_errorRetain(uVar12);
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar18);
      _swift_task_dealloc(uVar19);
      _swift_task_dealloc(uVar27);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1006d8068;
    }
    uVar18 = *(undefined8 *)(unaff_x22 + 0x690);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x688);
    uVar27 = *(undefined8 *)(unaff_x22 + 0x680);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x670);
    lVar24 = *(long *)(unaff_x22 + 0x668);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x660);
    lVar23 = *(long *)(unaff_x22 + 0x658);
    uVar25 = *(undefined8 *)(unaff_x22 + 0x650);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x638);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x618);
    lVar26 = *(long *)(unaff_x22 + 0x608);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x600);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x102);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x590);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x588);
    uVar30 = *(undefined8 *)(unaff_x22 + 0x5c0);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x5b8);
    uVar31 = *(undefined8 *)(unaff_x22 + 0x5a0);
    uVar29 = *(undefined8 *)(unaff_x22 + 0x598);
    uVar33 = *(undefined8 *)(unaff_x22 + 0x5b0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x5a8);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x104);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
    _swift_release(uVar27,uVar21,uVar18,uVar3);
    _swift_release(uVar27,uVar21,uVar18,uVar3);
    (**(code **)(lVar24 + 8))(uVar15,uVar25);
    (**(code **)(lVar23 + 8))(uVar12,uVar14);
    (**(code **)(lVar26 + 8))(uVar20,uVar19);
    *(undefined8 *)(unaff_x22 + 0x198) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x1a0) = uVar22;
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar31;
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar29;
    *(undefined8 *)(unaff_x22 + 0x1c0) = uVar33;
    *(undefined8 *)(unaff_x22 + 0x1b8) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x1d0) = uVar30;
    *(undefined8 *)(unaff_x22 + 0x1c8) = uVar28;
    *(undefined1 *)(unaff_x22 + 0x1d8) = uVar8;
    *(char *)(unaff_x22 + 0x1d9) = cVar2;
    FUN_1006be04c(unaff_x22 + 0x198,unaff_x22 + 0x348);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar20);
    uVar8 = *(undefined1 *)(unaff_x22 + 0x102);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x5c0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x5b8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x5b0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x5a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x5a0);
    puVar10 = *(undefined1 **)(unaff_x22 + 0x598);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x590);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x588);
  }
  else {
    uVar13 = 0x2d746e65746e6f43;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x680);
    _swift_retain(uVar12,*(undefined8 *)(unaff_x22 + 0x688),*(undefined8 *)(unaff_x22 + 0x690),
                  (long)(char)bVar5);
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar12
                 );
    uVar8 = *(undefined1 *)(unaff_x22 + 0x104);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x690);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x688);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x680);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x5d8);
    if ((uVar13 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x540) = 0;
      SVar34 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar34.str,SVar34.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_bridgeObjectRelease(uVar22);
      _swift_release(uVar19,uVar16,uVar14,uVar8);
    }
    else {
      _swift_bridgeObjectRelease(uVar22);
      _swift_release(uVar19,uVar16,uVar14,uVar8);
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x670);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x660);
    lVar23 = *(long *)(unaff_x22 + 0x658);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x648);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x638);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x618);
    lVar26 = *(long *)(unaff_x22 + 0x608);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x600);
    (**(code **)(*(long *)(unaff_x22 + 0x668) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0x650));
    (**(code **)(lVar23 + 8))(uVar16,uVar19);
    (**(code **)(lVar26 + 8))(uVar17,uVar20);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar17);
    uVar16 = 0x69646f4d20746f4e;
    uVar14 = 0x130;
    puVar10 = (undefined1 *)0xec00000064656966;
LAB_1006d8048:
    uVar22 = 0;
    uVar19 = 0;
    uVar8 = 2;
    uVar17 = 0;
    uVar20 = 0;
  }
  puVar11 = *(undefined8 **)(unaff_x22 + 0x560);
  puVar11[1] = uVar16;
  *puVar11 = uVar14;
  puVar11[2] = puVar10;
  puVar11[3] = uVar12;
  puVar11[5] = uVar22;
  puVar11[4] = uVar19;
  puVar11[7] = uVar20;
  puVar11[6] = uVar17;
  *(undefined1 *)(puVar11 + 8) = uVar8;
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1006d8068:
                    /* WARNING: Could not recover jumptable at 0x0001006d8084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006d8594 | FUN_1006d8594 */

void FUN_1006d8594(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x6a8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x6a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d85f8;
  }
  else {
    pcVar1 = FUN_1006d8c40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d85f8 | FUN_1006d85f8 */

void FUN_1006d85f8(void)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar13 = *(undefined8 *)(unaff_x22 + 0x690);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x680);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar5 = *(long *)(unaff_x22 + 0x668);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar2 = *(long *)(unaff_x22 + 0x658);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x650);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x618);
  lVar3 = *(long *)(unaff_x22 + 0x608);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x600);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x5d8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x104);
  FUN_1006d50f4(unaff_x22 + 0x300,0xce,0x206c616974726150,0xef746e65746e6f43,uVar15,
                unaff_x22 + 0x498);
  _swift_release(uVar15,uVar14,uVar13,uVar1);
  _swift_bridgeObjectRelease(uVar11);
  _swift_release(uVar15,uVar14,uVar13,uVar1);
  (**(code **)(lVar5 + 8))(uVar12,uVar16);
  (**(code **)(lVar2 + 8))(uVar9,uVar6);
  (**(code **)(lVar3 + 8))(uVar10,uVar4);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar10);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x340);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x560);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar4 = *(undefined8 *)(unaff_x22 + 800);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x318);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x310);
  puVar7[1] = *(undefined8 *)(unaff_x22 + 0x308);
  *puVar7 = uVar10;
  puVar7[3] = uVar12;
  puVar7[2] = uVar11;
  puVar7[5] = uVar6;
  puVar7[4] = uVar4;
  puVar7[7] = uVar9;
  puVar7[6] = uVar8;
  *(undefined1 *)(puVar7 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001006d876c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d8770 | FUN_1006d8770 */

void FUN_1006d8770(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x6b8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x6b0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d87d4;
  }
  else {
    pcVar1 = FUN_1006d8d60;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d87d4 | FUN_1006d87d4 */

void FUN_1006d87d4(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar14 = *(undefined8 *)(unaff_x22 + 0x690);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x680);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar6 = *(long *)(unaff_x22 + 0x668);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar2 = *(long *)(unaff_x22 + 0x658);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x650);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x618);
  lVar4 = *(long *)(unaff_x22 + 0x608);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x600);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x5d8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x104);
  FUN_1006d50f4((undefined8 *)(unaff_x22 + 0x3d8),200,0x4b4f,&SUB_e200000000000000,uVar16,
                unaff_x22 + 0x4c0);
  _swift_release(uVar16,uVar15,uVar14,uVar1);
  _swift_bridgeObjectRelease(uVar12);
  _swift_release(uVar16,uVar15,uVar14,uVar1);
  (**(code **)(lVar6 + 8))(uVar13,uVar3);
  (**(code **)(lVar2 + 8))(uVar11,uVar7);
  (**(code **)(lVar4 + 8))(uVar10,uVar5);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x418);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x560);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3d8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 1000);
  puVar8[1] = *(undefined8 *)(unaff_x22 + 0x3e0);
  *puVar8 = uVar10;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  puVar8[5] = uVar5;
  puVar8[4] = uVar3;
  puVar8[7] = uVar9;
  puVar8[6] = uVar7;
  *(undefined1 *)(puVar8 + 8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x0001006d8934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d8938 | FUN_1006d8938 */

void FUN_1006d8938(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x630);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x620));
  *(undefined8 *)(unaff_x22 + 0x518) = uVar10;
  _swift_errorRetain(uVar10);
  puVar5 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar6 = &DAT_100fdc4c8;
  FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
  lVar11 = unaff_x22 + 0x448;
  puVar7 = puVar5;
  _swift_dynamicCast(lVar11,unaff_x22 + 0x518,puVar5,puVar6,8);
  if ((int)lVar11 == 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x618);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
LAB_1006d8aa8:
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x518));
    _swift_task_dealloc(uVar10);
  }
  else {
    FUN_100076508(unaff_x22 + 0x448,unaff_x22 + 0x470);
    lVar11 = *(long *)(unaff_x22 + 0x488);
    lVar12 = *(long *)(unaff_x22 + 0x490);
    FUN_100004640(unaff_x22 + 0x470,lVar11);
    (**(code **)(lVar12 + 0x18))(lVar11,lVar12);
    _swift_bridgeObjectRelease(puVar7);
    if (lVar11 != 0x194) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x618);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
      FUN_100004594(unaff_x22 + 0x470);
      goto LAB_1006d8aa8;
    }
    cVar1 = *(char *)(unaff_x22 + 0x103);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x630));
    if (cVar1 != '\x01') {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x618);
      uVar3 = *(undefined2 *)(unaff_x22 + 0x102);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x590);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x588);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x5b0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x5a8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x5c0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x5b8);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x5a0);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x598);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
      FUN_100004594(unaff_x22 + 0x470);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x518));
      *(undefined8 *)(unaff_x22 + 0x1e0) = uVar13;
      *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x1f8) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x1f0) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x208) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x200) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x218) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x210) = uVar18;
      *(undefined2 *)(unaff_x22 + 0x220) = uVar3;
      FUN_1006be04c(unaff_x22 + 0x1e0,unaff_x22 + 0x2b8);
      _swift_task_dealloc(uVar10);
      uVar2 = *(undefined1 *)(unaff_x22 + 0x102);
      puVar8 = *(undefined8 **)(unaff_x22 + 0x560);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x5b0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x5a8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x5c0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x5b8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x588);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x5a0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x598);
      puVar8[1] = *(undefined8 *)(unaff_x22 + 0x590);
      *puVar8 = uVar15;
      puVar8[3] = uVar17;
      puVar8[2] = uVar16;
      puVar8[5] = uVar9;
      puVar8[4] = uVar10;
      puVar8[7] = uVar14;
      puVar8[6] = uVar13;
      *(undefined1 *)(puVar8 + 8) = uVar2;
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1006d8ac0;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x588);
    *(undefined8 *)(unaff_x22 + 0x558) = uVar10;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) != 0) {
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x558,puVar5,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x618);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
    FUN_100004594(unaff_x22 + 0x470);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x518));
    _swift_errorRetain(uVar10);
    _swift_task_dealloc(uVar9);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1006d8ac0:
                    /* WARNING: Could not recover jumptable at 0x0001006d8ad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006d8b68 | FUN_1006d8b68 */

void FUN_1006d8b68(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar9 = *(long *)(unaff_x22 + 0x668);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar10 = *(long *)(unaff_x22 + 0x658);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x650);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x618);
  lVar6 = *(long *)(unaff_x22 + 0x608);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x600);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
  (**(code **)(lVar9 + 8))(uVar3,uVar4);
  (**(code **)(lVar10 + 8))(uVar2,uVar5);
  (**(code **)(lVar6 + 8))(uVar7,uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001006d8c3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d8c40 | FUN_1006d8c40 */

void FUN_1006d8c40(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x690);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x680);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar13 = *(long *)(unaff_x22 + 0x668);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar5 = *(long *)(unaff_x22 + 0x658);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x650);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x618);
  lVar3 = *(long *)(unaff_x22 + 0x608);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x600);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x104);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
  _swift_release(uVar9,uVar7,uVar8,uVar1);
  _swift_release(uVar9,uVar7,uVar8,uVar1);
  (**(code **)(lVar13 + 8))(uVar10,uVar12);
  (**(code **)(lVar5 + 8))(uVar11,uVar6);
  (**(code **)(lVar3 + 8))(uVar14,uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001006d8d5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d8d60 | FUN_1006d8d60 */

void FUN_1006d8d60(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x690);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x680);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x670);
  lVar13 = *(long *)(unaff_x22 + 0x668);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x660);
  lVar5 = *(long *)(unaff_x22 + 0x658);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x650);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x648);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x638);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x618);
  lVar3 = *(long *)(unaff_x22 + 0x608);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x600);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x104);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5d8));
  _swift_release(uVar9,uVar7,uVar8,uVar1);
  _swift_release(uVar9,uVar7,uVar8,uVar1);
  (**(code **)(lVar13 + 8))(uVar10,uVar12);
  (**(code **)(lVar5 + 8))(uVar11,uVar6);
  (**(code **)(lVar3 + 8))(uVar14,uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x0001006d8e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d8e80 | FUN_1006d8e80 */

void FUN_1006d8e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var_00;
  long lVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xa0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_3;
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar7 = *(undefined8 *)(param_4 + 0x28);
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar7;
  uVar6 = *(undefined8 *)(param_4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar6;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar7,uVar6,0x100cbb850,&TargetProtocolRequirement_100cbb858)
  ;
  *(long *)(unaff_x22 + 0xc0) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 200) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness(0xff,uVar7,uVar6,0x100cbb850,&TargetProtocolRequirement_100cbb860)
  ;
  *(long *)(unaff_x22 + 0x100) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x108) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x110) = lVar5;
  uVar4 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x128) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar4;
  _swift_task_switch(FUN_1006d8ff8,0,0);
  return;
}



/* Address: 0x1006d8ff8 | FUN_1006d8ff8 */

void FUN_1006d8ff8(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  int *piVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar13 = *(long *)(unaff_x22 + 0x128);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined4 *)(unaff_x22 + 0x1a8) = *(undefined4 *)(*(long *)(unaff_x22 + 0xa0) + 0x48);
  pcVar12 = *(code **)(*(long *)(unaff_x22 + 0xb0) + 0x18);
  *(code **)(unaff_x22 + 0x140) = pcVar12;
  (*pcVar12)(uVar7,*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x98),
             *(undefined8 *)(unaff_x22 + 0xb8));
  pcVar12 = *(code **)(lVar13 + 0x30);
  *(code **)(unaff_x22 + 0x148) = pcVar12;
  (*pcVar12)(uVar7,1,uVar14);
  if ((int)uVar7 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x110) + 8))
              (*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x108));
    puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar9 = puVar8;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar9,0,0);
    puVar9[1] = 0x6e756f4620746f4e;
    *puVar9 = 0x194;
    puVar9[2] = 0xe900000000000064;
    puVar9[3] = puVar8;
    puVar9[4] = 0;
    puVar9[5] = 0;
    _swift_willThrow();
    uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006d9148. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar13 = *(long *)(unaff_x22 + 0xb0);
  pcVar12 = *(code **)(*(long *)(unaff_x22 + 0x128) + 0x20);
  *(code **)(unaff_x22 + 0x150) = pcVar12;
  (*pcVar12)(*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x120),
             *(undefined8 *)(unaff_x22 + 0x100));
  piVar11 = *(int **)(lVar13 + 0x20);
  *(int **)(unaff_x22 + 0x158) = piVar11;
  iVar1 = *piVar11;
  plVar10 = (long *)(ulong)(uint)piVar11[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_1006d91d0;
                    /* WARNING: Could not recover jumptable at 0x0001006d91cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar11))
            (plVar10,*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0x138),
             *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xb0));
  return;
}



/* Address: 0x1006d91d0 | FUN_1006d91d0 */

void FUN_1006d91d0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d9234;
  }
  else {
    pcVar1 = FUN_1006d9af4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d9234 | FUN_1006d9234 */

void FUN_1006d9234(void)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long *plVar9;
  _StringGuts _Var10;
  char *pcVar11;
  void *in_x3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined8 uVar17;
  char *pcVar18;
  undefined8 uVar19;
  long unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar16 = *(long *)(unaff_x22 + 0xe8);
  pcVar18 = *(char **)(unaff_x22 + 0xc0);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x30);
  *(code **)(unaff_x22 + 0x170) = UNRECOVERED_JUMPTABLE;
  uVar5 = uVar15;
  (*UNRECOVERED_JUMPTABLE)(uVar15,1,pcVar18);
  if ((int)uVar5 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
              (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x100));
    (**(code **)(*(long *)(unaff_x22 + 0xd0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 200));
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar8 = puVar7;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar8,0,0);
    puVar8[1] = 0x6e756f4620746f4e;
    *puVar8 = 0x194;
    puVar8[2] = 0xe900000000000064;
    puVar8[3] = puVar7;
    puVar8[4] = 0;
    puVar8[5] = 0;
    _swift_willThrow();
LAB_1006d9300:
    uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar19);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar20 = *(long *)(unaff_x22 + 0xa0);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x20);
    *(code **)(unaff_x22 + 0x178) = UNRECOVERED_JUMPTABLE;
    pcVar11 = pcVar18;
    (*UNRECOVERED_JUMPTABLE)(*(undefined8 *)(unaff_x22 + 0xf8),uVar15);
    lVar16 = *(long *)(lVar20 + 0x30);
    *(long *)(unaff_x22 + 0x180) = lVar16;
    (**(code **)(lVar16 + 8))(pcVar18,lVar16);
    if (((ulong)pcVar18 & 1) == 0) {
      pcVar13 = *(code **)(unaff_x22 + 0x150);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x138);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar20 = *(long *)(unaff_x22 + 0xa0);
      puVar7 = *(undefined8 **)(unaff_x22 + 0x88);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
      lVar23 = 0;
      _swift_getTupleTypeMetadata3
                (0,PTR___type_metadata_for_Swift_String_100eac208,uVar19,uVar21,
                 "path id attributes ",0);
      iVar1 = *(int *)(lVar23 + 0x30);
      iVar3 = *(int *)(lVar23 + 0x40);
      *puVar7 = uVar22;
      puVar7[1] = uVar17;
      (*pcVar13)((long)puVar7 + (long)iVar1,uVar12,uVar19);
      (*UNRECOVERED_JUMPTABLE)((long)puVar7 + (long)iVar3,uVar15,uVar21);
      uVar15 = *(undefined8 *)(lVar20 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(lVar20 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x18) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar14;
      *(long *)(unaff_x22 + 0x30) = lVar16;
      uVar15 = 0;
      FUN_1006dce28(0,unaff_x22 + 0x10);
      _swift_storeEnumTagMultiPayload(puVar7,uVar15,0);
      _swift_bridgeObjectRetain(uVar17);
    }
    else {
      _Var6.unknown = *(undefined **)(unaff_x22 + 0x90);
      _Var10.unknown = *(undefined **)(unaff_x22 + 0x98);
      FUN_1006d60e4();
      if (_Var10.unknown != (undefined *)0x0) {
        if ((_Var6.unknown == (undefined *)0x2f) &&
           (_Var10.unknown == (undefined *)0xe100000000000000)) {
          _swift_bridgeObjectRelease(0xe100000000000000);
        }
        else {
          pcVar11 = (char *)0x2f;
          in_x3 = (void *)0xe100000000000000;
          bVar4 = Swift::_stringCompareWithSmolCheck(_Var6,_Var10,(_StringComparisonResult)0x2f);
          _swift_bridgeObjectRelease(_Var10.unknown);
          if (!bVar4) goto LAB_1006d95b0;
        }
        if (*(char *)(*(long *)(unaff_x22 + 0xa8) + 8) == '\x01') {
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x140);
          pcVar13 = *(code **)(unaff_x22 + 0x148);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
          uVar5 = *(undefined8 *)(unaff_x22 + 0x98);
          FUN_1006db1a0(uVar15,uVar5,0x74682e7865646e69,0xea00000000006c6d);
          *(undefined8 *)(unaff_x22 + 0x188) = uVar15;
          *(undefined8 *)(unaff_x22 + 400) = uVar5;
          (*UNRECOVERED_JUMPTABLE)(uVar17);
          (*pcVar13)(uVar17,1,uVar19);
          if ((int)uVar17 != 1) {
            piVar2 = *(int **)(unaff_x22 + 0x158);
            (**(code **)(unaff_x22 + 0x150))
                      (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x118),
                       *(undefined8 *)(unaff_x22 + 0x100));
            iVar1 = *piVar2;
            plVar9 = (long *)(ulong)(uint)piVar2[1];
            _swift_task_alloc();
            *(long **)(unaff_x22 + 0x198) = plVar9;
            *plVar9 = unaff_x22;
            plVar9[1] = (long)FUN_1006d97c4;
                    /* WARNING: Could not recover jumptable at 0x0001006d97c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((long)iVar1 + (long)piVar2))
                      (plVar9,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0x130),
                       *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xb0));
            return;
          }
          lVar16 = *(long *)(unaff_x22 + 0x110);
          uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x108);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
          lVar20 = *(long *)(unaff_x22 + 0x128);
          uVar21 = *(undefined8 *)(unaff_x22 + 0xf8);
          lVar23 = *(long *)(unaff_x22 + 0xe8);
          uVar22 = *(undefined8 *)(unaff_x22 + 0xc0);
          _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 400));
          (**(code **)(lVar16 + 8))(uVar5,uVar19);
          puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_10085d78c();
          puVar8 = puVar7;
          FUN_1006be0ac();
          _swift_allocError(&DAT_100ef7ae0,puVar8,0,0);
          puVar8[1] = 0x6e756f4620746f4e;
          *puVar8 = 0x194;
          puVar8[2] = 0xe900000000000064;
          puVar8[3] = puVar7;
          puVar8[4] = 0;
          puVar8[5] = 0;
          _swift_willThrow();
          (**(code **)(lVar23 + 8))(uVar21,uVar22);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 8);
        }
        else {
          uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
          lVar16 = *(long *)(unaff_x22 + 0x128);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x100);
          lVar20 = *(long *)(unaff_x22 + 0xe8);
          uVar19 = *(undefined8 *)(unaff_x22 + 0xc0);
          puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_10085d78c();
          puVar8 = puVar7;
          FUN_1006be0ac();
          _swift_allocError(&DAT_100ef7ae0,puVar8,0,0);
          puVar8[1] = 0x6e756f4620746f4e;
          *puVar8 = 0x194;
          puVar8[2] = 0xe900000000000064;
          puVar8[3] = puVar7;
          puVar8[4] = 0;
          puVar8[5] = 0;
          _swift_willThrow();
          (**(code **)(lVar20 + 8))(uVar5,uVar19);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 8);
        }
        (*UNRECOVERED_JUMPTABLE)(uVar17,uVar15);
        goto LAB_1006d9300;
      }
LAB_1006d95b0:
      uVar14 = *(undefined8 *)(unaff_x22 + 0x138);
      lVar23 = *(long *)(unaff_x22 + 0x128);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x100);
      lVar24 = *(long *)(unaff_x22 + 0xe8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
      lVar20 = *(long *)(unaff_x22 + 0xa0);
      puVar7 = *(undefined8 **)(unaff_x22 + 0x88);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x90);
      _swift_bridgeObjectRetain();
      SVar25.bridgeObject = (void *)0xe100000000000000;
      SVar25.str = (char *)0x2f;
      SVar26.bridgeObject = in_x3;
      SVar26.str = pcVar11;
      Swift::String::append(SVar25,SVar26);
      (**(code **)(lVar24 + 8))(uVar15,uVar21);
      (**(code **)(lVar23 + 8))(uVar14,uVar19);
      *puVar7 = uVar22;
      puVar7[1] = uVar17;
      uVar15 = *(undefined8 *)(lVar20 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(lVar20 + 0x10);
      *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x50) = uVar12;
      *(long *)(unaff_x22 + 0x58) = lVar16;
      uVar15 = 0;
      FUN_1006dce28(0,unaff_x22 + 0x38);
      _swift_storeEnumTagMultiPayload(puVar7,uVar15,1);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar19);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006d96b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006d97c4 | FUN_1006d97c4 */

void FUN_1006d97c4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x198));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006d9830;
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 400));
    pcVar1 = FUN_1006d9ba0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006d9830 | FUN_1006d9830 */

void FUN_1006d9830(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  long lVar19;
  
  uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar11 = uVar16;
  (**(code **)(unaff_x22 + 0x170))(uVar16,1,uVar15);
  if ((int)uVar11 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
              (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x100));
    lVar18 = *(long *)(unaff_x22 + 0xd0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar17 = *(long *)(unaff_x22 + 0x128);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar19 = *(long *)(unaff_x22 + 0xe8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar2 = *(undefined8 *)(unaff_x22 + 200);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 400));
    (**(code **)(lVar18 + 8))(uVar16,uVar2);
    puVar14 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar8 = puVar14;
    FUN_1006be0ac();
    _swift_allocError(&DAT_100ef7ae0,puVar8,0,0);
    puVar8[1] = 0x6e756f4620746f4e;
    *puVar8 = 0x194;
    puVar8[2] = 0xe900000000000064;
    puVar8[3] = puVar14;
    puVar8[4] = 0;
    puVar8[5] = 0;
    _swift_willThrow();
    (**(code **)(lVar19 + 8))(uVar11,uVar15);
    (**(code **)(lVar17 + 8))(uVar13,uVar1);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar2 = *(undefined8 *)(unaff_x22 + 400);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x178);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x180);
    pcVar12 = *(code **)(unaff_x22 + 0x150);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x138);
    lVar18 = *(long *)(unaff_x22 + 0x128);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar17 = *(long *)(unaff_x22 + 0xa0);
    puVar14 = *(undefined8 **)(unaff_x22 + 0x88);
    (**(code **)(*(long *)(unaff_x22 + 0xe8) + 8))(*(undefined8 *)(unaff_x22 + 0xf8),uVar15);
    (**(code **)(lVar18 + 8))(uVar3,uVar4);
    (*UNRECOVERED_JUMPTABLE)(uVar5,uVar16,uVar15);
    lVar18 = 0;
    _swift_getTupleTypeMetadata3
              (0,PTR___type_metadata_for_Swift_String_100eac208,uVar4,uVar15,"path id attributes ",0
              );
    iVar6 = *(int *)(lVar18 + 0x30);
    iVar7 = *(int *)(lVar18 + 0x40);
    *puVar14 = uVar11;
    puVar14[1] = uVar2;
    (*pcVar12)((long)puVar14 + (long)iVar6,uVar1,uVar4);
    (*UNRECOVERED_JUMPTABLE)((long)puVar14 + (long)iVar7,uVar5,uVar15);
    uVar11 = *(undefined8 *)(lVar17 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(lVar17 + 0x10);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
    *(undefined8 *)(unaff_x22 + 0x70) = uVar11;
    *(undefined8 *)(unaff_x22 + 0x78) = uVar10;
    *(undefined8 *)(unaff_x22 + 0x80) = uVar13;
    uVar11 = 0;
    FUN_1006dce28(0);
    _swift_storeEnumTagMultiPayload(puVar14,uVar11,0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006d9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006d9af4 | FUN_1006d9af4 */

void FUN_1006d9af4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
            (*(undefined8 *)(unaff_x22 + 0x138),*(undefined8 *)(unaff_x22 + 0x100));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001006d9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d9ba0 | FUN_1006d9ba0 */

void FUN_1006d9ba0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  code *pcVar9;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar8 = *(long *)(unaff_x22 + 0xe8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  pcVar9 = *(code **)(*(long *)(unaff_x22 + 0x128) + 8);
  (*pcVar9)(*(undefined8 *)(unaff_x22 + 0x130),uVar3);
  (**(code **)(lVar8 + 8))(uVar1,uVar7);
  (*pcVar9)(uVar2,uVar3);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x138));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001006d9c70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006d9c74 | FUN_1006d9c74 */

void FUN_1006d9c74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  Date DVar3;
  ulong uVar4;
  long lVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd8) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_3;
  *(undefined8 *)(unaff_x22 + 200) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  puVar1 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xe8) = DVar3.unknown;
  lVar5 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar2;
  _swift_task_switch(FUN_1006d9d1c,0,0);
  return;
}



/* Address: 0x1006d9d1c | FUN_1006d9d1c */

void FUN_1006d9d1c(void)

{
  long *plVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  Date DVar7;
  undefined *puVar8;
  Date DVar9;
  undefined8 *puVar10;
  _StringGuts _Var11;
  undefined *puVar12;
  undefined1 *puVar13;
  _StringGuts _Var14;
  undefined1 *puVar15;
  uint uVar16;
  undefined8 uVar17;
  char *pcVar18;
  long lVar19;
  code *pcVar20;
  undefined1 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  long *plVar25;
  undefined8 uVar26;
  long unaff_x22;
  long lVar27;
  undefined8 uVar28;
  undefined8 *puVar29;
  code *pcVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  code *pcVar34;
  double dVar35;
  double dVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  
  uVar22 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar24 = *(long *)(unaff_x22 + 0xf0);
  lVar27 = *(long *)(unaff_x22 + 0xd0);
  uVar33 = *(ulong *)(unaff_x22 + 0xb8);
  lVar19 = *(long *)(unaff_x22 + 0xb0);
  puVar5 = &DAT_100fdbcb0;
  FUN_1000f7830(&DAT_100fdbcb0,&DAT_100c70c60);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  uVar26 = *(undefined8 *)(lVar27 + 0x28);
  lVar2 = *(long *)(lVar27 + 0x30);
  pcVar34 = *(code **)(lVar2 + 0x18);
  uVar17 = *(undefined8 *)(lVar27 + 0x18);
  puVar6 = (undefined *)0x0;
  _swift_getAssociatedTypeWitness();
  DVar7.unknown = puVar6;
  (*pcVar34)(uVar22);
  dVar35 = Foundation::Date::get_timeIntervalSince1970(DVar7);
  pcVar20 = *(code **)(lVar24 + 8);
  (*pcVar20)(uVar22,uVar23);
  SVar37 = double::get_description(dVar35);
  *(String *)(puVar5 + 0x20) = SVar37;
  pcVar30 = *(code **)(lVar2 + 0x10);
  puVar8 = puVar6;
  (*pcVar30)(puVar6,lVar2);
  *(undefined **)(unaff_x22 + 0x80) = puVar8;
  SVar37 = Swift::CustomStringConvertible::get_description();
  *(String *)(puVar5 + 0x30) = SVar37;
  puVar12 = *(undefined **)(lVar27 + 0x10);
  uVar28 = *(undefined8 *)(lVar27 + 0x20);
  _Var14.unknown = puVar5;
  _Var11.unknown = puVar12;
  FUN_1006db26c(puVar5,puVar12,uVar17,uVar28,uVar26,lVar2);
  _swift_release();
  thunk_FUN_10085c548();
  puVar8 = puVar6;
  (*pcVar30)(puVar6,lVar2);
  *(undefined **)(unaff_x22 + 0x88) = puVar8;
  SVar37 = Swift::CustomStringConvertible::get_description();
  FUN_10085c664(SVar37.str,SVar37.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                0x2d746e65746e6f63,0xee006874676e656c);
  puVar8 = puVar6;
  lVar24 = lVar2;
  (*pcVar34)(uVar22,puVar6,lVar2);
  FUN_100701f80();
  (*pcVar20)(uVar22,uVar23);
  FUN_10085c664(puVar8,lVar24,0x646f4d2d7473614c,0xed00006465696669,0x646f6d2d7473616c,
                0xed00006465696669);
  _swift_bridgeObjectRetain(_Var11.unknown);
  FUN_10085c664(_Var14.unknown,_Var11.unknown,0x67615445,&DAT_e400000000000000,0x67617465,
                &DAT_e400000000000000);
  FUN_1006db3a0(lVar19,uVar33,puVar12,uVar17,uVar28,uVar26,lVar2);
  if (uVar33 != 0) {
    lVar24 = *(long *)(*(long *)(unaff_x22 + 0xd8) +
                      (long)*(int *)(*(long *)(unaff_x22 + 0xd0) + 0x4c));
    if (*(long *)(lVar24 + 0x10) == 0) {
LAB_1006da058:
      uVar31 = uVar33;
      FUN_1006d331c(unaff_x22 + 0x48,lVar19,uVar33);
      _swift_bridgeObjectRelease(uVar33);
      lVar19 = *(long *)(unaff_x22 + 0x58);
      if (lVar19 == 0) goto LAB_1006da118;
      uVar17 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x60);
      uVar32 = *(ulong *)(unaff_x22 + 0x68);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x50);
      uVar3 = *(undefined1 *)(unaff_x22 + 0x48);
    }
    else {
      _swift_bridgeObjectRetain(lVar24);
      lVar27 = lVar19;
      uVar31 = uVar33;
      FUN_10046483c();
      if ((uVar31 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar24);
        goto LAB_1006da058;
      }
      puVar21 = (undefined1 *)(*(long *)(lVar24 + 0x38) + lVar27 * 0x38);
      uVar3 = *puVar21;
      uVar23 = *(undefined8 *)(puVar21 + 8);
      lVar19 = *(long *)(puVar21 + 0x10);
      uVar26 = *(undefined8 *)(puVar21 + 0x18);
      uVar32 = *(ulong *)(puVar21 + 0x20);
      uVar17 = *(undefined8 *)(puVar21 + 0x28);
      uVar22 = *(undefined8 *)(puVar21 + 0x30);
      _swift_bridgeObjectRetain(lVar19);
      uVar31 = uVar32;
      FUN_1006bcff0(uVar26,uVar32,uVar17,uVar22);
      _swift_bridgeObjectRelease(lVar24);
      _swift_bridgeObjectRelease(uVar33);
    }
    *(undefined1 *)(unaff_x22 + 0x10) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x18) = uVar23;
    *(long *)(unaff_x22 + 0x20) = lVar19;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar26;
    *(ulong *)(unaff_x22 + 0x30) = uVar32;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar17;
    *(undefined8 *)(unaff_x22 + 0x40) = uVar22;
    FUN_1006cfc74();
    _swift_bridgeObjectRelease(lVar19);
    FUN_1006bf814(uVar26,uVar32,uVar17,uVar22);
    FUN_10085c664(uVar33,uVar31,0x2d746e65746e6f43,0xec00000065707954,0x2d746e65746e6f63,
                  0xec00000065707974);
  }
LAB_1006da118:
  puVar29 = *(undefined8 **)(unaff_x22 + 0xd8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xb0);
  lVar24 = *(long *)(unaff_x22 + 0xb8);
  FUN_10085c664(0x7365747962,&DAT_e500000000000000,0x522d747065636341,0xed00007365676e61,
                0x722d747065636361,0xed00007365676e61);
  FUN_1006bf090(uVar23,lVar24,*puVar29);
  if (lVar24 != 0) {
    FUN_10085c664();
  }
  uVar23 = *(undefined8 *)(*(long *)(unaff_x22 + 200) + 0xb8);
  lVar24 = 0x2d656e6f4e2d6649;
  FUN_10085ca84(0x2d656e6f4e2d6649,0xed0000686374614d,0x2d656e6f6e2d6669,0xed0000686374616d,uVar23);
  if (*(long *)(lVar24 + 0x10) != 0) {
    plVar25 = (long *)(lVar24 + 0x28);
    lVar19 = *(long *)(lVar24 + 0x10) + 1;
    do {
      lVar19 = lVar19 + -1;
      if (lVar19 == 0) {
        _swift_bridgeObjectRelease(lVar24);
        _swift_bridgeObjectRelease(_Var11.unknown);
        goto LAB_1006da39c;
      }
      plVar1 = plVar25 + -1;
      if (_Var14.unknown == (undefined *)*plVar1 && _Var11.unknown == (undefined *)*plVar25) break;
      plVar25 = plVar25 + 2;
      bVar4 = Swift::_stringCompareWithSmolCheck
                        (_Var14,_Var11,(_StringComparisonResult)(__int8)(undefined *)*plVar1);
    } while (!bVar4);
    _swift_bridgeObjectRelease(lVar24);
    _swift_bridgeObjectRelease(_Var11.unknown);
LAB_1006da260:
    uVar33 = 0;
    puVar21 = (undefined1 *)0x0;
    uVar23 = 0;
    goto LAB_1006da7d8;
  }
  _swift_bridgeObjectRelease(lVar24);
  _swift_bridgeObjectRelease(_Var11.unknown);
  lVar24 = -0x7ffffffeff24f3f0;
  FUN_10085c5ec(0xd000000000000011,0x8000000100db0c10,0xd000000000000011,0x8000000100db0c30,uVar23);
  if (lVar24 != 0) {
    uVar23 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar24 = *(long *)(unaff_x22 + 0xf0);
    uVar26 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_100701c70(uVar26);
    (**(code **)(lVar24 + 0x30))(uVar26,1,uVar23);
    if ((int)uVar26 == 1) {
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0xe0),&DAT_100fdbf88,&DAT_100c6f990);
    }
    else {
      uVar23 = *(undefined8 *)(unaff_x22 + 0xf8);
      DVar7.unknown = *(undefined **)(unaff_x22 + 0x100);
      uVar26 = *(undefined8 *)(unaff_x22 + 0xe8);
      (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x20))
                (uVar23,*(undefined8 *)(unaff_x22 + 0xe0),uVar26);
      DVar9.unknown = puVar6;
      (*pcVar34)(DVar7.unknown,puVar6,lVar2);
      dVar35 = Foundation::Date::get_timeIntervalSince1970(DVar9);
      (*pcVar20)(DVar7.unknown,uVar26);
      dVar36 = Foundation::Date::get_timeIntervalSince1970(DVar7);
      (*pcVar20)(uVar23,uVar26);
      if ((double)(long)dVar35 <= dVar36) goto LAB_1006da260;
    }
  }
LAB_1006da39c:
  uVar33 = 0x65676e6152;
  uVar16 = 0x676e6172;
  puVar13 = &DAT_e500000000000000;
  FUN_10085c5ec();
  if (puVar13 == (undefined1 *)0x0) {
LAB_1006da7cc:
    uVar33 = 0;
    puVar21 = (undefined1 *)0x0;
    uVar23 = 0x81;
  }
  else {
    puVar21 = puVar13;
    FUN_1006db4a0();
    _swift_bridgeObjectRelease(puVar13);
    if ((uVar16 & 0xff) == 1) {
      uVar23 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
      puVar29 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar10 = puVar29;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar10,0,0);
      puVar10[1] = 0xd000000000000015;
      *puVar10 = 0x1a0;
      puVar10[2] = 0x8000000100db0c50;
      puVar10[3] = puVar29;
      puVar10[4] = 0xd000000000000028;
      puVar10[5] = 0x8000000100db0c70;
      _swift_willThrow();
      _swift_release(puVar5);
      _swift_task_dealloc(uVar26);
      _swift_task_dealloc(uVar23);
      _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001006da4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    _Var11.unknown = (undefined *)0x65676e61522d6649;
    pcVar18 = (char *)0x65676e61722d6669;
    _Var14.unknown = &DAT_e800000000000000;
    puVar13 = &DAT_e800000000000000;
    FUN_10085c5ec();
    if (_Var14.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRetain(_Var14.unknown);
      pcVar18 = (char *)0x67615445;
      puVar15 = &DAT_e400000000000000;
      puVar13 = &DAT_e400000000000000;
      FUN_10085c5ec(0x67615445,&DAT_e400000000000000,0x67617465,&DAT_e400000000000000,puVar5);
      if (puVar15 == (undefined1 *)0x0) {
        _swift_bridgeObjectRelease(_Var14.unknown);
LAB_1006da57c:
        pcVar18 = (char *)0x646f4d2d7473614c;
        puVar15 = (undefined1 *)0xed00006465696669;
        puVar13 = puVar15;
        FUN_10085c5ec(0x646f4d2d7473614c,0xed00006465696669,0x646f6d2d7473616c,0xed00006465696669,
                      puVar5);
        if (puVar15 == (undefined1 *)0x0) {
          _swift_bridgeObjectRelease(_Var14.unknown);
        }
        else {
          if ((_Var11.unknown == pcVar18) && (_Var14.unknown == puVar15)) goto LAB_1006da5d4;
          puVar13 = puVar15;
          bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var11,_Var14,(_StringComparisonResult)(__int8)pcVar18);
          _swift_bridgeObjectRelease(puVar15);
          _swift_bridgeObjectRelease(_Var14.unknown);
          if (bVar4) goto LAB_1006da5ec;
        }
        goto LAB_1006da7cc;
      }
      if ((_Var11.unknown == pcVar18) && (_Var14.unknown == puVar15)) {
        _swift_bridgeObjectRelease(_Var14.unknown);
LAB_1006da5d4:
        _swift_bridgeObjectRelease(_Var14.unknown);
        _Var14.unknown = puVar15;
      }
      else {
        puVar13 = puVar15;
        bVar4 = Swift::_stringCompareWithSmolCheck
                          (_Var11,_Var14,(_StringComparisonResult)(__int8)pcVar18);
        _swift_bridgeObjectRelease(puVar15);
        _swift_bridgeObjectRelease(_Var14.unknown);
        if (!bVar4) goto LAB_1006da57c;
      }
      _swift_bridgeObjectRelease(_Var14.unknown);
    }
LAB_1006da5ec:
    puVar8 = puVar6;
    (*pcVar30)(puVar6,lVar2);
    if (SBORROW8((long)puVar8,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1006da838);
      (*pcVar20)();
    }
    uVar31 = uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU);
    puVar15 = puVar8 + -1;
    if ((long)puVar21 <= (long)(puVar8 + -1)) {
      puVar15 = puVar21;
    }
    *(ulong *)(unaff_x22 + 0x90) = uVar31;
    SVar37 = Swift::CustomStringConvertible::get_description();
    SVar39.bridgeObject = puVar13;
    SVar39.str = pcVar18;
    Swift::String::append(SVar37,SVar39);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar37.bridgeObject = (void *)0xe100000000000000;
    SVar37.str = (char *)0x2d;
    SVar40.bridgeObject = puVar13;
    SVar40.str = pcVar18;
    Swift::String::append(SVar37,SVar40);
    *(undefined1 **)(unaff_x22 + 0x98) = puVar15;
    SVar37 = Swift::CustomStringConvertible::get_description();
    SVar41.bridgeObject = puVar13;
    SVar41.str = pcVar18;
    Swift::String::append(SVar37,SVar41);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    SVar38.bridgeObject = (void *)0xe100000000000000;
    SVar38.str = (char *)0x2f;
    SVar42.bridgeObject = puVar13;
    SVar42.str = pcVar18;
    Swift::String::append(SVar38,SVar42);
    (*pcVar30)(puVar6,lVar2);
    *(undefined **)(unaff_x22 + 0xa0) = puVar6;
    SVar37 = Swift::CustomStringConvertible::get_description();
    SVar43.bridgeObject = puVar13;
    SVar43.str = pcVar18;
    Swift::String::append(SVar37,SVar43);
    _swift_bridgeObjectRelease(SVar37.bridgeObject);
    FUN_10085c664(0x207365747962,&DAT_e600000000000000,0x2d746e65746e6f43,0xed000065676e6152,
                  0x2d746e65746e6f63,0xed000065676e6172);
    if (SBORROW8((long)puVar15,uVar31)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1006da83c);
      (*pcVar20)();
    }
    if (SCARRY8((long)puVar15 - uVar31,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1006da840);
      (*pcVar20)();
    }
    *(ulong *)(unaff_x22 + 0xa8) = ((long)puVar15 - uVar31) + 1;
    SVar37 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar37.str,SVar37.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    uVar23 = 0x80;
  }
LAB_1006da7d8:
  uVar26 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x100));
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x0001006da830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5,uVar33,puVar21,uVar23);
  return;
}



/* Address: 0x1006da840 | FUN_1006da840 */

void FUN_1006da840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(param_6 + 0x18);
  uVar2 = *(undefined8 *)(param_6 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(param_6 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(param_6 + 0x30);
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006da8e8;
  FUN_1006d6cdc(plVar1,unaff_x22 + 0x58,param_2,param_3,&DAT_100c71d68,unaff_x22 + 0x10,param_6);
  return;
}



/* Address: 0x1006da8e8 | FUN_1006da8e8 */

void FUN_1006da8e8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0xa0);
    uVar4 = *(undefined8 *)(lVar2 + 0x58);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x60);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x70);
    uVar4 = *(undefined8 *)(lVar2 + 0x68);
    uVar7 = *(undefined8 *)(lVar2 + 0x80);
    uVar6 = *(undefined8 *)(lVar2 + 0x78);
    uVar9 = *(undefined8 *)(lVar2 + 0x90);
    uVar8 = *(undefined8 *)(lVar2 + 0x88);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x98);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006da954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006da958 | FUN_1006da958 */

void FUN_1006da958(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006da9d8;
                    /* WARNING: Could not recover jumptable at 0x0001006da9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,unaff_x22 + 0x10,param_2,param_3);
  return;
}



/* Address: 0x1006da9d8 | FUN_1006da9d8 */

void FUN_1006da9d8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x58);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    uVar5 = *(undefined8 *)(lVar2 + 0x28);
    uVar4 = *(undefined8 *)(lVar2 + 0x20);
    uVar7 = *(undefined8 *)(lVar2 + 0x38);
    uVar6 = *(undefined8 *)(lVar2 + 0x30);
    uVar9 = *(undefined8 *)(lVar2 + 0x48);
    uVar8 = *(undefined8 *)(lVar2 + 0x40);
    *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
    puVar1[5] = uVar7;
    puVar1[4] = uVar6;
    puVar1[7] = uVar9;
    puVar1[6] = uVar8;
    puVar1[3] = uVar5;
    puVar1[2] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006daa40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006daa44 | thunk_FUN_1006daa48 */

bool thunk_FUN_1006daa48(Scalar param_1)

{
  long lVar1;
  long lVar2;
  NumericType NVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  Properties PVar8;
  Properties PVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lStack_70;
  long lStack_68;
  long lVar5;
  
  NVar3 = Swift::Unicode::NumericType::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,NVar3.value);
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&lStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fdd3d0;
  lStack_70 = lVar12;
  FUN_1000f7830(&DAT_100fdd3d0,&DAT_100c71d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  puVar7 = &DAT_100fdd3d8;
  FUN_1000f7830(&DAT_100fdd3d8,&DAT_100c71d90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_68 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar11 - extraout_x12_00;
  PVar8 = Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  lVar16 = *(long *)(PVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  PVar9 = Swift::Unicode::Scalar::get_properties(param_1);
  Swift::Unicode::Scalar::Properties::_get_numericType(PVar9);
  (**(code **)(lVar16 + 8))(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),PVar8.unknown);
  (**(code **)(lVar15 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___enum_case_for_Swift_Unicode_NumericType_decimal_Swift_Unicode_NumericType_Type___>_Swift_Unicode_NumericType_100eadf30
             ,lVar5);
  (**(code **)(lVar15 + 0x38))(lVar11,0,1,lVar5);
  lVar16 = (long)*(int *)(puVar6 + 0x30);
  FUN_1000f8cac(lVar13,lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
  FUN_1000f8cac(lVar11,lVar12 + lVar16,&DAT_100fdd3d8,&DAT_100c71d90);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar12;
  (*pcVar14)(lVar12,1,lVar5);
  lVar2 = lStack_68;
  if ((int)lVar10 == 1) {
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar16 = lVar12 + lVar16;
    (*pcVar14)(lVar16,1,lVar5);
    if ((int)lVar16 == 1) {
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return true;
    }
  }
  else {
    FUN_1000f8cac(lVar12,lStack_68,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar10 = lVar12 + lVar16;
    (*pcVar14)(lVar10,1,lVar5);
    lVar1 = lStack_70;
    if ((int)lVar10 != 1) {
      (**(code **)(lVar15 + 0x20))(lStack_70,lVar12 + lVar16,lVar5);
      bVar4 = Swift::Equatable::___infix
                        (lVar2,lVar1,lVar5,
                         PTR___protocol_witness_table_for_Swift_Unicode_NumericType___Swift_Equatable_in_Swift_100eadf48
                        );
      pcVar14 = *(code **)(lVar15 + 8);
      (*pcVar14)(lVar1,lVar5);
      FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
      FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
      (*pcVar14)(lVar2,lVar5);
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return bVar4;
    }
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    (**(code **)(lVar15 + 8))(lVar2,lVar5);
  }
  FUN_1000fb4c4(lVar12,&DAT_100fdd3d0,&DAT_100c71d88);
  return false;
}



/* Address: 0x1006daa48 | FUN_1006daa48 */

bool FUN_1006daa48(Scalar param_1)

{
  long lVar1;
  long lVar2;
  NumericType NVar3;
  bool bVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  Properties PVar8;
  Properties PVar9;
  long lVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long local_70;
  long local_68;
  long lVar5;
  
  NVar3 = Swift::Unicode::NumericType::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,NVar3.value);
  lVar15 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fdd3d0;
  local_70 = lVar12;
  FUN_1000f7830(&DAT_100fdd3d0,&DAT_100c71d88);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar12 - extraout_x8_00;
  puVar7 = &DAT_100fdd3d8;
  FUN_1000f7830(&DAT_100fdd3d8,&DAT_100c71d90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_68 = lVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar11 - extraout_x12_00;
  PVar8 = Swift::Unicode::Scalar::Properties::typeMetadataAccessor();
  lVar16 = *(long *)(PVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  PVar9 = Swift::Unicode::Scalar::get_properties(param_1);
  Swift::Unicode::Scalar::Properties::_get_numericType(PVar9);
  (**(code **)(lVar16 + 8))(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),PVar8.unknown);
  (**(code **)(lVar15 + 0x68))
            (lVar11,*(undefined4 *)
                     PTR___enum_case_for_Swift_Unicode_NumericType_decimal_Swift_Unicode_NumericType_Type___>_Swift_Unicode_NumericType_100eadf30
             ,lVar5);
  (**(code **)(lVar15 + 0x38))(lVar11,0,1,lVar5);
  lVar16 = (long)*(int *)(puVar6 + 0x30);
  FUN_1000f8cac(lVar13,lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
  FUN_1000f8cac(lVar11,lVar12 + lVar16,&DAT_100fdd3d8,&DAT_100c71d90);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar10 = lVar12;
  (*pcVar14)(lVar12,1,lVar5);
  lVar2 = local_68;
  if ((int)lVar10 == 1) {
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar16 = lVar12 + lVar16;
    (*pcVar14)(lVar16,1,lVar5);
    if ((int)lVar16 == 1) {
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return true;
    }
  }
  else {
    FUN_1000f8cac(lVar12,local_68,&DAT_100fdd3d8,&DAT_100c71d90);
    lVar10 = lVar12 + lVar16;
    (*pcVar14)(lVar10,1,lVar5);
    lVar1 = local_70;
    if ((int)lVar10 != 1) {
      (**(code **)(lVar15 + 0x20))(local_70,lVar12 + lVar16,lVar5);
      bVar4 = Swift::Equatable::___infix
                        (lVar2,lVar1,lVar5,
                         PTR___protocol_witness_table_for_Swift_Unicode_NumericType___Swift_Equatable_in_Swift_100eadf48
                        );
      pcVar14 = *(code **)(lVar15 + 8);
      (*pcVar14)(lVar1,lVar5);
      FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
      FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
      (*pcVar14)(lVar2,lVar5);
      FUN_1000fb4c4(lVar12,&DAT_100fdd3d8,&DAT_100c71d90);
      return bVar4;
    }
    FUN_1000fb4c4(lVar11,&DAT_100fdd3d8,&DAT_100c71d90);
    FUN_1000fb4c4(lVar13,&DAT_100fdd3d8,&DAT_100c71d90);
    (**(code **)(lVar15 + 8))(lVar2,lVar5);
  }
  FUN_1000fb4c4(lVar12,&DAT_100fdd3d0,&DAT_100c71d88);
  return false;
}



/* Address: 0x1006dade4 | FUN_1006dade4 */

void FUN_1006dade4(undefined8 *param_1,undefined8 *param_2,_StringObject param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  __uint8 _Var4;
  Index after;
  UnsafeBufferPointer<__int8> UVar5;
  Index position;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *local_70;
  ulong uStack_68;
  
  param_1 = (undefined8 *)*param_1;
  uVar2 = (ulong)param_3.unknown & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar2 = param_4 >> 0x38 & 0xf;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if (uVar2 != 0) {
    lVar9 = 0;
    uVar6 = (uint)((ulong)param_3.unknown >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar7 = 4L << uVar6;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar8 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
      }
      if (uVar2 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006daf90);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
          }
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          UVar5.unknown = (undefined *)&local_70;
        }
        _Var4 = *(__uint8 *)((long)UVar5.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
        if (uVar8 != uVar7) goto LAB_1006daec0;
LAB_1006daf18:
        FUN_1000740a8(after.cmsgPointer.unknown,param_3.unknown,param_4);
        if ((param_4 >> 0x3c & 1) != 0) goto LAB_1006daf28;
LAB_1006daec4:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var4 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_3.unknown);
        if (uVar8 == uVar7) goto LAB_1006daf18;
LAB_1006daec0:
        if ((param_4 >> 0x3c & 1) == 0) goto LAB_1006daec4;
LAB_1006daf28:
        if (uVar2 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006daf98);
          (*pcVar3)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_3.unknown);
      }
      *(byte *)((long)param_1 + lVar9) = *(byte *)((long)param_1 + lVar9) ^ _Var4;
      lVar1 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006daf94);
        (*pcVar3)();
      }
      lVar9 = 0;
      if (lVar1 != 0x10) {
        lVar9 = lVar1;
      }
    } while (uVar2 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  *param_2 = 0x10;
  return;
}



/* Address: 0x1006daf98 | FUN_1006daf98 */

String FUN_1006daf98(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  char *pcVar6;
  undefined *puVar7;
  char *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  String SVar11;
  String repeating;
  String SVar12;
  String local_78;
  char *local_68;
  void *pvVar5;
  
  lVar9 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar3 = 0;
  FUN_1006bf7c0(0,lVar9,0);
  pcVar8 = local_68;
  if (lVar9 != 0) {
    FUN_1006dce38();
    puVar10 = (undefined1 *)(param_1 + 0x20);
    do {
      local_78.str._0_1_ = *puVar10;
      puVar7 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      SVar11 = Swift::String::_init
                         (&local_78,0x10,0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,uVar3);
      _Var4 = Swift::String::get_count(SVar11);
      pcVar6 = (char *)(2 - _Var4);
      if (SBORROW8(2,_Var4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006db130);
        (*pcVar2)();
      }
      repeating.bridgeObject = (void *)0xe100000000000000;
      repeating.str = &DAT_00000030;
      local_78 = Swift::String::init(repeating,(__int64)pcVar6);
      pvVar5 = local_78.bridgeObject;
      _swift_bridgeObjectRetain(pvVar5);
      SVar12.bridgeObject = puVar7;
      SVar12.str = pcVar6;
      Swift::String::append(SVar11,SVar12);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      _swift_bridgeObjectRelease(pvVar5);
      pcVar6 = local_78.str;
      pvVar5 = local_78.bridgeObject;
      uVar1 = *(ulong *)(pcVar8 + 0x10);
      local_68 = pcVar8;
      if (*(ulong *)(pcVar8 + 0x18) >> 1 <= uVar1) {
        FUN_1006bf7c0(1 < *(ulong *)(pcVar8 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(char **)(local_68 + uVar1 * 0x10 + 0x20) = pcVar6;
      *(void **)(local_68 + uVar1 * 0x10 + 0x28) = pvVar5;
      lVar9 = lVar9 + -1;
      pcVar8 = local_68;
      puVar10 = puVar10 + 1;
    } while (lVar9 != 0);
  }
  pcVar8 = local_68;
  local_78.str = local_68;
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  FUN_1006b7a54();
  SVar11 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_release(pcVar8);
  return SVar11;
}



/* Address: 0x1006db130 | FUN_1006db130 */

void FUN_1006db130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[3];
  uVar6 = param_2[4];
  uVar3 = param_2[5];
  uVar7 = param_2[6];
  uVar4 = param_2[7];
  uVar8 = param_2[8];
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = uVar2;
  param_1[4] = uVar6;
  param_1[5] = uVar3;
  param_1[6] = uVar7;
  param_1[7] = uVar4;
  param_1[8] = uVar8;
  *param_1 = uVar1;
  param_1[1] = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1006bcff0(uVar3,uVar7,uVar4,uVar8);
  return;
}



/* Address: 0x1006db1a0 | FUN_1006db1a0 */

undefined1  [16] FUN_1006db1a0(undefined *param_1,undefined *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  char *pcVar5;
  void *pvVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  _Var3.unknown = param_1;
  _Var4.unknown = param_2;
  pcVar5 = param_3;
  pvVar6 = param_4;
  FUN_1006d60e4();
  if (_Var4.unknown == (undefined *)0x0) {
LAB_1006db224:
    _swift_bridgeObjectRetain(param_2);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x2f;
    SVar9.bridgeObject = pvVar6;
    SVar9.str = pcVar5;
    Swift::String::append(SVar7,SVar9);
  }
  else {
    if ((_Var3.unknown == (undefined *)0x2f) && (_Var4.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      pcVar5 = (char *)0x2f;
      pvVar6 = (void *)0xe100000000000000;
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var4,(_StringComparisonResult)0x2f);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (!bVar2) goto LAB_1006db224;
    }
    _swift_bridgeObjectRetain(param_2);
  }
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  SVar10.bridgeObject = pvVar6;
  SVar10.str = pcVar5;
  Swift::String::append(SVar8,SVar10);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1006db26c | FUN_1006db26c */

/* WARNING: Removing unreachable block (ram,0x0001006db388) */
/* WARNING: Removing unreachable block (ram,0x0001006db38c) */
/* WARNING: Removing unreachable block (ram,0x0001006db390) */

undefined1  [16] FUN_1006db26c(undefined *param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  _ContiguousArrayBuffer<undefined> _Var4;
  long *plVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined *local_48;
  undefined8 local_40;
  long local_38;
  void *pvVar5;
  
  local_48 = param_1;
  FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
  FUN_1006b7a54();
  SVar7.bridgeObject = (void *)0xe100000000000000;
  SVar7.str = (char *)0x2d;
  SVar7 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar7);
  pvVar5 = SVar7.bridgeObject;
  _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized
                    (0x10,PTR___type_metadata_for_Swift_UInt8_100eadcd0);
  *(undefined8 *)(_Var3.unknown + 0x10) = 0x10;
  local_48 = _Var3.unknown + 0x20;
  local_40 = 0x10;
  local_38 = 0;
  plVar6 = &local_38;
  FUN_1006dade4(&local_48);
  if (0x10 < local_38) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006db388);
    (*pcVar2)();
  }
  *(long *)(_Var3.unknown + 0x10) = local_38;
  _swift_bridgeObjectRelease(pvVar5);
  local_48 = (undefined *)0x222f57;
  local_40 = 0xe300000000000000;
  _Var4 = _Var3;
  FUN_1006daf98();
  _swift_release(_Var3.unknown);
  SVar8.bridgeObject = plVar6;
  SVar8.str = _Var4.unknown;
  Swift::String::append(SVar8,SVar7);
  _swift_bridgeObjectRelease(plVar6);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x22;
  Swift::String::append(SVar9,SVar7);
  auVar1._8_8_ = local_40;
  auVar1._0_8_ = local_48;
  return auVar1;
}



/* Address: 0x1006db3a0 | FUN_1006db3a0 */

String FUN_1006db3a0(char *param_1,void *param_2)

{
  Index IVar1;
  uint uVar2;
  void *pvVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  undefined *local_60;
  char *pcStack_58;
  void *local_50;
  void *pvStack_48;
  
  IVar1.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x2e;
  uVar2 = 0;
  pvVar4 = param_2;
  FUN_1001063f4(0x2e,0xe100000000000000,param_1);
  if ((uVar2 & 0xff) == 1) {
    SVar6 = (String)ZEXT816(0);
  }
  else {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    IVar1 = Swift::String::index(IVar1,SVar6);
    _swift_bridgeObjectRetain(param_2);
    pvVar3 = param_2;
    FUN_1000102ac();
    _swift_bridgeObjectRelease(param_2);
    local_60 = (undefined *)IVar1.cmsgPointer.unknown;
    pcStack_58 = param_1;
    local_50 = pvVar3;
    pvStack_48 = pvVar4;
    FUN_1006cc4e0();
    _swift_bridgeObjectRetain(pvVar4);
    SVar5 = Swift::String::_init
                      (&local_60,PTR___type_metadata_for_Swift_Substring_100eaca98,
                       PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                       ,param_2);
    SVar6 = Swift::String::lowercased(SVar5);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    _swift_bridgeObjectRelease(pvVar4);
  }
  return SVar6;
}



/* Address: 0x1006db4a0 | FUN_1006db4a0 */

/* WARNING: Removing unreachable block (ram,0x0001006db554) */
/* WARNING: Removing unreachable block (ram,0x0001006db4fc) */
/* WARNING: Removing unreachable block (ram,0x0001006db500) */

undefined *
FUN_1006db4a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 uVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  _StringGuts _Var9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  byte *pbVar13;
  UnsafeBufferPointer<__int8> UVar14;
  uint uVar15;
  undefined *puVar16;
  undefined *local_78;
  ulong uStack_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  _swift_bridgeObjectRetain(param_2);
  FUN_100a316ac();
  uVar3 = 0;
  local_60 = param_1;
  uStack_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_4;
  FUN_100a31dbc(0x3d7365747962,&DAT_e600000000000000);
  uVar4 = local_60;
  if ((uVar3 & 1) == 0) goto LAB_1006dbdb4;
  pcVar1 = thunk_FUN_1006daa48;
  _Var5.unknown = (undefined *)0x0;
  FUN_100a32814();
  _Var7.unknown = pcVar1;
  FUN_100a31278();
  _swift_bridgeObjectRelease(pcVar1);
  uVar3 = 0x2d;
  FUN_100a31dbc(0x2d,0xe100000000000000);
  if ((uVar3 & 1) != 0) {
    pcVar1 = thunk_FUN_1006daa48;
    _Var6.unknown = (undefined *)0x0;
    FUN_100a32814();
    _Var9.unknown = pcVar1;
    FUN_100a31278();
    _swift_bridgeObjectRelease(pcVar1);
    if (((_Var7.unknown == (undefined *)0x0) && (_Var5.unknown == (undefined *)0xe000000000000000))
       || (bVar2 = Swift::_stringCompareWithSmolCheck(_Var7,_Var5,(_StringComparisonResult)0x0),
          bVar2)) {
      _swift_bridgeObjectRelease(_Var5.unknown);
      _Var7.unknown = _Var9.unknown & 0xffffffffffff;
      puVar12 = (undefined *)((ulong)_Var6.unknown >> 0x38 & 0xf);
      puVar16 = _Var7.unknown;
      if (((ulong)_Var6.unknown & 0x2000000000000000) != 0) {
        puVar16 = puVar12;
      }
      if (puVar16 != (undefined *)0x0) {
        if (((ulong)_Var6.unknown >> 0x3c & 1) != 0) {
          _Var7.unknown = _Var6.unknown;
          thunk_FUN_1006c9d88(_Var9.unknown,_Var6.unknown,10);
          uVar15 = (uint)_Var7.unknown;
          goto LAB_1006db900;
        }
        if (((ulong)_Var6.unknown >> 0x3d & 1) == 0) {
          if (((ulong)_Var9.unknown >> 0x3c & 1) == 0) {
            _Var7.unknown = _Var6.unknown;
            UVar14 = Swift::_StringObject::get_sharedUTF8(_Var9.unknown);
          }
          else {
            UVar14.unknown = (undefined *)(((ulong)_Var6.unknown & 0xfffffffffffffff) + 0x20);
          }
          if (*UVar14.unknown == 0x2b) {
            if ((long)_Var7.unknown < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc0e4);
              (*pcVar1)();
            }
            puVar16 = _Var7.unknown + -1;
            if (puVar16 != (undefined *)0x0) {
              _Var9.unknown = (undefined *)0x0;
              do {
                UVar14.unknown = UVar14.unknown + 1;
                if (((9 < (byte)*UVar14.unknown - 0x30) ||
                    (lVar10 = (long)_Var9.unknown * 10,
                    SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                   _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006db8f8;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
              } while (puVar16 != (undefined *)0x0);
              goto LAB_1006db900;
            }
          }
          else if (*UVar14.unknown == 0x2d) {
            if ((long)_Var7.unknown < 1) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc0dc);
              (*pcVar1)();
            }
            puVar16 = _Var7.unknown + -1;
            if (puVar16 != (undefined *)0x0) {
              _Var9.unknown = (undefined *)0x0;
              do {
                UVar14.unknown = UVar14.unknown + 1;
                if (((9 < (byte)*UVar14.unknown - 0x30) ||
                    (lVar10 = (long)_Var9.unknown * 10,
                    SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                   _Var9.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                goto LAB_1006db8f8;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
              } while (puVar16 != (undefined *)0x0);
              goto LAB_1006db900;
            }
          }
          else if (_Var7.unknown != (undefined *)0x0) {
            _Var9.unknown = (undefined *)0x0;
            if (UVar14.unknown == (byte *)0x0) {
              uVar15 = 0;
            }
            else {
              do {
                if (((9 < (byte)*UVar14.unknown - 0x30) ||
                    (lVar10 = (long)_Var9.unknown * 10,
                    SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                   _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006db8f8;
                uVar15 = 0;
                _Var7.unknown = _Var7.unknown + -1;
                UVar14.unknown = UVar14.unknown + 1;
              } while (_Var7.unknown != (undefined *)0x0);
            }
            goto LAB_1006db900;
          }
        }
        else {
          local_78 = _Var9.unknown;
          uStack_70 = (ulong)_Var6.unknown & 0xffffffffffffff;
          uVar15 = (uint)_Var9.unknown & 0xff;
          if (uVar15 == 0x2b) {
            if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc0e8);
              (*pcVar1)();
            }
            puVar12 = puVar12 + -1;
            if (puVar12 != (undefined *)0x0) {
              _Var9.unknown = (undefined *)0x0;
              pbVar13 = (byte *)((ulong)&local_78 | 1);
              do {
                if (((9 < *pbVar13 - 0x30) ||
                    (lVar10 = (long)_Var9.unknown * 10,
                    SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                   _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006db8f8;
                uVar15 = 0;
                puVar12 = puVar12 + -1;
                pbVar13 = pbVar13 + 1;
              } while (puVar12 != (undefined *)0x0);
              goto LAB_1006db900;
            }
          }
          else if (uVar15 == 0x2d) {
            if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc0e0);
              (*pcVar1)();
            }
            puVar12 = puVar12 + -1;
            if (puVar12 != (undefined *)0x0) {
              _Var9.unknown = (undefined *)0x0;
              pbVar13 = (byte *)((ulong)&local_78 | 1);
              do {
                if (((9 < *pbVar13 - 0x30) ||
                    (lVar10 = (long)_Var9.unknown * 10,
                    SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                   _Var9.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                goto LAB_1006db8f8;
                uVar15 = 0;
                puVar12 = puVar12 + -1;
                pbVar13 = pbVar13 + 1;
              } while (puVar12 != (undefined *)0x0);
              goto LAB_1006db900;
            }
          }
          else if (puVar12 != (undefined *)0x0) {
            _Var9.unknown = (undefined *)0x0;
            ppuVar11 = &local_78;
            do {
              if (((9 < *(byte *)ppuVar11 - 0x30) ||
                  (lVar10 = (long)_Var9.unknown * 10,
                  SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)(*(byte *)ppuVar11 - 0x30),
                 _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
              goto LAB_1006db8f8;
              uVar15 = 0;
              puVar12 = puVar12 + -1;
              ppuVar11 = (undefined **)((long)ppuVar11 + 1);
            } while (puVar12 != (undefined *)0x0);
            goto LAB_1006db900;
          }
        }
LAB_1006db8f8:
        _Var9.unknown = (undefined *)0x0;
        uVar15 = 1;
LAB_1006db900:
        uVar4 = local_60;
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(uVar4);
        if ((uVar15 & 0xff) == 1) {
          return (undefined *)0x0;
        }
        if ((long)_Var9.unknown < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc0b0);
          (*pcVar1)();
        }
        return (undefined *)0x0;
      }
LAB_1006dc07c:
      uVar4 = local_60;
      _swift_bridgeObjectRelease(_Var6.unknown);
      goto LAB_1006dbdb4;
    }
    puVar16 = (undefined *)((ulong)_Var5.unknown >> 0x38 & 0xf);
    if (((_Var9.unknown != (undefined *)0x0) || (_Var6.unknown != (undefined *)0xe000000000000000))
       && (bVar2 = Swift::_stringCompareWithSmolCheck(_Var9,_Var6,(_StringComparisonResult)0x0),
          !bVar2)) {
      _Var8.unknown = _Var7.unknown & 0xffffffffffff;
      puVar12 = _Var8.unknown;
      if (((ulong)_Var5.unknown & 0x2000000000000000) != 0) {
        puVar12 = puVar16;
      }
      if (puVar12 == (undefined *)0x0) {
        _swift_bridgeObjectRelease(_Var5.unknown);
      }
      else {
        if (((ulong)_Var5.unknown >> 0x3c & 1) == 0) {
          if (((ulong)_Var5.unknown >> 0x3d & 1) == 0) {
            if (((ulong)_Var7.unknown >> 0x3c & 1) == 0) {
              _Var8.unknown = _Var5.unknown;
              UVar14 = Swift::_StringObject::get_sharedUTF8(_Var7.unknown);
            }
            else {
              UVar14.unknown = (undefined *)(((ulong)_Var5.unknown & 0xfffffffffffffff) + 0x20);
            }
            if (*UVar14.unknown == 0x2b) {
              if ((long)_Var8.unknown < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc17c);
                (*pcVar1)();
              }
              puVar16 = _Var8.unknown + -1;
              if (puVar16 == (undefined *)0x0) goto LAB_1006dbd8c;
              _Var7.unknown = (undefined *)0x0;
              do {
                UVar14.unknown = UVar14.unknown + 1;
                if (((9 < (byte)*UVar14.unknown - 0x30) ||
                    (lVar10 = (long)_Var7.unknown * 10,
                    SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                   _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006dbd8c;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
              } while (puVar16 != (undefined *)0x0);
            }
            else if (*UVar14.unknown == 0x2d) {
              if ((long)_Var8.unknown < 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc174);
                (*pcVar1)();
              }
              puVar16 = _Var8.unknown + -1;
              if (puVar16 == (undefined *)0x0) {
LAB_1006dbd8c:
                _Var7.unknown = (undefined *)0x0;
                uVar15 = 1;
              }
              else {
                _Var7.unknown = (undefined *)0x0;
                do {
                  UVar14.unknown = UVar14.unknown + 1;
                  if (((9 < (byte)*UVar14.unknown - 0x30) ||
                      (lVar10 = (long)_Var7.unknown * 10,
                      SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                     _Var7.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                  goto LAB_1006dbd8c;
                  uVar15 = 0;
                  puVar16 = puVar16 + -1;
                } while (puVar16 != (undefined *)0x0);
              }
            }
            else {
              if (_Var8.unknown == (undefined *)0x0) goto LAB_1006dbd8c;
              _Var7.unknown = (undefined *)0x0;
              if (UVar14.unknown == (byte *)0x0) {
                uVar15 = 0;
              }
              else {
                do {
                  if (((9 < (byte)*UVar14.unknown - 0x30) ||
                      (lVar10 = (long)_Var7.unknown * 10,
                      SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                     _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                  goto LAB_1006dbd8c;
                  uVar15 = 0;
                  _Var8.unknown = _Var8.unknown + -1;
                  UVar14.unknown = UVar14.unknown + 1;
                } while (_Var8.unknown != (undefined *)0x0);
              }
            }
          }
          else {
            local_78 = _Var7.unknown;
            uStack_70 = (ulong)_Var5.unknown & 0xffffffffffffff;
            uVar15 = (uint)_Var7.unknown & 0xff;
            if (uVar15 == 0x2b) {
              if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc180);
                (*pcVar1)();
              }
              puVar16 = puVar16 + -1;
              if (puVar16 == (undefined *)0x0) goto LAB_1006dbd8c;
              _Var7.unknown = (undefined *)0x0;
              pbVar13 = (byte *)((ulong)&local_78 | 1);
              do {
                if (((9 < *pbVar13 - 0x30) ||
                    (lVar10 = (long)_Var7.unknown * 10,
                    SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                   _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006dbd8c;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
                pbVar13 = pbVar13 + 1;
              } while (puVar16 != (undefined *)0x0);
            }
            else if (uVar15 == 0x2d) {
              if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc178);
                (*pcVar1)();
              }
              puVar16 = puVar16 + -1;
              if (puVar16 == (undefined *)0x0) goto LAB_1006dbd8c;
              _Var7.unknown = (undefined *)0x0;
              pbVar13 = (byte *)((ulong)&local_78 | 1);
              do {
                if (((9 < *pbVar13 - 0x30) ||
                    (lVar10 = (long)_Var7.unknown * 10,
                    SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                   _Var7.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                goto LAB_1006dbd8c;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
                pbVar13 = pbVar13 + 1;
              } while (puVar16 != (undefined *)0x0);
            }
            else {
              if (puVar16 == (undefined *)0x0) goto LAB_1006dbd8c;
              _Var7.unknown = (undefined *)0x0;
              ppuVar11 = &local_78;
              do {
                if (((9 < *(byte *)ppuVar11 - 0x30) ||
                    (lVar10 = (long)_Var7.unknown * 10,
                    SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                   (uVar3 = (ulong)(byte)(*(byte *)ppuVar11 - 0x30),
                   _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                goto LAB_1006dbd8c;
                uVar15 = 0;
                puVar16 = puVar16 + -1;
                ppuVar11 = (undefined **)((long)ppuVar11 + 1);
              } while (puVar16 != (undefined *)0x0);
            }
          }
        }
        else {
          _Var8.unknown = _Var5.unknown;
          thunk_FUN_1006c9d88(_Var7.unknown,_Var5.unknown,10);
          uVar15 = (uint)_Var8.unknown;
        }
        _swift_bridgeObjectRelease(_Var5.unknown);
        if ((uVar15 & 0xff) != 1) {
          _Var5.unknown = _Var9.unknown & 0xffffffffffff;
          puVar12 = (undefined *)((ulong)_Var6.unknown >> 0x38 & 0xf);
          puVar16 = _Var5.unknown;
          if (((ulong)_Var6.unknown & 0x2000000000000000) != 0) {
            puVar16 = puVar12;
          }
          if (puVar16 != (undefined *)0x0) {
            if (((ulong)_Var6.unknown >> 0x3c & 1) != 0) {
              _Var5.unknown = _Var6.unknown;
              thunk_FUN_1006c9d88(_Var9.unknown,_Var6.unknown,10);
              uVar15 = (uint)_Var5.unknown;
              goto LAB_1006dc034;
            }
            if (((ulong)_Var6.unknown >> 0x3d & 1) == 0) {
              if (((ulong)_Var9.unknown >> 0x3c & 1) == 0) {
                _Var5.unknown = _Var6.unknown;
                UVar14 = Swift::_StringObject::get_sharedUTF8(_Var9.unknown);
              }
              else {
                UVar14.unknown = (undefined *)(((ulong)_Var6.unknown & 0xfffffffffffffff) + 0x20);
              }
              if (*UVar14.unknown == 0x2b) {
                if ((long)_Var5.unknown < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc18c);
                  (*pcVar1)();
                }
                puVar16 = _Var5.unknown + -1;
                if (puVar16 != (undefined *)0x0) {
                  _Var9.unknown = (undefined *)0x0;
                  do {
                    UVar14.unknown = UVar14.unknown + 1;
                    if (((9 < (byte)*UVar14.unknown - 0x30) ||
                        (lVar10 = (long)_Var9.unknown * 10,
                        SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                       _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                    goto LAB_1006dc02c;
                    uVar15 = 0;
                    puVar16 = puVar16 + -1;
                  } while (puVar16 != (undefined *)0x0);
                  goto LAB_1006dc034;
                }
              }
              else if (*UVar14.unknown == 0x2d) {
                if ((long)_Var5.unknown < 1) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc184);
                  (*pcVar1)();
                }
                puVar16 = _Var5.unknown + -1;
                if (puVar16 != (undefined *)0x0) {
                  _Var9.unknown = (undefined *)0x0;
                  do {
                    UVar14.unknown = UVar14.unknown + 1;
                    if (((9 < (byte)*UVar14.unknown - 0x30) ||
                        (lVar10 = (long)_Var9.unknown * 10,
                        SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                       _Var9.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                    goto LAB_1006dc02c;
                    uVar15 = 0;
                    puVar16 = puVar16 + -1;
                  } while (puVar16 != (undefined *)0x0);
                  goto LAB_1006dc034;
                }
              }
              else if (_Var5.unknown != (undefined *)0x0) {
                _Var9.unknown = (undefined *)0x0;
                if (UVar14.unknown == (byte *)0x0) {
                  uVar15 = 0;
                }
                else {
                  do {
                    if (((9 < (byte)*UVar14.unknown - 0x30) ||
                        (lVar10 = (long)_Var9.unknown * 10,
                        SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                       _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                    goto LAB_1006dc02c;
                    uVar15 = 0;
                    _Var5.unknown = _Var5.unknown + -1;
                    UVar14.unknown = UVar14.unknown + 1;
                  } while (_Var5.unknown != (undefined *)0x0);
                }
                goto LAB_1006dc034;
              }
            }
            else {
              local_78 = _Var9.unknown;
              uStack_70 = (ulong)_Var6.unknown & 0xffffffffffffff;
              uVar15 = (uint)_Var9.unknown & 0xff;
              if (uVar15 == 0x2b) {
                if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc190);
                  (*pcVar1)();
                }
                puVar12 = puVar12 + -1;
                if (puVar12 != (undefined *)0x0) {
                  _Var9.unknown = (undefined *)0x0;
                  pbVar13 = (byte *)((ulong)&local_78 | 1);
                  do {
                    if (((9 < *pbVar13 - 0x30) ||
                        (lVar10 = (long)_Var9.unknown * 10,
                        SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                       _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                    goto LAB_1006dc02c;
                    uVar15 = 0;
                    puVar12 = puVar12 + -1;
                    pbVar13 = pbVar13 + 1;
                  } while (puVar12 != (undefined *)0x0);
                  goto LAB_1006dc034;
                }
              }
              else if (uVar15 == 0x2d) {
                if (puVar12 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc188);
                  (*pcVar1)();
                }
                puVar12 = puVar12 + -1;
                if (puVar12 != (undefined *)0x0) {
                  _Var9.unknown = (undefined *)0x0;
                  pbVar13 = (byte *)((ulong)&local_78 | 1);
                  do {
                    if (((9 < *pbVar13 - 0x30) ||
                        (lVar10 = (long)_Var9.unknown * 10,
                        SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                       (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                       _Var9.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
                    goto LAB_1006dc02c;
                    uVar15 = 0;
                    puVar12 = puVar12 + -1;
                    pbVar13 = pbVar13 + 1;
                  } while (puVar12 != (undefined *)0x0);
                  goto LAB_1006dc034;
                }
              }
              else if (puVar12 != (undefined *)0x0) {
                _Var9.unknown = (undefined *)0x0;
                ppuVar11 = &local_78;
                do {
                  if (((9 < *(byte *)ppuVar11 - 0x30) ||
                      (lVar10 = (long)_Var9.unknown * 10,
                      SUB168(SEXT816((long)_Var9.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                     (uVar3 = (ulong)(byte)(*(byte *)ppuVar11 - 0x30),
                     _Var9.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
                  goto LAB_1006dc02c;
                  uVar15 = 0;
                  puVar12 = puVar12 + -1;
                  ppuVar11 = (undefined **)((long)ppuVar11 + 1);
                } while (puVar12 != (undefined *)0x0);
                goto LAB_1006dc034;
              }
            }
LAB_1006dc02c:
            _Var9.unknown = (undefined *)0x0;
            uVar15 = 1;
LAB_1006dc034:
            uVar4 = local_60;
            _swift_bridgeObjectRelease(_Var6.unknown);
            _swift_bridgeObjectRelease(uVar4);
            if ((uVar15 & 0xff) == 1) {
              return (undefined *)0x0;
            }
            if ((long)_Var9.unknown < (long)_Var7.unknown) {
              return (undefined *)0x0;
            }
            return _Var7.unknown;
          }
          goto LAB_1006dc07c;
        }
      }
      _swift_bridgeObjectRelease(_Var6.unknown);
      uVar4 = local_60;
      goto LAB_1006dbdb4;
    }
    _swift_bridgeObjectRelease(_Var6.unknown);
    _Var9.unknown = _Var7.unknown & 0xffffffffffff;
    puVar12 = _Var9.unknown;
    if (((ulong)_Var5.unknown & 0x2000000000000000) != 0) {
      puVar12 = puVar16;
    }
    if (puVar12 != (undefined *)0x0) {
      if (((ulong)_Var5.unknown >> 0x3c & 1) != 0) {
        _Var9.unknown = _Var5.unknown;
        thunk_FUN_1006c9d88(_Var7.unknown,_Var5.unknown,10);
        uVar15 = (uint)_Var9.unknown;
        goto LAB_1006dbc08;
      }
      if (((ulong)_Var5.unknown >> 0x3d & 1) == 0) {
        if (((ulong)_Var7.unknown >> 0x3c & 1) == 0) {
          _Var9.unknown = _Var5.unknown;
          UVar14 = Swift::_StringObject::get_sharedUTF8(_Var7.unknown);
        }
        else {
          UVar14.unknown = (undefined *)(((ulong)_Var5.unknown & 0xfffffffffffffff) + 0x20);
        }
        if (*UVar14.unknown == 0x2b) {
          if ((long)_Var9.unknown < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc130);
            (*pcVar1)();
          }
          puVar16 = _Var9.unknown + -1;
          if (puVar16 != (undefined *)0x0) {
            _Var7.unknown = (undefined *)0x0;
            do {
              UVar14.unknown = UVar14.unknown + 1;
              if (((9 < (byte)*UVar14.unknown - 0x30) ||
                  (lVar10 = (long)_Var7.unknown * 10,
                  SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                 _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
              goto LAB_1006dbc00;
              uVar15 = 0;
              puVar16 = puVar16 + -1;
            } while (puVar16 != (undefined *)0x0);
            goto LAB_1006dbc08;
          }
        }
        else if (*UVar14.unknown == 0x2d) {
          if ((long)_Var9.unknown < 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc128);
            (*pcVar1)();
          }
          puVar16 = _Var9.unknown + -1;
          if (puVar16 != (undefined *)0x0) {
            _Var7.unknown = (undefined *)0x0;
            do {
              UVar14.unknown = UVar14.unknown + 1;
              if (((9 < (byte)*UVar14.unknown - 0x30) ||
                  (lVar10 = (long)_Var7.unknown * 10,
                  SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                 _Var7.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
              goto LAB_1006dbc00;
              uVar15 = 0;
              puVar16 = puVar16 + -1;
            } while (puVar16 != (undefined *)0x0);
            goto LAB_1006dbc08;
          }
        }
        else if (_Var9.unknown != (undefined *)0x0) {
          _Var7.unknown = (undefined *)0x0;
          if (UVar14.unknown == (byte *)0x0) {
            uVar15 = 0;
          }
          else {
            do {
              if (((9 < (byte)*UVar14.unknown - 0x30) ||
                  (lVar10 = (long)_Var7.unknown * 10,
                  SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)((byte)*UVar14.unknown - 0x30),
                 _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
              goto LAB_1006dbc00;
              uVar15 = 0;
              _Var9.unknown = _Var9.unknown + -1;
              UVar14.unknown = UVar14.unknown + 1;
            } while (_Var9.unknown != (undefined *)0x0);
          }
          goto LAB_1006dbc08;
        }
      }
      else {
        local_78 = _Var7.unknown;
        uStack_70 = (ulong)_Var5.unknown & 0xffffffffffffff;
        uVar15 = (uint)_Var7.unknown & 0xff;
        if (uVar15 == 0x2b) {
          if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc134);
            (*pcVar1)();
          }
          puVar16 = puVar16 + -1;
          if (puVar16 != (undefined *)0x0) {
            _Var7.unknown = (undefined *)0x0;
            pbVar13 = (byte *)((ulong)&local_78 | 1);
            do {
              if (((9 < *pbVar13 - 0x30) ||
                  (lVar10 = (long)_Var7.unknown * 10,
                  SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                 _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
              goto LAB_1006dbc00;
              uVar15 = 0;
              puVar16 = puVar16 + -1;
              pbVar13 = pbVar13 + 1;
            } while (puVar16 != (undefined *)0x0);
            goto LAB_1006dbc08;
          }
        }
        else if (uVar15 == 0x2d) {
          if (puVar16 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006dc12c);
            (*pcVar1)();
          }
          puVar16 = puVar16 + -1;
          if (puVar16 != (undefined *)0x0) {
            _Var7.unknown = (undefined *)0x0;
            pbVar13 = (byte *)((ulong)&local_78 | 1);
            do {
              if (((9 < *pbVar13 - 0x30) ||
                  (lVar10 = (long)_Var7.unknown * 10,
                  SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
                 (uVar3 = (ulong)(byte)(*pbVar13 - 0x30),
                 _Var7.unknown = (undefined *)(lVar10 - uVar3), SBORROW8(lVar10,uVar3)))
              goto LAB_1006dbc00;
              uVar15 = 0;
              puVar16 = puVar16 + -1;
              pbVar13 = pbVar13 + 1;
            } while (puVar16 != (undefined *)0x0);
            goto LAB_1006dbc08;
          }
        }
        else if (puVar16 != (undefined *)0x0) {
          _Var7.unknown = (undefined *)0x0;
          ppuVar11 = &local_78;
          do {
            if (((9 < *(byte *)ppuVar11 - 0x30) ||
                (lVar10 = (long)_Var7.unknown * 10,
                SUB168(SEXT816((long)_Var7.unknown) * SEXT816(10),8) != lVar10 >> 0x3f)) ||
               (uVar3 = (ulong)(byte)(*(byte *)ppuVar11 - 0x30),
               _Var7.unknown = (undefined *)(lVar10 + uVar3), SCARRY8(lVar10,uVar3)))
            goto LAB_1006dbc00;
            uVar15 = 0;
            puVar16 = puVar16 + -1;
            ppuVar11 = (undefined **)((long)ppuVar11 + 1);
          } while (puVar16 != (undefined *)0x0);
          goto LAB_1006dbc08;
        }
      }
LAB_1006dbc00:
      _Var7.unknown = (undefined *)0x0;
      uVar15 = 1;
LAB_1006dbc08:
      uVar4 = local_60;
      _swift_bridgeObjectRelease(_Var5.unknown);
      _swift_bridgeObjectRelease(uVar4);
      if ((uVar15 & 0xff) == 1) {
        return (undefined *)0x0;
      }
      return _Var7.unknown;
    }
  }
  uVar4 = local_60;
  _swift_bridgeObjectRelease(_Var5.unknown);
LAB_1006dbdb4:
  _swift_bridgeObjectRelease(uVar4);
  return (undefined *)0x0;
}


