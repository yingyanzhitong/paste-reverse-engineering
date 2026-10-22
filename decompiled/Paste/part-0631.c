/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006b8d98 | FUN_1006b8d98 */

undefined8 FUN_1006b8d98(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006bc2f0();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1006b8dc8 | FUN_1006b8dc8 */

void FUN_1006b8dc8(void)

{
  FUN_1006bbfe8();
  return;
}



/* Address: 0x1006b8ddc | FUN_1006b8ddc */

void FUN_1006b8ddc(undefined8 param_1,char *param_2,void *param_3,undefined8 param_4,void *param_5,
                  long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined8 uVar13;
  String SVar14;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [16];
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long lVar3;
  undefined7 extraout_var_00;
  void *pvVar7;
  
  local_a8 = param_7;
  local_a0 = param_1;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar2.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var_00,OVar2.value);
  lVar11 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  SVar14.bridgeObject = param_3;
  SVar14.str = param_2;
  SVar14 = Swift::String::lowercased(SVar14);
  pvVar7 = SVar14.bridgeObject;
  if (*(long *)((long)param_5 + 0x10) == 0) {
    uVar9 = 0;
    uVar13 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    FUN_10046483c();
    if (((ulong)SVar14.bridgeObject & 1) == 0) {
      uVar9 = 0;
      uVar13 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)((long)param_5 + 0x38) + (long)SVar14.str * 0x10);
      uVar9 = *puVar1;
      uVar13 = puVar1[1];
      _swift_bridgeObjectRetain(uVar13);
    }
    _swift_bridgeObjectRelease(pvVar7);
    pvVar7 = param_5;
  }
  _swift_bridgeObjectRelease(pvVar7);
  uStack_78 = local_a8;
  puVar5 = &DAT_100fdc468;
  local_80 = param_6;
  local_70 = uVar9;
  uStack_68 = uVar13;
  FUN_1000f7830(&DAT_100fdc468,&DAT_100c70510);
  FUN_1001b8460((long)puVar12 - extraout_x12,FUN_1006bc498,auStack_90,puVar5,
                PTR___type_metadata_for_Swift_Never_100eadc38,lVar3,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  _swift_bridgeObjectRelease(uVar13);
  (**(code **)(lVar11 + 0x20))(puVar12,(long)puVar12 - extraout_x12,lVar4);
  lVar10 = *(long *)(lVar3 + -8);
  pcVar8 = *(code **)(lVar10 + 0x30);
  puVar6 = puVar12;
  (*pcVar8)(puVar12,1,lVar3);
  if ((int)puVar6 == 1) {
    (**(code **)(*(long *)(param_6 + -8) + 0x38))(local_a0,1,1,param_6);
    puVar6 = puVar12;
    (*pcVar8)(puVar12,1,lVar3);
    if ((int)puVar6 != 1) {
      (**(code **)(lVar11 + 8))(puVar12,lVar4);
    }
  }
  else {
    (**(code **)(lVar10 + 0x20))(local_a0,puVar12,lVar3);
  }
  return;
}



/* Address: 0x1006b8ff8 | FUN_1006b8ff8 */

void FUN_1006b8ff8(undefined8 *param_1)

{
  String SVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = *param_1;
  uStack_38 = param_1[1];
  _swift_bridgeObjectRetain();
  SVar1 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  Swift::LosslessStringConvertible::_init(SVar1);
  return;
}



/* Address: 0x1006b9070 | FUN_1006b9070 */

undefined1  [16] FUN_1006b9070(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String SVar12;
  _StringGuts _Var3;
  
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  pcVar5 = param_3;
  SVar7 = Swift::String::lowercased(SVar7);
  _Var3.unknown = SVar7.bridgeObject;
  pcVar4 = _Var3.unknown;
  if (*(long *)(param_3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_3);
    FUN_10046483c();
    pcVar4 = SVar7.bridgeObject;
    if (((ulong)pcVar4 & 1) != 0) {
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x38) + (long)SVar7.str * 0x10);
      uVar6 = *puVar1;
      param_1 = (char *)puVar1[1];
      _swift_bridgeObjectRetain(param_1);
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(param_3);
      goto LAB_1006b91a8;
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
    _Var3.unknown = pcVar4;
    pcVar4 = param_3;
  }
  _swift_bridgeObjectRelease(pcVar4);
  Swift::_StringGuts::grow(0x28,_Var3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar8.bridgeObject = param_2;
  SVar8.str = param_1;
  SVar11.bridgeObject = param_4;
  SVar11.str = pcVar5;
  Swift::String::append(SVar8,SVar11);
  puVar2 = (undefined1 *)0xd000000000000010;
  SVar9.bridgeObject = (void *)0x8000000100db0190;
  SVar9.str = (char *)0xd000000000000010;
  SVar12.bridgeObject = param_4;
  SVar12.str = pcVar5;
  Swift::String::append(SVar9,SVar12);
  uVar6 = 0xd000000000000016;
  FUN_1006bc4b4();
  _swift_allocError(&DAT_100ef7808,puVar2,0,0);
  *puVar2 = 1;
  *(undefined8 *)(puVar2 + 8) = 0xd000000000000016;
  *(undefined8 *)(puVar2 + 0x10) = 0x8000000100db0170;
  _swift_willThrow();
LAB_1006b91a8:
  auVar10._8_8_ = param_1;
  auVar10._0_8_ = uVar6;
  return auVar10;
}



/* Address: 0x1006b91cc | FUN_1006b91cc */

void FUN_1006b91cc(undefined8 param_1,char *param_2,void *param_3,undefined8 param_4,
                  undefined8 param_5,char *param_6,void *param_7)

{
  String SVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  Optional OVar4;
  undefined7 extraout_var;
  char *pcVar6;
  long lVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar10;
  long unaff_x21;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  char *local_80;
  void *pvStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  _StringGuts _Var5;
  undefined1 *puVar9;
  
  OVar4 = Swift::Optional::typeMetadataAccessor();
  _Var5.unknown = (undefined *)CONCAT71(extraout_var,OVar4.value);
  lVar11 = *(long *)(_Var5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)&local_80 - extraout_x8;
  pcVar6 = param_2;
  pvVar8 = param_3;
  FUN_1006b9070(param_2,param_3,param_5);
  if (unaff_x21 == 0) {
    SVar15.bridgeObject = pvVar8;
    SVar15.str = pcVar6;
    local_80 = param_2;
    pvStack_78 = param_3;
    Swift::LosslessStringConvertible::_init(SVar15);
    lVar10 = *(long *)(param_6 + -8);
    lVar7 = lVar12;
    pcVar6 = param_6;
    (**(code **)(lVar10 + 0x30))(lVar12,1);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar11 + 8))(lVar12);
      local_70 = 0;
      uStack_68 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x34,_Var5);
      SVar13.bridgeObject = (void *)0x8000000100db0170;
      SVar13.str = (char *)0xd000000000000016;
      SVar16.bridgeObject = param_7;
      SVar16.str = pcVar6;
      Swift::String::append(SVar13,SVar16);
      SVar1.bridgeObject = pvStack_78;
      SVar1.str = local_80;
      SVar17.bridgeObject = param_7;
      SVar17.str = pcVar6;
      Swift::String::append(SVar1,SVar17);
      SVar14.bridgeObject = (void *)0x8000000100db01b0;
      SVar14.str = (char *)0xd00000000000001a;
      SVar18.bridgeObject = param_7;
      SVar18.str = pcVar6;
      Swift::String::append(SVar14,SVar18);
      SVar15 = Swift::__typeName(SUB81(param_6,0));
      puVar9 = SVar15.bridgeObject;
      SVar19.bridgeObject = param_7;
      SVar19.str = pcVar6;
      Swift::String::append(SVar15,SVar19);
      _swift_bridgeObjectRelease();
      uVar3 = uStack_68;
      uVar2 = local_70;
      FUN_1006bc4b4();
      _swift_allocError(&DAT_100ef7808,puVar9,0,0);
      *puVar9 = 2;
      *(undefined8 *)(puVar9 + 8) = uVar2;
      *(undefined8 *)(puVar9 + 0x10) = uVar3;
      _swift_willThrow();
    }
    else {
      (**(code **)(lVar10 + 0x20))(param_1,lVar12,param_6);
    }
  }
  return;
}



/* Address: 0x1006b9398 | FUN_1006b9398 */

void FUN_1006b9398(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  ContiguousArray<__int8> CVar2;
  ContiguousArray<__int8> CVar3;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  void *pvVar4;
  
  SVar7.bridgeObject = param_2;
  SVar7.str = param_1;
  SVar7 = Swift::String::lowercased(SVar7);
  pvVar4 = SVar7.bridgeObject;
  if (param_4 == (void *)0x0) {
    pvVar5 = pvVar4;
    FUN_1006b9928(SVar7.str,pvVar4);
    _swift_bridgeObjectRelease(pvVar4);
    _swift_bridgeObjectRelease(pvVar5);
    SVar10.bridgeObject = param_2;
    SVar10.str = param_1;
    CVar3 = Swift::String::get_utf8CString(SVar10);
    _unsetenv(CVar3.unknown + 0x20);
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar6 = *unaff_x20;
    FUN_1006b9adc(param_3,param_4,SVar7.str,pvVar4,uVar1);
    _swift_bridgeObjectRelease(pvVar4);
    *unaff_x20 = uVar6;
    SVar8.bridgeObject = param_2;
    SVar8.str = param_1;
    CVar2 = Swift::String::get_utf8CString(SVar8);
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    CVar3 = Swift::String::get_utf8CString(SVar9);
    _setenv(CVar2.unknown + 0x20,CVar3.unknown + 0x20,1);
    _swift_release(CVar2.unknown);
  }
  _swift_release(CVar3.unknown);
  return;
}



