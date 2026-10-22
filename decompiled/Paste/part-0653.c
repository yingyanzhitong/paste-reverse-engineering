/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006eb72c | FUN_1006eb72c */

void FUN_1006eb72c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ec270(&local_68,param_2,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],param_4,param_5)
  ;
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb790 | FUN_1006eb790 */

void FUN_1006eb790(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ebeb0(&local_68,param_2,param_4,param_5,param_6 & 0xffffffffffffff,param_7,param_8);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb7f4 | FUN_1006eb7f4 */

void FUN_1006eb7f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ebeb0(&local_68,param_2,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2),param_4,
                param_5);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb868 | FUN_1006eb868 */

void FUN_1006eb868(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ebfec(&local_68,param_2,param_4,param_5,param_6,param_7,param_8);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb8c8 | FUN_1006eb8c8 */

void FUN_1006eb8c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ebfec(&local_68,param_2,*unaff_x20,unaff_x20[1],unaff_x20[2],param_4,param_5);
  param_1[5] = uStack_40;
  param_1[4] = local_48;
  param_1[7] = uStack_30;
  param_1[6] = local_38;
  *(undefined1 *)(param_1 + 8) = local_28;
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  return;
}



/* Address: 0x1006eb92c | FUN_1006eb92c */

void FUN_1006eb92c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x12;
  long extraout_x13;
  long lVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  String SVar8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char acStack_a8 [8];
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar5 = *(long *)(lVar4 + -8);
  local_c0 = param_5;
  uStack_b8 = param_7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar7 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(param_4 + -8) + 0x40));
  lVar3 = lVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x13 + 0x10))(lVar3,extraout_x12);
  lVar1 = lVar3;
  (**(code **)(lVar5 + 0x30))(lVar3,1,lVar4);
  if ((int)lVar1 == 1) {
    uVar6 = 0x2d746e65746e6f43;
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    local_98 = puVar2;
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar2
                 );
    if ((uVar6 & 1) == 0) {
      SVar8 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar8.str,SVar8.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(puVar2);
    }
    else {
      _swift_release(puVar2);
      local_98 = puVar2;
    }
    acStack_a8[0] = 'N';
    acStack_a8[1] = 'o';
    acStack_a8[2] = ' ';
    acStack_a8[3] = 'C';
    acStack_a8[4] = 'o';
    acStack_a8[5] = 'n';
    acStack_a8[6] = 't';
    acStack_a8[7] = 'e';
    local_b0 = 0xcc;
    local_90 = 0;
    uStack_88 = 0;
    local_70 = 2;
    local_a0 = 0xea0000000000746e;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    (**(code **)(lVar5 + 0x20))(lVar7,lVar3,lVar4);
    (**(code **)(param_6 + 8))(&local_b0,param_2,param_3,local_c0,uStack_b8,lVar4,param_6);
    (**(code **)(lVar5 + 8))(lVar7,lVar4);
    if (unaff_x21 != 0) {
      return;
    }
  }
  param_1[1] = acStack_a8;
  *param_1 = local_b0;
  param_1[2] = local_a0;
  param_1[3] = local_98;
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  *(undefined1 *)(param_1 + 8) = local_70;
  return;
}



/* Address: 0x1006ebb50 | FUN_1006ebb50 */

void FUN_1006ebb50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006eb92c(&local_68,param_2,param_3,param_6,param_4,*(undefined8 *)(param_7 + -8),param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006ebbb8 | FUN_1006ebbb8 */

void FUN_1006ebbb8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  lVar1 = 0;
  FUN_1006ec3d8(0,param_7,param_8);
                    /* WARNING: Could not recover jumptable at 0x0001006ebc10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_7 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar1 + 0x28),param_6,param_7);
  return;
}



/* Address: 0x1006ebc14 | FUN_1006ebc14 */

void FUN_1006ebc14(ulong *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_1f0 [9];
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  undefined1 local_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong local_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  undefined1 local_120;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined1 local_d0;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  
  (**(code **)(*(long *)(param_4 + 0x18) + 8))
            (&local_110,param_2,param_3,param_5,param_6,*(undefined8 *)(param_4 + 0x10));
  if (unaff_x21 == 0) {
    uVar4 = unaff_x20[2];
    uVar5 = local_100;
    uVar6 = local_110;
    uVar7 = uStack_108;
    if (uVar4 != 0) {
      uVar6 = *unaff_x20;
      uVar7 = unaff_x20[1];
      uStack_88 = uStack_108;
      local_90 = local_110;
      local_80 = local_100;
      _swift_bridgeObjectRetain(uVar4);
      FUN_1006bdf10(&local_90);
      uVar5 = uVar4;
    }
    uVar3 = unaff_x20[3];
    uVar4 = uVar3;
    FUN_10085d8f8();
    uVar2 = uVar3;
    FUN_10085d8f8();
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ebe4c);
      (*pcVar1)();
    }
    uVar2 = uVar3;
    FUN_10085d8f8();
    if (((long)uVar4 < 0) || ((long)uVar2 < (long)uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ebe50);
      (*pcVar1)();
    }
    uStack_190 = local_f8;
    if (uVar4 != 0) {
      local_1a8 = uVar3;
      _swift_retain(uVar3);
      uVar4 = local_f8;
      FUN_10085d8f8();
      if (uVar4 == 0) {
        _swift_release(local_f8);
        uStack_190 = uVar3;
      }
      else {
        uVar4 = 0;
        do {
          FUN_10085d980(&local_c8,uVar4,local_f8);
          uVar3 = local_f8;
          FUN_10085d8f8();
          uVar2 = local_1a8;
          if ((long)uVar3 <= (long)uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ebe48);
            (*pcVar1)();
          }
          uVar3 = local_c8;
          FUN_10085d47c(local_c8,uStack_c0,local_b8,uStack_b0,local_1a8);
          if ((uVar3 & 1) == 0) {
            uStack_158 = uStack_c0;
            local_160 = local_c8;
            uStack_148 = uStack_b0;
            local_150 = local_b8;
            uStack_138 = uStack_a0;
            local_140 = local_a8;
            local_130 = local_98;
            FUN_10085d8f8();
            local_1f0[0] = uVar2;
            FUN_1006bd6b8();
            Swift::RangeReplaceableCollection::_insert();
          }
          else {
            FUN_1006ec3e4(&local_c8);
          }
          uVar4 = uVar4 + 1;
          uVar2 = local_f8;
          FUN_10085d8f8();
        } while (uVar4 != uVar2);
        _swift_release(local_f8);
        uStack_190 = local_1a8;
      }
    }
    uStack_180 = uStack_e8;
    local_188 = local_f0;
    uStack_170 = uStack_d8;
    local_178 = uStack_e0;
    local_168 = local_d0;
    uStack_138 = uStack_e8;
    local_140 = local_f0;
    uStack_128 = uStack_d8;
    local_130 = uStack_e0;
    local_120 = local_d0;
    local_1a8 = uVar6;
    uStack_1a0 = uVar7;
    local_198 = uVar5;
    local_160 = uVar6;
    uStack_158 = uVar7;
    local_150 = uVar5;
    uStack_148 = uStack_190;
    FUN_1006be04c(&local_1a8,local_1f0);
    FUN_1006a4e98(&local_160);
    param_1[5] = uStack_180;
    param_1[4] = local_188;
    param_1[7] = uStack_170;
    param_1[6] = local_178;
    *(undefined1 *)(param_1 + 8) = local_168;
    param_1[1] = uStack_1a0;
    *param_1 = local_1a8;
    param_1[3] = uStack_190;
    param_1[2] = local_198;
  }
  return;
}



