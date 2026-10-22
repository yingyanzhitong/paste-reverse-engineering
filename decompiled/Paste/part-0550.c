/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006324d0 | FUN_1006324d0 */

ulong FUN_1006324d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100636df0(param_1,param_3,param_4);
  return param_1 & 0x1ffffffffffffff;
}



/* Address: 0x1006324f0 | FUN_1006324f0 */

bool FUN_1006324f0(ulong param_1,ulong param_2)

{
  return ((param_1 ^ param_2) & 0x100000000000000) == 0 &&
         (param_1 & 0xffffffffffffff) == (param_2 & 0xffffffffffffff);
}



/* Address: 0x10063250c | FUN_10063250c */

bool FUN_10063250c(ulong param_1,ulong param_2)

{
  bool bVar1;
  
  bVar1 = (param_2 & 0x100000000000000) == 0 && (param_1 & 0xffffffff) < (param_2 & 0xffffffff);
  if ((param_1 & 0x100000000000000) != 0) {
    bVar1 = (param_2 & 0x100000000000000) == 0 || (param_1 & 0xffffffff) < (param_2 & 0xffffffff);
  }
  return bVar1;
}



/* Address: 0x100632544 | FUN_100632544 */

bool FUN_100632544(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  if (((param_4 ^ 0xffffffffffffffff) & 0xffffff00000000) == 0) {
    return true;
  }
  FUN_10063258c();
  return (param_4 >> 0x18 & 0xffff00 | param_4 >> 0x30 & 0xff) == param_1;
}



/* Address: 0x10063258c | FUN_10063258c */

long FUN_10063258c(ContiguousArray param_1,long param_2,long param_3)

{
  __int64 _Var1;
  long lVar2;
  
  lVar2 = param_3 - param_2;
  if (param_3 < param_2) {
    Swift::Optional::typeMetadataAccessor();
    _Var1 = Swift::ContiguousArray::get_count(param_1);
    lVar2 = lVar2 + _Var1;
  }
  return lVar2;
}



/* Address: 0x1006325d0 | FUN_1006325d0 */

void FUN_1006325d0(void)

{
  FUN_1006325f4();
  return;
}



/* Address: 0x1006325dc | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::<=_infix */

bool (extension_Swift)::Swift::Comparable::<__infix(void)

{
  bool bVar1;
  
  bVar1 = <__infix();
  return bVar1;
}



/* Address: 0x1006325e0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::>=_infix */

bool (extension_Swift)::Swift::Comparable::>__infix(void)

{
  bool bVar1;
  
  bVar1 = >__infix();
  return bVar1;
}



/* Address: 0x1006325e4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Comparable::>_infix */

bool (extension_Swift)::Swift::Comparable::>_infix(void)

{
  bool bVar1;
  
  bVar1 = >_infix();
  return bVar1;
}



/* Address: 0x1006325e8 | FUN_1006325e8 */

void FUN_1006325e8(void)

{
  FUN_1006325f4();
  return;
}



/* Address: 0x1006325f4 | FUN_1006325f4 */

void FUN_1006325f4(uint *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000100632640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 | (ulong)(ushort)param_1[1] << 0x20
             | (ulong)*param_1,
             uVar2 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 | (ulong)(ushort)param_2[1] << 0x20
             | (ulong)*param_2);
  return;
}



/* Address: 0x100632644 | FUN_100632644 */

