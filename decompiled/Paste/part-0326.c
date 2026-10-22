/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10040aff0 | FUN_10040aff0 */

void FUN_10040aff0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5158 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b04,&DAT_100ed2668);
  DAT_100fc5158 = pTVar1;
  return;
}



/* Address: 0x10040b030 | thunk_FUN_10040b034 */

void thunk_FUN_10040b034(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5160 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47be4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47be4,&DAT_100ed25d8);
  DAT_100fc5160 = pTVar1;
  return;
}



/* Address: 0x10040b034 | FUN_10040b034 */

void FUN_10040b034(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5160 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47be4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47be4,&DAT_100ed25d8);
  DAT_100fc5160 = pTVar1;
  return;
}



/* Address: 0x10040b074 | thunk_FUN_10040b078 */

void thunk_FUN_10040b078(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5168 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47bbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47bbc,&DAT_100ed25d8);
  DAT_100fc5168 = pTVar1;
  return;
}



/* Address: 0x10040b078 | FUN_10040b078 */

void FUN_10040b078(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5168 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47bbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47bbc,&DAT_100ed25d8);
  DAT_100fc5168 = pTVar1;
  return;
}



/* Address: 0x10040b0b8 | FUN_10040b0b8 */

undefined8 FUN_10040b0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5198;
  FUN_1000037f0(&DAT_100fc5198,&DAT_100c483a8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10040b108 | FUN_10040b108 */

void FUN_10040b108(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc51b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47960;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47960,&DAT_100ed2238);
  DAT_100fc51b8 = pTVar1;
  return;
}



/* Address: 0x10040b148 | thunk_FUN_1004062e4 */

void thunk_FUN_1004062e4(void)

{
  thunk_FUN_1004062e4();
  return;
}



/* Address: 0x10040b14c | thunk_FUN_1000d1c60 */

void thunk_FUN_1000d1c60(void)

{
  FUN_1000d1c60();
  return;
}



/* Address: 0x10040b150 | thunk_FUN_1000d1c84 */

void thunk_FUN_1000d1c84(void)

{
  thunk_FUN_1000d1c84();
  return;
}



/* Address: 0x10040b154 | thunk_FUN_10002cec8 */

void thunk_FUN_10002cec8(void)

{
  thunk_FUN_10002cec8();
  return;
}



/* Address: 0x10040b158 | thunk_FUN_1000d20b4 */

void thunk_FUN_1000d20b4(void)

{
  thunk_FUN_1000d20b4();
  return;
}



/* Address: 0x10040b15c | thunk_FUN_1000dd380 */

void thunk_FUN_1000dd380(void)

{
  FUN_1000dd380();
  return;
}



/* Address: 0x10040b160 | thunk_FUN_1000d1c20 */

void thunk_FUN_1000d1c20(void)

{
  thunk_FUN_1000d1c20();
  return;
}



/* Address: 0x10040b164 | thunk_FUN_100086244 */

void thunk_FUN_100086244(void)

{
  thunk_FUN_100086244();
  return;
}



/* Address: 0x10040b168 | thunk_FUN_1000d2064 */

void thunk_FUN_1000d2064(void)

{
  thunk_FUN_1000d2064();
  return;
}



/* Address: 0x10040b16c | FUN_10040b16c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040b16c(Continuation *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  objc_super local_70;
  
  puVar2 = &DAT_100fc5280;
  local_78 = param_6;
  FUN_1000037f0(&DAT_100fc5280,&DAT_100c48468);
  lVar10 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -extraout_x8,param_1,puVar2);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ed27e8;
  _swift_allocObject(&DAT_100ed27e8,uVar8 + lVar9,uVar7 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar8,auStack_80 + -extraout_x8,puVar2);
  pcVar4 = (class_t *)&DAT_100fc5288;
  FUN_1000037f0(&DAT_100fc5288,&DAT_100c48470);
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b50);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b58);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b60);
  *puVar1 = FUN_10040d4ac;
  puVar1[1] = puVar3;
  local_70.receiver = (ID)pcVar5;
  local_70.super_class = pcVar4;
  _swift_retain(param_3);
  _swift_retain(param_5);
  IVar6 = _objc_msgSendSuper2(&local_70,"init");
  lVar9 = local_78 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    FUN_10040ddd4(IVar6,lVar9);
  }
  puVar2 = &DAT_100ed2810;
  _swift_allocObject(&DAT_100ed2810,0x18,7);
  *(ID *)(puVar2 + 0x10) = IVar6;
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  return;
}



/* Address: 0x10040b338 | FUN_10040b338 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040b338(Continuation *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  objc_super local_70;
  
  puVar2 = &DAT_100fc5340;
  local_78 = param_6;
  FUN_1000037f0(&DAT_100fc5340,&DAT_100c48528);
  lVar10 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -extraout_x8,param_1,puVar2);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ed2928;
  _swift_allocObject(&DAT_100ed2928,uVar8 + lVar9,uVar7 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar8,auStack_80 + -extraout_x8,puVar2);
  pcVar4 = (class_t *)&DAT_100fc5348;
  FUN_1000037f0(&DAT_100fc5348,&DAT_100c48530);
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b50);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b58);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4b60);
  *puVar1 = FUN_10040ec40;
  puVar1[1] = puVar3;
  local_70.receiver = (ID)pcVar5;
  local_70.super_class = pcVar4;
  _swift_retain(param_3);
  _swift_retain(param_5);
  IVar6 = _objc_msgSendSuper2(&local_70,"init");
  lVar9 = local_78 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    FUN_10040ddd4(IVar6,lVar9);
  }
  puVar2 = &DAT_100ed2950;
  _swift_allocObject(&DAT_100ed2950,0x18,7);
  *(ID *)(puVar2 + 0x10) = IVar6;
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  return;
}



/* Address: 0x10040b504 | FUN_10040b504 */

