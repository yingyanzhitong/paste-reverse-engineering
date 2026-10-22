/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005493f8 | FUN_1005493f8 */

void FUN_1005493f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce920 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55cf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55cf0,&DAT_100edd6e0);
  DAT_100fce920 = pTVar1;
  return;
}



/* Address: 0x100549438 | FUN_100549438 */

void FUN_100549438(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce928 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55da8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55da8,&DAT_100edd700);
  DAT_100fce928 = pTVar1;
  return;
}



/* Address: 0x100549478 | FUN_100549478 */

/* WARNING: Removing unreachable block (ram,0x000100549618) */
/* WARNING: Removing unreachable block (ram,0x000100549678) */

void FUN_100549478(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x21;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcef30;
  FUN_1000f7830(&DAT_100fcef30,&DAT_100c56c28);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar1 = &DAT_100fcef38;
  FUN_1000f7830(&DAT_100fcef38,&DAT_100c56c30);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar5 - extraout_x8_00;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005496bc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    (**(code **)(lVar6 + 0x38))(puVar5,0,1,puVar1);
    lVar2 = lVar4;
    (**(code **)(lVar6 + 0x20))(lVar4,puVar5,puVar1);
    local_52 = 0;
    FUN_10054a8cc();
    puVar3 = &DAT_100edd7a0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_51,&DAT_100edd7a0,&local_52,puVar1,&DAT_100edd7a0,lVar2);
    local_54 = 1;
    FUN_10054a90c();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_53,&DAT_100edd7c0,&local_54,puVar1,&DAT_100edd7c0,puVar3);
    (**(code **)(lVar6 + 8))(lVar4,puVar1);
  }
  else {
    _swift_errorRelease();
    (**(code **)(lVar6 + 0x38))(puVar5,1,1,puVar1);
    FUN_1000fb4c4(puVar5,&DAT_100fcef30,&DAT_100c56c28);
  }
  FUN_100004594(param_1);
  return;
}



/* Address: 0x1005496bc | FUN_1005496bc */

void FUN_1005496bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce938 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c568fc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c568fc,&DAT_100edd850);
  DAT_100fce938 = pTVar1;
  return;
}



/* Address: 0x1005496fc | FUN_1005496fc */

void FUN_1005496fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55ec8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55ec8,&DAT_100edd7a0);
  DAT_100fce940 = pTVar1;
  return;
}



/* Address: 0x10054973c | FUN_10054973c */

void FUN_10054973c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55f80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55f80,&DAT_100edd7c0);
  DAT_100fce948 = pTVar1;
  return;
}



/* Address: 0x10054977c | thunk_FUN_100549780 */

void thunk_FUN_100549780(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55af0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55af0,&DAT_100edd4a0);
  DAT_100fce950 = pTVar1;
  return;
}



/* Address: 0x100549780 | FUN_100549780 */

void FUN_100549780(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55af0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55af0,&DAT_100edd4a0);
  DAT_100fce950 = pTVar1;
  return;
}



/* Address: 0x1005497c0 | thunk_FUN_1005497c4 */

void thunk_FUN_1005497c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce958 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55ba8,&DAT_100edd520);
  DAT_100fce958 = pTVar1;
  return;
}



/* Address: 0x1005497c4 | FUN_1005497c4 */

void FUN_1005497c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce958 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55ba8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55ba8,&DAT_100edd520);
  DAT_100fce958 = pTVar1;
  return;
}



/* Address: 0x100549804 | thunk_FUN_100549808 */

void thunk_FUN_100549808(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55c60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55c60,&DAT_100edd638);
  DAT_100fce960 = pTVar1;
  return;
}



/* Address: 0x100549808 | FUN_100549808 */

void FUN_100549808(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55c60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55c60,&DAT_100edd638);
  DAT_100fce960 = pTVar1;
  return;
}



/* Address: 0x100549848 | thunk_FUN_10054984c */

void thunk_FUN_10054984c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55d18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55d18,&DAT_100edd6e0);
  DAT_100fce968 = pTVar1;
  return;
}



/* Address: 0x10054984c | FUN_10054984c */

void FUN_10054984c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55d18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55d18,&DAT_100edd6e0);
  DAT_100fce968 = pTVar1;
  return;
}



/* Address: 0x10054988c | thunk_FUN_100549890 */

void thunk_FUN_100549890(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce970 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55dd0,&DAT_100edd700);
  DAT_100fce970 = pTVar1;
  return;
}



/* Address: 0x100549890 | FUN_100549890 */

void FUN_100549890(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce970 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55dd0,&DAT_100edd700);
  DAT_100fce970 = pTVar1;
  return;
}



/* Address: 0x1005498d0 | thunk_FUN_1005498d4 */

void thunk_FUN_1005498d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce978 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55e38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55e38,&DAT_100edd6b8);
  DAT_100fce978 = pTVar1;
  return;
}



/* Address: 0x1005498d4 | FUN_1005498d4 */