/* Address: 0x1006b94b0 | FUN_1006b94b0 */

/* WARNING: Removing unreachable block (ram,0x0001006b952c) */

void FUN_1006b94b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_1);
  uVar1 = param_2;
  _swift_isUniquelyReferenced_nonNull_native(param_2);
  local_38 = param_2;
  FUN_1006bc4f4(param_1,FUN_100153a88,0,uVar1,&local_38);
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1006b9534 | FUN_1006b9534 */

void FUN_1006b9534(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006b95a8;
  FUN_1006bc768(param_1,param_2);
  return;
}



/* Address: 0x1006b95a8 | FUN_1006b95a8 */

void FUN_1006b95a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(long **)(lVar1 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
  _swift_task_switch(FUN_1006b9604,0,0);
  return;
}



/* Address: 0x1006b9604 | FUN_1006b9604 */

/* WARNING: Removing unreachable block (ram,0x0001006b964c) */

void FUN_1006b9604(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x30);
  if (lVar1 == 0) {
    FUN_1006bc2f0(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    FUN_1006bc928(*(undefined8 *)(unaff_x22 + 0x18),lVar1);
    _swift_bridgeObjectRelease(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006b9694. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006b9698 | FUN_1006b9698 */

void FUN_1006b9698(undefined8 param_1,undefined8 *param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = *param_2;
  plVar1 = (long *)0x890;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006b9710;
  FUN_100a643f4(0,0x7fffffffffffffff,&DAT_100f2c7e8,&PTR_PTR_100f2c500);
  return;
}



/* Address: 0x1006b9710 | FUN_1006b9710 */

void FUN_1006b9710(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x10) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  *(undefined8 *)(lVar2 + 0x20) = param_2;
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = param_3;
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    pcVar1 = FUN_1006b9794;
  }
  else {
    pcVar1 = FUN_1006b9848;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006b9794 | FUN_1006b9794 */

void FUN_1006b9794(void)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long unaff_x22;
  ulong uVar5;
  undefined8 *puVar6;
  String SVar7;
  tuple2_conflict1 tVar8;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x70);
  lVar2 = *(long *)(unaff_x22 + 0x78);
  uVar5 = *(ulong *)(unaff_x22 + 0x20);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x58);
  pvVar3 = (void *)0x0;
  _swift_beginAccess(lVar2 + 0x18,unaff_x22 + 0x38,0,0);
  lVar4 = *(long *)(lVar2 + 0x18);
  _swift_retain(lVar2);
  SVar7.bridgeObject = pvVar3;
  SVar7.str = (char *)(ulong)(uint)((int)(uVar5 >> 0x20) - (int)uVar5);
  tVar8 = Swift::String::_fromUTF8Repairing
                    ((undefined *)
                     (lVar4 + (uVar1 >> 0x18 & 0xffff00) + (uVar1 >> 0x30 & 0xff) +
                     (uVar5 & 0xffffffff)),SVar7);
  _swift_release_n(lVar2,2,tVar8._16_8_);
  *puVar6 = tVar8.result.str;
  puVar6[1] = tVar8.result.bridgeObject;
                    /* WARNING: Could not recover jumptable at 0x0001006b9844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006b9848 | FUN_1006b9848 */

void FUN_1006b9848(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006b9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006b9854 | FUN_1006b9854 */

uint FUN_1006b9854(uint param_1)

{
  uint uVar1;
  
  uVar1 = param_1;
  FUN_100a33360();
  return uVar1 & 1 | (uint)(param_1 == 0x3d);
}



/* Address: 0x1006b9884 | FUN_1006b9884 */

bool FUN_1006b9884(int param_1)

{
  return param_1 == 0x22;
}



/* Address: 0x1006b9890 | FUN_1006b9890 */

void FUN_1006b9890(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1006bbfe8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1006b98b8 | FUN_1006b98b8 */

void FUN_1006b98b8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1006bc2f0();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006b98f4 | FUN_1006b98f4 */

String FUN_1006b98f4(Dictionary param_1)

{
  String SVar1;
  
  SVar1 = Swift::Dictionary::get_description(param_1);
  return SVar1;
}



/* Address: 0x1006b990c | FUN_1006b990c */

String FUN_1006b990c(void)

{
  undefined8 *unaff_x20;
  String SVar1;
  
  SVar1 = Swift::Dictionary::get_description((undefined *)*unaff_x20);
  return SVar1;
}



/* Address: 0x1006b9928 | FUN_1006b9928 */

undefined1  [16] FUN_1006b9928(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_10046483c();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1006ba224();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_1 * 0x10 + 8));
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_10031e9f4(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1006b99fc | FUN_1006b99fc */

undefined1  [16] FUN_1006b99fc(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar5);
  FUN_1006a3238(param_1,param_2,param_3,param_4);
  _swift_bridgeObjectRelease(lVar5);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
    uVar4 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar5 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1006ba534();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar5 + 0x30) + param_1 * 0x20 + 0x18));
    puVar1 = (undefined8 *)(*(long *)(lVar5 + 0x38) + param_1 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    FUN_1006cafc4(param_1,lVar5);
    *unaff_x20 = lVar5;
  }
  auVar6._8_8_ = uVar4;
  auVar6._0_8_ = uVar3;
  return auVar6;
}



/* Address: 0x1006b9adc | FUN_1006b9adc */

void FUN_1006b9adc(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,uint param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_10046483c();
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9bb8);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_1006babdc(lVar8,param_5 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    FUN_10046483c();
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9b80);
      (*pcVar3)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_1006ba224();
    lVar8 = *unaff_x20;
    goto joined_r0x0001006b9bcc;
  }
  lVar8 = *unaff_x20;
joined_r0x0001006b9bcc:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9c38);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x1006b9c38 | FUN_1006b9c38 */

void FUN_1006b9c38(undefined8 param_1,undefined8 param_2,undefined1 param_3,ulong param_4,
                  ulong param_5,uint param_6)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  
  lVar12 = *unaff_x20;
  uVar6 = param_4;
  uVar7 = param_5;
  FUN_10046483c();
  lVar8 = *(long *)(lVar12 + 0x10);
  uVar11 = (ulong)~(uint)uVar7 & 1;
  lVar9 = lVar8 + uVar11;
  if (SCARRY8(lVar8,uVar11)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b9d2c);
    (*pcVar5)();
  }
  if (*(long *)(lVar12 + 0x18) < lVar9) {
    FUN_1006bae90(lVar9,param_6 & 1);
    uVar6 = param_4;
    uVar11 = param_5;
    FUN_10046483c();
    if (((uint)uVar7 & 1) != ((uint)uVar11 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b9ce4);
      (*pcVar5)();
    }
  }
  else if ((param_6 & 1) == 0) {
    FUN_1006ba39c();
    lVar9 = *unaff_x20;
    goto joined_r0x0001006b9d40;
  }
  lVar9 = *unaff_x20;
joined_r0x0001006b9d40:
  if ((uVar7 & 1) != 0) {
    puVar10 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar6 * 0x18);
    uVar2 = *puVar10;
    uVar3 = puVar10[1];
    *puVar10 = param_1;
    puVar10[1] = param_2;
    uVar4 = *(undefined1 *)(puVar10 + 2);
    *(undefined1 *)(puVar10 + 2) = param_3;
    FUN_1006ad108(uVar2,uVar3,uVar4);
    return;
  }
  lVar8 = lVar9 + (uVar6 >> 6) * 8;
  *(ulong *)(lVar8 + 0x40) = *(ulong *)(lVar8 + 0x40) | 1L << (uVar6 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + uVar6 * 0x10);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar10 = (undefined8 *)(*(long *)(lVar9 + 0x38) + uVar6 * 0x18);
  *puVar10 = param_1;
  puVar10[1] = param_2;
  *(undefined1 *)(puVar10 + 2) = param_3;
  if (SCARRY8(*(long *)(lVar9 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1006b9db4);
    (*pcVar5)();
  }
  *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_5);
  return;
}



/* Address: 0x1006b9db4 | FUN_1006b9db4 */

void FUN_1006b9db4(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6,uint param_7)

{
  undefined8 *puVar1;
  ulong *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long *unaff_x20;
  long lVar10;
  
  lVar10 = *unaff_x20;
  uVar4 = param_3;
  uVar6 = param_4;
  FUN_1006a3238(param_3,param_4,param_5,param_6);
  lVar7 = *(long *)(lVar10 + 0x10);
  uVar9 = (ulong)~(uint)uVar6 & 1;
  lVar8 = lVar7 + uVar9;
  if (SCARRY8(lVar7,uVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9eb0);
    (*pcVar3)();
  }
  if (*(long *)(lVar10 + 0x18) < lVar8) {
    FUN_1006bb164(lVar8,param_7 & 1);
    uVar4 = param_3;
    uVar9 = param_4;
    FUN_1006a3238(param_3,param_4,param_5,param_6);
    if (((uint)uVar6 & 1) != ((uint)uVar9 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9e74);
      (*pcVar3)();
    }
  }
  else if ((param_7 & 1) == 0) {
    FUN_1006ba534();
    lVar8 = *unaff_x20;
    goto joined_r0x0001006b9ec4;
  }
  lVar8 = *unaff_x20;
joined_r0x0001006b9ec4:
  if ((uVar6 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
    uVar5 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar5);
    return;
  }
  lVar7 = lVar8 + (uVar4 >> 6) * 8;
  *(ulong *)(lVar7 + 0x40) = *(ulong *)(lVar7 + 0x40) | 1L << (uVar4 & 0x3f);
  puVar2 = (ulong *)(*(long *)(lVar8 + 0x30) + uVar4 * 0x20);
  *puVar2 = param_3;
  puVar2[1] = param_4;
  puVar2[2] = param_5;
  puVar2[3] = param_6;
  puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x38) + uVar4 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006b9f34);
    (*pcVar3)();
  }
  *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_6);
  return;
}



