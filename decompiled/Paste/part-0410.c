/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100513660 | FUN_100513660 */

void FUN_100513660(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
                    /* WARNING: Could not recover jumptable at 0x0001005136c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005136c8 | FUN_1005136c8 */

void FUN_1005136c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
  _swift_release(*(undefined8 *)(unaff_x22 + 200));
  _swift_release(uVar1);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0xa8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100513730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100513738 | FUN_100513738 */

void FUN_100513738(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  SendCompletion SVar3;
  undefined *puVar4;
  undefined7 extraout_var;
  ContentContext *pCVar6;
  undefined **ppuVar7;
  ContentContext *pCVar8;
  ContentContext *pCVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar12;
  NWConnection *this;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ContentContext *local_100 [4];
  undefined **local_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined *local_a8 [3];
  undefined8 local_90;
  undefined1 auStack_80 [32];
  long lVar5;
  
  puVar4 = &DAT_100fcdf58;
  local_d0 = param_4;
  local_c8 = param_1;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar13 = *(long *)(puVar4 + -8);
  lVar18 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar18 + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)local_100 - extraout_x8;
  SVar3 = Network::NWConnection::SendCompletion::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar3.value);
  lVar17 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  puVar15 = (undefined8 *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  _swift_beginAccess(param_2 + 0x10,auStack_80,0,0);
  pCVar6 = (ContentContext *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  lVar2 = _TtC3MCP16NetworkTransport::connection;
  if (pCVar6 == (ContentContext *)0x0) {
    FUN_1004db3ac();
    puVar11 = &DAT_100eda9c8;
    _swift_allocError(&DAT_100eda9c8,pCVar6,0,0);
    *(undefined8 *)pCVar6 = 0xd000000000000015;
    *(undefined8 *)(pCVar6 + 8) = 0x8000000100dace80;
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    pCVar6[0x18] = (ContentContext)0x4;
    local_a8[0] = puVar11;
    Swift::CheckedContinuation::resume(local_a8,puVar4);
  }
  else {
    local_d8 = lVar17;
    _swift_beginAccess(pCVar6 + _TtC3MCP16NetworkTransport::connection,auStack_c0,0,0);
    local_100[0] = pCVar6;
    FUN_100076688(pCVar6 + lVar2,local_a8);
    ppuVar7 = local_a8;
    FUN_100004640(ppuVar7,local_90);
    pCVar9 = (ContentContext *)*param_3;
    uVar1 = param_3[1];
    local_100[2] = (ContentContext *)uVar1;
    local_100[3] = pCVar9;
    local_e0 = ppuVar7;
    pCVar8 = Network::NWConnection::ContentContext::typeMetadataAccessor();
    FUN_1001037b4(pCVar9,uVar1);
    local_100[1] = Network::NWConnection::ContentContext::get_defaultMessage(pCVar8,pCVar9);
    puVar11 = &DAT_100edc418;
    _swift_allocObject(&DAT_100edc418,0x18,7);
    _swift_weakInit(puVar11 + 0x10,pCVar6);
    (**(code **)(lVar13 + 0x10))(lVar16,local_c8,puVar4);
    uVar1 = local_d0;
    uVar12 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar14 = uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff);
    puVar10 = &DAT_100edc788;
    _swift_allocObject(&DAT_100edc788,uVar14 + lVar18,uVar12 | 7);
    *(undefined **)(puVar10 + 0x10) = puVar11;
    *(undefined8 *)(puVar10 + 0x18) = uVar1;
    (**(code **)(lVar13 + 0x20))(puVar10 + uVar14,lVar16,puVar4);
    *puVar15 = FUN_10051c38c;
    puVar15[1] = puVar10;
    lVar2 = local_d8;
    (**(code **)(local_d8 + 0x68))
              (puVar15,*(undefined4 *)
                        PTR___enum_case_for_Network_NWConnection_SendCompletion_contentProcessed_Network_NWConnection_SendCompletion_Type___>___Network_NWError____>______>_Network_NWConnection_SendCompletion_100eaa028
               ,lVar5);
    this = (NWConnection *)*local_e0;
    _swift_retain(puVar11);
    _swift_retain(uVar1);
    pCVar8 = local_100[3];
    pCVar9 = local_100[2];
    pCVar6 = local_100[1];
    Network::NWConnection::_send
              (this,local_100[3],SUB81(local_100[2],0),(SendCompletion)(__int8)local_100[1]);
    _swift_release(pCVar6);
    FUN_10003bf2c(pCVar8,pCVar9);
    _swift_release(local_100[0]);
    (**(code **)(lVar2 + 8))(puVar15,lVar5);
    _swift_release(puVar11);
    FUN_100004594(local_a8);
  }
  return;
}



/* Address: 0x100513a04 | FUN_100513a04 */

void FUN_100513a04(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  TaskPriority TVar7;
  MainActor *this;
  MainActor *pMVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined1 *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a0 [8];
  long local_98;
  long local_90;
  MainActor *local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100fcdf58;
  local_88 = (MainActor *)param_4;
  local_80 = param_3;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar15 = *(long *)(puVar4 + -8);
  lVar14 = *(long *)(lVar15 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar14 + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_a0 + -extraout_x8;
  puVar5 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  lVar11 = *(long *)(puVar5 + -8);
  lVar17 = *(long *)(lVar11 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar17 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)puVar16 - extraout_x8_00;
  puVar5 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  pMVar6 = (MainActor *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  if (pMVar6 != (MainActor *)0x0) {
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    local_90 = lVar10 - extraout_x8_01;
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar10 - extraout_x8_01,1,1,TVar7.unknown);
    local_98 = lVar10;
    FUN_1000f8cac(param_1,lVar10,&DAT_100fce2f0,&DAT_100c54780);
    (**(code **)(lVar15 + 0x10))(puVar16,local_88,puVar4);
    this = Swift::MainActor::typeMetadataAccessor();
    uVar3 = local_80;
    puVar9 = PTR_typeMetadataAccessor_100eaec10;
    _swift_retain(local_80);
    pMVar8 = pMVar6;
    _swift_retain();
    local_88 = Swift::MainActor::get_shared(this,pMVar8);
    puVar5 = &DAT_100fce2f8;
    FUN_100003a00(&DAT_100fce2f8,puVar9,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    bVar1 = *(byte *)(lVar11 + 0x50);
    uVar12 = (ulong)bVar1 + 0x28 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    uVar18 = lVar17 + uVar12 + 7 & 0xfffffffffffffff8;
    bVar2 = *(byte *)(lVar15 + 0x50);
    uVar13 = bVar2 + uVar18 + 8 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar9 = &DAT_100edc7b0;
    _swift_allocObject(&DAT_100edc7b0,uVar13 + lVar14,bVar1 | bVar2 | 7);
    *(MainActor **)(puVar9 + 0x10) = local_88;
    *(undefined **)(puVar9 + 0x18) = puVar5;
    *(undefined8 *)(puVar9 + 0x20) = uVar3;
    FUN_10051bf38(local_98,puVar9 + uVar12);
    *(MainActor **)(puVar9 + uVar18) = pMVar6;
    (**(code **)(lVar15 + 0x20))(puVar9 + uVar13,puVar16,puVar4);
    FUN_1004e9c98(0,0,local_90,&DAT_100c547d0,puVar9);
    _swift_release();
    _swift_release(pMVar6);
  }
  return;
}



/* Address: 0x100513c84 | FUN_100513c84 */

void FUN_100513c84(void)

{
  undefined *puVar1;
  NWError NVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined7 extraout_var;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x358) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x350) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x348) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x340) = in_x3;
  puVar3 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x360) = uVar4;
  puVar3 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x368) = uVar4;
  NVar2 = Network::NWError::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x370) = CONCAT71(extraout_var,NVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,NVar2.value) + -8);
  *(long *)(unaff_x22 + 0x378) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x380) = uVar4;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  *(MainActor **)(unaff_x22 + 0x388) = pMVar5;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x390) = pMVar5;
  puVar3 = &DAT_100fce2f8;
  FUN_100003a00(&DAT_100fce2f8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined **)(unaff_x22 + 0x398) = puVar3;
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x3a0) = UVar6.unknown;
  *(undefined **)(unaff_x22 + 0x3a8) = puVar3;
  _swift_task_switch(FUN_100513dac,UVar6.unknown,puVar3);
  return;
}



/* Address: 0x100513dac | FUN_100513dac */

void FUN_100513dac(void)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  DefaultStringInterpolation stringInterpolation;
  long lVar6;
  long unaff_x22;
  long lVar7;
  String SVar8;
  String SVar9;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x340) + 0x10) & 1) == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x378);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x368);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x348);
    *(undefined1 *)(*(long *)(unaff_x22 + 0x340) + 0x10) = 1;
    FUN_1000f8cac(uVar3,uVar5,&DAT_100fce2f0,&DAT_100c54780);
    (**(code **)(lVar6 + 0x30))(uVar5,1,uVar4);
    if ((int)uVar5 != 1) {
      lVar6 = *(long *)(unaff_x22 + 0x350);
      (**(code **)(*(long *)(unaff_x22 + 0x378) + 0x20))
                (*(undefined8 *)(unaff_x22 + 0x380),*(undefined8 *)(unaff_x22 + 0x368),
                 *(undefined8 *)(unaff_x22 + 0x370));
      lVar7 = *(long *)(lVar6 + _TtC3MCP16NetworkTransport::logger);
      *(long *)(unaff_x22 + 0x3b0) = lVar7;
      pcVar1 = (char *)0x0;
      pvVar2 = (void *)0x0;
      _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x2f0);
      FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x250);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x268);
      lVar6 = *(long *)(unaff_x22 + 0x270);
      FUN_100004640(unaff_x22 + 0x250,uVar3);
      (**(code **)(lVar6 + 0x70))(uVar3,lVar6);
      FUN_100004594(unaff_x22 + 0x250);
      if (((uint)uVar3 & 0xff) < 6) {
        uVar5 = *(undefined8 *)(unaff_x22 + 0x380);
        uVar4 = *(undefined8 *)(unaff_x22 + 0x370);
        FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x278);
        uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
        lVar6 = *(long *)(unaff_x22 + 0x298);
        FUN_100004640(unaff_x22 + 0x278,uVar3);
        *(undefined8 *)(unaff_x22 + 0x308) = 0;
        *(undefined8 *)(unaff_x22 + 0x310) = 0xe000000000000000;
        SVar8.bridgeObject = (void *)0xec000000203a726f;
        SVar8.str = (char *)0x72726520646e6553;
        SVar9.bridgeObject = pvVar2;
        SVar9.str = pcVar1;
        Swift::String::append(SVar8,SVar9);
        Swift::__print_unlocked
                  (uVar5,unaff_x22 + 0x308,uVar4,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x308);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
        *(undefined1 *)(unaff_x22 + 0x10) = 5;
        *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x318);
        *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 800);
        *(undefined8 *)(unaff_x22 + 0x30) = 0;
        *(undefined8 *)(unaff_x22 + 0x28) = 0;
        *(undefined8 *)(unaff_x22 + 0x40) = 0;
        *(undefined8 *)(unaff_x22 + 0x38) = 0;
        *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x58) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x68) = 0x217;
        *(undefined1 *)(unaff_x22 + 0xd0) = 5;
        *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x318);
        *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 800);
        *(undefined8 *)(unaff_x22 + 0xf0) = 0;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0;
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        *(undefined8 *)(unaff_x22 + 0xf8) = 0;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x118) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x120) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x128) = 0x217;
        FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x130);
        FUN_1004eaa3c(unaff_x22 + 0xd0);
        (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x10,uVar3,lVar6);
        FUN_1004eaa3c(unaff_x22 + 0x10);
        FUN_100004594(unaff_x22 + 0x278);
      }
      _swift_task_switch(FUN_1005140c4,*(undefined8 *)(unaff_x22 + 0x350),0);
      return;
    }
    uVar3 = *(undefined8 *)(unaff_x22 + 0x368);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
    FUN_1000fb4c4(uVar3,&DAT_100fce2f0,&DAT_100c54780);
    FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
    Swift::CheckedContinuation::resume();
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x360);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x380));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100513eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005140c4 | FUN_1005140c4 */

void FUN_1005140c4(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3b8) = *(undefined1 *)(*(long *)(unaff_x22 + 0x350) + 0x71);
  _swift_task_switch(FUN_1005140e4,*(undefined8 *)(unaff_x22 + 0x3a0),
                     *(undefined8 *)(unaff_x22 + 0x3a8));
  return;
}



/* Address: 0x1005140e4 | FUN_1005140e4 */

void FUN_1005140e4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  
  if ((*(byte *)(unaff_x22 + 0x3b8) & 1) == 0) {
    if (*(char *)(*(long *)(unaff_x22 + 0x350) + _TtC3MCP16NetworkTransport::reconnectionConfig) ==
        '\x01') {
      _swift_task_switch(FUN_100514254,*(long *)(unaff_x22 + 0x350),0);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
  puVar3 = *(undefined8 **)(unaff_x22 + 0x380);
  lVar6 = *(long *)(unaff_x22 + 0x378);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x370);
  *(undefined8 *)(unaff_x22 + 0x328) = 0;
  *(undefined8 *)(unaff_x22 + 0x330) = 0xe000000000000000;
  SVar8.bridgeObject = (void *)0xec000000203a726f;
  SVar8.str = (char *)0x72726520646e6553;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar8,SVar9);
  puVar1 = puVar3;
  Swift::__print_unlocked
            (puVar3,unaff_x22 + 0x328,uVar5,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  uVar4 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x330);
  FUN_1004db3ac();
  puVar2 = &DAT_100eda9c8;
  _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
  *puVar1 = uVar4;
  puVar1[1] = uVar7;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 4;
  *(undefined **)(unaff_x22 + 0x338) = puVar2;
  puVar2 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  Swift::CheckedContinuation::resume(unaff_x22 + 0x338,puVar2);
  (**(code **)(lVar6 + 8))(puVar3,uVar5);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x360);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x380));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100514250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100514254 | FUN_100514254 */

void FUN_100514254(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x3b9) = *(undefined1 *)(*(long *)(unaff_x22 + 0x350) + 0x70);
  _swift_task_switch(FUN_100514274,*(undefined8 *)(unaff_x22 + 0x3a0),
                     *(undefined8 *)(unaff_x22 + 0x3a8));
  return;
}



/* Address: 0x100514274 | FUN_100514274 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100514274(undefined8 param_1,undefined8 param_2,char *param_3,undefined *param_4)

{
  char cVar1;
  undefined *puVar2;
  char *pcVar3;
  NSError *self;
  ID IVar4;
  TaskPriority TVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  MainActor *this;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  
  cVar1 = *(char *)(unaff_x22 + 0x3b9);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x390));
  if (cVar1 == '\x01') {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x380);
    lVar11 = *(long *)(unaff_x22 + 0x378);
    param_3 = *(char **)(unaff_x22 + 0x370);
    puVar2 = &DAT_100fce2d0;
    FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                  PTR_Network__Network__NWError_>Swift__Error_100eaa360);
    param_4 = (undefined *)0x0;
    pcVar3 = param_3;
    _swift_allocError(param_3,puVar2,0);
    (**(code **)(lVar11 + 0x10))(puVar2,uVar10);
    self = Foundation::__convertErrorToNSError();
    _swift_errorRelease(pcVar3);
    IVar4 = objc_stub::code((ID)self);
    if ((IVar4 == 0x39) || (IVar4 = objc_stub::code((ID)self), IVar4 == 0x36)) {
      FUN_100076688(*(long *)(unaff_x22 + 0x3b0) + 0x20,unaff_x22 + 0x2a0);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
      lVar11 = *(long *)(unaff_x22 + 0x2c0);
      FUN_100004640(unaff_x22 + 0x2a0,uVar10);
      (**(code **)(lVar11 + 0x70))(uVar10,lVar11);
      FUN_100004594(unaff_x22 + 0x2a0);
      if (((uint)uVar10 & 0xff) < 5) {
        FUN_100076688(*(long *)(unaff_x22 + 0x3b0) + 0x20,unaff_x22 + 0x2c8);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x2e0);
        lVar11 = *(long *)(unaff_x22 + 0x2e8);
        FUN_100004640(unaff_x22 + 0x2c8,uVar10);
        *(undefined1 *)(unaff_x22 + 0x70) = 4;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000037;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacf50;
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0xc0) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 200) = 0x21f;
        *(undefined1 *)(unaff_x22 + 400) = 4;
        *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000037;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dacf50;
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x1d8) = 0x293a5f28646e6573;
        *(undefined1 **)(unaff_x22 + 0x1e0) = &DAT_e800000000000000;
        *(undefined8 *)(unaff_x22 + 0x1e8) = 0x21f;
        FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x1f0);
        FUN_1004eaa3c(unaff_x22 + 400);
        (**(code **)(lVar11 + 0x28))(unaff_x22 + 0x70,uVar10,lVar11);
        FUN_1004eaa3c(unaff_x22 + 0x70);
        FUN_100004594(unaff_x22 + 0x2c8);
      }
      uVar12 = *(undefined8 *)(unaff_x22 + 0x398);
      this = *(MainActor **)(unaff_x22 + 0x388);
      param_3 = *(char **)(unaff_x22 + 0x360);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
      TVar5 = Swift::TaskPriority::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(param_3,1,1,TVar5.unknown);
      pMVar6 = (MainActor *)&DAT_100edc418;
      _swift_allocObject(&DAT_100edc418,0x18,7);
      _swift_weakInit(pMVar6 + 0x10,uVar10);
      pMVar7 = pMVar6;
      _swift_retain();
      pMVar7 = Swift::MainActor::get_shared(this,pMVar7);
      puVar2 = &DAT_100edc7d8;
      _swift_allocObject(&DAT_100edc7d8,0x28,7);
      *(MainActor **)(puVar2 + 0x10) = pMVar7;
      *(undefined8 *)(puVar2 + 0x18) = uVar12;
      *(MainActor **)(puVar2 + 0x20) = pMVar6;
      _swift_release(pMVar6);
      param_4 = &DAT_100c547e0;
      FUN_1004e9c98(0,0,param_3,&DAT_100c547e0,puVar2);
      _swift_release();
    }
  }
  puVar9 = *(undefined8 **)(unaff_x22 + 0x380);
  lVar11 = *(long *)(unaff_x22 + 0x378);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
  *(undefined8 *)(unaff_x22 + 0x328) = 0;
  *(undefined8 *)(unaff_x22 + 0x330) = 0xe000000000000000;
  SVar14.bridgeObject = (void *)0xec000000203a726f;
  SVar14.str = (char *)0x72726520646e6553;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar14,SVar15);
  puVar8 = puVar9;
  Swift::__print_unlocked
            (puVar9,unaff_x22 + 0x328,uVar12,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  uVar10 = *(undefined8 *)(unaff_x22 + 0x328);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x330);
  FUN_1004db3ac();
  puVar2 = &DAT_100eda9c8;
  _swift_allocError(&DAT_100eda9c8,puVar8,0,0);
  *puVar8 = uVar10;
  puVar8[1] = uVar13;
  puVar8[2] = 0;
  *(undefined1 *)(puVar8 + 3) = 4;
  *(undefined **)(unaff_x22 + 0x338) = puVar2;
  puVar2 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  Swift::CheckedContinuation::resume(unaff_x22 + 0x338,puVar2);
  (**(code **)(lVar11 + 8))(puVar9,uVar12);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x360);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x380));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100514628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10051462c | FUN_10051462c */

