/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100266d38 | FUN_100266d38 */

void FUN_100266d38(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100266d48 | FUN_100266d48 */

void FUN_100266d48(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long unaff_x20;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  
  lVar3 = 0;
  FUN_10026516c();
  uVar10 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  FUN_10026569c(*(undefined8 *)(lVar1 + 0x10),*(undefined8 *)(lVar1 + 0x18),
                *(undefined1 *)(lVar1 + 0x20));
  lVar1 = lVar1 + *(int *)(lVar3 + 0x18);
  lVar4 = 0;
  FUN_1002abb94();
  lVar3 = lVar1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(lVar1,1,lVar4);
  if ((int)lVar3 == 0) {
    iVar2 = *(int *)(lVar4 + 0x14);
    DVar5 = Foundation::DateComponents::typeMetadataAccessor();
    lVar11 = *(long *)(DVar5.unknown + -8);
    lVar3 = lVar1 + iVar2;
    (**(code **)(lVar11 + 0x30))(lVar3,1,DVar5.unknown);
    if ((int)lVar3 == 0) {
      (**(code **)(lVar11 + 8))(lVar1 + iVar2,DVar5.unknown);
    }
    lVar3 = lVar1 + *(int *)(lVar4 + 0x18);
    lVar6 = 0;
    FUN_1002abbf0();
    lVar7 = lVar3;
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar3,1,lVar6);
    if ((int)lVar7 == 0) {
      lVar7 = lVar3;
      _swift_getEnumCaseMultiPayload(lVar3,lVar6);
      iVar2 = (int)lVar7;
      if ((iVar2 == 2) || (iVar2 == 1)) {
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar3 + 8));
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar12 = *(code **)(lVar11 + 8);
        (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x30),DVar5.unknown);
        (*pcVar12)(lVar3 + *(int *)(puVar8 + 0x40),DVar5.unknown);
      }
      else if (iVar2 == 0) {
        (**(code **)(lVar11 + 8))(lVar3,DVar5.unknown);
      }
    }
    iVar2 = *(int *)(lVar4 + 0x1c);
    PVar9 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  }
  puVar8 = &DAT_100fb8f30;
  FUN_1000037f0(&DAT_100fb8f30,&DAT_100c38b20);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(puVar8 + 0x1c)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100266f18 | FUN_100266f18 */

