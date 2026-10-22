/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004921a8 | FUN_1004921a8 */

/* WARNING: Removing unreachable block (ram,0x00010049226c) */

void FUN_1004921a8(String *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  
  puVar1 = &DAT_100fc9a40;
  FUN_1000037f0(&DAT_100fc9a40,&DAT_100c4e4c8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100492578();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    SVar4 = Swift::KeyedDecodingContainer::_decode(KVar2.unknown,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = SVar4;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004922d0 | FUN_1004922d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004922d0(String *param_1,undefined8 param_2,ID param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  String SVar3;
  String SVar4;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_100357e58(auStack_88);
  puVar1 = auStack_88;
  FUN_100004640(puVar1,local_70);
  FUN_100324a80();
  FUN_100367c5c(param_3,param_4,puVar1,local_70,uStack_68);
  objc_stub::identifier(param_3);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  objc_stub::name(param_3);
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10032526c(auStack_b0,0);
  FUN_100004640(auStack_b0,local_98);
  pcVar2 = (char *)Swift::Collection::get_count();
  FUN_100004594(auStack_b0);
  FUN_100004594(auStack_88);
  *param_1 = SVar3;
  param_1[1] = SVar4;
  param_1[2].str = pcVar2;
  return;
}



/* Address: 0x100492408 | FUN_100492408 */

undefined1  [16] FUN_100492408(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef6472616f626e69;
  auVar1._0_8_ = 0x705f657461657263;
  return auVar1;
}



/* Address: 0x10049242c | FUN_10049242c */

void FUN_10049242c(undefined8 *param_1)

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
  
  FUN_1004925b8(&local_c8);
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



/* Address: 0x10049249c | FUN_10049249c */

void FUN_10049249c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = *param_4;
  uVar2 = param_4[1];
  plVar3 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100492528;
  FUN_1004928b0(plVar3,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,uVar1,uVar2);
  return;
}



/* Address: 0x100492528 | FUN_100492528 */

void FUN_100492528(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    puVar1 = *(undefined8 **)(lVar2 + 0x38);
    puVar1[4] = *(undefined8 *)(lVar2 + 0x30);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000100492574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100492578 | FUN_100492578 */

void FUN_100492578(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9a48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e5bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e5bc,&DAT_100ed7d20);
  DAT_100fc9a48 = pTVar1;
  return;
}



/* Address: 0x1004925b8 | FUN_1004925b8 */

void FUN_1004925b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 auStack_380 [168];
  undefined1 auStack_2d8 [288];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar1 = &DAT_100fc95f0;
  FUN_1000037f0(&DAT_100fc95f0,&DAT_100c4e190);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined1 **)(puVar2 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar2 + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x7463656a626f;
  *(undefined8 *)(puVar2 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar2[0x50] = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0x69747265706f7270;
  *(undefined8 *)(puVar2 + 0x60) = 0xea00000000007365;
  puVar3 = puVar1;
  _swift_initStackObject(puVar1,auStack_2d8);
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x656d616e;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e400000000000000;
  _swift_initStaticObject(puVar1,&DAT_100fc9a58);
  puVar4 = puVar1;
  FUN_10045afd8();
  puVar5 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar5);
  *(undefined **)(puVar3 + 0x30) = puVar4;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0x2000000000000000;
  puVar3[0x50] = 1;
  puVar1 = puVar3;
  FUN_10045afd8();
  _swift_setDeallocating(puVar3);
  FUN_100492a5c(puVar3 + 0x20);
  *(undefined **)(puVar2 + 0x68) = puVar1;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0x2000000000000000;
  puVar2[0x88] = 1;
  *(undefined8 *)(puVar2 + 0x90) = 0x6465726975716572;
  *(undefined1 **)(puVar2 + 0x98) = &DAT_e800000000000000;
  puVar1 = &DAT_100fc97a8;
  FUN_1000037f0(&DAT_100fc97a8,&DAT_100c4e1a0);
  _swift_initStaticObject();
  *(undefined **)(puVar2 + 0xa0) = puVar1;
  *(undefined8 *)(puVar2 + 0xa8) = 0;
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  *(undefined8 *)(puVar2 + 0xb8) = 0x1000000000000000;
  puVar2[0xc0] = 1;
  puVar1 = puVar2;
  FUN_10045afd8();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar5);
  local_1b8 = 0x705f657461657263;
  uStack_1b0 = 0xef6472616f626e69;
  uStack_1a0 = 0xef6472616f626e69;
  local_1a8 = 0x7020657461657243;
  local_198 = 0xd000000000000066;
  uStack_190 = 0x8000000100da90d0;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0x2000000000000000;
  local_168 = 1;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_140 = 0x3000000000000000;
  local_138 = 0xff;
  local_120 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_118 = 0x202;
  local_110 = 0x705f657461657263;
  uStack_108 = 0xef6472616f626e69;
  uStack_f8 = 0xef6472616f626e69;
  local_100 = 0x7020657461657243;
  local_f0 = 0xd000000000000066;
  uStack_e8 = 0x8000000100da90d0;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0x2000000000000000;
  local_c0 = 1;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_98 = 0x3000000000000000;
  local_90 = 0xff;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_188 = puVar1;
  local_e0 = puVar1;
  local_70 = local_118;
  FUN_1004910b8(&local_1b8,auStack_380);
  FUN_1004910f4(&local_110);
  param_1[0x11] = uStack_130;
  param_1[0x10] = CONCAT71(uStack_137,local_138);
  param_1[0x13] = local_120;
  param_1[0x12] = local_128;
  *(undefined4 *)(param_1 + 0x14) = local_118;
  param_1[9] = uStack_170;
  param_1[8] = local_178;
  param_1[0xb] = local_160;
  param_1[10] = CONCAT71(uStack_167,local_168);
  param_1[0xd] = local_150;
  param_1[0xc] = uStack_158;
  param_1[0xf] = local_140;
  param_1[0xe] = uStack_148;
  param_1[1] = uStack_1b0;
  *param_1 = local_1b8;
  param_1[3] = uStack_1a0;
  param_1[2] = local_1a8;
  param_1[5] = uStack_190;
  param_1[4] = local_198;
  param_1[7] = local_180;
  param_1[6] = local_188;
  return;
}



