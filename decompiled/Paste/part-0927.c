/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009fc1fc | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc200 | FUN_1009fc200 */

void FUN_1009fc200(undefined8 *param_1)

{
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
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  FUN_1009fe520(&local_d0);
  param_1[0x11] = uStack_48;
  param_1[0x10] = local_50;
  param_1[0x13] = uStack_38;
  param_1[0x12] = uStack_40;
  param_1[0x15] = uStack_28;
  param_1[0x14] = local_30;
  param_1[9] = uStack_88;
  param_1[8] = local_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = local_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}



/* Address: 0x1009fc25c | FUN_1009fc25c */

undefined1  [16] FUN_1009fc25c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x70747468;
  return auVar1;
}



/* Address: 0x1009fc26c | FUN_1009fc26c */

undefined1  [16] FUN_1009fc26c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x7370747468;
  return auVar1;
}



/* Address: 0x1009fc280 | FUN_1009fc280 */

undefined1  [16] FUN_1009fc280(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x78696e75;
  return auVar1;
}



/* Address: 0x1009fc290 | FUN_1009fc290 */

undefined1  [16] FUN_1009fc290(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000078;
  auVar1._0_8_ = 0x696e755f70747468;
  return auVar1;
}



/* Address: 0x1009fc2ac | FUN_1009fc2ac */

undefined1  [16] FUN_1009fc2ac(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000007869;
  auVar1._0_8_ = 0x6e755f7370747468;
  return auVar1;
}



/* Address: 0x1009fc2c8 | FUN_1009fc2c8 */

undefined1  [16] FUN_1009fc2c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &SUB_e200000000000000;
  auVar1._0_8_ = 0x7377;
  return auVar1;
}



/* Address: 0x1009fc2d4 | FUN_1009fc2d4 */

undefined1  [16] FUN_1009fc2d4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x737377;
  return auVar1;
}



/* Address: 0x1009fc2e4 | FUN_1009fc2e4 */

undefined1  [16] FUN_1009fc2e4(undefined8 param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  char *pcVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  String SVar8;
  tuple2_conflict1 tVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  if (lVar4 == 0) {
    pcVar5 = (char *)0x0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x20);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc370);
      (*pcVar1)();
    }
    lVar3 = *(long *)(unaff_x20 + 0x28);
    if (*(ulong *)(lVar4 + 0x10) < uVar2 || (long)*(ulong *)(lVar4 + 0x10) < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc374);
      (*pcVar1)();
    }
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc378);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(lVar4);
    SVar8.bridgeObject = param_3;
    SVar8.str = (char *)(lVar3 - uVar2);
    tVar9 = Swift::String::_fromUTF8Repairing((undefined *)(lVar4 + uVar2 + 0x20),SVar8);
    pvVar6 = tVar9.result.bridgeObject;
    pcVar5 = tVar9.result.str;
    _swift_bridgeObjectRelease(lVar4,pvVar6,tVar9._16_8_);
  }
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Address: 0x1009fc378 | FUN_1009fc378 */

undefined1  [16] FUN_1009fc378(undefined8 param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  char *pcVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  String SVar8;
  tuple2_conflict1 tVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x30);
  if (lVar4 == 0) {
    pcVar5 = (char *)0x0;
    pvVar6 = (void *)0x0;
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x40);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc404);
      (*pcVar1)();
    }
    lVar3 = *(long *)(unaff_x20 + 0x48);
    if (*(ulong *)(lVar4 + 0x10) < uVar2 || (long)*(ulong *)(lVar4 + 0x10) < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc408);
      (*pcVar1)();
    }
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc40c);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(lVar4);
    SVar8.bridgeObject = param_3;
    SVar8.str = (char *)(lVar3 - uVar2);
    tVar9 = Swift::String::_fromUTF8Repairing((undefined *)(lVar4 + uVar2 + 0x20),SVar8);
    pvVar6 = tVar9.result.bridgeObject;
    pcVar5 = tVar9.result.str;
    _swift_bridgeObjectRelease(lVar4,pvVar6,tVar9._16_8_);
  }
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = pcVar5;
  return auVar7;
}



/* Address: 0x1009fc40c | FUN_1009fc40c */

undefined1  [16] FUN_1009fc40c(undefined8 param_1,undefined8 param_2,void *param_3)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  long lVar8;
  UnsafeBufferPointer<__int8> UVar9;
  byte *pbVar10;
  undefined **ppuVar11;
  long unaff_x20;
  _StringObject _Var12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 auVar15 [16];
  String SVar16;
  tuple2_conflict1 tVar17;
  undefined *local_40;
  ulong uStack_38;
  
  lVar13 = *(long *)(unaff_x20 + 0x50);
  if (lVar13 != 0) {
    uVar6 = *(ulong *)(unaff_x20 + 0x60);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc6f0);
      (*pcVar2)();
    }
    lVar8 = *(long *)(unaff_x20 + 0x68);
    if (*(ulong *)(lVar13 + 0x10) < uVar6 || (long)*(ulong *)(lVar13 + 0x10) < lVar8) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc6f4);
      (*pcVar2)();
    }
    if (lVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc6f8);
      (*pcVar2)();
    }
    _swift_bridgeObjectRetain(lVar13);
    SVar16.bridgeObject = param_3;
    SVar16.str = (char *)(lVar8 - uVar6);
    tVar17 = Swift::String::_fromUTF8Repairing((undefined *)(lVar13 + uVar6 + 0x20),SVar16);
    puVar4 = tVar17.result.bridgeObject;
    _Var12.unknown = tVar17.result.str;
    _swift_bridgeObjectRelease(lVar13,puVar4,tVar17._16_8_);
    puVar5 = (undefined1 *)((ulong)_Var12.unknown & 0xffffffffffff);
    puVar7 = (undefined1 *)((ulong)puVar4 >> 0x38 & 0xf);
    puVar14 = puVar5;
    if (((ulong)puVar4 & 0x2000000000000000) != 0) {
      puVar14 = puVar7;
    }
    if (puVar14 != (undefined1 *)0x0) {
      if (((ulong)puVar4 >> 0x3c & 1) == 0) {
        if (((ulong)puVar4 >> 0x3d & 1) == 0) {
          if (((ulong)_Var12.unknown >> 0x3c & 1) == 0) {
            puVar5 = puVar4;
            UVar9 = Swift::_StringObject::get_sharedUTF8(_Var12);
          }
          else {
            UVar9.unknown = (undefined *)(((ulong)puVar4 & 0xfffffffffffffff) + 0x20);
          }
          if (*UVar9.unknown == 0x2b) {
            if ((long)puVar5 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc758);
              (*pcVar2)();
            }
            puVar5 = puVar5 + -1;
            if (puVar5 == (undefined1 *)0x0) goto LAB_1009fc6c4;
            _Var12.unknown = (undefined *)0x0;
            do {
              UVar9.unknown = UVar9.unknown + 1;
              if (((9 < (byte)*UVar9.unknown - 0x30) ||
                  (lVar13 = (long)_Var12.unknown * 10,
                  SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                 _Var12.unknown = (undefined *)(lVar13 + uVar6), SCARRY8(lVar13,uVar6)))
              goto LAB_1009fc6c4;
              puVar14 = (undefined1 *)0x0;
              puVar5 = puVar5 + -1;
            } while (puVar5 != (undefined1 *)0x0);
          }
          else if (*UVar9.unknown == 0x2d) {
            if ((long)puVar5 < 1) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc750);
              (*pcVar2)();
            }
            puVar5 = puVar5 + -1;
            if (puVar5 == (undefined1 *)0x0) {
LAB_1009fc6c4:
              _Var12.unknown = (undefined *)0x0;
              puVar14 = &DAT_00000001;
            }
            else {
              _Var12.unknown = (undefined *)0x0;
              do {
                UVar9.unknown = UVar9.unknown + 1;
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar13 = (long)_Var12.unknown * 10,
                    SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar6 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   _Var12.unknown = (undefined *)(lVar13 - uVar6), SBORROW8(lVar13,uVar6)))
                goto LAB_1009fc6c4;
                puVar14 = (undefined1 *)0x0;
                puVar5 = puVar5 + -1;
              } while (puVar5 != (undefined1 *)0x0);
            }
          }
          else {
            if (puVar5 == (undefined1 *)0x0) goto LAB_1009fc6c4;
            _Var12.unknown = (undefined *)0x0;
            if (UVar9.unknown == (byte *)0x0) {
              puVar14 = (undefined1 *)0x0;
            }
            else {
              do {
                if (((9 < (byte)*UVar9.unknown - 0x30) ||
                    (lVar13 = (long)_Var12.unknown * 10,
                    SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                   (uVar6 = (ulong)(byte)((byte)*UVar9.unknown - 0x30),
                   _Var12.unknown = (undefined *)(lVar13 + uVar6), SCARRY8(lVar13,uVar6)))
                goto LAB_1009fc6c4;
                puVar14 = (undefined1 *)0x0;
                puVar5 = puVar5 + -1;
                UVar9.unknown = UVar9.unknown + 1;
              } while (puVar5 != (undefined1 *)0x0);
            }
          }
        }
        else {
          local_40 = _Var12.unknown;
          uStack_38 = (ulong)puVar4 & 0xffffffffffffff;
          uVar1 = (uint)tVar17.result.str & 0xff;
          if (uVar1 == 0x2b) {
            if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc75c);
              (*pcVar2)();
            }
            puVar7 = puVar7 + -1;
            if (puVar7 == (undefined1 *)0x0) goto LAB_1009fc6c4;
            _Var12.unknown = (undefined *)0x0;
            pbVar10 = (byte *)((ulong)&local_40 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar13 = (long)_Var12.unknown * 10,
                  SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)(*pbVar10 - 0x30),
                 _Var12.unknown = (undefined *)(lVar13 + uVar6), SCARRY8(lVar13,uVar6)))
              goto LAB_1009fc6c4;
              puVar14 = (undefined1 *)0x0;
              puVar7 = puVar7 + -1;
              pbVar10 = pbVar10 + 1;
            } while (puVar7 != (undefined1 *)0x0);
          }
          else if (uVar1 == 0x2d) {
            if (puVar7 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fc754);
              (*pcVar2)();
            }
            puVar7 = puVar7 + -1;
            if (puVar7 == (undefined1 *)0x0) goto LAB_1009fc6c4;
            _Var12.unknown = (undefined *)0x0;
            pbVar10 = (byte *)((ulong)&local_40 | 1);
            do {
              if (((9 < *pbVar10 - 0x30) ||
                  (lVar13 = (long)_Var12.unknown * 10,
                  SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)(*pbVar10 - 0x30),
                 _Var12.unknown = (undefined *)(lVar13 - uVar6), SBORROW8(lVar13,uVar6)))
              goto LAB_1009fc6c4;
              puVar14 = (undefined1 *)0x0;
              puVar7 = puVar7 + -1;
              pbVar10 = pbVar10 + 1;
            } while (puVar7 != (undefined1 *)0x0);
          }
          else {
            if (puVar7 == (undefined1 *)0x0) goto LAB_1009fc6c4;
            _Var12.unknown = (undefined *)0x0;
            ppuVar11 = &local_40;
            do {
              if (((9 < *(byte *)ppuVar11 - 0x30) ||
                  (lVar13 = (long)_Var12.unknown * 10,
                  SUB168(SEXT816((long)_Var12.unknown) * SEXT816(10),8) != lVar13 >> 0x3f)) ||
                 (uVar6 = (ulong)(byte)(*(byte *)ppuVar11 - 0x30),
                 _Var12.unknown = (undefined *)(lVar13 + uVar6), SCARRY8(lVar13,uVar6)))
              goto LAB_1009fc6c4;
              puVar14 = (undefined1 *)0x0;
              puVar7 = puVar7 + -1;
              ppuVar11 = (undefined **)((long)ppuVar11 + 1);
            } while (puVar7 != (undefined1 *)0x0);
          }
        }
      }
      else {
        puVar14 = puVar4;
        FUN_1009fd394(_Var12.unknown,puVar4,10);
      }
      _swift_bridgeObjectRelease(puVar4);
      puVar3 = (undefined *)0x0;
      if (((uint)puVar14 & 0xff) != 1) {
        puVar3 = _Var12.unknown;
      }
      goto LAB_1009fc708;
    }
    _swift_bridgeObjectRelease(puVar4);
  }
  puVar14 = &DAT_00000001;
  puVar3 = (undefined *)0x0;
