/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004ca318 | FUN_1004ca318 */

void FUN_1004ca318(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_1004cbdb8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x1004ca344 | FUN_1004ca344 */

void FUN_1004ca344(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1004ca110(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1004ca360 | FUN_1004ca360 */

void FUN_1004ca360(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbb58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c510f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c510f8,&DAT_100eda1c0);
  DAT_100fcbb58 = pTVar1;
  return;
}



/* Address: 0x1004ca3a0 | FUN_1004ca3a0 */

void FUN_1004ca3a0(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcbb68;
    FUN_1000f8b08(&DAT_100fcbb68,&USHORT_100c50b68);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1004ca408 | FUN_1004ca408 */

void FUN_1004ca408(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fcbcc8,&TargetStructDescriptor_100cb2160);
  return;
}



/* Address: 0x1004ca41c | FUN_1004ca41c */

undefined8 FUN_1004ca41c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar1)) {
      if (*(char *)(param_1 + 5) == '\x01') {
        if ((char)param_2[5] != '\x01') {
          return 0;
        }
      }
      else {
        if ((char)param_2[5] == '\x01') {
          return 0;
        }
        if (param_1[4] != param_2[4]) {
          return 0;
        }
      }
      _Var2.unknown = (undefined *)param_1[7];
      puVar3 = (undefined *)param_2[7];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar3 == (undefined *)0x0) {
          return 0;
        }
        if ((((undefined *)param_1[6] != (undefined *)param_2[6]) || (_Var2.unknown != puVar3)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[6],_Var2,
                               (_StringComparisonResult)(__int8)(undefined *)param_2[6]), !bVar1)) {
          return 0;
        }
      }
      _Var2.unknown = (undefined *)param_1[9];
      puVar3 = (undefined *)param_2[9];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 == (undefined *)0x0) {
          return 1;
        }
      }
      else if (puVar3 != (undefined *)0x0) {
        if (((undefined *)param_1[8] == (undefined *)param_2[8]) && (_Var2.unknown == puVar3)) {
          return 1;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[8],_Var2,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[8]);
        if (bVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x1004ca538 | FUN_1004ca538 */

undefined8 FUN_1004ca538(long param_1,long param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  bool bVar6;
  URL UVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long lVar14;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  long lVar18;
  undefined1 auStack_b0 [8];
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  undefined1 *local_78;
  long local_70;
  long local_68;
  
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar16 = *(long *)(UVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar8 = &DAT_100fcb378;
  local_78 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar12 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12;
  local_98 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_00;
  local_88 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar12 - extraout_x12_01;
  puVar8 = &DAT_100fcb580;
  FUN_1000f7830(&DAT_100fcb580,&DAT_100c503a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar8 + -8) + 0x40));
  lVar13 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_02;
  local_90 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar13 - extraout_x12_04;
  lVar18 = (long)*(int *)(puVar8 + 0x30);
  local_80 = puVar8;
  local_70 = param_1;
  FUN_1000f8cac(param_1,lVar14,&DAT_100fcb378,&DAT_100c50170);
  FUN_1000f8cac(param_2,lVar14 + lVar18,&DAT_100fcb378,&DAT_100c50170);
  pcVar17 = *(code **)(lVar16 + 0x30);
  lVar9 = lVar14;
  local_68 = lVar16;
  (*pcVar17)(lVar14,1,UVar7.unknown);
  if ((int)lVar9 == 1) {
    lVar18 = lVar14 + lVar18;
    (*pcVar17)(lVar18,1,UVar7.unknown);
    if ((int)lVar18 != 1) goto LAB_1004cac68;
    FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
  }
  else {
    FUN_1000f8cac(lVar14,lVar12,&DAT_100fcb378,&DAT_100c50170);
    lVar9 = lVar14 + lVar18;
    (*pcVar17)(lVar9,1,UVar7.unknown);
    lVar16 = local_68;
    puVar4 = local_78;
    if ((int)lVar9 == 1) {
      (**(code **)(local_68 + 8))(lVar12,UVar7.unknown);
      goto LAB_1004cac68;
    }
    (**(code **)(local_68 + 0x20))(local_78,lVar14 + lVar18,UVar7.unknown);
    puVar10 = &DAT_100fcb590;
    FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
    bVar6 = Swift::Equatable::___infix(lVar12,puVar4,UVar7.unknown,puVar10);
    pcVar15 = *(code **)(lVar16 + 8);
    (*pcVar15)(puVar4,UVar7.unknown);
    (*pcVar15)(lVar12,UVar7.unknown);
    FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
    if (!bVar6) {
      return 0;
    }
  }
  lVar16 = 0;
  FUN_1004ce850();
  puVar8 = local_80;
  iVar3 = *(int *)(lVar16 + 0x14);
  lVar18 = (long)*(int *)(local_80 + 0x30);
  FUN_1000f8cac(local_70 + iVar3,lVar13,&DAT_100fcb378,&DAT_100c50170);
  FUN_1000f8cac(param_2 + iVar3,lVar13 + lVar18,&DAT_100fcb378,&DAT_100c50170);
  lVar12 = lVar13;
  (*pcVar17)(lVar13,1,UVar7.unknown);
  lVar9 = local_88;
  lVar14 = lVar13;
  if ((int)lVar12 == 1) {
    lVar18 = lVar13 + lVar18;
    (*pcVar17)(lVar18,1,UVar7.unknown);
    if ((int)lVar18 != 1) goto LAB_1004cac68;
    FUN_1000fb4c4(lVar13,&DAT_100fcb378,&DAT_100c50170);
  }
  else {
    FUN_1000f8cac(lVar13,local_88,&DAT_100fcb378,&DAT_100c50170);
    lVar12 = lVar13 + lVar18;
    (*pcVar17)(lVar12,1,UVar7.unknown);
    lVar5 = local_68;
    puVar4 = local_78;
    if ((int)lVar12 == 1) {
      (**(code **)(local_68 + 8))(lVar9,UVar7.unknown);
      goto LAB_1004cac68;
    }
    (**(code **)(local_68 + 0x20))(local_78,lVar13 + lVar18,UVar7.unknown);
    puVar10 = &DAT_100fcb590;
    FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
    bVar6 = Swift::Equatable::___infix(lVar9,puVar4,UVar7.unknown,puVar10);
    pcVar15 = *(code **)(lVar5 + 8);
    (*pcVar15)(puVar4,UVar7.unknown);
    (*pcVar15)(lVar9,UVar7.unknown);
    FUN_1000fb4c4(lVar13,&DAT_100fcb378,&DAT_100c50170);
    if (!bVar6) {
      return 0;
    }
  }
  lVar14 = local_90;
  iVar3 = *(int *)(lVar16 + 0x18);
  lVar18 = (long)*(int *)(puVar8 + 0x30);
  FUN_1000f8cac(local_70 + iVar3,local_90,&DAT_100fcb378,&DAT_100c50170);
  FUN_1000f8cac(param_2 + iVar3,lVar14 + lVar18,&DAT_100fcb378,&DAT_100c50170);
  lVar12 = lVar14;
  (*pcVar17)(lVar14,1,UVar7.unknown);
  lVar9 = local_98;
  if ((int)lVar12 == 1) {
    lVar18 = lVar14 + lVar18;
    (*pcVar17)(lVar18,1,UVar7.unknown);
    if ((int)lVar18 != 1) goto LAB_1004cac68;
    FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
  }
  else {
    FUN_1000f8cac(lVar14,local_98,&DAT_100fcb378,&DAT_100c50170);
    lVar12 = lVar14 + lVar18;
    (*pcVar17)(lVar12,1,UVar7.unknown);
    lVar13 = local_68;
    puVar4 = local_78;
    if ((int)lVar12 == 1) {
      (**(code **)(local_68 + 8))(lVar9,UVar7.unknown);
      goto LAB_1004cac68;
    }
    (**(code **)(local_68 + 0x20))(local_78,lVar14 + lVar18,UVar7.unknown);
    puVar10 = &DAT_100fcb590;
    FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
    bVar6 = Swift::Equatable::___infix(lVar9,puVar4,UVar7.unknown,puVar10);
    pcVar15 = *(code **)(lVar13 + 8);
    (*pcVar15)(puVar4,UVar7.unknown);
    (*pcVar15)(lVar9,UVar7.unknown);
    FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
    if (!bVar6) {
      return 0;
    }
  }
  lVar14 = local_a0;
  iVar3 = *(int *)(lVar16 + 0x1c);
  lVar18 = (long)*(int *)(puVar8 + 0x30);
  FUN_1000f8cac(local_70 + iVar3,local_a0,&DAT_100fcb378,&DAT_100c50170);
  FUN_1000f8cac(param_2 + iVar3,lVar14 + lVar18,&DAT_100fcb378,&DAT_100c50170);
  lVar12 = lVar14;
  (*pcVar17)(lVar14,1,UVar7.unknown);
  lVar9 = local_a8;
  if ((int)lVar12 == 1) {
    lVar18 = lVar14 + lVar18;
    (*pcVar17)(lVar18,1,UVar7.unknown);
    if ((int)lVar18 == 1) {
      FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
LAB_1004cad1c:
      uVar11 = *(ulong *)(local_70 + *(int *)(lVar16 + 0x20));
      lVar18 = *(long *)(param_2 + *(int *)(lVar16 + 0x20));
      if (uVar11 == 0) {
        if (lVar18 != 0) {
          return 0;
        }
      }
      else {
        if (lVar18 == 0) {
          return 0;
        }
        FUN_1004827e8();
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      uVar11 = *(ulong *)(local_70 + *(int *)(lVar16 + 0x24));
      lVar18 = *(long *)(param_2 + *(int *)(lVar16 + 0x24));
      if (uVar11 == 0) {
        if (lVar18 != 0) {
          return 0;
        }
      }
      else {
        if (lVar18 == 0) {
          return 0;
        }
        FUN_1004827e8();
        if ((uVar11 & 1) == 0) {
          return 0;
        }
      }
      bVar1 = *(byte *)(local_70 + *(int *)(lVar16 + 0x28));
      bVar2 = *(byte *)(param_2 + *(int *)(lVar16 + 0x28));
      if (bVar1 == 2) {
        if (bVar2 != 2) {
          return 0;
        }
        return 1;
      }
      if (bVar2 == 2) {
        return 0;
      }
      if (((bVar1 ^ bVar2) & 1) != 0) {
        return 0;
      }
      return 1;
    }
  }
  else {
    FUN_1000f8cac(lVar14,local_a8,&DAT_100fcb378,&DAT_100c50170);
    lVar12 = lVar14 + lVar18;
    (*pcVar17)(lVar12,1,UVar7.unknown);
    lVar13 = local_68;
    puVar4 = local_78;
    if ((int)lVar12 != 1) {
      (**(code **)(local_68 + 0x20))(local_78,lVar14 + lVar18,UVar7.unknown);
      puVar10 = &DAT_100fcb590;
      FUN_100003a00(&DAT_100fcb590,PTR_typeMetadataAccessor_100ea71a8,
                    PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
      bVar6 = Swift::Equatable::___infix(lVar9,puVar4,UVar7.unknown,puVar10);
      pcVar17 = *(code **)(lVar13 + 8);
      (*pcVar17)(puVar4,UVar7.unknown);
      (*pcVar17)(lVar9,UVar7.unknown);
      FUN_1000fb4c4(lVar14,&DAT_100fcb378,&DAT_100c50170);
      if (!bVar6) {
        return 0;
      }
      goto LAB_1004cad1c;
    }
    (**(code **)(local_68 + 8))(lVar9,UVar7.unknown);
  }
LAB_1004cac68:
  FUN_1000fb4c4(lVar14,&DAT_100fcb580,&DAT_100c503a0);
  return 0;
}



/* Address: 0x1004cada8 | FUN_1004cada8 */

undefined8
FUN_1004cada8(_StringGuts param_1,_StringGuts param_2,ulong param_3,ulong param_4,undefined *param_5
             ,undefined *param_6,undefined8 param_7,long param_8)

{
  bool bVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    if (param_6 != (undefined *)0x0) {
      return 0;
    }
  }
  else {
    if (param_6 == (undefined *)0x0) {
      return 0;
    }
    if (((param_1.unknown != param_5) || (param_2.unknown != param_6)) &&
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          (param_1,param_2,(_StringComparisonResult)(__int8)param_5), !bVar1)) {
      return 0;
    }
  }
  FUN_100555410(param_3,param_7);
  if ((param_3 & 1) != 0) {
    if (param_4 == 0) {
      if (param_8 == 0) {
        return 1;
      }
    }
    else if ((param_8 != 0) && (FUN_1004827e8(param_4,param_8), (param_4 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1004cae4c | FUN_1004cae4c */

undefined8 FUN_1004cae4c(long *param_1,long *param_2)

{
  int iVar1;
  bool bVar2;
  Date DVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar16 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar9 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_00;
  puVar4 = &DAT_100fcbe98;
  FUN_1000f7830(&DAT_100fcbe98,&DAT_100c51178);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar12 - extraout_x8_01;
  lVar6 = *param_1;
  lVar7 = *param_2;
  local_68 = puVar9;
  if (lVar6 == 0) {
    if (lVar7 != 0) {
      return 0;
    }
  }
  else {
    if (lVar7 == 0) {
      return 0;
    }
    lVar13 = *(long *)(lVar6 + 0x10);
    if (lVar13 != *(long *)(lVar7 + 0x10)) {
      return 0;
    }
    if (lVar13 != 0 && lVar6 != lVar7) {
      puVar14 = (undefined8 *)(lVar7 + 0x28);
      puVar10 = (undefined8 *)(lVar6 + 0x28);
      do {
        if (((undefined *)puVar10[-1] != (undefined *)puVar14[-1] ||
             (undefined *)*puVar10 != (undefined *)*puVar14) &&
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar10[-1],(undefined *)*puVar10,
                               (_StringComparisonResult)(__int8)(undefined *)puVar14[-1]), !bVar2))
        {
          return 0;
        }
        puVar14 = puVar14 + 2;
        puVar10 = puVar10 + 2;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  uVar15 = param_1[1];
  lVar6 = param_2[1];
  if (uVar15 == 0) {
    if (lVar6 != 0) {
      return 0;
    }
  }
  else {
    if (lVar6 == 0) {
      return 0;
    }
    _swift_bridgeObjectRetain(lVar6);
    uVar5 = uVar15;
    _swift_bridgeObjectRetain();
    FUN_10037b278();
    _swift_bridgeObjectRelease(uVar15);
    _swift_bridgeObjectRelease(lVar6);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  lVar6 = 0;
  FUN_1004ca408();
  iVar1 = *(int *)(lVar6 + 0x18);
  lVar6 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000f8cac((long)param_1 + (long)iVar1,lVar8,&DAT_100fcb550,&USHORT_100c50b50);
  FUN_1000f8cac((long)param_2 + (long)iVar1,lVar8 + lVar6,&DAT_100fcb550,&USHORT_100c50b50);
  pcVar11 = *(code **)(lVar16 + 0x30);
  lVar7 = lVar8;
  (*pcVar11)(lVar8,1,DVar3.unknown);
  if ((int)lVar7 == 1) {
    lVar6 = lVar8 + lVar6;
    (*pcVar11)(lVar6,1,DVar3.unknown);
    if ((int)lVar6 == 1) {
      FUN_1000fb4c4(lVar8,&DAT_100fcb550,&USHORT_100c50b50);
      return 1;
    }
  }
  else {
    FUN_1000f8cac(lVar8,lVar12,&DAT_100fcb550,&USHORT_100c50b50);
    lVar7 = lVar8 + lVar6;
    (*pcVar11)(lVar7,1,DVar3.unknown);
    puVar9 = local_68;
    if ((int)lVar7 != 1) {
      (**(code **)(lVar16 + 0x20))(local_68,lVar8 + lVar6,DVar3.unknown);
      puVar4 = &DAT_100fcbea0;
      FUN_100003a00(&DAT_100fcbea0,PTR_typeMetadataAccessor_100ea7480,
                    PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
      bVar2 = Swift::Equatable::___infix(lVar12,puVar9,DVar3.unknown,puVar4);
      pcVar11 = *(code **)(lVar16 + 8);
      (*pcVar11)(puVar9,DVar3.unknown);
      (*pcVar11)(lVar12,DVar3.unknown);
      FUN_1000fb4c4(lVar8,&DAT_100fcb550,&USHORT_100c50b50);
      if (!bVar2) {
        return 0;
      }
      return 1;
    }
    (**(code **)(lVar16 + 8))(lVar12,DVar3.unknown);
  }
  FUN_1000fb4c4(lVar8,&DAT_100fcbe98,&DAT_100c51178);
  return 0;
}



/* Address: 0x1004cb18c | FUN_1004cb18c */

void FUN_1004cb18c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcbba8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c510a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c510a8,&DAT_100eda130);
  DAT_100fcbba8 = pTVar1;
  return;
}



/* Address: 0x1004cb1cc | FUN_1004cb1cc */

void FUN_1004cb1cc(long *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcb568;
    FUN_1000f8b08(&DAT_100fcb568,&DAT_100c50360);
    local_38 = param_2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x1004cb234 | FUN_1004cb234 */

/* WARNING: Removing unreachable block (ram,0x0001004cb3c4) */
/* WARNING: Removing unreachable block (ram,0x0001004cb460) */
/* WARNING: Removing unreachable block (ram,0x0001004cb464) */
/* WARNING: Removing unreachable block (ram,0x0001004cb478) */
/* WARNING: Removing unreachable block (ram,0x0001004cb300) */

undefined1 * FUN_1004cb234(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 local_61;
  undefined1 local_58 [8];
  
  puVar1 = &DAT_100fcbe50;
  FUN_1000f7830(&DAT_100fcbe50,&DAT_100c51150);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = *(undefined1 **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004cea90();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    puVar2 = local_58;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    puVar3 = &DAT_100fcbbb0;
    FUN_1000f7830(&DAT_100fcbbb0,&USHORT_100c50b80);
    local_61 = 1;
    puVar4 = &DAT_100fcbe60;
    FUN_1004cead0(&DAT_100fcbe60,&DAT_100fcbb98,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(local_58,puVar3,&local_61,puVar1,puVar3,puVar4);
    puVar3 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_61 = 2;
    puVar4 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_58,puVar3,&local_61,puVar1,puVar3,puVar4);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return puVar2;
}



/* Address: 0x1004cb494 | FUN_1004cb494 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004cb4d0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004cb494(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x1004cb4f8 | FUN_1004cb4f8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004cb534 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004cb4f8(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x1004cb55c | FUN_1004cb55c */

/* WARNING: Removing unreachable block (ram,0x0001004cb780) */
/* WARNING: Removing unreachable block (ram,0x0001004cb6a0) */
/* WARNING: Removing unreachable block (ram,0x0001004cb714) */
/* WARNING: Removing unreachable block (ram,0x0001004cb728) */
/* WARNING: Removing unreachable block (ram,0x0001004cb73c) */
/* WARNING: Removing unreachable block (ram,0x0001004cb744) */
/* WARNING: Removing unreachable block (ram,0x0001004cb748) */
/* WARNING: Removing unreachable block (ram,0x0001004cb638) */

void FUN_1004cb55c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined *local_180;
  void *local_178;
  void *local_170;
  undefined *local_168;
  undefined1 auStack_160 [80];
  char *local_110;
  void *pvStack_108;
  char *pcStack_100;
  void *pvStack_f8;
  char **local_f0;
  undefined8 uStack_e8;
  char **ppcStack_e0;
  undefined *puStack_d8;
  undefined1 *local_d0;
  undefined *puStack_c8;
  String local_b8;
  String local_a8;
  char **local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char **local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined *puStack_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcbe70;
  FUN_1000f7830(&DAT_100fcbe70,&DAT_100c51158);
  lVar7 = *(long *)(puVar1 + -8);
  local_168 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004ceb5c();
  Swift::Decoder::_container();
  puVar1 = local_168;
  if (unaff_x21 == 0) {
    local_110 = (char *)((ulong)local_110 & 0xffffffffffffff00);
    local_b8 = Swift::KeyedDecodingContainer::_decode(&local_110,local_168);
    local_170 = local_b8.bridgeObject;
    local_110._0_1_ = 1;
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_110,puVar1);
    local_178 = local_a8.bridgeObject;
    local_110._0_1_ = 2;
    ppcVar2 = &local_110;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_90 = SUB81(puVar5,0);
    local_110._0_1_ = 3;
    ppcVar3 = &local_110;
    puVar5 = puVar1;
    local_98 = ppcVar2;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_51 = 4;
    puVar4 = &local_51;
    puVar6 = puVar1;
    local_180 = puVar5;
    local_88 = ppcVar3;
    puStack_80 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar7 + 8))((long)&local_180 - extraout_x8,puVar1);
    uStack_e8 = CONCAT71(uStack_8f,uStack_90);
    local_f0 = local_98;
    puStack_d8 = puStack_80;
    ppcStack_e0 = local_88;
    pvStack_108 = local_b8.bridgeObject;
    local_110 = local_b8.str;
    pvStack_f8 = local_a8.bridgeObject;
    pcStack_100 = local_a8.str;
    local_d0 = puVar4;
    puStack_c8 = puVar6;
    local_78 = puVar4;
    puStack_70 = puVar6;
    FUN_1004ceb9c(&local_110,auStack_160);
    FUN_100004594(param_2);
    FUN_1004b8b94(&local_b8);
    param_1[5] = uStack_e8;
    param_1[4] = local_f0;
    param_1[7] = puStack_d8;
    param_1[6] = ppcStack_e0;
    param_1[9] = puStack_c8;
    param_1[8] = local_d0;
    param_1[1] = pvStack_108;
    *param_1 = local_110;
    param_1[3] = pvStack_f8;
    param_1[2] = pcStack_100;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004cb80c | FUN_1004cb80c */

undefined4 FUN_1004cb80c(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_65756c6176 || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65756c6176,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x7079546e656b6f74) &&
          (param_2 == (undefined1 *)0xe900000000000065)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7079546e656b6f74,(_StringGuts)0xe900000000000065,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 == (undefined1 *)0x4173657269707865) &&
          (param_2 == (undefined1 *)0xe900000000000074)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4173657269707865,(_StringGuts)0xe900000000000074,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 2;
      }
      if (((param_1 == (undefined1 *)0x7365706f6373) && (param_2 == &DAT_e600000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7365706f6373,(_StringGuts)0xe600000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      if (((param_1 == (undefined1 *)0xd000000000000013) &&
          (param_2 == (undefined1 *)0x8000000100daaf60)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000013,(_StringGuts)0x8000000100daaf60,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 4;
      }
      if (((param_1 != (undefined1 *)0x5468736572666572) ||
          (param_2 != (undefined1 *)0xec0000006e656b6f)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x5468736572666572,(_StringGuts)0xec0000006e656b6f,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x4449746e65696c63) && (param_2 == &DAT_e800000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e800000000000000);
          return 6;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x4449746e65696c63,(_StringGuts)0xe800000000000000,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 6;
        }
        return 7;
      }
      _swift_bridgeObjectRelease(param_2);
      return 5;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004cba60 | FUN_1004cba60 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004cba9c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004cba60(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (3 < uVar1) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x1004cbac4 | FUN_1004cbac4 */

/* WARNING: Removing unreachable block (ram,0x0001004cbc90) */
/* WARNING: Removing unreachable block (ram,0x0001004cbbfc) */
/* WARNING: Removing unreachable block (ram,0x0001004cbc48) */
/* WARNING: Removing unreachable block (ram,0x0001004cbca4) */
/* WARNING: Removing unreachable block (ram,0x0001004cbcb8) */
/* WARNING: Removing unreachable block (ram,0x0001004cbcc4) */
/* WARNING: Removing unreachable block (ram,0x0001004cbcc8) */
/* WARNING: Removing unreachable block (ram,0x0001004cbb94) */

void FUN_1004cbac4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined *local_140;
  undefined *local_138;
  undefined1 auStack_130 [64];
  char *local_f0;
  void *pvStack_e8;
  char **ppcStack_e0;
  undefined *puStack_d8;
  char **local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  String local_a8;
  char **local_98;
  undefined *puStack_90;
  char **local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  undefined7 uStack_77;
  undefined1 local_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcc0e0;
  FUN_1000f7830(&DAT_100fcc0e0,&DAT_100c515d0);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004cf084();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_f0 = (char *)((ulong)local_f0 & 0xffffffffffffff00);
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_f0,puVar1);
    local_f0._0_1_ = 1;
    ppcVar2 = &local_f0;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_f0._0_1_ = 2;
    ppcVar3 = &local_f0;
    puVar6 = puVar1;
    local_138 = puVar5;
    local_98 = ppcVar2;
    puStack_90 = puVar5;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    uStack_80 = SUB81(puVar6,0);
    uStack_7f = (undefined7)((ulong)puVar6 >> 8);
    local_51 = 3;
    puVar4 = &local_51;
    puVar5 = puVar1;
    local_140 = puVar6;
    local_88 = ppcVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar7 + 8))((long)&local_140 - extraout_x8,puVar1);
    local_78 = SUB81(puVar4,0);
    uStack_77 = (undefined7)((ulong)puVar4 >> 8);
    local_70 = SUB81(puVar5,0);
    pvStack_e8 = local_a8.bridgeObject;
    local_f0 = local_a8.str;
    puStack_d8 = puStack_90;
    ppcStack_e0 = local_98;
    uStack_c8 = uStack_80;
    local_d0 = local_88;
    uStack_bf = CONCAT17(local_70,uStack_77);
    uStack_c7 = uStack_7f;
    uStack_c0 = local_78;
    FUN_1004cf0c4(&local_f0,auStack_130);
    FUN_100004594(param_2);
    FUN_1004cf0f8(&local_a8);
    param_1[1] = pvStack_e8;
    *param_1 = local_f0;
    param_1[3] = puStack_d8;
    param_1[2] = ppcStack_e0;
    param_1[5] = CONCAT71(uStack_c7,uStack_c8);
    param_1[4] = local_d0;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_bf;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_c0,uStack_c7);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004cbd4c | FUN_1004cbd4c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004cbd8c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1004cbd4c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1004cbdb8 | FUN_1004cbdb8 */

/* WARNING: Removing unreachable block (ram,0x0001004cbf48) */
/* WARNING: Removing unreachable block (ram,0x0001004cbfe4) */
/* WARNING: Removing unreachable block (ram,0x0001004cbfe8) */
/* WARNING: Removing unreachable block (ram,0x0001004cbffc) */
/* WARNING: Removing unreachable block (ram,0x0001004cbe84) */

char * FUN_1004cbdb8(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  String SVar6;
  undefined1 local_61;
  undefined1 local_58 [8];
  
  puVar1 = &DAT_100fcbe90;
  FUN_1000f7830(&DAT_100fcbe90,&DAT_100c51170);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004cb18c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    SVar6 = Swift::KeyedDecodingContainer::_decode(local_58,puVar1);
    pcVar2 = SVar6.str;
    puVar3 = &DAT_100fcbbb0;
    FUN_1000f7830(&DAT_100fcbbb0,&USHORT_100c50b80);
    local_61 = 1;
    puVar4 = &DAT_100fcbe60;
    FUN_1004cead0(&DAT_100fcbe60,&DAT_100fcbb98,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(local_58,puVar3,&local_61,puVar1,puVar3,puVar4);
    puVar3 = &DAT_100fcb568;
    FUN_1000f7830(&DAT_100fcb568,&DAT_100c50360);
    local_61 = 2;
    puVar4 = &DAT_100fcbe68;
    FUN_1004cb1cc(&DAT_100fcbe68,
                  PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240
                  ,PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(local_58,puVar3,&local_61,puVar1,puVar3,puVar4);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffff90 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x1004cc018 | FUN_1004cc018 */

undefined1  [16] FUN_1004cc018(void)

{
  return ZEXT816(0x100ed9f08);
}



/* Address: 0x1004cc028 | FUN_1004cc028 */

long * FUN_1004cc028(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  Date DVar6;
  undefined *puVar7;
  long lVar8;
  URL UVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar3 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar3;
    lVar12 = (long)*(int *)(param_3 + 0x18);
    DVar6 = Foundation::Date::typeMetadataAccessor();
    lVar13 = *(long *)(DVar6.unknown + -8);
    pcVar14 = *(code **)(lVar13 + 0x30);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar3);
    lVar8 = (long)param_2 + lVar12;
    (*pcVar14)(lVar8,1,DVar6.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar13 + 0x10))((long)param_1 + lVar12,(long)param_2 + lVar12,DVar6.unknown);
      (**(code **)(lVar13 + 0x38))((long)param_1 + lVar12,0,1,DVar6.unknown);
    }
    else {
      puVar7 = &DAT_100fcb550;
      FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
      _memcpy((void *)((long)param_1 + lVar12),(void *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    lVar3 = (long)*(int *)(param_3 + 0x20);
    uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar11;
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar12 = *(long *)(UVar9.unknown + -8);
    pcVar14 = *(code **)(lVar12 + 0x30);
    _swift_bridgeObjectRetain(uVar11);
    lVar8 = (long)param_2 + lVar3;
    (*pcVar14)(lVar8,1,UVar9.unknown);
    if ((int)lVar8 == 0) {
      (**(code **)(lVar12 + 0x10))((long)param_1 + lVar3,(long)param_2 + lVar3,UVar9.unknown);
      (**(code **)(lVar12 + 0x38))((long)param_1 + lVar3,0,1,UVar9.unknown);
    }
    else {
      puVar7 = &DAT_100fcb378;
      FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
      _memcpy((void *)((long)param_1 + lVar3),(void *)((long)param_2 + lVar3),
              *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
    }
    iVar4 = *(int *)(param_3 + 0x28);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    uVar11 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar11;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar4);
    uVar11 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar11;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar11);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar10 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1004cc204 | FUN_1004cc204 */

void FUN_1004cc204(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  URL UVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c)));
  iVar1 = *(int *)(param_2 + 0x20);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar4.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,UVar4.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,UVar4.unknown);
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  return;
}



/* Address: 0x1004cc2e4 | FUN_1004cc2e4 */

undefined8 * FUN_1004cc2e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  Date DVar5;
  long lVar6;
  undefined *puVar7;
  URL UVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar9 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar9;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  lVar10 = (long)*(int *)(param_3 + 0x18);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar5.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar3);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar12)(lVar6,1,DVar5.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar5.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  lVar10 = (long)*(int *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) = uVar9;
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar8.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  _swift_bridgeObjectRetain(uVar9);
  lVar6 = (long)param_2 + lVar10;
  (*pcVar12)(lVar6,1,UVar8.unknown);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x10))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar8.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,UVar8.unknown);
  }
  else {
    puVar7 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar4 = *(int *)(param_3 + 0x28);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar9 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar4);
  uVar9 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar9;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar9);
  return param_1;
}



