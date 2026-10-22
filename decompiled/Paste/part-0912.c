/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009cb5c4 | FUN_1009cb5c4 */

void FUN_1009cb5c4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  pcVar10 = *(code **)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_1009d7cb8(*(long *)(unaff_x22 + 0xa0) + *(long *)(unaff_x22 + 200),uVar5);
  _swift_getEnumCaseMultiPayload();
  if ((int)uVar5 == 0) {
    pcVar10 = FUN_1009d7ca4;
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xb0));
  }
  else if ((int)uVar5 == 1) {
    lVar7 = *(long *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar1 = *(long *)(unaff_x22 + 0xa0);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_release(*(undefined8 *)
                    (*(long *)(unaff_x22 + 0xb0) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x110) + 0x30)));
    _swift_storeEnumTagMultiPayload(uVar5,uVar6,2);
    _swift_beginAccess(lVar1 + lVar7,unaff_x22 + 0x40,0x21,0);
    FUN_1009d7cfc(uVar5,lVar1 + lVar7);
    _swift_endAccess(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar7 = *(long *)(unaff_x22 + 0xf8);
    lVar1 = *(long *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x108));
    pcVar10 = *(code **)(lVar7 + 8);
    (*pcVar10)(uVar5,uVar6);
    (**(code **)(lVar1 + 8))(uVar3,uVar4);
    _swift_bridgeObjectRelease(uVar2);
    (*pcVar10)(uVar9,uVar6);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar3);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001009cb710. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar7 = *(long *)(unaff_x22 + 200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar1 = *(long *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  Swift::_StringGuts::grow(0x26,(_StringGuts)pcVar10);
  puVar8 = (undefined8 *)(unaff_x22 + 0x70);
  *puVar8 = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0xe000000000000000;
  SVar11.bridgeObject = (void *)0x8000000100db7300;
  SVar11.str = (char *)0xd000000000000024;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  FUN_1009d7cb8(lVar1 + lVar7,uVar6);
  Swift::__print_unlocked
            (uVar6,puVar8,uVar5,PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_10005241c(uVar6,FUN_1009d7ca4);
  SVar12.bridgeObject = (void *)0x2;
  SVar12.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar12,(undefined *)*puVar8,*(__uint64 *)(unaff_x22 + 0x78),
             0xdb72f0);
  return;
}



/* Address: 0x1009cb7fc | FUN_1009cb7fc */

void FUN_1009cb7fc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  lVar6 = *(long *)(unaff_x22 + 0x120);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  FUN_1009d7cb8(*(long *)(unaff_x22 + 0xa0) + *(long *)(unaff_x22 + 200),uVar5);
  _swift_getEnumCaseMultiPayload();
  if ((int)uVar5 == 0) {
    UNRECOVERED_JUMPTABLE = FUN_1009d7ca4;
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0xb0));
  }
  else if ((int)uVar5 == 1) {
    lVar10 = *(long *)(unaff_x22 + 200);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
    lVar11 = *(long *)(unaff_x22 + 0xa0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xa8);
    _swift_release(*(undefined8 *)
                    (*(long *)(unaff_x22 + 0xb0) +
                    (long)*(int *)(*(long *)(unaff_x22 + 0x110) + 0x30)));
    _swift_storeEnumTagMultiPayload(uVar5,uVar8,2);
    _swift_beginAccess(lVar11 + lVar10,unaff_x22 + 0x40,0x21,0);
    FUN_1009d7cfc(uVar5,lVar11 + lVar10);
    _swift_endAccess(unaff_x22 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xf0);
    lVar10 = *(long *)(unaff_x22 + 0xf8);
    lVar11 = *(long *)(unaff_x22 + 0xe0);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
    if (lVar6 == 0) {
      _swift_release(uVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar5,uVar8);
      (**(code **)(lVar11 + 8))(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar1);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar3);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
    else {
      _swift_willThrow();
      _swift_release(uVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar10 + 8);
      (*UNRECOVERED_JUMPTABLE)(uVar5,uVar8);
      (**(code **)(lVar11 + 8))(uVar3,uVar4);
      _swift_bridgeObjectRelease(uVar1);
      (*UNRECOVERED_JUMPTABLE)(uVar7,uVar8);
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar3);
      uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xb0);
      _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
      _swift_task_dealloc(uVar5);
      _swift_task_dealloc(uVar8);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    }
                    /* WARNING: Could not recover jumptable at 0x0001009cbabc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  lVar11 = *(long *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  lVar6 = *(long *)(unaff_x22 + 0xa0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
  Swift::_StringGuts::grow(0x26,(_StringGuts)UNRECOVERED_JUMPTABLE);
  puVar9 = (undefined8 *)(unaff_x22 + 0x70);
  *puVar9 = 0;
  *(undefined8 *)(unaff_x22 + 0x78) = 0xe000000000000000;
  SVar12.bridgeObject = (void *)0x8000000100db7300;
  SVar12.str = (char *)0xd000000000000024;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar12,SVar14);
  FUN_1009d7cb8(lVar6 + lVar11,uVar8);
  Swift::__print_unlocked
            (uVar8,puVar9,uVar5,PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  FUN_10005241c(uVar8,FUN_1009d7ca4);
  SVar13.bridgeObject = (void *)0x2;
  SVar13.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar13,(undefined *)*puVar9,*(__uint64 *)(unaff_x22 + 0x78),
             0xdb72f0);
  return;
}



/* Address: 0x1009cbac0 | FUN_1009cbac0 */

void FUN_1009cbac0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  undefined1 *local_70;
  
  puVar2 = &DAT_100ff34e0;
  local_88 = param_2;
  FUN_1000f7830(&DAT_100ff34e0,&DAT_100c8c988);
  uVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_90 + -uVar9;
  puVar2 = &DAT_100ff3228;
  FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
  lVar8 = *(long *)(puVar2 + -8);
  (**(code **)(lVar8 + 0x38))(puVar7,1,1,puVar2);
  puVar3 = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  lVar6 = *(long *)(puVar3 + -8);
  lVar10 = (long)puVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100ff3240;
  FUN_1000f7830(&DAT_100ff3240,&DAT_100c8c6e8);
  lVar11 = lVar10 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(puVar4 + -8) + 0x10))(lVar11,param_3,puVar4);
  local_70 = puVar7;
  Swift::AsyncStream::_init((BufferingPolicy)((char)PTR___type_metadata_for____100eae0c8 + 8));
  (**(code **)(lVar6 + 0x10))(param_1,lVar10,puVar3);
  lVar11 = lVar11 - uVar9;
  FUN_1000f8cac(puVar7,lVar11,&DAT_100ff34e0,&DAT_100c8c988);
  lVar5 = lVar11;
  (**(code **)(lVar8 + 0x30))(lVar11,1,puVar2);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar6 + 8))(lVar10,puVar3);
    (**(code **)(lVar8 + 0x20))(local_88,lVar11,puVar2);
    FUN_1000fb4c4(puVar7,&DAT_100ff34e0,&DAT_100c8c988);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009cbcac);
  (*pcVar1)();
}



/* Address: 0x1009cbcac | FUN_1009cbcac */

void FUN_1009cbcac(void)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  lVar1 = 0;
  FUN_1009d7ca4();
  *(long *)(unaff_x22 + 0x48) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  _swift_task_switch(FUN_1009cbd1c);
  return;
}



/* Address: 0x1009cbd1c | FUN_1009cbd1c */

void FUN_1009cbd1c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  Continuation_conflict CVar3;
  ulong uVar4;
  Continuation_conflict CVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar8 = _TtC16ServiceLifecycle12ServiceGroup::state;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar7 = *(long *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_beginAccess(lVar7 + _TtC16ServiceLifecycle12ServiceGroup::state,unaff_x22 + 0x10,0,0);
  FUN_1009d7cb8(lVar7 + lVar8,uVar6);
  _swift_getEnumCaseMultiPayload(uVar6,uVar1);
  if ((int)uVar6 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
    FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x58),FUN_1009d7ca4);
    _swift_storeEnumTagMultiPayload(uVar1,uVar6,2);
    _swift_beginAccess(lVar7 + lVar8,unaff_x22 + 0x28,0x21,0);
    FUN_1009d7cfc(uVar1,lVar7 + lVar8);
    _swift_endAccess(unaff_x22 + 0x28);
  }
  else if ((int)uVar6 == 1) {
    lVar7 = *(long *)(unaff_x22 + 0x58);
    puVar2 = &DAT_100ff3220;
    FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
    _swift_release(*(undefined8 *)(lVar7 + *(int *)(puVar2 + 0x30)));
    CVar3.unknown = &DAT_100ff3228;
    FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
    lVar7 = *(long *)(CVar3.unknown + -8);
    uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar4);
    (**(code **)(lVar7 + 0x20))();
    puVar2 = &DAT_100ff3250;
    FUN_1000f7830(&DAT_100ff3250,&DAT_100c8c708);
    lVar8 = *(long *)(puVar2 + -8);
    CVar5.unknown = (undefined *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    Swift::AsyncStream::Continuation::_yield(CVar5);
    (**(code **)(lVar8 + 8))(CVar5.unknown,puVar2);
    _swift_task_dealloc(CVar5.unknown);
    Swift::AsyncStream::Continuation::finish(CVar3);
    (**(code **)(lVar7 + 8))(uVar4,CVar3.unknown);
    _swift_task_dealloc(uVar4);
  }
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009cbee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009cbee4 | FUN_1009cbee4 */

void FUN_1009cbee4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x490) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x488) = param_3;
  *(undefined8 *)(unaff_x22 + 0x480) = param_2;
  *(undefined8 *)(unaff_x22 + 0x478) = param_1;
  _swift_task_switch(FUN_1009cbf08);
  return;
}



/* Address: 0x1009cbf08 | FUN_1009cbf08 */

void FUN_1009cbf08(void)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  char *pcVar7;
  char *pcVar8;
  void *pvVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uVar20;
  long *plVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  
  lVar16 = *(long *)(*(long *)(unaff_x22 + 0x490) + 0x70);
  *(long *)(unaff_x22 + 0x498) = lVar16;
  pvVar9 = (void *)0x0;
  _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0x428,0);
  FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x388);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3a0);
  lVar14 = *(long *)(unaff_x22 + 0x3a8);
  FUN_100004640(unaff_x22 + 0x388,uVar10);
  (**(code **)(lVar14 + 0x70))(uVar10,lVar14);
  lVar14 = unaff_x22 + 0x388;
  FUN_100004594();
  if (((uint)uVar10 & 0xff) < 2) {
    lVar14 = *(long *)(unaff_x22 + 0x490);
    plVar21 = *(long **)(unaff_x22 + 0x478);
    FUN_100076688(lVar16 + 0x20,unaff_x22 + 0x3b0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x3c8);
    lVar16 = *(long *)(unaff_x22 + 0x3d0);
    FUN_100004640(unaff_x22 + 0x3b0,uVar18);
    puVar3 = &DAT_100ff3478;
    FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
    pcVar7 = (char *)0xe0;
    pcVar8 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 6;
    *(undefined8 *)(puVar3 + 0x10) = 3;
    uVar10 = *(undefined8 *)(lVar14 + 0x90);
    *(undefined8 *)(puVar3 + 0x20) = *(undefined8 *)(lVar14 + 0x88);
    *(undefined8 *)(puVar3 + 0x28) = uVar10;
    _swift_bridgeObjectRetain();
    SVar22.bridgeObject = pcVar8;
    SVar22.str = pcVar7;
    Swift::String::reserveCapacity(2,SVar22);
    SVar22 = Swift::Array<undefined>::get_description
                       (*(undefined8 *)(lVar14 + 0x108),&DAT_100f26b88);
    SVar25.bridgeObject = pvVar9;
    SVar25.str = pcVar8;
    pcVar7 = SVar22.bridgeObject;
    Swift::String::append(SVar22,SVar25);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0xe000000000000000;
    puVar3[0x58] = 0;
    uVar10 = *(undefined8 *)(lVar14 + 0xa0);
    *(undefined8 *)(puVar3 + 0x60) = *(undefined8 *)(lVar14 + 0x98);
    *(undefined8 *)(puVar3 + 0x68) = uVar10;
    _swift_bridgeObjectRetain();
    SVar23.bridgeObject = pcVar8;
    SVar23.str = pcVar7;
    Swift::String::reserveCapacity(2,SVar23);
    SVar22 = Swift::Array<undefined>::get_description
                       (*(undefined8 *)(lVar14 + 0x110),&DAT_100f26b88);
    SVar26.bridgeObject = pvVar9;
    SVar26.str = pcVar8;
    pcVar7 = SVar22.bridgeObject;
    Swift::String::append(SVar22,SVar26);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    *(undefined8 *)(puVar3 + 0x70) = 0;
    *(undefined8 *)(puVar3 + 0x78) = 0xe000000000000000;
    puVar3[0x98] = 0;
    uVar10 = *(undefined8 *)(lVar14 + 0xc0);
    *(undefined8 *)(puVar3 + 0xa0) = *(undefined8 *)(lVar14 + 0xb8);
    *(undefined8 *)(puVar3 + 0xa8) = uVar10;
    _swift_bridgeObjectRetain();
    SVar24.bridgeObject = pcVar8;
    SVar24.str = pcVar7;
    Swift::String::reserveCapacity(2,SVar24);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    lVar11 = *plVar21;
    lVar14 = *(long *)(lVar11 + 0x10);
    if (lVar14 != 0) {
      pcVar8 = (char *)0x0;
      FUN_1009d7078(0,lVar14);
      lVar15 = *(ulong *)(puVar5 + 0x10) << 4;
      puVar12 = (undefined8 *)(lVar11 + 0x58);
      uVar13 = *(ulong *)(puVar5 + 0x10);
      do {
        uVar10 = puVar12[-1];
        uVar17 = *puVar12;
        uVar1 = uVar13 + 1;
        uVar19 = *(ulong *)(puVar5 + 0x18);
        _swift_bridgeObjectRetain(uVar17);
        if (uVar19 >> 1 <= uVar13) {
          pcVar8 = &DAT_00000001;
          FUN_1009d7078(1 < uVar19,uVar1);
        }
        puVar12 = puVar12 + 8;
        *(ulong *)(puVar5 + 0x10) = uVar1;
        *(undefined8 *)(puVar5 + lVar15 + 0x20) = uVar10;
        *(undefined8 *)(puVar5 + lVar15 + 0x28) = uVar17;
        lVar15 = lVar15 + 0x10;
        lVar14 = lVar14 + -1;
        uVar13 = uVar1;
      } while (lVar14 != 0);
    }
    SVar22 = Swift::Array<undefined>::get_description
                       (puVar5,PTR___type_metadata_for_Swift_String_100eac208);
    SVar27.bridgeObject = pvVar9;
    SVar27.str = pcVar8;
    Swift::String::append(SVar22,SVar27);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    _swift_bridgeObjectRelease(puVar5);
    *(undefined8 *)(puVar3 + 0xb0) = 0;
    *(undefined8 *)(puVar3 + 0xb8) = 0xe000000000000000;
    puVar3[0xd8] = 0;
    puVar4 = puVar3;
    FUN_1009d858c();
    _swift_setDeallocating(puVar3);
    puVar5 = &DAT_100ff3480;
    FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
    _swift_arrayDestroy(puVar3 + 0x20,3,puVar5);
    _swift_deallocClassInstance(puVar3,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x148) = 1;
    *(undefined8 *)(unaff_x22 + 0x150) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x158) = 0x8000000100db7790;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined **)(unaff_x22 + 0x168) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x178) = 0;
    *(undefined8 *)(unaff_x22 + 0x170) = 0;
    *(undefined8 *)(unaff_x22 + 0x180) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 400) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 0x198) = 0x8000000100db7750;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0xfd;
    *(undefined1 *)(unaff_x22 + 0x208) = 1;
    *(undefined8 *)(unaff_x22 + 0x210) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x218) = 0x8000000100db7790;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined **)(unaff_x22 + 0x228) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x238) = 0;
    *(undefined8 *)(unaff_x22 + 0x230) = 0;
    *(undefined8 *)(unaff_x22 + 0x240) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x250) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 600) = 0x8000000100db7750;
    *(undefined8 *)(unaff_x22 + 0x260) = 0xfd;
    FUN_1005bf638(unaff_x22 + 0x148,unaff_x22 + 0x268);
    FUN_1004eaa3c(unaff_x22 + 0x208);
    (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x148,uVar18);
    FUN_1004eaa3c(unaff_x22 + 0x148);
    lVar14 = unaff_x22 + 0x3b0;
    FUN_100004594();
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x478);
  *(undefined8 *)(unaff_x22 + 0x460) = 0;
  FUN_1009d8494();
  *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x128) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar20;
  *(undefined8 *)(unaff_x22 + 0x138) = uVar18;
  *(long *)(unaff_x22 + 0x140) = unaff_x22 + 0x460;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x449) = bVar2 & 1;
  if ((bVar2 & 1) == 0) {
    if (*(long *)(unaff_x22 + 0x490) == 0) {
      UVar6.unknown = (undefined *)0x0;
      lVar14 = 0;
    }
    else {
      _swift_getObjectType(*(long *)(unaff_x22 + 0x490));
      UVar6 = Swift::Actor::get_unownedExecutor();
    }
    *(long *)(unaff_x22 + 0x4b0) = lVar14;
    *(undefined **)(unaff_x22 + 0x4a8) = UVar6.unknown;
    _swift_task_switch(FUN_1009cc480,UVar6.unknown);
    return;
  }
  FUN_1000f7830(&DAT_100ff34a0,&DAT_100c8c8a0);
  plVar21 = (long *)(ulong)*(uint *)(PTR__withThrowingTaskGroup_100eaef88 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4a0) = plVar21;
  *plVar21 = unaff_x22;
  plVar21[1] = (long)FUN_1009cc408;
  Swift::_withThrowingTaskGroup();
  return;
}



/* Address: 0x1009cc408 | FUN_1009cc408 */

void FUN_1009cc408(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x4a0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x4d8) = *(undefined8 *)(lVar3 + 0x440);
    *(undefined1 *)(lVar3 + 0x44a) = *(undefined1 *)(lVar3 + 0x448);
    uVar2 = *(undefined8 *)(lVar3 + 0x490);
    pcVar1 = FUN_1009cc7a8;
  }
  else {
    *(long *)(lVar3 + 0x4e0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x490);
    pcVar1 = FUN_1009cc9b0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1009cc480 | FUN_1009cc480 */

void FUN_1009cc480(void)

{
  long *plVar1;
  long unaff_x22;
  
  _swift_taskGroup_initialize(unaff_x22 + 0x10,&DAT_100f263d8);
  *(long *)(unaff_x22 + 0x468) = unaff_x22 + 0x10;
  plVar1 = (long *)0x1c00;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4b8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009cc504;
  FUN_1009cc9ec(plVar1,unaff_x22 + 0x450,unaff_x22 + 0x468,*(undefined8 *)(unaff_x22 + 0x490),
                *(undefined8 *)(unaff_x22 + 0x480),*(undefined8 *)(unaff_x22 + 0x478),
                *(undefined8 *)(unaff_x22 + 0x488),unaff_x22 + 0x460);
  return;
}



/* Address: 0x1009cc504 | FUN_1009cc504 */

void FUN_1009cc504(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  *(long *)(lVar3 + 0x4c0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x4b8));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1009cc65c,*(undefined8 *)(lVar3 + 0x4a8),*(undefined8 *)(lVar3 + 0x4b0));
    return;
  }
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(lVar3 + 0x4c8) = plVar1;
  TVar2.unknown = &DAT_100ff3490;
  FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
  *plVar1 = lVar4;
  plVar1[1] = (long)FUN_1009cc5b8;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1009cc5b8 | FUN_1009cc5b8 */

void FUN_1009cc5b8(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x4c8));
  _swift_task_switch(FUN_1009cc608,*(undefined8 *)(lVar1 + 0x4a8),*(undefined8 *)(lVar1 + 0x4b0));
  return;
}



/* Address: 0x1009cc608 | FUN_1009cc608 */

void FUN_1009cc608(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x4d8) = *(undefined8 *)(unaff_x22 + 0x450);
  *(undefined1 *)(unaff_x22 + 0x44a) = *(undefined1 *)(unaff_x22 + 0x458);
  _swift_task_switch(FUN_1009cc7a8,*(undefined8 *)(unaff_x22 + 0x490),0);
  return;
}



/* Address: 0x1009cc65c | FUN_1009cc65c */

void FUN_1009cc65c(void)

{
  long *plVar1;
  ThrowingTaskGroup TVar2;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x468);
  FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
  Swift::ThrowingTaskGroup::cancelAll(TVar2);
  plVar1 = (long *)(ulong)*(uint *)(PTR__awaitAllRemainingTasks_100eaedb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4d0) = plVar1;
  TVar2.unknown = &DAT_100ff3490;
  FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009cc6fc;
  Swift::ThrowingTaskGroup::_awaitAllRemainingTasks(TVar2);
  return;
}



/* Address: 0x1009cc6fc | FUN_1009cc6fc */

void FUN_1009cc6fc(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x4d0));
  _swift_task_switch(FUN_1009cc74c,*(undefined8 *)(lVar1 + 0x4a8),*(undefined8 *)(lVar1 + 0x4b0));
  return;
}



/* Address: 0x1009cc74c | FUN_1009cc74c */

void FUN_1009cc74c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_destroy(unaff_x22 + 0x10);
  _swift_willThrow();
  *(undefined8 *)(unaff_x22 + 0x4e0) = *(undefined8 *)(unaff_x22 + 0x4c0);
  _swift_task_switch(FUN_1009cc9b0,*(undefined8 *)(unaff_x22 + 0x490),0);
  return;
}



/* Address: 0x1009cc7a8 | FUN_1009cc7a8 */

void FUN_1009cc7a8(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar2;
  Task TVar3;
  long lVar4;
  long unaff_x22;
  
  FUN_100076688(*(long *)(unaff_x22 + 0x498) + 0x20,unaff_x22 + 0x3d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x3f0);
  lVar4 = *(long *)(unaff_x22 + 0x3f8);
  FUN_100004640(unaff_x22 + 0x3d8,uVar2);
  (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
  FUN_100004594(unaff_x22 + 0x3d8);
  if (((uint)uVar2 & 0xff) < 2) {
    FUN_100076688(*(long *)(unaff_x22 + 0x498) + 0x20,unaff_x22 + 0x400);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x418);
    lVar4 = *(long *)(unaff_x22 + 0x420);
    FUN_100004640(unaff_x22 + 0x400,uVar2);
    *(undefined1 *)(unaff_x22 + 0x1a8) = 1;
    *(undefined8 *)(unaff_x22 + 0x1b0) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0x8000000100db77b0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0x8000000100db7750;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x253;
    *(undefined1 *)(unaff_x22 + 0x2c8) = 1;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x2d8) = 0x8000000100db77b0;
    *(undefined8 *)(unaff_x22 + 0x2e8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
    *(undefined8 *)(unaff_x22 + 0x300) = 0xd000000000000023;
    *(undefined8 *)(unaff_x22 + 0x308) = 0x8000000100db72d0;
    *(undefined8 *)(unaff_x22 + 0x310) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db7750;
    *(undefined8 *)(unaff_x22 + 800) = 0x253;
    FUN_1005bf638(unaff_x22 + 0x1a8,unaff_x22 + 0x328);
    FUN_1004eaa3c(unaff_x22 + 0x2c8);
    (**(code **)(lVar4 + 0x28))(unaff_x22 + 0x1a8,uVar2,lVar4);
    FUN_1004eaa3c(unaff_x22 + 0x1a8);
    FUN_100004594(unaff_x22 + 0x400);
  }
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x460);
  if (TVar3.unknown != (undefined *)0x0) {
    Swift::Task::cancel(TVar3);
  }
  if (*(char *)(unaff_x22 + 0x44a) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x470) = *(undefined8 *)(unaff_x22 + 0x4d8);
    if (*(char *)(unaff_x22 + 0x449) == '\x01') {
      puVar1 = &DAT_100ff3200;
      FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x470,puVar1,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(*(undefined8 *)(unaff_x22 + 0x460));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    _swift_release(TVar3.unknown);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009cc9ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009cc9b0 | FUN_1009cc9b0 */

void FUN_1009cc9b0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x460));
                    /* WARNING: Could not recover jumptable at 0x0001009cc9e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009cc9ec | FUN_1009cc9ec */

void FUN_1009cc9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x1b28) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1b20) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1b18) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1b10) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1b08) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1b00) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1af8) = param_1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1009cca70,param_3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009cca70 | FUN_1009cca70 */

void FUN_1009cca70(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x1b08) + 0x108);
  *(undefined8 *)(unaff_x22 + 0x1b30) = uVar3;
  plVar2 = (long *)0x20;
  _swift_bridgeObjectRetain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b38) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009ccb10;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    FUN_1009dbb0c(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009ccb10 | FUN_1009ccb10 */

void FUN_1009ccb10(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x1b08);
  *(undefined8 *)(lVar2 + 0x1b40) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b38));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1009ccb98,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009ccb98 | FUN_1009ccb98 */

void FUN_1009ccb98(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x22 + 0x1b08) + 0x110);
  plVar2 = (long *)0x20;
  _swift_bridgeObjectRetain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1b48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009ccc34;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    FUN_1009dbb0c(uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009ccc34 | FUN_1009ccc34 */

void FUN_1009ccc34(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar2 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar2 + 0x1b08);
  *(undefined8 *)(lVar2 + 0x1b50) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1b48));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1009cccbc,uVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009cccbc | FUN_1009cccbc */

void FUN_1009cccbc(void)

