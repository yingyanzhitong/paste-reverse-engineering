/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10028131c | FUN_10028131c */

void FUN_10028131c(undefined8 *param_1,Alignment param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  GeometryProxy GVar9;
  CGSize CVar10;
  undefined1 auStack_180 [80];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar2 = param_3[2];
  puVar4 = (undefined *)param_3[3];
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_100270a58();
  UVar7 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Reviews.swift",0x24,1,0x28,UVar7.unknown,pMVar5);
  }
  _swift_bridgeObjectRetain(uVar3);
  GVar9.unknown = puVar4;
  _swift_bridgeObjectRetain();
  CVar10 = SwiftUI::GeometryProxy::get_size(GVar9);
  CVar10 = SwiftUI::GeometryProxy::get_size(CVar10.unknown);
  SwiftUI::Alignment::get_center((Alignment)CVar10.unknown);
  SwiftUI::_FrameLayout::_init(param_2);
  uStack_d8 = uStack_128;
  local_e0 = local_130;
  uStack_c8 = uStack_118;
  uStack_d0 = uStack_120;
  uStack_b8 = uStack_108;
  local_c0 = local_110;
  uStack_78 = uStack_118;
  local_80 = uStack_120;
  uStack_68 = uStack_108;
  uStack_70 = local_110;
  uStack_88 = uStack_128;
  local_90 = local_130;
  local_100 = uVar1;
  uStack_f8 = uVar3;
  local_f0 = uVar2;
  puStack_e8 = puVar4;
  local_b0 = uVar1;
  uStack_a8 = uVar3;
  local_a0 = uVar2;
  puStack_98 = puVar4;
  FUN_100011090(&local_100,auStack_180,&DAT_100fb9f68,&DAT_100c3a580);
  FUN_100005808(&local_b0,&DAT_100fb9f68,&DAT_100c3a580);
  _swift_release(pMVar6);
  param_1[5] = uStack_d8;
  param_1[4] = local_e0;
  param_1[7] = uStack_c8;
  param_1[6] = uStack_d0;
  param_1[9] = uStack_b8;
  param_1[8] = local_c0;
  param_1[1] = uStack_f8;
  *param_1 = local_100;
  param_1[3] = puStack_e8;
  param_1[2] = local_f0;
  return;
}



/* Address: 0x10028148c | FUN_10028148c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10028148c(ID param_1,long param_2)

{
  ID IVar1;
  undefined *puVar2;
  State SVar3;
  double extraout_d0;
  double extraout_d0_00;
  char local_78;
  undefined7 uStack_77;
  State local_70;
  undefined8 uStack_68;
  State local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  IVar1 = objc_stub::phase(param_1);
  if (IVar1 == 1) {
    objc_stub::scrollingDeltaX(param_1);
    uStack_58 = *(undefined8 *)(param_2 + 0x20);
    local_60.unknown = *(undefined **)(param_2 + 0x18);
    local_70.unknown._0_1_ = extraout_d0 != 0.0;
    puVar2 = &DAT_100fb9b30;
    FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
    SwiftUI::State::set_wrappedValue(&local_60,&local_70,puVar2);
  }
  uStack_58 = *(undefined8 *)(param_2 + 0x20);
  local_60.unknown = *(undefined **)(param_2 + 0x18);
  uStack_68 = *(undefined8 *)(param_2 + 0x20);
  local_70.unknown = *(undefined **)(param_2 + 0x18);
  local_48 = uStack_58;
  FUN_100011090(&local_48,&local_78,&DAT_100fb9f38,&DAT_100c3afe0);
  SVar3.unknown = &DAT_100fb9b30;
  FUN_1000037f0(&DAT_100fb9b30,&DAT_100c3a550);
  SwiftUI::State::get_wrappedValue(SVar3);
  if (local_78 == '\x01') {
    IVar1 = objc_stub::phase(param_1);
    if (IVar1 == 8) {
      uStack_68 = uStack_58;
      local_70.unknown = local_60.unknown;
      local_78 = '\0';
      SwiftUI::State::set_wrappedValue(&local_70,&local_78,SVar3.unknown);
      FUN_100005808(&local_60,&DAT_100fb9b30,&DAT_100c3a550);
      uStack_68 = *(undefined8 *)(param_2 + 0x30);
      local_70.unknown = *(undefined **)(param_2 + 0x28);
      SVar3.unknown = &DAT_100fb9f40;
      FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
      SwiftUI::State::get_wrappedValue(SVar3);
      FUN_100281670(CONCAT71(uStack_77,local_78));
    }
    else {
      FUN_100005808(&local_60,&DAT_100fb9b30,&DAT_100c3a550);
      uStack_68 = *(undefined8 *)(param_2 + 0x30);
      local_70.unknown = *(undefined **)(param_2 + 0x28);
      SVar3.unknown = &DAT_100fb9f40;
      FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
      SwiftUI::State::get_wrappedValue(SVar3);
      objc_stub::scrollingDeltaX(param_1);
      FUN_100281840((double)CONCAT71(uStack_77,local_78) + extraout_d0_00);
    }
    param_1 = 0;
  }
  else {
    FUN_100005808(&local_60,&DAT_100fb9b30,&DAT_100c3a550);
  }
  return param_1;
}



/* Address: 0x100281670 | FUN_100281670 */

void FUN_100281670(double param_1)

