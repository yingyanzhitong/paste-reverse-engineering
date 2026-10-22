/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100627dec | FUN_100627dec */

void FUN_100627dec(void)

{
  FUN_100627e04(FUN_10062b0ec);
  return;
}



/* Address: 0x100627df8 | FUN_100627df8 */

void FUN_100627df8(void)

{
  FUN_100627e04(FUN_10062b190);
  return;
}



/* Address: 0x100627e04 | FUN_100627e04 */

void FUN_100627e04(code *param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_1)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100627e44 | FUN_100627e44 */

undefined1  [16] FUN_100627e44(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + 0x48);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100627ea0);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x50) + 8);
    _swift_unknownObjectRetain(lVar3);
    lVar2 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + 8);
    lVar3 = lVar2;
  }
  _swift_unknownObjectRetain(lVar2);
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x100627ea0 | FUN_100627ea0 */

void FUN_100627ea0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x38);
  uVar3 = uVar1;
  _swift_getObjectType(uVar1);
  _swift_unknownObjectRetain(uVar1);
  FUN_100642338(uVar3,uVar2);
  _swift_unknownObjectRelease(uVar1);
  FUN_100631244();
  return;
}



/* Address: 0x100627f08 | FUN_100627f08 */

undefined1  [16] FUN_100627f08(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined **ppuVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x40);
  ppuVar4 = *(undefined ***)(unaff_x20 + 0x48);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    FUN_10063c734();
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined ***)(lVar1 + 0x30) = ppuVar4;
    *(undefined2 *)(lVar1 + 0x38) = 0;
    uVar2 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined ***)(lVar1 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar1 + 0x20) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(lVar1 + 0x10) = uVar2;
    _swift_retain();
    _swift_unknownObjectRetain(uVar2);
    ppuVar4 = &PTR_PTR_100eeeed8;
    lVar3 = 0;
  }
  _swift_unknownObjectRetain(lVar3);
  auVar5._8_8_ = ppuVar4;
  auVar5._0_8_ = lVar1;
  return auVar5;
}



/* Address: 0x100627fb8 | FUN_100627fb8 */

undefined1  [16] FUN_100627fb8(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      auVar3._1_7_ = 0;
      auVar3[0] = param_1 != 0 || param_2 != 0x8000000000000000;
      auVar3._8_8_ = 0x8000000000000000;
      return auVar3;
    }
    param_2 = param_2 & 0x3fffffffffffffff | 0x4000000000000000;
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x100627ff0 | FUN_100627ff0 */

void FUN_100627ff0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_58;
  
  uVar4 = (uint)(param_2 >> 0x3e);
  uVar5 = param_1;
  uVar6 = param_2;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      uVar6 = param_2 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar5 = (ulong)(param_1 != 0 || param_2 != 0x8000000000000000);
      uVar6 = 0x8000000000000000;
    }
  }
  uVar2 = param_4;
  _swift_getObjectType(param_4);
  FUN_1005dfcb0(param_1,param_2);
  FUN_100630400(param_4,param_6,param_7,uVar5,uVar6,param_3,uVar2,param_5);
  if (((uint)param_6 & 0xff) == 1) {
    local_58 = param_4;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      _swift_willThrowTypedImpl
                (&local_58,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_1005dfc80(param_1,param_2);
  }
  else {
    FUN_1005dfc80(param_1,param_2);
  }
  return;
}



/* Address: 0x100628144 | FUN_100628144 */

void FUN_100628144(void)

{
  long unaff_x20;
  
  FUN_1005dfc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100628180 | FUN_100628180 */

void FUN_100628180(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  
  puVar3 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(param_2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_2 + -8) + 0x20))(puVar3);
  puVar1 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,param_2);
  if ((int)puVar1 == 1) {
    lVar2 = *(long *)(param_2 + 0x18);
    (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_3,puVar3,lVar2);
    FUN_1005c64f0(param_3,lVar2,*(undefined8 *)(param_2 + 0x20));
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x20))(param_1,puVar3);
  }
  return;
}



/* Address: 0x100628250 | FUN_100628250 */

