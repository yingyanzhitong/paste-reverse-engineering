/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100321434 | FUN_100321434 */

void FUN_100321434(undefined8 *param_1,ID *param_2)

{
  objc_stub::setDevice_(*param_2,*param_1);
  return;
}



/* Address: 0x100321440 | FUN_100321440 */

void FUN_100321440(undefined1 *param_1,ID *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ID IVar3;
  
  IVar3 = objc_stub::rawType(*param_2);
  uVar2 = (uint)IVar3;
  FUN_100323594();
  uVar1 = 0;
  if ((uVar2 & 0xff) != 6) {
    uVar1 = (char)uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100321478 | FUN_100321478 */

void FUN_100321478(byte *param_1,ID *param_2)

{
  objc_stub::setRawType_(*param_2,(ulong)*param_1);
  return;
}



/* Address: 0x100321484 | FUN_100321484 */

void FUN_100321484(void)

{
  FUN_10031ebc8();
  return;
}



/* Address: 0x1003214a4 | thunk_FUN_10031f378 */

void thunk_FUN_10031f378(void)

{
  FUN_10031f378();
  return;
}



/* Address: 0x1003214a8 | FUN_1003214a8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003214a8(void)

{
  return ZEXT816(0x100f97da8);
}



/* Address: 0x1003214c8 | FUN_1003214c8 */

undefined ** FUN_1003214c8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *local_60 [3];
  undefined *local_48;
  
  lVar1 = param_1;
  _swift_bridgeObjectRetain();
  FUN_10032362c();
  FUN_1003216bc();
  if (lVar1 == 0) {
    ppuVar4 = (undefined **)0x0;
  }
  else {
    puVar2 = &DAT_100fbef68;
    FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
    _swift_initStackObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0x6d75736b63656863;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e800000000000000;
    *(long *)(puVar2 + 0x30) = param_1;
    *(long *)(puVar2 + 0x38) = lVar1;
    puVar3 = puVar2;
    FUN_1003c92b8();
    _swift_setDeallocating(puVar2);
    FUN_100005808(puVar2 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
    puVar2 = &DAT_100fbef78;
    FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
    ppuVar4 = local_60;
    local_60[0] = puVar3;
    local_48 = puVar2;
    FUN_100328950(ppuVar4,0,param_2);
    FUN_100004594(local_60);
  }
  return ppuVar4;
}



/* Address: 0x1003215dc | FUN_1003215dc */

undefined1  [16] FUN_1003215dc(undefined8 param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  undefined *local_38;
  
  uVar2 = param_1;
  __objc_autoreleasePoolPush();
  FUN_10031aeec(&local_38,param_1,param_2);
  __objc_autoreleasePoolPop(uVar2);
  if ((ulong)local_38 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)local_38 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_38 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < local_38) {
      _Var1.unknown = local_38;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(local_38);
    puVar4 = (undefined *)0x0;
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = local_38;
    _swift_bridgeObjectRetain(local_38);
    FUN_10032362c();
    puVar4 = local_38;
    FUN_1003216bc(local_38,puVar5);
    _swift_bridgeObjectRelease(local_38);
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = puVar4;
  return auVar6;
}



/* Address: 0x1003216a4 | FUN_1003216a4 */

void FUN_1003216a4(void)

{
  FUN_10031bc34();
  return;
}



/* Address: 0x1003216b8 | thunk_FUN_100323594 */

void thunk_FUN_100323594(void)

{
  FUN_100323594();
  return;
}



/* Address: 0x1003216bc | FUN_1003216bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003216bc(_ArrayBuffer param_1,uint param_2,URL param_3,URL param_4)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  Encoding data;
  undefined8 uVar3;
  char *pcVar4;
  undefined8 uVar5;
  void *pvVar6;
  code *pcVar7;
  Encoding EVar8;
  UTType UVar9;
  MD5 MVar10;
  MD5Digest MVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  UTType UVar16;
  UTType UVar17;
  URL UVar18;
  URL UVar19;
  undefined *puVar20;
  _ArrayBuffer _Var21;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  undefined *puVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  undefined8 *puVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  undefined1 auStack_e0 [8];
  long local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined *local_a0;
  _ArrayBuffer local_98;
  char *local_88;
  void *pvStack_80;
  long local_78;
  undefined *puStack_70;
  void *pvVar22;
  
  EVar8 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar8.unknown + -8) + 0x40));
  local_c0 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  UVar9 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  local_a0 = *(undefined **)(UVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_a0 + 0x40));
  lVar26 = (long)(auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar23 = &DAT_100fc1a40;
  puVar20 = &DAT_100c40660;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar23 = (undefined *)(lVar26 - extraout_x8_01);
  MVar10 = CryptoKit::Insecure::MD5::typeMetadataAccessor();
  lVar27 = *(long *)(MVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar27 + 0x40));
  lVar28 = (long)puVar23 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  MVar11 = CryptoKit::Insecure::MD5Digest::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(MVar11.unknown + -8) + 0x40));
  local_d8 = lVar28 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  param_2 = param_2 & 0xff;
  local_98.unknown = param_1.unknown;
  if (param_2 < 3) {
    if (param_2 == 0) {
LAB_100321ee4:
      FUN_100322ae4(param_1.unknown);
      return;
    }
    if (param_2 == 1) {
      puVar23 = param_1.unknown & 0xffffffffffffff8;
      local_d0 = (undefined *)lVar28;
      local_b8 = (undefined *)extraout_x12;
      local_b0 = MVar11.unknown;
      local_a8 = (undefined *)lVar27;
      local_a0 = MVar10.unknown;
      if ((ulong)param_1.unknown >> 0x3e == 0) {
        uVar25 = *(ulong *)(puVar23 + 0x10);
      }
      else {
        _Var2.unknown = puVar23;
        if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
          _Var2.unknown = param_1.unknown;
        }
        uVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar29 = 0;
      while( true ) {
        if (uVar25 == uVar29) {
          if (*(long *)(puVar15 + 0x10) != 0) {
            uVar3 = *(undefined8 *)(puVar15 + 0x20);
            uVar5 = *(undefined8 *)(puVar15 + 0x28);
            FUN_1001037b4(uVar3,uVar5);
            _swift_bridgeObjectRelease(puVar15);
            FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                          PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58
                         );
            puVar20 = local_a0;
            puVar23 = local_d0;
            CryptoKit::HashFunction::init();
            FUN_1001037b4(uVar3,uVar5);
            FUN_100323324(uVar3,uVar5,puVar23);
            FUN_10003bf2c(uVar3,uVar5);
            lVar26 = local_d8;
            CryptoKit::HashFunction::_finalize();
            (**(code **)((long)local_a8 + 8))(puVar23,puVar20);
            lVar27 = lVar26;
            FUN_100322fe4();
            (**(code **)((long)local_b8 + 8))(lVar26,local_b0);
            local_78 = lVar27;
            FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
            FUN_100310704();
            (extension_Swift)::Swift::BidirectionalCollection::_joined
                      ((String)(ZEXT816(0xe000000000000000) << 0x40));
            _swift_bridgeObjectRelease(lVar27);
            FUN_10003bf2c(uVar3,uVar5);
            return;
          }
          _swift_bridgeObjectRelease(puVar15);
          return;
        }
        if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar23 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100321e74);
            (*pcVar7)();
          }
          uVar12 = *(ulong *)(local_98.unknown + uVar29 * 8 + 0x20);
          _Var21.unknown = puVar20;
        }
        else {
          uVar12 = uVar29;
          _Var21.unknown = local_98.unknown;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar29,local_98);
        }
        uVar1 = uVar29 + 1;
        if (SCARRY8(uVar29,1)) break;
        FUN_10037d5c4();
        puVar20 = _Var21.unknown;
        uVar29 = uVar29 + 1;
        if ((ulong)_Var21.unknown >> 0x3c < 0xf) {
          puVar13 = puVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar14 = puVar15;
          if (((ulong)puVar13 & 1) == 0) {
            puVar20 = (undefined *)(*(long *)(puVar15 + 0x10) + 1);
            puVar14 = (undefined *)0x0;
            FUN_10037fa6c(0,puVar20,1,puVar15);
          }
          uVar29 = *(ulong *)(puVar14 + 0x10);
          puVar13 = (undefined *)(uVar29 + 1);
          puVar15 = puVar14;
          if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar29) {
            puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
            puVar20 = puVar13;
            FUN_10037fa6c(puVar15,puVar13,1,puVar14);
          }
          *(undefined **)(puVar15 + 0x10) = puVar13;
          *(ulong *)(puVar15 + uVar29 * 0x10 + 0x20) = uVar12;
          *(undefined **)(puVar15 + uVar29 * 0x10 + 0x28) = _Var21.unknown;
          uVar29 = uVar1;
        }
      }
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100321e70);
      (*pcVar7)();
    }
  }
  else if (1 < param_2 - 4) {
    if ((ulong)param_1.unknown >> 0x3e == 0) {
      local_a8 = param_1.unknown & 0xffffffffffffff8;
      puVar15 = *(undefined **)(local_a8 + 0x10);
      puVar20 = local_b8;
    }
    else {
      local_a8 = param_1.unknown & 0xffffffffffffff8;
      _Var2.unknown = local_a8;
      if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
        _Var2.unknown = param_1.unknown;
      }
      puVar15 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      puVar20 = local_b8;
    }
    local_b8 = puVar15;
    if (local_b8 == (undefined *)0x0) {
      uVar25 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
      puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_b8 = puVar20;
    }
    else {
      local_b0 = param_1.unknown & 0xc000000000000001;
      puVar20 = (undefined *)0x0;
      puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_c8 = UVar9.unknown;
      do {
        while( true ) {
          local_d0 = puVar15;
          if (local_b0 == (undefined *)0x0) {
            if (*(undefined **)(local_a8 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100321e7c);
              (*pcVar7)();
            }
                    /* WARNING: Load size is inaccurate */
            UVar16.unknown = param_1.unknown[(long)puVar20 * 8 + 0x20];
          }
          else {
            UVar16.unknown = puVar20;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar20,param_1);
          }
          puVar13 = puVar20 + 1;
          if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100321e78);
            (*pcVar7)();
          }
          UVar17 = UniformTypeIdentifiers::UTType::get_fileURL(UVar16);
          SVar31 = UniformTypeIdentifiers::UTType::get_identifier(UVar17);
          pvVar22 = SVar31.bridgeObject;
          (**(code **)((long)local_a0 + 8))(lVar26,UVar9.unknown);
          lVar27 = _TtC9PasteCore14PasteboardItem::dataByType;
          param_4.unknown = (undefined *)0x0;
          _swift_beginAccess(UVar16.unknown + _TtC9PasteCore14PasteboardItem::dataByType,&local_78,
                             0x20);
                    /* WARNING: Load size is inaccurate */
          EVar8.unknown = UVar16.unknown[lVar27];
          if (*(long *)(EVar8.unknown + 0x10) != 0) break;
