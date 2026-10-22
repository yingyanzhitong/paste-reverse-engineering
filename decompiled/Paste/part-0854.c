/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100941748 | thunk_FUN_1009415ec */

void thunk_FUN_1009415ec(void)

{
  FUN_1009415ec();
  return;
}



/* Address: 0x10094174c | FUN_10094174c */

void FUN_10094174c(undefined8 param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100fed920,param_2,FUN_100947828,&TargetProtocolConformanceDescriptor_100c857f4)
  ;
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100941790 | thunk_FUN_10093fdc4 */

/* WARNING: Removing unreachable block (ram,0x00010093fe10) */

void thunk_FUN_10093fdc4(ExecutorJob param_1)

{
  undefined1 auStack_88 [40];
  undefined1 uStack_60;
  undefined1 uStack_48;
  undefined *apuStack_40 [3];
  undefined *puStack_28;
  
  apuStack_40[0] = (undefined *)Swift::UnownedJob::init(param_1);
  puStack_28 = PTR___type_metadata_for_Swift_UnownedJob_100eaebf8;
  FUN_100947614(apuStack_40,auStack_88);
  uStack_60 = 1;
  uStack_48 = 1;
  FUN_10093efc4(auStack_88);
  FUN_1008fa458(auStack_88);
  FUN_100947650(apuStack_40);
  return;
}



/* Address: 0x100941794 | FUN_100941794 */

void FUN_100941794(long param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_1009474d4();
  if (param_1 == lVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009417c8);
    (*pcVar1)();
  }
  FUN_10090957c();
  if (param_1 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009417cc);
  (*pcVar1)();
}



/* Address: 0x1009417cc | FUN_1009417cc */

void FUN_1009417cc(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10094180c(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = CONCAT71(local_37,uStack_38);
    param_1[2] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x21) = uStack_2f;
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_30,local_37);
  }
  return;
}



/* Address: 0x10094180c | FUN_10094180c */

void FUN_10094180c(long *param_1,long *param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long *plVar2;
  long unaff_x20;
  long unaff_x21;
  undefined1 auStack_e8 [64];
  undefined1 local_a8;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  long *plStack_68;
  
  plVar2 = param_2;
  (**(code **)(**(long **)(unaff_x20 + 0x28) + 0x88))();
  lVar1 = *plVar2;
  *plVar2 = lVar1 + 1;
  local_88 = param_4;
  uStack_80 = param_5;
  FUN_10000cbb0(auStack_a0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  local_78 = 1;
  local_70 = lVar1;
  plStack_68 = param_2;
  FUN_1009474f8(auStack_a0,auStack_e8);
  local_a8 = 0;
  FUN_10093efc4(auStack_e8);
  FUN_1008fa458(auStack_e8);
  FUN_100947534(auStack_a0);
  if (unaff_x21 == 0) {
    *param_1 = unaff_x20;
    param_1[1] = (long)&PTR_PTR_100f19fa8;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = lVar1;
    *(undefined1 *)(param_1 + 5) = 1;
    _swift_retain();
  }
  return;
}



/* Address: 0x100941908 | FUN_100941908 */

void FUN_100941908(void)

{
  FUN_1008c6ee0();
  return;
}



/* Address: 0x100941924 | FUN_100941924 */

/* WARNING: Removing unreachable block (ram,0x000100941998) */

void FUN_100941924(long param_1)

{
  code *pcVar1;
  int iVar2;
  long unaff_x20;
  long lVar3;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100941998);
    (*pcVar1)();
  }
  lVar3 = *(long *)(unaff_x20 + 0x60);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar3 + 0x10));
  if (iVar2 == 0) {
    FUN_1009420c8();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar3 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100941994);
      (*pcVar1)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100941990);
  (*pcVar1)();
}



/* Address: 0x10094199c | FUN_10094199c */

void FUN_10094199c(void)

{
  FUN_1009419a8();
  return;
}



/* Address: 0x1009419a8 | FUN_1009419a8 */

/* WARNING: Removing unreachable block (ram,0x0001009419e8) */

void FUN_1009419a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_50;
  undefined1 local_38;
  
  local_50 = 0;
  local_38 = 1;
  local_78 = param_1;
  uStack_70 = param_2;
  _swift_retain(param_2);
  (*param_5)(&local_78);
  FUN_1008fa458(&local_78);
  return;
}



/* Address: 0x100941a0c | thunk_FUN_10093f7f4 */

void thunk_FUN_10093f7f4(void)

{
  FUN_10093f7f4();
  return;
}



/* Address: 0x100941a10 | thunk_FUN_10093fa9c */

void thunk_FUN_10093fa9c(void)

{
  FUN_10093fa9c();
  return;
}



/* Address: 0x100941a14 | thunk_FUN_10093fc98 */

void thunk_FUN_10093fc98(void)

{
  FUN_10093fc98();
  return;
}



/* Address: 0x100941a18 | FUN_100941a18 */

void FUN_100941a18(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100941a44 | thunk_FUN_1009413bc */

void thunk_FUN_1009413bc(void)

{
  FUN_1009413bc();
  return;
}



/* Address: 0x100941a48 | FUN_100941a48 */

void FUN_100941a48(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006419c8(*unaff_x20,&PTR_PTR_100f19fa8);
  return;
}



/* Address: 0x100941a58 | FUN_100941a58 */

undefined1  [16]
FUN_100941a58(undefined8 param_1,_StringGuts param_2,char *param_3,undefined *param_4)

{
  undefined1 auVar1 [16];
  undefined **ppuVar2;
  char *pcVar3;
  void *pvVar4;
  undefined *extraout_x8;
  long unaff_x20;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 local_41;
  undefined8 local_40;
  char *local_38;
  
  ppuVar2 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar2 == extraout_x8) {
    local_40 = 0;
    local_38 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x3e,param_2);
    pcVar3 = (char *)0xd000000000000021;
    pvVar4 = (void *)0x8000000100db5220;
    SVar5.bridgeObject = (void *)0x8000000100db5220;
    SVar5.str = (char *)0xd000000000000021;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar5,SVar12);
    FUN_100942ae0();
    SVar6.bridgeObject = pvVar4;
    SVar6.str = pcVar3;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar6,SVar13);
    _swift_bridgeObjectRelease(pvVar4);
    pcVar3 = (char *)0x646165726874202c;
    pvVar4 = (void *)0xeb00000000203d20;
    SVar7.bridgeObject = (void *)0xeb00000000203d20;
    SVar7.str = (char *)0x646165726874202c;
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar7,SVar14);
    FUN_10095fce0();
    SVar8.bridgeObject = pvVar4;
    SVar8.str = pcVar3;
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar8,SVar15);
    _swift_bridgeObjectRelease(pvVar4);
    SVar9.bridgeObject = (void *)0xea0000000000203d;
    SVar9.str = (char *)0x206574617473202c;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    Swift::String::append(SVar9,SVar16);
    local_41 = *(undefined1 *)(unaff_x20 + 0x70);
    param_3 = "\x01\x02";
    param_4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_41,&local_40,&DAT_100f1a408,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
  }
  else {
    local_40 = 0;
    local_38 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x23,param_2);
    pcVar3 = local_38;
    _swift_bridgeObjectRelease();
    local_40 = 0xd00000000000001f;
    local_38 = (char *)0x8000000100db5200;
    FUN_10095fce0();
    SVar10.bridgeObject = param_2.unknown;
    SVar10.str = pcVar3;
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar10,SVar17);
    _swift_bridgeObjectRelease(param_2.unknown);
  }
  SVar11.bridgeObject = &SUB_e200000000000000;
  SVar11.str = (char *)0x7d20;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar11,SVar18);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100941bf0 | FUN_100941bf0 */

undefined1  [16] FUN_100941bf0(void)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  int iVar4;
  undefined **ppuVar5;
  char *pcVar6;
  undefined1 *puVar7;
  _StringGuts _Var8;
  void *pvVar9;
  char *pcVar10;
  void *pvVar11;
  undefined *puVar12;
  undefined *extraout_x8;
  long unaff_x20;
  char *pcVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
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
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  undefined1 local_69;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar14 = *(long *)(unaff_x20 + 0x60);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100941ef0);
    (*pcVar3)();
  }
  puVar7 = auStack_58;
  pcVar10 = (char *)0x0;
  pvVar11 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x30);
  pcVar13 = *(char **)(unaff_x20 + 0x30);
  pcVar6 = pcVar13;
  _swift_bridgeObjectRetain();
  FUN_100941efc();
  _Var8.unknown = puVar7;
  _swift_bridgeObjectRelease(pcVar13);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x10));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100941ef4);
    (*pcVar3)();
  }
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(unaff_x20 + 0x40));
  if (*ppuVar5 == extraout_x8) {
    local_68 = 0;
    uStack_60 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var8);
    pcVar13 = (char *)0xd000000000000021;
    pvVar9 = (void *)0x8000000100db5220;
    SVar15.bridgeObject = (void *)0x8000000100db5220;
    SVar15.str = (char *)0xd000000000000021;
    SVar30.bridgeObject = pvVar11;
    SVar30.str = pcVar10;
    Swift::String::append(SVar15,SVar30);
    FUN_100942ae0();
    SVar16.bridgeObject = pvVar9;
    SVar16.str = pcVar13;
    SVar31.bridgeObject = pvVar11;
    SVar31.str = pcVar10;
    Swift::String::append(SVar16,SVar31);
    _swift_bridgeObjectRelease(pvVar9);
    SVar17.bridgeObject = (void *)0x8000000100db5250;
    SVar17.str = (char *)0xd000000000000013;
    SVar32.bridgeObject = pvVar11;
    SVar32.str = pcVar10;
    Swift::String::append(SVar17,SVar32);
    SVar18.bridgeObject = puVar7;
    SVar18.str = pcVar6;
    SVar33.bridgeObject = pvVar11;
    SVar33.str = pcVar10;
    Swift::String::append(SVar18,SVar33);
    _swift_bridgeObjectRelease(puVar7);
    pcVar6 = (char *)0x646165726874202c;
    pvVar9 = (void *)0xeb00000000203d20;
    SVar19.bridgeObject = (void *)0xeb00000000203d20;
    SVar19.str = (char *)0x646165726874202c;
    SVar34.bridgeObject = pvVar11;
    SVar34.str = pcVar10;
    Swift::String::append(SVar19,SVar34);
    FUN_10095fce0();
    SVar20.bridgeObject = pvVar9;
    SVar20.str = pcVar6;
    SVar35.bridgeObject = pvVar11;
    SVar35.str = pcVar10;
    Swift::String::append(SVar20,SVar35);
    _swift_bridgeObjectRelease(pvVar9);
    SVar21.bridgeObject = (void *)0xea0000000000203d;
    SVar21.str = (char *)0x206574617473202c;
    SVar36.bridgeObject = pvVar11;
    SVar36.str = pcVar10;
    Swift::String::append(SVar21,SVar36);
    pcVar6 = "\x01\x02";
    local_69 = *(undefined1 *)(unaff_x20 + 0x70);
  }
  else {
    lVar14 = *(long *)(unaff_x20 + 0x68);
    iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar14 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100941ef8);
      (*pcVar3)();
    }
    uVar1 = *(undefined1 *)(unaff_x20 + 0x71);
    iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar14 + 0x10));
    if (iVar4 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100941efc);
      (*pcVar3)();
    }
    local_68 = 0;
    uStack_60 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x53,_Var8);
    pcVar13 = (char *)0xd000000000000021;
    pvVar9 = (void *)0x8000000100db5220;
    SVar22.bridgeObject = (void *)0x8000000100db5220;
    SVar22.str = (char *)0xd000000000000021;
    SVar37.bridgeObject = pvVar11;
    SVar37.str = pcVar10;
    Swift::String::append(SVar22,SVar37);
    FUN_100942ae0();
    SVar23.bridgeObject = pvVar9;
    SVar23.str = pcVar13;
    SVar38.bridgeObject = pvVar11;
    SVar38.str = pcVar10;
    Swift::String::append(SVar23,SVar38);
    _swift_bridgeObjectRelease(pvVar9);
    SVar24.bridgeObject = (void *)0x8000000100db5250;
    SVar24.str = (char *)0xd000000000000013;
    SVar39.bridgeObject = pvVar11;
    SVar39.str = pcVar10;
    Swift::String::append(SVar24,SVar39);
    SVar25.bridgeObject = puVar7;
    SVar25.str = pcVar6;
    SVar40.bridgeObject = pvVar11;
    SVar40.str = pcVar10;
    Swift::String::append(SVar25,SVar40);
    _swift_bridgeObjectRelease(puVar7);
    pcVar6 = (char *)0x646165726874202c;
    pvVar9 = (void *)0xeb00000000203d20;
    SVar26.bridgeObject = (void *)0xeb00000000203d20;
    SVar26.str = (char *)0x646165726874202c;
    SVar41.bridgeObject = pvVar11;
    SVar41.str = pcVar10;
    Swift::String::append(SVar26,SVar41);
    FUN_10095fce0();
    SVar27.bridgeObject = pvVar9;
    SVar27.str = pcVar6;
    SVar42.bridgeObject = pvVar11;
    SVar42.str = pcVar10;
    Swift::String::append(SVar27,SVar42);
    _swift_bridgeObjectRelease(pvVar9);
    SVar28.bridgeObject = (void *)0xea0000000000203d;
    SVar28.str = (char *)0x206574617473202c;
    SVar43.bridgeObject = pvVar11;
    SVar43.str = pcVar10;
    Swift::String::append(SVar28,SVar43);
    pcVar6 = "\x01\x02";
    local_69 = uVar1;
  }
  puVar12 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_69,&local_68,pcVar6,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar29.bridgeObject = &SUB_e200000000000000;
  SVar29.str = (char *)0x7d20;
  SVar44.bridgeObject = puVar12;
  SVar44.str = pcVar6;
  Swift::String::append(SVar29,SVar44);
  auVar2._8_8_ = uStack_60;
  auVar2._0_8_ = local_68;
  return auVar2;
}



/* Address: 0x100941efc | FUN_100941efc */