{
  pthread_mutexattr_t *ppVar1;
  _CocoaArrayWrapper _Var2;
  __uint8 _Var3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  TaskPriority TVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  TaskPriority TVar14;
  UnownedSerialExecutor UVar15;
  __int64 _Var16;
  ulong uVar17;
  undefined7 extraout_var;
  char *pcVar18;
  char *pcVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  ulong uVar23;
  undefined8 *puVar24;
  long lVar25;
  code *pcVar26;
  long *plVar27;
  undefined8 *puVar28;
  ThrowingTaskGroup TVar29;
  ulong uVar30;
  long lVar31;
  long unaff_x22;
  long lVar32;
  long lVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  long lVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  String SVar43;
  String SVar44;
  
  lVar21 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar34 = *(undefined8 *)(unaff_x22 + 0x1b50);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar20 = &DAT_100ff3080;
  FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
  lVar22 = *(long *)(*(long *)(puVar20 + -8) + 0x40);
  *(long *)(unaff_x22 + 7000) = lVar22;
  uVar17 = lVar22 + 0xf;
  uVar7 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  TVar8 = Swift::TaskPriority::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1b60) = TVar8.unknown;
  lVar22 = *(long *)(TVar8.unknown + -8);
  *(long *)(unaff_x22 + 0x1b68) = lVar22;
  pcVar26 = *(code **)(lVar22 + 0x38);
  *(code **)(unaff_x22 + 0x1b70) = pcVar26;
  (*pcVar26)(uVar7,1,1,TVar8.unknown);
  puVar20 = &DAT_100f26200;
  _swift_allocObject(&DAT_100f26200,0x28,7);
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined8 *)(puVar20 + 0x18) = 0;
  *(undefined8 *)(puVar20 + 0x20) = uVar35;
  _swift_retain(uVar35);
  FUN_1009ca6c4(uVar7,&DAT_100c8c8b0,puVar20);
  FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
  _swift_task_dealloc(uVar7);
  uVar7 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (*pcVar26)();
  puVar20 = &DAT_100f26228;
  _swift_allocObject(&DAT_100f26228,0x28,7);
  *(undefined8 *)(puVar20 + 0x10) = 0;
  *(undefined8 *)(puVar20 + 0x18) = 0;
  *(undefined8 *)(puVar20 + 0x20) = uVar34;
  _swift_retain(uVar34);
  FUN_1009ca6c4(uVar7,&DAT_100c8c8c0,puVar20);
  FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
  _swift_task_dealloc(uVar7);
  uVar7 = uVar17 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar7);
  (*pcVar26)();
  puVar20 = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  lVar36 = *(long *)(puVar20 + -8);
  lVar37 = *(long *)(lVar36 + 0x40);
  uVar9 = lVar37 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar9);
  (**(code **)(lVar36 + 0x10))();
  uVar23 = (ulong)*(byte *)(lVar36 + 0x50);
  uVar30 = uVar23 + 0x20 & (uVar23 ^ 0xffffffffffffffff);
  puVar10 = &DAT_100f26250;
  _swift_allocObject(&DAT_100f26250,uVar30 + lVar37,uVar23 | 7);
  *(undefined8 *)(puVar10 + 0x10) = 0;
  *(undefined8 *)(puVar10 + 0x18) = 0;
  (**(code **)(lVar36 + 0x20))(puVar10 + uVar30,uVar9,puVar20);
  _swift_task_dealloc(uVar9);
  FUN_1009ca6c4(uVar7,&DAT_100c8c8d0,puVar10);
  FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
  _swift_task_dealloc(uVar7);
  if (DAT_100ff3090 != -1) {
    _swift_once(&DAT_100ff3090,FUN_1009c766c);
  }
  Swift::TaskLocal::get(DAT_101058298);
  if (*(long *)(unaff_x22 + 0x1ae8) != 0) {
    _swift_release();
    uVar7 = uVar17 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    (*pcVar26)();
    puVar20 = &DAT_100f26340;
    _swift_allocObject(&DAT_100f26340,0x20,7);
    *(undefined8 *)(puVar20 + 0x10) = 0;
    *(undefined8 *)(puVar20 + 0x18) = 0;
    FUN_1009ca6c4(uVar7,&DAT_100c8c928,puVar20);
    FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
    _swift_task_dealloc(uVar7);
  }
  plVar27 = *(long **)(unaff_x22 + 0x1b18);
  lVar36 = *(long *)(*plVar27 + 0x10);
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e == 0) {
    lVar37 = *(long *)(((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 & 0xffffffffffffff8)
    ;
    if ((undefined *)0x7fffffffffffffff < PTR___swiftEmptyArrayStorage_100eae0d8) {
      _Var2.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    lVar37 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    plVar27 = *(long **)(unaff_x22 + 0x1b18);
  }
  lVar32 = *(long *)(unaff_x22 + 0x1b08);
  if (lVar37 <= lVar36) {
    lVar37 = lVar36;
  }
  puVar10 = (undefined *)0x0;
  FUN_1009c8514(0,lVar37,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  lVar36 = *plVar27;
  uVar7 = *(ulong *)(lVar36 + 0x10);
  lVar37 = *(long *)(lVar32 + 0x70);
  *(long *)(unaff_x22 + 0x1b78) = lVar37;
  _swift_bridgeObjectRetain(lVar36);
  puVar20 = (undefined *)0x0;
  _swift_beginAccess(lVar37 + 0x20,unaff_x22 + 0x19f0,0);
  if (uVar7 != 0) {
    uVar9 = 0;
    puVar28 = (undefined8 *)(unaff_x22 + 0x1370);
    ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x1ac0);
    lVar25 = *(long *)(unaff_x22 + 0x1b08);
    lVar32 = lVar36 + 0x20;
    do {
      if (*(ulong *)(lVar36 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1009cda04);
        (*pcVar26)();
      }
      FUN_1009d7d40(lVar32,(undefined8 *)(unaff_x22 + 0x10b0));
      *(undefined8 *)(unaff_x22 + 0x1378) = *(undefined8 *)(unaff_x22 + 0x10b8);
      *puVar28 = *(undefined8 *)(unaff_x22 + 0x10b0);
      *(undefined8 *)(unaff_x22 + 5000) = *(undefined8 *)(unaff_x22 + 0x10c8);
      *(undefined8 *)(unaff_x22 + 0x1380) = *(undefined8 *)(unaff_x22 + 0x10c0);
      *(undefined8 *)(unaff_x22 + 0x1398) = *(undefined8 *)(unaff_x22 + 0x10d8);
      *(undefined8 *)(unaff_x22 + 0x1390) = *(undefined8 *)(unaff_x22 + 0x10d0);
      *(undefined8 *)(unaff_x22 + 0x13a8) = *(undefined8 *)(unaff_x22 + 0x10e8);
      *(undefined8 *)(unaff_x22 + 0x13a0) = *(undefined8 *)(unaff_x22 + 0x10e0);
      FUN_100076688(lVar37 + 0x20,unaff_x22 + 0x18b0);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x18c8);
      lVar31 = *(long *)(unaff_x22 + 0x18d0);
      FUN_100004640(unaff_x22 + 0x18b0,uVar34);
      (**(code **)(lVar31 + 0x70))(uVar34,lVar31);
      FUN_100004594(unaff_x22 + 0x18b0);
      if (((uint)uVar34 & 0xff) < 2) {
        FUN_100076688(lVar37 + 0x20,unaff_x22 + 0x1888);
        uVar35 = *(undefined8 *)(unaff_x22 + 0x18a0);
        lVar31 = *(long *)(unaff_x22 + 0x18a8);
        FUN_100004640(unaff_x22 + 0x1888,uVar35);
        puVar11 = &DAT_100ff3478;
        FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
        pcVar18 = (char *)0x60;
        pcVar19 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar11 + 0x18) = 2;
        *(undefined8 *)(puVar11 + 0x10) = 1;
        uVar34 = *(undefined8 *)(lVar25 + 0xb0);
        *(undefined8 *)(puVar11 + 0x20) = *(undefined8 *)(lVar25 + 0xa8);
        *(undefined8 *)(puVar11 + 0x28) = uVar34;
        _swift_bridgeObjectRetain();
        SVar43.bridgeObject = pcVar19;
        SVar43.str = pcVar18;
        Swift::String::reserveCapacity(2,SVar43);
        SVar44.bridgeObject = puVar20;
        SVar44.str = pcVar19;
        Swift::String::write(*(String *)(unaff_x22 + 0x13a0),SVar44);
        *(undefined8 *)(puVar11 + 0x30) = 0;
        *(undefined8 *)(puVar11 + 0x38) = 0xe000000000000000;
        puVar11[0x58] = 0;
        puVar20 = puVar11;
        FUN_1009d858c();
        _swift_setDeallocating(puVar11);
        FUN_1000fb4c4(puVar11 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
        _swift_deallocClassInstance(puVar11,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x8d8) = 1;
        *(undefined8 *)(unaff_x22 + 0x8e0) = 0xd000000000000010;
        *(undefined8 *)(unaff_x22 + 0x8e8) = 0x8000000100db77d0;
        *(undefined8 *)(unaff_x22 + 0x8f0) = 0;
        *(undefined **)(unaff_x22 + 0x8f8) = puVar20;
        *(undefined8 *)(unaff_x22 + 0x900) = 0;
        *(undefined8 *)(unaff_x22 + 0x908) = 0;
        *(undefined8 *)(unaff_x22 + 0x910) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x918) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x920) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0x928) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0x930) = 0x13f;
        *(undefined1 *)(unaff_x22 + 0x5d8) = 1;
        *(undefined8 *)(unaff_x22 + 0x5e0) = 0xd000000000000010;
        *(undefined8 *)(unaff_x22 + 0x5e8) = 0x8000000100db77d0;
        *(undefined8 *)(unaff_x22 + 0x5f0) = 0;
        *(undefined **)(unaff_x22 + 0x5f8) = puVar20;
        *(undefined8 *)(unaff_x22 + 0x600) = 0;
        *(undefined8 *)(unaff_x22 + 0x608) = 0;
        *(undefined8 *)(unaff_x22 + 0x610) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x618) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x620) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0x628) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0x630) = 0x13f;
        FUN_1005bf638(unaff_x22 + 0x8d8,unaff_x22 + 0x698);
        FUN_1004eaa3c(unaff_x22 + 0x5d8);
        (**(code **)(lVar31 + 0x28))(unaff_x22 + 0x8d8,uVar35,lVar31);
        FUN_1004eaa3c(unaff_x22 + 0x8d8);
        FUN_100004594(unaff_x22 + 0x1888);
      }
      puVar12 = (undefined *)0x0;
      FUN_1009c9458();
      _swift_allocObject();
      puVar20 = &DAT_100ff2c60;
      FUN_1000f7830(&DAT_100ff2c60,&DAT_100c8bfe0);
      _swift_allocObject();
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
      *(undefined **)(puVar20 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
      *(undefined8 *)(puVar20 + 0x18) = 0;
      puVar20[0x20] = 0;
      *(undefined **)(puVar20 + 0x28) = puVar11;
      ppVar1->__sig = 0;
      *(undefined8 *)(unaff_x22 + 0x1ac8) = 0;
      _pthread_mutexattr_init(ppVar1);
      iVar6 = _pthread_mutex_init((pthread_mutex_t *)(puVar20 + 0x30),ppVar1);
      if (iVar6 != 0) {
                    /* WARNING: Does not return */
        pcVar26 = (code *)SoftwareBreakpoint(1,0x1009cda08);
        (*pcVar26)();
      }
      *(undefined **)(puVar12 + 0x10) = puVar20;
      _swift_retain(puVar12);
      puVar20 = puVar10;
      if ((ulong)puVar10 >> 0x3e != 0) {
        _Var2.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          _Var2.unknown = puVar10;
        }
        _Var16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
        puVar20 = (undefined *)0x0;
        FUN_1009c8514(0,_Var16 + 1,1,puVar10);
      }
      uVar30 = (ulong)puVar20 & 0xffffffffffffff8;
      uVar23 = *(ulong *)(uVar30 + 0x10);
      puVar10 = puVar20;
      if (*(ulong *)(uVar30 + 0x18) >> 1 <= uVar23) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar30 + 0x18));
        FUN_1009c8514(puVar10,uVar23 + 1,1,puVar20);
        uVar30 = (ulong)puVar10 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar30 + 0x10) = uVar23 + 1;
      *(undefined **)(uVar30 + uVar23 * 8 + 0x20) = puVar12;
      uVar30 = uVar17 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar30);
      (*pcVar26)();
      FUN_1009d7d40(puVar28,(undefined8 *)(unaff_x22 + 0x11f0));
      puVar11 = &DAT_100f26278;
      _swift_allocObject(&DAT_100f26278,0x70,7);
      *(long *)(puVar11 + 0x10) = 0;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      *(undefined **)(puVar11 + 0x20) = puVar12;
      uVar34 = *(undefined8 *)(unaff_x22 + 0x11f0);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x1208);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x1200);
      *(undefined8 *)(puVar11 + 0x30) = *(undefined8 *)(unaff_x22 + 0x11f8);
      *(undefined8 *)(puVar11 + 0x28) = uVar34;
      *(undefined8 *)(puVar11 + 0x40) = uVar38;
      *(undefined8 *)(puVar11 + 0x38) = uVar35;
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1210);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x1228);
      uVar35 = *(undefined8 *)(unaff_x22 + 0x1220);
      *(undefined8 *)(puVar11 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1218);
      *(undefined8 *)(puVar11 + 0x48) = uVar34;
      *(undefined8 *)(puVar11 + 0x60) = uVar38;
      *(undefined8 *)(puVar11 + 0x58) = uVar35;
      *(ulong *)(puVar11 + 0x68) = uVar9;
      uVar13 = uVar17 & 0xfffffffffffffff0;
      _swift_task_alloc();
      FUN_1000f8cac(uVar30,uVar13,&DAT_100ff3080,&DAT_100c8c470);
      uVar23 = uVar13;
      (**(code **)(lVar22 + 0x30))(uVar13,1,TVar8.unknown);
      TVar14.unknown = puVar12;
      _swift_retain();
      if ((int)uVar23 == 1) {
        FUN_1000fb4c4(uVar13,&DAT_100ff3080,&DAT_100c8c470);
        uVar23 = 0x3100;
      }
      else {
        _Var3 = Swift::TaskPriority::get_rawValue(TVar14);
        (**(code **)(lVar22 + 8))(uVar13,TVar8.unknown);
        uVar23 = (ulong)_Var3 | 0x3100;
      }
      _swift_task_dealloc(uVar13);
      lVar31 = *(long *)(puVar11 + 0x10);
      if (lVar31 == 0) {
        UVar15.unknown = (undefined *)0x0;
        lVar33 = 0;
      }
      else {
        lVar33 = *(long *)(puVar11 + 0x18);
        _swift_getObjectType(lVar31);
        _swift_unknownObjectRetain(lVar31);
        UVar15 = Swift::Actor::get_unownedExecutor();
        _swift_unknownObjectRelease(lVar31);
      }
      uVar34 = **(undefined8 **)(unaff_x22 + 0x1b00);
      _swift_retain(puVar11);
      if (lVar33 == 0 && UVar15.unknown == (undefined *)0x0) {
        puVar24 = (undefined8 *)0x0;
      }
      else {
        *(undefined8 *)(unaff_x22 + 0x1940) = 0;
        *(undefined8 *)(unaff_x22 + 0x1948) = 0;
        *(undefined **)(unaff_x22 + 0x1950) = UVar15.unknown;
        *(long *)(unaff_x22 + 0x1958) = lVar33;
        puVar24 = (undefined8 *)(unaff_x22 + 0x1940);
      }
      uVar9 = uVar9 + 1;
      *(undefined8 *)(unaff_x22 + 0x19d8) = 1;
      *(undefined8 **)(unaff_x22 + 0x19e0) = puVar24;
      *(undefined8 *)(unaff_x22 + 0x19e8) = uVar34;
      puVar20 = &DAT_100c8c8e8;
      _swift_task_create(uVar23,unaff_x22 + 0x19d8,&DAT_100f263d8,&DAT_100c8c8e8,puVar11);
      _swift_release(puVar11);
      _swift_release(puVar12);
      _swift_release(uVar23);
      FUN_1000fb4c4(uVar30,&DAT_100ff3080,&DAT_100c8c470);
      _swift_task_dealloc(uVar30);
      FUN_1009d7d7c(puVar28);
      lVar32 = lVar32 + 0x40;
    } while (uVar7 != uVar9);
  }
  plVar27 = *(long **)(unaff_x22 + 0x1b18);
  _swift_bridgeObjectRelease(lVar36);
  puVar20 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar36 = *plVar27;
  lVar22 = *(long *)(lVar36 + 0x10);
  if (lVar22 != 0) {
    _swift_bridgeObjectRetain(lVar36);
    FUN_1009d7094(0,lVar22,0);
    lVar32 = lVar36 + 0x20;
    do {
      FUN_1009d7d40(lVar32,(undefined8 *)(unaff_x22 + 0x10f0));
      uVar7 = *(ulong *)(puVar20 + 0x10);
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar7) {
        FUN_1009d7094(1 < *(ulong *)(puVar20 + 0x18),uVar7 + 1,1);
      }
      *(ulong *)(puVar20 + 0x10) = uVar7 + 1;
      uVar35 = *(undefined8 *)(unaff_x22 + 0x10f8);
      uVar34 = *(undefined8 *)(unaff_x22 + 0x10f0);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x1108);
      uVar38 = *(undefined8 *)(unaff_x22 + 0x1100);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x1110);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x1128);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x1120);
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x48) = *(undefined8 *)(unaff_x22 + 0x1118);
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x40) = uVar40;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x58) = uVar42;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x50) = uVar41;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x28) = uVar35;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x20) = uVar34;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x38) = uVar39;
      *(undefined8 *)(puVar20 + uVar7 * 0x40 + 0x30) = uVar38;
      lVar32 = lVar32 + 0x40;
      lVar22 = lVar22 + -1;
    } while (lVar22 != 0);
    _swift_bridgeObjectRelease(lVar36);
  }
  *(undefined **)(unaff_x22 + 0x1ae0) = puVar20;
  if ((ulong)puVar10 >> 0x3e == 0) {
    lVar22 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar10) {
      _Var2.unknown = puVar10;
    }
    lVar22 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar22 == *(long *)(puVar20 + 0x10)) {
    uVar34 = *(undefined8 *)(unaff_x22 + 0x1b20);
    puVar28 = *(undefined8 **)(unaff_x22 + 0x1b00);
    uVar7 = uVar17 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar7);
    (*pcVar26)();
    puVar11 = &DAT_100f262a0;
    _swift_allocObject(&DAT_100f262a0,0x20,7);
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    FUN_1009ca6c4(uVar7,&DAT_100c8c8f8,puVar11);
    FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
    _swift_task_dealloc(uVar7);
    uVar17 = uVar17 & 0xfffffffffffffff0;
    _swift_task_alloc(uVar17);
    (*pcVar26)();
    puVar11 = &DAT_100f262c8;
    _swift_allocObject(&DAT_100f262c8,0x28,7);
    *(undefined8 *)(puVar11 + 0x10) = 0;
    *(undefined8 *)(puVar11 + 0x18) = 0;
    *(undefined8 *)(puVar11 + 0x20) = uVar34;
    _swift_retain(uVar34);
    FUN_1009ca6c4(uVar17,&DAT_100c8c908,puVar11);
    FUN_1000fb4c4(uVar17,&DAT_100ff3080,&DAT_100c8c470);
    _swift_task_dealloc(uVar17);
    TVar29.unknown = (undefined *)*puVar28;
    puVar11 = &DAT_100ff3200;
    FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
    *(undefined **)(unaff_x22 + 0x1b80) = puVar11;
    bVar4 = Swift::ThrowingTaskGroup::get_isEmpty(TVar29);
    uVar34 = CONCAT71(extraout_var,bVar4);
    if (bVar4) {
      uVar34 = *(undefined8 *)(unaff_x22 + 0x1b40);
      puVar28 = *(undefined8 **)(unaff_x22 + 0x1af8);
      _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
      _swift_release(uVar34);
      *puVar28 = 0;
      *(undefined1 *)(puVar28 + 1) = 0;
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
      _swift_bridgeObjectRelease(puVar10);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
                    /* WARNING: Could not recover jumptable at 0x0001009cd8c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
    }
    else {
      FUN_1009d8494();
      *(undefined8 *)(unaff_x22 + 0x1b88) = uVar34;
      bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      *(byte *)(unaff_x22 + 0x1049) = bVar5 & 1;
      _swift_beginAccess(lVar37 + 0x20,unaff_x22 + 0x19c0,0,0);
      *(undefined **)(unaff_x22 + 0x1b98) = puVar20;
      *(undefined **)(unaff_x22 + 0x1b90) = puVar10;
      if ((*(byte *)(unaff_x22 + 0x1049) & 1) == 0) {
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
          _swift_taskGroup_wait_next_throwing
                    (unaff_x22 + 0xff8,TVar29.unknown,FUN_1009cdb08,unaff_x22 + 0x10);
          return;
        }
      }
      else {
        plVar27 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1ba0) = plVar27;
        FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
        *plVar27 = unaff_x22;
        plVar27[1] = (long)FUN_1009cda54;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar21) {
          Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0xff8));
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar26 = (code *)SoftwareBreakpoint(1,0x1009cda50);
  (*pcVar26)();
}



/* Address: 0x1009cda54 | FUN_1009cda54 */

void FUN_1009cda54(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1ba0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x1b08);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_1009cdb04;
    pcVar1 = FUN_1009cdba0;
  }
  else {
    *(long *)(lVar4 + 0x1ba8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x1b08);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_1009cdb04:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009d055c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1009cdb08 | FUN_1009cdb08 */

void FUN_1009cdb08(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b08);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_1009cdb9c;
    pcVar1 = FUN_1009cdba0;
  }
  else {
    *(long *)(unaff_x22 + 0x1ba8) = unaff_x20;
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1b08);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_1009cdb9c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail(param_1,uVar2);
    }
    pcVar1 = FUN_1009d055c;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1009cdba0 | FUN_1009cdba0 */

void FUN_1009cdba0(void)

