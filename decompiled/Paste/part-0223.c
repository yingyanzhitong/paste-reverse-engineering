/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002a7d28 | FUN_1002a7d28 */

void FUN_1002a7d28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002a7d4c | FUN_1002a7d4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002a7d4c(void)

{
  return ZEXT816(0x100fbb5d0);
}



/* Address: 0x1002a7d6c | FUN_1002a7d6c */

void FUN_1002a7d6c(void)

{
  FUN_1002500b8(0);
  return;
}



/* Address: 0x1002a7d74 | FUN_1002a7d74 */

void FUN_1002a7d74(long *param_1,long param_2)

{
  FUN_1002a7d4c();
  _swift_allocObject();
  *(undefined **)(param_2 + 0x10) = &DAT_100c3c038;
  *(undefined8 *)(param_2 + 0x18) = 0;
  *param_1 = param_2;
  return;
}



/* Address: 0x1002a7db0 | FUN_1002a7db0 */

bool FUN_1002a7db0(undefined8 param_1,undefined *param_2,undefined *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  bool bVar3;
  OfferType OVar4;
  undefined *puVar5;
  OfferType OVar6;
  undefined1 *puVar7;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  OfferType OVar16;
  undefined1 auStack_a0 [4];
  uint local_9c;
  long local_98;
  _StringGuts local_90;
  _StringGuts _Stack_88;
  undefined1 *local_80;
  code *local_78;
  undefined *local_70;
  undefined8 uStack_68;
  
  local_90.unknown = param_2;
  _Stack_88.unknown = param_3;
  OVar4 = StoreKit::Transaction::OfferType::typeMetadataAccessor();
  lVar14 = *(long *)(OVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar5 = &DAT_100fbb6f8;
  local_80 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fbb6f8,&DAT_100c3c060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = (long)(auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  OVar16.unknown = (undefined *)(lVar10 - extraout_x12);
  OVar6.unknown = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar6.unknown + -8) + 0x40));
  lVar15 = (long)OVar16.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar13 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar8 - extraout_x12_02;
  StoreKit::Transaction::OfferType::get_promotional(OVar6);
  local_78 = *(code **)(lVar14 + 0x38);
  (*local_78)(lVar9,0,1,OVar4.unknown);
  iVar1 = *(int *)(puVar5 + 0x30);
  local_70 = puVar5;
  uStack_68 = param_1;
  FUN_1002a87a4(param_1,OVar16.unknown);
  FUN_1002a87a4(lVar9,OVar16.unknown + iVar1);
  pcVar12 = *(code **)(lVar14 + 0x30);
  puVar5 = OVar16.unknown;
  (*pcVar12)(OVar16.unknown,1,OVar4.unknown);
  if ((int)puVar5 == 1) {
    FUN_100005808(lVar9,&DAT_100fbb630,&DAT_100c3c660);
    puVar5 = OVar16.unknown + iVar1;
    (*pcVar12)(puVar5,1,OVar4.unknown);
    if ((int)puVar5 == 1) {
      FUN_100005808(OVar16.unknown,&DAT_100fbb630,&DAT_100c3c660);
      return true;
    }
LAB_1002a8004:
    FUN_100005808(OVar16.unknown,&DAT_100fbb6f8,&DAT_100c3c060);
  }
  else {
    FUN_1002a87a4(OVar16.unknown,lVar8);
    puVar5 = OVar16.unknown + iVar1;
    (*pcVar12)(puVar5,1,OVar4.unknown);
    puVar2 = local_80;
    if ((int)puVar5 == 1) {
      FUN_100005808(lVar9,&DAT_100fbb630,&DAT_100c3c660);
      (**(code **)(lVar14 + 8))(lVar8,OVar4.unknown);
      goto LAB_1002a8004;
    }
    puVar7 = local_80;
    local_98 = lVar15;
    (**(code **)(lVar14 + 0x20))(local_80,OVar16.unknown + iVar1,OVar4.unknown);
    FUN_1002a87f4();
    bVar3 = Swift::Equatable::___infix(lVar8,puVar2,OVar4.unknown,puVar7);
    lVar15 = local_98;
    local_9c = (uint)CONCAT71(extraout_var,bVar3);
    pcVar11 = *(code **)(lVar14 + 8);
    (*pcVar11)(puVar2,OVar4.unknown);
    FUN_100005808(lVar9,&DAT_100fbb630,&DAT_100c3c660);
    (*pcVar11)(lVar8,OVar4.unknown);
    FUN_100005808(OVar16.unknown,&DAT_100fbb630,&DAT_100c3c660);
    if ((local_9c & 1) != 0) {
      return true;
    }
  }
  StoreKit::Transaction::OfferType::get_introductory(OVar16);
  (*local_78)(lVar13,0,1,OVar4.unknown);
  lVar8 = (long)*(int *)(local_70 + 0x30);
  FUN_1002a87a4(uStack_68,lVar10);
  FUN_1002a87a4(lVar13,lVar10 + lVar8);
  lVar9 = lVar10;
  (*pcVar12)(lVar10,1,OVar4.unknown);
  if ((int)lVar9 == 1) {
    FUN_100005808(lVar13,&DAT_100fbb630,&DAT_100c3c660);
    lVar8 = lVar10 + lVar8;
    (*pcVar12)(lVar8,1,OVar4.unknown);
    if ((int)lVar8 == 1) {
      FUN_100005808(lVar10,&DAT_100fbb630,&DAT_100c3c660);
LAB_1002a8240:
      if ((local_90.unknown == (undefined *)0xd000000000000031) &&
         (_Stack_88.unknown == (undefined *)0x8000000100d9ef40)) {
        return true;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck(local_90,_Stack_88,(_StringComparisonResult)0x31);
      return bVar3;
    }
  }
  else {
    FUN_1002a87a4(lVar10,lVar15);
    lVar9 = lVar10 + lVar8;
    (*pcVar12)(lVar9,1,OVar4.unknown);
    puVar2 = local_80;
    if ((int)lVar9 != 1) {
      puVar7 = local_80;
      (**(code **)(lVar14 + 0x20))(local_80,lVar10 + lVar8,OVar4.unknown);
      FUN_1002a87f4();
      bVar3 = Swift::Equatable::___infix(lVar15,puVar2,OVar4.unknown,puVar7);
      pcVar12 = *(code **)(lVar14 + 8);
      (*pcVar12)(puVar2,OVar4.unknown);
      FUN_100005808(lVar13,&DAT_100fbb630,&DAT_100c3c660);
      (*pcVar12)(lVar15,OVar4.unknown);
      FUN_100005808(lVar10,&DAT_100fbb630,&DAT_100c3c660);
      if (!bVar3) {
        return false;
      }
      goto LAB_1002a8240;
    }
    FUN_100005808(lVar13,&DAT_100fbb630,&DAT_100c3c660);
    (**(code **)(lVar14 + 8))(lVar15,OVar4.unknown);
  }
  FUN_100005808(lVar10,&DAT_100fbb6f8,&DAT_100c3c060);
  return false;
}



