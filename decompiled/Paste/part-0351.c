/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10044cf84 | FUN_10044cf84 */

void FUN_10044cf84(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004519b8(unaff_x20 + 0x10,param_1);
  return;
}



/* Address: 0x10044cf90 | FUN_10044cf90 */

void FUN_10044cf90(char param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 auStack_48 [24];
  
  if (param_1 == '\x01') {
    FUN_10044fe70(0x80);
  }
  else {
    lVar3 = 0;
    FUN_10044add8();
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = (ulong *)(lVar3 + 0x10);
    *puVar5 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(puVar5,auStack_48,0x21,0);
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar2);
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 6;
    *puVar5 = uVar4;
    _swift_endAccess(auStack_48);
  }
  return;
}



/* Address: 0x10044d070 | FUN_10044d070 */

void FUN_10044d070(void)

{
  FUN_10044fe70(0x80);
  return;
}



/* Address: 0x10044d088 | FUN_10044d088 */

void FUN_10044d088(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x614464656e676973;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  pvVar2 = (void *)0xea00000000006174;
  if (*unaff_x20 != '\x01') {
    pvVar2 = (void *)0xe300000000000000;
  }
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}



/* Address: 0x10044d0e0 | FUN_10044d0e0 */

void FUN_10044d0e0(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x614464656e676973;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = (undefined *)0xea00000000006174;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044d158 | FUN_10044d158 */

void FUN_10044d158(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044cf90(*unaff_x20);
  return;
}



/* Address: 0x10044d160 | thunk_FUN_10044d164 */

void thunk_FUN_10044d164(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x614464656e676973;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = (undefined *)0xea00000000006174;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044d164 | FUN_10044d164 */

void FUN_10044d164(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x614464656e676973;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = (undefined *)0xea00000000006174;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044d1e0 | FUN_10044d1e0 */

undefined1  [16] FUN_10044d1e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x614464656e676973;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64696f;
  }
  uVar2 = 0xea00000000006174;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe300000000000000;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10044d218 | FUN_10044d218 */

void FUN_10044d218(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x64696f || param_3 != -0x1d00000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64696f,(_StringGuts)0xe300000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x614464656e676973) && (param_3 == -0x15ffffffffff9e8c)) {
        _swift_bridgeObjectRelease(0xea00000000006174);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x614464656e676973,(_StringGuts)0xea00000000006174,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10044d278;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10044d278:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10044d2f8 | FUN_10044d2f8 */

String FUN_10044d2f8(void)

{
  String SVar1;
  
  FUN_100453524();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044d320 | FUN_10044d320 */

String FUN_10044d320(void)

{
  String SVar1;
  
  FUN_100453524();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044d348 | FUN_10044d348 */

void FUN_10044d348(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_10045133c(&local_b0);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_48;
    param_1[0xc] = local_50;
    param_1[0xf] = uStack_38;
    param_1[0xe] = uStack_40;
    param_1[0x11] = uStack_28;
    param_1[0x10] = local_30;
    param_1[5] = uStack_88;
    param_1[4] = local_90;
    param_1[7] = uStack_78;
    param_1[6] = uStack_80;
    param_1[9] = uStack_68;
    param_1[8] = local_70;
    param_1[0xb] = uStack_58;
    param_1[10] = uStack_60;
    param_1[1] = uStack_a8;
    *param_1 = local_b0;
    param_1[3] = uStack_98;
    param_1[2] = uStack_a0;
  }
  return;
}



/* Address: 0x10044d3a0 | FUN_10044d3a0 */

undefined4 FUN_10044d3a0(void)

{
  undefined4 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x10044d3a8 | FUN_10044d3a8 */

void FUN_10044d3a8(undefined4 param_1)

{
  undefined4 *unaff_x20;
  
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10044d3b0 | FUN_10044d3b0 */

void FUN_10044d3b0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
  return;
}



/* Address: 0x10044d3b8 | FUN_10044d3b8 */

undefined8 FUN_10044d3b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_1001037b4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1001037b4(uVar2,uVar3);
  return uVar1;
}



/* Address: 0x10044d408 | FUN_10044d408 */

void FUN_10044d408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10003bf2c(uVar1,uVar2);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  return;
}



/* Address: 0x10044d468 | FUN_10044d468 */

void FUN_10044d468(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10044d470 | FUN_10044d470 */

void FUN_10044d470(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Address: 0x10044d498 | FUN_10044d498 */

void FUN_10044d498(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004519ec(unaff_x20 + 0x38,param_1);
  return;
}



/* Address: 0x10044d4a4 | FUN_10044d4a4 */

void FUN_10044d4a4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100451a20(param_1,unaff_x20 + 0x38);
  return;
}



/* Address: 0x10044d4ac | FUN_10044d4ac */

undefined1  [16] FUN_10044d4ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044d4bc | FUN_10044d4bc */

undefined1 * FUN_10044d4bc(byte param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 uVar7;
  ulong *puVar8;
  undefined1 auStack_48 [24];
  
  if (param_1 < 2) {
    puVar3 = (undefined1 *)0x0;
    if (param_1 == 0) {
      FUN_10044add8();
      _swift_allocObject();
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar8 = (ulong *)(puVar3 + 0x10);
      *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_beginAccess(puVar8,auStack_48,0x21,0);
      uVar4 = 0;
      FUN_10044c504(0,1,1,puVar2);
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_10044c504(uVar4,uVar1 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      *(undefined1 *)(uVar4 + uVar1 + 0x20) = 2;
      *puVar8 = uVar4;
      _swift_endAccess(auStack_48);
      return puVar3;
    }
    FUN_10044add8();
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = (ulong *)(puVar3 + 0x10);
    *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(puVar8,auStack_48,0x21,0);
    *puVar8 = (ulong)puVar2;
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar2);
    *puVar8 = uVar4;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar6 = uVar4 + uVar1;
    uVar7 = 0x11;
  }
  else if (param_1 == 2) {
    puVar3 = (undefined1 *)0x0;
    FUN_10044add8();
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = (ulong *)(puVar3 + 0x10);
    *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(puVar8,auStack_48,0x21,0);
    *puVar8 = (ulong)puVar2;
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar2);
    *puVar8 = uVar4;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar6 = uVar4 + uVar1;
    uVar7 = 0x10;
  }
  else {
    if (param_1 != 3) {
      puVar3 = (undefined1 *)0x11;
      FUN_10044fe70(0x11);
      return puVar3;
    }
    puVar3 = (undefined1 *)0x0;
    FUN_10044add8();
    _swift_allocObject();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = (ulong *)(puVar3 + 0x10);
    *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_beginAccess(puVar8,auStack_48,0x21,0);
    *puVar8 = (ulong)puVar2;
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar2);
    *puVar8 = uVar4;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar6 = uVar4 + uVar1;
    uVar7 = 0x80;
  }
  *(undefined1 *)(lVar6 + 0x20) = uVar7;
  *(ulong *)(puVar3 + 0x10) = uVar4;
  puVar5 = auStack_48;
  _swift_endAccess(puVar5);
  FUN_10044ac88();
  _swift_retain();
  _swift_release(puVar3);
  return puVar5;
}



/* Address: 0x10044d7a4 | FUN_10044d7a4 */

void FUN_10044d7a4(void)

{
  FUN_100450164(0x11);
  return;
}



/* Address: 0x10044d7bc | FUN_10044d7bc */

void FUN_10044d7bc(void)

{
  FUN_100450164(0x80);
  return;
}



/* Address: 0x10044d7d4 | FUN_10044d7d4 */

void FUN_10044d7d4(void)

{
  FUN_10044fe70(0x11);
  return;
}



/* Address: 0x10044d7ec | FUN_10044d7ec */

void FUN_10044d7ec(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar4 = *unaff_x20;
  puVar2 = (undefined1 *)0xec00000073657461;
  pcVar1 = (char *)0x6369666974726563;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xeb00000000736f66;
    pcVar1 = (char *)0x6e4972656e676973;
  }
  puVar3 = (undefined1 *)0xeb000000006f666e;
  pcVar5 = (char *)0x49746e65746e6f63;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    pcVar5 = pcVar1;
  }
  pcVar1 = (char *)0x6e6f6973726576;
  if (bVar4 != 0) {
    pcVar1 = (char *)0x676c61;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  if (bVar4 < 2) {
    puVar3 = puVar2;
    pcVar5 = pcVar1;
  }
  SVar6.bridgeObject = puVar3;
  SVar6.str = pcVar5;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10044d8b8 | FUN_10044d8b8 */

void FUN_10044d8b8(__int64 param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar2 = (undefined1 *)0xec00000073657461;
  pcVar1 = (char *)0x6369666974726563;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0xeb00000000736f66;
    pcVar1 = (char *)0x6e4972656e676973;
  }
  HVar5.unknown = (undefined1 *)0xeb000000006f666e;
  pcVar4 = (char *)0x49746e65746e6f63;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x6e6f6973726576;
  if (bVar3 != 0) {
    pcVar1 = (char *)0x676c61;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044d9a4 | FUN_10044d9a4 */

void FUN_10044d9a4(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044d4bc(*unaff_x20);
  return;
}



/* Address: 0x10044d9ac | thunk_FUN_10044d9b0 */

void thunk_FUN_10044d9b0(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar2 = (undefined1 *)0xec00000073657461;
  pcVar1 = (char *)0x6369666974726563;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0xeb00000000736f66;
    pcVar1 = (char *)0x6e4972656e676973;
  }
  HVar5.unknown = (undefined1 *)0xeb000000006f666e;
  pcVar4 = (char *)0x49746e65746e6f63;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x6e6f6973726576;
  if (bVar3 != 0) {
    pcVar1 = (char *)0x676c61;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044d9b0 | FUN_10044d9b0 */

void FUN_10044d9b0(void)

{
  char *pcVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar2 = (undefined1 *)0xec00000073657461;
  pcVar1 = (char *)0x6369666974726563;
  if (bVar3 != 3) {
    puVar2 = (undefined1 *)0xeb00000000736f66;
    pcVar1 = (char *)0x6e4972656e676973;
  }
  HVar5.unknown = (undefined1 *)0xeb000000006f666e;
  pcVar4 = (char *)0x49746e65746e6f63;
  if (bVar3 != 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  pcVar1 = (char *)0x6e6f6973726576;
  if (bVar3 != 0) {
    pcVar1 = (char *)0x676c61;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  if (bVar3 < 2) {
    HVar5.unknown = puVar2;
    pcVar4 = pcVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044daa0 | FUN_10044daa0 */

undefined1  [16] FUN_10044daa0(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar2 = (undefined1 *)0xec00000073657461;
  uVar1 = 0x6369666974726563;
  if (bVar4 != 3) {
    puVar2 = (undefined1 *)0xeb00000000736f66;
    uVar1 = 0x6e4972656e676973;
  }
  puVar3 = (undefined1 *)0xeb000000006f666e;
  uVar5 = 0x49746e65746e6f63;
  if (bVar4 != 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  uVar1 = 0x6e6f6973726576;
  if (bVar4 != 0) {
    uVar1 = 0x676c61;
  }
  puVar2 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  if (bVar4 < 2) {
    puVar3 = puVar2;
    uVar5 = uVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar5;
  return auVar6;
}



/* Address: 0x10044db4c | FUN_10044db4c */

void FUN_10044db4c(undefined1 *param_1,undefined1 param_2)

{
  FUN_100453ccc();
  *param_1 = param_2;
  return;
}



/* Address: 0x10044db70 | FUN_10044db70 */

String FUN_10044db70(void)

{
  String SVar1;
  
  FUN_1004534b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044db98 | FUN_10044db98 */

String FUN_10044db98(void)

{
  String SVar1;
  
  FUN_1004534b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044dbc0 | FUN_10044dbc0 */

void FUN_10044dbc0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_100450248(&local_a0);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_58;
    param_1[8] = local_60;
    param_1[0xb] = uStack_48;
    param_1[10] = uStack_50;
    param_1[0xd] = uStack_38;
    param_1[0xc] = local_40;
    param_1[0xf] = uStack_28;
    param_1[0xe] = uStack_30;
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
    param_1[5] = uStack_78;
    param_1[4] = local_80;
    param_1[7] = uStack_68;
    param_1[6] = uStack_70;
  }
  return;
}



/* Address: 0x10044dc10 | FUN_10044dc10 */

void FUN_10044dc10(void)

{
  FUN_1004517a8();
  return;
}



/* Address: 0x10044dc24 | FUN_10044dc24 */

long FUN_10044dc24(char param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined1 uVar5;
  ulong *puVar6;
  undefined1 auStack_48 [24];
  
  lVar2 = 0;
  FUN_10044add8();
  _swift_allocObject();
  puVar6 = (ulong *)(lVar2 + 0x10);
  *puVar6 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 == '\x01') {
    _swift_beginAccess(puVar6,auStack_48,0x21,0);
    uVar3 = 0;
    FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_10044c504(uVar3,uVar1 + 1,1);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    lVar4 = uVar3 + uVar1;
    uVar5 = 5;
  }
  else {
    _swift_beginAccess(puVar6,auStack_48,0x21,0);
    uVar3 = 0;
    FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar1) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_10044c504(uVar3,uVar1 + 1,1);
    }
    *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
    lVar4 = uVar3 + uVar1;
    uVar5 = 6;
  }
  *(undefined1 *)(lVar4 + 0x20) = uVar5;
  *puVar6 = uVar3;
  _swift_endAccess(auStack_48);
  return lVar2;
}



/* Address: 0x10044dd5c | FUN_10044dd5c */

void FUN_10044dd5c(Hasher param_1)

{
  char *pcVar1;
  void *pvVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6574656d61726170;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x687469726f676c61;
  }
  pvVar2 = (void *)0xea00000000007372;
  if (*unaff_x20 != '\x01') {
    pvVar2 = (void *)0xe90000000000006d;
  }
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  return;
}



/* Address: 0x10044ddc0 | FUN_10044ddc0 */

void FUN_10044ddc0(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6574656d61726170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x687469726f676c61;
  }
  HVar3.unknown = (undefined *)0xea00000000007372;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe90000000000006d;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044de44 | FUN_10044de44 */

void FUN_10044de44(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044dc24(*unaff_x20);
  return;
}



/* Address: 0x10044de4c | thunk_FUN_10044de50 */

void thunk_FUN_10044de50(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6574656d61726170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x687469726f676c61;
  }
  HVar3.unknown = (undefined *)0xea00000000007372;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe90000000000006d;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044de50 | FUN_10044de50 */

void FUN_10044de50(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6574656d61726170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x687469726f676c61;
  }
  HVar3.unknown = (undefined *)0xea00000000007372;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined *)0xe90000000000006d;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044ded8 | FUN_10044ded8 */

undefined1  [16] FUN_10044ded8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6574656d61726170;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x687469726f676c61;
  }
  uVar2 = 0xea00000000007372;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe90000000000006d;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10044df1c | FUN_10044df1c */

void FUN_10044df1c(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x687469726f676c61 || param_3 != -0x16ffffffffffff93) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x687469726f676c61,(_StringGuts)0xe90000000000006d,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6574656d61726170) && (param_3 == -0x15ffffffffff8c8e)) {
        _swift_bridgeObjectRelease(0xea00000000007372);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6574656d61726170,(_StringGuts)0xea00000000007372,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10044df84;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10044df84:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10044e004 | FUN_10044e004 */

String FUN_10044e004(void)

{
  String SVar1;
  
  FUN_100453478();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044e02c | FUN_10044e02c */

String FUN_10044e02c(void)

{
  String SVar1;
  
  FUN_100453478();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044e054 | FUN_10044e054 */

void FUN_10044e054(void)

{
  FUN_100450164(0x10);
  return;
}



/* Address: 0x10044e06c | FUN_10044e06c */

void FUN_10044e06c(void)

{
  FUN_100450004();
  return;
}



/* Address: 0x10044e080 | FUN_10044e080 */

void FUN_10044e080(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_100450004();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10044e0a8 | FUN_10044e0a8 */

void FUN_10044e0a8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1004517a8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10044e0d0 | FUN_10044e0d0 */

undefined1  [16]
FUN_10044e0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  FUN_1001037b4(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x10044e104 | FUN_10044e104 */

void FUN_10044e104(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x10044e138 | FUN_10044e138 */

undefined1 * FUN_10044e138(char param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong *puVar6;
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined1 *)0x0;
  FUN_10044add8();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = (ulong *)(puVar3 + 0x10);
  *puVar6 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 == '\x01') {
    _swift_beginAccess(puVar6,auStack_48,0x21,0);
    *puVar6 = (ulong)puVar2;
    uVar4 = 0;
    FUN_10044c504(0,1,1,puVar2);
    *puVar6 = uVar4;
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x80;
    *(ulong *)(puVar3 + 0x10) = uVar4;
    puVar5 = auStack_48;
    _swift_endAccess(puVar5);
    FUN_10044ac88();
    _swift_retain();
    _swift_release(puVar3);
    puVar3 = puVar5;
  }
  else {
    _swift_beginAccess(puVar6,auStack_48,0x21,0);
    uVar4 = 0;
    FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 6;
    *puVar6 = uVar4;
    _swift_endAccess(auStack_48);
  }
  return puVar3;
}



/* Address: 0x10044e29c | FUN_10044e29c */

void FUN_10044e29c(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x64616f6c796170;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10044e2f0 | FUN_10044e2f0 */

void FUN_10044e2f0(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x64616f6c796170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined1 *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044e364 | FUN_10044e364 */

void FUN_10044e364(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044e138(*unaff_x20);
  return;
}



/* Address: 0x10044e36c | thunk_FUN_10044e370 */

void thunk_FUN_10044e370(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x64616f6c796170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined1 *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044e370 | FUN_10044e370 */

void FUN_10044e370(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x64616f6c796170;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x64696f;
  }
  HVar3.unknown = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = (undefined1 *)0xe300000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x10044e3e8 | FUN_10044e3e8 */

undefined1  [16] FUN_10044e3e8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x64616f6c796170;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64696f;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10044e41c | FUN_10044e41c */

void FUN_10044e41c(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x64696f || param_3 != (undefined1 *)0xe300000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64696f,(_StringGuts)0xe300000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x64616f6c796170) && (param_3 == &DAT_e700000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e700000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x64616f6c796170,(_StringGuts)0xe700000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10044e47c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10044e47c:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10044e4f4 | FUN_10044e4f4 */

String FUN_10044e4f4(void)

{
  String SVar1;
  
  FUN_100453438();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044e51c | FUN_10044e51c */

String FUN_10044e51c(void)

{
  String SVar1;
  
  FUN_100453438();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}


