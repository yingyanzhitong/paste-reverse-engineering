/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100558f34 | FUN_100558f34 */

void FUN_100558f34(long param_1)

{
  undefined8 in_x4;
  
  if (param_1 == 1) {
    return;
  }
  _swift_bridgeObjectRelease();
  _swift_bridgeObjectRelease(in_x4);
  return;
}



/* Address: 0x100558f64 | FUN_100558f64 */

void FUN_100558f64(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fcf7b0;
    FUN_1000f8b08(&DAT_100fcf7b0,&DAT_100c58160);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100558fd4 | FUN_100558fd4 */

void FUN_100558fd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfa20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c581b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c581b0,&DAT_100edeef8);
  DAT_100fcfa20 = pTVar1;
  return;
}



/* Address: 0x100558fe4 | FUN_100558fe4 */

void FUN_100558fe4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c581b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c581b0,&DAT_100edeef8);
  DAT_100fcfa20 = pTVar1;
  return;
}



/* Address: 0x100559014 | thunk_FUN_100556d68 */

bool thunk_FUN_100556d68(long param_1,long param_2)

{
  bool bVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar4 != 0) && (param_1 != param_2)) {
    pcVar2 = (char *)(param_1 + 0x20);
    pcVar3 = (char *)(param_2 + 0x20);
    do {
      lVar4 = lVar4 + -1;
      bVar1 = *pcVar2 == *pcVar3;
      if (*pcVar2 != *pcVar3) {
        return bVar1;
      }
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (lVar4 != 0);
    return bVar1;
  }
  return true;
}



/* Address: 0x100559018 | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x10055901c | FUN_10055901c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100559058 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_10055901c(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100559088 | FUN_100559088 */