/* Address: 0x1006ebe50 | FUN_1006ebe50 */

void FUN_1006ebe50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006ebc14(&local_68,param_2,param_3,param_6,param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006ebeb0 | FUN_1006ebeb0 */

void FUN_1006ebeb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  String SVar3;
  
  uVar2 = 0x2d746e65746e6f43;
  uVar1 = 0xd000000000000018;
  FUN_1006eb42c(0xd000000000000018,0x8000000100db0fc0,(int)((ulong)param_4 >> 0x20) - (int)param_4);
  _swift_retain(param_3);
  _swift_retain(uVar1);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar2 & 1) == 0) {
    SVar3 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar3.str,SVar3.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(uVar1);
  param_1[5] = param_4;
  param_1[4] = param_3;
  param_1[7] = 0;
  param_1[6] = param_5 & 0xffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0x4b4f;
  *param_1 = 200;
  param_1[3] = uVar1;
  param_1[2] = &SUB_e200000000000000;
  return;
}



/* Address: 0x1006ebfec | FUN_1006ebfec */

void FUN_1006ebfec(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  ulong uVar2;
  String SVar3;
  undefined8 uVar4;
  
  uVar2 = 0x2d746e65746e6f43;
  _swift_bridgeObjectRetain(param_5);
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10085d78c();
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    SVar3 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar3.str,SVar3.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c,param_8,param_9,uVar4);
  }
  _swift_release(puVar1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  param_1[1] = param_4;
  *param_1 = param_3;
  param_1[3] = puVar1;
  param_1[2] = param_5;
  return;
}



/* Address: 0x1006ec108 | FUN_1006ec108 */

void FUN_1006ec108(undefined8 *param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  String SVar3;
  
  uVar2 = 0x2d746e65746e6f43;
  FUN_100611728();
  FUN_10060cb90();
  uVar1 = 0xd000000000000019;
  FUN_1006eb42c(0xd000000000000019,0x8000000100db0fe0,(int)((ulong)param_4 >> 0x20) - (int)param_4);
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar2 & 1) == 0) {
    SVar3 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar3.str,SVar3.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(uVar1);
  param_1[5] = param_4;
  param_1[4] = param_3;
  param_1[7] = 0;
  param_1[6] = param_2 & 0xffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0x4b4f;
  *param_1 = 200;
  param_1[3] = uVar1;
  param_1[2] = &SUB_e200000000000000;
  return;
}



/* Address: 0x1006ec270 | FUN_1006ec270 */

void FUN_1006ec270(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  undefined8 uVar1;
  ulong uVar2;
  String SVar3;
  
  uVar2 = 0x2d746e65746e6f43;
  FUN_100611728();
  FUN_10060cd7c();
  uVar1 = 0xd000000000000019;
  FUN_1006eb42c(0xd000000000000019,0x8000000100db0fe0,(int)((ulong)param_4 >> 0x20) - (int)param_4);
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar2 & 1) == 0) {
    SVar3 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar3.str,SVar3.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(uVar1);
  param_1[5] = param_4;
  param_1[4] = param_3;
  param_1[7] = 0;
  param_1[6] = param_5 & 0xffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0x4b4f;
  *param_1 = 200;
  param_1[3] = uVar1;
  param_1[2] = &SUB_e200000000000000;
  return;
}



/* Address: 0x1006ec3d8 | FUN_1006ec3d8 */

void FUN_1006ec3d8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ec3e4 | FUN_1006ec3e4 */

undefined8 FUN_1006ec3e4(undefined8 param_1)

{
  FUN_1002aa0fc();
  return param_1;
}



/* Address: 0x1006ec418 | FUN_1006ec418 */

void FUN_1006ec418(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_38 = &DAT_100c72848;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
  }
  return;
}



/* Address: 0x1006ec49c | FUN_1006ec49c */

long * FUN_1006ec49c(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar1 = *(long *)(lVar3 + -8);
  uVar2 = (ulong)*(uint *)(lVar1 + 0x50) & 0xff;
  if (((uint)uVar2 < 8 && (*(uint *)(lVar1 + 0x50) & 0x100000) == 0) &&
      0xffffffffffffffe6 < (-uVar2 - 0x21 | uVar2) - *(long *)(lVar1 + 0x40)) {
    lVar8 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = lVar8;
    param_1[2] = param_2[2];
    puVar4 = (undefined8 *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + 0x1fU & 0xfffffffffffffff8);
    uVar6 = *puVar5;
    *puVar4 = uVar6;
    pcVar7 = *(code **)(lVar1 + 0x10);
    _swift_bridgeObjectRetain();
    _swift_retain(uVar6);
    (*pcVar7)(puVar4 + 1,puVar5 + 1,lVar3);
  }
  else {
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)((uint)uVar2 & 0xf8 ^ 0x1f8) & uVar2 + 0x10));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006ec570 | FUN_1006ec570 */

void FUN_1006ec570(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  puVar3 = (undefined8 *)(param_1 + 0x1fU & 0xfffffffffffffff8);
  _swift_release(*puVar3);
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001006ec5c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))((long)puVar3 + uVar2 + 8 & (uVar2 ^ 0xffffffffffffffff));
  return;
}



/* Address: 0x1006ec5c4 | FUN_1006ec5c4 */

undefined8 * FUN_1006ec5c4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  puVar1 = (undefined8 *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x1fU & 0xfffffffffffffff8);
  uVar4 = *puVar2;
  *puVar1 = uVar4;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar3 = *(long *)(lVar5 + -8);
  uVar6 = (ulong)*(byte *)(lVar3 + 0x50);
  pcVar7 = *(code **)(lVar3 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_retain(uVar4);
  (*pcVar7)(uVar6 + 8 + (long)puVar1 & (uVar6 ^ 0xffffffffffffffff),
            uVar6 + 8 + (long)puVar2 & (uVar6 ^ 0xffffffffffffffff),lVar5);
  return param_1;
}



/* Address: 0x1006ec65c | FUN_1006ec65c */

