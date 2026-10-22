/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009870fc | FUN_1009870fc */

void FUN_1009870fc(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100987108 | FUN_100987108 */

void FUN_100987108(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),&PTR_PTR_100f24068)
  ;
  return;
}



/* Address: 0x100987138 | FUN_100987138 */

void FUN_100987138(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10098717c | FUN_10098717c */

void FUN_10098717c(void)

{
  long unaff_x20;
  
  FUN_1009857ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10098718c | FUN_10098718c */

void FUN_10098718c(void)

{
  long unaff_x20;
  
  FUN_1009858a0(*(undefined1 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100987198 | FUN_100987198 */

void FUN_100987198(void)

{
  FUN_1009871a0(0x39);
  return;
}



/* Address: 0x1009871a0 | FUN_1009871a0 */

void FUN_1009871a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009871e0 | FUN_1009871e0 */

void FUN_1009871e0(void)

{
  long unaff_x20;
  
  FUN_10098594c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x1009871f4 | FUN_1009871f4 */

void FUN_1009871f4(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100987220 | FUN_100987220 */

void FUN_100987220(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100985dd0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100987228 | FUN_100987228 */

void FUN_100987228(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10098725c | FUN_10098725c */

void FUN_10098725c(void)

{
  long unaff_x20;
  
  FUN_1009a05f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100987268 | FUN_100987268 */

undefined8 FUN_100987268(long param_1,long param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  char cVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar14 = *(char *)(param_1 + 0x20);
  if (cVar14 != '\x01') {
    if (cVar14 == -1) {
      _swift_release(param_4);
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100987770);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar14;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(uVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(uVar1,uVar2,1);
  FUN_1009aee9c(uVar1,2,0);
  puVar6 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  *(ulong *)(puVar6 + 0x28) = param_4;
  *(undefined ***)(puVar6 + 0x30) = &PTR_PTR_100f21d18;
  puVar17 = (undefined8 *)(puVar6 + 0x10);
  *puVar17 = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  puVar6[0x20] = 1;
  puVar16 = (undefined8 *)(puVar6 + 0x38);
  *puVar16 = 0;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  FUN_1009806d4(uVar1,uVar2,1);
  uVar7 = param_4;
  _swift_retain();
  FUN_100992670();
  if ((uVar7 & 1) != 0) {
    puVar9 = &DAT_100f201d0;
    _swift_allocObject(&DAT_100f201d0,0x20,7);
    *(long *)(puVar9 + 0x10) = param_2;
    *(undefined **)(puVar9 + 0x18) = puVar6;
    _swift_beginAccess(puVar17,auStack_90,0,0);
    if (puVar6[0x20] == -1) {
      _swift_beginAccess(puVar16,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(puVar6);
      FUN_10064967c(FUN_1008fcb8c,puVar9);
      _swift_endAccess(auStack_a8);
      FUN_1009082bc(uVar1,uVar2,1);
      _swift_release(puVar9);
      _swift_release(puVar6);
      return 0;
    }
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    FUN_100999868(uVar8,*(undefined8 *)(puVar6 + 0x18));
    _swift_retain(param_2);
    FUN_1009082bc(uVar1,uVar2,1);
    _swift_release(puVar9);
    return uVar8;
  }
  puVar9 = &DAT_100f20158;
  _swift_allocObject(&DAT_100f20158,0x28,7);
  *(code **)(puVar9 + 0x10) = thunk_FUN_1009806ac;
  *(long *)(puVar9 + 0x18) = param_2;
  *(undefined **)(puVar9 + 0x20) = puVar6;
  _swift_getObjectType();
  _swift_retain_n(param_2,5);
  _swift_retain_n(puVar6,2);
  uVar7 = param_4;
  thunk_FUN_100992670(param_4,&PTR_PTR_100f21d18);
  if ((uVar7 & 1) == 0) {
    _swift_release(param_2);
    puVar10 = &DAT_100f20180;
    _swift_allocObject(&DAT_100f20180,0x28,7);
    *(undefined **)(puVar10 + 0x10) = puVar6;
    *(code **)(puVar10 + 0x18) = thunk_FUN_1009806b8;
    *(undefined **)(puVar10 + 0x20) = puVar9;
    _swift_retain(puVar6);
    _swift_retain(puVar9);
    FUN_100994558(thunk_FUN_1009806c8,puVar10,param_4,&PTR_PTR_100f21d18);
    _swift_release(puVar10);
  }
  else {
    _swift_beginAccess(puVar17,auStack_90,0,0);
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    uVar3 = *(undefined8 *)(puVar6 + 0x18);
    cVar14 = puVar6[0x20];
    if (cVar14 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar5 = *(code **)(lVar4 + 0x10);
      uVar15 = 1;
      FUN_1008fde58(uVar8,uVar3,1);
      uVar11 = uVar7;
      lVar13 = lVar4;
      (*pcVar5)(uVar7,lVar4);
      if ((uVar11 & 1) == 0) {
        puVar10 = &DAT_100f201a8;
        _swift_allocObject(&DAT_100f201a8,0x20,7);
        *(long *)(puVar10 + 0x10) = param_2;
        *(undefined8 *)(puVar10 + 0x18) = uVar8;
        pcVar5 = *(code **)(lVar4 + 0x18);
        _swift_retain(param_2);
        FUN_1009806d4(uVar8,uVar3,1);
        (*pcVar5)(thunk_FUN_1009806f4,puVar10,uVar7,lVar4);
        _swift_release(param_2);
        _swift_release(puVar10);
      }
      else {
        uVar12 = uVar8;
        FUN_10092b398(uVar8);
        FUN_1006486f8();
        FUN_100004550(uVar12,lVar13);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar15);
      }
      cVar14 = '\x01';
    }
    else {
      if (cVar14 == -1) {
        _swift_release(param_2);
        _swift_beginAccess(puVar16,auStack_a8,0x21,0);
        FUN_10064967c(thunk_FUN_1009806b8,puVar9);
        _swift_endAccess(auStack_a8);
        goto LAB_100987704;
      }
      FUN_1008fde58(uVar8,uVar3,cVar14);
      FUN_100988c80(uVar8,uVar3,cVar14,param_2);
      _swift_release(param_2);
    }
    FUN_1009082bc(uVar8,uVar3,cVar14);
  }
LAB_100987704:
  FUN_1009082bc(uVar1,uVar2,1);
  _swift_release(puVar9);
  _swift_release_n(puVar6,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x100987770 | FUN_100987770 */

void FUN_100987770(void)

{
  long unaff_x20;
  
  FUN_100985c7c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10098778c | FUN_10098778c */

void FUN_10098778c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0ec0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8a9e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8a9e8,&DAT_100f21ba0);
  DAT_100ff0ec0 = pTVar1;
  return;
}



/* Address: 0x1009877cc | FUN_1009877cc */

void FUN_1009877cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1009877d8 | thunk_FUN_100987020 */

void thunk_FUN_100987020(void)

{
  FUN_100987020();
  return;
}



/* Address: 0x1009877dc | thunk_FUN_100987020 */

void thunk_FUN_100987020(void)

{
  FUN_100987020();
  return;
}



/* Address: 0x1009877e0 | thunk_FUN_1009806f4 */

void thunk_FUN_1009806f4(void)

{
  FUN_1009806f4();
  return;
}



/* Address: 0x1009877e4 | thunk_FUN_1009806ac */

void thunk_FUN_1009806ac(void)

{
  FUN_1009806ac();
  return;
}



/* Address: 0x1009877e8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009877ec | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009877f0 | thunk_FUN_1009877cc */

void thunk_FUN_1009877cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1009877f4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009877f8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x1009877fc | thunk_FUN_1009870fc */

void thunk_FUN_1009870fc(void)

{
  FUN_1009870fc();
  return;
}



/* Address: 0x100987800 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100987804 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100987808 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10098780c | thunk_FUN_1009877cc */

void thunk_FUN_1009877cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100987810 | thunk_FUN_1009870fc */

void thunk_FUN_1009870fc(void)

{
  FUN_1009870fc();
  return;
}



/* Address: 0x100987814 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100987818 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x10098781c | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100987820 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100987824 | thunk_FUN_1009877cc */

void thunk_FUN_1009877cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100987828 | thunk_FUN_1009877cc */

void thunk_FUN_1009877cc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x10098782c | thunk_FUN_1009806b8 */

void thunk_FUN_1009806b8(void)

{
  FUN_1009806b8();
  return;
}



/* Address: 0x100987830 | FUN_100987830 */

void FUN_100987830(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  byte bVar3;
  MultipathServiceType MVar4;
  int iVar5;
  undefined *puVar6;
  byte *pbVar7;
  class_t *pcVar8;
  DispatchQoS DVar9;
  class_t *pcVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined7 extraout_var;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  byte *pbVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  undefined8 uVar23;
  String SVar24;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined8 local_80;
  pthread_mutexattr_t local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar6 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  lVar20 = -(*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar22 = (long)&local_80 + lVar20;
  pbVar17 = *(byte **)(unaff_x20 + 0x90);
  pcVar21 = *(code **)(*(long *)pbVar17 + 0x88);
  pbVar7 = pbVar17;
  _swift_retain();
  (*pcVar21)();
  bVar3 = *pbVar7;
  _swift_release(pbVar17);
  if ((bVar3 & 1) != 0) {
    pcVar8 = *(class_t **)(unaff_x20 + DAT_101058258);
    lVar11 = ((undefined8 *)(unaff_x20 + DAT_101058258))[1];
    _swift_getObjectType();
    (**(code **)(lVar11 + 0x10))();
    DVar9 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar9.unknown + -8) + 0x38))(lVar22,1,1);
    uVar18 = *(ulong *)(unaff_x20 + DAT_101058290);
    if (-1 < (long)uVar18) {
      *(undefined4 *)((long)auStack_88 + lVar20) = 0;
      *(undefined8 *)((long)&uStack_90 + lVar20) = 0x37;
      SVar24.bridgeObject = (void *)0x2;
      SVar24.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar24,(StaticString)0xd00000000000003e,
                 0x8000000100db6f00,0xdb6ee0);
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100987d20);
      (*pcVar21)();
    }
    uVar23 = *(undefined8 *)(unaff_x20 + DAT_101058268);
    uVar14 = *(undefined8 *)(unaff_x20 + DAT_101058270);
    uVar19 = ((undefined8 *)(unaff_x20 + DAT_101058270))[1];
    pcVar10 = pcVar8;
    _object_getClass();
    if (pcVar10 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100987cb4);
      (*pcVar21)();
    }
    uVar18 = uVar18 & 0x7fffffffffffffff;
    lVar11 = 0;
    local_80 = param_1;
    FUN_100983480();
    uVar15 = (ulong)*(uint *)(lVar11 + 0x30);
    uVar16 = (ulong)*(ushort *)(lVar11 + 0x34);
    _swift_allocObject();
    *(undefined1 *)(lVar11 + 0x10) = 0;
    lVar20 = lVar11;
    FUN_100611728();
    *(long *)(lVar11 + 0x18) = lVar20;
    *(ulong *)(lVar11 + 0x20) = uVar15;
    *(ulong *)(lVar11 + 0x28) = uVar16;
    *(undefined **)(lVar11 + 0x30) = DVar9.unknown;
    *(undefined8 *)(lVar11 + 0x50) = 0;
    *(undefined8 *)(lVar11 + 0x60) = 0;
    *(undefined8 *)(lVar11 + 0x80) = 0;
    *(undefined8 *)(lVar11 + 0x90) = 0;
    *(undefined1 *)(lVar11 + 0x98) = 2;
    puVar6 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    puVar12 = puVar6;
    _swift_allocObject();
    puVar12[0x10] = 0;
    *(undefined **)(lVar11 + 0xa0) = puVar12;
    *(undefined4 *)(lVar11 + 0xa8) = 0x1000100;
    uVar15 = 8;
    FUN_100884f1c(8);
    _swift_retain(uVar18);
    uVar13 = 0;
    FUN_1009a2b3c(0,0,0,0,uVar15 & 0xffffffff);
    *(undefined8 *)(lVar11 + 0xb8) = 0;
    *(undefined8 *)(lVar11 + 0xc0) = 0;
    *(undefined8 *)(lVar11 + 0xb0) = uVar13;
    _swift_allocObject(puVar6,0x11,7);
    puVar6[0x10] = 1;
    *(undefined **)(lVar11 + 200) = puVar6;
    *(undefined8 *)(lVar11 + 0xd8) = 0x8000;
    *(undefined8 *)(lVar11 + 0xd0) = 0;
    *(undefined8 *)(lVar11 + 0xe0) = 0x10000;
    *(undefined2 *)(lVar11 + 0xe8) = 0;
    *(undefined1 *)(lVar11 + 0xea) = 0;
    *(undefined8 *)(lVar11 + 0xf8) = 0xf000000000000007;
    *(undefined8 *)(lVar11 + 0xf0) = 0xf000000000000007;
    puVar6 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_78.__sig = 0;
    local_78.__opaque[0] = '\0';
    local_78.__opaque[1] = '\0';
    local_78.__opaque[2] = '\0';
    local_78.__opaque[3] = '\0';
    local_78.__opaque[4] = '\0';
    local_78.__opaque[5] = '\0';
    local_78.__opaque[6] = '\0';
    local_78.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_78);
    iVar5 = _pthread_mutex_init((pthread_mutex_t *)(puVar6 + 0x10),&local_78);
    if (iVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100987cb8);
      (*pcVar21)();
    }
    *(undefined **)(lVar11 + 0x100) = puVar6;
    *(undefined1 *)(lVar11 + 0x108) = 0;
    lVar20 = _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::multipathServiceType;
    uVar2 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar4 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar4.value) + -8) + 0x68))
              (lVar11 + lVar20,uVar2,CONCAT71(extraout_var,MVar4.value));
    *(class_t **)(lVar11 + 0x48) = pcVar8;
    puVar6 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar6 + 0x20) = pcVar8;
    *(undefined ***)(puVar6 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar6 + 0x10) = 0;
    puVar6[0x18] = 0xff;
    *(undefined8 *)(puVar6 + 0x38) = 0;
    *(undefined8 *)(puVar6 + 0x40) = 0;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined **)(lVar11 + 0x58) = puVar6;
    *(long *)(lVar11 + 0x38) = unaff_x20;
    *(undefined ***)(lVar11 + 0x40) = &PTR_PTR_100f24068;
    *(undefined8 *)(lVar11 + 0x70) = 0x2000;
    *(undefined8 *)(lVar11 + 0x68) = 1;
    _swift_unknownObjectRetain_n(pcVar8,2);
    _swift_retain();
    uVar13 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,lVar22);
    *(undefined8 *)(lVar11 + 0x78) = uVar13;
    uVar13 = *(undefined8 *)(lVar11 + 0x90);
    *(ulong *)(lVar11 + 0x88) = uVar18;
    *(undefined8 *)(lVar11 + 0x90) = uVar23;
    _swift_retain(uVar18);
    _swift_retain(uVar23);
    _swift_release(uVar13);
    puVar1 = (undefined8 *)
             (lVar11 + _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::
                       nwParametersConfigurator);
    *puVar1 = uVar14;
    puVar1[1] = uVar19;
    FUN_100631d88(0);
    _swift_allocObject();
    _swift_retain(lVar11);
    FUN_100011128(uVar14,uVar19);
    lVar20 = lVar11;
    FUN_10062b720(lVar11,&PTR_PTR_100f1fc58);
    _swift_unknownObjectRelease(pcVar8);
    _swift_release(uVar18);
    FUN_100986e74(lVar22);
    uVar14 = *(undefined8 *)(lVar11 + 0x50);
    *(long *)(lVar11 + 0x50) = lVar20;
    _swift_release(uVar14);
    uVar14 = local_80;
    uVar19 = *(undefined8 *)(lVar11 + 0x60);
    *(undefined8 *)(lVar11 + 0x60) = local_80;
    _swift_retain(lVar11);
    _swift_retain(uVar14);
    _swift_release(lVar11);
    _swift_release(uVar19);
    lVar20 = *(long *)(unaff_x20 + 0x48);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100987cc0);
      (*pcVar21)();
    }
    _swift_retain(lVar20);
    FUN_1009b1890(lVar11);
    _swift_release(lVar20);
    lVar20 = *(long *)(unaff_x20 + 0x48);
    if (lVar20 == 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100987cc4);
      (*pcVar21)();
    }
    _swift_retain(lVar20);
    FUN_100629938();
    _swift_release(lVar11);
    _swift_release(lVar20);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100987d20 | FUN_100987d20 */

