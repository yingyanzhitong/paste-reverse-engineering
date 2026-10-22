/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a1e2ec | FUN_100a1e2ec */

void FUN_100a1e2ec(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1000fb4c4(unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state,&DAT_100ff4b70,
                &DAT_100c8e1e8);
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  FUN_100622430(*puVar1,puVar1[1],puVar1[2]);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a1e34c | FUN_100a1e34c */

void FUN_100a1e34c(void)

{
  FUN_1008781e8();
  return;
}



/* Address: 0x100a1e360 | FUN_100a1e360 */

void FUN_100a1e360(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  param_1[3] = &DAT_100f08218;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_1008758fc(uVar1,uVar2,(ulong)uVar6);
  return;
}



/* Address: 0x100a1e3bc | FUN_100a1e3bc */

void FUN_100a1e3bc(void)

{
  FUN_1008781e8();
  return;
}



/* Address: 0x100a1e3d0 | thunk_FUN_100a1d39c */

void thunk_FUN_100a1d39c(void)

{
  FUN_100a1d39c();
  return;
}



/* Address: 0x100a1e3d4 | thunk_FUN_100a1d6b0 */

void thunk_FUN_100a1d6b0(void)

{
  FUN_100a1d6b0();
  return;
}



/* Address: 0x100a1e3d8 | thunk_FUN_100a1e1bc */

void thunk_FUN_100a1e1bc(void)

{
  FUN_100a1e1bc();
  return;
}



/* Address: 0x100a1e3dc | FUN_100a1e3dc */

void FUN_100a1e3dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  param_1[3] = &DAT_100f082a8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_1008758fc(uVar1,uVar2,(ulong)uVar6);
  return;
}



/* Address: 0x100a1e438 | thunk_FUN_100a1d844 */

void thunk_FUN_100a1d844(void)

{
  FUN_100a1d844();
  return;
}



/* Address: 0x100a1e43c | thunk_FUN_100a1cebc */

void thunk_FUN_100a1cebc(void)

{
  FUN_100a1cebc();
  return;
}



/* Address: 0x100a1e440 | FUN_100a1e440 */

bool FUN_100a1e440(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long local_90;
  long local_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar7 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar7 = lVar7 - extraout_x12;
  lVar4 = 0;
  local_90 = lVar7;
  local_80 = param_4;
  uStack_78 = param_3;
  FUN_100a218ec(0,param_3,param_4);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_00;
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,0,0);
  local_70 = *(long *)(lVar5 + -8);
  lVar10 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar7 - extraout_x8_01;
  lVar10 = (long)*(int *)(lVar10 + 0x30);
  pcVar9 = *(code **)(lVar11 + 0x10);
  (*pcVar9)(lVar8,local_68,lVar4);
  (*pcVar9)(lVar8 + lVar10,param_2,lVar4);
  pcVar13 = *(code **)(lVar12 + 0x30);
  lVar6 = lVar8;
  (*pcVar13)(lVar8,1,lVar3);
  if ((int)lVar6 == 1) {
    bVar2 = true;
    lVar10 = lVar8 + lVar10;
    (*pcVar13)(lVar10,1,lVar3);
    if ((int)lVar10 == 1) goto LAB_100a1e698;
  }
  else {
    (*pcVar9)(lVar7,lVar8,lVar4);
    lVar6 = lVar8 + lVar10;
    (*pcVar13)(lVar6,1,lVar3);
    lVar1 = local_90;
    if ((int)lVar6 != 1) {
      pcVar9 = *(code **)(lVar12 + 0x20);
      (*pcVar9)(local_90,lVar7,lVar3);
      lVar6 = local_88;
      (*pcVar9)(local_88,lVar8 + lVar10,lVar3);
      lVar10 = local_80;
      _swift_getAssociatedConformanceWitness
                (local_80,uStack_78,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar2 = Swift::Equatable::___infix
                        (lVar1,lVar6,lVar3,*(undefined8 *)(*(long *)(lVar10 + 8) + 8));
      pcVar9 = *(code **)(lVar12 + 8);
      (*pcVar9)(lVar6,lVar3);
      (*pcVar9)(lVar1,lVar3);
      goto LAB_100a1e698;
    }
    (**(code **)(lVar12 + 8))(lVar7,lVar3);
  }
  bVar2 = false;
  lVar4 = lVar5;
  lVar11 = local_70;
LAB_100a1e698:
  (**(code **)(lVar11 + 8))(lVar8,lVar4);
  return bVar2;
}



/* Address: 0x100a1e6cc | FUN_100a1e6cc */

bool FUN_100a1e6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_68 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12;
  lVar4 = 0;
  local_90 = lVar6;
  FUN_100a1f830(0,param_3,param_4);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar5 = 0;
  local_70 = lVar6;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,0,0);
  local_78 = *(long *)(lVar5 + -8);
  lVar7 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  lVar7 = (long)*(int *)(lVar7 + 0x30);
  pcVar11 = *(code **)(lVar10 + 0x10);
  local_80 = lVar10;
  (*pcVar11)(lVar6,param_1,lVar4);
  (*pcVar11)(lVar6 + lVar7,local_68,lVar4);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar10 = lVar6;
  (*pcVar9)(lVar6,2,lVar3);
  if ((int)lVar10 == 0) {
    (*pcVar11)(local_70,lVar6,lVar4);
    lVar10 = lVar6 + lVar7;
    (*pcVar9)(lVar10,2,lVar3);
    lVar1 = local_90;
    if ((int)lVar10 == 0) {
      pcVar9 = *(code **)(lVar8 + 0x20);
      (*pcVar9)(local_90,local_70,lVar3);
      lVar10 = local_88;
      (*pcVar9)(local_88,lVar6 + lVar7,lVar3);
      _swift_getAssociatedConformanceWitness
                (param_4,param_3,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar2 = Swift::Equatable::___infix
                        (lVar1,lVar10,lVar3,*(undefined8 *)(*(long *)(param_4 + 8) + 8));
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar10,lVar3);
      (*pcVar9)(lVar1,lVar3);
      lVar7 = local_80;
      goto LAB_100a1e8c4;
    }
    (**(code **)(lVar8 + 8))(local_70,lVar3);
  }
  else if ((int)lVar10 == 1) {
    lVar7 = lVar6 + lVar7;
    (*pcVar9)(lVar7,2,lVar3);
    if ((int)lVar7 == 1) {
LAB_100a1e8ac:
      bVar2 = true;
      lVar7 = local_80;
      goto LAB_100a1e8c4;
    }
  }
  else {
    lVar7 = lVar6 + lVar7;
    (*pcVar9)(lVar7,2,lVar3);
    if ((int)lVar7 == 2) goto LAB_100a1e8ac;
  }
  bVar2 = false;
  lVar7 = local_78;
  lVar4 = lVar5;
LAB_100a1e8c4:
  (**(code **)(lVar7 + 8))(lVar6,lVar4);
  return bVar2;
}



/* Address: 0x100a1e988 | FUN_100a1e988 */

