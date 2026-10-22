/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10042fdcc | _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::request:didFailWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::
     request_didFailWithError_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_100431d08(param_4);
  return;
}



/* Address: 0x10042fe34 | FUN_10042fe34 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10042fe34(undefined8 param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auStack_a0 [8];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar10 = *(long *)(DVar1.unknown + -8);
  puVar9 = auStack_a0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar8 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100fc6768,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar4 = &DAT_100ed46a8;
  _swift_allocObject(&DAT_100ed46a8,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  puVar5 = &DAT_100ed46d0;
  _swift_allocObject(&DAT_100ed46d0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  local_70 = FUN_100431b24;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ed46e8;
  local_68 = puVar5;
  aBlock = __Block_copy(&local_90);
  DVar6.unknown = local_68;
  _swift_errorRetain(param_1);
  _swift_release();
  DVar6 = Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100431b48();
  puVar4 = &DAT_100fc6778;
  FUN_1000f7830(&DAT_100fc6778,&DAT_100c4a018);
  puVar5 = puVar4;
  FUN_100431b8c();
  Swift::SetAlgebra::_init(puVar9,&local_90,puVar4,puVar5,DVar1.unknown,DVar6.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar9 + -(lVar7 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(lVar10 + 8))(puVar9,DVar1.unknown);
  (**(code **)(lVar8 + 8))(puVar9 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  objc_stub::cancel(*(ID *)(unaff_x20 +
                           _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession
                           ::receiptRefreshRequest));
  return;
}



/* Address: 0x10043003c | FUN_10043003c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10043003c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    pcVar1 = *(code **)(param_1 +
                       _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::
                       completion);
    uVar2 = ((undefined8 *)
            (param_1 +
            _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::completion))
            [1];
    FUN_100011128(pcVar1,uVar2);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_2);
      FUN_100004550(pcVar1,uVar2);
    }
  }
  return;
}



/* Address: 0x1004300cc | FUN_1004300cc */

void FUN_1004300cc(void)

{
  FUN_1004319e0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100430100 | _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14TPInAppReceiptP33_49B299FEA3BD56F27DB286798366A4A114RefreshSession::_cxx_destruct
               (ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + completion),((undefined8 *)(param_1 + completion))[1]);
  return;
}



/* Address: 0x10043013c | FUN_10043013c */

bool FUN_10043013c(long param_1)

