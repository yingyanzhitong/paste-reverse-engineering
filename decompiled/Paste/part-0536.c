/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10061d300 | FUN_10061d300 */

void FUN_10061d300(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,code *param_6)

{
  (**(code **)(param_5 + 0x28))(param_3,param_5);
  (*param_6)(param_1,param_2,param_4);
  _swift_release(param_3);
  return;
}



/* Address: 0x10061d360 | FUN_10061d360 */

void FUN_10061d360(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d374(param_1,param_2,FUN_10061de30,FUN_10062ab88);
  return;
}



/* Address: 0x10061d374 | FUN_10061d374 */

void FUN_10061d374(long param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  (**(code **)(param_2 + 0x28))();
  uVar1 = *(ulong *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 0x38);
  _swift_getObjectType();
  uVar2 = uVar1;
  (**(code **)(lVar4 + 0x10))();
  lVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    pcVar5 = *(code **)(lVar4 + 0x18);
    _swift_retain(param_1);
    (*pcVar5)(param_3,param_1,uVar1,lVar4);
  }
  else {
    if ((*(long *)(param_1 + 0x18) == 0) ||
       (lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x18), lVar4 == 0)) goto LAB_10061d40c;
    _swift_retain(lVar4);
    (*param_4)();
    lVar3 = lVar4;
  }
  _swift_release(param_1);
LAB_10061d40c:
  _swift_release(lVar3);
  return;
}



/* Address: 0x10061d424 | FUN_10061d424 */

void FUN_10061d424(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) != 0) {
    FUN_10062a478(param_1);
    return;
  }
  uVar3 = *(undefined8 *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType(uVar3);
  puVar4 = &DAT_100eeb938;
  _swift_allocObject(&DAT_100eeb938,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_retain(lVar5);
  (*pcVar6)(thunk_FUN_10061de38,puVar4,uVar3,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10061d4f8 | FUN_10061d4f8 */

void FUN_10061d4f8(undefined8 param_1,undefined *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  (**(code **)(param_3 + 0x28))(param_2,param_3);
  uVar2 = *(ulong *)(param_2 + 0x30);
  lVar1 = *(long *)(param_2 + 0x38);
  _swift_getObjectType();
  (**(code **)(lVar1 + 0x10))();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    lVar1 = *(long *)(param_2 + 0x38);
    _swift_getObjectType(uVar3);
    puVar4 = &DAT_100eeb650;
    _swift_allocObject(&DAT_100eeb650,0x20,7);
    *(undefined **)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_1;
    pcVar5 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_retain(param_2);
    (*pcVar5)(FUN_10061de38,puVar4,uVar3,lVar1);
    _swift_release(param_2);
  }
  else {
    FUN_10062a478(param_1);
    puVar4 = param_2;
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x10061d5d4 | FUN_10061d5d4 */

void FUN_10061d5d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7140 != -1) {
    _swift_once(&DAT_100fd7140,FUN_10061da20);
  }
  uVar4 = DAT_101057bf0;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eeb678;
  _swift_allocObject(&DAT_100eeb678,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10061d704 | FUN_10061d704 */

void FUN_10061d704(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  (**(code **)(param_4 + 0x28))(param_3,param_4);
  FUN_1006276a0(param_1,param_2);
  _swift_release(param_3);
  return;
}



/* Address: 0x10061d750 | FUN_10061d750 */

undefined8 FUN_10061d750(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_2;
  (**(code **)(*(long *)(param_4 + 8) + 0x50))(param_2);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x80);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,uVar2,param_3,param_2,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10061d814 | FUN_10061d814 */

undefined8 FUN_10061d814(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_2;
  (**(code **)(*(long *)(param_4 + 8) + 0x50))(param_2);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x90);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,uVar2,param_3,param_2,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10061d8d8 | FUN_10061d8d8 */

void FUN_10061d8d8(undefined8 param_1)

{
  undefined8 in_x3;
  
  FUN_100004520(in_x3);
  FUN_10065af64(param_1);
  return;
}



/* Address: 0x10061d918 | FUN_10061d918 */

void FUN_10061d918(void)

{
  undefined8 in_x3;
  
  FUN_10065b0ac(in_x3,in_x3);
  return;
}



/* Address: 0x10061d940 | FUN_10061d940 */

void FUN_10061d940(undefined8 param_1,long param_2)

{
  _swift_getObjectType();
  (**(code **)(param_2 + 0x28))();
  FUN_1006277c4();
  _swift_release(param_1);
  return;
}



/* Address: 0x10061d97c | FUN_10061d97c */

void FUN_10061d97c(void)

{
  FUN_1006277c4();
  return;
}



/* Address: 0x10061d99c | FUN_10061d99c */

void FUN_10061d99c(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057c10,3);
  return;
}



/* Address: 0x10061d9ac | FUN_10061d9ac */

void FUN_10061d9ac(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057c00,5);
  return;
}



/* Address: 0x10061d9bc | FUN_10061d9bc */

void FUN_10061d9bc(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057be8,2);
  return;
}



/* Address: 0x10061d9cc | FUN_10061d9cc */

undefined8 FUN_10061d9cc(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar1 = DAT_101057be8;
  _swift_errorRetain(DAT_101057be8);
  return uVar1;
}



/* Address: 0x10061da20 | FUN_10061da20 */

void FUN_10061da20(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057bf0,1);
  return;
}



