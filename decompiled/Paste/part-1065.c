/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b6cfb4 | FUN_100b6cfb4 */

void FUN_100b6cfb4(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x40;
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0) {
    if (*(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8) == param_1) {
      return;
    }
    uVar3 = ~uVar3;
    uVar2 = param_2 + 1 & uVar3;
    if ((*(ulong *)(lVar1 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0) {
      do {
        if (*(long *)(*(long *)(unaff_x20 + 0x30) + uVar2 * 8) == param_1) {
          return;
        }
        uVar2 = uVar2 + 1 & uVar3;
      } while ((*(ulong *)(lVar1 + (uVar2 >> 3 & 0xffffffffffffff8)) >> (uVar2 & 0x3f) & 1) != 0);
      return;
    }
  }
  return;
}



/* Address: 0x100b6d050 | FUN_100b6d050 */

undefined1  [16] FUN_100b6d050(long param_1,ulong param_2,UUID param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  long lVar12;
  UUID UVar13;
  UUID UVar14;
  long lVar15;
  long lVar16;
  undefined1 auVar17 [16];
  long local_90 [3];
  
  lVar3 = 0;
  FUN_100be55f4();
  lVar8 = *(long *)(lVar3 + -8);
  uVar9 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  UVar13.unknown = (undefined *)((long)local_90 - uVar9);
  UVar14.unknown = UVar13.unknown + -uVar9;
  lVar10 = unaff_x20 + 0x40;
  uVar9 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar9 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar10 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0) {
    uVar9 = ~uVar9;
    lVar16 = *(long *)(param_1 + 0x10);
    local_90[0] = lVar16;
    local_90[1] = uVar9;
    local_90[2] = lVar10;
    do {
      lVar15 = *(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      if (*(long *)(lVar15 + 0x10) == lVar16) {
        if ((lVar16 == 0) || (lVar15 == param_1)) {
LAB_100b6d230:
          uVar6 = 1;
          goto LAB_100b6d234;
        }
        uVar9 = (ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
        _swift_bridgeObjectRetain(lVar15);
        lVar10 = *(long *)(lVar8 + 0x48);
        while( true ) {
          FUN_100b6f61c(lVar15 + uVar9,UVar14.unknown);
          if (lVar16 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6d25c);
            (*pcVar1)();
          }
          FUN_100b6f61c(param_1 + uVar9,UVar13.unknown);
          bVar2 = Foundation::UUID::___infix(UVar14,UVar13,param_3);
          if ((!bVar2) ||
             (*(long *)(UVar14.unknown + *(int *)(lVar3 + 0x14)) !=
              *(long *)(UVar13.unknown + *(int *)(lVar3 + 0x14)))) break;
          _Var5.unknown = *(undefined **)((long)(UVar14.unknown + *(int *)(lVar3 + 0x18)) + 8);
          puVar7 = *(undefined **)((long)(UVar13.unknown + *(int *)(lVar3 + 0x18)) + 8);
          if (_Var5.unknown != (undefined *)0x0) {
            if (puVar7 != (undefined *)0x0) {
                    /* WARNING: Load size is inaccurate */
              _Var4.unknown = UVar14.unknown[*(int *)(lVar3 + 0x18)];
                    /* WARNING: Load size is inaccurate */
              param_3.unknown = UVar13.unknown[*(int *)(lVar3 + 0x18)];
              if ((_Var4.unknown == param_3.unknown && _Var5.unknown == puVar7) ||
                 (bVar2 = Swift::_stringCompareWithSmolCheck
                                    (_Var4,_Var5,(_StringComparisonResult)(__int8)param_3.unknown),
                 bVar2)) goto LAB_100b6d1ac;
            }
            break;
          }
          if (puVar7 != (undefined *)0x0) break;
LAB_100b6d1ac:
          lVar11 = *(long *)(UVar14.unknown + *(int *)(lVar3 + 0x1c));
          lVar12 = *(long *)(UVar13.unknown + *(int *)(lVar3 + 0x1c));
          FUN_100b6f660(UVar13.unknown);
          FUN_100b6f660(UVar14.unknown);
          if (lVar11 != lVar12) goto LAB_100b6d1f4;
          uVar9 = uVar9 + lVar10;
          lVar16 = lVar16 + -1;
          if (lVar16 == 0) {
            _swift_bridgeObjectRelease(lVar15);
            goto LAB_100b6d230;
          }
        }
        FUN_100b6f660(UVar13.unknown);
        FUN_100b6f660(UVar14.unknown);
LAB_100b6d1f4:
        _swift_bridgeObjectRelease(lVar15);
        uVar9 = local_90[1];
        lVar10 = local_90[2];
        lVar16 = local_90[0];
      }
      param_2 = param_2 + 1 & uVar9;
    } while ((*(ulong *)(lVar10 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0)
    ;
  }
  uVar6 = 0;
LAB_100b6d234:
  auVar17._8_8_ = uVar6;
  auVar17._0_8_ = param_2;
  return auVar17;
}



/* Address: 0x100b6d25c | FUN_100b6d25c */

undefined1  [16] FUN_100b6d25c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  _StringGuts _Var3;
  void *pvVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  String SVar7;
  String SVar8;
  undefined1 auVar9 [16];
  
  lVar1 = unaff_x20 + 0x40;
  uVar6 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar1 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) == 0) {
LAB_100b6d398:
    uVar5 = 0;
  }
  else {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var3.unknown = SVar7.bridgeObject;
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar4 = SVar8.bridgeObject;
    if (SVar7 == SVar8) {
LAB_100b6d3a0:
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(pvVar4);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar7.str,_Var3,(_StringComparisonResult)(__int8)SVar8.str);
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(pvVar4);
      if (!bVar2) {
        uVar6 = ~uVar6;
        param_2 = param_2 + 1 & uVar6;
        if ((*(ulong *)(lVar1 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) != 0) {
          do {
            SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            _Var3.unknown = SVar7.bridgeObject;
            SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pvVar4 = SVar8.bridgeObject;
            if (SVar7 == SVar8) goto LAB_100b6d3a0;
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar7.str,_Var3,
                               (_StringComparisonResult)(__int8)SVar8.str);
            uVar5 = (ulong)bVar2;
            _swift_bridgeObjectRelease(_Var3.unknown);
            _swift_bridgeObjectRelease(pvVar4);
          } while ((!bVar2) &&
                  (param_2 = param_2 + 1 & uVar6,
                  (*(ulong *)(lVar1 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1)
                  != 0));
          goto LAB_100b6d3b4;
        }
        goto LAB_100b6d398;
      }
    }
    uVar5 = 1;
  }
LAB_100b6d3b4:
  auVar9._8_8_ = uVar5;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Address: 0x100b6d3d4 | FUN_100b6d3d4 */

void FUN_100b6d3d4(long param_1,ulong param_2)

{
  char *pcVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6d458);
      (*pcVar3)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6d45c);
      (*pcVar3)();
    }
    FUN_100b6fa40();
    FUN_100b6fcf8();
    FUN_100b69e84();
    _swift_unknownObjectRetain();
    FUN_100b6fd18();
    bVar2 = param_1 != 0;
    param_1 = unaff_x19;
    if (bVar2) {
LAB_100b6d448:
      FUN_100b6f9f0(param_1);
      return;
    }
    FUN_100b6f79c();
    FUN_100b6fa34();
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    lVar4 = param_1;
    FUN_100b6fcf8();
    FUN_100b6fa20();
    if (lVar4 != 0) goto LAB_100b6d448;
    FUN_100b6f788();
    FUN_100b6fa34();
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  FUN_100b6f880(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100b6f9b4("SentryEnvelopeItem");
  FUN_100b6f988(0x12);
  FUN_100b6f70c();
  FUN_100b6f880();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f880();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6d4cc);
  (*pcVar3)();
}



