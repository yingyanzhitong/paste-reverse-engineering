/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100054a2c | FUN_100054a2c */

void FUN_100054a2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_100359900(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 8))(param_4,param_5,local_50,lStack_48);
  *param_1 = param_4;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100054aac | FUN_100054aac */

void FUN_100054aac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1003595f8(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x20))(param_4,param_5,local_50,lStack_48);
  *param_1 = param_4;
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x100054b2c | FUN_100054b2c */

undefined1  [16] FUN_100054b2c(undefined8 *param_1,char *param_2,void *param_3)

{
  uint uVar1;
  bool bVar2;
  char *pcVar3;
  _StringComparisonResult expecting;
  undefined8 uVar4;
  undefined8 uVar5;
  String SVar6;
  undefined1 auVar7 [16];
  
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 3) {
    if (((ulong)param_1 & 0xff) == 0) {
      FUN_10020c714();
    }
    else {
      if (uVar1 != 1) {
        uVar4 = 0;
        uVar5 = 0;
        goto LAB_100054bf8;
      }
      SVar6.bridgeObject = param_3;
      SVar6.str = param_2;
      SVar6 = Swift::String::lowercased(SVar6);
      param_1 = SVar6.bridgeObject;
      pcVar3 = SVar6.str;
      if ((pcVar3 != (char *)0x6b6e696c) || (param_1 != (undefined8 *)&DAT_e400000000000000)) {
        expecting.value = SVar6.str._0_1_;
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6b6e696c,(_StringGuts)0xe400000000000000,expecting);
        if (!bVar2) {
          if (((pcVar3 == (char *)0x6567616d69) && (param_1 == (undefined8 *)&DAT_e500000000000000))
             || (bVar2 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)0x6567616d69,(_StringGuts)0xe500000000000000,
                                    expecting), bVar2)) {
            _swift_bridgeObjectRelease();
            FUN_10020d6a4();
          }
          else if (((pcVar3 == (char *)0x726f6c6f63) &&
                   (param_1 == (undefined8 *)&DAT_e500000000000000)) ||
                  (bVar2 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0x726f6c6f63,(_StringGuts)0xe500000000000000,
                                      expecting), bVar2)) {
            _swift_bridgeObjectRelease();
            FUN_10020d4f4();
          }
          else if (((pcVar3 == (char *)0x74786574) &&
                   (param_1 == (undefined8 *)&DAT_e400000000000000)) ||
                  (bVar2 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0x74786574,(_StringGuts)0xe400000000000000,
                                      expecting), bVar2)) {
            _swift_bridgeObjectRelease();
            FUN_10020d9c8();
          }
          else if (((pcVar3 == (char *)0x656c6966) &&
                   (param_1 == (undefined8 *)&DAT_e400000000000000)) ||
                  (bVar2 = Swift::_stringCompareWithSmolCheck
                                     ((_StringGuts)0x656c6966,(_StringGuts)0xe400000000000000,
                                      expecting), bVar2)) {
            _swift_bridgeObjectRelease();
            FUN_10020cdd0();
          }
          else if ((pcVar3 == (char *)0x6e776f6e6b6e75) &&
                  (param_1 == (undefined8 *)&DAT_e700000000000000)) {
            _swift_bridgeObjectRelease();
            FUN_10020d798();
          }
          else {
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6e776f6e6b6e75,(_StringGuts)0xe700000000000000,
                               expecting);
            _swift_bridgeObjectRelease();
            if (bVar2) {
              FUN_10020d798();
            }
            else {
              FUN_10020cf40();
            }
          }
          goto LAB_100054bec;
        }
      }
      _swift_bridgeObjectRelease();
      FUN_10020d3b0();
    }
  }
  else if (uVar1 == 3) {
    FUN_10020c934();
  }
  else if (uVar1 == 4) {
    FUN_10020d434();
  }
  else {
    FUN_10020cc48();
  }
LAB_100054bec:
  uVar4 = *param_1;
  uVar5 = param_1[1];
  _swift_bridgeObjectRetain(uVar5);
LAB_100054bf8:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x100054da0 | FUN_100054da0 */

void FUN_100054da0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100054aac(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100054dac | FUN_100054dac */

void FUN_100054dac(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100054a2c(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100054db8 | FUN_100054db8 */

void FUN_100054db8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100054988(param_1,*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100054dc4 | FUN_100054dc4 */

undefined8 FUN_100054dc4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c25d00;
  _swift_getKeyPath(&DAT_100c25d00);
  puVar2 = &DAT_100c25d28;
  _swift_getKeyPath(&DAT_100c25d28);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x100054e34 | FUN_100054e34 */

void FUN_100054e34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_38;
  
  puVar1 = &DAT_100c25d98;
  _swift_getKeyPath(&DAT_100c25d98);
  puVar2 = &DAT_100c25dc0;
  _swift_getKeyPath(&DAT_100c25dc0);
  Combine::Published::_get_subscript(&local_60);
  _swift_release(puVar1);
  _swift_release(puVar2);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[3] = uStack_48;
  param_1[2] = uStack_50;
  param_1[4] = local_40;
  *(undefined1 *)(param_1 + 5) = local_38;
  return;
}



/* Address: 0x100054ebc | FUN_100054ebc */

void FUN_100054ebc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &DAT_100c25d98;
  _swift_getKeyPath(&DAT_100c25d98);
  puVar2 = &DAT_100c25dc0;
  _swift_getKeyPath(&DAT_100c25dc0);
  Combine::Published::_get_subscript(param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100054f24 | FUN_100054f24 */

void FUN_100054f24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Published *pPVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_90;
  Published *pPStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar1 = *param_1;
  pPVar3 = (Published *)param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar8 = param_1[4];
  uVar9 = *param_2;
  uVar5 = *(undefined1 *)(param_1 + 5);
  puVar6 = &DAT_100c25d98;
  _swift_getKeyPath(&DAT_100c25d98);
  puVar7 = &DAT_100c25dc0;
  _swift_getKeyPath(&DAT_100c25dc0);
  local_90 = uVar1;
  pPStack_88 = pPVar3;
  local_80 = uVar2;
  uStack_78 = uVar4;
  local_70 = uVar8;
  local_68 = uVar5;
  FUN_1000558d8(uVar1,pPVar3,uVar2,uVar4,uVar8,uVar5);
  _swift_retain(uVar9);
  Combine::Published::_set_subscript(pPVar3,&local_90,uVar9,puVar6,puVar7);
  return;
}



/* Address: 0x100054fe0 | FUN_100054fe0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010005520c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100054fe0(ulong param_1)

{
  long lVar1;
  Publisher PVar2;
  Publisher to;
  undefined *puVar3;
  Published PVar4;
  long extraout_x8;
  undefined *puVar5;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long unaff_x20;
  Published *pPVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined *local_f0;
  long local_e8;
  long local_e0;
  undefined *local_d8;
  Published local_d0;
  long local_c8;
  long local_c0;
  undefined *local_b8;
  Publisher local_b0;
  Publisher local_a8;
  long local_a0;
  undefined *puStack_98;
  ulong local_90;
  undefined8 uStack_88;
  Published *local_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  undefined1 uStack_68;
  
  puVar3 = &DAT_100fa9068;
  FUN_1000037f0(&DAT_100fa9068,&DAT_100c25d48);
  local_a0 = *(long *)(puVar3 + -8);
  puStack_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar5 = (undefined *)((long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_b0.unknown = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar5 = puVar5 + -extraout_x12;
  puVar3 = &DAT_100fa9070;
  local_a8.unknown = puVar5;
  FUN_1000037f0(&DAT_100fa9070,&DAT_100c25d50);
  local_e0 = *(long *)(puVar3 + -8);
  local_d8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - extraout_x8_00;
  puVar3 = &DAT_100fa9078;
  local_e8 = lVar6;
  FUN_1000037f0(&DAT_100fa9078,&DAT_100c25d58);
  local_c0 = *(long *)(puVar3 + -8);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  puVar3 = &DAT_100fa9080;
  local_c8 = lVar6;
  FUN_1000037f0(&DAT_100fa9080,&DAT_100c25d60);
  lVar8 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = _TtC5Paste16SidebarViewModel::_selectedItem;
  lVar6 = lVar6 - extraout_x8_02;
  uStack_6f = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_77 = 0;
  local_80 = (Published *)0x0;
  puVar5 = &DAT_100fa8fd8;
  FUN_1000037f0(&DAT_100fa8fd8,&DAT_100c25cc0);
  local_f0 = puVar5;
  Combine::Published::init(lVar6);
  local_d0.unknown = puVar3;
  (**(code **)(lVar8 + 0x20))(unaff_x20 + lVar1,lVar6,puVar3);
  lVar1 = _TtC5Paste16SidebarViewModel::router;
  puVar3 = &DAT_100c25d68;
  _swift_getKeyPath();
  puVar5 = &DAT_100fa7a90;
  FUN_1000037f0(&DAT_100fa7a90,&DAT_100c25d90);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _TtC5Paste16SidebarViewModel::_items;
  local_90 = param_1;
  _swift_bridgeObjectRetain(param_1);
  puVar3 = &DAT_100fa79c8;
  FUN_1000037f0(&DAT_100fa79c8,&DAT_100c24830);
  Combine::Published::init(unaff_x20 + lVar1,puVar3,puVar3);
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar11 = 0;
    uVar12 = 0;
    pPVar7 = (Published *)0x0;
    uVar9 = 0;
    uVar10 = 0;
    uVar13 = 0;
  }
  else {
    uVar11 = (ulong)*(byte *)(param_1 + 0x20);
    uVar12 = *(undefined8 *)(param_1 + 0x28);
    pPVar7 = *(Published **)(param_1 + 0x30);
    uVar9 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    uVar13 = *(undefined1 *)(param_1 + 0x48);
    _swift_bridgeObjectRetain(pPVar7);
    _swift_bridgeObjectRetain(uVar10);
  }
  _swift_bridgeObjectRelease(param_1);
  _swift_getKeyPath(&DAT_100c25d98);
  _swift_getKeyPath(&DAT_100c25dc0);
  uStack_78 = (undefined1)uVar9;
  local_77 = (undefined7)((ulong)uVar9 >> 8);
  uStack_70 = (undefined1)uVar10;
  uStack_6f = (undefined7)((ulong)uVar10 >> 8);
  local_90 = uVar11;
  uStack_88 = uVar12;
  local_80 = pPVar7;
  uStack_68 = uVar13;
  _swift_retain();
  Combine::Published::_set_subscript(pPVar7,&local_90);
  _swift_beginAccess(unaff_x20 + lVar1,&local_90,0x21,0);
  PVar4.unknown = &DAT_100fa9088;
  FUN_1000037f0(&DAT_100fa9088,&DAT_100c25de0);
  lVar1 = local_e8;
  Combine::Published::_get_projectedValue(PVar4);
  _swift_endAccess(&local_90);
  puVar3 = &DAT_100eb1f38;
  _swift_allocObject(&DAT_100eb1f38,0x18,7);
  _swift_weakInit(puVar3 + 0x10);
  FUN_100016eac(&DAT_100fa9090,&DAT_100fa9070,&DAT_100c25d50,
                PTR__Combine__Publisher_>Combine__Publisher_100ea98d0);
  lVar6 = local_c8;
  puVar5 = local_d8;
  (extension_Combine)::Combine::Publisher::_compactMap();
  _swift_release(puVar3);
  (**(code **)(local_e0 + 8))(lVar1,puVar5);
  lVar1 = _TtC5Paste16SidebarViewModel::_selectedItem;
  _swift_beginAccess(unaff_x20 + _TtC5Paste16SidebarViewModel::_selectedItem,&local_90,0x21,0);
  to.unknown = local_a8.unknown;
  Combine::Published::_get_projectedValue(local_d0);
  _swift_endAccess(&local_90);
  FUN_100016eac(&DAT_100fa9098,&DAT_100fa9078,&DAT_100c25d58,
                PTR_Combine__Combine__Publishers__CompactMap<undefined,undefined>_>Combine__Publisher_100ea9628
               );
  puVar3 = local_b8;
  (extension_Combine)::Combine::Publisher::_assign(to);
  puVar5 = puStack_98;
  lVar8 = local_a0;
  PVar2.unknown = local_b0.unknown;
  (**(code **)(local_a0 + 0x10))(local_b0.unknown,to.unknown,puStack_98);
  _swift_beginAccess(unaff_x20 + lVar1,&local_90,0x21,0);
  Combine::Published::_set_projectedValue((Published *)(unaff_x20 + lVar1),PVar2);
  _swift_endAccess(&local_90);
  (**(code **)(lVar8 + 8))(to.unknown,puVar5);
  (**(code **)(local_c0 + 8))(lVar6,puVar3);
  return;
}



/* Address: 0x100055480 | FUN_100055480 */

void FUN_100055480(ulong *param_1,long *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  code *pcVar3;
  MainActor *this;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 uVar17;
  ulong uVar18;
  MainActor *pMVar19;
  undefined1 *puVar20;
  ulong uVar21;
  ulong uVar22;
  byte local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  long local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  lVar13 = *param_2;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(this,this);
  pMVar5 = pMVar4;
  FUN_1000081a8();
  pMVar19 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SidebarViewModel.swift",0x1c,1,0x11,UVar6.unknown,pMVar19);
  }
  uVar14 = *(ulong *)(lVar13 + 0x10);
  if (uVar14 != 0) {
    uVar21 = 0;
    puVar20 = (undefined1 *)(lVar13 + 0x48);
    do {
      if (*(ulong *)(lVar13 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000556d0);
        (*pcVar3)();
      }
      bVar1 = puVar20[-0x28];
      uVar18 = (ulong)bVar1;
      uVar15 = *(ulong *)(puVar20 + -0x20);
      uVar22 = *(ulong *)(puVar20 + -0x18);
      uVar16 = *(ulong *)(puVar20 + -0x10);
      pMVar19 = *(MainActor **)(puVar20 + -8);
      uVar17 = *puVar20;
      _swift_bridgeObjectRetain(uVar22);
      pMVar8 = pMVar19;
      _swift_bridgeObjectRetain();
      pMVar9 = Swift::MainActor::get_shared(this,pMVar8);
      pMVar8 = pMVar5;
      UVar6 = Swift::Actor::get_unownedExecutor();
      UVar7 = UVar6;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar7.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/SidebarViewModel.swift",0x1c,1,0x12,UVar6.unknown,pMVar8);
      }
      lVar10 = param_3 + 0x10;
      _swift_weakLoadStrong();
      if (lVar10 == 0) {
LAB_10005552c:
        _swift_release(pMVar9);
      }
      else {
        puVar11 = &DAT_100c25d98;
        _swift_getKeyPath(&DAT_100c25d98);
        puVar12 = &DAT_100c25dc0;
        _swift_getKeyPath(&DAT_100c25dc0);
        Combine::Published::_get_subscript(&local_90,lVar10,puVar11,puVar12);
        _swift_release(lVar10);
        _swift_release(puVar11);
        _swift_release(puVar12);
        bVar2 = local_90;
        if (local_80 == 0) goto LAB_10005552c;
        FUN_1000558a8(CONCAT71(uStack_8f,local_90),uStack_88,local_80,local_78,uStack_70,local_68);
        _swift_release(pMVar9);
        if (bVar1 == bVar2) {
          _swift_release(pMVar4);
          goto LAB_100055698;
        }
      }
      _swift_bridgeObjectRelease(pMVar19);
      _swift_bridgeObjectRelease(uVar22);
      uVar21 = uVar21 + 1;
      puVar20 = puVar20 + 0x30;
    } while (uVar14 != uVar21);
  }
  _swift_release(pMVar4);
  uVar18 = 0;
  uVar15 = 0;
  uVar22 = 0;
  uVar16 = 0;
  pMVar19 = (MainActor *)0x0;
  uVar17 = 0;
LAB_100055698:
  *param_1 = uVar18;
  param_1[1] = uVar15;
  param_1[2] = uVar22;
  param_1[3] = uVar16;
  param_1[4] = (ulong)pMVar19;
  *(undefined1 *)(param_1 + 5) = uVar17;
  return;
}



/* Address: 0x1000556d0 | FUN_1000556d0 */

void FUN_1000556d0(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste16SidebarViewModel::_items;
  puVar2 = &DAT_100fa9088;
  FUN_1000037f0(&DAT_100fa9088,&DAT_100c25de0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC5Paste16SidebarViewModel::_selectedItem;
  puVar2 = &DAT_100fa9080;
  FUN_1000037f0(&DAT_100fa9080,&DAT_100c25d60);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste16SidebarViewModel::router));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100055768 | FUN_100055768 */

void FUN_100055768(void)

{
  FUN_100055770(0);
  return;
}



/* Address: 0x100055770 | FUN_100055770 */

void FUN_100055770(undefined8 param_1)

{
  if (DAT_100fa8fb8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca123c);
  return;
}



/* Address: 0x1000557a8 | FUN_1000557a8 */

void FUN_1000557a8(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long local_38;
  long local_30;
  undefined *puStack_28;
  
  puVar2 = &DAT_100fa8fc8;
  lVar1 = 0x13f;
  FUN_100007750(0x13f,&DAT_100fa8fc8,&DAT_100fa79c8,&DAT_100c24830);
  if (puVar2 < (undefined *)0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100fa8fd0;
    lVar1 = 0x13f;
    FUN_100007750(0x13f,&DAT_100fa8fd0,&DAT_100fa8fd8,&DAT_100c25cc0);
    if (puVar2 < (undefined *)0x40) {
      local_30 = *(long *)(lVar1 + -8) + 0x40;
      puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
      _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x100055868 | thunk_FUN_1000ae500 */

void thunk_FUN_1000ae500(void)

{
  FUN_1000ae500();
  return;
}



/* Address: 0x10005586c | thunk_FUN_1000ae568 */

void thunk_FUN_1000ae568(void)

{
  FUN_1000ae568();
  return;
}



/* Address: 0x100055870 | thunk_FUN_1000a10c4 */

void thunk_FUN_1000a10c4(void)

{
  FUN_1000a10c4();
  return;
}



/* Address: 0x100055874 | thunk_FUN_100054ebc */

void thunk_FUN_100054ebc(void)

{
  FUN_100054ebc();
  return;
}



/* Address: 0x100055878 | thunk_FUN_100054f24 */

void thunk_FUN_100054f24(void)

{
  FUN_100054f24();
  return;
}



/* Address: 0x10005587c | FUN_10005587c */

void FUN_10005587c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000558a0 | FUN_1000558a0 */

void FUN_1000558a0(void)

{
  FUN_100055480();
  return;
}



/* Address: 0x1000558a8 | FUN_1000558a8 */

void FUN_1000558a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 != 0) {
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_5);
    return;
  }
  return;
}



/* Address: 0x1000558d8 | FUN_1000558d8 */

void FUN_1000558d8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_3 != 0) {
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_5);
    return;
  }
  return;
}



