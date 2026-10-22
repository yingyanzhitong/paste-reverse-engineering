/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bce2e0 | FUN_100bce2e0 */

void FUN_100bce2e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = PTR___swiftEmptyArrayStorage_100eae0d8;
  param_1[3] = param_2;
  param_1[4] = param_3;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100bce2fc | FUN_100bce2fc */

void FUN_100bce2fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  *param_1 = *param_2;
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return;
}



/* Address: 0x100bce318 | FUN_100bce318 */

void FUN_100bce318(undefined8 *param_1,long param_2,char *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_100eae0d8;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[5] = 0;
  if (param_2 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bce3b8);
    (*pcVar2)();
  }
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::reserveCapacity(param_2 << 1,SVar4);
  pcVar2 = FUN_100b6f168;
  pcVar3 = (char *)0x0;
  FUN_100bceb24(param_3);
  lVar1 = (long)param_3 * 3;
  if (SUB168(SEXT816((long)param_3) * SEXT816(3),8) == lVar1 >> 0x3f) {
    if (!SCARRY8(param_2,lVar1)) {
      SVar5.bridgeObject = pcVar2;
      SVar5.str = pcVar3;
      Swift::String::reserveCapacity(param_2 + lVar1,SVar5);
      FUN_100b5e408();
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100bce3c0);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100bce3bc);
  (*pcVar2)();
}



/* Address: 0x100bce3c0 | FUN_100bce3c0 */

void FUN_100bce3c0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  return;
}



/* Address: 0x100bce3fc | FUN_100bce3fc */

void FUN_100bce3fc(code *param_1,undefined8 param_2)

