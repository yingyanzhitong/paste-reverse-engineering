/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100980d3c | FUN_100980d3c */

code * FUN_100980d3c(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100f1f6a0;
  _swift_allocObject(&DAT_100f1f6a0,uVar8 + lVar7,uVar5 | 7);
  (**(code **)(lVar6 + 0x20))
            (puVar3 + uVar8,&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  pcVar4 = thunk_FUN_100982bf0;
  FUN_100980e70(thunk_FUN_100982bf0,puVar3);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x100980e08 | FUN_100980e08 */

code * FUN_100980e08(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  
  puVar1 = &DAT_100f1f6c8;
  _swift_allocObject(&DAT_100f1f6c8,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar2 = thunk_FUN_100982c4c;
  FUN_100980e70(thunk_FUN_100982c4c,puVar1);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100980e70 | FUN_100980e70 */

undefined * FUN_100980e70(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *pcVar4;
  MultipathServiceType MVar5;
  int iVar6;
  undefined *puVar7;
  class_t *pcVar8;
  long lVar9;
  undefined *puVar10;
  undefined7 extraout_var;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 uVar16;
  long unaff_x20;
  class_t *pcVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  pthread_mutexattr_t local_98;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar7 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  lVar19 = (long)&local_b0 - (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar17 = *(class_t **)(unaff_x20 + 0x10);
  lVar18 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar18 + 0x10))();
  pcVar8 = pcVar17;
  _object_getClass();
  lVar18 = _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos;
  if (pcVar8 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100981434);
    (*pcVar4)();
  }
  uVar16 = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos,
                     auStack_80,0);
  FUN_100982e5c(unaff_x20 + lVar18,lVar19);
  uVar22 = *(undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::udpOptions);
  uVar21 = *(undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::tlsOptions);
  uVar11 = *(undefined8 *)
            (unaff_x20 +
            _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::nwParametersConfigurator);
  uVar2 = ((undefined8 *)
          (unaff_x20 +
          _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::nwParametersConfigurator))
          [1];
  lVar9 = 0;
  FUN_100983480();
  uVar14 = (ulong)*(uint *)(lVar9 + 0x30);
  uVar15 = (ulong)*(ushort *)(lVar9 + 0x34);
  _swift_allocObject();
  *(undefined1 *)(lVar9 + 0x10) = 0;
  lVar18 = lVar9;
  FUN_100611728();
  *(long *)(lVar9 + 0x18) = lVar18;
  *(ulong *)(lVar9 + 0x20) = uVar14;
  *(ulong *)(lVar9 + 0x28) = uVar15;
  *(undefined8 *)(lVar9 + 0x30) = uVar16;
  *(undefined8 *)(lVar9 + 0x50) = 0;
  *(undefined8 *)(lVar9 + 0x60) = 0;
  *(undefined8 *)(lVar9 + 0x80) = 0;
  *(undefined8 *)(lVar9 + 0x90) = 0;
  *(undefined1 *)(lVar9 + 0x98) = 2;
  puVar7 = &DAT_100ff0960;
  FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
  puVar10 = puVar7;
  _swift_allocObject();
  puVar10[0x10] = 0;
  *(undefined **)(lVar9 + 0xa0) = puVar10;
  *(undefined4 *)(lVar9 + 0xa8) = 0x1000100;
  uVar14 = 8;
  FUN_100884f1c(8);
  _swift_retain(uVar21);
  _swift_retain(uVar22);
  FUN_100011128(uVar11,uVar2);
  uVar16 = 0;
  FUN_1009a2b3c(0,0,0,0,uVar14 & 0xffffffff);
  *(undefined8 *)(lVar9 + 0xb8) = 0;
  *(undefined8 *)(lVar9 + 0xc0) = 0;
  *(undefined8 *)(lVar9 + 0xb0) = uVar16;
  _swift_allocObject(puVar7,0x11,7);
  puVar7[0x10] = 1;
  *(undefined **)(lVar9 + 200) = puVar7;
  *(undefined8 *)(lVar9 + 0xd8) = 0x8000;
  *(undefined8 *)(lVar9 + 0xd0) = 0;
  *(undefined8 *)(lVar9 + 0xe0) = 0x10000;
  *(undefined2 *)(lVar9 + 0xe8) = 0;
  *(undefined1 *)(lVar9 + 0xea) = 0;
  *(undefined8 *)(lVar9 + 0xf8) = 0xf000000000000007;
  *(undefined8 *)(lVar9 + 0xf0) = 0xf000000000000007;
  puVar7 = &DAT_100ff0968;
  FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
  _swift_allocObject();
  local_98.__sig = 0;
  local_98.__opaque[0] = '\0';
  local_98.__opaque[1] = '\0';
  local_98.__opaque[2] = '\0';
  local_98.__opaque[3] = '\0';
  local_98.__opaque[4] = '\0';
  local_98.__opaque[5] = '\0';
  local_98.__opaque[6] = '\0';
  local_98.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_98);
  iVar6 = _pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x10),&local_98);
  if (iVar6 == 0) {
    *(undefined **)(lVar9 + 0x100) = puVar7;
    *(undefined1 *)(lVar9 + 0x108) = 0;
    lVar18 = _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::multipathServiceType;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar5 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar5.value) + -8) + 0x68))
              (lVar9 + lVar18,uVar3,CONCAT71(extraout_var,MVar5.value));
    *(class_t **)(lVar9 + 0x48) = pcVar17;
    puVar7 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar7 + 0x20) = pcVar17;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar7[0x18] = 0xff;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x40) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined **)(lVar9 + 0x58) = puVar7;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x40) = 0;
    *(undefined8 *)(lVar9 + 0x70) = 0x2000;
    *(undefined8 *)(lVar9 + 0x68) = 1;
    _swift_unknownObjectRetain_n(pcVar17,2);
    uVar16 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,lVar19);
    *(undefined8 *)(lVar9 + 0x78) = uVar16;
    uVar16 = *(undefined8 *)(lVar9 + 0x90);
    *(undefined8 *)(lVar9 + 0x88) = uVar22;
    *(undefined8 *)(lVar9 + 0x90) = uVar21;
    _swift_retain(uVar22);
    _swift_retain(uVar21);
    _swift_release(uVar16);
    puVar1 = (undefined8 *)
             (lVar9 + _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::
                      nwParametersConfigurator);
    *puVar1 = uVar11;
    puVar1[1] = uVar2;
    FUN_100631d88(0);
    _swift_allocObject();
    lVar18 = lVar9;
    _swift_retain();
    FUN_10062b720();
    _swift_unknownObjectRelease(pcVar17);
    _swift_release(uVar22);
    _swift_release(uVar21);
    FUN_1000fb4c4(lVar19,&DAT_100ff0820,&DAT_100c89460);
    uVar11 = *(undefined8 *)(lVar9 + 0x50);
    *(long *)(lVar9 + 0x50) = lVar18;
    _swift_release(uVar11);
    lVar18 = *(long *)(unaff_x20 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    local_b0 = uVar11;
    if (lVar18 == 0) {
      puVar7 = &DAT_100f1f718;
      _swift_allocObject(&DAT_100f1f718,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar9;
      *(undefined ***)(puVar7 + 0x18) = &PTR_PTR_100f1fc58;
      _swift_retain(lVar9);
      pcVar4 = FUN_100982ed0;
    }
    else {
      puVar7 = &DAT_100f1f7b8;
      _swift_allocObject(&DAT_100f1f7b8,0x20,7);
      *(long *)(puVar7 + 0x10) = lVar18;
      *(undefined8 *)(puVar7 + 0x18) = uVar11;
      pcVar4 = FUN_10093c770;
    }
    uVar16 = local_a8;
    puVar10 = &DAT_100f1f740;
    _swift_allocObject(&DAT_100f1f740,0x20,7);
    *(code **)(puVar10 + 0x10) = pcVar4;
    *(undefined **)(puVar10 + 0x18) = puVar7;
    lVar20 = *(long *)(lVar9 + 0x48);
    _swift_beginAccess(unaff_x20 + 0x38,&local_98,0,0);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    puVar7 = &DAT_100f1f768;
    _swift_allocObject(&DAT_100f1f768,0x50,7);
    uVar21 = local_a0;
    *(undefined8 *)(puVar7 + 0x10) = uVar2;
    *(long *)(puVar7 + 0x18) = lVar9;
    *(undefined ***)(puVar7 + 0x20) = &PTR_PTR_100f1fc58;
    *(code **)(puVar7 + 0x28) = FUN_10093c220;
    *(undefined **)(puVar7 + 0x30) = puVar10;
    *(undefined8 *)(puVar7 + 0x38) = uVar16;
    *(undefined8 *)(puVar7 + 0x40) = local_a0;
    *(undefined8 *)(puVar7 + 0x48) = uVar11;
    puVar12 = &DAT_100ff0970;
    FUN_1000f7830(&DAT_100ff0970,&DAT_100c89518);
    _swift_allocObject();
    *(long *)(puVar12 + 0x20) = lVar20;
    *(undefined ***)(puVar12 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar12 + 0x30) = 0;
    *(undefined8 *)(puVar12 + 0x10) = 0;
    puVar12[0x18] = 0xff;
    *(undefined8 *)(puVar12 + 0x38) = 0;
    *(undefined8 *)(puVar12 + 0x40) = 0;
    puVar13 = &DAT_100f1f790;
    _swift_allocObject(&DAT_100f1f790,0x28,7);
    *(undefined **)(puVar13 + 0x10) = puVar12;
    *(code **)(puVar13 + 0x18) = FUN_100982f38;
    *(undefined **)(puVar13 + 0x20) = puVar7;
    lVar19 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
    _swift_retain_n(lVar20,2);
    _swift_retain(lVar9);
    FUN_100011128(lVar18,local_b0);
    _swift_bridgeObjectRetain(uVar2);
    _swift_retain(puVar10);
    _swift_retain(uVar21);
    _swift_retain(puVar12);
    _swift_retain(puVar7);
    FUN_100992db8(lVar20 + lVar19,FUN_100982f6c,puVar13);
    _swift_release(lVar20);
    _swift_release(puVar7);
    _swift_release(puVar13);
    puVar7 = puVar12;
    FUN_1009821ec(puVar12);
    _swift_release(puVar12);
    _swift_release(lVar9);
    _swift_release(puVar10);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      return puVar7;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100981438);
  (*pcVar4)();
}