/* Address: 0x100055908 | FUN_100055908 */

void FUN_100055908(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10005592c | FUN_10005592c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10005592c(void)

{
  return ZEXT816(0x100fa90e0);
}



/* Address: 0x10005594c | FUN_10005594c */

undefined8 * FUN_10005594c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_retain();
  return param_1;
}



/* Address: 0x100055978 | FUN_100055978 */

void FUN_100055978(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  return;
}



/* Address: 0x100055980 | FUN_100055980 */

undefined8 * FUN_100055980(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1000559c0 | FUN_1000559c0 */

undefined8 * FUN_1000559c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1000559f0 | FUN_1000559f0 */

int FUN_1000559f0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100055a38 | FUN_100055a38 */

void FUN_100055a38(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100055a74 | FUN_100055a74 */

undefined1  [16] FUN_100055a74(void)

{
  return ZEXT816(0x100eb1ff8);
}



/* Address: 0x100055a84 | FUN_100055a84 */

void FUN_100055a84(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca12dc,1);
  return;
}



/* Address: 0x100055a94 | FUN_100055a94 */

void FUN_100055a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  Set SVar6;
  VerticalAlignment VVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  HorizontalAlignment HVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  undefined *apuStack_90 [2];
  undefined *local_80 [3];
  undefined8 local_68;
  
  puVar3 = &DAT_100fa9140;
  apuStack_90[1] = param_6;
  local_68 = param_1;
  FUN_1000037f0(&DAT_100fa9140,&DAT_100c25ec0);
  local_80[2] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = -extraout_x8;
  puVar11 = (undefined8 *)((long)apuStack_90 + lVar2);
  puVar3 = &DAT_100fa9148;
  FUN_1000037f0(&DAT_100fa9148,&DAT_100c25ec8);
  local_80[0] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar11 - extraout_x8_00;
  puVar3 = &DAT_100fa9150;
  FUN_1000037f0(&DAT_100fa9150,&DAT_100c25ed0);
  local_80[1] = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(lVar9 - extraout_x8_01);
  puVar3 = &DAT_100fa6fa0;
  FUN_1000037f0(&DAT_100fa6fa0,&DAT_100c284c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar8.unknown = (undefined *)((long)puVar12 - extraout_x8_02);
  lVar4 = 0;
  FUN_10019fee0();
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = (long)HVar8.unknown - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100c25ee0;
  _swift_getKeyPath(&DAT_100c25ee0);
  puVar5 = &DAT_100c25f08;
  _swift_getKeyPath(&DAT_100c25f08);
  Combine::Published::_get_subscript(HVar8.unknown,param_7,puVar3,puVar5);
  _swift_release(puVar3);
  _swift_release(puVar5);
  puVar3 = HVar8.unknown;
  (**(code **)(lVar10 + 0x30))(HVar8.unknown,1,lVar4);
  if ((int)puVar3 == 1) {
    FUN_100005808(HVar8.unknown,&DAT_100fa6fa0,&DAT_100c284c0);
    HVar8 = SwiftUI::HorizontalAlignment::get_center(HVar8);
    *puVar11 = HVar8.unknown;
    *(undefined8 *)((long)apuStack_90 + lVar2 + 8) = 0x4034000000000000;
    *(undefined1 *)((long)local_80 + lVar2) = 0;
    puVar3 = &DAT_100fa9158;
    FUN_1000037f0(&DAT_100fa9158,&DAT_100c25f28);
    SVar6.unknown = apuStack_90[1];
    FUN_100056a44((long)puVar11 + (long)*(int *)(puVar3 + 0x2c),apuStack_90[1],param_7);
    SVar6 = SwiftUI::Edge::Set::get_top(SVar6);
    uVar14 = 0x4048000000000000;
    SwiftUI::EdgeInsets::init((CGFloat)SVar6.unknown);
    puVar1 = (undefined1 *)((long)puVar11 + (long)*(int *)(local_80[2] + 0x24));
    *puVar1 = (char)SVar6.unknown;
    *(undefined8 *)(puVar1 + 8) = uVar14;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
    *(undefined8 *)(puVar1 + 0x18) = param_4;
    *(undefined8 *)(puVar1 + 0x20) = param_5;
    puVar1[0x28] = 0;
    FUN_100057d84(puVar11,lVar9);
    _swift_storeEnumTagMultiPayload(lVar9,local_80[0],1);
    FUN_100016eac(&DAT_100fa9160,&DAT_100fa9150,&DAT_100c25ed0,
                  &TargetProtocolConformanceDescriptor_100c254b8);
    FUN_100057dd4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
    FUN_100005808(puVar11,&DAT_100fa9140,&DAT_100c25ec0);
  }
  else {
    FUN_1000182c8(HVar8.unknown,lVar13);
    *puVar12 = 0;
    puVar11 = (undefined8 *)((long)puVar12 + (long)*(int *)(local_80[1] + 0x24));
    VVar7 = SwiftUI::VerticalAlignment::get_center(HVar8.unknown);
    *puVar11 = VVar7.unknown;
    puVar11[1] = 0;
    *(undefined1 *)(puVar11 + 2) = 0;
    puVar3 = &DAT_100fa9180;
    FUN_1000037f0(&DAT_100fa9180,&DAT_100c25f38);
    FUN_100055e50((long)puVar11 + (long)*(int *)(puVar3 + 0x2c),lVar13,apuStack_90[1],param_7);
    FUN_100011090(puVar12,lVar9,&DAT_100fa9150,&DAT_100c25ed0);
    _swift_storeEnumTagMultiPayload(lVar9,local_80[0],0);
    FUN_100016eac(&DAT_100fa9160,&DAT_100fa9150,&DAT_100c25ed0,
                  &TargetProtocolConformanceDescriptor_100c254b8);
    FUN_100057dd4();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar9);
    FUN_100005808(puVar12,&DAT_100fa9150,&DAT_100c25ed0);
    FUN_10001835c(lVar13);
  }
  return;
}



