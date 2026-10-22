/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100490534 | FUN_100490534 */

void FUN_100490534(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9560 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f098;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f098,&DAT_100ed8960);
  DAT_100fc9560 = pTVar1;
  return;
}



/* Address: 0x100490574 | FUN_100490574 */

undefined1  [16] FUN_100490574(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6472616f626e6970;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x64496d657469;
  }
  puVar2 = (undefined1 *)0xea00000000006449;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e600000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1004905b0 | FUN_1004905b0 */

void FUN_1004905b0(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x64496d657469 || param_3 != &DAT_e600000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x64496d657469,(_StringGuts)0xe600000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6472616f626e6970) && (param_3 == (undefined1 *)0xea00000000006449)) {
        _swift_bridgeObjectRelease(0xea00000000006449);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6472616f626e6970,(_StringGuts)0xea00000000006449,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_10049060c;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_10049060c:
  *param_1 = uVar2;
  return;
}



/* Address: 0x10049068c | FUN_10049068c */

String FUN_10049068c(void)

{
  String SVar1;
  
  FUN_100490fcc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004906b4 | FUN_1004906b4 */

String FUN_1004906b4(void)

{
  String SVar1;
  
  FUN_100490fcc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004906dc | FUN_1004906dc */

void FUN_1004906dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100490e44();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x100490708 | FUN_100490708 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100490708(String *param_1,undefined8 param_2,long param_3,long param_4,ID param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  long *plVar6;
  long unaff_x21;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  long alStack_88 [3];
  undefined8 local_70;
  long lStack_68;
  undefined *local_58;
  
  FUN_100498168(param_5,param_6,param_2);
  if (unaff_x21 == 0) {
    FUN_100357cf0(alStack_88);
    lVar9 = lStack_68;
    uVar1 = local_70;
    FUN_100004640(alStack_88,local_70);
    lVar7 = *(long *)(lVar9 + 8);
    pcVar8 = *(code **)(lVar7 + 0x20);
    _swift_bridgeObjectRetain(param_4);
    lVar9 = param_3;
    (*pcVar8)(param_3,param_4,uVar1,lVar7);
    if (lVar9 == 0) {
      plVar6 = alStack_88;
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
      FUN_100004594(alStack_88);
      FUN_100357cf0(alStack_88);
      uVar1 = local_70;
      FUN_100004640(alStack_88,local_70);
      puVar2 = &DAT_100fc95d8;
      FUN_1000037f0(&DAT_100fc95d8,&DAT_100c4e180);
      _swift_allocObject();
      *(undefined8 *)(puVar2 + 0x18) = 3;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(long *)(puVar2 + 0x20) = lVar9;
      lVar9 = *(long *)(lStack_68 + 0x10);
      pcVar8 = *(code **)(lVar9 + 0x28);
      puVar3 = &DAT_100fc95e0;
      local_58 = puVar2;
      FUN_1000037f0(&DAT_100fc95e0,&DAT_100c4f720);
      puVar4 = puVar3;
      FUN_100491068();
      (*pcVar8)(&local_58,param_5,puVar3,puVar4,uVar1,lVar9);
      _swift_release(puVar2);
      FUN_100004594(alStack_88);
      objc_stub::identifier(param_5);
      SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      objc_stub::name(param_5);
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      FUN_10032526c(alStack_88,0);
      FUN_100004640(alStack_88,local_70);
      pcVar5 = (char *)Swift::Collection::get_count();
      FUN_100004594(alStack_88);
      *param_1 = SVar10;
      param_1[1] = SVar11;
      param_1[2].str = pcVar5;
    }
  }
  return;
}



/* Address: 0x100490978 | FUN_100490978 */

undefined1  [16] FUN_100490978(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da8b00;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Address: 0x100490994 | FUN_100490994 */

void FUN_100490994(undefined8 *param_1)

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
  
  FUN_100490a90(&local_c8);
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



/* Address: 0x100490a04 | FUN_100490a04 */

/* WARNING: Removing unreachable block (ram,0x000100490a54) */

void FUN_100490a04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long unaff_x22;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uStack_68 = param_4[1];
  local_70 = *param_4;
  local_60 = param_4[2];
  uStack_58 = param_4[3];
  FUN_100357d14(&local_48,FUN_10049100c,auStack_80,&DAT_100ed8960);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[4] = local_28;
                    /* WARNING: Could not recover jumptable at 0x000100490a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100490a90 | FUN_100490a90 */

void FUN_100490a90(undefined8 *param_1)

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
  *(undefined8 *)(puVar3 + 0x20) = 0x64695f6d657469;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e700000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc9600);
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
  *(undefined8 *)(puVar3 + 0x58) = 0x6472616f626e6970;
  *(undefined8 *)(puVar3 + 0x60) = 0xeb0000000064695f;
  _swift_initStaticObject(puVar1,&DAT_100fc96a0);
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
  local_1b8 = 0xd000000000000014;
  uStack_1b0 = 0x8000000100da8b00;
  local_1a8 = 0xd000000000000014;
  uStack_1a0 = 0x8000000100da8b20;
  local_198 = 0x1000000000000091;
  uStack_190 = 0x8000000100da8b40;
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
  local_118 = 0x102;
  local_110 = 0xd000000000000014;
  uStack_108 = 0x8000000100da8b00;
  local_100 = 0xd000000000000014;
  uStack_f8 = 0x8000000100da8b20;
  local_f0 = 0x1000000000000091;
  uStack_e8 = 0x8000000100da8b40;
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



/* Address: 0x100490e44 | FUN_100490e44 */

/* WARNING: Removing unreachable block (ram,0x000100490f84) */
/* WARNING: Removing unreachable block (ram,0x000100490f0c) */

char * FUN_100490e44(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc95c0;
  FUN_1000037f0(&DAT_100fc95c0,&DAT_100c4e178);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100490fcc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar4.str;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decode(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x100490fcc | FUN_100490fcc */

void FUN_100490fcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc95c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e274;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e274,&DAT_100ed7970);
  DAT_100fc95c8 = pTVar1;
  return;
}



/* Address: 0x10049100c | FUN_10049100c */

void FUN_10049100c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100490708(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100491028 | FUN_100491028 */

void FUN_100491028(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc95d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f2f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f2f4,&DAT_100ed8ab0);
  DAT_100fc95d0 = pTVar1;
  return;
}



/* Address: 0x100491068 | FUN_100491068 */

void FUN_100491068(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc95e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc95e0;
  FUN_100005c24(&DAT_100fc95e0,&DAT_100c4f720);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fc95e8 = puVar2;
  return;
}



/* Address: 0x1004910b8 | FUN_1004910b8 */

undefined8 FUN_1004910b8(undefined8 param_1,undefined8 param_2)

{
  FUN_1005a9000(param_2,param_1);
  return param_2;
}



/* Address: 0x1004910f4 | FUN_1004910f4 */

undefined8 FUN_1004910f4(undefined8 param_1)

{
  FUN_1005a8f80();
  return param_1;
}



/* Address: 0x100491128 | FUN_100491128 */

undefined1  [16] FUN_100491128(void)

{
  return ZEXT816(0x100ed7970);
}



/* Address: 0x100491138 | FUN_100491138 */

void FUN_100491138(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x100491144 | FUN_100491144 */

undefined1  [16] FUN_100491144(void)

{
  return ZEXT816(0x100ed79e8);
}



/* Address: 0x100491154 | thunk_FUN_100491158 */

void thunk_FUN_100491158(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e24c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e24c,&DAT_100ed7970);
  DAT_100fc97b0 = pTVar1;
  return;
}



/* Address: 0x100491158 | FUN_100491158 */

void FUN_100491158(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e24c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e24c,&DAT_100ed7970);
  DAT_100fc97b0 = pTVar1;
  return;
}



/* Address: 0x100491198 | thunk_FUN_10049119c */

void thunk_FUN_10049119c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e1e4,&DAT_100ed7970);
  DAT_100fc97b8 = pTVar1;
  return;
}



