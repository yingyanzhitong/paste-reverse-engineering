/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100030640 | FUN_100030640 */

void FUN_100030640(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x18));
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x50) != 0) {
    FUN_100004594(param_1 + 0x38);
  }
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Address: 0x100030688 | FUN_100030688 */

undefined8 * FUN_100030688(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[6] = uVar2;
  lVar1 = param_2[10];
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  if (lVar1 == 0) {
    uVar4 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar4;
    uVar4 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar4;
  }
  else {
    param_1[10] = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 7,param_2 + 7,lVar1);
  }
  param_1[0xb] = param_2[0xb];
  _swift_retain();
  return param_1;
}



/* Address: 0x100030740 | FUN_100030740 */

undefined8 * FUN_100030740(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar2);
  uVar3 = param_1[3];
  uVar2 = param_2[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  _swift_retain(uVar2);
  _swift_release(uVar3);
  uVar2 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar2;
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_retain();
  _swift_release(uVar2);
  lVar1 = param_2[10];
  if (param_1[10] == 0) {
    if (lVar1 != 0) {
      param_1[10] = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 7,param_2 + 7);
      goto LAB_100030810;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 7,param_2 + 7);
      goto LAB_100030810;
    }
    FUN_100004594(param_1 + 7);
  }
  uVar3 = param_2[8];
  uVar2 = param_2[7];
  uVar4 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[7] = uVar2;
LAB_100030810:
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_retain();
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10003083c | FUN_10003083c */

void FUN_10003083c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000308ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
        _swift_release(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Address: 0x100030994 | FUN_100030994 */

void FUN_100030994(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x1000309b0 | FUN_1000309b0 */

undefined8 * FUN_1000309b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_release(uVar1);
  uVar2 = param_1[3];
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  _swift_release(uVar2);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_release(uVar2);
  if (param_1[10] != 0) {
    FUN_100004594(param_1 + 7);
  }
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100030a44 | FUN_100030a44 */

int FUN_100030a44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100030a8c | FUN_100030a8c */

void FUN_100030a8c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100030ae4 | FUN_100030ae4 */

undefined1  [16] FUN_100030ae4(void)

{
  return ZEXT816(0x100eb1390);
}



/* Address: 0x100030af4 | FUN_100030af4 */

void FUN_100030af4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0b20,1);
  return;
}



/* Address: 0x100030b04 | FUN_100030b04 */

undefined * FUN_100030b04(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  
  FUN_100006290();
  uVar7 = *(ulong *)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    uVar8 = 0;
    plVar9 = (long *)(param_1 + 0x30);
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100030c60);
        (*pcVar1)();
      }
      lVar6 = *plVar9;
      uVar5 = *(ulong *)(lVar6 + 0x10);
      lVar10 = *(long *)(puVar4 + 0x10);
      if (SCARRY8(lVar10,uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100030c64);
        (*pcVar1)();
      }
      _swift_bridgeObjectRetain(lVar6);
      puVar2 = puVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar2 == 0) ||
         (uVar3 = *(ulong *)(puVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar10 + uVar5))) {
        FUN_100088990();
        uVar3 = *(ulong *)(puVar2 + 0x18) >> 1;
        puVar4 = puVar2;
        if (*(long *)(lVar6 + 0x10) != 0) goto LAB_100030be4;
LAB_100030b50:
        _swift_bridgeObjectRelease(lVar6);
        puVar2 = puVar4;
        if (uVar5 != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100030c68);
          (*pcVar1)();
        }
      }
      else {
        puVar2 = puVar4;
        if (*(long *)(lVar6 + 0x10) == 0) goto LAB_100030b50;
LAB_100030be4:
        if (uVar3 - *(long *)(puVar2 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100030c6c);
          (*pcVar1)();
        }
        _swift_arrayInitWithCopy
                  (puVar2 + *(long *)(puVar2 + 0x10) * 0x20 + 0x20,lVar6 + 0x20,uVar5,&DAT_100eaff90
                  );
        _swift_bridgeObjectRelease(lVar6);
        if (uVar5 != 0) {
          if (SCARRY8(*(long *)(puVar2 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100030c70);
            (*pcVar1)();
          }
          *(ulong *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + uVar5;
        }
      }
      uVar8 = uVar8 + 1;
      plVar9 = plVar9 + 3;
      puVar4 = puVar2;
    } while (uVar7 != uVar8);
  }
  _swift_bridgeObjectRelease(param_1);
  return puVar2;
}



/* Address: 0x100030c70 | FUN_100030c70 */

undefined * FUN_100030c70(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined *local_58;
  
  FUN_100006290();
  puVar2 = &DAT_100c24df0;
  _swift_getKeyPath(&DAT_100c24df0);
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(param_1);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000717a8(0,lVar4,0);
    puVar6 = (undefined8 *)(param_1 + 0x30);
    do {
      puVar3 = local_58;
      local_78 = puVar6[-2];
      uVar5 = *puVar6;
      uStack_68 = *puVar6;
      uVar7 = puVar6[-1];
      local_70 = uVar7;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar5);
      _swift_getAtKeyPath(&local_60,&local_78,puVar2);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(uVar7);
      uVar5 = local_60;
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_58 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1000717a8(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      puVar3 = local_58;
      puVar6 = puVar6 + 3;
      *(ulong *)(local_58 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_58 + uVar1 * 8 + 0x20) = uVar5;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(param_1);
  }
  return puVar3;
}



/* Address: 0x100030dc0 | FUN_100030dc0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000311e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100030dc0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Color CVar6;
  Color CVar7;
  Set SVar8;
  _FrameLayout _Var9;
  Alignment AVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  AnyView AVar15;
  undefined8 uVar16;
  long extraout_x8;
  undefined8 *puVar17;
  long lVar18;
  long extraout_x8_00;
  long lVar19;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar20;
  long lVar21;
  long extraout_x8_03;
  long lVar22;
  long lVar23;
  long extraout_x12;
  undefined8 unaff_x20;
  long lVar24;
  undefined8 uStack_340;
  undefined1 auStack_338 [8];
  undefined8 uStack_330;
  undefined1 auStack_328 [8];
  undefined8 auStack_320 [2];
  undefined *local_2a8;
  undefined *puStack_2a0;
  undefined *local_298;
  undefined **ppuStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  code *local_238;
  undefined *puStack_230;
  undefined *local_228;
  undefined1 local_220;
  undefined8 local_21f;
  undefined8 uStack_217;
  undefined8 local_20f;
  undefined8 uStack_207;
  undefined8 local_1ff;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 uStack_1ef;
  undefined7 uStack_1e8;
  undefined1 local_1e1;
  undefined7 uStack_1e0;
  undefined1 uStack_1d9;
  undefined7 uStack_1d8;
  undefined1 local_1d1;
  undefined7 uStack_1d0;
  undefined1 uStack_1c9;
  undefined7 uStack_1c8;
  undefined1 local_1c1;
  undefined7 uStack_1c0;
  undefined1 uStack_1b9;
  undefined7 uStack_1b8;
  code *local_1b0;
  undefined *puStack_1a8;
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  code *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined1 local_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined7 uStack_9f;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  
  puVar1 = &DAT_100fa7d78;
  FUN_1000037f0(&DAT_100fa7d78,&DAT_100c24d78);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(&stack0xfffffffffffffcf0 + -extraout_x8);
  puVar2 = &DAT_100fa7d80;
  FUN_1000037f0(&DAT_100fa7d80,&DAT_100c24d80);
  lVar18 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar23 = (long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar23 - extraout_x12;
  puVar3 = &DAT_100fa7d88;
  FUN_1000037f0(&DAT_100fa7d88,&DAT_100c24d88);
  lVar19 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa7d90;
  FUN_1000037f0(&DAT_100fa7d90,&DAT_100c24d90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar20 = (lVar24 - extraout_x8_01) - extraout_x8_02;
  puVar5 = &DAT_100fa7d98;
  FUN_1000037f0(&DAT_100fa7d98,&DAT_100c24d98);
  lVar21 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = lVar20 - extraout_x8_03;
  FUN_1000349ac();
  CVar6.unknown = &DAT_100eb13c0;
  _swift_allocObject(&DAT_100eb13c0,0x70,7);
  *(undefined8 *)(CVar6.unknown + 0x38) = uStack_188;
  *(undefined8 *)(CVar6.unknown + 0x30) = local_190;
  *(undefined8 *)(CVar6.unknown + 0x48) = uStack_178;
  *(undefined8 *)(CVar6.unknown + 0x40) = local_180;
  *(undefined8 *)(CVar6.unknown + 0x58) = uStack_168;
  *(undefined8 *)(CVar6.unknown + 0x50) = local_170;
  *(undefined8 *)(CVar6.unknown + 0x68) = uStack_158;
  *(undefined8 *)(CVar6.unknown + 0x60) = local_160;
  *(undefined **)(CVar6.unknown + 0x18) = puStack_1a8;
  *(code **)(CVar6.unknown + 0x10) = local_1b0;
  *(undefined8 *)(CVar6.unknown + 0x28) = uStack_198;
  *(undefined **)(CVar6.unknown + 0x20) = local_1a0;
  CVar7 = SwiftUI::Color::get_clear(CVar6);
  SVar8 = SwiftUI::Edge::Set::get_all(CVar7.unknown);
  SwiftUI::Alignment::get_center((Alignment)SVar8.unknown);
  uVar16 = 0;
  _Var9 = SwiftUI::_FrameLayout::_init((Alignment)0x407b800000000000);
  uStack_1d9 = (undefined1)uStack_e8;
  uStack_1d8 = (undefined7)((ulong)uStack_e8 >> 8);
  local_1e1 = (undefined1)local_f0;
  uStack_1e0 = (undefined7)((ulong)local_f0 >> 8);
  uStack_1c9 = (undefined1)uStack_d8;
  uStack_1c8 = (undefined7)((ulong)uStack_d8 >> 8);
  local_1d1 = (undefined1)uStack_e0;
  uStack_1d0 = (undefined7)((ulong)uStack_e0 >> 8);
  uStack_1b9 = (undefined1)uStack_c8;
  uStack_1b8 = (undefined7)((ulong)uStack_c8 >> 8);
  local_1c1 = (undefined1)local_d0;
  uStack_1c0 = (undefined7)((ulong)local_d0 >> 8);
  AVar10 = SwiftUI::Alignment::get_center(_Var9.unknown);
  uStack_9f = uStack_1e0;
  uStack_98 = uStack_1d9;
  local_a7 = uStack_1e8;
  uStack_a0 = local_1e1;
  local_c0 = FUN_1000349e4;
  uStack_8f = uStack_1d0;
  uStack_88 = uStack_1c9;
  local_97 = uStack_1d8;
  uStack_90 = local_1d1;
  uStack_7f = uStack_1c0;
  local_87 = uStack_1c8;
  uStack_80 = local_1c1;
  uStack_78 = uStack_1b9;
  uStack_77 = uStack_1b8;
  puStack_b8 = CVar6.unknown;
  local_b0 = CVar7.unknown;
  local_a8 = (char)SVar8.unknown;
  *(undefined **)(lVar22 + -0x10) = AVar10.unknown;
  *(undefined8 *)(lVar22 + -8) = uVar16;
  *(undefined1 *)(lVar22 + -0x18) = 0;
  *(undefined8 *)(lVar22 + -0x20) = 0x4074a00000000000;
  *(undefined1 *)(lVar22 + -0x28) = 1;
  *(undefined8 *)(lVar22 + -0x30) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  uStack_198 = CONCAT71(local_a7,local_a8);
  local_1a0 = local_b0;
  uStack_188 = CONCAT71(local_97,uStack_98);
  local_190 = CONCAT71(uStack_9f,uStack_a0);
  uStack_178 = CONCAT71(local_87,uStack_88);
  local_180 = CONCAT71(uStack_8f,uStack_90);
  uStack_168 = CONCAT71(uStack_77,uStack_78);
  local_170 = CONCAT71(uStack_7f,uStack_80);
  puStack_1a8 = puStack_b8;
  local_1b0 = local_c0;
  local_238 = FUN_1000349e4;
  uStack_217 = CONCAT17(uStack_1d9,uStack_1e0);
  local_21f = CONCAT17(local_1e1,uStack_1e8);
  uStack_207 = CONCAT17(uStack_1c9,uStack_1d0);
  local_20f = CONCAT17(local_1d1,uStack_1d8);
  local_1ff = CONCAT17(local_1c1,uStack_1c8);
  uStack_1ef = uStack_1b8;
  uStack_1f7 = uStack_1c0;
  uStack_1f0 = uStack_1b9;
  puStack_230 = CVar6.unknown;
  local_228 = CVar7.unknown;
  local_220 = (char)SVar8.unknown;
  FUN_100011090(&local_c0,&local_298,&DAT_100fa7da0,&DAT_100c24da0);
  FUN_100005808(&local_238,&DAT_100fa7da0,&DAT_100c24da0);
  puVar11 = &DAT_100fa7da8;
  FUN_1000037f0(&DAT_100fa7da8,&DAT_100c24da8);
  puVar12 = puVar11;
  FUN_1000349ec();
  (extension_SwiftUI)::SwiftUI::View::_focusable(true);
  FUN_100005808(&local_1b0,&DAT_100fa7da8,&DAT_100c24da8);
  ppuVar13 = &local_298;
  local_298 = puVar11;
  ppuStack_290 = (undefined **)puVar12;
  _swift_getOpaqueTypeConformance2
            (ppuVar13,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focusable(Swift_Bool)__>_some>>_100eab628
             ,1);
  (extension_SwiftUI)::SwiftUI::View::_focusEffectDisabled(true);
  (**(code **)(lVar18 + 0x10))(lVar23,lVar24,puVar2);
  ppuVar14 = &local_298;
  local_298 = puVar3;
  ppuStack_290 = ppuVar13;
  _swift_getOpaqueTypeConformance2
            (ppuVar14,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focusEffectDisabled(Swift_Bool)__>_some>>_100eab4e8
             ,1);
  AVar15 = SwiftUI::AnyView::_init(ppuVar14,puVar2,ppuVar14);
  *puVar17 = AVar15.unknown;
  _swift_storeEnumTagMultiPayload(puVar17,puVar1,0);
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar17);
  (**(code **)(lVar18 + 8))(lVar24,puVar2);
  (**(code **)(lVar19 + 8))(lVar24 - extraout_x8_01,puVar3);
  FUN_1000349ac(unaff_x20,&local_298);
  puVar1 = &DAT_100eb13e8;
  _swift_allocObject(&DAT_100eb13e8,0x70,7);
  *(undefined8 *)(puVar1 + 0x38) = uStack_270;
  *(undefined8 *)(puVar1 + 0x30) = local_278;
  *(undefined8 *)(puVar1 + 0x48) = uStack_260;
  *(undefined8 *)(puVar1 + 0x40) = local_268;
  *(undefined8 *)(puVar1 + 0x58) = uStack_250;
  *(undefined8 *)(puVar1 + 0x50) = local_258;
  *(undefined8 *)(puVar1 + 0x68) = uStack_240;
  *(undefined8 *)(puVar1 + 0x60) = local_248;
  *(undefined ***)(puVar1 + 0x18) = ppuStack_290;
  *(undefined **)(puVar1 + 0x10) = local_298;
  *(undefined8 *)(puVar1 + 0x28) = uStack_280;
  *(undefined8 *)(puVar1 + 0x20) = local_288;
  puVar2 = puVar1;
  FUN_100034b9c();
  (extension_SwiftUI)::SwiftUI::View::_onMoveCommand();
  _swift_release(puVar1);
  FUN_100005808(lVar20,&DAT_100fa7d90,&DAT_100c24d90);
  FUN_1000349ac(unaff_x20,&local_298);
  puVar1 = &DAT_100eb1410;
  _swift_allocObject(&DAT_100eb1410,0x70,7);
  *(undefined8 *)(puVar1 + 0x38) = uStack_270;
  *(undefined8 *)(puVar1 + 0x30) = local_278;
  *(undefined8 *)(puVar1 + 0x48) = uStack_260;
  *(undefined8 *)(puVar1 + 0x40) = local_268;
  *(undefined8 *)(puVar1 + 0x58) = uStack_250;
  *(undefined8 *)(puVar1 + 0x50) = local_258;
  *(undefined8 *)(puVar1 + 0x68) = uStack_240;
  *(undefined8 *)(puVar1 + 0x60) = local_248;
  *(undefined ***)(puVar1 + 0x18) = ppuStack_290;
  *(undefined **)(puVar1 + 0x10) = local_298;
  *(undefined8 *)(puVar1 + 0x28) = uStack_280;
  *(undefined8 *)(puVar1 + 0x20) = local_288;
  local_2a8 = puVar4;
  puStack_2a0 = puVar2;
  _swift_getOpaqueTypeConformance2
            (&local_2a8,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_onMoveCommand(perform:_((SwiftUI_MoveCommandDirection)__>_())_)__>_some>>_100eab418
             ,1);
  (extension_SwiftUI)::SwiftUI::View::_onExitCommand();
  _swift_release(puVar1);
  (**(code **)(lVar21 + 8))(lVar22,puVar5);
  FUN_1000349ac(unaff_x20,&local_298);
  puVar1 = &DAT_100eb1438;
  _swift_allocObject(&DAT_100eb1438,0x70,7);
  *(undefined8 *)(puVar1 + 0x38) = uStack_270;
  *(undefined8 *)(puVar1 + 0x30) = local_278;
  *(undefined8 *)(puVar1 + 0x48) = uStack_260;
  *(undefined8 *)(puVar1 + 0x40) = local_268;
  *(undefined8 *)(puVar1 + 0x58) = uStack_250;
  *(undefined8 *)(puVar1 + 0x50) = local_258;
  *(undefined8 *)(puVar1 + 0x68) = uStack_240;
  *(undefined8 *)(puVar1 + 0x60) = local_248;
  *(undefined ***)(puVar1 + 0x18) = ppuStack_290;
  *(undefined **)(puVar1 + 0x10) = local_298;
  *(undefined8 *)(puVar1 + 0x28) = uStack_280;
  *(undefined8 *)(puVar1 + 0x20) = local_288;
  puVar2 = &DAT_100fa7df8;
  FUN_1000037f0(&DAT_100fa7df8,&DAT_100c24dc8);
  puVar17 = (undefined8 *)(param_1 + *(int *)(puVar2 + 0x24));
  *puVar17 = FUN_100034c4c;
  puVar17[1] = puVar1;
  puVar17[2] = 0;
  puVar17[3] = 0;
  FUN_1000349ac(unaff_x20,&local_298);
  puVar1 = &DAT_100eb1460;
  _swift_allocObject(&DAT_100eb1460,0x70,7);
  *(undefined8 *)(puVar1 + 0x38) = uStack_270;
  *(undefined8 *)(puVar1 + 0x30) = local_278;
  *(undefined8 *)(puVar1 + 0x48) = uStack_260;
  *(undefined8 *)(puVar1 + 0x40) = local_268;
  *(undefined8 *)(puVar1 + 0x58) = uStack_250;
  *(undefined8 *)(puVar1 + 0x50) = local_258;
  *(undefined8 *)(puVar1 + 0x68) = uStack_240;
  *(undefined8 *)(puVar1 + 0x60) = local_248;
  *(undefined ***)(puVar1 + 0x18) = ppuStack_290;
  *(undefined **)(puVar1 + 0x10) = local_298;
  *(undefined8 *)(puVar1 + 0x28) = uStack_280;
  *(undefined8 *)(puVar1 + 0x20) = local_288;
  puVar2 = &DAT_100fa7e00;
  FUN_1000037f0(&DAT_100fa7e00,&DAT_100c24dd0);
  puVar17 = (undefined8 *)(param_1 + *(int *)(puVar2 + 0x24));
  *puVar17 = 0;
  puVar17[1] = 0;
  puVar17[2] = FUN_100034c54;
  puVar17[3] = puVar1;
  return;
}



/* Address: 0x100031490 | FUN_100031490 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100031688 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100031490(undefined8 param_1,long param_2)

{
  bool bVar1;
  MoveCommandDirection MVar2;
  Size SVar3;
  int iVar4;
  undefined7 extraout_var;
  GridItem GVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  State SVar10;
  _ArrayBuffer<undefined> _Var11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined *local_c0 [2];
  long local_b0;
  long lStack_a8;
  long local_a0;
  undefined *local_98;
  MainActor *local_90;
  undefined *local_88;
  char local_80;
  undefined *local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  local_c0[1] = (undefined *)param_1;
  MVar2 = SwiftUI::MoveCommandDirection::typeMetadataAccessor();
  extraout_var = (undefined7)((ulong)param_1 >> 8);
  lStack_a8 = CONCAT71(extraout_var,MVar2.value);
  local_b0 = *(long *)(lStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  lVar19 = (long)local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar19;
  SVar3 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  lVar21 = CONCAT71(extraout_var,SVar3.value);
  lVar15 = *(long *)(lVar21 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar18 = (undefined8 *)(lVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  GVar5 = SwiftUI::GridItem::typeMetadataAccessor();
  lVar19 = *(long *)(GVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar20 = (long)puVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar17 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar17,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_90 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x1d,UVar8.unknown,puVar7);
  }
  local_78 = ((State *)(param_2 + 0x20))->unknown;
  local_70 = *(undefined1 *)(param_2 + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x30);
  SVar10.unknown = &DAT_100fa7e10;
  FUN_1000037f0(&DAT_100fa7e10,&DAT_100c24de8);
  local_98 = SVar10.unknown;
  SwiftUI::State::get_wrappedValue(SVar10);
  local_c0[0] = local_88;
  FUN_100030c70();
  puVar18[1] = 0x7ff0000000000000;
  *puVar18 = 0x4024000000000000;
  (**(code **)(lVar15 + 0x68))
            (puVar18,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_flexible_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100eaba30
             ,lVar21);
  SwiftUI::GridItem::_init((Size)(__int8)puVar18);
  _Var11 = Swift::Array<undefined>::_allocateBufferUninitialized(SVar10.unknown,GVar5.unknown);
  *(undefined8 *)(_Var11.unknown + 0x10) = 3;
  puVar17 = _Var11.unknown +
            ((ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
            ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff));
  pcVar16 = *(code **)(lVar19 + 0x10);
  (*pcVar16)(puVar17,lVar20,GVar5.unknown);
  lVar21 = *(long *)(lVar19 + 0x48);
  (*pcVar16)(puVar17 + lVar21,lVar20,GVar5.unknown);
  (**(code **)(lVar19 + 0x20))(puVar17 + lVar21 * 2,lVar20,GVar5.unknown);
  _swift_bridgeObjectRelease(_Var11.unknown);
  lVar20 = local_a0;
  lVar15 = lStack_a8;
  lVar19 = local_b0;
  lVar21 = *(long *)(SVar10.unknown + 0x10);
  if (lVar21 == 0) {
LAB_100031734:
    _swift_bridgeObjectRelease(SVar10.unknown);
  }
  else {
    lVar12 = 0;
    lVar13 = 0x20;
    lVar14 = lVar21;
    do {
      bVar1 = SCARRY8(lVar12,*(long *)(SVar10.unknown + lVar13));
      lVar12 = lVar12 + *(long *)(SVar10.unknown + lVar13);
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000318c0);
        (*pcVar16)();
      }
      lVar13 = lVar13 + 8;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    if (lVar12 < 1) goto LAB_100031734;
    if (local_80 == '\x01') {
      _swift_bridgeObjectRelease(SVar10.unknown);
      puVar17 = (undefined *)0x0;
LAB_10003185c:
      local_70 = 0;
      goto LAB_100031860;
    }
    lVar12 = 0;
    lVar13 = 0x20;
    do {
      bVar1 = SCARRY8(lVar12,*(long *)(SVar10.unknown + lVar13));
      lVar12 = lVar12 + *(long *)(SVar10.unknown + lVar13);
      if (bVar1) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1000318c4);
        (*pcVar16)();
      }
      lVar13 = lVar13 + 8;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1000318c8);
      (*pcVar16)();
    }
    puVar17 = (undefined *)(lVar12 + -1);
    if ((long)local_c0[0] <= lVar12 + -1) {
      puVar17 = local_c0[0];
    }
    (**(code **)(local_b0 + 0x10))(local_a0,local_c0[1],lStack_a8);
    (**(code **)(lVar19 + 0x58))(lVar20,lVar15);
    iVar4 = (int)lVar20;
    if (iVar4 == *(int *)
                  PTR___enum_case_for_SwiftUI_MoveCommandDirection_up_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaade0
       ) {
      FUN_100059768(puVar17,SVar10.unknown,3);
LAB_100031850:
      _swift_bridgeObjectRelease(SVar10.unknown);
      goto LAB_10003185c;
    }
    if (iVar4 == *(int *)
                  PTR___enum_case_for_SwiftUI_MoveCommandDirection_down_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaade8
       ) {
      FUN_100059888(puVar17,SVar10.unknown,3);
      goto LAB_100031850;
    }
    if (iVar4 == *(int *)
                  PTR___enum_case_for_SwiftUI_MoveCommandDirection_left_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf0
       ) {
      FUN_100059a30(puVar17,SVar10.unknown,3);
      goto LAB_100031850;
    }
    if (iVar4 == *(int *)
                  PTR___enum_case_for_SwiftUI_MoveCommandDirection_right_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf8
       ) {
      FUN_100059ac0(puVar17,SVar10.unknown,3);
      goto LAB_100031850;
    }
    _swift_bridgeObjectRelease(SVar10.unknown);
    (**(code **)(lVar19 + 8))(local_a0,lVar15);
  }
  puVar17 = (undefined *)0x0;
  local_70 = 1;
LAB_100031860:
  local_78 = puVar17;
  SwiftUI::State::set_wrappedValue((State *)(param_2 + 0x20),&local_78,local_98);
  _swift_release(local_90);
  return;
}



/* Address: 0x1000318c8 | FUN_1000318c8 */

