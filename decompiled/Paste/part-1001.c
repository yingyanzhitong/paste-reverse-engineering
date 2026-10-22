/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ab5cc4 | FUN_100ab5cc4 */

void FUN_100ab5cc4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x878) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x870));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ab63c0;
  }
  else {
    pcVar1 = FUN_100ab6918;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab5d28 | FUN_100ab5d28 */

void FUN_100ab5d28(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  undefined1 auVar3 [16];
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x880));
  if (unaff_x20 == 0) {
    auVar3 = NEON_ext(*(undefined1 (*) [16])(lVar2 + 0x730),*(undefined1 (*) [16])(lVar2 + 0x730),8,
                      1);
    *(long *)(lVar2 + 0x8c0) = auVar3._8_8_;
    *(long *)(lVar2 + 0x8b8) = auVar3._0_8_;
    *(undefined1 *)(lVar2 + 0x549) = *(undefined1 *)(lVar2 + 0x746);
    *(undefined2 *)(lVar2 + 0x54a) = *(undefined2 *)(lVar2 + 0x744);
    *(undefined4 *)(lVar2 + 0x54c) = *(undefined4 *)(lVar2 + 0x740);
    pcVar1 = FUN_100ab5f00;
  }
  else {
    *(long *)(lVar2 + 0x8c8) = unaff_x20;
    pcVar1 = FUN_100ab6370;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab5dbc | FUN_100ab5dbc */

void FUN_100ab5dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x898) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x890));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x8a0) = param_3;
    *(undefined8 *)(lVar2 + 0x8a8) = param_2;
    *(undefined8 *)(lVar2 + 0x8b0) = param_1;
    pcVar1 = FUN_100ab5e48;
  }
  else {
    pcVar1 = FUN_100ab5eb4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab5e48 | FUN_100ab5e48 */

void FUN_100ab5e48(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x8a0);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x888));
  *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(unaff_x22 + 0x8b0);
  *(undefined8 *)(unaff_x22 + 0x8b8) = *(undefined8 *)(unaff_x22 + 0x8a8);
  *(char *)(unaff_x22 + 0x549) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x54a) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x54c) = (int)uVar1;
  _swift_task_switch(FUN_100ab5f00,0,0);
  return;
}



/* Address: 0x100ab5eb4 | FUN_100ab5eb4 */

void FUN_100ab5eb4(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x888));
  *(undefined8 *)(unaff_x22 + 0x8c8) = *(undefined8 *)(unaff_x22 + 0x898);
  _swift_task_switch(FUN_100ab6370,0,0);
  return;
}



/* Address: 0x100ab5f00 | FUN_100ab5f00 */

void FUN_100ab5f00(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

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
  
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x848);
  *(undefined1 *)(unaff_x22 + 0x548) = 0;
  lVar10 = *(long *)(unaff_x22 + 0x8c0);
  if (lVar10 == 0) {
    FUN_100a68b04(unaff_x22 + 0x520);
                    /* WARNING: Could not recover jumptable at 0x000100ab6180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x718),*(undefined8 *)(unaff_x22 + 0x720),
               (ulong)*(uint7 *)(unaff_x22 + 0x728));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x820);
  *(long *)(unaff_x22 + 0x6e8) = lVar10;
  *(int *)(unaff_x22 + 0x6f0) = (int)*(undefined8 *)(unaff_x22 + 0x8b8);
  *(int *)(unaff_x22 + 0x6f4) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x8b8) >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x6f8) = *(undefined4 *)(unaff_x22 + 0x54c);
  *(undefined2 *)(unaff_x22 + 0x6fc) = *(undefined2 *)(unaff_x22 + 0x54a);
  *(undefined1 *)(unaff_x22 + 0x6fe) = *(undefined1 *)(unaff_x22 + 0x549);
  FUN_10060c3b0(unaff_x22 + 0x6e8);
  if ((lVar12 != 0x7fffffffffffffff) &&
     (lVar12 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x724) - *(int *)(unaff_x22 + 0x720)))) {
    lVar12 = 0xffffffff;
    if (*(long *)(unaff_x22 + 0x820) != 0x7fffffffffffffff) {
      lVar12 = *(long *)(unaff_x22 + 0x820);
    }
    Swift::_StringGuts::grow(0x7e,param_2);
    *(undefined8 *)(unaff_x22 + 0x7b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7c0) = 0xe000000000000000;
    SVar17.bridgeObject = (void *)0x8000000100db87c0;
    SVar17.str = (char *)0xd00000000000003c;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar17,SVar19);
    *(long *)(unaff_x22 + 0x7e8) = lVar12;
    pcVar8 = "";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (unaff_x22 + 0x7e8,unaff_x22 + 0x7b8,&DAT_100f2b538,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar18.bridgeObject = (void *)0x8000000100db8800;
    SVar18.str = (char *)0xd000000000000040;
    SVar20.bridgeObject = puVar9;
    SVar20.str = pcVar8;
    Swift::String::append(SVar18,SVar20);
    *(undefined1 *)(unaff_x22 + 0x2e0) = 6;
    *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x7b8);
    *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x7c0);
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x300) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 800) = 0x1b2;
    *(undefined1 *)(unaff_x22 + 0x328) = 6;
    *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x7b8);
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x7c0);
    *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x340) = 0;
    *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x368) = 0x1b2;
    FUN_100a50050(unaff_x22 + 0x2e0,unaff_x22 + 0x298);
    puVar3 = (undefined8 *)(unaff_x22 + 0x328);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x2e0);
    puVar3[1] = *(undefined8 *)(unaff_x22 + 0x2e8);
    *puVar3 = uVar4;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x308);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x300);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x310);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2f8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2f0);
    puVar3[8] = *(undefined8 *)(unaff_x22 + 800);
    puVar3[5] = uVar14;
    puVar3[4] = uVar13;
    puVar3[7] = uVar11;
    puVar3[6] = uVar4;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    _swift_willThrow();
    _swift_release(lVar10);
    FUN_100a68b04(unaff_x22 + 0x520);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x718));
                    /* WARNING: Could not recover jumptable at 0x000100ab613c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x22 + 0x520);
  *(long *)(unaff_x22 + 0x848) = lVar10;
  if (*(char *)(unaff_x22 + 0x548) == '\x01') {
    *(long *)(unaff_x22 + 0x640) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x530);
    *(undefined8 *)(unaff_x22 + 0x648) = *(undefined8 *)(unaff_x22 + 0x528);
    *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)(unaff_x22 + 0x540);
    *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x538);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x658);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x660);
    FUN_10007d048(unaff_x22 + 0x640,uVar11);
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 0x850) = uVar4;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x858) = CONCAT71(extraout_var,OVar1.value);
    lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
    *(long *)(unaff_x22 + 0x860) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x868) = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x870) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100ab5cc4;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x880) = plVar6;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100ab5d28;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar7 = thunk_FUN_100a6a4a0;
  _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar4);
  *(code **)(unaff_x22 + 0x888) = pcVar7;
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x890) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100ab5dbc;
  FUN_100a691b0(uVar4);
  return;
}



/* Address: 0x100ab6370 | FUN_100ab6370 */

void FUN_100ab6370(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x848);
  *(undefined1 *)(unaff_x22 + 0x548) = 0;
  FUN_100a68b04(unaff_x22 + 0x520);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x718));
                    /* WARNING: Could not recover jumptable at 0x000100ab63bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab63c0 | FUN_100ab63c0 */