undefined8 * FUN_1006ec65c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = (undefined8 *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)((long)param_2 + 0x1fU & 0xfffffffffffffff8);
  uVar3 = *puVar4;
  *puVar4 = *puVar5;
  _swift_retain();
  _swift_release(uVar3);
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 0x18))
            (uVar2 + 8 + (long)puVar4 & (uVar2 ^ 0xffffffffffffffff),
             uVar2 + 8 + (long)puVar5 & (uVar2 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006ec70c | FUN_1006ec70c */

undefined8 * FUN_1006ec70c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[2] = param_2[2];
  puVar1 = (undefined8 *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)param_2 + 0x1fU & 0xfffffffffffffff8);
  *puVar1 = *puVar2;
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50);
  (**(code **)(lVar3 + 0x20))
            (uVar4 + 8 + (long)puVar1 & (uVar4 ^ 0xffffffffffffffff),
             uVar4 + 8 + (long)puVar2 & (uVar4 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006ec77c | FUN_1006ec77c */

undefined8 * FUN_1006ec77c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  puVar5 = (undefined8 *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 + 0x1fU & 0xfffffffffffffff8);
  uVar1 = *puVar5;
  *puVar5 = *puVar4;
  _swift_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x28))
            (uVar3 + 8 + (long)puVar5 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 8 + (long)puVar4 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1006ec80c | FUN_1006ec80c */

ulong FUN_1006ec80c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = *(uint *)(lVar7 + 0x54);
  uVar1 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar8 = (ulong)*(byte *)(lVar7 + 0x50);
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1006ec8b4;
  uVar5 = (uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar4 = (uint)uVar5;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar9 = (param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f);
    if (uVar9 < 0xff) {
      if (uVar9 == 0) goto LAB_1006ec8b4;
      goto LAB_1006ec874;
    }
    if (uVar9 < 0xffff) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar5);
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar5);
    }
  }
  else {
LAB_1006ec874:
    uVar9 = (uint)*(byte *)((long)param_1 + uVar5);
  }
  if (uVar9 != 0) {
    uVar2 = 0;
    if (uVar4 < 4) {
      uVar2 = uVar9 - 1 << (ulong)(uVar3 & 0x1f);
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
        uVar5 = (ulong)*param_1;
      }
    }
    return (ulong)(uVar1 + ((uint)uVar5 | uVar2) + 1);
  }
LAB_1006ec8b4:
  puVar6 = (ulong *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
  if (-1 < (int)uVar2) {
    uVar8 = *puVar6;
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    return (ulong)((int)uVar8 + 1);
  }
  uVar8 = (long)puVar6 + uVar8 + 8 & ~uVar8;
                    /* WARNING: Could not recover jumptable at 0x0001006ec8f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 0x30))(uVar8);
  return uVar8;
}



/* Address: 0x1006ec948 | FUN_1006ec948 */

void FUN_1006ec948(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  byte bVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  int iVar11;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar3;
  if (uVar3 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  sVar1 = (uVar9 + 0x20 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar10 = (uint)sVar1;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    bVar6 = 0;
  }
  else if (uVar10 < 4) {
    uVar4 = (param_3 - uVar2) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >> (ulong)(uVar10 << 3 & 0x1f);
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
    if (uVar10 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar11 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar11;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar11;
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
      puVar7 = (ulong *)((long)param_1 + 0x1fU & 0xfffffffffffffff8);
      if ((int)uVar3 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006ecae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))((long)puVar7 + uVar9 + 8 & ~uVar9);
        return;
      }
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        *puVar7 = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}



/* Address: 0x1006ecb44 | FUN_1006ecb44 */

tuple2_conflict3 FUN_1006ecb44(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  tuple2_conflict3 tVar3;
  undefined8 local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  uVar1 = 0xff;
  FUN_1009e1f14();
  puStack_30 = &DAT_100f277d8;
  puVar2 = &DAT_100c721b0;
  local_38 = uVar1;
  local_28 = param_1;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c721b0,&local_38);
  tVar3 = Swift::Array<undefined>::_allocateUninitialized(0,puVar2);
  return tVar3;
}



/* Address: 0x1006ecb9c | FUN_1006ecb9c */

undefined8 FUN_1006ecb9c(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1006ecbd0();
  return unaff_x20;
}



/* Address: 0x1006ecbd0 | FUN_1006ecbd0 */

void FUN_1006ecbd0(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_1006ecc38(0,lVar2,*(undefined8 *)(*unaff_x20 + 0x58));
  Swift::Array<undefined>::init();
  unaff_x20[2] = lVar1;
  FUN_1006e2080(0,lVar2);
  FUN_1006ecb44();
  FUN_10030e034();
  unaff_x20[3] = lVar2;
  return;
}



/* Address: 0x1006ecc38 | FUN_1006ecc38 */

void FUN_1006ecc38(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ecc44 | FUN_1006ecc44 */

void FUN_1006ecc44(void)

{
  FUN_1006ecf90();
  _swift_retain();
  return;
}



/* Address: 0x1006ecc58 | FUN_1006ecc58 */

void FUN_1006ecc58(void)

{
  FUN_1006ed0dc();
  _swift_retain();
  return;
}



/* Address: 0x1006ecc6c | FUN_1006ecc6c */

void FUN_1006ecc6c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006ecc90 | FUN_1006ecc90 */

void FUN_1006ecc90(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006eccbc | FUN_1006eccbc */

void FUN_1006eccbc(undefined8 *param_1,undefined8 param_2)

{
  FUN_1006ecf90();
  *param_1 = param_2;
  _swift_retain();
  return;
}



/* Address: 0x1006ecce4 | FUN_1006ecce4 */

void FUN_1006ecce4(undefined8 *param_1,undefined8 param_2)

{
  FUN_1006ed0dc();
  *param_1 = param_2;
  _swift_retain();
  return;
}



/* Address: 0x1006ecd0c | FUN_1006ecd0c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ecdc8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006ecd0c(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  __int64 _Var10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  undefined8 unaff_x20;
  long lVar15;
  long lVar16;
  long alStack_180 [2];
  undefined8 local_170;
  code *local_168;
  long local_160;
  long local_158;
  undefined8 local_150;
  long local_148;
  long local_140;
  long local_138;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
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
  
  lVar14 = *param_2;
  local_140 = *(long *)(param_6 + -8);
  local_170 = param_1;
  local_150 = param_3;
  local_148 = param_7;
  local_138 = param_6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_140 + 0x40),param_2 + 2);
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_158 = (long)&local_170 + lVar2;
  _swift_beginAccess();
  lVar15 = param_2[2];
  lVar9 = 0;
  FUN_1006ecc38(0,*(undefined8 *)(lVar14 + 0x50),*(undefined8 *)(lVar14 + 0x58));
  _swift_bridgeObjectRetain(lVar15);
  _Var10 = Swift::Array<undefined>::get_endIndex(lVar9,lVar9);
  lVar14 = local_158;
  if (_Var10 != 0) {
    lVar16 = 0;
    local_168 = *(code **)(local_148 + 0x18);
    local_160 = lVar9;
    do {
      lVar13 = lVar15;
      Swift::Array<undefined>::get_subscript(&local_d0,lVar16,lVar15,lVar9);
      uVar4 = local_d0;
      uVar11 = local_150;
      lVar1 = lVar16 + 1;
      if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1006ecf90);
        (*pcVar8)();
      }
      uStack_118 = uStack_c8;
      local_120 = local_d0;
      uStack_108 = uStack_b8;
      local_110 = uStack_c0;
      uStack_f8 = uStack_a8;
      uStack_100 = local_b0;
      uStack_e8 = uStack_98;
      local_f0 = uStack_a0;
      uStack_d8 = uStack_88;
      local_e0 = local_90;
      _swift_bridgeObjectRetain(local_d0);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1006a1c64(uVar4);
      FUN_1006f1c2c(uVar11);
      uVar7 = uStack_d8;
      uVar6 = local_e0;
      puVar12 = &uStack_f8;
      FUN_100004640(puVar12,local_e0);
      uVar5 = uStack_100;
      uVar4 = uStack_108;
      *(long *)((long)alStack_180 + lVar2 + 8) = local_148;
      lVar3 = local_138;
      *(long *)((long)alStack_180 + lVar2) = local_138;
      (*local_168)(lVar14,uVar11,lVar13,lVar9,uVar4,uVar5,puVar12,uVar6,uVar7);
      lVar13 = local_160;
      _swift_bridgeObjectRelease(lVar9);
      _swift_bridgeObjectRelease(uVar11);
      (**(code **)(local_140 + 8))(lVar14,lVar3);
      (**(code **)(*(long *)(lVar13 + -8) + 8))(&local_120,lVar13);
      _Var10 = Swift::Array<undefined>::get_endIndex(&local_120,lVar13);
      lVar16 = lVar16 + 1;
      lVar9 = lVar13;
    } while (lVar1 != _Var10);
  }
  _swift_bridgeObjectRelease(lVar15);
  (**(code **)(local_140 + 0x10))(local_170,unaff_x20,local_138);
  return;
}



/* Address: 0x1006ecf90 | FUN_1006ecf90 */

void FUN_1006ecf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [80];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [48];
  
  lVar4 = *unaff_x20;
  local_a0 = param_7;
  local_98 = param_8;
  FUN_10000cbb0(&local_b8);
  (**(code **)(*(long *)(param_7 + -8) + 0x10))();
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  FUN_1006e1c5c(auStack_108,&local_b8);
  FUN_100004594(&local_b8);
  uVar2 = *(undefined8 *)(lVar4 + 0x50);
  uVar1 = *(undefined8 *)(lVar4 + 0x58);
  local_b8 = param_1;
  uStack_b0 = param_2;
  local_a8 = param_3;
  local_a0 = param_4;
  local_98 = param_5;
  FUN_100076508(auStack_108,auStack_90);
  lVar4 = 0;
  FUN_1006ecc38(0,uVar2,uVar1);
  lVar3 = *(long *)(lVar4 + -8);
  (**(code **)(lVar3 + 0x10))(auStack_108,&local_b8,lVar4);
  _swift_beginAccess(unaff_x20 + 2,auStack_120,0x21,0);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  Swift::Array<undefined>::append(auStack_108,uVar2);
  _swift_endAccess(auStack_120);
  (**(code **)(lVar3 + 8))(&local_b8,lVar4);
  return;
}



/* Address: 0x1006ed0dc | FUN_1006ed0dc */

void FUN_1006ed0dc(void)

{
  FUN_1006e1f74();
  return;
}



/* Address: 0x1006ed104 | FUN_1006ed104 */

void FUN_1006ed104(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x60);
  return;
}



/* Address: 0x1006ed154 | FUN_1006ed154 */

void FUN_1006ed154(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ed160 | FUN_1006ed160 */

void FUN_1006ed160(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  FUN_100004594(param_1 + 5);
  return;
}



/* Address: 0x1006ed198 | FUN_1006ed198 */

undefined8 * FUN_1006ed198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  lVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar4;
  pcVar3 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar3)(param_1 + 5,param_2 + 5,lVar4);
  return param_1;
}