/* Address: 0x100055e50 | FUN_100055e50 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100055e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ResizingMode RVar5;
  undefined *puVar6;
  undefined7 extraout_var;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  NSImage *nsImage;
  Image IVar12;
  Image IVar13;
  HorizontalAlignment HVar14;
  undefined **ppuVar15;
  long extraout_x8;
  long lVar16;
  long extraout_x8_00;
  long extraout_x12;
  long lVar17;
  Alignment capInsets;
  undefined1 auStack_570 [8];
  undefined8 local_568;
  MainActor *local_560;
  undefined1 *local_558;
  undefined8 local_550;
  undefined8 local_548;
  long local_540;
  undefined1 auStack_538 [88];
  undefined *local_4e0;
  undefined8 uStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined *local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined7 uStack_420;
  undefined1 local_419;
  undefined7 uStack_418;
  undefined1 uStack_411;
  undefined7 uStack_410;
  undefined1 local_409;
  undefined7 uStack_408;
  undefined1 uStack_401;
  undefined7 uStack_400;
  undefined1 local_3f9;
  undefined7 uStack_3f8;
  undefined1 uStack_3f1;
  undefined7 uStack_3f0;
  undefined1 local_3e9;
  undefined7 uStack_3e8;
  undefined1 uStack_3e1;
  undefined7 uStack_3e0;
  undefined1 uStack_3d9;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined *local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined *local_360;
  undefined8 uStack_358;
  undefined2 local_350;
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined6 local_33e;
  undefined2 uStack_338;
  undefined6 uStack_336;
  undefined2 uStack_330;
  undefined6 local_32e;
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined6 uStack_31e;
  undefined *local_318;
  undefined8 local_310;
  undefined2 local_308;
  undefined8 local_306;
  undefined8 uStack_2fe;
  undefined8 local_2f6;
  undefined8 uStack_2ee;
  undefined8 local_2e6;
  undefined6 uStack_2de;
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined *local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined1 local_218 [64];
  undefined *local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 uStack_1bf;
  undefined1 uStack_1b8;
  undefined7 local_1b7;
  undefined1 uStack_1b0;
  undefined7 uStack_1af;
  undefined1 uStack_1a8;
  undefined7 local_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 local_197;
  undefined1 uStack_190;
  undefined7 uStack_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined *local_180;
  undefined8 local_178;
  undefined1 local_170;
  undefined8 local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined6 uStack_126;
  undefined2 local_120;
  undefined6 uStack_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined2 uStack_110;
  undefined6 uStack_10e;
  undefined2 uStack_108;
  undefined6 uStack_106;
  undefined2 local_100;
  undefined6 uStack_fe;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puVar7;
  
  puVar6 = &DAT_100fa9188;
  local_568 = param_3;
  local_550 = param_2;
  local_548 = param_4;
  FUN_1000037f0(&DAT_100fa9188,&DAT_100c25f40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)(auStack_570 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_540 = lVar16;
  RVar5 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar7 = (undefined *)CONCAT71(extraout_var,RVar5.value);
  lVar17 = *(long *)(puVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  capInsets.unknown = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x14,UVar10.unknown,puVar9);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    local_560 = pMVar8;
    local_558 = auStack_570 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage != (NSImage *)0x0) {
      IVar12 = SwiftUI::Image::init(nsImage);
      IVar13.unknown = puVar7;
      (**(code **)(lVar17 + 0x68))
                (capInsets.unknown,
                 *(undefined4 *)
                  PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
                );
      IVar13 = SwiftUI::Image::resizable
                         ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar12.unknown,IVar13)
      ;
      _swift_release(IVar12.unknown);
      (**(code **)(lVar17 + 8))(capInsets.unknown,puVar7);
      SwiftUI::Alignment::get_center(capInsets);
      SwiftUI::_FrameLayout::_init((Alignment)0x404e000000000000);
      uStack_118 = (undefined2)uStack_98;
      uStack_116 = (undefined6)((ulong)uStack_98 >> 0x10);
      local_120 = (undefined2)local_a0;
      uStack_11e = (undefined6)((ulong)local_a0 >> 0x10);
      uStack_108 = (undefined2)uStack_88;
      uStack_106 = (undefined6)((ulong)uStack_88 >> 0x10);
      uStack_110 = (undefined2)uStack_90;
      uStack_10e = (undefined6)((ulong)uStack_90 >> 0x10);
      uStack_358 = 0;
      local_350 = 1;
      uStack_346 = uStack_11e;
      uStack_340 = uStack_118;
      uStack_348 = local_120;
      uStack_d8 = local_a0;
      local_e0 = CONCAT62(uStack_126,1);
      uStack_f8 = (undefined2)uStack_78;
      uStack_f6 = (undefined6)((ulong)uStack_78 >> 0x10);
      local_100 = (undefined2)local_80;
      uStack_fe = (undefined6)((ulong)local_80 >> 0x10);
      uStack_e8 = 0;
      uStack_336 = uStack_10e;
      uStack_330 = uStack_108;
      local_33e = uStack_116;
      uStack_338 = uStack_110;
      uStack_326 = uStack_fe;
      local_32e = uStack_106;
      uStack_328 = local_100;
      local_b0 = uStack_78;
      uStack_c8 = uStack_90;
      local_d0 = uStack_98;
      uStack_b8 = local_80;
      uStack_c0 = uStack_88;
      local_310 = 0;
      local_308 = 1;
      uStack_2fe = CONCAT26(uStack_118,uStack_11e);
      local_306 = CONCAT26(local_120,uStack_126);
      uStack_2ee = CONCAT26(uStack_108,uStack_10e);
      local_2f6 = CONCAT26(uStack_110,uStack_116);
      local_2e6 = CONCAT26(local_100,uStack_106);
      uStack_2de = uStack_fe;
      uStack_2d8 = uStack_f8;
      local_360 = IVar13.unknown;
      uStack_320 = uStack_f8;
      uStack_31e = uStack_f6;
      local_318 = IVar13.unknown;
      uStack_2d6 = uStack_f6;
      local_f0 = IVar13.unknown;
      FUN_100011090(&local_360,&local_180,&DAT_100fa7cc8,&DAT_100c264d0);
      FUN_100005808(&local_318,&DAT_100fa7cc8,&DAT_100c264d0);
      uStack_2a8 = uStack_c8;
      local_2b0 = local_d0;
      uStack_298 = uStack_b8;
      uStack_2a0 = uStack_c0;
      local_290 = local_b0;
      uStack_2c8 = uStack_e8;
      local_2d0 = local_f0;
      uStack_2b8 = uStack_d8;
      uStack_2c0 = local_e0;
      uStack_280 = 0;
      uStack_288 = 0xc018000000000000;
      uStack_248 = uStack_c8;
      local_250 = local_d0;
      uStack_238 = uStack_b8;
      uStack_240 = uStack_c0;
      local_230 = local_b0;
      uStack_268 = uStack_e8;
      local_270 = local_f0;
      uStack_258 = uStack_d8;
      uStack_260 = local_e0;
      uStack_220 = 0;
      local_228 = 0xc018000000000000;
      FUN_100011090(&local_2d0,&local_180,&DAT_100fa9190,&DAT_100c25f50);
      HVar14.unknown = (undefined *)&local_270;
      FUN_100005808(HVar14.unknown,&DAT_100fa9190,&DAT_100c25f50);
      HVar14 = SwiftUI::HorizontalAlignment::get_leading(HVar14);
      FUN_1000564c8(local_218,local_550);
      uStack_401 = (undefined1)local_218._24_8_;
      uStack_400 = SUB87(local_218._24_8_,1);
      local_409 = (undefined1)local_218._16_8_;
      uStack_408 = SUB87(local_218._16_8_,1);
      uStack_411 = (undefined1)local_218._8_8_;
      uStack_410 = SUB87(local_218._8_8_,1);
      local_419 = (undefined1)local_218._0_8_;
      uStack_418 = SUB87(local_218._0_8_,1);
      uStack_3f1 = (undefined1)local_218._40_8_;
      uStack_3f0 = SUB87(local_218._40_8_,1);
      local_3f9 = (undefined1)local_218._32_8_;
      uStack_3f8 = SUB87(local_218._32_8_,1);
      uStack_3e1 = (undefined1)local_218._56_8_;
      uStack_3e0 = SUB87(local_218._56_8_,1);
      local_3e9 = (undefined1)local_218._48_8_;
      uStack_3e8 = SUB87(local_218._48_8_,1);
      uStack_167 = CONCAT17(uStack_411,uStack_418);
      local_16f = CONCAT17(local_419,uStack_420);
      uStack_1af = uStack_408;
      uStack_1a8 = uStack_401;
      local_1b7 = uStack_410;
      uStack_1b0 = local_409;
      uStack_157 = CONCAT17(uStack_401,uStack_408);
      local_15f = CONCAT17(local_409,uStack_410);
      uStack_19f = uStack_3f8;
      uStack_198 = uStack_3f1;
      local_1a7 = uStack_400;
      uStack_1a0 = local_3f9;
      uStack_147 = CONCAT17(uStack_3f1,uStack_3f8);
      local_14f = CONCAT17(local_3f9,uStack_400);
      uStack_18f = uStack_3e8;
      local_197 = uStack_3f0;
      uStack_190 = local_3e9;
      uStack_1bf = uStack_418;
      uStack_1b8 = uStack_411;
      uStack_1c7 = uStack_420;
      uStack_1c0 = local_419;
      local_13f = CONCAT17(local_3e9,uStack_3f0);
      uStack_137 = uStack_3e8;
      uStack_1d0 = 0x4000000000000000;
      local_1c8 = 0;
      local_178 = 0x4000000000000000;
      local_170 = 0;
      local_1d8 = HVar14.unknown;
      uStack_188 = uStack_3e1;
      uStack_187 = uStack_3e0;
      local_180 = HVar14.unknown;
      uStack_130 = uStack_3e1;
      uStack_12f = uStack_3e0;
      FUN_100011090(&local_1d8,&local_3c0,&DAT_100fa6430,&DAT_100c26510);
      ppuVar15 = &local_180;
      FUN_100005808(ppuVar15,&DAT_100fa6430,&DAT_100c26510);
      uVar3 = local_548;
      FUN_1000948e4();
      lVar16 = local_540;
      bVar1 = ((ulong)ppuVar15 & 1) == 0;
      if (!bVar1) {
        puVar6 = &DAT_100eb2020;
        _swift_allocObject(&DAT_100eb2020,0x20,7);
        *(undefined8 *)(puVar6 + 0x10) = local_568;
        *(undefined8 *)(puVar6 + 0x18) = uVar3;
        _swift_retain(uVar3);
        FUN_1000037f0(&DAT_100fa91a8,&DAT_100c25f70);
        FUN_100057eac();
        SwiftUI::Button::_init();
      }
      puVar6 = &DAT_100fa9198;
      FUN_1000037f0(&DAT_100fa9198,&DAT_100c25f60);
      (**(code **)(*(long *)(puVar6 + -8) + 0x38))(lVar16,bVar1,1,puVar6);
      puVar2 = local_558;
      uStack_458 = uStack_2a8;
      local_460 = local_2b0;
      uStack_448 = uStack_298;
      uStack_450 = uStack_2a0;
      uStack_438 = uStack_288;
      local_440 = local_290;
      local_430 = uStack_280;
      uStack_478 = uStack_2c8;
      local_480 = local_2d0;
      uStack_468 = uStack_2b8;
      uStack_470 = uStack_2c0;
      uStack_4b8 = CONCAT71(uStack_1af,uStack_1b0);
      uStack_4c0 = CONCAT71(local_1b7,uStack_1b8);
      uStack_4a8 = CONCAT71(uStack_19f,uStack_1a0);
      local_4b0 = CONCAT71(local_1a7,uStack_1a8);
      uStack_498 = CONCAT71(uStack_18f,uStack_190);
      uStack_4a0 = CONCAT71(local_197,uStack_198);
      local_490 = CONCAT71(uStack_187,uStack_188);
      uStack_4c8 = CONCAT71(uStack_1bf,uStack_1c0);
      local_4d0 = CONCAT71(uStack_1c7,local_1c8);
      uStack_4d8 = uStack_1d0;
      local_4e0 = local_1d8;
      FUN_100011090(lVar16,local_558,&DAT_100fa9188,&DAT_100c25f40);
      uStack_3f8 = (undefined7)uStack_458;
      uStack_3f1 = (undefined1)((ulong)uStack_458 >> 0x38);
      uStack_400 = (undefined7)local_460;
      local_3f9 = (undefined1)((ulong)local_460 >> 0x38);
      uStack_3e8 = (undefined7)uStack_448;
      uStack_3e1 = (undefined1)((ulong)uStack_448 >> 0x38);
      uStack_3f0 = (undefined7)uStack_450;
      local_3e9 = (undefined1)((ulong)uStack_450 >> 0x38);
      uStack_3d8 = uStack_438;
      uStack_3e0 = (undefined7)local_440;
      uStack_3d9 = (undefined1)((ulong)local_440 >> 0x38);
      local_3d0 = local_430;
      uStack_418 = (undefined7)uStack_478;
      uStack_411 = (undefined1)((ulong)uStack_478 >> 0x38);
      uStack_420 = SUB87(local_480,0);
      local_419 = (undefined1)((ulong)local_480 >> 0x38);
      uStack_408 = (undefined7)uStack_468;
      uStack_401 = (undefined1)((ulong)uStack_468 >> 0x38);
      uStack_410 = (undefined7)uStack_470;
      local_409 = (undefined1)((ulong)uStack_470 >> 0x38);
      param_1[5] = uStack_458;
      param_1[4] = local_460;
      param_1[7] = uStack_448;
      param_1[6] = uStack_450;
      param_1[9] = uStack_438;
      param_1[8] = local_440;
      param_1[10] = local_430;
      param_1[1] = uStack_478;
      *param_1 = local_480;
      param_1[3] = uStack_468;
      param_1[2] = uStack_470;
      uStack_398 = uStack_4b8;
      local_3a0 = uStack_4c0;
      uStack_388 = uStack_4a8;
      uStack_390 = local_4b0;
      uStack_378 = uStack_498;
      local_380 = uStack_4a0;
      local_370 = local_490;
      uStack_3b8 = uStack_4d8;
      local_3c0 = local_4e0;
      uStack_3a8 = uStack_4c8;
      uStack_3b0 = local_4d0;
      param_1[0x10] = uStack_4b8;
      param_1[0xf] = uStack_4c0;
      param_1[0x12] = uStack_4a8;
      param_1[0x11] = local_4b0;
      param_1[0x14] = uStack_498;
      param_1[0x13] = uStack_4a0;
      param_1[0xc] = uStack_4d8;
      param_1[0xb] = local_4e0;
      param_1[0xe] = uStack_4c8;
      param_1[0xd] = local_4d0;
      param_1[0x15] = local_490;
      param_1[0x16] = 0;
      *(undefined1 *)(param_1 + 0x17) = 1;
      puVar6 = &DAT_100fa91a0;
      FUN_1000037f0(&DAT_100fa91a0,&DAT_100c25f68);
      FUN_100011090(puVar2,(long)param_1 + (long)*(int *)(puVar6 + 0x50),&DAT_100fa9188,
                    &DAT_100c25f40);
      FUN_100011090(&uStack_420,auStack_538,&DAT_100fa9190,&DAT_100c25f50);
      FUN_100011090(&local_3c0,auStack_538,&DAT_100fa6430,&DAT_100c26510);
      FUN_100005808(lVar16,&DAT_100fa9188,&DAT_100c25f40);
      FUN_100005808(puVar2,&DAT_100fa9188,&DAT_100c25f40);
      FUN_100005808(&local_4e0,&DAT_100fa6430,&DAT_100c26510);
      FUN_100005808(&local_480,&DAT_100fa9190,&DAT_100c25f50);
      _swift_release(local_560);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1000564c8);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000564c4);
  (*pcVar4)();
}



/* Address: 0x1000564c8 | FUN_1000564c8 */

void FUN_1000564c8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  LocalizedStringKey LVar5;
  Text TVar6;
  Font FVar7;
  Font FVar8;
  Text TVar9;
  Text TVar10;
  Text TVar11;
  Text TVar13;
  undefined *puVar14;
  uint uVar15;
  undefined *puVar16;
  ulong uVar17;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  String stringLiteral;
  undefined1 *puVar12;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  puVar16 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar14);
  uVar15 = (uint)puVar16;
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    uVar15 = 1;
    param_5 = 0x1b;
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x1b,UVar3.unknown,puVar2);
  }
  stringLiteral.bridgeObject = &DAT_e500000000000000;
  stringLiteral.str = (char *)0x6574736150;
  puVar12 = &DAT_e500000000000000;
  LVar5 = SwiftUI::LocalizedStringKey::init(stringLiteral);
  uVar17 = (ulong)(uVar15 & 1);
  TVar6 = SwiftUI::Text::_init(LVar5);
  FVar8.unknown = puVar12;
  FVar7 = SwiftUI::Font::get_title3(TVar6.unknown);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar7.unknown);
  FVar8 = SwiftUI::Font::weight(FVar7.unknown,FVar8);
  _swift_release(FVar7.unknown);
  TVar13 = TVar6;
  puVar18 = puVar12;
  uVar19 = uVar17;
  TVar9 = SwiftUI::Text::_font(FVar8.unknown);
  uVar20 = uVar19;
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar6.unknown,puVar12,uVar17);
  _swift_bridgeObjectRelease();
  uVar21 = *(undefined8 *)(param_2 + 0x18);
  FUN_100008378();
  _swift_bridgeObjectRetain(uVar21);
  puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar10 = SwiftUI::Text::_init();
  FVar8 = SwiftUI::Font::get_callout(TVar10.unknown);
  TVar6 = TVar10;
  puVar16 = puVar14;
  uVar21 = param_5;
  TVar11 = SwiftUI::Text::_font(FVar8.unknown);
  _swift_release(FVar8.unknown);
  FUN_100016d74(TVar10.unknown,puVar14,param_5);
  _swift_bridgeObjectRelease(uVar20);
  *param_1 = TVar9.unknown;
  param_1[1] = TVar13.unknown;
  *(char *)(param_1 + 2) = (char)puVar18;
  param_1[3] = uVar19;
  param_1[4] = TVar11.unknown;
  param_1[5] = TVar6.unknown;
  *(char *)(param_1 + 6) = (char)puVar16;
  param_1[7] = uVar21;
  FUN_100016d5c(TVar9.unknown,TVar13.unknown,(ulong)puVar18 & 0xffffffff);
  _swift_bridgeObjectRetain(uVar19);
  FUN_100016d5c(TVar11.unknown,TVar6.unknown,puVar16);
  _swift_bridgeObjectRetain(uVar21);
  FUN_100016d74(TVar11.unknown,TVar6.unknown,puVar16);
  _swift_bridgeObjectRelease(uVar21);
  FUN_100016d74(TVar9.unknown,TVar13.unknown,(ulong)puVar18 & 0xffffffff);
  _swift_release(pMVar1);
  _swift_bridgeObjectRelease(uVar19);
  return;
}



