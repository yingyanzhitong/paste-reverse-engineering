/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009e2668 | FUN_1009e2668 */

void FUN_1009e2668(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  lVar1 = 0;
  FUN_1009eeb08();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x18) = uVar2;
  FUN_1009e1f14();
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009e270c;
  FUN_1009e289c(param_1);
  return;
}



/* Address: 0x1009e270c | FUN_1009e270c */

void FUN_1009e270c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001009e2774. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  *(undefined8 *)(lVar2 + 0x30) = param_2;
  *(undefined8 *)(lVar2 + 0x38) = param_1;
  _swift_task_switch(FUN_1009e27a8,0,0);
  return;
}



/* Address: 0x1009e27a8 | FUN_1009e27a8 */

void FUN_1009e27a8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  ulong uVar7;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar7 = *(ulong *)(unaff_x22 + 0x28);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x18);
  puVar4 = &DAT_100ff3bf8;
  FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
  iVar3 = *(int *)(puVar4 + 0x30);
  *puVar2 = uVar1;
  *(int *)(puVar2 + 1) = (int)uVar6;
  *(int *)((long)puVar2 + 0xc) = (int)((ulong)uVar6 >> 0x20);
  *(int *)(puVar2 + 2) = (int)uVar7;
  *(short *)((long)puVar2 + 0x14) = (short)(uVar7 >> 0x20);
  *(char *)((long)puVar2 + 0x16) = (char)(uVar7 >> 0x30);
  lVar5 = 0;
  FUN_1009e908c();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))((long)puVar2 + (long)iVar3,1,1,lVar5);
  uVar6 = 0;
  FUN_1009e8f94(0);
  _swift_storeEnumTagMultiPayload(puVar2,uVar6,0);
  _swift_retain(uVar1);
  FUN_1009e1f4c(puVar2);
  _swift_task_dealloc(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009e2898. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x30),
             uVar7 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009e289c | FUN_1009e289c */

void FUN_1009e289c(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  puVar1 = &DAT_100ff3cb8;
  FUN_1000f7830(&DAT_100ff3cb8,&DAT_100c8d320);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_1009e2928,0,0);
  return;
}



/* Address: 0x1009e2928 | FUN_1009e2928 */

void FUN_1009e2928(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x28)) {
    FUN_1009e9628(*(undefined8 *)(unaff_x22 + 0x40));
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1009e2994;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e2994);
  (*pcVar1)();
}



/* Address: 0x1009e2994 | FUN_1009e2994 */

void FUN_1009e2994(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(undefined8 *)(lVar2 + 0x58) = param_2;
  *(undefined8 *)(lVar2 + 0x60) = param_3;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e2a00;
  }
  else {
    pcVar1 = FUN_1009e2bc8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e2a00 | FUN_1009e2a00 */

void FUN_1009e2a00(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  if (lVar5 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_1006116e8();
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    _swift_retain(uVar4);
    FUN_10005241c(uVar3,FUN_1009edba8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001009e2b54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4,uVar6,(ulong)(uint7)uVar1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(ulong *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x10) = lVar5;
  *(int *)(unaff_x22 + 0x18) = *(int *)(unaff_x22 + 0x58);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x5c);
  *(int *)(unaff_x22 + 0x20) = (int)uVar3;
  *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar3 >> 0x20);
  *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar3 >> 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = (ulong)(uint)(*(int *)(unaff_x22 + 0x5c) - *(int *)(unaff_x22 + 0x58));
  if (uVar6 < uVar4) {
    FUN_1009e4888();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    FUN_10005241c(uVar3,FUN_1009edba8);
    _swift_release(lVar5);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001009e2ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_1000c495c(uVar3,*(undefined8 *)(unaff_x22 + 0x38),FUN_1009edba8);
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009e2c1c;
  FUN_1009e2ee0(uVar6 - uVar4,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1009e2bc8 | FUN_1009e2bc8 */

void FUN_1009e2bc8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x40),FUN_1009edba8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e2c18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e2c1c | FUN_1009e2c1c */

void FUN_1009e2c1c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e2c80;
  }
  else {
    pcVar1 = FUN_1009e2d1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e2c80 | FUN_1009e2c80 */

void FUN_1009e2c80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x38),&DAT_100ff3cb8,&DAT_100c8d320);
  FUN_10005241c(uVar2,FUN_1009edba8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(uint7 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e2d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3,(ulong)uVar4);
  return;
}



/* Address: 0x1009e2d1c | FUN_1009e2d1c */

void FUN_1009e2d1c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x38),&DAT_100ff3cb8,&DAT_100c8d320);
  FUN_10005241c(uVar1,FUN_1009edba8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e2d8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e2d90 | FUN_1009e2d90 */

undefined1  [16] FUN_1009e2d90(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined *puVar10;
  String *unaff_x20;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  void *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2a,param_2);
  SVar11.bridgeObject = &DAT_e500000000000000;
  SVar11.str = (char *)0x203a697275;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar11,SVar16);
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(*unaff_x20,SVar17);
  SVar12.bridgeObject = (void *)0xea0000000000203a;
  SVar12.str = (char *)0x646f6874656d202c;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar12,SVar18);
  pcVar6 = unaff_x20[0xb].str;
  pvVar1 = unaff_x20[0xb].bridgeObject;
  pvVar9 = pvVar1;
  FUN_100867ea8();
  SVar13.bridgeObject = pvVar9;
  SVar13.str = pcVar6;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar13,SVar19);
  _swift_bridgeObjectRelease(pvVar9);
  SVar14.bridgeObject = (void *)0xeb00000000203a73;
  SVar14.str = (char *)0x726564616568202c;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar14,SVar20);
  puVar5 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  pcVar6 = "";
  puVar10 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  local_48 = pvVar1;
  Swift::__print_unlocked
            (&local_48,&local_40,&DAT_100f072e0,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar15.bridgeObject = &DAT_e800000000000000;
  SVar15.str = (char *)0x203a79646f62202c;
  SVar21.bridgeObject = puVar10;
  SVar21.str = pcVar6;
  Swift::String::append(SVar15,SVar21);
  lVar7 = 0;
  FUN_1009e1f14();
  iVar2 = *(int *)(lVar7 + 0x18);
  uVar8 = 0;
  FUN_1009eeb08(0);
  Swift::__print_unlocked((long)&unaff_x20->str + (long)iVar2,&local_40,uVar8,puVar4,puVar5);
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = local_40;
  return auVar3;
}



/* Address: 0x1009e2edc | thunk_FUN_1009e2d90 */

