/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006fbf2c | FUN_1006fbf2c */

undefined ** FUN_1006fbf2c(void)

{
  return &PTR_PTR_100ef6538;
}



/* Address: 0x1006fbf38 | FUN_1006fbf38 */

undefined ** FUN_1006fbf38(void)

{
  return &PTR_PTR_100ef6528;
}



/* Address: 0x1006fbf44 | FUN_1006fbf44 */

undefined ** FUN_1006fbf44(void)

{
  return &PTR_PTR_100efafb8;
}



/* Address: 0x1006fbf50 | FUN_1006fbf50 */

undefined1  [16] FUN_1006fbf50(void)

{
  return ZEXT816(0x100efae78);
}



/* Address: 0x1006fbf60 | FUN_1006fbf60 */

undefined1  [16] FUN_1006fbf60(void)

{
  return ZEXT816(0x100efaef8);
}



/* Address: 0x1006fbf70 | thunk_FUN_1006fbf74 */

void thunk_FUN_1006fbf74(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1006fbf74 | FUN_1006fbf74 */

void FUN_1006fbf74(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1006fbfac | thunk_FUN_1006fbfb0 */

undefined8 * thunk_FUN_1006fbfb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006fbfb0 | FUN_1006fbfb0 */

undefined8 * FUN_1006fbfb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1006fc018 | thunk_FUN_1006fc01c */

undefined8 * thunk_FUN_1006fc01c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006fc01c | FUN_1006fc01c */

undefined8 * FUN_1006fc01c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006fc0a8 | thunk_FUN_1006fc0ac */

undefined8 * thunk_FUN_1006fc0ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006fc0ac | FUN_1006fc0ac */

undefined8 * FUN_1006fc0ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006fc100 | FUN_1006fc100 */

undefined1  [16] FUN_1006fc100(void)

{
  return ZEXT816(0x100efaf80);
}



/* Address: 0x1006fc110 | thunk_FUN_10001fbfc */

void thunk_FUN_10001fbfc(void)

{
  thunk_FUN_10001fbfc();
  return;
}



/* Address: 0x1006fc114 | thunk_FUN_1006fbf74 */

void thunk_FUN_1006fbf74(void)

{
  thunk_FUN_1006fbf74();
  return;
}



/* Address: 0x1006fc118 | thunk_FUN_1006fbfb0 */

void thunk_FUN_1006fbfb0(void)

{
  thunk_FUN_1006fbfb0();
  return;
}



/* Address: 0x1006fc11c | thunk_FUN_1006fc01c */

void thunk_FUN_1006fc01c(void)

{
  thunk_FUN_1006fc01c();
  return;
}



/* Address: 0x1006fc120 | thunk_FUN_1006fc0ac */

void thunk_FUN_1006fc0ac(void)

{
  thunk_FUN_1006fc0ac();
  return;
}



/* Address: 0x1006fc124 | thunk_FUN_10001fbb4 */

void thunk_FUN_10001fbb4(void)

{
  thunk_FUN_10001fbb4();
  return;
}



/* Address: 0x1006fc128 | FUN_1006fc128 */

void FUN_1006fc128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain(param_3);
  return;
}



/* Address: 0x1006fc130 | thunk_FUN_1006fc134 */

undefined8 * thunk_FUN_1006fc134(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_unknownObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006fc134 | FUN_1006fc134 */

undefined8 * FUN_1006fc134(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_unknownObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006fc174 | FUN_1006fc174 */

undefined8 * FUN_1006fc174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1006fc1d4 | FUN_1006fc1d4 */

undefined8 * FUN_1006fc1d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1006fc218 | FUN_1006fc218 */

undefined1  [16] FUN_1006fc218(void)

{
  return ZEXT816(0x100efb030);
}



/* Address: 0x1006fc228 | thunk_FUN_1006fc134 */

void thunk_FUN_1006fc134(void)

{
  thunk_FUN_1006fc134();
  return;
}



/* Address: 0x1006fc22c | FUN_1006fc22c */

long FUN_1006fc22c(long *param_1)

{
  long lVar1;
  
  if (DAT_100fde8e8 != -1) {
    param_1 = &DAT_100fde8e8;
    _swift_once(&DAT_100fde8e8,FUN_1006fc410);
  }
  (**(code **)(*DAT_100fde8f0 + 0x88))();
  lVar1 = *param_1;
  *param_1 = lVar1 + 1;
  return lVar1;
}



/* Address: 0x1006fc288 | FUN_1006fc288 */

String FUN_1006fc288(char *param_1)

{
  char *pcVar1;
  void *pvVar2;
  code *pcVar3;
  __int64 _Var4;
  char *count;
  undefined *puVar6;
  String SVar7;
  String repeating;
  String SVar8;
  String SVar9;
  String local_50;
  void *pvVar5;
  
  if (DAT_100fde8f8 != -1) {
    _swift_once(&DAT_100fde8f8,FUN_1006fc3b4);
  }
  pvVar2 = DAT_100fde908;
  pcVar1 = DAT_100fde900;
  local_50.str = param_1;
  FUN_1006fc470();
  count = (char *)0x0;
  puVar6 = PTR___type_metadata_for_Swift_UInt64_100eade90;
  SVar7 = Swift::String::_init
                    (&local_50,0x10,0,PTR___type_metadata_for_Swift_UInt64_100eade90,param_1);
  _Var4 = Swift::String::get_count(SVar7);
  if (_Var4 < 0x10) {
    _Var4 = Swift::String::get_count(SVar7);
    count = (char *)(0x10 - _Var4);
    if (SBORROW8(0x10,_Var4)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006fc3b4);
      (*pcVar3)();
    }
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = &DAT_00000030;
    local_50 = Swift::String::init(repeating,(__int64)count);
    pvVar5 = local_50.bridgeObject;
    _swift_bridgeObjectRetain(pvVar5);
    SVar8.bridgeObject = puVar6;
    SVar8.str = count;
    Swift::String::append(SVar7,SVar8);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    _swift_bridgeObjectRelease(pvVar5);
    SVar7 = local_50;
  }
  local_50.bridgeObject = pvVar2;
  local_50.str = pcVar1;
  _swift_bridgeObjectRetain(pvVar2);
  SVar9.bridgeObject = puVar6;
  SVar9.str = count;
  Swift::String::append(SVar7,SVar9);
  _swift_bridgeObjectRelease(SVar7.bridgeObject);
  return local_50;
}



/* Address: 0x1006fc3b4 | FUN_1006fc3b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006fc3b4(void)

{
  undefined8 *puVar1;
  undefined8 local_18;
  
  local_18 = 0;
  puVar1 = &local_18;
  _swift_stdlib_random(puVar1,8);
  FUN_1006fc470();
  _DAT_100fde900 =
       Swift::String::_init(&local_18,0x10,0,PTR___type_metadata_for_Swift_UInt64_100eade90,puVar1);
  return;
}



/* Address: 0x1006fc410 | FUN_1006fc410 */

void FUN_1006fc410(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  local_28 = 0;
  _swift_stdlib_random(&local_28,8);
  uVar1 = local_28;
  puVar2 = &DAT_100fde918;
  FUN_1000f7830(&DAT_100fde918,&DAT_100c73678);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  DAT_100fde8f0 = puVar2;
  return;
}



/* Address: 0x1006fc470 | FUN_1006fc470 */

void FUN_1006fc470(void)

{
  undefined *puVar1;
  
  if (DAT_100fde910 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadea8;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadea8,
             PTR___type_metadata_for_Swift_UInt64_100eade90);
  DAT_100fde910 = puVar1;
  return;
}



/* Address: 0x1006fc4b0 | FUN_1006fc4b0 */

void FUN_1006fc4b0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006fc288(*unaff_x20);
  return;
}



/* Address: 0x1006fc4b8 | FUN_1006fc4b8 */

undefined1  [16] FUN_1006fc4b8(void)

{
  return ZEXT816(0x100efb058);
}



/* Address: 0x1006fc4c8 | FUN_1006fc4c8 */

void FUN_1006fc4c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1006da9d8;
  FUN_1006e3fec(plVar3,unaff_x22 + 0x10,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x1006fc544 | FUN_1006fc544 */

void FUN_1006fc544(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1006fc550 | FUN_1006fc550 */

void FUN_1006fc550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  uVar1 = 0xff;
  FUN_1009e1f14(0xff);
  _swift_getFunctionTypeMetadata2(0x65000002,uVar1,uVar2,&DAT_100f277d8);
  return;
}



/* Address: 0x1006fc58c | FUN_1006fc58c */

void FUN_1006fc58c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined *puVar1;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  String SVar6;
  undefined8 uVar7;
  
  if (param_4 < 2) {
    if (param_4 == 0) {
      uVar4 = 0xd000000000000011;
      puVar3 = (undefined1 *)0x8000000100db0bd0;
      uVar5 = 0x12d;
    }
    else {
      puVar3 = &DAT_e500000000000000;
      uVar4 = 0x646e756f46;
      uVar5 = 0x12e;
    }
  }
  else if (param_4 == 2) {
    puVar3 = (undefined1 *)0xe900000000000072;
    uVar4 = 0x6568744f20656553;
    uVar5 = 0x12f;
  }
  else {
    puVar3 = (undefined1 *)0x8000000100db1160;
    uVar4 = 0xd000000000000012;
    uVar5 = 0x133;
  }
  uVar2 = 0x2d746e65746e6f43;
  puVar1 = &DAT_100fdd048;
  FUN_1000f7830(&DAT_100fdd048,&DAT_100c71a90);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6e6f697461636f4c;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e800000000000000;
  *(undefined8 *)(puVar1 + 0x30) = 0x6e6f697461636f6c;
  *(undefined1 **)(puVar1 + 0x38) = &DAT_e800000000000000;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_3;
  _swift_bridgeObjectRetain(param_3);
  FUN_10085d78c();
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar1);
  if ((uVar2 & 1) == 0) {
    uVar7 = 0;
    SVar6 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar6.str,SVar6.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c,in_x6,in_x7,uVar7);
  }
  _swift_release(puVar1);
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 8) = 2;
  param_1[1] = uVar4;
  *param_1 = uVar5;
  param_1[3] = puVar1;
  param_1[2] = puVar3;
  return;
}