/* Address: 0x10049119c | FUN_10049119c */

void FUN_10049119c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e1e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e1e4,&DAT_100ed7970);
  DAT_100fc97b8 = pTVar1;
  return;
}



/* Address: 0x1004911dc | thunk_FUN_1004911e0 */

void thunk_FUN_1004911e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e1bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e1bc,&DAT_100ed7970);
  DAT_100fc97c0 = pTVar1;
  return;
}



/* Address: 0x1004911e0 | FUN_1004911e0 */

void FUN_1004911e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e1bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e1bc,&DAT_100ed7970);
  DAT_100fc97c0 = pTVar1;
  return;
}



/* Address: 0x100491220 | FUN_100491220 */

undefined1  [16] FUN_100491220(void)

{
  return ZEXT816(0x100ed7ab8);
}



/* Address: 0x100491230 | thunk_FUN_100491234 */

void thunk_FUN_100491234(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e304;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e304,&DAT_100ed7bc0);
  DAT_100fc97c8 = pTVar1;
  return;
}



/* Address: 0x100491234 | FUN_100491234 */

void FUN_100491234(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e304;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e304,&DAT_100ed7bc0);
  DAT_100fc97c8 = pTVar1;
  return;
}



/* Address: 0x100491274 | thunk_FUN_100491278 */