undefined1  [16]
thunk_FUN_1009e2d90(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  void *pvVar1;
  int iVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  long lVar7;
  undefined8 uVar8;
  void *pvVar9;
  undefined *puVar10;
  String *unaff_x20;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  void *pvStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2a,param_2);
  SVar11.bridgeObject = &DAT_e500000000000000;
  SVar11.str = (char *)0x203a697275;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar11,SVar16);
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(*unaff_x20,SVar17);
  SVar12.bridgeObject = (void *)0xea0000000000203a;
  SVar12.str = (char *)0x646f6874656d202c;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar12,SVar18);
  pcVar6 = unaff_x20[0xb].str;
  pvVar1 = unaff_x20[0xb].bridgeObject;
  pvVar9 = pvVar1;
  FUN_100867ea8();
  SVar13.bridgeObject = pvVar9;
  SVar13.str = pcVar6;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar13,SVar19);
  _swift_bridgeObjectRelease(pvVar9);
  SVar14.bridgeObject = (void *)0xeb00000000203a73;
  SVar14.str = (char *)0x726564616568202c;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar14,SVar20);
  puVar5 = 
  PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
  ;
  puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  pcVar6 = "";
  puVar10 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  pvStack_48 = pvVar1;
  Swift::__print_unlocked
            (&pvStack_48,&uStack_40,&DAT_100f072e0,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar15.bridgeObject = &DAT_e800000000000000;
  SVar15.str = (char *)0x203a79646f62202c;
  SVar21.bridgeObject = puVar10;
  SVar21.str = pcVar6;
  Swift::String::append(SVar15,SVar21);
  lVar7 = 0;
  FUN_1009e1f14();
  iVar2 = *(int *)(lVar7 + 0x18);
  uVar8 = 0;
  FUN_1009eeb08(0);
  Swift::__print_unlocked((long)&unaff_x20->str + (long)iVar2,&uStack_40,uVar8,puVar4,puVar5);
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = uStack_40;
  return auVar3;
}



/* Address: 0x1009e2ee0 | FUN_1009e2ee0 */

void FUN_1009e2ee0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  puVar1 = &DAT_100ff3cb8;
  FUN_1000f7830(&DAT_100ff3cb8,&DAT_100c8d320);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  _swift_task_switch(FUN_1009e2f70,0,0);
  return;
}



/* Address: 0x1009e2f70 | FUN_1009e2f70 */

void FUN_1009e2f70(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x40)) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_1000f8cac(*(undefined8 *)(unaff_x22 + 0x50),uVar1,&DAT_100ff3cb8,&DAT_100c8d320);
    FUN_1000523d8(uVar1,uVar2,FUN_1009edba8);
    plVar4 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1009e3004;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009e3004);
  (*pcVar3)();
}



/* Address: 0x1009e3004 | FUN_1009e3004 */

void FUN_1009e3004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_1009e308c;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_1009e32ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e308c | FUN_1009e308c */

void FUN_1009e308c(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  size_t sVar19;
  long unaff_x22;
  long lVar20;
  
  lVar15 = *(long *)(unaff_x22 + 0x78);
  if (lVar15 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10005241c(uVar6,FUN_1009edba8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0x80);
    uVar5 = *(ulong *)(unaff_x22 + 0x88);
    uVar14 = (ulong)(uint)((int)(uVar3 >> 0x20) - (int)uVar3);
    lVar13 = *(long *)(unaff_x22 + 0x70) + uVar14;
    *(long *)(unaff_x22 + 0x90) = lVar13;
    if (SCARRY8(*(long *)(unaff_x22 + 0x70),uVar14)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009e32e4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar18 = *(long *)(unaff_x22 + 0x40);
    if (lVar13 <= lVar18) {
      uVar7 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc);
      _swift_beginAccess(lVar15 + 0x18,unaff_x22 + 0x10,0,0);
      sVar19 = (uVar3 >> 0x20) - (uVar3 & 0xffffffff);
      uVar17 = (uint)sVar19;
      if (CARRY4(uVar7,uVar17)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009e32e8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar13 = *(long *)(lVar15 + 0x18);
      uVar14 = **(ulong **)(unaff_x22 + 0x48);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = (uint)uVar14;
      if ((uVar14 & 1) == 0) {
        uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0x10);
        iVar1 = 0;
        if (uVar8 <= uVar7 + uVar17) {
          iVar1 = (uVar7 + uVar17) - uVar8;
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar12 & 1);
      }
      uVar10 = *(ushort *)(unaff_x22 + 0x8c);
      plVar16 = *(long **)(unaff_x22 + 0x48);
      FUN_100612380(sVar19,uVar7);
      lVar20 = *plVar16;
      lVar18 = plVar16[2];
      uVar11 = *(undefined2 *)((long)plVar16 + 0x14);
      uVar9 = *(undefined1 *)((long)plVar16 + 0x16);
      _swift_beginAccess(lVar20 + 0x18,unaff_x22 + 0x28,0,0);
      uVar8 = (uint)CONCAT21(uVar11,uVar9);
      uVar12 = (int)lVar18 - uVar8;
      if (uVar7 <= uVar12) {
        uVar12 = uVar7;
      }
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar12;
      }
      _memmove((void *)(*(long *)(lVar20 + 0x18) + (ulong)uVar8 + (ulong)uVar2),
               (void *)(lVar13 + (ulong)uVar10 * 0x100 + (uVar5 >> 0x30 & 0xff) +
                       (uVar3 & 0xffffffff)),sVar19);
      _swift_release(lVar15);
      if (!CARRY4(*(uint *)((long)plVar16 + 0xc),uVar17)) {
        *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc) = *(uint *)((long)plVar16 + 0xc) + uVar17;
        plVar16 = (long *)0xa0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa0) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_1009e334c;
        FUN_1009e9918();
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009e32ec);
      (*UNRECOVERED_JUMPTABLE)();
    }
    FUN_1009e4888();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = lVar18;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    _swift_release(lVar15);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_10005241c(uVar6,FUN_1009edba8);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e3194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009e32ec | FUN_1009e32ec */

void FUN_1009e32ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_10005241c(uVar2,FUN_1009edba8);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e3348. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e334c | FUN_1009e334c */

void FUN_1009e334c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_1009e308c;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_1009e32ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e33d8 | FUN_1009e33d8 */