/* Address: 0x1004928b0 | FUN_1004928b0 */

void FUN_1004928b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  CharacterSet CVar4;
  CharacterSet in;
  CharacterSet CVar5;
  code *pcVar6;
  undefined8 *puVar7;
  long unaff_x22;
  long lVar8;
  String SVar9;
  undefined1 auStack_90 [16];
  String local_80;
  undefined8 local_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar8 = *(long *)(CVar4.unknown + -8);
  in.unknown = (undefined *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  CVar5.unknown = param_5;
  local_70 = param_4;
  puStack_68 = param_5;
  _swift_bridgeObjectRetain();
  Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
  FUN_10045b990();
  SVar9 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
  puVar7 = SVar9.bridgeObject;
  (**(code **)(lVar8 + 8))(in.unknown,CVar4.unknown);
  _swift_bridgeObjectRelease(param_5);
  uVar1 = (ulong)SVar9.str & 0xffffffffffff;
  if (((ulong)puVar7 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease();
    FUN_100491028();
    _swift_allocError(&DAT_100ed8ab0,puVar7,0,0);
    *puVar7 = 0xd000000000000017;
    puVar7[1] = 0x8000000100da90b0;
    *(undefined1 *)(puVar7 + 2) = 3;
    _swift_willThrow();
    _swift_task_dealloc(in.unknown);
    pcVar6 = *(code **)(unaff_x22 + 8);
  }
  else {
    local_80 = SVar9;
    FUN_100357d14(&local_70,FUN_100492a44,auStack_90,&DAT_100ed8960);
    _swift_bridgeObjectRelease(puVar7);
    puVar3 = puStack_68;
    uVar2 = local_70;
    _swift_task_dealloc(in.unknown);
    param_1[1] = puVar3;
    *param_1 = uVar2;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
    param_1[4] = local_50;
    pcVar6 = *(code **)(unaff_x22 + 8);
  }
  (*pcVar6)();
  return;
}



/* Address: 0x100492a44 | FUN_100492a44 */

void FUN_100492a44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004922d0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100492a5c | FUN_100492a5c */

undefined8 FUN_100492a5c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100492aa4 | FUN_100492aa4 */

undefined1  [16] FUN_100492aa4(void)

{
  return ZEXT816(0x100ed7d20);
}



/* Address: 0x100492ab4 | FUN_100492ab4 */

undefined1  [16] FUN_100492ab4(void)

{
  return ZEXT816(0x100ed7d98);
}



/* Address: 0x100492ac4 | thunk_FUN_100492ac8 */

void thunk_FUN_100492ac8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e594;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e594,&DAT_100ed7d20);
  DAT_100fc9b38 = pTVar1;
  return;
}



/* Address: 0x100492ac8 | FUN_100492ac8 */

void FUN_100492ac8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e594;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e594,&DAT_100ed7d20);
  DAT_100fc9b38 = pTVar1;
  return;
}



/* Address: 0x100492b08 | thunk_FUN_100492b0c */

void thunk_FUN_100492b0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e52c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e52c,&DAT_100ed7d20);
  DAT_100fc9b40 = pTVar1;
  return;
}