LAB_1009fc708:
  auVar15._8_8_ = puVar14;
  auVar15._0_8_ = puVar3;
  return auVar15;
}



/* Address: 0x1009fc75c | FUN_1009fc75c */

undefined1  [16] FUN_1009fc75c(undefined8 param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  void *pvVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  String SVar8;
  tuple2_conflict1 tVar9;
  
  lVar4 = *(long *)(unaff_x20 + 0x70);
  if (lVar4 == 0) {
    pvVar5 = (void *)0xe100000000000000;
    pcVar6 = (char *)0x2f;
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0x80);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc7e8);
      (*pcVar1)();
    }
    lVar3 = *(long *)(unaff_x20 + 0x88);
    if (*(ulong *)(lVar4 + 0x10) < uVar2 || (long)*(ulong *)(lVar4 + 0x10) < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc7ec);
      (*pcVar1)();
    }
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc7f0);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(lVar4);
    SVar8.bridgeObject = param_3;
    SVar8.str = (char *)(lVar3 - uVar2);
    tVar9 = Swift::String::_fromUTF8Repairing((undefined *)(lVar4 + uVar2 + 0x20),SVar8);
    pvVar5 = tVar9.result.bridgeObject;
    pcVar6 = tVar9.result.str;
    _swift_bridgeObjectRelease(lVar4,pvVar5,tVar9._16_8_);
  }
  auVar7._8_8_ = pvVar5;
  auVar7._0_8_ = pcVar6;
  return auVar7;
}



/* Address: 0x1009fc7f0 | FUN_1009fc7f0 */

String FUN_1009fc7f0(undefined8 param_1,undefined8 param_2,void *param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  String SVar5;
  tuple2_conflict1 tVar6;
  char *local_40;
  void *pvStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x90);
  if (lVar4 == 0) {
    SVar5 = (String)ZEXT816(0);
  }
  else {
    uVar2 = *(ulong *)(unaff_x20 + 0xa0);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc8a0);
      (*pcVar1)();
    }
    lVar3 = *(long *)(unaff_x20 + 0xa8);
    if (*(ulong *)(lVar4 + 0x10) < uVar2 || (long)*(ulong *)(lVar4 + 0x10) < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc8a4);
      (*pcVar1)();
    }
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fc8a8);
      (*pcVar1)();
    }
    _swift_bridgeObjectRetain(lVar4);
    SVar5.bridgeObject = param_3;
    SVar5.str = (char *)(lVar3 - uVar2);
    tVar6 = Swift::String::_fromUTF8Repairing((undefined *)(lVar4 + uVar2 + 0x20),SVar5);
    _swift_bridgeObjectRelease(lVar4,tVar6.result.bridgeObject,tVar6._16_8_);
    local_40 = tVar6.result.str;
    pvStack_38 = tVar6.result.bridgeObject;
    SVar5 = Swift::String::_init
                      (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                       PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                       ,
                       PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                      );
  }
  return SVar5;
}



/* Address: 0x1009fc8a8 | FUN_1009fc8a8 */

undefined1  [16] FUN_1009fc8a8(undefined8 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  byte bVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined1 *puVar18;
  long unaff_x20;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined8 *puVar21;
  undefined1 auVar22 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *local_70;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar18 = *(undefined1 **)(unaff_x20 + 0x90);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar18 != (undefined1 *)0x0) {
    puVar20 = *(undefined1 **)(unaff_x20 + 0x98);
    puVar19 = *(undefined1 **)(unaff_x20 + 0xa8);
    if (puVar20 == puVar19) {
      _swift_bridgeObjectRetain(puVar18);
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      uVar12 = *(undefined8 *)(unaff_x20 + 0xa0);
      puVar1 = puVar18 + 0x20;
      puVar6 = puVar18;
      _swift_bridgeObjectRetain();
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (puVar20 == puVar19) {
LAB_1009fcb10:
          FUN_1009ff51c();
          puVar8 = &DAT_100f29a58;
          _swift_allocError(&DAT_100f29a58,puVar6,0,0);
          *puVar6 = 0;
          _swift_willThrow();
          param_2 = puVar6;
          if (puVar20 != puVar19) {
            if ((long)puVar19 < (long)puVar20) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd08);
              (*pcVar4)();
            }
            if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd0c);
              (*pcVar4)();
            }
            puVar14 = *(undefined1 **)(puVar18 + 0x10);
            if ((long)puVar14 < (long)puVar19) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd10);
              (*pcVar4)();
            }
            if (puVar20 != puVar14) {
              if (puVar14 <= puVar20) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd58);
                (*pcVar4)();
              }
              if ((char)puVar1[(long)puVar20] < -0x40) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd5c);
                (*pcVar4)();
              }
            }
            _swift_bridgeObjectRetain(puVar18);
            puVar9 = puVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            param_2 = puVar6;
            puVar10 = puVar11;
            if (((ulong)puVar9 & 1) == 0) {
              param_2 = (undefined1 *)(*(long *)(puVar11 + 0x10) + 1);
              puVar10 = (undefined *)0x0;
              FUN_1009fd494(0,param_2,1,puVar11);
            }
            uVar2 = *(ulong *)(puVar10 + 0x10);
            puVar1 = (undefined1 *)(uVar2 + 1);
            puVar11 = puVar10;
            if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
              puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
              param_2 = puVar1;
              FUN_1009fd494(puVar11,puVar1,1,puVar10);
            }
            *(undefined1 **)(puVar11 + 0x10) = puVar1;
            *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x20) = puVar18;
            *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x28) = puVar20;
            *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x30) = puVar20;
            *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x38) = puVar19;
          }
          _swift_errorRelease(puVar8);
          break;
        }
        puVar13 = *(undefined1 **)(puVar18 + 0x10);
        puVar14 = puVar20;
        while( true ) {
          if (puVar13 <= puVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcce0);
            (*pcVar4)();
          }
          bVar3 = puVar1[(long)puVar14];
          uVar15 = (uint)bVar3;
          if (((bVar3 ^ 0xffffffff) & 0xc0) == 0) {
            if ((long)puVar13 <= (long)(puVar14 + 1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcce8);
              (*pcVar4)();
            }
            uVar17 = (byte)puVar1[(long)(puVar14 + 1)] & 0x3f;
            uVar16 = (uint)bVar3;
            if (((uVar16 ^ 0xffffffff) & 0xe0) == 0) {
              if ((long)puVar13 <= (long)(puVar14 + 2)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccf0);
                (*pcVar4)();
              }
              if (((uVar16 ^ 0xffffffff) & 0xf0) == 0) {
                if ((long)puVar13 <= (long)(puVar14 + 3)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccf4);
                  (*pcVar4)();
                }
                uVar17 = (uVar15 & 7) << 0x12 | uVar17 << 0xc |
                         ((byte)puVar1[(long)(puVar14 + 2)] & 0x3f) << 6 |
                         (byte)puVar1[(long)(puVar14 + 3)] & 0x3f;
              }
              else {
                uVar17 = (uVar16 & 0xf) << 0xc | uVar17 << 6 |
                         (byte)puVar1[(long)(puVar14 + 2)] & 0x3f;
              }
            }
            else {
              uVar17 = uVar17 | (uVar16 & 0x1f) << 6;
            }
          }
          else {
            uVar17 = bVar3 & 0x7f;
          }
          if (uVar17 >> 0xb == 0x1b) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccec);
            (*pcVar4)();
          }
          if (0x10 < uVar17 >> 0x10) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcce4);
            (*pcVar4)();
          }
          if (uVar17 == 0x26) break;
          if ((char)bVar3 < '\0') {
            if ((uVar15 & 0xe0) == 0xc0) {
              puVar14 = puVar14 + 2;
            }
            else if ((uVar15 & 0xf0) == 0xe0) {
              bVar5 = SCARRY8((long)puVar14,3);
              puVar14 = puVar14 + 3;
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccf8);
                (*pcVar4)();
              }
            }
            else {
              bVar5 = SCARRY8((long)puVar14,4);
              puVar14 = puVar14 + 4;
              if (bVar5) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccfc);
                (*pcVar4)();
              }
            }
          }
          else {
            puVar14 = puVar14 + 1;
          }
          if (puVar14 == puVar19) goto LAB_1009fcb10;
        }
        if ((long)puVar14 < (long)puVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd00);
          (*pcVar4)();
        }
        if ((long)puVar20 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd04);
          (*pcVar4)();
        }
        if ((puVar20 != puVar13) && ((char)puVar1[(long)puVar20] < -0x40)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fcd54);
          (*pcVar4)();
        }
        _swift_bridgeObjectRetain(puVar18);
        puVar7 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar8 = puVar11;
        if (((ulong)puVar7 & 1) == 0) {
          puVar8 = (undefined *)0x0;
          FUN_1009fd494(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11);
        }
        uVar2 = *(ulong *)(puVar8 + 0x10);
        puVar11 = puVar8;
        if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
          FUN_1009fd494(puVar11,uVar2 + 1,1,puVar8);
        }
        *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
        *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x20) = puVar18;
        *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x28) = puVar20;
        *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x30) = puVar20;
        *(undefined1 **)(puVar11 + uVar2 * 0x20 + 0x38) = puVar14;
        param_2 = puVar18;
        FUN_100a31f54(puVar14,puVar18,puVar14,uVar12,puVar19);
        puVar6 = puVar14;
        puVar20 = puVar14;
        puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
      } while (puVar14 != puVar19);
    }
    puVar20 = *(undefined1 **)(puVar11 + 0x10);
    if (puVar20 != (undefined1 *)0x0) {
      param_2 = puVar20;
      local_70 = puVar7;
      FUN_1009fd6dc(0,puVar20,0);
      if (*(long *)(puVar11 + 0x10) != 0) {
        puVar19 = (undefined1 *)0x0;
        puVar21 = (undefined8 *)(puVar11 + 0x38);
        do {
          puVar7 = local_70;
          local_d0 = puVar21[-3];
          local_b8 = *puVar21;
          uStack_c0 = puVar21[-1];
          local_c8 = puVar21[-2];
          FUN_1009fcd5c(&local_b0,&local_d0);
          uVar2 = *(ulong *)(puVar7 + 0x10);
          puVar1 = (undefined1 *)(uVar2 + 1);
          local_70 = puVar7;
          if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
            param_2 = puVar1;
            FUN_1009fd6dc(1 < *(ulong *)(puVar7 + 0x18),puVar1,1);
          }
          puVar7 = local_70;
          *(undefined1 **)(local_70 + 0x10) = puVar1;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x48) = uStack_88;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x40) = local_90;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x58) = uStack_78;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x50) = uStack_80;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x28) = uStack_a8;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x20) = local_b0;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x38) = uStack_98;
          *(undefined8 *)(local_70 + uVar2 * 0x40 + 0x30) = uStack_a0;
          if (puVar20 + -1 == puVar19) {
            _swift_bridgeObjectRelease(puVar11);
            goto LAB_1009fcc98;
          }
          puVar21 = puVar21 + 4;
          puVar19 = puVar19 + 1;
        } while (puVar19 < *(undefined1 **)(puVar11 + 0x10));
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009fccdc);
      (*pcVar4)();
    }
    _swift_bridgeObjectRelease(puVar11);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1009fcc98:
    FUN_1009fd18c(puVar7);
    _swift_bridgeObjectRelease(puVar18);
    puVar11 = param_2;
  }
  auVar22._8_8_ = puVar11;
  auVar22._0_8_ = puVar7;
  return auVar22;
}



