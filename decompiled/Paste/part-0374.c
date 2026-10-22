/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100495a60 | thunk_FUN_100495a64 */

void thunk_FUN_100495a64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ea00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ea00,&DAT_100ed8288);
  DAT_100fc9fd8 = pTVar1;
  return;
}



/* Address: 0x100495a64 | FUN_100495a64 */

void FUN_100495a64(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ea00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ea00,&DAT_100ed8288);
  DAT_100fc9fd8 = pTVar1;
  return;
}



/* Address: 0x100495aa4 | FUN_100495aa4 */

undefined1  [16] FUN_100495aa4(void)

{
  return ZEXT816(0x100ed8468);
}



/* Address: 0x100495ab4 | thunk_FUN_100495ab8 */

void thunk_FUN_100495ab8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f2cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f2cc,&DAT_100ed8ad0);
  DAT_100fc9fe0 = pTVar1;
  return;
}



/* Address: 0x100495ab8 | FUN_100495ab8 */

void FUN_100495ab8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f2cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f2cc,&DAT_100ed8ad0);
  DAT_100fc9fe0 = pTVar1;
  return;
}



/* Address: 0x100495af8 | thunk_FUN_100495afc */

void thunk_FUN_100495afc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fe8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ec74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ec74,&DAT_100ed8518);
  DAT_100fc9fe8 = pTVar1;
  return;
}



/* Address: 0x100495afc | FUN_100495afc */

void FUN_100495afc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9fe8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ec74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ec74,&DAT_100ed8518);
  DAT_100fc9fe8 = pTVar1;
  return;
}



/* Address: 0x100495b3c | thunk_FUN_100495b40 */

void thunk_FUN_100495b40(void)

{
  FUN_100495b40();
  return;
}



/* Address: 0x100495b40 | FUN_100495b40 */

void FUN_100495b40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9ff0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ec4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ec4c,&DAT_100ed8518);
  DAT_100fc9ff0 = pTVar1;
  return;
}



/* Address: 0x100495b80 | FUN_100495b80 */