void FUN_100628250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar3;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar1 & 1) != 0) {
    _swift_getObjectType(param_1);
    FUN_100630bd0(param_1,param_3);
    return;
  }
  puVar2 = &DAT_100eed1f0;
  _swift_allocObject(&DAT_100eed1f0,0x30,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  pcVar5 = *(code **)(lVar4 + 0x18);
  _swift_retain(param_3);
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  (*pcVar5)(thunk_FUN_100631948,puVar2,uVar3,lVar4);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100628340 | FUN_100628340 */

void FUN_100628340(undefined *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  
  puVar8 = *(undefined **)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  puVar2 = puVar8;
  (**(code **)(lVar9 + 0x10))();
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = &DAT_100eed218;
    _swift_allocObject(&DAT_100eed218,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined **)(puVar3 + 0x18) = param_1;
    *(undefined **)(puVar3 + 0x20) = param_2;
    *(long *)(puVar3 + 0x28) = param_3;
    pcVar10 = *(code **)(lVar9 + 0x18);
    _swift_retain(param_3);
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    (*pcVar10)(thunk_FUN_1005dfcf0,puVar3,puVar8,lVar9);
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      puVar8 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + 0x10);
      puVar2 = puVar8;
      _swift_retain();
      while (puVar3 = puVar8, puVar3 != (undefined *)0x0) {
        if (puVar3 == *(undefined **)(unaff_x20 + 0x18)) {
          _swift_release();
          puVar2 = puVar3;
          break;
        }
                    /* WARNING: Load size is inaccurate */
        if ((puVar3[0x28] == param_1 && puVar3[0x30] == param_2) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)puVar3[0x28],(_StringGuts)puVar3[0x30],
                               (_StringComparisonResult)(__int8)param_1), bVar1)) {
          FUN_1006313ac(puVar3,param_3);
          goto LAB_100628574;
        }
        puVar8 = *(undefined **)(puVar3 + 0x10);
        _swift_retain(puVar8);
        _swift_release();
        puVar2 = puVar3;
      }
    }
    FUN_1005dfcfc();
    puVar8 = &DAT_100eed960;
    uVar7 = 0;
    _swift_allocError(&DAT_100eed960,puVar2,0,0);
    *puVar2 = 1;
    if (param_3 == 0) {
      _swift_errorRelease(puVar8);
      return;
    }
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar9 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar6 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar5 & 1) != 0) {
      puVar2 = puVar8;
      thunk_FUN_1005de8f4(puVar8);
      FUN_1006486f8();
      _swift_errorRelease(puVar8);
      FUN_100004550(puVar2,lVar6);
      _swift_bridgeObjectRelease(uVar7);
      return;
    }
    puVar3 = &DAT_100eed240;
    _swift_allocObject(&DAT_100eed240,0x20,7);
    *(long *)(puVar3 + 0x10) = param_3;
    *(undefined **)(puVar3 + 0x18) = puVar8;
    pcVar10 = *(code **)(lVar9 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar8);
    (*pcVar10)(thunk_FUN_10061dfe0,puVar3,uVar4,lVar9);
    _swift_errorRelease(puVar8);
  }
LAB_100628574:
  _swift_release(puVar3);
  return;
}



/* Address: 0x10062858c | FUN_10062858c */

void FUN_10062858c(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  lVar10 = *(long *)(param_1 + 0x38);
  lVar9 = lVar10;
  if (lVar10 == 0) {
    lVar9 = *(long *)(param_1 + 0x48);
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006287b8);
      (*pcVar2)();
    }
    _swift_unknownObjectRetain(lVar9);
  }
  lVar3 = lVar9;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  _swift_unknownObjectRetain(lVar10);
  _swift_retain(param_1);
  _swift_unknownObjectRelease(lVar9);
  if (lVar3 == 0) {
    if (param_2 == 0) goto LAB_100628780;
    if (DAT_100fd7168 != -1) {
      _swift_once(&DAT_100fd7168,FUN_10061da40);
    }
    uVar7 = DAT_101057c08;
    uVar5 = *(ulong *)(param_2 + 0x20);
    lVar9 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar10 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar6 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar7);
      FUN_1006486f8();
      _swift_release(param_1);
      FUN_100004550(uVar7,lVar10);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar8 = &DAT_100eed268;
    _swift_allocObject(&DAT_100eed268,0x20,7);
    *(long *)(puVar8 + 0x10) = param_2;
    *(undefined8 *)(puVar8 + 0x18) = uVar7;
    pcVar11 = *(code **)(lVar9 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar7);
    pcVar2 = thunk_FUN_10061dfe0;
  }
  else {
    uVar5 = *(ulong *)(unaff_x20 + 0x30);
    lVar9 = *(long *)(unaff_x20 + 0x38);
    _swift_getObjectType();
    uVar6 = uVar5;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      uVar4 = uVar7;
      _swift_getObjectType(uVar7);
      _swift_unknownObjectRetain(uVar7);
      FUN_100642338(uVar4,uVar1);
      _swift_unknownObjectRelease(uVar7);
      FUN_100628b98(param_2);
      goto LAB_100628780;
    }
    puVar8 = &DAT_100eed290;
    _swift_allocObject(&DAT_100eed290,0x20,7);
    *(long *)(puVar8 + 0x10) = param_1;
    *(long *)(puVar8 + 0x18) = param_2;
    pcVar11 = *(code **)(lVar9 + 0x18);
    _swift_retain(param_2);
    _swift_retain(param_1);
    pcVar2 = FUN_1006319c0;
  }
  (*pcVar11)(pcVar2,puVar8,uVar5,lVar9);
  _swift_release(puVar8);
