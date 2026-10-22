/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10003ca9c | FUN_10003ca9c */

void FUN_10003ca9c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10003b8a0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                FUN_1003595f8);
  return;
}



/* Address: 0x10003cabc | FUN_10003cabc */

void FUN_10003cabc(void)

{
  FUN_10003c9f0();
  return;
}



/* Address: 0x10003cad0 | thunk_FUN_10003c9e8 */

void thunk_FUN_10003c9e8(void)

{
  FUN_10003c9e8();
  return;
}



/* Address: 0x10003cad4 | FUN_10003cad4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010003cc74 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10003cad4(undefined8 param_1,undefined8 *param_2,ulong param_3,ulong param_4)

{
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar1;
  undefined8 *puVar2;
  long extraout_x8_01;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_3 == 1) {
    puVar7 = *(undefined8 **)(param_4 & 0xfffffffffffffffe);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(puVar7[-1] + 0x40));
    puVar8 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    puVar2 = param_2;
  }
  else {
    (*(code *)PTR____chkstk_darwin_100ea82c0)(param_3 << 3);
    lVar9 = -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    puVar8 = &stack0xffffffffffffffb0 + lVar9;
    if (param_3 != 0) {
      uVar4 = 0;
      uVar1 = param_4 & 0xfffffffffffffffe;
      if (7 < param_3) {
        if (0x3f < (long)puVar8 - uVar1) {
          uVar4 = param_3 & 0xfffffffffffffff8;
          puVar2 = (undefined8 *)(uVar1 + 0x20);
          puVar7 = (undefined8 *)(&stack0xffffffffffffffd0 + lVar9);
          uVar5 = uVar4;
          do {
            uVar10 = puVar2[-4];
            uVar12 = puVar2[-1];
            uVar11 = puVar2[-2];
            uVar14 = puVar2[1];
            uVar13 = *puVar2;
            uVar16 = puVar2[3];
            uVar15 = puVar2[2];
            puVar7[-3] = puVar2[-3];
            puVar7[-4] = uVar10;
            puVar7[-1] = uVar12;
            puVar7[-2] = uVar11;
            puVar7[1] = uVar14;
            *puVar7 = uVar13;
            puVar7[3] = uVar16;
            puVar7[2] = uVar15;
            uVar5 = uVar5 - 8;
            puVar2 = puVar2 + 8;
            puVar7 = puVar7 + 8;
          } while (uVar5 != 0);
          if (param_3 == uVar4) goto LAB_10003cbd8;
        }
      }
      lVar9 = param_3 - uVar4;
      puVar2 = (undefined8 *)(uVar1 + uVar4 * 8);
      puVar7 = (undefined8 *)(puVar8 + uVar4 * 8);
      do {
        *puVar7 = *puVar2;
        lVar9 = lVar9 + -1;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      } while (lVar9 != 0);
    }
LAB_10003cbd8:
    puVar7 = (undefined8 *)0x0;
    _swift_getTupleTypeMetadata(0,param_3,puVar8,0,0);
    (*(code *)PTR____chkstk_darwin_100ea82c0)
              (*(long *)(puVar7[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar8 = &stack0xffffffffffffffb0 + -extraout_x8_01;
    puVar2 = puVar7;
    if (param_3 == 0) goto LAB_10003cc68;
  }
  lVar9 = 0x20;
  plVar6 = (long *)(param_4 & 0xfffffffffffffffe);
  uVar1 = param_3;
  do {
    if (param_3 == 1) {
      lVar3 = 0;
    }
    else {
      lVar3 = (long)*(int *)((long)puVar7 + lVar9);
    }
    (**(code **)(*(long *)(*plVar6 + -8) + 0x10))(puVar8 + lVar3,*param_2);
    lVar9 = lVar9 + 0x10;
    uVar1 = uVar1 - 1;
    param_2 = param_2 + 1;
    plVar6 = plVar6 + 1;
  } while (uVar1 != 0);
LAB_10003cc68:
  SwiftUI::TupleView::init(param_1,puVar2,puVar7);
  return;
}



/* Address: 0x10003cc94 | FUN_10003cc94 */

void FUN_10003cc94(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010003cca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1,param_2);
  return;
}



/* Address: 0x10003ccac | FUN_10003ccac */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010003cdf0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10003ccac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  Text TVar5;
  Font FVar6;
  Font FVar7;
  Text TVar8;
  Text TVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  undefined *puVar13;
  Text TVar14;
  undefined *puVar15;
  char *pcVar16;
  undefined *puVar17;
  char *pcVar18;
  undefined *puVar19;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/GroupBoxView.swift";
    param_5 = 0x13;
    _swift_task_reportUnexpectedExecutor
              ("Paste/GroupBoxView.swift",0x18,1,0x13,UVar3.unknown,pMVar1);
  }
  FUN_100008378();
  _swift_bridgeObjectRetain(param_3);
  puVar15 = PTR___type_metadata_for_Swift_String_100eac208;
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar16 = pcVar4;
  TVar5 = SwiftUI::Text::_init();
  FVar7.unknown = puVar13;
  FVar6 = SwiftUI::Font::get_body(TVar5.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar6.unknown);
  FVar7 = SwiftUI::Font::weight(FVar6.unknown,FVar7);
  _swift_release(FVar6.unknown);
  TVar14 = TVar5;
  puVar17 = puVar13;
  pcVar18 = pcVar16;
  TVar8 = SwiftUI::Text::_font(FVar7.unknown);
  CVar11.unknown = pcVar18;
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar5.unknown,puVar13,pcVar16);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRetain();
  TVar9 = SwiftUI::Text::_init(TVar8.unknown,puVar15,pcVar4);
  FVar7 = SwiftUI::Font::get_subheadline(TVar9.unknown);
  TVar5 = TVar9;
  puVar13 = puVar15;
  pcVar16 = pcVar4;
  TVar10 = SwiftUI::Text::_font(FVar7.unknown);
  _swift_release(FVar7.unknown);
  FUN_100016d74(TVar9.unknown,puVar15,pcVar4);
  _swift_bridgeObjectRelease();
  CVar11 = SwiftUI::Color::get_secondary(CVar11);
  TVar9 = TVar10;
  puVar15 = TVar5.unknown;
  puVar19 = puVar13;
  TVar12 = SwiftUI::Text::_foregroundColor(CVar11.unknown);
  _swift_release(CVar11.unknown);
  FUN_100016d74(TVar10.unknown,TVar5.unknown,puVar13);
  _swift_bridgeObjectRelease(pcVar16);
  *param_1 = TVar8.unknown;
  param_1[1] = TVar14.unknown;
  *(char *)(param_1 + 2) = (char)puVar17;
  param_1[3] = pcVar18;
  param_1[4] = TVar12.unknown;
  param_1[5] = TVar9.unknown;
  *(char *)(param_1 + 6) = (char)puVar15;
  param_1[7] = puVar19;
  FUN_100016d5c(TVar8.unknown,TVar14.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_bridgeObjectRetain(pcVar18);
  FUN_100016d5c(TVar12.unknown,TVar9.unknown,puVar15);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100016d74(TVar12.unknown,TVar9.unknown,puVar15);
  _swift_bridgeObjectRelease(puVar19);
  FUN_100016d74(TVar8.unknown,TVar14.unknown,(ulong)puVar17 & 0xffffffff);
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(pcVar18);
  return;
}



/* Address: 0x10003cf48 | FUN_10003cf48 */

void FUN_10003cf48(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x10003cf50 | FUN_10003cf50 */

void FUN_10003cf50(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = &DAT_100c25490;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x10003cfc8 | FUN_10003cfc8 */

long * FUN_10003cfc8(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar3 < 8 && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar3 - 9 | uVar3) - *(long *)(lVar1 + 0x40)) {
    *param_1 = *param_2;
    pcVar4 = *(code **)(lVar1 + 0x10);
    _swift_retain();
    (*pcVar4)((long)param_1 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff),
              (long)param_2 + uVar3 + 8 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar3 & 0xf8 ^ 0x1f8) & uVar3 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10003d084 | FUN_10003d084 */

void FUN_10003d084(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  
  _swift_release(*param_1);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010003d0c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)param_1 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x10003d0c8 | FUN_10003d0c8 */

undefined8 * FUN_10003d0c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  
  *param_1 = *param_2;
  lVar2 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar2 + -8);
  uVar3 = (ulong)*(byte *)(lVar1 + 0x50);
  pcVar4 = *(code **)(lVar1 + 0x10);
  _swift_retain();
  (*pcVar4)(uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
            uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff),lVar2);
  return param_1;
}



