/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10086e434 | FUN_10086e434 */

String FUN_10086e434(long param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  void *pvVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined *local_60 [2];
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  bVar5 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
  if ((bVar5 & 1) == 0) {
    puVar6 = &DAT_100fe8b10;
    FUN_1000f7830(&DAT_100fe8b10,&DAT_100c7ee38);
    pvVar8 = (void *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 6;
    *(undefined8 *)(puVar6 + 0x10) = 3;
    if (param_1 < -99) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10086e638);
      (*pcVar4)();
    }
    if (0x63ff < param_1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10086e63c);
      (*pcVar4)();
    }
    uVar1 = (((int)(param_1 / 100) + (int)(param_1 >> 0x3f)) -
             (SUB164(SEXT816(param_1) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f) & 0xffU) + 0x30;
    if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10086e640);
      (*pcVar4)();
    }
    uVar2 = (uint)(char)uVar1;
    uVar1 = ((uVar2 & 0x3f) << 8 | uVar2 >> 6 & 3) + 0x81c1;
    if ((uVar2 & 0x80000000) == 0) {
      uVar1 = uVar2 + 1 & 0xff;
    }
    SVar9.str = (char *)(4 - ((ulong)LZCOUNT(uVar1) >> 3));
    local_60[0] = (undefined *)
                  ((ulong)uVar1 + 0xfefefefefefeff &
                  (-1L << ((long)SVar9.str * 8 & 0x3fU) ^ 0xffffffffffffffffU));
    SVar9.bridgeObject = pvVar8;
    SVar9 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)local_60,SVar9);
    *(String *)(puVar6 + 0x20) = SVar9;
    iVar3 = (int)(short)param_1 / 10;
    uVar1 = iVar3 + ((iVar3 * 0x6667 >> 0x12) - (iVar3 * 0x6667 >> 0x1f)) * -10;
    if ((uVar1 >> 0xf & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10086e644);
      (*pcVar4)();
    }
    local_60[0] = (undefined *)((ulong)((int)(short)uVar1 + 0x30) & 0xffff);
    SVar10.bridgeObject = pvVar8;
    SVar10.str = &DAT_00000001;
    SVar9 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)local_60,SVar10);
    *(String *)(puVar6 + 0x30) = SVar9;
    uVar1 = (int)param_1 + iVar3 * -10;
    if ((uVar1 >> 0xf & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10086e648);
      (*pcVar4)();
    }
    local_60[0] = (undefined *)((ulong)((int)(short)uVar1 + 0x30) & 0xffff);
    SVar11.bridgeObject = pvVar8;
    SVar11.str = &DAT_00000001;
    SVar9 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)local_60,SVar11);
    *(String *)(puVar6 + 0x40) = SVar9;
    puVar7 = &DAT_100fe8b18;
    local_60[0] = puVar6;
    FUN_1000f7830(&DAT_100fe8b18,&DAT_100c7ee40);
    puVar6 = &DAT_100fe8b20;
    FUN_100134584(&DAT_100fe8b20,&DAT_100fe8b18,&DAT_100c7ee40,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    SVar9 = Swift::String::_init(local_60,puVar7,puVar6);
  }
  else {
    local_50 = param_1;
    uStack_48 = param_2;
    local_40 = param_3;
    SVar9 = Swift::String::_init(3);
  }
  return SVar9;
}



/* Address: 0x10086e648 | FUN_10086e648 */

undefined8 FUN_10086e648(undefined1 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  
  if (param_3 < -99) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10086e6e8);
    (*pcVar3)();
  }
  if (0x63ff < param_3) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10086e6ec);
    (*pcVar3)();
  }
  uVar1 = (((int)(param_3 / 100) + (int)(param_3 >> 0x3f)) -
           (SUB164(SEXT816(param_3) * ZEXT816(0xa3d70a3d70a3d70b),0xc) >> 0x1f) & 0xffU) + 0x30;
  if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10086e6f0);
    (*pcVar3)();
  }
  *param_1 = (char)uVar1;
  iVar2 = (int)(short)param_3 / 10;
  uVar1 = iVar2 + ((iVar2 * 0x6667 >> 0x12) - (iVar2 * 0x6667 >> 0x1f)) * -10;
  if ((uVar1 >> 0xf & 1) == 0) {
    param_1[1] = (char)uVar1 + '0';
    uVar1 = (int)param_3 + iVar2 * -10;
    if ((uVar1 >> 0xf & 1) == 0) {
      param_1[2] = (char)uVar1 + '0';
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10086e6f8);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10086e6f4);
  (*pcVar3)();
}



/* Address: 0x10086e6f8 | FUN_10086e6f8 */