void FUN_10040b504(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  
  puVar1 = &DAT_100fc5278;
  FUN_1000037f0(&DAT_100fc5278,&DAT_100c48460);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fc5290;
  FUN_1000037f0(&DAT_100fc5290,&DAT_100c48478);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,puVar3,&DAT_100fc5278,&DAT_100c48460);
  puVar2 = &DAT_100fc5280;
  FUN_1000037f0(&DAT_100fc5280,&DAT_100c48468);
  Swift::AsyncStream::Continuation::_yield((long)puVar3 - extraout_x8_00,puVar3,puVar2);
  (**(code **)(lVar4 + 8))((long)puVar3 - extraout_x8_00,puVar1);
  return;
}



/* Address: 0x10040b60c | FUN_10040b60c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040b60c(Continuation *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  objc_super local_70;
  
  puVar2 = &DAT_100fc52b0;
  local_78 = param_6;
  FUN_1000037f0(&DAT_100fc52b0,&DAT_100c48498);
  lVar10 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -extraout_x8,param_1,puVar2);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ed2860;
  _swift_allocObject(&DAT_100ed2860,uVar8 + lVar9,uVar7 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar8,auStack_80 + -extraout_x8,puVar2);
  pcVar4 = (class_t *)&DAT_100fc52b8;
  FUN_1000037f0(&DAT_100fc52b8,&DAT_100c484a0);
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d20);
  *puVar1 = FUN_10040dd1c;
  puVar1[1] = puVar3;
  local_70.receiver = (ID)pcVar5;
  local_70.super_class = pcVar4;
  _swift_retain(param_3);
  _swift_retain(param_5);
  IVar6 = _objc_msgSendSuper2(&local_70,"init");
  lVar9 = local_78 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    FUN_10040ddd4(IVar6,lVar9);
  }
  puVar2 = &DAT_100ed2888;
  _swift_allocObject(&DAT_100ed2888,0x18,7);
  *(ID *)(puVar2 + 0x10) = IVar6;
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  return;
}



/* Address: 0x10040b7d8 | FUN_10040b7d8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040b7d8(Continuation *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  class_t *pcVar4;
  class_t *pcVar5;
  ID IVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78;
  objc_super local_70;
  
  puVar2 = &DAT_100fc5360;
  local_78 = param_6;
  FUN_1000037f0(&DAT_100fc5360,&DAT_100c48548);
  lVar10 = *(long *)(puVar2 + -8);
  lVar9 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(auStack_80 + -extraout_x8,param_1,puVar2);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar8 = uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100ed2978;
  _swift_allocObject(&DAT_100ed2978,uVar8 + lVar9,uVar7 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar8,auStack_80 + -extraout_x8,puVar2);
  pcVar4 = (class_t *)&DAT_100fc5368;
  FUN_1000037f0(&DAT_100fc5368,&DAT_100c48550);
  pcVar5 = pcVar4;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d18);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)((long)&pcVar5->isa + DAT_100fc4d20);
  *puVar1 = FUN_10040ecf0;
  puVar1[1] = puVar3;
  local_70.receiver = (ID)pcVar5;
  local_70.super_class = pcVar4;
  _swift_retain(param_3);
  _swift_retain(param_5);
  IVar6 = _objc_msgSendSuper2(&local_70,"init");
  lVar9 = local_78 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar9 != 0) {
    FUN_10040ddd4(IVar6,lVar9);
  }
  puVar2 = &DAT_100ed29a0;
  _swift_allocObject(&DAT_100ed29a0,0x18,7);
  *(ID *)(puVar2 + 0x10) = IVar6;
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  return;
}



/* Address: 0x10040b9a4 | FUN_10040b9a4 */

void FUN_10040b9a4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar3;
  long lVar4;
  
  puVar1 = &DAT_100fc52a8;
  FUN_1000037f0(&DAT_100fc52a8,&DAT_100c48490);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffb0 + -extraout_x8;
  puVar1 = &DAT_100fc52c0;
  FUN_1000037f0(&DAT_100fc52c0,&DAT_100c484a8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100011090(param_1,puVar3,&DAT_100fc52a8,&DAT_100c48490);
  puVar2 = &DAT_100fc52b0;
  FUN_1000037f0(&DAT_100fc52b0,&DAT_100c48498);
  Swift::AsyncStream::Continuation::_yield((long)puVar3 - extraout_x8_00,puVar3,puVar2);
  (**(code **)(lVar4 + 8))((long)puVar3 - extraout_x8_00,puVar1);
  return;
}