void FUN_1000318c8(long param_1)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x20,UVar4.unknown,puVar3);
  }
  (**(code **)(param_1 + 0x10))();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100031978 | FUN_100031978 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100031978(long param_1)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  void *aBlock;
  ID IVar6;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x23,UVar3.unknown,puVar2);
  }
  FUN_1000349ac(param_1,&local_a0);
  puVar5 = &DAT_100eb1488;
  _swift_allocObject(&DAT_100eb1488,0x70,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_78;
  *(undefined8 *)(puVar5 + 0x30) = local_80;
  *(undefined8 *)(puVar5 + 0x48) = uStack_68;
  *(undefined8 *)(puVar5 + 0x40) = uStack_70;
  *(undefined8 *)(puVar5 + 0x58) = uStack_58;
  *(undefined8 *)(puVar5 + 0x50) = local_60;
  *(undefined8 *)(puVar5 + 0x68) = uStack_48;
  *(undefined8 *)(puVar5 + 0x60) = uStack_50;
  *(undefined8 *)(puVar5 + 0x18) = uStack_98;
  *(undefined8 *)(puVar5 + 0x10) = local_a0;
  *(undefined8 *)(puVar5 + 0x28) = uStack_88;
  *(undefined8 *)(puVar5 + 0x20) = uStack_90;
  local_b0 = FUN_100034c5c;
  local_d0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_c8 = 0x42000000;
  local_c0 = FUN_100059c14;
  puStack_b8 = &DAT_100eb14a0;
  local_a8 = puVar5;
  aBlock = __Block_copy(&local_d0);
  _swift_release(local_a8);
  IVar6 = NSEvent::addLocalMonitorForEventsMatchingMask_handler_
                    ((ID)&_OBJC_CLASS___NSEvent,0x400,aBlock);
  __Block_release(aBlock);
  if (IVar6 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar6);
  }
  FUN_100011090(&local_a0,&local_d0,&DAT_100fa8810,&DAT_100c23ce0);
  puVar5 = &DAT_100fa7e08;
  FUN_1000037f0(&DAT_100fa7e08,&DAT_100c24dd8);
  SwiftUI::State::set_wrappedValue((State *)(param_1 + 0x38),&local_d0,puVar5);
  FUN_100005808(&local_a0,&DAT_100fa8810,&DAT_100c23ce0);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100031b60 | FUN_100031b60 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100031de8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ID FUN_100031b60(ID param_1,long param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  Size SVar4;
  MoveCommandDirection MVar5;
  int iVar6;
  GridItem GVar7;
  MainActor *pMVar8;
  undefined8 *puVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  ID IVar12;
  State SVar13;
  _ArrayBuffer<undefined> _Var14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar15;
  long lVar16;
  long lVar17;
  long extraout_x12;
  State *pSVar18;
  State *pSVar19;
  undefined8 *puVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  State *local_d0 [3];
  MainActor *local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  State *local_88;
  char local_80;
  State *local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  SVar4 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  local_a8 = CONCAT71((int7)(param_1 >> 8),SVar4.value);
  lVar22 = *(long *)(local_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  lVar23 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar20 = (undefined8 *)((long)local_d0 + lVar23);
  GVar7 = SwiftUI::GridItem::typeMetadataAccessor();
  lVar24 = *(long *)(GVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = (long)puVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  MVar5 = SwiftUI::MoveCommandDirection::typeMetadataAccessor();
  local_90 = CONCAT71((int7)((ulong)GVar7.unknown >> 8),MVar5.value);
  local_98 = *(long *)(local_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar15 = lVar25 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a0 = lVar15 - extraout_x12;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar8 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  puVar9 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    UVar11.unknown = (undefined *)0x0;
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x24,UVar10.unknown,puVar9);
  }
  FUN_100219ddc();
  if (((uint)UVar11.unknown & 0xff) != 1) {
    if (((ulong)UVar11.unknown & 0xff) != 0) {
      _swift_release(pMVar8);
      return param_1;
    }
    objc_stub::modifierFlags(param_1);
    FUN_100032094();
    goto LAB_100031f9c;
  }
  local_b8 = pMVar8;
  IVar12 = objc_stub::modifierFlags(param_1);
  puVar2 = (undefined4 *)
           PTR___enum_case_for_SwiftUI_MoveCommandDirection_right_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf8
  ;
  if ((IVar12 & 0xa0000) != 0) {
    puVar2 = (undefined4 *)
             PTR___enum_case_for_SwiftUI_MoveCommandDirection_left_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf0
    ;
  }
  (**(code **)(local_98 + 0x68))(local_a0,*puVar2,local_90);
  local_d0[2] = (State *)(param_2 + 0x20);
  local_78 = (State *)local_d0[2]->unknown;
  local_70 = *(undefined1 *)(param_2 + 0x28);
  local_68 = *(undefined8 *)(param_2 + 0x30);
  SVar13.unknown = &DAT_100fa7e10;
  FUN_1000037f0(&DAT_100fa7e10,&DAT_100c24de8);
  local_d0[1] = (State *)SVar13.unknown;
  SwiftUI::State::get_wrappedValue(SVar13);
  local_d0[0] = local_88;
  FUN_100030c70();
  *(undefined8 *)((long)local_d0 + lVar23 + 8) = 0x7ff0000000000000;
  *puVar20 = 0x4024000000000000;
  (**(code **)(lVar22 + 0x68))
            (puVar20,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_flexible_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100eaba30
             ,local_a8);
  SwiftUI::GridItem::_init((Size)(__int8)puVar20);
  _Var14 = Swift::Array<undefined>::_allocateBufferUninitialized(SVar13.unknown,GVar7.unknown);
  *(undefined8 *)(_Var14.unknown + 0x10) = 3;
  puVar1 = _Var14.unknown +
           ((ulong)*(byte *)(lVar24 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar24 + 0x50) ^ 0xffffffffffffffff));
  pcVar21 = *(code **)(lVar24 + 0x10);
  (*pcVar21)(puVar1,lVar25,GVar7.unknown);
  lVar23 = *(long *)(lVar24 + 0x48);
  (*pcVar21)(puVar1 + lVar23,lVar25,GVar7.unknown);
  (**(code **)(lVar24 + 0x20))(puVar1 + lVar23 * 2,lVar25,GVar7.unknown);
  _swift_bridgeObjectRelease(_Var14.unknown);
  lVar24 = local_90;
  lVar22 = local_98;
  lVar15 = local_b0;
  pMVar8 = local_b8;
  lVar23 = *(long *)(SVar13.unknown + 0x10);
  if (lVar23 == 0) {
    _swift_bridgeObjectRelease(SVar13.unknown);
    pSVar18 = (State *)0x0;
    local_70 = 1;
    pSVar19 = local_d0[2];
    pMVar8 = local_b8;
  }
  else {
    lVar16 = 0;
    lVar25 = 0x20;
    lVar17 = lVar23;
    do {
      bVar3 = SCARRY8(lVar16,*(long *)(SVar13.unknown + lVar25));
      lVar16 = lVar16 + *(long *)(SVar13.unknown + lVar25);
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x10003208c);
        (*pcVar21)();
      }
      lVar25 = lVar25 + 8;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    if (lVar16 < 1) {
      _swift_bridgeObjectRelease(SVar13.unknown);
      pSVar18 = (State *)0x0;
      local_70 = 1;
      pSVar19 = local_d0[2];
    }
    else if (local_80 == '\x01') {
      _swift_bridgeObjectRelease(SVar13.unknown);
      pSVar18 = (State *)0x0;
      local_70 = 0;
      pSVar19 = local_d0[2];
    }
    else {
      lVar16 = 0;
      lVar25 = 0x20;
      do {
        bVar3 = SCARRY8(lVar16,*(long *)(SVar13.unknown + lVar25));
        lVar16 = lVar16 + *(long *)(SVar13.unknown + lVar25);
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100032090);
          (*pcVar21)();
        }
        lVar25 = lVar25 + 8;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
      if (SBORROW8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100032094);
        (*pcVar21)();
      }
      pSVar18 = (State *)(lVar16 + -1);
      if ((long)local_d0[0] <= lVar16 + -1) {
        pSVar18 = local_d0[0];
      }
      (**(code **)(local_98 + 0x10))(local_b0,local_a0,local_90);
      (**(code **)(lVar22 + 0x58))(lVar15,lVar24);
      pMVar8 = local_b8;
      pSVar19 = local_d0[2];
      iVar6 = (int)lVar15;
      if (iVar6 == *(int *)
                    PTR___enum_case_for_SwiftUI_MoveCommandDirection_up_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaade0
         ) {
        FUN_100059768(pSVar18,SVar13.unknown,3);
        _swift_bridgeObjectRelease(SVar13.unknown);
        local_70 = 0;
        pSVar19 = local_d0[2];
        pMVar8 = local_b8;
      }
      else {
        if (iVar6 == *(int *)
                      PTR___enum_case_for_SwiftUI_MoveCommandDirection_down_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaade8
           ) {
          FUN_100059888(pSVar18,SVar13.unknown,3);
        }
        else if (iVar6 == *(int *)
                           PTR___enum_case_for_SwiftUI_MoveCommandDirection_left_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf0
                ) {
          FUN_100059a30(pSVar18,SVar13.unknown,3);
        }
        else {
          if (iVar6 != *(int *)
                        PTR___enum_case_for_SwiftUI_MoveCommandDirection_right_SwiftUI_MoveCommandDirection_Type___>_SwiftUI_MoveCommandDirection_100eaadf8
             ) {
            _swift_bridgeObjectRelease(SVar13.unknown);
            (**(code **)(local_98 + 8))(local_b0,local_90);
            pSVar18 = (State *)0x0;
            local_70 = 1;
            goto LAB_100031f78;
          }
          FUN_100059ac0(pSVar18,SVar13.unknown,3);
        }
        _swift_bridgeObjectRelease(SVar13.unknown);
        local_70 = 0;
      }
    }
  }
