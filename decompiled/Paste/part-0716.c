/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007d86dc | FUN_1007d86dc */

undefined1  [16] FUN_1007d86dc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x29;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x402874656b637542;
  return auVar1;
}



/* Address: 0x1007d8758 | FUN_1007d8758 */

undefined1  [16] FUN_1007d8758(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x29;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x402874656b637542;
  return auVar1;
}



/* Address: 0x1007d87d8 | FUN_1007d87d8 */

String FUN_1007d87d8(void)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  void *pvVar4;
  __int64 _Var5;
  undefined *puVar7;
  _StringGuts _Var8;
  char *pcVar9;
  void *in_x3;
  undefined *puVar10;
  ulong uVar11;
  undefined8 *unaff_x20;
  long lVar12;
  String SVar13;
  Character repeating;
  String SVar14;
  Character repeating_00;
  String SVar15;
  Character repeating_01;
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
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String local_70;
  void *pvVar6;
  
  local_70.str = (char *)unaff_x20[2];
  SVar13 = Swift::CustomStringConvertible::get_description();
  pvVar6 = SVar13.bridgeObject;
  pvVar4 = (void *)Swift::String::get_count(SVar13);
  if ((long)pvVar4 < 4) {
    pcVar9 = (char *)(4 - (long)pvVar4);
    if (SBORROW8(4,(long)pvVar4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8b6c);
      (*pcVar3)();
    }
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = (char *)0x20;
    local_70 = Swift::String::init(repeating,(__int64)pcVar9);
    pvVar4 = local_70.bridgeObject;
    _swift_bridgeObjectRetain(pvVar4);
    SVar15.bridgeObject = in_x3;
    SVar15.str = pcVar9;
    Swift::String::append(SVar13,SVar15);
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease(pvVar6);
    pvVar4 = pvVar6;
    SVar13 = local_70;
  }
  if (unaff_x20[3] == 0) {
    SVar14.bridgeObject = &DAT_e400000000000000;
    SVar14.str = (char *)0x6c696e20;
  }
  else {
    uVar11 = -1L << (*(ulong *)*unaff_x20 & 0x3f);
    uVar1 = (uVar11 ^ unaff_x20[3] ^ 0xffffffffffffffff) + ((long)((ulong *)*unaff_x20)[1] >> 6);
    uVar2 = 0;
    if (~uVar11 <= uVar1) {
      uVar2 = ~uVar11;
    }
    local_70.str = (char *)(uVar1 - uVar2);
    SVar14 = Swift::CustomStringConvertible::get_description();
    pvVar6 = SVar14.bridgeObject;
    pvVar4 = (void *)Swift::String::get_count(SVar14);
    if ((long)pvVar4 < 4) {
      pcVar9 = (char *)(4 - (long)pvVar4);
      if (SBORROW8(4,(long)pvVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8b74);
        (*pcVar3)();
      }
      repeating_00.bridgeObject = (void *)0xe100000000000000;
      repeating_00.str = (char *)0x20;
      local_70 = Swift::String::init(repeating_00,(__int64)pcVar9);
      pvVar4 = local_70.bridgeObject;
      _swift_bridgeObjectRetain(pvVar4);
      SVar17.bridgeObject = in_x3;
      SVar17.str = pcVar9;
      Swift::String::append(SVar14,SVar17);
      _swift_bridgeObjectRelease(pvVar4);
      _swift_bridgeObjectRelease(pvVar6);
      pvVar4 = pvVar6;
      SVar14 = local_70;
    }
  }
  local_70.str = (char *)unaff_x20[4];
  FUN_1007d8b74();
  pcVar9 = (char *)0x0;
  puVar10 = PTR___type_metadata_for_Swift_UInt64_100eade90;
  SVar15 = Swift::String::_init(&local_70,2,0,PTR___type_metadata_for_Swift_UInt64_100eade90,pvVar4)
  ;
  puVar7 = SVar15.bridgeObject;
  lVar12 = unaff_x20[5];
  _Var8.unknown = puVar7;
  _Var5 = Swift::String::get_count(SVar15);
  if (_Var5 < lVar12) {
    pcVar9 = (char *)(lVar12 - _Var5);
    if (SBORROW8(lVar12,_Var5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8b70);
      (*pcVar3)();
    }
    repeating_01.bridgeObject = (void *)0xe100000000000000;
    repeating_01.str = &DAT_00000030;
    local_70 = Swift::String::init(repeating_01,(__int64)pcVar9);
    pvVar4 = local_70.bridgeObject;
    _swift_bridgeObjectRetain(pvVar4);
    SVar22.bridgeObject = puVar10;
    SVar22.str = pcVar9;
    _Var8.unknown = puVar7;
    Swift::String::append(SVar15,SVar22);
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease(puVar7);
    SVar15 = local_70;
  }
  local_70.str = (char *)0x0;
  local_70.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x44,_Var8);
  SVar16.bridgeObject = (void *)0x8000000100db1a60;
  SVar16.str = (char *)0xd000000000000016;
  SVar23.bridgeObject = puVar10;
  SVar23.str = pcVar9;
  Swift::String::append(SVar16,SVar23);
  SVar17 = Swift::CustomStringConvertible::get_description();
  SVar24.bridgeObject = puVar10;
  SVar24.str = pcVar9;
  Swift::String::append(SVar17,SVar24);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar18.bridgeObject = (void *)0xea0000000000203a;
  SVar18.str = (char *)0x74656b637562202c;
  SVar25.bridgeObject = puVar10;
  SVar25.str = pcVar9;
  Swift::String::append(SVar18,SVar25);
  SVar26.bridgeObject = puVar10;
  SVar26.str = pcVar9;
  Swift::String::append(SVar13,SVar26);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  SVar13.bridgeObject = (void *)0xe900000000000020;
  SVar13.str = (char *)0x3a65756c6176202c;
  SVar27.bridgeObject = puVar10;
  SVar27.str = pcVar9;
  Swift::String::append(SVar13,SVar27);
  SVar28.bridgeObject = puVar10;
  SVar28.str = pcVar9;
  Swift::String::append(SVar14,SVar28);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  SVar19.bridgeObject = &DAT_e800000000000000;
  SVar19.str = (char *)0x203a73746962202c;
  SVar29.bridgeObject = puVar10;
  SVar29.str = pcVar9;
  Swift::String::append(SVar19,SVar29);
  SVar30.bridgeObject = puVar10;
  SVar30.str = pcVar9;
  Swift::String::append(SVar15,SVar30);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar20.bridgeObject = &SUB_e200000000000000;
  SVar20.str = (char *)0x2820;
  SVar31.bridgeObject = puVar10;
  SVar31.str = pcVar9;
  Swift::String::append(SVar20,SVar31);
  SVar13 = Swift::CustomStringConvertible::get_description();
  SVar32.bridgeObject = puVar10;
  SVar32.str = pcVar9;
  Swift::String::append(SVar13,SVar32);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  SVar21.bridgeObject = &DAT_e700000000000000;
  SVar21.str = (char *)0x29297374696220;
  SVar33.bridgeObject = puVar10;
  SVar33.str = pcVar9;
  Swift::String::append(SVar21,SVar33);
  return local_70;
}



/* Address: 0x1007d8b74 | FUN_1007d8b74 */

void FUN_1007d8b74(void)

{
  undefined *puVar1;
  
  if (DAT_100fe6630 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadea8;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadea8,
             PTR___type_metadata_for_Swift_UInt64_100eade90);
  DAT_100fe6630 = puVar1;
  return;
}



/* Address: 0x1007d8bb4 | thunk_FUN_1007d87d8 */

void thunk_FUN_1007d87d8(void)

{
  FUN_1007d87d8();
  return;
}



/* Address: 0x1007d8bb8 | FUN_1007d8bb8 */

ulong FUN_1007d8bb8(ulong *param_1)

{
  return *param_1 & 0x3f;
}



/* Address: 0x1007d8bc4 | FUN_1007d8bc4 */

long FUN_1007d8bc4(ulong *param_1)

{
  return 1L << (*param_1 & 0x3f);
}



/* Address: 0x1007d8bd4 | FUN_1007d8bd4 */

undefined1  [16] FUN_1007d8bd4(long param_1,ulong *param_2)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = (*param_2 & 0x3f) * param_1;
  auVar2._0_8_ = (long)uVar1 >> 6;
  auVar2._8_8_ = uVar1 & 0x3f;
  return auVar2;
}



/* Address: 0x1007d8bec | FUN_1007d8bec */

undefined8 FUN_1007d8bec(long param_1,undefined8 param_2,long param_3)

{
  return *(undefined8 *)(param_3 + param_1 * 8);
}



/* Address: 0x1007d8bf4 | FUN_1007d8bf4 */

ulong FUN_1007d8bf4(ulong *param_1)

{
  return ~(-1L << (*param_1 & 0x3f));
}



/* Address: 0x1007d8c08 | FUN_1007d8c08 */

long FUN_1007d8c08(ulong *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = (*param_1 & 0x3f) << (*param_1 & 0x3f);
  if (!SCARRY8(lVar3,0x40)) {
    lVar1 = lVar3 + 0x7e;
    if (0 < lVar3 + 0x40) {
      lVar1 = lVar3 + 0x3f;
    }
    return lVar1 >> 6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8c34);
  (*pcVar2)();
}



/* Address: 0x1007d8c34 | FUN_1007d8c34 */

long FUN_1007d8c34(long param_1,ulong *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8c6c);
    (*pcVar2)();
  }
  lVar3 = (*param_2 & 0x3f) << (*param_2 & 0x3f);
  if (!SCARRY8(lVar3,0x40)) {
    lVar1 = lVar3 + 0x7e;
    if (0 < lVar3 + 0x40) {
      lVar1 = lVar3 + 0x3f;
    }
    lVar3 = 0;
    if (param_1 + 1 != lVar1 >> 6) {
      lVar3 = param_1 + 1;
    }
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8c70);
  (*pcVar2)();
}



/* Address: 0x1007d8c70 | FUN_1007d8c70 */

undefined1  [16] FUN_1007d8c70(ulong param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  if (param_1 != 0) {
    uVar3 = -1L << (*param_2 & 0x3f);
    uVar1 = (uVar3 ^ param_1 ^ 0xffffffffffffffff) + ((long)param_2[1] >> 6);
    uVar2 = 0;
    if (~uVar3 <= uVar1) {
      uVar2 = ~uVar3;
    }
    auVar4._0_8_ = uVar1 - uVar2;
    auVar4._8_8_ = 0;
    return auVar4;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1007d8cac | FUN_1007d8cac */

ulong FUN_1007d8cac(long param_1,char param_2,ulong *param_3)

{
  ulong uVar1;
  
  if (param_2 == '\x01') {
    return 0;
  }
  uVar1 = -1L << (*param_3 & 0x3f);
  param_1 = param_1 - ((long)param_3[1] >> 6);
  return uVar1 ^ (param_1 >> 0x3f & (uVar1 ^ 0xffffffffffffffff)) + param_1 ^ 0xffffffffffffffff;
}



/* Address: 0x1007d8ce4 | FUN_1007d8ce4 */

void FUN_1007d8ce4(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  *(undefined8 *)(param_4 + param_2 * 8) = param_1;
  return;
}



/* Address: 0x1007d8cec | FUN_1007d8cec */

ulong FUN_1007d8cec(long param_1)

{
  return *(ulong *)(param_1 + 8) & 0x3f;
}



/* Address: 0x1007d8cf8 | FUN_1007d8cf8 */

long FUN_1007d8cf8(long param_1)

{
  return *(long *)(param_1 + 8) >> 6;
}



/* Address: 0x1007d8d04 | FUN_1007d8d04 */

void FUN_1007d8d04(long param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = 1L << (*param_2 & 0x3f);
  uVar2 = lVar4 - 1;
  if (!SBORROW8(lVar4,1)) {
    param_1 = (uVar2 & param_1 >> 0x3f) + param_1;
    uVar1 = 0;
    if ((long)uVar2 <= param_1) {
      uVar1 = uVar2;
    }
    param_2[1] = param_2[1] & 0x3f | (param_1 - uVar1) * 0x40;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8d40);
  (*pcVar3)();
}



/* Address: 0x1007d8d40 | FUN_1007d8d40 */

undefined1  [16] FUN_1007d8d40(long *param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  *param_1 = *(long *)(param_2 + 8) >> 6;
  param_1[1] = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1007d8d60;
  return auVar1;
}



/* Address: 0x1007d8d60 | FUN_1007d8d60 */

void FUN_1007d8d60(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong *puVar4;
  long lVar5;
  
  puVar4 = (ulong *)param_1[1];
  lVar5 = 1L << (*puVar4 & 0x3f);
  uVar2 = lVar5 - 1;
  if ((param_2 & 1) == 0) {
    if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8db4);
      (*pcVar3)();
    }
  }
  else if (SBORROW8(lVar5,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d8d84);
    (*pcVar3)();
  }
  lVar5 = (uVar2 & *param_1 >> 0x3f) + *param_1;
  uVar1 = 0;
  if ((long)uVar2 <= lVar5) {
    uVar1 = uVar2;
  }
  puVar4[1] = puVar4[1] & 0x3f | (lVar5 - uVar1) * 0x40;
  return;
}



/* Address: 0x1007d8db4 | FUN_1007d8db4 */

long FUN_1007d8db4(ulong *param_1)

{
  return (*param_1 & 0x3f) << (*param_1 & 0x3f);
}



/* Address: 0x1007d8dc4 | FUN_1007d8dc4 */

ulong FUN_1007d8dc4(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  if ((*param_1 & 0x3f) < 5) {
    return 0xf;
  }
  lVar3 = 1L << (*param_1 & 0x3f);
  uVar1 = lVar3 * 3;
  if (SUB168(SEXT816(lVar3) * SEXT816(3),8) == (long)uVar1 >> 0x3f) {
    return uVar1 >> 2;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8e04);
  (*pcVar2)();
}



/* Address: 0x1007d8e04 | FUN_1007d8e04 */

