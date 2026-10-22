/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100983c24 | FUN_100983c24 */

undefined8 FUN_100983c24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  _swift_getObjectType(param_3);
  uVar1 = param_1;
  FUN_100986c28(param_1,param_3);
  _swift_unknownObjectRelease(param_1);
  _swift_unknownObjectRelease(param_3);
  return uVar1;
}



/* Address: 0x100983ca4 | FUN_100983ca4 */

long FUN_100983ca4(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  _swift_allocObject();
  lVar2 = param_1;
  _swift_retain_n(param_1,2);
  FUN_100986688();
  if (lVar2 != 0) {
    _swift_release(param_1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100983d0c);
  (*pcVar1)();
}



/* Address: 0x100983d0c | FUN_100983d0c */

void FUN_100983d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  FUN_1009868f8(param_1,param_3,param_4,unaff_x20,uVar1,param_2);
  return;
}



/* Address: 0x100983d78 | FUN_100983d78 */

void FUN_100983d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getObjectType();
  FUN_1009868f8(param_1,param_3,param_4);
  return;
}



/* Address: 0x100983dcc | FUN_100983dcc */

long FUN_100983dcc(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  _swift_retain(param_1);
  _swift_retain(param_2);
  lVar2 = param_1;
  FUN_100986688(param_1,param_2,&PTR_PTR_100f22918,unaff_x20);
  if (lVar2 != 0) {
    _swift_release(param_1);
    _swift_release(param_2);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100983e54);
  (*pcVar1)();
}



/* Address: 0x100983e54 | FUN_100983e54 */

void FUN_100983e54(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::bindTimeout);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = 0;
  _swift_retain();
  return;
}



/* Address: 0x100983e70 | FUN_100983e70 */

void FUN_100983e70(undefined8 param_1)

{
  FUN_100983e88(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS);
  return;
}



/* Address: 0x100983e7c | FUN_100983e7c */

void FUN_100983e7c(undefined8 param_1)

{
  FUN_100983e88(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS);
  return;
}



/* Address: 0x100983e88 | FUN_100983e88 */

void FUN_100983e88(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  DispatchQoS DVar2;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  puVar3 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,DVar2.unknown);
  (**(code **)(lVar4 + 0x38))(puVar3,0,1,DVar2.unknown);
  lVar4 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar4,auStack_58,0x21,0);
  FUN_100982b00(puVar3,unaff_x20 + lVar4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x100983f60 | FUN_100983f60 */

void FUN_100983f60(undefined8 param_1)

{
  FUN_100983f78(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions);
  return;
}



/* Address: 0x100983f6c | FUN_100983f6c */

void FUN_100983f6c(undefined8 param_1)

{
  FUN_100983f78(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions
               );
  return;
}



/* Address: 0x100983f78 | FUN_100983f78 */

void FUN_100983f78(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + *param_2);
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _swift_retain();
  _swift_release(uVar1);
  _swift_retain();
  return;
}



/* Address: 0x100983fac | FUN_100983fac */

void FUN_100983fac(undefined8 param_1)

{
  FUN_100983fc4(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions);
  return;
}



/* Address: 0x100983fb8 | FUN_100983fb8 */

void FUN_100983fb8(undefined8 param_1)

{
  FUN_100983fc4(param_1,&_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions
               );
  return;
}



/* Address: 0x100983fc4 | FUN_100983fc4 */

void FUN_100983fc4(undefined8 param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + *param_2);
  *(undefined8 *)(unaff_x20 + *param_2) = param_1;
  _swift_release(uVar1);
  _swift_retain(param_1);
  _swift_retain();
  return;
}



/* Address: 0x100983ffc | FUN_100983ffc */

void FUN_100983ffc(undefined8 param_1,undefined8 param_2)

{
  FUN_100984014(param_1,param_2,
                &_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 nwParametersConfigurator);
  return;
}



/* Address: 0x100984008 | FUN_100984008 */

void FUN_100984008(undefined8 param_1,undefined8 param_2)

{
  FUN_100984014(param_1,param_2,
                &_TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 childNWParametersConfigurator);
  return;
}



/* Address: 0x100984014 | FUN_100984014 */

void FUN_100984014(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x20 + *param_3);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x100984054 | FUN_100984054 */

undefined * FUN_100984054(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long unaff_x20;
  
  if (param_3 >> 0x10 == 0) {
    puVar5 = &DAT_100f1fdc0;
    _swift_allocObject(&DAT_100f1fdc0,0x28,7);
    *(undefined8 *)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = param_2;
    *(ulong *)(puVar5 + 0x20) = param_3;
    _swift_bridgeObjectRetain(param_2);
    puVar1 = (undefined *)0x0;
    FUN_1009842b8(0,1,FUN_100986d20,puVar5);
    _swift_release(puVar5);
  }
  else {
    puVar2 = *(ulong **)(unaff_x20 + 0x10);
    lVar7 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType();
    (**(code **)(lVar7 + 0x10))();
    puVar3 = puVar2;
    _swift_getObjectType();
    puVar4 = puVar3;
    FUN_100982b50();
    puVar5 = &DAT_100f21b58;
    _swift_allocError(&DAT_100f21b58,puVar4,0,0);
    *puVar4 = param_3;
    puVar6 = &DAT_100ff07c0;
    FUN_1000f7830(&DAT_100ff07c0,&DAT_100c89400);
    puVar1 = puVar5;
    FUN_10063dd74(puVar5,puVar3,puVar6,lVar7);
    _swift_unknownObjectRelease(puVar2);
    _swift_errorRelease(puVar5);
  }
  return puVar1;
}



/* Address: 0x100984170 | FUN_100984170 */

/* WARNING: Removing unreachable block (ram,0x0001009841ac) */
/* WARNING: Removing unreachable block (ram,0x0001009841cc) */
/* WARNING: Removing unreachable block (ram,0x000100984248) */