/* Address: 0x100b6d4cc | FUN_100b6d4cc */

void FUN_100b6d4cc(undefined8 param_1,ulong param_2)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  FUN_100b6d4e0();
  return;
}



/* Address: 0x100b6d4e0 | FUN_100b6d4e0 */

void FUN_100b6d4e0(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 1) {
    if (uVar1 != 2) {
      return;
    }
    _swift_retain();
  }
  _swift_retain(param_2 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x100b6d524 | FUN_100b6d524 */

long FUN_100b6d524(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x100b6d584 | FUN_100b6d584 */

undefined8 * FUN_100b6d584(undefined8 *param_1)

{
  FUN_100b6d5bc(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                *(undefined1 *)(param_1 + 7));
  return param_1;
}



/* Address: 0x100b6d5bc | FUN_100b6d5bc */

void FUN_100b6d5bc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_5);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_7);
    return;
  }
  return;
}



/* Address: 0x100b6d618 | FUN_100b6d618 */

void FUN_100b6d618(long param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d6a4);
      (*pcVar2)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d6a8);
      (*pcVar2)();
    }
    FUN_100b6fa40();
    lVar3 = 0;
    FUN_100b707a4();
    FUN_100b69e84();
    _swift_unknownObjectRetain();
    FUN_100b6fd18();
    param_1 = unaff_x19;
    if (lVar3 != 0) {
LAB_100b6d694:
      FUN_100b6f9f0(param_1);
      return;
    }
    FUN_100b6f79c();
    FUN_100b6fa34();
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    lVar3 = 0;
    FUN_100b707a4();
    FUN_100b6fa20();
    if (lVar3 != 0) goto LAB_100b6d694;
    FUN_100b6f788();
    FUN_100b6fa34();
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  FUN_100b6f880(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100b6f9b4("SentryDiscardedEvent");
  FUN_100b6f988(0x14);
  FUN_100b6f70c();
  FUN_100b6f880();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f880();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d718);
  (*pcVar2)();
}



