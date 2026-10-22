/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100625e2c | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e30 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e34 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e38 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e3c | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e40 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e44 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e48 | thunk_FUN_100625b28 */

void thunk_FUN_100625b28(void)

{
  FUN_100625b28();
  return;
}



/* Address: 0x100625e4c | thunk_FUN_10060a54c */

void thunk_FUN_10060a54c(void)

{
  FUN_10060a54c();
  return;
}



/* Address: 0x100625e50 | thunk_FUN_10060a554 */

void thunk_FUN_10060a554(void)

{
  FUN_10060a554();
  return;
}



/* Address: 0x100625e54 | thunk_FUN_100624ee4 */

void thunk_FUN_100624ee4(long param_1)

{
  FUN_100624910(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100625e58 | thunk_FUN_100624910 */

undefined * thunk_FUN_100624910(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100624a28);
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
    puVar3 = &DAT_100fd7838;
    FUN_1000f7830(&DAT_100fd7838,&DAT_100c69418);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100eeaaa8);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100625e5c | thunk_FUN_10060a56c */

void thunk_FUN_10060a56c(void)

{
  FUN_10060a56c();
  return;
}



/* Address: 0x100625e60 | thunk_FUN_100625cb8 */

undefined1  [16] thunk_FUN_100625cb8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,&uStack_30);
  puVar1 = &DAT_100eecbc0;
  _swift_allocObject(&DAT_100eecbc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x100625e64 | thunk_FUN_100625dc8 */

void thunk_FUN_100625dc8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100eecd50;
  _swift_allocObject(&DAT_100eecd50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100625e68 | thunk_FUN_100625d64 */

undefined1  [16] thunk_FUN_100625d64(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  puVar1 = &DAT_100eecd78;
  _swift_allocObject(&DAT_100eecd78,0x30,7);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(puVar1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  _swift_unknownObjectRetain(param_1);
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_100625cac;
  return auVar3;
}



/* Address: 0x100625e6c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100625e70 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100625e74 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100625e78 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100625e7c | thunk_FUN_100624fb0 */

void thunk_FUN_100624fb0(void)

{
  FUN_100624fb0();
  return;
}



/* Address: 0x100625e80 | FUN_100625e80 */

code * FUN_100625e80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    ulong param_5,ulong param_6)

{
  undefined *puVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong uVar8;
  undefined8 local_70;
  undefined1 local_68;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar6 = uVar5;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar6 & 1) == 0) {
    puVar1 = &DAT_100eece58;
    _swift_allocObject(&DAT_100eece58,0x48,7);
    *(ulong *)(puVar1 + 0x10) = param_5;
    *(ulong *)(puVar1 + 0x18) = param_6;
    *(long *)(puVar1 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    *(undefined8 *)(puVar1 + 0x30) = param_2;
    *(undefined8 *)(puVar1 + 0x38) = param_3;
    *(undefined8 *)(puVar1 + 0x40) = param_4;
    pcVar7 = *(code **)(lVar4 + 0x20);
    FUN_1005dfcb0(param_5,param_6);
    _swift_bridgeObjectRetain(param_4);
    _swift_retain();
    _swift_unknownObjectRetain(param_1);
    pcVar2 = FUN_1005dfc8c;
    (*pcVar7)(FUN_1005dfc8c,puVar1,PTR___type_metadata_for____100eae0c8 + 8,uVar5,lVar4);
    _swift_release(puVar1);
  }
  else {
    uVar3 = (uint)(param_6 >> 0x3e);
    uVar6 = param_6;
    uVar8 = param_5;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        uVar6 = param_6 & 0x3fffffffffffffff | 0x4000000000000000;
      }
      else {
        uVar8 = (ulong)(param_5 != 0 || param_6 != 0x8000000000000000);
        uVar6 = 0x8000000000000000;
      }
    }
    _swift_getObjectType(param_1);
    FUN_1005dfcb0(param_5,param_6);
    FUN_100630400(param_1,param_3,param_4,uVar8,uVar6);
    local_68 = (undefined1)param_3;
    pcVar2 = (code *)&local_70;
    local_70 = param_1;
    FUN_10063db28(pcVar2,uVar5,PTR___type_metadata_for____100eae0c8 + 8,lVar4);
    FUN_1005dfc80(param_5,param_6);
    FUN_1002ec258(param_1,param_3);
  }
  return pcVar2;
}