/* Address: 0x1006b9f34 | FUN_1006b9f34 */

void FUN_1006b9f34(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_10046483c();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ba00c);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_1006bb76c(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar8 = param_3;
    FUN_10046483c();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006b9fd4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1006ba888();
    lVar6 = *unaff_x20;
    goto joined_r0x0001006ba020;
  }
  lVar6 = *unaff_x20;
joined_r0x0001006ba020:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
    _swift_release(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006ba084);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1006ba084 | FUN_1006ba084 */

void FUN_1006ba084(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 *param_4,
                  uint param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auStack_88 [56];
  
  lVar9 = *unaff_x20;
  puVar6 = param_4;
  uVar3 = param_2;
  FUN_1006a32d4();
  lVar4 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ba17c);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar5) {
    param_5 = param_5 & 1;
    FUN_1006bba08(lVar5);
    puVar6 = param_4;
    FUN_1006a32d4();
    if (((uint)uVar3 & 1) != (param_5 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ba124);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_1006ba9f8();
    lVar5 = *unaff_x20;
    goto joined_r0x0001006ba190;
  }
  lVar5 = *unaff_x20;
joined_r0x0001006ba190:
  if ((uVar3 & 1) != 0) {
    puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)puVar6 * 0x18);
    uVar10 = *puVar6;
    uVar11 = puVar6[1];
    uVar2 = puVar6[2];
    *puVar6 = param_1;
    puVar6[1] = param_2;
    puVar6[2] = param_3;
    _swift_release(uVar2);
    _swift_release(uVar11);
    _swift_release(uVar10);
    return;
  }
  lVar4 = lVar5 + ((ulong)puVar6 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << ((ulong)puVar6 & 0x3f);
  puVar8 = (undefined8 *)(*(long *)(lVar5 + 0x30) + (long)puVar6 * 0x38);
  uVar11 = param_4[1];
  uVar10 = *param_4;
  uVar12 = param_4[3];
  uVar2 = param_4[2];
  uVar14 = param_4[5];
  uVar13 = param_4[4];
  puVar8[6] = param_4[6];
  puVar8[3] = uVar12;
  puVar8[2] = uVar2;
  puVar8[5] = uVar14;
  puVar8[4] = uVar13;
  puVar8[1] = uVar11;
  *puVar8 = uVar10;
  puVar6 = (undefined8 *)(*(long *)(lVar5 + 0x38) + (long)puVar6 * 0x18);
  *puVar6 = param_1;
  puVar6[1] = param_2;
  puVar6[2] = param_3;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006ba224);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  FUN_1006bcfb4(param_4,auStack_88);
  return;
}



/* Address: 0x1006ba224 | FUN_1006ba224 */

void FUN_1006ba224(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fdc4b0;
  FUN_1000f7830(&DAT_100fdc4b0,&DAT_100c70730);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
      _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x40);
    if (uVar7 == 0) goto LAB_1006ba300;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar12 << 6) * 0x10;
        uVar3 = ((undefined8 *)(*(long *)(original + 0x30) + lVar10))[1];
        uVar2 = *(undefined8 *)(*(long *)(original + 0x38) + lVar10);
        uVar4 = ((undefined8 *)(*(long *)(original + 0x38) + lVar10))[1];
        lVar11 = *(long *)(p_Var6 + 0x30);
        *(undefined8 *)(lVar11 + lVar10) = *(undefined8 *)(*(long *)(original + 0x30) + lVar10);
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar3;
        lVar11 = *(long *)(p_Var6 + 0x38);
        *(undefined8 *)(lVar11 + lVar10) = uVar2;
        ((undefined8 *)(lVar11 + lVar10))[1] = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        if (uVar7 != 0) break;
LAB_1006ba300:
        do {
          lVar10 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1006ba39c);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1006ba374;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar12 = lVar10;
      }
    } while( true );
  }
LAB_1006ba374:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}



/* Address: 0x1006ba39c | FUN_1006ba39c */

void FUN_1006ba39c(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar16;
  
  this = (_DictionaryStorage *)&DAT_100fdc4b8;
  FUN_1000f7830(&DAT_100fdc4b8,&DAT_100c70738);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var10 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar11 = (1L << ((ulong)(byte)p_Var10[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var10 != original || p_Var1 + uVar11 * 8 <= p_Var10 + 0x40) {
      _memmove(p_Var10 + 0x40,p_Var1,uVar11 << 3);
    }
    lVar16 = 0;
    *(undefined8 *)(p_Var10 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar11 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(original + 0x40);
    if (uVar11 == 0) goto LAB_1006ba47c;
    do {
      uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      while( true ) {
        uVar13 = LZCOUNT(uVar13) | lVar16 << 6;
        lVar15 = uVar13 * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar15);
        uVar6 = puVar2[1];
        lVar14 = uVar13 * 0x18;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar14);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar4 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + lVar15);
        uVar8 = *(undefined1 *)(puVar3 + 2);
        *puVar4 = *puVar2;
        puVar4[1] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + lVar14);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        *(undefined1 *)(puVar2 + 2) = uVar8;
        _swift_bridgeObjectRetain();
        FUN_1006ad53c(uVar5,uVar7,uVar8);
        if (uVar11 != 0) break;
LAB_1006ba47c:
        do {
          lVar14 = lVar16 + 1;
          if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x1006ba534);
            (*pcVar9)();
          }
          if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_1006ba508;
          uVar11 = *(ulong *)(p_Var1 + lVar14 * 8);
          lVar16 = lVar16 + 1;
        } while (uVar11 == 0);
        uVar13 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
        uVar11 = uVar11 - 1 & uVar11;
        lVar16 = lVar14;
      }
    } while( true );
  }
LAB_1006ba508:
  _swift_release(original);
  *unaff_x20 = (long)p_Var10;
  return;
}



/* Address: 0x1006ba534 | FUN_1006ba534 */

void FUN_1006ba534(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar15;
  undefined8 uVar16;
  
  this = (_DictionaryStorage *)&DAT_100fdc498;
  FUN_1000f7830(&DAT_100fdc498,&DAT_100c706c0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var9 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar10 = (1L << ((ulong)(byte)p_Var9[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var9 != original || p_Var1 + uVar10 * 8 <= p_Var9 + 0x40) {
      _memmove(p_Var9 + 0x40,p_Var1,uVar10 << 3);
    }
    lVar15 = 0;
    *(undefined8 *)(p_Var9 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar10 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar10 = ~(-1L << (uVar11 & 0x3f));
    }
    uVar10 = uVar10 & *(ulong *)(original + 0x40);
    if (uVar10 == 0) goto LAB_1006ba610;
    do {
      uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      while( true ) {
        uVar12 = LZCOUNT(uVar12) | lVar15 << 6;
        lVar14 = uVar12 * 0x20;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar14);
        uVar4 = puVar2[2];
        uVar6 = puVar2[3];
        lVar13 = uVar12 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
        uVar5 = *puVar3;
        uVar7 = puVar3[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var9 + 0x30) + lVar14);
        uVar16 = *puVar2;
        puVar3[1] = puVar2[1];
        *puVar3 = uVar16;
        puVar3[2] = uVar4;
        puVar3[3] = uVar6;
        puVar2 = (undefined8 *)(*(long *)(p_Var9 + 0x38) + lVar13);
        *puVar2 = uVar5;
        puVar2[1] = uVar7;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar7);
        if (uVar10 != 0) break;
LAB_1006ba610:
        do {
          lVar13 = lVar15 + 1;
          if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1006ba6b8);
            (*pcVar8)();
          }
          if ((long)(uVar11 + 0x3f >> 6) <= lVar13) goto LAB_1006ba690;
          uVar10 = *(ulong *)(p_Var1 + lVar13 * 8);
          lVar15 = lVar15 + 1;
        } while (uVar10 == 0);
        uVar12 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
        uVar10 = uVar10 - 1 & uVar10;
        lVar15 = lVar13;
      }
    } while( true );
  }
LAB_1006ba690:
  _swift_release(original);
  *unaff_x20 = (long)p_Var9;
  return;
}



/* Address: 0x1006ba6b8 | FUN_1006ba6b8 */