LAB_100628780:
  _swift_release(param_1);
  return;
}



/* Address: 0x1006287b8 | FUN_1006287b8 */

void FUN_1006287b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _swift_getObjectType();
  FUN_100630bd0(param_1,param_3,param_4,uVar1,param_2);
  return;
}



/* Address: 0x100628800 | FUN_100628800 */

void FUN_100628800(undefined *param_1,undefined *param_2,long param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  
  puVar3 = param_1;
  if (*(long *)(param_4 + 0x10) != 0) {
    puVar9 = *(undefined **)(*(long *)(param_4 + 0x10) + 0x10);
    puVar3 = puVar9;
    _swift_retain();
    while (puVar4 = puVar9, puVar4 != (undefined *)0x0) {
      if (puVar4 == *(undefined **)(param_4 + 0x18)) {
        _swift_release();
        puVar3 = puVar4;
        break;
      }
                    /* WARNING: Load size is inaccurate */
      if ((puVar4[0x28] == param_1 && puVar4[0x30] == param_2) ||
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)puVar4[0x28],(_StringGuts)puVar4[0x30],
                             (_StringComparisonResult)(__int8)param_1), bVar2)) {
        FUN_1006313ac(puVar4,param_3);
        goto LAB_1006289b4;
      }
      puVar9 = *(undefined **)(puVar4 + 0x10);
      _swift_retain(puVar9);
      _swift_release();
      puVar3 = puVar4;
    }
  }
  FUN_1005dfcfc();
  puVar9 = &DAT_100eed960;
  uVar8 = 0;
  _swift_allocError(&DAT_100eed960,puVar3,0,0);
  *puVar3 = 1;
  if (param_3 == 0) {
    _swift_errorRelease(puVar9);
    return;
  }
  uVar5 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  _swift_getObjectType();
  uVar6 = uVar5;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar6 & 1) != 0) {
    puVar3 = puVar9;
    thunk_FUN_1005de8f4(puVar9);
    FUN_1006486f8();
    _swift_errorRelease(puVar9);
    FUN_100004550(puVar3,lVar7);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
  puVar4 = &DAT_100eed2b8;
  _swift_allocObject(&DAT_100eed2b8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined **)(puVar4 + 0x18) = puVar9;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  _swift_errorRetain(puVar9);
  (*pcVar10)(thunk_FUN_10061dfe0,puVar4,uVar5,lVar1);
  _swift_errorRelease(puVar9);
LAB_1006289b4:
  _swift_release(puVar4);
  return;
}



/* Address: 0x1006289cc | FUN_1006289cc */

void FUN_1006289cc(undefined *param_1,undefined *param_2,undefined *param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  
  puVar3 = param_1;
  if (*(long *)(param_1 + 0x10) != 0) {
    puVar9 = *(undefined **)(*(long *)(param_1 + 0x10) + 0x10);
    puVar3 = puVar9;
    _swift_retain();
    while (puVar4 = puVar9, puVar4 != (undefined *)0x0) {
      if (puVar4 == *(undefined **)(param_1 + 0x18)) {
        _swift_release();
        puVar3 = puVar4;
        break;
      }
                    /* WARNING: Load size is inaccurate */
      if ((puVar4[0x28] == param_2 && puVar4[0x30] == param_3) ||
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)puVar4[0x28],(_StringGuts)puVar4[0x30],
                             (_StringComparisonResult)(__int8)param_2), bVar2)) {
        FUN_1006313ac(puVar4,param_4);
        goto LAB_100628b80;
      }
      puVar9 = *(undefined **)(puVar4 + 0x10);
      _swift_retain(puVar9);
      _swift_release();
      puVar3 = puVar4;
    }
  }
  FUN_1005dfcfc();
  puVar9 = &DAT_100eed960;
  uVar8 = 0;
  _swift_allocError(&DAT_100eed960,puVar3,0,0);
  *puVar3 = 1;
  if (param_4 == 0) {
    _swift_errorRelease(puVar9);
    return;
  }
  uVar5 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar6 = uVar5;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar6 & 1) != 0) {
    puVar3 = puVar9;
    thunk_FUN_1005de8f4(puVar9);
    FUN_1006486f8();
    _swift_errorRelease(puVar9);
    FUN_100004550(puVar3,lVar7);
    _swift_bridgeObjectRelease(uVar8);
    return;
  }
  puVar4 = &DAT_100eedda8;
  _swift_allocObject(&DAT_100eedda8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined **)(puVar4 + 0x18) = puVar9;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  _swift_errorRetain(puVar9);
  (*pcVar10)(thunk_FUN_10061dfe0,puVar4,uVar5,lVar1);
  _swift_errorRelease(puVar9);