void FUN_1005498d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce978 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55e38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55e38,&DAT_100edd6b8);
  DAT_100fce978 = pTVar1;
  return;
}



/* Address: 0x100549914 | thunk_FUN_100549918 */

void thunk_FUN_100549918(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55ef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55ef0,&DAT_100edd7a0);
  DAT_100fce980 = pTVar1;
  return;
}



/* Address: 0x100549918 | FUN_100549918 */

void FUN_100549918(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce980 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55ef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55ef0,&DAT_100edd7a0);
  DAT_100fce980 = pTVar1;
  return;
}



/* Address: 0x100549958 | thunk_FUN_10054995c */

void thunk_FUN_10054995c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55fa8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55fa8,&DAT_100edd7c0);
  DAT_100fce988 = pTVar1;
  return;
}



/* Address: 0x10054995c | FUN_10054995c */

void FUN_10054995c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce988 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c55fa8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c55fa8,&DAT_100edd7c0);
  DAT_100fce988 = pTVar1;
  return;
}



/* Address: 0x10054999c | thunk_FUN_1005499a0 */

void thunk_FUN_1005499a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56010,&DAT_100edd778);
  DAT_100fce990 = pTVar1;
  return;
}



/* Address: 0x1005499a0 | FUN_1005499a0 */

void FUN_1005499a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce990 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c56010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c56010,&DAT_100edd778);
  DAT_100fce990 = pTVar1;
  return;
}



/* Address: 0x1005499e0 | thunk_FUN_1005499e4 */

void thunk_FUN_1005499e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c560c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c560c8,&DAT_100edd5b0);
  DAT_100fce998 = pTVar1;
  return;
}



/* Address: 0x1005499e4 | FUN_1005499e4 */

void FUN_1005499e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fce998 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c560c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c560c8,&DAT_100edd5b0);
  DAT_100fce998 = pTVar1;
  return;
}



/* Address: 0x100549a24 | FUN_100549a24 */

undefined1  [16] FUN_100549a24(void)

{
  return ZEXT816(0x100edd4a0);
}



/* Address: 0x100549a34 | FUN_100549a34 */

void FUN_100549a34(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  return;
}



/* Address: 0x100549a7c | FUN_100549a7c */

undefined8 * FUN_100549a7c(undefined8 *param_1,undefined8 *param_2)

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
  param_1[8] = param_2[8];
  uVar4 = param_2[10];
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar4);
  return param_1;
}



/* Address: 0x100549b1c | FUN_100549b1c */

undefined8 * FUN_100549b1c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100549c00 | FUN_100549c00 */

void FUN_100549c00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  param_1[10] = param_2[10];
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x100549c24 | FUN_100549c24 */

undefined8 * FUN_100549c24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  _swift_bridgeObjectRelease(param_1[9]);
  uVar2 = param_1[10];
  uVar1 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100549ca8 | FUN_100549ca8 */

undefined1  [16] FUN_100549ca8(void)

{
  return ZEXT816(0x100edd520);
}



/* Address: 0x100549cb8 | thunk_FUN_100549cbc */

undefined2 * thunk_FUN_100549cbc(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 3) = *(undefined2 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100549cbc | FUN_100549cbc */

undefined2 * FUN_100549cbc(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 3) = *(undefined2 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100549d10 | FUN_100549d10 */

undefined2 * FUN_100549d10(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  uVar1 = *(undefined2 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined2 *)((long)param_1 + 3) = uVar1;
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x100549d7c | FUN_100549d7c */

undefined2 * FUN_100549d7c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 3) = *(undefined2 *)((long)param_2 + 3);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x100549dd8 | FUN_100549dd8 */

int FUN_100549dd8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100549e34 | FUN_100549e34 */

void FUN_100549e34(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x100549e88 | FUN_100549e88 */

undefined1  [16] FUN_100549e88(void)

{
  return ZEXT816(0x100edd5b0);
}



/* Address: 0x100549e98 | FUN_100549e98 */

int FUN_100549e98(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100549f14;
        goto LAB_100549ef8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100549ef8:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_100549f14:
  uVar1 = 0xfffffffe;
  if (1 < *param_1) {
    uVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100549f44 | FUN_100549f44 */

undefined1  [16] FUN_100549f44(void)

{
  return ZEXT816(0x100edd638);
}



/* Address: 0x100549f54 | FUN_100549f54 */

void FUN_100549f54(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100549f60 | FUN_100549f60 */

undefined1  [16] FUN_100549f60(void)

{
  return ZEXT816(0x100edd6b8);
}



/* Address: 0x100549f70 | FUN_100549f70 */

undefined1  [16] FUN_100549f70(void)

{
  return ZEXT816(0x100edd6e0);
}



/* Address: 0x100549f80 | FUN_100549f80 */

undefined1  [16] FUN_100549f80(void)

{
  return ZEXT816(0x100edd700);
}



/* Address: 0x100549f90 | thunk_FUN_100549f94 */

int thunk_FUN_100549f94(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 4;
    if (param_2 + 0xffffU < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xffffU < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) {
          return 0;
        }
        goto LAB_100549fd0;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100549fd0:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xffff;
    }
  }
  return 0;
}



/* Address: 0x100549f94 | FUN_100549f94 */

int FUN_100549f94(ushort *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 != 0) {
    iVar2 = 4;
    if (param_2 + 0xffffU < 0xffff0000) {
      iVar2 = 2;
    }
    if (param_2 + 0xffffU < 0xff0000) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)param_1[1];
        if (param_1[1] == 0) {
          return 0;
        }
        goto LAB_100549fd0;
      }
      uVar1 = (uint)(byte)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100549fd0:
      return ((uint)*param_1 | uVar1 << 0x10) - 0xffff;
    }
  }
  return 0;
}