{
  pthread_mutexattr_t *ppVar1;
  byte bVar2;
  __uint8 _Var3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  _StringGuts _Var12;
  char *pcVar13;
  char *pcVar14;
  undefined8 uVar15;
  StaticString file;
  long lVar16;
  char *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  _CocoaArrayWrapper _Var24;
  undefined8 *puVar25;
  TaskPriority TVar26;
  ThrowingTaskGroup TVar27;
  long unaff_x22;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined *puVar30;
  ulong uVar31;
  code *pcVar32;
  long lVar33;
  undefined *puVar34;
  code *pcVar35;
  ulong uVar36;
  long lVar37;
  ulong uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  String SVar69;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar25 = (undefined8 *)(unaff_x22 + 0x1050);
  puVar11 = &DAT_100c8c840;
  FUN_1000f8cac(unaff_x22 + 0xff8,puVar25,&DAT_100ff3488);
  bVar2 = *(byte *)(unaff_x22 + 0x10a0);
  if (bVar2 == 0xff) {
    pcVar17 = "Starting service";
    file.unknown = (undefined *)0xd00000000000005b;
LAB_1009cdc2c:
    SVar46.bridgeObject = (void *)0x2;
    SVar46.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar46,file,(ulong)pcVar17 | 0x8000000000000000,0xdb72f0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
      return;
    }
    goto LAB_1009d0558;
  }
  uVar38 = *(ulong *)(unaff_x22 + 0x1090);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      puVar10 = (undefined8 *)(unaff_x22 + 0x1430);
      pcVar17 = *(char **)(unaff_x22 + 0x1b80);
      *(undefined8 *)(unaff_x22 + 0x1438) = *(undefined8 *)(unaff_x22 + 0x1058);
      *puVar10 = *puVar25;
      *(undefined8 *)(unaff_x22 + 0x1448) = *(undefined8 *)(unaff_x22 + 0x1068);
      *(undefined8 *)(unaff_x22 + 0x1440) = *(undefined8 *)(unaff_x22 + 0x1060);
      *(undefined8 *)(unaff_x22 + 0x1458) = *(undefined8 *)(unaff_x22 + 0x1078);
      *(undefined8 *)(unaff_x22 + 0x1450) = *(undefined8 *)(unaff_x22 + 0x1070);
      *(undefined8 *)(unaff_x22 + 0x1468) = *(undefined8 *)(unaff_x22 + 0x1088);
      *(undefined8 *)(unaff_x22 + 0x1460) = *(undefined8 *)(unaff_x22 + 0x1080);
      puVar11 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      bVar4 = Swift::ThrowingTaskGroup::get_isCancelled
                        ((undefined *)**(undefined8 **)(unaff_x22 + 0x1b00));
      if (bVar4) {
        FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
        FUN_1009d7d7c(puVar10);
        uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
        puVar11 = *(undefined **)(unaff_x22 + 0x1b90);
        goto LAB_1009cf930;
      }
      lVar33 = *(long *)(unaff_x22 + 0x1b78);
      if (*(char *)(unaff_x22 + 0x1458) == '\0') {
        FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x1630);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1648);
        lVar33 = *(long *)(unaff_x22 + 0x1650);
        FUN_100004640(unaff_x22 + 0x1630,uVar28);
        (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
        FUN_100004594(unaff_x22 + 0x1630);
        if (((uint)uVar28 & 0xff) < 2) {
          lVar33 = *(long *)(unaff_x22 + 0x1b08);
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x18d8);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x18f0);
          pcVar17 = *(char **)(unaff_x22 + 0x18f8);
          FUN_100004640();
          puVar34 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar13 = (char *)0x60;
          pcVar14 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar34 + 0x18) = 2;
          *(undefined8 *)(puVar34 + 0x10) = 1;
          uVar28 = *(undefined8 *)(lVar33 + 0xb0);
          *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar33 + 0xa8);
          *(undefined8 *)(puVar34 + 0x28) = uVar28;
          _swift_bridgeObjectRetain();
          SVar58.bridgeObject = pcVar14;
          SVar58.str = pcVar13;
          Swift::String::reserveCapacity(2,SVar58);
          SVar67.bridgeObject = puVar11;
          SVar67.str = pcVar14;
          Swift::String::write(*(String *)(unaff_x22 + 0x1460),SVar67);
          *(undefined8 *)(puVar34 + 0x30) = 0;
          *(undefined8 *)(puVar34 + 0x38) = 0xe000000000000000;
          puVar34[0x58] = 0;
          puVar6 = puVar34;
          FUN_1009d858c();
          _swift_setDeallocating(puVar34);
          FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar34,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x4b8) = 1;
          *(undefined8 *)(unaff_x22 + 0x4c0) = 0xd000000000000030;
          *(undefined8 *)(unaff_x22 + 0x4c8) = 0x8000000100db7a10;
          *(undefined8 *)(unaff_x22 + 0x4d0) = 0;
          *(undefined **)(unaff_x22 + 0x4d8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
          *(undefined8 *)(unaff_x22 + 0x4e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x4f0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x4f8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x500) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x508) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x510) = 400;
          *(undefined1 *)(unaff_x22 + 0x38) = 1;
          *(undefined8 *)(unaff_x22 + 0x40) = 0xd000000000000030;
          *(undefined8 *)(unaff_x22 + 0x48) = 0x8000000100db7a10;
          *(undefined8 *)(unaff_x22 + 0x50) = 0;
          *(undefined **)(unaff_x22 + 0x58) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x60) = 0;
          *(undefined8 *)(unaff_x22 + 0x68) = 0;
          *(undefined8 *)(unaff_x22 + 0x70) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x78) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x80) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x88) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x90) = 400;
          FUN_1005bf638(unaff_x22 + 0x4b8,unaff_x22 + 0x938);
          FUN_1004eaa3c(unaff_x22 + 0x38);
          (**(code **)(pcVar17 + 0x28))(unaff_x22 + 0x4b8,uVar29);
          FUN_1004eaa3c(unaff_x22 + 0x4b8);
          FUN_100004594(unaff_x22 + 0x18d8);
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1b50);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1b40);
        _Var12.unknown = *(undefined **)(unaff_x22 + 0x1b28);
        puVar25 = *(undefined8 **)(unaff_x22 + 0x1af8);
        FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1b00));
        SVar53 = *(String *)(unaff_x22 + 0x1460);
        Swift::_StringGuts::grow(0x12,_Var12);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar68.bridgeObject = puVar11;
        SVar68.str = pcVar17;
        Swift::String::append(SVar53,SVar68);
        SVar45.bridgeObject = (void *)0xe100000000000000;
        SVar45.str = (char *)0x29;
        SVar69.bridgeObject = puVar11;
        SVar69.str = pcVar17;
        Swift::String::append(SVar45,SVar69);
        plVar9 = (long *)0x0;
        FUN_1009dad00();
        _swift_allocObject();
        *(undefined1 *)(plVar9 + 4) = 2;
        plVar9[5] = -0x2fffffffffffffdd;
        plVar9[6] = -0x7ffffffeff248d30;
        plVar9[7] = 0x19b;
        plVar9[2] = 0x2065636976726553;
        plVar9[3] = -0x10d79b9a93969e9a;
        plVar8 = plVar9;
        FUN_1009d7db0();
        puVar11 = &DAT_100f26798;
        _swift_allocError(&DAT_100f26798,plVar8,0,0);
        *plVar8 = (long)plVar9;
        _swift_release(uVar29);
        _swift_release(uVar28);
        FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
        *puVar25 = puVar11;
        *(undefined1 *)(puVar25 + 1) = 1;
      }
      else {
        if (*(char *)(unaff_x22 + 0x1458) == '\x01') {
          FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x1860);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1878);
          lVar33 = *(long *)(unaff_x22 + 0x1880);
          FUN_100004640(unaff_x22 + 0x1860,uVar28);
          (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
          FUN_100004594(unaff_x22 + 0x1860);
          if (((uint)uVar28 & 0xff) < 2) {
            lVar33 = *(long *)(unaff_x22 + 0x1b08);
            FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 6000);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x1788);
            lVar37 = *(long *)(unaff_x22 + 0x1790);
            FUN_100004640();
            puVar34 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar17 = (char *)0x60;
            pcVar13 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar34 + 0x18) = 2;
            *(undefined8 *)(puVar34 + 0x10) = 1;
            uVar28 = *(undefined8 *)(lVar33 + 0xb0);
            *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar33 + 0xa8);
            *(undefined8 *)(puVar34 + 0x28) = uVar28;
            _swift_bridgeObjectRetain();
            SVar52.bridgeObject = pcVar13;
            SVar52.str = pcVar17;
            Swift::String::reserveCapacity(2,SVar52);
            SVar63.bridgeObject = puVar11;
            SVar63.str = pcVar13;
            Swift::String::write(*(String *)(unaff_x22 + 0x1460),SVar63);
            *(undefined8 *)(puVar34 + 0x30) = 0;
            *(undefined8 *)(puVar34 + 0x38) = 0xe000000000000000;
            puVar34[0x58] = 0;
            puVar11 = puVar34;
            FUN_1009d858c();
            _swift_setDeallocating(puVar34);
            FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
            _swift_deallocClassInstance(puVar34,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x458) = 1;
            *(undefined8 *)(unaff_x22 + 0x460) = 0xd000000000000031;
            *(undefined8 *)(unaff_x22 + 0x468) = 0x8000000100db79d0;
            *(undefined8 *)(unaff_x22 + 0x470) = 0;
            *(undefined **)(unaff_x22 + 0x478) = puVar11;
            *(undefined8 *)(unaff_x22 + 0x488) = 0;
            *(undefined8 *)(unaff_x22 + 0x480) = 0;
            *(undefined8 *)(unaff_x22 + 0x490) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x498) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x4a0) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0x4a8) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0x4b0) = 0x19f;
            *(undefined1 *)(unaff_x22 + 0x6f8) = 1;
            *(undefined8 *)(unaff_x22 + 0x700) = 0xd000000000000031;
            *(undefined8 *)(unaff_x22 + 0x708) = 0x8000000100db79d0;
            *(undefined8 *)(unaff_x22 + 0x710) = 0;
            *(undefined **)(unaff_x22 + 0x718) = puVar11;
            *(undefined8 *)(unaff_x22 + 0x728) = 0;
            *(undefined8 *)(unaff_x22 + 0x720) = 0;
            *(undefined8 *)(unaff_x22 + 0x730) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x738) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x740) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0x748) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0x750) = 0x19f;
            FUN_1005bf638(unaff_x22 + 0x458,unaff_x22 + 0xc38);
            FUN_1004eaa3c(unaff_x22 + 0x6f8);
            (**(code **)(lVar37 + 0x28))(unaff_x22 + 0x458,uVar29,lVar37);
            FUN_1004eaa3c(unaff_x22 + 0x458);
            FUN_100004594(unaff_x22 + 6000);
          }
          uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
          *(undefined8 *)(unaff_x22 + 0x1138) = 0;
          *(undefined8 *)(unaff_x22 + 0x1130) = 0;
          *(undefined8 *)(unaff_x22 + 0x1148) = 0;
          *(undefined8 *)(unaff_x22 + 0x1140) = 0;
          *(undefined8 *)(unaff_x22 + 0x1158) = 0;
          *(undefined8 *)(unaff_x22 + 0x1150) = 0;
          *(undefined8 *)(unaff_x22 + 0x1168) = 0;
          *(undefined8 *)(unaff_x22 + 0x1160) = 0;
          _swift_isUniquelyReferenced_nonNull_native();
          lVar33 = *(long *)(unaff_x22 + 0x1b98);
          if ((uVar36 & 1) == 0) {
            FUN_1009d6758();
          }
          if ((long)uVar38 < 0) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0538);
            (*pcVar35)();
          }
          if (*(ulong *)(lVar33 + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0554);
            (*pcVar35)();
          }
          FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x1130),lVar33 + uVar38 * 0x40 + 0x20);
          *(long *)(unaff_x22 + 0x1ae0) = lVar33;
          plVar8 = (long *)0x1a90;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1bb0) = plVar8;
          pcVar35 = FUN_1009d05f0;
          goto LAB_1009cee6c;
        }
        FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x17c0);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x17d8);
        lVar33 = *(long *)(unaff_x22 + 0x17e0);
        FUN_100004640(unaff_x22 + 0x17c0,uVar28);
        (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
        FUN_100004594(unaff_x22 + 0x17c0);
        if (((uint)uVar28 & 0xff) < 2) {
          lVar37 = *(long *)(unaff_x22 + 0x1b08);
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1810);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x1828);
          lVar33 = *(long *)(unaff_x22 + 0x1830);
          FUN_100004640();
          puVar34 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar17 = (char *)0x60;
          pcVar13 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar34 + 0x18) = 2;
          *(undefined8 *)(puVar34 + 0x10) = 1;
          uVar28 = *(undefined8 *)(lVar37 + 0xb0);
          *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar37 + 0xa8);
          *(undefined8 *)(puVar34 + 0x28) = uVar28;
          *(undefined8 *)(unaff_x22 + 0x1a20) = 0;
          *(undefined8 *)(unaff_x22 + 0x1a28) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar57.bridgeObject = pcVar13;
          SVar57.str = pcVar17;
          Swift::String::reserveCapacity(2,SVar57);
          *(undefined8 *)(unaff_x22 + 0x1a30) = *(undefined8 *)(unaff_x22 + 0x1a20);
          *(undefined8 *)(unaff_x22 + 0x1a38) = *(undefined8 *)(unaff_x22 + 0x1a28);
          SVar66.bridgeObject = puVar11;
          SVar66.str = pcVar13;
          Swift::String::write(*(String *)(unaff_x22 + 0x1460),SVar66);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1a38);
          *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1a30);
          *(undefined8 *)(puVar34 + 0x38) = uVar28;
          puVar34[0x58] = 0;
          puVar11 = puVar34;
          FUN_1009d858c();
          _swift_setDeallocating(puVar34);
          FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar34,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x398) = 1;
          *(undefined8 *)(unaff_x22 + 0x3a0) = 0xd000000000000011;
          *(undefined8 *)(unaff_x22 + 0x3a8) = 0x8000000100db79b0;
          *(undefined8 *)(unaff_x22 + 0x3b0) = 0;
          *(undefined **)(unaff_x22 + 0x3b8) = puVar11;
          *(undefined8 *)(unaff_x22 + 0x3c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x3c0) = 0;
          *(undefined8 *)(unaff_x22 + 0x3d0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x3d8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x3e0) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 1000) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x3f0) = 0x1b3;
          *(undefined1 *)(unaff_x22 + 0x7b8) = 1;
          *(undefined8 *)(unaff_x22 + 0x7c0) = 0xd000000000000011;
          *(undefined8 *)(unaff_x22 + 0x7c8) = 0x8000000100db79b0;
          *(undefined8 *)(unaff_x22 + 2000) = 0;
          *(undefined **)(unaff_x22 + 0x7d8) = puVar11;
          *(undefined8 *)(unaff_x22 + 0x7e8) = 0;
          *(undefined8 *)(unaff_x22 + 0x7e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x7f0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x7f8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x800) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x808) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x810) = 0x1b3;
          FUN_1005bf638(unaff_x22 + 0x398,unaff_x22 + 0x638);
          FUN_1004eaa3c(unaff_x22 + 0x7b8);
          (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x398,uVar29);
          FUN_1004eaa3c(unaff_x22 + 0x398);
          FUN_100004594(unaff_x22 + 0x1810);
        }
        uVar31 = *(ulong *)(unaff_x22 + 0x1b98);
        *(undefined8 *)(unaff_x22 + 0x12b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x12b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x12c8) = 0;
        *(undefined8 *)(unaff_x22 + 0x12c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x12d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x12d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x12e8) = 0;
        *(undefined8 *)(unaff_x22 + 0x12e0) = 0;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
        if ((uVar31 & 1) == 0) {
          FUN_1009d6758();
        }
        if ((long)uVar38 < 0) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0550);
          (*pcVar35)();
        }
        if (*(ulong *)(uVar36 + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0558);
          (*pcVar35)();
        }
        lVar33 = uVar36 + 0x20;
        FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x12b0),lVar33 + uVar38 * 0x40);
        *(ulong *)(unaff_x22 + 0x1ae0) = uVar36;
        for (lVar37 = *(long *)(uVar36 + 0x10); lVar37 != 0; lVar37 = lVar37 + -1) {
          FUN_1000f8cac(lVar33,unaff_x22 + 0x13f0,&DAT_100ff31c8,&DAT_100c8c5d0);
          if (*(long *)(unaff_x22 + 0x1408) != 0) {
            FUN_1000fb4c4(unaff_x22 + 0x13f0,&DAT_100ff31c8,&DAT_100c8c5d0);
            FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
            FUN_1009d7d7c(puVar10);
            puVar11 = *(undefined **)(unaff_x22 + 0x1b90);
            goto LAB_1009cf930;
          }
          FUN_1000fb4c4(unaff_x22 + 0x13f0,&DAT_100ff31c8,&DAT_100c8c5d0);
          lVar33 = lVar33 + 0x40;
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x14c8);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x14e0);
        lVar33 = *(long *)(unaff_x22 + 0x14e8);
        FUN_100004640(unaff_x22 + 0x14c8,uVar28);
        (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
        FUN_100004594(unaff_x22 + 0x14c8);
        if (((uint)uVar28 & 0xff) < 2) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1838);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1850);
          lVar33 = *(long *)(unaff_x22 + 0x1858);
          FUN_100004640(unaff_x22 + 0x1838,uVar28);
          *(undefined1 *)(unaff_x22 + 0x3f8) = 1;
          *(undefined8 *)(unaff_x22 + 0x400) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0x408) = 0x8000000100db7930;
          *(undefined8 *)(unaff_x22 + 0x418) = 0;
          *(undefined8 *)(unaff_x22 + 0x410) = 0;
          *(undefined8 *)(unaff_x22 + 0x428) = 0;
          *(undefined8 *)(unaff_x22 + 0x420) = 0;
          *(undefined8 *)(unaff_x22 + 0x430) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x438) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x440) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x448) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x450) = 0x1bc;
          *(undefined1 *)(unaff_x22 + 0x578) = 1;
          *(undefined8 *)(unaff_x22 + 0x580) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0x588) = 0x8000000100db7930;
          *(undefined8 *)(unaff_x22 + 0x598) = 0;
          *(undefined8 *)(unaff_x22 + 0x590) = 0;
          *(undefined8 *)(unaff_x22 + 0x5a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x5a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x5b0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x5b8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x5c0) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x5c8) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x5d0) = 0x1bc;
          FUN_1005bf638(unaff_x22 + 0x3f8,unaff_x22 + 0xf38);
          FUN_1004eaa3c(unaff_x22 + 0x578);
          (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x3f8,uVar28,lVar33);
          FUN_1004eaa3c(unaff_x22 + 0x3f8);
          FUN_100004594(unaff_x22 + 0x1838);
        }
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1b50);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1b40);
        puVar25 = *(undefined8 **)(unaff_x22 + 0x1af8);
        FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1b00),*(undefined8 *)(unaff_x22 + 0x1b28));
        _swift_release(uVar28);
        _swift_release(uVar29);
        FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
        *puVar25 = 0;
        *(undefined1 *)(puVar25 + 1) = 0;
      }
    }
    else {
      puVar10 = (undefined8 *)(unaff_x22 + 0x1230);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1098);
      *(undefined8 *)(unaff_x22 + 0x1bc0) = uVar28;
      *(undefined8 *)(unaff_x22 + 0x1258) = *(undefined8 *)(unaff_x22 + 0x1078);
      *(undefined8 *)(unaff_x22 + 0x1250) = *(undefined8 *)(unaff_x22 + 0x1070);
      *(undefined8 *)(unaff_x22 + 0x1268) = *(undefined8 *)(unaff_x22 + 0x1088);
      *(undefined8 *)(unaff_x22 + 0x1260) = *(undefined8 *)(unaff_x22 + 0x1080);
      *(undefined8 *)(unaff_x22 + 0x1238) = *(undefined8 *)(unaff_x22 + 0x1058);
      *puVar10 = *puVar25;
      *(undefined8 *)(unaff_x22 + 0x1248) = *(undefined8 *)(unaff_x22 + 0x1068);
      *(undefined8 *)(unaff_x22 + 0x1240) = *(undefined8 *)(unaff_x22 + 0x1060);
      lVar33 = *(long *)(unaff_x22 + 0x1b78);
      if (*(char *)(unaff_x22 + 0x1259) == '\0') {
        FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x16d0);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x16e8);
        lVar33 = *(long *)(unaff_x22 + 0x16f0);
        FUN_100004640(unaff_x22 + 0x16d0,uVar29);
        (**(code **)(lVar33 + 0x70))(uVar29,lVar33);
        FUN_100004594(unaff_x22 + 0x16d0);
        if (((uint)uVar29 & 0xff) < 2) {
          lVar37 = *(long *)(unaff_x22 + 0x1b08);
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1720);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1738);
          lVar33 = *(long *)(unaff_x22 + 0x1740);
          FUN_100004640();
          puVar34 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar17 = (char *)0xa0;
          pcVar13 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar34 + 0x18) = 4;
          *(undefined8 *)(puVar34 + 0x10) = 2;
          uVar29 = *(undefined8 *)(lVar37 + 0xb0);
          *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar37 + 0xa8);
          *(undefined8 *)(puVar34 + 0x28) = uVar29;
          _swift_bridgeObjectRetain();
          SVar53.bridgeObject = pcVar13;
          SVar53.str = pcVar17;
          Swift::String::reserveCapacity(2,SVar53);
          pcVar17 = (*(String *)(unaff_x22 + 0x1260)).bridgeObject;
          SVar64.bridgeObject = puVar11;
          SVar64.str = pcVar13;
          Swift::String::write(*(String *)(unaff_x22 + 0x1260),SVar64);
          *(undefined8 *)(puVar34 + 0x30) = 0;
          *(undefined8 *)(puVar34 + 0x38) = 0xe000000000000000;
          puVar34[0x58] = 0;
          uVar29 = *(undefined8 *)(lVar37 + 0xd0);
          *(undefined8 *)(puVar34 + 0x60) = *(undefined8 *)(lVar37 + 200);
          *(undefined8 *)(puVar34 + 0x68) = uVar29;
          _swift_bridgeObjectRetain();
          SVar54.bridgeObject = pcVar13;
          SVar54.str = pcVar17;
          Swift::String::reserveCapacity(2,SVar54);
          _swift_getErrorValue(uVar28,unaff_x22 + 0x1ad0,unaff_x22 + 0x1978);
          FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x1978),*(undefined8 *)(unaff_x22 + 0x1980));
          *(undefined8 *)(puVar34 + 0x70) = 0;
          *(undefined8 *)(puVar34 + 0x78) = 0xe000000000000000;
          puVar34[0x98] = 0;
          puVar6 = puVar34;
          FUN_1009d858c();
          _swift_setDeallocating(puVar34);
          puVar11 = &DAT_100ff3480;
          FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
          _swift_arrayDestroy(puVar34 + 0x20,2,puVar11);
          _swift_deallocClassInstance(puVar34,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x338) = 1;
          *(undefined8 *)(unaff_x22 + 0x340) = 0xd000000000000026;
          *(undefined8 *)(unaff_x22 + 0x348) = 0x8000000100db7980;
          *(undefined8 *)(unaff_x22 + 0x350) = 0;
          *(undefined **)(unaff_x22 + 0x358) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x368) = 0;
          *(undefined8 *)(unaff_x22 + 0x360) = 0;
          *(undefined8 *)(unaff_x22 + 0x370) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x378) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x380) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x388) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x390) = 0x1ca;
          *(undefined1 *)(unaff_x22 + 0xcf8) = 1;
          *(undefined8 *)(unaff_x22 + 0xd00) = 0xd000000000000026;
          *(undefined8 *)(unaff_x22 + 0xd08) = 0x8000000100db7980;
          *(undefined8 *)(unaff_x22 + 0xd10) = 0;
          *(undefined **)(unaff_x22 + 0xd18) = puVar6;
          *(undefined8 *)(unaff_x22 + 0xd28) = 0;
          *(undefined8 *)(unaff_x22 + 0xd20) = 0;
          *(undefined8 *)(unaff_x22 + 0xd30) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xd38) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xd40) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0xd48) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0xd50) = 0x1ca;
          FUN_1005bf638(unaff_x22 + 0x338,unaff_x22 + 0xb78);
          FUN_1004eaa3c(unaff_x22 + 0xcf8);
          (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x338,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x338);
          FUN_100004594(unaff_x22 + 0x1720);
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1b50);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1b40);
        puVar25 = *(undefined8 **)(unaff_x22 + 0x1af8);
        FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1b00),*(undefined8 *)(unaff_x22 + 0x1b28));
        _swift_release(uVar29);
        _swift_release(uVar15);
        FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
        *puVar25 = uVar28;
        *(undefined1 *)(puVar25 + 1) = 1;
      }
      else {
        if (*(char *)(unaff_x22 + 0x1259) == '\x01') {
          FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x15b8);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x15d0);
          lVar33 = *(long *)(unaff_x22 + 0x15d8);
          FUN_100004640(unaff_x22 + 0x15b8,uVar29);
          (**(code **)(lVar33 + 0x70))(uVar29,lVar33);
          FUN_100004594(unaff_x22 + 0x15b8);
          if (((uint)uVar29 & 0xff) < 2) {
            lVar37 = *(long *)(unaff_x22 + 0x1b08);
            FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1608);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x1620);
            lVar33 = *(long *)(unaff_x22 + 0x1628);
            FUN_100004640();
            puVar34 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar17 = (char *)0xa0;
            pcVar13 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar34 + 0x18) = 4;
            *(undefined8 *)(puVar34 + 0x10) = 2;
            uVar29 = *(undefined8 *)(lVar37 + 0xb0);
            *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar37 + 0xa8);
            *(undefined8 *)(puVar34 + 0x28) = uVar29;
            _swift_bridgeObjectRetain();
            SVar49.bridgeObject = pcVar13;
            SVar49.str = pcVar17;
            Swift::String::reserveCapacity(2,SVar49);
            pcVar17 = (*(String *)(unaff_x22 + 0x1260)).bridgeObject;
            SVar61.bridgeObject = puVar11;
            SVar61.str = pcVar13;
            Swift::String::write(*(String *)(unaff_x22 + 0x1260),SVar61);
            *(undefined8 *)(puVar34 + 0x30) = 0;
            *(undefined8 *)(puVar34 + 0x38) = 0xe000000000000000;
            puVar34[0x58] = 0;
            uVar29 = *(undefined8 *)(lVar37 + 0xd0);
            *(undefined8 *)(puVar34 + 0x60) = *(undefined8 *)(lVar37 + 200);
            *(undefined8 *)(puVar34 + 0x68) = uVar29;
            _swift_bridgeObjectRetain();
            SVar50.bridgeObject = pcVar13;
            SVar50.str = pcVar17;
            Swift::String::reserveCapacity(2,SVar50);
            _swift_getErrorValue(uVar28,unaff_x22 + 0x1ad8,unaff_x22 + 0x1990);
            FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x1990),*(undefined8 *)(unaff_x22 + 0x1998));
            *(undefined8 *)(puVar34 + 0x70) = 0;
            *(undefined8 *)(puVar34 + 0x78) = 0xe000000000000000;
            puVar34[0x98] = 0;
            puVar6 = puVar34;
            FUN_1009d858c();
            _swift_setDeallocating(puVar34);
            puVar11 = &DAT_100ff3480;
            FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
            _swift_arrayDestroy(puVar34 + 0x20,2,puVar11);
            _swift_deallocClassInstance(puVar34,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x2d8) = 1;
            *(undefined8 *)(unaff_x22 + 0x2e0) = 0xd000000000000029;
            *(undefined8 *)(unaff_x22 + 0x2e8) = 0x8000000100db7950;
            *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
            *(undefined **)(unaff_x22 + 0x2f8) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x308) = 0;
            *(undefined8 *)(unaff_x22 + 0x300) = 0;
            *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 800) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0x328) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0x330) = 0x1d8;
            *(undefined1 *)(unaff_x22 + 0x98) = 1;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0xd000000000000029;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0x8000000100db7950;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0;
            *(undefined **)(unaff_x22 + 0xb8) = puVar6;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0;
            *(undefined8 *)(unaff_x22 + 200) = 0;
            *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xe0) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0xf0) = 0x1d8;
            FUN_1005bf638(unaff_x22 + 0x2d8,unaff_x22 + 0xe78);
            FUN_1004eaa3c(unaff_x22 + 0x98);
            (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x2d8,uVar15);
            FUN_1004eaa3c(unaff_x22 + 0x2d8);
            FUN_100004594(unaff_x22 + 0x1608);
          }
          uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
          *(undefined8 *)(unaff_x22 + 0x1178) = 0;
          *(undefined8 *)(unaff_x22 + 0x1170) = 0;
          *(undefined8 *)(unaff_x22 + 0x1188) = 0;
          *(undefined8 *)(unaff_x22 + 0x1180) = 0;
          *(undefined8 *)(unaff_x22 + 0x1198) = 0;
          *(undefined8 *)(unaff_x22 + 0x1190) = 0;
          *(undefined8 *)(unaff_x22 + 0x11a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x11a0) = 0;
          _swift_isUniquelyReferenced_nonNull_native();
          lVar33 = *(long *)(unaff_x22 + 0x1b98);
          if ((uVar36 & 1) == 0) {
            FUN_1009d6758();
          }
          if ((long)uVar38 < 0) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0504);
            (*pcVar35)();
          }
          if (*(ulong *)(lVar33 + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
            pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0520);
            (*pcVar35)();
          }
          FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x1170),lVar33 + uVar38 * 0x40 + 0x20);
          *(long *)(unaff_x22 + 0x1ae0) = lVar33;
          plVar8 = (long *)0x1a90;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1bc8) = plVar8;
          pcVar35 = FUN_1009d0760;
          goto LAB_1009cee6c;
        }
        FUN_100076688(lVar33 + 0x20,unaff_x22 + 0x1540);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1558);
        lVar33 = *(long *)(unaff_x22 + 0x1560);
        FUN_100004640(unaff_x22 + 0x1540,uVar29);
        (**(code **)(lVar33 + 0x70))(uVar29,lVar33);
        FUN_100004594(unaff_x22 + 0x1540);
        if (((uint)uVar29 & 0xff) < 2) {
          lVar37 = *(long *)(unaff_x22 + 0x1b08);
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x14f0);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1508);
          lVar33 = *(long *)(unaff_x22 + 0x1510);
          FUN_100004640();
          puVar34 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar17 = (char *)0xa0;
          pcVar13 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar34 + 0x18) = 4;
          *(undefined8 *)(puVar34 + 0x10) = 2;
          uVar29 = *(undefined8 *)(lVar37 + 0xb0);
          *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar37 + 0xa8);
          *(undefined8 *)(puVar34 + 0x28) = uVar29;
          *(undefined8 *)(unaff_x22 + 0x1a50) = 0;
          *(undefined8 *)(unaff_x22 + 0x1a58) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar55.bridgeObject = pcVar13;
          SVar55.str = pcVar17;
          Swift::String::reserveCapacity(2,SVar55);
          *(undefined8 *)(unaff_x22 + 0x1a60) = *(undefined8 *)(unaff_x22 + 0x1a50);
          *(undefined8 *)(unaff_x22 + 0x1a68) = *(undefined8 *)(unaff_x22 + 0x1a58);
          pcVar17 = (*(String *)(unaff_x22 + 0x1260)).bridgeObject;
          SVar65.bridgeObject = puVar11;
          SVar65.str = pcVar13;
          Swift::String::write(*(String *)(unaff_x22 + 0x1260),SVar65);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x1a68);
          *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1a60);
          *(undefined8 *)(puVar34 + 0x38) = uVar29;
          puVar34[0x58] = 0;
          uVar29 = *(undefined8 *)(lVar37 + 0xd0);
          *(undefined8 *)(puVar34 + 0x60) = *(undefined8 *)(lVar37 + 200);
          *(undefined8 *)(puVar34 + 0x68) = uVar29;
          *(undefined8 *)(unaff_x22 + 0x1a40) = 0;
          *(undefined8 *)(unaff_x22 + 0x1a48) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar56.bridgeObject = pcVar13;
          SVar56.str = pcVar17;
          Swift::String::reserveCapacity(2,SVar56);
          *(undefined8 *)(unaff_x22 + 0x1470) = *(undefined8 *)(unaff_x22 + 0x1a40);
          *(undefined8 *)(unaff_x22 + 0x1478) = *(undefined8 *)(unaff_x22 + 0x1a48);
          *(undefined8 *)(unaff_x22 + 0x1480) = 0;
          *(undefined8 *)(unaff_x22 + 0x1490) = 0;
          *(undefined8 *)(unaff_x22 + 0x1488) = 0;
          *(undefined1 *)(unaff_x22 + 0x1498) = 0;
          _swift_getErrorValue(uVar28,unaff_x22 + 0x1af0,unaff_x22 + 0x19a8);
          FUN_1005c4024(0x1470,*(undefined8 *)(unaff_x22 + 0x19a8),
                        *(undefined8 *)(unaff_x22 + 0x19b0));
          uVar29 = *(undefined8 *)(unaff_x22 + 0x1478);
          *(undefined8 *)(puVar34 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1470);
          *(undefined8 *)(puVar34 + 0x78) = uVar29;
          puVar34[0x98] = 0;
          puVar6 = puVar34;
          FUN_1009d858c();
          _swift_setDeallocating(puVar34);
          puVar11 = &DAT_100ff3480;
          FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
          _swift_arrayDestroy(puVar34 + 0x20,2,puVar11);
          _swift_deallocClassInstance(puVar34,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x218) = 1;
          *(undefined8 *)(unaff_x22 + 0x220) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0x228) = 0x8000000100db7910;
          *(undefined8 *)(unaff_x22 + 0x230) = 0;
          *(undefined **)(unaff_x22 + 0x238) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x248) = 0;
          *(undefined8 *)(unaff_x22 + 0x240) = 0;
          *(undefined8 *)(unaff_x22 + 0x250) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 600) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x260) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x268) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x270) = 0x1ee;
          *(undefined1 *)(unaff_x22 + 0x998) = 1;
          *(undefined8 *)(unaff_x22 + 0x9a0) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0x9a8) = 0x8000000100db7910;
          *(undefined8 *)(unaff_x22 + 0x9b0) = 0;
          *(undefined **)(unaff_x22 + 0x9b8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x9c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x9c0) = 0;
          *(undefined8 *)(unaff_x22 + 0x9d0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x9d8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x9e0) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x9e8) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x9f0) = 0x1ee;
          FUN_1005bf638(unaff_x22 + 0x218,unaff_x22 + 0x818);
          FUN_1004eaa3c(unaff_x22 + 0x998);
          (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x218,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x218);
          FUN_100004594(unaff_x22 + 0x14f0);
        }
        uVar31 = *(ulong *)(unaff_x22 + 0x1b98);
        *(undefined8 *)(unaff_x22 + 0x13b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x13b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x13c8) = 0;
        *(undefined8 *)(unaff_x22 + 0x13c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x13d8) = 0;
        *(undefined8 *)(unaff_x22 + 0x13d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x13e8) = 0;
        *(undefined8 *)(unaff_x22 + 0x13e0) = 0;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
        if ((uVar31 & 1) == 0) {
          FUN_1009d6758();
        }
        if ((long)uVar38 < 0) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d051c);
          (*pcVar35)();
        }
        if (*(ulong *)(uVar36 + 0x10) <= uVar38) {
                    /* WARNING: Does not return */
          pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0524);
          (*pcVar35)();
        }
        lVar33 = uVar36 + 0x20;
        FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x13b0),lVar33 + uVar38 * 0x40);
        *(ulong *)(unaff_x22 + 0x1ae0) = uVar36;
        for (lVar37 = *(long *)(uVar36 + 0x10); lVar37 != 0; lVar37 = lVar37 + -1) {
          FUN_1000f8cac(lVar33,unaff_x22 + 0x12f0,&DAT_100ff31c8,&DAT_100c8c5d0);
          if (*(long *)(unaff_x22 + 0x1308) != 0) {
            FUN_1000fb4c4(unaff_x22 + 0x12f0,&DAT_100ff31c8,&DAT_100c8c5d0);
            FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
            _swift_errorRelease(uVar28);
            FUN_1009d7d7c(puVar10);
            puVar11 = *(undefined **)(unaff_x22 + 0x1b90);
            goto LAB_1009cf930;
          }
          FUN_1000fb4c4(unaff_x22 + 0x12f0,&DAT_100ff31c8,&DAT_100c8c5d0);
          lVar33 = lVar33 + 0x40;
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1518);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1530);
        lVar33 = *(long *)(unaff_x22 + 0x1538);
        FUN_100004640(unaff_x22 + 0x1518,uVar29);
        (**(code **)(lVar33 + 0x70))(uVar29,lVar33);
        FUN_100004594(unaff_x22 + 0x1518);
        if (((uint)uVar29 & 0xff) < 2) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1568);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x1580);
          lVar33 = *(long *)(unaff_x22 + 0x1588);
          FUN_100004640(unaff_x22 + 0x1568,uVar29);
          *(undefined1 *)(unaff_x22 + 0x278) = 1;
          *(undefined8 *)(unaff_x22 + 0x280) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100db7930;
          *(undefined8 *)(unaff_x22 + 0x298) = 0;
          *(undefined8 *)(unaff_x22 + 0x290) = 0;
          *(undefined8 *)(unaff_x22 + 0x2a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x2b0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x2b8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x2c0) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x2c8) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x2d0) = 0x1f8;
          *(undefined1 *)(unaff_x22 + 0x9f8) = 1;
          *(undefined8 *)(unaff_x22 + 0xa00) = 0xd000000000000016;
          *(undefined8 *)(unaff_x22 + 0xa08) = 0x8000000100db7930;
          *(undefined8 *)(unaff_x22 + 0xa18) = 0;
          *(undefined8 *)(unaff_x22 + 0xa10) = 0;
          *(undefined8 *)(unaff_x22 + 0xa28) = 0;
          *(undefined8 *)(unaff_x22 + 0xa20) = 0;
          *(undefined8 *)(unaff_x22 + 0xa30) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xa38) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xa40) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0xa48) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0xa50) = 0x1f8;
          FUN_1005bf638(unaff_x22 + 0x278,unaff_x22 + 0xab8);
          FUN_1004eaa3c(unaff_x22 + 0x9f8);
          (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x278,uVar29,lVar33);
          FUN_1004eaa3c(unaff_x22 + 0x278);
          FUN_100004594(unaff_x22 + 0x1568);
        }
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1b50);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1b40);
        puVar25 = *(undefined8 **)(unaff_x22 + 0x1af8);
        FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1b00),*(undefined8 *)(unaff_x22 + 0x1b28));
        _swift_errorRelease(uVar28);
        _swift_release(uVar29);
        _swift_release(uVar15);
        FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
        *puVar25 = 0;
        *(undefined1 *)(puVar25 + 1) = 0;
      }
    }
    FUN_1009d7d7c(puVar10);
    puVar11 = *(undefined **)(unaff_x22 + 0x1b90);
  }
  else {
    pcVar17 = *(char **)(unaff_x22 + 0x1050);
    if (bVar2 == 2) {
      lVar37 = *(long *)(*(long *)(unaff_x22 + 0x1b30) + 0x10);
      lVar33 = 0x20;
      do {
        if (lVar33 - lVar37 == 0x20) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x15e0);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x15f8);
          lVar33 = *(long *)(unaff_x22 + 0x1600);
          FUN_100004640(unaff_x22 + 0x15e0,uVar28);
          (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
          FUN_100004594(unaff_x22 + 0x15e0);
          if (1 < ((uint)uVar28 & 0xff)) goto LAB_1009cebc4;
          lVar33 = *(long *)(unaff_x22 + 0x1b08);
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x14a0);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x14b8);
          lVar37 = *(long *)(unaff_x22 + 0x14c0);
          FUN_100004640(unaff_x22 + 0x14a0,uVar29);
          puVar34 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar13 = (char *)0x60;
          pcVar14 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar34 + 0x18) = 2;
          *(undefined8 *)(puVar34 + 0x10) = 1;
          uVar28 = *(undefined8 *)(lVar33 + 0x80);
          *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar33 + 0x78);
          *(undefined8 *)(puVar34 + 0x28) = uVar28;
          *(undefined8 *)(unaff_x22 + 0x1a70) = 0;
          *(undefined8 *)(unaff_x22 + 0x1a78) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar51.bridgeObject = pcVar14;
          SVar51.str = pcVar13;
          Swift::String::reserveCapacity(2,SVar51);
          *(undefined8 *)(unaff_x22 + 0x1a80) = *(undefined8 *)(unaff_x22 + 0x1a70);
          *(undefined8 *)(unaff_x22 + 0x1a88) = *(undefined8 *)(unaff_x22 + 0x1a78);
          thunk_FUN_1009db6c0();
          SVar44.bridgeObject = pcVar13;
          SVar44.str = pcVar17;
          SVar62.bridgeObject = puVar11;
          SVar62.str = pcVar14;
          Swift::String::append(SVar44,SVar62);
          _swift_bridgeObjectRelease(pcVar13);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1a88);
          *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1a80);
          *(undefined8 *)(puVar34 + 0x38) = uVar28;
          puVar34[0x58] = 0;
          puVar11 = puVar34;
          FUN_1009d858c();
          _swift_setDeallocating(puVar34);
          FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar34,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x1b8) = 1;
          *(undefined8 *)(unaff_x22 + 0x1c0) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0x1c8) = 0x8000000100db7580;
          *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
          *(undefined **)(unaff_x22 + 0x1d8) = puVar11;
          *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
          *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x200) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x208) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x210) = 0x21a;
          *(undefined1 *)(unaff_x22 + 0x878) = 1;
          *(undefined8 *)(unaff_x22 + 0x880) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0x888) = 0x8000000100db7580;
          *(undefined8 *)(unaff_x22 + 0x890) = 0;
          *(undefined **)(unaff_x22 + 0x898) = puVar11;
          *(undefined8 *)(unaff_x22 + 0x8a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8b0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x8b8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x8c0) = 0xd00000000000003a;
          *(undefined8 *)(unaff_x22 + 0x8c8) = 0x8000000100db7750;
          *(undefined8 *)(unaff_x22 + 0x8d0) = 0x21a;
          FUN_1005bf638(unaff_x22 + 0x1b8,unaff_x22 + 0xa58);
          FUN_1004eaa3c(unaff_x22 + 0x878);
          (**(code **)(lVar37 + 0x28))(unaff_x22 + 0x1b8,uVar29,lVar37);
          FUN_1004eaa3c(unaff_x22 + 0x1b8);
          lVar33 = unaff_x22 + 0x14a0;
          goto LAB_1009cebc0;
        }
        uVar38 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x1b30) + lVar33);
        FUN_1001a7d78(uVar38,pcVar17);
        lVar33 = lVar33 + 1;
      } while ((uVar38 & 1) == 0);
      FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1680);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1698);
      lVar33 = *(long *)(unaff_x22 + 0x16a0);
      FUN_100004640(unaff_x22 + 0x1680,uVar28);
      (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
      FUN_100004594(unaff_x22 + 0x1680);
      if (((uint)uVar28 & 0xff) < 2) {
        lVar33 = *(long *)(unaff_x22 + 0x1b08);
        FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1658);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1670);
        lVar37 = *(long *)(unaff_x22 + 0x1678);
        FUN_100004640(unaff_x22 + 0x1658,uVar29);
        puVar34 = &DAT_100ff3478;
        FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
        pcVar13 = (char *)0x60;
        pcVar14 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar34 + 0x18) = 2;
        *(undefined8 *)(puVar34 + 0x10) = 1;
        uVar28 = *(undefined8 *)(lVar33 + 0x80);
        *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar33 + 0x78);
        *(undefined8 *)(puVar34 + 0x28) = uVar28;
        _swift_bridgeObjectRetain();
        SVar48.bridgeObject = pcVar14;
        SVar48.str = pcVar13;
        Swift::String::reserveCapacity(2,SVar48);
        thunk_FUN_1009db6c0();
        SVar43.bridgeObject = pcVar13;
        SVar43.str = pcVar17;
        SVar60.bridgeObject = puVar11;
        SVar60.str = pcVar14;
        Swift::String::append(SVar43,SVar60);
        _swift_bridgeObjectRelease(pcVar13);
        *(undefined8 *)(puVar34 + 0x30) = 0;
        *(undefined8 *)(puVar34 + 0x38) = 0xe000000000000000;
        puVar34[0x58] = 0;
        puVar11 = puVar34;
        FUN_1009d858c();
        _swift_setDeallocating(puVar34);
        FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
        _swift_deallocClassInstance(puVar34,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x158) = 1;
        *(undefined8 *)(unaff_x22 + 0x160) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0x168) = 0x8000000100db78e0;
        *(undefined8 *)(unaff_x22 + 0x170) = 0;
        *(undefined **)(unaff_x22 + 0x178) = puVar11;
        *(undefined8 *)(unaff_x22 + 0x188) = 0;
        *(undefined8 *)(unaff_x22 + 0x180) = 0;
        *(undefined8 *)(unaff_x22 + 400) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x198) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0x207;
        *(undefined1 *)(unaff_x22 + 0xed8) = 1;
        *(undefined8 *)(unaff_x22 + 0xee0) = 0xd000000000000027;
        *(undefined8 *)(unaff_x22 + 0xee8) = 0x8000000100db78e0;
        *(undefined8 *)(unaff_x22 + 0xef0) = 0;
        *(undefined **)(unaff_x22 + 0xef8) = puVar11;
        *(undefined8 *)(unaff_x22 + 0xf08) = 0;
        *(undefined8 *)(unaff_x22 + 0xf00) = 0;
        *(undefined8 *)(unaff_x22 + 0xf10) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0xf18) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0xf20) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0xf28) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0xf30) = 0x207;
        FUN_1005bf638(unaff_x22 + 0x158,unaff_x22 + 0xf98);
        FUN_1004eaa3c(unaff_x22 + 0xed8);
        (**(code **)(lVar37 + 0x28))(unaff_x22 + 0x158,uVar29,lVar37);
        FUN_1004eaa3c(unaff_x22 + 0x158);
        FUN_100004594(unaff_x22 + 0x1658);
      }
      plVar8 = (long *)0x1a90;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1bd8) = plVar8;
      pcVar35 = FUN_1009d08e0;