{
  FUN_100bcf078();
  (*param_1)();
  _swift_bridgeObjectRetain(param_2);
  FUN_100bce450(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100bce450 | FUN_100bce450 */

void FUN_100bce450(char *param_1,void *param_2,char *param_3,void *param_4,undefined8 param_5)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  void *pvVar3;
  
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  pcVar2 = param_3;
  pvVar3 = param_4;
  Swift::String::append(SVar8,SVar11);
  lVar7 = *(long *)(param_3 + 0x28);
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar12.bridgeObject = pvVar3;
  SVar12.str = pcVar2;
  Swift::String::append(SVar9,SVar12);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x7d;
  SVar13.bridgeObject = pvVar3;
  SVar13.str = pcVar2;
  Swift::String::append(SVar10,SVar13);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x7b;
  SVar14.bridgeObject = pvVar3;
  SVar14.str = pcVar2;
  Swift::String::append(SVar9,SVar14);
  _swift_bridgeObjectRelease(0xe100000000000000);
  FUN_100b69598(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain(param_5);
  FUN_100b67fb8(param_4,param_5);
  FUN_100b93a28();
  lVar6 = *(long *)((*(ulong *)(param_3 + 0x10) & 0xffffffffffffff8) + 0x10);
  FUN_100b93c78(lVar6);
  uVar5 = *(ulong *)(param_3 + 0x10);
  uVar4 = uVar5 & 0xffffffffffffff8;
  *(long *)(uVar4 + 0x10) = lVar6 + 1;
  *(void **)(uVar4 + lVar6 * 8 + 0x20) = param_4;
  _swift_bridgeObjectRelease(param_5);
  *(ulong *)(param_3 + 0x10) = uVar5;
  if (!SCARRY8(lVar7,1)) {
    *(long *)(param_3 + 0x28) = lVar7 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce578);
  (*pcVar1)();
}



/* Address: 0x100bce578 | FUN_100bce578 */

void FUN_100bce578(char *param_1,void *param_2,code *param_3,void *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  SVar10.bridgeObject = param_4;
  SVar10.str = (char *)param_3;
  pcVar1 = param_3;
  Swift::String::append(SVar7,SVar10);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = (char *)pcVar1;
  Swift::String::append(SVar8,SVar11);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = (char *)0x7d;
  SVar12.bridgeObject = param_4;
  SVar12.str = (char *)pcVar1;
  Swift::String::append(SVar9,SVar12);
  uVar2 = 0xe100000000000000;
  SVar8.bridgeObject = (void *)0xe100000000000000;
  SVar8.str = (char *)0x7b;
  SVar13.bridgeObject = param_4;
  SVar13.str = (char *)pcVar1;
  Swift::String::append(SVar8,SVar13);
  _swift_bridgeObjectRelease();
  (*param_3)();
  FUN_100b93a28();
  lVar5 = *(long *)((*(ulong *)(unaff_x20 + 0x10) & 0xffffffffffffff8) + 0x10);
  FUN_100b93c78(lVar5);
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = uVar3 & 0xffffffffffffff8;
  *(long *)(uVar4 + 0x10) = lVar5 + 1;
  *(undefined8 *)(uVar4 + lVar5 * 8 + 0x20) = uVar2;
  *(ulong *)(unaff_x20 + 0x10) = uVar3;
  if (!SCARRY8(lVar6,1)) {
    *(long *)(unaff_x20 + 0x28) = lVar6 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce678);
  (*pcVar1)();
}



/* Address: 0x100bce678 | FUN_100bce678 */

void FUN_100bce678(code *param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long unaff_x19;
  long unaff_x24;
  String SVar6;
  String SVar7;
  
  FUN_100bcf078();
  (*param_1)();
  bVar4 = ((ulong)param_1 & 1) == 0;
  pcVar1 = (char *)0x65757274;
  if (bVar4) {
    pcVar1 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (bVar4) {
    puVar2 = &DAT_e500000000000000;
  }
  SVar6.bridgeObject = puVar2;
  SVar6.str = pcVar1;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar6,SVar7);
  FUN_100bceff4();
  puVar5 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100bcf09c(PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748
               );
  FUN_100bcf040();
  FUN_100b6f8ec();
  FUN_100bcefd8();
  FUN_100bcf050();
  FUN_100b6f8ec();
  FUN_100bcf048();
  _objc_allocWithZone();
  FUN_100b68074((uint)param_1 & 1);
  FUN_100bcefe8();
  FUN_100bcefc0();
  FUN_100bcefa0();
  *(undefined **)(unaff_x19 + 0x10) = puVar5;
  if (!SCARRY8(unaff_x24,1)) {
    *(long *)(unaff_x19 + 0x28) = unaff_x24 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100bce748);
  (*pcVar3)();
}



/* Address: 0x100bce748 | FUN_100bce748 */

void FUN_100bce748(code *param_1)

{
  code *pcVar1;
  long unaff_x19;
  long lVar2;
  
  FUN_100bcf078();
  (*param_1)();
  pcVar1 = param_1;
  FUN_100bcf090();
  FUN_100bcf00c();
  lVar2 = *(long *)(unaff_x19 + 0x28);
  FUN_100bcf090();
  FUN_100bcf040();
  FUN_100b6f8ec();
  FUN_100bcefd8();
  FUN_100bcf050();
  FUN_100b6f8ec();
  FUN_100bcf048();
  _objc_allocWithZone();
  FUN_100b6811c(param_1);
  FUN_100bcefe8();
  FUN_100bcefc0();
  FUN_100bcefa0();
  *(code **)(unaff_x19 + 0x10) = pcVar1;
  if (!SCARRY8(lVar2,1)) {
    *(long *)(unaff_x19 + 0x28) = lVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce814);
  (*pcVar1)();
}



/* Address: 0x100bce814 | FUN_100bce814 */

void FUN_100bce814(double param_1,code *param_2)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x24;
  String SVar2;
  
  FUN_100bcf078();
  (*param_2)();
  SVar2 = double::get_description(param_1);
  FUN_100bcf00c(SVar2.str,SVar2.bridgeObject);
  FUN_100bceff4();
  FUN_100bcf09c(PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748
               );
  FUN_100bcf040();
  FUN_100b678c0();
  FUN_100bcefd8();
  FUN_100bcf030();
  FUN_100b678c0();
  FUN_100bcf048();
  _objc_allocWithZone();
  FUN_100bcf084();
  FUN_100bcefe8();
  FUN_100bcefc0();
  FUN_100bcefa0();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  if (!SCARRY8(unaff_x24,1)) {
    *(long *)(unaff_x19 + 0x28) = unaff_x24 + 1;
    FUN_100bcf018();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce8a8);
  (*pcVar1)();
}



/* Address: 0x100bce8a8 | FUN_100bce8a8 */

void FUN_100bce8a8(float param_1,code *param_2)

{
  code *pcVar1;
  long unaff_x19;
  undefined8 unaff_x20;
  long unaff_x24;
  String SVar2;
  
  FUN_100bcf078();
  (*param_2)();
  SVar2 = float::get_description(param_1);
  FUN_100bcf00c(SVar2.str,SVar2.bridgeObject);
  FUN_100bceff4();
  FUN_100bcf09c(PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Int___Swift_CustomStringConvertible_in_Swift_100eac748
               );
  FUN_100bcf040();
  FUN_100b678c0();
  FUN_100bcefd8();
  FUN_100bcf030();
  FUN_100b678c0();
  FUN_100bcf048();
  _objc_allocWithZone();
  FUN_100bcf084();
  FUN_100bcefe8();
  FUN_100bcefc0();
  FUN_100bcefa0();
  *(undefined8 *)(unaff_x19 + 0x10) = unaff_x20;
  if (!SCARRY8(unaff_x24,1)) {
    *(long *)(unaff_x19 + 0x28) = unaff_x24 + 1;
    FUN_100bcf018();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bce940);
  (*pcVar1)();
}



/* Address: 0x100bce940 | FUN_100bce940 */

void FUN_100bce940(code *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  long lVar2;
  String SVar3;
  undefined1 auStack_80 [16];
  long local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  
  lVar2 = *(long *)(param_3 + -8);
  puVar1 = auStack_80 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_1)(puVar1);
  SVar3 = Swift::CustomStringConvertible::get_description();
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = puVar1;
  FUN_100bce578(SVar3.str,SVar3.bridgeObject,FUN_100bcebb0,auStack_80);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  (**(code **)(lVar2 + 8))(puVar1,param_3);
  return;
}