{
  undefined8 *puVar1;
  char *pcVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  String SVar5;
  code *pcVar6;
  bool bVar7;
  void *pvVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  String SStack_f0;
  ulong local_e0;
  long local_d8;
  String *local_d0;
  undefined *local_c8 [9];
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  pvVar8 = (void *)0x0;
  FUN_100432e30();
  local_d8 = *(long *)((long)pvVar8 + -8);
  uVar13 = *(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d0 = (String *)((long)&SStack_f0 - uVar13);
  lVar18 = (long)local_d0 - uVar13;
  puVar9 = &DAT_100fc6660;
  SStack_f0.bridgeObject = pvVar8;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar19 = lVar18 - (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0;
  FUN_10043ee24();
  lVar20 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar16 = *(long *)(lVar10 + -8);
  plVar17 = (long *)(lVar19 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar15 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar15 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_78,0,0);
  FUN_1000f8cac(lVar15 + lVar20,lVar19,&DAT_100fc6660,&DAT_100c49fd0);
  lVar20 = lVar19;
  (**(code **)(lVar16 + 0x30))(lVar19,1,lVar10);
  if ((int)lVar20 == 1) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100430588);
    (*pcVar6)();
  }
  FUN_1000523d8(lVar19,plVar17,FUN_10043ee24);
  lVar20 = *plVar17;
  _swift_bridgeObjectRetain(lVar20);
  FUN_10005241c(plVar17,FUN_10043ee24);
  local_e0 = *(ulong *)(lVar20 + 0x10);
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_e0 != 0) {
    uVar13 = 0;
    pvVar8 = SStack_f0.bridgeObject;
    do {
      if (*(ulong *)(lVar20 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100430580);
        (*pcVar6)();
      }
      uVar21 = (ulong)*(byte *)(local_d8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_d8 + 0x50) ^ 0xffffffffffffffff);
      lVar10 = *(long *)(local_d8 + 0x48);
      FUN_100431a90(lVar20 + uVar21 + lVar10 * uVar13,lVar18);
      if (((*(byte *)(lVar18 + *(int *)((long)pvVar8 + 0x30)) & 1) == 0) &&
         (*(char *)(lVar18 + *(int *)((long)pvVar8 + 0x34)) != '\x01')) {
        FUN_10005241c(lVar18,FUN_100432e30);
      }
      else {
        puVar11 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        local_c8[0] = puVar9;
        if (((ulong)puVar11 & 1) == 0) {
          FUN_100430958(0,*(long *)(puVar9 + 0x10) + 1,1);
          pvVar8 = SStack_f0.bridgeObject;
        }
        uVar12 = *(ulong *)(local_c8[0] + 0x10);
        if (*(ulong *)(local_c8[0] + 0x18) >> 1 <= uVar12) {
          FUN_100430958(1 < *(ulong *)(local_c8[0] + 0x18),uVar12 + 1,1);
          pvVar8 = SStack_f0.bridgeObject;
        }
        puVar9 = local_c8[0];
        *(ulong *)(local_c8[0] + 0x10) = uVar12 + 1;
        FUN_1000523d8(lVar18,local_c8[0] + uVar12 * lVar10 + uVar21,FUN_100432e30);
      }
      uVar13 = uVar13 + 1;
    } while (local_e0 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar20);
  local_e0 = *(ulong *)(puVar9 + 0x10);
  if (local_e0 == 0) {
    SStack_f0.bridgeObject = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    uVar13 = 0;
    SStack_f0.bridgeObject = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(puVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100430584);
        (*pcVar6)();
      }
      uVar21 = (ulong)*(byte *)(local_d8 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_d8 + 0x50) ^ 0xffffffffffffffff);
      lVar20 = *(long *)(local_d8 + 0x48);
      FUN_100431a90(puVar9 + lVar20 * uVar13 + uVar21,local_d0);
      if (*(long *)(param_1 + 0x10) != 0) {
        pcVar2 = local_d0->str;
        puVar11 = local_d0->bridgeObject;
        SVar5 = *local_d0;
        Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
        into.unknown = (undefined *)local_c8;
        Swift::String::hash(into,SVar5);
        uVar12 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
        uVar12 = uVar12 & (uVar14 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
            _Var3.unknown = (undefined *)*puVar1;
            _Var4.unknown = (undefined *)puVar1[1];
            if ((_Var3.unknown == pcVar2 && _Var4.unknown == puVar11) ||
               (bVar7 = Swift::_stringCompareWithSmolCheck
                                  (_Var3,_Var4,(_StringComparisonResult)(__int8)pcVar2), bVar7)) {
              pvVar8 = SStack_f0.bridgeObject;
              puVar11 = SStack_f0.bridgeObject;
              _swift_isUniquelyReferenced_nonNull_native();
              local_80 = pvVar8;
              if (((ulong)puVar11 & 1) == 0) {
                FUN_100430958(0,*(long *)((long)pvVar8 + 0x10) + 1,1);
              }
              uVar12 = *(ulong *)(local_80 + 0x10);
              if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar12) {
                FUN_100430958(1 < *(ulong *)(local_80 + 0x18),uVar12 + 1,1);
              }
              *(ulong *)(local_80 + 0x10) = uVar12 + 1;
              SStack_f0.bridgeObject = local_80;
              FUN_1000523d8(local_d0,local_80 + uVar12 * lVar20 + uVar21,FUN_100432e30);
              goto LAB_1004303d4;
            }
            uVar12 = uVar12 + 1 & ~uVar14;
          } while ((*(ulong *)(param_1 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0);
        }
      }
      FUN_10005241c(local_d0,FUN_100432e30);
LAB_1004303d4:
      uVar13 = uVar13 + 1;
    } while (uVar13 != local_e0);
  }
  _swift_release(puVar9);
  lVar20 = *(long *)((long)SStack_f0.bridgeObject + 0x10);
  _swift_release();
  return lVar20 == 0;
}



/* Address: 0x100430588 | FUN_100430588 */

