/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009d95ec | thunk_FUN_1009d84d8 */

void thunk_FUN_1009d84d8(void)

{
  FUN_1003aa0a4(0x38);
  return;
}



/* Address: 0x1009d95f0 | thunk_FUN_1009d84d8 */

void thunk_FUN_1009d84d8(void)

{
  FUN_1003aa0a4(0x38);
  return;
}



/* Address: 0x1009d95f4 | thunk_FUN_1009d8944 */

void thunk_FUN_1009d8944(void)

{
  FUN_1003aa0a4(0x28);
  return;
}



/* Address: 0x1009d95f8 | thunk_FUN_1009d8944 */

void thunk_FUN_1009d8944(void)

{
  FUN_1003aa0a4(0x28);
  return;
}



/* Address: 0x1009d95fc | thunk_FUN_1009d8cb4 */

void thunk_FUN_1009d8cb4(void)

{
  FUN_1009d8cb4();
  return;
}



/* Address: 0x1009d9600 | thunk_FUN_1009d8944 */

void thunk_FUN_1009d8944(void)

{
  FUN_1003aa0a4(0x28);
  return;
}



/* Address: 0x1009d9604 | FUN_1009d9604 */

void FUN_1009d9604(long param_1,long param_2,undefined1 param_3,undefined1 param_4)

{
  FUN_100076688(param_2,param_1);
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x29) = param_4;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::DefaultStringInterpolation::_appendInterpolation();
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0xe000000000000000;
  FUN_100004594(param_2);
  return;
}



/* Address: 0x1009d967c | FUN_1009d967c */

void FUN_1009d967c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_230 [176];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined1 *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined1 local_e8;
  undefined7 uStack_e7;
  undefined1 uStack_e0;
  undefined7 uStack_df;
  undefined1 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  local_160 = 0x616e6769732d6c73;
  uStack_158 = 0xe90000000000006c;
  local_150 = 0xd00000000000001a;
  uStack_148 = 0x8000000100db71f0;
  local_140 = 0xd000000000000016;
  uStack_138 = 0x8000000100db7210;
  local_130 = 0x69767265732d6c73;
  uStack_128 = 0xea00000000006563;
  local_120 = 0x69767265732d6c73;
  uStack_118 = 0xeb00000000736563;
  local_110 = 0x726f7272652d6c73;
  puStack_108 = &DAT_e800000000000000;
  local_100 = 0;
  uStack_f8 = 0;
  local_f0 = 1;
  local_e8 = 0;
  uStack_e7 = 0;
  uStack_e0 = 0;
  uStack_df = 0;
  uStack_d8 = 1;
  local_b0 = 0x616e6769732d6c73;
  uStack_a8 = 0xe90000000000006c;
  local_a0 = 0xd00000000000001a;
  uStack_98 = 0x8000000100db71f0;
  local_90 = 0xd000000000000016;
  uStack_88 = 0x8000000100db7210;
  local_80 = 0x69767265732d6c73;
  uStack_78 = 0xea00000000006563;
  local_70 = 0x69767265732d6c73;
  uStack_68 = 0xeb00000000736563;
  local_60 = 0x726f7272652d6c73;
  puStack_58 = &DAT_e800000000000000;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 1;
  local_38 = 0;
  uStack_30 = 0;
  local_28 = 1;
  local_180 = param_2;
  uStack_178 = param_3;
  local_170 = param_4;
  uStack_168 = param_5;
  local_d0 = param_2;
  uStack_c8 = param_3;
  local_c0 = param_4;
  uStack_b8 = param_5;
  FUN_1009d79bc(&local_180,auStack_230);
  FUN_1009d7988(&local_d0);
  param_1[0x11] = uStack_f8;
  param_1[0x10] = local_100;
  param_1[0x13] = CONCAT71(uStack_e7,local_e8);
  param_1[0x12] = CONCAT71(uStack_ef,local_f0);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_d8,uStack_df);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_e0,uStack_e7);
  param_1[9] = uStack_138;
  param_1[8] = local_140;
  param_1[0xb] = uStack_128;
  param_1[10] = local_130;
  param_1[0xd] = uStack_118;
  param_1[0xc] = local_120;
  param_1[0xf] = puStack_108;
  param_1[0xe] = local_110;
  param_1[1] = uStack_178;
  *param_1 = local_180;
  param_1[3] = uStack_168;
  param_1[2] = local_170;
  param_1[5] = uStack_158;
  param_1[4] = local_160;
  param_1[7] = uStack_148;
  param_1[6] = local_150;
  return;
}



