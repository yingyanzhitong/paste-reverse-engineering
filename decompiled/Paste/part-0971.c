/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a643b8 | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643bc | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643c0 | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643c4 | thunk_FUN_100a63e38 */

void thunk_FUN_100a63e38(void)

{
  FUN_100a63e38();
  return;
}



/* Address: 0x100a643c8 | thunk_FUN_100a63f80 */

void thunk_FUN_100a63f80(void)

{
  FUN_100a63f80();
  return;
}



/* Address: 0x100a643cc | thunk_FUN_100a63f64 */

void thunk_FUN_100a63f64(void)

{
  FUN_100a63f64();
  return;
}



/* Address: 0x100a643d0 | thunk_FUN_100a63e38 */

void thunk_FUN_100a63e38(void)

{
  FUN_100a63e38();
  return;
}



/* Address: 0x100a643d4 | thunk_FUN_100a63e38 */

void thunk_FUN_100a63e38(void)

{
  FUN_100a63e38();
  return;
}



/* Address: 0x100a643d8 | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  thunk_FUN_100a640ec();
  return;
}



/* Address: 0x100a643dc | thunk_FUN_100a640ec */

void thunk_FUN_100a640ec(void)

{
  thunk_FUN_100a640ec();
  return;
}



/* Address: 0x100a643e0 | thunk_FUN_100a63e38 */

void thunk_FUN_100a63e38(void)

{
  FUN_100a63e38();
  return;
}



/* Address: 0x100a643e4 | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643e8 | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643ec | thunk_FUN_100a63e58 */

void thunk_FUN_100a63e58(void)

{
  FUN_100a63e58();
  return;
}



/* Address: 0x100a643f0 | thunk_FUN_100a63e38 */

void thunk_FUN_100a63e38(void)

{
  FUN_100a63e38();
  return;
}



/* Address: 0x100a643f4 | FUN_100a643f4 */

void FUN_100a643f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 unaff_x20;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x760) = unaff_x20;
  *(long *)(unaff_x22 + 0x758) = param_4;
  *(undefined8 *)(unaff_x22 + 0x750) = param_3;
  *(undefined8 *)(unaff_x22 + 0x748) = param_2;
  *(undefined8 *)(unaff_x22 + 0x740) = param_1;
  lVar4 = *(long *)(param_4 + 8);
  piVar3 = *(int **)(lVar4 + 8);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x768) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a64484;
                    /* WARNING: Could not recover jumptable at 0x000100a64480. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,unaff_x22 + 0x10,param_3,lVar4);
  return;
}



/* Address: 0x100a64484 | FUN_100a64484 */

void FUN_100a64484(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x768));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a644c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  _swift_task_switch(FUN_100a644ec,0,0);
  return;
}



/* Address: 0x100a644ec | FUN_100a644ec */

void FUN_100a644ec(ulong *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long lVar1;
  int iVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  ulong uVar5;
  undefined *puVar6;
  code *pcVar7;
  Optional OVar8;
  byte bVar9;
  uint uVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined7 extraout_var;
  ulong uVar14;
  long *plVar15;
  undefined7 extraout_var_00;
  undefined8 uVar16;
  char *pcVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined *puVar20;
  undefined *puVar21;
  long lVar22;
  int *piVar23;
  long lVar24;
  undefined8 *puVar25;
  long unaff_x22;
  ulong uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
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
  
  lVar22 = *(long *)(unaff_x22 + 0x740);
  lVar24 = *(long *)(unaff_x22 + 0xa8);
  uVar14 = lVar24 - lVar22;
  if (SBORROW8(lVar24,lVar22)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a64f1c);
    (*pcVar7)();
  }
  lVar1 = 0xffffffff;
  if (*(long *)(unaff_x22 + 0x748) != 0x7fffffffffffffff) {
    lVar1 = *(long *)(unaff_x22 + 0x748);
  }
  if ((long)uVar14 < 1) {
    if (0xffffffff < lVar1) goto LAB_100a6457c;
    if (lVar1 < 0) {
      uVar14 = 0;
      goto LAB_100a64784;
    }
    if ((*(char *)(unaff_x22 + 0xa1) != '\x03') && (*(char *)(unaff_x22 + 0xa1) != '\x06')) {
      if (0 < lVar24) {
        FUN_1006116e8();
        _swift_retain(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100a64a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      uVar14 = 0;
      goto LAB_100a64c68;
    }
    if (lVar22 != 0) goto LAB_100a646dc;
    uVar14 = 0;
  }
  else {
    if (0xffffffff < lVar1) {
LAB_100a6457c:
      puVar25 = (undefined8 *)(unaff_x22 + 0x130);
      puVar11 = (undefined8 *)(unaff_x22 + 0x178);
      Swift::_StringGuts::grow(0xaf,param_2);
      *(undefined8 *)(unaff_x22 + 0x700) = 0;
      *(undefined8 *)(unaff_x22 + 0x708) = 0xe000000000000000;
      SVar33.bridgeObject = (void *)0x8000000100db8910;
      SVar33.str = (char *)0xd00000000000001a;
      SVar36.bridgeObject = param_4;
      SVar36.str = param_3;
      Swift::String::append(SVar33,SVar36);
      *(long *)(unaff_x22 + 0x730) = lVar1;
      puVar6 = 
      PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
      ;
      puVar21 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      pcVar18 = "";
      pcVar17 = pcVar18;
      puVar20 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (unaff_x22 + 0x730,unaff_x22 + 0x700,&DAT_100f2b538,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar30.bridgeObject = (void *)0x8000000100db8930;
      SVar30.str = (char *)0xd00000000000004e;
      SVar37.bridgeObject = puVar20;
      SVar37.str = pcVar17;
      Swift::String::append(SVar30,SVar37);
      *(undefined8 *)(unaff_x22 + 0x738) = 0xffffffff;
      Swift::__print_unlocked(unaff_x22 + 0x738,unaff_x22 + 0x700,&DAT_100f2b538,puVar21,puVar6);
      SVar31.bridgeObject = (void *)0x8000000100db8980;
      SVar31.str = (char *)0xd000000000000043;
      SVar38.bridgeObject = puVar21;
      SVar38.str = pcVar18;
      Swift::String::append(SVar31,SVar38);
      *(undefined1 *)(unaff_x22 + 0x130) = 6;
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x700);
      *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x708);
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined8 *)(unaff_x22 + 0x150) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x158) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x160) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x168) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x158;
      *(undefined1 *)(unaff_x22 + 0x178) = 6;
      *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x700);
      *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x708);
      *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 400) = 0;
      *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x1a8) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x158;
      lVar22 = unaff_x22 + 0xe8;