/* Address: 0x100bce9f4 | FUN_100bce9f4 */

void FUN_100bce9f4(void)

{
  undefined8 uVar1;
  String SVar2;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  uVar1 = 0;
  FUN_100b69598(0);
  _objc_allocWithZone();
  FUN_100b67fb8(SVar2.str,SVar2.bridgeObject,uVar1);
  return;
}



/* Address: 0x100bcea44 | thunk_FUN_100bce318 */

void thunk_FUN_100bce318(void)

{
  FUN_100bce318();
  return;
}



/* Address: 0x100bcea48 | FUN_100bcea48 */

void FUN_100bcea48(undefined8 *param_1)

{
  FUN_100bce3c0(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bcea54 | thunk_FUN_100bce2fc */

void thunk_FUN_100bce2fc(void)

{
  FUN_100bce2fc();
  return;
}



/* Address: 0x100bcea58 | FUN_100bcea58 */

void FUN_100bcea58(undefined8 *param_1)

{
  FUN_100bce2e0(*param_1,param_1[1]);
  return;
}



/* Address: 0x100bcea64 | FUN_100bcea64 */

void FUN_100bcea64(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100089044);
  return;
}



/* Address: 0x100bcea70 | FUN_100bcea70 */

void FUN_100bcea70(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceb24(param_1,param_2,FUN_100b6ea6c);
  return;
}



/* Address: 0x100bcea7c | FUN_100bcea7c */

void FUN_100bcea7c(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100b6ebc4);
  return;
}



/* Address: 0x100bcea88 | FUN_100bcea88 */

void FUN_100bcea88(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceb24(param_1,param_2,FUN_100b6edb8);
  return;
}



/* Address: 0x100bcea94 | FUN_100bcea94 */

void FUN_100bcea94(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100b6edd4);
  return;
}



/* Address: 0x100bceaa0 | FUN_100bceaa0 */

void FUN_100bceaa0(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100b6ede8);
  return;
}



/* Address: 0x100bceaac | FUN_100bceaac */

void FUN_100bceaac(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100b6ee8c);
  return;
}



/* Address: 0x100bceab8 | FUN_100bceab8 */

void FUN_100bceab8(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceac4(param_1,param_2,FUN_100b6f004);
  return;
}



/* Address: 0x100bceac4 | FUN_100bceac4 */