LAB_1003219c8:
          _swift_endAccess(&local_78);
          _swift_bridgeObjectRelease(pvVar22);
LAB_1003219d8:
          param_4 = Foundation::URL::typeMetadataAccessor();
          (**(code **)(*(long *)(param_4.unknown + -8) + 0x38))(puVar23,1,1);
LAB_100321a08:
          param_3.unknown = &DAT_100c40660;
          FUN_100005808(puVar23,&DAT_100fc1a40);
          puVar15 = local_d0;
          puVar20 = puVar20 + 1;
          if (puVar13 == local_b8) goto LAB_100321d80;
        }
        _swift_bridgeObjectRetain(EVar8.unknown);
        FUN_100071370();
        if (((ulong)SVar31.bridgeObject & 1) == 0) {
          _swift_bridgeObjectRelease(EVar8.unknown);
          goto LAB_1003219c8;
        }
        puVar30 = (undefined8 *)(*(long *)(EVar8.unknown + 0x38) + (long)SVar31.str * 0x10);
        data.unknown = (undefined *)*puVar30;
        lVar27 = puVar30[1];
        FUN_1001037b4(data.unknown,lVar27);
        _swift_endAccess(&local_78);
        _swift_bridgeObjectRelease();
        Encoding::_get_utf8(EVar8);
        lVar28 = lVar27;
        (extension_Foundation)::Swift::String::_init(data);
        _swift_bridgeObjectRelease(pvVar22);
        param_1.unknown = local_98.unknown;
        UVar9.unknown = local_c8;
        FUN_10003bf2c(data.unknown,lVar27);
        if (lVar28 == 0) goto LAB_1003219d8;
        Foundation::URL::_init();
        _swift_bridgeObjectRelease(lVar28);
        UVar18 = Foundation::URL::typeMetadataAccessor();
        lVar27 = *(long *)(UVar18.unknown + -8);
        UVar19.unknown = puVar23;
        param_3 = UVar18;
        (**(code **)(lVar27 + 0x30))(puVar23,1);
        UVar9.unknown = local_c8;
        if ((int)UVar19.unknown == 1) goto LAB_100321a08;
        SVar31 = Foundation::URL::get_path(UVar19);
        (**(code **)(lVar27 + 8))(puVar23,UVar18.unknown);
        puVar20 = local_d0;
        puVar15 = local_d0;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar14 = puVar20;
        if (((ulong)puVar15 & 1) == 0) {
          puVar14 = (undefined *)0x0;
          param_3.unknown = &DAT_00000001;
          FUN_10037f834(0,*(long *)(puVar20 + 0x10) + 1);
          param_4.unknown = puVar20;
        }
        uVar25 = *(ulong *)(puVar14 + 0x10);
        puVar15 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar25) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
          param_3.unknown = &DAT_00000001;
          FUN_10037f834(puVar15,uVar25 + 1);
          param_4.unknown = puVar14;
        }
        *(ulong *)(puVar15 + 0x10) = uVar25 + 1;
        *(String *)(puVar15 + uVar25 * 0x10 + 0x20) = SVar31;
        UVar9.unknown = local_c8;
        puVar20 = puVar13;
      } while (puVar13 != local_b8);
LAB_100321d80:
      uVar25 = *(ulong *)(puVar15 + 0x10);
    }
    if (uVar25 == 0) {
      _swift_bridgeObjectRelease(puVar15);
      goto LAB_100321ee4;
    }
    uVar29 = 0;
    local_78 = 0x70696e53656c6946;
    puStack_70 = (undefined *)0xec0000003a746570;
    puVar30 = (undefined8 *)(puVar15 + 0x28);
    pvVar22 = (void *)0xe000000000000000;
    pcVar24 = (char *)0x0;
    do {
      if (*(ulong *)(puVar15 + 0x10) <= uVar29) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100321e80);
        (*pcVar7)();
      }
      uVar29 = uVar29 + 1;
      pcVar4 = (char *)puVar30[-1];
      pvVar6 = (void *)*puVar30;
      local_88 = pcVar24;
      pvStack_80 = pvVar22;
      _swift_bridgeObjectRetain(pvVar6);
      _swift_bridgeObjectRetain(pvVar22);
      SVar32.bridgeObject = pvVar6;
      SVar32.str = pcVar4;
      SVar33.bridgeObject = param_4.unknown;
      SVar33.str = param_3.unknown;
      Swift::String::append(SVar32,SVar33);
      _swift_bridgeObjectRelease(pvVar6);
      _swift_bridgeObjectRelease(pvVar22);
      pvVar22 = pvStack_80;
      SVar31.bridgeObject = pvStack_80;
      SVar31.str = local_88;
      puVar30 = puVar30 + 2;
      pcVar24 = local_88;
    } while (uVar25 != uVar29);
    _swift_bridgeObjectRelease(puVar15);
    SVar34.bridgeObject = param_4.unknown;
    SVar34.str = param_3.unknown;
    Swift::String::append(SVar31,SVar34);
    _swift_bridgeObjectRelease(pvVar22);
    lVar26 = local_78;
    param_1.unknown = puStack_70;
    goto LAB_100321e34;
  }
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    lVar26 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    lVar26 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar26 == 0) {
    return;
  }
  if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100321eb0);
      (*pcVar7)();
    }
    lVar26 = *(long *)(param_1.unknown + 0x20);
    param_1.unknown = puVar20;
  }
  else {
    lVar26 = 0;
    Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
  }
  FUN_10037c9a8();
  if (param_1.unknown == (undefined *)0x0) {
    return;
  }
LAB_100321e34:
  FUN_100322d94(lVar26,param_1.unknown);
  _swift_bridgeObjectRelease(param_1.unknown);
  return;
}



