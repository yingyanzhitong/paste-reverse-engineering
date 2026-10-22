/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005263c8 | FUN_1005263c8 */

String FUN_1005263c8(void)

{
  undefined1 *puVar1;
  Dictionary DVar2;
  void *pvVar3;
  Dictionary DVar4;
  void *pvVar5;
  uint uVar6;
  bool bVar7;
  char *pcVar8;
  void *in_x3;
  String *unaff_x20;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  DVar4.unknown = unaff_x20->str;
  pvVar5 = unaff_x20->bridgeObject;
  SVar11 = *unaff_x20;
  uVar6 = (uint)((ulong)unaff_x20[1].bridgeObject >> 0x3c) & 3 |
          (*(byte *)&unaff_x20[2].str & 0x3f) << 2;
  if (uVar6 < 4) {
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        bVar7 = ((ulong)DVar4.unknown & 1) == 0;
        pcVar8 = (char *)0x65757274;
        if (bVar7) {
          pcVar8 = (char *)0x65736c6166;
        }
        puVar1 = &DAT_e400000000000000;
        if (bVar7) {
          puVar1 = &DAT_e500000000000000;
        }
        SVar11.bridgeObject = puVar1;
        SVar11.str = pcVar8;
      }
      else {
        FUN_100527da0();
        SVar11 = (extension_Swift)::Swift::BinaryInteger::get_description();
      }
    }
    else if (uVar6 == 2) {
      SVar11 = double::get_description((double)DVar4.unknown);
    }
    else {
      _swift_bridgeObjectRetain(pvVar5);
    }
  }
  else if (uVar6 < 6) {
    if (uVar6 == 4) {
      pcVar8 = (char *)((ulong)unaff_x20[1].bridgeObject & 0xcfffffffffffffff);
      SVar11 = Foundation::Data::base64EncodedString
                         ((NSDataBase64EncodingOptions)0x0,(Data)unaff_x20[1].str);
      Swift::_StringGuts::grow(0x11,(_StringGuts)SVar11.bridgeObject);
      _swift_bridgeObjectRelease(0xe000000000000000);
      DVar2.unknown = (char *)0x616c702f74786574;
      if (pvVar5 != (void *)0x0) {
        DVar2.unknown = DVar4.unknown;
      }
      pvVar3 = (void *)0xea00000000006e69;
      if (pvVar5 != (void *)0x0) {
        pvVar3 = pvVar5;
      }
      _swift_bridgeObjectRetain(pvVar5);
      SVar9.bridgeObject = pvVar3;
      SVar9.str = DVar2.unknown;
      SVar12.bridgeObject = in_x3;
      SVar12.str = pcVar8;
      Swift::String::append(SVar9,SVar12);
      _swift_bridgeObjectRelease(pvVar3);
      SVar10.bridgeObject = &DAT_e800000000000000;
      SVar10.str = (char *)0x2c3436657361623b;
      SVar13.bridgeObject = in_x3;
      SVar13.str = pcVar8;
      Swift::String::append(SVar10,SVar13);
      SVar14.bridgeObject = in_x3;
      SVar14.str = pcVar8;
      Swift::String::append(SVar11,SVar14);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar11.bridgeObject = &DAT_e500000000000000;
      SVar11.str = (char *)0x3a61746164;
    }
    else {
      SVar11 = Swift::Array<undefined>::get_description(DVar4.unknown,&DAT_100edd000);
    }
  }
  else if (uVar6 == 6) {
    SVar11 = Swift::Dictionary::get_description(DVar4);
  }
  else {
    SVar11 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  return SVar11;
}



/* Address: 0x1005265b8 | thunk_FUN_1005263c8 */

void thunk_FUN_1005263c8(void)

{
  FUN_1005263c8();
  return;
}



/* Address: 0x1005265bc | FUN_1005265bc */

void FUN_1005265bc(ulong *param_1,ulong param_2)