void FUN_100266f18(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10026516c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_10026164c(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100266f54 | FUN_100266f54 */

void FUN_100266f54(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9068 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9008;
  FUN_100005c24(&DAT_100fb9008,&DAT_100c38c80);
  puVar2 = puVar1;
  FUN_100266fec();
  puVar3 = &DAT_100fb9088;
  FUN_100016eac(&DAT_100fb9088,&DAT_100fb9090,&DAT_100c39b40,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyTransformModifier<undefined>_>SwiftUI__ViewModifier_100eab108
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9068 = puVar4;
  return;
}



/* Address: 0x100266fec | FUN_100266fec */

void FUN_100266fec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9060;
  FUN_100005c24(&DAT_100fb9060,&DAT_100c38cf0);
  puVar2 = &DAT_100fb9078;
  FUN_100016eac(&DAT_100fb9078,&DAT_100fb9080,&DAT_100c38d70,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9070 = puVar3;
  return;
}



/* Address: 0x100267084 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x100267088 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x10026708c | FUN_10026708c */

undefined8 FUN_10026708c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb9000;
  FUN_1000037f0(&DAT_100fb9000,&DAT_100c38c78);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002670dc | FUN_1002670dc */

undefined8 FUN_1002670dc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb9000;
  FUN_1000037f0(&DAT_100fb9000,&DAT_100c38c78);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100267124 | FUN_100267124 */

void FUN_100267124(void)

{
  FUN_1002686dc(FUN_10026516c,FUN_10026224c);
  return;
}



/* Address: 0x100267138 | thunk_FUN_10025e104 */

void thunk_FUN_10025e104(void)

{
  FUN_10025e104();
  return;
}



/* Address: 0x10026713c | thunk_FUN_10025e16c */

void thunk_FUN_10025e16c(void)

{
  FUN_10025e16c();
  return;
}



/* Address: 0x100267140 | FUN_100267140 */

void FUN_100267140(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10026516c();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_100261528(param_1,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10026717c | FUN_10026717c */

long * FUN_10026717c(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  DateComponents DVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  Product PVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  undefined8 uVar16;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    lVar5 = 0;
    FUN_1002abb94();
    lVar12 = (long)*(int *)(lVar5 + 0x14);
    DVar6 = Foundation::DateComponents::typeMetadataAccessor();
    lVar14 = *(long *)(DVar6.unknown + -8);
    puVar7 = (undefined1 *)((long)param_2 + lVar12);
    (**(code **)(lVar14 + 0x30))(puVar7,1,DVar6.unknown);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar14 + 0x10))
                ((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
                 DVar6.unknown);
      (**(code **)(lVar14 + 0x38))((undefined1 *)((long)param_1 + lVar12),0,1,DVar6.unknown);
    }
    else {
      puVar8 = &DAT_100fb86e0;
      FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
      _memcpy((undefined1 *)((long)param_1 + lVar12),(undefined1 *)((long)param_2 + lVar12),
              *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x18));
    lVar12 = 0;
    FUN_1002abbf0();
    lVar13 = *(long *)(lVar12 + -8);
    puVar9 = puVar2;
    (**(code **)(lVar13 + 0x30))(puVar2,1,lVar12);
    if ((int)puVar9 == 0) {
      puVar9 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,lVar12);
      if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
        uVar16 = puVar2[1];
        *puVar1 = *puVar2;
        puVar1[1] = uVar16;
        _swift_bridgeObjectRetain();
        puVar8 = &DAT_100fb8db0;
        FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
        pcVar15 = *(code **)(lVar14 + 0x10);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x30),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x30),DVar6.unknown);
        (*pcVar15)((long)puVar1 + (long)*(int *)(puVar8 + 0x40),
                   (long)puVar2 + (long)*(int *)(puVar8 + 0x40),DVar6.unknown);
      }
      else {
        (**(code **)(lVar14 + 0x10))(puVar1,puVar2,DVar6.unknown);
      }
      _swift_storeEnumTagMultiPayload(puVar1,lVar12,(ulong)puVar9 & 0xffffffff);
      (**(code **)(lVar13 + 0x38))(puVar1,0,1,lVar12);
    }
    else {
      puVar8 = &DAT_100fb8db8;
      FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
      _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    iVar4 = *(int *)(lVar5 + 0x1c);
    PVar10 = StoreKit::Product::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar4),
               (undefined1 *)((long)param_2 + (long)iVar4),PVar10.unknown);
    iVar4 = *(int *)(param_3 + 0x18);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined1 *)((long)param_1 + (long)iVar4) = *(undefined1 *)((long)param_2 + (long)iVar4);
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
    lVar5 = puVar1[1];
    uVar16 = *puVar1;
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
    puVar2[1] = puVar1[1];
    *puVar2 = uVar16;
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar11 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
  }
  _swift_retain(lVar5);
  return param_1;
}



/* Address: 0x1002673f0 | FUN_1002673f0 */

void FUN_1002673f0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  DateComponents DVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  Product PVar8;
  long lVar9;
  code *pcVar10;
  
  lVar2 = 0;
  FUN_1002abb94();
  iVar1 = *(int *)(lVar2 + 0x14);
  DVar3 = Foundation::DateComponents::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  lVar4 = param_1 + iVar1;
  (**(code **)(lVar9 + 0x30))(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar9 + 8))(param_1 + iVar1,DVar3.unknown);
  }
  lVar4 = param_1 + *(int *)(lVar2 + 0x18);
  lVar5 = 0;
  FUN_1002abbf0();
  lVar6 = lVar4;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(lVar4,1,lVar5);
  if ((int)lVar6 == 0) {
    lVar6 = lVar4;
    _swift_getEnumCaseMultiPayload(lVar4,lVar5);
    iVar1 = (int)lVar6;
    if ((iVar1 == 2) || (iVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 8));
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x30),DVar3.unknown);
      (*pcVar10)(lVar4 + *(int *)(puVar7 + 0x40),DVar3.unknown);
    }
    else if (iVar1 == 0) {
      (**(code **)(lVar9 + 8))(lVar4,DVar3.unknown);
    }
  }
  iVar1 = *(int *)(lVar2 + 0x1c);
  PVar8 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar8.unknown + -8) + 8))(param_1 + iVar1,PVar8.unknown);
  _swift_release(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  return;
}