/* Address: 0x10054a000 | thunk_FUN_10054a004 */

void thunk_FUN_10054a004(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xffffU < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xffffU < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar3;
  }
  if (param_2 == 0) {
    if (1 < uVar2) {
      if (uVar2 == 2) {
        param_1[1] = 0;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  else {
    iVar1 = (param_2 - 1U >> 0x10) + 1;
    *param_1 = (short)(param_2 - 1U);
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)(param_1 + 1) = (char)iVar1;
        return;
      }
    }
    else {
      if (uVar2 == 2) {
        param_1[1] = (short)iVar1;
        return;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
  }
  return;
}



/* Address: 0x10054a004 | FUN_10054a004 */

void FUN_10054a004(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 4;
  if (param_3 + 0xffffU < 0xffff0000) {
    uVar3 = 2;
  }
  if (param_3 + 0xffffU < 0xff0000) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = uVar3;
  }
  if (param_2 == 0) {
    if (1 < uVar2) {
      if (uVar2 == 2) {
        param_1[1] = 0;
        return;
      }
      *(undefined4 *)(param_1 + 1) = 0;
      return;
    }
    if (uVar2 != 0) {
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
  }
  else {
    iVar1 = (param_2 - 1U >> 0x10) + 1;
    *param_1 = (short)(param_2 - 1U);
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        *(char *)(param_1 + 1) = (char)iVar1;
        return;
      }
    }
    else {
      if (uVar2 == 2) {
        param_1[1] = (short)iVar1;
        return;
      }
      *(int *)(param_1 + 1) = iVar1;
    }
  }
  return;
}



/* Address: 0x10054a098 | FUN_10054a098 */

undefined1  [16] FUN_10054a098(void)

{
  return ZEXT816(0x100edd778);
}



/* Address: 0x10054a0a8 | FUN_10054a0a8 */

undefined1  [16] FUN_10054a0a8(void)

{
  return ZEXT816(0x100edd7a0);
}



/* Address: 0x10054a0b8 | FUN_10054a0b8 */

undefined1  [16] FUN_10054a0b8(void)

{
  return ZEXT816(0x100edd7c0);
}



/* Address: 0x10054a0c8 | FUN_10054a0c8 */

undefined1  [16] FUN_10054a0c8(void)

{
  return ZEXT816(0x100edd850);
}



/* Address: 0x10054a0d8 | FUN_10054a0d8 */

undefined1  [16] FUN_10054a0d8(void)

{
  return ZEXT816(0x100edd8e0);
}



/* Address: 0x10054a0e8 | FUN_10054a0e8 */

undefined1  [16] FUN_10054a0e8(void)

{
  return ZEXT816(0x100edd970);
}



/* Address: 0x10054a0f8 | FUN_10054a0f8 */

undefined1  [16] FUN_10054a0f8(void)

{
  return ZEXT816(0x100edd990);
}



/* Address: 0x10054a108 | FUN_10054a108 */

undefined1  [16] FUN_10054a108(void)

{
  return ZEXT816(0x100edd9b0);
}



/* Address: 0x10054a118 | FUN_10054a118 */

undefined1  [16] FUN_10054a118(void)

{
  return ZEXT816(0x100edd9d0);
}



/* Address: 0x10054a128 | FUN_10054a128 */

undefined1  [16] FUN_10054a128(void)

{
  return ZEXT816(0x100edd9f0);
}



/* Address: 0x10054a138 | FUN_10054a138 */

undefined1  [16] FUN_10054a138(void)

{
  return ZEXT816(0x100edda80);
}



/* Address: 0x10054a148 | FUN_10054a148 */

undefined1  [16] FUN_10054a148(void)

{
  return ZEXT816(0x100eddb10);
}



/* Address: 0x10054a158 | FUN_10054a158 */

undefined1  [16] FUN_10054a158(void)

{
  return ZEXT816(0x100eddba0);
}



/* Address: 0x10054a168 | thunk_FUN_10054a16c */

void thunk_FUN_10054a16c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fceda8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5638c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5638c,&DAT_100eddba0);
  DAT_100fceda8 = pTVar1;
  return;
}


