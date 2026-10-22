/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10086fefc | FUN_10086fefc */

undefined8 FUN_10086fefc(void)

{
  return 0x12f;
}



/* Address: 0x10086ff1c | FUN_10086ff1c */

undefined8 FUN_10086ff1c(void)

{
  return 0x130;
}



/* Address: 0x10086ff40 | FUN_10086ff40 */

undefined8 FUN_10086ff40(void)

{
  return 0x133;
}



/* Address: 0x10086ff60 | FUN_10086ff60 */

undefined8 FUN_10086ff60(void)

{
  return 0x134;
}



/* Address: 0x10086ff80 | FUN_10086ff80 */

undefined8 FUN_10086ff80(void)

{
  return 400;
}



/* Address: 0x10086ffa4 | FUN_10086ffa4 */

undefined8 FUN_10086ffa4(void)

{
  return 0x191;
}



/* Address: 0x10086ffc8 | FUN_10086ffc8 */

undefined8 FUN_10086ffc8(void)

{
  return 0x193;
}



/* Address: 0x10086ffe8 | FUN_10086ffe8 */

undefined8 FUN_10086ffe8(void)

{
  return 0x194;
}



/* Address: 0x100870008 | FUN_100870008 */

undefined8 FUN_100870008(void)

{
  return 0x195;
}



/* Address: 0x100870028 | FUN_100870028 */

undefined8 FUN_100870028(void)

{
  return 0x196;
}



/* Address: 0x100870050 | FUN_100870050 */

undefined8 FUN_100870050(void)

{
  return 0x197;
}



/* Address: 0x100870070 | FUN_100870070 */

undefined8 FUN_100870070(void)

{
  return 0x198;
}



/* Address: 0x100870098 | FUN_100870098 */

undefined8 FUN_100870098(void)

{
  return 0x199;
}



/* Address: 0x1008700b4 | FUN_1008700b4 */

undefined8 FUN_1008700b4(void)

{
  return 0x19a;
}



/* Address: 0x1008700c8 | FUN_1008700c8 */

undefined8 FUN_1008700c8(void)

{
  return 0x19b;
}



/* Address: 0x1008700f0 | FUN_1008700f0 */

undefined8 FUN_1008700f0(void)

{
  return 0x19c;
}



/* Address: 0x100870110 | FUN_100870110 */

undefined8 FUN_100870110(void)

{
  return 0x19e;
}



/* Address: 0x100870134 | FUN_100870134 */

undefined8 FUN_100870134(void)

{
  return 0x19f;
}



/* Address: 0x100870154 | FUN_100870154 */

undefined8 FUN_100870154(void)

{
  return 0x1a0;
}



/* Address: 0x100870174 | FUN_100870174 */

undefined8 FUN_100870174(void)

{
  return 0x1a1;
}



/* Address: 0x100870194 | FUN_100870194 */

undefined8 FUN_100870194(void)

{
  return 0x1a5;
}



/* Address: 0x1008701b4 | FUN_1008701b4 */

undefined8 FUN_1008701b4(void)

{
  return 0x1a6;
}



/* Address: 0x1008701d4 | FUN_1008701d4 */

undefined8 FUN_1008701d4(void)

{
  return 0x1a9;
}



/* Address: 0x1008701f4 | FUN_1008701f4 */

undefined8 FUN_1008701f4(void)

{
  return 0x1aa;
}



/* Address: 0x100870214 | FUN_100870214 */

undefined8 FUN_100870214(void)

{
  return 0x1ac;
}



/* Address: 0x100870234 | FUN_100870234 */

undefined8 FUN_100870234(void)

{
  return 0x1ad;
}



/* Address: 0x100870254 | FUN_100870254 */

undefined8 FUN_100870254(void)

{
  return 0x1af;
}



/* Address: 0x100870274 | FUN_100870274 */

undefined8 FUN_100870274(void)

{
  return 0x1c3;
}



/* Address: 0x100870294 | FUN_100870294 */

undefined8 FUN_100870294(void)