/* Address: 0x100321f20 | FUN_100321f20 */

void FUN_100321f20(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100323594();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100321f48 | FUN_100321f48 */

bool FUN_100321f48(char *param_1,void *param_2)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  Locale LVar4;
  long lVar5;
  uint uVar6;
  long extraout_x8;
  long lVar7;
  code *pcVar8;
  String SVar9;
  String SVar10;
  long alStack_90 [2];
  undefined8 local_80;
  undefined1 *puStack_78;
  char *local_70;
  void *pvStack_68;
  
  puVar3 = &DAT_100fbfd10;
  FUN_1000037f0(&DAT_100fbfd10,&DAT_100c411c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  lVar7 = (long)&local_80 + lVar1;
  local_80 = 0xd000000000000012;
  puStack_78 = (undefined1 *)0x8000000100da22e0;
  local_70 = param_1;
  pvStack_68 = param_2;
  LVar4 = Foundation::Locale::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(LVar4.unknown + -8) + 0x38);
  lVar5 = lVar7;
  (*pcVar8)(lVar7,1,1,LVar4.unknown);
  FUN_10030cce0();
  *(long *)((long)alStack_90 + lVar1) = lVar5;
  *(long *)((long)alStack_90 + lVar1 + 8) = lVar5;
  uVar6 = 0;
  (extension_Foundation)::Swift::StringProtocol::_range
            (&local_80,0x400,0,0,1,lVar7,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___type_metadata_for_Swift_String_100eac208);
  FUN_100005808(lVar7,&DAT_100fbfd10,&DAT_100c411c0);
  if ((uVar6 & 0xff) == 1) {
    bVar2 = false;
  }
  else {
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0x23;
    SVar10.bridgeObject = param_2;
    SVar10.str = param_1;
    bVar2 = Swift::String::hasPrefix(SVar9,SVar10);
    if (bVar2) {
      bVar2 = true;
    }
    else {
      local_80 = 0x5d662d61462d415b;
      puStack_78 = &DAT_e800000000000000;
      local_70 = param_1;
      pvStack_68 = param_2;
      (*pcVar8)(lVar7,1,1,LVar4.unknown);
      *(long *)((long)alStack_90 + lVar1) = lVar5;
      *(long *)((long)alStack_90 + lVar1 + 8) = lVar5;
      uVar6 = 0;
      (extension_Foundation)::Swift::StringProtocol::_range
                (&local_80,0x400,0,0,1,lVar7,PTR___type_metadata_for_Swift_String_100eac208,
                 PTR___type_metadata_for_Swift_String_100eac208);
      FUN_100005808(lVar7,&DAT_100fbfd10,&DAT_100c411c0);
      bVar2 = (uVar6 & 0xff) != 1;
    }
  }
  return bVar2;
}



/* Address: 0x100322124 | FUN_100322124 */

void FUN_100322124(void)

{
  UTType UVar1;
  UTType UVar2;
  ulong uVar3;
  
  UVar1.unknown = &DAT_100fbf8d8;
  FUN_1000037f0(&DAT_100fbf8d8,&DAT_100c44d70);
  UVar2 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  uVar3 = (ulong)*(byte *)(*(long *)(UVar2.unknown + -8) + 0x50);
  _swift_allocObject(UVar1.unknown,
                     (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)) +
                     *(long *)(*(long *)(UVar2.unknown + -8) + 0x48) * 0xb,uVar3 | 7);
  *(undefined8 *)(UVar1.unknown + 0x18) = 0x16;
  *(undefined8 *)(UVar1.unknown + 0x10) = 0xb;
  UVar2 = UniformTypeIdentifiers::UTType::get_fileURL(UVar1);
  UVar2 = UniformTypeIdentifiers::UTType::get_rtf(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_png(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_jpeg(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_heic(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_tiff(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_icns(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_url(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar2);
  UVar2 = UniformTypeIdentifiers::UTType::get_plainText(UVar2);
  UniformTypeIdentifiers::UTType::get_text(UVar2);
  DAT_100fbfcf0 = UVar1.unknown;
  return;
}



/* Address: 0x100322224 | FUN_100322224 */

void FUN_100322224(void)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  UTType UVar6;
  _DictionaryStorage *this;
  long lVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  long extraout_x8;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined *local_70;
  undefined *local_68;
  
  puVar5 = &DAT_100fbfd18;
  FUN_1000037f0(&DAT_100fbfd18,&DAT_100c411c8);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = auStack_80 + -extraout_x8;
  UVar6.unknown = &DAT_100fbfd20;
  FUN_1000037f0(&DAT_100fbfd20,&DAT_100c411d0);
  lVar15 = *(long *)(lVar11 + 0x48);
  bVar1 = *(byte *)(lVar11 + 0x50);
  lVar11 = 0xb;
  _swift_allocObject();
  puVar14 = UVar6.unknown + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
  iVar3 = *(int *)(puVar5 + 0x30);
  local_70 = UVar6.unknown;
  UVar6 = UniformTypeIdentifiers::UTType::get_fileURL(UVar6);
  puVar14[iVar3] = 3;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_png(UVar6);
  puVar14[iVar3 + lVar15] = 1;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_jpeg(UVar6);
  puVar14[(long)iVar3 + lVar15 * 2] = 1;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_heic(UVar6);
  puVar14[(long)iVar3 + lVar15 * 3] = 1;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_tiff(UVar6);
  puVar14[(long)iVar3 + lVar15 * 4] = 1;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_icns(UVar6);
  puVar14[(long)iVar3 + lVar15 * 5] = 1;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_url(UVar6);
  puVar14[(long)iVar3 + lVar15 * 6] = 4;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_rtf(UVar6);
  puVar14[(long)iVar3 + lVar15 * 7] = 5;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_utf8PlainText(UVar6);
  puVar14[(long)iVar3 + lVar15 * 8] = 5;
  iVar3 = *(int *)(puVar5 + 0x30);
  UVar6 = UniformTypeIdentifiers::UTType::get_plainText(UVar6);
  puVar14[(long)iVar3 + lVar15 * 9] = 5;
  iVar3 = *(int *)(puVar5 + 0x30);
  UniformTypeIdentifiers::UTType::get_text(UVar6);
  puVar14[(long)iVar3 + lVar15 * 10] = 5;
  this = (_DictionaryStorage *)&DAT_100fbfd28;
  FUN_1000037f0(&DAT_100fbfd28,&DAT_100c411d8);
  lVar7 = 0xb;
  Swift::_DictionaryStorage::_allocate(this,0xb);
  iVar3 = *(int *)(puVar5 + 0x30);
  local_68 = puVar5;
  _swift_retain();
  local_78 = puVar14;
  while( true ) {
    puVar9 = puVar13;
    FUN_100011090(puVar14,puVar13,&DAT_100fbfd18,&DAT_100c411c8);
    puVar8 = puVar13;
    FUN_100380724();
    if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100322500);
      (*pcVar4)();
    }
    uVar2 = puVar13[iVar3];
    uVar10 = (ulong)puVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar7 + 0x40 + uVar10) =
         *(ulong *)(lVar7 + 0x40 + uVar10) | 1L << ((ulong)puVar8 & 0x3f);
    lVar12 = *(long *)(lVar7 + 0x30);
    UVar6 = UniformTypeIdentifiers::UTType::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 0x20))
              (lVar12 + *(long *)(*(long *)(UVar6.unknown + -8) + 0x48) * (long)puVar8,puVar13,
               UVar6.unknown);
    puVar8[*(long *)(lVar7 + 0x38)] = uVar2;
    if (SCARRY8(*(long *)(lVar7 + 0x10),1)) break;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    puVar14 = puVar14 + lVar15;
    lVar11 = lVar11 + -1;
    if (lVar11 == 0) {
      _swift_release(lVar7);
      puVar5 = local_70;
      _swift_setDeallocating(local_70);
      _swift_arrayDestroy(local_78,0xb,local_68);
      _swift_deallocClassInstance(puVar5,0x20,7);
      DAT_100fbfd00 = lVar7;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100322504);
  (*pcVar4)();
}