bool FUN_100430588(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long lVar14;
  byte *pbVar15;
  long *plVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  byte abStack_b0 [8];
  long local_a8 [2];
  undefined *local_98;
  undefined *puStack_90;
  long local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  local_98 = param_1;
  puStack_90 = param_2;
  FUN_100432e30();
  local_88 = *(long *)(lVar5 + -8);
  uVar10 = *(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar13 = -uVar10;
  pbVar15 = abStack_b0 + lVar13;
  lVar18 = (long)pbVar15 - uVar10;
  puVar6 = &DAT_100fc6660;
  local_a8[0] = lVar5;
  FUN_1000f7830(&DAT_100fc6660,&DAT_100c49fd0);
  lVar19 = lVar18 - (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  FUN_10043ee24();
  lVar5 = _TtC14TPInAppReceipt13_InAppReceipt::payload;
  lVar11 = *(long *)(lVar7 + -8);
  plVar16 = (long *)(lVar19 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar14 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar14 + _TtC14TPInAppReceipt13_InAppReceipt::payload,auStack_78,0,0);
  FUN_1000f8cac(lVar14 + lVar5,lVar19,&DAT_100fc6660,&DAT_100c49fd0);
  lVar5 = lVar19;
  (**(code **)(lVar11 + 0x30))(lVar19,1,lVar7);
  if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10043093c);
    (*pcVar3)();
  }
  FUN_1000523d8(lVar19,plVar16,FUN_10043ee24);
  lVar5 = *plVar16;
  _swift_bridgeObjectRetain(lVar5);
  FUN_10005241c(plVar16,FUN_10043ee24);
  local_a8[1] = *(ulong *)(lVar5 + 0x10);
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_a8[1] != 0) {
    uVar10 = 0;
    lVar7 = local_a8[0];
    do {
      if (*(ulong *)(lVar5 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100430934);
        (*pcVar3)();
      }
      uVar17 = (ulong)*(byte *)(local_88 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff);
      lVar11 = *(long *)(local_88 + 0x48);
      FUN_100431a90(lVar5 + uVar17 + lVar11 * uVar10,lVar18);
      if (((*(byte *)(lVar18 + *(int *)(lVar7 + 0x30)) & 1) == 0) &&
         (*(char *)(lVar18 + *(int *)(lVar7 + 0x34)) != '\x01')) {
        FUN_10005241c(lVar18,FUN_100432e30);
      }
      else {
        puVar8 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar6;
        if (((ulong)puVar8 & 1) == 0) {
          FUN_100430958(0,*(long *)(puVar6 + 0x10) + 1,1);
          lVar7 = local_a8[0];
        }
        uVar12 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar12) {
          FUN_100430958(1 < *(ulong *)(local_80 + 0x18),uVar12 + 1,1);
          lVar7 = local_a8[0];
        }
        puVar6 = local_80;
        *(ulong *)(local_80 + 0x10) = uVar12 + 1;
        FUN_1000523d8(lVar18,local_80 + uVar12 * lVar11 + uVar17,FUN_100432e30);
      }
      uVar10 = uVar10 + 1;
    } while (local_a8[1] != uVar10);
  }
  _swift_bridgeObjectRelease(lVar5);
  uVar10 = *(ulong *)(puVar6 + 0x10);
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar10 != 0) {
    uVar17 = 0;
    do {
      if (*(ulong *)(puVar6 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100430938);
        (*pcVar3)();
      }
      uVar12 = (ulong)*(byte *)(local_88 + 0x50) + 0x20 &
               ((ulong)*(byte *)(local_88 + 0x50) ^ 0xffffffffffffffff);
      lVar5 = *(long *)(local_88 + 0x48);
      FUN_100431a90(puVar6 + lVar5 * uVar17 + uVar12,pbVar15);
      _Var2.unknown = *(undefined **)((long)local_a8 + lVar13);
      if ((*(undefined **)pbVar15 == local_98 && _Var2.unknown == puStack_90) ||
         (bVar4 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)pbVar15,_Var2,
                             (_StringComparisonResult)(__int8)local_98), bVar4)) {
        puVar9 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80 = puVar8;
        if (((ulong)puVar9 & 1) == 0) {
          FUN_100430958(0,*(long *)(puVar8 + 0x10) + 1,1);
        }
        uVar1 = *(ulong *)(local_80 + 0x10);
        if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar1) {
          FUN_100430958(1 < *(ulong *)(local_80 + 0x18),uVar1 + 1,1);
        }
        puVar8 = local_80;
        *(ulong *)(local_80 + 0x10) = uVar1 + 1;
        FUN_1000523d8(pbVar15,local_80 + uVar1 * lVar5 + uVar12,FUN_100432e30);
      }
      else {
        FUN_10005241c(pbVar15,FUN_100432e30);
      }
      uVar17 = uVar17 + 1;
    } while (uVar10 != uVar17);
  }
  _swift_release(puVar6);
  lVar13 = *(long *)(puVar8 + 0x10);
  _swift_release(puVar8);
  return lVar13 == 0;
}