LAB_100031f78:
  local_78 = pSVar18;
  SwiftUI::State::set_wrappedValue(pSVar19,&local_78,local_d0[1]);
  (**(code **)(local_98 + 8))(local_a0,local_90);
LAB_100031f9c:
  _swift_release(pMVar8);
  return 0;
}



/* Address: 0x100032094 | FUN_100032094 */

void FUN_100032094(uint param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  State SVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  ulong local_78;
  char local_70;
  
  SVar5.unknown = &DAT_100fa7e10;
  FUN_1000037f0(&DAT_100fa7e10,&DAT_100c24de8);
  SwiftUI::State::get_wrappedValue(SVar5);
  if (local_70 != '\x01') {
    FUN_100030b04();
    if ((long)local_78 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000321d0);
      (*pcVar4)();
    }
    if (*(ulong *)(SVar5.unknown + 0x10) <= local_78) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000321d4);
      (*pcVar4)();
    }
    uVar1 = *(undefined8 *)(SVar5.unknown + local_78 * 0x20 + 0x20);
    uVar2 = *(undefined8 *)(SVar5.unknown + local_78 * 0x20 + 0x28);
    uVar6 = *(undefined8 *)(SVar5.unknown + local_78 * 0x20 + 0x30);
    cVar3 = SVar5.unknown[local_78 * 0x20 + 0x38];
    lVar7 = (long)cVar3;
    FUN_1000083b8(uVar1,uVar2,uVar6,lVar7);
    _swift_bridgeObjectRelease(SVar5.unknown);
    if (cVar3 < '\0') {
      _swift_bridgeObjectRetain(uVar2);
      FUN_100007354(uVar1,uVar2);
      FUN_1000083dc(uVar1,uVar2,uVar6,lVar7);
    }
    else {
      FUN_100006e80(uVar1,uVar2,uVar6);
      if ((param_1 >> 0x14 & 1) == 0) {
        (**(code **)(unaff_x20 + 0x10))();
      }
    }
    FUN_1000083dc(uVar1,uVar2,uVar6,lVar7);
  }
  return;
}



/* Address: 0x1000321d4 | FUN_1000321d4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000321d4(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  State SVar7;
  MainActor *pMVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  MainActor aMStack_80 [24];
  long local_68;
  undefined1 auStack_60 [32];
  
  puVar9 = auStack_a0;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar10 = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x33,UVar5.unknown,puVar10);
  }
  SVar7.unknown = &DAT_100fa7e08;
  FUN_1000037f0(&DAT_100fa7e08,&DAT_100c24dd8);
  SwiftUI::State::get_wrappedValue(SVar7);
  FUN_100011090(auStack_60,aMStack_80,&DAT_100fa8810,&DAT_100c23ce0);
  if (local_68 == 0) {
    FUN_100005808(auStack_60,&DAT_100fa8810,&DAT_100c23ce0);
  }
  else {
    pMVar8 = aMStack_80;
    FUN_100011080(pMVar8,auStack_a0);
    pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar8);
    UVar5 = Swift::Actor::get_unownedExecutor();
    UVar6 = UVar5;
    _swift_task_isCurrentExecutor();
    if (((ulong)UVar6.unknown & 1) == 0) {
      _swift_task_reportUnexpectedExecutor
                ("Paste/FilterBrowserView.swift",0x1d,1,0x34,UVar5.unknown,puVar4);
    }
    FUN_100004640(auStack_a0,local_88);
    Swift::__bridgeAnythingToObjectiveC();
    NSEvent::removeMonitor_((ID)&_OBJC_CLASS___NSEvent,puVar9);
    _swift_unknownObjectRelease(puVar9);
    FUN_100005808(auStack_60,&DAT_100fa8810,&DAT_100c23ce0);
    _swift_release(pMVar2);
    FUN_100004594(auStack_a0);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x1000323a8 | FUN_1000323a8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100032728 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000323a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Set SVar8;
  Set SVar9;
  undefined **ppuVar10;
  AnyView AVar11;
  State SVar12;
  undefined *puVar13;
  long extraout_x8;
  undefined8 *puVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar15;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ScrollView<undefined> SVar21;
  long local_160 [2];
  undefined *local_150;
  long local_148;
  undefined8 *local_140;
  undefined *local_138;
  MainActor *local_130;
  undefined *local_128;
  long local_120;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_78 [24];
  
  local_118 = param_2;
  local_108 = param_3;
  local_e8 = param_1;
  local_f0 = (undefined *)SwiftUI::ScrollViewProxy::typeMetadataAccessor();
  local_f8 = *(long *)(local_f0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = (long)local_160 - (extraout_x12 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa7e18;
  local_110 = extraout_x12;
  local_100 = lVar18;
  FUN_1000037f0(&DAT_100fa7e18,&DAT_100c24e28);
  local_138 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)(lVar18 - extraout_x8);
  local_140 = puVar14;
  local_150 = (undefined *)SwiftUI::ContentMarginPlacement::typeMetadataAccessor();
  local_160[0] = *(long *)(local_150 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_160[0] + 0x40));
  lVar18 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa7e20;
  FUN_1000037f0(&DAT_100fa7e20,&DAT_100c24e30);
  local_148 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_148 + 0x40));
  lVar19 = lVar18 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar19 - extraout_x12_00;
  puVar3 = &DAT_100fa7e28;
  FUN_1000037f0(&DAT_100fa7e28,&DAT_100c24e38);
  local_160[1] = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(local_160[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fa7e30;
  FUN_1000037f0(&DAT_100fa7e30,&DAT_100c24e40);
  local_128 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_120 = (lVar20 - extraout_x8_02) - extraout_x8_03;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar14 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_130 = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x39,UVar6.unknown,puVar14);
  }
  lVar1 = local_108;
  local_d0 = local_108;
  SVar8 = SwiftUI::Axis::Set::get_vertical((Set)pcVar7);
  FUN_1000037f0(&DAT_100fa7e38,&DAT_100c24e48);
  FUN_100035058();
  SVar21 = SwiftUI::ScrollView::_init(SVar8,true);
  SVar9 = SwiftUI::Edge::Set::get_vertical((undefined *)SVar21.lastScrollTimestamp);
  SwiftUI::ContentMarginPlacement::get_scrollIndicators((ContentMarginPlacement)SVar9.unknown);
  puVar4 = &DAT_100fa7e68;
  FUN_100016eac(&DAT_100fa7e68,&DAT_100fa7e28,&DAT_100c24e38,
                PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0);
  (extension_SwiftUI)::SwiftUI::View::_contentMargins
            (SVar9,(ContentMarginPlacement)0x4024000000000000);
  (**(code **)(local_160[0] + 8))(lVar18,local_150);
  lVar18 = local_148;
  (**(code **)(local_148 + 0x10))(lVar19,lVar20,puVar2);
  ppuVar10 = &local_e0;
  local_e0 = puVar3;
  puStack_d8 = puVar4;
  _swift_getOpaqueTypeConformance2
            (ppuVar10,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_contentMargins(_:_SwiftUI_Edge_Set,_:_CoreGraphics_CGFloat_,for:_SwiftUI_ContentMarginPlacement)__>_some>>_100eab440
             ,1);
  AVar11 = SwiftUI::AnyView::_init(ppuVar10,puVar2,ppuVar10);
  puVar14 = local_140;
  *local_140 = AVar11.unknown;
  _swift_storeEnumTagMultiPayload(puVar14,local_138,0);
  lVar19 = local_120;
  (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar14);
  (**(code **)(lVar18 + 8))(lVar20,puVar2);
  (**(code **)(local_160[1] + 8))(lVar20 - extraout_x8_02,puVar3);
  local_e0 = *(undefined **)(lVar1 + 0x20);
  local_d0 = *(undefined8 *)(lVar1 + 0x30);
  puStack_d8 = (undefined *)CONCAT71(puStack_d8._1_7_,*(undefined1 *)(lVar1 + 0x28));
  SVar12.unknown = &DAT_100fa7e10;
  FUN_1000037f0(&DAT_100fa7e10,&DAT_100c24de8);
  SwiftUI::State::get_wrappedValue(SVar12);
  puVar3 = local_f0;
  lVar20 = local_f8;
  lVar18 = local_100;
  (**(code **)(local_f8 + 0x10))(local_100,local_118,local_f0);
  FUN_1000349ac(lVar1,&local_e0);
  uVar15 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar16 = uVar15 + 0x10 & (uVar15 ^ 0xffffffffffffffff);
  uVar17 = local_110 + uVar16 + 7 & 0xfffffffffffffff8;
  puVar2 = &DAT_100eb14d8;
  _swift_allocObject(&DAT_100eb14d8,uVar17 + 0x60,uVar15 | 7);
  (**(code **)(lVar20 + 0x20))(puVar2 + uVar16,lVar18,puVar3);
  puVar14 = (undefined8 *)(puVar2 + uVar17);
  puVar14[5] = uStack_b8;
  puVar14[4] = local_c0;
  puVar14[7] = uStack_a8;
  puVar14[6] = uStack_b0;
  puVar14[9] = uStack_98;
  puVar14[8] = local_a0;
  puVar14[0xb] = uStack_88;
  puVar14[10] = uStack_90;
  puVar14[1] = puStack_d8;
  *puVar14 = local_e0;
  puVar14[3] = uStack_c8;
  puVar14[2] = local_d0;
  puVar3 = &DAT_100fa7e70;
  FUN_1000037f0(&DAT_100fa7e70,&DAT_100c24e60);
  puVar4 = puVar3;
  FUN_100035260();
  puVar13 = puVar4;
  FUN_1000352f8();
  (extension_SwiftUI)::SwiftUI::View::_onChange
            (local_e8,local_78,0,FUN_100035200,puVar2,local_128,puVar3,puVar4,puVar13);
  _swift_release(puVar2);
  FUN_100005808(lVar19,&DAT_100fa7e30,&DAT_100c24e40);
  _swift_release(local_130);
  return;
}



/* Address: 0x10003291c | FUN_10003291c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100032b14 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10003291c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 *puVar1;
  int iVar2;
  MainActor *this;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  char *pcVar6;
  HorizontalAlignment HVar7;
  Set SVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  Alignment AVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  this = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(this,this);
  puVar4 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar16 = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  pcVar6 = (char *)UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar6 & 1) == 0) {
    pcVar6 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x3a,UVar5.unknown,puVar16);
  }
  HVar7 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar6);
  *param_1 = HVar7.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  SVar8.unknown = Swift::MainActor::get_shared(this,HVar7.unknown);
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x3b,UVar9.unknown,puVar4);
  }
  puVar10 = &DAT_100fa7e88;
  FUN_1000037f0(&DAT_100fa7e88,&DAT_100c24e68);
  iVar2 = *(int *)(puVar10 + 0x2c);
  FUN_100006290();
  FUN_1000349ac(param_6,&local_f0);
  puVar10 = &DAT_100eb1500;
  _swift_allocObject(&DAT_100eb1500,0x70,7);
  *(undefined8 *)(puVar10 + 0x38) = uStack_c8;
  *(undefined8 *)(puVar10 + 0x30) = local_d0;
  *(undefined8 *)(puVar10 + 0x48) = uStack_b8;
  *(undefined8 *)(puVar10 + 0x40) = uStack_c0;
  *(undefined8 *)(puVar10 + 0x58) = uStack_a8;
  *(undefined8 *)(puVar10 + 0x50) = local_b0;
  *(undefined8 *)(puVar10 + 0x68) = uStack_98;
  *(undefined8 *)(puVar10 + 0x60) = uStack_a0;
  *(undefined8 *)(puVar10 + 0x18) = uStack_e8;
  *(undefined8 *)(puVar10 + 0x10) = local_f0;
  *(undefined8 *)(puVar10 + 0x28) = uStack_d8;
  *(undefined8 *)(puVar10 + 0x20) = uStack_e0;
  puVar11 = &DAT_100fa7e90;
  uVar18 = uStack_e0;
  FUN_1000037f0(&DAT_100fa7e90,&DAT_100c24e70);
  puVar12 = &DAT_100fa7e98;
  FUN_1000037f0(&DAT_100fa7e98,&DAT_100c24e78);
  puVar13 = &DAT_100fa7ea0;
  FUN_100016eac(&DAT_100fa7ea0,&DAT_100fa7e90,&DAT_100c24e70,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar14 = puVar13;
  FUN_100035368();
  FUN_100035400();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            ((long)param_1 + (long)iVar2,puVar14,FUN_100035360,puVar10,puVar11,
             PTR___type_metadata_for_Swift_String_100eac208,puVar12,puVar13,puVar14);
  _swift_release();
  SVar8 = SwiftUI::Edge::Set::get_bottom(SVar8);
  uVar17 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  AVar15.unknown = &DAT_100fa7e50;
  FUN_1000037f0();
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar15.unknown + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar17;
  *(undefined8 *)(puVar1 + 0x10) = uVar18;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_leading(AVar15);
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x0);
  _swift_release(pMVar3);
  puVar10 = &DAT_100fa7e38;
  FUN_1000037f0(&DAT_100fa7e38,&DAT_100c24e48);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar10 + 0x24));
  param_1[9] = uStack_a8;
  param_1[8] = local_b0;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = local_90;
  param_1[1] = uStack_e8;
  *param_1 = local_f0;
  param_1[3] = uStack_d8;
  param_1[2] = uStack_e0;
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = uStack_b8;
  param_1[6] = uStack_c0;
  return;
}



/* Address: 0x100032c1c | FUN_100032c1c */