{
  code *pcVar1;
  bool bVar2;
  State SVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  double dVar8;
  long local_58;
  State local_50;
  long lStack_48;
  
  lStack_48 = unaff_x20[2];
  local_50.unknown = (undefined *)unaff_x20[1];
  SVar3.unknown = &DAT_100fb9f48;
  FUN_1000037f0(&DAT_100fb9f48,&DAT_100c3a560);
  SwiftUI::State::get_wrappedValue(SVar3);
  dVar8 = (double)(long)((double)local_58 + param_1 / -150.0);
  if (0x7fefffffffffffff < (ulong)ABS(dVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10028182c);
    (*pcVar1)();
  }
  if (dVar8 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100281830);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100281834);
    (*pcVar1)();
  }
  uVar5 = *(long *)(*unaff_x20 + 0x10) - 1;
  uVar7 = (long)dVar8 & ((long)dVar8 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)uVar7 <= (long)uVar5) {
    uVar5 = uVar7;
  }
  lStack_48 = unaff_x20[2];
  local_50.unknown = (undefined *)unaff_x20[1];
  SwiftUI::State::get_wrappedValue(SVar3);
  lVar6 = local_58 - uVar5;
  if (!SBORROW8(local_58,uVar5)) {
    if ((lVar6 < 0) && (bVar2 = SBORROW8(0,lVar6), lVar6 = -lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10028183c);
      (*pcVar1)();
    }
    if (1 < lVar6) {
      lStack_48 = unaff_x20[2];
      local_50.unknown = (undefined *)unaff_x20[1];
      SwiftUI::State::get_wrappedValue(SVar3);
      if (local_58 < (long)uVar5) {
        lStack_48 = unaff_x20[2];
        local_50.unknown = (undefined *)unaff_x20[1];
        SwiftUI::State::get_wrappedValue(SVar3);
        uVar5 = local_58 + 1;
        if (SCARRY8(local_58,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1002817b0);
          (*pcVar1)();
        }
      }
      else {
        lStack_48 = unaff_x20[2];
        local_50.unknown = (undefined *)unaff_x20[1];
        SwiftUI::State::get_wrappedValue(SVar3);
        uVar5 = local_58 - 1;
        if (SBORROW8(local_58,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100281840);
          (*pcVar1)();
        }
      }
    }
    FUN_100280c6c(uVar5);
    lStack_48 = unaff_x20[6];
    local_50.unknown = (undefined *)unaff_x20[5];
    local_58 = 0;
    puVar4 = &DAT_100fb9f40;
    FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
    SwiftUI::State::set_wrappedValue(&local_50,&local_58,puVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100281838);
  (*pcVar1)();
}



/* Address: 0x100281840 | FUN_100281840 */

void FUN_100281840(double param_1)

{
  State SVar1;
  undefined *puVar2;
  long *unaff_x20;
  double dVar3;
  double local_58;
  State local_50;
  long lStack_48;
  
  lStack_48 = unaff_x20[2];
  local_50.unknown = (undefined *)unaff_x20[1];
  SVar1.unknown = &DAT_100fb9f48;
  FUN_1000037f0(&DAT_100fb9f48,&DAT_100c3a560);
  SwiftUI::State::get_wrappedValue(SVar1);
  if ((local_58 != 0.0) || (param_1 < 0.0)) {
    lStack_48 = unaff_x20[2];
    local_50.unknown = (undefined *)unaff_x20[1];
    SwiftUI::State::get_wrappedValue(SVar1);
    if ((local_58 != (double)(*(long *)(*unaff_x20 + 0x10) + -1)) || (0.0 <= param_1)) {
      lStack_48 = unaff_x20[6];
      local_50.unknown = (undefined *)unaff_x20[5];
      local_58 = param_1;
      goto LAB_10028193c;
    }
    dVar3 = param_1 / -410.0 + 1.0;
    _log();
    local_58 = -240.0;
  }
  else {
    dVar3 = param_1 / 410.0 + 1.0;
    _log();
    local_58 = 240.0;
  }
  lStack_48 = unaff_x20[6];
  local_50.unknown = (undefined *)unaff_x20[5];
  local_58 = dVar3 * local_58;
LAB_10028193c:
  puVar2 = &DAT_100fb9f40;
  FUN_1000037f0(&DAT_100fb9f40,&DAT_100c3aff0);
  SwiftUI::State::set_wrappedValue(&local_50,&local_58,puVar2);
  return;
}



/* Address: 0x100281978 | FUN_100281978 */

void FUN_100281978(undefined8 *param_1,Alignment param_2,undefined8 param_3)

{
  Alignment AVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auStack_d0 [64];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  local_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  AVar1 = SwiftUI::Alignment::get_bottom(param_2);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Reviews.swift",0x24,1,0x24,UVar4.unknown,pMVar2);
  }
  puVar6 = &DAT_100ec5720;
  _swift_allocObject(&DAT_100ec5720,0x50,7);
  uVar7 = *unaff_x20;
  uVar9 = unaff_x20[3];
  uVar8 = unaff_x20[2];
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar6 + 0x10) = uVar7;
  *(undefined8 *)(puVar6 + 0x28) = uVar9;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  uVar7 = unaff_x20[4];
  uVar9 = unaff_x20[7];
  uVar8 = unaff_x20[6];
  *(undefined8 *)(puVar6 + 0x38) = unaff_x20[5];
  *(undefined8 *)(puVar6 + 0x30) = uVar7;
  *(undefined8 *)(puVar6 + 0x48) = uVar9;
  *(undefined8 *)(puVar6 + 0x40) = uVar8;
  FUN_100282b74(&local_90,auStack_d0);
  _swift_release(pMVar3);
  *param_1 = AVar1.unknown;
  param_1[1] = param_3;
  param_1[2] = FUN_100282b6c;
  param_1[3] = puVar6;
  return;
}