void FUN_100ab63c0(void)

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
  
  _Var10.unknown = (undefined *)(unaff_x22 + 0x690);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x868);
  lVar13 = *(long *)(unaff_x22 + 0x850);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = uVar12;
  (**(code **)(lVar14 + 0x30))(uVar12,1,lVar13);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x860) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x858));
    _swift_task_dealloc(uVar12);
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    *(undefined8 *)_Var10.unknown = 0;
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x6a8) = lVar13;
    FUN_10000cbb0(_Var10.unknown);
    (**(code **)(lVar14 + 0x20))();
    _swift_task_dealloc(uVar12);
  }
  puVar1 = (undefined8 *)(unaff_x22 + 0x520);
  puVar5 = (undefined8 *)(unaff_x22 + 0x640);
  pcVar4 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar11 = &DAT_100eeaaa8;
  uVar7 = unaff_x22 + 0x6d0;
  _swift_dynamicCast();
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x648);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x658);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x650);
    *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x660);
    *(undefined1 *)(unaff_x22 + 0x548) = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x6d0);
    *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x648);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x658);
    *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x650);
    *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x660);
    *(undefined1 *)(unaff_x22 + 0x548) = 1;
    if (lVar13 != 0) {
      lVar14 = *(long *)(unaff_x22 + 0x820);
      *(long *)(unaff_x22 + 0x6e8) = lVar13;
      *(int *)(unaff_x22 + 0x6f0) = (int)*(undefined8 *)(unaff_x22 + 0x6d8);
      *(int *)(unaff_x22 + 0x6f4) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x6d8) >> 0x20);
      *(undefined4 *)(unaff_x22 + 0x6f8) = *(undefined4 *)(unaff_x22 + 0x6e0);
      *(short *)(unaff_x22 + 0x6fc) = (short)*(undefined3 *)(unaff_x22 + 0x6e4);
      *(undefined1 *)(unaff_x22 + 0x6fe) = *(undefined1 *)(unaff_x22 + 0x6e6);
      FUN_10060c3b0(unaff_x22 + 0x6e8);
      if ((lVar14 != 0x7fffffffffffffff) &&
         (lVar14 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x724) - *(int *)(unaff_x22 + 0x720))))
      {
        lVar14 = 0xffffffff;
        if (*(long *)(unaff_x22 + 0x820) != 0x7fffffffffffffff) {
          lVar14 = *(long *)(unaff_x22 + 0x820);
        }
        Swift::_StringGuts::grow(0x7e,_Var10);
        *(undefined8 *)(unaff_x22 + 0x7b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x7c0) = 0xe000000000000000;
        SVar19.bridgeObject = (void *)0x8000000100db87c0;
        SVar19.str = (char *)0xd00000000000003c;
        SVar21.bridgeObject = puVar11;
        SVar21.str = pcVar4;
        Swift::String::append(SVar19,SVar21);
        *(long *)(unaff_x22 + 0x7e8) = lVar14;
        pcVar4 = "";
        puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (unaff_x22 + 0x7e8,unaff_x22 + 0x7b8,&DAT_100f2b538,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar20.bridgeObject = (void *)0x8000000100db8800;
        SVar20.str = (char *)0xd000000000000040;
        SVar22.bridgeObject = puVar11;
        SVar22.str = pcVar4;
        Swift::String::append(SVar20,SVar22);
        *(undefined1 *)(unaff_x22 + 0x2e0) = 6;
        *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(unaff_x22 + 0x7b8);
        *(undefined8 *)(unaff_x22 + 0x2f0) = *(undefined8 *)(unaff_x22 + 0x7c0);
        *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x300) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x308) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 800) = 0x1b2;
        *(undefined1 *)(unaff_x22 + 0x328) = 6;
        *(undefined8 *)(unaff_x22 + 0x330) = *(undefined8 *)(unaff_x22 + 0x7b8);
        *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(unaff_x22 + 0x7c0);
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x1b2;
        FUN_100a50050(unaff_x22 + 0x2e0,unaff_x22 + 0x298);
        puVar5 = (undefined8 *)(unaff_x22 + 0x328);
        FUN_100a5008c();
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar5,0,0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x2e0);
        puVar5[1] = *(undefined8 *)(unaff_x22 + 0x2e8);
        *puVar5 = uVar6;
        uVar16 = *(undefined8 *)(unaff_x22 + 0x308);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x300);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x318);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x310);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x2f8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x2f0);
        puVar5[8] = *(undefined8 *)(unaff_x22 + 800);
        puVar5[5] = uVar16;
        puVar5[4] = uVar15;
        puVar5[7] = uVar12;
        puVar5[6] = uVar6;
        puVar5[3] = uVar18;
        puVar5[2] = uVar17;
        _swift_willThrow();
        _swift_release(lVar13);
        FUN_100a68b04(puVar1);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x718));
                    /* WARNING: Could not recover jumptable at 0x000100ab66cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_release(lVar13);
      lVar13 = *(long *)(unaff_x22 + 0x520);
      *(long *)(unaff_x22 + 0x848) = lVar13;
      if (*(char *)(unaff_x22 + 0x548) == '\x01') {
        *(long *)(unaff_x22 + 0x640) = lVar13;
        *(undefined8 *)(unaff_x22 + 0x650) = *(undefined8 *)(unaff_x22 + 0x530);
        *(undefined8 *)(unaff_x22 + 0x648) = *(undefined8 *)(unaff_x22 + 0x528);
        *(undefined8 *)(unaff_x22 + 0x660) = *(undefined8 *)(unaff_x22 + 0x540);
        *(undefined8 *)(unaff_x22 + 0x658) = *(undefined8 *)(unaff_x22 + 0x538);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x658);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x660);
        FUN_10007d048(puVar5,uVar12);
        uVar6 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar15,uVar12,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 0x850) = uVar6;
        OVar2 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x858) = CONCAT71(extraout_var,OVar2.value);
        lVar13 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
        *(long *)(unaff_x22 + 0x860) = lVar13;
        uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x868) = uVar7;
        plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x870) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100ab5cc4;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar3 & 1) != 0) {
        plVar8 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x880) = plVar8;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100ab5d28;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar9 = thunk_FUN_100a6a4a0;
      _swift_task_addCancellationHandler(thunk_FUN_100a6a4a0,uVar6);
      *(code **)(unaff_x22 + 0x888) = pcVar9;
      plVar8 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x890) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100ab5dbc;
      FUN_100a691b0(uVar6);
      return;
    }
  }
  FUN_100a68b04(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ab6728. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x718),*(undefined8 *)(unaff_x22 + 0x720),
             (ulong)*(uint7 *)(unaff_x22 + 0x728));
  return;
}



/* Address: 0x100ab6918 | FUN_100ab6918 */

void FUN_100ab6918(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x868));
  *(undefined8 *)(unaff_x22 + 0x528) = *(undefined8 *)(unaff_x22 + 0x648);
  *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x640);
  *(undefined8 *)(unaff_x22 + 0x538) = *(undefined8 *)(unaff_x22 + 0x658);
  *(undefined8 *)(unaff_x22 + 0x530) = *(undefined8 *)(unaff_x22 + 0x650);
  *(undefined8 *)(unaff_x22 + 0x540) = *(undefined8 *)(unaff_x22 + 0x660);
  *(undefined1 *)(unaff_x22 + 0x548) = 1;
  FUN_100a68b04(unaff_x22 + 0x520);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x718));
                    /* WARNING: Could not recover jumptable at 0x000100ab6980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab6984 | FUN_100ab6984 */

void FUN_100ab6984(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x900) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x8f8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ab7078;
  }
  else {
    pcVar1 = FUN_100ab75ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab69e8 | FUN_100ab69e8 */

void FUN_100ab69e8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x908));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x948) = *(undefined8 *)(lVar2 + 0x760);
    *(undefined8 *)(lVar2 + 0x940) = *(undefined8 *)(lVar2 + 0x768);
    *(undefined1 *)(lVar2 + 0x579) = *(undefined1 *)(lVar2 + 0x776);
    *(undefined2 *)(lVar2 + 0x57a) = *(undefined2 *)(lVar2 + 0x774);
    *(undefined4 *)(lVar2 + 0x57c) = *(undefined4 *)(lVar2 + 0x770);
    pcVar1 = FUN_100ab6bb4;
  }
  else {
    *(long *)(lVar2 + 0x950) = unaff_x20;
    pcVar1 = FUN_100ab7028;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab6a78 | FUN_100ab6a78 */

void FUN_100ab6a78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x920) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x918));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x928) = param_3;
    *(undefined8 *)(lVar2 + 0x930) = param_2;
    *(undefined8 *)(lVar2 + 0x938) = param_1;
    pcVar1 = FUN_100ab6b04;
  }
  else {
    pcVar1 = FUN_100ab6b68;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab6b04 | FUN_100ab6b04 */

void FUN_100ab6b04(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x928);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x910));
  *(undefined8 *)(unaff_x22 + 0x948) = *(undefined8 *)(unaff_x22 + 0x938);
  *(undefined8 *)(unaff_x22 + 0x940) = *(undefined8 *)(unaff_x22 + 0x930);
  *(char *)(unaff_x22 + 0x579) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0x57a) = (short)((ulong)uVar1 >> 0x20);
  *(int *)(unaff_x22 + 0x57c) = (int)uVar1;
  _swift_task_switch(FUN_100ab6bb4,0,0);
  return;
}



/* Address: 0x100ab6b68 | FUN_100ab6b68 */