void FUN_100032c1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined8 param_7)

{
  undefined1 *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  HorizontalAlignment HVar6;
  undefined *puVar7;
  Set SVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  SVar8.unknown = (undefined *)*param_6;
  uVar10 = param_6[1];
  uVar9 = param_6[2];
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar7,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x3c,UVar4.unknown,puVar3);
  }
  HVar6 = SwiftUI::HorizontalAlignment::get_leading((HorizontalAlignment)pcVar5);
  *param_1 = HVar6.unknown;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar7 = &DAT_100fa7ec8;
  FUN_1000037f0(&DAT_100fa7ec8,&DAT_100c24e88);
  FUN_100032f28((long)param_1 + (long)*(int *)(puVar7 + 0x2c),SVar8.unknown,uVar10,uVar9,param_7);
  SVar8 = SwiftUI::Edge::Set::get_horizontal(SVar8);
  uVar10 = 0x4030000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar8.unknown);
  _swift_release(pMVar2);
  puVar7 = &DAT_100fa7e98;
  FUN_1000037f0(&DAT_100fa7e98,&DAT_100c24e78);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar7 + 0x24));
  *puVar1 = (char)SVar8.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  return;
}



/* Address: 0x100032d70 | FUN_100032d70 */

void FUN_100032d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong *param_4)

{
  char *pcVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  MainActor *pMVar6;
  undefined8 *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  char *pcVar13;
  ulong uVar14;
  String SVar15;
  String SVar16;
  char *local_60;
  char *pcStack_58;
  
  uVar14 = *param_4;
  uVar3 = param_4[1];
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x44,UVar8.unknown,puVar7);
  }
  if ((char)uVar3 == '\x01') {
    _swift_release(pMVar6);
    return;
  }
  FUN_100030b04();
  if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100032f24);
    (*pcVar5)();
  }
  if (uVar14 < *(ulong *)(pcVar9 + 0x10)) {
    pcVar10 = *(char **)(pcVar9 + uVar14 * 0x20 + 0x20);
    pcVar1 = *(char **)(pcVar9 + uVar14 * 0x20 + 0x28);
    pcVar13 = *(char **)(pcVar9 + uVar14 * 0x20 + 0x30);
    cVar2 = pcVar9[uVar14 * 0x20 + 0x38];
    pcVar11 = pcVar13;
    pvVar12 = (void *)(long)cVar2;
    FUN_1000083b8(pcVar10,pcVar1);
    _swift_bridgeObjectRelease();
    local_60 = pcVar1;
    if (cVar2 < '\0') {
      local_60 = pcVar10;
      pcStack_58 = pcVar1;
      _swift_bridgeObjectRetain(pcVar1);
      SVar15.bridgeObject = &DAT_e500000000000000;
      SVar15.str = (char *)0x65726f6d5f;
      SVar16.bridgeObject = pvVar12;
      SVar16.str = pcVar11;
      Swift::String::append(SVar15,SVar16);
      FUN_1000083dc(pcVar10,pcVar1,pcVar13,(void *)(long)cVar2);
      pcVar9 = pcVar10;
      pcVar13 = pcStack_58;
    }
    pcStack_58 = pcVar13;
    SwiftUI::UnitPoint::get_center((UnitPoint)pcVar9);
    SwiftUI::ScrollViewProxy::_scrollTo
              (&local_60,param_1,param_2,0,PTR___type_metadata_for_Swift_String_100eac208,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    _swift_release(pMVar6);
    _swift_bridgeObjectRelease(pcVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100032f28);
  (*pcVar5)();
}



/* Address: 0x100032f28 | FUN_100032f28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000332e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100032f28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  Size SVar4;
  PinnedScrollableViews PVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  Text TVar10;
  Font FVar11;
  Font FVar12;
  Text TVar13;
  NSColor *pNVar14;
  Color CVar15;
  Text TVar16;
  Set SVar17;
  _ArrayBuffer<undefined> _Var18;
  HorizontalAlignment HVar19;
  undefined *puVar20;
  Text TVar21;
  undefined *puVar22;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar23;
  long extraout_x8_01;
  long lVar24;
  long extraout_x8_02;
  long extraout_x12;
  code *pcVar25;
  long lVar26;
  undefined8 uVar27;
  undefined8 auStack_2a0 [2];
  undefined8 *apuStack_290 [4];
  long local_270;
  long lStack_268;
  long local_260;
  long local_258;
  undefined *local_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined *local_238;
  undefined *local_230;
  long local_228;
  long local_220;
  MainActor *local_218;
  long local_210;
  undefined8 *local_208;
  undefined1 auStack_200 [80];
  undefined8 local_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined7 local_177;
  undefined1 uStack_170;
  undefined8 uStack_16f;
  undefined *local_160;
  undefined *puStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined *local_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined1 uStack_120;
  undefined7 uStack_11f;
  undefined1 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined1 local_100;
  undefined *local_f8;
  undefined1 local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  local_248 = param_8;
  uStack_240 = param_9;
  local_208 = param_1;
  PVar5 = SwiftUI::PinnedScrollableViews::typeMetadataAccessor();
  local_230 = PVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(PVar5.unknown + -8) + 0x40));
  lVar24 = (long)apuStack_290 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_228 = lVar24;
  SVar4 = SwiftUI::GridItem::Size::typeMetadataAccessor();
  lStack_268 = CONCAT71((int7)((ulong)PVar5.unknown >> 8),SVar4.value);
  local_270 = *(long *)(lStack_268 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_270 + 0x40));
  puVar23 = (undefined8 *)(lVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  apuStack_290[3] = puVar23;
  local_250 = (undefined *)SwiftUI::GridItem::typeMetadataAccessor();
  local_258 = *(long *)(local_250 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_258 + 0x40));
  lVar24 = (long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100fa7ed0;
  local_260 = lVar24;
  FUN_1000037f0(&DAT_100fa7ed0,&DAT_100c24e90);
  local_238 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar24 = lVar24 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_210 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12;
  local_220 = lVar24;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar23 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_218 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  pcVar9 = (char *)UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar9 & 1) == 0) {
    pcVar9 = "Paste/FilterBrowserView.swift";
    param_9 = 0x4e;
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x4e,UVar8.unknown,puVar23);
  }
  local_c0 = param_6;
  puStack_b8 = (undefined *)param_7;
  FUN_100008378();
  _swift_bridgeObjectRetain(param_7);
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar10 = SwiftUI::Text::_init();
  apuStack_290[2] = (undefined8 *)param_7;
  FVar11 = SwiftUI::Font::get_callout(TVar10.unknown);
  FVar12 = SwiftUI::Font::bold(FVar11);
  apuStack_290[1] = (undefined8 *)param_6;
  _swift_release(FVar11.unknown);
  TVar21 = TVar10;
  puVar20 = puVar6;
  SVar17.unknown = pcVar9;
  TVar13 = SwiftUI::Text::_font(FVar12.unknown);
  _swift_release(FVar12.unknown);
  FUN_100016d74(TVar10.unknown,puVar6,pcVar9);
  _swift_bridgeObjectRelease(param_9);
  pNVar14 = (NSColor *)NSColor::secondaryLabelColor((ID)&_OBJC_CLASS___NSColor);
  CVar15 = SwiftUI::Color::init(pNVar14);
  local_c0 = CVar15.unknown;
  FUN_10001fec0();
  TVar10 = TVar13;
  puVar6 = TVar21.unknown;
  puVar22 = puVar20;
  TVar16 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar13.unknown,TVar21.unknown,puVar20);
  _swift_release(CVar15.unknown);
  _swift_bridgeObjectRelease();
  SVar17 = SwiftUI::Edge::Set::get_vertical(SVar17);
  uVar27 = 0x4024000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  local_150 = SUB81(puVar6,0);
  local_140 = SUB81(SVar17.unknown,0);
  local_128 = (undefined1)param_4;
  uStack_127 = (undefined7)((ulong)param_4 >> 8);
  uStack_120 = (undefined1)param_5;
  uStack_11f = (undefined7)((ulong)param_5 >> 8);
  uStack_118 = 0;
  local_c8 = 0;
  local_160 = TVar16.unknown;
  puStack_158 = TVar10.unknown;
  local_148 = puVar22;
  uStack_138 = uVar27;
  uStack_130 = param_3;
  local_110 = TVar16.unknown;
  puStack_108 = TVar10.unknown;
  local_100 = local_150;
  local_f8 = puVar22;
  local_f0 = local_140;
  local_e8 = uVar27;
  uStack_e0 = param_3;
  local_d8 = param_4;
  uStack_d0 = param_5;
  FUN_100011090(&local_160,&local_c0,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(&local_110,&DAT_100fa7ed8,&DAT_100c24e98);
  puVar23 = apuStack_290[3];
  apuStack_290[3][1] = 0x7ff0000000000000;
  *puVar23 = 0x4024000000000000;
  (**(code **)(local_270 + 0x68))
            (puVar23,*(undefined4 *)
                      PTR___enum_case_for_SwiftUI_GridItem_Size_flexible_SwiftUI_GridItem_Size_Type___>__CoreGraphics_CGFloat_CoreGraphics_CGFloat___>_SwiftUI_GridItem_Size_100eaba30
             ,lStack_268);
  lVar2 = local_260;
  SwiftUI::GridItem::_init((Size)(__int8)puVar23);
  puVar20 = local_250;
  _Var18 = Swift::Array<undefined>::_allocateBufferUninitialized(&local_110,local_250);
  lVar3 = local_258;
  *(undefined8 *)(_Var18.unknown + 0x10) = 3;
  puVar6 = _Var18.unknown +
           ((ulong)*(byte *)(local_258 + 0x50) + 0x20 &
           ((ulong)*(byte *)(local_258 + 0x50) ^ 0xffffffffffffffff));
  pcVar25 = *(code **)(local_258 + 0x10);
  (*pcVar25)(puVar6,lVar2,puVar20);
  lVar26 = *(long *)(lVar3 + 0x48);
  (*pcVar25)(puVar6 + lVar26,lVar2,puVar20);
  HVar19.unknown = puVar6 + lVar26 * 2;
  (**(code **)(lVar3 + 0x20))(HVar19.unknown,lVar2,puVar20);
  local_b0 = (undefined *)apuStack_290[1];
  puStack_a8 = (undefined *)apuStack_290[2];
  local_a0 = local_248;
  uStack_98 = uStack_240;
  HVar19 = SwiftUI::HorizontalAlignment::get_center(HVar19);
  local_1b0 = (undefined *)((ulong)local_1b0._4_4_ << 0x20);
  FUN_100003a00(&DAT_100fa7ee0,PTR_typeMetadataAccessor_100eaae50,
                PTR_SwiftUI__SwiftUI__PinnedScrollableViews_>Swift__OptionSet_100eaae58);
  lVar2 = local_228;
  Swift::OptionSet::_init();
  puVar6 = &DAT_100fa7ee8;
  FUN_1000037f0(&DAT_100fa7ee8,&DAT_100c24ea0);
  puVar20 = puVar6;
  FUN_10003544c();
  *(undefined **)(lVar24 + -0x10) = puVar20;
  lVar24 = local_220;
  SwiftUI::LazyVGrid::_init
            (local_220,puVar20,HVar19.unknown,0x4020000000000000,0,lVar2,FUN_100035440,&local_c0,
             puVar6);
  SVar17.unknown = &DAT_100fa7f50;
  FUN_1000037f0(&DAT_100fa7f50,&DAT_100c24ed0);
  *(undefined2 *)(lVar24 + *(int *)(SVar17.unknown + 0x24)) = 0x100;
  SVar17 = SwiftUI::Edge::Set::get_bottom(SVar17);
  uVar27 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar17.unknown);
  lVar2 = local_210;
  puVar1 = (undefined1 *)(lVar24 + *(int *)(local_238 + 0x24));
  *puVar1 = (char)SVar17.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar27;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  local_190 = CONCAT71(uStack_13f,local_140);
  uStack_188 = uStack_138;
  uStack_178 = local_128;
  uStack_180 = uStack_130;
  uStack_16f = CONCAT17(uStack_118,uStack_11f);
  local_177 = uStack_127;
  uStack_170 = uStack_120;
  uStack_1a0 = CONCAT71(uStack_14f,local_150);
  puStack_1a8 = puStack_158;
  local_1b0 = local_160;
  puStack_198 = local_148;
  FUN_1000356a4(lVar24,local_210);
  puVar23 = local_208;
  uStack_98 = uStack_188;
  local_a0 = local_190;
  uStack_88 = uStack_178;
  uStack_90 = uStack_180;
  uStack_7f = uStack_16f;
  local_87 = local_177;
  uStack_80 = uStack_170;
  puStack_b8 = puStack_1a8;
  local_c0 = local_1b0;
  puStack_a8 = puStack_198;
  local_b0 = (undefined *)uStack_1a0;
  local_208[5] = uStack_188;
  local_208[4] = local_190;
  local_208[7] = CONCAT71(local_177,uStack_178);
  local_208[6] = uStack_180;
  *(undefined8 *)((long)local_208 + 0x41) = uStack_16f;
  *(ulong *)((long)local_208 + 0x39) = CONCAT17(uStack_170,local_177);
  local_208[1] = puStack_1a8;
  *local_208 = local_1b0;
  local_208[3] = puStack_198;
  local_208[2] = uStack_1a0;
  puVar6 = &DAT_100fa7f58;
  FUN_1000037f0(&DAT_100fa7f58,&DAT_100c24ed8);
  FUN_1000356a4(lVar2,(long)puVar23 + (long)*(int *)(puVar6 + 0x30));
  FUN_100011090(&local_c0,auStack_200,&DAT_100fa7ed8,&DAT_100c24e98);
  FUN_100005808(lVar24,&DAT_100fa7ed0,&DAT_100c24e90);
  FUN_100005808(lVar2,&DAT_100fa7ed0,&DAT_100c24e90);
  FUN_100005808(&local_1b0,&DAT_100fa7ed8,&DAT_100c24e98);
  _swift_release(local_218);
  return;
}



/* Address: 0x100033528 | FUN_100033528 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000336ac */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100033528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x54,UVar3.unknown,puVar2);
  }
  local_58 = param_4;
  FUN_1000349ac(param_5,&local_b8);
  puVar5 = &DAT_100eb1528;
  _swift_allocObject(&DAT_100eb1528,0x70,7);
  *(undefined8 *)(puVar5 + 0x38) = uStack_90;
  *(undefined8 *)(puVar5 + 0x30) = local_98;
  *(undefined8 *)(puVar5 + 0x48) = uStack_80;
  *(undefined8 *)(puVar5 + 0x40) = local_88;
  *(undefined8 *)(puVar5 + 0x58) = uStack_70;
  *(undefined8 *)(puVar5 + 0x50) = local_78;
  *(undefined8 *)(puVar5 + 0x68) = uStack_60;
  *(undefined8 *)(puVar5 + 0x60) = local_68;
  *(undefined8 *)(puVar5 + 0x18) = uStack_b0;
  *(undefined8 *)(puVar5 + 0x10) = local_b8;
  *(undefined8 *)(puVar5 + 0x28) = uStack_a0;
  *(undefined8 *)(puVar5 + 0x20) = local_a8;
  _swift_bridgeObjectRetain(param_4);
  puVar6 = &DAT_100fa7f60;
  FUN_1000037f0(&DAT_100fa7f60,&DAT_100c24ee0);
  puVar7 = &DAT_100fa7f00;
  FUN_1000037f0(&DAT_100fa7f00,&DAT_100c24ea8);
  puVar8 = &DAT_100fa7f68;
  FUN_100016eac(&DAT_100fa7f68,&DAT_100fa7f60,&DAT_100c24ee0,
                PTR_Swift__Swift__Array<undefined>_>Swift__RandomAccessCollection_100eac540);
  puVar9 = puVar8;
  FUN_1000354bc();
  FUN_100035748();
  (extension_SwiftUI)::SwiftUI::ForEach::_init
            (param_1,puVar9,FUN_100035740,puVar5,puVar6,
             PTR___type_metadata_for_Swift_String_100eac208,puVar7,puVar8,puVar9);
  _swift_release(pMVar1);
  return;
}



