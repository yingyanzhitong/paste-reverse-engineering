/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10093da74 | FUN_10093da74 */

undefined * FUN_10093da74(long param_1)

{
  _HashTable _Var1;
  long *plVar2;
  int iVar3;
  byte bVar4;
  byte bVar5;
  undefined *puVar6;
  code *pcVar7;
  Bucket BVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_10090da64(0,lVar11,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar8 = Swift::_HashTable::get_startBucket(_Var1);
    lVar14 = 0;
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar8.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd1c);
        (*pcVar7)();
      }
      uVar15 = (ulong)BVar8.offset >> 6;
      uVar16 = 1L << (BVar8.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd20);
        (*pcVar7)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd24);
        (*pcVar7)();
      }
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + BVar8.offset * 0x10);
      lVar12 = *plVar2;
      bVar4 = *(byte *)(plVar2 + 1);
      bVar5 = bVar4 >> 6;
      _swift_retain(lVar12,bVar4);
      if (bVar5 < 2) {
        uVar9 = 0;
        if (bVar5 == 0) {
          FUN_10095456c();
        }
        else {
          FUN_100952c0c(0);
        }
      }
      else if (bVar5 == 2) {
        uVar9 = 0;
        FUN_1009546f0(0);
      }
      else {
        uVar9 = 0;
        FUN_10093855c(0);
      }
      _swift_retain(lVar12);
      FUN_10061cf14(2,0,uVar9,&PTR_PTR_100f0f5c8);
      uVar9 = *(undefined8 *)(lVar12 + 0x28);
      _swift_retain(uVar9);
      _swift_release(lVar12,bVar4);
      _swift_release(lVar12,bVar4);
      uVar13 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar13) {
        FUN_10090da64(1 < *(ulong *)(puVar6 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(puVar6 + 0x10) = uVar13 + 1;
      *(undefined8 *)(puVar6 + uVar13 * 8 + 0x20) = uVar9;
      uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar13 <= (ulong)BVar8.offset) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd28);
        (*pcVar7)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd2c);
        (*pcVar7)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10093dd30);
        (*pcVar7)();
      }
      uVar16 = *(ulong *)(_Var1.unknown + uVar15 * 8) & -2L << (BVar8.offset & 0x3fU);
      if (uVar16 == 0) {
        lVar12 = uVar15 << 6;
        puVar10 = (ulong *)(param_1 + 0x48 + uVar15 * 8);
        do {
          uVar15 = uVar15 + 1;
          if (uVar13 + 0x3f >> 6 <= uVar15) {
            FUN_10000cae0(BVar8.offset,iVar3,0);
            goto LAB_10093db14;
          }
          uVar16 = *puVar10;
          lVar12 = lVar12 + 0x40;
          puVar10 = puVar10 + 1;
        } while (uVar16 == 0);
        FUN_10000cae0(BVar8.offset,iVar3,0);
        uVar15 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar12;
      }
      else {
        uVar15 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar13 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | BVar8.offset & 0x7fffffffffffffc0U;
      }
LAB_10093db14:
      lVar14 = lVar14 + 1;
      BVar8.offset = uVar13;
    } while (lVar14 != lVar11);
  }
  return puVar6;
}



/* Address: 0x10093dd30 | FUN_10093dd30 */

void FUN_10093dd30(void)

{
  bool bVar1;
  code *pcVar2;
  int iVar3;
  DispatchTime DVar4;
  undefined **ppuVar5;
  DispatchTime DVar6;
  __uint64 _Var7;
  __uint64 _Var8;
  undefined8 uVar9;
  long extraout_x8;
  undefined *extraout_x8_00;
  __uint64 unaff_x20;
  long unaff_x21;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [56];
  __uint64 local_58;
  
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar5 != extraout_x8_00) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093df38);
    (*pcVar2)();
  }
  lVar12 = *(long *)(unaff_x20 + 0x60);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093df3c);
    (*pcVar2)();
  }
  _swift_beginAccess(unaff_x20 + 0x30,auStack_a8,0,0);
  bVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) == 0;
  if (bVar1) {
    _Var7 = 0;
  }
  else {
    FUN_1009474f8(*(long *)(unaff_x20 + 0x30) + 0x20,auStack_90);
    FUN_100947534(auStack_90);
    _Var7 = local_58;
  }
  uVar10 = (ulong)bVar1;
  DVar6.unknown = (undefined *)(unaff_x20 + 0x38);
  _swift_beginAccess(DVar6.unknown,auStack_90,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 0x38) + 0x18) != 0) {
    DVar6 = Dispatch::DispatchTime::now(DVar6);
    _Var7 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar6);
    (**(code **)(lVar11 + 8))(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar4.unknown)
    ;
    uVar10 = 0;
    if (0x7ffffffffffffffe < _Var7) {
      _Var7 = 0x7fffffffffffffff;
    }
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093df40);
    (*pcVar2)();
  }
  if ((*(byte *)(unaff_x20 + 0x70) & 0xfe) != 2) {
    _Var8 = 0;
    do {
      __objc_autoreleasePoolPush();
      FUN_100940638(_Var7,uVar10,FUN_100949cb8);
      if (unaff_x21 != 0) {
        __objc_autoreleasePoolPop(_Var8);
        goto LAB_10093df0c;
      }
      __objc_autoreleasePoolPop(_Var8);
      _Var8 = unaff_x20;
      FUN_10094000c();
      _Var7 = _Var8;
    } while ((*(byte *)(unaff_x20 + 0x70) & 0xfe) != 2);
  }
  FUN_100942938();
  if (unaff_x21 == 0) {
    _swift_beginAccess(unaff_x20 + 0x50,auStack_c0,1,0);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    _swift_release(uVar9);
  }
LAB_10093df0c:
  FUN_1009407b0();
  return;
}



/* Address: 0x10093df40 | thunk_FUN_10093eb98 */

void thunk_FUN_10093eb98(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_28,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Address: 0x10093df44 | FUN_10093df44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010093e2fc) */

void FUN_10093df44(undefined8 param_1,undefined8 param_2,DispatchQoS param_3)

{
  int iVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined **ppuVar4;
  void *pvVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *extraout_x8_01;
  code *pcVar9;
  long unaff_x20;
  long lVar10;
  DispatchWorkItemFlags qos;
  long lVar11;
  long lVar12;
  long lVar13;
  long local_c0 [2];
  code *local_b0;
  undefined *local_a8;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined *local_88;
  undefined1 local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar13 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  qos.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  ppuVar4 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar4 == extraout_x8_01) {
    puVar8 = &DAT_100f1a548;
    _swift_allocObject(&DAT_100f1a548,0x30,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar8 + 0x18) = param_1;
    *(undefined8 *)(puVar8 + 0x20) = param_2;
    *(undefined **)(puVar8 + 0x28) = param_3.unknown;
    local_90 = FUN_100948568;
    local_b0 = (code *)PTR___NSConcreteStackBlock_100ea82a0;
    local_a8 = (undefined *)0x42000000;
    local_a0 = FUN_100030410;
    puStack_98 = &DAT_100f1a560;
    local_88 = puVar8;
    pvVar5 = __Block_copy(&local_b0);
    _swift_retain();
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_3);
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = &DAT_100fec6d8;
    FUN_1003b6598(&DAT_100fec6d8,0xff,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar6 = &DAT_100fec6e0;
    FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
    puVar7 = puVar6;
    FUN_100947704();
    Swift::SetAlgebra::_init(lVar10,&local_68,puVar6,puVar7,DVar2.unknown,puVar8);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(pvVar5);
    pcVar9 = *(code **)(lVar11 + 8);
LAB_10093e240:
    (*pcVar9)(lVar10,DVar2.unknown);
    (**(code **)(lVar13 + 8))(qos.unknown,DVar3.unknown);
    _swift_release(local_88);
    return;
  }
  lVar12 = *(long *)(unaff_x20 + 0x68);
  local_c0[0] = lVar11;
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10093e31c);
    (*pcVar9)();
  }
  if (*(char *)(unaff_x20 + 0x71) == '\0') {
    *(undefined1 *)(unaff_x20 + 0x71) = 1;
    iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
    if (iVar1 == 0) {
      puVar8 = &DAT_100f1a520;
      _swift_allocObject(&DAT_100f1a520,0x30,7);
      *(long *)(puVar8 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar8 + 0x18) = param_1;
      *(undefined8 *)(puVar8 + 0x20) = param_2;
      *(undefined **)(puVar8 + 0x28) = param_3.unknown;
      local_b0 = FUN_10094855c;
      local_88 = (undefined *)((ulong)local_88 & 0xffffffffffffff00);
      local_70 = 1;
      local_a8 = puVar8;
      _swift_retain();
      _swift_retain(param_3.unknown);
      _swift_retain(puVar8);
      FUN_10093efc4(&local_b0);
      _swift_release(puVar8);
      FUN_1008fa458(&local_b0);
      return;
    }
  }
  else {
    iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
    if (iVar1 == 0) {
      puVar8 = &DAT_100f1a4d0;
      _swift_allocObject(&DAT_100f1a4d0,0x20,7);
      *(undefined8 *)(puVar8 + 0x10) = param_2;
      *(undefined **)(puVar8 + 0x18) = param_3.unknown;
      local_90 = FUN_100948504;
      local_b0 = (code *)PTR___NSConcreteStackBlock_100ea82a0;
      local_a8 = (undefined *)0x42000000;
      local_a0 = FUN_100030410;
      puStack_98 = &DAT_100f1a4e8;
      local_88 = puVar8;
      pvVar5 = __Block_copy(&local_b0);
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(param_3);
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar8 = &DAT_100fec6d8;
      FUN_1003b6598(&DAT_100fec6d8,0xff,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar6 = &DAT_100fec6e0;
      FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
      puVar7 = puVar6;
      FUN_100947704();
      Swift::SetAlgebra::_init(lVar10,&local_68,puVar6,puVar7,DVar2.unknown,puVar8);
      (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
      __Block_release(pvVar5);
      pcVar9 = *(code **)(local_c0[0] + 8);
      goto LAB_10093e240;
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x10093e320);
  (*pcVar9)();
}



/* Address: 0x10093e320 | FUN_10093e320 */

void FUN_10093e320(ulong param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x20 + 0x68);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3d8);
    (*pcVar1)();
  }
  if (*(byte *)(unaff_x20 + 0x71) - 3 < 2) {
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    if (*(byte *)(unaff_x20 + 0x71) != 2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3ec);
      (*pcVar1)();
    }
    *(undefined1 *)(unaff_x20 + 0x71) = 3;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 == 0) {
      if ((param_1 & 1) != 0) {
        FUN_10095fae4(*(undefined8 *)(unaff_x20 + 0x18));
      }
      iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
      if (iVar2 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3e0);
        (*pcVar1)();
      }
      if (*(char *)(unaff_x20 + 0x71) != '\x03') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3e4);
        (*pcVar1)();
      }
      *(undefined1 *)(unaff_x20 + 0x71) = 4;
      iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
      if (iVar2 == 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3e8);
      (*pcVar1)();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e3dc);
  (*pcVar1)();
}