long FUN_1007d8e04(long param_1,ulong *param_2)

{
  long lVar1;
  code *pcVar2;
  
  if (!SCARRY8(param_1,1)) {
    lVar1 = 0;
    if (param_1 + 1 != 1L << (*param_2 & 0x3f)) {
      lVar1 = param_1 + 1;
    }
    return lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8e28);
  (*pcVar2)();
}



/* Address: 0x1007d8e28 | FUN_1007d8e28 */

long FUN_1007d8e28(long param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (param_1 == 0) {
    param_1 = 1L << (*param_2 & 0x3f);
  }
  if (!SBORROW8(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007d8e48);
  (*pcVar1)();
}



/* Address: 0x1007d8e48 | FUN_1007d8e48 */

long FUN_1007d8e48(long param_1,ulong *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = (*param_2 & 0x3f) << (*param_2 & 0x3f);
    if (!SCARRY8(lVar3,0x40)) {
      lVar1 = lVar3 + 0x7e;
      if (0 < lVar3 + 0x40) {
        lVar1 = lVar3 + 0x3f;
      }
      return (lVar1 >> 6) + -1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8e8c);
    (*pcVar2)();
  }
  if (!SBORROW8(param_1,1)) {
    return param_1 + -1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8e88);
  (*pcVar2)();
}



/* Address: 0x1007d8e8c | FUN_1007d8e8c */

undefined1  [16] FUN_1007d8e8c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined1 auVar1 [16];
  
  param_1[1] = param_2;
  param_1[2] = param_4;
  *param_1 = *(undefined8 *)(param_4 + param_2 * 8);
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1007d8eac;
  return auVar1;
}



/* Address: 0x1007d8eac | FUN_1007d8eac */

void FUN_1007d8eac(undefined8 *param_1)

{
  *(undefined8 *)(param_1[2] + param_1[1] * 8) = *param_1;
  return;
}



/* Address: 0x1007d8ebc | FUN_1007d8ebc */

ulong FUN_1007d8ebc(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  uVar3 = *param_2 & 0x3f;
  uVar4 = uVar3 * param_1;
  lVar6 = (long)uVar4 >> 6;
  uVar5 = *(ulong *)(param_3 + lVar6 * 8) >> (uVar4 & 0x3f);
  uVar4 = 0x40 - (uVar4 & 0x3f);
  if (uVar4 < uVar3) {
    lVar7 = uVar3 << uVar3;
    if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8f38);
      (*pcVar2)();
    }
    lVar1 = lVar7 + 0x7e;
    if (0 < lVar7 + 0x40) {
      lVar1 = lVar7 + 0x3f;
    }
    lVar7 = 0;
    if (lVar6 + 1 != lVar1 >> 6) {
      lVar7 = lVar6 + 1;
    }
    uVar5 = *(long *)(param_3 + lVar7 * 8) << (uVar4 & 0x3f) |
            uVar5 & (-1L << (uVar4 & 0x3f) ^ 0xffffffffffffffffU);
  }
  return uVar5 & (-1L << uVar3 ^ 0xffffffffffffffffU);
}



/* Address: 0x1007d8f38 | FUN_1007d8f38 */

void FUN_1007d8f38(ulong param_1,long param_2,ulong *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = (*param_3 & 0x3f) * param_2;
  lVar3 = (long)uVar4 >> 6;
  *(ulong *)(param_4 + lVar3 * 8) =
       ((-1L << (*param_3 & 0x3f)) + 1 << (uVar4 & 0x3f)) - 1U & *(ulong *)(param_4 + lVar3 * 8) |
       param_1 << (uVar4 & 0x3f);
  uVar5 = *param_3 & 0x3f;
  uVar4 = 0x40 - (uVar4 & 0x3f);
  if (uVar4 < uVar5) {
    lVar6 = uVar5 << uVar5;
    if (SCARRY8(lVar6,0x40)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d8fd8);
      (*pcVar2)();
    }
    lVar1 = lVar6 + 0x7e;
    if (0 < lVar6 + 0x40) {
      lVar1 = lVar6 + 0x3f;
    }
    lVar6 = 0;
    if (lVar3 + 1 != lVar1 >> 6) {
      lVar6 = lVar3 + 1;
    }
    *(ulong *)(param_4 + lVar6 * 8) =
         *(ulong *)(param_4 + lVar6 * 8) & -1L << ((ulong)(uint)((int)*param_3 - (int)uVar4) & 0x3f)
         | param_1 >> (uVar4 & 0x3f);
  }
  return;
}



/* Address: 0x1007d8fd8 | FUN_1007d8fd8 */

undefined1  [16]
FUN_1007d8fd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[1] = param_2;
  FUN_1007d8ebc(param_2,param_3,param_4);
  *param_1 = param_2;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1007d901c;
  return auVar1;
}



/* Address: 0x1007d901c | FUN_1007d901c */

void FUN_1007d901c(undefined8 *param_1)

{
  FUN_1007d8f38(*param_1,param_1[1],param_1[2],param_1[3]);
  return;
}



/* Address: 0x1007d9028 | FUN_1007d9028 */

bool FUN_1007d9028(long param_1)

{
  FUN_1007d8ebc();
  return param_1 != 0;
}



/* Address: 0x1007d9044 | FUN_1007d9044 */

void FUN_1007d9044(void)

{
  FUN_1007d8ebc();
  return;
}



/* Address: 0x1007d9098 | FUN_1007d9098 */

void FUN_1007d9098(long param_1,char param_2,undefined8 param_3,ulong *param_4,undefined8 param_5)

{
  ulong uVar1;
  
  if (param_2 == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = -1L << (*param_4 & 0x3f);
    param_1 = param_1 - ((long)param_4[1] >> 6);
    uVar1 = uVar1 ^ (param_1 >> 0x3f & (uVar1 ^ 0xffffffffffffffff)) + param_1 ^ 0xffffffffffffffff;
  }
  FUN_1007d8f38(uVar1,param_3,param_4,param_5);
  return;
}



/* Address: 0x1007d90dc | FUN_1007d90dc */

undefined1  [16] FUN_1007d90dc(undefined8 *param_1,ulong param_2,ulong *param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  plVar3 = (long *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar3 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x45b5);
  }
  *param_1 = plVar3;
  plVar3[3] = (long)param_3;
  plVar3[4] = param_4;
  plVar3[2] = param_2;
  FUN_1007d8ebc(param_2,param_3,param_4);
  if (param_2 == 0) {
    lVar6 = 0;
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    uVar5 = -1L << (*param_3 & 0x3f);
    uVar1 = (uVar5 ^ param_2 ^ 0xffffffffffffffff) + ((long)param_3[1] >> 6);
    uVar2 = 0;
    if (~uVar5 <= uVar1) {
      uVar2 = ~uVar5;
    }
    lVar6 = uVar1 - uVar2;
  }
  *plVar3 = lVar6;
  *(undefined1 *)(plVar3 + 1) = uVar4;
  auVar7._8_8_ = plVar3;
  auVar7._0_8_ = FUN_1007d91a0;
  return auVar7;
}



/* Address: 0x1007d91a0 | FUN_1007d91a0 */

void FUN_1007d91a0(undefined8 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = (long *)*param_1;
  puVar2 = (ulong *)plVar4[3];
  if ((char)plVar4[1] == '\x01') {
    uVar1 = 0;
  }
  else {
    uVar1 = -1L << (*puVar2 & 0x3f);
    lVar3 = *plVar4 - ((long)puVar2[1] >> 6);
    uVar1 = uVar1 ^ (lVar3 >> 0x3f & (uVar1 ^ 0xffffffffffffffff)) + lVar3 ^ 0xffffffffffffffff;
  }
  FUN_1007d8f38(uVar1,plVar4[2],puVar2,plVar4[4]);
  _free(plVar4);
  return;
}



/* Address: 0x1007d9208 | FUN_1007d9208 */

undefined8
FUN_1007d9208(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100fe6638;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_1;
  FUN_1000f7830(&DAT_100fe6638,&DAT_100c7a830);
  FUN_10068330c(local_48,FUN_1007d9298,auStack_80,param_2,param_5,puVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return local_48[0];
}



/* Address: 0x1007d9298 | FUN_1007d9298 */

void FUN_1007d9298(undefined8 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_1007d92dc();
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = param_2;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1007d92dc | FUN_1007d92dc */

long FUN_1007d92dc(undefined8 param_1,long param_2,undefined8 param_3,ulong *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  ulong uVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong *local_b0 [3];
  ulong uStack_98;
  long local_78;
  char local_70;
  
  lVar8 = *(long *)(param_6 + -8);
  lVar6 = (long)local_b0 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = Swift::Hashable::_rawHashValue(*param_4);
  lVar4 = 1L << (*param_4 & 0x3f);
  if (SBORROW8(lVar4,1)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1007d9460);
    (*pcVar9)();
  }
  FUN_1007d7944(local_b0,lVar4 - 1U & uVar3,param_4,param_5);
  if (local_70 != '\x01') {
    lVar7 = *(long *)(lVar8 + 0x48);
    pcVar9 = *(code **)(lVar8 + 0x10);
    lVar4 = local_78;
    while( true ) {
      (*pcVar9)(lVar6,param_2 + lVar7 * lVar4,param_6);
      bVar2 = Swift::Equatable::___infix(lVar6,param_1,param_6,*(undefined8 *)(param_7 + 8));
      (**(code **)(lVar8 + 8))(lVar6,param_6);
      local_78 = lVar4;
      if (bVar2) break;
      FUN_1007d7b60();
      if (uStack_98 == 0) {
        return 0;
      }
      uVar5 = -1L << (*local_b0[0] & 0x3f);
      uVar3 = (uVar5 ^ uStack_98 ^ 0xffffffffffffffff) + ((long)local_b0[0][1] >> 6);
      uVar1 = 0;
      if (~uVar5 <= uVar3) {
        uVar1 = ~uVar5;
      }
      lVar4 = uVar3 - uVar1;
    }
  }
  return local_78;
}



/* Address: 0x1007d9460 | FUN_1007d9460 */

long FUN_1007d9460(long param_1,ulong *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *param_2;
  lVar6 = 1L << (uVar5 & 0x3f);
  do {
    lVar2 = lVar6;
    if (param_1 != 0) {
      lVar2 = param_1;
    }
    param_1 = lVar2 + -1;
    if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d9534);
      (*pcVar3)();
    }
    uVar8 = param_1 * (uVar5 & 0x3f);
    lVar4 = (long)uVar8 >> 6;
    uVar9 = *(ulong *)(param_3 + lVar4 * 8) >> (uVar8 & 0x3f);
    uVar8 = 0x40 - (uVar8 & 0x3f);
    if (uVar8 < (uVar5 & 0x3f)) {
      lVar7 = (uVar5 & 0x3f) << (uVar5 & 0x3f);
      if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d9538);
        (*pcVar3)();
      }
      lVar1 = lVar7 + 0x7e;
      if (0 < lVar7 + 0x40) {
        lVar1 = lVar7 + 0x3f;
      }
      lVar7 = 0;
      if (lVar4 + 1 != lVar1 >> 6) {
        lVar7 = lVar4 + 1;
      }
      uVar9 = *(long *)(param_3 + lVar7 * 8) << (uVar8 & 0x3f) |
              uVar9 & (-1L << (uVar8 & 0x3f) ^ 0xffffffffffffffffU);
    }
  } while ((uVar9 & lVar6 - 1U) != 0);
  if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1007d953c);
    (*pcVar3)();
  }
  lVar6 = 0;
  if (lVar2 != 1L << (uVar5 & 0x3f)) {
    lVar6 = lVar2;
  }
  return lVar6;
}



/* Address: 0x1007d953c | FUN_1007d953c */

void FUN_1007d953c(ulong param_1,code *param_2,undefined8 param_3,ulong *param_4,undefined8 param_5)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar3 = param_1;
  FUN_1007d7748();
  FUN_1007d7b60();
  if (uVar3 != 0) {
    uVar4 = param_1;
    FUN_1007d9460(param_1,param_4,param_5);
    do {
      uVar6 = -1L << (*param_4 & 0x3f);
      uVar5 = (uVar6 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_4[1] >> 6);
      uVar1 = 0;
      if (~uVar6 <= uVar5) {
        uVar1 = ~uVar6;
      }
      uVar5 = uVar5 - uVar1;
      (*param_2)(uVar5,*param_4);
      lVar7 = 1L << (*param_4 & 0x3f);
      uVar1 = lVar7 - 1;
      if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1007d96c8);
        (*pcVar2)();
      }
      uVar5 = uVar1 & uVar5;
      if ((long)param_1 < (long)uVar4) {
        if ((long)uVar4 <= (long)uVar5 || (long)uVar5 <= (long)param_1) {
LAB_1007d95c4:
          uVar6 = -1L << (*param_4 & 0x3f);
          uVar5 = (uVar6 ^ uVar3 ^ 0xffffffffffffffff) + ((long)param_4[1] >> 6);
          lVar7 = 0;
          if (~uVar6 <= uVar5) {
            lVar7 = uVar6 + 1;
          }
          lVar7 = (uVar5 - ((long)param_4[1] >> 6)) + lVar7;
          FUN_1007d8f38((uVar1 & lVar7 >> 0x3f) + lVar7 ^ uVar1,param_1,param_4,param_5);
        }
      }
      else if ((long)uVar4 <= (long)uVar5 && (long)uVar5 <= (long)param_1) goto LAB_1007d95c4;
      FUN_1007d7b60();
    } while (uVar3 != 0);
  }
  FUN_1007d8f38(0,param_1,param_4,param_5);
  return;
}