undefined1  [16] FUN_100941efc(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  Swift::_StringGuts::grow(0x1c,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe300000000000000;
  SVar2.str = (char *)0x203a29;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  FUN_1009440f8(param_1);
  SVar2 = Swift::Array<undefined>::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  _swift_release(param_1);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  auVar1._8_8_ = 0x8000000100dafbf0;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x100941fe0 | FUN_100941fe0 */

void FUN_100941fe0(void)

{
  FUN_100941a58();
  return;
}



/* Address: 0x100942000 | FUN_100942000 */

void FUN_100942000(void)

{
  FUN_100941bf0();
  return;
}



/* Address: 0x100942020 | FUN_100942020 */

void FUN_100942020(UnownedJob param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100fed830,param_2,FUN_100947828,&TargetProtocolConformanceDescriptor_100c85854)
  ;
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x100942074 | FUN_100942074 */

void FUN_100942074(Job param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100fed830,param_2,FUN_100947828,&TargetProtocolConformanceDescriptor_100c85854)
  ;
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x1009420c8 | FUN_1009420c8 */

void FUN_1009420c8(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_beginAccess(param_1 + 0x30,&local_80,0x21,0);
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar4 != 0) {
    lVar2 = 0;
    plVar5 = (long *)(*(long *)(param_1 + 0x30) + 0x50);
    do {
      if (*plVar5 == param_2) {
        FUN_1009442c8(&local_c0);
        uVar1 = ~(uint)uStack_98;
        _swift_endAccess(&local_80);
        if ((uVar1 & 0xff) != 0) {
          uStack_78 = uStack_b8;
          local_80 = local_c0;
          uStack_68 = uStack_a8;
          uStack_70 = uStack_b0;
          uStack_58 = uStack_98;
          local_60 = local_a0;
          uStack_48 = uStack_88;
          uStack_50 = local_90;
          FUN_10090de94(&local_80,&local_c0);
          if ((char)uStack_98 == '\x01') {
            FUN_100076508(&local_c0,auStack_e8);
            puVar3 = auStack_e8;
            FUN_100004640(puVar3,local_d0);
            pcVar6 = *(code **)(lStack_c8 + 0x10);
            FUN_100947828();
            (*pcVar6)(param_1,puVar3,&PTR_PTR_100f19fa8,local_d0,lStack_c8);
            FUN_100947534(&local_80);
            FUN_100004594(auStack_e8);
            return;
          }
          FUN_10090e46c(&local_c0);
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10094222c);
          (*pcVar6)();
        }
        goto LAB_10094214c;
      }
      lVar2 = lVar2 + 1;
      plVar5 = plVar5 + 8;
    } while (lVar4 != lVar2);
  }
  uStack_b8 = 0;
  local_c0 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_a0 = 0;
  uStack_98 = 0xff;
  local_90 = 0;
  uStack_88 = 0;
  _swift_endAccess(&local_80);
LAB_10094214c:
  FUN_1000fb4c4(&local_c0,&DAT_100feda70,&DAT_100c85ac8);
  return;
}



/* Address: 0x10094222c | FUN_10094222c */

void FUN_10094222c(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb9d8;
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  _swift_initStaticObject();
  DAT_101058200 = puVar1;
  return;
}



/* Address: 0x100942264 | FUN_100942264 */

undefined8 * FUN_100942264(void)

{
  if (DAT_100fed910 != -1) {
    _swift_once(&DAT_100fed910,FUN_10094222c);
  }
  return &DAT_101058200;
}



/* Address: 0x1009422a4 | FUN_1009422a4 */

void FUN_1009422a4(void)

{
  FUN_1000f7830(&DAT_100feb9d8,&DAT_100c830a0);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1009422d0 | FUN_1009422d0 */

/* WARNING: Removing unreachable block (ram,0x000100942698) */

void FUN_1009422d0(ulong param_1,char param_2,code *param_3,undefined8 param_4,code *param_5)

{
  short sVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  _StringGuts _Var7;
  ulong *puVar8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  StaticString *pSVar12;
  byte bVar13;
  byte bVar14;
  StaticString SVar15;
  long unaff_x20;
  ulong uVar16;
  long lVar17;
  long unaff_x21;
  ulong uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  undefined8 uVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  undefined *local_138;
  ulong uStack_130;
  StaticString local_120;
  undefined8 local_118;
  ulong local_110;
  ulong uStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  undefined1 local_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var7.unknown = auStack_88;
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10);
  if (*(char *)(unaff_x20 + 0x10) != '\0') {
    local_120.unknown = (undefined *)0x0;
    local_118 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2d,_Var7);
    SVar25.bridgeObject = (void *)0x8000000100db52c0;
    SVar25.str = (char *)0xd00000000000002a;
    SVar27.bridgeObject = pvVar10;
    SVar27.str = pcVar9;
    Swift::String::append(SVar25,SVar27);
    local_a0[0] = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar9 = "\x01\x02";
    puVar5 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_a0,&local_120,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x2e;
    puVar8 = (ulong *)0x2e;
    SVar28.bridgeObject = puVar5;
    SVar28.str = pcVar9;
    Swift::String::append(SVar24,SVar28);
    uVar18 = 9;
    SVar15.unknown = local_120.unknown;
    uVar16 = local_118;
LAB_1009423c0:
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
    *puVar8 = (ulong)SVar15.unknown;
    puVar8[1] = uVar16;
    *(int *)(puVar8 + 2) = (int)uVar18;
    _swift_willThrow();
    goto LAB_1009424d8;
  }
  if (param_2 == '\x01') {
    if (param_1 != 0) {
      local_118 = 0;
      local_120.unknown = (undefined *)0x0;
      goto LAB_100942450;
    }
    _swift_beginAccess(unaff_x20 + 0x38,local_a0,0,0);
    iVar4 = *(int *)(unaff_x20 + 0x38);
    _swift_beginAccess(unaff_x20 + 0x40,auStack_b8,0,0);
    uVar22 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_d0,0,0);
    lVar11 = *(long *)(unaff_x20 + 0x48);
    if (lVar11 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942884);
      (*pcVar3)();
    }
    if (0x7fffffff < lVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942888);
      (*pcVar3)();
    }
    pSVar12 = (StaticString *)0x0;
  }
  else {
    if ((long)param_1 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10094287c);
      (*pcVar3)();
    }
    local_118 = param_1 % 1000000000;
    local_120.unknown = (undefined *)(param_1 / 1000000000);
    if ((undefined *)0x5f5e0ff < (undefined *)(param_1 / 1000000000)) {
      local_120.unknown = (undefined *)0x5f5e100;
    }
LAB_100942450:
    _swift_beginAccess(unaff_x20 + 0x38,local_a0,0,0);
    iVar4 = *(int *)(unaff_x20 + 0x38);
    _swift_beginAccess(unaff_x20 + 0x40,auStack_b8,0,0);
    uVar22 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_beginAccess(unaff_x20 + 0x48,auStack_d0,0,0);
    lVar11 = *(long *)(unaff_x20 + 0x48);
    if (lVar11 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942874);
      (*pcVar3)();
    }
    if (0x7fffffff < lVar11) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942878);
      (*pcVar3)();
    }
    pSVar12 = &local_120;
  }
  FUN_10095ebc4(iVar4,0,0,uVar22,lVar11,pSVar12);
  if (unaff_x21 == 0) {
    (*param_3)();
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942880);
      (*pcVar3)();
    }
    lVar11 = (long)iVar4;
    if (iVar4 != 0) {
      _swift_beginAccess(unaff_x20 + 0x40,auStack_e8,0,0);
      _Var7.unknown = auStack_100;
      pcVar9 = (char *)0x0;
      pvVar10 = (void *)0x0;
      _swift_beginAccess(unaff_x20 + 0x18);
      lVar23 = 0;
      lVar19 = lVar11;
      do {
        if (lVar19 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10094286c);
          (*pcVar3)();
        }
        puVar8 = (ulong *)(*(long *)(unaff_x20 + 0x40) + lVar23);
        puVar5 = (undefined *)*puVar8;
        sVar1 = (short)puVar8[1];
        uVar2 = *(ushort *)((long)puVar8 + 10);
        iVar4 = *(int *)((long)puVar8 + 0xc);
        uVar16 = puVar8[1];
        uVar21 = puVar8[3];
        if ((uVar2 >> 0xe & 1) != 0) {
          uVar18 = puVar8[2];
          if ((long)uVar18 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10094288c);
            (*pcVar3)();
          }
          if (0x7fffffff < (long)uVar18) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100942890);
            (*pcVar3)();
          }
          local_120.unknown = (undefined *)0x0;
          local_118 = 0xe000000000000000;
          Swift::_StringGuts::grow(0x25,_Var7);
          _swift_bridgeObjectRelease(local_118);
          local_138 = (undefined *)0xd000000000000023;
          uStack_130 = 0x8000000100db52f0;
          uVar22 = 0;
          local_120.unknown = puVar5;
          local_118 = uVar16;
          local_110 = uVar18;
          uStack_108 = uVar21;
          FUN_1008d4db0(0);
          SVar25 = Swift::String::_init(&local_120,uVar22);
          puVar8 = SVar25.bridgeObject;
          SVar29.bridgeObject = pvVar10;
          SVar29.str = pcVar9;
          Swift::String::append(SVar25,SVar29);
          _swift_bridgeObjectRelease();
          SVar15.unknown = local_138;
          uVar16 = uStack_130;
          goto LAB_1009423c0;
        }
        if (sVar1 != -10) {
          if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100942870);
            (*pcVar3)();
          }
          lVar17 = *(long *)(unaff_x20 + 0x18);
          if ((*(long *)(lVar17 + 0x10) != 0) && (FUN_100071340(), ((ulong)_Var7.unknown & 1) != 0))
          {
            puVar8 = (ulong *)(*(long *)(lVar17 + 0x38) + (long)puVar5 * 0x10);
            iVar20 = (int)uVar21;
            if (*(int *)((long)puVar8 + 0xc) == iVar20) {
              puVar5 = (undefined *)*puVar8;
              _Var7.unknown = (undefined *)(ulong)(byte)puVar8[1];
              bVar14 = *(byte *)((long)puVar8 + 9);
              if (sVar1 == -0xf) {
                if (((short)uVar2 < 0) && ((bVar14 >> 1 & 1) != 0)) {
                  if (iVar4 == 0) {
                    bVar14 = 2;
                    goto LAB_100942638;
                  }
                  bVar13 = 3;
                }
                else {
                  if (iVar4 == 0) goto LAB_10094256c;
                  bVar13 = 1;
                }
                goto LAB_100942630;
              }
              if (sVar1 == -2) {
                if (iVar4 != 0) {
                  bVar13 = 9;
                  goto LAB_100942630;
                }
                if ((bVar14 >> 3 & 1) != 0) {
                  bVar14 = bVar14 & 8;
                  goto LAB_100942638;
                }
              }
              else {
                if (sVar1 != -1) {
                  local_120.unknown = (undefined *)0x0;
                  local_118 = 0xe000000000000000;
                  _swift_retain();
                  Swift::_StringGuts::grow(0x14,_Var7);
                  _swift_bridgeObjectRelease(local_118);
                  local_120.unknown = (undefined *)0xd000000000000012;
                  local_118 = 0x8000000100db5340;
                  local_138 = (undefined *)CONCAT62(local_138._2_6_,sVar1);
                  SVar25 = Swift::CustomStringConvertible::get_description();
                  SVar30.bridgeObject = pvVar10;
                  SVar30.str = pcVar9;
                  Swift::String::append(SVar25,SVar30);
                  _swift_bridgeObjectRelease(SVar25.bridgeObject);
                  SVar26.bridgeObject = (void *)0x2;
                  SVar26.str = (char *)0xb;
                  Swift::_assertionFailure
                            ((StaticString)0x100d8deb0,SVar26,local_120,local_118,0xdb5340);
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100942938);
                  (*pcVar3)();
                }
                if (((short)uVar2 < 0) && ((bVar14 >> 1 & 1) != 0)) {
                  if (iVar4 != 0) {
                    bVar13 = 7;
                    goto LAB_100942630;
                  }
                  bVar14 = bVar14 & 6;
                }
                else if (iVar4 == 0) {
                  if ((bVar14 >> 2 & 1) == 0) goto LAB_10094256c;
                  bVar14 = bVar14 & 4;
                }
                else {
                  bVar13 = 5;
LAB_100942630:
                  bVar14 = bVar13 & bVar14;
                  if (bVar14 == 0) goto LAB_10094256c;
                }
LAB_100942638:
                local_118 = CONCAT62(local_118._2_6_,(short)puVar8[1]);
                local_118 = CONCAT44(iVar20,(undefined4)local_118);
                local_110 = CONCAT71(local_110._1_7_,bVar14);
                local_120.unknown = puVar5;
                _swift_retain();
                _swift_retain(puVar5,_Var7.unknown);
                (*param_5)(&local_120);
                _swift_release(puVar5,_Var7.unknown);
                _swift_release(puVar5);
              }
            }
          }
        }
LAB_10094256c:
        lVar23 = lVar23 + 0x20;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
    _swift_beginAccess(unaff_x20 + 0x48,&local_120,1,0);
    if (*(long *)(unaff_x20 + 0x48) == lVar11) {
      _swift_beginAccess(unaff_x20 + 0x40,&local_138,1,0);
      _swift_slowDealloc(*(undefined8 *)(unaff_x20 + 0x40),0xffffffffffffffff,0xffffffffffffffff);
      *(long *)(unaff_x20 + 0x48) = lVar11 << 1;
      puVar6 = (undefined8 *)(lVar11 << 6);
      _swift_slowAlloc(puVar6,0xffffffffffffffff);
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6[3] = 0;
      puVar6[2] = 0;
      *(undefined8 **)(unaff_x20 + 0x40) = puVar6;
    }
  }
LAB_1009424d8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100942938 | FUN_100942938 */

void FUN_100942938(void)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  _StringGuts _Var6;
  char *pcVar7;
  void *pvVar8;
  undefined *puVar9;
  long unaff_x20;
  long unaff_x21;
  long lVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_78 [24];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_48 [24];
  
  _Var6.unknown = auStack_48;
  pcVar7 = &DAT_00000001;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10);
  if (*(char *)(unaff_x20 + 0x10) == '\0') {
    lVar10 = *(long *)(unaff_x20 + 0x30);
    iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar10 + 0x10));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100942abc);
      (*pcVar2)();
    }
    _swift_beginAccess(unaff_x20 + 0x38,&local_60,1,0);
    FUN_10095d958(*(undefined4 *)(unaff_x20 + 0x38));
    if (unaff_x21 != 0) {
      _swift_unexpectedError();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100942ae0);
      (*pcVar2)();
    }
    *(undefined4 *)(unaff_x20 + 0x38) = 0xffffffff;
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar10 + 0x10));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100942ac0);
      (*pcVar2)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 2;
    _swift_beginAccess(unaff_x20 + 0x18,local_78,1,0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    _swift_bridgeObjectRelease(uVar5);
  }
  else {
    local_60 = 0;
    uStack_58 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x20,_Var6);
    SVar11.bridgeObject = (void *)0x8000000100db5360;
    SVar11.str = (char *)0xd00000000000001d;
    SVar13.bridgeObject = pvVar8;
    SVar13.str = pcVar7;
    Swift::String::append(SVar11,SVar13);
    local_78[0] = *(undefined1 *)(unaff_x20 + 0x10);
    pcVar7 = "\x01\x02";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_78,&local_60,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x2e;
    puVar4 = (undefined8 *)0x2e;
    SVar14.bridgeObject = puVar9;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    uVar1 = uStack_58;
    uVar5 = local_60;
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = uVar5;
    puVar4[1] = uVar1;
    *(undefined4 *)(puVar4 + 2) = 9;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100942ae0 | FUN_100942ae0 */

undefined1  [16] FUN_100942ae0(ulong param_1,_StringGuts param_2)