/* Address: 0x10098143c | FUN_10098143c */

/* WARNING: Removing unreachable block (ram,0x000100981474) */

code * FUN_10098143c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  puVar1 = &DAT_100f1f6f0;
  _swift_allocObject(&DAT_100f1f6f0,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  pcVar2 = thunk_FUN_100982c4c;
  FUN_100980e70(thunk_FUN_100982c4c,puVar1);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(puVar1);
  return pcVar2;
}



/* Address: 0x100981548 | FUN_100981548 */

void FUN_100981548(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  NWEndpoint NVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined7 extraout_var;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 local_48;
  
  uVar2 = param_1;
  _swift_getObjectType();
  uVar3 = 0;
  local_48 = param_1;
  FUN_1009a2f4c();
  puVar4 = auStack_68;
  local_50 = uVar3;
  FUN_10000cbb0(puVar4);
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
            (puVar4,param_4,CONCAT71(extraout_var,NVar1.value));
  (**(code **)(*(long *)(param_2 + 8) + 0x48))(auStack_68,param_3,uVar2);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1009815f0 | FUN_1009815f0 */

void FUN_1009815f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  (**(code **)(*(long *)(param_4 + 8) + 0x50))();
  uVar1 = param_3;
  _swift_getObjectType();
  FUN_10063dc68();
  _swift_unknownObjectRelease(param_3);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100981674 | FUN_100981674 */

void FUN_100981674(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  code cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  ulong uVar14;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar2 = param_3;
  FUN_100623594(param_3,param_4,param_2);
  puVar3 = &DAT_100f1f8d0;
  _swift_allocObject(&DAT_100f1f8d0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  _swift_retain();
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_3);
  uVar4 = uVar2;
  FUN_10098029c(uVar2,FUN_100982ff0,puVar3);
  _swift_release(uVar2);
  _swift_release_n(puVar3,2);
  puVar3 = &DAT_100f1f8f8;
  _swift_allocObject(&DAT_100f1f8f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  _swift_unknownObjectRetain(param_3);
  uVar2 = uVar4;
  FUN_10098029c(uVar4,FUN_100983018,puVar3);
  _swift_release(uVar4);
  _swift_release(puVar3);
  puVar3 = &DAT_100f1f920;
  _swift_allocObject(&DAT_100f1f920,0x38,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(undefined8 *)(puVar3 + 0x28) = param_8;
  *(undefined8 *)(puVar3 + 0x30) = param_9;
  _swift_unknownObjectRetain(param_3);
  _swift_retain(puVar3);
  _swift_retain(param_8);
  uVar4 = uVar2;
  FUN_10098029c(uVar2,FUN_10098304c,puVar3);
  _swift_release(uVar2);
  _swift_release_n(puVar3,2);
  puVar3 = &DAT_100f1f948;
  _swift_allocObject(&DAT_100f1f948,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  puVar5 = &DAT_100f1f970;
  _swift_allocObject(&DAT_100f1f970,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1006600c4;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  _swift_unknownObjectRetain(param_3);
  pcVar6 = FUN_1008fd66c;
  FUN_10099ffc0(FUN_1008fd66c,puVar5);
  _swift_release(uVar4);
  _swift_release(puVar5);
  puVar3 = &DAT_100f1f998;
  _swift_allocObject(&DAT_100f1f998,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  puVar5 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar12 = *(long *)(pcVar6 + 0x30);
  uVar14 = *(ulong *)(pcVar6 + 0x28);
  *(undefined8 *)(puVar5 + 0x30) = *(undefined8 *)(pcVar6 + 0x30);
  *(ulong *)(puVar5 + 0x28) = uVar14;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined8 *)(puVar5 + 0x18) = 0;
  puVar5[0x20] = 0xff;
  *(undefined8 *)(puVar5 + 0x40) = 0;
  *(undefined8 *)(puVar5 + 0x48) = 0;
  *(undefined8 *)(puVar5 + 0x38) = 0;
  puVar7 = &DAT_100f1f9c0;
  _swift_allocObject(&DAT_100f1f9c0,0x30,7);
  *(code **)(puVar7 + 0x10) = pcVar6;
  *(undefined **)(puVar7 + 0x18) = puVar5;
  *(code **)(puVar7 + 0x20) = FUN_10098305c;
  *(undefined **)(puVar7 + 0x28) = puVar3;
  uVar11 = uVar14;
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar12 + 0x10);
  _swift_unknownObjectRetain_n(param_3,2);
  _swift_retain_n(pcVar6,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(puVar3,2);
  _swift_unknownObjectRetain(uVar14);
  uVar14 = uVar11;
  (*pcVar13)(uVar11,lVar12);
  if ((uVar14 & 1) == 0) {
    puVar8 = &DAT_100f1f9e8;
    _swift_allocObject(&DAT_100f1f9e8,0x28,7);
    *(code **)(puVar8 + 0x10) = pcVar6;
    *(code **)(puVar8 + 0x18) = FUN_1009830a8;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    pcVar13 = *(code **)(lVar12 + 0x18);
    _swift_retain(pcVar6);
    _swift_retain(puVar7);
    (*pcVar13)(thunk_FUN_1009806c8,puVar8,uVar11,lVar12);
    _swift_release(puVar3);
    _swift_release(pcVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(pcVar6 + 0x10,auStack_78,0,0);
    uVar2 = *(undefined8 *)(pcVar6 + 0x10);
    uVar4 = *(undefined8 *)(pcVar6 + 0x18);
    cVar1 = pcVar6[0x20];
    uVar11 = (ulong)(byte)cVar1;
    if (cVar1 == (code)0x1) {
      uVar9 = param_3;
      _swift_getObjectType(param_3);
      FUN_1008fde58(uVar2,uVar4,1);
      FUN_10061cf14(2,0,uVar9,param_4);
      _swift_willThrow();
      uVar11 = 1;
      uVar9 = uVar2;
      uVar10 = uVar4;
      FUN_100999868(uVar2,uVar4,1);
      FUN_1009082bc(uVar2,uVar4,1);
    }
    else if (cVar1 == (code)0xff) {
      _swift_beginAccess(pcVar6 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(FUN_1009830a8,puVar7);
      _swift_endAccess(auStack_90);
      uVar11 = 0;
      uVar10 = 0;
      uVar9 = 0;
    }
    else {
      FUN_100999868(uVar2,uVar4);
      uVar10 = uVar4;
      uVar9 = uVar2;
    }
    FUN_1006486f8(uVar9,uVar10,uVar11);
    FUN_100004550(uVar9,uVar10);
    _swift_release(puVar3);
    _swift_release(pcVar6);
    _swift_bridgeObjectRelease(uVar11);
  }
  _swift_unknownObjectRelease(param_3);
  _swift_release(puVar3);
  _swift_release(puVar5);
  _swift_release(pcVar6);
  _swift_release(puVar7);
  *param_1 = puVar5;
  return;
}



/* Address: 0x100981b34 | FUN_100981b34 */

void FUN_100981b34(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _swift_getObjectType();
  lVar1 = *(long *)(param_2 + 8);
  (**(code **)(lVar1 + 0x50))();
  _swift_unknownObjectRelease();
  FUN_100622844("NIOTransportServices/NIOTSDatagramConnectionBootstrap.swift",0x3b,2,0xd6,param_1,
                lVar1);
  return;
}



/* Address: 0x100981bb0 | FUN_100981bb0 */

long FUN_100981bb0(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 param_5)

{
  char cVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_90 [24];
  long local_78 [3];
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar15 = *(long *)(param_2 + 8);
  pcVar12 = *(code **)(lVar15 + 0x50);
  lVar3 = lVar2;
  lVar10 = lVar15;
  local_78[0] = param_1;
  (*pcVar12)();
  lVar4 = lVar3;
  _swift_getObjectType();
  puVar5 = PTR___type_metadata_for____100eae0c8;
  FUN_1000f4a44();
  FUN_100988f00(lVar4,puVar5 + 8,lVar10);
  _swift_unknownObjectRelease(lVar3);
  (*param_3)(param_1,param_2,lVar4);
  local_78[0] = param_1;
  (*pcVar12)(lVar2);
  _swift_getObjectType();
  puVar5 = &DAT_100f1fa10;
  _swift_allocObject(&DAT_100f1fa10,0x30,7);
  *(long *)(puVar5 + 0x10) = lVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  *(long *)(puVar5 + 0x20) = param_1;
  *(long *)(puVar5 + 0x28) = param_2;
  pcVar13 = *(code **)(lVar15 + 0x38);
  _swift_retain(lVar4);
  _swift_unknownObjectRetain(param_1);
  pcVar12 = FUN_1009830c4;
  puVar11 = puVar5;
  (*pcVar13)();
  _swift_unknownObjectRelease(lVar2);
  _swift_release(puVar5);
  puVar5 = &DAT_100f1fa38;
  _swift_allocObject(&DAT_100f1fa38,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  *(code **)(puVar5 + 0x18) = pcVar12;
  *(undefined **)(puVar5 + 0x20) = puVar11;
  puVar6 = &DAT_100f1fa60;
  _swift_allocObject(&DAT_100f1fa60,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009830e0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(long *)(puVar6 + 0x20) = lVar4;
  uVar7 = *(ulong *)(lVar4 + 0x20);
  lVar2 = *(long *)(lVar4 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar2 + 0x10);
  _swift_retain_n(lVar4,3);
  _swift_retain_n(param_5,2);
  _swift_retain_n(puVar11,2);
  _swift_retain_n(puVar5,2);
  uVar8 = uVar7;
  (*pcVar13)(uVar7,lVar2);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100f1fa88;
    _swift_allocObject(&DAT_100f1fa88,0x28,7);
    *(long *)(puVar9 + 0x10) = lVar4;
    *(code **)(puVar9 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar2 + 0x18);
    _swift_retain(lVar4);
    _swift_retain(puVar6);
    (*pcVar12)(FUN_1008db360,puVar9,uVar7,lVar2);
    _swift_release(puVar11);
    _swift_release(param_5);
    _swift_release(puVar9);
    _swift_release(lVar4);
    _swift_release(puVar5);
    _swift_release(puVar6);
  }
  else {
    _swift_beginAccess(lVar4 + 0x10,local_78,0,0);
    cVar1 = *(char *)(lVar4 + 0x18);
    if (cVar1 == -1) {
      _swift_beginAccess(lVar4 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar6);
      _swift_endAccess(auStack_90);
    }
    else {
      uVar14 = *(undefined8 *)(lVar4 + 0x10);
      FUN_100308524(uVar14,cVar1);
      FUN_10099a394(param_5,pcVar12,puVar11);
      FUN_100308538(uVar14,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(puVar11);
    _swift_release(param_5);
    _swift_release(lVar4);
    _swift_release(puVar5);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(lVar4);
  _swift_release(puVar11);
  _swift_release(param_5);
  _swift_release(puVar5);
  return lVar4;
}



/* Address: 0x100981f28 | FUN_100981f28 */

void FUN_100981f28(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  puVar2 = param_1;
  FUN_100980638();
  puVar3 = &DAT_100eeb710;
  uVar8 = 0;
  _swift_allocError(&DAT_100eeb710,puVar2,0,0);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  uVar4 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar5 = uVar4;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f1fab0;
    _swift_allocObject(&DAT_100f1fab0,0x20,7);
    *(undefined8 **)(puVar6 + 0x10) = param_1;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(puVar3);
    (*pcVar9)(FUN_1008d678c,puVar6,uVar4,lVar1);
    _swift_release(puVar6);
  }
  else {
    puVar6 = puVar3;
    thunk_FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    FUN_100004550(puVar6,lVar7);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_errorRelease(puVar3);
  _swift_getObjectType(param_3);
  FUN_10061cf14(2,0,param_3,param_4);
  return;
}



/* Address: 0x100982084 | FUN_100982084 */

void FUN_100982084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getObjectType(param_2);
  FUN_10061cf14(2,0,param_2,param_3);
  _swift_willThrow();
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x1009820e0 | FUN_1009820e0 */

void FUN_1009820e0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1000fb4c4(unaff_x20 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos,
                &DAT_100ff0820,&DAT_100c89460);
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::udpOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::tlsOptions));
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::
                 nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::
                nwParametersConfigurator))[1]);
  return;
}



/* Address: 0x100982160 | FUN_100982160 */

void FUN_100982160(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1000fb4c4(unaff_x20 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos,
                &DAT_100ff0820,&DAT_100c89460);
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::udpOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::tlsOptions));
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::
                 nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::
                nwParametersConfigurator))[1]);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009821ec | FUN_1009821ec */

undefined * FUN_1009821ec(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar2 = &DAT_100f1f7e0;
  _swift_allocObject(&DAT_100f1f7e0,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f1f808;
    _swift_allocObject(&DAT_100f1f808,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_100982fac;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(FUN_1008db360,puVar6,uVar3,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_100982fac,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_100982410(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return puVar1;
}



/* Address: 0x100982410 | FUN_100982410 */

undefined8 FUN_100982410(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (param_2[0x20] != -1) {
      return 0;
    }
    *(long *)(param_2 + 0x10) = lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    _swift_errorRetain(lVar13);
    return uVar5;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100982924);
    (*pcVar14)();
  }
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  uVar4 = uVar7;
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  FUN_100974ed4(lVar13,cVar3);
  FUN_100974ed4(lVar13,cVar3);
  _swift_unknownObjectRetain(uVar7);
  (*pcVar14)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar7);
  if ((uVar4 & 1) != 0) {
    puVar6 = &DAT_100f1f8a8;
    _swift_allocObject(&DAT_100f1f8a8,0x20,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar13;
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar13 + 0x20) != -1) {
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      FUN_100999868(uVar5,*(undefined8 *)(lVar13 + 0x18));
      _swift_retain(param_2);
      _swift_release(puVar6);
      FUN_100642b94(lVar13,cVar3);
      return uVar5;
    }
    _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(param_2);
    FUN_10064967c(FUN_1008fcb8c,puVar6);
    _swift_endAccess(auStack_a8);
    FUN_100642b94(lVar13,cVar3);
    param_2 = puVar6;
    goto LAB_1009828e4;
  }
  puVar6 = &DAT_100f1f830;
  _swift_allocObject(&DAT_100f1f830,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009806ac;
  *(undefined **)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar13;
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  _swift_retain(param_2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  uVar4 = uVar7;
  (*pcVar14)(uVar7,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_2);
    puVar8 = &DAT_100f1f858;
    _swift_allocObject(&DAT_100f1f858,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar13;
    *(code **)(puVar8 + 0x18) = FUN_1009806b8;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    pcVar14 = *(code **)(lVar1 + 0x18);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(puVar6);
    (*pcVar14)(FUN_1009806c8,puVar8,uVar7,lVar1);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    cVar11 = *(char *)(lVar13 + 0x20);
    if (cVar11 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar1 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar1 + 0x10);
      uVar12 = 1;
      FUN_1009806d4(uVar5,uVar2,1);
      uVar4 = uVar7;
      lVar10 = lVar1;
      (*pcVar14)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f1f880;
        _swift_allocObject(&DAT_100f1f880,0x20,7);
        *(undefined **)(puVar8 + 0x10) = param_2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        pcVar14 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1009806d4(uVar5,uVar2,1);
        (*pcVar14)(FUN_1009806f4,puVar8,uVar7,lVar1);
        _swift_release(param_2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = uVar5;
        FUN_10092b398(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar9,lVar10);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar12);
      }
      cVar11 = '\x01';
LAB_100982888:
      FUN_1009082bc(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1009806d4(uVar5,uVar2,cVar11);
        FUN_100988c80(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_100982888;
      }
      _swift_release(param_2);
      _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
      FUN_10064967c(FUN_1009806b8,puVar6);
      _swift_endAccess(auStack_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  FUN_100642b94(lVar13,cVar3);
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
LAB_1009828e4:
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
  return 0;
}



/* Address: 0x100982924 | FUN_100982924 */

void FUN_100982924(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject(param_2,*(undefined4 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x34));
  FUN_100982a38(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100982974 | FUN_100982974 */

long FUN_100982974(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  DispatchQoS DVar4;
  Options *pOVar5;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 10000000000;
  uVar3 = param_1;
  FUN_100622d2c();
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  lVar2 = _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))(param_2 + lVar2,1,1,DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::udpOptions;
  pOVar5 = Network::NWProtocolUDP::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar5,*(undefined4 *)(pOVar5 + 0x30),*(undefined2 *)(pOVar5 + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(pOVar5);
  *(Options **)(param_2 + lVar2) = pOVar5;
  *(undefined8 *)
   (param_2 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::tlsOptions) = 0;
  puVar1 = (undefined8 *)
           (param_2 +
           _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(undefined ***)(param_2 + 0x18) = &PTR_PTR_100f22918;
  return param_2;
}



/* Address: 0x100982a38 | FUN_100982a38 */

long FUN_100982a38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  DispatchQoS DVar4;
  Options *pOVar5;
  
  *(undefined8 *)(param_2 + 0x20) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  *(undefined8 *)(param_2 + 0x30) = 10000000000;
  uVar3 = param_1;
  FUN_100622d2c();
  *(undefined8 *)(param_2 + 0x38) = uVar3;
  lVar2 = _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::qos;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))(param_2 + lVar2,1,1,DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::udpOptions;
  pOVar5 = Network::NWProtocolUDP::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar5,*(undefined4 *)(pOVar5 + 0x30),*(undefined2 *)(pOVar5 + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(pOVar5);
  *(Options **)(param_2 + lVar2) = pOVar5;
  *(undefined8 *)
   (param_2 + _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::tlsOptions) = 0;
  puVar1 = (undefined8 *)
           (param_2 +
           _TtC20NIOTransportServices32NIOTSDatagramConnectionBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(undefined8 *)(param_2 + 0x18) = param_4;
  return param_2;
}



/* Address: 0x100982b00 | FUN_100982b00 */

undefined8 FUN_100982b00(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100982b50 | FUN_100982b50 */

void FUN_100982b50(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0850 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a8e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a8e0,&DAT_100f21b58);
  DAT_100ff0850 = pTVar1;
  return;
}



/* Address: 0x100982b90 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  FUN_100982b98();
  return;
}



/* Address: 0x100982b94 | thunk_FUN_100982bf0 */

void thunk_FUN_100982bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x50);
  FUN_100981548(param_1,param_2,param_3,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100982b98 | FUN_100982b98 */

void FUN_100982b98(void)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 8))
            (unaff_x20 + (uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff)),
             CONCAT71(extraout_var,NVar1.value));
  _swift_deallocObject();
  return;
}



/* Address: 0x100982bf0 | FUN_100982bf0 */

void FUN_100982bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x50);
  FUN_100981548(param_1,param_2,param_3,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100982c44 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  FUN_10093cdc8();
  return;
}



/* Address: 0x100982c48 | thunk_FUN_100982c4c */

void thunk_FUN_100982c4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x18))(uVar1,param_3,param_1);
  return;
}