LAB_100a648e4:
      FUN_100a50050(puVar25,lVar22);
      FUN_100a5008c();
      FUN_100a500c0();
      _swift_allocError(&DAT_100f2de38,puVar11,0,0);
      uVar13 = *puVar25;
      puVar11[1] = puVar25[1];
      *puVar11 = uVar13;
      uVar27 = puVar25[5];
      uVar19 = puVar25[4];
      uVar16 = puVar25[7];
      uVar13 = puVar25[6];
      uVar29 = puVar25[3];
      uVar28 = puVar25[2];
      puVar11[8] = puVar25[8];
      puVar11[5] = uVar27;
      puVar11[4] = uVar19;
      puVar11[7] = uVar16;
      puVar11[6] = uVar13;
      puVar11[3] = uVar29;
      puVar11[2] = uVar28;
      _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a64958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
    if (lVar1 < (long)uVar14) {
LAB_100a64784:
      puVar25 = (undefined8 *)(unaff_x22 + 0x298);
      puVar11 = (undefined8 *)(unaff_x22 + 0x2e0);
      Swift::_StringGuts::grow(0x83,param_2);
      *(undefined8 *)(unaff_x22 + 0x6f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x6f8) = 0xe000000000000000;
      SVar32.bridgeObject = (void *)0x8000000100db88c0;
      SVar32.str = (char *)0xd00000000000001e;
      SVar39.bridgeObject = param_4;
      SVar39.str = param_3;
      Swift::String::append(SVar32,SVar39);
      *(ulong *)(unaff_x22 + 0x720) = uVar14;
      SVar33 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = param_4;
      SVar40.str = param_3;
      Swift::String::append(SVar33,SVar40);
      _swift_bridgeObjectRelease(SVar33.bridgeObject);
      SVar34.bridgeObject = (void *)0x8000000100db88e0;
      SVar34.str = (char *)0xd000000000000021;
      SVar41.bridgeObject = param_4;
      SVar41.str = param_3;
      Swift::String::append(SVar34,SVar41);
      *(long *)(unaff_x22 + 0x728) = lVar1;
      pcVar18 = "";
      puVar21 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (unaff_x22 + 0x728,unaff_x22 + 0x6f0,&DAT_100f2b538,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar35.bridgeObject = (void *)0x8000000100db8800;
      SVar35.str = (char *)0xd000000000000040;
      SVar42.bridgeObject = puVar21;
      SVar42.str = pcVar18;
      Swift::String::append(SVar35,SVar42);
      *(undefined1 *)(unaff_x22 + 0x298) = 6;
      *(undefined8 *)(unaff_x22 + 0x2a0) = *(undefined8 *)(unaff_x22 + 0x6f0);
      *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(unaff_x22 + 0x6f8);
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x2b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x2d0) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0x165;
      *(undefined1 *)(unaff_x22 + 0x2e0) = 6;
      *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x6f0);
      *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x6f8);
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
      *(undefined8 *)(unaff_x22 + 0x300) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 800) = 0x165;
      lVar22 = unaff_x22 + 0x1c0;
      goto LAB_100a648e4;
    }
    if ((*(char *)(unaff_x22 + 0xa1) != '\x03') && (*(char *)(unaff_x22 + 0xa1) != '\x06')) {
      if ((0 < lVar24) && (uVar14 < 0x4000001)) {
        piVar23 = *(int **)(*(long *)(unaff_x22 + 0x758) + 0x10);
        iVar2 = *piVar23;
        plVar15 = (long *)(ulong)(uint)piVar23[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x770) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_100a64f1c;
                    /* WARNING: Could not recover jumptable at 0x000100a649d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar23))
                  (*(undefined8 *)(unaff_x22 + 0x740),uVar14,*(undefined8 *)(unaff_x22 + 0x750),
                   *(undefined8 *)(unaff_x22 + 0x758));
        return;
      }
LAB_100a64c68:
      FUN_1006116e8();
      uVar12 = *param_1;
      uVar5 = param_1[2];
      uVar4 = *(undefined2 *)((long)param_1 + 0x14);
      uVar3 = *(undefined1 *)((long)param_1 + 0x16);
      uVar26 = param_1[1];
      *(ulong *)(unaff_x22 + 0x610) = uVar12;
      *(ulong *)(unaff_x22 + 0x618) = uVar26;
      *(int *)(unaff_x22 + 0x620) = (int)uVar5;
      *(undefined2 *)(unaff_x22 + 0x624) = uVar4;
      *(undefined1 *)(unaff_x22 + 0x626) = uVar3;
      if ((int)uVar5 - (uint)CONCAT21(uVar4,uVar3) < uVar14) {
        _swift_retain();
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = (uint)uVar12;
        if ((uVar12 & 1) == 0) {
          FUN_1000d2130();
          FUN_100612224(uVar14,uVar10 & 1);
        }
        else {
          FUN_100612380(uVar14,0);
        }
      }
      else {
        _swift_retain();
      }
      uVar13 = *(undefined8 *)(unaff_x22 + 0x740);
      uVar16 = 0x7fffffffffffffff;
      uVar19 = 0x800000;
      (**(code **)(*(long *)(unaff_x22 + 0x758) + 0x18))
                (uVar13,0x7fffffffffffffff,0x800000,*(undefined8 *)(unaff_x22 + 0x750));
      FUN_100a586f8(unaff_x22 + 0x520);
      FUN_10026569c(uVar13,uVar16,uVar19);
      lVar22 = *(long *)(unaff_x22 + 0x520);
      *(long *)(unaff_x22 + 0x778) = lVar22;
      if (*(char *)(unaff_x22 + 0x548) != '\x01') {
        uVar13 = *(undefined8 *)(lVar22 + 0x10);
        bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar9 & 1) == 0) {
          pcVar7 = FUN_100a6a4a0;
          _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar13);
          *(code **)(unaff_x22 + 0x788) = pcVar7;
          plVar15 = (long *)0x130;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x790) = plVar15;
          pcVar7 = FUN_100a6502c;
          goto LAB_100a64eec;
        }
        plVar15 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x780) = plVar15;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_100a64f9c;
        goto LAB_100a64e80;
      }
      *(long *)(unaff_x22 + 0x580) = lVar22;
      *(undefined8 *)(unaff_x22 + 0x590) = *(undefined8 *)(unaff_x22 + 0x530);
      *(undefined8 *)(unaff_x22 + 0x588) = *(undefined8 *)(unaff_x22 + 0x528);
      *(undefined8 *)(unaff_x22 + 0x5a0) = *(undefined8 *)(unaff_x22 + 0x540);
      *(undefined8 *)(unaff_x22 + 0x598) = *(undefined8 *)(unaff_x22 + 0x538);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x598);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x5a0);
      FUN_10007d048(unaff_x22 + 0x580,uVar16);
      uVar13 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,uVar19,uVar16,
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                 ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                );
      *(undefined8 *)(unaff_x22 + 2000) = uVar13;
      OVar8 = Swift::Optional::typeMetadataAccessor();
      *(long *)(unaff_x22 + 0x7d8) = CONCAT71(extraout_var_00,OVar8.value);
      lVar22 = *(long *)(CONCAT71(extraout_var_00,OVar8.value) + -8);
      *(long *)(unaff_x22 + 0x7e0) = lVar22;
      uVar14 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x7e8) = uVar14;
      plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x7f0) = plVar15;
      pcVar7 = FUN_100a65630;
      goto LAB_100a64ddc;
    }
    if (lVar22 != 0) {
LAB_100a646dc:
      *(undefined1 *)(unaff_x22 + 0x400) = 9;
      *(undefined8 *)(unaff_x22 + 0x408) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100db8620;
      *(undefined8 *)(unaff_x22 + 0x418) = 0;
      *(undefined8 *)(unaff_x22 + 0x420) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x428) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 0x430) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x438) = 0x8000000100db8890;
      puVar11 = (undefined8 *)(unaff_x22 + 0x3b8);
      puVar25 = (undefined8 *)(unaff_x22 + 0x400);
      *(undefined8 *)(unaff_x22 + 0x440) = 0x1a1;
      *(undefined1 *)(unaff_x22 + 0x3b8) = 9;
      *(undefined8 *)(unaff_x22 + 0x3c0) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x3c8) = 0x8000000100db8620;
      *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd000000000000031;
      *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100db8850;
      *(undefined8 *)(unaff_x22 + 1000) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x3f0) = 0x8000000100db8890;
      *(undefined8 *)(unaff_x22 + 0x3f8) = 0x1a1;
      lVar22 = unaff_x22 + 0x448;
      goto LAB_100a648e4;
    }
  }
  FUN_1006116e8();
  uVar12 = *param_1;
  uVar5 = param_1[2];
  uVar4 = *(undefined2 *)((long)param_1 + 0x14);
  uVar3 = *(undefined1 *)((long)param_1 + 0x16);
  uVar26 = param_1[1];
  *(ulong *)(unaff_x22 + 0x640) = uVar12;
  *(ulong *)(unaff_x22 + 0x648) = uVar26;
  *(int *)(unaff_x22 + 0x650) = (int)uVar5;
  *(undefined2 *)(unaff_x22 + 0x654) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x656) = uVar3;
  if ((int)uVar5 - (uint)CONCAT21(uVar4,uVar3) < uVar14) {
    _swift_retain();
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = (uint)uVar12;
    if ((uVar12 & 1) == 0) {
      FUN_1000d2130();
      FUN_100612224(uVar14,uVar10 & 1);
    }
    else {
      FUN_100612380(uVar14,0);
    }
  }
  else {
    _swift_retain();
  }
  uVar13 = 0;
  uVar16 = 0x7fffffffffffffff;
  uVar19 = 0x800000;
  (**(code **)(*(long *)(unaff_x22 + 0x758) + 0x18))
            (0,0x7fffffffffffffff,0x800000,*(undefined8 *)(unaff_x22 + 0x750));
  FUN_100a586f8(unaff_x22 + 0x550);
  FUN_10026569c(uVar13,uVar16,uVar19);
  lVar22 = *(long *)(unaff_x22 + 0x550);
  *(long *)(unaff_x22 + 0x800) = lVar22;
  if (*(char *)(unaff_x22 + 0x578) != '\x01') {
    uVar13 = *(undefined8 *)(lVar22 + 0x10);
    bVar9 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar9 & 1) == 0) {
      pcVar7 = thunk_FUN_100a6a4a0;
      _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar13);
      *(code **)(unaff_x22 + 0x810) = pcVar7;
      plVar15 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x818) = plVar15;
      pcVar7 = FUN_100a65ce8;
LAB_100a64eec:
      *plVar15 = unaff_x22;
      plVar15[1] = (long)pcVar7;
      FUN_100a691b0(uVar13);
      return;
    }
    plVar15 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x808) = plVar15;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar15 = unaff_x22;
    plVar15[1] = (long)FUN_100a65c58;
LAB_100a64e80:
    Swift::_withTaskCancellationHandler();
    return;
  }
  *(long *)(unaff_x22 + 0x5a8) = lVar22;
  *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(unaff_x22 + 0x570);
  *(undefined8 *)(unaff_x22 + 0x5c0) = *(undefined8 *)(unaff_x22 + 0x568);
  *(undefined8 *)(unaff_x22 + 0x5b8) = *(undefined8 *)(unaff_x22 + 0x560);
  *(undefined8 *)(unaff_x22 + 0x5b0) = *(undefined8 *)(unaff_x22 + 0x558);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x5c0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x5c8);
  FUN_10007d048(unaff_x22 + 0x5a8,uVar16);
  uVar13 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar19,uVar16,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8,
             PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
  *(undefined8 *)(unaff_x22 + 0x858) = uVar13;
  OVar8 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x860) = CONCAT71(extraout_var,OVar8.value);
  lVar22 = *(long *)(CONCAT71(extraout_var,OVar8.value) + -8);
  *(long *)(unaff_x22 + 0x868) = lVar22;
  uVar14 = *(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x870) = uVar14;
  plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x878) = plVar15;
  pcVar7 = FUN_100a662e8;
LAB_100a64ddc:
  *plVar15 = unaff_x22;
  plVar15[1] = (long)pcVar7;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x100a64f1c | FUN_100a64f1c */

void FUN_100a64f1c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x770));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100a64f74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100a64f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100a64f9c | FUN_100a64f9c */

