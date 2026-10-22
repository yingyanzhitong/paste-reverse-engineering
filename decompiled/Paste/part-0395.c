/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004dd788 | FUN_1004dd788 */

undefined8 * FUN_1004dd788(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  uVar1 = param_2[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1004dd7f0 | FUN_1004dd7f0 */

undefined8 * FUN_1004dd7f0(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1004dd87c | FUN_1004dd87c */

undefined8 * FUN_1004dd87c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1004dd8d8 | FUN_1004dd8d8 */

int FUN_1004dd8d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1004dd920 | FUN_1004dd920 */

void FUN_1004dd920(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004dd96c | FUN_1004dd96c */

undefined1  [16] FUN_1004dd96c(void)

{
  return ZEXT816(0x100edae10);
}



/* Address: 0x1004dd97c | FUN_1004dd97c */

undefined1  [16] FUN_1004dd97c(void)

{
  return ZEXT816(0x100edaeb0);
}



/* Address: 0x1004dd98c | FUN_1004dd98c */

undefined1  [16] FUN_1004dd98c(void)

{
  return ZEXT816(0x100edaf40);
}



/* Address: 0x1004dd99c | thunk_FUN_1004dd9a0 */

void thunk_FUN_1004dd9a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52348,&DAT_100edaf40);
  DAT_100fcc530 = pTVar1;
  return;
}



/* Address: 0x1004dd9a0 | FUN_1004dd9a0 */

void FUN_1004dd9a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52348;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52348,&DAT_100edaf40);
  DAT_100fcc530 = pTVar1;
  return;
}



/* Address: 0x1004dd9e0 | thunk_FUN_1004dd9e4 */

void thunk_FUN_1004dd9e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c522e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c522e0,&DAT_100edaf40);
  DAT_100fcc538 = pTVar1;
  return;
}



/* Address: 0x1004dd9e4 | FUN_1004dd9e4 */

void FUN_1004dd9e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c522e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c522e0,&DAT_100edaf40);
  DAT_100fcc538 = pTVar1;
  return;
}



/* Address: 0x1004dda24 | thunk_FUN_1004dda28 */

void thunk_FUN_1004dda28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c522b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c522b8,&DAT_100edaf40);
  DAT_100fcc540 = pTVar1;
  return;
}



/* Address: 0x1004dda28 | FUN_1004dda28 */

void FUN_1004dda28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c522b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c522b8,&DAT_100edaf40);
  DAT_100fcc540 = pTVar1;
  return;
}



/* Address: 0x1004dda68 | FUN_1004dda68 */

void FUN_1004dda68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52118,&DAT_100edaeb0);
  DAT_100fcc548 = pTVar1;
  return;
}



/* Address: 0x1004ddaa8 | FUN_1004ddaa8 */

void FUN_1004ddaa8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcc558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c52190;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c52190,&DAT_100edaeb0);
  DAT_100fcc558 = pTVar1;
  return;
}



/* Address: 0x1004ddae8 | FUN_1004ddae8 */

char * FUN_1004ddae8(void)

{
  return "initialize";
}



/* Address: 0x1004ddaf4 | FUN_1004ddaf4 */

undefined1  [16] FUN_1004ddaf4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea0000000000657a;
  auVar1._0_8_ = 0x696c616974696e69;
  return auVar1;
}



/* Address: 0x1004ddb10 | FUN_1004ddb10 */

ulong FUN_1004ddb10(void)

{
  uint6 uVar1;
  long unaff_x20;
  
  uVar1 = *(uint6 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return (ulong)uVar1;
}



/* Address: 0x1004ddb68 | FUN_1004ddb68 */

void FUN_1004ddb68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004ddb74(unaff_x20 + 0x28,param_1);
  return;
}



/* Address: 0x1004ddb74 | FUN_1004ddb74 */

undefined8 FUN_1004ddb74(undefined8 param_1,undefined8 param_2)

{
  FUN_100549a7c(param_2,param_1);
  return param_2;
}



/* Address: 0x1004ddbb0 | FUN_1004ddbb0 */