/* Address: 0x100056748 | FUN_100056748 */

void FUN_100056748(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  Set _all;
  EdgeInsets EVar7;
  Set _all_00;
  void *pvVar8;
  undefined *puVar9;
  undefined1 uVar10;
  char *pcVar11;
  void *in_x3;
  long extraout_x8;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_320 [128];
  char *local_2a0;
  undefined *puStack_298;
  undefined8 uStack_290;
  void *pvStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined1 uStack_268;
  undefined7 local_267;
  undefined1 uStack_260;
  undefined7 uStack_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  char *local_250;
  undefined *puStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  void *local_238;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined1 local_218;
  undefined7 uStack_217;
  undefined1 uStack_210;
  undefined7 uStack_20f;
  undefined1 uStack_208;
  undefined *local_200;
  undefined *puStack_1f8;
  undefined1 local_1f0;
  void *local_1e8;
  undefined1 local_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  char *local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  void *pvStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined8 local_158;
  undefined8 local_150;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 uStack_13f;
  undefined1 local_138;
  String local_130;
  undefined8 local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  pcVar11 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  FUN_100003a00(&DAT_100fa6bb0,puVar9);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    pcVar11 = &DAT_00000001;
    in_x3 = (void *)0x28;
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x28,UVar4.unknown,puVar3);
  }
  FUN_1001c2108(auStack_320 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_130 = (extension_Foundation)::Swift::String::init
                        ((LocalizedStringResource)
                         (auStack_320 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  pvVar8 = local_130.bridgeObject;
  _swift_bridgeObjectRetain(pvVar8);
  SVar17.bridgeObject = (void *)0xe300000000000000;
  SVar17.str = (char *)0x2e2e2e;
  SVar18.bridgeObject = in_x3;
  SVar18.str = pcVar11;
  Swift::String::append(SVar17,SVar18);
  _swift_bridgeObjectRelease();
  uVar10 = SUB81(pvVar8,0);
  FUN_100008378();
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _all = SwiftUI::Edge::Set::get_horizontal(TVar6.unknown);
  uVar12 = 0x4028000000000000;
  EVar7 = SwiftUI::EdgeInsets::init(_all.unknown);
  uVar14 = param_3;
  uVar15 = param_4;
  uVar16 = param_5;
  _all_00 = SwiftUI::Edge::Set::get_vertical(EVar7.unknown);
  local_218 = (undefined1)param_4;
  uStack_217 = (undefined7)((ulong)param_4 >> 8);
  uStack_210 = (undefined1)param_5;
  uStack_20f = (undefined7)((ulong)param_5 >> 8);
  uStack_208 = 0;
  uVar13 = 0x4000000000000000;
  local_250 = (char *)TVar6;
  puStack_248 = puVar9;
  local_240 = uVar10;
  local_238 = in_x3;
  local_230 = (char)_all.unknown;
  uStack_228 = uVar12;
  uStack_220 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all_00.unknown);
  local_280 = CONCAT71(uStack_22f,local_230);
  uStack_278 = uStack_228;
  uStack_268 = local_218;
  uStack_270 = uStack_220;
  uStack_25f = uStack_20f;
  uStack_258 = uStack_208;
  local_267 = uStack_217;
  uStack_260 = uStack_210;
  uStack_290 = CONCAT71(uStack_23f,local_240);
  puStack_298 = puStack_248;
  local_2a0 = local_250;
  pvStack_288 = local_238;
  local_1b8 = 0;
  local_200 = TVar6.unknown;
  puStack_1f8 = puVar9;
  local_1f0 = uVar10;
  local_1e8 = in_x3;
  local_1e0 = (char)_all.unknown;
  local_1d8 = uVar12;
  uStack_1d0 = param_3;
  local_1c8 = param_4;
  uStack_1c0 = param_5;
  FUN_100011090(&local_250,&local_130,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(&local_200,&DAT_100fa7ed8,&DAT_100c24e98);
  uStack_178 = CONCAT71(local_267,uStack_268);
  uStack_188 = uStack_278;
  local_190 = local_280;
  uStack_180 = uStack_270;
  uStack_168 = CONCAT71(uStack_257,uStack_258);
  local_170 = CONCAT71(uStack_25f,uStack_260);
  puStack_1a8 = puStack_298;
  local_1b0 = local_2a0;
  pvStack_198 = pvStack_288;
  uStack_1a0 = uStack_290;
  local_160 = SUB81(_all_00.unknown,0);
  uStack_148 = (undefined1)uVar15;
  uStack_147 = (undefined7)((ulong)uVar15 >> 8);
  uStack_140 = (undefined1)uVar16;
  uStack_13f = (undefined7)((ulong)uVar16 >> 8);
  local_138 = 0;
  local_100 = uStack_270;
  pvStack_118 = pvStack_288;
  local_120 = uStack_290;
  uStack_108 = uStack_278;
  uStack_110 = local_280;
  local_130.bridgeObject = puStack_298;
  local_130.str = local_2a0;
  local_b8 = 0;
  local_158 = uVar13;
  local_150 = uVar14;
  uStack_f8 = uStack_178;
  uStack_f0 = local_170;
  uStack_e8 = uStack_168;
  local_e0 = local_160;
  local_d8 = uVar13;
  local_d0 = uVar14;
  local_c8 = uVar15;
  local_c0 = uVar16;
  FUN_100011090(&local_1b0,auStack_320,&DAT_100fa91a8,&DAT_100c25f70);
  FUN_100005808(&local_130,&DAT_100fa91a8,&DAT_100c25f70);
  _swift_release(pMVar2);
  param_1[9] = uStack_168;
  param_1[8] = local_170;
  param_1[0xb] = local_158;
  param_1[10] = CONCAT71(uStack_15f,local_160);
  param_1[0xd] = CONCAT71(uStack_147,uStack_148);
  param_1[0xc] = local_150;
  *(ulong *)((long)param_1 + 0x71) = CONCAT17(local_138,uStack_13f);
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_140,uStack_147);
  param_1[1] = puStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = pvStack_198;
  param_1[2] = uStack_1a0;
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  param_1[7] = uStack_178;
  param_1[6] = uStack_180;
  return;
}



/* Address: 0x100056a44 | FUN_100056a44 */

void FUN_100056a44(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ControlSize CVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  undefined8 *puVar11;
  UnownedSerialExecutor UVar12;
  char *pcVar13;
  HorizontalAlignment HVar14;
  Button<undefined> BVar15;
  undefined **ppuVar16;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar17;
  long extraout_x8_03;
  long extraout_x12;
  KeyboardShortcut KVar18;
  undefined8 local_6f0;
  long local_6e8;
  undefined8 local_6e0;
  undefined *local_6d8;
  undefined *local_6d0;
  long local_6c8;
  long local_6c0;
  undefined *local_6b8;
  long local_6b0;
  undefined *local_6a8;
  long local_6a0;
  long local_698;
  undefined *local_690;
  long local_688;
  MainActor *local_680;
  long local_678;
  undefined1 auStack_670 [224];
  undefined7 uStack_590;
  undefined1 local_589;
  undefined7 uStack_588;
  undefined1 uStack_581;
  undefined7 uStack_580;
  undefined1 local_579;
  undefined7 uStack_578;
  undefined1 uStack_571;
  undefined7 uStack_570;
  undefined1 local_569;
  undefined7 uStack_568;
  undefined1 uStack_561;
  undefined7 uStack_560;
  undefined1 local_559;
  undefined7 uStack_558;
  undefined1 uStack_551;
  undefined7 uStack_550;
  undefined1 local_549;
  undefined7 uStack_548;
  undefined1 uStack_541;
  undefined7 uStack_540;
  undefined1 local_539;
  undefined7 uStack_538;
  undefined1 uStack_531;
  undefined7 uStack_530;
  undefined1 local_529;
  undefined7 uStack_528;
  undefined1 uStack_521;
  undefined7 uStack_520;
  undefined1 local_519;
  undefined7 uStack_518;
  undefined1 uStack_511;
  undefined7 uStack_510;
  undefined1 local_509;
  undefined7 uStack_508;
  undefined1 uStack_501;
  undefined7 uStack_500;
  undefined1 local_4f9;
  undefined7 uStack_4f8;
  undefined1 uStack_4f1;
  undefined7 uStack_4f0;
  undefined1 local_4e9;
  undefined7 uStack_4e8;
  undefined1 uStack_4e1;
  undefined7 uStack_4e0;
  undefined1 local_4d9;
  undefined7 uStack_4d8;
  undefined1 uStack_4d1;
  undefined7 uStack_4d0;
  undefined1 local_4c9;
  undefined7 uStack_4c8;
  undefined1 uStack_4c1;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined *local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined *local_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 local_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined *local_310;
  undefined8 uStack_308;
  undefined1 local_300;
  undefined7 local_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 local_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 local_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 local_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 local_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 local_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 local_28f;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 uStack_280;
  undefined7 local_27f;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 uStack_270;
  undefined7 local_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined7 local_25f;
  undefined1 uStack_258;
  undefined7 uStack_257;
  undefined1 uStack_250;
  undefined7 local_24f;
  undefined1 uStack_248;
  undefined7 uStack_247;
  undefined1 uStack_240;
  undefined7 uStack_23f;
  undefined8 uStack_238;
  undefined *local_230;
  undefined8 local_228;
  undefined1 local_220;
  undefined8 local_21f;
  undefined8 uStack_217;
  undefined8 local_20f;
  undefined8 uStack_207;
  undefined8 local_1ff;
  undefined8 uStack_1f7;
  undefined8 local_1ef;
  undefined8 uStack_1e7;
  undefined8 local_1df;
  undefined8 uStack_1d7;
  undefined8 local_1cf;
  undefined8 uStack_1c7;
  undefined8 local_1bf;
  undefined8 uStack_1b7;
  undefined8 local_1af;
  undefined8 uStack_1a7;
  undefined8 local_19f;
  undefined8 uStack_197;
  undefined8 local_18f;
  undefined8 uStack_187;
  undefined8 local_17f;
  undefined8 uStack_177;
  undefined8 local_16f;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined8 uStack_158;
  undefined *local_150;
  undefined *puStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_6f0 = param_2;
  local_6e0 = param_3;
  local_690 = (undefined *)SwiftUI::BorderedProminentButtonStyle::typeMetadataAccessor();
  local_698 = *(long *)(local_690 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_698 + 0x40));
  lVar17 = (long)&local_6f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_6a0 = lVar17;
  local_6b8 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  local_6c8 = *(long *)(local_6b8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_6c8 + 0x40));
  KVar18.unknown = (undefined *)(lVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100fa91c0;
  FUN_1000037f0(&DAT_100fa91c0,&DAT_100c25f80);
  local_6e8 = *(long *)(puVar9 + -8);
  local_6d8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_6e8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar9 = &DAT_100fa91c8;
  FUN_1000037f0(&DAT_100fa91c8,&DAT_100c25f88);
  local_6b0 = *(long *)(puVar9 + -8);
  local_6a8 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_6b0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar17 = ((long)KVar18.unknown - extraout_x8_01) - extraout_x8_02;
  puVar9 = &DAT_100fa91d0;
  local_6c0 = lVar17;
  FUN_1000037f0(&DAT_100fa91d0,&DAT_100c25f90);
  local_6d0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar17 = lVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_678 = lVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_688 = lVar17 - extraout_x12;
  pMVar10 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar10 = Swift::MainActor::get_shared(pMVar10,pMVar10);
  puVar11 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_680 = pMVar10;
  UVar12 = Swift::Actor::get_unownedExecutor();
  pcVar13 = (char *)UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar13 & 1) == 0) {
    pcVar13 = "Paste/SubscriptionSettingsView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x33,UVar12.unknown,puVar11);
  }
  HVar14 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar13);
  FUN_1000571fc(&local_150);
  uStack_408 = uStack_a8;
  local_410 = local_b0;
  uStack_3f8 = uStack_98;
  uStack_400 = local_a0;
  uStack_448 = uStack_e8;
  local_450 = local_f0;
  uStack_438 = uStack_d8;
  uStack_440 = local_e0;
  uStack_428 = uStack_c8;
  local_430 = local_d0;
  uStack_418 = uStack_b8;
  uStack_420 = local_c0;
  uStack_488 = uStack_128;
  local_490 = local_130;
  uStack_478 = uStack_118;
  uStack_480 = local_120;
  uStack_468 = uStack_108;
  local_470 = local_110;
  uStack_458 = uStack_f8;
  uStack_460 = local_100;
  uStack_4a8 = puStack_148;
  local_4b0 = local_150;
  uStack_498 = uStack_138;
  uStack_4a0 = local_140;
  uStack_338 = uStack_a8;
  local_340 = local_b0;
  uStack_328 = uStack_98;
  uStack_330 = local_a0;
  uStack_378 = uStack_e8;
  local_380 = local_f0;
  uStack_368 = uStack_d8;
  uStack_370 = local_e0;
  uStack_358 = uStack_c8;
  local_360 = local_d0;
  uStack_348 = uStack_b8;
  uStack_350 = local_c0;
  uStack_3b8 = uStack_128;
  local_3c0 = local_130;
  uStack_3a8 = uStack_118;
  uStack_3b0 = local_120;
  uStack_398 = uStack_108;
  local_3a0 = local_110;
  uStack_388 = uStack_f8;
  uStack_390 = local_100;
  local_3f0 = local_90;
  local_320 = local_90;
  uStack_3d8 = puStack_148;
  local_3e0 = local_150;
  uStack_3c8 = uStack_138;
  uStack_3d0 = local_140;
  FUN_100011090(&local_4b0,&local_230,&DAT_100fa91d8,&DAT_100c25f98);
  FUN_100005808(&local_3e0,&DAT_100fa91d8,&DAT_100c25f98);
  uStack_4f1 = (undefined1)uStack_418;
  uStack_4f0 = (undefined7)((ulong)uStack_418 >> 8);
  local_4f9 = (undefined1)uStack_420;
  uStack_4f8 = (undefined7)((ulong)uStack_420 >> 8);
  uStack_4e1 = (undefined1)uStack_408;
  uStack_4e0 = (undefined7)((ulong)uStack_408 >> 8);
  local_4e9 = (undefined1)local_410;
  uStack_4e8 = (undefined7)((ulong)local_410 >> 8);
  uStack_4d1 = (undefined1)uStack_3f8;
  uStack_4d0 = (undefined7)((ulong)uStack_3f8 >> 8);
  local_4d9 = (undefined1)uStack_400;
  uStack_4d8 = (undefined7)((ulong)uStack_400 >> 8);
  local_4c9 = (undefined1)local_3f0;
  uStack_4c8 = (undefined7)((ulong)local_3f0 >> 8);
  uStack_531 = (undefined1)uStack_458;
  uStack_530 = (undefined7)((ulong)uStack_458 >> 8);
  local_539 = (undefined1)uStack_460;
  uStack_538 = (undefined7)((ulong)uStack_460 >> 8);
  uStack_521 = (undefined1)uStack_448;
  uStack_520 = (undefined7)((ulong)uStack_448 >> 8);
  local_529 = (undefined1)local_450;
  uStack_528 = (undefined7)((ulong)local_450 >> 8);
  uStack_511 = (undefined1)uStack_438;
  uStack_510 = (undefined7)((ulong)uStack_438 >> 8);
  local_519 = (undefined1)uStack_440;
  uStack_518 = (undefined7)((ulong)uStack_440 >> 8);
  uStack_501 = (undefined1)uStack_428;
  uStack_500 = (undefined7)((ulong)uStack_428 >> 8);
  local_509 = (undefined1)local_430;
  uStack_508 = (undefined7)((ulong)local_430 >> 8);
  uStack_571 = (undefined1)uStack_498;
  uStack_570 = (undefined7)((ulong)uStack_498 >> 8);
  local_579 = (undefined1)uStack_4a0;
  uStack_578 = (undefined7)((ulong)uStack_4a0 >> 8);
  uStack_561 = (undefined1)uStack_488;
  uStack_560 = (undefined7)((ulong)uStack_488 >> 8);
  local_569 = (undefined1)local_490;
  uStack_568 = (undefined7)((ulong)local_490 >> 8);
  uStack_551 = (undefined1)uStack_478;
  uStack_550 = (undefined7)((ulong)uStack_478 >> 8);
  local_559 = (undefined1)uStack_480;
  uStack_558 = (undefined7)((ulong)uStack_480 >> 8);
  uStack_541 = (undefined1)uStack_468;
  uStack_540 = (undefined7)((ulong)uStack_468 >> 8);
  local_549 = (undefined1)local_470;
  uStack_548 = (undefined7)((ulong)local_470 >> 8);
  uStack_581 = (undefined1)uStack_4a8;
  uStack_580 = (undefined7)((ulong)uStack_4a8 >> 8);
  local_589 = SUB81(local_4b0,0);
  uStack_588 = (undefined7)((ulong)local_4b0 >> 8);
  uStack_267 = uStack_4f8;
  uStack_260 = uStack_4f1;
  local_26f = uStack_500;
  uStack_268 = local_4f9;
  uStack_187 = CONCAT17(uStack_4f1,uStack_4f8);
  local_18f = CONCAT17(local_4f9,uStack_500);
  uStack_177 = CONCAT17(uStack_4e1,uStack_4e8);
  local_17f = CONCAT17(local_4e9,uStack_4f0);
  uStack_257 = uStack_4e8;
  uStack_250 = uStack_4e1;
  local_25f = uStack_4f0;
  uStack_258 = local_4e9;
  local_16f = CONCAT17(local_4d9,uStack_4e0);
  uStack_247 = uStack_4d8;
  local_24f = uStack_4e0;
  uStack_248 = local_4d9;
  uStack_238 = local_3f0;
  uStack_2a7 = uStack_538;
  uStack_2a0 = uStack_531;
  local_2af = uStack_540;
  uStack_2a8 = local_539;
  uStack_1c7 = CONCAT17(uStack_531,uStack_538);
  local_1cf = CONCAT17(local_539,uStack_540);
  uStack_1b7 = CONCAT17(uStack_521,uStack_528);
  local_1bf = CONCAT17(local_529,uStack_530);
  uStack_297 = uStack_528;
  uStack_290 = uStack_521;
  local_29f = uStack_530;
  uStack_298 = local_529;
  uStack_287 = uStack_518;
  uStack_280 = uStack_511;
  local_28f = uStack_520;
  uStack_288 = local_519;
  uStack_1a7 = CONCAT17(uStack_511,uStack_518);
  local_1af = CONCAT17(local_519,uStack_520);
  uStack_197 = CONCAT17(uStack_501,uStack_508);
  local_19f = CONCAT17(local_509,uStack_510);
  uStack_277 = uStack_508;
  uStack_270 = uStack_501;
  local_27f = uStack_510;
  uStack_278 = local_509;
  uStack_1f7 = CONCAT17(uStack_561,uStack_568);
  local_1ff = CONCAT17(local_569,uStack_570);
  uStack_2e7 = uStack_578;
  uStack_2e0 = uStack_571;
  local_2ef = uStack_580;
  uStack_2e8 = local_579;
  uStack_207 = CONCAT17(uStack_571,uStack_578);
  local_20f = CONCAT17(local_579,uStack_580);
  uStack_2d7 = uStack_568;
  uStack_2d0 = uStack_561;
  local_2df = uStack_570;
  uStack_2d8 = local_569;
  uStack_1d7 = CONCAT17(uStack_541,uStack_548);
  local_1df = CONCAT17(local_549,uStack_550);
  uStack_2c7 = uStack_558;
  uStack_2c0 = uStack_551;
  local_2cf = uStack_560;
  uStack_2c8 = local_559;
  uStack_1e7 = CONCAT17(uStack_551,uStack_558);
  local_1ef = CONCAT17(local_559,uStack_560);
  uStack_2b7 = uStack_548;
  uStack_2b0 = uStack_541;
  local_2bf = uStack_550;
  uStack_2b8 = local_549;
  uStack_217 = CONCAT17(uStack_581,uStack_588);
  local_21f = CONCAT17(local_589,uStack_590);
  uStack_2f7 = uStack_588;
  uStack_2f0 = uStack_581;
  local_2ff = uStack_590;
  uStack_2f8 = local_589;
  uStack_167 = uStack_4d8;
  uStack_158 = local_3f0;
  uStack_308 = 0;
  local_300 = 0;
  local_228 = 0;
  local_220 = 0;
  local_310 = HVar14.unknown;
  uStack_240 = uStack_4d1;
  uStack_23f = uStack_4d0;
  local_230 = HVar14.unknown;
  uStack_160 = uStack_4d1;
  uStack_15f = uStack_4d0;
  FUN_100011090(&local_310,&local_150,&DAT_100fa91e0,&DAT_100c25fa0);
  FUN_100005808(&local_230,&DAT_100fa91e0,&DAT_100c25fa0);
  puVar9 = &DAT_100eb2048;
  _swift_allocObject(&DAT_100eb2048,0x20,7);
  *(undefined8 *)(puVar9 + 0x10) = local_6f0;
  *(undefined8 *)(puVar9 + 0x18) = local_6e0;
  _swift_retain();
  FUN_1000037f0(&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100057f24();
  BVar15 = SwiftUI::Button::_init();
  SwiftUI::KeyboardShortcut::get_defaultAction((KeyboardShortcut)BVar15.unknown);
  puVar9 = &DAT_100fa91e8;
  FUN_100016eac(&DAT_100fa91e8,&DAT_100fa91c0,&DAT_100c25f80,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  lVar17 = local_6c0;
  puVar4 = local_6d8;
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar18);
  (**(code **)(local_6c8 + 8))(KVar18.unknown,local_6b8);
  (**(code **)(local_6e8 + 8))((long)KVar18.unknown - extraout_x8_01,puVar4);
  lVar5 = local_6a0;
  SwiftUI::BorderedProminentButtonStyle::init();
  local_150 = puVar4;
  ppuVar16 = &local_150;
  puStack_148 = puVar9;
  _swift_getOpaqueTypeConformance2
            (ppuVar16,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_keyboardShortcut(SwiftUI_KeyboardShortcut)__>_some>>_100eab490
             ,1);
  puVar9 = &DAT_100fa91f0;
  FUN_100003a00(&DAT_100fa91f0,PTR_typeMetadataAccessor_100eab0c8,
                PTR_SwiftUI__SwiftUI__BorderedProminentButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eab0b8
               );
  lVar7 = local_688;
  puVar6 = local_690;
  puVar4 = local_6a8;
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle
            (local_688,lVar5,local_6a8,local_690,ppuVar16,puVar9);
  (**(code **)(local_698 + 8))(lVar5,puVar6);
  (**(code **)(local_6b0 + 8))(lVar17,puVar4);
  iVar2 = *(int *)(local_6d0 + 0x24);
  puVar9 = &DAT_100fa7208;
  FUN_1000037f0(&DAT_100fa7208,&DAT_100c27630);
  iVar3 = *(int *)(puVar9 + 0x1c);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_ControlSize_large_SwiftUI_ControlSize_Type___>_SwiftUI_ControlSize_100eaa608
  ;
  CVar8 = SwiftUI::ControlSize::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,CVar8.value) + -8) + 0x68))
            (lVar7 + iVar2 + (long)iVar3,uVar1,CONCAT71(extraout_var,CVar8.value));
  puVar9 = &DAT_100c25fb0;
  _swift_getKeyPath();
  lVar17 = local_678;
  *(undefined **)(lVar7 + iVar2) = puVar9;
  uStack_4e8 = (undefined7)CONCAT71(uStack_267,uStack_268);
  uStack_4e1 = (undefined1)((uint7)uStack_267 >> 0x30);
  uStack_4f0 = (undefined7)CONCAT71(local_26f,uStack_270);
  local_4e9 = (undefined1)((uint7)local_26f >> 0x30);
  uStack_4d8 = (undefined7)CONCAT71(uStack_257,uStack_258);
  uStack_4d1 = (undefined1)((uint7)uStack_257 >> 0x30);
  uStack_4e0 = (undefined7)CONCAT71(local_25f,uStack_260);
  local_4d9 = (undefined1)((uint7)local_25f >> 0x30);
  uStack_4c0 = CONCAT71(uStack_23f,uStack_240);
  uStack_4c8 = (undefined7)CONCAT71(uStack_247,uStack_248);
  uStack_4c1 = (undefined1)((uint7)uStack_247 >> 0x30);
  uStack_4d0 = (undefined7)CONCAT71(local_24f,uStack_250);
  local_4c9 = (undefined1)((uint7)local_24f >> 0x30);
  uStack_4b8 = uStack_238;
  uStack_528 = (undefined7)CONCAT71(uStack_2a7,uStack_2a8);
  uStack_521 = (undefined1)((uint7)uStack_2a7 >> 0x30);
  uStack_530 = (undefined7)CONCAT71(local_2af,uStack_2b0);
  local_529 = (undefined1)((uint7)local_2af >> 0x30);
  uStack_518 = (undefined7)CONCAT71(uStack_297,uStack_298);
  uStack_511 = (undefined1)((uint7)uStack_297 >> 0x30);
  uStack_520 = (undefined7)CONCAT71(local_29f,uStack_2a0);
  local_519 = (undefined1)((uint7)local_29f >> 0x30);
  uStack_508 = (undefined7)CONCAT71(uStack_287,uStack_288);
  uStack_501 = (undefined1)((uint7)uStack_287 >> 0x30);
  uStack_510 = (undefined7)CONCAT71(local_28f,uStack_290);
  local_509 = (undefined1)((uint7)local_28f >> 0x30);
  uStack_4f8 = (undefined7)CONCAT71(uStack_277,uStack_278);
  uStack_4f1 = (undefined1)((uint7)uStack_277 >> 0x30);
  uStack_500 = (undefined7)CONCAT71(local_27f,uStack_280);
  local_4f9 = (undefined1)((uint7)local_27f >> 0x30);
  uStack_568 = (undefined7)CONCAT71(uStack_2e7,uStack_2e8);
  uStack_561 = (undefined1)((uint7)uStack_2e7 >> 0x30);
  uStack_570 = (undefined7)CONCAT71(local_2ef,uStack_2f0);
  local_569 = (undefined1)((uint7)local_2ef >> 0x30);
  uStack_558 = (undefined7)CONCAT71(uStack_2d7,uStack_2d8);
  uStack_551 = (undefined1)((uint7)uStack_2d7 >> 0x30);
  uStack_560 = (undefined7)CONCAT71(local_2df,uStack_2e0);
  local_559 = (undefined1)((uint7)local_2df >> 0x30);
  uStack_548 = (undefined7)CONCAT71(uStack_2c7,uStack_2c8);
  uStack_541 = (undefined1)((uint7)uStack_2c7 >> 0x30);
  uStack_550 = (undefined7)CONCAT71(local_2cf,uStack_2d0);
  local_549 = (undefined1)((uint7)local_2cf >> 0x30);
  uStack_538 = (undefined7)CONCAT71(uStack_2b7,uStack_2b8);
  uStack_531 = (undefined1)((uint7)uStack_2b7 >> 0x30);
  uStack_540 = (undefined7)CONCAT71(local_2bf,uStack_2c0);
  local_539 = (undefined1)((uint7)local_2bf >> 0x30);
  uStack_588 = (undefined7)uStack_308;
  uStack_581 = (undefined1)((ulong)uStack_308 >> 0x38);
  uStack_590 = SUB87(local_310,0);
  local_589 = (undefined1)((ulong)local_310 >> 0x38);
  uStack_578 = (undefined7)CONCAT71(uStack_2f7,uStack_2f8);
  uStack_571 = (undefined1)((uint7)uStack_2f7 >> 0x30);
  uStack_580 = (undefined7)CONCAT71(local_2ff,local_300);
  local_579 = (undefined1)((uint7)local_2ff >> 0x30);
  FUN_100057fb8(lVar7,local_678);
  uStack_a8 = CONCAT17(uStack_4e1,uStack_4e8);
  local_b0 = CONCAT17(local_4e9,uStack_4f0);
  uStack_98 = CONCAT17(uStack_4d1,uStack_4d8);
  local_a0 = CONCAT17(local_4d9,uStack_4e0);
  uStack_88 = CONCAT17(uStack_4c1,uStack_4c8);
  local_90 = CONCAT17(local_4c9,uStack_4d0);
  uStack_78 = uStack_4b8;
  local_80 = uStack_4c0;
  uStack_e8 = CONCAT17(uStack_521,uStack_528);
  local_f0 = CONCAT17(local_529,uStack_530);
  uStack_d8 = CONCAT17(uStack_511,uStack_518);
  local_e0 = CONCAT17(local_519,uStack_520);
  uStack_c8 = CONCAT17(uStack_501,uStack_508);
  local_d0 = CONCAT17(local_509,uStack_510);
  uStack_b8 = CONCAT17(uStack_4f1,uStack_4f8);
  local_c0 = CONCAT17(local_4f9,uStack_500);
  uStack_128 = CONCAT17(uStack_561,uStack_568);
  local_130 = CONCAT17(local_569,uStack_570);
  uStack_118 = CONCAT17(uStack_551,uStack_558);
  local_120 = CONCAT17(local_559,uStack_560);
  uStack_108 = CONCAT17(uStack_541,uStack_548);
  local_110 = CONCAT17(local_549,uStack_550);
  uStack_f8 = CONCAT17(uStack_531,uStack_538);
  local_100 = CONCAT17(local_539,uStack_540);
  puStack_148 = (undefined *)CONCAT17(uStack_581,uStack_588);
  local_150 = (undefined *)CONCAT17(local_589,uStack_590);
  uStack_138 = CONCAT17(uStack_571,uStack_578);
  local_140 = CONCAT17(local_579,uStack_580);
  param_1[0x15] = CONCAT17(uStack_4e1,uStack_4e8);
  param_1[0x14] = CONCAT17(local_4e9,uStack_4f0);
  param_1[0x17] = CONCAT17(uStack_4d1,uStack_4d8);
  param_1[0x16] = CONCAT17(local_4d9,uStack_4e0);
  param_1[0x19] = CONCAT17(uStack_4c1,uStack_4c8);
  param_1[0x18] = CONCAT17(local_4c9,uStack_4d0);
  param_1[0x1b] = uStack_4b8;
  param_1[0x1a] = uStack_4c0;
  param_1[0xd] = CONCAT17(uStack_521,uStack_528);
  param_1[0xc] = CONCAT17(local_529,uStack_530);
  param_1[0xf] = CONCAT17(uStack_511,uStack_518);
  param_1[0xe] = CONCAT17(local_519,uStack_520);
  param_1[0x11] = CONCAT17(uStack_501,uStack_508);
  param_1[0x10] = CONCAT17(local_509,uStack_510);
  param_1[0x13] = CONCAT17(uStack_4f1,uStack_4f8);
  param_1[0x12] = CONCAT17(local_4f9,uStack_500);
  param_1[5] = CONCAT17(uStack_561,uStack_568);
  param_1[4] = CONCAT17(local_569,uStack_570);
  param_1[7] = CONCAT17(uStack_551,uStack_558);
  param_1[6] = CONCAT17(local_559,uStack_560);
  param_1[9] = CONCAT17(uStack_541,uStack_548);
  param_1[8] = CONCAT17(local_549,uStack_550);
  param_1[0xb] = CONCAT17(uStack_531,uStack_538);
  param_1[10] = CONCAT17(local_539,uStack_540);
  param_1[1] = CONCAT17(uStack_581,uStack_588);
  *param_1 = CONCAT17(local_589,uStack_590);
  param_1[3] = CONCAT17(uStack_571,uStack_578);
  param_1[2] = CONCAT17(local_579,uStack_580);
  puVar9 = &DAT_100fa91f8;
  FUN_1000037f0(&DAT_100fa91f8,&DAT_100c25fe0);
  FUN_100057fb8(lVar17,(long)param_1 + (long)*(int *)(puVar9 + 0x30));
  FUN_100011090(&local_150,auStack_670,&DAT_100fa91e0,&DAT_100c25fa0);
  FUN_100005808(lVar7,&DAT_100fa91d0,&DAT_100c25f90);
  FUN_100005808(lVar17,&DAT_100fa91d0,&DAT_100c25f90);
  FUN_100005808(&uStack_590,&DAT_100fa91e0,&DAT_100c25fa0);
  _swift_release(local_680);
  return;
}