/* Address: 0x1002a82a8 | FUN_1002a82a8 */

void FUN_1002a82a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  Transaction TVar3;
  Transactions TVar4;
  AsyncIterator AVar5;
  Transactions TVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  puVar1 = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  puVar1 = &DAT_100fbb638;
  FUN_1000037f0(&DAT_100fbb638,&DAT_100c3c050);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  TVar3 = StoreKit::Transaction::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = TVar3.unknown;
  lVar8 = *(long *)(TVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  puVar1 = &DAT_100fb7f90;
  FUN_1000037f0(&DAT_100fb7f90,&DAT_100c3c630);
  *(undefined **)(unaff_x22 + 0x48) = puVar1;
  lVar8 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar8;
  uVar2 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  puVar1 = &DAT_100fb83a0;
  FUN_1000037f0(&DAT_100fb83a0,&DAT_100c37ad0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  TVar4 = StoreKit::Transaction::Transactions::typeMetadataAccessor();
  lVar9 = *(long *)(TVar4.unknown + -8);
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  AVar5 = StoreKit::Transaction::Transactions::AsyncIterator::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = AVar5.unknown;
  lVar8 = *(long *)(AVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  TVar3.unknown = (undefined *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x80) = TVar3.unknown;
  TVar6 = StoreKit::Transaction::get_all(TVar3);
  StoreKit::Transaction::Transactions::makeAsyncIterator(TVar6);
  (**(code **)(lVar9 + 8))(uVar2,TVar4.unknown);
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1002a8460;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x1002a8460 | FUN_1002a8460 */

void FUN_1002a8460(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x10);
  uVar2 = *(undefined8 *)(lVar3 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_1002a84c0,uVar1,uVar2);
  return;
}



/* Address: 0x1002a84c0 | FUN_1002a84c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002a85fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002a84c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long *plVar7;
  Transaction TVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar11 = uVar10;
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x30))(uVar10,1,uVar2);
  if ((int)uVar11 == 1) {
LAB_1002a86a0:
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001002a8724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))((int)uVar11 != 1);
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x88);
  FUN_100245eec(uVar10,*(undefined8 *)(unaff_x22 + 0x58));
  StoreKit::VerificationResult::get_payloadValue((VerificationResult)(__int8)uVar2);
  if (lVar12 == 0) {
    lVar12 = *(long *)(unaff_x22 + 0x38);
    TVar8.unknown = *(undefined **)(unaff_x22 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    (**(code **)(lVar12 + 0x38))(uVar2,0,1,uVar10);
    (**(code **)(lVar12 + 0x20))(TVar8.unknown,uVar2,uVar10);
    SVar17 = StoreKit::Transaction::get_productID(TVar8);
    TVar8.unknown = SVar17.bridgeObject;
    FUN_1000037f0(&DAT_100fb81b0,&DAT_100c37eb0);
    _swift_initStaticObject();
    uVar6 = Swift::_findStringSwitchCase(SVar17.str,SVar17.str,TVar8.unknown);
    _swift_bridgeObjectRelease();
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar12 = *(long *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x30);
    if (uVar6 < 6) {
      uVar14 = *(ulong *)(unaff_x22 + 0x20);
      StoreKit::Transaction::_get_offerType(TVar8);
      SVar17 = StoreKit::Transaction::get_productID(TVar8);
      uVar6 = uVar14;
      FUN_1002a7db0(uVar14,SVar17.str,SVar17.bridgeObject);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      FUN_100005808(uVar14,&DAT_100fbb630,&DAT_100c3c660);
      (**(code **)(lVar12 + 8))(uVar2,uVar13);
      FUN_100005808(uVar10,&DAT_100fb7f90,&DAT_100c3c630);
      if ((uVar6 & 1) != 0) {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x60);
        goto LAB_1002a86a0;
      }
      goto LAB_1002a8750;
    }
    (**(code **)(lVar12 + 8))(uVar2,uVar13);
    puVar9 = &DAT_100fb7f90;
    puVar1 = &DAT_100c3c630;
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar3 = *(long *)(unaff_x22 + 0x38);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x28);
    _swift_errorRelease(lVar12);
    (**(code **)(lVar3 + 0x38))(uVar10,1,1,uVar2);
    FUN_100005808(uVar11,&DAT_100fb7f90,&DAT_100c3c630);
    puVar9 = &DAT_100fbb638;
    puVar1 = &DAT_100c3c050;
  }
  FUN_100005808(uVar10,puVar9,puVar1);
LAB_1002a8750:
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100ea7d38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1002a8460;
  StoreKit::Transaction::Transactions::AsyncIterator::_next
            ((AsyncIterator)*(undefined **)(unaff_x22 + 0x60));
  return;
}



/* Address: 0x1002a87a4 | FUN_1002a87a4 */

undefined8 FUN_1002a87a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbb630;
  FUN_1000037f0(&DAT_100fbb630,&DAT_100c3c660);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002a87f4 | FUN_1002a87f4 */

void FUN_1002a87f4(void)

{
  OfferType OVar1;
  undefined *puVar2;
  
  if (DAT_100fbb700 != (undefined *)0x0) {
    return;
  }
  OVar1 = StoreKit::Transaction::OfferType::typeMetadataAccessor();
  puVar2 = PTR_StoreKit__StoreKit__Transaction__OfferType_>Swift__Equatable_100ea7e10;
  _swift_getWitnessTable
            (PTR_StoreKit__StoreKit__Transaction__OfferType_>Swift__Equatable_100ea7e10,
             OVar1.unknown);
  DAT_100fbb700 = puVar2;
  return;
}



/* Address: 0x1002a8838 | FUN_1002a8838 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

long * FUN_1002a8838(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  URL UVar3;
  ulong uVar4;
  long lVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  lVar5 = *param_2;
  *param_1 = lVar5;
  if ((uVar1 >> 0x11 & 1) == 0) {
    iVar2 = *(int *)(param_3 + 0x14);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,UVar3.unknown);
  }
  else {
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain(lVar5);
  }
  return param_1;
}



/* Address: 0x1002a88cc | FUN_1002a88cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a88cc(long param_1,long param_2)

{
  int iVar1;
  URL UVar2;
  
  iVar1 = *(int *)(param_2 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002a890c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(param_1 + iVar1,UVar2.unknown);
  return;
}



/* Address: 0x1002a8910 | FUN_1002a8910 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_1002a8910(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1002a897c | FUN_1002a897c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002a897c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1002a89e8 | FUN_1002a89e8 */

undefined8 * FUN_1002a89e8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1002a8a40 | FUN_1002a8a40 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_1002a8a40(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  URL UVar2;
  
  *param_1 = *param_2;
  iVar1 = *(int *)(param_3 + 0x14);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,UVar2.unknown);
  return param_1;
}



/* Address: 0x1002a8aa4 | FUN_1002a8aa4 */

void FUN_1002a8aa4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a8ab0 | FUN_1002a8ab0 */

ulong FUN_1002a8ab0(ulong *param_1,undefined8 param_2,long param_3)

{
  URL UVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (long)param_1 + (long)*(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0001002a8b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x30))(uVar2,param_2,UVar1.unknown);
  return uVar2;
}