void FUN_100ab6b68(void)

{
  long unaff_x22;
  
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x910));
  *(undefined8 *)(unaff_x22 + 0x950) = *(undefined8 *)(unaff_x22 + 0x920);
  _swift_task_switch(FUN_100ab7028,0,0);
  return;
}



/* Address: 0x100ab6bb4 | FUN_100ab6bb4 */

void FUN_100ab6bb4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

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
  
  *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x8d0);
  *(undefined1 *)(unaff_x22 + 0x608) = 0;
  lVar10 = *(long *)(unaff_x22 + 0x948);
  if (lVar10 == 0) {
    FUN_100a68b04(unaff_x22 + 0x5e0);
                    /* WARNING: Could not recover jumptable at 0x000100ab6e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))
              (*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750),
               (ulong)*(uint7 *)(unaff_x22 + 0x758));
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 0x820);
  *(long *)(unaff_x22 + 0x700) = lVar10;
  *(int *)(unaff_x22 + 0x708) = (int)*(undefined8 *)(unaff_x22 + 0x940);
  *(int *)(unaff_x22 + 0x70c) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x940) >> 0x20);
  *(undefined4 *)(unaff_x22 + 0x710) = *(undefined4 *)(unaff_x22 + 0x57c);
  *(undefined2 *)(unaff_x22 + 0x714) = *(undefined2 *)(unaff_x22 + 0x57a);
  *(undefined1 *)(unaff_x22 + 0x716) = *(undefined1 *)(unaff_x22 + 0x579);
  FUN_10060c3b0(unaff_x22 + 0x700);
  if ((lVar12 != 0x7fffffffffffffff) &&
     (lVar12 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x754) - *(int *)(unaff_x22 + 0x750)))) {
    lVar12 = 0xffffffff;
    if (*(long *)(unaff_x22 + 0x820) != 0x7fffffffffffffff) {
      lVar12 = *(long *)(unaff_x22 + 0x820);
    }
    Swift::_StringGuts::grow(0x7e,param_2);
    *(undefined8 *)(unaff_x22 + 0x7a8) = 0;
    *(undefined8 *)(unaff_x22 + 0x7b0) = 0xe000000000000000;
    SVar17.bridgeObject = (void *)0x8000000100db87c0;
    SVar17.str = (char *)0xd00000000000003c;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar17,SVar19);
    *(long *)(unaff_x22 + 0x7f0) = lVar12;
    pcVar8 = "";
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (unaff_x22 + 0x7f0,unaff_x22 + 0x7a8,&DAT_100f2b538,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar18.bridgeObject = (void *)0x8000000100db8800;
    SVar18.str = (char *)0xd000000000000040;
    SVar20.bridgeObject = puVar9;
    SVar20.str = pcVar8;
    Swift::String::append(SVar18,SVar20);
    *(undefined1 *)(unaff_x22 + 0x3b8) = 6;
    *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x7a8);
    *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x7b0);
    *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 1000) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x3f0) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x3f8) = 0x194;
    *(undefined1 *)(unaff_x22 + 0x370) = 6;
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x7a8);
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x7b0);
    *(undefined8 *)(unaff_x22 + 0x388) = 0;
    *(undefined8 *)(unaff_x22 + 0x390) = 0xd000000000000031;
    *(undefined8 *)(unaff_x22 + 0x398) = 0x8000000100db8850;
    *(undefined8 *)(unaff_x22 + 0x3a0) = 0xd000000000000027;
    *(undefined8 *)(unaff_x22 + 0x3a8) = 0x8000000100db8890;
    *(undefined8 *)(unaff_x22 + 0x3b0) = 0x194;
    FUN_100a50050((undefined8 *)(unaff_x22 + 0x3b8),unaff_x22 + 0x490);
    puVar3 = (undefined8 *)(unaff_x22 + 0x370);
    FUN_100a5008c();
    FUN_100a500c0();
    _swift_allocError(&DAT_100f2de38,puVar3,0,0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x3b8);
    puVar3[1] = *(undefined8 *)(unaff_x22 + 0x3c0);
    *puVar3 = uVar4;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x3e0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x3d8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x3f0);
    uVar4 = *(undefined8 *)(unaff_x22 + 1000);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x3d0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x3c8);
    puVar3[8] = *(undefined8 *)(unaff_x22 + 0x3f8);
    puVar3[5] = uVar14;
    puVar3[4] = uVar13;
    puVar3[7] = uVar11;
    puVar3[6] = uVar4;
    puVar3[3] = uVar16;
    puVar3[2] = uVar15;
    _swift_willThrow();
    _swift_release(lVar10);
    FUN_100a68b04(unaff_x22 + 0x5e0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x748));
                    /* WARNING: Could not recover jumptable at 0x000100ab6df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_release(lVar10);
  lVar10 = *(long *)(unaff_x22 + 0x5e0);
  *(long *)(unaff_x22 + 0x8d0) = lVar10;
  if (*(char *)(unaff_x22 + 0x608) == '\x01') {
    *(long *)(unaff_x22 + 0x668) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x688) = *(undefined8 *)(unaff_x22 + 0x600);
    *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x5f8);
    *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x5f0);
    *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)(unaff_x22 + 0x5e8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x680);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x688);
    FUN_10007d048(unaff_x22 + 0x668,uVar11);
    uVar4 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,uVar13,uVar11,
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
               ,PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0);
    *(undefined8 *)(unaff_x22 + 0x8d8) = uVar4;
    OVar1 = Swift::Optional::typeMetadataAccessor();
    *(long *)(unaff_x22 + 0x8e0) = CONCAT71(extraout_var,OVar1.value);
    lVar10 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
    *(long *)(unaff_x22 + 0x8e8) = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x8f0) = uVar5;
    plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x8f8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100ab6984;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
  uVar4 = *(undefined8 *)(lVar10 + 0x10);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    plVar6 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x908) = plVar6;
    FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100ab69e8;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar7 = FUN_100a6a4a0;
  _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar4);
  *(code **)(unaff_x22 + 0x910) = pcVar7;
  plVar6 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x918) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100ab6a78;
  FUN_100a691b0(uVar4);
  return;
}



/* Address: 0x100ab7028 | FUN_100ab7028 */

void FUN_100ab7028(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x8d0);
  *(undefined1 *)(unaff_x22 + 0x608) = 0;
  FUN_100a68b04(unaff_x22 + 0x5e0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x748));
                    /* WARNING: Could not recover jumptable at 0x000100ab7074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab7078 | FUN_100ab7078 */