void FUN_100a1e988(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100a1e440(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100a1e994 | FUN_100a1e994 */

void FUN_100a1e994(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100a1e6cc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100a1e9a0 | FUN_100a1e9a0 */

bool FUN_100a1e9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  long local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  
  lVar3 = 0;
  local_68 = param_2;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008
             ,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar8 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar6 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar6 - extraout_x12;
  lVar4 = 0;
  local_90 = lVar6;
  FUN_100a233d0(0,param_3,param_4);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar5 = 0;
  local_70 = lVar6;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,0,0);
  local_78 = *(long *)(lVar5 + -8);
  lVar7 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_01;
  lVar7 = (long)*(int *)(lVar7 + 0x30);
  pcVar11 = *(code **)(lVar10 + 0x10);
  local_80 = lVar10;
  (*pcVar11)(lVar6,param_1,lVar4);
  (*pcVar11)(lVar6 + lVar7,local_68,lVar4);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar10 = lVar6;
  (*pcVar9)(lVar6,2,lVar3);
  if ((int)lVar10 == 0) {
    (*pcVar11)(local_70,lVar6,lVar4);
    lVar10 = lVar6 + lVar7;
    (*pcVar9)(lVar10,2,lVar3);
    lVar1 = local_90;
    if ((int)lVar10 == 0) {
      pcVar9 = *(code **)(lVar8 + 0x20);
      (*pcVar9)(local_90,local_70,lVar3);
      lVar10 = local_88;
      (*pcVar9)(local_88,lVar6 + lVar7,lVar3);
      _swift_getAssociatedConformanceWitness
                (param_4,param_3,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
                 PTR___associated_conformance_descriptor_for_Swift_Clock_Swift_Clock_Instant__Swift_InstantProtocol_100eaeff0
                );
      bVar2 = Swift::Equatable::___infix
                        (lVar1,lVar10,lVar3,*(undefined8 *)(*(long *)(param_4 + 8) + 8));
      pcVar9 = *(code **)(lVar8 + 8);
      (*pcVar9)(lVar10,lVar3);
      (*pcVar9)(lVar1,lVar3);
      lVar7 = local_80;
      goto LAB_100a1eb98;
    }
    (**(code **)(lVar8 + 8))(local_70,lVar3);
  }
  else if ((int)lVar10 == 1) {
    lVar7 = lVar6 + lVar7;
    (*pcVar9)(lVar7,2,lVar3);
    if ((int)lVar7 == 1) {
LAB_100a1eb80:
      bVar2 = true;
      lVar7 = local_80;
      goto LAB_100a1eb98;
    }
  }
  else {
    lVar7 = lVar6 + lVar7;
    (*pcVar9)(lVar7,2,lVar3);
    if ((int)lVar7 == 2) goto LAB_100a1eb80;
  }
  bVar2 = false;
  lVar7 = local_78;
  lVar4 = lVar5;
LAB_100a1eb98:
  (**(code **)(lVar7 + 8))(lVar6,lVar4);
  return bVar2;
}



/* Address: 0x100a1ec5c | FUN_100a1ec5c */

void FUN_100a1ec5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_100a1e9a0(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Address: 0x100a1ec68 | FUN_100a1ec68 */

void FUN_100a1ec68(undefined8 param_1)

{
  FUN_100a1ec80(param_1,&DAT_100f08218);
  return;
}



/* Address: 0x100a1ec74 | FUN_100a1ec74 */

void FUN_100a1ec74(undefined8 param_1)

{
  FUN_100a1ec80(param_1,&DAT_100f082a8);
  return;
}



/* Address: 0x100a1ec80 | FUN_100a1ec80 */

undefined1  [16] FUN_100a1ec80(bool param_1,void *param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  Mirror MVar6;
  undefined *puVar7;
  Mirror MVar8;
  AnyCollection<tuple2> AVar9;
  char *pcVar10;
  ObjectIdentifier OVar11;
  ObjectIdentifier OVar12;
  undefined1 *puVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x12;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  void *local_110;
  undefined1 auStack_108 [32];
  StaticString local_e8;
  __uint64 _Stack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined3 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  char *local_98;
  void *pvStack_90;
  char local_87;
  undefined1 local_80 [16];
  char *local_70;
  
  MVar6 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = (long)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    iVar5 = (int)local_80;
    puVar13 = auStack_108;
    pcVar3 = (code *)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    _swift_dynamicCast();
    puStack_a0 = puVar13;
    param_4 = param_2;
    if ((iVar5 != 0) && (pcVar3 = (code *)local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    pcVar3 = (code *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    puStack_a0 = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = (code *)local_98;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    pcVar3 = local_118;
    FUN_1005d8fac(local_110);
    param_4 = pvStack_90;
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_a0);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar17.bridgeObject = (void *)0x8000000100daf900;
  SVar17.str = (char *)0xd000000000000018;
  SVar21.bridgeObject = param_4;
  SVar21.str = (char *)pcVar3;
  Swift::String::append(SVar17,SVar21);
  SVar17 = Swift::__typeName(param_1);
  SVar22.bridgeObject = param_4;
  SVar22.str = (char *)pcVar3;
  Swift::String::append(SVar17,SVar22);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar23.bridgeObject = param_4;
  SVar23.str = (char *)pcVar3;
  Swift::String::append(SVar18,SVar23);
  local_b0 = &DAT_100ef1ad8;
  puVar7 = &DAT_100f28738;
  _swift_allocObject(&DAT_100f28738,0x52,7);
  local_c8 = puVar7;
  FUN_100877858();
  MVar8 = Swift::Mirror::_init();
  AVar9 = Swift::Mirror::_get_children(MVar8);
  local_118 = *(code **)(lVar16 + 8);
  (*local_118)(auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),MVar6.unknown);
  pcVar1 = *(char **)(AVar9.unknown + 0x10);
  pvVar14 = *(void **)(AVar9.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar9.unknown + 0x20);
  pcVar10 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_110 = pvVar14;
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar12 = Swift::_AnyIndexBox::get__typeID();
  if (OVar11.unknown != OVar12.unknown) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a1ef60);
    (*pcVar3)();
  }
  pvVar14 = local_110;
  bVar4 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar2);
  if (bVar4) {
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar9.unknown);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a1ef5c);
    (*pcVar3)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar1);
  _swift_release(AVar9.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar8 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar8);
  (*local_118)(lVar15,MVar6.unknown);
  SVar17 = Swift::__typeName(SUB81(MVar8.unknown,0));
  SVar24.bridgeObject = pvVar14;
  SVar24.str = pcVar10;
  Swift::String::append(SVar17,SVar24);
  _swift_bridgeObjectRelease(SVar17.bridgeObject);
  SVar19.bridgeObject = (void *)0xef2073746e65746e;
  SVar19.str = (char *)0x6f63206874697720;
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar10;
  Swift::String::append(SVar19,SVar25);
  Swift::__print_unlocked();
  line = _Stack_e0;
  file.unknown = local_e8.unknown;
  *(undefined4 *)(lVar15 + -8) = 0;
  *(undefined8 *)(lVar15 + -0x10) = 0xd0;
  SVar20.bridgeObject = (void *)0x2;
  SVar20.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar20,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100a1f064);
  (*pcVar3)();
}



/* Address: 0x100a1f064 | FUN_100a1f064 */