long * FUN_1009e33d8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    *param_1 = *param_2;
    lVar16 = param_2[1];
    param_1[2] = param_2[2];
    param_1[1] = lVar16;
    lVar9 = param_2[2];
    param_1[3] = param_2[3];
    lVar14 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = lVar14;
    lVar14 = param_2[6];
    lVar17 = param_2[7];
    param_1[6] = lVar14;
    param_1[7] = lVar17;
    lVar17 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = lVar17;
    lVar17 = param_2[10];
    lVar18 = param_2[0xb];
    param_1[10] = lVar17;
    param_1[0xb] = lVar18;
    lVar18 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = lVar18;
    lVar18 = param_2[0xe];
    lVar19 = param_2[0xf];
    param_1[0xe] = lVar18;
    param_1[0xf] = lVar19;
    lVar19 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = lVar19;
    lVar19 = param_2[0x12];
    lVar15 = param_2[0x13];
    param_1[0x12] = lVar19;
    param_1[0x13] = lVar15;
    lVar15 = param_2[0x17];
    lVar20 = param_2[0x14];
    lVar23 = param_2[0x17];
    lVar22 = param_2[0x16];
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = lVar20;
    param_1[0x17] = lVar23;
    param_1[0x16] = lVar22;
    uVar5 = 0;
    FUN_1009e8f94(0);
    _swift_bridgeObjectRetain(lVar16);
    _swift_bridgeObjectRetain(lVar9);
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar17);
    _swift_bridgeObjectRetain(lVar18);
    _swift_bridgeObjectRetain(lVar19);
    _swift_retain(lVar22);
    _swift_retain(lVar15);
    puVar6 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,uVar5);
    if ((int)puVar6 == 2) {
      uVar11 = puVar2[1];
      uVar21 = *puVar2;
      puVar1[1] = puVar2[1];
      *puVar1 = uVar21;
      _swift_retain(uVar11);
      puVar7 = &DAT_100ff3bf0;
      FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
      lVar9 = 0;
      FUN_1009e908c();
      lVar14 = *(long *)(lVar9 + -8);
      puVar8 = puVar2;
      (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar8 == 0) {
        puVar7 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar8 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar7);
        bVar4 = (int)puVar8 != 1;
        if (bVar4) {
          puVar10 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar6,puVar2,puVar10);
        }
        else {
          *puVar6 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar6,puVar7,!bVar4);
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar9 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
        pcVar13 = *(code **)(lVar14 + 0x38);
        _swift_retain();
        (*pcVar13)(puVar6,0,1,lVar9);
      }
      else {
        puVar7 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar6,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      uVar11 = 2;
    }
    else if ((int)puVar6 == 1) {
      puVar7 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar6 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,puVar7);
      bVar4 = (int)puVar6 != 1;
      if (bVar4) {
        puVar10 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar1,puVar2,puVar10);
      }
      else {
        *puVar1 = *puVar2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(puVar1,puVar7,!bVar4);
      lVar9 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
      _swift_retain();
      uVar11 = 1;
    }
    else {
      *puVar1 = *puVar2;
      puVar1[1] = puVar2[1];
      *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
      *(undefined4 *)((long)puVar1 + 0x13) = *(undefined4 *)((long)puVar2 + 0x13);
      _swift_retain();
      puVar7 = &DAT_100ff3bf8;
      FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
      puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30));
      puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar7 + 0x30));
      lVar9 = 0;
      FUN_1009e908c();
      lVar14 = *(long *)(lVar9 + -8);
      puVar8 = puVar2;
      (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar8 == 0) {
        puVar7 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar8 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar7);
        bVar4 = (int)puVar8 != 1;
        if (bVar4) {
          puVar10 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar6,puVar2,puVar10);
        }
        else {
          *puVar6 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar6,puVar7,!bVar4);
        *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar9 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
        pcVar13 = *(code **)(lVar14 + 0x38);
        _swift_retain();
        (*pcVar13)(puVar6,0,1,lVar9);
      }
      else {
        puVar7 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar6,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      uVar11 = 0;
    }
    _swift_storeEnumTagMultiPayload(puVar1,uVar5,uVar11);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar12 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar9 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009e385c | FUN_1009e385c */

void FUN_1009e385c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x70));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x90));
  _swift_release(*(undefined8 *)(param_1 + 0xb0));
  _swift_release(*(undefined8 *)(param_1 + 0xb8));
  puVar7 = (undefined8 *)(param_1 + *(int *)(param_2 + 0x18));
  uVar2 = 0;
  FUN_1009e8f94(0);
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
    _swift_release(puVar7[1]);
    puVar4 = &DAT_100ff3bf0;
    puVar6 = &DAT_100c8d490;
  }
  else {
    if (iVar1 == 1) {
      puVar4 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar3 = puVar7;
      _swift_getEnumCaseMultiPayload(puVar7,puVar4);
      if ((int)puVar3 == 1) {
        _swift_release(*puVar7);
      }
      else {
        puVar4 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar4 + -8) + 8))(puVar7,puVar4);
      }
      lVar5 = 0;
      FUN_1009e908c();
      goto LAB_1009e3a1c;
    }
    if (iVar1 != 0) {
      return;
    }
    _swift_release(*puVar7);
    puVar4 = &DAT_100ff3bf8;
    puVar6 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar4,puVar6);
  puVar7 = (undefined8 *)((long)puVar7 + (long)*(int *)(puVar4 + 0x30));
  lVar5 = 0;
  FUN_1009e908c();
  puVar3 = puVar7;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(puVar7,1,lVar5);
  if ((int)puVar3 != 0) {
    return;
  }
  puVar4 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar3 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,puVar4);
  if ((int)puVar3 == 1) {
    _swift_release(*puVar7);
  }
  else {
    puVar4 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar4 + -8) + 8))(puVar7,puVar4);
  }
LAB_1009e3a1c:
  _swift_release(*(undefined8 *)((long)puVar7 + (long)*(int *)(lVar5 + 0x14)));
  return;
}



/* Address: 0x1009e3a30 | FUN_1009e3a30 */

