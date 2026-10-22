/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10044e544 | FUN_10044e544 */

undefined8 FUN_10044e544(undefined8 param_1)

{
  undefined8 extraout_x8;
  long unaff_x21;
  
  FUN_100450904();
  if (unaff_x21 != 0) {
    param_1 = extraout_x8;
  }
  return param_1;
}



/* Address: 0x10044e56c | FUN_10044e56c */

void FUN_10044e56c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100450904();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x10044e598 | FUN_10044e598 */

void FUN_10044e598(void)

{
  FUN_100451a54();
  return;
}



/* Address: 0x10044e5a4 | FUN_10044e5a4 */

void FUN_10044e5a4(void)

{
  FUN_100451a88();
  return;
}



/* Address: 0x10044e5ac | FUN_10044e5ac */

undefined1  [16] FUN_10044e5ac(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Address: 0x10044e5dc | FUN_10044e5dc */

void FUN_10044e5dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Address: 0x10044e610 | FUN_10044e610 */

undefined1  [16] FUN_10044e610(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044e620 | FUN_10044e620 */

undefined1  [16] FUN_10044e620(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x80);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88));
  return auVar1;
}



/* Address: 0x10044e650 | FUN_10044e650 */

void FUN_10044e650(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  *(undefined8 *)(unaff_x20 + 0x88) = param_2;
  return;
}



/* Address: 0x10044e684 | FUN_10044e684 */

undefined1  [16] FUN_10044e684(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x80;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044e694 | FUN_10044e694 */

undefined1  [16] FUN_10044e694(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x90);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98));
  return auVar1;
}



/* Address: 0x10044e6c4 | FUN_10044e6c4 */

void FUN_10044e6c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98));
  *(undefined8 *)(unaff_x20 + 0x90) = param_1;
  *(undefined8 *)(unaff_x20 + 0x98) = param_2;
  return;
}



/* Address: 0x10044e6f8 | FUN_10044e6f8 */

undefined1  [16] FUN_10044e6f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x90;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044e708 | FUN_10044e708 */

undefined1 * FUN_10044e708(char param_1)

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
  if ((param_1 == '\0') || (param_1 == '\x01')) {
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
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x10;
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
    *(undefined1 *)(uVar4 + uVar1 + 0x20) = 3;
    *puVar6 = uVar4;
    _swift_endAccess(auStack_48);
  }
  return puVar3;
}



/* Address: 0x10044e874 | FUN_10044e874 */