void FUN_100987d20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1009a8228(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x100987d48 | FUN_100987d48 */

void FUN_100987d48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_1009a8850(param_1,param_3,param_4);
  return;
}



/* Address: 0x100987d70 | FUN_100987d70 */

void FUN_100987d70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_100987d20(param_1,param_2,*unaff_x20,param_3,param_4);
  return;
}



/* Address: 0x100987d90 | FUN_100987d90 */

void FUN_100987d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100987d48(param_1,*unaff_x20,param_2,param_3);
  return;
}



/* Address: 0x100987db0 | FUN_100987db0 */

void FUN_100987db0(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &DAT_100f202e8;
  param_1[4] = &PTR_PTR_100f20300;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x100987dd0 | FUN_100987dd0 */

void FUN_100987dd0(void)

{
  thunk_FUN_1009a23c8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100987df0 | FUN_100987df0 */

void FUN_100987df0(undefined8 param_1)

{
  if (DAT_100ff0ef8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc750c);
  return;
}



/* Address: 0x100987e28 | FUN_100987e28 */

void FUN_100987e28(long param_1)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0x100,0,auStack_18,param_1 + 0x2c8);
  return;
}



/* Address: 0x100987e5c | FUN_100987e5c */

undefined1  [16] FUN_100987e5c(void)