void FUN_10086e6f8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_2;
  uVar1 = uVar3;
  if ((uVar3 & 0xffffff80) != 0x80 && 0x5d < uVar3 - 0x21) {
    uVar1 = 0x20;
  }
  uVar2 = uVar3;
  if (uVar3 != 0x20) {
    uVar2 = uVar1;
  }
  if (uVar3 != 9) {
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  return;
}



/* Address: 0x10086e730 | FUN_10086e730 */

void FUN_10086e730(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (*param_2 < 1000) {
    *param_1 = *param_2;
    param_1[1] = 0;
    param_1[2] = 0xe000000000000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10086e750);
  (*pcVar1)();
}



/* Address: 0x10086e750 | FUN_10086e750 */

String FUN_10086e750(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  long unaff_x20;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  SVar1 = *(String *)(unaff_x20 + 8);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x20;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar1,SVar5);
  return SVar2;
}



/* Address: 0x10086e7c4 | FUN_10086e7c4 */

undefined8 FUN_10086e7c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100870864();
  _swift_bridgeObjectRetain(param_3);
  return param_1;
}



/* Address: 0x10086e808 | FUN_10086e808 */

void FUN_10086e808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar6 = param_2;
  FUN_10086e434();
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x10);
  uVar3 = *(undefined8 *)(lVar7 + 0x18);
  uVar2 = *(undefined8 *)(lVar7 + 0x20);
  uVar4 = *(undefined8 *)(lVar7 + 0x28);
  uVar5 = *(undefined1 *)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  local_98 = uVar1;
  uStack_90 = uVar3;
  local_88 = uVar2;
  uStack_80 = uVar4;
  local_78 = uVar5;
  local_70 = param_1;
  uStack_68 = uVar6;
  FUN_10086e89c(&local_98);
  FUN_10086ea1c(param_2,param_3);
  return;
}



/* Address: 0x10086e89c | FUN_10086e89c */

void FUN_10086e89c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  __int64 _Var7;
  char *pcVar8;
  long lVar9;
  long *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (((undefined *)param_1[2] != (undefined *)0x7375746174733a ||
       (undefined *)param_1[3] != &DAT_e700000000000000) &&
     (bVar5 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)param_1[2],(undefined *)param_1[3],
                         (_StringComparisonResult)0x3a), !bVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10086ea1c);
    (*pcVar4)();
  }
  pcVar8 = ((String *)(param_1 + 5))->str;
  uVar14 = param_1[6];
  _Var7 = Swift::String::get_count(*(String *)(param_1 + 5));
  if (_Var7 != 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10086ea14);
    (*pcVar4)();
  }
  FUN_10087055c(pcVar8,uVar14);
  if (((ulong)pcVar8 & 1) == 0) {
    iVar6 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar12 = *unaff_x20;
    if (iVar6 == 0) {
      uVar14 = *(undefined8 *)(lVar12 + 0x10);
      uVar10 = *(undefined8 *)(lVar12 + 0x18);
      uVar15 = *(undefined8 *)(lVar12 + 0x20);
      uVar11 = *(undefined8 *)(lVar12 + 0x28);
      uVar3 = *(undefined1 *)(lVar12 + 0x30);
      uVar16 = *(undefined8 *)(lVar12 + 0x38);
      uVar13 = *(undefined8 *)(lVar12 + 0x40);
      uVar1 = *(undefined8 *)(lVar12 + 0x48);
      uVar2 = *(undefined8 *)(lVar12 + 0x50);
      lVar9 = 0;
      FUN_10087053c();
      _swift_allocObject();
      *(undefined8 *)(lVar9 + 0x10) = uVar14;
      *(undefined8 *)(lVar9 + 0x18) = uVar10;
      *(undefined8 *)(lVar9 + 0x20) = uVar15;
      *(undefined8 *)(lVar9 + 0x28) = uVar11;
      *(undefined1 *)(lVar9 + 0x30) = uVar3;
      *(undefined8 *)(lVar9 + 0x38) = uVar16;
      *(undefined8 *)(lVar9 + 0x40) = uVar13;
      *(undefined8 *)(lVar9 + 0x48) = uVar1;
      *(undefined8 *)(lVar9 + 0x50) = uVar2;
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar13);
      _swift_bridgeObjectRetain(uVar2);
      _swift_release(lVar12);
      *unaff_x20 = lVar9;
    }
    else {
      uVar10 = *(undefined8 *)(lVar12 + 0x18);
      uVar11 = *(undefined8 *)(lVar12 + 0x28);
      uVar13 = *(undefined8 *)(lVar12 + 0x40);
      lVar9 = lVar12;
    }
    uVar14 = *param_1;
    uVar16 = param_1[3];
    uVar15 = param_1[2];
    *(undefined8 *)(lVar9 + 0x18) = param_1[1];
    *(undefined8 *)(lVar9 + 0x10) = uVar14;
    *(undefined8 *)(lVar9 + 0x28) = uVar16;
    *(undefined8 *)(lVar9 + 0x20) = uVar15;
    uVar14 = param_1[4];
    *(undefined8 *)(lVar9 + 0x38) = param_1[5];
    *(undefined8 *)(lVar9 + 0x30) = uVar14;
    *(undefined8 *)(lVar9 + 0x40) = param_1[6];
    _swift_bridgeObjectRelease(uVar13);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(uVar10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10086ea18);
  (*pcVar4)();
}