void thunk_FUN_100491278(void)

{
  FUN_100491278();
  return;
}



/* Address: 0x100491278 | FUN_100491278 */

void FUN_100491278(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ee00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ee00,&DAT_100ed8770);
  DAT_100fc97d0 = pTVar1;
  return;
}



/* Address: 0x1004912b8 | thunk_FUN_1004912bc */

void thunk_FUN_1004912bc(void)

{
  FUN_1004912bc();
  return;
}



/* Address: 0x1004912bc | FUN_1004912bc */

void FUN_1004912bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc97d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4edd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4edd8,&DAT_100ed8770);
  DAT_100fc97d8 = pTVar1;
  return;
}



/* Address: 0x1004912fc | FUN_1004912fc */

undefined1  [16] FUN_1004912fc(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x64497473696c;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x746e65746e6f63;
  }
  puVar2 = &DAT_e600000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e700000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100491334 | FUN_100491334 */

void FUN_100491334(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x746e65746e6f63 || param_3 != &DAT_e700000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x746e65746e6f63,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x64497473696c) && (param_3 == &DAT_e600000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e600000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x64497473696c,(_StringGuts)0xe600000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_100491394;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_100491394:
  *param_1 = uVar2;
  return;
}



/* Address: 0x100491408 | FUN_100491408 */

String FUN_100491408(void)

{
  String SVar1;
  
  FUN_100491f28();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100491430 | FUN_100491430 */

String FUN_100491430(void)

{
  String SVar1;
  
  FUN_100491f28();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100491458 | FUN_100491458 */

void FUN_100491458(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_100491da0();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
    param_1[3] = param_5;
  }
  return;
}



/* Address: 0x100491484 | FUN_100491484 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100491484(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  ulong uVar1;
  ulong *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x21;
  long lVar7;
  code *pcVar8;
  ulong local_f0;
  undefined1 auStack_e8 [24];
  ulong local_d0;
  long lStack_c8;
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
  undefined *local_58;
  
  if (param_6 == 0) {
    FUN_100357e58(auStack_e8);
    lVar7 = lStack_c8;
    local_f0 = local_d0;
    FUN_100004640(auStack_e8,local_d0);
    (**(code **)(*(long *)(lVar7 + 8) + 0x28))();
    FUN_100004594(auStack_e8);
  }
  else {
    _swift_bridgeObjectRetain(param_6);
    local_f0 = param_5;
    FUN_100498168(param_5,param_6,param_2);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(param_6);
      return;
    }
    puVar2 = (ulong *)local_f0;
    FUN_100328e60();
    if (((ulong)puVar2 & 1) != 0) {
      FUN_100491028();
      _swift_allocError(&DAT_100ed8ab0,puVar2,0,0);
      *puVar2 = param_5;
      puVar2[1] = param_6;
      *(undefined1 *)(puVar2 + 2) = 1;
      _swift_willThrow();
      return;
    }
    _swift_bridgeObjectRelease(param_6);
  }
  FUN_100357cf0(auStack_e8);
  lVar7 = lStack_c8;
  uVar1 = local_d0;
  FUN_100004640(auStack_e8,local_d0);
  puVar3 = &DAT_100fc95d8;
  FUN_1000037f0(&DAT_100fc95d8,&DAT_100c4e180);
  puVar4 = puVar3;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  FUN_100381740(0);
  _swift_bridgeObjectRetain(param_4);
  FUN_10037c6d4(param_3,param_4);
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  puVar5 = puVar4;
  (**(code **)(*(long *)(lVar7 + 0x10) + 0x10))(puVar4,uVar1);
  if (unaff_x21 == 0) {
    _swift_release(puVar4);
    FUN_100004594(auStack_e8);
    FUN_100357cf0(auStack_e8);
    FUN_100004640(auStack_e8,local_d0);
    _swift_allocObject(puVar3,0x28,7);
    *(undefined8 *)(puVar3 + 0x18) = 3;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined **)(puVar3 + 0x20) = puVar5;
    lVar7 = *(long *)(lStack_c8 + 0x10);
    pcVar8 = *(code **)(lVar7 + 0x28);
    puVar4 = &DAT_100fc95e0;
    local_58 = puVar3;
    FUN_1000037f0(&DAT_100fc95e0,&DAT_100c4f720);
    puVar6 = puVar4;
    FUN_100491068();
    (*pcVar8)(&local_58,local_f0,puVar4,puVar6,local_d0,lVar7);
    _swift_release(puVar3);
    FUN_100004594(auStack_e8);
    FUN_10049738c(&local_c0,puVar5);
    param_1[5] = uStack_98;
    param_1[4] = local_a0;
    param_1[7] = uStack_88;
    param_1[6] = uStack_90;
    param_1[9] = uStack_78;
    param_1[8] = local_80;
    param_1[10] = local_70;
    param_1[1] = uStack_b8;
    *param_1 = local_c0;
    param_1[3] = uStack_a8;
    param_1[2] = uStack_b0;
  }
  else {
    _swift_release(puVar4);
    FUN_100004594(auStack_e8);
  }
  return;
}



/* Address: 0x100491760 | FUN_100491760 */

undefined1  [16] FUN_100491760(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb000000006d6574;
  auVar1._0_8_ = 0x695f657461657263;
  return auVar1;
}



/* Address: 0x100491780 | FUN_100491780 */

void FUN_100491780(undefined8 *param_1)

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
  
  FUN_1004918f4(&local_c8);
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



/* Address: 0x1004917f0 | FUN_1004917f0 */

void FUN_1004917f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  uVar1 = *param_4;
  uVar3 = param_4[1];
  uVar2 = param_4[2];
  uVar4 = param_4[3];
  plVar5 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100491890;
  FUN_100491ca8(plVar5,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,uVar1,uVar3,uVar2,uVar4
               );
  return;
}



