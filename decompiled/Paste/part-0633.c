/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006be4d0 | FUN_1006be4d0 */

void FUN_1006be4d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70a08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70a08,&DAT_100ef7d10);
  DAT_100fdc540 = pTVar1;
  return;
}



/* Address: 0x1006be510 | thunk_FUN_100055a38 */

void thunk_FUN_100055a38(void)

{
  thunk_FUN_100055a38();
  return;
}



/* Address: 0x1006be514 | thunk_FUN_1000559f0 */

void thunk_FUN_1000559f0(void)

{
  thunk_FUN_1000559f0();
  return;
}



/* Address: 0x1006be518 | FUN_1006be518 */

undefined8 FUN_1006be518(void)

{
  return 0x19d;
}



/* Address: 0x1006be538 | FUN_1006be538 */

void FUN_1006be538(void)

{
  FUN_10085d78c(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1006be544 | FUN_1006be544 */

void FUN_1006be544(undefined8 *param_1,undefined8 param_2)

{
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006be5f4(&local_68,param_2,in_x4,in_x5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006be59c | FUN_1006be59c */

void FUN_1006be59c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006be5f4(&local_68,param_2,param_4,param_5);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006be5f4 | FUN_1006be5f4 */

void FUN_1006be5f4(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  String SVar2;
  
  uVar1 = 0x2d746e65746e6f43;
  thunk_FUN_10085c548();
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,param_2)
  ;
  if ((uVar1 & 1) == 0) {
    SVar2 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar2.str,SVar2.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(param_2);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  param_1[1] = 0xd000000000000011;
  *param_1 = 0x19d;
  param_1[3] = param_2;
  param_1[2] = 0x8000000100db01d0;
  return;
}



/* Address: 0x1006be708 | FUN_1006be708 */

void FUN_1006be708(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1006a5e30();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1006be72c | FUN_1006be72c */

undefined1  [16] FUN_1006be72c(long param_1,char param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  String SVar7;
  String SVar8;
  
  if (param_2 != '\x01') {
    SVar7 = Swift::CustomStringConvertible::get_description();
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar7,SVar8);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    auVar5._8_8_ = &DAT_e800000000000000;
    auVar5._0_8_ = 0x3d6567612d78616d;
    return auVar5;
  }
  uVar1 = 0x63696c627570;
  if (param_1 != 3) {
    uVar1 = 0x7665722d7473756d;
  }
  puVar2 = &DAT_e600000000000000;
  if (param_1 != 3) {
    puVar2 = (undefined1 *)0xef65746164696c61;
  }
  uVar3 = 0x65746176697270;
  if (param_1 != 2) {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e700000000000000;
  if (param_1 != 2) {
    puVar4 = puVar2;
  }
  uVar1 = 0x65726f74732d6f6e;
  if (param_1 != 0) {
    uVar1 = 0x65686361632d6f6e;
  }
  if (param_1 < 2) {
    puVar4 = &DAT_e800000000000000;
    uVar3 = uVar1;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1006be844 | FUN_1006be844 */

undefined8 FUN_1006be844(void)

{
  return 0;
}



/* Address: 0x1006be854 | FUN_1006be854 */

undefined8 FUN_1006be854(void)

{
  return 1;
}



/* Address: 0x1006be864 | FUN_1006be864 */

undefined8 FUN_1006be864(void)

{
  return 2;
}



/* Address: 0x1006be874 | FUN_1006be874 */

undefined8 FUN_1006be874(void)

{
  return 3;
}



/* Address: 0x1006be884 | FUN_1006be884 */

void FUN_1006be884(void)

{
  return;
}



/* Address: 0x1006be890 | FUN_1006be890 */

undefined8 FUN_1006be890(void)

{
  return 4;
}



/* Address: 0x1006be8a0 | FUN_1006be8a0 */

void FUN_1006be8a0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006be72c(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x1006be8ac | FUN_1006be8ac */

void FUN_1006be8ac(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006be930(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1006be8c8 | FUN_1006be8c8 */

undefined8 FUN_1006be8c8(void)

{
  return 5;
}



/* Address: 0x1006be8d8 | FUN_1006be8d8 */

undefined8 FUN_1006be8d8(void)

{
  return 6;
}



/* Address: 0x1006be8e8 | FUN_1006be8e8 */

undefined8 FUN_1006be8e8(void)

{
  return 7;
}



/* Address: 0x1006be8f8 | FUN_1006be8f8 */

undefined8 FUN_1006be8f8(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return param_1;
}



/* Address: 0x1006be92c | thunk_FUN_1006be930 */

void thunk_FUN_1006be930(void)

{
  FUN_1006be930();
  return;
}



/* Address: 0x1006be930 | FUN_1006be930 */

undefined1  [16] FUN_1006be930(ulong param_1,undefined1 *param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  String SVar5;
  undefined1 auVar6 [16];
  String SVar7;
  
  if (((ulong)param_3 & 0xff) == 0) {
    SVar5 = Swift::CustomStringConvertible::get_description();
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    _swift_bridgeObjectRelease(SVar5.bridgeObject);
    uVar3 = 0x3d6567612d78616d;
    puVar4 = &DAT_e800000000000000;
  }
  else if (((uint)param_3 & 0xff) == 1) {
    _swift_bridgeObjectRetain(param_2);
    uVar3 = param_1;
    puVar4 = param_2;
  }
  else if (-(long)(param_2 + (param_1 >= 4)) < 0 ==
           SCARRY8(~(ulong)(param_2 + (param_1 >= 4)),(ulong)(param_1 < 4))) {
    uVar3 = 0x65746176697270;
    if (param_1 != 2 || param_2 != (undefined1 *)0x0) {
      uVar3 = 0x63696c627570;
    }
    puVar4 = &DAT_e700000000000000;
    if (param_1 != 2 || param_2 != (undefined1 *)0x0) {
      puVar4 = &DAT_e600000000000000;
    }
    uVar2 = 0x65726f74732d6f6e;
    if (param_1 != 0 || param_2 != (undefined1 *)0x0) {
      uVar2 = 0x65686361632d6f6e;
    }
    if (-(long)(param_2 + (param_1 >= 2)) < 0 ==
        SCARRY8(~(ulong)(param_2 + (param_1 >= 2)),(ulong)(param_1 < 2))) {
      puVar4 = &DAT_e800000000000000;
      uVar3 = uVar2;
    }
  }
  else {
    puVar4 = (undefined1 *)0xec0000006d726f66;
    uVar3 = 0x736e6172742d6f6e;
    if (param_1 != 6 || param_2 != (undefined1 *)0x0) {
      puVar4 = (undefined1 *)0xe900000000000065;
      uVar3 = 0x6c626174756d6d69;
    }
    puVar1 = (undefined1 *)0xef65746164696c61;
    uVar2 = 0x7665722d7473756d;
    if (param_1 != 4 || param_2 != (undefined1 *)0x0) {
      puVar1 = (undefined1 *)0xef646e6174737265;
      uVar2 = 0x646e752d7473756d;
    }
    if (-(long)(param_2 + (param_1 >= 6)) < 0 ==
        SCARRY8(~(ulong)(param_2 + (param_1 >= 6)),(ulong)(param_1 < 6))) {
      uVar3 = uVar2;
      puVar4 = puVar1;
    }
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1006beb24 | FUN_1006beb24 */

void FUN_1006beb24(void)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_1006be930(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1006beb30 | FUN_1006beb30 */

undefined * FUN_1006beb30(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  undefined *puVar11;
  long lVar12;
  undefined1 uVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar16 = *(ulong *)(param_1 + 0x10);
  if (uVar16 == 0) {
    _swift_bridgeObjectRelease();
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1006bf7dc(0,uVar16,0);
    uVar18 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1006bede0);
        (*pcVar10)();
      }
      puVar1 = (undefined1 *)(param_1 + 0x20 + uVar18 * 0x40);
      uVar9 = *puVar1;
      uVar2 = *(undefined8 *)(puVar1 + 8);
      uVar6 = *(undefined8 *)(puVar1 + 0x10);
      uVar3 = *(undefined8 *)(puVar1 + 0x18);
      uVar7 = *(undefined8 *)(puVar1 + 0x20);
      uVar4 = *(undefined8 *)(puVar1 + 0x28);
      uVar8 = *(undefined8 *)(puVar1 + 0x30);
      lVar14 = *(long *)(puVar1 + 0x38);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1006bcff0(uVar3,uVar7,uVar4,uVar8);
      _swift_bridgeObjectRetain(lVar14);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1006bcff0(uVar3,uVar7,uVar4,uVar8);
      puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar12 = *(long *)(lVar14 + 0x10);
      if (lVar12 == 0) {
        _swift_bridgeObjectRelease(uVar6);
        FUN_1006bf814(uVar3,uVar7,uVar4,uVar8);
        _swift_bridgeObjectRelease(lVar14);
        puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        FUN_1006bf7f8(0,lVar12,0);
        pcVar17 = (char *)(lVar14 + 0x28);
        do {
          uVar19 = *(undefined8 *)(pcVar17 + -8);
          uVar13 = 2;
          if (*pcVar17 != '\x01') {
            uVar13 = 0;
          }
          uVar5 = *(ulong *)(puVar15 + 0x10);
          if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar5) {
            FUN_1006bf7f8(1 < *(ulong *)(puVar15 + 0x18),uVar5 + 1,1);
          }
          pcVar17 = pcVar17 + 0x10;
          *(ulong *)(puVar15 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar15 + uVar5 * 0x18 + 0x20) = uVar19;
          *(undefined8 *)(puVar15 + uVar5 * 0x18 + 0x28) = 0;
          puVar15[uVar5 * 0x18 + 0x30] = uVar13;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
        _swift_bridgeObjectRelease(uVar6);
        FUN_1006bf814(uVar3,uVar7,uVar4,uVar8);
        _swift_bridgeObjectRelease(lVar14);
      }
      uVar5 = *(ulong *)(puVar11 + 0x10);
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar5) {
        FUN_1006bf7dc(1 < *(ulong *)(puVar11 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar11 + 0x10) = uVar5 + 1;
      puVar11[uVar5 * 0x40 + 0x20] = uVar9;
      uVar18 = uVar18 + 1;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x28) = uVar2;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x30) = uVar6;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x38) = uVar3;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x40) = uVar7;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x48) = uVar4;
      *(undefined8 *)(puVar11 + uVar5 * 0x40 + 0x50) = uVar8;
      *(undefined **)(puVar11 + uVar5 * 0x40 + 0x58) = puVar15;
    } while (uVar18 != uVar16);
    _swift_bridgeObjectRelease();
  }
  return puVar11;
}



/* Address: 0x1006bede0 | FUN_1006bede0 */

undefined * FUN_1006bede0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  long lVar18;
  undefined1 *puVar19;
  
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar15 = *(ulong *)(param_1 + 0x10);
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease();
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1006bf7dc(0,uVar15,0);
    uVar16 = 0;
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006bf090);
        (*pcVar12)();
      }
      puVar19 = (undefined1 *)(param_1 + 0x20 + uVar16 * 0x40);
      uVar10 = *puVar19;
      uVar1 = *(undefined8 *)(puVar19 + 8);
      uVar6 = *(undefined8 *)(puVar19 + 0x10);
      uVar2 = *(undefined8 *)(puVar19 + 0x18);
      uVar7 = *(undefined8 *)(puVar19 + 0x20);
      uVar3 = *(undefined8 *)(puVar19 + 0x28);
      uVar8 = *(undefined8 *)(puVar19 + 0x30);
      lVar18 = *(long *)(puVar19 + 0x38);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1006bcff0(uVar2,uVar7,uVar3,uVar8);
      _swift_bridgeObjectRetain(lVar18);
      _swift_bridgeObjectRetain(uVar6);
      FUN_1006bcff0(uVar2,uVar7,uVar3,uVar8);
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      lVar14 = *(long *)(lVar18 + 0x10);
      if (lVar14 == 0) {
        _swift_bridgeObjectRelease(uVar6);
        FUN_1006bf814(uVar2,uVar7,uVar3,uVar8);
        _swift_bridgeObjectRelease(lVar18);
        puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      }
      else {
        FUN_1006bf7f8(0,lVar14,0);
        puVar19 = (undefined1 *)(lVar18 + 0x30);
        do {
          uVar4 = *(undefined8 *)(puVar19 + -0x10);
          uVar9 = *(undefined8 *)(puVar19 + -8);
          uVar11 = *puVar19;
          FUN_1005d7990(uVar4,uVar9,uVar11);
          uVar5 = *(ulong *)(puVar17 + 0x10);
          if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar5) {
            FUN_1006bf7f8(1 < *(ulong *)(puVar17 + 0x18),uVar5 + 1,1);
          }
          puVar19 = puVar19 + 0x18;
          *(ulong *)(puVar17 + 0x10) = uVar5 + 1;
          *(undefined8 *)(puVar17 + uVar5 * 0x18 + 0x20) = uVar4;
          *(undefined8 *)(puVar17 + uVar5 * 0x18 + 0x28) = uVar9;
          puVar17[uVar5 * 0x18 + 0x30] = uVar11;
          lVar14 = lVar14 + -1;
        } while (lVar14 != 0);
        _swift_bridgeObjectRelease(uVar6);
        FUN_1006bf814(uVar2,uVar7,uVar3,uVar8);
        _swift_bridgeObjectRelease(lVar18);
      }
      uVar5 = *(ulong *)(puVar13 + 0x10);
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar5) {
        FUN_1006bf7dc(1 < *(ulong *)(puVar13 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar13 + 0x10) = uVar5 + 1;
      puVar13[uVar5 * 0x40 + 0x20] = uVar10;
      uVar16 = uVar16 + 1;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x28) = uVar1;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x30) = uVar6;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x38) = uVar2;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x40) = uVar7;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x48) = uVar3;
      *(undefined8 *)(puVar13 + uVar5 * 0x40 + 0x50) = uVar8;
      *(undefined **)(puVar13 + uVar5 * 0x40 + 0x58) = puVar17;
    } while (uVar16 != uVar15);
    _swift_bridgeObjectRelease();
  }
  return puVar13;
}