void FUN_100495b80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100fca070;
  FUN_1000037f0(&DAT_100fca070,&DAT_100c4ecb0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10049646c();
  Swift::Encoder::_container();
  local_58 = param_2;
  FUN_1000037f0(&DAT_100fca060,&DAT_100c4eca8);
  FUN_1004964ac(&DAT_100fca078,FUN_100490534,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(&local_58);
  (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100495ca8 | FUN_100495ca8 */

undefined1  [16] FUN_100495ca8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe900000000000073;
  auVar1._0_8_ = 0x6472616f626e6970;
  return auVar1;
}



/* Address: 0x100495cc4 | FUN_100495cc4 */

void FUN_100495cc4(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x6472616f626e6970 && param_3 == -0x16ffffffffffff8d) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6472616f626e6970,(_StringGuts)0xe900000000000073,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100495d50 | FUN_100495d50 */

String FUN_100495d50(void)

{
  String SVar1;
  
  FUN_10049646c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100495d78 | FUN_100495d78 */

String FUN_100495d78(void)

{
  String SVar1;
  
  FUN_10049646c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100495da0 | FUN_100495da0 */

void FUN_100495da0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10049631c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100495dc8 | FUN_100495dc8 */

void FUN_100495dc8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100495b80(param_1,*unaff_x20);
  return;
}



/* Address: 0x100495de0 | FUN_100495de0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100495de0(undefined8 *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  ulong uVar4;
  __int64 _Var5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined *local_90;
  undefined1 auStack_88 [24];
  undefined *local_70;
  long lStack_68;
  
  FUN_1003595f8(auStack_88);
  FUN_100004640(auStack_88,local_70);
  _Var3.unknown = local_70;
  (**(code **)(lStack_68 + 8))(local_70,lStack_68);
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar6 == 0) {
    _swift_bridgeObjectRelease();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10046ae0c(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100496008);
      (*pcVar2)();
    }
    uVar8 = 0;
    do {
      puVar7 = local_90;
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        uVar4 = *(ulong *)(_Var3.unknown + uVar8 * 8 + 0x20);
      }
      else {
        uVar4 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,_Var3);
      }
      objc_stub::identifier(uVar4);
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      objc_stub::name(uVar4);
      SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_10032526c(auStack_b8,0);
      FUN_100004640(auStack_b8,local_a0);
      _Var5 = Swift::Collection::get_count();
      FUN_100004594(auStack_b8);
      uVar4 = *(ulong *)(puVar7 + 0x10);
      local_90 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar4) {
        FUN_10046ae0c(1 < *(ulong *)(puVar7 + 0x18),uVar4 + 1,1);
      }
      puVar7 = local_90;
      uVar8 = uVar8 + 1;
      *(ulong *)(local_90 + 0x10) = uVar4 + 1;
      *(String *)(local_90 + uVar4 * 0x28 + 0x20) = SVar9;
      *(String *)(local_90 + uVar4 * 0x28 + 0x30) = SVar10;
      *(__int64 *)(local_90 + uVar4 * 0x28 + 0x40) = _Var5;
    } while (uVar6 != uVar8);
    _swift_bridgeObjectRelease(_Var3.unknown);
  }
  FUN_100004594(auStack_88);
  *param_1 = puVar7;
  return;
}



/* Address: 0x100496008 | FUN_100496008 */

undefined1  [16] FUN_100496008(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee00736472616f62;
  auVar1._0_8_ = 0x6e69705f7473696c;
  return auVar1;
}



/* Address: 0x10049602c | FUN_10049602c */

void FUN_10049602c(undefined8 *param_1)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  FUN_100496100(&local_c8);
  param_1[0x11] = uStack_40;
  param_1[0x10] = local_48;
  param_1[0x13] = uStack_30;
  param_1[0x12] = local_38;
  *(undefined4 *)(param_1 + 0x14) = local_28;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[0xd] = uStack_60;
  param_1[0xc] = local_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = local_58;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  return;
}



/* Address: 0x10049609c | FUN_10049609c */

void FUN_10049609c(undefined8 *param_1)

{
  undefined *puVar1;
  long unaff_x22;
  undefined8 local_20;
  
  puVar1 = &DAT_100fca060;
  FUN_1000037f0(&DAT_100fca060,&DAT_100c4eca8);
  FUN_100357f60(&local_20,FUN_100495de0,0,puVar1);
  *param_1 = local_20;
                    /* WARNING: Could not recover jumptable at 0x0001004960fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100496100 | FUN_100496100 */

void FUN_100496100(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_2e8 [312];
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  char local_1a0 [8];
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined *local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  undefined7 uStack_15f;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_130;
  undefined7 uStack_12f;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined4 local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  char local_f8 [32];
  undefined *local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  
  puVar1 = &DAT_100fc95f0;
  FUN_1000037f0(&DAT_100fc95f0,&DAT_100c4e190);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined1 **)(puVar1 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar1 + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(puVar1 + 0x30) = 0x7463656a626f;
  *(undefined8 *)(puVar1 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  puVar1[0x50] = 0;
  *(undefined8 *)(puVar1 + 0x58) = 0x69747265706f7270;
  *(undefined8 *)(puVar1 + 0x60) = 0xea00000000007365;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045afd8();
  *(undefined **)(puVar1 + 0x68) = puVar2;
  *(undefined8 *)(puVar1 + 0x70) = 0;
  *(undefined8 *)(puVar1 + 0x78) = 0;
  *(undefined8 *)(puVar1 + 0x80) = 0x2000000000000000;
  puVar1[0x88] = 1;
  puVar3 = puVar1;
  FUN_10045afd8();
  _swift_setDeallocating(puVar1);
  puVar2 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar2);
  local_1b0 = 0x6e69705f7473696c;
  uStack_1a8 = 0xee00736472616f62;
  uStack_198 = 0xee00736472616f62;
  builtin_strncpy(local_1a0,"List pin",8);
  local_190 = 0xd0000000000000a5;
  uStack_188 = 0x8000000100da9590;
  uStack_178 = 0;
  local_170 = 0;
  uStack_168 = 0x2000000000000000;
  local_160 = 1;
  uStack_150 = 0;
  local_158 = 0;
  uStack_140 = 0;
  local_148 = 0;
  local_138 = 0x3000000000000000;
  local_130 = 0xff;
  local_120 = 0;
  uStack_118 = 0;
  uStack_128 = 0;
  local_110 = 0x1000202;
  local_108 = 0x6e69705f7473696c;
  uStack_100 = 0xee00736472616f62;
  builtin_strncpy(local_f8,"List pinboards",0xf);
  local_f8[0xf] = -0x12;
  local_f8[0x10] = -0x5b;
  local_f8[0x11] = '\0';
  local_f8[0x12] = '\0';
  local_f8[0x13] = '\0';
  local_f8[0x14] = '\0';
  local_f8[0x15] = '\0';
  local_f8[0x16] = '\0';
  local_f8[0x17] = -0x30;
  local_f8[0x18] = -0x70;
  local_f8[0x19] = -0x6b;
  local_f8[0x1a] = -0x26;
  local_f8[0x1b] = '\0';
  local_f8[0x1c] = '\x01';
  local_f8[0x1d] = '\0';
  local_f8[0x1e] = '\0';
  local_f8[0x1f] = -0x80;
  uStack_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0x2000000000000000;
  local_b8 = 1;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  local_90 = 0x3000000000000000;
  local_88 = 0xff;
  local_78 = 0;
  uStack_70 = 0;
  local_80 = 0;
  local_180 = puVar3;
  local_d8 = puVar3;
  local_68 = local_110;
  FUN_1004910b8(&local_1b0,auStack_2e8);
  FUN_1004910f4(&local_108);
  param_1[0x11] = uStack_128;
  param_1[0x10] = CONCAT71(uStack_12f,local_130);
  param_1[0x13] = uStack_118;
  param_1[0x12] = local_120;
  *(undefined4 *)(param_1 + 0x14) = local_110;
  param_1[9] = uStack_168;
  param_1[8] = local_170;
  param_1[0xb] = local_158;
  param_1[10] = CONCAT71(uStack_15f,local_160);
  param_1[0xd] = local_148;
  param_1[0xc] = uStack_150;
  param_1[0xf] = local_138;
  param_1[0xe] = uStack_140;
  param_1[1] = uStack_1a8;
  *param_1 = local_1b0;
  param_1[3] = uStack_198;
  param_1[2] = local_1a0;
  param_1[5] = uStack_188;
  param_1[4] = local_190;
  param_1[7] = uStack_178;
  param_1[6] = local_180;
  return;
}



/* Address: 0x10049631c | FUN_10049631c */

long FUN_10049631c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = &DAT_100fca050;
  FUN_1000037f0(&DAT_100fca050,&DAT_100c4eca0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10049646c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fca060;
    FUN_1000037f0(&DAT_100fca060,&DAT_100c4eca8);
    FUN_1004964ac(&DAT_100fca068,FUN_1004904f0,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  return local_58;
}



/* Address: 0x10049646c | FUN_10049646c */

void FUN_10049646c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ed84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ed84,&DAT_100ed84f8);
  DAT_100fca058 = pTVar1;
  return;
}



/* Address: 0x1004964ac | FUN_1004964ac */

void FUN_1004964ac(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fca060;
    FUN_100005c24(&DAT_100fca060,&DAT_100c4eca8);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x10049651c | FUN_10049651c */

undefined1  [16] FUN_10049651c(void)

{
  return ZEXT816(0x100ed84f8);
}



/* Address: 0x10049652c | FUN_10049652c */

undefined1  [16] FUN_10049652c(void)

{
  return ZEXT816(0x100ed8518);
}



/* Address: 0x10049653c | thunk_FUN_100496540 */

void thunk_FUN_100496540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca080 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ed5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ed5c,&DAT_100ed84f8);
  DAT_100fca080 = pTVar1;
  return;
}



/* Address: 0x100496540 | FUN_100496540 */

void FUN_100496540(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca080 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ed5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ed5c,&DAT_100ed84f8);
  DAT_100fca080 = pTVar1;
  return;
}