/* Address: 0x1002a8b2c | FUN_1002a8b2c */

void FUN_1002a8b2c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1002a8b38 | FUN_1002a8b38 */

void FUN_1002a8b38(ulong *param_1,undefined8 param_2,int param_3,long param_4)

{
  URL UVar1;
  
  if (param_3 == 0x7fffffff) {
    *param_1 = (ulong)((int)param_2 - 1);
    return;
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001002a8ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(param_4 + 0x14),param_2,param_2,UVar1.unknown);
  return;
}



/* Address: 0x1002a8bac | FUN_1002a8bac */

void FUN_1002a8bac(undefined8 param_1)

{
  if (DAT_100fbb760 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100caaa84);
  return;
}



/* Address: 0x1002a8be4 | FUN_1002a8be4 */

undefined1  [16] FUN_1002a8be4(long param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(UVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x1002a8c5c | FUN_1002a8c5c */

/* WARNING: Removing unreachable block (ram,0x0001002a8ec0) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002a8eb8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

tuple2_conflict7
FUN_1002a8c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined *param_7)

{
  Code CVar1;
  ulong uVar2;
  URLError UVar3;
  undefined *puVar4;
  UUID UVar5;
  URL UVar6;
  URL url;
  URLRequest_conflict UVar7;
  JSONEncoder *pJVar8;
  long *plVar9;
  long lVar11;
  long unaff_x20;
  long lVar12;
  long unaff_x22;
  String SVar13;
  String SVar14;
  tuple2_conflict7 tVar15;
  void *pvVar10;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = param_3;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  CVar1 = Foundation::URLError::Code::typeMetadataAccessor();
  uVar2 = *(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar2;
  UVar3 = Foundation::URLError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x98) = UVar3.unknown;
  lVar11 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  puVar4 = &DAT_100fb7f20;
  FUN_1000037f0(&DAT_100fb7f20,&DAT_100c37980);
  uVar2 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xb8) = UVar5.unknown;
  lVar11 = *(long *)(UVar5.unknown + -8);
  *(long *)(unaff_x22 + 0xc0) = lVar11;
  uVar2 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 200) = uVar2;
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar6.unknown + -8);
  url.unknown = (undefined *)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xd0) = url.unknown;
  UVar7 = Foundation::URLRequest::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0xd8) = UVar7.unknown;
  lVar11 = *(long *)(UVar7.unknown + -8);
  *(long *)(unaff_x22 + 0xe0) = lVar11;
  UVar7.unknown = (undefined *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0xe8) = UVar7.unknown;
  lVar11 = 0;
  FUN_1002a8bac();
  (**(code **)(lVar12 + 0x10))(url.unknown,unaff_x20 + *(int *)(lVar11 + 0x14),UVar6.unknown);
  Foundation::URLRequest::init(url,(NSURLRequestCachePolicy)0x0,60.0);
  Foundation::URLRequest::_set_httpMethod((URLRequest *)UVar7.unknown);
  SVar14.bridgeObject = (void *)0x8000000100d8fc90;
  SVar14.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar14,(URLRequest_conflict)0x2d746e65746e6f43);
  SVar13.bridgeObject = (void *)0x8000000100d8fc90;
  SVar13.str = (char *)0xd000000000000010;
  Foundation::URLRequest::_setValue(SVar13,(URLRequest_conflict)0x747065636341);
  pJVar8 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
  pJVar8 = Foundation::JSONEncoder::init(pJVar8);
  _swift_bridgeObjectRetain(param_5);
  UVar5.unknown = param_7;
  _swift_bridgeObjectRetain();
  SVar14 = Foundation::UUID::get_uuidString(UVar5);
  pvVar10 = SVar14.bridgeObject;
  SVar14 = Swift::String::lowercased(SVar14);
  _swift_bridgeObjectRelease(pvVar10);
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined **)(unaff_x22 + 0x60) = param_7;
  *(String *)(unaff_x22 + 0x68) = SVar14;
  FUN_1002a9528();
  Foundation::JSONEncoder::_encode(pJVar8,pvVar10,&DAT_100ec64c8,pvVar10);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(param_7);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  _swift_release(pJVar8);
  Foundation::URLRequest::_set_httpBody((URLRequest *)UVar7.unknown);
  plVar9 = (long *)(ulong)*(uint *)(PTR__data_100ea7940 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xf0) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1002a8fe0;
  tVar15 = (extension_Foundation)::__C::NSURLSession::_data(UVar7);
  return tVar15;
}



/* Address: 0x1002a8fe0 | FUN_1002a8fe0 */

void FUN_1002a8fe0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x80);
  uVar3 = *(undefined8 *)(lVar4 + 0x88);
  *(undefined8 *)(lVar4 + 0xf8) = param_1;
  *(undefined8 *)(lVar4 + 0x100) = param_2;
  *(undefined8 *)(lVar4 + 0x108) = param_3;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xf0));
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1002a9060;
  }
  else {
    pcVar2 = FUN_1002a94a0;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002a9060 | FUN_1002a9060 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002a9060(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  JSONDecoder *pJVar7;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  DVar8;
  ID *pIVar9;
  ID *pIVar10;
  NSDataBase64DecodingOptions base64Encoded;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar11;
  undefined8 uVar12;
  ID self;
  undefined8 *puVar13;
  long lVar14;
  long unaff_x22;
  undefined8 *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  
  self = *(ID *)(unaff_x22 + 0x108);
  _swift_dynamicCastObjCClass(self,&_OBJC_CLASS___NSHTTPURLResponse);
  if (self == 0) {
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xf8);
    lVar14 = *(long *)(unaff_x22 + 0xe0);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar21 = *(undefined8 *)(unaff_x22 + 0xd8);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
    DVar8.unknown = *(undefined **)(unaff_x22 + 0x90);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
    Foundation::URLError::Code::get_badServerResponse((Code)0x0);
    FUN_1002a9a58(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1002aa028();
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar8);
    Foundation::URLError::get__nsError((URLError)DVar8.unknown);
    _swift_willThrow();
    FUN_10003bf2c(uVar20,uVar16);
    (**(code **)(lVar1 + 8))(uVar18,uVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
LAB_1002a9350:
    (*UNRECOVERED_JUMPTABLE)(uVar17,uVar21);
  }
  else {
    IVar6 = objc_stub::statusCode(self);
    if (99 < IVar6 - 200) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar14 = *(long *)(unaff_x22 + 0xe0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd8);
      pIVar9 = (ID *)objc_stub::statusCode(self);
      pIVar10 = pIVar9;
      FUN_1002a7714();
      _swift_allocError(&DAT_100ec6360,pIVar10,0,0);
      *pIVar10 = (ID)pIVar9;
      *(undefined1 *)(pIVar10 + 1) = 0;
LAB_1002a9328:
      _swift_willThrow();
      FUN_10003bf2c(uVar18,uVar16);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar14 + 8);
      goto LAB_1002a9350;
    }
    lVar14 = *(long *)(unaff_x22 + 0x110);
    pJVar7 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar7,*(undefined4 *)(pJVar7 + 0x30),*(undefined2 *)(pJVar7 + 0x34));
    pJVar7 = Foundation::JSONDecoder::init(pJVar7);
    FUN_1002aa06c();
    Foundation::JSONDecoder::_decode(pJVar7,(Data)0x100ec6440);
    if (lVar14 == 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
      lVar14 = *(long *)(unaff_x22 + 0xc0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0xb0);
      _swift_release(pJVar7);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x10);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
      uVar21 = *(undefined8 *)(unaff_x22 + 0x28);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x30);
      base64Encoded.unknown = *(undefined **)(unaff_x22 + 0x38);
      puVar13 = *(undefined8 **)(unaff_x22 + 0x40);
      Foundation::UUID::_init();
      (**(code **)(lVar14 + 0x30))(uVar20,1,uVar16);
      if ((int)uVar20 == 1) {
        puVar15 = *(undefined8 **)(unaff_x22 + 0xb0);
        _swift_bridgeObjectRelease(uVar3);
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease(puVar13);
        FUN_100243af8();
        puVar13 = puVar15;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0xc0) + 0x20);
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb0),
                   *(undefined8 *)(unaff_x22 + 0xb8));
        puVar15 = puVar13;
        Foundation::Data::_init(base64Encoded);
        if ((ulong)puVar15 >> 0x3c < 0xf) {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
          uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
          uVar4 = *(undefined8 *)(unaff_x22 + 0xe8);
          uVar20 = *(undefined8 *)(unaff_x22 + 0xd0);
          uVar19 = *(undefined8 *)(unaff_x22 + 200);
          uVar11 = *(undefined8 *)(unaff_x22 + 0xb8);
          uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
          uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
          uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
          puVar23 = *(undefined8 **)(unaff_x22 + 0x78);
          (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0xd8));
          FUN_10003bf2c(uVar22,uVar16);
          lVar14 = 0;
          FUN_1002a75a4();
          (*UNRECOVERED_JUMPTABLE)((long)puVar23 + (long)*(int *)(lVar14 + 0x14),uVar19,uVar11);
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(puVar13);
          *puVar23 = uVar17;
          puVar23[1] = uVar3;
          puVar13 = (undefined8 *)((long)puVar23 + (long)*(int *)(lVar14 + 0x18));
          *puVar13 = base64Encoded.unknown;
          puVar13[1] = puVar15;
          *(undefined8 *)((long)puVar23 + (long)*(int *)(lVar14 + 0x1c)) = uVar18;
          _swift_task_dealloc(uVar4);
          _swift_task_dealloc(uVar20);
          _swift_task_dealloc(uVar19);
          _swift_task_dealloc(uVar5);
          _swift_task_dealloc(uVar2);
          _swift_task_dealloc(uVar12);
          UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
          goto LAB_1002a9394;
        }
        (**(code **)(*(long *)(unaff_x22 + 0xc0) + 8))
                  (*(undefined8 *)(unaff_x22 + 200),*(undefined8 *)(unaff_x22 + 0xb8));
        _swift_bridgeObjectRelease(uVar3);
        _swift_bridgeObjectRelease(uVar21);
        _swift_bridgeObjectRelease();
      }
      uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar14 = *(long *)(unaff_x22 + 0xe0);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
      uVar21 = *(undefined8 *)(unaff_x22 + 0xd8);
      FUN_1002a7714();
      _swift_allocError(&DAT_100ec6360,puVar13,0,0);
      *puVar13 = 0;
      *(undefined1 *)(puVar13 + 1) = 1;
      goto LAB_1002a9328;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf8);
    (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
              (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
    FUN_10003bf2c(uVar17,uVar16);
    _swift_release(pJVar7);
  }
  uVar16 = *(undefined8 *)(unaff_x22 + 200);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar21);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1002a9394:
                    /* WARNING: Could not recover jumptable at 0x0001002a93b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1002a94a0 | FUN_1002a94a0 */