void FUN_100632644(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100632658(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100632658 | FUN_100632658 */

undefined1  [16] FUN_100632658(undefined *param_1,char *param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  int iVar2;
  String SVar3;
  undefined1 auVar4 [16];
  void *pvVar5;
  Optional OVar6;
  undefined7 extraout_var;
  char *pcVar8;
  undefined7 extraout_var_00;
  ContiguousArray CVar9;
  EnumeratedSequence EVar10;
  Iterator IVar11;
  long *plVar12;
  char *pcVar14;
  char *pcVar15;
  void *pvVar16;
  code *pcVar17;
  char *pcVar18;
  long lVar19;
  code *pcVar20;
  long *plVar21;
  long *plVar22;
  String SVar23;
  String SVar24;
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
  ContiguousArray local_e0;
  char *local_d8;
  long local_d0;
  char *local_c8;
  void *local_c0;
  undefined *local_b0 [2];
  void *local_a0;
  char *local_98;
  undefined1 *puStack_90;
  char *local_88;
  void *local_80;
  undefined8 local_70;
  undefined1 *puStack_68;
  char *pcVar7;
  _StringGuts _Var13;
  
  local_d8 = param_3;
  local_c8 = param_2;
  local_c0 = param_4;
  OVar6 = Swift::Optional::typeMetadataAccessor();
  pcVar7 = (char *)CONCAT71(extraout_var,OVar6.value);
  pcVar15 = "offset element ";
  pcVar8 = (char *)0x0;
  _swift_getTupleTypeMetadata2
            (0,PTR___type_metadata_for_Swift_Int_100eac6f8,pcVar7,"offset element ",0);
  lVar19 = *(long *)(pcVar8 + -8);
  plVar21 = (long *)((long)&local_e0 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  OVar6 = Swift::Optional::typeMetadataAccessor();
  plVar22 = (long *)((long)plVar21 -
                    (*(long *)(*(long *)(CONCAT71(extraout_var_00,OVar6.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0));
  local_70 = 0x205b;
  puStack_68 = &SUB_e200000000000000;
  local_e0.unknown = param_1;
  local_88 = param_1;
  CVar9 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Sequence_100ead130,CVar9.unknown);
  (extension_Swift)::Swift::Sequence::enumerated();
  EVar10 = Swift::EnumeratedSequence::typeMetadataAccessor();
  Swift::EnumeratedSequence::_makeIterator(EVar10);
  IVar11 = Swift::EnumeratedSequence::Iterator::typeMetadataAccessor();
  Swift::EnumeratedSequence::Iterator::_next(IVar11);
  pcVar17 = *(code **)(lVar19 + 0x30);
  plVar12 = plVar22;
  pcVar14 = pcVar8;
  local_d0 = lVar19;
  (*pcVar17)(plVar22,1);
  if ((int)plVar12 != 1) {
    pcVar20 = *(code **)(*(long *)(pcVar7 + -8) + 0x20);
    do {
      pcVar18 = (char *)*plVar22;
      iVar2 = *(int *)(pcVar8 + 0x30);
      *plVar21 = (long)pcVar18;
      pcVar14 = pcVar7;
      (*pcVar20)((long)plVar21 + (long)iVar2,(long)plVar22 + (long)iVar2);
      if (pcVar18 == local_c8) {
        pcVar18 = (char *)0x3c;
LAB_1006328f4:
        SVar24.bridgeObject = (void *)0xe100000000000000;
        SVar24.str = pcVar18;
        SVar34.bridgeObject = pcVar15;
        SVar34.str = pcVar14;
        Swift::String::append(SVar24,SVar34);
      }
      else if (pcVar18 == local_d8) {
        pcVar18 = (char *)0x3e;
        goto LAB_1006328f4;
      }
      local_a0 = local_c0;
      pcVar18 = pcVar7;
      pcVar15 = PTR___type_metadata_for_Swift_Never_100eadc38;
      FUN_100617fb8(&local_98,FUN_100636e1c,local_b0,pcVar7,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___type_metadata_for_Swift_String_100eac208,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      pcVar14 = (char *)0x205f;
      if (puStack_90 != (undefined1 *)0x0) {
        pcVar14 = local_98;
      }
      puVar1 = &SUB_e200000000000000;
      if (puStack_90 != (undefined1 *)0x0) {
        puVar1 = puStack_90;
      }
      SVar27.bridgeObject = puVar1;
      SVar27.str = pcVar14;
      SVar35.bridgeObject = pcVar15;
      SVar35.str = pcVar18;
      Swift::String::append(SVar27,SVar35);
      _swift_bridgeObjectRelease(puVar1);
      (**(code **)(local_d0 + 8))(plVar21,pcVar8);
      Swift::EnumeratedSequence::Iterator::_next(IVar11);
      plVar12 = plVar22;
      pcVar14 = pcVar8;
      (*pcVar17)(plVar22,1);
    } while ((int)plVar12 != 1);
  }
  _swift_release(local_88);
  SVar23.bridgeObject = (void *)0xe100000000000000;
  SVar23.str = (char *)0x5d;
  _Var13.unknown = (undefined *)0xe100000000000000;
  SVar28.bridgeObject = pcVar15;
  SVar28.str = pcVar14;
  Swift::String::append(SVar23,SVar28);
  local_88 = (char *)0x0;
  local_80 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x25,_Var13);
  _swift_bridgeObjectRelease(local_80);
  CVar9.unknown = local_e0.unknown;
  local_88 = (char *)0xd000000000000012;
  local_80 = (void *)0x8000000100daef20;
  local_b0[0] = (undefined *)Swift::ContiguousArray::get_count(local_e0);
  SVar24 = Swift::CustomStringConvertible::get_description();
  SVar29.bridgeObject = pcVar15;
  SVar29.str = pcVar14;
  Swift::String::append(SVar24,SVar29);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar25.bridgeObject = (void *)0xee00203a6874676e;
  SVar25.str = (char *)0x654c676e6972202c;
  SVar30.bridgeObject = pcVar15;
  SVar30.str = pcVar14;
  Swift::String::append(SVar25,SVar30);
  pcVar15 = local_d8;
  pvVar16 = local_c0;
  FUN_10063258c(CVar9.unknown,local_c8);
  local_b0[0] = CVar9.unknown;
  SVar24 = Swift::CustomStringConvertible::get_description();
  SVar31.bridgeObject = pvVar16;
  SVar31.str = pcVar15;
  Swift::String::append(SVar24,SVar31);
  _swift_bridgeObjectRelease(SVar24.bridgeObject);
  SVar26.bridgeObject = (void *)0xe100000000000000;
  SVar26.str = (char *)0x29;
  SVar32.bridgeObject = pvVar16;
  SVar32.str = pcVar15;
  Swift::String::append(SVar26,SVar32);
  pvVar5 = local_80;
  SVar3.bridgeObject = local_80;
  SVar3.str = local_88;
  SVar33.bridgeObject = pvVar16;
  SVar33.str = pcVar15;
  Swift::String::append(SVar3,SVar33);
  _swift_bridgeObjectRelease(pvVar5);
  auVar4._8_8_ = puStack_68;
  auVar4._0_8_ = local_70;
  return auVar4;
}



/* Address: 0x1006329e0 | FUN_1006329e0 */

void FUN_1006329e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1006329fc(param_1 & 0x1ffffffffffffff,1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x1006329fc | FUN_1006329fc */

ulong FUN_1006329fc(ulong param_1,long param_2,ContiguousArray param_3,long param_4,
                   undefined8 param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  __int64 _Var4;
  
  Swift::Optional::typeMetadataAccessor();
  _Var4 = Swift::ContiguousArray::get_count(param_3);
  FUN_10063258c(param_3.unknown,param_4,param_5,param_6);
  uVar1 = _Var4 - 1U & param_2 + (param_1 & 0xffffffff);
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100632a90);
    (*pcVar3)();
  }
  if (uVar1 >> 0x20 == 0) {
    uVar2 = 0;
    if (param_4 <= (long)uVar1) {
      uVar2 = 0x100000000000000;
    }
    return uVar1 | uVar2 | 0xffffff00000000;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100632a94);
  (*pcVar3)();
}



/* Address: 0x100632a94 | FUN_100632a94 */

void FUN_100632a94(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1006329fc(param_1 & 0x1ffffffffffffff,0xffffffffffffffff,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100632ab0 | FUN_100632ab0 */

void FUN_100632ab0(undefined8 param_1,ulong param_2,ContiguousArray param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar4 = &stack0xffffffffffffffc0 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  Swift::ContiguousArray::get_subscript(param_2 & 0xffffffff,param_3);
  lVar5 = *(long *)(param_6 + -8);
  puVar3 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,param_6);
  if ((int)puVar3 != 1) {
    (**(code **)(lVar5 + 0x20))(param_1,puVar4,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100632b60);
  (*pcVar1)();
}



/* Address: 0x100632b60 | FUN_100632b60 */

void FUN_100632b60(undefined8 param_1,ulong param_2,long param_3)

{
  FUN_100636f24(param_1,param_2 & 0x1ffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x000100632b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x100632ba0 | FUN_100632ba0 */

undefined1  [16] FUN_100632ba0(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  void *pvVar3;
  undefined8 *unaff_x20;
  ulong uVar4;
  void *pvVar5;
  undefined1 auVar6 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (ulong *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x9dd4);
  }
  *param_1 = puVar2;
  puVar2[1] = param_3;
  puVar2[2] = (ulong)unaff_x20;
  *puVar2 = param_2;
  uVar4 = *(ulong *)(param_3 + 0x10);
  puVar2[3] = uVar4;
  uVar4 = *(ulong *)(uVar4 - 8);
  puVar2[4] = uVar4;
  pvVar5 = *(void **)(uVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar5);
    puVar2[5] = (ulong)pvVar3;
    pvVar5 = _malloc((size_t)pvVar5);
  }
  else {
    pvVar3 = pvVar5;
    _swift_coroFrameAlloc(pvVar5,0x9dd4);
    puVar2[5] = (ulong)pvVar3;
    _swift_coroFrameAlloc(pvVar5,0x9dd4);
  }
  puVar2[6] = (ulong)pvVar5;
  FUN_100632ab0(pvVar5,param_2 & 0x1ffffffffffffff,*unaff_x20);
  auVar6._8_8_ = pvVar5;
  auVar6._0_8_ = FUN_100632c74;
  return auVar6;
}



/* Address: 0x100632c74 | FUN_100632c74 */

void FUN_100632c74(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  ulong *puVar6;
  code *pcVar7;
  ulong uVar8;
  
  puVar6 = (ulong *)*param_1;
  pvVar1 = (void *)puVar6[5];
  pvVar4 = (void *)puVar6[6];
  uVar2 = puVar6[3];
  uVar5 = puVar6[4];
  uVar3 = puVar6[1];
  uVar8 = *puVar6;
  if ((param_2 & 1) == 0) {
    FUN_100636f24(pvVar4,uVar8 & 0x1ffffffffffffff,uVar3);
    pcVar7 = *(code **)(uVar5 + 8);
  }
  else {
    (**(code **)(uVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    FUN_100636f24(pvVar1,uVar8 & 0x1ffffffffffffff,uVar3);
    pcVar7 = *(code **)(uVar5 + 8);
    (*pcVar7)(pvVar1,uVar2);
  }
  (*pcVar7)(pvVar4,uVar2);
  _free(pvVar4);
  _free(pvVar1);
  _free(puVar6);
  return;
}



/* Address: 0x100632d28 | FUN_100632d28 */

ulong FUN_100632d28(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  
  FUN_10063258c();
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100632d5c);
    (*pcVar1)();
  }
  if (param_2 >> 0x20 == 0) {
    return param_2 | 0x1ffffff00000000;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100632d60);
  (*pcVar1)();
}



/* Address: 0x100632d60 | FUN_100632d60 */

ulong FUN_100632d60(undefined8 param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  
  FUN_10063258c();
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100632da8);
    (*pcVar2)();
  }
  if (param_3 >> 0x20 == 0) {
    uVar1 = 0;
    if (param_2 <= (long)param_3) {
      uVar1 = 0x100000000000000;
    }
    return param_3 | uVar1 | 0xffffff00000000;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100632dac);
  (*pcVar2)();
}



/* Address: 0x100632dac | FUN_100632dac */

long FUN_100632dac(ulong param_1,ulong param_2,ContiguousArray param_3)

{
  long lVar1;
  code *pcVar2;
  __int64 _Var3;
  long lVar4;
  
  Swift::Optional::typeMetadataAccessor();
  _Var3 = Swift::ContiguousArray::get_count(param_3);
  if ((param_1 >> 0x38 & 1) == 0) {
    if ((param_2 >> 0x38 & 1) == 0) {
      lVar4 = (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
    }
    else {
      lVar1 = ((param_1 & 0xffffffff) - (param_2 & 0xffffffff)) + _Var3;
      lVar4 = -lVar1;
      if (SBORROW8(0,lVar1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100632e38);
        (*pcVar2)();
      }
    }
  }
  else {
    lVar4 = (_Var3 - (param_1 & 0xffffffff)) + (param_2 & 0xffffffff);
    if ((param_2 & 0x100000000000000) != 0) {
      lVar4 = (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
    }
  }
  return lVar4;
}



/* Address: 0x100632e38 | FUN_100632e38 */

void FUN_100632e38(ulong *param_1,long param_2,long param_3,ContiguousArray param_4,
                  undefined *param_5,undefined *param_6,long param_7)

{
  code *pcVar1;
  Optional OVar2;
  bool bVar3;
  undefined7 extraout_var;
  ContiguousArray CVar4;
  ContiguousArray CVar5;
  long lVar6;
  undefined8 uVar7;
  TargetProtocolConformanceDescriptor *pTVar8;
  ContiguousArray CVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined4 uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined *puVar16;
  long lVar17;
  ulong *local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  
  local_80 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar10 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
           0xfffffffffffffff0;
  lVar6 = (long)&local_80 - uVar10;
  lVar15 = lVar6 - uVar10;
  lVar17 = lVar15 - uVar10;
  CVar4.unknown = param_4.unknown;
  local_78 = param_5;
  FUN_10063258c(param_4.unknown,param_5,param_6,param_7);
  puVar14 = local_80;
  if (param_3 < (long)CVar4.unknown) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331ac);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    CVar5.unknown = param_4.unknown;
    _swift_retain();
    CVar4.unknown = local_78;
    uVar12 = SUB84(CVar5.unknown,0);
    FUN_100632d28();
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = local_78;
    if ((long)param_6 < (long)local_78) {
      puVar11 = *(undefined **)(param_4.unknown + 0x10);
      if ((long)puVar11 < (long)local_78) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331b4);
        (*pcVar1)();
      }
      for (; local_80 = puVar14, puVar16 != puVar11; puVar16 = puVar16 + 1) {
        Swift::ContiguousArray::get_subscript((__int64)puVar16,param_4);
        lVar13 = *(long *)(param_7 + -8);
        lVar17 = lVar15;
        (**(code **)(lVar13 + 0x30))(lVar15,1,param_7);
        if ((int)lVar17 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331c4);
          (*pcVar1)();
        }
        (**(code **)(lVar13 + 0x20))(param_2,lVar15,param_7);
        param_2 = param_2 + *(long *)(lVar13 + 0x48);
        puVar14 = local_80;
      }
      if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331b8);
        (*pcVar1)();
      }
      if (param_6 != (undefined *)0x0) {
        puVar16 = (undefined *)0x0;
        do {
          Swift::ContiguousArray::get_subscript((__int64)puVar16,param_4);
          lVar17 = *(long *)(param_7 + -8);
          lVar15 = lVar6;
          (**(code **)(lVar17 + 0x30))(lVar6,1,param_7);
          if ((int)lVar15 == 1) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331bc);
            (*pcVar1)();
          }
          puVar16 = puVar16 + 1;
          (**(code **)(lVar17 + 0x20))(param_2,lVar6,param_7);
          param_2 = param_2 + *(long *)(lVar17 + 0x48);
        } while (param_6 != puVar16);
      }
    }
    else {
      for (; puVar16 != param_6; puVar16 = puVar16 + 1) {
        Swift::ContiguousArray::get_subscript((__int64)puVar16,param_4);
        lVar15 = *(long *)(param_7 + -8);
        lVar6 = lVar17;
        (**(code **)(lVar15 + 0x30))(lVar17,1,param_7);
        if ((int)lVar6 == 1) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331c0);
          (*pcVar1)();
        }
        (**(code **)(lVar15 + 0x20))(param_2,lVar17,param_7);
        param_2 = param_2 + *(long *)(lVar15 + 0x48);
      }
    }
    puVar16 = local_78;
    CVar5.unknown = param_4.unknown;
    FUN_100632d60(param_4.unknown,local_78,param_6,param_7);
    local_61 = ((ulong)CVar5.unknown & 0xff00000000000000) != 0;
    local_68 = SUB84(CVar5.unknown,0);
    local_64 = (undefined2)((ulong)CVar5.unknown >> 0x20);
    local_62 = (undefined1)((ulong)CVar5.unknown >> 0x30);
    CVar4.unknown = param_4.unknown;
    FUN_100632d60(param_4.unknown,puVar16,param_6,param_7);
    local_69 = ((ulong)CVar4.unknown & 0xff00000000000000) != 0;
    local_70 = SUB84(CVar4.unknown,0);
    local_6c = (undefined2)((ulong)CVar4.unknown >> 0x20);
    local_6a = (undefined1)((ulong)CVar4.unknown >> 0x30);
    uVar7 = 0;
    FUN_100637010(0,param_7);
    pTVar8 = &TargetProtocolConformanceDescriptor_100c697a8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697a8,uVar7);
    bVar3 = (extension_Swift)::Swift::Comparable::<__infix(&local_68,&local_70,uVar7,pTVar8);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006331b0);
      (*pcVar1)();
    }
    CVar9.unknown = param_4.unknown;
    FUN_100636e7c();
    puVar11 = CVar5.unknown;
    _swift_retain_n();
    uVar12 = SUB84(puVar11,0);
    FUN_100632d28();
    _swift_release(CVar5.unknown);
    FUN_10063258c(param_4.unknown,puVar16,param_6,param_7);
    puVar16 = param_4.unknown;
    param_6 = CVar9.unknown;
    local_80 = puVar14;
    param_4.unknown = CVar5.unknown;
  }
  *local_80 = (ulong)param_4.unknown;
  local_80[1] = (ulong)CVar4.unknown;
  local_80[2] = (ulong)param_6;
  *(undefined4 *)(local_80 + 3) = uVar12;
  *(undefined4 *)((long)local_80 + 0x1c) = 0x1ffffff;
  local_80[4] = (ulong)puVar16;
  return;
}