/* Address: 0x100492b0c | FUN_100492b0c */

void FUN_100492b0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e52c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e52c,&DAT_100ed7d20);
  DAT_100fc9b40 = pTVar1;
  return;
}



/* Address: 0x100492b4c | thunk_FUN_100492b50 */

void thunk_FUN_100492b50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e504;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e504,&DAT_100ed7d20);
  DAT_100fc9b48 = pTVar1;
  return;
}



/* Address: 0x100492b50 | FUN_100492b50 */

void FUN_100492b50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e504;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e504,&DAT_100ed7d20);
  DAT_100fc9b48 = pTVar1;
  return;
}



/* Address: 0x100492b90 | FUN_100492b90 */

undefined1  [16] FUN_100492b90(void)

{
  return ZEXT816(0x100ed7e68);
}



/* Address: 0x100492ba0 | thunk_FUN_100492ba4 */

void thunk_FUN_100492ba4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e69c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e69c,&DAT_100ed8088);
  DAT_100fc9b50 = pTVar1;
  return;
}



/* Address: 0x100492ba4 | FUN_100492ba4 */

void FUN_100492ba4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e69c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e69c,&DAT_100ed8088);
  DAT_100fc9b50 = pTVar1;
  return;
}



/* Address: 0x100492be4 | thunk_FUN_100492be8 */

void thunk_FUN_100492be8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e674;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e674,&DAT_100ed8000);
  DAT_100fc9b58 = pTVar1;
  return;
}



/* Address: 0x100492be8 | FUN_100492be8 */

void FUN_100492be8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e674;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e674,&DAT_100ed8000);
  DAT_100fc9b58 = pTVar1;
  return;
}



/* Address: 0x100492c28 | thunk_FUN_100492c2c */

void thunk_FUN_100492c2c(void)

{
  FUN_100492c2c();
  return;
}



/* Address: 0x100492c2c | FUN_100492c2c */

void FUN_100492c2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9b60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e64c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e64c,&DAT_100ed8000);
  DAT_100fc9b60 = pTVar1;
  return;
}



/* Address: 0x100492c6c | FUN_100492c6c */

void FUN_100492c6c(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  long extraout_x8;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [88];
  ulong local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
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
  undefined8 local_70;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc9be0;
  FUN_1000037f0(&DAT_100fc9be0,&DAT_100c4e6d8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100493f00();
  Swift::Encoder::_container();
  local_120 = local_120 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,&local_120,puVar1);
  if (unaff_x21 == 0) {
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x30);
    local_a0 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_90 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
    local_80 = *(undefined8 *)(unaff_x20 + 0x48);
    local_70 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_b8 = *(undefined8 *)(unaff_x20 + 0x10);
    local_c0 = *(undefined8 *)(unaff_x20 + 8);
    uStack_a8 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_b0 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x30);
    local_100 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_e8 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x50);
    local_e0 = *(undefined8 *)(unaff_x20 + 0x48);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x10);
    local_120 = *(ulong *)(unaff_x20 + 8);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x18);
    local_51 = 1;
    puVar2 = &local_c0;
    FUN_100493fd4(puVar2,auStack_178);
    FUN_1004912bc();
    Swift::KeyedEncodingContainer::_encode(&local_120,&local_51,puVar1,&DAT_100ed8770,puVar2);
    FUN_100493f40(&local_120);
    local_120 = CONCAT71(local_120._1_7_,2);
    Swift::KeyedEncodingContainer::_encode
              (*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),&local_120,puVar1
              );
  }
  (**(code **)(lVar3 + 8))(auStack_180 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100492e2c | FUN_100492e2c */

undefined1  [16] FUN_100492e2c(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar2 = (undefined1 *)0x6d7269666e6f63;
  if (*unaff_x20 != '\x01') {
    puVar2 = &SUB_00006469;
  }
  puVar1 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar1 = &SUB_e200000000000000;
  }
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = puVar2;
  return auVar3;
}



/* Address: 0x100492e5c | FUN_100492e5c */