void FUN_100a1f064(undefined8 *param_1,bool param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  Mirror MVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  char *pcVar13;
  void *pvVar14;
  long extraout_x8;
  long extraout_x12;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  undefined8 local_160;
  code *local_158;
  void *local_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  StaticString local_108;
  __uint64 _Stack_100;
  undefined4 local_f8;
  undefined3 local_f4;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined1 local_c8;
  char local_c7;
  undefined *local_c0;
  __uint64 _Stack_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  MVar4 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  lVar16 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar16 - extraout_x12;
  FUN_100877858();
  if (local_c7 == '\x02') {
    FUN_100011080(&local_108,auStack_128);
    FUN_100011080(auStack_128,auStack_148);
    param_5 = &DAT_100ef1a40;
    ppuVar5 = &local_c0;
    _swift_dynamicCast(ppuVar5,auStack_148,PTR___type_metadata_for_Any_100eae0c0 + 8,&DAT_100ef1a40,
                       6);
    if (((ulong)ppuVar5 & 1) != 0) {
      if (local_80._1_1_ != -1) {
        param_1[5] = uStack_98;
        param_1[4] = local_a0;
        param_1[7] = uStack_88;
        param_1[6] = uStack_90;
        *(undefined2 *)(param_1 + 8) = local_80;
        param_1[1] = _Stack_b8;
        *param_1 = local_c0;
        param_1[3] = local_a8;
        param_1[2] = uStack_b0;
        return;
      }
      goto LAB_100a1f214;
    }
  }
  else if (local_c7 == '\0') {
    FUN_10000c650(local_108.unknown,_Stack_100,(ulong)CONCAT34(local_f4,local_f8));
  }
  else {
    local_150 = (void *)local_e8;
    local_158 = (code *)uStack_e0;
    local_160 = local_d8;
    _swift_release(_Stack_100);
    _swift_release((ulong)local_108.unknown & 0x3fffffffffffffff);
    FUN_1005d8fac(local_150,local_158,local_160,puStack_d0,local_c8);
    param_5 = puStack_d0;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  _Stack_b8 = 0;
  local_c0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  local_80 = 0xff00;
LAB_100a1f214:
  _Var12.unknown = &DAT_100ff4e60;
  pcVar13 = &DAT_100c8e380;
  FUN_1000fb4c4(&local_c0);
  local_c0 = (undefined *)0x0;
  _Stack_b8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_108.unknown = local_c0;
  _Stack_100 = _Stack_b8;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_5;
  SVar22.str = pcVar13;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_2);
  SVar23.bridgeObject = param_5;
  SVar23.str = pcVar13;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_5;
  SVar24.str = pcVar13;
  Swift::String::append(SVar19,SVar24);
  local_a8 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f28738;
  _swift_allocObject(&DAT_100f28738,0x52,7);
  local_c0 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_158 = *(code **)(lVar17 + 8);
  (*local_158)(lVar16,MVar4.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_150 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown != OVar11.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a1f3a4);
    (*pcVar2)();
  }
  pvVar14 = local_150;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a1f3a0);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(_Stack_b8);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_158)(lVar15,MVar4.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar7.unknown,0));
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar9;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  Swift::__print_unlocked();
  line = _Stack_100;
  file.unknown = local_108.unknown;
  *(undefined4 *)(lVar15 + -8) = 0;
  *(undefined8 *)(lVar15 + -0x10) = 0xd0;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a1f4ac);
  (*pcVar2)();
}



/* Address: 0x100a1f4ac | FUN_100a1f4ac */

void FUN_100a1f4ac(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  ContinuousClock CVar3;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  puVar2 = &DAT_100ff4b70;
  FUN_1000f7830(&DAT_100ff4b70,&DAT_100c8e1e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar4 = (undefined8 *)(&stack0xffffffffffffffa0 + lVar1);
  CVar3 = Swift::ContinuousClock::typeMetadataAccessor();
  lVar5 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  lVar6 = (long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_retain(param_4);
  Swift::ContinuousClock::init();
  *(undefined8 *)((long)puVar4 + (long)*(int *)(puVar2 + 0x28)) = 0;
  *(undefined1 *)((long)puVar4 + (long)*(int *)(puVar2 + 0x2c)) = 0;
  *(undefined1 *)((long)puVar4 + (long)*(int *)(puVar2 + 0x34)) = 0;
  *(undefined1 *)((long)puVar4 + (long)*(int *)(puVar2 + 0x38)) = 0;
  (**(code **)(lVar5 + 0x10))
            ((undefined1 *)((long)puVar4 + (long)*(int *)(puVar2 + 0x24)),lVar6,CVar3.unknown);
  *puVar4 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffa8 + lVar1) = param_2;
  (&stack0xffffffffffffffb0)[lVar1] = param_3;
  FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  (**(code **)(lVar5 + 8))(lVar6,CVar3.unknown);
  FUN_100a219d4(puVar4,unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::state);
  puVar4 = (undefined8 *)
           (unaff_x20 + _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  puVar4[1] = 0;
  puVar4[2] = 0;
  *puVar4 = 0;
  return;
}



/* Address: 0x100a1f638 | FUN_100a1f638 */

void FUN_100a1f638(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 +
                   _TtC15HummingbirdCore26HTTPConnectionStateHandler::scheduledReaderTask);
  lVar4 = *plVar1;
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar2 = plVar1[1];
    lVar3 = plVar1[2];
    _swift_retain(lVar4);
    _swift_retain(lVar3);
    FUN_100a1e0c4(lVar4,lVar2,lVar3);
    _swift_release(lVar3);
    _swift_release(lVar4);
    lVar4 = *plVar1;
  }
  lVar2 = plVar1[1];
  lVar3 = plVar1[2];
  plVar1[1] = 0;
  plVar1[2] = 0;
  *plVar1 = 0;
  FUN_100622430(lVar4,lVar2,lVar3);
  return;
}



/* Address: 0x100a1f6b8 | FUN_100a1f6b8 */

void FUN_100a1f6b8(void)

{
  FUN_100a1f6c0(0);
  return;
}



/* Address: 0x100a1f6c0 | FUN_100a1f6c0 */

void FUN_100a1f6c0(undefined8 param_1)

{
  if (DAT_100ff4c40 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc940c);
  return;
}



/* Address: 0x100a1f6f8 | FUN_100a1f6f8 */