/* Address: 0x100b6d718 | FUN_100b6d718 */

void FUN_100b6d718(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR_SentryFrame_100f8e010,&DAT_101044930);
  return;
}



/* Address: 0x100b6d72c | FUN_100b6d72c */

void FUN_100b6d72c(char *param_1,void *param_2,protocol_t **param_3,void *param_4)

{
  bool bVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  char *pcVar3;
  char *unaff_x19;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  protocol_t *local_28;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d7b8);
      (*pcVar2)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d7bc);
      (*pcVar2)();
    }
    FUN_100b6fa40();
    local_28 = &objc::protocol_t::NSObject;
    FUN_100b6f978();
    param_3 = &local_28;
    FUN_100b6fa18();
    bVar1 = param_1 != (char *)0x0;
    param_1 = unaff_x19;
    if (bVar1) {
LAB_100b6d7a8:
      FUN_100b6f9fc(param_1);
      return;
    }
    FUN_100b6f774();
    FUN_100b6fb08();
    FUN_100b6f9a4("Down-casted Array element failed to match the target type\nExpected ");
    pcVar3 = (char *)0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    pcVar3 = param_1;
    FUN_100b6f8a8(&objc::protocol_t::NSObject);
    if (pcVar3 != (char *)0x0) goto LAB_100b6d7a8;
    FUN_100b6f7fc();
    FUN_100b6f968();
    FUN_100b6fb08();
    FUN_100b6fc88("NSArray element failed to match the Swift Array Element type\nExpected ");
  }
  SVar4.bridgeObject = param_2;
  SVar4.str = pcVar3;
  SVar6.bridgeObject = param_4;
  SVar6.str = (char *)param_3;
  Swift::String::append(SVar4,SVar6);
  SVar5.bridgeObject = &DAT_e800000000000000;
  SVar5.str = (char *)0x7463656a624f534e;
  SVar7.bridgeObject = param_4;
  SVar7.str = (char *)param_3;
  Swift::String::append(SVar5,SVar7);
  FUN_100b6f70c();
  FUN_100b6f914();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f8c4();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d828);
  (*pcVar2)();
}



/* Address: 0x100b6d828 | FUN_100b6d828 */

void FUN_100b6d828(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR_SentryDebugMeta_100f8e020,&DAT_101044940);
  return;
}



/* Address: 0x100b6d83c | FUN_100b6d83c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

long FUN_100b6d83c(long param_1,void *param_2,long *param_3,void *param_4)

{
  code *pcVar1;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  long lVar3;
  char *pcVar4;
  long *plVar5;
  long unaff_x19;
  String SVar6;
  String SVar7;
  
  plVar5 = param_3;
  if ((ulong)param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6d8e0);
      (*pcVar1)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6d8e4);
      (*pcVar1)();
    }
    FUN_100b6fa40();
    FUN_100b6f978();
    lVar3 = *param_3;
    FUN_100b6fafc();
    _swift_dynamicCastObjCClass();
    if (lVar3 != 0) {
      return unaff_x19;
    }
    FUN_100b6f79c();
    FUN_100b6fa34();
    FUN_100b6f9b4("Down-casted Array element failed to match the target type\nExpected ");
    pcVar4 = (char *)0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    pcVar4 = (char *)*param_3;
    FUN_100b6fafc();
    _swift_dynamicCastObjCClass();
    if (pcVar4 != (char *)0x0) {
      return param_1;
    }
    FUN_100b6f788();
    FUN_100b6fa34();
    FUN_100b6fc88("NSArray element failed to match the Swift Array Element type\nExpected ");
  }
  SVar6.bridgeObject = param_2;
  SVar6.str = pcVar4;
  SVar7.bridgeObject = param_4;
  SVar7.str = (char *)plVar5;
  Swift::String::append(SVar6,SVar7);
  uVar2 = SUB81(pcVar4,0);
  FUN_100b6f898();
  SVar6 = Swift::__typeName((bool)uVar2);
  FUN_100b6f880(SVar6.str,SVar6.bridgeObject);
  FUN_100b6f980();
  FUN_100b6f70c();
  FUN_100b6f880();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f880();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6d94c);
  (*pcVar1)();
}



/* Address: 0x100b6d94c | FUN_100b6d94c */