{
  *param_1 = param_2 & 1;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x1005265d0 | FUN_1005265d0 */

void FUN_1005265d0(ulong *param_1,byte *param_2)

{
  *param_1 = (ulong)*param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x1005265e4 | FUN_1005265e4 */

void FUN_1005265e4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x1000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x1005265f8 | FUN_1005265f8 */

void FUN_1005265f8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x1000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100526610 | FUN_100526610 */

void FUN_100526610(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100526628 | FUN_100526628 */

void FUN_100526628(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100526640 | FUN_100526640 */

void FUN_100526640(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0x3000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100526658 | FUN_100526658 */

void FUN_100526658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[3] = 0x3000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x100526674 | FUN_100526674 */

void FUN_100526674(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x1000000000000000;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x10052668c | FUN_10052668c */

void FUN_10052668c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_100527de0(&local_48);
  _swift_bridgeObjectRelease(param_2);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1005266d8 | FUN_1005266d8 */

undefined1  [16] FUN_1005266d8(long param_1,char *param_2,void *param_3)

{
  code *pcVar1;
  String SVar2;
  
  if (!SCARRY8(param_1,(long)param_2)) {
    SVar2.bridgeObject = param_3;
    SVar2.str = param_2;
    Swift::String::reserveCapacity((__int64)(param_2 + param_1),SVar2);
    return ZEXT816(0xe000000000000000) << 0x40;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100526718);
  (*pcVar1)();
}



/* Address: 0x100526718 | /usr/lib/swift/libswiftCore.dylib::Swift::String::append */

void Swift::String::append(String param_1,String param_2)

{
  append(param_1,param_2);
  return;
}



/* Address: 0x10052671c | FUN_10052671c */

void FUN_10052671c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100526760 | FUN_100526760 */

void FUN_100526760(undefined8 *param_1,long param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  String SVar2;
  
  if (!SCARRY8(param_2,(long)param_3)) {
    SVar2.bridgeObject = param_4;
    SVar2.str = param_3;
    Swift::String::reserveCapacity((__int64)(param_3 + param_2),SVar2);
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005267a8);
  (*pcVar1)();
}



/* Address: 0x1005267a8 | FUN_1005267a8 */

void FUN_1005267a8(String *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  
  SVar1.bridgeObject = param_4;
  SVar1.str = param_3;
  Swift::String::append(*param_1,SVar1);
  return;
}



/* Address: 0x1005267b4 | FUN_1005267b4 */

uint FUN_1005267b4(double *param_1,ulong param_2)

{
  double dVar1;
  uint uVar2;
  bool bVar3;
  _StringComparisonResult expecting;
  double dVar4;
  undefined1 *puVar5;
  
  dVar4 = *param_1;
  dVar1 = *param_1;
  uVar2 = (uint)((ulong)param_1[3] >> 0x3c) & 3 | (*(byte *)(param_1 + 4) & 0x3f) << 2;
  if (uVar2 < 2) {
    dVar4 = (double)(ulong)*(byte *)param_1;
    if (uVar2 != 0) {
      if (uVar2 != 1) goto LAB_100526830;
      if ((param_2 & 1) != 0) {
        return 2;
      }
      dVar4 = dVar1;
      if ((dVar1 != 0.0) && (dVar1 != 4.94065645841247e-324)) {
        return 2;
      }
    }
    goto LAB_1005269a8;
  }
  if (uVar2 == 2) {
    if ((param_2 & 1) != 0) {
      return 2;
    }
    if (*param_1 == 0.0) {
LAB_1005269a4:
      dVar4 = 0.0;
      goto LAB_1005269a8;
    }
    if (*param_1 != 1.0) {
      return 2;
    }
  }
  else {
    if ((uVar2 != 3) || ((param_2 & 1) != 0)) {
LAB_100526830:
      FUN_1004e15f8();
      return 2;
    }
    puVar5 = (undefined1 *)param_1[1];
    if (dVar4 != 8.40996481109095e-315 || puVar5 != &DAT_e400000000000000) {
      expecting.value = SUB81(dVar4,0);
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x65757274,(_StringGuts)0xe400000000000000,expecting);
      if ((((((!bVar3) &&
             (dVar4 != 5.73116149175846e-322 || puVar5 != (undefined1 *)0xe100000000000000)) &&
            (bVar3 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x74,(_StringGuts)0xe100000000000000,expecting), !bVar3
            )) && (((dVar4 != 3.73642925235499e-317 || (puVar5 != (undefined1 *)0xe300000000000000))
                   && ((bVar3 = Swift::_stringCompareWithSmolCheck
                                          ((_StringGuts)0x736579,(_StringGuts)0xe300000000000000,
                                           expecting), !bVar3 &&
                       ((dVar4 != 5.97819431467908e-322 ||
                        (puVar5 != (undefined1 *)0xe100000000000000)))))))) &&
          (bVar3 = Swift::_stringCompareWithSmolCheck
                             ((_StringGuts)0x79,(_StringGuts)0xe100000000000000,expecting), !bVar3))
         && (((((dVar4 != 1.39677298735779e-319 || (puVar5 != &SUB_e200000000000000)) &&
               (bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)0x6e6f,(_StringGuts)0xe200000000000000,expecting),
               !bVar3)) &&
              ((dVar4 != 2.42092166462211e-322 || (puVar5 != (undefined1 *)0xe100000000000000)))) &&
             (bVar3 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x31,(_StringGuts)0xe100000000000000,expecting),
             !bVar3)))) {
        if ((((dVar4 == 2.15278324444554e-312) && (puVar5 == &DAT_e500000000000000)) ||
            (((bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x65736c6166,(_StringGuts)0xe500000000000000,
                                  expecting), bVar3 ||
              (((dVar4 == 5.03946958758071e-322 && (puVar5 == (undefined1 *)0xe100000000000000)) ||
               (bVar3 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)0x66,(_StringGuts)0xe100000000000000,expecting),
               bVar3)))) ||
             (((dVar4 == 1.40937166132674e-319 && (puVar5 == &SUB_e200000000000000)) ||
              (bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x6f6e,(_StringGuts)0xe200000000000000,expecting),
              bVar3)))))) ||
           (((dVar4 == 5.43472210425371e-322 && (puVar5 == (undefined1 *)0xe100000000000000)) ||
            (((bVar3 = Swift::_stringCompareWithSmolCheck
                                 ((_StringGuts)0x6e,(_StringGuts)0xe100000000000000,expecting),
              bVar3 || (((dVar4 == 3.31562267234779e-317 &&
                         (puVar5 == (undefined1 *)0xe300000000000000)) ||
                        (bVar3 = Swift::_stringCompareWithSmolCheck
                                           ((_StringGuts)0x66666f,(_StringGuts)0xe300000000000000,
                                            expecting), bVar3)))) ||
             ((dVar4 == 2.37151510003798e-322 && (puVar5 == (undefined1 *)0xe100000000000000))))))))
        {
          FUN_1004e15f8(param_1);
        }
        else {
          bVar3 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x30,(_StringGuts)0xe100000000000000,expecting);
          FUN_1004e15f8(param_1);
          if (!bVar3) {
            return 2;
          }
        }
        goto LAB_1005269a4;
      }
    }
    FUN_1004e15f8(param_1);
  }
  dVar4 = 4.94065645841247e-324;
LAB_1005269a8:
  return SUB84(dVar4,0) & 1;
}



/* Address: 0x100526b20 | FUN_100526b20 */