/* Address: 0x10040baac | FUN_10040baac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10040baac(void)

{
  return ZEXT816(0x100fc5200);
}



/* Address: 0x10040bacc | FUN_10040bacc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10040bacc(void)

{
  undefined *puVar1;
  int iVar2;
  Component CVar3;
  DateComponents DVar4;
  Calendar CVar5;
  Date DVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined7 extraout_var;
  NSDateComponents *pNVar10;
  ID IVar11;
  long extraout_x8;
  long lVar12;
  long extraout_x8_00;
  long lVar13;
  long lVar14;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  Date from;
  undefined8 *puVar18;
  ulong uVar19;
  long lVar20;
  undefined *apuStack_a0 [4];
  long local_80;
  long local_78;
  
  DVar4 = Foundation::DateComponents::typeMetadataAccessor();
  local_80 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar13 = (long)apuStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar13;
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  lVar12 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  from.unknown = (undefined *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  lVar7 = 0;
  FUN_100408dd0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  puVar18 = (undefined8 *)(from.unknown + -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_10040ebe8();
  puVar8 = puVar18;
  _swift_getEnumCaseMultiPayload(puVar18,lVar7);
  if ((int)puVar8 == 1) {
    puVar9 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar2 = *(int *)(puVar9 + 0x30);
    apuStack_a0[3] = DVar6.unknown;
    (**(code **)(lVar14 + 0x20))(from.unknown,puVar18,DVar6.unknown);
    (**(code **)(lVar12 + 0x20))(lVar13,(undefined *)((long)puVar18 + (long)iVar2),CVar5.unknown);
    puVar9 = &DAT_100fc5320;
    FUN_1000037f0(&DAT_100fc5320,&DAT_100c48518);
    CVar3 = Foundation::Calendar::Component::typeMetadataAccessor();
    lVar7 = CONCAT71(extraout_var,CVar3.value);
    lVar16 = *(long *)(lVar7 + -8);
    lVar20 = *(long *)(lVar16 + 0x48);
    uVar15 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar19 = uVar15 + 0x20 & (uVar15 ^ 0xffffffffffffffff);
    apuStack_a0[1] = DVar4.unknown;
    apuStack_a0[2] = CVar5.unknown;
    _swift_allocObject(puVar9,uVar19 + lVar20 * 6,uVar15 | 7);
    *(undefined8 *)(puVar9 + 0x18) = 0xc;
    *(undefined8 *)(puVar9 + 0x10) = 6;
    puVar1 = puVar9 + uVar19;
    pcVar17 = *(code **)(lVar16 + 0x68);
    (*pcVar17)(puVar1,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_year_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7638
               ,lVar7);
    (*pcVar17)(puVar1 + lVar20,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_month_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7640
               ,lVar7);
    (*pcVar17)(puVar1 + lVar20 * 2,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
               ,lVar7);
    (*pcVar17)(puVar1 + lVar20 * 3,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_hour_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7630
               ,lVar7);
    (*pcVar17)(puVar1 + lVar20 * 4,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_minute_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7648
               ,lVar7);
    (*pcVar17)(puVar1 + lVar20 * 5,
               *(undefined4 *)
                PTR___enum_case_for_Foundation_Calendar_Component_second_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7650
               ,lVar7);
    DVar4.unknown = puVar9;
    FUN_10040e110();
    _swift_setDeallocating(puVar9);
    _swift_arrayDestroy(puVar1,6,lVar7);
    CVar5.unknown = (undefined *)0x7;
    _swift_deallocClassInstance(puVar9,0x20);
    lVar7 = local_78;
    Foundation::Calendar::dateComponents((Set<Component>)DVar4.unknown,from,CVar5);
    _swift_bridgeObjectRelease();
    pNVar10 = Foundation::DateComponents::_bridgeToObjectiveC(DVar4);
    IVar11 = objc_stub::FUN_100c10be0((ID)&_OBJC_CLASS___UNCalendarNotificationTrigger,pNVar10,0);
    (**(code **)(local_80 + 8))(lVar7,apuStack_a0[1]);
    (**(code **)(lVar12 + 8))(lVar13,apuStack_a0[2]);
    (**(code **)(lVar14 + 8))(from.unknown,apuStack_a0[3]);
    return IVar11;
  }
  IVar11 = objc_stub::FUN_100c10c00((ID)&_OBJC_CLASS___UNTimeIntervalNotificationTrigger,*puVar18,0)
  ;
  return IVar11;
}



/* Address: 0x10040be80 | FUN_10040be80 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040be80(long param_1,long param_2)

{
  undefined *puVar1;
  long local_28;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  if (param_2 == 0) {
    FUN_1000037f0(&DAT_100fc5308,&DAT_100c484f8);
    Swift::CheckedContinuation::resume();
  }
  else {
    puVar1 = &DAT_100fc5308;
    local_28 = param_2;
    FUN_1000037f0(&DAT_100fc5308,&DAT_100c484f8);
    Swift::CheckedContinuation::resume(&local_28,puVar1);
  }
  return;
}



/* Address: 0x10040bf14 | FUN_10040bf14 */

void FUN_10040bf14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  ID self;
  long unaff_x22;
  long lVar5;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  puVar1 = &DAT_100fc52d0;
  FUN_1000037f0(&DAT_100fc52d0,&DAT_100c484c0);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  lVar4 = 0;
  FUN_100408ee8();
  *(long *)(unaff_x22 + 0x128) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x130) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x138) = uVar3;
  puVar1 = &DAT_100fc52f0;
  FUN_1000037f0(&DAT_100fc52f0,&DAT_100c484e0);
  lVar5 = *(long *)(puVar1 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar3;
  FUN_1000da768(unaff_x22 + 0x100);
  self = *(ID *)(unaff_x22 + 0x100);
  *(ID *)(unaff_x22 + 0x148) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10040c0dc;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  lVar4 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar4);
  FUN_1000037f0(&DAT_100fc52f8,&DAT_100c48d20);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar5 + 0x20))(lVar4,uVar3,puVar1);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10040c5b8;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ed28c8;
  objc_stub::getPendingNotificationRequestsWithCompletionHandler_(self);
  (**(code **)(lVar5 + 8))(lVar4,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10040c0dc | FUN_10040c0dc */

void FUN_10040c0dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x110);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10040c12c,uVar1,uVar2);
  return;
}



