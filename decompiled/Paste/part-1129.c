/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bbe2b4 | FUN_100bbe2b4 */

undefined8 FUN_100bbe2b4(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  if (uVar6 == *(ulong *)(param_2 + 0x10)) {
    if ((uVar6 != 0) && (param_1 != param_2)) {
      if ((*(undefined **)(param_1 + 0x20) != *(undefined **)(param_2 + 0x20) ||
           *(undefined **)(param_1 + 0x28) != *(undefined **)(param_2 + 0x28)) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)*(undefined **)(param_1 + 0x20),
                             (_StringGuts)*(undefined **)(param_1 + 0x28),
                             (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x20)),
         !bVar2)) goto LAB_100bbe360;
      if (uVar6 != 1) {
        puVar5 = (undefined8 *)(param_1 + 0x38);
        puVar4 = (undefined8 *)(param_2 + 0x38);
        uVar7 = 1;
        do {
          if (uVar6 <= uVar7) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbe378);
            (*pcVar1)();
          }
          if (((undefined *)puVar5[-1] != (undefined *)puVar4[-1] ||
               (undefined *)*puVar5 != (undefined *)*puVar4) &&
             (bVar2 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)puVar5[-1],(undefined *)*puVar5,
                                 (_StringComparisonResult)(__int8)(undefined *)puVar4[-1]), !bVar2))
          goto LAB_100bbe360;
          uVar7 = uVar7 + 1;
          puVar5 = puVar5 + 2;
          puVar4 = puVar4 + 2;
        } while (uVar6 != uVar7);
      }
    }
    uVar3 = 1;
  }
  else {
LAB_100bbe360:
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x100bbe378 | FUN_100bbe378 */

byte FUN_100bbe378(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 == *(ulong *)(param_2 + 0x10)) {
    if ((uVar4 == 0) || (param_1 == param_2)) {
      bVar3 = 1;
      goto LAB_100bbe3b0;
    }
    if (*(char *)(param_1 + 0x20) == *(char *)(param_2 + 0x20)) {
      bVar3 = 1;
      if (uVar4 != 1) {
        uVar5 = 0;
        do {
          if (uVar4 <= uVar5 + 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbe404);
            (*pcVar1)();
          }
          bVar3 = *(byte *)(param_1 + 0x21 + uVar5) ^ *(byte *)(param_2 + 0x21 + uVar5);
        } while (((bVar3 & 1) == 0) && (bVar2 = uVar4 - 2 != uVar5, uVar5 = uVar5 + 1, bVar2));
        bVar3 = bVar3 ^ 1;
      }
      goto LAB_100bbe3b0;
    }
  }
  bVar3 = 0;
LAB_100bbe3b0:
  return bVar3 & 1;
}



/* Address: 0x100bbe404 | FUN_100bbe404 */

bool FUN_100bbe404(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != *(ulong *)(param_2 + 0x10)) {
    return false;
  }
  if ((uVar4 != 0) && (param_1 != param_2)) {
    if (*(long *)(param_1 + 0x20) != *(long *)(param_2 + 0x20)) {
      return false;
    }
    if (uVar4 != 1) {
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5 + 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbe488);
          (*pcVar1)();
        }
        bVar2 = *(long *)(param_1 + 0x28 + uVar5 * 8) == *(long *)(param_2 + 0x28 + uVar5 * 8);
        bVar3 = uVar4 - 2 != uVar5;
        uVar5 = uVar5 + 1;
      } while (bVar2 && bVar3);
      return bVar2;
    }
  }
  return true;
}



/* Address: 0x100bbe488 | FUN_100bbe488 */

bool FUN_100bbe488(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  if (uVar4 != *(ulong *)(param_2 + 0x10)) {
    return false;
  }
  if ((uVar4 != 0) && (param_1 != param_2)) {
    if (*(double *)(param_1 + 0x20) != *(double *)(param_2 + 0x20)) {
      return false;
    }
    if (uVar4 != 1) {
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5 + 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100bbe50c);
          (*pcVar1)();
        }
        bVar2 = *(double *)(param_1 + 0x28 + uVar5 * 8) == *(double *)(param_2 + 0x28 + uVar5 * 8);
        bVar3 = uVar4 - 2 != uVar5;
        uVar5 = uVar5 + 1;
      } while (bVar2 && bVar3);
      return bVar2;
    }
  }
  return true;
}