void FUN_10051462c(void)

{
  undefined *puVar1;
  ContinuousClock CVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  long lVar7;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = in_x3;
  CVar2 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x70) = CVar2.unknown;
  lVar7 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x78) = lVar7;
  uVar3 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x88) = pMVar4;
  puVar5 = &DAT_100fce2f8;
  FUN_100003a00(&DAT_100fce2f8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x90) = UVar6.unknown;
  *(undefined **)(unaff_x22 + 0x98) = puVar5;
  _swift_task_switch(FUN_1005146e4,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x1005146e4 | FUN_1005146e4 */

void FUN_1005146e4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x68);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x38,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0xa0) = lVar1;
  if (lVar1 != 0) {
    _swift_task_switch(FUN_100514764,lVar1,0);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100514760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100514764 | FUN_100514764 */

void FUN_100514764(void)

{
  long unaff_x22;
  
  *(undefined1 *)(*(long *)(unaff_x22 + 0xa0) + 0x70) = 0;
  _swift_task_switch(FUN_10051477c,*(undefined8 *)(unaff_x22 + 0x90),
                     *(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x10051477c | FUN_10051477c */

void FUN_10051477c(void)

{
  long *plVar1;
  long unaff_x22;
  
  (extension_Swift)::Swift::Clock::_get_continuous();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100514800;
  FUN_10051aec0(500000000000000000,0,0,0,1);
  return;
}



/* Address: 0x100514800 | FUN_100514800 */

void FUN_100514800(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0xa8));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar3 + 0xa0);
    (**(code **)(*(long *)(lVar3 + 0x78) + 8))
              (*(undefined8 *)(lVar3 + 0x80),*(undefined8 *)(lVar3 + 0x70));
    pcVar1 = FUN_1005148c0;
    uVar2 = 0;
  }
  else {
    _swift_errorRelease();
    uVar4 = *(undefined8 *)(lVar3 + 0x90);
    uVar2 = *(undefined8 *)(lVar3 + 0x98);
    pcVar1 = FUN_100514878;
  }
  _swift_task_switch(pcVar1,uVar4,uVar2);
  return;
}



/* Address: 0x100514878 | FUN_100514878 */

void FUN_100514878(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_switch(FUN_1005148c0,uVar1,0);
  return;
}



/* Address: 0x1005148c0 | FUN_1005148c0 */

void FUN_1005148c0(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0xb8) = *(undefined1 *)(*(long *)(unaff_x22 + 0xa0) + 0x71);
  _swift_task_switch(FUN_1005148dc,*(undefined8 *)(unaff_x22 + 0x90),
                     *(undefined8 *)(unaff_x22 + 0x98));
  return;
}



/* Address: 0x1005148dc | FUN_1005148dc */

void FUN_1005148dc(void)

{
  long lVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  
  lVar1 = _TtC3MCP16NetworkTransport::connection;
  if ((*(byte *)(unaff_x22 + 0xb8) & 1) != 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
    _swift_release(uVar4);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100514924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar5 = *(long *)(unaff_x22 + 0xa0);
  _swift_beginAccess(lVar5 + _TtC3MCP16NetworkTransport::connection,unaff_x22 + 0x50,0,0);
  FUN_100076688(lVar5 + lVar1,unaff_x22 + 0x10);
  puVar2 = (undefined8 *)(unaff_x22 + 0x10);
  FUN_100004640(puVar2,*(undefined8 *)(unaff_x22 + 0x28));
  Network::NWConnection::cancel((NWConnection *)*puVar2);
  FUN_100004594(unaff_x22 + 0x10);
  plVar3 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005149a4;
  FUN_10050edf8();
  return;
}



/* Address: 0x1005149a4 | FUN_1005149a4 */

void FUN_1005149a4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xb0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = FUN_100514a04;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    uVar3 = *(undefined8 *)(lVar4 + 0x98);
    pcVar1 = thunk_FUN_100514a04;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x100514a04 | FUN_100514a04 */

void FUN_100514a04(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x000100514a44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100514a48 | FUN_100514a48 */

void FUN_100514a48(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP16NetworkTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
                    /* WARNING: Could not recover jumptable at 0x000100514a98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x100514a9c | FUN_100514a9c */

void FUN_100514a9c(void)

{
  long lVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x12d0) = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100514b00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100514b00 | FUN_100514b00 */

void FUN_100514b00(void)

{
  bool bVar1;
  byte bVar2;
  Task TVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  UnownedSerialExecutor UVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  void *pvVar12;
  long lVar13;
  long unaff_x22;
  String isolation;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar10 = *(long *)(unaff_x22 + 0x12d0);
  *(undefined8 *)(unaff_x22 + 0x11d8) = 0xc000000000000000;
  *(undefined8 *)(unaff_x22 + 0x11d0) = 0;
  lVar9 = _TtC3MCP16NetworkTransport::logger;
  *(undefined8 *)(unaff_x22 + 0x12d8) = _TtC3MCP16NetworkTransport::messageContinuation;
  lVar13 = _TtC3MCP16NetworkTransport::connection;
  *(long *)(unaff_x22 + 0x12e0) = _TtC3MCP16NetworkTransport::connection;
  lVar9 = *(long *)(lVar10 + lVar9);
  *(long *)(unaff_x22 + 0x12e8) = lVar9;
  _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x1080,0,0);
  TVar3.unknown = (undefined *)(lVar10 + lVar13);
  _swift_beginAccess(TVar3.unknown,unaff_x22 + 0x1098,0,0);
  if (*(char *)(lVar10 + 0x70) == '\x01') {
    *(undefined4 *)(unaff_x22 + 0x110c) =
         *(undefined4 *)
          PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
    ;
    *(undefined8 *)(unaff_x22 + 0x12f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x12f0) = 0;
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    lVar13 = CONCAT71(extraout_var,bVar1);
    if (bVar1) goto LAB_100514bc0;
    lVar9 = *(long *)(unaff_x22 + 0x12d0);
    if ((*(byte *)(lVar9 + 0x71) & 1) == 0) {
      FUN_10051b5ec();
      _swift_allocObject();
      *(long *)(unaff_x22 + 0x1300) = lVar13;
      *(undefined1 *)(lVar13 + 0x10) = 0;
      puVar4 = &DAT_100fcdf50;
      FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
      *(undefined **)(unaff_x22 + 0x1308) = puVar4;
      puVar5 = &DAT_100edc418;
      _swift_allocObject(&DAT_100edc418,0x18,7);
      *(undefined **)(unaff_x22 + 0x1310) = puVar5;
      _swift_weakInit(puVar5 + 0x10,lVar9);
      *(undefined **)(unaff_x22 + 0x60) = puVar5;
      *(long *)(unaff_x22 + 0x68) = lVar13;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar2 & 1) == 0) {
        _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x12d0));
        UVar7 = Swift::Actor::get_unownedExecutor();
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
          _swift_task_switch(FUN_100514ff0,UVar7.unknown,puVar4);
          return;
        }
      }
      else {
        pvVar12 = *(void **)(unaff_x22 + 0x12d0);
        plVar6 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1318) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_100514f38;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
          isolation.bridgeObject = pvVar12;
          isolation.str = (char *)(unaff_x22 + 0x1210);
          Swift::_withCheckedThrowingContinuation(isolation);
          return;
        }
      }
      goto LAB_100514f34;
    }
LAB_100514be0:
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar13 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar11);
    (**(code **)(lVar13 + 0x70))(uVar11,lVar13);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar11 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar11 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar13 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar11);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar13 + 0x28))(unaff_x22 + 0x430,uVar11,lVar13);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  else {
LAB_100514bc0:
    if (*(char *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) == '\x01') goto LAB_100514be0;
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100514da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_100514f34:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100514f38 | FUN_100514f38 */

void FUN_100514f38(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1318));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar4 + 0x1310));
    *(undefined8 *)(lVar4 + 0x1320) = 0;
    uVar2 = *(undefined8 *)(lVar4 + 0x12d0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_100514fec;
    pcVar1 = FUN_100515208;
  }
  else {
    *(long *)(lVar4 + 0x1338) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0x12d0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_100514fec:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1005169dc;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100514ff0 | FUN_100514ff0 */

void FUN_100514ff0(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  String function;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1310);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1300);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x1250;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100515138;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar6 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = (void *)0xed00002928617461;
  function.str = (char *)0x4465766965636572;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_10051a31c(uVar2,uVar5,uVar4);
  (**(code **)(lVar6 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100515138 | FUN_100515138 */

void FUN_100515138(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x1250);
    uVar6 = *(undefined8 *)(lVar4 + 0x1258);
    _swift_release(*(undefined8 *)(lVar4 + 0x1310));
    *(undefined8 *)(lVar4 + 0x1210) = uVar2;
    *(undefined8 *)(lVar4 + 0x1218) = uVar6;
    *(undefined8 *)(lVar4 + 0x1320) = *(undefined8 *)(lVar4 + 0x12f0);
    uVar2 = *(undefined8 *)(lVar4 + 0x12d0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_100515204;
    pcVar1 = FUN_100515208;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0x1338) = lVar5;
    uVar2 = *(undefined8 *)(lVar4 + 0x12d0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_100515204:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1005169dc;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100515208 | FUN_100515208 */

void FUN_100515208(undefined8 param_1,undefined8 param_2,char *param_3,Data param_4)

{
  long lVar1;
  code *pcVar2;
  State SVar3;
  bool bVar4;
  byte bVar5;
  undefined8 *puVar6;
  undefined7 extraout_var;
  NWConnection *pNVar7;
  ContinuousClock CVar8;
  undefined *puVar9;
  __DataStorage *p_Var10;
  ulong uVar11;
  __DataStorage *p_Var12;
  __DataStorage *p_Var13;
  undefined *puVar14;
  Iterator IVar15;
  UnsafeMutableBufferPointer<__int8> initializing;
  ulong uVar16;
  undefined7 extraout_var_00;
  long *plVar17;
  UnownedSerialExecutor UVar18;
  _StringGuts _Var19;
  char *pcVar20;
  char *pcVar21;
  void *pvVar22;
  int iVar23;
  long lVar24;
  ulong uVar25;
  void *pvVar26;
  undefined *puVar27;
  undefined8 uVar28;
  void *pvVar29;
  DefaultStringInterpolation DVar30;
  Task TVar31;
  undefined8 uVar32;
  long lVar33;
  long unaff_x22;
  uint uVar34;
  long lVar35;
  long lVar36;
  undefined *puVar37;
  uint uVar38;
  long lVar39;
  Data DVar40;
  int iVar41;
  long lVar42;
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  String SVar46;
  tuple2 tVar47;
  String isolation;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  
  lVar24 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1300));
  TVar31.unknown = *(undefined **)(unaff_x22 + 0x1210);
  *(undefined **)(unaff_x22 + 0x1328) = TVar31.unknown;
  DVar40.unknown = *(undefined **)(unaff_x22 + 0x1218);
  *(undefined **)(unaff_x22 + 0x1330) = DVar40.unknown;
  uVar38 = (uint)((ulong)DVar40.unknown >> 0x20);
  iVar23 = (int)TVar31.unknown;
  iVar41 = (int)((ulong)TVar31.unknown >> 0x20);
  if (uVar38 >> 0x1e < 2) {
    if (uVar38 >> 0x1e == 0) {
      if (((ulong)DVar40.unknown & 0xff000000000000) != 0) {
        uVar25 = (ulong)DVar40.unknown >> 0x30 & 0xff;
        goto LAB_1005156d0;
      }
    }
    else if ((long)iVar23 != (long)TVar31.unknown >> 0x20) goto LAB_100515290;
LAB_1005152bc:
    lVar35 = *(long *)(unaff_x22 + 0x12f8) + 1;
    *(long *)(unaff_x22 + 0x1340) = lVar35;
    if (SCARRY8(*(long *)(unaff_x22 + 0x12f8),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169ac);
      (*pcVar2)();
    }
    if (4 < lVar35) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xe38);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xe50);
      lVar42 = *(long *)(unaff_x22 + 0xe58);
      FUN_100004640(unaff_x22 + 0xe38,uVar28);
      (**(code **)(lVar42 + 0x70))(uVar28,lVar42);
      FUN_100004594(unaff_x22 + 0xe38);
      if (((uint)uVar28 & 0xff) < 5) {
        FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xe60);
        puVar27 = *(undefined **)(unaff_x22 + 0xe78);
        lVar42 = *(long *)(unaff_x22 + 0xe80);
        _Var19.unknown = puVar27;
        FUN_100004640();
        *(undefined8 *)(unaff_x22 + 0x11f0) = 0;
        *(undefined8 *)(unaff_x22 + 0x11f8) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x40,_Var19);
        *(undefined8 *)(unaff_x22 + 0x1200) = *(undefined8 *)(unaff_x22 + 0x11f0);
        *(undefined8 *)(unaff_x22 + 0x1208) = *(undefined8 *)(unaff_x22 + 0x11f8);
        SVar48.bridgeObject = (void *)0x8000000100dacdf0;
        SVar48.str = (char *)0xd000000000000022;
        SVar50.bridgeObject = param_4.unknown;
        SVar50.str = param_3;
        Swift::String::append(SVar48,SVar50);
        *(long *)(unaff_x22 + 0x1298) = lVar35;
        SVar48 = Swift::CustomStringConvertible::get_description();
        SVar51.bridgeObject = param_4.unknown;
        SVar51.str = param_3;
        Swift::String::append(SVar48,SVar51);
        _swift_bridgeObjectRelease(SVar48.bridgeObject);
        SVar46.bridgeObject = (void *)0x8000000100dace20;
        SVar46.str = (char *)0xd00000000000001c;
        SVar52.bridgeObject = param_4.unknown;
        SVar52.str = param_3;
        Swift::String::append(SVar46,SVar52);
        DVar30.unknown = *(undefined **)(unaff_x22 + 0x1200);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar30);
        *(undefined1 *)(unaff_x22 + 400) = 4;
        *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x11e0);
        *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x11e8);
        *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x1d8) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x1e0) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x1e8) = 0x25e;
        *(undefined1 *)(unaff_x22 + 0x6d0) = 4;
        *(undefined8 *)(unaff_x22 + 0x6d8) = *(undefined8 *)(unaff_x22 + 0x11e0);
        *(undefined8 *)(unaff_x22 + 0x6e0) = *(undefined8 *)(unaff_x22 + 0x11e8);
        *(undefined8 *)(unaff_x22 + 0x6f0) = 0;
        *(undefined8 *)(unaff_x22 + 0x6e8) = 0;
        *(undefined8 *)(unaff_x22 + 0x700) = 0;
        *(undefined8 *)(unaff_x22 + 0x6f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x708) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x710) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x718) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x720) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x728) = 0x25e;
        FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x670);
        FUN_1004eaa3c(unaff_x22 + 0x6d0);
        (**(code **)(lVar42 + 0x28))(unaff_x22 + 400,puVar27,lVar42);
        FUN_1004eaa3c(unaff_x22 + 400);
        FUN_100004594(unaff_x22 + 0xe60);
      }
      puVar6 = (undefined8 *)(*(long *)(unaff_x22 + 0x12d0) + *(long *)(unaff_x22 + 0x12e0));
      FUN_100004640(puVar6,puVar6[3]);
      SVar3 = Network::NWConnection::State::typeMetadataAccessor();
      puVar37 = PTR_typeMetadataAccessor_100eaa0c8;
      lVar35 = CONCAT71(extraout_var,SVar3.value);
      lVar42 = *(long *)(lVar35 + -8);
      uVar25 = *(long *)(lVar42 + 0x40) + 0xf;
      pNVar7 = (NWConnection *)(uVar25 & 0xfffffffffffffff0);
      _swift_task_alloc();
      Network::NWConnection::get_state((NWConnection *)*puVar6,pNVar7);
      uVar25 = uVar25 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar25);
      (**(code **)(lVar42 + 0x68))();
      puVar27 = &DAT_100fce2e8;
      FUN_100003a00(&DAT_100fce2e8,puVar37,
                    PTR_Network__Network__NWConnection__State_>Swift__Equatable_100eaa0d8);
      bVar4 = Swift::Equatable::___infix(pNVar7,uVar25,lVar35,puVar27);
      pcVar2 = *(code **)(lVar42 + 8);
      (*pcVar2)(uVar25,lVar35);
      (*pcVar2)(pNVar7,lVar35);
      _swift_task_dealloc(uVar25);
      _swift_task_dealloc(pNVar7);
      if (!bVar4) {
        FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xe88);
        uVar28 = *(undefined8 *)(unaff_x22 + 0xea0);
        lVar35 = *(long *)(unaff_x22 + 0xea8);
        FUN_100004640(unaff_x22 + 0xe88,uVar28);
        (**(code **)(lVar35 + 0x70))(uVar28,lVar35);
        FUN_100004594(unaff_x22 + 0xe88);
        if (((uint)uVar28 & 0xff) < 5) {
          FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xed8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0xef0);
          lVar35 = *(long *)(unaff_x22 + 0xef8);
          FUN_100004640(unaff_x22 + 0xed8,uVar28);
          *(undefined1 *)(unaff_x22 + 0xbb0) = 4;
          *(undefined8 *)(unaff_x22 + 3000) = 0xd000000000000030;
          *(undefined8 *)(unaff_x22 + 0xbc0) = 0x8000000100dace40;
          *(undefined8 *)(unaff_x22 + 0xbd0) = 0;
          *(undefined8 *)(unaff_x22 + 0xbc8) = 0;
          *(undefined8 *)(unaff_x22 + 0xbe0) = 0;
          *(undefined8 *)(unaff_x22 + 0xbd8) = 0;
          *(undefined8 *)(unaff_x22 + 0xbe8) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0xbf0) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0xbf8) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0xc00) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0xc08) = 0x264;
          *(undefined1 *)(unaff_x22 + 0x610) = 4;
          *(undefined8 *)(unaff_x22 + 0x618) = 0xd000000000000030;
          *(undefined8 *)(unaff_x22 + 0x620) = 0x8000000100dace40;
          *(undefined8 *)(unaff_x22 + 0x630) = 0;
          *(undefined8 *)(unaff_x22 + 0x628) = 0;
          *(undefined8 *)(unaff_x22 + 0x640) = 0;
          *(undefined8 *)(unaff_x22 + 0x638) = 0;
          *(undefined8 *)(unaff_x22 + 0x648) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x650) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x658) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0x660) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0x668) = 0x264;
          FUN_1004eaa00(unaff_x22 + 0xbb0,unaff_x22 + 0x70);
          FUN_1004eaa3c(unaff_x22 + 0x610);
          (**(code **)(lVar35 + 0x28))(unaff_x22 + 0xbb0,uVar28,lVar35);
          FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
          FUN_1004eaa3c(unaff_x22 + 0xbb0);
          FUN_100004594(unaff_x22 + 0xed8);
        }
        else {
          FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
        }
        goto LAB_1005163f0;
      }
    }
    CVar8 = Swift::ContinuousClock::typeMetadataAccessor();
    *(undefined **)(unaff_x22 + 0x1348) = CVar8.unknown;
    lVar35 = *(long *)(CVar8.unknown + -8);
    *(long *)(unaff_x22 + 0x1350) = lVar35;
    uVar25 = *(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)(unaff_x22 + 0x1358) = uVar25;
    (extension_Swift)::Swift::Clock::_get_continuous();
    *(undefined8 *)(unaff_x22 + 0x1100) = 0;
    *(undefined8 *)(unaff_x22 + 0x10f8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1268) = 0;
    *(undefined8 *)(unaff_x22 + 0x1260) = 100000000000000000;
    *(undefined1 *)(unaff_x22 + 0x1108) = 1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar24) {
      pcVar2 = FUN_100517a38;
      UVar18.unknown = (undefined *)0x0;
      puVar27 = (undefined *)0x0;
LAB_100515644:
      _swift_task_switch(pcVar2,UVar18.unknown,puVar27);
      return;
    }
    goto LAB_1005169d8;
  }
  if ((uVar38 >> 0x1e != 2) ||
     (*(long *)(TVar31.unknown + 0x10) == *(long *)(TVar31.unknown + 0x18))) goto LAB_1005152bc;