/* Address: 0x1006331c4 | FUN_1006331c4 */

void FUN_1006331c4(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0001006331d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1);
  return;
}



/* Address: 0x1006331dc | FUN_1006331dc */

void FUN_1006331dc(ulong param_1,ulong param_2)

{
  FUN_100636e7c(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff);
  _swift_retain();
  return;
}



/* Address: 0x100633214 | FUN_100633214 */

void FUN_100633214(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100632d28(uVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10));
  *param_1 = (int)uVar1;
  param_1[1] = 0x1ffffff;
  return;
}



/* Address: 0x10063324c | FUN_10063324c */

void FUN_10063324c(undefined4 *param_1,long param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100632d60(uVar1,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10));
  *param_1 = (int)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x10063329c | FUN_10063329c */

code * FUN_10063329c(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0xb208);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_10063333c();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10026c674;
}



/* Address: 0x10063333c | FUN_10063333c */

undefined1  [16]
FUN_10063333c(long *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             long param_6)

{
  void *pvVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(param_6 + -8);
  *param_1 = param_6;
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0xf37d);
  }
  param_1[2] = (long)pvVar1;
  FUN_100632ab0(pvVar1,param_2 & 0x1ffffffffffffff,param_3);
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_1006333c4;
  return auVar3;
}