{
  return 500;
}



/* Address: 0x1008702b4 | FUN_1008702b4 */

undefined8 FUN_1008702b4(void)

{
  return 0x1f5;
}



/* Address: 0x1008702dc | FUN_1008702dc */

undefined8 FUN_1008702dc(void)

{
  return 0x1f6;
}



/* Address: 0x100870300 | FUN_100870300 */

undefined8 FUN_100870300(void)

{
  return 0x1f7;
}



/* Address: 0x100870320 | FUN_100870320 */

undefined8 FUN_100870320(void)

{
  return 0x1f8;
}



/* Address: 0x100870348 | FUN_100870348 */

undefined8 FUN_100870348(void)

{
  return 0x1f9;
}



/* Address: 0x100870368 | FUN_100870368 */

undefined8 FUN_100870368(void)

{
  return 0x1ff;
}



/* Address: 0x100870388 | FUN_100870388 */

undefined8 FUN_100870388(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100870538);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
        }
        else {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10))
        ;
        if (uVar6 == uVar7) goto LAB_1008704b0;
LAB_100870458:
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1008704c0;
LAB_10087045c:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        uVar5 = (uint)_Var3;
        if (uVar6 != uVar7) goto LAB_100870458;
LAB_1008704b0:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_10087045c;
LAB_1008704c0:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10087053c);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      if ((((uVar5 != 0x20) && (uVar5 != 9)) && (uVar5 >> 7 == 0)) && (0x5d < (uVar5 - 0x21 & 0xff))
         ) {
        return 1;
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x10087053c | FUN_10087053c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10087053c(void)

{
  return ZEXT816(0x100fe8a00);
}



/* Address: 0x10087055c | FUN_10087055c */

bool FUN_10087055c(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar7 = 4L << uVar5;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    uVar6 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (uVar6 == uVar1 * 4) break;
    uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
    position.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (uVar8 == uVar7) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008706f4);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        UVar4.unknown = (undefined *)&local_70;
      }
      _Var3 = *(__uint8 *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
      if (uVar8 == uVar7) goto LAB_1008706b0;
LAB_100870654:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_1008705c8;
LAB_100870658:
      if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008706f8);
        (*pcVar2)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
    }
    else {
      _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
      if (uVar8 != uVar7) goto LAB_100870654;
LAB_1008706b0:
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_100870658;
LAB_1008705c8:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    }
  } while ((byte)(_Var3 - 0x30) < 10);
  return uVar6 != uVar1 * 4;
}



/* Address: 0x1008706f8 | FUN_1008706f8 */

undefined8 FUN_1008706f8(long param_1,long param_2)

{
  _StringGuts _Var1;
  undefined *puVar2;
  _StringGuts _Var3;
  undefined *puVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  undefined8 uVar8;
  
  cVar5 = *(char *)(param_1 + 0x30);
  _Var1.unknown = *(undefined **)(param_1 + 0x38);
  _Var3.unknown = *(undefined **)(param_1 + 0x40);
  cVar6 = *(char *)(param_2 + 0x30);
  puVar2 = *(undefined **)(param_2 + 0x38);
  puVar4 = *(undefined **)(param_2 + 0x40);
  if ((((*(undefined **)(param_1 + 0x20) == *(undefined **)(param_2 + 0x20) &&
         *(undefined **)(param_1 + 0x28) == *(undefined **)(param_2 + 0x28)) ||
       (bVar7 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(param_1 + 0x20),
                           (_StringGuts)*(undefined **)(param_1 + 0x28),
                           (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x20)), bVar7)
       ) && (cVar5 == cVar6)) &&
     ((_Var1.unknown == puVar2 && _Var3.unknown == puVar4 ||
      (bVar7 = Swift::_stringCompareWithSmolCheck
                         (_Var1,_Var3,(_StringComparisonResult)(__int8)puVar2), bVar7)))) {
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
  }
  return uVar8;
}



/* Address: 0x100870798 | FUN_100870798 */