/* Address: 0x100bbe50c | FUN_100bbe50c */

String FUN_100bbe50c(Hasher param_1,Hasher param_2,char *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  __int64 _Var4;
  Hasher HVar5;
  Hasher HVar6;
  uint uVar7;
  char *pcVar8;
  Hasher unaff_x20;
  undefined8 *puVar9;
  char *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 unaff_x30;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  
  puVar2 = &stack0xffffffffffffffd0;
  puVar3 = &stack0xffffffffffffffd0;
  pcVar8 = *(char **)unaff_x20.unknown;
  HVar5.unknown = param_2.unknown;
  HVar6.unknown = param_1.unknown;
  switch(*(undefined1 *)((long)unaff_x20.unknown + 0x10)) {
  default:
    unaff_x22 = *(char **)((long)unaff_x20.unknown + 8);
  case 0x24:
  case 0x28:
  case 0x32:
  case 0x72:
  case 0x8c:
  case 0x9a:
  case 0xda:
    param_1.unknown = (undefined *)0x0;
    FUN_100bbef7c();
    goto switchD_100bbe53c_caseD_1a;
  case 1:
    FUN_100bbef7c(1);
  case 0x5c:
    uVar7 = (uint)pcVar8 & 1;
    param_1.unknown = (undefined *)(ulong)uVar7;
    Swift::Hasher::_combine((__uint8)uVar7,param_2);
LAB_100bbe5d8:
    FUN_100b56e60();
    SVar13.bridgeObject = param_2.unknown;
    SVar13.str = param_1.unknown;
    return SVar13;
  case 2:
  case 0xd:
  case 0xe8:
    FUN_100bbef7c(2);
    Swift::Hasher::_combine((__uint64)pcVar8,param_2);
    param_1.unknown = pcVar8;
  case 0x11:
    goto LAB_100bbe5d8;
  case 3:
    FUN_100bbef7c(3);
    param_1.unknown = (char *)0x0;
    if (((ulong)pcVar8 & 0x7fffffffffffffff) != 0) {
      param_1.unknown = pcVar8;
    }
  case 0x2d:
  case 0x5d:
  case 0x65:
  case 0x6d:
  case 0xd5:
    Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
    goto switchD_100bbe53c_caseD_95;
  case 4:
  case 8:
    param_1.unknown = (char *)0x4;
  case 0xc:
    FUN_100bbef7c(param_1.unknown);
    goto switchD_100bbe53c_caseD_54;
  case 5:
    param_1.unknown = (char *)0x5;
  case 0x16:
  case 0x2a:
  case 0x3e:
  case 0x52:
  case 0x5a:
  case 0x62:
  case 0x6a:
  case 0x7e:
  case 0x92:
  case 0xa6:
  case 0xba:
  case 0xc2:
  case 0xca:
  case 0xd2:
  case 0xe6:
  case 0xfa:
    FUN_100bbef7c(param_1.unknown);
switchD_100bbe53c_caseD_19:
    FUN_100b7ca98();
    FUN_1005ac830();
    SVar14.bridgeObject = param_2.unknown;
    SVar14.str = param_1.unknown;
    return SVar14;
  case 6:
    pcVar8 = (char *)0x6;
    FUN_100bbef7c(6);
    FUN_100b7ca98();
    switchD_100bbe53c::caseD_39();
    SVar15.bridgeObject = param_2.unknown;
    SVar15.str = pcVar8;
    return SVar15;
  case 7:
  case 0x10:
    param_1.unknown = (char *)0x7;
  case 0x6c:
    FUN_100bbef7c(param_1.unknown);
    FUN_100b7ca98();
switchD_100bbe53c_caseD_64:
    FUN_100bbe858();
    SVar12.bridgeObject = param_2.unknown;
    SVar12.str = param_1.unknown;
    return SVar12;
  case 10:
    goto switchD_100bbe53c_caseD_a;
  case 0xb:
    goto switchD_100bbe53c_caseD_b;
  case 0xf:
    goto switchD_100bbe53c_caseD_f;
  case 0x14:
    goto switchD_100bbe53c_caseD_14;
  case 0x15:
  case 0x29:
    goto switchD_100bbe53c_caseD_15;
  case 0x18:
  case 0xa1:
  case 0xe1:
    goto switchD_100bbe53c_caseD_18;
  case 0x19:
  case 0x41:
  case 0x81:
  case 0xa9:
  case 0xe9:
    goto switchD_100bbe53c_caseD_19;
  case 0x1a:
  case 0x22:
  case 0x42:
  case 0x4a:
  case 0x82:
  case 0x8a:
  case 0xaa:
  case 0xb2:
  case 0xea:
  case 0xf2:
    goto switchD_100bbe53c_caseD_1a;
  case 0x2c:
  case 0xa8:
    FUN_100b6730c(param_1.unknown + 0x18);
    _swift_initStaticObject();
    _Var4 = Swift::_findStringSwitchCase();
    _swift_bridgeObjectRelease(pcVar8);
    uVar7 = 1;
    if (_Var4 != 1) {
      uVar7 = 2;
    }
    uVar1 = 0;
    if (_Var4 != 0) {
      uVar1 = uVar7;
    }
    param_1.unknown = (undefined *)(ulong)uVar1;
    param_2.unknown = unaff_x20.unknown;
  case 0xe0:
    SVar17.bridgeObject = param_2.unknown;
    SVar17.str = param_1.unknown;
    return SVar17;
  case 0x2e:
  case 0x5e:
  case 0x66:
  case 0x6e:
  case 0x96:
  case 0xd6:
    puVar3 = &stack0xffffffffffffff90;
  case 0x3c:
    *(undefined1 **)(puVar3 + 0x30) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar3 + 0x38) = unaff_x30;
    pcVar8 = *(char **)(param_2.unknown + 0x10);
    unaff_x22 = pcVar8;
    HVar6.unknown = param_2.unknown;
    Swift::Hasher::_combine((__uint64)pcVar8,param_2);
    if (pcVar8 != (char *)0x0) {
      unaff_x23 = (undefined8 *)(param_2.unknown + 0x28);
      do {
        HVar6.unknown = (undefined *)unaff_x23[-1];
        unaff_x22 = (char *)*unaff_x23;
        unaff_x20.unknown = param_1.unknown;
switchD_100bbe53c_caseD_2f:
        param_1.unknown = unaff_x20.unknown;
        _swift_bridgeObjectRetain(unaff_x22);
        SVar28.bridgeObject = unaff_x22;
        SVar28.str = HVar6.unknown;
        Swift::String::hash(param_1,SVar28);
        _swift_bridgeObjectRelease(unaff_x22);
        unaff_x23 = unaff_x23 + 2;
        pcVar8 = pcVar8 + -1;
      } while (pcVar8 != (char *)0x0);
    }
    SVar26.bridgeObject = HVar6.unknown;
    SVar26.str = unaff_x22;
    return SVar26;
  case 0x2f:
  case 0x5f:
  case 0x67:
  case 0x6f:
  case 0x97:
  case 0xd7:
    goto switchD_100bbe53c_caseD_2f;
  case 0x38:
    FUN_100bbe668();
    *pcVar8 = (char)param_1.unknown;
    SVar19.bridgeObject = param_2.unknown;
    SVar19.str = param_1.unknown;
    return SVar19;
  case 0x39:
  case 0x79:
    puVar2 = &stack0xffffffffffffffa0;
    goto switchD_100bbe53c_caseD_18;
  case 0x3a:
  case 0x7a:
  case 0xa2:
  case 0xe2:
    SVar16.str = (char *)Swift::Hasher::_finalize(param_1);
    SVar16.bridgeObject = param_2.unknown;
    return SVar16;
  case 0x3d:
  case 0x51:
  case 0x59:
  case 0x61:
  case 0x69:
  case 0x7c:
  case 0x7d:
  case 0x91:
  case 0xa5:
  case 0xb9:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xe5:
  case 0xf9:
    break;
  case 0x40:
    FUN_100bbefd4();
    SVar21.bridgeObject = param_2.unknown;
    SVar21.str = param_1.unknown;
    return SVar21;
  case 0x4c:
  case 0x94:
  case 0xb4:
  case 0xf4:
    goto switchD_100bbe53c_caseD_4c;
  case 0x50:
  case 0x58:
  case 0x60:
  case 0x68:
    goto switchD_100bbe53c_caseD_50;
  case 0x54:
    goto switchD_100bbe53c_caseD_54;
  case 0x55:
    goto switchD_100bbe53c_caseD_55;
  case 0x56:
  case 0xbe:
  case 0xc6:
  case 0xce:
  case 0xfe:
    goto switchD_100bbe53c_caseD_56;
  case 100:
  case 0xa0:
    goto switchD_100bbe53c_caseD_64;
  case 0x78:
    pcVar8 = *(char **)(param_2.unknown + 0x10);
    param_1.unknown = pcVar8;
    Swift::Hasher::_combine((__uint64)pcVar8,param_2);
    HVar6.unknown = param_2.unknown;
    if (pcVar8 != (char *)0x0) goto switchD_100bbe53c_caseD_90;
    break;
  case 0x80:
    SVar18.bridgeObject = param_2.unknown;
    SVar18.str = param_1.unknown;
    return SVar18;
  case 0x90:
switchD_100bbe53c_caseD_90:
    puVar9 = (undefined8 *)(HVar6.unknown + 0x20);
    do {
      param_1.unknown = (char *)0x0;
      if ((double)*puVar9 != 0.0) {
        param_1.unknown = (char *)*puVar9;
      }
      Swift::Hasher::_combine((__uint64)param_1.unknown,HVar5);
      pcVar8 = pcVar8 + -1;
      puVar9 = puVar9 + 1;
    } while (pcVar8 != (char *)0x0);
    break;
  case 0x95:
    goto switchD_100bbe53c_caseD_95;
  case 0xa4:
  case 0xcd:
    FUN_100bbe844();
    SVar23.bridgeObject = param_2.unknown;
    SVar23.str = param_1.unknown;
    return SVar23;
  case 0xb8:
  case 0xc0:
  case 200:
  case 0xd0:
    pcVar8 = (char *)(ulong)(byte)*param_1.unknown;
    FUN_100bbe814(pcVar8);
    SVar22.bridgeObject = param_2.unknown;
    SVar22.str = pcVar8;
    return SVar22;
  case 0xbc:
  case 0xc4:
    switchD_100bbd908::caseD_25();
  case 0xe4:
    SVar20.bridgeObject = param_2.unknown;
    SVar20.str = param_1.unknown;
    return SVar20;
  case 0xbd:
  case 0xc5:
  case 0xfd:
    goto switchD_100bbe53c_caseD_bd;
  case 0xcc:
    goto switchD_100bbe53c_caseD_cc;
  case 0xd4:
    goto switchD_100bbe53c_caseD_d4;
  case 0xf8:
  case 0xfc:
    FUN_100bbdc64();
    SVar20 = (extension_Swift)::Swift::CodingKey::get_description();
    return SVar20;
  }