/* Address: 0x1000336d4 | FUN_1000336d4 */

void FUN_1000336d4(undefined8 param_1,undefined8 *param_2,long param_3)

{
  char cVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  MainActor *pMVar10;
  MainActor *pMVar11;
  MainActor *pMVar12;
  undefined8 *puVar13;
  UnownedSerialExecutor UVar14;
  char *pcVar15;
  MainActor *pMVar16;
  UnownedSerialExecutor UVar17;
  State SVar18;
  undefined *puVar19;
  MainActor *pMVar20;
  void *pvVar21;
  long extraout_x8;
  long extraout_x8_00;
  long lVar22;
  long extraout_x8_01;
  void *pvVar23;
  _StringGuts _Var24;
  MainActor *pMVar25;
  char *pcVar26;
  _StringGuts _Var27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  MainActor *local_2c0 [2];
  long local_2b0;
  long local_2a8;
  undefined *local_2a0;
  long local_298;
  undefined8 local_290;
  long local_288;
  undefined *local_280;
  undefined8 *local_278;
  MainActor *local_270;
  MainActor *local_268;
  MainActor *local_260;
  char *local_258;
  undefined8 *local_250;
  MainActor *local_248;
  int local_23c;
  MainActor *local_238;
  MainActor *local_230;
  undefined1 auStack_228 [72];
  MainActor *local_1e0;
  MainActor *pMStack_1d8;
  MainActor *pMStack_1d0;
  ulong uStack_1c8;
  code *local_1c0;
  undefined *puStack_1b8;
  MainActor *pMStack_1b0;
  MainActor *pMStack_1a8;
  undefined1 local_1a0;
  undefined7 uStack_19f;
  MainActor *pMStack_198;
  MainActor *pMStack_190;
  byte local_188;
  undefined7 uStack_187;
  code *local_180;
  undefined *puStack_178;
  MainActor *local_170;
  MainActor *pMStack_168;
  undefined1 local_160 [8];
  MainActor *local_158;
  MainActor *pMStack_150;
  byte local_148;
  code *local_140;
  undefined *puStack_138;
  MainActor *local_130;
  MainActor *pMStack_128;
  MainActor *local_120;
  MainActor *pMStack_118;
  MainActor *local_110;
  ulong uStack_108;
  code *local_100;
  undefined *puStack_f8;
  MainActor *pMStack_f0;
  MainActor *pMStack_e8;
  undefined1 local_e0;
  MainActor *local_d0;
  MainActor *pMStack_c8;
  MainActor *local_c0;
  ulong uStack_b8;
  code *local_b0;
  undefined *puStack_a8;
  MainActor *pMStack_a0;
  MainActor *pMStack_98;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puVar9 = &DAT_100fa7f78;
  FUN_1000037f0(&DAT_100fa7f78,&DAT_100c24ee8);
  local_2a8 = *(long *)(puVar9 + -8);
  local_2a0 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_2a8 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  pMVar10 = (MainActor *)&DAT_100fa7f38;
  local_2b0 = (long)local_2c0 - extraout_x8;
  FUN_1000037f0(&DAT_100fa7f38,&DAT_100c24ec0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(pMVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = ((long)local_2c0 - extraout_x8) - extraout_x8_00;
  puVar9 = &DAT_100fa7f80;
  local_298 = lVar22;
  FUN_1000037f0(&DAT_100fa7f80,&DAT_100c24ef0);
  local_280 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_278 = (undefined8 *)(lVar22 - extraout_x8_01);
  local_270 = (MainActor *)*param_2;
  local_238 = (MainActor *)param_2[1];
  local_268 = (MainActor *)param_2[2];
  local_23c = (int)*(char *)(param_2 + 3);
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar9 = PTR_typeMetadataAccessor_100eaec10;
  pMVar12 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar13 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_250 = puVar13;
  local_248 = pMVar11;
  UVar14 = Swift::Actor::get_unownedExecutor();
  pcVar15 = (char *)UVar14;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar15 & 1) == 0) {
    pcVar15 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x55,UVar14.unknown,puVar13);
  }
  local_288 = param_3;
  FUN_100030b04();
  local_260 = *(MainActor **)(pcVar15 + 0x10);
  local_290 = param_1;
  if (local_260 == (MainActor *)0x0) {
    pMVar11 = (MainActor *)0x0;
  }
  else {
    pMVar11 = (MainActor *)0x0;
    pcVar26 = pcVar15 + 0x38;
    local_2c0[0] = pMVar12;
    local_2c0[1] = pMVar10;
    local_258 = pcVar15;
    do {
      if (*(MainActor **)(local_258 + 0x10) <= pMVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100033e84);
        (*pcVar7)();
      }
      pMVar10 = *(MainActor **)(pcVar26 + -0x18);
      pMVar12 = *(MainActor **)(pcVar26 + -0x10);
      pMVar25 = *(MainActor **)(pcVar26 + -8);
      cVar1 = *pcVar26;
      pvVar23 = (void *)(long)cVar1;
      pMVar16 = pMVar10;
      pMVar20 = pMVar25;
      pvVar21 = pvVar23;
      FUN_1000083b8(pMVar10,pMVar12);
      pMVar16 = Swift::MainActor::get_shared(local_248,pMVar16);
      puVar13 = local_250;
      UVar17 = Swift::Actor::get_unownedExecutor();
      UVar14 = UVar17;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar14.unknown & 1) == 0) {
        pMVar20 = (MainActor *)&DAT_00000001;
        pvVar21 = (void *)0x56;
        _swift_task_reportUnexpectedExecutor
                  ("Paste/FilterBrowserView.swift",0x1d,1,0x56,UVar17.unknown,puVar13);
      }
      local_230 = pMVar10;
      if (cVar1 < '\0') {
        local_d0 = pMVar10;
        pMStack_c8 = pMVar12;
        _swift_bridgeObjectRetain(pMVar12);
        SVar28.bridgeObject = &DAT_e500000000000000;
        SVar28.str = (char *)0x65726f6d5f;
        SVar31.bridgeObject = pvVar21;
        SVar31.str = (char *)pMVar20;
        Swift::String::append(SVar28,SVar31);
        _Var24.unknown = local_d0;
        _Var27.unknown = pMStack_c8;
        if (local_23c < 0) goto LAB_100033978;
LAB_10003392c:
        pMVar10 = local_268;
        _swift_bridgeObjectRetain(local_268);
        pMVar20 = local_238;
        if ((MainActor *)_Var24.unknown == local_238) {
LAB_1000339ac:
          if ((MainActor *)_Var27.unknown == pMVar10) {
            _swift_release(pMVar16);
            _swift_bridgeObjectRelease(_Var27.unknown);
            _swift_bridgeObjectRelease(pMVar10);
            FUN_1000083dc(local_230,pMVar12,pMVar25,pvVar23);
            pMVar10 = local_2c0[1];
            pMVar12 = local_2c0[0];
            goto LAB_100033a60;
          }
        }
      }
      else {
        _swift_bridgeObjectRetain(pMVar25);
        _Var24.unknown = pMVar12;
        _Var27.unknown = pMVar25;
        if (-1 < local_23c) goto LAB_10003392c;
LAB_100033978:
        local_d0 = local_270;
        pMStack_c8 = local_238;
        _swift_bridgeObjectRetain();
        SVar29.bridgeObject = &DAT_e500000000000000;
        SVar29.str = (char *)0x65726f6d5f;
        SVar32.bridgeObject = pvVar21;
        SVar32.str = (char *)pMVar20;
        Swift::String::append(SVar29,SVar32);
        pMVar20 = local_d0;
        pMVar10 = pMStack_c8;
        if ((MainActor *)_Var24.unknown == local_d0) goto LAB_1000339ac;
      }
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (_Var24,_Var27,(_StringComparisonResult)(__int8)pMVar20);
      _swift_release(pMVar16);
      _swift_bridgeObjectRelease(_Var27.unknown);
      _swift_bridgeObjectRelease(pMVar10);
      FUN_1000083dc(local_230,pMVar12,pMVar25,pvVar23);
      pMVar10 = local_2c0[1];
      pMVar12 = local_2c0[0];
      if (bVar8) goto LAB_100033a60;
      pMVar11 = pMVar11 + 1;
      pcVar26 = pcVar26 + 0x20;
    } while (local_260 != pMVar11);
    pMVar11 = (MainActor *)0x0;
  }
LAB_100033a60:
  _swift_bridgeObjectRelease();
  lVar22 = local_288;
  local_d0 = *(MainActor **)(local_288 + 0x20);
  local_c0 = *(MainActor **)(local_288 + 0x30);
  pMStack_c8 = (MainActor *)CONCAT71(pMStack_c8._1_7_,*(undefined1 *)(local_288 + 0x28));
  SVar18.unknown = &DAT_100fa7e10;
  FUN_1000037f0(&DAT_100fa7e10,&DAT_100c24de8);
  SwiftUI::State::get_wrappedValue(SVar18);
  iVar2 = local_23c;
  bVar8 = (char)pMStack_118 != '\x01' && local_120 == pMVar11;
  if (local_23c < 0) {
    FUN_1000349ac(lVar22,&local_d0);
    puVar9 = &DAT_100eb1550;
    _swift_allocObject(&DAT_100eb1550,0x80,7);
    pMVar16 = local_238;
    pMVar11 = local_270;
    *(undefined **)(puVar9 + 0x38) = puStack_a8;
    *(code **)(puVar9 + 0x30) = local_b0;
    *(MainActor **)(puVar9 + 0x48) = pMStack_98;
    *(MainActor **)(puVar9 + 0x40) = pMStack_a0;
    *(undefined8 *)(puVar9 + 0x58) = uStack_88;
    *(ulong *)(puVar9 + 0x50) = CONCAT71(uStack_8f,local_90);
    *(undefined8 *)(puVar9 + 0x68) = uStack_78;
    *(undefined8 *)(puVar9 + 0x60) = uStack_80;
    *(MainActor **)(puVar9 + 0x18) = pMStack_c8;
    *(MainActor **)(puVar9 + 0x10) = local_d0;
    *(ulong *)(puVar9 + 0x28) = uStack_b8;
    *(MainActor **)(puVar9 + 0x20) = local_c0;
    *(MainActor **)(puVar9 + 0x70) = local_270;
    *(MainActor **)(puVar9 + 0x78) = local_238;
    local_110 = (MainActor *)(CONCAT71(local_110._1_7_,(char)local_268) & 0xffffffffffffff01);
    _swift_bridgeObjectRetain(local_238);
    FUN_1000037f0(&DAT_100fa7f88,&DAT_100c24ef8);
    FUN_1000357f0();
    lVar22 = local_2b0;
    SwiftUI::Button::_init();
    local_d0 = (MainActor *)((ulong)local_d0 & 0xffffffffffffff00);
    puVar9 = &DAT_100fa7fc8;
    FUN_100016eac(&DAT_100fa7fc8,&DAT_100fa7f78,&DAT_100c24ee8,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar19 = puVar9;
    FUN_10002e4f0();
    lVar4 = local_298;
    puVar3 = local_2a0;
    pcVar15 = "";
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_298,&local_d0,local_2a0,&DAT_100eb1180,puVar9,puVar19);
    (**(code **)(local_2a8 + 8))(lVar22,puVar3);
    local_d0 = pMVar11;
    pMStack_c8 = pMVar16;
    _swift_bridgeObjectRetain(pMVar16);
    SVar30.bridgeObject = &DAT_e500000000000000;
    SVar30.str = (char *)0x65726f6d5f;
    SVar33.bridgeObject = puVar9;
    SVar33.str = pcVar15;
    Swift::String::append(SVar30,SVar33);
    pMVar16 = pMStack_c8;
    pMVar11 = local_d0;
    puVar9 = &DAT_100fa7f48;
    FUN_1000037f0(&DAT_100fa7f48,&DAT_100c24ec8);
    puVar13 = local_278;
    iVar2 = *(int *)(puVar9 + 0x34);
    *(undefined8 *)(lVar4 + iVar2) = pMVar11;
    ((undefined8 *)(lVar4 + iVar2))[1] = pMVar16;
    *(bool *)(lVar4 + *(int *)(pMVar10 + 0x24)) = bVar8;
    FUN_100011090(lVar4,local_278,&DAT_100fa7f38,&DAT_100c24ec0);
    _swift_storeEnumTagMultiPayload(puVar13,local_280,1);
    FUN_1000037f0(&DAT_100fa7f10,&DAT_100c24eb0);
    FUN_100035534();
    FUN_10003560c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar13);
    FUN_100005808(lVar4,&DAT_100fa7f38,&DAT_100c24ec0);
  }
  else {
    FUN_1000349ac(lVar22,&local_d0);
    puVar9 = &DAT_100eb1578;
    _swift_allocObject(&DAT_100eb1578,0x88,7);
    pMVar16 = local_238;
    pMVar11 = local_268;
    pMVar10 = local_270;
    *(undefined **)(puVar9 + 0x38) = puStack_a8;
    *(code **)(puVar9 + 0x30) = local_b0;
    *(MainActor **)(puVar9 + 0x48) = pMStack_98;
    *(MainActor **)(puVar9 + 0x40) = pMStack_a0;
    *(undefined8 *)(puVar9 + 0x58) = uStack_88;
    *(ulong *)(puVar9 + 0x50) = CONCAT71(uStack_8f,local_90);
    *(undefined8 *)(puVar9 + 0x68) = uStack_78;
    *(undefined8 *)(puVar9 + 0x60) = uStack_80;
    *(MainActor **)(puVar9 + 0x18) = pMStack_c8;
    *(MainActor **)(puVar9 + 0x10) = local_d0;
    *(ulong *)(puVar9 + 0x28) = uStack_b8;
    *(MainActor **)(puVar9 + 0x20) = local_c0;
    local_1a0 = SUB81(local_270,0);
    puVar9[0x70] = local_1a0;
    *(MainActor **)(puVar9 + 0x78) = local_238;
    *(MainActor **)(puVar9 + 0x80) = local_268;
    local_188 = (byte)iVar2 & 1;
    pMStack_198 = local_238;
    pMStack_190 = local_268;
    local_180 = FUN_1000359cc;
    local_170 = local_238;
    pMStack_168 = local_268;
    local_1e0 = (MainActor *)CONCAT71(uStack_19f,local_1a0);
    uStack_1c8 = CONCAT71(uStack_187,(byte)iVar2) & 0xffffffffffffff01;
    local_1c0 = FUN_1000359cc;
    pMStack_1a8 = local_268;
    pMStack_1b0 = local_238;
    pMStack_1d8 = local_238;
    pMStack_1d0 = local_268;
    local_158 = local_238;
    pMStack_150 = local_268;
    local_140 = FUN_1000359cc;
    local_130 = local_238;
    pMStack_128 = local_268;
    puStack_1b8 = puVar9;
    puStack_178 = puVar9;
    local_160[0] = local_1a0;
    local_148 = local_188;
    puStack_138 = puVar9;
    FUN_1000083b8(local_270,local_238,local_268,iVar2);
    FUN_1000083b8(pMVar10,pMVar16,pMVar11,iVar2);
    FUN_1000083b8(pMVar10,pMVar16,pMVar11,iVar2);
    FUN_100011090(&local_1a0,&local_d0,&DAT_100fa7f20,&DAT_100c24eb8);
    FUN_100005808(local_160,&DAT_100fa7f20,&DAT_100c24eb8);
    pMStack_118 = pMStack_1d8;
    local_120 = local_1e0;
    uStack_108 = uStack_1c8;
    local_110 = pMStack_1d0;
    puStack_f8 = puStack_1b8;
    local_100 = local_1c0;
    pMStack_e8 = pMStack_1a8;
    pMStack_f0 = pMStack_1b0;
    pMStack_c8 = pMStack_1d8;
    local_d0 = local_1e0;
    uStack_b8 = uStack_1c8;
    local_c0 = pMStack_1d0;
    puStack_a8 = puStack_1b8;
    local_b0 = local_1c0;
    pMStack_98 = pMStack_1a8;
    pMStack_a0 = pMStack_1b0;
    local_e0 = bVar8;
    local_90 = bVar8;
    FUN_100011090(&local_120,auStack_228,&DAT_100fa7f10,&DAT_100c24eb0);
    FUN_100005808(&local_d0,&DAT_100fa7f10,&DAT_100c24eb0);
    pMVar11 = pMStack_e8;
    pMVar10 = pMStack_f0;
    pcVar7 = local_100;
    puVar5 = local_278;
    puVar9 = local_280;
    puVar13 = local_278 + 4;
    local_278[5] = puStack_f8;
    *puVar13 = pcVar7;
    puVar5[7] = pMVar11;
    puVar5[6] = pMVar10;
    *(undefined1 *)(puVar5 + 8) = local_e0;
    uVar6 = uStack_108;
    pMVar11 = local_110;
    pMVar10 = local_120;
    puVar5[1] = pMStack_118;
    *puVar5 = pMVar10;
    puVar5[3] = uVar6;
    puVar5[2] = pMVar11;
    _swift_storeEnumTagMultiPayload(puVar5,puVar9,0);
    FUN_1000037f0(&DAT_100fa7f10,&DAT_100c24eb0);
    FUN_100035534();
    FUN_10003560c();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar5);
  }
  _swift_release(pMVar12);
  return;
}