/* Address: 0x1009d97c8 | FUN_1009d97c8 */

undefined1  [16] FUN_1009d97c8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Address: 0x1009d97f4 | FUN_1009d97f4 */

void FUN_1009d97f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Address: 0x1009d9828 | FUN_1009d9828 */

void FUN_1009d9828(void)

{
  FUN_1009d9870();
  return;
}



/* Address: 0x1009d9834 | FUN_1009d9834 */

void FUN_1009d9834(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1009d98a4();
  uVar1 = param_1[4];
  uVar3 = param_1[7];
  uVar2 = param_1[6];
  unaff_x20[5] = param_1[5];
  unaff_x20[4] = uVar1;
  unaff_x20[7] = uVar3;
  unaff_x20[6] = uVar2;
  uVar1 = param_1[8];
  uVar3 = param_1[0xb];
  uVar2 = param_1[10];
  unaff_x20[9] = param_1[9];
  unaff_x20[8] = uVar1;
  unaff_x20[0xb] = uVar3;
  unaff_x20[10] = uVar2;
  uVar1 = *param_1;
  uVar3 = param_1[3];
  uVar2 = param_1[2];
  unaff_x20[1] = param_1[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  return;
}



/* Address: 0x1009d9870 | FUN_1009d9870 */

undefined8 FUN_1009d9870(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1009da920(param_2,param_1,&DAT_100f26580);
  return param_2;
}



/* Address: 0x1009d98a4 | FUN_1009d98a4 */

undefined8 FUN_1009d98a4(undefined8 param_1)

{
  thunk_FUN_1009da8d4(param_1,&DAT_100f26500);
  return param_1;
}



/* Address: 0x1009d98d0 | FUN_1009d98d0 */

undefined * FUN_1009d98d0(void)

{
  return &DAT_100c8c9c0;
}



/* Address: 0x1009d98dc | FUN_1009d98dc */

undefined * FUN_1009d98dc(void)

{
  return &DAT_100c8c9c1;
}



/* Address: 0x1009d98e8 | FUN_1009d98e8 */

undefined * FUN_1009d98e8(void)

{
  return &DAT_100c8c9c2;
}



/* Address: 0x1009d98f4 | FUN_1009d98f4 */

undefined1  [16] FUN_1009d98f4(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  
  if (param_1 == '\0') {
    auVar4._8_8_ = 0xeb0000000070756f;
    auVar4._0_8_ = 0x72476c65636e6163;
    return auVar4;
  }
  puVar2 = (undefined1 *)0x8000000100db7aa0;
  uVar1 = 0xd000000000000017;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e600000000000000;
    uVar1 = 0x65726f6e6769;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1009d9954 | FUN_1009d9954 */

undefined1  [16] FUN_1009d9954(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  puVar4 = (undefined1 *)0x8000000100db7aa0;
  uVar2 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    puVar4 = &DAT_e600000000000000;
    uVar2 = 0x65726f6e6769;
  }
  puVar1 = (undefined1 *)0xeb0000000070756f;
  uVar3 = 0x72476c65636e6163;
  if (*unaff_x20 != '\0') {
    puVar1 = puVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x1009d99b8 | FUN_1009d99b8 */

void FUN_1009d99b8(undefined8 param_1)

{
  FUN_100004594();
  FUN_100076508(param_1);
  return;
}



/* Address: 0x1009d99e4 | FUN_1009d99e4 */

void FUN_1009d99e4(long param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100076508(param_2,param_1);
  *(undefined1 *)(param_1 + 0x28) = param_3;
  *(undefined1 *)(param_1 + 0x29) = param_4;
  *(undefined8 *)(param_1 + 0x30) = param_5;
  *(undefined8 *)(param_1 + 0x38) = param_6;
  return;
}



/* Address: 0x1009d9a34 | FUN_1009d9a34 */

void FUN_1009d9a34(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009d8ea8(unaff_x20 + 0x20,param_1);
  return;
}



/* Address: 0x1009d9a40 | FUN_1009d9a40 */

void FUN_1009d9a40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009d9a48(param_1,unaff_x20 + 0x20);
  return;
}



/* Address: 0x1009d9a48 | FUN_1009d9a48 */

undefined8 FUN_1009d9a48(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1009daaa0(param_2,param_1,&DAT_100f26500);
  return param_2;
}



/* Address: 0x1009d9a7c | FUN_1009d9a7c */

Duration FUN_1009d9a7c(void)

{
  Duration DVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x90) == '\x01') {
    return (Duration)(undefined *)0x0;
  }
  DVar1 = Swift::Duration::init(*(__int64 *)(unaff_x20 + 0x80),*(__int64 *)(unaff_x20 + 0x88));
  return (Duration)DVar1.unknown;
}