/* Address: 0x1006fc788 | FUN_1006fc788 */

undefined8 FUN_1006fc788(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x12f;
  if (param_1 != 2) {
    uVar1 = 0x133;
  }
  uVar2 = 0x12d;
  if (param_1 != 0) {
    uVar2 = 0x12e;
  }
  if (param_1 < 2) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x1006fc820 | thunk_FUN_1006fc824 */

void thunk_FUN_1006fc824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde9b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73710,&DAT_100efb158);
  DAT_100fde9b8 = pTVar1;
  return;
}



/* Address: 0x1006fc824 | FUN_1006fc824 */

void FUN_1006fc824(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fde9b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73710;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73710,&DAT_100efb158);
  DAT_100fde9b8 = pTVar1;
  return;
}



/* Address: 0x1006fc864 | FUN_1006fc864 */

undefined1  [16] FUN_1006fc864(void)

{
  return ZEXT816(0x100efb158);
}



/* Address: 0x1006fc874 | FUN_1006fc874 */

void FUN_1006fc874(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  DefaultStringInterpolation DVar2;
  DecodingError DVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  Context CVar10;
  char *pcVar11;
  DefaultStringInterpolation *pDVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  _StringGuts _Var16;
  char *pcVar17;
  char *pcVar18;
  void *pvVar19;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar20;
  long extraout_x8_01;
  long unaff_x21;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 *puVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  undefined8 auStack_270 [2];
  long alStack_260 [4];
  undefined8 *local_240;
  long local_238;
  char *local_230;
  long local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 auStack_1c0 [24];
  undefined *local_1a8;
  long lStack_1a0;
  DefaultStringInterpolation local_198;
  undefined *local_190;
  undefined8 uStack_188;
  char *local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  long local_108;
  long lStack_100;
  long local_f8 [5];
  long local_d0;
  undefined1 local_c8 [8];
  undefined *local_c0;
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
  char *pcVar5;
  
  alStack_260[1] = param_3;
  alStack_260[2] = param_7;
  alStack_260[3] = param_5;
  local_230 = (char *)Swift::DecodingError::Context::typeMetadataAccessor();
  local_238 = *(long *)(local_230 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_238 + 0x40));
  puVar24 = (undefined8 *)((long)alStack_260 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_240 = puVar24;
  DVar3 = Swift::DecodingError::typeMetadataAccessor();
  pcVar5 = (char *)CONCAT71(extraout_var,DVar3.value);
  local_228 = *(long *)(pcVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_228 + 0x40));
  puVar24 = (undefined8 *)((long)puVar24 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c292c(PTR___swiftEmptyArrayStorage_100eae0d8);
  puVar7 = puVar6;
  FUN_1009fc7f0();
  puVar8 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar8 = puVar7;
  }
  lVar15 = -0x2000000000000000;
  if (param_3 != 0) {
    lVar15 = param_3;
  }
  puVar24[-2] = param_6;
  FUN_1006a6da8(param_1,param_4,puVar8,lVar15,0,0,2,puVar6,param_4);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(lVar15);
    return;
  }
  _swift_bridgeObjectRelease(puVar6);
  _swift_bridgeObjectRelease(lVar15);
  local_f8[0] = unaff_x21;
  _swift_errorRetain(unaff_x21);
  puVar8 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  puVar9 = puVar24;
  pcVar18 = pcVar5;
  _swift_dynamicCast(puVar24,local_f8,puVar8,pcVar5,0);
  lVar15 = local_228;
  if ((int)puVar9 == 0) {
LAB_1006fcf10:
    _swift_errorRelease(local_f8[0]);
    local_d0 = unaff_x21;
    _swift_errorRetain(unaff_x21);
    puVar6 = &DAT_100fdc4c8;
    FUN_1000f7830(&DAT_100fdc4c8,&DAT_100c71c80);
    plVar14 = local_f8;
    _swift_dynamicCast(plVar14,&local_d0,puVar8,puVar6,8);
    local_f8[0] = local_d0;
    if ((int)plVar14 != 0) {
      _swift_errorRelease(unaff_x21);
      FUN_100076508(local_f8,auStack_120);
      lVar15 = alStack_260[3];
      (**(code **)(*(long *)(alStack_260[2] + 0x10) + 8))(alStack_260[3]);
      pcVar18 = (char *)0x0;
      pvVar19 = (void *)0x0;
      _swift_beginAccess(lVar15 + 0x20,auStack_138);
      FUN_100076688(lVar15 + 0x20,&local_198);
      puVar8 = puStack_178;
      pcVar5 = local_180;
      FUN_100004640(&local_198,local_180);
      (**(code **)(puVar8 + 0x70))(pcVar5,puVar8);
      FUN_100004594(&local_198);
      if (((uint)pcVar5 & 0xff) < 2) {
        FUN_100076688(lVar15 + 0x20,auStack_1c0);
        _Var16.unknown = local_1a8;
        FUN_100004640();
        local_198.unknown = (undefined *)0x0;
        local_190 = (undefined *)0xe000000000000000;
        Swift::_StringGuts::grow(0x10,_Var16);
        SVar32.bridgeObject = (void *)0xee00203a726f7272;
        SVar32.str = (char *)0x452065646f636544;
        SVar41.bridgeObject = pvVar19;
        SVar41.str = pcVar18;
        Swift::String::append(SVar32,SVar41);
        FUN_100004640(auStack_120,local_108);
        Swift::DefaultStringInterpolation::_appendInterpolation();
        DVar2.unknown = local_198.unknown;
        FUN_1006c446c();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar2);
        uStack_188 = local_190;
        DVar2.unknown = local_198.unknown;
        local_c8[0] = 1;
        local_c0 = local_198.unknown;
        uStack_b8 = local_190;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        local_90 = 0xd000000000000021;
        uStack_88 = 0x8000000100db1180;
        local_80 = 0xd000000000000018;
        uStack_78 = 0x8000000100db11b0;
        local_70 = 0x25;
        local_198.unknown._0_1_ = 1;
        local_190 = DVar2.unknown;
        puStack_178 = (undefined *)0x0;
        local_180 = (char *)0x0;
        uStack_168 = 0;
        local_170 = 0;
        local_160 = 0xd000000000000021;
        uStack_158 = 0x8000000100db1180;
        local_150 = 0xd000000000000018;
        uStack_148 = 0x8000000100db11b0;
        local_140 = 0x25;
        FUN_1005bf638(local_c8,&local_220);
        FUN_1004eaa3c(&local_198);
        (**(code **)(lStack_1a0 + 0x28))(local_c8,local_1a8,lStack_1a0);
        _swift_release(lVar15);
        FUN_1004eaa3c(local_c8);
        FUN_100004594(auStack_1c0);
      }
      else {
        _swift_release(lVar15);
      }
      FUN_100004640(auStack_120,local_108);
      lVar23 = *(long *)(local_108 + -8);
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar23 + 0x40));
      lVar21 = (long)puVar24 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
      (**(code **)(lVar23 + 0x10))(lVar21);
      uVar22 = *(undefined8 *)(lStack_100 + 0x10);
      lVar15 = lVar21;
      Swift::__getErrorEmbeddedNSError(lVar21,local_108,uVar22);
      if (lVar15 == 0) {
        _swift_allocError(local_108,uVar22,0,0);
        (**(code **)(lVar23 + 0x20))(uVar22,lVar21,local_108);
      }
      else {
        (**(code **)(lVar23 + 8))(lVar21,local_108);
      }
      _swift_willThrow();
      FUN_100004594(auStack_120);
      local_f8[0] = local_d0;
    }
  }
  else {
    puVar9 = puVar24;
    (**(code **)(local_228 + 0x58))(puVar24,pcVar5);
    iVar4 = (int)puVar9;
    if (iVar4 == *(int *)
                  PTR___enum_case_for_Swift_DecodingError_typeMismatch_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf38
       ) {
      _swift_errorRelease(unaff_x21);
      (**(code **)(lVar15 + 0x60))(puVar24,pcVar5);
      uVar22 = *puVar24;
      puVar8 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      pcVar5 = local_230;
      lVar15 = local_238;
      puVar9 = local_240;
      puVar8 = (undefined *)((long)puVar24 + (long)*(int *)(puVar8 + 0x30));
      CVar10.unknown = (undefined *)local_240;
      pcVar17 = local_230;
      (**(code **)(local_238 + 0x20))();
      Swift::DecodingError::Context::_get_codingPath(CVar10);
      pcVar11 = CVar10.unknown;
      FUN_1006f9d24();
      _Var16.unknown = puVar8;
      _swift_bridgeObjectRelease(CVar10.unknown);
      local_198.unknown = (undefined *)0x0;
      local_190 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x2f,_Var16);
      _swift_bridgeObjectRelease(local_190);
      local_198.unknown = (undefined *)0xd000000000000013;
      local_190 = (undefined *)0x8000000100db1070;
      SVar25.bridgeObject = puVar8;
      SVar25.str = pcVar11;
      SVar33.bridgeObject = pcVar18;
      SVar33.str = pcVar17;
      Swift::String::append(SVar25,SVar33);
      _swift_bridgeObjectRelease(puVar8);
      SVar26.bridgeObject = (void *)0x8000000100db1090;
      SVar26.str = (char *)0xd000000000000011;
      SVar34.bridgeObject = pcVar18;
      SVar34.str = pcVar17;
      Swift::String::append(SVar26,SVar34);
      SVar27 = Swift::__typeName(SUB81(uVar22,0));
      SVar35.bridgeObject = pcVar18;
      SVar35.str = pcVar17;
      Swift::String::append(SVar27,SVar35);
      _swift_bridgeObjectRelease(SVar27.bridgeObject);
      SVar28.bridgeObject = &DAT_e700000000000000;
      SVar28.str = (char *)0x2e657079742060;
      SVar36.bridgeObject = pcVar18;
      SVar36.str = pcVar17;
      Swift::String::append(SVar28,SVar36);
      puVar8 = local_190;
      DVar2.unknown = local_198.unknown;
      puVar24 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar13 = puVar24;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar13,0,0);
      builtin_strncpy((char *)(puVar13 + 1),"Bad Requ",8);
      *puVar13 = 400;
      puVar13[2] = 0xeb00000000747365;
      puVar13[3] = puVar24;
      puVar13[4] = DVar2.unknown;
      puVar13[5] = puVar8;
      _swift_willThrow();
      pcVar20 = *(code **)(lVar15 + 8);
      puVar24 = puVar9;
    }
    else if (iVar4 == *(int *)
                       PTR___enum_case_for_Swift_DecodingError_valueNotFound_Swift_DecodingError_Type___>__Any_Type_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf48
            ) {
      _swift_errorRelease(unaff_x21);
      (**(code **)(lVar15 + 0x60))(puVar24,pcVar5);
      puVar8 = &DAT_100fdbf50;
      FUN_1000f7830(&DAT_100fdbf50,&DAT_100c6f970);
      pcVar5 = local_230;
      lVar15 = local_238;
      puVar9 = local_240;
      puVar8 = (undefined *)((long)puVar24 + (long)*(int *)(puVar8 + 0x30));
      CVar10.unknown = (undefined *)local_240;
      pcVar17 = local_230;
      (**(code **)(local_238 + 0x20))();
      Swift::DecodingError::Context::_get_codingPath(CVar10);
      pcVar11 = CVar10.unknown;
      FUN_1006f9d24();
      _Var16.unknown = puVar8;
      _swift_bridgeObjectRelease(CVar10.unknown);
      local_198.unknown = (undefined *)0x0;
      local_190 = (undefined *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1d,_Var16);
      _swift_bridgeObjectRelease(local_190);
      local_198.unknown = (undefined *)0xd000000000000015;
      local_190 = (undefined *)0x8000000100db10b0;
      SVar29.bridgeObject = puVar8;
      SVar29.str = pcVar11;
      SVar37.bridgeObject = pcVar18;
      SVar37.str = pcVar17;
      Swift::String::append(SVar29,SVar37);
      _swift_bridgeObjectRelease(puVar8);
      SVar30.bridgeObject = &DAT_e600000000000000;
      SVar30.str = (char *)0x2e79656b2060;
      SVar38.bridgeObject = pcVar18;
      SVar38.str = pcVar17;
      Swift::String::append(SVar30,SVar38);
      puVar8 = local_190;
      DVar2.unknown = local_198.unknown;
      puVar24 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar13 = puVar24;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar13,0,0);
      builtin_strncpy((char *)(puVar13 + 1),"Bad Requ",8);
      *puVar13 = 400;
      puVar13[2] = 0xeb00000000747365;
      puVar13[3] = puVar24;
      puVar13[4] = DVar2.unknown;
      puVar13[5] = puVar8;
      _swift_willThrow();
      pcVar20 = *(code **)(lVar15 + 8);
      puVar24 = puVar9;
    }
    else if (iVar4 == *(int *)
                       PTR___enum_case_for_Swift_DecodingError_keyNotFound_Swift_DecodingError_Type___>__Swift_CodingKey_Swift_DecodingError_Context___>_Swift_DecodingError_100eacf30
            ) {
      _swift_errorRelease(unaff_x21);
      (**(code **)(lVar15 + 0x60))(puVar24,pcVar5);
      puVar8 = &DAT_100fdc020;
      FUN_1000f7830(&DAT_100fdc020,&DAT_100c6fcc8);
      iVar4 = *(int *)(puVar8 + 0x30);
      FUN_100076508(puVar24,&local_198);
      _Var16.unknown = puStack_178;
      pcVar5 = local_180;
      pDVar12 = &local_198;
      FUN_100004640(pDVar12,local_180);
      FUN_1006f9cac();
      local_220 = 0;
      local_218 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1a,_Var16);
      _swift_bridgeObjectRelease(local_218);
      local_220 = 0x6b20676e69646f43;
      local_218 = 0xec00000060207965;
      SVar27.bridgeObject = _Var16.unknown;
      SVar27.str = pcVar5;
      SVar39.bridgeObject = pcVar18;
      SVar39.str = (char *)pDVar12;
      Swift::String::append(SVar27,SVar39);
      _swift_bridgeObjectRelease(_Var16.unknown);
      SVar31.bridgeObject = (void *)0xec0000002e646e75;
      SVar31.str = (char *)0x6f6620746f6e2060;
      SVar40.bridgeObject = pcVar18;
      SVar40.str = (char *)pDVar12;
      Swift::String::append(SVar31,SVar40);
      uVar1 = local_218;
      uVar22 = local_220;
      puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar13 = puVar9;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar13,0,0);
      builtin_strncpy((char *)(puVar13 + 1),"Bad Requ",8);
      *puVar13 = 400;
      puVar13[2] = 0xeb00000000747365;
      puVar13[3] = puVar9;
      puVar13[4] = uVar22;
      puVar13[5] = uVar1;
      _swift_willThrow();
      FUN_100004594(&local_198);
      pcVar20 = *(code **)(local_238 + 8);
      puVar24 = (undefined8 *)((long)puVar24 + (long)iVar4);
      pcVar5 = local_230;
    }
    else {
      if (iVar4 != *(int *)
                    PTR___enum_case_for_Swift_DecodingError_dataCorrupted_Swift_DecodingError_Type___>__Swift_DecodingError_Context___>_Swift_DecodingError_100eacf40
         ) {
        (**(code **)(lVar15 + 8))(puVar24,pcVar5);
        goto LAB_1006fcf10;
      }
      _swift_errorRelease(unaff_x21);
      puVar9 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10085d78c();
      puVar13 = puVar9;
      FUN_1006be0ac();
      _swift_allocError(&DAT_100ef7ae0,puVar13,0,0);
      builtin_strncpy((char *)(puVar13 + 1),"Bad Requ",8);
      *puVar13 = 400;
      puVar13[2] = 0xeb00000000747365;
      puVar13[3] = puVar9;
      puVar13[4] = 0xd000000000000023;
      puVar13[5] = 0x8000000100db11d0;
      _swift_willThrow();
      pcVar20 = *(code **)(lVar15 + 8);
    }
    (*pcVar20)(puVar24,pcVar5);
  }
  _swift_errorRelease(local_f8[0]);
  return;
}