undefined1  [16] FUN_100526b20(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  UnsafeBufferPointer<__int8> UVar7;
  undefined **ppuVar8;
  ulong uVar9;
  byte *pbVar10;
  long lVar11;
  long lVar12;
  _StringObject _Var13;
  uint uVar14;
  undefined1 auVar15 [16];
  undefined *local_30;
  ulong uStack_28;
  
  _Var13.unknown = (undefined *)*param_1;
  uVar14 = (uint)((ulong)param_1[3] >> 0x3c) & 3 | (*(byte *)(param_1 + 4) & 0x3f) << 2;
  if (uVar14 == 1) {
LAB_100526e1c:
    uVar5 = 0;
    goto LAB_100526e20;
  }
  if (uVar14 == 3) {
    if ((param_2 & 1) == 0) {
      uVar6 = param_1[1];
      uVar9 = uVar6 >> 0x38 & 0xf;
      uVar1 = (ulong)_Var13.unknown & 0xffffffffffff;
      if ((uVar6 & 0x2000000000000000) != 0) {
        uVar1 = uVar9;
      }
      if (uVar1 != 0) {
        if ((uVar6 >> 0x3c & 1) == 0) {
          if ((uVar6 >> 0x3d & 1) == 0) {
            if (((ulong)_Var13.unknown >> 0x3c & 1) == 0) {
              UVar7 = Swift::_StringObject::get_sharedUTF8(_Var13);
            }
            else {
              UVar7.unknown = (undefined *)((uVar6 & 0xfffffffffffffff) + 0x20);
              uVar6 = (ulong)_Var13.unknown & 0xffffffffffff;
            }
            if (*UVar7.unknown == 0x2b) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100526e88);
                (*pcVar2)();
              }
              lVar11 = uVar6 - 1;
              if (lVar11 == 0) goto LAB_100526e04;
              _Var13.unknown = (undefined *)0x0;
              do {
                UVar7.unknown = UVar7.unknown + 1;
                if (((9 < (byte)*UVar7.unknown - 0x30) ||
                    (lVar12 = (long)_Var13.unknown * 10,
                    SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
                   _Var13.unknown = (undefined *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                goto LAB_100526e04;
                uVar14 = 0;
                lVar11 = lVar11 + -1;
              } while (lVar11 != 0);
            }
            else if (*UVar7.unknown == 0x2d) {
              if ((long)uVar6 < 1) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100526e80);
                (*pcVar2)();
              }
              lVar11 = uVar6 - 1;
              if (lVar11 == 0) {
LAB_100526e04:
                _Var13.unknown = (undefined *)0x0;
                uVar14 = 1;
              }
              else {
                _Var13.unknown = (undefined *)0x0;
                do {
                  UVar7.unknown = UVar7.unknown + 1;
                  if (((9 < (byte)*UVar7.unknown - 0x30) ||
                      (lVar12 = (long)_Var13.unknown * 10,
                      SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
                     _Var13.unknown = (undefined *)(lVar12 - uVar1), SBORROW8(lVar12,uVar1)))
                  goto LAB_100526e04;
                  uVar14 = 0;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
            }
            else {
              if (uVar6 == 0) goto LAB_100526e04;
              _Var13.unknown = (undefined *)0x0;
              if (UVar7.unknown == (byte *)0x0) {
                uVar14 = 0;
              }
              else {
                do {
                  if (((9 < (byte)*UVar7.unknown - 0x30) ||
                      (lVar11 = (long)_Var13.unknown * 10,
                      SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                     (uVar1 = (ulong)(byte)((byte)*UVar7.unknown - 0x30),
                     _Var13.unknown = (undefined *)(lVar11 + uVar1), SCARRY8(lVar11,uVar1)))
                  goto LAB_100526e04;
                  uVar14 = 0;
                  uVar6 = uVar6 - 1;
                  UVar7.unknown = UVar7.unknown + 1;
                } while (uVar6 != 0);
              }
            }
          }
          else {
            local_30 = _Var13.unknown;
            uStack_28 = uVar6 & 0xffffffffffffff;
            uVar14 = (uint)_Var13.unknown & 0xff;
            if (uVar14 == 0x2b) {
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100526e8c);
                (*pcVar2)();
              }
              lVar11 = uVar9 - 1;
              if (lVar11 == 0) goto LAB_100526e04;
              _Var13.unknown = (undefined *)0x0;
              pbVar10 = (byte *)((ulong)&local_30 | 1);
              do {
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar12 = (long)_Var13.unknown * 10,
                    SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*pbVar10 - 0x30),
                   _Var13.unknown = (undefined *)(lVar12 + uVar1), SCARRY8(lVar12,uVar1)))
                goto LAB_100526e04;
                uVar14 = 0;
                lVar11 = lVar11 + -1;
                pbVar10 = pbVar10 + 1;
              } while (lVar11 != 0);
            }
            else if (uVar14 == 0x2d) {
              if (uVar9 == 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100526e84);
                (*pcVar2)();
              }
              lVar11 = uVar9 - 1;
              if (lVar11 == 0) goto LAB_100526e04;
              _Var13.unknown = (undefined *)0x0;
              pbVar10 = (byte *)((ulong)&local_30 | 1);
              do {
                if (((9 < *pbVar10 - 0x30) ||
                    (lVar12 = (long)_Var13.unknown * 10,
                    SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar12 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*pbVar10 - 0x30),
                   _Var13.unknown = (undefined *)(lVar12 - uVar1), SBORROW8(lVar12,uVar1)))
                goto LAB_100526e04;
                uVar14 = 0;
                lVar11 = lVar11 + -1;
                pbVar10 = pbVar10 + 1;
              } while (lVar11 != 0);
            }
            else {
              if (uVar9 == 0) goto LAB_100526e04;
              _Var13.unknown = (undefined *)0x0;
              ppuVar8 = &local_30;
              do {
                if (((9 < *(byte *)ppuVar8 - 0x30) ||
                    (lVar11 = (long)_Var13.unknown * 10,
                    SUB168(SEXT816((long)_Var13.unknown) * SEXT816(10),8) != lVar11 >> 0x3f)) ||
                   (uVar1 = (ulong)(byte)(*(byte *)ppuVar8 - 0x30),
                   _Var13.unknown = (undefined *)(lVar11 + uVar1), SCARRY8(lVar11,uVar1)))
                goto LAB_100526e04;
                uVar14 = 0;
                uVar9 = uVar9 - 1;
                ppuVar8 = (undefined **)((long)ppuVar8 + 1);
              } while (uVar9 != 0);
            }
          }
        }
        else {
          FUN_1005271ec(_Var13.unknown,uVar6,10);
          uVar14 = (uint)uVar6;
        }
        FUN_1004e15f8(param_1);
        if ((uVar14 & 0xff) != 1) goto LAB_100526e1c;
        goto LAB_100526ba4;
      }
    }
LAB_100526ba0:
    FUN_1004e15f8();
  }
  else {
    if (uVar14 != 2) goto LAB_100526ba0;
    if ((param_2 & 1) == 0) {
      bVar3 = false;
      if ((-9.223372036854778e+18 < (double)_Var13.unknown) &&
         (bVar3 = false, !NAN((double)_Var13.unknown))) {
        bVar3 = (double)_Var13.unknown < 9.223372036854776e+18;
      }
      bVar4 = false;
      if ((bVar3) &&
         (bVar4 = false, !NAN((double)(long)(double)_Var13.unknown) && !NAN((double)_Var13.unknown))
         ) {
        bVar4 = (double)(long)(double)_Var13.unknown == (double)_Var13.unknown;
      }
      if (bVar4) {
        uVar5 = 0;
        _Var13.unknown = (undefined *)(long)(double)_Var13.unknown;
        goto LAB_100526e20;
      }
    }
  }