undefined8 FUN_100870798(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

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



/* Address: 0x100870864 | FUN_100870864 */

/* WARNING: Type propagation algorithm not settling */

int FUN_100870864(long param_1)

{
  ulong uVar1;
  UTF8View UVar2;
  ulong uVar3;
  code *pcVar4;
  byte bVar5;
  byte bVar6;
  __uint8 _Var7;
  Index IVar8;
  UnsafeBufferPointer<__int8> UVar9;
  uint uVar10;
  Index IVar11;
  uint uVar12;
  ulong uVar14;
  ulong uVar15;
  undefined *local_70;
  ulong uStack_68;
  UTF8View UVar13;
  
  UVar2.unknown = *(undefined **)(param_1 + 0x38);
  uVar3 = *(ulong *)(param_1 + 0x40);
  uVar1 = (ulong)UVar2.unknown & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100870ac8);
    (*pcVar4)();
  }
  uVar10 = (uint)((ulong)UVar2.unknown >> 0x3b) & 1;
  if ((uVar3 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  if ((uVar3 >> 0x3c & 1) == 0) {
    UVar13.unknown = UVar2.unknown;
    if ((uVar3 >> 0x3d & 1) == 0) {
      if (((ulong)UVar2.unknown >> 0x3c & 1) == 0) {
        UVar9 = Swift::_StringObject::get_sharedUTF8(UVar2.unknown);
      }
      else {
        UVar9.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
      }
      UVar13.unknown = (undefined *)(ulong)(byte)*UVar9.unknown;
    }
    uVar12 = (uint)UVar13.unknown;
    IVar11.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x10004;
  }
  else {
    _Var7 = Swift::String::UTF8View::_foreignSubscript((Index)0xf,UVar2);
    uVar12 = (uint)_Var7;
    IVar11 = Swift::String::UTF8View::_foreignIndex((Index)0xf,UVar2);
  }
  uVar12 = (uVar12 & 0xff) - 0x30;
  if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100870af8);
    (*pcVar4)();
  }
  if (uVar1 * 4 - ((ulong)IVar11.cmsgPointer.unknown >> 0xe) == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100870afc);
    (*pcVar4)();
  }
  uVar15 = 4L << uVar10;
  IVar8.cmsgPointer.unknown = IVar11.cmsgPointer.unknown;
  if (((ulong)IVar11.cmsgPointer.unknown & 0xc) == uVar15) {
    FUN_1000740a8(IVar11.cmsgPointer.unknown,UVar2.unknown,uVar3);
  }
  uVar14 = (ulong)IVar8.cmsgPointer.unknown >> 0x10;
  if (uVar1 <= uVar14) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b14);
    (*pcVar4)();
  }
  if ((uVar3 >> 0x3c & 1) == 0) {
    if ((uVar3 >> 0x3d & 1) == 0) {
      if (((ulong)UVar2.unknown >> 0x3c & 1) == 0) {
        UVar9 = Swift::_StringObject::get_sharedUTF8(UVar2.unknown);
      }
      else {
        UVar9.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
      }
      bVar5 = UVar9.unknown[uVar14];
    }
    else {
      local_70 = UVar2.unknown;
      uStack_68 = uVar3 & 0xffffffffffffff;
      bVar5 = *(byte *)((long)&local_70 + uVar14);
    }
  }
  else {
    bVar5 = Swift::String::UTF8View::_foreignSubscript(IVar8,UVar2);
  }
  if (((ulong)IVar11.cmsgPointer.unknown & 0xc) == uVar15) {
    FUN_1000740a8(IVar11.cmsgPointer.unknown,UVar2.unknown,uVar3);
  }
  if ((uVar3 >> 0x3c & 1) == 0) {
    IVar11.cmsgPointer.unknown =
         (UnsafeMutablePointer)(((ulong)IVar11.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
  }
  else {
    if (uVar1 <= (ulong)IVar11.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b4c);
      (*pcVar4)();
    }
    IVar11 = Swift::String::UTF8View::_foreignIndex(IVar11,UVar2);
  }
  if ((bVar5 - 0x30 & 0xffffff00) == 0) {
    if (uVar1 * 4 - ((ulong)IVar11.cmsgPointer.unknown >> 0xe) == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b1c);
      (*pcVar4)();
    }
    IVar8.cmsgPointer.unknown = IVar11.cmsgPointer.unknown;
    if (((ulong)IVar11.cmsgPointer.unknown & 0xc) == uVar15) {
      FUN_1000740a8(IVar11.cmsgPointer.unknown,UVar2.unknown,uVar3);
    }
    uVar14 = (ulong)IVar8.cmsgPointer.unknown >> 0x10;
    if (uVar1 <= uVar14) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b34);
      (*pcVar4)();
    }
    if ((uVar3 >> 0x3c & 1) == 0) {
      if ((uVar3 >> 0x3d & 1) == 0) {
        if (((ulong)UVar2.unknown >> 0x3c & 1) == 0) {
          UVar9 = Swift::_StringObject::get_sharedUTF8(UVar2.unknown);
        }
        else {
          UVar9.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
        }
        bVar6 = UVar9.unknown[uVar14];
      }
      else {
        local_70 = UVar2.unknown;
        uStack_68 = uVar3 & 0xffffffffffffff;
        bVar6 = *(byte *)((long)&local_70 + uVar14);
      }
    }
    else {
      bVar6 = Swift::String::UTF8View::_foreignSubscript(IVar8,UVar2);
    }
    if (((ulong)IVar11.cmsgPointer.unknown & 0xc) == uVar15) {
      FUN_1000740a8(IVar11.cmsgPointer.unknown,UVar2.unknown,uVar3);
    }
    if ((uVar3 >> 0x3c & 1) != 0) {
      if (uVar1 <= (ulong)IVar11.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b50);
        (*pcVar4)();
      }
      Swift::String::UTF8View::_foreignIndex(IVar11,UVar2);
    }
    if ((bVar6 - 0x30 & 0xffffff00) == 0) {
      return (uVar12 & 0xff) * 100 + (bVar5 - 0x30 & 0xff) * 10 + (bVar6 - 0x30 & 0xff);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b38);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100870b18);
  (*pcVar4)();
}