/* Address: 0x100626050 | FUN_100626050 */

ulong FUN_100626050(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  FUN_1006422fc();
  pcVar6 = *(code **)(lVar5 + 0x10);
  _swift_retain();
  uVar2 = uVar4;
  (*pcVar6)(uVar4,lVar5);
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_100eece80;
    _swift_allocObject(&DAT_100eece80,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    *(ulong *)(puVar3 + 0x28) = uVar1;
    pcVar6 = *(code **)(lVar5 + 0x18);
    _swift_retain(uVar1);
    _swift_retain();
    _swift_unknownObjectRetain(param_1);
    (*pcVar6)(thunk_FUN_100631948,puVar3,uVar4,lVar5);
    _swift_release(puVar3);
  }
  else {
    _swift_getObjectType(param_1);
    FUN_100630bd0(param_1,uVar1);
  }
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x10062615c | FUN_10062615c */

undefined * FUN_10062615c(undefined *param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  
  puVar9 = *(undefined **)(unaff_x20 + 0x30);
  lVar10 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  puVar2 = puVar9;
  FUN_1006422fc();
  pcVar11 = *(code **)(lVar10 + 0x10);
  _swift_retain();
  puVar3 = puVar9;
  (*pcVar11)(puVar9,lVar10);
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = &DAT_100eecea8;
    _swift_allocObject(&DAT_100eecea8,0x30,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(undefined **)(puVar4 + 0x18) = param_1;
    *(undefined **)(puVar4 + 0x20) = param_2;
    *(undefined **)(puVar4 + 0x28) = puVar2;
    pcVar11 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar2);
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    (*pcVar11)(FUN_1005dfcf0,puVar4,puVar9,lVar10);
    _swift_release(puVar2);
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) != 0) {
      puVar9 = *(undefined **)(*(long *)(unaff_x20 + 0x10) + 0x10);
      puVar3 = puVar9;
      _swift_retain();
      while (puVar4 = puVar9, puVar4 != (undefined *)0x0) {
        if (puVar4 == *(undefined **)(unaff_x20 + 0x18)) {
          _swift_release();
          puVar3 = puVar4;
          break;
        }
                    /* WARNING: Load size is inaccurate */
        if ((puVar4[0x28] == param_1 && puVar4[0x30] == param_2) ||
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)puVar4[0x28],(_StringGuts)puVar4[0x30],
                               (_StringComparisonResult)(__int8)param_1), bVar1)) {
          FUN_1006313ac(puVar4,puVar2);
          _swift_release(puVar2);
          goto LAB_10062639c;
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
    uVar5 = *(ulong *)(puVar2 + 0x20);
    lVar10 = *(long *)(puVar2 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar7 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar6 & 1) != 0) {
      puVar3 = puVar9;
      thunk_FUN_1005de8f4(puVar9);
      FUN_1006486f8();
      _swift_errorRelease(puVar9);
      FUN_100004550(puVar3,lVar7);
      _swift_release(puVar2);
      _swift_bridgeObjectRelease(uVar8);
      return puVar2;
    }
    puVar4 = &DAT_100eeced0;
    _swift_allocObject(&DAT_100eeced0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar2;
    *(undefined **)(puVar4 + 0x18) = puVar9;
    pcVar11 = *(code **)(lVar10 + 0x18);
    _swift_retain(puVar2);
    _swift_errorRetain(puVar9);
    (*pcVar11)(FUN_10061dfe0,puVar4,uVar5,lVar10);
    _swift_errorRelease(puVar9);
    _swift_release(puVar2);
  }
LAB_10062639c:
  _swift_release(puVar4);
  return puVar2;
}



/* Address: 0x1006263bc | FUN_1006263bc */

undefined8 FUN_1006263bc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_getObjectType(uVar1);
  FUN_1006422fc();
  _swift_retain();
  FUN_10062858c(param_1,uVar1);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x10062642c | FUN_10062642c */