void FUN_1002a94a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  (**(code **)(*(long *)(unaff_x22 + 0xe0) + 8))
            (*(undefined8 *)(unaff_x22 + 0xe8),*(undefined8 *)(unaff_x22 + 0xd8));
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xe8));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002a9524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002a9528 | FUN_1002a9528 */

void FUN_1002a9528(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb798 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c0e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c0e4,&DAT_100ec64c8);
  DAT_100fbb798 = pTVar1;
  return;
}



/* Address: 0x1002a9568 | FUN_1002a9568 */

undefined1  [16] FUN_1002a9568(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  uVar1 = 0x6449726566666f;
  if (cVar4 != '\x01') {
    uVar1 = 0x756f636341707061;
  }
  puVar2 = &DAT_e700000000000000;
  if (cVar4 != '\x01') {
    puVar2 = (undefined1 *)0xef6e656b6f54746e;
  }
  puVar3 = (undefined1 *)0xe900000000000064;
  uVar5 = 0x49746375646f7270;
  if (cVar4 != '\0') {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x1002a95d4 | FUN_1002a95d4 */

void FUN_1002a95d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1002a9b64();
  *param_1 = param_2;
  return;
}



/* Address: 0x1002a95f8 | FUN_1002a95f8 */

String FUN_1002a95f8(void)

{
  String SVar1;
  
  FUN_1002aa2b4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1002a9620 | FUN_1002a9620 */

String FUN_1002a9620(void)

{
  String SVar1;
  
  FUN_1002aa2b4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1002a9648 | FUN_1002a9648 */

void FUN_1002a9648(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fbb7b8;
  FUN_1000037f0(&DAT_100fbb7b8,&DAT_100c3c110);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1002aa2b4();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1002a9794 | FUN_1002a9794 */

void FUN_1002a9794(void)

{
  FUN_1002a9648();
  return;
}



/* Address: 0x1002a97cc | FUN_1002a97cc */

undefined1  [16] FUN_1002a97cc(void)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar2 = *unaff_x20;
  puVar1 = &SUB_e900000000000070;
  puVar3 = &DAT_6d617473656d6974;
  if (bVar2 != 2) {
    puVar1 = (undefined1 *)0xe900000000000065;
    puVar3 = (undefined1 *)0x727574616e676973;
  }
  puVar4 = (undefined1 *)0x444979656b;
  if (bVar2 != 0) {
    puVar4 = (undefined1 *)0x65636e6f6e;
  }
  if (bVar2 < 2) {
    puVar1 = &DAT_e500000000000000;
    puVar3 = puVar4;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = puVar3;
  return auVar5;
}



/* Address: 0x1002a984c | FUN_1002a984c */

void FUN_1002a984c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1002a9c88();
  *param_1 = param_2;
  return;
}



/* Address: 0x1002a9870 | FUN_1002a9870 */

String FUN_1002a9870(void)

{
  String SVar1;
  
  FUN_1002aa2f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1002a9898 | FUN_1002a9898 */

String FUN_1002a9898(void)

{
  String SVar1;
  
  FUN_1002aa2f4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1002a98c0 | FUN_1002a98c0 */

void FUN_1002a98c0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1002a9dec(&local_58);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_50;
    *param_1 = local_58;
    param_1[3] = uStack_40;
    param_1[2] = local_48;
    param_1[5] = uStack_30;
    param_1[4] = local_38;
    param_1[6] = local_28;
  }
  return;
}



/* Address: 0x1002a990c | FUN_1002a990c */

void FUN_1002a990c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1002a8bac(0);
  FUN_1000d80e0(param_1,"PasteLicensingAppStore/PromoOfferSigningClient.swift",0x34,2,0x45,0x13,
                FUN_1002a995c,0,uVar1);
  return;
}



/* Address: 0x1002a995c | FUN_1002a995c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002a995c(ID *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ID IVar3;
  URL UVar4;
  undefined1 *puVar5;
  long lVar6;
  long extraout_x8;
  undefined1 *puVar7;
  long lVar8;
  
  puVar2 = &DAT_100fb7dd8;
  FUN_1000037f0(&DAT_100fb7dd8,&DAT_100c37678);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = &stack0xffffffffffffffc0 + -extraout_x8;
  IVar3 = NSURLSession::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
  Foundation::URL::_init();
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  puVar5 = puVar7;
  (**(code **)(lVar8 + 0x30))(puVar7,1,UVar4.unknown);
  if ((int)puVar5 != 1) {
    lVar6 = 0;
    FUN_1002a8bac();
    (**(code **)(lVar8 + 0x20))((long)param_1 + (long)*(int *)(lVar6 + 0x14),puVar7,UVar4.unknown);
    *param_1 = IVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002a9a58);
  (*pcVar1)();
}



/* Address: 0x1002a9a58 | FUN_1002a9a58 */

undefined * FUN_1002a9a58(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong local_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb8f00;
    FUN_1000037f0(&DAT_100fb8f00,&DAT_100c389a8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1002aa0ac(param_1,&local_80);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar6 = local_80;
      uVar7 = uStack_78;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002a9b60);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1002a9b64);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1002a9b64 | FUN_1002a9b64 */

undefined4 FUN_1002a9b64(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x49746375646f7270 || param_2 != (undefined1 *)0xe900000000000064) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x49746375646f7270,(_StringGuts)0xe900000000000064,expecting);
    if (!bVar1) {
      if (((param_1 != 0x6449726566666f) || (param_2 != &DAT_e700000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6449726566666f,(_StringGuts)0xe700000000000000,expecting
                            ), !bVar1)) {
        if ((param_1 == 0x756f636341707061) && (param_2 == (undefined1 *)0xef6e656b6f54746e)) {
          _swift_bridgeObjectRelease(0xef6e656b6f54746e);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x756f636341707061,(_StringGuts)0xef6e656b6f54746e,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1002a9c88 | FUN_1002a9c88 */

undefined4 FUN_1002a9c88(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != (undefined1 *)0x444979656b || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x444979656b,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x65636e6f6e) && (param_2 == &DAT_e500000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65636e6f6e,(_StringGuts)0xe500000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != &DAT_6d617473656d6974) || (param_2 != &SUB_e900000000000070)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6d617473656d6974,(_StringGuts)0xe900000000000070,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x727574616e676973) &&
           (param_2 == (undefined1 *)0xe900000000000065)) {
          _swift_bridgeObjectRelease(0xe900000000000065);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x727574616e676973,(_StringGuts)0xe900000000000065,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1002a9dec | FUN_1002a9dec */

/* WARNING: Removing unreachable block (ram,0x0001002a9f20) */
/* WARNING: Removing unreachable block (ram,0x0001002a9f5c) */
/* WARNING: Removing unreachable block (ram,0x0001002a9f88) */
/* WARNING: Removing unreachable block (ram,0x0001002a9f98) */
/* WARNING: Removing unreachable block (ram,0x0001002a9fac) */
/* WARNING: Removing unreachable block (ram,0x0001002a9eb8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001002a9f54 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002a9dec(undefined8 *param_1,long param_2)

{
  void *pvVar1;
  undefined *puVar2;
  void *pvVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  String SVar5;
  __int64 local_80;
  String local_78;
  char *local_68;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fbb7c8;
  FUN_1000037f0(&DAT_100fbb7c8,&DAT_100c3c118);
  lVar4 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1002aa2f4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar5 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar2);
    pvVar3 = SVar5.bridgeObject;
    local_68 = SVar5.str;
    local_52 = 1;
    local_78 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar2);
    local_53 = 2;
    local_80 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar2);
    local_54 = 3;
    SVar5 = Swift::KeyedDecodingContainer::_decode(&local_54,puVar2);
    (**(code **)(lVar4 + 8))((long)&local_80 - extraout_x8,puVar2);
    _swift_bridgeObjectRetain(pvVar3);
    pvVar1 = local_78.bridgeObject;
    _swift_bridgeObjectRetain(local_78.bridgeObject);
    _swift_bridgeObjectRetain(SVar5.bridgeObject);
    FUN_100004594(param_2);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    _swift_bridgeObjectRelease(pvVar1);
    _swift_bridgeObjectRelease(pvVar3);
    *param_1 = local_68;
    param_1[1] = pvVar3;
    param_1[2] = local_78.str;
    param_1[3] = pvVar1;
    param_1[4] = local_80;
    *(String *)(param_1 + 5) = SVar5;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1002aa028 | FUN_1002aa028 */

void FUN_1002aa028(void)

{
  URLError UVar1;
  undefined *puVar2;
  
  if (DAT_100fbb7a0 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::URLError::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100ea7738;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__URLError_>Foundation___BridgedStoredNSError_100ea7738,
             UVar1.unknown);
  DAT_100fbb7a0 = puVar2;
  return;
}



/* Address: 0x1002aa06c | FUN_1002aa06c */

void FUN_1002aa06c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c0bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c0bc,&DAT_100ec6440);
  DAT_100fbb7a8 = pTVar1;
  return;
}



/* Address: 0x1002aa0ac | FUN_1002aa0ac */

undefined8 FUN_1002aa0ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbb7b0;
  FUN_1000037f0(&DAT_100fbb7b0,&DAT_100c3c090);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002aa0fc | FUN_1002aa0fc */

void FUN_1002aa0fc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x1002aa12c | FUN_1002aa12c */

undefined8 * FUN_1002aa12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1002aa188 | FUN_1002aa188 */

undefined8 * FUN_1002aa188(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1002aa21c | FUN_1002aa21c */

void FUN_1002aa21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002aa238 | FUN_1002aa238 */

undefined8 * FUN_1002aa238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1002aa294 | FUN_1002aa294 */

undefined1  [16] FUN_1002aa294(void)

{
  return ZEXT816(0x100ec6440);
}



/* Address: 0x1002aa2a4 | FUN_1002aa2a4 */

undefined1  [16] FUN_1002aa2a4(void)

{
  return ZEXT816(0x100ec64c8);
}



/* Address: 0x1002aa2b4 | FUN_1002aa2b4 */

void FUN_1002aa2b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c2ec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c2ec,&DAT_100ec65f8);
  DAT_100fbb7c0 = pTVar1;
  return;
}