/* Address: 0x10043093c | FUN_10043093c */

void FUN_10043093c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10043b880();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100430958 | FUN_100430958 */

void FUN_100430958(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10043ba14();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100430974 | FUN_100430974 */

void FUN_100430974(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___SKProduct_100f8dcc0,&DAT_100fc6600);
  return;
}



/* Address: 0x100430988 | FUN_100430988 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100430988(void)

{
  return ZEXT816(0x100fc66a8);
}



/* Address: 0x1004309a8 | FUN_1004309a8 */

void FUN_1004309a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___NSBundle_100f8d648,&DAT_100fc67a0);
  return;
}



/* Address: 0x1004309bc | FUN_1004309bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1004309bc(undefined8 *param_1,__CocoaSet param_2)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  __CocoaSet _Var4;
  undefined8 uVar5;
  ulong uVar6;
  __int64 _Var7;
  __CocoaSet _Var8;
  ulong uVar9;
  undefined8 *unaff_x20;
  undefined *puVar10;
  undefined *local_68;
  
  puVar10 = (undefined *)*unaff_x20;
  if (((ulong)puVar10 & 0xc000000000000001) == 0) {
    FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
    uVar6 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(puVar10 + 0x28));
    uVar9 = -1L << ((ulong)(byte)puVar10[0x20] & 0x3f);
    uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
    if ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0) {
      do {
        bVar3 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(puVar10 + 0x30) + uVar6 * 8),
                           (NSObject *)param_2.unknown);
        if (bVar3) {
          *param_1 = *(undefined8 *)(*(long *)(puVar10 + 0x30) + uVar6 * 8);
          return 0;
        }
        uVar6 = uVar6 + 1 & ~uVar9;
      } while ((*(ulong *)(puVar10 + (uVar6 >> 6) * 8 + 0x38) >> (uVar6 & 0x3f) & 1) != 0);
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = (undefined *)*unaff_x20;
    FUN_100430e00(param_2.unknown,uVar6,uVar5);
    *unaff_x20 = local_68;
  }
  else {
    _Var8.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var8.unknown = puVar10;
    }
    _swift_bridgeObjectRetain(puVar10);
    _Var4.unknown = param_2.unknown;
    Swift::__CocoaSet::_member(param_2);
    if (_Var4.unknown != (undefined *)0x0) {
      _swift_bridgeObjectRelease(puVar10);
      uVar5 = 0;
      local_68 = _Var4.unknown;
      FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
      _swift_dynamicCast(param_1,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                         uVar5,7);
      return 0;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var8);
    if (SCARRY8(_Var7,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100430c04);
      (*pcVar2)();
    }
    FUN_100430c04(_Var8.unknown,_Var7 + 1);
    local_68 = _Var8.unknown;
    if (*(ulong *)(_Var8.unknown + 0x18) <= *(ulong *)(_Var8.unknown + 0x10)) {
      FUN_1004312ac(*(ulong *)(_Var8.unknown + 0x10) + 1);
    }
    puVar1 = local_68;
    FUN_10036bd88(param_2.unknown,local_68);
    _swift_bridgeObjectRelease(puVar10);
    *unaff_x20 = puVar1;
  }
  *param_1 = param_2.unknown;
  return 1;
}



/* Address: 0x100430c04 | FUN_100430c04 */