/* Address: 0x1006333c4 | FUN_1006333c4 */

void FUN_1006333c4(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)param_1[2];
  (**(code **)(param_1[1] + 8))(pvVar1,*param_1);
  _free(pvVar1);
  return;
}



/* Address: 0x1006333f4 | FUN_1006333f4 */

void FUN_1006333f4(ulong *param_1,uint7 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  
  uVar3 = *unaff_x20;
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  uVar1 = *param_2 | uVar1;
  uVar2 = param_2[1] | uVar2;
  FUN_100636e7c();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  _swift_retain();
  return;
}



/* Address: 0x100633474 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Collection::$get_indices */

DefaultIndices<undefined> (extension_Swift)::Swift::Collection::_get_indices(void)

{
  DefaultIndices<undefined> DVar1;
  
  DVar1 = _get_indices();
  return (DefaultIndices<undefined>)DVar1.unknown;
}



/* Address: 0x100633478 | FUN_100633478 */

void FUN_100633478(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100633480(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100633480 | FUN_100633480 */

bool FUN_100633480(undefined8 param_1,long param_2,long param_3)

{
  return param_2 == param_3;
}



/* Address: 0x10063348c | FUN_10063348c */

void FUN_10063348c(long param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10063258c(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1006334a0 | FUN_1006334a0 */

void FUN_1006334a0(undefined8 *param_1)

{
  *param_1 = 0x300000000000000;
  return;
}



/* Address: 0x1006334ac | FUN_1006334ac */

void FUN_1006334ac(void)

{
  FUN_10063493c();
  return;
}



/* Address: 0x1006334b8 | FUN_1006334b8 */

void FUN_1006334b8(void)

{
  FUN_1006349c4();
  return;
}



/* Address: 0x1006334c4 | FUN_1006334c4 */

void FUN_1006334c4(undefined8 param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  FUN_100636f24(param_1,uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                        (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2);
                    /* WARNING: Could not recover jumptable at 0x000100633524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x100633528 | FUN_100633528 */

undefined1  [16] FUN_100633528(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *unaff_x20;
  long lVar9;
  void *pvVar10;
  undefined1 auVar11 [16];
  
  puVar6 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar7 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar7 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x71e6);
  }
  *param_1 = puVar7;
  *puVar7 = unaff_x20;
  puVar7[1] = param_3;
  lVar9 = *(long *)(param_3 + 0x10);
  puVar7[2] = lVar9;
  lVar9 = *(long *)(lVar9 + -8);
  puVar7[3] = lVar9;
  pvVar10 = *(void **)(lVar9 + 0x40);
  if (puVar6 == (undefined *)0x0) {
    pvVar8 = _malloc((size_t)pvVar10);
    puVar7[4] = pvVar8;
    pvVar10 = _malloc((size_t)pvVar10);
  }
  else {
    pvVar8 = pvVar10;
    _swift_coroFrameAlloc(pvVar10,0x71e6);
    puVar7[4] = pvVar8;
    _swift_coroFrameAlloc(pvVar10,0x71e6);
  }
  puVar7[5] = pvVar10;
  uVar2 = *param_2;
  *(uint *)(puVar7 + 6) = uVar2;
  uVar5 = param_2[1];
  *(ushort *)((long)puVar7 + 0x34) = (ushort)uVar5;
  bVar3 = *(byte *)((long)param_2 + 6);
  *(byte *)((long)puVar7 + 0x36) = bVar3;
  cVar4 = *(char *)((long)param_2 + 7);
  *(char *)((long)puVar7 + 0x37) = cVar4;
  uVar1 = 0x100000000000000;
  if (cVar4 == '\0') {
    uVar1 = 0;
  }
  FUN_100632ab0(pvVar10,uVar1 | (ulong)bVar3 << 0x30 | (ulong)(ushort)uVar5 << 0x20 | (ulong)uVar2,
                *unaff_x20);
  auVar11._8_8_ = pvVar10;
  auVar11._0_8_ = FUN_10063362c;
  return auVar11;
}



/* Address: 0x10063362c | FUN_10063362c */

void FUN_10063362c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  void *pvVar7;
  code *pcVar8;
  ulong uVar9;
  
  pvVar7 = (void *)*param_1;
  uVar6 = *(uint *)((long)pvVar7 + 0x30);
  pvVar1 = *(void **)((long)pvVar7 + 0x20);
  pvVar3 = *(void **)((long)pvVar7 + 0x28);
  uVar2 = *(undefined8 *)((long)pvVar7 + 0x10);
  lVar4 = *(long *)((long)pvVar7 + 0x18);
  uVar5 = *(undefined8 *)((long)pvVar7 + 8);
  uVar9 = 0x100000000000000;
  if (*(char *)((long)pvVar7 + 0x37) == '\0') {
    uVar9 = 0;
  }
  uVar9 = uVar9 | (ulong)*(byte *)((long)pvVar7 + 0x36) << 0x30 |
          (ulong)*(ushort *)((long)pvVar7 + 0x34) << 0x20;
  if ((param_2 & 1) == 0) {
    FUN_100636f24(pvVar3,uVar9 | uVar6,uVar5);
    pcVar8 = *(code **)(lVar4 + 8);
  }
  else {
    (**(code **)(lVar4 + 0x10))(pvVar1,pvVar3,uVar2);
    FUN_100636f24(pvVar1,uVar9 | uVar6,uVar5);
    pcVar8 = *(code **)(lVar4 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar3,uVar2);
  _free(pvVar3);
  _free(pvVar1);
  _free(pvVar7);
  return;
}



/* Address: 0x100633708 | FUN_100633708 */

void FUN_100633708(undefined8 *param_1,uint7 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  FUN_100637114(uVar3,param_1[1],param_1[2],*param_2 | uVar1,param_2[1] | uVar2,param_3);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100633788 | FUN_100633788 */

void FUN_100633788(undefined8 param_1)

{
  FUN_100637114();
  _swift_release(param_1);
  return;
}



/* Address: 0x1006337b4 | FUN_1006337b4 */

undefined1  [16] FUN_1006337b4(undefined8 *param_1,undefined6 *param_2,ulong param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined6 uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *unaff_x20;
  undefined1 auVar13 [16];
  
  puVar9 = (ulong *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar9 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x8d3e);
  }
  *param_1 = puVar9;
  puVar9[3] = (ulong)unaff_x20;
  puVar9[4] = param_3;
  uVar1 = *(undefined4 *)param_2;
  uVar8 = *param_2;
  *(undefined2 *)(puVar9 + 6) = *(undefined2 *)((long)param_2 + 4);
  uVar3 = *(undefined1 *)((long)param_2 + 6);
  *(undefined1 *)((long)puVar9 + 0x34) = uVar3;
  bVar4 = *(byte *)((long)param_2 + 7);
  *(byte *)((long)puVar9 + 0x35) = bVar4;
  uVar2 = *(undefined4 *)(param_2 + 1);
  *(undefined4 *)(puVar9 + 5) = uVar1;
  *(undefined4 *)((long)puVar9 + 0x2c) = uVar2;
  uVar7 = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined2 *)((long)puVar9 + 0x32) = uVar7;
  uVar5 = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)((long)puVar9 + 0x36) = uVar5;
  bVar6 = *(byte *)((long)param_2 + 0xf);
  *(byte *)((long)puVar9 + 0x37) = bVar6;
  uVar10 = 0x100000000000000;
  if ((bVar4 & 1) == 0) {
    uVar10 = 0;
  }
  uVar12 = *unaff_x20;
  uVar11 = 0x100000000000000;
  if ((bVar6 & 1) == 0) {
    uVar11 = 0;
  }
  uVar10 = CONCAT16(uVar3,uVar8) | uVar10;
  uVar11 = CONCAT16(uVar5,CONCAT24(uVar7,uVar2)) | uVar11;
  FUN_100636e7c();
  *puVar9 = uVar10;
  puVar9[1] = uVar11;
  puVar9[2] = uVar12;
  _swift_retain();
  auVar13._8_8_ = puVar9;
  auVar13._0_8_ = FUN_1006338a8;
  return auVar13;
}



/* Address: 0x1006338a8 | FUN_1006338a8 */

void FUN_1006338a8(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  param_1 = (undefined8 *)*param_1;
  uVar3 = *param_1;
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 0x35) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_1 + 0x37) & 1) == 0) {
    uVar2 = 0;
  }
  if ((param_2 & 1) == 0) {
    FUN_100637114(uVar3,param_1[1],param_1[2],
                  uVar1 | (ulong)*(byte *)((long)param_1 + 0x34) << 0x30 |
                  (ulong)*(uint *)(param_1 + 5) | (ulong)*(ushort *)(param_1 + 6) << 0x20,
                  uVar2 | (ulong)*(byte *)((long)param_1 + 0x36) << 0x30 |
                  (ulong)*(uint *)((long)param_1 + 0x2c) |
                  (ulong)*(ushort *)((long)param_1 + 0x32) << 0x20,param_1[4]);
  }
  else {
    _swift_retain();
    FUN_100637114();
    _swift_release(uVar3);
    uVar3 = *param_1;
  }
  _swift_release(uVar3);
  _free(param_1);
  return;
}