/* Address: 0x1009d9ab8 | FUN_1009d9ab8 */

Duration FUN_1009d9ab8(Duration param_1,undefined8 param_2,char param_3)

{
  __int64 _Var1;
  __int64 _Var2;
  long unaff_x20;
  tuple2_conflict14 tVar3;
  
  if (param_3 != '\x01') {
    tVar3 = Swift::Duration::get_components(param_1);
    _Var2 = tVar3.seconds;
    tVar3 = Swift::Duration::get_components(param_1);
    _Var1 = tVar3.attoseconds;
    param_1.unknown = (undefined *)tVar3.seconds;
  }
  else {
    _Var2 = 0;
    _Var1 = 0;
  }
  *(__int64 *)(unaff_x20 + 0x80) = _Var2;
  *(__int64 *)(unaff_x20 + 0x88) = _Var1;
  *(bool *)(unaff_x20 + 0x90) = param_3 == '\x01';
  return (Duration)param_1.unknown;
}



/* Address: 0x1009d9b18 | FUN_1009d9b18 */

undefined1  [16] FUN_1009d9b18(undefined8 *param_1)

{
  bool bVar1;
  Duration DVar2;
  __int64 attosecondsComponent;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  param_1[3] = unaff_x20;
  bVar1 = *(char *)(unaff_x20 + 0x90) != '\x01';
  if (bVar1) {
    attosecondsComponent = *(__int64 *)(unaff_x20 + 0x88);
    DVar2 = Swift::Duration::init(*(__int64 *)(unaff_x20 + 0x80),attosecondsComponent);
  }
  else {
    DVar2.unknown = (undefined *)0x0;
    attosecondsComponent = 0;
  }
  *param_1 = DVar2.unknown;
  param_1[1] = attosecondsComponent;
  *(bool *)(param_1 + 2) = !bVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_1009d9b70;
  return auVar3;
}



/* Address: 0x1009d9b70 | FUN_1009d9b70 */

undefined8 * FUN_1009d9b70(undefined8 *param_1)

{
  Duration DVar1;
  char cVar2;
  undefined8 *puVar3;
  __int64 _Var4;
  long lVar5;
  __int64 _Var6;
  tuple2_conflict14 tVar7;
  
  cVar2 = *(char *)(param_1 + 2);
  if (cVar2 != '\x01') {
    DVar1.unknown = (undefined *)*param_1;
    tVar7 = Swift::Duration::get_components(DVar1);
    _Var6 = tVar7.seconds;
    tVar7 = Swift::Duration::get_components(DVar1);
    _Var4 = tVar7.attoseconds;
    puVar3 = (undefined8 *)tVar7.seconds;
  }
  else {
    _Var6 = 0;
    _Var4 = 0;
    puVar3 = param_1;
  }
  lVar5 = param_1[3];
  *(__int64 *)(lVar5 + 0x80) = _Var6;
  *(__int64 *)(lVar5 + 0x88) = _Var4;
  *(bool *)(lVar5 + 0x90) = cVar2 == '\x01';
  return puVar3;
}