LAB_100515290:
  if ((ulong)DVar40.unknown >> 0x3e == 2) {
    uVar25 = *(long *)(TVar31.unknown + 0x18) - *(long *)(TVar31.unknown + 0x10);
    if (SBORROW8(*(long *)(TVar31.unknown + 0x18),*(long *)(TVar31.unknown + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005152ac);
      (*pcVar2)();
    }
  }
  else {
    if (SBORROW4(iVar41,iVar23)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169c8);
      (*pcVar2)();
    }
    uVar25 = (ulong)(iVar41 - iVar23);
  }
LAB_1005156d0:
  if ((long)uVar25 < 4) {
LAB_100515920:
    Foundation::Data::append((Data)TVar31.unknown,DVar40);
    lVar35 = *(long *)(unaff_x22 + 0x11d0);
    pvVar29 = *(void **)(unaff_x22 + 0x11d8);
    uVar25 = 10;
    lVar42 = lVar35;
    FUN_10051c82c(10,lVar35,pvVar29);
    lVar33 = *(long *)(unaff_x22 + 0x1320);
    if (((uint)lVar42 & 0xff) != 1) {
      puVar6 = (undefined8 *)(unaff_x22 + 0x10e7);
      pvVar26 = pvVar29;
      lVar42 = lVar35;
      do {
        uVar38 = (uint)((ulong)pvVar26 >> 0x20);
        uVar34 = uVar38 >> 0x1e;
        if (uVar38 >> 0x1e < 2) {
          pvVar29 = (void *)((ulong)pvVar26 >> 0x30 & 0xff);
          if (uVar34 != 0) {
            pvVar29 = (void *)(lVar42 >> 0x20);
          }
          p_Var10 = (__DataStorage *)0x0;
          if (uVar34 != 0) {
            p_Var10 = (__DataStorage *)(long)(int)lVar42;
          }
        }
        else if (uVar34 == 2) {
          pvVar29 = *(void **)(lVar42 + 0x18);
          p_Var10 = *(__DataStorage **)(lVar42 + 0x10);
        }
        else {
          pvVar29 = (void *)0x0;
          p_Var10 = (__DataStorage *)0x0;
        }
        if (((long)pvVar29 < (long)p_Var10) || ((long)uVar25 < (long)p_Var10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169a0);
          (*pcVar2)();
        }
        uVar16 = uVar25;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (p_Var10,uVar25,lVar42,pvVar26);
        lVar35 = uVar25 + 1;
        if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169a4);
          (*pcVar2)();
        }
        if (uVar34 < 2) {
          pvVar29 = (void *)((ulong)pvVar26 >> 0x30 & 0xff);
          if (uVar34 != 0) {
            pvVar29 = (void *)(lVar42 >> 0x20);
          }
          lVar36 = 0;
          if (uVar34 != 0) {
            lVar36 = (long)(int)lVar42;
          }
        }
        else if (uVar34 == 2) {
          pvVar29 = *(void **)(lVar42 + 0x18);
          lVar36 = *(long *)(lVar42 + 0x10);
        }
        else {
          pvVar29 = (void *)0x0;
          lVar36 = 0;
        }
        if (((long)pvVar29 < lVar35) || ((long)pvVar29 < lVar36)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169a8);
          (*pcVar2)();
        }
        pvVar22 = pvVar26;
        __Foundation_Data__Representation_subscript_getter____Swift_Range<Swift_Int>___>_Foundation_Data
                  (lVar35,pvVar29,lVar42);
        FUN_10003bf2c(lVar42,pvVar26);
        uVar38 = (uint)(uVar16 >> 0x20);
        uVar34 = uVar38 >> 0x1e;
        iVar41 = (int)p_Var10;
        if (uVar38 >> 0x1e < 2) {
          if (uVar34 != 0) {
            if ((long)iVar41 != (long)p_Var10 >> 0x20) goto LAB_100515b48;
            goto LAB_1005159f4;
          }
          if ((uVar16 & 0xff000000000000) == 0) goto LAB_1005159f4;
LAB_100515b48:
          FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xfc8);
          uVar28 = *(undefined8 *)(unaff_x22 + 0xfe0);
          lVar42 = *(long *)(unaff_x22 + 0xfe8);
          FUN_100004640(unaff_x22 + 0xfc8,uVar28);
          (**(code **)(lVar42 + 0x70))(uVar28,lVar42);
          FUN_100004594(unaff_x22 + 0xfc8);
          if (((uint)uVar28 & 0xff) < 2) {
            FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf78);
            uVar28 = *(undefined8 *)(unaff_x22 + 0xf90);
            lVar42 = *(long *)(unaff_x22 + 0xf98);
            FUN_100004640(unaff_x22 + 0xf78,uVar28);
            puVar27 = &DAT_100fcd4a8;
            FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
            pcVar20 = (char *)0x60;
            pcVar21 = (char *)0x7;
            _swift_allocObject();
            *(undefined8 *)(puVar27 + 0x18) = 2;
            *(undefined8 *)(puVar27 + 0x10) = 1;
            *(undefined8 *)(puVar27 + 0x20) = 0x657a6973;
            *(undefined1 **)(puVar27 + 0x28) = &DAT_e400000000000000;
            *(undefined8 *)(unaff_x22 + 0x1120) = 0;
            *(undefined8 *)(unaff_x22 + 0x1128) = 0xe000000000000000;
            SVar49.bridgeObject = pcVar21;
            SVar49.str = pcVar20;
            Swift::String::reserveCapacity(2,SVar49);
            *(undefined8 *)(unaff_x22 + 0x1130) = *(undefined8 *)(unaff_x22 + 0x1120);
            *(undefined8 *)(unaff_x22 + 0x1138) = *(undefined8 *)(unaff_x22 + 0x1128);
            if (uVar34 == 2) {
              uVar25 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
              if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169b8);
                (*pcVar2)();
              }
            }
            else if (uVar34 == 1) {
              iVar23 = (int)((ulong)p_Var10 >> 0x20);
              if (SBORROW4(iVar23,iVar41)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169bc);
                (*pcVar2)();
              }
              uVar25 = (ulong)(iVar23 - iVar41);
            }
            else {
              uVar25 = uVar16 >> 0x30 & 0xff;
            }
            *(ulong *)(unaff_x22 + 0x12b0) = uVar25;
            SVar48 = Swift::CustomStringConvertible::get_description();
            SVar53.bridgeObject = pvVar22;
            SVar53.str = pcVar21;
            Swift::String::append(SVar48,SVar53);
            _swift_bridgeObjectRelease(SVar48.bridgeObject);
            uVar32 = *(undefined8 *)(unaff_x22 + 0x1138);
            *(undefined8 *)(puVar27 + 0x30) = *(undefined8 *)(unaff_x22 + 0x1130);
            *(undefined8 *)(puVar27 + 0x38) = uVar32;
            puVar27[0x58] = 0;
            puVar37 = puVar27;
            FUN_1004a6a1c();
            _swift_setDeallocating(puVar27);
            FUN_1000fb4c4(puVar27 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
            _swift_deallocClassInstance(puVar27,0x20,7);
            *(undefined1 *)(unaff_x22 + 0x970) = 1;
            *(undefined8 *)(unaff_x22 + 0x978) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 0x980) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0x988) = 0;
            *(undefined **)(unaff_x22 + 0x990) = puVar37;
            *(undefined8 *)(unaff_x22 + 0x998) = 0;
            *(undefined8 *)(unaff_x22 + 0x9a0) = 0;
            *(undefined8 *)(unaff_x22 + 0x9a8) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0x9b0) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0x9b8) = 0x4c65766965636572;
            *(undefined8 *)(unaff_x22 + 0x9c0) = 0xed00002928706f6f;
            *(undefined8 *)(unaff_x22 + 0x9c8) = 0x286;
            *(undefined1 *)(unaff_x22 + 0xa90) = 1;
            *(undefined8 *)(unaff_x22 + 0xa98) = 0xd000000000000010;
            *(undefined8 *)(unaff_x22 + 0xaa0) = 0x8000000100dacbf0;
            *(undefined8 *)(unaff_x22 + 0xaa8) = 0;
            *(undefined **)(unaff_x22 + 0xab0) = puVar37;
            *(undefined8 *)(unaff_x22 + 0xab8) = 0;
            *(undefined8 *)(unaff_x22 + 0xac0) = 0;
            *(undefined8 *)(unaff_x22 + 0xac8) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0xad0) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0xad8) = 0x4c65766965636572;
            *(undefined8 *)(unaff_x22 + 0xae0) = 0xed00002928706f6f;
            *(undefined8 *)(unaff_x22 + 0xae8) = 0x286;
            FUN_1004eaa00(unaff_x22 + 0x970,unaff_x22 + 0xaf0);
            FUN_1004eaa3c(unaff_x22 + 0xa90);
            (**(code **)(lVar42 + 0x28))(unaff_x22 + 0x970,uVar28,lVar42);
            FUN_1004eaa3c(unaff_x22 + 0x970);
            FUN_100004594(unaff_x22 + 0xf78);
          }
          puVar27 = &DAT_100fcd490;
          FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
          lVar36 = *(long *)(puVar27 + -8);
          uVar11 = *(long *)(lVar36 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          *(undefined **)(unaff_x22 + 0xe28) = PTR___type_metadata_for_Foundation_Data_100ea7300;
          *(undefined **)(unaff_x22 + 0xe30) =
               PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
          ;
          *(__DataStorage **)(unaff_x22 + 0xe10) = p_Var10;
          *(ulong *)(unaff_x22 + 0xe18) = uVar16;
          plVar17 = (long *)(unaff_x22 + 0xe10);
          FUN_100004640();
          lVar42 = *plVar17;
          uVar25 = plVar17[1];
          uVar38 = (uint)(uVar25 >> 0x20);
          uVar34 = uVar38 >> 0x1e;
          if (uVar38 >> 0x1e < 2) {
            if (uVar34 == 0) {
              auVar43._8_8_ = lVar42;
              auVar43._0_8_ = lVar42;
              auVar44._8_8_ = 0xffffffffffffffd0;
              auVar44._0_8_ = 0xffffffffffffffd8;
              auVar45._8_8_ = 0xffffffffffffffe0;
              auVar45._0_8_ = 0xffffffffffffffe8;
              auVar45 = NEON_ushl(auVar43,auVar45,8);
              auVar44 = NEON_ushl(auVar43,auVar44,8);
              *(char *)(unaff_x22 + 0x10d9) = (char)lVar42;
              *(char *)(unaff_x22 + 0x10da) = (char)((ulong)lVar42 >> 8);
              *(char *)(unaff_x22 + 0x10db) = (char)((ulong)lVar42 >> 0x10);
              *(uint *)(unaff_x22 + 0x10dc) =
                   CONCAT13(auVar44[8],CONCAT12(auVar44[0],CONCAT11(auVar45[8],auVar45[0])));
              *(char *)(unaff_x22 + 0x10e0) = (char)((ulong)lVar42 >> 0x38);
              *(char *)(unaff_x22 + 0x10e1) = (char)uVar25;
              *(char *)(unaff_x22 + 0x10e2) = (char)(uVar25 >> 8);
              *(char *)(unaff_x22 + 0x10e3) = (char)(uVar25 >> 0x10);
              *(char *)(unaff_x22 + 0x10e4) = (char)(uVar25 >> 0x18);
              *(char *)(unaff_x22 + 0x10e5) = (char)(uVar25 >> 0x20);
              *(char *)(unaff_x22 + 0x10e6) = (char)(uVar25 >> 0x28);
              p_Var12 = (__DataStorage *)(unaff_x22 + 0x10d9) + (uVar25 >> 0x30 & 0xff);
              FUN_1001037b4(p_Var10,uVar16);
              p_Var13 = (__DataStorage *)(unaff_x22 + 0x10d9);
            }
            else {
              lVar39 = (long)(int)lVar42;
              lVar1 = (lVar42 >> 0x20) - lVar39;
              if (lVar42 >> 0x20 < lVar39) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169b0);
                (*pcVar2)();
              }
              p_Var13 = p_Var10;
              FUN_1001037b4(p_Var10,uVar16);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var13);
              if (p_Var13 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var13 = (__DataStorage *)0x0;
                p_Var12 = (__DataStorage *)0x0;
              }
              else {
                p_Var12 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var13);
                if (SBORROW8(lVar39,(long)p_Var12)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169c4);
                  (*pcVar2)();
                }
                p_Var13 = p_Var13 + (lVar39 - (long)p_Var12);
                lVar42 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var12);
                if (p_Var13 == (__DataStorage *)0x0) {
                  p_Var12 = (__DataStorage *)0x0;
                }
                else {
                  if (lVar1 <= lVar42) {
                    lVar42 = lVar1;
                  }
                  p_Var12 = p_Var13 + lVar42;
                }
              }
            }
            FUN_100441844(unaff_x22 + 0x1160,p_Var13,p_Var12);
          }
          else if (uVar34 == 2) {
            lVar1 = *(long *)(lVar42 + 0x10);
            lVar42 = *(long *)(lVar42 + 0x18);
            p_Var13 = p_Var10;
            FUN_1001037b4(p_Var10,uVar16);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var13);
            p_Var12 = (__DataStorage *)0x0;
            if (p_Var13 != (__DataStorage *)0x0) {
              p_Var12 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var13);
              if (SBORROW8(lVar1,(long)p_Var12)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169c0);
                (*pcVar2)();
              }
              p_Var13 = p_Var13 + (lVar1 - (long)p_Var12);
            }
            lVar39 = lVar42 - lVar1;
            if (SBORROW8(lVar42,lVar1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169b4);
              (*pcVar2)();
            }
            lVar42 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar25 & 0x3fffffffffffffff),p_Var12);
            if (p_Var13 == (__DataStorage *)0x0) {
              p_Var12 = (__DataStorage *)0x0;
            }
            else {
              if (lVar39 <= lVar42) {
                lVar42 = lVar39;
              }
              p_Var12 = p_Var13 + lVar42;
            }
            FUN_100441844(unaff_x22 + 0x1160,p_Var13,p_Var12);
          }
          else {
            *(undefined8 *)(unaff_x22 + 0x10ed) = 0;
            *puVar6 = 0;
            FUN_1001037b4(p_Var10,uVar16);
            FUN_100441844(unaff_x22 + 0x1160,puVar6,puVar6);
          }
          if (lVar33 != 0) {
            if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar24) {
              return;
            }
            goto LAB_1005169d8;
          }
          FUN_100004594(unaff_x22 + 0xe10);
          *(undefined8 *)(unaff_x22 + 0x1188) = *(undefined8 *)(unaff_x22 + 0x1168);
          *(undefined8 *)(unaff_x22 + 0x1180) = *(undefined8 *)(unaff_x22 + 0x1160);
          puVar37 = &DAT_100fcb3a0;
          FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
          Swift::AsyncThrowingStream::Continuation::_yield(uVar11,unaff_x22 + 0x1180,puVar37);
          FUN_10003bf2c(p_Var10,uVar16);
          (**(code **)(lVar36 + 8))(uVar11,puVar27);
          _swift_task_dealloc(uVar11);
          lVar33 = 0;
        }
        else {
          if ((uVar34 == 2) && (*(long *)(p_Var10 + 0x10) != *(long *)(p_Var10 + 0x18)))
          goto LAB_100515b48;
LAB_1005159f4:
          FUN_10003bf2c(p_Var10,uVar16);
        }
        uVar25 = 10;
        lVar36 = lVar35;
        FUN_10051c82c(10,lVar35,pvVar29);
        pvVar26 = pvVar29;
        lVar42 = lVar35;
      } while (((uint)lVar36 & 0xff) != 1);
    }
    *(long *)(unaff_x22 + 0x11d0) = lVar35;
    *(void **)(unaff_x22 + 0x11d8) = pvVar29;
    FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
  }
  else {
    FUN_1001037b4(TVar31.unknown,DVar40.unknown);
    FUN_100371514(unaff_x22 + 0x11a0,4,TVar31.unknown,DVar40.unknown);
    puVar27 = &DAT_100fcb3e8;
    FUN_1000f7830(&DAT_100fcb3e8,&DAT_100c54310);
    puVar37 = puVar27;
    _swift_initStaticObject();
    uVar28 = *(undefined8 *)(unaff_x22 + 0x11a0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x11a8);
    FUN_10050e1c4();
    FUN_10003bf2c(uVar28,uVar32);
    if (((ulong)puVar37 & 1) == 0) goto LAB_100515920;
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xde8);
    uVar25 = *(ulong *)(unaff_x22 + 0xe00);
    lVar35 = *(long *)(unaff_x22 + 0xe08);
    FUN_100004640(unaff_x22 + 0xde8,uVar25);
    (**(code **)(lVar35 + 0x70))(uVar25,lVar35);
    FUN_100004594(unaff_x22 + 0xde8);
    if ((uVar25 & 0xff) == 0) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xcf8);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xd10);
      lVar35 = *(long *)(unaff_x22 + 0xd18);
      FUN_100004640(unaff_x22 + 0xcf8,uVar28);
      *(undefined1 *)(unaff_x22 + 0x9d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x9d8) = 0xd00000000000001c;
      *(undefined8 *)(unaff_x22 + 0x9e0) = 0x8000000100dacdb0;
      *(undefined8 *)(unaff_x22 + 0x9f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x9e8) = 0;
      *(undefined8 *)(unaff_x22 + 0xa00) = 0;
      *(undefined8 *)(unaff_x22 + 0x9f8) = 0;
      *(undefined8 *)(unaff_x22 + 0xa08) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0xa10) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0xa18) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0xa20) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0xa28) = 0x270;
      *(undefined1 *)(unaff_x22 + 0x1f0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000001c;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dacdb0;
      *(undefined8 *)(unaff_x22 + 0x210) = 0;
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x218) = 0;
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x238) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x240) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x270;
      FUN_1004eaa00(unaff_x22 + 0x9d0,unaff_x22 + 0x850);
      FUN_1004eaa3c(unaff_x22 + 0x1f0);
      (**(code **)(lVar35 + 0x28))(unaff_x22 + 0x9d0,uVar28,lVar35);
      FUN_1004eaa3c(unaff_x22 + 0x9d0);
      FUN_100004594(unaff_x22 + 0xcf8);
    }
    lVar35 = 0;
    FUN_10050e1b0();
    lVar42 = *(long *)(lVar35 + -8);
    puVar9 = (undefined *)(*(long *)(lVar42 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    puVar37 = &DAT_100fce2d8;
    FUN_1000f7830(&DAT_100fce2d8,&DAT_100c54778);
    uVar25 = *(long *)(*(long *)(puVar37 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    uVar38 = uVar38 >> 0x1e;
    if (uVar38 == 2) {
      if (SBORROW8(*(long *)(TVar31.unknown + 0x18),*(long *)(TVar31.unknown + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169d0);
        (*pcVar2)();
      }
      if (0xb < *(long *)(TVar31.unknown + 0x18) - *(long *)(TVar31.unknown + 0x10))
      goto LAB_100516250;
LAB_100516280:
      FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
      (**(code **)(lVar42 + 0x38))(uVar25,1,1,lVar35);
LAB_1005163a8:
      FUN_1000fb4c4(uVar25,&DAT_100fce2d8,&DAT_100c54778);
      _swift_task_dealloc(uVar25);
    }
    else {
      if (uVar38 != 1) {
        if (0xb < ((ulong)DVar40.unknown >> 0x30 & 0xff)) goto LAB_100516250;
        goto LAB_100516280;
      }
      if (SBORROW4(iVar41,iVar23)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169cc);
        (*pcVar2)();
      }
      if (iVar41 - iVar23 < 0xc) goto LAB_100516280;
LAB_100516250:
      if (uVar38 == 2) {
        puVar37 = (undefined *)(*(long *)(TVar31.unknown + 0x18) - *(long *)(TVar31.unknown + 0x10))
        ;
        if (SBORROW8(*(long *)(TVar31.unknown + 0x18),*(long *)(TVar31.unknown + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005162b8);
          (*pcVar2)();
        }
      }
      else if (uVar38 == 1) {
        if (SBORROW4(iVar41,iVar23)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169d8);
          (*pcVar2)();
        }
        puVar37 = (undefined *)(long)(iVar41 - iVar23);
      }
      else {
        puVar37 = (undefined *)((ulong)DVar40.unknown >> 0x30 & 0xff);
      }
      puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (puVar37 != (undefined *)0x0) {
        if (0 < (long)puVar37) {
          _swift_allocObject(puVar27,puVar37 + 0x20,7);
          puVar14 = puVar27;
          _malloc_size();
          *(undefined **)(puVar27 + 0x10) = puVar37;
          *(long *)(puVar27 + 0x18) = (long)puVar14 * 2 + -0x40;
          puVar14 = puVar27;
        }
        IVar15 = Foundation::Data::Iterator::typeMetadataAccessor();
        lVar33 = *(long *)(IVar15.unknown + -8);
        initializing.unknown = (undefined *)(*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        param_4.unknown = TVar31.unknown;
        tVar47 = Foundation::Data::_copyContents(initializing,(Data)(puVar14 + 0x20));
        (**(code **)(lVar33 + 8))(initializing.unknown,IVar15.unknown);
        if (tVar47._.unknown.unknown != puVar37) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005169d4);
          (*pcVar2)();
        }
        _swift_task_dealloc(initializing.unknown);
      }
      FUN_10050df90(uVar25,puVar14);
      uVar16 = uVar25;
      (**(code **)(lVar42 + 0x30))(uVar25,1,lVar35);
      if ((int)uVar16 == 1) {
        FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
        goto LAB_1005163a8;
      }
      lVar35 = *(long *)(unaff_x22 + 0x12e8);
      FUN_10051b17c(uVar25,puVar9);
      _swift_task_dealloc(uVar25);
      FUN_100076688(lVar35 + 0x20,unaff_x22 + 0xd98);
      uVar25 = *(ulong *)(unaff_x22 + 0xdb0);
      lVar35 = *(long *)(unaff_x22 + 0xdb8);
      FUN_100004640(unaff_x22 + 0xd98,uVar25);
      (**(code **)(lVar35 + 0x70))(uVar25,lVar35);
      FUN_100004594(unaff_x22 + 0xd98);
      if ((uVar25 & 0xff) == 0) {
        FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xcd0);
        puVar27 = *(undefined **)(unaff_x22 + 0xce8);
        lVar35 = *(long *)(unaff_x22 + 0xcf0);
        _Var19.unknown = puVar27;
        FUN_100004640();
        *(undefined8 *)(unaff_x22 + 0x1230) = 0;
        *(undefined8 *)(unaff_x22 + 0x1238) = 0xe000000000000000;
        Swift::_StringGuts::grow(0x17,_Var19);
        _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1238));
        *(undefined8 *)(unaff_x22 + 0x1220) = 0xd000000000000015;
        *(undefined8 *)(unaff_x22 + 0x1228) = 0x8000000100dacdd0;
        Foundation::Date::typeMetadataAccessor();
        pcVar20 = PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8;
        FUN_100003a00(&DAT_100fce2e0,PTR_typeMetadataAccessor_100ea7480);
        SVar48 = Swift::CustomStringConvertible::get_description();
        SVar54.bridgeObject = param_4.unknown;
        SVar54.str = pcVar20;
        Swift::String::append(SVar48,SVar54);
        _swift_bridgeObjectRelease(SVar48.bridgeObject);
        DVar30.unknown = *(undefined **)(unaff_x22 + 0x1220);
        FUN_1004f94cc();
        (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar30);
        *(undefined1 *)(unaff_x22 + 0xd0) = 0;
        *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1240);
        *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1248);
        *(undefined8 *)(unaff_x22 + 0xf0) = 0;
        *(undefined8 *)(unaff_x22 + 0xe8) = 0;
        *(undefined8 *)(unaff_x22 + 0x100) = 0;
        *(undefined8 *)(unaff_x22 + 0xf8) = 0;
        *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x118) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x120) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x128) = 0x274;
        *(undefined1 *)(unaff_x22 + 0x790) = 0;
        *(undefined8 *)(unaff_x22 + 0x798) = *(undefined8 *)(unaff_x22 + 0x1240);
        *(undefined8 *)(unaff_x22 + 0x7a0) = *(undefined8 *)(unaff_x22 + 0x1248);
        *(undefined8 *)(unaff_x22 + 0x7b0) = 0;
        *(undefined8 *)(unaff_x22 + 0x7a8) = 0;
        *(undefined8 *)(unaff_x22 + 0x7c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x7b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x7c8) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 2000) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x7d8) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x7e0) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x7e8) = 0x274;
        FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x730);
        FUN_1004eaa3c(unaff_x22 + 0x790);
        (**(code **)(lVar35 + 0x28))(unaff_x22 + 0xd0,puVar27,lVar35);
        FUN_1004eaa3c(unaff_x22 + 0xd0);
        FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
        FUN_10051bca0(puVar9);
        FUN_100004594(unaff_x22 + 0xcd0);
      }
      else {
        FUN_10003bf2c(TVar31.unknown,DVar40.unknown);
        FUN_10051bca0(puVar9);
      }
    }
    _swift_task_dealloc();
    lVar33 = *(long *)(unaff_x22 + 0x1320);
    TVar31.unknown = puVar9;
  }
  if ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x70) & 1) == 0) {
LAB_1005163f0:
    if (*(char *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) == '\x01') goto LAB_100516400;
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x12f8) = 0;
    *(long *)(unaff_x22 + 0x12f0) = lVar33;
    bVar4 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar31);
    lVar35 = CONCAT71(extraout_var_00,bVar4);
    if (bVar4) goto LAB_1005163f0;
    lVar42 = *(long *)(unaff_x22 + 0x12d0);
    if ((*(byte *)(lVar42 + 0x71) & 1) == 0) {
      FUN_10051b5ec();
      _swift_allocObject();
      *(long *)(unaff_x22 + 0x1300) = lVar35;
      *(undefined1 *)(lVar35 + 0x10) = 0;
      puVar27 = &DAT_100fcdf50;
      FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
      *(undefined **)(unaff_x22 + 0x1308) = puVar27;
      puVar37 = &DAT_100edc418;
      _swift_allocObject(&DAT_100edc418,0x18,7);
      *(undefined **)(unaff_x22 + 0x1310) = puVar37;
      _swift_weakInit(puVar37 + 0x10,lVar42);
      *(undefined **)(unaff_x22 + 0x60) = puVar37;
      *(long *)(unaff_x22 + 0x68) = lVar35;
      bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar5 & 1) == 0) {
        _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x12d0));
        UVar18 = Swift::Actor::get_unownedExecutor();
        if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar24) goto LAB_1005169d8;
        pcVar2 = FUN_100514ff0;
        goto LAB_100515644;
      }
      pvVar29 = *(void **)(unaff_x22 + 0x12d0);
      plVar17 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1318) = plVar17;
      *plVar17 = unaff_x22;
      plVar17[1] = (long)FUN_100514f38;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar24) {
        isolation.bridgeObject = pvVar29;
        isolation.str = (char *)(unaff_x22 + 0x1210);
        Swift::_withCheckedThrowingContinuation(isolation);
        return;
      }
      goto LAB_1005169d8;
    }