/* Address: 0x1002aa2f4 | FUN_1002aa2f4 */

void FUN_1002aa2f4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c29c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c29c,&DAT_100ec6568);
  DAT_100fbb7d0 = pTVar1;
  return;
}



/* Address: 0x1002aa334 | FUN_1002aa334 */

undefined1  [16] FUN_1002aa334(void)

{
  return ZEXT816(0x100ec6568);
}



/* Address: 0x1002aa344 | FUN_1002aa344 */

undefined1  [16] FUN_1002aa344(void)

{
  return ZEXT816(0x100ec65f8);
}



/* Address: 0x1002aa354 | thunk_FUN_1002aa358 */

void thunk_FUN_1002aa358(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c1bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c1bc,&DAT_100ec65f8);
  DAT_100fbb7d8 = pTVar1;
  return;
}



/* Address: 0x1002aa358 | FUN_1002aa358 */

void FUN_1002aa358(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c1bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c1bc,&DAT_100ec65f8);
  DAT_100fbb7d8 = pTVar1;
  return;
}



/* Address: 0x1002aa398 | thunk_FUN_1002aa39c */

void thunk_FUN_1002aa39c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c274;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c274,&DAT_100ec6568);
  DAT_100fbb7e0 = pTVar1;
  return;
}



/* Address: 0x1002aa39c | FUN_1002aa39c */

void FUN_1002aa39c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c274;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c274,&DAT_100ec6568);
  DAT_100fbb7e0 = pTVar1;
  return;
}



/* Address: 0x1002aa3dc | thunk_FUN_1002aa3e0 */

void thunk_FUN_1002aa3e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c20c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c20c,&DAT_100ec6568);
  DAT_100fbb7e8 = pTVar1;
  return;
}



/* Address: 0x1002aa3e0 | FUN_1002aa3e0 */

void FUN_1002aa3e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbb7e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3c20c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3c20c,&DAT_100ec6568);
  DAT_100fbb7e8 = pTVar1;
  return;
}