void FUN_100ab7078(void)

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
  
  _Var10.unknown = (undefined *)(unaff_x22 + 0x6b0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x8f0);
  lVar13 = *(long *)(unaff_x22 + 0x8d8);
  lVar14 = *(long *)(lVar13 + -8);
  uVar6 = uVar12;
  (**(code **)(lVar14 + 0x30))(uVar12,1,lVar13);
  if ((int)uVar6 == 1) {
    (**(code **)(*(long *)(unaff_x22 + 0x8e8) + 8))(uVar12,*(undefined8 *)(unaff_x22 + 0x8e0));
    _swift_task_dealloc(uVar12);
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0;
    *(undefined8 *)_Var10.unknown = 0;
    *(undefined8 *)(unaff_x22 + 0x6c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0;
  }
  else {
    *(long *)(unaff_x22 + 0x6c8) = lVar13;
    FUN_10000cbb0(_Var10.unknown);
    (**(code **)(lVar14 + 0x20))();
    _swift_task_dealloc(uVar12);
  }
  puVar1 = (undefined8 *)(unaff_x22 + 0x5e0);
  puVar5 = (undefined8 *)(unaff_x22 + 0x668);
  pcVar4 = &DAT_100ff6d58;
  FUN_1000f7830(&DAT_100ff6d58,&DAT_100c917d8);
  puVar11 = &DAT_100eeaaa8;
  uVar7 = unaff_x22 + 0x790;
  _swift_dynamicCast();
  if ((uVar7 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x670);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x680);
    *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x678);
    *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x688);
    *(undefined1 *)(unaff_x22 + 0x608) = 1;
  }
  else {
    lVar13 = *(long *)(unaff_x22 + 0x790);
    *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x670);
    *puVar1 = *puVar5;
    *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x680);
    *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x678);
    *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x688);
    *(undefined1 *)(unaff_x22 + 0x608) = 1;
    if (lVar13 != 0) {
      lVar14 = *(long *)(unaff_x22 + 0x820);
      *(long *)(unaff_x22 + 0x700) = lVar13;
      *(int *)(unaff_x22 + 0x708) = (int)*(undefined8 *)(unaff_x22 + 0x798);
      *(int *)(unaff_x22 + 0x70c) = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x798) >> 0x20);
      *(undefined4 *)(unaff_x22 + 0x710) = *(undefined4 *)(unaff_x22 + 0x7a0);
      *(short *)(unaff_x22 + 0x714) = (short)*(undefined3 *)(unaff_x22 + 0x7a4);
      *(undefined1 *)(unaff_x22 + 0x716) = *(undefined1 *)(unaff_x22 + 0x7a6);
      FUN_10060c3b0(unaff_x22 + 0x700);
      if ((lVar14 != 0x7fffffffffffffff) &&
         (lVar14 < (long)(ulong)(uint)(*(int *)(unaff_x22 + 0x754) - *(int *)(unaff_x22 + 0x750))))
      {
        lVar14 = 0xffffffff;
        if (*(long *)(unaff_x22 + 0x820) != 0x7fffffffffffffff) {
          lVar14 = *(long *)(unaff_x22 + 0x820);
        }
        Swift::_StringGuts::grow(0x7e,_Var10);
        *(undefined8 *)(unaff_x22 + 0x7a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x7b0) = 0xe000000000000000;
        SVar19.bridgeObject = (void *)0x8000000100db87c0;
        SVar19.str = (char *)0xd00000000000003c;
        SVar21.bridgeObject = puVar11;
        SVar21.str = pcVar4;
        Swift::String::append(SVar19,SVar21);
        *(long *)(unaff_x22 + 0x7f0) = lVar14;
        pcVar4 = "";
        puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (unaff_x22 + 0x7f0,unaff_x22 + 0x7a8,&DAT_100f2b538,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar20.bridgeObject = (void *)0x8000000100db8800;
        SVar20.str = (char *)0xd000000000000040;
        SVar22.bridgeObject = puVar11;
        SVar22.str = pcVar4;
        Swift::String::append(SVar20,SVar22);
        *(undefined1 *)(unaff_x22 + 0x3b8) = 6;
        *(undefined8 *)(unaff_x22 + 0x3c0) = *(undefined8 *)(unaff_x22 + 0x7a8);
        *(undefined8 *)(unaff_x22 + 0x3c8) = *(undefined8 *)(unaff_x22 + 0x7b0);
        *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 1000) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x3f0) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x3f8) = 0x194;
        *(undefined1 *)(unaff_x22 + 0x370) = 6;
        *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x7a8);
        *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x7b0);
        *(undefined8 *)(unaff_x22 + 0x388) = 0;
        *(undefined8 *)(unaff_x22 + 0x390) = 0xd000000000000031;
        *(undefined8 *)(unaff_x22 + 0x398) = 0x8000000100db8850;
        *(undefined8 *)(unaff_x22 + 0x3a0) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x3a8) = 0x8000000100db8890;
        *(undefined8 *)(unaff_x22 + 0x3b0) = 0x194;
        FUN_100a50050((undefined8 *)(unaff_x22 + 0x3b8),unaff_x22 + 0x490);
        puVar5 = (undefined8 *)(unaff_x22 + 0x370);
        FUN_100a5008c();
        FUN_100a500c0();
        _swift_allocError(&DAT_100f2de38,puVar5,0,0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0x3b8);
        puVar5[1] = *(undefined8 *)(unaff_x22 + 0x3c0);
        *puVar5 = uVar6;
        uVar16 = *(undefined8 *)(unaff_x22 + 0x3e0);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x3d8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x3f0);
        uVar6 = *(undefined8 *)(unaff_x22 + 1000);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x3d0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x3c8);
        puVar5[8] = *(undefined8 *)(unaff_x22 + 0x3f8);
        puVar5[5] = uVar16;
        puVar5[4] = uVar15;
        puVar5[7] = uVar12;
        puVar5[6] = uVar6;
        puVar5[3] = uVar18;
        puVar5[2] = uVar17;
        _swift_willThrow();
        _swift_release(lVar13);
        FUN_100a68b04(puVar1);
        _swift_release(*(undefined8 *)(unaff_x22 + 0x748));
                    /* WARNING: Could not recover jumptable at 0x000100ab7390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      _swift_release(lVar13);
      lVar13 = *(long *)(unaff_x22 + 0x5e0);
      *(long *)(unaff_x22 + 0x8d0) = lVar13;
      if (*(char *)(unaff_x22 + 0x608) == '\x01') {
        *(long *)(unaff_x22 + 0x668) = lVar13;
        *(undefined8 *)(unaff_x22 + 0x688) = *(undefined8 *)(unaff_x22 + 0x600);
        *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x5f8);
        *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x5f0);
        *(undefined8 *)(unaff_x22 + 0x670) = *(undefined8 *)(unaff_x22 + 0x5e8);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x680);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x688);
        FUN_10007d048(puVar5,uVar12);
        uVar6 = 0xff;
        _swift_getAssociatedTypeWitness
                  (0xff,uVar15,uVar12,
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncIteratorProtocol_100eaebc8
                   ,
                   PTR___associated_type_descriptor_for_Swift_AsyncIteratorProtocol_Element_100eaead0
                  );
        *(undefined8 *)(unaff_x22 + 0x8d8) = uVar6;
        OVar2 = Swift::Optional::typeMetadataAccessor();
        *(long *)(unaff_x22 + 0x8e0) = CONCAT71(extraout_var,OVar2.value);
        lVar13 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
        *(long *)(unaff_x22 + 0x8e8) = lVar13;
        uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x8f0) = uVar7;
        plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x8f8) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100ab6984;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
      uVar6 = *(undefined8 *)(lVar13 + 0x10);
      bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar3 & 1) != 0) {
        plVar8 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x908) = plVar8;
        FUN_1000f7830(&DAT_100ff6d60,&DAT_100c917f8);
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100ab69e8;
        Swift::_withTaskCancellationHandler();
        return;
      }
      pcVar9 = FUN_100a6a4a0;
      _swift_task_addCancellationHandler(FUN_100a6a4a0,uVar6);
      *(code **)(unaff_x22 + 0x910) = pcVar9;
      plVar8 = (long *)0x130;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x918) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100ab6a78;
      FUN_100a691b0(uVar6);
      return;
    }
  }
  FUN_100a68b04(puVar1);
                    /* WARNING: Could not recover jumptable at 0x000100ab73f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x748),*(undefined8 *)(unaff_x22 + 0x750),
             (ulong)*(uint7 *)(unaff_x22 + 0x758));
  return;
}



/* Address: 0x100ab75ec | FUN_100ab75ec */

void FUN_100ab75ec(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x8f0));
  *(undefined8 *)(unaff_x22 + 0x5e8) = *(undefined8 *)(unaff_x22 + 0x670);
  *(undefined8 *)(unaff_x22 + 0x5e0) = *(undefined8 *)(unaff_x22 + 0x668);
  *(undefined8 *)(unaff_x22 + 0x5f8) = *(undefined8 *)(unaff_x22 + 0x680);
  *(undefined8 *)(unaff_x22 + 0x5f0) = *(undefined8 *)(unaff_x22 + 0x678);
  *(undefined8 *)(unaff_x22 + 0x600) = *(undefined8 *)(unaff_x22 + 0x688);
  *(undefined1 *)(unaff_x22 + 0x608) = 1;
  FUN_100a68b04(unaff_x22 + 0x5e0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x748));
                    /* WARNING: Could not recover jumptable at 0x000100ab7654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab7658 | FUN_100ab7658 */

void FUN_100ab7658(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x968) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x960));
  _swift_release(*(undefined8 *)(lVar2 + 0x958));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ab76c4;
  }
  else {
    pcVar1 = FUN_100ab76ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab76c4 | FUN_100ab76c4 */

void FUN_100ab76c4(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100ab76e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x778),*(undefined8 *)(unaff_x22 + 0x780),
             (ulong)*(uint7 *)(unaff_x22 + 0x788));
  return;
}



/* Address: 0x100ab76ec | FUN_100ab76ec */

void FUN_100ab76ec(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100ab76f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab76f8 | FUN_100ab76f8 */

void FUN_100ab76f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x88) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  *(undefined8 *)(unaff_x22 + 0x78) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  _swift_task_switch(FUN_100ab7718,0,0);
  return;
}



/* Address: 0x100ab7718 | FUN_100ab7718 */

