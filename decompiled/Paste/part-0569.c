/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100655238 | FUN_100655238 */

void FUN_100655238(void)

{
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  FUN_100655280();
  return;
}



/* Address: 0x100655280 | FUN_100655280 */

long * FUN_100655280(long *param_1,char *param_2,void *param_3)

{
  ulong uVar1;
  ContiguousArray<__int8> CVar2;
  UnsafePointer<__int8> cString;
  long *plVar4;
  uint uVar5;
  long *plVar6;
  undefined **ppuVar7;
  long *plVar8;
  UnsafeBufferPointer<__int8> UVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *pcVar15;
  String SVar16;
  undefined *local_60;
  ulong uStack_58;
  _StringObject _Var3;
  
  pcVar15 = *(code **)(*param_1 + 0x88);
  plVar4 = param_1;
  (*pcVar15)();
  plVar13 = (long *)*plVar4;
  if (plVar13 != (long *)0x0) {
    if (-1 < (long)plVar13) {
      return plVar13;
    }
    plVar14 = (long *)-(long)plVar13;
    if (SBORROW8(0,(long)plVar13)) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1006552cc);
      (*pcVar15)();
    }
    goto LAB_100655574;
  }
  SVar16.bridgeObject = param_3;
  SVar16.str = param_2;
  CVar2 = Swift::String::get_utf8CString(SVar16);
  cString.unknown = _getenv(CVar2.unknown + 0x20);
  _swift_release(CVar2.unknown);
  if (cString.unknown != (undefined *)0x0) {
    SVar16 = Swift::String::init(cString);
    plVar4 = SVar16.bridgeObject;
    _Var3.unknown = SVar16.str;
    plVar6 = (long *)((ulong)_Var3.unknown & 0xffffffffffff);
    plVar8 = (long *)((ulong)plVar4 >> 0x38 & 0xf);
    plVar14 = plVar6;
    if (((ulong)plVar4 & 0x2000000000000000) != 0) {
      plVar14 = plVar8;
    }
    if (plVar14 == (long *)0x0) {
      _swift_bridgeObjectRelease(plVar4);
    }
    else {
      if (((ulong)plVar4 >> 0x3c & 1) == 0) {
        if (((ulong)plVar4 >> 0x3d & 1) == 0) {
          if (((ulong)_Var3.unknown >> 0x3c & 1) == 0) {
            plVar6 = plVar4;
            UVar9 = Swift::_StringObject::get_sharedUTF8(_Var3);
          }
          else {
            UVar9.unknown = (undefined *)(((ulong)plVar4 & 0xfffffffffffffff) + 0x20);
          }
          if (*UVar9.unknown == 0x2b) {
            if ((long)plVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10065562c);
              (*pcVar15)();
            }
            lVar11 = (long)plVar6 + -1;
            if (lVar11 == 0) goto LAB_10065554c;
            plVar14 = (long *)0x0;
            do {
              UVar9.unknown = UVar9.unknown + 1;
              if (((9 < (byte)*UVar9.unknown - 0x30) ||
                  (lVar12 = (long)plVar14 * 10,
                  SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar1 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                 plVar14 = (long *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1))) goto LAB_10065554c;
              uVar5 = 0;
              lVar11 = lVar11 + -1;
            } while (lVar11 != 0);
          }
          else if (*UVar9.unknown == 0x2d) {
            if ((long)plVar6 < 1) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x100655624);
              (*pcVar15)();
            }
            lVar11 = (long)plVar6 + -1;
            if (lVar11 == 0) {
LAB_10065554c:
              plVar14 = (long *)0x0;
              uVar5 = 1;
            }
            else {
              plVar14 = (long *)0x0;
              do {
                UVar9.unknown = UVar9.unknown + 1;
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar12 = (long)plVar14 * 10,
                    SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   plVar14 = (long *)(lVar12 - uVar1), SBORROW8(lVar12,uVar1))) goto LAB_10065554c;
                uVar5 = 0;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
          }
          else {
            if (plVar6 == (long *)0x0) goto LAB_10065554c;
            plVar14 = (long *)0x0;
            if (UVar9.unknown == (byte *)0x0) {
              uVar5 = 0;
            }
            else {
              do {
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar11 = (long)plVar14 * 10,
                    SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   plVar14 = (long *)(lVar11 + uVar1), SCARRY8(lVar11,uVar1))) goto LAB_10065554c;
                uVar5 = 0;
                plVar6 = (long *)((long)plVar6 + -1);
                UVar9.unknown = UVar9.unknown + 1;
              } while (plVar6 != (long *)0x0);
            }
          }
        }
        else {
          local_60 = _Var3.unknown;
          uStack_58 = (ulong)plVar4 & 0xffffffffffffff;
          uVar5 = (uint)SVar16.str & 0xff;
          if (uVar5 == 0x2b) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x100655630);
              (*pcVar15)();
            }
            lVar11 = (long)plVar8 + -1;
            if (lVar11 == 0) goto LAB_10065554c;
            plVar14 = (long *)0x0;
            pbVar10 = (byte *)((ulong)&local_60 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = (long)plVar14 * 10,
                  SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), plVar14 = (long *)(lVar12 + uVar1),
                 SCARRY8(lVar12,uVar1))) goto LAB_10065554c;
              uVar5 = 0;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
            } while (lVar11 != 0);
          }
          else if (uVar5 == 0x2d) {
            if (plVar8 == (long *)0x0) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x100655628);
              (*pcVar15)();
            }
            lVar11 = (long)plVar8 + -1;
            if (lVar11 == 0) goto LAB_10065554c;
            plVar14 = (long *)0x0;
            pbVar10 = (byte *)((ulong)&local_60 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar12 = (long)plVar14 * 10,
                  SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                 (uVar1 = (ulong)(byte)(*pbVar10 - 0x30), plVar14 = (long *)(lVar12 - uVar1),
                 SBORROW8(lVar12,uVar1))) goto LAB_10065554c;
              uVar5 = 0;
              lVar11 = lVar11 + -1;
              pbVar10 = pbVar10 + 1;
            } while (lVar11 != 0);
          }
          else {
            if (plVar8 == (long *)0x0) goto LAB_10065554c;
            plVar14 = (long *)0x0;
            ppuVar7 = &local_60;
            do {
              if (((9 < *(byte *)ppuVar7 - 0x30) ||
                  (lVar11 = (long)plVar14 * 10,
                  SUB168(SEXT816((long)plVar14) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                 (uVar1 = (ulong)(byte)(*(byte *)ppuVar7 - 0x30), plVar14 = (long *)(lVar11 + uVar1)
                 , SCARRY8(lVar11,uVar1))) goto LAB_10065554c;
              uVar5 = 0;
              plVar8 = (long *)((long)plVar8 + -1);
              ppuVar7 = (undefined **)((long)ppuVar7 + 1);
            } while (plVar8 != (long *)0x0);
          }
        }
      }
      else {
        FUN_100642068(_Var3.unknown,plVar4,10);
        uVar5 = (uint)SVar16.bridgeObject;
        plVar14 = (long *)SVar16.str;
      }
      _swift_bridgeObjectRelease();
      if ((uVar5 & 0xff) != 1) goto LAB_100655574;
    }
  }
  plVar4 = (long *)_sysconf(0x3a);
  plVar14 = plVar4;