undefined8 * FUN_1009e3a30(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined *puVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  *param_1 = *param_2;
  uVar15 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar15;
  uVar7 = param_2[2];
  param_1[3] = param_2[3];
  uVar16 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar16;
  uVar16 = param_2[6];
  uVar17 = param_2[7];
  param_1[6] = uVar16;
  param_1[7] = uVar17;
  uVar17 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  uVar17 = param_2[10];
  uVar18 = param_2[0xb];
  param_1[10] = uVar17;
  param_1[0xb] = uVar18;
  uVar18 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar18;
  uVar18 = param_2[0xe];
  uVar19 = param_2[0xf];
  param_1[0xe] = uVar18;
  param_1[0xf] = uVar19;
  uVar19 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar19;
  uVar19 = param_2[0x12];
  uVar4 = param_2[0x13];
  param_1[0x12] = uVar19;
  param_1[0x13] = uVar4;
  uVar14 = param_2[0x17];
  uVar4 = param_2[0x14];
  uVar21 = param_2[0x17];
  uVar20 = param_2[0x16];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar4;
  param_1[0x17] = uVar21;
  param_1[0x16] = uVar20;
  uVar4 = 0;
  FUN_1009e8f94(0);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar7);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(uVar19);
  _swift_retain(uVar20);
  _swift_retain(uVar14);
  puVar5 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar4);
  if ((int)puVar5 == 2) {
    uVar7 = puVar2[1];
    uVar16 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar16;
    _swift_retain(uVar7);
    puVar8 = &DAT_100ff3bf0;
    puVar11 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar5 == 1) {
      puVar8 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar6 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,puVar8);
      bVar3 = (int)puVar6 != 1;
      if (bVar3) {
        puVar11 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar11 + -8) + 0x10))(puVar1,puVar2,puVar11);
      }
      else {
        *puVar1 = *puVar2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(puVar1,puVar8,!bVar3);
      lVar10 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x14));
      _swift_retain();
      goto LAB_1009e3d38;
    }
    *puVar1 = *puVar2;
    puVar1[1] = puVar2[1];
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 2);
    *(undefined4 *)((long)puVar1 + 0x13) = *(undefined4 *)((long)puVar2 + 0x13);
    _swift_retain();
    puVar8 = &DAT_100ff3bf8;
    puVar11 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar8,puVar11);
  puVar6 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30));
  puVar2 = (undefined8 *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30));
  lVar10 = 0;
  FUN_1009e908c();
  lVar13 = *(long *)(lVar10 + -8);
  puVar9 = puVar2;
  (**(code **)(lVar13 + 0x30))(puVar2,1,lVar10);
  if ((int)puVar9 == 0) {
    puVar8 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar9 = puVar2;
    _swift_getEnumCaseMultiPayload(puVar2,puVar8);
    bVar3 = (int)puVar9 != 1;
    if (bVar3) {
      puVar11 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar11 + -8) + 0x10))(puVar6,puVar2,puVar11);
    }
    else {
      *puVar6 = *puVar2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar6,puVar8,!bVar3);
    *(undefined8 *)((long)puVar6 + (long)*(int *)(lVar10 + 0x14)) =
         *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x14));
    pcVar12 = *(code **)(lVar13 + 0x38);
    _swift_retain();
    (*pcVar12)(puVar6,0,1,lVar10);
  }
  else {
    puVar8 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar6,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
LAB_1009e3d38:
  _swift_storeEnumTagMultiPayload(puVar1,uVar4,puVar5);
  return param_1;
}



/* Address: 0x1009e3d6c | FUN_1009e3d6c */

undefined8 * FUN_1009e3d6c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  undefined8 uVar14;
  
  *param_1 = *param_2;
  uVar11 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  uVar11 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  param_1[9] = param_2[9];
  uVar11 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  uVar11 = param_1[0xe];
  param_1[0xe] = param_2[0xe];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[0xf] = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  uVar11 = param_1[0x12];
  param_1[0x12] = param_2[0x12];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  uVar11 = param_1[0x16];
  param_1[0x16] = param_2[0x16];
  _swift_retain();
  _swift_release(uVar11);
  uVar11 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_retain();
  _swift_release(uVar11);
  if (param_1 == param_2) {
    return param_1;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  FUN_10005241c(puVar1,FUN_1009e8f94);
  uVar11 = 0;
  FUN_1009e8f94(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar11);
  if ((int)puVar4 == 2) {
    uVar6 = param_2[1];
    uVar14 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar14;
    _swift_retain(uVar6);
    puVar7 = &DAT_100ff3bf0;
    puVar10 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar4 == 1) {
      puVar7 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar7);
      bVar3 = (int)puVar5 != 1;
      if (bVar3) {
        puVar10 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar1,param_2,puVar10);
      }
      else {
        *puVar1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(puVar1,puVar7,!bVar3);
      lVar9 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
      _swift_retain();
      goto LAB_1009e4124;
    }
    *puVar1 = *param_2;
    *(undefined4 *)(puVar1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)puVar1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    uVar2 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)puVar1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    *(undefined4 *)(puVar1 + 2) = uVar2;
    _swift_retain();
    puVar7 = &DAT_100ff3bf8;
    puVar10 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar7,puVar10);
  puVar5 = (undefined8 *)((long)puVar1 + (long)*(int *)(puVar7 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar7 + 0x30));
  lVar9 = 0;
  FUN_1009e908c();
  lVar13 = *(long *)(lVar9 + -8);
  puVar8 = param_2;
  (**(code **)(lVar13 + 0x30))(param_2,1,lVar9);
  if ((int)puVar8 == 0) {
    puVar7 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar8 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar7);
    bVar3 = (int)puVar8 != 1;
    if (bVar3) {
      puVar10 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar5,param_2,puVar10);
    }
    else {
      *puVar5 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar5,puVar7,!bVar3);
    *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar9 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
    pcVar12 = *(code **)(lVar13 + 0x38);
    _swift_retain();
    (*pcVar12)(puVar5,0,1,lVar9);
  }
  else {
    puVar7 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar5,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
LAB_1009e4124:
  _swift_storeEnumTagMultiPayload(puVar1,uVar11,puVar4);
  return param_1;
}



/* Address: 0x1009e4154 | FUN_1009e4154 */

undefined8 * FUN_1009e4154(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *pvVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  void *pvVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar5 = param_2[0x10];
  uVar14 = param_2[0x13];
  uVar13 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar14;
  param_1[0x12] = uVar13;
  uVar5 = param_2[8];
  uVar14 = param_2[0xb];
  uVar13 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar14;
  param_1[10] = uVar13;
  uVar14 = param_2[0xc];
  uVar13 = param_2[0xf];
  uVar5 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar14;
  param_1[0xf] = uVar13;
  param_1[0xe] = uVar5;
  uVar5 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  uVar14 = param_2[4];
  uVar13 = param_2[7];
  uVar5 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar14;
  param_1[7] = uVar13;
  param_1[6] = uVar5;
  uVar5 = param_2[0x14];
  uVar14 = param_2[0x17];
  uVar13 = param_2[0x16];
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar5;
  param_1[0x17] = uVar14;
  param_1[0x16] = uVar13;
  uVar5 = 0;
  FUN_1009e8f94(0);
  puVar6 = puVar2;
  _swift_getEnumCaseMultiPayload(puVar2,uVar5);
  if ((int)puVar6 == 2) {
    uVar13 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    puVar8 = &DAT_100ff3bf0;
    puVar11 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar6 == 1) {
      puVar8 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar7 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,puVar8);
      if ((int)puVar7 == 0) {
        puVar11 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar11 + -8) + 0x20))(puVar1,puVar2,puVar11);
        _swift_storeEnumTagMultiPayload(puVar1,puVar8,0);
      }
      else {
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      lVar10 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x14)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar10 + 0x14));
      goto LAB_1009e43b0;
    }
    uVar13 = *puVar2;
    puVar1[1] = puVar2[1];
    *puVar1 = uVar13;
    *(undefined8 *)((long)puVar1 + 0xf) = *(undefined8 *)((long)puVar2 + 0xf);
    puVar8 = &DAT_100ff3bf8;
    puVar11 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar8,puVar11);
  pvVar3 = (void *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30));
  pvVar4 = (void *)((long)puVar2 + (long)*(int *)(puVar8 + 0x30));
  lVar10 = 0;
  FUN_1009e908c();
  lVar12 = *(long *)(lVar10 + -8);
  pvVar9 = pvVar4;
  (**(code **)(lVar12 + 0x30))(pvVar4,1,lVar10);
  if ((int)pvVar9 == 0) {
    puVar8 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar9 = pvVar4;
    _swift_getEnumCaseMultiPayload(pvVar4,puVar8);
    if ((int)pvVar9 == 0) {
      puVar11 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar11 + -8) + 0x20))(pvVar3,pvVar4,puVar11);
      _swift_storeEnumTagMultiPayload(pvVar3,puVar8,0);
    }
    else {
      _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x14)) =
         *(undefined8 *)((long)pvVar4 + (long)*(int *)(lVar10 + 0x14));
    (**(code **)(lVar12 + 0x38))(pvVar3,0,1,lVar10);
  }
  else {
    puVar8 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar3,pvVar4,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
LAB_1009e43b0:
  _swift_storeEnumTagMultiPayload(puVar1,uVar5,puVar6);
  return param_1;
}