void FUN_100ab7718(void)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x70);
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100ab77a4;
  FUN_100a84a40(plVar1,unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0x68),1,&DAT_100c93e48,
                unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x80),&DAT_100eeaaa8,
                *(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x100ab77a4 | FUN_100ab77a4 */

void FUN_100ab77a4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x68);
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  _swift_bridgeObjectRelease(uVar3);
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100ab7814;
  }
  else {
    pcVar1 = FUN_100ab78e0;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab7814 | FUN_100ab7814 */

void FUN_100ab7814(void)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  byte bVar5;
  ushort uVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  String SVar10;
  tuple2_conflict1 tVar11;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  lVar4 = *(long *)(unaff_x22 + 0x80);
  lVar9 = *(long *)(unaff_x22 + 0x50);
  uVar1 = *(uint *)(unaff_x22 + 0x58);
  iVar2 = *(int *)(unaff_x22 + 0x5c);
  uVar6 = *(ushort *)(unaff_x22 + 100);
  bVar5 = *(byte *)(unaff_x22 + 0x66);
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar9 + 0x18,unaff_x22 + 0x38,0,0);
  lVar8 = *(long *)(lVar9 + 0x18);
  _swift_retain(lVar9);
  SVar10.bridgeObject = pvVar7;
  SVar10.str = (char *)(ulong)(iVar2 - uVar1);
  tVar11 = Swift::String::_fromUTF8Repairing
                     ((undefined *)(lVar8 + (ulong)uVar6 * 0x100 + (ulong)bVar5 + (ulong)uVar1),
                      SVar10);
  _swift_release(lVar9,tVar11.result.bridgeObject,tVar11._16_8_);
  (**(code **)(*(long *)(lVar4 + -8) + 8))(uVar3,lVar4);
  _swift_release(lVar9);
                    /* WARNING: Could not recover jumptable at 0x000100ab78dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(tVar11.result.str,tVar11.result.bridgeObject);
  return;
}



/* Address: 0x100ab78e0 | FUN_100ab78e0 */

void FUN_100ab78e0(void)

{
  long unaff_x22;
  
  (**(code **)(*(long *)(*(long *)(unaff_x22 + 0x80) + -8) + 8))(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x000100ab7920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100ab7924 | FUN_100ab7924 */

void FUN_100ab7924(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a4b218(plVar3,param_1,param_2,uVar4,uVar1,uVar2);
  return;
}



/* Address: 0x100ab79a8 | FUN_100ab79a8 */

void FUN_100ab79a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  *(undefined8 *)(unaff_x22 + 0x70) = param_2;
  _swift_task_switch(FUN_100ab79c0,0,0);
  return;
}



/* Address: 0x100ab79c0 | FUN_100ab79c0 */

void FUN_100ab79c0(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  uVar1 = DAT_100ff6da0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x78) = DAT_100ff6da0;
  uVar2 = DAT_100ff6da8;
  _swift_retain(uVar1);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100ab7a94;
  FUN_100a4b3bc(*(undefined8 *)(unaff_x22 + 0x68),1,&UNK_100c93e60,unaff_x22 + 0x10,uVar1,uVar2);
  return;
}



/* Address: 0x100ab7a94 | FUN_100ab7a94 */

void FUN_100ab7a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  *(long **)(lVar3 + 0x28) = unaff_x22;
  *(undefined8 *)(lVar3 + 0x30) = param_1;
  *(undefined8 *)(lVar3 + 0x38) = param_2;
  *(undefined8 *)(lVar3 + 0x40) = param_3;
  *(long *)(lVar3 + 0x48) = unaff_x20;
  uVar2 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x90) = param_3;
    *(undefined8 *)(lVar3 + 0x98) = param_1;
    pcVar1 = FUN_100ab7b2c;
  }
  else {
    pcVar1 = FUN_1008ba4ec;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100ab7b2c | FUN_100ab7b2c */

void FUN_100ab7b2c(void)

{
  ulong uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  ulong uVar6;
  String SVar7;
  tuple2_conflict1 tVar8;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x90);
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar6 = *(ulong *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  pvVar3 = (void *)0x0;
  _swift_beginAccess(lVar2 + 0x18,unaff_x22 + 0x50,0,0);
  lVar4 = *(long *)(lVar2 + 0x18);
  _swift_retain(lVar2);
  SVar7.bridgeObject = pvVar3;
  SVar7.str = (char *)(ulong)(uint)((int)(uVar6 >> 0x20) - (int)uVar6);
  tVar8 = Swift::String::_fromUTF8Repairing
                    ((undefined *)
                     (lVar4 + (uVar1 >> 0x18 & 0xffff00) + (uVar1 >> 0x30 & 0xff) +
                     (uVar6 & 0xffffffff)),SVar7);
  _swift_release_n(lVar2,2,tVar8._16_8_);
  _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100ab7be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(tVar8.result.str,tVar8.result.bridgeObject);
  return;
}



/* Address: 0x100ab7bec | FUN_100ab7bec */

void FUN_100ab7bec(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x20;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a4b8e0(plVar1,param_1,param_2,uVar2);
  return;
}



/* Address: 0x100ab7c68 | FUN_100ab7c68 */

void FUN_100ab7c68(void)

{
  FUN_100a51c64(0x39);
  return;
}



/* Address: 0x100ab7c70 | FUN_100ab7c70 */

void FUN_100ab7c70(void)

{
  FUN_100a51c64(0x50);
  return;
}



/* Address: 0x100ab7c78 | FUN_100ab7c78 */

void FUN_100ab7c78(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a6a3c4(plVar1,param_1);
  return;
}



/* Address: 0x100ab7ce8 | FUN_100ab7ce8 */

void FUN_100ab7ce8(undefined8 *param_1)

{
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



/* Address: 0x100ab7d08 | FUN_100ab7d08 */

void FUN_100ab7d08(undefined8 param_1)

{
  Encoding EVar1;
  
  EVar1 = Encoding::_typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100ab7d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(EVar1.unknown + -8) + 0x38))(param_1,1,1,EVar1.unknown);
  return;
}



/* Address: 0x100ab7d44 | FUN_100ab7d44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ab7d44(void)

{
  return ZEXT816(0x100ff8220);
}



/* Address: 0x100ab7d64 | FUN_100ab7d64 */

void FUN_100ab7d64(void)

{
  return;
}



/* Address: 0x100ab7d68 | FUN_100ab7d68 */

void FUN_100ab7d68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Address: 0x100ab7d9c | FUN_100ab7d9c */

void FUN_100ab7d9c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff8278,&DAT_100f308f0);
  return;
}



/* Address: 0x100ab7db0 | FUN_100ab7db0 */

void FUN_100ab7db0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff8280,&DAT_100f30960);
  return;
}



/* Address: 0x100ab7dc4 | FUN_100ab7dc4 */

void FUN_100ab7dc4(void)