undefined * FUN_100430c04(__CocoaSet param_1,long param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  _SetStorage *this;
  __CocoaSet _Var5;
  Iterator *this_00;
  undefined8 uVar6;
  Iterator *pIVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  Iterator *local_78;
  undefined8 local_70;
  undefined *local_68;
  
  if (param_2 == 0) {
    _swift_unknownObjectRelease();
    _Var5.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  }
  else {
    this = (_SetStorage *)&DAT_100fc65f8;
    FUN_1000f7830(&DAT_100fc65f8,&DAT_100c49f80);
    _Var5.unknown = param_1.unknown;
    Swift::_SetStorage::_convert(this,param_1,param_2);
    local_68 = _Var5.unknown;
    this_00 = Swift::__CocoaSet::makeIterator(param_1);
    pIVar7 = this_00;
    Swift::__CocoaSet::Iterator::_next(this_00);
    if (pIVar7 != (Iterator *)0x0) {
      uVar6 = 0;
      FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
      puVar2 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
      do {
        local_78 = pIVar7;
        _swift_dynamicCast(&local_70,&local_78,puVar2 + 8,uVar6,7);
        uVar3 = local_70;
        if (*(ulong *)(_Var5.unknown + 0x18) <= *(ulong *)(_Var5.unknown + 0x10)) {
          FUN_1004312ac(*(ulong *)(_Var5.unknown + 0x10) + 1);
          _Var5.unknown = local_68;
        }
        pIVar7 = (Iterator *)
                 (extension_ObjectiveC)::__C::NSObject::_rawHashValue
                           (*(__int64 *)(_Var5.unknown + 0x28));
        uVar11 = -1L << ((ulong)(byte)_Var5.unknown[0x20] & 0x3f);
        uVar10 = (ulong)pIVar7 & (uVar11 ^ 0xffffffffffffffff);
        uVar8 = uVar10 >> 6;
        uVar9 = -1L << (uVar10 & 0x3f) &
                (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar1 = false;
          uVar9 = 0x3f - uVar11 >> 6;
          do {
            uVar10 = uVar8 + 1;
            if ((uVar10 == uVar9) && (bVar1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x100430e00);
              (*pcVar4)();
            }
            uVar8 = 0;
            if (uVar10 != uVar9) {
              uVar8 = uVar10;
            }
            bVar1 = (bool)(uVar10 == uVar9 | bVar1);
          } while (*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(_Var5.unknown + uVar8 * 8 + 0x38);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar8 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(_Var5.unknown + uVar8 + 0x38) =
             1L << (uVar9 & 0x3f) | *(ulong *)(_Var5.unknown + uVar8 + 0x38);
        *(undefined8 *)(*(long *)(_Var5.unknown + 0x30) + uVar9 * 8) = uVar3;
        *(long *)(_Var5.unknown + 0x10) = *(long *)(_Var5.unknown + 0x10) + 1;
        Swift::__CocoaSet::Iterator::_next(this_00);
      } while (pIVar7 != (Iterator *)0x0);
    }
    _swift_release(this_00);
  }
  return _Var5.unknown;
}



/* Address: 0x100430e00 | FUN_100430e00 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100430e00(NSObject *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  
  uVar3 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar3 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_10043115c();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_100430f58(uVar3 + 1);
    }
    else {
      FUN_1004312ac();
    }
    lVar5 = *unaff_x20;
    param_2 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(lVar5 + 0x28));
    uVar3 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      FUN_10000ec2c(0,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
      do {
        bVar2 = (extension_ObjectiveC)::__C::NSObject::___infix
                          (*(NSObject **)(*(long *)(lVar5 + 0x30) + param_2 * 8),param_1);
        if (bVar2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100430f58);
          (*pcVar1)();
        }
        param_2 = param_2 + 1 & ~uVar3;
      } while ((*(ulong *)(lVar5 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar4 = *unaff_x20;
  lVar5 = lVar4 + (param_2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x38) = *(ulong *)(lVar5 + 0x38) | 1L << (param_2 & 0x3f);
  *(NSObject **)(*(long *)(lVar4 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100430f4c);
  (*pcVar1)();
}



/* Address: 0x100430f58 | FUN_100430f58 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100430f58(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar12;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc65f8;
  FUN_1000f7830(&DAT_100fc65f8,&DAT_100c49f80);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_100431124:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100431158);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_100431124;
        uVar11 = *(ulong *)(original + 0x38 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar12 = lVar7;
    }
    uVar4 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar12 << 6) * 8);
    uVar5 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10043115c);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = uVar4;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x10043115c | FUN_10043115c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10043115c(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar8;
  
  this = (_SetStorage *)&DAT_100fc65f8;
  FUN_1000f7830(&DAT_100fc65f8,&DAT_100c49f80);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar5 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar5 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    lVar7 = 0;
    do {
      if (uVar4 == 0) {
        do {
          lVar8 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004312ac);
            (*pcVar2)();
          }
          if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_100431284;
          uVar4 = *(ulong *)(p_Var1 + lVar8 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
      }
      else {
        uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar4 = uVar4 - 1 & uVar4;
        lVar8 = lVar7;
      }
      uVar6 = LZCOUNT(uVar6) | lVar8 << 6;
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
      lVar7 = lVar8;
    } while( true );
  }
LAB_100431284:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1004312ac | FUN_1004312ac */

void FUN_1004312ac(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  __RawSetStorage *original;
  __RawSetStorage *p_Var11;
  long lVar12;
  ulong uVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fc65f8;
  FUN_1000f7830(&DAT_100fc65f8,&DAT_100c49f80);
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004314a8:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x38;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)p_Var11;
  lVar6 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004314d4);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar12) {
          uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var11 = -1L << (uVar13 & 0x3f);
          }
          else {
            _bzero(p_Var11,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1004314a8;
        }
        uVar13 = *(ulong *)(p_Var11 + lVar12 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar13 == 0);
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar5 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar6;
    }
    uVar10 = *(undefined8 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar5) | lVar12 << 6) * 8);
    uVar4 = (extension_ObjectiveC)::__C::NSObject::_rawHashValue(*(__int64 *)(p_Var3 + 0x28));
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004314d8);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x38) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x38);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x38) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x38);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar10;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar12;
  } while( true );
}