/* Address: 0x100281a78 | FUN_100281a78 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100281c84 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100281a78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Set param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  RoundedCornerStyle RVar6;
  RoundedRectangle RVar7;
  RoundedRectangle RVar8;
  HorizontalAlignment HVar9;
  undefined *puVar10;
  Set _all;
  Alignment AVar11;
  Alignment AVar13;
  undefined *puVar14;
  long extraout_x8;
  undefined8 *puVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined1 auVar18 [16];
  undefined8 uStack_160;
  undefined1 auStack_158 [8];
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 auStack_140 [2];
  undefined8 local_130 [5];
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long lVar12;
  
  RVar7 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  RVar8 = RVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(RVar7.unknown + -8) + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar15 = (undefined8 *)((long)local_130 + lVar3);
  HVar9 = SwiftUI::HorizontalAlignment::get_center(RVar8.unknown);
  *param_1 = HVar9.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar10 = &DAT_100fb9fc0;
  FUN_1000037f0(&DAT_100fb9fc0,&DAT_100c3a610);
  FUN_100281e40((long)param_1 + (long)*(int *)(puVar10 + 0x2c),param_6.unknown,param_7,param_8,
                param_9);
  _all = SwiftUI::Edge::Set::get_all(param_6);
  uVar17 = 0x4038000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  AVar11.unknown = &DAT_100fb9fc8;
  puVar10 = &DAT_100c3b0a0;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar11.unknown + 0x24));
  *puVar1 = (char)_all.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  *(undefined **)((long)auStack_140 + lVar3) = AVar11.unknown;
  *(undefined **)((long)auStack_140 + lVar3 + 8) = puVar10;
  auStack_148[lVar3] = 0;
  *(undefined8 *)((long)&uStack_150 + lVar3) = 0x7ff0000000000000;
  auStack_158[lVar3] = 1;
  *(undefined8 *)((long)&uStack_160 + lVar3) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  puVar10 = &DAT_100fb9fd0;
  FUN_1000037f0(&DAT_100fb9fd0,&DAT_100c3a620);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  puVar2[9] = uStack_d8;
  puVar2[8] = local_e0;
  puVar2[0xb] = uStack_c8;
  puVar2[10] = uStack_d0;
  puVar2[0xd] = uStack_b8;
  puVar2[0xc] = local_c0;
  puVar2[1] = local_130[3];
  *puVar2 = local_130[2];
  puVar2[3] = uStack_108;
  puVar2[2] = local_130[4];
  puVar2[5] = uStack_f8;
  puVar2[4] = uStack_100;
  puVar2[7] = uStack_e8;
  puVar2[6] = local_f0;
  iVar5 = *(int *)(RVar7.unknown + 0x14);
  uVar4 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar6 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar12 = CONCAT71((int7)((ulong)puVar10 >> 8),RVar6.value);
  pcVar16 = *(code **)(*(long *)(lVar12 + -8) + 0x68);
  (*pcVar16)((long)puVar15 + (long)iVar5,uVar4,lVar12);
  auVar18 = NEON_fmov(0x4024000000000000,8);
  local_130[1] = auVar18._8_8_;
  local_130[0] = auVar18._0_8_;
  *(undefined8 *)((long)local_130 + lVar3 + 8) = local_130[1];
  *puVar15 = local_130[0];
  if (DAT_100fb8710 != -1) {
    _swift_once(&DAT_100fb8710,FUN_100253964);
  }
  AVar11.unknown = DAT_100fb8708;
  SwiftUI::StrokeStyle::init
            (&local_b0,0x3ff0000000000000,0x4024000000000000,0,lVar12,0,
             PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar10 = &DAT_100fb9fd8;
  FUN_1000037f0(&DAT_100fb9fd8,&DAT_100c3a628);
  lVar3 = (long)param_1 + (long)*(int *)(puVar10 + 0x24);
  FUN_1001ef234(puVar15,lVar3);
  puVar10 = &DAT_100fb92b0;
  FUN_1000037f0(&DAT_100fb92b0,&DAT_100c3a630);
  puVar2 = (undefined8 *)(lVar3 + *(int *)(puVar10 + 0x24));
  puVar2[1] = uStack_a8;
  *puVar2 = local_b0;
  puVar2[3] = uStack_98;
  puVar2[2] = uStack_a0;
  puVar2[4] = local_90;
  puVar10 = &DAT_100fb92b8;
  puVar14 = &DAT_100c39040;
  FUN_1000037f0();
  *(undefined **)(lVar3 + *(int *)(puVar10 + 0x34)) = AVar11.unknown;
  *(undefined2 *)(lVar3 + *(int *)(puVar10 + 0x38)) = 0x100;
  AVar13.unknown = AVar11.unknown;
  _swift_retain();
  AVar13 = SwiftUI::Alignment::get_center(AVar13);
  FUN_1001ef278(puVar15);
  puVar10 = &DAT_100fb92c0;
  FUN_1000037f0(&DAT_100fb92c0,&DAT_100c3a640);
  iVar5 = *(int *)(puVar10 + 0x24);
  *(undefined8 *)(lVar3 + iVar5) = AVar13.unknown;
  ((undefined8 *)(lVar3 + iVar5))[1] = puVar14;
  puVar10 = &DAT_100fb9fe0;
  FUN_1000037f0(&DAT_100fb9fe0,&DAT_100c3a800);
  puVar2 = (undefined8 *)(lVar3 + *(int *)(puVar10 + 0x24));
  (*pcVar16)((long)puVar2 + (long)*(int *)(RVar7.unknown + 0x14),uVar4,lVar12);
  puVar2[1] = local_130[1];
  *puVar2 = local_130[0];
  puVar10 = &DAT_100fb92a8;
  puVar14 = &DAT_100c39030;
  FUN_1000037f0();
  *(undefined **)((long)puVar2 + (long)*(int *)(puVar10 + 0x34)) = AVar11.unknown;
  *(undefined2 *)((long)puVar2 + (long)*(int *)(puVar10 + 0x38)) = 0x100;
  _swift_retain();
  AVar13 = SwiftUI::Alignment::get_center(AVar11);
  AVar11.unknown = &DAT_100fb92e0;
  puVar10 = &DAT_100c3a810;
  FUN_1000037f0();
  iVar5 = *(int *)(AVar11.unknown + 0x24);
  *(undefined8 *)((long)puVar2 + (long)iVar5) = AVar13.unknown;
  ((undefined8 *)((long)puVar2 + (long)iVar5))[1] = puVar14;
  AVar11 = SwiftUI::Alignment::get_center(AVar11);
  puVar14 = &DAT_100fb9fe8;
  FUN_1000037f0(&DAT_100fb9fe8,&DAT_100c3a650);
  iVar5 = *(int *)(puVar14 + 0x24);
  *(undefined8 *)(lVar3 + iVar5) = AVar11.unknown;
  ((undefined8 *)(lVar3 + iVar5))[1] = puVar10;
  return;
}



/* Address: 0x100281e40 | FUN_100281e40 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100282040 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100281e40(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined *param_8,
                  undefined8 param_9)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  MainActor *this;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  VerticalAlignment VVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  Text TVar17;
  Text TVar18;
  Set _all;
  Color CVar19;
  Text TVar20;
  Set SVar21;
  Text TVar22;
  undefined8 uVar23;
  long extraout_x8;
  undefined8 *puVar24;
  long lVar25;
  long extraout_x12;
  undefined8 uVar26;
  undefined8 auStack_510 [2];
  undefined *local_500 [2];
  long local_4f0;
  MainActor *local_4e8;
  long local_4e0;
  MainActor *local_4d8;
  undefined8 *local_4d0;
  undefined1 auStack_4c8 [104];
  undefined *local_460;
  undefined *puStack_458;
  undefined8 uStack_450;
  undefined *puStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined1 uStack_418;
  undefined7 uStack_417;
  undefined1 uStack_410;
  undefined8 uStack_40f;
  undefined *local_400;
  undefined *puStack_3f8;
  undefined8 uStack_3f0;
  MainActor *pMStack_3e8;
  undefined8 local_3e0;
  undefined *puStack_3d8;
  undefined8 uStack_3d0;
  undefined1 uStack_3c8;
  undefined7 local_3c7;
  undefined1 uStack_3c0;
  undefined7 uStack_3bf;
  undefined1 uStack_3b8;
  undefined7 uStack_3b7;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined1 local_3a0;
  undefined *local_390;
  undefined *puStack_388;
  undefined1 local_380;
  undefined7 uStack_37f;
  MainActor *local_378;
  undefined8 local_370;
  undefined *puStack_368;
  undefined1 local_360;
  undefined7 uStack_35f;
  undefined1 local_358;
  undefined7 uStack_357;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined1 local_330;
  undefined *local_328;
  undefined *puStack_320;
  undefined1 local_318;
  MainActor *local_310;
  undefined8 local_308;
  undefined *local_300;
  undefined1 local_2f8;
  undefined1 local_2f0;
  undefined8 local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined1 local_2c8;
  undefined *local_2c0;
  undefined *puStack_2b8;
  undefined1 local_2b0;
  undefined7 uStack_2af;
  undefined *puStack_2a8;
  undefined1 local_2a0;
  undefined7 uStack_29f;
  undefined8 local_298;
  undefined8 local_290;
  undefined1 uStack_288;
  undefined7 uStack_287;
  undefined1 local_280;
  undefined7 uStack_27f;
  undefined1 local_278;
  undefined *local_270;
  undefined *local_268;
  undefined1 local_260;
  undefined *local_258;
  undefined1 local_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined1 local_228;
  undefined *local_220;
  undefined *puStack_218;
  undefined8 uStack_210;
  undefined *puStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 local_1d0;
  undefined7 uStack_1cf;
  undefined1 local_1c8;
  undefined *local_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined *local_170;
  undefined1 local_168;
  undefined *local_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  MainActor *pMStack_148;
  undefined8 local_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  
  puVar5 = &DAT_100fb9ff0;
  local_500[0] = param_8;
  local_500[1] = (undefined *)param_9;
  local_4f0 = param_1;
  FUN_1000037f0(&DAT_100fb9ff0,&DAT_100c3b0b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar25 = (long)local_500 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_4e0 = lVar25;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = (undefined8 *)(lVar25 - extraout_x12);
  local_4d0 = puVar24;
  this = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(this,this);
  pMVar7 = pMVar6;
  FUN_100270a58();
  pMVar11 = pMVar7;
  local_4e8 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "PasteLicensingAppStore/Reviews.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Reviews.swift",0x24,1,0x77,UVar8.unknown,pMVar11);
  }
  VVar10 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar9);
  puVar4 = local_4d0;
  *local_4d0 = VVar10.unknown;
  puVar4[1] = 0;
  *(undefined1 *)(puVar4 + 2) = 0;
  pMVar11 = Swift::MainActor::get_shared(this,(MainActor *)VVar10.unknown);
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar8 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar8.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Reviews.swift",0x24,1,0x8f,UVar12.unknown,pMVar7);
  }
  puVar5 = &DAT_100fb9ff8;
  FUN_1000037f0(&DAT_100fb9ff8,&DAT_100c3a660);
  iVar1 = *(int *)(puVar5 + 0x2c);
  puStack_158 = (undefined *)0x5;
  local_160 = (undefined *)0x1;
  puVar5 = &DAT_100c3a670;
  _swift_getKeyPath(&DAT_100c3a670);
  puVar13 = &DAT_100fba000;
  FUN_1000037f0(&DAT_100fba000,&DAT_100c3b0e0);
  puVar14 = &DAT_100fba008;
  FUN_1000037f0(&DAT_100fba008,&DAT_100c3a690);
  puVar15 = puVar14;
  FUN_100282f08();
  puVar16 = puVar15;
  FUN_100282fc0();
  puVar24[-2] = puVar16;
  uVar23 = 0;
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)local_4d0 + (long)iVar1,puVar16,puVar5,FUN_1002825e8,0,puVar13,puVar14,puVar15,
             PTR___protocol_witness_table_for_Swift_Int___Swift_Hashable_in_Swift_100eac708);
  _swift_release();
  local_160 = param_6;
  puStack_158 = (undefined *)param_7;
  FUN_1002538a0();
  _swift_bridgeObjectRetain(param_7);
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  local_4d8 = pMVar11;
  TVar17 = SwiftUI::Text::_init();
  if (DAT_100fba038 != -1) {
    _swift_once(&DAT_100fba038,FUN_100282740);
  }
  TVar22 = TVar17;
  puVar13 = puVar5;
  pMVar7 = pMVar11;
  TVar18 = SwiftUI::Text::_font(DAT_100fba040);
  FUN_100016d74(TVar17.unknown,puVar5,pMVar11);
  _swift_bridgeObjectRelease(uVar23);
  if (DAT_100fba048 != -1) {
    _swift_once(&DAT_100fba048,FUN_100282798);
  }
  uVar23 = DAT_100fba050;
  SVar21.unknown = &DAT_100c3a6b0;
  _swift_getKeyPath();
  _all = SwiftUI::Edge::Set::get_top(SVar21);
  uVar26 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_380 = SUB81(puVar13,0);
  local_370 = uVar23;
  local_360 = 1;
  local_358 = SUB81(_all.unknown,0);
  local_330 = 0;
  local_308 = uVar23;
  local_2f8 = 1;
  local_2c8 = 0;
  puVar24 = (undefined8 *)&DAT_100c3a6e0;
  local_390 = TVar18.unknown;
  puStack_388 = TVar22.unknown;
  local_378 = pMVar7;
  puStack_368 = SVar21.unknown;
  local_350 = uVar26;
  uStack_348 = param_3;
  local_340 = param_4;
  uStack_338 = param_5;
  local_328 = TVar18.unknown;
  puStack_320 = TVar22.unknown;
  local_318 = local_380;
  local_310 = pMVar7;
  local_300 = SVar21.unknown;
  local_2f0 = local_358;
  local_2e8 = uVar26;
  local_2e0 = param_3;
  local_2d8 = param_4;
  local_2d0 = param_5;
  FUN_100011090(&local_390,&local_160,&DAT_100fba058);
  FUN_100005808(&local_328,&DAT_100fba058,&DAT_100c3a6e0);
  local_160 = local_500[0];
  puStack_158 = local_500[1];
  _swift_bridgeObjectRetain();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  pMVar7 = local_4d8;
  TVar17 = SwiftUI::Text::_init();
  if (DAT_100fba060 != -1) {
    _swift_once(&DAT_100fba060,FUN_1002827bc);
  }
  TVar22 = TVar17;
  puVar13 = puVar5;
  SVar21.unknown = pMVar7;
  TVar18 = SwiftUI::Text::_font(DAT_100fba068);
  FUN_100016d74(TVar17.unknown,puVar5,pMVar7);
  _swift_bridgeObjectRelease();
  FUN_1002199e8();
  CVar19 = SwiftUI::Color::init((NSColor *)*puVar24);
  TVar17 = TVar18;
  puVar5 = TVar22.unknown;
  puVar14 = puVar13;
  TVar20 = SwiftUI::Text::_foregroundColor(CVar19.unknown);
  local_4d8 = (MainActor *)CONCAT44(local_4d8._4_4_,(int)puVar5);
  _swift_release(CVar19.unknown);
  FUN_100016d74(TVar18.unknown,TVar22.unknown,puVar13);
  _swift_bridgeObjectRelease();
  SVar21 = SwiftUI::Edge::Set::get_top(SVar21);
  uVar23 = 0x4000000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar21.unknown);
  uVar2 = SUB81(local_4d8,0);
  uStack_288 = (undefined1)param_4;
  uStack_287 = (undefined7)((ulong)param_4 >> 8);
  local_280 = (undefined1)param_5;
  uStack_27f = (undefined7)((ulong)param_5 >> 8);
  local_278 = 0;
  puVar5 = &DAT_100c3a6b0;
  local_2c0 = TVar20.unknown;
  puStack_2b8 = TVar17.unknown;
  local_2b0 = uVar2;
  puStack_2a8 = puVar14;
  local_2a0 = (char)SVar21.unknown;
  local_298 = uVar23;
  local_290 = param_3;
  _swift_getKeyPath();
  uStack_3f0 = CONCAT71(uStack_2af,local_2b0);
  local_3e0 = CONCAT71(uStack_29f,local_2a0);
  puStack_3d8 = (undefined *)local_298;
  uStack_3c8 = uStack_288;
  uStack_3d0 = local_290;
  uStack_3bf = uStack_27f;
  uStack_3b8 = local_278;
  local_3c7 = uStack_287;
  uStack_3c0 = local_280;
  puStack_3f8 = puStack_2b8;
  local_400 = local_2c0;
  pMStack_3e8 = (MainActor *)puStack_2a8;
  local_228 = 0;
  local_270 = TVar20.unknown;
  local_268 = TVar17.unknown;
  local_260 = uVar2;
  local_258 = puVar14;
  local_250 = (char)SVar21.unknown;
  local_248 = uVar23;
  local_240 = param_3;
  local_238 = param_4;
  local_230 = param_5;
  FUN_100011090(&local_2c0,&local_160,&DAT_100fb90e8,&DAT_100c397b0);
  FUN_100005808(&local_270,&DAT_100fb90e8,&DAT_100c397b0);
  uStack_1e8 = CONCAT71(local_3c7,uStack_3c8);
  uStack_1f8 = puStack_3d8;
  local_200 = local_3e0;
  uStack_1f0 = uStack_3d0;
  uStack_178 = CONCAT71(uStack_3b7,uStack_3b8);
  local_1e0 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_1d8 = uStack_3b8;
  uStack_1d7 = uStack_3b7;
  puStack_218 = puStack_3f8;
  local_220 = local_400;
  puStack_208 = pMStack_3e8;
  uStack_210 = uStack_3f0;
  local_1d0 = SUB81(puVar5,0);
  uStack_1cf = (undefined7)((ulong)puVar5 >> 8);
  local_1c8 = 1;
  uStack_198 = puStack_3d8;
  local_1a0 = local_3e0;
  uStack_190 = uStack_3d0;
  puStack_1b8 = puStack_3f8;
  local_1c0 = local_400;
  puStack_1a8 = pMStack_3e8;
  uStack_1b0 = uStack_3f0;
  local_168 = 1;
  uStack_188 = uStack_1e8;
  local_180 = local_1e0;
  local_170 = puVar5;
  FUN_100011090(&local_220,&local_160,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(&local_1c0,&DAT_100fba070,&DAT_100c3a6f0);
  puVar4 = local_4d0;
  lVar3 = local_4e0;
  FUN_100011090(local_4d0,local_4e0,&DAT_100fb9ff0,&DAT_100c3b0b0);
  lVar25 = local_4f0;
  uStack_3b8 = (undefined1)uStack_348;
  uStack_3b7 = (undefined7)((ulong)uStack_348 >> 8);
  uStack_3c0 = (undefined1)local_350;
  uStack_3bf = (undefined7)((ulong)local_350 >> 8);
  uStack_3a8 = uStack_338;
  uStack_3b0 = local_340;
  local_3a0 = local_330;
  uStack_3f0 = CONCAT71(uStack_37f,local_380);
  puStack_3f8 = puStack_388;
  local_400 = local_390;
  pMStack_3e8 = local_378;
  uStack_3d0 = CONCAT71(uStack_35f,local_360);
  puStack_3d8 = puStack_368;
  local_3e0 = local_370;
  uStack_3c8 = local_358;
  local_3c7 = uStack_357;
  uStack_438 = uStack_1f8;
  local_440 = local_200;
  uStack_428 = uStack_1e8;
  uStack_430 = uStack_1f0;
  uStack_418 = uStack_1d8;
  local_420 = local_1e0;
  uStack_40f = CONCAT17(local_1c8,uStack_1cf);
  uStack_417 = uStack_1d7;
  uStack_410 = local_1d0;
  puStack_458 = puStack_218;
  local_460 = local_220;
  puStack_448 = puStack_208;
  uStack_450 = uStack_210;
  FUN_100011090(lVar3,local_4f0,&DAT_100fb9ff0,&DAT_100c3b0b0);
  puVar5 = &DAT_100fba078;
  FUN_1000037f0(&DAT_100fba078,&DAT_100c3b140);
  puVar24 = (undefined8 *)(lVar25 + *(int *)(puVar5 + 0x30));
  uStack_118 = CONCAT71(uStack_3b7,uStack_3b8);
  local_120 = CONCAT71(uStack_3bf,uStack_3c0);
  uStack_108 = uStack_3a8;
  uStack_110 = uStack_3b0;
  local_100 = local_3a0;
  puStack_158 = puStack_3f8;
  local_160 = local_400;
  pMStack_148 = pMStack_3e8;
  uStack_150 = uStack_3f0;
  uStack_128 = CONCAT71(local_3c7,uStack_3c8);
  puStack_138 = puStack_3d8;
  local_140 = local_3e0;
  uStack_130 = uStack_3d0;
  puVar24[1] = puStack_3f8;
  *puVar24 = local_400;
  puVar24[3] = pMStack_3e8;
  puVar24[2] = uStack_3f0;
  puVar24[9] = uStack_118;
  puVar24[8] = local_120;
  puVar24[0xb] = uStack_3a8;
  puVar24[10] = uStack_3b0;
  puVar24[5] = puStack_3d8;
  puVar24[4] = local_3e0;
  puVar24[7] = uStack_128;
  puVar24[6] = uStack_3d0;
  *(undefined1 *)(puVar24 + 0xc) = local_3a0;
  puVar24 = (undefined8 *)(lVar25 + *(int *)(puVar5 + 0x40));
  uStack_9f = uStack_40f;
  uStack_a0 = uStack_410;
  uStack_c8 = uStack_438;
  local_d0 = local_440;
  uStack_b8 = uStack_428;
  uStack_c0 = uStack_430;
  puStack_e8 = puStack_458;
  local_f0 = local_460;
  puStack_d8 = puStack_448;
  uStack_e0 = uStack_450;
  uStack_a8 = uStack_418;
  uStack_b0 = local_420;
  puVar24[7] = uStack_428;
  puVar24[6] = uStack_430;
  puVar24[9] = CONCAT71(uStack_417,uStack_418);
  puVar24[8] = local_420;
  puVar24[3] = puStack_448;
  puVar24[2] = uStack_450;
  puVar24[5] = uStack_438;
  puVar24[4] = local_440;
  *(undefined8 *)((long)puVar24 + 0x51) = uStack_40f;
  *(ulong *)((long)puVar24 + 0x49) = CONCAT17(uStack_410,uStack_417);
  puVar24[1] = puStack_458;
  *puVar24 = local_460;
  iVar1 = *(int *)(puVar5 + 0x50);
  *(undefined8 *)(lVar25 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(lVar25 + iVar1) + 1) = 0;
  FUN_100011090(&local_160,auStack_4c8,&DAT_100fba058,&DAT_100c3a6e0);
  FUN_100011090(&local_f0,auStack_4c8,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(puVar4,&DAT_100fb9ff0,&DAT_100c3b0b0);
  FUN_100005808(&local_460,&DAT_100fba070,&DAT_100c3a6f0);
  FUN_100005808(&local_400,&DAT_100fba058,&DAT_100c3a6e0);
  FUN_100005808(lVar3,&DAT_100fb9ff0,&DAT_100c3b0b0);
  _swift_release(local_4e8);
  return;
}



/* Address: 0x1002825e8 | FUN_1002825e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002825e8(undefined8 *param_1)

{
  String systemName;
  undefined8 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  Image IVar6;
  undefined *puVar7;
  NSColor *pNVar8;
  Color CVar9;
  undefined *puVar10;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_100270a58();
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "PasteLicensingAppStore/Reviews.swift";
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/Reviews.swift",0x24,1,0x90,UVar4.unknown,pMVar2);
  }
  FUN_10020d970();
  systemName = *(String *)pcVar5;
  _swift_bridgeObjectRetain(((String *)pcVar5)->bridgeObject);
  IVar6 = SwiftUI::Image::init(systemName);
  if (DAT_100fba080 != -1) {
    _swift_once(&DAT_100fba080,FUN_100282734);
  }
  uVar1 = DAT_100fba088;
  puVar7 = &DAT_100c3a700;
  _swift_getKeyPath();
  _swift_retain(uVar1);
  pNVar8 = (NSColor *)NSColor::systemOrangeColor((ID)&_OBJC_CLASS___NSColor);
  CVar9 = SwiftUI::Color::init(pNVar8);
  puVar10 = &DAT_100c3a730;
  _swift_getKeyPath();
  _swift_release(pMVar3);
  *param_1 = IVar6.unknown;
  param_1[1] = puVar7;
  param_1[2] = uVar1;
  param_1[3] = puVar10;
  param_1[4] = CVar9.unknown;
  return;
}



/* Address: 0x100282728 | FUN_100282728 */