LAB_100526ba4:
  _Var13.unknown = (undefined *)0x0;
  uVar5 = 1;
LAB_100526e20:
  auVar15._8_8_ = uVar5;
  auVar15._0_8_ = _Var13.unknown;
  return auVar15;
}



/* Address: 0x100526e8c | FUN_100526e8c */

undefined1  [16] FUN_100526e8c(double *param_1,ulong param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double *pdVar6;
  undefined1 auVar7 [16];
  double local_70;
  ulong uStack_68;
  byte local_51;
  double *local_40;
  double local_38;
  
  dVar4 = *param_1;
  uVar2 = (uint)((ulong)param_1[3] >> 0x3c) & 3 | (*(byte *)(param_1 + 4) & 0x3f) << 2;
  if (uVar2 == 1) {
    dVar4 = (double)(long)dVar4;
  }
  else {
    if (uVar2 == 3) {
      if ((param_2 & 1) == 0) {
        dVar5 = param_1[1];
        local_38 = 0.0;
        local_40 = &local_38;
        if (((ulong)dVar5 >> 0x3c & 1) == 0) {
          if (((ulong)dVar5 >> 0x3d & 1) == 0) {
            if (((ulong)dVar4 >> 0x3c & 1) == 0) goto LAB_100526fc4;
            pdVar6 = (double *)(((ulong)dVar5 & 0xfffffffffffffff) + 0x20);
            if (0x20 < *(byte *)pdVar6 ||
                (1L << ((ulong)*(byte *)pdVar6 & 0x3f) & 0x100003e01U) == 0) goto LAB_100526f9c;
          }
          else {
            uStack_68 = (ulong)dVar5 & 0xffffffffffffff;
            pdVar6 = &local_70;
            local_70 = dVar4;
            if ((0x20 < (SUB84(dVar4,0) & 0xff)) ||
               (pdVar6 = &local_70, (1L << ((ulong)dVar4 & 0x3f) & 0x100003e01U) == 0)) {
LAB_100526f9c:
              __swift_stdlib_strtod_clocale(pdVar6,&local_38);
              if (pdVar6 != (double *)0x0) {
                bVar1 = *(byte *)pdVar6;
                FUN_1004e15f8(param_1);
                dVar4 = local_38;
                if (bVar1 == 0) goto LAB_100526f34;
                goto LAB_100526f74;
              }
            }
          }
          goto LAB_100526f70;
        }
LAB_100526fc4:
        Swift::_StringGuts::__slowWithCString((_StringGuts)0x10016e660);
        FUN_1004e15f8(param_1);
        dVar4 = local_38;
        if ((local_51 & 1) != 0) goto LAB_100526f34;
      }
      else {
LAB_100526f70:
        FUN_1004e15f8(param_1);
      }
LAB_100526f74:
      dVar4 = 0.0;
      uVar3 = 1;
      goto LAB_100526f7c;
    }
    if (uVar2 != 2) goto LAB_100526f70;
  }
LAB_100526f34:
  uVar3 = 0;
LAB_100526f7c:
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = dVar4;
  return auVar7;
}



/* Address: 0x100527000 | FUN_100527000 */

String FUN_100527000(double *param_1,ulong param_2)

{
  undefined1 *puVar1;
  String SVar2;
  uint uVar3;
  bool bVar4;
  char *pcVar5;
  String SVar6;
  
  pcVar5 = (char *)*param_1;
  uVar3 = (uint)((ulong)param_1[3] >> 0x3c) & 3 | (*(byte *)(param_1 + 4) & 0x3f) << 2;
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      if ((param_2 & 1) == 0) {
        bVar4 = ((ulong)pcVar5 & 1) == 0;
        pcVar5 = (char *)0x65757274;
        if (bVar4) {
          pcVar5 = (char *)0x65736c6166;
        }
        puVar1 = &DAT_e400000000000000;
        if (bVar4) {
          puVar1 = &DAT_e500000000000000;
        }
        SVar2.bridgeObject = puVar1;
        SVar2.str = pcVar5;
        return SVar2;
      }
      goto LAB_1005270bc;
    }
    if (uVar3 == 1) {
      if ((param_2 & 1) == 0) {
        SVar6 = Swift::CustomStringConvertible::get_description();
        return SVar6;
      }
      goto LAB_1005270bc;
    }
  }
  else {
    if (uVar3 == 2) {
      if ((param_2 & 1) == 0) {
        SVar6 = double::get_description((double)pcVar5);
        return SVar6;
      }
      goto LAB_1005270bc;
    }
    if (uVar3 == 3) {
      SVar6.bridgeObject = (void *)param_1[1];
      SVar6.str = pcVar5;
      return SVar6;
    }
  }
  FUN_1004e15f8(param_1);
LAB_1005270bc:
  return (String)ZEXT816(0);
}



/* Address: 0x1005270e0 | FUN_1005270e0 */

/* WARNING: Removing unreachable block (ram,0x0001005271e0) */