/* Address: 0x10040c12c | FUN_10040c12c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010040c3c8) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010040c2cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10040c12c(void)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  ID IVar6;
  ID IVar7;
  Dictionary<undefined,undefined> DVar8;
  long lVar9;
  ulong uVar10;
  JSONDecoder *pJVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  long lVar15;
  Data DVar16;
  long unaff_x22;
  long lVar17;
  _ArrayBuffer _Var18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *local_68;
  
  _Var18.unknown = *(undefined **)(unaff_x22 + 0xf8);
  if ((ulong)_Var18.unknown >> 0x3e == 0) {
    lVar5 = *(long *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var18.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var18.unknown) {
      _Var2.unknown = _Var18.unknown;
    }
    lVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar5 != 0) {
    uVar19 = 0;
    lVar15 = *(long *)(unaff_x22 + 0x130);
    do {
      if (((ulong)_Var18.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var18.unknown & 0xffffffffffffff8) + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10040c540);
          (*pcVar4)();
        }
        IVar6 = *(ID *)(_Var18.unknown + uVar19 * 8 + 0x20);
      }
      else {
        IVar6 = uVar19;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar19,_Var18);
      }
      if (SCARRY8(uVar19,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10040c53c);
        (*pcVar4)();
      }
      lVar17 = uVar19 + 1;
      IVar7 = objc_stub::trigger(IVar6);
      if ((IVar7 == 0) ||
         (_swift_dynamicCastObjCClass(IVar7,&_OBJC_CLASS___UNPushNotificationTrigger), IVar7 == 0))
      {
        IVar6 = objc_stub::content(IVar6);
        objc_stub::userInfo(IVar6);
        DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
        *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000014;
        *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100da5da0;
        puVar14 = PTR___type_metadata_for_Swift_String_100eac208;
        Swift::AnyHashable::_init
                  (unaff_x22 + 0x90,DVar8.unknown,PTR___type_metadata_for_Swift_String_100eac208,
                   PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218
                  );
        if (*(long *)(DVar8.unknown + 0x10) == 0) {
LAB_10040c310:
          *(undefined8 *)(unaff_x22 + 0xd0) = 0;
          *(undefined8 *)(unaff_x22 + 200) = 0;
          *(undefined8 *)(unaff_x22 + 0xc0) = 0;
          *(undefined8 *)(unaff_x22 + 0xb8) = 0;
        }
        else {
          _swift_bridgeObjectRetain(DVar8.unknown);
          lVar9 = unaff_x22 + 0x90;
          FUN_1000f1290(lVar9);
          if (((ulong)puVar14 & 1) == 0) {
            _swift_bridgeObjectRelease(DVar8.unknown);
            goto LAB_10040c310;
          }
          FUN_10000cbfc(*(long *)(DVar8.unknown + 0x38) + lVar9 * 0x20,unaff_x22 + 0xb8);
          _swift_bridgeObjectRelease(DVar8.unknown);
        }
        _swift_bridgeObjectRelease(DVar8.unknown);
        FUN_100089674(unaff_x22 + 0x90);
        if (*(long *)(unaff_x22 + 0xd0) == 0) {
          FUN_100005808(unaff_x22 + 0xb8,&DAT_100fc4ec0,&DAT_100c47720);
          goto LAB_10040c408;
        }
        uVar10 = unaff_x22 + 0xe8;
        _swift_dynamicCast(uVar10,unaff_x22 + 0xb8,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Foundation_Data_100ea7300,6);
        if ((uVar10 & 1) == 0) goto LAB_10040c408;
        DVar16.unknown = *(undefined **)(unaff_x22 + 0x128);
        uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0xf0);
        pJVar11 = Foundation::JSONDecoder::typeMetadataAccessor();
        _swift_allocObject(pJVar11,*(undefined4 *)(pJVar11 + 0x30),*(undefined2 *)(pJVar11 + 0x34));
        pJVar11 = Foundation::JSONDecoder::init(pJVar11);
        FUN_100003a00(&DAT_100fc5298,FUN_100408ee8,&TargetProtocolConformanceDescriptor_100c478a8);
        Foundation::JSONDecoder::_decode(pJVar11,DVar16);
        FUN_10003bf2c(uVar13,uVar12);
        _swift_release(pJVar11);
        uVar13 = 0;
      }
      else {
LAB_10040c408:
        uVar13 = 1;
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x128);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x118);
      (**(code **)(lVar15 + 0x38))(uVar20,uVar13,1,uVar3);
      FUN_10040eb54(uVar20,uVar12);
      (**(code **)(lVar15 + 0x30))(uVar12,1,uVar3);
      if ((int)uVar12 == 1) {
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0x120),&DAT_100fc52d0,&DAT_100c484c0);
      }
      else {
        FUN_10040eba4(*(undefined8 *)(unaff_x22 + 0x120),*(undefined8 *)(unaff_x22 + 0x138));
        puVar14 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar14 & 1) == 0) {
          plVar1 = (long *)(local_68 + 0x10);
          local_68 = (undefined *)0x0;
          FUN_10041000c(0,*plVar1 + 1,1);
        }
        uVar10 = *(ulong *)(local_68 + 0x10);
        if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar10) {
          puVar14 = (undefined *)(ulong)(1 < *(ulong *)(local_68 + 0x18));
          FUN_10041000c(puVar14,uVar10 + 1,1,local_68);
          local_68 = puVar14;
        }
        uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
        *(ulong *)(local_68 + 0x10) = uVar10 + 1;
        FUN_10040eba4(uVar13,local_68 +
                             *(long *)(lVar15 + 0x48) * uVar10 +
                             ((ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff)));
      }
      uVar19 = uVar19 + 1;
    } while (lVar17 != lVar5);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_bridgeObjectRelease(_Var18.unknown);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar12);
                    /* WARNING: Could not recover jumptable at 0x00010040c5b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(local_68);
  return;
}



/* Address: 0x10040c5b8 | FUN_10040c5b8 */

void FUN_10040c5b8(undefined8 param_1,undefined8 param_2)

{
  FUN_10040cd4c(param_1,param_2,&DAT_100fc5300,&PTR__OBJC_CLASS___UNNotificationRequest_100f8dc70,
                &DAT_100fc52f0,&DAT_100c484e0);
  return;
}