/* Address: 0x1007d96c8 | FUN_1007d96c8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007d9e10 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007d96c8(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  Optional OVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  __int64 _Var10;
  undefined *puVar11;
  ulong uVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  ulong *puVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long lVar28;
  long lVar29;
  String SVar30;
  undefined8 uStack_180;
  undefined4 auStack_178 [2];
  undefined1 auStack_170 [8];
  undefined1 *local_168;
  long local_160;
  undefined *local_158;
  long local_150;
  long local_148;
  undefined *local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  code *local_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  code *local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  ulong *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong *local_80;
  ulong local_78;
  undefined1 local_70;
  
  puVar11 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar28 = *(long *)(*(long *)(param_6 + 8) + 8);
  lVar7 = 0xff;
  local_f8 = param_6;
  local_f0 = param_2;
  local_b8 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,lVar28,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar9 = lVar28;
  _swift_getAssociatedConformanceWitness
            (lVar28,param_5,lVar7,puVar11,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_158 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  local_160 = *(long *)(local_158 + -8);
  lVar16 = *(long *)(local_160 + 0x40);
  lVar8 = 0;
  local_168 = auStack_170 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar28 + 8),param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_b0 = *(long *)(lVar8 + -8);
  uVar17 = *(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = (long)(auStack_170 + -(lVar16 + 0xfU & 0xfffffffffffffff0)) - uVar17;
  lVar16 = local_c8 - uVar17;
  local_130 = lVar8;
  local_c0 = lVar16;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  uVar17 = *(long *)(*(long *)(CONCAT71((int7)((ulong)lVar8 >> 8),OVar5.value) + -8) + 0x40) + 0xfU
           & 0xfffffffffffffff0;
  local_e8 = (code *)(lVar16 - uVar17);
  pcVar18 = local_e8 + -uVar17;
  lVar8 = 0;
  local_e0 = pcVar18;
  _swift_getAssociatedTypeWitness
            (0,lVar28,param_5,puVar11,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar16 = (long)pcVar18 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_120 = lVar16;
  local_110 = lVar9;
  local_140 = (undefined *)Swift::PartialRangeUpTo::typeMetadataAccessor();
  local_148 = *(long *)(local_140 + -8);
  lVar16 = lVar16 - (*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar28;
  local_150 = lVar16;
  _swift_getAssociatedConformanceWitness
            (lVar28,param_5,lVar8,puVar11,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  local_128 = *(long *)(lVar9 + 8);
  lVar9 = 0;
  local_118 = lVar8;
  _swift_getAssociatedTypeWitness
            (0,local_128,lVar8,puVar3,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_138 = *(long *)(lVar9 + -8);
  uVar17 = *(long *)(local_138 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = (code *)(lVar16 - uVar17);
  local_d0 = local_d8 + -uVar17;
  lVar29 = *(long *)(lVar7 + -8);
  uVar17 = *(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)local_d0 - uVar17;
  lVar26 = lVar16 - uVar17;
  local_a8 = lVar9;
  Swift::Collection::_get_startIndex();
  local_100 = lVar26;
  Swift::RandomAccessCollection::_index(lVar16);
  local_108 = *(code **)(lVar29 + 8);
  local_f8 = lVar7;
  (*local_108)(lVar16,lVar7);
  _Var10 = Swift::Collection::get_count();
  lVar8 = local_f8;
  lVar7 = local_100;
  lVar9 = local_110;
  if (param_1 < _Var10 / 2) {
    lVar19 = 1L << (*param_3 & 0x3f);
    lVar2 = lVar19 + -1;
    if (SBORROW8(lVar19,1)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da38c);
      (*pcVar18)();
    }
    lVar22 = (long)param_3[1] >> 6;
    lVar1 = lVar2;
    if (-2 < lVar22) {
      lVar1 = 0;
    }
    lVar1 = lVar22 + lVar1 + 1;
    lVar22 = 0;
    if (lVar2 <= lVar1) {
      lVar22 = lVar2;
    }
    param_3[1] = param_3[1] & 0x3f | (lVar1 - lVar22) * 0x40;
    if ((*param_3 & 0x3f) < 5) {
      if (5 < param_1) goto LAB_1007da120;
    }
    else {
      if (SUB168(SEXT816(lVar19) * SEXT816(3),8) != lVar19 * 3 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da398);
        (*pcVar18)();
      }
      if ((long)((ulong)(lVar19 * 3) / 0xc) < param_1) {
LAB_1007da120:
        local_70 = 0;
        local_90 = 0;
        uVar12 = 0;
        puVar24 = param_3;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_1007d7748();
        uVar17 = 0;
        local_88 = uVar12;
        local_80 = puVar24;
        local_78 = param_4;
        do {
          uVar12 = local_88;
          if (local_88 != 0) {
            uVar21 = ~(-1L << (*param_3 & 0x3f));
            uVar25 = ((long)param_3[1] >> 6) + (local_88 ^ uVar21);
            uVar27 = 0;
            if (uVar21 <= uVar25) {
              uVar27 = uVar21;
            }
            lVar9 = uVar25 - uVar27;
            if (lVar9 <= param_1) {
              if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da37c);
                (*pcVar18)();
              }
              lVar9 = (lVar9 + -1) - ((long)param_3[1] >> 6);
              uVar12 = (uVar21 & lVar9 >> 0x3f) + lVar9 ^ uVar21;
              uVar17 = (*param_3 & 0x3f) * uVar17;
              lVar9 = (long)uVar17 >> 6;
              *(ulong *)(local_98 + lVar9 * 8) =
                   *(ulong *)(local_98 + lVar9 * 8) ^ (uVar12 ^ local_88) << (uVar17 & 0x3f);
              uVar25 = *param_3 & 0x3f;
              uVar17 = 0x40 - (uVar17 & 0x3f);
              if (uVar17 < uVar25) {
                lVar7 = uVar25 << uVar25;
                if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da384);
                  (*pcVar18)();
                }
                lVar8 = lVar7 + 0x7e;
                if (0 < lVar7 + 0x40) {
                  lVar8 = lVar7 + 0x3f;
                }
                lVar7 = 0;
                if (lVar9 + 1 != lVar8 >> 6) {
                  lVar7 = lVar9 + 1;
                }
                *(ulong *)(local_98 + lVar7 * 8) =
                     *(ulong *)(local_98 + lVar7 * 8) ^ (uVar12 ^ local_88) >> (uVar17 & 0x3f);
              }
            }
          }
          local_88 = uVar12;
          FUN_1007d7b60();
          uVar17 = local_90;
          param_3 = local_a0;
        } while (local_90 != 0);
        goto LAB_1007da0ec;
      }
    }
    bVar6 = Swift::Equatable::___infix(local_100,local_100,local_f8,*(undefined8 *)(local_110 + 8));
    if (!bVar6) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da39c);
      (*pcVar18)();
    }
    (**(code **)(lVar29 + 0x10))(lVar16,lVar7,lVar8);
    lVar7 = local_150;
    Swift::PartialRangeUpTo::init(local_150,_Var10,lVar8,lVar9);
    puVar3 = local_140;
    puVar11 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
               local_140);
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_120,lVar7,param_5,puVar3,lVar28,puVar11);
    lVar8 = local_118;
    lVar9 = local_128;
    Swift::Sequence::_makeIterator();
    (**(code **)(local_148 + 8))(lVar7,puVar3);
    _swift_getAssociatedConformanceWitness
              (lVar9,lVar8,local_a8,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    pcVar18 = local_e0;
    local_c8 = lVar9;
    Swift::IteratorProtocol::_next();
    lVar9 = local_130;
    local_d8 = *(code **)(local_b0 + 0x30);
    pcVar20 = pcVar18;
    (*local_d8)(pcVar18,1,local_130);
    if ((int)pcVar20 != 1) {
      local_e8 = *(code **)(local_b0 + 0x20);
      lVar7 = 1;
      do {
        (*local_e8)(local_c0,pcVar18,lVar9);
        uVar17 = Swift::Hashable::_rawHashValue(*param_3);
        uVar25 = *param_3;
        uVar27 = 1L << (uVar25 & 0x3f);
        uVar12 = uVar27 - 1;
        if (SBORROW8(uVar27,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da364);
          (*pcVar18)();
        }
        uVar17 = uVar12 & uVar17;
        uVar21 = uVar17;
        puVar24 = param_3;
        uVar15 = param_4;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_1007d7748();
        pcVar18 = local_e0;
        if (uVar21 == 0) {
LAB_1007da3a4:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da3a8);
          (*pcVar18)();
        }
        uVar14 = ((long)param_3[1] >> 6) + (uVar21 ^ uVar12);
        uVar23 = 0;
        if (uVar12 <= uVar14) {
          uVar23 = uVar12;
        }
        lVar8 = uVar14 - uVar23;
        if (lVar8 == lVar7) {
          bVar6 = false;
        }
        else {
          bVar6 = false;
          uVar25 = uVar25 & 0x3f;
          lVar28 = uVar25 << uVar25;
          lVar16 = lVar28 + 0x7e;
          if (0 < lVar28 + 0x40) {
            lVar16 = lVar28 + 0x3f;
          }
          puVar13 = puVar24;
          uVar14 = uVar15;
          do {
            uVar17 = uVar17 + 1;
            if (uVar17 == uVar27) {
              if (bVar6) {
LAB_1007da3ac:
                *(undefined4 *)(lVar26 + -8) = 0;
                *(undefined8 *)(lVar26 + -0x10) = 0xd7;
                SVar30.bridgeObject = (void *)0x2;
                SVar30.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar30,(StaticString)0xd000000000000024,
                           0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da400);
                (*pcVar18)();
              }
              uVar17 = 0;
              bVar6 = true;
            }
            if ((long)uVar14 < (long)uVar25) {
              lVar29 = (long)(uVar17 * uVar25) >> 6;
              lVar8 = lVar29;
              if (uVar14 != 0) {
                if (SCARRY8(lVar28,0x40)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da35c);
                  (*pcVar18)();
                }
                lVar8 = 0;
                if (lVar29 + 1 != lVar16 >> 6) {
                  lVar8 = lVar29 + 1;
                }
              }
              uVar21 = uVar25 - uVar14;
              if (SBORROW8(uVar25,uVar14)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da348);
                (*pcVar18)();
              }
              lVar29 = 0x20;
              if (lVar8 != 2 || uVar25 != 5) {
                lVar29 = 0x40;
              }
              uVar15 = lVar29 - uVar21;
              if (SBORROW8(lVar29,uVar21)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da350);
                (*pcVar18)();
              }
              uVar23 = *(ulong *)(param_4 + lVar8 * 8);
              puVar13 = (ulong *)(uVar23 << (uVar14 & 0x3f) | (ulong)puVar13);
              puVar24 = (ulong *)(uVar23 >> (uVar21 & 0x3f));
            }
            else {
              uVar15 = uVar14 - uVar25;
              if (SBORROW8(uVar14,uVar25)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da344);
                (*pcVar18)();
              }
              puVar24 = (ulong *)((ulong)puVar13 >> uVar25);
            }
            uVar21 = (ulong)puVar13 & uVar12;
            if (uVar21 == 0) goto LAB_1007da3a4;
            uVar14 = ((long)param_3[1] >> 6) + (uVar21 ^ uVar12);
            uVar23 = 0;
            if (uVar12 <= uVar14) {
              uVar23 = uVar12;
            }
            lVar8 = uVar14 - uVar23;
            puVar13 = puVar24;
            uVar14 = uVar15;
          } while (lVar8 != lVar7);
        }
        local_70 = bVar6;
        local_90 = uVar17;
        local_88 = uVar21;
        local_80 = puVar24;
        local_78 = uVar15;
        if (SBORROW8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da36c);
          (*pcVar18)();
        }
        FUN_1007d7a1c(lVar8 + -1,0);
        (**(code **)(local_b0 + 8))(local_c0,lVar9);
        bVar6 = SCARRY8(lVar7,1);
        lVar7 = lVar7 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da370);
          (*pcVar18)();
        }
        Swift::IteratorProtocol::_next();
        pcVar20 = pcVar18;
        (*local_d8)(pcVar18,1,lVar9);
      } while ((int)pcVar20 != 1);
    }
    pcVar20 = *(code **)(local_138 + 8);
    pcVar18 = local_d0;
  }
  else {
    _Var10 = Swift::Collection::get_count();
    lVar8 = local_f8;
    lVar7 = local_100;
    lVar9 = local_110;
    if (SBORROW8(_Var10,param_1)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da390);
      (*pcVar18)();
    }
    lVar2 = (_Var10 - param_1) + -1;
    if (SBORROW8(_Var10 - param_1,1)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da394);
      (*pcVar18)();
    }
    if ((*param_3 & 0x3f) < 5) {
      if (5 < lVar2) goto LAB_1007da234;
    }
    else {
      lVar19 = 1L << (*param_3 & 0x3f);
      uVar17 = lVar19 * 3;
      if (SUB168(SEXT816(lVar19) * SEXT816(3),8) != (long)uVar17 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da3a0);
        (*pcVar18)();
      }
      if ((long)(uVar17 / 0xc) < lVar2) {
LAB_1007da234:
        local_70 = 0;
        local_90 = 0;
        uVar12 = 0;
        puVar24 = param_3;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_1007d7748();
        uVar17 = 0;
        local_88 = uVar12;
        local_80 = puVar24;
        local_78 = param_4;
        do {
          uVar12 = local_88;
          if (local_88 != 0) {
            uVar21 = ~(-1L << (*param_3 & 0x3f));
            uVar25 = ((long)param_3[1] >> 6) + (local_88 ^ uVar21);
            uVar27 = 0;
            if (uVar21 <= uVar25) {
              uVar27 = uVar21;
            }
            lVar9 = uVar25 - uVar27;
            if (param_1 <= lVar9) {
              if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da380);
                (*pcVar18)();
              }
              lVar9 = (lVar9 + 1) - ((long)param_3[1] >> 6);
              uVar12 = (uVar21 & lVar9 >> 0x3f) + lVar9 ^ uVar21;
              uVar17 = (*param_3 & 0x3f) * uVar17;
              lVar9 = (long)uVar17 >> 6;
              *(ulong *)(local_98 + lVar9 * 8) =
                   *(ulong *)(local_98 + lVar9 * 8) ^ (uVar12 ^ local_88) << (uVar17 & 0x3f);
              uVar25 = *param_3 & 0x3f;
              uVar17 = 0x40 - (uVar17 & 0x3f);
              if (uVar17 < uVar25) {
                lVar7 = uVar25 << uVar25;
                if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da388);
                  (*pcVar18)();
                }
                lVar8 = lVar7 + 0x7e;
                if (0 < lVar7 + 0x40) {
                  lVar8 = lVar7 + 0x3f;
                }
                lVar7 = 0;
                if (lVar9 + 1 != lVar8 >> 6) {
                  lVar7 = lVar9 + 1;
                }
                *(ulong *)(local_98 + lVar7 * 8) =
                     *(ulong *)(local_98 + lVar7 * 8) ^ (uVar12 ^ local_88) >> (uVar17 & 0x3f);
              }
            }
          }
          local_88 = uVar12;
          FUN_1007d7b60();
          uVar17 = local_90;
          param_3 = local_a0;
        } while (local_90 != 0);
        goto LAB_1007da0ec;
      }
    }
    bVar6 = Swift::Equatable::___infix(local_100,local_100,local_f8,*(undefined8 *)(local_110 + 8));
    if (!bVar6) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da3a4);
      (*pcVar18)();
    }
    (**(code **)(lVar29 + 0x10))(lVar16,lVar7,lVar8);
    puVar4 = local_168;
    Swift::PartialRangeFrom::init(_Var10,lVar8,lVar9);
    puVar3 = local_158;
    puVar11 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_158);
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_120,puVar4,param_5,puVar3,lVar28,puVar11);
    lVar7 = local_118;
    lVar9 = local_128;
    Swift::Sequence::_makeIterator();
    (**(code **)(local_160 + 8))(puVar4,puVar3);
    _swift_getAssociatedConformanceWitness
              (lVar9,lVar7,local_a8,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    pcVar18 = local_e8;
    local_c0 = lVar9;
    Swift::IteratorProtocol::_next();
    lVar9 = local_130;
    local_d0 = *(code **)(local_b0 + 0x30);
    pcVar20 = pcVar18;
    (*local_d0)(pcVar18,1,local_130);
    if ((int)pcVar20 != 1) {
      local_e0 = *(code **)(local_b0 + 0x20);
      do {
        (*local_e0)(local_c8,pcVar18,lVar9);
        uVar17 = Swift::Hashable::_rawHashValue(*param_3);
        uVar25 = *param_3;
        uVar27 = 1L << (uVar25 & 0x3f);
        uVar12 = uVar27 - 1;
        if (SBORROW8(uVar27,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da368);
          (*pcVar18)();
        }
        uVar17 = uVar12 & uVar17;
        uVar21 = uVar17;
        puVar24 = param_3;
        uVar15 = param_4;
        local_a0 = param_3;
        local_98 = param_4;
        FUN_1007d7748();
        pcVar18 = local_e8;
        if (uVar21 == 0) {
LAB_1007da3a8:
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da3ac);
          (*pcVar18)();
        }
        uVar14 = ((long)param_3[1] >> 6) + (uVar21 ^ uVar12);
        uVar23 = 0;
        if (uVar12 <= uVar14) {
          uVar23 = uVar12;
        }
        lVar7 = uVar14 - uVar23;
        if (lVar7 == param_1) {
          bVar6 = false;
        }
        else {
          bVar6 = false;
          uVar25 = uVar25 & 0x3f;
          lVar16 = uVar25 << uVar25;
          lVar8 = lVar16 + 0x7e;
          if (0 < lVar16 + 0x40) {
            lVar8 = lVar16 + 0x3f;
          }
          puVar13 = puVar24;
          uVar14 = uVar15;
          do {
            uVar17 = uVar17 + 1;
            if (uVar17 == uVar27) {
              if (bVar6) goto LAB_1007da3ac;
              uVar17 = 0;
              bVar6 = true;
            }
            if ((long)uVar14 < (long)uVar25) {
              lVar28 = (long)(uVar17 * uVar25) >> 6;
              lVar7 = lVar28;
              if (uVar14 != 0) {
                if (SCARRY8(lVar16,0x40)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da360);
                  (*pcVar18)();
                }
                lVar7 = 0;
                if (lVar28 + 1 != lVar8 >> 6) {
                  lVar7 = lVar28 + 1;
                }
              }
              uVar21 = uVar25 - uVar14;
              if (SBORROW8(uVar25,uVar14)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da354);
                (*pcVar18)();
              }
              lVar28 = 0x20;
              if (lVar7 != 2 || uVar25 != 5) {
                lVar28 = 0x40;
              }
              uVar15 = lVar28 - uVar21;
              if (SBORROW8(lVar28,uVar21)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da358);
                (*pcVar18)();
              }
              uVar23 = *(ulong *)(param_4 + lVar7 * 8);
              puVar13 = (ulong *)(uVar23 << (uVar14 & 0x3f) | (ulong)puVar13);
              puVar24 = (ulong *)(uVar23 >> (uVar21 & 0x3f));
            }
            else {
              uVar15 = uVar14 - uVar25;
              if (SBORROW8(uVar14,uVar25)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da34c);
                (*pcVar18)();
              }
              puVar24 = (ulong *)((ulong)puVar13 >> uVar25);
            }
            uVar21 = (ulong)puVar13 & uVar12;
            if (uVar21 == 0) goto LAB_1007da3a8;
            uVar14 = ((long)param_3[1] >> 6) + (uVar21 ^ uVar12);
            uVar23 = 0;
            if (uVar12 <= uVar14) {
              uVar23 = uVar12;
            }
            lVar7 = uVar14 - uVar23;
            puVar13 = puVar24;
            uVar14 = uVar15;
          } while (lVar7 != param_1);
        }
        local_70 = bVar6;
        local_90 = uVar17;
        local_88 = uVar21;
        local_80 = puVar24;
        local_78 = uVar15;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da374);
          (*pcVar18)();
        }
        FUN_1007d7a1c(lVar7 + 1,0);
        (**(code **)(local_b0 + 8))(local_c8,lVar9);
        bVar6 = SCARRY8(param_1,1);
        param_1 = param_1 + 1;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x1007da378);
          (*pcVar18)();
        }
        Swift::IteratorProtocol::_next();
        pcVar20 = pcVar18;
        (*local_d0)(pcVar18,1,lVar9);
      } while ((int)pcVar20 != 1);
    }
    pcVar20 = *(code **)(local_138 + 8);
    pcVar18 = local_d8;
  }
  (*pcVar20)(pcVar18,local_a8);
LAB_1007da0ec:
  (*local_108)(local_100,local_f8);
  return;
}



/* Address: 0x1007da400 | FUN_1007da400 */