/* Address: 0x1009fcd5c | FUN_1009fcd5c */

void FUN_1009fcd5c(undefined8 *param_1,long *param_2,undefined8 param_3,void *param_4,ulong param_5)

{
  void *pvVar1;
  byte bVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  Substring SVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  void *pvVar12;
  char *pcVar13;
  ulong uVar14;
  ulong uVar15;
  void *pvVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  tuple2_conflict1 tVar21;
  
  pcVar10 = (char *)*param_2;
  pvVar12 = (void *)param_2[1];
  uVar14 = param_2[2];
  pvVar1 = (void *)param_2[3];
  if (pvVar12 != pvVar1) {
    pcVar13 = pcVar10 + 0x20;
    pvVar7 = pvVar12;
    do {
      pvVar16 = pvVar7;
      param_4 = pvVar7;
      param_5 = uVar14;
      FUN_100a32fa0(pvVar7,pcVar10,pvVar7,uVar14,pvVar1);
      if ((int)pvVar16 == 0x3d) {
        pcVar9 = (char *)((long)pvVar7 - (long)pvVar12);
        if ((long)pvVar7 < (long)pvVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd160);
          (*pcVar3)();
        }
        if ((long)pvVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd164);
          (*pcVar3)();
        }
        pvVar16 = *(void **)(pcVar10 + 0x10);
        if ((long)pvVar16 < (long)pvVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd168);
          (*pcVar3)();
        }
        if (pvVar12 != pvVar16) {
          if (pvVar16 <= pvVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd16c);
            (*pcVar3)();
          }
          if (pcVar13[(long)pvVar12] < -0x40) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd174);
            (*pcVar3)();
          }
        }
        pvVar11 = pvVar7;
        FUN_100a31f54(pvVar7,pcVar10,pvVar7,uVar14,pvVar1);
        if ((char *)((long)pvVar1 - (long)pvVar7) == (char *)0x0) {
          _swift_bridgeObjectRetain(pcVar10);
          SVar18.bridgeObject = pvVar11;
          SVar18.str = pcVar9;
          tVar21 = Swift::String::_fromUTF8Repairing
                             ((UnsafeBufferPointer<__int8>)(pcVar13 + (long)pvVar12),SVar18);
          pcVar8 = tVar21.result.str;
          uVar5 = 0xf;
          pcVar9 = tVar21.result.bridgeObject;
          FUN_1000102ac();
          pcVar13 = pcVar9;
          uVar15 = uVar14;
          _swift_bridgeObjectRelease(tVar21.result.bridgeObject);
          *param_1 = uVar5;
          param_1[1] = pcVar8;
          param_1[2] = pcVar9;
          param_1[3] = uVar14;
          pcVar9 = (char *)0xe000000000000000;
          SVar6 = Swift::Substring::init((String)(ZEXT816(0xe000000000000000) << 0x40));
          _swift_bridgeObjectRelease(pcVar10);
          param_1[4] = SVar6.unknown;
        }
        else {
          if ((long)pvVar1 < (long)pvVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd170);
            (*pcVar3)();
          }
          if ((long)pvVar7 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd178);
            (*pcVar3)();
          }
          if ((long)pvVar16 < (long)pvVar1) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd17c);
            (*pcVar3)();
          }
          if (pvVar7 != pvVar16) {
            if (pvVar16 <= pvVar7) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd184);
              (*pcVar3)();
            }
            if (pcVar13[(long)pvVar7] < -0x40) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd188);
              (*pcVar3)();
            }
          }
          _swift_bridgeObjectRetain_n(pcVar10,2);
          SVar19.bridgeObject = pvVar11;
          SVar19.str = pcVar9;
          tVar21 = Swift::String::_fromUTF8Repairing
                             ((UnsafeBufferPointer<__int8>)(pcVar13 + (long)pvVar12),SVar19);
          pcVar9 = tVar21.result.str;
          uVar5 = 0xf;
          pvVar12 = tVar21.result.bridgeObject;
          FUN_1000102ac();
          _swift_bridgeObjectRelease(tVar21.result.bridgeObject);
          *param_1 = uVar5;
          param_1[1] = pcVar9;
          param_1[2] = pvVar12;
          param_1[3] = uVar14;
          if ((*(void **)(pcVar10 + 0x10) < pvVar7) ||
             ((long)*(void **)(pcVar10 + 0x10) < (long)pvVar1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd180);
            (*pcVar3)();
          }
          uVar15 = (long)pvVar1 << 1 | 1;
          pcVar9 = pcVar10;
          _swift_bridgeObjectRetain();
          pcVar8 = pcVar13;
          pvVar12 = pvVar7;
          FUN_100a331a0();
          _swift_bridgeObjectRelease(pcVar10);
          if (pcVar8 == (char *)0x0) {
            if ((*(void **)(pcVar10 + 0x10) < pvVar7) || (*(void **)(pcVar10 + 0x10) < pvVar1)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd18c);
              (*pcVar3)();
            }
            _swift_bridgeObjectRetain(pcVar10);
            SVar20.bridgeObject = pvVar12;
            SVar20.str = (char *)((long)pvVar1 - (long)pvVar7);
            tVar21 = Swift::String::_fromUTF8Repairing
                               ((UnsafeBufferPointer<__int8>)(pcVar13 + (long)pvVar7),SVar20);
            pcVar9 = tVar21.result.str;
            _swift_bridgeObjectRelease_n(pcVar10,2,tVar21._16_8_);
            uVar5 = 0xf;
            pcVar13 = tVar21.result.bridgeObject;
            FUN_1000102ac();
            _swift_bridgeObjectRelease(pcVar10);
            _swift_bridgeObjectRelease(tVar21.result.bridgeObject);
          }
          else {
            uVar5 = 0xf;
            pcVar13 = pcVar8;
            FUN_1000102ac();
            _swift_bridgeObjectRelease_n(pcVar10,2);
            _swift_bridgeObjectRelease(pcVar8);
          }
          param_1[4] = uVar5;
        }
        goto LAB_1009fd118;
      }
      if ((long)pvVar7 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd148);
        (*pcVar3)();
      }
      if (*(void **)(pcVar10 + 0x10) <= pvVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd14c);
        (*pcVar3)();
      }
      bVar2 = pcVar13[(long)pvVar7];
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0xe0) == 0xc0) {
          pvVar7 = (void *)((long)pvVar7 + 2);
        }
        else if ((bVar2 & 0xf0) == 0xe0) {
          bVar4 = SCARRY8((long)pvVar7,3);
          pvVar7 = (void *)((long)pvVar7 + 3);
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd15c);
            (*pcVar3)();
          }
        }
        else {
          bVar4 = SCARRY8((long)pvVar7,4);
          pvVar7 = (void *)((long)pvVar7 + 4);
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fcea8);
            (*pcVar3)();
          }
        }
      }
      else {
        pvVar7 = (void *)((long)pvVar7 + 1);
      }
    } while (pvVar7 != pvVar1);
  }
  if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd150);
    (*pcVar3)();
  }
  if (*(ulong *)(pcVar10 + 0x10) < uVar14 || (long)*(ulong *)(pcVar10 + 0x10) < (long)pvVar1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd154);
    (*pcVar3)();
  }
  if ((long)pvVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fd158);
    (*pcVar3)();
  }
  _swift_bridgeObjectRetain(pcVar10);
  SVar17.bridgeObject = param_4;
  SVar17.str = (char *)((long)pvVar1 - uVar14);
  tVar21 = Swift::String::_fromUTF8Repairing
                     ((UnsafeBufferPointer<__int8>)(pcVar10 + uVar14 + 0x20),SVar17);
  pcVar8 = tVar21.result.bridgeObject;
  pcVar9 = tVar21.result.str;
  _swift_bridgeObjectRelease(pcVar10,pcVar8,tVar21._16_8_);
  uVar5 = 0xf;
  pcVar10 = pcVar8;
  FUN_1000102ac();
  pcVar13 = pcVar10;
  uVar15 = param_5;
  _swift_bridgeObjectRelease(pcVar8);
  *param_1 = uVar5;
  param_1[1] = pcVar9;
  param_1[2] = pcVar10;
  param_1[3] = param_5;
  pcVar9 = (char *)0xe000000000000000;
  SVar6 = Swift::Substring::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  param_1[4] = SVar6.unknown;