void FUN_100a1f6f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  lVar1 = 0x13f;
  FUN_100a1f77c();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c8e2a0;
    _swift_updateClassMetadata2(param_1,0x100,3,&local_38,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100a1f77c | FUN_100a1f77c */

void FUN_100a1f77c(long param_1)

{
  ContinuousClock CVar1;
  undefined *puVar2;
  
  if (DAT_100ff4c50 == 0) {
    CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
    puVar2 = &DAT_100ff4b80;
    FUN_100003a00(&DAT_100ff4b80,PTR_typeMetadataAccessor_100eaef18,
                  PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
    FUN_100a1f7f4(param_1,CVar1.unknown,puVar2);
    if (CVar1.unknown == (undefined *)0x0) {
      DAT_100ff4c50 = param_1;
    }
  }
  return;
}



/* Address: 0x100a1f7f4 | FUN_100a1f7f4 */

void FUN_100a1f7f4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a1f800 | FUN_100a1f800 */

void FUN_100a1f800(void)

{
  FUN_100a21a24();
  return;
}



/* Address: 0x100a1f808 | thunk_FUN_100a21a90 */

void thunk_FUN_100a21a90(void)

{
  FUN_100a21a90();
  return;
}



/* Address: 0x100a1f80c | thunk_FUN_100a21d84 */

void thunk_FUN_100a21d84(void)

{
  FUN_100a21d84();
  return;
}



/* Address: 0x100a1f810 | thunk_FUN_100a21ed4 */

void thunk_FUN_100a21ed4(void)

{
  FUN_100a21ed4();
  return;
}



/* Address: 0x100a1f814 | thunk_FUN_100a22130 */

void thunk_FUN_100a22130(void)

{
  FUN_100a22130();
  return;
}



/* Address: 0x100a1f818 | thunk_FUN_100a225a0 */

void thunk_FUN_100a225a0(void)

{
  FUN_100a225a0();
  return;
}



/* Address: 0x100a1f81c | thunk_FUN_100a227fc */

void thunk_FUN_100a227fc(void)

{
  FUN_100a227fc();
  return;
}



/* Address: 0x100a1f820 | thunk_FUN_100a22c6c */

void thunk_FUN_100a22c6c(void)

{
  FUN_100a22c6c();
  return;
}



/* Address: 0x100a1f824 | thunk_FUN_100a22e0c */

void thunk_FUN_100a22e0c(void)

{
  FUN_100a22e0c();
  return;
}



/* Address: 0x100a1f828 | thunk_FUN_100a230d0 */

void thunk_FUN_100a230d0(void)

{
  FUN_100a230d0();
  return;
}



/* Address: 0x100a1f82c | thunk_FUN_100a23200 */

void thunk_FUN_100a23200(void)

{
  FUN_100a23200();
  return;
}



/* Address: 0x100a1f830 | FUN_100a1f830 */

void FUN_100a1f830(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a1f83c | FUN_100a1f83c */

undefined1  [16] FUN_100a1f83c(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  long local_68;
  long local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_68 = *(long *)(lVar3 + -8) + 0x40;
    lVar3 = 0x13f;
    _swift_checkMetadataState();
    if (uVar4 < 0x40) {
      local_60 = *(long *)(lVar3 + -8) + 0x40;
      puStack_58 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
      local_50 = &DAT_100c8e2e8;
      lVar3 = 0x13f;
      _swift_getAssociatedTypeWitness();
      if (uVar5 < 0x40) {
        local_48 = *(long *)(lVar3 + -8) + 0x40;
        puStack_40 = &DAT_100c8e2e8;
        local_38 = &DAT_100c8e2e8;
        _swift_initStructMetadata(param_1,0,7,&local_68,param_1 + 0x20);
        lVar3 = 0;
        uVar6 = 0;
        goto LAB_100a1f938;
      }
    }
  }
  uVar6 = 0x3f;
LAB_100a1f938:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = lVar3;
  return auVar7;
}



/* Address: 0x100a1f950 | FUN_100a1f950 */

long * FUN_100a1f950(long *param_1,long *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  undefined8 *puVar12;
  size_t sVar13;
  undefined8 *puVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar9 = *(long *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar9,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar16 = *(long *)(lVar7 + -8);
  sVar13 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar21 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar21 + 0x50);
  uVar15 = (ulong)uVar4 & 0xff;
  uVar11 = sVar13 + uVar15;
  lVar22 = *(long *)(lVar21 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar9,puVar6,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8
            );
  lVar20 = *(long *)(lVar8 + -8);
  uVar17 = (ulong)*(uint *)(lVar20 + 0x50) & 0xff;
  lVar19 = *(long *)(lVar20 + 0x40);
  uVar5 = (uint)uVar17 | *(uint *)(lVar16 + 0x50) & 0xf8 | (uint)uVar15;
  if ((uVar5 < 8 && ((*(uint *)(lVar20 + 0x50) | uVar4 | *(uint *)(lVar16 + 0x50)) & 0x100000) == 0)
      && 0xffffffffffffffe6 <
         (((((-8 - lVar22) - (uVar11 & (uVar15 ^ 0xffffffffffffffff)) | 7) - uVar17) - 9 | uVar17) -
         lVar19) - 2) {
    plVar10 = param_2;
    (**(code **)(lVar16 + 0x30))(param_2,1,lVar7);
    if ((int)plVar10 == 0) {
      (**(code **)(lVar16 + 0x10))(param_1,param_2,lVar7);
      (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar7);
    }
    else {
      _memcpy(param_1,param_2,sVar13);
    }
    uVar18 = uVar11 + (long)param_1 & ~uVar15;
    uVar11 = uVar11 + (long)param_2 & ~uVar15;
    (**(code **)(lVar21 + 0x10))(uVar18,uVar11,lVar9);
    lVar22 = lVar22 + 7;
    puVar14 = (undefined8 *)(lVar22 + uVar18 & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)(lVar22 + uVar11 & 0xfffffffffffffff8);
    *puVar14 = *puVar12;
    *(undefined1 *)(puVar14 + 1) = *(undefined1 *)(puVar12 + 1);
    uVar11 = (long)puVar14 + uVar17 + 9 & ~uVar17;
    uVar15 = (long)puVar12 + uVar17 + 9 & ~uVar17;
    (**(code **)(lVar20 + 0x10))(uVar11,uVar15,lVar8);
    puVar1 = (undefined1 *)(uVar11 + lVar19);
    puVar2 = (undefined1 *)(uVar15 + lVar19);
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
  }
  else {
    uVar11 = (ulong)(uVar5 | 7);
    lVar9 = *param_2;
    *param_1 = lVar9;
    param_1 = (long *)(lVar9 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a1fb98 | FUN_100a1fb98 */

void FUN_100a1fb98(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar7 = *(long *)(lVar3 + -8);
  lVar6 = param_1;
  (**(code **)(lVar7 + 0x30))(param_1,1,lVar3);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar7 + 8))(param_1,lVar3);
  }
  lVar6 = *(long *)(lVar1 + -8);
  param_1 = *(long *)(lVar7 + 0x40) + param_1;
  if (*(int *)(lVar7 + 0x54) == 0) {
    param_1 = param_1 + 1;
  }
  uVar5 = param_1 + (ulong)*(byte *)(lVar6 + 0x50) &
          ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 8))(uVar5,lVar1);
  lVar3 = *(long *)(lVar6 + 0x40);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  uVar4 = (ulong)*(byte *)(*(long *)(lVar6 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x000100a1fc94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar6 + -8) + 8))
            ((lVar3 + uVar5 + 7 & 0xfffffffffffffff8) + uVar4 + 9 & (uVar4 ^ 0xffffffffffffffff),
             lVar6);
  return;
}



/* Address: 0x100a1fc98 | FUN_100a1fc98 */

void * FUN_100a1fc98(void *param_1,void *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar14,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar12 = *(long *)(lVar5 + -8);
  pvVar6 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar5);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar5);
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
    sVar3 = sVar13;
    if (iVar9 == 0) {
      sVar3 = sVar13 + 1;
    }
    _memcpy(param_1,param_2,sVar3);
  }
  if (iVar9 == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar5 = *(long *)(lVar14 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar10 = sVar13 + uVar7 + (long)param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = sVar13 + uVar7 + (long)param_2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x10))(uVar10,uVar7,lVar14);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar5 + uVar10 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar5 + uVar7 & 0xfffffffffffffff8);
  *puVar11 = *puVar8;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar14,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar14 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar10 = uVar7 + 9 + (long)puVar11 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = uVar7 + 9 + (long)puVar8 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar14 + 0x10))(uVar10,uVar7,lVar5);
  puVar1 = (undefined1 *)(uVar10 + *(long *)(lVar14 + 0x40));
  puVar2 = (undefined1 *)(uVar7 + *(long *)(lVar14 + 0x40));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}



/* Address: 0x100a1fe30 | FUN_100a1fe30 */

void * FUN_100a1fe30(void *param_1,void *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar12 = *(long *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar12,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar13 = *(long *)(lVar4 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar5 = param_1;
  (*pcVar14)(param_1,1,lVar4);
  pvVar6 = param_2;
  (*pcVar14)(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar13 + 0x18))(param_1,param_2,lVar4);
      goto LAB_100a1ff0c;
    }
    (**(code **)(lVar13 + 8))(param_1,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar13 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar4);
    goto LAB_100a1ff0c;
  }
  sVar7 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(param_1,param_2,sVar7);
LAB_100a1ff0c:
  lVar4 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  lVar13 = *(long *)(lVar12 + -8);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = lVar4 + uVar8 + (long)param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = lVar4 + uVar8 + (long)param_2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar13 + 0x18))(uVar10,uVar8,lVar12);
  lVar4 = *(long *)(lVar13 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar4 + uVar10 & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)(lVar4 + uVar8 & 0xfffffffffffffff8);
  *puVar11 = *puVar9;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar9 + 1);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar12,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar12 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar10 = uVar8 + 9 + (long)puVar11 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = uVar8 + 9 + (long)puVar9 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar12 + 0x18))(uVar10,uVar8,lVar4);
  puVar1 = (undefined1 *)(uVar10 + *(long *)(lVar12 + 0x40));
  puVar2 = (undefined1 *)(uVar8 + *(long *)(lVar12 + 0x40));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}



/* Address: 0x100a20014 | FUN_100a20014 */