/* Address: 0x10086ea1c | FUN_10086ea1c */

void FUN_10086ea1c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  int iVar9;
  long lVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  
  iVar9 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar11 = *unaff_x20;
  if (iVar9 == 0) {
    uVar1 = *(undefined8 *)(lVar11 + 0x10);
    uVar5 = *(undefined8 *)(lVar11 + 0x18);
    uVar2 = *(undefined8 *)(lVar11 + 0x20);
    uVar6 = *(undefined8 *)(lVar11 + 0x28);
    uVar8 = *(undefined1 *)(lVar11 + 0x30);
    uVar3 = *(undefined8 *)(lVar11 + 0x38);
    uVar7 = *(undefined8 *)(lVar11 + 0x40);
    uVar4 = *(undefined8 *)(lVar11 + 0x48);
    uVar12 = *(undefined8 *)(lVar11 + 0x50);
    lVar10 = 0;
    FUN_10087053c();
    _swift_allocObject();
    *(undefined8 *)(lVar10 + 0x10) = uVar1;
    *(undefined8 *)(lVar10 + 0x18) = uVar5;
    *(undefined8 *)(lVar10 + 0x20) = uVar2;
    *(undefined8 *)(lVar10 + 0x28) = uVar6;
    *(undefined1 *)(lVar10 + 0x30) = uVar8;
    *(undefined8 *)(lVar10 + 0x38) = uVar3;
    *(undefined8 *)(lVar10 + 0x40) = uVar7;
    *(undefined8 *)(lVar10 + 0x48) = uVar4;
    *(undefined8 *)(lVar10 + 0x50) = uVar12;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_bridgeObjectRetain(uVar7);
    _swift_bridgeObjectRetain(uVar12);
    _swift_release(lVar11);
    *unaff_x20 = lVar10;
  }
  else {
    uVar12 = *(undefined8 *)(lVar11 + 0x50);
    lVar10 = lVar11;
  }
  *(undefined8 *)(lVar10 + 0x48) = param_1;
  *(undefined8 *)(lVar10 + 0x50) = param_2;
  _swift_bridgeObjectRelease(uVar12);
  return;
}



/* Address: 0x10086eb0c | FUN_10086eb0c */

undefined1  [16] FUN_10086eb0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auVar3 [16];
  
  pvVar1 = (void *)0x98;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x98);
  }
  else {
    param_2 = 0xec8f;
    _swift_coroFrameAlloc();
  }
  *param_1 = pvVar1;
  *(undefined8 **)((long)pvVar1 + 0x88) = unaff_x20;
  uVar2 = *unaff_x20;
  *(undefined8 *)((long)pvVar1 + 0x90) = uVar2;
  FUN_100870864();
  *(undefined8 *)((long)pvVar1 + 0x70) = uVar2;
  *(undefined8 *)((long)pvVar1 + 0x78) = param_2;
  *(undefined8 *)((long)pvVar1 + 0x80) = param_3;
  _swift_bridgeObjectRetain(param_3);
  auVar3._8_8_ = (undefined8 *)((long)pvVar1 + 0x70);
  auVar3._0_8_ = FUN_10086eb88;
  return auVar3;
}



/* Address: 0x10086eb88 | FUN_10086eb88 */

void FUN_10086eb88(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar9 = param_1[0xe];
  uVar1 = param_1[0xf];
  uVar3 = param_1[0x10];
  lVar4 = param_1[0x12];
  if ((param_2 & 1) == 0) {
    uVar8 = uVar1;
    FUN_10086e434(uVar9,uVar1,uVar3);
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined1 *)(lVar4 + 0x30);
    param_1[7] = *(undefined8 *)(lVar4 + 0x10);
    param_1[8] = uVar5;
    param_1[9] = uVar2;
    param_1[10] = uVar6;
    *(undefined1 *)(param_1 + 0xb) = uVar7;
    param_1[0xc] = uVar9;
    param_1[0xd] = uVar8;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10086e89c(param_1 + 7);
    FUN_10086ea1c(uVar1,uVar3);
  }
  else {
    _swift_bridgeObjectRetain(uVar3);
    uVar8 = uVar1;
    FUN_10086e434(uVar9,uVar1,uVar3);
    uVar5 = *(undefined8 *)(lVar4 + 0x18);
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    uVar6 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined1 *)(lVar4 + 0x30);
    *param_1 = *(undefined8 *)(lVar4 + 0x10);
    param_1[1] = uVar5;
    param_1[2] = uVar2;
    param_1[3] = uVar6;
    *(undefined1 *)(param_1 + 4) = uVar7;
    param_1[5] = uVar9;
    param_1[6] = uVar8;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    FUN_10086e89c(param_1);
    FUN_10086ea1c(uVar1,uVar3);
    _swift_bridgeObjectRelease(param_1[0x10]);
  }
  _free(param_1);
  return;
}