/* Address: 0x1006bf090 | FUN_1006bf090 */

String FUN_1006bf090(char *param_1,undefined *param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  Index IVar5;
  uint uVar6;
  char *pcVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  char *pcVar16;
  _StringGuts _Var17;
  _StringGuts _Var18;
  _StringGuts _Var19;
  _StringGuts _Var20;
  _StringGuts _Var21;
  _StringGuts _Var22;
  String SVar23;
  String SVar24;
  String separator;
  String SVar25;
  undefined *local_120;
  undefined1 *puStack_118;
  undefined8 local_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  long local_a8;
  char local_a0 [8];
  _StringGuts local_98;
  _StringGuts local_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  
  IVar5.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x2e;
  uVar6 = 0;
  puVar8 = param_2;
  FUN_1001063f4(0x2e,0xe100000000000000,param_1);
  if ((uVar6 & 0xff) != 1) {
    SVar24.bridgeObject = param_2;
    SVar24.str = param_1;
    IVar5 = Swift::String::index(IVar5,SVar24);
    _swift_bridgeObjectRetain(param_2);
    FUN_1000102ac(IVar5.cmsgPointer.unknown,param_1,param_2);
    _swift_bridgeObjectRelease(param_2);
    SVar23.bridgeObject = param_1;
    SVar23.str = (char *)IVar5.cmsgPointer.unknown;
    _Var9.unknown = puVar8;
    SVar23 = Swift::String::__fromSubstring(SVar23);
    _swift_bridgeObjectRelease(puVar8);
    SVar24 = Swift::String::lowercased(SVar23);
    FUN_1006d331c(local_a0,SVar24.str);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    if (local_90.unknown != (undefined *)0x0) {
      lVar10 = *(long *)(param_3 + 0x10);
      if (lVar10 != 0) {
        puVar13 = (undefined8 *)(param_3 + 0x20);
        do {
          _Var18.unknown = (undefined *)puVar13[1];
          local_e0 = *puVar13;
          _Var22.unknown = (undefined *)puVar13[3];
          _Var20.unknown = (undefined *)puVar13[2];
          _Var19.unknown = (undefined *)puVar13[5];
          _Var17.unknown = (undefined *)puVar13[4];
          local_a8 = puVar13[7];
          _Var21.unknown = (undefined *)puVar13[6];
          puStack_d8 = _Var18.unknown;
          puStack_d0 = _Var20.unknown;
          local_c8 = _Var22.unknown;
          local_c0 = _Var17.unknown;
          puStack_b8 = _Var19.unknown;
          puStack_b0 = _Var21.unknown;
          if (local_a0[0] == '\n') {
            FUN_1006c01d4(&local_e0,&local_120);
LAB_1006bf27c:
            if ((((local_98.unknown != _Var18.unknown) || (local_90.unknown != _Var20.unknown)) &&
                (_Var9.unknown = _Var20.unknown,
                bVar4 = Swift::_stringCompareWithSmolCheck
                                  (local_98,local_90,(_StringComparisonResult)(__int8)_Var18.unknown
                                  ), !bVar4)) &&
               ((_Var18.unknown != &DAT_0000002a ||
                (_Var20.unknown != (undefined *)0xe100000000000000)))) {
              _Var9.unknown = (undefined *)0xe100000000000000;
              bVar4 = Swift::_stringCompareWithSmolCheck
                                (_Var18,_Var20,(_StringComparisonResult)0x2a);
              if (!bVar4) goto LAB_1006bf1cc;
            }
            if (_Var17.unknown == (undefined *)0x0) goto LAB_1006bf424;
            if (puStack_80 != (undefined *)0x0) {
              FUN_1006bcff0(local_88,puStack_80,local_78,puStack_70);
              FUN_1006bcff0(local_88,puStack_80,local_78,puStack_70);
              _swift_bridgeObjectRetain(_Var17.unknown);
              _Var9.unknown = _Var21.unknown;
              FUN_1006bcff0(_Var22.unknown,_Var17.unknown,_Var19.unknown);
              _swift_bridgeObjectRelease(puStack_70);
              if ((_Var22.unknown == local_88) && (_Var17.unknown == puStack_80)) {
                _swift_bridgeObjectRelease_n(_Var17.unknown,2);
                _swift_bridgeObjectRelease(puStack_80);
              }
              else {
                _Var9.unknown = puStack_80;
                bVar4 = Swift::_stringCompareWithSmolCheck
                                  (_Var22,_Var17,(_StringComparisonResult)(__int8)local_88);
                _swift_bridgeObjectRelease_n(_Var17.unknown,2);
                _swift_bridgeObjectRelease(puStack_80);
                if (!bVar4) {
                  _swift_bridgeObjectRelease(_Var21.unknown);
                  _Var9.unknown = puStack_70;
                  FUN_1006bf814(local_88,puStack_80,local_78);
                  goto LAB_1006bf1cc;
                }
              }
              _swift_bridgeObjectRelease(puStack_80);
              if ((_Var19.unknown == local_78) && (_Var21.unknown == puStack_70)) {
                _swift_bridgeObjectRelease(_Var21.unknown);
                _swift_bridgeObjectRelease(puStack_70);
LAB_1006bf424:
                FUN_1000fb4c4(local_a0,&DAT_100fdc548,&DAT_100c70b60);
                lVar3 = local_a8;
                puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
                lVar10 = *(long *)(local_a8 + 0x10);
                if (lVar10 == 0) {
                  FUN_1006c0208(&local_e0);
                  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
                }
                else {
                  pcVar7 = (char *)0x0;
                  FUN_1006bf7c0(0,lVar10);
                  pcVar16 = (char *)(lVar3 + 0x30);
                  do {
                    puVar11 = *(undefined **)(pcVar16 + -0x10);
                    if (*pcVar16 == '\0') {
                      local_120 = (undefined *)0x3d6567612d78616d;
                      puStack_118 = &DAT_e800000000000000;
                      SVar23 = Swift::CustomStringConvertible::get_description();
                      SVar25.bridgeObject = _Var9.unknown;
                      SVar25.str = pcVar7;
                      Swift::String::append(SVar23,SVar25);
                      _swift_bridgeObjectRelease(SVar23.bridgeObject);
                      puVar12 = local_120;
                      puVar15 = puStack_118;
                    }
                    else {
                      puVar14 = *(undefined1 **)(pcVar16 + -8);
                      if (*pcVar16 == '\x01') {
                        _swift_bridgeObjectRetain(puVar14);
                        puVar12 = puVar11;
                        puVar15 = puVar14;
                      }
                      else if (-(long)(puVar14 + (puVar11 >= (undefined *)0x4)) < 0 ==
                               SCARRY8(~(ulong)(puVar14 + (puVar11 >= (undefined *)0x4)),
                                       (ulong)(puVar11 < (undefined *)0x4))) {
                        if (-(long)(puVar14 + (puVar11 >= (undefined *)0x2)) < 0 ==
                            SCARRY8(~(ulong)(puVar14 + (puVar11 >= (undefined *)0x2)),
                                    (ulong)(puVar11 < (undefined *)0x2))) {
                          puVar12 = (undefined *)0x65726f74732d6f6e;
                          puVar15 = &DAT_e800000000000000;
                          if (puVar11 != (undefined *)0x0 || puVar14 != (undefined1 *)0x0) {
                            puVar12 = (undefined *)0x65686361632d6f6e;
                          }
                        }
                        else if (puVar11 == (undefined *)0x2 && puVar14 == (undefined1 *)0x0) {
                          puVar12 = (undefined *)0x65746176697270;
                          puVar15 = &DAT_e700000000000000;
                        }
                        else {
                          puVar12 = (undefined *)0x63696c627570;
                          puVar15 = &DAT_e600000000000000;
                        }
                      }
                      else if (-(long)(puVar14 + (puVar11 >= (undefined *)0x6)) < 0 ==
                               SCARRY8(~(ulong)(puVar14 + (puVar11 >= (undefined *)0x6)),
                                       (ulong)(puVar11 < (undefined *)0x6))) {
                        if (puVar11 == (undefined *)0x4 && puVar14 == (undefined1 *)0x0) {
                          puVar12 = (undefined *)0x7665722d7473756d;
                          puVar15 = (undefined1 *)0xef65746164696c61;
                        }
                        else {
                          puVar12 = (undefined *)0x646e752d7473756d;
                          puVar15 = (undefined1 *)0xef646e6174737265;
                        }
                      }
                      else if (puVar11 == (undefined *)0x6 && puVar14 == (undefined1 *)0x0) {
                        puVar12 = (undefined *)0x736e6172742d6f6e;
                        puVar15 = (undefined1 *)0xec0000006d726f66;
                      }
                      else {
                        puVar12 = (undefined *)0x6c626174756d6d69;
                        puVar15 = (undefined1 *)0xe900000000000065;
                      }
                    }
                    uVar1 = *(ulong *)(puVar8 + 0x10);
                    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
                      pcVar7 = &DAT_00000001;
                      FUN_1006bf7c0(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1);
                    }
                    pcVar16 = pcVar16 + 0x18;
                    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
                    *(undefined **)(puVar8 + uVar1 * 0x10 + 0x20) = puVar12;
                    *(undefined1 **)(puVar8 + uVar1 * 0x10 + 0x28) = puVar15;
                    lVar10 = lVar10 + -1;
                  } while (lVar10 != 0);
                  FUN_1006c0208(&local_e0);
                }
                local_120 = puVar8;
                FUN_1000f7830(&DAT_100fdc3a8,&DAT_100c71a80);
                FUN_1006b7a54();
                separator.bridgeObject = &SUB_e200000000000000;
                separator.str = (char *)0x202c;
                SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
                _swift_bridgeObjectRelease(puVar8);
                return SVar23;
              }
              _Var9.unknown = puStack_70;
              bVar4 = Swift::_stringCompareWithSmolCheck
                                (_Var19,_Var21,(_StringComparisonResult)(__int8)local_78);
              _swift_bridgeObjectRelease(_Var21.unknown);
              _swift_bridgeObjectRelease(puStack_70);
              if (bVar4) goto LAB_1006bf424;
            }
          }
          else {
            cVar2 = (char)local_e0;
            if ((char)local_e0 == '\n') {
              FUN_1006c01d4(&local_e0,&local_120);
              goto LAB_1006bf27c;
            }
            FUN_1006c01d4(&local_e0,&local_120);
            if (local_a0[0] == cVar2) goto LAB_1006bf27c;
          }
LAB_1006bf1cc:
          FUN_1006c0208(&local_e0);
          puVar13 = puVar13 + 8;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      FUN_1000fb4c4(local_a0,&DAT_100fdc548,&DAT_100c70b60);
    }
  }
  return (String)ZEXT816(0);
}



/* Address: 0x1006bf6d8 | FUN_1006bf6d8 */

undefined1  [16] FUN_1006bf6d8(char *param_1,void *param_2,Substring param_3,Index param_4)

{
  Character CVar1;
  bool bVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  Character CVar5;
  undefined1 auVar6 [16];
  
  CVar1.bridgeObject = param_2;
  CVar1.str = param_1;
  while( true ) {
    if (((ulong)param_4.cmsgPointer.unknown ^ (ulong)param_3.unknown) < 0x4000) {
      param_4.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
      uVar4 = 1;
      goto LAB_1006bf7a0;
    }
    param_4 = Swift::Substring::index(param_4,param_3);
    CVar5 = Swift::Substring::get_subscript(param_4,param_3);
    _Var3.unknown = CVar5.bridgeObject;
    if (CVar5 == CVar1) break;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar5.str,_Var3,(_StringComparisonResult)(__int8)param_1);
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (bVar2) {
LAB_1006bf790:
      uVar4 = 0;
LAB_1006bf7a0:
      auVar6._8_8_ = uVar4;
      auVar6._0_8_ = param_4.cmsgPointer.unknown;
      return auVar6;
    }
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  goto LAB_1006bf790;
}



/* Address: 0x1006bf7c0 | FUN_1006bf7c0 */

void FUN_1006bf7c0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bf8d0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf7dc | FUN_1006bf7dc */

void FUN_1006bf7dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bf9d8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf7f8 | FUN_1006bf7f8 */

void FUN_1006bf7f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bfae0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf814 | FUN_1006bf814 */

void FUN_1006bf814(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  return;
}



/* Address: 0x1006bf844 | FUN_1006bf844 */

void FUN_1006bf844(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bfbf8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf860 | FUN_1006bf860 */

void FUN_1006bf860(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bfd18();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf87c | FUN_1006bf87c */

void FUN_1006bf87c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bfe20();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf898 | FUN_1006bf898 */

void FUN_1006bf898(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006bff28();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf8b4 | FUN_1006bf8b4 */

void FUN_1006bf8b4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1006c0058();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1006bf8d0 | FUN_1006bf8d0 */

undefined * FUN_1006bf8d0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bf9d8);
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
    puVar3 = &DAT_100fdbcb0;
    FUN_1000f7830(&DAT_100fdbcb0,&DAT_100c70c60);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bf9d8 | FUN_1006bf9d8 */

undefined * FUN_1006bf9d8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bfae0);
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
    puVar3 = &DAT_100fdc578;
    FUN_1000f7830(&DAT_100fdc578,&DAT_100c70c70);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef8078);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bfae0 | FUN_1006bfae0 */

undefined * FUN_1006bfae0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bfbf8);
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
    puVar3 = &DAT_100fdc570;
    FUN_1000f7830(&DAT_100fdc570,&DAT_100c70c68);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ef7f68);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bfbf8 | FUN_1006bfbf8 */