/* Address: 0x10093e3ec | FUN_10093e3ec */

void FUN_10093e3ec(undefined8 *param_1,code *param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *unaff_x20;
  if (*(long *)(uVar5 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093e458);
    (*pcVar2)();
  }
  uVar3 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    (*param_2)();
    lVar4 = *(long *)(uVar5 + 0x10);
  }
  else {
    lVar4 = *(long *)(uVar5 + 0x10);
  }
  if (lVar4 != 0) {
    lVar1 = uVar5 + (lVar4 + -1) * 0x40;
    *(long *)(uVar5 + 0x10) = lVar4 + -1;
    *unaff_x20 = uVar5;
    uVar6 = *(undefined8 *)(lVar1 + 0x20);
    uVar8 = *(undefined8 *)(lVar1 + 0x38);
    uVar7 = *(undefined8 *)(lVar1 + 0x30);
    param_1[1] = *(undefined8 *)(lVar1 + 0x28);
    *param_1 = uVar6;
    param_1[3] = uVar8;
    param_1[2] = uVar7;
    uVar6 = *(undefined8 *)(lVar1 + 0x40);
    uVar8 = *(undefined8 *)(lVar1 + 0x58);
    uVar7 = *(undefined8 *)(lVar1 + 0x50);
    param_1[5] = *(undefined8 *)(lVar1 + 0x48);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10093e470);
  (*pcVar2)();
}



/* Address: 0x10093e470 | FUN_10093e470 */

void FUN_10093e470(undefined *param_1,char *param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  code *pcVar3;
  bool bVar4;
  __int32 _Var5;
  char *pcVar6;
  _StringGuts _Var7;
  char *pcVar8;
  String SVar9;
  String SVar10;
  
  if (0 < (long)param_2) {
    do {
      while( true ) {
        pcVar6 = (char *)0x2;
        _Var7.unknown = param_1;
        pcVar8 = param_2;
        _write();
        if ((long)pcVar6 < 0) break;
        pcVar8 = param_2;
        if ((long)pcVar6 <= (long)param_2) {
          pcVar8 = pcVar6;
        }
        pcVar2 = (char *)0x0;
        if (pcVar6 != (char *)0x0) {
          pcVar2 = pcVar8;
        }
        puVar1 = param_1 + (long)pcVar2;
        bVar4 = param_1 != (undefined *)0x0;
        param_1 = (undefined *)0x0;
        if (bVar4) {
          param_1 = puVar1;
        }
        param_2 = param_2 + -(long)pcVar2;
        if (param_2 == (char *)0x0) {
          return;
        }
      }
      _Var5 = Darwin::get_errno();
      if (_Var5 != 4) {
        Swift::_StringGuts::grow(0x1c,_Var7);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar9 = Swift::CustomStringConvertible::get_description();
        SVar10.bridgeObject = param_4;
        SVar10.str = pcVar8;
        Swift::String::append(SVar9,SVar10);
        _swift_bridgeObjectRelease(SVar9.bridgeObject);
        SVar9.bridgeObject = (void *)0x2;
        SVar9.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar9,(StaticString)0xd00000000000001a,
                   0x8000000100db4730,0xdb51a0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093e590);
        (*pcVar3)();
      }
    } while (param_2 != (char *)0x0);
  }
  return;
}



/* Address: 0x10093e590 | FUN_10093e590 */

void FUN_10093e590(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  
  pcVar1 = param_2;
  __objc_autoreleasePoolPush();
  (*param_2)(param_1);
  __objc_autoreleasePoolPop(pcVar1);
  return;
}



/* Address: 0x10093e5ec | thunk_FUN_100947460 */

void thunk_FUN_100947460(void)

{
  FUN_100947460();
  return;
}



/* Address: 0x10093e5f0 | FUN_10093e5f0 */

void FUN_10093e5f0(undefined8 param_1,Hasher param_2)

{
  code *pcVar1;
  __uint64 *unaff_x20;
  
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(unaff_x20[1],param_2);
  Swift::Hasher::_combine(unaff_x20[2],param_2);
  if ((long)unaff_x20[3] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e644);
    (*pcVar1)();
  }
  Swift::Hasher::_combine(unaff_x20[3],param_2);
  if (-1 < (long)unaff_x20[4]) {
    Swift::Hasher::_combine(unaff_x20[4],param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e648);
  (*pcVar1)();
}



/* Address: 0x10093e648 | FUN_10093e648 */

void FUN_10093e648(undefined8 param_1,Hasher param_2)

{
  code *pcVar1;
  Hasher HVar2;
  __uint64 *unaff_x20;
  
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(unaff_x20[1],param_2);
  Swift::Hasher::_combine(unaff_x20[2],param_2);
  if ((long)unaff_x20[3] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e6c8);
    (*pcVar1)();
  }
  Swift::Hasher::_combine(unaff_x20[3],param_2);
  HVar2.unknown = (undefined *)unaff_x20[4];
  if (-1 < (long)HVar2.unknown) {
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
    Swift::Hasher::_finalize(HVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093e6cc);
  (*pcVar1)();
}



/* Address: 0x10093e6cc | FUN_10093e6cc */

void FUN_10093e6cc(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 _Var3;
  __uint64 _Var4;
  code *pcVar5;
  Hasher HVar6;
  __uint64 *unaff_x20;
  
  _Var1 = *unaff_x20;
  _Var3 = unaff_x20[1];
  _Var2 = unaff_x20[2];
  _Var4 = unaff_x20[3];
  HVar6.unknown = (undefined *)unaff_x20[4];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  if ((long)_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10093e764);
    (*pcVar5)();
  }
  Swift::Hasher::_combine(_Var4,param_2);
  if (-1 < (long)HVar6.unknown) {
    Swift::Hasher::_combine((__uint64)HVar6.unknown,param_2);
    Swift::Hasher::_finalize(HVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10093e768);
  (*pcVar5)();
}



/* Address: 0x10093e768 | FUN_10093e768 */

void FUN_10093e768(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 _Var3;
  code *pcVar4;
  __uint64 _Var5;
  __uint64 *unaff_x20;
  
  _Var2 = unaff_x20[1];
  _Var1 = unaff_x20[2];
  _Var3 = unaff_x20[3];
  _Var5 = unaff_x20[4];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  if ((long)_Var3 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10093e7d4);
    (*pcVar4)();
  }
  Swift::Hasher::_combine(_Var3,param_2);
  if (-1 < (long)_Var5) {
    Swift::Hasher::_combine(_Var5,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10093e7d8);
  (*pcVar4)();
}



/* Address: 0x10093e7d8 | FUN_10093e7d8 */

void FUN_10093e7d8(__int64 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 _Var2;
  __uint64 _Var3;
  __uint64 _Var4;
  code *pcVar5;
  Hasher HVar6;
  __uint64 *unaff_x20;
  
  _Var1 = *unaff_x20;
  _Var3 = unaff_x20[1];
  _Var2 = unaff_x20[2];
  _Var4 = unaff_x20[3];
  HVar6.unknown = (undefined *)unaff_x20[4];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine(_Var2,param_2);
  if ((long)_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10093e86c);
    (*pcVar5)();
  }
  Swift::Hasher::_combine(_Var4,param_2);
  if (-1 < (long)HVar6.unknown) {
    Swift::Hasher::_combine((__uint64)HVar6.unknown,param_2);
    Swift::Hasher::_finalize(HVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10093e870);
  (*pcVar5)();
}



/* Address: 0x10093e870 | FUN_10093e870 */