void FUN_1007da400(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined8 uStack_70;
  long local_68;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar10 = *(undefined8 *)(*(long *)(param_6 + 8) + 8);
  lVar4 = 0xff;
  local_90 = param_3;
  local_88 = param_4;
  local_78 = param_6;
  uStack_70 = param_7;
  local_68 = uVar10;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,"lower upper ",0);
  local_a8 = *(long *)(lVar5 + -8);
  uVar6 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_c0 - uVar6;
  lVar7 = lVar14 - uVar6;
  local_b8 = lVar7;
  _swift_getAssociatedConformanceWitness
            (uVar10,param_5,lVar4,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_a0 = (undefined *)Swift::Range::typeMetadataAccessor();
  lVar11 = *(long *)(local_a0 + -8);
  local_b0 = lVar7 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(lVar4 + -8);
  lVar13 = local_b0 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = param_2;
  local_80 = param_5;
  Swift::Collection::_index();
  bVar3 = Swift::Comparable::<__infix(param_1,lVar13,lVar4,uVar10);
  lVar7 = local_b8;
  if (bVar3) {
    pcVar8 = *(code **)(lVar12 + 0x10);
    (*pcVar8)(local_b8,param_1,lVar4);
    local_c0 = lVar13;
    (*pcVar8)(lVar7 + *(int *)(lVar5 + 0x30),lVar13,lVar4);
    lVar13 = local_a8;
    local_68 = lVar11;
    (**(code **)(local_a8 + 0x10))(lVar14,lVar7,lVar5);
    lVar11 = local_b0;
    iVar1 = *(int *)(lVar5 + 0x30);
    pcVar8 = *(code **)(lVar12 + 0x20);
    (*pcVar8)(local_b0,lVar14,lVar4);
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(lVar14 + iVar1,lVar4);
    (**(code **)(lVar13 + 0x20))(lVar14,lVar7,lVar5);
    puVar2 = local_a0;
    (*pcVar8)(lVar11 + *(int *)(local_a0 + 0x24),lVar14 + *(int *)(lVar5 + 0x30),lVar4);
    (*pcVar9)(lVar14,lVar4);
    FUN_1007da66c(lVar11,local_98,local_90,local_88,local_80,local_78,uStack_70);
    (**(code **)(local_68 + 8))(lVar11,puVar2);
    (*pcVar9)(local_c0,lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1007da66c);
  (*pcVar8)();
}



/* Address: 0x1007da66c | FUN_1007da66c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007db0a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007da66c(long param_1,undefined8 param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 uVar7;
  Optional OVar8;
  bool bVar9;
  long lVar10;
  long lVar11;
  __int64 _Var12;
  Range RVar13;
  __int64 _Var14;
  ulong uVar15;
  undefined *puVar16;
  code *pcVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  code *pcVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  long lVar35;
  String SVar36;
  undefined8 uStack_1a0;
  undefined4 auStack_198 [2];
  undefined1 auStack_190 [8];
  long local_188;
  long local_180;
  long local_178;
  undefined *local_170;
  long local_168;
  undefined1 *local_160;
  long local_158;
  undefined *local_150;
  long local_148;
  long local_140;
  long local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  ulong *local_108;
  undefined8 local_100;
  long local_f8;
  code *local_f0;
  code *local_e8;
  code *local_e0;
  code *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  ulong local_a8;
  ulong *local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong *local_80;
  ulong local_78;
  undefined1 local_70;
  
  puVar16 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  lVar35 = *(long *)(*(long *)(param_6 + 8) + 8);
  lVar10 = 0xff;
  local_108 = param_3;
  local_c0 = param_7;
  local_a8 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,lVar35,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar11 = lVar35;
  _swift_getAssociatedConformanceWitness
            (lVar35,param_5,lVar10,puVar16,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  local_f8 = lVar11;
  local_150 = (undefined *)Swift::PartialRangeUpTo::typeMetadataAccessor();
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  local_158 = *(long *)(local_150 + -8);
  lVar23 = *(long *)(local_158 + 0x40);
  lVar11 = 0;
  local_160 = auStack_190 + -(lVar23 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(lVar35 + 8),param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_b8 = *(long *)(lVar11 + -8);
  uVar24 = *(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = (long)(auStack_190 + -(lVar23 + 0xfU & 0xfffffffffffffff0)) - uVar24;
  lVar23 = local_c8 - uVar24;
  local_118 = lVar11;
  local_d0 = lVar23;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  uVar24 = *(long *)(*(long *)(CONCAT71((int7)((ulong)lVar11 >> 8),OVar8.value) + -8) + 0x40) + 0xfU
           & 0xfffffffffffffff0;
  local_e8 = (code *)(lVar23 - uVar24);
  pcVar25 = local_e8 + -uVar24;
  lVar23 = 0;
  local_f0 = pcVar25;
  _swift_getAssociatedTypeWitness
            (0,lVar35,param_5,puVar16,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  lVar26 = (long)pcVar25 - (*(long *)(*(long *)(lVar23 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_130 = lVar26;
  local_170 = (undefined *)Swift::PartialRangeFrom::typeMetadataAccessor();
  local_178 = *(long *)(local_170 + -8);
  lVar26 = lVar26 - (*(long *)(local_178 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar35;
  local_180 = lVar26;
  _swift_getAssociatedConformanceWitness
            (lVar35,param_5,lVar23,puVar16,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_SubSequence__Swift_Collection_100eac7c0
            );
  local_138 = *(long *)(lVar11 + 8);
  lVar11 = 0;
  local_128 = lVar23;
  _swift_getAssociatedTypeWitness
            (0,local_138,lVar23,puVar4,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_148 = *(long *)(lVar11 + -8);
  uVar24 = *(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_d8 = (code *)(lVar26 - uVar24);
  local_e0 = local_d8 + -uVar24;
  lVar23 = *(long *)(lVar10 + -8);
  lVar33 = (long)local_e0 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar11;
  Swift::Collection::_get_startIndex();
  _Var12 = Swift::RandomAccessCollection::_distance();
  pcVar25 = *(code **)(lVar23 + 8);
  local_140 = lVar23;
  (*pcVar25)(lVar33,lVar10);
  RVar13 = Swift::Range::typeMetadataAccessor();
  iVar3 = *(int *)(RVar13.unknown + 0x24);
  local_110 = lVar35;
  Swift::Collection::_get_startIndex();
  local_168 = (long)iVar3;
  local_120 = param_1;
  local_100 = param_2;
  lVar11 = Swift::RandomAccessCollection::_distance();
  (*pcVar25)(lVar33,lVar10);
  lVar26 = local_110;
  lVar23 = lVar11 - _Var12;
  if (SBORROW8(lVar11,_Var12)) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db444);
    (*pcVar25)();
  }
  if (lVar23 < 1) {
    return;
  }
  _Var14 = Swift::Collection::get_count();
  lVar30 = local_f8;
  puVar18 = local_108;
  lVar32 = local_118;
  lVar35 = local_120;
  if (SBORROW8(_Var14,lVar23)) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db450);
    (*pcVar25)();
  }
  if ((_Var14 - lVar23) / 2 <= _Var12) {
    _Var12 = Swift::Collection::get_count();
    lVar6 = local_f8;
    puVar18 = local_108;
    lVar30 = local_118;
    lVar32 = local_120;
    lVar35 = local_168;
    if (SBORROW8(_Var12,lVar11)) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db454);
      (*pcVar25)();
    }
    if ((*local_108 & 0x3f) < 5) {
      if (4 < _Var12 - lVar11) goto LAB_1007dabb8;
    }
    else {
      lVar27 = 1L << (*local_108 & 0x3f);
      uVar24 = lVar27 * 3;
      if (SUB168(SEXT816(lVar27) * SEXT816(3),8) != (long)uVar24 >> 0x3f) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db468);
        (*pcVar25)();
      }
      if ((long)(uVar24 / 0xc) <= _Var12 - lVar11) {
LAB_1007dabb8:
        local_70 = 0;
        local_a0 = local_108;
        local_98 = local_a8;
        local_90 = 0;
        uVar15 = 0;
        puVar20 = local_108;
        uVar28 = local_a8;
        FUN_1007d7748();
        uVar24 = 0;
        local_88 = uVar15;
        local_80 = puVar20;
        local_78 = uVar28;
        do {
          uVar28 = local_88;
          if (local_88 != 0) {
            uVar29 = ~(-1L << (*puVar18 & 0x3f));
            uVar15 = ((long)puVar18[1] >> 6) + (local_88 ^ uVar29);
            uVar34 = 0;
            if (uVar29 <= uVar15) {
              uVar34 = uVar29;
            }
            lVar26 = uVar15 - uVar34;
            if (lVar11 <= lVar26) {
              if (SBORROW8(lVar26,lVar23)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db440);
                (*pcVar25)();
              }
              lVar26 = (lVar26 - lVar23) - ((long)puVar18[1] >> 6);
              uVar28 = (uVar29 & lVar26 >> 0x3f) + lVar26 ^ uVar29;
              uVar24 = (*puVar18 & 0x3f) * uVar24;
              lVar26 = (long)uVar24 >> 6;
              *(ulong *)(local_98 + lVar26 * 8) =
                   *(ulong *)(local_98 + lVar26 * 8) ^ (uVar28 ^ local_88) << (uVar24 & 0x3f);
              uVar15 = *puVar18 & 0x3f;
              uVar24 = 0x40 - (uVar24 & 0x3f);
              if (uVar24 < uVar15) {
                lVar10 = uVar15 << uVar15;
                if (SCARRY8(lVar10,0x40)) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db44c);
                  (*pcVar25)();
                }
                lVar33 = lVar10 + 0x7e;
                if (0 < lVar10 + 0x40) {
                  lVar33 = lVar10 + 0x3f;
                }
                lVar10 = 0;
                if (lVar26 + 1 != lVar33 >> 6) {
                  lVar10 = lVar26 + 1;
                }
                *(ulong *)(local_98 + lVar10 * 8) =
                     *(ulong *)(local_98 + lVar10 * 8) ^ (uVar28 ^ local_88) >> (uVar24 & 0x3f);
              }
            }
          }
          local_88 = uVar28;
          FUN_1007d7b60();
          uVar24 = local_90;
          puVar18 = local_a0;
        } while (local_90 != 0);
        return;
      }
    }
    local_188 = lVar23;
    local_c8 = param_5;
    bVar9 = Swift::Equatable::___infix
                      (local_120 + local_168,local_120 + local_168,lVar10,
                       *(undefined8 *)(local_f8 + 8));
    if (!bVar9) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db46c);
      (*pcVar25)();
    }
    (**(code **)(local_140 + 0x10))(lVar33,lVar32 + lVar35,lVar10);
    lVar23 = local_180;
    Swift::PartialRangeFrom::init(local_180,_Var12,lVar10,lVar6);
    puVar4 = local_170;
    puVar16 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
    _swift_getWitnessTable
              (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,
               local_170);
    ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
              (local_130,lVar23,local_c8,puVar4,lVar26,puVar16);
    lVar10 = local_128;
    lVar26 = local_138;
    Swift::Sequence::_makeIterator();
    (**(code **)(local_178 + 8))(lVar23,puVar4);
    _swift_getAssociatedConformanceWitness
              (lVar26,lVar10,local_b0,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    pcVar25 = local_f0;
    local_c8 = lVar26;
    Swift::IteratorProtocol::_next();
    local_d8 = *(code **)(local_b8 + 0x30);
    pcVar17 = pcVar25;
    (*local_d8)(pcVar25,1,lVar30);
    lVar23 = local_188;
    if ((int)pcVar17 != 1) {
      local_e8 = *(code **)(local_b8 + 0x20);
      do {
        (*local_e8)(local_d0,pcVar25,lVar30);
        uVar24 = Swift::Hashable::_rawHashValue(*puVar18);
        uVar15 = *puVar18;
        uVar34 = 1L << (uVar15 & 0x3f);
        uVar28 = uVar34 - 1;
        if (SBORROW8(uVar34,1)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db428);
          (*pcVar25)();
        }
        uVar24 = uVar28 & uVar24;
        local_70 = 0;
        local_a0 = puVar18;
        local_98 = local_a8;
        uVar29 = uVar24;
        puVar20 = puVar18;
        uVar21 = local_a8;
        local_90 = uVar24;
        FUN_1007d7748();
        uVar1 = local_90;
        local_88 = uVar29;
        local_80 = puVar20;
        local_78 = uVar21;
        uVar7 = local_70;
        if (uVar29 != 0) {
          uVar1 = ((long)puVar18[1] >> 6) + (uVar29 ^ uVar28);
          uVar22 = 0;
          if (uVar28 <= uVar1) {
            uVar22 = uVar28;
          }
          if (uVar1 - uVar22 == lVar11) {
            uVar1 = uVar24;
            uVar7 = 0;
          }
          else {
            uVar7 = false;
            uVar15 = uVar15 & 0x3f;
            lVar10 = uVar15 << uVar15;
            lVar26 = lVar10 + 0x7e;
            if (0 < lVar10 + 0x40) {
              lVar26 = lVar10 + 0x3f;
            }
            puVar19 = puVar20;
            uVar22 = uVar21;
            do {
              uVar24 = uVar24 + 1;
              if (uVar24 == uVar34) {
                local_88 = uVar29;
                local_80 = puVar20;
                local_78 = uVar21;
                if ((bool)uVar7) goto LAB_1007db46c;
                uVar24 = 0;
                uVar7 = true;
              }
              if ((long)uVar22 < (long)uVar15) {
                lVar32 = (long)(uVar24 * uVar15) >> 6;
                lVar35 = lVar32;
                if (uVar22 != 0) {
                  if (SCARRY8(lVar10,0x40)) {
                    /* WARNING: Does not return */
                    pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db420);
                    local_88 = uVar29;
                    local_80 = puVar20;
                    local_78 = uVar21;
                    (*pcVar25)();
                  }
                  lVar35 = 0;
                  if (lVar32 + 1 != lVar26 >> 6) {
                    lVar35 = lVar32 + 1;
                  }
                }
                uVar1 = uVar15 - uVar22;
                if (SBORROW8(uVar15,uVar22)) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db414);
                  local_88 = uVar29;
                  local_80 = puVar20;
                  local_78 = uVar21;
                  (*pcVar25)();
                }
                lVar32 = 0x20;
                if (lVar35 != 2 || uVar15 != 5) {
                  lVar32 = 0x40;
                }
                local_78 = lVar32 - uVar1;
                if (SBORROW8(lVar32,uVar1)) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db418);
                  local_88 = uVar29;
                  local_80 = puVar20;
                  local_78 = uVar21;
                  (*pcVar25)();
                }
                uVar31 = *(ulong *)(local_a8 + lVar35 * 8);
                puVar19 = (ulong *)(uVar31 << (uVar22 & 0x3f) | (ulong)puVar19);
                local_80 = (ulong *)(uVar31 >> (uVar1 & 0x3f));
              }
              else {
                local_78 = uVar22 - uVar15;
                if (SBORROW8(uVar22,uVar15)) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db40c);
                  local_88 = uVar29;
                  local_80 = puVar20;
                  local_78 = uVar21;
                  (*pcVar25)();
                }
                local_80 = (ulong *)((ulong)puVar19 >> uVar15);
              }
              local_88 = (ulong)puVar19 & uVar28;
              uVar1 = uVar24;
              if (local_88 == 0) break;
              uVar31 = ((long)puVar18[1] >> 6) + (local_88 ^ uVar28);
              uVar2 = 0;
              if (uVar28 <= uVar31) {
                uVar2 = uVar28;
              }
              puVar19 = local_80;
              uVar22 = local_78;
            } while (uVar31 - uVar2 != lVar11);
          }
        }
        local_70 = uVar7;
        local_90 = uVar1;
        if (SBORROW8(lVar11,lVar23)) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db434);
          (*pcVar25)();
        }
        FUN_1007d7a1c(lVar11 - lVar23,0);
        (**(code **)(local_b8 + 8))(local_d0,lVar30);
        pcVar25 = local_f0;
        bVar9 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db438);
          (*pcVar25)();
        }
        Swift::IteratorProtocol::_next();
        pcVar17 = pcVar25;
        (*local_d8)(pcVar25,1,lVar30);
      } while ((int)pcVar17 != 1);
    }
    (**(code **)(local_148 + 8))(local_e0,local_b0);
    return;
  }
  if ((*local_108 & 0x3f) < 5) {
    if (4 < _Var12) goto LAB_1007daa38;
  }
  else {
    lVar11 = 1L << (*local_108 & 0x3f);
    uVar24 = lVar11 * 3;
    if (SUB168(SEXT816(lVar11) * SEXT816(3),8) != (long)uVar24 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db460);
      (*pcVar25)();
    }
    if ((long)(uVar24 / 0xc) <= _Var12) {
LAB_1007daa38:
      local_70 = 0;
      local_a0 = local_108;
      local_98 = local_a8;
      local_90 = 0;
      uVar15 = 0;
      puVar20 = local_108;
      uVar28 = local_a8;
      FUN_1007d7748();
      uVar24 = 0;
      local_88 = uVar15;
      local_80 = puVar20;
      local_78 = uVar28;
      do {
        uVar28 = local_88;
        if (local_88 != 0) {
          uVar29 = ~(-1L << (*puVar18 & 0x3f));
          uVar15 = ((long)puVar18[1] >> 6) + (local_88 ^ uVar29);
          uVar34 = 0;
          if (uVar29 <= uVar15) {
            uVar34 = uVar29;
          }
          lVar11 = uVar15 - uVar34;
          if (lVar11 < _Var12) {
            if (SCARRY8(lVar11,lVar23)) {
                    /* WARNING: Does not return */
              pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db43c);
              (*pcVar25)();
            }
            lVar11 = (lVar11 + lVar23) - ((long)puVar18[1] >> 6);
            uVar28 = (uVar29 & lVar11 >> 0x3f) + lVar11 ^ uVar29;
            uVar24 = (*puVar18 & 0x3f) * uVar24;
            lVar11 = (long)uVar24 >> 6;
            *(ulong *)(local_98 + lVar11 * 8) =
                 *(ulong *)(local_98 + lVar11 * 8) ^ (uVar28 ^ local_88) << (uVar24 & 0x3f);
            uVar15 = *puVar18 & 0x3f;
            uVar24 = 0x40 - (uVar24 & 0x3f);
            if (uVar24 < uVar15) {
              lVar26 = uVar15 << uVar15;
              if (SCARRY8(lVar26,0x40)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db448);
                (*pcVar25)();
              }
              lVar10 = lVar26 + 0x7e;
              if (0 < lVar26 + 0x40) {
                lVar10 = lVar26 + 0x3f;
              }
              lVar26 = 0;
              if (lVar11 + 1 != lVar10 >> 6) {
                lVar26 = lVar11 + 1;
              }
              *(ulong *)(local_98 + lVar26 * 8) =
                   *(ulong *)(local_98 + lVar26 * 8) ^ (uVar28 ^ local_88) >> (uVar24 & 0x3f);
            }
          }
        }
        local_88 = uVar28;
        FUN_1007d7b60();
        puVar20 = local_108;
        uVar24 = local_90;
        puVar18 = local_a0;
      } while (local_90 != 0);
      goto LAB_1007db3a0;
    }
  }
  local_188 = lVar23;
  bVar9 = Swift::Equatable::___infix(local_120,local_120,lVar10,*(undefined8 *)(local_f8 + 8));
  if (!bVar9) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db464);
    (*pcVar25)();
  }
  (**(code **)(local_140 + 0x10))(lVar33,lVar35,lVar10);
  puVar5 = local_160;
  Swift::PartialRangeUpTo::init(local_160,_Var14,lVar10,lVar30);
  puVar4 = local_150;
  puVar16 = PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeUpTo<undefined>_>Swift__RangeExpression_100ead220,
             local_150);
  ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
            (local_130,puVar5,param_5,puVar4,lVar26,puVar16);
  lVar23 = local_128;
  lVar11 = local_138;
  Swift::Sequence::_makeIterator();
  (**(code **)(local_158 + 8))(puVar5,puVar4);
  _swift_getAssociatedConformanceWitness
            (lVar11,lVar23,local_b0,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  pcVar25 = local_e8;
  local_d0 = lVar11;
  Swift::IteratorProtocol::_next();
  local_e0 = *(code **)(local_b8 + 0x30);
  pcVar17 = pcVar25;
  (*local_e0)(pcVar25,1,lVar32);
  puVar20 = local_108;
  lVar23 = local_188;
  if ((int)pcVar17 != 1) {
    lVar11 = 0;
    local_f0 = *(code **)(local_b8 + 0x20);
    do {
      (*local_f0)(local_c8,pcVar25,lVar32);
      uVar24 = Swift::Hashable::_rawHashValue(*puVar20);
      uVar15 = *puVar20;
      uVar34 = 1L << (uVar15 & 0x3f);
      uVar28 = uVar34 - 1;
      if (SBORROW8(uVar34,1)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db424);
        (*pcVar25)();
      }
      uVar24 = uVar28 & uVar24;
      local_70 = 0;
      local_a0 = puVar20;
      local_98 = local_a8;
      uVar29 = uVar24;
      puVar18 = puVar20;
      uVar21 = local_a8;
      local_90 = uVar24;
      FUN_1007d7748();
      uVar1 = local_90;
      local_88 = uVar29;
      local_80 = puVar18;
      local_78 = uVar21;
      uVar7 = local_70;
      if (uVar29 != 0) {
        uVar1 = ((long)puVar20[1] >> 6) + (uVar29 ^ uVar28);
        uVar22 = 0;
        if (uVar28 <= uVar1) {
          uVar22 = uVar28;
        }
        if (uVar1 - uVar22 == lVar11) {
          uVar1 = uVar24;
          uVar7 = 0;
        }
        else {
          uVar7 = false;
          uVar15 = uVar15 & 0x3f;
          lVar10 = uVar15 << uVar15;
          lVar26 = lVar10 + 0x7e;
          if (0 < lVar10 + 0x40) {
            lVar26 = lVar10 + 0x3f;
          }
          puVar19 = puVar18;
          uVar22 = uVar21;
          do {
            uVar24 = uVar24 + 1;
            if (uVar24 == uVar34) {
              local_88 = uVar29;
              local_80 = puVar18;
              local_78 = uVar21;
              if ((bool)uVar7) {
LAB_1007db46c:
                *(undefined4 *)(lVar33 + -8) = 0;
                *(undefined8 *)(lVar33 + -0x10) = 0xd7;
                SVar36.bridgeObject = (void *)0x2;
                SVar36.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar36,(StaticString)0xd000000000000024,
                           0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db4c0);
                (*pcVar25)();
              }
              uVar24 = 0;
              uVar7 = true;
            }
            if ((long)uVar22 < (long)uVar15) {
              lVar30 = (long)(uVar24 * uVar15) >> 6;
              lVar35 = lVar30;
              if (uVar22 != 0) {
                if (SCARRY8(lVar10,0x40)) {
                    /* WARNING: Does not return */
                  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db41c);
                  local_88 = uVar29;
                  local_80 = puVar18;
                  local_78 = uVar21;
                  (*pcVar25)();
                }
                lVar35 = 0;
                if (lVar30 + 1 != lVar26 >> 6) {
                  lVar35 = lVar30 + 1;
                }
              }
              uVar1 = uVar15 - uVar22;
              if (SBORROW8(uVar15,uVar22)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db408);
                local_88 = uVar29;
                local_80 = puVar18;
                local_78 = uVar21;
                (*pcVar25)();
              }
              lVar30 = 0x20;
              if (lVar35 != 2 || uVar15 != 5) {
                lVar30 = 0x40;
              }
              local_78 = lVar30 - uVar1;
              if (SBORROW8(lVar30,uVar1)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db410);
                local_88 = uVar29;
                local_80 = puVar18;
                local_78 = uVar21;
                (*pcVar25)();
              }
              uVar31 = *(ulong *)(local_a8 + lVar35 * 8);
              puVar19 = (ulong *)(uVar31 << (uVar22 & 0x3f) | (ulong)puVar19);
              local_80 = (ulong *)(uVar31 >> (uVar1 & 0x3f));
            }
            else {
              local_78 = uVar22 - uVar15;
              if (SBORROW8(uVar22,uVar15)) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db404);
                local_88 = uVar29;
                local_80 = puVar18;
                local_78 = uVar21;
                (*pcVar25)();
              }
              local_80 = (ulong *)((ulong)puVar19 >> uVar15);
            }
            local_88 = (ulong)puVar19 & uVar28;
            uVar1 = uVar24;
            if (local_88 == 0) break;
            uVar31 = ((long)puVar20[1] >> 6) + (local_88 ^ uVar28);
            uVar2 = 0;
            if (uVar28 <= uVar31) {
              uVar2 = uVar28;
            }
            puVar19 = local_80;
            uVar22 = local_78;
          } while (uVar31 - uVar2 != lVar11);
        }
      }
      local_70 = uVar7;
      local_90 = uVar1;
      if (SCARRY8(lVar11,lVar23)) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db42c);
        (*pcVar25)();
      }
      FUN_1007d7a1c(lVar11 + lVar23,0);
      (**(code **)(local_b8 + 8))(local_c8,lVar32);
      pcVar25 = local_e8;
      bVar9 = SCARRY8(lVar11,1);
      lVar11 = lVar11 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db430);
        (*pcVar25)();
      }
      Swift::IteratorProtocol::_next();
      pcVar17 = pcVar25;
      (*local_e0)(pcVar25,1,lVar32);
    } while ((int)pcVar17 != 1);
  }
  (**(code **)(local_148 + 8))(local_d8,local_b0);