void FUN_10044e874(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char cVar4;
  char *pcVar5;
  char *unaff_x20;
  String SVar6;
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0x8000000100da69f0;
  pcVar5 = (char *)0xd000000000000012;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xee0065756c615665;
    pcVar5 = (char *)0x727574616e676973;
  }
  pcVar2 = (char *)0x74726563;
  if (cVar4 != '\0') {
    pcVar2 = pcVar5;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  SVar6.bridgeObject = puVar3;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10044e8f8 | FUN_10044e8f8 */

void FUN_10044e8f8(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar1 = (undefined1 *)0x8000000100da69f0;
  pcVar4 = (char *)0xd000000000000012;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0xee0065756c615665;
    pcVar4 = (char *)0x727574616e676973;
  }
  pcVar2 = (char *)0x74726563;
  if (cVar3 != '\0') {
    pcVar2 = pcVar4;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044e99c | FUN_10044e99c */

void FUN_10044e99c(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044e708(*unaff_x20);
  return;
}



/* Address: 0x10044e9a4 | thunk_FUN_10044e9a8 */

void thunk_FUN_10044e9a8(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar1 = (undefined1 *)0x8000000100da69f0;
  pcVar4 = (char *)0xd000000000000012;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0xee0065756c615665;
    pcVar4 = (char *)0x727574616e676973;
  }
  pcVar2 = (char *)0x74726563;
  if (cVar3 != '\0') {
    pcVar2 = pcVar4;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044e9a8 | FUN_10044e9a8 */

void FUN_10044e9a8(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;
  Hasher HVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar1 = (undefined1 *)0x8000000100da69f0;
  pcVar4 = (char *)0xd000000000000012;
  if (cVar3 != '\x01') {
    puVar1 = (undefined1 *)0xee0065756c615665;
    pcVar4 = (char *)0x727574616e676973;
  }
  pcVar2 = (char *)0x74726563;
  if (cVar3 != '\0') {
    pcVar2 = pcVar4;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (cVar3 != '\0') {
    HVar5.unknown = puVar1;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044ea50 | FUN_10044ea50 */

undefined1  [16] FUN_10044ea50(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0x8000000100da69f0;
  uVar5 = 0xd000000000000012;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xee0065756c615665;
    uVar5 = 0x727574616e676973;
  }
  uVar2 = 0x74726563;
  if (cVar4 != '\0') {
    uVar2 = uVar5;
  }
  puVar3 = &DAT_e400000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = uVar2;
  return auVar6;
}



/* Address: 0x10044eab4 | FUN_10044eab4 */

void FUN_10044eab4(undefined1 *param_1,undefined1 param_2)

{
  FUN_100453e84();
  *param_1 = param_2;
  return;
}



/* Address: 0x10044ead8 | FUN_10044ead8 */

String FUN_10044ead8(void)

{
  String SVar1;
  
  FUN_100453398();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044eb00 | FUN_10044eb00 */

String FUN_10044eb00(void)

{
  String SVar1;
  
  FUN_100453398();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044eb28 | FUN_10044eb28 */

void FUN_10044eb28(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
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
  
  FUN_1004505a0(&local_c0);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_58;
    param_1[0xc] = local_60;
    param_1[0xf] = uStack_48;
    param_1[0xe] = uStack_50;
    param_1[0x11] = uStack_38;
    param_1[0x10] = local_40;
    param_1[0x13] = uStack_28;
    param_1[0x12] = uStack_30;
    param_1[5] = uStack_98;
    param_1[4] = local_a0;
    param_1[7] = uStack_88;
    param_1[6] = uStack_90;
    param_1[9] = uStack_78;
    param_1[8] = local_80;
    param_1[0xb] = uStack_68;
    param_1[10] = uStack_70;
    param_1[1] = uStack_b8;
    *param_1 = local_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
  }
  return;
}



/* Address: 0x10044eb80 | FUN_10044eb80 */

undefined1  [16] FUN_10044eb80(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Address: 0x10044ebb0 | FUN_10044ebb0 */

undefined1  [16] FUN_10044ebb0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Address: 0x10044ebe0 | FUN_10044ebe0 */

void FUN_10044ebe0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Address: 0x10044ec14 | FUN_10044ec14 */

undefined1  [16] FUN_10044ec14(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Address: 0x10044ec44 | FUN_10044ec44 */

void FUN_10044ec44(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Address: 0x10044ec78 | FUN_10044ec78 */

undefined1  [16] FUN_10044ec78(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Address: 0x10044eca8 | FUN_10044eca8 */

void FUN_10044eca8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Address: 0x10044ecdc | FUN_10044ecdc */

undefined1  [16] FUN_10044ecdc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Address: 0x10044ed0c | FUN_10044ed0c */

void FUN_10044ed0c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Address: 0x10044ed40 | FUN_10044ed40 */

undefined1  [16] FUN_10044ed40(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044ed50 | FUN_10044ed50 */

undefined1  [16] FUN_10044ed50(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Address: 0x10044ed80 | FUN_10044ed80 */

void FUN_10044ed80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Address: 0x10044edb4 | FUN_10044edb4 */

undefined1  [16] FUN_10044edb4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x10044edc4 | FUN_10044edc4 */

undefined1 * FUN_10044edc4(byte param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_48 [24];
  
  puVar2 = (undefined1 *)0x0;
  FUN_10044add8();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = (ulong *)(puVar2 + 0x10);
  *puVar6 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        _swift_beginAccess(puVar6,auStack_48,0x21,0);
        *puVar6 = (ulong)puVar1;
        uVar3 = 0;
        FUN_10044c504(0,1,1,puVar1);
        *puVar6 = uVar3;
        uVar5 = *(ulong *)(uVar3 + 0x10);
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
          uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_10044c504(uVar3,uVar5 + 1,1);
        }
        *(ulong *)(uVar3 + 0x10) = uVar5 + 1;
        *(undefined1 *)(uVar3 + uVar5 + 0x20) = 0x80;
        *(ulong *)(puVar2 + 0x10) = uVar3;
        puVar4 = auStack_48;
        _swift_endAccess();
        FUN_10044ac88();
        _swift_retain();
        _swift_release(puVar2);
        _swift_beginAccess(puVar4 + 0x10,auStack_48,0x21,0);
        uVar7 = *(ulong *)(puVar4 + 0x10);
        uVar5 = uVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(puVar4 + 0x10) = uVar7;
        uVar3 = uVar7;
        if ((uVar5 & 1) == 0) {
          uVar3 = 0;
          FUN_10044c504(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
          *(ulong *)(puVar4 + 0x10) = uVar3;
        }
        uVar5 = *(ulong *)(uVar3 + 0x10);
        uVar7 = uVar3;
        if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
          uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
          FUN_10044c504(uVar7,uVar5 + 1,1,uVar3);
        }
        *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
        *(undefined1 *)(uVar7 + uVar5 + 0x20) = 2;
        *(ulong *)(puVar4 + 0x10) = uVar7;
        _swift_endAccess(auStack_48);
        return puVar4;
      }
      _swift_beginAccess(puVar6,auStack_48,0x21,0);
      uVar3 = 0;
      FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      uVar5 = *(ulong *)(uVar3 + 0x10);
      if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
        uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
        FUN_10044c504(uVar3,uVar5 + 1,1);
      }
      *(ulong *)(uVar3 + 0x10) = uVar5 + 1;
      *(undefined1 *)(uVar3 + uVar5 + 0x20) = 2;
      *puVar6 = uVar3;
      _swift_endAccess(auStack_48);
      return puVar2;
    }
  }
  else if ((5 < param_1) && (param_1 != 6)) {
    _swift_beginAccess(puVar6,auStack_48,0x21,0);
    *puVar6 = (ulong)puVar1;
    uVar3 = 0;
    FUN_10044c504(0,1,1,puVar1);
    *puVar6 = uVar3;
    uVar5 = *(ulong *)(uVar3 + 0x10);
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
      uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_10044c504(uVar3,uVar5 + 1,1);
    }
    *(ulong *)(uVar3 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar3 + uVar5 + 0x20) = 0x83;
    *(ulong *)(puVar2 + 0x10) = uVar3;
    puVar4 = auStack_48;
    _swift_endAccess();
    FUN_10044ac88();
    _swift_retain();
    _swift_release(puVar2);
    _swift_beginAccess(puVar4 + 0x10,auStack_48,0x21,0);
    uVar7 = *(ulong *)(puVar4 + 0x10);
    uVar5 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(puVar4 + 0x10) = uVar7;
    uVar3 = uVar7;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
      FUN_10044c504(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      *(ulong *)(puVar4 + 0x10) = uVar3;
    }
    uVar5 = *(ulong *)(uVar3 + 0x10);
    uVar7 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_10044c504(uVar7,uVar5 + 1,1,uVar3);
    }
    *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar7 + uVar5 + 0x20) = 0x10;
    *(ulong *)(puVar4 + 0x10) = uVar7;
    puVar2 = auStack_48;
    _swift_endAccess(puVar2);
    FUN_10044ac88();
    _swift_retain();
    _swift_release(puVar4);
    return puVar2;
  }
  _swift_beginAccess(puVar6,auStack_48,0x21,0);
  *puVar6 = (ulong)puVar1;
  uVar3 = 0;
  FUN_10044c504(0,1,1,puVar1);
  *puVar6 = uVar3;
  uVar5 = *(ulong *)(uVar3 + 0x10);
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_10044c504(uVar3,uVar5 + 1,1);
  }
  *(ulong *)(uVar3 + 0x10) = uVar5 + 1;
  *(undefined1 *)(uVar3 + uVar5 + 0x20) = 0x10;
  *(ulong *)(puVar2 + 0x10) = uVar3;
  puVar4 = auStack_48;
  _swift_endAccess(puVar4);
  FUN_10044ac88();
  _swift_retain();
  _swift_release(puVar2);
  return puVar4;
}



/* Address: 0x10044f1ac | FUN_10044f1ac */

void FUN_10044f1ac(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar5.unknown = (undefined1 *)0x8000000100da69d0;
  pcVar4 = (char *)0xd000000000000014;
  if (param_1 != 6) {
    HVar5.unknown = (undefined1 *)0xea0000000000736e;
    pcVar4 = (char *)0x6f69736e65747865;
  }
  pcVar1 = (char *)0x79746964696c6176;
  if (param_1 != 4) {
    pcVar1 = (char *)0x7463656a627573;
  }
  puVar6 = &DAT_e800000000000000;
  if (param_1 != 4) {
    puVar6 = &DAT_e700000000000000;
  }
  if (param_1 < 6) {
    HVar5.unknown = puVar6;
    pcVar4 = pcVar1;
  }
  puVar6 = (undefined1 *)0xe900000000000065;
  pcVar1 = (char *)0x727574616e676973;
  if (param_1 != 2) {
    puVar6 = &DAT_e600000000000000;
    pcVar1 = (char *)0x726575737369;
  }
  pcVar2 = (char *)0x6e6f6973726576;
  if (param_1 != 0) {
    pcVar2 = (char *)0x754e6c6169726573;
  }
  puVar3 = &DAT_e700000000000000;
  if (param_1 != 0) {
    puVar3 = (undefined1 *)0xec0000007265626d;
  }
  if (param_1 < 2) {
    puVar6 = puVar3;
    pcVar1 = pcVar2;
  }
  if (param_1 < 4) {
    HVar5.unknown = puVar6;
    pcVar4 = pcVar1;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044f300 | FUN_10044f300 */

void FUN_10044f300(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_10044cba0(param_1,*unaff_x20);
  return;
}



/* Address: 0x10044f308 | FUN_10044f308 */

void FUN_10044f308(__int64 param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  byte bVar4;
  char *pcVar5;
  Hasher HVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  String SVar8;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar6.unknown = (undefined1 *)0x8000000100da69d0;
  pcVar5 = (char *)0xd000000000000014;
  if (bVar4 != 6) {
    HVar6.unknown = (undefined1 *)0xea0000000000736e;
    pcVar5 = (char *)0x6f69736e65747865;
  }
  pcVar1 = (char *)0x79746964696c6176;
  if (bVar4 != 4) {
    pcVar1 = (char *)0x7463656a627573;
  }
  puVar7 = &DAT_e800000000000000;
  if (bVar4 != 4) {
    puVar7 = &DAT_e700000000000000;
  }
  if (bVar4 < 6) {
    HVar6.unknown = puVar7;
    pcVar5 = pcVar1;
  }
  puVar7 = (undefined1 *)0xe900000000000065;
  pcVar1 = (char *)0x727574616e676973;
  if (bVar4 != 2) {
    puVar7 = &DAT_e600000000000000;
    pcVar1 = (char *)0x726575737369;
  }
  pcVar2 = (char *)0x6e6f6973726576;
  if (bVar4 != 0) {
    pcVar2 = (char *)0x754e6c6169726573;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0xec0000007265626d;
  }
  if (bVar4 < 2) {
    puVar7 = puVar3;
    pcVar1 = pcVar2;
  }
  if (bVar4 < 4) {
    HVar6.unknown = puVar7;
    pcVar5 = pcVar1;
  }
  SVar8.bridgeObject = HVar6.unknown;
  SVar8.str = pcVar5;
  Swift::String::hash((Hasher)auStack_68,SVar8);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x10044f454 | FUN_10044f454 */

void FUN_10044f454(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044edc4(*unaff_x20);
  return;
}



/* Address: 0x10044f45c | FUN_10044f45c */

void FUN_10044f45c(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044f1ac(*unaff_x20);
  return;
}



/* Address: 0x10044f464 | FUN_10044f464 */

undefined1  [16] FUN_10044f464(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  byte *unaff_x20;
  undefined1 auVar8 [16];
  
  bVar4 = *unaff_x20;
  puVar6 = (undefined1 *)0x8000000100da69d0;
  uVar5 = 0xd000000000000014;
  if (bVar4 != 6) {
    puVar6 = (undefined1 *)0xea0000000000736e;
    uVar5 = 0x6f69736e65747865;
  }
  uVar1 = 0x79746964696c6176;
  if (bVar4 != 4) {
    uVar1 = 0x7463656a627573;
  }
  puVar7 = &DAT_e800000000000000;
  if (bVar4 != 4) {
    puVar7 = &DAT_e700000000000000;
  }
  if (bVar4 < 6) {
    puVar6 = puVar7;
    uVar5 = uVar1;
  }
  puVar7 = (undefined1 *)0xe900000000000065;
  uVar1 = 0x727574616e676973;
  if (bVar4 != 2) {
    puVar7 = &DAT_e600000000000000;
    uVar1 = 0x726575737369;
  }
  uVar2 = 0x6e6f6973726576;
  if (bVar4 != 0) {
    uVar2 = 0x754e6c6169726573;
  }
  puVar3 = &DAT_e700000000000000;
  if (bVar4 != 0) {
    puVar3 = (undefined1 *)0xec0000007265626d;
  }
  if (bVar4 < 2) {
    puVar7 = puVar3;
    uVar1 = uVar2;
  }
  if (bVar4 < 4) {
    puVar6 = puVar7;
    uVar5 = uVar1;
  }
  auVar8._8_8_ = puVar6;
  auVar8._0_8_ = uVar5;
  return auVar8;
}



/* Address: 0x10044f570 | FUN_10044f570 */

void FUN_10044f570(undefined1 *param_1,undefined1 param_2)

{
  FUN_100453fa8();
  *param_1 = param_2;
  return;
}



/* Address: 0x10044f594 | FUN_10044f594 */

void FUN_10044f594(undefined1 *param_1)

{
  *param_1 = 8;
  return;
}



/* Address: 0x10044f5a0 | FUN_10044f5a0 */

String FUN_10044f5a0(void)

{
  String SVar1;
  
  FUN_10045332c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044f5c8 | FUN_10044f5c8 */

String FUN_10044f5c8(void)

{
  String SVar1;
  
  FUN_10045332c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044f5f0 | FUN_10044f5f0 */

void FUN_10044f5f0(undefined8 *param_1)

{
  long unaff_x21;
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
  
  FUN_100450e54(&local_90);
  if (unaff_x21 == 0) {
    param_1[9] = uStack_48;
    param_1[8] = local_50;
    param_1[0xb] = uStack_38;
    param_1[10] = uStack_40;
    param_1[0xd] = uStack_28;
    param_1[0xc] = local_30;
    param_1[1] = uStack_88;
    *param_1 = local_90;
    param_1[3] = uStack_78;
    param_1[2] = uStack_80;
    param_1[5] = uStack_68;
    param_1[4] = local_70;
    param_1[7] = uStack_58;
    param_1[6] = uStack_60;
  }
  return;
}



/* Address: 0x10044f640 | FUN_10044f640 */

void FUN_10044f640(void)

{
  FUN_10045159c();
  return;
}



/* Address: 0x10044f654 | FUN_10044f654 */

void FUN_10044f654(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10045159c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10044f67c | FUN_10044f67c */

undefined1  [16] FUN_10044f67c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Address: 0x10044f6ac | FUN_10044f6ac */

void FUN_10044f6ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x10044f6e0 | FUN_10044f6e0 */

undefined1  [16] FUN_10044f6e0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Address: 0x10044f710 | FUN_10044f710 */

void FUN_10044f710(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Address: 0x10044f744 | FUN_10044f744 */

undefined1  [16] FUN_10044f744(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Address: 0x10044f774 | FUN_10044f774 */

void FUN_10044f774(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Address: 0x10044f7a8 | FUN_10044f7a8 */

undefined1  [16] FUN_10044f7a8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  FUN_1001037b4(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Address: 0x10044f7d8 | FUN_10044f7d8 */

void FUN_10044f7d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Address: 0x10044f80c | FUN_10044f80c */

undefined1 * FUN_10044f80c(byte param_1)

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
  
  puVar3 = (undefined1 *)0x0;
  FUN_10044add8();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = (ulong *)(puVar3 + 0x10);
  *puVar8 = (ulong)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_1 < 2) {
    if (param_1 == 0) {
      _swift_beginAccess(puVar8,auStack_48,0x21,0);
      uVar4 = 0;
      FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
      uVar1 = *(ulong *)(uVar4 + 0x10);
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
        uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_10044c504(uVar4,uVar1 + 1,1);
      }
      *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
      lVar6 = uVar4 + uVar1;
      uVar7 = 2;
      goto LAB_10044f970;
    }
  }
  else if ((param_1 != 2) && (param_1 != 3)) {
    _swift_beginAccess(puVar8,auStack_48,0x21,0);
    uVar4 = 0;
    FUN_10044c504(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_10044c504(uVar4,uVar1 + 1,1);
    }
    *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
    lVar6 = uVar4 + uVar1;
    uVar7 = 4;
LAB_10044f970:
    *(undefined1 *)(lVar6 + 0x20) = uVar7;
    *puVar8 = uVar4;
    _swift_endAccess(auStack_48);
    return puVar3;
  }
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
  *(undefined1 *)(uVar4 + uVar1 + 0x20) = 0x10;
  *(ulong *)(puVar3 + 0x10) = uVar4;
  puVar5 = auStack_48;
  _swift_endAccess(puVar5);
  FUN_10044ac88();
  _swift_retain();
  _swift_release(puVar3);
  return puVar5;
}



/* Address: 0x10044f9ec | FUN_10044f9ec */

void FUN_10044f9ec(Hasher param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar3 = *unaff_x20;
  pcVar6 = (char *)0x6e6f6973726576;
  puVar1 = (undefined1 *)0x8000000100da69b0;
  pcVar4 = (char *)0xd000000000000019;
  if (bVar3 != 3) {
    puVar1 = (undefined1 *)0xef74736567694464;
    pcVar4 = (char *)0x6574707972636e65;
  }
  puVar2 = (undefined1 *)0xef6d687469726f67;
  pcVar5 = (char *)0x6c41747365676964;
  if (bVar3 != 2) {
    puVar2 = puVar1;
    pcVar5 = pcVar4;
  }
  if (bVar3 != 0) {
    pcVar6 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar3 != 0) {
    puVar1 = (undefined1 *)0x8000000100da6990;
  }
  if (bVar3 < 2) {
    puVar2 = puVar1;
    pcVar5 = pcVar6;
  }
  SVar7.bridgeObject = puVar2;
  SVar7.str = pcVar5;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x10044fad0 | FUN_10044fad0 */

void FUN_10044fad0(__int64 param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar6 = (char *)0x6e6f6973726576;
  puVar1 = (undefined1 *)0x8000000100da69b0;
  pcVar3 = (char *)0xd000000000000019;
  if (bVar2 != 3) {
    puVar1 = (undefined1 *)0xef74736567694464;
    pcVar3 = (char *)0x6574707972636e65;
  }
  HVar5.unknown = (undefined1 *)0xef6d687469726f67;
  pcVar4 = (char *)0x6c41747365676964;
  if (bVar2 != 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar3;
  }
  if (bVar2 != 0) {
    pcVar6 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar2 != 0) {
    puVar1 = (undefined1 *)0x8000000100da6990;
  }
  if (bVar2 < 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar6;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10044fbd4 | FUN_10044fbd4 */

void FUN_10044fbd4(void)

{
  undefined1 *unaff_x20;
  
  FUN_10044f80c(*unaff_x20);
  return;
}



/* Address: 0x10044fbdc | thunk_FUN_10044fbe0 */

void thunk_FUN_10044fbe0(void)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  char *pcVar6;
  byte *unaff_x20;
  String SVar7;
  undefined1 auStack_68 [72];
  
  bVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar6 = (char *)0x6e6f6973726576;
  puVar1 = (undefined1 *)0x8000000100da69b0;
  pcVar3 = (char *)0xd000000000000019;
  if (bVar2 != 3) {
    puVar1 = (undefined1 *)0xef74736567694464;
    pcVar3 = (char *)0x6574707972636e65;
  }
  HVar5.unknown = (undefined1 *)0xef6d687469726f67;
  pcVar4 = (char *)0x6c41747365676964;
  if (bVar2 != 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar3;
  }
  if (bVar2 != 0) {
    pcVar6 = (char *)0xd000000000000010;
  }
  puVar1 = &DAT_e700000000000000;
  if (bVar2 != 0) {
    puVar1 = (undefined1 *)0x8000000100da6990;
  }
  if (bVar2 < 2) {
    HVar5.unknown = puVar1;
    pcVar4 = pcVar6;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}