/* Address: 0x100491890 | FUN_100491890 */

void FUN_100491890(void)

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
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x68);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    puVar1[10] = *(undefined8 *)(lVar2 + 0x60);
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    puVar1[9] = uVar9;
    puVar1[8] = uVar8;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004918f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1004918f4 | FUN_1004918f4 */

void FUN_1004918f4(undefined8 *param_1)

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
  *(undefined8 *)(puVar3 + 0x20) = 0x746e65746e6f63;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e700000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fc9850);
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
  *(undefined8 *)(puVar3 + 0x58) = 0x64695f7473696c;
  *(undefined1 **)(puVar3 + 0x60) = &DAT_e700000000000000;
  _swift_initStaticObject(puVar1,&DAT_100fc98e8);
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
  local_1b8 = 0x695f657461657263;
  uStack_1b0 = 0xeb000000006d6574;
  local_1a8 = 0xd000000000000015;
  uStack_1a0 = 0x8000000100da8c80;
  local_198 = 0x100000000000030b;
  uStack_190 = 0x8000000100da8ca0;
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
  local_118 = 0x202;
  local_110 = 0x695f657461657263;
  uStack_108 = 0xeb000000006d6574;
  local_100 = 0xd000000000000015;
  uStack_f8 = 0x8000000100da8c80;
  local_f0 = 0x100000000000030b;
  uStack_e8 = 0x8000000100da8ca0;
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



/* Address: 0x100491ca8 | FUN_100491ca8 */

/* WARNING: Removing unreachable block (ram,0x000100491d04) */

void FUN_100491ca8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  code *pcVar2;
  long unaff_x22;
  undefined1 auStack_b0 [16];
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
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
  undefined8 local_30;
  
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar1 = param_5 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    FUN_100491028();
    _swift_allocError(&DAT_100ed8ab0,param_1,0,0);
    *param_1 = 0xd00000000000001a;
    param_1[1] = 0x8000000100da8c60;
    *(undefined1 *)(param_1 + 2) = 4;
    _swift_willThrow();
    pcVar2 = *(code **)(unaff_x22 + 8);
  }
  else {
    local_a0 = param_4;
    uStack_98 = param_5;
    local_90 = param_6;
    uStack_88 = param_7;
    FUN_100357d14(&local_80,FUN_100491f68,auStack_b0,&DAT_100ed8770);
    param_1[5] = uStack_58;
    param_1[4] = local_60;
    param_1[7] = uStack_48;
    param_1[6] = uStack_50;
    param_1[9] = uStack_38;
    param_1[8] = local_40;
    param_1[10] = local_30;
    param_1[1] = uStack_78;
    *param_1 = local_80;
    param_1[3] = uStack_68;
    param_1[2] = uStack_70;
    pcVar2 = *(code **)(unaff_x22 + 8);
  }
  (*pcVar2)();
  return;
}