/* Address: 0x100322504 | FUN_100322504 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100322504(undefined8 *param_1,_ArrayBuffer param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  uint uVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  undefined *puVar4;
  NSString *pNVar5;
  ID IVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  code *UNRECOVERED_JUMPTABLE;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined *puStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100fbfcd0;
  uVar9 = param_4;
  uVar10 = param_5;
  FUN_1000037f0(&DAT_100fbfcd0,&DAT_100c411a8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)puVar11 - extraout_x12;
  puVar4 = &DAT_100fbfcd8;
  puVar8 = &DAT_100c411b0;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar12 - extraout_x12_00;
  uVar1 = (uint)param_5 & 0xff;
  if (uVar1 < 3) {
    if ((param_5 & 0xff) != 0) {
      if (uVar1 != 1) {
        if ((ulong)param_2.unknown >> 0x3e == 0) {
          lVar12 = *(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var2.unknown = param_2.unknown & 0xffffffffffffff8;
          if ((undefined *)0x7fffffffffffffff < param_2.unknown) {
            _Var2.unknown = param_2.unknown;
          }
          lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        }
        if (lVar12 != 0) {
          if (((ulong)param_2.unknown & 0xc000000000000001) == 0) {
            if (*(long *)(((ulong)param_2.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100322a40);
              (*UNRECOVERED_JUMPTABLE)();
            }
            uVar9 = *(undefined8 *)(param_2.unknown + 0x20);
            param_2.unknown = puVar8;
          }
          else {
            uVar9 = 0;
            Swift::_ArrayBuffer::__getElementSlowPath(0,param_2);
          }
          FUN_10037c9a8();
          uVar3 = 0;
          if (param_2.unknown != (undefined *)0x0) {
            local_88 = 0x23;
            uStack_80 = 0xe100000000000000;
            local_98 = 0;
            uStack_90 = 0xe000000000000000;
            local_78 = uVar9;
            puStack_70 = param_2.unknown;
            FUN_10030cce0();
            *(undefined8 *)(lVar14 + -0x10) = uVar3;
            *(undefined8 *)(lVar14 + -8) = uVar3;
            *(undefined **)(lVar14 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
            *(undefined8 *)(lVar14 + -0x18) = uVar3;
            SVar15 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                               (&local_88,&local_98,0,0,0,1,
                                PTR___type_metadata_for_Swift_String_100eac208,
                                PTR___type_metadata_for_Swift_String_100eac208);
            _swift_bridgeObjectRelease(param_2.unknown);
            puVar4 = &_OBJC_CLASS___NSScanner;
            _objc_allocWithZone();
            pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar15.bridgeObject);
            IVar6 = objc_stub::initWithString_((ID)puVar4,pNVar5);
            local_78 = 0;
            IVar6 = objc_stub::FUN_100c09a20(IVar6,&local_78);
            if ((IVar6 & 1) != 0) {
              *param_1 = local_78;
              lVar12 = 0;
              FUN_100317b10();
              uVar9 = 3;
              goto LAB_1003229bc;
            }
          }
        }
        goto LAB_1003228f8;
      }
      _swift_bridgeObjectRetain();
      FUN_100313548();
      if (uVar10 >> 0x3c < 0xf) {
        *param_1 = param_2.unknown;
        param_1[1] = puVar8;
        param_1[2] = uVar9;
        param_1[3] = uVar10;
        lVar12 = 0;
        FUN_100317b10();
        uVar9 = 2;
        goto LAB_10032293c;
      }
    }
  }
  else {
    if (uVar1 != 3) {
      if (uVar1 == 4) {
        puVar4 = &DAT_100eca910;
        _swift_allocObject(&DAT_100eca910,0x20,7);
        *(undefined8 *)(puVar4 + 0x10) = param_3;
        *(undefined8 *)(puVar4 + 0x18) = param_4;
        _swift_bridgeObjectRetain(param_2.unknown);
        FUN_100011128(param_3,param_4);
        FUN_100319778(lVar14,param_2.unknown,FUN_100323624,puVar4);
        FUN_10019ffdc(lVar14,lVar12,&DAT_100fbfcd8,&DAT_100c411b0);
        lVar14 = 0;
        FUN_1003187b8();
        lVar13 = lVar12;
        (**(code **)(*(long *)(lVar14 + -8) + 0x30))(lVar12,1,lVar14);
        if ((int)lVar13 == 1) goto LAB_1003228f8;
        FUN_1000523d8(lVar12,param_1,FUN_1003187b8);
        lVar12 = 0;
        FUN_100317b10();
        uVar9 = 1;
LAB_1003229bc:
        _swift_storeEnumTagMultiPayload(param_1,lVar12,uVar9);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar9 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_2.unknown);
        FUN_10031a3a8(lVar13);
        FUN_10019ffdc(lVar13,puVar11,&DAT_100fbfcd0,&DAT_100c411a8);
        lVar12 = 0;
        FUN_10031a030();
        puVar7 = puVar11;
        (**(code **)(*(long *)(lVar12 + -8) + 0x30))(puVar11,1,lVar12);
        if ((int)puVar7 != 1) {
          FUN_1000523d8(puVar11,param_1,FUN_10031a030);
          lVar12 = 0;
          FUN_100317b10();
          uVar9 = 0;
          goto LAB_1003229bc;
        }
LAB_1003228f8:
        lVar12 = 0;
        FUN_100317b10();
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
        uVar9 = 1;
      }
      (*UNRECOVERED_JUMPTABLE)(param_1,uVar9,1,lVar12);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
        return;
      }
      goto LAB_100322a40;
    }
    _swift_bridgeObjectRetain();
    FUN_100312ae4();
    if (param_2.unknown != (undefined *)0x0) {
      *param_1 = param_2.unknown;
      param_1[1] = puVar8;
      param_1[2] = uVar9;
      param_1[3] = uVar10;
      lVar12 = 0;
      FUN_100317b10();
      uVar9 = 4;
LAB_10032293c:
      _swift_storeEnumTagMultiPayload(param_1,lVar12,uVar9);
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
        uVar9 = 0;
        goto LAB_100322970;
      }
      goto LAB_100322a40;
    }
  }
  lVar12 = 0;
  FUN_100317b10();
  UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    uVar9 = 1;
LAB_100322970:
                    /* WARNING: Could not recover jumptable at 0x00010032298c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,uVar9,1,lVar12);
    return;
  }
LAB_100322a40:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100322a44 | FUN_100322a44 */

void FUN_100322a44(undefined8 param_1,code *param_2)

{
  long lVar1;
  long extraout_x8;
  undefined1 *puVar2;
  
  lVar1 = 0;
  FUN_100317b10();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != (code *)0x0) {
    FUN_100324158(param_1,puVar2);
    _swift_storeEnumTagMultiPayload(puVar2,lVar1,1);
    (*param_2)(puVar2);
    FUN_10009eff8(puVar2);
  }
  return;
}



/* Address: 0x100322ae4 | FUN_100322ae4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

String FUN_100322ae4(void)

{
  MD5 MVar1;
  NSArray *pNVar2;
  Data DVar3;
  long lVar4;
  undefined8 extraout_x1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  String SVar10;
  undefined1 auStack_90 [8];
  undefined *local_88;
  long local_80;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  MVar1 = CryptoKit::Insecure::MD5::typeMetadataAccessor();
  local_80 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = (undefined *)CryptoKit::Insecure::MD5Digest::typeMetadataAccessor();
  lVar5 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  FUN_100381740(0);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  local_70 = 0;
  DVar3.unknown =
       (undefined *)objc_stub::FUN_100bfdf40(&_OBJC_CLASS___NSKeyedArchiver,pNVar2,0,&local_70);
  if (DVar3.unknown == (undefined *)0x0) {
    lVar4 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(lVar4);
    DVar3.unknown = (undefined *)0x0;
    uVar9 = 0xf000000000000000;
    uVar8 = 0xc000000000000000;
  }
  else {
    uVar8 = extraout_x1;
    DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
    FUN_1001037b4(DVar3.unknown,uVar8);
    uVar9 = uVar8;
  }
  FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58);
  CryptoKit::HashFunction::init();
  FUN_1001037b4(DVar3.unknown,uVar8);
  FUN_100323324(DVar3.unknown,uVar8,puVar6);
  FUN_10003bf2c(DVar3.unknown,uVar8);
  CryptoKit::HashFunction::_finalize();
  (**(code **)(local_80 + 8))(puVar6,MVar1.unknown);
  lVar4 = lVar7;
  FUN_100322fe4();
  (**(code **)(lVar5 + 8))(lVar7,local_88);
  local_70 = lVar4;
  FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
  FUN_100310704();
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_bridgeObjectRelease(lVar4);
  FUN_10003bf18(DVar3.unknown,uVar9);
  FUN_10003bf2c(DVar3.unknown,uVar8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return SVar10;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100322d94 | FUN_100322d94 */