/* Address: 0x10040c5dc | FUN_10040c5dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010040c7f4) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010040c700 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10040c5dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  Dictionary<undefined,undefined> DVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  JSONDecoder *pJVar8;
  Data DVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  ID unaff_x20;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  
  IVar3 = objc_stub::trigger(unaff_x20);
  if ((IVar3 != 0) &&
     (_swift_dynamicCastObjCClass(IVar3,&_OBJC_CLASS___UNPushNotificationTrigger), IVar3 != 0)) {
    lVar4 = 0;
    FUN_100408ee8();
                    /* WARNING: Could not recover jumptable at 0x00010040c66c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar4 + -8) + 0x38))(param_1,1,1,lVar4);
    return;
  }
  IVar3 = objc_stub::content(unaff_x20);
  objc_stub::userInfo(IVar3);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  DVar5 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  local_98 = 0xd000000000000014;
  uStack_90 = 0x8000000100da5da0;
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  Swift::AnyHashable::_init
            (auStack_88,DVar5.unknown,PTR___type_metadata_for_Swift_String_100eac208,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  if (*(long *)(DVar5.unknown + 0x10) == 0) {
LAB_10040c744:
    uStack_58 = 0;
    local_60 = 0;
    local_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_bridgeObjectRetain(DVar5.unknown);
    puVar6 = auStack_88;
    FUN_1000f1290(puVar6);
    if (((ulong)puVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(DVar5.unknown);
      goto LAB_10040c744;
    }
    FUN_10000cbfc(*(long *)(DVar5.unknown + 0x38) + (long)puVar6 * 0x20,&local_60);
    _swift_bridgeObjectRelease(DVar5.unknown);
  }
  _swift_bridgeObjectRelease(DVar5.unknown);
  FUN_100089674(auStack_88);
  if (local_48 == 0) {
    FUN_100005808(&local_60,&DAT_100fc4ec0,&DAT_100c47720);
  }
  else {
    puVar7 = &local_98;
    _swift_dynamicCast(puVar7,&local_60,puVar1 + 8,PTR___type_metadata_for_Foundation_Data_100ea7300
                       ,6);
    uVar2 = uStack_90;
    uVar11 = local_98;
    if (((ulong)puVar7 & 1) != 0) {
      pJVar8 = Foundation::JSONDecoder::typeMetadataAccessor();
      _swift_allocObject(pJVar8,*(undefined4 *)(pJVar8 + 0x30),*(undefined2 *)(pJVar8 + 0x34));
      pJVar8 = Foundation::JSONDecoder::init(pJVar8);
      DVar9.unknown = (undefined *)0x0;
      FUN_100408ee8();
      FUN_100003a00(&DAT_100fc5298,FUN_100408ee8,&TargetProtocolConformanceDescriptor_100c478a8);
      Foundation::JSONDecoder::_decode(pJVar8,DVar9);
      FUN_10003bf2c(uVar11,uVar2);
      _swift_release(pJVar8);
      pcVar12 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x38);
      uVar11 = 0;
      goto LAB_10040c88c;
    }
  }
  DVar9.unknown = (undefined *)0x0;
  FUN_100408ee8();
  pcVar12 = *(code **)(*(long *)(DVar9.unknown + -8) + 0x38);
  uVar11 = 1;
LAB_10040c88c:
  (*pcVar12)(param_1,uVar11,1,DVar9.unknown);
  return;
}



/* Address: 0x10040c8a8 | FUN_10040c8a8 */

void FUN_10040c8a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  UnsafeContinuation<undefined,undefined> continuation;
  ID self;
  long unaff_x22;
  long lVar5;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  puVar1 = &DAT_100fc52d0;
  FUN_1000037f0(&DAT_100fc52d0,&DAT_100c484c0);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb0) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  lVar4 = 0;
  FUN_100408ee8();
  *(long *)(unaff_x22 + 0xc0) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 200) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar3;
  puVar1 = &DAT_100fc52d8;
  FUN_1000037f0(&DAT_100fc52d8,&DAT_100c48d00);
  lVar5 = *(long *)(puVar1 + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  FUN_1000da768(unaff_x22 + 0x98);
  self = *(ID *)(unaff_x22 + 0x98);
  *(ID *)(unaff_x22 + 0xe0) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10040ca70;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined **)(unaff_x22 + 0x88) = puVar1;
  lVar4 = unaff_x22 + 0x70;
  FUN_10000cbb0(lVar4);
  FUN_1000037f0(&DAT_100fc52e0,&DAT_100c484d0);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar5 + 0x20))(lVar4,uVar3,puVar1);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(code **)(unaff_x22 + 0x60) = FUN_10040cd28;
  *(undefined **)(unaff_x22 + 0x68) = &DAT_100ed28a0;
  objc_stub::getDeliveredNotificationsWithCompletionHandler_(self);
  (**(code **)(lVar5 + 8))(lVar4,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10040ca70 | FUN_10040ca70 */

void FUN_10040ca70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0xa8);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_10040cac0,uVar1,uVar2);
  return;
}