ulong FUN_10062642c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar5;
  FUN_100631530();
  uVar2 = uVar5;
  FUN_1006422fc(uVar5,uVar1,lVar6);
  uVar1 = uVar5;
  (**(code **)(lVar6 + 0x10))(uVar5,lVar6);
  if ((uVar1 & 1) == 0) {
    puVar4 = &DAT_100eecef8;
    _swift_allocObject(&DAT_100eecef8,0x30,7);
    *(ulong *)(puVar4 + 0x10) = uVar2;
    *(long *)(puVar4 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    pcVar7 = *(code **)(lVar6 + 0x18);
    _swift_retain(uVar2);
    _swift_retain();
    _swift_unknownObjectRetain(param_1);
    (*pcVar7)(FUN_100631584,puVar4,uVar5,lVar6);
    _swift_release(puVar4);
  }
  else {
    _swift_getObjectType(param_1);
    _swift_retain(uVar2);
    FUN_100630ae8(param_1);
    pcVar7 = FUN_1005dff00;
    uVar3 = param_1;
    lVar6 = unaff_x20;
    FUN_100630334();
    _swift_release(uVar2);
    FUN_1006486f8(uVar3,lVar6,pcVar7);
    FUN_100004550(uVar3,lVar6);
    _swift_bridgeObjectRelease(pcVar7);
    FUN_1005dff14(param_1,unaff_x20);
  }
  return uVar2;
}



/* Address: 0x100626590 | FUN_100626590 */

undefined * FUN_100626590(undefined *param_1,undefined *param_2)

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
    puVar2 = &DAT_100eecf20;
    _swift_allocObject(&DAT_100eecf20,0x30,7);
    *(undefined **)(puVar2 + 0x10) = puVar3;
    *(long *)(puVar2 + 0x18) = unaff_x20;
    *(undefined **)(puVar2 + 0x20) = param_1;
    *(undefined **)(puVar2 + 0x28) = param_2;
    pcVar8 = *(code **)(lVar9 + 0x18);
    _swift_retain(puVar3);
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    (*pcVar8)(FUN_1005dfd8c,puVar2,puVar6,lVar9);
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
          goto LAB_100626708;
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
LAB_100626708:
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
  return puVar3;
}



/* Address: 0x100626780 | FUN_100626780 */

ulong FUN_100626780(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  
  uVar5 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar5;
  FUN_100631530();
  uVar2 = uVar5;
  FUN_1006422fc(uVar5,uVar1,lVar6);
  uVar1 = uVar5;
  (**(code **)(lVar6 + 0x10))(uVar5,lVar6);
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_100eecf48;
    _swift_allocObject(&DAT_100eecf48,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(ulong *)(puVar3 + 0x20) = uVar2;
    *(long *)(puVar3 + 0x28) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x30) = param_1;
    pcVar7 = *(code **)(lVar6 + 0x18);
    _swift_retain(uVar2);
    _swift_retain();
    (*pcVar7)(FUN_1006315bc,puVar3,uVar5,lVar6);
    _swift_release(puVar3);
  }
  else {
    uVar1 = uVar2;
    _swift_retain(uVar2);
    FUN_100629028();
    pcVar7 = FUN_1005dff00;
    uVar5 = uVar1;
    uVar4 = param_2;
    FUN_100630334();
    _swift_release(uVar2);
    FUN_1006486f8(uVar5,uVar4,pcVar7);
    FUN_100004550(uVar5,uVar4);
    _swift_bridgeObjectRelease(pcVar7);
    FUN_1005dff14(uVar1,param_2);
  }
  return uVar2;
}



/* Address: 0x1006268dc | FUN_1006268dc */