uint FUN_1005270e0(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  uint uVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_10052845c();
  _swift_bridgeObjectRetain(param_4);
  SVar8 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar6 = SVar8.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar6 >> 0x3c & 1) != 0) {
    FUN_100527584();
    _swift_bridgeObjectRelease(pvVar6);
    puVar1 = local_50;
    pvVar6 = SVar8.bridgeObject;
  }
  local_50 = SVar8.str;
  pvVar7 = SVar8.bridgeObject;
  if (((ulong)pvVar6 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar5 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar5.unknown = (undefined *)(((ulong)pvVar7 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    FUN_1005272ec(UVar5.unknown);
    uVar3 = (uint)UVar5.unknown;
  }
  else {
    uStack_48 = (ulong)pvVar7 & 0xffffffffffffff;
    ppuVar4 = &local_50;
    FUN_1005272ec(ppuVar4,(ulong)pvVar7 >> 0x38 & 0xf,param_5);
    uVar3 = (uint)ppuVar4;
  }
  _swift_bridgeObjectRelease(pvVar7);
  return uVar3 & 0xff | (uVar3 >> 8 & 0xff) << 8;
}



/* Address: 0x1005271ec | FUN_1005271ec */

/* WARNING: Removing unreachable block (ram,0x0001005272e0) */

undefined1  [16] FUN_1005271ec(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100527584();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1005272ec | FUN_1005272ec */

uint FUN_1005272ec(byte *param_1,long param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar5 = (uint)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100527584);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar8 = 0;
      uVar1 = uVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = uVar5 + 0x57;
      }
      uVar9 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar9 = uVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar10 = (uint)bVar3;
          if ((uVar10 < 0x41) || ((uVar9 & 0xff) <= uVar10)) {
            uVar7 = 0;
            iVar6 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100527570;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar8 = (uVar8 & 0xff) * (uVar5 & 0xff);
        if (((uVar8 & 0xff00) != 0) ||
           (uVar8 = (uVar8 & 0xff) + ((uint)bVar3 + iVar6 & 0xff), uVar8 >> 8 != 0))
        goto LAB_10052755c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
LAB_10052748c:
      iVar6 = 0;
      uVar7 = uVar8;
      goto LAB_100527570;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100527580);
      (*pcVar4)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar8 = 0;
      uVar1 = uVar5 + 0x30;
      uVar2 = 0x61;
      if (10 < param_3) {
        uVar2 = uVar5 + 0x57;
      }
      uVar9 = 0x41;
      if (10 < param_3) {
        uVar1 = 0x3a;
        uVar9 = uVar5 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar10 = (uint)bVar3;
          if ((uVar10 < 0x41) || ((uVar9 & 0xff) <= uVar10)) {
            uVar7 = 0;
            iVar6 = 1;
            if ((uVar10 < 0x61) || ((uVar2 & 0xff) <= uVar10)) goto LAB_100527570;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar8 = (uVar8 & 0xff) * (uVar5 & 0xff);
        if (((uVar8 & 0xff00) != 0) ||
           (uVar8 = (uVar8 & 0xff) - ((uint)bVar3 + iVar6 & 0xff), (uVar8 & 0xffffff00) != 0))
        goto LAB_10052755c;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
      goto LAB_10052748c;
    }
  }
  else if (param_2 != 0) {
    uVar8 = uVar5 + 0x30;
    uVar1 = 0x61;
    if (10 < param_3) {
      uVar1 = uVar5 + 0x57;
    }
    uVar2 = 0x41;
    if (10 < param_3) {
      uVar8 = 0x3a;
      uVar2 = uVar5 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      iVar6 = 0;
    }
    else {
      uVar9 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar8 & 0xff) <= (uint)bVar3)) {
          uVar10 = (uint)bVar3;
          if ((uVar10 < 0x41) || ((uVar2 & 0xff) <= uVar10)) {
            uVar7 = 0;
            iVar6 = 1;
            if ((uVar10 < 0x61) || ((uVar1 & 0xff) <= uVar10)) goto LAB_100527570;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar9 = (uVar9 & 0xff) * (uVar5 & 0xff);
        if (((uVar9 & 0xff00) != 0) ||
           (uVar7 = (uVar9 & 0xff) + ((uint)bVar3 + iVar6 & 0xff), uVar7 >> 8 != 0))
        goto LAB_10052755c;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar9 = uVar7;
      } while (param_2 != 0);
      iVar6 = 0;
    }
    goto LAB_100527570;
  }
LAB_10052755c:
  uVar7 = 0;
  iVar6 = 1;
LAB_100527570:
  return uVar7 & 0xff | iVar6 << 8;
}



/* Address: 0x100527584 | FUN_100527584 */