LAB_100516400:
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar28 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar35 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar28);
    (**(code **)(lVar35 + 0x70))(uVar28,lVar35);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar28 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar28 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar35 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar28);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar35 + 0x28))(unaff_x22 + 0x430,uVar28,lVar35);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar24) {
                    /* WARNING: Could not recover jumptable at 0x0001005165d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1005169d8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005169dc | FUN_1005169dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005169dc(void)

{
  NWError NVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  Task TVar6;
  char *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  NSError *self;
  ID IVar11;
  TaskPriority TVar12;
  ContinuousClock CVar13;
  _StringGuts _Var14;
  char *pcVar15;
  long *plVar16;
  undefined *puVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  char *pcVar24;
  long unaff_x22;
  long lVar25;
  code *pcVar26;
  long lVar27;
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
  String SVar45;
  String SVar46;
  String SVar47;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1310);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1300));
  _swift_release(uVar23);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1338);
  *(undefined8 *)(unaff_x22 + 5000) = *(undefined8 *)(unaff_x22 + 0x12f8);
  *(undefined8 *)(unaff_x22 + 0x1280) = uVar23;
  NVar1 = Network::NWError::typeMetadataAccessor();
  pcVar24 = (char *)CONCAT71(extraout_var,NVar1.value);
  *(char **)(unaff_x22 + 0x1390) = pcVar24;
  lVar27 = *(long *)(pcVar24 + -8);
  *(long *)(unaff_x22 + 0x1398) = lVar27;
  uVar8 = *(long *)(lVar27 + 0x40) + 0xf;
  uVar3 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x13a0) = uVar3;
  _swift_errorRetain(uVar23);
  pcVar15 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  uVar4 = uVar3;
  pcVar7 = pcVar24;
  _swift_dynamicCast(uVar3,unaff_x22 + 0x1280,pcVar15,pcVar24,0);
  if ((uVar4 & 1) == 0) {
    _swift_task_dealloc(uVar3);
    TVar6.unknown = *(undefined **)(unaff_x22 + 0x1280);
    _swift_errorRelease();
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if ((bVar2) || ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) & 1) != 0)) goto LAB_100517398;
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf50);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xf68);
    lVar27 = *(long *)(unaff_x22 + 0xf70);
    FUN_100004640(unaff_x22 + 0xf50,uVar22);
    (**(code **)(lVar27 + 0x70))(uVar22,lVar27);
    FUN_100004594(unaff_x22 + 0xf50);
    pcVar24 = pcVar15;
    if (((uint)uVar22 & 0xff) < 6) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf28);
      puVar5 = *(undefined **)(unaff_x22 + 0xf40);
      pcVar24 = *(char **)(unaff_x22 + 0xf48);
      _Var14.unknown = puVar5;
      FUN_100004640(unaff_x22 + 0xf28);
      Swift::_StringGuts::grow(0x11,_Var14);
      SVar31.bridgeObject = (void *)0xef203a726f727265;
      SVar31.str = (char *)0x2065766965636552;
      SVar36.bridgeObject = pcVar7;
      SVar36.str = pcVar15;
      Swift::String::append(SVar31,SVar36);
      _swift_getErrorValue(uVar23,unaff_x22 + 0x1288,unaff_x22 + 0x10b0);
      pcVar7 = *(char **)(unaff_x22 + 0x10b0);
      Swift::DefaultStringInterpolation::_appendInterpolation
                (pcVar7,*(undefined8 *)(unaff_x22 + 0x10b8));
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0x250) = 5;
      *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x1110);
      *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x1118);
      *(undefined8 *)(unaff_x22 + 0x270) = 0;
      *(undefined8 *)(unaff_x22 + 0x268) = 0;
      *(undefined8 *)(unaff_x22 + 0x280) = 0;
      *(undefined8 *)(unaff_x22 + 0x278) = 0;
      *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x298) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x2a0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x2a8) = 0x2c2;
      *(undefined1 *)(unaff_x22 + 0x550) = 5;
      *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x1110);
      *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x1118);
      *(undefined8 *)(unaff_x22 + 0x570) = 0;
      *(undefined8 *)(unaff_x22 + 0x568) = 0;
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x578) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x598) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x5a0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x5a8) = 0x2c2;
      FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x5b0);
      FUN_1004eaa3c(unaff_x22 + 0x550);
      (**(code **)(pcVar24 + 0x28))(unaff_x22 + 0x250,puVar5);
      FUN_1004eaa3c(unaff_x22 + 0x250);
      FUN_100004594(unaff_x22 + 0xf28);
    }
    lVar27 = *(long *)(unaff_x22 + 0x12d0);
    if (*(char *)(lVar27 + _TtC3MCP16NetworkTransport::reconnectionConfig) != '\x01') {
LAB_10051735c:
      *(undefined8 *)(unaff_x22 + 0x1290) = uVar23;
      _swift_errorRetain(uVar23);
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1290));
      goto LAB_100517398;
    }
    lVar25 = *(long *)((char *)(lVar27 + _TtC3MCP16NetworkTransport::reconnectionConfig) + 8);
    if (lVar25 <= *(long *)(lVar27 + 0x78)) goto LAB_10051735c;
    lVar20 = *(long *)(unaff_x22 + 0x12e8);
    *(long *)(lVar27 + 0x78) = *(long *)(lVar27 + 0x78) + 1;
    FUN_100076688(lVar20 + 0x20,unaff_x22 + 0xd48);
    uVar22 = *(undefined8 *)(unaff_x22 + 0xd60);
    lVar20 = *(long *)(unaff_x22 + 0xd68);
    FUN_100004640(unaff_x22 + 0xd48,uVar22);
    (**(code **)(lVar20 + 0x70))(uVar22,lVar20);
    FUN_100004594(unaff_x22 + 0xd48);
    if (((uint)uVar22 & 0xff) < 5) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xd20);
      puVar5 = *(undefined **)(unaff_x22 + 0xd38);
      lVar20 = *(long *)(unaff_x22 + 0xd40);
      _Var14.unknown = puVar5;
      FUN_100004640();
      Swift::_StringGuts::grow(0x38,_Var14);
      SVar28.bridgeObject = (void *)0x8000000100daccf0;
      SVar28.str = (char *)0xd00000000000002f;
      SVar37.bridgeObject = pcVar7;
      SVar37.str = pcVar24;
      Swift::String::append(SVar28,SVar37);
      *(undefined8 *)(unaff_x22 + 0x12a0) = *(undefined8 *)(lVar27 + 0x78);
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar38.bridgeObject = pcVar7;
      SVar38.str = pcVar24;
      Swift::String::append(SVar31,SVar38);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar29.bridgeObject = (void *)0xe100000000000000;
      SVar29.str = (char *)0x2f;
      SVar39.bridgeObject = pcVar7;
      SVar39.str = pcVar24;
      Swift::String::append(SVar29,SVar39);
      *(long *)(unaff_x22 + 0x12a8) = lVar25;
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = pcVar7;
      SVar40.str = pcVar24;
      Swift::String::append(SVar31,SVar40);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar30.bridgeObject = &DAT_e400000000000000;
      SVar30.str = (char *)0x2e2e2e29;
      SVar41.bridgeObject = pcVar7;
      SVar41.str = pcVar24;
      Swift::String::append(SVar30,SVar41);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0x2b0) = 4;
      *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x11c0);
      *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x11c8);
      *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x300) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x2c9;
      *(undefined1 *)(unaff_x22 + 0x7f0) = 4;
      *(undefined8 *)(unaff_x22 + 0x7f8) = *(undefined8 *)(unaff_x22 + 0x11c0);
      *(undefined8 *)(unaff_x22 + 0x800) = *(undefined8 *)(unaff_x22 + 0x11c8);
      *(undefined8 *)(unaff_x22 + 0x810) = 0;
      *(undefined8 *)(unaff_x22 + 0x808) = 0;
      *(undefined8 *)(unaff_x22 + 0x820) = 0;
      *(undefined8 *)(unaff_x22 + 0x818) = 0;
      *(undefined8 *)(unaff_x22 + 0x828) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x830) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x838) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x840) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x848) = 0x2c9;
      FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xc70);
      FUN_1004eaa3c(unaff_x22 + 0x7f0);
      (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x2b0,puVar5,lVar20);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      FUN_100004594(unaff_x22 + 0xd20);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1308);
    lVar27 = *(long *)(unaff_x22 + 0x12d0);
    *(undefined1 *)(lVar27 + 0x70) = 0;
    puVar5 = &DAT_100fcd1c8;
    FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
    uVar8 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    TVar12 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))(uVar8,1,1,TVar12.unknown);
    puVar5 = &DAT_100edc648;
    _swift_allocObject(&DAT_100edc648,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar27;
    *(undefined8 *)(puVar5 + 0x18) = uVar22;
    *(long *)(puVar5 + 0x20) = lVar27;
    _swift_retain_n(lVar27,2);
    uVar22 = 0;
    FUN_1004e9c98(0,0,uVar8,&DAT_100c54758,puVar5);
    _swift_errorRelease(uVar23);
    _swift_release(uVar22);
    _swift_task_dealloc(uVar8);
  }
  else {
    _swift_errorRelease(uVar23);
    puVar5 = (undefined *)(uVar8 & 0xfffffffffffffff0);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x13a8) = puVar5;
    TVar6.unknown = puVar5;
    (**(code **)(lVar27 + 0x20))();
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if ((bVar2) || ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) & 1) != 0)) {
      (**(code **)(lVar27 + 8))(puVar5,pcVar24);
      _swift_task_dealloc(puVar5);
      _swift_task_dealloc(uVar3);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1280);
    }
    else {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xd70);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xd88);
      lVar25 = *(long *)(unaff_x22 + 0xd90);
      FUN_100004640(unaff_x22 + 0xd70,uVar23);
      (**(code **)(lVar25 + 0x70))(uVar23,lVar25);
      FUN_100004594(unaff_x22 + 0xd70);
      if (((uint)uVar23 & 0xff) < 6) {
        FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xdc0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0xdd8);
        lVar25 = *(long *)(unaff_x22 + 0xde0);
        FUN_100004640();
        puVar17 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar15 = (char *)0x60;
        pvVar18 = (void *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar17 + 0x20) = 0x726f727265;
        *(undefined8 *)(puVar17 + 0x18) = 2;
        *(undefined8 *)(puVar17 + 0x10) = 1;
        *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
        *(undefined8 *)(unaff_x22 + 0x1170) = 0;
        *(undefined8 *)(unaff_x22 + 0x1178) = 0xe000000000000000;
        SVar35.bridgeObject = pvVar18;
        SVar35.str = pcVar15;
        Swift::String::reserveCapacity(2,SVar35);
        *(undefined8 *)(unaff_x22 + 0x11b0) = *(undefined8 *)(unaff_x22 + 0x1170);
        *(undefined8 *)(unaff_x22 + 0x11b8) = *(undefined8 *)(unaff_x22 + 0x1178);
        uVar8 = uVar8 & 0xfffffffffffffff0;
        _swift_task_alloc(uVar8);
        pcVar15 = pcVar24;
        (**(code **)(lVar27 + 0x10))();
        SVar31 = Swift::String::_init(uVar8,pcVar24);
        _swift_task_dealloc(uVar8);
        SVar42.bridgeObject = pcVar7;
        SVar42.str = pcVar15;
        Swift::String::append(SVar31,SVar42);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x11b8);
        *(undefined8 *)(puVar17 + 0x30) = *(undefined8 *)(unaff_x22 + 0x11b0);
        *(undefined8 *)(puVar17 + 0x38) = uVar22;
        puVar17[0x58] = 0;
        puVar9 = puVar17;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar17);
        FUN_1000fb4c4(puVar17 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar17,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 5;
        *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacd20;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar9;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x358) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x360) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x28d;
        *(undefined1 *)(unaff_x22 + 0xc10) = 5;
        *(undefined8 *)(unaff_x22 + 0xc18) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0xc20) = 0x8000000100dacd20;
        *(undefined8 *)(unaff_x22 + 0xc28) = 0;
        *(undefined **)(unaff_x22 + 0xc30) = puVar9;
        *(undefined8 *)(unaff_x22 + 0xc40) = 0;
        *(undefined8 *)(unaff_x22 + 0xc38) = 0;
        *(undefined8 *)(unaff_x22 + 0xc48) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0xc50) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0xc58) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0xc60) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0xc68) = 0x28d;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0xb50);
        FUN_1004eaa3c(unaff_x22 + 0xc10);
        (**(code **)(lVar25 + 0x28))(unaff_x22 + 0x310,uVar23);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0xdc0);
      }
      plVar10 = (long *)&DAT_100fce2d0;
      FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                    PTR_Network__Network__NWError_>Swift__Error_100eaa360);
      pvVar18 = (void *)0x0;
      pcVar15 = pcVar24;
      plVar16 = plVar10;
      _swift_allocError(pcVar24,plVar10,0);
      pcVar26 = *(code **)(lVar27 + 0x10);
      pcVar7 = pcVar24;
      (*pcVar26)(plVar16,puVar5);
      self = Foundation::__convertErrorToNSError();
      _swift_errorRelease(pcVar15);
      IVar11 = objc_stub::code((ID)self);
      if ((IVar11 != 0x39) && (IVar11 = objc_stub::code((ID)self), IVar11 != 0x36)) {
        CVar13 = Swift::ContinuousClock::typeMetadataAccessor();
        *(undefined **)(unaff_x22 + 0x13b0) = CVar13.unknown;
        lVar27 = *(long *)(CVar13.unknown + -8);
        *(long *)(unaff_x22 + 0x13b8) = lVar27;
        uVar8 = *(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x13c0) = uVar8;
        (extension_Swift)::Swift::Clock::_get_continuous();
        *(undefined8 *)(unaff_x22 + 0x1158) = 0;
        *(undefined8 *)(unaff_x22 + 0x1150) = 100000000000000000;
        *(undefined8 *)(unaff_x22 + 0x10d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x10c8) = 0;
        *(undefined1 *)(unaff_x22 + 0x10d8) = 1;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
          _swift_task_switch(FUN_100519174,0,0);
          return;
        }
        goto LAB_100517a34;
      }
      lVar25 = *(long *)(unaff_x22 + 0x12d0);
      if (*(char *)(lVar25 + _TtC3MCP16NetworkTransport::reconnectionConfig) == '\x01') {
        lVar20 = *(long *)((char *)(lVar25 + _TtC3MCP16NetworkTransport::reconnectionConfig) + 8);
        if (lVar20 <= *(long *)(lVar25 + 0x78)) goto LAB_1005178ec;
        lVar21 = *(long *)(unaff_x22 + 0x12e8);
        *(long *)(lVar25 + 0x78) = *(long *)(lVar25 + 0x78) + 1;
        FUN_100076688(lVar21 + 0x20,unaff_x22 + 0xff0);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1008);
        lVar21 = *(long *)(unaff_x22 + 0x1010);
        FUN_100004640(unaff_x22 + 0xff0,uVar23);
        (**(code **)(lVar21 + 0x70))(uVar23,lVar21);
        FUN_100004594(unaff_x22 + 0xff0);
        if (((uint)uVar23 & 0xff) < 5) {
          FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1040);
          puVar17 = *(undefined **)(unaff_x22 + 0x1058);
          lVar21 = *(long *)(unaff_x22 + 0x1060);
          _Var14.unknown = puVar17;
          FUN_100004640();
          Swift::_StringGuts::grow(0x3b,_Var14);
          SVar32.bridgeObject = (void *)0x8000000100dacd70;
          SVar32.str = &DAT_d000000000000032;
          SVar43.bridgeObject = pvVar18;
          SVar43.str = pcVar7;
          Swift::String::append(SVar32,SVar43);
          *(undefined8 *)(unaff_x22 + 0x12c0) = *(undefined8 *)(lVar25 + 0x78);
          SVar31 = Swift::CustomStringConvertible::get_description();
          SVar44.bridgeObject = pvVar18;
          SVar44.str = pcVar7;
          Swift::String::append(SVar31,SVar44);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          SVar33.bridgeObject = (void *)0xe100000000000000;
          SVar33.str = (char *)0x2f;
          SVar45.bridgeObject = pvVar18;
          SVar45.str = pcVar7;
          Swift::String::append(SVar33,SVar45);
          *(long *)(unaff_x22 + 0x1270) = lVar20;
          SVar31 = Swift::CustomStringConvertible::get_description();
          SVar46.bridgeObject = pvVar18;
          SVar46.str = pcVar7;
          Swift::String::append(SVar31,SVar46);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          SVar34.bridgeObject = &DAT_e400000000000000;
          SVar34.str = (char *)0x2e2e2e29;
          SVar47.bridgeObject = pvVar18;
          SVar47.str = pcVar7;
          Swift::String::append(SVar34,SVar47);
          FUN_1004f94cc();
          (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                    ((DefaultStringInterpolation)0x0);
          *(undefined1 *)(unaff_x22 + 0x3d0) = 4;
          *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1190);
          *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1198);
          *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
          *(undefined8 *)(unaff_x22 + 1000) = 0;
          *(undefined8 *)(unaff_x22 + 0x400) = 0;
          *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
          *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x418) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0x420) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0x428) = 0x296;
          *(undefined1 *)(unaff_x22 + 0x8b0) = 4;
          *(undefined8 *)(unaff_x22 + 0x8b8) = *(undefined8 *)(unaff_x22 + 0x1190);
          *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(unaff_x22 + 0x1198);
          *(undefined8 *)(unaff_x22 + 0x8d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8d8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e8) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x8f0) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x8f8) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0x900) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0x908) = 0x296;
          FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0x130);
          FUN_1004eaa3c(unaff_x22 + 0x8b0);
          (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x3d0,puVar17);
          FUN_1004eaa3c(unaff_x22 + 0x3d0);
          FUN_100004594(unaff_x22 + 0x1040);
        }
        uVar23 = *(undefined8 *)(unaff_x22 + 0x1308);
        lVar25 = *(long *)(unaff_x22 + 0x12d0);
        *(undefined1 *)(lVar25 + 0x70) = 0;
        puVar17 = &DAT_100fcd1c8;
        FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
        uVar8 = *(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar8);
        TVar12 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))(uVar8,1,1,TVar12.unknown);
        puVar17 = &DAT_100edc670;
        _swift_allocObject(&DAT_100edc670,0x28,7);
        *(long *)(puVar17 + 0x10) = lVar25;
        *(undefined8 *)(puVar17 + 0x18) = uVar23;
        *(long *)(puVar17 + 0x20) = lVar25;
        _swift_retain_n(lVar25,2);
        FUN_1004e9c98(0,0,uVar8,&DAT_100c54768,puVar17);
        _swift_release();
        (**(code **)(lVar27 + 8))(puVar5,pcVar24);
        _swift_task_dealloc(uVar8);
      }
      else {
LAB_1005178ec:
        pcVar15 = pcVar24;
        _swift_allocError(pcVar24,plVar10,0,0);
        (*pcVar26)(plVar10,puVar5,pcVar24);
        FUN_1004db3ac();
        puVar17 = &DAT_100eda9c8;
        _swift_allocError(&DAT_100eda9c8,plVar10,0,0);
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = (long)pcVar15;
        *(undefined1 *)(plVar10 + 3) = 7;
        *(undefined **)(unaff_x22 + 0x12b8) = puVar17;
        FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
        Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x12b8));
        (**(code **)(lVar27 + 8))(puVar5,pcVar24);
      }
      _swift_task_dealloc(puVar5);
      _swift_task_dealloc(uVar3);
      uVar23 = *(undefined8 *)(unaff_x22 + 0x1280);
    }
LAB_100517398:
    _swift_errorRelease(uVar23);
  }
  if (*(char *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) == '\x01') {
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar27 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar23);
    (**(code **)(lVar27 + 0x70))(uVar23,lVar27);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar23 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar23 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar27 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar23);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar27 + 0x28))(unaff_x22 + 0x430,uVar23,lVar27);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x00010051757c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_100517a34:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100517a38 | FUN_100517a38 */

void FUN_100517a38(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0x1360) = IVar2.unknown;
  lVar8 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1368) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar7 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0x1370) = pcVar7;
  (*pcVar7)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1378) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100517bac;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    Swift::Clock::_sleep();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100517bac | FUN_100517bac */

