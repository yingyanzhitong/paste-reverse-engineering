/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100481024 | FUN_100481024 */

bool FUN_100481024(undefined8 *param_1,long *param_2,code *param_3)

{
  bool bVar1;
  long lVar2;
  _StringGuts _Var3;
  Date DVar4;
  undefined *puVar5;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    if (((undefined *)param_1[2] == (undefined *)param_2[2] &&
         (undefined *)param_1[3] == (undefined *)param_2[3]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[2],(undefined *)param_1[3],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[2]), bVar1)) {
      if ((((undefined *)param_1[4] == (undefined *)param_2[4]) &&
          ((undefined *)param_1[5] == (undefined *)param_2[5])) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)param_1[4],(undefined *)param_1[5],
                             (_StringComparisonResult)(__int8)(undefined *)param_2[4]), bVar1)) {
        DVar4.unknown = (undefined *)param_2[6];
        if ((((undefined *)param_1[6] == DVar4.unknown) &&
            ((undefined *)param_1[7] == (undefined *)param_2[7])) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[6],(undefined *)param_1[7],
                               (_StringComparisonResult)(__int8)DVar4.unknown), bVar1)) {
          _Var3.unknown = (undefined *)param_1[9];
          puVar5 = (undefined *)param_2[9];
          if (_Var3.unknown == (undefined *)0x0) {
            if (puVar5 == (undefined *)0x0) {
LAB_100481100:
              lVar2 = 0;
              (*param_3)();
              bVar1 = Foundation::Date::___infix
                                ((undefined *)((long)param_1 + (long)*(int *)(lVar2 + 0x24)),
                                 (undefined *)((long)param_2 + (long)*(int *)(lVar2 + 0x24)),DVar4);
              return bVar1;
            }
          }
          else if (puVar5 != (undefined *)0x0) {
            DVar4.unknown = (undefined *)param_2[8];
            if ((((undefined *)param_1[8] == DVar4.unknown) && (_Var3.unknown == puVar5)) ||
               (bVar1 = Swift::_stringCompareWithSmolCheck
                                  ((undefined *)param_1[8],_Var3,
                                   (_StringComparisonResult)(__int8)DVar4.unknown), bVar1))
            goto LAB_100481100;
          }
        }
      }
    }
  }
  return false;
}



/* Address: 0x10048113c | FUN_10048113c */

void FUN_10048113c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc8cb0,&TargetStructDescriptor_100cb1494);
  return;
}



/* Address: 0x100481150 | FUN_100481150 */

void FUN_100481150(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc8d50,&TargetStructDescriptor_100cb14bc);
  return;
}



/* Address: 0x100481164 | thunk_FUN_1004811a0 */

void thunk_FUN_1004811a0(void)

{
  FUN_1004811a0();
  return;
}



/* Address: 0x100481168 | thunk_FUN_100481288 */

void thunk_FUN_100481288(void)

{
  FUN_100481288();
  return;
}



/* Address: 0x10048116c | thunk_FUN_1004812ec */

void thunk_FUN_1004812ec(void)

{
  FUN_1004812ec();
  return;
}



/* Address: 0x100481170 | thunk_FUN_1004813a8 */

void thunk_FUN_1004813a8(void)

{
  FUN_1004813a8();
  return;
}



/* Address: 0x100481174 | thunk_FUN_10048149c */

void thunk_FUN_10048149c(void)

{
  FUN_10048149c();
  return;
}



/* Address: 0x100481178 | thunk_FUN_100481504 */

void thunk_FUN_100481504(void)

{
  FUN_100481504();
  return;
}



/* Address: 0x10048117c | FUN_10048117c */

void FUN_10048117c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100481188 | thunk_FUN_1004815b4 */

void thunk_FUN_1004815b4(void)

{
  FUN_1004815b4();
  return;
}



/* Address: 0x10048118c | FUN_10048118c */

void FUN_10048118c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100481198 | thunk_FUN_10048163c */

void thunk_FUN_10048163c(void)

{
  FUN_10048163c();
  return;
}



/* Address: 0x10048119c | thunk_FUN_1004816b0 */

void thunk_FUN_1004816b0(void)

{
  FUN_1004816b0();
  return;
}



/* Address: 0x1004811a0 | FUN_1004811a0 */