void FUN_100984170(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  FUN_100668048(param_3,param_4,param_5);
  uVar1 = 0;
  FUN_100987df0(0);
  FUN_10061d040(param_3,param_2,uVar1,&PTR_PTR_100f24068);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1009842b8 | FUN_1009842b8 */

undefined * FUN_1009842b8(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  Cache CVar1;
  Implementation IVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  MultipathServiceType MVar9;
  int iVar10;
  undefined *puVar11;
  class_t *pcVar12;
  DispatchQoS DVar13;
  undefined7 extraout_var;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined7 extraout_var_00;
  long lVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  long unaff_x20;
  class_t *pcVar22;
  undefined8 uVar23;
  ulong uVar24;
  long lVar25;
  undefined1 *puVar26;
  ulong uVar27;
  undefined1 auStack_180 [8];
  ulong local_178;
  undefined1 *local_170;
  undefined8 local_168;
  undefined8 local_160;
  long local_158;
  undefined *local_150;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  Implementation local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  ulong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  pthread_mutexattr_t local_c8;
  undefined1 auStack_b8 [24];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar11 = &DAT_100ff0820;
  local_d0 = param_1;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  uVar20 = *(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar26 = auStack_180 + -uVar20;
  lVar25 = (long)puVar26 - uVar20;
  pcVar22 = *(class_t **)(unaff_x20 + 0x10);
  lVar21 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar21 + 0x10))();
  pcVar12 = pcVar22;
  _object_getClass();
  if (pcVar12 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100984e30);
    (*pcVar8)();
  }
  CVar1 = *(Cache *)(unaff_x20 + 0x30);
  IVar2 = *(Implementation *)(unaff_x20 + 0x38);
  local_140 = param_3;
  local_130 = param_4;
  local_128 = IVar2;
  if (CVar1 == 0) {
    _swift_unknownObjectRetain(pcVar22);
    pcVar8 = FUN_100987018;
    pcVar12 = pcVar22;
  }
  else {
    pcVar12 = (class_t *)&DAT_100f1ff00;
    _swift_allocObject(&DAT_100f1ff00,0x20,7);
    pcVar12->cache = CVar1;
    pcVar12->vtable = IVar2;
    pcVar8 = FUN_10093c770;
  }
  puVar11 = &DAT_100f1fe88;
  local_144 = param_2;
  _swift_allocObject(&DAT_100f1fe88,0x20,7);
  *(code **)(puVar11 + 0x10) = pcVar8;
  *(class_t **)(puVar11 + 0x18) = pcVar12;
  uVar15 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x48);
  local_150 = puVar11;
  _swift_beginAccess(unaff_x20 + 0x50,auStack_88,0,0);
  local_d8 = *(undefined8 *)(unaff_x20 + 0x50);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_a0,0,0);
  lVar21 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS;
  local_e0 = *(undefined8 *)(unaff_x20 + 0x58);
  local_e8 = *(ulong *)(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions);
  local_f0 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions);
  local_100 = *(undefined8 *)
               (unaff_x20 +
               _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::nwParametersConfigurator)
  ;
  local_f8 = ((undefined8 *)
             (unaff_x20 +
             _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::nwParametersConfigurator))
             [1];
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x28);
  local_120 = *(undefined8 *)(unaff_x20 + 0x20);
  local_158 = lVar25;
  local_138 = uVar15;
  local_108 = uVar14;
  if (local_d0 == 0) {
    _swift_beginAccess(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar21,lVar25);
    uVar24 = *(ulong *)(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions);
    local_d0 = *(long *)(unaff_x20 +
                        _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions)
    ;
    local_160 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 childNWParametersConfigurator);
    local_168 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                childNWParametersConfigurator))[1];
    DVar13 = Dispatch::DispatchQoS::typeMetadataAccessor();
    local_170 = puVar26;
    (**(code **)(*(long *)(DVar13.unknown + -8) + 0x38))(puVar26,1,1);
    lVar25 = 0;
    FUN_100987df0();
    uVar20 = (ulong)*(uint *)(lVar25 + 0x30);
    uVar19 = (ulong)*(ushort *)(lVar25 + 0x34);
    _swift_allocObject();
    lVar21 = lVar25;
    FUN_100611728();
    *(long *)(lVar25 + 0x10) = lVar21;
    *(ulong *)(lVar25 + 0x18) = uVar20;
    *(ulong *)(lVar25 + 0x20) = uVar19;
    *(undefined **)(lVar25 + 0x28) = DVar13.unknown;
    *(undefined8 *)(lVar25 + 0x48) = 0;
    *(undefined8 *)(lVar25 + 0x58) = 0;
    *(undefined8 *)(lVar25 + 0x80) = 0;
    *(undefined8 *)(lVar25 + 0x30) = 0;
    *(undefined8 *)(lVar25 + 0x38) = 0;
    *(undefined2 *)(lVar25 + 0x88) = 0x101;
    puVar11 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar11[0x10] = 0;
    *(undefined **)(lVar25 + 0x90) = puVar11;
    *(undefined2 *)(lVar25 + 0x98) = 0x100;
    *(undefined4 *)(lVar25 + 0x9a) = 0;
    lVar21 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar9 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar9.value) + -8) + 0x68))
              (lVar25 + lVar21,uVar3,CONCAT71(extraout_var_00,MVar9.value));
    puVar5 = (undefined8 *)(lVar25 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    lVar21 = DAT_101058280;
    puVar11 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    uVar20 = local_e8;
    local_c8.__sig = 0;
    local_c8.__opaque[0] = '\0';
    local_c8.__opaque[1] = '\0';
    local_c8.__opaque[2] = '\0';
    local_c8.__opaque[3] = '\0';
    local_c8.__opaque[4] = '\0';
    local_c8.__opaque[5] = '\0';
    local_c8.__opaque[6] = '\0';
    local_c8.__opaque[7] = '\0';
    _swift_retain(local_e8);
    _swift_retain(uVar24);
    _swift_unknownObjectRetain(pcVar22);
    FUN_100011128(CVar1,local_128);
    FUN_100011128(uVar15,uVar14);
    _swift_retain(local_f0);
    _swift_bridgeObjectRetain(local_d8);
    _swift_bridgeObjectRetain(local_e0);
    _swift_retain(uVar20);
    _swift_retain(uVar24);
    FUN_100011128(local_100,local_f8);
    _swift_retain(local_d0);
    FUN_100011128(local_160,local_168);
    _pthread_mutexattr_init(&local_c8);
    iVar10 = _pthread_mutex_init((pthread_mutex_t *)(puVar11 + 0x10),&local_c8);
    uVar20 = local_e8;
    if (iVar10 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100984e38);
      (*pcVar8)();
    }
    local_128 = uVar24 | 0x8000000000000000;
    uVar19 = local_e8 | 0x8000000000000000;
    *(undefined **)(lVar25 + lVar21) = puVar11;
    *(class_t **)(lVar25 + 0x40) = pcVar22;
    puVar11 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar11 + 0x20) = pcVar22;
    *(undefined ***)(puVar11 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    puVar11[0x18] = 0xff;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined **)(lVar25 + 0x50) = puVar11;
    _swift_unknownObjectRetain_n(pcVar22,2);
    puVar26 = local_170;
    uVar15 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,local_170);
    lVar21 = local_158;
    *(undefined8 *)(lVar25 + 0x78) = uVar15;
    *(ulong *)(lVar25 + DAT_101058288) = uVar19;
    *(undefined8 *)(lVar25 + 0x60) = local_f0;
    *(undefined8 *)(lVar25 + 0x68) = local_100;
    *(undefined8 *)(lVar25 + 0x70) = local_f8;
    puVar5 = (undefined8 *)(lVar25 + DAT_101058258);
    puVar5[1] = uStack_118;
    *puVar5 = local_120;
    FUN_100982e5c(local_158,lVar25 + DAT_101058260);
    *(Implementation *)(lVar25 + DAT_101058290) = local_128;
    *(long *)(lVar25 + DAT_101058268) = local_d0;
    puVar5 = (undefined8 *)(lVar25 + DAT_101058270);
    *puVar5 = local_160;
    puVar5[1] = local_168;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(local_120);
    lVar16 = lVar25;
    _swift_retain();
    FUN_10062b720();
    _swift_release(uVar20);
    _swift_release(uVar24);
    _swift_unknownObjectRelease(pcVar22);
    FUN_100986e74(puVar26);
    FUN_100986e74(lVar21);
    uVar15 = *(undefined8 *)(lVar25 + 0x48);
    *(long *)(lVar25 + 0x48) = lVar16;
  }
  else {
    local_170 = *(undefined1 **)(unaff_x20 + 0x28);
    _swift_beginAccess(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS,
                       auStack_b8,0,0);
    FUN_100982e5c(unaff_x20 + lVar21,lVar25);
    uVar27 = *(ulong *)(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions);
    uVar24 = *(ulong *)(unaff_x20 +
                       _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions);
    local_160 = *(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 childNWParametersConfigurator);
    local_168 = ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                childNWParametersConfigurator))[1];
    DVar13 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar13.unknown + -8) + 0x38))(puVar26,1,1);
    lVar25 = 0;
    FUN_100987df0();
    uVar20 = (ulong)*(uint *)(lVar25 + 0x30);
    uVar19 = (ulong)*(ushort *)(lVar25 + 0x34);
    _swift_allocObject();
    lVar21 = lVar25;
    FUN_100611728();
    *(long *)(lVar25 + 0x10) = lVar21;
    *(ulong *)(lVar25 + 0x18) = uVar20;
    *(ulong *)(lVar25 + 0x20) = uVar19;
    *(undefined **)(lVar25 + 0x28) = DVar13.unknown;
    *(undefined8 *)(lVar25 + 0x48) = 0;
    *(undefined8 *)(lVar25 + 0x58) = 0;
    *(undefined8 *)(lVar25 + 0x80) = 0;
    *(undefined8 *)(lVar25 + 0x30) = 0;
    *(undefined8 *)(lVar25 + 0x38) = 0;
    *(undefined2 *)(lVar25 + 0x88) = 0x101;
    puVar11 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    _swift_allocObject();
    puVar11[0x10] = 0;
    *(undefined **)(lVar25 + 0x90) = puVar11;
    *(undefined2 *)(lVar25 + 0x98) = 0x100;
    *(undefined4 *)(lVar25 + 0x9a) = 0;
    lVar21 = DAT_101058250;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar9 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar9.value) + -8) + 0x68))
              (lVar25 + lVar21,uVar3,CONCAT71(extraout_var,MVar9.value));
    puVar5 = (undefined8 *)(lVar25 + DAT_101058278);
    puVar5[1] = 0xf000000000000007;
    *puVar5 = 0xf000000000000007;
    lVar21 = DAT_101058280;
    puVar11 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_c8.__sig = 0;
    local_c8.__opaque[0] = '\0';
    local_c8.__opaque[1] = '\0';
    local_c8.__opaque[2] = '\0';
    local_c8.__opaque[3] = '\0';
    local_c8.__opaque[4] = '\0';
    local_c8.__opaque[5] = '\0';
    local_c8.__opaque[6] = '\0';
    local_c8.__opaque[7] = '\0';
    _swift_retain_n(local_e8,2);
    _swift_retain_n(uVar27,2);
    _swift_unknownObjectRetain(pcVar22);
    FUN_100011128(CVar1,local_128);
    lVar16 = local_d0;
    FUN_100011128(uVar15,local_108);
    _swift_retain(local_f0);
    _swift_bridgeObjectRetain(local_d8);
    _swift_bridgeObjectRetain(local_e0);
    _swift_retain(lVar16);
    FUN_100011128(local_100,local_f8);
    local_128 = uVar24;
    _swift_retain(uVar24);
    FUN_100011128(local_160,local_168);
    _pthread_mutexattr_init(&local_c8);
    iVar10 = _pthread_mutex_init((pthread_mutex_t *)(puVar11 + 0x10),&local_c8);
    uVar20 = local_e8;
    if (iVar10 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100984e34);
      (*pcVar8)();
    }
    uVar19 = local_e8 | 0x8000000000000000;
    *(undefined **)(lVar25 + lVar21) = puVar11;
    *(class_t **)(lVar25 + 0x40) = pcVar22;
    puVar11 = &DAT_100ff07b8;
    local_178 = uVar27;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar11 + 0x20) = pcVar22;
    *(undefined ***)(puVar11 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar11 + 0x30) = 0;
    *(undefined8 *)(puVar11 + 0x10) = 0;
    puVar11[0x18] = 0xff;
    *(undefined8 *)(puVar11 + 0x38) = 0;
    *(undefined8 *)(puVar11 + 0x40) = 0;
    *(undefined **)(lVar25 + 0x50) = puVar11;
    _swift_unknownObjectRetain_n(pcVar22,2);
    uVar14 = 0xd000000000000025;
    FUN_100992394(0xd000000000000025,0x8000000100db6e50,puVar26);
    uVar15 = local_120;
    lVar21 = local_158;
    *(undefined8 *)(lVar25 + 0x78) = uVar14;
    *(ulong *)(lVar25 + DAT_101058288) = uVar19;
    *(undefined8 *)(lVar25 + 0x60) = local_f0;
    *(undefined8 *)(lVar25 + 0x68) = local_100;
    *(undefined8 *)(lVar25 + 0x70) = local_f8;
    puVar5 = (undefined8 *)(lVar25 + DAT_101058258);
    *puVar5 = local_120;
    puVar5[1] = local_170;
    FUN_100982e5c(local_158,lVar25 + DAT_101058260);
    *(ulong *)(lVar25 + DAT_101058290) = uVar27 | 0x8000000000000000;
    *(Implementation *)(lVar25 + DAT_101058268) = local_128;
    puVar5 = (undefined8 *)(lVar25 + DAT_101058270);
    *puVar5 = local_160;
    puVar5[1] = local_168;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_unknownObjectRetain(uVar15);
    lVar16 = lVar25;
    _swift_retain();
    FUN_10062b720();
    _swift_release(uVar20);
    _swift_release(local_178);
    _swift_unknownObjectRelease(pcVar22);
    FUN_100986e74(puVar26);
    FUN_100986e74(lVar21);
    uVar15 = *(undefined8 *)(lVar25 + 0x48);
    *(long *)(lVar25 + 0x48) = lVar16;
    _swift_release(uVar15);
    uVar15 = *(undefined8 *)(lVar25 + 0x58);
    *(long *)(lVar25 + 0x58) = local_d0;
  }
  _swift_release(uVar15);
  uVar23 = *(undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::bindTimeout);
  uVar4 = *(undefined1 *)
           ((undefined8 *)
            (unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::bindTimeout) +
           1);
  puVar11 = &DAT_100f1feb0;
  _swift_allocObject(&DAT_100f1feb0,0x71,7);
  uVar7 = local_108;
  uVar14 = local_130;
  uVar15 = local_138;
  puVar6 = local_150;
  *(undefined8 *)(puVar11 + 0x10) = local_d8;
  *(long *)(puVar11 + 0x18) = lVar25;
  *(code **)(puVar11 + 0x20) = FUN_10093c220;
  *(undefined **)(puVar11 + 0x28) = local_150;
  *(class_t **)(puVar11 + 0x30) = pcVar22;
  *(undefined8 *)(puVar11 + 0x38) = local_138;
  *(undefined8 *)(puVar11 + 0x40) = local_108;
  *(undefined8 *)(puVar11 + 0x48) = local_e0;
  puVar11[0x50] = (byte)local_144 & 1;
  *(undefined8 *)(puVar11 + 0x58) = local_140;
  *(undefined8 *)(puVar11 + 0x60) = local_130;
  *(undefined8 *)(puVar11 + 0x68) = uVar23;
  puVar11[0x70] = uVar4;
  puVar17 = &DAT_100ff0970;
  FUN_1000f7830(&DAT_100ff0970,&DAT_100c89518);
  _swift_allocObject();
  *(class_t **)(puVar17 + 0x20) = pcVar22;
  *(undefined ***)(puVar17 + 0x28) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar17 + 0x10) = 0;
  puVar17[0x18] = 0xff;
  *(undefined8 *)(puVar17 + 0x38) = 0;
  *(undefined8 *)(puVar17 + 0x40) = 0;
  *(undefined8 *)(puVar17 + 0x30) = 0;
  puVar18 = &DAT_100f1fed8;
  _swift_allocObject(&DAT_100f1fed8,0x28,7);
  *(undefined **)(puVar18 + 0x10) = puVar17;
  *(code **)(puVar18 + 0x18) = FUN_1009870a0;
  *(undefined **)(puVar18 + 0x20) = puVar11;
  lVar21 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_unknownObjectRetain_n(pcVar22,2);
  FUN_100011128(uVar15,uVar7);
  _swift_retain(lVar25);
  _swift_retain(puVar6);
  _swift_retain(uVar14);
  _swift_retain(puVar17);
  _swift_retain(puVar11);
  FUN_100992db8((undefined *)((long)&pcVar22->isa + lVar21),FUN_100982f6c,puVar18);
  _swift_release(puVar18);
  _swift_release(puVar11);
  puVar11 = puVar17;
  FUN_100985f50(puVar17);
  _swift_release(puVar6);
  _swift_unknownObjectRelease(pcVar22);
  _swift_release(lVar25);
  FUN_100004550(uVar15,uVar7);
  _swift_release(puVar17);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return puVar11;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100984e3c | FUN_100984e3c */