LAB_100628b80:
  _swift_release(puVar4);
  return;
}



/* Address: 0x100628b98 | FUN_100628b98 */

void FUN_100628b98(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  if ((*(byte *)(unaff_x20 + 0x59) & 1) != 0) {
    if (param_1 == 0) {
      return;
    }
    lVar7 = param_1;
    FUN_100632008();
    puVar1 = &DAT_100eeb730;
    uVar6 = 0;
    _swift_allocError(&DAT_100eeb730,lVar7,0,0);
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar7 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar8 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar5 = &DAT_100eedb78;
      _swift_allocObject(&DAT_100eedb78,0x20,7);
      *(long *)(puVar5 + 0x10) = param_1;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      pcVar9 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar1);
      (*pcVar9)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar7);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar8);
      _swift_bridgeObjectRelease(uVar6);
    }
    _swift_errorRelease(puVar1);
    return;
  }
  *(undefined1 *)(unaff_x20 + 0x59) = 1;
  lVar8 = *(long *)(unaff_x20 + 0x38);
  lVar7 = lVar8;
  if (lVar8 == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x48);
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100628d48);
      (*pcVar9)();
    }
    _swift_unknownObjectRetain(lVar7);
  }
  lVar4 = lVar7;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x100628d44);
    (*pcVar9)();
  }
  pcVar9 = *(code **)(lVar4 + 0x10);
  _swift_unknownObjectRetain(lVar8);
  (*pcVar9)();
  _swift_unknownObjectRelease(lVar7);
  return;
}



/* Address: 0x100628d48 | FUN_100628d48 */

void FUN_100628d48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  uVar3 = uVar1;
  _swift_getObjectType(uVar1);
  _swift_unknownObjectRetain(uVar1);
  FUN_100642338(uVar3,uVar2);
  _swift_unknownObjectRelease(uVar1);
  FUN_100628b98(param_2);
  return;
}



/* Address: 0x100628db4 | FUN_100628db4 */

void FUN_100628db4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  FUN_100630ae8(param_3,param_2,uVar1,param_4);
  pcVar3 = FUN_1005dff00;
  uVar1 = param_3;
  uVar2 = param_2;
  FUN_100630334();
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(pcVar3);
  FUN_1005dff14(param_3,param_2);
  return;
}



/* Address: 0x100628e4c | FUN_100628e4c */

undefined1  [16] FUN_100628e4c(code *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  code *pcVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  pcVar1 = param_1;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    pcVar4 = *(code **)(*(long *)(unaff_x20 + 0x10) + 0x10);
    pcVar1 = pcVar4;
    _swift_retain();
    while (pcVar2 = pcVar4, pcVar2 != (code *)0x0) {
      if (pcVar2 == *(code **)(unaff_x20 + 0x18)) {
        _swift_release();
        pcVar1 = pcVar2;
        break;
      }
      pcVar1 = pcVar2;
      (*param_1)();
      if (((ulong)pcVar1 & 1) != 0) {
        uVar3 = 0;
        goto LAB_100628ef0;
      }
      pcVar4 = *(code **)(pcVar2 + 0x10);
      _swift_retain(pcVar4);
      _swift_release();
      pcVar1 = pcVar2;
    }
  }
  FUN_1005dfcfc();
  pcVar2 = (code *)&DAT_100eed960;
  _swift_allocError(&DAT_100eed960,pcVar1,0,0);
  uVar3 = 1;
  *pcVar1 = (code)0x1;
LAB_100628ef0:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = pcVar2;
  return auVar5;
}



/* Address: 0x100628f10 | FUN_100628f10 */

void FUN_100628f10(undefined *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    puVar5 = *(undefined **)(*(long *)(param_2 + 0x10) + 0x10);
    param_1 = puVar5;
    _swift_retain();
    while (puVar2 = puVar5, puVar2 != (undefined *)0x0) {
      if (puVar2 == *(undefined **)(param_2 + 0x18)) {
        _swift_release();
        param_1 = puVar2;
        break;
      }
                    /* WARNING: Load size is inaccurate */
      if ((puVar2[0x28] == param_3 && puVar2[0x30] == param_4) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)puVar2[0x28],(_StringGuts)puVar2[0x30],
                             (_StringComparisonResult)(__int8)param_3), bVar1)) {
        uVar6 = 0;
        goto LAB_100628fd4;
      }
      puVar5 = *(undefined **)(puVar2 + 0x10);
      _swift_retain(puVar5);
      _swift_release();
      param_1 = puVar2;
    }
  }
  FUN_1005dfcfc();
  puVar2 = &DAT_100eed960;
  _swift_allocError(&DAT_100eed960,param_1,0,0);
  uVar6 = 1;
  *param_1 = 1;