code * FUN_1006268dc(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  long unaff_x20;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 local_70;
  undefined1 local_68;
  
  pcVar4 = (code *)&local_70;
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  lVar1 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar6 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar6 & 1) == 0) {
    puVar3 = &DAT_100eecf70;
    _swift_allocObject(&DAT_100eecf70,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x18) = param_1;
    *(long *)(puVar3 + 0x20) = param_2;
    *(ulong *)(puVar3 + 0x28) = param_3;
    pcVar8 = *(code **)(lVar1 + 0x20);
    FUN_1005dfcb0(param_2,param_3);
    _swift_retain();
    _swift_bridgeObjectRetain(param_1);
    pcVar4 = FUN_100631600;
    (*pcVar8)(FUN_100631600,puVar3,PTR___type_metadata_for____100eae0c8 + 8,uVar2,lVar1);
    _swift_release(puVar3);
    return pcVar4;
  }
  uVar5 = (uint)(param_3 >> 0x3e);
  uVar6 = param_3;
  lVar7 = param_2;
  if (uVar5 == 0) {
LAB_100626a0c:
    FUN_1005dfcb0(param_2,param_3);
    FUN_10062c0a0(param_1,lVar7,uVar6);
  }
  else {
    if (uVar5 == 1) {
      uVar6 = param_3 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar6 = 0x8000000000000000;
      if (param_2 != 0 || param_3 != 0x8000000000000000) {
        lVar7 = 1;
        goto LAB_100626a0c;
      }
      lVar7 = 0;
    }
    FUN_1005dfcb0(param_2,param_3);
    FUN_10062bfe4(param_1,lVar7,uVar6);
  }
  FUN_1005dfc80(param_2,param_3);
  local_68 = (undefined1)lVar7;
  local_70 = param_1;
  FUN_10063db28(&local_70,uVar2,PTR___type_metadata_for____100eae0c8 + 8,lVar1);
  FUN_1002ec258(param_1,lVar7);
  return pcVar4;
}



/* Address: 0x100626a9c | FUN_100626a9c */

void FUN_100626a9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 local_58;
  
  uVar2 = param_1;
  _swift_getObjectType();
  FUN_100630400(param_1,param_3,param_4,param_5,param_6,param_7,uVar2,param_2);
  if ((((uint)param_3 & 0xff) == 1) &&
     (local_58 = param_1,
     bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
     (bVar1 & 1) != 0)) {
    puVar3 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_58,puVar3,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x100626b80 | FUN_100626b80 */

void FUN_100626b80(void)

{
  FUN_100627e04(FUN_10062b2d8);
  return;
}



/* Address: 0x100626b8c | FUN_100626b8c */

void FUN_100626b8c(void)

{
  FUN_100627e04(FUN_10062b234);
  return;
}



/* Address: 0x100626b98 | FUN_100626b98 */

void FUN_100626b98(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b574(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100626bdc | FUN_100626bdc */

undefined1  [16] FUN_100626bdc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(lVar5 + 0x40);
  ppuVar4 = *(undefined ***)(lVar5 + 0x48);
  lVar3 = lVar1;
  if (lVar1 == 0) {
    FUN_10063c734();
    _swift_allocObject();
    uVar2 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar7 = *(undefined8 *)(lVar5 + 0x38);
    uVar6 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined ***)(lVar1 + 0x30) = ppuVar4;
    *(undefined2 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined ***)(lVar1 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar1 + 0x20) = lVar5;
    *(undefined8 *)(lVar1 + 0x18) = uVar7;
    *(undefined8 *)(lVar1 + 0x10) = uVar6;
    _swift_retain(lVar5);
    _swift_unknownObjectRetain(uVar6);
    ppuVar4 = &PTR_PTR_100eeeed8;
    lVar3 = 0;
  }
  _swift_unknownObjectRetain(lVar3);
  auVar8._8_8_ = ppuVar4;
  auVar8._0_8_ = lVar1;
  return auVar8;
}



/* Address: 0x100626c90 | FUN_100626c90 */

void FUN_100626c90(void)

{
  FUN_100627e04(FUN_10062b4d0);
  return;
}



/* Address: 0x100626c9c | FUN_100626c9c */

void FUN_100626c9c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100626ce0 | FUN_100626ce0 */

void FUN_100626ce0(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100626d24 | FUN_100626d24 */

void FUN_100626d24(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x30));
  return;
}



/* Address: 0x100626d4c | FUN_100626d4c */

void FUN_100626d4c(void)

{
  FUN_100627e04(FUN_10062b42c);
  return;
}



/* Address: 0x100626d58 | FUN_100626d58 */

void FUN_100626d58(void)

{
  FUN_100626ee4(FUN_10062ab88);
  return;
}



/* Address: 0x100626d64 | FUN_100626d64 */