void FUN_1004ddbb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined7 uStack_60;
  undefined1 local_59;
  undefined7 uStack_58;
  undefined1 uStack_51;
  undefined7 uStack_50;
  undefined1 local_49;
  undefined7 uStack_48;
  undefined1 uStack_41;
  undefined7 uStack_40;
  undefined1 local_39;
  undefined7 uStack_38;
  undefined1 uStack_31;
  undefined7 uStack_30;
  undefined1 local_29;
  undefined7 uStack_28;
  undefined1 uStack_21;
  undefined7 uStack_20;
  undefined1 local_19;
  undefined7 uStack_18;
  undefined1 uStack_11;
  
  uStack_21 = (undefined1)param_7[7];
  uStack_20 = (undefined7)((ulong)param_7[7] >> 8);
  local_29 = (undefined1)param_7[6];
  uStack_28 = (undefined7)((ulong)param_7[6] >> 8);
  uStack_31 = (undefined1)param_7[5];
  uStack_30 = (undefined7)((ulong)param_7[5] >> 8);
  local_39 = (undefined1)param_7[4];
  uStack_38 = (undefined7)((ulong)param_7[4] >> 8);
  uVar2 = param_7[9];
  uStack_11 = (undefined1)uVar2;
  local_19 = (undefined1)param_7[8];
  uStack_18 = (undefined7)((ulong)param_7[8] >> 8);
  uVar1 = param_7[10];
  uStack_51 = (undefined1)param_7[1];
  uStack_50 = (undefined7)((ulong)param_7[1] >> 8);
  local_59 = (undefined1)*param_7;
  uStack_58 = (undefined7)((ulong)*param_7 >> 8);
  uStack_41 = (undefined1)param_7[3];
  uStack_40 = (undefined7)((ulong)param_7[3] >> 8);
  local_49 = (undefined1)param_7[2];
  uStack_48 = (undefined7)((ulong)param_7[2] >> 8);
  *param_1 = param_2;
  param_1[1] = param_3;
  *(short *)(param_1 + 2) = (short)param_4;
  *(char *)((long)param_1 + 0x12) = (char)((ulong)param_4 >> 0x10);
  *(short *)((long)param_1 + 0x13) = (short)((ulong)param_4 >> 0x18);
  *(char *)((long)param_1 + 0x15) = (char)((ulong)param_4 >> 0x28);
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_41,uStack_48);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(local_49,uStack_50);
  *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_51,uStack_58);
  *(ulong *)((long)param_1 + 0x21) = CONCAT17(local_59,uStack_60);
  param_1[0xf] = uVar1;
  param_1[0xe] = uVar2;
  *(ulong *)((long)param_1 + 0x69) = CONCAT17(uStack_11,uStack_18);
  *(ulong *)((long)param_1 + 0x61) = CONCAT17(local_19,uStack_20);
  *(ulong *)((long)param_1 + 0x59) = CONCAT17(uStack_21,uStack_28);
  *(ulong *)((long)param_1 + 0x51) = CONCAT17(local_29,uStack_30);
  *(ulong *)((long)param_1 + 0x49) = CONCAT17(uStack_31,uStack_38);
  *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_39,uStack_40);
  return;
}



/* Address: 0x1004ddc34 | FUN_1004ddc34 */