LAB_100628fd4:
  pcVar4 = FUN_1005dff00;
  puVar5 = puVar2;
  uVar3 = uVar6;
  FUN_100630334(puVar2,uVar6,FUN_1005dff00);
  FUN_1006486f8();
  FUN_100004550(puVar5,uVar3);
  _swift_bridgeObjectRelease(pcVar4);
  FUN_1005dff14(puVar2,uVar6);
  return;
}



/* Address: 0x100629028 | FUN_100629028 */

undefined1  [16] FUN_100629028(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    puVar3 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + 0x10);
    param_1 = puVar3;
    _swift_retain();
    while (puVar1 = puVar3, puVar1 != (undefined *)0x0) {
      if (puVar1 == *(undefined **)(unaff_x20 + 0x18)) {
        _swift_release();
        param_1 = puVar1;
        break;
      }
      puVar3 = puVar1;
      FUN_10062947c(puVar1,param_2,param_3);
      if (((ulong)puVar3 & 1) != 0) {
        uVar2 = 0;
        goto LAB_1006290d0;
      }
      puVar3 = *(undefined **)(puVar1 + 0x10);
      _swift_retain(puVar3);
      _swift_release();
      param_1 = puVar1;
    }
  }
  FUN_1005dfcfc();
  puVar1 = &DAT_100eed960;
  _swift_allocError(&DAT_100eed960,param_1,0,0);
  uVar2 = 1;
  *param_1 = 1;
LAB_1006290d0:
  auVar4._8_8_ = uVar2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Address: 0x1006290f0 | FUN_1006290f0 */

void FUN_1006290f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  FUN_100629028(param_1,param_4,param_5);
  pcVar3 = FUN_1005dff00;
  uVar1 = param_1;
  uVar2 = param_4;
  FUN_100630334();
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(pcVar3);
  FUN_1005dff14(param_1,param_4);
  return;
}



/* Address: 0x100629170 | FUN_100629170 */

code * FUN_100629170(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1006291f0();
  puVar1 = &DAT_100eed2e0;
  _swift_allocObject(&DAT_100eed2e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  pcVar2 = FUN_100004520;
  thunk_FUN_10064b138(FUN_100004520,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_release(param_1);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x1006291f0 | FUN_1006291f0 */

code * FUN_1006291f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  
  uVar1 = param_2;
  FUN_100626780(param_2);
  puVar2 = &DAT_100eed308;
  _swift_allocObject(&DAT_100eed308,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  pcVar3 = thunk_FUN_100631cac;
  thunk_FUN_10064b138(thunk_FUN_100631cac,puVar2,param_2);
  _swift_release(uVar1);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x10062926c | FUN_10062926c */

code * FUN_10062926c(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x30);
  lVar9 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  puVar2 = puVar6;
  FUN_100631530();
  puVar3 = puVar6;
  FUN_1006422fc(puVar6,puVar2,lVar9);
  puVar2 = puVar6;
  (**(code **)(lVar9 + 0x10))(puVar6,lVar9);
  if (((ulong)puVar2 & 1) == 0) {
    puVar2 = &DAT_100eed330;
    _swift_allocObject(&DAT_100eed330,0x30,7);
    *(undefined **)(puVar2 + 0x10) = puVar3;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    *(undefined **)(puVar2 + 0x20) = param_1;
    *(undefined **)(puVar2 + 0x28) = param_2;
    pcVar8 = *(code **)(lVar9 + 0x18);
    _swift_retain(puVar3);
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    (*pcVar8)(thunk_FUN_1005dfd8c,puVar2,puVar6,lVar9);
    _swift_release(puVar2);
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      puVar2 = puVar3;
      _swift_retain();
    }
    else {
      puVar6 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + 0x10);
      _swift_retain(puVar3);
      puVar2 = puVar6;
      _swift_retain();
      while (puVar4 = puVar6, puVar4 != (undefined *)0x0) {
        if (puVar4 == *(undefined **)(unaff_x20 + 0x18)) {
          _swift_release();
          puVar2 = puVar4;
          break;
        }
                    /* WARNING: Load size is inaccurate */
        if ((puVar4[0x28] == param_1 && puVar4[0x30] == param_2) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)puVar4[0x28],(_StringGuts)puVar4[0x30],
                               (_StringComparisonResult)(__int8)param_1), bVar1)) {
          uVar7 = 0;
          goto LAB_1006293e4;
        }
        puVar6 = *(undefined **)(puVar4 + 0x10);
        _swift_retain(puVar6);
        _swift_release();
        puVar2 = puVar4;
      }
    }
    FUN_1005dfcfc();
    puVar4 = &DAT_100eed960;
    _swift_allocError(&DAT_100eed960,puVar2,0,0);
    uVar7 = 1;
    *puVar2 = 1;