/* Address: 0x1009e43e0 | FUN_1009e43e0 */

undefined8 * FUN_1009e43e0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  void *pvVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  
  uVar5 = param_2[1];
  uVar4 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar5);
  uVar5 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar5;
  uVar5 = param_2[6];
  uVar4 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  uVar5 = param_2[10];
  uVar4 = param_1[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xe];
  uVar4 = param_1[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xe] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar5;
  uVar5 = param_2[0x12];
  uVar4 = param_1[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar5;
  _swift_bridgeObjectRelease(uVar4);
  uVar5 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar5;
  uVar5 = param_2[0x16];
  uVar4 = param_1[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar5;
  _swift_release(uVar4);
  uVar5 = param_1[0x17];
  param_1[0x17] = param_2[0x17];
  _swift_release(uVar5);
  if (param_1 == param_2) {
    return param_1;
  }
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  FUN_10005241c(puVar1,FUN_1009e8f94);
  uVar5 = 0;
  FUN_1009e8f94(0);
  puVar6 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar5);
  if ((int)puVar6 == 2) {
    uVar4 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    puVar8 = &DAT_100ff3bf0;
    puVar11 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar6 == 1) {
      puVar8 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar7 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar8);
      if ((int)puVar7 == 0) {
        puVar11 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar11 + -8) + 0x20))(puVar1,param_2,puVar11);
        _swift_storeEnumTagMultiPayload(puVar1,puVar8,0);
      }
      else {
        _memcpy(puVar1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
      }
      lVar10 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar10 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
      goto LAB_1009e46d4;
    }
    uVar4 = *param_2;
    puVar1[1] = param_2[1];
    *puVar1 = uVar4;
    *(undefined8 *)((long)puVar1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar8 = &DAT_100ff3bf8;
    puVar11 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar8,puVar11);
  pvVar2 = (void *)((long)puVar1 + (long)*(int *)(puVar8 + 0x30));
  pvVar3 = (void *)((long)param_2 + (long)*(int *)(puVar8 + 0x30));
  lVar10 = 0;
  FUN_1009e908c();
  lVar12 = *(long *)(lVar10 + -8);
  pvVar9 = pvVar3;
  (**(code **)(lVar12 + 0x30))(pvVar3,1,lVar10);
  if ((int)pvVar9 == 0) {
    puVar8 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar9 = pvVar3;
    _swift_getEnumCaseMultiPayload(pvVar3,puVar8);
    if ((int)pvVar9 == 0) {
      puVar11 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar11 + -8) + 0x20))(pvVar2,pvVar3,puVar11);
      _swift_storeEnumTagMultiPayload(pvVar2,puVar8,0);
    }
    else {
      _memcpy(pvVar2,pvVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar10 + 0x14)) =
         *(undefined8 *)((long)pvVar3 + (long)*(int *)(lVar10 + 0x14));
    (**(code **)(lVar12 + 0x38))(pvVar2,0,1,lVar10);
  }
  else {
    puVar8 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar2,pvVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
LAB_1009e46d4:
  _swift_storeEnumTagMultiPayload(puVar1,uVar5,puVar6);
  return param_1;
}



/* Address: 0x1009e4704 | FUN_1009e4704 */

void FUN_1009e4704(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e4710 | FUN_1009e4710 */

ulong FUN_1009e4710(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar2 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    return (ulong)((int)uVar2 + 1);
  }
  lVar1 = 0;
  FUN_1009eeb08();
  uVar2 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001009e4788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(uVar2,param_2,lVar1);
  return uVar2;
}



/* Address: 0x1009e478c | FUN_1009e478c */

void FUN_1009e478c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e4798 | FUN_1009e4798 */

void FUN_1009e4798(long param_1,undefined8 param_2,int param_3,long param_4)

{
  long lVar1;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  lVar1 = 0;
  FUN_1009eeb08();
                    /* WARNING: Could not recover jumptable at 0x0001009e4808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,lVar1);
  return;
}



/* Address: 0x1009e480c | FUN_1009e480c */

void FUN_1009e480c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = &DAT_100c8d2f0;
  puStack_30 = &DAT_100c8d308;
  lVar1 = 0x13f;
  FUN_1009e8f94();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1009e4888 | FUN_1009e4888 */

void FUN_1009e4888(void)

{
  undefined8 uVar1;
  
  if (DAT_100ff3cc0 != 0) {
    return;
  }
  uVar1 = 0x100c65e48;
  _swift_getWitnessTable(0x100c65e48,&DAT_100ee8270);
  DAT_100ff3cc0 = uVar1;
  return;
}



/* Address: 0x1009e48c8 | FUN_1009e48c8 */

void FUN_1009e48c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  UnownedSerialExecutor UVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(long *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  puVar1 = &DAT_100ff3cd0;
  FUN_1000f7830(&DAT_100ff3cd0,&DAT_100c8d338);
  *(undefined **)(unaff_x22 + 0xb8) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  puVar1 = &DAT_100ff3cd8;
  FUN_1000f7830(&DAT_100ff3cd8,&DAT_100c8d340);
  *(undefined **)(unaff_x22 + 200) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  puVar1 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar2;
  lVar4 = 0;
  FUN_1009e8f94();
  *(long *)(unaff_x22 + 0xe8) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf8) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x100) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar2;
  lVar4 = 0;
  FUN_1009e908c();
  *(long *)(unaff_x22 + 0x110) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x120) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x128) = uVar2;
  lVar4 = 0;
  FUN_1009eeb08();
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x130) = uVar2;
  if (param_2 == 0) {
    UVar5.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar5 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x138) = UVar5.unknown;
  *(undefined8 *)(unaff_x22 + 0x140) = param_3;
  _swift_task_switch(FUN_1009e4a88,UVar5.unknown);
  return;
}