LAB_1007db3a0:
  lVar26 = (long)puVar20[1] >> 6;
  lVar11 = lVar26 - lVar23;
  if (SBORROW8(lVar26,lVar23)) {
                    /* WARNING: Does not return */
    pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db458);
    (*pcVar25)();
  }
  lVar23 = 1L << (*puVar20 & 0x3f);
  uVar24 = lVar23 - 1;
  if (!SBORROW8(lVar23,1)) {
    lVar11 = (uVar24 & lVar11 >> 0x3f) + lVar11;
    uVar28 = 0;
    if ((long)uVar24 <= lVar11) {
      uVar28 = uVar24;
    }
    puVar20[1] = puVar20[1] & 0x3f | (lVar11 - uVar28) * 0x40;
    return;
  }
                    /* WARNING: Does not return */
  pcVar25 = (code *)SoftwareBreakpoint(1,0x1007db45c);
  (*pcVar25)();
}



/* Address: 0x1007db4c0 | FUN_1007db4c0 */

void FUN_1007db4c0(ulong *param_1,void *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  
  lVar3 = (*param_1 & 0x3f) << (*param_1 & 0x3f);
  if (SCARRY8(lVar3,0x40)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007db510);
    (*pcVar2)();
  }
  lVar1 = lVar3 + 0x7e;
  if (0 < lVar3 + 0x40) {
    lVar1 = lVar3 + 0x3f;
  }
  if (-0x3f < lVar3 + 0x40) {
    if (lVar3 + 0x7eU < 0x7f) {
      return;
    }
    _bzero(param_2,(lVar1 >> 6) << 3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007db514);
  (*pcVar2)();
}