/* Address: 0x1000571fc | FUN_1000571fc */

void FUN_1000571fc(undefined8 *param_1)

{
  undefined *puVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  Image IVar8;
  Image IVar9;
  HorizontalAlignment HVar10;
  long extraout_x8;
  long lVar11;
  String SVar12;
  undefined8 *local_5e0;
  undefined1 auStack_5d8 [178];
  undefined6 uStack_526;
  undefined2 local_520;
  undefined6 uStack_51e;
  undefined2 uStack_518;
  undefined6 uStack_516;
  undefined2 local_510;
  undefined6 uStack_50e;
  undefined2 uStack_508;
  undefined6 uStack_506;
  undefined2 local_500;
  undefined6 uStack_4fe;
  undefined2 uStack_4f8;
  undefined6 uStack_4f6;
  undefined2 local_4f0;
  undefined6 uStack_4ee;
  undefined2 uStack_4e8;
  undefined6 uStack_4e6;
  undefined2 local_4e0;
  undefined6 uStack_4de;
  undefined2 uStack_4d8;
  undefined6 uStack_4d6;
  undefined2 local_4d0;
  undefined6 uStack_4ce;
  undefined2 uStack_4c8;
  undefined6 uStack_4c6;
  undefined2 local_4c0;
  undefined6 uStack_4be;
  undefined2 uStack_4b8;
  undefined6 uStack_4b6;
  undefined2 local_4b0;
  undefined6 uStack_4ae;
  undefined2 uStack_4a8;
  undefined6 uStack_4a6;
  undefined2 local_4a0;
  undefined6 uStack_49e;
  undefined2 uStack_498;
  undefined6 uStack_496;
  undefined2 local_490;
  undefined6 uStack_48e;
  undefined2 uStack_488;
  undefined6 uStack_486;
  undefined2 local_480;
  undefined6 uStack_47e;
  undefined2 uStack_478;
  undefined6 uStack_476;
  undefined *local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined *local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined *local_330;
  undefined8 uStack_328;
  undefined1 local_320;
  undefined7 local_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 local_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 local_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 local_2df;
  undefined1 uStack_2d8;
  undefined7 uStack_2d7;
  undefined1 uStack_2d0;
  undefined7 local_2cf;
  undefined1 uStack_2c8;
  undefined7 uStack_2c7;
  undefined1 uStack_2c0;
  undefined7 local_2bf;
  undefined1 uStack_2b8;
  undefined7 uStack_2b7;
  undefined1 uStack_2b0;
  undefined7 local_2af;
  undefined1 uStack_2a8;
  undefined7 uStack_2a7;
  undefined1 uStack_2a0;
  undefined7 local_29f;
  undefined1 uStack_298;
  undefined7 uStack_297;
  undefined1 uStack_290;
  undefined7 uStack_28f;
  undefined8 uStack_288;
  undefined *local_280;
  undefined8 local_278;
  undefined1 local_270;
  undefined8 local_26f;
  undefined8 uStack_267;
  undefined8 local_25f;
  undefined8 uStack_257;
  undefined8 local_24f;
  undefined8 uStack_247;
  undefined8 local_23f;
  undefined8 uStack_237;
  undefined8 local_22f;
  undefined8 uStack_227;
  undefined8 local_21f;
  undefined8 uStack_217;
  undefined8 local_20f;
  undefined8 uStack_207;
  undefined8 local_1ff;
  undefined8 uStack_1f7;
  undefined8 local_1ef;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 uStack_1df;
  undefined8 uStack_1d8;
  undefined7 uStack_1d0;
  undefined1 local_1c9;
  undefined7 uStack_1c8;
  undefined1 uStack_1c1;
  undefined7 uStack_1c0;
  undefined1 local_1b9;
  undefined7 uStack_1b8;
  undefined1 uStack_1b1;
  undefined7 uStack_1b0;
  undefined1 local_1a9;
  undefined7 uStack_1a8;
  undefined1 uStack_1a1;
  undefined7 uStack_1a0;
  undefined1 local_199;
  undefined7 uStack_198;
  undefined1 uStack_191;
  undefined7 uStack_190;
  undefined1 local_189;
  undefined7 uStack_188;
  undefined1 uStack_181;
  undefined7 uStack_180;
  undefined1 local_179;
  undefined7 uStack_178;
  undefined1 uStack_171;
  undefined7 uStack_170;
  undefined1 local_169;
  undefined7 uStack_168;
  undefined1 uStack_161;
  undefined7 uStack_160;
  undefined1 local_159;
  undefined7 uStack_158;
  undefined1 uStack_151;
  undefined7 uStack_150;
  undefined1 local_149;
  undefined7 uStack_148;
  undefined1 uStack_141;
  undefined7 uStack_140;
  undefined1 local_139;
  undefined7 uStack_138;
  undefined1 uStack_131;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puVar3;
  
  local_5e0 = param_1;
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  HVar10.unknown = auStack_5d8 + (-8 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x34,UVar6.unknown,puVar5);
  }
  SVar12.bridgeObject = (void *)0xec0000006e6f6974;
  SVar12.str = (char *)0x7069726373627573;
  IVar8 = SwiftUI::Image::_init(SVar12);
  IVar9.unknown = puVar3;
  (**(code **)(lVar11 + 0x68))
            (HVar10.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar9 = SwiftUI::Image::resizable(HVar10.unknown,(ResizingMode)(__int8)IVar8.unknown,IVar9);
  _swift_release(IVar8.unknown);
  (**(code **)(lVar11 + 8))(HVar10.unknown,puVar3);
  HVar10 = SwiftUI::HorizontalAlignment::get_center(HVar10);
  FUN_100057674(&local_120);
  uStack_408 = uStack_b8;
  local_410 = local_c0;
  uStack_3f8 = uStack_a8;
  uStack_400 = local_b0;
  uStack_3e8 = uStack_98;
  local_3f0 = local_a0;
  uStack_448 = uStack_f8;
  local_450 = local_100;
  uStack_438 = uStack_e8;
  uStack_440 = local_f0;
  uStack_428 = uStack_d8;
  local_430 = local_e0;
  uStack_418 = uStack_c8;
  uStack_420 = local_d0;
  uStack_468 = uStack_118;
  local_470 = local_120;
  uStack_458 = uStack_108;
  uStack_460 = local_110;
  uStack_368 = uStack_b8;
  local_370 = local_c0;
  uStack_358 = uStack_a8;
  uStack_360 = local_b0;
  uStack_348 = uStack_98;
  local_350 = local_a0;
  uStack_3a8 = uStack_f8;
  local_3b0 = local_100;
  uStack_398 = uStack_e8;
  uStack_3a0 = local_f0;
  uStack_388 = uStack_d8;
  local_390 = local_e0;
  uStack_378 = uStack_c8;
  uStack_380 = local_d0;
  local_3e0 = local_90;
  local_340 = local_90;
  uStack_3c8 = uStack_118;
  local_3d0 = local_120;
  uStack_3b8 = uStack_108;
  uStack_3c0 = local_110;
  FUN_100011090(&local_470,&uStack_1d0,&DAT_100fa9200,&DAT_100c25fe8);
  FUN_100005808(&local_3d0,&DAT_100fa9200,&DAT_100c25fe8);
  uStack_191 = (undefined1)uStack_438;
  uStack_190 = (undefined7)((ulong)uStack_438 >> 8);
  local_199 = (undefined1)uStack_440;
  uStack_198 = (undefined7)((ulong)uStack_440 >> 8);
  uStack_1a1 = (undefined1)uStack_448;
  uStack_1a0 = (undefined7)((ulong)uStack_448 >> 8);
  local_1a9 = (undefined1)local_450;
  uStack_1a8 = (undefined7)((ulong)local_450 >> 8);
  uStack_161 = (undefined1)uStack_408;
  uStack_160 = (undefined7)((ulong)uStack_408 >> 8);
  local_169 = (undefined1)local_410;
  uStack_168 = (undefined7)((ulong)local_410 >> 8);
  uStack_151 = (undefined1)uStack_3f8;
  uStack_150 = (undefined7)((ulong)uStack_3f8 >> 8);
  local_159 = (undefined1)uStack_400;
  uStack_158 = (undefined7)((ulong)uStack_400 >> 8);
  uStack_141 = (undefined1)uStack_3e8;
  uStack_140 = (undefined7)((ulong)uStack_3e8 >> 8);
  local_149 = (undefined1)local_3f0;
  uStack_148 = (undefined7)((ulong)local_3f0 >> 8);
  local_139 = (undefined1)local_3e0;
  uStack_138 = (undefined7)((ulong)local_3e0 >> 8);
  uStack_181 = (undefined1)uStack_428;
  uStack_180 = (undefined7)((ulong)uStack_428 >> 8);
  local_189 = (undefined1)local_430;
  uStack_188 = (undefined7)((ulong)local_430 >> 8);
  uStack_171 = (undefined1)uStack_418;
  uStack_170 = (undefined7)((ulong)uStack_418 >> 8);
  local_179 = (undefined1)uStack_420;
  uStack_178 = (undefined7)((ulong)uStack_420 >> 8);
  uStack_1c1 = (undefined1)uStack_468;
  uStack_1c0 = (undefined7)((ulong)uStack_468 >> 8);
  local_1c9 = SUB81(local_470,0);
  uStack_1c8 = (undefined7)((ulong)local_470 >> 8);
  uStack_1b1 = (undefined1)uStack_458;
  uStack_1b0 = (undefined7)((ulong)uStack_458 >> 8);
  local_1b9 = (undefined1)uStack_460;
  uStack_1b8 = (undefined7)((ulong)uStack_460 >> 8);
  uStack_217 = CONCAT17(uStack_171,uStack_178);
  local_21f = CONCAT17(local_179,uStack_180);
  uStack_2b7 = uStack_168;
  uStack_2b0 = uStack_161;
  local_2bf = uStack_170;
  uStack_2b8 = local_169;
  uStack_207 = CONCAT17(uStack_161,uStack_168);
  local_20f = CONCAT17(local_169,uStack_170);
  uStack_2a7 = uStack_158;
  uStack_2a0 = uStack_151;
  local_2af = uStack_160;
  uStack_2a8 = local_159;
  uStack_1f7 = CONCAT17(uStack_151,uStack_158);
  local_1ff = CONCAT17(local_159,uStack_160);
  uStack_297 = uStack_148;
  local_29f = uStack_150;
  uStack_298 = local_149;
  uStack_288 = local_3e0;
  uStack_257 = CONCAT17(uStack_1b1,uStack_1b8);
  local_25f = CONCAT17(local_1b9,uStack_1c0);
  uStack_2f7 = uStack_1a8;
  uStack_2f0 = uStack_1a1;
  local_2ff = uStack_1b0;
  uStack_2f8 = local_1a9;
  uStack_247 = CONCAT17(uStack_1a1,uStack_1a8);
  local_24f = CONCAT17(local_1a9,uStack_1b0);
  uStack_2e7 = uStack_198;
  uStack_2e0 = uStack_191;
  local_2ef = uStack_1a0;
  uStack_2e8 = local_199;
  uStack_237 = CONCAT17(uStack_191,uStack_198);
  local_23f = CONCAT17(local_199,uStack_1a0);
  uStack_2d7 = uStack_188;
  uStack_2d0 = uStack_181;
  local_2df = uStack_190;
  uStack_2d8 = local_189;
  uStack_227 = CONCAT17(uStack_181,uStack_188);
  local_22f = CONCAT17(local_189,uStack_190);
  uStack_2c7 = uStack_178;
  uStack_2c0 = uStack_171;
  local_2cf = uStack_180;
  uStack_2c8 = local_179;
  uStack_317 = uStack_1c8;
  uStack_310 = uStack_1c1;
  local_31f = uStack_1d0;
  uStack_318 = local_1c9;
  uStack_267 = CONCAT17(uStack_1c1,uStack_1c8);
  local_26f = CONCAT17(local_1c9,uStack_1d0);
  uStack_307 = uStack_1b8;
  uStack_300 = uStack_1b1;
  local_30f = uStack_1c0;
  uStack_308 = local_1b9;
  local_1ef = CONCAT17(local_149,uStack_150);
  uStack_1e7 = uStack_148;
  uStack_1d8 = local_3e0;
  uStack_328 = 0x4020000000000000;
  local_320 = 0;
  local_278 = 0x4020000000000000;
  local_270 = 0;
  local_330 = HVar10.unknown;
  uStack_290 = uStack_141;
  uStack_28f = uStack_140;
  local_280 = HVar10.unknown;
  uStack_1e0 = uStack_141;
  uStack_1df = uStack_140;
  FUN_100011090(&local_330,&local_120,&DAT_100fa9208,&DAT_100c25ff0);
  FUN_100005808(&local_280,&DAT_100fa9208,&DAT_100c25ff0);
  uStack_98 = CONCAT71(uStack_2a7,uStack_2a8);
  local_a0 = CONCAT71(local_2af,uStack_2b0);
  uStack_a8 = CONCAT71(uStack_2b7,uStack_2b8);
  local_b0 = CONCAT71(local_2bf,uStack_2c0);
  uStack_88 = CONCAT71(uStack_297,uStack_298);
  local_90 = CONCAT71(local_29f,uStack_2a0);
  uStack_80 = CONCAT71(uStack_28f,uStack_290);
  uStack_78 = uStack_288;
  uStack_d8 = CONCAT71(uStack_2e7,uStack_2e8);
  local_e0 = CONCAT71(local_2ef,uStack_2f0);
  uStack_e8 = CONCAT71(uStack_2f7,uStack_2f8);
  local_f0 = CONCAT71(local_2ff,uStack_300);
  uStack_c8 = CONCAT71(uStack_2d7,uStack_2d8);
  local_d0 = CONCAT71(local_2df,uStack_2e0);
  uStack_b8 = CONCAT71(uStack_2c7,uStack_2c8);
  local_c0 = CONCAT71(local_2cf,uStack_2d0);
  uStack_108 = CONCAT71(uStack_317,uStack_318);
  local_110 = CONCAT71(local_31f,local_320);
  uStack_f8 = CONCAT71(uStack_307,uStack_308);
  local_100 = CONCAT71(local_30f,uStack_310);
  uStack_148 = (undefined7)CONCAT71(uStack_2a7,uStack_2a8);
  uStack_141 = (undefined1)((uint7)uStack_2a7 >> 0x30);
  uStack_150 = (undefined7)CONCAT71(local_2af,uStack_2b0);
  local_149 = (undefined1)((uint7)local_2af >> 0x30);
  uStack_138 = (undefined7)CONCAT71(uStack_297,uStack_298);
  uStack_131 = (undefined1)((uint7)uStack_297 >> 0x30);
  uStack_140 = (undefined7)CONCAT71(local_29f,uStack_2a0);
  local_139 = (undefined1)((uint7)local_29f >> 0x30);
  local_130 = CONCAT71(uStack_28f,uStack_290);
  uStack_128 = uStack_288;
  uStack_118 = uStack_328;
  local_120 = local_330;
  uStack_188 = (undefined7)CONCAT71(uStack_2e7,uStack_2e8);
  uStack_181 = (undefined1)((uint7)uStack_2e7 >> 0x30);
  uStack_190 = (undefined7)CONCAT71(local_2ef,uStack_2f0);
  local_189 = (undefined1)((uint7)local_2ef >> 0x30);
  uStack_178 = (undefined7)CONCAT71(uStack_2d7,uStack_2d8);
  uStack_171 = (undefined1)((uint7)uStack_2d7 >> 0x30);
  uStack_180 = (undefined7)CONCAT71(local_2df,uStack_2e0);
  local_179 = (undefined1)((uint7)local_2df >> 0x30);
  uStack_168 = (undefined7)CONCAT71(uStack_2c7,uStack_2c8);
  uStack_161 = (undefined1)((uint7)uStack_2c7 >> 0x30);
  uStack_170 = (undefined7)CONCAT71(local_2cf,uStack_2d0);
  local_169 = (undefined1)((uint7)local_2cf >> 0x30);
  uStack_158 = (undefined7)CONCAT71(uStack_2b7,uStack_2b8);
  uStack_151 = (undefined1)((uint7)uStack_2b7 >> 0x30);
  uStack_160 = (undefined7)CONCAT71(local_2bf,uStack_2c0);
  local_159 = (undefined1)((uint7)local_2bf >> 0x30);
  uStack_1c8 = (undefined7)uStack_328;
  uStack_1c1 = (undefined1)((ulong)uStack_328 >> 0x38);
  uStack_1d0 = SUB87(local_330,0);
  local_1c9 = (undefined1)((ulong)local_330 >> 0x38);
  uStack_1b8 = (undefined7)CONCAT71(uStack_317,uStack_318);
  uStack_1b1 = (undefined1)((uint7)uStack_317 >> 0x30);
  uStack_1c0 = (undefined7)CONCAT71(local_31f,local_320);
  local_1b9 = (undefined1)((uint7)local_31f >> 0x30);
  uStack_1a8 = (undefined7)CONCAT71(uStack_307,uStack_308);
  uStack_1a1 = (undefined1)((uint7)uStack_307 >> 0x30);
  uStack_1b0 = (undefined7)CONCAT71(local_30f,uStack_310);
  local_1a9 = (undefined1)((uint7)local_30f >> 0x30);
  uStack_198 = (undefined7)CONCAT71(uStack_2f7,uStack_2f8);
  uStack_191 = (undefined1)((uint7)uStack_2f7 >> 0x30);
  uStack_1a0 = (undefined7)CONCAT71(local_2ff,uStack_300);
  local_199 = (undefined1)((uint7)local_2ff >> 0x30);
  uStack_4d8 = (undefined2)CONCAT71(uStack_2e7,uStack_2e8);
  uStack_4d6 = (undefined6)((uint7)uStack_2e7 >> 8);
  local_4e0 = (undefined2)CONCAT71(local_2ef,uStack_2f0);
  uStack_4de = (undefined6)((uint7)local_2ef >> 8);
  uStack_4e8 = (undefined2)CONCAT71(uStack_2f7,uStack_2f8);
  uStack_4e6 = (undefined6)((uint7)uStack_2f7 >> 8);
  local_4f0 = (undefined2)CONCAT71(local_2ff,uStack_300);
  uStack_4ee = (undefined6)((uint7)local_2ff >> 8);
  uStack_4a8 = (undefined2)CONCAT71(uStack_2b7,uStack_2b8);
  uStack_4a6 = (undefined6)((uint7)uStack_2b7 >> 8);
  local_4b0 = (undefined2)CONCAT71(local_2bf,uStack_2c0);
  uStack_4ae = (undefined6)((uint7)local_2bf >> 8);
  uStack_498 = (undefined2)CONCAT71(uStack_2a7,uStack_2a8);
  uStack_496 = (undefined6)((uint7)uStack_2a7 >> 8);
  local_4a0 = (undefined2)CONCAT71(local_2af,uStack_2b0);
  uStack_49e = (undefined6)((uint7)local_2af >> 8);
  uStack_488 = (undefined2)CONCAT71(uStack_297,uStack_298);
  uStack_486 = (undefined6)((uint7)uStack_297 >> 8);
  local_490 = (undefined2)CONCAT71(local_29f,uStack_2a0);
  uStack_48e = (undefined6)((uint7)local_29f >> 8);
  uStack_478 = (undefined2)uStack_288;
  uStack_476 = (undefined6)((ulong)uStack_288 >> 0x10);
  local_480 = (undefined2)CONCAT71(uStack_28f,uStack_290);
  uStack_47e = (undefined6)((uint7)uStack_28f >> 8);
  uStack_4c8 = (undefined2)CONCAT71(uStack_2d7,uStack_2d8);
  uStack_4c6 = (undefined6)((uint7)uStack_2d7 >> 8);
  local_4d0 = (undefined2)CONCAT71(local_2df,uStack_2e0);
  uStack_4ce = (undefined6)((uint7)local_2df >> 8);
  uStack_4b8 = (undefined2)CONCAT71(uStack_2c7,uStack_2c8);
  uStack_4b6 = (undefined6)((uint7)uStack_2c7 >> 8);
  local_4c0 = (undefined2)CONCAT71(local_2cf,uStack_2d0);
  uStack_4be = (undefined6)((uint7)local_2cf >> 8);
  uStack_518 = (undefined2)uStack_328;
  uStack_516 = (undefined6)((ulong)uStack_328 >> 0x10);
  local_520 = SUB82(local_330,0);
  uStack_51e = (undefined6)((ulong)local_330 >> 0x10);
  uStack_508 = (undefined2)CONCAT71(uStack_317,uStack_318);
  uStack_506 = (undefined6)((uint7)uStack_317 >> 8);
  local_510 = (undefined2)CONCAT71(local_31f,local_320);
  uStack_50e = (undefined6)((uint7)local_31f >> 8);
  uStack_4f8 = (undefined2)CONCAT71(uStack_307,uStack_308);
  uStack_4f6 = (undefined6)((uint7)uStack_307 >> 8);
  local_500 = (undefined2)CONCAT71(local_30f,uStack_310);
  uStack_4fe = (undefined6)((uint7)local_30f >> 8);
  *(ulong *)((long)local_5e0 + 0x9a) = CONCAT26(uStack_498,uStack_49e);
  *(ulong *)((long)local_5e0 + 0x92) = CONCAT26(local_4a0,uStack_4a6);
  *(ulong *)((long)local_5e0 + 0xaa) = CONCAT26(uStack_488,uStack_48e);
  *(ulong *)((long)local_5e0 + 0xa2) = CONCAT26(local_490,uStack_496);
  *(ulong *)((long)local_5e0 + 0xba) = CONCAT26(uStack_478,uStack_47e);
  *(ulong *)((long)local_5e0 + 0xb2) = CONCAT26(local_480,uStack_486);
  *(ulong *)((long)local_5e0 + 0x5a) = CONCAT26(uStack_4d8,uStack_4de);
  *(ulong *)((long)local_5e0 + 0x52) = CONCAT26(local_4e0,uStack_4e6);
  *(ulong *)((long)local_5e0 + 0x6a) = CONCAT26(uStack_4c8,uStack_4ce);
  *(ulong *)((long)local_5e0 + 0x62) = CONCAT26(local_4d0,uStack_4d6);
  *(ulong *)((long)local_5e0 + 0x7a) = CONCAT26(uStack_4b8,uStack_4be);
  *(ulong *)((long)local_5e0 + 0x72) = CONCAT26(local_4c0,uStack_4c6);
  *(ulong *)((long)local_5e0 + 0x8a) = CONCAT26(uStack_4a8,uStack_4ae);
  *(ulong *)((long)local_5e0 + 0x82) = CONCAT26(local_4b0,uStack_4b6);
  *(ulong *)((long)local_5e0 + 0x1a) = CONCAT26(uStack_518,uStack_51e);
  *(ulong *)((long)local_5e0 + 0x12) = CONCAT26(local_520,uStack_526);
  *(ulong *)((long)local_5e0 + 0x2a) = CONCAT26(uStack_508,uStack_50e);
  *(ulong *)((long)local_5e0 + 0x22) = CONCAT26(local_510,uStack_516);
  *(ulong *)((long)local_5e0 + 0x3a) = CONCAT26(uStack_4f8,uStack_4fe);
  *(ulong *)((long)local_5e0 + 0x32) = CONCAT26(local_500,uStack_506);
  *local_5e0 = IVar9.unknown;
  local_5e0[1] = 0;
  *(undefined2 *)(local_5e0 + 2) = 1;
  local_5e0[0x18] = uStack_288;
  *(ulong *)((long)local_5e0 + 0x4a) = CONCAT26(uStack_4e8,uStack_4ee);
  *(ulong *)((long)local_5e0 + 0x42) = CONCAT26(local_4f0,uStack_4f6);
  _swift_retain(IVar9.unknown);
  FUN_100011090(&uStack_1d0,auStack_5d8,&DAT_100fa9208,&DAT_100c25ff0);
  FUN_100005808(&local_120,&DAT_100fa9208,&DAT_100c25ff0);
  _swift_release(pMVar4);
  _swift_release(IVar9.unknown);
  return;
}