/* Address: 0x1004314d8 | FUN_1004314d8 */

void FUN_1004314d8(void)

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
  
  this = (_DictionaryStorage *)&DAT_100fc67b0;
  FUN_1000f7830(&DAT_100fc67b0,&DAT_100c4a038);
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
    if (uVar8 == 0) goto LAB_1004315b4;
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
LAB_1004315b4:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100431648);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_100431620;
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
LAB_100431620:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x100431648 | FUN_100431648 */

void FUN_100431648(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc67b0;
  FUN_1000f7830(&DAT_100fc67b0,&DAT_100c4a038);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1004318b0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004318e0);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1004318b0;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_retain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1004318e4);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1004318e4 | FUN_1004318e4 */

undefined * FUN_1004318e4(long param_1)

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
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc67b0;
    FUN_1000f7830(&DAT_100fc67b0,&DAT_100c4a038);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_retain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004319dc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1004319e0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1004319e0 | FUN_1004319e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004319e0(void)

{
  return ZEXT816(0x100f9c548);
}



/* Address: 0x100431a00 | FUN_100431a00 */

void FUN_100431a00(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100431a24 | FUN_100431a24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100431a24(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  DAT_100fc6640 = 0;
  return 0;
}



/* Address: 0x100431a50 | FUN_100431a50 */

void FUN_100431a50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc6658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a110;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a110,&DAT_100ed4790);
  DAT_100fc6658 = pTVar1;
  return;
}



/* Address: 0x100431a90 | FUN_100431a90 */

undefined8 FUN_100431a90(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100432e30();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100431ad4 | FUN_100431ad4 */

void FUN_100431ad4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100431af8 | FUN_100431af8 */

void FUN_100431af8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100431b24 | FUN_100431b24 */

void FUN_100431b24(void)

{
  long unaff_x20;
  
  FUN_10043003c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100431b2c | FUN_100431b2c */

void FUN_100431b2c(long param_1,long param_2)

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



/* Address: 0x100431b40 | FUN_100431b40 */

void FUN_100431b40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100431b48 | FUN_100431b48 */

void FUN_100431b48(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fc6770 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fc6770 = puVar2;
  return;
}



/* Address: 0x100431b8c | FUN_100431b8c */

void FUN_100431b8c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc6780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc6778;
  FUN_1000f8b08(&DAT_100fc6778,&DAT_100c4a018);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fc6780 = puVar2;
  return;
}



/* Address: 0x100431bdc | FUN_100431bdc */

undefined * FUN_100431bdc(long param_1)

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
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc6790;
    FUN_1000f7830(&DAT_100fc6790,&DAT_100c4a028);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_90,&DAT_100fc6798,&DAT_100c4a030);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100431d04);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100431d08);
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



/* Address: 0x100431d08 | FUN_100431d08 */