void FUN_100517bac(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar7 = *unaff_x22;
  *(long *)(lVar7 + 0x1380) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x1378));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x1368);
    uVar5 = *(undefined8 *)(lVar7 + 0x1358);
    lVar8 = *(long *)(lVar7 + 0x1350);
    uVar6 = *(undefined8 *)(lVar7 + 0x1348);
    uVar2 = *(undefined8 *)(lVar7 + 0x12d0);
    (**(code **)(lVar7 + 0x1370))(uVar4,*(undefined8 *)(lVar7 + 0x1360));
    (**(code **)(lVar8 + 8))(uVar5,uVar6);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_100517cb8;
    pcVar1 = FUN_100517cbc;
  }
  else {
    (**(code **)(lVar7 + 0x1370))(*(undefined8 *)(lVar7 + 0x1368),*(undefined8 *)(lVar7 + 0x1360));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_100517cb8:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100518090;
    uVar2 = 0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100517cbc | FUN_100517cbc */

void FUN_100517cbc(void)

{
  bool bVar1;
  byte bVar2;
  Task TVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  void *pvVar12;
  long unaff_x22;
  String isolation;
  long lVar4;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x1328);
  FUN_10003bf2c(TVar3.unknown,*(undefined8 *)(unaff_x22 + 0x1330));
  lVar11 = *(long *)(unaff_x22 + 0x12d0);
  if (*(char *)(lVar11 + 0x70) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x12f8) = *(undefined8 *)(unaff_x22 + 0x1340);
    *(undefined8 *)(unaff_x22 + 0x12f0) = *(undefined8 *)(unaff_x22 + 0x1380);
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    lVar4 = CONCAT71(extraout_var,bVar1);
    lVar11 = *(long *)(unaff_x22 + 0x12d0);
    if (bVar1) goto LAB_100517d20;
    if ((*(byte *)(lVar11 + 0x71) & 1) == 0) {
      FUN_10051b5ec();
      _swift_allocObject();
      *(long *)(unaff_x22 + 0x1300) = lVar4;
      *(undefined1 *)(lVar4 + 0x10) = 0;
      puVar5 = &DAT_100fcdf50;
      FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
      *(undefined **)(unaff_x22 + 0x1308) = puVar5;
      puVar6 = &DAT_100edc418;
      _swift_allocObject(&DAT_100edc418,0x18,7);
      *(undefined **)(unaff_x22 + 0x1310) = puVar6;
      _swift_weakInit(puVar6 + 0x10,lVar11);
      *(undefined **)(unaff_x22 + 0x60) = puVar6;
      *(long *)(unaff_x22 + 0x68) = lVar4;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar2 & 1) == 0) {
        _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x12d0));
        UVar8 = Swift::Actor::get_unownedExecutor();
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
          _swift_task_switch(FUN_100514ff0,UVar8.unknown,puVar5);
          return;
        }
      }
      else {
        pvVar12 = *(void **)(unaff_x22 + 0x12d0);
        plVar7 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1318) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100514f38;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
          isolation.bridgeObject = pvVar12;
          isolation.str = (char *)(unaff_x22 + 0x1210);
          Swift::_withCheckedThrowingContinuation(isolation);
          return;
        }
      }
      goto LAB_10051808c;
    }
LAB_100517d38:
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar11 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar10);
    (**(code **)(lVar11 + 0x70))(uVar10,lVar11);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar10 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar11 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar10);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar11 + 0x28))(unaff_x22 + 0x430,uVar10,lVar11);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  else {
LAB_100517d20:
    if (*(char *)(lVar11 + 0x71) == '\x01') goto LAB_100517d38;
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100517f00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_10051808c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100518090 | FUN_100518090 */

void FUN_100518090(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x12d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1368));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1005180fc,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005180fc | FUN_1005180fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1005180fc(void)

