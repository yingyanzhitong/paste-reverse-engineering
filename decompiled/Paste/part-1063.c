/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b68504 | _TtC6Sentry15SentryAttribute::initWithDoubleArray: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry15SentryAttribute::initWithDoubleArray_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b68468();
  return param_3;
}



/* Address: 0x100b68534 | FUN_100b68534 */

void FUN_100b68534(void)

{
  FUN_100b69dac();
  FUN_100b69e84();
  FUN_100b68554();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b68554 | FUN_100b68554 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b68554(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  float fVar7;
  undefined *local_80 [3];
  undefined *local_68;
  
  FUN_100b69e00();
  FUN_100b69d9c(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
  FUN_100b69e38();
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 == 0) {
    _swift_bridgeObjectRelease(param_1);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_80[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100b69544(0,lVar4,0);
    lVar5 = 0x20;
    uVar6 = *(ulong *)(local_80[0] + 0x10);
    do {
      fVar7 = *(float *)(param_1 + lVar5);
      uVar1 = uVar6 + 1;
      if (*(ulong *)(local_80[0] + 0x18) >> 1 <= uVar6) {
        FUN_100b69544(1 < *(ulong *)(local_80[0] + 0x18),uVar1,1);
      }
      puVar3 = local_80[0];
      *(ulong *)(local_80[0] + 0x10) = uVar1;
      *(double *)(local_80[0] + uVar6 * 8 + 0x20) = (double)fVar7;
      lVar5 = lVar5 + 4;
      lVar4 = lVar4 + -1;
      uVar6 = uVar1;
    } while (lVar4 != 0);
    _swift_bridgeObjectRelease(param_1);
  }
  puVar2 = &DAT_1010448f0;
  FUN_100b6730c();
  local_80[0] = puVar3;
  local_68 = puVar2;
  FUN_100011080(local_80,unaff_x20 + _TtC6Sentry15SentryAttribute::value);
  FUN_100b69e10(0,"init");
  return;
}



/* Address: 0x100b686b4 | _TtC6Sentry15SentryAttribute::initWithFloatArray: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry15SentryAttribute::initWithFloatArray_(ID param_1,SEL param_2,ID param_3)

{
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_100b68554();
  return param_3;
}



/* Address: 0x100b686e4 | FUN_100b686e4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b686e4(undefined8 *param_1)

{
  double *pdVar1;
  String *pSVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  ulong *puVar19;
  int iVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  byte extraout_w8;
  byte bVar23;
  undefined8 *puVar24;
  undefined8 *extraout_x8;
  undefined8 *extraout_x8_00;
  undefined8 *extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  undefined8 uVar25;
  undefined8 extraout_x8_04;
  undefined8 extraout_x8_05;
  undefined8 extraout_x8_06;
  ulong uVar26;
  long extraout_x8_07;
  long extraout_x8_08;
  undefined8 *extraout_x8_09;
  byte *extraout_x9;
  byte *pbVar27;
  byte *extraout_x9_00;
  byte *extraout_x9_01;
  byte *extraout_x9_02;
  ulong *extraout_x9_03;
  ulong *extraout_x9_04;
  ulong *extraout_x9_05;
  ulong *extraout_x9_06;
  ulong *extraout_x9_07;
  ulong uVar28;
  undefined8 extraout_x9_08;
  undefined8 *extraout_x10;
  ulong extraout_x10_00;
  undefined8 *puVar29;
  ulong extraout_x10_01;
  ulong uVar30;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  ulong extraout_x10_05;
  ulong uVar31;
  undefined1 *puVar32;
  ulong uVar33;
  undefined8 *unaff_x20;
  undefined *puVar34;
  undefined8 *puVar35;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long lVar36;
  float fVar37;
  double dVar38;
  String SVar39;
  undefined1 auStack_170 [80];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [40];
  undefined1 auStack_d8 [72];
  
  puVar3 = &stack0xffffffffffffffc0;
  puVar32 = &stack0xfffffffffffffff0;
  puVar21 = param_1;
  FUN_100b69e00();
  puVar35 = (undefined8 *)*param_1;
  bVar23 = *(byte *)(param_1 + 2);
  puVar24 = (undefined8 *)(ulong)bVar23;
  pbVar27 = &switchD_100b68720::switchdataD_100c98e30;
  puVar29 = (undefined8 *)((ulong)*(byte *)(puVar24 + 0x201931c6) * 4 + 0x100b68724);
  puVar4 = &stack0xffffffffffffffc0;
  puVar5 = &stack0xffffffffffffffc0;
  puVar6 = &stack0xffffffffffffffc0;
  puVar7 = &stack0xffffffffffffffc0;
  puVar8 = &stack0xffffffffffffffc0;
  puVar9 = &stack0xffffffffffffffc0;
  puVar10 = &stack0xffffffffffffffc0;
  puVar11 = &stack0xffffffffffffffc0;
  puVar12 = &stack0xffffffffffffffc0;
  puVar19 = (ulong *)&stack0xffffffffffffffc0;
  puVar18 = &stack0xffffffffffffffc0;
  puVar17 = &stack0xffffffffffffffc0;
  puVar15 = (ulong *)&stack0xffffffffffffffc0;
  puVar14 = &stack0xffffffffffffffc0;
  puVar13 = &stack0xffffffffffffffc0;
  puVar16 = (ulong *)&stack0xffffffffffffffc0;
  puVar22 = puVar21;
  puVar34 = unaff_x23;
  switch(bVar23) {
  default:
    puVar24 = (undefined8 *)param_1[1];
  case 0x18:
  case 0x30:
  case 0x3e:
switchD_100b68720_caseD_19:
    FUN_100b69db8(puVar24);
    puVar24 = extraout_x8;
    pbVar27 = extraout_x9;
    puVar29 = extraout_x10;
switchD_100b68720_caseD_39:
    *(undefined8 **)pbVar27 = puVar29;
    *(undefined1 **)(pbVar27 + 8) = &DAT_e600000000000000;
    pbVar27 = (byte *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
switchD_100b68720_caseD_bc:
    *(undefined **)(pbVar27 + 0x18) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 **)pbVar27 = puVar35;
    *(undefined8 **)(pbVar27 + 8) = puVar24;
    goto switchD_100b68720_caseD_a6;
  case 1:
    puVar24 = _TtC6Sentry15SentryAttribute::type;
  case 0x25:
  case 0x4d:
    FUN_100b69e48(puVar24);
    FUN_100b69f6c();
switchD_100b68720_caseD_69:
    puVar24 = (undefined8 *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
switchD_100b68720_caseD_46:
    pbVar27 = (byte *)&PTR_Swift__UnsafePointer_100eac000;
switchD_100b68720_caseD_ff:
    puVar24[3] = *(undefined **)((long)pbVar27 + 0x570);
    pbVar27 = (byte *)(ulong)((uint)puVar35 & 1);
switchD_100b68720_caseD_c0:
    *(char *)puVar24 = (char)pbVar27;
    goto switchD_100b68720_caseD_a6;
  case 2:
    FUN_100b69e5c(_TtC6Sentry15SentryAttribute::type);
    FUN_100b69f6c();
    puVar34 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    goto LAB_100b687dc;
  case 3:
    FUN_100b69d64((undefined *)((long)unaff_x20 + (long)_TtC6Sentry15SentryAttribute::type));
  case 0x22:
  case 0x36:
  case 0x4a:
  case 0x52:
    puVar34 = PTR___type_metadata_for_Swift_Double_100eac5d0;
LAB_100b687dc:
    puVar21 = (undefined8 *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar21[3] = puVar34;
    *puVar21 = puVar35;
    goto switchD_100b68720_caseD_a6;
  case 4:
    FUN_100b69ecc((undefined *)((long)unaff_x20 + (long)_TtC6Sentry15SentryAttribute::type));
    FUN_100b69e38();
    param_1 = (undefined8 *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar21 = (undefined8 *)0x101044000;
  case 0x84:
    puVar21 = puVar21 + 0x101;
    break;
  case 5:
    puVar24 = _TtC6Sentry15SentryAttribute::type;
  case 0x38:
  case 0x44:
    FUN_100b69e48(puVar24);
    puVar24 = extraout_x8_00;
    pbVar27 = extraout_x9_00;
switchD_100b68720_caseD_14:
    pbVar27 = (byte *)((ulong)pbVar27 & 0xffffffffffff | 0x5b6e000000000000);
    puVar29 = (undefined8 *)0xe90000000000005d;
switchD_100b68720_caseD_12:
    *puVar24 = pbVar27;
    puVar24[1] = puVar29;
    puVar24 = (undefined8 *)0x101044000;
switchD_100b68720_caseD_ca:
    puVar24 = (undefined8 *)puVar24[0x11b];
switchD_100b68720_caseD_63:
    param_1 = (undefined8 *)((long)unaff_x20 + (long)puVar24);
switchD_100b68720_caseD_13:
    puVar21 = (undefined8 *)&DAT_1010448e0;
switchD_100b68720_caseD_17:
    break;
  case 6:
    puVar24 = (undefined8 *)0x101044000;
  case 0x50:
    FUN_100b69e5c(puVar24[0x11a]);
    puVar24 = extraout_x8_01;
    pbVar27 = extraout_x9_01;
switchD_100b68720_caseD_15:
    pbVar27 = (byte *)((ulong)pbVar27 & 0xffffffffffff | 0x5b72000000000000);
    puVar29 = (undefined8 *)0xe90000000000005d;
switchD_100b68720_caseD_16:
    *puVar24 = pbVar27;
    puVar24[1] = puVar29;
    param_1 = (undefined8 *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
switchD_100b68720_caseD_c:
    puVar21 = (undefined8 *)0x101044000;
switchD_100b68720_caseD_6e:
    puVar21 = puVar21 + 0x11d;
    break;
  case 7:
    FUN_100b69d9c((undefined *)((long)unaff_x20 + (long)_TtC6Sentry15SentryAttribute::type));
    FUN_100b69e38();
    param_1 = (undefined8 *)((long)unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar21 = (undefined8 *)&DAT_1010448f0;
    break;
  case 8:
  case 0x6f:
    goto switchD_100b68720_caseD_8;
  case 10:
  case 199:
  case 0xcd:
  case 0xfc:
  case 0xfe:
    goto switchD_100b68720_caseD_a;
  case 0xb:
    goto switchD_100b68720_caseD_b;
  case 0xc:
  case 0x10:
  case 0x9a:
  case 0x9e:
  case 0xc6:
  case 0xcc:
  case 0xfa:
    goto switchD_100b68720_caseD_c;
  case 0xd:
  case 0x65:
  case 0x92:
  case 0xa2:
  case 0xf2:
    goto switchD_100b68720_caseD_d;
  case 0xe:
    goto switchD_100b68720_caseD_e;
  case 0xf:
    goto switchD_100b68720_caseD_f;
  case 0x12:
  case 0x78:
  case 0xb0:
  case 0xc3:
  case 0xd8:
    goto switchD_100b68720_caseD_12;
  case 0x13:
  case 0xc1:
  case 0xc2:
    goto switchD_100b68720_caseD_13;
  case 0x14:
    goto switchD_100b68720_caseD_14;
  case 0x15:
    goto switchD_100b68720_caseD_15;
  case 0x16:
    goto switchD_100b68720_caseD_16;
  case 0x17:
    goto switchD_100b68720_caseD_17;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x26:
  case 0x2e:
  case 0x4e:
  case 0x80:
  case 0xb8:
  case 0xe0:
    goto switchD_100b68720_caseD_19;
  case 0x20:
    goto switchD_100b68720_caseD_20;
  case 0x21:
  case 0x35:
  case 0x49:
  case 0x51:
    goto switchD_100b68720_caseD_21;
  case 0x24:
    goto switchD_100b68720_caseD_24;
  case 0x34:
    goto switchD_100b68720_caseD_34;
  case 0x39:
    goto switchD_100b68720_caseD_39;
  case 0x3a:
    goto switchD_100b68720_caseD_3a;
  case 0x3b:
    goto switchD_100b68720_caseD_3b;
  case 0x45:
    goto switchD_100b68720_caseD_45;
  case 0x46:
  case 0xf6:
    goto switchD_100b68720_caseD_46;
  case 0x48:
    goto switchD_100b68720_caseD_48;
  case 0x4c:
    goto switchD_100b68720_caseD_4c;
  case 99:
  case 0x90:
  case 0x96:
  case 0xa3:
  case 0xf0:
    goto switchD_100b68720_caseD_63;
  case 100:
  case 0x71:
  case 0x91:
  case 0x97:
  case 0xc5:
  case 200:
  case 0xcb:
  case 0xce:
  case 0xf1:
  case 0xfd:
    goto switchD_100b68720_caseD_64;
  case 0x66:
  case 0x6a:
  case 0x6b:
  case 0x70:
  case 0x93:
  case 0x9f:
  case 0xa7:
  case 0xf3:
    goto switchD_100b68720_caseD_66;
  case 0x67:
  case 0x6c:
  case 0x94:
  case 0x98:
  case 0xc9:
  case 0xcf:
  case 0xf4:
  case 0xfb:
    goto switchD_100b68720_caseD_67;
  case 0x68:
  case 0x95:
  case 0xf5:
    goto switchD_100b68720_caseD_68;
  case 0x69:
    goto switchD_100b68720_caseD_69;
  case 0x6d:
  case 0x99:
  case 0x9c:
  case 0xa0:
  case 0xa5:
  case 0xf7:
    goto switchD_100b68720_caseD_6d;
  case 0x6e:
    goto switchD_100b68720_caseD_6e;
  case 0x9b:
    puVar3 = auStack_170;
switchD_100b68720_caseD_d:
    *(undefined **)(puVar3 + 0xf0) = unaff_x24;
    *(undefined **)(puVar3 + 0xf8) = unaff_x23;
    puVar4 = puVar3;
switchD_100b68720_caseD_a1:
    *(undefined8 **)(puVar4 + 0x100) = puVar35;
    *(undefined8 **)(puVar4 + 0x108) = param_1;
    *(undefined8 **)(puVar4 + 0x110) = unaff_x20;
    *(undefined8 **)(puVar4 + 0x118) = puVar21;
    puVar5 = puVar4;
switchD_100b68720_caseD_e:
    *(undefined1 **)(puVar5 + 0x120) = puVar32;
    *(undefined8 *)(puVar5 + 0x128) = 0x100b68700;
    puVar6 = puVar5;
switchD_100b68720_caseD_67:
    puVar32 = puVar6 + 0x120;
    puVar7 = puVar6;
switchD_100b68720_caseD_f8:
    puVar8 = puVar7;
switchD_100b68720_caseD_66:
    FUN_100b69e00();
    puVar9 = puVar8;
switchD_100b68720_caseD_8:
    puVar10 = puVar9;
    param_1 = puVar22;
switchD_100b68720_caseD_a4:
    FUN_10000cbfc(puVar21);
    puVar11 = puVar10;
switchD_100b68720_caseD_68:
    puVar12 = puVar11;
    puVar22 = unaff_x20;
switchD_100b68720_caseD_9d:
    unaff_x24 = PTR___type_metadata_for_Any_100eae0c0;
    unaff_x20 = (undefined8 *)PTR___type_metadata_for_Swift_String_100eac208;
    puVar29 = puVar22;
    FUN_100b69d7c();
    iVar20 = (int)puVar29;
    FUN_100b69de8();
    puVar34 = PTR___type_metadata_for_Swift_Bool_100eac570;
    puVar35 = puVar22;
    if (iVar20 == 0) {
      FUN_100b69d08();
      unaff_x23 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      if (iVar20 == 0) {
        FUN_100b69d08();
        puVar34 = PTR___type_metadata_for_Swift_Double_100eac5d0;
        puVar15 = (ulong *)puVar12;
        if (iVar20 == 0) {
          FUN_100b69d08();
          if (iVar20 == 0) {
            FUN_100b69d7c();
            FUN_100b69de8();
            if (iVar20 == 0) {
              unaff_x23 = &DAT_101044808;
              FUN_100b6730c();
              puVar34 = unaff_x23;
              FUN_100b69d08();
              if ((int)puVar34 == 0) {
                unaff_x23 = &DAT_1010448e0;
                FUN_100b6730c();
                puVar34 = unaff_x23;
                FUN_100b69d08();
                puVar19 = (ulong *)puVar12;
                if ((int)puVar34 == 0) {
switchD_100b68720_caseD_3b:
                  unaff_x23 = &DAT_1010448e8;
                  FUN_100b6730c();
                  puVar34 = unaff_x23;
                  FUN_100b69d08();
                  puVar15 = puVar19;
                  if ((int)puVar34 == 0) {
                    unaff_x23 = &DAT_1010448f0;
                    FUN_100b6730c();
                    puVar34 = unaff_x23;
                    FUN_100b69d08();
                    if ((int)puVar34 == 0) {
                      FUN_100b6730c(&DAT_101044948);
                      iVar20 = (int)(puVar19 + 0xc);
                      FUN_100b69d8c();
                      puVar16 = puVar19;
                      if (iVar20 == 0) {
                        iVar20 = 0x1044950;
                        FUN_100b6730c();
                        FUN_100b69d7c();
                        FUN_100b69de8();
                        if (iVar20 != 0) {
                          FUN_100076508(puVar32 + -0x88,puVar19 + 0xc);
                          uVar30 = puVar19[0xf];
                          uVar26 = puVar19[0x10];
                          FUN_100004640(puVar19 + 0xc,uVar30);
                          (**(code **)(uVar26 + 8))(puVar19 + 8,uVar30,uVar26);
                          FUN_100b69db8((char)puVar19[10],puVar19[8]);
                    /* WARNING: Could not recover jumptable at 0x000100b68cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)(&UNK_100b68ce0 + (ulong)(&BYTE_100c98e40)[extraout_x8_07] * 4))
                                    ();
                          return;
                        }
                        iVar20 = (int)(puVar19 + 0xc);
                        FUN_100b69d8c();
                        if (iVar20 != 0) {
                          FUN_100b69db8((char)puVar19[0xe],puVar19[0xc]);
                    /* WARNING: Could not recover jumptable at 0x000100b68d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                          (*(code *)(&UNK_100b68d38 + (ulong)(&BYTE_100c98e38)[extraout_x8_08] * 4))
                                    ();
                          return;
                        }
                        FUN_100b69d7c();
                        FUN_100b69de8();
                        if (iVar20 == 0) {
                          FUN_100b69ecc((undefined *)
                                        ((long)puVar35 + (long)_TtC6Sentry15SentryAttribute::type));
                          *extraout_x8_09 = extraout_x9_08;
                          extraout_x8_09[1] = &DAT_e600000000000000;
                          FUN_10000cbfc(puVar21,puVar32 + -0x88);
                          SVar39 = Swift::String::_init(puVar32 + -0x88,unaff_x24 + 8);
                          pSVar2 = (String *)((long)puVar35 + _TtC6Sentry15SentryAttribute::value);
                          pSVar2[1].bridgeObject = unaff_x20;
                          *pSVar2 = SVar39;
                        }
                        else {
                          lVar36 = *(long *)(puVar32 + -0x88);
                          puVar21 = (undefined8 *)
                                    (lVar36 + (long)_TtC6Sentry15SentryAttribute::type);
                          uVar25 = puVar21[1];
                          puVar29 = (undefined8 *)
                                    ((long)puVar35 + (long)_TtC6Sentry15SentryAttribute::type);
                          *puVar29 = *puVar21;
                          puVar29[1] = uVar25;
                          FUN_10000cbfc(lVar36 + _TtC6Sentry15SentryAttribute::value,
                                        (undefined *)
                                        ((long)puVar35 + _TtC6Sentry15SentryAttribute::value));
                          _swift_bridgeObjectRetain(uVar25);
                        }
                      }
                      else {
                        uVar30 = puVar19[0xc];
                        FUN_100b69d9c((undefined *)
                                      ((long)puVar35 + (long)_TtC6Sentry15SentryAttribute::type));
                        FUN_100b69e38();
                        lVar36 = *(long *)(uVar30 + 0x10);
                        if (lVar36 == 0) {
                          _swift_bridgeObjectRelease(uVar30);
                          puVar34 = PTR___swiftEmptyArrayStorage_100eae0d8;
                        }
                        else {
                          *(undefined **)(puVar32 + -0x88) = PTR___swiftEmptyArrayStorage_100eae0d8;
                          FUN_100b69544(0,lVar36,0);
                          puVar34 = *(undefined **)(puVar32 + -0x88);
                          uVar26 = 0x20;
                          uVar28 = *(ulong *)(puVar34 + 0x10);
                          do {
                            fVar37 = *(float *)(uVar30 + uVar26);
                            *(undefined **)(puVar32 + -0x88) = puVar34;
                            uVar33 = *(ulong *)(puVar34 + 0x18);
                            uVar31 = uVar28 + 1;
                            if (uVar33 >> 1 <= uVar28) {
                              puVar19[3] = uVar31;
                              *puVar19 = uVar28;
                              puVar19[1] = uVar26;
                              *(float *)((long)puVar19 + 0x14) = fVar37;
                              FUN_100b69544(1 < uVar33,uVar31,1);
                              fVar37 = *(float *)((long)puVar19 + 0x14);
                              uVar28 = *puVar19;
                              uVar26 = puVar19[1];
                              uVar31 = puVar19[3];
                              puVar34 = *(undefined **)(puVar32 + -0x88);
                            }
                            *(ulong *)(puVar34 + 0x10) = uVar31;
                            *(double *)(puVar34 + uVar28 * 8 + 0x20) = (double)fVar37;
                            uVar26 = uVar26 + 4;
                            lVar36 = lVar36 + -1;
                            uVar28 = uVar31;
                          } while (lVar36 != 0);
                          _swift_bridgeObjectRelease(uVar30);
                        }
                        *(undefined **)(puVar32 + -0x70) = unaff_x23;
                        *(undefined **)(puVar32 + -0x88) = puVar34;
                        FUN_100011080(puVar32 + -0x88,
                                      (undefined *)
                                      ((long)puVar35 + _TtC6Sentry15SentryAttribute::value));
                      }
                      goto switchD_100b68720_caseD_4c;
                    }
                    FUN_100b69df0(*(undefined8 *)(puVar32 + -0x88));
                    uVar25 = extraout_x8_06;
                    puVar19 = extraout_x9_07;
                    uVar30 = extraout_x10_05;
                    goto LAB_100b68ae0;
                  }
                  FUN_100b69dc8(*(undefined8 *)(puVar32 + -0x88));
                  uVar30 = extraout_x10_04 & 0xffffffffffff | 0x5b72000000000000;
                  uVar25 = extraout_x8_05;
                  puVar19 = extraout_x9_06;
                }
                else {
                  puVar24 = *(undefined8 **)(puVar32 + -0x88);
                  puVar18 = puVar12;
switchD_100b68720_caseD_24:
                  FUN_100b69dd8(puVar24);
                  uVar30 = extraout_x10_03 & 0xffffffffffff | 0x5b6e000000000000;
                  puVar15 = (ulong *)puVar18;
                  uVar25 = extraout_x8_04;
                  puVar19 = extraout_x9_05;
                }
                puVar32 = (undefined1 *)0xe90000000000005d;
              }
              else {
                puVar24 = *(undefined8 **)(puVar32 + -0x88);
                puVar17 = puVar12;
switchD_100b68720_caseD_3a:
                FUN_100b69db8(puVar24);
                puVar15 = (ulong *)puVar17;
                uVar25 = extraout_x8_03;
                puVar19 = extraout_x9_04;
                uVar30 = extraout_x10_02;
LAB_100b68ae0:
                uVar30 = uVar30 & 0xffffffffffff | 0x5d5b000000000000;
                puVar32 = &DAT_e800000000000000;
              }
              goto LAB_100b689e4;
            }
            fVar37 = *(float *)(puVar32 + -0x88);
            FUN_100b69d64((undefined *)((long)puVar22 + (long)_TtC6Sentry15SentryAttribute::type));
            dVar38 = (double)fVar37;
          }
          else {
            dVar38 = *(double *)(puVar32 + -0x88);
            FUN_100b69d64((undefined *)((long)puVar22 + (long)_TtC6Sentry15SentryAttribute::type));
          }
          pdVar1 = (double *)((long)puVar22 + _TtC6Sentry15SentryAttribute::value);
          pdVar1[3] = (double)puVar34;
          *pdVar1 = dVar38;
          puVar16 = (ulong *)puVar12;
        }
        else {
switchD_100b68720_caseD_20:
          FUN_100b69dc8(*(undefined8 *)(puVar32 + -0x88));
          uVar30 = extraout_x10_01 & 0xffffffffffff | 0x72000000000000;
          puVar32 = &DAT_e700000000000000;
          uVar25 = extraout_x8_02;
          puVar19 = extraout_x9_03;
LAB_100b689e4:
          *puVar19 = uVar30;
          puVar19[1] = (ulong)puVar32;
          puVar21 = (undefined8 *)((long)puVar35 + _TtC6Sentry15SentryAttribute::value);
          puVar21[3] = unaff_x23;
          *puVar21 = uVar25;
          puVar16 = puVar15;
        }
      }
      else {
        FUN_100b69dd8(puVar32[-0x88]);
        puVar29 = (undefined8 *)(extraout_x10_00 & 0xffffffffffff | 0x6e000000000000);
        puVar14 = puVar12;
        pbVar27 = extraout_x9_02;
        bVar23 = extraout_w8;
switchD_100b68720_caseD_34:
        *(undefined8 **)pbVar27 = puVar29;
        *(undefined1 **)(pbVar27 + 8) = &DAT_e700000000000000;
        pbVar27 = (byte *)((long)puVar35 + _TtC6Sentry15SentryAttribute::value);
        *(undefined **)(pbVar27 + 0x18) = puVar34;
        *pbVar27 = bVar23;
        puVar16 = (ulong *)puVar14;
      }
    }
    else {
      puVar24 = *(undefined8 **)(puVar32 + -0x88);
      pbVar27 = *(byte **)(puVar32 + -0x80);
      puVar21 = (undefined8 *)((long)puVar22 + (long)_TtC6Sentry15SentryAttribute::type);
      *puVar21 = &DAT_676e69727473;
      puVar21[1] = &DAT_e600000000000000;
      puVar29 = (undefined8 *)((long)puVar22 + _TtC6Sentry15SentryAttribute::value);
      puVar29[3] = unaff_x20;
      puVar13 = puVar12;
switchD_100b68720_caseD_48:
      *puVar29 = puVar24;
      puVar29[1] = pbVar27;
      puVar16 = (ulong *)puVar13;
    }
switchD_100b68720_caseD_4c:
    FUN_100004594();
    *(undefined8 **)((long)puVar16 + 0x88) = puVar35;
    *(undefined8 **)((long)puVar16 + 0x90) = param_1;
    _objc_msgSendSuper2((objc_super *)((long)puVar16 + 0x88),"init");
switchD_100b68720_caseD_21:
    FUN_100b69e84();
    FUN_100004594();
switchD_100b68720_caseD_45:
    return;
  case 0x9d:
    goto switchD_100b68720_caseD_9d;
  case 0xa1:
    goto switchD_100b68720_caseD_a1;
  case 0xa4:
    goto switchD_100b68720_caseD_a4;
  case 0xa6:
    goto switchD_100b68720_caseD_a6;
  case 0xbc:
  case 0xe4:
    goto switchD_100b68720_caseD_bc;
  case 0xc0:
  case 0xc4:
    goto switchD_100b68720_caseD_c0;
  case 0xca:
    goto switchD_100b68720_caseD_ca;
  case 0xf8:
    goto switchD_100b68720_caseD_f8;
  case 0xf9:
    break;
  case 0xff:
    goto switchD_100b68720_caseD_ff;
  }
  FUN_100b6730c();
switchD_100b68720_caseD_a:
  param_1[3] = puVar21;
switchD_100b68720_caseD_64:
  *param_1 = puVar35;
switchD_100b68720_caseD_a6:
switchD_100b68720_caseD_b:
switchD_100b68720_caseD_6d:
  FUN_100b69e10();
switchD_100b68720_caseD_f:
  FUN_100b69e90();
  return;
}



/* Address: 0x100b688d4 | switchD_100b68720::caseD_9b */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * switchD_100b68720::caseD_9b(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  String *pSVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 extraout_w8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined8 uVar8;
  undefined8 extraout_x8_01;
  undefined8 extraout_x8_02;
  undefined8 extraout_x8_03;
  long lVar9;
  long extraout_x8_04;
  long extraout_x8_05;
  undefined8 *extraout_x8_06;
  ulong *extraout_x9;
  ulong *extraout_x9_00;
  ulong *extraout_x9_01;
  ulong *puVar10;
  ulong *extraout_x9_02;
  ulong *extraout_x9_03;
  ulong *extraout_x9_04;
  undefined8 extraout_x9_05;
  ulong extraout_x10;
  ulong extraout_x10_00;
  ulong uVar11;
  ulong extraout_x10_01;
  ulong extraout_x10_02;
  ulong extraout_x10_03;
  ulong extraout_x10_04;
  undefined1 *puVar12;
  long unaff_x20;
  long *plVar13;
  long lVar14;
  float fVar15;
  long *plVar16;
  String SVar17;
  undefined8 local_f0 [2];
  undefined1 local_e0;
  long local_d0 [2];
  undefined1 local_c0;
  long *local_b8;
  long lStack_b0;
  long *local_98;
  undefined8 uStack_90;
  undefined *local_80;
  undefined1 auStack_70 [32];
  
  FUN_100b69e00();
  FUN_10000cbfc(param_1,auStack_70);
  puVar4 = PTR___type_metadata_for_Any_100eae0c0;
  plVar13 = (long *)PTR___type_metadata_for_Swift_String_100eac208;
  lVar14 = unaff_x20;
  FUN_100b69d7c();
  iVar5 = (int)lVar14;
  FUN_100b69de8();
  puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
  if (iVar5 != 0) {
    puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
    *puVar2 = &DAT_676e69727473;
    puVar2[1] = &DAT_e600000000000000;
    puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar2[3] = plVar13;
    *puVar2 = local_98;
    puVar2[1] = uStack_90;
    goto LAB_100b68a68;
  }
  FUN_100b69d08();
  puVar6 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  if (iVar5 != 0) {
    FUN_100b69dd8((ulong)local_98 & 0xff);
    *extraout_x9 = extraout_x10 & 0xffffffffffff | 0x6e000000000000;
    extraout_x9[1] = (ulong)&DAT_e700000000000000;
    puVar12 = (undefined1 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    *(undefined **)(puVar12 + 0x18) = puVar7;
    *puVar12 = extraout_w8;
    goto LAB_100b68a68;
  }
  FUN_100b69d08();
  puVar7 = PTR___type_metadata_for_Swift_Double_100eac5d0;
  if (iVar5 == 0) {
    FUN_100b69d08();
    if (iVar5 == 0) {
      FUN_100b69d7c();
      FUN_100b69de8();
      if (iVar5 == 0) {
        puVar6 = &DAT_101044808;
        FUN_100b6730c();
        puVar7 = puVar6;
        FUN_100b69d08();
        if ((int)puVar7 == 0) {
          puVar6 = &DAT_1010448e0;
          FUN_100b6730c();
          puVar7 = puVar6;
          FUN_100b69d08();
          if ((int)puVar7 == 0) {
            puVar6 = &DAT_1010448e8;
            FUN_100b6730c();
            puVar7 = puVar6;
            FUN_100b69d08();
            if ((int)puVar7 == 0) {
              puVar6 = &DAT_1010448f0;
              FUN_100b6730c();
              puVar7 = puVar6;
              FUN_100b69d08();
              if ((int)puVar7 == 0) {
                FUN_100b6730c(&DAT_101044948);
                iVar5 = (int)local_d0;
                FUN_100b69d8c();
                if (iVar5 == 0) {
                  iVar5 = 0x1044950;
                  FUN_100b6730c();
                  FUN_100b69d7c();
                  FUN_100b69de8();
                  if (iVar5 != 0) {
                    FUN_100076508(&local_98,local_d0);
                    FUN_100004640(local_d0,local_b8);
                    (**(code **)(lStack_b0 + 8))(local_f0,local_b8,lStack_b0);
                    FUN_100b69db8(local_e0,local_f0[0]);
                    /* WARNING: Could not recover jumptable at 0x000100b68cdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&UNK_100b68ce0 + (ulong)(&BYTE_100c98e40)[extraout_x8_04] * 4))();
                    return local_b8;
                  }
                  plVar16 = local_d0;
                  FUN_100b69d8c();
                  if ((int)plVar16 != 0) {
                    FUN_100b69db8(local_c0,local_d0[0]);
                    /* WARNING: Could not recover jumptable at 0x000100b68d34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    (*(code *)(&UNK_100b68d38 + (ulong)(&BYTE_100c98e38)[extraout_x8_05] * 4))();
                    return plVar16;
                  }
                  FUN_100b69d7c();
                  iVar5 = (int)plVar16;
                  FUN_100b69de8();
                  plVar16 = local_98;
                  if (iVar5 == 0) {
                    FUN_100b69ecc(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
                    *extraout_x8_06 = extraout_x9_05;
                    extraout_x8_06[1] = &DAT_e600000000000000;
                    FUN_10000cbfc(param_1,&local_98);
                    SVar17 = Swift::String::_init(&local_98,puVar4 + 8);
                    pSVar3 = (String *)(unaff_x20 + _TtC6Sentry15SentryAttribute::value);
                    pSVar3[1].bridgeObject = plVar13;
                    *pSVar3 = SVar17;
                  }
                  else {
                    uVar8 = ((undefined8 *)((long)local_98 + _TtC6Sentry15SentryAttribute::type))[1]
                    ;
                    puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
                    *puVar2 = *(undefined8 *)((long)local_98 + _TtC6Sentry15SentryAttribute::type);
                    puVar2[1] = uVar8;
                    FUN_10000cbfc((undefined *)
                                  ((long)local_98 + _TtC6Sentry15SentryAttribute::value),
                                  unaff_x20 + _TtC6Sentry15SentryAttribute::value);
                    _swift_bridgeObjectRetain(uVar8);
                    plVar13 = plVar16;
                  }
                }
                else {
                  FUN_100b69d9c(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
                  FUN_100b69e38();
                  lVar14 = *(long *)(local_d0[0] + 0x10);
                  if (lVar14 == 0) {
                    _swift_bridgeObjectRelease(local_d0[0]);
                    plVar13 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
                  }
                  else {
                    local_98 = (long *)PTR___swiftEmptyArrayStorage_100eae0d8;
                    FUN_100b69544(0,lVar14,0);
                    lVar9 = 0x20;
                    uVar11 = local_98[2];
                    do {
                      fVar15 = *(float *)(local_d0[0] + lVar9);
                      uVar1 = uVar11 + 1;
                      if ((ulong)local_98[3] >> 1 <= uVar11) {
                        FUN_100b69544(1 < (ulong)local_98[3],uVar1,1);
                      }
                      plVar13 = local_98;
                      local_98[2] = uVar1;
                      local_98[uVar11 + 4] = (long)(double)fVar15;
                      lVar9 = lVar9 + 4;
                      lVar14 = lVar14 + -1;
                      uVar11 = uVar1;
                    } while (lVar14 != 0);
                    _swift_bridgeObjectRelease(local_d0[0]);
                  }
                  local_98 = plVar13;
                  local_80 = puVar6;
                  FUN_100011080(&local_98,unaff_x20 + _TtC6Sentry15SentryAttribute::value);
                }
                goto LAB_100b68a68;
              }
              FUN_100b69df0(local_98);
              uVar8 = extraout_x8_03;
              puVar10 = extraout_x9_04;
              uVar11 = extraout_x10_04;
              goto LAB_100b68ae0;
            }
            FUN_100b69dc8(local_98);
            uVar11 = extraout_x10_03 & 0xffffffffffff | 0x5b72000000000000;
            uVar8 = extraout_x8_02;
            puVar10 = extraout_x9_03;
          }
          else {
            FUN_100b69dd8(local_98);
            uVar11 = extraout_x10_02 & 0xffffffffffff | 0x5b6e000000000000;
            uVar8 = extraout_x8_01;
            puVar10 = extraout_x9_02;
          }
          puVar12 = (undefined1 *)0xe90000000000005d;
        }
        else {
          FUN_100b69db8(local_98);
          uVar8 = extraout_x8_00;
          puVar10 = extraout_x9_01;
          uVar11 = extraout_x10_01;
LAB_100b68ae0:
          uVar11 = uVar11 & 0xffffffffffff | 0x5d5b000000000000;
          puVar12 = &DAT_e800000000000000;
        }
        goto LAB_100b689e4;
      }
      fVar15 = SUB84(local_98,0);
      FUN_100b69d64(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
      plVar16 = (long *)(double)fVar15;
    }
    else {
      plVar16 = local_98;
      FUN_100b69d64(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
    }
    puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar2[3] = puVar7;
    *puVar2 = plVar16;
  }
  else {
    FUN_100b69dc8(local_98);
    uVar11 = extraout_x10_00 & 0xffffffffffff | 0x72000000000000;
    puVar12 = &DAT_e700000000000000;
    uVar8 = extraout_x8;
    puVar10 = extraout_x9_00;
LAB_100b689e4:
    *puVar10 = uVar11;
    puVar10[1] = (ulong)puVar12;
    puVar2 = (undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::value);
    puVar2[3] = puVar6;
    *puVar2 = uVar8;
  }
LAB_100b68a68:
  FUN_100004594(auStack_70);
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff58,"init");
  FUN_100b69e84();
  FUN_100004594();
  return plVar13;
}



/* Address: 0x100b68f40 | _TtC6Sentry15SentryAttribute::initWithValue: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry15SentryAttribute::initWithValue_(ID param_1,SEL param_2,ID param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_40 [32];
  
  puVar1 = auStack_40;
  _swift_unknownObjectRetain(param_3);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(param_3);
  switchD_100b68720::caseD_9b();
  return (ID)puVar1;
}



/* Address: 0x100b68f8c | FUN_100b68f8c */

void FUN_100b68f8c(ID param_1)

{
  FUN_100b69e08();
  _objc_msgSend(param_1,"init");
  return;
}



/* Address: 0x100b68fa8 | FUN_100b68fa8 */

void FUN_100b68fa8(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer("Sentry.SentryAttribute",0x16,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100b68fd4);
  (*pcVar1)();
}



/* Address: 0x100b68fd4 | _TtC6Sentry15SentryAttribute::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry15SentryAttribute::init(ID param_1,SEL param_2)

{
  ID IVar1;
  
  FUN_100b68fa8();
  FUN_100b69e00();
  IVar1 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"dealloc");
  return IVar1;
}



/* Address: 0x100b68fe0 | FUN_100b68fe0 */

void FUN_100b68fe0(void)

{
  FUN_100b69e00();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100b69010 | _TtC6Sentry15SentryAttribute::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry15SentryAttribute::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + type + 8));
  FUN_100004594(param_1 + value);
  return;
}



/* Address: 0x100b69050 | FUN_100b69050 */

void FUN_100b69050(undefined8 param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  FUN_100b690bc(&local_50);
  switchD_100bbd908::caseD_25(param_1);
  FUN_100b69560(local_50,uStack_48,local_40);
  return;
}



/* Address: 0x100b690bc | FUN_100b690bc */

void FUN_100b690bc(String *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined1 *puVar5;
  ulong uVar6;
  char *pcVar7;
  undefined1 uVar8;
  long unaff_x20;
  String SVar9;
  byte local_80;
  undefined1 auStack_7f [15];
  undefined1 auStack_70 [32];
  
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  puVar5 = &DAT_676e69727473;
  iVar4 = 0x69727473;
  puVar1 = *(undefined1 **)(unaff_x20 + _TtC6Sentry15SentryAttribute::type);
  puVar2 = (undefined1 *)((undefined8 *)(unaff_x20 + _TtC6Sentry15SentryAttribute::type))[1];
  if (puVar1 == &DAT_676e69727473 && puVar2 == &DAT_e600000000000000) {
LAB_100b69120:
    FUN_100b69d44();
    FUN_100b69d30();
    if (iVar4 != 0) {
      uVar8 = 0;
      SVar9._1_15_ = auStack_7f;
      SVar9.str._0_1_ = local_80;
      goto LAB_100b69390;
    }
  }
  else {
    FUN_100b69d54(&DAT_676e69727473,&DAT_e600000000000000);
    iVar4 = (int)puVar5;
    if (((ulong)puVar5 & 1) != 0) goto LAB_100b69120;
    uVar6 = 0x6e61656c6f6f62;
    iVar4 = 0x6c6f6f62;
    if (puVar1 == (undefined1 *)0x6e61656c6f6f62 && puVar2 == &DAT_e700000000000000) {
LAB_100b69170:
      FUN_100b69d44();
      FUN_100b69d30();
      if (iVar4 != 0) {
        SVar9 = (String)ZEXT116(local_80);
        uVar8 = 1;
        goto LAB_100b69390;
      }
    }
    else {
      puVar5 = &DAT_e700000000000000;
      FUN_100b69d54();
      iVar4 = (int)uVar6;
      if ((uVar6 & 1) != 0) goto LAB_100b69170;
      pcVar7 = (char *)0x72656765746e69;
      if (puVar1 == (undefined1 *)0x72656765746e69 && puVar2 == &DAT_e700000000000000) {
LAB_100b691bc:
        FUN_100b69d44();
        FUN_100b69d30();
        if ((int)pcVar7 != 0) {
          FUN_100b69ea0();
          SVar9.bridgeObject = puVar5;
          SVar9.str = pcVar7;
          uVar8 = 2;
          goto LAB_100b69390;
        }
      }
      else {
        puVar5 = &DAT_e700000000000000;
        FUN_100b69d54();
        if (((ulong)pcVar7 & 1) != 0) goto LAB_100b691bc;
        pcVar7 = (char *)0x656c62756f64;
        if (puVar1 == (undefined1 *)0x656c62756f64 && puVar2 == &DAT_e600000000000000) {
LAB_100b69204:
          FUN_100b69d44();
          FUN_100b69d30();
          if ((int)pcVar7 != 0) {
            FUN_100b69ea0();
            SVar9.bridgeObject = puVar5;
            SVar9.str = pcVar7;
            uVar8 = 3;
            goto LAB_100b69390;
          }
        }
        else {
          puVar5 = &DAT_e600000000000000;
          FUN_100b69d54();
          if (((ulong)pcVar7 & 1) != 0) goto LAB_100b69204;
          uVar6 = 0x5d5b676e69727473;
          if (puVar1 == (undefined1 *)0x5d5b676e69727473 && puVar2 == &DAT_e800000000000000) {
LAB_100b69250:
            FUN_100b69d44();
            pcVar7 = &DAT_101044808;
            FUN_100b6730c();
            FUN_100b69d30();
            if ((int)pcVar7 != 0) {
              FUN_100b69ea0();
              SVar9.bridgeObject = puVar5;
              SVar9.str = pcVar7;
              uVar8 = 4;
              goto LAB_100b69390;
            }
          }
          else {
            puVar5 = &DAT_e800000000000000;
            FUN_100b69d54();
            if ((uVar6 & 1) != 0) goto LAB_100b69250;
            uVar6 = 0;
            if (puVar1 == (undefined1 *)0x5b6e61656c6f6f62 &&
                puVar2 == (undefined1 *)0xe90000000000005d) {
LAB_100b692ac:
              FUN_100b69d44();
              pcVar7 = &DAT_1010448e0;
              FUN_100b6730c();
              FUN_100b69d30();
              if ((int)pcVar7 != 0) {
                FUN_100b69ea0();
                SVar9.bridgeObject = puVar5;
                SVar9.str = pcVar7;
                uVar8 = 5;
                goto LAB_100b69390;
              }
            }
            else {
              puVar5 = (undefined1 *)0xe90000000000005d;
              FUN_100b69d54();
              if ((uVar6 & 1) != 0) goto LAB_100b692ac;
              uVar6 = 0x5b72656765746e69;
              if (puVar1 == (undefined1 *)0x5b72656765746e69 &&
                  puVar2 == (undefined1 *)0xe90000000000005d) {
LAB_100b69300:
                FUN_100b69d44();
                pcVar7 = &DAT_1010448e8;
                FUN_100b6730c();
                FUN_100b69d30();
                if ((int)pcVar7 != 0) {
                  FUN_100b69ea0();
                  SVar9.bridgeObject = puVar5;
                  SVar9.str = pcVar7;
                  uVar8 = 6;
                  goto LAB_100b69390;
                }
              }
              else {
                puVar5 = (undefined1 *)0xe90000000000005d;
                FUN_100b69d54();
                if ((uVar6 & 1) != 0) goto LAB_100b69300;
                uVar6 = 0;
                if (puVar1 == (undefined1 *)0x5d5b656c62756f64 && puVar2 == &DAT_e800000000000000) {
LAB_100b69354:
                  FUN_100b69d44();
                  pcVar7 = &DAT_1010448f0;
                  FUN_100b6730c();
                  FUN_100b69d30();
                  if ((int)pcVar7 != 0) {
                    FUN_100b69ea0();
                    SVar9.bridgeObject = puVar5;
                    SVar9.str = pcVar7;
                    uVar8 = 7;
                    goto LAB_100b69390;
                  }
                }
                else {
                  puVar5 = &DAT_e800000000000000;
                  FUN_100b69d54();
                  if ((uVar6 & 1) != 0) goto LAB_100b69354;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_100b69d44();
  SVar9 = Swift::String::_init(auStack_70,puVar3 + 8);
  uVar8 = 0;
LAB_100b69390:
  *param_1 = SVar9;
  *(undefined1 *)&param_1[1].str = uVar8;
  return;
}



/* Address: 0x100b693b4 | FUN_100b693b4 */

void FUN_100b693b4(void)

{
  FUN_100b69050();
  return;
}



/* Address: 0x100b693d4 | FUN_100b693d4 */

void FUN_100b693d4(void)

{
  FUN_100b690bc();
  return;
}



/* Address: 0x100b693f4 | FUN_100b693f4 */

void FUN_100b693f4(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 8 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69414 | FUN_100b69414 */

void FUN_100b69414(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 0x10 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69434 | FUN_100b69434 */

void FUN_100b69434(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 <= param_3) {
    FUN_100b69ebc(param_2);
    return;
  }
  return;
}



/* Address: 0x100b69450 | FUN_100b69450 */

void FUN_100b69450(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 0x28 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69478 | FUN_100b69478 */

void FUN_100b69478(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 0x20 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69498 | FUN_100b69498 */

void FUN_100b69498(ulong param_1,long param_2,ulong param_3)

{
  long lVar1;
  
  if (param_1 <= param_3) {
    lVar1 = 0;
    FUN_100be55f4();
    if (param_3 < param_1 + *(long *)(*(long *)(lVar1 + -8) + 0x48) * param_2) {
      if (param_3 != param_1) {
        FUN_100b69f30();
        _swift_arrayInitWithTakeBackToFront();
        return;
      }
      return;
    }
  }
  FUN_100be55f4(0);
  FUN_100b69f30();
  _swift_arrayInitWithTakeFrontToBack();
  return;
}



/* Address: 0x100b69520 | FUN_100b69520 */

void FUN_100b69520(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 0x18 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69544 | FUN_100b69544 */

void FUN_100b69544(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b6975c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b69560 | FUN_100b69560 */

void FUN_100b69560(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  switch(param_3) {
  case 0:
    break;
  default:
    return;
  case 4:
  case 5:
  case 6:
  case 7:
    param_2 = param_1;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100b69598 | FUN_100b69598 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b69598(void)

{
  return ZEXT816(0x100f9f430);
}



/* Address: 0x100b695b8 | FUN_100b695b8 */

void FUN_100b695b8(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cccd50);
  return;
}



/* Address: 0x100b695c4 | FUN_100b695c4 */

void FUN_100b695c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x60))();
  return;
}



/* Address: 0x100b695cc | FUN_100b695cc */

void FUN_100b695cc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x68))();
  return;
}



/* Address: 0x100b695d4 | FUN_100b695d4 */

void FUN_100b695d4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x70))();
  return;
}



/* Address: 0x100b695dc | FUN_100b695dc */

void FUN_100b695dc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x78))();
  return;
}



/* Address: 0x100b695e4 | FUN_100b695e4 */

void FUN_100b695e4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x80))();
  return;
}



/* Address: 0x100b695ec | FUN_100b695ec */

void FUN_100b695ec(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x88))();
  return;
}



/* Address: 0x100b695f4 | FUN_100b695f4 */

void FUN_100b695f4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b695f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x90))();
  return;
}



/* Address: 0x100b695fc | FUN_100b695fc */

void FUN_100b695fc(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b69600. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0x98))();
  return;
}



/* Address: 0x100b69604 | FUN_100b69604 */

void FUN_100b69604(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b69608. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0xa0))();
  return;
}



/* Address: 0x100b6960c | FUN_100b6960c */

void FUN_100b6960c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100b69610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x20 + 0xa8))();
  return;
}