uint FUN_10093e870(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = param_2[4];
  FUN_100947460(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x10093e8b8 | FUN_10093e8b8 */

void FUN_10093e8b8(byte param_1)

{
  FUN_10093e8d8();
  DAT_101058208 = param_1 & 1;
  return;
}



/* Address: 0x10093e8d8 | FUN_10093e8d8 */

bool FUN_10093e8d8(void)

{
  bool bVar1;
  bool bVar2;
  UnsafePointer<__int8> cString;
  char *pcVar3;
  undefined1 *puVar4;
  _StringComparisonResult expecting;
  String SVar5;
  String SVar6;
  
  cString.unknown = _getenv("SWIFTNIO_STRICT");
  if (cString.unknown == (undefined *)0x0) {
    return false;
  }
  SVar5 = Swift::String::init(cString);
  SVar6 = Swift::String::lowercased(SVar5);
  puVar4 = SVar6.bridgeObject;
  pcVar3 = SVar6.str;
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  if (pcVar3 != (char *)0x65757274 || puVar4 != &DAT_e400000000000000) {
    expecting.value = SVar6.str._0_1_;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65757274,(_StringGuts)0xe400000000000000,expecting);
    if ((((!bVar1) &&
         ((((pcVar3 != (char *)0x79 || (puVar4 != (undefined1 *)0xe100000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x79,(_StringGuts)0xe100000000000000,expecting), !bVar1)
           ) && ((pcVar3 != (char *)0x736579 || (puVar4 != (undefined1 *)0xe300000000000000)))))) &&
        (bVar1 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)0x736579,(_StringGuts)0xe300000000000000,expecting), !bVar1
        )) && ((pcVar3 != (char *)0x6e6f || (puVar4 != &SUB_e200000000000000)))) {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6e6f,(_StringGuts)0xe200000000000000,expecting);
      bVar1 = true;
      if ((!bVar2) && (pcVar3 != (char *)0x31 || puVar4 != (undefined1 *)0xe100000000000000)) {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x31,(_StringGuts)0xe100000000000000,expecting);
      }
      goto LAB_10093e9d4;
    }
  }
  bVar1 = true;
LAB_10093e9d4:
  _swift_bridgeObjectRelease(puVar4);
  return bVar1;
}



/* Address: 0x10093ea4c | FUN_10093ea4c */

undefined1 FUN_10093ea4c(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x20);
}



/* Address: 0x10093ea7c | FUN_10093ea7c */

void FUN_10093ea7c(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x20,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x20) = param_1;
  return;
}



/* Address: 0x10093eab8 | FUN_10093eab8 */

void FUN_10093eab8(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10093eac0 | FUN_10093eac0 */

void FUN_10093eac0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_28,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x10093eaf4 | FUN_10093eaf4 */

void FUN_10093eaf4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10093eb38 | FUN_10093eb38 */

undefined1  [16] FUN_10093eb38(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x38,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10093eb68 | FUN_10093eb68 */

bool FUN_10093eb68(void)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  long unaff_x20;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  return *ppuVar1 == extraout_x8;
}



/* Address: 0x10093eb98 | FUN_10093eb98 */

void FUN_10093eb98(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_28,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Address: 0x10093ebcc | FUN_10093ebcc */

void FUN_10093ebcc(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  _swift_release(uVar1);
  return;
}



/* Address: 0x10093ec10 | FUN_10093ec10 */

undefined1  [16] FUN_10093ec10(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x88,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x88;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x10093ec40 | FUN_10093ec40 */

void FUN_10093ec40(void)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined *extraout_x8;
  long unaff_x20;
  
  ppuVar2 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar2 == extraout_x8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093ec8c);
    (*pcVar1)();
  }
  ppuVar2 = &PTR___tlv_bootstrap_101048e60;
  (*(code *)PTR___tlv_bootstrap_101048e60)();
  if (*ppuVar2 == (undefined *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093ec90);
  (*pcVar1)();
}



/* Address: 0x10093ec90 | FUN_10093ec90 */

bool FUN_10093ec90(void)

{
  long unaff_x20;
  
  return *(char *)(unaff_x20 + 0x70) != '\x03';
}



/* Address: 0x10093eca0 | FUN_10093eca0 */

bool FUN_10093eca0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(param_1);
  return *ppuVar1 == extraout_x8;
}



/* Address: 0x10093ecd0 | FUN_10093ecd0 */

void FUN_10093ecd0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  FUN_1000fb4c4(unaff_x20 + 0xa0,&DAT_100fecab0,&DAT_100c856e0);
  return;
}



/* Address: 0x10093ed6c | FUN_10093ed6c */

void FUN_10093ed6c(void)

{
  FUN_10093ecd0();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10093ed8c | FUN_10093ed8c */

/* WARNING: Removing unreachable block (ram,0x00010093ee30) */

undefined1 *
FUN_10093ed8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_d8 [64];
  undefined1 local_98;
  undefined1 auStack_90 [64];
  
  uVar2 = *unaff_x20;
  FUN_1000f4a44(uVar2,param_4,&PTR_PTR_100f19fa8);
  FUN_1008f68cc(uVar2,param_4,&PTR_PTR_100f19fa8);
  puVar1 = auStack_90;
  FUN_10093ee9c(puVar1,param_1,uVar2,param_2,param_3,param_4);
  FUN_1009474f8(auStack_90,auStack_d8);
  local_98 = 0;
  FUN_10093efc4(auStack_d8);
  _swift_release(uVar2);
  FUN_1008fa458(auStack_d8);
  FUN_100947534(auStack_90);
  return puVar1;
}



/* Address: 0x10093ee9c | FUN_10093ee9c */

undefined8
FUN_10093ee9c(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  plVar2 = param_1;
  (**(code **)(**(long **)(unaff_x20 + 0x28) + 0x88))();
  lVar1 = *plVar2;
  *plVar2 = lVar1 + 1;
  puVar3 = &DAT_100f19ea0;
  _swift_allocObject(&DAT_100f19ea0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_6;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  puVar4 = &DAT_100f19ec8;
  _swift_allocObject(&DAT_100f19ec8,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_6;
  *(undefined8 *)(puVar4 + 0x18) = param_3;
  param_1[6] = lVar1;
  param_1[7] = param_2;
  *param_1 = (long)FUN_10094756c;
  param_1[1] = (long)puVar3;
  param_1[2] = (long)FUN_1008d4b40;
  param_1[3] = (long)puVar4;
  *(undefined1 *)(param_1 + 5) = 0;
  puVar3 = &DAT_100f19ef0;
  _swift_allocObject(&DAT_100f19ef0,0x20,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(long *)(puVar3 + 0x18) = lVar1;
  uVar5 = param_3;
  FUN_100004520(param_3,FUN_1009475ac,puVar3,param_6);
  _swift_retain_n(param_3,3);
  _swift_retain(param_5);
  _swift_retain();
  return uVar5;
}



/* Address: 0x10093efc4 | FUN_10093efc4 */

void FUN_10093efc4(undefined8 param_1)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined *extraout_x8;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  String SVar11;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined8 uStack_60;
  undefined8 uStack_58;
  char local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar5 == extraout_x8) {
    if (*(char *)(unaff_x20 + 0x70) == '\x03') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f398);
      (*pcVar3)();
    }
    lVar10 = *(long *)(unaff_x20 + 0x60);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3a0);
      (*pcVar3)();
    }
    FUN_1009475b4(param_1,&local_90);
    if (local_50 == '\x01') {
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      uStack_e0 = local_80;
      _swift_beginAccess(unaff_x20 + 0x38,auStack_a8,0x21,0);
      uVar6 = *(ulong *)(unaff_x20 + 0x38);
      lVar7 = *(long *)(uVar6 + 0x18);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3c8);
        (*pcVar3)();
      }
      _swift_isUniquelyReferenced_nonNull_native();
      lVar8 = *(long *)(unaff_x20 + 0x38);
      if ((*(long *)(lVar8 + 0x10) < lVar7 + 1) || ((uVar6 & 1) == 0)) {
        FUN_100943650();
        lVar8 = *(long *)(unaff_x20 + 0x38);
      }
      FUN_100943d40(lVar8 + 0x10,lVar8 + 0x28,&local_f0);
      _swift_endAccess(auStack_a8);
      FUN_1009475e8(&local_f0);
    }
    else {
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      uStack_e0 = local_80;
      uStack_b8 = uStack_58;
      uStack_c0 = uStack_60;
      _swift_beginAccess(unaff_x20 + 0x30,auStack_a8,0x21,0);
      FUN_100944ef0(&local_f0);
      _swift_endAccess(auStack_a8);
      FUN_100947534(&local_f0);
    }
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3a8);
      (*pcVar3)();
    }
  }
  else {
    lVar10 = *(long *)(unaff_x20 + 0x68);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f39c);
      (*pcVar3)();
    }
    if (*(byte *)(unaff_x20 + 0x71) < 2) {
      lVar7 = *(long *)(unaff_x20 + 0x60);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x10));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3ac);
        (*pcVar3)();
      }
      FUN_1009475b4(param_1,&local_90);
      if (local_50 == '\x01') {
        uStack_e8 = uStack_88;
        local_f0 = local_90;
        uStack_e0 = local_80;
        _swift_beginAccess(unaff_x20 + 0x38,auStack_a8,0x21,0);
        uVar6 = *(ulong *)(unaff_x20 + 0x38);
        lVar8 = *(long *)(uVar6 + 0x18);
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3d0);
          (*pcVar3)();
        }
        _swift_isUniquelyReferenced_nonNull_native();
        lVar9 = *(long *)(unaff_x20 + 0x38);
        if ((*(long *)(lVar9 + 0x10) < lVar8 + 1) || ((uVar6 & 1) == 0)) {
          FUN_100943650();
          lVar9 = *(long *)(unaff_x20 + 0x38);
        }
        FUN_100943d40(lVar9 + 0x10,lVar9 + 0x28,&local_f0);
        _swift_endAccess(auStack_a8);
        FUN_1009475e8(&local_f0);
      }
      else {
        uStack_e8 = uStack_88;
        local_f0 = local_90;
        uStack_e0 = local_80;
        uStack_b8 = uStack_58;
        uStack_c0 = uStack_60;
        _swift_beginAccess(unaff_x20 + 0x30,auStack_a8,0x21,0);
        FUN_100944ef0(&local_f0);
        _swift_endAccess(auStack_a8);
        FUN_100947534(&local_f0);
      }
      _swift_beginAccess(unaff_x20 + 0x20,auStack_a8,1,0);
      bVar1 = *(byte *)(unaff_x20 + 0x20);
      if ((bVar1 & 1) == 0) {
        *(undefined1 *)(unaff_x20 + 0x20) = 1;
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x10));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3cc);
        (*pcVar3)();
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x10));
      if (iVar4 != 0) {
LAB_10093f3a0:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3a4);
        (*pcVar3)();
      }
      if ((bVar1 & 1) == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x10);
        lVar7 = *(long *)(lVar10 + 0x30);
        iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x10));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f3d4);
          (*pcVar3)();
        }
        _swift_beginAccess(lVar10 + 0x38,&local_f0,0,0);
        if (*(int *)(lVar10 + 0x38) < 0) {
          if (DAT_100fec608 != -1) {
            _swift_once(&DAT_100fec608,FUN_100902068);
          }
          uVar2 = DAT_1010581e8;
          _swift_willThrow();
          _swift_errorRetain(uVar2);
        }
        else {
          local_90 = 0;
          uStack_88 = 0x10000000000fff6;
          local_80 = 0;
          uStack_78 = 0;
          local_77 = 0;
          FUN_10090cf98(&local_90,lVar10);
          if (unaff_x21 == 0) {
            iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x10));
            if (iVar4 != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f35c);
              (*pcVar3)();
            }
            goto LAB_10093f238;
          }
        }
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x10));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f394);
          (*pcVar3)();
        }
      }
    }
    else {
      if (DAT_100fed908 != -1) {
        _swift_once(&DAT_100fed908,FUN_10093e8b8);
      }
      if ((DAT_101058208 & 1) != 0) {
        SVar11.bridgeObject = (void *)0x2;
        SVar11.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000041,
                   0x8000000100db51b0,0xdb51a0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10093f43c);
        (*pcVar3)();
      }
      FUN_10093e470("ERROR: Cannot schedule tasks on an EventLoop that has already shut down. This will be upgraded to a forced crash in future SwiftNIO versions.\n"
                    ,0x8e);
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x10));
      if (iVar4 != 0) goto LAB_10093f3a0;
    }
  }