void FUN_100626d64(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar6 == (undefined *)0x0) {
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
    puVar6 = &DAT_100eecf98;
    _swift_allocObject(&DAT_100eecf98,0x20,7);
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



/* Address: 0x100626ebc | FUN_100626ebc */

void FUN_100626ebc(undefined8 param_1,undefined8 param_2)

{
  FUN_100627b30(param_1,param_2,FUN_10062ac2c,&DAT_100eecfc0,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100626ed8 | FUN_100626ed8 */

void FUN_100626ed8(void)

{
  FUN_100626ee4(FUN_10062aae4);
  return;
}



/* Address: 0x100626ee4 | FUN_100626ee4 */

void FUN_100626ee4(code *param_1)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_1)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100626f24 | FUN_100626f24 */

void FUN_100626f24(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
    FUN_10062a0a0(param_1,param_2,FUN_10062add8,&DAT_100eedce0,thunk_FUN_10061dfe0);
    return;
  }
  puVar2 = &DAT_100eecfe8;
  _swift_allocObject(&DAT_100eecfe8,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(ulong *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcVar5 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_2);
  _swift_retain();
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar5)(FUN_10063161c,puVar2,uVar4,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10062701c | FUN_10062701c */

void FUN_10062701c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
    FUN_10062a0a0(param_1,param_2,FUN_10062aea4,&DAT_100eedc90,thunk_FUN_10061dfe0);
    return;
  }
  puVar2 = &DAT_100eed010;
  _swift_allocObject(&DAT_100eed010,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(ulong *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcVar5 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_2);
  _swift_retain();
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar5)(FUN_100631650,puVar2,uVar4,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100627114 | FUN_100627114 */

void FUN_100627114(undefined8 param_1,undefined8 param_2)

{
  FUN_10062717c(param_1,param_2,FUN_10062a068,&DAT_100eed038,FUN_1006316d8);
  return;
}



/* Address: 0x100627130 | FUN_100627130 */

void FUN_100627130(void)

{
  FUN_1006272d0();
  return;
}



/* Address: 0x10062714c | FUN_10062714c */

void FUN_10062714c(void)

{
  FUN_100627454(FUN_10062aae4,FUN_100631720);
  return;
}



/* Address: 0x100627160 | FUN_100627160 */

void FUN_100627160(undefined8 param_1,undefined8 param_2)

{
  FUN_10062717c(param_1,param_2,FUN_10062a084,&DAT_100eed088,FUN_1006317e8);
  return;
}



/* Address: 0x10062717c | FUN_10062717c */

void FUN_10062717c(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE,long param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long unaff_x20;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  undefined1 auStack_98 [72];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar2;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006271f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_1,param_2);
    return;
  }
  FUN_1005e650c(param_1,auStack_98);
  FUN_100631684(auStack_98,&local_e0);
  _swift_allocObject(param_4,0x68,7);
  *(long *)(param_4 + 0x10) = unaff_x20;
  *(undefined8 *)(param_4 + 0x30) = uStack_c8;
  *(undefined8 *)(param_4 + 0x28) = uStack_d0;
  *(undefined8 *)(param_4 + 0x40) = uStack_b8;
  *(undefined8 *)(param_4 + 0x38) = local_c0;
  *(undefined8 *)(param_4 + 0x50) = uStack_a8;
  *(undefined8 *)(param_4 + 0x48) = uStack_b0;
  *(undefined2 *)(param_4 + 0x58) = local_a0;
  *(undefined8 *)(param_4 + 0x20) = uStack_d8;
  *(undefined8 *)(param_4 + 0x18) = local_e0;
  *(undefined8 *)(param_4 + 0x60) = param_2;
  pcVar4 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_2);
  _swift_retain();
  (*pcVar4)(param_5,param_4,uVar2,lVar3);
  _swift_release(param_4);
  FUN_1000fb4c4(auStack_98,&DAT_100fd7870,&DAT_100c69448);
  return;
}



/* Address: 0x1006272b4 | FUN_1006272b4 */

void FUN_1006272b4(void)

{
  FUN_1006272d0();
  return;
}



/* Address: 0x1006272d0 | FUN_1006272d0 */

void FUN_1006272d0(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  code *param_6)