long * FUN_1004811a0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  Date DVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  
  uVar5 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar5 >> 0x11 & 1) == 0) {
    lVar8 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar8;
    lVar1 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar1;
    lVar2 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = lVar2;
    lVar3 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = lVar3;
    lVar4 = param_2[9];
    param_1[8] = param_2[8];
    param_1[9] = lVar4;
    iVar6 = *(int *)(param_3 + 0x24);
    DVar7 = Foundation::Date::typeMetadataAccessor();
    pcVar10 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar8);
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(lVar3);
    _swift_bridgeObjectRetain(lVar4);
    (*pcVar10)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar9 = (ulong)uVar5 & 0xff;
    param_1 = (long *)(lVar8 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100481288 | FUN_100481288 */

void FUN_100481288(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  iVar1 = *(int *)(param_2 + 0x24);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004812e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1004812ec | FUN_1004812ec */

undefined8 * FUN_1004812ec(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  Date DVar7;
  code *pcVar8;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  iVar6 = *(int *)(param_3 + 0x24);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  pcVar8 = *(code **)(*(long *)(DVar7.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  (*pcVar8)((long)param_1 + (long)iVar6,(long)param_2 + (long)iVar6,DVar7.unknown);
  return param_1;
}



/* Address: 0x1004813a8 | FUN_1004813a8 */

undefined8 * FUN_1004813a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[2] = param_2[2];
  uVar3 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[4] = param_2[4];
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[6] = param_2[6];
  uVar3 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  param_1[8] = param_2[8];
  uVar3 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  iVar1 = *(int *)(param_3 + 0x24);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x10048149c | FUN_10048149c */

undefined8 * FUN_10048149c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar3 = param_2[4];
  uVar5 = param_2[7];
  uVar4 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  iVar1 = *(int *)(param_3 + 0x24);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar2.unknown);
  return param_1;
}



/* Address: 0x100481504 | FUN_100481504 */

undefined8 * FUN_100481504(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  Date DVar4;
  
  uVar1 = param_2[1];
  uVar3 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[3];
  uVar3 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[5];
  uVar3 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[7];
  uVar3 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  uVar1 = param_2[9];
  uVar3 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar3);
  iVar2 = *(int *)(param_3 + 0x24);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,DVar4.unknown);
  return param_1;
}



/* Address: 0x1004815a8 | FUN_1004815a8 */

void FUN_1004815a8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004815b4 | FUN_1004815b4 */

ulong FUN_1004815b4(long param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010048162c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(uVar2,param_2,DVar1.unknown);
  return uVar2;
}



/* Address: 0x100481630 | FUN_100481630 */