/* Address: 0x100633988 | FUN_100633988 */

undefined1  [16] FUN_100633988(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar1 = (ulong *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xba61);
  }
  *param_1 = puVar1;
  puVar1[5] = param_4;
  puVar1[6] = (ulong)unaff_x20;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  uVar2 = *unaff_x20;
  param_2 = param_2 & 0x1ffffffffffffff;
  param_3 = param_3 & 0x1ffffffffffffff;
  FUN_100636e7c();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uVar2;
  _swift_retain();
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_100633a24;
  return auVar3;
}



/* Address: 0x100633a24 | FUN_100633a24 */

void FUN_100633a24(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  if ((param_2 & 1) == 0) {
    FUN_100637114(uVar1,param_1[1],param_1[2],param_1[3] & 0x1ffffffffffffff,
                  param_1[4] & 0x1ffffffffffffff,param_1[5]);
  }
  else {
    _swift_retain(uVar1);
    FUN_100637114();
    _swift_release(uVar1);
    uVar1 = *param_1;
  }
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x100633ac4 | FUN_100633ac4 */

void FUN_100633ac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48,param_3);
  (extension_Swift)::Swift::MutableCollection::_partition();
  return;
}



/* Address: 0x100633b34 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::MutableCollection::$swapAt */

void (extension_Swift)::Swift::MutableCollection::_swapAt(void)