LAB_1009fd118:
  param_1[5] = pcVar9;
  param_1[6] = pcVar13;
  param_1[7] = uVar15;
  return;
}



/* Address: 0x1009fd18c | FUN_1009fd18c */

undefined1  [16] FUN_1009fd18c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  Hasher into;
  __int64 _Var4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar5 = *(long *)(param_1 + 0x10);
  local_b8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar5 != 0) {
    FUN_1009fd6b8(0,lVar5,0);
    lVar7 = param_1 + 0x30;
    do {
      puVar3 = local_b8;
      uVar2 = *(undefined8 *)(lVar7 + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      Swift::Hasher::init();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar6);
      into.unknown = (undefined *)&local_100;
      Swift::Hashable::hash(into);
      uStack_88 = uStack_d8;
      local_90 = local_e0;
      uStack_78 = uStack_c8;
      uStack_80 = uStack_d0;
      local_70 = local_c0;
      uStack_a8 = uStack_f8;
      local_b0 = local_100;
      uStack_98 = uStack_e8;
      uStack_a0 = uStack_f0;
      _Var4 = Swift::Hasher::finalize(into);
      _swift_bridgeObjectRelease(uVar6);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      local_b8 = puVar3;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        FUN_1009fd6b8(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      lVar7 = lVar7 + 0x40;
      *(ulong *)(local_b8 + 0x10) = uVar1 + 1;
      *(__int64 *)(local_b8 + uVar1 * 8 + 0x20) = _Var4;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  auVar8._8_8_ = local_b8;
  auVar8._0_8_ = param_1;
  return auVar8;
}



/* Address: 0x1009fd2e4 | FUN_1009fd2e4 */

void FUN_1009fd2e4(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f2f3a;
  FUN_1009fe370(0x3f2f3a,0xe300000000000000);
  DAT_100ff44b0 = uVar1;
  return;
}



/* Address: 0x1009fd30c | FUN_1009fd30c */

void FUN_1009fd30c(void)

{
  undefined8 uVar1;
  
  uVar1 = 0x3f2f;
  FUN_1009fe370(0x3f2f,&SUB_e200000000000000);
  DAT_100ff44a0 = uVar1;
  return;
}



/* Address: 0x1009fd330 | FUN_1009fd330 */

void FUN_1009fd330(undefined8 *param_1,undefined8 *param_2)

{
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
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  FUN_1009fe520(&local_d0,*param_2,param_2[1]);
  param_1[0x11] = uStack_48;
  param_1[0x10] = local_50;
  param_1[0x13] = uStack_38;
  param_1[0x12] = uStack_40;
  param_1[0x15] = uStack_28;
  param_1[0x14] = local_30;
  param_1[9] = uStack_88;
  param_1[8] = local_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  param_1[0xd] = uStack_68;
  param_1[0xc] = local_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[1] = uStack_c8;
  *param_1 = local_d0;
  param_1[3] = uStack_b8;
  param_1[2] = uStack_c0;
  param_1[5] = uStack_a8;
  param_1[4] = local_b0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  return;
}



/* Address: 0x1009fd394 | FUN_1009fd394 */

/* WARNING: Removing unreachable block (ram,0x0001009fd488) */

undefined1  [16] FUN_1009fd394(undefined *param_1,ulong param_2,undefined8 param_3)

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
    FUN_100a334ec();
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



/* Address: 0x1009fd494 | FUN_1009fd494 */

undefined * FUN_1009fd494(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fd59c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff4490;
    FUN_1000f7830(&DAT_100ff4490,&DAT_100c8da98);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f299b8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009fd59c | FUN_1009fd59c */

void FUN_1009fd59c(void)

{
  FUN_1009fdaa4();
  return;
}



/* Address: 0x1009fd5a8 | thunk_FUN_1009fd5ac */

undefined * thunk_FUN_1009fd5ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fd6ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff4468;
    FUN_1000f7830(&DAT_100ff4468,&DAT_100c8da70);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009fd5ac | FUN_1009fd5ac */

undefined * FUN_1009fd5ac(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fd6ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff4468;
    FUN_1000f7830(&DAT_100ff4468,&DAT_100c8da70);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009fd6ac | FUN_1009fd6ac */

void FUN_1009fd6ac(void)

{
  FUN_1009fd738();
  return;
}



/* Address: 0x1009fd6b8 | FUN_1009fd6b8 */

void FUN_1009fd6b8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009fd738();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009fd6dc | FUN_1009fd6dc */

void FUN_1009fd6dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009fd844();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009fd6f8 | FUN_1009fd6f8 */

void FUN_1009fd6f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009fd974();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009fd714 | FUN_1009fd714 */

void FUN_1009fd714(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009fdaa4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009fd738 | FUN_1009fd738 */

undefined *
FUN_1009fd738(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fd844);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff4458;
    FUN_1000f7830(&DAT_100ff4458,&DAT_100c8da68);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x1009fd844 | FUN_1009fd844 */

undefined * FUN_1009fd844(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fd974);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff4480;
    FUN_1000f7830(&DAT_100ff4480,&DAT_100c8da88);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff4488;
    FUN_1000f7830(&DAT_100ff4488,&DAT_100c8da90);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009fd974 | FUN_1009fd974 */

undefined * FUN_1009fd974(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fdaa4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff4470;
    FUN_1000f7830(&DAT_100ff4470,&DAT_100c8da78);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff4478;
    FUN_1000f7830(&DAT_100ff4478,&DAT_100c8da80);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009fdaa4 | FUN_1009fdaa4 */

undefined *
FUN_1009fdaa4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fdbb0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff4460;
    FUN_1000f7830(&DAT_100ff4460,&DAT_100c8dd20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x1009fdbb0 | FUN_1009fdbb0 */

undefined8 FUN_1009fdbb0(__uint32 *param_1,undefined *param_2)

{
  __uint32 _Var1;
  ulong uVar3;
  undefined8 uVar4;
  Hasher HVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  Hasher HVar2;
  
  lVar8 = *unaff_x20;
  HVar5.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  _Var1 = (__uint32)param_2;
  HVar2.unknown = param_2;
  Swift::Hasher::_combine(_Var1,HVar5);
  uVar3 = Swift::Hasher::_finalize(HVar2);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint32 *)(*(long *)(lVar8 + 0x30) + uVar3 * 4) == _Var1) {
        uVar4 = 0;
        goto LAB_1009fdc80;
      }
      uVar3 = uVar3 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  lVar6 = *unaff_x20;
  FUN_1009fdc9c(param_2,uVar3,lVar8);
  *unaff_x20 = lVar6;
  uVar4 = 1;
LAB_1009fdc80:
  *param_1 = _Var1;
  return uVar4;
}



/* Address: 0x1009fdc9c | FUN_1009fdc9c */

void FUN_1009fdc9c(Hasher param_1,Hasher param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  __uint32 _Var5;
  long *unaff_x20;
  long lVar6;
  
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  _Var5 = (__uint32)param_1.unknown;
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1009fdfdc();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1009fddcc(uVar2 + 1);
    }
    else {
      FUN_1009fe11c();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    Swift::Hasher::_combine(_Var5,param_2);
    uVar2 = Swift::Hasher::_finalize(param_1);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar2 & (uVar4 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      do {
        if (*(__uint32 *)(*(long *)(lVar6 + 0x30) + (long)param_2.unknown * 4) == _Var5) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fddcc);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar6 = lVar3 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  *(__uint32 *)(*(long *)(lVar3 + 0x30) + (long)param_2.unknown * 4) = _Var5;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009fddbc);
  (*pcVar1)();
}



/* Address: 0x1009fddcc | FUN_1009fddcc */

void FUN_1009fddcc(undefined *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  Hasher HVar12;
  long lVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100ff44b8;
  FUN_1000f7830(&DAT_100ff44b8,&DAT_100c8daa0);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009fdfa4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fdfd8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_1009fdfa4;
        uVar11 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar7;
    }
    uVar1 = *(uint *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6) * 4);
    HVar12.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine(uVar1,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar12);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fdfdc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(uint *)(*(long *)(p_Var4 + 0x30) + uVar6 * 4) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x1009fdfdc | FUN_1009fdfdc */

void FUN_1009fdfdc(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100ff44b8;
  FUN_1000f7830(&DAT_100ff44b8,&DAT_100c8daa0);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009fe11c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1009fe0fc;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined4 *)(*(long *)(p_Var3 + 0x30) + uVar8 * 4) =
           *(undefined4 *)(*(long *)(original + 0x30) + uVar8 * 4);
    } while( true );
  }
LAB_1009fe0fc:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1009fe11c | FUN_1009fe11c */

void FUN_1009fe11c(undefined *param_1)

{
  uint uVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var12;
  Hasher HVar13;
  long lVar14;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100ff44b8;
  FUN_1000f7830(&DAT_100ff44b8,&DAT_100c8daa0);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009fe33c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var12 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fe36c);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1009fe33c;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    uVar1 = *(uint *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6) * 4);
    HVar13.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine(uVar1,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar13);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fe370);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(uint *)(*(long *)(p_Var4 + 0x30) + uVar6 * 4) = uVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x1009fe370 | FUN_1009fe370 */