/* Address: 0x100870b70 | FUN_100870b70 */

/* WARNING: Removing unreachable block (ram,0x000100870db4) */

char * FUN_100870b70(char *param_1)

{
  String SVar1;
  bool bVar2;
  DecodingError DVar3;
  char *pcVar4;
  __int64 _Var5;
  char *pcVar6;
  DecodingError DVar28;
  _StringGuts _Var7;
  undefined *puVar8;
  undefined1 *puVar9;
  char cVar10;
  long unaff_x21;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  char *pcVar14;
  char *pcVar15;
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
  char *local_e0;
  char *local_c8;
  undefined *local_c0;
  char *local_b8;
  undefined1 *puStack_b0;
  char local_a8;
  char *local_a0;
  undefined *puStack_98;
  char acStack_90 [24];
  undefined8 local_78;
  
  pcVar6 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_unkeyedContainer();
  if (unaff_x21 != 0) goto LAB_1008710f0;
  pcVar6 = acStack_90;
  FUN_100004640(pcVar6,local_78);
  bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
  if (bVar2) {
LAB_100870bec:
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    _DVar28 = (__int8)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(DVar3.value,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    Swift::DecodingError::_dataCorruptedError(0x10,_DVar28,acStack_90,0xd000000000000028);
    _swift_willThrow();
  }
  else {
    local_e0 = (char *)0x0;
    puVar11 = (undefined *)0x0;
    pcVar15 = (char *)0x0;
    puVar12 = (undefined1 *)0x0;
    cVar10 = '\0';
    pcVar14 = (char *)0x0;
    puVar13 = (undefined *)0x0;
    do {
      while( true ) {
        FUN_10007d048(acStack_90,local_78);
        FUN_10086523c();
        Swift::UnkeyedDecodingContainer::_decode();
        if ((local_b8 == (char *)0x7375746174733a && puStack_b0 == &DAT_e700000000000000) ||
           (pcVar6 = local_b8, puVar9 = puStack_b0,
           bVar2 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x7375746174733a,(_StringGuts)0xe700000000000000,
                              (_StringComparisonResult)(__int8)local_b8), bVar2)) break;
        pcVar4 = local_c8;
        _Var7.unknown = local_c0;
        FUN_100830fd0();
        if ((((uint)pcVar4 & 0xff00) == 0x100) || (((uint)pcVar4 & 0xff) != 0x3a)) {
          Swift::_StringGuts::grow(0x21,_Var7);
          _swift_bridgeObjectRelease(0xe000000000000000);
          _swift_bridgeObjectRetain(local_c0);
          SVar16.bridgeObject = &SUB_e200000000000000;
          SVar16.str = (char *)0x203a;
          SVar22.bridgeObject = puVar9;
          SVar22.str = pcVar6;
          Swift::String::append(SVar16,SVar22);
          pcVar4 = local_a0;
          FUN_100858afc(local_a0,puStack_98);
          puVar8 = puStack_98;
          if (((ulong)pcVar4 & 1) == 0) {
            _swift_bridgeObjectRetain(puStack_98);
          }
          else {
            FUN_100872ba8();
          }
          SVar18.bridgeObject = puVar8;
          SVar18.str = local_a0;
          SVar23.bridgeObject = puVar9;
          SVar23.str = pcVar6;
          Swift::String::append(SVar18,SVar23);
          _swift_bridgeObjectRelease(puVar8);
          SVar1.bridgeObject = local_c0;
          SVar1.str = local_c8;
          SVar24.bridgeObject = puVar9;
          SVar24.str = pcVar6;
          Swift::String::append(SVar1,SVar24);
          _swift_bridgeObjectRelease(local_c0);
          SVar19.bridgeObject = (void *)0x8000000100db2670;
          SVar19.str = (char *)0xd00000000000001e;
          SVar25.bridgeObject = puVar9;
          SVar25.str = pcVar6;
          Swift::String::append(SVar19,SVar25);
          DVar3 = Swift::DecodingError::typeMetadataAccessor();
          _DVar28 = (__int8)
                    PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
          ;
          _swift_allocError(DVar3.value,
                            PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                            ,0,0);
          Swift::DecodingError::_dataCorruptedError(0,_DVar28,acStack_90,0x22);
          _swift_bridgeObjectRelease(0xe100000000000000);
          _swift_willThrow();
          pcVar6 = (char *)0xe100000000000000;
LAB_100870fc8:
          FUN_100864364(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
          _swift_bridgeObjectRelease(puStack_98);
          _swift_bridgeObjectRelease(puStack_b0);
          _swift_bridgeObjectRelease(local_c0);
          goto LAB_1008710e4;
        }
        _swift_bridgeObjectRelease(puStack_98);
        _swift_bridgeObjectRelease(puStack_b0);
        _swift_bridgeObjectRelease(local_c0);
        pcVar6 = acStack_90;
        FUN_100004640(pcVar6,local_78);
        bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
        if (bVar2) goto LAB_100870e48;
      }
      if (puVar11 != (undefined *)0x0) {
        FUN_100867d14(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
        FUN_100864364(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
        FUN_100864364(0,0,0,0,0,0,0);
        DVar3 = Swift::DecodingError::typeMetadataAccessor();
        _DVar28 = (__int8)
                  PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
        ;
        _swift_allocError(DVar3.value,
                          PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                          ,0,0);
        Swift::DecodingError::_dataCorruptedError(0xe0,_DVar28,acStack_90,0xd000000000000027);
        _swift_willThrow();
        pcVar6 = pcVar15;
        goto LAB_100870fc8;
      }
      FUN_100864364(local_e0,0,pcVar15,puVar12,cVar10,pcVar14,puVar13);
      pcVar6 = acStack_90;
      FUN_100004640(pcVar6);
      bVar2 = Swift::UnkeyedDecodingContainer::get_isAtEnd();
      puVar11 = local_c0;
      puVar12 = puStack_b0;
      puVar13 = puStack_98;
      local_e0 = local_c8;
      pcVar14 = local_a0;
      pcVar15 = local_b8;
      cVar10 = local_a8;
    } while (!bVar2);
LAB_100870e48:
    if (puVar11 == (undefined *)0x0) goto LAB_100870bec;
    pcVar6 = pcVar15;
    puVar9 = puVar12;
    FUN_100867d14(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
    _swift_bridgeObjectRetain(puVar13);
    SVar17.bridgeObject = puVar13;
    SVar17.str = pcVar14;
    _Var7.unknown = puVar13;
    _Var5 = Swift::String::get_count(SVar17);
    if (_Var5 == 3) {
      pcVar4 = pcVar14;
      _Var7.unknown = puVar13;
      FUN_10087055c();
      _swift_bridgeObjectRelease(puVar13);
      if (((ulong)pcVar4 & 1) == 0) {
        FUN_100864364(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
        pcVar6 = (char *)0x0;
        FUN_10087053c();
        _swift_allocObject();
        *(char **)(pcVar6 + 0x10) = local_e0;
        *(undefined **)(pcVar6 + 0x18) = puVar11;
        *(char **)(pcVar6 + 0x20) = pcVar15;
        *(undefined1 **)(pcVar6 + 0x28) = puVar12;
        pcVar6[0x30] = cVar10;
        *(char **)(pcVar6 + 0x38) = pcVar14;
        *(undefined **)(pcVar6 + 0x40) = puVar13;
        pcVar6[0x48] = '\0';
        pcVar6[0x49] = '\0';
        pcVar6[0x4a] = '\0';
        pcVar6[0x4b] = '\0';
        pcVar6[0x4c] = '\0';
        pcVar6[0x4d] = '\0';
        pcVar6[0x4e] = '\0';
        pcVar6[0x4f] = '\0';
        pcVar6[0x50] = '\0';
        pcVar6[0x51] = '\0';
        pcVar6[0x52] = '\0';
        pcVar6[0x53] = '\0';
        pcVar6[0x54] = '\0';
        pcVar6[0x55] = '\0';
        pcVar6[0x56] = '\0';
        pcVar6[0x57] = -0x20;
        FUN_100004594(acStack_90);
        FUN_100004594(param_1);
        return pcVar6;
      }
    }
    else {
      _swift_bridgeObjectRelease(puVar13);
    }
    Swift::_StringGuts::grow(0x1f,_Var7);
    _swift_bridgeObjectRelease(0xe000000000000000);
    _swift_bridgeObjectRetain(puVar13);
    SVar20.bridgeObject = puVar13;
    SVar20.str = pcVar14;
    SVar26.bridgeObject = puVar9;
    SVar26.str = pcVar6;
    Swift::String::append(SVar20,SVar26);
    pcVar6 = pcVar15;
    puVar9 = puVar12;
    FUN_100864364(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
    _swift_bridgeObjectRelease(puVar13);
    SVar21.bridgeObject = (void *)0x8000000100db2a40;
    SVar21.str = (char *)0xd00000000000001c;
    SVar27.bridgeObject = puVar9;
    SVar27.str = pcVar6;
    Swift::String::append(SVar21,SVar27);
    DVar3 = Swift::DecodingError::typeMetadataAccessor();
    _DVar28 = (__int8)
              PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80;
    _swift_allocError(DVar3.value,
                      PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                      ,0,0);
    Swift::DecodingError::_dataCorruptedError(0,_DVar28,acStack_90,0x22);
    _swift_bridgeObjectRelease(0xe100000000000000);
    _swift_willThrow();
    pcVar6 = (char *)0xe100000000000000;
    FUN_100864364(local_e0,puVar11,pcVar15,puVar12,cVar10,pcVar14,puVar13);
  }
LAB_1008710e4:
  FUN_100004594(acStack_90);
LAB_1008710f0:
  FUN_100004594(param_1);
  return pcVar6;
}



/* Address: 0x10087120c | FUN_10087120c */

void FUN_10087120c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7edd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7edd4,&DAT_100f07e28);
  DAT_100fe8990 = pTVar1;
  return;
}



/* Address: 0x10087124c | FUN_10087124c */

void FUN_10087124c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7eba0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7eba0,&DAT_100f07d90);
  DAT_100fe8998 = pTVar1;
  return;
}



/* Address: 0x10087128c | FUN_10087128c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001008712c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10087128c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fe82c0,&DAT_100c7db80);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1008712f0 | FUN_1008712f0 */

/* WARNING: Removing unreachable block (ram,0x0001008713c8) */

undefined1  [16] FUN_1008712f0(void *param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  KeyedDecodingContainer<undefined> KVar4;
  String *pSVar5;
  ulong uVar6;
  undefined8 uVar7;
  void *pvVar8;
  ulong unaff_x21;
  long lVar9;
  long lVar10;
  undefined1 auVar11 [16];
  String SVar12;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  uint local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_61;
  undefined1 local_58;
  undefined7 uStack_57;
  
  puVar3 = &DAT_100fe8af8;
  FUN_1000f7830(&DAT_100fe8af8,&DAT_100c7ee30);
  lVar10 = *(long *)(puVar3 + -8);
  lVar9 = (long)&local_b0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pvVar8 = param_1;
  FUN_100004640(param_1,*(undefined8 *)((long)param_1 + 0x18));
  FUN_10087120c();
  KVar4 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_61 = 0;
    FUN_1008718b8();
    Swift::KeyedDecodingContainer::_decode
              (&local_58,&DAT_100f07d90,&local_61,puVar3,&DAT_100f07d90,KVar4.unknown);
    uVar1 = CONCAT71(uStack_57,local_58);
    local_58 = 2;
    SVar12 = Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    pvVar8 = SVar12.bridgeObject;
    pSVar5 = (String *)SVar12.str;
    FUN_100870388();
    unaff_x21 = uVar1;
    if (((ulong)pSVar5 & 1) == 0) {
      uVar6 = uVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        uStack_80 = *(undefined8 *)(uVar1 + 0x10);
        local_b0 = *(undefined8 *)(uVar1 + 0x18);
        local_88 = *(undefined8 *)(uVar1 + 0x20);
        uVar7 = *(undefined8 *)(uVar1 + 0x28);
        local_8c = (uint)*(byte *)(uVar1 + 0x30);
        uStack_98 = *(undefined8 *)(uVar1 + 0x38);
        local_a8 = *(undefined8 *)(uVar1 + 0x40);
        local_a0 = *(undefined8 *)(uVar1 + 0x48);
        local_78 = *(undefined8 *)(uVar1 + 0x50);
        unaff_x21 = 0;
        FUN_10087053c();
        _swift_allocObject();
        uVar2 = local_a8;
        *(undefined8 *)(unaff_x21 + 0x10) = uStack_80;
        *(undefined8 *)(unaff_x21 + 0x18) = local_b0;
        *(undefined8 *)(unaff_x21 + 0x20) = local_88;
        *(undefined8 *)(unaff_x21 + 0x28) = uVar7;
        *(char *)(unaff_x21 + 0x30) = (char)local_8c;
        *(undefined8 *)(unaff_x21 + 0x38) = uStack_98;
        *(undefined8 *)(unaff_x21 + 0x40) = local_a8;
        *(undefined8 *)(unaff_x21 + 0x48) = local_a0;
        *(undefined8 *)(unaff_x21 + 0x50) = local_78;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRetain(local_78);
        _swift_release(uVar1);
      }
      uVar7 = *(undefined8 *)(unaff_x21 + 0x50);
      *(String *)(unaff_x21 + 0x48) = SVar12;
      _swift_bridgeObjectRelease(uVar7);
      local_61 = 1;
      FUN_10086e150();
      Swift::KeyedDecodingContainer::_decode
                (&local_58,&DAT_100f072e0,&local_61,puVar3,&DAT_100f072e0,uVar7);
      (**(code **)(lVar10 + 8))(lVar9,puVar3);
      pvVar8 = (void *)CONCAT71(uStack_57,local_58);
      FUN_100004594(param_1);
    }
    else {
      FUN_1008718f8();
      _swift_allocError(&DAT_100f07eb8,pSVar5,0,0);
      *pSVar5 = SVar12;
      _swift_willThrow();
      (**(code **)(lVar10 + 8))(lVar9,puVar3);
      FUN_100004594(param_1);
      _swift_release(uVar1);
    }
  }
  else {
    FUN_100004594(param_1);
  }
  auVar11._8_8_ = pvVar8;
  auVar11._0_8_ = unaff_x21;
  return auVar11;
}