LAB_10093f238:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10093f43c | FUN_10093f43c */

void FUN_10093f43c(void)

{
  FUN_10093fca4();
  return;
}



/* Address: 0x10093f448 | FUN_10093f448 */

void FUN_10093f448(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(param_1 + 0x60);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f51c);
    (*pcVar1)();
  }
  _swift_beginAccess(param_1 + 0x30,auStack_88,0x21,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar4 != 0) {
    lVar3 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + 0x50);
    do {
      if (*plVar5 == param_2) {
        FUN_1009442c8(&local_70);
        goto LAB_10093f4d8;
      }
      lVar3 = lVar3 + 1;
      plVar5 = plVar5 + 8;
    } while (lVar4 != lVar3);
  }
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_50 = 0;
  uStack_48 = 0xff;
  local_40 = 0;
  uStack_38 = 0;
LAB_10093f4d8:
  _swift_endAccess(auStack_88);
  FUN_1000fb4c4(&local_70,&DAT_100feda70,&DAT_100c85ac8);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f520);
  (*pcVar1)();
}



/* Address: 0x10093f520 | FUN_10093f520 */

void FUN_10093f520(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  char local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_60;
  undefined1 local_48;
  
  local_60 = 0;
  local_48 = 1;
  local_88 = param_1;
  uStack_80 = param_2;
  if (*(char *)(unaff_x20 + 0x70) == '\x03') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f680);
    (*pcVar1)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x60);
  _swift_retain(param_2);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f684);
    (*pcVar1)();
  }
  FUN_1009475b4(&local_88,&local_d0);
  if (local_90 == '\x01') {
    uStack_128 = uStack_c8;
    local_130 = local_d0;
    uStack_120 = uStack_c0;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_e8,0x21,0);
    uVar3 = *(ulong *)(unaff_x20 + 0x38);
    lVar4 = *(long *)(uVar3 + 0x18);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f68c);
      (*pcVar1)();
    }
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(unaff_x20 + 0x38);
    if ((*(long *)(lVar5 + 0x10) < lVar4 + 1) || ((uVar3 & 1) == 0)) {
      FUN_100943650();
      lVar5 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_100943d40(lVar5 + 0x10,lVar5 + 0x28,&local_130);
    _swift_endAccess(auStack_e8);
    FUN_1009475e8(&local_130);
  }
  else {
    uStack_128 = uStack_c8;
    local_130 = local_d0;
    uStack_120 = uStack_c0;
    uStack_f8 = uStack_98;
    uStack_100 = uStack_a0;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_e8,0x21,0);
    FUN_100944ef0(&local_130);
    _swift_endAccess(auStack_e8);
    FUN_100947534(&local_130);
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 == 0) {
    FUN_1008fa458(&local_88);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f688);
  (*pcVar1)();
}



/* Address: 0x10093f68c | FUN_10093f68c */

void FUN_10093f68c(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_58;
  undefined8 uStack_50;
  char local_48;
  
  if (*(char *)(unaff_x20 + 0x70) == '\x03') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f7e8);
    (*pcVar1)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x60);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f7ec);
    (*pcVar1)();
  }
  FUN_1009475b4(param_1,&local_88);
  if (local_48 == '\x01') {
    uStack_d8 = uStack_80;
    local_e0 = local_88;
    uStack_d0 = local_78;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_a0,0x21,0);
    uVar3 = *(ulong *)(unaff_x20 + 0x38);
    lVar4 = *(long *)(uVar3 + 0x18);
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f7f4);
      (*pcVar1)();
    }
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *(long *)(unaff_x20 + 0x38);
    if ((*(long *)(lVar5 + 0x10) < lVar4 + 1) || ((uVar3 & 1) == 0)) {
      FUN_100943650();
      lVar5 = *(long *)(unaff_x20 + 0x38);
    }
    FUN_100943d40(lVar5 + 0x10,lVar5 + 0x28,&local_e0);
    _swift_endAccess(auStack_a0);
    FUN_1009475e8(&local_e0);
  }
  else {
    uStack_d8 = uStack_80;
    local_e0 = local_88;
    uStack_d0 = local_78;
    uStack_a8 = uStack_50;
    uStack_b0 = local_58;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_a0,0x21,0);
    FUN_100944ef0(&local_e0);
    _swift_endAccess(auStack_a0);
    FUN_100947534(&local_e0);
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f7f0);
  (*pcVar1)();
}



/* Address: 0x10093f7f4 | FUN_10093f7f4 */

undefined8 FUN_10093f7f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  long lVar8;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  char local_a0;
  code *local_98;
  undefined *puStack_90;
  undefined1 local_70;
  undefined1 local_58;
  
  uVar3 = *unaff_x20;
  FUN_1008f68cc(uVar3,param_3,&PTR_PTR_100f19fa8);
  puVar4 = &DAT_100f19f18;
  _swift_allocObject(&DAT_100f19f18,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = param_1;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  local_98 = thunk_FUN_10094756c;
  local_70 = 0;
  local_58 = 1;
  puStack_90 = puVar4;
  if (*(char *)(unaff_x20 + 0xe) == '\x03') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f9c4);
    (*pcVar1)();
  }
  lVar8 = unaff_x20[0xc];
  _swift_retain(uVar3);
  _swift_retain(param_2);
  _swift_retain(puVar4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f9c8);
    (*pcVar1)();
  }
  FUN_1009475b4(&local_98,&local_e0);
  if (local_a0 == '\x01') {
    uStack_138 = uStack_d8;
    local_140 = local_e0;
    uStack_130 = uStack_d0;
    _swift_beginAccess(unaff_x20 + 7,auStack_f8,0x21,0);
    uVar5 = unaff_x20[7];
    lVar6 = *(long *)(uVar5 + 0x18);
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f9d0);
      (*pcVar1)();
    }
    _swift_isUniquelyReferenced_nonNull_native();
    lVar7 = unaff_x20[7];
    if ((*(long *)(lVar7 + 0x10) < lVar6 + 1) || ((uVar5 & 1) == 0)) {
      FUN_100943650();
      lVar7 = unaff_x20[7];
    }
    FUN_100943d40(lVar7 + 0x10,lVar7 + 0x28,&local_140);
    _swift_endAccess(auStack_f8);
    FUN_1009475e8(&local_140);
  }
  else {
    uStack_138 = uStack_d8;
    local_140 = local_e0;
    uStack_130 = uStack_d0;
    uStack_108 = uStack_a8;
    uStack_110 = uStack_b0;
    _swift_beginAccess(unaff_x20 + 6,auStack_f8,0x21,0);
    FUN_100944ef0(&local_140);
    _swift_endAccess(auStack_f8);
    FUN_100947534(&local_140);
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar2 == 0) {
    _swift_release(puVar4);
    FUN_1008fa458(&local_98);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093f9cc);
  (*pcVar1)();
}