void FUN_100a64f9c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x780));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x7c0) = *(undefined8 *)(lVar2 + 0x658);
    *(undefined8 *)(lVar2 + 0x7b8) = *(undefined8 *)(lVar2 + 0x660);
    *(undefined1 *)(lVar2 + 0x549) = *(undefined1 *)(lVar2 + 0x66e);
    *(undefined2 *)(lVar2 + 0x54a) = *(undefined2 *)(lVar2 + 0x66c);
    *(undefined4 *)(lVar2 + 0x54c) = *(undefined4 *)(lVar2 + 0x668);
    pcVar1 = FUN_100a65170;
  }
  else {
    *(long *)(lVar2 + 0x7c8) = unaff_x20;
    pcVar1 = FUN_100a655e0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6502c | FUN_100a6502c */

void FUN_100a6502c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x798) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x790));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x7a0) = param_3;
    *(undefined8 *)(lVar2 + 0x7a8) = param_2;
    *(undefined8 *)(lVar2 + 0x7b0) = param_1;
    pcVar1 = FUN_100a650b8;
  }
  else {
    pcVar1 = FUN_100a65124;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a650b8 | FUN_100a650b8 */

void FUN_100a650b8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x7a0);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x788));
  *(undefined8 *)(unaff_x22 + 0x7c0) = *(undefined8 *)(unaff_x22 + 0x7b0);
  *(undefined8 *)(unaff_x22 + 0x7b8) = *(undefined8 *)(unaff_x22 + 0x7a8);
  *(char *)(unaff_x22 + 0x549) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x54a) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x54c) = (int)uVar1;
  _swift_task_switch(FUN_100a65170,0,0);
  return;
}



/* Address: 0x100a65124 | FUN_100a65124 */

void FUN_100a65124(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x788));
  *(undefined8 *)(unaff_x22 + 0x7c8) = *(undefined8 *)(unaff_x22 + 0x798);
  _swift_task_switch(FUN_100a655e0,0,0);
  return;
}



/* Address: 0x100a65170 | FUN_100a65170 */