/* Address: 0x1006fd238 | FUN_1006fd238 */

undefined8 FUN_1006fd238(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1006fd274(param_1);
  return unaff_x20;
}



/* Address: 0x1006fd274 | FUN_1006fd274 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006fd2e8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006fd274(undefined8 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Dictionary<undefined,undefined> DVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  _swift_defaultActor_initialize();
  lVar1 = *(long *)(lVar7 + 0x50);
  uVar4 = 0xff;
  FUN_1006ffbc4(0xff,lVar1,*(undefined8 *)(lVar7 + 0x58));
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_String_100eac208,uVar4,0,0);
  Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  DVar6 = Swift::Dictionary::_init
                    (uVar5,puVar3,uVar4,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  unaff_x20[0xe] = (long)DVar6.unknown;
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),param_1,lVar1);
  puVar2 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  puVar2[1] = 0x20;
  *puVar2 = 0x86ac351052600000;
  return;
}



/* Address: 0x1006fd33c | FUN_1006fd33c */

long * FUN_1006fd33c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ContinuousClock CVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2e4c();
  unaff_x20[0xe] = (long)puVar2;
  CVar3 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar4 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  (extension_Swift)::Swift::Clock::_get_continuous();
  (**(code **)(lVar4 + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar3.unknown);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return unaff_x20;
}