void FUN_100b6d94c(long param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar3;
  undefined8 uVar4;
  long unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d9d8);
      (*pcVar2)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6d9dc);
      (*pcVar2)();
    }
    FUN_100b6fa40();
    lVar3 = 0;
    FUN_100baf3ec();
    FUN_100b69e84();
    _swift_unknownObjectRetain();
    FUN_100b6fd18();
    param_1 = unaff_x19;
    if (lVar3 != 0) {
LAB_100b6d9c8:
      FUN_100b6f9f0(param_1);
      return;
    }
    FUN_100b6f79c();
    FUN_100b6fa34();
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar4 = 0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    lVar3 = 0;
    FUN_100baf3ec();
    FUN_100b6fa20();
    if (lVar3 != 0) goto LAB_100b6d9c8;
    FUN_100b6f788();
    FUN_100b6fa34();
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  FUN_100b6f880(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100b6f9b4("SentryBinaryImageInfo");
  FUN_100b6f988(0x15);
  FUN_100b6f70c();
  FUN_100b6f880();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f880();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6da4c);
  (*pcVar2)();
}



/* Address: 0x100b6da4c | FUN_100b6da4c */

void FUN_100b6da4c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR_SentryAttachment_100f8e0d8,&DAT_1010449f8);
  return;
}



/* Address: 0x100b6da60 | FUN_100b6da60 */

void FUN_100b6da60(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR__OBJC_CLASS___MXDiagnosticPayload_100f8e1b8,&DAT_1010449e8);
  return;
}



/* Address: 0x100b6da74 | FUN_100b6da74 */

void FUN_100b6da74(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR__OBJC_CLASS___MXHangDiagnostic_100f8e1b0,&DAT_1010449e0);
  return;
}



/* Address: 0x100b6da88 | FUN_100b6da88 */

void FUN_100b6da88(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR__OBJC_CLASS___MXCPUExceptionDiagnostic_100f8e1a8,&DAT_1010449d8
               );
  return;
}



/* Address: 0x100b6da9c | FUN_100b6da9c */

void FUN_100b6da9c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR__OBJC_CLASS___MXDiskWriteExceptionDiagnostic_100f8e1a0,
                &DAT_1010449d0);
  return;
}



/* Address: 0x100b6dab0 | FUN_100b6dab0 */

void FUN_100b6dab0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR__OBJC_CLASS___MXCrashDiagnostic_100f8e198,&DAT_1010449c8);
  return;
}



/* Address: 0x100b6dac4 | FUN_100b6dac4 */

void FUN_100b6dac4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR_SentryException_100f8dde0,&DAT_101044a20);
  return;
}



/* Address: 0x100b6dad8 | FUN_100b6dad8 */

void FUN_100b6dad8(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6d83c(param_1,param_2,&PTR_SentryThread_100f8de78,&DAT_101044928);
  return;
}



/* Address: 0x100b6daec | FUN_100b6daec */

void FUN_100b6daec(long param_1,ulong param_2)

{
  char *pcVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6db7c);
      (*pcVar3)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6db80);
      (*pcVar3)();
    }
    FUN_100b6fa40();
    FUN_100b6f978();
    FUN_100b6fa18();
    bVar2 = param_1 != 0;
    param_1 = unaff_x19;
    if (bVar2) {
LAB_100b6db6c:
      FUN_100b6f9fc(param_1);
      return;
    }
    FUN_100b6f774();
    FUN_100b6fb08();
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    lVar4 = param_1;
    FUN_100b6f8a8(&objc::protocol_t::SentryRRWebEvent);
    if (lVar4 != 0) goto LAB_100b6db6c;
    FUN_100b6f7fc();
    FUN_100b6f968();
    FUN_100b6fb08();
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  FUN_100b6f914(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100b6f9a4("SentryRRWebEventProtocol");
  FUN_100b6f988(0x18);
  FUN_100b6f70c();
  FUN_100b6f914();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f8c4();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6dbf0);
  (*pcVar3)();
}



/* Address: 0x100b6dbf0 | FUN_100b6dbf0 */

void FUN_100b6dbf0(long param_1,ulong param_2)