void FUN_100481630(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10048163c | FUN_10048163c */

void FUN_10048163c(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004816ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x24),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x1004816b0 | FUN_1004816b0 */

undefined1  [16] FUN_1004816b0(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_50 = &DAT_100c4d8a8;
  puStack_48 = &DAT_100c4d8a8;
  local_40 = &DAT_100c4d8a8;
  puStack_38 = &DAT_100c4d8a8;
  local_30 = &DAT_100c4d8c0;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x100481734 | FUN_100481734 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100481734(void)

{
  return ZEXT816(0x100fc8dd8);
}



/* Address: 0x100481754 | thunk_FUN_1000ce40c */

void thunk_FUN_1000ce40c(void)

{
  FUN_1000ce40c();
  return;
}



/* Address: 0x100481758 | thunk_FUN_1003751d4 */

void thunk_FUN_1003751d4(void)

{
  FUN_1003751d4();
  return;
}



/* Address: 0x10048175c | thunk_FUN_10048163c */

void thunk_FUN_10048163c(void)

{
  FUN_10048163c();
  return;
}



/* Address: 0x100481760 | thunk_FUN_1000ce47c */

void thunk_FUN_1000ce47c(void)

{
  FUN_1000ce47c();
  return;
}



/* Address: 0x100481764 | thunk_FUN_1000ce4ec */

void thunk_FUN_1000ce4ec(void)

{
  FUN_1000ce4ec();
  return;
}



/* Address: 0x100481768 | thunk_FUN_1003ef9f8 */

void thunk_FUN_1003ef9f8(void)

{
  FUN_1003ef9f8();
  return;
}



/* Address: 0x10048176c | thunk_FUN_100481288 */

void thunk_FUN_100481288(void)

{
  FUN_100481288();
  return;
}



/* Address: 0x100481770 | thunk_FUN_1004811a0 */

void thunk_FUN_1004811a0(void)

{
  FUN_1004811a0();
  return;
}



/* Address: 0x100481774 | thunk_FUN_1004812ec */

void thunk_FUN_1004812ec(void)

{
  FUN_1004812ec();
  return;
}



/* Address: 0x100481778 | thunk_FUN_1004813a8 */

void thunk_FUN_1004813a8(void)

{
  FUN_1004813a8();
  return;
}



/* Address: 0x10048177c | thunk_FUN_10048149c */

void thunk_FUN_10048149c(void)

{
  FUN_10048149c();
  return;
}



/* Address: 0x100481780 | thunk_FUN_100481504 */

void thunk_FUN_100481504(void)

{
  FUN_100481504();
  return;
}



/* Address: 0x100481784 | thunk_FUN_1004815b4 */

void thunk_FUN_1004815b4(void)

{
  FUN_1004815b4();
  return;
}



/* Address: 0x100481788 | thunk_FUN_1004816b0 */

void thunk_FUN_1004816b0(void)

{
  FUN_1004816b0();
  return;
}



/* Address: 0x10048178c | FUN_10048178c */

void FUN_10048178c(long param_1,char *param_2,void *param_3)

{
  char *pcVar1;
  ulong uVar2;
  UnsafeMutablePointer UVar3;
  code *pcVar4;
  Index IVar5;
  uint uVar6;
  String SVar7;
  String SVar8;
  
  if (-1 < param_1) {
    param_1 = -param_1;
    uVar6 = (uint)((ulong)param_2 >> 0x3b) & 1;
    if (((ulong)param_3 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    pcVar1 = param_2;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      pcVar1 = (char *)((ulong)param_3 >> 0x38 & 0xf);
    }
    uVar2 = 7;
    if (uVar6 == 0) {
      uVar2 = 0xb;
    }
    IVar5.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | (long)pcVar1 << 0x10);
    SVar8.bridgeObject = param_3;
    SVar8.str = param_2;
    Swift::String::_index(IVar5,param_1,(Index)0xf,SVar8);
    UVar3.unknown = (char *)0xf;
    if (((uint)param_1 & 0xff) != 1) {
      UVar3 = IVar5.cmsgPointer.unknown;
    }
    SVar7.bridgeObject = param_2;
    SVar7.str = UVar3.unknown;
    Swift::String::get_subscript((Range<Index>)0xf,SVar7);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100481818);
  (*pcVar4)();
}



/* Address: 0x100481818 | FUN_100481818 */

String FUN_100481818(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  CharacterSet CVar3;
  CharacterSet CVar4;
  char *pcVar6;
  void *pvVar8;
  long extraout_x8;
  CharacterSet in;
  long lVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 local_50;
  undefined8 uStack_48;
  char *pcVar5;
  void *pvVar7;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar9 = *(long *)(CVar3.unknown + -8);
  CVar4 = CVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  in.unknown = (undefined *)((long)&local_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_50 = param_1;
  uStack_48 = param_2;
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar4);
  FUN_10045b990();
  SVar10 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar7 = SVar10.bridgeObject;
  pcVar5 = SVar10.str;
  (**(code **)(lVar9 + 8))(in.unknown,CVar3.unknown);
  SVar11 = Swift::String::lowercased(SVar10);
  SVar12.bridgeObject = &DAT_e800000000000000;
  SVar12.str = (char *)0x2965747361702820;
  pvVar8 = SVar11.bridgeObject;
  bVar2 = Swift::String::hasSuffix(SVar12,SVar11);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  if (bVar2) {
    SVar11.bridgeObject = &DAT_e800000000000000;
    SVar11.str = (char *)0x2965747361702820;
    pcVar6 = (char *)Swift::String::get_count(SVar11);
    FUN_10048178c(pcVar6,pcVar5,pvVar7);
    _swift_bridgeObjectRelease(pvVar7);
    SVar13.bridgeObject = pcVar5;
    SVar13.str = pcVar6;
    SVar10 = Swift::String::__fromSubstring(SVar13);
    _swift_bridgeObjectRelease(pvVar8);
  }
  else {
    uVar1 = (ulong)pcVar5 & 0xffffffffffff;
    if (((ulong)pvVar7 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar7 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(pvVar7);
      SVar10.bridgeObject = &DAT_e800000000000000;
      SVar10.str = (char *)0x7070612073696854;
    }
  }
  return SVar10;
}



/* Address: 0x10048199c | FUN_10048199c */

undefined1  [16] FUN_10048199c(char *param_1,char *param_2,char *param_3,char *param_4)

{
  bool bVar1;
  __int64 _Var2;
  Iterator IVar3;
  Iterator IVar4;
  char *pcVar5;
  _StringComparisonResult expecting;
  String SVar6;
  String SVar7;
  Character CVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  SVar6.bridgeObject = param_2;
  SVar6.str = param_1;
  pcVar5 = param_2;
  _Var2 = Swift::String::get_count(SVar6);
  SVar9.bridgeObject = param_3;
  SVar9.str = pcVar5;
  Swift::String::reserveCapacity(_Var2,SVar9);
  IVar3.unknown = param_2;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next(IVar3);
  if (pcVar5 != (char *)0x0) {
    do {
      IVar4.unknown = pcVar5;
      if ((IVar3.unknown == (char *)0x26) && (IVar4.unknown == (char *)0xe100000000000000)) {
LAB_100481a64:
        _swift_bridgeObjectRelease(IVar4.unknown);
        IVar4.unknown = (char *)0x3b706d6126;
LAB_100481a74:
        pcVar5 = &DAT_e500000000000000;
LAB_100481abc:
        SVar7.bridgeObject = pcVar5;
        SVar7.str = IVar4.unknown;
        SVar10.bridgeObject = param_4;
        SVar10.str = param_3;
        Swift::String::append(SVar7,SVar10);
      }
      else {
        expecting.value = (__int8)IVar3.unknown;
        param_3 = IVar3.unknown;
        param_4 = IVar4.unknown;
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x26,(_StringGuts)0xe100000000000000,expecting);
        if (bVar1) goto LAB_100481a64;
        if (((IVar3.unknown == (char *)0x3c) && (IVar4.unknown == (char *)0xe100000000000000)) ||
           (param_3 = IVar3.unknown, param_4 = IVar4.unknown,
           bVar1 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x3c,(_StringGuts)0xe100000000000000,expecting), bVar1))
        {
          _swift_bridgeObjectRelease(IVar4.unknown);
          IVar4.unknown = (char *)0x3b746c26;
LAB_100481ab8:
          pcVar5 = &DAT_e400000000000000;
          goto LAB_100481abc;
        }
        if (((IVar3.unknown == (char *)0x3e) && (IVar4.unknown == (char *)0xe100000000000000)) ||
           (param_3 = IVar3.unknown, param_4 = IVar4.unknown,
           bVar1 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x3e,(_StringGuts)0xe100000000000000,expecting), bVar1))
        {
          _swift_bridgeObjectRelease(IVar4.unknown);
          IVar4.unknown = (char *)0x3b746726;
          goto LAB_100481ab8;
        }
        if (((IVar3.unknown == (char *)0x22) && (IVar4.unknown == (char *)0xe100000000000000)) ||
           (param_3 = IVar3.unknown, param_4 = IVar4.unknown,
           bVar1 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x22,(_StringGuts)0xe100000000000000,expecting), bVar1))
        {
          _swift_bridgeObjectRelease(IVar4.unknown);
          pcVar5 = &DAT_e600000000000000;
          IVar4.unknown = (char *)0x3b746f757126;
          goto LAB_100481abc;
        }
        if (((IVar3.unknown == (char *)0x27) && (IVar4.unknown == (char *)0xe100000000000000)) ||
           (param_3 = IVar3.unknown, param_4 = IVar4.unknown,
           bVar1 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x27,(_StringGuts)0xe100000000000000,expecting), bVar1))
        {
          _swift_bridgeObjectRelease(IVar4.unknown);
          IVar4.unknown = (char *)0x3b39332326;
          goto LAB_100481a74;
        }
        CVar8.bridgeObject = IVar4.unknown;
        CVar8.str = IVar3.unknown;
        SVar11.bridgeObject = param_4;
        SVar11.str = param_3;
        pcVar5 = IVar4.unknown;
        Swift::String::append(CVar8,SVar11);
        _swift_bridgeObjectRelease();
      }
      Swift::String::Iterator::_next(IVar4);
      IVar3.unknown = IVar4.unknown;
    } while (pcVar5 != (char *)0x0);
  }
  _swift_bridgeObjectRelease(param_2);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x100481be4 | FUN_100481be4 */