String FUN_100322d94(undefined8 param_1,undefined8 param_2)

{
  MD5 MVar1;
  Encoding EVar2;
  Encoding EVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar5;
  long lVar6;
  long lVar7;
  Encoding using;
  String SVar8;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long local_70;
  undefined8 uStack_68;
  
  MVar1 = CryptoKit::Insecure::MD5::typeMetadataAccessor();
  local_80 = *(long *)(MVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_88 = (undefined *)CryptoKit::Insecure::MD5Digest::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar7 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  EVar2 = Encoding::_typeMetadataAccessor();
  lVar5 = *(long *)(EVar2.unknown + -8);
  EVar3 = EVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  using.unknown = (undefined *)(lVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  local_70 = param_1;
  uStack_68 = param_2;
  Encoding::_get_utf8(EVar3);
  FUN_10030cce0();
  uVar4 = 0;
  EVar3.unknown = using.unknown;
  (extension_Foundation)::Swift::StringProtocol::_data(using,false);
  (**(code **)(lVar5 + 8))(using.unknown,EVar2.unknown);
  if (uVar4 >> 0x3c < 0xf) {
    FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                  PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58);
    CryptoKit::HashFunction::init();
    FUN_1001037b4(EVar3.unknown,uVar4);
    FUN_100323324(EVar3.unknown,uVar4,lVar6);
    FUN_10003bf18(EVar3.unknown,uVar4);
    CryptoKit::HashFunction::_finalize();
    (**(code **)(local_80 + 8))(lVar6,MVar1.unknown);
    lVar5 = lVar7;
    FUN_100322fe4();
    (**(code **)(local_90 + 8))(lVar7,puStack_88);
    local_70 = lVar5;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    FUN_100310704();
    SVar8 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                      ((String)(ZEXT816(0xe000000000000000) << 0x40));
    _swift_bridgeObjectRelease(lVar5);
    FUN_10003bf18(EVar3.unknown,uVar4);
  }
  else {
    SVar8 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  return SVar8;
}



/* Address: 0x100322fe4 | FUN_100322fe4 */

undefined * FUN_100322fe4(undefined8 param_1)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  code *pcVar4;
  MD5Digest MVar5;
  ulong uVar6;
  undefined *puVar7;
  long extraout_x8;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  String SVar11;
  char *local_a0;
  long local_70;
  ulong local_68;
  
  MVar5 = CryptoKit::Insecure::MD5Digest::typeMetadataAccessor();
  lVar9 = *(long *)(MVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar9 + 0x40),MVar5.unknown,PTR_typeMetadataAccessor_100ea9d68);
  FUN_100003a00(&DAT_100fbfcc8);
  uVar6 = Swift::Sequence::get_underestimatedCount();
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003075b8(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
  (**(code **)(lVar9 + 0x10))
            ((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,MVar5.unknown);
  Swift::Sequence::_makeIterator();
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100323324);
    (*pcVar4)();
  }
  uVar10 = local_68;
  if (uVar6 != 0) {
    uVar8 = *(ulong *)(local_70 + 0x10);
    do {
      if (uVar8 == uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100323314);
        (*pcVar4)();
      }
      if ((long)local_68 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100323318);
        (*pcVar4)();
      }
      if (*(ulong *)(local_70 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10032331c);
        (*pcVar4)();
      }
      uVar2 = *(undefined1 *)(local_70 + 0x20 + uVar10);
      puVar7 = &DAT_100fbeb40;
      FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
      puVar7[0x20] = uVar2;
      SVar11 = (extension_Foundation)::Swift::String::_init();
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        local_a0 = SVar11.str;
        FUN_1003075b8(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
        SVar11.bridgeObject = SVar11.bridgeObject;
        SVar11.str = local_a0;
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(String *)(puVar3 + uVar1 * 0x10 + 0x20) = SVar11;
      uVar10 = uVar10 + 1;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  uVar6 = *(ulong *)(local_70 + 0x10);
  if (uVar10 != uVar6) {
    do {
      if (uVar6 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100323320);
        (*pcVar4)();
      }
      uVar8 = uVar10 + 1;
      uVar2 = *(undefined1 *)(local_70 + 0x20 + uVar10);
      puVar7 = &DAT_100fbeb40;
      FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
      _swift_allocObject();
      *(undefined8 *)(puVar7 + 0x18) = 2;
      *(undefined8 *)(puVar7 + 0x10) = 1;
      *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      *(undefined **)(puVar7 + 0x40) =
           PTR___protocol_witness_table_for_Swift_UInt8___Swift_CVarArg_in_Swift_100eadd00;
      puVar7[0x20] = uVar2;
      SVar11 = (extension_Foundation)::Swift::String::_init();
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_1003075b8(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar6 + 1;
      *(String *)(puVar3 + uVar6 * 0x10 + 0x20) = SVar11;
      uVar6 = *(ulong *)(local_70 + 0x10);
      uVar10 = uVar8;
    } while (uVar8 != uVar6);
  }
  _swift_bridgeObjectRelease(local_70);
  return puVar3;
}



/* Address: 0x100323324 | FUN_100323324 */

void FUN_100323324(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_48 = (undefined1)param_1;
      uStack_47 = (undefined1)((ulong)param_1 >> 8);
      uStack_46 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_45 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x38);
      local_40 = (undefined1)param_2;
      local_3f = (undefined1)(param_2 >> 8);
      local_3e = (undefined1)(param_2 >> 0x10);
      local_3d = (undefined1)(param_2 >> 0x18);
      local_3c = (undefined1)(param_2 >> 0x20);
      local_3b = (undefined1)(param_2 >> 0x28);
      CryptoKit::Insecure::MD5::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                    PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58);
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_10032349c;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1003234cc);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) {
      CryptoKit::Insecure::MD5::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                    PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58);
      local_48 = 0;
      uStack_47 = 0;
      uStack_46 = 0;
      uStack_45 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      uStack_42 = 0;
      uStack_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_10032349c;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_1003234d0(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_10032349c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1003234d0 | FUN_1003234d0 */

void FUN_1003234d0(__DataStorage *param_1,long param_2,__DataStorage *param_3)

{
  code *pcVar1;
  UnsafeRawBufferPointer bufferPointer;
  __DataStorage *p_Var2;
  
  bufferPointer.unknown = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var2 = (__DataStorage *)0x0;
  if ((__DataStorage *)bufferPointer.unknown != (__DataStorage *)0x0) {
    p_Var2 = (__DataStorage *)
             Foundation::__DataStorage::get__offset(param_3,(__DataStorage *)bufferPointer.unknown);
    if (SBORROW8((long)param_1,(long)p_Var2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100323594);
      (*pcVar1)();
    }
    bufferPointer.unknown = bufferPointer.unknown + ((long)param_1 - (long)p_Var2);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    Foundation::__DataStorage::get__length(param_3,p_Var2);
    CryptoKit::Insecure::MD5::typeMetadataAccessor();
    FUN_100003a00(&DAT_100fbfcc0,PTR_typeMetadataAccessor_100ea9d60,
                  PTR_CryptoKit__CryptoKit__Insecure__MD5_>CryptoKit__HashFunction_100ea9d58);
    CryptoKit::HashFunction::update(bufferPointer);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100323590);
  (*pcVar1)();
}



/* Address: 0x100323594 | FUN_100323594 */

ulong FUN_100323594(ulong param_1)

{
  if (5 < param_1) {
    param_1 = 6;
  }
  return param_1;
}



/* Address: 0x1003235a4 | thunk_FUN_1003235a8 */

void thunk_FUN_1003235a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfcb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c410f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c410f0,&DAT_100eca8f0);
  DAT_100fbfcb8 = pTVar1;
  return;
}



/* Address: 0x1003235a8 | FUN_1003235a8 */

void FUN_1003235a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfcb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c410f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c410f0,&DAT_100eca8f0);
  DAT_100fbfcb8 = pTVar1;
  return;
}



/* Address: 0x1003235e8 | FUN_1003235e8 */