undefined8 FUN_100984e3c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f1fde8;
  _swift_allocObject(&DAT_100f1fde8,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar2 = 0;
  FUN_1009842b8(0,1,FUN_100986d54,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x100984eac | FUN_100984eac */

undefined8 FUN_100984eac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f1fe10;
  _swift_allocObject(&DAT_100f1fe10,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar2 = 0;
  FUN_1009842b8(0,1,FUN_100986dc8,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x100984f20 | FUN_100984f20 */

/* WARNING: Removing unreachable block (ram,0x000100984f68) */
/* WARNING: Removing unreachable block (ram,0x000100984f88) */
/* WARNING: Removing unreachable block (ram,0x000100985004) */

void FUN_100984f20(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _swift_bridgeObjectRetain(param_4);
  FUN_100667868(param_3,param_4);
  uVar1 = 0;
  FUN_100987df0(0);
  FUN_10061d040(param_3,param_2,uVar1,&PTR_PTR_100f24068);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x100985074 | FUN_100985074 */

undefined8 FUN_100985074(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined8 uVar4;
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
  puVar3 = &DAT_100f1fe38;
  _swift_allocObject(&DAT_100f1fe38,uVar8 + lVar7,uVar5 | 7);
  (**(code **)(lVar6 + 0x20))
            (puVar3 + uVar8,&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar4 = 0;
  FUN_1009842b8(0,1,FUN_100986e28,puVar3);
  _swift_release(puVar3);
  return uVar4;
}



/* Address: 0x100985148 | FUN_100985148 */

void FUN_100985148(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  NWEndpoint NVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  puVar4 = auStack_50;
  uVar3 = 0;
  FUN_1009a2f9c();
  local_38 = uVar3;
  FUN_10000cbb0(auStack_50);
  NVar2 = Network::NWEndpoint::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
            (puVar4,param_3,CONCAT71(extraout_var,NVar2.value));
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_1006276a0(auStack_50,param_2);
    _swift_release(lVar5);
    FUN_100004594(auStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009851e4);
  (*pcVar1)();
}



/* Address: 0x1009851e4 | FUN_1009851e4 */

void FUN_1009851e4(undefined8 param_1)

{
  FUN_1009842b8(param_1,0,FUN_1009851f8,0);
  return;
}



/* Address: 0x1009851f8 | FUN_1009851f8 */

void FUN_1009851f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a5a54(param_2);
  return;
}



/* Address: 0x10098521c | FUN_10098521c */

void FUN_10098521c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined ***)(puVar1 + 0x28) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  *param_1 = puVar1;
  _swift_retain(param_3);
  return;
}



/* Address: 0x100985280 | FUN_100985280 */

void FUN_100985280(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined1 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar8 = param_3;
  FUN_100623594(param_3,&PTR_PTR_100f24068,param_2);
  puVar1 = &DAT_100f20018;
  _swift_allocObject(&DAT_100f20018,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  uVar2 = uVar8;
  FUN_10098029c(uVar8,FUN_100987108,puVar1);
  _swift_release(uVar8);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f20040;
  _swift_allocObject(&DAT_100f20040,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  _swift_retain(param_3);
  _swift_retain(puVar1);
  _swift_retain(param_6);
  FUN_100011128(param_7,param_8);
  _swift_bridgeObjectRetain(param_9);
  uVar8 = uVar2;
  FUN_10098029c(uVar2,FUN_10098717c,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f20068;
  _swift_allocObject(&DAT_100f20068,0x28,7);
  puVar1[0x10] = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  _swift_retain(param_3);
  _swift_retain(param_6);
  uVar2 = uVar8;
  FUN_10098029c(uVar8,FUN_10098718c,puVar1);
  _swift_release(uVar8);
  _swift_release(puVar1);
  puVar1 = &DAT_100f20090;
  _swift_allocObject(&DAT_100f20090,0x39,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_12;
  *(undefined8 *)(puVar1 + 0x20) = param_13;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_14;
  puVar1[0x38] = param_15;
  _swift_retain(param_3);
  _swift_retain(param_6);
  _swift_retain(puVar1);
  _swift_retain(param_13);
  uVar8 = uVar2;
  FUN_10098029c(uVar2,FUN_1009871e0,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f200b8;
  _swift_allocObject(&DAT_100f200b8,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_1009871f4;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  _swift_retain_n(param_3,2);
  pcVar3 = FUN_1008fd66c;
  FUN_10099ffc0(FUN_1008fd66c,puVar1);
  _swift_release(uVar8);
  _swift_release(puVar1);
  puVar1 = &DAT_100f200e0;
  _swift_allocObject(&DAT_100f200e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  puVar4 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar7 = *(long *)(pcVar3 + 0x30);
  uVar11 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar4 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar4 + 0x28) = uVar11;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  puVar4[0x20] = 0xff;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  *(undefined8 *)(puVar4 + 0x48) = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  puVar5 = &DAT_100f20108;
  _swift_allocObject(&DAT_100f20108,0x30,7);
  *(code **)(puVar5 + 0x10) = pcVar3;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(code **)(puVar5 + 0x20) = FUN_100987220;
  *(undefined **)(puVar5 + 0x28) = puVar1;
  uVar6 = uVar11;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(param_6,2);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar4,2);
  _swift_retain_n(puVar1,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar11);
  uVar11 = uVar6;
  (*pcVar9)(uVar6,lVar7);
  if ((uVar11 & 1) == 0) {
    puVar10 = &DAT_100f20130;
    _swift_allocObject(&DAT_100f20130,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar3;
    *(code **)(puVar10 + 0x18) = FUN_10098725c;
    *(undefined **)(puVar10 + 0x20) = puVar5;
    pcVar9 = *(code **)(lVar7 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar5);
    (*pcVar9)(thunk_FUN_1009806c8,puVar10,uVar6,lVar7);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(FUN_10098725c,puVar5);
      _swift_endAccess(auStack_90);
      pcVar9 = (code *)0x0;
      puVar10 = (undefined *)0x0;
      uVar8 = 0;
    }
    else {
      _swift_retain(param_3);
      _swift_retain(param_6);
      pcVar9 = pcVar3;
      puVar10 = puVar4;
      uVar8 = param_3;
      FUN_100987268(pcVar3,puVar4,param_3,param_6);
      _swift_release(param_3);
      _swift_release(param_6);
    }
    FUN_1006486f8(pcVar9,puVar10,uVar8);
    FUN_100004550(pcVar9,puVar10);
    _swift_release(puVar1);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_release(param_6);
  _swift_release(param_3);
  _swift_release(puVar1);
  _swift_release(puVar4);
  _swift_release(pcVar3);
  _swift_release(puVar5);
  *param_1 = puVar4;
  return;
}



/* Address: 0x1009857ac | FUN_1009857ac */

undefined8
FUN_1009857ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + 0x48);
  if (lVar4 != 0) {
    puVar2 = &DAT_100ff0ec8;
    FUN_1000f7830(&DAT_100ff0ec8,&DAT_100c898e8);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x10) = param_3;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    *(undefined8 *)(puVar2 + 0x20) = param_5;
    _swift_retain(lVar4);
    FUN_100011128(param_3,param_4);
    _swift_bridgeObjectRetain(param_5);
    FUN_100626a9c(puVar2,&PTR_PTR_100f1f0a8,0,0,1,0x8000000000000000,lVar4);
    _swift_release(lVar4);
    _swift_release(puVar2);
    uVar3 = 0;
    FUN_10099f7ec(0,0);
    FUN_1002ec258(0,0);
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009858a0);
  (*pcVar1)();
}



/* Address: 0x1009858a0 | FUN_1009858a0 */

void FUN_1009858a0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((param_1 & 1) == 0) {
    puVar2 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = param_3;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(param_3);
  }
  else {
    uVar1 = 0;
    FUN_100987df0(0);
    FUN_100622844("NIOTransportServices/NIOTSDatagramListenerBootstrap.swift",0x39,2,0x18b,uVar1,
                  &PTR_PTR_100f23fa0);
  }
  return;
}



/* Address: 0x10098594c | FUN_10098594c */

undefined *
FUN_10098594c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             char param_6)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = param_1;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
  puVar11 = (undefined8 *)(puVar3 + 0x10);
  *puVar11 = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  _swift_retain(param_1);
  (*param_2)(param_4,puVar3);
  if (param_6 != '\x01') {
    puVar4 = &DAT_100f201f8;
    _swift_allocObject(&DAT_100f201f8,0x28,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(undefined8 *)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x20) = param_4;
    lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
    _swift_retain(puVar3);
    _swift_retain(param_4);
    pcVar9 = FUN_100987770;
    param_1 = param_1 + lVar1;
    FUN_10099ab88();
    _swift_release(puVar4);
    puVar4 = &DAT_100f20220;
    _swift_allocObject(&DAT_100f20220,0x28,7);
    *(undefined8 *)(puVar4 + 0x10) = param_5;
    *(long *)(puVar4 + 0x18) = param_1;
    *(code **)(puVar4 + 0x20) = pcVar9;
    puVar5 = &DAT_100f20248;
    _swift_allocObject(&DAT_100f20248,0x28,7);
    *(code **)(puVar5 + 0x10) = FUN_1009830e0;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    uVar6 = *(ulong *)(puVar3 + 0x20);
    lVar1 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(puVar3,3);
    _swift_retain_n(param_5,2);
    _swift_retain_n(pcVar9,2);
    _swift_retain_n(puVar4,2);
    uVar7 = uVar6;
    (*pcVar12)(uVar6,lVar1);
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100f20270;
      _swift_allocObject(&DAT_100f20270,0x28,7);
      *(undefined **)(puVar8 + 0x10) = puVar3;
      *(code **)(puVar8 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(puVar3);
      _swift_retain(puVar5);
      (*pcVar12)(FUN_1008db360,puVar8,uVar6,lVar1);
      _swift_release(param_5);
      _swift_release(puVar8);
      _swift_release(puVar3);
      _swift_release_n(puVar4,2);
      _swift_release(puVar5);
    }
    else {
      _swift_beginAccess(puVar11,auStack_78,0,0);
      cVar2 = puVar3[0x18];
      if (cVar2 == -1) {
        _swift_beginAccess(puVar3 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar5);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar10 = *puVar11;
        FUN_100308524(uVar10,cVar2);
        FUN_10099a394(param_5,param_1,pcVar9);
        FUN_100308538(uVar10,cVar2);
      }
      _swift_release(puVar5);
      _swift_release(param_5);
      _swift_release_n(puVar4,2);
      _swift_release(puVar3);
    }
    _swift_release(param_5);
    _swift_release(puVar3);
    _swift_release_n(pcVar9,2);
  }
  return puVar3;
}



/* Address: 0x100985c7c | FUN_100985c7c */

void FUN_100985c7c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

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
  undefined8 uVar10;
  
  uVar10 = *param_3;
  puVar2 = param_1;
  FUN_10098778c();
  puVar3 = &DAT_100f21ba0;
  uVar8 = 0;
  _swift_allocError(&DAT_100f21ba0,puVar2,0,0);
  *puVar2 = param_2;
  uVar4 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar5 = uVar4;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f20298;
    _swift_allocObject(&DAT_100f20298,0x20,7);
    *(undefined8 **)(puVar6 + 0x10) = param_1;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(puVar3);
    (*pcVar9)(thunk_FUN_1008d678c,puVar6,uVar4,lVar1);
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
  FUN_10061cf14(2,0,uVar10,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x100985dd0 | FUN_100985dd0 */

undefined * FUN_100985dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1009aee9c(param_1,2,0);
  puVar1 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined ***)(puVar1 + 0x30) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 1;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  _swift_retain(param_3);
  _swift_errorRetain(param_1);
  return puVar1;
}



/* Address: 0x100985e60 | FUN_100985e60 */

void FUN_100985e60(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  FUN_100986e74(unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS);
  FUN_100986e74(unaff_x20 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS);
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions));
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::nwParametersConfigurator
                ))[1]);
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                 childNWParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                childNWParametersConfigurator))[1]);
  return;
}