void FUN_100492e5c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != &SUB_00006469 || param_3 != &SUB_e200000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == (undefined1 *)0x6d7269666e6f63) && (param_3 == &DAT_e700000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e700000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6d7269666e6f63,(_StringGuts)0xe700000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100492eb4;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100492eb4:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100492f2c | FUN_100492f2c */

String FUN_100492f2c(void)

{
  String SVar1;
  
  FUN_100493b5c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100492f54 | FUN_100492f54 */

String FUN_100492f54(void)

{
  String SVar1;
  
  FUN_100493b5c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100492f7c | FUN_100492f7c */

void FUN_100492f7c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long unaff_x21;
  
  FUN_1004939fc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
  }
  return;
}



/* Address: 0x100492fa8 | FUN_100492fa8 */

undefined1  [16] FUN_100492fa8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  char cVar5;
  char *unaff_x20;
  undefined1 auVar6 [16];
  
  cVar5 = *unaff_x20;
  uVar1 = 0x6d657469;
  if (cVar5 != '\x01') {
    uVar1 = 0x6567617373656d;
  }
  puVar2 = &DAT_e400000000000000;
  if (cVar5 != '\x01') {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x646574656c6564;
  if (cVar5 != '\0') {
    uVar3 = uVar1;
  }
  puVar4 = &DAT_e700000000000000;
  if (cVar5 != '\0') {
    puVar4 = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x100492ffc | FUN_100492ffc */

void FUN_100492ffc(undefined1 *param_1,undefined1 param_2)

{
  FUN_100493b9c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100493020 | FUN_100493020 */

String FUN_100493020(void)

{
  String SVar1;
  
  FUN_100493f00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100493048 | FUN_100493048 */

String FUN_100493048(void)

{
  String SVar1;
  
  FUN_100493f00();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100493070 | FUN_100493070 */

void FUN_100493070(undefined8 *param_1)

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
  
  FUN_100493cb0(&local_90);
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



/* Address: 0x1004930c0 | FUN_1004930c0 */

void FUN_1004930c0(void)

{
  FUN_100492c6c();
  return;
}



/* Address: 0x1004930d4 | FUN_1004930d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004930d4(undefined1 *param_1,undefined8 param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined *local_178 [3];
  undefined8 local_160;
  long lStack_158;
  undefined *local_150;
  undefined7 uStack_148;
  undefined1 local_141;
  undefined7 uStack_140;
  undefined1 uStack_139;
  undefined7 uStack_138;
  undefined1 local_131;
  undefined7 uStack_130;
  undefined1 uStack_129;
  undefined7 uStack_128;
  undefined1 local_121;
  undefined7 uStack_120;
  undefined1 uStack_119;
  undefined7 uStack_118;
  undefined1 local_111;
  undefined7 uStack_110;
  undefined1 uStack_109;
  undefined7 uStack_108;
  undefined1 local_101;
  undefined7 uStack_100;
  undefined1 uStack_f9;
  undefined1 local_e8 [72];
  undefined8 uStack_a0;
  undefined8 local_98;
  long alStack_90 [3];
  undefined8 local_78;
  long lStack_70;
  
  FUN_100357cf0(alStack_90);
  FUN_100004640(alStack_90,local_78);
  lVar8 = *(long *)(lStack_70 + 8);
  pcVar7 = *(code **)(lVar8 + 0x20);
  _swift_bridgeObjectRetain(param_4);
  lVar9 = param_3;
  (*pcVar7)(param_3,param_4,local_78,lVar8);
  if (lVar9 == 0) {
    plVar6 = alStack_90;
    FUN_100004594();
    FUN_100491028();
    _swift_allocError(&DAT_100ed8ab0,plVar6,0,0);
    *plVar6 = param_3;
    plVar6[1] = param_4;
    *(undefined1 *)(plVar6 + 2) = 2;
    _swift_willThrow();
  }
  else {
    _swift_bridgeObjectRelease(param_4);
    FUN_100004594(alStack_90);
    lVar8 = lVar9;
    FUN_10049738c(local_e8);
    if ((param_5 & 1) == 0) {
      uStack_139 = (undefined1)local_e8._8_8_;
      uStack_138 = SUB87(local_e8._8_8_,1);
      local_141 = (undefined1)local_e8._0_8_;
      uStack_140 = SUB87(local_e8._0_8_,1);
      uStack_129 = (undefined1)local_e8._24_8_;
      uStack_128 = SUB87(local_e8._24_8_,1);
      local_131 = (undefined1)local_e8._16_8_;
      uStack_130 = SUB87(local_e8._16_8_,1);
      uStack_119 = (undefined1)local_e8._40_8_;
      uStack_118 = SUB87(local_e8._40_8_,1);
      local_121 = (undefined1)local_e8._32_8_;
      uStack_120 = SUB87(local_e8._32_8_,1);
      uStack_109 = (undefined1)local_e8._56_8_;
      uStack_108 = SUB87(local_e8._56_8_,1);
      local_111 = (undefined1)local_e8._48_8_;
      uStack_110 = SUB87(local_e8._48_8_,1);
      uStack_f9 = (undefined1)uStack_a0;
      local_101 = (undefined1)local_e8._64_8_;
      uStack_100 = SUB87(local_e8._64_8_,1);
      *param_1 = 0;
      *(ulong *)(param_1 + 9) = CONCAT17(uStack_139,uStack_140);
      *(ulong *)(param_1 + 1) = CONCAT17(local_141,uStack_148);
      *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_129,uStack_130);
      *(ulong *)(param_1 + 0x11) = CONCAT17(local_131,uStack_138);
      *(undefined8 *)(param_1 + 0x58) = local_98;
      *(undefined8 *)(param_1 + 0x50) = uStack_a0;
      *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_f9,uStack_100);
      *(ulong *)(param_1 + 0x41) = CONCAT17(local_101,uStack_108);
      *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_109,uStack_110);
      *(ulong *)(param_1 + 0x31) = CONCAT17(local_111,uStack_118);
      *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_119,uStack_120);
      *(ulong *)(param_1 + 0x21) = CONCAT17(local_121,uStack_128);
      *(undefined8 *)(param_1 + 0x60) = 0x1000000000000074;
      *(undefined8 *)(param_1 + 0x68) = 0x8000000100da9180;
    }
    else {
      FUN_10031bc94();
      if (lVar8 != 0) {
        FUN_100357cf0(&uStack_148);
        uVar5 = CONCAT17(uStack_129,uStack_130);
        lVar1 = CONCAT17(local_121,uStack_128);
        FUN_100004640();
        puVar2 = &DAT_100fc95d8;
        FUN_1000037f0(&DAT_100fc95d8,&DAT_100c4e180);
        _swift_allocObject();
        *(undefined8 *)(puVar2 + 0x18) = 3;
        *(undefined8 *)(puVar2 + 0x10) = 1;
        *(long *)(puVar2 + 0x20) = lVar9;
        lVar9 = *(long *)(lVar1 + 0x10);
        pcVar7 = *(code **)(lVar9 + 0x38);
        puVar3 = &DAT_100fc95e0;
        local_178[0] = puVar2;
        FUN_1000037f0(&DAT_100fc95e0,&DAT_100c4f720);
        puVar4 = puVar3;
        FUN_100491068();
        (*pcVar7)(local_178,lVar8,puVar3,puVar4,uVar5,lVar9);
        _swift_release(puVar2);
        FUN_100004594(&uStack_148);
      }
      FUN_100357cf0(&uStack_148);
      uVar5 = CONCAT17(uStack_129,uStack_130);
      lVar9 = CONCAT17(local_121,uStack_128);
      FUN_100004640(&uStack_148,uVar5);
      (**(code **)(*(long *)(lVar9 + 8) + 0x20))(param_3,param_4,uVar5);
      if (param_3 != 0) {
        FUN_100004594(&uStack_148);
        FUN_100357cf0(&uStack_148);
        FUN_100004640(&uStack_148,CONCAT17(uStack_129,uStack_130));
        puVar2 = &DAT_100fc95d8;
        FUN_1000037f0(&DAT_100fc95d8,&DAT_100c4e180);
        _swift_allocObject();
        *(undefined8 *)(puVar2 + 0x18) = 3;
        *(undefined8 *)(puVar2 + 0x10) = 1;
        *(long *)(puVar2 + 0x20) = param_3;
        local_150 = puVar2;
        FUN_100357e58(local_178,param_3);
        FUN_100004640(local_178,local_160);
        uVar5 = local_160;
        (**(code **)(*(long *)(lStack_158 + 8) + 0x28))(local_160);
        lVar9 = *(long *)(CONCAT17(local_121,uStack_128) + 0x10);
        pcVar7 = *(code **)(lVar9 + 0x38);
        puVar3 = &DAT_100fc95e0;
        FUN_1000037f0(&DAT_100fc95e0,&DAT_100c4f720);
        puVar4 = puVar3;
        FUN_100491068();
        (*pcVar7)(&local_150,uVar5,puVar3,puVar4,CONCAT17(uStack_129,uStack_130),lVar9);
        _swift_release(puVar2);
        FUN_100004594(local_178);
      }
      FUN_100004594(&uStack_148);
      uStack_139 = (undefined1)local_e8._8_8_;
      uStack_138 = SUB87(local_e8._8_8_,1);
      local_141 = (undefined1)local_e8._0_8_;
      uStack_140 = SUB87(local_e8._0_8_,1);
      uStack_129 = (undefined1)local_e8._24_8_;
      uStack_128 = SUB87(local_e8._24_8_,1);
      local_131 = (undefined1)local_e8._16_8_;
      uStack_130 = SUB87(local_e8._16_8_,1);
      uStack_119 = (undefined1)local_e8._40_8_;
      uStack_118 = SUB87(local_e8._40_8_,1);
      local_121 = (undefined1)local_e8._32_8_;
      uStack_120 = SUB87(local_e8._32_8_,1);
      uStack_109 = (undefined1)local_e8._56_8_;
      uStack_108 = SUB87(local_e8._56_8_,1);
      local_111 = (undefined1)local_e8._48_8_;
      uStack_110 = SUB87(local_e8._48_8_,1);
      uStack_f9 = (undefined1)uStack_a0;
      local_101 = (undefined1)local_e8._64_8_;
      uStack_100 = SUB87(local_e8._64_8_,1);
      *param_1 = 1;
      *(ulong *)(param_1 + 9) = CONCAT17(uStack_139,uStack_140);
      *(ulong *)(param_1 + 1) = CONCAT17(local_141,uStack_148);
      *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_129,uStack_130);
      *(ulong *)(param_1 + 0x11) = CONCAT17(local_131,uStack_138);
      *(undefined8 *)(param_1 + 0x58) = local_98;
      *(undefined8 *)(param_1 + 0x50) = uStack_a0;
      *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_f9,uStack_100);
      *(ulong *)(param_1 + 0x41) = CONCAT17(local_101,uStack_108);
      *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_109,uStack_110);
      *(ulong *)(param_1 + 0x31) = CONCAT17(local_111,uStack_118);
      *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_119,uStack_120);
      *(ulong *)(param_1 + 0x21) = CONCAT17(local_121,uStack_128);
      *(undefined8 *)(param_1 + 0x60) = 0x20646574656c6544;
      *(undefined8 *)(param_1 + 0x68) = 0xed00002e6d657469;
    }
  }
  return;
}



/* Address: 0x10049352c | FUN_10049352c */

undefined1  [16] FUN_10049352c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb000000006d6574;
  auVar1._0_8_ = 0x695f6574656c6564;
  return auVar1;
}



/* Address: 0x10049354c | FUN_10049354c */

void FUN_10049354c(undefined8 *param_1)

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
  
  FUN_100493658(&local_c8);
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



/* Address: 0x1004935bc | FUN_1004935bc */

/* WARNING: Removing unreachable block (ram,0x00010049360c) */

void FUN_1004935bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x22;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
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
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  local_b0 = *param_4;
  uStack_a8 = param_4[1];
  local_a0 = *(undefined1 *)(param_4 + 2);
  FUN_100357d14(&local_90,FUN_100494010,auStack_c0,&DAT_100ed8000);
  param_1[9] = uStack_48;
  param_1[8] = local_50;
  param_1[0xb] = uStack_38;
  param_1[10] = local_40;
  param_1[0xd] = uStack_28;
  param_1[0xc] = uStack_30;
  param_1[1] = uStack_88;
  *param_1 = local_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[5] = uStack_68;
  param_1[4] = local_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
                    /* WARNING: Could not recover jumptable at 0x000100493654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100493658 | FUN_100493658 */

void FUN_100493658(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_3b8 [168];
  undefined1 auStack_310 [344];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar1 = &DAT_100fc95f0;
  FUN_1000037f0(&DAT_100fc95f0,&DAT_100c4e190);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined1 **)(puVar2 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar2 + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x7463656a626f;
  *(undefined8 *)(puVar2 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar2[0x50] = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0x69747265706f7270;
  *(undefined8 *)(puVar2 + 0x60) = 0xea00000000007365;
  puVar3 = puVar1;
  _swift_initStackObject(puVar1,auStack_310);
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined1 **)(puVar3 + 0x20) = &SUB_00006469;
  *(undefined1 **)(puVar3 + 0x28) = &SUB_e200000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc9bf0);
  puVar5 = puVar4;
  FUN_10045afd8();
  puVar6 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0x2000000000000000;
  puVar3[0x50] = 1;
  *(undefined8 *)(puVar3 + 0x58) = 0x6d7269666e6f63;
  *(undefined1 **)(puVar3 + 0x60) = &DAT_e700000000000000;
  _swift_initStaticObject(puVar1,&DAT_100fc9c88);
  puVar4 = puVar1;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x68) = puVar4;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  *(undefined8 *)(puVar3 + 0x80) = 0x2000000000000000;
  puVar3[0x88] = 1;
  puVar1 = puVar3;
  FUN_10045afd8();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,2,puVar6);
  *(undefined **)(puVar2 + 0x68) = puVar1;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0x2000000000000000;
  puVar2[0x88] = 1;
  *(undefined8 *)(puVar2 + 0x90) = 0x6465726975716572;
  *(undefined1 **)(puVar2 + 0x98) = &DAT_e800000000000000;
  puVar1 = &DAT_100fc97a8;
  FUN_1000037f0(&DAT_100fc97a8,&DAT_100c4e1a0);
  _swift_initStaticObject();
  *(undefined **)(puVar2 + 0xa0) = puVar1;
  *(undefined8 *)(puVar2 + 0xa8) = 0;
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  *(undefined8 *)(puVar2 + 0xb8) = 0x1000000000000000;
  puVar2[0xc0] = 1;
  puVar1 = puVar2;
  FUN_10045afd8();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar6);
  local_1b8 = 0x695f6574656c6564;
  uStack_1b0 = 0xeb000000006d6574;
  local_1a8 = 0xd000000000000011;
  uStack_1a0 = 0x8000000100da9200;
  local_198 = 0x1000000000000138;
  uStack_190 = 0x8000000100da9220;
  uStack_180 = 0;
  local_178 = 0;
  uStack_170 = 0x2000000000000000;
  local_168 = 1;
  uStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  local_140 = 0x3000000000000000;
  local_138 = 0xff;
  uStack_120 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_118 = 0x201;
  local_110 = 0x695f6574656c6564;
  uStack_108 = 0xeb000000006d6574;
  local_100 = 0xd000000000000011;
  uStack_f8 = 0x8000000100da9200;
  local_f0 = 0x1000000000000138;
  uStack_e8 = 0x8000000100da9220;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0x2000000000000000;
  local_c0 = 1;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_98 = 0x3000000000000000;
  local_90 = 0xff;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_188 = puVar1;
  local_e0 = puVar1;
  local_70 = local_118;
  FUN_1004910b8(&local_1b8,auStack_3b8);
  FUN_1004910f4(&local_110);
  param_1[0x11] = uStack_130;
  param_1[0x10] = CONCAT71(uStack_137,local_138);
  param_1[0x13] = uStack_120;
  param_1[0x12] = local_128;
  *(undefined4 *)(param_1 + 0x14) = local_118;
  param_1[9] = uStack_170;
  param_1[8] = local_178;
  param_1[0xb] = uStack_160;
  param_1[10] = CONCAT71(uStack_167,local_168);
  param_1[0xd] = uStack_150;
  param_1[0xc] = uStack_158;
  param_1[0xf] = local_140;
  param_1[0xe] = uStack_148;
  param_1[1] = uStack_1b0;
  *param_1 = local_1b8;
  param_1[3] = uStack_1a0;
  param_1[2] = local_1a8;
  param_1[5] = uStack_190;
  param_1[4] = local_198;
  param_1[7] = uStack_180;
  param_1[6] = local_188;
  return;
}



/* Address: 0x1004939fc | FUN_1004939fc */

/* WARNING: Removing unreachable block (ram,0x000100493b50) */
/* WARNING: Removing unreachable block (ram,0x000100493ac4) */

char * FUN_1004939fc(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc9bc0;
  FUN_1000037f0(&DAT_100fc9bc0,&DAT_100c4e6c8);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100493b5c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar4.str;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x100493b5c | FUN_100493b5c */

void FUN_100493b5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9bc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e8b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e8b8,&DAT_100ed7f88);
  DAT_100fc9bc8 = pTVar1;
  return;
}