{
  return ZEXT816(0x100f202e8);
}



/* Address: 0x100987e6c | FUN_100987e6c */

void FUN_100987e6c(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Address: 0x100987e94 | FUN_100987e94 */

void FUN_100987e94(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return;
}



/* Address: 0x100987ea4 | FUN_100987ea4 */

void FUN_100987ea4(undefined *param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (*(byte *)(unaff_x20 + 0x10) - 2 < 3) {
    FUN_100626ebc(param_2,param_3);
    return;
  }
  if (*(byte *)(unaff_x20 + 0x10) != 1) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1009882c8);
    (*pcVar10)();
  }
  puVar5 = param_1;
  uVar7 = param_2;
  FUN_10065b5f8();
  if ((int)((ulong)uVar7 >> 0x20) != (int)uVar7) {
    lVar8 = param_3;
    if (param_3 == 0) {
      lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      lVar8 = lVar9;
      FUN_100988eb4(lVar9,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
                    PTR___type_metadata_for____100eae0c8 + 8);
      _swift_unknownObjectRetain(lVar9);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + 0x20);
    *(long *)(unaff_x20 + 0x20) = lVar8;
    _swift_retain(param_3);
    _swift_retain(lVar8);
    _swift_release(uVar7);
    FUN_100626ebc(param_2,lVar8);
    _swift_release(lVar8);
    goto LAB_100988060;
  }
  if (param_3 == 0) goto LAB_100988060;
  lVar8 = *(long *)(unaff_x20 + 0x20);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x20 + 0x18);
    if (lVar8 == 0) {
      _swift_retain(param_3);
      _swift_release(puVar5);
      puVar5 = *(undefined **)(unaff_x20 + 0x18);
      *(long *)(unaff_x20 + 0x18) = param_3;
      goto LAB_100988060;
    }
    puVar2 = &DAT_100f203a0;
    _swift_allocObject(&DAT_100f203a0,0x28,7);
    *(code **)(puVar2 + 0x10) = thunk_FUN_100988da8;
    *(long *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = lVar8;
    uVar3 = *(ulong *)(lVar8 + 0x20);
    lVar9 = *(long *)(lVar8 + 0x28);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_3,6);
    _swift_retain_n(lVar8,4);
    uVar4 = uVar3;
    (*pcVar10)(uVar3,lVar9);
    if ((uVar4 & 1) != 0) {
      _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
      cVar1 = *(char *)(lVar8 + 0x18);
      if (cVar1 != -1) goto LAB_10098810c;
      _swift_release(param_3);
      _swift_beginAccess(lVar8 + 0x30,auStack_90,0x21,0);
      pcVar10 = thunk_FUN_1006225d4;
      goto LAB_100988260;
    }
    _swift_release(param_3);
    puVar6 = &DAT_100f203c8;
    _swift_allocObject(&DAT_100f203c8,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar8;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar11 = *(code **)(lVar9 + 0x18);
    _swift_retain(lVar8);
    _swift_retain(puVar2);
    pcVar10 = thunk_FUN_100653138;
  }
  else {
    puVar2 = &DAT_100f20350;
    _swift_allocObject(&DAT_100f20350,0x28,7);
    *(code **)(puVar2 + 0x10) = FUN_100988da8;
    *(long *)(puVar2 + 0x18) = param_3;
    *(long *)(puVar2 + 0x20) = lVar8;
    uVar3 = *(ulong *)(lVar8 + 0x20);
    lVar9 = *(long *)(lVar8 + 0x28);
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_3,6);
    _swift_retain_n(lVar8,4);
    uVar4 = uVar3;
    (*pcVar10)(uVar3,lVar9);
    if ((uVar4 & 1) != 0) {
      _swift_beginAccess(lVar8 + 0x10,auStack_78,0,0);
      cVar1 = *(char *)(lVar8 + 0x18);
      if (cVar1 != -1) {
LAB_10098810c:
        uVar7 = *(undefined8 *)(lVar8 + 0x10);
        FUN_1005dfeb4(uVar7,cVar1);
        FUN_100988948(uVar7,cVar1,param_3);
        _swift_release(param_3);
        FUN_100308538(uVar7,cVar1);
        goto LAB_100988274;
      }
      _swift_release(param_3);
      _swift_beginAccess(lVar8 + 0x30,auStack_90,0x21,0);
      pcVar10 = FUN_1006225d4;
LAB_100988260:
      FUN_10064967c(pcVar10,puVar2);
      _swift_endAccess(auStack_90);
LAB_100988274:
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release(puVar5);
      _swift_release_n(lVar8,3);
      _swift_release_n(param_3,4);
      _swift_release(puVar2);
      _swift_bridgeObjectRelease(0);
      return;
    }
    _swift_release(param_3);
    puVar6 = &DAT_100f20378;
    _swift_allocObject(&DAT_100f20378,0x28,7);
    *(long *)(puVar6 + 0x10) = lVar8;
    *(code **)(puVar6 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar11 = *(code **)(lVar9 + 0x18);
    _swift_retain(lVar8);
    _swift_retain(puVar2);
    pcVar10 = FUN_100653138;
  }
  (*pcVar11)(pcVar10,puVar6,uVar3,lVar9);
  _swift_release(puVar5);
  _swift_release(puVar6);
  _swift_release_n(lVar8,3);
  _swift_release_n(param_3,4);
  puVar5 = puVar2;