LAB_100655574:
  if ((long)plVar14 < 2) {
    plVar14 = (long *)&DAT_00000001;
  }
  if (0x3ff < (long)plVar14) {
    plVar14 = (long *)0x400;
  }
  (*pcVar15)();
  if ((long *)*plVar4 == plVar13) {
    *plVar4 = (long)plVar14;
    param_1 = plVar14;
  }
  else {
    FUN_100655280(param_1,param_2,param_3);
  }
  return param_1;
}



/* Address: 0x100655630 | FUN_100655630 */

undefined1  [16] FUN_100655630(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  param_1[1] = puVar1;
  FUN_100655280();
  *param_1 = puVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = thunk_FUN_100655810;
  return auVar2;
}



/* Address: 0x10065569c | thunk_FUN_100655810 */

void thunk_FUN_100655810(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c4);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  else {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c0);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd0000000000000c4,0x8000000100daf270,
             0xdaf270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100655890);
  (*pcVar1)();
}



/* Address: 0x1006556a0 | FUN_1006556a0 */

void FUN_1006556a0(undefined8 param_1)

{
  FUN_1006556ac(param_1,&DAT_100fd8840);
  return;
}



/* Address: 0x1006556ac | FUN_1006556ac */

void FUN_1006556ac(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  String SVar3;
  
  puVar2 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  if (param_1 < 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100655710);
    (*pcVar1)();
  }
  if (*(long *)(puVar2 + 0x10) != 0) {
    SVar3.bridgeObject = (void *)0x2;
    SVar3.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd0000000000000c4,0x8000000100daf270,
               0xdaf270);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10065575c);
    (*pcVar1)();
  }
  *(long *)(puVar2 + 0x10) = -param_1;
  return;
}