undefined1  [16] FUN_100481be4(undefined8 *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  String SVar2;
  String SVar3;
  char *pcVar4;
  long lVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  void *pvVar12;
  void *pvVar13;
  void *pvVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  undefined *puVar18;
  code *pcVar19;
  char *pcVar20;
  char *pcVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
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
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  
  pcVar4 = (char *)*param_1;
  pvVar12 = (void *)param_1[1];
  FUN_100481818();
  pvVar13 = pvVar12;
  FUN_10048199c();
  _swift_bridgeObjectRelease(pvVar12);
  lVar5 = 0;
  FUN_100482008();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x18));
  pcVar6 = (char *)*puVar1;
  pvVar12 = (void *)puVar1[1];
  FUN_10048199c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x1c));
  pcVar7 = (char *)*puVar1;
  pvVar14 = (void *)puVar1[1];
  FUN_10048199c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x20));
  pcVar8 = (char *)*puVar1;
  pvVar15 = (void *)puVar1[1];
  FUN_10048199c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x24));
  pcVar9 = (char *)*puVar1;
  pvVar16 = (void *)puVar1[1];
  FUN_10048199c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x28));
  pvVar10 = (void *)puVar1[1];
  if (pvVar10 == (void *)0x0) {
    pcVar20 = (char *)0x0;
    pvVar10 = (void *)0xe000000000000000;
  }
  else {
    pcVar20 = (char *)*puVar1;
  }
  _swift_bridgeObjectRetain();
  pvVar17 = pvVar10;
  FUN_10048199c();
  _swift_bridgeObjectRelease(pvVar10);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x2c));
  pcVar11 = (char *)*param_1;
  puVar18 = (undefined *)param_1[1];
  FUN_10048199c();
  pcVar19 = (code *)puVar18;
  if (DAT_100fc9540 != -1) {
    pcVar19 = FUN_10048fbd8;
    _swift_once(&DAT_100fc9540);
  }
  pvVar10 = DAT_101057ad8;
  pcVar21 = DAT_101057ad0;
  if (DAT_101057ad8 == (void *)0x0) {
    pcVar21 = (char *)0x0;
    pvVar10 = (void *)0xe000000000000000;
  }
  else {
    Swift::_StringGuts::grow(0x27,(_StringGuts)pcVar19);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar22.bridgeObject = pvVar10;
    SVar22.str = pcVar21;
    SVar43.bridgeObject = param_4;
    SVar43.str = param_3;
    Swift::String::append(SVar22,SVar43);
    pcVar19 = (code *)0xee003e2265747361;
    SVar23.bridgeObject = (void *)0xee003e2265747361;
    SVar23.str = (char *)0x50223d746c612022;
    SVar44.bridgeObject = param_4;
    SVar44.str = param_3;
    Swift::String::append(SVar23,SVar44);
    pcVar21 = (char *)0xd000000000000017;
    pvVar10 = (void *)0x8000000100da8380;
  }
  Swift::_StringGuts::grow(0x1150,(_StringGuts)pcVar19);
  SVar24.bridgeObject = (void *)0x8000000100da71f0;
  SVar24.str = (char *)0xd00000000000009f;
  SVar45.bridgeObject = param_4;
  SVar45.str = param_3;
  Swift::String::append(SVar24,SVar45);
  SVar25.bridgeObject = pvVar13;
  SVar25.str = pcVar4;
  SVar46.bridgeObject = param_4;
  SVar46.str = param_3;
  Swift::String::append(SVar25,SVar46);
  SVar26.bridgeObject = (void *)0x8000000100da7290;
  SVar26.str = (char *)0xd000000000000c4b;
  SVar47.bridgeObject = param_4;
  SVar47.str = param_3;
  Swift::String::append(SVar26,SVar47);
  SVar27.bridgeObject = pvVar10;
  SVar27.str = pcVar21;
  SVar48.bridgeObject = param_4;
  SVar48.str = param_3;
  Swift::String::append(SVar27,SVar48);
  _swift_bridgeObjectRelease(pvVar10);
  SVar28.bridgeObject = (void *)0x8000000100da7ee0;
  SVar28.str = (char *)0xd000000000000015;
  SVar49.bridgeObject = param_4;
  SVar49.str = param_3;
  Swift::String::append(SVar28,SVar49);
  SVar29.bridgeObject = pvVar13;
  SVar29.str = pcVar4;
  SVar50.bridgeObject = param_4;
  SVar50.str = param_3;
  Swift::String::append(SVar29,SVar50);
  SVar30.bridgeObject = (void *)0x8000000100da7f00;
  SVar30.str = (char *)0xd000000000000021;
  SVar51.bridgeObject = param_4;
  SVar51.str = param_3;
  Swift::String::append(SVar30,SVar51);
  SVar31.bridgeObject = pvVar13;
  SVar31.str = pcVar4;
  SVar52.bridgeObject = param_4;
  SVar52.str = param_3;
  Swift::String::append(SVar31,SVar52);
  _swift_bridgeObjectRelease(pvVar13);
  SVar32.bridgeObject = (void *)0x8000000100da7f30;
  SVar32.str = (char *)0xd0000000000001f6;
  SVar53.bridgeObject = param_4;
  SVar53.str = param_3;
  Swift::String::append(SVar32,SVar53);
  SVar33.bridgeObject = puVar18;
  SVar33.str = pcVar11;
  SVar54.bridgeObject = param_4;
  SVar54.str = param_3;
  Swift::String::append(SVar33,SVar54);
  _swift_bridgeObjectRelease(puVar18);
  SVar34.bridgeObject = (void *)0x8000000100da8130;
  SVar34.str = (char *)0xd00000000000003c;
  SVar55.bridgeObject = param_4;
  SVar55.str = param_3;
  Swift::String::append(SVar34,SVar55);
  SVar35.bridgeObject = pvVar14;
  SVar35.str = pcVar7;
  SVar56.bridgeObject = param_4;
  SVar56.str = param_3;
  Swift::String::append(SVar35,SVar56);
  _swift_bridgeObjectRelease(pvVar14);
  SVar36.bridgeObject = (void *)0x8000000100da8170;
  SVar36.str = (char *)0xd00000000000003f;
  SVar57.bridgeObject = param_4;
  SVar57.str = param_3;
  Swift::String::append(SVar36,SVar57);
  SVar37.bridgeObject = pvVar12;
  SVar37.str = pcVar6;
  SVar58.bridgeObject = param_4;
  SVar58.str = param_3;
  Swift::String::append(SVar37,SVar58);
  _swift_bridgeObjectRelease(pvVar12);
  SVar38.bridgeObject = (void *)0x8000000100da81b0;
  SVar38.str = (char *)0xd000000000000041;
  SVar59.bridgeObject = param_4;
  SVar59.str = param_3;
  Swift::String::append(SVar38,SVar59);
  SVar39.bridgeObject = pvVar15;
  SVar39.str = pcVar8;
  SVar60.bridgeObject = param_4;
  SVar60.str = param_3;
  Swift::String::append(SVar39,SVar60);
  _swift_bridgeObjectRelease(pvVar15);
  SVar40.bridgeObject = (void *)0x8000000100da8200;
  SVar40.str = (char *)0xd000000000000048;
  SVar61.bridgeObject = param_4;
  SVar61.str = param_3;
  Swift::String::append(SVar40,SVar61);
  SVar3.bridgeObject = pvVar16;
  SVar3.str = pcVar9;
  SVar62.bridgeObject = param_4;
  SVar62.str = param_3;
  Swift::String::append(SVar3,SVar62);
  _swift_bridgeObjectRelease(pvVar16);
  SVar41.bridgeObject = (void *)0x8000000100da8250;
  SVar41.str = (char *)0xd000000000000038;
  SVar63.bridgeObject = param_4;
  SVar63.str = param_3;
  Swift::String::append(SVar41,SVar63);
  SVar2.bridgeObject = pvVar17;
  SVar2.str = pcVar20;
  SVar64.bridgeObject = param_4;
  SVar64.str = param_3;
  Swift::String::append(SVar2,SVar64);
  _swift_bridgeObjectRelease(pvVar17);
  SVar42.bridgeObject = (void *)0x8000000100da8290;
  SVar42.str = (char *)0xd0000000000000ea;
  SVar65.bridgeObject = param_4;
  SVar65.str = param_3;
  Swift::String::append(SVar42,SVar65);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x100482008 | FUN_100482008 */