undefined1  [16] FUN_100559088(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6e61747369737361;
  if (param_1 != '\x01') {
    uVar1 = 0x72657375;
  }
  puVar2 = (undefined1 *)0xe900000000000074;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1005590c0 | FUN_1005590c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100559100 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005590c0(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100559138 | FUN_100559138 */

void FUN_100559138(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x6e61747369737361;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x72657375;
  }
  puVar2 = (undefined1 *)0xe900000000000074;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100559174 | FUN_100559174 */

void FUN_100559174(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x6e61747369737361;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  HVar3.unknown = (undefined1 *)0xe900000000000074;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1005591f0 | FUN_1005591f0 */

void FUN_1005591f0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x6e61747369737361;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  puVar2 = (undefined1 *)0xe900000000000074;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100559248 | FUN_100559248 */

void FUN_100559248(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x6e61747369737361;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x72657375;
  }
  HVar3.unknown = (undefined1 *)0xe900000000000074;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x1005592c0 | FUN_1005592c0 */

void FUN_1005592c0(void)

{
  FUN_1005676a8();
  (extension_Swift)::Swift::RawRepresentable::_init();
  return;
}



/* Address: 0x10055931c | FUN_10055931c */

void FUN_10055931c(void)

{
  FUN_1005676a8();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x100559368 | FUN_100559368 */

void FUN_100559368(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100559374(unaff_x20 + 8,param_1);
  return;
}



/* Address: 0x100559374 | FUN_100559374 */

undefined8 FUN_100559374(undefined8 param_1,undefined8 param_2)

{
  FUN_1005655b4(param_2,param_1,&DAT_100edf3e0);
  return param_2;
}



/* Address: 0x1005593a8 | FUN_1005593a8 */

void FUN_1005593a8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Address: 0x1005593d0 | FUN_1005593d0 */

void FUN_1005593d0(undefined8 *param_1,undefined1 param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined1 auStack_130 [72];
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 local_c1;
  undefined7 uStack_c0;
  undefined1 uStack_b9;
  undefined7 uStack_b8;
  undefined1 uStack_b1;
  undefined1 local_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 local_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 local_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 local_7f;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 local_70;
  undefined1 local_68;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 uStack_3f;
  undefined8 local_37;
  undefined8 local_28;
  
  uStack_d9 = (undefined1)param_3[1];
  uStack_d8 = (undefined7)((ulong)param_3[1] >> 8);
  local_e1 = (undefined1)*param_3;
  uStack_e0 = (undefined7)((ulong)*param_3 >> 8);
  uStack_c9 = (undefined1)param_3[3];
  uStack_c8 = (undefined7)((ulong)param_3[3] >> 8);
  local_d1 = (undefined1)param_3[2];
  uStack_d0 = (undefined7)((ulong)param_3[2] >> 8);
  uStack_b9 = (undefined1)param_3[5];
  uStack_b8 = (undefined7)((ulong)param_3[5] >> 8);
  local_c1 = (undefined1)param_3[4];
  uStack_c0 = (undefined7)((ulong)param_3[4] >> 8);
  uStack_5f = CONCAT17(uStack_d9,uStack_e0);
  local_67 = CONCAT17(local_e1,uStack_e8);
  uStack_a7 = uStack_e0;
  uStack_a0 = uStack_d9;
  uStack_af = uStack_e8;
  uStack_a8 = local_e1;
  uStack_4f = CONCAT17(uStack_c9,uStack_d0);
  local_57 = CONCAT17(local_d1,uStack_d8);
  uStack_97 = uStack_d0;
  uStack_90 = uStack_c9;
  local_9f = uStack_d8;
  uStack_98 = local_d1;
  uStack_3f = CONCAT17(uStack_b9,uStack_c0);
  local_47 = CONCAT17(local_c1,uStack_c8);
  uStack_87 = uStack_c0;
  uStack_80 = uStack_b9;
  local_8f = uStack_c8;
  uStack_88 = local_c1;
  uStack_b1 = *(undefined1 *)(param_3 + 6);
  local_37 = CONCAT17(uStack_b1,uStack_b8);
  local_7f = uStack_b8;
  local_b0 = param_2;
  uStack_78 = uStack_b1;
  local_70 = param_4;
  local_68 = param_2;
  local_28 = param_4;
  FUN_100558e40(&local_b0,auStack_130);
  FUN_100558e7c(&local_68);
  param_1[5] = CONCAT71(uStack_87,uStack_88);
  param_1[4] = CONCAT71(local_8f,uStack_90);
  param_1[7] = CONCAT71(uStack_77,uStack_78);
  param_1[6] = CONCAT71(local_7f,uStack_80);
  param_1[8] = local_70;
  param_1[1] = CONCAT71(uStack_a7,uStack_a8);
  *param_1 = CONCAT71(uStack_af,local_b0);
  param_1[3] = CONCAT71(uStack_97,uStack_98);
  param_1[2] = CONCAT71(local_9f,uStack_a0);
  return;
}



/* Address: 0x100559490 | FUN_100559490 */

void FUN_100559490(undefined8 param_1,undefined8 param_2)

{
  FUN_1005594a0(param_1,param_2,0);
  return;
}



/* Address: 0x100559498 | FUN_100559498 */

void FUN_100559498(undefined8 param_1,undefined8 param_2)

{
  FUN_1005594a0(param_1,param_2,1);
  return;
}



/* Address: 0x1005594a0 | FUN_1005594a0 */

void FUN_1005594a0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4)

{
  undefined1 auStack_140 [72];
  undefined7 uStack_f8;
  undefined1 local_f1;
  undefined7 uStack_f0;
  undefined1 uStack_e9;
  undefined7 uStack_e8;
  undefined1 local_e1;
  undefined7 uStack_e0;
  undefined1 uStack_d9;
  undefined7 uStack_d8;
  undefined1 local_d1;
  undefined7 uStack_d0;
  undefined1 uStack_c9;
  undefined7 uStack_c8;
  undefined1 uStack_c1;
  undefined1 local_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 local_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined7 local_9f;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 local_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined8 local_80;
  undefined1 local_78;
  undefined8 local_77;
  undefined8 uStack_6f;
  undefined8 local_67;
  undefined8 uStack_5f;
  undefined8 local_57;
  undefined8 uStack_4f;
  undefined8 local_47;
  undefined8 local_38;
  
  uStack_e9 = (undefined1)param_2[1];
  uStack_e8 = (undefined7)((ulong)param_2[1] >> 8);
  local_f1 = (undefined1)*param_2;
  uStack_f0 = (undefined7)((ulong)*param_2 >> 8);
  uStack_d9 = (undefined1)param_2[3];
  uStack_d8 = (undefined7)((ulong)param_2[3] >> 8);
  local_e1 = (undefined1)param_2[2];
  uStack_e0 = (undefined7)((ulong)param_2[2] >> 8);
  uStack_c9 = (undefined1)param_2[5];
  uStack_c8 = (undefined7)((ulong)param_2[5] >> 8);
  local_d1 = (undefined1)param_2[4];
  uStack_d0 = (undefined7)((ulong)param_2[4] >> 8);
  uStack_6f = CONCAT17(uStack_e9,uStack_f0);
  local_77 = CONCAT17(local_f1,uStack_f8);
  uStack_b7 = uStack_f0;
  uStack_b0 = uStack_e9;
  uStack_bf = uStack_f8;
  uStack_b8 = local_f1;
  uStack_5f = CONCAT17(uStack_d9,uStack_e0);
  local_67 = CONCAT17(local_e1,uStack_e8);
  uStack_a7 = uStack_e0;
  uStack_a0 = uStack_d9;
  local_af = uStack_e8;
  uStack_a8 = local_e1;
  uStack_4f = CONCAT17(uStack_c9,uStack_d0);
  local_57 = CONCAT17(local_d1,uStack_d8);
  uStack_97 = uStack_d0;
  uStack_90 = uStack_c9;
  local_9f = uStack_d8;
  uStack_98 = local_d1;
  uStack_c1 = *(undefined1 *)(param_2 + 6);
  local_47 = CONCAT17(uStack_c1,uStack_c8);
  local_8f = uStack_c8;
  local_c0 = param_4;
  uStack_88 = uStack_c1;
  local_80 = param_3;
  local_78 = param_4;
  local_38 = param_3;
  FUN_100559374(param_2,auStack_140);
  _swift_bridgeObjectRetain(param_3);
  FUN_100558e40(&local_c0,auStack_140);
  FUN_100558e7c(&local_78);
  param_1[5] = CONCAT71(uStack_97,uStack_98);
  param_1[4] = CONCAT71(local_9f,uStack_a0);
  param_1[7] = CONCAT71(uStack_87,uStack_88);
  param_1[6] = CONCAT71(local_8f,uStack_90);
  param_1[8] = local_80;
  param_1[1] = CONCAT71(uStack_b7,uStack_b8);
  *param_1 = CONCAT71(uStack_bf,local_c0);
  param_1[3] = CONCAT71(uStack_a7,uStack_a8);
  param_1[2] = CONCAT71(local_af,uStack_b0);
  return;
}



/* Address: 0x10055957c | thunk_FUN_100560934 */

void thunk_FUN_100560934(void)

{
  FUN_100560934();
  return;
}



/* Address: 0x100559580 | FUN_100559580 */

void FUN_100559580(Hasher param_1,Hasher param_2)

{
  byte bVar1;
  String SVar2;
  String SVar3;
  __uint64 _Var4;
  char *pcVar5;
  String *unaff_x20;
  char *pcVar6;
  void *pvVar7;
  Hasher HVar8;
  void *pvVar9;
  String SVar10;
  
  pcVar5 = unaff_x20->str;
  pvVar7 = unaff_x20->bridgeObject;
  SVar2 = *unaff_x20;
  SVar10 = *unaff_x20;
  pcVar6 = unaff_x20[1].str;
  pvVar9 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[1];
  bVar1 = *(byte *)&unaff_x20[3].str;
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      Swift::Hasher::_combine(0,param_2);
      goto LAB_1005596c8;
    }
    _Var4 = 1;
  }
  else {
    if (bVar1 != 2) {
      pvVar7 = unaff_x20[2].bridgeObject;
      if (bVar1 == 3) {
        HVar8.unknown = unaff_x20[2].str;
        Swift::Hasher::_combine(3,param_2);
        Swift::String::hash(param_1,SVar10);
        Swift::String::hash(param_1,SVar3);
        FUN_1004df778(param_1.unknown);
        if (pvVar7 != (void *)0x0) {
          Swift::Hasher::_combine(1,HVar8);
          FUN_1004df778(param_1.unknown,pvVar7);
          return;
        }
        Swift::Hasher::_combine(0,HVar8);
      }
      else {
        Swift::Hasher::_combine(4,param_2);
        FUN_10055be0c(param_1.unknown);
      }
      return;
    }
    _Var4 = 2;
  }
  Swift::Hasher::_combine(_Var4,param_2);
  Swift::String::hash(param_1,SVar2);
  pcVar5 = pcVar6;
  pvVar7 = pvVar9;
LAB_1005596c8:
  SVar10.bridgeObject = pvVar7;
  SVar10.str = pcVar5;
  Swift::String::hash(param_1,SVar10);
  return;
}



/* Address: 0x10055970c | FUN_10055970c */

void FUN_10055970c(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  String SVar2;
  String SVar3;
  __uint64 _Var4;
  Hasher into;
  char *pcVar5;
  char *pcVar7;
  String *unaff_x20;
  void *pvVar8;
  Hasher HVar9;
  void *pvVar10;
  String SVar11;
  undefined1 auStack_b8 [72];
  char *local_70;
  void *pvStack_68;
  char *local_60;
  void *local_58;
  char *pcStack_50;
  void *local_48;
  void *pvVar6;
  
  Swift::Hasher::init(0);
  pcVar5 = unaff_x20->str;
  pvVar6 = unaff_x20->bridgeObject;
  SVar2 = *unaff_x20;
  SVar11 = *unaff_x20;
  pcVar7 = unaff_x20[1].str;
  pvVar10 = unaff_x20[1].bridgeObject;
  SVar3 = unaff_x20[1];
  bVar1 = *(byte *)&unaff_x20[3].str;
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      _Var4 = 1;
      goto LAB_10055981c;
    }
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    if (bVar1 != 2) {
      pvVar8 = unaff_x20[2].bridgeObject;
      if (bVar1 == 3) {
        HVar9.unknown = unaff_x20[2].str;
        Swift::Hasher::_combine(3,param_2);
        Swift::String::hash((Hasher)auStack_b8,SVar11);
        Swift::String::hash((Hasher)auStack_b8,SVar3);
        FUN_1004df778(auStack_b8);
        if (pvVar8 == (void *)0x0) {
          into.unknown = (undefined *)0x0;
          Swift::Hasher::_combine(0,HVar9);
        }
        else {
          Swift::Hasher::_combine(1,HVar9);
          into.unknown = auStack_b8;
          FUN_1004df778(into.unknown,pvVar8);
        }
      }
      else {
        local_70 = pcVar5;
        pvStack_68 = pvVar6;
        local_60 = pcVar7;
        local_58 = pvVar10;
        pcStack_50 = unaff_x20[2].str;
        local_48 = pvVar8;
        Swift::Hasher::_combine(4,param_2);
        into.unknown = auStack_b8;
        FUN_10055be0c();
      }
      goto LAB_100559848;
    }
    _Var4 = 2;
LAB_10055981c:
    Swift::Hasher::_combine(_Var4,param_2);
    Swift::String::hash((Hasher)auStack_b8,SVar2);
    pcVar5 = pcVar7;
    pvVar6 = pvVar10;
  }
  into.unknown = auStack_b8;
  SVar11.bridgeObject = pvVar6;
  SVar11.str = pcVar5;
  Swift::String::hash(into,SVar11);