/* Address: 0x1006ed21c | FUN_1006ed21c */

undefined8 * FUN_1006ed21c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Address: 0x1006ed2ac | FUN_1006ed2ac */

void FUN_1006ed2ac(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1006ed2c8 | FUN_1006ed2c8 */

undefined8 * FUN_1006ed2c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  FUN_100004594(param_1 + 5);
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x1006ed33c | FUN_1006ed33c */

int FUN_1006ed33c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1006ed384 | FUN_1006ed384 */

void FUN_1006ed384(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1006ed3d8 | FUN_1006ed3d8 */

undefined8 FUN_1006ed3d8(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[2];
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}



/* Address: 0x1006ed41c | FUN_1006ed41c */

undefined1  [16] FUN_1006ed41c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  String SVar2;
  String SVar3;
  String SVar4;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x20);
  local_40 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_30 = local_40;
  uStack_28 = uStack_38;
  FUN_1006e17d0(&uStack_30,auStack_50);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x20;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 8),SVar4);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x1006ed474 | thunk_FUN_1006ed41c */

void thunk_FUN_1006ed41c(void)

{
  FUN_1006ed41c();
  return;
}



/* Address: 0x1006ed478 | FUN_1006ed478 */

code * FUN_1006ed478(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  
  lVar7 = *unaff_x20;
  lVar5 = unaff_x20[2];
  _swift_retain(lVar5);
  uVar2 = 0x2f;
  FUN_1006f28f4(0x2f,0xe100000000000000);
  uVar3 = uVar2;
  FUN_1006f8240();
  _swift_release(lVar5);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(uVar2);
  uVar6 = *(undefined8 *)(lVar7 + 0x58);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = 0xff;
  FUN_1006e8c6c(0xff,uVar8);
  _swift_getTupleTypeMetadata2(0xff,uVar2,&DAT_100efa4e0,"value path ",0);
  uVar2 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_1006ee4a8(0xff,uVar8,uVar6);
  uVar6 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  puVar1 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar2);
  _swift_getWitnessTable(puVar1,uVar6);
  pcVar4 = FUN_1006ee490;
  (extension_Swift)::Swift::Sequence::_flatMap();
  _swift_bridgeObjectRelease(uVar3);
  return pcVar4;
}



/* Address: 0x1006ed5b8 | FUN_1006ed5b8 */

void FUN_1006ed5b8(undefined8 *param_1,undefined8 *param_2,undefined *param_3,undefined8 param_4)