{
  code *pcVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  
  FUN_10095fa70();
  if ((param_1 & 1) == 0) {
    lVar7 = *(long *)(unaff_x20 + 0x30);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100942c6c);
      (*pcVar1)();
    }
    local_58 = 0;
    local_50 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,param_2);
    _swift_bridgeObjectRelease(local_50);
    local_40 = 0xd000000000000018;
    uStack_38 = 0x8000000100db5270;
    pcVar3 = (char *)0x0;
    pvVar4 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + 0x38,&local_58);
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar13.bridgeObject = pvVar4;
    SVar13.str = pcVar3;
    Swift::String::append(SVar8,SVar13);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar8.bridgeObject = &SUB_e200000000000000;
    SVar8.str = (char *)0x7d20;
    SVar14.bridgeObject = pvVar4;
    SVar14.str = pcVar3;
    Swift::String::append(SVar8,SVar14);
    uVar6 = uStack_38;
    uVar5 = local_40;
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100942c70);
      (*pcVar1)();
    }
  }
  else {
    local_58 = 0;
    local_50 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,param_2);
    _swift_bridgeObjectRelease(local_50);
    local_40 = 0xd000000000000018;
    uStack_38 = 0x8000000100db5270;
    pcVar3 = (char *)0x0;
    pvVar4 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + 0x38,&local_58);
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar11.bridgeObject = pvVar4;
    SVar11.str = pcVar3;
    Swift::String::append(SVar8,SVar11);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar9.bridgeObject = &SUB_e200000000000000;
    SVar9.str = (char *)0x7d20;
    SVar12.bridgeObject = pvVar4;
    SVar12.str = pcVar3;
    Swift::String::append(SVar9,SVar12);
    uVar5 = local_40;
    uVar6 = uStack_38;
  }
  auVar10._8_8_ = uVar6;
  auVar10._0_8_ = uVar5;
  return auVar10;
}



/* Address: 0x100942c70 | FUN_100942c70 */

undefined * FUN_100942c70(_StringGuts param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined *puVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1.unknown < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942d38);
      (*pcVar3)();
    }
    if (*(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942d3c);
      (*pcVar3)();
    }
    puVar8 = *(undefined **)
              (((ulong)param_2 & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20);
    FUN_100947828();
    puVar5 = puVar8;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (puVar5 != (undefined *)0x0) {
      return puVar8;
    }
    Swift::_StringGuts::grow(0x52,param_1);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
    param_1.unknown = puVar8;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript((__int64)param_1.unknown,_Var2);
    _Var4.unknown = param_1.unknown;
    FUN_100947828();
    puVar5 = param_1.unknown;
    _swift_dynamicCastClass();
    if (puVar5 != (undefined *)0x0) {
      return param_1.unknown;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = SUB81(param_1.unknown,0);
  SVar11.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar11.str = pcVar6;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  SVar9.bridgeObject = (void *)0x8000000100c85950;
  SVar9.str = (char *)0xd000000000000013;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  SVar10.bridgeObject = (void *)0xeb0000000020646e;
  SVar10.str = (char *)0x756f662074756220;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_getObjectType();
  SVar11 = Swift::__typeName((bool)uVar7);
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar11,SVar16);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0x2;
  SVar12.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar12,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100942e04);
  (*pcVar3)();
}



/* Address: 0x100942e04 | FUN_100942e04 */

ulong FUN_100942e04(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942eec);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100942ef0);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _Var4.unknown = &DAT_100fec7b8;
    FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = &DAT_100fec7b8;
    FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100db5490;
  SVar8.str = (char *)0xd00000000000001e;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100942fb8);
  (*pcVar3)();
}



/* Address: 0x100942fb8 | FUN_100942fb8 */

ulong FUN_100942fb8(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943088);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10094308c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_100938878();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_100938878();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100db5470;
  SVar8.str = (char *)0xd000000000000014;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100943154);
  (*pcVar3)();
}



/* Address: 0x100943154 | FUN_100943154 */

ulong FUN_100943154(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  char *pcVar5;
  ulong uVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943228);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10094322c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_100960288();
    uVar6 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar6 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar5 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_100960288();
    uVar6 = param_1;
    _swift_dynamicCastClass();
    if (uVar6 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar5 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar5;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0xe900000000000064;
  SVar8.str = (char *)0x61657268544f494e;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009432f4);
  (*pcVar3)();
}



/* Address: 0x1009432f4 | FUN_1009432f4 */

ulong FUN_1009432f4(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009433dc);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009433e0);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _Var4.unknown = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100db4430;
  SVar8.str = (char *)0xd000000000000013;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009434a8);
  (*pcVar3)();
}



/* Address: 0x1009434a8 | FUN_1009434a8 */

void FUN_1009434a8(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *unaff_x20;
  plVar6 = (long *)(lVar5 + 0x10);
  lVar7 = *plVar6;
  if (lVar7 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar5,&DAT_100f159e0);
    if ((param_1 & 1) == 0) {
      puVar2 = &DAT_100fecdb0;
      FUN_1000f7830(&DAT_100fecdb0,&DAT_100c84b38);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -9;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 5;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_100943af4(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      puVar2 = &DAT_100fecdb0;
      FUN_1000f7830(&DAT_100fecdb0,&DAT_100c84b38);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -9;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 5;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1007b7338(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar2 = &DAT_100fecdb0;
    FUN_1000f7830(&DAT_100fecdb0,&DAT_100c84b38);
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    if (0 < lVar4) {
      FUN_100943904(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x100943650 | FUN_100943650 */

void FUN_100943650(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100f1a1d8);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100fecdc0;
      FUN_1000f7830(&DAT_100fecdc0,&DAT_100c85ae0);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x30;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100943bd8(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100fecdc0;
      FUN_1000f7830(&DAT_100fecdc0,&DAT_100c85ae0);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x30;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_1009439dc(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100fecdc0;
    FUN_1000f7830(&DAT_100fecdc0,&DAT_100c85ae0);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_100943814(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100943814 | FUN_100943814 */

void FUN_100943814(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009438e4);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009438e8);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009438ec);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x30,param_4 + lVar5 * 0x30,lVar2,&DAT_100f1a1d8);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009438f0);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,&DAT_100f1a1d8);
  }
  return;
}



/* Address: 0x1009438f0 | FUN_1009438f0 */

void FUN_1009438f0(void)

{
  FUN_100943904();
  return;
}



/* Address: 0x100943904 | FUN_100943904 */

void FUN_100943904(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009439d0);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009439d4);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009439d8);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x20,param_4 + lVar5 * 0x20,lVar2,&DAT_100f159e0);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009439dc);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,&DAT_100f159e0);
  }
  return;
}



/* Address: 0x1009439dc | FUN_1009439dc */

void FUN_1009439dc(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100943ae8);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943aec);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943af0);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x30);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x30) <= param_2) {
      _memmove(param_2,param_4,lVar7 * 0x30);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943af4);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x30);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x30) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 * 0x30);
      return;
    }
  }
  return;
}



/* Address: 0x100943af4 | FUN_100943af4 */

void FUN_100943af4(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100943bcc);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar5 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943bd0);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar5 = lVar7;
    lVar2 = 0;
  }
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943bd4);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x20,lVar5,&DAT_100f159e0);
    lVar5 = lVar5 << 5;
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943bd8);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5,lVar2,lVar6,&DAT_100f159e0);
  }
  return;
}



/* Address: 0x100943bd8 | FUN_100943bd8 */

void FUN_100943bd8(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100943cb8);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar5 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943cbc);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar5 = lVar7;
    lVar2 = 0;
  }
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943cc0);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x30,lVar5,&DAT_100f1a1d8);
    lVar5 = lVar5 * 0x30;
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100943cc4);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5,lVar2,lVar6,&DAT_100f1a1d8);
  }
  return;
}



/* Address: 0x100943cc4 | FUN_100943cc4 */

void FUN_100943cc4(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  lVar4 = param_1[2] + lVar5;
  if (SCARRY8(param_1[2],lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100943d38);
    (*pcVar2)();
  }
  if (lVar5 < 0) {
    if ((lVar4 < 0) && (bVar3 = SCARRY8(lVar4,*param_1), lVar4 = lVar4 + *param_1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943d40);
      (*pcVar2)();
    }
  }
  else {
    lVar5 = *param_1;
    bVar3 = SBORROW8(lVar4,lVar5);
    if ((lVar5 <= lVar4) && (lVar4 = lVar4 - lVar5, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943cec);
      (*pcVar2)();
    }
  }
  puVar1 = (undefined8 *)(param_2 + lVar4 * 0x20);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1[2] = param_5;
  *(undefined1 *)(puVar1 + 3) = param_6;
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    _swift_retain(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100943d3c);
  (*pcVar2)();
}



/* Address: 0x100943d40 | FUN_100943d40 */

void FUN_100943d40(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = param_1[1];
  lVar4 = param_1[2] + lVar1;
  if (SCARRY8(param_1[2],lVar1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100943dc4);
    (*pcVar2)();
  }
  if (lVar1 < 0) {
    if ((lVar4 < 0) && (bVar3 = SCARRY8(lVar4,*param_1), lVar4 = lVar4 + *param_1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943dcc);
      (*pcVar2)();
    }
  }
  else {
    lVar5 = *param_1;
    bVar3 = SBORROW8(lVar4,lVar5);
    if ((lVar5 <= lVar4) && (lVar4 = lVar4 - lVar5, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100943d80);
      (*pcVar2)();
    }
  }
  FUN_100949c84(param_3,param_2 + lVar4 * 0x30);
  if (!SCARRY8(lVar1,1)) {
    param_1[1] = lVar1 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100943dc8);
  (*pcVar2)();
}



/* Address: 0x100943dcc | FUN_100943dcc */

undefined * FUN_100943dcc(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  size_t sVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  long *plVar15;
  long lVar16;
  ulong uVar17;
  long *plVar18;
  long *plVar19;
  long lVar20;
  undefined1 auStack_1b0 [80];
  long local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long local_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  undefined1 local_120;
  long local_110;
  long local_108;
  long lStack_100;
  long local_f8;
  long lStack_f0;
  long local_e8;
  long lStack_e0;
  long local_d8;
  long lStack_d0;
  undefined1 local_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  
  lVar4 = *param_1;
  lVar5 = param_1[1];
  uVar10 = (ulong)*(uint *)(param_1 + 8);
  uVar3 = *(uint *)((long)param_1 + 0x44);
  uVar17 = param_1[9];
  lStack_a8 = param_1[3];
  lStack_b0 = param_1[2];
  lStack_98 = param_1[5];
  local_a0 = param_1[4];
  lStack_88 = param_1[7];
  lStack_90 = param_1[6];
  lStack_78 = param_1[9];
  local_80 = param_1[8];
  lStack_b8 = param_1[1];
  local_c0 = *param_1;
  FUN_100949ce8(param_1,&local_110);
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar17 >> 0x38 != 2) {
    lVar16 = 0;
    uVar11 = uVar17 & 0xffffffff;
    plVar15 = (long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    uVar12 = *(ulong *)(lVar4 + 0x10);
    if ((uVar3 >> 0x18 & 1) == 0) goto LAB_100943ec0;
    do {
      uVar13 = uVar12;
      if ((uVar17 & 0x100000000000000) != 0) {
        uVar13 = 0;
      }
      lVar20 = (uVar11 - uVar10) + uVar13;
      while( true ) {
        if (lVar20 < 0) goto LAB_100943e3c;
        if (uVar12 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440e0);
          (*pcVar6)();
        }
        plVar18 = (long *)(lVar4 + 0x20 + uVar10 * 0x50);
        plVar19 = plVar18 + 1;
        lVar20 = *plVar18;
        if (lVar20 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440f8);
          (*pcVar6)();
        }
        lStack_138 = plVar18[6];
        local_140 = plVar18[5];
        lStack_128 = plVar18[8];
        lStack_130 = plVar18[7];
        local_120 = (undefined1)plVar18[9];
        lStack_158 = plVar18[2];
        local_160 = *plVar19;
        lStack_148 = plVar18[4];
        lStack_150 = plVar18[3];
        uVar10 = uVar12 + 0x1ffffffff & uVar10 + 1;
        if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440e4);
          (*pcVar6)();
        }
        local_80 = CONCAT17(lVar5 <= (long)uVar10,CONCAT16(0xff,CONCAT24(0xffff,(int)uVar10)));
        if (lVar16 == 0) {
          uVar12 = *(ulong *)(puVar14 + 0x18);
          if ((long)((uVar12 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440ec);
            (*pcVar6)();
          }
          uVar13 = uVar12 & 0xfffffffffffffffe;
          if ((long)uVar12 < 2) {
            uVar13 = 1;
          }
          puVar7 = &DAT_100feda98;
          FUN_1000f7830(&DAT_100feda98,&DAT_100c85b08);
          _swift_allocObject();
          lStack_100 = plVar18[2];
          local_108 = *plVar19;
          lStack_e0 = plVar18[6];
          local_e8 = plVar18[5];
          lStack_d0 = plVar18[8];
          local_d8 = plVar18[7];
          local_c8 = (undefined1)plVar18[9];
          lStack_f0 = plVar18[4];
          local_f8 = plVar18[3];
          local_110 = lVar20;
          FUN_100901d00(&local_110,auStack_1b0);
          puVar8 = puVar7;
          _malloc_size();
          *(ulong *)(puVar7 + 0x10) = uVar13;
          *(long *)(puVar7 + 0x18) = ((long)(puVar8 + -0x20) / 0x50) * 2;
          puVar1 = puVar7 + 0x20;
          sVar9 = (*(ulong *)(puVar14 + 0x18) >> 1) * 0x50;
          lVar16 = ((long)(puVar8 + -0x20) / 0x50 & 0x7fffffffffffffffU) -
                   (*(ulong *)(puVar14 + 0x18) >> 1);
          plVar15 = (long *)(puVar1 + sVar9);
          if (*(long *)(puVar14 + 0x10) != 0) {
            if ((puVar7 != puVar14) || (puVar14 + 0x20 + sVar9 <= puVar1)) {
              _memmove(puVar1,puVar14 + 0x20,sVar9);
            }
            *(undefined8 *)(puVar14 + 0x10) = 0;
          }
          _swift_release(puVar14);
          puVar14 = puVar7;
        }
        else {
          lStack_100 = plVar18[2];
          local_108 = *plVar19;
          lStack_f0 = plVar18[4];
          local_f8 = plVar18[3];
          lStack_e0 = plVar18[6];
          local_e8 = plVar18[5];
          lStack_d0 = plVar18[8];
          local_d8 = plVar18[7];
          local_c8 = (undefined1)plVar18[9];
          local_110 = lVar20;
          FUN_100901d00(&local_110,auStack_1b0);
        }
        if (SBORROW8(lVar16,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440e8);
          (*pcVar6)();
        }
        lVar16 = lVar16 + -1;
        *plVar15 = lVar20;
        *(undefined1 *)(plVar15 + 9) = local_120;
        plVar15[2] = lStack_158;
        plVar15[1] = local_160;
        plVar15[8] = lStack_128;
        plVar15[7] = lStack_130;
        plVar15[6] = lStack_138;
        plVar15[5] = local_140;
        plVar15[4] = lStack_148;
        plVar15[3] = lStack_150;
        plVar15 = plVar15 + 10;
        uVar12 = *(ulong *)(lVar4 + 0x10);
        if (lVar5 <= (long)uVar10) break;
LAB_100943ec0:
        if ((uVar17 >> 0x38 & 1) == 0) {
          lVar20 = uVar11 - uVar10;
        }
        else {
          lVar2 = (uVar10 - uVar11) + uVar12;
          lVar20 = -lVar2;
          if (SBORROW8(0,lVar2)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440f0);
            (*pcVar6)();
          }
        }
      }
    } while( true );
  }
  lVar16 = 0;