/* Address: 0x10003d130 | FUN_10003d130 */

undefined8 * FUN_10003d130(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x18))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10003d1a0 | FUN_10003d1a0 */

undefined8 * FUN_10003d1a0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  *param_1 = *param_2;
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x20))
            (uVar2 + 8 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10003d1f0 | FUN_10003d1f0 */

undefined8 * FUN_10003d1f0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x28))
            (uVar3 + 8 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 8 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10003d258 | FUN_10003d258 */

ulong FUN_10003d258(ulong *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar6 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar6 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10003d300;
  uVar5 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar8 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar8 < 0xff) {
      if (uVar8 == 0) goto LAB_10003d300;
      goto LAB_10003d2c0;
    }
    if (uVar8 < 0xffff) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_10003d2c0:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar5 = (ulong)(byte)*param_1;
        }
        else {
          uVar5 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar5 = (ulong)(uint3)*param_1;
      }
      else {
        uVar5 = (ulong)(uint)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_10003d300:
  if (uVar2 < 0x7fffffff) {
    uVar7 = *param_1;
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    uVar1 = 0;
    if (1 < (uint)uVar7 + 1) {
      uVar1 = (uint)uVar7;
    }
    return (ulong)uVar1;
  }
  uVar7 = (long)param_1 + uVar7 + 8 & ~uVar7;
                    /* WARNING: Could not recover jumptable at 0x00010003d348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x30))(uVar7);
  return uVar7;
}



/* Address: 0x10003d39c | FUN_10003d39c */

void FUN_10003d39c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  sVar1 = (uVar8 + 8 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar9 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar9 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f);
    bVar6 = 2;
    if (0xfffe < uVar4) {
      bVar6 = 4;
    }
    if (uVar4 < 0xff) {
      bVar6 = uVar4 != 0;
    }
  }
  else {
    bVar6 = 1;
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar9 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar10;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar10;
    }
  }
  else {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffe < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010003d52c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))((long)param_1 + uVar8 + 8 & ~uVar8);
        return;
      }
      if (param_2 < 0x7fffffff) {
        *param_1 = (ulong)param_2;
      }
      else {
        *param_1 = 0;
        *(uint *)param_1 = param_2 + 0x80000001;
      }
    }
  }
  return;
}



/* Address: 0x10003d5a4 | FUN_10003d5a4 */

void FUN_10003d5a4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10003d5b0 | FUN_10003d5b0 */

void FUN_10003d5b0(undefined8 param_1,long param_2)

{
  undefined8 local_20;
  undefined8 uStack_18;
  
  uStack_18 = *(undefined8 *)(param_2 + 0x18);
  local_20 = *(undefined8 *)(param_2 + 0x10);
  _swift_getOpaqueTypeConformance2(&local_20,&DAT_100ca0cfc,1);
  return;
}



/* Address: 0x10003d5e4 | FUN_10003d5e4 */

void FUN_10003d5e4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ModifiedContent MVar2;
  TupleView TVar3;
  VStack VVar4;
  VStack VVar5;
  HorizontalAlignment alignment;
  long extraout_x8;
  long extraout_x12;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fa8420;
  FUN_100005c24(&DAT_100fa8420,&DAT_100c25508);
  uStack_88 = *(undefined8 *)(param_2 + 0x18);
  local_90 = *(undefined8 *)(param_2 + 0x10);
  SwiftUI::VStack::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fa7de8,&DAT_100c24dc0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fa8428,&DAT_100c25510);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata2(0xff,puVar1,MVar2.unknown,0,0);
  TVar3 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar3.unknown);
  VVar4 = SwiftUI::VStack::typeMetadataAccessor();
  lVar10 = *(long *)(VVar4.unknown + -8);
  VVar5 = VVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12;
  alignment = SwiftUI::HorizontalAlignment::get_leading(VVar5.unknown);
  uStack_68 = uStack_88;
  local_70 = local_90;
  SwiftUI::VStack::_init(alignment);
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar4.unknown);
  pcVar6 = *(code **)(lVar10 + 0x10);
  (*pcVar6)(lVar9,lVar8,VVar4.unknown);
  pcVar7 = *(code **)(lVar10 + 8);
  (*pcVar7)(lVar8,VVar4.unknown);
  (*pcVar6)(param_1,lVar9,VVar4.unknown);
  (*pcVar7)(lVar9,VVar4.unknown);
  return;
}