void * FUN_100a20014(void *param_1,void *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  size_t sVar3;
  undefined8 uVar4;
  long lVar5;
  void *pvVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  size_t sVar13;
  long lVar14;
  
  lVar14 = *(long *)(param_3 + 0x10);
  uVar4 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar14,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar12 = *(long *)(lVar5 + -8);
  pvVar6 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar5);
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar12 + 0x54);
    sVar13 = *(size_t *)(lVar12 + 0x40);
    sVar3 = sVar13;
    if (iVar9 == 0) {
      sVar3 = sVar13 + 1;
    }
    _memcpy(param_1,param_2,sVar3);
  }
  if (iVar9 == 0) {
    sVar13 = sVar13 + 1;
  }
  lVar5 = *(long *)(lVar14 + -8);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50);
  uVar10 = sVar13 + uVar7 + (long)param_1 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = sVar13 + uVar7 + (long)param_2 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 0x20))(uVar10,uVar7,lVar14);
  lVar5 = *(long *)(lVar5 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar5 + uVar10 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(lVar5 + uVar7 & 0xfffffffffffffff8);
  *puVar11 = *puVar8;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar8 + 1);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,lVar14,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar14 = *(long *)(lVar5 + -8);
  uVar7 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar10 = uVar7 + 9 + (long)puVar11 & (uVar7 ^ 0xffffffffffffffff);
  uVar7 = uVar7 + 9 + (long)puVar8 & (uVar7 ^ 0xffffffffffffffff);
  (**(code **)(lVar14 + 0x20))(uVar10,uVar7,lVar5);
  puVar1 = (undefined1 *)(uVar10 + *(long *)(lVar14 + 0x40));
  puVar2 = (undefined1 *)(uVar7 + *(long *)(lVar14 + 0x40));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}



/* Address: 0x100a201ac | FUN_100a201ac */

void * FUN_100a201ac(void *param_1,void *param_2,long param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  size_t sVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar12 = *(long *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar12,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar13 = *(long *)(lVar4 + -8);
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar5 = param_1;
  (*pcVar14)(param_1,1,lVar4);
  pvVar6 = param_2;
  (*pcVar14)(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    if ((int)pvVar6 == 0) {
      (**(code **)(lVar13 + 0x28))(param_1,param_2,lVar4);
      goto LAB_100a20288;
    }
    (**(code **)(lVar13 + 8))(param_1,lVar4);
  }
  else if ((int)pvVar6 == 0) {
    (**(code **)(lVar13 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar13 + 0x38))(param_1,0,1,lVar4);
    goto LAB_100a20288;
  }
  sVar7 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar7 = sVar7 + 1;
  }
  _memcpy(param_1,param_2,sVar7);
LAB_100a20288:
  lVar4 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar4 = lVar4 + 1;
  }
  lVar13 = *(long *)(lVar12 + -8);
  uVar8 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar10 = lVar4 + uVar8 + (long)param_1 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = lVar4 + uVar8 + (long)param_2 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar13 + 0x28))(uVar10,uVar8,lVar12);
  lVar4 = *(long *)(lVar13 + 0x40) + 7;
  puVar11 = (undefined8 *)(lVar4 + uVar10 & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)(lVar4 + uVar8 & 0xfffffffffffffff8);
  *puVar11 = *puVar9;
  *(undefined1 *)(puVar11 + 1) = *(undefined1 *)(puVar9 + 1);
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,lVar12,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar12 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(byte *)(lVar12 + 0x50);
  uVar10 = uVar8 + 9 + (long)puVar11 & (uVar8 ^ 0xffffffffffffffff);
  uVar8 = uVar8 + 9 + (long)puVar9 & (uVar8 ^ 0xffffffffffffffff);
  (**(code **)(lVar12 + 0x28))(uVar10,uVar8,lVar4);
  puVar1 = (undefined1 *)(uVar10 + *(long *)(lVar12 + 0x40));
  puVar2 = (undefined1 *)(uVar8 + *(long *)(lVar12 + 0x40));
  *puVar1 = *puVar2;
  puVar1[1] = puVar2[1];
  return param_1;
}



/* Address: 0x100a20390 | FUN_100a20390 */