/* Address: 0x10061da30 | FUN_10061da30 */

void FUN_10061da30(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057bf8,4);
  return;
}



/* Address: 0x10061da40 | FUN_10061da40 */

void FUN_10061da40(undefined8 param_1)

{
  FUN_10061da50(param_1,&DAT_101057c08,0xd);
  return;
}



/* Address: 0x10061da50 | FUN_10061da50 */

void FUN_10061da50(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_10061e4f8();
  puVar1 = &DAT_100eeb710;
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_2 = puVar1;
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}



/* Address: 0x10061da9c | thunk_FUN_10061dfe8 */

ulong thunk_FUN_10061dfe8(ulong param_1,byte param_2,ulong param_3,char param_4)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_4 == '\0') {
        return (ulong)(param_1 == param_3);
      }
    }
    else if (param_4 == '\x01') {
      FUN_1006689fc(param_1,param_3);
      return param_1;
    }
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010061e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10061e054 + (ulong)(byte)(&DAT_100c684be)[param_1] * 4))();
      return param_1;
    }
    if (param_4 == '\x02') {
      FUN_1006588ec(param_1,param_3);
      return param_1;
    }
  }
  return 0;
}



/* Address: 0x10061daa0 | FUN_10061daa0 */

void FUN_10061daa0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_10061dfe8(*param_1,*(undefined1 *)(param_1 + 1),*param_2,*(undefined1 *)(param_2 + 1));
  return;
}



/* Address: 0x10061dab8 | FUN_10061dab8 */