/* Address: 0x10003d7e8 | FUN_10003d7e8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10003d7e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  VStack VVar3;
  ModifiedContent MVar4;
  ModifiedContent MVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Set _all;
  Set SVar10;
  HorizontalAlignment alignment;
  VStack<undefined> VVar11;
  undefined *puVar12;
  Set SVar13;
  undefined *puVar14;
  ID *pIVar15;
  NSColor *nsColor;
  Color CVar16;
  undefined *puVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined *puVar20;
  code *pcVar21;
  code *pcVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  ID IStack_2e0;
  undefined *local_2d8;
  ID *local_2d0;
  long local_2c8;
  long local_2c0;
  long local_2b8;
  long local_2b0;
  long local_2a8;
  undefined *local_2a0;
  long local_298;
  long local_290;
  undefined *local_288;
  long local_280;
  long local_278;
  MainActor *local_270;
  undefined8 local_268;
  undefined8 *local_260;
  undefined *local_258;
  undefined *puStack_250;
  undefined *local_248;
  undefined *puStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 *local_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined1 local_180;
  undefined **local_170;
  long local_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  
  local_268 = param_1;
  local_260 = param_6;
  VVar3 = SwiftUI::VStack::typeMetadataAccessor();
  local_2c8 = *(long *)(VVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_2c8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  SVar13.unknown = (undefined *)((long)&IStack_2e0 - extraout_x8);
  MVar4 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_2b8 = *(long *)(MVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_2b8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_2d0 = (ID *)(SVar13.unknown + -extraout_x8_00);
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_2a8 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_2a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = (long)(SVar13.unknown + -extraout_x8_00) - extraout_x8_01;
  local_2b0 = lVar19;
  FUN_100005c24(&DAT_100fa7de8,&DAT_100c24dc0);
  local_2a0 = MVar5.unknown;
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_290 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_290 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar19 = lVar19 - extraout_x8_02;
  local_298 = lVar19;
  FUN_100005c24(&DAT_100fa8428,&DAT_100c25510);
  local_288 = MVar5.unknown;
  MVar5 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  local_280 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_280 + 0x40));
  lVar19 = lVar19 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_2c0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_278 = lVar19 - extraout_x12;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pMVar6 = pMVar7;
  FUN_1000081a8();
  local_270 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "Paste/GroupBoxView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/GroupBoxView.swift",0x18,1,0x1c,UVar8.unknown,pMVar6);
  }
  puVar20 = (undefined *)*local_260;
  if (puVar20 == (undefined *)0x0) {
    local_c0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    local_120 = (undefined *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
  }
  else {
    SVar10.unknown = puVar20;
    _swift_retain();
    _all = SwiftUI::Edge::Set::get_vertical(SVar10);
    uVar23 = 0x4024000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
    SVar10.unknown = puVar20;
    uVar25 = param_3;
    uVar26 = param_4;
    uVar27 = param_5;
    _swift_retain();
    SVar10 = SwiftUI::Edge::Set::get_horizontal(SVar10);
    uVar24 = 0x4024000000000000;
    local_2d8 = SVar13.unknown;
    SwiftUI::EdgeInsets::init((CGFloat)SVar10.unknown);
    _swift_release(puVar20);
    puStack_240 = (undefined *)CONCAT71(puStack_240._1_7_,(char)_all.unknown);
    local_218 = 0;
    uStack_210 = SUB81(SVar10.unknown,0);
    local_1e8 = 0;
    uStack_1d8 = CONCAT71(uStack_1d8._1_7_,(char)_all.unknown);
    local_1b0 = local_1b0 & 0xffffffffffffff00;
    uStack_1a8 = CONCAT71(uStack_1a8._1_7_,uStack_210);
    local_180 = 0;
    local_248 = puVar20;
    local_238 = uVar23;
    uStack_230 = param_3;
    local_228 = param_4;
    uStack_220 = param_5;
    local_208 = uVar24;
    uStack_200 = uVar25;
    local_1f8 = uVar26;
    uStack_1f0 = uVar27;
    local_1e0 = puVar20;
    local_1d0 = uVar23;
    uStack_1c8 = param_3;
    local_1c0 = (undefined8 *)param_4;
    uStack_1b8 = param_5;
    local_1a0 = uVar24;
    uStack_198 = uVar25;
    local_190 = uVar26;
    uStack_188 = uVar27;
    FUN_100011090(&local_248,&local_120,&DAT_100fa8448,&DAT_100c25518);
    SVar13.unknown = local_2d8;
    pcVar9 = (char *)&local_1e0;
    FUN_100005808(pcVar9,&DAT_100fa8448,&DAT_100c25518);
    uStack_d8 = uStack_200;
    local_e0 = local_208;
    uStack_c8 = uStack_1f0;
    uStack_d0 = local_1f8;
    local_c0 = local_1e8;
    uStack_118 = puStack_240;
    local_120 = local_248;
    uStack_108 = uStack_230;
    uStack_110 = local_238;
    uStack_e8 = CONCAT71(uStack_20f,uStack_210);
    uStack_f0 = CONCAT71(uStack_217,local_218);
    uStack_f8 = uStack_220;
    local_100 = local_228;
  }
  local_1c0 = local_260;
  local_1d0 = param_7;
  uStack_1c8 = param_8;
  alignment = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar9);
  VVar11 = SwiftUI::VStack::_init(alignment);
  SVar10 = SwiftUI::Edge::Set::get_vertical(VVar11.unknown);
  puVar12 = PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar3.unknown);
  pIVar15 = local_2d0;
  (extension_SwiftUI)::SwiftUI::View::_padding(SVar10);
  (**(code **)(local_2c8 + 8))(SVar13.unknown,VVar3.unknown);
  SVar13 = SwiftUI::Edge::Set::get_horizontal(SVar13);
  puVar18 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puVar20 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puStack_128 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar14 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_130 = puVar12;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             MVar4.unknown,&local_130);
  lVar19 = local_2b0;
  (extension_SwiftUI)::SwiftUI::View::_padding(SVar13);
  (**(code **)(local_2b8 + 8))(pIVar15,MVar4.unknown);
  FUN_1001fe15c();
  nsColor = (NSColor *)objc_stub::colorWithAlphaComponent_(*pIVar15,0x3f9eb851eb851eb8);
  CVar16 = SwiftUI::Color::init(nsColor);
  local_1e0 = CVar16.unknown;
  SVar13 = SwiftUI::Edge::Set::get_all(CVar16.unknown);
  puVar12 = local_2a0;
  puStack_138 = puVar20;
  puVar17 = puVar18;
  local_140 = puVar14;
  _swift_getWitnessTable(puVar18,local_2a0,&local_140);
  puVar20 = puVar17;
  FUN_10001fec0();
  lVar1 = local_298;
  (extension_SwiftUI)::SwiftUI::View::_background
            (local_298,&local_1e0,SVar13.unknown,puVar12,
             PTR___type_metadata_for_SwiftUI_Color_100eab718,puVar17,puVar20);
  _swift_release(CVar16.unknown);
  (**(code **)(local_2a8 + 8))(lVar19,puVar12);
  puVar20 = &DAT_100fa7de0;
  FUN_100016eac(&DAT_100fa7de0,&DAT_100fa7de8,&DAT_100c24dc0,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar12 = local_288;
  puVar14 = puVar18;
  local_150 = puVar17;
  puStack_148 = puVar20;
  _swift_getWitnessTable(puVar18,local_288,&local_150);
  lVar19 = local_2c0;
  (extension_SwiftUI)::SwiftUI::View::_cornerRadius((CGFloat)0x1,SUB81(puVar12,0));
  (**(code **)(local_290 + 8))(lVar1,puVar12);
  puVar20 = &DAT_100fa8430;
  FUN_100016eac(&DAT_100fa8430,&DAT_100fa8428,&DAT_100c25510,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  local_160 = puVar14;
  puStack_158 = puVar20;
  _swift_getWitnessTable(puVar18,MVar5.unknown,&local_160);
  lVar2 = local_278;
  lVar1 = local_280;
  pcVar21 = *(code **)(local_280 + 0x10);
  (*pcVar21)(local_278,lVar19,MVar5.unknown);
  pcVar22 = *(code **)(lVar1 + 8);
  (*pcVar22)(lVar19,MVar5.unknown);
  uStack_1a8 = uStack_e8;
  local_1b0 = uStack_f0;
  uStack_198 = uStack_d8;
  local_1a0 = local_e0;
  uStack_188 = uStack_c8;
  local_190 = uStack_d0;
  uStack_1d8 = uStack_118;
  local_1e0 = local_120;
  local_180 = local_c0;
  uStack_1c8 = uStack_108;
  local_1d0 = uStack_110;
  uStack_1b8 = uStack_f8;
  local_1c0 = (undefined8 *)local_100;
  local_170 = &local_1e0;
  (*pcVar21)(lVar19,lVar2,MVar5.unknown);
  local_168 = lVar19;
  puVar20 = &DAT_100fa8420;
  FUN_100011090(&local_120,&local_248,&DAT_100fa8420,&DAT_100c25508);
  FUN_1000037f0(&DAT_100fa8420,&DAT_100c25508);
  local_248 = puVar20;
  puStack_240 = MVar5.unknown;
  FUN_10003e01c();
  local_258 = puVar20;
  puStack_250 = puVar18;
  FUN_10003cad4(local_268,&local_170,2,&local_248,&local_258);
  FUN_100005808(&local_120,&DAT_100fa8420,&DAT_100c25508);
  (*pcVar22)(lVar2,MVar5.unknown);
  (*pcVar22)(lVar19,MVar5.unknown);
  FUN_100005808(&local_1e0,&DAT_100fa8420,&DAT_100c25508);
  _swift_release(local_270);
  return;
}



/* Address: 0x10003dee0 | FUN_10003dee0 */

void FUN_10003dee0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  long lVar5;
  long extraout_x8;
  undefined1 *puVar6;
  code *pcVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/GroupBoxView.swift",0x18,1,0x23,UVar3.unknown,pMVar1);
  }
  lVar5 = 0;
  FUN_10003d5a4(0,param_3,param_4);
  pcVar7 = *(code **)(lVar8 + 0x10);
  (*pcVar7)(puVar6,param_2 + *(int *)(lVar5 + 0x24),param_3);
  (*pcVar7)(param_1,puVar6,param_3);
  (**(code **)(lVar8 + 8))(puVar6,param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10003e000 | thunk_FUN_10003d5e4 */

void thunk_FUN_10003d5e4(void)

{
  FUN_10003d5e4();
  return;
}



/* Address: 0x10003e004 | FUN_10003e004 */

void FUN_10003e004(void)

{
  long unaff_x20;
  
  FUN_10003d7e8(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10003e010 | FUN_10003e010 */

void FUN_10003e010(void)

{
  long unaff_x20;
  
  FUN_10003dee0(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10003e01c | FUN_10003e01c */

void FUN_10003e01c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fa8438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8420;
  FUN_100005c24(&DAT_100fa8420,&DAT_100c25508);
  puVar2 = puVar1;
  FUN_10003e08c();
  puVar3 = 
  PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
  ;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__protocol_conformance_descriptor_for_<A_where_A:_SwiftUI_View>_A____SwiftUI_View_in_SwiftUI_>SwiftUI__View_100eabb80
             ,puVar1,&local_28);
  DAT_100fa8438 = puVar3;
  return;
}



/* Address: 0x10003e08c | FUN_10003e08c */

void FUN_10003e08c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa8440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8448;
  FUN_100005c24(&DAT_100fa8448,&DAT_100c25518);
  puVar2 = puVar1;
  FUN_10003e104();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa8440 = puVar3;
  return;
}



/* Address: 0x10003e104 | FUN_10003e104 */

void FUN_10003e104(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fa8450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa8458;
  FUN_100005c24(&DAT_100fa8458,&DAT_100c25520);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fa8450 = puVar2;
  return;
}



/* Address: 0x10003e174 | FUN_10003e174 */

void FUN_10003e174(void)

{
  undefined *puVar1;
  ModifiedContent MVar2;
  TupleView TVar3;
  VStack VVar4;
  
  puVar1 = &DAT_100fa8420;
  FUN_100005c24(&DAT_100fa8420,&DAT_100c25508);
  SwiftUI::VStack::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fa7de8,&DAT_100c24dc0);
  SwiftUI::ModifiedContent::typeMetadataAccessor();
  FUN_100005c24(&DAT_100fa8428,&DAT_100c25510);
  MVar2 = SwiftUI::ModifiedContent::typeMetadataAccessor();
  _swift_getTupleTypeMetadata2(0xff,puVar1,MVar2.unknown,0,0);
  TVar3 = SwiftUI::TupleView::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30,TVar3.unknown);
  VVar4 = SwiftUI::VStack::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938,VVar4.unknown);
  return;
}