{
  char *pcVar1;
  bool bVar2;
  code *pcVar3;
  undefined1 in_ZR;
  undefined1 in_CY;
  long lVar4;
  undefined8 uVar5;
  long unaff_x19;
  
  if (param_2 >> 0x3e == 0) {
    if (param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6dc80);
      (*pcVar3)();
    }
    FUN_100b6f7ec();
    if (!(bool)in_CY || (bool)in_ZR) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6dc84);
      (*pcVar3)();
    }
    FUN_100b6fa40();
    FUN_100b6f978();
    FUN_100b6fa18();
    bVar2 = param_1 != 0;
    param_1 = unaff_x19;
    if (bVar2) {
LAB_100b6dc70:
      FUN_100b6f9fc(param_1);
      return;
    }
    FUN_100b6f774();
    FUN_100b6fb08();
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar5 = 0xd000000000000043;
  }
  else {
    FUN_100b6f754();
    lVar4 = param_1;
    FUN_100b6f8a8(&objc::protocol_t::_TtP6Sentry26SentryReachabilityObserver_);
    if (lVar4 != 0) goto LAB_100b6dc70;
    FUN_100b6f7fc();
    FUN_100b6f968();
    FUN_100b6fb08();
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar5 = 0xd000000000000046;
  }
  FUN_100b6f914(uVar5,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_100b6f9a4("SentryReachabilityObserver");
  FUN_100b6f988(0x1a);
  FUN_100b6f70c();
  FUN_100b6f914();
  FUN_100b6f960();
  FUN_100b6f7c8();
  FUN_100b6f7bc();
  FUN_100b6f8c4();
  FUN_100b6f838();
  FUN_100b6f744("Fatal error");
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100b6dcf4);
  (*pcVar3)();
}



/* Address: 0x100b6dcf4 | FUN_100b6dcf4 */

void FUN_100b6dcf4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6ddd0(param_1,param_2,&DAT_101044958);
  return;
}



/* Address: 0x100b6dd00 | FUN_100b6dd00 */

void FUN_100b6dd00(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6de78(param_1,param_2,&DAT_101044a28);
  return;
}



/* Address: 0x100b6dd0c | FUN_100b6dd0c */

void FUN_100b6dd0c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b6dec0(param_1,param_2,FUN_100b9374c);
  return;
}



/* Address: 0x100b6dd18 | FUN_100b6dd18 */

undefined * FUN_100b6dd18(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar3 = &DAT_1010449c0;
    FUN_100b6730c();
    lVar4 = 0;
    FUN_100be55f4();
    lVar7 = *(long *)(*(long *)(lVar4 + -8) + 0x48);
    uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
    uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar3,uVar8 + lVar7 * param_2,uVar6 | 7);
    puVar5 = puVar3;
    _malloc_size();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6ddcc);
      (*pcVar2)();
    }
    lVar4 = (long)puVar5 - uVar8;
    if (lVar4 == -0x8000000000000000 && lVar7 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6ddd0);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (lVar7 != 0) {
      lVar1 = lVar4 / lVar7;
    }
    *(long *)(puVar3 + 0x10) = param_1;
    *(long *)(puVar3 + 0x18) = lVar1 << 1;
  }
  return puVar3;
}



/* Address: 0x100b6ddd0 | FUN_100b6ddd0 */

void FUN_100b6ddd0(void)

{
  undefined8 extraout_x8;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined *puVar1;
  
  FUN_100b6fdd8();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x20 != (undefined *)0x0) {
    FUN_100b6fd38();
    FUN_100b69f18((long)unaff_x20 << 4);
    FUN_100b6fc0c();
    FUN_100b69f58();
    *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
    *(undefined8 *)(unaff_x20 + 0x18) = extraout_x8;
    puVar1 = unaff_x20;
  }
  FUN_100b56e88(puVar1);
  return;
}



/* Address: 0x100b6de14 | FUN_100b6de14 */

void FUN_100b6de14(undefined8 param_1)

{
  undefined *puVar1;
  undefined *unaff_x20;
  
  FUN_100b6fdd8();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x20 != (undefined *)0x0) {
    puVar1 = &DAT_101044a00;
    FUN_100b6730c();
    FUN_100b6f90c();
    FUN_100b6fc0c();
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(long *)(unaff_x20 + 0x18) = (long)(puVar1 + -0x20) / 0x18 << 1;
    puVar1 = unaff_x20;
  }
  FUN_100b56e60(puVar1);
  return;
}



/* Address: 0x100b6de78 | FUN_100b6de78 */

void FUN_100b6de78(void)