/* Address: 0x1009d9bdc | FUN_1009d9bdc */

Duration FUN_1009d9bdc(void)

{
  Duration DVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0xa8) == '\x01') {
    return (Duration)(undefined *)0x0;
  }
  DVar1 = Swift::Duration::init(*(__int64 *)(unaff_x20 + 0x98),*(__int64 *)(unaff_x20 + 0xa0));
  return (Duration)DVar1.unknown;
}



/* Address: 0x1009d9c18 | FUN_1009d9c18 */

Duration FUN_1009d9c18(Duration param_1,undefined8 param_2,char param_3)

{
  __int64 _Var1;
  __int64 _Var2;
  long unaff_x20;
  tuple2_conflict14 tVar3;
  
  if (param_3 != '\x01') {
    tVar3 = Swift::Duration::get_components(param_1);
    _Var2 = tVar3.seconds;
    tVar3 = Swift::Duration::get_components(param_1);
    _Var1 = tVar3.attoseconds;
    param_1.unknown = (undefined *)tVar3.seconds;
  }
  else {
    _Var2 = 0;
    _Var1 = 0;
  }
  *(__int64 *)(unaff_x20 + 0x98) = _Var2;
  *(__int64 *)(unaff_x20 + 0xa0) = _Var1;
  *(bool *)(unaff_x20 + 0xa8) = param_3 == '\x01';
  return (Duration)param_1.unknown;
}



/* Address: 0x1009d9c78 | FUN_1009d9c78 */

undefined1  [16] FUN_1009d9c78(undefined8 *param_1)

{
  bool bVar1;
  Duration DVar2;
  __int64 attosecondsComponent;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  param_1[3] = unaff_x20;
  bVar1 = *(char *)(unaff_x20 + 0xa8) != '\x01';
  if (bVar1) {
    attosecondsComponent = *(__int64 *)(unaff_x20 + 0xa0);
    DVar2 = Swift::Duration::init(*(__int64 *)(unaff_x20 + 0x98),attosecondsComponent);
  }
  else {
    DVar2.unknown = (undefined *)0x0;
    attosecondsComponent = 0;
  }
  *param_1 = DVar2.unknown;
  param_1[1] = attosecondsComponent;
  *(bool *)(param_1 + 2) = !bVar1;
  auVar3._8_8_ = param_1;
  auVar3._0_8_ = FUN_1009d9cd0;
  return auVar3;
}



/* Address: 0x1009d9cd0 | FUN_1009d9cd0 */

undefined8 * FUN_1009d9cd0(undefined8 *param_1)

{
  Duration DVar1;
  char cVar2;
  undefined8 *puVar3;
  __int64 _Var4;
  long lVar5;
  __int64 _Var6;
  tuple2_conflict14 tVar7;
  
  cVar2 = *(char *)(param_1 + 2);
  if (cVar2 != '\x01') {
    DVar1.unknown = (undefined *)*param_1;
    tVar7 = Swift::Duration::get_components(DVar1);
    _Var6 = tVar7.seconds;
    tVar7 = Swift::Duration::get_components(DVar1);
    _Var4 = tVar7.attoseconds;
    puVar3 = (undefined8 *)tVar7.seconds;
  }
  else {
    _Var6 = 0;
    _Var4 = 0;
    puVar3 = param_1;
  }
  lVar5 = param_1[3];
  *(__int64 *)(lVar5 + 0x98) = _Var6;
  *(__int64 *)(lVar5 + 0xa0) = _Var4;
  *(bool *)(lVar5 + 0xa8) = cVar2 == '\x01';
  return puVar3;
}



/* Address: 0x1009d9d3c | FUN_1009d9d3c */