LAB_100988060:
  _swift_release(puVar5);
  return;
}



/* Address: 0x1009882c8 | FUN_1009882c8 */

void FUN_1009882c8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release(uVar1);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    FUN_100988b88(0,0,lVar2);
    _swift_release(lVar2);
  }
  FUN_100626ed8();
  return;
}



/* Address: 0x100988324 | FUN_100988324 */

void FUN_100988324(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100988348 | FUN_100988348 */

void FUN_100988348(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100988374 | thunk_FUN_10066a2b0 */

void thunk_FUN_10066a2b0(void)

{
  FUN_10066a2b0();
  return;
}



/* Address: 0x100988378 | FUN_100988378 */

void FUN_100988378(void)

{
  byte bVar1;
  code *pcVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(unaff_x20 + 0x10) = 1;
      FUN_100626b80();
      return;
    }
  }
  else if (bVar1 == 2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009883c0);
  (*pcVar2)();
}



/* Address: 0x1009883c0 | thunk_FUN_1009883c4 */

void thunk_FUN_1009883c4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release();
  if (2 < *(byte *)(unaff_x20 + 0x10) - 2) {
    if (*(byte *)(unaff_x20 + 0x10) != 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100988540);
      (*pcVar8)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 3;
    if (lVar1 != 0) {
      FUN_100980638();
      puVar3 = &DAT_100eeb710;
      uVar7 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 6;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar4 = *(ulong *)(lVar1 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType();
      pcVar8 = *(code **)(lVar6 + 0x10);
      _swift_retain(lVar1);
      (*pcVar8)(uVar4,lVar6);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        lVar6 = *(long *)(lVar1 + 0x28);
        _swift_getObjectType(uVar7);
        puVar5 = &DAT_100f203f0;
        _swift_allocObject(&DAT_100f203f0,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar1;
        *(undefined **)(puVar5 + 0x18) = puVar3;
        pcVar8 = *(code **)(lVar6 + 0x18);
        _swift_retain(lVar1);
        _swift_errorRetain(puVar3);
        (*pcVar8)(FUN_1005dfd68,puVar5,uVar7,lVar6);
        _swift_release(lVar1);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar3;
        FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        _swift_release(lVar1);
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
      _swift_errorRelease(puVar3);
    }
  }
  FUN_100626b8c();
  _swift_release(lVar1);
  return;
}



/* Address: 0x1009883c4 | FUN_1009883c4 */

void FUN_1009883c4(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release();
  if (2 < *(byte *)(unaff_x20 + 0x10) - 2) {
    if (*(byte *)(unaff_x20 + 0x10) != 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x100988540);
      (*pcVar8)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 3;
    if (lVar1 != 0) {
      FUN_100980638();
      puVar3 = &DAT_100eeb710;
      uVar7 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 6;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar4 = *(ulong *)(lVar1 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType();
      pcVar8 = *(code **)(lVar6 + 0x10);
      _swift_retain(lVar1);
      (*pcVar8)(uVar4,lVar6);
      if ((uVar4 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar1 + 0x20);
        lVar6 = *(long *)(lVar1 + 0x28);
        _swift_getObjectType(uVar7);
        puVar5 = &DAT_100f203f0;
        _swift_allocObject(&DAT_100f203f0,0x20,7);
        *(long *)(puVar5 + 0x10) = lVar1;
        *(undefined **)(puVar5 + 0x18) = puVar3;
        pcVar8 = *(code **)(lVar6 + 0x18);
        _swift_retain(lVar1);
        _swift_errorRetain(puVar3);
        (*pcVar8)(FUN_1005dfd68,puVar5,uVar7,lVar6);
        _swift_release(lVar1);
        _swift_release(puVar5);
      }
      else {
        puVar5 = puVar3;
        FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        _swift_release(lVar1);
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
      _swift_errorRelease(puVar3);
    }
  }
  FUN_100626b8c();
  _swift_release(lVar1);
  return;
}



/* Address: 0x100988540 | thunk_FUN_100988544 */

void thunk_FUN_100988544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release(uVar3);
  if (2 < *(byte *)(unaff_x20 + 0x10) - 2) {
    if (*(byte *)(unaff_x20 + 0x10) != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100988694);
      (*pcVar6)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 4;
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(lVar1 + 0x20);
      lVar5 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType();
      pcVar6 = *(code **)(lVar5 + 0x10);
      _swift_retain(lVar1);
      (*pcVar6)(uVar2,lVar5);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x20);
        lVar5 = *(long *)(lVar1 + 0x28);
        _swift_getObjectType(uVar3);
        puVar4 = &DAT_100f20418;
        _swift_allocObject(&DAT_100f20418,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar1;
        *(undefined8 *)(puVar4 + 0x18) = param_2;
        pcVar6 = *(code **)(lVar5 + 0x18);
        _swift_retain(lVar1);
        _swift_errorRetain(param_2);
        (*pcVar6)(thunk_FUN_1005dfd68,puVar4,uVar3,lVar5);
        _swift_release(lVar1);
        _swift_release(puVar4);
      }
      else {
        uVar3 = param_2;
        FUN_1005de8f4(param_2);
        FUN_1006486f8();
        _swift_release(lVar1);
        FUN_100004550(uVar3,lVar5);
        _swift_bridgeObjectRelease(param_3);
      }
    }
  }
  FUN_100626c9c(param_2);
  _swift_release(lVar1);
  return;
}