{
  _swapAt();
  return;
}



/* Address: 0x100633b38 | FUN_100633b38 */

void FUN_100633b38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar3;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar4;
  uVar3 = uVar1;
  _swift_retain();
  uVar2 = (undefined4)uVar3;
  FUN_100632d28();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x1ffffff;
  return;
}



/* Address: 0x100633ba4 | FUN_100633ba4 */

void FUN_100633ba4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x100633bd8 | FUN_100633bd8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100633c04 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100633bd8(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69840;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(pTVar1,param_1,pTVar1);
  _swift_release(*unaff_x20);
  return CVar2.unknown;
}



/* Address: 0x100633c24 | FUN_100633c24 */

undefined8 FUN_100633c24(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  
  uVar1 = *unaff_x20;
  FUN_100632e38(&local_78,param_2,param_3,uVar1,unaff_x20[1],unaff_x20[2],
                *(undefined8 *)(param_4 + 0x10));
  _swift_release(uVar1);
  param_1[1] = uStack_70;
  *param_1 = local_78;
  param_1[2] = local_68;
  *(undefined4 *)(param_1 + 3) = local_60;
  *(undefined2 *)((long)param_1 + 0x1c) = local_5c;
  *(undefined1 *)((long)param_1 + 0x1e) = local_5a;
  *(undefined1 *)((long)param_1 + 0x1f) = local_59;
  return local_58;
}