/* Address: 0x10086ec80 | FUN_10086ec80 */

void FUN_10086ec80(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10086ecd4 | thunk_FUN_10086f034 */

void thunk_FUN_10086f034(void)

{
  FUN_10086f034();
  return;
}



/* Address: 0x10086ecd8 | thunk_FUN_10086f0e8 */

void thunk_FUN_10086f0e8(void)

{
  FUN_10086f0e8();
  return;
}



/* Address: 0x10086ecdc | thunk_FUN_10086f188 */

void thunk_FUN_10086f188(__int64 param_1)

{
  undefined8 uVar1;
  __uint8 _Var2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_88 [72];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar5.unknown = *(undefined **)(lVar8 + 0x18);
  HVar6.unknown = ((String *)(lVar8 + 0x20))->str;
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  SVar3 = *(String *)(lVar8 + 0x20);
  uVar1 = *(undefined8 *)(lVar8 + 0x40);
  SVar4 = *(String *)(lVar8 + 0x38);
  _Var2 = *(__uint8 *)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(HVar5.unknown);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  Swift::Hasher::_combine(_Var2,HVar6);
  Swift::String::hash((Hasher)auStack_88,SVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086ece0 | FUN_10086ece0 */

bool FUN_10086ece0(long *param_1,long *param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *param_1;
  lVar9 = *param_2;
  cVar5 = *(char *)(lVar8 + 0x30);
  _Var1.unknown = *(undefined **)(lVar8 + 0x38);
  _Var3.unknown = *(undefined **)(lVar8 + 0x40);
  cVar6 = *(char *)(lVar9 + 0x30);
  puVar2 = *(undefined **)(lVar9 + 0x38);
  puVar4 = *(undefined **)(lVar9 + 0x40);
  if (*(undefined **)(lVar8 + 0x20) == *(undefined **)(lVar9 + 0x20) &&
      *(undefined **)(lVar8 + 0x28) == *(undefined **)(lVar9 + 0x28)) {
    if (cVar5 != cVar6) {
      return false;
    }
  }
  else {
    bVar7 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(lVar8 + 0x20),
                       (_StringGuts)*(undefined **)(lVar8 + 0x28),
                       (_StringComparisonResult)(__int8)*(undefined **)(lVar9 + 0x20));
    if (!bVar7) {
      return false;
    }
    if (cVar5 != cVar6) {
      return false;
    }
  }
  if (_Var1.unknown == puVar2 && _Var3.unknown == puVar4) {
    return true;
  }
  bVar7 = Swift::_stringCompareWithSmolCheck(_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2);
  return bVar7;
}



/* Address: 0x10086ed9c | FUN_10086ed9c */

undefined1  [16] FUN_10086ed9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  void *pvVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  pvVar7 = (void *)0xe8;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar7 = _malloc(0xe8);
  }
  else {
    _swift_coroFrameAlloc(0xe8,0xe08c);
  }
  *param_1 = pvVar7;
  *(long **)((long)pvVar7 + 0xe0) = unaff_x20;
  lVar8 = *unaff_x20;
  uVar3 = *(undefined8 *)(lVar8 + 0x18);
  uVar1 = *(undefined8 *)(lVar8 + 0x20);
  uVar4 = *(undefined8 *)(lVar8 + 0x28);
  uVar6 = *(undefined1 *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x38);
  uVar5 = *(undefined8 *)(lVar8 + 0x40);
  *(undefined8 *)((long)pvVar7 + 0x70) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)((long)pvVar7 + 0x78) = uVar3;
  *(undefined8 *)((long)pvVar7 + 0x80) = uVar1;
  *(undefined8 *)((long)pvVar7 + 0x88) = uVar4;
  *(undefined1 *)((long)pvVar7 + 0x90) = uVar6;
  *(undefined8 *)((long)pvVar7 + 0x98) = uVar2;
  *(undefined8 *)((long)pvVar7 + 0xa0) = uVar5;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  auVar9._8_8_ = (undefined8 *)((long)pvVar7 + 0x70);
  auVar9._0_8_ = FUN_10086ee3c;
  return auVar9;
}