{
  NWError NVar1;
  bool bVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  Task TVar6;
  char *pcVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  NSError *self;
  ID IVar11;
  TaskPriority TVar12;
  ContinuousClock CVar13;
  _StringGuts _Var14;
  char *pcVar15;
  long *plVar16;
  undefined *puVar17;
  void *pvVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  char *pcVar25;
  long unaff_x22;
  long lVar26;
  code *pcVar27;
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
  String SVar45;
  String SVar46;
  String SVar47;
  
  lVar19 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1358);
  lVar24 = *(long *)(unaff_x22 + 0x1350);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1348);
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x1328),*(undefined8 *)(unaff_x22 + 0x1330));
  (**(code **)(lVar24 + 8))(uVar23,uVar22);
  _swift_task_dealloc(uVar23);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x1380);
  *(undefined8 *)(unaff_x22 + 5000) = *(undefined8 *)(unaff_x22 + 0x1340);
  *(undefined8 *)(unaff_x22 + 0x1280) = uVar22;
  NVar1 = Network::NWError::typeMetadataAccessor();
  pcVar25 = (char *)CONCAT71(extraout_var,NVar1.value);
  *(char **)(unaff_x22 + 0x1390) = pcVar25;
  lVar24 = *(long *)(pcVar25 + -8);
  *(long *)(unaff_x22 + 0x1398) = lVar24;
  uVar8 = *(long *)(lVar24 + 0x40) + 0xf;
  uVar3 = uVar8 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x13a0) = uVar3;
  _swift_errorRetain(uVar22);
  pcVar15 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  uVar4 = uVar3;
  pcVar7 = pcVar25;
  _swift_dynamicCast(uVar3,unaff_x22 + 0x1280,pcVar15,pcVar25,0);
  if ((uVar4 & 1) == 0) {
    _swift_task_dealloc(uVar3);
    TVar6.unknown = *(undefined **)(unaff_x22 + 0x1280);
    _swift_errorRelease();
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if ((bVar2) || ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) & 1) != 0)) goto LAB_100518ad4;
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf50);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xf68);
    lVar24 = *(long *)(unaff_x22 + 0xf70);
    FUN_100004640(unaff_x22 + 0xf50,uVar23);
    (**(code **)(lVar24 + 0x70))(uVar23,lVar24);
    FUN_100004594(unaff_x22 + 0xf50);
    pcVar25 = pcVar15;
    if (((uint)uVar23 & 0xff) < 6) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf28);
      puVar5 = *(undefined **)(unaff_x22 + 0xf40);
      pcVar25 = *(char **)(unaff_x22 + 0xf48);
      _Var14.unknown = puVar5;
      FUN_100004640(unaff_x22 + 0xf28);
      Swift::_StringGuts::grow(0x11,_Var14);
      SVar31.bridgeObject = (void *)0xef203a726f727265;
      SVar31.str = (char *)0x2065766965636552;
      SVar36.bridgeObject = pcVar7;
      SVar36.str = pcVar15;
      Swift::String::append(SVar31,SVar36);
      _swift_getErrorValue(uVar22,unaff_x22 + 0x1288,unaff_x22 + 0x10b0);
      pcVar7 = *(char **)(unaff_x22 + 0x10b0);
      Swift::DefaultStringInterpolation::_appendInterpolation
                (pcVar7,*(undefined8 *)(unaff_x22 + 0x10b8));
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0x250) = 5;
      *(undefined8 *)(unaff_x22 + 600) = *(undefined8 *)(unaff_x22 + 0x1110);
      *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(unaff_x22 + 0x1118);
      *(undefined8 *)(unaff_x22 + 0x270) = 0;
      *(undefined8 *)(unaff_x22 + 0x268) = 0;
      *(undefined8 *)(unaff_x22 + 0x280) = 0;
      *(undefined8 *)(unaff_x22 + 0x278) = 0;
      *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x298) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x2a0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x2a8) = 0x2c2;
      *(undefined1 *)(unaff_x22 + 0x550) = 5;
      *(undefined8 *)(unaff_x22 + 0x558) = *(undefined8 *)(unaff_x22 + 0x1110);
      *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x1118);
      *(undefined8 *)(unaff_x22 + 0x570) = 0;
      *(undefined8 *)(unaff_x22 + 0x568) = 0;
      *(undefined8 *)(unaff_x22 + 0x580) = 0;
      *(undefined8 *)(unaff_x22 + 0x578) = 0;
      *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x598) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x5a0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x5a8) = 0x2c2;
      FUN_1004eaa00(unaff_x22 + 0x250,unaff_x22 + 0x5b0);
      FUN_1004eaa3c(unaff_x22 + 0x550);
      (**(code **)(pcVar25 + 0x28))(unaff_x22 + 0x250,puVar5);
      FUN_1004eaa3c(unaff_x22 + 0x250);
      FUN_100004594(unaff_x22 + 0xf28);
    }
    lVar24 = *(long *)(unaff_x22 + 0x12d0);
    if (*(char *)(lVar24 + _TtC3MCP16NetworkTransport::reconnectionConfig) != '\x01') {
LAB_100518a98:
      *(undefined8 *)(unaff_x22 + 0x1290) = uVar22;
      _swift_errorRetain(uVar22);
      FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
      Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1290));
      goto LAB_100518ad4;
    }
    lVar26 = *(long *)((char *)(lVar24 + _TtC3MCP16NetworkTransport::reconnectionConfig) + 8);
    if (lVar26 <= *(long *)(lVar24 + 0x78)) goto LAB_100518a98;
    lVar20 = *(long *)(unaff_x22 + 0x12e8);
    *(long *)(lVar24 + 0x78) = *(long *)(lVar24 + 0x78) + 1;
    FUN_100076688(lVar20 + 0x20,unaff_x22 + 0xd48);
    uVar23 = *(undefined8 *)(unaff_x22 + 0xd60);
    lVar20 = *(long *)(unaff_x22 + 0xd68);
    FUN_100004640(unaff_x22 + 0xd48,uVar23);
    (**(code **)(lVar20 + 0x70))(uVar23,lVar20);
    FUN_100004594(unaff_x22 + 0xd48);
    if (((uint)uVar23 & 0xff) < 5) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xd20);
      puVar5 = *(undefined **)(unaff_x22 + 0xd38);
      lVar20 = *(long *)(unaff_x22 + 0xd40);
      _Var14.unknown = puVar5;
      FUN_100004640();
      Swift::_StringGuts::grow(0x38,_Var14);
      SVar28.bridgeObject = (void *)0x8000000100daccf0;
      SVar28.str = (char *)0xd00000000000002f;
      SVar37.bridgeObject = pcVar7;
      SVar37.str = pcVar25;
      Swift::String::append(SVar28,SVar37);
      *(undefined8 *)(unaff_x22 + 0x12a0) = *(undefined8 *)(lVar24 + 0x78);
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar38.bridgeObject = pcVar7;
      SVar38.str = pcVar25;
      Swift::String::append(SVar31,SVar38);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar29.bridgeObject = (void *)0xe100000000000000;
      SVar29.str = (char *)0x2f;
      SVar39.bridgeObject = pcVar7;
      SVar39.str = pcVar25;
      Swift::String::append(SVar29,SVar39);
      *(long *)(unaff_x22 + 0x12a8) = lVar26;
      SVar31 = Swift::CustomStringConvertible::get_description();
      SVar40.bridgeObject = pcVar7;
      SVar40.str = pcVar25;
      Swift::String::append(SVar31,SVar40);
      _swift_bridgeObjectRelease(SVar31.bridgeObject);
      SVar30.bridgeObject = &DAT_e400000000000000;
      SVar30.str = (char *)0x2e2e2e29;
      SVar41.bridgeObject = pcVar7;
      SVar41.str = pcVar25;
      Swift::String::append(SVar30,SVar41);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                ((DefaultStringInterpolation)0x0);
      *(undefined1 *)(unaff_x22 + 0x2b0) = 4;
      *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x11c0);
      *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x11c8);
      *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x300) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x2c9;
      *(undefined1 *)(unaff_x22 + 0x7f0) = 4;
      *(undefined8 *)(unaff_x22 + 0x7f8) = *(undefined8 *)(unaff_x22 + 0x11c0);
      *(undefined8 *)(unaff_x22 + 0x800) = *(undefined8 *)(unaff_x22 + 0x11c8);
      *(undefined8 *)(unaff_x22 + 0x810) = 0;
      *(undefined8 *)(unaff_x22 + 0x808) = 0;
      *(undefined8 *)(unaff_x22 + 0x820) = 0;
      *(undefined8 *)(unaff_x22 + 0x818) = 0;
      *(undefined8 *)(unaff_x22 + 0x828) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x830) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x838) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x840) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x848) = 0x2c9;
      FUN_1004eaa00(unaff_x22 + 0x2b0,unaff_x22 + 0xc70);
      FUN_1004eaa3c(unaff_x22 + 0x7f0);
      (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x2b0,puVar5,lVar20);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      FUN_100004594(unaff_x22 + 0xd20);
    }
    uVar23 = *(undefined8 *)(unaff_x22 + 0x1308);
    lVar24 = *(long *)(unaff_x22 + 0x12d0);
    *(undefined1 *)(lVar24 + 0x70) = 0;
    puVar5 = &DAT_100fcd1c8;
    FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
    uVar8 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar8);
    TVar12 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))(uVar8,1,1,TVar12.unknown);
    puVar5 = &DAT_100edc648;
    _swift_allocObject(&DAT_100edc648,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar24;
    *(undefined8 *)(puVar5 + 0x18) = uVar23;
    *(long *)(puVar5 + 0x20) = lVar24;
    _swift_retain_n(lVar24,2);
    uVar23 = 0;
    FUN_1004e9c98(0,0,uVar8,&DAT_100c54758,puVar5);
    _swift_errorRelease(uVar22);
    _swift_release(uVar23);
    _swift_task_dealloc(uVar8);
  }
  else {
    _swift_errorRelease(uVar22);
    puVar5 = (undefined *)(uVar8 & 0xfffffffffffffff0);
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x13a8) = puVar5;
    TVar6.unknown = puVar5;
    (**(code **)(lVar24 + 0x20))();
    bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar6);
    if ((bVar2) || ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) & 1) != 0)) {
      (**(code **)(lVar24 + 8))(puVar5,pcVar25);
      _swift_task_dealloc(puVar5);
      _swift_task_dealloc(uVar3);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x1280);
    }
    else {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xd70);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xd88);
      lVar26 = *(long *)(unaff_x22 + 0xd90);
      FUN_100004640(unaff_x22 + 0xd70,uVar22);
      (**(code **)(lVar26 + 0x70))(uVar22,lVar26);
      FUN_100004594(unaff_x22 + 0xd70);
      if (((uint)uVar22 & 0xff) < 6) {
        FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xdc0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0xdd8);
        lVar26 = *(long *)(unaff_x22 + 0xde0);
        FUN_100004640();
        puVar17 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar15 = (char *)0x60;
        pvVar18 = (void *)0x7;
        _swift_allocObject();
        *(undefined8 *)(puVar17 + 0x20) = 0x726f727265;
        *(undefined8 *)(puVar17 + 0x18) = 2;
        *(undefined8 *)(puVar17 + 0x10) = 1;
        *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
        *(undefined8 *)(unaff_x22 + 0x1170) = 0;
        *(undefined8 *)(unaff_x22 + 0x1178) = 0xe000000000000000;
        SVar35.bridgeObject = pvVar18;
        SVar35.str = pcVar15;
        Swift::String::reserveCapacity(2,SVar35);
        *(undefined8 *)(unaff_x22 + 0x11b0) = *(undefined8 *)(unaff_x22 + 0x1170);
        *(undefined8 *)(unaff_x22 + 0x11b8) = *(undefined8 *)(unaff_x22 + 0x1178);
        uVar8 = uVar8 & 0xfffffffffffffff0;
        _swift_task_alloc(uVar8);
        pcVar15 = pcVar25;
        (**(code **)(lVar24 + 0x10))();
        SVar31 = Swift::String::_init(uVar8,pcVar25);
        _swift_task_dealloc(uVar8);
        SVar42.bridgeObject = pcVar7;
        SVar42.str = pcVar15;
        Swift::String::append(SVar31,SVar42);
        _swift_bridgeObjectRelease(SVar31.bridgeObject);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x11b8);
        *(undefined8 *)(puVar17 + 0x30) = *(undefined8 *)(unaff_x22 + 0x11b0);
        *(undefined8 *)(puVar17 + 0x38) = uVar23;
        puVar17[0x58] = 0;
        puVar9 = puVar17;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar17);
        FUN_1000fb4c4(puVar17 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        _swift_deallocClassInstance(puVar17,0x20,7);
        *(undefined1 *)(unaff_x22 + 0x310) = 5;
        *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacd20;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined **)(unaff_x22 + 0x330) = puVar9;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x358) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0x360) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x28d;
        *(undefined1 *)(unaff_x22 + 0xc10) = 5;
        *(undefined8 *)(unaff_x22 + 0xc18) = 0xd000000000000016;
        *(undefined8 *)(unaff_x22 + 0xc20) = 0x8000000100dacd20;
        *(undefined8 *)(unaff_x22 + 0xc28) = 0;
        *(undefined **)(unaff_x22 + 0xc30) = puVar9;
        *(undefined8 *)(unaff_x22 + 0xc40) = 0;
        *(undefined8 *)(unaff_x22 + 0xc38) = 0;
        *(undefined8 *)(unaff_x22 + 0xc48) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0xc50) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0xc58) = 0x4c65766965636572;
        *(undefined8 *)(unaff_x22 + 0xc60) = 0xed00002928706f6f;
        *(undefined8 *)(unaff_x22 + 0xc68) = 0x28d;
        FUN_1004eaa00(unaff_x22 + 0x310,unaff_x22 + 0xb50);
        FUN_1004eaa3c(unaff_x22 + 0xc10);
        (**(code **)(lVar26 + 0x28))(unaff_x22 + 0x310,uVar22);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        FUN_100004594(unaff_x22 + 0xdc0);
      }
      plVar10 = (long *)&DAT_100fce2d0;
      FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                    PTR_Network__Network__NWError_>Swift__Error_100eaa360);
      pvVar18 = (void *)0x0;
      pcVar15 = pcVar25;
      plVar16 = plVar10;
      _swift_allocError(pcVar25,plVar10,0);
      pcVar27 = *(code **)(lVar24 + 0x10);
      pcVar7 = pcVar25;
      (*pcVar27)(plVar16,puVar5);
      self = Foundation::__convertErrorToNSError();
      _swift_errorRelease(pcVar15);
      IVar11 = objc_stub::code((ID)self);
      if ((IVar11 != 0x39) && (IVar11 = objc_stub::code((ID)self), IVar11 != 0x36)) {
        CVar13 = Swift::ContinuousClock::typeMetadataAccessor();
        *(undefined **)(unaff_x22 + 0x13b0) = CVar13.unknown;
        lVar24 = *(long *)(CVar13.unknown + -8);
        *(long *)(unaff_x22 + 0x13b8) = lVar24;
        uVar8 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0x13c0) = uVar8;
        (extension_Swift)::Swift::Clock::_get_continuous();
        *(undefined8 *)(unaff_x22 + 0x1158) = 0;
        *(undefined8 *)(unaff_x22 + 0x1150) = 100000000000000000;
        *(undefined8 *)(unaff_x22 + 0x10d0) = 0;
        *(undefined8 *)(unaff_x22 + 0x10c8) = 0;
        *(undefined1 *)(unaff_x22 + 0x10d8) = 1;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
          _swift_task_switch(FUN_100519174,0,0);
          return;
        }
        goto LAB_100519170;
      }
      lVar26 = *(long *)(unaff_x22 + 0x12d0);
      if (*(char *)(lVar26 + _TtC3MCP16NetworkTransport::reconnectionConfig) == '\x01') {
        lVar20 = *(long *)((char *)(lVar26 + _TtC3MCP16NetworkTransport::reconnectionConfig) + 8);
        if (lVar20 <= *(long *)(lVar26 + 0x78)) goto LAB_100519028;
        lVar21 = *(long *)(unaff_x22 + 0x12e8);
        *(long *)(lVar26 + 0x78) = *(long *)(lVar26 + 0x78) + 1;
        FUN_100076688(lVar21 + 0x20,unaff_x22 + 0xff0);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1008);
        lVar21 = *(long *)(unaff_x22 + 0x1010);
        FUN_100004640(unaff_x22 + 0xff0,uVar22);
        (**(code **)(lVar21 + 0x70))(uVar22,lVar21);
        FUN_100004594(unaff_x22 + 0xff0);
        if (((uint)uVar22 & 0xff) < 5) {
          FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1040);
          puVar17 = *(undefined **)(unaff_x22 + 0x1058);
          lVar21 = *(long *)(unaff_x22 + 0x1060);
          _Var14.unknown = puVar17;
          FUN_100004640();
          Swift::_StringGuts::grow(0x3b,_Var14);
          SVar32.bridgeObject = (void *)0x8000000100dacd70;
          SVar32.str = &DAT_d000000000000032;
          SVar43.bridgeObject = pvVar18;
          SVar43.str = pcVar7;
          Swift::String::append(SVar32,SVar43);
          *(undefined8 *)(unaff_x22 + 0x12c0) = *(undefined8 *)(lVar26 + 0x78);
          SVar31 = Swift::CustomStringConvertible::get_description();
          SVar44.bridgeObject = pvVar18;
          SVar44.str = pcVar7;
          Swift::String::append(SVar31,SVar44);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          SVar33.bridgeObject = (void *)0xe100000000000000;
          SVar33.str = (char *)0x2f;
          SVar45.bridgeObject = pvVar18;
          SVar45.str = pcVar7;
          Swift::String::append(SVar33,SVar45);
          *(long *)(unaff_x22 + 0x1270) = lVar20;
          SVar31 = Swift::CustomStringConvertible::get_description();
          SVar46.bridgeObject = pvVar18;
          SVar46.str = pcVar7;
          Swift::String::append(SVar31,SVar46);
          _swift_bridgeObjectRelease(SVar31.bridgeObject);
          SVar34.bridgeObject = &DAT_e400000000000000;
          SVar34.str = (char *)0x2e2e2e29;
          SVar47.bridgeObject = pvVar18;
          SVar47.str = pcVar7;
          Swift::String::append(SVar34,SVar47);
          FUN_1004f94cc();
          (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
                    ((DefaultStringInterpolation)0x0);
          *(undefined1 *)(unaff_x22 + 0x3d0) = 4;
          *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 0x1190);
          *(undefined8 *)(unaff_x22 + 0x3e0) = *(undefined8 *)(unaff_x22 + 0x1198);
          *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
          *(undefined8 *)(unaff_x22 + 1000) = 0;
          *(undefined8 *)(unaff_x22 + 0x400) = 0;
          *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
          *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x418) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0x420) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0x428) = 0x296;
          *(undefined1 *)(unaff_x22 + 0x8b0) = 4;
          *(undefined8 *)(unaff_x22 + 0x8b8) = *(undefined8 *)(unaff_x22 + 0x1190);
          *(undefined8 *)(unaff_x22 + 0x8c0) = *(undefined8 *)(unaff_x22 + 0x1198);
          *(undefined8 *)(unaff_x22 + 0x8d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x8d8) = 0;
          *(undefined8 *)(unaff_x22 + 0x8e8) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x8f0) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x8f8) = 0x4c65766965636572;
          *(undefined8 *)(unaff_x22 + 0x900) = 0xed00002928706f6f;
          *(undefined8 *)(unaff_x22 + 0x908) = 0x296;
          FUN_1004eaa00(unaff_x22 + 0x3d0,unaff_x22 + 0x130);
          FUN_1004eaa3c(unaff_x22 + 0x8b0);
          (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x3d0,puVar17);
          FUN_1004eaa3c(unaff_x22 + 0x3d0);
          FUN_100004594(unaff_x22 + 0x1040);
        }
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1308);
        lVar26 = *(long *)(unaff_x22 + 0x12d0);
        *(undefined1 *)(lVar26 + 0x70) = 0;
        puVar17 = &DAT_100fcd1c8;
        FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
        uVar8 = *(long *)(*(long *)(puVar17 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar8);
        TVar12 = Swift::TaskPriority::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar12.unknown + -8) + 0x38))(uVar8,1,1,TVar12.unknown);
        puVar17 = &DAT_100edc670;
        _swift_allocObject(&DAT_100edc670,0x28,7);
        *(long *)(puVar17 + 0x10) = lVar26;
        *(undefined8 *)(puVar17 + 0x18) = uVar22;
        *(long *)(puVar17 + 0x20) = lVar26;
        _swift_retain_n(lVar26,2);
        FUN_1004e9c98(0,0,uVar8,&DAT_100c54768,puVar17);
        _swift_release();
        (**(code **)(lVar24 + 8))(puVar5,pcVar25);
        _swift_task_dealloc(uVar8);
      }
      else {
LAB_100519028:
        pcVar15 = pcVar25;
        _swift_allocError(pcVar25,plVar10,0,0);
        (*pcVar27)(plVar10,puVar5,pcVar25);
        FUN_1004db3ac();
        puVar17 = &DAT_100eda9c8;
        _swift_allocError(&DAT_100eda9c8,plVar10,0,0);
        plVar10[1] = 0;
        plVar10[2] = 0;
        *plVar10 = (long)pcVar15;
        *(undefined1 *)(plVar10 + 3) = 7;
        *(undefined **)(unaff_x22 + 0x12b8) = puVar17;
        FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
        Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x12b8));
        (**(code **)(lVar24 + 8))(puVar5,pcVar25);
      }
      _swift_task_dealloc(puVar5);
      _swift_task_dealloc(uVar3);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x1280);
    }