void FUN_100282728(void)

{
  undefined8 *unaff_x20;
  
  FUN_100281a78(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x100282734 | FUN_100282734 */

void FUN_100282734(undefined8 param_1)

{
  FUN_10028274c(param_1,&DAT_100fba088);
  return;
}



/* Address: 0x100282740 | FUN_100282740 */

void FUN_100282740(undefined8 param_1)

{
  FUN_10028274c(param_1,&DAT_100fba040);
  return;
}



/* Address: 0x10028274c | FUN_10028274c */

void FUN_10028274c(Font param_1,undefined8 *param_2)

{
  Font FVar1;
  Font FVar2;
  
  FVar2.unknown = (undefined *)param_2;
  FUN_1000f3588();
  FVar1 = SwiftUI::Font::get_body(param_1);
  SwiftUI::Font::Weight::get_semibold((Weight)FVar1.unknown);
  FVar2 = SwiftUI::Font::weight(FVar1.unknown,FVar2);
  _swift_release(FVar1.unknown);
  *param_2 = FVar2.unknown;
  return;
}



/* Address: 0x100282798 | FUN_100282798 */

void FUN_100282798(void)

{
  FUN_1000f3588();
  DAT_100fba050 = 0x3feb333333333333;
  return;
}



/* Address: 0x1002827bc | FUN_1002827bc */

void FUN_1002827bc(Font param_1)

{
  FUN_1000f3588();
  DAT_100fba068 = SwiftUI::Font::get_callout(param_1);
  return;
}



/* Address: 0x1002827dc | FUN_1002827dc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100282810 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1002827dc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 local_48;
  
  SwiftUI::State::init(&local_50,param_2,PTR___type_metadata_for_Swift_Int_100eac6f8);
  uVar3 = local_48;
  uVar1 = CONCAT71(uStack_4f,local_50);
  SwiftUI::State::init(&local_50,param_2,PTR___type_metadata_for_Swift_Bool_100eac570);
  uVar4 = local_48;
  uVar2 = local_50;
  SwiftUI::State::init(&local_50,param_2,PTR___type_metadata_for_CoreGraphics_CGFloat_100eae528);
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 3) = uVar2;
  param_1[4] = uVar4;
  param_1[5] = CONCAT71(uStack_4f,local_50);
  param_1[6] = local_48;
  param_1[7] = 0x402c000000000000;
  return;
}



/* Address: 0x10028288c | FUN_10028288c */

undefined1  [16] FUN_10028288c(void)

{
  return ZEXT816(0x100ec5668);
}



/* Address: 0x10028289c | FUN_10028289c */

void FUN_10028289c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_release(param_1[2]);
  _swift_release(param_1[4]);
  _swift_release(param_1[6]);
  return;
}



/* Address: 0x1002828d4 | FUN_1002828d4 */

undefined8 * FUN_1002828d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar4 = param_2[2];
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar4);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x100282940 | FUN_100282940 */