/* Address: 0x10040cac0 | FUN_10040cac0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10040cac0(void)

{
  long *plVar1;
  _CocoaArrayWrapper _Var2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ID IVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long unaff_x22;
  ulong uVar13;
  undefined8 uVar14;
  _ArrayBuffer _Var15;
  undefined *local_60;
  
  _Var15.unknown = *(undefined **)(unaff_x22 + 0x90);
  if ((ulong)_Var15.unknown >> 0x3e == 0) {
    lVar12 = *(long *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var15.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var15.unknown) {
      _Var2.unknown = _Var15.unknown;
    }
    lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  local_60 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar12 != 0) {
    uVar13 = 0;
    lVar10 = *(long *)(unaff_x22 + 200);
    do {
      if (((ulong)_Var15.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var15.unknown & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10040ccac);
          (*pcVar6)();
        }
        IVar7 = *(ID *)(_Var15.unknown + uVar13 * 8 + 0x20);
      }
      else {
        IVar7 = uVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar13,_Var15);
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10040cca8);
        (*pcVar6)();
      }
      lVar11 = uVar13 + 1;
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xb0);
      IVar7 = objc_stub::request(IVar7);
      FUN_10040c5dc(uVar14,IVar7);
      FUN_10040eb54(uVar14,uVar8);
      (**(code **)(lVar10 + 0x30))(uVar8,1,uVar4);
      if ((int)uVar8 == 1) {
        FUN_100005808(*(undefined8 *)(unaff_x22 + 0xb8),&DAT_100fc52d0,&DAT_100c484c0);
      }
      else {
        FUN_10040eba4(*(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0xd0));
        puVar9 = local_60;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar9 & 1) == 0) {
          plVar1 = (long *)(local_60 + 0x10);
          local_60 = (undefined *)0x0;
          FUN_10041000c(0,*plVar1 + 1,1);
        }
        uVar3 = *(ulong *)(local_60 + 0x10);
        if (*(ulong *)(local_60 + 0x18) >> 1 <= uVar3) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_60 + 0x18));
          FUN_10041000c(puVar9,uVar3 + 1,1,local_60);
          local_60 = puVar9;
        }
        uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
        *(ulong *)(local_60 + 0x10) = uVar3 + 1;
        FUN_10040eba4(uVar8,local_60 +
                            *(long *)(lVar10 + 0x48) * uVar3 +
                            ((ulong)*(byte *)(lVar10 + 0x50) + 0x20 &
                            ((ulong)*(byte *)(lVar10 + 0x50) ^ 0xffffffffffffffff)));
      }
      uVar13 = uVar13 + 1;
    } while (lVar11 != lVar12);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  _swift_bridgeObjectRelease(_Var15.unknown);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010040cd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(local_60);
  return;
}



/* Address: 0x10040cd28 | FUN_10040cd28 */

void FUN_10040cd28(undefined8 param_1,undefined8 param_2)

{
  FUN_10040cd4c(param_1,param_2,&DAT_100fc52e8,&PTR__OBJC_CLASS___UNNotification_100f8dc68,
                &DAT_100fc52d8,&DAT_100c48d00);
  return;
}



/* Address: 0x10040cd4c | FUN_10040cd4c */

void FUN_10040cd4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 local_48;
  
  FUN_100004640(param_1 + 0x20,*(undefined8 *)(param_1 + 0x38));
  FUN_10000ec2c(0,param_3,param_4);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  local_48 = param_2;
  FUN_1000037f0(param_5,param_6);
  Swift::CheckedContinuation::resume(&local_48,param_5);
  return;
}



/* Address: 0x10040cddc | FUN_10040cddc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10040cddc(undefined8 param_1,undefined8 param_2)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc52a0;
  FUN_1000037f0(&DAT_100fc52a0,&DAT_100c48488);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_68);
  puVar3 = &DAT_100ed2838;
  _swift_allocObject(&DAT_100ed2838,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar4 = &DAT_100ed27c0;
  _swift_allocObject(&DAT_100ed27c0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,local_68);
  local_90 = thunk_FUN_10040d0b4;
  uStack_88 = 0;
  local_80 = thunk_FUN_10040dcbc;
  BVar1.value = -0x58;
  puStack_78 = puVar3;
  local_70 = puVar4;
  FUN_1000037f0(&DAT_100fc52a8,&DAT_100c48490);
  (**(code **)(lVar5 + 0x68))
            (auStack_a0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  _swift_bridgeObjectRetain(param_2);
  Swift::AsyncStream::_init(BVar1);
  _swift_release(puVar4);
  _swift_release(puVar3);
  return 0;
}



/* Address: 0x10040cf48 | FUN_10040cf48 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10040cf48(undefined8 param_1,undefined8 param_2)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc5270;
  FUN_1000037f0(&DAT_100fc5270,&DAT_100c48458);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_68);
  puVar3 = &DAT_100ed2798;
  _swift_allocObject(&DAT_100ed2798,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar4 = &DAT_100ed27c0;
  _swift_allocObject(&DAT_100ed27c0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,local_68);
  local_90 = thunk_FUN_10040d0b4;
  uStack_88 = 0;
  local_80 = thunk_FUN_10040dcbc;
  BVar1.value = 0x78;
  puStack_78 = puVar3;
  local_70 = puVar4;
  FUN_1000037f0(&DAT_100fc5278,&DAT_100c48460);
  (**(code **)(lVar5 + 0x68))
            (auStack_a0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  _swift_bridgeObjectRetain(param_2);
  Swift::AsyncStream::_init(BVar1);
  _swift_release(puVar4);
  _swift_release(puVar3);
  return 0;
}



/* Address: 0x10040d0b4 | FUN_10040d0b4 */

void FUN_10040d0b4(void)

{
  FUN_10040c5dc();
  return;
}



/* Address: 0x10040d0d4 | FUN_10040d0d4 */

void FUN_10040d0d4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10040d154;
  FUN_10040e3b8(param_1,param_2 & 0xcfffffffffffffff,param_3);
  return;
}



/* Address: 0x10040d154 | FUN_10040d154 */

void FUN_10040d154(undefined8 param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE_00;
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar1 + 8);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010040d1a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  _swift_bridgeObjectRetain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010040d1cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,param_2);
  return;
}



/* Address: 0x10040d1d0 | FUN_10040d1d0 */