/* Address: 0x1004cc494 | FUN_1004cc494 */

undefined8 * FUN_1004cc494(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
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
  lVar9 = (long)*(int *)(param_3 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar9;
  (*pcVar11)(lVar7,1,DVar3.unknown);
  lVar4 = (long)param_2 + lVar9;
  (*pcVar11)(lVar4,1,DVar3.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 != 0) {
      (**(code **)(lVar10 + 8))((long)param_1 + lVar9,DVar3.unknown);
      goto LAB_1004cc580;
    }
    (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,DVar3.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,DVar3.unknown);
  }
  else {
LAB_1004cc580:
    puVar5 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  uVar8 = *(undefined8 *)((long)param_1 + lVar7);
  *(undefined8 *)((long)param_1 + lVar7) = *(undefined8 *)((long)param_2 + lVar7);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar9 = (long)*(int *)(param_3 + 0x20);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar6.unknown + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = (long)param_1 + lVar9;
  (*pcVar11)(lVar7,1,UVar6.unknown);
  lVar4 = (long)param_2 + lVar9;
  (*pcVar11)(lVar4,1,UVar6.unknown);
  if ((int)lVar7 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar10 + 0x18))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar6.unknown);
      goto LAB_1004cc674;
    }
    (**(code **)(lVar10 + 8))((long)param_1 + lVar9,UVar6.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar10 + 0x10))((long)param_1 + lVar9,(long)param_2 + lVar9,UVar6.unknown);
    (**(code **)(lVar10 + 0x38))((long)param_1 + lVar9,0,1,UVar6.unknown);
    goto LAB_1004cc674;
  }
  puVar5 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar9),(void *)((long)param_2 + lVar9),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