void FUN_100431d08(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  _StringGuts _Var2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String separator;
  char local_70 [24];
  undefined1 auStack_58 [8];
  undefined8 local_50;
  undefined8 local_48;
  
  pcVar3 = local_70;
  pcVar1 = &DAT_100fc6788;
  FUN_1000f7830(&DAT_100fc6788,&DAT_100c4a020);
  _Var2.unknown = (undefined *)0x40;
  _swift_allocObject();
  pcVar1[0x18] = '\x02';
  pcVar1[0x19] = '\0';
  pcVar1[0x1a] = '\0';
  pcVar1[0x1b] = '\0';
  pcVar1[0x1c] = '\0';
  pcVar1[0x1d] = '\0';
  pcVar1[0x1e] = '\0';
  pcVar1[0x1f] = '\0';
  pcVar1[0x10] = '\x01';
  pcVar1[0x11] = '\0';
  pcVar1[0x12] = '\0';
  pcVar1[0x13] = '\0';
  pcVar1[0x14] = '\0';
  pcVar1[0x15] = '\0';
  pcVar1[0x16] = '\0';
  pcVar1[0x17] = '\0';
  local_50 = 0;
  local_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x18,_Var2);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000016;
  local_48 = 0x8000000100da66e0;
  _swift_getErrorValue(param_1,auStack_58);
  SVar4 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar3;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  *(undefined **)(pcVar1 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(pcVar1 + 0x20) = local_50;
  *(undefined8 *)(pcVar1 + 0x28) = local_48;
  SVar4.bridgeObject = (void *)0x20;
  SVar4.str = pcVar1;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar4,separator);
  _swift_release(pcVar1);
  FUN_10042fe34(param_1);
  return;
}



/* Address: 0x100431e18 | FUN_100431e18 */

void FUN_100431e18(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fc67a8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10000ec2c(0xff,&DAT_100fc6600,&PTR__OBJC_CLASS___SKProduct_100f8dcc0);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fc67a8 = puVar2;
  return;
}



/* Address: 0x100431e6c | thunk_FUN_100431e70 */

void thunk_FUN_100431e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a040,&DAT_100ed4820);
  DAT_100fc67b8 = pTVar1;
  return;
}



/* Address: 0x100431e70 | FUN_100431e70 */

void FUN_100431e70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a040;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a040,&DAT_100ed4820);
  DAT_100fc67b8 = pTVar1;
  return;
}



/* Address: 0x100431eb0 | thunk_FUN_100431eb4 */

void thunk_FUN_100431eb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a0a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a0a8,&DAT_100ed4940);
  DAT_100fc67c0 = pTVar1;
  return;
}



/* Address: 0x100431eb4 | FUN_100431eb4 */

void FUN_100431eb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc67c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4a0a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4a0a8,&DAT_100ed4940);
  DAT_100fc67c0 = pTVar1;
  return;
}



/* Address: 0x100431ef4 | FUN_100431ef4 */

void FUN_100431ef4(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100431f00 | FUN_100431f00 */

void FUN_100431f00(void)

{
  return;
}



/* Address: 0x100431f04 | FUN_100431f04 */

int FUN_100431f04(ushort *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 4;
    if (param_2 + 0xff02 < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xff02 < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) goto LAB_100431f80;
        goto LAB_100431f60;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100431f60:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xff02;
    }
  }
LAB_100431f80:
  uVar1 = *(byte *)((long)param_1 + 1) ^ 0xff;
  if (*(byte *)((long)param_1 + 1) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100431f98 | FUN_100431f98 */

void FUN_100431f98(undefined2 *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xff02 < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xff02 < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfd < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfe) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(undefined1 *)(param_1 + 1) = 0;
        if (param_2 == 0) {
          return;
        }
        goto LAB_100432014;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = 0;
    }
    else {
      *(undefined4 *)(param_1 + 1) = 0;
    }
    if (param_2 != 0) {
LAB_100432014:
      *(char *)((long)param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfe >> 0x10) + 1;
    *param_1 = (short)(param_2 - 0xfe);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      param_1[1] = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      *(char *)(param_1 + 1) = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100432044 | FUN_100432044 */

uint FUN_100432044(byte *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 2;
  if (param_1[1] < 2) {
    uVar1 = (uint)param_1[1];
  }
  return uVar1;
}



/* Address: 0x10043205c | FUN_10043205c */

void FUN_10043205c(char *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (char)param_2 + -2;
    param_2 = 2;
  }
  param_1[1] = (char)param_2;
  return;
}