/* Address: 0x100b69614 | FUN_100b69614 */

void FUN_100b69614(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b69850();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b69630 | FUN_100b69630 */

void FUN_100b69630(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b69c14();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b6965c | FUN_100b6965c */

void FUN_100b6965c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b6996c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b69690 | FUN_100b69690 */

void FUN_100b69690(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b6996c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b696c4 | FUN_100b696c4 */

void FUN_100b696c4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b6996c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b696f8 | FUN_100b696f8 */

void FUN_100b696f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b69a60();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b69714 | FUN_100b69714 */

void FUN_100b69714(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b69b5c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b69738 | FUN_100b69738 */

void FUN_100b69738(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b69b5c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100b6975c | FUN_100b6975c */

undefined * FUN_100b6975c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b69850);
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
    puVar3 = &DAT_101044970;
    FUN_100b6730c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)(puVar4 + -0x20) / 8 << 1;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 8 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100b69850 | FUN_100b69850 */

undefined * FUN_100b69850(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6996c);
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
    puVar3 = &DAT_101044960;
    FUN_100b6730c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = (long)(puVar4 + -0x20) / 8 << 1;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_101044968;
    FUN_100b6730c(&DAT_101044968);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 8 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100b6996c | FUN_100b6996c */

void FUN_100b6996c(undefined *param_1,long param_2,ulong param_3,undefined *param_4,code *param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar5;
  undefined *puVar6;
  
  puVar3 = param_1;
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b69a60);
      (*pcVar2)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar5 = *(long *)(param_4 + 0x10);
  if (param_2 <= lVar5) {
    param_2 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    (*param_5)();
    FUN_100b69f44();
    _swift_allocObject();
    _malloc_size();
    FUN_100b69edc();
    *(long *)(puVar3 + 0x10) = lVar5;
    *(undefined8 *)(puVar3 + 0x18) = extraout_x8_01;
    puVar6 = puVar3;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar4 = 0;
    FUN_100b673ec(0,param_6,param_7);
    _swift_arrayInitWithCopy(puVar3,puVar1,lVar5,uVar4);
  }
  else {
    if (puVar6 != param_4 || puVar1 + lVar5 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,lVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  FUN_100b69eac();
  FUN_100b69e70(puVar6);
  return;
}



/* Address: 0x100b69a60 | FUN_100b69a60 */

undefined * FUN_100b69a60(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b69b5c);
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
    puVar3 = &DAT_101044938;
    FUN_100b6730c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = (long)(puVar4 + -0x20) / 0x10 << 1;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f3c8d8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x10 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100b69b5c | FUN_100b69b5c */

void FUN_100b69b5c(ulong param_1,long param_2,ulong param_3,undefined *param_4,undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  char in_NG;
  char in_OV;
  size_t sVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  undefined *puVar5;
  long lVar6;
  
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100b69c14);
      (*pcVar3)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar6 = *(long *)(param_4 + 0x10);
  if (param_2 <= lVar6) {
    param_2 = lVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_100b6730c();
    FUN_100b69f18(param_2 << 4);
    _malloc_size();
    FUN_100b69f58();
    *(long *)(param_5 + 0x10) = lVar6;
    *(undefined8 *)(param_5 + 0x18) = extraout_x8_01;
    puVar5 = param_5;
  }
  puVar1 = puVar5 + 0x20;
  puVar2 = param_4 + 0x20;
  sVar4 = lVar6 * 0x10;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar2,sVar4);
  }
  else {
    if (puVar5 != param_4 || puVar2 + sVar4 <= puVar1) {
      _memmove(puVar1,puVar2,sVar4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  FUN_100b69eac();
  FUN_100b56e60(puVar5);
  return;
}



/* Address: 0x100b69c14 | FUN_100b69c14 */

void FUN_100b69c14(undefined *param_1,long param_2,ulong param_3,undefined *param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 extraout_x8_01;
  long lVar5;
  undefined *puVar6;
  
  puVar3 = param_1;
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b69cfc);
      (*pcVar2)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar5 = *(long *)(param_4 + 0x10);
  if (param_2 <= lVar5) {
    param_2 = lVar5;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    (*param_5)();
    FUN_100b69f44();
    _swift_allocObject();
    _malloc_size();
    FUN_100b69edc();
    *(long *)(puVar3 + 0x10) = lVar5;
    *(undefined8 *)(puVar3 + 0x18) = extraout_x8_01;
    puVar6 = puVar3;
  }
  puVar3 = puVar6 + 0x20;
  puVar1 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar4 = 0;
    (*param_6)(0);
    _swift_arrayInitWithCopy(puVar3,puVar1,lVar5,uVar4);
  }
  else {
    if (puVar6 != param_4 || puVar1 + lVar5 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,lVar5 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  FUN_100b69eac();
  FUN_100b69e70(puVar6);
  return;
}



/* Address: 0x100b69cfc | thunk_FUN_100b693f4 */

void thunk_FUN_100b693f4(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 * 8 <= param_3) {
    FUN_100b69d20(param_1);
    return;
  }
  return;
}



/* Address: 0x100b69d00 | thunk_FUN_100b69434 */

void thunk_FUN_100b69434(ulong param_1,long param_2,ulong param_3)

{
  if (param_3 != param_1 || param_1 + param_2 <= param_3) {
    FUN_100b69ebc(param_2);
    return;
  }
  return;
}



/* Address: 0x100b69d04 | thunk_FUN_100b69414 */

void thunk_FUN_100b69414(void)

{
  FUN_100b69414();
  return;
}



/* Address: 0x100b69d08 | FUN_100b69d08 */

void FUN_100b69d08(void)

{
  long unaff_x24;
  long unaff_x29;
  
  _swift_dynamicCast(unaff_x29 + -0x88,unaff_x29 + -0x60,unaff_x24 + 8);
  return;
}



/* Address: 0x100b69d20 | FUN_100b69d20 */

void FUN_100b69d20(void *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  size_t in_x9;
  
  _memmove(param_4,param_1,in_x9);
  return;
}



/* Address: 0x100b69d30 | FUN_100b69d30 */

void FUN_100b69d30(void)

{
  _swift_dynamicCast();
  return;
}



/* Address: 0x100b69d44 | FUN_100b69d44 */

void FUN_100b69d44(void)

{
  long unaff_x20;
  long unaff_x24;
  
  FUN_10000cbfc(unaff_x20 + *(long *)(unaff_x24 + 0x8d8),&stack0x00000010);
  return;
}



/* Address: 0x100b69d54 | FUN_100b69d54 */

void FUN_100b69d54(_StringGuts param_1,_StringGuts param_2)

{
  _StringComparisonResult unaff_w21;
  
  Swift::_stringCompareWithSmolCheck(param_1,param_2,unaff_w21);
  return;
}



/* Address: 0x100b69d64 | FUN_100b69d64 */

void FUN_100b69d64(undefined8 *param_1)

{
  *param_1 = 0x656c62756f64;
  param_1[1] = &DAT_e600000000000000;
  return;
}



/* Address: 0x100b69d7c | FUN_100b69d7c */

long FUN_100b69d7c(void)

{
  long unaff_x29;
  
  return unaff_x29 + -0x88;
}



/* Address: 0x100b69d8c | FUN_100b69d8c */

void FUN_100b69d8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x24;
  long unaff_x29;
  
  _swift_dynamicCast(param_1,unaff_x29 + -0x60,unaff_x24 + 8,param_4,0);
  return;
}



/* Address: 0x100b69d9c | FUN_100b69d9c */

void FUN_100b69d9c(void)

{
  return;
}



/* Address: 0x100b69dac | FUN_100b69dac */

void FUN_100b69dac(void)

{
  _objc_allocWithZone();
  return;
}