/* Address: 0x10065575c | FUN_10065575c */

void FUN_10065575c(void)

{
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  FUN_100655280();
  return;
}



/* Address: 0x1006557a4 | FUN_1006557a4 */

undefined1  [16] FUN_1006557a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  param_1[1] = puVar1;
  FUN_100655280();
  *param_1 = puVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = thunk_FUN_100655810;
  return auVar2;
}



/* Address: 0x100655810 | FUN_100655810 */

void FUN_100655810(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c4);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  else {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c0);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd0000000000000c4,0x8000000100daf270,
             0xdaf270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100655890);
  (*pcVar1)();
}



/* Address: 0x1006558c4 | FUN_1006558c4 */

bool FUN_1006558c4(void)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  lVar1 = *(long *)(puVar2 + 0x10);
  if (lVar1 == 0) {
    *(long *)(puVar2 + 0x10) = 1;
  }
  return -1 < lVar1;
}



/* Address: 0x100655910 | FUN_100655910 */

void FUN_100655910(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  String SVar4;
  
  lVar1 = -1;
  if ((param_1 & 1) != 0) {
    lVar1 = 1;
  }
  puVar3 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  if (*(long *)(puVar3 + 0x10) != 0) {
    SVar4.bridgeObject = (void *)0x2;
    SVar4.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd0000000000000bb,0x8000000100daf390,
               0xdaf270);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006559b8);
    (*pcVar2)();
  }
  *(long *)(puVar3 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006559b8 | FUN_1006559b8 */

undefined1  [16] FUN_1006559b8(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auVar3 [16];
  
  puVar2 = &DAT_100fd8830;
  FUN_1000f7830(&DAT_100fd8830,&DAT_100c6afd0);
  _swift_initStaticObject();
  *param_1 = puVar2;
  lVar1 = *(long *)(puVar2 + 0x10);
  if (lVar1 == 0) {
    *(long *)(puVar2 + 0x10) = 1;
  }
  *(bool *)(param_1 + 1) = -1 < lVar1;
  auVar3._8_8_ = param_1 + 1;
  auVar3._0_8_ = FUN_100655a24;
  return auVar3;
}



/* Address: 0x100655a24 | FUN_100655a24 */

void FUN_100655a24(long *param_1)

{
  long lVar1;
  code *pcVar2;
  String SVar3;
  
  lVar1 = -1;
  if ((char)param_1[1] != '\0') {
    lVar1 = 1;
  }
  if (*(long *)(*param_1 + 0x10) != 0) {
    SVar3.bridgeObject = (void *)0x2;
    SVar3.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd0000000000000bb,0x8000000100daf390,
               0xdaf270);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100655aac);
    (*pcVar2)();
  }
  *(long *)(*param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100655abc | FUN_100655abc */

undefined1  [16] FUN_100655abc(void)

{
  return ZEXT816(0x100ef1170);
}



/* Address: 0x100655acc | thunk_FUN_100655810 */

void thunk_FUN_100655810(long *param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  String SVar3;
  
  lVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c4);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  else {
    if (lVar2 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006558c0);
      (*pcVar1)();
    }
    if (*(long *)(param_1[1] + 0x10) == 0) {
      *(long *)(param_1[1] + 0x10) = -lVar2;
      return;
    }
  }
  SVar3.bridgeObject = (void *)0x2;
  SVar3.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd0000000000000c4,0x8000000100daf270,
             0xdaf270);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100655890);
  (*pcVar1)();
}



/* Address: 0x100655ad0 | FUN_100655ad0 */

undefined8 FUN_100655ad0(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}



/* Address: 0x100655ae4 | FUN_100655ae4 */

undefined8 FUN_100655ae4(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return param_1;
}



/* Address: 0x100655b18 | FUN_100655b18 */

char * FUN_100655b18(undefined8 param_1,StaticString param_2)

{
  String SVar1;
  
  SVar1 = Swift::StaticString::get_description(param_2);
  return SVar1.str;
}



/* Address: 0x100655b48 | FUN_100655b48 */