/* Address: 0x1006fd408 | FUN_1006fd408 */

void FUN_1006fd408(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  ContinuousClock CVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  
  _swift_defaultActor_initialize();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c2e4c();
  unaff_x20[0xe] = (long)puVar2;
  CVar3 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar4 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  (extension_Swift)::Swift::Clock::_get_continuous();
  (**(code **)(lVar4 + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),
             &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar3.unknown);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  return;
}



/* Address: 0x1006fd4c4 | FUN_1006fd4c4 */

undefined8 FUN_1006fd4c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1006fd518(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1006fd518 | FUN_1006fd518 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006fd598 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1006fd518(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Dictionary<undefined,undefined> DVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  _swift_defaultActor_initialize();
  lVar2 = *(long *)(lVar7 + 0x50);
  uVar4 = 0xff;
  FUN_1006ffbc4(0xff,lVar2,*(undefined8 *)(lVar7 + 0x58));
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_String_100eac208,uVar4,0,0);
  Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  DVar6 = Swift::Dictionary::_init
                    (uVar5,puVar3,uVar4,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                    );
  unaff_x20[0xe] = (long)DVar6.unknown;
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),param_1,lVar2);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Address: 0x1006fd5ec | FUN_1006fd5ec */

void FUN_1006fd5ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined7 extraout_var_00;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_9;
  *(long **)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_7;
  *(undefined8 *)(unaff_x22 + 0x108) = param_8;
  *(undefined1 *)(unaff_x22 + 0xb1) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  lVar5 = *unaff_x20;
  uVar6 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
  uVar7 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar6,uVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(undefined8 *)(unaff_x22 + 0x130) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  uVar2 = 0xff;
  FUN_1006ffbc4(0xff,uVar7,uVar6);
  *(undefined8 *)(unaff_x22 + 0x140) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x148) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x150) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar4 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar4;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar3;
  _swift_task_switch(FUN_1006fd6f4);
  return;
}



/* Address: 0x1006fd6f4 | FUN_1006fd6f4 */