/* Address: 0x100985f2c | FUN_100985f2c */

void FUN_100985f2c(void)

{
  FUN_100985e60();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100985f50 | FUN_100985f50 */

undefined * FUN_100985f50(long param_1)

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
  puVar2 = &DAT_100f1ff28;
  _swift_allocObject(&DAT_100f1ff28,0x30,7);
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
    puVar6 = &DAT_100f1ff50;
    _swift_allocObject(&DAT_100f1ff50,0x28,7);
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
      FUN_100986174(param_1,puVar1);
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



/* Address: 0x100986174 | FUN_100986174 */

undefined8 FUN_100986174(long param_1,undefined *param_2)

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
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100986688);
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
    puVar6 = &DAT_100f1fff0;
    _swift_allocObject(&DAT_100f1fff0,0x20,7);
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
    goto LAB_100986648;
  }
  puVar6 = &DAT_100f1ff78;
  _swift_allocObject(&DAT_100f1ff78,0x28,7);
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
    puVar8 = &DAT_100f1ffa0;
    _swift_allocObject(&DAT_100f1ffa0,0x28,7);
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
        puVar8 = &DAT_100f1ffc8;
        _swift_allocObject(&DAT_100f1ffc8,0x20,7);
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
LAB_1009865ec:
      FUN_1009082bc(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1009806d4(uVar5,uVar2,cVar11);
        FUN_100988c80(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_1009865ec;
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
LAB_100986648:
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
  return 0;
}



/* Address: 0x100986688 | FUN_100986688 */

long * FUN_100986688(class_t *param_1,class_t *param_2,undefined **param_3,long *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  DispatchQoS DVar4;
  Options *this;
  Options *pOVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *param_4;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  pcVar3 = param_1;
  FUN_100622d2c();
  param_4[10] = (long)pcVar3;
  FUN_100622d2c();
  param_4[0xb] = (long)pcVar3;
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
  (*pcVar7)((long)param_4 + lVar2,1,1,DVar4.unknown);
  (*pcVar7)((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS,1,1
            ,DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions;
  this = Network::NWProtocolUDP::Options::typeMetadataAccessor();
  pOVar5 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(pOVar5);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(this);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions) = 0;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions) = 0
  ;
  puVar1 = (undefined8 *)
           ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::bindTimeout)
  ;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childNWParametersConfigurator
           );
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_2 == (class_t *)0x0) {
    _swift_unknownObjectRetain(param_1);
    param_3 = &PTR_PTR_100f22918;
    param_2 = param_1;
  }
  pcVar3 = param_2;
  _object_getClass();
  if ((pcVar3 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
       pcVar3 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
     (param_2 != (class_t *)0x0)) {
    param_4[2] = (long)param_1;
    param_4[3] = (long)&PTR_PTR_100f22918;
    param_4[4] = (long)param_2;
    param_4[5] = (long)param_3;
  }
  else {
    _swift_release(param_1);
    _swift_unknownObjectRelease(param_2);
    FUN_100004550(param_4[6],param_4[7]);
    FUN_100004550(param_4[8],param_4[9]);
    _swift_bridgeObjectRelease(param_4[10]);
    _swift_bridgeObjectRelease(param_4[0xb]);
    FUN_100986e74((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS);
    FUN_100986e74((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS);
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions));
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                   nwParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                  nwParametersConfigurator))[1]);
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                   childNWParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                  childNWParametersConfigurator))[1]);
    _swift_deallocPartialClassInstance
              (param_4,lVar6,*(undefined4 *)(*param_4 + 0x30),*(undefined2 *)(*param_4 + 0x34));
    param_4 = (long *)0x0;
  }
  return param_4;
}