LAB_1006293e4:
    pcVar8 = FUN_1005dff00;
    puVar2 = puVar4;
    uVar5 = uVar7;
    FUN_100630334(puVar4,uVar7,FUN_1005dff00);
    _swift_release(puVar3);
    FUN_1006486f8(puVar2,uVar5,pcVar8);
    FUN_100004550(puVar2,uVar5);
    _swift_bridgeObjectRelease(pcVar8);
    FUN_1005dff14(puVar4,uVar7);
  }
  pcVar8 = FUN_100004520;
  FUN_1005df248(FUN_100004520,0);
  _swift_release(puVar3);
  return pcVar8;
}



/* Address: 0x10062947c | FUN_10062947c */

void FUN_10062947c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_38;
  long local_30;
  undefined8 uStack_28;
  
  lVar4 = *(long *)(param_1 + 0x38);
  if (lVar4 == 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100629528);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x50) + 8);
    _swift_unknownObjectRetain();
    lVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x40) + 8);
    lVar5 = lVar4;
  }
  local_30 = lVar4;
  uStack_28 = uVar6;
  _swift_unknownObjectRetain(lVar5);
  puVar2 = &DAT_100fd78c8;
  FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
  puVar3 = &local_38;
  _swift_dynamicCast(puVar3,&local_30,puVar2,param_2,6);
  if ((int)puVar3 != 0) {
    _swift_unknownObjectRelease(local_38);
  }
  return;
}



/* Address: 0x100629528 | FUN_100629528 */

void FUN_100629528(void)

{
  FUN_100629960(FUN_10062b0ec,FUN_100631a38);
  return;
}



/* Address: 0x10062953c | FUN_10062953c */

void FUN_10062953c(void)

{
  FUN_100629960(FUN_10062b190,FUN_100631a58);
  return;
}



/* Address: 0x100629550 | FUN_100629550 */

void FUN_100629550(void)

{
  FUN_100629960(FUN_10062b234,FUN_100631a78);
  return;
}



/* Address: 0x100629564 | FUN_100629564 */

void FUN_100629564(void)

{
  FUN_100629960(FUN_10062b2d8,FUN_100631a98);
  return;
}



/* Address: 0x100629578 | FUN_100629578 */

void FUN_100629578(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 auStack_88 [72];
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) == 0) {
    FUN_1005e650c(param_1,auStack_88);
    FUN_100631684(auStack_88,&local_d0);
    puVar2 = &DAT_100eed358;
    _swift_allocObject(&DAT_100eed358,0x5a,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar2 + 0x30) = uStack_b8;
    *(undefined8 *)(puVar2 + 0x28) = uStack_c0;
    *(undefined8 *)(puVar2 + 0x40) = uStack_a8;
    *(undefined8 *)(puVar2 + 0x38) = local_b0;
    *(undefined8 *)(puVar2 + 0x50) = uStack_98;
    *(undefined8 *)(puVar2 + 0x48) = uStack_a0;
    *(undefined2 *)(puVar2 + 0x58) = local_90;
    *(undefined8 *)(puVar2 + 0x20) = uStack_c8;
    *(undefined8 *)(puVar2 + 0x18) = local_d0;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain();
    (*pcVar5)(FUN_100631b58,puVar2,uVar4,lVar3);
    _swift_release(puVar2);
    FUN_1000fb4c4(auStack_88,&DAT_100fd7870,&DAT_100c69448);
  }
  else if ((*(long *)(unaff_x20 + 0x10) != 0) &&
          (lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10), lVar3 != 0)) {
    _swift_retain(lVar3);
    FUN_10062b37c(param_1);
    _swift_release(lVar3);
    return;
  }
  return;
}



/* Address: 0x1006296a8 | FUN_1006296a8 */