{
  Dictionary DVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  Keys *__return_storage_ptr__;
  Keys *__return_storage_ptr___00;
  undefined8 uVar8;
  Dictionary DVar9;
  undefined8 uVar10;
  undefined *local_c0 [2];
  undefined *local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar8 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[6];
  local_c0[0] = param_3;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c726b0,local_c0);
  FUN_1006e8654();
  uVar10 = param_2[1];
  DVar9.unknown = (undefined *)*param_2;
  DVar1.unknown = DVar9.unknown;
  Swift::Dictionary::_get_keys(__return_storage_ptr__,DVar9);
  uVar2 = 0;
  local_c0[0] = DVar1.unknown;
  Swift::Dictionary::Keys::typeMetadataAccessor(__return_storage_ptr___00);
  _swift_getWitnessTable(PTR__Swift__Keys_>Swift__Sequence_100eabdd0,uVar2);
  pcVar3 = FUN_1006ed75c;
  (extension_Swift)::Swift::Sequence::_sorted();
  _swift_bridgeObjectRelease(DVar1.unknown);
  uStack_80 = param_2[4];
  local_88 = param_2[3];
  puVar4 = &DAT_100fde038;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = DVar9.unknown;
  uStack_98 = uVar10;
  local_90 = uVar8;
  local_78 = uVar6;
  uStack_70 = uVar5;
  FUN_1000f7830(&DAT_100fde038,&DAT_100c72a20);
  uVar5 = 0;
  FUN_1006ee4a8(0,param_3,param_4);
  uVar6 = uVar5;
  FUN_1006ee988();
  pcVar7 = FUN_1006ee944;
  FUN_100193cd8(FUN_1006ee944,local_c0,puVar4,uVar5,PTR___type_metadata_for_Swift_Never_100eadc38,
                uVar6,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
  ;
  _swift_bridgeObjectRelease(pcVar3);
  *param_1 = pcVar7;
  return;
}



/* Address: 0x1006ed75c | FUN_1006ed75c */

bool FUN_1006ed75c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if ((undefined *)*param_1 != (undefined *)*param_2 ||
      (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    return bVar1;
  }
  return false;
}



/* Address: 0x1006ed7b0 | FUN_1006ed7b0 */