LAB_100559848:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100559874 | thunk_FUN_10055970c */

void thunk_FUN_10055970c(void)

{
  FUN_10055970c();
  return;
}



/* Address: 0x100559878 | thunk_FUN_100559580 */

void thunk_FUN_100559580(void)

{
  FUN_100559580();
  return;
}



/* Address: 0x10055987c | FUN_10055987c */

void FUN_10055987c(void)

{
  FUN_10055ab88();
  return;
}



/* Address: 0x100559888 | FUN_100559888 */

uint FUN_100559888(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 local_60;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  local_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  local_20 = *(undefined1 *)(param_2 + 6);
  FUN_100560934(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1005598e0 | FUN_1005598e0 */

byte FUN_1005598e0(void)

{
  long unaff_x20;
  
  return *(byte *)(unaff_x20 + 0x30) >> 7 ^ 1;
}



/* Address: 0x1005598f0 | FUN_1005598f0 */

undefined * FUN_1005598f0(void)

{
  char cVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar3 = (undefined *)*unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 6);
  if (-1 < cVar1) {
    uVar4 = unaff_x20[5];
    puVar2 = &DAT_100fcfa88;
    FUN_1000f7830(&DAT_100fcfa88,&BYTE_100c58810);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined **)(puVar2 + 0x20) = puVar3;
    uVar6 = unaff_x20[2];
    uVar5 = unaff_x20[1];
    uVar7 = unaff_x20[3];
    *(undefined8 *)(puVar2 + 0x40) = unaff_x20[4];
    *(undefined8 *)(puVar2 + 0x38) = uVar7;
    *(undefined8 *)(puVar2 + 0x30) = uVar6;
    *(undefined8 *)(puVar2 + 0x28) = uVar5;
    *(undefined8 *)(puVar2 + 0x48) = uVar4;
    puVar2[0x50] = cVar1;
    puVar3 = puVar2;
  }
  FUN_100559374();
  return puVar3;
}