ulong FUN_100a20390(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar13;
  uint uVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  
  puVar9 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar4 = *(long *)(param_3 + 0x10);
  uVar5 = *(undefined8 *)(param_3 + 0x18);
  lVar10 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar21 = *(long *)(lVar10 + -8);
  uVar16 = *(uint *)(lVar21 + 0x54);
  uVar13 = 0;
  if (uVar16 != 0) {
    uVar13 = uVar16 - 1;
  }
  lVar22 = *(long *)(lVar4 + -8);
  uVar6 = *(uint *)(lVar22 + 0x54);
  uVar3 = uVar6;
  if (uVar6 <= uVar13) {
    uVar3 = uVar13;
  }
  lVar11 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar5,lVar4,puVar9,PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8
            );
  lVar15 = *(long *)(lVar11 + -8);
  uVar7 = *(uint *)(lVar15 + 0x54);
  if (uVar3 <= uVar7) {
    uVar3 = uVar7;
  }
  uVar14 = uVar3;
  if (uVar3 < 0xff) {
    uVar14 = 0xfe;
  }
  lVar17 = *(long *)(lVar21 + 0x40);
  if (uVar16 == 0) {
    lVar17 = lVar17 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar19 = (ulong)*(byte *)(lVar22 + 0x50);
  lVar1 = *(long *)(lVar22 + 0x40) + 7;
  uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
  if (uVar14 <= param_2 && param_2 - uVar14 != 0) {
    lVar2 = *(long *)(lVar15 + 0x40) +
            (uVar18 + 9 +
             (lVar1 + (lVar17 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
            (uVar18 ^ 0xffffffffffffffff)) + 2;
    uVar20 = (uint)lVar2;
    uVar8 = uVar20 << 3;
    if (uVar20 < 4) {
      uVar12 = ((param_2 - uVar14) + ~(-1 << (ulong)(uVar8 & 0x1f)) >> (ulong)(uVar8 & 0x1f)) + 1;
      if (uVar12 < 0x100) {
        if (uVar12 < 2) goto LAB_100a20508;
        goto LAB_100a204a0;
      }
      if (uVar12 >> 0x10 == 0) {
        uVar12 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar12 = *(uint *)((long)param_1 + lVar2);
      }
    }
    else {
LAB_100a204a0:
      uVar12 = (uint)*(byte *)((long)param_1 + lVar2);
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      if (uVar20 < 4) {
        uVar13 = uVar12 - 1 << (ulong)(uVar8 & 0x1f);
      }
      if (uVar20 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = 4;
        if (uVar20 < 4) {
          uVar16 = uVar20;
        }
        if ((int)uVar16 < 3) {
          if (uVar16 == 1) {
            uVar16 = (uint)(byte)*param_1;
          }
          else {
            uVar16 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar16 == 3) {
          uVar16 = (uint)(uint3)*param_1;
        }
        else {
          uVar16 = *param_1;
        }
      }
      uVar14 = uVar14 + (uVar16 | uVar13);
      goto LAB_100a20608;
    }
  }
LAB_100a20508:
  if (uVar13 == uVar14) {
    if (uVar16 < 2) {
      return 0;
    }
    (**(code **)(lVar21 + 0x30))(param_1,uVar16,lVar10);
    uVar13 = 0;
    if ((int)param_1 != 0) {
      uVar13 = (int)param_1 - 1;
    }
    return (ulong)uVar13;
  }
  uVar19 = (ulong)(lVar17 + uVar19 + (long)param_1) & ~uVar19;
  if (uVar6 == uVar14) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar22 + 0x30);
    lVar11 = lVar4;
    uVar7 = uVar6;
  }
  else {
    uVar19 = lVar1 + uVar19 & 0xfffffffffffffff8;
    if (uVar3 < 0xff) {
      uVar13 = (uint)*(byte *)(uVar19 + 8);
      if (uVar13 < 2) {
        return 0;
      }
      uVar14 = uVar13 + 0x7ffffffe & 0x7fffffff;
LAB_100a20608:
      return (ulong)(uVar14 + 1);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
    uVar19 = uVar18 + 9 + uVar19 & ~uVar18;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a205d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar19,uVar7,lVar11);
  return uVar19;
}



/* Address: 0x100a2062c | FUN_100a2062c */

void FUN_100a2062c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  size_t sVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  code *UNRECOVERED_JUMPTABLE;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  byte bVar23;
  long lVar24;
  
  puVar12 = PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008;
  lVar7 = *(long *)(param_4 + 0x10);
  uVar8 = *(undefined8 *)(param_4 + 0x18);
  lVar13 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Duration_100eaeaf0);
  lVar21 = *(long *)(lVar13 + -8);
  uVar9 = *(uint *)(lVar21 + 0x54);
  uVar4 = 0;
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
  }
  lVar24 = *(long *)(lVar7 + -8);
  uVar10 = *(uint *)(lVar24 + 0x54);
  uVar5 = uVar10;
  if (uVar10 <= uVar4) {
    uVar5 = uVar4;
  }
  lVar14 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar8,lVar7,puVar12,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  bVar23 = 0;
  lVar16 = *(long *)(lVar14 + -8);
  uVar15 = *(uint *)(lVar16 + 0x54);
  if (uVar5 <= uVar15) {
    uVar5 = uVar15;
  }
  uVar6 = uVar5;
  if (uVar5 < 0xff) {
    uVar6 = 0xfe;
  }
  lVar17 = *(long *)(lVar21 + 0x40);
  if (uVar9 == 0) {
    lVar17 = lVar17 + 1;
  }
  uVar19 = (ulong)*(byte *)(lVar24 + 0x50);
  lVar2 = *(long *)(lVar24 + 0x40) + 7;
  uVar18 = (ulong)*(byte *)(lVar16 + 0x50);
  sVar3 = *(long *)(lVar16 + 0x40) +
          (uVar18 + 9 +
           (lVar2 + (lVar17 + uVar19 & (uVar19 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
          (uVar18 ^ 0xffffffffffffffff)) + 2;
  uVar22 = (uint)sVar3;
  if (uVar6 <= param_3 && param_3 - uVar6 != 0) {
    if (uVar22 < 4) {
      uVar1 = ((param_3 - uVar6) + ~(-1 << (ulong)(uVar22 << 3 & 0x1f)) >>
              (ulong)(uVar22 << 3 & 0x1f)) + 1;
      bVar23 = 2;
      if (0xffff < uVar1) {
        bVar23 = 4;
      }
      if (uVar1 < 0x100) {
        bVar23 = 1 < uVar1;
      }
    }
    else {
      bVar23 = 1;
    }
  }
  if (uVar6 < param_2) {
    param_2 = param_2 + ~uVar6;
    if (uVar22 < 4) {
      iVar20 = (param_2 >> (ulong)(uVar22 << 3 & 0x1f)) + 1;
      if (uVar22 != 0) {
        uVar4 = param_2 & (-1 << (ulong)(uVar22 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar11 = (undefined2)uVar4;
        if (uVar22 == 3) {
          *(undefined2 *)param_1 = uVar11;
          *(char *)((long)param_1 + 2) = (char)(uVar4 >> 0x10);
        }
        else if (uVar22 == 2) {
          *(undefined2 *)param_1 = uVar11;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar3);
      *param_1 = param_2;
      iVar20 = 1;
    }
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(char *)((long)param_1 + sVar3) = (char)iVar20;
      }
    }
    else if (bVar23 == 2) {
      *(short *)((long)param_1 + sVar3) = (short)iVar20;
    }
    else {
      *(int *)((long)param_1 + sVar3) = iVar20;
    }
  }
  else {
    if (bVar23 < 2) {
      if (bVar23 != 0) {
        *(undefined1 *)((long)param_1 + sVar3) = 0;
      }
    }
    else if (bVar23 == 2) {
      *(undefined2 *)((long)param_1 + sVar3) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar3) = 0;
    }
    if (param_2 != 0) {
      if (uVar4 == uVar6) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x38);
        param_2 = param_2 + 1;
        lVar14 = lVar13;
        uVar15 = uVar9;
      }
      else {
        param_1 = (uint *)(lVar17 + uVar19 + (long)param_1 & ~uVar19);
        if (uVar10 == uVar6) {
          UNRECOVERED_JUMPTABLE = *(code **)(lVar24 + 0x38);
          lVar14 = lVar7;
          uVar15 = uVar10;
        }
        else {
          uVar19 = lVar2 + (long)param_1 & 0xfffffffffffffff8;
          if (uVar5 < 0xff) {
            *(char *)(uVar19 + 8) = (char)param_2 + '\x01';
            return;
          }
          UNRECOVERED_JUMPTABLE = *(code **)(lVar16 + 0x38);
          param_1 = (uint *)(uVar18 + 9 + uVar19 & ~uVar18);
        }
      }
                    /* WARNING: Could not recover jumptable at 0x000100a20928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar15,lVar14);
      return;
    }
  }
  return;
}



/* Address: 0x100a2092c | FUN_100a2092c */

void FUN_100a2092c(void)

{
  FUN_100a21a24();
  return;
}



/* Address: 0x100a20934 | FUN_100a20934 */

long * FUN_100a20934(long *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long *plVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar10 = *(long *)(lVar5 + -8);
  uVar11 = *(ulong *)(lVar10 + 0x40);
  iVar4 = *(int *)(lVar10 + 0x54);
  uVar1 = uVar11;
  if (iVar4 == 0) {
    uVar1 = uVar11 + 1;
  }
  uVar8 = (ulong)*(uint *)(lVar10 + 0x50) & 0xff;
  if (((uint)uVar8 < 8 && (*(uint *)(lVar10 + 0x50) & 0x100000) == 0) && uVar1 < 0x19) {
    if (iVar4 == 0) {
      if (*(byte *)((long)param_2 + uVar11) != 0) {
        uVar9 = (uint)uVar11;
        uVar2 = 0;
        if (uVar9 < 4) {
          uVar2 = *(byte *)((long)param_2 + uVar11) - 1 << (ulong)((uVar9 & 3) << 3);
        }
        if (uVar9 == 0) {
          uVar9 = 0;
        }
        else {
          uVar3 = 4;
          if (uVar9 < 4) {
            uVar3 = uVar9;
          }
          if ((int)uVar3 < 3) {
            if (uVar3 == 1) {
              uVar9 = (uint)(byte)*param_2;
            }
            else {
              uVar9 = (uint)(ushort)*param_2;
            }
          }
          else if (uVar3 == 3) {
            uVar9 = (uint)(uint3)*param_2;
          }
          else {
            uVar9 = *param_2;
          }
        }
        if ((uVar9 | uVar2) != 0xffffffff) goto LAB_100a20a78;
      }
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar5);
      *(undefined1 *)((long)param_1 + uVar11) = 0;
    }
    else {
      puVar6 = param_2;
      (**(code **)(lVar10 + 0x30))(param_2,iVar4,lVar5);
      if ((int)puVar6 != 0) {
LAB_100a20a78:
        plVar7 = _memcpy(param_1,param_2,uVar1);
        return plVar7;
      }
      (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar5);
    }
  }
  else {
    lVar5 = *(long *)param_2;
    *param_1 = lVar5;
    param_1 = (long *)(lVar5 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a20ab4 | FUN_100a20ab4 */

void FUN_100a20ab4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar7 = *(long *)(lVar3 + -8);
  if (*(int *)(lVar7 + 0x54) == 0) {
    uVar6 = *(ulong *)(lVar7 + 0x40);
    if (*(byte *)((long)param_1 + uVar6) != 0) {
      uVar5 = (uint)uVar6;
      uVar1 = 0;
      if (uVar5 < 4) {
        uVar1 = *(byte *)((long)param_1 + uVar6) - 1 << (ulong)((uVar5 & 3) << 3);
      }
      if (uVar5 != 0) {
        uVar2 = 4;
        if (uVar5 < 4) {
          uVar2 = uVar5;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar6 = (ulong)(byte)*param_1;
          }
          else {
            uVar6 = (ulong)(ushort)*param_1;
          }
        }
        else if (uVar2 == 3) {
          uVar6 = (ulong)(uint3)*param_1;
        }
        else {
          uVar6 = (ulong)*param_1;
        }
      }
      if (((uint)uVar6 | uVar1) != 0xffffffff) {
        return;
      }
    }
  }
  else {
    puVar4 = param_1;
    (**(code **)(lVar7 + 0x30))(param_1,*(int *)(lVar7 + 0x54),lVar3);
    if ((int)puVar4 != 0) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100a20bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))(param_1,lVar3);
  return;
}



/* Address: 0x100a20bb4 | FUN_100a20bb4 */

void * FUN_100a20bb4(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar9 = *(long *)(lVar4 + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  sVar8 = *(size_t *)(lVar9 + 0x40);
  if (iVar3 == 0) {
    if (*(byte *)((long)param_2 + sVar8) != 0) {
      uVar7 = (uint)sVar8;
      uVar1 = 0;
      if (uVar7 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar8) - 1 << (ulong)((uVar7 & 3) << 3);
      }
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar7 < 4) {
          uVar2 = uVar7;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar7 = (uint)(byte)*param_2;
          }
          else {
            uVar7 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar7 = (uint)(uint3)*param_2;
        }
        else {
          uVar7 = *param_2;
        }
      }
      if ((uVar7 | uVar1) != 0xffffffff) goto LAB_100a20cac;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar4);
    *(undefined1 *)((long)param_1 + sVar8) = 0;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,iVar3,lVar4);
    if ((int)puVar5 != 0) {
LAB_100a20cac:
      if (iVar3 == 0) {
        sVar8 = sVar8 + 1;
      }
      pvVar6 = _memcpy(param_1,param_2,sVar8);
      return pvVar6;
    }
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar4);
  }
  return param_1;
}