switchD_100bbe53c_caseD_15:
  SVar24.bridgeObject = HVar5.unknown;
  SVar24.str = param_1.unknown;
  return SVar24;
switchD_100bbe53c_caseD_54:
  FUN_100b7ca98();
switchD_100bbe53c_caseD_a:
switchD_100bbe53c_caseD_14:
  goto switchD_100bbe53c_caseD_b;
switchD_100bbe53c_caseD_95:
  goto LAB_100bbe5d8;
switchD_100bbe53c_caseD_1a:
  FUN_100b7ca98();
switchD_100bbe53c_caseD_4c:
  param_3 = unaff_x22;
  goto switchD_100bbe53c_caseD_cc;
switchD_100bbe53c_caseD_b:
switchD_100bbe53c_caseD_f:
  switchD_100bbe53c::caseD_2e();
  SVar11.bridgeObject = param_2.unknown;
  SVar11.str = param_1.unknown;
  return SVar11;
switchD_100bbe53c_caseD_cc:
switchD_100bbe53c_caseD_56:
  SVar27.bridgeObject = param_3;
  SVar27.str = param_2.unknown;
  Swift::String::hash(param_1,SVar27);
  SVar10.bridgeObject = param_2.unknown;
  SVar10.str = param_1.unknown;
  return SVar10;