{
  long extraout_x8;
  undefined8 unaff_x19;
  undefined *unaff_x20;
  undefined *puVar1;
  
  FUN_100b6fdd8();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x20 != (undefined *)0x0) {
    FUN_100b6fd38();
    FUN_100b69f18((long)unaff_x20 << 3);
    FUN_100b6fc0c();
    FUN_100b6fc54();
    *(undefined8 *)(unaff_x20 + 0x10) = unaff_x19;
    *(long *)(unaff_x20 + 0x18) = extraout_x8 << 1;
    puVar1 = unaff_x20;
  }
  FUN_100b56e88(puVar1);
  return;
}



/* Address: 0x100b6dec0 | FUN_100b6dec0 */

void FUN_100b6dec0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long extraout_x8;
  undefined *unaff_x20;
  undefined *puVar1;
  
  FUN_100b6fdd8();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x20 != (undefined *)0x0) {
    (*param_3)();
    _swift_allocObject();
    FUN_100b6fc0c();
    FUN_100b6fc54();
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(ulong *)(unaff_x20 + 0x18) = extraout_x8 << 1 | 1;
    puVar1 = unaff_x20;
  }
  FUN_100b56e88(puVar1);
  return;
}



/* Address: 0x100b6df24 | FUN_100b6df24 */

void FUN_100b6df24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 *local_30;
  undefined8 local_20;
  undefined8 uStack_18;
  
  local_30 = &local_20;
  local_20 = param_3;
  uStack_18 = param_4;
  FUN_100b6e648(FUN_100b6f6ec,auStack_40,param_1,param_2);
  return;
}



/* Address: 0x100b6df68 | FUN_100b6df68 */

void FUN_100b6df68(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6dfc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_100b6e2b0 + (*(ulong *)(unaff_x20 + 8) >> 0x3e) * 4) + 0x100b6dfb8)
  )();
  return;
}



/* Address: 0x100b6e2c0 | FUN_100b6e2c0 */

void FUN_100b6e2c0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6e320. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&LAB_100b6e58c + (*(ulong *)(unaff_x20 + 8) >> 0x3e) * 4) + 0x100b6e314)
  )();
  return;
}



/* Address: 0x100b6e59c | FUN_100b6e59c */

void FUN_100b6e59c(undefined8 *param_1,UnsafeRawBufferPointer param_2,undefined8 param_3)

{
  _Representation _Var1;
  undefined7 uVar2;
  
  uVar2 = (undefined7)((ulong)param_2.unknown >> 8);
  _Var1 = Foundation::Data::_Representation::init(param_2);
  *param_1 = CONCAT71(uVar2,_Var1.value);
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b6e5c8 | FUN_100b6e5c8 */

undefined8
FUN_100b6e5c8(UnsafeMutableBufferPointer<__int8> param_1,_StringGuts param_2,undefined8 param_3,
             undefined8 param_4)

{
  code *pcVar1;
  
  if (param_1.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e644);
    (*pcVar1)();
  }
  _swift_bridgeObjectRetain(param_4);
  Swift::_StringGuts::_copyUTF8(param_1,param_2);
  if (((ulong)param_2.unknown & 1) == 0) {
    _swift_bridgeObjectRelease(param_4);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e648);
  (*pcVar1)();
}



/* Address: 0x100b6e648 | FUN_100b6e648 */

undefined8 FUN_100b6e648(code *param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long unaff_x21;
  undefined8 local_40 [4];
  
  if (param_3 == 0) {
    param_3 = 0;
    param_4 = 0;
  }
  else {
    param_4 = param_4 - param_3;
  }
  (*param_1)(local_40,param_3,param_4);
  if (unaff_x21 == 0) {
    return local_40[0];
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e6a4);
  (*pcVar1)();
}



/* Address: 0x100b6e6a4 | FUN_100b6e6a4 */

void FUN_100b6e6a4(undefined8 param_1,__DataStorage *param_2,long param_3,code *param_4)

{
  code *pcVar1;
  __DataStorage *p_Var2;
  __DataStorage *p_Var3;
  long lVar4;
  __DataStorage *unaff_x20;
  
  p_Var2 = param_2;
  Foundation::__DataStorage::_get__bytes(unaff_x20,param_2);
  if (p_Var2 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e744);
    (*pcVar1)();
  }
  p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(unaff_x20,p_Var2);
  if (!SBORROW8((long)param_2,(long)p_Var3)) {
    if (!SBORROW8(param_3,(long)param_2)) {
      lVar4 = Foundation::__DataStorage::get__length(unaff_x20,p_Var3);
      if (param_3 - (long)param_2 <= lVar4) {
        lVar4 = param_3 - (long)param_2;
      }
      (*param_4)(param_1,p_Var2 + ((long)param_2 - (long)p_Var3),
                 p_Var2 + ((long)param_2 - (long)p_Var3) + lVar4);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e740);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e73c);
  (*pcVar1)();
}