/* Address: 0x1009868f8 | FUN_1009868f8 */

long * FUN_1009868f8(class_t *param_1,class_t *param_2,long param_3,long *param_4,undefined8 param_5
                    ,long param_6)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  DispatchQoS DVar4;
  Options *this;
  Options *pOVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *param_4;
  param_4[7] = 0;
  param_4[6] = 0;
  param_4[9] = 0;
  param_4[8] = 0;
  pcVar3 = param_1;
  FUN_100622d2c();
  param_4[10] = (long)pcVar3;
  FUN_100622d2c();
  param_4[0xb] = (long)pcVar3;
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  pcVar7 = *(code **)(*(long *)(DVar4.unknown + -8) + 0x38);
  (*pcVar7)((long)param_4 + lVar2,1,1,DVar4.unknown);
  (*pcVar7)((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS,1,1
            ,DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions;
  this = Network::NWProtocolUDP::Options::typeMetadataAccessor();
  pOVar5 = this;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(pOVar5);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  lVar2 = _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions;
  _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
  pOVar5 = Network::NWProtocolUDP::Options::init(this);
  *(Options **)((long)param_4 + lVar2) = pOVar5;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions) = 0;
  *(undefined8 *)
   ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions) = 0
  ;
  puVar1 = (undefined8 *)
           ((long)param_4 + _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::bindTimeout)
  ;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)param_4 +
           _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childNWParametersConfigurator
           );
  *puVar1 = 0;
  puVar1[1] = 0;
  if (param_2 == (class_t *)0x0) {
    _swift_unknownObjectRetain(param_1);
    param_2 = param_1;
    param_3 = param_6;
  }
  pcVar3 = param_1;
  _object_getClass();
  if ((((pcVar3 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
         pcVar3 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
       (param_1 != (class_t *)0x0)) &&
      (pcVar3 = param_2, _object_getClass(),
      pcVar3 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
      pcVar3 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop)) &&
     (param_2 != (class_t *)0x0)) {
    param_4[2] = (long)param_1;
    param_4[3] = param_6;
    param_4[4] = (long)param_2;
    param_4[5] = param_3;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_unknownObjectRelease(param_2);
    FUN_100004550(param_4[6],param_4[7]);
    FUN_100004550(param_4[8],param_4[9]);
    _swift_bridgeObjectRelease(param_4[10]);
    _swift_bridgeObjectRelease(param_4[0xb]);
    FUN_100986e74((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::serverQoS);
    FUN_100986e74((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childQoS);
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::udpOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childUDPOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::tlsOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_4 +
                    _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::childTLSOptions));
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                   nwParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                  nwParametersConfigurator))[1]);
    FUN_100004550(*(undefined8 *)
                   ((long)param_4 +
                   _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                   childNWParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_4 +
                  _TtC20NIOTransportServices30NIOTSDatagramListenerBootstrap::
                  childNWParametersConfigurator))[1]);
    _swift_deallocPartialClassInstance
              (param_4,lVar6,*(undefined4 *)(*param_4 + 0x30),*(undefined2 *)(*param_4 + 0x34));
    param_4 = (long *)0x0;
  }
  return param_4;
}