/* Address: 0x100988544 | FUN_100988544 */

void FUN_100988544(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release(uVar3);
  if (2 < *(byte *)(unaff_x20 + 0x10) - 2) {
    if (*(byte *)(unaff_x20 + 0x10) != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100988694);
      (*pcVar6)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 4;
    if (lVar1 != 0) {
      uVar2 = *(ulong *)(lVar1 + 0x20);
      lVar5 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType();
      pcVar6 = *(code **)(lVar5 + 0x10);
      _swift_retain(lVar1);
      (*pcVar6)(uVar2,lVar5);
      if ((uVar2 & 1) == 0) {
        uVar3 = *(undefined8 *)(lVar1 + 0x20);
        lVar5 = *(long *)(lVar1 + 0x28);
        _swift_getObjectType(uVar3);
        puVar4 = &DAT_100f20418;
        _swift_allocObject(&DAT_100f20418,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar1;
        *(undefined8 *)(puVar4 + 0x18) = param_2;
        pcVar6 = *(code **)(lVar5 + 0x18);
        _swift_retain(lVar1);
        _swift_errorRetain(param_2);
        (*pcVar6)(thunk_FUN_1005dfd68,puVar4,uVar3,lVar5);
        _swift_release(lVar1);
        _swift_release(puVar4);
      }
      else {
        uVar3 = param_2;
        FUN_1005de8f4(param_2);
        FUN_1006486f8();
        _swift_release(lVar1);
        FUN_100004550(uVar3,lVar5);
        _swift_bridgeObjectRelease(param_3);
      }
    }
  }
  FUN_100626c9c(param_2);
  _swift_release(lVar1);
  return;
}



/* Address: 0x100988694 | thunk_FUN_100987ea4 */

void thunk_FUN_100987ea4(void)

{
  FUN_100987ea4();
  return;
}



/* Address: 0x100988698 | thunk_FUN_1009882c8 */

void thunk_FUN_1009882c8(void)

{
  FUN_1009882c8();
  return;
}



/* Address: 0x10098869c | thunk_FUN_1009886a0 */

void thunk_FUN_1009886a0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release();
  if (((param_2 & 0xff) == 0) || (((uint)param_2 & 0xff) != 1)) {
    if ((1 < *(byte *)(unaff_x20 + 0x10)) || (*(undefined1 *)(unaff_x20 + 0x10) = 2, lVar1 == 0))
    goto LAB_1009888bc;
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 4;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = *(ulong *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar6 + 0x10);
    _swift_retain(lVar1);
    (*pcVar8)(uVar4,lVar6);
    if ((uVar4 & 1) != 0) goto LAB_100988810;
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType(uVar7);
    puVar5 = &DAT_100f20468;
    _swift_allocObject(&DAT_100f20468,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcVar8 = *(code **)(lVar6 + 0x18);
    _swift_retain(lVar1);
    _swift_errorRetain(puVar3);
LAB_100988894:
    (*pcVar8)(thunk_FUN_1005dfd68,puVar5,uVar7,lVar6);
    _swift_release(lVar1);
    _swift_release(puVar5);
  }
  else {
    if (lVar1 == 0) goto LAB_1009888bc;
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = *(ulong *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar6 + 0x10);
    _swift_retain(lVar1);
    (*pcVar8)(uVar4,lVar6);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType(uVar7);
      puVar5 = &DAT_100f20440;
      _swift_allocObject(&DAT_100f20440,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar1;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar1);
      _swift_errorRetain(puVar3);
      goto LAB_100988894;
    }
LAB_100988810:
    puVar5 = puVar3;
    FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    _swift_release(lVar1);
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar3);
LAB_1009888bc:
  FUN_100626d64(param_2,param_3);
  _swift_release(lVar1);
  return;
}