{
  FUN_100ab7e78(&DAT_100ff82a0,&TargetProtocolConformanceDescriptor_100c94198);
  FUN_100ab7e78(&DAT_100ff82a8,&TargetProtocolConformanceDescriptor_100c940ec);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x100ab7e30 | FUN_100ab7e30 */

void FUN_100ab7e30(void)

{
  FUN_100ab7e78(&DAT_100ff8288,&TargetProtocolConformanceDescriptor_100c940b0);
  return;
}



/* Address: 0x100ab7e54 | FUN_100ab7e54 */

void FUN_100ab7e54(void)

{
  FUN_100ab7e78(&DAT_100ff8290,&TargetProtocolConformanceDescriptor_100c94084);
  return;
}



/* Address: 0x100ab7e78 | FUN_100ab7e78 */

void FUN_100ab7e78(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_100ab7db0(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100ab7eb8 | FUN_100ab7eb8 */

void FUN_100ab7eb8(void)

{
  FUN_100ab7e78(&DAT_100ff8298,&TargetProtocolConformanceDescriptor_100c94120);
  return;
}



/* Address: 0x100ab7edc | FUN_100ab7edc */

void FUN_100ab7edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ab7ee8 | FUN_100ab7ee8 */

void FUN_100ab7ee8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff82b0,&DAT_100f309e0);
  return;
}



/* Address: 0x100ab7efc | FUN_100ab7efc */

void FUN_100ab7efc(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  if (*(ulong *)(param_1 + 0x78) >> 0x3c < 0xf) {
    FUN_10003bf2c(*(undefined8 *)(param_1 + 0x70));
  }
  _swift_release(*(undefined8 *)(param_1 + 0x98));
  return;
}



/* Address: 0x100ab7f40 | FUN_100ab7f40 */

undefined8 * FUN_100ab7f40(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  FUN_1001037b4(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar1 = param_2[0xf];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = param_2[7];
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
    uVar2 = param_2[10];
    uVar4 = param_2[0xd];
    uVar3 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xd] = uVar4;
    param_1[0xc] = uVar3;
    uVar2 = param_2[0xe];
    FUN_1001037b4(uVar2,uVar1);
    param_1[0xe] = uVar2;
    param_1[0xf] = uVar1;
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  }
  else {
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  param_1[0x13] = param_2[0x13];
  _swift_retain();
  return param_1;
}



/* Address: 0x100ab8034 | FUN_100ab8034 */

undefined8 * FUN_100ab8034(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 0xc) = *(undefined2 *)((long)param_2 + 0xc);
  *(undefined2 *)((long)param_1 + 0xe) = *(undefined2 *)((long)param_2 + 0xe);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      param_1[7] = param_2[7];
      *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
      *(undefined2 *)((long)param_1 + 0x42) = *(undefined2 *)((long)param_2 + 0x42);
      *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      param_1[10] = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      uVar1 = param_2[0xe];
      uVar3 = param_2[0xf];
      FUN_1001037b4(uVar1,uVar3);
      uVar2 = param_1[0xe];
      uVar4 = param_1[0xf];
      param_1[0xe] = uVar1;
      param_1[0xf] = uVar3;
      FUN_10003bf2c(uVar2,uVar4);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
      *(undefined4 *)((long)param_1 + 0x84) = *(undefined4 *)((long)param_2 + 0x84);
      param_1[0x11] = param_2[0x11];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    }
    else {
      FUN_100ab8268(param_1 + 6);
      uVar4 = param_2[9];
      uVar3 = param_2[8];
      uVar2 = param_2[0xb];
      uVar1 = param_2[10];
      uVar5 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar5;
      param_1[9] = uVar4;
      param_1[8] = uVar3;
      param_1[0xb] = uVar2;
      param_1[10] = uVar1;
      uVar4 = param_2[0xf];
      uVar3 = param_2[0xe];
      uVar2 = param_2[0x11];
      uVar1 = param_2[0x10];
      uVar6 = param_2[0xd];
      uVar5 = param_2[0xc];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      param_1[0xf] = uVar4;
      param_1[0xe] = uVar3;
      param_1[0x11] = uVar2;
      param_1[0x10] = uVar1;
      param_1[0xd] = uVar6;
      param_1[0xc] = uVar5;
    }
  }
  else if ((ulong)param_2[0xf] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
    param_1[7] = param_2[7];
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    *(undefined2 *)((long)param_1 + 0x42) = *(undefined2 *)((long)param_2 + 0x42);
    *(undefined4 *)((long)param_1 + 0x44) = *(undefined4 *)((long)param_2 + 0x44);
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    param_1[10] = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    uVar1 = param_2[0xe];
    uVar2 = param_2[0xf];
    FUN_1001037b4(uVar1,uVar2);
    param_1[0xe] = uVar1;
    param_1[0xf] = uVar2;
    uVar2 = param_2[0x11];
    uVar1 = param_2[0x10];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    param_1[0x11] = uVar2;
    param_1[0x10] = uVar1;
  }
  else {
    uVar2 = param_2[7];
    uVar1 = param_2[6];
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
    param_1[7] = uVar2;
    param_1[6] = uVar1;
    uVar2 = param_2[0xd];
    uVar1 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    uVar6 = param_2[0x11];
    uVar5 = param_2[0x10];
    *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar6;
    param_1[0x10] = uVar5;
    param_1[0xd] = uVar2;
    param_1[0xc] = uVar1;
  }
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100ab8268 | FUN_100ab8268 */

undefined8 FUN_100ab8268(undefined8 param_1)

{
  thunk_FUN_100acc830();
  return param_1;
}



/* Address: 0x100ab829c | FUN_100ab829c */

void FUN_100ab829c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
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
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar5 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar5;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  return;
}



/* Address: 0x100ab82c8 | FUN_100ab82c8 */

undefined8 * FUN_100ab82c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *(undefined8 *)((long)param_1 + 0xc) = *(undefined8 *)((long)param_2 + 0xc);
  *(undefined8 *)((long)param_1 + 0x14) = *(undefined8 *)((long)param_2 + 0x14);
  *(undefined2 *)((long)param_1 + 0x1c) = *(undefined2 *)((long)param_2 + 0x1c);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  FUN_10003bf2c(uVar1,uVar2);
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      param_1[7] = param_2[7];
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)((long)param_2 + 0x44);
      uVar1 = param_2[10];
      uVar4 = param_2[0xd];
      uVar2 = param_2[0xc];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar1;
      param_1[0xd] = uVar4;
      param_1[0xc] = uVar2;
      uVar1 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      param_1[0xf] = uVar3;
      FUN_10003bf2c(uVar1);
      param_1[0x10] = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      goto LAB_100ab83b4;
    }
    FUN_100ab8268(param_1 + 6);
  }
  uVar1 = param_2[0xe];
  uVar4 = param_2[0x11];
  uVar2 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar1;
  param_1[0x11] = uVar4;
  param_1[0x10] = uVar2;
  *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar2 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  param_1[9] = uVar4;
  param_1[8] = uVar2;
  uVar4 = param_2[10];
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
LAB_100ab83b4:
  uVar1 = param_1[0x13];
  param_1[0x13] = param_2[0x13];
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100ab83d4 | FUN_100ab83d4 */

int FUN_100ab83d4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x28] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x26);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ab8430 | FUN_100ab8430 */

void FUN_100ab8430(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
    if (param_2 != 0) {
      param_1[0x13] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x14) = 1;
    }
  }
  return;
}



/* Address: 0x100ab84ac | FUN_100ab84ac */

undefined1  [16] FUN_100ab84ac(void)

{
  return ZEXT816(0x100f30b10);
}