void FUN_1009d9d3c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *param_1 = param_2;
  param_1[1] = puVar1;
  param_1[2] = puVar1;
  param_1[3] = param_3;
  param_1[4] = 0x616e6769732d6c73;
  param_1[5] = 0xe90000000000006c;
  param_1[6] = 0xd00000000000001a;
  param_1[7] = 0x8000000100db71f0;
  param_1[8] = 0xd000000000000016;
  param_1[9] = 0x8000000100db7210;
  param_1[10] = 0x69767265732d6c73;
  param_1[0xb] = 0xea00000000006563;
  param_1[0xc] = 0x69767265732d6c73;
  param_1[0xd] = 0xeb00000000736563;
  param_1[0xe] = 0x726f7272652d6c73;
  param_1[0xf] = &DAT_e800000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}



/* Address: 0x1009d9df8 | FUN_1009d9df8 */

void FUN_1009d9df8(undefined8 *param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_d0 [24];
  undefined8 local_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined *local_68;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 == 0) {
    _swift_bridgeObjectRelease(param_2);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1009d705c(0,lVar3,0);
    lVar4 = param_2 + 0x20;
    do {
      puVar2 = local_68;
      FUN_100076688(lVar4,auStack_d0);
      FUN_100076688(auStack_d0,&local_a8);
      uStack_80 = 0;
      FUN_100004640(auStack_d0,local_b8);
      Swift::DefaultStringInterpolation::_appendInterpolation();
      FUN_100004594(auStack_d0);
      local_78 = 0;
      uStack_70 = 0xe000000000000000;
      uVar1 = *(ulong *)(puVar2 + 0x10);
      local_68 = puVar2;
      if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
        FUN_1009d705c(1 < *(ulong *)(puVar2 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(ulong *)(local_68 + uVar1 * 0x40 + 0x48) = CONCAT62(uStack_7e,uStack_80);
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x40) = local_88;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x58) = uStack_70;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x50) = local_78;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x28) = uStack_a0;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x20) = local_a8;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x38) = uStack_90;
      *(undefined8 *)(local_68 + uVar1 * 0x40 + 0x30) = local_98;
      lVar4 = lVar4 + 0x28;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  *param_1 = puVar5;
  param_1[1] = puVar2;
  param_1[2] = puVar2;
  param_1[3] = param_3;
  param_1[4] = 0x616e6769732d6c73;
  param_1[5] = 0xe90000000000006c;
  param_1[6] = 0xd00000000000001a;
  param_1[7] = 0x8000000100db71f0;
  param_1[8] = 0xd000000000000016;
  param_1[9] = 0x8000000100db7210;
  param_1[10] = 0x69767265732d6c73;
  param_1[0xb] = 0xea00000000006563;
  param_1[0xc] = 0x69767265732d6c73;
  param_1[0xd] = 0xeb00000000736563;
  param_1[0xe] = 0x726f7272652d6c73;
  param_1[0xf] = &DAT_e800000000000000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 1;
  return;
}



/* Address: 0x1009d9ffc | FUN_1009d9ffc */