/* Address: 0x100559994 | FUN_100559994 */

void FUN_100559994(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1005599ac | FUN_1005599ac */

void FUN_1005599ac(void)

{
  FUN_1005599bc();
  return;
}



/* Address: 0x1005599b4 | FUN_1005599b4 */

void FUN_1005599b4(void)

{
  FUN_1005599bc();
  return;
}



/* Address: 0x1005599bc | FUN_1005599bc */

void FUN_1005599bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = param_6;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_5);
  return;
}



/* Address: 0x1005599f4 | FUN_1005599f4 */

ulong FUN_1005599f4(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50;
  ulong local_48;
  ulong local_40;
  ulong uStack_38;
  ulong uStack_30;
  ulong uStack_28;
  ulong local_20;
  char local_18;
  ulong *puVar3;
  
  uVar2 = *param_1;
  local_18 = (char)param_1[6];
  if (local_18 < '\0') {
    if (*(char *)(param_2 + 6) < '\0') {
      FUN_1005547e0(uVar2,*param_2);
      return uVar2;
    }
  }
  else {
    local_20 = param_1[5];
    uStack_38 = param_1[2];
    local_40 = param_1[1];
    uStack_28 = param_1[4];
    uStack_30 = param_1[3];
    local_50 = *(char *)(param_2 + 6);
    if (-1 < local_50) {
      uStack_78 = param_2[1];
      local_80 = *param_2;
      uStack_68 = param_2[3];
      uStack_70 = param_2[2];
      uStack_58 = param_2[5];
      local_60 = param_2[4];
      puVar3 = &local_48;
      local_48 = uVar2;
      FUN_100560934(puVar3,&local_80);
      uVar1 = (uint)puVar3;
      goto LAB_100559a64;
    }
  }
  uVar1 = 0;
LAB_100559a64:
  return (ulong)(uVar1 & 1);
}