void FUN_100482008(undefined8 param_1)

{
  if (DAT_100fc8ef0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb1570);
  return;
}



/* Address: 0x100482040 | FUN_100482040 */

long * FUN_100482040(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  int iVar9;
  Date DVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar11 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar11;
    iVar9 = *(int *)(param_3 + 0x14);
    DVar10 = Foundation::Date::typeMetadataAccessor();
    pcVar13 = *(code **)(*(long *)(DVar10.unknown + -8) + 0x10);
    _swift_bridgeObjectRetain(lVar11);
    (*pcVar13)((long)param_1 + (long)iVar9,(long)param_2 + (long)iVar9,DVar10.unknown);
    iVar9 = *(int *)(param_3 + 0x1c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar3 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar3;
    iVar9 = *(int *)(param_3 + 0x24);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
    uVar4 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar4;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    iVar9 = *(int *)(param_3 + 0x2c);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
    uVar6 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar6;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar9);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar9);
    uVar7 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar7;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
  }
  else {
    lVar11 = *param_2;
    *param_1 = lVar11;
    uVar12 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar11 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10048217c | FUN_10048217c */

void FUN_10048217c(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  iVar1 = *(int *)(param_2 + 0x14);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x18) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x1c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x20) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x24) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x28) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + *(int *)(param_2 + 0x2c) + 8));
  return;
}