undefined1  [16] FUN_1003235e8(void)

{
  return ZEXT816(0x100eca8f0);
}



/* Address: 0x1003235f8 | FUN_1003235f8 */

void FUN_1003235f8(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100323624 | FUN_100323624 */

void FUN_100323624(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100322a44(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10032362c | FUN_10032362c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

char FUN_10032362c(_ArrayBuffer param_1)

{
  undefined8 *puVar1;
  _CocoaArrayWrapper _Var2;
  String SVar3;
  CharacterSet in;
  bool bVar4;
  URL UVar5;
  ulong uVar6;
  UTType UVar7;
  undefined *puVar8;
  long lVar9;
  __int64 _Var10;
  ID IVar11;
  NSString *pNVar12;
  _StringGuts _Var13;
  _ArrayBuffer _Var14;
  _ArrayBuffer _Var15;
  void *pvVar16;
  long extraout_x1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar18;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar19;
  ulong uVar20;
  long lVar21;
  long lVar22;
  char cVar23;
  long lVar24;
  long lVar25;
  undefined *puVar26;
  undefined8 *puVar27;
  String SVar28;
  long local_130;
  long local_128;
  CharacterSet local_120;
  long local_118;
  undefined *local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  long local_a8;
  undefined *local_98;
  undefined *puStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_110 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_118 = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_118 + 0x40));
  puVar26 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_120.unknown = puVar26;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar21 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar17 = (long)puVar26 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar26 = &DAT_100fbfce0;
  local_128 = lVar17;
  FUN_1000037f0(&DAT_100fbfce0,&DAT_100c411b8);
  local_100 = puVar26;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar26 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar17 - extraout_x8_01;
  puVar26 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar26 + -8) + 0x40));
  lVar22 = lVar17 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar22 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar25 - extraout_x12_00;
  local_c0 = (undefined *)UniformTypeIdentifiers::UTType::typeMetadataAccessor();
  local_b0 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  puVar26 = (undefined *)(lVar24 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_c8 = (long)puVar26 - extraout_x12_01;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    local_a8 = *(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var2.unknown = param_1.unknown;
    }
    local_a8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_108 = lVar22;
  local_f8 = UVar5.unknown;
  local_f0 = lVar24;
  local_e8 = lVar21;
  local_e0 = lVar25;
  local_d8 = lVar17;
  local_b8 = puVar26;
  if (local_a8 != 0) {
    uVar20 = 0;
    do {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100324044);
          (*pcVar19)();
        }
        uVar6 = *(ulong *)(param_1.unknown + uVar20 * 8 + 0x20);
        lVar17 = _TtC9PasteCore14PasteboardItem::types;
      }
      else {
        uVar6 = uVar20;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar20,param_1);
        lVar17 = _TtC9PasteCore14PasteboardItem::types;
      }
      _TtC9PasteCore14PasteboardItem::types = lVar17;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x10032397c);
        (*pcVar19)();
      }
      lVar21 = uVar20 + 1;
      _swift_beginAccess(uVar6 + lVar17,auStack_88,0,0);
      lVar17 = *(long *)(uVar6 + lVar17);
      _swift_bridgeObjectRetain(lVar17);
      uVar6 = *(ulong *)(lVar17 + 0x10);
      lVar22 = *(long *)(puVar8 + 0x10);
      if (SCARRY8(lVar22,uVar6)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100324048);
        (*pcVar19)();
      }
      puVar26 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar26 == 0) ||
         (uVar18 = *(ulong *)(puVar8 + 0x18) >> 1, (long)uVar18 < (long)(lVar22 + uVar6))) {
        FUN_10037f834();
        uVar18 = *(ulong *)(puVar26 + 0x18) >> 1;
        puVar8 = puVar26;
      }
      if (*(long *)(lVar17 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar17);
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10032404c);
          (*pcVar19)();
        }
      }
      else {
        if (uVar18 - *(long *)(puVar8 + 0x10) < uVar6) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1003240ac);
          (*pcVar19)();
        }
        _swift_arrayInitWithCopy
                  (puVar8 + *(long *)(puVar8 + 0x10) * 0x10 + 0x20,lVar17 + 0x20,uVar6,
                   PTR___type_metadata_for_Swift_String_100eac208);
        _swift_bridgeObjectRelease(lVar17);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar8 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x1003240c0);
            (*pcVar19)();
          }
          *(ulong *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + uVar6;
        }
      }
      uVar20 = uVar20 + 1;
    } while (lVar21 != local_a8);
  }
  UVar7.unknown = local_b8;
  if (DAT_100fbfce8 != -1) {
    _swift_once(&DAT_100fbfce8,FUN_100322124);
  }
  lVar17 = DAT_100fbfcf0;
  uVar20 = *(ulong *)(DAT_100fbfcf0 + 0x10);
  if (uVar20 == 0) {
    _swift_bridgeObjectRelease(puVar8);
    cVar23 = '\0';
  }
  else {
    uVar6 = 0;
    lVar21 = *(long *)(puVar8 + 0x10);
    local_130 = DAT_100fbfcf0 +
                ((ulong)*(byte *)(local_b0 + 0x50) + 0x20 &
                ((ulong)*(byte *)(local_b0 + 0x50) ^ 0xffffffffffffffff));
    local_d0 = (undefined8 *)(puVar8 + 0x28);
    do {
      lVar24 = local_b0;
      puVar26 = local_c0;
      lVar22 = local_c8;
      if (*(ulong *)(lVar17 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100324100);
        (*pcVar19)();
      }
      (**(code **)(local_b0 + 0x10))
                (local_c8,local_130 + *(long *)(local_b0 + 0x48) * uVar6,local_c0);
      uVar6 = uVar6 + 1;
      (**(code **)(lVar24 + 0x20))(UVar7.unknown,lVar22,puVar26);
      SVar28 = UniformTypeIdentifiers::UTType::get_identifier(UVar7);
      uVar18 = 0xffffffffffffffff;
      puVar27 = local_d0;
LAB_100323a34:
      UVar7.unknown = local_b8;
      if (uVar18 - lVar21 != -1) {
        uVar18 = uVar18 + 1;
        if (*(ulong *)(puVar8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x1003240b0);
          (*pcVar19)();
        }
        puVar1 = puVar27 + -1;
        _Var13.unknown = (undefined *)*puVar27;
        SVar3.bridgeObject = _Var13.unknown;
        SVar3.str = (undefined *)*puVar1;
        if (SVar28 != SVar3) goto code_r0x000100323a60;
        goto LAB_100323ab4;
      }
      (**(code **)(local_b0 + 8))(local_b8,local_c0);
      _swift_bridgeObjectRelease(SVar28.bridgeObject);
    } while (uVar6 != uVar20);
    _swift_bridgeObjectRelease(puVar8);
LAB_100323b9c:
    cVar23 = '\0';
  }
LAB_100323ba0:
  _swift_bridgeObjectRelease(param_1.unknown);
LAB_100323ba8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return cVar23;
code_r0x000100323a60:
  puVar27 = puVar27 + 2;
  bVar4 = Swift::_stringCompareWithSmolCheck
                    ((undefined *)*puVar1,_Var13,(_StringComparisonResult)(__int8)SVar28.str);
  if (!bVar4) goto LAB_100323a34;