/* Address: 0x100491da0 | FUN_100491da0 */

/* WARNING: Removing unreachable block (ram,0x000100491ee0) */
/* WARNING: Removing unreachable block (ram,0x000100491e68) */

char * FUN_100491da0(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  long unaff_x21;
  long lVar3;
  String SVar4;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fc9838;
  FUN_1000037f0(&DAT_100fc9838,&DAT_100c4e330);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = *(char **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100491f28();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar4 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    pcVar2 = SVar4.str;
    local_52 = 1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_52,puVar1);
    (**(code **)(lVar3 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return pcVar2;
}



/* Address: 0x100491f28 | FUN_100491f28 */

void FUN_100491f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9840 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e40c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e40c,&DAT_100ed7b48);
  DAT_100fc9840 = pTVar1;
  return;
}



/* Address: 0x100491f68 | FUN_100491f68 */

void FUN_100491f68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100491484(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100491f84 | FUN_100491f84 */

undefined1  [16] FUN_100491f84(void)

{
  return ZEXT816(0x100ed7b48);
}



/* Address: 0x100491f94 | FUN_100491f94 */

undefined1  [16] FUN_100491f94(void)

{
  return ZEXT816(0x100ed7bc0);
}



/* Address: 0x100491fa4 | thunk_FUN_100491fa8 */

void thunk_FUN_100491fa8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e3e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e3e4,&DAT_100ed7b48);
  DAT_100fc99c8 = pTVar1;
  return;
}



/* Address: 0x100491fa8 | FUN_100491fa8 */

void FUN_100491fa8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e3e4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e3e4,&DAT_100ed7b48);
  DAT_100fc99c8 = pTVar1;
  return;
}



/* Address: 0x100491fe8 | thunk_FUN_100491fec */

void thunk_FUN_100491fec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e37c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e37c,&DAT_100ed7b48);
  DAT_100fc99d0 = pTVar1;
  return;
}



/* Address: 0x100491fec | FUN_100491fec */

void FUN_100491fec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e37c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e37c,&DAT_100ed7b48);
  DAT_100fc99d0 = pTVar1;
  return;
}



/* Address: 0x10049202c | thunk_FUN_100492030 */

void thunk_FUN_100492030(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e354;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e354,&DAT_100ed7b48);
  DAT_100fc99d8 = pTVar1;
  return;
}



/* Address: 0x100492030 | FUN_100492030 */

void FUN_100492030(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e354;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e354,&DAT_100ed7b48);
  DAT_100fc99d8 = pTVar1;
  return;
}



/* Address: 0x100492070 | FUN_100492070 */

undefined1  [16] FUN_100492070(void)

{
  return ZEXT816(0x100ed7c90);
}



/* Address: 0x100492080 | thunk_FUN_100492084 */

void thunk_FUN_100492084(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e49c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e49c,&DAT_100ed7d98);
  DAT_100fc99e0 = pTVar1;
  return;
}



/* Address: 0x100492084 | FUN_100492084 */

void FUN_100492084(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc99e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e49c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e49c,&DAT_100ed7d98);
  DAT_100fc99e0 = pTVar1;
  return;
}



/* Address: 0x1004920c4 | FUN_1004920c4 */

undefined1  [16] FUN_1004920c4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x656d616e;
  return auVar1;
}



/* Address: 0x1004920d4 | FUN_1004920d4 */

void FUN_1004920d4(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x656d616e && param_3 == &DAT_e400000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656d616e,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x100492158 | FUN_100492158 */

String FUN_100492158(void)

{
  String SVar1;
  
  FUN_100492578();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100492180 | FUN_100492180 */

String FUN_100492180(void)

{
  String SVar1;
  
  FUN_100492578();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}