void FUN_100a65170(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  Optional OVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x778);
  *(undefined1 *)(unaff_x22 + 0x548) = 0;
  lVar10 = *(long *)(unaff_x22 + 0x7c0);
  if (lVar10 == 0) {
    FUN_100a68b04(unaff_x22 + 0x520);
                    /* WARNING: Could not recover jumptable at 0x000100a653f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618),
               (ulong)*(uint7 *)(unaff_x22 + 0x620));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x748);
  *(long *)(unaff_x22 + 0x688) = lVar10;
  *(int *)(unaff_x22 + 0x690) = (int)*(undefined8 *)(unaff_x22 + 0x7b8);
  *(int *)(unaff_x22 + 0x694) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x7b8) >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x698) = *(undefined4 *)(unaff_x22 + 0x54c);
  *(undefined2 *)(unaff_x22 + 0x69c) = *(undefined2 *)(unaff_x22 + 0x54a);
  *(undefined1 *)(unaff_x22 + 0x69e) = *(undefined1 *)(unaff_x22 + 0x549);
  FUN_10060c3b0(unaff_x22 + 0x688);
  if ((lVar12 != 0x7fffffffffffffff) &&
     (lVar12 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x61c) - *(int *)(unaff_x22 + 0x618)))) {
    lVar12 = 0xffffffff;
    if (*(long *)(unaff_x22 + 0x748) != 0x7fffffffffffffff) {
      lVar12 = *(long *)(unaff_x22 + 0x748);
    }
    Swift::_StringGuts::grow(0x7e,param_2);
    *(undefined8 *)(unaff_x22 + 0x6e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6e8) = 0xe000000000000000;
    SVar17.bridgeObject = (void *)0x8000000100db87c0;
    SVar17.str = (char *)0xd00000000000003c;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar17,SVar19);
    *(long *)(unaff_x22 + 0x718) = lVar12;
    pcVar8 = "";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (unaff_x22 + 0x718,unaff_x22 + 0x6e0,&DAT_100f2b538,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar18.bridgeObject = (void *)0x8000000100db8800;
    SVar18.str = (char *)0xd000000000000040;
    SVar20.bridgeObject = puVar9;
    SVar20.str = pcVar8;
    Swift::String::append(SVar18,SVar20);
    *(undefined1 *)(unaff_x22 + 0x250) = 6;
    *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x6e0);
    *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x6e8);
    *(undefined8 *)(unaff_x22 + 0x268) = 0;
    *(undefined8 *)(unaff_x22 + 0x270) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x278) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x280) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x290) = 0x194;
    *(undefined1 *)(unaff_x22 + 0x208) = 6;
    *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x6e0);
    *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x6e8);
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x194;
    FUN_100a50050(unaff_x22 + 0x250,unaff_x22 + 0x328);
    puVar3 = (undefined8 *)(unaff_x22 + 0x208);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
    puVar3[1] = *(undefined8 *)(unaff_x22 + 600);
    *puVar3 = uVar4;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x288);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x280);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x268);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x260);
    puVar3[8] = *(undefined8 *)(unaff_x22 + 0x290);
    puVar3[5] = uVar14;
    puVar3[4] = uVar13;
    puVar3[7] = uVar11;
    puVar3[6] = uVar4;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    _swift_willThrow();
    _swift_release(lVar10);
    FUN_100a68b04(unaff_x22 + 0x520);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x610));
                    /* WARNING: Could not recover jumptable at 0x000100a653ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x22 + 0x520);
  *(long *)(unaff_x22 + 0x778) = lVar10;
  if (*(char *)(unaff_x22 + 0x548) == '\x01') {
    *(long *)(unaff_x22 + 0x580) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x590) = *(undefined8 *)(unaff_x22 + 0x530);
    *(undefined8 *)(unaff_x22 + 0x588) = *(undefined8 *)(unaff_x22 + 0x528);
    *(undefined8 *)(unaff_x22 + 0x5a0) = *(undefined8 *)(unaff_x22 + 0x540);
    *(undefined8 *)(unaff_x22 + 0x598) = *(undefined8 *)(unaff_x22 + 0x538);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x598);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x5a0);
    FUN_10007d048(unaff_x22 + 0x580,uVar11);
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 2000) = uVar4;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x7d8) = CONCAT71(extraout_var,OVar1.value);
    lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
    *(long *)(unaff_x22 + 0x7e0) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x7e8) = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x7f0) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a65630;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x780) = plVar6;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a64f9c;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar7 = FUN_100a6a4a0;
  _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar4);
  *(code **)(unaff_x22 + 0x788) = pcVar7;
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x790) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a6502c;
  FUN_100a691b0(uVar4);
  return;
}



/* Address: 0x100a655e0 | FUN_100a655e0 */

void FUN_100a655e0(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x778);
  *(undefined1 *)(unaff_x22 + 0x548) = 0;
  FUN_100a68b04(unaff_x22 + 0x520);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x610));
                    /* WARNING: Could not recover jumptable at 0x000100a6562c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a65630 | FUN_100a65630 */