/* Address: 0x100033e84 | FUN_100033e84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100033e84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID IVar1;
  
  IVar1 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent);
  FUN_100006e80(param_2,param_3,param_4);
  if (((uint)IVar1 >> 0x14 & 1) == 0) {
    (**(code **)(param_1 + 0x10))();
  }
  return;
}



/* Address: 0x100033ef0 | FUN_100033ef0 */

void FUN_100033ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x77,UVar4.unknown,puVar3);
  }
  FUN_100007354(param_2,param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100033fb8 | FUN_100033fb8 */

void FUN_100033fb8(void *param_1,uint param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  VerticalAlignment VVar6;
  Set _all;
  Set SVar7;
  Alignment AVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_b28 [296];
  undefined *local_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 local_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 local_980;
  undefined8 uStack_978;
  undefined8 local_970;
  undefined8 uStack_968;
  undefined8 local_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 local_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 local_920;
  undefined8 uStack_918;
  undefined1 local_910;
  undefined8 local_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 local_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 local_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 local_870;
  undefined1 uStack_868;
  undefined7 uStack_867;
  undefined1 uStack_860;
  undefined8 uStack_85f;
  undefined8 local_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 local_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7df;
  undefined *local_7d0;
  undefined8 uStack_7c8;
  undefined1 local_7c0;
  undefined7 local_7bf;
  undefined1 uStack_7b8;
  undefined7 uStack_7b7;
  undefined1 uStack_7b0;
  undefined7 local_7af;
  undefined1 uStack_7a8;
  undefined7 uStack_7a7;
  undefined1 uStack_7a0;
  undefined7 local_79f;
  undefined1 uStack_798;
  undefined7 uStack_797;
  undefined1 uStack_790;
  undefined7 local_78f;
  undefined1 uStack_788;
  undefined7 uStack_787;
  undefined1 uStack_780;
  undefined7 local_77f;
  undefined1 uStack_778;
  undefined7 uStack_777;
  undefined1 uStack_770;
  undefined7 local_76f;
  undefined1 uStack_768;
  undefined7 uStack_767;
  undefined1 uStack_760;
  undefined7 local_75f;
  undefined1 uStack_758;
  undefined7 uStack_757;
  undefined1 uStack_750;
  undefined7 local_74f;
  undefined1 uStack_748;
  undefined7 uStack_747;
  undefined1 uStack_740;
  undefined *local_738;
  undefined8 local_730;
  undefined1 local_728;
  undefined8 local_727;
  undefined8 uStack_71f;
  undefined8 local_717;
  undefined8 uStack_70f;
  undefined8 local_707;
  undefined8 uStack_6ff;
  undefined8 local_6f7;
  undefined8 uStack_6ef;
  undefined8 local_6e7;
  undefined8 uStack_6df;
  undefined8 local_6d7;
  undefined8 uStack_6cf;
  undefined8 local_6c7;
  undefined8 uStack_6bf;
  undefined8 uStack_6af;
  undefined *local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined8 local_630;
  undefined8 uStack_628;
  undefined8 local_620;
  undefined8 uStack_618;
  undefined8 local_610;
  undefined1 local_608;
  undefined7 uStack_607;
  undefined8 local_600;
  undefined8 uStack_5f8;
  undefined8 local_5f0;
  undefined8 local_5e8;
  undefined1 local_5e0;
  undefined *local_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined8 local_540;
  undefined1 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 local_510;
  undefined *local_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 local_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 local_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 local_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 local_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined8 local_430;
  undefined8 local_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined1 local_410;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
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
  undefined1 local_338;
  undefined8 local_330;
  undefined8 local_328;
  undefined1 local_310;
  undefined7 uStack_300;
  undefined1 local_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 local_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  undefined7 uStack_2e0;
  undefined1 local_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 local_2b9;
  undefined7 uStack_2b8;
  undefined1 uStack_2b1;
  undefined7 uStack_2b0;
  undefined1 local_2a9;
  undefined7 uStack_2a8;
  undefined1 uStack_2a1;
  undefined7 uStack_2a0;
  undefined1 local_299;
  undefined7 uStack_298;
  undefined1 uStack_291;
  undefined7 uStack_290;
  undefined1 uStack_289;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined1 local_240;
  undefined7 uStack_23f;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined1 uStack_168;
  undefined8 uStack_167;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  pcVar5 = (char *)UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar5 & 1) == 0) {
    pcVar5 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x79,UVar4.unknown,puVar3);
  }
  VVar6 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar5);
  FUN_100034558(&local_1d8,param_2 & 1);
  uStack_888 = uStack_190;
  local_890 = local_198;
  uStack_878 = uStack_180;
  uStack_880 = local_188;
  uStack_868 = uStack_170;
  local_870 = local_178;
  uVar15 = CONCAT17(uStack_168,uStack_16f);
  uStack_85f = uStack_167;
  uStack_867 = uStack_16f;
  uStack_860 = uStack_168;
  uStack_8c8 = uStack_1d0;
  local_8d0 = local_1d8;
  uStack_8b8 = uStack_1c0;
  uStack_8c0 = local_1c8;
  uStack_8a8 = uStack_1b0;
  local_8b0 = local_1b8;
  uStack_898 = uStack_1a0;
  uStack_8a0 = local_1a8;
  uStack_848 = uStack_1d0;
  local_850 = local_1d8;
  uStack_838 = uStack_1c0;
  uStack_840 = local_1c8;
  uStack_828 = uStack_1b0;
  local_830 = local_1b8;
  uStack_818 = uStack_1a0;
  uStack_820 = local_1a8;
  uStack_808 = uStack_190;
  local_810 = local_198;
  uStack_7f8 = uStack_180;
  uStack_800 = local_188;
  local_7f0 = local_178;
  uStack_7df = uStack_167;
  FUN_100011090(&local_8d0,&uStack_300,&DAT_100fa7fd0,&DAT_100c24f18);
  SVar7.unknown = (undefined *)&local_850;
  FUN_100005808(SVar7.unknown,&DAT_100fa7fd0,&DAT_100c24f18);
  uStack_2b1 = (undefined1)uStack_888;
  uStack_2b0 = (undefined7)((ulong)uStack_888 >> 8);
  local_2b9 = (undefined1)local_890;
  uStack_2b8 = (undefined7)((ulong)local_890 >> 8);
  uStack_2a1 = (undefined1)uStack_878;
  uStack_2a0 = (undefined7)((ulong)uStack_878 >> 8);
  local_2a9 = (undefined1)uStack_880;
  uStack_2a8 = (undefined7)((ulong)uStack_880 >> 8);
  uStack_291 = uStack_868;
  local_299 = (undefined1)local_870;
  uStack_298 = (undefined7)((ulong)local_870 >> 8);
  uStack_288 = uStack_85f;
  uStack_290 = uStack_867;
  uStack_289 = uStack_860;
  uStack_2f1 = (undefined1)uStack_8c8;
  uStack_2f0 = (undefined7)((ulong)uStack_8c8 >> 8);
  local_2f9 = (undefined1)local_8d0;
  uStack_2f8 = (undefined7)((ulong)local_8d0 >> 8);
  uStack_2e1 = (undefined1)uStack_8b8;
  uStack_2e0 = (undefined7)((ulong)uStack_8b8 >> 8);
  local_2e9 = (undefined1)uStack_8c0;
  uStack_2e8 = (undefined7)((ulong)uStack_8c0 >> 8);
  uStack_2d1 = (undefined1)uStack_8a8;
  uStack_2d0 = (undefined7)((ulong)uStack_8a8 >> 8);
  local_2d9 = (undefined1)local_8b0;
  uStack_2d8 = (undefined7)((ulong)local_8b0 >> 8);
  uStack_2c1 = (undefined1)uStack_898;
  uStack_2c0 = (undefined7)((ulong)uStack_898 >> 8);
  local_2c9 = (undefined1)uStack_8a0;
  uStack_2c8 = (undefined7)((ulong)uStack_8a0 >> 8);
  _all = SwiftUI::Edge::Set::get_horizontal(SVar7);
  uStack_777 = uStack_2b8;
  uStack_770 = uStack_2b1;
  local_77f = uStack_2c0;
  uStack_778 = local_2b9;
  uStack_767 = uStack_2a8;
  uStack_760 = uStack_2a1;
  local_76f = uStack_2b0;
  uStack_768 = local_2a9;
  uStack_757 = uStack_298;
  uStack_750 = uStack_291;
  local_75f = uStack_2a0;
  uStack_758 = local_299;
  uStack_747 = (undefined7)uStack_288;
  uStack_740 = (undefined1)((ulong)uStack_288 >> 0x38);
  local_74f = uStack_290;
  uStack_748 = uStack_289;
  uStack_7b7 = uStack_2f8;
  uStack_7b0 = uStack_2f1;
  local_7bf = uStack_300;
  uStack_7b8 = local_2f9;
  uStack_7a7 = uStack_2e8;
  uStack_7a0 = uStack_2e1;
  local_7af = uStack_2f0;
  uStack_7a8 = local_2e9;
  uVar11 = CONCAT17(local_2c9,uStack_2d0);
  uStack_797 = uStack_2d8;
  uStack_790 = uStack_2d1;
  local_79f = uStack_2e0;
  uStack_798 = local_2d9;
  uStack_7c8 = 0x4020000000000000;
  local_7c0 = 0;
  uStack_787 = uStack_2c8;
  uStack_780 = uStack_2c1;
  local_78f = uStack_2d0;
  uStack_788 = local_2c9;
  uVar9 = 0x4024000000000000;
  uVar13 = local_178;
  local_7d0 = VVar6.unknown;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  uStack_998 = CONCAT71(uStack_767,uStack_768);
  local_9a0 = CONCAT71(local_76f,uStack_770);
  uStack_988 = CONCAT71(uStack_757,uStack_758);
  uStack_990 = CONCAT71(local_75f,uStack_760);
  uStack_978 = CONCAT71(uStack_747,uStack_748);
  local_980 = CONCAT71(local_74f,uStack_750);
  uStack_9d8 = CONCAT71(uStack_7a7,uStack_7a8);
  local_9e0 = CONCAT71(local_7af,uStack_7b0);
  uStack_9c8 = CONCAT71(uStack_797,uStack_798);
  uStack_9d0 = CONCAT71(local_79f,uStack_7a0);
  uStack_9b8 = CONCAT71(uStack_787,uStack_788);
  local_9c0 = CONCAT71(local_78f,uStack_790);
  uStack_9a8 = CONCAT71(uStack_777,uStack_778);
  uStack_9b0 = CONCAT71(local_77f,uStack_780);
  uStack_9e8 = CONCAT71(uStack_7b7,uStack_7b8);
  uStack_9f0 = CONCAT71(local_7bf,local_7c0);
  uStack_9f8 = uStack_7c8;
  local_a00 = local_7d0;
  uStack_6df = CONCAT17(uStack_2b1,uStack_2b8);
  local_6e7 = CONCAT17(local_2b9,uStack_2c0);
  uStack_6cf = CONCAT17(uStack_2a1,uStack_2a8);
  local_6d7 = CONCAT17(local_2a9,uStack_2b0);
  uStack_6bf = CONCAT17(uStack_291,uStack_298);
  local_6c7 = CONCAT17(local_299,uStack_2a0);
  uStack_6af = uStack_288;
  uStack_71f = CONCAT17(uStack_2f1,uStack_2f8);
  local_727 = CONCAT17(local_2f9,uStack_300);
  uStack_70f = CONCAT17(uStack_2e1,uStack_2e8);
  local_717 = CONCAT17(local_2e9,uStack_2f0);
  uStack_6ff = CONCAT17(uStack_2d1,uStack_2d8);
  local_707 = CONCAT17(local_2d9,uStack_2e0);
  uStack_6ef = CONCAT17(uStack_2c1,uStack_2c8);
  local_6f7 = CONCAT17(local_2c9,uStack_2d0);
  local_970 = CONCAT71(local_970._1_7_,uStack_740);
  local_730 = 0x4020000000000000;
  local_728 = 0;
  uVar14 = uVar13;
  uVar16 = uVar15;
  local_738 = VVar6.unknown;
  FUN_100011090(&local_7d0,&local_1d8,&DAT_100fa7fc0,&DAT_100c24f10);
  SVar7.unknown = (undefined *)&local_738;
  FUN_100005808(SVar7.unknown,&DAT_100fa7fc0,&DAT_100c24f10);
  SVar7 = SwiftUI::Edge::Set::get_vertical(SVar7);
  uStack_638 = uStack_998;
  local_640 = local_9a0;
  uStack_628 = uStack_988;
  local_630 = uStack_990;
  uStack_618 = uStack_978;
  local_620 = local_980;
  local_610 = local_970;
  uStack_678 = uStack_9d8;
  local_680 = local_9e0;
  uStack_668 = uStack_9c8;
  uStack_670 = uStack_9d0;
  uStack_658 = uStack_9b8;
  local_660 = local_9c0;
  uStack_648 = uStack_9a8;
  uStack_650 = uStack_9b0;
  uStack_698 = uStack_9f8;
  local_6a0 = local_a00;
  uStack_688 = uStack_9e8;
  uStack_690 = uStack_9f0;
  local_5e0 = 0;
  uVar10 = 0x4018000000000000;
  uVar12 = uStack_9f0;
  local_608 = (char)_all.unknown;
  local_600 = uVar9;
  uStack_5f8 = uVar11;
  local_5f0 = uVar13;
  local_5e8 = uVar15;
  SwiftUI::EdgeInsets::init((CGFloat)SVar7.unknown);
  uStack_258 = uStack_5f8;
  local_260 = local_600;
  uStack_248 = local_5e8;
  uStack_250 = local_5f0;
  local_240 = local_5e0;
  uStack_298 = (undefined7)uStack_638;
  uStack_291 = (undefined1)((ulong)uStack_638 >> 0x38);
  uStack_2a0 = (undefined7)local_640;
  local_299 = (undefined1)((ulong)local_640 >> 0x38);
  uStack_288 = uStack_628;
  uStack_290 = (undefined7)local_630;
  uStack_289 = (undefined1)((ulong)local_630 >> 0x38);
  uStack_268 = CONCAT71(uStack_607,local_608);
  uStack_278 = uStack_618;
  local_280 = local_620;
  uStack_270 = local_610;
  uStack_2d8 = (undefined7)uStack_678;
  uStack_2d1 = (undefined1)((ulong)uStack_678 >> 0x38);
  uStack_2e0 = (undefined7)local_680;
  local_2d9 = (undefined1)((ulong)local_680 >> 0x38);
  uStack_2c8 = (undefined7)uStack_668;
  uStack_2c1 = (undefined1)((ulong)uStack_668 >> 0x38);
  uStack_2d0 = (undefined7)uStack_670;
  local_2c9 = (undefined1)((ulong)uStack_670 >> 0x38);
  uStack_2b8 = (undefined7)uStack_658;
  uStack_2b1 = (undefined1)((ulong)uStack_658 >> 0x38);
  uStack_2c0 = (undefined7)local_660;
  local_2b9 = (undefined1)((ulong)local_660 >> 0x38);
  uStack_2a8 = (undefined7)uStack_648;
  uStack_2a1 = (undefined1)((ulong)uStack_648 >> 0x38);
  uStack_2b0 = (undefined7)uStack_650;
  local_2a9 = (undefined1)((ulong)uStack_650 >> 0x38);
  uStack_2f8 = (undefined7)uStack_698;
  uStack_2f1 = (undefined1)((ulong)uStack_698 >> 0x38);
  uStack_300 = SUB87(local_6a0,0);
  local_2f9 = (undefined1)((ulong)local_6a0 >> 0x38);
  uStack_2e8 = (undefined7)uStack_688;
  uStack_2e1 = (undefined1)((ulong)uStack_688 >> 0x38);
  uStack_2f0 = (undefined7)uStack_690;
  local_2e9 = (undefined1)((ulong)uStack_690 >> 0x38);
  uStack_568 = uStack_998;
  local_570 = local_9a0;
  uStack_558 = uStack_988;
  uStack_560 = uStack_990;
  uStack_548 = uStack_978;
  local_550 = local_980;
  local_540 = local_970;
  uStack_5a8 = uStack_9d8;
  local_5b0 = local_9e0;
  uStack_598 = uStack_9c8;
  uStack_5a0 = uStack_9d0;
  uStack_588 = uStack_9b8;
  local_590 = local_9c0;
  uStack_578 = uStack_9a8;
  uStack_580 = uStack_9b0;
  uStack_5c8 = uStack_9f8;
  local_5d0 = local_a00;
  uStack_5b8 = uStack_9e8;
  uStack_5c0 = uStack_9f0;
  local_510 = 0;
  local_538 = (char)_all.unknown;
  local_530 = uVar9;
  local_528 = uVar11;
  FUN_100011090(&local_6a0,&local_1d8,&DAT_100fa7fb0,&DAT_100c24f08);
  AVar8.unknown = (undefined *)&local_5d0;
  FUN_100005808(AVar8.unknown,&DAT_100fa7fb0,&DAT_100c24f08);
  SwiftUI::Alignment::get_leading(AVar8);
  uStack_458 = uStack_258;
  local_460 = local_260;
  uStack_448 = uStack_248;
  uStack_450 = uStack_250;
  local_440 = CONCAT71(uStack_23f,local_240);
  uStack_498 = CONCAT17(uStack_291,uStack_298);
  local_4a0 = CONCAT17(local_299,uStack_2a0);
  uStack_490 = CONCAT17(uStack_289,uStack_290);
  uStack_488 = uStack_288;
  uStack_478 = uStack_278;
  local_480 = local_280;
  uStack_468 = uStack_268;
  uStack_470 = uStack_270;
  uStack_4d8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_4e0 = CONCAT17(local_2d9,uStack_2e0);
  uStack_4c8 = CONCAT17(uStack_2c1,uStack_2c8);
  uStack_4d0 = CONCAT17(local_2c9,uStack_2d0);
  uStack_4b8 = CONCAT17(uStack_2b1,uStack_2b8);
  local_4c0 = CONCAT17(local_2b9,uStack_2c0);
  uStack_4a8 = CONCAT17(uStack_2a1,uStack_2a8);
  uStack_4b0 = CONCAT17(local_2a9,uStack_2b0);
  uStack_4f8 = CONCAT17(uStack_2f1,uStack_2f8);
  local_500 = (undefined *)CONCAT17(local_2f9,uStack_300);
  uStack_4e8 = CONCAT17(uStack_2e1,uStack_2e8);
  uStack_4f0 = CONCAT17(local_2e9,uStack_2f0);
  local_410 = 0;
  uStack_438 = (char)SVar7.unknown;
  local_430 = uVar10;
  local_428 = uVar12;
  local_420 = uVar14;
  uStack_418 = uVar16;
  SwiftUI::_FrameLayout::_init((Alignment)0x0);
  uStack_938 = CONCAT71(uStack_437,uStack_438);
  local_940 = local_440;
  uStack_928 = local_428;
  uStack_930 = local_430;
  uStack_918 = uStack_418;
  local_920 = local_420;
  local_910 = local_410;
  uStack_978 = uStack_478;
  local_980 = local_480;
  uStack_968 = uStack_468;
  local_970 = uStack_470;
  uStack_958 = uStack_458;
  local_960 = local_460;
  uStack_948 = uStack_448;
  uStack_950 = uStack_450;
  uStack_9b8 = uStack_4b8;
  local_9c0 = local_4c0;
  uStack_9a8 = uStack_4a8;
  uStack_9b0 = uStack_4b0;
  uStack_998 = uStack_498;
  local_9a0 = local_4a0;
  uStack_988 = uStack_488;
  uStack_990 = uStack_490;
  uStack_9f8 = uStack_4f8;
  local_a00 = local_500;
  uStack_9e8 = uStack_4e8;
  uStack_9f0 = uStack_4f0;
  uStack_9d8 = uStack_4d8;
  local_9e0 = local_4e0;
  uStack_9c8 = uStack_4c8;
  uStack_9d0 = uStack_4d0;
  uStack_358 = uStack_258;
  local_360 = local_260;
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  local_340 = CONCAT71(uStack_23f,local_240);
  uStack_398 = CONCAT17(uStack_291,uStack_298);
  local_3a0 = CONCAT17(local_299,uStack_2a0);
  uStack_390 = CONCAT17(uStack_289,uStack_290);
  uStack_388 = uStack_288;
  uStack_378 = uStack_278;
  local_380 = local_280;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_3d8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_3e0 = CONCAT17(local_2d9,uStack_2e0);
  uStack_3c8 = CONCAT17(uStack_2c1,uStack_2c8);
  uStack_3d0 = CONCAT17(local_2c9,uStack_2d0);
  uStack_3b8 = CONCAT17(uStack_2b1,uStack_2b8);
  local_3c0 = CONCAT17(local_2b9,uStack_2c0);
  uStack_3a8 = CONCAT17(uStack_2a1,uStack_2a8);
  uStack_3b0 = CONCAT17(local_2a9,uStack_2b0);
  uStack_3f8 = CONCAT17(uStack_2f1,uStack_2f8);
  local_400 = CONCAT17(local_2f9,uStack_300);
  uStack_3e8 = CONCAT17(uStack_2e1,uStack_2e8);
  uStack_3f0 = CONCAT17(local_2e9,uStack_2f0);
  local_310 = 0;
  local_338 = (char)SVar7.unknown;
  local_330 = uVar10;
  local_328 = uVar12;
  FUN_100011090(&local_500,&local_1d8,&DAT_100fa7fa0,&DAT_100c24f00);
  FUN_100005808(&local_400,&DAT_100fa7fa0,&DAT_100c24f00);
  _memcpy(&uStack_300,&local_a00,0x128);
  _memcpy(&local_1d8,&local_a00,0x128);
  FUN_100011090(&uStack_300,auStack_b28,&DAT_100fa7f88,&DAT_100c24ef8);
  FUN_100005808(&local_1d8,&DAT_100fa7f88,&DAT_100c24ef8);
  _swift_release(pMVar2);
  _memcpy(param_1,&uStack_300,0x128);
  return;
}