/* Address: 0x100482228 | FUN_100482228 */

undefined8 * FUN_100482228(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  Date DVar9;
  code *pcVar10;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  iVar8 = *(int *)(param_3 + 0x14);
  DVar9 = Foundation::Date::typeMetadataAccessor();
  pcVar10 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  (*pcVar10)((long)param_1 + (long)iVar8,(long)param_2 + (long)iVar8,DVar9.unknown);
  iVar8 = *(int *)(param_3 + 0x1c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar3 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  iVar8 = *(int *)(param_3 + 0x24);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar4 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar4;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar8 = *(int *)(param_3 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar6 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar6;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar8);
  param_2 = (undefined8 *)((long)param_2 + (long)iVar8);
  uVar7 = param_2[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar7;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Address: 0x100482338 | FUN_100482338 */

undefined8 * FUN_100482338(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  Date DVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar5 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x18))
            ((long)param_1 + (long)iVar3,(long)param_2 + (long)iVar3,DVar4.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *puVar1 = *puVar2;
  uVar5 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  *puVar1 = *param_2;
  uVar5 = puVar1[1];
  puVar1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x1004824b4 | FUN_1004824b4 */

undefined8 * FUN_1004824b4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  Date DVar4;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  iVar1 = *(int *)(param_3 + 0x14);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,DVar4.unknown);
  iVar1 = *(int *)(param_3 + 0x1c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  iVar1 = *(int *)(param_3 + 0x24);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  iVar1 = *(int *)(param_3 + 0x2c);
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar5 = *puVar2;
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  param_2 = (undefined8 *)((long)param_2 + (long)iVar1);
  uVar5 = *param_2;
  puVar2 = (undefined8 *)((long)param_1 + (long)iVar1);
  puVar2[1] = param_2[1];
  *puVar2 = uVar5;
  return param_1;
}



/* Address: 0x10048254c | FUN_10048254c */

undefined8 * FUN_10048254c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 uVar5;
  Date DVar6;
  
  uVar3 = param_2[1];
  uVar5 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  iVar4 = *(int *)(param_3 + 0x14);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x28))
            ((long)param_1 + (long)iVar4,(long)param_2 + (long)iVar4,DVar6.unknown);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x20));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x20));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  uVar3 = puVar2[1];
  uVar5 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  uVar3 = param_2[1];
  uVar5 = puVar1[1];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  _swift_bridgeObjectRelease(uVar5);
  return param_1;
}