/* Address: 0x10093f9d0 | FUN_10093f9d0 */

/* WARNING: Removing unreachable block (ram,0x00010093fa34) */

void FUN_10093f9d0(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  puVar1 = auStack_60 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_retain(param_1,param_4);
  (*param_2)(puVar1);
  FUN_100643020(puVar1,param_1,param_4);
  _swift_release(param_1);
  (**(code **)(lVar2 + 8))(puVar1,param_4);
  return;
}



/* Address: 0x10093fa9c | FUN_10093fa9c */

undefined1 *
FUN_10093fa9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  char local_f0;
  undefined1 auStack_e8 [64];
  undefined1 local_a8;
  undefined1 auStack_a0 [64];
  
  uVar7 = *unaff_x20;
  FUN_1000f4a44(uVar7,param_4,&PTR_PTR_100f19fa8);
  FUN_1008f68cc(uVar7,param_4,&PTR_PTR_100f19fa8);
  puVar3 = auStack_a0;
  FUN_10093ee9c(puVar3,param_1,uVar7,param_2,param_3,param_4);
  FUN_1009474f8(auStack_a0,auStack_e8);
  local_a8 = 0;
  if (*(char *)(unaff_x20 + 0xe) == '\x03') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093fc8c);
    (*pcVar1)();
  }
  lVar8 = unaff_x20[0xc];
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10093fc90);
    (*pcVar1)();
  }
  FUN_1009475b4(auStack_e8,&local_130);
  if (local_f0 == '\x01') {
    uStack_188 = uStack_128;
    local_190 = local_130;
    uStack_180 = uStack_120;
    _swift_beginAccess(unaff_x20 + 7,auStack_148,0x21,0);
    uVar4 = unaff_x20[7];
    lVar5 = *(long *)(uVar4 + 0x18);
    if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093fc98);
      (*pcVar1)();
    }
    _swift_isUniquelyReferenced_nonNull_native();
    lVar6 = unaff_x20[7];
    if ((*(long *)(lVar6 + 0x10) < lVar5 + 1) || ((uVar4 & 1) == 0)) {
      FUN_100943650();
      lVar6 = unaff_x20[7];
    }
    FUN_100943d40(lVar6 + 0x10,lVar6 + 0x28,&local_190);
    _swift_endAccess(auStack_148);
    FUN_1009475e8(&local_190);
  }
  else {
    uStack_188 = uStack_128;
    local_190 = local_130;
    uStack_180 = uStack_120;
    uStack_158 = uStack_f8;
    uStack_160 = uStack_100;
    _swift_beginAccess(unaff_x20 + 6,auStack_148,0x21,0);
    FUN_100944ef0(&local_190);
    _swift_endAccess(auStack_148);
    FUN_100947534(&local_190);
  }
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar2 == 0) {
    _swift_release(uVar7);
    FUN_1008fa458(auStack_e8);
    FUN_100947534(auStack_a0);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10093fc94);
  (*pcVar1)();
}



/* Address: 0x10093fc98 | FUN_10093fc98 */

void FUN_10093fc98(void)

{
  FUN_10093fca4();
  return;
}



/* Address: 0x10093fca4 | FUN_10093fca4 */

void FUN_10093fca4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  ulong uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long lVar5;
  long lVar6;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(_Var4,param_1)) {
    uVar1 = _Var4 + param_1 & ((long)(_Var4 + param_1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  (*param_5)(uVar1,param_2,param_3,param_4);
  return;
}



/* Address: 0x10093fd6c | FUN_10093fd6c */

/* WARNING: Removing unreachable block (ram,0x00010093fda4) */

void FUN_10093fd6c(undefined8 param_1,undefined8 param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_40;
  undefined1 local_28;
  
  local_40 = 0;
  local_28 = 1;
  local_68 = param_1;
  uStack_60 = param_2;
  _swift_retain(param_2);
  FUN_10093efc4(&local_68);
  FUN_1008fa458(&local_68);
  return;
}



/* Address: 0x10093fdc4 | FUN_10093fdc4 */

/* WARNING: Removing unreachable block (ram,0x00010093fe10) */

void FUN_10093fdc4(ExecutorJob param_1)

{
  undefined1 auStack_88 [40];
  undefined1 local_60;
  undefined1 local_48;
  undefined *local_40 [3];
  undefined *local_28;
  
  local_40[0] = (undefined *)Swift::UnownedJob::init(param_1);
  local_28 = PTR___type_metadata_for_Swift_UnownedJob_100eaebf8;
  FUN_100947614(local_40,auStack_88);
  local_60 = 1;
  local_48 = 1;
  FUN_10093efc4(auStack_88);
  FUN_1008fa458(auStack_88);
  FUN_100947650(local_40);
  return;
}



/* Address: 0x10093fe38 | FUN_10093fe38 */

void FUN_10093fe38(void)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  long unaff_x20;
  long lVar4;
  long unaff_x21;
  long lVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(lVar4 + 0x30);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093ff30);
    (*pcVar2)();
  }
  _swift_beginAccess(lVar4 + 0x38,auStack_50,0,0);
  if (*(int *)(lVar4 + 0x38) < 0) {
    if (DAT_100fec608 != -1) {
      _swift_once(&DAT_100fec608,FUN_100902068);
    }
    uVar1 = DAT_1010581e8;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    local_70 = 0;
    uStack_68 = 0x10000000000fff6;
    local_60 = 0;
    uStack_58 = 0;
    FUN_10090cf98(&local_70,lVar4);
    if (unaff_x21 == 0) {
      iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x10));
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10093fec8);
        (*pcVar2)();
      }
      goto LAB_10093fefc;
    }
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10093ff34);
    (*pcVar2)();
  }
LAB_10093fefc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10093ff50 | FUN_10093ff50 */

undefined1  [16] FUN_10093ff50(ulong param_1,char param_2)

{
  code *pcVar1;
  DispatchTime DVar2;
  ulong uVar3;
  DispatchTime DVar4;
  __uint64 _Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  if (param_2 == '\x01') {
    uVar3 = 0;
    uVar6 = 1;
  }
  else {
    DVar4 = Dispatch::DispatchTime::now(DVar2);
    _Var5 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar4);
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffc0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10094000c);
      (*pcVar1)();
    }
    uVar6 = _Var5;
    if (0x7ffffffffffffffe < _Var5) {
      uVar6 = 0x7fffffffffffffff;
    }
    uVar3 = 0;
    if (uVar6 <= param_1) {
      uVar3 = param_1 - uVar6;
    }
    uVar6 = (ulong)(param_1 <= _Var5);
    if (uVar3 < 2) {
      uVar3 = 1;
    }
  }
  auVar9._8_8_ = uVar6;
  auVar9._0_8_ = uVar3;
  return auVar9;
}



/* Address: 0x10094000c | FUN_10094000c */