/* Address: 0x100559a84 | FUN_100559a84 */

void FUN_100559a84(undefined8 param_1,Hasher param_2)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  if (-1 < *(char *)(unaff_x20 + 6)) {
    Swift::Hasher::_combine(0,param_2);
    FUN_100559580(param_1);
    return;
  }
  Swift::Hasher::_combine(1,param_2);
  FUN_1004d7c74(param_1,uVar1);
  return;
}



/* Address: 0x100559b18 | FUN_100559b18 */

void FUN_100559b18(undefined8 param_1,Hasher param_2)

{
  void *pvVar1;
  char *pcVar2;
  byte bVar3;
  __uint64 _Var4;
  Hasher into;
  Hasher HVar5;
  char *pcVar7;
  undefined8 *unaff_x20;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_c8 [72];
  char *local_80;
  void *pvStack_78;
  char *local_70;
  void *pvStack_68;
  undefined *local_60;
  long lStack_58;
  void *pvVar6;
  
  Swift::Hasher::init(0);
  pcVar7 = (char *)*unaff_x20;
  bVar3 = *(byte *)(unaff_x20 + 6);
  if ((char)bVar3 < '\0') {
    Swift::Hasher::_combine(1,param_2);
    into.unknown = auStack_c8;
    FUN_1004d7c74(into.unknown,pcVar7);
    goto LAB_100559c70;
  }
  pvVar6 = (void *)unaff_x20[1];
  pcVar2 = ((String *)(unaff_x20 + 2))->str;
  pvVar1 = (void *)unaff_x20[3];
  SVar10 = *(String *)(unaff_x20 + 2);
  HVar5.unknown = (undefined *)unaff_x20[4];
  lVar8 = unaff_x20[5];
  Swift::Hasher::_combine(0,param_2);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      _Var4 = 1;
      goto LAB_100559c4c;
    }
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        Swift::Hasher::_combine(3,param_2);
        SVar9.bridgeObject = pvVar6;
        SVar9.str = pcVar7;
        Swift::String::hash((Hasher)auStack_c8,SVar9);
        Swift::String::hash((Hasher)auStack_c8,SVar10);
        FUN_1004df778(auStack_c8);
        if (lVar8 == 0) {
          into.unknown = (undefined *)0x0;
          Swift::Hasher::_combine(0,HVar5);
        }
        else {
          Swift::Hasher::_combine(1,HVar5);
          into.unknown = auStack_c8;
          FUN_1004df778(into.unknown,lVar8);
        }
      }
      else {
        local_80 = pcVar7;
        pvStack_78 = pvVar6;
        local_70 = pcVar2;
        pvStack_68 = pvVar1;
        local_60 = HVar5.unknown;
        lStack_58 = lVar8;
        Swift::Hasher::_combine(4,param_2);
        into.unknown = auStack_c8;
        FUN_10055be0c();
      }
      goto LAB_100559c70;
    }
    _Var4 = 2;
LAB_100559c4c:
    Swift::Hasher::_combine(_Var4,param_2);
    SVar10.bridgeObject = pvVar6;
    SVar10.str = pcVar7;
    Swift::String::hash((Hasher)auStack_c8,SVar10);
    pcVar7 = pcVar2;
    pvVar6 = pvVar1;
  }
  into.unknown = auStack_c8;
  SVar11.bridgeObject = pvVar6;
  SVar11.str = pcVar7;
  Swift::String::hash(into,SVar11);
LAB_100559c70:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100559ca0 | thunk_FUN_100559b18 */

void thunk_FUN_100559b18(undefined8 param_1,Hasher param_2)