Set<undefined> FUN_1009fe370(_StringGuts param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  __int64 minimumCapacity;
  UnsafeBufferPointer<__int8> UVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  long lVar7;
  tuple2_conflict9 tVar8;
  undefined *local_78;
  ulong uStack_70;
  undefined *local_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar4 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar2 = 7;
  if (uVar4 == 0) {
    uVar2 = 0xb;
  }
  minimumCapacity = 0xf;
  FUN_100874aec(0xf,uVar2 | uVar1 << 0x10,param_1.unknown,param_2);
  local_68 = (undefined *)Swift::Set::init(minimumCapacity);
  if (uVar1 != 0) {
    lVar7 = 0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar3.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar3 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          }
        }
        else {
          local_78 = param_1.unknown;
          uStack_70 = param_2 & 0xffffffffffffff;
          UVar3.unknown = (undefined *)&local_78;
        }
        pbVar5 = (byte *)((long)UVar3.unknown + lVar7);
        uVar4 = (uint)*pbVar5;
        tVar8._.unknown._4_4_ = 0;
        tVar8._.unknown._0_4_ = uVar4;
        if ((char)*pbVar5 < '\0') {
          uVar6 = (uint)LZCOUNT(uVar4 << 0x18 ^ 0xffffffff);
          if (uVar6 < 3) {
            if (uVar6 == 1) goto LAB_1009fe46c;
            tVar8._.unknown._4_4_ = 0;
            tVar8._.unknown._0_4_ = pbVar5[1] & 0x3f | (uVar4 & 0x1f) << 6;
            tVar8.scalarLength = 2;
          }
          else if (uVar6 == 3) {
            tVar8._.unknown._4_4_ = 0;
            tVar8._.unknown._0_4_ =
                 (uVar4 & 0xf) << 0xc | (pbVar5[1] & 0x3f) << 6 | pbVar5[2] & 0x3f;
            tVar8.scalarLength = 3;
          }
          else {
            tVar8._.unknown._4_4_ = 0;
            tVar8._.unknown._0_4_ =
                 (uVar4 & 0xf) << 0x12 | (pbVar5[1] & 0x3f) << 0xc | (pbVar5[2] & 0x3f) << 6 |
                 pbVar5[3] & 0x3f;
            tVar8.scalarLength = 4;
          }
        }
        else {
LAB_1009fe46c:
          tVar8.scalarLength = 1;
        }
      }
      else {
        tVar8 = Swift::_StringGuts::foreignErrorCorrectedScalar((Index)(lVar7 << 0x10),param_1);
      }
      lVar7 = tVar8.scalarLength + lVar7;
      FUN_1009fdbb0(&local_78,tVar8._.unknown.unknown);
    } while (lVar7 < (long)uVar1);
  }
  return (Set<undefined>)local_68;
}



/* Address: 0x1009fe520 | FUN_1009fe520 */

void FUN_1009fe520(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  undefined *puVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  _StringGuts _Var9;
  uint uVar10;
  code *pcVar11;
  code *pcVar12;
  code *pcVar13;
  uint uVar14;
  code *pcVar15;
  code *pcVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  uint uVar20;
  __uint32 _Var21;
  Hasher HVar22;
  code *pcVar23;
  code *pcVar24;
  code *pcVar25;
  undefined *local_178;
  code *local_170;
  undefined *local_168;
  code *local_140;
  code *local_130;
  code *local_128;
  code *local_120;
  undefined *local_118;
  undefined *local_110;
  undefined *local_108;
  code *local_100;
  code *local_f8;
  undefined *local_f0;
  code *local_e8;
  undefined *local_e0;
  undefined *local_d8;
  code *local_d0;
  code *local_c8;
  undefined *local_c0;
  byte local_b0 [80];
  
  _Var5.unknown = param_2;
  _Var9.unknown = param_3;
  FUN_1005d6258();
  if (_Var9.unknown == (undefined *)0x0) {
LAB_1009fe5a0:
    uVar20 = 0;
  }
  else {
    if ((_Var5.unknown == (undefined *)0x2f) && (_Var9.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      bVar4 = Swift::_stringCompareWithSmolCheck(_Var5,_Var9,(_StringComparisonResult)0x2f);
      _swift_bridgeObjectRelease(_Var9.unknown);
      if (!bVar4) goto LAB_1009fe5a0;
    }
    uVar20 = 3;
  }
  _swift_bridgeObjectRetain(param_3);
  puVar6 = param_2;
  FUN_100a33828(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  pcVar23 = *(code **)(puVar6 + 0x10);
  if (pcVar23 == (code *)0x0) {
    pcVar25 = (code *)0x0;
    local_d0 = (code *)0x0;
    local_c8 = (code *)0x0;
    local_c0 = (undefined *)0x0;
    local_f0 = (undefined *)0x0;
    local_f8 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_e0 = (undefined *)0x0;
    local_140 = (code *)0x0;
    local_178 = (undefined *)0x0;
    local_170 = (code *)0x0;
    local_128 = (code *)0x0;
    local_120 = (code *)0x0;
    local_100 = (code *)0x0;
    local_d8 = (undefined *)0x0;
    pcVar24 = (code *)0x0;
    local_130 = (code *)0x0;
    pcVar13 = (code *)0x0;
  }
  else {
    local_130 = (code *)0x0;
    local_128 = (code *)0x0;
    local_120 = (code *)0x0;
    local_118 = (undefined *)0x0;
    pcVar24 = (code *)0x0;
    local_d8 = (undefined *)0x0;
    local_108 = (undefined *)0x0;
    local_100 = (code *)0x0;
    local_178 = (undefined *)0x0;
    local_170 = (code *)0x0;
    local_e8 = (code *)0x0;
    local_f8 = (code *)0x0;
    local_f0 = (undefined *)0x0;
    local_c0 = (undefined *)0x0;
    local_c8 = (code *)0x0;
    local_d0 = (code *)0x0;
    pcVar25 = (code *)0x0;
    local_168 = (undefined *)0x0;
    local_110 = (undefined *)0x0;
    puVar1 = puVar6 + 0x20;
    local_140 = (code *)0x0;
    pcVar16 = (code *)0x0;
    do {
      pcVar13 = pcVar16;
      if (uVar20 < 2) {
        if (uVar20 == 0) {
          lVar18 = 0;
          lVar19 = 0;
          pcVar12 = *(code **)(puVar6 + 0x10);
          pcVar11 = pcVar16;
          if (pcVar16 <= pcVar12) {
            pcVar11 = pcVar12;
          }
          local_b0[8] = 0;
          local_b0[9] = 0;
          local_b0[10] = 0;
          local_b0[0xb] = 0;
          local_b0[0xc] = 0;
          local_b0[0xd] = 0;
          local_b0[0xe] = 0;
          local_b0[0xf] = 0;
          local_b0[0] = 0x3a;
          local_b0[1] = 0x2f;
          local_b0[2] = 0x2f;
          local_b0[3] = 0;
          local_b0[4] = 0;
          local_b0[5] = 0;
          local_b0[6] = 0;
          local_b0[7] = 0;
          pcVar15 = pcVar16;
          puVar7 = puVar1;
          do {
            if (pcVar16 + (lVar18 - (long)pcVar11) == (code *)0x0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1a0);
              (*pcVar23)();
            }
            bVar2 = puVar7[(long)pcVar16];
            if (bVar2 == local_b0[lVar19]) {
              local_140 = pcVar16 + lVar18;
              if (lVar19 != 0) {
                local_140 = pcVar15;
              }
              lVar19 = lVar19 + 1;
              if (lVar19 == 3) {
                pcVar11 = pcVar16 + lVar18;
                if ((char)bVar2 < '\0') {
                  if ((bVar2 & 0xe0) == 0xc0) {
                    pcVar13 = pcVar16 + lVar18 + 2;
                  }
                  else if ((bVar2 & 0xf0) == 0xe0) {
                    pcVar13 = pcVar11 + 3;
                    if (SCARRY8((long)pcVar11,3)) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4f4);
                      (*pcVar23)();
                    }
                  }
                  else {
                    pcVar13 = pcVar11 + 4;
                    if (SCARRY8((long)pcVar11,4)) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4f0);
                      (*pcVar23)();
                    }
                  }
                }
                else {
                  pcVar13 = pcVar11 + 1;
                }
                if ((long)pcVar15 < (long)pcVar16) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff470);
                  (*pcVar23)();
                }
                if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff474);
                  (*pcVar23)();
                }
                if ((long)pcVar12 < (long)pcVar15) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff478);
                  (*pcVar23)();
                }
                if (pcVar16 != pcVar12) {
                  if ((long)pcVar12 <= (long)pcVar16) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4ac);
                    (*pcVar23)();
                  }
                  if ((char)puVar1[(long)pcVar16] < -0x40) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4b0);
                    (*pcVar23)();
                  }
                }
                _swift_retain(puVar6);
                _swift_bridgeObjectRelease(0xe300000000000000);
                _swift_bridgeObjectRelease(local_110);
                uVar20 = 1;
                local_e8 = pcVar16;
                local_f8 = pcVar16;
                local_110 = puVar6;
                local_f0 = puVar6;
                goto LAB_1009fe64c;
              }
            }
            else {
              lVar19 = 0;
              local_140 = pcVar15;
            }
            lVar18 = lVar18 + 1;
            puVar7 = puVar7 + 1;
            pcVar15 = local_140;
          } while (pcVar16 + (lVar18 - (long)pcVar23) != (code *)0x0);
          pcVar16 = local_c8;
          FUN_1009ff51c();
          puVar7 = &DAT_100f29a58;
          _swift_allocError(&DAT_100f29a58,pcVar16,0,0);
          *pcVar16 = (code)0x0;
          _swift_willThrow();
          _swift_bridgeObjectRelease(0xe300000000000000);
          _swift_errorRelease(puVar7);
          _swift_bridgeObjectRelease(local_110);
          local_140 = (code *)0x0;
          local_f0 = (undefined *)0x0;
          local_110 = (undefined *)0x0;
          uVar20 = 3;
          local_e8 = (code *)0x0;
          local_f8 = (code *)0x0;
        }
        else {
          pcVar11 = local_d0;
          if (DAT_100ff44a8 != -1) {
            pcVar11 = FUN_1009fd2e4;
            _swift_once(&DAT_100ff44a8);
          }
          lVar19 = DAT_100ff44b0;
          lVar18 = DAT_100ff44b0 + 0x38;
          do {
            if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3d8);
              (*pcVar23)();
            }
            pcVar12 = *(code **)(puVar6 + 0x10);
            if (pcVar12 <= pcVar13) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3dc);
              (*pcVar23)();
            }
            bVar2 = puVar1[(long)pcVar13];
            if (((bVar2 ^ 0xffffffff) & 0xc0) == 0) {
              if (pcVar12 <= pcVar13 + 1) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3ec);
                (*pcVar23)();
              }
              uVar20 = (byte)puVar1[(long)(pcVar13 + 1)] & 0x3f;
              uVar10 = (uint)bVar2;
              if (((uVar10 ^ 0xffffffff) & 0xe0) == 0) {
                if (pcVar12 <= pcVar13 + 2) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff410);
                  (*pcVar23)();
                }
                if (((uVar10 ^ 0xffffffff) & 0xf0) == 0) {
                  if (pcVar12 <= pcVar13 + 3) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff440);
                    (*pcVar23)();
                  }
                  HVar22.unknown =
                       (undefined *)
                       (ulong)((bVar2 & 7) << 0x12 | uVar20 << 0xc |
                               ((byte)puVar1[(long)(pcVar13 + 2)] & 0x3f) << 6 |
                              (byte)puVar1[(long)(pcVar13 + 3)] & 0x3f);
                }
                else {
                  HVar22.unknown =
                       (undefined *)
                       (ulong)((uVar10 & 0xf) << 0xc | uVar20 << 6 |
                              (byte)puVar1[(long)(pcVar13 + 2)] & 0x3f);
                }
              }
              else {
                HVar22.unknown = (undefined *)(ulong)(uVar20 | (uVar10 & 0x1f) << 6);
              }
            }
            else {
              HVar22.unknown = (undefined *)(ulong)(bVar2 & 0x7f);
            }
            if ((int)((ulong)HVar22.unknown >> 0xb) == 0x1b) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3f4);
              (*pcVar23)();
            }
            _Var21 = (__uint32)HVar22.unknown;
            if (0x10ffff < _Var21) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3e0);
              (*pcVar23)();
            }
            if (*(long *)(lVar19 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)(lVar19 + 0x28));
              Swift::Hasher::_combine(_Var21,(Hasher)pcVar11);
              uVar8 = Swift::Hasher::_finalize(HVar22);
              uVar17 = -1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
              uVar8 = uVar8 & (uVar17 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar18 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
                do {
                  if (*(__uint32 *)(*(long *)(lVar19 + 0x30) + uVar8 * 4) == _Var21) {
                    if ((long)pcVar13 < (long)pcVar16) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff42c);
                      (*pcVar23)();
                    }
                    if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff430);
                      (*pcVar23)();
                    }
                    pcVar11 = *(code **)(puVar6 + 0x10);
                    if ((long)pcVar11 < (long)pcVar13) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff434);
                      (*pcVar23)();
                    }
                    if (pcVar16 != pcVar11) {
                      if (pcVar11 <= pcVar16) {
                    /* WARNING: Does not return */
                        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff460);
                        (*pcVar23)();
                      }
                      if ((char)puVar1[(long)pcVar16] < -0x40) {
                    /* WARNING: Does not return */
                        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff468);
                        (*pcVar23)();
                      }
                    }
                    goto LAB_1009feb34;
                  }
                  uVar8 = uVar8 + 1 & ~uVar17;
                } while ((*(ulong *)(lVar18 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
              }
            }
            pcVar12 = *(code **)(puVar6 + 0x10);
            if ((long)pcVar12 <= (long)pcVar13) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3e8);
              (*pcVar23)();
            }
            bVar2 = puVar1[(long)pcVar13];
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0xe0) == 0xc0) {
                pcVar13 = pcVar13 + 2;
              }
              else if ((bVar2 & 0xf0) == 0xe0) {
                bVar4 = SCARRY8((long)pcVar13,3);
                pcVar13 = pcVar13 + 3;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff480);
                  (*pcVar23)();
                }
              }
              else {
                bVar4 = SCARRY8((long)pcVar13,4);
                pcVar13 = pcVar13 + 4;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff47c);
                  (*pcVar23)();
                }
              }
            }
            else {
              pcVar13 = pcVar13 + 1;
            }
          } while (pcVar13 != pcVar23);
          if ((long)pcVar23 < (long)pcVar16) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4c4);
            (*pcVar23)();
          }
          if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4c8);
            (*pcVar23)();
          }
          if (pcVar12 < pcVar23) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4cc);
            (*pcVar23)();
          }
          pcVar13 = pcVar23;
          if (pcVar16 != pcVar12) {
            if (pcVar12 <= pcVar16) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4dc);
              (*pcVar23)();
            }
            if ((char)puVar1[(long)pcVar16] < -0x40) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4e0);
              (*pcVar23)();
            }
          }