/* Address: 0x1007db514 | FUN_1007db514 */

void FUN_1007db514(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5,
                  ulong *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  Optional OVar5;
  long lVar6;
  long lVar7;
  undefined7 extraout_var;
  ulong **ppuVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  String SVar22;
  undefined8 uStack_150;
  undefined4 auStack_148 [2];
  long local_140;
  long local_138;
  undefined8 local_130;
  code *local_128;
  code *local_120;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  long lStack_d8;
  ulong *local_d0;
  ulong *local_c8;
  long local_c0;
  ulong *local_b0;
  ulong *puStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong *local_90;
  ulong *local_88;
  ulong *local_80;
  char local_69;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar20 = *(long *)(*(long *)(param_5 + 8) + 8);
  local_108 = *(undefined8 *)(lVar20 + 8);
  lVar6 = 0;
  local_d0 = param_6;
  _swift_getAssociatedTypeWitness
            (0,local_108,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  local_f8 = *(long *)(lVar6 + -8);
  lVar11 = (long)&local_140 - (*(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_100 = lVar11;
  local_f0 = lVar6;
  _swift_getAssociatedTypeWitness
            (0,lVar20,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_e0 = *(long *)(lVar7 + -8);
  lVar11 = lVar11 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_d8 = lVar7;
  local_c0 = lVar11;
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar11 = lVar11 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar7 = 0;
  local_e8 = lVar11;
  _swift_getAssociatedTypeWitness
            (0,lVar20,param_4,puVar2,
             PTR___associated_type_descriptor_for_Swift_Collection_Indices_100eabd10);
  lVar11 = lVar11 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar20;
  local_118 = lVar11;
  _swift_getAssociatedConformanceWitness
            (lVar20,param_4,lVar7,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Indices__Swift_Collection_100eac7f8
            );
  uVar18 = *(undefined8 *)(lVar6 + 8);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar18,lVar7,puVar1,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_140 = *(long *)(lVar6 + -8);
  lVar11 = lVar11 - (*(long *)(local_140 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = local_d0;
  local_c8 = param_2;
  local_a0 = param_4;
  local_98 = param_5;
  local_88 = param_2;
  local_80 = param_3;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_69 == '\x01') {
    local_110 = lVar20;
    Swift::Collection::_get_indices();
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar18,lVar7,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar7 = local_e8;
    local_118 = uVar18;
    local_108 = lVar11;
    Swift::IteratorProtocol::_next();
    lVar12 = lStack_d8;
    lVar20 = local_e0;
    local_120 = *(code **)(local_e0 + 0x30);
    lVar17 = lVar7;
    (*local_120)(lVar7,1,lStack_d8);
    if ((int)lVar17 != 1) {
      lVar17 = 0;
      local_128 = *(code **)(lVar20 + 0x20);
      local_138 = lVar6;
      local_130 = param_1;
      do {
        lVar6 = local_c0;
        (*local_128)(local_c0,lVar7,lVar12);
        ppuVar8 = &local_b0;
        __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                  (ppuVar8,lVar6,param_4,local_110);
        lVar20 = local_f0;
        lVar7 = local_f8;
        lVar6 = local_100;
        (**(code **)(local_f8 + 0x10))(local_100);
        (*(code *)ppuVar8)(&local_b0,0);
        puVar19 = local_c8;
        uVar9 = Swift::Hashable::_rawHashValue(*local_c8);
        lVar12 = 1L << (*puVar19 & 0x3f);
        if (SBORROW8(lVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba4c);
          (*pcVar3)();
        }
        uVar9 = lVar12 - 1U & uVar9;
        local_80 = (ulong *)((ulong)local_80 & 0xffffffffffffff00);
        local_b0 = puVar19;
        uVar13 = uVar9;
        puVar10 = param_3;
        puStack_a8 = param_3;
        local_a0 = uVar9;
        FUN_1007d7748();
        local_98 = uVar13;
        local_90 = puVar19;
        local_88 = puVar10;
        (**(code **)(lVar7 + 8))(lVar6,lVar20);
        if (uVar13 != 0) {
          bVar4 = false;
          uVar15 = *local_c8;
          uVar13 = uVar15 & 0x3f;
          uVar14 = 1L << (uVar15 & 0x3f);
          lVar7 = uVar13 << (uVar15 & 0x3f);
          lVar6 = lVar7 + 0x7e;
          if (0 < lVar7 + 0x40) {
            lVar6 = lVar7 + 0x3f;
          }
          do {
            uVar9 = uVar9 + 1;
            if (uVar9 == uVar14) {
              if (bVar4) {
                *(undefined4 *)(lVar11 + -8) = 0;
                *(undefined8 *)(lVar11 + -0x10) = 0xd7;
                SVar22.bridgeObject = (void *)0x2;
                SVar22.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar22,(StaticString)0xd000000000000024,
                           0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dbaa4);
                (*pcVar3)();
              }
              uVar9 = 0;
              bVar4 = true;
            }
            if ((long)puVar10 < (long)uVar13) {
              lVar12 = (long)(uVar9 * uVar13) >> 6;
              lVar20 = lVar12;
              if (puVar10 != (ulong *)0x0) {
                if (SCARRY8(lVar7,0x40)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba48);
                  (*pcVar3)();
                }
                lVar20 = 0;
                if (lVar12 + 1 != lVar6 >> 6) {
                  lVar20 = lVar12 + 1;
                }
              }
              uVar15 = uVar13 - (long)puVar10;
              if (SBORROW8(uVar13,(long)puVar10)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba40);
                (*pcVar3)();
              }
              lVar12 = 0x20;
              if (lVar20 != 2 || uVar13 != 5) {
                lVar12 = 0x40;
              }
              puVar21 = (ulong *)(lVar12 - uVar15);
              if (SBORROW8(lVar12,uVar15)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba44);
                (*pcVar3)();
              }
              puVar19 = (ulong *)(param_3[lVar20] << ((ulong)puVar10 & 0x3f) | (ulong)puVar19);
              puVar16 = (ulong *)(param_3[lVar20] >> (uVar15 & 0x3f));
            }
            else {
              puVar21 = (ulong *)((long)puVar10 - uVar13);
              if (SBORROW8((long)puVar10,uVar13)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba3c);
                (*pcVar3)();
              }
              puVar16 = (ulong *)((ulong)puVar19 >> uVar13);
            }
            uVar15 = (ulong)puVar19 & uVar14 - 1;
            puVar19 = puVar16;
            puVar10 = puVar21;
          } while (uVar15 != 0);
          local_80 = (ulong *)CONCAT71(local_80._1_7_,bVar4);
          local_98 = 0;
          local_a0 = uVar9;
          local_90 = puVar16;
          local_88 = puVar21;
        }
        FUN_1007d7a1c(lVar17,0);
        lVar12 = lStack_d8;
        (**(code **)(local_e0 + 8))(local_c0,lStack_d8);
        lVar7 = local_e8;
        lVar6 = local_138;
        bVar4 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007dba50);
          (*pcVar3)();
        }
        Swift::IteratorProtocol::_next();
        lVar20 = lVar7;
        (*local_120)(lVar7,1,lVar12);
      } while ((int)lVar20 != 1);
    }
    (**(code **)(local_140 + 8))(local_108,lVar6);
  }
  return;
}



/* Address: 0x1007dbaa4 | FUN_1007dbaa4 */