/* Address: 0x100a20d00 | FUN_100a20d00 */

uint * FUN_100a20d00(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar5;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar4 + -8);
  iVar2 = *(int *)(lVar11 + 0x54);
  sVar10 = *(size_t *)(lVar11 + 0x40);
  if (iVar2 == 0) {
    uVar9 = (uint)sVar10;
    uVar7 = uVar9 << 3;
    if (*(byte *)((long)param_1 + sVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_1 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_1;
          }
          else {
            uVar8 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_1;
        }
        else {
          uVar8 = *param_1;
        }
      }
      if ((uVar8 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + sVar10) != 0) {
          uVar1 = 0;
          if (uVar9 < 4) {
            uVar1 = *(byte *)((long)param_2 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
          }
          if (uVar9 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 4;
            if (uVar9 < 4) {
              uVar7 = uVar9;
            }
            if ((int)uVar7 < 3) {
              if (uVar7 == 1) {
                uVar7 = (uint)(byte)*param_2;
              }
              else {
                uVar7 = (uint)(ushort)*param_2;
              }
            }
            else if (uVar7 == 3) {
              uVar7 = (uint)(uint3)*param_2;
            }
            else {
              uVar7 = *param_2;
            }
          }
          if ((uVar7 | uVar1) != 0xffffffff) goto LAB_100a20eec;
        }
        (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar4);
        *(byte *)((long)param_1 + sVar10) = 0;
        return param_1;
      }
    }
    if (*(byte *)((long)param_2 + sVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar9 < 4) {
          uVar7 = uVar9;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_2;
          }
          else {
            uVar7 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_2;
        }
        else {
          uVar7 = *param_2;
        }
      }
      iVar3 = (uVar7 | uVar1) + 1;
      goto LAB_100a20ed8;
    }
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x30);
    puVar6 = param_1;
    (*pcVar12)(param_1,iVar2,lVar4);
    puVar5 = param_2;
    (*pcVar12)(param_2,iVar2,lVar4);
    iVar3 = (int)puVar5;
    if ((int)puVar6 != 0) {
      if (iVar3 != 0) goto LAB_100a20eec;
      pcVar12 = *(code **)(lVar11 + 0x10);
      goto LAB_100a20f18;
    }
LAB_100a20ed8:
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar4);
LAB_100a20eec:
      if (iVar2 == 0) {
        sVar10 = sVar10 + 1;
      }
      puVar6 = _memcpy(param_1,param_2,sVar10);
      return puVar6;
    }
  }
  pcVar12 = *(code **)(lVar11 + 0x18);
LAB_100a20f18:
  (*pcVar12)(param_1,param_2,lVar4);
  return param_1;
}



/* Address: 0x100a20f78 | FUN_100a20f78 */

void * FUN_100a20f78(void *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint *puVar5;
  void *pvVar6;
  uint uVar7;
  size_t sVar8;
  long lVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar9 = *(long *)(lVar4 + -8);
  iVar3 = *(int *)(lVar9 + 0x54);
  sVar8 = *(size_t *)(lVar9 + 0x40);
  if (iVar3 == 0) {
    if (*(byte *)((long)param_2 + sVar8) != 0) {
      uVar7 = (uint)sVar8;
      uVar1 = 0;
      if (uVar7 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar8) - 1 << (ulong)((uVar7 & 3) << 3);
      }
      if (uVar7 == 0) {
        uVar7 = 0;
      }
      else {
        uVar2 = 4;
        if (uVar7 < 4) {
          uVar2 = uVar7;
        }
        if ((int)uVar2 < 3) {
          if (uVar2 == 1) {
            uVar7 = (uint)(byte)*param_2;
          }
          else {
            uVar7 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar2 == 3) {
          uVar7 = (uint)(uint3)*param_2;
        }
        else {
          uVar7 = *param_2;
        }
      }
      if ((uVar7 | uVar1) != 0xffffffff) goto LAB_100a21070;
    }
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar4);
    *(undefined1 *)((long)param_1 + sVar8) = 0;
  }
  else {
    puVar5 = param_2;
    (**(code **)(lVar9 + 0x30))(param_2,iVar3,lVar4);
    if ((int)puVar5 != 0) {
LAB_100a21070:
      if (iVar3 == 0) {
        sVar8 = sVar8 + 1;
      }
      pvVar6 = _memcpy(param_1,param_2,sVar8);
      return pvVar6;
    }
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar4);
  }
  return param_1;
}



/* Address: 0x100a210c4 | FUN_100a210c4 */

uint * FUN_100a210c4(uint *param_1,uint *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  size_t sVar10;
  long lVar11;
  code *pcVar12;
  uint *puVar5;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar11 = *(long *)(lVar4 + -8);
  iVar2 = *(int *)(lVar11 + 0x54);
  sVar10 = *(size_t *)(lVar11 + 0x40);
  if (iVar2 == 0) {
    uVar9 = (uint)sVar10;
    uVar7 = uVar9 << 3;
    if (*(byte *)((long)param_1 + sVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_1 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar9 < 4) {
          uVar8 = uVar9;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_1;
          }
          else {
            uVar8 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_1;
        }
        else {
          uVar8 = *param_1;
        }
      }
      if ((uVar8 | uVar1) != 0xffffffff) {
        if (*(byte *)((long)param_2 + sVar10) != 0) {
          uVar1 = 0;
          if (uVar9 < 4) {
            uVar1 = *(byte *)((long)param_2 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
          }
          if (uVar9 == 0) {
            uVar7 = 0;
          }
          else {
            uVar7 = 4;
            if (uVar9 < 4) {
              uVar7 = uVar9;
            }
            if ((int)uVar7 < 3) {
              if (uVar7 == 1) {
                uVar7 = (uint)(byte)*param_2;
              }
              else {
                uVar7 = (uint)(ushort)*param_2;
              }
            }
            else if (uVar7 == 3) {
              uVar7 = (uint)(uint3)*param_2;
            }
            else {
              uVar7 = *param_2;
            }
          }
          if ((uVar7 | uVar1) != 0xffffffff) goto LAB_100a212b0;
        }
        (**(code **)(lVar11 + 0x20))(param_1,param_2,lVar4);
        *(byte *)((long)param_1 + sVar10) = 0;
        return param_1;
      }
    }
    if (*(byte *)((long)param_2 + sVar10) != 0) {
      uVar1 = 0;
      if (uVar9 < 4) {
        uVar1 = *(byte *)((long)param_2 + sVar10) - 1 << (ulong)(uVar7 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = 4;
        if (uVar9 < 4) {
          uVar7 = uVar9;
        }
        if ((int)uVar7 < 3) {
          if (uVar7 == 1) {
            uVar7 = (uint)(byte)*param_2;
          }
          else {
            uVar7 = (uint)(ushort)*param_2;
          }
        }
        else if (uVar7 == 3) {
          uVar7 = (uint)(uint3)*param_2;
        }
        else {
          uVar7 = *param_2;
        }
      }
      iVar3 = (uVar7 | uVar1) + 1;
      goto LAB_100a2129c;
    }
  }
  else {
    pcVar12 = *(code **)(lVar11 + 0x30);
    puVar6 = param_1;
    (*pcVar12)(param_1,iVar2,lVar4);
    puVar5 = param_2;
    (*pcVar12)(param_2,iVar2,lVar4);
    iVar3 = (int)puVar5;
    if ((int)puVar6 != 0) {
      if (iVar3 != 0) goto LAB_100a212b0;
      pcVar12 = *(code **)(lVar11 + 0x20);
      goto LAB_100a212dc;
    }
LAB_100a2129c:
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 8))(param_1,lVar4);
LAB_100a212b0:
      if (iVar2 == 0) {
        sVar10 = sVar10 + 1;
      }
      puVar6 = _memcpy(param_1,param_2,sVar10);
      return puVar6;
    }
  }
  pcVar12 = *(code **)(lVar11 + 0x28);