/* Address: 0x100267544 | FUN_100267544 */

undefined1 * FUN_100267544(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar13 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar3;
  (**(code **)(lVar13 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar13 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar12 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar12 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar11 = puVar2[1];
      *puVar1 = *puVar2;
      puVar1[1] = uVar11;
      _swift_bridgeObjectRetain();
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar14 = *(code **)(lVar13 + 0x10);
      (*pcVar14)((long)puVar1 + (long)*(int *)(puVar7 + 0x30),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x30),DVar5.unknown);
      (*pcVar14)((long)puVar1 + (long)*(int *)(puVar7 + 0x40),
                 (long)puVar2 + (long)*(int *)(puVar7 + 0x40),DVar5.unknown);
    }
    else {
      (**(code **)(lVar13 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
    (**(code **)(lVar12 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x10))
            (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[iVar3] = param_2[iVar3];
  iVar3 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)(param_2 + iVar3);
  uVar11 = puVar1[1];
  uVar15 = *puVar1;
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = puVar1[1];
  *(undefined8 *)(param_1 + iVar3) = uVar15;
  _swift_retain(uVar11);
  return param_1;
}



/* Address: 0x100267790 | FUN_100267790 */

undefined1 * FUN_100267790(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  long lVar17;
  undefined8 uVar18;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar17 = *(long *)(DVar5.unknown + -8);
  pcVar16 = *(code **)(lVar17 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar16)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar16)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar17 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_100267858;
    }
    (**(code **)(lVar17 + 0x18))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar17 + 0x10))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar17 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_100267858:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar15 = *(long *)(lVar9 + -8);
  pcVar16 = *(code **)(lVar15 + 0x30);
  puVar10 = puVar1;
  (*pcVar16)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar16)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if ((int)puVar10 == 2) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar16 = *(code **)(lVar17 + 0x10);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          *puVar1 = *puVar2;
          puVar1[1] = puVar2[1];
          _swift_bridgeObjectRetain();
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar16 = *(code **)(lVar17 + 0x10);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar17 + 0x10))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_100267a90;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      _swift_bridgeObjectRetain();
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar16 = *(code **)(lVar17 + 0x10);
      (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
      (*pcVar16)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
    }
    else {
      (**(code **)(lVar17 + 0x10))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar15 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_100267a90;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_100267a90:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x18))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[*(int *)(param_3 + 0x18)] = param_2[*(int *)(param_3 + 0x18)];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  uVar14 = puVar1[1];
  uVar13 = puVar2[1];
  uVar18 = *puVar2;
  puVar1[1] = puVar2[1];
  *puVar1 = uVar18;
  _swift_retain(uVar13);
  _swift_release(uVar14);
  return param_1;
}



/* Address: 0x100267bb0 | FUN_100267bb0 */