void FUN_1007dbaa4(long param_1,long param_2,ulong *param_3,ulong param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  ulong *puVar21;
  String SVar22;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  undefined1 auStack_f0 [8];
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(*(long *)(param_6 + 8) + 8) + 8),param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar8 = *(long *)(lVar5 + -8);
  lVar3 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    if (param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd38);
      (*pcVar9)();
    }
    lVar11 = *(long *)(lVar8 + 0x48);
    pcVar9 = *(code **)(lVar8 + 0x10);
    lVar20 = 0;
    do {
      lVar1 = lVar20 + 1;
      (*pcVar9)(auStack_f0 + lVar3,param_1 + lVar11 * lVar20,lVar5);
      uVar6 = Swift::Hashable::_rawHashValue(*param_3);
      lVar10 = 1L << (*param_3 & 0x3f);
      if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd30);
        (*pcVar9)();
      }
      uVar6 = lVar10 - 1U & uVar6;
      uVar12 = uVar6;
      puVar21 = param_3;
      uVar7 = param_4;
      FUN_1007d7748();
      (**(code **)(lVar8 + 8))(auStack_f0 + lVar3,lVar5);
      if (uVar12 != 0) {
        bVar4 = false;
        uVar14 = *param_3;
        uVar12 = uVar14 & 0x3f;
        uVar13 = 1L << (uVar14 & 0x3f);
        lVar15 = uVar12 << (uVar14 & 0x3f);
        lVar10 = lVar15 + 0x7e;
        if (0 < lVar15 + 0x40) {
          lVar10 = lVar15 + 0x3f;
        }
        do {
          uVar6 = uVar6 + 1;
          if (uVar6 == uVar13) {
            if (bVar4) {
              *(undefined4 *)((long)auStack_f8 + lVar3) = 0;
              *(undefined8 *)((long)&uStack_100 + lVar3) = 0xd7;
              SVar22.bridgeObject = (void *)0x2;
              SVar22.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar22,(StaticString)0xd000000000000024,
                         0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd8c);
              (*pcVar9)();
            }
            uVar6 = 0;
            bVar4 = true;
          }
          if ((long)uVar7 < (long)uVar12) {
            lVar16 = (long)(uVar6 * uVar12) >> 6;
            lVar17 = lVar16;
            if (uVar7 != 0) {
              if (SCARRY8(lVar15,0x40)) {
                    /* WARNING: Does not return */
                pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd2c);
                (*pcVar9)();
              }
              lVar17 = 0;
              if (lVar16 + 1 != lVar10 >> 6) {
                lVar17 = lVar16 + 1;
              }
            }
            uVar2 = uVar12 - uVar7;
            if (SBORROW8(uVar12,uVar7)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd24);
              (*pcVar9)();
            }
            lVar16 = 0x20;
            if (lVar17 != 2 || uVar12 != 5) {
              lVar16 = 0x40;
            }
            uVar14 = lVar16 - uVar2;
            if (SBORROW8(lVar16,uVar2)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd28);
              (*pcVar9)();
            }
            uVar18 = *(ulong *)(param_4 + lVar17 * 8);
            puVar21 = (ulong *)(uVar18 << (uVar7 & 0x3f) | (ulong)puVar21);
            puVar19 = (ulong *)(uVar18 >> (uVar2 & 0x3f));
          }
          else {
            uVar14 = uVar7 - uVar12;
            if (SBORROW8(uVar7,uVar12)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd20);
              (*pcVar9)();
            }
            puVar19 = (ulong *)((ulong)puVar21 >> uVar12);
          }
          uVar2 = (ulong)puVar21 & uVar13 - 1;
          puVar21 = puVar19;
          uVar7 = uVar14;
        } while (uVar2 != 0);
      }
      FUN_1007d7a1c(lVar20,0);
      if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1007dbd34);
        (*pcVar9)();
      }
      lVar20 = lVar1;
    } while (lVar1 != param_2);
  }
  return;
}



/* Address: 0x1007dbd8c | FUN_1007dbd8c */

byte FUN_1007dbd8c(undefined8 param_1,undefined8 param_2,ulong *param_3,ulong *param_4,ulong param_5
                  ,ulong param_6,ulong *param_7)

{
  __int64 _Var1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  Optional OVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  undefined7 extraout_var;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  ulong *puVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  code *pcVar20;
  code *pcVar21;
  undefined1 auStack_170 [8];
  code *local_168;
  code *local_160;
  long local_158;
  code *local_150;
  long local_148;
  long local_140;
  ulong *local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  ulong *local_110;
  ulong local_108;
  __int64 local_100;
  undefined1 *local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  ulong *local_d8;
  long local_d0;
  undefined1 local_c8 [40];
  ulong *local_a0;
  ulong *puStack_98;
  ulong local_90;
  ulong local_88;
  ulong *local_80;
  ulong *local_78;
  ulong *local_70;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar19 = *(long *)(*(long *)(param_6 + 8) + 8);
  local_108 = *(undefined8 *)(lVar19 + 8);
  lVar7 = 0;
  local_130 = param_1;
  local_110 = param_4;
  local_d8 = param_7;
  _swift_getAssociatedTypeWitness
            (0,local_108,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  local_120 = *(long *)(lVar7 + -8);
  uVar15 = *(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f8 = auStack_170 + -uVar15;
  lVar16 = (long)local_f8 - uVar15;
  lVar8 = 0xff;
  local_d0 = lVar16;
  _swift_getAssociatedTypeWitness
            (0xff,lVar19,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar16 = lVar16 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar5.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar9 = 0;
  local_128 = lVar16;
  _swift_getAssociatedTypeWitness
            (0,lVar19,param_5,puVar3,
             PTR___associated_type_descriptor_for_Swift_Collection_Indices_100eabd10);
  lVar16 = lVar16 - (*(long *)(*(long *)(lVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar19;
  local_148 = lVar16;
  _swift_getAssociatedConformanceWitness
            (lVar19,param_5,lVar9,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Indices__Swift_Collection_100eac7f8
            );
  local_150 = *(code **)(lVar10 + 8);
  lVar10 = 0;
  local_140 = lVar9;
  _swift_getAssociatedTypeWitness
            (0,local_150,lVar9,puVar2,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_158 = *(long *)(lVar10 + -8);
  lVar16 = lVar16 - (*(long *)(local_158 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_e8 = *(long *)(lVar8 + -8);
  uVar15 = *(long *)(local_e8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_100 = lVar16 - uVar15;
  local_f0 = local_100 - uVar15;
  lVar9 = local_f0 - uVar15;
  local_80 = local_d8;
  local_70 = local_110;
  local_138 = param_3;
  local_118 = lVar10;
  local_e0 = lVar8;
  local_90 = param_5;
  local_88 = param_6;
  local_78 = param_3;
  FUN_1000f7830(&DAT_100fe6640,&DAT_100c79220);
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_c8[0] == (code)0x2) {
    local_108 = param_6;
    Swift::Collection::_get_indices();
    lVar10 = local_140;
    pcVar20 = local_150;
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (pcVar20,lVar10,local_118,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    lVar10 = local_128;
    local_160 = pcVar20;
    local_140 = lVar16;
    Swift::IteratorProtocol::_next();
    lVar17 = local_e0;
    lVar16 = local_e8;
    local_168 = *(code **)(local_e8 + 0x30);
    lVar11 = lVar10;
    (*local_168)(lVar10,1,local_e0);
    lVar8 = local_118;
    if ((int)lVar11 != 1) {
      local_148 = 0;
      local_150 = *(code **)(lVar16 + 0x20);
      lVar16 = local_d0;
      do {
        lVar8 = local_f0;
        (*local_150)(local_f0,lVar10,lVar17);
        pcVar20 = (code *)local_c8;
        __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                  (pcVar20,lVar8,param_5,lVar19);
        pcVar21 = *(code **)(local_120 + 0x10);
        (*pcVar21)(lVar16);
        (*pcVar20)(local_c8,0);
        puVar13 = local_138;
        uVar15 = Swift::Hashable::_rawHashValue(*local_138);
        lVar10 = 1L << (*puVar13 & 0x3f);
        if (SBORROW8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1007dc464);
          (*pcVar20)();
        }
        uVar15 = lVar10 - 1U & uVar15;
        local_70 = (ulong *)((ulong)local_70 & 0xffffffffffffff00);
        local_a0 = puVar13;
        puStack_98 = local_110;
        puVar14 = local_110;
        local_90 = uVar15;
        FUN_1007d7748();
        pcVar20 = *(code **)(local_120 + 8);
        local_88 = uVar15;
        local_80 = puVar13;
        local_78 = puVar14;
        (*pcVar20)(lVar16,lVar7);
        lVar11 = local_148;
        _Var1 = local_100;
        while (local_148 = lVar11, local_100 = _Var1, uVar15 != 0) {
          Swift::Collection::_get_startIndex();
          Swift::RandomAccessCollection::_index(_Var1);
          lVar10 = local_e0;
          pcVar18 = *(code **)(local_e8 + 8);
          (*pcVar18)(_Var1,local_e0);
          pcVar12 = (code *)local_c8;
          __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                    (pcVar12,lVar9,param_5,lVar19);
          (*pcVar21)(local_d0);
          (*pcVar12)(local_c8,0);
          (*pcVar18)(lVar9,lVar10);
          pcVar12 = (code *)local_c8;
          __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                    (pcVar12,local_f0,param_5,lVar19);
          puVar4 = local_f8;
          (*pcVar21)(local_f8);
          (*pcVar12)(local_c8,0);
          bVar6 = Swift::Equatable::___infix(local_d0,puVar4,lVar7,local_d8[1]);
          lVar16 = local_d0;
          (*pcVar20)(puVar4,lVar7);
          (*pcVar20)(lVar16,lVar7);
          if (bVar6) {
            (**(code **)(local_158 + 8))(local_140,local_118);
            (*local_150)(local_130,local_f0,local_e0);
            local_c8[0] = (code)0x0;
            goto LAB_1007dc43c;
          }
          FUN_1007d7b60();
          uVar15 = local_88;
          lVar11 = local_148;
          _Var1 = local_100;
        }
        FUN_1007d7a1c(lVar11,0);
        lVar17 = local_e0;
        (**(code **)(local_e8 + 8))(local_f0,local_e0);
        lVar8 = local_118;
        lVar10 = local_128;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x1007dc468);
          (*pcVar20)();
        }
        local_148 = lVar11 + 1;
        Swift::IteratorProtocol::_next();
        lVar11 = lVar10;
        (*local_168)(lVar10,1,lVar17);
      } while ((int)lVar11 != 1);
    }
    (**(code **)(local_158 + 8))(local_140,lVar8);
    Swift::Collection::_get_endIndex();
    local_c8[0] = (code)0x1;
  }
  else {
    Swift::Collection::_get_startIndex();
    Swift::RandomAccessCollection::_index(lVar9);
    (**(code **)(local_e8 + 8))(lVar9,local_e0);
  }
LAB_1007dc43c:
  return (byte)local_c8[0] & 1;
}



/* Address: 0x1007dc468 | FUN_1007dc468 */

void FUN_1007dc468(undefined1 *param_1,long param_2,long param_3,ulong *param_4,ulong param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  ulong uVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  long lVar17;
  code *pcVar18;
  long lVar19;
  ulong uVar20;
  String SVar21;
  undefined8 uStack_100;
  undefined4 auStack_f8 [2];
  long local_f0;
  long local_e8;
  undefined1 *local_e0;
  
  lVar5 = 0;
  local_e0 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(*(long *)(param_7 + 8) + 8) + 8),param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_f0 = *(long *)(lVar5 + -8);
  uVar7 = *(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&local_f0 - uVar7;
  lVar17 = lVar15 - uVar7;
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc78c);
      (*pcVar8)();
    }
    lVar12 = *(long *)(local_f0 + 0x48);
    pcVar8 = *(code **)(local_f0 + 0x10);
    lVar19 = 0;
    local_e8 = param_3;
    do {
      lVar14 = local_f0;
      lVar6 = param_2 + lVar12 * lVar19;
      (*pcVar8)(lVar17,lVar6,lVar5);
      uVar7 = Swift::Hashable::_rawHashValue(*param_4);
      lVar9 = 1L << (*param_4 & 0x3f);
      if (SBORROW8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc788);
        (*pcVar8)();
      }
      uVar7 = lVar9 - 1U & uVar7;
      uVar13 = uVar7;
      puVar16 = param_4;
      uVar20 = param_5;
      FUN_1007d7748();
      pcVar18 = *(code **)(lVar14 + 8);
      (*pcVar18)(lVar17,lVar5);
      if (uVar13 != 0) {
        bVar3 = false;
        uVar10 = *param_4;
        do {
          while( true ) {
            uVar11 = -1L << (uVar10 & 0x3f);
            uVar13 = (uVar11 ^ uVar13 ^ 0xffffffffffffffff) + ((long)param_4[1] >> 6);
            uVar10 = 0;
            if (~uVar11 <= uVar13) {
              uVar10 = ~uVar11;
            }
            (*pcVar8)(lVar17,param_2 + (uVar13 - uVar10) * lVar12,lVar5);
            (*pcVar8)(lVar15,lVar6,lVar5);
            bVar4 = Swift::Equatable::___infix(lVar17,lVar15,lVar5,*(undefined8 *)(param_8 + 8));
            (*pcVar18)(lVar15,lVar5);
            (*pcVar18)(lVar17,lVar5);
            if (bVar4) {
              *local_e0 = 0;
              *(long *)(local_e0 + 8) = lVar19;
              return;
            }
            uVar7 = uVar7 + 1;
            uVar10 = *param_4;
            uVar11 = uVar10 & 0x3f;
            uVar13 = 1L << (uVar10 & 0x3f);
            if (uVar7 == uVar13) {
              if (bVar3) {
                *(undefined4 *)(lVar17 + -8) = 0;
                *(undefined8 *)(lVar17 + -0x10) = 0xd7;
                SVar21.bridgeObject = (void *)0x2;
                SVar21.str = (char *)0xb;
                Swift::_assertionFailure
                          ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000024,
                           0x8000000100db1990,0xdb1970);
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc7e0);
                (*pcVar8)();
              }
              uVar7 = 0;
              bVar3 = true;
            }
            if ((long)uVar11 <= (long)uVar20) break;
            lVar9 = (long)(uVar7 * uVar11) >> 6;
            lVar14 = lVar9;
            if (uVar20 != 0) {
              lVar14 = uVar11 << uVar11;
              if (SCARRY8(lVar14,0x40)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc784);
                (*pcVar8)();
              }
              lVar1 = lVar14 + 0x7e;
              if (0 < lVar14 + 0x40) {
                lVar1 = lVar14 + 0x3f;
              }
              lVar14 = 0;
              if (lVar9 + 1 != lVar1 >> 6) {
                lVar14 = lVar9 + 1;
              }
            }
            uVar2 = uVar11 - uVar20;
            if (SBORROW8(uVar11,uVar20)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc77c);
              (*pcVar8)();
            }
            lVar9 = 0x20;
            if (lVar14 != 2 || uVar11 != 5) {
              lVar9 = 0x40;
            }
            if (SBORROW8(lVar9,uVar2)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1007dc780);
              (*pcVar8)();
            }
            uVar11 = *(ulong *)(param_5 + lVar14 * 8);
            uVar13 = (uVar11 << (uVar20 & 0x3f) | (ulong)puVar16) & uVar13 - 1;
            puVar16 = (ulong *)(uVar11 >> (uVar2 & 0x3f));
            uVar20 = lVar9 - uVar2;
            if (uVar13 == 0) goto LAB_1007dc6f4;
          }
          uVar13 = uVar13 - 1 & (ulong)puVar16;
          puVar16 = (ulong *)((ulong)puVar16 >> uVar11);
          uVar20 = uVar20 - uVar11;
        } while (uVar13 != 0);
      }
LAB_1007dc6f4:
      lVar14 = lVar19 + 1;
      FUN_1007d7a1c(lVar19,0);
      param_3 = local_e8;
      lVar19 = lVar14;
    } while (lVar14 != local_e8);
  }
  *local_e0 = 1;
  *(long *)(local_e0 + 8) = param_3;
  return;
}