void FUN_100bceac4(undefined8 param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *unaff_x19;
  long *unaff_x20;
  long unaff_x21;
  long unaff_x23;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  iVar1 = (int)param_1;
  FUN_100bcf060();
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = unaff_x21;
  if ((iVar1 == 0) || ((long)(*(ulong *)(unaff_x21 + 0x18) >> 1) < unaff_x23)) {
    (*unaff_x19)();
    *unaff_x20 = CONCAT44(uVar2,iVar1);
  }
  FUN_100b5e408();
  return;
}



/* Address: 0x100bceb18 | FUN_100bceb18 */

void FUN_100bceb18(undefined8 param_1,undefined8 param_2)

{
  FUN_100bceb24(param_1,param_2,FUN_100b6f14c);
  return;
}



/* Address: 0x100bceb24 | FUN_100bceb24 */

void FUN_100bceb24(int param_1)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  code *unaff_x19;
  undefined8 *unaff_x20;
  undefined *unaff_x21;
  uint unaff_w22;
  long unaff_x23;
  undefined8 uVar3;
  
  FUN_100bcf060();
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = unaff_x21;
  uVar3 = 0;
  if (((param_1 != 0) && (-1 < (long)unaff_x21)) && (((ulong)unaff_x21 >> 0x3e & 1) == 0)) {
    if (unaff_x23 <= (long)(*(ulong *)(((ulong)unaff_x21 & 0xffffffffffffff8) + 0x18) >> 1))
    goto LAB_100bceb94;
    uVar3 = 1;
  }
  if ((ulong)unaff_x21 >> 0x3e == 0) {
    lVar2 = *(long *)(((ulong)unaff_x21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)unaff_x21 & 0xffffffffffffff8);
    if ((long)unaff_x21 < 0) {
      _Var1.unknown = unaff_x21;
    }
    lVar2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar2 <= unaff_x23) {
    lVar2 = unaff_x23;
  }
  (*unaff_x19)(uVar3,lVar2,unaff_w22 & 1);
  *unaff_x20 = uVar3;
LAB_100bceb94:
  FUN_100b5e408();
  return;
}



/* Address: 0x100bcebb0 | FUN_100bcebb0 */

void FUN_100bcebb0(void)

{
  long unaff_x20;
  
  FUN_100bce9f4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100bcebbc | thunk_FUN_100bcebc0 */

void thunk_FUN_100bcebc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e010,&DAT_100f3ba40);
  DAT_101047ca8 = pTVar1;
  return;
}



/* Address: 0x100bcebc0 | FUN_100bcebc0 */

void FUN_100bcebc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047ca8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e010;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e010,&DAT_100f3ba40);
  DAT_101047ca8 = pTVar1;
  return;
}



/* Address: 0x100bcec00 | thunk_FUN_100bcec04 */

void thunk_FUN_100bcec04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9df90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9df90,&DAT_100f3bac8);
  DAT_101047cb0 = pTVar1;
  return;
}



/* Address: 0x100bcec04 | FUN_100bcec04 */

void FUN_100bcec04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9df90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9df90,&DAT_100f3bac8);
  DAT_101047cb0 = pTVar1;
  return;
}



/* Address: 0x100bcec44 | thunk_FUN_100bcec48 */

void thunk_FUN_100bcec48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e050,&DAT_100f3ba40);
  DAT_101047cb8 = pTVar1;
  return;
}



/* Address: 0x100bcec48 | FUN_100bcec48 */

void FUN_100bcec48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e050;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e050,&DAT_100f3ba40);
  DAT_101047cb8 = pTVar1;
  return;
}



/* Address: 0x100bcec88 | thunk_FUN_100bcec8c */

void thunk_FUN_100bcec8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e090,&DAT_100f3ba40);
  DAT_101047cc0 = pTVar1;
  return;
}



/* Address: 0x100bcec8c | FUN_100bcec8c */

void FUN_100bcec8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101047cc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9e090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9e090,&DAT_100f3ba40);
  DAT_101047cc0 = pTVar1;
  return;
}



/* Address: 0x100bceccc | FUN_100bceccc */

undefined8 * FUN_100bceccc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  param_1[4] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100bced20 | FUN_100bced20 */

undefined8 * FUN_100bced20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100bceda4 | FUN_100bceda4 */

undefined8 * FUN_100bceda4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100bcedf8 | FUN_100bcedf8 */

undefined1  [16] FUN_100bcedf8(void)