void FUN_1006ba6b8(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uVar13;
  code *pcVar14;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar20;
  
  this = (_DictionaryStorage *)&DAT_100fdc490;
  FUN_1000f7830(&DAT_100fdc490,&DAT_100c706b8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var15 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar16 = (1L << ((ulong)(byte)p_Var15[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var15 != original || p_Var1 + uVar16 * 8 <= p_Var15 + 0x40) {
      _memmove(p_Var15 + 0x40,p_Var1,uVar16 << 3);
    }
    lVar20 = 0;
    *(undefined8 *)(p_Var15 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar16 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar16 = ~(-1L << (uVar17 & 0x3f));
    }
    uVar16 = uVar16 & *(ulong *)(original + 0x40);
    if (uVar16 == 0) goto LAB_1006ba7a8;
    do {
      uVar18 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
      uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
      uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
      uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      while( true ) {
        uVar18 = LZCOUNT(uVar18) | lVar20 << 6;
        lVar19 = uVar18 * 0x10;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + lVar19);
        uVar9 = puVar3[1];
        lVar2 = uVar18 * 0x38;
        puVar4 = (undefined1 *)(*(long *)(original + 0x38) + lVar2);
        uVar13 = *puVar4;
        uVar6 = *(undefined8 *)(puVar4 + 8);
        uVar10 = *(undefined8 *)(puVar4 + 0x10);
        uVar7 = *(undefined8 *)(puVar4 + 0x18);
        uVar11 = *(undefined8 *)(puVar4 + 0x20);
        uVar8 = *(undefined8 *)(puVar4 + 0x28);
        uVar12 = *(undefined8 *)(puVar4 + 0x30);
        puVar5 = (undefined8 *)(*(long *)(p_Var15 + 0x30) + lVar19);
        *puVar5 = *puVar3;
        puVar5[1] = uVar9;
        puVar4 = (undefined1 *)(*(long *)(p_Var15 + 0x38) + lVar2);
        *puVar4 = uVar13;
        *(undefined8 *)(puVar4 + 8) = uVar6;
        *(undefined8 *)(puVar4 + 0x10) = uVar10;
        *(undefined8 *)(puVar4 + 0x18) = uVar7;
        *(undefined8 *)(puVar4 + 0x20) = uVar11;
        *(undefined8 *)(puVar4 + 0x28) = uVar8;
        *(undefined8 *)(puVar4 + 0x30) = uVar12;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar10);
        FUN_1006bcff0(uVar7,uVar11,uVar8,uVar12);
        if (uVar16 != 0) break;
LAB_1006ba7a8:
        do {
          lVar2 = lVar20 + 1;
          if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x1006ba888);
            (*pcVar14)();
          }
          if ((long)(uVar17 + 0x3f >> 6) <= lVar2) goto LAB_1006ba854;
          uVar16 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar20 = lVar20 + 1;
        } while (uVar16 == 0);
        uVar18 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
        uVar18 = (uVar18 & 0xcccccccccccccccc) >> 2 | (uVar18 & 0x3333333333333333) << 2;
        uVar18 = (uVar18 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar18 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar18 = (uVar18 & 0xff00ff00ff00ff00) >> 8 | (uVar18 & 0xff00ff00ff00ff) << 8;
        uVar18 = (uVar18 & 0xffff0000ffff0000) >> 0x10 | (uVar18 & 0xffff0000ffff) << 0x10;
        uVar18 = uVar18 >> 0x20 | uVar18 << 0x20;
        uVar16 = uVar16 - 1 & uVar16;
        lVar20 = lVar2;
      }
    } while( true );
  }
LAB_1006ba854:
  _swift_release(original);
  *unaff_x20 = (long)p_Var15;
  return;
}



/* Address: 0x1006ba888 | FUN_1006ba888 */

void FUN_1006ba888(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar11;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fdc488;
  FUN_1000f7830(&DAT_100fdc488,&DAT_100c706b0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var7 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar8 = (1L << ((ulong)(byte)p_Var7[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var7 != original || p_Var1 + uVar8 * 8 <= p_Var7 + 0x40) {
      _memmove(p_Var7 + 0x40,p_Var1,uVar8 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var7 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(original + 0x40);
    if (uVar8 == 0) goto LAB_1006ba964;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar11 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 8) = uVar11;
        _swift_bridgeObjectRetain();
        _swift_retain(uVar11);
        if (uVar8 != 0) break;
LAB_1006ba964:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1006ba9f8);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_1006ba9d0;
          uVar8 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1006ba9d0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var7;
  return;
}



/* Address: 0x1006ba9f8 | FUN_1006ba9f8 */

void FUN_1006ba9f8(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  this = (_DictionaryStorage *)&DAT_100fdc480;
  FUN_1000f7830(&DAT_100fdc480,&DAT_100c706a8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var12 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar13 = (1L << ((ulong)(byte)p_Var12[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var12 != original || p_Var1 + uVar13 * 8 <= p_Var12 + 0x40) {
      _memmove(p_Var12 + 0x40,p_Var1,uVar13 << 3);
    }
    lVar18 = 0;
    *(undefined8 *)(p_Var12 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar14 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar14 & 0x3f));
    }
    uVar13 = uVar13 & *(ulong *)(original + 0x40);
    if (uVar13 == 0) goto LAB_1006baae0;
    do {
      uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      while( true ) {
        uVar15 = LZCOUNT(uVar15) | lVar18 << 6;
        lVar2 = uVar15 * 0x38;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + lVar2);
        uVar8 = puVar3[1];
        uVar6 = puVar3[2];
        uVar9 = puVar3[3];
        uVar17 = puVar3[6];
        lVar16 = uVar15 * 0x18;
        puVar4 = (undefined8 *)(*(long *)(original + 0x38) + lVar16);
        puVar5 = (undefined8 *)(*(long *)(p_Var12 + 0x30) + lVar2);
        uVar20 = puVar3[5];
        uVar19 = puVar3[4];
        uVar7 = puVar4[1];
        uVar10 = puVar4[2];
        uVar22 = puVar4[1];
        uVar21 = *puVar4;
        *puVar5 = *puVar3;
        puVar5[1] = uVar8;
        puVar5[2] = uVar6;
        puVar5[3] = uVar9;
        puVar5[5] = uVar20;
        puVar5[4] = uVar19;
        puVar5[6] = uVar17;
        puVar3 = (undefined8 *)(*(long *)(p_Var12 + 0x38) + lVar16);
        puVar3[1] = uVar22;
        *puVar3 = uVar21;
        puVar3[2] = uVar10;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar9);
        _swift_bridgeObjectRetain(uVar17);
        _swift_retain(uVar21);
        _swift_retain(uVar7);
        _swift_retain(uVar10);
        if (uVar13 != 0) break;
LAB_1006baae0:
        do {
          lVar2 = lVar18 + 1;
          if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
            pcVar11 = (code *)SoftwareBreakpoint(1,0x1006babdc);
            (*pcVar11)();
          }
          if ((long)(uVar14 + 0x3f >> 6) <= lVar2) goto LAB_1006baba8;
          uVar13 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar18 = lVar18 + 1;
        } while (uVar13 == 0);
        uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
        uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
        uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
        uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
        uVar13 = uVar13 - 1 & uVar13;
        lVar18 = lVar2;
      }
    } while( true );
  }
LAB_1006baba8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var12;
  return;
}



/* Address: 0x1006babdc | FUN_1006babdc */

void FUN_1006babdc(long param_1,bool param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  void *pvVar5;
  undefined8 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  __RawDictionaryStorage *original;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc4b0;
  FUN_1000f7830(&DAT_100fdc4b0,&DAT_100c70730);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bae5c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bae8c);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) != 0) {
            uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
            }
            else {
              _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1006bae5c;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    lVar13 = (LZCOUNT(uVar12) | lVar19 << 6) * 0x10;
    pSVar1 = (String *)(*(long *)(original + 0x30) + lVar13);
    pcVar3 = pSVar1->str;
    pvVar5 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar2 = (undefined8 *)(*(long *)(original + 0x38) + lVar13);
    uVar4 = *puVar2;
    uVar6 = puVar2[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bae90);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar2 = pcVar3;
    puVar2[1] = pvVar5;
    puVar2 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar2 = uVar4;
    puVar2[1] = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x1006bae90 | FUN_1006bae90 */

void FUN_1006bae90(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  undefined8 uVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  String SVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  long lVar18;
  __RawDictionaryStorage *p_Var19;
  __RawDictionaryStorage *original;
  ulong local_b8;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc4b8;
  FUN_1000f7830(&DAT_100fdc4b8,&DAT_100c70738);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bb130:
    _swift_release(original);
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var19 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_b8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_b8 = ~(-1L << (uVar16 & 0x3f));
  }
  local_b8 = local_b8 & *(ulong *)p_Var19;
  lVar13 = 0;
  do {
    if (local_b8 == 0) {
      do {
        lVar18 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bb160);
          (*pcVar9)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar16 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1006bb130;
        }
        local_b8 = *(ulong *)(p_Var19 + lVar18 * 8);
        lVar13 = lVar13 + 1;
      } while (local_b8 == 0);
      uVar12 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_b8 = local_b8 - 1 & local_b8;
    }
    else {
      uVar12 = (local_b8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_b8 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      local_b8 = local_b8 - 1 & local_b8;
      lVar18 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar18 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar12 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar4 = pSVar1->bridgeObject;
    SVar7 = *pSVar1;
    puVar14 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x18);
    uVar3 = *puVar14;
    uVar5 = puVar14[1];
    uVar6 = *(undefined1 *)(puVar14 + 2);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      FUN_1006ad53c(uVar3,uVar5,uVar6);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar7);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar17 >> 6;
      do {
        uVar11 = uVar15 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bb164);
          (*pcVar9)();
        }
        uVar15 = 0;
        if (uVar11 != uVar12) {
          uVar15 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar15 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar15 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar15 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar15 + 0x40);
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x10);
    *puVar14 = pcVar2;
    puVar14[1] = pvVar4;
    puVar14 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x18);
    *puVar14 = uVar3;
    puVar14[1] = uVar5;
    *(undefined1 *)(puVar14 + 2) = uVar6;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar18;
  } while( true );
}