LAB_1009feb34:
          if (SBORROW8((long)pcVar13,(long)pcVar16)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff424);
            (*pcVar23)();
          }
          if (pcVar13 != pcVar16) {
            _swift_retain(puVar6);
            _swift_bridgeObjectRelease(local_168);
            local_128 = pcVar16;
            local_178 = puVar6;
            local_170 = pcVar16;
            local_168 = puVar6;
            local_100 = pcVar13;
          }
          if (pcVar13 == pcVar23) {
LAB_1009fe644:
            uVar20 = 3;
          }
          else {
            pcVar16 = pcVar13;
            FUN_100a32fa0(pcVar13,puVar6,pcVar13,0,pcVar23);
            if ((int)pcVar16 == 0x3a) {
              uVar20 = 2;
            }
            else {
              pcVar16 = pcVar13;
              FUN_100a32fa0(pcVar13,puVar6,pcVar13,0,pcVar23);
              if ((int)pcVar16 != 0x3f) goto LAB_1009fe644;
              uVar20 = 4;
            }
          }
        }
      }
      else if (uVar20 == 2) {
        if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff41c);
          (*pcVar23)();
        }
        if (*(code **)(puVar6 + 0x10) <= pcVar16) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff420);
          (*pcVar23)();
        }
        bVar2 = puVar1[(long)pcVar16];
        if ((char)bVar2 < '\0') {
          if ((bVar2 & 0xe0) == 0xc0) {
            pcVar24 = pcVar16 + 2;
          }
          else if ((bVar2 & 0xf0) == 0xe0) {
            pcVar24 = pcVar16 + 3;
            if (SCARRY8((long)pcVar16,3)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4d4);
              (*pcVar23)();
            }
          }
          else {
            pcVar24 = pcVar16 + 4;
            if (SCARRY8((long)pcVar16,4)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4d0);
              (*pcVar23)();
            }
          }
        }
        else {
          pcVar24 = pcVar16 + 1;
        }
        pcVar13 = local_d0;
        if (DAT_100ff4498 != -1) {
          pcVar13 = FUN_1009fd30c;
          _swift_once(&DAT_100ff4498);
        }
        lVar18 = DAT_100ff44a0;
        if (pcVar24 != pcVar23) {
          lVar19 = DAT_100ff44a0 + 0x38;
          local_130 = pcVar24;
          do {
            if ((long)local_130 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3f0);
              (*pcVar23)();
            }
            pcVar16 = *(code **)(puVar6 + 0x10);
            if (pcVar16 <= local_130) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3f8);
              (*pcVar23)();
            }
            bVar2 = puVar1[(long)local_130];
            if (((bVar2 ^ 0xffffffff) & 0xc0) == 0) {
              if (pcVar16 <= local_130 + 1) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff414);
                (*pcVar23)();
              }
              uVar20 = (byte)puVar1[(long)(local_130 + 1)] & 0x3f;
              uVar10 = (uint)bVar2;
              if (((uVar10 ^ 0xffffffff) & 0xe0) == 0) {
                if (pcVar16 <= local_130 + 2) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff444);
                  (*pcVar23)();
                }
                if (((uVar10 ^ 0xffffffff) & 0xf0) == 0) {
                  if (pcVar16 <= local_130 + 3) {
                    /* WARNING: Does not return */
                    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff48c);
                    (*pcVar23)();
                  }
                  HVar22.unknown =
                       (undefined *)
                       (ulong)((bVar2 & 7) << 0x12 | uVar20 << 0xc |
                               ((byte)puVar1[(long)(local_130 + 2)] & 0x3f) << 6 |
                              (byte)puVar1[(long)(local_130 + 3)] & 0x3f);
                }
                else {
                  HVar22.unknown =
                       (undefined *)
                       (ulong)((uVar10 & 0xf) << 0xc | uVar20 << 6 |
                              (byte)puVar1[(long)(local_130 + 2)] & 0x3f);
                }
              }
              else {
                HVar22.unknown = (undefined *)(ulong)(uVar20 | (uVar10 & 0x1f) << 6);
              }
            }
            else {
              HVar22.unknown = (undefined *)(ulong)(bVar2 & 0x7f);
            }
            if ((int)((ulong)HVar22.unknown >> 0xb) == 0x1b) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff418);
              (*pcVar23)();
            }
            _Var21 = (__uint32)HVar22.unknown;
            if (0x10ffff < _Var21) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3fc);
              (*pcVar23)();
            }
            if (*(long *)(lVar18 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)(lVar18 + 0x28));
              Swift::Hasher::_combine(_Var21,(Hasher)pcVar13);
              uVar8 = Swift::Hasher::_finalize(HVar22);
              uVar17 = -1L << ((ulong)*(byte *)(lVar18 + 0x20) & 0x3f);
              uVar8 = uVar8 & (uVar17 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar19 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
                do {
                  if (*(__uint32 *)(*(long *)(lVar18 + 0x30) + uVar8 * 4) == _Var21) {
                    if ((long)local_130 < (long)pcVar24) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff45c);
                      (*pcVar23)();
                    }
                    if ((long)pcVar24 < 0) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff464);
                      (*pcVar23)();
                    }
                    pcVar13 = *(code **)(puVar6 + 0x10);
                    if ((long)pcVar13 < (long)local_130) {
                    /* WARNING: Does not return */
                      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff46c);
                      (*pcVar23)();
                    }
                    if (pcVar24 != pcVar13) {
                      if (pcVar13 <= pcVar24) {
                    /* WARNING: Does not return */
                        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4a4);
                        (*pcVar23)();
                      }
                      if ((char)puVar1[(long)pcVar24] < -0x40) {
                    /* WARNING: Does not return */
                        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4a8);
                        (*pcVar23)();
                      }
                    }
                    goto LAB_1009feedc;
                  }
                  uVar8 = uVar8 + 1 & ~uVar17;
                } while ((*(ulong *)(lVar19 + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
              }
            }
            if (*(long *)(puVar6 + 0x10) <= (long)local_130) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff404);
              (*pcVar23)();
            }
            bVar2 = puVar1[(long)local_130];
            if ((char)bVar2 < '\0') {
              if ((bVar2 & 0xe0) == 0xc0) {
                local_130 = local_130 + 2;
              }
              else if ((bVar2 & 0xf0) == 0xe0) {
                bVar4 = SCARRY8((long)local_130,3);
                local_130 = local_130 + 3;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4b4);
                  (*pcVar23)();
                }
              }
              else {
                bVar4 = SCARRY8((long)local_130,4);
                local_130 = local_130 + 4;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4b8);
                  (*pcVar23)();
                }
              }
            }
            else {
              local_130 = local_130 + 1;
            }
          } while (local_130 != pcVar23);
          if ((long)pcVar23 < (long)pcVar24) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff428);
            (*pcVar23)();
          }
        }
        if ((long)pcVar24 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff438);
          (*pcVar23)();
        }
        pcVar13 = *(code **)(puVar6 + 0x10);
        if (pcVar13 < pcVar23) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff43c);
          (*pcVar23)();
        }
        local_130 = pcVar23;
        if (pcVar24 != pcVar13) {
          if (pcVar13 <= pcVar24) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff484);
            (*pcVar23)();
          }
          if ((char)puVar1[(long)pcVar24] < -0x40) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff488);
            (*pcVar23)();
          }
        }