/* Address: 0x1007dc7e0 | FUN_1007dc7e0 */

void FUN_1007dc7e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1007dbaa4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007dc800 | FUN_1007dc800 */

void FUN_1007dc800(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1007dc468(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1007dc820 | FUN_1007dc820 */

void FUN_1007dc820(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007dc82c | FUN_1007dc82c */

undefined1  [16] FUN_1007dc82c(void)

{
  return ZEXT816(0x100f02cf8);
}



/* Address: 0x1007dc83c | FUN_1007dc83c */

void FUN_1007dc83c(code *param_1,undefined8 param_2,long param_3)

{
  (*param_1)(param_3 + 0x10,param_3 + 0x20);
  return;
}



/* Address: 0x1007dc868 | FUN_1007dc868 */

void FUN_1007dc868(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1007dc878 | thunk_FUN_1007dd4ac */

void thunk_FUN_1007dd4ac(void)

{
  FUN_1007dd4ac();
  return;
}



/* Address: 0x1007dc87c | FUN_1007dc87c */

long FUN_1007dc87c(undefined8 param_1,long param_2,char param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  
  lVar1 = Swift::Collection::get_count();
  FUN_1007d7edc();
  lVar2 = 0;
  if (param_3 != '\x01') {
    lVar2 = param_2;
  }
  if (lVar1 <= lVar2) {
    lVar1 = lVar2;
  }
  lVar2 = param_4;
  if (param_4 <= lVar1) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if (4 < lVar2) {
    FUN_1007dd4ac(lVar2,param_4);
    FUN_1007db514(param_1,lVar2 + 0x10,lVar2 + 0x20,param_5,param_6,param_7);
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Address: 0x1007dc934 | FUN_1007dc934 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007dcc80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

code * FUN_1007dc934(undefined8 param_1,undefined8 param_2,code *param_3,undefined4 param_4,
                    code *param_5,undefined8 param_6,long param_7,long param_8)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  Optional OVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  __int64 _Var10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_140;
  undefined8 local_138;
  long local_130;
  long local_128;
  long local_120;
  long local_118;
  undefined8 local_110;
  long local_108;
  code *local_100;
  long local_f8;
  long local_f0;
  undefined8 local_e8;
  code *local_e0;
  code *local_d8;
  undefined8 local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  long lStack_88;
  long local_80;
  undefined *local_78;
  char local_70;
  
  puVar3 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  local_e8 = (undefined *)(CONCAT44(local_e8._4_4_,param_4) & 0xffffffff000000ff);
  lVar16 = *(long *)(*(long *)(param_7 + 8) + 8);
  lVar5 = 0xff;
  local_f8 = param_7;
  local_e0 = param_5;
  local_d8 = param_3;
  local_d0 = param_1;
  local_b0 = param_8;
  _swift_getAssociatedTypeWitness
            (0xff,lVar16,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar6 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_Bool_100eac570,lVar5,0,0);
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  lVar8 = (long)&local_140 - (*(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_110 = *(undefined8 *)(lVar16 + 8);
  lVar7 = 0;
  local_108 = lVar6;
  local_100 = (code *)lVar8;
  _swift_getAssociatedTypeWitness
            (0,local_110,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  local_118 = *(long *)(lVar7 + -8);
  uVar13 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = lVar8 - uVar13;
  uVar13 = local_f0 - uVar13;
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar17 = uVar13 - (*(long *)(*(long *)(CONCAT71((int7)((ulong)lVar7 >> 8),OVar4.value) + -8) +
                              0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,lVar16,param_6,puVar3,
             PTR___associated_type_descriptor_for_Swift_Collection_Indices_100eabd10);
  lVar14 = lVar17 - (*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar16;
  local_130 = lVar14;
  _swift_getAssociatedConformanceWitness
            (lVar16,param_6,lVar8,puVar3,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Indices__Swift_Collection_100eac7f8
            );
  local_138 = *(undefined8 *)(lVar6 + 8);
  lVar6 = 0;
  local_128 = lVar8;
  _swift_getAssociatedTypeWitness
            (0,local_138,lVar8,puVar2,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_120 = *(long *)(lVar6 + -8);
  local_c0 = lVar14 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar5 + -8);
  uVar15 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c8 = local_c0 - uVar15;
  lVar14 = local_c8 - uVar15;
  local_b8 = lVar6;
  pcVar9 = (code *)Swift::Collection::get_count();
  FUN_1007d7edc();
  pcVar11 = (code *)0x0;
  if ((int)local_e8 != 1) {
    pcVar11 = local_d8;
  }
  if ((long)pcVar9 <= (long)pcVar11) {
    pcVar9 = pcVar11;
  }
  pcVar11 = local_e0;
  if ((long)local_e0 <= (long)pcVar9) {
    pcVar11 = pcVar9;
  }
  if ((long)pcVar11 < 5) {
    local_108 = lVar5;
    local_d8 = (code *)lVar8;
    _Var10 = Swift::Collection::get_count();
    if (_Var10 < 2) {
      Swift::Collection::_get_endIndex();
      pcVar11 = (code *)0x0;
    }
    else {
      lStack_88 = local_f8;
      local_80 = local_b0;
      local_90 = param_6;
      Swift::Sequence::_withContiguousStorageIfAvailable();
      if (local_70 == '\x01') {
        Swift::Array<undefined>::_allocateUninitialized(0,lVar7);
        local_78 = (undefined *)Swift::ContiguousArray::_init(_Var10,lVar7);
        _Var10 = Swift::Collection::get_count();
        local_e8 = Swift::ContiguousArray::typeMetadataAccessor();
        Swift::ContiguousArray::reserveCapacity(_Var10,local_e8);
        Swift::Collection::_get_indices();
        lVar6 = local_128;
        uVar12 = local_138;
        Swift::Sequence::_makeIterator();
        _swift_getAssociatedConformanceWitness
                  (uVar12,lVar6,local_b8,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                   PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                  );
        local_f8 = uVar12;
        Swift::IteratorProtocol::_next();
        pcVar11 = local_d8;
        lVar5 = local_108;
        local_100 = *(code **)((long)local_d8 + 0x30);
        lVar8 = lVar17;
        (*local_100)(lVar17,1,local_108);
        lVar6 = local_118;
        if ((int)lVar8 != 1) {
          local_e0 = *(code **)((long)pcVar11 + 0x20);
          lVar8 = local_c8;
          local_140 = param_2;
          do {
            (*local_e0)(lVar8,lVar17,lVar5);
            pcVar11 = (code *)auStack_a0;
            __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                      (pcVar11,lVar8,param_6,lVar16);
            pcVar9 = *(code **)(lVar6 + 0x10);
            (*pcVar9)(uVar13);
            (*pcVar11)(auStack_a0,0);
            puVar2 = local_78;
            uVar15 = uVar13;
            FUN_1007dd0dc(uVar13,local_78,lVar7,*(undefined8 *)(local_b0 + 8));
            lVar14 = local_f0;
            if ((uVar15 & 1) != 0) {
              (**(code **)(lVar6 + 8))(uVar13,lVar7);
              (**(code **)(local_120 + 8))(local_c0,local_b8);
              _swift_release(puVar2);
              (*local_e0)(local_d0,lVar8,lVar5);
              return (code *)0x0;
            }
            (*pcVar9)(local_f0,uVar13,lVar7);
            lVar8 = local_c8;
            Swift::ContiguousArray::append(lVar14,local_e8);
            (**(code **)(lVar6 + 8))(uVar13,lVar7);
            (**(code **)((long)local_d8 + 8))(lVar8,lVar5);
            Swift::IteratorProtocol::_next();
            lVar14 = lVar17;
            (*local_100)(lVar17,1,lVar5);
          } while ((int)lVar14 != 1);
        }
        (**(code **)(local_120 + 8))(local_c0,local_b8);
        Swift::Collection::_get_endIndex();
        _swift_release(local_78);
        pcVar11 = (code *)0x0;
      }
      else {
        Swift::Collection::_get_startIndex();
        Swift::RandomAccessCollection::_index(lVar14);
        (**(code **)((long)local_d8 + 8))(lVar14,local_108);
        pcVar11 = (code *)0x0;
      }
    }
  }
  else {
    FUN_1007dd4ac();
    pcVar9 = local_100;
    iVar1 = *(int *)(local_108 + 0x30);
    FUN_1007dbd8c((long)local_100 + (long)iVar1,param_2,pcVar11 + 0x10,pcVar11 + 0x20,param_6,
                  local_f8,local_b0);
    (**(code **)(lVar8 + 0x20))(local_d0,(long)pcVar9 + (long)iVar1,lVar5);
  }
  return pcVar11;
}



/* Address: 0x1007dcf3c | FUN_1007dcf3c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007dcfd0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007dcf3c(__int64 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  long lVar1;
  ContiguousArray<undefined> CVar2;
  ContiguousArray CVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_90 [8];
  __int64 *local_88;
  
  lVar1 = 0;
  local_88 = param_1;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(*(long *)(param_5 + 8) + 8) + 8),param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar5 = *(long *)(lVar1 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_90 + -uVar6;
  uVar6 = (long)puVar10 - uVar6;
  Swift::Array<undefined>::_allocateUninitialized(0,lVar1);
  CVar2 = Swift::ContiguousArray::_init(lVar1,lVar1);
  CVar3 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(param_3,CVar3);
  if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1007dd0dc);
      (*pcVar7)();
    }
    lVar8 = 0;
    lVar9 = *(long *)(lVar5 + 0x48);
    pcVar7 = *(code **)(lVar5 + 0x10);
    do {
      (*pcVar7)(uVar6,param_2,lVar1);
      uVar4 = uVar6;
      FUN_1007dd0dc(uVar6,CVar2.unknown,lVar1,*(undefined8 *)(param_6 + 8));
      if ((uVar4 & 1) != 0) {
        (**(code **)(lVar5 + 8))(uVar6,lVar1);
        param_3 = lVar8;
        break;
      }
      lVar8 = lVar8 + 1;
      (*pcVar7)(puVar10,uVar6,lVar1);
      Swift::ContiguousArray::append(puVar10,CVar3.unknown);
      (**(code **)(lVar5 + 8))(uVar6,lVar1);
      param_2 = param_2 + lVar9;
    } while (param_3 != lVar8);
  }
  _swift_release(CVar2.unknown);
  *local_88 = param_3;
  return;
}



/* Address: 0x1007dd0dc | FUN_1007dd0dc */

bool FUN_1007dd0dc(undefined8 param_1,ContiguousArray param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  _Var4 = Swift::ContiguousArray::get_count(param_2);
  if (_Var4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd1c4);
    (*pcVar2)();
  }
  lVar1 = 0;
  do {
    lVar6 = lVar1;
    if (_Var4 == lVar6) break;
    if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd1c0);
      (*pcVar2)();
    }
    Swift::ContiguousArray::get_subscript(lVar6,param_2);
    bVar3 = Swift::Equatable::___infix
                      (param_1,&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),
                       param_3,param_4);
    (**(code **)(lVar7 + 8))
              (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_3);
    lVar1 = lVar6 + 1;
  } while (!bVar3);
  return _Var4 != lVar6;
}



/* Address: 0x1007dd1c4 | FUN_1007dd1c4 */

long FUN_1007dd1c4(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar3 = (uVar5 & 0x3f) << (uVar5 & 0x3f);
  if (!SCARRY8(lVar3,0x40)) {
    lVar1 = lVar3 + 0x7e;
    if (0 < lVar3 + 0x40) {
      lVar1 = lVar3 + 0x3f;
    }
    lVar3 = 0;
    FUN_1007dd55c();
    _swift_allocObject();
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(lVar3 + 0x10) = uVar5;
    *(undefined8 *)(lVar3 + 0x18) = uVar4;
    _memcpy((void *)(lVar3 + 0x20),(void *)(param_1 + 0x20),(lVar1 >> 6) * 8);
    return lVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1007dd248);
  (*pcVar2)();
}



/* Address: 0x1007dd248 | FUN_1007dd248 */

undefined1  [16] FUN_1007dd248(long param_1)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  return *(undefined1 (*) [16])(param_1 + 0x10);
}



/* Address: 0x1007dd284 | FUN_1007dd284 */

undefined1  [16] FUN_1007dd284(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  
  _swift_beginAccess(param_2 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = param_2 + 0x10;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1007dd2c0 | FUN_1007dd2c0 */

void FUN_1007dd2c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,1,0);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  *(undefined8 *)(param_3 + 0x18) = param_2;
  return;
}