LAB_100a212dc:
  (*pcVar12)(param_1,param_2,lVar4);
  return param_1;
}



/* Address: 0x100a2133c | FUN_100a2133c */

int FUN_100a2133c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar1 = uVar2 - 1;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (uVar2 == 0) {
    uVar7 = uVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_100a2140c;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar3 & 0x1f)) >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_100a2140c;
      goto LAB_100a213a4;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_100a213a4:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_100a2140c:
  if (uVar2 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))(param_1,uVar2,lVar4);
  if ((int)param_1 != 0) {
    return (int)param_1 + -1;
  }
  return 0;
}



/* Address: 0x100a21488 | FUN_100a21488 */

void FUN_100a21488(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  bVar11 = 0;
  lVar8 = *(long *)(lVar5 + -8);
  uVar3 = *(uint *)(lVar8 + 0x54);
  uVar9 = 0;
  if (uVar3 != 0) {
    uVar9 = uVar3 - 1;
  }
  sVar7 = *(size_t *)(lVar8 + 0x40);
  sVar2 = sVar7;
  if (uVar3 == 0) {
    sVar2 = sVar7 + 1;
  }
  uVar6 = (uint)sVar2;
  if (uVar9 <= param_3 && param_3 - uVar9 != 0) {
    if (uVar6 < 4) {
      uVar1 = ((param_3 - uVar9) + ~(-1 << (ulong)(uVar6 << 3 & 0x1f)) >> (ulong)(uVar6 << 3 & 0x1f)
              ) + 1;
      bVar11 = 2;
      if (0xffff < uVar1) {
        bVar11 = 4;
      }
      if (uVar1 < 0x100) {
        bVar11 = 1 < uVar1;
      }
    }
    else {
      bVar11 = 1;
    }
  }
  if (uVar9 < param_2) {
    param_2 = param_2 + ~uVar9;
    if (uVar6 < 4) {
      iVar10 = (param_2 >> (ulong)(uVar6 << 3 & 0x1f)) + 1;
      if (uVar6 != 0) {
        uVar9 = param_2 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar9;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar9 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar10 = 1;
    }
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar10;
      }
    }
    else if (bVar11 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar10;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar10;
    }
  }
  else {
    if (bVar11 < 2) {
      if (bVar11 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar11 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
      if (param_2 < uVar3) {
                    /* WARNING: Could not recover jumptable at 0x000100a21610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1,param_2 + 1,uVar3,lVar5);
        return;
      }
      uVar6 = (uint)sVar7;
      uVar9 = 0xffffffff;
      if (uVar6 < 4) {
        uVar9 = ~(-1 << (ulong)((uVar6 & 3) << 3));
      }
      if (uVar6 != 0) {
        uVar9 = uVar9 & param_2 - uVar3;
        uVar3 = 4;
        if (uVar6 < 4) {
          uVar3 = uVar6;
        }
        _bzero(param_1,sVar7);
        if ((int)uVar3 < 3) {
          if (uVar3 == 1) {
            *(char *)param_1 = (char)uVar9;
          }
          else {
            *(short *)param_1 = (short)uVar9;
          }
        }
        else if (uVar3 == 3) {
          *(short *)param_1 = (short)uVar9;
          *(char *)((long)param_1 + 2) = (char)(uVar9 >> 0x10);
        }
        else {
          *param_1 = uVar9;
        }
      }
    }
  }
  return;
}



/* Address: 0x100a216e4 | FUN_100a216e4 */

uint * FUN_100a216e4(uint *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar3 + -8);
  if (*(int *)(lVar5 + 0x54) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a21734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 0x30))(param_1,*(int *)(lVar5 + 0x54),lVar3);
    return param_1;
  }
  uVar7 = *(ulong *)(lVar5 + 0x40);
  if (*(byte *)((long)param_1 + uVar7) == 0) {
    puVar4 = (uint *)0x0;
  }
  else {
    uVar6 = (uint)uVar7;
    uVar1 = 0;
    if (uVar6 < 4) {
      uVar1 = *(byte *)((long)param_1 + uVar7) - 1 << (ulong)((uVar6 & 3) << 3);
    }
    if (uVar6 != 0) {
      uVar2 = 4;
      if (uVar6 < 4) {
        uVar2 = uVar6;
      }
      if ((int)uVar2 < 3) {
        if (uVar2 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar2 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    puVar4 = (uint *)(ulong)(((uint)uVar7 | uVar1) + 1);
  }
  return puVar4;
}



/* Address: 0x100a217c0 | FUN_100a217c0 */

void FUN_100a217c0(uint *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  size_t sVar7;
  char cVar8;
  uint uVar9;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Clock_100eaf008,
             PTR___associated_type_descriptor_for_Swift_Clock_Instant_100eaeae8);
  lVar5 = *(long *)(lVar4 + -8);
  uVar2 = *(uint *)(lVar5 + 0x54);
  sVar7 = *(size_t *)(lVar5 + 0x40);
  uVar9 = (uint)param_2;
  if (uVar2 < uVar9) {
    uVar9 = uVar9 + ~uVar2;
    uVar6 = (uint)sVar7;
    if (uVar6 < 4) {
      cVar8 = (char)(uVar9 >> (ulong)(uVar6 << 3 & 0x1f)) + '\x01';
      if (uVar6 != 0) {
        uVar1 = uVar9 & (-1 << (ulong)(uVar6 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar7);
        uVar3 = (undefined2)uVar1;
        if (uVar6 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar6 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)uVar9;
        }
      }
    }
    else {
      _bzero(param_1,sVar7);
      *param_1 = uVar9;
      cVar8 = '\x01';
    }
    if (uVar2 == 0) {
      *(char *)((long)param_1 + sVar7) = cVar8;
    }
  }
  else {
    if (uVar2 == 0) {
      *(undefined1 *)((long)param_1 + sVar7) = 0;
    }
    if (uVar9 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a218b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2,uVar2,lVar4);
      return;
    }
  }
  return;
}



/* Address: 0x100a218ec | FUN_100a218ec */

void FUN_100a218ec(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a218f8 | FUN_100a218f8 */

void FUN_100a218f8(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100a21990 | FUN_100a21990 */

void FUN_100a21990(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100a2199c | FUN_100a2199c */

void FUN_100a2199c(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100a219a8 | FUN_100a219a8 */

void FUN_100a219a8(void)

{
  long unaff_x20;
  
  FUN_100a1dce4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