void FUN_1006296a8(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  if ((*(long *)(unaff_x20 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x1006296f4 | FUN_1006296f4 */

void FUN_1006296f4(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100629740 | FUN_100629740 */

void FUN_100629740(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [72];
  
  lVar7 = *(long *)(param_2 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  puVar5 = auStack_b0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar2 = uVar3;
  (**(code **)(lVar6 + 0x10))();
  if ((uVar2 & 1) == 0) {
    (**(code **)(lVar7 + 0x10))(puVar5,param_1,param_2);
    uVar2 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar9 = uVar2 + 0x20 & (uVar2 ^ 0xffffffffffffffff);
    puVar1 = &DAT_100eed380;
    _swift_allocObject(&DAT_100eed380,uVar9 + lVar8,uVar2 | 7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(long *)(puVar1 + 0x18) = unaff_x20;
    (**(code **)(lVar7 + 0x20))(puVar1 + uVar9,puVar5,param_2);
    pcVar4 = *(code **)(lVar6 + 0x18);
    _swift_retain();
    (*pcVar4)(FUN_100631bc4,puVar1,uVar3,lVar6);
    _swift_release(puVar1);
  }
  else {
    (**(code **)(lVar7 + 0x10))(puVar5,param_1,param_2);
    FUN_10065b2f8(auStack_a8,puVar5,param_2);
    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
       (lVar6 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10), lVar6 != 0)) {
      _swift_retain(lVar6);
      FUN_10062b37c(auStack_a8);
      _swift_release(lVar6);
    }
    FUN_1005e70f4(auStack_a8);
  }
  return;
}



/* Address: 0x1006298a0 | FUN_1006298a0 */

void FUN_1006298a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [72];
  
  lVar1 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(auStack_80 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_10065b2f8(auStack_78,auStack_80 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b37c(auStack_78);
    _swift_release(lVar1);
  }
  FUN_1005e70f4(auStack_78);
  return;
}



/* Address: 0x100629938 | FUN_100629938 */

void FUN_100629938(void)

{
  FUN_100629960(FUN_10062b42c,FUN_100631be0);
  return;
}



/* Address: 0x10062994c | FUN_10062994c */

void FUN_10062994c(void)

{
  FUN_100629960(FUN_10062b4d0,FUN_100631c00);
  return;
}



/* Address: 0x100629960 | FUN_100629960 */

void FUN_100629960(code *param_1,undefined8 param_2)

{
  long unaff_x20;
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) == 0) {
    pcVar2 = *(code **)(lVar3 + 0x18);
    _swift_retain();
    (*pcVar2)(param_2);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (unaff_x20 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10), unaff_x20 == 0)) {
      return;
    }
    _swift_retain(unaff_x20);
    (*param_1)();
  }
  _swift_release(unaff_x20);
  return;
}



/* Address: 0x100629a14 | FUN_100629a14 */

void FUN_100629a14(long param_1,code *param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    (*param_2)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100629a5c | FUN_100629a5c */

void FUN_100629a5c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar3;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar1 & 1) == 0) {
    FUN_10000cbfc(param_1,auStack_60);
    puVar2 = &DAT_100eed3a8;
    _swift_allocObject(&DAT_100eed3a8,0x38,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    FUN_100011080(auStack_60,puVar2 + 0x18);
    pcVar5 = *(code **)(lVar4 + 0x18);
    _swift_retain();
    (*pcVar5)(FUN_100631c4c,puVar2,uVar3,lVar4);
    _swift_release(puVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    FUN_100004640(param_1,lVar4);
    local_48 = lVar4;
    FUN_10000cbb0(auStack_60);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))();
    if ((*(long *)(unaff_x20 + 0x10) != 0) &&
       (lVar4 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10), lVar4 != 0)) {
      _swift_retain(lVar4);
      FUN_10062b574(auStack_60);
      _swift_release(lVar4);
    }
    FUN_100004594(auStack_60);
  }
  return;
}



/* Address: 0x100629b80 | FUN_100629b80 */

void FUN_100629b80(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = *(long *)(param_2 + 0x18);
  FUN_100004640(param_2,lVar1);
  local_38 = lVar1;
  FUN_10000cbb0(auStack_50);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b574(auStack_50);
    _swift_release(lVar1);
  }
  FUN_100004594(auStack_50);
  return;
}



/* Address: 0x100629c10 | FUN_100629c10 */