/* Address: 0x1009886a0 | FUN_1009886a0 */

void FUN_1009886a0(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined8 **)(unaff_x20 + 0x20);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  _swift_release();
  if (((param_2 & 0xff) == 0) || (((uint)param_2 & 0xff) != 1)) {
    if ((1 < *(byte *)(unaff_x20 + 0x10)) || (*(undefined1 *)(unaff_x20 + 0x10) = 2, lVar1 == 0))
    goto LAB_1009888bc;
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 4;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = *(ulong *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar6 + 0x10);
    _swift_retain(lVar1);
    (*pcVar8)(uVar4,lVar6);
    if ((uVar4 & 1) != 0) goto LAB_100988810;
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType(uVar7);
    puVar5 = &DAT_100f20468;
    _swift_allocObject(&DAT_100f20468,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(undefined **)(puVar5 + 0x18) = puVar3;
    pcVar8 = *(code **)(lVar6 + 0x18);
    _swift_retain(lVar1);
    _swift_errorRetain(puVar3);
LAB_100988894:
    (*pcVar8)(thunk_FUN_1005dfd68,puVar5,uVar7,lVar6);
    _swift_release(lVar1);
    _swift_release(puVar5);
  }
  else {
    if (lVar1 == 0) goto LAB_1009888bc;
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = *(ulong *)(lVar1 + 0x20);
    lVar6 = *(long *)(lVar1 + 0x28);
    _swift_getObjectType();
    pcVar8 = *(code **)(lVar6 + 0x10);
    _swift_retain(lVar1);
    (*pcVar8)(uVar4,lVar6);
    if ((uVar4 & 1) == 0) {
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      lVar6 = *(long *)(lVar1 + 0x28);
      _swift_getObjectType(uVar7);
      puVar5 = &DAT_100f20440;
      _swift_allocObject(&DAT_100f20440,0x20,7);
      *(long *)(puVar5 + 0x10) = lVar1;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar1);
      _swift_errorRetain(puVar3);
      goto LAB_100988894;
    }
LAB_100988810:
    puVar5 = puVar3;
    FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    _swift_release(lVar1);
    FUN_100004550(puVar5,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  _swift_errorRelease(puVar3);
LAB_1009888bc:
  FUN_100626d64(param_2,param_3);
  _swift_release(lVar1);
  return;
}