void FUN_1009d9ffc(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined *local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined1 *puStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined7 uStack_13f;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  ulong uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined1 local_78;
  undefined *local_70;
  
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 == 0) {
    _swift_bridgeObjectRelease(param_2);
    local_1d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1009d705c(0,lVar5,0);
    lVar6 = param_2 + 0x20;
    do {
      puVar4 = local_70;
      FUN_100076688(lVar6,&local_1d0);
      FUN_100076688(&local_1d0,&local_120);
      uStack_f8 = uStack_f8 & 0xffffffffffff0000;
      local_280 = 0;
      uStack_278 = 0xe000000000000000;
      FUN_100004640(&local_1d0,local_1b8);
      Swift::DefaultStringInterpolation::_appendInterpolation();
      uVar3 = uStack_278;
      uVar2 = local_280;
      FUN_100004594(&local_1d0);
      local_f0 = uVar2;
      uStack_e8 = uVar3;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_70 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1009d705c(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_70;
      *(ulong *)(local_70 + 0x10) = uVar1 + 1;
      *(ulong *)(local_70 + uVar1 * 0x40 + 0x48) = uStack_f8;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x40) = local_100;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x58) = uStack_e8;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x50) = local_f0;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x28) = uStack_118;
      *(undefined **)(local_70 + uVar1 * 0x40 + 0x20) = local_120;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x38) = uStack_108;
      *(undefined8 *)(local_70 + uVar1 * 0x40 + 0x30) = local_110;
      lVar6 = lVar6 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    _swift_bridgeObjectRelease(param_2);
    local_1d0 = puVar4;
  }
  local_1b0 = 0x616e6769732d6c73;
  uStack_1a8 = 0xe90000000000006c;
  local_1a0 = 0xd00000000000001a;
  uStack_198 = 0x8000000100db71f0;
  local_190 = 0xd000000000000016;
  uStack_188 = 0x8000000100db7210;
  local_180 = 0x69767265732d6c73;
  uStack_178 = 0xea00000000006563;
  local_170 = 0x69767265732d6c73;
  uStack_168 = 0xeb00000000736563;
  local_160 = 0x726f7272652d6c73;
  puStack_158 = &DAT_e800000000000000;
  local_150 = 0;
  uStack_148 = 0;
  local_140 = 1;
  local_138 = 0;
  uStack_137 = 0;
  uStack_130 = 0;
  uStack_12f = 0;
  uStack_128 = 1;
  local_100 = 0x616e6769732d6c73;
  uStack_f8 = 0xe90000000000006c;
  local_f0 = 0xd00000000000001a;
  uStack_e8 = 0x8000000100db71f0;
  local_e0 = 0xd000000000000016;
  uStack_d8 = 0x8000000100db7210;
  local_d0 = 0x69767265732d6c73;
  uStack_c8 = 0xea00000000006563;
  local_c0 = 0x69767265732d6c73;
  uStack_b8 = 0xeb00000000736563;
  local_b0 = 0x726f7272652d6c73;
  puStack_a8 = &DAT_e800000000000000;
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = 1;
  local_80 = 0;
  local_88 = 0;
  local_78 = 1;
  uStack_1c8 = param_3;
  local_1c0 = param_4;
  local_1b8 = param_5;
  local_120 = local_1d0;
  uStack_118 = param_3;
  local_110 = param_4;
  uStack_108 = param_5;
  FUN_1009d79bc(&local_1d0,&local_280);
  FUN_1009d7988(&local_120);
  param_1[0x11] = uStack_148;
  param_1[0x10] = local_150;
  param_1[0x13] = CONCAT71(uStack_137,local_138);
  param_1[0x12] = CONCAT71(uStack_13f,local_140);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_128,uStack_12f);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_130,uStack_137);
  param_1[9] = uStack_188;
  param_1[8] = local_190;
  param_1[0xb] = uStack_178;
  param_1[10] = local_180;
  param_1[0xd] = uStack_168;
  param_1[0xc] = local_170;
  param_1[0xf] = puStack_158;
  param_1[0xe] = local_160;
  param_1[1] = uStack_1c8;
  *param_1 = local_1d0;
  param_1[3] = local_1b8;
  param_1[2] = local_1c0;
  param_1[5] = uStack_1a8;
  param_1[4] = local_1b0;
  param_1[7] = uStack_198;
  param_1[6] = local_1a0;
  return;
}



/* Address: 0x1009da27c | FUN_1009da27c */