/* Address: 0x1006bb164 | FUN_1006bb164 */

void FUN_1006bb164(long param_1,bool param_2)

{
  undefined8 *puVar1;
  __int64 capacity;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  bool bVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar17;
  __RawDictionaryStorage *p_Var18;
  long lVar19;
  undefined1 auStack_b0 [80];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc498;
  FUN_1000f7830(&DAT_100fdc498,&DAT_100c706c0);
  p_Var10 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bb414:
    _swift_release(original);
LAB_1006bb41c:
    *unaff_x20 = (long)p_Var10;
    return;
  }
  p_Var18 = original + 0x40;
  uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar15 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)p_Var18;
  lVar13 = 0;
  do {
    if (uVar17 == 0) {
      do {
        lVar19 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bb444);
          (*pcVar9)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1006bb41c;
          }
          uVar17 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var18 = -1L << (uVar17 & 0x3f);
          }
          else {
            _bzero(p_Var18,uVar17 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1006bb414;
        }
        uVar17 = *(ulong *)(p_Var18 + lVar19 * 8);
        lVar13 = lVar13 + 1;
      } while (uVar17 == 0);
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
    }
    else {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = uVar12 >> 0x20 | uVar12 << 0x20;
      uVar17 = uVar17 - 1 & uVar17;
      lVar19 = lVar13;
    }
    uVar12 = LZCOUNT(uVar12) | lVar19 << 6;
    puVar1 = (undefined8 *)(*(long *)(original + 0x30) + uVar12 * 0x20);
    uVar2 = *puVar1;
    uVar5 = puVar1[1];
    uVar3 = puVar1[2];
    uVar6 = puVar1[3];
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar12 * 0x10);
    uVar4 = *puVar1;
    uVar7 = puVar1[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var10 + 0x28));
    into.unknown = auStack_b0;
    Swift::Hashable::hash(into);
    uVar11 = Swift::Hasher::_finalize(into);
    uVar16 = -1L << ((ulong)(byte)p_Var10[0x20] & 0x3f);
    uVar11 = uVar11 & (uVar16 ^ 0xffffffffffffffff);
    uVar14 = uVar11 >> 6;
    uVar12 = -1L << (uVar11 & 0x3f) & (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar12 == 0) {
      bVar8 = false;
      uVar12 = 0x3f - uVar16 >> 6;
      do {
        uVar11 = uVar14 + 1;
        if ((uVar11 == uVar12) && (bVar8)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006bb448);
          (*pcVar9)();
        }
        uVar14 = 0;
        if (uVar11 != uVar12) {
          uVar14 = uVar11;
        }
        bVar8 = (bool)(uVar11 == uVar12 | bVar8);
      } while (*(ulong *)(p_Var10 + uVar14 * 8 + 0x40) == 0xffffffffffffffff);
      uVar12 = ~*(ulong *)(p_Var10 + uVar14 * 8 + 0x40);
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar14 << 6;
    }
    else {
      uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar11 & 0x7fffffffffffffc0;
    }
    uVar14 = uVar12 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var10 + uVar14 + 0x40) =
         1L << (uVar12 & 0x3f) | *(ulong *)(p_Var10 + uVar14 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var10 + 0x30) + uVar12 * 0x20);
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    puVar1[2] = uVar3;
    puVar1[3] = uVar6;
    puVar1 = (undefined8 *)(*(long *)(p_Var10 + 0x38) + uVar12 * 0x10);
    *puVar1 = uVar4;
    puVar1[1] = uVar7;
    *(long *)(p_Var10 + 0x10) = *(long *)(p_Var10 + 0x10) + 1;
    lVar13 = lVar19;
  } while( true );
}



/* Address: 0x1006bb448 | FUN_1006bb448 */

void FUN_1006bb448(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  String SVar12;
  bool bVar13;
  code *pcVar14;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var15;
  Hasher into;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  undefined1 *puVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var24;
  ulong local_e8;
  undefined1 auStack_b0 [80];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc490;
  FUN_1000f7830(&DAT_100fdc490,&DAT_100c706b8);
  p_Var15 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bb738:
    _swift_release(original);
    *unaff_x20 = (long)p_Var15;
    return;
  }
  p_Var24 = original + 0x40;
  uVar21 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  local_e8 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    local_e8 = ~(-1L << (uVar21 & 0x3f));
  }
  local_e8 = local_e8 & *(ulong *)p_Var24;
  lVar18 = 0;
  do {
    if (local_e8 == 0) {
      do {
        lVar23 = lVar18 + 1;
        if (SCARRY8(lVar18,1)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1006bb768);
          (*pcVar14)();
        }
        if ((long)(uVar21 + 0x3f >> 6) <= lVar23) {
          if ((param_2 & 1U) != 0) {
            uVar21 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var24 = -1L << (uVar21 & 0x3f);
            }
            else {
              _bzero(p_Var24,uVar21 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1006bb738;
        }
        local_e8 = *(ulong *)(p_Var24 + lVar23 * 8);
        lVar18 = lVar18 + 1;
      } while (local_e8 == 0);
      uVar17 = (local_e8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_e8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
      local_e8 = local_e8 - 1 & local_e8;
    }
    else {
      uVar17 = (local_e8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_e8 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
      local_e8 = local_e8 - 1 & local_e8;
      lVar23 = lVar18;
    }
    uVar17 = LZCOUNT(uVar17) | lVar23 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar17 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar7 = pSVar2->bridgeObject;
    SVar12 = *pSVar2;
    puVar19 = (undefined1 *)(*(long *)(original + 0x38) + uVar17 * 0x38);
    uVar11 = *puVar19;
    uVar4 = *(undefined8 *)(puVar19 + 8);
    uVar8 = *(undefined8 *)(puVar19 + 0x10);
    uVar5 = *(undefined8 *)(puVar19 + 0x18);
    uVar9 = *(undefined8 *)(puVar19 + 0x20);
    uVar6 = *(undefined8 *)(puVar19 + 0x28);
    uVar10 = *(undefined8 *)(puVar19 + 0x30);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar7);
      _swift_bridgeObjectRetain(uVar8);
      FUN_1006bcff0(uVar5,uVar9,uVar6,uVar10);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var15 + 0x28));
    into.unknown = auStack_b0;
    Swift::String::hash(into,SVar12);
    uVar16 = Swift::Hasher::_finalize(into);
    uVar22 = -1L << ((ulong)(byte)p_Var15[0x20] & 0x3f);
    uVar16 = uVar16 & (uVar22 ^ 0xffffffffffffffff);
    uVar20 = uVar16 >> 6;
    uVar17 = -1L << (uVar16 & 0x3f) & (*(ulong *)(p_Var15 + uVar20 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar17 == 0) {
      bVar13 = false;
      uVar17 = 0x3f - uVar22 >> 6;
      do {
        uVar16 = uVar20 + 1;
        if ((uVar16 == uVar17) && (bVar13)) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1006bb76c);
          (*pcVar14)();
        }
        uVar20 = 0;
        if (uVar16 != uVar17) {
          uVar20 = uVar16;
        }
        bVar13 = (bool)(uVar16 == uVar17 | bVar13);
      } while (*(ulong *)(p_Var15 + uVar20 * 8 + 0x40) == 0xffffffffffffffff);
      uVar17 = ~*(ulong *)(p_Var15 + uVar20 * 8 + 0x40);
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar20 << 6;
    }
    else {
      uVar17 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
      uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
      uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
      uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | uVar16 & 0x7fffffffffffffc0;
    }
    uVar20 = uVar17 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var15 + uVar20 + 0x40) =
         1L << (uVar17 & 0x3f) | *(ulong *)(p_Var15 + uVar20 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var15 + 0x30) + uVar17 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar7;
    puVar19 = (undefined1 *)(*(long *)(p_Var15 + 0x38) + uVar17 * 0x38);
    *puVar19 = uVar11;
    *(undefined8 *)(puVar19 + 8) = uVar4;
    *(undefined8 *)(puVar19 + 0x10) = uVar8;
    *(undefined8 *)(puVar19 + 0x18) = uVar5;
    *(undefined8 *)(puVar19 + 0x20) = uVar9;
    *(undefined8 *)(puVar19 + 0x28) = uVar6;
    *(undefined8 *)(puVar19 + 0x30) = uVar10;
    *(long *)(p_Var15 + 0x10) = *(long *)(p_Var15 + 0x10) + 1;
    lVar18 = lVar23;
  } while( true );
}



/* Address: 0x1006bb76c | FUN_1006bb76c */

void FUN_1006bb76c(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  __RawDictionaryStorage *original;
  undefined8 uVar17;
  long lVar18;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc488;
  FUN_1000f7830(&DAT_100fdc488,&DAT_100c706b0);
  p_Var8 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bb9d4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar18 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006bba04);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar18) {
          if ((param_2 & 1U) != 0) {
            uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
            }
            else {
              _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1006bb9d4;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar18 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar18 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar18 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    uVar17 = *(undefined8 *)(*(long *)(original + 0x38) + uVar10 * 8);
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar4);
      _swift_retain(uVar17);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1006bba08);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(undefined8 *)(*(long *)(p_Var8 + 0x38) + uVar10 * 8) = uVar17;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar18;
  } while( true );
}



/* Address: 0x1006bba08 | FUN_1006bba08 */

void FUN_1006bba08(long param_1,bool param_2)