/* Address: 0x100432074 | FUN_100432074 */

undefined1  [16] FUN_100432074(void)

{
  return ZEXT816(0x100ed4790);
}



/* Address: 0x100432084 | FUN_100432084 */

void FUN_100432084(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100432090 | FUN_100432090 */

undefined1  [16] FUN_100432090(void)

{
  return ZEXT816(0x100ed4820);
}



/* Address: 0x1004320a0 | FUN_1004320a0 */

int FUN_1004320a0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf0 < param_2) {
    param_2 = param_2 + 0xf;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_100432108;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_100432108:
        return ((uint)*param_1 | uVar4 << 8) - 0xf;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_100432108;
    }
  }
  uVar4 = (uint)*param_1;
  iVar2 = 0;
  if (2 < uVar4 - 0xc) {
    iVar2 = uVar4 - 0xf;
  }
  iVar3 = 0;
  if (0xc < uVar4) {
    iVar3 = iVar2;
  }
  return iVar3;
}



/* Address: 0x10043213c | FUN_10043213c */

void FUN_10043213c(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 + 0xf;
  uVar4 = 2;
  if (0xfffeff < uVar1) {
    uVar4 = 4;
  }
  if (uVar1 >> 8 < 0xff) {
    uVar4 = 1;
  }
  uVar3 = 0;
  if (0xff < uVar1) {
    uVar3 = uVar4;
  }
  uVar1 = 0;
  if (0xf0 < param_3) {
    uVar1 = uVar3;
  }
  if (param_2 < 0xf1) {
    if (uVar1 < 2) {
      if (uVar1 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1004321c4;
      }
    }
    else if (uVar1 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1004321c4:
      *param_1 = (char)param_2 + '\x0f';
      return;
    }
  }
  else {
    iVar2 = (param_2 - 0xf1 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf1);
    if (1 < uVar1) {
      if (uVar1 != 2) {
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar2;
      return;
    }
    if (uVar1 != 0) {
      param_1[1] = (char)iVar2;
      return;
    }
  }
  return;
}



/* Address: 0x1004321f4 | FUN_1004321f4 */

int FUN_1004321f4(byte *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (0xc < *param_1) {
    iVar1 = *param_1 - 0xc;
  }
  return iVar1;
}



/* Address: 0x100432208 | FUN_100432208 */

void FUN_100432208(char *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (char)param_2 + '\f';
  }
  return;
}



/* Address: 0x100432218 | FUN_100432218 */

undefined1  [16] FUN_100432218(void)

{
  return ZEXT816(0x100ed48b0);
}



/* Address: 0x100432228 | FUN_100432228 */

undefined1  [16] FUN_100432228(void)

{
  return ZEXT816(0x100ed4940);
}



/* Address: 0x100432238 | thunk_FUN_1001a7dac */

void thunk_FUN_1001a7dac(void)

{
  thunk_FUN_1001a7dac();
  return;
}



/* Address: 0x10043223c | thunk_FUN_100432e1c */

void thunk_FUN_100432e1c(void)

{
  FUN_100432e1c();
  return;
}



/* Address: 0x100432240 | FUN_100432240 */

int FUN_100432240(uint param_1)

{
  return (param_1 & 0xff) - 1;
}



/* Address: 0x10043224c | FUN_10043224c */

void FUN_10043224c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar2.unknown = (undefined *)(ulong)(bVar1 - 1);
  Swift::Hasher::_combine(bVar1 - 1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100432290 | FUN_100432290 */

void FUN_100432290(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine(*unaff_x20 - 1,param_2);
  return;
}



/* Address: 0x1004322bc | FUN_1004322bc */

void FUN_1004322bc(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar2.unknown = (undefined *)(ulong)(bVar1 - 1);
  Swift::Hasher::_combine(bVar1 - 1,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1004322fc | FUN_1004322fc */

void FUN_1004322fc(undefined1 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100432e1c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100432324 | FUN_100432324 */

void FUN_100432324(int *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *unaff_x20 - 1;
  return;
}



/* Address: 0x100432334 | FUN_100432334 */

undefined1 FUN_100432334(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x10);
}