void FUN_1009da27c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_250 [176];
  undefined *local_1a0;
  undefined8 uStack_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 *puStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined7 uStack_10f;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  uVar1 = 0xd00000000000002a;
  FUN_1005cbc74(0xd00000000000002a,0x8000000100db7a70);
  local_1a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_190 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_180 = 0x616e6769732d6c73;
  uStack_178 = 0xe90000000000006c;
  local_170 = 0xd00000000000001a;
  uStack_168 = 0x8000000100db71f0;
  local_160 = 0xd000000000000016;
  uStack_158 = 0x8000000100db7210;
  local_150 = 0x69767265732d6c73;
  uStack_148 = 0xea00000000006563;
  local_140 = 0x69767265732d6c73;
  uStack_138 = 0xeb00000000736563;
  local_130 = 0x726f7272652d6c73;
  puStack_128 = &DAT_e800000000000000;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 1;
  local_108 = 0;
  uStack_107 = 0;
  uStack_100 = 0;
  uStack_ff = 0;
  uStack_f8 = 1;
  local_f0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_d0 = 0x616e6769732d6c73;
  uStack_c8 = 0xe90000000000006c;
  local_c0 = 0xd00000000000001a;
  uStack_b8 = 0x8000000100db71f0;
  local_b0 = 0xd000000000000016;
  uStack_a8 = 0x8000000100db7210;
  local_a0 = 0x69767265732d6c73;
  uStack_98 = 0xea00000000006563;
  local_90 = 0x69767265732d6c73;
  uStack_88 = 0xeb00000000736563;
  local_80 = 0x726f7272652d6c73;
  puStack_78 = &DAT_e800000000000000;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 1;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 1;
  uStack_198 = param_2;
  uStack_188 = uVar1;
  uStack_e8 = param_2;
  uStack_d8 = uVar1;
  FUN_1009d79bc(&local_1a0,auStack_250);
  FUN_1009d7988(&local_f0);
  param_1[0x11] = uStack_118;
  param_1[0x10] = local_120;
  param_1[0x13] = CONCAT71(uStack_107,local_108);
  param_1[0x12] = CONCAT71(uStack_10f,local_110);
  *(ulong *)((long)param_1 + 0xa1) = CONCAT17(uStack_f8,uStack_ff);
  *(ulong *)((long)param_1 + 0x99) = CONCAT17(uStack_100,uStack_107);
  param_1[9] = uStack_158;
  param_1[8] = local_160;
  param_1[0xb] = uStack_148;
  param_1[10] = local_150;
  param_1[0xd] = uStack_138;
  param_1[0xc] = local_140;
  param_1[0xf] = puStack_128;
  param_1[0xe] = local_130;
  param_1[1] = uStack_198;
  *param_1 = local_1a0;
  param_1[3] = uStack_188;
  param_1[2] = local_190;
  param_1[5] = uStack_178;
  param_1[4] = local_180;
  param_1[7] = uStack_168;
  param_1[6] = local_170;
  return;
}



/* Address: 0x1009da3fc | FUN_1009da3fc */

void FUN_1009da3fc(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_release(param_1[3]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[7]);
  _swift_bridgeObjectRelease(param_1[9]);
  _swift_bridgeObjectRelease(param_1[0xb]);
  _swift_bridgeObjectRelease(param_1[0xd]);
  _swift_bridgeObjectRelease(param_1[0xf]);
  return;
}



/* Address: 0x1009da464 | FUN_1009da464 */

undefined8 * FUN_1009da464(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar6 = param_2[1];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar9 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar9;
  uVar11 = param_2[3];
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  uVar2 = param_2[7];
  uVar4 = param_2[8];
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  uVar3 = param_2[9];
  uVar5 = param_2[10];
  param_1[8] = uVar4;
  param_1[9] = uVar3;
  uVar4 = param_2[0xb];
  uVar7 = param_2[0xc];
  param_1[10] = uVar5;
  param_1[0xb] = uVar4;
  uVar5 = param_2[0xd];
  uVar10 = param_2[0xe];
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar5;
  uVar7 = param_2[0xf];
  param_1[0xe] = uVar10;
  param_1[0xf] = uVar7;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar10 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar10;
  uVar12 = param_2[0x14];
  uVar10 = param_2[0x13];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = uVar12;
  param_1[0x13] = uVar10;
  _swift_bridgeObjectRetain(uVar8);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar9);
  _swift_retain(uVar11);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar7);
  return param_1;
}



/* Address: 0x1009da564 | FUN_1009da564 */

undefined8 * FUN_1009da564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xc] = param_2[0xc];
  uVar1 = param_1[0xd];
  param_1[0xd] = param_2[0xd];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xe] = param_2[0xe];
  uVar1 = param_1[0xf];
  param_1[0xf] = param_2[0xf];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[0x11];
  uVar1 = param_2[0x10];
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  param_1[0x11] = uVar2;
  param_1[0x10] = uVar1;
  uVar2 = param_2[0x14];
  uVar1 = param_2[0x13];
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  param_1[0x14] = uVar2;
  param_1[0x13] = uVar1;
  return param_1;
}