void FUN_1006ed7b0(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain(uVar1);
  FUN_1006ed7f0(0,0xe000000000000000);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1006ed7f0 | FUN_1006ed7f0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006ed8e4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006ed7f0(char *param_1,void *param_2)

{
  undefined1 *puVar1;
  undefined *puVar2;
  ulong uVar3;
  byte bVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  DefaultStringInterpolation DVar10;
  code *pcVar11;
  bool bVar12;
  UUID UVar13;
  undefined8 uVar14;
  char *pcVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  UUID UVar18;
  ArraySlice<undefined> AVar19;
  ArraySlice<undefined> AVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  char *pcVar25;
  DefaultStringInterpolation DVar26;
  __int64 _Var27;
  char *pcVar28;
  String *pSVar29;
  _StringGuts _Var31;
  Range<__int64> RVar32;
  long lVar33;
  long extraout_x8;
  undefined1 *puVar34;
  _StringGuts _Var35;
  Range<__int64> RVar36;
  undefined8 *unaff_x20;
  long unaff_x21;
  void *pvVar37;
  char *pcVar38;
  long lVar39;
  char *pcVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  undefined1 auStack_2b0 [16];
  void *local_240;
  DefaultStringInterpolation local_228;
  void *pvStack_220;
  undefined8 local_218;
  char *local_210;
  String local_208;
  undefined8 local_1f8;
  char *local_1c0;
  void *pvStack_1b8;
  char *local_1b0;
  char *pcStack_1a8;
  long local_1a0;
  long lStack_198;
  long lStack_190;
  long local_188;
  byte local_180;
  undefined1 auStack_178 [24];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  char local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  char local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  char local_80;
  char *local_58;
  void *pvVar30;
  
  pcVar40 = (char *)*unaff_x20;
  UVar13 = Foundation::UUID::typeMetadataAccessor();
  lVar33 = *(long *)(UVar13.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar33 + 0x40));
  lVar39 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar34 = &stack0xfffffffffffffd60 + lVar39;
  _swift_beginAccess(unaff_x20 + 0xb,auStack_178,0,0);
  pcVar38 = (char *)unaff_x20[0xb];
  local_208.str = pcVar38;
  local_1b0 = *(char **)(pcVar40 + 0x50);
  uVar14 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_bridgeObjectRetain(pcVar38);
  pcVar15 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar14);
  pcVar11 = FUN_1006ee7c8;
  (extension_Swift)::Swift::Sequence::_sorted();
  _swift_bridgeObjectRelease(pcVar38);
  puVar16 = (undefined1 *)Swift::Array<undefined>::get_count(pcVar11,pcVar40);
  if ((long)puVar16 < 2) {
    _swift_bridgeObjectRelease(pcVar11);
  }
  else {
    puVar17 = &DAT_00000001;
    do {
      Swift::Array<undefined>::get_subscript(&local_228,puVar17,pcVar11,pcVar40);
      DVar10.unknown = local_228.unknown;
      pcStack_1a8 = *(char **)(local_228.unknown + 0x28);
      local_1b0 = *(char **)(local_228.unknown + 0x20);
      lStack_198 = *(long *)(local_228.unknown + 0x38);
      local_1a0 = *(long *)(local_228.unknown + 0x30);
      local_188 = *(long *)(local_228.unknown + 0x48);
      lStack_190 = *(long *)(local_228.unknown + 0x40);
      local_180 = local_228.unknown[0x50];
      pvStack_1b8 = *(void **)(local_228.unknown + 0x18);
      local_1c0 = *(char **)(local_228.unknown + 0x10);
      FUN_1006ee7e4(&local_1c0,&local_208);
      _swift_release(DVar10.unknown);
      pcVar38 = pcStack_1a8;
      pcVar15 = local_1b0;
      SVar8.bridgeObject = pvStack_1b8;
      SVar8.str = local_1c0;
      SVar7.bridgeObject = pvStack_1b8;
      SVar7.str = local_1c0;
      SVar6.bridgeObject = pvStack_1b8;
      SVar6.str = local_1c0;
      SVar5.bridgeObject = pvStack_1b8;
      SVar5.str = local_1c0;
      SVar41.bridgeObject = pvStack_1b8;
      SVar41.str = local_1c0;
      UVar18.unknown = puVar17;
      if (local_180 < 3) {
        if (local_180 == 0) {
          SVar41 = Swift::String::__fromSubstring(SVar6);
          FUN_1006ee910(&local_1c0);
        }
        else {
          if (local_180 != 1) {
            _swift_bridgeObjectRelease();
            UVar18 = Foundation::UUID::init();
            SVar41 = Foundation::UUID::get_uuidString(UVar18);
            (**(code **)(lVar33 + 8))(puVar34,UVar13.unknown);
            pcVar25 = pcVar38;
            local_208 = SVar41;
            SVar41 = Swift::String::__fromSubstring(SVar7);
            SVar43.bridgeObject = SVar41.bridgeObject;
            SVar43.str = pcVar38;
            SVar52.bridgeObject = pcVar25;
            SVar52.str = pcVar15;
            Swift::String::append(SVar41,SVar52);
            _swift_bridgeObjectRelease(pcVar38);
            goto LAB_1006edac4;
          }
          FUN_1006ee910(&local_1c0);
LAB_1006edbc8:
          UVar18 = Foundation::UUID::init();
          SVar41 = Foundation::UUID::get_uuidString(UVar18);
          (**(code **)(lVar33 + 8))(puVar34,UVar13.unknown);
        }
      }
      else if (local_180 < 5) {
        if (local_180 == 3) {
          _swift_bridgeObjectRelease();
          pcVar25 = pcVar38;
          SVar41 = Swift::String::__fromSubstring(SVar41);
          _swift_bridgeObjectRelease(pcVar38);
          local_208 = SVar41;
          goto LAB_1006ed9f0;
        }
        UVar18 = Foundation::UUID::init();
        SVar41 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar33 + 8))(puVar34,UVar13.unknown);
        local_208 = SVar41;
        SVar41 = Swift::String::__fromSubstring(SVar8);
        SVar53.bridgeObject = pcVar38;
        SVar53.str = pcVar15;
        Swift::String::append(SVar41,SVar53);
        _swift_bridgeObjectRelease(SVar41.bridgeObject);
        FUN_1006ee910(&local_1c0);
        SVar41 = local_208;
      }
      else if (local_180 == 5) {
        pcVar25 = pcStack_1a8;
        SVar41 = Swift::String::__fromSubstring(SVar5);
        FUN_1006ee910(&local_1c0);
        local_208 = SVar41;
LAB_1006ed9f0:
        SVar42.bridgeObject = (void *)0xe100000000000000;
        SVar42.str = (char *)0x2f;
        SVar50.bridgeObject = pcVar25;
        SVar50.str = pcVar15;
        Swift::String::append(SVar42,SVar50);
        UVar18 = Foundation::UUID::init();
        SVar43 = Foundation::UUID::get_uuidString(UVar18);
        (**(code **)(lVar33 + 8))(puVar34,UVar13.unknown);
        SVar51.bridgeObject = pcVar25;
        SVar51.str = pcVar15;
        Swift::String::append(SVar43,SVar51);
LAB_1006edac4:
        _swift_bridgeObjectRelease(SVar43.bridgeObject);
        SVar41 = local_208;
      }
      else {
        if ((((local_1b0 == (char *)0x0 && pvStack_1b8 == (void *)0x0) &&
             (local_1c0 == (char *)0x0 && local_188 == 0)) &&
            ((lStack_190 == 0 && lStack_198 == 0) && local_1a0 == 0)) && pcStack_1a8 == (char *)0x0)
        goto LAB_1006edbc8;
        SVar41 = (String)(ZEXT816(0xe000000000000000) << 0x40);
        if ((local_1c0 == &DAT_00000001) &&
           (SVar41 = (String)(ZEXT816(0xe000000000000000) << 0x40),
           (((local_1b0 == (char *)0x0 && pvStack_1b8 == (void *)0x0) && local_188 == 0) &&
           ((lStack_190 == 0 && lStack_198 == 0) && local_1a0 == 0)) && pcStack_1a8 == (char *)0x0))
        {
          UVar18 = Foundation::UUID::init();
          SVar41 = Foundation::UUID::get_uuidString(UVar18);
          (**(code **)(lVar33 + 8))(puVar34,UVar13.unknown);
        }
      }
      local_240 = SVar41.bridgeObject;
      local_58 = SVar41.str;
      pcVar38 = pcVar40;
      AVar19 = Swift::Array<undefined>::get_subscript(UVar18.unknown,puVar17,pcVar11);
      AVar20 = AVar19;
      _swift_unknownObjectRetain();
      puVar21 = (undefined1 *)Swift::ArraySlice::get_startIndex((ArraySlice)AVar20.unknown);
      _swift_unknownObjectRelease(AVar19.unknown);
      pcVar15 = pcVar38;
      puVar22 = (undefined1 *)Swift::ArraySlice::get_endIndex((ArraySlice)AVar19.unknown);
      if (puVar21 != puVar22) {
        puVar2 = (undefined *)((ulong)local_58 & 0xffffffffffff);
        if (((ulong)local_240 & 0x2000000000000000) != 0) {
          puVar2 = (undefined *)((ulong)local_240 >> 0x38 & 0xf);
        }
        do {
          Swift::ArraySlice::get_subscript((__int64)puVar21,(ArraySlice)AVar19.unknown);
          puVar1 = puVar21 + 1;
          if (SCARRY8((long)puVar21,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1006ee0e8);
            (*pcVar11)();
          }
          pcVar15 = local_208.str;
          uVar23 = *(ulong *)(local_208.str + 0x10);
          uVar3 = *(ulong *)(local_208.str + 0x18);
          _Var31.unknown = *(undefined **)(local_208.str + 0x20);
          RVar32.unknown = *(undefined **)(local_208.str + 0x28);
          SVar9.bridgeObject = RVar32.unknown;
          SVar9.str = _Var31.unknown;
          bVar4 = local_208.str[0x50];
          if (bVar4 < 4) {
            if (1 < bVar4) {
              if (bVar4 != 2) goto LAB_1006edd48;
              goto LAB_1006edca8;
            }
            if (bVar4 != 0) goto LAB_1006eddfc;
            _Var35.unknown = (undefined *)(uVar23 >> 0x10);
            RVar36.unknown = (undefined *)(uVar3 >> 0x10);
            if ((SVar41 == SVar9 && _Var35.unknown == (undefined *)0x0) && RVar36.unknown == puVar2)
            goto LAB_1006eddfc;
            auStack_2b0[lVar39] = 0;
            bVar12 = Swift::_stringCompareInternal
                               (_Var31,RVar32,_Var35,RVar36,
                                (_StringComparisonResult)(__int8)SVar41.str);
            _Var31.unknown = _Var35.unknown;
            RVar32.unknown = RVar36.unknown;
            if (bVar12) goto LAB_1006eddfc;
          }
          else {
            if (bVar4 == 4) {
LAB_1006edca8:
              FUN_1006f74b8();
            }
            else {
              if (bVar4 != 5) {
                if (((((_Var31.unknown == (undefined *)0x0 && uVar3 == 0) &&
                      (uVar23 == 0 && RVar32.unknown == (undefined *)0x0)) &&
                     ((*(long *)(local_208.str + 0x48) == 0 && *(long *)(local_208.str + 0x40) == 0)
                     && *(long *)(local_208.str + 0x38) == 0)) &&
                     *(long *)(local_208.str + 0x30) == 0) ||
                   (uVar23 == 1 &&
                    ((((_Var31.unknown == (undefined *)0x0 && uVar3 == 0) &&
                      RVar32.unknown == (undefined *)0x0) &&
                     ((*(long *)(local_208.str + 0x48) == 0 && *(long *)(local_208.str + 0x40) == 0)
                     && *(long *)(local_208.str + 0x38) == 0)) &&
                    *(long *)(local_208.str + 0x30) == 0))) goto LAB_1006eddfc;
                goto LAB_1006edcb8;
              }
LAB_1006edd48:
              FUN_1006f72fc();
            }
            if ((uVar23 & 1) != 0) {
LAB_1006eddfc:
              _swift_bridgeObjectRelease(local_240);
              local_228.unknown = param_1;
              pvStack_220 = param_2;
              _swift_bridgeObjectRetain(param_2);
              SVar44.bridgeObject = (void *)0xe100000000000000;
              SVar44.str = (char *)0x2f;
              SVar54.bridgeObject = RVar32.unknown;
              SVar54.str = _Var31.unknown;
              Swift::String::append(SVar44,SVar54);
              Swift::Array<undefined>::get_subscript(&local_210,puVar17,pcVar11);
              _swift_bridgeObjectRelease(pcVar11);
              uStack_a8 = *(undefined8 *)(local_210 + 0x28);
              local_b0 = *(undefined8 *)(local_210 + 0x20);
              uStack_98 = *(undefined8 *)(local_210 + 0x38);
              local_a0 = *(undefined8 *)(local_210 + 0x30);
              uStack_88 = *(undefined8 *)(local_210 + 0x48);
              uStack_90 = *(undefined8 *)(local_210 + 0x40);
              local_80 = local_210[0x50];
              uStack_b8 = *(undefined8 *)(local_210 + 0x18);
              local_c0 = *(undefined8 *)(local_210 + 0x10);
              pSVar29 = &local_208;
              FUN_1006ee820(&local_c0);
              _swift_release();
              FUN_1006f0a20();
              SVar45.bridgeObject = pSVar29;
              SVar45.str = local_210;
              SVar55.bridgeObject = RVar32.unknown;
              SVar55.str = pcVar40;
              Swift::String::append(SVar45,SVar55);
              _swift_bridgeObjectRelease(pSVar29);
              puVar24 = &local_c0;
              FUN_1006ee85c();
              DVar10.unknown = local_228.unknown;
              FUN_1006ee890();
              pcVar40 = "";
              (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar10);
              pvVar30 = local_208.bridgeObject;
              pcVar38 = local_208.str;
              local_228.unknown = param_1;
              pvStack_220 = param_2;
              _swift_bridgeObjectRetain(param_2);
              SVar46.bridgeObject = (void *)0xe100000000000000;
              SVar46.str = (char *)0x2f;
              pvVar37 = (void *)0xe100000000000000;
              pcVar25 = (char *)0x2f;
              SVar56.bridgeObject = puVar24;
              SVar56.str = pcVar40;
              Swift::String::append(SVar46,SVar56);
              uStack_e8 = *(undefined8 *)(pcVar15 + 0x38);
              local_f0 = *(undefined8 *)(pcVar15 + 0x30);
              uStack_d8 = *(undefined8 *)(pcVar15 + 0x48);
              uStack_e0 = *(undefined8 *)(pcVar15 + 0x40);
              local_d0 = pcVar15[0x50];
              uStack_108 = *(undefined8 *)(pcVar15 + 0x18);
              local_110 = *(undefined8 *)(pcVar15 + 0x10);
              uStack_f8 = *(undefined8 *)(pcVar15 + 0x28);
              uStack_100 = *(undefined8 *)(pcVar15 + 0x20);
              FUN_1006f0a20();
              SVar47.bridgeObject = pvVar37;
              SVar47.str = pcVar25;
              SVar57.bridgeObject = puVar24;
              SVar57.str = pcVar40;
              Swift::String::append(SVar47,SVar57);
              _swift_bridgeObjectRelease(pvVar37);
              DVar26.unknown = local_228.unknown;
              (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(local_228);
              pvVar37 = pvStack_220;
              DVar10.unknown = local_228.unknown;
              FUN_1006ee8d0();
              _swift_allocError(&DAT_100efa130,DVar26.unknown,0,0);
              *(void **)((long)DVar26.unknown + 8) = pvVar30;
              *(char **)DVar26.unknown = pcVar38;
              *(undefined8 *)((long)DVar26.unknown + 0x10) = local_1f8;
              *(void **)((long)DVar26.unknown + 0x20) = pvVar37;
              *(undefined **)((long)DVar26.unknown + 0x18) = DVar10.unknown;
              *(undefined8 *)((long)DVar26.unknown + 0x28) = local_218;
              _swift_willThrow();
              _swift_unknownObjectRelease(AVar19.unknown);
              _swift_release(pcVar15);
              return;
            }
          }
LAB_1006edcb8:
          _swift_release(pcVar15);
          pcVar15 = pcVar38;
          puVar22 = (undefined1 *)Swift::ArraySlice::get_endIndex((ArraySlice)AVar19.unknown);
          puVar21 = puVar21 + 1;
        } while (puVar1 != puVar22);
      }
      puVar17 = puVar17 + 1;
      _swift_unknownObjectRelease(AVar19.unknown);
      _swift_bridgeObjectRelease(local_240);
    } while (puVar17 != puVar16);
    _swift_bridgeObjectRelease(pcVar11);
    puVar16 = puVar22;
  }
  pvVar37 = (void *)unaff_x20[0xb];
  _swift_bridgeObjectRetain(pvVar37);
  _Var27 = Swift::Array<undefined>::get_endIndex(puVar16,pcVar40);
  if (_Var27 != 0) {
    lVar39 = 0;
    do {
      pcVar25 = pcVar40;
      Swift::Array<undefined>::get_subscript(&local_1c0,lVar39,pvVar37);
      pcVar38 = local_1c0;
      lVar33 = lVar39 + 1;
      if (SCARRY8(lVar39,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x1006ee0ec);
        (*pcVar11)();
      }
      local_1c0 = param_1;
      pvStack_1b8 = param_2;
      _swift_bridgeObjectRetain();
      SVar48.bridgeObject = (void *)0xe100000000000000;
      SVar48.str = (char *)0x2f;
      pvVar30 = (void *)0xe100000000000000;
      pcVar28 = (char *)0x2f;
      SVar58.bridgeObject = pcVar15;
      SVar58.str = pcVar25;
      Swift::String::append(SVar48,SVar58);
      uStack_138 = *(undefined8 *)(pcVar38 + 0x38);
      local_140 = *(undefined8 *)(pcVar38 + 0x30);
      uStack_128 = *(undefined8 *)(pcVar38 + 0x48);
      uStack_130 = *(undefined8 *)(pcVar38 + 0x40);
      local_120 = pcVar38[0x50];
      uStack_158 = *(undefined8 *)(pcVar38 + 0x18);
      local_160 = *(undefined8 *)(pcVar38 + 0x10);
      uStack_148 = *(undefined8 *)(pcVar38 + 0x28);
      uStack_150 = *(undefined8 *)(pcVar38 + 0x20);
      FUN_1006f0a20();
      SVar49.bridgeObject = pvVar30;
      SVar49.str = pcVar28;
      SVar59.bridgeObject = pcVar15;
      SVar59.str = pcVar25;
      Swift::String::append(SVar49,SVar59);
      _swift_bridgeObjectRelease(pvVar30);
      pvVar30 = pvStack_1b8;
      FUN_1006ed7f0(local_1c0,pvStack_1b8);
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(pvVar37);
        _swift_release(pcVar38);
        pvVar37 = pvVar30;
        break;
      }
      _swift_release(pcVar38);
      _swift_bridgeObjectRelease(pvVar30);
      _Var27 = Swift::Array<undefined>::get_endIndex(pcVar28,pcVar40);
      lVar39 = lVar39 + 1;
    } while (lVar33 != _Var27);
  }
  _swift_bridgeObjectRelease(pvVar37);
  return;
}