switchD_100bbe53c_caseD_18:
  *(undefined **)(puVar2 + 0x10) = unaff_x20.unknown;
  *(char **)(puVar2 + 0x18) = pcVar8;
  *(undefined1 **)(puVar2 + 0x20) = &stack0xfffffffffffffff0;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x30;
  HVar6.unknown = param_2.unknown;
switchD_100bbe53c_caseD_d4:
  pcVar8 = *(char **)(param_2.unknown + 0x10);
  param_1.unknown = pcVar8;
  Swift::Hasher::_combine((__uint64)pcVar8,param_2);
  if (pcVar8 != (char *)0x0) {
switchD_100bbe53c_caseD_50:
    puVar9 = (undefined8 *)(HVar6.unknown + 0x20);
    do {
      HVar6.unknown = (undefined *)(puVar9 + 1);
      param_1.unknown = (undefined *)*puVar9;
switchD_100bbe53c_caseD_bd:
      Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
switchD_100bbe53c_caseD_55:
      pcVar8 = pcVar8 + -1;
      puVar9 = (undefined8 *)HVar6.unknown;
    } while (pcVar8 != (char *)0x0);
  }
  SVar25.bridgeObject = param_2.unknown;
  SVar25.str = param_1.unknown;
  return SVar25;
}



/* Address: 0x100bbe618 | FUN_100bbe618 */