/* Address: 0x1009da6d0 | FUN_1009da6d0 */

void FUN_1009da6d0(undefined8 *param_1,undefined8 *param_2)

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
  uVar6 = param_2[0x13];
  uVar5 = param_2[0x12];
  uVar7 = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)((long)param_1 + 0xa1) = *(undefined8 *)((long)param_2 + 0xa1);
  *(undefined8 *)((long)param_1 + 0x99) = uVar7;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar3;
  param_1[0x13] = uVar6;
  param_1[0x12] = uVar5;
  param_1[0xf] = uVar2;
  param_1[0xe] = uVar1;
  return;
}



/* Address: 0x1009da70c | FUN_1009da70c */

undefined8 * FUN_1009da70c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xd];
  uVar2 = param_1[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xf];
  uVar2 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  *(undefined1 *)(param_1 + 0x12) = *(undefined1 *)(param_2 + 0x12);
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(param_2 + 0x15);
  return param_1;
}



/* Address: 0x1009da7e0 | FUN_1009da7e0 */

int FUN_1009da7e0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0xa9) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009da828 | FUN_1009da828 */

void FUN_1009da828(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
    *(undefined1 *)(param_1 + 0x15) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0xa9) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0xa9) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1009da894 | FUN_1009da894 */

undefined1  [16] FUN_1009da894(void)

{
  return ZEXT816(0x100f26468);
}



/* Address: 0x1009da8a4 | FUN_1009da8a4 */

void FUN_1009da8a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  return;
}



/* Address: 0x1009da8c0 | FUN_1009da8c0 */

undefined1  [16] FUN_1009da8c0(void)

{
  return ZEXT816(0x100f26500);
}



/* Address: 0x1009da8d0 | thunk_FUN_1009da8d4 */

void thunk_FUN_1009da8d4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Address: 0x1009da8d4 | FUN_1009da8d4 */

void FUN_1009da8d4(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  return;
}



/* Address: 0x1009da91c | thunk_FUN_1009da920 */

undefined8 * thunk_FUN_1009da920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x1009da920 | FUN_1009da920 */

undefined8 * FUN_1009da920(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar5 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x1009da9ac | thunk_FUN_1009da9b0 */

undefined8 * thunk_FUN_1009da9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009da9b0 | FUN_1009da9b0 */

undefined8 * FUN_1009da9b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[10] = param_2[10];
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009daa9c | thunk_FUN_1009daaa0 */

undefined8 * thunk_FUN_1009daaa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1009daaa0 | FUN_1009daaa0 */

undefined8 * FUN_1009daaa0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1009dab24 | thunk_FUN_100030a44 */

int thunk_FUN_100030a44(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009dab28 | thunk_FUN_100030a8c */

void thunk_FUN_100030a8c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
      *(undefined1 *)(param_1 + 0xc) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xc) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1009dab2c | FUN_1009dab2c */

undefined1  [16] FUN_1009dab2c(void)

{
  return ZEXT816(0x100f26580);
}



/* Address: 0x1009dab3c | FUN_1009dab3c */

void FUN_1009dab3c(long param_1)

{
  FUN_100004594();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  return;
}



/* Address: 0x1009dab60 | FUN_1009dab60 */

long FUN_1009dab60(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  *(undefined2 *)(param_1 + 0x28) = *(undefined2 *)(param_2 + 0x28);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1009dabb0 | FUN_1009dabb0 */

long FUN_1009dabb0(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10008820c();
  *(undefined1 *)(param_1 + 0x28) = *(undefined1 *)(param_2 + 0x28);
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(param_2 + 0x29);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009dac08 | FUN_1009dac08 */

void FUN_1009dac08(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1009dac1c | FUN_1009dac1c */

undefined8 * FUN_1009dac1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009dac6c | FUN_1009dac6c */

undefined1  [16] FUN_1009dac6c(void)

{
  return ZEXT816(0x100f26610);
}



/* Address: 0x1009dac7c | FUN_1009dac7c */

undefined1  [16] FUN_1009dac7c(void)

{
  return ZEXT816(0x100f26698);
}