/* Address: 0x100034558 | FUN_100034558 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000347e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100034558(undefined8 *param_1,ulong param_2)

{
  ResizingMode RVar1;
  LocalizedStringResource LVar2;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  Image IVar8;
  Image IVar9;
  NSColor *pNVar10;
  Color CVar11;
  char *pcVar12;
  Text TVar13;
  Font FVar14;
  Text TVar15;
  Text TVar16;
  Text TVar17;
  undefined *puVar18;
  undefined *puVar19;
  long extraout_x8;
  long extraout_x8_00;
  long lVar20;
  LocalizedStringResource localized;
  EdgeInsets capInsets;
  String SVar21;
  undefined1 auStack_250 [8];
  undefined *local_248;
  MainActor *local_240;
  undefined8 *local_238;
  undefined1 auStack_230 [80];
  char *local_1e0;
  void *pvStack_1d8;
  undefined8 uStack_1d0;
  undefined *puStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  String local_190;
  undefined8 local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  char *local_138;
  void *pvStack_130;
  undefined2 local_128;
  undefined6 uStack_126;
  undefined *puStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined8 uStack_e0;
  undefined2 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *puVar3;
  
  local_238 = param_1;
  LVar2 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar2.unknown + -8) + 0x40));
  localized.unknown = auStack_250 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  RVar1 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71((int7)((ulong)LVar2.unknown >> 8),RVar1.value);
  lVar20 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
  capInsets.unknown = localized.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar19 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  puVar5 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar19,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_240 = pMVar4;
  UVar6 = Swift::Actor::get_unownedExecutor();
  pcVar7 = (char *)UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar7 & 1) == 0) {
    pcVar7 = "Paste/FilterBrowserView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0x7a,UVar6.unknown,puVar5);
  }
  if ((param_2 & 1) == 0) {
    FUN_10020cacc();
  }
  else {
    FUN_10020cba4();
  }
  SVar21 = *(String *)pcVar7;
  _swift_bridgeObjectRetain(((String *)pcVar7)->bridgeObject);
  IVar8 = SwiftUI::Image::init(SVar21);
  IVar9.unknown = puVar3;
  (**(code **)(lVar20 + 0x68))
            (capInsets.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar9 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar8.unknown,IVar9);
  _swift_release(IVar8.unknown);
  (**(code **)(lVar20 + 8))(capInsets.unknown,puVar3);
  local_248 = &_OBJC_CLASS___NSColor;
  pNVar10 = (NSColor *)NSColor::labelColor((ID)&_OBJC_CLASS___NSColor);
  CVar11 = SwiftUI::Color::init(pNVar10);
  SwiftUI::Alignment::get_center((Alignment)CVar11.unknown);
  SwiftUI::_FrameLayout::_init((Alignment)0x4028000000000000);
  pvStack_130 = (void *)0x0;
  local_128 = 1;
  uStack_110 = uStack_90;
  local_118 = local_98;
  uStack_100 = uStack_80;
  local_108 = local_88;
  uStack_f0 = uStack_70;
  local_f8 = local_78;
  uStack_e0 = 0;
  local_d8 = 1;
  uStack_a0 = uStack_70;
  local_a8 = local_78;
  uStack_b0 = uStack_80;
  local_b8 = local_88;
  uStack_c0 = uStack_90;
  local_c8 = local_98;
  puVar19 = &DAT_100c24f20;
  local_138 = (char *)IVar9;
  puStack_120 = CVar11.unknown;
  local_e8 = IVar9.unknown;
  local_d0 = CVar11.unknown;
  FUN_100011090(&local_138,&local_190,&DAT_100fa7fd8,&DAT_100c24f20);
  FUN_100005808(&local_e8,&DAT_100fa7fd8,&DAT_100c24f20);
  if ((param_2 & 1) == 0) {
    FUN_1001c54d8(localized.unknown);
  }
  else {
    FUN_1001c54b8();
  }
  SVar21 = (extension_Foundation)::Swift::String::init(localized);
  local_190 = SVar21;
  FUN_100008378();
  pcVar12 = SVar21.str;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar13 = SwiftUI::Text::_init(pcVar12,PTR___type_metadata_for_Swift_String_100eac208,pcVar12);
  FVar14 = SwiftUI::Font::get_body(TVar13.unknown);
  TVar17 = TVar13;
  puVar18 = puVar3;
  pcVar7 = pcVar12;
  TVar15 = SwiftUI::Text::_font(FVar14.unknown);
  _swift_release(FVar14.unknown);
  FUN_100016d74(TVar13.unknown,puVar3,pcVar12);
  _swift_bridgeObjectRelease(puVar19);
  pNVar10 = (NSColor *)objc_stub::labelColor((ID)local_248);
  CVar11 = SwiftUI::Color::init(pNVar10);
  local_190.str = CVar11.unknown;
  FUN_10001fec0();
  TVar13 = TVar15;
  puVar19 = TVar17.unknown;
  puVar3 = puVar18;
  TVar16 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar15.unknown,TVar17.unknown,puVar18);
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease(pcVar7);
  uStack_1b8 = uStack_110;
  local_1c0 = local_118;
  uStack_1a8 = uStack_100;
  uStack_1b0 = local_108;
  uStack_1d0 = CONCAT62(uStack_126,local_128);
  pvStack_1d8 = pvStack_130;
  local_1e0 = local_138;
  puStack_1c8 = puStack_120;
  uStack_168 = uStack_110;
  local_170 = local_118;
  uStack_158 = uStack_100;
  uStack_160 = local_108;
  uStack_148 = uStack_f0;
  local_150 = local_f8;
  puStack_178 = puStack_120;
  uStack_198 = uStack_f0;
  local_1a0 = local_f8;
  local_190.bridgeObject = pvStack_130;
  local_190.str = local_138;
  local_238[5] = uStack_110;
  local_238[4] = local_118;
  local_238[7] = uStack_100;
  local_238[6] = local_108;
  local_238[9] = uStack_f0;
  local_238[8] = local_f8;
  local_238[1] = pvStack_130;
  *local_238 = local_138;
  local_238[3] = puStack_120;
  local_238[2] = uStack_1d0;
  local_238[10] = TVar16.unknown;
  local_238[0xb] = TVar13.unknown;
  *(char *)(local_238 + 0xc) = (char)puVar19;
  local_238[0xd] = puVar3;
  local_238[0xe] = 0;
  *(undefined1 *)(local_238 + 0xf) = 0;
  local_180 = uStack_1d0;
  FUN_100011090(&local_190,auStack_230,&DAT_100fa7fd8,&DAT_100c24f20);
  FUN_100016d5c(TVar16.unknown,TVar13.unknown,puVar19);
  _swift_bridgeObjectRetain(puVar3);
  FUN_100016d74(TVar16.unknown,TVar13.unknown,puVar19);
  _swift_bridgeObjectRelease(puVar3);
  FUN_100005808(&local_1e0,&DAT_100fa7fd8,&DAT_100c24f20);
  _swift_release(local_240);
  return;
}



/* Address: 0x1000349a8 | thunk_FUN_100030dc0 */