/* Address: 0x100057674 | FUN_100057674 */

void FUN_100057674(undefined8 *param_1)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  Text TVar7;
  undefined *puVar8;
  Font FVar9;
  Font FVar10;
  Font FVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 in_x3;
  long extraout_x8;
  undefined1 auStack_4a0 [8];
  LocalizedStringResource local_498;
  char *local_490;
  undefined8 *local_488;
  MainActor *local_480;
  undefined1 auStack_478 [88];
  char *local_420;
  undefined *puStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined *local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  undefined *puStack_3d8;
  undefined *local_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined8 local_3b8;
  undefined *puStack_3b0;
  undefined *local_3a8;
  undefined8 uStack_3a0;
  undefined *local_398;
  undefined *puStack_390;
  char *local_380;
  undefined *puStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined *local_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined *puStack_348;
  undefined8 local_340;
  undefined *puStack_338;
  undefined *local_330;
  char *local_320;
  undefined *puStack_318;
  undefined1 local_310;
  undefined7 uStack_30f;
  undefined8 local_308;
  undefined *local_300;
  undefined8 uStack_2f8;
  undefined1 local_2f0;
  undefined7 uStack_2ef;
  undefined *local_2e8;
  undefined1 local_2e0;
  undefined *local_2d8;
  undefined *puStack_2d0;
  undefined1 local_2c8;
  undefined8 local_2c0;
  undefined *puStack_2b8;
  undefined8 local_2b0;
  undefined1 local_2a8;
  undefined *local_2a0;
  undefined1 local_298;
  char *local_290;
  undefined *puStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined *puStack_258;
  undefined8 local_250;
  undefined *puStack_248;
  undefined *local_240;
  char *local_230;
  undefined *puStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined *local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *local_1e0;
  undefined *local_1d0;
  undefined *puStack_1c8;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined *puStack_1b8;
  undefined *local_1b0;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined *local_1a0;
  undefined *puStack_198;
  undefined *local_190;
  undefined *local_188;
  undefined1 local_180;
  undefined *local_178;
  undefined *local_170;
  undefined1 local_168;
  undefined *local_160;
  undefined *local_158;
  String local_150;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined *puStack_118;
  undefined8 local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  local_488 = param_1;
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  LVar1.unknown = auStack_4a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar8 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar8,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_480 = pMVar2;
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x39;
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x39,UVar4.unknown,puVar3);
  }
  FUN_1001e2a54(LVar1.unknown);
  local_150 = (extension_Foundation)::Swift::String::init(LVar1);
  pcVar6 = local_150.str;
  FUN_100008378();
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  local_490 = pcVar6;
  TVar7 = SwiftUI::Text::_init();
  puVar8 = &DAT_100c25ff8;
  _swift_getKeyPath();
  FVar9.unknown = &DAT_100c26028;
  _swift_getKeyPath();
  local_498.unknown = LVar1.unknown;
  FVar10 = SwiftUI::Font::get_title(FVar9);
  FVar11 = SwiftUI::Font::bold(FVar10);
  _swift_release(FVar10.unknown);
  uStack_2f8 = 2;
  local_2f0 = 0;
  local_2e0 = 1;
  puVar12 = &DAT_100c26058;
  local_320 = (char *)TVar7;
  puStack_318 = puVar13;
  local_310 = (char)pcVar6;
  local_308 = in_x3;
  local_300 = puVar8;
  local_2e8 = FVar9.unknown;
  _swift_getKeyPath();
  uStack_350 = CONCAT71(uStack_2ef,local_2f0);
  uStack_358 = uStack_2f8;
  local_360 = local_300;
  puStack_348 = local_2e8;
  local_340 = CONCAT71(local_340._1_7_,local_2e0);
  uStack_370 = CONCAT71(uStack_30f,local_310);
  puStack_378 = puStack_318;
  local_380 = local_320;
  uStack_368 = local_308;
  local_2b0 = 2;
  local_2a8 = 0;
  local_298 = 1;
  local_2d8 = TVar7.unknown;
  puStack_2d0 = puVar13;
  local_2c8 = (char)pcVar6;
  local_2c0 = in_x3;
  puStack_2b8 = puVar8;
  local_2a0 = FVar9.unknown;
  FUN_100011090(&local_320,&local_150,&DAT_100fa9210,&DAT_100c26088);
  FUN_100005808(&local_2d8,&DAT_100fa9210,&DAT_100c26088);
  uStack_268 = uStack_358;
  local_270 = local_360;
  puStack_258 = puStack_348;
  local_260 = uStack_350;
  puStack_288 = puStack_378;
  local_290 = local_380;
  uStack_278 = uStack_368;
  local_280 = uStack_370;
  local_250 = local_340;
  uStack_208 = uStack_358;
  local_210 = local_360;
  puStack_1f8 = puStack_348;
  uStack_200 = uStack_350;
  puStack_228 = puStack_378;
  local_230 = local_380;
  uStack_218 = uStack_368;
  uStack_220 = uStack_370;
  local_1f0 = local_340;
  puVar8 = &DAT_100c26090;
  puStack_248 = puVar12;
  local_240 = FVar11.unknown;
  local_1e8 = puVar12;
  local_1e0 = FVar11.unknown;
  FUN_100011090(&local_290,&local_150,&DAT_100fa9218);
  FUN_100005808(&local_230,&DAT_100fa9218,&DAT_100c26090);
  LVar1.unknown = local_498.unknown;
  FUN_1001e2bd4(local_498.unknown);
  local_150 = (extension_Foundation)::Swift::String::init(LVar1);
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar6 = local_490;
  TVar7 = SwiftUI::Text::_init();
  FVar9.unknown = &DAT_100c26028;
  _swift_getKeyPath();
  FVar10 = SwiftUI::Font::get_callout(FVar9);
  puVar12 = &DAT_100c26058;
  _swift_getKeyPath();
  local_1c0 = SUB81(pcVar6,0);
  uStack_1a8 = 1;
  local_168 = 1;
  local_1d0 = TVar7.unknown;
  puStack_1c8 = puVar13;
  puStack_1b8 = puVar8;
  local_1b0 = FVar9.unknown;
  local_1a0 = puVar12;
  puStack_198 = FVar10.unknown;
  local_190 = TVar7.unknown;
  local_188 = puVar13;
  local_180 = local_1c0;
  local_178 = puVar8;
  local_170 = FVar9.unknown;
  local_160 = puVar12;
  local_158 = FVar10.unknown;
  FUN_100011090(&local_1d0,&local_150,&DAT_100fa9220,&DAT_100c26098);
  FUN_100005808(&local_190,&DAT_100fa9220,&DAT_100c26098);
  uStack_358 = uStack_268;
  local_360 = local_270;
  puStack_348 = puStack_258;
  uStack_350 = local_260;
  puStack_338 = puStack_248;
  local_340 = local_250;
  puStack_378 = puStack_288;
  local_380 = local_290;
  uStack_368 = uStack_278;
  uStack_370 = local_280;
  uStack_3a0 = CONCAT71(uStack_1a7,uStack_1a8);
  local_3b8 = CONCAT71(uStack_1bf,local_1c0);
  uStack_88 = CONCAT71(uStack_1a7,uStack_1a8);
  local_90 = local_1b0;
  puStack_78 = puStack_198;
  puStack_80 = local_1a0;
  uStack_a0 = CONCAT71(uStack_1bf,local_1c0);
  puStack_a8 = puStack_1c8;
  local_b0 = local_1d0;
  puStack_98 = puStack_1b8;
  uStack_128 = uStack_268;
  local_130 = local_270;
  puStack_118 = puStack_258;
  uStack_120 = local_260;
  uStack_408 = uStack_278;
  local_410 = local_280;
  uStack_3f8 = uStack_268;
  local_400 = local_270;
  puStack_108 = puStack_248;
  local_110 = local_250;
  puStack_3e8 = puStack_258;
  local_3f0 = local_260;
  puStack_3d8 = puStack_248;
  uStack_3e0 = local_250;
  local_330 = local_240;
  local_100 = local_240;
  local_150.bridgeObject = puStack_288;
  local_150.str = local_290;
  uStack_138 = uStack_278;
  uStack_140 = local_280;
  local_3d0 = local_240;
  puStack_418 = puStack_288;
  local_420 = local_290;
  local_d0 = local_1b0;
  puStack_b8 = puStack_198;
  puStack_c0 = local_1a0;
  puStack_e8 = puStack_1c8;
  local_f0 = local_1d0;
  puStack_d8 = puStack_1b8;
  puStack_390 = puStack_198;
  local_398 = local_1a0;
  local_3a8 = local_1b0;
  puStack_3b0 = puStack_1b8;
  puStack_3c0 = puStack_1c8;
  puStack_3c8 = local_1d0;
  local_488[1] = puStack_288;
  *local_488 = local_290;
  local_488[3] = uStack_278;
  local_488[2] = local_280;
  local_488[9] = puStack_248;
  local_488[8] = local_250;
  local_488[0xb] = local_1d0;
  local_488[10] = local_240;
  local_488[5] = uStack_268;
  local_488[4] = local_270;
  local_488[7] = puStack_258;
  local_488[6] = local_260;
  local_488[0x12] = puStack_198;
  local_488[0xf] = local_1b0;
  local_488[0xe] = puStack_1b8;
  local_488[0x11] = local_1a0;
  local_488[0x10] = uStack_3a0;
  local_488[0xd] = local_3b8;
  local_488[0xc] = puStack_1c8;
  uStack_e0 = local_3b8;
  uStack_c8 = uStack_3a0;
  FUN_100011090(&local_150,auStack_478,&DAT_100fa9218,&DAT_100c26090);
  FUN_100011090(&local_f0,auStack_478,&DAT_100fa9220,&DAT_100c26098);
  FUN_100005808(&local_b0,&DAT_100fa9220,&DAT_100c26098);
  FUN_100005808(&local_380,&DAT_100fa9218,&DAT_100c26090);
  _swift_release(local_480);
  return;
}