/* Address: 0x100ab84bc | FUN_100ab84bc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ab84bc(undefined8 *param_1,URL param_2,char param_3)

{
  int iVar1;
  POSIXError PVar2;
  undefined *self;
  URL self_00;
  NSString *pNVar3;
  char *pcVar4;
  FILE *pFVar5;
  URL UVar6;
  undefined4 extraout_var;
  POSIXError PVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  String SVar12;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 uStack_1d8;
  undefined8 uStack_1d4;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined8 uStack_144;
  undefined4 local_138;
  undefined8 local_134;
  undefined8 local_12c;
  undefined2 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined1 *puVar7;
  undefined4 extraout_var_00;
  
  PVar2 = Foundation::POSIXError::typeMetadataAccessor();
  lVar10 = *(long *)(PVar2.unknown + -8);
  lVar11 = (long)&local_2f0 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  self = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self_00.unknown = (undefined *)objc_stub::init(self);
  UVar6.unknown = self_00.unknown;
  if (param_3 == '\0') {
    local_138 = 0x6054b50;
    local_12c = 0;
    local_134 = 0;
    local_124 = 0;
    uStack_118 = 0xc000000000000000;
    local_120 = 0;
    uVar9 = extraout_x1;
    FUN_100acf2b4();
    Foundation::Data::_write(param_2,(NSDataWritingOptions)0x2,(Data)UVar6.unknown);
    FUN_10003bf2c(UVar6.unknown,uVar9);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (param_3 == '\x01') {
    SVar12 = Foundation::URL::get_path(self_00);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    _objc_retainAutorelease();
    pcVar4 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self_00.unknown,pNVar3);
    pFVar5 = _fopen(pcVar4,"rb");
    if (pFVar5 == (FILE *)0x0) goto LAB_100ab86e4;
    FUN_100ad344c(&local_258);
    iVar1 = (int)&local_258;
    FUN_100ab8c4c();
    if (iVar1 == 1) goto LAB_100ab86a0;
    uStack_288 = uStack_1f0;
    local_290 = local_1f8;
    uStack_278 = uStack_1e0;
    uStack_280 = uStack_1e8;
    uStack_26c = (undefined4)uStack_1d4;
    uStack_268 = (undefined4)((ulong)uStack_1d4 >> 0x20);
    local_274 = local_1dc;
    uStack_270 = uStack_1d8;
    uStack_2c8 = uStack_230;
    local_2d0 = local_238;
    uStack_2b8 = uStack_220;
    uStack_2c0 = uStack_228;
    uStack_2a8 = uStack_210;
    local_2b0 = local_218;
    uStack_298 = uStack_200;
    uStack_2a0 = uStack_208;
    uStack_2e8 = uStack_250;
    local_2f0 = local_258;
    uStack_2d8 = uStack_240;
    uStack_2e0 = uStack_248;
    goto LAB_100ab8784;
  }
  SVar12 = Foundation::URL::get_path(UVar6);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  _objc_retainAutorelease();
  pcVar4 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self_00.unknown,pNVar3);
  pFVar5 = _fopen(pcVar4,"rb+");
  if (pFVar5 == (FILE *)0x0) {
LAB_100ab86e4:
    PVar8.unknown._0_4_ = Darwin::get_errno();
    PVar8.unknown._4_4_ = extraout_var_00;
    SVar12 = Foundation::URL::get_path((URL)PVar8.unknown);
    FUN_100adebd4(lVar11,PVar8.unknown,SVar12.str,SVar12.bridgeObject);
    Foundation::POSIXError::get__nsError(PVar8);
    _swift_willThrow();
    (**(code **)(lVar10 + 8))(lVar11,PVar2.unknown);
    return;
  }
  FUN_100ad344c(&local_1c8);
  iVar1 = (int)&local_1c8;
  FUN_100ab8c4c();
  if (iVar1 == 1) {
LAB_100ab86a0:
    iVar1 = _fclose(pFVar5);
    puVar7 = (undefined1 *)CONCAT44(extraout_var,iVar1);
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar7,0,0);
    *puVar7 = 0xd;
    _swift_willThrow();
    return;
  }
  uStack_288 = uStack_160;
  local_290 = uStack_168;
  uStack_278 = uStack_150;
  uStack_280 = local_158;
  uStack_26c = (undefined4)uStack_144;
  uStack_268 = (undefined4)((ulong)uStack_144 >> 0x20);
  local_274 = uStack_14c;
  uStack_270 = uStack_148;
  uStack_2c8 = uStack_1a0;
  local_2d0 = local_1a8;
  uStack_2b8 = uStack_190;
  uStack_2c0 = uStack_198;
  uStack_2a8 = uStack_180;
  local_2b0 = local_188;
  uStack_298 = uStack_170;
  uStack_2a0 = local_178;
  uStack_2e8 = uStack_1c0;
  local_2f0 = local_1c8;
  uStack_2d8 = uStack_1b0;
  uStack_2e0 = uStack_1b8;
  _fseeko(pFVar5,0,0);
LAB_100ab8784:
  *param_1 = pFVar5;
  param_1[2] = uStack_2e8;
  param_1[1] = local_2f0;
  param_1[4] = uStack_2d8;
  param_1[3] = uStack_2e0;
  param_1[5] = local_2d0;
  param_1[0xf] = uStack_280;
  param_1[0xe] = uStack_288;
  param_1[0x11] = CONCAT44(uStack_26c,uStack_270);
  param_1[0x10] = CONCAT44(local_274,uStack_278);
  *(undefined4 *)(param_1 + 0x12) = uStack_268;
  param_1[7] = uStack_2c0;
  param_1[6] = uStack_2c8;
  param_1[9] = local_2b0;
  param_1[8] = uStack_2b8;
  param_1[0xb] = uStack_2a0;
  param_1[10] = uStack_2a8;
  param_1[0xd] = local_290;
  param_1[0xc] = uStack_298;
  param_1[0x13] = 0;
  return;
}



/* Address: 0x100ab8828 | FUN_100ab8828 */

void FUN_100ab8828(undefined8 *param_1,undefined8 param_2,ulong param_3,FILE *param_4)

{
  undefined1 *puVar1;
  uchar *puVar2;
  size_t sVar3;
  uint uVar4;
  code *pcVar5;
  long lVar6;
  FILE *pFVar7;
  FILE *pFVar8;
  FILE *pFVar9;
  __DataStorage *p_Var10;
  size_t sVar11;
  undefined1 *puVar12;
  undefined8 *puVar13;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  long lVar16;
  undefined1 local_2f0;
  undefined1 uStack_2ef;
  undefined1 uStack_2ee;
  undefined1 uStack_2ed;
  undefined1 uStack_2ec;
  undefined1 uStack_2eb;
  undefined1 uStack_2ea;
  undefined1 uStack_2e9;
  undefined1 uStack_2e8;
  undefined1 uStack_2e7;
  undefined1 uStack_2e6;
  undefined1 uStack_2e5;
  undefined1 uStack_2e4;
  undefined1 uStack_2e3;
  undefined2 uStack_2e2;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined4 uStack_278;
  undefined4 local_274;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined4 local_138;
  undefined8 local_130 [2];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined8 uStack_ac;
  undefined4 local_a0;
  undefined8 local_9c;
  undefined8 local_94;
  undefined2 local_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar6 = 0;
  FUN_100abd164();
  _swift_allocObject();
  *(ulong *)(lVar6 + 0x18) = param_3;
  *(undefined8 *)(lVar6 + 0x20) = 0;
  *(undefined8 *)(lVar6 + 0x10) = param_2;
  FUN_1001037b4(param_2);
  pFVar7 = param_4;
  FUN_100abce58();
  if (unaff_x21 == 0) {
    if (((ulong)param_4 & 0xff) == 0) {
      local_a0 = 0x6054b50;
      local_94 = 0;
      local_9c = 0;
      local_8c = 0;
      uStack_80 = 0xc000000000000000;
      local_88 = 0;
      pFVar8 = pFVar7;
      FUN_100acf2b4();
      uVar4 = (uint)(param_3 >> 0x20);
      uVar15 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar15 == 0) {
          local_2f0 = SUB81(pFVar8,0);
          uStack_2ef = (undefined1)((ulong)pFVar8 >> 8);
          uStack_2ee = (undefined1)((ulong)pFVar8 >> 0x10);
          uStack_2ed = (undefined1)((ulong)pFVar8 >> 0x18);
          uStack_2ec = (undefined1)((ulong)pFVar8 >> 0x20);
          uStack_2eb = (undefined1)((ulong)pFVar8 >> 0x28);
          uStack_2ea = (undefined1)((ulong)pFVar8 >> 0x30);
          uStack_2e9 = (undefined1)((ulong)pFVar8 >> 0x38);
          uStack_2e8 = (undefined1)param_3;
          uStack_2e7 = (undefined1)(param_3 >> 8);
          uStack_2e6 = (undefined1)(param_3 >> 0x10);
          uStack_2e5 = (undefined1)(param_3 >> 0x18);
          uStack_2e4 = (undefined1)(param_3 >> 0x20);
          uStack_2e3 = (undefined1)(param_3 >> 0x28);
          puVar12 = &local_2f0;
          uVar14 = param_3 >> 0x30 & 0xff;
        }
        else {
          lVar16 = (long)(int)pFVar8;
          sVar3 = ((long)pFVar8 >> 0x20) - lVar16;
          if ((long)pFVar8 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab8c3c);
            (*pcVar5)();
          }
          pFVar9 = pFVar8;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)pFVar8);
          if (pFVar9 == (FILE *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            puVar12 = (undefined1 *)0x0;
            uVar14 = 0;
          }
          else {
            p_Var10 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),
                                 (__DataStorage *)pFVar9);
            if (SBORROW8(lVar16,(long)p_Var10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab8c48);
              (*pcVar5)();
            }
            puVar1 = (undefined1 *)((lVar16 - (long)p_Var10) + (long)pFVar9);
            sVar11 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
            if ((long)sVar3 <= (long)sVar11) {
              sVar11 = sVar3;
            }
            puVar12 = (undefined1 *)0x0;
            if (puVar1 != (undefined1 *)0x0) {
              puVar12 = puVar1;
            }
            uVar14 = 0;
            if (puVar1 != (undefined1 *)0x0) {
              uVar14 = sVar11;
            }
          }
        }
      }
      else {
        if (uVar15 == 2) {
          lVar16 = *(long *)&pFVar8->_flags;
          puVar2 = (pFVar8->_bf)._base;
          pFVar9 = pFVar8;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)pFVar8);
          p_Var10 = (__DataStorage *)0x0;
          if (pFVar9 != (FILE *)0x0) {
            p_Var10 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),
                                 (__DataStorage *)pFVar9);
            if (SBORROW8(lVar16,(long)p_Var10)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab8c44);
              (*pcVar5)();
            }
            pFVar9 = (FILE *)((lVar16 - (long)p_Var10) + (long)pFVar9);
          }
          sVar3 = (long)puVar2 - lVar16;
          if (SBORROW8((long)puVar2,lVar16)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab8c40);
            (*pcVar5)();
          }
          sVar11 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
          if ((long)sVar3 <= (long)sVar11) {
            sVar11 = sVar3;
          }
          sVar3 = 0;
          if (pFVar9 != (FILE *)0x0) {
            sVar3 = sVar11;
          }
          _fwrite(pFVar9,sVar3,1,pFVar7);
          FUN_10003bf2c(pFVar8,param_3);
          goto LAB_100ab8af4;
        }
        uStack_2e8 = 0;
        uStack_2e7 = 0;
        uStack_2e6 = 0;
        uStack_2e5 = 0;
        uStack_2e4 = 0;
        uStack_2e3 = 0;
        local_2f0 = 0;
        uStack_2ef = 0;
        uStack_2ee = 0;
        uStack_2ed = 0;
        uStack_2ec = 0;
        uStack_2eb = 0;
        uStack_2ea = 0;
        uStack_2e9 = 0;
        puVar12 = &local_2f0;
        uVar14 = 0;
      }
      _fwrite(puVar12,uVar14,1,pFVar7);
      FUN_10003bf2c(pFVar8,param_3);