void FUN_1006fd6f4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  Dictionary DVar11;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  puVar14 = *(undefined1 **)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar20 = *(long *)(unaff_x22 + 0x150);
  lVar15 = *(long *)(unaff_x22 + 0x140);
  lVar19 = *(long *)(unaff_x22 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_beginAccess(lVar19 + 0x70,unaff_x22 + 0x70,0,0);
  uVar17 = *(undefined8 *)(lVar19 + 0x70);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar16;
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  Swift::Dictionary::_get_subscript
            (puVar14,(undefined8 *)(unaff_x22 + 0xb8),uVar17,
             PTR___type_metadata_for_Swift_String_100eac208,lVar15,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(uVar16);
  lVar18 = *(long *)(lVar15 + -8);
  puVar9 = puVar14;
  (**(code **)(lVar18 + 0x30))(puVar14,1,lVar15);
  (**(code **)(lVar20 + 8))(puVar14,uVar1);
  if ((int)puVar9 == 1) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x138);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x140);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x130);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
    uVar8 = *(undefined1 *)(unaff_x22 + 0xb1);
    uVar17 = *(undefined8 *)(unaff_x22 + 0xf0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xf8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x108);
    lVar20 = *(long *)(unaff_x22 + 0x100);
    *(long *)(unaff_x22 + 0x58) = lVar20;
    *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x108);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x110);
    *(undefined8 *)(unaff_x22 + 0x68) = uVar21;
    FUN_10000cbb0(unaff_x22 + 0x40);
    (**(code **)(*(long *)(lVar20 + -8) + 0x10))();
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar17;
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar7;
    *(undefined1 *)(unaff_x22 + 0xb0) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x28) = uVar22;
    *(long *)(unaff_x22 + 0x20) = lVar20;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar23;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar21;
    puVar10 = &DAT_100fde9c0;
    FUN_1000f7830(&DAT_100fde9c0,&DAT_100c737a8);
    FUN_1001b8460(uVar2,FUN_1006ffbd0,unaff_x22 + 0x10,puVar10,
                  PTR___type_metadata_for_Swift_Never_100eadc38,uVar6,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    FUN_1006fd9c8(uVar1,unaff_x22 + 0x40,uVar2,uVar16,uVar12);
    (**(code **)(lVar18 + 0x38))(uVar1,0,1,uVar5);
    *(undefined8 *)(unaff_x22 + 200) = uVar13;
    *(undefined8 *)(unaff_x22 + 0xd0) = uVar3;
    _swift_beginAccess(lVar19 + 0x70,unaff_x22 + 0x88,0x21,0);
    DVar11 = Swift::Dictionary::typeMetadataAccessor();
    _swift_bridgeObjectRetain(uVar3);
    Swift::Dictionary::_set_subscript
              ((Dictionary *)(lVar19 + 0x70),uVar1,(undefined8 *)(unaff_x22 + 200),DVar11.unknown);
    _swift_endAccess(unaff_x22 + 0x88);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x138);
    FUN_1006ffbf4();
    _swift_allocError(&DAT_100efb418,puVar14,0,0);
    *puVar14 = 0;
    _swift_willThrow();
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar16);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006fd9c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006fd9c8 | FUN_1006fd9c8 */

void FUN_1006fd9c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  Optional OVar2;
  long lVar3;
  undefined7 extraout_var;
  
  FUN_1000385d4(param_2,param_1);
  lVar3 = 0;
  FUN_1006ffbc4(0,param_4,param_5);
  iVar1 = *(int *)(lVar3 + 0x24);
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006fda58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x20))
            (param_1 + iVar1,param_3,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1006fda5c | FUN_1006fda5c */

void FUN_1006fda5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  undefined7 extraout_var_00;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x110) = param_9;
  *(long **)(unaff_x22 + 0x118) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x100) = param_7;
  *(undefined8 *)(unaff_x22 + 0x108) = param_8;
  *(undefined1 *)(unaff_x22 + 0xb1) = param_6;
  *(undefined8 *)(unaff_x22 + 0xf0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_1;
  lVar5 = *unaff_x20;
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x120) = uVar6;
  uVar7 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar7;
  lVar5 = 0;
  FUN_1006ffbc4(0,uVar6,uVar7);
  *(long *)(unaff_x22 + 0x130) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x148) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x150) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x158) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar6,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(undefined8 *)(unaff_x22 + 0x168) = uVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x170) = CONCAT71(extraout_var_00,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x178) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 400) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x198) = uVar2;
  _swift_task_switch(FUN_1006fdbb4);
  return;
}



/* Address: 0x1006fdbb4 | FUN_1006fdbb4 */

void FUN_1006fdbb4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  Dictionary DVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  long lVar21;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar17 = *(long *)(unaff_x22 + 0x178);
  lVar19 = *(long *)(unaff_x22 + 0x168);
  *(undefined1 *)(unaff_x22 + 0xb0) = *(undefined1 *)(unaff_x22 + 0xb1);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x110);
  puVar9 = &DAT_100fde9c0;
  FUN_1000f7830(&DAT_100fde9c0,&DAT_100c737a8);
  FUN_1001b8460(uVar2,FUN_1006ffc34,unaff_x22 + 0x10,puVar9,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar19,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  (**(code **)(lVar17 + 0x20))(uVar13,uVar2,uVar14);
  lVar17 = *(long *)(lVar19 + -8);
  pcVar20 = *(code **)(lVar17 + 0x30);
  (*pcVar20)(uVar13,1,lVar19);
  if ((int)uVar13 == 1) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar19 = *(long *)(unaff_x22 + 0x138);
    lVar15 = *(long *)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
    _swift_beginAccess(lVar15 + 0x70,unaff_x22 + 0x70,0,0);
    uVar16 = *(undefined8 *)(lVar15 + 0x70);
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar14;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
    _swift_bridgeObjectRetain(uVar2);
    _swift_bridgeObjectRetain(uVar16);
    Swift::Dictionary::_get_subscript
              (uVar12,(undefined8 *)(unaff_x22 + 0xb8),uVar16,
               PTR___type_metadata_for_Swift_String_100eac208,uVar13,
               PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
    _swift_bridgeObjectRelease(uVar16);
    _swift_bridgeObjectRelease(uVar2);
    (**(code **)(lVar19 + 0x30))(uVar12,1,uVar13);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x198);
    if ((int)uVar12 == 0) {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar19 = *(long *)(unaff_x22 + 0x178);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x160);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar15 = *(long *)(unaff_x22 + 0x150);
      lVar17 = *(long *)(unaff_x22 + 0x138);
      lVar21 = *(long *)(unaff_x22 + 0x140);
      lVar18 = *(long *)(unaff_x22 + 0x130);
      (**(code **)(lVar17 + 0x10))(lVar21,uVar12,lVar18);
      (**(code **)(lVar15 + 8))(uVar12,uVar2);
      (**(code **)(lVar19 + 0x10))(uVar13,lVar21 + *(int *)(lVar18 + 0x24),uVar14);
      (**(code **)(lVar17 + 8))(lVar21,lVar18);
    }
    else {
      uVar14 = *(undefined8 *)(unaff_x22 + 0x168);
      (**(code **)(*(long *)(unaff_x22 + 0x150) + 8))
                (*(undefined8 *)(unaff_x22 + 0x160),*(undefined8 *)(unaff_x22 + 0x148));
      (**(code **)(lVar17 + 0x38))(uVar13,1,1,uVar14);
    }
    uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
    uVar13 = uVar14;
    (*pcVar20)(uVar14,1,*(undefined8 *)(unaff_x22 + 0x168));
    if ((int)uVar13 != 1) {
      (**(code **)(*(long *)(unaff_x22 + 0x178) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0x170));
    }
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x198);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x168);
    (**(code **)(lVar17 + 0x20))(uVar14,*(undefined8 *)(unaff_x22 + 0x188),uVar13);
    (**(code **)(lVar17 + 0x38))(uVar14,0,1,uVar13);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  lVar15 = *(long *)(unaff_x22 + 0x178);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x160);
  lVar17 = *(long *)(unaff_x22 + 0x138);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x130);
  lVar19 = *(long *)(unaff_x22 + 0x118);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar21 = *(long *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x108);
  *(long *)(unaff_x22 + 0x58) = lVar21;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x110);
  FUN_10000cbb0(unaff_x22 + 0x40);
  (**(code **)(*(long *)(lVar21 + -8) + 0x10))();
  (**(code **)(lVar15 + 0x10))(uVar14,uVar3,uVar2);
  FUN_1006fd9c8(uVar12,unaff_x22 + 0x40,uVar14,uVar8,uVar16);
  (**(code **)(lVar17 + 0x38))(uVar12,0,1,uVar7);
  *(undefined8 *)(unaff_x22 + 200) = uVar11;
  *(undefined8 *)(unaff_x22 + 0xd0) = uVar1;
  _swift_beginAccess(lVar19 + 0x70,unaff_x22 + 0x88,0x21,0);
  DVar10 = Swift::Dictionary::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar1);
  Swift::Dictionary::_set_subscript
            ((Dictionary *)(lVar19 + 0x70),uVar12,(undefined8 *)(unaff_x22 + 200),DVar10.unknown);
  _swift_endAccess(unaff_x22 + 0x88);
  (**(code **)(lVar15 + 8))(uVar3,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001006fdf9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006fdfa0 | FUN_1006fdfa0 */

void FUN_1006fdfa0(undefined8 param_1,undefined8 *param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 in_x6;
  long extraout_x8;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(*param_3 + 0x50);
  uVar3 = *(undefined8 *)(*param_3 + 0x58);
  lVar5 = 0;
  local_78 = param_1;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar1,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *param_2;
  uVar4 = param_2[1];
  plVar6 = param_3;
  _swift_task_isCurrentExecutor(param_3,0);
  if (((ulong)plVar6 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Hummingbird/MemoryPersistDriver.swift",0x25,1,in_x6,param_3,0);
  }
  Swift::Clock::_get_now();
  local_70 = uVar2;
  uStack_68 = uVar4;
  _swift_getAssociatedConformanceWitness
            (uVar3,uVar1,lVar5,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,
             PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
            );
  Swift::InstantProtocol::_advanced();
  (**(code **)(lVar7 + 8))(auStack_80 + -extraout_x8,lVar5);
  return;
}



/* Address: 0x1006fe0e8 | FUN_1006fe0e8 */

void FUN_1006fe0e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined7 extraout_var_00;
  ulong uVar3;
  undefined7 extraout_var_01;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x80) = param_5;
  *(long **)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  lVar6 = *unaff_x20;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x90) = CONCAT71(extraout_var,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  lVar4 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0xa8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar5 = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar5;
  uVar7 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar7;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 200) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xd0) = CONCAT71(extraout_var_00,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  lVar4 = 0xff;
  FUN_1006ffbc4(0xff,uVar7,uVar5);
  *(long *)(unaff_x22 + 0x100) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x108) = CONCAT71(extraout_var_01,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_01,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x110) = lVar6;
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x120) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  _swift_task_switch(FUN_1006fe274);
  return;
}