/* Address: 0x100633ccc | FUN_100633ccc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006342cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100633ccc(ulong param_1,ulong param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  ulong uVar1;
  long lVar2;
  Optional OVar3;
  bool bVar4;
  ContiguousArray CVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ContiguousArray CVar11;
  __int64 _Var12;
  ContiguousArray CVar13;
  LazySequence LVar14;
  LazyMapSequence LVar15;
  ContiguousArray CVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  code *pcVar23;
  __int64 _Var24;
  long lVar25;
  long *unaff_x20;
  long lVar26;
  undefined8 uVar27;
  long local_1e0;
  undefined *local_1d8;
  ulong local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  long local_1b8;
  long local_1b0;
  long local_1a8;
  undefined *local_1a0;
  undefined *local_198;
  long local_190;
  long local_188;
  undefined *local_180;
  undefined *local_178;
  undefined *local_170;
  long local_168;
  TargetProtocolConformanceDescriptor *local_160;
  undefined8 local_158;
  long local_150;
  long local_148;
  undefined8 local_140;
  long local_138;
  ulong local_d8;
  ulong local_d0;
  undefined8 local_c8;
  undefined8 local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 local_94;
  ContiguousArray local_70;
  long lVar5;
  
  lVar25 = *(long *)(param_4 + 0x10);
  local_150 = param_4;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)(param_1 >> 8),OVar3.value);
  local_1d8 = (undefined *)Swift::Repeated::typeMetadataAccessor();
  lVar17 = (long)&local_1e0 -
           (*(long *)(*(long *)(local_1d8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar27 = *(undefined8 *)(param_6 + 8);
  local_1e0 = lVar17;
  local_198 = (undefined *)Swift::LazySequence::typeMetadataAccessor();
  local_1a8 = *(long *)(local_198 + -8);
  lVar17 = lVar17 - (*(long *)(local_1a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_1b0 = lVar17;
  local_1a0 = (undefined *)Swift::LazyMapSequence::typeMetadataAccessor();
  local_1b8 = lVar17 - (*(long *)(*(long *)(local_1a0 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_148 = *(long *)(lVar25 + -8);
  local_170 = (undefined *)(local_1b8 - (*(long *)(local_148 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar18 = *(long *)(lVar5 + -8);
  uVar19 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_168 = (long)local_170 - uVar19;
  local_178 = (undefined *)(local_168 - uVar19);
  local_188 = *(long *)(param_5 + -8);
  lVar20 = (long)local_178 - (*(long *)(local_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = 0;
  local_180 = (undefined *)lVar20;
  local_140 = uVar27;
  local_138 = lVar5;
  _swift_getAssociatedTypeWitness
            (0,uVar27,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_190 = *(long *)(lVar17 + -8);
  lVar21 = *(long *)(local_190 + 0x40);
  uVar27 = 0;
  FUN_100637010(0,lVar25);
  uVar19 = param_1 >> 0x38 & 1;
  local_98 = (undefined4)param_1;
  local_94._0_3_ = (undefined3)(param_1 >> 0x20);
  local_94 = CONCAT13((char)uVar19,(undefined3)local_94);
  CVar11.unknown = (undefined *)*unaff_x20;
  lVar5 = unaff_x20[1];
  lVar26 = unaff_x20[2];
  CVar6.unknown = CVar11.unknown;
  FUN_100632d28(CVar11.unknown,lVar5,lVar26,lVar25);
  local_b0 = (undefined *)CONCAT44(0x1ffffff,(int)CVar6.unknown);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c697a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697a8,uVar27);
  bVar4 = (extension_Swift)::Swift::Comparable::>__infix(&local_98,&local_b0,uVar27,pTVar7);
  if (!bVar4) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x10063490c);
    (*pcVar22)();
  }
  local_1c0 = param_2 >> 0x30;
  local_1c8 = param_2 >> 0x20;
  local_94._0_3_ = (undefined3)(param_2 >> 0x20);
  local_1d0 = param_2 >> 0x38 & 1;
  local_94 = CONCAT13((char)local_1d0,(undefined3)local_94);
  CVar6.unknown = CVar11.unknown;
  local_98 = (int)param_2;
  FUN_100632d60(CVar11.unknown,lVar5,lVar26,lVar25);
  local_b0 = (undefined *)
             CONCAT17(((ulong)CVar6.unknown & 0xff00000000000000) != 0,(int7)CVar6.unknown);
  bVar4 = (extension_Swift)::Swift::Comparable::<__infix(&local_98,&local_b0,uVar27,pTVar7);
  if (!bVar4) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x100634910);
    (*pcVar22)();
  }
  puVar8 = (undefined *)(param_1 & 0x1ffffffffffffff);
  local_160 = pTVar7;
  local_158 = uVar27;
  FUN_100632dac(puVar8,param_2 & 0x1ffffffffffffff,CVar11.unknown);
  puVar9 = (undefined *)Swift::Collection::get_count();
  if (puVar8 == puVar9) {
    (**(code **)(local_188 + 0x10))(local_180,param_3,param_5);
    uVar27 = local_140;
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (uVar27,param_5,lVar17,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    puVar8 = local_178;
    Swift::IteratorProtocol::_next();
    lVar26 = local_148;
    pcVar22 = *(code **)(local_148 + 0x30);
    puVar10 = puVar8;
    (*pcVar22)(puVar8,1,lVar25);
    lVar2 = local_138;
    lVar5 = local_168;
    puVar9 = local_170;
    if ((int)puVar10 != 1) {
      pcVar23 = *(code **)(lVar26 + 0x20);
      do {
        local_d0 = param_1 >> 0x20;
        local_d8 = param_1 >> 0x30;
        (*pcVar23)(puVar9,puVar8,lVar25);
        param_1 = param_1 & 0xffffffff;
        (**(code **)(lVar26 + 0x10))(lVar5,puVar9,lVar25);
        (**(code **)(lVar26 + 0x38))(lVar5,0,1,lVar25);
        CVar11 = Swift::ContiguousArray::typeMetadataAccessor();
        Swift::ContiguousArray::_makeMutableAndUnique(CVar11);
        if (*(ulong *)(*unaff_x20 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100634908);
          (*pcVar22)();
        }
        uVar1 = 0x100000000000000;
        if ((int)uVar19 == 0) {
          uVar1 = 0;
        }
        (**(code **)(lVar18 + 0x28))
                  (*unaff_x20 +
                   ((ulong)*(byte *)(lVar18 + 0x50) + 0x20 &
                   ((ulong)*(byte *)(lVar18 + 0x50) ^ 0xffffffffffffffff)) +
                   *(long *)(lVar18 + 0x48) * param_1,lVar5,lVar2);
        param_1 = (local_d8 & 0xff) << 0x30 | (local_d0 & 0xffff) << 0x20 | uVar1 | param_1;
        FUN_1006329fc(param_1,1,*unaff_x20,unaff_x20[1],unaff_x20[2],lVar25);
        uVar19 = (ulong)((param_1 & 0xff00000000000000) != 0);
        (**(code **)(lVar26 + 8))(puVar9,lVar25);
        Swift::IteratorProtocol::_next();
        puVar10 = puVar8;
        (*pcVar22)(puVar8,1,lVar25);
      } while ((int)puVar10 != 1);
    }
    (**(code **)(local_190 + 8))(lVar20 - (lVar21 + 0xfU & 0xfffffffffffffff0),lVar17);
  }
  else {
    CVar6.unknown = CVar11.unknown;
    FUN_10063258c(CVar11.unknown,lVar5,lVar26);
    if ((puVar8 == CVar6.unknown) && (bVar4 = Swift::Collection::get_isEmpty(), bVar4)) {
      FUN_100635f44(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff,local_150);
      return;
    }
    lVar17 = local_138;
    Swift::Array<undefined>::_allocateUninitialized(0,local_138);
    local_70.unknown = (undefined *)Swift::ContiguousArray::_init(CVar6.unknown,lVar17);
    CVar6.unknown = CVar11.unknown;
    FUN_10063258c(CVar11.unknown,lVar5,lVar26,lVar25);
    _Var12 = Swift::Collection::get_count();
    if (SCARRY8((long)CVar6.unknown,_Var12)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100634914);
      (*pcVar22)();
    }
    lVar20 = (long)(CVar6.unknown + _Var12) - (long)puVar8;
    if (SBORROW8((long)(CVar6.unknown + _Var12),(long)puVar8)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100634918);
      (*pcVar22)();
    }
    if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x10063491c);
      (*pcVar22)();
    }
    Swift::Optional::typeMetadataAccessor();
    _Var12 = Swift::ContiguousArray::get_count(CVar11);
    if (lVar20 == -1) {
      _Var24 = 1;
    }
    else {
      _Var24 = 0;
      if (LZCOUNT(lVar20) != 0) {
        _Var24 = 1L << (-LZCOUNT(lVar20) & 0x3fU);
      }
    }
    if (_Var24 <= _Var12) {
      _Var24 = _Var12;
    }
    CVar13 = Swift::ContiguousArray::typeMetadataAccessor();
    Swift::ContiguousArray::reserveCapacity(_Var24,CVar13);
    CVar6.unknown = CVar11.unknown;
    FUN_100632d28(CVar11.unknown,lVar5,lVar26,lVar25);
    local_98 = SUB84(CVar6.unknown,0);
    local_94 = 0x1ffffff;
    local_b0 = (undefined *)(param_1 & 0x1ffffffffffffff);
    bVar4 = (extension_Swift)::Swift::Comparable::<__infix(&local_98,&local_b0,local_158,local_160);
    if (!bVar4) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100634920);
      (*pcVar22)();
    }
    param_1 = param_1 & 0x1ffffffffffffff;
    CVar16.unknown = CVar11.unknown;
    FUN_100636e7c();
    local_b0 = CVar6.unknown;
    puStack_a8 = (undefined *)param_1;
    local_a0 = CVar16.unknown;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69990,local_150);
    (extension_Swift)::Swift::Sequence::get_lazy();
    puVar8 = &DAT_100eedf20;
    _swift_allocObject(&DAT_100eedf20,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar25;
    *(long *)(puVar8 + 0x18) = param_5;
    *(long *)(puVar8 + 0x20) = param_6;
    puVar9 = &DAT_100eedf48;
    _swift_allocObject(&DAT_100eedf48,0x38,7);
    *(long *)(puVar9 + 0x10) = lVar25;
    *(long *)(puVar9 + 0x18) = param_5;
    *(long *)(puVar9 + 0x20) = param_6;
    *(code **)(puVar9 + 0x28) = thunk_FUN_100637220;
    *(undefined **)(puVar9 + 0x30) = puVar8;
    LVar14 = Swift::LazySequence::typeMetadataAccessor();
    puVar8 = PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
               LVar14.unknown);
    local_170 = puVar8;
    (extension_Swift)::Swift::LazySequenceProtocol::_map();
    _swift_release(puVar9);
    _swift_release(local_c8);
    LVar15 = Swift::LazyMapSequence::typeMetadataAccessor();
    puVar8 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
               LVar15.unknown);
    local_180 = puVar8;
    local_178 = LVar15.unknown;
    Swift::ContiguousArray::_append(&local_98,CVar13.unknown,LVar15.unknown);
    lVar21 = local_1b0;
    (extension_Swift)::Swift::Sequence::get_lazy();
    puVar8 = &DAT_100eedf70;
    _swift_allocObject(&DAT_100eedf70,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar25;
    *(long *)(puVar8 + 0x18) = param_5;
    *(long *)(puVar8 + 0x20) = param_6;
    puVar9 = &DAT_100eedf98;
    _swift_allocObject(&DAT_100eedf98,0x38,7);
    puVar10 = local_198;
    *(long *)(puVar9 + 0x10) = lVar25;
    *(long *)(puVar9 + 0x18) = param_5;
    *(long *)(puVar9 + 0x20) = param_6;
    *(code **)(puVar9 + 0x28) = FUN_100637220;
    *(undefined **)(puVar9 + 0x30) = puVar8;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
               local_198);
    lVar20 = local_1b8;
    (extension_Swift)::Swift::LazySequenceProtocol::_map();
    _swift_release(puVar9);
    (**(code **)(local_1a8 + 8))(lVar21,puVar10);
    puVar8 = local_1a0;
    puVar9 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
               local_1a0);
    Swift::ContiguousArray::_append(lVar20,CVar13.unknown,puVar8,puVar9);
    local_94._0_3_ = CONCAT12((char)local_1c0,(short)local_1c8);
    local_94 = CONCAT13((char)local_1d0,(undefined3)local_94);
    CVar6.unknown = CVar11.unknown;
    local_98 = (int)param_2;
    FUN_100632d60(CVar11.unknown,lVar5,lVar26,lVar25);
    local_b0 = (undefined *)
               CONCAT17(((ulong)CVar6.unknown & 0xff00000000000000) != 0,(int7)CVar6.unknown);
    bVar4 = (extension_Swift)::Swift::Comparable::<__infix(&local_98,&local_b0,local_158,local_160);
    lVar5 = local_148;
    if (!bVar4) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100634924);
      (*pcVar22)();
    }
    param_2 = param_2 & 0x1ffffffffffffff;
    CVar16.unknown = CVar11.unknown;
    FUN_100636e7c();
    local_b0 = (undefined *)param_2;
    puStack_a8 = CVar6.unknown;
    local_a0 = CVar16.unknown;
    (extension_Swift)::Swift::Sequence::get_lazy();
    puVar8 = &DAT_100eedfc0;
    _swift_allocObject(&DAT_100eedfc0,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar25;
    *(long *)(puVar8 + 0x18) = param_5;
    *(long *)(puVar8 + 0x20) = param_6;
    puVar9 = &DAT_100eedfe8;
    _swift_allocObject(&DAT_100eedfe8,0x38,7);
    *(long *)(puVar9 + 0x10) = lVar25;
    *(long *)(puVar9 + 0x18) = param_5;
    *(long *)(puVar9 + 0x20) = param_6;
    *(code **)(puVar9 + 0x28) = thunk_FUN_100637220;
    *(undefined **)(puVar9 + 0x30) = puVar8;
    (extension_Swift)::Swift::LazySequenceProtocol::_map();
    _swift_release(puVar9);
    _swift_release(local_c8);
    Swift::ContiguousArray::_append(&local_98,CVar13.unknown,local_178,local_180);
    CVar6.unknown = local_70.unknown;
    _Var12 = Swift::ContiguousArray::get_count(local_70);
    lVar20 = local_168;
    lVar21 = _Var24 - _Var12;
    if (0 < lVar21) {
      (**(code **)(lVar5 + 0x38))(local_168,1,1,lVar25);
      lVar5 = local_1e0;
      Swift::_repeatElement(local_1e0,_Var12,lVar21,lVar17);
      (**(code **)(lVar18 + 8))(lVar20,lVar17);
      puVar8 = local_1d8;
      puVar9 = PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0;
      _swift_getWitnessTable
                (PTR_Swift__Swift__Repeated<undefined>_>Swift__Sequence_100eadff0,local_1d8);
      Swift::ContiguousArray::_append(lVar5,CVar13.unknown,puVar8,puVar9);
      CVar6.unknown = local_70.unknown;
    }
    _swift_retain(CVar6.unknown);
    _swift_release(CVar11.unknown);
    *unaff_x20 = (long)CVar6.unknown;
    unaff_x20[1] = 0;
    _Var12 = Swift::ContiguousArray::get_count(CVar6);
    _swift_release(CVar6.unknown);
    unaff_x20[2] = _Var12 - lVar21;
  }
  return;
}



/* Address: 0x100634924 | thunk_FUN_100634a40 */