undefined8 * FUN_100282940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_retain();
  _swift_release(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar1);
  param_1[7] = param_2[7];
  return param_1;
}



/* Address: 0x1002829ec | FUN_1002829ec */

void FUN_1002829ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100282a00 | FUN_100282a00 */

undefined8 * FUN_100282a00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_release(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_release(uVar1);
  param_1[7] = param_2[7];
  return param_1;
}



/* Address: 0x100282a7c | FUN_100282a7c */

int FUN_100282a7c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100282ac4 | FUN_100282ac4 */

void FUN_100282ac4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100282b14 | FUN_100282b14 */

undefined1  [16] FUN_100282b14(void)

{
  return ZEXT816(0x100ec56e8);
}



/* Address: 0x100282b24 | FUN_100282b24 */

void FUN_100282b24(void)

{
  FUN_100016eac(&DAT_100fb9f18,&DAT_100fb9f00,&DAT_100c3a480,
                &TargetProtocolConformanceDescriptor_100c3a370);
  return;
}



/* Address: 0x100282b58 | FUN_100282b58 */

void FUN_100282b58(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa498,1);
  return;
}



/* Address: 0x100282b68 | thunk_FUN_100282ba8 */

void thunk_FUN_100282ba8(void)

{
  FUN_100282ba8();
  return;
}