LAB_100943e3c:
  FUN_100934080(&local_c0);
  if (1 < *(ulong *)(puVar14 + 0x18)) {
    uVar10 = *(ulong *)(puVar14 + 0x18) >> 1;
    if (SBORROW8(uVar10,lVar16)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1009440f4);
      (*pcVar6)();
    }
    *(ulong *)(puVar14 + 0x10) = uVar10 - lVar16;
  }
  return puVar14;
}



/* Address: 0x1009440f8 | FUN_1009440f8 */

undefined * FUN_1009440f8(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  uint uStack_c8;
  undefined4 uStack_c4;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_68;
  
  local_68 = param_1;
  _swift_bridgeObjectRetain();
  FUN_100944484(&local_f0,0);
  if ((~uStack_c8 & 0xff) == 0) {
    lVar9 = 0;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar9 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar10 = (undefined8 *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      uStack_a8 = uStack_e8;
      local_b0 = local_f0;
      uStack_98 = uStack_d8;
      uStack_a0 = uStack_e0;
      uStack_88 = CONCAT44(uStack_c4,uStack_c8);
      local_90 = local_d0;
      uStack_78 = uStack_b8;
      uStack_80 = uStack_c0;
      puVar4 = puVar8;
      if (lVar9 == 0) {
        uVar6 = *(ulong *)(puVar8 + 0x18);
        if ((long)((uVar6 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009442c4);
          (*pcVar2)();
        }
        uVar7 = uVar6 & 0xfffffffffffffffe;
        if ((long)uVar6 < 2) {
          uVar7 = 1;
        }
        puVar4 = &DAT_100fec540;
        FUN_1000f7830(&DAT_100fec540,&DAT_100c84060);
        _swift_allocObject();
        puVar5 = puVar4;
        _malloc_size();
        puVar1 = puVar5 + 0x1f;
        if (0x1f < (long)puVar5) {
          puVar1 = puVar5 + -0x20;
        }
        *(ulong *)(puVar4 + 0x10) = uVar7;
        *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 6) << 1;
        puVar5 = puVar4 + 0x20;
        uVar6 = *(ulong *)(puVar8 + 0x18) >> 1;
        if (*(long *)(puVar8 + 0x10) != 0) {
          if ((puVar4 != puVar8) || (puVar8 + 0x20 + uVar6 * 0x40 <= puVar5)) {
            _memmove(puVar5,puVar8 + 0x20,uVar6 << 6);
          }
          *(undefined8 *)(puVar8 + 0x10) = 0;
        }
        puVar10 = (undefined8 *)(puVar5 + uVar6 * 0x40);
        lVar9 = ((long)puVar1 >> 6 & 0x7fffffffffffffffU) - uVar6;
        _swift_release(puVar8);
      }
      bVar3 = SBORROW8(lVar9,1);
      lVar9 = lVar9 + -1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009442c0);
        (*pcVar2)();
      }
      puVar10[5] = uStack_88;
      puVar10[4] = local_90;
      puVar10[7] = uStack_78;
      puVar10[6] = uStack_80;
      puVar10[1] = uStack_a8;
      *puVar10 = local_b0;
      puVar10[3] = uStack_98;
      puVar10[2] = uStack_a0;
      FUN_100944484(&local_f0,0);
      puVar8 = puVar4;
      puVar10 = puVar10 + 8;
    } while ((~uStack_c8 & 0xff) != 0);
  }
  _swift_bridgeObjectRelease(local_68);
  FUN_1000fb4c4(&local_f0,&DAT_100feda70,&DAT_100c85ac8);
  if (1 < *(ulong *)(puVar4 + 0x18)) {
    uVar6 = *(ulong *)(puVar4 + 0x18) >> 1;
    if (SBORROW8(uVar6,lVar9)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009442c8);
      (*pcVar2)();
    }
    *(ulong *)(puVar4 + 0x10) = uVar6 - lVar9;
  }
  return puVar4;
}



/* Address: 0x1009442c8 | FUN_1009442c8 */

void FUN_1009442c8(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  undefined1 auStack_c0 [48];
  ulong local_90;
  ulong local_88;
  undefined1 auStack_80 [48];
  ulong local_50;
  ulong local_48;
  
  uVar6 = *unaff_x20;
  uVar7 = *(ulong *)(uVar6 + 0x10);
  if (uVar7 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0xff;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    if (uVar7 <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100944464);
      (*pcVar3)();
    }
    lVar1 = uVar6 + 0x20;
    lVar5 = lVar1 + param_2 * 0x40;
    FUN_1009474f8(lVar5,param_1);
    if ((uVar7 != 1) &&
       (lVar2 = lVar1 + uVar7 * 0x40, *(long *)(lVar5 + 0x30) != *(long *)(lVar2 + -0x10))) {
      FUN_1009474f8(lVar5,auStack_80);
      FUN_1009474f8(lVar2 + -0x40,auStack_c0);
      if ((long)(local_88 | local_48) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100944468);
        (*pcVar3)();
      }
      bVar4 = local_50 < local_90;
      if (local_48 != local_88) {
        bVar4 = local_48 < local_88;
      }
      FUN_100947534(auStack_c0);
      FUN_100947534(auStack_80);
      lVar5 = *(long *)(uVar6 + 0x10);
      if (bVar4) {
        if (lVar5 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10094446c);
          (*pcVar3)();
        }
        FUN_1009474f8(lVar1 + lVar5 * 0x40 + -0x40,auStack_80);
        uVar7 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar7 & 1) == 0) {
          FUN_100932318();
        }
        if (param_2 < *(ulong *)(uVar6 + 0x10)) {
          FUN_10094848c(auStack_80,uVar6 + param_2 * 0x40 + 0x20);
          *unaff_x20 = uVar6;
          FUN_10093e3ec(auStack_80,FUN_100932318);
          FUN_100947534(auStack_80);
          FUN_100944abc(param_2);
          return;
        }
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100944484);
        (*pcVar3)();
      }
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100944470);
        (*pcVar3)();
      }
      FUN_1009474f8(lVar1 + lVar5 * 0x40 + -0x40,auStack_80);
      FUN_100944648(param_2,auStack_80);
      FUN_100947534(auStack_80);
    }
    FUN_10093e3ec(auStack_80,FUN_100932318);
    FUN_100947534(auStack_80);
  }
  return;
}



/* Address: 0x100944484 | FUN_100944484 */

void FUN_100944484(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_c0 [48];
  ulong local_90;
  ulong local_88;
  undefined1 auStack_80 [48];
  ulong local_50;
  ulong local_48;
  
  puVar5 = auStack_c0;
  uVar6 = *unaff_x20;
  uVar7 = *(ulong *)(uVar6 + 0x10);
  if (uVar7 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[4] = 0;
    param_1[5] = 0xff;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  else {
    if (uVar7 <= param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100944628);
      (*pcVar4)();
    }
    lVar1 = uVar6 + 0x20;
    lVar2 = lVar1 + param_2 * 0x40;
    FUN_1009474f8(lVar2,param_1);
    if ((uVar7 != 1) &&
       (lVar3 = lVar1 + uVar7 * 0x40, *(long *)(lVar2 + 0x30) != *(long *)(lVar3 + -0x10))) {
      FUN_1009474f8(lVar2,auStack_80);
      FUN_1009474f8(lVar3 + -0x40,auStack_c0);
      if ((long)(local_88 | local_48) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10094462c);
        (*pcVar4)();
      }
      if (local_48 == local_88) {
        FUN_100947534(auStack_80);
        uVar7 = local_50;
        uVar8 = local_90;
      }
      else {
        FUN_100947534(auStack_c0);
        puVar5 = auStack_80;
        uVar7 = local_48;
        uVar8 = local_88;
      }
      FUN_100947534(puVar5);
      if (uVar7 < uVar8) {
        if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100944630);
          (*pcVar4)();
        }
        FUN_1009474f8(lVar1 + *(long *)(uVar6 + 0x10) * 0x40 + -0x40,auStack_80);
        uVar7 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar7 & 1) == 0) {
          FUN_100932318();
        }
        if (param_2 < *(ulong *)(uVar6 + 0x10)) {
          FUN_10094848c(auStack_80,uVar6 + param_2 * 0x40 + 0x20);
          *unaff_x20 = uVar6;
          FUN_10093e3ec(auStack_80,FUN_100932318);
          FUN_100947534(auStack_80);
          FUN_100944c54(param_2);
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100944648);
        (*pcVar4)();
      }
      if (*(long *)(uVar6 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100944634);
        (*pcVar4)();
      }
      FUN_1009474f8(lVar1 + *(long *)(uVar6 + 0x10) * 0x40 + -0x40,auStack_80);
      FUN_10094487c(param_2,auStack_80);
      FUN_100947534(auStack_80);
    }
    FUN_10093e3ec(auStack_80,FUN_100932318);
    FUN_100947534(auStack_80);
  }
  return;
}



/* Address: 0x100944648 | FUN_100944648 */

void FUN_100944648(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  String SVar10;
  undefined1 auStack_e0 [48];
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [48];
  ulong local_70;
  ulong local_68;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100944814);
    (*pcVar4)();
  }
  uVar6 = *unaff_x20;
  if (*(ulong *)(uVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100944818);
    (*pcVar4)();
  }
  FUN_1009474f8(uVar6 + param_1 * 0x40 + 0x20,auStack_a0);
  uVar7 = *(ulong *)(param_2 + 0x38);
  if ((long)(uVar7 | local_68) < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10094481c);
    (*pcVar4)();
  }
  uVar8 = local_68;
  if (local_68 == uVar7) {
    uVar7 = *(ulong *)(param_2 + 0x30);
    uVar8 = local_70;
  }
  FUN_100947534(auStack_a0);
  if (uVar8 < uVar7) {
    SVar10.bridgeObject = (void *)0x2;
    SVar10.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar10,(StaticString)0xd000000000000033,0x8000000100dafbb0,
               0xdafbb0);
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10094487c);
    (*pcVar4)();
  }
  uVar7 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_100932318();
  }
  if (*(ulong *)(uVar6 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100944830);
    (*pcVar4)();
  }
  lVar1 = uVar6 + 0x20;
  FUN_1009484c8(param_2,lVar1 + param_1 * 0x40);
  if (param_1 != 0) {
    do {
      uVar7 = *(ulong *)(uVar6 + 0x10);
      if (uVar7 <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100944800);
        (*pcVar4)();
      }
      lVar2 = lVar1 + param_1 * 0x40;
      FUN_1009474f8(lVar2,auStack_a0);
      uVar8 = param_1 - 1;
      uVar9 = uVar8 >> 1;
      if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100944804);
        (*pcVar4)();
      }
      lVar3 = lVar1 + uVar9 * 0x40;
      FUN_1009474f8(lVar3,auStack_e0);
      if ((long)(local_a8 | local_68) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100944808);
        (*pcVar4)();
      }
      bVar5 = local_70 < local_b0;
      if (local_68 != local_a8) {
        bVar5 = local_68 < local_a8;
      }
      FUN_100947534(auStack_e0);
      FUN_100947534(auStack_a0);
      if (!bVar5) break;
      if (param_1 != uVar9) {
        uVar7 = *(ulong *)(uVar6 + 0x10);
        if (uVar7 <= param_1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10094480c);
          (*pcVar4)();
        }
        FUN_1009474f8(lVar2,auStack_a0);
        if (uVar7 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100944810);
          (*pcVar4)();
        }
        FUN_1009474f8(lVar3,auStack_e0);
        FUN_10094848c(auStack_e0,lVar2);
        if (*(ulong *)(uVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009447fc);
          (*pcVar4)();
        }
        FUN_10094848c(auStack_a0,lVar3);
      }
      param_1 = uVar9;
    } while (1 < uVar8);
  }
  *unaff_x20 = uVar6;
  return;
}



/* Address: 0x10094487c | FUN_10094487c */

void FUN_10094487c(ulong param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  String SVar12;
  undefined1 auStack_e0 [48];
  ulong local_b0;
  ulong local_a8;
  undefined1 auStack_a0 [48];
  ulong local_70;
  ulong local_68;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a54);
    (*pcVar5)();
  }
  uVar7 = *unaff_x20;
  if (*(ulong *)(uVar7 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a58);
    (*pcVar5)();
  }
  FUN_1009474f8(uVar7 + param_1 * 0x40 + 0x20,auStack_a0);
  uVar8 = *(ulong *)(param_2 + 0x38);
  if ((long)(uVar8 | local_68) < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a5c);
    (*pcVar5)();
  }
  uVar9 = local_68;
  if (local_68 == uVar8) {
    uVar8 = *(ulong *)(param_2 + 0x30);
    uVar9 = local_70;
  }
  FUN_100947534(auStack_a0);
  if (uVar9 < uVar8) {
    SVar12.bridgeObject = (void *)0x2;
    SVar12.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar12,(StaticString)0xd000000000000033,0x8000000100dafbb0,
               0xdafbb0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100944abc);
    (*pcVar5)();
  }
  uVar8 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar8 & 1) == 0) {
    FUN_100932318();
  }
  if (*(ulong *)(uVar7 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a70);
    (*pcVar5)();
  }
  lVar1 = uVar7 + 0x20;
  FUN_1009484c8(param_2,lVar1 + param_1 * 0x40);
  *unaff_x20 = uVar7;
  if (param_1 != 0) {
    do {
      uVar8 = *(ulong *)(uVar7 + 0x10);
      if (uVar8 <= param_1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a40);
        (*pcVar5)();
      }
      lVar2 = lVar1 + param_1 * 0x40;
      FUN_1009474f8(lVar2,auStack_a0);
      uVar9 = param_1 - 1;
      uVar10 = uVar9 >> 1;
      if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a44);
        (*pcVar5)();
      }
      lVar3 = lVar1 + uVar10 * 0x40;
      FUN_1009474f8(lVar3,auStack_e0);
      uVar11 = local_68;
      uVar4 = local_70;
      uVar8 = local_a8;
      if ((long)(local_a8 | local_68) < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a48);
        (*pcVar5)();
      }
      if (local_68 == local_a8) {
        FUN_100947534(auStack_a0);
        puVar6 = auStack_e0;
        uVar11 = uVar4;
        uVar8 = local_b0;
      }
      else {
        FUN_100947534(auStack_e0);
        puVar6 = auStack_a0;
      }
      FUN_100947534(puVar6);
      if (uVar8 <= uVar11) break;
      if (param_1 != uVar10) {
        uVar8 = *(ulong *)(uVar7 + 0x10);
        if ((long)uVar8 <= (long)param_1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a4c);
          (*pcVar5)();
        }
        FUN_1009474f8(lVar2,auStack_a0);
        if (uVar8 <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a50);
          (*pcVar5)();
        }
        FUN_1009474f8(lVar3,auStack_e0);
        FUN_10094848c(auStack_e0,lVar2);
        if (*(ulong *)(uVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100944a18);
          (*pcVar5)();
        }
        FUN_10094848c(auStack_a0,lVar3);
      }
      param_1 = uVar10;
    } while (1 < uVar9);
    *unaff_x20 = uVar7;
  }
  return;
}