LAB_1004cc674:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar8 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *param_2;
  uVar8 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}



/* Address: 0x1004cc718 | FUN_1004cc718 */

undefined8 * FUN_1004cc718(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  URL UVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar10 = *param_2;
  uVar12 = param_2[3];
  uVar11 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  param_1[3] = uVar12;
  param_1[2] = uVar11;
  lVar8 = (long)*(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  lVar5 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar5,1,DVar4.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar4.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar4.unknown);
  }
  else {
    puVar6 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar8 = (long)*(int *)(param_3 + 0x20);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar7.unknown + -8);
  lVar5 = (long)param_2 + lVar8;
  (**(code **)(lVar9 + 0x30))(lVar5,1,UVar7.unknown);
  if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar7.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,UVar7.unknown);
  }
  else {
    puVar6 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x28);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar10 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar10;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar10 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar10;
  return param_1;
}



/* Address: 0x1004cc87c | FUN_1004cc87c */

undefined8 * FUN_1004cc87c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  Date DVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  URL UVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  
  uVar7 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  uVar7 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  lVar10 = (long)*(int *)(param_3 + 0x18);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar9 = (long)param_1 + lVar10;
  (*pcVar12)(lVar9,1,DVar4.unknown);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar12)(lVar5,1,DVar4.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 != 0) {
      (**(code **)(lVar11 + 8))((long)param_1 + lVar10,DVar4.unknown);
      goto LAB_1004cc948;
    }
    (**(code **)(lVar11 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,DVar4.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,DVar4.unknown);
  }
  else {
LAB_1004cc948:
    puVar6 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  lVar9 = (long)*(int *)(param_3 + 0x1c);
  uVar7 = *(undefined8 *)((long)param_1 + lVar9);
  *(undefined8 *)((long)param_1 + lVar9) = *(undefined8 *)((long)param_2 + lVar9);
  _swift_bridgeObjectRelease(uVar7);
  lVar10 = (long)*(int *)(param_3 + 0x20);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar8.unknown + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  lVar9 = (long)param_1 + lVar10;
  (*pcVar12)(lVar9,1,UVar8.unknown);
  lVar5 = (long)param_2 + lVar10;
  (*pcVar12)(lVar5,1,UVar8.unknown);
  if ((int)lVar9 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar11 + 0x28))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar8.unknown);
      goto LAB_1004cca34;
    }
    (**(code **)(lVar11 + 8))((long)param_1 + lVar10,UVar8.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,UVar8.unknown);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,UVar8.unknown);
    goto LAB_1004cca34;
  }
  puVar6 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1004cca34:
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar7 = puVar2[1];
  uVar3 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar7 = param_2[1];
  uVar3 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1004ccab8 | FUN_1004ccab8 */