void thunk_FUN_100634a40(void)

{
  FUN_100634a40();
  return;
}



/* Address: 0x100634928 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::RandomAccessCollection::$index */

void (extension_Swift)::Swift::RandomAccessCollection::_index(__int64 param_1)

{
  _index(param_1);
  return;
}



/* Address: 0x10063492c | thunk_FUN_100634b1c */

void thunk_FUN_100634b1c(uint *param_1,uint *param_2,long param_3,undefined8 param_4,
                        undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar2 = 0;
  }
  FUN_100632dac(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1,
                uVar2 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2,*unaff_x20,param_4,param_5,
                *(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100634930 | FUN_100634930 */

void FUN_100634930(void)

{
  FUN_10063493c();
  return;
}



/* Address: 0x10063493c | FUN_10063493c */

void FUN_10063493c(undefined4 *param_1,uint *param_2,long param_3,undefined8 param_4,code *param_5)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 | (ulong)(ushort)param_2[1] << 0x20 |
          (ulong)*param_2;
  (*param_5)(uVar1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_3 + 0x10));
  *param_1 = (int)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x1006349b8 | FUN_1006349b8 */

void FUN_1006349b8(void)

{
  FUN_1006349c4();
  return;
}



/* Address: 0x1006349c4 | FUN_1006349c4 */

void FUN_1006349c4(uint *param_1,long param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 | (ulong)(ushort)param_1[1] << 0x20 |
          (ulong)*param_1;
  (*param_4)(uVar1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10));
  *param_1 = (uint)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x100634a40 | FUN_100634a40 */

void FUN_100634a40(undefined4 *param_1,uint *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 | (ulong)(ushort)param_2[1] << 0x20 |
          (ulong)*param_2;
  FUN_1006329fc(uVar1,param_3,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_4 + 0x10));
  *param_1 = (int)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x100634ab8 | FUN_100634ab8 */

void FUN_100634ab8(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c699f8,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}