undefined1  [16]
FUN_100527584(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1005275d4();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1005275d4 | FUN_1005275d4 */

String FUN_1005275d4(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_10051b064(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005276d4);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_10052760c;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_10052760c:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x100527718 | FUN_100527718 */

undefined * FUN_100527718(undefined8 *param_1,double *param_2)

{
  undefined *puVar1;
  double dVar2;
  bool bVar3;
  _StringGuts _Var4;
  uint uVar5;
  _StringGuts _Var6;
  undefined *puVar7;
  ulong uVar8;
  double dVar9;
  
  _Var4.unknown = (undefined *)*param_1;
  _Var6.unknown = (undefined *)param_1[1];
  uVar8 = param_1[3];
  uVar5 = (uint)(uVar8 >> 0x3c) & 3 | (*(byte *)(param_1 + 4) & 0x3f) << 2;
  if (uVar5 < 4) {
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        if (((uint)((ulong)param_2[3] >> 0x3c) & 3) == 0 && ((ulong)param_2[4] & 0x3f) == 0) {
          uVar5 = (uint)_Var4.unknown ^ *(uint *)param_2 ^ 1;
          goto LAB_100527948;
        }
      }
      else if (((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 1)
      {
        uVar5 = (uint)(_Var4.unknown == (undefined *)*param_2);
        goto LAB_100527948;
      }
    }
    else if (uVar5 == 2) {
      if (((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 2) {
        uVar5 = (uint)(*param_2 == (double)_Var4.unknown);
        goto LAB_100527948;
      }
    }
    else if (((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 3) {
      if ((_Var4.unknown != (undefined *)*param_2) || (_Var6.unknown != (undefined *)param_2[1])) {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var6,(_StringComparisonResult)(__int8)(undefined *)*param_2);
        return (undefined *)(ulong)bVar3;
      }
LAB_100527938:
      uVar5 = 1;
      goto LAB_100527948;
    }
  }
  else if (uVar5 < 6) {
    if (uVar5 == 4) {
      dVar9 = param_2[3];
      if (((uint)((ulong)dVar9 >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 4) {
        puVar7 = (undefined *)param_1[2];
        puVar1 = (undefined *)param_2[1];
        dVar2 = param_2[2];
        if (_Var6.unknown == (undefined *)0x0) {
          if (puVar1 == (undefined *)0x0) goto LAB_10052795c;
        }
        else if ((puVar1 != (undefined *)0x0) &&
                (((_Var4.unknown == (undefined *)*param_2 && (_Var6.unknown == puVar1)) ||
                 (bVar3 = Swift::_stringCompareWithSmolCheck
                                    (_Var4,_Var6,
                                     (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar3)
                 ))) {
LAB_10052795c:
          FUN_10031b830(puVar7,uVar8 & 0xcfffffffffffffff,dVar2,(ulong)dVar9 & 0xcfffffffffffffff);
          return puVar7;
        }
      }
    }
    else if (((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 5) {
      FUN_100555578(_Var4.unknown,*param_2);
      return _Var4.unknown;
    }
  }
  else if (uVar5 == 6) {
    if (((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 6) {
      FUN_100523efc(_Var4.unknown,*param_2);
      return _Var4.unknown;
    }
  }
  else if (((((uint)((ulong)param_2[3] >> 0x3c) & 3 | (*(byte *)(param_2 + 4) & 0x3f) << 2) == 7) &&
           (param_2[3] == 1.727233711018889e-77)) &&
          ((param_2[1] == 0.0 && param_2[2] == 0.0) && *param_2 == 0.0)) goto LAB_100527938;
  uVar5 = 0;
LAB_100527948:
  return (undefined *)(ulong)(uVar5 & 1);
}



/* Address: 0x10052797c | FUN_10052797c */

undefined8 * FUN_10052797c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar5 = *(undefined1 *)(param_1 + 4);
  FUN_10045b2bc(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_2 = uVar1;
  param_2[1] = uVar3;
  param_2[2] = uVar2;
  param_2[3] = uVar4;
  *(undefined1 *)(param_2 + 4) = uVar5;
  return param_2;
}



/* Address: 0x1005279dc | FUN_1005279dc */

/* WARNING: Removing unreachable block (ram,0x000100527bbc) */
/* WARNING: Removing unreachable block (ram,0x000100527d8c) */
/* WARNING: Removing unreachable block (ram,0x000100527b10) */
/* WARNING: Removing unreachable block (ram,0x000100527ce4) */
/* WARNING: Removing unreachable block (ram,0x000100527cf4) */
/* WARNING: Removing unreachable block (ram,0x000100527d28) */
/* WARNING: Removing unreachable block (ram,0x000100527d04) */
/* WARNING: Removing unreachable block (ram,0x000100527adc) */
/* WARNING: Removing unreachable block (ram,0x000100527ccc) */
/* WARNING: Removing unreachable block (ram,0x000100527cdc) */
/* WARNING: Removing unreachable block (ram,0x000100527b44) */
/* WARNING: Removing unreachable block (ram,0x000100527d38) */
/* WARNING: Removing unreachable block (ram,0x000100527c3c) */
/* WARNING: Removing unreachable block (ram,0x000100527aa8) */

void FUN_1005279dc(undefined1 (*param_1) [16],long param_2)

{
  undefined1 auVar1 [16];
  bool bVar2;
  bool bVar3;
  long unaff_x21;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    bVar2 = Swift::SingleValueDecodingContainer::decodeNil();
    if (!bVar2) {
      FUN_100004640(auStack_88,local_70);
      bVar3 = Swift::SingleValueDecodingContainer::_decode();
      uVar4 = 0;
      auVar1 = ZEXT116(bVar3);
    }
    else {
      auVar1 = ZEXT816(0);
      uVar4 = 0x3000000000000000;
    }
    FUN_100004594(auStack_88);
    FUN_100004594(param_2);
    *param_1 = auVar1;
    *(undefined8 *)param_1[1] = 0;
    *(undefined8 *)(param_1[1] + 8) = uVar4;
    param_1[2][0] = bVar2;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100527da0 | FUN_100527da0 */

void FUN_100527da0(void)

{
  undefined *puVar1;
  
  if (DAT_100fce740 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fce740 = puVar1;
  return;
}



/* Address: 0x100527de0 | FUN_100527de0 */

void FUN_100527de0(undefined8 *param_1,long param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  code *pcVar15;
  undefined *puVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined1 *puVar23;
  
  puVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a68e0();
  lVar20 = *(long *)(param_2 + 0x10);
  if (lVar20 != 0) {
    puVar23 = (undefined1 *)(param_2 + 0x50);
    do {
      uVar5 = *(ulong *)(puVar23 + -0x30);
      uVar10 = *(ulong *)(puVar23 + -0x28);
      uVar6 = *(undefined8 *)(puVar23 + -0x20);
      uVar11 = *(undefined8 *)(puVar23 + -0x18);
      uVar7 = *(undefined8 *)(puVar23 + -0x10);
      uVar12 = *(undefined8 *)(puVar23 + -8);
      uVar14 = *puVar23;
      _swift_bridgeObjectRetain(uVar10);
      FUN_10045b2bc(uVar6,uVar11,uVar7,uVar12,uVar14);
      FUN_10045b2bc(uVar6,uVar11,uVar7,uVar12,uVar14);
      puVar17 = puVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar18 = uVar5;
      uVar19 = uVar10;
      FUN_100071370();
      uVar22 = (ulong)~(uint)uVar19 & 1;
      lVar1 = *(long *)(puVar16 + 0x10) + uVar22;
      if (SCARRY8(*(long *)(puVar16 + 0x10),uVar22)) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x100528010);
        (*pcVar15)();
      }
      if (*(long *)(puVar16 + 0x18) < lVar1) {
        FUN_1004b6a84(lVar1,puVar17);
        uVar18 = uVar5;
        uVar22 = uVar10;
        FUN_100071370();
        if (((uint)uVar19 & 1) != ((uint)uVar22 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100528024);
          (*pcVar15)();
        }
LAB_100527f40:
        if ((uVar19 & 1) != 0) goto LAB_100527e28;
LAB_100527f48:
        *(ulong *)(puVar16 + (uVar18 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar16 + (uVar18 >> 6) * 8 + 0x40) | 1L << (uVar18 & 0x3f);
        puVar2 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar18 * 0x10);
        *puVar2 = uVar5;
        puVar2[1] = uVar10;
        puVar21 = (undefined8 *)(*(long *)(puVar16 + 0x38) + uVar18 * 0x28);
        *puVar21 = uVar6;
        puVar21[1] = uVar11;
        puVar21[2] = uVar7;
        puVar21[3] = uVar12;
        *(undefined1 *)(puVar21 + 4) = uVar14;
        FUN_1004dbde0(uVar6,uVar11,uVar7,uVar12,uVar14);
        if (SCARRY8(*(long *)(puVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x100528014);
          (*pcVar15)();
        }
        *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
      }
      else {
        if (((ulong)puVar17 & 1) != 0) goto LAB_100527f40;
        FUN_100506f44();
        if ((uVar19 & 1) == 0) goto LAB_100527f48;
LAB_100527e28:
        puVar21 = (undefined8 *)(*(long *)(puVar16 + 0x38) + uVar18 * 0x28);
        uVar3 = *puVar21;
        uVar8 = puVar21[1];
        uVar4 = puVar21[2];
        uVar9 = puVar21[3];
        *puVar21 = uVar6;
        puVar21[1] = uVar11;
        puVar21[2] = uVar7;
        puVar21[3] = uVar12;
        uVar13 = *(undefined1 *)(puVar21 + 4);
        *(undefined1 *)(puVar21 + 4) = uVar14;
        FUN_1004dbde0(uVar3,uVar8,uVar4,uVar9,uVar13);
        _swift_bridgeObjectRelease(uVar10);
        FUN_1004dbde0(uVar6,uVar11,uVar7,uVar12,uVar14);
      }
      puVar23 = puVar23 + 0x38;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  *param_1 = puVar16;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0x2000000000000000;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x100528024 | thunk_FUN_100528028 */

void thunk_FUN_100528028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce748 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55430;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55430,&DAT_100edd000);
  DAT_100fce748 = pTVar1;
  return;
}



/* Address: 0x100528028 | FUN_100528028 */

void FUN_100528028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce748 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55430;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55430,&DAT_100edd000);
  DAT_100fce748 = pTVar1;
  return;
}



/* Address: 0x100528068 | FUN_100528068 */

undefined * FUN_100528068(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_Bool___Swift__ExpressibleByBuiltinBooleanLiteral_in_Swift_100eac5a0
  ;
}



/* Address: 0x100528074 | thunk_FUN_100528078 */

void thunk_FUN_100528078(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce750 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c555e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c555e0,&DAT_100edd000);
  DAT_100fce750 = pTVar1;
  return;
}



/* Address: 0x100528078 | FUN_100528078 */

void FUN_100528078(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce750 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c555e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c555e0,&DAT_100edd000);
  DAT_100fce750 = pTVar1;
  return;
}



/* Address: 0x1005280b8 | thunk_FUN_1005280bc */

void thunk_FUN_1005280bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55620,&DAT_100edd000);
  DAT_100fce758 = pTVar1;
  return;
}



/* Address: 0x1005280bc | FUN_1005280bc */

void FUN_1005280bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce758 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55620;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55620,&DAT_100edd000);
  DAT_100fce758 = pTVar1;
  return;
}



/* Address: 0x1005280fc | thunk_FUN_100528100 */

void thunk_FUN_100528100(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c555a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c555a0,&DAT_100edd000);
  DAT_100fce760 = pTVar1;
  return;
}



/* Address: 0x100528100 | FUN_100528100 */

void FUN_100528100(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce760 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c555a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c555a0,&DAT_100edd000);
  DAT_100fce760 = pTVar1;
  return;
}



/* Address: 0x100528140 | thunk_FUN_100528144 */

void thunk_FUN_100528144(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c556c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c556c0,&DAT_100edd078);
  DAT_100fce768 = pTVar1;
  return;
}



/* Address: 0x100528144 | FUN_100528144 */

void FUN_100528144(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce768 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c556c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c556c0,&DAT_100edd078);
  DAT_100fce768 = pTVar1;
  return;
}



/* Address: 0x100528184 | FUN_100528184 */

void FUN_100528184(undefined8 *param_1)

{
  FUN_1004dbde0(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x100528198 | FUN_100528198 */

undefined8 * FUN_100528198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_10045b2bc(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1005281f8 | FUN_1005281f8 */

undefined8 * FUN_1005281f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_10045b2bc(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_1004dbde0(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x100528268 | FUN_100528268 */

undefined8 * FUN_100528268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_1004dbde0(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x1005282b0 | FUN_1005282b0 */

int FUN_1005282b0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f8 < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0x3f9;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 8) << 2) ^ 0x3ff;
  if (0x3f7 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100528304 | FUN_100528304 */

void FUN_100528304(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x3f9) {
    if (0x3f8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = ((ulong)-param_2 & 3) << 0x3c;
      *(char *)(param_1 + 4) = (char)(-param_2 >> 2);
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 0x3f9);
    param_1[1] = 0;
    if (0x3f8 < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x10052835c | FUN_10052835c */

uint FUN_10052835c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x3c) & 3 |
          (*(byte *)(param_1 + 8) & 0x3f) << 2;
  uVar1 = *param_1 + 7;
  if (uVar2 < 7) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x100528384 | FUN_100528384 */

void FUN_100528384(long param_1)

{
  *(ulong *)(param_1 + 0x18) = *(ulong *)(param_1 + 0x18) & 0xcfffffffffffffff;
  return;
}



/* Address: 0x100528394 | FUN_100528394 */

void FUN_100528394(ulong *param_1,uint param_2)

{
  if (6 < param_2) {
    *param_1 = (ulong)(param_2 - 7);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0x3000000000000000;
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  param_1[3] = param_1[3] & 0xc000000000000000 |
               param_1[3] & 0xfffffffffffffff | ((ulong)param_2 & 3) << 0x3c;
  *(char *)(param_1 + 4) = (char)(param_2 >> 2);
  return;
}



/* Address: 0x1005283cc | FUN_1005283cc */

undefined1  [16] FUN_1005283cc(void)

{
  return ZEXT816(0x100edd000);
}



/* Address: 0x1005283dc | FUN_1005283dc */

undefined1  [16] FUN_1005283dc(void)

{
  return ZEXT816(0x100edd078);
}



/* Address: 0x1005283ec | FUN_1005283ec */

void FUN_1005283ec(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fce730;
    FUN_1000f8b08(&DAT_100fce730,&DAT_100c553e8);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10052845c | FUN_10052845c */

void FUN_10052845c(void)

{
  undefined *puVar1;
  
  if (DAT_100fce778 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fce778 = puVar1;
  return;
}



/* Address: 0x10052849c | thunk_FUN_100526658 */

void thunk_FUN_100526658(void)

{
  FUN_100526658();
  return;
}



/* Address: 0x1005284a0 | thunk_FUN_100526640 */

void thunk_FUN_100526640(void)

{
  FUN_100526640();
  return;
}



/* Address: 0x1005284a4 | FUN_1005284a4 */

undefined8 * FUN_1005284a4(void)

{
  if (DAT_100fce780 != -1) {
    _swift_once(&DAT_100fce780,FUN_1005286e4);
  }
  return &DAT_101057b30;
}



/* Address: 0x1005284e4 | FUN_1005284e4 */

undefined8 * FUN_1005284e4(void)

{
  if (DAT_100fce788 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  return &DAT_101057b28;
}



/* Address: 0x100528524 | FUN_100528524 */

void FUN_100528524(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  char *pcVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  _StringGuts _Var7;
  String SVar8;
  code *pcVar9;
  bool bVar10;
  _SetStorage *this;
  long lVar11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_a8 [72];
  
  this = (_SetStorage *)&DAT_100fcbb28;
  FUN_1000f7830(&DAT_100fcbb28,&DAT_100c509e8);
  lVar11 = 4;
  Swift::_SetStorage::_allocate(this,4);
  lVar17 = 0;
  lVar1 = lVar11 + 0x38;
  do {
    pcVar4 = ((String *)(&DAT_100fce7b8 + lVar17 * 2))->str;
    puVar6 = (undefined *)(&DAT_100fce7c0)[lVar17 * 2];
    SVar8 = *(String *)(&DAT_100fce7b8 + lVar17 * 2);
    Swift::Hasher::init(*(__int64 *)(lVar11 + 0x28));
    _swift_bridgeObjectRetain(puVar6);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar12 = uVar12 & (uVar16 ^ 0xffffffffffffffff);
    uVar13 = uVar12 >> 6;
    uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
    uVar15 = 1L << (uVar12 & 0x3f);
    if ((uVar15 & uVar14) != 0) {
      do {
        puVar2 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
        _Var5.unknown = (undefined *)*puVar2;
        _Var7.unknown = (undefined *)puVar2[1];
        if ((_Var5.unknown == pcVar4 && _Var7.unknown == puVar6) ||
           (bVar10 = Swift::_stringCompareWithSmolCheck
                               (_Var5,_Var7,(_StringComparisonResult)(__int8)pcVar4), bVar10)) {
          _swift_bridgeObjectRelease(puVar6);
          goto LAB_10052858c;
        }
        uVar12 = uVar12 + 1 & ~uVar16;
        uVar13 = uVar12 >> 6;
        uVar14 = *(ulong *)(lVar1 + uVar13 * 8);
        uVar15 = 1L << (uVar12 & 0x3f);
      } while ((uVar15 & uVar14) != 0);
    }
    *(ulong *)(lVar1 + uVar13 * 8) = uVar15 | uVar14;
    plVar3 = (long *)(*(long *)(lVar11 + 0x30) + uVar12 * 0x10);
    *plVar3 = (long)pcVar4;
    plVar3[1] = (long)puVar6;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1005286a4);
      (*pcVar9)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
LAB_10052858c:
    lVar17 = lVar17 + 1;
    if (lVar17 == 4) {
      _swift_arrayDestroy(&DAT_100fce7b8,4,PTR___type_metadata_for_Swift_String_100eac208);
      DAT_101057b28 = lVar11;
      return;
    }
  } while( true );
}



/* Address: 0x1005286a4 | FUN_1005286a4 */

void FUN_1005286a4(void)

{
  if (DAT_100fce788 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  _swift_bridgeObjectRetain(DAT_101057b28);
  return;
}



/* Address: 0x1005286e4 | FUN_1005286e4 */

void FUN_1005286e4(void)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  _StringGuts _Var12;
  _StringGuts _Var13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  
  if (DAT_100fce788 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  lVar6 = DAT_101057b28;
  puVar14 = (ulong *)(DAT_101057b28 + 0x38);
  uVar10 = 1L << ((ulong)*(byte *)(DAT_101057b28 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if ((*(byte *)(DAT_101057b28 + 0x20) & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar16 = uVar16 & *puVar14;
  if (uVar16 == 0) {
    lVar9 = 0;
    uVar10 = uVar10 + 0x3f >> 6;
    lVar11 = 0;
    do {
      if (uVar10 - 1 == lVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100528894);
        (*pcVar7)();
      }
      lVar15 = lVar11 + 1;
      uVar16 = *(ulong *)(DAT_101057b28 + 0x40 + lVar11 * 8);
      lVar9 = lVar9 + -0x40;
      lVar11 = lVar15;
    } while (uVar16 == 0);
    uVar5 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    uVar16 = uVar16 - 1 & uVar16;
    lVar9 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) - lVar9;
  }
  else {
    lVar15 = 0;
    uVar5 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
    uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
    uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
    uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
    lVar9 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20);
    uVar16 = uVar16 - 1 & uVar16;
    uVar10 = uVar10 + 0x3f >> 6;
  }
  puVar1 = (undefined8 *)(*(long *)(DAT_101057b28 + 0x30) + lVar9 * 0x10);
  _Var13.unknown = (undefined *)*puVar1;
  _Var12.unknown = (undefined *)puVar1[1];
  _swift_bridgeObjectRetain_n(DAT_101057b28,2);
  _swift_bridgeObjectRetain(_Var12.unknown);
  while( true ) {
    while (uVar16 != 0) {
      uVar5 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      plVar2 = (long *)(*(long *)(lVar6 + 0x30) + LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) * 0x10 +
                       lVar15 * 0x400);
      puVar3 = (undefined *)*plVar2;
      puVar4 = (undefined *)plVar2[1];
      if ((_Var13.unknown != puVar3 || _Var12.unknown != puVar4) &&
         (bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var13,_Var12,(_StringComparisonResult)(__int8)puVar3), bVar8)) {
        _swift_bridgeObjectRetain(puVar4);
        _swift_bridgeObjectRelease(_Var12.unknown);
        _Var13.unknown = puVar3;
        _Var12.unknown = puVar4;
      }
    }
    bVar8 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar8) break;
    if ((long)uVar10 <= lVar15) {
      _swift_release(lVar6);
      _swift_bridgeObjectRelease(lVar6);
      DAT_101057b30 = _Var13.unknown;
      DAT_101057b38 = _Var12.unknown;
      return;
    }
    uVar16 = puVar14[lVar15];
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x100528890);
  (*pcVar7)();
}



/* Address: 0x1005288ac | FUN_1005288ac */

undefined1  [16] FUN_1005288ac(void)

{
  undefined1 auVar1 [16];
  
  if (DAT_100fce780 != -1) {
    _swift_once(&DAT_100fce780,FUN_1005286e4);
  }
  auVar1._8_8_ = DAT_101057b38;
  auVar1._0_8_ = DAT_101057b30;
  _swift_bridgeObjectRetain(DAT_101057b38);
  return auVar1;
}



/* Address: 0x100528908 | FUN_100528908 */

undefined1  [16] FUN_100528908(void)

{
  return ZEXT816(0x100edd270);
}