void FUN_1004ccab8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004ccac4 | FUN_1004ccac4 */

ulong FUN_1004ccac4(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  puVar2 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  lVar4 = *(long *)(puVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x18);
  }
  else {
    puVar2 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    lVar4 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x20);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001004ccb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x1004ccb7c | FUN_1004ccb7c */

void FUN_1004ccb7c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004ccb88 | FUN_1004ccb88 */

void FUN_1004ccb88(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar2 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  lVar3 = *(long *)(puVar2 + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x18);
  }
  else {
    puVar2 = &DAT_100fcb378;
    FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x20);
  }
                    /* WARNING: Could not recover jumptable at 0x0001004ccc38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}



/* Address: 0x1004ccc3c | FUN_1004ccc3c */

void FUN_1004ccc3c(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_58 = &DAT_100c50c98;
  puStack_50 = &DAT_100c50c98;
  puVar2 = &DAT_100fcb5e0;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fcb5e0,PTR_typeMetadataAccessor_100ea7480);
  if (puVar2 < (undefined8 *)0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    puVar2 = &DAT_100fcb5d0;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fcb5d0,PTR_typeMetadataAccessor_100ea71a8);
    if (puVar2 < (undefined8 *)0x40) {
      local_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = &DAT_100c50cb0;
      local_28 = &DAT_100c50cb0;
      _swift_initStructMetadata(param_1,0x100,7,&local_58,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1004ccd04 | FUN_1004ccd04 */

long * FUN_1004ccd04(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar6 = param_2[1];
    param_1[1] = lVar6;
    lVar7 = (long)*(int *)(param_3 + 0x18);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar8 = *(long *)(DVar2.unknown + -8);
    pcVar9 = *(code **)(lVar8 + 0x30);
    _swift_bridgeObjectRetain(lVar5);
    _swift_bridgeObjectRetain(lVar6);
    lVar5 = (long)param_2 + lVar7;
    (*pcVar9)(lVar5,1,DVar2.unknown);
    if ((int)lVar5 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar2.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar2.unknown);
    }
    else {
      puVar3 = &DAT_100fcb550;
      FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}



/* Address: 0x1004cce0c | FUN_1004cce0c */

void FUN_1004cce0c(undefined8 *param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  lVar3 = (long)param_1 + (long)iVar1;
  (**(code **)(lVar4 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004cce88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))((long)param_1 + (long)iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1004cce8c | FUN_1004cce8c */

undefined8 * FUN_1004cce8c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  uVar4 = param_2[1];
  uVar8 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar4);
  lVar2 = (long)param_2 + lVar5;
  (*pcVar7)(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x10))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1004ccf78 | FUN_1004ccf78 */

undefined8 * FUN_1004ccf78(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar5 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar1.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar2 = (long)param_1 + lVar6;
  (*pcVar8)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar6;
  (*pcVar8)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar7 + 0x18))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar1.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar7 + 0x10))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar1.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar1.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1004cd0b0 | FUN_1004cd0b0 */