undefined1  [16] FUN_10094000c(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  DispatchTime DVar5;
  DispatchTime DVar6;
  __uint64 _Var7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *unaff_x20;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auVar17 [16];
  String SVar18;
  undefined8 local_1f0;
  long local_1e8;
  long local_1e0;
  undefined8 local_1d8;
  long local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined1 uStack_1a8;
  int7 iStack_1a7;
  undefined8 local_198;
  undefined1 auStack_190 [32];
  code *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long lStack_150;
  code *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char local_118;
  undefined1 auStack_110 [24];
  long local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined1 uStack_d0;
  int7 iStack_cf;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  __uint64 local_88;
  long local_80;
  
  local_1d8 = *unaff_x20;
  local_1f0 = param_1;
  _swift_beginAccess(unaff_x20 + 0x14,auStack_c8,0,0);
  FUN_1000f8cac(unaff_x20 + 0x14,&local_f8,&DAT_100fecab0,&DAT_100c856e0);
  if (CONCAT71(uStack_df,local_e0) == 0) {
    local_80 = 0;
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
  }
  else {
    uStack_1c8 = uStack_f0;
    local_1d0 = local_f8;
    uStack_1c0 = uStack_e8;
    uStack_1a8 = uStack_d0;
    iStack_1a7 = iStack_cf;
    DVar5 = Dispatch::DispatchTime::typeMetadataAccessor();
    lVar14 = *(long *)(DVar5.unknown + -8);
    lVar12 = *(long *)(lVar14 + 0x40);
    DVar6 = Dispatch::DispatchTime::now(DVar5);
    _Var7 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar6);
    (**(code **)(lVar14 + 8))((long)&local_1f0 - (lVar12 + 0xfU & 0xfffffffffffffff0),DVar5.unknown)
    ;
    if (0x7ffffffffffffffe < _Var7) {
      _Var7 = 0x7fffffffffffffff;
    }
    FUN_100076688(&local_1d0,&local_b0);
    local_88 = _Var7;
    FUN_100949cc4(&local_1d0);
    if (iStack_1a7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100940478);
      (*pcVar2)();
    }
    local_80 = _Var7 - CONCAT71(iStack_1a7,uStack_1a8);
  }
  lVar12 = unaff_x20[0xc];
  _swift_beginAccess(unaff_x20 + 4,auStack_110,1,0);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
  if (iVar4 == 0) {
    lVar14 = 0;
    local_1e8 = lVar12;
    do {
      _swift_beginAccess(unaff_x20 + 7,&local_f8,0x21,0);
      _swift_beginAccess(unaff_x20 + 6,&local_1d0,0x21,0);
      _swift_beginAccess(unaff_x20 + 9,&local_140,0x21,0);
      puVar9 = unaff_x20 + 7;
      puVar11 = unaff_x20 + 6;
      FUN_1009486fc(puVar9,puVar11,unaff_x20 + 9,0x1000);
      _swift_endAccess(&local_140);
      _swift_endAccess(&local_1d0);
      _swift_endAccess(&local_f8);
      if (*(long *)(unaff_x20[9] + 0x10) == 0) {
        *(undefined1 *)(unaff_x20 + 4) = 0;
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar12 + 0x10));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100940474);
        (*pcVar2)();
      }
      lVar16 = unaff_x20[9];
      uVar15 = *(ulong *)(lVar16 + 0x10);
      if (uVar15 == 0) {
        local_f8 = lVar14;
        FUN_1009404cc(&local_b0,local_1f0,&local_f8,unaff_x20);
        FUN_1000fb4c4(&local_b0,&DAT_100feda80,&DAT_100c85ae8);
        auVar17._8_8_ = puVar11;
        auVar17._0_8_ = puVar9;
        return auVar17;
      }
      local_1e0 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar14,uVar15)) {
        local_1e0 = lVar14 + uVar15;
      }
      lVar12 = lVar16 + 0x20;
      _swift_retain(lVar16);
      uVar13 = 0;
      do {
        if (*(ulong *)(lVar16 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10094046c);
          (*pcVar2)();
        }
        lVar14 = lVar12;
        FUN_100949c84(lVar12,&local_f8);
        uStack_1c8 = uStack_f0;
        local_1d0 = local_f8;
        uStack_1c0 = uStack_e8;
        __objc_autoreleasePoolPush();
        FUN_100949c84(&local_1d0,&local_140);
        uVar8 = uStack_138;
        if (local_118 == '\0') {
          (*local_140)();
          _swift_release(uVar8);
        }
        else if (local_118 == '\x01') {
          uStack_168 = uStack_138;
          local_170 = local_140;
          local_158 = uStack_128;
          uStack_160 = uStack_130;
          bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xe,0,0);
          if ((bVar3 & 1) == 0) {
            SVar18.bridgeObject = (void *)0x2;
            SVar18.str = (char *)0xb;
            Swift::_assertionFailure
                      ((StaticString)0x100d8deb0,SVar18,(StaticString)0xd000000000000032,
                       0x8000000100db5380,0xdb51a0);
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009404cc);
            (*pcVar2)();
          }
          FUN_10000cbfc(&local_170,auStack_190);
          puVar10 = &DAT_100fec4c0;
          FUN_1000f7830(&DAT_100fec4c0,&DAT_100c83b80);
          _swift_dynamicCast(&local_198,auStack_190,puVar10,
                             PTR___type_metadata_for_Swift_UnownedJob_100eaebf8,7);
          uVar8 = local_198;
          puVar10 = &DAT_100fed920;
          FUN_1003b6598(&DAT_100fed920);
          _swift_job_run(uVar8,unaff_x20,(ulong)puVar10 | 1);
          FUN_100947650(&local_170);
        }
        else {
          FUN_100076508(&local_140,&local_170);
          lVar1 = lStack_150;
          uVar8 = local_158;
          FUN_100004640(&local_170,local_158);
          (**(code **)(lVar1 + 8))(unaff_x20,local_1d8,&PTR_PTR_100f19fa8,uVar8,lVar1);
          FUN_100004594(&local_170);
        }
        uVar13 = uVar13 + 1;
        __objc_autoreleasePoolPop(lVar14);
        FUN_1009475e8(&local_1d0);
        lVar12 = lVar12 + 0x30;
      } while (uVar15 != uVar13);
      _swift_release(lVar16);
      __objc_autoreleasePoolPush();
      _swift_beginAccess(unaff_x20 + 9,&local_f8,0x21,0);
      iVar4 = (int)unaff_x20[9];
      _swift_isUniquelyReferenced_nonNull_native();
      lVar12 = local_1e8;
      lVar14 = unaff_x20[9];
      if (iVar4 == 0) {
        uVar8 = 0;
        FUN_100900a5c(0,*(ulong *)(lVar14 + 0x18) >> 1);
        unaff_x20[9] = uVar8;
        _swift_release(lVar14);
      }
      else {
        FUN_100948be4(0,*(undefined8 *)(lVar14 + 0x10),FUN_10090d9f4,FUN_100907e14);
      }
      lVar14 = local_1e0;
      _swift_endAccess(&local_f8);
      __objc_autoreleasePoolPop(lVar16);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar12 + 0x10));
    } while (iVar4 == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100940470);
  (*pcVar2)();
}



/* Address: 0x1009404cc | FUN_1009404cc */

void FUN_1009404cc(DispatchTime param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  __uint64 _Var1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_e0 [24];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  long lStack_b0;
  __uint64 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  __uint64 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  FUN_1000f8cac(param_1.unknown,&local_c8,&DAT_100feda80,&DAT_100c85ae8);
  if (lStack_b0 == 0) {
    puVar5 = &DAT_100feda80;
    puVar6 = &DAT_100c85ae8;
    lVar7 = -0xb8;
  }
  else {
    uStack_88 = uStack_c0;
    local_90 = local_c8;
    local_78 = lStack_b0;
    uStack_80 = local_b8;
    uStack_68 = uStack_a0;
    local_70 = local_a8;
    local_60 = local_98;
    DVar3 = Dispatch::DispatchTime::now(param_1);
    _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
    (**(code **)(lVar8 + 8))(auStack_e0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
    _Var1 = local_70;
    lVar7 = local_78;
    if (0x7ffffffffffffffe < _Var4) {
      _Var4 = 0x7fffffffffffffff;
    }
    uStack_c0 = *param_3;
    auVar9._8_8_ = local_60;
    auVar9._0_8_ = uStack_68;
    auVar9 = NEON_ext(auVar9,auVar9,8,1);
    lStack_b0 = auVar9._8_8_;
    local_b8 = auVar9._0_8_;
    local_c8 = param_2;
    local_a8 = _Var4;
    FUN_100004640(&local_90,local_78);
    (**(code **)(_Var1 + 8))(&local_c8,lVar7,_Var1);
    _swift_beginAccess(param_4 + 0xa0,auStack_e0,1,0);
    if (*(long *)(param_4 + 0xb8) != 0) {
      *(__uint64 *)(param_4 + 200) = _Var4;
    }
    puVar5 = &DAT_100feda88;
    puVar6 = &DAT_100c85af0;
    lVar7 = -0x80;
  }
  FUN_1000fb4c4(&stack0xfffffffffffffff0 + lVar7,puVar5,puVar6);
  return;
}



/* Address: 0x100940638 | FUN_100940638 */

void FUN_100940638(ulong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  DispatchTime DVar4;
  ulong uVar5;
  DispatchTime DVar6;
  __uint64 _Var7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  if (param_2 == '\x01') {
    uVar5 = 0;
    bVar3 = true;
  }
  else {
    DVar6 = Dispatch::DispatchTime::now(DVar4);
    _Var7 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar6);
    (**(code **)(lVar9 + 8))(auStack_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0),DVar4.unknown);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100940744);
      (*pcVar2)();
    }
    uVar1 = _Var7;
    if (0x7ffffffffffffffe < _Var7) {
      uVar1 = 0x7fffffffffffffff;
    }
    uVar5 = 0;
    if (uVar1 <= param_1) {
      uVar5 = param_1 - uVar1;
    }
    bVar3 = param_1 <= _Var7;
    if (uVar5 < 2) {
      uVar5 = 1;
    }
  }
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_1009422d0(uVar5,bVar3,FUN_100947684);
  return;
}



/* Address: 0x100940744 | FUN_100940744 */

void FUN_100940744(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(param_1 + 0x60);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009407ac);
    (*pcVar1)();
  }
  _swift_beginAccess(param_1 + 0x20,auStack_48,1,0);
  *(undefined1 *)(param_1 + 0x20) = 1;
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009407b0);
  (*pcVar1)();
}



/* Address: 0x1009407b0 | FUN_1009407b0 */