/* Address: 0x100944abc | FUN_100944abc */

void FUN_100944abc(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  long *unaff_x20;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auStack_d0 [48];
  ulong local_a0;
  ulong local_98;
  undefined1 auStack_90 [48];
  ulong local_60;
  ulong local_58;
  
  if ((long)(param_1 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c38);
    (*pcVar2)();
  }
  uVar1 = param_1 * 2 + 2;
  if (SCARRY8(param_1 * 2,2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c3c);
    (*pcVar2)();
  }
  uVar5 = param_1 << 1 | 1;
  lVar6 = *unaff_x20;
  uVar7 = *(ulong *)(lVar6 + 0x10);
  uVar4 = param_1;
  if ((long)uVar5 < (long)uVar7) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c40);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar6 + 0x20 + uVar5 * 0x40,auStack_90);
    if (uVar7 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c44);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar6 + 0x20 + param_1 * 0x40,auStack_d0);
    if ((long)(local_98 | local_58) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c4c);
      (*pcVar2)();
    }
    bVar3 = local_60 < local_a0;
    if (local_58 != local_98) {
      bVar3 = local_58 < local_98;
    }
    FUN_100947534(auStack_d0);
    FUN_100947534(auStack_90);
    uVar4 = uVar5;
    if (!bVar3) {
      uVar4 = param_1;
    }
    uVar7 = *(ulong *)(lVar6 + 0x10);
  }
  uVar5 = uVar4;
  if ((long)uVar1 < (long)uVar7) {
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c48);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar6 + 0x20 + uVar1 * 0x40,auStack_90);
    if (uVar7 <= uVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c50);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar6 + 0x20 + uVar4 * 0x40,auStack_d0);
    if ((long)(local_98 | local_58) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944c54);
      (*pcVar2)();
    }
    bVar3 = local_60 < local_a0;
    if (local_58 != local_98) {
      bVar3 = local_58 < local_98;
    }
    FUN_100947534(auStack_d0);
    FUN_100947534(auStack_90);
    uVar5 = uVar1;
    if (!bVar3) {
      uVar5 = uVar4;
    }
  }
  if (uVar5 != param_1) {
    FUN_100944e04(param_1,uVar5,FUN_100932318);
    FUN_100944abc(uVar5);
  }
  return;
}



/* Address: 0x100944c54 | FUN_100944c54 */

void FUN_100944c54(ulong param_1)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_d0 [48];
  ulong local_a0;
  ulong local_98;
  undefined1 auStack_90 [48];
  ulong local_60;
  ulong local_58;
  
  puVar3 = auStack_d0;
  puVar4 = auStack_d0;
  if ((long)(param_1 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100944de8);
    (*pcVar2)();
  }
  uVar1 = param_1 * 2 + 2;
  if (SCARRY8(param_1 * 2,2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100944dec);
    (*pcVar2)();
  }
  uVar7 = param_1 << 1 | 1;
  lVar8 = *unaff_x20;
  uVar9 = *(ulong *)(lVar8 + 0x10);
  uVar6 = param_1;
  if ((long)uVar7 < (long)uVar9) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944df0);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar8 + 0x20 + uVar7 * 0x40,auStack_90);
    if (uVar9 <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944df4);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar8 + 0x20 + param_1 * 0x40,auStack_d0);
    uVar5 = local_58;
    uVar6 = local_60;
    uVar9 = local_98;
    if ((long)(local_98 | local_58) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944dfc);
      (*pcVar2)();
    }
    if (local_58 == local_98) {
      FUN_100947534(auStack_90);
      uVar5 = uVar6;
      uVar9 = local_a0;
    }
    else {
      FUN_100947534(auStack_d0);
      puVar3 = auStack_90;
    }
    FUN_100947534(puVar3);
    uVar6 = uVar7;
    if (uVar9 <= uVar5) {
      uVar6 = param_1;
    }
    uVar9 = *(ulong *)(lVar8 + 0x10);
  }
  uVar7 = uVar6;
  if ((long)uVar1 < (long)uVar9) {
    if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944df8);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar8 + 0x20 + uVar1 * 0x40,auStack_90);
    if (uVar9 <= uVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944e00);
      (*pcVar2)();
    }
    FUN_1009474f8(lVar8 + 0x20 + uVar6 * 0x40,auStack_d0);
    if ((long)(local_98 | local_58) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100944e04);
      (*pcVar2)();
    }
    if (local_58 == local_98) {
      FUN_100947534(auStack_90);
      uVar9 = local_60;
      uVar5 = local_a0;
    }
    else {
      FUN_100947534(auStack_d0);
      puVar4 = auStack_90;
      uVar9 = local_58;
      uVar5 = local_98;
    }
    FUN_100947534(puVar4);
    uVar7 = uVar1;
    if (uVar5 <= uVar9) {
      uVar7 = uVar6;
    }
  }
  if (uVar7 != param_1) {
    FUN_100944e04(param_1,uVar7,FUN_100932318);
    FUN_100944c54(uVar7);
  }
  return;
}



/* Address: 0x100944e04 | FUN_100944e04 */

void FUN_100944e04(ulong param_1,ulong param_2,code *param_3)

{
  code *pcVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  
  if (param_1 != param_2) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100944ed0);
      (*pcVar1)();
    }
    uVar2 = *unaff_x20;
    uVar3 = *(ulong *)(uVar2 + 0x10);
    if (uVar3 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100944ed4);
      (*pcVar1)();
    }
    FUN_1009474f8(uVar2 + 0x20 + param_1 * 0x40,auStack_90);
    if (uVar3 <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100944ed8);
      (*pcVar1)();
    }
    FUN_1009474f8(uVar2 + 0x20 + param_2 * 0x40,auStack_d0);
    uVar3 = uVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar3 & 1) == 0) {
      (*param_3)();
    }
    if (*(ulong *)(uVar2 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100944eec);
      (*pcVar1)();
    }
    FUN_10094848c(auStack_d0,uVar2 + 0x20 + param_1 * 0x40);
    if (*(ulong *)(uVar2 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100944ef0);
      (*pcVar1)();
    }
    FUN_10094848c(auStack_90,uVar2 + 0x20 + param_2 * 0x40);
    *unaff_x20 = uVar2;
  }
  return;
}



/* Address: 0x100944ef0 | FUN_100944ef0 */

void FUN_100944ef0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_e0 [6];
  ulong local_b0;
  ulong local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong local_70;
  ulong local_68;
  
  uVar7 = *unaff_x20;
  uVar9 = *(ulong *)(uVar7 + 0x10);
  FUN_1009474f8(param_1,&local_a0);
  uVar8 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar7;
  if ((uVar8 & 1) == 0) {
    uVar10 = 0;
    thunk_FUN_100903570(0,uVar9 + 1,1,uVar7);
  }
  uVar8 = *(ulong *)(uVar10 + 0x10);
  uVar7 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar8) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    thunk_FUN_100903570(uVar7,uVar8 + 1,1,uVar10);
  }
  *(ulong *)(uVar7 + 0x10) = uVar8 + 1;
  lVar1 = uVar7 + 0x20;
  puVar6 = (undefined8 *)(lVar1 + uVar8 * 0x40);
  puVar6[5] = uStack_78;
  puVar6[4] = local_80;
  puVar6[7] = local_68;
  puVar6[6] = local_70;
  puVar6[1] = uStack_98;
  *puVar6 = local_a0;
  puVar6[3] = uStack_88;
  puVar6[2] = uStack_90;
  *unaff_x20 = uVar7;
  if (uVar9 != 0) {
    do {
      uVar8 = *(ulong *)(uVar7 + 0x10);
      if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100945074);
        (*pcVar5)();
      }
      lVar2 = lVar1 + uVar9 * 0x40;
      FUN_1009474f8(lVar2,&local_a0);
      uVar10 = uVar9 - 1;
      uVar11 = uVar10 >> 1;
      if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100945078);
        (*pcVar5)();
      }
      lVar3 = lVar1 + uVar11 * 0x40;
      FUN_1009474f8(lVar3,auStack_e0);
      uVar12 = local_68;
      uVar4 = local_70;
      uVar8 = local_a8;
      if ((long)(local_a8 | local_68) < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10094507c);
        (*pcVar5)();
      }
      if (local_68 == local_a8) {
        FUN_100947534(&local_a0);
        puVar6 = auStack_e0;
        uVar12 = uVar4;
        uVar8 = local_b0;
      }
      else {
        FUN_100947534(auStack_e0);
        puVar6 = &local_a0;
      }
      FUN_100947534(puVar6);
      if (uVar8 <= uVar12) {
        return;
      }
      if (uVar9 != uVar11) {
        uVar8 = *(ulong *)(uVar7 + 0x10);
        if (uVar8 <= uVar9) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100945080);
          (*pcVar5)();
        }
        FUN_1009474f8(lVar2,&local_a0);
        if (uVar8 <= uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100945084);
          (*pcVar5)();
        }
        FUN_1009474f8(lVar3,auStack_e0);
        FUN_10094848c(auStack_e0,lVar2);
        if (*(ulong *)(uVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100945070);
          (*pcVar5)();
        }
        FUN_10094848c(&local_a0,lVar3);
        *unaff_x20 = uVar7;
      }
      uVar9 = uVar11;
    } while (1 < uVar10);
  }
  return;
}



/* Address: 0x1009450c0 | FUN_1009450c0 */