{
  __int64 capacity;
  char *pcVar1;
  char *pcVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  char *pcVar6;
  String SVar7;
  String SVar8;
  bool bVar9;
  code *pcVar10;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var11;
  Hasher HVar12;
  ulong uVar13;
  Hasher HVar14;
  ulong uVar15;
  long lVar16;
  undefined8 *puVar17;
  ulong uVar18;
  ulong uVar19;
  String *pSVar20;
  undefined8 uVar21;
  ulong uVar22;
  char *pcVar23;
  long *unaff_x20;
  undefined8 uVar24;
  __RawDictionaryStorage *p_Var25;
  long lVar26;
  ulong uVar27;
  __RawDictionaryStorage *original;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined1 auStack_b0 [80];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fdc480;
  FUN_1000f7830(&DAT_100fdc480,&DAT_100c706a8);
  p_Var11 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1006bbd1c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var11;
    return;
  }
  p_Var25 = original + 0x40;
  uVar19 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar27 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar27 = ~(-1L << (uVar19 & 0x3f));
  }
  uVar27 = uVar27 & *(ulong *)p_Var25;
  lVar16 = 0;
  do {
    if (uVar27 == 0) {
      do {
        lVar26 = lVar16 + 1;
        if (SCARRY8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006bbd4c);
          (*pcVar10)();
        }
        if ((long)(uVar19 + 0x3f >> 6) <= lVar26) {
          if ((param_2 & 1U) != 0) {
            uVar27 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var25 = -1L << (uVar27 & 0x3f);
            }
            else {
              _bzero(p_Var25,uVar27 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1006bbd1c;
        }
        uVar27 = *(ulong *)(p_Var25 + lVar26 * 8);
        lVar16 = lVar16 + 1;
      } while (uVar27 == 0);
      uVar15 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar27 = uVar27 - 1 & uVar27;
    }
    else {
      uVar15 = (uVar27 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar27 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
      uVar27 = uVar27 - 1 & uVar27;
      lVar26 = lVar16;
    }
    uVar15 = LZCOUNT(uVar15) | lVar26 << 6;
    pSVar20 = (String *)(*(long *)(original + 0x30) + uVar15 * 0x38);
    pcVar1 = pSVar20->str;
    pvVar4 = pSVar20->bridgeObject;
    SVar8 = *pSVar20;
    pcVar2 = pSVar20[1].str;
    pvVar5 = pSVar20[1].bridgeObject;
    SVar7 = pSVar20[1];
    pcVar23 = pSVar20[2].str;
    pvVar3 = pSVar20[2].bridgeObject;
    pcVar6 = pSVar20[3].str;
    puVar17 = (undefined8 *)(*(long *)(original + 0x38) + uVar15 * 0x18);
    uVar29 = puVar17[1];
    uVar28 = *puVar17;
    uVar21 = puVar17[2];
    if ((param_2 & 1U) == 0) {
      uVar24 = puVar17[1];
      _swift_bridgeObjectRetain(pvVar4);
      _swift_bridgeObjectRetain(pvVar5);
      _swift_bridgeObjectRetain(pcVar6);
      _swift_retain(uVar28);
      _swift_retain(uVar24);
      _swift_retain(uVar21);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var11 + 0x28));
    Swift::String::hash((Hasher)auStack_b0,SVar8);
    HVar14.unknown = pcVar2;
    Swift::String::hash((Hasher)auStack_b0,SVar7);
    HVar12.unknown = pcVar23;
    Swift::Hasher::_combine((__uint64)pcVar23,HVar14);
    uVar13 = Swift::Hasher::_finalize(HVar12);
    uVar22 = -1L << ((ulong)(byte)p_Var11[0x20] & 0x3f);
    uVar13 = uVar13 & (uVar22 ^ 0xffffffffffffffff);
    uVar18 = uVar13 >> 6;
    uVar15 = -1L << (uVar13 & 0x3f) & (*(ulong *)(p_Var11 + uVar18 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar15 == 0) {
      bVar9 = false;
      uVar15 = 0x3f - uVar22 >> 6;
      do {
        uVar13 = uVar18 + 1;
        if ((uVar13 == uVar15) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1006bbd50);
          (*pcVar10)();
        }
        uVar18 = 0;
        if (uVar13 != uVar15) {
          uVar18 = uVar13;
        }
        bVar9 = (bool)(uVar13 == uVar15 | bVar9);
      } while (*(ulong *)(p_Var11 + uVar18 * 8 + 0x40) == 0xffffffffffffffff);
      uVar15 = ~*(ulong *)(p_Var11 + uVar18 * 8 + 0x40);
      uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar18 << 6;
    }
    else {
      uVar15 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar18 = uVar15 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var11 + uVar18 + 0x40) =
         1L << (uVar15 & 0x3f) | *(ulong *)(p_Var11 + uVar18 + 0x40);
    puVar17 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + uVar15 * 0x38);
    *puVar17 = pcVar1;
    puVar17[1] = pvVar4;
    puVar17[2] = pcVar2;
    puVar17[3] = pvVar5;
    puVar17[4] = pcVar23;
    puVar17[5] = pvVar3;
    puVar17[6] = pcVar6;
    puVar17 = (undefined8 *)(*(long *)(p_Var11 + 0x38) + uVar15 * 0x18);
    puVar17[1] = uVar29;
    *puVar17 = uVar28;
    puVar17[2] = uVar21;
    *(long *)(p_Var11 + 0x10) = *(long *)(p_Var11 + 0x10) + 1;
    lVar16 = lVar26;
  } while( true );
}



/* Address: 0x1006bbd50 | FUN_1006bbd50 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1006bbd50(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  ID self;
  Dictionary<undefined,undefined> DVar8;
  undefined *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c281c();
  self = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  objc_stub::environment(self);
  DVar8 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  lVar15 = 0;
  uVar12 = 1L << ((ulong)(byte)DVar8.unknown[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((DVar8.unknown[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(DVar8.unknown + 0x40);
  while( true ) {
    while (uVar13 != 0) {
      uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar15 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(DVar8.unknown + 0x38) + uVar11);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      SVar16 = Swift::String::lowercased(*(String *)(*(long *)(DVar8.unknown + 0x30) + uVar11));
      _swift_bridgeObjectRetain(uVar4);
      puVar9 = puVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar17 = SVar16;
      FUN_10046483c();
      pcVar10 = SVar17.str;
      uVar11 = (ulong)~(uint)SVar17.bridgeObject & 1;
      lVar2 = *(long *)(puVar7 + 0x10) + uVar11;
      if (SCARRY8(*(long *)(puVar7 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bbfd4);
        (*pcVar5)();
      }
      if (*(long *)(puVar7 + 0x18) < lVar2) {
        FUN_1006babdc(lVar2,puVar9);
        SVar18 = SVar16;
        FUN_10046483c();
        pcVar10 = SVar18.str;
        if (((uint)SVar17.bridgeObject & 1) != ((uint)SVar18.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bbfe8);
          (*pcVar5)();
        }
      }
      else if (((ulong)puVar9 & 1) == 0) {
        FUN_1006ba224();
      }
      uVar13 = uVar13 - 1 & uVar13;
      if (((ulong)SVar17.bridgeObject & 1) == 0) {
        *(ulong *)(puVar7 + ((ulong)pcVar10 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar7 + ((ulong)pcVar10 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar10 & 0x3f);
        *(String *)(*(long *)(puVar7 + 0x30) + (long)pcVar10 * 0x10) = SVar16;
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + (long)pcVar10 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(puVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bbfd8);
          (*pcVar5)();
        }
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(puVar7 + 0x38) + (long)pcVar10 * 0x10);
        uVar14 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(SVar16.bridgeObject);
        _swift_bridgeObjectRelease(uVar14);
      }
    }
    bVar6 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar6) break;
    if ((long)(uVar12 + 0x3f >> 6) <= lVar15) {
      _swift_release(DVar8.unknown);
      return puVar7;
    }
    uVar13 = *(ulong *)((long)(DVar8.unknown + 0x40) + lVar15 * 8);
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bbfd0);
  (*pcVar5)();
}



/* Address: 0x1006bbfe8 | FUN_1006bbfe8 */

/* WARNING: Removing unreachable block (ram,0x0001006bc0ac) */