LAB_1009cee6c:
      *plVar8 = unaff_x22;
      plVar8[1] = (long)pcVar35;
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1b90);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1b28);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1b00);
      lVar33 = *(long *)PTR____stack_chk_guard_100ea82f0;
joined_r0x0001009cee94:
      if (lVar33 == lVar16) {
        FUN_1009d178c(plVar8,unaff_x22 + 0x1ae0,uVar29,uVar15,uVar28);
        return;
      }
      goto LAB_1009d0558;
    }
    if (bVar2 == 3) {
      puVar10 = (undefined8 *)(unaff_x22 + 0x1330);
      ppVar1 = (pthread_mutexattr_t *)(unaff_x22 + 0x1ab0);
      *(undefined8 *)(unaff_x22 + 0x1338) = *(undefined8 *)(unaff_x22 + 0x1058);
      *puVar10 = *puVar25;
      *(undefined8 *)(unaff_x22 + 0x1348) = *(undefined8 *)(unaff_x22 + 0x1068);
      *(undefined8 *)(unaff_x22 + 0x1340) = *(undefined8 *)(unaff_x22 + 0x1060);
      *(undefined8 *)(unaff_x22 + 0x1358) = *(undefined8 *)(unaff_x22 + 0x1078);
      *(undefined8 *)(unaff_x22 + 0x1350) = *(undefined8 *)(unaff_x22 + 0x1070);
      *(undefined8 *)(unaff_x22 + 0x1368) = *(undefined8 *)(unaff_x22 + 0x1088);
      *(undefined8 *)(unaff_x22 + 0x1360) = *(undefined8 *)(unaff_x22 + 0x1080);
      FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1590);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x15a8);
      lVar33 = *(long *)(unaff_x22 + 0x15b0);
      FUN_100004640(unaff_x22 + 0x1590,uVar28);
      (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
      FUN_100004594(unaff_x22 + 0x1590);
      if (((uint)uVar28 & 0xff) < 2) {
        lVar37 = *(long *)(unaff_x22 + 0x1b08);
        FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x17e8);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1800);
        lVar33 = *(long *)(unaff_x22 + 0x1808);
        FUN_100004640(unaff_x22 + 0x17e8,uVar29);
        puVar34 = &DAT_100ff3478;
        FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
        pcVar17 = (char *)0x60;
        pcVar13 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar34 + 0x18) = 2;
        *(undefined8 *)(puVar34 + 0x10) = 1;
        uVar28 = *(undefined8 *)(lVar37 + 0xb0);
        *(undefined8 *)(puVar34 + 0x20) = *(undefined8 *)(lVar37 + 0xa8);
        *(undefined8 *)(puVar34 + 0x28) = uVar28;
        *(undefined8 *)(unaff_x22 + 0x1aa0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1aa8) = 0xe000000000000000;
        _swift_bridgeObjectRetain();
        SVar47.bridgeObject = pcVar13;
        SVar47.str = pcVar17;
        Swift::String::reserveCapacity(2,SVar47);
        *(undefined8 *)(unaff_x22 + 0x1a90) = *(undefined8 *)(unaff_x22 + 0x1aa0);
        *(undefined8 *)(unaff_x22 + 0x1a98) = *(undefined8 *)(unaff_x22 + 0x1aa8);
        SVar59.bridgeObject = puVar11;
        SVar59.str = pcVar13;
        Swift::String::write(*(String *)(unaff_x22 + 0x1360),SVar59);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1a98);
        *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1a90);
        *(undefined8 *)(puVar34 + 0x38) = uVar28;
        puVar34[0x58] = 0;
        puVar11 = puVar34;
        FUN_1009d858c();
        _swift_setDeallocating(puVar34);
        FUN_1000fb4c4(puVar34 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
        _swift_deallocClassInstance(puVar34,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x518) = 1;
        *(undefined8 *)(unaff_x22 + 0x520) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0x528) = 0x8000000100db7a50;
        *(undefined8 *)(unaff_x22 + 0x530) = 0;
        *(undefined **)(unaff_x22 + 0x538) = puVar11;
        *(undefined8 *)(unaff_x22 + 0x548) = 0;
        *(undefined8 *)(unaff_x22 + 0x540) = 0;
        *(undefined8 *)(unaff_x22 + 0x550) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x558) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x560) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0x568) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0x570) = 0x16b;
        *(undefined1 *)(unaff_x22 + 0xdb8) = 1;
        *(undefined8 *)(unaff_x22 + 0xdc0) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0xdc8) = 0x8000000100db7a50;
        *(undefined8 *)(unaff_x22 + 0xdd0) = 0;
        *(undefined **)(unaff_x22 + 0xdd8) = puVar11;
        *(undefined8 *)(unaff_x22 + 0xde8) = 0;
        *(undefined8 *)(unaff_x22 + 0xde0) = 0;
        *(undefined8 *)(unaff_x22 + 0xdf0) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0xdf8) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0xe00) = 0xd00000000000003a;
        *(undefined8 *)(unaff_x22 + 0xe08) = 0x8000000100db7750;
        *(undefined8 *)(unaff_x22 + 0xe10) = 0x16b;
        FUN_1005bf638(unaff_x22 + 0x518,unaff_x22 + 0x758);
        FUN_1004eaa3c(unaff_x22 + 0xdb8);
        (**(code **)(lVar33 + 0x28))(unaff_x22 + 0x518,uVar29,lVar33);
        FUN_1004eaa3c(unaff_x22 + 0x518);
        FUN_100004594(unaff_x22 + 0x17e8);
      }
      puVar6 = (undefined *)0x0;
      FUN_1009c9458();
      _swift_allocObject();
      puVar11 = &DAT_100ff2c60;
      FUN_1000f7830(&DAT_100ff2c60,&DAT_100c8bfe0);
      _swift_allocObject();
      puVar34 = PTR___swiftEmptyArrayStorage_100eae0d8;
      *(undefined **)(puVar11 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
      *(undefined8 *)(puVar11 + 0x18) = 0;
      puVar11[0x20] = 0;
      *(undefined **)(puVar11 + 0x28) = puVar34;
      ppVar1->__sig = 0;
      *(undefined8 *)(unaff_x22 + 0x1ab8) = 0;
      _pthread_mutexattr_init(ppVar1);
      iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar11 + 0x30),ppVar1);
      if (iVar5 != 0) {
                    /* WARNING: Does not return */
        pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d0460);
        (*pcVar35)();
      }
      puVar30 = *(undefined **)(unaff_x22 + 0x1b90);
      *(undefined **)(puVar6 + 0x10) = puVar11;
      _swift_retain(puVar6);
      puVar11 = puVar30;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      puVar34 = *(undefined **)(unaff_x22 + 0x1b90);
      if ((((int)puVar11 == 0) || (((ulong)puVar30 >> 0x3e & 1) != 0)) || ((long)puVar34 < 0)) {
        if ((ulong)puVar34 >> 0x3e == 0) {
          lVar33 = *(long *)(((ulong)puVar30 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var24.unknown = (undefined *)((ulong)puVar30 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar34) {
            _Var24.unknown = puVar34;
          }
          lVar33 = Swift::_CocoaArrayWrapper::get_endIndex(_Var24);
          puVar34 = *(undefined **)(unaff_x22 + 0x1b90);
        }
        puVar30 = (undefined *)0x0;
        FUN_1009c8514(0,lVar33 + 1,1,puVar34);
        puVar34 = puVar30;
      }
      _Var24.unknown = puVar30 & 0xffffffffffffff8;
      uVar38 = *(ulong *)(_Var24.unknown + 0x10);
      puVar11 = puVar34;
      if (*(ulong *)(_Var24.unknown + 0x18) >> 1 <= uVar38) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(_Var24.unknown + 0x18));
        FUN_1009c8514(puVar11,uVar38 + 1,1,puVar34);
        _Var24.unknown = puVar11 & 0xffffffffffffff8;
      }
      uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
      *(ulong *)(_Var24.unknown + 0x10) = uVar38 + 1;
      *(undefined **)(_Var24.unknown + uVar38 * 8 + 0x20) = puVar6;
      FUN_1009d7d40(puVar10,(undefined8 *)(unaff_x22 + 0x11b0));
      _swift_isUniquelyReferenced_nonNull_native();
      uVar31 = *(ulong *)(unaff_x22 + 0x1b98);
      uVar38 = uVar31;
      if ((uVar36 & 1) == 0) {
        uVar38 = 0;
        FUN_1009c82b4(0,*(long *)(uVar31 + 0x10) + 1,1,uVar31);
      }
      uVar31 = *(ulong *)(uVar38 + 0x10);
      lVar33 = uVar31 + 1;
      uVar36 = uVar38;
      if (*(ulong *)(uVar38 + 0x18) >> 1 <= uVar31) {
        uVar36 = (ulong)(1 < *(ulong *)(uVar38 + 0x18));
        FUN_1009c82b4(uVar36,lVar33,1,uVar38);
      }
      *(long *)(uVar36 + 0x10) = lVar33;
      lVar37 = uVar36 + uVar31 * 0x40;
      uVar29 = *(undefined8 *)(unaff_x22 + 0x11b8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x11b0);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x11c8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x11c0);
      uVar40 = *(undefined8 *)(unaff_x22 + 0x11d0);
      uVar42 = *(undefined8 *)(unaff_x22 + 0x11e8);
      uVar41 = *(undefined8 *)(unaff_x22 + 0x11e0);
      *(undefined8 *)(lVar37 + 0x48) = *(undefined8 *)(unaff_x22 + 0x11d8);
      *(undefined8 *)(lVar37 + 0x40) = uVar40;
      *(undefined8 *)(lVar37 + 0x58) = uVar42;
      *(undefined8 *)(lVar37 + 0x50) = uVar41;
      *(undefined8 *)(lVar37 + 0x28) = uVar29;
      *(undefined8 *)(lVar37 + 0x20) = uVar28;
      *(undefined8 *)(lVar37 + 0x38) = uVar39;
      *(undefined8 *)(lVar37 + 0x30) = uVar15;
      *(ulong *)(unaff_x22 + 0x1ae0) = uVar36;
      if ((ulong)puVar11 >> 0x3e == 0) {
        lVar37 = *(long *)(_Var24.unknown + 0x10);
      }
      else {
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          _Var24.unknown = puVar11;
        }
        lVar37 = Swift::_CocoaArrayWrapper::get_endIndex(_Var24);
      }
      if (lVar33 != lVar37) {
                    /* WARNING: Does not return */
        pcVar35 = (code *)SoftwareBreakpoint(1,0x1009d04d8);
        (*pcVar35)();
      }
      pcVar35 = *(code **)(unaff_x22 + 0x1b70);
      lVar37 = *(long *)(unaff_x22 + 0x1b68);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x1b60);
      uVar38 = *(long *)(unaff_x22 + 7000) + 0xf;
      lVar33 = *(long *)(uVar36 + 0x10);
      uVar7 = uVar38 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar7);
      (*pcVar35)();
      FUN_1009d7d40(puVar10,(undefined8 *)(unaff_x22 + 0x1270));
      puVar34 = &DAT_100f262f0;
      _swift_allocObject(&DAT_100f262f0,0x70,7);
      *(undefined8 *)(puVar34 + 0x10) = 0;
      *(undefined8 *)(puVar34 + 0x18) = 0;
      *(undefined **)(puVar34 + 0x20) = puVar6;
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1270);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x1288);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x1280);
      *(undefined8 *)(puVar34 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1278);
      *(undefined8 *)(puVar34 + 0x28) = uVar29;
      *(undefined8 *)(puVar34 + 0x40) = uVar39;
      *(undefined8 *)(puVar34 + 0x38) = uVar15;
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1290);
      uVar39 = *(undefined8 *)(unaff_x22 + 0x12a8);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x12a0);
      *(undefined8 *)(puVar34 + 0x50) = *(undefined8 *)(unaff_x22 + 0x1298);
      *(undefined8 *)(puVar34 + 0x48) = uVar29;
      *(undefined8 *)(puVar34 + 0x60) = uVar39;
      *(undefined8 *)(puVar34 + 0x58) = uVar15;
      *(long *)(puVar34 + 0x68) = lVar33 + -1;
      uVar38 = uVar38 & 0xfffffffffffffff0;
      _swift_task_alloc();
      FUN_1000f8cac(uVar7,uVar38,&DAT_100ff3080,&DAT_100c8c470);
      pcVar35 = *(code **)(lVar37 + 0x30);
      uVar31 = uVar38;
      (*pcVar35)(uVar38,1,uVar28);
      TVar26.unknown = puVar6;
      _swift_retain();
      if ((int)uVar31 == 1) {
        FUN_1000fb4c4(uVar38,&DAT_100ff3080,&DAT_100c8c470);
        uVar31 = 0x3100;
      }
      else {
        lVar33 = *(long *)(unaff_x22 + 0x1b68);
        uVar28 = *(undefined8 *)(unaff_x22 + 0x1b60);
        _Var3 = Swift::TaskPriority::get_rawValue(TVar26);
        (**(code **)(lVar33 + 8))(uVar38,uVar28);
        uVar31 = (ulong)_Var3 | 0x3100;
      }
      _swift_task_dealloc(uVar38);
      uVar28 = **(undefined8 **)(unaff_x22 + 0x1b00);
      pcVar32 = *(code **)(unaff_x22 + 0x1b70);
      uVar29 = *(undefined8 *)(unaff_x22 + 0x1b60);
      TVar26.unknown = *(undefined **)(unaff_x22 + 0x1b20);
      uVar38 = *(long *)(unaff_x22 + 7000) + 0xf;
      *(undefined8 *)(unaff_x22 + 0x1a08) = 1;
      *(undefined8 *)(unaff_x22 + 0x1a10) = 0;
      *(undefined8 *)(unaff_x22 + 0x1a18) = uVar28;
      _swift_task_create(uVar31,unaff_x22 + 0x1a08,&DAT_100f263d8,&DAT_100c8c910,puVar34);
      _swift_release();
      FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
      _swift_task_dealloc(uVar7);
      uVar7 = uVar38 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar7);
      (*pcVar32)();
      puVar34 = &DAT_100f26318;
      _swift_allocObject(&DAT_100f26318,0x28,7);
      *(undefined8 *)(puVar34 + 0x10) = 0;
      *(undefined8 *)(puVar34 + 0x18) = 0;
      *(undefined **)(puVar34 + 0x20) = TVar26.unknown;
      uVar38 = uVar38 & 0xfffffffffffffff0;
      _swift_task_alloc();
      FUN_1000f8cac(uVar7,uVar38,&DAT_100ff3080,&DAT_100c8c470);
      uVar31 = uVar38;
      (*pcVar35)(uVar38,1,uVar29);
      _swift_retain();
      if ((int)uVar31 == 1) {
        FUN_1000fb4c4(uVar38,&DAT_100ff3080,&DAT_100c8c470);
        uVar31 = 0x3100;
      }
      else {
        lVar33 = *(long *)(unaff_x22 + 0x1b68);
        uVar29 = *(undefined8 *)(unaff_x22 + 0x1b60);
        _Var3 = Swift::TaskPriority::get_rawValue(TVar26);
        (**(code **)(lVar33 + 8))(uVar38,uVar29);
        uVar31 = (ulong)_Var3 | 0x3100;
      }
      _swift_task_dealloc(uVar38);
      *(undefined8 *)(unaff_x22 + 0x1960) = 1;
      *(undefined8 *)(unaff_x22 + 0x1968) = 0;
      *(undefined8 *)(unaff_x22 + 0x1970) = uVar28;
      _swift_task_create(uVar31,unaff_x22 + 0x1960,&DAT_100f263d8,&DAT_100c8c918,puVar34);
      _swift_release(puVar6);
      _swift_release(uVar31);
      FUN_1000fb4c4(uVar7,&DAT_100ff3080,&DAT_100c8c470);
      FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
      _swift_task_dealloc(uVar7);
      FUN_1009d7d7c(puVar10);
    }
    else {
      lVar33 = *(long *)(unaff_x22 + 0x1098);
      lVar37 = *(long *)(unaff_x22 + 0x1088);
      lVar20 = *(long *)(unaff_x22 + 0x1080);
      lVar18 = *(long *)(unaff_x22 + 0x1078);
      lVar21 = *(long *)(unaff_x22 + 0x1070);
      lVar22 = *(long *)(unaff_x22 + 0x1068);
      lVar19 = *(long *)(unaff_x22 + 0x1060);
      lVar23 = *(long *)(unaff_x22 + 0x1058);
      if ((((uVar38 != 0 || pcVar17 != (char *)0x0) || (lVar33 != 0 || lVar37 != 0)) ||
          ((lVar20 != 0 || lVar18 != 0) || lVar21 != 0)) ||
          ((lVar22 != 0 || lVar19 != 0) || lVar23 != 0)) {
        if ((pcVar17 == &DAT_00000001) &&
           ((((lVar33 == 0 && uVar38 == 0) && (lVar37 == 0 && lVar20 == 0)) &&
            ((lVar18 == 0 && lVar21 == 0) && lVar22 == 0)) && (lVar19 == 0 && lVar23 == 0))) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x16f8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1710);
          lVar33 = *(long *)(unaff_x22 + 0x1718);
          FUN_100004640(unaff_x22 + 0x16f8,uVar28);
          (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
          FUN_100004594(unaff_x22 + 0x16f8);
          if (((uint)uVar28 & 0xff) < 2) {
            FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x16a8);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x16c0);
            lVar33 = *(long *)(unaff_x22 + 0x16c8);
            FUN_100004640(unaff_x22 + 0x16a8,uVar28);
            *(undefined1 *)(unaff_x22 + 0xf8) = 1;
            *(undefined8 *)(unaff_x22 + 0x100) = 0xd000000000000038;
            *(undefined8 *)(unaff_x22 + 0x108) = 0x8000000100db78a0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0;
            *(undefined8 *)(unaff_x22 + 0x110) = 0;
            *(undefined8 *)(unaff_x22 + 0x128) = 0;
            *(undefined8 *)(unaff_x22 + 0x120) = 0;
            *(undefined8 *)(unaff_x22 + 0x130) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x138) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x140) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0x148) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0x150) = 0x229;
            *(undefined1 *)(unaff_x22 + 0xd58) = 1;
            *(undefined8 *)(unaff_x22 + 0xd60) = 0xd000000000000038;
            *(undefined8 *)(unaff_x22 + 0xd68) = 0x8000000100db78a0;
            *(undefined8 *)(unaff_x22 + 0xd78) = 0;
            *(undefined8 *)(unaff_x22 + 0xd70) = 0;
            *(undefined8 *)(unaff_x22 + 0xd88) = 0;
            *(undefined8 *)(unaff_x22 + 0xd80) = 0;
            *(undefined8 *)(unaff_x22 + 0xd90) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xd98) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xda0) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0xda8) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0xdb0) = 0x229;
            FUN_1005bf638(unaff_x22 + 0xf8,unaff_x22 + 0xe18);
            FUN_1004eaa3c(unaff_x22 + 0xd58);
            (**(code **)(lVar33 + 0x28))(unaff_x22 + 0xf8,uVar28,lVar33);
            FUN_1004eaa3c(unaff_x22 + 0xf8);
            FUN_100004594(unaff_x22 + 0x16a8);
          }
          plVar8 = (long *)0x1a90;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1be8) = plVar8;
          *plVar8 = unaff_x22;
          plVar8[1] = (long)FUN_1009d0a44;
          uVar28 = *(undefined8 *)(unaff_x22 + 0x1b90);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x1b28);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1b00);
          lVar33 = *(long *)PTR____stack_chk_guard_100ea82f0;
          goto joined_r0x0001009cee94;
        }
        if ((pcVar17 != (char *)0x2) ||
           ((((lVar33 != 0 || uVar38 != 0) || (lVar37 != 0 || lVar20 != 0)) ||
            ((lVar18 != 0 || lVar21 != 0) || lVar22 != 0)) || (lVar19 != 0 || lVar23 != 0))) {
          if ((pcVar17 == (char *)0x3) &&
             ((((lVar33 == 0 && uVar38 == 0) && (lVar37 == 0 && lVar20 == 0)) &&
              ((lVar18 == 0 && lVar21 == 0) && lVar22 == 0)) && (lVar19 == 0 && lVar23 == 0))) {
            pcVar17 = "ty before and still got nil";
            file.unknown = (undefined *)0xd000000000000049;
            goto LAB_1009cdc2c;
          }
          FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1798);
          uVar28 = *(undefined8 *)(unaff_x22 + 0x17b0);
          lVar33 = *(long *)(unaff_x22 + 0x17b8);
          FUN_100004640(unaff_x22 + 0x1798,uVar28);
          (**(code **)(lVar33 + 0x70))(uVar28,lVar33);
          FUN_100004594(unaff_x22 + 0x1798);
          if (((uint)uVar28 & 0xff) < 2) {
            FUN_100076688(*(long *)(unaff_x22 + 0x1b78) + 0x20,unaff_x22 + 0x1748);
            uVar28 = *(undefined8 *)(unaff_x22 + 0x1760);
            lVar33 = *(long *)(unaff_x22 + 0x1768);
            FUN_100004640(unaff_x22 + 0x1748,uVar28);
            *(undefined1 *)(unaff_x22 + 0xb18) = 1;
            *(undefined8 *)(unaff_x22 + 0xb20) = 0xd000000000000014;
            *(undefined8 *)(unaff_x22 + 0xb28) = 0x8000000100db7500;
            *(undefined8 *)(unaff_x22 + 0xb38) = 0;
            *(undefined8 *)(unaff_x22 + 0xb30) = 0;
            *(undefined8 *)(unaff_x22 + 0xb48) = 0;
            *(undefined8 *)(unaff_x22 + 0xb40) = 0;
            *(undefined8 *)(unaff_x22 + 0xb50) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xb58) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xb60) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0xb68) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0xb70) = 0x23a;
            *(undefined1 *)(unaff_x22 + 0xbd8) = 1;
            *(undefined8 *)(unaff_x22 + 0xbe0) = 0xd000000000000014;
            *(undefined8 *)(unaff_x22 + 0xbe8) = 0x8000000100db7500;
            *(undefined8 *)(unaff_x22 + 0xbf8) = 0;
            *(undefined8 *)(unaff_x22 + 0xbf0) = 0;
            *(undefined8 *)(unaff_x22 + 0xc08) = 0;
            *(undefined8 *)(unaff_x22 + 0xc00) = 0;
            *(undefined8 *)(unaff_x22 + 0xc10) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xc18) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xc20) = 0xd00000000000003a;
            *(undefined8 *)(unaff_x22 + 0xc28) = 0x8000000100db7750;
            *(undefined8 *)(unaff_x22 + 0xc30) = 0x23a;
            FUN_1005bf638(unaff_x22 + 0xb18,unaff_x22 + 0xc98);
            FUN_1004eaa3c(unaff_x22 + 0xbd8);
            (**(code **)(lVar33 + 0x28))(unaff_x22 + 0xb18,uVar28,lVar33);
            FUN_1004eaa3c(unaff_x22 + 0xb18);
            lVar33 = unaff_x22 + 0x1748;