{
  long unaff_x20;
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  code *local_c0;
  long local_b8;
  ulong local_b0;
  undefined1 auStack_a8 [72];
  
  lVar6 = *(long *)(param_3 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  lVar5 = (long)&local_c0 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  local_c0 = param_4;
  local_b8 = param_5;
  _swift_getObjectType();
  local_b0 = uVar1;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar1 & 1) == 0) {
    (**(code **)(lVar6 + 0x10))(lVar5,param_1,param_3);
    uVar1 = (ulong)*(byte *)(lVar6 + 0x50);
    uVar2 = uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff);
    uVar8 = lVar7 + uVar2 + 7 & 0xfffffffffffffff8;
    lVar7 = local_b8;
    local_c0 = param_6;
    _swift_allocObject(local_b8,uVar8 + 8,uVar1 | 7);
    *(long *)(lVar7 + 0x10) = param_3;
    *(long *)(lVar7 + 0x18) = unaff_x20;
    (**(code **)(lVar6 + 0x20))(lVar7 + uVar2,lVar5,param_3);
    *(undefined8 *)(lVar7 + uVar8) = param_2;
    pcVar3 = *(code **)(lVar4 + 0x18);
    _swift_retain(param_2);
    _swift_retain();
    (*pcVar3)(local_c0,lVar7,local_b0,lVar4);
    _swift_release(lVar7);
  }
  else {
    (**(code **)(lVar6 + 0x10))(lVar5,param_1,param_3);
    FUN_10065b2f8(auStack_a8,lVar5,param_3);
    (*local_c0)(auStack_a8,param_2);
    FUN_1005e70f4(auStack_a8);
  }
  return;
}



/* Address: 0x100627440 | FUN_100627440 */

void FUN_100627440(void)

{
  FUN_100627454(FUN_10062ab88,FUN_1006318e4);
  return;
}



/* Address: 0x100627454 | FUN_100627454 */

void FUN_100627454(code *param_1,undefined8 param_2)

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
    if ((*(long *)(unaff_x20 + 0x18) == 0) ||
       (unaff_x20 = *(long *)(*(long *)(unaff_x20 + 0x18) + 0x18), unaff_x20 == 0)) {
      return;
    }
    _swift_retain(unaff_x20);
    (*param_1)();
  }
  _swift_release(unaff_x20);
  return;
}



/* Address: 0x100627508 | FUN_100627508 */

void FUN_100627508(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
    FUN_100629d44(param_1,param_2);
    return;
  }
  puVar2 = &DAT_100eed0d8;
  _swift_allocObject(&DAT_100eed0d8,0x28,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  puVar2[0x18] = (char)param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  pcVar5 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_2);
  _swift_retain();
  (*pcVar5)(FUN_10061de00,puVar2,uVar4,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1006275dc | FUN_1006275dc */

void FUN_1006275dc(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x30);
  lVar3 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
    FUN_10062a478(param_1);
    return;
  }
  puVar2 = &DAT_100eed100;
  _swift_allocObject(&DAT_100eed100,0x20,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcVar5 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_1);
  _swift_retain();
  (*pcVar5)(FUN_10061de38,puVar2,uVar4,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1006276a0 | FUN_1006276a0 */

void FUN_1006276a0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_70 [24];
  long local_58;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar3;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar1 & 1) == 0) {
    FUN_10000cbfc(param_1,auStack_70);
    puVar2 = &DAT_100eed128;
    _swift_allocObject(&DAT_100eed128,0x40,7);
    *(long *)(puVar2 + 0x10) = unaff_x20;
    FUN_100011080(auStack_70,puVar2 + 0x18);
    *(undefined8 *)(puVar2 + 0x38) = param_2;
    pcVar5 = *(code **)(lVar4 + 0x18);
    _swift_retain(param_2);
    _swift_retain();
    (*pcVar5)(FUN_100631938,puVar2,uVar3,lVar4);
    _swift_release(puVar2);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x18);
    FUN_100004640(param_1,lVar4);
    local_58 = lVar4;
    FUN_10000cbb0(auStack_70);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))();
    FUN_10062a730(auStack_70,param_2);
    FUN_100004594(auStack_70);
  }
  return;
}