/* Address: 0x10086ee3c | FUN_10086ee3c */

void FUN_10086ee3c(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    param_1[8] = param_1[0xf];
    param_1[7] = param_1[0xe];
    param_1[10] = param_1[0x11];
    param_1[9] = param_1[0x10];
    param_1[0xc] = param_1[0x13];
    param_1[0xb] = param_1[0x12];
    param_1[0xd] = param_1[0x14];
    FUN_10086e89c(param_1 + 7);
  }
  else {
    param_1[1] = param_1[0xf];
    *param_1 = param_1[0xe];
    param_1[3] = param_1[0x11];
    param_1[2] = param_1[0x10];
    param_1[5] = param_1[0x13];
    param_1[4] = param_1[0x12];
    param_1[6] = param_1[0x14];
    FUN_100864328(param_1,param_1 + 0x15);
    FUN_10086e89c(param_1);
    uVar1 = param_1[0x11];
    uVar2 = param_1[0x14];
    _swift_bridgeObjectRelease(param_1[0xf]);
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar2);
  }
  _free(param_1);
  return;
}



/* Address: 0x10086eee4 | thunk_FUN_1008706f8 */

void thunk_FUN_1008706f8(void)

{
  FUN_1008706f8();
  return;
}



/* Address: 0x10086eee8 | FUN_10086eee8 */