LAB_1009cebc0:
            FUN_100004594(lVar33);
          }
LAB_1009cebc4:
          FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1b00),*(undefined8 *)(unaff_x22 + 0x1b28));
        }
      }
      FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
      uVar36 = *(ulong *)(unaff_x22 + 0x1b98);
      puVar11 = *(undefined **)(unaff_x22 + 0x1b90);
    }
LAB_1009cf930:
    TVar27.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x1b00);
    bVar4 = Swift::ThrowingTaskGroup::get_isEmpty(TVar27);
    if (!bVar4) {
      *(ulong *)(unaff_x22 + 0x1b98) = uVar36;
      *(undefined **)(unaff_x22 + 0x1b90) = puVar11;
      if (*(char *)(unaff_x22 + 0x1049) == '\x01') {
        plVar8 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1ba0) = plVar8;
        FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_1009cda54;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
          Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0xff8));
          return;
        }
      }
      else if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
        _swift_taskGroup_wait_next_throwing
                  (unaff_x22 + 0xff8,TVar27.unknown,FUN_1009cdb08,unaff_x22 + 0x10);
        return;
      }
      goto LAB_1009d0558;
    }
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1b40);
    puVar25 = *(undefined8 **)(unaff_x22 + 0x1af8);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
    _swift_release(uVar28);
    *puVar25 = 0;
    *(undefined1 *)(puVar25 + 1) = 0;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(puVar11);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x0001009d02d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1009d0558:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d055c | FUN_1009d055c */

void FUN_1009d055c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1b50);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b40));
  _swift_release(uVar4);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d05e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d05f0 | FUN_1009d05f0 */

void FUN_1009d05f0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x1bb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1bb0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1009d069c;
    pcVar1 = FUN_1009d06a0;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1009d069c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009d0af4;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x1b08),0);
  return;
}



/* Address: 0x1009d06a0 | FUN_1009d06a0 */

void FUN_1009d06a0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar3 = 0;
  *(undefined1 *)(puVar3 + 1) = 0;
  FUN_1009d7d7c(unaff_x22 + 0x1430);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0758. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0760 | FUN_1009d0760 */

void FUN_1009d0760(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x1bd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1bc8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1009d080c;
    pcVar1 = FUN_1009d0810;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1009d080c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009d0bc4;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x1b08),0);
  return;
}



/* Address: 0x1009d0810 | FUN_1009d0810 */

void FUN_1009d0810(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1bc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar4 = uVar3;
  *(undefined1 *)(puVar4 + 1) = 1;
  FUN_1009d7d7c(unaff_x22 + 0x1230);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d08d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d08e0 | FUN_1009d08e0 */

void FUN_1009d08e0(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x1be0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1bd8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1009d098c;
    pcVar1 = FUN_1009d0990;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1009d098c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009d0ca0;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x1b08),0);
  return;
}



/* Address: 0x1009d0990 | FUN_1009d0990 */

void FUN_1009d0990(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar3);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar2 = 0;
  *(undefined1 *)(puVar2 + 1) = 0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar3);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0a44 | FUN_1009d0a44 */

void FUN_1009d0a44(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x1bf0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1be8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1009d0af0;
    pcVar1 = FUN_1009d9580;
  }
  else {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1009d0af0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009d0d5c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar3 + 0x1b08),0);
  return;
}



/* Address: 0x1009d0af4 | FUN_1009d0af4 */

void FUN_1009d0af4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 *puVar4;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1bb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar4 = uVar3;
  *(undefined1 *)(puVar4 + 1) = 1;
  FUN_1009d7d7c(unaff_x22 + 0x1430);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0bc4 | FUN_1009d0bc4 */

void FUN_1009d0bc4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  undefined8 *puVar5;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1bd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1bc0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar2);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  _swift_errorRelease(uVar3);
  *puVar5 = uVar4;
  *(undefined1 *)(puVar5 + 1) = 1;
  FUN_1009d7d7c(unaff_x22 + 0x1230);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0c98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0ca0 | FUN_1009d0ca0 */

void FUN_1009d0ca0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1be0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar3);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar4 = uVar2;
  *(undefined1 *)(puVar4 + 1) = 1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0d5c | FUN_1009d0d5c */

void FUN_1009d0d5c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1bf0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b40);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x1af8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1b50));
  _swift_release(uVar3);
  FUN_1000fb4c4(unaff_x22 + 0xff8,&DAT_100ff3488,&DAT_100c8c840);
  *puVar4 = uVar2;
  *(undefined1 *)(puVar4 + 1) = 1;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1b90);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1ae0));
  _swift_bridgeObjectRelease(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001009d0e10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009d0e18 | FUN_1009d0e18 */

void FUN_1009d0e18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1009d0e30,0,0);
  return;
}



/* Address: 0x1009d0e30 | FUN_1009d0e30 */

void FUN_1009d0e30(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = 0;
  FUN_1009df7d0();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  FUN_1009dbbf0(uVar2,uVar4);
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  FUN_1000f7830(&DAT_100ff34d0,&DAT_100c8c978);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009d0ed8;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1009d0ed8 | FUN_1009d0ed8 */

void FUN_1009d0ed8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  _swift_task_switch(thunk_FUN_1009d1038,0,0);
  return;
}



/* Address: 0x1009d0f28 | FUN_1009d0f28 */

void FUN_1009d0f28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1009d0f40,0,0);
  return;
}



/* Address: 0x1009d0f40 | FUN_1009d0f40 */

void FUN_1009d0f40(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar1 = 0;
  FUN_1009df7d0();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  FUN_1009dbbf0(uVar2,uVar4);
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar3;
  FUN_1000f7830(&DAT_100ff34d0,&DAT_100c8c978);
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1009d0fe8;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1009d0fe8 | FUN_1009d0fe8 */

void FUN_1009d0fe8(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x28));
  _swift_task_switch(FUN_1009d1038,0,0);
  return;
}



/* Address: 0x1009d1038 | FUN_1009d1038 */

void FUN_1009d1038(void)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  char *pcVar4;
  long unaff_x22;
  
  cVar1 = *(char *)(unaff_x22 + 0x30);
  FUN_10005241c(*(undefined8 *)(unaff_x22 + 0x20),FUN_1009df7d0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  pcVar4 = *(char **)(unaff_x22 + 0x10);
  if (cVar1 == '\r') {
    _swift_task_dealloc(uVar2);
    pcVar4[0x38] = '\0';
    pcVar4[0x39] = '\0';
    pcVar4[0x3a] = '\0';
    pcVar4[0x3b] = '\0';
    pcVar4[0x3c] = '\0';
    pcVar4[0x3d] = '\0';
    pcVar4[0x3e] = '\0';
    pcVar4[0x3f] = '\0';
    pcVar4[0x30] = '\0';
    pcVar4[0x31] = '\0';
    pcVar4[0x32] = '\0';
    pcVar4[0x33] = '\0';
    pcVar4[0x34] = '\0';
    pcVar4[0x35] = '\0';
    pcVar4[0x36] = '\0';
    pcVar4[0x37] = '\0';
    pcVar4[0x48] = '\0';
    pcVar4[0x49] = '\0';
    pcVar4[0x4a] = '\0';
    pcVar4[0x4b] = '\0';
    pcVar4[0x4c] = '\0';
    pcVar4[0x4d] = '\0';
    pcVar4[0x4e] = '\0';
    pcVar4[0x4f] = '\0';
    pcVar4[0x40] = '\0';
    pcVar4[0x41] = '\0';
    pcVar4[0x42] = '\0';
    pcVar4[0x43] = '\0';
    pcVar4[0x44] = '\0';
    pcVar4[0x45] = '\0';
    pcVar4[0x46] = '\0';
    pcVar4[0x47] = '\0';
    pcVar4[0x18] = '\0';
    pcVar4[0x19] = '\0';
    pcVar4[0x1a] = '\0';
    pcVar4[0x1b] = '\0';
    pcVar4[0x1c] = '\0';
    pcVar4[0x1d] = '\0';
    pcVar4[0x1e] = '\0';
    pcVar4[0x1f] = '\0';
    pcVar4[0x10] = '\0';
    pcVar4[0x11] = '\0';
    pcVar4[0x12] = '\0';
    pcVar4[0x13] = '\0';
    pcVar4[0x14] = '\0';
    pcVar4[0x15] = '\0';
    pcVar4[0x16] = '\0';
    pcVar4[0x17] = '\0';
    pcVar4[0x28] = '\0';
    pcVar4[0x29] = '\0';
    pcVar4[0x2a] = '\0';
    pcVar4[0x2b] = '\0';
    pcVar4[0x2c] = '\0';
    pcVar4[0x2d] = '\0';
    pcVar4[0x2e] = '\0';
    pcVar4[0x2f] = '\0';
    pcVar4[0x20] = '\0';
    pcVar4[0x21] = '\0';
    pcVar4[0x22] = '\0';
    pcVar4[0x23] = '\0';
    pcVar4[0x24] = '\0';
    pcVar4[0x25] = '\0';
    pcVar4[0x26] = '\0';
    pcVar4[0x27] = '\0';
    pcVar4[8] = '\0';
    pcVar4[9] = '\0';
    pcVar4[10] = '\0';
    pcVar4[0xb] = '\0';
    pcVar4[0xc] = '\0';
    pcVar4[0xd] = '\0';
    pcVar4[0xe] = '\0';
    pcVar4[0xf] = '\0';
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
    pcVar4[4] = '\0';
    pcVar4[5] = '\0';
    pcVar4[6] = '\0';
    pcVar4[7] = '\0';
    uVar3 = 4;
  }
  else {
    *pcVar4 = cVar1;
    _swift_task_dealloc(uVar2);
    uVar3 = 2;
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x10) + 0x50) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0001009d10bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d10c0 | FUN_1009d10c0 */

void FUN_1009d10c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  _swift_task_switch(FUN_1009d10d8,0,0);
  return;
}



/* Address: 0x1009d10d8 | FUN_1009d10d8 */

void FUN_1009d10d8(void)

{
  undefined *puVar1;
  ulong uVar2;
  AsyncStream AVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  puVar1 = &DAT_100ff34b0;
  FUN_1000f7830(&DAT_100ff34b0,&DAT_100c8c950);
  *(undefined **)(unaff_x22 + 0x20) = puVar1;
  lVar5 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x28) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x30) = uVar2;
  AVar3.unknown = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  Swift::AsyncStream::_makeAsyncIterator(AVar3);
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009d119c;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1009d119c | FUN_1009d119c */

void FUN_1009d119c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
  _swift_task_switch(FUN_1009d11ec,0,0);
  return;
}



/* Address: 0x1009d11ec | FUN_1009d11ec */

void FUN_1009d11ec(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x28) + 8))
            (*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
  if (*(char *)(unaff_x22 + 0x40) == '\x01') {
    _swift_task_dealloc(uVar1);
    *puVar3 = 2;
  }
  else {
    *puVar3 = 1;
    _swift_task_dealloc(uVar1);
  }
  lVar2 = *(long *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 8) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001009d1280. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d1284 | FUN_1009d1284 */

void FUN_1009d1284(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009d129c,0,0);
  return;
}



/* Address: 0x1009d129c | FUN_1009d129c */

void FUN_1009d129c(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  lVar2 = 0;
  FUN_1009c4f0c();
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x18) = lVar2;
  _swift_defaultActor_initialize();
  lVar1 = _TtC16ServiceLifecycle18CancellationWaiter::taskContinuation;
  puVar3 = &DAT_100ff2c58;
  FUN_1000f7830(&DAT_100ff2c58,&DAT_100c8c350);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(lVar2 + lVar1,1,1,puVar3);
  plVar4 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1009d1344;
  FUN_1009c3f40();
  return;
}



/* Address: 0x1009d1344 | FUN_1009d1344 */

void FUN_1009d1344(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1009d139c,0,0);
  return;
}



/* Address: 0x1009d139c | FUN_1009d139c */

void FUN_1009d139c(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x10);
  *puVar1 = 1;
  puVar1[2] = 0;
  puVar1[1] = 0;
  puVar1[4] = 0;
  puVar1[3] = 0;
  puVar1[6] = 0;
  puVar1[5] = 0;
  puVar1[8] = 0;
  puVar1[7] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 4;
                    /* WARNING: Could not recover jumptable at 0x0001009d13d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d13d4 | FUN_1009d13d4 */

void FUN_1009d13d4(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009d13ec,0,0);
  return;
}



/* Address: 0x1009d13ec | FUN_1009d13ec */

void FUN_1009d13ec(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  
  puVar1 = &DAT_100ff3238;
  FUN_1000f7830(&DAT_100ff3238,&DAT_100c8c6e0);
  *(undefined **)(unaff_x22 + 0x18) = puVar1;
  lVar8 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar8;
  uVar6 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar2 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  puVar1 = &DAT_100ff3228;
  FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
  lVar9 = *(long *)(puVar1 + -8);
  uVar3 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar3);
  puVar4 = &DAT_100ff3240;
  FUN_1000f7830(&DAT_100ff3240,&DAT_100c8c6e8);
  lVar10 = *(long *)(puVar4 + -8);
  uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar10 + 0x68))();
  FUN_1009cbac0(uVar2,uVar3,uVar5);
  (**(code **)(lVar10 + 8))(uVar5,puVar4);
  (**(code **)(lVar9 + 8))(uVar3,puVar1);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
  puVar1 = &DAT_100ff34b0;
  FUN_1000f7830(&DAT_100ff34b0,&DAT_100c8c950);
  *(undefined **)(unaff_x22 + 0x30) = puVar1;
  lVar9 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar9;
  uVar2 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  uVar6 = uVar6 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar8 + 0x10))();
  FUN_100134584(&DAT_100ff34b8,&DAT_100ff3238,&DAT_100c8c6e0,
                PTR_Swift__Swift__AsyncStream<undefined>_>Swift__AsyncSequence_100eaed00);
  Swift::AsyncSequence::_makeAsyncIterator();
  _swift_task_dealloc(uVar6);
  FUN_100134584(&DAT_100ff34c0,&DAT_100ff34b0,&DAT_100c8c950,
                PTR__Swift__Iterator_>Swift__AsyncIteratorProtocol_100eaece0);
  plVar7 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1009d162c;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1009d162c | FUN_1009d162c */

void FUN_1009d162c(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x48));
  if (unaff_x20 == 0) {
    pcVar3 = FUN_1009d16b4;
  }
  else {
    lVar1 = *(long *)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x40);
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    _swift_errorRelease();
    (**(code **)(lVar1 + 8))(uVar2,uVar5);
    pcVar3 = FUN_1009d1758;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1009d16b4 | FUN_1009d16b4 */

void FUN_1009d16b4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  undefined8 *puVar5;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = *(long *)(unaff_x22 + 0x20);
  puVar5 = *(undefined8 **)(unaff_x22 + 0x10);
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar3);
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  *puVar5 = 4;
  puVar5[2] = 0;
  puVar5[1] = 0;
  puVar5[4] = 0;
  puVar5[3] = 0;
  puVar5[6] = 0;
  puVar5[5] = 0;
  puVar5[8] = 0;
  puVar5[7] = 0;
  puVar5[9] = 0;
  *(undefined1 *)(puVar5 + 10) = 4;
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009d1754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d1758 | FUN_1009d1758 */

void FUN_1009d1758(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1009d178c | FUN_1009d178c */

void FUN_1009d178c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1a10) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x1a08) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1a00) = param_3;
  *(undefined8 *)(unaff_x22 + 0x19f8) = param_2;
  *(undefined8 *)(unaff_x22 + 0x19f0) = param_1;
  _swift_task_switch(FUN_1009d17b4);
  return;
}



/* Address: 0x1009d17b4 | FUN_1009d17b4 */

/* WARNING: Removing unreachable block (ram,0x0001009d1ee4) */
/* WARNING: Removing unreachable block (ram,0x0001009d1ee8) */

void FUN_1009d17b4(void)

{
  byte bVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  TaskPriority TVar7;
  undefined *puVar8;
  long *plVar9;
  UnownedSerialExecutor UVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *puVar15;
  ThrowingTaskGroup TVar16;
  ulong *puVar17;
  long unaff_x22;
  long lVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  ulong local_68;
  
  lVar18 = *(long *)(unaff_x22 + 0x1a10);
  lVar3 = 0;
  FUN_1009d7ca4();
  uVar4 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar13 = _TtC16ServiceLifecycle12ServiceGroup::state;
  _swift_beginAccess(lVar18 + _TtC16ServiceLifecycle12ServiceGroup::state,unaff_x22 + 0x17e0,0,0);
  FUN_1009d7cb8(lVar18 + lVar13,uVar4);
  uVar6 = uVar4;
  _swift_getEnumCaseMultiPayload(uVar4,lVar3);
  if ((int)uVar6 != 1) {
    FUN_10005241c(uVar4,FUN_1009d7ca4);
    _swift_task_dealloc(uVar4);
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000010,0x8000000100db7420,
               0xdb72f0);
    return;
  }
  puVar5 = &DAT_100ff3220;
  FUN_1000f7830(&DAT_100ff3220,&DAT_100c8c6b8);
  *(undefined8 *)(unaff_x22 + 0x1a18) = *(undefined8 *)(uVar4 + (long)*(int *)(puVar5 + 0x30));
  puVar5 = &DAT_100ff3228;
  FUN_1000f7830(&DAT_100ff3228,&DAT_100c8c6c0);
  (**(code **)(*(long *)(puVar5 + -8) + 8))(uVar4,puVar5);
  _swift_task_dealloc(uVar4);
  FUN_100750e48();
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
  *(byte *)(unaff_x22 + 0x1049) = bVar1 & 1;
  if (((bVar1 & 1) != 0) &&
     (lVar13 = *(long *)(unaff_x22 + 0x1a10), *(char *)(lVar13 + 0xe8) != '\x01')) {
    uVar20 = *(undefined8 *)(lVar13 + 0xd8);
    uVar19 = *(undefined8 *)(lVar13 + 0xe0);
    puVar5 = &DAT_100ff3080;
    FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
    uVar6 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar6);
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(uVar6,1,1,TVar7.unknown);
    puVar5 = &DAT_100f261d8;
    _swift_allocObject(&DAT_100f261d8,0x30,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = uVar20;
    *(undefined8 *)(puVar5 + 0x28) = uVar19;
    FUN_1009ca6c4(uVar6,&DAT_100c8c878,puVar5);
    FUN_1000fb4c4(uVar6,&DAT_100ff3080,&DAT_100c8c470);
    _swift_task_dealloc(uVar6);
  }
  lVar13 = *(long *)(unaff_x22 + 0x1a08);
  _swift_bridgeObjectRetain();
  FUN_1009d5188();
  *(long *)(unaff_x22 + 0x1a20) = lVar13;
  lVar13 = *(long *)(lVar13 + 0x10);
  *(long *)(unaff_x22 + 0x1a28) = lVar13;
  if (lVar13 != 0) {
    puVar15 = (undefined8 *)(unaff_x22 + 0x11c0);
    lVar13 = *(long *)(*(long *)(unaff_x22 + 0x1a10) + 0x70);
    *(long *)(unaff_x22 + 0x1a30) = lVar13;
    local_68 = **(ulong **)(unaff_x22 + 0x19f0);
    uVar6 = local_68;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1009d6758();
    }
    **(ulong **)(unaff_x22 + 0x19f0) = local_68;
    _swift_beginAccess(lVar13 + 0x20,unaff_x22 + 0x17f8,0,0);
    uVar6 = 0;
    do {
      *(ulong *)(unaff_x22 + 0x1a38) = uVar6;
      if (*(ulong *)(*(long *)(unaff_x22 + 0x1a20) + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009d2090);
        (*pcVar14)();
      }
      lVar13 = *(long *)(unaff_x22 + 0x1a20) + uVar6 * 0x10;
      uVar6 = *(ulong *)(lVar13 + 0x20);
      *(ulong *)(unaff_x22 + 0x1a40) = uVar6;
      lVar13 = *(long *)(lVar13 + 0x28);
      *(long *)(unaff_x22 + 0x1a48) = lVar13;
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009d2094);
        (*pcVar14)();
      }
      if (*(ulong *)(local_68 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009d2098);
        (*pcVar14)();
      }
      puVar5 = &DAT_100c8c5d0;
      FUN_1000f8cac(local_68 + 0x20 + uVar6 * 0x40,puVar15,&DAT_100ff31c8);
      lVar3 = *(long *)(unaff_x22 + 0x1a30);
      if (*(long *)(unaff_x22 + 0x11d8) != 0) {
        *(undefined8 *)(unaff_x22 + 0x1188) = *(undefined8 *)(unaff_x22 + 0x11c8);
        *(undefined8 *)(unaff_x22 + 0x1180) = *puVar15;
        *(undefined8 *)(unaff_x22 + 0x1198) = *(undefined8 *)(unaff_x22 + 0x11d8);
        *(undefined8 *)(unaff_x22 + 0x1190) = *(undefined8 *)(unaff_x22 + 0x11d0);
        *(undefined8 *)(unaff_x22 + 0x11a8) = *(undefined8 *)(unaff_x22 + 0x11e8);
        *(undefined8 *)(unaff_x22 + 0x11a0) = *(undefined8 *)(unaff_x22 + 0x11e0);
        *(undefined8 *)(unaff_x22 + 0x11b8) = *(undefined8 *)(unaff_x22 + 0x11f8);
        *(undefined8 *)(unaff_x22 + 0x11b0) = *(undefined8 *)(unaff_x22 + 0x11f0);
        FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x1368);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1380);
        lVar3 = *(long *)(unaff_x22 + 5000);
        FUN_100004640(unaff_x22 + 0x1368,uVar20);
        pcVar14 = *(code **)(lVar3 + 0x70);
        _swift_retain(lVar13);
        (*pcVar14)(uVar20,lVar3);
        FUN_100004594(unaff_x22 + 0x1368);
        if (((uint)uVar20 & 0xff) < 2) {
          lVar3 = *(long *)(unaff_x22 + 0x1a10);
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x16b0);
          uVar19 = *(undefined8 *)(unaff_x22 + 0x16c8);
          lVar18 = *(long *)(unaff_x22 + 0x16d0);
          FUN_100004640(unaff_x22 + 0x16b0,uVar19);
          puVar8 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar11 = (char *)0x60;
          pcVar12 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar8 + 0x18) = 2;
          *(undefined8 *)(puVar8 + 0x10) = 1;
          uVar20 = *(undefined8 *)(lVar3 + 0xb0);
          *(undefined8 *)(puVar8 + 0x20) = *(undefined8 *)(lVar3 + 0xa8);
          *(undefined8 *)(puVar8 + 0x28) = uVar20;
          *(undefined8 *)(unaff_x22 + 0x1988) = 0;
          *(undefined8 *)(unaff_x22 + 0x1990) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar22.bridgeObject = pcVar12;
          SVar22.str = pcVar11;
          Swift::String::reserveCapacity(2,SVar22);
          *(undefined8 *)(unaff_x22 + 0x1978) = *(undefined8 *)(unaff_x22 + 0x1988);
          *(undefined8 *)(unaff_x22 + 0x1980) = *(undefined8 *)(unaff_x22 + 0x1990);
          SVar23.bridgeObject = puVar5;
          SVar23.str = pcVar12;
          Swift::String::write(*(String *)(unaff_x22 + 0x11b0),SVar23);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x1980);
          *(undefined8 *)(puVar8 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1978);
          *(undefined8 *)(puVar8 + 0x38) = uVar20;
          puVar8[0x58] = 0;
          puVar5 = puVar8;
          FUN_1009d858c();
          _swift_setDeallocating(puVar8);
          FUN_1000fb4c4(puVar8 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar8,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x98) = 1;
          *(undefined8 *)(unaff_x22 + 0xa0) = 0xd000000000000028;
          *(undefined8 *)(unaff_x22 + 0xa8) = 0x8000000100db74d0;
          *(undefined8 *)(unaff_x22 + 0xb0) = 0;
          *(undefined **)(unaff_x22 + 0xb8) = puVar5;
          *(undefined8 *)(unaff_x22 + 200) = 0;
          *(undefined8 *)(unaff_x22 + 0xc0) = 0;
          *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xe0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xf0) = 0x284;
          *(undefined1 *)(unaff_x22 + 0x638) = 1;
          *(undefined8 *)(unaff_x22 + 0x640) = 0xd000000000000028;
          *(undefined8 *)(unaff_x22 + 0x648) = 0x8000000100db74d0;
          *(undefined8 *)(unaff_x22 + 0x650) = 0;
          *(undefined **)(unaff_x22 + 0x658) = puVar5;
          *(undefined8 *)(unaff_x22 + 0x668) = 0;
          *(undefined8 *)(unaff_x22 + 0x660) = 0;
          *(undefined8 *)(unaff_x22 + 0x670) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x678) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x680) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x688) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x690) = 0x284;
          FUN_1005bf638(unaff_x22 + 0x98,unaff_x22 + 0x698);
          FUN_1004eaa3c(unaff_x22 + 0x638);
          (**(code **)(lVar18 + 0x28))(unaff_x22 + 0x98,uVar19,lVar18);
          FUN_1004eaa3c(unaff_x22 + 0x98);
          FUN_100004594(unaff_x22 + 0x16b0);
        }
        lVar13 = *(long *)(lVar13 + 0x10);
        iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar13 + 0x30));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1009d20ac);
          (*pcVar14)();
        }
        FUN_1009c79b0(lVar13 + 0x10);
        iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar13 + 0x30));
        if (iVar2 != 0) {
                    /* WARNING: Does not return */
          pcVar14 = (code *)SoftwareBreakpoint(1,0x1009d20b0);
          (*pcVar14)();
        }
        *(undefined8 *)(unaff_x22 + 0x1a50) = *(undefined8 *)(*(long *)(unaff_x22 + 0x1a10) + 0x110)
        ;
        uVar6 = local_68;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar6 & 1) == 0) {
          FUN_1009d6758();
          uVar6 = local_68;
        }
        puVar17 = *(ulong **)(unaff_x22 + 0x19f0);
        FUN_1009d8494();
        *(ulong *)(unaff_x22 + 0x1a58) = uVar6;
        bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        *(byte *)(unaff_x22 + 0x104a) = bVar1 & 1;
        *puVar17 = local_68;
        *(ulong *)(unaff_x22 + 0x1a68) = local_68;
        *(undefined8 *)(unaff_x22 + 0x1a60) = 0;
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1a58);
        if (*(char *)(unaff_x22 + 0x104a) == '\x01') {
          plVar9 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x1a70) = plVar9;
          FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
          *plVar9 = unaff_x22;
          plVar9[1] = (long)FUN_1009d20c0;
          Swift::ThrowingTaskGroup::_next((undefined *)(unaff_x22 + 0x1050));
          return;
        }
        _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x1a10));
        UVar10 = Swift::Actor::get_unownedExecutor();
        _swift_task_switch(FUN_1009d212c,UVar10.unknown,uVar20);
        return;
      }
      _swift_retain(lVar13);
      FUN_1000fb4c4(puVar15,&DAT_100ff31c8,&DAT_100c8c5d0);
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x1548);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x1560);
      lVar3 = *(long *)(unaff_x22 + 0x1568);
      FUN_100004640(unaff_x22 + 0x1548,uVar20);
      (**(code **)(lVar3 + 0x70))(uVar20,lVar3);
      FUN_100004594(unaff_x22 + 0x1548);
      if (((uint)uVar20 & 0xff) < 2) {
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1610);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1628);
        lVar3 = *(long *)(unaff_x22 + 0x1630);
        FUN_100004640(unaff_x22 + 0x1610,uVar20);
        *(undefined1 *)(unaff_x22 + 0xcf8) = 1;
        *(undefined8 *)(unaff_x22 + 0xd00) = 0xd00000000000002b;
        *(undefined8 *)(unaff_x22 + 0xd08) = 0x8000000100db74a0;
        *(undefined8 *)(unaff_x22 + 0xd18) = 0;
        *(undefined8 *)(unaff_x22 + 0xd10) = 0;
        *(undefined8 *)(unaff_x22 + 0xd28) = 0;
        *(undefined8 *)(unaff_x22 + 0xd20) = 0;
        *(undefined8 *)(unaff_x22 + 0xd30) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0xd38) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0xd40) = 0xd000000000000054;
        *(undefined8 *)(unaff_x22 + 0xd48) = 0x8000000100db7440;
        *(undefined8 *)(unaff_x22 + 0xd50) = 0x27f;
        *(undefined1 *)(unaff_x22 + 0x578) = 1;
        *(undefined8 *)(unaff_x22 + 0x580) = 0xd00000000000002b;
        *(undefined8 *)(unaff_x22 + 0x588) = 0x8000000100db74a0;
        *(undefined8 *)(unaff_x22 + 0x598) = 0;
        *(undefined8 *)(unaff_x22 + 0x590) = 0;
        *(undefined8 *)(unaff_x22 + 0x5a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x5a0) = 0;
        *(undefined8 *)(unaff_x22 + 0x5b0) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x5b8) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x5c0) = 0xd000000000000054;
        *(undefined8 *)(unaff_x22 + 0x5c8) = 0x8000000100db7440;
        *(undefined8 *)(unaff_x22 + 0x5d0) = 0x27f;
        FUN_1005bf638(unaff_x22 + 0xcf8,unaff_x22 + 0x5d8);
        FUN_1004eaa3c(unaff_x22 + 0x578);
        (**(code **)(lVar3 + 0x28))(unaff_x22 + 0xcf8,uVar20,lVar3);
        _swift_release(lVar13);
        FUN_1004eaa3c(unaff_x22 + 0xcf8);
        FUN_100004594(unaff_x22 + 0x1610);
      }
      else {
        _swift_release(lVar13);
      }
      uVar6 = *(long *)(unaff_x22 + 0x1a38) + 1;
    } while (uVar6 != *(ulong *)(unaff_x22 + 0x1a28));
  }
  puVar15 = *(undefined8 **)(unaff_x22 + 0x1a00);
  _swift_bridgeObjectRelease();
  TVar16.unknown = (undefined *)*puVar15;
  FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
  Swift::ThrowingTaskGroup::cancelAll(TVar16);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1a18));
                    /* WARNING: Could not recover jumptable at 0x0001009d1f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009d20c0 | FUN_1009d20c0 */