/* Address: 0x100057adc | FUN_100057adc */

void FUN_100057adc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 local_48;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,param_3,UVar4.unknown,puVar3);
  }
  FUN_1000da768(&local_48);
  FUN_100017d4c();
  _swift_release(pMVar2);
  _swift_release(local_48);
  return;
}



/* Address: 0x100057bb8 | FUN_100057bb8 */

void FUN_100057bb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  LocalizedStringResource LVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  Text TVar6;
  Set _all;
  undefined *puVar7;
  undefined1 uVar8;
  undefined8 in_x3;
  long extraout_x8;
  undefined8 uVar9;
  undefined1 auStack_140 [80];
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  undefined8 local_d8;
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  String local_a0;
  undefined1 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  LVar1 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar1.unknown + -8) + 0x40));
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    in_x3 = 0x47;
    _swift_task_reportUnexpectedExecutor
              ("Paste/SubscriptionSettingsView.swift",0x24,1,0x47,UVar4.unknown,puVar3);
  }
  FUN_1001c4e98(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_a0 = (extension_Foundation)::Swift::String::init
                       ((LocalizedStringResource)
                        (auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)));
  uVar8 = local_a0.str._0_1_;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar6 = SwiftUI::Text::_init();
  _all = SwiftUI::Edge::Set::get_horizontal(TVar6.unknown);
  uVar9 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_d0 = SUB81(_all.unknown,0);
  local_b8 = (undefined1)param_4;
  uStack_b7 = (undefined7)((ulong)param_4 >> 8);
  uStack_b0 = (undefined1)param_5;
  uStack_af = (undefined7)((ulong)param_5 >> 8);
  uStack_a8 = 0;
  local_a0.bridgeObject = puVar7;
  local_a0.str = TVar6.unknown;
  local_58 = 0;
  local_f0 = TVar6.unknown;
  puStack_e8 = puVar7;
  local_e0 = uVar8;
  local_d8 = in_x3;
  uStack_c8 = uVar9;
  uStack_c0 = param_3;
  local_90 = uVar8;
  local_88 = in_x3;
  local_80 = local_d0;
  local_78 = uVar9;
  uStack_70 = param_3;
  local_68 = param_4;
  uStack_60 = param_5;
  FUN_100011090(&local_f0,auStack_140,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(&local_a0,&DAT_100fa7ed8,&DAT_100c24e98);
  _swift_release(pMVar2);
  param_1[5] = uStack_c8;
  param_1[4] = CONCAT71(uStack_cf,local_d0);
  param_1[7] = CONCAT71(uStack_b7,local_b8);
  param_1[6] = uStack_c0;
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(uStack_a8,uStack_af);
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_b0,uStack_b7);
  param_1[1] = puStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = CONCAT71(uStack_df,local_e0);
  return;
}