/* Address: 0x1006ee0ec | FUN_1006ee0ec */

bool FUN_1006ee0ec(long *param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar4 = *param_1;
  lVar2 = *param_2;
  bVar1 = *(byte *)(lVar4 + 0x50);
  uVar7 = (ulong)bVar1;
  uVar6 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar6 != 0) {
      uVar7 = 0xfffffffffffffffd;
    }
    uVar5 = 0xffffffffffffffff;
    if (1 < uVar6 - 2) {
      uVar5 = uVar7;
    }
  }
  else if (uVar6 - 4 < 2) {
    uVar5 = 0xfffffffffffffffe;
  }
  else {
    uVar7 = 0xfffffffffffffffb;
    if (((((*(long *)(lVar4 + 0x40) != 0 || *(long *)(lVar4 + 0x48) != 0) ||
          *(long *)(lVar4 + 0x38) != 0) ||
         ((*(long *)(lVar4 + 0x30) != 0 || *(long *)(lVar4 + 0x28) != 0) ||
         *(long *)(lVar4 + 0x20) != 0)) || *(long *)(lVar4 + 0x18) != 0) ||
        *(long *)(lVar4 + 0x10) != 1) {
      uVar7 = 0;
    }
    uVar5 = 0xfffffffffffffffc;
    if ((((*(long *)(lVar4 + 0x40) != 0 || *(long *)(lVar4 + 0x48) != 0) ||
         (*(long *)(lVar4 + 0x10) != 0 || *(long *)(lVar4 + 0x38) != 0)) ||
        ((*(long *)(lVar4 + 0x30) != 0 || *(long *)(lVar4 + 0x28) != 0) ||
        *(long *)(lVar4 + 0x20) != 0)) || *(long *)(lVar4 + 0x18) != 0) {
      uVar5 = uVar7;
    }
  }
  bVar1 = *(byte *)(lVar2 + 0x50);
  uVar7 = (ulong)bVar1;
  uVar6 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar6 != 0) {
      uVar7 = 0xfffffffffffffffd;
    }
    uVar3 = 0xffffffffffffffff;
    if (1 < uVar6 - 2) {
      uVar3 = uVar7;
    }
  }
  else if (uVar6 - 4 < 2) {
    uVar3 = 0xfffffffffffffffe;
  }
  else {
    uVar7 = 0xfffffffffffffffb;
    if (((((*(long *)(lVar2 + 0x40) != 0 || *(long *)(lVar2 + 0x48) != 0) ||
          *(long *)(lVar2 + 0x38) != 0) ||
         ((*(long *)(lVar2 + 0x30) != 0 || *(long *)(lVar2 + 0x28) != 0) ||
         *(long *)(lVar2 + 0x20) != 0)) || *(long *)(lVar2 + 0x18) != 0) ||
        *(long *)(lVar2 + 0x10) != 1) {
      uVar7 = 0;
    }
    uVar3 = 0xfffffffffffffffc;
    if ((((*(long *)(lVar2 + 0x40) != 0 || *(long *)(lVar2 + 0x48) != 0) ||
         (*(long *)(lVar2 + 0x10) != 0 || *(long *)(lVar2 + 0x38) != 0)) ||
        ((*(long *)(lVar2 + 0x30) != 0 || *(long *)(lVar2 + 0x28) != 0) ||
        *(long *)(lVar2 + 0x20) != 0)) || *(long *)(lVar2 + 0x18) != 0) {
      uVar3 = uVar7;
    }
  }
  return (long)uVar3 < (long)uVar5;
}