void FUN_1009407b0(ulong *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  String SVar19;
  undefined8 local_1e8;
  undefined1 auStack_1e0 [32];
  code *local_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined8 local_1a8;
  long lStack_1a0;
  code *local_198;
  undefined8 uStack_190;
  code *local_188;
  undefined8 uStack_180;
  char local_170;
  ulong local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 local_130;
  undefined7 uStack_12f;
  uint uStack_128;
  undefined4 uStack_124;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 uStack_e8;
  undefined7 uStack_e7;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  ulong local_80;
  undefined *local_78;
  
  uVar10 = *param_1;
  local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar7 = param_1;
  FUN_1006883ac();
  uVar15 = *puVar7;
  uVar11 = param_1[0xc];
  local_80 = uVar15;
  _swift_retain(uVar15);
  _swift_beginAccess(param_1 + 4,auStack_98,1,0);
  _swift_beginAccess(param_1 + 6,auStack_b0,0,0);
  _swift_beginAccess(param_1 + 7,auStack_c8,1,0);
  uVar12 = 0;
  do {
    iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(uVar11 + 0x10));
    puVar17 = local_78;
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100940d5c);
      (*pcVar3)();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    uVar13 = *(ulong *)(param_1[6] + 0x10);
    puVar8 = local_78;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)puVar8 == 0) || (*(ulong *)(puVar17 + 0x18) >> 1 < uVar13)) {
      FUN_10090da10();
      puVar17 = local_78;
    }
    while( true ) {
      _swift_beginAccess(param_1 + 6,&local_198,0x21,0);
      FUN_100944484(&local_150,0);
      _swift_endAccess(&local_198);
      if ((~uStack_128 & 0xff) == 0) break;
      uStack_108 = uStack_148;
      local_110 = local_150;
      uStack_f8 = uStack_138;
      uStack_f7 = uStack_137;
      uStack_100 = uStack_140;
      uStack_e8 = (undefined1)uStack_128;
      uStack_e7 = (undefined7)(CONCAT44(uStack_124,uStack_128) >> 8);
      local_f0 = local_130;
      uStack_ef = uStack_12f;
      uStack_d8 = uStack_118;
      uStack_e0 = uStack_120;
      FUN_1009474f8(&local_110,&local_150);
      uVar13 = *(ulong *)(puVar17 + 0x10);
      local_78 = puVar17;
      if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar13) {
        FUN_10090da10(1 < *(ulong *)(puVar17 + 0x18),uVar13 + 1,1);
      }
      puVar17 = local_78;
      FUN_100947534(&local_110);
      *(ulong *)(puVar17 + 0x10) = uVar13 + 1;
      *(ulong *)(puVar17 + uVar13 * 0x40 + 0x48) = CONCAT44(uStack_124,uStack_128);
      *(ulong *)(puVar17 + uVar13 * 0x40 + 0x40) = CONCAT71(uStack_12f,local_130);
      *(undefined8 *)(puVar17 + uVar13 * 0x40 + 0x58) = uStack_118;
      *(undefined8 *)(puVar17 + uVar13 * 0x40 + 0x50) = uStack_120;
      *(undefined8 *)(puVar17 + uVar13 * 0x40 + 0x28) = uStack_148;
      *(undefined8 *)(puVar17 + uVar13 * 0x40 + 0x20) = local_150;
      *(ulong *)(puVar17 + uVar13 * 0x40 + 0x38) = CONCAT71(uStack_137,uStack_138);
      *(undefined8 *)(puVar17 + uVar13 * 0x40 + 0x30) = uStack_140;
    }
    FUN_1000fb4c4(&local_150,&DAT_100feda70,&DAT_100c85ac8);
    uVar13 = param_1[7];
    param_1[7] = uVar15;
    local_80 = uVar13;
    iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(uVar11 + 0x10));
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100940d60);
      (*pcVar3)();
    }
    lVar14 = *(long *)(uVar13 + 0x20);
    lVar9 = *(long *)(uVar13 + 0x18) + lVar14;
    lVar16 = *(long *)(uVar13 + 0x10);
    if (lVar9 <= *(long *)(uVar13 + 0x10)) {
      lVar16 = lVar9;
    }
    uVar15 = uVar13;
    local_168 = uVar13;
    local_160 = lVar14;
    local_158 = lVar16;
    _swift_retain();
    uVar18 = uVar13;
    while ((lVar9 = lVar14, lVar14 != lVar16 ||
           (thunk_FUN_1007b8868(), lVar9 = local_160, uVar18 = local_168, (uVar15 & 1) != 0))) {
      lVar14 = lVar9 + 1;
      lVar9 = uVar18 + lVar9 * 0x30 + 0x28;
      local_160 = lVar14;
      FUN_100949c84(lVar9,&local_110);
      uStack_148 = uStack_108;
      local_150 = local_110;
      uStack_138 = uStack_f8;
      uStack_140 = uStack_100;
      uStack_12f = uStack_ef;
      uStack_128 = CONCAT31(uStack_128._1_3_,uStack_e8);
      uStack_137 = uStack_f7;
      local_130 = local_f0;
      __objc_autoreleasePoolPush();
      FUN_100949c84(&local_150,&local_198);
      uVar2 = uStack_190;
      if (local_170 == '\0') {
        (*local_198)();
        _swift_release(uVar2);
      }
      else if (local_170 == '\x01') {
        uStack_1b8 = uStack_190;
        local_1c0 = local_198;
        local_1a8 = uStack_180;
        pcStack_1b0 = local_188;
        bVar5 = Swift::_stdlib_isOSVersionAtLeast(0xe,0,0);
        if ((bVar5 & 1) == 0) {
          SVar19.bridgeObject = (void *)0x2;
          SVar19.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar19,(StaticString)0xd000000000000032,
                     0x8000000100db5380,0xdb51a0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100940db0);
          (*pcVar3)();
        }
        FUN_10000cbfc(&local_1c0,auStack_1e0);
        puVar8 = &DAT_100fec4c0;
        FUN_1000f7830(&DAT_100fec4c0,&DAT_100c83b80);
        _swift_dynamicCast(&local_1e8,auStack_1e0,puVar8,
                           PTR___type_metadata_for_Swift_UnownedJob_100eaebf8,7);
        uVar2 = local_1e8;
        puVar8 = &DAT_100fed920;
        FUN_1003b6598(&DAT_100fed920);
        _swift_job_run(uVar2,param_1,(ulong)puVar8 | 1);
        FUN_100947650(&local_1c0);
      }
      else {
        FUN_100076508(&local_198,&local_1c0);
        lVar16 = lStack_1a0;
        uVar2 = local_1a8;
        FUN_100004640(&local_1c0,local_1a8);
        (**(code **)(lVar16 + 8))(param_1,uVar10,&PTR_PTR_100f19fa8,uVar2,lVar16);
        FUN_100004594(&local_1c0);
      }
      __objc_autoreleasePoolPop(lVar9);
      uVar15 = 0;
      FUN_1009475e8();
      lVar16 = local_158;
    }
    _swift_release(local_168);
    uVar15 = *(ulong *)(puVar17 + 0x10);
    if (uVar15 != 0) {
      puVar8 = puVar17 + 0x20;
      _swift_retain(puVar17);
      uVar18 = 0;
      do {
        if (*(ulong *)(puVar17 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100940d58);
          (*pcVar3)();
        }
        FUN_1009474f8(puVar8,&local_110);
        uStack_148 = uStack_108;
        local_150 = local_110;
        uStack_138 = uStack_f8;
        uStack_137 = uStack_f7;
        uStack_140 = uStack_100;
        uStack_128 = (uint)CONCAT71(uStack_e7,uStack_e8);
        uStack_124 = (undefined4)((uint7)uStack_e7 >> 0x18);
        local_130 = local_f0;
        uStack_12f = uStack_ef;
        uStack_118 = uStack_d8;
        uStack_120 = uStack_e0;
        FUN_10090de94(&local_150,&local_198);
        uVar2 = uStack_180;
        pcVar3 = local_188;
        if (local_170 == '\x01') {
          FUN_100076508(&local_198,&local_1c0);
          lVar14 = lStack_1a0;
          uVar2 = local_1a8;
          FUN_100004640(&local_1c0,local_1a8);
          (**(code **)(lVar14 + 0x10))(param_1,uVar10,&PTR_PTR_100f19fa8,uVar2,lVar14);
          FUN_100947534(&local_150);
          FUN_100004594(&local_1c0);
        }
        else {
          _swift_release(uStack_190);
          if (DAT_100fec608 != -1) {
            _swift_once(&DAT_100fec608,FUN_100902068);
          }
          (*pcVar3)(DAT_1010581e8);
          _swift_release(uVar2);
          FUN_100947534(&local_150);
        }
        uVar18 = uVar18 + 1;
        puVar8 = puVar8 + 0x40;
      } while (uVar15 != uVar18);
      _swift_release(puVar17);
    }
    uVar15 = local_80;
    uVar18 = local_80;
    if (*(long *)(uVar13 + 0x18) == 0) {
      bVar4 = *(long *)(puVar17 + 0x10) == 0;
      _swift_isUniquelyReferenced_nonNull_native();
    }
    else {
      _swift_isUniquelyReferenced_nonNull_native();
      bVar4 = false;
    }
    if ((uVar18 & 1) == 0) {
      FUN_1009145ec();
      uVar15 = local_80;
    }
    FUN_1009450c0(uVar15 + 0x10,uVar15 + 0x28);
    puVar17 = local_78;
    puVar8 = local_78;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((int)puVar8 == 0) {
      puVar8 = (undefined *)0x0;
      FUN_100900ae8(0,*(ulong *)(puVar17 + 0x18) >> 1);
      _swift_release(puVar17);
      local_78 = puVar8;
    }
    else {
      FUN_100948be4(0,*(undefined8 *)(puVar17 + 0x10),FUN_10090da10,FUN_100907ee4);
    }
    bVar1 = bVar4;
    if (0x3e6 < uVar12) {
      bVar1 = true;
    }
    uVar12 = uVar12 + 1;
  } while (!bVar1);
  if (!bVar4) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100940d64);
    (*pcVar3)();
  }
  *(undefined1 *)(param_1 + 0xe) = 3;
  _swift_release(uVar15);
  _swift_release(local_78);
  return;
}