{
  void *pvVar1;
  char *pcVar2;
  byte bVar3;
  __uint64 _Var4;
  Hasher into;
  Hasher HVar5;
  char *pcVar7;
  undefined8 *unaff_x20;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  undefined1 auStack_c8 [72];
  char *pcStack_80;
  void *pvStack_78;
  char *pcStack_70;
  void *pvStack_68;
  undefined *puStack_60;
  long lStack_58;
  void *pvVar6;
  
  Swift::Hasher::init(0);
  pcVar7 = (char *)*unaff_x20;
  bVar3 = *(byte *)(unaff_x20 + 6);
  if ((char)bVar3 < '\0') {
    Swift::Hasher::_combine(1,param_2);
    into.unknown = auStack_c8;
    FUN_1004d7c74(into.unknown,pcVar7);
    goto LAB_100559c70;
  }
  pvVar6 = (void *)unaff_x20[1];
  pcVar2 = ((String *)(unaff_x20 + 2))->str;
  pvVar1 = (void *)unaff_x20[3];
  SVar10 = *(String *)(unaff_x20 + 2);
  HVar5.unknown = (undefined *)unaff_x20[4];
  lVar8 = unaff_x20[5];
  Swift::Hasher::_combine(0,param_2);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      _Var4 = 1;
      goto LAB_100559c4c;
    }
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    if (bVar3 != 2) {
      if (bVar3 == 3) {
        Swift::Hasher::_combine(3,param_2);
        SVar9.bridgeObject = pvVar6;
        SVar9.str = pcVar7;
        Swift::String::hash((Hasher)auStack_c8,SVar9);
        Swift::String::hash((Hasher)auStack_c8,SVar10);
        FUN_1004df778(auStack_c8);
        if (lVar8 == 0) {
          into.unknown = (undefined *)0x0;
          Swift::Hasher::_combine(0,HVar5);
        }
        else {
          Swift::Hasher::_combine(1,HVar5);
          into.unknown = auStack_c8;
          FUN_1004df778(into.unknown,lVar8);
        }
      }
      else {
        pcStack_80 = pcVar7;
        pvStack_78 = pvVar6;
        pcStack_70 = pcVar2;
        pvStack_68 = pvVar1;
        puStack_60 = HVar5.unknown;
        lStack_58 = lVar8;
        Swift::Hasher::_combine(4,param_2);
        into.unknown = auStack_c8;
        FUN_10055be0c();
      }
      goto LAB_100559c70;
    }
    _Var4 = 2;
LAB_100559c4c:
    Swift::Hasher::_combine(_Var4,param_2);
    SVar10.bridgeObject = pvVar6;
    SVar10.str = pcVar7;
    Swift::String::hash((Hasher)auStack_c8,SVar10);
    pcVar7 = pcVar2;
    pvVar6 = pvVar1;
  }
  into.unknown = auStack_c8;
  SVar11.bridgeObject = pvVar6;
  SVar11.str = pcVar7;
  Swift::String::hash(into,SVar11);
LAB_100559c70:
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100559ca4 | FUN_100559ca4 */

void FUN_100559ca4(__int64 param_1,Hasher param_2)