void FUN_100bbe618(void)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  local_30 = *(undefined1 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[1];
  local_40 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_88;
  FUN_100bbe50c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100bbe668 | FUN_100bbe668 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100bbe69c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100bbe668(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100bbe6cc | thunk_FUN_100bbe070 */

void thunk_FUN_100bbe070(void)

{
  FUN_100bbe070();
  return;
}



/* Address: 0x100bbe6d0 | thunk_FUN_100bbe618 */

void thunk_FUN_100bbe618(void)

{
  FUN_100bbe618();
  return;
}



/* Address: 0x100bbe6d4 | thunk_FUN_100bbe50c */

void thunk_FUN_100bbe50c(void)

{
  FUN_100bbe50c();
  return;
}



/* Address: 0x100bbe6d8 | FUN_100bbe6d8 */

void FUN_100bbe6d8(__int64 param_1)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  local_30 = *(undefined1 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[1];
  local_40 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_88;
  FUN_100bbe50c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100bbe724 | FUN_100bbe724 */

void FUN_100bbe724(undefined1 *param_1,undefined1 *param_2)

{
  thunk_FUN_100bec780(*param_1,*param_2);
  return;
}



/* Address: 0x100bbe730 | FUN_100bbe730 */

void FUN_100bbe730(void)

{
  undefined1 *unaff_x20;
  
  switchD_100bec5a8::caseD_fc(*unaff_x20);
  return;
}



/* Address: 0x100bbe738 | FUN_100bbe738 */

void FUN_100bbe738(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100bed128(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bbe740 | FUN_100bbe740 */

void FUN_100bbe740(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  switchD_100becff0::caseD_7e(param_1,*unaff_x20);
  return;
}



/* Address: 0x100bbe748 | FUN_100bbe748 */

void FUN_100bbe748(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100bbe668(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100bbe774 | FUN_100bbe774 */

void FUN_100bbe774(undefined1 *param_1,undefined1 param_2)

{
  FUN_100bbe668();
  *param_1 = param_2;
  return;
}



/* Address: 0x100bbe798 | FUN_100bbe798 */

String FUN_100bbe798(void)

{
  String SVar1;
  
  FUN_100bbdc64();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100bbe7c0 | FUN_100bbe7c0 */

String FUN_100bbe7c0(void)

{
  String SVar1;
  
  FUN_100bbdc64();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100bbe7e8 | FUN_100bbe7e8 */

void FUN_100bbe7e8(void)

{
  switchD_100bbd908::caseD_25();
  return;
}



/* Address: 0x100bbe7fc | FUN_100bbe7fc */

void FUN_100bbe7fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



/* Address: 0x100bbe808 | FUN_100bbe808 */

void FUN_100bbe808(undefined8 *param_1)

{
  FUN_100bbe7fc(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bbe814 | FUN_100bbe814 */

void FUN_100bbe814(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 & 1;
  param_1[1] = 0;
  FUN_100bbefd4();
  return;
}



/* Address: 0x100bbe824 | switchD_100bbe53c::caseD_b8 */

void switchD_100bbe53c::caseD_b8(undefined1 *param_1)

{
  FUN_100bbe814(*param_1);
  return;
}



/* Address: 0x100bbe82c | FUN_100bbe82c */

void FUN_100bbe82c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_100bbefd4();
  return;
}



/* Address: 0x100bbe83c | FUN_100bbe83c */

void FUN_100bbe83c(undefined8 *param_1)

{
  FUN_100bbe82c(*param_1);
  return;
}



/* Address: 0x100bbe844 | FUN_100bbe844 */

void FUN_100bbe844(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_100bbefd4();
  return;
}



/* Address: 0x100bbe850 | FUN_100bbe850 */

void FUN_100bbe850(undefined8 *param_1)

{
  FUN_100bbe844(*param_1);
  return;
}



/* Address: 0x100bbe858 | FUN_100bbe858 */

void FUN_100bbe858(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  double *pdVar3;
  double dVar4;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    pdVar3 = (double *)(param_2.unknown + 0x20);
    do {
      dVar4 = 0.0;
      if (*pdVar3 != 0.0) {
        dVar4 = *pdVar3;
      }
      Swift::Hasher::_combine((__uint64)dVar4,HVar1);
      _Var2 = _Var2 - 1;
      pdVar3 = pdVar3 + 1;
    } while (_Var2 != 0);
  }
  return;
}



/* Address: 0x100bbe8bc | switchD_100bbe53c::caseD_39 */

void switchD_100bbe53c::caseD_39(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  __uint64 *p_Var3;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    p_Var3 = (__uint64 *)(param_2.unknown + 0x20);
    do {
      Swift::Hasher::_combine(*p_Var3,HVar1);
      _Var2 = _Var2 - 1;
      p_Var3 = p_Var3 + 1;
    } while (_Var2 != 0);
  }
  return;
}



/* Address: 0x100bbe908 | switchD_100bbe53c::caseD_2e */

void switchD_100bbe53c::caseD_2e(Hasher param_1,Hasher param_2)

{
  char *pcVar1;
  void *pvVar2;
  __uint64 _Var3;
  undefined8 *puVar4;
  String SVar5;
  
  _Var3 = *(__uint64 *)(param_2.unknown + 0x10);
  Swift::Hasher::_combine(_Var3,param_2);
  if (_Var3 != 0) {
    puVar4 = (undefined8 *)(param_2.unknown + 0x28);
    do {
      pcVar1 = (char *)puVar4[-1];
      pvVar2 = (void *)*puVar4;
      _swift_bridgeObjectRetain(pvVar2);
      SVar5.bridgeObject = pvVar2;
      SVar5.str = pcVar1;
      Swift::String::hash(param_1,SVar5);
      _swift_bridgeObjectRelease(pvVar2);
      puVar4 = puVar4 + 2;
      _Var3 = _Var3 - 1;
    } while (_Var3 != 0);
  }
  return;
}



/* Address: 0x100bbe97c | thunk_FUN_100bbe980 */

void thunk_FUN_100bbe980(void)

{
  byte *pbVar1;
  
  if (DAT_101047350 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9cd64;
  _swift_getWitnessTable(&BYTE_100c9cd64,&DAT_100f3aad0);
  DAT_101047350 = pbVar1;
  return;
}



/* Address: 0x100bbe980 | FUN_100bbe980 */

void FUN_100bbe980(void)

{
  byte *pbVar1;
  
  if (DAT_101047350 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9cd64;
  _swift_getWitnessTable(&BYTE_100c9cd64,&DAT_100f3aad0);
  DAT_101047350 = pbVar1;
  return;
}



/* Address: 0x100bbe9c0 | thunk_FUN_100bbe9c4 */

void thunk_FUN_100bbe9c4(void)

{
  byte *pbVar1;
  
  if (DAT_101047358 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9ce34;
  _swift_getWitnessTable(&BYTE_100c9ce34,&DAT_100f3aad0);
  DAT_101047358 = pbVar1;
  return;
}



/* Address: 0x100bbe9c4 | FUN_100bbe9c4 */

void FUN_100bbe9c4(void)

{
  byte *pbVar1;
  
  if (DAT_101047358 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c9ce34;
  _swift_getWitnessTable(&BYTE_100c9ce34,&DAT_100f3aad0);
  DAT_101047358 = pbVar1;
  return;
}



/* Address: 0x100bbea04 | thunk_FUN_100bbea08 */

void thunk_FUN_100bbea08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ce74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ce74,&DAT_100f3aad0);
  DAT_101047360 = pTVar1;
  return;
}



/* Address: 0x100bbea08 | FUN_100bbea08 */

void FUN_100bbea08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9ce74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9ce74,&DAT_100f3aad0);
  DAT_101047360 = pTVar1;
  return;
}



/* Address: 0x100bbea48 | thunk_FUN_100bbea5c */

void thunk_FUN_100bbea5c(void)

{
  FUN_100bbea5c();
  return;
}



/* Address: 0x100bbea4c | FUN_100bbea4c */

void FUN_100bbea4c(undefined8 *param_1)

{
  FUN_100b69560(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100bbea5c | FUN_100bbea5c */

undefined8 * FUN_100bbea5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100ba5a34(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100bbeaa4 | FUN_100bbeaa4 */

undefined8 * FUN_100bbeaa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100ba5a34(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_100b69560(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100bbeaf8 | FUN_100bbeaf8 */

undefined8 * FUN_100bbeaf8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_100b69560(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100bbeb3c | FUN_100bbeb3c */

int FUN_100bbeb3c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0xffffffff;
  }
  else if ((param_2 < 0xf9) || (*(char *)((long)param_1 + 0x11) == '\0')) {
    uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
    if (*(byte *)(param_1 + 4) < 8) {
      uVar1 = 0xffffffff;
    }
  }
  else {
    uVar1 = *param_1 + 0xf8;
  }
  return uVar1 + 1;
}



/* Address: 0x100bbeb7c | FUN_100bbeb7c */

void FUN_100bbeb7c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xf9) {
    if (0xf8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xf9);
    param_1[1] = 0;
    if (0xf8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x100bbebc0 | FUN_100bbebc0 */

undefined1  [16] FUN_100bbebc0(void)

{
  return ZEXT816(0x100f3aad0);
}



/* Address: 0x100bbebd0 | FUN_100bbebd0 */

void FUN_100bbebd0(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 2;
  if (0xfffeff < param_3 + 1) {
    uVar2 = 4;
  }
  if (param_3 + 1 >> 8 < 0xff) {
    uVar2 = 1;
  }
  uVar1 = 0;
  if (0xfe < param_3) {
    uVar1 = uVar2;
  }
  if (param_2 < 0xff) {
                    /* WARNING: Could not recover jumptable at 0x000100bbec18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&UNK_100bbec1c + (ulong)(&BYTE_100c9cd5d)[uVar1] * 4))();
    return;
  }
  *param_1 = (char)param_2 + '\x01';
                    /* WARNING: Could not recover jumptable at 0x000100bbec4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100bbec50 + (ulong)(&BYTE_100c9cd58)[uVar1] * 4))();
  return;
}



/* Address: 0x100bbec8c | FUN_100bbec8c */

undefined1  [16] FUN_100bbec8c(void)

{
  return ZEXT816(0x100f3ab60);
}



/* Address: 0x100bbec9c | thunk_FUN_100bbeca0 */

void thunk_FUN_100bbeca0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d06c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d06c,&DAT_100f3ab60);
  DAT_101047368 = pTVar1;
  return;
}



/* Address: 0x100bbeca0 | FUN_100bbeca0 */

void FUN_100bbeca0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9d06c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9d06c,&DAT_100f3ab60);
  DAT_101047368 = pTVar1;
  return;
}



/* Address: 0x100bbece0 | thunk_FUN_100bbece4 */

void thunk_FUN_100bbece4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9cfcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9cfcc,&DAT_100f3ab60);
  DAT_101047370 = pTVar1;
  return;
}



/* Address: 0x100bbece4 | FUN_100bbece4 */

void FUN_100bbece4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9cfcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9cfcc,&DAT_100f3ab60);
  DAT_101047370 = pTVar1;
  return;
}



/* Address: 0x100bbed24 | thunk_FUN_100bbed28 */

void thunk_FUN_100bbed28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047378 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9cfa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9cfa4,&DAT_100f3ab60);
  DAT_101047378 = pTVar1;
  return;
}



/* Address: 0x100bbed28 | FUN_100bbed28 */

void FUN_100bbed28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047378 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9cfa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9cfa4,&DAT_100f3ab60);
  DAT_101047378 = pTVar1;
  return;
}



/* Address: 0x100bbed68 | FUN_100bbed68 */

undefined8 FUN_100bbed68(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101047380;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100bbeda8 | FUN_100bbeda8 */

void FUN_100bbeda8(Hasher param_1,undefined *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  UUID UVar3;
  Hasher HVar4;
  long unaff_x22;
  __uint64 _Var5;
  long lVar6;
  void *pvVar7;
  char *pcVar8;
  String SVar9;
  
  lVar2 = 0;
  HVar4.unknown = param_2;
  FUN_100be55f4();
  lVar6 = *(long *)(lVar2 + -8);
  FUN_100bbefbc(*(undefined8 *)(lVar6 + 0x40));
  _Var5 = *(__uint64 *)(param_2 + 0x10);
  Swift::Hasher::_combine(_Var5,HVar4);
  if (_Var5 != 0) {
    param_2 = param_2 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    lVar6 = *(long *)(lVar6 + 0x48);
    do {
      FUN_100b6f61c(param_2);
      UVar3 = Foundation::UUID::typeMetadataAccessor();
      FUN_100bbeee0();
      Swift::Hashable::hash(param_1);
      Swift::Hasher::_combine
                (*(__uint64 *)(unaff_x22 + *(int *)(lVar2 + 0x14)),(Hasher)UVar3.unknown);
      puVar1 = (undefined8 *)(unaff_x22 + *(int *)(lVar2 + 0x18));
      pvVar7 = (void *)puVar1[1];
      if (pvVar7 == (void *)0x0) {
        Swift::Hasher::_combine(0,(Hasher)UVar3.unknown);
      }
      else {
        pcVar8 = (char *)*puVar1;
        Swift::Hasher::_combine(1,(Hasher)UVar3.unknown);
        _swift_bridgeObjectRetain(pvVar7);
        SVar9.bridgeObject = pvVar7;
        SVar9.str = pcVar8;
        Swift::String::hash(param_1,SVar9);
        _swift_bridgeObjectRelease(pvVar7);
        UVar3.unknown = pcVar8;
      }
      Swift::Hasher::_combine
                (*(__uint64 *)(unaff_x22 + *(int *)(lVar2 + 0x1c)),(Hasher)UVar3.unknown);
      FUN_100b6f660();
      param_2 = param_2 + lVar6;
      _Var5 = _Var5 - 1;
    } while (_Var5 != 0);
  }
  return;
}



/* Address: 0x100bbeee0 | FUN_100bbeee0 */

void FUN_100bbeee0(void)

{
  UUID UVar1;
  undefined *puVar2;
  
  if (DAT_100fac2e0 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518;
  _swift_getWitnessTable(PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518,UVar1.unknown);
  DAT_100fac2e0 = puVar2;
  return;
}



/* Address: 0x100bbef24 | thunk_FUN_100bbe808 */

void thunk_FUN_100bbe808(undefined8 *param_1)

{
  FUN_100bbe7fc(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bbef28 | thunk_FUN_100bbea5c */

void thunk_FUN_100bbea5c(void)

{
  FUN_100bbea5c();
  return;
}



/* Address: 0x100bbef2c | FUN_100bbef2c */

void FUN_100bbef2c(void)

{
  undefined8 in_x3;
  long unaff_x21;
  long unaff_x29;
  
  _swift_dynamicCast(&stack0x00000020,unaff_x29 + -0x48,unaff_x21 + 8,in_x3,6);
  return;
}



/* Address: 0x100bbef40 | FUN_100bbef40 */

void FUN_100bbef40(void)

{
  FUN_10000cbfc();
  return;
}



/* Address: 0x100bbef4c | FUN_100bbef4c */

void FUN_100bbef4c(void)

{
  FUN_100ba5a34();
  return;
}



/* Address: 0x100bbef64 | FUN_100bbef64 */

void FUN_100bbef64(void)

{
  FUN_100b69560();
  return;
}



/* Address: 0x100bbef7c | FUN_100bbef7c */

void FUN_100bbef7c(__uint64 param_1,Hasher param_2)

{
  Swift::Hasher::_combine(param_1,param_2);
  return;
}



/* Address: 0x100bbef84 | FUN_100bbef84 */

void FUN_100bbef84(void)

{
  undefined8 unaff_x24;
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -0x48) = unaff_x24;
  *(undefined1 *)(unaff_x29 + -0x51) = 1;
  return;
}