/* Address: 0x1008715b0 | thunk_FUN_1008715b4 */

void thunk_FUN_1008715b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e950,&DAT_100f07d70);
  DAT_100fe89a0 = pTVar1;
  return;
}



/* Address: 0x1008715b4 | FUN_1008715b4 */

void FUN_1008715b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e950;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e950,&DAT_100f07d70);
  DAT_100fe89a0 = pTVar1;
  return;
}



/* Address: 0x1008715f4 | thunk_FUN_1008715f8 */

void thunk_FUN_1008715f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ea58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ea58,&DAT_100f07cd8);
  DAT_100fe89a8 = pTVar1;
  return;
}



/* Address: 0x1008715f8 | FUN_1008715f8 */

void FUN_1008715f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ea58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ea58,&DAT_100f07cd8);
  DAT_100fe89a8 = pTVar1;
  return;
}



/* Address: 0x100871638 | thunk_FUN_10087163c */

void thunk_FUN_10087163c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7eac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7eac0,&DAT_100f07d90);
  DAT_100fe89b0 = pTVar1;
  return;
}



/* Address: 0x10087163c | FUN_10087163c */

void FUN_10087163c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7eac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7eac0,&DAT_100f07d90);
  DAT_100fe89b0 = pTVar1;
  return;
}