/* Address: 0x1006ee228 | FUN_1006ee228 */

undefined1  [16] FUN_1006ee228(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  SVar3 = *(String *)(unaff_x20 + 0x20);
  SVar1 = *(String *)(unaff_x20 + 8);
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  SVar3.bridgeObject = (void *)0xeb00000000207365;
  SVar3.str = (char *)0x6469727265766f20;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar1,SVar6);
  auVar2._8_8_ = &DAT_e600000000000000;
  auVar2._0_8_ = 0x206574756f52;
  return auVar2;
}



/* Address: 0x1006ee2d8 | thunk_FUN_1006ee3d0 */

void thunk_FUN_1006ee3d0(void)

{
  FUN_1006ee3d0();
  return;
}



/* Address: 0x1006ee2dc | FUN_1006ee2dc */

undefined1  [16] FUN_1006ee2dc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  SVar1 = *(String *)(unaff_x20 + 8);
  SVar3 = *(String *)(unaff_x20 + 0x20);
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  SVar3.bridgeObject = (void *)0xeb00000000207365;
  SVar3.str = (char *)0x6469727265766f20;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar1,SVar6);
  auVar2._8_8_ = &DAT_e600000000000000;
  auVar2._0_8_ = 0x206574756f52;
  return auVar2;
}



/* Address: 0x1006ee38c | FUN_1006ee38c */

uint FUN_1006ee38c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  local_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_1006ee3d0(&local_70,&uStack_40);
  return uVar1 & 1;
}



/* Address: 0x1006ee3d0 | FUN_1006ee3d0 */

undefined8 FUN_1006ee3d0(ulong *param_1,undefined8 *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  bool bVar3;
  ulong uVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  
  uVar4 = *param_1;
  _Var1.unknown = (undefined *)param_1[1];
  _Var6.unknown = (undefined *)param_1[2];
  puVar2 = (undefined *)param_2[1];
  puVar5 = (undefined *)param_2[2];
  FUN_1006f0150(uVar4,*param_2);
  if (((uVar4 & 1) != 0) &&
     ((_Var1.unknown == puVar2 && _Var6.unknown == puVar5 ||
      (bVar3 = Swift::_stringCompareWithSmolCheck
                         (_Var1,_Var6,(_StringComparisonResult)(__int8)puVar2), bVar3)))) {
    uVar4 = param_1[3];
    _Var1.unknown = (undefined *)param_1[4];
    _Var6.unknown = (undefined *)param_1[5];
    puVar2 = (undefined *)param_2[4];
    puVar5 = (undefined *)param_2[5];
    FUN_1006f0150(uVar4,param_2[3]);
    if (((uVar4 & 1) != 0) &&
       (((_Var1.unknown == puVar2 && (_Var6.unknown == puVar5)) ||
        (bVar3 = Swift::_stringCompareWithSmolCheck
                           (_Var1,_Var6,(_StringComparisonResult)(__int8)puVar2), bVar3)))) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x1006ee490 | FUN_1006ee490 */

void FUN_1006ee490(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006ed5b8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1006ee4a8 | FUN_1006ee4a8 */

void FUN_1006ee4a8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006ee4b4 | FUN_1006ee4b4 */

void FUN_1006ee4b4(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[4]);
  return;
}