void FUN_1004ddc34(void)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar5 = (undefined *)0xec00000073656974;
  pcVar2 = (char *)0x696c696261706163;
  if (cVar1 != '\x01') {
    puVar5 = (undefined *)0xea00000000006f66;
    pcVar2 = (char *)0x6e49746e65696c63;
  }
  HVar4.unknown = (undefined *)0xef6e6f6973726556;
  pcVar3 = (char *)0x6c6f636f746f7270;
  if (cVar1 != '\0') {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004ddcec | FUN_1004ddcec */

void FUN_1004ddcec(Hasher param_1)

{
  void *pvVar1;
  char *pcVar2;
  char *pcVar3;
  void *pvVar4;
  char *unaff_x20;
  String SVar5;
  
  pvVar4 = (void *)0xec00000073656974;
  pcVar2 = (char *)0x696c696261706163;
  if (*unaff_x20 != '\x01') {
    pvVar4 = (void *)0xea00000000006f66;
    pcVar2 = (char *)0x6e49746e65696c63;
  }
  pvVar1 = (void *)0xef6e6f6973726556;
  pcVar3 = (char *)0x6c6f636f746f7270;
  if (*unaff_x20 != '\0') {
    pvVar1 = pvVar4;
    pcVar3 = pcVar2;
  }
  SVar5.bridgeObject = pvVar1;
  SVar5.str = pcVar3;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(pvVar1);
  return;
}



/* Address: 0x1004ddd80 | FUN_1004ddd80 */

void FUN_1004ddd80(__int64 param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined *puVar5;
  char *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar5 = (undefined *)0xec00000073656974;
  pcVar2 = (char *)0x696c696261706163;
  if (cVar1 != '\x01') {
    puVar5 = (undefined *)0xea00000000006f66;
    pcVar2 = (char *)0x6e49746e65696c63;
  }
  HVar4.unknown = (undefined *)0xef6e6f6973726556;
  pcVar3 = (char *)0x6c6f636f746f7270;
  if (cVar1 != '\0') {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004dde34 | FUN_1004dde34 */

void FUN_1004dde34(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004dfbdc(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004dde60 | FUN_1004dde60 */

void FUN_1004dde60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0xec00000073656974;
  uVar2 = 0x696c696261706163;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xea00000000006f66;
    uVar2 = 0x6e49746e65696c63;
  }
  uVar1 = 0xef6e6f6973726556;
  uVar3 = 0x6c6f636f746f7270;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x1004dded8 | FUN_1004dded8 */

undefined1  [16] FUN_1004dded8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = 0xec00000073656974;
  uVar2 = 0x696c696261706163;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xea00000000006f66;
    uVar2 = 0x6e49746e65696c63;
  }
  uVar1 = 0xef6e6f6973726556;
  uVar3 = 0x6c6f636f746f7270;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x1004ddf4c | FUN_1004ddf4c */

void FUN_1004ddf4c(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004dfbdc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004ddf70 | FUN_1004ddf70 */

String FUN_1004ddf70(void)

{
  String SVar1;
  
  FUN_1004e0028();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004ddf98 | FUN_1004ddf98 */

String FUN_1004ddf98(void)

{
  String SVar1;
  
  FUN_1004e0028();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004ddfc0 | FUN_1004ddfc0 */

void FUN_1004ddfc0(undefined8 *param_1)

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
  
  FUN_1004dfc40(&local_a0);
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



/* Address: 0x1004de010 | FUN_1004de010 */

uint FUN_1004de010(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong uVar3;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long local_90;
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
  undefined8 *puVar4;
  
  if (((undefined *)*param_1 == (undefined *)*param_2 &&
       (undefined *)param_1[1] == (undefined *)param_2[1]) ||
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), bVar1)) {
    uVar3 = (ulong)*(uint6 *)(param_1 + 2);
    FUN_100544280(uVar3,param_1[3],*(undefined1 *)(param_1 + 4),(ulong)*(uint6 *)(param_2 + 2),
                  param_2[3],(char)param_2[4]);
    if ((uVar3 & 1) != 0) {
      uStack_58 = param_1[10];
      local_60 = param_1[9];
      uStack_48 = param_1[0xc];
      uStack_50 = param_1[0xb];
      uStack_38 = param_1[0xe];
      local_40 = param_1[0xd];
      local_30 = param_1[0xf];
      uStack_78 = param_1[6];
      local_80 = param_1[5];
      uStack_68 = param_1[8];
      uStack_70 = param_1[7];
      lStack_b8 = param_2[10];
      local_c0 = param_2[9];
      lStack_a8 = param_2[0xc];
      lStack_b0 = param_2[0xb];
      lStack_98 = param_2[0xe];
      local_a0 = param_2[0xd];
      local_90 = param_2[0xf];
      lStack_d8 = param_2[6];
      local_e0 = param_2[5];
      lStack_c8 = param_2[8];
      lStack_d0 = param_2[7];
      puVar4 = &local_80;
      FUN_100544444(puVar4,&local_e0);
      uVar2 = (uint)puVar4;
      goto LAB_1004de100;
    }
  }
  uVar2 = 0;
LAB_1004de100:
  return uVar2 & 1;
}



/* Address: 0x1004de114 | FUN_1004de114 */

void FUN_1004de114(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_180 [8];
  undefined1 local_178 [88];
  ulong local_120;
  undefined8 uStack_118;
  undefined8 local_110;
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
  
  puVar1 = &DAT_100fcc560;
  FUN_1000f7830(&DAT_100fcc560,&DAT_100c523e0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004e0028();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_120 = local_120 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_120,puVar1);
  if (unaff_x21 == 0) {
    uStack_118 = unaff_x20[3];
    local_120 = unaff_x20[2];
    local_110 = CONCAT71(local_110._1_7_,*(undefined1 *)(unaff_x20 + 4));
    local_178[0] = 1;
    FUN_1004e0068();
    Swift::KeyedEncodingContainer::_encode(&local_120,local_178,puVar1,&DAT_100edd5b0,uVar2);
    uStack_98 = unaff_x20[10];
    local_a0 = unaff_x20[9];
    uStack_88 = unaff_x20[0xc];
    uStack_90 = unaff_x20[0xb];
    uStack_78 = unaff_x20[0xe];
    local_80 = unaff_x20[0xd];
    local_70 = unaff_x20[0xf];
    uStack_b8 = unaff_x20[6];
    local_c0 = unaff_x20[5];
    uStack_a8 = unaff_x20[8];
    uStack_b0 = unaff_x20[7];
    uStack_f8 = unaff_x20[10];
    local_100 = unaff_x20[9];
    uStack_e8 = unaff_x20[0xc];
    uStack_f0 = unaff_x20[0xb];
    uStack_d8 = unaff_x20[0xe];
    local_e0 = unaff_x20[0xd];
    local_d0 = unaff_x20[0xf];
    uStack_118 = unaff_x20[6];
    local_120 = unaff_x20[5];
    uStack_108 = unaff_x20[8];
    local_110 = unaff_x20[7];
    local_51 = 2;
    puVar3 = &local_c0;
    FUN_1004ddb74(puVar3,local_178);
    FUN_1004e00a8();
    Swift::KeyedEncodingContainer::_encode(&local_120,&local_51,puVar1,&DAT_100edd520,puVar3);
    FUN_1004e00e8(&local_120);
  }
  (**(code **)(lVar4 + 8))(auStack_180 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1004de2f4 | FUN_1004de2f4 */

void FUN_1004de2f4(Hasher param_1)

{
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  FUN_10052a764(param_1.unknown,(ulong)*(uint6 *)&unaff_x20[1].str,unaff_x20[1].bridgeObject,
                *(undefined1 *)&unaff_x20[2].str);
  FUN_10052946c(param_1.unknown);
  return;
}



/* Address: 0x1004de380 | FUN_1004de380 */

void FUN_1004de380(void)

{
  Hasher HVar1;
  String *unaff_x20;
  undefined1 auStack_c8 [72];
  void *local_80;
  char *pcStack_78;
  void *pvStack_70;
  char *pcStack_68;
  void *local_60;
  char *pcStack_58;
  void *pvStack_50;
  char *pcStack_48;
  void *local_40;
  char *pcStack_38;
  void *local_30;
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_c8,*unaff_x20);
  FUN_10052a764(auStack_c8,(ulong)*(uint6 *)&unaff_x20[1].str,unaff_x20[1].bridgeObject,
                *(undefined1 *)&unaff_x20[2].str);
  pcStack_58 = unaff_x20[5].str;
  local_60 = unaff_x20[4].bridgeObject;
  pcStack_48 = unaff_x20[6].str;
  pvStack_50 = unaff_x20[5].bridgeObject;
  pcStack_38 = unaff_x20[7].str;
  local_40 = unaff_x20[6].bridgeObject;
  local_30 = unaff_x20[7].bridgeObject;
  pcStack_78 = unaff_x20[3].str;
  local_80 = unaff_x20[2].bridgeObject;
  pcStack_68 = unaff_x20[4].str;
  pvStack_70 = unaff_x20[3].bridgeObject;
  HVar1.unknown = auStack_c8;
  FUN_10052946c();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004de420 | FUN_1004de420 */

void FUN_1004de420(void)

{
  undefined1 uVar1;
  uint6 uVar2;
  String SVar3;
  Hasher HVar4;
  String *unaff_x20;
  void *pvVar5;
  undefined1 auStack_108 [72];
  void *local_c0;
  char *pcStack_b8;
  void *pvStack_b0;
  char *pcStack_a8;
  void *local_a0;
  char *pcStack_98;
  void *pvStack_90;
  char *pcStack_88;
  void *local_80;
  char *pcStack_78;
  void *local_70;
  
  SVar3 = *unaff_x20;
  uVar2 = *(uint6 *)&unaff_x20[1].str;
  pvVar5 = unaff_x20[1].bridgeObject;
  pcStack_98 = unaff_x20[5].str;
  local_a0 = unaff_x20[4].bridgeObject;
  pcStack_88 = unaff_x20[6].str;
  pvStack_90 = unaff_x20[5].bridgeObject;
  pcStack_78 = unaff_x20[7].str;
  local_80 = unaff_x20[6].bridgeObject;
  local_70 = unaff_x20[7].bridgeObject;
  pcStack_b8 = unaff_x20[3].str;
  local_c0 = unaff_x20[2].bridgeObject;
  pcStack_a8 = unaff_x20[4].str;
  pvStack_b0 = unaff_x20[3].bridgeObject;
  uVar1 = *(undefined1 *)&unaff_x20[2].str;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_108,SVar3);
  FUN_10052a764(auStack_108,(ulong)uVar2,pvVar5,uVar1);
  HVar4.unknown = auStack_108;
  FUN_10052946c();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004de4f0 | FUN_1004de4f0 */

void FUN_1004de4f0(Hasher param_1)

{
  undefined1 uVar1;
  uint6 uVar2;
  String *unaff_x20;
  void *pvVar3;
  
  uVar2 = *(uint6 *)&unaff_x20[1].str;
  pvVar3 = unaff_x20[1].bridgeObject;
  uVar1 = *(undefined1 *)&unaff_x20[2].str;
  Swift::String::hash(param_1,*unaff_x20);
  FUN_10052a764(param_1.unknown,(ulong)uVar2,pvVar3,uVar1);
  FUN_10052946c(param_1.unknown);
  return;
}



/* Address: 0x1004de59c | FUN_1004de59c */

void FUN_1004de59c(__int64 param_1)

{
  undefined1 uVar1;
  uint6 uVar2;
  String SVar3;
  Hasher HVar4;
  String *unaff_x20;
  void *pvVar5;
  undefined1 auStack_108 [72];
  void *local_c0;
  char *pcStack_b8;
  void *pvStack_b0;
  char *pcStack_a8;
  void *local_a0;
  char *pcStack_98;
  void *pvStack_90;
  char *pcStack_88;
  void *local_80;
  char *pcStack_78;
  void *local_70;
  
  SVar3 = *unaff_x20;
  uVar2 = *(uint6 *)&unaff_x20[1].str;
  pvVar5 = unaff_x20[1].bridgeObject;
  pcStack_98 = unaff_x20[5].str;
  local_a0 = unaff_x20[4].bridgeObject;
  pcStack_88 = unaff_x20[6].str;
  pvStack_90 = unaff_x20[5].bridgeObject;
  pcStack_78 = unaff_x20[7].str;
  local_80 = unaff_x20[6].bridgeObject;
  local_70 = unaff_x20[7].bridgeObject;
  pcStack_b8 = unaff_x20[3].str;
  local_c0 = unaff_x20[2].bridgeObject;
  pcStack_a8 = unaff_x20[4].str;
  pvStack_b0 = unaff_x20[3].bridgeObject;
  uVar1 = *(undefined1 *)&unaff_x20[2].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_108,SVar3);
  FUN_10052a764(auStack_108,(ulong)uVar2,pvVar5,uVar1);
  HVar4.unknown = auStack_108;
  FUN_10052946c();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004de668 | FUN_1004de668 */

void FUN_1004de668(void)

{
  FUN_1004de114();
  return;
}



/* Address: 0x1004de67c | FUN_1004de67c */

uint FUN_1004de67c(undefined8 *param_1,long *param_2)

{
  undefined1 uVar1;
  uint6 uVar2;
  uint6 uVar3;
  long lVar4;
  bool bVar5;
  uint uVar6;
  ulong uVar7;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_120;
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
  long local_c0;
  long lStack_b8;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long local_70;
  undefined8 *puVar8;
  
  uVar2 = *(uint6 *)(param_1 + 2);
  uVar10 = param_1[3];
  uVar1 = *(undefined1 *)(param_1 + 4);
  uStack_f8 = param_1[10];
  local_100 = param_1[9];
  uStack_e8 = param_1[0xc];
  uStack_f0 = param_1[0xb];
  uStack_d8 = param_1[0xe];
  local_e0 = param_1[0xd];
  local_d0 = param_1[0xf];
  uStack_118 = param_1[6];
  local_120 = param_1[5];
  uStack_108 = param_1[8];
  uStack_110 = param_1[7];
  uVar3 = *(uint6 *)(param_2 + 2);
  lVar9 = param_2[3];
  lVar4 = param_2[4];
  local_70 = param_2[0xf];
  lStack_78 = param_2[0xe];
  lStack_80 = param_2[0xd];
  lStack_88 = param_2[0xc];
  local_90 = param_2[0xb];
  lStack_98 = param_2[10];
  lStack_a0 = param_2[9];
  lStack_a8 = param_2[8];
  local_b0 = param_2[7];
  lStack_b8 = param_2[6];
  local_c0 = param_2[5];
  if (((undefined *)*param_1 == (undefined *)*param_2) &&
     ((undefined *)param_1[1] == (undefined *)param_2[1])) {
LAB_1004de754:
    uVar7 = (ulong)uVar2;
    FUN_100544280(uVar7,uVar10,uVar1,(ulong)uVar3,lVar9,(char)lVar4);
    if ((uVar7 & 1) != 0) {
      puVar8 = &local_120;
      FUN_100544444(puVar8,&local_c0);
      uVar6 = (uint)puVar8;
      goto LAB_1004de794;
    }
  }
  else {
    bVar5 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    if (bVar5) goto LAB_1004de754;
  }
  uVar6 = 0;
LAB_1004de794:
  return uVar6 & 1;
}



/* Address: 0x1004de7b8 | FUN_1004de7b8 */

ulong FUN_1004de7b8(void)

{
  long unaff_x20;
  
  return (ulong)*(uint6 *)(unaff_x20 + 0x10);
}



/* Address: 0x1004de7c8 | FUN_1004de7c8 */

void FUN_1004de7c8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004e011c(unaff_x20 + 0x18,param_1);
  return;
}



/* Address: 0x1004de7d4 | FUN_1004de7d4 */

undefined1  [16] FUN_1004de7d4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Address: 0x1004de800 | FUN_1004de800 */

void FUN_1004de800(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x80));
  return;
}



/* Address: 0x1004de808 | FUN_1004de808 */

void FUN_1004de808(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  return;
}



/* Address: 0x1004de830 | FUN_1004de830 */

void FUN_1004de830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 auStack_228 [142];
  undefined2 uStack_19a;
  undefined6 local_198;
  undefined2 uStack_192;
  undefined6 uStack_190;
  undefined2 uStack_18a;
  undefined6 local_188;
  undefined2 uStack_182;
  undefined6 uStack_180;
  undefined2 uStack_17a;
  undefined6 local_178;
  undefined2 uStack_172;
  undefined6 uStack_170;
  undefined2 uStack_16a;
  undefined6 local_168;
  undefined2 uStack_162;
  undefined6 uStack_160;
  undefined2 uStack_15a;
  undefined6 local_158;
  undefined2 uStack_152;
  undefined6 uStack_150;
  undefined2 uStack_14a;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined1 local_130;
  undefined1 uStack_12f;
  undefined1 uStack_12e;
  undefined2 uStack_12d;
  undefined1 uStack_12b;
  undefined2 uStack_12a;
  undefined6 uStack_128;
  undefined2 uStack_122;
  undefined6 uStack_120;
  undefined2 uStack_11a;
  undefined6 uStack_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined2 local_10a;
  undefined6 uStack_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined2 uStack_fa;
  undefined6 uStack_f8;
  undefined2 uStack_f2;
  undefined6 uStack_f0;
  undefined2 local_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined6 uStack_e0;
  undefined2 uStack_da;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined2 local_a5;
  undefined1 local_a3;
  undefined8 local_a2;
  undefined8 uStack_9a;
  undefined8 local_92;
  undefined8 uStack_8a;
  undefined8 local_82;
  undefined8 uStack_7a;
  undefined8 local_72;
  undefined8 uStack_6a;
  undefined8 uStack_62;
  undefined2 uStack_5a;
  undefined6 local_58;
  undefined2 uStack_52;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uStack_160 = (undefined6)param_5[7];
  uStack_15a = (undefined2)((ulong)param_5[7] >> 0x30);
  local_168 = (undefined6)param_5[6];
  uStack_162 = (undefined2)((ulong)param_5[6] >> 0x30);
  uStack_170 = (undefined6)param_5[5];
  uStack_16a = (undefined2)((ulong)param_5[5] >> 0x30);
  local_178 = (undefined6)param_5[4];
  uStack_172 = (undefined2)((ulong)param_5[4] >> 0x30);
  uStack_150 = (undefined6)param_5[9];
  uStack_14a = (undefined2)((ulong)param_5[9] >> 0x30);
  local_158 = (undefined6)param_5[8];
  uStack_152 = (undefined2)((ulong)param_5[8] >> 0x30);
  local_148 = param_5[10];
  uStack_190 = (undefined6)param_5[1];
  uStack_18a = (undefined2)((ulong)param_5[1] >> 0x30);
  local_198 = (undefined6)*param_5;
  uStack_192 = (undefined2)((ulong)*param_5 >> 0x30);
  uStack_180 = (undefined6)param_5[3];
  uStack_17a = (undefined2)((ulong)param_5[3] >> 0x30);
  local_188 = (undefined6)param_5[2];
  uStack_182 = (undefined2)((ulong)param_5[2] >> 0x30);
  uStack_8a = CONCAT62(uStack_180,uStack_182);
  local_92 = CONCAT62(local_188,uStack_18a);
  uStack_7a = CONCAT62(uStack_170,uStack_172);
  local_82 = CONCAT62(local_178,uStack_17a);
  uStack_102 = uStack_172;
  uStack_100 = uStack_170;
  local_10a = uStack_17a;
  uStack_108 = local_178;
  uStack_f2 = uStack_162;
  uStack_f0 = uStack_160;
  uStack_fa = uStack_16a;
  uStack_f8 = local_168;
  uStack_6a = CONCAT62(uStack_160,uStack_162);
  local_72 = CONCAT62(local_168,uStack_16a);
  uStack_e2 = uStack_152;
  local_ea = uStack_15a;
  uStack_e8 = local_158;
  uStack_9a = CONCAT62(uStack_190,uStack_192);
  local_a2 = CONCAT62(local_198,uStack_19a);
  uStack_122 = uStack_192;
  uStack_120 = uStack_190;
  uStack_12a = uStack_19a;
  uStack_128 = local_198;
  uStack_112 = uStack_182;
  uStack_110 = uStack_180;
  uStack_11a = uStack_18a;
  uStack_118 = local_188;
  local_130 = (undefined1)param_4;
  uStack_12f = (undefined1)((ulong)param_4 >> 8);
  uStack_12e = (undefined1)((ulong)param_4 >> 0x10);
  uStack_12d = (undefined2)((ulong)param_4 >> 0x18);
  uStack_12b = (undefined1)((ulong)param_4 >> 0x28);
  uStack_62 = CONCAT62(local_158,uStack_15a);
  uStack_5a = uStack_152;
  local_58 = uStack_150;
  local_140 = param_2;
  uStack_138 = param_3;
  uStack_e0 = uStack_150;
  uStack_da = uStack_14a;
  uStack_d8 = local_148;
  local_d0 = param_6;
  uStack_c8 = param_7;
  local_c0 = param_8;
  local_b8 = param_2;
  uStack_b0 = param_3;
  local_a8 = local_130;
  local_a7 = uStack_12f;
  local_a6 = uStack_12e;
  local_a5 = uStack_12d;
  local_a3 = uStack_12b;
  uStack_52 = uStack_14a;
  uStack_50 = local_148;
  local_48 = param_6;
  uStack_40 = param_7;
  local_38 = param_8;
  FUN_1004e0158(&local_140,auStack_228);
  FUN_1004e018c(&local_b8);
  param_1[0xd] = uStack_d8;
  param_1[0xc] = CONCAT26(uStack_da,uStack_e0);
  param_1[0xf] = uStack_c8;
  param_1[0xe] = local_d0;
  param_1[0x10] = local_c0;
  param_1[5] = CONCAT26(uStack_112,uStack_118);
  param_1[4] = CONCAT26(uStack_11a,uStack_120);
  param_1[7] = CONCAT26(uStack_102,uStack_108);
  param_1[6] = CONCAT26(local_10a,uStack_110);
  param_1[9] = CONCAT26(uStack_f2,uStack_f8);
  param_1[8] = CONCAT26(uStack_fa,uStack_100);
  param_1[0xb] = CONCAT26(uStack_e2,uStack_e8);
  param_1[10] = CONCAT26(local_ea,uStack_f0);
  param_1[1] = uStack_138;
  *param_1 = local_140;
  param_1[3] = CONCAT26(uStack_122,uStack_128);
  param_1[2] = CONCAT26(uStack_12a,
                        CONCAT15(uStack_12b,
                                 CONCAT23(uStack_12d,
                                          CONCAT12(uStack_12e,CONCAT11(uStack_12f,local_130)))));
  return;
}



/* Address: 0x1004de970 | FUN_1004de970 */

void FUN_1004de970(void)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  puVar5 = (undefined1 *)0xec000000736e6f69;
  pcVar2 = (char *)0x7463757274736e69;
  if (bVar1 != 3) {
    puVar5 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  HVar4.unknown = (undefined1 *)0xea00000000006f66;
  pcVar3 = (char *)0x6e49726576726573;
  if (bVar1 != 2) {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  puVar5 = (undefined1 *)0xef6e6f6973726556;
  pcVar2 = (char *)0x6c6f636f746f7270;
  if (bVar1 != 0) {
    puVar5 = (undefined1 *)0xec00000073656974;
    pcVar2 = (char *)0x696c696261706163;
  }
  if (bVar1 < 2) {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004dea6c | FUN_1004dea6c */

void FUN_1004dea6c(Hasher param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  String SVar6;
  
  bVar2 = *unaff_x20;
  puVar5 = (undefined1 *)0xec000000736e6f69;
  pcVar3 = (char *)0x7463757274736e69;
  if (bVar2 != 3) {
    puVar5 = &DAT_e500000000000000;
    pcVar3 = (char *)0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xea00000000006f66;
  pcVar4 = (char *)0x6e49726576726573;
  if (bVar2 != 2) {
    puVar1 = puVar5;
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xef6e6f6973726556;
  pcVar3 = (char *)0x6c6f636f746f7270;
  if (bVar2 != 0) {
    puVar5 = (undefined1 *)0xec00000073656974;
    pcVar3 = (char *)0x696c696261706163;
  }
  if (bVar2 < 2) {
    puVar1 = puVar5;
    pcVar4 = pcVar3;
  }
  SVar6.bridgeObject = puVar1;
  SVar6.str = pcVar4;
  Swift::String::hash(param_1,SVar6);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x1004deb44 | FUN_1004deb44 */

void FUN_1004deb44(__int64 param_1)

{
  byte bVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  String SVar6;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar5 = (undefined1 *)0xec000000736e6f69;
  pcVar2 = (char *)0x7463757274736e69;
  if (bVar1 != 3) {
    puVar5 = &DAT_e500000000000000;
    pcVar2 = (char *)0x6174656d5f;
  }
  HVar4.unknown = (undefined1 *)0xea00000000006f66;
  pcVar3 = (char *)0x6e49726576726573;
  if (bVar1 != 2) {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  puVar5 = (undefined1 *)0xef6e6f6973726556;
  pcVar2 = (char *)0x6c6f636f746f7270;
  if (bVar1 != 0) {
    puVar5 = (undefined1 *)0xec00000073656974;
    pcVar2 = (char *)0x696c696261706163;
  }
  if (bVar1 < 2) {
    HVar4.unknown = puVar5;
    pcVar3 = pcVar2;
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar3;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004dec3c | FUN_1004dec3c */

void FUN_1004dec3c(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1004e02ec(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1004dec68 | FUN_1004dec68 */

void FUN_1004dec68(undefined8 *param_1)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  puVar5 = (undefined1 *)0xec000000736e6f69;
  uVar3 = 0x7463757274736e69;
  if (bVar2 != 3) {
    puVar5 = &DAT_e500000000000000;
    uVar3 = 0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xea00000000006f66;
  uVar4 = 0x6e49726576726573;
  if (bVar2 != 2) {
    puVar1 = puVar5;
    uVar4 = uVar3;
  }
  puVar5 = (undefined1 *)0xef6e6f6973726556;
  uVar3 = 0x6c6f636f746f7270;
  if (bVar2 != 0) {
    puVar5 = (undefined1 *)0xec00000073656974;
    uVar3 = 0x696c696261706163;
  }
  if (bVar2 < 2) {
    puVar1 = puVar5;
    uVar4 = uVar3;
  }
  *param_1 = uVar4;
  param_1[1] = puVar1;
  return;
}



/* Address: 0x1004ded24 | FUN_1004ded24 */

undefined1  [16] FUN_1004ded24(void)

{
  undefined1 *puVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar2 = *unaff_x20;
  puVar5 = (undefined1 *)0xec000000736e6f69;
  uVar3 = 0x7463757274736e69;
  if (bVar2 != 3) {
    puVar5 = &DAT_e500000000000000;
    uVar3 = 0x6174656d5f;
  }
  puVar1 = (undefined1 *)0xea00000000006f66;
  uVar4 = 0x6e49726576726573;
  if (bVar2 != 2) {
    puVar1 = puVar5;
    uVar4 = uVar3;
  }
  puVar5 = (undefined1 *)0xef6e6f6973726556;
  uVar3 = 0x6c6f636f746f7270;
  if (bVar2 != 0) {
    puVar5 = (undefined1 *)0xec00000073656974;
    uVar3 = 0x696c696261706163;
  }
  if (bVar2 < 2) {
    puVar1 = puVar5;
    uVar4 = uVar3;
  }
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1004deddc | FUN_1004deddc */

void FUN_1004deddc(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004e02ec();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004dee00 | FUN_1004dee00 */

void FUN_1004dee00(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcc858;
  FUN_1000f7830(&DAT_100fcc858,&DAT_100c52a10);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1004dee40 | FUN_1004dee40 */

String FUN_1004dee40(void)

{
  String SVar1;
  
  FUN_1004e01b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004dee68 | FUN_1004dee68 */

String FUN_1004dee68(void)

{
  String SVar1;
  
  FUN_1004e01b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004dee90 | FUN_1004dee90 */

void FUN_1004dee90(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_180 [8];
  undefined1 local_178 [88];
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
  
  puVar1 = &DAT_100fcc580;
  FUN_1000f7830(&DAT_100fcc580,&DAT_100c523e8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004e01b8();
  Swift::Encoder::_container();
  uVar2 = *unaff_x20;
  local_120 = local_120 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(uVar2,unaff_x20[1],&local_120,puVar1);
  if (unaff_x21 == 0) {
    local_120 = CONCAT26(local_120._6_2_,*(undefined6 *)(unaff_x20 + 2));
    local_178[0] = 1;
    FUN_1004e01f8();
    Swift::KeyedEncodingContainer::_encode(&local_120,local_178,puVar1,&DAT_100ee2e50,uVar2);
    uStack_98 = unaff_x20[8];
    local_a0 = unaff_x20[7];
    uStack_88 = unaff_x20[10];
    uStack_90 = unaff_x20[9];
    uStack_78 = unaff_x20[0xc];
    local_80 = unaff_x20[0xb];
    local_70 = unaff_x20[0xd];
    uStack_b8 = unaff_x20[4];
    local_c0 = unaff_x20[3];
    uStack_a8 = unaff_x20[6];
    uStack_b0 = unaff_x20[5];
    uStack_f8 = unaff_x20[8];
    local_100 = unaff_x20[7];
    uStack_e8 = unaff_x20[10];
    uStack_f0 = unaff_x20[9];
    uStack_d8 = unaff_x20[0xc];
    local_e0 = unaff_x20[0xb];
    local_d0 = unaff_x20[0xd];
    uStack_118 = unaff_x20[4];
    local_120 = unaff_x20[3];
    uStack_108 = unaff_x20[6];
    uStack_110 = unaff_x20[5];
    local_51 = 2;
    puVar3 = &local_c0;
    FUN_1004e011c(puVar3,local_178);
    FUN_1004e0238();
    Swift::KeyedEncodingContainer::_encode(&local_120,&local_51,puVar1,&DAT_100ee2dc0,puVar3);
    FUN_1004e0278(&local_120);
    uVar2 = unaff_x20[0xe];
    local_120 = CONCAT71(local_120._1_7_,3);
    Swift::KeyedEncodingContainer::_encodeIfPresent(uVar2,unaff_x20[0xf],&local_120,puVar1);
    local_120 = unaff_x20[0x10];
    local_178[0] = 4;
    FUN_1004e02ac();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_120,local_178,puVar1,&DAT_100edcda0,uVar2);
  }
  (**(code **)(lVar4 + 8))(auStack_180 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1004df0d8 | FUN_1004df0d8 */

void FUN_1004df0d8(undefined8 *param_1)

{
  long unaff_x21;
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
  undefined8 local_28;
  
  FUN_1004e0350(&local_a8);
  if (unaff_x21 == 0) {
    param_1[0xd] = uStack_40;
    param_1[0xc] = local_48;
    param_1[0xf] = uStack_30;
    param_1[0xe] = local_38;
    param_1[0x10] = local_28;
    param_1[5] = uStack_80;
    param_1[4] = local_88;
    param_1[7] = uStack_70;
    param_1[6] = local_78;
    param_1[9] = uStack_60;
    param_1[8] = local_68;
    param_1[0xb] = uStack_50;
    param_1[10] = local_58;
    param_1[1] = uStack_a0;
    *param_1 = local_a8;
    param_1[3] = uStack_90;
    param_1[2] = local_98;
  }
  return;
}



/* Address: 0x1004df140 | thunk_FUN_1004dfa7c */

void thunk_FUN_1004dfa7c(void)

{
  FUN_1004dfa7c();
  return;
}



/* Address: 0x1004df144 | FUN_1004df144 */

void FUN_1004df144(Hasher param_1)

{
  Hasher HVar1;
  String *unaff_x20;
  char *pcVar2;
  void *pvVar3;
  Hasher HVar4;
  String SVar5;
  
  Swift::String::hash(param_1,*unaff_x20);
  HVar1.unknown = (undefined *)(ulong)*(uint6 *)&unaff_x20[1].str;
  FUN_100589664(param_1.unknown);
  FUN_10052946c(param_1.unknown);
  pvVar3 = unaff_x20[7].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    pcVar2 = unaff_x20[8].str;
    HVar4.unknown = HVar1.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[7].str;
    Swift::Hasher::_combine(1,HVar1);
    SVar5.bridgeObject = pvVar3;
    SVar5.str = HVar4.unknown;
    Swift::String::hash(param_1,SVar5);
    pcVar2 = unaff_x20[8].str;
  }
  if (pcVar2 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar4);
    FUN_1004df778(param_1.unknown,pcVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar4);
  return;
}



/* Address: 0x1004df248 | FUN_1004df248 */

void FUN_1004df248(void)

{
  Hasher HVar1;
  char *pcVar2;
  String *unaff_x20;
  void *pvVar3;
  Hasher HVar4;
  String SVar5;
  undefined1 auStack_d8 [72];
  void *local_90;
  char *pcStack_88;
  void *pvStack_80;
  char *pcStack_78;
  void *local_70;
  char *pcStack_68;
  void *pvStack_60;
  char *pcStack_58;
  void *local_50;
  char *pcStack_48;
  void *local_40;
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_d8,*unaff_x20);
  HVar1.unknown = (undefined *)(ulong)*(uint6 *)&unaff_x20[1].str;
  FUN_100589664(auStack_d8);
  pcStack_68 = unaff_x20[4].str;
  local_70 = unaff_x20[3].bridgeObject;
  pcStack_58 = unaff_x20[5].str;
  pvStack_60 = unaff_x20[4].bridgeObject;
  pcStack_48 = unaff_x20[6].str;
  local_50 = unaff_x20[5].bridgeObject;
  local_40 = unaff_x20[6].bridgeObject;
  pcStack_88 = unaff_x20[2].str;
  local_90 = unaff_x20[1].bridgeObject;
  pcStack_78 = unaff_x20[3].str;
  pvStack_80 = unaff_x20[2].bridgeObject;
  FUN_10052946c(auStack_d8);
  pvVar3 = unaff_x20[7].bridgeObject;
  if (pvVar3 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar1);
    pcVar2 = unaff_x20[8].str;
    HVar4.unknown = HVar1.unknown;
  }
  else {
    HVar4.unknown = unaff_x20[7].str;
    Swift::Hasher::_combine(1,HVar1);
    SVar5.bridgeObject = pvVar3;
    SVar5.str = HVar4.unknown;
    Swift::String::hash((Hasher)auStack_d8,SVar5);
    pcVar2 = unaff_x20[8].str;
  }
  if (pcVar2 == (char *)0x0) {
    HVar1.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    HVar1.unknown = auStack_d8;
    FUN_1004df778(HVar1.unknown,pcVar2);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1004df348 | thunk_FUN_1004df248 */

void thunk_FUN_1004df248(void)

{
  FUN_1004df248();
  return;
}



/* Address: 0x1004df34c | FUN_1004df34c */

void FUN_1004df34c(Hasher param_1)

{
  void *pvVar1;
  char *pcVar2;
  uint6 uVar3;
  String SVar4;
  Hasher HVar5;
  Hasher HVar6;
  String *unaff_x20;
  
  HVar6.unknown = unaff_x20[7].str;
  pvVar1 = unaff_x20[7].bridgeObject;
  SVar4 = unaff_x20[7];
  pcVar2 = unaff_x20[8].str;
  uVar3 = *(uint6 *)&unaff_x20[1].str;
  Swift::String::hash(param_1,*unaff_x20);
  HVar5.unknown = (undefined *)(ulong)uVar3;
  FUN_100589664(param_1.unknown);
  FUN_10052946c(param_1.unknown);
  if (pvVar1 == (void *)0x0) {
    Swift::Hasher::_combine(0,HVar5);
    HVar6.unknown = HVar5.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    Swift::String::hash(param_1,SVar4);
  }
  if (pcVar2 != (char *)0x0) {
    Swift::Hasher::_combine(1,HVar6);
    FUN_1004df778(param_1.unknown,pcVar2);
    return;
  }
  Swift::Hasher::_combine(0,HVar6);
  return;
}