LAB_100323ab4:
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  _swift_bridgeObjectRelease(puVar8);
  if (DAT_100fbfcf8 != -1) {
    _Var13.unknown = (undefined *)0x0;
    _swift_once(&DAT_100fbfcf8);
  }
  puVar26 = local_b8;
  lVar17 = DAT_100fbfd00;
  if (*(long *)(DAT_100fbfd00 + 0x10) == 0) {
LAB_100323b88:
    (**(code **)(local_b0 + 8))(puVar26,local_c0);
    goto LAB_100323b9c;
  }
  _swift_bridgeObjectRetain(DAT_100fbfd00);
  puVar8 = puVar26;
  FUN_100380724();
  if (((ulong)_Var13.unknown & 1) == 0) {
    _swift_bridgeObjectRelease(lVar17);
    goto LAB_100323b88;
  }
  cVar23 = puVar8[*(long *)(lVar17 + 0x38)];
  _swift_bridgeObjectRelease(lVar17);
  _Var14.unknown = local_c0;
  (**(code **)(local_b0 + 8))(puVar26);
  lVar21 = local_e8;
  lVar17 = local_f0;
  puVar26 = local_f8;
  if (cVar23 == '\x05') {
    if (local_a8 == 0) {
      pcVar19 = *(code **)(local_e8 + 0x38);
      (*pcVar19)(local_f0,1,1,local_f8);
    }
    else {
      if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x10032413c);
          (*pcVar19)();
        }
      }
      else {
        Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
      }
      lVar17 = local_f0;
      FUN_10037ce0c(local_f0);
      pcVar19 = *(code **)(local_e8 + 0x38);
      lVar21 = local_e8;
    }
    lVar24 = local_e0;
    (*pcVar19)(local_e0,1,1,puVar26);
    lVar25 = local_d8;
    lVar22 = (long)*(int *)(local_100 + 0x30);
    FUN_100011090(lVar17,local_d8,&DAT_100fc1a40,&DAT_100c40660);
    FUN_100011090(lVar24,lVar25 + lVar22,&DAT_100fc1a40,&DAT_100c40660);
    pcVar19 = *(code **)(lVar21 + 0x30);
    lVar9 = lVar25;
    (*pcVar19)(lVar25,1,puVar26);
    lVar21 = local_108;
    if ((int)lVar9 == 1) {
      FUN_100005808(lVar24,&DAT_100fc1a40,&DAT_100c40660);
      lVar24 = local_d8;
      FUN_100005808(lVar17,&DAT_100fc1a40,&DAT_100c40660);
      lVar22 = lVar24 + lVar22;
      (*pcVar19)(lVar22,1,puVar26);
      if ((int)lVar22 != 1) goto LAB_100323d64;
      _Var15.unknown = &DAT_100fc1a40;
      FUN_100005808(lVar24,&DAT_100fc1a40,&DAT_100c40660);
      cVar23 = '\x05';
      if (local_a8 == 0) goto LAB_100323ba0;
    }
    else {
      FUN_100011090(lVar25,local_108,&DAT_100fc1a40,&DAT_100c40660);
      lVar17 = lVar25 + lVar22;
      (*pcVar19)(lVar17,1,puVar26);
      lVar9 = local_e8;
      lVar24 = local_128;
      if ((int)lVar17 == 1) {
        FUN_100005808(local_e0,&DAT_100fc1a40,&DAT_100c40660);
        lVar24 = local_d8;
        FUN_100005808(local_f0,&DAT_100fc1a40,&DAT_100c40660);
        (**(code **)(local_e8 + 8))(lVar21,puVar26);
LAB_100323d64:
        _Var15.unknown = &DAT_100fbfce0;
        FUN_100005808(lVar24,&DAT_100fbfce0,&DAT_100c411b8);
        if (local_a8 == 0) goto LAB_10032409c;
        cVar23 = '\x04';
      }
      else {
        (**(code **)(local_e8 + 0x20))(local_128,lVar25 + lVar22,puVar26);
        puVar8 = &DAT_100fbfd08;
        FUN_100003a00(&DAT_100fbfd08,PTR_typeMetadataAccessor_100ea71a8,
                      PTR_Foundation__Foundation__URL_>Swift__Equatable_100ea71c8);
        bVar4 = Swift::Equatable::___infix(lVar21,lVar24,puVar26,puVar8);
        pcVar19 = *(code **)(lVar9 + 8);
        (*pcVar19)(lVar24,puVar26);
        _Var15.unknown = &DAT_100fc1a40;
        FUN_100005808(local_e0,&DAT_100fc1a40,&DAT_100c40660);
        FUN_100005808(local_f0,&DAT_100fc1a40,&DAT_100c40660);
        (*pcVar19)(lVar21,puVar26);
        FUN_100005808(lVar25,&DAT_100fc1a40,&DAT_100c40660);
        cVar23 = '\x04';
        if (bVar4) {
          cVar23 = '\x05';
        }
        if (local_a8 == 0) {
          if (bVar4) {
            cVar23 = '\x05';
            goto LAB_100323ba0;
          }
          goto LAB_10032409c;
        }
      }
    }
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100324140);
        (*pcVar19)();
      }
      uVar20 = *(ulong *)(param_1.unknown + 0x20);
    }
    else {
      uVar20 = 0;
      _Var15.unknown = param_1.unknown;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
    }
    FUN_10037c9a8();
    _Var14.unknown = _Var15.unknown;
    if (_Var15.unknown != (undefined *)0x0) {
      FUN_100321f48();
      _swift_bridgeObjectRelease(_Var15.unknown);
      if ((uVar20 & 1) != 0) {
        cVar23 = '\x02';
        goto LAB_100323ba0;
      }
    }
  }
  if (cVar23 != '\x04') goto LAB_100323ba0;
  if (local_a8 != 0) {
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      if (*(long *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100324154);
        (*pcVar19)();
      }
    }
    else {
      _Var14.unknown = param_1.unknown;
      Swift::_ArrayBuffer::__getElementSlowPath(0,param_1);
    }
    _swift_bridgeObjectRelease();
    FUN_10037c9a8();
    in.unknown = local_120.unknown;
    if (_Var14.unknown == (undefined *)0x0) {
      cVar23 = '\x04';
      goto LAB_100323ba8;
    }
    local_98 = param_1.unknown;
    puStack_90 = _Var14.unknown;
    Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)0x0);
    FUN_10030cce0();
    SVar28 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    pvVar16 = SVar28.bridgeObject;
    (**(code **)(local_118 + 8))(in.unknown,local_110);
    uVar20 = (ulong)SVar28.str & 0xffffffffffff;
    if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
      uVar20 = (ulong)pvVar16 >> 0x38 & 0xf;
    }
    param_1.unknown = _Var14.unknown;
    if (uVar20 != 0) {
      _swift_bridgeObjectRetain(pvVar16);
      _Var10 = Swift::String::UTF16View::get_count((UTF16View)SVar28.str);
      _swift_bridgeObjectRelease(pvVar16);
      puVar26 = &_OBJC_CLASS___NSDataDetector;
      _objc_allocWithZone();
      local_98 = (undefined *)0x0;
      IVar11 = objc_stub::FUN_100c050a0((ID)puVar26,0x20,&local_98);
      if (IVar11 != 0) {
        pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(pvVar16);
        IVar11 = objc_stub::firstMatchInString_options_range_(IVar11,pNVar12,0,0,_Var10);
        if (IVar11 != 0) {
          IVar11 = objc_stub::range(IVar11);
          _swift_bridgeObjectRelease(_Var14.unknown);
          if (IVar11 == 0) {
            cVar23 = '\x04';
            if (extraout_x1 != _Var10) {
              cVar23 = '\x05';
            }
          }
          else {
            cVar23 = '\x05';
          }
          goto LAB_100323ba8;
        }
        goto LAB_10032409c;
      }
      puVar26 = local_98;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(puVar26);
    }
    _swift_bridgeObjectRelease(pvVar16);
  }
LAB_10032409c:
  _swift_bridgeObjectRelease(param_1.unknown);
  cVar23 = '\x04';
  goto LAB_100323ba8;
}



/* Address: 0x100324158 | FUN_100324158 */

undefined8 FUN_100324158(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003187b8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10032419c | FUN_10032419c */

undefined8 * FUN_10032419c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1003241e8 | FUN_1003241e8 */

undefined8 * FUN_1003241e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  return param_1;
}



/* Address: 0x100324254 | FUN_100324254 */

void FUN_100324254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100324268 | FUN_100324268 */

undefined8 * FUN_100324268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1003242bc | FUN_1003242bc */