/* Address: 0x100b6e744 | FUN_100b6e744 */

void FUN_100b6e744(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined1 local_40 [32];
  
  (*param_2)(local_40,param_1,param_1 + param_4);
  return;
}



/* Address: 0x100b6e788 | FUN_100b6e788 */

void FUN_100b6e788(void)

{
  FUN_100b6e8a0();
  return;
}



/* Address: 0x100b6e79c | FUN_100b6e79c */

void FUN_100b6e79c(void)

{
  FUN_100b6ed1c();
  return;
}



/* Address: 0x100b6e7b0 | FUN_100b6e7b0 */

void FUN_100b6e7b0(void)

{
  FUN_100b6f184();
  return;
}



/* Address: 0x100b6e7cc | FUN_100b6e7cc */

void FUN_100b6e7cc(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  FUN_100b6fdf8();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6e88c);
      (*pcVar1)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (param_2 <= lVar3) {
    param_2 = lVar3;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_101044a30;
    FUN_100b6730c(&DAT_101044a30);
    FUN_100b6f90c();
    _malloc_size();
    FUN_100b6fdb0();
  }
  if ((unaff_w20 & 1) == 0) {
    FUN_100b6730c(&DAT_101044a38);
    FUN_100b6fb3c();
  }
  else {
    FUN_100b69450(unaff_x19 + 0x20,lVar3,puVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar2);
  return;
}



/* Address: 0x100b6e88c | FUN_100b6e88c */

void FUN_100b6e88c(void)

{
  FUN_100b6e8a0();
  return;
}



/* Address: 0x100b6e8a0 | FUN_100b6e8a0 */

void FUN_100b6e8a0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long unaff_x19;
  uint unaff_w21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  
  FUN_100b6fc34();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6e934);
      (*pcVar2)();
    }
    FUN_100b69e18();
  }
  FUN_100b6fc24();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x23 != (undefined *)0x0) {
    FUN_100b6fa60();
    FUN_100b69f18((long)unaff_x23 << 3);
    FUN_100b6fcdc();
    FUN_100b6fc54();
    *(undefined8 *)(unaff_x23 + 0x10) = unaff_x22;
    *(long *)(unaff_x23 + 0x18) = extraout_x8 << 1;
    puVar1 = unaff_x23;
  }
  if ((unaff_w21 & 1) == 0) {
    FUN_100b6fcc4();
  }
  else {
    FUN_100b6f888();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar1);
  return;
}



/* Address: 0x100b6e934 | FUN_100b6e934 */

void FUN_100b6e934(void)

{
  FUN_100b6ed1c();
  return;
}



/* Address: 0x100b6e948 | FUN_100b6e948 */

void FUN_100b6e948(void)

{
  FUN_100b6edfc();
  return;
}



/* Address: 0x100b6e95c | FUN_100b6e95c */

void FUN_100b6e95c(void)

{
  FUN_100b6f184();
  return;
}



/* Address: 0x100b6e978 | FUN_100b6e978 */

void FUN_100b6e978(void)

{
  FUN_100b6eea8();
  return;
}



/* Address: 0x100b6e994 | FUN_100b6e994 */

void FUN_100b6e994(void)

{
  FUN_100b6ed1c();
  return;
}



/* Address: 0x100b6e9a8 | FUN_100b6e9a8 */

void FUN_100b6e9a8(void)

{
  FUN_100b6e9c4();
  return;
}



/* Address: 0x100b6e9c4 | FUN_100b6e9c4 */

void FUN_100b6e9c4(long param_1)

{
  code *pcVar1;
  ulong unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  long unaff_x25;
  long lVar2;
  uint unaff_w26;
  
  FUN_100b6fe5c();
  FUN_100b6f93c();
  if ((((unaff_w26 & 1) != 0) && (param_1 < unaff_x25)) && (param_1 + 0x4000000000000000 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ea6c);
    (*pcVar1)();
  }
  if (unaff_x19 >> 0x3e == 0) {
    lVar2 = *(long *)((unaff_x19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    FUN_100b6f8d0();
    lVar2 = param_1;
  }
  FUN_100b6fae4();
  FUN_100b6dec0();
  if ((unaff_w23 & 1) == 0) {
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ea68);
      (*pcVar1)();
    }
    FUN_100b6fc64();
    FUN_100b6f3d8();
  }
  else {
    FUN_100b6fac4();
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    FUN_100b6f838();
  }
  FUN_100b69e70(param_1);
  return;
}



/* Address: 0x100b6ea6c | FUN_100b6ea6c */

void FUN_100b6ea6c(void)

{
  FUN_100b6ead0();
  return;
}