/* Address: 0x10003e28c | thunk_FUN_10003cc94 */

void thunk_FUN_10003cc94(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010003cca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_1,param_2);
  return;
}



/* Address: 0x10003e290 | FUN_10003e290 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10003e290(ID param_1)

{
  ID self;
  ID IVar1;
  long unaff_x20;
  
  if ((*(char *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) == '\x01') &&
     ((*(long *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) == 0 ||
      ((*(byte *)(*(long *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) +
                 _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) == 0)))) {
    FUN_10003e7d0();
    self = objc_stub::window(param_1);
    if (self != 0) {
      IVar1 = self;
      FUN_100045c2c();
      FUN_100041f9c();
      objc_stub::makeFirstResponder_(self,IVar1);
    }
    return 0;
  }
  return param_1;
}



/* Address: 0x10003e350 | FUN_10003e350 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10003e350(ID param_1)

{
  undefined1 uVar1;
  long lVar2;
  ID self;
  long lVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_70 [16];
  
  FUN_10003e4c0();
  lVar3 = _TtC5Paste9SearchBar::isActive;
  uVar5 = 0;
  if (*(char *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) == '\0') {
    uVar5 = 0x3ff0000000000000;
  }
  objc_stub::setAlphaValue_(param_1,uVar5);
  self = 0;
  FUN_10003e7d0();
  uVar5 = 0x3ff0000000000000;
  if (*(char *)(unaff_x20 + lVar3) == '\0') {
    uVar5 = 0;
  }
  objc_stub::setAlphaValue_(self,uVar5);
  lVar2 = _TtC5Paste11SearchField::canAcceptFocus;
  lVar4 = *(long *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField);
  *(undefined1 *)(lVar4 + _TtC5Paste11SearchField::canAcceptFocus) =
       *(undefined1 *)(unaff_x20 + lVar3);
  lVar3 = lVar4;
  FUN_100045c2c();
  uVar1 = *(undefined1 *)(lVar4 + lVar2);
  FUN_100041f9c();
  *(undefined1 *)
   (lVar3 + _TtCCC5Paste11SearchField9InputViewP33_88626D17C36931F5670CC3740FF350508TextView::
            canAcceptFocus) = uVar1;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  uVar5 = 0;
  FUN_10000ec2c(0,&DAT_100faa320,&PTR__OBJC_CLASS___CAMediaTimingFunction_100f8d668);
  FUN_10021ccd4();
  FUN_10021cadc(0,1,uVar5,1,FUN_100041b88,auStack_70,0,0);
  return 0;
}



/* Address: 0x10003e4c0 | FUN_10003e4c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10003e4c0(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long unaff_x20;
  String SVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  lVar3 = _TtC5Paste9SearchBar::___lazy_storage___searchButton;
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = *(undefined8 **)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchButton);
  if (puVar5 == (undefined8 *)0x0) {
    FUN_10020d45c();
    puVar9 = (undefined8 *)*puVar5;
    uVar1 = puVar5[1];
    _swift_bridgeObjectRetain(uVar1);
    uVar6 = 0x66;
    FUN_1001e94d4(0x66,0xe100000000000000);
    FUN_1001c6300(&stack0xffffffffffffffb0 + lVar2);
    SVar10 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)(&stack0xffffffffffffffb0 + lVar2));
    puVar7 = &DAT_100eb1a00;
    _swift_allocObject(&DAT_100eb1a00,0x18,7);
    _swift_unknownObjectWeakInit(puVar7 + 0x10);
    uVar8 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar2) = FUN_100041b98;
    *(undefined **)((long)auStack_60 + lVar2 + 8) = puVar7;
    auStack_68[lVar2] = 1;
    *(void **)((long)&uStack_70 + lVar2) = SVar10.bridgeObject;
    FUN_10023e034(uVar8,puVar9,uVar1,0,0xe000000000000000,uVar6,0x100000,0,SVar10.str);
    *(undefined8 **)(unaff_x20 + lVar3) = puVar9;
    puVar5 = puVar9;
  }
  return puVar5;
}



/* Address: 0x10003e61c | FUN_10003e61c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10003e61c(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10003e658();
    return 0;
  }
  return 0;
}



/* Address: 0x10003e658 | FUN_10003e658 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003e658(void)

{
  ulong uVar1;
  ID IVar2;
  long lVar3;
  ID IVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_48 [24];
  
  if (*(char *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) == '\x01') {
    lVar3 = *(long *)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10003e7d0);
      (*pcVar5)();
    }
    _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
    IVar4 = *(ulong *)(lVar3 + 0x10);
    uVar1 = IVar4;
    _swift_bridgeObjectRetain();
    FUN_1002ddcf0();
    _swift_bridgeObjectRelease();
    if ((uVar1 & 1) == 0) {
      if ((*(long *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) == 0) ||
         ((*(byte *)(*(long *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) +
                    _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) == 0)) {
        FUN_10003e7d0();
        IVar4 = objc_stub::window(IVar4);
        if (IVar4 != 0) {
          IVar2 = IVar4;
          FUN_100045c2c();
          FUN_100041f9c();
          objc_stub::makeFirstResponder_(IVar4,IVar2);
        }
      }
    }
    else {
      pcVar5 = *(code **)(unaff_x20 + _TtC5Paste9SearchBar::onDismiss);
      if (pcVar5 != (code *)0x0) {
        uVar6 = ((undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onDismiss))[1];
        _swift_retain(uVar6);
        (*pcVar5)();
        FUN_100004550(pcVar5,uVar6);
      }
    }
  }
  else {
    pcVar5 = *(code **)(unaff_x20 + _TtC5Paste9SearchBar::onActivate);
    if (pcVar5 != (code *)0x0) {
      uVar6 = ((undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onActivate))[1];
      _swift_retain(uVar6);
      (*pcVar5)();
      FUN_100004550(pcVar5,uVar6);
      return;
    }
  }
  return;
}



/* Address: 0x10003e7d0 | FUN_10003e7d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10003e7d0(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste9SearchBar::___lazy_storage___searchField;
  self = *(ID *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField);
  if (self == 0) {
    FUN_10004793c();
    _objc_allocWithZone();
    self = objc_stub::initWithFrame_(self,0,0,0,0);
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10003e848 | FUN_10003e848 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10003e848(undefined8 param_1)

{
  undefined8 *puVar1;
  ID IVar2;
  __int64 _Var3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_getObjectType();
  *(undefined1 *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onActivate);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onDismiss);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::onResignKey);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator) = 0;
  puVar4 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) &&
     (_Var3 = Swift::_CocoaArrayWrapper::get_endIndex
                        ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8),
     puVar4 = PTR___swiftEmptySetSingleton_100eae0e8, _Var3 != 0)) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10001a4b0();
  }
  *(undefined **)(unaff_x20 + _TtC5Paste9SearchBar::cancellables) = puVar4;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::suggestionsTask) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::filterSuggestionsMenu) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::viewModel) = param_1;
  _swift_retain(param_1);
  IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffc0,"initWithFrame:",0,0,0,0);
  FUN_10003e9bc();
  _swift_release(param_1);
  return IVar2;
}



/* Address: 0x10003e9bc | FUN_10003e9bc */