LAB_100518ad4:
    _swift_errorRelease(uVar22);
  }
  if (*(char *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) == '\x01') {
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar24 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar22);
    (**(code **)(lVar24 + 0x70))(uVar22,lVar24);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar22 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar24 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar22);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar24 + 0x28))(unaff_x22 + 0x430,uVar22,lVar24);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar19) {
                    /* WARNING: Could not recover jumptable at 0x000100518cb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_100519170:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100519174 | FUN_100519174 */

void FUN_100519174(void)

{
  undefined *puVar1;
  Instant IVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  code *pcVar7;
  long unaff_x22;
  long lVar8;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar2 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaeef0;
  *(undefined **)(unaff_x22 + 0x13c8) = IVar2.unknown;
  lVar8 = *(long *)(IVar2.unknown + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x13d0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,puVar1,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar7 = *(code **)(lVar8 + 8);
  *(code **)(unaff_x22 + 0x13d8) = pcVar7;
  (*pcVar7)(uVar4,IVar2.unknown);
  _swift_task_dealloc(uVar4);
  plVar5 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x13e0) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005192e8;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    Swift::Clock::_sleep();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005192e8 | FUN_1005192e8 */

void FUN_1005192e8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long *unaff_x22;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar7 = *unaff_x22;
  *(long *)(lVar7 + 0x13e8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x13e0));
  if (unaff_x20 == 0) {
    uVar4 = *(undefined8 *)(lVar7 + 0x13d0);
    uVar5 = *(undefined8 *)(lVar7 + 0x13c0);
    lVar8 = *(long *)(lVar7 + 0x13b8);
    uVar6 = *(undefined8 *)(lVar7 + 0x13b0);
    uVar2 = *(undefined8 *)(lVar7 + 0x12d0);
    (**(code **)(lVar7 + 0x13d8))(uVar4,*(undefined8 *)(lVar7 + 0x13c8));
    (**(code **)(lVar8 + 8))(uVar5,uVar6);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_1005193f4;
    pcVar1 = FUN_1005193f8;
  }
  else {
    (**(code **)(lVar7 + 0x13d8))(*(undefined8 *)(lVar7 + 0x13d0),*(undefined8 *)(lVar7 + 0x13c8));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_1005193f4:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1005197f4;
    uVar2 = 0;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005193f8 | FUN_1005193f8 */

void FUN_1005193f8(void)

{
  bool bVar1;
  byte bVar2;
  Task TVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  UnownedSerialExecutor UVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  void *pvVar13;
  long unaff_x22;
  String isolation;
  long lVar4;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x13a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x13a0);
  (**(code **)(*(long *)(unaff_x22 + 0x1398) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x1390));
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x1280);
  _swift_errorRelease();
  lVar12 = *(long *)(unaff_x22 + 0x12d0);
  if (*(char *)(lVar12 + 0x70) == '\x01') {
    *(undefined8 *)(unaff_x22 + 0x12f8) = *(undefined8 *)(unaff_x22 + 5000);
    *(undefined8 *)(unaff_x22 + 0x12f0) = *(undefined8 *)(unaff_x22 + 0x13e8);
    bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
    lVar4 = CONCAT71(extraout_var,bVar1);
    lVar12 = *(long *)(unaff_x22 + 0x12d0);
    if (bVar1) goto LAB_100519484;
    if ((*(byte *)(lVar12 + 0x71) & 1) == 0) {
      FUN_10051b5ec();
      _swift_allocObject();
      *(long *)(unaff_x22 + 0x1300) = lVar4;
      *(undefined1 *)(lVar4 + 0x10) = 0;
      puVar5 = &DAT_100fcdf50;
      FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
      *(undefined **)(unaff_x22 + 0x1308) = puVar5;
      puVar6 = &DAT_100edc418;
      _swift_allocObject(&DAT_100edc418,0x18,7);
      *(undefined **)(unaff_x22 + 0x1310) = puVar6;
      _swift_weakInit(puVar6 + 0x10,lVar12);
      *(undefined **)(unaff_x22 + 0x60) = puVar6;
      *(long *)(unaff_x22 + 0x68) = lVar4;
      bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
      if ((bVar2 & 1) == 0) {
        _swift_getObjectType(*(undefined8 *)(unaff_x22 + 0x12d0));
        UVar8 = Swift::Actor::get_unownedExecutor();
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
          _swift_task_switch(FUN_100514ff0,UVar8.unknown,puVar5);
          return;
        }
      }
      else {
        pvVar13 = *(void **)(unaff_x22 + 0x12d0);
        plVar7 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x1318) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100514f38;
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
          isolation.bridgeObject = pvVar13;
          isolation.str = (char *)(unaff_x22 + 0x1210);
          Swift::_withCheckedThrowingContinuation(isolation);
          return;
        }
      }
      goto LAB_1005197f0;
    }
LAB_10051949c:
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar12 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar10);
    (**(code **)(lVar12 + 0x70))(uVar10,lVar12);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar10 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar10 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar12 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar10);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar12 + 0x28))(unaff_x22 + 0x430,uVar10,lVar12);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  else {
LAB_100519484:
    if (*(char *)(lVar12 + 0x71) == '\x01') goto LAB_10051949c;
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar9) {
                    /* WARNING: Could not recover jumptable at 0x000100519664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
LAB_1005197f0:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005197f4 | FUN_1005197f4 */

void FUN_1005197f4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(undefined8 *)(unaff_x22 + 0x12d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x13d0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100519860,uVar2,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100519860 | FUN_100519860 */

void FUN_100519860(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  _StringGuts _Var1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x13c0);
  lVar3 = *(long *)(unaff_x22 + 0x12e8);
  (**(code **)(*(long *)(unaff_x22 + 0x13b8) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x13b0));
  _swift_task_dealloc(uVar4);
  FUN_100076688(lVar3 + 0x20,unaff_x22 + 0xeb0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xec8);
  lVar3 = *(long *)(unaff_x22 + 0xed0);
  FUN_100004640(unaff_x22 + 0xeb0,uVar4);
  (**(code **)(lVar3 + 0x70))(uVar4,lVar3);
  FUN_100004594(unaff_x22 + 0xeb0);
  if (((uint)uVar4 & 0xff) < 6) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x13e8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x13a8);
    lVar8 = *(long *)(unaff_x22 + 0x1398);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1390);
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0xf00);
    puVar7 = *(undefined **)(unaff_x22 + 0xf18);
    lVar3 = *(long *)(unaff_x22 + 0xf20);
    _Var1.unknown = puVar7;
    FUN_100004640(unaff_x22 + 0xf00);
    Swift::_StringGuts::grow(0x27,_Var1);
    SVar9.bridgeObject = (void *)0x8000000100dacd40;
    SVar9.str = (char *)0xd000000000000025;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar9,SVar10);
    _swift_getErrorValue(uVar6,unaff_x22 + 0x12c8,unaff_x22 + 0x1068);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x1068),*(undefined8 *)(unaff_x22 + 0x1070));
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)0x0);
    *(undefined1 *)(unaff_x22 + 0x370) = 5;
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(unaff_x22 + 0x1140);
    *(undefined8 *)(unaff_x22 + 0x380) = *(undefined8 *)(unaff_x22 + 0x1148);
    *(undefined8 *)(unaff_x22 + 0x390) = 0;
    *(undefined8 *)(unaff_x22 + 0x388) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    *(undefined8 *)(unaff_x22 + 0x3a8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x3b0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x3b8) = 0x4c65766965636572;
    *(undefined8 *)(unaff_x22 + 0x3c0) = 0xed00002928706f6f;
    *(undefined8 *)(unaff_x22 + 0x3c8) = 0x2ba;
    *(undefined1 *)(unaff_x22 + 0xa30) = 5;
    *(undefined8 *)(unaff_x22 + 0xa38) = *(undefined8 *)(unaff_x22 + 0x1140);
    *(undefined8 *)(unaff_x22 + 0xa40) = *(undefined8 *)(unaff_x22 + 0x1148);
    *(undefined8 *)(unaff_x22 + 0xa50) = 0;
    *(undefined8 *)(unaff_x22 + 0xa48) = 0;
    *(undefined8 *)(unaff_x22 + 0xa60) = 0;
    *(undefined8 *)(unaff_x22 + 0xa58) = 0;
    *(undefined8 *)(unaff_x22 + 0xa68) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0xa70) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0xa78) = 0x4c65766965636572;
    *(undefined8 *)(unaff_x22 + 0xa80) = 0xed00002928706f6f;
    *(undefined8 *)(unaff_x22 + 0xa88) = 0x2ba;
    FUN_1004eaa00(unaff_x22 + 0x370,unaff_x22 + 0x910);
    FUN_1004eaa3c(unaff_x22 + 0xa30);
    (**(code **)(lVar3 + 0x28))(unaff_x22 + 0x370,puVar7,lVar3);
    FUN_1004eaa3c(unaff_x22 + 0x370);
    _swift_errorRelease(uVar6);
    (**(code **)(lVar8 + 8))(uVar5,uVar4);
    FUN_100004594(unaff_x22 + 0xf00);
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x13a8);
    lVar3 = *(long *)(unaff_x22 + 0x1398);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1390);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x13e8));
    (**(code **)(lVar3 + 8))(uVar5,uVar4);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x13a0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x13a8));
  _swift_task_dealloc(uVar4);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1280));
  if ((*(byte *)(*(long *)(unaff_x22 + 0x12d0) + 0x71) & 1) != 0) {
    FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 0x1018);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1030);
    lVar3 = *(long *)(unaff_x22 + 0x1038);
    FUN_100004640(unaff_x22 + 0x1018,uVar4);
    (**(code **)(lVar3 + 0x70))(uVar4,lVar3);
    FUN_100004594(unaff_x22 + 0x1018);
    if (((uint)uVar4 & 0xff) < 2) {
      FUN_100076688(*(long *)(unaff_x22 + 0x12e8) + 0x20,unaff_x22 + 4000);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xfb8);
      lVar3 = *(long *)(unaff_x22 + 0xfc0);
      FUN_100004640(unaff_x22 + 4000,uVar4);
      *(undefined1 *)(unaff_x22 + 0x430) = 1;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x480) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x2e4;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x4a0) = 0x8000000100daccd0;
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0x4c65766965636572;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0xed00002928706f6f;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x2e4;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar3 + 0x28))(unaff_x22 + 0x430,uVar4,lVar3);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      FUN_100004594(unaff_x22 + 4000);
    }
    *(undefined8 *)(unaff_x22 + 0x1278) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1278));
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x11d0),*(undefined8 *)(unaff_x22 + 0x11d8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x000100519cd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100519cdc | FUN_100519cdc */

void FUN_100519cdc(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  undefined8 in_x3;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_100519d40,in_x3,0);
  return;
}



/* Address: 0x100519d40 | FUN_100519d40 */

void FUN_100519d40(Duration param_1,undefined8 param_2)

{
  code *pcVar1;
  Duration DVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  double dVar5;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0x78);
  if (!SBORROW8(lVar4,1)) {
    dVar5 = *(double *)
             (*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::reconnectionConfig + 0x10);
    _pow(dVar5,(double)(lVar4 + -1));
    DVar2 = Swift::Duration::seconds(dVar5 * 0.5,param_1);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar3 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100519e04;
    FUN_10051aec0(DVar2.unknown,param_2,0,0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100519e04);
  (*pcVar1)();
}



/* Address: 0x100519e04 | FUN_100519e04 */

void FUN_100519e04(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x38) + 8))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x30));
    pcVar1 = FUN_100519e7c;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    _swift_errorRelease();
    pcVar1 = FUN_100519f20;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x100519e7c | FUN_100519e7c */

void FUN_100519e7c(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x28) + 0x71) & 1) != 0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100519eb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::connection);
  _swift_beginAccess(puVar1,unaff_x22 + 0x10,0,0);
  FUN_100004640(puVar1,puVar1[3]);
  Network::NWConnection::cancel((NWConnection *)*puVar1);
  plVar2 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_10051a2cc;
  FUN_10050edf8();
  return;
}



/* Address: 0x100519f20 | FUN_100519f20 */

void FUN_100519f20(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
  if ((*(byte *)(*(long *)(unaff_x22 + 0x28) + 0x71) & 1) != 0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100519f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::connection);
  _swift_beginAccess(puVar1,unaff_x22 + 0x10,0,0);
  FUN_100004640(puVar1,puVar1[3]);
  Network::NWConnection::cancel((NWConnection *)*puVar1);
  plVar2 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_10051a2cc;
  FUN_10050edf8();
  return;
}



/* Address: 0x100519fd4 | FUN_100519fd4 */

void FUN_100519fd4(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  undefined8 in_x3;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x30) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_10051a038,in_x3,0);
  return;
}



/* Address: 0x10051a038 | FUN_10051a038 */

void FUN_10051a038(Duration param_1,undefined8 param_2)

{
  code *pcVar1;
  Duration DVar2;
  long *plVar3;
  long lVar4;
  long unaff_x22;
  double dVar5;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x28) + 0x78);
  if (!SBORROW8(lVar4,1)) {
    dVar5 = *(double *)
             (*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::reconnectionConfig + 0x10);
    _pow(dVar5,(double)(lVar4 + -1));
    DVar2 = Swift::Duration::seconds(dVar5 * 0.5,param_1);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar3 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10051a0fc;
    FUN_10051aec0(DVar2.unknown,param_2,0,0,1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10051a0fc);
  (*pcVar1)();
}



/* Address: 0x10051a0fc | FUN_10051a0fc */

void FUN_10051a0fc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    (**(code **)(*(long *)(lVar2 + 0x38) + 8))
              (*(undefined8 *)(lVar2 + 0x40),*(undefined8 *)(lVar2 + 0x30));
    pcVar1 = FUN_10051a174;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    _swift_errorRelease();
    pcVar1 = FUN_10051a218;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10051a174 | FUN_10051a174 */

void FUN_10051a174(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x28) + 0x71) & 1) != 0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010051a1ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::connection);
  _swift_beginAccess(puVar1,unaff_x22 + 0x10,0,0);
  FUN_100004640(puVar1,puVar1[3]);
  Network::NWConnection::cancel((NWConnection *)*puVar1);
  plVar2 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10051a2cc;
  FUN_10050edf8();
  return;
}



/* Address: 0x10051a218 | FUN_10051a218 */

void FUN_10051a218(void)

{
  undefined8 *puVar1;
  long *plVar2;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x38) + 8))
            (*(undefined8 *)(unaff_x22 + 0x40),*(undefined8 *)(unaff_x22 + 0x30));
  if ((*(byte *)(*(long *)(unaff_x22 + 0x28) + 0x71) & 1) != 0) {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010051a260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  puVar1 = (undefined8 *)(*(long *)(unaff_x22 + 0x28) + _TtC3MCP16NetworkTransport::connection);
  _swift_beginAccess(puVar1,unaff_x22 + 0x10,0,0);
  FUN_100004640(puVar1,puVar1[3]);
  Network::NWConnection::cancel((NWConnection *)*puVar1);
  plVar2 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10051a2cc;
  FUN_10050edf8();
  return;
}



/* Address: 0x10051a2cc | FUN_10051a2cc */

void FUN_10051a2cc(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x50));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010051a318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10051a31c | FUN_10051a31c */

void FUN_10051a31c(undefined8 param_1,long param_2,undefined8 param_3)

{
  __int64 maximumLength;
  long lVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  NWConnection *this;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [24];
  undefined *local_a0 [3];
  undefined8 local_88;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar7 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar3 = (undefined8 *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  lVar1 = _TtC3MCP16NetworkTransport::connection;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_1004db3ac();
    puVar5 = &DAT_100eda9c8;
    _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
    *puVar3 = 0xd000000000000015;
    puVar3[1] = 0x8000000100dace80;
    puVar3[2] = 0;
    *(undefined1 *)(puVar3 + 3) = 4;
    local_a0[0] = puVar5;
    Swift::CheckedContinuation::resume(local_a0,puVar2);
  }
  else {
    maximumLength = 0x7fffffffffffffff;
    if ((char)((__int64 *)((long)puVar3 + _TtC3MCP16NetworkTransport::bufferConfig))[1] != '\x01') {
      maximumLength = *(__int64 *)((long)puVar3 + _TtC3MCP16NetworkTransport::bufferConfig);
    }
    _swift_beginAccess((long)puVar3 + _TtC3MCP16NetworkTransport::connection,auStack_b8,0,0);
    FUN_100076688((long)puVar3 + lVar1,local_a0);
    ppuVar4 = local_a0;
    FUN_100004640(ppuVar4,local_88);
    (**(code **)(lVar7 + 0x10))(auStack_c0 + -extraout_x8,param_1,puVar2);
    uVar6 = (ulong)*(byte *)(lVar7 + 0x50);
    uVar10 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
    uVar9 = lVar8 + uVar10 + 7 & 0xfffffffffffffff8;
    puVar5 = &DAT_100edc698;
    _swift_allocObject(&DAT_100edc698,uVar9 + 8,uVar6 | 7);
    *(undefined8 *)(puVar5 + 0x10) = param_3;
    (**(code **)(lVar7 + 0x20))(puVar5 + uVar10,auStack_c0 + -extraout_x8,puVar2);
    *(undefined8 **)(puVar5 + uVar9) = puVar3;
    this = (NWConnection *)*ppuVar4;
    _swift_retain(param_3);
    _swift_retain(puVar3);
    Network::NWConnection::_receive(this,1,maximumLength);
    _swift_release(puVar5);
    _swift_release(puVar3);
    FUN_100004594(local_a0);
  }
  return;
}