{
  return ZEXT816(0x100f3ba40);
}



/* Address: 0x100bcee08 | thunk_FUN_100af45c8 */

void thunk_FUN_100af45c8(void)

{
  FUN_100af45c8();
  return;
}



/* Address: 0x100bcee0c | FUN_100bcee0c */

undefined8 * FUN_100bcee0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100bcee60 | FUN_100bcee60 */

undefined8 * FUN_100bcee60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[5] = param_2[5];
  return param_1;
}



/* Address: 0x100bceeec | FUN_100bceeec */

undefined8 * FUN_100bceeec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  return param_1;
}



/* Address: 0x100bcef48 | FUN_100bcef48 */

int FUN_100bcef48(int *param_1,int param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    iVar1 = *param_1 + 0x7fffffff;
  }
  else {
    uVar2 = *(ulong *)(param_1 + 2);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2;
  }
  return iVar1 + 1;
}



/* Address: 0x100bcef88 | FUN_100bcef88 */

undefined1  [16] FUN_100bcef88(void)

{
  return ZEXT816(0x100f3bac8);
}



/* Address: 0x100bcef98 | thunk_FUN_100bcea58 */

void thunk_FUN_100bcea58(void)

{
  FUN_100bcea58();
  return;
}



/* Address: 0x100bcef9c | thunk_FUN_100af45c8 */

void thunk_FUN_100af45c8(void)

{
  FUN_100af45c8();
  return;
}



/* Address: 0x100bcefa0 | FUN_100bcefa0 */

void FUN_100bcefa0(void)

{
  ulong uVar1;
  long unaff_x19;
  undefined8 unaff_x22;
  long unaff_x23;
  
  uVar1 = *(ulong *)(unaff_x19 + 0x10) & 0xffffffffffffff8;
  *(long *)(uVar1 + 0x10) = unaff_x23 + 1;
  *(undefined8 *)(uVar1 + unaff_x23 * 8 + 0x20) = unaff_x22;
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100bcefc0 | FUN_100bcefc0 */

void FUN_100bcefc0(void)

{
  long unaff_x19;
  
  FUN_100b93c78(*(undefined8 *)((*(ulong *)(unaff_x19 + 0x10) & 0xffffffffffffff8) + 0x10));
  return;
}



/* Address: 0x100bcefd8 | FUN_100bcefd8 */

void FUN_100bcefd8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = (void *)0xe100000000000000;
  SVar1.str = (char *)0x7d;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bcefe8 | FUN_100bcefe8 */

void FUN_100bcefe8(void)

{
  FUN_100b93a28();
  return;
}



/* Address: 0x100bceff4 | FUN_100bceff4 */

void FUN_100bceff4(void)

{
  return;
}



/* Address: 0x100bcf00c | FUN_100bcf00c */

void FUN_100bcf00c(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bcf018 | FUN_100bcf018 */

void FUN_100bcf018(void)

{
  return;
}



/* Address: 0x100bcf030 | FUN_100bcf030 */

void FUN_100bcf030(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 in_stack_00000010 [16];
  
  SVar1.bridgeObject = param_4;
  SVar1.str = param_3;
  Swift::String::append((String)in_stack_00000010,SVar1);
  return;
}



/* Address: 0x100bcf040 | FUN_100bcf040 */

void FUN_100bcf040(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100bcf048 | FUN_100bcf048 */

void FUN_100bcf048(void)

{
  FUN_100b69598(0);
  return;
}



/* Address: 0x100bcf050 | FUN_100bcf050 */

void FUN_100bcf050(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 in_stack_00000010 [16];
  
  SVar1.bridgeObject = param_4;
  SVar1.str = param_3;
  Swift::String::append((String)in_stack_00000010,SVar1);
  return;
}



/* Address: 0x100bcf060 | FUN_100bcf060 */

undefined8 FUN_100bcf060(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Address: 0x100bcf078 | FUN_100bcf078 */

void FUN_100bcf078(void)

{
  return;
}



/* Address: 0x100bcf084 | FUN_100bcf084 */

void FUN_100bcf084(void)

{
  FUN_100b681d4();
  return;
}



/* Address: 0x100bcf090 | FUN_100bcf090 */

String FUN_100bcf090(void)

{
  String SVar1;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}