/* Address: 0x100940db0 | FUN_100940db0 */

void FUN_100940db0(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)param_2 >> 6 & 3;
  if (uVar2 < 2) {
    if (uVar2 == 0) {
      _swift_retain(param_1,param_2);
      FUN_100948cb4(param_3,param_1);
    }
    else {
      _swift_retain(param_1,param_2);
      FUN_100949058(param_3,param_1);
    }
  }
  else if (uVar2 == 2) {
    _swift_retain(param_1,param_2);
    FUN_100949404(param_3,param_1);
  }
  else {
    uVar2 = 2;
    if ((param_2 & 0x3f) != 0) {
      uVar2 = 0x10;
    }
    uVar1 = (uint)param_3;
    if ((param_3 & 0x21) != 0) {
      uVar1 = uVar2 | (uint)param_3 & 0xffffffde;
    }
    _swift_retain(param_1,param_2);
    FUN_100949788(uVar1,param_1);
  }
  _swift_release(param_1,param_2);
  return;
}



/* Address: 0x100940e88 | FUN_100940e88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100940e88(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  undefined8 local_a8;
  char local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x88,auStack_78,1,0);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = 0;
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 0x70) = 1;
  lVar9 = *(long *)(param_1 + 0x68);
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(lVar9 + 0x10));
  if (iVar1 != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100941164);
    (*pcVar10)();
  }
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar9 + 0x10));
  if (iVar1 == 0) {
    lVar3 = param_1;
    FUN_1009453bc(param_1,*(undefined8 *)(param_1 + 0x10));
    puVar4 = &DAT_100f1a598;
    _swift_allocObject(&DAT_100f1a598,0x30,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    *(undefined8 *)(puVar4 + 0x20) = param_3;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    puVar5 = &DAT_100f1a5c0;
    _swift_allocObject(&DAT_100f1a5c0,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_1009485c4;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(long *)(puVar5 + 0x20) = lVar3;
    uVar6 = *(ulong *)(lVar3 + 0x20);
    lVar9 = *(long *)(lVar3 + 0x28);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_1,2);
    _swift_retain_n(param_4,2);
    _swift_retain_n(puVar4,2);
    _swift_retain_n(lVar3,2);
    uVar7 = uVar6;
    (*pcVar10)(uVar6,lVar9);
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100f1a5e8;
      _swift_allocObject(&DAT_100f1a5e8,0x28,7);
      *(long *)(puVar8 + 0x10) = lVar3;
      *(code **)(puVar8 + 0x18) = FUN_1008fa3dc;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      pcVar10 = *(code **)(lVar9 + 0x18);
      _swift_retain(lVar3);
      _swift_retain(puVar5);
      (*pcVar10)(FUN_1008db360,puVar8,uVar6,lVar9);
      _swift_release(param_1);
      _swift_release(puVar8);
      _swift_release(lVar3);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
    }
    else {
      _swift_beginAccess(lVar3 + 0x10,auStack_90,0,0);
      if (*(char *)(lVar3 + 0x18) == -1) {
        _swift_beginAccess(lVar3 + 0x30,&local_a8,0x21,0);
        FUN_10064967c(FUN_1008fa3dc,puVar5);
        _swift_endAccess(&local_a8);
      }
      else {
        local_a8 = *(undefined8 *)(lVar3 + 0x10);
        local_a0 = *(char *)(lVar3 + 0x18);
        FUN_100308524();
        FUN_100941168(&local_a8,param_1,param_2,param_3,param_4);
        FUN_1002ec258(local_a8,local_a0);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(param_1);
      _swift_release(lVar3);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(lVar3);
    _swift_release(param_4);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100941168);
  (*pcVar10)();
}



/* Address: 0x100941168 | FUN_100941168 */

/* WARNING: Removing unreachable block (ram,0x000100941228) */

void FUN_100941168(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  DispatchWorkItemFlags DVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  DispatchWorkItemFlags qos;
  DispatchQoS DVar11;
  undefined *local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined *local_b8 [2];
  code *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  undefined1 local_68;
  
  local_c0 = param_3;
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_c8 = *(long *)(DVar4.unknown + -8);
  lVar9 = (long)&local_d0 - (*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_d0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(local_d0 + -8);
  qos.unknown = (undefined *)(lVar9 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar11.unknown = (undefined *)*param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_2 + 0x70) = 2;
  local_a8 = FUN_100004520;
  local_a0 = 0;
  local_80 = (undefined *)((ulong)local_80 & 0xffffffffffffff00);
  local_68 = 1;
  FUN_10093efc4(&local_a8);
  FUN_1008fa458(&local_a8);
  lVar8 = *(long *)(param_2 + 0x68);
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009413b8);
    (*pcVar2)();
  }
  *(undefined1 *)(param_2 + 0x71) = 2;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar8 + 0x10));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009413bc);
    (*pcVar2)();
  }
  puVar5 = &DAT_100f1a610;
  _swift_allocObject(&DAT_100f1a610,0x29,7);
  *(undefined8 *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  *(undefined **)(puVar5 + 0x20) = DVar11.unknown;
  puVar5[0x28] = uVar1;
  local_88 = FUN_100948600;
  local_a8 = (code *)PTR___NSConcreteStackBlock_100ea82a0;
  local_a0 = 0x42000000;
  local_98 = FUN_100030410;
  puStack_90 = &DAT_100f1a628;
  local_80 = puVar5;
  aBlock = __Block_copy(&local_a8);
  _swift_retain(param_5);
  FUN_100308524(DVar11.unknown,uVar1);
  Dispatch::DispatchQoS::get_unspecified(DVar11);
  local_b8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fec6d8;
  FUN_1003b6598(&DAT_100fec6d8,0xff,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar6 = &DAT_100fec6e0;
  FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
  puVar7 = puVar6;
  FUN_100947704();
  Swift::SetAlgebra::_init(lVar9,local_b8,puVar6,puVar7,DVar4.unknown,puVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_c8 + 8))(lVar9,DVar4.unknown);
  (**(code **)(lVar10 + 8))(qos.unknown,local_d0);
  _swift_release(local_80);
  return;
}



/* Address: 0x1009413bc | FUN_1009413bc */

void FUN_1009413bc(undefined8 param_1,undefined8 param_2,DispatchQoS param_3)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_a0 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar9 + 0x40);
  if (*(char *)(unaff_x20 + 0x58) == '\x01') {
    puVar3 = &DAT_100f19f90;
    _swift_allocObject(&DAT_100f19f90,0x28,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(undefined **)(puVar3 + 0x20) = param_3.unknown;
    _swift_retain();
    _swift_retain(param_3.unknown);
    FUN_10093df44(param_1,FUN_100947754,puVar3);
    _swift_release(puVar3);
    return;
  }
  puVar3 = &DAT_100f19f40;
  _swift_allocObject(&DAT_100f19f40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3.unknown;
  local_70 = FUN_10090f140;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f19f58;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100fec6d8;
  FUN_1003b6598(&DAT_100fec6d8,0xff,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100fec6e0;
  FUN_1000f7830(&DAT_100fec6e0,&DAT_100c84890);
  puVar5 = puVar4;
  FUN_100947704();
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(lVar8 + 8))(puVar7,DVar1.unknown);
  (**(code **)(lVar9 + 8))(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x1009415ec | FUN_1009415ec */

undefined * FUN_1009415ec(void)

{
  undefined **ppuVar1;
  undefined *extraout_x8;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar1 == extraout_x8) {
    _swift_beginAccess(unaff_x20 + 0x50,auStack_38,0,0);
    puVar2 = *(undefined **)(unaff_x20 + 0x50);
    if (puVar2 != (undefined *)0x0) {
      _swift_retain(puVar2);
      return puVar2;
    }
  }
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(long *)(puVar2 + 0x20) = unaff_x20;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  _swift_retain();
  FUN_1009452c4(0,0,puVar2);
  return puVar2;
}



/* Address: 0x1009416b4 | FUN_1009416b4 */

bool FUN_1009416b4(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  FUN_1009474d4();
  return param_1 == lVar1;
}



/* Address: 0x1009416dc | FUN_1009416dc */

void FUN_1009416dc(void)

{
  FUN_1009419a8();
  return;
}



/* Address: 0x1009416e8 | thunk_FUN_10093ed8c */

void thunk_FUN_10093ed8c(void)

{
  FUN_10093ed8c();
  return;
}



/* Address: 0x1009416ec | thunk_FUN_10093f43c */

void thunk_FUN_10093f43c(void)

{
  FUN_10093f43c();
  return;
}



/* Address: 0x1009416f0 | FUN_1009416f0 */

void FUN_1009416f0(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_1009474d4();
  if (param_1 == lVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10094171c);
  (*pcVar1)();
}



/* Address: 0x10094171c | FUN_10094171c */

void FUN_10094171c(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_1009474d4();
  if (param_1 != lVar2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100941748);
  (*pcVar1)();
}