/* Address: 0x100b6ea90 | FUN_100b6ea90 */

void FUN_100b6ea90(void)

{
  FUN_100b6ec84();
  return;
}



/* Address: 0x100b6eaac | FUN_100b6eaac */

void FUN_100b6eaac(void)

{
  FUN_100b6ead0();
  return;
}



/* Address: 0x100b6ead0 | FUN_100b6ead0 */

void FUN_100b6ead0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  code *param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  FUN_100b6fd78();
  uVar4 = param_4;
  FUN_100b6f22c();
  uVar3 = param_2;
  if (((param_3 & 1) != 0) && (uVar3 = uVar4, (long)uVar4 < (long)param_2)) {
    if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ebc4);
      (*pcVar1)();
    }
    uVar3 = uVar4 * 2;
    if (uVar3 - param_2 == 0 || (long)uVar3 < (long)param_2) {
      uVar3 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    FUN_100b6f8d0();
  }
  uVar2 = uVar4;
  FUN_100b6dec0(uVar4,uVar3,param_5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ebc0);
      (*pcVar1)();
    }
    FUN_100b6f2fc(0,uVar4,uVar2 + 0x20,param_4,param_7,param_8);
  }
  else {
    (*param_6)((param_4 & 0xffffffffffffff8) + 0x20,uVar4,uVar2 + 0x20);
    *(undefined8 *)((param_4 & 0xffffffffffffff8) + 0x10) = 0;
    FUN_100b6f838();
  }
  FUN_100b56ea0(uVar2);
  return;
}



/* Address: 0x100b6ebc4 | FUN_100b6ebc4 */

void FUN_100b6ebc4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  long lVar3;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  ulong uVar4;
  long unaff_x19;
  uint unaff_w20;
  long lVar5;
  
  FUN_100b6fdf8();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ec68);
      (*pcVar1)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar5 = *(long *)(unaff_x19 + 0x10);
  lVar2 = lVar5;
  FUN_100b6dd18(lVar5,param_2);
  lVar3 = 0;
  FUN_100be55f4();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
  if ((unaff_w20 & 1) == 0) {
    _swift_arrayInitWithCopy(lVar2 + uVar4,unaff_x19 + uVar4,lVar5,lVar3);
  }
  else {
    FUN_100b69498(unaff_x19 + uVar4,lVar5,lVar2 + uVar4);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b56e60(lVar2);
  return;
}



/* Address: 0x100b6ec68 | FUN_100b6ec68 */

void FUN_100b6ec68(void)

{
  FUN_100b6ec84();
  return;
}



/* Address: 0x100b6ec84 | FUN_100b6ec84 */

void FUN_100b6ec84(undefined *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long unaff_x19;
  uint unaff_w22;
  long lVar3;
  
  FUN_100b6fe04();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6ed1c);
      (*pcVar2)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (param_2 <= lVar3) {
    param_2 = lVar3;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_100b6fa60();
    FUN_100b69f18(param_2 << 4);
    _malloc_size();
    FUN_100b69f58();
    *(long *)(param_1 + 0x10) = lVar3;
    *(undefined8 *)(param_1 + 0x18) = extraout_x8_01;
    puVar1 = param_1;
  }
  if ((unaff_w22 & 1) == 0) {
    FUN_100b6fa80();
  }
  else {
    FUN_100b6fb68();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar1);
  return;
}



/* Address: 0x100b6ed1c | FUN_100b6ed1c */

void FUN_100b6ed1c(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  long unaff_x19;
  uint unaff_w21;
  size_t unaff_x22;
  undefined *unaff_x23;
  
  FUN_100b6fc34();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6edb8);
      (*pcVar2)();
    }
    FUN_100b69e18();
  }
  FUN_100b6fc24();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x23 != (undefined *)0x0) {
    FUN_100b6fa60();
    FUN_100b6f90c();
    FUN_100b6fcdc();
    *(size_t *)(unaff_x23 + 0x10) = unaff_x22;
    *(long *)(unaff_x23 + 0x18) = param_1 * 2 + -0x40;
    puVar1 = unaff_x23;
  }
  if ((unaff_w21 & 1) == 0) {
    _memcpy(puVar1 + 0x20,(void *)(unaff_x19 + 0x20),unaff_x22);
  }
  else {
    FUN_100b6f888();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar1);
  return;
}



/* Address: 0x100b6edb8 | FUN_100b6edb8 */

void FUN_100b6edb8(void)

{
  FUN_100b6f184();
  return;
}



/* Address: 0x100b6edd4 | FUN_100b6edd4 */

void FUN_100b6edd4(void)

{
  FUN_100b6edfc();
  return;
}