void FUN_1009d20c0(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a70));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar3 + 0x1a78) = 0;
    uVar2 = *(undefined8 *)(lVar3 + 0x1a10);
    pcVar1 = FUN_1009d2180;
  }
  else {
    *(long *)(lVar3 + 0x1a80) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x1a10);
    pcVar1 = FUN_1009d4efc;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1009d212c | FUN_1009d212c */

void FUN_1009d212c(void)

{
  long unaff_x22;
  
  _swift_taskGroup_wait_next_throwing
            (unaff_x22 + 0x1050,**(undefined8 **)(unaff_x22 + 0x1a00),FUN_1009d214c,unaff_x22 + 0x10
            );
  return;
}



/* Address: 0x1009d214c | FUN_1009d214c */

void FUN_1009d214c(void)

{
  long unaff_x20;
  long unaff_x22;
  
  if (unaff_x20 != 0) {
    *(long *)(unaff_x22 + 0x1a80) = unaff_x20;
    _swift_task_switch(FUN_1009d4efc,*(undefined8 *)(unaff_x22 + 0x1a10),0);
    return;
  }
  *(undefined8 *)(unaff_x22 + 0x1a78) = 0;
  _swift_task_switch(FUN_1009d2180,*(undefined8 *)(unaff_x22 + 0x1a10),0);
  return;
}



/* Address: 0x1009d2180 | FUN_1009d2180 */

void FUN_1009d2180(void)

{
  bool bVar1;
  byte bVar2;
  __uint8 _Var3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  code *UNRECOVERED_JUMPTABLE;
  TaskPriority TVar9;
  ulong uVar10;
  TaskPriority TVar11;
  undefined8 *puVar12;
  long *plVar13;
  UnownedSerialExecutor UVar14;
  undefined8 uVar15;
  _StringGuts _Var16;
  char *pcVar17;
  char *pcVar18;
  void *in_x3;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  ulong *puVar27;
  undefined8 *puVar28;
  ThrowingTaskGroup TVar29;
  undefined8 *puVar30;
  ThrowingTaskGroup TVar31;
  undefined8 uVar32;
  long unaff_x22;
  ulong uVar33;
  char *pcVar34;
  undefined8 *puVar35;
  undefined8 uVar36;
  ulong uVar37;
  undefined8 uVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  long local_c8;
  undefined8 *local_98;
  
  TVar29.unknown = (undefined *)(unaff_x22 + 0x1050);
  puVar28 = (undefined8 *)(unaff_x22 + 0x1180);
  if (*(char *)(unaff_x22 + 0x10a0) == -1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x1a48));
    FUN_1000fb4c4(TVar29.unknown,&DAT_100ff3488,&DAT_100c8c840);
    FUN_1009d7d7c(puVar28);
    local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
LAB_1009d2270:
    local_c8 = *(long *)(unaff_x22 + 0x1a60);
LAB_1009d2278:
    uVar37 = *(long *)(unaff_x22 + 0x1a38) + 1;
    if (uVar37 != *(ulong *)(unaff_x22 + 0x1a28)) {
      puVar12 = (undefined8 *)(unaff_x22 + 0x11c0);
      lVar19 = *(long *)(unaff_x22 + 0x1a78);
      do {
        *(ulong *)(unaff_x22 + 0x1a38) = uVar37;
        if (*(ulong *)(*(long *)(unaff_x22 + 0x1a20) + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ab0);
          (*UNRECOVERED_JUMPTABLE)();
        }
        lVar20 = *(long *)(unaff_x22 + 0x1a20) + uVar37 * 0x10;
        uVar37 = *(ulong *)(lVar20 + 0x20);
        *(ulong *)(unaff_x22 + 0x1a40) = uVar37;
        lVar20 = *(long *)(lVar20 + 0x28);
        *(long *)(unaff_x22 + 0x1a48) = lVar20;
        if ((long)uVar37 < 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ab4);
          (*UNRECOVERED_JUMPTABLE)();
        }
        if (*(ulong *)((long)local_98 + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ab8);
          (*UNRECOVERED_JUMPTABLE)();
        }
        puVar5 = &DAT_100c8c5d0;
        FUN_1000f8cac((long)local_98 + 0x20U + uVar37 * 0x40,puVar12,&DAT_100ff31c8);
        lVar21 = *(long *)(unaff_x22 + 0x1a30);
        if (*(long *)(unaff_x22 + 0x11d8) != 0) {
          *(undefined8 *)(unaff_x22 + 0x1188) = *(undefined8 *)(unaff_x22 + 0x11c8);
          *puVar28 = *puVar12;
          *(undefined8 *)(unaff_x22 + 0x1198) = *(undefined8 *)(unaff_x22 + 0x11d8);
          *(undefined8 *)(unaff_x22 + 0x1190) = *(undefined8 *)(unaff_x22 + 0x11d0);
          *(undefined8 *)(unaff_x22 + 0x11a8) = *(undefined8 *)(unaff_x22 + 0x11e8);
          *(undefined8 *)(unaff_x22 + 0x11a0) = *(undefined8 *)(unaff_x22 + 0x11e0);
          *(undefined8 *)(unaff_x22 + 0x11b8) = *(undefined8 *)(unaff_x22 + 0x11f8);
          *(undefined8 *)(unaff_x22 + 0x11b0) = *(undefined8 *)(unaff_x22 + 0x11f0);
          FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x1368);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1380);
          lVar21 = *(long *)(unaff_x22 + 5000);
          FUN_100004640(unaff_x22 + 0x1368,uVar32);
          UNRECOVERED_JUMPTABLE = *(code **)(lVar21 + 0x70);
          _swift_retain(lVar20);
          (*UNRECOVERED_JUMPTABLE)(uVar32,lVar21);
          FUN_100004594(unaff_x22 + 0x1368);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar21 = *(long *)(unaff_x22 + 0x1a10);
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x16b0);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x16c8);
            lVar22 = *(long *)(unaff_x22 + 0x16d0);
            FUN_100004640(unaff_x22 + 0x16b0,uVar15);
            puVar7 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar34 = (char *)0x60;
            pcVar18 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar7 + 0x18) = 2;
            *(undefined8 *)(puVar7 + 0x10) = 1;
            uVar32 = *(undefined8 *)(lVar21 + 0xb0);
            *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
            *(undefined8 *)(puVar7 + 0x28) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x1988) = 0;
            *(undefined8 *)(unaff_x22 + 0x1990) = 0xe000000000000000;
            _swift_bridgeObjectRetain();
            SVar41.bridgeObject = pcVar18;
            SVar41.str = pcVar34;
            Swift::String::reserveCapacity(2,SVar41);
            *(undefined8 *)(unaff_x22 + 0x1978) = *(undefined8 *)(unaff_x22 + 0x1988);
            *(undefined8 *)(unaff_x22 + 0x1980) = *(undefined8 *)(unaff_x22 + 0x1990);
            SVar56.bridgeObject = puVar5;
            SVar56.str = pcVar18;
            Swift::String::write(*(String *)(unaff_x22 + 0x11b0),SVar56);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x1980);
            *(undefined8 *)(puVar7 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1978);
            *(undefined8 *)(puVar7 + 0x38) = uVar32;
            puVar7[0x58] = 0;
            puVar5 = puVar7;
            FUN_1009d858c();
            _swift_setDeallocating(puVar7);
            FUN_1000fb4c4(puVar7 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
            _swift_deallocClassInstance(puVar7,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x98) = 1;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0x8000000100db74d0;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0;
            *(undefined **)(unaff_x22 + 0xb8) = puVar5;
            *(undefined8 *)(unaff_x22 + 200) = 0;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0;
            *(undefined8 *)(unaff_x22 + 0xd0) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xd8) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xe0) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0xf0) = 0x284;
            *(undefined1 *)(unaff_x22 + 0x638) = 1;
            *(undefined8 *)(unaff_x22 + 0x640) = 0xd000000000000028;
            *(undefined8 *)(unaff_x22 + 0x648) = 0x8000000100db74d0;
            *(undefined8 *)(unaff_x22 + 0x650) = 0;
            *(undefined **)(unaff_x22 + 0x658) = puVar5;
            *(undefined8 *)(unaff_x22 + 0x668) = 0;
            *(undefined8 *)(unaff_x22 + 0x660) = 0;
            *(undefined8 *)(unaff_x22 + 0x670) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x678) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x680) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x688) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x690) = 0x284;
            FUN_1005bf638(unaff_x22 + 0x98,unaff_x22 + 0x698);
            FUN_1004eaa3c(unaff_x22 + 0x638);
            (**(code **)(lVar22 + 0x28))(unaff_x22 + 0x98,uVar15,lVar22);
            FUN_1004eaa3c(unaff_x22 + 0x98);
            FUN_100004594(unaff_x22 + 0x16b0);
          }
          lVar20 = *(long *)(lVar20 + 0x10);
          iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar20 + 0x30));
          if (iVar4 != 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4eb0);
            (*UNRECOVERED_JUMPTABLE)();
          }
          FUN_1009c79b0(lVar20 + 0x10);
          iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar20 + 0x30));
          if (lVar19 != 0) {
            if (iVar4 == 0) {
              return;
            }
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ee8);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (iVar4 != 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4eec);
            (*UNRECOVERED_JUMPTABLE)();
          }
          *(undefined8 *)(unaff_x22 + 0x1a50) =
               *(undefined8 *)(*(long *)(unaff_x22 + 0x1a10) + 0x110);
          uVar37 = (ulong)local_98;
          _swift_isUniquelyReferenced_nonNull_native();
          if ((uVar37 & 1) == 0) {
            FUN_1009d6758();
            uVar37 = (ulong)local_98;
          }
          puVar27 = *(ulong **)(unaff_x22 + 0x19f0);
          FUN_1009d8494();
          *(ulong *)(unaff_x22 + 0x1a58) = uVar37;
          bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
          *(byte *)(unaff_x22 + 0x104a) = bVar2 & 1;
          *puVar27 = (ulong)local_98;
          goto LAB_1009d4dd4;
        }
        _swift_retain(lVar20);
        FUN_1000fb4c4(puVar12,&DAT_100ff31c8,&DAT_100c8c5d0);
        FUN_100076688(lVar21 + 0x20,unaff_x22 + 0x1548);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1560);
        lVar21 = *(long *)(unaff_x22 + 0x1568);
        FUN_100004640(unaff_x22 + 0x1548,uVar32);
        (**(code **)(lVar21 + 0x70))(uVar32,lVar21);
        FUN_100004594(unaff_x22 + 0x1548);
        if (((uint)uVar32 & 0xff) < 2) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1610);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1628);
          lVar21 = *(long *)(unaff_x22 + 0x1630);
          FUN_100004640(unaff_x22 + 0x1610,uVar32);
          *(undefined1 *)(unaff_x22 + 0xcf8) = 1;
          *(undefined8 *)(unaff_x22 + 0xd00) = 0xd00000000000002b;
          *(undefined8 *)(unaff_x22 + 0xd08) = 0x8000000100db74a0;
          *(undefined8 *)(unaff_x22 + 0xd18) = 0;
          *(undefined8 *)(unaff_x22 + 0xd10) = 0;
          *(undefined8 *)(unaff_x22 + 0xd28) = 0;
          *(undefined8 *)(unaff_x22 + 0xd20) = 0;
          *(undefined8 *)(unaff_x22 + 0xd30) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xd38) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xd40) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xd48) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xd50) = 0x27f;
          *(undefined1 *)(unaff_x22 + 0x578) = 1;
          *(undefined8 *)(unaff_x22 + 0x580) = 0xd00000000000002b;
          *(undefined8 *)(unaff_x22 + 0x588) = 0x8000000100db74a0;
          *(undefined8 *)(unaff_x22 + 0x598) = 0;
          *(undefined8 *)(unaff_x22 + 0x590) = 0;
          *(undefined8 *)(unaff_x22 + 0x5a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x5a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x5b0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x5b8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x5c0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x5c8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x5d0) = 0x27f;
          FUN_1005bf638(unaff_x22 + 0xcf8,unaff_x22 + 0x5d8);
          FUN_1004eaa3c(unaff_x22 + 0x578);
          (**(code **)(lVar21 + 0x28))(unaff_x22 + 0xcf8,uVar32,lVar21);
          _swift_release(lVar20);
          FUN_1004eaa3c(unaff_x22 + 0xcf8);
          FUN_100004594(unaff_x22 + 0x1610);
        }
        else {
          _swift_release(lVar20);
        }
        uVar37 = *(long *)(unaff_x22 + 0x1a38) + 1;
      } while (uVar37 != *(ulong *)(unaff_x22 + 0x1a28));
    }
    puVar28 = *(undefined8 **)(unaff_x22 + 0x1a00);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1a20));
    TVar29.unknown = (undefined *)*puVar28;
    FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
    Swift::ThrowingTaskGroup::cancelAll(TVar29);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1a18);
    if (local_c8 == 0) {
      _swift_release(uVar32);
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_1009d3b44;
    }
    _swift_willThrow();
    _swift_release(uVar32);
  }
  else {
    puVar12 = (undefined8 *)(unaff_x22 + 0xff8);
    puVar30 = (undefined8 *)(unaff_x22 + 0x10a8);
    *(undefined8 *)(unaff_x22 + 0x1020) = *(undefined8 *)(unaff_x22 + 0x1078);
    *(undefined8 *)(unaff_x22 + 0x1018) = *(undefined8 *)(unaff_x22 + 0x1070);
    *(undefined8 *)(unaff_x22 + 0x1030) = *(undefined8 *)(unaff_x22 + 0x1088);
    *(undefined8 *)(unaff_x22 + 0x1028) = *(undefined8 *)(unaff_x22 + 0x1080);
    *(undefined8 *)(unaff_x22 + 0x1040) = *(undefined8 *)(unaff_x22 + 0x1098);
    *(undefined8 *)(unaff_x22 + 0x1038) = *(undefined8 *)(unaff_x22 + 0x1090);
    *(undefined1 *)(unaff_x22 + 0x1048) = *(undefined1 *)(unaff_x22 + 0x10a0);
    *(undefined8 *)(unaff_x22 + 0x1000) = *(undefined8 *)(unaff_x22 + 0x1058);
    *puVar12 = *(undefined8 *)TVar29.unknown;
    *(undefined8 *)(unaff_x22 + 0x1010) = *(undefined8 *)(unaff_x22 + 0x1068);
    *(undefined8 *)(unaff_x22 + 0x1008) = *(undefined8 *)(unaff_x22 + 0x1060);
    FUN_1009d86d0(puVar12,puVar30);
    uVar37 = *(ulong *)(unaff_x22 + 0x10e8);
    bVar2 = *(byte *)(unaff_x22 + 0x10f8);
    if (1 < bVar2) {
      pcVar34 = *(char **)(unaff_x22 + 0x10a8);
      if (bVar2 == 2) {
        lVar20 = *(long *)(*(long *)(unaff_x22 + 0x1a50) + 0x10);
        lVar19 = 0x20;
        do {
          if (lVar19 - lVar20 == 0x20) goto LAB_1009d4dc8;
          uVar37 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x1a50) + lVar19);
          FUN_1001a7d78(uVar37,pcVar34);
          lVar19 = lVar19 + 1;
        } while ((uVar37 & 1) == 0);
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x16d8);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x16f0);
        lVar19 = *(long *)(unaff_x22 + 0x16f8);
        FUN_100004640(unaff_x22 + 0x16d8,uVar32);
        (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
        FUN_100004594(unaff_x22 + 0x16d8);
        if (((uint)uVar32 & 0xff) < 2) {
          lVar20 = *(long *)(unaff_x22 + 0x1a10);
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x14a8);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x14c0);
          lVar19 = *(long *)(unaff_x22 + 0x14c8);
          FUN_100004640();
          puVar5 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar18 = (char *)0x60;
          pcVar17 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 2;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          uVar32 = *(undefined8 *)(lVar20 + 0x80);
          *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar20 + 0x78);
          *(undefined8 *)(puVar5 + 0x28) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x18d8) = 0;
          *(undefined8 *)(unaff_x22 + 0x18e0) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar42.bridgeObject = pcVar17;
          SVar42.str = pcVar18;
          Swift::String::reserveCapacity(2,SVar42);
          *(undefined8 *)(unaff_x22 + 0x1928) = *(undefined8 *)(unaff_x22 + 0x18d8);
          *(undefined8 *)(unaff_x22 + 0x1930) = *(undefined8 *)(unaff_x22 + 0x18e0);
          thunk_FUN_1009db6c0();
          SVar39.bridgeObject = pcVar18;
          SVar39.str = pcVar34;
          SVar57.bridgeObject = in_x3;
          SVar57.str = pcVar17;
          Swift::String::append(SVar39,SVar57);
          _swift_bridgeObjectRelease(pcVar18);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1930);
          *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1928);
          *(undefined8 *)(puVar5 + 0x38) = uVar32;
          puVar5[0x58] = 0;
          puVar7 = puVar5;
          FUN_1009d858c();
          _swift_setDeallocating(puVar5);
          FUN_1000fb4c4(puVar5 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar5,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x278) = 1;
          *(undefined8 *)(unaff_x22 + 0x280) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0x288) = 0x8000000100db7580;
          *(undefined8 *)(unaff_x22 + 0x290) = 0;
          *(undefined **)(unaff_x22 + 0x298) = puVar7;
          *(undefined8 *)(unaff_x22 + 0x2a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x2a0) = 0;
          *(undefined8 *)(unaff_x22 + 0x2b0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x2b8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x2c0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x2c8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x2d0) = 0x2f5;
          *(undefined1 *)(unaff_x22 + 0xe78) = 1;
          *(undefined8 *)(unaff_x22 + 0xe80) = 0xd000000000000024;
          *(undefined8 *)(unaff_x22 + 0xe88) = 0x8000000100db7580;
          *(undefined8 *)(unaff_x22 + 0xe90) = 0;
          *(undefined **)(unaff_x22 + 0xe98) = puVar7;
          *(undefined8 *)(unaff_x22 + 0xea8) = 0;
          *(undefined8 *)(unaff_x22 + 0xea0) = 0;
          *(undefined8 *)(unaff_x22 + 0xeb0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xeb8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xec0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xec8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xed0) = 0x2f5;
          FUN_1005bf638(unaff_x22 + 0x278,unaff_x22 + 0xdb8);
          FUN_1004eaa3c(unaff_x22 + 0xe78);
          (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x278,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x278);
          FUN_100004594(unaff_x22 + 0x14a8);
        }
        FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1a00),*(undefined8 *)(unaff_x22 + 0x19f8));
        FUN_1009d8704(puVar12);
        local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
        local_c8 = *(long *)(unaff_x22 + 0x1a60);
        goto LAB_1009d4dd4;
      }
      if (bVar2 == 3) {
        FUN_1009d8704(puVar12);
        puVar12 = puVar30;
        goto LAB_1009d4dc8;
      }
      local_98 = (undefined8 *)(unaff_x22 + 0x17c0);
      lVar19 = *(long *)(unaff_x22 + 0x10f0);
      lVar20 = *(long *)(unaff_x22 + 0x10e0);
      lVar23 = *(long *)(unaff_x22 + 0x10d8);
      lVar21 = *(long *)(unaff_x22 + 0x10d0);
      lVar24 = *(long *)(unaff_x22 + 0x10c8);
      lVar25 = *(long *)(unaff_x22 + 0x10c0);
      lVar22 = *(long *)(unaff_x22 + 0x10b8);
      lVar26 = *(long *)(unaff_x22 + 0x10b0);
      if ((((uVar37 == 0 && pcVar34 == (char *)0x0) && (lVar19 == 0 && lVar20 == 0)) &&
          ((lVar23 == 0 && lVar21 == 0) && lVar24 == 0)) &&
          ((lVar25 == 0 && lVar22 == 0) && lVar26 == 0)) {
        FUN_1009d8704(puVar12);
        local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
        local_c8 = *(long *)(unaff_x22 + 0x1a60);
        goto LAB_1009d4dd4;
      }
      if (((pcVar34 == &DAT_00000001) &&
          ((((lVar19 == 0 && uVar37 == 0) && (lVar20 == 0 && lVar23 == 0)) &&
           ((lVar21 == 0 && lVar24 == 0) && lVar25 == 0)) && (lVar22 == 0 && lVar26 == 0))) ||
         ((pcVar34 == (char *)0x2 &&
          ((((lVar19 == 0 && uVar37 == 0) && (lVar20 == 0 && lVar23 == 0)) &&
           ((lVar21 == 0 && lVar24 == 0) && lVar25 == 0)) && (lVar22 == 0 && lVar26 == 0))))) {
        FUN_1009d8704(puVar12);
        local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
        local_c8 = *(long *)(unaff_x22 + 0x1a60);
        goto LAB_1009d4dd4;
      }
      if ((pcVar34 == (char *)0x3) &&
         ((((lVar19 == 0 && uVar37 == 0) && (lVar20 == 0 && lVar23 == 0)) &&
          ((lVar21 == 0 && lVar24 == 0) && lVar25 == 0)) && (lVar22 == 0 && lVar26 == 0))) {
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1638);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1650);
        lVar19 = *(long *)(unaff_x22 + 0x1658);
        FUN_100004640(unaff_x22 + 0x1638,uVar32);
        (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
        FUN_100004594(unaff_x22 + 0x1638);
        if (((uint)uVar32 & 0xff) < 2) {
          lVar20 = *(long *)(unaff_x22 + 0x1a10);
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1778);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1790);
          lVar19 = *(long *)(unaff_x22 + 0x1798);
          FUN_100004640();
          puVar5 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar34 = (char *)0x60;
          pcVar18 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 2;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          uVar32 = *(undefined8 *)(lVar20 + 0xb0);
          *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar20 + 0xa8);
          *(undefined8 *)(puVar5 + 0x28) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x1888) = 0;
          *(undefined8 *)(unaff_x22 + 0x1890) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar45.bridgeObject = pcVar18;
          SVar45.str = pcVar34;
          Swift::String::reserveCapacity(2,SVar45);
          *(undefined8 *)(unaff_x22 + 0x1968) = *(undefined8 *)(unaff_x22 + 0x1888);
          *(undefined8 *)(unaff_x22 + 0x1970) = *(undefined8 *)(unaff_x22 + 0x1890);
          SVar59.bridgeObject = in_x3;
          SVar59.str = pcVar18;
          Swift::String::write(*(String *)(unaff_x22 + 0x11b0),SVar59);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1970);
          *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1968);
          *(undefined8 *)(puVar5 + 0x38) = uVar32;
          puVar5[0x58] = 0;
          puVar7 = puVar5;
          FUN_1009d858c();
          _swift_setDeallocating(puVar5);
          FUN_1000fb4c4(puVar5 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
          _swift_deallocClassInstance(puVar5,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x1b8) = 1;
          *(undefined8 *)(unaff_x22 + 0x1c0) = 0xd00000000000005a;
          *(undefined8 *)(unaff_x22 + 0x1c8) = 0x8000000100db7520;
          *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
          *(undefined **)(unaff_x22 + 0x1d8) = puVar7;
          *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
          *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x1f8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x200) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x208) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x210) = 0x305;
          *(undefined1 *)(unaff_x22 + 0xed8) = 1;
          *(undefined8 *)(unaff_x22 + 0xee0) = 0xd00000000000005a;
          *(undefined8 *)(unaff_x22 + 0xee8) = 0x8000000100db7520;
          *(undefined8 *)(unaff_x22 + 0xef0) = 0;
          *(undefined **)(unaff_x22 + 0xef8) = puVar7;
          *(undefined8 *)(unaff_x22 + 0xf08) = 0;
          *(undefined8 *)(unaff_x22 + 0xf00) = 0;
          *(undefined8 *)(unaff_x22 + 0xf10) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xf18) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xf20) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xf28) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xf30) = 0x305;
          FUN_1005bf638(unaff_x22 + 0x1b8,unaff_x22 + 0xf8);
          FUN_1004eaa3c(unaff_x22 + 0xed8);
          (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x1b8,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x1b8);
          FUN_100004594(unaff_x22 + 0x1778);
        }
        if (**(long **)(unaff_x22 + 0x19f8) == 0) {
          bVar2 = *(byte *)(unaff_x22 + 0x1049);
          TVar31.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x1a00);
          FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
          Swift::ThrowingTaskGroup::cancelAll(TVar31);
          if (((bVar2 & 1) == 0) ||
             (lVar19 = *(long *)(unaff_x22 + 0x1a10), *(char *)(lVar19 + 0x100) == '\x01'))
          goto LAB_1009d4aa0;
          uVar36 = *(undefined8 *)(unaff_x22 + 0x1a58);
          uVar32 = *(undefined8 *)(lVar19 + 0xf0);
          uVar15 = *(undefined8 *)(lVar19 + 0xf8);
          puVar5 = &DAT_100ff3080;
          FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
          uVar37 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
          uVar10 = uVar37 & 0xfffffffffffffff0;
          _swift_task_alloc(uVar10);
          TVar11 = Swift::TaskPriority::typeMetadataAccessor();
          lVar20 = *(long *)(TVar11.unknown + -8);
          (**(code **)(lVar20 + 0x38))(uVar10,1,1,TVar11.unknown);
          puVar5 = &DAT_100f26188;
          _swift_allocObject(&DAT_100f26188,0x38,7);
          *(long *)(puVar5 + 0x10) = lVar19;
          *(undefined8 *)(puVar5 + 0x18) = uVar36;
          *(long *)(puVar5 + 0x20) = lVar19;
          *(undefined8 *)(puVar5 + 0x28) = uVar32;
          *(undefined8 *)(puVar5 + 0x30) = uVar15;
          uVar37 = uVar37 & 0xfffffffffffffff0;
          _swift_task_alloc();
          FUN_1000f8cac(uVar10,uVar37,&DAT_100ff3080,&DAT_100c8c470);
          uVar33 = uVar37;
          (**(code **)(lVar20 + 0x30))(uVar37,1,TVar11.unknown);
          _swift_retain_n(lVar19,2);
          TVar9.unknown = puVar5;
          _swift_retain();
          if ((int)uVar33 == 1) {
            FUN_1000fb4c4(uVar37,&DAT_100ff3080,&DAT_100c8c470);
            uVar33 = 0x1c00;
          }
          else {
            _Var3 = Swift::TaskPriority::get_rawValue(TVar9);
            (**(code **)(lVar20 + 8))(uVar37,TVar11.unknown);
            uVar33 = (ulong)_Var3 | 0x1c00;
          }
          _swift_task_dealloc(uVar37);
          lVar19 = *(long *)(puVar5 + 0x10);
          lVar20 = *(long *)(puVar5 + 0x18);
          _swift_unknownObjectRetain(lVar19);
          _swift_release(puVar5);
          if (lVar19 == 0) {
            UVar14.unknown = (undefined *)0x0;
            lVar20 = 0;
          }
          else {
            _swift_getObjectType(lVar19);
            UVar14 = Swift::Actor::get_unownedExecutor();
            _swift_unknownObjectRelease(lVar19);
          }
          FUN_1000fb4c4(uVar10,&DAT_100ff3080,&DAT_100c8c470);
          puVar7 = &DAT_100f261b0;
          _swift_allocObject(&DAT_100f261b0,0x20,7);
          *(undefined **)(puVar7 + 0x10) = &DAT_100c8c858;
          *(undefined **)(puVar7 + 0x18) = puVar5;
          if (lVar20 == 0 && UVar14.unknown == (undefined *)0x0) {
            local_98 = (undefined8 *)0x0;
          }
          else {
            *(undefined8 *)(unaff_x22 + 0x17a0) = 0;
            *(undefined8 *)(unaff_x22 + 0x17a8) = 0;
            *(undefined **)(unaff_x22 + 0x17b0) = UVar14.unknown;
            *(long *)(unaff_x22 + 0x17b8) = lVar20;
            local_98 = (undefined8 *)(unaff_x22 + 0x17a0);
          }
          puVar27 = *(ulong **)(unaff_x22 + 0x19f8);
          puVar5 = &DAT_100c8c860;