void FUN_1009450c0(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = param_1[1];
  if (0 < lVar6) {
    lVar5 = param_1[2];
    lVar2 = *param_1 - lVar5;
    if (SBORROW8(*param_1,lVar5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100945194);
      (*pcVar3)();
    }
    if (lVar2 < lVar6) {
      lVar8 = lVar6 - lVar2;
      lVar4 = lVar2;
      lVar7 = param_2;
      if (SBORROW8(lVar6,lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100945198);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = 0;
      lVar4 = lVar6;
      lVar7 = 0;
    }
    lVar1 = 0;
    if (lVar2 < lVar6 && lVar8 != 0) {
      lVar1 = lVar7;
    }
    if (param_2 != 0) {
      _swift_arrayDestroy(param_2 + lVar5 * 0x30,lVar4,&DAT_100f1a1d8);
    }
    if (lVar1 != 0 && (lVar2 < lVar6 && lVar8 != 0)) {
      _swift_arrayDestroy(lVar1,lVar8,&DAT_100f1a1d8);
    }
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Address: 0x100945198 | FUN_100945198 */

void FUN_100945198(undefined8 param_1,char param_2,ulong param_3,long param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 unaff_x19;
  code *pcVar4;
  
  bVar1 = param_2 == '\x01';
  if (bVar1) {
    _swift_errorRetain();
    unaff_x19 = param_1;
  }
  _swift_getObjectType();
  uVar2 = param_3;
  (**(code **)(param_4 + 0x10))();
  if ((uVar2 & 1) == 0) {
    puVar3 = &DAT_100f1a840;
    _swift_allocObject(&DAT_100f1a840,0x31,7);
    *(undefined8 *)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    *(undefined8 *)(puVar3 + 0x20) = param_7;
    *(undefined8 *)(puVar3 + 0x28) = unaff_x19;
    puVar3[0x30] = bVar1;
    pcVar4 = *(code **)(param_4 + 0x18);
    _swift_retain(param_5);
    _swift_retain(param_6);
    FUN_100308524(unaff_x19,bVar1);
    (*pcVar4)(thunk_FUN_1009486ec,puVar3,param_3,param_4);
    FUN_1002ec258(unaff_x19,bVar1);
    _swift_release(puVar3);
    return;
  }
  FUN_100949a98(unaff_x19,bVar1,param_5,param_6);
  FUN_1002ec258(unaff_x19,bVar1);
  return;
}



/* Address: 0x1009452c4 | FUN_1009452c4 */

void FUN_1009452c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008d06a0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f1a4a8;
  _swift_allocObject(&DAT_100f1a4a8,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(FUN_1008d418c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009453bc | FUN_1009453bc */

/* WARNING: Removing unreachable block (ram,0x000100945bc0) */
/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1009453bc(long param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  code **ppcVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined **ppuVar10;
  _StringGuts _Var11;
  undefined1 *puVar12;
  char *pcVar13;
  void *pvVar14;
  undefined *puVar15;
  undefined8 uVar16;
  ulong uVar17;
  code *pcVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 *puVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined1 auStack_108 [24];
  code *local_f0;
  undefined *local_e8;
  undefined1 local_c8;
  undefined1 local_b0;
  undefined *local_a8;
  undefined1 local_98 [24];
  undefined1 auStack_80 [32];
  
  _Var11.unknown = auStack_80;
  pcVar13 = (char *)0x0;
  pvVar14 = (void *)0x0;
  _swift_beginAccess(param_2 + 0x10);
  if (*(char *)(param_2 + 0x10) != '\0') {
    local_f0 = (code *)0x0;
    local_e8 = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x27,_Var11);
    SVar29.bridgeObject = (void *)0x8000000100db5290;
    SVar29.str = (char *)0xd000000000000024;
    SVar31.bridgeObject = pvVar14;
    SVar31.str = pcVar13;
    Swift::String::append(SVar29,SVar31);
    local_98[0] = *(undefined1 *)(param_2 + 0x10);
    pcVar13 = "\x01\x02";
    puVar3 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (local_98,&local_f0,&DAT_100f1aaf8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar30.bridgeObject = (void *)0xe100000000000000;
    SVar30.str = (char *)0x2e;
    puVar23 = (undefined8 *)0x2e;
    SVar32.bridgeObject = puVar3;
    SVar32.str = pcVar13;
    Swift::String::append(SVar30,SVar32);
    puVar15 = local_e8;
    pcVar18 = local_f0;
    FUN_1008d5300();
    puVar3 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar23,0,0);
    *puVar23 = pcVar18;
    puVar23[1] = puVar15;
    *(undefined4 *)(puVar23 + 2) = 9;
    puVar15 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(long *)(puVar15 + 0x20) = param_1;
    *(undefined ***)(puVar15 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined **)(puVar15 + 0x10) = puVar3;
    puVar15[0x18] = 1;
    *(undefined8 *)(puVar15 + 0x38) = 0;
    *(undefined8 *)(puVar15 + 0x40) = 0;
    *(undefined8 *)(puVar15 + 0x30) = 0;
    _swift_retain(param_1);
    return puVar15;
  }
  _swift_beginAccess(param_2 + 0x18,local_98,0,0);
  puVar15 = *(undefined **)(param_2 + 0x18);
  puVar3 = puVar15;
  _swift_bridgeObjectRetain();
  FUN_10093da74();
  _swift_bridgeObjectRelease(puVar15);
  if ((ulong)puVar3 >> 0x3e == 0) {
    uVar19 = *(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    uVar19 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (uVar19 == 0) {
    _swift_bridgeObjectRelease(puVar3);
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_a8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10090da64(0,uVar19 & ((long)uVar19 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100945c4c);
      (*pcVar18)();
    }
    uVar26 = 0;
    do {
      puVar15 = local_a8;
      if (((ulong)puVar3 & 0xc000000000000001) == 0) {
        if (*(long *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10) <= (long)uVar26) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100945be8);
          (*pcVar18)();
        }
        uVar27 = *(ulong *)(puVar3 + uVar26 * 8 + 0x20);
        _swift_retain(uVar27);
      }
      else {
        uVar27 = uVar26;
        FUN_1009432f4();
      }
      puVar21 = &DAT_100fec0a0;
      FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
      _swift_allocObject();
      uVar16 = *(undefined8 *)(uVar27 + 0x20);
      *(undefined8 *)(puVar21 + 0x28) = *(undefined8 *)(uVar27 + 0x28);
      *(undefined8 *)(puVar21 + 0x20) = uVar16;
      puVar23 = (undefined8 *)(puVar21 + 0x10);
      *puVar23 = 0;
      puVar21[0x18] = 0xff;
      puVar28 = (undefined8 *)(puVar21 + 0x30);
      *puVar28 = 0;
      *(undefined8 *)(puVar21 + 0x38) = 0;
      *(undefined8 *)(puVar21 + 0x40) = 0;
      puVar25 = &DAT_100f1a660;
      _swift_allocObject(&DAT_100f1a660,0x30,7);
      *(ulong *)(puVar25 + 0x10) = uVar27;
      *(undefined **)(puVar25 + 0x18) = puVar21;
      *(code **)(puVar25 + 0x20) = FUN_10094b338;
      *(undefined8 *)(puVar25 + 0x28) = 0;
      uVar17 = *(ulong *)(uVar27 + 0x20);
      lVar9 = *(long *)(uVar27 + 0x28);
      _swift_getObjectType();
      pcVar18 = *(code **)(lVar9 + 0x10);
      _swift_retain_n(uVar27,2);
      _swift_retain_n(puVar21,2);
      _swift_unknownObjectRetain(uVar16);
      (*pcVar18)(uVar17,lVar9);
      if ((uVar17 & 1) == 0) {
        uVar16 = *(undefined8 *)(uVar27 + 0x20);
        lVar9 = *(long *)(uVar27 + 0x28);
        _swift_getObjectType(uVar16);
        puVar4 = &DAT_100f1a688;
        _swift_allocObject(&DAT_100f1a688,0x28,7);
        *(ulong *)(puVar4 + 0x10) = uVar27;
        *(code **)(puVar4 + 0x18) = FUN_100948660;
        *(undefined **)(puVar4 + 0x20) = puVar25;
        pcVar18 = *(code **)(lVar9 + 0x18);
        _swift_retain(uVar27);
        _swift_retain(puVar25);
        (*pcVar18)(thunk_FUN_1008db360,puVar4,uVar16,lVar9);
        _swift_release(puVar4);
        _swift_release(puVar21);
        _swift_release_n(uVar27,2);
        _swift_release(puVar25);
      }
      else {
        _swift_beginAccess(uVar27 + 0x10,auStack_108,0,0);
        uVar16 = *(undefined8 *)(uVar27 + 0x10);
        cVar2 = *(char *)(uVar27 + 0x18);
        if (cVar2 == '\x01') {
          local_110 = uVar16;
          FUN_1005dfeb4(uVar16,1);
          FUN_100308524(uVar16,1);
          puVar4 = &DAT_100febaf0;
          FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
          ppcVar5 = &local_f0;
          _swift_dynamicCast(ppcVar5,&local_110,puVar4,&DAT_100eeb710,6);
          pcVar18 = local_f0;
          if ((int)ppcVar5 == 0) {
LAB_1009458e0:
            _swift_willThrow();
            _swift_beginAccess(puVar23,auStack_128,1,0);
            if (puVar21[0x18] == -1) {
              *(undefined8 *)(puVar21 + 0x10) = uVar16;
              puVar21[0x18] = 1;
              puVar12 = auStack_140;
              goto LAB_100945954;
            }
          }
          else {
            uVar17 = (ulong)local_e8 & 0xff;
            pcVar6 = local_f0;
            thunk_FUN_10061dfe8(local_f0,uVar17,3,3);
            FUN_10061e298(pcVar18,uVar17);
            if (((ulong)pcVar6 & 1) == 0) goto LAB_1009458e0;
            _swift_beginAccess(puVar23,auStack_158,1,0);
            if (puVar21[0x18] == -1) {
              *(undefined8 *)(puVar21 + 0x10) = 0;
              puVar21[0x18] = 0;
              _swift_beginAccess(puVar28,auStack_170,1,0);
              uVar24 = *(undefined8 *)(puVar21 + 0x30);
              uVar20 = *(undefined8 *)(puVar21 + 0x38);
              uVar22 = *(undefined8 *)(puVar21 + 0x40);
              *puVar28 = 0;
              *(undefined8 *)(puVar21 + 0x38) = 0;
              *(undefined8 *)(puVar21 + 0x40) = 0;
              FUN_100308538(uVar16,1);
              goto LAB_1009459d0;
            }
          }
          FUN_100308538(uVar16,1);
LAB_100945918:
          uVar24 = 0;
          uVar20 = 0;
          uVar22 = 0;
        }
        else if (cVar2 == -1) {
          _swift_beginAccess(uVar27 + 0x30,&local_f0,0x21,0);
          if (*(long *)(uVar27 + 0x30) == 0) {
            *(code **)(uVar27 + 0x30) = FUN_100948660;
            *(undefined **)(uVar27 + 0x38) = puVar25;
            _swift_retain(puVar25);
          }
          else {
            uVar17 = *(ulong *)(uVar27 + 0x40);
            if (uVar17 == 0) {
              puVar4 = &DAT_100fec470;
              FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
              _swift_allocObject();
              *(undefined8 *)(puVar4 + 0x18) = 2;
              *(undefined8 *)(puVar4 + 0x10) = 1;
              *(code **)(puVar4 + 0x20) = FUN_100948660;
              *(undefined **)(puVar4 + 0x28) = puVar25;
              *(undefined **)(uVar27 + 0x40) = puVar4;
              _swift_retain(puVar25);
            }
            else {
              _swift_retain(puVar25);
              uVar8 = uVar17;
              _swift_isUniquelyReferenced_nonNull_native();
              *(ulong *)(uVar27 + 0x40) = uVar17;
              uVar7 = uVar17;
              if ((uVar8 & 1) == 0) {
                uVar7 = 0;
                FUN_100932184(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
                *(ulong *)(uVar27 + 0x40) = uVar7;
              }
              uVar17 = *(ulong *)(uVar7 + 0x10);
              uVar8 = uVar7;
              if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar17) {
                uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
                FUN_100932184(uVar8,uVar17 + 1,1,uVar7);
              }
              *(ulong *)(uVar8 + 0x10) = uVar17 + 1;
              lVar9 = uVar8 + uVar17 * 0x10;
              *(code **)(lVar9 + 0x20) = FUN_100948660;
              *(undefined **)(lVar9 + 0x28) = puVar25;
              *(ulong *)(uVar27 + 0x40) = uVar8;
            }
          }
          _swift_endAccess(&local_f0);
          uVar24 = 0;
          uVar20 = 0;
          uVar22 = 0;
        }
        else {
          _swift_beginAccess(puVar23,auStack_188,1,0);
          if (puVar21[0x18] != -1) goto LAB_100945918;
          *(undefined8 *)(puVar21 + 0x10) = uVar16;
          puVar21[0x18] = cVar2;
          puVar12 = auStack_1a0;
LAB_100945954:
          _swift_beginAccess(puVar28,puVar12,1,0);
          uVar24 = *(undefined8 *)(puVar21 + 0x30);
          uVar20 = *(undefined8 *)(puVar21 + 0x38);
          uVar22 = *(undefined8 *)(puVar21 + 0x40);
          *puVar28 = 0;
          *(undefined8 *)(puVar21 + 0x38) = 0;
          *(undefined8 *)(puVar21 + 0x40) = 0;
        }
LAB_1009459d0:
        FUN_1006486f8(uVar24,uVar20,uVar22);
        FUN_100004550(uVar24,uVar20);
        _swift_release(puVar21);
        _swift_release(puVar25);
        _swift_release_n(uVar27,2);
        _swift_bridgeObjectRelease(uVar22);
      }
      uVar27 = *(ulong *)(puVar15 + 0x10);
      local_a8 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar27) {
        FUN_10090da64(1 < *(ulong *)(puVar15 + 0x18),uVar27 + 1,1);
      }
      puVar15 = local_a8;
      uVar26 = uVar26 + 1;
      *(ulong *)(local_a8 + 0x10) = uVar27 + 1;
      *(undefined **)(local_a8 + uVar27 * 8 + 0x20) = puVar21;
    } while (uVar19 != uVar26);
    _swift_bridgeObjectRelease(puVar3);
  }
  if ((ulong)puVar15 >> 0x3e == 0) {
    lVar9 = *(long *)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar15) {
      _Var1.unknown = puVar15;
    }
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar9 < 1) {
    _swift_bridgeObjectRelease(puVar15);
    FUN_1009415ec();
  }
  else {
    puVar3 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(long *)(puVar3 + 0x20) = param_1;
    *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar3 + 0x10) = 0;
    puVar3[0x18] = 0xff;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    puVar25 = *(undefined **)(param_1 + 0x40);
    ppuVar10 = &PTR___tlv_bootstrap_101048e48;
    (*(code *)PTR___tlv_bootstrap_101048e48)();
    puVar21 = *ppuVar10;
    _swift_retain(param_1);
    if (puVar21 == puVar25) {
      FUN_100945c4c(puVar3,puVar15,param_1);
      _swift_bridgeObjectRelease(puVar15);
      puVar15 = puVar3;
    }
    else {
      puVar21 = &DAT_100f1a6b0;
      _swift_allocObject(&DAT_100f1a6b0,0x30,7);
      *(undefined **)(puVar21 + 0x10) = puVar3;
      *(undefined **)(puVar21 + 0x18) = puVar15;
      *(long *)(puVar21 + 0x20) = param_1;
      *(undefined ***)(puVar21 + 0x28) = &PTR_PTR_100f19fa8;
      local_f0 = FUN_1009486a0;
      local_c8 = 0;
      local_b0 = 1;
      local_e8 = puVar21;
      _swift_retain(param_1);
      _swift_retain(puVar3);
      _swift_bridgeObjectRetain(puVar15);
      _swift_retain(puVar21);
      FUN_10093efc4(&local_f0);
      FUN_1008fa458(&local_f0);
      _swift_bridgeObjectRelease(puVar15);
      _swift_release(puVar21);
      puVar15 = puVar3;
    }
  }
  return puVar15;
}



/* Address: 0x100945c4c | FUN_100945c4c */

/* WARNING: Removing unreachable block (ram,0x0001009463b4) */

void FUN_100945c4c(long param_1,undefined *param_2,undefined *param_3)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  code *pcVar20;
  long *plVar21;
  undefined8 uVar22;
  undefined1 uVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 local_218;
  undefined **local_1d8;
  undefined1 auStack_190 [24];
  undefined1 auStack_178 [24];
  undefined1 auStack_160 [24];
  undefined1 auStack_148 [24];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [32];
  code *local_e0;
  undefined *puStack_d8;
  undefined1 local_b8;
  undefined1 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar15 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar15 == 0) {
    FUN_1009452c4(0,0,param_1);
    return;
  }
  puVar3 = &DAT_100feda78;
  FUN_1000f7830(&DAT_100feda78,&DAT_100c85ad8);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = param_3;
  *(undefined ***)(puVar3 + 0x18) = &PTR_PTR_100f19fa8;
  plVar21 = (long *)(puVar3 + 0x20);
  *plVar21 = lVar15;
  puVar13 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar25 = *(undefined **)(puVar13 + 0x10);
    local_1d8 = &PTR_PTR_100f19fa8;
    puVar19 = param_3;
  }
  else {
    _Var1.unknown = puVar13;
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    puVar25 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar19 = *(undefined **)(puVar3 + 0x10);
    local_1d8 = *(undefined ***)(puVar3 + 0x18);
  }
  _swift_retain(param_3);
  _swift_beginAccess(plVar21,auStack_80,1,0);
  ppuVar4 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  if (puVar25 != (undefined *)0x0) {
    puVar8 = (undefined *)0x0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar13 + 0x10) <= puVar8) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x100946824);
            (*pcVar20)();
          }
          puVar24 = *(undefined **)(param_2 + (long)puVar8 * 8 + 0x20);
          _swift_retain(puVar24);
        }
        else {
          puVar24 = puVar8;
          FUN_1009432f4(puVar8,param_2);
        }
        if (SCARRY8((long)puVar8,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100946820);
          (*pcVar20)();
        }
        puVar14 = puVar8 + 1;
        uVar17 = *(ulong *)(puVar24 + 0x20);
        lVar15 = *(long *)(puVar24 + 0x28);
        uVar10 = uVar17;
        _swift_getObjectType();
        pcVar20 = *(code **)(lVar15 + 0x10);
        _swift_unknownObjectRetain(uVar17);
        (*pcVar20)(uVar10,lVar15);
        _swift_unknownObjectRelease(uVar17);
        if ((uVar10 & 1) == 0) break;
        uVar12 = 0;
        _swift_beginAccess(puVar24 + 0x10,auStack_160,0,0);
        if (puVar24[0x18] == -1) break;
        if (puVar24[0x18] == '\x01') {
          uVar22 = *(undefined8 *)(puVar24 + 0x10);
          uVar17 = *(ulong *)(param_1 + 0x20);
          lVar15 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          pcVar20 = *(code **)(lVar15 + 0x10);
          FUN_100308524(uVar22,1);
          _swift_errorRetain(uVar22);
          uVar10 = uVar17;
          lVar11 = lVar15;
          (*pcVar20)(uVar17,lVar15);
          if ((uVar10 & 1) == 0) {
            puVar13 = &DAT_100f1a7c8;
            _swift_allocObject(&DAT_100f1a7c8,0x20,7);
            *(long *)(puVar13 + 0x10) = param_1;
            *(undefined8 *)(puVar13 + 0x18) = uVar22;
            pcVar20 = *(code **)(lVar15 + 0x18);
            FUN_1005dfeb4(uVar22,1);
            _swift_retain(param_1);
            (*pcVar20)(thunk_FUN_1008777d0,puVar13,uVar17,lVar15);
            _swift_release(puVar3);
            _swift_release(puVar13);
          }
          else {
            uVar16 = uVar22;
            FUN_1005de8f4(uVar22);
            FUN_1006486f8();
            FUN_100004550(uVar16,lVar11);
            _swift_release(puVar3);
            _swift_bridgeObjectRelease(uVar12);
          }
          FUN_100308538(uVar22,1);
          _swift_release(puVar24);
          FUN_100308538(uVar22,1);
          return;
        }
        puVar5 = puVar19;
        _swift_getObjectType(puVar19);
        FUN_100642338();
        if (SBORROW8(*plVar21,1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100946828);
          (*pcVar20)();
        }
        *plVar21 = *plVar21 + -1;
        FUN_100642338(puVar5,local_1d8);
        if (*plVar21 == 0) {
          uVar17 = *(ulong *)(param_1 + 0x20);
          lVar15 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar10 = uVar17;
          (**(code **)(lVar15 + 0x10))();
          if ((uVar10 & 1) == 0) {
            puVar5 = &DAT_100f1a7f0;
            _swift_allocObject(&DAT_100f1a7f0,0x21,7);
            *(long *)(puVar5 + 0x10) = param_1;
            *(undefined8 *)(puVar5 + 0x18) = 0;
            puVar5[0x20] = 0;
            pcVar20 = *(code **)(lVar15 + 0x18);
            _swift_retain(param_1);
            (*pcVar20)(thunk_FUN_1008d418c,puVar5,uVar17,lVar15);
            _swift_release(puVar24);
            puVar24 = puVar5;
            goto LAB_100945d6c;
          }
          _swift_beginAccess(param_1 + 0x10,auStack_178,1,0);
          uVar12 = 0;
          uVar22 = 0;
          uVar16 = 0;
          if (*(char *)(param_1 + 0x18) == -1) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            _swift_beginAccess(param_1 + 0x30,auStack_190,1,0);
            uVar12 = *(undefined8 *)(param_1 + 0x30);
            uVar22 = *(undefined8 *)(param_1 + 0x38);
            uVar16 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          FUN_1006486f8(uVar12,uVar22,uVar16);
          FUN_100004550(uVar12,uVar22);
          _swift_release(puVar24);
          _swift_bridgeObjectRelease(uVar16);
        }
        else {
LAB_100945d6c:
          _swift_release(puVar24);
        }