undefined1 * FUN_100267bb0(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  Product PVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar5.unknown + -8);
  puVar6 = param_2 + iVar3;
  (**(code **)(lVar12 + 0x30))(puVar6,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar12 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
    puVar7 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar8 = 0;
  FUN_1002abbf0();
  lVar11 = *(long *)(lVar8 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar11 + 0x30))(puVar2,1,lVar8);
  if ((int)puVar9 == 0) {
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar8);
    if (((int)puVar9 == 2) || ((int)puVar9 == 1)) {
      uVar14 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar14;
      puVar7 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar13 = *(code **)(lVar12 + 0x20);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30)),DVar5.unknown);
      (*pcVar13)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x40)),DVar5.unknown);
    }
    else {
      (**(code **)(lVar12 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar8,(ulong)puVar9 & 0xffffffff);
    (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
  }
  else {
    puVar7 = &DAT_100fb8db8;
    FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
    _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar10 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar10.unknown + -8) + 0x20))
            (param_1 + iVar3,param_2 + iVar3,PVar10.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[iVar3] = param_2[iVar3];
  iVar3 = *(int *)(param_3 + 0x1c);
  uVar14 = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = uVar14;
  return param_1;
}



/* Address: 0x100267dec | FUN_100267dec */

undefined1 * FUN_100267dec(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  DateComponents DVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  Product PVar12;
  undefined8 uVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  undefined8 uVar17;
  
  *param_1 = *param_2;
  lVar4 = 0;
  FUN_1002abb94();
  iVar3 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar16 = *(long *)(DVar5.unknown + -8);
  pcVar15 = *(code **)(lVar16 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar15)(puVar6,1,DVar5.unknown);
  puVar7 = param_2 + iVar3;
  (*pcVar15)(puVar7,1,DVar5.unknown);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 != 0) {
      (**(code **)(lVar16 + 8))(param_1 + iVar3,DVar5.unknown);
      goto LAB_100267eb4;
    }
    (**(code **)(lVar16 + 0x28))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar16 + 0x20))(param_1 + iVar3,param_2 + iVar3,DVar5.unknown);
    (**(code **)(lVar16 + 0x38))(param_1 + iVar3,0,1,DVar5.unknown);
  }
  else {
LAB_100267eb4:
    puVar8 = &DAT_100fb86e0;
    FUN_1000037f0(&DAT_100fb86e0,&DAT_100c38670);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar4 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(lVar4 + 0x18));
  lVar9 = 0;
  FUN_1002abbf0();
  lVar14 = *(long *)(lVar9 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  puVar10 = puVar1;
  (*pcVar15)(puVar1,1,lVar9);
  puVar11 = puVar2;
  (*pcVar15)(puVar2,1,lVar9);
  if ((int)puVar10 == 0) {
    if ((int)puVar11 == 0) {
      if (param_1 != param_2) {
        FUN_10005241c(puVar1,FUN_1002abbf0);
        puVar10 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,lVar9);
        if ((int)puVar10 == 2) {
          uVar13 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar13;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar16 + 0x20);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,2);
        }
        else if ((int)puVar10 == 1) {
          uVar13 = *puVar2;
          puVar1[1] = puVar2[1];
          *puVar1 = uVar13;
          puVar8 = &DAT_100fb8db0;
          FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
          pcVar15 = *(code **)(lVar16 + 0x20);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
          (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                     (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,1);
        }
        else {
          (**(code **)(lVar16 + 0x20))(puVar1,puVar2,DVar5.unknown);
          _swift_storeEnumTagMultiPayload(puVar1,lVar9,0);
        }
      }
      goto LAB_1002680d4;
    }
    FUN_10005241c(puVar1,FUN_1002abbf0);
  }
  else if ((int)puVar11 == 0) {
    puVar10 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,lVar9);
    if (((int)puVar10 == 2) || ((int)puVar10 == 1)) {
      uVar13 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar13;
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar15 = *(code **)(lVar16 + 0x20);
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30)),DVar5.unknown);
      (*pcVar15)((undefined1 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x40)),
                 (undefined1 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x40)),DVar5.unknown);
    }
    else {
      (**(code **)(lVar16 + 0x20))(puVar1,puVar2,DVar5.unknown);
    }
    _swift_storeEnumTagMultiPayload(puVar1,lVar9,puVar10);
    (**(code **)(lVar14 + 0x38))(puVar1,0,1,lVar9);
    goto LAB_1002680d4;
  }
  puVar8 = &DAT_100fb8db8;
  FUN_1000037f0(&DAT_100fb8db8,&DAT_100c38680);
  _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1002680d4:
  iVar3 = *(int *)(lVar4 + 0x1c);
  PVar12 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar12.unknown + -8) + 0x28))
            (param_1 + iVar3,param_2 + iVar3,PVar12.unknown);
  iVar3 = *(int *)(param_3 + 0x18);
  param_1[*(int *)(param_3 + 0x14)] = param_2[*(int *)(param_3 + 0x14)];
  param_1[iVar3] = param_2[iVar3];
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  uVar13 = puVar1[1];
  uVar17 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1[1] = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x1c)) + 8);
  *puVar1 = uVar17;
  _swift_release(uVar13);
  return param_1;
}