undefined1  [16] FUN_10061dab8(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  char *local_38;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar1 = (uint)param_2.unknown & 0xff;
  if (uVar1 == 1 || ((ulong)param_2.unknown & 0xff) == 0) {
    if (((ulong)param_2.unknown & 0xff) == 0) {
      local_30 = 0;
      local_28 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x14,param_2);
      _swift_bridgeObjectRelease(local_28);
      local_30 = 0xd000000000000011;
      local_28 = 0x8000000100daeee0;
      FUN_100640188();
      SVar5.bridgeObject = param_2.unknown;
      SVar5.str = param_1;
      SVar10.bridgeObject = param_4;
      SVar10.str = param_3;
      Swift::String::append(SVar5,SVar10);
      _swift_bridgeObjectRelease(param_2.unknown);
      SVar6.bridgeObject = (void *)0xe100000000000000;
      SVar6.str = (char *)0x29;
      SVar11.bridgeObject = param_4;
      SVar11.str = param_3;
      Swift::String::append(SVar6,SVar11);
    }
    else {
      local_30 = 0;
      local_28 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(local_28);
      local_30 = 0xd00000000000001a;
      local_28 = 0x8000000100daedd0;
      FUN_100666bcc();
      SVar8.bridgeObject = param_2.unknown;
      SVar8.str = param_1;
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar8,SVar13);
      _swift_bridgeObjectRelease(param_2.unknown);
    }
  }
  else {
    if (uVar1 != 2) {
      uVar4 = 0xef676e69646e6570;
      uVar3 = 0x207463656e6e6f43;
                    /* WARNING: Could not recover jumptable at 0x00010061dc60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)param_1[0x100c684b0] * 4 + 0x10061dc1c))
                (0x207463656e6e6f43,0xef676e69646e6570);
      auVar9._8_8_ = uVar4;
      auVar9._0_8_ = uVar3;
      return auVar9;
    }
    local_30 = 0;
    local_28 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x27,param_2);
    SVar7.bridgeObject = (void *)0x8000000100daeda0;
    SVar7.str = (char *)0xd000000000000025;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar7,SVar12);
    uVar3 = 0;
    local_38 = param_1;
    FUN_100658d78(0);
    Swift::__print_unlocked
              (&local_38,&local_30,uVar3,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
  }
  auVar2._8_8_ = local_28;
  auVar2._0_8_ = local_30;
  return auVar2;
}



/* Address: 0x10061ddf0 | FUN_10061ddf0 */

void FUN_10061ddf0(void)

{
  undefined8 *unaff_x20;
  
  FUN_10061dab8(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x10061ddfc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10061de00 | FUN_10061de00 */

void FUN_10061de00(void)

{
  long unaff_x20;
  
  FUN_100629ea4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061de10 | FUN_10061de10 */

void FUN_10061de10(void)

{
  long unaff_x20;
  
  FUN_10062a424(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061de1c | FUN_10061de1c */

void FUN_10061de1c(void)

{
  long unaff_x20;
  
  FUN_10062a45c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10061de28 | FUN_10061de28 */

void FUN_10061de28(void)

{
  FUN_10062a008();
  return;
}



/* Address: 0x10061de30 | FUN_10061de30 */

void FUN_10061de30(void)

{
  FUN_10062a014();
  return;
}



/* Address: 0x10061de38 | FUN_10061de38 */

void FUN_10061de38(void)

{
  long unaff_x20;
  
  FUN_10062a5d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10061de40 | FUN_10061de40 */

void FUN_10061de40(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061d750(param_1,*unaff_x20,param_2);
  return;
}



/* Address: 0x10061de4c | FUN_10061de4c */

void FUN_10061de4c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_10061d278(param_1,param_2,*unaff_x20,param_3);
  return;
}



/* Address: 0x10061de58 | FUN_10061de58 */

void FUN_10061de58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061d814(param_1,*unaff_x20,param_2);
  return;
}



/* Address: 0x10061de64 | FUN_10061de64 */

void FUN_10061de64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_10061d2f4(param_1,param_2,*unaff_x20,param_3);
  return;
}



/* Address: 0x10061de70 | FUN_10061de70 */

void FUN_10061de70(void)

{
  FUN_10061d424();
  return;
}



/* Address: 0x10061de90 | FUN_10061de90 */

void FUN_10061de90(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d05c(param_1,param_2,FUN_10062a408,&DAT_100eeb910,thunk_FUN_10061de10);
  return;
}



/* Address: 0x10061dec8 | FUN_10061dec8 */

void FUN_10061dec8(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d05c(param_1,param_2,FUN_10062a440,&DAT_100eeb8e8,thunk_FUN_10061de1c);
  return;
}



/* Address: 0x10061df00 | FUN_10061df00 */

void FUN_10061df00(void)

{
  FUN_100627114();
  return;
}



/* Address: 0x10061df24 | FUN_10061df24 */

void FUN_10061df24(void)

{
  FUN_10062714c();
  return;
}



/* Address: 0x10061df48 | FUN_10061df48 */

void FUN_10061df48(void)

{
  FUN_100627160();
  return;
}



/* Address: 0x10061df6c | FUN_10061df6c */

void FUN_10061df6c(void)

{
  FUN_100627440();
  return;
}



/* Address: 0x10061df90 | FUN_10061df90 */

void FUN_10061df90(void)

{
  FUN_10061ce30();
  return;
}



/* Address: 0x10061dfb0 | FUN_10061dfb0 */

void FUN_10061dfb0(void)

{
  FUN_1006276a0();
  return;
}



/* Address: 0x10061dfd4 | FUN_10061dfd4 */

void FUN_10061dfd4(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x10061dfe0 | FUN_10061dfe0 */

void FUN_10061dfe0(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10061dfe8 | FUN_10061dfe8 */

ulong FUN_10061dfe8(ulong param_1,byte param_2,ulong param_3,char param_4)

{
  if (param_2 < 2) {
    if (param_2 == 0) {
      if (param_4 == '\0') {
        return (ulong)(param_1 == param_3);
      }
    }
    else if (param_4 == '\x01') {
      FUN_1006689fc(param_1,param_3);
      return param_1;
    }
  }
  else {
    if (param_2 != 2) {
                    /* WARNING: Could not recover jumptable at 0x00010061e050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_10061e054 + (ulong)(byte)(&DAT_100c684be)[param_1] * 4))();
      return param_1;
    }
    if (param_4 == '\x02') {
      FUN_1006588ec(param_1,param_3);
      return param_1;
    }
  }
  return 0;
}



/* Address: 0x10061e1e0 | thunk_FUN_10061e1e4 */

void thunk_FUN_10061e1e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6865c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6865c,&DAT_100eeb880);
  DAT_100fd7148 = pTVar1;
  return;
}



/* Address: 0x10061e1e4 | FUN_10061e1e4 */

void FUN_10061e1e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6865c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6865c,&DAT_100eeb880);
  DAT_100fd7148 = pTVar1;
  return;
}



/* Address: 0x10061e224 | FUN_10061e224 */

undefined8 * FUN_10061e224(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10061e268(uVar2,uVar1);
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return param_1;
}



/* Address: 0x10061e268 | FUN_10061e268 */

void FUN_10061e268(ulong param_1,char param_2)

{
  if (param_2 != '\x02') {
    if (param_2 != '\x01') {
      return;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x10061e288 | FUN_10061e288 */

void FUN_10061e288(undefined8 *param_1)

{
  FUN_10061e298(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10061e298 | FUN_10061e298 */

void FUN_10061e298(ulong param_1,char param_2)

{
  if (param_2 != '\x02') {
    if (param_2 != '\x01') {
      return;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
  _swift_release(param_1);
  return;
}



/* Address: 0x10061e2b8 | FUN_10061e2b8 */

undefined8 * FUN_10061e2b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_10061e268(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10061e298(uVar3,uVar2);
  return param_1;
}



/* Address: 0x10061e308 | FUN_10061e308 */

undefined8 * FUN_10061e308(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  FUN_10061e298(uVar3,uVar2);
  return param_1;
}



/* Address: 0x10061e344 | FUN_10061e344 */

uint FUN_10061e344(int *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1 + 3;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = (uint)*(byte *)(param_1 + 2);
  }
  return uVar1;
}



/* Address: 0x10061e35c | FUN_10061e35c */

void FUN_10061e35c(ulong *param_1,uint param_2)

{
  if (2 < param_2) {
    *param_1 = (ulong)(param_2 - 3);
    param_2 = 3;
  }
  *(char *)(param_1 + 1) = (char)param_2;
  return;
}



/* Address: 0x10061e374 | FUN_10061e374 */

undefined1  [16] FUN_10061e374(void)

{
  return ZEXT816(0x100eeb710);
}



/* Address: 0x10061e384 | FUN_10061e384 */

undefined1  [16] FUN_10061e384(void)

{
  return ZEXT816(0x100eeb730);
}



/* Address: 0x10061e394 | FUN_10061e394 */

undefined1  [16] FUN_10061e394(void)

{
  return ZEXT816(0x100eeb750);
}



/* Address: 0x10061e3a4 | FUN_10061e3a4 */

undefined1  [16] FUN_10061e3a4(void)

{
  return ZEXT816(0x100eeb770);
}



/* Address: 0x10061e3b4 | thunk_FUN_10061e3e8 */

ulong * thunk_FUN_10061e3e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_retain(uVar2 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x10061e3b8 | FUN_10061e3b8 */

void FUN_10061e3b8(ulong *param_1)

{
  _swift_release(*param_1 & 0x3fffffffffffffff);
  _swift_release(param_1[1] & 0x3fffffffffffffff);
  return;
}