/* Address: 0x1006fe274 | FUN_1006fe274 */

void FUN_1006fe274(void)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar8 = *(long *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  lVar9 = *(long *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_beginAccess(lVar9 + 0x70,unaff_x22 + 0x40,0,0);
  uVar12 = *(undefined8 *)(lVar9 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  _swift_bridgeObjectRetain(uVar14);
  _swift_bridgeObjectRetain(uVar12);
  Swift::Dictionary::_get_subscript
            (uVar7,(undefined8 *)(unaff_x22 + 0x58),uVar12,
             PTR___type_metadata_for_Swift_String_100eac208,uVar10,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar14);
  (**(code **)(lVar8 + 0x30))(uVar7,1,uVar10);
  if ((int)uVar7 == 1) {
    lVar8 = *(long *)(unaff_x22 + 0x110);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x108);
LAB_1006fe338:
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    (**(code **)(lVar8 + 8))(uVar7,uVar6);
    pcVar17 = *(code **)(lVar9 + 0x38);
    uVar7 = 1;
  }
  else {
    lVar8 = *(long *)(unaff_x22 + 0x128);
    lVar11 = *(long *)(unaff_x22 + 0x100);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xe0);
    lVar9 = *(long *)(unaff_x22 + 0xe8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
    lVar1 = *(long *)(unaff_x22 + 0xd8);
    uVar14 = *(undefined8 *)(unaff_x22 + 200);
    (**(code **)(*(long *)(unaff_x22 + 0x120) + 0x20))
              (lVar8,*(undefined8 *)(unaff_x22 + 0x118),lVar11);
    (**(code **)(lVar1 + 0x10))(uVar7,lVar8 + *(int *)(lVar11 + 0x24),uVar6);
    (**(code **)(lVar9 + 0x30))(uVar7,1,uVar14);
    if ((int)uVar7 == 1) {
      (**(code **)(*(long *)(unaff_x22 + 0xd8) + 8))
                (*(undefined8 *)(unaff_x22 + 0xe0),*(undefined8 *)(unaff_x22 + 0xd0));
    }
    else {
      uVar7 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
      lVar8 = *(long *)(unaff_x22 + 0xe8);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar10 = *(undefined8 *)(unaff_x22 + 200);
      lVar9 = *(long *)(unaff_x22 + 0xb8);
      (**(code **)(lVar8 + 0x20))(uVar14,*(undefined8 *)(unaff_x22 + 0xe0),uVar10);
      Swift::Clock::_get_now();
      _swift_getAssociatedConformanceWitness
                (lVar9,uVar6,uVar10,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar3 = Swift::Comparable::<__infix(uVar7,uVar14,uVar10,*(undefined8 *)(lVar9 + 8));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar10);
      (*UNRECOVERED_JUMPTABLE)(uVar14,uVar10);
      if (!bVar3) {
        lVar8 = *(long *)(unaff_x22 + 0x120);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
        goto LAB_1006fe338;
      }
    }
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    FUN_100018280(*(undefined8 *)(unaff_x22 + 0x128),unaff_x22 + 0x10);
    puVar4 = &DAT_100fde9d0;
    FUN_1000f7830(&DAT_100fde9d0,&DAT_100c737c0);
    _swift_dynamicCast(uVar6,unaff_x22 + 0x10,puVar4,uVar7,6);
    lVar8 = *(long *)(unaff_x22 + 0x120);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x128);
    if ((int)uVar6 == 0) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar6 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar15 = *(undefined8 *)(unaff_x22 + 0xf0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      lVar9 = *(long *)(unaff_x22 + 0x98);
      puVar2 = *(undefined1 **)(unaff_x22 + 0xa0);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
      (**(code **)(*(long *)(unaff_x22 + 0xa8) + 0x38))
                (puVar2,1,1,*(undefined8 *)(unaff_x22 + 0x80));
      puVar5 = puVar2;
      (**(code **)(lVar9 + 8))(puVar2,uVar13);
      FUN_1006ffbf4();
      _swift_allocError(&DAT_100efb418,puVar5,0,0);
      *puVar5 = 1;
      _swift_willThrow();
      (**(code **)(lVar8 + 8))(uVar7,uVar14);
      _swift_task_dealloc(uVar7);
      _swift_task_dealloc(uVar16);
      _swift_task_dealloc(uVar6);
      _swift_task_dealloc(uVar15);
      _swift_task_dealloc(uVar12);
      _swift_task_dealloc(uVar10);
      _swift_task_dealloc(puVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1006fe570;
    }
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    (**(code **)(lVar8 + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x100));
    pcVar17 = *(code **)(lVar9 + 0x38);
    (*pcVar17)(uVar14,0,1,uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 0x20);
    (*UNRECOVERED_JUMPTABLE)(uVar6,uVar14,uVar10);
    (*UNRECOVERED_JUMPTABLE)(uVar12,uVar6,uVar10);
    uVar7 = 0;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  (*pcVar17)(*(undefined8 *)(unaff_x22 + 0x68),uVar7,1,*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1006fe570:
                    /* WARNING: Could not recover jumptable at 0x0001006fe58c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006fe664 | FUN_1006fe664 */

void FUN_1006fe664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  ulong uVar3;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0xc0) = param_5;
  *(long **)(unaff_x22 + 200) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_1;
  lVar6 = *unaff_x20;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0xd0) = CONCAT71(extraout_var,OVar1.value);
  lVar4 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe8) = uVar3;
  lVar4 = *(long *)(param_5 + -8);
  *(long *)(unaff_x22 + 0xf0) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  uVar5 = *(undefined8 *)(lVar6 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x108) = uVar5;
  uVar7 = *(undefined8 *)(lVar6 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x110) = uVar7;
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x120) = CONCAT71(extraout_var_00,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x128) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar3;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x138) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar3;
  lVar4 = 0xff;
  FUN_1006ffbc4(0xff,uVar7,uVar5);
  *(long *)(unaff_x22 + 0x150) = lVar4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x158) = CONCAT71(extraout_var_01,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_01,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x160) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar3;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x170) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar3;
  _swift_task_switch(FUN_1006fe808);
  return;
}