/* Address: 0x1009e4a88 | FUN_1009e4a88 */

void FUN_1009e4a88(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_1009e9190();
  *(undefined8 *)(unaff_x22 + 0x148) = uVar3;
  FUN_1000c495c(uVar16,uVar12,FUN_1009e8f94);
  _swift_getEnumCaseMultiPayload(uVar12,uVar13);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x108);
  if ((int)uVar12 == 0) {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar10 = *(long *)(unaff_x22 + 0x118);
    puVar15 = *(undefined8 **)(unaff_x22 + 0xf8);
    FUN_1000c495c(uVar13,puVar15,FUN_1009e8f94);
    _swift_release(*puVar15);
    puVar5 = &DAT_100ff3bf8;
    puVar9 = &DAT_100c8d470;
  }
  else {
    if ((int)uVar12 == 1) {
      uVar12 = *(undefined8 *)(unaff_x22 + 0x130);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x120);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
      uVar17 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
      FUN_1000c495c(uVar13,uVar14,FUN_1009e8f94);
      FUN_1000523d8(uVar14,uVar16,FUN_1009e908c);
      FUN_1000f8cac(uVar16,uVar17,&DAT_100ff3ce0,&DAT_100c8d348);
      *(undefined8 *)(unaff_x22 + 0x50) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x58) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar12;
      plVar4 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x150) = plVar4;
      plVar7 = (long *)&DAT_100ff3c00;
      FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
      plVar8 = plVar7;
      FUN_1009e8058();
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1009e4e30;
      uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
      puVar5 = &DAT_100c8d380;
      lVar10 = unaff_x22 + 0x40;
      goto LAB_1009e4df4;
    }
    uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
    lVar10 = *(long *)(unaff_x22 + 0x118);
    puVar15 = *(undefined8 **)(unaff_x22 + 0xf0);
    FUN_1000c495c(uVar13,puVar15,FUN_1009e8f94);
    _swift_release(puVar15[1]);
    puVar5 = &DAT_100ff3bf0;
    puVar9 = &DAT_100c8d490;
  }
  FUN_1000f7830(puVar5,puVar9);
  lVar19 = (long)puVar15 + (long)*(int *)(puVar5 + 0x30);
  lVar6 = lVar19;
  (**(code **)(lVar10 + 0x30))(lVar19,1,uVar12);
  if ((int)lVar6 == 1) {
    FUN_1000fb4c4(lVar19,&DAT_100ff3be8,&DAT_100c8d4b0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009e4e30);
    (*pcVar2)();
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x108);
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  lVar6 = *(long *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xc0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x88);
  FUN_1000523d8(lVar19,uVar12,FUN_1009e908c);
  FUN_10005241c(uVar18,FUN_1009e8f94);
  FUN_1000f8cac(uVar12,uVar14,&DAT_100ff3ce0,&DAT_100c8d348);
  FUN_1000c495c(uVar17,lVar1,FUN_1009eeb08);
  lVar19 = (long)*(int *)(lVar6 + 0x24);
  FUN_10011532c(uVar14,lVar1 + lVar19,&DAT_100ff3c00,&DAT_100c8d460);
  FUN_1009e9628(lVar10);
  puVar5 = &DAT_100ff3ce8;
  FUN_1000f7830(&DAT_100ff3ce8,&DAT_100c8d350);
  FUN_1000f8cac(lVar1 + lVar19,lVar10 + *(int *)(puVar5 + 0x30),&DAT_100ff3c00,&DAT_100c8d460);
  FUN_1000fb4c4(lVar1,&DAT_100ff3cd0,&DAT_100c8d338);
  puVar5 = &DAT_100ff3cf0;
  FUN_1000f7830(&DAT_100ff3cf0,&DAT_100c8d358);
  _swift_storeEnumTagMultiPayload(lVar10,puVar5,0);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar16;
  plVar7 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar7;
  plVar8 = plVar7;
  FUN_1009e7f88();
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1009e4fb8;
  plVar7 = *(long **)(unaff_x22 + 200);
  uVar18 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x70);
  puVar5 = &DAT_100c8d368;
  lVar10 = unaff_x22 + 0x10;
LAB_1009e4df4:
  FUN_1009e53f4(uVar11,uVar16,uVar17,uVar18,uVar3,puVar5,lVar10,uVar13,uVar14,uVar12,plVar7,plVar8);
  return;
}



/* Address: 0x1009e4e30 | FUN_1009e4e30 */

void FUN_1009e4e30(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x158) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x150));
  if (unaff_x20 == 0) {
    FUN_1000fb4c4(*(undefined8 *)(lVar4 + 0xe0),&DAT_100ff3c00,&DAT_100c8d460);
    uVar2 = *(undefined8 *)(lVar4 + 0x138);
    uVar3 = *(undefined8 *)(lVar4 + 0x140);
    pcVar1 = FUN_1009e4eac;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x138);
    uVar3 = *(undefined8 *)(lVar4 + 0x140);
    pcVar1 = FUN_1009e512c;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1009e4eac | FUN_1009e4eac */

void FUN_1009e4eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x108);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
  FUN_10005241c(uVar10,FUN_1009e908c);
  FUN_10005241c(uVar9,FUN_1009e8f94);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_10005241c(uVar3,FUN_1009eeb08);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001009e4fb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e4fb8 | FUN_1009e4fb8 */

void FUN_1009e4fb8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x160));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e5018;
  }
  else {
    pcVar1 = FUN_1009e525c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x138),*(undefined8 *)(lVar2 + 0x140));
  return;
}



/* Address: 0x1009e5018 | FUN_1009e5018 */

void FUN_1009e5018(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
  FUN_1000fb4c4(uVar9,&DAT_100ff3cd8,&DAT_100c8d340);
  FUN_10005241c(uVar10,FUN_1009e908c);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_10005241c(uVar3,FUN_1009eeb08);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001009e5128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e512c | FUN_1009e512c */

void FUN_1009e512c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
  FUN_10005241c(uVar9,FUN_1009e908c);
  FUN_1000fb4c4(uVar10,&DAT_100ff3c00,&DAT_100c8d460);
  FUN_10005241c(uVar8,FUN_1009e8f94);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_10005241c(uVar2,FUN_1009eeb08);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001009e5258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e525c | FUN_1009e525c */

void FUN_1009e525c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x148));
  FUN_1000fb4c4(uVar9,&DAT_100ff3cd8,&DAT_100c8d340);
  FUN_10005241c(uVar10,FUN_1009e908c);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_10005241c(uVar3,FUN_1009eeb08);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001009e5374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e5378 | FUN_1009e5378 */

void FUN_1009e5378(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001009e53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,param_4);
  return;
}



/* Address: 0x1009e53f4 | FUN_1009e53f4 */