LAB_1009feedc:
        _swift_bridgeObjectRetain(puVar6);
        _swift_bridgeObjectRelease(local_108);
        uVar20 = 3;
        pcVar13 = local_130;
        local_120 = pcVar24;
        local_108 = puVar6;
        local_d8 = puVar6;
      }
      else {
        if (uVar20 != 3) {
          if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4e4);
            (*pcVar23)();
          }
          pcVar11 = *(code **)(puVar6 + 0x10);
          if (pcVar11 <= pcVar16) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4e8);
            (*pcVar23)();
          }
          bVar2 = puVar1[(long)pcVar16];
          if ((char)bVar2 < '\0') {
            if ((bVar2 & 0xe0) == 0xc0) {
              pcVar13 = pcVar16 + 2;
            }
            else if ((bVar2 & 0xf0) == 0xe0) {
              pcVar13 = pcVar16 + 3;
              if (SCARRY8((long)pcVar16,3)) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1c0);
                (*pcVar23)();
              }
            }
            else {
              pcVar13 = pcVar16 + 4;
              if (SCARRY8((long)pcVar16,4)) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff51c);
                (*pcVar23)();
              }
            }
          }
          else {
            pcVar13 = pcVar16 + 1;
          }
          pcVar16 = pcVar13;
          local_e0 = puVar6;
          if (pcVar13 != pcVar23) goto LAB_1009ff208;
          goto LAB_1009ff314;
        }
        pcVar11 = *(code **)(puVar6 + 0x10);
        do {
          if (pcVar11 <= pcVar13) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1a4);
            (*pcVar23)();
          }
          bVar2 = puVar1[(long)pcVar13];
          uVar20 = (uint)bVar2;
          if (((bVar2 ^ 0xffffffff) & 0xc0) == 0) {
            if ((long)pcVar11 <= (long)(pcVar13 + 1)) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1c4);
              (*pcVar23)();
            }
            uVar10 = (byte)puVar1[(long)(pcVar13 + 1)] & 0x3f;
            uVar14 = (uint)bVar2;
            if (((uVar14 ^ 0xffffffff) & 0xe0) == 0) {
              if ((long)pcVar11 <= (long)(pcVar13 + 2)) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff3e4);
                (*pcVar23)();
              }
              if (((uVar14 ^ 0xffffffff) & 0xf0) == 0) {
                if ((long)pcVar11 <= (long)(pcVar13 + 3)) {
                    /* WARNING: Does not return */
                  pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff400);
                  (*pcVar23)();
                }
                uVar10 = (uVar20 & 7) << 0x12 | uVar10 << 0xc |
                         ((byte)puVar1[(long)(pcVar13 + 2)] & 0x3f) << 6 |
                         (byte)puVar1[(long)(pcVar13 + 3)] & 0x3f;
              }
              else {
                uVar10 = (uVar14 & 0xf) << 0xc | uVar10 << 6 |
                         (byte)puVar1[(long)(pcVar13 + 2)] & 0x3f;
              }
            }
            else {
              uVar10 = uVar10 | (uVar14 & 0x1f) << 6;
            }
          }
          else {
            uVar10 = bVar2 & 0x7f;
          }
          if (uVar10 >> 0xb == 0x1b) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1c8);
            (*pcVar23)();
          }
          if (0x10ffff < uVar10) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff1a8);
            (*pcVar23)();
          }
          local_d0 = pcVar16;
          local_c8 = pcVar16;
          local_c0 = puVar6;
          if (uVar10 == 0x3f) {
            if ((long)pcVar13 < (long)pcVar16) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff448);
              (*pcVar23)();
            }
            if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
              pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff44c);
              (*pcVar23)();
            }
            if (pcVar16 == pcVar11) {
              _swift_retain(puVar6);
              _swift_bridgeObjectRelease(local_118);
            }
            else {
              cVar3 = puVar1[(long)pcVar16];
              _swift_retain(puVar6);
              _swift_bridgeObjectRelease(local_118);
              if (cVar3 < -0x40) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff498);
                (*pcVar23)();
              }
            }
            uVar20 = 4;
            pcVar25 = pcVar13;
            local_118 = puVar6;
            goto LAB_1009fe64c;
          }
          if ((char)bVar2 < '\0') {
            if ((uVar20 & 0xe0) == 0xc0) {
              pcVar13 = pcVar13 + 2;
            }
            else if ((uVar20 & 0xf0) == 0xe0) {
              bVar4 = SCARRY8((long)pcVar13,3);
              pcVar13 = pcVar13 + 3;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff40c);
                (*pcVar23)();
              }
            }
            else {
              bVar4 = SCARRY8((long)pcVar13,4);
              pcVar13 = pcVar13 + 4;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff408);
                (*pcVar23)();
              }
            }
          }
          else {
            pcVar13 = pcVar13 + 1;
          }
        } while (pcVar13 != pcVar23);
        if ((long)pcVar23 < (long)pcVar16) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff450);
          (*pcVar23)();
        }
        if ((long)pcVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff454);
          (*pcVar23)();
        }
        if (pcVar11 < pcVar23) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff458);
          (*pcVar23)();
        }
        pcVar25 = pcVar23;
        if (pcVar16 == pcVar11) {
          _swift_retain(puVar6);
          _swift_bridgeObjectRelease(local_118);
          uVar20 = 4;
          pcVar13 = pcVar23;
          local_118 = puVar6;
        }
        else {
          if ((long)pcVar11 <= (long)pcVar16) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff49c);
            (*pcVar23)();
          }
          cVar3 = puVar1[(long)pcVar16];
          _swift_retain(puVar6);
          _swift_bridgeObjectRelease(local_118);
          if (cVar3 < -0x40) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4a0);
            (*pcVar23)();
          }
          uVar20 = 4;
          pcVar13 = pcVar23;
          local_118 = puVar6;
        }
      }
LAB_1009fe64c:
      pcVar16 = pcVar13;
    } while (pcVar13 != pcVar23);
    local_e0 = (undefined *)0x0;
    pcVar23 = (code *)0x0;
    pcVar13 = (code *)0x0;
  }
LAB_1009ff0d4:
  _swift_release(puVar6);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = local_f0;
  param_1[3] = local_f8;
  param_1[4] = local_e8;
  param_1[5] = local_140;
  param_1[6] = local_178;
  param_1[7] = local_128;
  param_1[8] = local_170;
  param_1[9] = local_100;
  param_1[10] = local_d8;
  param_1[0xb] = pcVar24;
  param_1[0xc] = local_120;
  param_1[0xd] = local_130;
  param_1[0xe] = local_c0;
  param_1[0xf] = local_c8;
  param_1[0x10] = local_d0;
  param_1[0x11] = pcVar25;
  param_1[0x12] = local_e0;
  param_1[0x13] = pcVar13;
  param_1[0x14] = pcVar13;
  param_1[0x15] = pcVar23;
  return;
  while( true ) {
    if ((char)bVar2 < '\0') {
      if ((uVar20 & 0xe0) == 0xc0) {
        pcVar12 = pcVar16 + 2;
      }
      else if ((uVar20 & 0xf0) == 0xe0) {
        pcVar12 = pcVar16 + 3;
        if (SCARRY8((long)pcVar16,3)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff504);
          (*pcVar23)();
        }
      }
      else {
        pcVar12 = pcVar16 + 4;
        if (SCARRY8((long)pcVar16,4)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff2ec);
          (*pcVar23)();
        }
      }
    }
    else {
      pcVar12 = pcVar16 + 1;
    }
    pcVar16 = pcVar12;
    if (pcVar12 == pcVar23) break;