undefined1  [16] FUN_100655b48(int param_1,undefined *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  UnsafePointer<__int8> cString;
  _StringGuts _Var2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  _Var2.unknown = param_2;
  pcVar3 = param_3;
  cString.unknown = _strerror(param_1);
  if (cString.unknown == (undefined *)0x0) {
    Swift::_StringGuts::grow(0x26,_Var2);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar4.bridgeObject = (void *)0x8000000100daf450;
    SVar4.str = (char *)0xd000000000000022;
    SVar13.bridgeObject = param_4;
    SVar13.str = pcVar3;
    Swift::String::append(SVar4,SVar13);
    SVar4 = Swift::CustomStringConvertible::get_description();
    SVar14.bridgeObject = param_4;
    SVar14.str = pcVar3;
    Swift::String::append(SVar4,SVar14);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
  }
  else {
    SVar4 = Swift::String::init(cString);
    Swift::_StringGuts::grow(0x13,(_StringGuts)SVar4.bridgeObject);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar5.bridgeObject = &SUB_e200000000000000;
    SVar5.str = (char *)0x203a;
    SVar8.bridgeObject = param_4;
    SVar8.str = pcVar3;
    Swift::String::append(SVar5,SVar8);
    SVar9.bridgeObject = param_4;
    SVar9.str = pcVar3;
    Swift::String::append(SVar4,SVar9);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
    SVar6.bridgeObject = (void *)0xea0000000000203a;
    SVar6.str = (char *)0x6f6e727265282029;
    SVar10.bridgeObject = param_4;
    SVar10.str = pcVar3;
    Swift::String::append(SVar6,SVar10);
    SVar4 = Swift::CustomStringConvertible::get_description();
    SVar11.bridgeObject = param_4;
    SVar11.str = pcVar3;
    Swift::String::append(SVar4,SVar11);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0x29;
    SVar12.bridgeObject = param_4;
    SVar12.str = pcVar3;
    Swift::String::append(SVar7,SVar12);
  }
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x100655cd0 | FUN_100655cd0 */

void FUN_100655cd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100655b48(param_3,param_1,param_2);
  return;
}



/* Address: 0x100655ce4 | FUN_100655ce4 */

void FUN_100655ce4(void)

{
  undefined8 *unaff_x20;
  
  FUN_100655b48(*(undefined4 *)(unaff_x20 + 2),*unaff_x20,unaff_x20[1]);
  return;
}



/* Address: 0x100655cf0 | FUN_100655cf0 */

undefined8 * FUN_100655cf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x100655d44 | FUN_100655d44 */

void FUN_100655d44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100655d58 | FUN_100655d58 */

int FUN_100655d58(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100655da0 | FUN_100655da0 */

void FUN_100655da0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x14) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x14) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100655de0 | FUN_100655de0 */

undefined1  [16] FUN_100655de0(void)

{
  return ZEXT816(0x100ef11e8);
}



/* Address: 0x100655df0 | thunk_FUN_100655e08 */

void thunk_FUN_100655e08(void)

{
  FUN_100655e08();
  return;
}



/* Address: 0x100655df4 | FUN_100655df4 */

void FUN_100655df4(undefined8 *param_1)

{
  FUN_100172f08(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
                *(undefined1 *)((long)param_1 + 0x11));
  return;
}



/* Address: 0x100655e08 | FUN_100655e08 */

undefined8 * FUN_100655e08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)((long)param_2 + 0x11);
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_100172edc(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar4;
  *(undefined1 *)((long)param_1 + 0x11) = uVar3;
  return param_1;
}



/* Address: 0x100655e64 | FUN_100655e64 */

undefined8 * FUN_100655e64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)((long)param_2 + 0x11);
  uVar6 = *(undefined1 *)(param_2 + 2);
  FUN_100172edc(uVar1,uVar3,uVar6,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar7 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar6;
  uVar6 = *(undefined1 *)((long)param_1 + 0x11);
  *(undefined1 *)((long)param_1 + 0x11) = uVar5;
  FUN_100172f08(uVar2,uVar4,uVar7,uVar6);
  return param_1;
}



/* Address: 0x100655ed0 | FUN_100655ed0 */

void FUN_100655ed0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100655ee4 | FUN_100655ee4 */

undefined8 * FUN_100655ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined2 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar1 = *(undefined1 *)(param_1 + 2);
  *(undefined2 *)(param_1 + 2) = uVar2;
  FUN_100172f08(uVar3,uVar4,uVar1,*(undefined1 *)((long)param_1 + 0x11));
  return param_1;
}



/* Address: 0x100655f2c | FUN_100655f2c */

int FUN_100655f2c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x12) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)((long)param_1 + 0x11) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x11) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100655f74 | FUN_100655f74 */

void FUN_100655f74(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x12) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x11) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x12) = 1;
    }
  }
  return;
}