/* Address: 0x100493b9c | FUN_100493b9c */

undefined4 FUN_100493b9c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x646574656c6564 || param_2 != &DAT_e700000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x646574656c6564,(_StringGuts)0xe700000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x6d657469) || (param_2 != &DAT_e400000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6d657469,(_StringGuts)0xe400000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x6567617373656d) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6567617373656d,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100493cb0 | FUN_100493cb0 */

/* WARNING: Removing unreachable block (ram,0x000100493dd8) */
/* WARNING: Removing unreachable block (ram,0x000100493e5c) */
/* WARNING: Removing unreachable block (ram,0x000100493d8c) */
/* WARNING: Removing unreachable block (ram,0x000100493de0) */

void FUN_100493cb0(ulong *param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 auStack_220 [112];
  ulong local_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  char *local_150;
  void *pvStack_148;
  undefined1 local_13a;
  undefined1 local_139;
  ulong local_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong local_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong local_f8;
  ulong uStack_f0;
  ulong local_e8;
  undefined1 local_e0;
  undefined7 uStack_df;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  ulong local_88;
  String local_80;
  
  puVar1 = &DAT_100fc9bd0;
  FUN_1000037f0(&DAT_100fc9bd0,&DAT_100c4e6d0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100493f00();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_1b0 = local_1b0 & 0xffffffffffffff00;
    local_e0 = Swift::KeyedDecodingContainer::_decode(&local_1b0,puVar1);
    uVar2 = (ulong)(byte)local_e0;
    local_139 = 1;
    FUN_100491278();
    Swift::KeyedDecodingContainer::_decode
              (&local_138,&DAT_100ed8770,&local_139,puVar1,&DAT_100ed8770,uVar2);
    uStack_b0 = uStack_110;
    local_b8 = local_118;
    uStack_a0 = uStack_100;
    uStack_a8 = uStack_108;
    uStack_90 = uStack_f0;
    local_98 = local_f8;
    local_88 = local_e8;
    uStack_d0 = uStack_130;
    uStack_d8 = local_138;
    uStack_c0 = uStack_120;
    uStack_c8 = uStack_128;
    local_13a = 2;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_13a,puVar1);
    (**(code **)(lVar3 + 8))(auStack_220 + -extraout_x8,puVar1);
    uStack_168 = local_98;
    local_170 = uStack_a0;
    uStack_158 = local_88;
    uStack_160 = uStack_90;
    local_1b0 = CONCAT71(uStack_df,local_e0);
    uStack_1a8 = uStack_d8;
    uStack_198 = uStack_c8;
    uStack_1a0 = uStack_d0;
    uStack_188 = local_b8;
    local_190 = uStack_c0;
    uStack_178 = uStack_a8;
    uStack_180 = uStack_b0;
    local_80.bridgeObject = SVar4.bridgeObject;
    local_80.str = SVar4.str;
    pvStack_148 = local_80.bridgeObject;
    local_150 = local_80.str;
    local_80 = SVar4;
    FUN_100493f74(&local_1b0,auStack_220);
    FUN_100004594(param_2);
    FUN_100493fa8(&local_e0);
    param_1[9] = uStack_168;
    param_1[8] = local_170;
    param_1[0xb] = uStack_158;
    param_1[10] = uStack_160;
    param_1[0xd] = (ulong)pvStack_148;
    param_1[0xc] = (ulong)local_150;
    param_1[1] = uStack_1a8;
    *param_1 = local_1b0;
    param_1[3] = uStack_198;
    param_1[2] = uStack_1a0;
    param_1[5] = uStack_188;
    param_1[4] = local_190;
    param_1[7] = uStack_178;
    param_1[6] = uStack_180;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x100493f00 | FUN_100493f00 */

void FUN_100493f00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9bd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e868;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e868,&DAT_100ed7ef8);
  DAT_100fc9bd8 = pTVar1;
  return;
}