void FUN_100a65630(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x7f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x7f0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a65694;
  }
  else {
    pcVar1 = FUN_100a65bec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a65694 | FUN_100a65694 */

void FUN_100a65694(void)

{
  undefined8 *puVar1;
  Optional OVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  _Var10.unknown = (undefined *)(unaff_x22 + 0x5f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x7e8);
  lVar13 = *(long *)(unaff_x22 + 2000);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = uVar12;
  (**(code **)(lVar14 + 0x30))(uVar12,1,lVar13);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x7e0) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x7d8));
    _swift_task_dealloc(uVar12);
    *(undefined8 *)(unaff_x22 + 0x5f8) = 0;
    *(undefined8 *)_Var10.unknown = 0;
    *(undefined8 *)(unaff_x22 + 0x608) = 0;
    *(undefined8 *)(unaff_x22 + 0x600) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x608) = lVar13;
    FUN_10000cbb0(_Var10.unknown);
    (**(code **)(lVar14 + 0x20))();
    _swift_task_dealloc(uVar12);
  }
  puVar1 = (undefined8 *)(unaff_x22 + 0x520);
  puVar5 = (undefined8 *)(unaff_x22 + 0x580);
  pcVar4 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar11 = &DAT_100eeaaa8;
  uVar7 = unaff_x22 + 0x6a0;
  _swift_dynamicCast();
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x588);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x598);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x590);
    *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x5a0);
    *(undefined1 *)(unaff_x22 + 0x548) = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x6a0);
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x588);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x598);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x590);
    *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x5a0);
    *(undefined1 *)(unaff_x22 + 0x548) = 1;
    if (lVar13 != 0) {
      lVar14 = *(long *)(unaff_x22 + 0x748);
      *(long *)(unaff_x22 + 0x688) = lVar13;
      *(int *)(unaff_x22 + 0x690) = (int)*(undefined8 *)(unaff_x22 + 0x6a8);
      *(int *)(unaff_x22 + 0x694) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x6a8) >> 0x20);
      *(undefined4 *)(unaff_x22 + 0x698) = *(undefined4 *)(unaff_x22 + 0x6b0);
      *(short *)(unaff_x22 + 0x69c) = (short)*(undefined3 *)(unaff_x22 + 0x6b4);
      *(undefined1 *)(unaff_x22 + 0x69e) = *(undefined1 *)(unaff_x22 + 0x6b6);
      FUN_10060c3b0(unaff_x22 + 0x688);
      if ((lVar14 != 0x7fffffffffffffff) &&
         (lVar14 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x61c) - *(int *)(unaff_x22 + 0x618))))
      {
        lVar14 = 0xffffffff;
        if (*(long *)(unaff_x22 + 0x748) != 0x7fffffffffffffff) {
          lVar14 = *(long *)(unaff_x22 + 0x748);
        }
        Swift::_StringGuts::grow(0x7e,_Var10);
        *(undefined8 *)(unaff_x22 + 0x6e0) = 0;
        *(undefined8 *)(unaff_x22 + 0x6e8) = 0xe000000000000000;
        SVar19.bridgeObject = (void *)0x8000000100db87c0;
        SVar19.str = (char *)0xd00000000000003c;
        SVar21.bridgeObject = puVar11;
        SVar21.str = pcVar4;
        Swift::String::append(SVar19,SVar21);
        *(long *)(unaff_x22 + 0x718) = lVar14;
        pcVar4 = "";
        puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (unaff_x22 + 0x718,unaff_x22 + 0x6e0,&DAT_100f2b538,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar20.bridgeObject = (void *)0x8000000100db8800;
        SVar20.str = (char *)0xd000000000000040;
        SVar22.bridgeObject = puVar11;
        SVar22.str = pcVar4;
        Swift::String::append(SVar20,SVar22);
        *(undefined1 *)(unaff_x22 + 0x250) = 6;
        *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x6e0);
        *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x6e8);
        *(undefined8 *)(unaff_x22 + 0x268) = 0;
        *(undefined8 *)(unaff_x22 + 0x270) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x278) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x280) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x290) = 0x194;
        *(undefined1 *)(unaff_x22 + 0x208) = 6;
        *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x6e0);
        *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x6e8);
        *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x220) = 0;
        *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x248) = 0x194;
        FUN_100a50050(unaff_x22 + 0x250,unaff_x22 + 0x328);
        puVar5 = (undefined8 *)(unaff_x22 + 0x208);
        FUN_100a5008c();
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar5,0,0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x250);
        puVar5[1] = *(undefined8 *)(unaff_x22 + 600);
        *puVar5 = uVar6;
        uVar16 = *(undefined8 *)(unaff_x22 + 0x278);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x288);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x280);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x268);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x260);
        puVar5[8] = *(undefined8 *)(unaff_x22 + 0x290);
        puVar5[5] = uVar16;
        puVar5[4] = uVar15;
        puVar5[7] = uVar12;
        puVar5[6] = uVar6;
        puVar5[3] = uVar18;
        puVar5[2] = uVar17;
        _swift_willThrow();
        _swift_release(lVar13);
        FUN_100a68b04(puVar1);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x610));
                    /* WARNING: Could not recover jumptable at 0x000100a659a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_release(lVar13);
      lVar13 = *(long *)(unaff_x22 + 0x520);
      *(long *)(unaff_x22 + 0x778) = lVar13;
      if (*(char *)(unaff_x22 + 0x548) == '\x01') {
        *(long *)(unaff_x22 + 0x580) = lVar13;
        *(undefined8 *)(unaff_x22 + 0x590) = *(undefined8 *)(unaff_x22 + 0x530);
        *(undefined8 *)(unaff_x22 + 0x588) = *(undefined8 *)(unaff_x22 + 0x528);
        *(undefined8 *)(unaff_x22 + 0x5a0) = *(undefined8 *)(unaff_x22 + 0x540);
        *(undefined8 *)(unaff_x22 + 0x598) = *(undefined8 *)(unaff_x22 + 0x538);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x598);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x5a0);
        FUN_10007d048(puVar5,uVar12);
        uVar6 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar15,uVar12,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 2000) = uVar6;
        OVar2 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x7d8) = CONCAT71(extraout_var,OVar2.value);
        lVar13 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
        *(long *)(unaff_x22 + 0x7e0) = lVar13;
        uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x7e8) = uVar7;
        plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x7f0) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100a65630;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar3 & 1) != 0) {
        plVar8 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x780) = plVar8;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100a64f9c;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar9 = FUN_100a6a4a0;
      _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar6);
      *(code **)(unaff_x22 + 0x788) = pcVar9;
      plVar8 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x790) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a6502c;
      FUN_100a691b0(uVar6);
      return;
    }
  }
  FUN_100a68b04(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a659fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x610),*(undefined8 *)(unaff_x22 + 0x618),
             (ulong)*(uint7 *)(unaff_x22 + 0x620));
  return;
}



/* Address: 0x100a65bec | FUN_100a65bec */

void FUN_100a65bec(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x7e8));
  *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x588);
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x580);
  *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x598);
  *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x590);
  *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x5a0);
  *(undefined1 *)(unaff_x22 + 0x548) = 1;
  FUN_100a68b04(unaff_x22 + 0x520);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x610));
                    /* WARNING: Could not recover jumptable at 0x000100a65c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a65c58 | FUN_100a65c58 */

void FUN_100a65c58(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x808));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x848) = *(undefined8 *)(lVar2 + 0x670);
    *(undefined8 *)(lVar2 + 0x840) = *(undefined8 *)(lVar2 + 0x678);
    *(undefined1 *)(lVar2 + 0x579) = *(undefined1 *)(lVar2 + 0x686);
    *(undefined2 *)(lVar2 + 0x57a) = *(undefined2 *)(lVar2 + 0x684);
    *(undefined4 *)(lVar2 + 0x57c) = *(undefined4 *)(lVar2 + 0x680);
    pcVar1 = FUN_100a65e24;
  }
  else {
    *(long *)(lVar2 + 0x850) = unaff_x20;
    pcVar1 = FUN_100a66298;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a65ce8 | FUN_100a65ce8 */

void FUN_100a65ce8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x820) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x818));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x828) = param_3;
    *(undefined8 *)(lVar2 + 0x830) = param_2;
    *(undefined8 *)(lVar2 + 0x838) = param_1;
    pcVar1 = FUN_100a65d74;
  }
  else {
    pcVar1 = FUN_100a65dd8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a65d74 | FUN_100a65d74 */

void FUN_100a65d74(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x828);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x810));
  *(undefined8 *)(unaff_x22 + 0x848) = *(undefined8 *)(unaff_x22 + 0x838);
  *(undefined8 *)(unaff_x22 + 0x840) = *(undefined8 *)(unaff_x22 + 0x830);
  *(char *)(unaff_x22 + 0x579) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x57a) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x57c) = (int)uVar1;
  _swift_task_switch(FUN_100a65e24,0,0);
  return;
}



/* Address: 0x100a65dd8 | FUN_100a65dd8 */

void FUN_100a65dd8(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x810));
  *(undefined8 *)(unaff_x22 + 0x850) = *(undefined8 *)(unaff_x22 + 0x820);
  _swift_task_switch(FUN_100a66298,0,0);
  return;
}



/* Address: 0x100a65e24 | FUN_100a65e24 */