undefined8 * FUN_1004cd0b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar4 = (long)*(int *)(param_3 + 0x18);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar4;
  (**(code **)(lVar5 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar5 + 0x20))((long)param_1 + lVar4,(long)param_2 + lVar4,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))((long)param_1 + lVar4,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fcb550;
    FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
    _memcpy((void *)((long)param_1 + lVar4),(void *)((long)param_2 + lVar4),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1004cd170 | FUN_1004cd170 */

undefined8 * FUN_1004cd170(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  Date DVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar1);
  lVar6 = (long)*(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  lVar3 = (long)param_1 + lVar6;
  (*pcVar8)(lVar3,1,DVar2.unknown);
  lVar4 = (long)param_2 + lVar6;
  (*pcVar8)(lVar4,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    if ((int)lVar4 == 0) {
      (**(code **)(lVar7 + 0x28))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar2.unknown);
      return param_1;
    }
    (**(code **)(lVar7 + 8))((long)param_1 + lVar6,DVar2.unknown);
  }
  else if ((int)lVar4 == 0) {
    (**(code **)(lVar7 + 0x20))((long)param_1 + lVar6,(long)param_2 + lVar6,DVar2.unknown);
    (**(code **)(lVar7 + 0x38))((long)param_1 + lVar6,0,1,DVar2.unknown);
    return param_1;
  }
  puVar5 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  _memcpy((void *)((long)param_1 + lVar6),(void *)((long)param_2 + lVar6),
          *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1004cd298 | FUN_1004cd298 */

void FUN_1004cd298(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004cd2a4 | FUN_1004cd2a4 */

ulong FUN_1004cd2a4(ulong *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  if ((int)param_2 == 0x7ffffffe) {
    uVar3 = *param_1;
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    uVar1 = (int)uVar3 - 1;
    if (0x7fffffff < uVar1) {
      uVar1 = 0xffffffff;
    }
    return (ulong)(uVar1 + 1);
  }
  puVar2 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  uVar3 = (long)param_1 + (long)*(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001004cd338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x1004cd33c | FUN_1004cd33c */

void FUN_1004cd33c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004cd348 | FUN_1004cd348 */

void FUN_1004cd348(ulong *param_1,ulong param_2,int param_3,long param_4)

{
  undefined *puVar1;
  
  if (param_3 == 0x7ffffffe) {
    *param_1 = param_2 & 0xffffffff;
    return;
  }
  puVar1 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
                    /* WARNING: Could not recover jumptable at 0x0001004cd3c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x18),param_2,param_2,puVar1);
  return;
}



/* Address: 0x1004cd3c8 | FUN_1004cd3c8 */

void FUN_1004cd3c8(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c50cd8;
  puStack_30 = &DAT_100c50cd8;
  puVar2 = &DAT_100fcb5e0;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fcb5e0,PTR_typeMetadataAccessor_100ea7480);
  if (puVar2 < (undefined8 *)0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1004cd44c | FUN_1004cd44c */

void FUN_1004cd44c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1004cd458 | FUN_1004cd458 */

undefined1  [16] FUN_1004cd458(void)

{
  return ZEXT816(0x100ed9f88);
}



/* Address: 0x1004cd468 | thunk_FUN_1004cd46c */

void thunk_FUN_1004cd46c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1004cd46c | FUN_1004cd46c */

void FUN_1004cd46c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1004cd49c | thunk_FUN_1004cd4a0 */

undefined8 * thunk_FUN_1004cd4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1004cd4a0 | FUN_1004cd4a0 */

undefined8 * FUN_1004cd4a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1004cd4f8 | thunk_FUN_1004cd4fc */

undefined8 * thunk_FUN_1004cd4fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004cd4fc | FUN_1004cd4fc */

undefined8 * FUN_1004cd4fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004cd578 | thunk_FUN_1004cd57c */

undefined8 * thunk_FUN_1004cd57c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004cd57c | FUN_1004cd57c */

undefined8 * FUN_1004cd57c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004cd5d0 | FUN_1004cd5d0 */

int FUN_1004cd5d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004cd618 | FUN_1004cd618 */

void FUN_1004cd618(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004cd658 | FUN_1004cd658 */

undefined1  [16] FUN_1004cd658(void)

{
  return ZEXT816(0x100eda010);
}



/* Address: 0x1004cd668 | FUN_1004cd668 */

undefined1  [16] FUN_1004cd668(void)

{
  return ZEXT816(0x100eda098);
}



/* Address: 0x1004cd678 | FUN_1004cd678 */

undefined1  [16] FUN_1004cd678(void)

{
  return ZEXT816(0x100eda130);
}



/* Address: 0x1004cd688 | FUN_1004cd688 */

undefined1  [16] FUN_1004cd688(void)

{
  return ZEXT816(0x100eda1c0);
}



/* Address: 0x1004cd698 | FUN_1004cd698 */

void FUN_1004cd698(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x1004cd6d0 | FUN_1004cd6d0 */

undefined8 * FUN_1004cd6d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  uVar3 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x1004cd744 | FUN_1004cd744 */

undefined8 * FUN_1004cd744(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004cd800 | FUN_1004cd800 */

void FUN_1004cd800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x1004cd81c | FUN_1004cd81c */

undefined8 * FUN_1004cd81c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}