/* Address: 0x10051a528 | FUN_10051a528 */

void FUN_10051a528(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,MainActor *param_8)

{
  undefined8 *puVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  TaskPriority TVar7;
  MainActor *this;
  MainActor *pMVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined4 local_6c;
  MainActor *local_68;
  
  puVar5 = &DAT_100fcb460;
  local_b0 = param_6;
  local_a8 = param_2;
  local_90 = param_5;
  local_88 = param_7;
  local_80 = param_1;
  local_6c = param_4;
  local_68 = param_8;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar11 = *(long *)(puVar5 + -8);
  lVar16 = *(long *)(lVar11 + 0x40);
  local_a0 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar16 + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_b0 - extraout_x8;
  puVar6 = &DAT_100fce2f0;
  local_98 = lVar10;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  lVar12 = *(long *)(puVar6 + -8);
  lVar9 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar9 + 0xfU & 0xfffffffffffffff0);
  lVar17 = lVar10 - extraout_x8_00;
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar17 - extraout_x8_01;
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar17 - extraout_x8_01,1,1,TVar7.unknown);
  FUN_1000f8cac(local_90,lVar17,&DAT_100fce2f0,&DAT_100c54780);
  (**(code **)(lVar11 + 0x10))(lVar10,local_88,puVar5);
  this = Swift::MainActor::typeMetadataAccessor();
  puVar6 = PTR_typeMetadataAccessor_100eaec10;
  _swift_retain(param_6);
  uVar4 = local_80;
  FUN_10011da54(local_80,param_2);
  pMVar8 = local_68;
  _swift_retain();
  pMVar8 = Swift::MainActor::get_shared(this,pMVar8);
  puVar5 = &DAT_100fce2f8;
  FUN_100003a00(&DAT_100fce2f8,puVar6,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  bVar2 = *(byte *)(lVar12 + 0x50);
  uVar13 = (ulong)bVar2 + 0x28 & ((ulong)bVar2 ^ 0xffffffffffffffff);
  bVar3 = *(byte *)(lVar11 + 0x50);
  uVar14 = lVar9 + (ulong)bVar3 + uVar13 & ((ulong)bVar3 ^ 0xffffffffffffffff);
  lVar16 = uVar14 + lVar16;
  uVar15 = lVar16 + 0x1fU & 0xfffffffffffffff8;
  puVar6 = &DAT_100edc6c0;
  _swift_allocObject(&DAT_100edc6c0,uVar15 + 8,bVar2 | bVar3 | 7);
  *(MainActor **)(puVar6 + 0x10) = pMVar8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = local_b0;
  FUN_10051bf38(lVar17,puVar6 + uVar13);
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar14,local_98,local_a0);
  puVar1 = (undefined8 *)(puVar6 + (lVar16 + 7U & 0xfffffffffffffff8));
  *puVar1 = uVar4;
  puVar1[1] = local_a8;
  *(char *)(puVar1 + 2) = (char)local_6c;
  *(MainActor **)(puVar6 + uVar15) = local_68;
  FUN_1004e9c98(0,0,local_78,&DAT_100c54790,puVar6);
  _swift_release();
  return;
}



/* Address: 0x10051a7ac | FUN_10051a7ac */

void FUN_10051a7ac(void)

{
  undefined *puVar1;
  NWError NVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined7 extraout_var;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long lVar7;
  long unaff_x22;
  undefined1 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  *(undefined1 *)(unaff_x22 + 0x220) = in_stack_00000000;
  *(undefined8 *)(unaff_x22 + 0x1e8) = in_x7;
  *(undefined8 *)(unaff_x22 + 0x1f0) = in_stack_00000008;
  *(undefined8 *)(unaff_x22 + 0x1d8) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x1e0) = in_x6;
  *(undefined8 *)(unaff_x22 + 0x1c8) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x1d0) = in_x4;
  puVar3 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  uVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar4;
  NVar2 = Network::NWError::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x200) = CONCAT71(extraout_var,NVar2.value);
  lVar7 = *(long *)(CONCAT71(extraout_var,NVar2.value) + -8);
  *(long *)(unaff_x22 + 0x208) = lVar7;
  uVar4 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar4;
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x218) = pMVar5;
  puVar3 = &DAT_100fce2f8;
  FUN_100003a00(&DAT_100fce2f8,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10051a8a4,UVar6.unknown,puVar3);
  return;
}



/* Address: 0x10051a8a4 | FUN_10051a8a4 */

void FUN_10051a8a4(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  
  lVar7 = *(long *)(unaff_x22 + 0x1c8);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x218));
  if ((*(byte *)(lVar7 + 0x10) & 1) == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x208);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
    *(undefined1 *)(lVar7 + 0x10) = 1;
    FUN_1000f8cac(uVar1,uVar6,&DAT_100fce2f0,&DAT_100c54780);
    (**(code **)(lVar8 + 0x30))(uVar6,1,uVar3);
    if ((int)uVar6 == 1) {
      uVar5 = *(ulong *)(unaff_x22 + 0x1e8);
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x1f8),&DAT_100fce2f0,&DAT_100c54780);
      if (uVar5 >> 0x3c < 0xf) {
        *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x1e0);
        *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x1e8);
        FUN_1001037b4();
        puVar4 = &DAT_100fcb460;
        FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
        lVar7 = unaff_x22 + 0x1a8;
      }
      else {
        if ((*(byte *)(unaff_x22 + 0x220) & 1) != 0) {
          lVar8 = *(long *)(*(long *)(unaff_x22 + 0x1f0) + _TtC3MCP16NetworkTransport::logger);
          _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x180,0,0);
          FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x130);
          uVar5 = *(ulong *)(unaff_x22 + 0x148);
          lVar7 = *(long *)(unaff_x22 + 0x150);
          FUN_100004640(unaff_x22 + 0x130,uVar5);
          (**(code **)(lVar7 + 0x70))(uVar5,lVar7);
          puVar2 = (undefined8 *)(unaff_x22 + 0x130);
          FUN_100004594();
          if ((uVar5 & 0xff) == 0) {
            FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x158);
            uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
            lVar7 = *(long *)(unaff_x22 + 0x178);
            FUN_100004640(unaff_x22 + 0x158,uVar6);
            *(undefined1 *)(unaff_x22 + 0x10) = 0;
            *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000001c;
            *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacea0;
            *(undefined8 *)(unaff_x22 + 0x30) = 0;
            *(undefined8 *)(unaff_x22 + 0x28) = 0;
            *(undefined8 *)(unaff_x22 + 0x40) = 0;
            *(undefined8 *)(unaff_x22 + 0x38) = 0;
            *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0x58) = 0x4465766965636572;
            *(undefined8 *)(unaff_x22 + 0x60) = 0xed00002928617461;
            *(undefined8 *)(unaff_x22 + 0x68) = 0x303;
            *(undefined1 *)(unaff_x22 + 0x70) = 0;
            *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001c;
            *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacea0;
            *(undefined8 *)(unaff_x22 + 0x90) = 0;
            *(undefined8 *)(unaff_x22 + 0x88) = 0;
            *(undefined8 *)(unaff_x22 + 0xa0) = 0;
            *(undefined8 *)(unaff_x22 + 0x98) = 0;
            *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0xb8) = 0x4465766965636572;
            *(undefined8 *)(unaff_x22 + 0xc0) = 0xed00002928617461;
            *(undefined8 *)(unaff_x22 + 200) = 0x303;
            FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
            FUN_1004eaa3c(unaff_x22 + 0x70);
            (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x10,uVar6,lVar7);
            FUN_1004eaa3c(unaff_x22 + 0x10);
            puVar2 = (undefined8 *)(unaff_x22 + 0x158);
            FUN_100004594();
          }
          FUN_1004db3ac();
          puVar4 = &DAT_100eda9c8;
          _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
          puVar2[1] = 0;
          puVar2[2] = 0;
          *puVar2 = 0;
          *(undefined1 *)(puVar2 + 3) = 8;
          *(undefined **)(unaff_x22 + 0x1b8) = puVar4;
          puVar4 = &DAT_100fcb460;
          FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
          Swift::CheckedContinuation::resume(unaff_x22 + 0x1b8,puVar4);
          goto LAB_10051ac14;
        }
        *(undefined8 *)(unaff_x22 + 0x198) = 0;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0xc000000000000000;
        puVar4 = &DAT_100fcb460;
        FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
        lVar7 = unaff_x22 + 0x198;
      }
      Swift::CheckedContinuation::resume(lVar7,puVar4);
    }
    else {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x210);
      lVar7 = *(long *)(unaff_x22 + 0x208);
      uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
      (**(code **)(lVar7 + 0x20))(uVar1,*(undefined8 *)(unaff_x22 + 0x1f8),uVar6);
      puVar2 = (undefined8 *)&DAT_100fce2d0;
      FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                    PTR_Network__Network__NWError_>Swift__Error_100eaa360);
      uVar3 = uVar6;
      _swift_allocError(uVar6,puVar2,0,0);
      (**(code **)(lVar7 + 0x10))(puVar2,uVar1,uVar6);
      FUN_1004db3ac();
      puVar4 = &DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar2,0,0);
      puVar2[1] = 0;
      puVar2[2] = 0;
      *puVar2 = uVar3;
      *(undefined1 *)(puVar2 + 3) = 7;
      *(undefined **)(unaff_x22 + 0x1c0) = puVar4;
      puVar4 = &DAT_100fcb460;
      FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
      Swift::CheckedContinuation::resume(unaff_x22 + 0x1c0,puVar4);
      (**(code **)(lVar7 + 8))(uVar1,uVar6);
    }
  }
LAB_10051ac14:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010051ac40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10051ac44 | FUN_10051ac44 */

void FUN_10051ac44(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP16NetworkTransport::lastHeartbeatTime,&DAT_100fcb550,
                &USHORT_100c50b50);
  lVar1 = _TtC3MCP16NetworkTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP16NetworkTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  FUN_100004594(unaff_x20 + _TtC3MCP16NetworkTransport::connection);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC3MCP16NetworkTransport::logger));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x10051ad10 | FUN_10051ad10 */

void FUN_10051ad10(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x80));
  FUN_1000fb4c4(unaff_x20 + _TtC3MCP16NetworkTransport::lastHeartbeatTime,&DAT_100fcb550,
                &USHORT_100c50b50);
  lVar1 = _TtC3MCP16NetworkTransport::messageStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP16NetworkTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  FUN_100004594(unaff_x20 + _TtC3MCP16NetworkTransport::connection);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC3MCP16NetworkTransport::logger));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10051addc | FUN_10051addc */

void FUN_10051addc(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x260;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10050edf8();
  return;
}



/* Address: 0x10051ae20 | FUN_10051ae20 */

void FUN_10051ae20(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x190;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_100512e00();
  return;
}



/* Address: 0x10051ae64 | FUN_10051ae64 */

void FUN_10051ae64(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_100513064(param_1,param_2);
  return;
}



/* Address: 0x10051aec0 | FUN_10051aec0 */

void FUN_10051aec0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x40) = IVar1.unknown;
  lVar4 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x48) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  *(undefined1 *)(unaff_x22 + 0x20) = param_5;
  _swift_task_switch(FUN_10051af5c,0,0);
  return;
}



/* Address: 0x10051af5c | FUN_10051af5c */

void FUN_10051af5c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar3 = *(long *)(unaff_x22 + 0x48);
  Swift::ContinuousClock::typeMetadataAccessor();
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar5 = *(code **)(lVar3 + 8);
  *(code **)(unaff_x22 + 0x60) = pcVar5;
  (*pcVar5)(uVar1,uVar2);
  plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100091908;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x10051b064 | FUN_10051b064 */

undefined * FUN_10051b064(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fcb3e8;
    FUN_1000f7830(&DAT_100fcb3e8,&DAT_100c54310);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10051b0d4 | FUN_10051b0d4 */

bool FUN_10051b0d4(long param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  char cVar8;
  
  param_4 = param_4 >> 1;
  uVar3 = *(ulong *)(param_1 + 0x10);
  uVar4 = 0;
  uVar5 = param_3;
  do {
    if (uVar5 == param_4) {
      cVar6 = '\0';
      uVar7 = param_4;
      if (uVar4 != uVar3) goto LAB_10051b100;
LAB_10051b138:
      cVar8 = '\0';
      uVar1 = uVar3;
    }
    else {
      if (((long)uVar5 < (long)param_3) || ((long)param_4 <= (long)uVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051b178);
        (*pcVar2)();
      }
      cVar6 = *(char *)(param_2 + uVar5);
      uVar7 = uVar5 + 1;
      if (uVar4 == uVar3) goto LAB_10051b138;
LAB_10051b100:
      if (uVar3 <= uVar4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10051b17c);
        (*pcVar2)();
      }
      cVar8 = *(char *)(param_1 + 0x20 + uVar4);
      uVar1 = uVar4 + 1;
    }
    if (uVar5 == param_4) {
      return uVar4 == uVar3;
    }
    if ((uVar4 == uVar3) || (uVar4 = uVar1, uVar5 = uVar7, cVar6 != cVar8)) {
      return false;
    }
  } while( true );
}



/* Address: 0x10051b17c | FUN_10051b17c */

undefined8 FUN_10051b17c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10050e1b0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10051b1c0 | FUN_10051b1c0 */

long FUN_10051b1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9)

{
  byte *pbVar1;
  code *pcVar2;
  undefined *puVar3;
  NWConnection *pNVar4;
  long lVar5;
  Date DVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x12;
  long extraout_x12_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined4 local_11c;
  undefined8 local_118;
  undefined4 local_10c;
  undefined *local_108;
  long local_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [16];
  long local_e0;
  undefined *local_d8;
  undefined **ppuStack_d0;
  undefined8 local_c8 [3];
  NWConnection *local_b0;
  undefined **ppuStack_a8;
  undefined8 local_a0 [3];
  NWConnection *local_88;
  undefined **ppuStack_80;
  
  puVar3 = &DAT_100fcd148;
  uStack_130._4_4_ = param_6;
  local_128 = param_7;
  local_11c = param_5;
  local_118 = param_8;
  local_10c = param_9;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar11 = *(long *)(puVar3 + -8);
  local_108 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  local_100 = *(long *)(puVar3 + -8);
  puStack_f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_100 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  lVar12 = ((long)&uStack_130 - extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar9 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar9 - extraout_x12;
  pNVar4 = Network::NWConnection::typeMetadataAccessor();
  ppuStack_80 = &PTR_PTR_100edc430;
  lVar5 = 0;
  local_a0[0] = param_3;
  local_88 = pNVar4;
  FUN_10051b60c();
  _swift_allocObject();
  FUN_10007d048(local_a0,pNVar4);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(pNVar4 + -8) + 0x40));
  puVar13 = (undefined8 *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar13);
  local_c8[0] = *puVar13;
  ppuStack_a8 = &PTR_PTR_100edc430;
  local_b0 = pNVar4;
  _swift_defaultActor_initialize(lVar5);
  *(undefined2 *)(lVar5 + 0x70) = 0;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  lVar7 = _TtC3MCP16NetworkTransport::lastHeartbeatTime;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(lVar5 + lVar7,1,1,DVar6.unknown);
  FUN_100076688(local_c8,lVar5 + _TtC3MCP16NetworkTransport::connection);
  lVar7 = param_4;
  if (param_4 == 0) {
    local_d8 = &DAT_100ee6990;
    ppuStack_d0 = &PTR_PTR_100ee68f0;
    lVar7 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(lVar7 + 0x10) = 0xd000000000000015;
    *(undefined8 *)(lVar7 + 0x18) = 0x8000000100dad070;
    FUN_100076508(auStack_f0,lVar7 + 0x20);
  }
  *(long *)(lVar5 + _TtC3MCP16NetworkTransport::logger) = lVar7;
  pbVar1 = (byte *)(lVar5 + _TtC3MCP16NetworkTransport::reconnectionConfig);
  *pbVar1 = (byte)uStack_130._4_4_ & 1;
  *(undefined8 *)(pbVar1 + 8) = local_128;
  *(undefined8 *)(pbVar1 + 0x10) = param_2;
  pbVar1 = (byte *)(lVar5 + _TtC3MCP16NetworkTransport::heartbeatConfig);
  *pbVar1 = (byte)local_11c & 1;
  *(undefined8 *)(pbVar1 + 8) = param_1;
  puVar13 = (undefined8 *)(lVar5 + _TtC3MCP16NetworkTransport::bufferConfig);
  *puVar13 = local_118;
  *(char *)(puVar13 + 1) = (char)local_10c;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar8 = *(long *)(puVar3 + -8);
  (**(code **)(lVar8 + 0x38))(lVar10,1,1,puVar3);
  local_e0 = lVar10;
  (**(code **)(lVar11 + 0x68))
            ((long)&uStack_130 - extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
             ,local_108);
  _swift_retain(param_4);
  Swift::AsyncThrowingStream::_init
            ((BufferingPolicy)(__int8)PTR___type_metadata_for_Foundation_Data_100ea7300);
  (**(code **)(local_100 + 0x20))
            (lVar5 + _TtC3MCP16NetworkTransport::messageStream,lVar12,puStack_f8);
  FUN_1000f8cac(lVar10,lVar9,&DAT_100fcd158,&DAT_100c53740);
  lVar7 = lVar9;
  (**(code **)(lVar8 + 0x30))(lVar9,1,puVar3);
  if ((int)lVar7 == 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10051b5ec);
    (*pcVar2)();
  }
  FUN_100004594(local_c8);
  (**(code **)(lVar8 + 0x20))(lVar5 + _TtC3MCP16NetworkTransport::messageContinuation,lVar9,puVar3);
  FUN_1000fb4c4(lVar10,&DAT_100fcd158,&DAT_100c53740);
  FUN_100004594(local_a0);
  return lVar5;
}