undefined * FUN_1006bfbf8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bfd18);
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
    puVar3 = &DAT_100fdbc90;
    FUN_1000f7830(&DAT_100fdbc90,&DAT_100c70c40);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100efa560);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bfd18 | FUN_1006bfd18 */

undefined * FUN_1006bfd18(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bfe20);
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
    puVar3 = &DAT_100fdbc88;
    FUN_1000f7830(&DAT_100fdbc88,&DAT_100c6f4b0);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bfe20 | FUN_1006bfe20 */

undefined * FUN_1006bfe20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006bff28);
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
    puVar3 = &DAT_100fdc568;
    FUN_1000f7830(&DAT_100fdc568,&DAT_100c70c58);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f07180);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006bff28 | FUN_1006bff28 */

undefined * FUN_1006bff28(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c0058);
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
    puVar3 = &DAT_100fdc558;
    FUN_1000f7830(&DAT_100fdc558,&DAT_100c70c48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fdc560;
    FUN_1000f7830(&DAT_100fdc560,&DAT_100c70c50);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1006c0058 | FUN_1006c0058 */

undefined * FUN_1006c0058(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  UUID UVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c01d4);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fdbc98;
    FUN_1000f7830(&DAT_100fdbc98,&DAT_100c6f4c0);
    UVar5 = Foundation::UUID::typeMetadataAccessor();
    lVar11 = *(long *)(*(long *)(UVar5.unknown + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c01cc);
      (*pcVar3)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006c01d0);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar9 / lVar11;
    }
    *(ulong *)(puVar4 + 0x10) = uVar10;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(UVar5.unknown + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar10,UVar5.unknown);
  }
  else {
    if ((puVar4 < param_4) ||
       (puVar1 + *(long *)(*(long *)(UVar5.unknown + -8) + 0x48) * uVar10 <= puVar6)) {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar10);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x1006c01d4 | FUN_1006c01d4 */

undefined8 FUN_1006c01d4(undefined8 param_1,undefined8 param_2)

{
  FUN_1006c02d4(param_2,param_1,&DAT_100ef8078);
  return param_2;
}



/* Address: 0x1006c0208 | FUN_1006c0208 */

undefined8 FUN_1006c0208(undefined8 param_1)

{
  FUN_1006c0298(param_1,&DAT_100ef8078);
  return param_1;
}



/* Address: 0x1006c0234 | FUN_1006c0234 */

undefined1  [16] FUN_1006c0234(void)

{
  return ZEXT816(0x100ef7e58);
}



/* Address: 0x1006c0244 | FUN_1006c0244 */

void FUN_1006c0244(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006c0258 | FUN_1006c0258 */

undefined1  [16] FUN_1006c0258(void)

{
  return ZEXT816(0x100ef7ef0);
}



/* Address: 0x1006c0268 | FUN_1006c0268 */

undefined1  [16] FUN_1006c0268(void)

{
  return ZEXT816(0x100ef7f68);
}



/* Address: 0x1006c0278 | thunk_FUN_1005d7a18 */

void thunk_FUN_1005d7a18(void)

{
  FUN_1005d7a18();
  return;
}



/* Address: 0x1006c027c | thunk_FUN_1005d7a80 */

void thunk_FUN_1005d7a80(void)

{
  FUN_1005d7a80();
  return;
}



/* Address: 0x1006c0280 | thunk_FUN_100342dc0 */

int thunk_FUN_100342dc0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1006c0284 | thunk_FUN_100342e08 */

void thunk_FUN_100342e08(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    param_1[1] = 0;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1006c0288 | FUN_1006c0288 */

undefined1  [16] FUN_1006c0288(void)

{
  return ZEXT816(0x100ef8000);
}



/* Address: 0x1006c0298 | FUN_1006c0298 */

void FUN_1006c0298(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  if (*(long *)(param_1 + 0x20) != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x1006c02d4 | FUN_1006c02d4 */

undefined1 * FUN_1006c02d4(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  lVar1 = *(long *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar2;
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar1;
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    _swift_bridgeObjectRetain(lVar1);
    _swift_bridgeObjectRetain(uVar2);
  }
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1006c035c | FUN_1006c035c */

undefined1 * FUN_1006c035c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    if (*(long *)(param_2 + 0x20) == 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x18);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      *(undefined8 *)(param_1 + 0x20) = uVar3;
      *(undefined8 *)(param_1 + 0x18) = uVar1;
    }
    else {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = uVar1;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
    }
  }
  else if (*(long *)(param_2 + 0x20) == 0) {
    FUN_1000fb4c4(param_1 + 0x18,&DAT_100fdc550,&DAT_100c70c08);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    uVar4 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
    *(undefined8 *)(param_1 + 0x28) = uVar1;
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar2);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar1);
  }
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006c0488 | FUN_1006c0488 */

void FUN_1006c0488(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1006c049c | FUN_1006c049c */

undefined1 * FUN_1006c049c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(long *)(param_1 + 0x20) = lVar3;
      _swift_bridgeObjectRelease();
      uVar2 = *(undefined8 *)(param_2 + 0x30);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = uVar2;
      _swift_bridgeObjectRelease(uVar1);
      goto LAB_1006c0520;
    }
    FUN_1000fb4c4(param_1 + 0x18,&DAT_100fdc550,&DAT_100c70c08);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
LAB_1006c0520:
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1006c0540 | FUN_1006c0540 */

undefined1  [16] FUN_1006c0540(void)

{
  return ZEXT816(0x100ef8078);
}



/* Address: 0x1006c0550 | thunk_FUN_100342e08 */

void thunk_FUN_100342e08(void)

{
  thunk_FUN_100342e08();
  return;
}