void FUN_100a65e24(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  Optional OVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined7 extraout_var;
  ulong uVar5;
  long *plVar6;
  code *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x800);
  *(undefined1 *)(unaff_x22 + 0x578) = 0;
  lVar10 = *(long *)(unaff_x22 + 0x848);
  if (lVar10 == 0) {
    FUN_100a68b04(unaff_x22 + 0x550);
                    /* WARNING: Could not recover jumptable at 0x000100a660a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x640),*(undefined8 *)(unaff_x22 + 0x648),
               (ulong)*(uint7 *)(unaff_x22 + 0x650));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x748);
  *(long *)(unaff_x22 + 0x6b8) = lVar10;
  *(int *)(unaff_x22 + 0x6c0) = (int)*(undefined8 *)(unaff_x22 + 0x840);
  *(int *)(unaff_x22 + 0x6c4) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x840) >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x6c8) = *(undefined4 *)(unaff_x22 + 0x57c);
  *(undefined2 *)(unaff_x22 + 0x6cc) = *(undefined2 *)(unaff_x22 + 0x57a);
  *(undefined1 *)(unaff_x22 + 0x6ce) = *(undefined1 *)(unaff_x22 + 0x579);
  FUN_10060c3b0(unaff_x22 + 0x6b8);
  if ((lVar12 != 0x7fffffffffffffff) &&
     (lVar12 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x64c) - *(int *)(unaff_x22 + 0x648)))) {
    lVar12 = 0xffffffff;
    if (*(long *)(unaff_x22 + 0x748) != 0x7fffffffffffffff) {
      lVar12 = *(long *)(unaff_x22 + 0x748);
    }
    Swift::_StringGuts::grow(0x7e,param_2);
    *(undefined8 *)(unaff_x22 + 0x6d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x6d8) = 0xe000000000000000;
    SVar17.bridgeObject = (void *)0x8000000100db87c0;
    SVar17.str = (char *)0xd00000000000003c;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar17,SVar19);
    *(long *)(unaff_x22 + 0x710) = lVar12;
    pcVar8 = "";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (unaff_x22 + 0x710,unaff_x22 + 0x6d0,&DAT_100f2b538,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar18.bridgeObject = (void *)0x8000000100db8800;
    SVar18.str = (char *)0xd000000000000040;
    SVar20.bridgeObject = puVar9;
    SVar20.str = pcVar8;
    Swift::String::append(SVar18,SVar20);
    *(undefined1 *)(unaff_x22 + 0x490) = 6;
    *(undefined8 *)(unaff_x22 + 0x498) = *(undefined8 *)(unaff_x22 + 0x6d0);
    *(undefined8 *)(unaff_x22 + 0x4a0) = *(undefined8 *)(unaff_x22 + 0x6d8);
    *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x4b0) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x4b8) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x4c0) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x4c8) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x4d0) = 0x1b2;
    *(undefined1 *)(unaff_x22 + 0x4d8) = 6;
    *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x6d0);
    *(undefined8 *)(unaff_x22 + 0x4e8) = *(undefined8 *)(unaff_x22 + 0x6d8);
    *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x508) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x510) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x518) = 0x1b2;
    FUN_100a50050(unaff_x22 + 0x490,unaff_x22 + 0x370);
    puVar3 = (undefined8 *)(unaff_x22 + 0x4d8);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x490);
    puVar3[1] = *(undefined8 *)(unaff_x22 + 0x498);
    *puVar3 = uVar4;
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4b8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x4c0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x4a8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4a0);
    puVar3[8] = *(undefined8 *)(unaff_x22 + 0x4d0);
    puVar3[5] = uVar11;
    puVar3[4] = uVar4;
    puVar3[7] = uVar14;
    puVar3[6] = uVar13;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    _swift_willThrow();
    _swift_release(lVar10);
    FUN_100a68b04(unaff_x22 + 0x550);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x640));
                    /* WARNING: Could not recover jumptable at 0x000100a66064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x22 + 0x550);
  *(long *)(unaff_x22 + 0x800) = lVar10;
  if (*(char *)(unaff_x22 + 0x578) == '\x01') {
    *(long *)(unaff_x22 + 0x5a8) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(unaff_x22 + 0x570);
    *(undefined8 *)(unaff_x22 + 0x5c0) = *(undefined8 *)(unaff_x22 + 0x568);
    *(undefined8 *)(unaff_x22 + 0x5b8) = *(undefined8 *)(unaff_x22 + 0x560);
    *(undefined8 *)(unaff_x22 + 0x5b0) = *(undefined8 *)(unaff_x22 + 0x558);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x5c0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x5c8);
    FUN_10007d048(unaff_x22 + 0x5a8,uVar11);
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 0x858) = uVar4;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x860) = CONCAT71(extraout_var,OVar1.value);
    lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
    *(long *)(unaff_x22 + 0x868) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x870) = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x878) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a662e8;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x808) = plVar6;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a65c58;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar7 = thunk_FUN_100a6a4a0;
  _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar4);
  *(code **)(unaff_x22 + 0x810) = pcVar7;
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x818) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a65ce8;
  FUN_100a691b0(uVar4);
  return;
}



/* Address: 0x100a66298 | FUN_100a66298 */

void FUN_100a66298(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x800);
  *(undefined1 *)(unaff_x22 + 0x578) = 0;
  FUN_100a68b04(unaff_x22 + 0x550);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x640));
                    /* WARNING: Could not recover jumptable at 0x000100a662e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a662e8 | FUN_100a662e8 */