ulong FUN_1006bbfe8(ulong param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x21;
  ulong uVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long local_58;
  
  uVar7 = param_1;
  FUN_1006bbd50();
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_88,local_70);
    FUN_1000f7830(&DAT_100fdc4a0,&DAT_100c71e00);
    FUN_1006bd068();
    Swift::SingleValueDecodingContainer::_decode();
    lVar12 = 0;
    uVar10 = 1L << ((ulong)*(byte *)(local_58 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(local_58 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar14 = uVar14 & *(ulong *)(local_58 + 0x40);
    while( true ) {
      while (uVar14 != 0) {
        uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = lVar12 << 10 | LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) << 4;
        puVar1 = (undefined8 *)(*(long *)(local_58 + 0x38) + uVar9);
        uVar3 = *puVar1;
        uVar4 = puVar1[1];
        SVar15 = Swift::String::lowercased(*(String *)(*(long *)(local_58 + 0x30) + uVar9));
        _swift_bridgeObjectRetain(uVar4);
        uVar9 = uVar7;
        _swift_isUniquelyReferenced_nonNull_native();
        SVar16 = SVar15;
        FUN_10046483c();
        pcVar8 = SVar16.str;
        uVar11 = (ulong)~(uint)SVar16.bridgeObject & 1;
        lVar2 = *(long *)(uVar7 + 0x10) + uVar11;
        if (SCARRY8(*(long *)(uVar7 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc2dc);
          (*pcVar5)();
        }
        if (*(long *)(uVar7 + 0x18) < lVar2) {
          FUN_1006babdc(lVar2,uVar9);
          SVar17 = SVar15;
          FUN_10046483c();
          pcVar8 = SVar17.str;
          if (((uint)SVar16.bridgeObject & 1) != ((uint)SVar17.bridgeObject & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc2f0);
            (*pcVar5)();
          }
        }
        else if ((uVar9 & 1) == 0) {
          FUN_1006ba224();
        }
        uVar14 = uVar14 - 1 & uVar14;
        if (((ulong)SVar16.bridgeObject & 1) == 0) {
          lVar2 = uVar7 + ((ulong)pcVar8 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << ((ulong)pcVar8 & 0x3f);
          *(String *)(*(long *)(uVar7 + 0x30) + (long)pcVar8 * 0x10) = SVar15;
          puVar1 = (undefined8 *)(*(long *)(uVar7 + 0x38) + (long)pcVar8 * 0x10);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          if (SCARRY8(*(long *)(uVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc2e0);
            (*pcVar5)();
          }
          *(long *)(uVar7 + 0x10) = *(long *)(uVar7 + 0x10) + 1;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(uVar7 + 0x38) + (long)pcVar8 * 0x10);
          uVar13 = puVar1[1];
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          _swift_bridgeObjectRelease(SVar15.bridgeObject);
          _swift_bridgeObjectRelease(uVar13);
        }
      }
      bVar6 = SCARRY8(lVar12,1);
      lVar12 = lVar12 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc2d8);
        (*pcVar5)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar12) break;
      uVar14 = ((ulong *)(local_58 + 0x40))[lVar12];
    }
    _swift_release(local_58);
    FUN_100004594(auStack_88);
    FUN_100004594(param_1);
  }
  else {
    _swift_bridgeObjectRelease(uVar7);
    FUN_100004594(param_1);
  }
  return uVar7;
}



/* Address: 0x1006bc2f0 | FUN_1006bc2f0 */

ulong FUN_1006bc2f0(ulong param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  uVar6 = param_1;
  FUN_1006bbd50();
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    puVar12 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar12[-1];
      uVar4 = *puVar12;
      SVar13 = Swift::String::lowercased(*(String *)(puVar12 + -3));
      _swift_bridgeObjectRetain(uVar4);
      uVar7 = uVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      SVar14 = SVar13;
      FUN_10046483c();
      pcVar8 = SVar14.str;
      uVar9 = (ulong)~(uint)SVar14.bridgeObject & 1;
      lVar1 = *(long *)(uVar6 + 0x10) + uVar9;
      if (SCARRY8(*(long *)(uVar6 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc484);
        (*pcVar5)();
      }
      if (*(long *)(uVar6 + 0x18) < lVar1) {
        FUN_1006babdc(lVar1,uVar7);
        SVar15 = SVar13;
        FUN_10046483c();
        pcVar8 = SVar15.str;
        if (((uint)SVar14.bridgeObject & 1) != ((uint)SVar15.bridgeObject & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc498);
          (*pcVar5)();
        }
LAB_1006bc3f0:
        if (((ulong)SVar14.bridgeObject & 1) != 0) goto LAB_1006bc330;
LAB_1006bc3f8:
        lVar1 = uVar6 + ((ulong)pcVar8 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << ((ulong)pcVar8 & 0x3f);
        *(String *)(*(long *)(uVar6 + 0x30) + (long)pcVar8 * 0x10) = SVar13;
        puVar2 = (undefined8 *)(*(long *)(uVar6 + 0x38) + (long)pcVar8 * 0x10);
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        if (SCARRY8(*(long *)(uVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1006bc488);
          (*pcVar5)();
        }
        *(long *)(uVar6 + 0x10) = *(long *)(uVar6 + 0x10) + 1;
      }
      else {
        if ((uVar7 & 1) != 0) goto LAB_1006bc3f0;
        FUN_1006ba224();
        if (((ulong)SVar14.bridgeObject & 1) == 0) goto LAB_1006bc3f8;
LAB_1006bc330:
        puVar2 = (undefined8 *)(*(long *)(uVar6 + 0x38) + (long)pcVar8 * 0x10);
        uVar10 = puVar2[1];
        *puVar2 = uVar3;
        puVar2[1] = uVar4;
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
        _swift_bridgeObjectRelease(uVar10);
      }
      puVar12 = puVar12 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  return uVar6;
}



/* Address: 0x1006bc498 | FUN_1006bc498 */

void FUN_1006bc498(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1006b8ff8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_2)
  ;
  return;
}



/* Address: 0x1006bc4b4 | FUN_1006bc4b4 */

void FUN_1006bc4b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc470 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70528;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70528,&DAT_100ef7808);
  DAT_100fdc470 = pTVar1;
  return;
}



/* Address: 0x1006bc4f4 | FUN_1006bc4f4 */

void FUN_1006bc4f4(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      local_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      local_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      (*param_2)(&local_a0,&local_80);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = uStack_88;
      uVar3 = local_90;
      uVar5 = uStack_98;
      uVar11 = local_a0;
      lVar15 = *param_5;
      uVar9 = local_a0;
      uVar10 = uStack_98;
      FUN_10046483c();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006bc754);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        FUN_1006babdc(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        FUN_10046483c();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1006bc768);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_1006ba224();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1006bc758);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006bc750);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x1006bc768 | FUN_1006bc768 */

void FUN_1006bc768(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  _swift_task_switch(FUN_1006bc780,0,0);
  return;
}



/* Address: 0x1006bc780 | FUN_1006bc780 */