/* Address: 0x1006fe808 | FUN_1006fe808 */

void FUN_1006fe808(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  undefined *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  code *pcVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0x168);
  lVar9 = *(long *)(unaff_x22 + 0x170);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
  lVar8 = *(long *)(unaff_x22 + 200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_beginAccess(lVar8 + 0x70,unaff_x22 + 0x70,0,0);
  uVar17 = *(undefined8 *)(lVar8 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x88) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar17);
  Swift::Dictionary::_get_subscript
            (uVar11,(undefined8 *)(unaff_x22 + 0x88),uVar17,
             PTR___type_metadata_for_Swift_String_100eac208,uVar14,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(uVar18);
  (**(code **)(lVar9 + 0x30))(uVar11,1,uVar14);
  if ((int)uVar11 == 1) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
    lVar9 = *(long *)(unaff_x22 + 0xa8);
    (**(code **)(*(long *)(unaff_x22 + 0x160) + 8))
              (*(undefined8 *)(unaff_x22 + 0x168),*(undefined8 *)(unaff_x22 + 0x158));
    puVar6 = &DAT_100fde9c0;
    FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,uVar11,puVar6,"object ttl ",0);
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
LAB_1006fe91c:
    uVar11 = 1;
  }
  else {
    lVar9 = *(long *)(unaff_x22 + 0x178);
    lVar15 = *(long *)(unaff_x22 + 0x150);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x130);
    lVar8 = *(long *)(unaff_x22 + 0x138);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar5 = *(long *)(unaff_x22 + 0x128);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x118);
    (**(code **)(*(long *)(unaff_x22 + 0x170) + 0x20))
              (lVar9,*(undefined8 *)(unaff_x22 + 0x168),lVar15);
    (**(code **)(lVar5 + 0x10))(uVar11,lVar9 + *(int *)(lVar15 + 0x24),uVar10);
    (**(code **)(lVar8 + 0x30))(uVar11,1,uVar18);
    if ((int)uVar11 == 1) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
      (**(code **)(*(long *)(unaff_x22 + 0x128) + 8))
                (*(undefined8 *)(unaff_x22 + 0x130),*(undefined8 *)(unaff_x22 + 0x120));
      FUN_100018280(uVar10,unaff_x22 + 0x10);
      puVar6 = &DAT_100fde9d0;
      FUN_1000f7830(&DAT_100fde9d0,&DAT_100c737c0);
      _swift_dynamicCast(uVar11,unaff_x22 + 0x10,puVar6,uVar18,6);
      if ((int)uVar11 == 0) {
        lVar9 = *(long *)(unaff_x22 + 0xd8);
        puVar13 = *(undefined1 **)(unaff_x22 + 0xe0);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
        (**(code **)(*(long *)(unaff_x22 + 0xf0) + 0x38))
                  (puVar13,1,1,*(undefined8 *)(unaff_x22 + 0xc0));
        (**(code **)(lVar9 + 8))(puVar13,uVar11);
        FUN_1006ffbf4();
        _swift_allocError(&DAT_100efb418,puVar13,0,0);
        *puVar13 = 1;
        _swift_willThrow();
LAB_1006fee9c:
        uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
        uVar11 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x140);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x130);
        uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
        uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
        (**(code **)(*(long *)(unaff_x22 + 0x170) + 8))(uVar14,*(undefined8 *)(unaff_x22 + 0x150));
        _swift_task_dealloc(uVar14);
        _swift_task_dealloc(uVar12);
        _swift_task_dealloc(uVar11);
        _swift_task_dealloc(uVar16);
        _swift_task_dealloc(uVar19);
        _swift_task_dealloc(uVar17);
        _swift_task_dealloc(uVar10);
        _swift_task_dealloc(uVar2);
        _swift_task_dealloc(uVar18);
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_1006fe98c;
      }
      lVar8 = *(long *)(unaff_x22 + 0xf0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar9 = *(long *)(unaff_x22 + 0xa8);
      (**(code **)(*(long *)(unaff_x22 + 0x170) + 8))
                (*(undefined8 *)(unaff_x22 + 0x178),*(undefined8 *)(unaff_x22 + 0x150));
      (**(code **)(lVar8 + 0x38))(uVar10,0,1,uVar18);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x20);
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar10,uVar18);
      puVar6 = &DAT_100fde9c0;
      FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,uVar18,puVar6,"object ttl ",0);
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x30));
      (*UNRECOVERED_JUMPTABLE)(lVar9,uVar11,uVar18);
      *puVar1 = 0;
      puVar1[1] = 0;
      *(undefined1 *)(puVar1 + 2) = 1;
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar9 = *(long *)(unaff_x22 + 0x138);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x110);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x118);
      lVar8 = *(long *)(unaff_x22 + 0x108);
      (**(code **)(lVar9 + 0x20))(uVar18,*(undefined8 *)(unaff_x22 + 0x130),uVar14);
      Swift::Clock::_get_now();
      _swift_getAssociatedConformanceWitness
                (lVar8,uVar10,uVar14,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar4 = Swift::Comparable::<__infix(uVar11,uVar18,uVar14,*(undefined8 *)(lVar8 + 8));
      UNRECOVERED_JUMPTABLE = *(code **)(lVar9 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar14);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
      if (!bVar4) {
        lVar8 = *(long *)(unaff_x22 + 0x170);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x150);
        lVar9 = *(long *)(unaff_x22 + 0xa8);
        (*UNRECOVERED_JUMPTABLE)
                  (*(undefined8 *)(unaff_x22 + 0x148),*(undefined8 *)(unaff_x22 + 0x118));
        (**(code **)(lVar8 + 8))(uVar10,uVar18);
        puVar6 = &DAT_100fde9c0;
        FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
        lVar5 = 0;
        _swift_getTupleTypeMetadata2(0,uVar11,puVar6,"object ttl ",0);
        UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        goto LAB_1006fe91c;
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar9 = *(long *)(unaff_x22 + 0xf0);
      FUN_100018280(uVar10,unaff_x22 + 0x40);
      puVar6 = &DAT_100fde9d0;
      FUN_1000f7830(&DAT_100fde9d0,&DAT_100c737c0);
      _swift_dynamicCast(uVar18,unaff_x22 + 0x40,puVar6,uVar11,6);
      pcVar7 = *(code **)(lVar9 + 0x38);
      if ((int)uVar18 == 0) {
        uVar10 = *(undefined8 *)(unaff_x22 + 0x148);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x118);
        puVar13 = *(undefined1 **)(unaff_x22 + 0xe8);
        uVar11 = *(undefined8 *)(unaff_x22 + 0xd0);
        lVar9 = *(long *)(unaff_x22 + 0xd8);
        (*pcVar7)(puVar13,1,1,*(undefined8 *)(unaff_x22 + 0xc0));
        (**(code **)(lVar9 + 8))(puVar13,uVar11);
        FUN_1006ffbf4();
        _swift_allocError(&DAT_100efb418,puVar13,0,0);
        *puVar13 = 1;
        _swift_willThrow();
        (*UNRECOVERED_JUMPTABLE)(uVar10,uVar18);
        goto LAB_1006fee9c;
      }
      lVar15 = *(long *)(unaff_x22 + 0x170);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x178);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x150);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xe8);
      lVar3 = *(long *)(unaff_x22 + 0xf0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar9 = *(long *)(unaff_x22 + 0xa8);
      (*pcVar7)(uVar18,0,1,uVar16);
      (**(code **)(lVar3 + 0x20))(uVar10,uVar18,uVar16);
      puVar6 = &DAT_100fde9c0;
      FUN_1000f8b08(&DAT_100fde9c0,&DAT_100c737a8);
      lVar5 = 0;
      _swift_getTupleTypeMetadata2(0,uVar16,puVar6,"object ttl ",0);
      puVar1 = (undefined8 *)(lVar9 + *(int *)(lVar5 + 0x30));
      (**(code **)(lVar3 + 0x10))(lVar9,uVar10,uVar16);
      Swift::Clock::_get_now();
      Swift::InstantProtocol::_duration(unaff_x22 + 0x98,uVar17,uVar2,lVar8);
      (*UNRECOVERED_JUMPTABLE)(uVar11,uVar2);
      (**(code **)(lVar3 + 8))(uVar10,uVar16);
      (*UNRECOVERED_JUMPTABLE)(uVar17,uVar2);
      (**(code **)(lVar15 + 8))(uVar14,uVar12);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x98);
      puVar1[1] = *(undefined8 *)(unaff_x22 + 0xa0);
      *puVar1 = uVar11;
      *(undefined1 *)(puVar1 + 2) = 0;
      UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar11 = 0;
    }
  }
  (*UNRECOVERED_JUMPTABLE)(lVar9,uVar11,1,lVar5);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xe8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x178));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar18);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1006fe98c:
                    /* WARNING: Could not recover jumptable at 0x0001006fe9a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006fef18 | FUN_1006fef18 */