LAB_100945d70:
        puVar8 = puVar8 + 1;
        if (puVar14 == puVar25) goto LAB_1009466f8;
      }
      puVar5 = &DAT_100f1a6d8;
      _swift_allocObject(&DAT_100f1a6d8,0x38,7);
      *(undefined **)(puVar5 + 0x10) = param_3;
      *(undefined ***)(puVar5 + 0x18) = &PTR_PTR_100f19fa8;
      *(undefined **)(puVar5 + 0x20) = puVar3;
      *(long *)(puVar5 + 0x28) = param_1;
      *(undefined **)(puVar5 + 0x30) = puVar8;
      puVar6 = &DAT_100f1a700;
      _swift_allocObject(&DAT_100f1a700,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_100949c54;
      *(undefined **)(puVar6 + 0x18) = puVar5;
      *(undefined **)(puVar6 + 0x20) = puVar24;
      uVar17 = *(ulong *)(puVar24 + 0x20);
      lVar15 = *(long *)(puVar24 + 0x28);
      _swift_getObjectType();
      pcVar20 = *(code **)(lVar15 + 0x10);
      _swift_retain_n(param_3,2);
      _swift_retain_n(param_1,2);
      _swift_retain_n(puVar3,2);
      _swift_retain_n(puVar5,2);
      _swift_retain_n(puVar24,2);
      (*pcVar20)(uVar17,lVar15);
      if ((uVar17 & 1) == 0) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_release(param_3);
        uVar12 = *(undefined8 *)(puVar24 + 0x20);
        lVar15 = *(long *)(puVar24 + 0x28);
        _swift_getObjectType(uVar12);
        puVar7 = &DAT_100f1a728;
        _swift_allocObject(&DAT_100f1a728,0x28,7);
        *(undefined **)(puVar7 + 0x10) = puVar24;
        *(code **)(puVar7 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar7 + 0x20) = puVar6;
        pcVar20 = *(code **)(lVar15 + 0x18);
        _swift_retain(puVar24);
        _swift_retain(puVar6);
        (*pcVar20)(thunk_FUN_1008db360,puVar7,uVar12,lVar15);
        _swift_release(puVar7);
        _swift_release_n(puVar24,2);
        _swift_release(puVar6);
        _swift_release_n(puVar5,2);
        goto LAB_100945d70;
      }
      _swift_beginAccess(puVar24 + 0x10,auStack_98,0,0);
      uVar12 = *(undefined8 *)(puVar24 + 0x10);
      cVar2 = puVar24[0x18];
      if (cVar2 == '\x01') {
        uVar23 = 1;
        FUN_100308524(uVar12,1);
        _swift_errorRetain(uVar12);
        local_218 = uVar12;
        if (*ppuVar4 != *(undefined **)(param_3 + 0x40)) {
LAB_10094633c:
          puVar7 = &DAT_100f1a750;
          _swift_allocObject(&DAT_100f1a750,0x31,7);
          *(undefined **)(puVar7 + 0x10) = puVar3;
          *(long *)(puVar7 + 0x18) = param_1;
          *(undefined **)(puVar7 + 0x20) = puVar8;
          *(undefined8 *)(puVar7 + 0x28) = local_218;
          puVar7[0x30] = uVar23;
          local_e0 = FUN_1009486ec;
          local_b8 = 0;
          local_a0 = 1;
          puStack_d8 = puVar7;
          _swift_retain(param_1);
          _swift_retain(puVar3);
          FUN_100308524(local_218,uVar23);
          _swift_retain(puVar7);
          FUN_10093efc4(&local_e0);
          FUN_1008fa458(&local_e0);
          FUN_1002ec258(local_218,uVar23);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_release(param_3);
LAB_1009463f4:
          _swift_release(puVar7);
          goto LAB_100946400;
        }
        uVar17 = *(ulong *)(param_1 + 0x20);
        lVar15 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar10 = uVar17;
        (**(code **)(lVar15 + 0x10))();
        if ((uVar10 & 1) == 0) {
          puVar8 = &DAT_100f1a778;
          _swift_allocObject(&DAT_100f1a778,0x20,7);
          *(long *)(puVar8 + 0x10) = param_1;
          *(undefined8 *)(puVar8 + 0x18) = uVar12;
          pcVar20 = *(code **)(lVar15 + 0x18);
          _swift_retain(param_1);
          FUN_100308524(uVar12,1);
          (*pcVar20)(FUN_1008777d0,puVar8,uVar17,lVar15);
          _swift_release(puVar8);
          FUN_1002ec258(uVar12,1);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_release(param_3);
          FUN_100308538(uVar12,1);
        }
        else {
          _swift_beginAccess(param_1 + 0x10,auStack_100,1,0);
          uVar22 = 0;
          uVar16 = 0;
          uVar18 = 0;
          if (*(char *)(param_1 + 0x18) == -1) {
            *(undefined8 *)(param_1 + 0x10) = uVar12;
            *(undefined1 *)(param_1 + 0x18) = 1;
            _swift_beginAccess(param_1 + 0x30,auStack_118,1,0);
            uVar22 = *(undefined8 *)(param_1 + 0x30);
            uVar16 = *(undefined8 *)(param_1 + 0x38);
            uVar18 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
            _swift_errorRetain(uVar12);
          }
          FUN_1006486f8(uVar22,uVar16,uVar18);
          FUN_100004550(uVar22,uVar16);
          _swift_bridgeObjectRelease(uVar18);
          FUN_1002ec258(uVar12,1);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_release(param_3);
          FUN_100308538(uVar12,1);
        }
      }
      else if (cVar2 == -1) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_release(param_3);
        _swift_beginAccess(puVar24 + 0x30,&local_e0,0x21,0);
        if (*(long *)(puVar24 + 0x30) == 0) {
          *(code **)(puVar24 + 0x30) = thunk_FUN_1008fa3dc;
          *(undefined **)(puVar24 + 0x38) = puVar6;
LAB_1009464ec:
          _swift_retain(puVar6);
        }
        else {
          uVar17 = *(ulong *)(puVar24 + 0x40);
          if (uVar17 == 0) {
            puVar8 = &DAT_100fec470;
            FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
            _swift_allocObject();
            *(undefined8 *)(puVar8 + 0x18) = 2;
            *(undefined8 *)(puVar8 + 0x10) = 1;
            *(code **)(puVar8 + 0x20) = thunk_FUN_1008fa3dc;
            *(undefined **)(puVar8 + 0x28) = puVar6;
            *(undefined **)(puVar24 + 0x40) = puVar8;
            goto LAB_1009464ec;
          }
          _swift_retain(puVar6);
          uVar10 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(puVar24 + 0x40) = uVar17;
          uVar9 = uVar17;
          if ((uVar10 & 1) == 0) {
            uVar9 = 0;
            FUN_100932184(0,*(long *)(uVar17 + 0x10) + 1,1,uVar17);
            *(ulong *)(puVar24 + 0x40) = uVar9;
          }
          uVar17 = *(ulong *)(uVar9 + 0x10);
          uVar10 = uVar9;
          if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar17) {
            uVar10 = (ulong)(1 < *(ulong *)(uVar9 + 0x18));
            FUN_100932184(uVar10,uVar17 + 1,1,uVar9);
          }
          *(ulong *)(uVar10 + 0x10) = uVar17 + 1;
          lVar15 = uVar10 + uVar17 * 0x10;
          *(code **)(lVar15 + 0x20) = thunk_FUN_1008fa3dc;
          *(undefined **)(lVar15 + 0x28) = puVar6;
          *(ulong *)(puVar24 + 0x40) = uVar10;
        }
        _swift_endAccess(&local_e0);
      }
      else {
        if (*ppuVar4 != *(undefined **)(param_3 + 0x40)) {
          uVar23 = 0;
          goto LAB_10094633c;
        }
        _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
        FUN_100642338();
        if (SBORROW8(*(long *)(puVar3 + 0x20),1)) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x10094686c);
          (*pcVar20)();
        }
        *(long *)(puVar3 + 0x20) = *(long *)(puVar3 + 0x20) + -1;
        _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
        FUN_100642338();
        if (*(long *)(puVar3 + 0x20) != 0) {
          _swift_release(param_1);
          _swift_release(puVar3);
          puVar7 = param_3;
          goto LAB_1009463f4;
        }
        uVar17 = *(ulong *)(param_1 + 0x20);
        lVar15 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar10 = uVar17;
        (**(code **)(lVar15 + 0x10))();
        if ((uVar10 & 1) == 0) {
          puVar8 = &DAT_100f1a7a0;
          _swift_allocObject(&DAT_100f1a7a0,0x21,7);
          *(long *)(puVar8 + 0x10) = param_1;
          *(undefined8 *)(puVar8 + 0x18) = 0;
          puVar8[0x20] = 0;
          pcVar20 = *(code **)(lVar15 + 0x18);
          _swift_retain(param_1);
          (*pcVar20)(thunk_FUN_1008d418c,puVar8,uVar17,lVar15);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_release(param_3);
          _swift_release(puVar8);
        }
        else {
          _swift_beginAccess(param_1 + 0x10,auStack_130,1,0);
          uVar22 = 0;
          uVar16 = 0;
          uVar18 = 0;
          if (*(char *)(param_1 + 0x18) == -1) {
            *(undefined8 *)(param_1 + 0x10) = 0;
            *(undefined1 *)(param_1 + 0x18) = 0;
            _swift_beginAccess(param_1 + 0x30,auStack_148,1,0);
            uVar22 = *(undefined8 *)(param_1 + 0x30);
            uVar16 = *(undefined8 *)(param_1 + 0x38);
            uVar18 = *(undefined8 *)(param_1 + 0x40);
            *(undefined8 *)(param_1 + 0x30) = 0;
            *(undefined8 *)(param_1 + 0x38) = 0;
            *(undefined8 *)(param_1 + 0x40) = 0;
          }
          FUN_1006486f8(uVar22,uVar16,uVar18);
          FUN_100004550(uVar22,uVar16);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_release(param_3);
          _swift_bridgeObjectRelease(uVar18);
        }
LAB_100946400:
        FUN_100308538(uVar12,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(puVar6);
      _swift_release_n(puVar5,2);
      _swift_release_n(puVar24,2);
      _swift_bridgeObjectRelease(0);
      puVar8 = puVar14;
    } while (puVar14 != puVar25);
  }
LAB_1009466f8:
  _swift_release(puVar3);
  return;
}



/* Address: 0x10094686c | FUN_10094686c */

void FUN_10094686c(long param_1,undefined *param_2,undefined8 param_3,ulong param_4,long param_5)