/* Address: 0x100986b90 | FUN_100986b90 */

void FUN_100986b90(class_t *param_1,long param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop ||
      param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100986c24);
    (*pcVar1)();
  }
  _swift_allocObject(param_2,*(undefined4 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x34));
  _swift_unknownObjectRetain_n(param_1,2);
  FUN_1009868f8();
  if (param_1 != (class_t *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100986c28);
  (*pcVar1)();
}



/* Address: 0x100986c28 | FUN_100986c28 */

void FUN_100986c28(class_t *param_1,class_t *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop ||
      param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100986cf4);
    (*pcVar1)();
  }
  pcVar2 = param_2;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
      param_2 != (class_t *)0x0) {
    _swift_allocObject(param_3,*(undefined4 *)(param_3 + 0x30),*(undefined2 *)(param_3 + 0x34));
    _swift_unknownObjectRetain(param_1);
    _swift_unknownObjectRetain(param_2);
    FUN_1009868f8(param_1,param_2,param_7,param_3,param_4,param_6);
    if (param_1 != (class_t *)0x0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100986cfc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100986cf8);
  (*pcVar1)();
}



/* Address: 0x100986cfc | FUN_100986cfc */

void FUN_100986cfc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100986d20 | FUN_100986d20 */

void FUN_100986d20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100984170(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100986d2c | FUN_100986d2c */

void FUN_100986d2c(void)

{
  long unaff_x20;
  
  _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x100986d54 | FUN_100986d54 */

void FUN_100986d54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100987df0(0);
  FUN_10061d040(uVar2,param_2,uVar1,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x100986da4 | FUN_100986da4 */

void FUN_100986da4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100986dc8 | FUN_100986dc8 */

void FUN_100986dc8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100984f20(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100986dd0 | FUN_100986dd0 */

void FUN_100986dd0(void)

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



/* Address: 0x100986e28 | FUN_100986e28 */

void FUN_100986e28(undefined8 param_1,undefined8 param_2)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x50);
  FUN_100985148(param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100986e74 | FUN_100986e74 */

undefined8 FUN_100986e74(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100986ebc | FUN_100986ebc */

void FUN_100986ebc(void)

{
  FUN_100986ec4(0);
  return;
}



/* Address: 0x100986ec4 | FUN_100986ec4 */

void FUN_100986ec4(undefined8 param_1)

{
  if (DAT_100ff0dc8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc74c4);
  return;
}



/* Address: 0x100986efc | FUN_100986efc */

void FUN_100986efc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  long local_68;
  long lStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_98 = &DAT_100c89880;
  puStack_90 = &DAT_100c89880;
  local_88 = &DAT_100c89898;
  puStack_80 = &DAT_100c89898;
  local_78 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puVar2 = &DAT_100ff0898;
  lVar1 = 0x13f;
  puStack_70 = local_78;
  FUN_1001a1320(0x13f,&DAT_100ff0898,PTR_typeMetadataAccessor_100eae6c8);
  if (puVar2 < (undefined *)0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    local_58 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_48 = &DAT_100c898b0;
    puStack_40 = &DAT_100c898b0;
    local_38 = &DAT_100c898c8;
    puStack_30 = &DAT_100c89898;
    local_28 = &DAT_100c89898;
    lStack_60 = local_68;
    puStack_50 = local_58;
    _swift_updateClassMetadata2(param_1,0x100,0xf,&local_98,param_1 + 0x50);
  }
  return;
}



/* Address: 0x100986fc8 | FUN_100986fc8 */

void FUN_100986fc8(void)

{
  FUN_1001a1320(0,&DAT_100ff07a8,FUN_10097ee38);
  return;
}



/* Address: 0x100986ff0 | FUN_100986ff0 */

void FUN_100986ff0(void)

{
  FUN_1001a1320(0,&DAT_100ff0950,FUN_100982e04);
  return;
}



/* Address: 0x100987018 | FUN_100987018 */

void FUN_100987018(void)

{
  FUN_10098521c();
  return;
}



/* Address: 0x100987020 | FUN_100987020 */

void FUN_100987020(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100987044 | FUN_100987044 */

void FUN_100987044(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009870a0 | FUN_1009870a0 */

void FUN_1009870a0(void)

{
  long unaff_x20;
  
  FUN_100985280(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1009870ec | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009870f0 | FUN_1009870f0 */

void FUN_1009870f0(void)

{
  FUN_1009871a0(0x30);
  return;
}



/* Address: 0x1009870f8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}