void FUN_10003e9bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  Published PVar5;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [16];
  
  puVar1 = &DAT_100fa84e8;
  FUN_1000037f0(&DAT_100fa84e8,&DAT_100c25538);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa84f0;
  FUN_1000037f0(&DAT_100fa84f0,&DAT_100c25540);
  lVar6 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10003f574();
  puVar3 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar3;
  FUN_10003e7d0();
  *(undefined **)(puVar3 + 0x20) = puVar4;
  FUN_10003e4c0();
  *(undefined **)(puVar3 + 0x28) = puVar4;
  FUN_1001fa150(puVar3,FUN_100041b54,auStack_b0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,*(undefined8 *)(puVar3 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  _swift_beginAccess(*(long *)(unaff_x20 + _TtC5Paste9SearchBar::viewModel) +
                     _TtC5Paste18SearchBarViewModel::_searchQuery,auStack_b0,0x21,0);
  PVar5.unknown = &DAT_100fa67f8;
  FUN_1000037f0(&DAT_100fa67f8,&DAT_100c23010);
  Combine::Published::_get_projectedValue(PVar5);
  _swift_endAccess(auStack_b0);
  FUN_100016eac(&DAT_100fa84f8,&DAT_100fa84e8,&DAT_100c25538,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  (extension_Combine)::Combine::Publisher::_filter();
  (**(code **)(lVar7 + 8))(auStack_b0 + -extraout_x8,puVar1);
  puVar1 = &DAT_100eb1a00;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar1 + 0x10);
  FUN_100016eac(&DAT_100fa8500,&DAT_100fa84f0,&DAT_100c25540,
                PTR_Combine__Combine__Publishers__Filter<undefined>_>Combine__Publisher_100ea96f0);
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar1);
  (**(code **)(lVar6 + 8))((long)(auStack_b0 + -extraout_x8) - extraout_x8_00,puVar2);
  lVar6 = _TtC5Paste9SearchBar::cancellables;
  _swift_beginAccess(unaff_x20 + _TtC5Paste9SearchBar::cancellables,auStack_b0,0x21,0);
  Combine::AnyCancellable::store(this,(undefined *)(unaff_x20 + lVar6));
  _swift_endAccess(auStack_b0);
  _swift_release(this);
  FUN_10003e350();
  return;
}



/* Address: 0x10003ec60 | _TtC5Paste9SearchBar::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste9SearchBar::initWithCoder_(ID param_1,SEL param_2,ID param_3)

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
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,0x2b,UVar4.unknown,puVar3);
  }
  FUN_100041e78();
  _swift_release(pMVar2);
  return param_3;
}



/* Address: 0x10003ed28 | _TtC5Paste9SearchBar::intrinsicContentSize */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGSize _TtC5Paste9SearchBar::intrinsicContentSize(ID param_1,SEL param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  double extraout_d0;
  double in_d1;
  CGSize CVar6;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,0x38,UVar4.unknown,puVar3);
  }
  FUN_10003e4c0();
  objc_stub::intrinsicContentSize(param_1);
  _swift_release(pMVar2);
  CVar6.field1_0x8 = in_d1;
  CVar6.field0_0x0 = extraout_d0;
  return CVar6;
}