/* Address: 0x1006277c4 | FUN_1006277c4 */

void FUN_1006277c4(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
    uVar3 = 0;
  }
  else {
    lVar6 = *(long *)(lVar5 + 0x10);
    _swift_retain(lVar5);
    lVar4 = lVar5;
    if (lVar6 != 0) {
      do {
        lVar4 = *(long *)(lVar6 + 0x10);
        lVar1 = *(long *)(lVar6 + 0x18);
        if (lVar1 == 0) {
          _swift_retain(lVar4);
          _swift_retain(lVar6);
        }
        else {
          uVar3 = *(undefined8 *)(lVar1 + 0x10);
          *(long *)(lVar1 + 0x10) = lVar4;
          _swift_retain_n(lVar4,2);
          _swift_retain_n(lVar1,2);
          _swift_retain(lVar6);
          _swift_release(lVar1);
          _swift_release(uVar3);
        }
        if (lVar4 != 0) {
          uVar3 = *(undefined8 *)(lVar4 + 0x18);
          *(long *)(lVar4 + 0x18) = lVar1;
          _swift_retain(lVar1);
          _swift_release(uVar3);
        }
        if ((*(byte *)(lVar6 + 0x58) & 1) == 0) {
          *(undefined1 *)(lVar6 + 0x58) = 1;
          lVar9 = *(long *)(lVar6 + 0x38);
          if (lVar9 == 0) {
            lVar9 = *(long *)(lVar6 + 0x48);
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x1006279a0);
              (*pcVar10)();
            }
            lVar7 = *(long *)(*(long *)(lVar6 + 0x50) + 8);
            _swift_unknownObjectRetain(lVar9);
            lVar8 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(lVar6 + 0x40) + 8);
            lVar8 = lVar9;
          }
          lVar2 = lVar9;
          _swift_getObjectType(lVar9);
          pcVar10 = *(code **)(lVar7 + 0x10);
          _swift_unknownObjectRetain(lVar8);
          (*pcVar10)(lVar6,lVar2,lVar7);
          _swift_unknownObjectRelease(lVar9);
        }
        _swift_release(lVar1);
        _swift_release(lVar4);
        uVar3 = *(undefined8 *)(lVar6 + 0x10);
        *(undefined8 *)(lVar6 + 0x10) = 0;
        _swift_release(uVar3);
        uVar3 = *(undefined8 *)(lVar6 + 0x18);
        *(undefined8 *)(lVar6 + 0x18) = 0;
        _swift_release(lVar6);
        _swift_release(uVar3);
        lVar6 = *(long *)(lVar5 + 0x10);
      } while (lVar6 != 0);
      lVar4 = *(long *)(unaff_x20 + 0x10);
      if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1006279a4);
        (*pcVar10)();
      }
    }
    _swift_retain(lVar4);
    FUN_100631244();
    _swift_release(lVar5);
    _swift_release(lVar4);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_release(uVar3);
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  _swift_unknownObjectRelease(uVar3);
  return;
}



/* Address: 0x1006279a4 | FUN_1006279a4 */

void FUN_1006279a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar6 == (undefined *)0x0) {
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
    puVar6 = &DAT_100eed150;
    _swift_allocObject(&DAT_100eed150,0x20,7);
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



/* Address: 0x100627af8 | FUN_100627af8 */

void FUN_100627af8(undefined8 param_1,undefined8 param_2)

{
  FUN_100627b30(param_1,param_2,FUN_10062add8,&DAT_100eed178,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100627b14 | FUN_100627b14 */

void FUN_100627b14(undefined8 param_1,undefined8 param_2)

{
  FUN_100627b30(param_1,param_2,FUN_10062aea4,&DAT_100eed1a0,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x100627b30 | FUN_100627b30 */

void FUN_100627b30(undefined8 param_1,long param_2,code *param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (lVar5 == 0) {
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



/* Address: 0x100627c90 | FUN_100627c90 */

void FUN_100627c90(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  code *pcVar7;
  
  puVar6 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar6 == (undefined *)0x0) {
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
    puVar6 = &DAT_100eed1c8;
    _swift_allocObject(&DAT_100eed1c8,0x20,7);
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