void FUN_1006fef18(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(long **)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar2 = 0xff;
  FUN_1006ffbc4(0xff,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  uVar3 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  _swift_task_switch(FUN_1006fef94);
  return;
}



/* Address: 0x1006fef94 | FUN_1006fef94 */

void FUN_1006fef94(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  Dictionary DVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x50) + -8) + 0x38))
            (uVar2,1,1,*(long *)(unaff_x22 + 0x50));
  *(undefined8 *)(unaff_x22 + 0x28) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar1;
  _swift_beginAccess(lVar3 + 0x70,unaff_x22 + 0x10,0x21,0);
  DVar4 = Swift::Dictionary::typeMetadataAccessor();
  _swift_bridgeObjectRetain(uVar1);
  Swift::Dictionary::_set_subscript
            ((Dictionary *)(lVar3 + 0x70),uVar2,(undefined8 *)(unaff_x22 + 0x28),DVar4.unknown);
  _swift_endAccess(unaff_x22 + 0x10);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001006ff068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006ff06c | FUN_1006ff06c */

void FUN_1006ff06c(void)

{
  Dictionary<undefined,undefined> DVar1;
  long extraout_x8;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  undefined1 auStack_68 [24];
  
  lVar2 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar2 + 0x58);
  uStack_a8 = *(undefined8 *)(lVar2 + 0x58);
  uVar6 = *(undefined8 *)(lVar2 + 0x50);
  lVar2 = 0;
  local_b0 = uVar6;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar6,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Swift::Clock::_get_now();
  _swift_beginAccess(unaff_x20 + 0xe,auStack_68,1,0);
  lVar3 = unaff_x20[0xe];
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  local_70 = (long)&local_b0 - extraout_x8;
  FUN_1006ffbc4(0,uVar6,uVar4);
  _swift_bridgeObjectRetain(lVar3);
  DVar1 = Swift::Dictionary::_compactMapValues((Dictionary)0x1007007c8);
  _swift_bridgeObjectRelease(lVar3);
  lVar3 = unaff_x20[0xe];
  unaff_x20[0xe] = (long)DVar1.unknown;
  _swift_bridgeObjectRelease(lVar3);
  (**(code **)(lVar5 + 8))((long)&local_b0 - extraout_x8,lVar2);
  return;
}



/* Address: 0x1006ff1b8 | FUN_1006ff1b8 */

void FUN_1006ff1b8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  bool bVar2;
  long lVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  long lVar4;
  
  lVar3 = 0xff;
  local_78 = param_3;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,OVar1.value);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_80 - extraout_x8;
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = lVar8 - extraout_x8_00;
  lVar5 = 0;
  local_80 = param_4;
  FUN_1006ffbc4(0,param_4,param_5);
  local_70 = param_2;
  (**(code **)(lVar11 + 0x10))(lVar8,param_2 + *(int *)(lVar5 + 0x24),lVar4);
  lVar7 = lVar8;
  (**(code **)(lVar10 + 0x30))(lVar8,1,lVar3);
  if ((int)lVar7 == 1) {
    (**(code **)(lVar11 + 8))(lVar8,lVar4);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar12,lVar8,lVar3);
    _swift_getAssociatedConformanceWitness
              (param_5,local_80,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
               PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
              );
    bVar2 = Swift::Comparable::<_infix(lVar12,local_78,lVar3,*(undefined8 *)(param_5 + 8));
    (**(code **)(lVar10 + 8))(lVar12,lVar3);
    if (bVar2) {
      lVar7 = *(long *)(lVar5 + -8);
      uVar6 = 1;
      uVar9 = local_68;
      goto LAB_1006ff364;
    }
  }
  uVar9 = local_68;
  lVar7 = *(long *)(lVar5 + -8);
  (**(code **)(lVar7 + 0x10))(local_68,local_70,lVar5);
  uVar6 = 0;
LAB_1006ff364:
  (**(code **)(lVar7 + 0x38))(uVar9,uVar6,1,lVar5);
  return;
}



/* Address: 0x1006ff39c | FUN_1006ff39c */

void FUN_1006ff39c(void)

{
  Optional OVar1;
  undefined8 uVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x22;
  
  *(long **)(unaff_x22 + 0x48) = unaff_x20;
  lVar5 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar5 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar4;
  lVar6 = *(long *)(lVar5 + 0x50);
  *(long *)(unaff_x22 + 0x58) = lVar6;
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar4,lVar6,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x68) = CONCAT71(extraout_var,OVar1.value);
  lVar5 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x70) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar3;
  lVar5 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  _swift_task_switch(FUN_1006ff458);
  return;
}