/* Address: 0x10003ee14 | FUN_10003ee14 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10003ee14(undefined8 param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  NSObject *pNVar5;
  NSObject *pNVar6;
  undefined8 uVar7;
  ID IVar8;
  long unaff_x20;
  
  lVar2 = unaff_x20;
  _swift_getObjectType();
  if (*(char *)(unaff_x20 + _TtC5Paste9SearchBar::isActive) == '\x01') {
    FUN_1001e7d18();
    lVar3 = 0x66;
    FUN_1001e94d4(0x66,0xe100000000000000);
    if ((lVar2 == lVar3) && (param_2 == 0x100000)) {
      IVar4 = *(ID *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover);
      if ((IVar4 != 0) &&
         (*(char *)(IVar4 + _TtC5Paste20FilterBrowserPopover::isDisplayed) == '\x01')) {
        objc_stub::close(IVar4);
        return 1;
      }
      FUN_10003e7d0();
      IVar4 = objc_stub::window(IVar4);
      pNVar5 = (NSObject *)objc_stub::firstResponder(IVar4);
      pNVar6 = (NSObject *)0x0;
      FUN_100045c2c();
      FUN_100041f9c();
      if (pNVar5 != (NSObject *)0x0) {
        FUN_10000ec2c(0,&DAT_100fa8820,&PTR__OBJC_CLASS___NSResponder_100f8d730);
        bVar1 = (extension_ObjectiveC)::__C::NSObject::___infix(pNVar5,pNVar6);
        if (bVar1) {
          uVar7 = *(undefined8 *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField);
          FUN_100045730(uVar7);
          FUN_10003f044(uVar7);
          return 1;
        }
      }
      IVar4 = objc_stub::window(*(ID *)(unaff_x20 +
                                       _TtC5Paste9SearchBar::___lazy_storage___searchField));
      if (IVar4 != 0) {
        IVar8 = IVar4;
        FUN_100045c2c();
        FUN_100041f9c();
        objc_stub::makeFirstResponder_(IVar4,IVar8);
      }
      return 1;
    }
  }
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"performKeyEquivalent:",param_1
                             );
  return IVar4;
}



/* Address: 0x10003f044 | FUN_10003f044 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010003f1e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_10003f044(ID param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  NSHostingController *pNVar7;
  undefined8 *self;
  undefined *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  ID IVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_100 [32];
  undefined *local_e0;
  undefined8 uStack_d8;
  code *local_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [32];
  
  lVar12 = _TtC5Paste9SearchBar::filterBrowserPopover;
  self = &local_160;
  IVar10 = *(ID *)(unaff_x20 + _TtC5Paste9SearchBar::filterBrowserPopover);
  if (IVar10 == 0) {
    IVar10 = 0;
    FUN_100008b64();
    _objc_allocWithZone();
    IVar10 = objc_stub::init(IVar10);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar12);
    *(ID *)(unaff_x20 + lVar12) = IVar10;
    lVar11 = *(long *)(unaff_x20 + lVar12);
    if (lVar11 == 0) {
      return 0;
    }
    puVar8 = &DAT_100eb1a00;
    _swift_allocObject(uVar9,&DAT_100eb1a00,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    puVar1 = (undefined8 *)(lVar11 + _TtC5Paste20FilterBrowserPopover::onWillClose);
    uVar9 = *puVar1;
    uVar4 = puVar1[1];
    *puVar1 = FUN_100041e00;
    puVar1[1] = puVar8;
    _swift_retain(puVar8);
    FUN_100004550(uVar9,uVar4);
    _swift_release(puVar8);
    IVar10 = *(ID *)(unaff_x20 + lVar12);
    if (IVar10 == 0) {
      return 0;
    }
  }
  if ((*(byte *)(IVar10 + _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) != 0) {
    IVar10 = objc_stub::close(IVar10);
    return IVar10;
  }
  lVar12 = *(long *)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator);
  if (lVar12 != 0) {
    _swift_beginAccess(lVar12 + 0x10,auStack_80,0,0);
    uVar13 = *(undefined8 *)(lVar12 + 0x10);
    _swift_bridgeObjectRetain(uVar13);
    IVar3 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent);
    puVar8 = &DAT_100eb1a00;
    _swift_allocObject(&DAT_100eb1a00,0x18,7);
    _swift_unknownObjectWeakInit(puVar8 + 0x10);
    uVar4 = 0;
    FUN_1000075c4();
    _swift_allocObject();
    _swift_bridgeObjectRetain(uVar13);
    _swift_retain_n(puVar8,2);
    uVar9 = uVar13;
    FUN_100005e1c(uVar13,IVar3 >> 0x13 & 1,FUN_100041e08,puVar8);
    puVar5 = &DAT_100eb1a78;
    _swift_allocObject(&DAT_100eb1a78,0x18,7);
    _swift_unknownObjectWeakInit(puVar5 + 0x10,IVar10);
    puVar6 = &DAT_100fa8510;
    FUN_100003a00(&DAT_100fa8510,FUN_1000075c4,&TargetProtocolConformanceDescriptor_100c22f30);
    _swift_retain(uVar9);
    _swift_retain(puVar5);
    local_e0 = (undefined *)SwiftUI::ObservedObject::init(puVar6,uVar4,puVar6);
    local_d0 = FUN_100041e10;
    local_160 = 0;
    uStack_158 = CONCAT71(uStack_158._1_7_,1);
    puVar6 = &DAT_100fa7e70;
    uStack_d8 = uVar4;
    puStack_c8 = puVar5;
    FUN_1000037f0(&DAT_100fa7e70,&DAT_100c24e60);
    SwiftUI::State::init(auStack_c0,puVar6,puVar6);
    uStack_158 = 0;
    local_160 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    puVar6 = &DAT_100fa8810;
    FUN_100011090(&local_160,auStack_100,&DAT_100fa8810,&DAT_100c23ce0);
    FUN_1000037f0(&DAT_100fa8810,&DAT_100c23ce0);
    SwiftUI::State::init(auStack_a8,puVar6,puVar6);
    FUN_100013954(&local_160);
    _swift_release(puVar5);
    FUN_1000349ac(&local_e0,&local_160);
    pNVar7 = (NSHostingController *)&DAT_100fa8518;
    FUN_1000037f0(&DAT_100fa8518,&DAT_100c255b0);
    _objc_allocWithZone();
    SwiftUI::NSHostingController::_init(pNVar7);
    IVar3 = objc_stub::view((ID)self);
    objc_stub::setWantsLayer_(IVar3,1);
    IVar3 = objc_stub::view((ID)self);
    IVar3 = objc_stub::layer(IVar3);
    if (IVar3 != 0) {
      uVar4 = 0;
      FUN_100003b44(0);
      static_(extension_in_CoreGraphics):__C.CGColorRef.clear.getter_:___C.CGColorRef::_get_clear();
      objc_stub::setBackgroundColor_(IVar3,uVar4);
    }
    objc_stub::setContentViewController_(IVar10,self);
    objc_stub::bounds(param_1);
    objc_stub::showRelativeToRect_ofView_preferredEdge_(IVar10,param_1,1);
    objc_stub::setAnimates_(IVar10,0);
    _swift_bridgeObjectRelease(uVar13);
    _swift_release(uVar9);
    _swift_release(puVar8);
    FUN_100041e18(&local_e0);
    _swift_release(puVar8);
    FUN_10003e7d0();
    FUN_1000457cc();
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10003f48c);
  (*pcVar2)();
}



/* Address: 0x10003f48c | _TtC5Paste9SearchBar::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste9SearchBar::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  uint uVar6;
  
  uVar6 = (uint)param_3;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,0x3c,UVar4.unknown,puVar3);
  }
  FUN_10003ee14();
  _swift_release(pMVar2);
  return uVar6 & 1;
}



/* Address: 0x10003f574 | FUN_10003f574 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10003f574(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  long lVar12;
  
  puVar10 = &DAT_100eb1a00;
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar5 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  puVar6 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar7 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar7 + 0x10);
  uVar8 = 0;
  FUN_1002f8180(0);
  _swift_allocObject();
  pcVar9 = FUN_100041ba0;
  FUN_1002f7274(uVar8,0x3fd999999999999a,FUN_100041ba0,puVar3,FUN_100041ba8,puVar4,FUN_100041bb0,
                puVar5,FUN_100041bb8,puVar6,FUN_100041bc0,puVar7);
  lVar11 = *(long *)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator);
  *(code **)(unaff_x20 + _TtC5Paste9SearchBar::inputCoordinator) = pcVar9;
  _swift_release();
  FUN_10003e7d0();
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste11SearchField::onTextShouldChange);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041bc8;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar11 = _TtC5Paste9SearchBar::___lazy_storage___searchField;
  lVar12 = *(long *)(unaff_x20 + _TtC5Paste9SearchBar::___lazy_storage___searchField);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onSelectionChange);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041bd0;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onShowFilters);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041bd8;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onEnter);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041be0;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onCancel);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041be8;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onClear);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041bf0;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onEndEditing);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041bf8;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar12 = *(long *)(unaff_x20 + lVar11);
  puVar3 = puVar10;
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar1 = (undefined8 *)(lVar12 + _TtC5Paste11SearchField::onUndo);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041c00;
  puVar1[1] = puVar3;
  _swift_retain(puVar3);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar3);
  lVar11 = *(long *)(unaff_x20 + lVar11);
  _swift_allocObject(&DAT_100eb1a00,0x18,7);
  _swift_unknownObjectWeakInit(puVar10 + 0x10);
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste11SearchField::onRedo);
  uVar8 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100041c24;
  puVar1[1] = puVar10;
  _swift_retain(puVar10);
  FUN_100004550(uVar8,uVar2);
  _swift_release(puVar10);
  return 0;
}



/* Address: 0x10003faf0 | FUN_10003faf0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10003faf0(ID param_1)

{
  long lVar1;
  undefined8 uVar2;
  ID *pIVar3;
  ID IVar4;
  ID IVar5;
  ID IVar6;
  ID *pIVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ID local_98 [3];
  ID local_80;
  undefined **local_78;
  ID local_70;
  
  IVar8 = param_1;
  _swift_getObjectType();
  IVar4 = IVar8;
  FUN_10003e7d0();
  local_78 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_98[0] = param_1;
  local_80 = IVar8;
  local_70 = IVar4;
  FUN_10004793c(0);
  pIVar3 = local_98;
  FUN_1001f9cd8(0,pIVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar1 = _TtC5Paste9SearchBar::___lazy_storage___searchField;
  IVar4 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste9SearchBar::___lazy_storage___searchField));
  IVar5 = objc_stub::leadingAnchor(param_1);
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar4,IVar5);
  IVar4 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar6 = objc_stub::trailingAnchor(param_1);
  IVar6 = objc_stub::constraintGreaterThanOrEqualToAnchor_(IVar4,IVar6);
  IVar4 = IVar6;
  FUN_10003e4c0();
  local_78 = &PTR_PTR_100ec00e8;
  uVar2 = 0;
  local_98[0] = param_1;
  local_80 = IVar8;
  local_70 = IVar4;
  FUN_100240298(0);
  pIVar7 = local_98;
  FUN_1001f9cd8(0,pIVar7,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar1 = _TtC5Paste9SearchBar::___lazy_storage___searchButton;
  IVar8 = objc_stub::leadingAnchor
                    (*(ID *)(param_1 + _TtC5Paste9SearchBar::___lazy_storage___searchButton));
  IVar4 = objc_stub::leadingAnchor(param_1);
  IVar8 = objc_stub::constraintEqualToAnchor_(IVar8,IVar4);
  IVar4 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar9 = objc_stub::trailingAnchor(param_1);
  IVar4 = objc_stub::constraintLessThanOrEqualToAnchor_(IVar4,IVar9);
  puVar10 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar10 + 0x18) = 0xc;
  *(undefined8 *)(puVar10 + 0x10) = 6;
  puVar11 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar10 + 0x38) = puVar11;
  *(undefined ***)(puVar10 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar10 + 0x20) = pIVar3;
  uVar2 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar10 + 0x60) = uVar2;
  *(undefined ***)(puVar10 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x48) = IVar5;
  *(undefined8 *)(puVar10 + 0x88) = uVar2;
  *(undefined ***)(puVar10 + 0x90) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0x70) = IVar6;
  *(undefined **)(puVar10 + 0xb0) = puVar11;
  *(undefined ***)(puVar10 + 0xb8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar10 + 0x98) = pIVar7;
  *(undefined8 *)(puVar10 + 0xd8) = uVar2;
  *(undefined ***)(puVar10 + 0xe0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0xc0) = IVar8;
  *(undefined8 *)(puVar10 + 0x100) = uVar2;
  *(undefined ***)(puVar10 + 0x108) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar10 + 0xe8) = IVar4;
  _swift_bridgeObjectRetain(pIVar3);
  _swift_bridgeObjectRetain(pIVar7);
  puVar12 = puVar10;
  FUN_1001f8d60(puVar10);
  _swift_bridgeObjectRelease(pIVar3);
  _swift_bridgeObjectRelease(pIVar7);
  _swift_setDeallocating(puVar10);
  uVar2 = *(undefined8 *)(puVar10 + 0x10);
  puVar11 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar10 + 0x20,uVar2,puVar11);
  return puVar12;
}



/* Address: 0x10003fe8c | FUN_10003fe8c */

uint FUN_10003fe8c(undefined8 *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  
  uVar6 = *param_1;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,0x5d,UVar4.unknown,puVar3);
  }
  FUN_1002ddcf0(uVar6);
  _swift_release(pMVar2);
  return ((uint)uVar6 ^ 0xffffffff) & 1;
}