{
  undefined1 (*pauVar1) [16];
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  Hasher HVar9;
  undefined8 uVar10;
  undefined1 (*unaff_x20) [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auStack_a0 [72];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  char local_28;
  
  pauVar1 = unaff_x20 + 1;
  uVar3 = *(undefined8 *)*pauVar1;
  auVar13 = *pauVar1;
  auVar12 = *pauVar1;
  pauVar1 = unaff_x20 + 2;
  uVar4 = *(undefined8 *)*pauVar1;
  auVar6 = *pauVar1;
  auVar11 = *pauVar1;
  uVar5 = *(undefined8 *)*unaff_x20;
  auVar8 = *unaff_x20;
  auVar7 = *unaff_x20;
  uVar10 = *(undefined8 *)*unaff_x20;
  cVar2 = unaff_x20[3][0];
  Swift::Hasher::init(param_1);
  if (cVar2 < '\0') {
    Swift::Hasher::_combine(1,param_2);
    HVar9.unknown = auStack_a0;
    FUN_1004d7c74(HVar9.unknown,uVar10);
  }
  else {
    auVar11 = NEON_ext(auVar11,auVar6,8,1);
    auVar12 = NEON_ext(auVar12,auVar13,8,1);
    auVar13 = NEON_ext(auVar7,auVar8,8,1);
    uStack_50 = auVar13._0_8_;
    uStack_40 = auVar12._0_8_;
    uStack_30 = auVar11._0_8_;
    local_58 = uVar5;
    local_48 = uVar3;
    local_38 = uVar4;
    local_28 = cVar2;
    Swift::Hasher::_combine(0,param_2);
    HVar9.unknown = auStack_a0;
    FUN_100559580();
  }
  Swift::Hasher::_finalize(HVar9);
  return;
}



/* Address: 0x100559d54 | FUN_100559d54 */

ulong FUN_100559d54(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong local_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  ulong local_60;
  char local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  char local_20;
  ulong *puVar3;
  
  uVar2 = *param_1;
  local_58 = (char)param_1[6];
  local_20 = *(char *)(param_2 + 6);
  if (local_58 < '\0') {
    if (local_20 < '\0') {
      FUN_1005547e0(uVar2,*param_2);
      return uVar2;
    }
  }
  else {
    uStack_48 = param_2[1];
    local_50 = *param_2;
    uStack_38 = param_2[3];
    uStack_40 = param_2[2];
    uStack_28 = param_2[5];
    local_30 = param_2[4];
    local_60 = param_1[5];
    uStack_78 = param_1[2];
    local_80 = param_1[1];
    uStack_68 = param_1[4];
    uStack_70 = param_1[3];
    if (-1 < local_20) {
      puVar3 = &local_88;
      local_88 = uVar2;
      FUN_100560934(puVar3,&local_50);
      uVar1 = (uint)puVar3;
      goto LAB_100559dc0;
    }
  }
  uVar1 = 0;
LAB_100559dc0:
  return (ulong)(uVar1 & 1);
}



/* Address: 0x100559de0 | thunk_FUN_1005611ec */

void thunk_FUN_1005611ec(void)

{
  FUN_1005611ec();
  return;
}



/* Address: 0x100559de4 | FUN_100559de4 */

void FUN_100559de4(Hasher param_1)

{
  Hasher HVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  long lVar3;
  undefined *puVar4;
  String SVar5;
  
  HVar1.unknown = (char *)0x6e61747369737361;
  if (*unaff_x20 != '\x01') {
    HVar1.unknown = (char *)0x72657375;
  }
  puVar2 = (undefined1 *)0xe900000000000074;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  SVar5.bridgeObject = puVar2;
  SVar5.str = HVar1.unknown;
  Swift::String::hash(param_1,SVar5);
  _swift_bridgeObjectRelease(puVar2);
  puVar4 = *(undefined **)(unaff_x20 + 8);
  if (unaff_x20[0x38] < '\0') {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004d7c74(param_1.unknown);
    lVar3 = *(long *)(unaff_x20 + 0x40);
    HVar1.unknown = puVar4;
  }
  else {
    Swift::Hasher::_combine(0,HVar1);
    FUN_100559580(param_1.unknown);
    lVar3 = *(long *)(unaff_x20 + 0x40);
  }
  if (lVar3 != 0) {
    Swift::Hasher::_combine(1,HVar1);
    FUN_1004df778(param_1.unknown,lVar3);
    return;
  }
  Swift::Hasher::_combine(0,HVar1);
  return;
}



/* Address: 0x100559ef0 | FUN_100559ef0 */

void FUN_100559ef0(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_100559de4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100559f2c | thunk_FUN_100559de4 */

void thunk_FUN_100559de4(void)

{
  FUN_100559de4();
  return;
}



/* Address: 0x100559f30 | FUN_100559f30 */

void FUN_100559f30(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_100559de4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100559f68 | FUN_100559f68 */

uint FUN_100559f68(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  local_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  local_70 = param_1[8];
  uStack_a8 = param_1[1];
  local_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  local_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  local_20 = param_2[8];
  uStack_58 = param_2[1];
  local_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1005611ec(&local_b0,&local_60);
  return uVar1 & 1;
}



/* Address: 0x100559fc0 | FUN_100559fc0 */

String FUN_100559fc0(void)

{
  String SVar1;
  
  FUN_1005612f0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100559fe8 | FUN_100559fe8 */

String FUN_100559fe8(void)

{
  String SVar1;
  
  FUN_1005612f0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10055a010 | FUN_10055a010 */

undefined8
FUN_10055a010(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    if (param_4 == (undefined *)0x0) {
      return 1;
    }
  }
  else if (param_4 != (undefined *)0x0) {
    if ((param_1.unknown == param_3) && (param_2.unknown == param_4)) {
      return 1;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10055a064 | FUN_10055a064 */

void FUN_10055a064(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  
  puVar1 = &DAT_100fcfa90;
  FUN_1000f7830(&DAT_100fcfa90,&BYTE_100c58818);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005612f0();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(param_2,param_3);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x10055a158 | FUN_10055a158 */

void FUN_10055a158(Hasher param_1,Hasher param_2,void *param_3)

{
  String SVar1;
  
  if (param_3 != (void *)0x0) {
    Swift::Hasher::_combine(1,param_2);
    SVar1.bridgeObject = param_3;
    SVar1.str = param_2.unknown;
    Swift::String::hash(param_1,SVar1);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x10055a1b4 | FUN_10055a1b4 */

void FUN_10055a1b4(char *param_1,undefined *param_2)

{
  Hasher into;
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  if (param_2 == (undefined *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,HVar1);
  }
  else {
    Swift::Hasher::_combine(1,HVar1);
    into.unknown = auStack_78;
    SVar2.bridgeObject = param_2;
    SVar2.str = param_1;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10055a224 | FUN_10055a224 */

undefined1  [16] FUN_10055a224(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  KeyedDecodingContainer<undefined> KVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar1 = &DAT_100fcfaa0;
  FUN_1000f7830(&DAT_100fcfaa0,&BYTE_100c58820);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = *(undefined **)(param_1 + 0x18);
  puVar2 = param_1;
  FUN_100004640(param_1,puVar4);
  FUN_1005612f0();
  KVar3 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent(KVar3.unknown,puVar1);
    (**(code **)(lVar5 + 8))(&stack0xffffffffffffffb0 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    KVar3.unknown = puVar2;
  }
  auVar6._8_8_ = puVar4;
  auVar6._0_8_ = KVar3.unknown;
  return auVar6;
}



/* Address: 0x10055a334 | FUN_10055a334 */

void FUN_10055a334(undefined8 param_1,Hasher param_2)

{
  void *pvVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  pvVar1 = unaff_x20->bridgeObject;
  SVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  if (pvVar1 == (void *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    into.unknown = auStack_78;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10055a3a0 | FUN_10055a3a0 */

void FUN_10055a3a0(Hasher param_1,Hasher param_2)

{
  void *pvVar1;
  undefined8 *unaff_x20;
  char *pcVar2;
  String SVar3;
  
  pvVar1 = (void *)unaff_x20[1];
  if (pvVar1 != (void *)0x0) {
    pcVar2 = (char *)*unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    SVar3.bridgeObject = pvVar1;
    SVar3.str = pcVar2;
    Swift::String::hash(param_1,SVar3);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x10055a404 | FUN_10055a404 */

void FUN_10055a404(__int64 param_1,Hasher param_2)

{
  void *pvVar1;
  String SVar2;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  pvVar1 = unaff_x20->bridgeObject;
  SVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  if (pvVar1 == (void *)0x0) {
    into.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    into.unknown = auStack_78;
    Swift::String::hash(into,SVar2);
  }
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10055a46c | FUN_10055a46c */

/* WARNING: Removing unreachable block (ram,0x00010055a530) */

void FUN_10055a46c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  
  puVar1 = &DAT_100fcfaa0;
  FUN_1000f7830(&DAT_100fcfaa0,&BYTE_100c58820);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1005612f0();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = KVar2.unknown;
    param_1[1] = puVar3;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10055a594 | FUN_10055a594 */

void FUN_10055a594(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long lVar4;
  
  puVar3 = &DAT_100fcfa90;
  FUN_1000f7830(&DAT_100fcfa90,&BYTE_100c58818);
  lVar4 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005612f0();
  Swift::Encoder::_container();
  Swift::KeyedEncodingContainer::_encodeIfPresent(uVar1,uVar2);
  (**(code **)(lVar4 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,puVar3);
  return;
}



/* Address: 0x10055a684 | FUN_10055a684 */

undefined8 FUN_10055a684(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  
  _Var2.unknown = (undefined *)param_1[1];
  puVar3 = (undefined *)param_2[1];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 == (undefined *)0x0) {
      return 1;
    }
  }
  else if (puVar3 != (undefined *)0x0) {
    if ((undefined *)*param_1 == (undefined *)*param_2 && _Var2.unknown == puVar3) {
      return 1;
    }
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,_Var2,
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    if (bVar1) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10055a6d8 | FUN_10055a6d8 */

undefined1  [16] FUN_10055a6d8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 8);
  return auVar1;
}



/* Address: 0x10055a6e4 | FUN_10055a6e4 */

undefined1  [16] FUN_10055a6e4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x18);
  return auVar1;
}



/* Address: 0x10055a6f0 | FUN_10055a6f0 */

undefined1  [16] FUN_10055a6f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._9_7_ = 0;
  auVar1._0_9_ = *(unkuint9 *)(unaff_x20 + 0x28);
  return auVar1;
}



/* Address: 0x10055a6fc | FUN_10055a6fc */

void FUN_10055a6fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 2) = param_4;
  param_1[3] = param_5;
  *(undefined1 *)(param_1 + 4) = param_6;
  param_1[5] = param_7;
  *(undefined1 *)(param_1 + 6) = param_8;
  return;
}