void FUN_10086eee8(Hasher param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __uint8 _Var3;
  String SVar4;
  String SVar5;
  Hasher HVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  HVar6.unknown = ((String *)(param_2 + 0x20))->str;
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  SVar4 = *(String *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  SVar5 = *(String *)(param_2 + 0x38);
  _Var3 = *(__uint8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar2);
  Swift::String::hash(param_1,SVar4);
  Swift::Hasher::_combine(_Var3,HVar6);
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10086ef80 | FUN_10086ef80 */

void FUN_10086ef80(long param_1)

{
  undefined8 uVar1;
  __uint8 _Var2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  undefined8 uVar7;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(0);
  HVar5.unknown = *(undefined **)(param_1 + 0x18);
  HVar6.unknown = ((String *)(param_1 + 0x20))->str;
  uVar7 = *(undefined8 *)(param_1 + 0x28);
  SVar3 = *(String *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  SVar4 = *(String *)(param_1 + 0x38);
  _Var2 = *(__uint8 *)(param_1 + 0x30);
  _swift_bridgeObjectRetain(HVar5.unknown);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  Swift::Hasher::_combine(_Var2,HVar6);
  Swift::String::hash((Hasher)auStack_88,SVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086f034 | FUN_10086f034 */

void FUN_10086f034(void)

{
  undefined8 uVar1;
  __uint8 _Var2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_88 [72];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(0);
  HVar5.unknown = *(undefined **)(lVar8 + 0x18);
  HVar6.unknown = ((String *)(lVar8 + 0x20))->str;
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  SVar3 = *(String *)(lVar8 + 0x20);
  uVar1 = *(undefined8 *)(lVar8 + 0x40);
  SVar4 = *(String *)(lVar8 + 0x38);
  _Var2 = *(__uint8 *)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(HVar5.unknown);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  Swift::Hasher::_combine(_Var2,HVar6);
  Swift::String::hash((Hasher)auStack_88,SVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086f0e8 | FUN_10086f0e8 */

void FUN_10086f0e8(Hasher param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __uint8 _Var3;
  String SVar4;
  String SVar5;
  Hasher HVar6;
  long lVar7;
  long *unaff_x20;
  undefined8 uVar8;
  
  lVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar7 + 0x18);
  HVar6.unknown = ((String *)(lVar7 + 0x20))->str;
  uVar8 = *(undefined8 *)(lVar7 + 0x28);
  SVar4 = *(String *)(lVar7 + 0x20);
  uVar2 = *(undefined8 *)(lVar7 + 0x40);
  SVar5 = *(String *)(lVar7 + 0x38);
  _Var3 = *(__uint8 *)(lVar7 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar2);
  Swift::String::hash(param_1,SVar4);
  Swift::Hasher::_combine(_Var3,HVar6);
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10086f188 | FUN_10086f188 */

void FUN_10086f188(__int64 param_1)

{
  undefined8 uVar1;
  __uint8 _Var2;
  String SVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_88 [72];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar5.unknown = *(undefined **)(lVar8 + 0x18);
  HVar6.unknown = ((String *)(lVar8 + 0x20))->str;
  uVar7 = *(undefined8 *)(lVar8 + 0x28);
  SVar3 = *(String *)(lVar8 + 0x20);
  uVar1 = *(undefined8 *)(lVar8 + 0x40);
  SVar4 = *(String *)(lVar8 + 0x38);
  _Var2 = *(__uint8 *)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(HVar5.unknown);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar1);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  Swift::Hasher::_combine(_Var2,HVar6);
  Swift::String::hash((Hasher)auStack_88,SVar4);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086f238 | FUN_10086f238 */

void FUN_10086f238(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1008706f8(*param_1,*param_2);
  return;
}



/* Address: 0x10086f244 | thunk_FUN_100870798 */

undefined8 thunk_FUN_100870798(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  
  cVar5 = *(char *)(param_1 + 0x30);
  _Var1.unknown = *(undefined **)(param_1 + 0x38);
  _Var3.unknown = *(undefined **)(param_1 + 0x40);
  cVar6 = *(char *)(param_3 + 0x30);
  puVar2 = *(undefined **)(param_3 + 0x38);
  puVar4 = *(undefined **)(param_3 + 0x40);
  if ((((*(undefined **)(param_1 + 0x20) == *(undefined **)(param_3 + 0x20) &&
         *(undefined **)(param_1 + 0x28) == *(undefined **)(param_3 + 0x28)) ||
       (bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(param_1 + 0x20),
                           (_StringGuts)*(undefined **)(param_1 + 0x28),
                           (_StringComparisonResult)(__int8)*(undefined **)(param_3 + 0x20)), bVar7)
       ) && (cVar5 == cVar6)) &&
     ((_Var1.unknown == puVar2 && _Var3.unknown == puVar4 ||
      (bVar7 = Swift::_stringCompareWithSmolCheck
                         (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), bVar7)))) {
    FUN_100861ee4(param_2,param_4);
    return param_2;
  }
  return 0;
}



/* Address: 0x10086f248 | FUN_10086f248 */

void FUN_10086f248(Hasher param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  String SVar5;
  Hasher HVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  String SVar12;
  undefined1 auStack_78 [24];
  
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  HVar6.unknown = ((String *)(param_2 + 0x20))->str;
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  SVar12 = *(String *)(param_2 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  SVar5 = *(String *)(param_2 + 0x38);
  _Var4 = *(__uint8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar9);
  Swift::String::hash(param_1,SVar12);
  Swift::Hasher::_combine(_Var4,HVar6);
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar1);
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  lVar7 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain(lVar7);
    puVar11 = (undefined8 *)(lVar7 + 0x50);
    do {
      uVar1 = puVar11[-5];
      HVar6.unknown = ((String *)(puVar11 + -4))->str;
      uVar9 = puVar11[-3];
      SVar12 = *(String *)(puVar11 + -4);
      pcVar2 = (char *)puVar11[-1];
      pvVar3 = (void *)*puVar11;
      _Var4 = *(__uint8 *)(puVar11 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash(param_1,SVar12);
      Swift::Hasher::_combine(_Var4,HVar6);
      SVar12.bridgeObject = pvVar3;
      SVar12.str = pcVar2;
      Swift::String::hash(param_1,SVar12);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar1);
      puVar11 = puVar11 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease(lVar7);
  }
  return;
}



/* Address: 0x10086f3a0 | FUN_10086f3a0 */

void FUN_10086f3a0(long param_1,long param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  void *pvVar3;
  __uint8 _Var4;
  String SVar5;
  Hasher HVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  String SVar12;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [72];
  
  Swift::Hasher::init(0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  HVar6.unknown = ((String *)(param_1 + 0x20))->str;
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  SVar12 = *(String *)(param_1 + 0x20);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  SVar5 = *(String *)(param_1 + 0x38);
  _Var4 = *(__uint8 *)(param_1 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar9);
  _swift_bridgeObjectRetain(uVar8);
  Swift::String::hash((Hasher)auStack_a8,SVar12);
  Swift::Hasher::_combine(_Var4,HVar6);
  Swift::String::hash((Hasher)auStack_a8,SVar5);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar1);
  HVar6.unknown = (undefined *)(param_2 + 0x10);
  _swift_beginAccess(HVar6.unknown,auStack_c0,0,0);
  puVar7 = *(undefined **)(param_2 + 0x10);
  lVar10 = *(long *)(puVar7 + 0x10);
  if (lVar10 != 0) {
    _swift_bridgeObjectRetain(puVar7);
    puVar11 = (undefined8 *)(puVar7 + 0x50);
    do {
      uVar1 = puVar11[-5];
      HVar6.unknown = ((String *)(puVar11 + -4))->str;
      uVar8 = puVar11[-3];
      SVar12 = *(String *)(puVar11 + -4);
      pcVar2 = (char *)puVar11[-1];
      pvVar3 = (void *)*puVar11;
      _Var4 = *(__uint8 *)(puVar11 + -2);
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(pvVar3);
      Swift::String::hash((Hasher)auStack_a8,SVar12);
      Swift::Hasher::_combine(_Var4,HVar6);
      SVar12.bridgeObject = pvVar3;
      SVar12.str = pcVar2;
      Swift::String::hash((Hasher)auStack_a8,SVar12);
      _swift_bridgeObjectRelease(pvVar3);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar1);
      puVar11 = puVar11 + 8;
      lVar10 = lVar10 + -1;
    } while (lVar10 != 0);
    _swift_bridgeObjectRelease();
    HVar6.unknown = puVar7;
  }
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x10086f514 | FUN_10086f514 */

void FUN_10086f514(void)

{
  undefined8 *unaff_x20;
  
  FUN_10086f3a0(*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086f51c | FUN_10086f51c */

void FUN_10086f51c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086f248(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086f524 | FUN_10086f524 */

void FUN_10086f524(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Hasher HVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  HVar3.unknown = auStack_68;
  FUN_10086f248(HVar3.unknown,uVar1,uVar2);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10086f568 | FUN_10086f568 */

void FUN_10086f568(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100870798(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Address: 0x10086f57c | FUN_10086f57c */

String FUN_10086f57c(undefined8 param_1,char *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  FUN_100870864();
  pcVar1 = param_3;
  _swift_bridgeObjectRetain(param_3);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x20;
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar1;
  Swift::String::append(SVar3,SVar5);
  SVar4.bridgeObject = param_3;
  SVar4.str = param_2;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar1;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(param_3);
  return SVar2;
}



/* Address: 0x10086f604 | FUN_10086f604 */

String FUN_10086f604(undefined8 param_1,char *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  FUN_100870864();
  pcVar1 = param_3;
  _swift_bridgeObjectRetain(param_3);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x20;
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar1;
  Swift::String::append(SVar3,SVar5);
  SVar4.bridgeObject = param_3;
  SVar4.str = param_2;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar1;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(param_3);
  return SVar2;
}



/* Address: 0x10086f690 | FUN_10086f690 */

void FUN_10086f690(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  local_b0 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  local_a0 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  local_90 = *(undefined1 *)(param_2 + 0x30);
  local_88 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  puVar4 = auStack_78;
  local_a8 = uVar1;
  local_98 = uVar2;
  local_80 = uVar3;
  FUN_10007d048(puVar4,local_60);
  FUN_1008643e0();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  Swift::UnkeyedEncodingContainer::_encode(&local_b0,&DAT_100f06ee0,puVar4,local_60,uStack_58);
  uVar2 = local_98;
  uVar1 = local_a8;
  _swift_bridgeObjectRelease(local_80);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x10086f798 | FUN_10086f798 */

void FUN_10086f798(void)

{
  FUN_100870b70();
  return;
}



/* Address: 0x10086f7ac | FUN_10086f7ac */

void FUN_10086f7ac(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_100870b70();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10086f7d4 | FUN_10086f7d4 */

void FUN_10086f7d4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086f690(param_1,*unaff_x20);
  return;
}



/* Address: 0x10086f7ec | FUN_10086f7ec */

void FUN_10086f7ec(void)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar1 = (undefined *)0xec00000073646c65;
  pcVar3 = (char *)0x6946726564616568;
  if (cVar2 != '\x01') {
    puVar1 = (undefined *)0xec00000065736172;
    pcVar3 = (char *)0x68506e6f73616572;
  }
  HVar5.unknown = (undefined *)0x8000000100db2650;
  pcVar4 = (char *)0xd000000000000012;
  if (cVar2 != '\0') {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086f8a0 | FUN_10086f8a0 */

void FUN_10086f8a0(Hasher param_1)

{
  void *pvVar1;
  void *pvVar2;
  char *pcVar3;
  char *pcVar4;
  char *unaff_x20;
  String SVar5;
  
  pvVar1 = (void *)0xec00000073646c65;
  pcVar3 = (char *)0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    pvVar1 = (void *)0xec00000065736172;
    pcVar3 = (char *)0x68506e6f73616572;
  }
  pvVar2 = (void *)0x8000000100db2650;
  pcVar4 = (char *)0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pvVar2 = pvVar1;
    pcVar4 = pcVar3;
  }
  SVar5.bridgeObject = pvVar2;
  SVar5.str = pcVar4;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}



/* Address: 0x10086f930 | FUN_10086f930 */

void FUN_10086f930(__int64 param_1)

{
  undefined *puVar1;
  char cVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar1 = (undefined *)0xec00000073646c65;
  pcVar3 = (char *)0x6946726564616568;
  if (cVar2 != '\x01') {
    puVar1 = (undefined *)0xec00000065736172;
    pcVar3 = (char *)0x68506e6f73616572;
  }
  HVar5.unknown = (undefined *)0x8000000100db2650;
  pcVar4 = (char *)0xd000000000000012;
  if (cVar2 != '\0') {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10086f9e0 | FUN_10086f9e0 */

void FUN_10086f9e0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10087128c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10086fa0c | FUN_10086fa0c */

void FUN_10086fa0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar1 = 0xec00000073646c65;
  uVar3 = 0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xec00000065736172;
    uVar3 = 0x68506e6f73616572;
  }
  uVar2 = 0x8000000100db2650;
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x10086fa80 | FUN_10086fa80 */

undefined1  [16] FUN_10086fa80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar1 = 0xec00000073646c65;
  uVar3 = 0x6946726564616568;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0xec00000065736172;
    uVar3 = 0x68506e6f73616572;
  }
  uVar2 = 0x8000000100db2650;
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    uVar2 = uVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = uVar2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x10086faf0 | FUN_10086faf0 */

void FUN_10086faf0(undefined1 *param_1,undefined1 param_2)

{
  FUN_10087128c();
  *param_1 = param_2;
  return;
}



/* Address: 0x10086fb14 | FUN_10086fb14 */

String FUN_10086fb14(void)

{
  String SVar1;
  
  FUN_10087120c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10086fb3c | FUN_10086fb3c */

String FUN_10086fb3c(void)

{
  String SVar1;
  
  FUN_10087120c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10086fb64 | FUN_10086fb64 */

/* WARNING: Removing unreachable block (ram,0x00010086fc84) */

void FUN_10086fb64(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  KeyedEncodingContainer<undefined> KVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  long local_58;
  
  puVar2 = &DAT_100fe8988;
  FUN_1000f7830(&DAT_100fe8988,&DAT_100c7e948);
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10087120c();
  KVar3 = Swift::Encoder::_container();
  local_61 = 0;
  local_58 = param_2;
  FUN_10087124c();
  Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar2,&DAT_100f07d90,KVar3.unknown);
  if (unaff_x21 == 0) {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    uVar4 = *(undefined8 *)(param_2 + 0x50);
    local_58 = CONCAT71(local_58._1_7_,2);
    _swift_bridgeObjectRetain(uVar4);
    Swift::KeyedEncodingContainer::_encode(uVar1,uVar4,&local_58,puVar2);
    _swift_bridgeObjectRelease(uVar4);
    local_61 = 1;
    local_58 = param_3;
    FUN_10086dcd8();
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar2,&DAT_100f072e0,uVar4);
    (**(code **)(lVar6 + 8))(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
  }
  else {
    (**(code **)(lVar6 + 8))(auStack_70 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
  }
  return;
}



/* Address: 0x10086fd18 | FUN_10086fd18 */

void FUN_10086fd18(void)

{
  FUN_1008712f0();
  return;
}



/* Address: 0x10086fd2c | FUN_10086fd2c */

void FUN_10086fd2c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_1008712f0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10086fd54 | FUN_10086fd54 */

void FUN_10086fd54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10086fb64(param_1,*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x10086fd6c | FUN_10086fd6c */

undefined8 FUN_10086fd6c(void)

{
  return 100;
}



/* Address: 0x10086fd88 | FUN_10086fd88 */

undefined8 FUN_10086fd88(void)

{
  return 0x65;
}



/* Address: 0x10086fda8 | FUN_10086fda8 */

undefined8 FUN_10086fda8(void)

{
  return 0x67;
}



/* Address: 0x10086fdcc | FUN_10086fdcc */

undefined8 FUN_10086fdcc(void)

{
  return 200;
}



/* Address: 0x10086fddc | FUN_10086fddc */

undefined8 FUN_10086fddc(void)

{
  return 0xc9;
}



/* Address: 0x10086fdf8 | FUN_10086fdf8 */

undefined8 FUN_10086fdf8(void)

{
  return 0xca;
}



/* Address: 0x10086fe14 | FUN_10086fe14 */

undefined8 FUN_10086fe14(void)

{
  return 0xcb;
}



/* Address: 0x10086fe34 | FUN_10086fe34 */

undefined8 FUN_10086fe34(void)

{
  return 0xcc;
}



/* Address: 0x10086fe54 | FUN_10086fe54 */

undefined8 FUN_10086fe54(void)

{
  return 0xcd;
}



/* Address: 0x10086fe7c | FUN_10086fe7c */

undefined8 FUN_10086fe7c(void)

{
  return 0xce;
}



/* Address: 0x10086fea4 | FUN_10086fea4 */

undefined8 FUN_10086fea4(void)

{
  return 300;
}



/* Address: 0x10086fec4 | FUN_10086fec4 */

undefined8 FUN_10086fec4(void)

{
  return 0x12d;
}



/* Address: 0x10086fee4 | FUN_10086fee4 */

undefined8 FUN_10086fee4(void)

{
  return 0x12e;
}