/* Address: 0x10087167c | thunk_FUN_100871680 */

void thunk_FUN_100871680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7eb28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7eb28,&DAT_100f07c58);
  DAT_100fe89b8 = pTVar1;
  return;
}



/* Address: 0x100871680 | FUN_100871680 */

void FUN_100871680(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe89b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7eb28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7eb28,&DAT_100f07c58);
  DAT_100fe89b8 = pTVar1;
  return;
}



/* Address: 0x1008716c0 | FUN_1008716c0 */

undefined1  [16] FUN_1008716c0(void)

{
  return ZEXT816(0x100f07c58);
}



/* Address: 0x1008716d0 | FUN_1008716d0 */

undefined8 * FUN_1008716d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100871718 | FUN_100871718 */

void FUN_100871718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10087172c | FUN_10087172c */

undefined8 * FUN_10087172c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100871764 | FUN_100871764 */

undefined1  [16] FUN_100871764(void)

{
  return ZEXT816(0x100f07cd8);
}



/* Address: 0x100871774 | FUN_100871774 */

undefined1  [16] FUN_100871774(void)

{
  return ZEXT816(0x100f07d70);
}



/* Address: 0x100871784 | FUN_100871784 */

undefined1  [16] FUN_100871784(void)

{
  return ZEXT816(0x100f07d90);
}



/* Address: 0x100871794 | FUN_100871794 */

undefined1  [16] FUN_100871794(void)

{
  return ZEXT816(0x100f07e28);
}



/* Address: 0x1008717a4 | thunk_FUN_1008717a8 */

void thunk_FUN_1008717a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8a68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ed44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ed44,&DAT_100f07e28);
  DAT_100fe8a68 = pTVar1;
  return;
}



/* Address: 0x1008717a8 | FUN_1008717a8 */

void FUN_1008717a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8a68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ed44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ed44,&DAT_100f07e28);
  DAT_100fe8a68 = pTVar1;
  return;
}