void FUN_100a662e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x880) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x878));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a6634c;
  }
  else {
    pcVar1 = FUN_100a668a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a6634c | FUN_100a6634c */

void FUN_100a6634c(void)

{
  undefined8 *puVar1;
  Optional OVar2;
  byte bVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined7 extraout_var;
  ulong uVar7;
  long *plVar8;
  code *pcVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  _Var10.unknown = (undefined *)(unaff_x22 + 0x5d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x870);
  lVar13 = *(long *)(unaff_x22 + 0x858);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = uVar12;
  (**(code **)(lVar14 + 0x30))(uVar12,1,lVar13);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x868) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x860));
    _swift_task_dealloc(uVar12);
    *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
    *(undefined8 *)_Var10.unknown = 0;
    *(undefined8 *)(unaff_x22 + 0x5e8) = 0;
    *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x5e8) = lVar13;
    FUN_10000cbb0(_Var10.unknown);
    (**(code **)(lVar14 + 0x20))();
    _swift_task_dealloc(uVar12);
  }
  puVar1 = (undefined8 *)(unaff_x22 + 0x550);
  puVar5 = (undefined8 *)(unaff_x22 + 0x5a8);
  pcVar4 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar11 = &DAT_100eeaaa8;
  uVar7 = unaff_x22 + 0x628;
  _swift_dynamicCast();
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x5b0);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x5c0);
    *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x5b8);
    *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x5c8);
    *(undefined1 *)(unaff_x22 + 0x578) = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x628);
    *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x5b0);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x5c0);
    *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x5b8);
    *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x5c8);
    *(undefined1 *)(unaff_x22 + 0x578) = 1;
    if (lVar13 != 0) {
      lVar14 = *(long *)(unaff_x22 + 0x748);
      *(long *)(unaff_x22 + 0x6b8) = lVar13;
      *(int *)(unaff_x22 + 0x6c0) = (int)*(undefined8 *)(unaff_x22 + 0x630);
      *(int *)(unaff_x22 + 0x6c4) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x630) >> 0x20);
      *(undefined4 *)(unaff_x22 + 0x6c8) = *(undefined4 *)(unaff_x22 + 0x638);
      *(short *)(unaff_x22 + 0x6cc) = (short)*(undefined3 *)(unaff_x22 + 0x63c);
      *(undefined1 *)(unaff_x22 + 0x6ce) = *(undefined1 *)(unaff_x22 + 0x63e);
      FUN_10060c3b0(unaff_x22 + 0x6b8);
      if ((lVar14 != 0x7fffffffffffffff) &&
         (lVar14 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x64c) - *(int *)(unaff_x22 + 0x648))))
      {
        lVar14 = 0xffffffff;
        if (*(long *)(unaff_x22 + 0x748) != 0x7fffffffffffffff) {
          lVar14 = *(long *)(unaff_x22 + 0x748);
        }
        Swift::_StringGuts::grow(0x7e,_Var10);
        *(undefined8 *)(unaff_x22 + 0x6d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x6d8) = 0xe000000000000000;
        SVar19.bridgeObject = (void *)0x8000000100db87c0;
        SVar19.str = (char *)0xd00000000000003c;
        SVar21.bridgeObject = puVar11;
        SVar21.str = pcVar4;
        Swift::String::append(SVar19,SVar21);
        *(long *)(unaff_x22 + 0x710) = lVar14;
        pcVar4 = "";
        puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (unaff_x22 + 0x710,unaff_x22 + 0x6d0,&DAT_100f2b538,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar20.bridgeObject = (void *)0x8000000100db8800;
        SVar20.str = (char *)0xd000000000000040;
        SVar22.bridgeObject = puVar11;
        SVar22.str = pcVar4;
        Swift::String::append(SVar20,SVar22);
        *(undefined1 *)(unaff_x22 + 0x490) = 6;
        *(undefined8 *)(unaff_x22 + 0x498) = *(undefined8 *)(unaff_x22 + 0x6d0);
        *(undefined8 *)(unaff_x22 + 0x4a0) = *(undefined8 *)(unaff_x22 + 0x6d8);
        *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x4b0) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x4b8) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x4c0) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x4c8) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x4d0) = 0x1b2;
        *(undefined1 *)(unaff_x22 + 0x4d8) = 6;
        *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x6d0);
        *(undefined8 *)(unaff_x22 + 0x4e8) = *(undefined8 *)(unaff_x22 + 0x6d8);
        *(undefined8 *)(unaff_x22 + 0x4f8) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
        *(undefined8 *)(unaff_x22 + 0x500) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x508) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x510) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x518) = 0x1b2;
        FUN_100a50050(unaff_x22 + 0x490,unaff_x22 + 0x370);
        puVar5 = (undefined8 *)(unaff_x22 + 0x4d8);
        FUN_100a5008c();
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar5,0,0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x490);
        puVar5[1] = *(undefined8 *)(unaff_x22 + 0x498);
        *puVar5 = uVar6;
        uVar12 = *(undefined8 *)(unaff_x22 + 0x4b8);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x4b0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x4c8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x4c0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x4a8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x4a0);
        puVar5[8] = *(undefined8 *)(unaff_x22 + 0x4d0);
        puVar5[5] = uVar12;
        puVar5[4] = uVar6;
        puVar5[7] = uVar16;
        puVar5[6] = uVar15;
        puVar5[3] = uVar18;
        puVar5[2] = uVar17;
        _swift_willThrow();
        _swift_release(lVar13);
        FUN_100a68b04(puVar1);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x640));
                    /* WARNING: Could not recover jumptable at 0x000100a6665c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_release(lVar13);
      lVar13 = *(long *)(unaff_x22 + 0x550);
      *(long *)(unaff_x22 + 0x800) = lVar13;
      if (*(char *)(unaff_x22 + 0x578) == '\x01') {
        *(long *)(unaff_x22 + 0x5a8) = lVar13;
        *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(unaff_x22 + 0x570);
        *(undefined8 *)(unaff_x22 + 0x5c0) = *(undefined8 *)(unaff_x22 + 0x568);
        *(undefined8 *)(unaff_x22 + 0x5b8) = *(undefined8 *)(unaff_x22 + 0x560);
        *(undefined8 *)(unaff_x22 + 0x5b0) = *(undefined8 *)(unaff_x22 + 0x558);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x5c0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x5c8);
        FUN_10007d048(puVar5,uVar12);
        uVar6 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar15,uVar12,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 0x858) = uVar6;
        OVar2 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x860) = CONCAT71(extraout_var,OVar2.value);
        lVar13 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
        *(long *)(unaff_x22 + 0x868) = lVar13;
        uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x870) = uVar7;
        plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x878) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100a662e8;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar3 & 1) != 0) {
        plVar8 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x808) = plVar8;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100a65c58;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar9 = thunk_FUN_100a6a4a0;
      _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar6);
      *(code **)(unaff_x22 + 0x810) = pcVar9;
      plVar8 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x818) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100a65ce8;
      FUN_100a691b0(uVar6);
      return;
    }
  }
  FUN_100a68b04(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a666b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x640),*(undefined8 *)(unaff_x22 + 0x648),
             (ulong)*(uint7 *)(unaff_x22 + 0x650));
  return;
}



/* Address: 0x100a668a8 | FUN_100a668a8 */

void FUN_100a668a8(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x870));
  *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x5b0);
  *(undefined8 *)(unaff_x22 + 0x550) = *(undefined8 *)(unaff_x22 + 0x5a8);
  *(undefined8 *)(unaff_x22 + 0x568) = *(undefined8 *)(unaff_x22 + 0x5c0);
  *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x5b8);
  *(undefined8 *)(unaff_x22 + 0x570) = *(undefined8 *)(unaff_x22 + 0x5c8);
  *(undefined1 *)(unaff_x22 + 0x578) = 1;
  FUN_100a68b04(unaff_x22 + 0x550);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x640));
                    /* WARNING: Could not recover jumptable at 0x000100a66910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a66914 | FUN_100a66914 */

void FUN_100a66914(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  _swift_task_switch(FUN_100a6692c,0,0);
  return;
}



/* Address: 0x100a6692c | FUN_100a6692c */