/* Address: 0x1002681d4 | FUN_1002681d4 */

void FUN_1002681d4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002681e0 | FUN_1002681e0 */

ulong FUN_1002681e0(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = 0;
  FUN_1002abb94();
  if ((int)param_2 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x000100268230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
    return param_1;
  }
  uVar2 = *(ulong *)(param_1 + (long)*(int *)(param_3 + 0x1c));
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  return (ulong)((int)uVar2 + 1);
}



/* Address: 0x10026825c | FUN_10026825c */

void FUN_10026825c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100268268 | FUN_100268268 */

void FUN_100268268(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002abb94();
  if (param_3 == *(int *)(*(long *)(lVar1 + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001002682c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
    return;
  }
  *(ulong *)(param_1 + *(int *)(param_4 + 0x1c)) = (ulong)((int)param_2 - 1);
  return;
}



/* Address: 0x1002682e0 | FUN_1002682e0 */

void FUN_1002682e0(long param_1,ulong param_2)

{
  long lVar1;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1002abb94();
  if (param_2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = &DAT_100c38e58;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    local_30 = &DAT_100c38e58;
    _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100268360 | thunk_FUN_100268364 */

void thunk_FUN_100268364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb9188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8ff8;
  FUN_100005c24(&DAT_100fb8ff8,&DAT_100c38c70);
  puVar2 = &DAT_100fb9190;
  FUN_10026841c(&DAT_100fb9190,&DAT_100fb8fe8,&DAT_100c38c68,FUN_10026848c);
  puVar3 = &DAT_100fb91b0;
  FUN_100016eac(&DAT_100fb91b0,&DAT_100fb91b8,&DAT_100c39310,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9188 = puVar4;
  return;
}



/* Address: 0x100268364 | FUN_100268364 */

void FUN_100268364(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8ff8;
  FUN_100005c24(&DAT_100fb8ff8,&DAT_100c38c70);
  puVar2 = &DAT_100fb9190;
  FUN_10026841c(&DAT_100fb9190,&DAT_100fb8fe8,&DAT_100c38c68,FUN_10026848c);
  puVar3 = &DAT_100fb91b0;
  FUN_100016eac(&DAT_100fb91b0,&DAT_100fb91b8,&DAT_100c39310,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9188 = puVar4;
  return;
}



/* Address: 0x10026841c | FUN_10026841c */

void FUN_10026841c(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    uVar1 = param_2;
    (*param_4)();
    puStack_38 = 
    PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
    ;
    puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    local_40 = uVar1;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               param_2,&local_40);
    *param_1 = (long)puVar2;
  }
  return;
}



/* Address: 0x10026848c | FUN_10026848c */

void FUN_10026848c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb9198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb8fe0;
  FUN_100005c24(&DAT_100fb8fe0,&DAT_100c38c60);
  puVar2 = &DAT_100fb91a0;
  FUN_100016eac(&DAT_100fb91a0,&DAT_100fb91a8,&DAT_100c38e70,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9198 = puVar3;
  return;
}



/* Address: 0x10026849c | FUN_10026849c */

void FUN_10026849c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar1 = &DAT_100fb8fe0;
  FUN_100005c24(&DAT_100fb8fe0,&DAT_100c38c60);
  puVar2 = &DAT_100fb91a0;
  FUN_100016eac(&DAT_100fb91a0,&DAT_100fb91a8,&DAT_100c38e70,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9198 = puVar3;
  return;
}



/* Address: 0x100268524 | FUN_100268524 */

void FUN_100268524(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9d20,1);
  return;
}



/* Address: 0x100268534 | FUN_100268534 */

void FUN_100268534(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  DateComponents DVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  Product PVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  lVar3 = 0;
  FUN_100266d14();
  lVar15 = *(long *)(lVar3 + -8);
  uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff);
  lVar1 = unaff_x20 + uVar14;
  lVar4 = 0;
  FUN_1002abb94();
  iVar2 = *(int *)(lVar4 + 0x14);
  DVar5 = Foundation::DateComponents::typeMetadataAccessor();
  lVar10 = *(long *)(DVar5.unknown + -8);
  lVar12 = lVar1 + iVar2;
  (**(code **)(lVar10 + 0x30))(lVar12,1,DVar5.unknown);
  if ((int)lVar12 == 0) {
    (**(code **)(lVar10 + 8))(lVar1 + iVar2,DVar5.unknown);
  }
  lVar12 = lVar1 + *(int *)(lVar4 + 0x18);
  lVar6 = 0;
  FUN_1002abbf0();
  lVar7 = lVar12;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(lVar12,1,lVar6);
  if ((int)lVar7 == 0) {
    lVar7 = lVar12;
    _swift_getEnumCaseMultiPayload(lVar12,lVar6);
    iVar2 = (int)lVar7;
    if ((iVar2 == 2) || (iVar2 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar12 + 8));
      puVar8 = &DAT_100fb8db0;
      FUN_1000037f0(&DAT_100fb8db0,&DAT_100c38bb0);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar12 + *(int *)(puVar8 + 0x30),DVar5.unknown);
      (*pcVar11)(lVar12 + *(int *)(puVar8 + 0x40),DVar5.unknown);
    }
    else if (iVar2 == 0) {
      (**(code **)(lVar10 + 8))(lVar12,DVar5.unknown);
    }
  }
  lVar12 = *(long *)(lVar15 + 0x40);
  iVar2 = *(int *)(lVar4 + 0x1c);
  PVar9 = StoreKit::Product::typeMetadataAccessor();
  (**(code **)(*(long *)(PVar9.unknown + -8) + 8))(lVar1 + iVar2,PVar9.unknown);
  _swift_release(*(undefined8 *)(lVar1 + *(int *)(lVar3 + 0x1c) + 8));
  _swift_deallocObject(unaff_x20,lVar12 + uVar14,uVar13 | 7);
  return;
}