/* Address: 0x100496580 | thunk_FUN_100496584 */

void thunk_FUN_100496584(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ecf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ecf4,&DAT_100ed84f8);
  DAT_100fca088 = pTVar1;
  return;
}



/* Address: 0x100496584 | FUN_100496584 */

void FUN_100496584(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ecf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ecf4,&DAT_100ed84f8);
  DAT_100fca088 = pTVar1;
  return;
}



/* Address: 0x1004965c4 | thunk_FUN_1004965c8 */

void thunk_FUN_1004965c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4eccc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4eccc,&DAT_100ed84f8);
  DAT_100fca090 = pTVar1;
  return;
}



/* Address: 0x1004965c8 | FUN_1004965c8 */

void FUN_1004965c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca090 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4eccc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4eccc,&DAT_100ed84f8);
  DAT_100fca090 = pTVar1;
  return;
}



/* Address: 0x100496608 | FUN_100496608 */

void FUN_100496608(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [9];
  undefined1 local_57;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fca0d0;
  FUN_1000037f0(&DAT_100fca0d0,&DAT_100c4ee48);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100497cf0();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = *(undefined1 *)(unaff_x20 + 2);
    local_53 = 1;
    FUN_100497d70();
    Swift::KeyedEncodingContainer::_encode(&local_52,&local_53,puVar1,&DAT_100ed8668,uVar2);
    local_54 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[3],unaff_x20[4],&local_54,puVar1);
    local_55 = 3;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[5],unaff_x20[6],&local_55,puVar1);
    local_56 = 4;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[7],unaff_x20[8],&local_56,puVar1);
    local_57 = 5;
    Swift::KeyedEncodingContainer::_encodeIfPresent(unaff_x20[9],unaff_x20[10],&local_57,puVar1);
  }
  (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1004967d8 | FUN_1004967d8 */

void FUN_1004967d8(void)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar3 = (char *)0x726f6c6f63;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6b6e696c;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e400000000000000;
  }
  pcVar2 = (char *)0x656c6966;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x74786574;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x6567616d69;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4 != 0) {
    puVar1 = &DAT_e500000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100496898 | FUN_100496898 */

void FUN_100496898(Hasher param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar5 = *unaff_x20;
  pcVar3 = (char *)0x726f6c6f63;
  if (bVar5 != 3) {
    pcVar3 = (char *)0x6b6e696c;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e400000000000000;
  }
  pcVar2 = (char *)0x656c6966;
  if (bVar5 != 2) {
    pcVar2 = pcVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  pcVar3 = (char *)0x74786574;
  if (bVar5 != 0) {
    pcVar3 = (char *)0x6567616d69;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar1 = &DAT_e500000000000000;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = puVar4;
  SVar6.str = pcVar2;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar4);
  return;
}



/* Address: 0x100496934 | FUN_100496934 */

void FUN_100496934(__int64 param_1)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  byte bVar4;
  Hasher HVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar3 = (char *)0x726f6c6f63;
  if (bVar4 != 3) {
    pcVar3 = (char *)0x6b6e696c;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar4 != 3) {
    puVar1 = &DAT_e400000000000000;
  }
  pcVar2 = (char *)0x656c6966;
  if (bVar4 != 2) {
    pcVar2 = pcVar3;
  }
  HVar5.unknown = &DAT_e400000000000000;
  if (bVar4 != 2) {
    HVar5.unknown = puVar1;
  }
  pcVar3 = (char *)0x74786574;
  if (bVar4 != 0) {
    pcVar3 = (char *)0x6567616d69;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar4 != 0) {
    puVar1 = &DAT_e500000000000000;
  }
  if (bVar4 < 2) {
    HVar5.unknown = puVar1;
    pcVar2 = pcVar3;
  }
  SVar6.bridgeObject = HVar5.unknown;
  SVar6.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1004969f0 | FUN_1004969f0 */

void FUN_1004969f0(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_10049775c(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100496a1c | FUN_100496a1c */

void FUN_100496a1c(undefined8 *param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar3 = 0x726f6c6f63;
  if (bVar5 != 3) {
    uVar3 = 0x6b6e696c;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar5 != 3) {
    puVar1 = &DAT_e400000000000000;
  }
  uVar2 = 0x656c6966;
  if (bVar5 != 2) {
    uVar2 = uVar3;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 2) {
    puVar4 = puVar1;
  }
  uVar3 = 0x74786574;
  if (bVar5 != 0) {
    uVar3 = 0x6567616d69;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar1 = &DAT_e500000000000000;
  }
  if (bVar5 < 2) {
    puVar4 = puVar1;
    uVar2 = uVar3;
  }
  *param_1 = uVar2;
  param_1[1] = puVar4;
  return;
}



/* Address: 0x100496a9c | FUN_100496a9c */

void FUN_100496a9c(void)

{
  FUN_100498128();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x100496af8 | FUN_100496af8 */

void FUN_100496af8(void)

{
  FUN_100498128();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x100496b44 | FUN_100496b44 */

undefined1  [16] FUN_100496b44(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 *puVar6;
  byte *unaff_x20;
  undefined1 auVar7 [16];
  
  bVar5 = *unaff_x20;
  puVar3 = (undefined1 *)0x707061;
  if (bVar5 != 4) {
    puVar3 = (undefined1 *)0x656369766564;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (bVar5 != 4) {
    puVar1 = &DAT_e600000000000000;
  }
  puVar4 = &SUB_e900000000000070;
  puVar6 = &DAT_6d617473656d6974;
  if (bVar5 != 3) {
    puVar4 = puVar1;
    puVar6 = puVar3;
  }
  puVar3 = &DAT_65707974;
  if (bVar5 != 1) {
    puVar3 = (undefined1 *)0x77656976657270;
  }
  puVar1 = &DAT_e400000000000000;
  if (bVar5 != 1) {
    puVar1 = &DAT_e700000000000000;
  }
  puVar2 = &SUB_00006469;
  if (bVar5 != 0) {
    puVar2 = puVar3;
  }
  puVar3 = &SUB_e200000000000000;
  if (bVar5 != 0) {
    puVar3 = puVar1;
  }
  if (bVar5 < 3) {
    puVar4 = puVar3;
    puVar6 = puVar2;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = puVar6;
  return auVar7;
}



/* Address: 0x100496be4 | FUN_100496be4 */

void FUN_100496be4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004977c0();
  *param_1 = param_2;
  return;
}



/* Address: 0x100496c08 | FUN_100496c08 */

String FUN_100496c08(void)

{
  String SVar1;
  
  FUN_100497cf0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100496c30 | FUN_100496c30 */

String FUN_100496c30(void)

{
  String SVar1;
  
  FUN_100497cf0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100496c58 | FUN_100496c58 */

void FUN_100496c58(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1004979b4(&local_78);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_50;
    param_1[4] = local_58;
    param_1[7] = uStack_40;
    param_1[6] = local_48;
    param_1[9] = uStack_30;
    param_1[8] = local_38;
    param_1[10] = local_28;
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
  }
  return;
}



/* Address: 0x100496cb0 | FUN_100496cb0 */

void FUN_100496cb0(void)

{
  FUN_100496608();
  return;
}



/* Address: 0x100496cc4 | FUN_100496cc4 */

uint FUN_100496cc4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 local_80;
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
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  local_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  local_90 = param_1[8];
  local_80 = param_1[10];
  uStack_c8 = param_1[1];
  local_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  local_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  local_30 = param_2[8];
  local_20 = param_2[10];
  uStack_68 = param_2[1];
  local_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_100496d2c(&local_d0,&local_70);
  return uVar1 & 1;
}



/* Address: 0x100496d2c | FUN_100496d2c */

undefined8 FUN_100496d2c(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  
  if ((((undefined *)*param_1 == (undefined *)*param_2 &&
        (undefined *)param_1[1] == (undefined *)param_2[1]) ||
      (bVar1 = Swift::_stringCompareWithSmolCheck
                         ((undefined *)*param_1,(undefined *)param_1[1],
                          (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) &&
     (*(char *)(param_1 + 2) == (char)param_2[2])) {
    if (((undefined *)param_1[3] == (undefined *)param_2[3] &&
         (undefined *)param_1[4] == (undefined *)param_2[4]) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[3],(undefined *)param_1[4],
                           (_StringComparisonResult)(__int8)(undefined *)param_2[3]), bVar1)) {
      _Var2.unknown = (undefined *)param_1[6];
      puVar3 = (undefined *)param_2[6];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar3 == (undefined *)0x0) {
          return 0;
        }
        if ((((undefined *)param_1[5] != (undefined *)param_2[5]) || (_Var2.unknown != puVar3)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[5],_Var2,
                               (_StringComparisonResult)(__int8)(undefined *)param_2[5]), !bVar1)) {
          return 0;
        }
      }
      _Var2.unknown = (undefined *)param_1[8];
      puVar3 = (undefined *)param_2[8];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 != (undefined *)0x0) {
          return 0;
        }
      }
      else {
        if (puVar3 == (undefined *)0x0) {
          return 0;
        }
        if ((((undefined *)param_1[7] != (undefined *)param_2[7]) || (_Var2.unknown != puVar3)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)param_1[7],_Var2,
                               (_StringComparisonResult)(__int8)(undefined *)param_2[7]), !bVar1)) {
          return 0;
        }
      }
      _Var2.unknown = (undefined *)param_1[10];
      puVar3 = (undefined *)param_2[10];
      if (_Var2.unknown == (undefined *)0x0) {
        if (puVar3 == (undefined *)0x0) {
          return 1;
        }
      }
      else if (puVar3 != (undefined *)0x0) {
        if (((undefined *)param_1[9] == (undefined *)param_2[9]) && (_Var2.unknown == puVar3)) {
          return 1;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((undefined *)param_1[9],_Var2,
                           (_StringComparisonResult)(__int8)(undefined *)param_2[9]);
        if (bVar1) {
          return 1;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x100496e5c | FUN_100496e5c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100496e5c(ID param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  Slice<CharacterView> SVar3;
  int iVar4;
  long lVar5;
  CharacterView CVar6;
  CharacterSet CVar7;
  ID IVar8;
  char *pcVar10;
  ulong *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined *puVar13;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  void *pvVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  AttributedString AVar19;
  CharacterSet in;
  String SVar20;
  String SVar21;
  String separator;
  String SVar22;
  String SVar23;
  ulong uStack_90;
  Slice<CharacterView> local_88;
  ulong local_80 [2];
  String local_70;
  char *pcVar9;
  void *pvVar12;
  
  lVar5 = 0;
  FUN_1003187b8();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar5 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80[1] = lVar5;
  CVar6 = Foundation::AttributedString::CharacterView::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(CVar6.unknown + -8) + 0x40));
  lVar5 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100fca0a0;
  local_80[0] = lVar5;
  FUN_1000037f0(&DAT_100fca0a0,&DAT_100c4ee28);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = (undefined *)(lVar5 - extraout_x8_01);
  lVar5 = 0;
  local_88.unknown = puVar13;
  FUN_10031a030();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar17 = (long)puVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  puVar13 = &DAT_100fca0a8;
  FUN_1000037f0(&DAT_100fca0a8,&DAT_100c4ee30);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar19.unknown = (undefined *)(lVar17 - extraout_x8_03);
  CVar7 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar5 = *(long *)(CVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  in.unknown = (undefined *)((long)AVar19.unknown - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  IVar8 = objc_stub::title(param_1);
  if (IVar8 == 0) {
    local_70 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    local_70 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  pvVar14 = local_70.bridgeObject;
  Foundation::CharacterSet::get_whitespacesAndNewlines((CharacterSet)0x0);
  FUN_10045b990();
  SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  pvVar12 = SVar20.bridgeObject;
  pcVar9 = SVar20.str;
  (**(code **)(lVar5 + 8))(in.unknown,CVar7.unknown);
  _swift_bridgeObjectRelease(pvVar14);
  uVar15 = (ulong)pcVar9 & 0xffffffffffff;
  if (((ulong)pvVar12 & 0x2000000000000000) != 0) {
    uVar15 = (ulong)pvVar12 >> 0x38 & 0xf;
  }
  if (uVar15 == 0) {
    _swift_bridgeObjectRelease(pvVar12);
    FUN_10031ebc8(AVar19.unknown);
    lVar5 = 0;
    FUN_100317b10();
    puVar11 = (ulong *)AVar19.unknown;
    (**(code **)(*(long *)(lVar5 + -8) + 0x30))(AVar19.unknown,1,lVar5);
    if ((int)puVar11 == 1) {
      SVar20 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    else {
      puVar11 = (ulong *)AVar19.unknown;
      _swift_getEnumCaseMultiPayload(AVar19.unknown,lVar5);
      uVar15 = local_80[1];
      iVar4 = (int)puVar11;
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          pcVar16 = FUN_10031a030;
          FUN_1000523d8(AVar19.unknown,lVar17,FUN_10031a030);
          Foundation::AttributedString::get_characters(AVar19);
          SVar3.unknown = local_88.unknown;
          FUN_10049dda4(local_88.unknown,200);
          SVar20 = (extension_Foundation)::Swift::String::init(SVar3);
          uVar15 = lVar17;
        }
        else {
          pcVar16 = FUN_1003187b8;
          FUN_1000523d8(AVar19.unknown,local_80[1],FUN_1003187b8);
          SVar20 = Foundation::URL::get_absoluteString((URL)AVar19.unknown);
          pcVar9 = SVar20.str;
          pcVar10 = (char *)0xc8;
          FUN_1002e3a8c(200,pcVar9,SVar20.bridgeObject);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          SVar23.bridgeObject = pcVar9;
          SVar23.str = pcVar10;
          SVar20 = Swift::String::__fromSubstring(SVar23);
          _swift_bridgeObjectRelease(param_4);
        }
        FUN_10005241c(uVar15,pcVar16);
      }
      else if (iVar4 == 2) {
        FUN_10005241c(AVar19.unknown,FUN_100317b10);
        SVar20.bridgeObject = &DAT_e700000000000000;
        SVar20.str = (char *)0x5d6567616d695b;
      }
      else if (iVar4 == 3) {
        uVar15 = *(ulong *)AVar19.unknown;
        puVar13 = &DAT_100fca0b0;
        FUN_1000037f0(&DAT_100fca0b0,&DAT_100c4ee38);
        _swift_allocObject();
        *(undefined8 *)(puVar13 + 0x18) = 2;
        *(undefined8 *)(puVar13 + 0x10) = 1;
        puVar2 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
        *(undefined **)(puVar13 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
        *(undefined **)(puVar13 + 0x40) = puVar2;
        *(ulong *)(puVar13 + 0x20) = uVar15 & 0xffffff;
        SVar20 = (extension_Foundation)::Swift::String::_init();
      }
      else {
        uVar18 = *(ulong *)AVar19.unknown;
        uVar15 = *(ulong *)((long)AVar19.unknown + 0x10);
        uVar1 = *(ulong *)((long)AVar19.unknown + 0x18);
        local_70.str = (char *)uVar18;
        _swift_bridgeObjectRetain(uVar18);
        puVar13 = &DAT_100fc7eb8;
        FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
        FUN_1004765d4();
        separator.bridgeObject = (void *)0xe100000000000000;
        separator.str = (char *)0xa;
        SVar20 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
        pcVar9 = SVar20.str;
        _swift_bridgeObjectRelease(uVar18);
        pcVar10 = (char *)0xc8;
        FUN_1002e3a8c(200,pcVar9,SVar20.bridgeObject);
        _swift_bridgeObjectRelease(SVar20.bridgeObject);
        SVar22.bridgeObject = pcVar9;
        SVar22.str = pcVar10;
        SVar20 = Swift::String::__fromSubstring(SVar22);
        _swift_bridgeObjectRelease(uVar18);
        FUN_10003bf18(uVar15,uVar1);
        _swift_bridgeObjectRelease(puVar13);
      }
    }
  }
  else {
    pcVar10 = (char *)0xc8;
    FUN_1002e3a8c(200,pcVar9,pvVar12);
    _swift_bridgeObjectRelease(pvVar12);
    SVar21.bridgeObject = pcVar9;
    SVar21.str = pcVar10;
    SVar20 = Swift::String::__fromSubstring(SVar21);
    _swift_bridgeObjectRelease(param_4);
  }
  return SVar20;
}



/* Address: 0x10049738c | FUN_10049738c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10049738c(undefined8 *param_1,ID param_2)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  ulong uVar3;
  Date DVar4;
  Date DVar5;
  ISO8601FormatStyle IVar6;
  ID IVar7;
  void *pvVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_a0 [8];
  ulong local_98;
  void *local_90;
  ID IStack_88;
  void *local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  lVar11 = *(long *)(IVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar14 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar10 = (long)puVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar10 - extraout_x12;
  objc_stub::identifier(param_2);
  SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pvVar8 = SVar16.bridgeObject;
  pcStack_78 = SVar16.str;
  uVar3 = 0;
  local_80 = pvVar8;
  FUN_10031eba8();
  IVar7 = param_2;
  local_98 = uVar3;
  FUN_100496e5c();
  local_90 = pvVar8;
  IStack_88 = IVar7;
  DVar4.unknown = (undefined *)objc_stub::timestamp(param_2);
  if (DVar4.unknown == (undefined *)0x0) {
    DVar5 = Foundation::Date::typeMetadataAccessor();
  }
  else {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar4);
    DVar5 = Foundation::Date::typeMetadataAccessor();
  }
  lVar13 = *(long *)(DVar5.unknown + -8);
  (**(code **)(lVar13 + 0x38))(lVar10,DVar4.unknown == (undefined *)0x0,1,DVar5.unknown);
  FUN_100497680(lVar10,lVar9);
  Foundation::Date::typeMetadataAccessor();
  lVar10 = lVar9;
  (**(code **)(lVar13 + 0x30))(lVar9,1,DVar5.unknown);
  if ((int)lVar10 == 1) {
    FUN_1004976d0(lVar9);
    uVar12 = 0;
    uVar15 = 0;
  }
  else {
    IVar6 = (extension_Foundation)::Foundation::FormatStyle::_get_iso8601();
    FUN_100497718();
    Foundation::Date::_formatted(&local_70,puVar14,IVar1.unknown,IVar6.unknown);
    (**(code **)(lVar11 + 8))(puVar14,IVar1.unknown);
    (**(code **)(lVar13 + 8))(lVar9,DVar5.unknown);
    uVar12 = local_70;
    uVar15 = uStack_68;
  }
  IVar7 = objc_stub::sourceApplication(param_2);
  if (IVar7 == 0) {
    SVar16 = (String)ZEXT816(0);
  }
  else {
    objc_stub::name(IVar7);
    SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  IVar7 = objc_stub::device(param_2);
  if (IVar7 == 0) {
    SVar17 = (String)ZEXT816(0);
  }
  else {
    objc_stub::name(IVar7);
    SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  *param_1 = pcStack_78;
  param_1[1] = local_80;
  *(char *)(param_1 + 2) = (char)(0x402030100 >> ((local_98 & 7) << 3));
  param_1[3] = IStack_88;
  param_1[4] = local_90;
  param_1[5] = uVar12;
  param_1[6] = uVar15;
  *(String *)(param_1 + 7) = SVar16;
  *(String *)(param_1 + 9) = SVar17;
  return 0;
}



/* Address: 0x100497680 | FUN_100497680 */

undefined8 FUN_100497680(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004976d0 | FUN_1004976d0 */

undefined8 FUN_1004976d0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7df8;
  FUN_1000037f0(&DAT_100fc7df8,&DAT_100c4c890);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100497718 | FUN_100497718 */

void FUN_100497718(void)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  
  if (DAT_100fca098 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
             ,IVar1.unknown);
  DAT_100fca098 = puVar2;
  return;
}



/* Address: 0x10049775c | FUN_10049775c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100497798 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_10049775c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000037f0(&DAT_100fc8150,&DAT_100c4cdb0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (4 < uVar1) {
    uVar1 = 5;
  }
  return uVar1;
}



/* Address: 0x1004977c0 | FUN_1004977c0 */

undefined4 FUN_1004977c0(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == &DAT_65707974) && (param_2 == &DAT_e400000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x65707974,(_StringGuts)0xe400000000000000,expecting),
         bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != (undefined1 *)0x77656976657270) || (param_2 != &DAT_e700000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x77656976657270,(_StringGuts)0xe700000000000000,expecting
                            ), !bVar1)) {
        if (((param_1 != &DAT_6d617473656d6974) || (param_2 != &SUB_e900000000000070)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6d617473656d6974,(_StringGuts)0xe900000000000070,
                               expecting), !bVar1)) {
          if (((param_1 != (undefined1 *)0x707061) || (param_2 != (undefined1 *)0xe300000000000000))
             && (bVar1 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)0x707061,(_StringGuts)0xe300000000000000,expecting)
                , !bVar1)) {
            if ((param_1 == (undefined1 *)0x656369766564) && (param_2 == &DAT_e600000000000000)) {
              _swift_bridgeObjectRelease(&DAT_e600000000000000);
              return 5;
            }
            bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x656369766564,(_StringGuts)0xe600000000000000,expecting
                              );
            _swift_bridgeObjectRelease(param_2);
            if (bVar1) {
              return 5;
            }
            return 6;
          }
          _swift_bridgeObjectRelease(param_2);
          return 4;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004979b4 | FUN_1004979b4 */

/* WARNING: Removing unreachable block (ram,0x000100497c50) */
/* WARNING: Removing unreachable block (ram,0x000100497c54) */
/* WARNING: Removing unreachable block (ram,0x000100497c20) */
/* WARNING: Removing unreachable block (ram,0x000100497b88) */
/* WARNING: Removing unreachable block (ram,0x000100497b34) */
/* WARNING: Removing unreachable block (ram,0x000100497bd4) */
/* WARNING: Removing unreachable block (ram,0x000100497c3c) */
/* WARNING: Removing unreachable block (ram,0x000100497c58) */
/* WARNING: Removing unreachable block (ram,0x000100497c64) */
/* WARNING: Removing unreachable block (ram,0x000100497b54) */
/* WARNING: Removing unreachable block (ram,0x000100497a94) */

void FUN_1004979b4(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char **ppcVar3;
  char **ppcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long extraout_x8;
  long unaff_x21;
  long lVar8;
  undefined *local_1a0;
  undefined *local_198;
  void *local_190;
  undefined1 local_188 [88];
  char *local_130;
  void *pvStack_128;
  undefined8 local_120;
  char *pcStack_118;
  void *local_110;
  char **ppcStack_108;
  undefined *local_100;
  char **ppcStack_f8;
  undefined *puStack_f0;
  undefined1 *puStack_e8;
  undefined *local_e0;
  undefined1 local_c9;
  String local_c8;
  undefined1 local_b8;
  undefined7 uStack_b7;
  String SStack_b0;
  char **ppcStack_a0;
  undefined *local_98;
  char **ppcStack_90;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined *puStack_78;
  
  puVar1 = &DAT_100fca0b8;
  FUN_1000037f0(&DAT_100fca0b8,&DAT_100c4ee40);
  lVar8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100497cf0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_130 = (char *)((ulong)local_130 & 0xffffffffffffff00);
    local_c8 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    pcVar2 = local_c8.str;
    local_188[0] = 1;
    FUN_100497d30();
    Swift::KeyedDecodingContainer::_decode
              (&local_130,&DAT_100ed8668,local_188,puVar1,&DAT_100ed8668,pcVar2);
    local_b8 = local_130._0_1_;
    local_130._0_1_ = 2;
    SStack_b0 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    local_190 = SStack_b0.bridgeObject;
    local_130._0_1_ = 3;
    ppcVar3 = &local_130;
    puVar6 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_130 = (char *)CONCAT71(local_130._1_7_,4);
    ppcVar4 = &local_130;
    puVar7 = puVar1;
    local_198 = puVar6;
    ppcStack_a0 = ppcVar3;
    local_98 = puVar6;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_c9 = 5;
    puVar5 = &local_c9;
    puVar6 = puVar1;
    local_1a0 = puVar7;
    ppcStack_90 = ppcVar4;
    local_88 = puVar7;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar8 + 8))((long)&local_1a0 - extraout_x8,puVar1);
    local_120 = CONCAT71(uStack_b7,local_b8);
    pvStack_128 = local_c8.bridgeObject;
    local_130 = local_c8.str;
    pcStack_118 = SStack_b0.str;
    ppcStack_108 = ppcStack_a0;
    local_110 = SStack_b0.bridgeObject;
    ppcStack_f8 = ppcStack_90;
    local_100 = local_98;
    puStack_f0 = local_88;
    puStack_e8 = puVar5;
    local_e0 = puVar6;
    puStack_80 = puVar5;
    puStack_78 = puVar6;
    FUN_100493fd4(&local_130,local_188);
    FUN_100004594(param_2);
    FUN_100493f40(&local_c8);
    param_1[5] = ppcStack_108;
    param_1[4] = local_110;
    param_1[7] = ppcStack_f8;
    param_1[6] = local_100;
    param_1[9] = puStack_e8;
    param_1[8] = puStack_f0;
    param_1[10] = local_e0;
    param_1[1] = pvStack_128;
    *param_1 = local_130;
    param_1[3] = pcStack_118;
    param_1[2] = local_120;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100497cf0 | FUN_100497cf0 */

void FUN_100497cf0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f044;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f044,&DAT_100ed86f8);
  DAT_100fca0c0 = pTVar1;
  return;
}



/* Address: 0x100497d30 | FUN_100497d30 */

void FUN_100497d30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f01c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f01c,&DAT_100ed8668);
  DAT_100fca0c8 = pTVar1;
  return;
}



/* Address: 0x100497d70 | FUN_100497d70 */

void FUN_100497d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fca0d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4eff4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4eff4,&DAT_100ed8668);
  DAT_100fca0d8 = pTVar1;
  return;
}



/* Address: 0x100497db0 | FUN_100497db0 */

undefined1  [16] FUN_100497db0(void)

{
  return ZEXT816(0x100ed8668);
}



/* Address: 0x100497dc0 | FUN_100497dc0 */

undefined1  [16] FUN_100497dc0(void)

{
  return ZEXT816(0x100ed86f8);
}



/* Address: 0x100497dd0 | FUN_100497dd0 */

void FUN_100497dd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Address: 0x100497e10 | FUN_100497e10 */

undefined8 * FUN_100497e10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  uVar4 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar4;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x100497e94 | FUN_100497e94 */

undefined8 * FUN_100497e94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}