int FUN_1003242bc(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100324318 | FUN_100324318 */

void FUN_100324318(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x100324378 | FUN_100324378 */

undefined1  [16] FUN_100324378(void)

{
  return ZEXT816(0x100eca9e8);
}



/* Address: 0x100324388 | FUN_100324388 */

void FUN_100324388(long param_1)

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
  
  puVar1 = &DAT_100fbfd40;
  FUN_1000037f0(&DAT_100fbfd40,&DAT_100c41240);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100324964();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encodeIfPresent(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[2],*(undefined1 *)(unaff_x20 + 3),&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (unaff_x20[4],*(undefined1 *)(unaff_x20 + 5),&local_53,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1003244dc | FUN_1003244dc */

undefined1  [16] FUN_1003244dc(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x7974696361706163;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x646f43726f6c6f63;
  }
  puVar1 = &DAT_e800000000000000;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xe900000000000065;
  }
  puVar2 = &DAT_65707974;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x100324534 | FUN_100324534 */

void FUN_100324534(undefined1 *param_1,undefined1 param_2)

{
  FUN_10032469c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100324558 | FUN_100324558 */

String FUN_100324558(void)

{
  String SVar1;
  
  FUN_100324964();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100324580 | FUN_100324580 */

String FUN_100324580(void)

{
  String SVar1;
  
  FUN_100324964();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1003245a8 | FUN_1003245a8 */

void FUN_1003245a8(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1003247b8(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x1003245e8 | FUN_1003245e8 */

void FUN_1003245e8(void)

{
  FUN_100324388();
  return;
}



/* Address: 0x1003245fc | FUN_1003245fc */

undefined1  [16] FUN_1003245fc(long *param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if ((undefined1 *)param_1[1] == (undefined1 *)0x0) {
LAB_100324654:
    uVar2 = 0;
    uVar3 = 0x1e;
    lVar4 = 0x18;
    lVar5 = 0x10;
  }
  else {
    if (*param_1 == 0x6472616f626e6970 && (undefined1 *)param_1[1] == &DAT_e800000000000000) {
      FUN_1002d4660(param_1);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6472616f626e6970,(_StringGuts)0xe800000000000000,
                         (_StringComparisonResult)(__int8)*param_1);
      FUN_1002d4660(param_1);
      if (!bVar1) goto LAB_100324654;
    }
    uVar3 = 0;
    uVar2 = 1;
    lVar4 = 0x28;
    lVar5 = 0x20;
  }
  if (*(char *)((long)param_1 + lVar4) != '\x01') {
    uVar3 = *(undefined8 *)((long)param_1 + lVar5);
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x10032469c | FUN_10032469c */

undefined4 FUN_10032469c(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_65707974 || param_2 != &DAT_e400000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != (undefined1 *)0x7974696361706163) || (param_2 != &DAT_e800000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7974696361706163,(_StringGuts)0xe800000000000000,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x646f43726f6c6f63) &&
           (param_2 == (undefined1 *)0xe900000000000065)) {
          _swift_bridgeObjectRelease(0xe900000000000065);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x646f43726f6c6f63,(_StringGuts)0xe900000000000065,expecting
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



/* Address: 0x1003247b8 | FUN_1003247b8 */

/* WARNING: Removing unreachable block (ram,0x0001003248e0) */
/* WARNING: Removing unreachable block (ram,0x0001003248e8) */

void FUN_1003247b8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fbfd30;
  FUN_1000037f0(&DAT_100fbfd30,&DAT_100c41238);
  lVar8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100324964();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    puVar5 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_52 = 1;
    puVar3 = &local_52;
    puVar6 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    puVar4 = &local_53;
    puVar7 = puVar1;
    local_68 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar8 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = puVar2;
    param_1[1] = puVar5;
    param_1[2] = local_68;
    *(char *)(param_1 + 3) = (char)puVar6;
    param_1[4] = puVar4;
    *(char *)(param_1 + 5) = (char)puVar7;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100324964 | FUN_100324964 */

void FUN_100324964(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4130c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4130c,&DAT_100ecaa88);
  DAT_100fbfd38 = pTVar1;
  return;
}



/* Address: 0x1003249a4 | FUN_1003249a4 */

undefined1  [16] FUN_1003249a4(void)

{
  return ZEXT816(0x100ecaa88);
}



/* Address: 0x1003249b4 | thunk_FUN_1003249b8 */

void thunk_FUN_1003249b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c412e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c412e4,&DAT_100ecaa88);
  DAT_100fbfd48 = pTVar1;
  return;
}



/* Address: 0x1003249b8 | FUN_1003249b8 */

void FUN_1003249b8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c412e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c412e4,&DAT_100ecaa88);
  DAT_100fbfd48 = pTVar1;
  return;
}



/* Address: 0x1003249f8 | thunk_FUN_1003249fc */

void thunk_FUN_1003249fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4127c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4127c,&DAT_100ecaa88);
  DAT_100fbfd50 = pTVar1;
  return;
}



/* Address: 0x1003249fc | FUN_1003249fc */

void FUN_1003249fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4127c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4127c,&DAT_100ecaa88);
  DAT_100fbfd50 = pTVar1;
  return;
}



/* Address: 0x100324a3c | thunk_FUN_100324a40 */

void thunk_FUN_100324a40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41254;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41254,&DAT_100ecaa88);
  DAT_100fbfd58 = pTVar1;
  return;
}



/* Address: 0x100324a40 | FUN_100324a40 */

void FUN_100324a40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbfd58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c41254;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c41254,&DAT_100ecaa88);
  DAT_100fbfd58 = pTVar1;
  return;
}



/* Address: 0x100324a80 | FUN_100324a80 */

undefined1 FUN_100324a80(void)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 8;
  FUN_100324c28();
  if (uVar2 < 8) {
    return (&DAT_100fbfd88)[uVar2];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100324ab4);
  (*pcVar1)();
}



/* Address: 0x100324ab4 | FUN_100324ab4 */

bool FUN_100324ab4(long param_1,char param_2,long param_3,char param_4)

{
  return param_1 == param_3 && (param_2 == '\x01') != (param_4 != '\x01');
}



/* Address: 0x100324adc | FUN_100324adc */

bool FUN_100324adc(long *param_1,long *param_2)

{
  return *param_1 == *param_2 && ((char)param_1[1] == '\x01') != ((char)param_2[1] != '\x01');
}



/* Address: 0x100324b0c | FUN_100324b0c */

void FUN_100324b0c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100324b14 | thunk_FUN_100324cb0 */

undefined8 thunk_FUN_100324cb0(ulong param_1)

{
  uint uVar1;
  
  if ((long)param_1 < 0xff52cc64) {
    if ((long)param_1 < 0xb663e0) {
      if (param_1 == 0x52cc64) {
        return 3;
      }
      if (param_1 == 0x62a9f5) {
        return 4;
      }
      if (param_1 == 0x8f8f93) {
        return 7;
      }
      return 0;
    }
    if (0xfa9213 < (long)param_1) {
      if (param_1 == 0xfa9214) {
        return 1;
      }
      if (param_1 == 0xfab700) {
        return 2;
      }
      return 0;
    }
    if (param_1 == 0xb663e0) {
      return 5;
    }
    uVar1 = 0xfa506f;
  }
  else {
    if ((long)param_1 < 0xffb663e0) {
      if (param_1 == 0xff52cc64) {
        return 3;
      }
      if (param_1 == 0xff62a9f5) {
        return 4;
      }
      if (param_1 == 0xff8f8f93) {
        return 7;
      }
      return 0;
    }
    if (0xfffa9213 < (long)param_1) {
      if (param_1 == 0xfffab700) {
        return 2;
      }
      if (param_1 == 0xfffa9214) {
        return 1;
      }
      return 0;
    }
    if (param_1 == 0xffb663e0) {
      return 5;
    }
    uVar1 = 0xfffa506f;
  }
  if (param_1 == uVar1) {
    return 6;
  }
  return 0;
}



/* Address: 0x100324b18 | FUN_100324b18 */

void FUN_100324b18(ulong param_1)

{
  undefined8 *unaff_x20;
  
  *unaff_x20 = *(undefined8 *)(&DAT_100c41520 + (param_1 & 0xff) * 8);
  return;
}



/* Address: 0x100324b30 | FUN_100324b30 */

undefined1  [16] FUN_100324b30(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  *param_1 = unaff_x20;
  uVar1 = (undefined1)*unaff_x20;
  FUN_100324cb0();
  *(undefined1 *)(param_1 + 1) = uVar1;
  auVar2._8_8_ = param_1 + 1;
  auVar2._0_8_ = FUN_100324b68;
  return auVar2;
}



/* Address: 0x100324b68 | FUN_100324b68 */

void FUN_100324b68(undefined8 *param_1)

{
  *(undefined8 *)*param_1 = *(undefined8 *)(&DAT_100c41520 + (ulong)*(byte *)(param_1 + 1) * 8);
  return;
}



/* Address: 0x100324b84 | FUN_100324b84 */

bool FUN_100324b84(long param_1,long param_2)

{
  return param_1 == param_2;
}