/* Address: 0x1002686c8 | FUN_1002686c8 */

void FUN_1002686c8(void)

{
  FUN_1002686dc(FUN_100266d14,FUN_10026266c);
  return;
}



/* Address: 0x1002686dc | FUN_1002686dc */

void FUN_1002686dc(code *param_1,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  (*param_1)();
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100268718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10026871c | FUN_10026871c */

void FUN_10026871c(void)

{
  long unaff_x20;
  
  FUN_100262730(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100268724 | FUN_100268724 */

void FUN_100268724(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb91d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb91c8;
  FUN_100005c24(&DAT_100fb91c8,&DAT_100c38ed8);
  puVar2 = &DAT_100fb91d8;
  FUN_100016eac(&DAT_100fb91d8,&DAT_100fb91e0,&DAT_100c38ee0,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb91d0 = puVar3;
  return;
}



/* Address: 0x1002687bc | FUN_1002687bc */

void FUN_1002687bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb91f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c38fb4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c38fb4,&DAT_100ec4620);
  DAT_100fb91f0 = pTVar1;
  return;
}



/* Address: 0x1002687fc | FUN_1002687fc */

void FUN_1002687fc(void)

{
  undefined *puVar1;
  
  if (DAT_100fb9260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0,
             PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_100eaaef0);
  DAT_100fb9260 = puVar1;
  return;
}



/* Address: 0x10026883c | FUN_10026883c */

void FUN_10026883c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100268848 | FUN_100268848 */

int FUN_100268848(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x10] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10026889c | FUN_10026889c */

void FUN_10026889c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(char *)(param_1 + 2) = '\0';
    }
    if (param_2 != 0) {
      *(char *)param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(char *)(param_1 + 2) = '\x01';
    }
  }
  return;
}