void FUN_10040d1d0(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a7a2c;
  FUN_10040bf14(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10040d230 | FUN_10040d230 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10040d230(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  NSArray *pNVar2;
  ID local_38;
  
  FUN_1000da768(&local_38);
  puVar1 = &DAT_100fc52c8;
  FUN_1000037f0(&DAT_100fc52c8,&DAT_100c484b0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  objc_stub::removePendingNotificationRequestsWithIdentifiers_(local_38,pNVar2);
  return 0;
}



/* Address: 0x10040d2e8 | FUN_10040d2e8 */

void FUN_10040d2e8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1001a7a2c;
  FUN_10040c8a8(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x10040d348 | FUN_10040d348 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10040d348(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  NSArray *pNVar2;
  ID local_38;
  
  FUN_1000da768(&local_38);
  puVar1 = &DAT_100fc52c8;
  FUN_1000037f0(&DAT_100fc52c8,&DAT_100c484b0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  _swift_bridgeObjectRetain(param_2);
  pNVar2 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar1);
  objc_stub::removeDeliveredNotificationsWithIdentifiers_(local_38,pNVar2);
  return 0;
}



/* Address: 0x10040d400 | FUN_10040d400 */

void FUN_10040d400(void)

{
  FUN_10040cddc();
  return;
}



/* Address: 0x10040d420 | FUN_10040d420 */

void FUN_10040d420(void)

{
  FUN_10040cf48();
  return;
}



/* Address: 0x10040d440 | FUN_10040d440 */

void FUN_10040d440(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10040d464 | thunk_FUN_10040dcbc */

bool thunk_FUN_10040dcbc(undefined8 *param_1)

{
  bool bVar1;
  long unaff_x20;
  
  if ((undefined *)*param_1 != *(undefined **)(unaff_x20 + 0x10) ||
      (undefined *)param_1[1] != *(undefined **)(unaff_x20 + 0x18)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)*(undefined **)(unaff_x20 + 0x10));
    return bVar1;
  }
  return true;
}



/* Address: 0x10040d468 | FUN_10040d468 */

void FUN_10040d468(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10040d48c | FUN_10040d48c */

void FUN_10040d48c(undefined8 param_1)

{
  FUN_10040dcf4(param_1,FUN_10040b16c);
  return;
}



/* Address: 0x10040d498 | FUN_10040d498 */

void FUN_10040d498(void)

{
  FUN_10040ec9c(&DAT_100fc5280,&DAT_100c48468);
  return;
}



/* Address: 0x10040d4ac | FUN_10040d4ac */

void FUN_10040d4ac(undefined8 param_1)

{
  FUN_10040dd38(param_1,&DAT_100fc5280,&DAT_100c48468,FUN_10040b504);
  return;
}



/* Address: 0x10040d4c8 | FUN_10040d4c8 */

void FUN_10040d4c8(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_1000f1290(param_2);
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10040d6b8();
    }
    FUN_100089674(*(long *)(lVar2 + 0x30) + param_2 * 0x28);
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_10040db18(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x10040d590 | FUN_10040d590 */

void FUN_10040d590(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [40];
  
  lVar6 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1000f1290(param_2);
  lVar4 = *(long *)(lVar6 + 0x10);
  uVar5 = (ulong)~(uint)uVar3 & 1;
  lVar7 = lVar4 + uVar5;
  if (SCARRY8(lVar4,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10040d664);
    (*pcVar1)();
  }
  if (*(long *)(lVar6 + 0x18) < lVar7) {
    param_3 = param_3 & 1;
    FUN_10040d85c(lVar7);
    uVar2 = param_2;
    FUN_1000f1290(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10040d624);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_10040d6b8();
    lVar7 = *unaff_x20;
    goto joined_r0x00010040d678;
  }
  lVar7 = *unaff_x20;
joined_r0x00010040d678:
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(lVar7 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar7);
    FUN_100011080(param_1,lVar7);
    return;
  }
  FUN_1000f1c9c(param_2,auStack_68);
  FUN_10016fb64(uVar2,auStack_68,param_1,lVar7);
  return;
}



/* Address: 0x10040d6b8 | FUN_10040d6b8 */

void FUN_10040d6b8(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  this = (_DictionaryStorage *)&DAT_100fc5190;
  FUN_1000037f0(&DAT_100fc5190,&DAT_100c483a0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar8 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_10040d79c;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar8 << 6;
        lVar10 = uVar7 * 0x28;
        FUN_1000f1c9c(*(long *)(original + 0x30) + lVar10,&local_88);
        lVar9 = uVar7 * 0x20;
        FUN_10000cbfc(*(long *)(original + 0x38) + lVar9,auStack_a8);
        puVar2 = (undefined8 *)(*(long *)(p_Var4 + 0x30) + lVar10);
        puVar2[4] = local_68;
        puVar2[1] = uStack_80;
        *puVar2 = local_88;
        puVar2[3] = uStack_70;
        puVar2[2] = local_78;
        FUN_100011080(auStack_a8,*(long *)(p_Var4 + 0x38) + lVar9);
        if (uVar5 != 0) break;
LAB_10040d79c:
        do {
          lVar9 = lVar8 + 1;
          if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10040d85c);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar9) goto LAB_10040d82c;
          uVar5 = *(ulong *)(p_Var1 + lVar9 * 8);
          lVar8 = lVar8 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar8 = lVar9;
      }
    } while( true );
  }
LAB_10040d82c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x10040d85c | FUN_10040d85c */

void FUN_10040d85c(long param_1,bool param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  undefined8 *puVar4;
  ulong uVar5;
  AnyHashable AVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var13;
  long lVar14;
  undefined1 auStack_b0 [32];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc5190;
  FUN_1000037f0(&DAT_100fc5190,&DAT_100c483a0);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_10040daec:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x40;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var13;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar14 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10040db14);
          (*pcVar2)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) != 0) {
            uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          _swift_release(original);
          goto LAB_10040daec;
        }
        uVar12 = *(ulong *)(p_Var13 + lVar14 * 8);
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar14 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar14 << 6;
    puVar4 = (undefined8 *)(*(long *)(original + 0x30) + uVar7 * 0x28);
    if ((param_2 & 1U) == 0) {
      FUN_1000f1c9c(puVar4,&local_90);
      AVar6.unknown = auStack_b0;
      FUN_10000cbfc(*(long *)(original + 0x38) + uVar7 * 0x20);
    }
    else {
      uStack_88 = puVar4[1];
      local_90 = *puVar4;
      uStack_78 = puVar4[3];
      uStack_80 = puVar4[2];
      local_70 = puVar4[4];
      AVar6.unknown = auStack_b0;
      FUN_100011080(*(long *)(original + 0x38) + uVar7 * 0x20);
    }
    uVar5 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(p_Var3 + 0x28),AVar6);
    uVar11 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var3 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar1 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar9 + 1;
        if ((uVar5 == uVar7) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10040db18);
          (*pcVar2)();
        }
        uVar9 = 0;
        if (uVar5 != uVar7) {
          uVar9 = uVar5;
        }
        bVar1 = (bool)(uVar5 == uVar7 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var3 + uVar9 * 8 + 0x40);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var3 + uVar9 + 0x40);
    puVar4 = (undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar7 * 0x28);
    puVar4[4] = local_70;
    puVar4[1] = uStack_88;
    *puVar4 = local_90;
    puVar4[3] = uStack_78;
    puVar4[2] = uStack_80;
    FUN_100011080(auStack_b0,*(long *)(p_Var3 + 0x38) + uVar7 * 0x20);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar8 = lVar14;
  } while( true );
}