/* Address: 0x100493f40 | FUN_100493f40 */

undefined8 FUN_100493f40(undefined8 param_1)

{
  FUN_100497dd0();
  return param_1;
}



/* Address: 0x100493f74 | FUN_100493f74 */

undefined8 FUN_100493f74(undefined8 param_1,undefined8 param_2)

{
  FUN_100494094(param_2,param_1,&DAT_100ed8000);
  return param_2;
}



/* Address: 0x100493fa8 | FUN_100493fa8 */

undefined8 FUN_100493fa8(undefined8 param_1)

{
  FUN_10049404c(param_1,&DAT_100ed8000);
  return param_1;
}



/* Address: 0x100493fd4 | FUN_100493fd4 */

undefined8 FUN_100493fd4(undefined8 param_1,undefined8 param_2)

{
  FUN_100497e10(param_2,param_1);
  return param_2;
}



/* Address: 0x100494010 | FUN_100494010 */

void FUN_100494010(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004930d4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10049402c | FUN_10049402c */

undefined1  [16] FUN_10049402c(void)

{
  return ZEXT816(0x100ed7ef8);
}



/* Address: 0x10049403c | FUN_10049403c */

undefined1  [16] FUN_10049403c(void)

{
  return ZEXT816(0x100ed7f88);
}



/* Address: 0x10049404c | FUN_10049404c */

void FUN_10049404c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  return;
}



/* Address: 0x100494094 | FUN_100494094 */

undefined1 * FUN_100494094(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  param_1[0x18] = param_2[0x18];
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar4;
  uVar5 = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x100494130 | FUN_100494130 */

undefined1 * FUN_100494130(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x18] = param_2[0x18];
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10049422c | FUN_10049422c */

void FUN_10049422c(undefined8 *param_1,undefined8 *param_2)

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
  return;
}



/* Address: 0x100494250 | FUN_100494250 */

undefined1 * FUN_100494250(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[0x18] = param_2[0x18];
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1004942e4 | FUN_1004942e4 */

int FUN_1004942e4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10049432c | FUN_10049432c */

void FUN_10049432c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
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
      *(undefined1 *)(param_1 + 0xe) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xe) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100494388 | FUN_100494388 */

undefined1  [16] FUN_100494388(void)

{
  return ZEXT816(0x100ed8000);
}



/* Address: 0x100494398 | FUN_100494398 */

void FUN_100494398(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}