/* Address: 0x1002688dc | FUN_1002688dc */

undefined1  [16] FUN_1002688dc(void)

{
  return ZEXT816(0x100ec4620);
}



/* Address: 0x1002688ec | FUN_1002688ec */

undefined1  [16] FUN_1002688ec(void)

{
  return ZEXT816(0x100ec4648);
}



/* Address: 0x1002688fc | FUN_1002688fc */

void FUN_1002688fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fb91c0;
  FUN_100005c24(&DAT_100fb91c0,&DAT_100c38ed0);
  puVar2 = &DAT_100fb91e8;
  FUN_100016eac(&DAT_100fb91e8,&DAT_100fb91c0,&DAT_100c38ed0,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar3 = puVar2;
  FUN_1002687bc();
  puStack_48 = &DAT_100ec4620;
  local_50 = puVar1;
  local_40 = puVar2;
  puStack_38 = puVar3;
  _swift_getOpaqueTypeConformance2
            (&local_50,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_ButtonStyle>(A1)__>_some>>_100eab3d0
             ,1);
  return;
}



/* Address: 0x10026898c | FUN_10026898c */

void FUN_10026898c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9d70,1);
  return;
}



/* Address: 0x10026899c | FUN_10026899c */

void FUN_10026899c(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca9d48,1);
  return;
}



/* Address: 0x1002689ac | thunk_FUN_1002689b0 */

void thunk_FUN_1002689b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb9300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9298;
  FUN_100005c24(&DAT_100fb9298,&DAT_100c39020);
  puVar2 = puVar1;
  FUN_100268a48();
  puVar3 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9300 = puVar4;
  return;
}



/* Address: 0x1002689b0 | FUN_1002689b0 */

void FUN_1002689b0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9298;
  FUN_100005c24(&DAT_100fb9298,&DAT_100c39020);
  puVar2 = puVar1;
  FUN_100268a48();
  puVar3 = &DAT_100fb9338;
  FUN_100016eac(&DAT_100fb9338,&DAT_100fb9340,&DAT_100c39b50,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9300 = puVar4;
  return;
}



/* Address: 0x100268a48 | FUN_100268a48 */

void FUN_100268a48(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9290;
  FUN_100005c24(&DAT_100fb9290,&DAT_100c39018);
  puVar2 = puVar1;
  FUN_100268ac0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__ScaleEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa6e8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9308 = puVar3;
  return;
}



/* Address: 0x100268ac0 | FUN_100268ac0 */

void FUN_100268ac0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9278;
  FUN_100005c24(&DAT_100fb9278,&DAT_100c39000);
  puVar2 = puVar1;
  FUN_100268b58();
  puVar3 = &DAT_100fb9330;
  FUN_100016eac(&DAT_100fb9330,&DAT_100fb9288,&DAT_100c39010,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9310 = puVar4;
  return;
}



/* Address: 0x100268b58 | FUN_100268b58 */

void FUN_100268b58(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9270;
  FUN_100005c24(&DAT_100fb9270,&DAT_100c38ff8);
  puVar2 = puVar1;
  FUN_100268bd0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__OpacityEffect___SwiftUI_ViewModifier_in_SwiftUI_100eaa8b0
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9318 = puVar3;
  return;
}



/* Address: 0x100268bd0 | FUN_100268bd0 */

void FUN_100268bd0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9268;
  FUN_100005c24(&DAT_100fb9268,&DAT_100c38ff0);
  puVar2 = &DAT_100fb9328;
  FUN_100003a00(&DAT_100fb9328,PTR_typeMetadataAccessor_100eaaf98,
                PTR_SwiftUI__SwiftUI__ButtonStyleConfiguration__Label_>SwiftUI__View_100eaaf90);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9320 = puVar3;
  return;
}