LAB_1009d4dac:
          _swift_task_create(uVar33,local_98,PTR___type_metadata_for____100eae0c8 + 8,puVar5,puVar7)
          ;
          _swift_task_dealloc(uVar10);
          *puVar27 = uVar33;
        }
        else {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x14d0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x14e8);
          lVar19 = *(long *)(unaff_x22 + 0x14f0);
          FUN_100004640(unaff_x22 + 0x14d0,uVar32);
          (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
          FUN_100004594(unaff_x22 + 0x14d0);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar20 = 0x15e8;
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x15e8);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x1600);
            lVar19 = *(long *)(unaff_x22 + 0x1608);
            FUN_100004640(unaff_x22 + 0x15e8,uVar32);
            *(undefined1 *)(unaff_x22 + 0x218) = 1;
            *(undefined8 *)(unaff_x22 + 0x220) = 0xd00000000000002f;
            *(undefined8 *)(unaff_x22 + 0x228) = 0x8000000100db7380;
            *(undefined8 *)(unaff_x22 + 0x238) = 0;
            *(undefined8 *)(unaff_x22 + 0x230) = 0;
            *(undefined8 *)(unaff_x22 + 0x248) = 0;
            *(undefined8 *)(unaff_x22 + 0x240) = 0;
            *(undefined8 *)(unaff_x22 + 0x250) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 600) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x260) = 0xd000000000000042;
            *(undefined8 *)(unaff_x22 + 0x268) = 0x8000000100db7330;
            *(undefined8 *)(unaff_x22 + 0x270) = 0x33a;
            *(undefined1 *)(unaff_x22 + 0xf98) = 1;
            *(undefined8 *)(unaff_x22 + 4000) = 0xd00000000000002f;
            *(undefined8 *)(unaff_x22 + 0xfa8) = 0x8000000100db7380;
            *(undefined8 *)(unaff_x22 + 0xfb8) = 0;
            *(undefined8 *)(unaff_x22 + 0xfb0) = 0;
            *(undefined8 *)(unaff_x22 + 0xfc8) = 0;
            *(undefined8 *)(unaff_x22 + 0xfc0) = 0;
            *(undefined8 *)(unaff_x22 + 0xfd0) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xfd8) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xfe0) = 0xd000000000000042;
            *(undefined8 *)(unaff_x22 + 0xfe8) = 0x8000000100db7330;
            *(undefined8 *)(unaff_x22 + 0xff0) = 0x33a;
            FUN_1005bf638(unaff_x22 + 0x218,unaff_x22 + 0xf38);
            FUN_1004eaa3c(unaff_x22 + 0xf98);
            (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x218,uVar32,lVar19);
            lVar19 = unaff_x22 + 0x218;
LAB_1009d48dc:
            FUN_1004eaa3c(lVar19);
            FUN_100004594(unaff_x22 + lVar20);
          }
        }
      }
      else {
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1660);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1678);
        lVar19 = *(long *)(unaff_x22 + 0x1680);
        FUN_100004640(unaff_x22 + 0x1660,uVar32);
        (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
        FUN_100004594(unaff_x22 + 0x1660);
        if (((uint)uVar32 & 0xff) < 2) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1430);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1448);
          lVar19 = *(long *)(unaff_x22 + 0x1450);
          FUN_100004640(unaff_x22 + 0x1430,uVar32);
          *(undefined1 *)(unaff_x22 + 0xc98) = 1;
          *(undefined8 *)(unaff_x22 + 0xca0) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0xca8) = 0x8000000100db7500;
          *(undefined8 *)(unaff_x22 + 0xcb8) = 0;
          *(undefined8 *)(unaff_x22 + 0xcb0) = 0;
          *(undefined8 *)(unaff_x22 + 0xcc8) = 0;
          *(undefined8 *)(unaff_x22 + 0xcc0) = 0;
          *(undefined8 *)(unaff_x22 + 0xcd0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xcd8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xce0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xce8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xcf0) = 0x313;
          *(undefined1 *)(unaff_x22 + 0x6f8) = 1;
          *(undefined8 *)(unaff_x22 + 0x700) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0x708) = 0x8000000100db7500;
          *(undefined8 *)(unaff_x22 + 0x718) = 0;
          *(undefined8 *)(unaff_x22 + 0x710) = 0;
          *(undefined8 *)(unaff_x22 + 0x728) = 0;
          *(undefined8 *)(unaff_x22 + 0x720) = 0;
          *(undefined8 *)(unaff_x22 + 0x730) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x738) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x740) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x748) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x750) = 0x313;
          FUN_1005bf638(unaff_x22 + 0xc98,unaff_x22 + 0xc38);
          FUN_1004eaa3c(unaff_x22 + 0x6f8);
          (**(code **)(lVar19 + 0x28))(unaff_x22 + 0xc98,uVar32,lVar19);
          FUN_1004eaa3c(unaff_x22 + 0xc98);
          FUN_100004594(unaff_x22 + 0x1430);
        }
        if (**(long **)(unaff_x22 + 0x19f8) == 0) {
          bVar2 = *(byte *)(unaff_x22 + 0x1049);
          TVar31.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x1a00);
          FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
          Swift::ThrowingTaskGroup::cancelAll(TVar31);
          if (((bVar2 & 1) != 0) &&
             (lVar19 = *(long *)(unaff_x22 + 0x1a10), *(char *)(lVar19 + 0x100) != '\x01')) {
            uVar36 = *(undefined8 *)(unaff_x22 + 0x1a58);
            uVar32 = *(undefined8 *)(lVar19 + 0xf0);
            uVar15 = *(undefined8 *)(lVar19 + 0xf8);
            puVar5 = &DAT_100ff3080;
            FUN_1000f7830(&DAT_100ff3080,&DAT_100c8c470);
            uVar37 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xf;
            uVar10 = uVar37 & 0xfffffffffffffff0;
            _swift_task_alloc(uVar10);
            TVar11 = Swift::TaskPriority::typeMetadataAccessor();
            lVar20 = *(long *)(TVar11.unknown + -8);
            (**(code **)(lVar20 + 0x38))(uVar10,1,1,TVar11.unknown);
            puVar5 = &DAT_100f26138;
            _swift_allocObject(&DAT_100f26138,0x38,7);
            *(long *)(puVar5 + 0x10) = lVar19;
            *(undefined8 *)(puVar5 + 0x18) = uVar36;
            *(long *)(puVar5 + 0x20) = lVar19;
            *(undefined8 *)(puVar5 + 0x28) = uVar32;
            *(undefined8 *)(puVar5 + 0x30) = uVar15;
            uVar37 = uVar37 & 0xfffffffffffffff0;
            _swift_task_alloc();
            FUN_1000f8cac(uVar10,uVar37,&DAT_100ff3080,&DAT_100c8c470);
            uVar33 = uVar37;
            (**(code **)(lVar20 + 0x30))(uVar37,1,TVar11.unknown);
            _swift_retain_n(lVar19,2);
            TVar9.unknown = puVar5;
            _swift_retain();
            if ((int)uVar33 == 1) {
              FUN_1000fb4c4(uVar37,&DAT_100ff3080,&DAT_100c8c470);
              uVar33 = 0x1c00;
            }
            else {
              _Var3 = Swift::TaskPriority::get_rawValue(TVar9);
              (**(code **)(lVar20 + 8))(uVar37,TVar11.unknown);
              uVar33 = (ulong)_Var3 | 0x1c00;
            }
            _swift_task_dealloc(uVar37);
            lVar19 = *(long *)(puVar5 + 0x10);
            lVar20 = *(long *)(puVar5 + 0x18);
            _swift_unknownObjectRetain(lVar19);
            _swift_release(puVar5);
            if (lVar19 == 0) {
              UVar14.unknown = (undefined *)0x0;
              lVar20 = 0;
            }
            else {
              _swift_getObjectType(lVar19);
              UVar14 = Swift::Actor::get_unownedExecutor();
              _swift_unknownObjectRelease(lVar19);
            }
            FUN_1000fb4c4(uVar10,&DAT_100ff3080,&DAT_100c8c470);
            puVar7 = &DAT_100f26160;
            _swift_allocObject(&DAT_100f26160,0x20,7);
            *(undefined **)(puVar7 + 0x10) = &DAT_100c8c848;
            *(undefined **)(puVar7 + 0x18) = puVar5;
            if (lVar20 == 0 && UVar14.unknown == (undefined *)0x0) {
              local_98 = (undefined8 *)0x0;
            }
            else {
              *local_98 = 0;
              *(undefined8 *)(unaff_x22 + 0x17c8) = 0;
              *(undefined **)(unaff_x22 + 0x17d0) = UVar14.unknown;
              *(long *)(unaff_x22 + 0x17d8) = lVar20;
            }
            puVar27 = *(ulong **)(unaff_x22 + 0x19f8);
            puVar5 = &DAT_100c8c850;
            goto LAB_1009d4dac;
          }
LAB_1009d4aa0:
          **(undefined8 **)(unaff_x22 + 0x19f8) = 0;
        }
        else {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x13e0);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x13f8);
          lVar19 = *(long *)(unaff_x22 + 0x1400);
          FUN_100004640(unaff_x22 + 0x13e0,uVar32);
          (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
          FUN_100004594(unaff_x22 + 0x13e0);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar20 = 0x1390;
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1390);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x13a8);
            lVar19 = *(long *)(unaff_x22 + 0x13b0);
            FUN_100004640(unaff_x22 + 0x1390,uVar32);
            *(undefined1 *)(unaff_x22 + 0x158) = 1;
            *(undefined8 *)(unaff_x22 + 0x160) = 0xd00000000000002f;
            *(undefined8 *)(unaff_x22 + 0x168) = 0x8000000100db7380;
            *(undefined8 *)(unaff_x22 + 0x178) = 0;
            *(undefined8 *)(unaff_x22 + 0x170) = 0;
            *(undefined8 *)(unaff_x22 + 0x188) = 0;
            *(undefined8 *)(unaff_x22 + 0x180) = 0;
            *(undefined8 *)(unaff_x22 + 400) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x198) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x1a0) = 0xd000000000000042;
            *(undefined8 *)(unaff_x22 + 0x1a8) = 0x8000000100db7330;
            *(undefined8 *)(unaff_x22 + 0x1b0) = 0x33a;
            *(undefined1 *)(unaff_x22 + 0xd58) = 1;
            *(undefined8 *)(unaff_x22 + 0xd60) = 0xd00000000000002f;
            *(undefined8 *)(unaff_x22 + 0xd68) = 0x8000000100db7380;
            *(undefined8 *)(unaff_x22 + 0xd78) = 0;
            *(undefined8 *)(unaff_x22 + 0xd70) = 0;
            *(undefined8 *)(unaff_x22 + 0xd88) = 0;
            *(undefined8 *)(unaff_x22 + 0xd80) = 0;
            *(undefined8 *)(unaff_x22 + 0xd90) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xd98) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xda0) = 0xd000000000000042;
            *(undefined8 *)(unaff_x22 + 0xda8) = 0x8000000100db7330;
            *(undefined8 *)(unaff_x22 + 0xdb0) = 0x33a;
            FUN_1005bf638(unaff_x22 + 0x158,unaff_x22 + 0xe18);
            FUN_1004eaa3c(unaff_x22 + 0xd58);
            (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x158,uVar32,lVar19);
            lVar19 = unaff_x22 + 0x158;
            goto LAB_1009d48dc;
          }
        }
      }
LAB_1009d4dc8:
      FUN_1009d8704(puVar12);
      local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
      local_c8 = *(long *)(unaff_x22 + 0x1a60);
      goto LAB_1009d4dd4;
    }
    if (bVar2 == 0) {
      uVar33 = *(ulong *)(unaff_x22 + 0x1a68);
      puVar35 = (undefined8 *)(unaff_x22 + 0x1240);
      *(undefined8 *)(unaff_x22 + 0x1248) = *(undefined8 *)(unaff_x22 + 0x10b0);
      *puVar35 = *puVar30;
      *(undefined8 *)(unaff_x22 + 0x1258) = *(undefined8 *)(unaff_x22 + 0x10c0);
      *(undefined8 *)(unaff_x22 + 0x1250) = *(undefined8 *)(unaff_x22 + 0x10b8);
      *(undefined8 *)(unaff_x22 + 0x1268) = *(undefined8 *)(unaff_x22 + 0x10d0);
      *(undefined8 *)(unaff_x22 + 0x1260) = *(undefined8 *)(unaff_x22 + 0x10c8);
      *(undefined8 *)(unaff_x22 + 0x1278) = *(undefined8 *)(unaff_x22 + 0x10e0);
      *(undefined8 *)(unaff_x22 + 0x1270) = *(undefined8 *)(unaff_x22 + 0x10d8);
      *(undefined8 *)(unaff_x22 + 0x1208) = 0;
      *(undefined8 *)(unaff_x22 + 0x1200) = 0;
      *(undefined8 *)(unaff_x22 + 0x1218) = 0;
      *(undefined8 *)(unaff_x22 + 0x1210) = 0;
      *(undefined8 *)(unaff_x22 + 0x1228) = 0;
      *(undefined8 *)(unaff_x22 + 0x1220) = 0;
      *(undefined8 *)(unaff_x22 + 0x1238) = 0;
      *(undefined8 *)(unaff_x22 + 0x1230) = 0;
      _swift_isUniquelyReferenced_nonNull_native();
      local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
      if ((uVar33 & 1) == 0) {
        FUN_1009d6758();
      }
      if ((long)uVar37 < 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ec8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      if (*(ulong *)((long)local_98 + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ee0);
        (*UNRECOVERED_JUMPTABLE)();
      }
      puVar30 = *(undefined8 **)(unaff_x22 + 0x1a00);
      puVar27 = *(ulong **)(unaff_x22 + 0x19f0);
      FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x1200),(long)local_98 + uVar37 * 0x40 + 0x20);
      *puVar27 = (ulong)local_98;
      TVar31.unknown = (undefined *)*puVar30;
      pcVar34 = &DAT_100ff3200;
      FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
      puVar5 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      bVar1 = Swift::ThrowingTaskGroup::get_isCancelled(TVar31);
      if (bVar1) {
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1a48);
        FUN_1009d8704(puVar12);
        _swift_release(uVar32);
        FUN_1009d7d7c(puVar35);
        FUN_1009d7d7c(puVar28);
      }
      else {
        if (uVar37 != *(ulong *)(unaff_x22 + 0x1a40)) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1598);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x15b0);
          lVar19 = *(long *)(unaff_x22 + 0x15b8);
          FUN_100004640(unaff_x22 + 0x1598,uVar32);
          (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
          FUN_100004594(unaff_x22 + 0x1598);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar19 = *(long *)(unaff_x22 + 0x1a10);
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x14f8);
            uVar15 = *(undefined8 *)(unaff_x22 + 0x1510);
            pcVar34 = *(char **)(unaff_x22 + 0x1518);
            FUN_100004640();
            puVar7 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar18 = (char *)0x60;
            pcVar17 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar7 + 0x18) = 2;
            *(undefined8 *)(puVar7 + 0x10) = 1;
            uVar32 = *(undefined8 *)(lVar19 + 0xb0);
            *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(lVar19 + 0xa8);
            *(undefined8 *)(puVar7 + 0x28) = uVar32;
            _swift_bridgeObjectRetain();
            SVar47.bridgeObject = pcVar17;
            SVar47.str = pcVar18;
            Swift::String::reserveCapacity(2,SVar47);
            SVar61.bridgeObject = puVar5;
            SVar61.str = pcVar17;
            Swift::String::write(*(String *)(unaff_x22 + 0x1270),SVar61);
            *(undefined8 *)(puVar7 + 0x30) = 0;
            *(undefined8 *)(puVar7 + 0x38) = 0xe000000000000000;
            puVar7[0x58] = 0;
            puVar6 = puVar7;
            FUN_1009d858c();
            _swift_setDeallocating(puVar7);
            FUN_1000fb4c4(puVar7 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
            _swift_deallocClassInstance(puVar7,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x4b8) = 1;
            *(undefined8 *)(unaff_x22 + 0x4c0) = 0xd000000000000059;
            *(undefined8 *)(unaff_x22 + 0x4c8) = 0x8000000100db76b0;
            *(undefined8 *)(unaff_x22 + 0x4d0) = 0;
            *(undefined **)(unaff_x22 + 0x4d8) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x4e8) = 0;
            *(undefined8 *)(unaff_x22 + 0x4e0) = 0;
            *(undefined8 *)(unaff_x22 + 0x4f0) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x4f8) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x500) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x508) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x510) = 0x298;
            *(undefined1 *)(unaff_x22 + 0x818) = 1;
            *(undefined8 *)(unaff_x22 + 0x820) = 0xd000000000000059;
            *(undefined8 *)(unaff_x22 + 0x828) = 0x8000000100db76b0;
            *(undefined8 *)(unaff_x22 + 0x830) = 0;
            *(undefined **)(unaff_x22 + 0x838) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x848) = 0;
            *(undefined8 *)(unaff_x22 + 0x840) = 0;
            *(undefined8 *)(unaff_x22 + 0x850) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x858) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x860) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x868) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x870) = 0x298;
            FUN_1005bf638(unaff_x22 + 0x4b8,unaff_x22 + 0x7b8);
            FUN_1004eaa3c(unaff_x22 + 0x818);
            (**(code **)(pcVar34 + 0x28))(unaff_x22 + 0x4b8,uVar15);
            FUN_1004eaa3c(unaff_x22 + 0x4b8);
            FUN_100004594(unaff_x22 + 0x14f8);
          }
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1a60);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1a48);
          uVar36 = *(undefined8 *)(unaff_x22 + 0x1a20);
          uVar38 = *(undefined8 *)(unaff_x22 + 0x1a18);
          _Var16.unknown = *(undefined **)(unaff_x22 + 0x19f8);
          FUN_1009d52ac(*(undefined8 *)(unaff_x22 + 0x1a00));
          SVar39 = *(String *)(unaff_x22 + 0x1270);
          Swift::_StringGuts::grow(0x12,_Var16);
          _swift_bridgeObjectRelease(0xe000000000000000);
          SVar62.bridgeObject = puVar5;
          SVar62.str = pcVar34;
          Swift::String::append(SVar39,SVar62);
          SVar40.bridgeObject = (void *)0xe100000000000000;
          SVar40.str = (char *)0x29;
          SVar63.bridgeObject = puVar5;
          SVar63.str = pcVar34;
          Swift::String::append(SVar40,SVar63);
          plVar8 = (long *)0x0;
          FUN_1009dad00();
          _swift_allocObject();
          *(undefined1 *)(plVar8 + 4) = 2;
          plVar8[5] = -0x2fffffffffffffdd;
          plVar8[6] = -0x7ffffffeff248d30;
          plVar8[7] = 0x2a3;
          plVar8[2] = 0x2065636976726553;
          plVar8[3] = -0x10d79b9a93969e9a;
          plVar13 = plVar8;
          FUN_1009d7db0();
          _swift_allocError(&DAT_100f26798,plVar13,0,0);
          *plVar13 = (long)plVar8;
          _swift_willThrow();
          _swift_release(uVar38);
          _swift_bridgeObjectRelease(uVar36);
          _swift_release(uVar15);
          goto LAB_1009d3b20;
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1480);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1498);
        lVar19 = *(long *)(unaff_x22 + 0x14a0);
        FUN_100004640(unaff_x22 + 0x1480,uVar32);
        (**(code **)(lVar19 + 0x70))(uVar32,lVar19);
        FUN_100004594(unaff_x22 + 0x1480);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1a48);
        if (1 < ((uint)uVar32 & 0xff)) {
          _swift_release(uVar15);
          goto LAB_1009d319c;
        }
        lVar20 = *(long *)(unaff_x22 + 0x1a10);
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x13b8);
        uVar36 = *(undefined8 *)(unaff_x22 + 0x13d0);
        lVar19 = *(long *)(unaff_x22 + 0x13d8);
        FUN_100004640();
        puVar7 = &DAT_100ff3478;
        FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
        pcVar34 = (char *)0x60;
        pcVar18 = (char *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar7 + 0x18) = 2;
        *(undefined8 *)(puVar7 + 0x10) = 1;
        uVar32 = *(undefined8 *)(lVar20 + 0xb0);
        *(undefined8 *)(puVar7 + 0x20) = *(undefined8 *)(lVar20 + 0xa8);
        *(undefined8 *)(puVar7 + 0x28) = uVar32;
        *(undefined8 *)(unaff_x22 + 0x18c8) = 0;
        *(undefined8 *)(unaff_x22 + 0x18d0) = 0xe000000000000000;
        _swift_bridgeObjectRetain();
        SVar46.bridgeObject = pcVar18;
        SVar46.str = pcVar34;
        Swift::String::reserveCapacity(2,SVar46);
        *(undefined8 *)(unaff_x22 + 0x1918) = *(undefined8 *)(unaff_x22 + 0x18c8);
        *(undefined8 *)(unaff_x22 + 0x1920) = *(undefined8 *)(unaff_x22 + 0x18d0);
        SVar60.bridgeObject = puVar5;
        SVar60.str = pcVar18;
        Swift::String::write(*(String *)(unaff_x22 + 0x1270),SVar60);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1920);
        *(undefined8 *)(puVar7 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1918);
        *(undefined8 *)(puVar7 + 0x38) = uVar32;
        puVar7[0x58] = 0;
        puVar5 = puVar7;
        FUN_1009d858c();
        _swift_setDeallocating(puVar7);
        FUN_1000fb4c4(puVar7 + 0x20,&DAT_100ff3480,&DAT_100c8c838);
        _swift_deallocClassInstance(puVar7,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x518) = 1;
        *(undefined8 *)(unaff_x22 + 0x520) = 0xd000000000000010;
        *(undefined8 *)(unaff_x22 + 0x528) = 0x8000000100db7710;
        *(undefined8 *)(unaff_x22 + 0x530) = 0;
        *(undefined **)(unaff_x22 + 0x538) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x548) = 0;
        *(undefined8 *)(unaff_x22 + 0x540) = 0;
        *(undefined8 *)(unaff_x22 + 0x550) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x558) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x560) = 0xd000000000000054;
        *(undefined8 *)(unaff_x22 + 0x568) = 0x8000000100db7440;
        *(undefined8 *)(unaff_x22 + 0x570) = 0x2a7;
        *(undefined1 *)(unaff_x22 + 0x758) = 1;
        *(undefined8 *)(unaff_x22 + 0x760) = 0xd000000000000010;
        *(undefined8 *)(unaff_x22 + 0x768) = 0x8000000100db7710;
        *(undefined8 *)(unaff_x22 + 0x770) = 0;
        *(undefined **)(unaff_x22 + 0x778) = puVar5;
        *(undefined8 *)(unaff_x22 + 0x788) = 0;
        *(undefined8 *)(unaff_x22 + 0x780) = 0;
        *(undefined8 *)(unaff_x22 + 0x790) = 0xd000000000000023;
        *(undefined8 *)(unaff_x22 + 0x798) = 0x8000000100db72d0;
        *(undefined8 *)(unaff_x22 + 0x7a0) = 0xd000000000000054;
        *(undefined8 *)(unaff_x22 + 0x7a8) = 0x8000000100db7440;
        *(undefined8 *)(unaff_x22 + 0x7b0) = 0x2a7;
        FUN_1005bf638(unaff_x22 + 0x518,unaff_x22 + 0x38);
        FUN_1004eaa3c(unaff_x22 + 0x758);
        (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x518,uVar36);
        FUN_1004eaa3c(unaff_x22 + 0x518);
        _swift_release(uVar15);
        FUN_1009d8704(puVar12);
        lVar19 = 0x13b8;
LAB_1009d4364:
        FUN_100004594(unaff_x22 + lVar19);