void FUN_100629c10(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar2;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) == 0) {
    puVar4 = &DAT_100eed3d0;
    _swift_allocObject(&DAT_100eed3d0,0x20,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain();
    _swift_errorRetain(param_1);
    (*pcVar5)(FUN_100631c64,puVar4,uVar2,lVar3);
  }
  else {
    if ((*(long *)(unaff_x20 + 0x10) == 0) ||
       (puVar4 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + 0x10), puVar4 == (undefined *)0x0)) {
      return;
    }
    _swift_retain(puVar4);
    FUN_10062b624(param_1);
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x100629cf8 | FUN_100629cf8 */

void FUN_100629cf8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b624(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100629d44 | FUN_100629d44 */

void FUN_100629d44(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(unaff_x20 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(unaff_x20 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eedd30;
    _swift_allocObject(&DAT_100eedd30,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062aa18(param_1,param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x100629ea4 | FUN_100629ea4 */

void FUN_100629ea4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (puVar7 = *(undefined **)(*(long *)(param_1 + 0x18) + 0x18), puVar7 == (undefined *)0x0)) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eedd58;
    _swift_allocObject(&DAT_100eedd58,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062aa18(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10062a008 | FUN_10062a008 */

void FUN_10062a008(undefined8 param_1)

{
  FUN_10062a020(param_1,FUN_10062aae4);
  return;
}



/* Address: 0x10062a014 | FUN_10062a014 */

void FUN_10062a014(undefined8 param_1)

{
  FUN_10062a020(param_1,FUN_10062ab88);
  return;
}



/* Address: 0x10062a020 | FUN_10062a020 */

void FUN_10062a020(long param_1,code *param_2)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x18) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar1 != 0)) {
    _swift_retain(lVar1);
    (*param_2)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062a068 | FUN_10062a068 */

void FUN_10062a068(undefined8 param_1,undefined8 param_2)

{
  FUN_10062a0a0(param_1,param_2,FUN_10062ac2c,&DAT_100eed3f8,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10062a084 | FUN_10062a084 */

void FUN_10062a084(undefined8 param_1,undefined8 param_2)

{
  FUN_10062a0a0(param_1,param_2,FUN_10062acf8,&DAT_100eed420,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10062a0a0 | FUN_10062a0a0 */

void FUN_10062a0a0(undefined8 param_1,long param_2,code *param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  if ((*(long *)(unaff_x20 + 0x18) == 0) ||
     (lVar5 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x18), lVar5 == 0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar3 = DAT_101057be8;
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar5 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar2 = uVar1;
    lVar4 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    if ((uVar2 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar3);
      FUN_1006486f8();
      FUN_100004550(uVar3,lVar4);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    _swift_allocObject(param_4,0x20,7);
    *(long *)(param_4 + 0x10) = param_2;
    *(undefined8 *)(param_4 + 0x18) = uVar3;
    pcVar6 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar3);
    (*pcVar6)(param_5,param_4,uVar1,lVar5);
  }
  else {
    _swift_retain(lVar5);
    (*param_3)(param_1,param_2);
    param_4 = lVar5;
  }
  _swift_release(param_4);
  return;
}



/* Address: 0x10062a208 | FUN_10062a208 */

void FUN_10062a208(long param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (lVar6 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar6 == 0)) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_5,0x20,7);
    *(long *)(param_5 + 0x10) = param_3;
    *(undefined8 *)(param_5 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_6,param_5,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    (*param_4)(param_2,param_3);
    param_5 = lVar6;
  }
  _swift_release(param_5);
  return;
}



/* Address: 0x10062a374 | FUN_10062a374 */

void FUN_10062a374(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5)

{
  long lVar1;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [72];
  
  lVar1 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (auStack_90 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_4);
  FUN_10065b2f8(auStack_88,auStack_90 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  (*param_5)(auStack_88,param_3);
  FUN_1005e70f4(auStack_88);
  return;
}



/* Address: 0x10062a408 | FUN_10062a408 */

void FUN_10062a408(undefined8 param_1,undefined8 param_2)

{
  FUN_10062a0a0(param_1,param_2,FUN_10062add8,&DAT_100eedce0,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10062a424 | FUN_10062a424 */

void FUN_10062a424(void)

{
  FUN_10062a208();
  return;
}



/* Address: 0x10062a440 | FUN_10062a440 */

void FUN_10062a440(undefined8 param_1,undefined8 param_2)

{
  FUN_10062a0a0(param_1,param_2,FUN_10062aea4,&DAT_100eedc90,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10062a45c | FUN_10062a45c */

void FUN_10062a45c(void)

{
  FUN_10062a208();
  return;
}



/* Address: 0x10062a478 | FUN_10062a478 */

void FUN_10062a478(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(unaff_x20 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(unaff_x20 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eedbf0;
    _swift_allocObject(&DAT_100eedbf0,0x20,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062af70(param_1);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062a5d4 | FUN_10062a5d4 */

void FUN_10062a5d4(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(param_1 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eedc18;
    _swift_allocObject(&DAT_100eedc18,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062af70(param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062a730 | FUN_10062a730 */

void FUN_10062a730(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(unaff_x20 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(unaff_x20 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eedba0;
    _swift_allocObject(&DAT_100eedba0,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062b020(param_1,param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062a894 | FUN_10062a894 */

void FUN_10062a894(long param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar7 = *(long *)(param_2 + 0x18);
  FUN_100004640(param_2,lVar7);
  local_58 = lVar7;
  FUN_10000cbb0(auStack_70);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))();
  if ((*(long *)(param_1 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(param_1 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_3 == 0) goto LAB_10062a9dc;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_10062a9dc;
    }
    puVar6 = &DAT_100eedbc8;
    _swift_allocObject(&DAT_100eedbc8,0x20,7);
    *(long *)(puVar6 + 0x10) = param_3;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062b020(auStack_70,param_3);
  }
  _swift_release(puVar6);
LAB_10062a9dc:
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x10062aa18 | FUN_10062aa18 */

void FUN_10062aa18(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x40);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062aa18(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062aae4 | FUN_10062aae4 */

void FUN_10062aae4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x30);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062aae4();
    _swift_release(lVar1);
    return;
  }
  return;
}