/* Address: 0x100268c60 | thunk_FUN_100268c64 */

void thunk_FUN_100268c64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fb9348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb92f8;
  FUN_100005c24(&DAT_100fb92f8,&DAT_100c39080);
  puVar2 = puVar1;
  FUN_100268cdc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fb9348 = puVar3;
  return;
}



/* Address: 0x100268c64 | FUN_100268c64 */

void FUN_100268c64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb92f8;
  FUN_100005c24(&DAT_100fb92f8,&DAT_100c39080);
  puVar2 = puVar1;
  FUN_100268cdc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FixedSizeLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa48
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9348 = puVar3;
  return;
}



/* Address: 0x100268cdc | FUN_100268cdc */

void FUN_100268cdc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb92f0;
  FUN_100005c24(&DAT_100fb92f0,&DAT_100c39078);
  puVar2 = puVar1;
  FUN_100268d74();
  puVar3 = &DAT_100fb9378;
  FUN_100016eac(&DAT_100fb9378,&DAT_100fb9380,&DAT_100c39090,
                PTR_SwiftUI__SwiftUI___ForegroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eab000
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9350 = puVar4;
  return;
}



/* Address: 0x100268d74 | FUN_100268d74 */

void FUN_100268d74(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb92d8;
  FUN_100005c24(&DAT_100fb92d8,&DAT_100c39060);
  puVar2 = &DAT_100fb9360;
  FUN_10026841c(&DAT_100fb9360,&DAT_100fb92e8,&DAT_100c39070,FUN_100268e2c);
  puVar3 = &DAT_100fb9370;
  FUN_100016eac(&DAT_100fb9370,&DAT_100fb92e0,&DAT_100c3a810,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9358 = puVar4;
  return;
}



/* Address: 0x100268e2c | FUN_100268e2c */

void FUN_100268e2c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_20;
  undefined *puStack_18;
  
  if (DAT_100fb9368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb90e8;
  FUN_100005c24(&DAT_100fb90e8,&DAT_100c397b0);
  puStack_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_20);
  DAT_100fb9368 = puVar2;
  return;
}



/* Address: 0x100268e3c | FUN_100268e3c */

void FUN_100268e3c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  puVar1 = &DAT_100fb90e8;
  FUN_100005c24(&DAT_100fb90e8,&DAT_100c397b0);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fb9368 = puVar2;
  return;
}



/* Address: 0x100268e9c | thunk_FUN_100266d48 */

void thunk_FUN_100266d48(void)

{
  thunk_FUN_100266d48();
  return;
}



/* Address: 0x100268ea0 | thunk_FUN_100266d48 */

void thunk_FUN_100266d48(void)

{
  thunk_FUN_100266d48();
  return;
}



/* Address: 0x100268ea4 | thunk_FUN_100266d48 */

void thunk_FUN_100266d48(void)

{
  thunk_FUN_100266d48();
  return;
}



/* Address: 0x100268ea8 | FUN_100268ea8 */

void FUN_100268ea8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  FUN_10026569c(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined1 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100268ed4 | FUN_100268ed4 */

undefined8 * FUN_100268ed4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  uVar3 = *(undefined1 *)(param_2 + 4);
  _swift_retain();
  FUN_1002654f8(uVar1,uVar2,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 4) = uVar3;
  return param_1;
}



/* Address: 0x100268f28 | FUN_100268f28 */

undefined8 * FUN_100268f28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar6);
  uVar6 = param_2[2];
  uVar2 = param_2[3];
  uVar4 = *(undefined1 *)(param_2 + 4);
  FUN_1002654f8(uVar6,uVar2,uVar4);
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  param_1[2] = uVar6;
  param_1[3] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar4;
  FUN_10026569c(uVar1,uVar3,uVar5);
  return param_1;
}



/* Address: 0x100268fa0 | FUN_100268fa0 */

void FUN_100268fa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}