LAB_100ab8af4:
      FUN_100ad344c(local_130,pFVar7);
      puVar13 = local_130;
      FUN_100ab8c4c();
      if ((int)puVar13 == 1) {
LAB_100ab8b10:
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar13,0,0);
        *(undefined1 *)puVar13 = 0xd;
        _swift_willThrow();
        goto LAB_100ab8b40;
      }
      uStack_288 = uStack_c8;
      local_290 = local_d0;
      uStack_278 = uStack_b8;
      uStack_280 = uStack_c0;
      uStack_26c = (undefined4)uStack_ac;
      uStack_268 = (undefined4)((ulong)uStack_ac >> 0x20);
      local_274 = local_b4;
      uStack_270 = uStack_b0;
      uStack_2c8 = uStack_108;
      local_2d0 = local_110;
      uStack_2b8 = uStack_f8;
      uStack_2c0 = uStack_100;
      uStack_2a8 = uStack_e8;
      local_2b0 = local_f0;
      uStack_298 = uStack_d8;
      uStack_2a0 = uStack_e0;
      uStack_2e8 = (undefined1)local_130[1];
      uStack_2e7 = (undefined1)((ulong)local_130[1] >> 8);
      uStack_2e6 = (undefined1)((ulong)local_130[1] >> 0x10);
      uStack_2e5 = (undefined1)((ulong)local_130[1] >> 0x18);
      uStack_2e4 = (undefined1)((ulong)local_130[1] >> 0x20);
      uStack_2e3 = (undefined1)((ulong)local_130[1] >> 0x28);
      uStack_2e2 = (undefined2)((ulong)local_130[1] >> 0x30);
      local_2f0 = (undefined1)local_130[0];
      uStack_2ef = (undefined1)((ulong)local_130[0] >> 8);
      uStack_2ee = (undefined1)((ulong)local_130[0] >> 0x10);
      uStack_2ed = (undefined1)((ulong)local_130[0] >> 0x18);
      uStack_2ec = (undefined1)((ulong)local_130[0] >> 0x20);
      uStack_2eb = (undefined1)((ulong)local_130[0] >> 0x28);
      uStack_2ea = (undefined1)((ulong)local_130[0] >> 0x30);
      uStack_2e9 = (undefined1)((ulong)local_130[0] >> 0x38);
      uStack_2d8 = uStack_118;
      uStack_2e0 = uStack_120;
      _fseeko(pFVar7,0,0);
      uStack_258 = CONCAT26(uStack_2e2,
                            CONCAT15(uStack_2e3,
                                     CONCAT14(uStack_2e4,
                                              CONCAT13(uStack_2e5,
                                                       CONCAT12(uStack_2e6,
                                                                CONCAT11(uStack_2e7,uStack_2e8))))))
      ;
      local_260 = CONCAT17(uStack_2e9,
                           CONCAT16(uStack_2ea,
                                    CONCAT15(uStack_2eb,
                                             CONCAT14(uStack_2ec,
                                                      CONCAT13(uStack_2ed,
                                                               CONCAT12(uStack_2ee,
                                                                        CONCAT11(uStack_2ef,
                                                                                 local_2f0)))))));
      uStack_248 = uStack_2d8;
      uStack_250 = uStack_2e0;
      local_240 = local_2d0;
      uStack_1d8 = CONCAT44(uStack_26c,uStack_270);
      uStack_1e0 = CONCAT44(local_274,uStack_278);
      uStack_1e8 = uStack_280;
      local_1f0 = uStack_288;
      local_1d0 = uStack_268;
      uStack_228 = uStack_2c0;
      local_230 = uStack_2c8;
      uStack_218 = local_2b0;
      uStack_220 = uStack_2b8;
      local_168 = uStack_298;
      uStack_160 = local_290;
      local_178 = uStack_2a8;
      uStack_170 = uStack_2a0;
    }
    else {
      if (((uint)param_4 & 0xff) != 1) goto LAB_100ab8af4;
      FUN_100ad344c(&local_1c0,pFVar7);
      puVar13 = &local_1c0;
      FUN_100ab8c4c();
      if ((int)puVar13 == 1) goto LAB_100ab8b10;
      uStack_258 = uStack_1b8;
      local_260 = local_1c0;
      uStack_248 = uStack_1a8;
      uStack_250 = uStack_1b0;
      local_240 = local_1a0;
      uStack_1e8 = uStack_150;
      local_1f0 = local_158;
      uStack_1d8 = uStack_140;
      uStack_1e0 = local_148;
      local_1d0 = local_138;
      uStack_228 = uStack_190;
      local_230 = local_198;
      uStack_218 = uStack_180;
      uStack_220 = local_188;
    }
    *param_1 = pFVar7;
    param_1[2] = uStack_258;
    param_1[1] = local_260;
    param_1[4] = uStack_248;
    param_1[3] = uStack_250;
    param_1[5] = local_240;
    param_1[0xf] = uStack_1e8;
    param_1[0xe] = local_1f0;
    param_1[0x11] = uStack_1d8;
    param_1[0x10] = uStack_1e0;
    *(undefined4 *)(param_1 + 0x12) = local_1d0;
    param_1[7] = uStack_228;
    param_1[6] = local_230;
    param_1[9] = uStack_218;
    param_1[8] = uStack_220;
    param_1[0xb] = uStack_170;
    param_1[10] = local_178;
    param_1[0xd] = uStack_160;
    param_1[0xc] = local_168;
    param_1[0x13] = lVar6;
    local_210 = local_178;
    uStack_208 = uStack_170;
    uStack_200 = local_168;
    uStack_1f8 = uStack_160;
  }
  else {
LAB_100ab8b40:
    _swift_release(lVar6);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ab8c4c | FUN_100ab8c4c */

int FUN_100ab8c4c(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x20) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Address: 0x100ab8c74 | FUN_100ab8c74 */

void FUN_100ab8c74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff82b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c944c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c944c0,&DAT_100f31130);
  DAT_100ff82b8 = pTVar1;
  return;
}



/* Address: 0x100ab8cb4 | FUN_100ab8cb4 */

/* WARNING: Removing unreachable block (ram,0x000100ab8d88) */

long FUN_100ab8cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  URL UVar2;
  undefined8 unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_60 [16];
  
  puVar1 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  puVar3 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  lVar4 = (long)puVar3 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))(lVar4,param_1,UVar2.unknown);
  FUN_100ab8ea0(param_3,puVar3);
  _swift_allocObject();
  FUN_100ad0300(lVar4,param_2,puVar3,unaff_x20);
  FUN_100ab8ef0(param_3);
  (**(code **)(lVar5 + 8))(param_1,UVar2.unknown);
  return lVar4;
}



/* Address: 0x100ab8dd4 | FUN_100ab8dd4 */

/* WARNING: Removing unreachable block (ram,0x000100ab8e68) */

undefined8
FUN_100ab8dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  puVar1 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  lVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40);
  FUN_100ab8ea0(param_4,auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  _swift_allocObject();
  FUN_100ad0610(param_1,param_2,param_3,auStack_50 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  FUN_100ab8ef0(param_4);
  return param_1;
}