/* Address: 0x100655fb8 | FUN_100655fb8 */

undefined1 FUN_100655fb8(long param_1)

{
  return *(undefined1 *)(param_1 + 0x11);
}



/* Address: 0x100655fc0 | FUN_100655fc0 */

void FUN_100655fc0(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x11) = param_2;
  return;
}



/* Address: 0x100655fc8 | FUN_100655fc8 */

undefined1  [16] FUN_100655fc8(void)

{
  return ZEXT816(0x100ef1280);
}



/* Address: 0x100655fd8 | FUN_100655fd8 */

undefined1  [16] FUN_100655fd8(void)

{
  return ZEXT816(0x100ef1310);
}



/* Address: 0x100655fe8 | thunk_FUN_100655cd0 */

void thunk_FUN_100655cd0(void)

{
  FUN_100655cd0();
  return;
}



/* Address: 0x100655fec | thunk_FUN_1005a9570 */

void thunk_FUN_1005a9570(void)

{
  thunk_FUN_1005a9570();
  return;
}



/* Address: 0x100655ff0 | thunk_FUN_100655e08 */

void thunk_FUN_100655e08(void)

{
  thunk_FUN_100655e08();
  return;
}



/* Address: 0x100655ff4 | FUN_100655ff4 */

void FUN_100655ff4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6)

{
  FUN_1006561ac(param_1,param_2,param_3 & 0xffffffffffffff,param_4,param_5,
                param_6 & 0xffffffffffffff);
  return;
}



/* Address: 0x100656000 | FUN_100656000 */

void FUN_100656000(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1006561ac(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2),*param_2,param_2[1],
                (ulong)*(uint7 *)(param_2 + 2));
  return;
}



/* Address: 0x10065603c | FUN_10065603c */

ulong FUN_10065603c(long param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return (ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)param_2);
  }
  if (-1 < param_2) {
    return param_2 - (param_3 & 0xffffffffffffff);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100656060);
  (*pcVar1)();
}



/* Address: 0x100656060 | FUN_100656060 */

void FUN_100656060(ulong param_1)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  uVar6 = unaff_x20[1];
  uVar4 = (ulong)*(uint7 *)(unaff_x20 + 2);
  if (lVar1 < 0) {
    bVar3 = SCARRY8(uVar4,param_1);
    uVar4 = uVar4 + param_1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10065610c);
      (*pcVar2)();
    }
    FUN_1006571c0();
    *unaff_x20 = lVar1;
  }
  else {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006560fc);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100656100);
      (*pcVar2)();
    }
    uVar5 = (ulong)((uint)uVar6 + (uint)param_1);
    if (CARRY4((uint)uVar6,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100656104);
      (*pcVar2)();
    }
    if (uVar6 >> 0x20 < uVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100656108);
      (*pcVar2)();
    }
    uVar6 = uVar6 & 0xffffffff00000000 | uVar5;
  }
  unaff_x20[1] = uVar6;
  *(int *)(unaff_x20 + 2) = (int)uVar4;
  *(char *)((long)unaff_x20 + 0x16) = (char)(uVar4 >> 0x30);
  *(short *)((long)unaff_x20 + 0x14) = (short)(uVar4 >> 0x20);
  return;
}



/* Address: 0x10065610c | FUN_10065610c */

undefined1  [16] FUN_10065610c(char *param_1,void *param_2,ulong param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  if ((long)param_1 < 0) {
    param_1 = (char *)((ulong)param_1 & 0x7fffffffffffffff);
    pcVar2 = (char *)(param_3 & 0xffffffffffffff);
    FUN_100654f18();
  }
  else {
    pcVar2 = (char *)(param_3 & 0xffffffffffffff);
    FUN_1006139ec();
  }
  SVar3.bridgeObject = param_2;
  SVar3.str = param_1;
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar2;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(param_2);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x7d20;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar2;
  Swift::String::append(SVar4,SVar6);
  auVar1._8_8_ = 0xe900000000000020;
  auVar1._0_8_ = 0x7b20617461444f49;
  return auVar1;
}



/* Address: 0x100656190 | FUN_100656190 */

void FUN_100656190(void)