void FUN_1006bc780(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *puVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  thunk_FUN_100a73990();
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_1;
  *(byte *)(unaff_x22 + 0x28) = param_2 & 1;
  _swift_bridgeObjectRetain(uVar1);
  thunk_FUN_1005b3cd0(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  puVar4 = &DAT_100fdc468;
  FUN_1000f7830(&DAT_100fdc468,&DAT_100c70510);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006bc854;
  FUN_100a84a40(unaff_x22 + 0x10,uVar2,1,&DAT_100c70728,0,&DAT_100f2d740,puVar4,&PTR_PTR_100ff6dd8);
  return;
}



/* Address: 0x1006bc854 | FUN_1006bc854 */

void FUN_1006bc854(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x48);
  *(long *)(lVar3 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x50));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x40));
    pcVar2 = FUN_1006bc8d0;
  }
  else {
    pcVar2 = FUN_1006bc8dc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1006bc8d0 | FUN_1006bc8d0 */

void FUN_1006bc8d0(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001006bc8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1006bc8dc | FUN_1006bc8dc */

void FUN_1006bc8dc(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_errorRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006bc924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0);
  return;
}



/* Address: 0x1006bc928 | FUN_1006bc928 */

/* WARNING: Removing unreachable block (ram,0x0001006bce88) */

void FUN_1006bc928(undefined1 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  code *pcVar8;
  code *pcVar9;
  undefined1 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  code *pcVar16;
  long lVar17;
  ulong uVar18;
  undefined8 uVar19;
  bool bVar20;
  code *unaff_x21;
  void *pvVar21;
  code *pcVar22;
  String SVar24;
  String SVar25;
  code *local_a0;
  undefined8 uStack_98;
  code *local_90;
  char local_81;
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  code *local_58;
  void *pvVar10;
  String SVar23;
  
  local_90 = (code *)PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1006c281c();
  _swift_bridgeObjectRetain(param_2);
  FUN_100a316ac();
  puVar7 = param_1;
  local_80 = param_1;
  uStack_78 = param_2;
  local_70 = param_3;
  uStack_68 = param_4;
  FUN_100a315d4();
  if (((ulong)puVar7 & 1) == 0) {
    pcVar22 = (code *)0x0;
    pvVar21 = (void *)0x0;
    iVar5 = 2;
    do {
      pcVar16 = (code *)&DAT_100c706c8;
      pcVar8 = pcVar16;
      _swift_getKeyPath(&DAT_100c706c8);
      pcVar9 = pcVar8;
      FUN_100a32958();
      _swift_release(pcVar8);
      _swift_bridgeObjectRelease(pcVar9);
      uVar4 = uStack_68;
      uVar3 = local_70;
      uVar19 = uStack_78;
      puVar7 = local_80;
      if (iVar5 == 0) {
        pvVar10 = pvVar21;
        _swift_bridgeObjectRetain();
        iVar5 = (int)pvVar10;
        FUN_100a31c28();
        if (unaff_x21 == (code *)0x0) {
          pcVar8 = pcVar22;
          FUN_1006bd024(pcVar22,pvVar21,0);
          if (iVar5 == 0x3d) {
            bVar20 = false;
            iVar5 = 1;
            goto LAB_1006bc9dc;
          }
          FUN_1006bc4b4();
          unaff_x21 = (code *)&DAT_100ef7808;
          _swift_allocError(&DAT_100ef7808,pcVar8,0,0);
          *pcVar8 = (code)0x0;
          *(undefined8 *)(pcVar8 + 8) = 0;
          *(undefined8 *)(pcVar8 + 0x10) = 0;
          _swift_willThrow();
        }
        else {
          FUN_1006bd024(pcVar22,pvVar21,0);
        }
        iVar5 = 0;
        goto LAB_1006bceac;
      }
      if (iVar5 == 1) {
        _swift_bridgeObjectRetain(pvVar21);
        uVar18 = 0;
        FUN_100a31dbc(0x22,0xe100000000000000);
        uVar6 = (uint)uVar18;
        if (unaff_x21 != (code *)0x0) {
          FUN_1006bd024(pcVar22,pvVar21,1);
          iVar5 = 1;
          goto LAB_1006bceac;
        }
        if ((uVar18 & 1) == 0) {
          _swift_getKeyPath();
          uStack_98 = 0;
          pcVar8 = pcVar16;
          FUN_100a321a0();
          _swift_release(pcVar16);
          local_a0 = pcVar8;
          FUN_100a31278(pcVar8,uStack_98,param_3,param_4);
          _swift_bridgeObjectRelease(pcVar8);
        }
        else {
          FUN_1000d1c18();
          pcVar8 = FUN_1006b9884;
          uStack_98 = 0;
          FUN_100a31fc0(FUN_1006b9884,0,uVar6 & 1);
          local_a0 = pcVar8;
          FUN_100a31278();
          _swift_bridgeObjectRelease(pcVar8);
          FUN_100a3155c();
        }
        SVar24.bridgeObject = pvVar21;
        SVar24.str = (char *)pcVar22;
        SVar23 = Swift::String::lowercased(SVar24);
        FUN_1006bd024(pcVar22,pvVar21,1);
        pcVar8 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        local_58 = local_90;
        SVar24 = SVar23;
        FUN_10046483c();
        pcVar15 = SVar24.str;
        uVar18 = (ulong)~(uint)SVar24.bridgeObject & 1;
        lVar17 = *(long *)(local_90 + 0x10) + uVar18;
        if (SCARRY8(*(long *)(local_90 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x1006bcf2c);
          (*pcVar22)();
        }
        if (*(long *)(local_90 + 0x18) < lVar17) {
          FUN_1006babdc(lVar17,pcVar8);
          SVar25 = SVar23;
          FUN_10046483c();
          pcVar15 = SVar25.str;
          if (((uint)SVar24.bridgeObject & 1) != ((uint)SVar25.bridgeObject & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1006bcf40);
            (*pcVar22)();
          }
        }
        else if (((ulong)pcVar8 & 1) == 0) {
          FUN_1006ba224();
        }
        pcVar8 = local_58;
        local_90 = local_58;
        if (((ulong)SVar24.bridgeObject & 1) == 0) {
          *(ulong *)(local_58 + ((ulong)pcVar15 >> 6) * 8 + 0x40) =
               *(ulong *)(local_58 + ((ulong)pcVar15 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar15 & 0x3f);
          *(String *)(*(long *)(local_58 + 0x30) + (long)pcVar15 * 0x10) = SVar23;
          puVar1 = (undefined8 *)(*(long *)(local_58 + 0x38) + (long)pcVar15 * 0x10);
          *puVar1 = local_a0;
          puVar1[1] = uStack_98;
          FUN_1006bd024(pcVar22,pvVar21,1);
          lVar17 = *(long *)(pcVar8 + 0x10);
          if (SCARRY8(lVar17,1)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x1006bcf30);
            (*pcVar22)();
          }
          *(long *)(pcVar8 + 0x10) = lVar17 + 1;
        }
        else {
          puVar1 = (undefined8 *)(*(long *)(local_58 + 0x38) + (long)pcVar15 * 0x10);
          uVar19 = puVar1[1];
          *puVar1 = local_a0;
          puVar1[1] = uStack_98;
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          _swift_bridgeObjectRelease(uVar19);
          FUN_1006bd024(pcVar22,pvVar21,1);
        }
        pvVar21 = (void *)0x0;
        iVar5 = 2;
        bVar20 = true;
        pcVar22 = (code *)0x0;
      }
      else {
        puVar11 = local_80;
        FUN_100a315d4(local_80,uStack_78,local_70,uStack_68);
        if (((ulong)puVar11 & 1) == 0) {
          FUN_100a31a7c(puVar7,uVar19,uVar3,uVar4);
          uVar6 = (uint)puVar7;
          if (uVar6 != 0x23) {
            FUN_1000d1c18();
            pcVar22 = FUN_1006b9854;
            pvVar21 = (void *)0x0;
            FUN_100a31fc0(FUN_1006b9854,0,uVar6 & 1);
            if (unaff_x21 == (code *)0x0) {
              pcVar8 = pcVar22;
              FUN_100a31278();
              _swift_bridgeObjectRelease(pcVar22);
              bVar20 = false;
              iVar5 = 0;
              pcVar22 = pcVar8;
              goto LAB_1006bc9dc;
            }
            goto LAB_1006bceb0;
          }
          puVar12 = &DAT_100c706f8;
          _swift_getKeyPath(&DAT_100c706f8);
          puVar13 = puVar12;
          FUN_1000d1c18();
          puVar14 = puVar12;
          FUN_100a321a0(puVar12,(uint)puVar13 & 1);
          if (unaff_x21 == (code *)0x0) {
            _swift_release(puVar12);
            _swift_bridgeObjectRelease(puVar14);
            FUN_100a3155c();
          }
          else {
            _swift_release(puVar12);
            local_58 = unaff_x21;
            _swift_errorRetain(unaff_x21);
            puVar12 = &DAT_100fdbdb8;
            FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
            pcVar15 = &local_81;
            _swift_dynamicCast(pcVar15,&local_58,puVar12,&DAT_100f29a58,0);
            if (((int)pcVar15 == 0) || (local_81 != '\0')) {
              pcVar22 = local_58;
              _swift_errorRelease();
              goto LAB_1006bceb0;
            }
            _swift_errorRelease(unaff_x21);
            FUN_100a32de4();
            _swift_errorRelease(local_58);
            unaff_x21 = (code *)0x0;
          }
        }
        iVar5 = 2;
        bVar20 = true;
      }
LAB_1006bc9dc:
      param_1 = local_80;
      puVar7 = local_80;
      param_3 = local_70;
      param_4 = uStack_68;
      FUN_100a315d4(local_80,uStack_78);
    } while (((ulong)puVar7 & 1) == 0);
    bVar2 = false;
    if (pvVar21 == (void *)0x0 && pcVar22 == (code *)0x0) {
      bVar2 = bVar20;
    }
    if (!bVar2) {
      FUN_1006bc4b4();
      unaff_x21 = (code *)&DAT_100ef7808;
      _swift_allocError(&DAT_100ef7808,puVar7,0,0);
      *puVar7 = 0;
      *(undefined8 *)(puVar7 + 8) = 0;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      _swift_willThrow();
LAB_1006bceac:
      FUN_1006bd024(pcVar22,pvVar21,iVar5);
LAB_1006bceb0:
      FUN_1006bc4b4();
      _swift_allocError(&DAT_100ef7808,pcVar22,0,0);
      *pcVar22 = (code)0x0;
      *(undefined8 *)(pcVar22 + 8) = 0;
      *(undefined8 *)(pcVar22 + 0x10) = 0;
      _swift_willThrow();
      _swift_errorRelease(unaff_x21);
      _swift_bridgeObjectRelease(local_90);
      _swift_bridgeObjectRelease(local_80);
      return;
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x1006bcf40 | FUN_1006bcf40 */

undefined1  [16] FUN_1006bcf40(void)

{
  return ZEXT816(0x100ef7788);
}



/* Address: 0x1006bcf50 | FUN_1006bcf50 */

undefined1  [16] FUN_1006bcf50(void)

{
  return ZEXT816(0x100ef7808);
}



/* Address: 0x1006bcf60 | FUN_1006bcf60 */

undefined1  [16] FUN_1006bcf60(void)

{
  return ZEXT816(0x100ef78a0);
}



/* Address: 0x1006bcf70 | thunk_FUN_1006bcf74 */

void thunk_FUN_1006bcf74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70680;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70680,&DAT_100ef78a0);
  DAT_100fdc478 = pTVar1;
  return;
}



/* Address: 0x1006bcf74 | FUN_1006bcf74 */

void FUN_1006bcf74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc478 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70680;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70680,&DAT_100ef78a0);
  DAT_100fdc478 = pTVar1;
  return;
}



/* Address: 0x1006bcfb4 | FUN_1006bcfb4 */

undefined8 FUN_1006bcfb4(undefined8 param_1,undefined8 param_2)

{
  FUN_1002aa12c(param_2,param_1);
  return param_2;
}



/* Address: 0x1006bcff0 | FUN_1006bcff0 */

void FUN_1006bcff0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    return;
  }
  return;
}



/* Address: 0x1006bd020 | thunk_FUN_1006cf758 */

void thunk_FUN_1006cf758(void)

{
  FUN_1006cf758();
  return;
}



/* Address: 0x1006bd024 | FUN_1006bd024 */

void FUN_1006bd024(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  return;
}



/* Address: 0x1006bd03c | FUN_1006bd03c */

void FUN_1006bd03c(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*param_2;
  FUN_100a333e8();
  *param_1 = bVar1 & 1;
  return;
}



/* Address: 0x1006bd068 | FUN_1006bd068 */

void FUN_1006bd068(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fdc4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdc4a0;
  FUN_1000f8b08(&DAT_100fdc4a0,&DAT_100c71e00);
  local_20 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puStack_18 = PTR___protocol_witness_table_for_Swift_String___Swift_Decodable_in_Swift_100eac240;
  puVar2 = PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78;
  _swift_getWitnessTable
            (PTR__Swift__Swift__Dictionary<undefined,undefined>_>Swift__Decodable_100eabe78,puVar1,
             &local_20);
  DAT_100fdc4a8 = puVar2;
  return;
}



/* Address: 0x1006bd0d0 | thunk_FUN_1006bd0fc */

void thunk_FUN_1006bd0fc(void)

{
  FUN_1006bd0fc();
  return;
}