void FUN_1009e53f4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,long param_11,undefined8 param_12)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 200) = param_12;
  *(undefined8 *)(unaff_x22 + 0xd0) = unaff_x20;
  *(long *)(unaff_x22 + 0xb8) = param_10;
  *(long *)(unaff_x22 + 0xc0) = param_11;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_8;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_9;
  *(undefined8 *)(unaff_x22 + 0x98) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_7;
  *(undefined8 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x90) = param_5;
  *(long *)(unaff_x22 + 0x78) = param_2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  lVar3 = *(long *)(param_10 + -8);
  *(long *)(unaff_x22 + 0xd8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xe0) = uVar1;
  lVar3 = *(long *)(param_11 + -8);
  *(long *)(unaff_x22 + 0xe8) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xf0) = uVar1;
  lVar3 = 0;
  FUN_100a359a4(0,param_11);
  *(long *)(unaff_x22 + 0xf8) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x100) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  if (param_2 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x110) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x118) = param_3;
  _swift_task_switch(FUN_1009e54f8,UVar2.unknown);
  return;
}



/* Address: 0x1009e54f8 | FUN_1009e54f8 */

void FUN_1009e54f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x98);
  (**(code **)(*(long *)(unaff_x22 + 0xe8) + 0x10))(uVar1,*(undefined8 *)(unaff_x22 + 0x88),uVar5);
  FUN_1005cfcb0(uVar4,uVar1,uVar5);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar7;
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x120) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009e55f4;
  FUN_1009e6abc(*(undefined8 *)(unaff_x22 + 0xe0),PTR___type_metadata_for____100eae0c8 + 8,
                *(undefined8 *)(unaff_x22 + 0xb8),*(undefined8 *)(unaff_x22 + 0x78),
                *(undefined8 *)(unaff_x22 + 0x80),&DAT_100c8d438,unaff_x22 + 0x10,
                PTR___type_metadata_for____100eae0c8 + 8,*(undefined8 *)(unaff_x22 + 0xb8));
  return;
}



/* Address: 0x1009e55f4 | FUN_1009e55f4 */

void FUN_1009e55f4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x128) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x120));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e5654;
  }
  else {
    pcVar1 = FUN_1009e56e0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x110),*(undefined8 *)(lVar2 + 0x118));
  return;
}



/* Address: 0x1009e5654 | FUN_1009e5654 */

void FUN_1009e5654(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x100);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(*(long *)(unaff_x22 + 0xd8) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x70),uVar5,*(undefined8 *)(unaff_x22 + 0xb8));
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009e56dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e56e0 | FUN_1009e56e0 */

void FUN_1009e56e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xe0);
  (**(code **)(*(long *)(unaff_x22 + 0x100) + 8))(uVar2,*(undefined8 *)(unaff_x22 + 0xf8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001009e5748. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e574c | FUN_1009e574c */

void FUN_1009e574c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009e576c,0,0);
  return;
}



/* Address: 0x1009e576c | FUN_1009e576c */

void FUN_1009e576c(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  puVar1 = &DAT_100f26fd8;
  _swift_allocObject(&DAT_100f26fd8,0x28,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar1;
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar1 + 0x20) = *(undefined8 *)(unaff_x22 + 0x20);
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009e57fc;
  FUN_1009e59b0(plVar2,*(undefined8 *)(unaff_x22 + 0x10),&DAT_100c8d398,puVar1,
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1009e57fc | FUN_1009e57fc */

void FUN_1009e57fc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e5860;
  }
  else {
    pcVar1 = FUN_1009e58cc;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e5860 | FUN_1009e5860 */

void FUN_1009e5860(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x38);
  uVar2 = uVar3;
  _swift_isEscapingClosureAtFileLocation(uVar3,"",0x7e,0x66,9,0);
  _swift_release(uVar3);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009e58c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e58cc);
  (*pcVar1)();
}



/* Address: 0x1009e58cc | FUN_1009e58cc */

void FUN_1009e58cc(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x38);
  uVar2 = uVar3;
  _swift_isEscapingClosureAtFileLocation(uVar3,"",0x7e,0x67,5,0);
  _swift_release(uVar3);
  if ((uVar2 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009e5930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e5938);
  (*pcVar1)();
}



/* Address: 0x1009e5938 | FUN_1009e5938 */

void FUN_1009e5938(undefined8 param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x0001009e59ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar2,param_1,param_2);
  return;
}



/* Address: 0x1009e59b0 | FUN_1009e59b0 */

void FUN_1009e59b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_1009e59d0,0,0);
  return;
}



/* Address: 0x1009e59d0 | FUN_1009e59d0 */

void FUN_1009e59d0(void)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  AsyncStream bufferingPolicy;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar2 = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  *(undefined **)(unaff_x22 + 0x70) = puVar2;
  lVar8 = *(long *)(puVar2 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  puVar2 = &DAT_100ff3d10;
  FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
  *(undefined **)(unaff_x22 + 0x88) = puVar2;
  lVar9 = *(long *)(puVar2 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar9;
  lVar8 = *(long *)(lVar9 + 0x40);
  uVar6 = lVar8 + 0xf;
  bufferingPolicy.unknown = (undefined *)(uVar6 & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x98) = bufferingPolicy.unknown;
  puVar4 = &DAT_100ff3d18;
  FUN_1000f7830(&DAT_100ff3d18,&DAT_100c8d3b8);
  lVar11 = *(long *)(puVar4 + -8);
  uVar5 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar11 + 0x68))();
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
  if ((bVar1 & 1) == 0) {
    FUN_1009e8274(uVar3,bufferingPolicy.unknown,uVar5);
  }
  else {
    Swift::AsyncStream::_makeStream((BufferingPolicy)(__int8)uVar3,bufferingPolicy);
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(lVar11 + 8))(uVar5,puVar4);
  _swift_task_dealloc(uVar5);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar12;
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  *(undefined **)(unaff_x22 + 0x40) = bufferingPolicy.unknown;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar6;
  (**(code **)(lVar9 + 0x10))();
  uVar3 = (ulong)*(byte *)(lVar9 + 0x50);
  uVar5 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100f27000;
  _swift_allocObject(&DAT_100f27000,uVar5 + lVar8,uVar3 | 7);
  *(undefined **)(unaff_x22 + 0xa8) = puVar4;
  (**(code **)(lVar9 + 0x20))(puVar4 + uVar5,uVar6,puVar2);
  plVar7 = (long *)0x170;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1009e5c10;
  FUN_1009e48c8(plVar7,*(undefined8 *)(unaff_x22 + 0x48),0,0,&DAT_100c8d3c8,unaff_x22 + 0x10,
                FUN_1009e8590,puVar4,*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x1009e5c10 | FUN_1009e5c10 */

void FUN_1009e5c10(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xa8);
  *(long *)(lVar3 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xb0));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa0));
    pcVar2 = FUN_1009e5c8c;
  }
  else {
    pcVar2 = FUN_1009e5d00;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1009e5c8c | FUN_1009e5c8c */

void FUN_1009e5c8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar4 = *(long *)(unaff_x22 + 0x78);
  (**(code **)(*(long *)(unaff_x22 + 0x90) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(uVar3);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e5cfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e5d00 | FUN_1009e5d00 */

void FUN_1009e5d00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar4 = *(long *)(unaff_x22 + 0x90);
  lVar3 = *(long *)(unaff_x22 + 0x78);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar1);
  (**(code **)(lVar3 + 8))(uVar5,uVar6);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001009e5d84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e5d88 | FUN_1009e5d88 */

void FUN_1009e5d88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x80) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  _swift_task_switch(FUN_1009e5dac,0,0);
  return;
}