void FUN_100a6692c(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  plVar1 = *(long **)(unaff_x22 + 0x68);
  lVar2 = *plVar1;
  *(long *)(unaff_x22 + 0x70) = lVar2;
  if ((char)plVar1[5] == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar2;
    lVar4 = plVar1[2];
    lVar2 = plVar1[1];
    lVar5 = plVar1[3];
    *(long *)(unaff_x22 + 0x30) = plVar1[4];
    *(long *)(unaff_x22 + 0x28) = lVar5;
    *(long *)(unaff_x22 + 0x20) = lVar4;
    *(long *)(unaff_x22 + 0x18) = lVar2;
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a66aa8;
    FUN_100a68250();
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a66a08;
  FUN_100a68764(uVar3);
  return;
}



/* Address: 0x100a66a08 | FUN_100a66a08 */

void FUN_100a66a08(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(long *)(lVar2 + 0x48) = unaff_x20;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a66a74;
  }
  else {
    pcVar1 = FUN_100a66a90;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a66a74 | FUN_100a66a74 */

void FUN_100a66a74(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined1 *)(puVar1 + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100a66a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x100a66a90 | FUN_100a66a90 */

void FUN_100a66a90(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined1 *)(puVar1 + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100a66aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a66aa8 | FUN_100a66aa8 */

void FUN_100a66aa8(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x50) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x58) = param_1;
  *(long *)(lVar2 + 0x60) = unaff_x20;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a66b14;
  }
  else {
    pcVar1 = FUN_100a66b40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a66b14 | FUN_100a66b14 */

void FUN_100a66b14(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[4] = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined1 *)(puVar1 + 5) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100a66b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x100a66b40 | FUN_100a66b40 */

void FUN_100a66b40(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[4] = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined1 *)(puVar1 + 5) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100a66b64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a66b68 | FUN_100a66b68 */

void FUN_100a66b68(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  _swift_task_switch(FUN_100a66b80,0,0);
  return;
}



/* Address: 0x100a66b80 | FUN_100a66b80 */

void FUN_100a66b80(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  long lVar5;
  
  plVar1 = *(long **)(unaff_x22 + 0x88);
  lVar2 = *plVar1;
  *(long *)(unaff_x22 + 0x90) = lVar2;
  if ((char)plVar1[5] == '\x01') {
    *(long *)(unaff_x22 + 0x10) = lVar2;
    lVar4 = plVar1[2];
    lVar2 = plVar1[1];
    lVar5 = plVar1[3];
    *(long *)(unaff_x22 + 0x30) = plVar1[4];
    *(long *)(unaff_x22 + 0x28) = lVar5;
    *(long *)(unaff_x22 + 0x20) = lVar4;
    *(long *)(unaff_x22 + 0x18) = lVar2;
    plVar1 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a66d08;
    FUN_100a684d4();
    return;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a66c5c;
  FUN_100a689dc(uVar3);
  return;
}



/* Address: 0x100a66c5c | FUN_100a66c5c */

void FUN_100a66c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x38) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x40) = param_1;
  *(undefined8 *)(lVar2 + 0x48) = param_2;
  *(undefined8 *)(lVar2 + 0x50) = param_3;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a66ccc;
  }
  else {
    pcVar1 = FUN_100a66cf0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a66ccc | FUN_100a66ccc */

void FUN_100a66ccc(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined1 *)(puVar1 + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100a66cec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x48),
             *(ulong *)(unaff_x22 + 0x50) & 0xffffffffffffff);
  return;
}



/* Address: 0x100a66cf0 | FUN_100a66cf0 */

void FUN_100a66cf0(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
  *puVar1 = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined1 *)(puVar1 + 5) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100a66d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a66d08 | FUN_100a66d08 */

void FUN_100a66d08(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long **)(lVar2 + 0x60) = unaff_x22;
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  *(undefined8 *)(lVar2 + 0x78) = param_3;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  *(long *)(lVar2 + 0xb0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a66d78;
  }
  else {
    pcVar1 = FUN_100a66dac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a66d78 | FUN_100a66d78 */

void FUN_100a66d78(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[4] = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined1 *)(puVar1 + 5) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100a66da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
             *(ulong *)(unaff_x22 + 0x78) & 0xffffffffffffff);
  return;
}



/* Address: 0x100a66dac | FUN_100a66dac */

void FUN_100a66dac(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar1[4] = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined1 *)(puVar1 + 5) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100a66dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a66dd4 | FUN_100a66dd4 */

void FUN_100a66dd4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  code *pcVar1;
  
  if (!SCARRY8(param_2,1)) {
                    /* WARNING: Could not recover jumptable at 0x000100a66de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_5 + 0x18))(param_1,param_2 + 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a66de8);
  (*pcVar1)();
}



/* Address: 0x100a66de8 | FUN_100a66de8 */

void FUN_100a66de8(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100a66dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x18))();
  return;
}



/* Address: 0x100a66df0 | FUN_100a66df0 */

void FUN_100a66df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x000100a66e04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x18))(param_1,0x7fffffffffffffff,param_2,param_3);
  return;
}



/* Address: 0x100a66e08 | FUN_100a66e08 */

void FUN_100a66e08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a66e30);
    (*pcVar1)();
  }
  if (!SCARRY8(param_1,1)) {
                    /* WARNING: Could not recover jumptable at 0x000100a66e28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x18))(0,param_1 + 1,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a66e34);
  (*pcVar1)();
}



/* Address: 0x100a66e34 | FUN_100a66e34 */

void FUN_100a66e34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (-1 < param_1) {
                    /* WARNING: Could not recover jumptable at 0x000100a66e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_4 + 0x18))(0,param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a66e58);
  (*pcVar1)();
}



/* Address: 0x100a66e58 | FUN_100a66e58 */

void FUN_100a66e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100a66e68(param_3,param_4,param_5);
  return;
}



/* Address: 0x100a66e68 | FUN_100a66e68 */

void FUN_100a66e68(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100a66e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_3 + 0x18))(0,0x7fffffffffffffff,param_1,param_2);
  return;
}



/* Address: 0x100a66e84 | FUN_100a66e84 */

void FUN_100a66e84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_6;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  _swift_task_switch(FUN_100a66ea8,0,0);
  return;
}



/* Address: 0x100a66ea8 | FUN_100a66ea8 */

void FUN_100a66ea8(void)

{
  int iVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  int *piVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x40);
  uVar5 = uVar7 >> 0x20;
  if (uVar5 < (uVar7 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a66f98);
    (*pcVar2)();
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  if (uVar5 <= (int)uVar8 -
               ((ushort)((ulong)uVar8 >> 0x30) & 0xff | (uint)((ulong)uVar8 >> 0x18) & 0xffff00)) {
    *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0x38);
    *(int *)(unaff_x22 + 0x18) = (int)uVar7;
    *(int *)(unaff_x22 + 0x1c) = (int)(uVar7 >> 0x20);
    *(int *)(unaff_x22 + 0x20) = (int)uVar8;
    *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar8 >> 0x20);
    *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar8 >> 0x30);
    *(ulong *)(unaff_x22 + 0x28) = uVar7 & 0xffffffff;
    *(ulong *)(unaff_x22 + 0x30) = uVar5;
    piVar6 = *(int **)(*(long *)(unaff_x22 + 0x60) + 0x10);
    iVar1 = *piVar6;
    plVar3 = (long *)(ulong)(uint)piVar6[1];
    _swift_retain();
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar3;
    plVar4 = plVar3;
    FUN_100a50010();
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100a66f9c;
                    /* WARNING: Could not recover jumptable at 0x000100a66f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar6))
              ((undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x50),&DAT_100eeb2d0,
               plVar4,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a66f9c);
  (*pcVar2)();
}



/* Address: 0x100a66f9c | FUN_100a66f9c */

void FUN_100a66f9c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x70));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100a67024,0,0);
    return;
  }
  FUN_10096e070(lVar1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a67020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1);
  return;
}



/* Address: 0x100a67024 | FUN_100a67024 */

void FUN_100a67024(void)

{
  long unaff_x22;
  
  FUN_10096e070(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100a6705c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