/* Address: 0x10040db18 | FUN_10040db18 */

void FUN_10040db18(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  code *pcVar2;
  Bucket BVar3;
  ulong uVar4;
  AnyHashable AVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_88 [40];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1.offset + 1U & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    BVar3 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar10 = BVar3.offset + 1U & uVar6;
    do {
      AVar5.unknown = auStack_88;
      FUN_1000f1c9c(*(long *)(param_2 + 0x30) + uVar9 * 0x28);
      uVar4 = Swift::AnyHashable::_rawHashValue(*(__int64 *)(param_2 + 0x28),AVar5);
      FUN_100089674(auStack_88);
      uVar4 = uVar4 & uVar6;
      if (param_1.offset < (long)uVar10) {
        if (uVar10 <= uVar4 || (long)uVar4 <= param_1.offset) {
LAB_10040dc00:
          puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x28);
          puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x28);
          if ((param_1.offset < (long)uVar9) || (puVar8 + 5 <= puVar7 || param_1.offset != uVar9)) {
            uVar12 = puVar8[1];
            uVar11 = *puVar8;
            uVar14 = puVar8[3];
            uVar13 = puVar8[2];
            puVar7[4] = puVar8[4];
            puVar7[1] = uVar12;
            *puVar7 = uVar11;
            puVar7[3] = uVar14;
            puVar7[2] = uVar13;
          }
          puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x20);
          puVar8 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 0x20);
          if (((param_1.offset < (long)uVar9) || (puVar8 + 4 <= puVar7)) ||
             (param_1.offset != uVar9)) {
            uVar11 = *puVar8;
            uVar13 = puVar8[3];
            uVar12 = puVar8[2];
            puVar7[1] = puVar8[1];
            *puVar7 = uVar11;
            puVar7[3] = uVar13;
            puVar7[2] = uVar12;
            param_1.offset = uVar9;
          }
        }
      }
      else if (uVar10 <= uVar4 && (long)uVar4 <= param_1.offset) goto LAB_10040dc00;
      uVar9 = uVar9 + 1 & uVar6;
    } while ((*(ulong *)(_Var1.unknown + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar6 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar6) =
       *(ulong *)(_Var1.unknown + uVar6) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10040dcbc);
  (*pcVar2)();
}



/* Address: 0x10040dcbc | FUN_10040dcbc */

bool FUN_10040dcbc(undefined8 *param_1)

{
  bool bVar1;
  long unaff_x20;
  
  if ((undefined *)*param_1 != *(undefined **)(unaff_x20 + 0x10) ||
      (undefined *)param_1[1] != *(undefined **)(unaff_x20 + 0x18)) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)*(undefined **)(unaff_x20 + 0x10));
    return bVar1;
  }
  return true;
}



/* Address: 0x10040dce8 | FUN_10040dce8 */

void FUN_10040dce8(undefined8 param_1)

{
  FUN_10040dcf4(param_1,FUN_10040b60c);
  return;
}



/* Address: 0x10040dcf4 | FUN_10040dcf4 */

void FUN_10040dcf4(undefined8 param_1,code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010040dd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10040dd08 | FUN_10040dd08 */

void FUN_10040dd08(void)

{
  FUN_10040ec9c(&DAT_100fc52b0,&DAT_100c48498);
  return;
}



/* Address: 0x10040dd1c | FUN_10040dd1c */

void FUN_10040dd1c(undefined8 param_1)

{
  FUN_10040dd38(param_1,&DAT_100fc52b0,&DAT_100c48498,FUN_10040b9a4);
  return;
}



/* Address: 0x10040dd38 | FUN_10040dd38 */

void FUN_10040dd38(undefined8 param_1,long param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  long unaff_x20;
  
  FUN_1000037f0(param_2,param_3);
  uVar1 = (ulong)*(byte *)(*(long *)(param_2 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010040dd84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,unaff_x20 + (uVar1 + 0x10 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10040dd88 | FUN_10040dd88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10040dd88(void)

{
  _swift_deallocObject();
  return;
}