LAB_1009ff208:
    if (pcVar11 <= pcVar16) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff490);
      (*pcVar23)();
    }
    bVar2 = puVar1[(long)pcVar16];
    uVar20 = (uint)bVar2;
    if (((bVar2 ^ 0xffffffff) & 0xc0) == 0) {
      if ((long)pcVar11 <= (long)(pcVar16 + 1)) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4bc);
        (*pcVar23)();
      }
      uVar10 = (byte)puVar1[(long)(pcVar16 + 1)] & 0x3f;
      uVar14 = (uint)bVar2;
      if (((uVar14 ^ 0xffffffff) & 0xe0) == 0) {
        if ((long)pcVar11 <= (long)(pcVar16 + 2)) {
                    /* WARNING: Does not return */
          pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4d8);
          (*pcVar23)();
        }
        if (((uVar14 ^ 0xffffffff) & 0xf0) == 0) {
          if ((long)pcVar11 <= (long)(pcVar16 + 3)) {
                    /* WARNING: Does not return */
            pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4ec);
            (*pcVar23)();
          }
          uVar10 = (uVar20 & 7) << 0x12 | uVar10 << 0xc |
                   ((byte)puVar1[(long)(pcVar16 + 2)] & 0x3f) << 6 |
                   (byte)puVar1[(long)(pcVar16 + 3)] & 0x3f;
        }
        else {
          uVar10 = (uVar14 & 0xf) << 0xc | uVar10 << 6 | (byte)puVar1[(long)(pcVar16 + 2)] & 0x3f;
        }
      }
      else {
        uVar10 = uVar10 | (uVar14 & 0x1f) << 6;
      }
    }
    else {
      uVar10 = bVar2 & 0x7f;
    }
    if (uVar10 >> 0xb == 0x1b) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4c0);
      (*pcVar23)();
    }
    if (0x10ffff < uVar10) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff494);
      (*pcVar23)();
    }
    if (uVar10 == 0x23) {
      if ((long)pcVar16 < (long)pcVar13) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff510);
        (*pcVar23)();
      }
      if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff514);
        (*pcVar23)();
      }
      pcVar23 = pcVar16;
      if (pcVar13 == pcVar11) goto LAB_1009ff32c;
      cVar3 = puVar1[(long)pcVar13];
      _swift_retain(puVar6);
      _swift_bridgeObjectRelease(0);
      if (cVar3 < -0x40) {
                    /* WARNING: Does not return */
        pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff518);
        (*pcVar23)();
      }
      goto LAB_1009ff0d4;
    }
  }
  if ((long)pcVar23 < (long)pcVar13) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4f8);
    (*pcVar23)();
  }
LAB_1009ff314:
  if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff4fc);
    (*pcVar23)();
  }
  if (pcVar11 < pcVar23) {
                    /* WARNING: Does not return */
    pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff500);
    (*pcVar23)();
  }
  if (pcVar13 == pcVar11) {
LAB_1009ff32c:
    _swift_retain(puVar6);
    _swift_bridgeObjectRelease(0);
    pcVar13 = pcVar11;
  }
  else {
    if ((long)pcVar11 <= (long)pcVar13) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff508);
      (*pcVar23)();
    }
    cVar3 = puVar1[(long)pcVar13];
    _swift_retain(puVar6);
    _swift_bridgeObjectRelease(0);
    if (cVar3 < -0x40) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1009ff50c);
      (*pcVar23)();
    }
  }
  goto LAB_1009ff0d4;
}



/* Address: 0x1009ff51c | FUN_1009ff51c */

void FUN_1009ff51c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8edb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8edb8,&DAT_100f29a58);
  DAT_100ff4440 = pTVar1;
  return;
}



/* Address: 0x1009ff55c | thunk_FUN_1009ff560 */

void thunk_FUN_1009ff560(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8d9e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8d9e0,&DAT_100f27618);
  DAT_100ff4448 = pTVar1;
  return;
}



/* Address: 0x1009ff560 | FUN_1009ff560 */

void FUN_1009ff560(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4448 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8d9e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8d9e0,&DAT_100f27618);
  DAT_100ff4448 = pTVar1;
  return;
}



/* Address: 0x1009ff5a0 | thunk_FUN_1009ff5a4 */

void thunk_FUN_1009ff5a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8da20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8da20,&DAT_100f27618);
  DAT_100ff4450 = pTVar1;
  return;
}



/* Address: 0x1009ff5a4 | FUN_1009ff5a4 */

void FUN_1009ff5a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff4450 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8da20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8da20,&DAT_100f27618);
  DAT_100ff4450 = pTVar1;
  return;
}



/* Address: 0x1009ff5e4 | FUN_1009ff5e4 */

void FUN_1009ff5e4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x90));
  return;
}



/* Address: 0x1009ff62c | FUN_1009ff62c */

undefined8 * FUN_1009ff62c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  uVar3 = param_2[6];
  uVar4 = param_2[7];
  param_1[6] = uVar3;
  param_1[7] = uVar4;
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar5;
  uVar5 = param_2[0xe];
  uVar6 = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0xf] = uVar6;
  uVar6 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar6;
  uVar6 = param_2[0x12];
  uVar7 = param_2[0x13];
  param_1[0x12] = uVar6;
  param_1[0x13] = uVar7;
  uVar7 = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar7;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar6);
  return param_1;
}



/* Address: 0x1009ff6ec | FUN_1009ff6ec */

undefined8 * FUN_1009ff6ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  uVar1 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  uVar1 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  return param_1;
}



/* Address: 0x1009ff828 | FUN_1009ff828 */

void FUN_1009ff828(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar5 = param_2[10];
  uVar7 = param_2[0xd];
  uVar6 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar5;
  param_1[0xd] = uVar7;
  param_1[0xc] = uVar6;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  uVar2 = param_2[0xf];
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar3 = param_2[0x10];
  uVar5 = param_2[0x12];
  uVar7 = param_2[0x15];
  uVar6 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar5;
  param_1[0x15] = uVar7;
  param_1[0x14] = uVar6;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  return;
}



/* Address: 0x1009ff85c | FUN_1009ff85c */

undefined8 * FUN_1009ff85c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[6];
  uVar2 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  uVar1 = param_2[10];
  uVar2 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar1;
  uVar1 = param_2[0xe];
  uVar2 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  uVar1 = param_2[0x12];
  uVar2 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_2[0x15];
  return param_1;
}



/* Address: 0x1009ff910 | FUN_1009ff910 */

int FUN_1009ff910(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009ff958 | FUN_1009ff958 */

void FUN_1009ff958(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
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
      *(undefined1 *)(param_1 + 0x16) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x16) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1009ff9c4 | FUN_1009ff9c4 */

undefined1  [16] FUN_1009ff9c4(void)

{
  return ZEXT816(0x100f27618);
}



/* Address: 0x1009ff9d4 | FUN_1009ff9d4 */

void FUN_1009ff9d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1009ff9e0 | FUN_1009ff9e0 */

undefined1  [16] FUN_1009ff9e0(void)

{
  return ZEXT816(0x100f276a8);
}



/* Address: 0x1009ff9f0 | thunk_FUN_1009fd330 */

void thunk_FUN_1009fd330(void)

{
  FUN_1009fd330();
  return;
}



/* Address: 0x1009ff9f4 | thunk_FUN_1009fd59c */

void thunk_FUN_1009fd59c(void)

{
  FUN_1009fdaa4();
  return;
}



/* Address: 0x1009ff9f8 | thunk_FUN_1009fd5ac */

void thunk_FUN_1009fd5ac(void)

{
  thunk_FUN_1009fd5ac();
  return;
}



/* Address: 0x1009ff9fc | FUN_1009ff9fc */

void FUN_1009ff9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar4);
  FUN_10086e2c8(uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1009ffa44 | FUN_1009ffa44 */

void FUN_1009ffa44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = param_1;
  uVar1 = param_2;
  FUN_10086e7c4();
  _swift_bridgeObjectRelease(unaff_x20[2]);
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar1;
  unaff_x20[2] = param_3;
  uVar2 = unaff_x20[3];
  _swift_retain(param_2);
  _swift_release(uVar2);
  unaff_x20[3] = param_2;
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1009ffab8 | FUN_1009ffab8 */

undefined1  [16] FUN_1009ffab8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xfae0);
  }
  *param_1 = puVar1;
  puVar1[2] = unaff_x20;
  uVar2 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  puVar1[3] = uVar5;
  uVar4 = unaff_x20[3];
  puVar1[4] = uVar4;
  _swift_bridgeObjectRetain(uVar5);
  _swift_retain(uVar4);
  FUN_10086e2c8(uVar2,uVar3,uVar5,uVar4);
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = FUN_1009ffb58;
  return auVar6;
}



/* Address: 0x1009ffb58 | FUN_1009ffb58 */

void FUN_1009ffb58(undefined8 *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  
  param_1 = (undefined8 *)*param_1;
  uVar6 = *param_1;
  uVar5 = param_1[1];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  puVar7 = (undefined8 *)param_1[2];
  if ((param_2 & 1) == 0) {
    uVar3 = uVar6;
    uVar4 = uVar5;
    FUN_10086e7c4();
    _swift_bridgeObjectRelease(uVar1);
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar7[2] = param_3;
    _swift_retain(uVar5);
    _swift_release(uVar2);
    puVar7[3] = uVar5;
  }
  else {
    _swift_retain();
    _swift_retain(uVar5);
    uVar3 = uVar6;
    uVar4 = uVar5;
    FUN_10086e7c4();
    _swift_bridgeObjectRelease(uVar1);
    *puVar7 = uVar3;
    puVar7[1] = uVar4;
    puVar7[2] = param_3;
    _swift_release(uVar2);
    _swift_release(uVar6);
    puVar7[3] = uVar5;
    uVar6 = *param_1;
    uVar5 = param_1[1];
  }
  _swift_release(uVar6);
  _swift_release(uVar5);
  _free(param_1);
  return;
}



/* Address: 0x1009ffc44 | FUN_1009ffc44 */

void FUN_1009ffc44(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1009ffc80(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined1 *)(unaff_x20 + 0x40));
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  *(undefined8 *)(unaff_x20 + 0x28) = param_1[1];
  *(undefined8 *)(unaff_x20 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x40) = *(undefined1 *)(param_1 + 4);
  return;
}