/* Address: 0x100057d74 | FUN_100057d74 */

void FUN_100057d74(void)

{
  undefined8 *unaff_x20;
  
  FUN_100055a94(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100057d7c | thunk_FUN_1000aafa8 */

void thunk_FUN_1000aafa8(void)

{
  FUN_1000aafa8();
  return;
}



/* Address: 0x100057d80 | thunk_FUN_1000ab010 */

void thunk_FUN_1000ab010(void)

{
  FUN_1000ab010();
  return;
}



/* Address: 0x100057d84 | FUN_100057d84 */

undefined8 FUN_100057d84(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa9140;
  FUN_1000037f0(&DAT_100fa9140,&DAT_100c25ec0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100057dd4 | FUN_100057dd4 */

void FUN_100057dd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9140;
  FUN_100005c24(&DAT_100fa9140,&DAT_100c25ec0);
  puVar2 = &DAT_100fa9170;
  FUN_100016eac(&DAT_100fa9170,&DAT_100fa9178,&DAT_100c25f30,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9168 = puVar3;
  return;
}



/* Address: 0x100057e6c | FUN_100057e6c */

void FUN_100057e6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100057e90 | FUN_100057e90 */

void FUN_100057e90(void)

{
  long unaff_x20;
  
  FUN_100057adc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x26);
  return;
}



/* Address: 0x100057eac | FUN_100057eac */

void FUN_100057eac(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa91b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa91a8;
  FUN_100005c24(&DAT_100fa91a8,&DAT_100c25f70);
  puVar2 = puVar1;
  FUN_100057f24();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa91b0 = puVar3;
  return;
}



/* Address: 0x100057f24 | FUN_100057f24 */

void FUN_100057f24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fa91b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7ed8;
  FUN_100005c24(&DAT_100fa7ed8,&DAT_100c24e98);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fa91b8 = puVar2;
  return;
}



/* Address: 0x100057f94 | FUN_100057f94 */

void FUN_100057f94(void)

{
  long unaff_x20;
  
  FUN_100057adc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),0x45);
  return;
}



/* Address: 0x100057fb0 | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x100057fb4 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100057fb8 | FUN_100057fb8 */

undefined8 FUN_100057fb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa91d0;
  FUN_1000037f0(&DAT_100fa91d0,&DAT_100c25f90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100058008 | thunk_FUN_10009cde8 */

void thunk_FUN_10009cde8(void)

{
  FUN_10009cde8();
  return;
}



/* Address: 0x10005800c | thunk_FUN_10009ce14 */

void thunk_FUN_10009ce14(void)

{
  FUN_10009ce14();
  return;
}



/* Address: 0x100058010 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x100058014 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x100058018 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x10005801c | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100058020 | thunk_FUN_100058024 */

void thunk_FUN_100058024(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa9228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9230;
  FUN_100005c24(&DAT_100fa9230,&DAT_100c260a0);
  puVar2 = &DAT_100fa9160;
  FUN_100016eac(&DAT_100fa9160,&DAT_100fa9150,&DAT_100c25ed0,
                &TargetProtocolConformanceDescriptor_100c254b8);
  puVar3 = puVar2;
  FUN_100057dd4();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&puStack_30);
  DAT_100fa9228 = puVar4;
  return;
}