LAB_1009d436c:
        FUN_1009d7d7c(puVar35);
        FUN_1009d7d7c(puVar28);
      }
      goto LAB_1009d2270;
    }
    uVar33 = *(ulong *)(unaff_x22 + 0x1a68);
    lVar19 = *(long *)(unaff_x22 + 0x10f0);
    puVar35 = (undefined8 *)(unaff_x22 + 0x1140);
    *(undefined8 *)(unaff_x22 + 0x1148) = *(undefined8 *)(unaff_x22 + 0x10b0);
    *puVar35 = *puVar30;
    *(undefined8 *)(unaff_x22 + 0x1158) = *(undefined8 *)(unaff_x22 + 0x10c0);
    *(undefined8 *)(unaff_x22 + 0x1150) = *(undefined8 *)(unaff_x22 + 0x10b8);
    *(undefined8 *)(unaff_x22 + 0x1168) = *(undefined8 *)(unaff_x22 + 0x10d0);
    *(undefined8 *)(unaff_x22 + 0x1160) = *(undefined8 *)(unaff_x22 + 0x10c8);
    *(undefined8 *)(unaff_x22 + 0x1178) = *(undefined8 *)(unaff_x22 + 0x10e0);
    *(undefined8 *)(unaff_x22 + 0x1170) = *(undefined8 *)(unaff_x22 + 0x10d8);
    *(undefined8 *)(unaff_x22 + 0x1108) = 0;
    *(undefined8 *)(unaff_x22 + 0x1100) = 0;
    *(undefined8 *)(unaff_x22 + 0x1118) = 0;
    *(undefined8 *)(unaff_x22 + 0x1110) = 0;
    *(undefined8 *)(unaff_x22 + 0x1128) = 0;
    *(undefined8 *)(unaff_x22 + 0x1120) = 0;
    *(undefined8 *)(unaff_x22 + 0x1138) = 0;
    *(undefined8 *)(unaff_x22 + 0x1130) = 0;
    _swift_isUniquelyReferenced_nonNull_native();
    local_98 = *(undefined8 **)(unaff_x22 + 0x1a68);
    if ((uVar33 & 1) == 0) {
      FUN_1009d6758();
    }
    if ((long)uVar37 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4edc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (*(ulong *)((long)local_98 + 0x10) <= uVar37) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1009d4ee4);
      (*UNRECOVERED_JUMPTABLE)();
    }
    puVar27 = *(ulong **)(unaff_x22 + 0x19f0);
    FUN_1009d87b8((undefined8 *)(unaff_x22 + 0x1100),(long)local_98 + uVar37 * 0x40 + 0x20);
    *puVar27 = (ulong)local_98;
    if (*(char *)(unaff_x22 + 0x1169) != '\0') {
      if (*(char *)(unaff_x22 + 0x1169) == '\x01') {
        local_c8 = *(long *)(unaff_x22 + 0x1a60);
        if (*(long *)(unaff_x22 + 0x1a60) == 0) {
          _swift_errorRetain(lVar19);
          local_c8 = lVar19;
        }
        if (uVar37 == *(ulong *)(unaff_x22 + 0x1a40)) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1520);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1538);
          lVar20 = *(long *)(unaff_x22 + 0x1540);
          FUN_100004640(unaff_x22 + 0x1520,uVar32);
          (**(code **)(lVar20 + 0x70))(uVar32,lVar20);
          FUN_100004594(unaff_x22 + 0x1520);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1a48);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar21 = *(long *)(unaff_x22 + 0x1a10);
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1408);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x1420);
            lVar20 = *(long *)(unaff_x22 + 0x1428);
            FUN_100004640();
            puVar5 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar34 = (char *)0xa0;
            pcVar18 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar5 + 0x18) = 4;
            *(undefined8 *)(puVar5 + 0x10) = 2;
            uVar32 = *(undefined8 *)(lVar21 + 0xb0);
            *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
            *(undefined8 *)(puVar5 + 0x28) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x19b8) = 0;
            *(undefined8 *)(unaff_x22 + 0x19c0) = 0xe000000000000000;
            _swift_bridgeObjectRetain();
            SVar48.bridgeObject = pcVar18;
            SVar48.str = pcVar34;
            Swift::String::reserveCapacity(2,SVar48);
            *(undefined8 *)(unaff_x22 + 0x18a8) = *(undefined8 *)(unaff_x22 + 0x19b8);
            *(undefined8 *)(unaff_x22 + 0x18b0) = *(undefined8 *)(unaff_x22 + 0x19c0);
            pcVar34 = (*(String *)(unaff_x22 + 0x1170)).bridgeObject;
            SVar64.bridgeObject = in_x3;
            SVar64.str = pcVar18;
            Swift::String::write(*(String *)(unaff_x22 + 0x1170),SVar64);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x18b0);
            *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x18a8);
            *(undefined8 *)(puVar5 + 0x38) = uVar32;
            puVar5[0x58] = 0;
            uVar32 = *(undefined8 *)(lVar21 + 0xd0);
            *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(lVar21 + 200);
            *(undefined8 *)(puVar5 + 0x68) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x18b8) = 0;
            *(undefined8 *)(unaff_x22 + 0x18c0) = 0xe000000000000000;
            _swift_bridgeObjectRetain();
            SVar49.bridgeObject = pcVar18;
            SVar49.str = pcVar34;
            Swift::String::reserveCapacity(2,SVar49);
            *(undefined8 *)(unaff_x22 + 0x1280) = *(undefined8 *)(unaff_x22 + 0x18b8);
            *(undefined8 *)(unaff_x22 + 0x1288) = *(undefined8 *)(unaff_x22 + 0x18c0);
            *(undefined8 *)(unaff_x22 + 0x1290) = 0;
            *(undefined8 *)(unaff_x22 + 0x12a0) = 0;
            *(undefined8 *)(unaff_x22 + 0x1298) = 0;
            *(undefined1 *)(unaff_x22 + 0x12a8) = 0;
            _swift_getErrorValue(lVar19,unaff_x22 + 0x19e0,unaff_x22 + 0x1828);
            FUN_1005c4024(0x1280,*(undefined8 *)(unaff_x22 + 0x1828),
                          *(undefined8 *)(unaff_x22 + 0x1830));
            uVar32 = *(undefined8 *)(unaff_x22 + 0x1288);
            *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1280);
            *(undefined8 *)(puVar5 + 0x78) = uVar32;
            puVar5[0x98] = 0;
            puVar6 = puVar5;
            FUN_1009d858c();
            _swift_setDeallocating(puVar5);
            puVar7 = &DAT_100ff3480;
            FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
            _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
            _swift_deallocClassInstance(puVar5,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x3f8) = 1;
            *(undefined8 *)(unaff_x22 + 0x400) = 0xd00000000000004b;
            *(undefined8 *)(unaff_x22 + 0x408) = 0x8000000100db7620;
            *(undefined8 *)(unaff_x22 + 0x410) = 0;
            *(undefined **)(unaff_x22 + 0x418) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x428) = 0;
            *(undefined8 *)(unaff_x22 + 0x420) = 0;
            *(undefined8 *)(unaff_x22 + 0x430) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x438) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x440) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x448) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x450) = 0x2d0;
            *(undefined1 *)(unaff_x22 + 0x998) = 1;
            *(undefined8 *)(unaff_x22 + 0x9a0) = 0xd00000000000004b;
            *(undefined8 *)(unaff_x22 + 0x9a8) = 0x8000000100db7620;
            *(undefined8 *)(unaff_x22 + 0x9b0) = 0;
            *(undefined **)(unaff_x22 + 0x9b8) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x9c8) = 0;
            *(undefined8 *)(unaff_x22 + 0x9c0) = 0;
            *(undefined8 *)(unaff_x22 + 0x9d0) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x9d8) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x9e0) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x9e8) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x9f0) = 0x2d0;
            FUN_1005bf638(unaff_x22 + 0x3f8,unaff_x22 + 0x938);
            FUN_1004eaa3c(unaff_x22 + 0x998);
            (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x3f8,uVar36);
            FUN_1004eaa3c(unaff_x22 + 0x3f8);
            _swift_release(uVar15);
            _swift_errorRelease(lVar19);
            FUN_1009d8704(puVar12);
            FUN_100004594(unaff_x22 + 0x1408);
          }
          else {
            _swift_release();
            _swift_errorRelease(lVar19);
            FUN_1009d8704(puVar12);
          }
          FUN_1009d7d7c(puVar35);
          FUN_1009d7d7c(puVar28);
          goto LAB_1009d2278;
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1700);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1718);
        lVar20 = *(long *)(unaff_x22 + 0x1720);
        FUN_100004640(unaff_x22 + 0x1700,uVar32);
        (**(code **)(lVar20 + 0x70))(uVar32,lVar20);
        FUN_100004594(unaff_x22 + 0x1700);
        if (((uint)uVar32 & 0xff) < 2) {
          lVar21 = *(long *)(unaff_x22 + 0x1a10);
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1750);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1768);
          lVar20 = *(long *)(unaff_x22 + 6000);
          FUN_100004640();
          puVar5 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar34 = (char *)0xa0;
          pcVar18 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 4;
          *(undefined8 *)(puVar5 + 0x10) = 2;
          uVar32 = *(undefined8 *)(lVar21 + 0xb0);
          *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
          *(undefined8 *)(puVar5 + 0x28) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x18f8) = 0;
          *(undefined8 *)(unaff_x22 + 0x1900) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar50.bridgeObject = pcVar18;
          SVar50.str = pcVar34;
          Swift::String::reserveCapacity(2,SVar50);
          *(undefined8 *)(unaff_x22 + 0x1908) = *(undefined8 *)(unaff_x22 + 0x18f8);
          *(undefined8 *)(unaff_x22 + 0x1910) = *(undefined8 *)(unaff_x22 + 0x1900);
          pcVar34 = (*(String *)(unaff_x22 + 0x1170)).bridgeObject;
          SVar65.bridgeObject = in_x3;
          SVar65.str = pcVar18;
          Swift::String::write(*(String *)(unaff_x22 + 0x1170),SVar65);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1910);
          *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1908);
          *(undefined8 *)(puVar5 + 0x38) = uVar32;
          puVar5[0x58] = 0;
          uVar32 = *(undefined8 *)(lVar21 + 0xd0);
          *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(lVar21 + 200);
          *(undefined8 *)(puVar5 + 0x68) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x18e8) = 0;
          *(undefined8 *)(unaff_x22 + 0x18f0) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar51.bridgeObject = pcVar18;
          SVar51.str = pcVar34;
          Swift::String::reserveCapacity(2,SVar51);
          *(undefined8 *)(unaff_x22 + 0x12b0) = *(undefined8 *)(unaff_x22 + 0x18e8);
          *(undefined8 *)(unaff_x22 + 0x12b8) = *(undefined8 *)(unaff_x22 + 0x18f0);
          *(undefined8 *)(unaff_x22 + 0x12c0) = 0;
          *(undefined8 *)(unaff_x22 + 0x12d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x12c8) = 0;
          *(undefined1 *)(unaff_x22 + 0x12d8) = 0;
          _swift_getErrorValue(lVar19,unaff_x22 + 0x19e8,unaff_x22 + 0x1840);
          FUN_1005c4024(0x12b0,*(undefined8 *)(unaff_x22 + 0x1840),
                        *(undefined8 *)(unaff_x22 + 0x1848));
          uVar32 = *(undefined8 *)(unaff_x22 + 0x12b8);
          *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x12b0);
          *(undefined8 *)(puVar5 + 0x78) = uVar32;
          puVar5[0x98] = 0;
          puVar6 = puVar5;
          FUN_1009d858c();
          _swift_setDeallocating(puVar5);
          puVar7 = &DAT_100ff3480;
          FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
          _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
          _swift_deallocClassInstance(puVar5,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x398) = 1;
          *(undefined8 *)(unaff_x22 + 0x3a0) = 0xd000000000000060;
          *(undefined8 *)(unaff_x22 + 0x3a8) = 0x8000000100db75b0;
          *(undefined8 *)(unaff_x22 + 0x3b0) = 0;
          *(undefined **)(unaff_x22 + 0x3b8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x3c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x3c0) = 0;
          *(undefined8 *)(unaff_x22 + 0x3d0) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x3d8) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0x3e0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 1000) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x3f0) = 0x2c5;
          *(undefined1 *)(unaff_x22 + 0xa58) = 1;
          *(undefined8 *)(unaff_x22 + 0xa60) = 0xd000000000000060;
          *(undefined8 *)(unaff_x22 + 0xa68) = 0x8000000100db75b0;
          *(undefined8 *)(unaff_x22 + 0xa70) = 0;
          *(undefined **)(unaff_x22 + 0xa78) = puVar6;
          *(undefined8 *)(unaff_x22 + 0xa88) = 0;
          *(undefined8 *)(unaff_x22 + 0xa80) = 0;
          *(undefined8 *)(unaff_x22 + 0xa90) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xa98) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xaa0) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xaa8) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xab0) = 0x2c5;
          FUN_1005bf638(unaff_x22 + 0x398,unaff_x22 + 0x9f8);
          FUN_1004eaa3c(unaff_x22 + 0xa58);
          (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x398,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x398);
          _swift_errorRelease(lVar19);
          FUN_1009d8704(puVar12);
          FUN_100004594(unaff_x22 + 0x1750);
        }
        else {
          _swift_errorRelease(lVar19);
          FUN_1009d8704(puVar12);
        }
      }
      else {
        if (uVar37 == *(ulong *)(unaff_x22 + 0x1a40)) {
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1570);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1588);
          lVar20 = *(long *)(unaff_x22 + 0x1590);
          FUN_100004640(unaff_x22 + 0x1570,uVar32);
          (**(code **)(lVar20 + 0x70))(uVar32,lVar20);
          FUN_100004594(unaff_x22 + 0x1570);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1a48);
          if (((uint)uVar32 & 0xff) < 2) {
            lVar21 = *(long *)(unaff_x22 + 0x1a10);
            FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x15c0);
            uVar36 = *(undefined8 *)(unaff_x22 + 0x15d8);
            lVar20 = *(long *)(unaff_x22 + 0x15e0);
            FUN_100004640();
            puVar5 = &DAT_100ff3478;
            FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
            pcVar34 = (char *)0xa0;
            pcVar18 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar5 + 0x18) = 4;
            *(undefined8 *)(puVar5 + 0x10) = 2;
            uVar32 = *(undefined8 *)(lVar21 + 0xb0);
            *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
            *(undefined8 *)(puVar5 + 0x28) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x1948) = 0;
            *(undefined8 *)(unaff_x22 + 0x1950) = 0xe000000000000000;
            _swift_bridgeObjectRetain();
            SVar52.bridgeObject = pcVar18;
            SVar52.str = pcVar34;
            Swift::String::reserveCapacity(2,SVar52);
            *(undefined8 *)(unaff_x22 + 0x1958) = *(undefined8 *)(unaff_x22 + 0x1948);
            *(undefined8 *)(unaff_x22 + 0x1960) = *(undefined8 *)(unaff_x22 + 0x1950);
            pcVar34 = (*(String *)(unaff_x22 + 0x1170)).bridgeObject;
            SVar66.bridgeObject = in_x3;
            SVar66.str = pcVar18;
            Swift::String::write(*(String *)(unaff_x22 + 0x1170),SVar66);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x1960);
            *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1958);
            *(undefined8 *)(puVar5 + 0x38) = uVar32;
            puVar5[0x58] = 0;
            uVar32 = *(undefined8 *)(lVar21 + 0xd0);
            *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(lVar21 + 200);
            *(undefined8 *)(puVar5 + 0x68) = uVar32;
            *(undefined8 *)(unaff_x22 + 0x1938) = 0;
            *(undefined8 *)(unaff_x22 + 0x1940) = 0xe000000000000000;
            _swift_bridgeObjectRetain();
            SVar53.bridgeObject = pcVar18;
            SVar53.str = pcVar34;
            Swift::String::reserveCapacity(2,SVar53);
            *(undefined8 *)(unaff_x22 + 0x12e0) = *(undefined8 *)(unaff_x22 + 0x1938);
            *(undefined8 *)(unaff_x22 + 0x12e8) = *(undefined8 *)(unaff_x22 + 0x1940);
            *(undefined8 *)(unaff_x22 + 0x12f0) = 0;
            *(undefined8 *)(unaff_x22 + 0x1300) = 0;
            *(undefined8 *)(unaff_x22 + 0x12f8) = 0;
            *(undefined1 *)(unaff_x22 + 0x1308) = 0;
            _swift_getErrorValue(lVar19,unaff_x22 + 0x19d8,unaff_x22 + 0x1810);
            FUN_1005c4024(0x12e0,*(undefined8 *)(unaff_x22 + 0x1810),
                          *(undefined8 *)(unaff_x22 + 0x1818));
            uVar32 = *(undefined8 *)(unaff_x22 + 0x12e8);
            *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x12e0);
            *(undefined8 *)(puVar5 + 0x78) = uVar32;
            puVar5[0x98] = 0;
            puVar6 = puVar5;
            FUN_1009d858c();
            _swift_setDeallocating(puVar5);
            puVar7 = &DAT_100ff3480;
            FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
            _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
            _swift_deallocClassInstance(puVar5,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x338) = 1;
            *(undefined8 *)(unaff_x22 + 0x340) = 0xd00000000000004b;
            *(undefined8 *)(unaff_x22 + 0x348) = 0x8000000100db7620;
            *(undefined8 *)(unaff_x22 + 0x350) = 0;
            *(undefined **)(unaff_x22 + 0x358) = puVar6;
            *(undefined8 *)(unaff_x22 + 0x368) = 0;
            *(undefined8 *)(unaff_x22 + 0x360) = 0;
            *(undefined8 *)(unaff_x22 + 0x370) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0x378) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0x380) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0x388) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0x390) = 0x2e8;
            *(undefined1 *)(unaff_x22 + 0xb18) = 1;
            *(undefined8 *)(unaff_x22 + 0xb20) = 0xd00000000000004b;
            *(undefined8 *)(unaff_x22 + 0xb28) = 0x8000000100db7620;
            *(undefined8 *)(unaff_x22 + 0xb30) = 0;
            *(undefined **)(unaff_x22 + 0xb38) = puVar6;
            *(undefined8 *)(unaff_x22 + 0xb48) = 0;
            *(undefined8 *)(unaff_x22 + 0xb40) = 0;
            *(undefined8 *)(unaff_x22 + 0xb50) = 0xd000000000000023;
            *(undefined8 *)(unaff_x22 + 0xb58) = 0x8000000100db72d0;
            *(undefined8 *)(unaff_x22 + 0xb60) = 0xd000000000000054;
            *(undefined8 *)(unaff_x22 + 0xb68) = 0x8000000100db7440;
            *(undefined8 *)(unaff_x22 + 0xb70) = 0x2e8;
            FUN_1005bf638(unaff_x22 + 0x338,unaff_x22 + 0xab8);
            FUN_1004eaa3c(unaff_x22 + 0xb18);
            (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x338,uVar36);
            FUN_1004eaa3c(unaff_x22 + 0x338);
            _swift_release(uVar15);
            _swift_errorRelease(lVar19);
            FUN_1009d8704(puVar12);
            lVar19 = 0x15c0;
            goto LAB_1009d4364;
          }
          _swift_release();
          _swift_errorRelease(lVar19);
LAB_1009d319c:
          FUN_1009d8704(puVar12);
          goto LAB_1009d436c;
        }
        FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1340);
        uVar32 = *(undefined8 *)(unaff_x22 + 0x1358);
        lVar20 = *(long *)(unaff_x22 + 0x1360);
        FUN_100004640(unaff_x22 + 0x1340,uVar32);
        (**(code **)(lVar20 + 0x70))(uVar32,lVar20);
        FUN_100004594(unaff_x22 + 0x1340);
        if (((uint)uVar32 & 0xff) < 2) {
          lVar21 = *(long *)(unaff_x22 + 0x1a10);
          FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1458);
          uVar15 = *(undefined8 *)(unaff_x22 + 0x1470);
          lVar20 = *(long *)(unaff_x22 + 0x1478);
          FUN_100004640();
          puVar5 = &DAT_100ff3478;
          FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
          pcVar34 = (char *)0xa0;
          pcVar18 = (char *)0x7;
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 4;
          *(undefined8 *)(puVar5 + 0x10) = 2;
          uVar32 = *(undefined8 *)(lVar21 + 0xb0);
          *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
          *(undefined8 *)(puVar5 + 0x28) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x1898) = 0;
          *(undefined8 *)(unaff_x22 + 0x18a0) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar54.bridgeObject = pcVar18;
          SVar54.str = pcVar34;
          Swift::String::reserveCapacity(2,SVar54);
          *(undefined8 *)(unaff_x22 + 0x1998) = *(undefined8 *)(unaff_x22 + 0x1898);
          *(undefined8 *)(unaff_x22 + 0x19a0) = *(undefined8 *)(unaff_x22 + 0x18a0);
          pcVar34 = (*(String *)(unaff_x22 + 0x1170)).bridgeObject;
          SVar67.bridgeObject = in_x3;
          SVar67.str = pcVar18;
          Swift::String::write(*(String *)(unaff_x22 + 0x1170),SVar67);
          uVar32 = *(undefined8 *)(unaff_x22 + 0x19a0);
          *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1998);
          *(undefined8 *)(puVar5 + 0x38) = uVar32;
          puVar5[0x58] = 0;
          uVar32 = *(undefined8 *)(lVar21 + 0xd0);
          *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(lVar21 + 200);
          *(undefined8 *)(puVar5 + 0x68) = uVar32;
          *(undefined8 *)(unaff_x22 + 0x19a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x19b0) = 0xe000000000000000;
          _swift_bridgeObjectRetain();
          SVar55.bridgeObject = pcVar18;
          SVar55.str = pcVar34;
          Swift::String::reserveCapacity(2,SVar55);
          *(undefined8 *)(unaff_x22 + 0x1310) = *(undefined8 *)(unaff_x22 + 0x19a8);
          *(undefined8 *)(unaff_x22 + 0x1318) = *(undefined8 *)(unaff_x22 + 0x19b0);
          *(undefined8 *)(unaff_x22 + 0x1320) = 0;
          *(undefined8 *)(unaff_x22 + 0x1330) = 0;
          *(undefined8 *)(unaff_x22 + 0x1328) = 0;
          *(undefined1 *)(unaff_x22 + 0x1338) = 0;
          _swift_getErrorValue(lVar19,unaff_x22 + 0x19c8,unaff_x22 + 0x1870);
          FUN_1005c4024(0x1310,*(undefined8 *)(unaff_x22 + 0x1870),
                        *(undefined8 *)(unaff_x22 + 0x1878));
          uVar32 = *(undefined8 *)(unaff_x22 + 0x1318);
          *(undefined8 *)(puVar5 + 0x70) = *(undefined8 *)(unaff_x22 + 0x1310);
          *(undefined8 *)(puVar5 + 0x78) = uVar32;
          puVar5[0x98] = 0;
          puVar6 = puVar5;
          FUN_1009d858c();
          _swift_setDeallocating(puVar5);
          puVar7 = &DAT_100ff3480;
          FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
          _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
          _swift_deallocClassInstance(puVar5,0x20,7);
          *(undefined1 *)(unaff_x22 + 0x2d8) = 1;
          *(undefined8 *)(unaff_x22 + 0x2e0) = 0xd000000000000060;
          *(undefined8 *)(unaff_x22 + 0x2e8) = 0x8000000100db75b0;
          *(undefined8 *)(unaff_x22 + 0x2f0) = 0;
          *(undefined **)(unaff_x22 + 0x2f8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0x308) = 0;
          *(undefined8 *)(unaff_x22 + 0x300) = 0;
          *(undefined8 *)(unaff_x22 + 0x310) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0x318) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 800) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0x328) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0x330) = 0x2dd;
          *(undefined1 *)(unaff_x22 + 0xbd8) = 1;
          *(undefined8 *)(unaff_x22 + 0xbe0) = 0xd000000000000060;
          *(undefined8 *)(unaff_x22 + 0xbe8) = 0x8000000100db75b0;
          *(undefined8 *)(unaff_x22 + 0xbf0) = 0;
          *(undefined **)(unaff_x22 + 0xbf8) = puVar6;
          *(undefined8 *)(unaff_x22 + 0xc08) = 0;
          *(undefined8 *)(unaff_x22 + 0xc00) = 0;
          *(undefined8 *)(unaff_x22 + 0xc10) = 0xd000000000000023;
          *(undefined8 *)(unaff_x22 + 0xc18) = 0x8000000100db72d0;
          *(undefined8 *)(unaff_x22 + 0xc20) = 0xd000000000000054;
          *(undefined8 *)(unaff_x22 + 0xc28) = 0x8000000100db7440;
          *(undefined8 *)(unaff_x22 + 0xc30) = 0x2dd;
          FUN_1005bf638(unaff_x22 + 0x2d8,unaff_x22 + 0xb78);
          FUN_1004eaa3c(unaff_x22 + 0xbd8);
          (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x2d8,uVar15);
          FUN_1004eaa3c(unaff_x22 + 0x2d8);
          _swift_errorRelease(lVar19);
          FUN_1009d8704(puVar12);
          FUN_100004594(unaff_x22 + 0x1458);
        }
        else {
          _swift_errorRelease(lVar19);
          FUN_1009d8704(puVar12);
        }
        local_c8 = *(long *)(unaff_x22 + 0x1a60);
      }
      FUN_1009d7d7c(puVar35);
LAB_1009d4dd4:
      *(undefined8 **)(unaff_x22 + 0x1a68) = local_98;
      *(long *)(unaff_x22 + 0x1a60) = local_c8;
      uVar32 = *(undefined8 *)(unaff_x22 + 0x1a58);
      if (*(char *)(unaff_x22 + 0x104a) == '\x01') {
        plVar13 = (long *)(ulong)*(uint *)(PTR__next_100eaedc0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1a70) = plVar13;
        FUN_1000f7830(&DAT_100ff3490,&DAT_100c8c868);
        *plVar13 = unaff_x22;
        plVar13[1] = (long)FUN_1009d20c0;
        Swift::ThrowingTaskGroup::_next(TVar29);
        return;
      }
      _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x1a10));
      UVar14 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_1009d212c,UVar14.unknown,uVar32);
      return;
    }
    FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1728);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1740);
    lVar20 = *(long *)(unaff_x22 + 0x1748);
    FUN_100004640(unaff_x22 + 0x1728,uVar32);
    (**(code **)(lVar20 + 0x70))(uVar32,lVar20);
    FUN_100004594(unaff_x22 + 0x1728);
    if (((uint)uVar32 & 0xff) < 2) {
      lVar21 = *(long *)(unaff_x22 + 0x1a10);
      FUN_100076688(*(long *)(unaff_x22 + 0x1a30) + 0x20,unaff_x22 + 0x1688);
      uVar15 = *(undefined8 *)(unaff_x22 + 0x16a0);
      lVar20 = *(long *)(unaff_x22 + 0x16a8);
      FUN_100004640();
      puVar5 = &DAT_100ff3478;
      FUN_1000f7830(&DAT_100ff3478,&DAT_100c8c830);
      pcVar34 = (char *)0xa0;
      pcVar18 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 4;
      *(undefined8 *)(puVar5 + 0x10) = 2;
      uVar32 = *(undefined8 *)(lVar21 + 0xb0);
      *(undefined8 *)(puVar5 + 0x20) = *(undefined8 *)(lVar21 + 0xa8);
      *(undefined8 *)(puVar5 + 0x28) = uVar32;
      _swift_bridgeObjectRetain();
      SVar43.bridgeObject = pcVar18;
      SVar43.str = pcVar34;
      Swift::String::reserveCapacity(2,SVar43);
      pcVar34 = (*(String *)(unaff_x22 + 0x1170)).bridgeObject;
      SVar58.bridgeObject = in_x3;
      SVar58.str = pcVar18;
      Swift::String::write(*(String *)(unaff_x22 + 0x1170),SVar58);
      *(undefined8 *)(puVar5 + 0x30) = 0;
      *(undefined8 *)(puVar5 + 0x38) = 0xe000000000000000;
      puVar5[0x58] = 0;
      uVar32 = *(undefined8 *)(lVar21 + 0xd0);
      *(undefined8 *)(puVar5 + 0x60) = *(undefined8 *)(lVar21 + 200);
      *(undefined8 *)(puVar5 + 0x68) = uVar32;
      _swift_bridgeObjectRetain();
      SVar44.bridgeObject = pcVar18;
      SVar44.str = pcVar34;
      Swift::String::reserveCapacity(2,SVar44);
      _swift_getErrorValue(lVar19,unaff_x22 + 0x19d0,unaff_x22 + 0x1858);
      FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x1858),*(undefined8 *)(unaff_x22 + 0x1860));
      *(undefined8 *)(puVar5 + 0x70) = 0;
      *(undefined8 *)(puVar5 + 0x78) = 0xe000000000000000;
      puVar5[0x98] = 0;
      puVar6 = puVar5;
      FUN_1009d858c();
      _swift_setDeallocating(puVar5);
      puVar7 = &DAT_100ff3480;
      FUN_1000f7830(&DAT_100ff3480,&DAT_100c8c838);
      _swift_arrayDestroy(puVar5 + 0x20,2,puVar7);
      _swift_deallocClassInstance(puVar5,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x458) = 1;
      *(undefined8 *)(unaff_x22 + 0x460) = 0xd00000000000003f;
      *(undefined8 *)(unaff_x22 + 0x468) = 0x8000000100db7670;
      *(undefined8 *)(unaff_x22 + 0x470) = 0;
      *(undefined **)(unaff_x22 + 0x478) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x488) = 0;
      *(undefined8 *)(unaff_x22 + 0x480) = 0;
      *(undefined8 *)(unaff_x22 + 0x490) = 0xd000000000000023;
      *(undefined8 *)(unaff_x22 + 0x498) = 0x8000000100db72d0;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0xd000000000000054;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0x8000000100db7440;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0x2b3;
      *(undefined1 *)(unaff_x22 + 0x8d8) = 1;
      *(undefined8 *)(unaff_x22 + 0x8e0) = 0xd00000000000003f;
      *(undefined8 *)(unaff_x22 + 0x8e8) = 0x8000000100db7670;
      *(undefined8 *)(unaff_x22 + 0x8f0) = 0;
      *(undefined **)(unaff_x22 + 0x8f8) = puVar6;
      *(undefined8 *)(unaff_x22 + 0x908) = 0;
      *(undefined8 *)(unaff_x22 + 0x900) = 0;
      *(undefined8 *)(unaff_x22 + 0x910) = 0xd000000000000023;
      *(undefined8 *)(unaff_x22 + 0x918) = 0x8000000100db72d0;
      *(undefined8 *)(unaff_x22 + 0x920) = 0xd000000000000054;
      *(undefined8 *)(unaff_x22 + 0x928) = 0x8000000100db7440;
      *(undefined8 *)(unaff_x22 + 0x930) = 0x2b3;
      FUN_1005bf638(unaff_x22 + 0x458,unaff_x22 + 0x878);
      FUN_1004eaa3c(unaff_x22 + 0x8d8);
      (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x458,uVar15);
      FUN_1004eaa3c(unaff_x22 + 0x458);
      FUN_100004594(unaff_x22 + 0x1688);
    }
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1a60);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1a48);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x1a20);
    uVar38 = *(undefined8 *)(unaff_x22 + 0x1a18);
    TVar29.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x1a00);
    FUN_1000f7830(&DAT_100ff3200,&DAT_100c8c610);
    Swift::ThrowingTaskGroup::cancelAll(TVar29);
    _swift_willThrow();
    _swift_release(uVar38);
    _swift_bridgeObjectRelease(uVar36);
    _swift_release(uVar15);
LAB_1009d3b20:
    _swift_errorRelease(uVar32);
    FUN_1009d8704(puVar12);
    FUN_1009d7d7c(puVar35);
    FUN_1009d7d7c(puVar28);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_1009d3b44:
                    /* WARNING: Could not recover jumptable at 0x0001009d3b60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