/* Address: 0x100282b6c | FUN_100282b6c */

void FUN_100282b6c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100280d64(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100282b74 | FUN_100282b74 */

undefined8 FUN_100282b74(undefined8 param_1,undefined8 param_2)

{
  FUN_1002828d4(param_2,param_1,&DAT_100ec56e8);
  return param_2;
}



/* Address: 0x100282ba8 | FUN_100282ba8 */

void FUN_100282ba8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100282be4 | FUN_100282be4 */

void FUN_100282be4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10028148c(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100282bec | FUN_100282bec */

void FUN_100282bec(void)

{
  GeometryProxy GVar1;
  ulong uVar2;
  long unaff_x20;
  
  GVar1 = SwiftUI::GeometryProxy::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(GVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),GVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100282c44 | FUN_100282c44 */

void FUN_100282c44(undefined8 param_1,undefined8 param_2)

{
  GeometryProxy GVar1;
  long unaff_x20;
  
  GVar1 = SwiftUI::GeometryProxy::typeMetadataAccessor();
  FUN_10028131c(param_1,param_2,
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50) + 0x10 &
                ((ulong)*(byte *)(*(long *)(GVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100282c90 | FUN_100282c90 */

void FUN_100282c90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fb9f78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9f68;
  FUN_100005c24(&DAT_100fb9f68,&DAT_100c3a580);
  puVar2 = puVar1;
  FUN_100282d08();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fb9f78 = puVar3;
  return;
}



/* Address: 0x100282d08 | FUN_100282d08 */

void FUN_100282d08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb9f80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3a5c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3a5c0,&DAT_100ec57f0);
  DAT_100fb9f80 = pTVar1;
  return;
}



/* Address: 0x100282d48 | FUN_100282d48 */

void FUN_100282d48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb9f88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3a4fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3a4fc,&DAT_100ec5668);
  DAT_100fb9f88 = pTVar1;
  return;
}



/* Address: 0x100282d88 | thunk_FUN_100282d8c */

void thunk_FUN_100282d8c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100282d8c | FUN_100282d8c */

void FUN_100282d8c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x100282db4 | thunk_FUN_100282db8 */

undefined8 * thunk_FUN_100282db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100282db8 | FUN_100282db8 */

undefined8 * FUN_100282db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100282df4 | thunk_FUN_100282df8 */

undefined8 * thunk_FUN_100282df8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x100282df8 | FUN_100282df8 */

undefined8 * FUN_100282df8(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x100282e64 | thunk_FUN_100282e68 */

undefined8 * thunk_FUN_100282e68(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x100282e68 | FUN_100282e68 */

undefined8 * FUN_100282e68(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Address: 0x100282eac | thunk_FUN_1000149d0 */

int thunk_FUN_1000149d0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100282eb0 | thunk_FUN_100014a18 */

void thunk_FUN_100014a18(ulong *param_1,uint param_2,int param_3)

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
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100282eb4 | FUN_100282eb4 */

undefined1  [16] FUN_100282eb4(void)

{
  return ZEXT816(0x100ec57f0);
}



/* Address: 0x100282ec4 | FUN_100282ec4 */

void FUN_100282ec4(void)

{
  FUN_100016eac(&DAT_100fb9fb0,&DAT_100fb9fb8,&DAT_100c3a5b8,
                PTR_SwiftUI__SwiftUI__ZStack<undefined>_>SwiftUI__View_100eab958);
  return;
}



/* Address: 0x100282ef8 | FUN_100282ef8 */

void FUN_100282ef8(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100caa4c0,1);
  return;
}



/* Address: 0x100282f08 | FUN_100282f08 */

void FUN_100282f08(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba000;
  FUN_100005c24(&DAT_100fba000,&DAT_100c3b0e0);
  puVar2 = puVar1;
  FUN_100282f80();
  local_30 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
  puVar3 = PTR__Swift__Swift__ClosedRange<undefined>_>Swift__RandomAccessCollection_100eabfe0;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__Swift__Swift__ClosedRange<undefined>_>Swift__RandomAccessCollection_100eabfe0,
             puVar1,&local_30);
  DAT_100fba010 = puVar3;
  return;
}



/* Address: 0x100282f80 | FUN_100282f80 */

void FUN_100282f80(void)

{
  undefined *puVar1;
  
  if (DAT_100fba018 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fba018 = puVar1;
  return;
}



/* Address: 0x100282fc0 | FUN_100282fc0 */

void FUN_100282fc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba008;
  FUN_100005c24(&DAT_100fba008,&DAT_100c3a690);
  puVar2 = puVar1;
  FUN_100283058();
  puVar3 = &DAT_100fb9a48;
  FUN_100016eac(&DAT_100fb9a48,&DAT_100fb9a40,&DAT_100c3b100,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba020 = puVar4;
  return;
}



/* Address: 0x100283058 | FUN_100283058 */

void FUN_100283058(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba028 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fba030;
  FUN_100005c24(&DAT_100fba030,&DAT_100c3b0f0);
  puVar2 = &DAT_100fb9b50;
  FUN_100016eac(&DAT_100fb9b50,&DAT_100fb9b58,&DAT_100c3a6a0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba028 = puVar3;
  return;
}



/* Address: 0x1002830f0 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x1002830f4 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x1002830f8 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1002830fc | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100283100 | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x100283104 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x100283108 | thunk_FUN_10028310c */

void thunk_FUN_10028310c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fba090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9fd8;
  FUN_100005c24(&DAT_100fb9fd8,&DAT_100c3a628);
  puVar2 = puVar1;
  FUN_1002831a4();
  puVar3 = &DAT_100fba0b8;
  FUN_100016eac(&DAT_100fba0b8,&DAT_100fb9fe8,&DAT_100c3a650,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fba090 = puVar4;
  return;
}



/* Address: 0x10028310c | FUN_10028310c */

void FUN_10028310c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9fd8;
  FUN_100005c24(&DAT_100fb9fd8,&DAT_100c3a628);
  puVar2 = puVar1;
  FUN_1002831a4();
  puVar3 = &DAT_100fba0b8;
  FUN_100016eac(&DAT_100fba0b8,&DAT_100fb9fe8,&DAT_100c3a650,
                PTR_SwiftUI__SwiftUI___BackgroundModifier<undefined>_>SwiftUI__ViewModifier_100eaada8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba090 = puVar4;
  return;
}



/* Address: 0x1002831a4 | FUN_1002831a4 */

void FUN_1002831a4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba098 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9fd0;
  FUN_100005c24(&DAT_100fb9fd0,&DAT_100c3a620);
  puVar2 = puVar1;
  FUN_10028321c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba098 = puVar3;
  return;
}



/* Address: 0x10028321c | FUN_10028321c */

void FUN_10028321c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fba0a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb9fc8;
  FUN_100005c24(&DAT_100fb9fc8,&DAT_100c3b0a0);
  puVar2 = &DAT_100fba0a8;
  FUN_100016eac(&DAT_100fba0a8,&DAT_100fba0b0,&DAT_100c3a760,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fba0a0 = puVar3;
  return;
}



/* Address: 0x1002832b4 | thunk_FUN_100014a18 */

void thunk_FUN_100014a18(void)

{
  thunk_FUN_100014a18();
  return;
}