void thunk_FUN_100030dc0(void)

{
  FUN_100030dc0();
  return;
}



/* Address: 0x1000349ac | FUN_1000349ac */

undefined8 FUN_1000349ac(undefined8 param_1,undefined8 param_2)

{
  FUN_100030688(param_2,param_1,&DAT_100eb1390);
  return param_2;
}



/* Address: 0x1000349e0 | thunk_FUN_1000356f4 */

void thunk_FUN_1000356f4(void)

{
  FUN_1000356f4();
  return;
}



/* Address: 0x1000349e4 | FUN_1000349e4 */

void FUN_1000349e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000323a8(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000349ec | FUN_1000349ec */

void FUN_1000349ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7db0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7da8;
  FUN_100005c24(&DAT_100fa7da8,&DAT_100c24da8);
  puVar2 = puVar1;
  FUN_100034a64();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7db0 = puVar3;
  return;
}



/* Address: 0x100034a64 | FUN_100034a64 */

void FUN_100034a64(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7db8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7da0;
  FUN_100005c24(&DAT_100fa7da0,&DAT_100c24da0);
  puVar2 = puVar1;
  FUN_100034adc();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7db8 = puVar3;
  return;
}



/* Address: 0x100034adc | FUN_100034adc */

void FUN_100034adc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7dc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7dc8;
  FUN_100005c24(&DAT_100fa7dc8,&DAT_100c24db0);
  puVar2 = &DAT_100fa7dd0;
  FUN_100016eac(&DAT_100fa7dd0,&DAT_100fa7dd8,&DAT_100c24db8,
                PTR_SwiftUI__SwiftUI__ScrollViewReader<undefined>_>SwiftUI__View_100eaa9f8);
  puVar3 = &DAT_100fa7de0;
  FUN_100016eac(&DAT_100fa7de0,&DAT_100fa7de8,&DAT_100c24dc0,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7dc0 = puVar4;
  return;
}



/* Address: 0x100034b94 | FUN_100034b94 */

void FUN_100034b94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100031490(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100034b9c | FUN_100034b9c */

void FUN_100034b9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *local_40;
  undefined8 *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7df0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7d90;
  FUN_100005c24(&DAT_100fa7d90,&DAT_100c24d90);
  puVar2 = &DAT_100fa7da8;
  FUN_100005c24(&DAT_100fa7da8,&DAT_100c24da8);
  puVar3 = puVar2;
  FUN_1000349ec();
  ppuVar4 = &local_30;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getOpaqueTypeConformance2
            (ppuVar4,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focusable(Swift_Bool)__>_some>>_100eab628
             ,1);
  local_40 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puVar2 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_38 = ppuVar4;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_40);
  DAT_100fa7df0 = puVar2;
  return;
}



/* Address: 0x100034c44 | FUN_100034c44 */

void FUN_100034c44(void)

{
  long unaff_x20;
  
  FUN_1000318c8(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100034c4c | FUN_100034c4c */

void FUN_100034c4c(void)

{
  long unaff_x20;
  
  FUN_100031978(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100034c54 | FUN_100034c54 */

void FUN_100034c54(void)

{
  long unaff_x20;
  
  FUN_1000321d4(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100034c5c | FUN_100034c5c */

void FUN_100034c5c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100031b60(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100034c64 | FUN_100034c64 */

void FUN_100034c64(long param_1,long param_2)

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



/* Address: 0x100034c78 | FUN_100034c78 */

void FUN_100034c78(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100034c80 | FUN_100034c80 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100034dd8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100034c80(long param_1,ulong param_2)

{
  ulong *puVar1;
  undefined1 *puVar2;
  RoundedCornerStyle RVar3;
  bool bVar4;
  Capsule CVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  UnownedSerialExecutor UVar9;
  UnownedSerialExecutor UVar10;
  Color CVar11;
  Alignment AVar12;
  Set SVar13;
  undefined *puVar14;
  ulong uVar15;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar16;
  code *pcVar17;
  long lVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 in_d3;
  undefined auStack_b0 [8];
  double local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  ulong uVar5;
  
  RVar3 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  uVar5 = CONCAT71((int7)(param_2 >> 8),RVar3.value);
  lVar18 = *(long *)(uVar5 - 8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  AVar12.unknown = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  CVar6 = SwiftUI::Capsule::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(CVar6.unknown + -8) + 0x40));
  puVar16 = AVar12.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar14 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar8 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar14,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar9 = Swift::Actor::get_unownedExecutor();
  UVar10 = UVar9;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar10.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/FilterBrowserView.swift",0x1d,1,0xa9,UVar9.unknown,puVar8);
  }
  if ((param_2 & 1) != 0) {
    pcVar17 = *(code **)(lVar18 + 0x68);
    CVar11.unknown = puVar16;
    (*pcVar17)(puVar16,*(undefined4 *)
                        PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
               ,uVar5);
    CVar11 = SwiftUI::Color::get_accentColor(CVar11);
    uVar21 = 0;
    SwiftUI::StrokeStyle::init
              (&local_a8,0x4000000000000000,0x4024000000000000,CVar11.unknown,0,
               PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_100035b58(puVar16,param_1);
    uVar15 = uVar5;
    (*pcVar17)(AVar12.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_RoundedCornerStyle_circular_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac60
              );
    bVar4 = SwiftUI::RoundedCornerStyle::___infix
                      ((RoundedCornerStyle)(__int8)puVar16,
                       (RoundedCornerStyle)(__int8)AVar12.unknown,(RoundedCornerStyle)(__int8)uVar15
                      );
    (**(code **)(lVar18 + 8))();
    dVar19 = local_a8 * 0.5;
    AVar12 = SwiftUI::Alignment::get_center(AVar12);
    FUN_100035b9c(puVar16);
    SVar13.unknown = &DAT_100fa8010;
    FUN_1000037f0(&DAT_100fa8010,&DAT_100c24fb8);
    puVar1 = (ulong *)(param_1 + *(int *)(SVar13.unknown + 0x44));
    puVar1[2] = uStack_a0;
    puVar1[1] = (ulong)local_a8;
    puVar1[8] = (ulong)AVar12.unknown;
    puVar1[9] = uVar5;
    *puVar1 = (ulong)dVar19 & 0xfffffffffffffffe | (ulong)~(uint)bVar4 & 1;
    puVar1[4] = uStack_90;
    puVar1[3] = local_98;
    puVar1[5] = local_88;
    puVar1[6] = (ulong)CVar11.unknown;
    *(undefined2 *)(puVar1 + 7) = 0x100;
    SVar13 = SwiftUI::Edge::Set::get_all(SVar13);
    uVar20 = 0xc010000000000000;
    uVar5 = local_98;
    SwiftUI::EdgeInsets::init((CGFloat)SVar13.unknown);
    puVar14 = &DAT_100fa8008;
    FUN_1000037f0(&DAT_100fa8008,&DAT_100c24fb0);
    puVar2 = (undefined1 *)(param_1 + *(int *)(puVar14 + 0x24));
    *puVar2 = (char)SVar13.unknown;
    *(undefined8 *)(puVar2 + 8) = uVar20;
    *(ulong *)(puVar2 + 0x10) = uVar5;
    *(undefined8 *)(puVar2 + 0x18) = uVar21;
    *(undefined8 *)(puVar2 + 0x20) = in_d3;
    puVar2[0x28] = 0;
    (**(code **)(*(long *)(puVar14 + -8) + 0x38))(param_1,0,1,puVar14);
    _swift_release(pMVar7);
    return;
  }
  puVar14 = &DAT_100fa8008;
  FUN_1000037f0(&DAT_100fa8008,&DAT_100c24fb0);
  (**(code **)(*(long *)(puVar14 + -8) + 0x38))(param_1,1,1,puVar14);
  _swift_release(pMVar7);
  return;
}



/* Address: 0x100034f84 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::_makeView */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::ViewModifier::_makeView
          (_GraphValue<undefined> modifier,_ViewInputs inputs)

{
  _ViewOutputs _Var1;
  
  _Var1 = _makeView(modifier,inputs);
  return (_ViewOutputs)_Var1.unknown;
}



/* Address: 0x100034f88 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::_makeViewList */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::ViewModifier::_makeViewList
          (_GraphValue<undefined> modifier,_ViewListInputs inputs)

{
  _ViewListOutputs _Var1;
  
  _Var1 = _makeViewList(modifier,inputs);
  return (_ViewListOutputs)_Var1.unknown;
}



/* Address: 0x100034f8c | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::ViewModifier::$_viewListCount */

void (extension_SwiftUI)::SwiftUI::ViewModifier::__viewListCount(_ViewListCountInputs inputs)

{
  __viewListCount(inputs);
  return;
}



/* Address: 0x100034f90 | FUN_100034f90 */

void FUN_100034f90(long param_1,Alignment param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  Alignment AVar4;
  undefined *puVar5;
  undefined1 *unaff_x20;
  
  uVar2 = *unaff_x20;
  AVar4 = SwiftUI::Alignment::get_center(param_2);
  puVar5 = &DAT_100fa7ff0;
  FUN_1000037f0(&DAT_100fa7ff0,&DAT_100c24f98);
  iVar3 = *(int *)(puVar5 + 0x24);
  FUN_100034c80(param_1 + iVar3,uVar2);
  puVar5 = &DAT_100fa7ff8;
  FUN_1000037f0(&DAT_100fa7ff8,&DAT_100c24fa0);
  puVar1 = (undefined8 *)(param_1 + iVar3 + (long)*(int *)(puVar5 + 0x24));
  *puVar1 = AVar4.unknown;
  puVar1[1] = param_3;
  puVar5 = &DAT_100fa8000;
  FUN_1000037f0(&DAT_100fa8000,&DAT_100c24fa8);
                    /* WARNING: Could not recover jumptable at 0x00010003503c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2.unknown,puVar5);
  return;
}



/* Address: 0x100035040 | FUN_100035040 */

void FUN_100035040(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x10);
  return;
}



/* Address: 0x100035050 | FUN_100035050 */

void FUN_100035050(void)

{
  long unaff_x20;
  
  FUN_10003291c(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100035058 | FUN_100035058 */

void FUN_100035058(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7e40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e38;
  FUN_100005c24(&DAT_100fa7e38,&DAT_100c24e48);
  puVar2 = puVar1;
  FUN_1000350d0();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7e40 = puVar3;
  return;
}



/* Address: 0x1000350d0 | FUN_1000350d0 */

void FUN_1000350d0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e50;
  FUN_100005c24(&DAT_100fa7e50,&DAT_100c24e50);
  puVar2 = &DAT_100fa7e58;
  FUN_100016eac(&DAT_100fa7e58,&DAT_100fa7e60,&DAT_100c24e58,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7e48 = puVar3;
  return;
}



/* Address: 0x100035168 | FUN_100035168 */

void FUN_100035168(void)

{
  ScrollViewProxy SVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  SVar1 = SwiftUI::ScrollViewProxy::typeMetadataAccessor();
  lVar2 = *(long *)(SVar1.unknown + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar4 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))(unaff_x20 + uVar3,SVar1.unknown);
  lVar2 = unaff_x20 + (lVar4 + uVar3 + 7 & 0xfffffffffffffff8);
  _swift_release(*(undefined8 *)(lVar2 + 8));
  _swift_release(*(undefined8 *)(lVar2 + 0x18));
  _swift_release(*(undefined8 *)(lVar2 + 0x30));
  if (*(long *)(lVar2 + 0x50) != 0) {
    FUN_100004594(lVar2 + 0x38);
  }
  _swift_release(*(undefined8 *)(lVar2 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x100035200 | FUN_100035200 */

void FUN_100035200(undefined8 param_1,undefined8 param_2)

{
  ScrollViewProxy SVar1;
  ulong uVar2;
  long unaff_x20;
  
  SVar1 = SwiftUI::ScrollViewProxy::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(SVar1.unknown + -8) + 0x50);
  uVar2 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  FUN_100032d70(param_1,param_2,unaff_x20 + uVar2,
                unaff_x20 +
                (*(long *)(*(long *)(SVar1.unknown + -8) + 0x40) + uVar2 + 7 & 0xfffffffffffffff8));
  return;
}



/* Address: 0x100035260 | FUN_100035260 */

void FUN_100035260(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7e78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e30;
  FUN_100005c24(&DAT_100fa7e30,&DAT_100c24e40);
  puVar2 = &DAT_100fa7e68;
  FUN_100016eac(&DAT_100fa7e68,&DAT_100fa7e28,&DAT_100c24e38,
                PTR_SwiftUI__SwiftUI__ScrollView<undefined>_>SwiftUI__View_100eaa5c0);
  local_30 = PTR___protocol_witness_table_for_SwiftUI_AnyView___SwiftUI_View_in_SwiftUI_100eab960;
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa7e78 = puVar3;
  return;
}



/* Address: 0x1000352f8 | FUN_1000352f8 */

void FUN_1000352f8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_18;
  
  if (DAT_100fa7e80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e70;
  FUN_100005c24(&DAT_100fa7e70,&DAT_100c24e60);
  local_18 = PTR___protocol_witness_table_for_Swift_Int___Swift_Equatable_in_Swift_100eac718;
  puVar2 = 
  PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
  ;
  _swift_getWitnessTable
            (PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Equatable>_A____Swift_Equatable_in_Swift_>Swift__Equatable_100eae0a8
             ,puVar1,&local_18);
  DAT_100fa7e80 = puVar2;
  return;
}



/* Address: 0x100035360 | FUN_100035360 */

void FUN_100035360(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100032c1c(param_1,unaff_x20 + 0x10);
  return;
}



/* Address: 0x100035368 | FUN_100035368 */

void FUN_100035368(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7ea8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7e98;
  FUN_100005c24(&DAT_100fa7e98,&DAT_100c24e78);
  puVar2 = &DAT_100fa7eb0;
  FUN_100016eac(&DAT_100fa7eb0,&DAT_100fa7eb8,&DAT_100c24e80,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7ea8 = puVar3;
  return;
}



/* Address: 0x100035400 | FUN_100035400 */

void FUN_100035400(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa7ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c23104;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c23104,&DAT_100eb0008);
  DAT_100fa7ec0 = pTVar1;
  return;
}



/* Address: 0x100035440 | FUN_100035440 */

void FUN_100035440(void)

{
  long unaff_x20;
  
  FUN_100033528(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10003544c | FUN_10003544c */

void FUN_10003544c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fa7ef0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7ee8;
  FUN_100005c24(&DAT_100fa7ee8,&DAT_100c24ea0);
  puVar2 = puVar1;
  FUN_1000354bc();
  puVar3 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_28);
  DAT_100fa7ef0 = puVar3;
  return;
}



/* Address: 0x1000354bc | FUN_1000354bc */

void FUN_1000354bc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7ef8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7f00;
  FUN_100005c24(&DAT_100fa7f00,&DAT_100c24ea8);
  puVar2 = puVar1;
  FUN_100035534();
  puVar3 = puVar2;
  FUN_10003560c();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa7ef8 = puVar4;
  return;
}