{
  undefined8 *unaff_x20;
  
  FUN_10065610c(*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1006561ac | FUN_1006561ac */

long FUN_1006561ac(long param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,ulong param_6
                  )

{
  code *pcVar1;
  
  if (param_1 < 0) {
    if (((param_4 < 0) && (param_1 == param_4)) && (((param_6 ^ param_3) & 0xffffffffffffff) == 0))
    {
      if ((long)(param_5 | param_2) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006561fc);
        (*pcVar1)();
      }
      if (param_2 == param_5) {
        return 1;
      }
    }
  }
  else if (-1 < param_4) {
    FUN_100613e94(param_1,param_2,param_3 & 0xffffffffffffff,param_4,param_5,
                  param_6 & 0xffffffffffffff);
    return param_1;
  }
  return 0;
}



/* Address: 0x1006561fc | thunk_FUN_100656228 */

void thunk_FUN_100656228(void)

{
  FUN_100656228();
  return;
}



/* Address: 0x100656200 | FUN_100656200 */

void FUN_100656200(ulong param_1)

{
  _swift_retain(param_1 & 0x7fffffffffffffff);
  return;
}



/* Address: 0x100656208 | FUN_100656208 */

void FUN_100656208(undefined8 *param_1)

{
  FUN_10000c650(*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
  return;
}



/* Address: 0x100656228 | FUN_100656228 */

undefined8 * FUN_100656228(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar4 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_100656200(uVar1,uVar2,(ulong)*(uint7 *)(param_2 + 2));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(int *)(param_1 + 2) = (int)uVar5;
  return param_1;
}



/* Address: 0x10065628c | FUN_10065628c */

undefined8 * FUN_10065628c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  uint7 uVar7;
  uint7 uVar8;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar8 = *(uint7 *)(param_2 + 2);
  uVar5 = *(undefined1 *)((long)param_2 + 0x16);
  uVar6 = *(undefined3 *)((long)param_2 + 0x14);
  FUN_100656200(uVar1,uVar3,(ulong)*(uint7 *)(param_2 + 2));
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar7 = *(uint7 *)(param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  *(int *)(param_1 + 2) = (int)uVar8;
  *(undefined1 *)((long)param_1 + 0x16) = uVar5;
  *(short *)((long)param_1 + 0x14) = (short)uVar6;
  FUN_10000c650(uVar2,uVar4,(ulong)uVar7);
  return param_1;
}



/* Address: 0x100656310 | FUN_100656310 */

undefined8 * FUN_100656310(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint7 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar7 = *param_2;
  uVar1 = *(undefined4 *)(param_2 + 2);
  uVar3 = *(undefined2 *)((long)param_2 + 0x14);
  uVar2 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar4 = *(uint7 *)(param_1 + 2);
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(undefined2 *)((long)param_1 + 0x14) = uVar3;
  *(undefined1 *)((long)param_1 + 0x16) = uVar2;
  FUN_10000c650(uVar5,uVar6,(ulong)uVar4);
  return param_1;
}



/* Address: 0x100656374 | FUN_100656374 */

int FUN_100656374(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x17) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006563d0 | FUN_1006563d0 */

void FUN_1006563d0(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x17) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 1 & 0x3f | (-param_2 & 0x7f) << 6);
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      param_1[1] = 0;
      *(undefined1 *)((long)param_1 + 0x16) = 0;
      *(undefined2 *)((long)param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 2) = 0;
      return;
    }
  }
  else {
    *(undefined1 *)((long)param_1 + 0x16) = 0;
    *(undefined2 *)((long)param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    param_1[1] = 0;
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x17) = 1;
    }
  }
  return;
}



/* Address: 0x100656438 | FUN_100656438 */

undefined1  [16] FUN_100656438(void)

{
  return ZEXT816(0x100ef13d8);
}



/* Address: 0x100656448 | thunk_FUN_100656228 */

void thunk_FUN_100656228(void)

{
  FUN_100656228();
  return;
}



/* Address: 0x10065644c | FUN_10065644c */

void FUN_10065644c(ulong param_1)

{
  code *pcVar1;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100656460);
    (*pcVar1)();
  }
  if (param_1 < 0x100) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100656464);
  (*pcVar1)();
}



/* Address: 0x100656464 | FUN_100656464 */

undefined8 FUN_100656464(void)

{
  return 0x21;
}



/* Address: 0x10065646c | FUN_10065646c */

undefined8 FUN_10065646c(void)

{
  return 0x2e;
}



/* Address: 0x100656474 | FUN_100656474 */

undefined8 FUN_100656474(void)

{
  return 0x2f;
}



/* Address: 0x10065647c | FUN_10065647c */

undefined8 FUN_10065647c(void)

{
  return 0x30;
}



/* Address: 0x100656484 | FUN_100656484 */

undefined8 FUN_100656484(void)

{
  return 0x36;
}