/* Address: 0x1009e5dac | FUN_1009e5dac */

void FUN_1009e5dac(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x78);
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007578b4;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_1009e6abc(*(undefined8 *)(unaff_x22 + 0x50),uVar2,uVar2,0,0,&DAT_100c8d3d8,unaff_x22 + 0x10,
                uVar2,uVar2);
  return;
}



/* Address: 0x1009e5e58 | FUN_1009e5e58 */

void FUN_1009e5e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_8;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_1;
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x70) = CONCAT71(extraout_var,OVar1.value);
  lVar3 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
  lVar3 = 0;
  FUN_1009eeb08();
  *(long *)(unaff_x22 + 0x88) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x90) = lVar3;
  lVar3 = *(long *)(lVar3 + 0x40);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar2 = lVar3 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  _swift_task_switch(FUN_1009e5efc,0,0);
  return;
}



/* Address: 0x1009e5efc | FUN_1009e5efc */

void FUN_1009e5efc(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  TaskPriority TVar8;
  ulong uVar9;
  undefined *puVar10;
  ThrowingTaskGroup TVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar1 = *(long *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = *(long *)(unaff_x22 + 0x90);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x40);
  uVar5 = 0x25000001;
  _swift_getFunctionTypeMetadata1(0x25000001,*(undefined8 *)(unaff_x22 + 0x88),uVar18);
  FUN_1005cfcb0(unaff_x22 + 0x10,(undefined8 *)(unaff_x22 + 0x20),uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar5;
  puVar6 = &DAT_100ff3d28;
  FUN_1000f7830(&DAT_100ff3d28,&DAT_100c8e750);
  uVar12 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  pcVar15 = *(code **)(*(long *)(TVar8.unknown + -8) + 0x38);
  (*pcVar15)(uVar7,1,1,TVar8.unknown);
  puVar6 = &DAT_100ff3d08;
  FUN_1000f7830(&DAT_100ff3d08,&DAT_100c8d3a8);
  lVar20 = *(long *)(puVar6 + -8);
  lVar17 = *(long *)(lVar20 + 0x40);
  uVar9 = lVar17 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  (**(code **)(lVar20 + 0x10))();
  uVar16 = (ulong)*(byte *)(lVar20 + 0x50);
  uVar19 = uVar16 + 0x28 & (uVar16 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100f27028;
  _swift_allocObject(&DAT_100f27028,uVar19 + lVar17,uVar16 | 7);
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  *(undefined8 *)(puVar10 + 0x20) = uVar18;
  (**(code **)(lVar20 + 0x20))(puVar10 + uVar19,uVar9,puVar6);
  _swift_retain(uVar14);
  puVar6 = &DAT_100ff3d20;
  FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
  *(undefined **)(unaff_x22 + 0xb0) = puVar6;
  TVar11 = Swift::ThrowingTaskGroup::typeMetadataAccessor();
  FUN_1009e6794(uVar7,&DAT_100c8d3f8,puVar10,TVar11.unknown);
  FUN_1000fb4c4(uVar7,&DAT_100ff3d28,&DAT_100c8e750);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar7);
  uVar12 = uVar12 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar12);
  (*pcVar15)();
  FUN_1000c495c(uVar4,uVar2,FUN_1009eeb08);
  uVar7 = (ulong)*(byte *)(lVar3 + 0x50);
  uVar9 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100f27050;
  _swift_allocObject(&DAT_100f27050,uVar9 + lVar1,uVar7 | 7);
  *(undefined8 *)(puVar6 + 0x10) = 0;
  *(undefined8 *)(puVar6 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 0x20) = uVar18;
  *(undefined8 *)(puVar6 + 0x30) = uVar22;
  *(undefined8 *)(puVar6 + 0x28) = uVar21;
  FUN_1000523d8(uVar2,puVar6 + uVar9,FUN_1009eeb08);
  _swift_retain(uVar5);
  FUN_1009e6794(uVar12,&DAT_100c8d408,puVar6,TVar11.unknown);
  FUN_1000fb4c4(uVar12,&DAT_100ff3d28,&DAT_100c8e750);
  _swift_task_dealloc(uVar12);
  plVar13 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_1009e6228;
  FUN_1009e69b8(plVar13,*(undefined8 *)(unaff_x22 + 0x80),0,0,TVar11.unknown);
  return;
}



/* Address: 0x1009e6228 | FUN_1009e6228 */

void FUN_1009e6228(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xc0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009e628c;
  }
  else {
    pcVar1 = FUN_1009e63d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009e628c | FUN_1009e628c */

void FUN_1009e628c(void)

{
  undefined8 uVar1;
  CancellationError CVar2;
  CancellationError CVar3;
  code *UNRECOVERED_JUMPTABLE;
  Continuation_conflict CVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  long lVar8;
  long lVar9;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x80);
  lVar8 = *(long *)(unaff_x22 + 0x68);
  lVar9 = *(long *)(lVar8 + -8);
  uVar6 = uVar5;
  (**(code **)(lVar9 + 0x30))(uVar5,1,lVar8);
  if ((int)uVar6 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    puVar7 = *(undefined8 **)(unaff_x22 + 0x38);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x70));
    Swift::ThrowingTaskGroup::cancelAll((undefined *)*puVar7);
    CVar2 = Swift::CancellationError::typeMetadataAccessor();
    CVar3 = CVar2;
    FUN_1009e8a00();
    _swift_allocError(CVar2.unknown,CVar3.unknown,0,0);
    Swift::CancellationError::init();
    _swift_willThrow();
    _swift_release(uVar6);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    (**(code **)(lVar9 + 0x20))(*(undefined8 *)(unaff_x22 + 0x30),uVar5,lVar8);
    CVar4.unknown = &DAT_100ff3d10;
    FUN_1000f7830(&DAT_100ff3d10,&DAT_100c8d3b0);
    Swift::AsyncStream::Continuation::finish(CVar4);
    _swift_release(uVar1);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e63d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009e63d8 | FUN_1009e63d8 */

void FUN_1009e63d8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa8));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009e6424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009e6428 | FUN_1009e6428 */

void FUN_1009e6428(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1009e6440,0,0);
  return;
}