/* Address: 0x10003ff40 | FUN_10003ff40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10003ff40(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  long lVar7;
  undefined8 uVar8;
  MainActor *pMVar9;
  
  uVar8 = *param_1;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/SearchBar.swift",0x15,1,0x5e,UVar5.unknown,puVar4);
  }
  lVar7 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar7 != 0) {
    FUN_10003e658();
  }
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  pMVar9 = pMVar3;
  if (param_2 != 0) {
    pMVar9 = *(MainActor **)(param_2 + _TtC5Paste9SearchBar::inputCoordinator);
    _swift_retain(pMVar9);
    if (pMVar9 == (MainActor *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100040054);
      (*pcVar2)();
    }
    FUN_1002f7744(uVar8,1);
    _swift_release(pMVar3);
  }
  _swift_release(pMVar9);
  return;
}



/* Address: 0x100040054 | FUN_100040054 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100040054(code *param_1)

{
  code *pcVar1;
  ID self;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 *puVar6;
  Published *pPVar7;
  undefined8 uVar8;
  undefined8 local_48;
  
  if (param_1[_TtC5Paste9SearchBar::isActive] == (code)0x1) {
    if ((*(long *)(param_1 + _TtC5Paste9SearchBar::filterBrowserPopover) == 0) ||
       (pcVar1 = param_1,
       (*(byte *)(*(long *)(param_1 + _TtC5Paste9SearchBar::filterBrowserPopover) +
                 _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) == 0)) {
      FUN_10003e7d0();
      self = objc_stub::window((ID)param_1);
      if (self != 0) {
        IVar2 = self;
        FUN_100045c2c();
        FUN_100041f9c();
        objc_stub::makeFirstResponder_(self,IVar2);
      }
      return (code *)0x0;
    }
  }
  else {
    puVar6 = *(undefined8 **)(param_1 + _TtC5Paste9SearchBar::inputCoordinator);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000401ec);
      (*pcVar1)();
    }
    _swift_retain(puVar6);
    FUN_1002f7d60(0);
    _swift_release();
    pPVar7 = *(Published **)(param_1 + _TtC5Paste9SearchBar::viewModel);
    FUN_1002ddf60();
    uVar8 = *puVar6;
    puVar3 = &DAT_100c25548;
    _swift_getKeyPath(&DAT_100c25548);
    puVar4 = &DAT_100c25570;
    _swift_getKeyPath(&DAT_100c25570);
    local_48 = uVar8;
    _swift_bridgeObjectRetain(uVar8);
    _swift_retain(pPVar7);
    pcVar1 = (code *)&local_48;
    Combine::Published::_set_subscript(pPVar7,pcVar1,pPVar7,puVar3,puVar4);
    pcVar5 = *(code **)(param_1 + _TtC5Paste9SearchBar::onResignKey);
    if (pcVar5 != (code *)0x0) {
      uVar8 = *(undefined8 *)(param_1 + _TtC5Paste9SearchBar::onResignKey + 8);
      _swift_retain(uVar8);
      (*pcVar5)();
      FUN_100004550(pcVar5,uVar8);
      pcVar1 = pcVar5;
    }
  }
  return pcVar1;
}



/* Address: 0x1000401ec | FUN_1000401ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000401ec(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  Published *pPVar3;
  undefined8 local_38;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    pPVar3 = *(Published **)(param_2 + _TtC5Paste9SearchBar::viewModel);
    _swift_retain(pPVar3);
    puVar1 = &DAT_100c25548;
    _swift_getKeyPath(&DAT_100c25548);
    puVar2 = &DAT_100c25570;
    _swift_getKeyPath(&DAT_100c25570);
    local_38 = param_1;
    _swift_bridgeObjectRetain(param_1);
    Combine::Published::_set_subscript(pPVar3,&local_38,pPVar3,puVar1,puVar2);
  }
  return;
}



/* Address: 0x100040284 | FUN_100040284 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100040284(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ID IVar2;
  
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 != 0) {
    FUN_10003e7d0();
    IVar2 = 0;
    FUN_100045c2c();
    FUN_100041f9c();
    IVar2 = objc_stub::textStorage(IVar2);
    if (IVar2 != 0) {
      objc_stub::setAttributedString_(IVar2,param_1);
    }
    lVar1 = _TtC5Paste11SearchField::___lazy_storage___inputView;
    IVar2 = *(ID *)(param_4 + _TtC5Paste11SearchField::___lazy_storage___inputView);
    FUN_100041f9c();
    objc_stub::setSelectedRange_(IVar2,param_2,param_3);
    IVar2 = *(ID *)(param_4 + lVar1);
    FUN_100041f9c();
    objc_stub::scrollRangeToVisible_(IVar2,param_2,param_3);
    return 0;
  }
  return 0;
}



/* Address: 0x1000403b0 | FUN_1000403b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000403b0(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_1000403f4(param_1);
    return 0;
  }
  return 0;
}



/* Address: 0x1000403f4 | FUN_1000403f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000403f4(long *param_1)

{
  long lVar1;
  long lVar2;
  Task TVar3;
  undefined8 uVar4;
  TaskPriority TVar5;
  MainActor *this;
  MainActor *pMVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ID self;
  ID self_00;
  long extraout_x8;
  long unaff_x20;
  undefined *puVar10;
  MainActor *pMVar11;
  long lVar12;
  undefined1 auStack_d0 [48];
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_78;
  long local_70;
  long lStack_68;
  
  puVar10 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC5Paste9SearchBar::suggestionsTask;
  puVar10 = *(undefined **)(unaff_x20 + _TtC5Paste9SearchBar::suggestionsTask);
  if (puVar10 == (undefined *)0x0) {
    uVar4 = 0;
  }
  else {
    TVar3.unknown = puVar10;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar10);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  _swift_release(uVar4);
  lVar2 = _TtC5Paste9SearchBar::filterSuggestionsMenu;
  lVar12 = *param_1;
  if (lVar12 != 0) {
    pMVar11 = (MainActor *)param_1[5];
    lStack_98 = param_1[2];
    local_a0 = param_1[1];
    lStack_88 = param_1[4];
    lStack_90 = param_1[3];
    TVar5 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(auStack_d0 + -extraout_x8,1,1,TVar5.unknown)
    ;
    puVar10 = &DAT_100eb1a00;
    _swift_allocObject(&DAT_100eb1a00,0x18,7);
    _swift_unknownObjectWeakInit(puVar10 + 0x10);
    lStack_68 = param_1[3];
    local_70 = param_1[2];
    local_78 = lVar12;
    this = Swift::MainActor::typeMetadataAccessor();
    puVar8 = PTR_typeMetadataAccessor_100eaec10;
    FUN_100011090(param_1,auStack_d0,&DAT_100fa8508,&DAT_100c25598);
    _swift_retain(puVar10);
    FUN_100041c48(&local_78,auStack_d0);
    FUN_10000ca28(&local_70,auStack_d0);
    pMVar6 = pMVar11;
    _swift_retain();
    pMVar6 = Swift::MainActor::get_shared(this,pMVar6);
    puVar7 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar8 = &DAT_100eb1a28;
    _swift_allocObject(&DAT_100eb1a28,0x58,7);
    *(MainActor **)(puVar8 + 0x10) = pMVar6;
    *(undefined8 **)(puVar8 + 0x18) = puVar7;
    *(undefined **)(puVar8 + 0x20) = puVar10;
    *(long *)(puVar8 + 0x28) = lVar12;
    *(long *)(puVar8 + 0x38) = lStack_98;
    *(long *)(puVar8 + 0x30) = local_a0;
    *(long *)(puVar8 + 0x48) = lStack_88;
    *(long *)(puVar8 + 0x40) = lStack_90;
    *(MainActor **)(puVar8 + 0x50) = pMVar11;
    _swift_release(puVar10);
    uVar4 = 0;
    FUN_1000645b0(0,0,auStack_d0 + -extraout_x8,&DAT_100c255a0,puVar8);
    FUN_100041d40(&local_78);
    FUN_10000caac(&local_70);
    _swift_release(pMVar11);
    uVar9 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar4;
    _swift_release(uVar9);
    return uVar9;
  }
  self = *(ID *)(unaff_x20 + _TtC5Paste9SearchBar::filterSuggestionsMenu);
  if (self != 0) {
    FUN_10005a17c();
    self_00 = objc_stub::parentWindow(self);
    objc_stub::removeChildWindow_(self_00,self);
    objc_stub::orderOut_(self,0);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  return 0;
}



/* Address: 0x1000406ac | FUN_1000406ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1000406ac(ID param_1,long param_2)

{
  ID self;
  Dictionary<undefined,undefined> DVar1;
  undefined *puVar2;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10003e7d0();
    FUN_10000ec2c(0,&DAT_100fa8520,&PTR__OBJC_CLASS___NSAttributedString_100f8d688);
    self = param_1;
    _swift_bridgeObjectRetain();
    FUN_100045c2c();
    FUN_100041f9c();
    objc_stub::typingAttributes(self);
    FUN_100003980(0);
    FUN_100003a00(&DAT_100fa8660,FUN_100003980,&TargetProtocolConformanceDescriptor_100c2262c);
    DVar1 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    puVar2 = &DAT_100eb1aa0;
    _swift_allocObject(&DAT_100eb1aa0,0x18,7);
    *(long *)(puVar2 + 0x10) = param_2;
    FUN_1002f8d98(param_1,DVar1.unknown,FUN_100041e70,puVar2);
    return;
  }
  puVar2 = &_OBJC_CLASS___NSAttributedString;
  _objc_allocWithZone();
  objc_stub::init((ID)puVar2);
  return;
}



/* Address: 0x1000407f8 | FUN_1000407f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000407f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ID IVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 extraout_d0;
  undefined8 extraout_d0_00;
  undefined8 uVar4;
  
  param_8 = param_8 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  uVar3 = 0;
  uVar4 = 0;
  if (param_8 == 0) {
    uVar2 = 1;
    param_4 = 0;
    param_5 = 0;
  }
  else {
    FUN_10003e7d0();
    IVar1 = 0;
    FUN_100045c2c();
    FUN_100041f9c();
    IVar1 = objc_stub::textLayoutManager(IVar1);
    if (IVar1 == 0) {
      uVar2 = 1;
      param_4 = 0;
      param_5 = 0;
      uVar3 = 0;
      uVar4 = 0;
    }
    else {
      IVar1 = objc_stub::textViewportLayoutController(IVar1);
      objc_stub::layoutViewport(IVar1);
      uVar3 = extraout_d0;
      FUN_100046e28(param_6,param_7);
      IVar1 = *(ID *)(param_8 + _TtC5Paste11SearchField::___lazy_storage___inputView);
      FUN_100041f9c();
      uVar4 = param_3;
      objc_stub::convertRect_toView_(IVar1,uVar3,param_8);
      uVar2 = 0;
      uVar3 = extraout_d0_00;
    }
  }
  param_1[1] = uVar4;
  *param_1 = uVar3;
  param_1[3] = param_5;
  param_1[2] = param_4;
  *(undefined1 *)(param_1 + 4) = uVar2;
  return;
}



/* Address: 0x100040990 | FUN_100040990 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100040990(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  uint uVar2;
  long lVar3;
  
  param_4 = param_4 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    lVar3 = *(long *)(param_4 + _TtC5Paste9SearchBar::inputCoordinator);
    _swift_retain(lVar3);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100040a24);
      (*pcVar1)();
    }
    FUN_1002f7370(param_1,param_2,param_3);
    _swift_release(lVar3);
    uVar2 = (uint)param_1 & 1;
  }
  return uVar2;
}



/* Address: 0x100040a24 | FUN_100040a24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040a24(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  
  param_3 = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_3 == 0) {
    return;
  }
  lVar2 = *(long *)(param_3 + _TtC5Paste9SearchBar::inputCoordinator);
  _swift_retain(lVar2);
  if (lVar2 != 0) {
    FUN_1002f7dd8(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100040aa4);
  (*pcVar1)();
}



/* Address: 0x100040aa4 | FUN_100040aa4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100040aa4(undefined8 param_1,long param_2)

{
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    FUN_10003f044(param_1);
    return 0;
  }
  return 0;
}



/* Address: 0x100040ae8 | FUN_100040ae8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_100040ae8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return (code *)0x0;
  }
  pcVar1 = *(code **)(param_1 + _TtC5Paste9SearchBar::onResignKey);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + _TtC5Paste9SearchBar::onResignKey))[1];
    FUN_100011128(pcVar1,uVar2);
    (*pcVar1)(0);
    FUN_100004550(pcVar1,uVar2);
    return pcVar1;
  }
  return (code *)0x0;
}



/* Address: 0x100040b70 | FUN_100040b70 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040b70(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auStack_48 [24];
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar5 = _TtC5Paste9SearchBar::inputCoordinator;
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _TtC5Paste9SearchBar::inputCoordinator);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100040c60);
      (*pcVar6)();
    }
    _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
    uVar3 = *(ulong *)(lVar2 + 0x10);
    uVar1 = uVar3;
    _swift_bridgeObjectRetain();
    FUN_1002ddcf0();
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(param_1 + lVar5);
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100040c64);
        (*pcVar6)();
      }
      _swift_retain(lVar5);
      FUN_1002f7d60(1);
      _swift_release(lVar5);
    }
    else {
      pcVar6 = *(code **)(param_1 + _TtC5Paste9SearchBar::onDismiss);
      if (pcVar6 != (code *)0x0) {
        uVar4 = ((undefined8 *)(param_1 + _TtC5Paste9SearchBar::onDismiss))[1];
        _swift_retain(uVar4);
        (*pcVar6)();
        FUN_100004550(pcVar6,uVar4);
      }
    }
  }
  return;
}



/* Address: 0x100040c64 | FUN_100040c64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040c64(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + _TtC5Paste9SearchBar::inputCoordinator);
  _swift_retain(lVar2);
  if (lVar2 != 0) {
    FUN_1002f7d60(1);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100040cc8);
  (*pcVar1)();
}



/* Address: 0x100040cc8 | FUN_100040cc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040cc8(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uStack_48 = 0;
    local_50 = 0;
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_58 = 0;
    local_60 = 0;
    FUN_1000403f4(&local_60);
    lVar2 = *(long *)(param_1 + _TtC5Paste9SearchBar::inputCoordinator);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100040dc8);
      (*pcVar5)();
    }
    _swift_beginAccess(lVar2 + 0x10,auStack_78,0,0);
    uVar3 = *(ulong *)(lVar2 + 0x10);
    uVar1 = uVar3;
    _swift_bridgeObjectRetain();
    FUN_1002ddcf0();
    _swift_bridgeObjectRelease(uVar3);
    if (((uVar1 & 1) != 0) &&
       ((*(long *)(param_1 + _TtC5Paste9SearchBar::filterBrowserPopover) == 0 ||
        ((*(byte *)(*(long *)(param_1 + _TtC5Paste9SearchBar::filterBrowserPopover) +
                   _TtC5Paste20FilterBrowserPopover::isDisplayed) & 1) == 0)))) {
      pcVar5 = *(code **)(param_1 + _TtC5Paste9SearchBar::onDismiss);
      if (pcVar5 != (code *)0x0) {
        uVar4 = ((undefined8 *)(param_1 + _TtC5Paste9SearchBar::onDismiss))[1];
        _swift_retain(uVar4);
        (*pcVar5)();
        FUN_100004550(pcVar5,uVar4);
      }
    }
  }
  return;
}



/* Address: 0x100040dc8 | FUN_100040dc8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040dc8(long param_1,code *param_2)

{
  code *pcVar1;
  long lVar2;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar2 = *(long *)(param_1 + _TtC5Paste9SearchBar::inputCoordinator);
    _swift_retain(lVar2);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100040e34);
      (*pcVar1)();
    }
    (*param_2)(0);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x100040e34 | FUN_100040e34 */

void FUN_100040e34(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x20) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x28) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x30) = puVar3;
  _swift_task_switch(FUN_100040ec4,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100040ec4 | FUN_100040ec4 */

void FUN_100040ec4(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x10) + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
    plVar2 = (long *)0xb0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100040f44;
    FUN_100040fc0(*(undefined8 *)(unaff_x22 + 0x18));
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x000100040f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100040f44 | FUN_100040f44 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100040f44(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
  _swift_task_switch(FUN_100040f90,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}