{
  _CocoaArrayWrapper _Var1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined1 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long *plVar20;
  code *pcVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 local_1e8;
  long local_1a8;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar13 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar13 == 0) {
    FUN_1009452c4(0,0,param_1);
    return;
  }
  puVar3 = &DAT_100feda78;
  FUN_1000f7830(&DAT_100feda78,&DAT_100c85ad8);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(long *)(puVar3 + 0x18) = param_5;
  plVar20 = (long *)(puVar3 + 0x20);
  *plVar20 = lVar13;
  puVar11 = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((ulong)param_2 >> 0x3e == 0) {
    uVar22 = *(ulong *)(puVar11 + 0x10);
    uVar18 = param_3;
    local_1a8 = param_5;
  }
  else {
    _Var1.unknown = puVar11;
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    uVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    uVar18 = *(undefined8 *)(puVar3 + 0x10);
    local_1a8 = *(long *)(puVar3 + 0x18);
  }
  _swift_unknownObjectRetain(param_3);
  _swift_beginAccess(plVar20,auStack_80,1,0);
  if (uVar22 != 0) {
    uVar15 = 0;
    do {
      while( true ) {
        if (((ulong)param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar11 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100947410);
            (*pcVar21)();
          }
          uVar19 = *(ulong *)(param_2 + uVar15 * 8 + 0x20);
          _swift_retain(uVar19);
        }
        else {
          uVar19 = uVar15;
          FUN_1009432f4(uVar15,param_2);
        }
        if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x10094740c);
          (*pcVar21)();
        }
        uVar12 = uVar15 + 1;
        uVar8 = *(ulong *)(uVar19 + 0x20);
        lVar13 = *(long *)(uVar19 + 0x28);
        uVar7 = uVar8;
        _swift_getObjectType();
        pcVar21 = *(code **)(lVar13 + 0x10);
        _swift_unknownObjectRetain(uVar8);
        (*pcVar21)(uVar7,lVar13);
        _swift_unknownObjectRelease(uVar8);
        if ((uVar7 & 1) == 0) break;
        uVar10 = 0;
        _swift_beginAccess(uVar19 + 0x10,auStack_128,0,0);
        if (*(char *)(uVar19 + 0x18) == -1) break;
        if (*(char *)(uVar19 + 0x18) == '\x01') {
          uVar18 = *(undefined8 *)(uVar19 + 0x10);
          uVar22 = *(ulong *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          pcVar21 = *(code **)(lVar13 + 0x10);
          FUN_1005dfeb4(uVar18,1);
          _swift_errorRetain(uVar18);
          uVar15 = uVar22;
          lVar9 = lVar13;
          (*pcVar21)(uVar22,lVar13);
          if ((uVar15 & 1) == 0) {
            puVar11 = &DAT_100f1a958;
            _swift_allocObject(&DAT_100f1a958,0x20,7);
            *(long *)(puVar11 + 0x10) = param_1;
            *(undefined8 *)(puVar11 + 0x18) = uVar18;
            pcVar21 = *(code **)(lVar13 + 0x18);
            FUN_1005dfeb4(uVar18,1);
            _swift_retain(param_1);
            (*pcVar21)(thunk_FUN_1008777d0,puVar11,uVar22,lVar13);
            _swift_release(puVar3);
            _swift_release(puVar11);
          }
          else {
            uVar23 = uVar18;
            FUN_1005de8f4(uVar18);
            FUN_1006486f8();
            FUN_100004550(uVar23,lVar9);
            _swift_release(puVar3);
            _swift_bridgeObjectRelease(uVar10);
          }
          FUN_100308538(uVar18,1);
          _swift_release(uVar19);
          FUN_100308538(uVar18,1);
          return;
        }
        uVar10 = uVar18;
        _swift_getObjectType(uVar18);
        FUN_100642338();
        if (SBORROW8(*plVar20,1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100947414);
          (*pcVar21)();
        }
        *plVar20 = *plVar20 + -1;
        FUN_100642338(uVar10,local_1a8);
        if (*plVar20 == 0) {
          uVar8 = *(ulong *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar7 = uVar8;
          (**(code **)(lVar13 + 0x10))();
          if ((uVar7 & 1) == 0) {
            puVar4 = &DAT_100f1a980;
            _swift_allocObject(&DAT_100f1a980,0x21,7);
            *(long *)(puVar4 + 0x10) = param_1;
            *(undefined8 *)(puVar4 + 0x18) = 0;
            puVar4[0x20] = 0;
            pcVar21 = *(code **)(lVar13 + 0x18);
            _swift_retain(param_1);
            (*pcVar21)(thunk_FUN_1008d418c,puVar4,uVar8,lVar13);
            _swift_release(uVar19);
            _swift_release(puVar4);
          }
          else {
            _swift_beginAccess(param_1 + 0x10,auStack_140,1,0);
            uVar10 = 0;
            uVar23 = 0;
            uVar14 = 0;
            if (*(char *)(param_1 + 0x18) == -1) {
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined1 *)(param_1 + 0x18) = 0;
              _swift_beginAccess(param_1 + 0x30,auStack_158,1,0);
              uVar10 = *(undefined8 *)(param_1 + 0x30);
              uVar23 = *(undefined8 *)(param_1 + 0x38);
              uVar14 = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            FUN_1006486f8(uVar10,uVar23,uVar14);
            FUN_100004550(uVar10,uVar23);
            _swift_release(uVar19);
            _swift_bridgeObjectRelease(uVar14);
          }
        }
        else {
          _swift_release(uVar19);
        }
LAB_100946980:
        uVar15 = uVar15 + 1;
        if (uVar12 == uVar22) goto LAB_1009472e4;
      }
      puVar4 = &DAT_100f1a868;
      _swift_allocObject(&DAT_100f1a868,0x38,7);
      *(undefined8 *)(puVar4 + 0x10) = param_3;
      *(long *)(puVar4 + 0x18) = param_5;
      *(undefined **)(puVar4 + 0x20) = puVar3;
      *(long *)(puVar4 + 0x28) = param_1;
      *(ulong *)(puVar4 + 0x30) = uVar15;
      puVar5 = &DAT_100f1a890;
      _swift_allocObject(&DAT_100f1a890,0x28,7);
      *(code **)(puVar5 + 0x10) = thunk_FUN_100949c54;
      *(undefined **)(puVar5 + 0x18) = puVar4;
      *(ulong *)(puVar5 + 0x20) = uVar19;
      uVar8 = *(ulong *)(uVar19 + 0x20);
      lVar13 = *(long *)(uVar19 + 0x28);
      _swift_getObjectType();
      pcVar21 = *(code **)(lVar13 + 0x10);
      _swift_unknownObjectRetain_n(param_3,2);
      _swift_retain_n(param_1,2);
      _swift_retain_n(puVar3,2);
      _swift_retain_n(puVar4,2);
      _swift_retain_n(uVar19,2);
      (*pcVar21)(uVar8,lVar13);
      if ((uVar8 & 1) == 0) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_unknownObjectRelease(param_3);
        uVar10 = *(undefined8 *)(uVar19 + 0x20);
        lVar13 = *(long *)(uVar19 + 0x28);
        _swift_getObjectType(uVar10);
        puVar6 = &DAT_100f1a8b8;
        _swift_allocObject(&DAT_100f1a8b8,0x28,7);
        *(ulong *)(puVar6 + 0x10) = uVar19;
        *(code **)(puVar6 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar6 + 0x20) = puVar5;
        pcVar21 = *(code **)(lVar13 + 0x18);
        _swift_retain(uVar19);
        _swift_retain(puVar5);
        (*pcVar21)(thunk_FUN_1008db360,puVar6,uVar10,lVar13);
        _swift_release(puVar6);
        _swift_release_n(uVar19,2);
        _swift_release(puVar5);
        _swift_release_n(puVar4,2);
        goto LAB_100946980;
      }
      _swift_beginAccess(uVar19 + 0x10,auStack_98,0,0);
      uVar10 = *(undefined8 *)(uVar19 + 0x10);
      cVar2 = *(char *)(uVar19 + 0x18);
      if (cVar2 == '\x01') {
        uVar16 = 1;
        FUN_1005dfeb4(uVar10,1);
        _swift_errorRetain(uVar10);
        uVar8 = param_4;
        (**(code **)(param_5 + 0x10))();
        local_1e8 = uVar10;
        if ((uVar8 & 1) == 0) {
LAB_100946f30:
          puVar6 = &DAT_100f1a8e0;
          _swift_allocObject(&DAT_100f1a8e0,0x31,7);
          *(undefined **)(puVar6 + 0x10) = puVar3;
          *(long *)(puVar6 + 0x18) = param_1;
          *(ulong *)(puVar6 + 0x20) = uVar15;
          *(undefined8 *)(puVar6 + 0x28) = local_1e8;
          puVar6[0x30] = uVar16;
          pcVar21 = *(code **)(param_5 + 0x18);
          _swift_retain(param_1);
          _swift_retain(puVar3);
          FUN_100308524(local_1e8,uVar16);
          (*pcVar21)(thunk_FUN_1009486ec,puVar6,param_4,param_5);
          FUN_1002ec258(local_1e8,uVar16);
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_unknownObjectRelease(param_3);
          _swift_release(puVar6);
          FUN_100308538(uVar10,cVar2);
        }
        else {
          uVar15 = *(ulong *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar8 = uVar15;
          (**(code **)(lVar13 + 0x10))();
          if ((uVar8 & 1) == 0) {
            puVar6 = &DAT_100f1a908;
            _swift_allocObject(&DAT_100f1a908,0x20,7);
            *(long *)(puVar6 + 0x10) = param_1;
            *(undefined8 *)(puVar6 + 0x18) = uVar10;
            pcVar21 = *(code **)(lVar13 + 0x18);
            _swift_retain(param_1);
            FUN_100308524(uVar10,1);
            (*pcVar21)(thunk_FUN_1008777d0,puVar6,uVar15,lVar13);
            _swift_release(puVar6);
            FUN_1002ec258(uVar10,1);
          }
          else {
            _swift_beginAccess(param_1 + 0x10,auStack_c8,1,0);
            uVar23 = 0;
            uVar14 = 0;
            uVar17 = 0;
            if (*(char *)(param_1 + 0x18) == -1) {
              *(undefined8 *)(param_1 + 0x10) = uVar10;
              *(undefined1 *)(param_1 + 0x18) = 1;
              _swift_beginAccess(param_1 + 0x30,auStack_e0,1,0);
              uVar23 = *(undefined8 *)(param_1 + 0x30);
              uVar14 = *(undefined8 *)(param_1 + 0x38);
              uVar17 = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
              _swift_errorRetain(uVar10);
            }
            FUN_1006486f8(uVar23,uVar14,uVar17);
            FUN_100004550(uVar23,uVar14);
            _swift_bridgeObjectRelease(uVar17);
            FUN_1002ec258(uVar10,1);
          }
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_unknownObjectRelease(param_3);
          FUN_100308538(uVar10,1);
        }
      }
      else if (cVar2 == -1) {
        _swift_release(param_1);
        _swift_release(puVar3);
        _swift_unknownObjectRelease(param_3);
        _swift_beginAccess(uVar19 + 0x30,auStack_b0,0x21,0);
        if (*(long *)(uVar19 + 0x30) == 0) {
          *(code **)(uVar19 + 0x30) = thunk_FUN_1008fa3dc;
          *(undefined **)(uVar19 + 0x38) = puVar5;
          _swift_retain(puVar5);
        }
        else {
          uVar15 = *(ulong *)(uVar19 + 0x40);
          if (uVar15 == 0) {
            puVar6 = &DAT_100fec470;
            FUN_1000f7830(&DAT_100fec470,&DAT_100c83b58);
            _swift_allocObject();
            *(undefined8 *)(puVar6 + 0x18) = 2;
            *(undefined8 *)(puVar6 + 0x10) = 1;
            *(code **)(puVar6 + 0x20) = thunk_FUN_1008fa3dc;
            *(undefined **)(puVar6 + 0x28) = puVar5;
            *(undefined **)(uVar19 + 0x40) = puVar6;
            _swift_retain(puVar5);
          }
          else {
            _swift_retain(puVar5);
            uVar8 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(uVar19 + 0x40) = uVar15;
            uVar7 = uVar15;
            if ((uVar8 & 1) == 0) {
              uVar7 = 0;
              FUN_100932184(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              *(ulong *)(uVar19 + 0x40) = uVar7;
            }
            uVar15 = *(ulong *)(uVar7 + 0x10);
            uVar8 = uVar7;
            if (*(ulong *)(uVar7 + 0x18) >> 1 <= uVar15) {
              uVar8 = (ulong)(1 < *(ulong *)(uVar7 + 0x18));
              FUN_100932184(uVar8,uVar15 + 1,1,uVar7);
            }
            *(ulong *)(uVar8 + 0x10) = uVar15 + 1;
            lVar13 = uVar8 + uVar15 * 0x10;
            *(code **)(lVar13 + 0x20) = thunk_FUN_1008fa3dc;
            *(undefined **)(lVar13 + 0x28) = puVar5;
            *(ulong *)(uVar19 + 0x40) = uVar8;
          }
        }
        _swift_endAccess(auStack_b0);
      }
      else {
        uVar8 = param_4;
        (**(code **)(param_5 + 0x10))();
        if ((uVar8 & 1) == 0) {
          uVar16 = 0;
          goto LAB_100946f30;
        }
        _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
        FUN_100642338();
        if (SBORROW8(*(long *)(puVar3 + 0x20),1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100947460);
          (*pcVar21)();
        }
        *(long *)(puVar3 + 0x20) = *(long *)(puVar3 + 0x20) + -1;
        _swift_getObjectType(*(undefined8 *)(puVar3 + 0x10));
        FUN_100642338();
        if (*(long *)(puVar3 + 0x20) == 0) {
          uVar15 = *(ulong *)(param_1 + 0x20);
          lVar13 = *(long *)(param_1 + 0x28);
          _swift_getObjectType();
          uVar8 = uVar15;
          (**(code **)(lVar13 + 0x10))();
          if ((uVar8 & 1) == 0) {
            puVar6 = &DAT_100f1a930;
            _swift_allocObject(&DAT_100f1a930,0x21,7);
            *(long *)(puVar6 + 0x10) = param_1;
            *(undefined8 *)(puVar6 + 0x18) = 0;
            puVar6[0x20] = 0;
            pcVar21 = *(code **)(lVar13 + 0x18);
            _swift_retain(param_1);
            (*pcVar21)(thunk_FUN_1008d418c,puVar6,uVar15,lVar13);
            _swift_release(param_1);
            _swift_release(puVar3);
            _swift_unknownObjectRelease(param_3);
            _swift_release(puVar6);
          }
          else {
            _swift_beginAccess(param_1 + 0x10,auStack_f8,1,0);
            uVar23 = 0;
            uVar14 = 0;
            uVar17 = 0;
            if (*(char *)(param_1 + 0x18) == -1) {
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined1 *)(param_1 + 0x18) = 0;
              _swift_beginAccess(param_1 + 0x30,auStack_110,1,0);
              uVar23 = *(undefined8 *)(param_1 + 0x30);
              uVar14 = *(undefined8 *)(param_1 + 0x38);
              uVar17 = *(undefined8 *)(param_1 + 0x40);
              *(undefined8 *)(param_1 + 0x30) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined8 *)(param_1 + 0x40) = 0;
            }
            FUN_1006486f8(uVar23,uVar14,uVar17);
            FUN_100004550(uVar23,uVar14);
            _swift_release(param_1);
            _swift_release(puVar3);
            _swift_unknownObjectRelease(param_3);
            _swift_bridgeObjectRelease(uVar17);
          }
        }
        else {
          _swift_release(param_1);
          _swift_release(puVar3);
          _swift_unknownObjectRelease(param_3);
        }
        FUN_100308538(uVar10,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(puVar5);
      _swift_release_n(puVar4,2);
      _swift_release_n(uVar19,2);
      _swift_bridgeObjectRelease(0);
      uVar15 = uVar12;
    } while (uVar12 != uVar22);
  }
LAB_1009472e4:
  _swift_release(puVar3);
  return;
}



/* Address: 0x100947460 | FUN_100947460 */

bool FUN_100947460(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (((*param_1 == *param_2) && (param_1[1] == param_2[1])) && (param_1[2] == param_2[2])) {
    if ((param_2[3] | param_1[3]) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009474d0);
      (*pcVar1)();
    }
    if (param_1[3] == param_2[3]) {
      if (-1 < (param_2[4] | param_1[4])) {
        return param_1[4] == param_2[4];
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009474d4);
      (*pcVar1)();
    }
  }
  return false;
}



/* Address: 0x1009474d4 | FUN_1009474d4 */

undefined * FUN_1009474d4(void)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  return *ppuVar1;
}



/* Address: 0x1009474f8 | FUN_1009474f8 */

undefined8 FUN_1009474f8(undefined8 param_1,undefined8 param_2)

{
  FUN_10090e330(param_2,param_1);
  return param_2;
}