/* Address: 0x100482658 | FUN_100482658 */

void FUN_100482658(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100482664 | FUN_100482664 */

ulong FUN_100482664(long param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = param_1 + *(int *)(param_3 + 0x14);
                    /* WARNING: Could not recover jumptable at 0x0001004826dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(uVar2,param_2,DVar1.unknown);
  return uVar2;
}



/* Address: 0x1004826e0 | FUN_1004826e0 */

void FUN_1004826e0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004826ec | FUN_1004826ec */

void FUN_1004826ec(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010048275c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x14),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x100482760 | FUN_100482760 */

undefined1  [16] FUN_100482760(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_60;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_60 = &DAT_100c4d948;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_50 = &DAT_100c4d948;
    local_48 = &DAT_100c4d948;
    puStack_40 = &DAT_100c4d948;
    local_38 = &DAT_100c4d948;
    puStack_30 = &DAT_100c4d960;
    local_28 = &DAT_100c4d948;
    _swift_initStructMetadata(param_1,0x100,8,&local_60,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x1004827e8 | FUN_1004827e8 */

undefined8 FUN_1004827e8(long param_1,long param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 != 0) && (param_1 != param_2)) {
      puVar4 = (undefined8 *)(param_2 + 0x28);
      puVar5 = (undefined8 *)(param_1 + 0x28);
      do {
        if (((undefined *)puVar5[-1] != (undefined *)puVar4[-1] ||
             (undefined *)*puVar5 != (undefined *)*puVar4) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)puVar5[-1],(undefined *)*puVar5,
                               (_StringComparisonResult)(__int8)(undefined *)puVar4[-1]), !bVar1))
        goto LAB_100482850;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    uVar2 = 1;
  }
  else {
LAB_100482850:
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x10048286c | FUN_10048286c */

long FUN_10048286c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  lVar1 = _TtC8PasteMCP11DCRRegistry::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar2 = 0x7369676552524344;
  FUN_1000d4624(0x7369676552524344,0xeb00000000797274);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _TtC8PasteMCP11DCRRegistry::telemetry;
  puVar3 = &DAT_100c4d978;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c08;
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  FUN_100011090(param_1,unaff_x20 + _TtC8PasteMCP11DCRRegistry::fileURL,&DAT_100fc7ce0,
                &DAT_100c4d030);
  uVar2 = param_1;
  FUN_100484160();
  FUN_100005808(param_1,&DAT_100fc7ce0,&DAT_100c4d030);
  *(undefined8 *)(unaff_x20 + 0x70) = uVar2;
  return unaff_x20;
}



/* Address: 0x100482990 | FUN_100482990 */

void FUN_100482990(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100482998 | FUN_100482998 */

void FUN_100482998(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100484870();
  iVar1 = *(int *)(lVar2 + 0x1c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004829e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x1004829e4 | FUN_1004829e4 */

undefined1  [16] FUN_1004829e4(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar3 = *unaff_x20;
  puVar5 = (undefined1 *)0xec00000073495255;
  uVar4 = 0x7463657269646572;
  if (bVar3 != 2) {
    puVar5 = (undefined1 *)0xe900000000000074;
    uVar4 = 0x4164657461657263;
  }
  uVar1 = 0x4449746e65696c63;
  if (bVar3 != 0) {
    uVar1 = 0x614e746e65696c63;
  }
  puVar2 = &DAT_e800000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0xea0000000000656d;
  }
  if (bVar3 < 2) {
    puVar5 = puVar2;
    uVar4 = uVar1;
  }
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x100482a70 | FUN_100482a70 */

void FUN_100482a70(undefined1 *param_1,undefined1 param_2)

{
  FUN_100485010();
  *param_1 = param_2;
  return;
}



/* Address: 0x100482a94 | FUN_100482a94 */

String FUN_100482a94(void)

{
  String SVar1;
  
  FUN_100484884();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100482abc | FUN_100482abc */

String FUN_100482abc(void)

{
  String SVar1;
  
  FUN_100484884();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}