/* Address: 0x100982c4c | FUN_100982c4c */

void FUN_100982c4c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x18))(uVar1,param_3,param_1);
  return;
}



/* Address: 0x100982cb0 | FUN_100982cb0 */

void FUN_100982cb0(void)

{
  FUN_100982cb8(0);
  return;
}



/* Address: 0x100982cb8 | FUN_100982cb8 */

void FUN_100982cb8(undefined8 param_1)

{
  if (DAT_100ff0888 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc73fc);
  return;
}



/* Address: 0x100982cf0 | FUN_100982cf0 */

void FUN_100982cf0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_60 = &DAT_100c894b8;
  puStack_58 = &DAT_100c894d0;
  local_50 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puVar2 = &DAT_100ff0898;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100ff0898,PTR_typeMetadataAccessor_100eae6c8);
  if (puVar2 < (undefined *)0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_30 = &DAT_100c894e8;
    puStack_28 = &DAT_100c894d0;
    _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100982db4 | FUN_100982db4 */

void FUN_100982db4(void)

{
  FUN_1001a1320(0,&DAT_100ff07a8,FUN_10097ee38);
  return;
}



/* Address: 0x100982ddc | FUN_100982ddc */

void FUN_100982ddc(void)

{
  FUN_1001a1320(0,&DAT_100ff0950,FUN_100982e04);
  return;
}



/* Address: 0x100982e04 | FUN_100982e04 */

void FUN_100982e04(void)

{
  NWParameters *pNVar1;
  undefined8 uVar2;
  
  if (DAT_100ff0958 != 0) {
    return;
  }
  pNVar1 = Network::NWParameters::typeMetadataAccessor();
  uVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,pNVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff0958 = uVar2;
  return;
}



/* Address: 0x100982e5c | FUN_100982e5c */

undefined8 FUN_100982e5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100982eac | FUN_100982eac */

void FUN_100982eac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100982ed0 | FUN_100982ed0 */

void FUN_100982ed0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009815f0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100982ed8 | FUN_100982ed8 */

void FUN_100982ed8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100982efc | FUN_100982efc */

void FUN_100982efc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100982f38 | FUN_100982f38 */

void FUN_100982f38(void)

{
  long unaff_x20;
  
  FUN_100981674(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100982f5c | FUN_100982f5c */

void FUN_100982f5c(void)

{
  FUN_1009830ec(PTR__swift_release_100eae3e8,0x28);
  return;
}



/* Address: 0x100982f6c | FUN_100982f6c */

void FUN_100982f6c(void)

{
  long unaff_x20;
  
  FUN_1009a04a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100982f78 | FUN_100982f78 */

void FUN_100982f78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100982fac | FUN_100982fac */

void FUN_100982fac(void)

{
  long unaff_x20;
  
  FUN_10097f260(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100982fb8 | FUN_100982fb8 */

void FUN_100982fb8(void)

{
  FUN_1008fed60(PTR__swift_release_100eae3e8,0x28);
  return;
}



/* Address: 0x100982fc8 | FUN_100982fc8 */

void FUN_100982fc8(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100982fd4 | FUN_100982fd4 */

void FUN_100982fd4(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100982fe0 | FUN_100982fe0 */

void FUN_100982fe0(void)

{
  FUN_1008fed60(PTR__swift_unknownObjectRelease_100eae458,0x30);
  return;
}



/* Address: 0x100982ff0 | FUN_100982ff0 */

void FUN_100982ff0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100983018 | FUN_100983018 */

void FUN_100983018(void)

{
  long unaff_x20;
  
  FUN_100981b34(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100983020 | FUN_100983020 */

void FUN_100983020(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10098304c | FUN_10098304c */

void FUN_10098304c(void)

{
  long unaff_x20;
  
  FUN_100981bb0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10098305c | FUN_10098305c */

void FUN_10098305c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100982084(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100983074 | FUN_100983074 */

void FUN_100983074(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009830a8 | FUN_1009830a8 */

void FUN_1009830a8(void)

{
  long unaff_x20;
  
  FUN_1009955a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009830b4 | FUN_1009830b4 */

void FUN_1009830b4(void)

{
  FUN_1009830ec(PTR__swift_unknownObjectRelease_100eae458,0x30);
  return;
}



/* Address: 0x1009830c4 | FUN_1009830c4 */

void FUN_1009830c4(void)

{
  long unaff_x20;
  
  FUN_100981f28(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009830e0 | FUN_1009830e0 */

void FUN_1009830e0(void)

{
  long unaff_x20;
  
  FUN_10099a394(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009830ec | FUN_1009830ec */

void FUN_1009830ec(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100983130 | thunk_FUN_100982ed8 */

void thunk_FUN_100982ed8(void)

{
  FUN_100982ed8();
  return;
}



/* Address: 0x100983134 | thunk_FUN_100982eac */

void thunk_FUN_100982eac(void)

{
  FUN_100982eac();
  return;
}



/* Address: 0x100983138 | thunk_FUN_100982eac */

void thunk_FUN_100982eac(void)

{
  FUN_100982eac();
  return;
}



/* Address: 0x10098313c | thunk_FUN_100982ed8 */

void thunk_FUN_100982ed8(void)

{
  FUN_100982ed8();
  return;
}



/* Address: 0x100983140 | thunk_FUN_100982eac */

void thunk_FUN_100982eac(void)

{
  FUN_100982eac();
  return;
}



/* Address: 0x100983144 | thunk_FUN_100982bf0 */

void thunk_FUN_100982bf0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x50);
  FUN_100981548(param_1,param_2,param_3,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}


