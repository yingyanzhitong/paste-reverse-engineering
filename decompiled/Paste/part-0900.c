/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009acc68 | thunk_FUN_1009ace70 */

void thunk_FUN_1009ace70(void)

{
  FUN_1009ace70();
  return;
}



/* Address: 0x1009acc6c | FUN_1009acc6c */

void FUN_1009acc6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  NWConnection *this;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  this = *(NWConnection **)(unaff_x20 + 0x58);
  if (this == (NWConnection *)0x0) {
    return;
  }
  _swift_retain(this);
  Network::NWConnection::cancel(this);
  FUN_1009b387c(param_1);
  lVar7 = *(long *)(unaff_x20 + 0x78);
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x20 + 0x78) = 0;
    uVar8 = *(ulong *)(lVar7 + 0x20);
    lVar6 = *(long *)(lVar7 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar6 + 0x10))();
    if ((uVar8 & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      lVar6 = *(long *)(lVar7 + 0x28);
      _swift_getObjectType(uVar2);
      puVar3 = &DAT_100f24768;
      _swift_allocObject(&DAT_100f24768,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar7;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      pcVar1 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_errorRetain(param_1);
      (*pcVar1)(thunk_FUN_1008d678c,puVar3,uVar2,lVar6);
      _swift_release(lVar7);
      _swift_release(puVar3);
    }
    else {
      uVar2 = param_1;
      thunk_FUN_1005de8f4(param_1);
      FUN_1006486f8();
      _swift_release(lVar7);
      FUN_100004550(uVar2,lVar6);
      _swift_bridgeObjectRelease(param_3);
    }
  }
  local_68 = param_1;
  _swift_errorRetain(param_1);
  puVar3 = &DAT_100ff1318;
  FUN_1000f7830(&DAT_100ff1318,&DAT_100c8b710);
  puVar4 = &local_78;
  _swift_dynamicCast(puVar4,&local_68,puVar3,&DAT_100eeb710,6);
  if (((ulong)puVar4 & 1) == 0) {
    uVar8 = 0;
    uVar9 = 0xff;
  }
  else {
    FUN_10061e268(local_78,local_70);
    uVar5 = local_78;
    thunk_FUN_10061dfe8(local_78,local_70,6,3);
    FUN_10061e298(local_78,local_70);
    uVar8 = local_78;
    uVar9 = local_70;
    if ((uVar5 & 1) != 0) {
      FUN_10061e298(local_78,local_70);
      goto LAB_1009ace44;
    }
  }
  lVar7 = *(long *)(unaff_x20 + 0x48);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ace70);
    (*pcVar1)();
  }
  _swift_retain(lVar7);
  FUN_100629c10(param_1);
  FUN_1009b5c38(uVar8,uVar9);
  _swift_release(lVar7);
LAB_1009ace44:
  _swift_release(this);
  return;
}



/* Address: 0x1009ace70 | FUN_1009ace70 */

void FUN_1009ace70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  long lVar6;
  NWConnection *this;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  ulong local_78;
  undefined1 local_70;
  undefined8 local_68;
  
  this = *(NWConnection **)(unaff_x20 + 0x60);
  if (this == (NWConnection *)0x0) {
    return;
  }
  _swift_retain(this);
  Network::NWConnection::cancel(this);
  FUN_1009b3b1c(param_1);
  lVar7 = *(long *)(unaff_x20 + 0x80);
  if (lVar7 != 0) {
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    uVar8 = *(ulong *)(lVar7 + 0x20);
    lVar6 = *(long *)(lVar7 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar6 + 0x10))();
    if ((uVar8 & 1) == 0) {
      uVar2 = *(undefined8 *)(lVar7 + 0x20);
      lVar6 = *(long *)(lVar7 + 0x28);
      _swift_getObjectType(uVar2);
      puVar3 = &DAT_100f243f8;
      _swift_allocObject(&DAT_100f243f8,0x20,7);
      *(long *)(puVar3 + 0x10) = lVar7;
      *(undefined8 *)(puVar3 + 0x18) = param_1;
      pcVar1 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_errorRetain(param_1);
      (*pcVar1)(thunk_FUN_1008d678c,puVar3,uVar2,lVar6);
      _swift_release(lVar7);
      _swift_release(puVar3);
    }
    else {
      uVar2 = param_1;
      thunk_FUN_1005de8f4(param_1);
      FUN_1006486f8();
      _swift_release(lVar7);
      FUN_100004550(uVar2,lVar6);
      _swift_bridgeObjectRelease(param_3);
    }
  }
  local_68 = param_1;
  _swift_errorRetain(param_1);
  puVar3 = &DAT_100ff1318;
  FUN_1000f7830(&DAT_100ff1318,&DAT_100c8b710);
  puVar4 = &local_78;
  _swift_dynamicCast(puVar4,&local_68,puVar3,&DAT_100eeb710,6);
  if (((ulong)puVar4 & 1) == 0) {
    uVar8 = 0;
    uVar9 = 0xff;
  }
  else {
    FUN_10061e268(local_78,local_70);
    uVar5 = local_78;
    thunk_FUN_10061dfe8(local_78,local_70,6,3);
    FUN_10061e298(local_78,local_70);
    uVar8 = local_78;
    uVar9 = local_70;
    if ((uVar5 & 1) != 0) {
      FUN_10061e298(local_78,local_70);
      goto LAB_1009ad048;
    }
  }
  lVar7 = *(long *)(unaff_x20 + 0x50);
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad074);
    (*pcVar1)();
  }
  _swift_retain(lVar7);
  FUN_100629c10(param_1);
  FUN_1009b5c38(uVar8,uVar9);
  _swift_release(lVar7);
LAB_1009ad048:
  _swift_release(this);
  return;
}



/* Address: 0x1009ad074 | FUN_1009ad074 */

void FUN_1009ad074(undefined8 param_1,undefined8 param_2)

{
  FUN_1009b5920(param_2);
  return;
}



/* Address: 0x1009ad07c | FUN_1009ad07c */

/* WARNING: Removing unreachable block (ram,0x0001009ad0d0) */
/* WARNING: Removing unreachable block (ram,0x0001009ad118) */
/* WARNING: Removing unreachable block (ram,0x0001009ad128) */
/* WARNING: Removing unreachable block (ram,0x0001009ad130) */
/* WARNING: Removing unreachable block (ram,0x0001009ad3f0) */
/* WARNING: Removing unreachable block (ram,0x0001009ad13c) */
/* WARNING: Removing unreachable block (ram,0x0001009ad3fc) */
/* WARNING: Removing unreachable block (ram,0x0001009ad18c) */
/* WARNING: Removing unreachable block (ram,0x0001009ad454) */
/* WARNING: Removing unreachable block (ram,0x0001009ad45c) */
/* WARNING: Removing unreachable block (ram,0x0001009ad3a4) */
/* WARNING: Removing unreachable block (ram,0x0001009ad3a8) */

void FUN_1009ad07c(undefined8 *param_1,long param_2)

{
  long lVar1;
  SendCompletion SVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ContentContext *pCVar6;
  NWConnection *pNVar7;
  undefined7 extraout_var;
  undefined *puVar9;
  undefined8 uVar10;
  NWConnection *this;
  long unaff_x20;
  code *pcVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 auStack_a0 [5];
  undefined1 auStack_78 [24];
  long lVar8;
  
  this = *(NWConnection **)(unaff_x20 + 0x58);
  if (this == (NWConnection *)0x0) {
    if (param_2 != 0) {
      FUN_100980638();
      puVar3 = &DAT_100eeb710;
      uVar10 = 0;
      _swift_allocError(&DAT_100eeb710,param_1,0,0);
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 3;
      uVar4 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar8 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar9 = &DAT_100f24650;
        _swift_allocObject(&DAT_100f24650,0x20,7);
        *(long *)(puVar9 + 0x10) = param_2;
        *(undefined **)(puVar9 + 0x18) = puVar3;
        pcVar11 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar3);
        (*pcVar11)(thunk_FUN_1008d678c,puVar9,uVar4,lVar1);
        _swift_release(puVar9);
      }
      else {
        puVar9 = puVar3;
        thunk_FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        FUN_100004550(puVar9,lVar8);
        _swift_bridgeObjectRelease(uVar10);
      }
      _swift_errorRelease(puVar3);
      return;
    }
  }
  else {
    _swift_beginAccess(unaff_x20 + 0xa0,auStack_78,1,0);
    FUN_100991d58(unaff_x20 + 0xa0);
    pCVar6 = Network::NWConnection::ContentContext::typeMetadataAccessor();
    pNVar7 = this;
    _swift_retain();
    pCVar6 = Network::NWConnection::ContentContext::get_finalMessage
                       (pCVar6,(ContentContext *)pNVar7);
    SVar2 = Network::NWConnection::SendCompletion::typeMetadataAccessor();
    lVar8 = CONCAT71(extraout_var,SVar2.value);
    lVar13 = *(long *)(lVar8 + -8);
    lVar1 = -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar12 = (undefined8 *)((long)auStack_a0 + lVar1);
    puVar3 = &DAT_100f246a0;
    _swift_allocObject(&DAT_100f246a0,0x18,7);
    *(long *)(puVar3 + 0x10) = param_2;
    *puVar12 = FUN_1009b6768;
    *(undefined **)((long)auStack_a0 + lVar1 + 8) = puVar3;
    (**(code **)(lVar13 + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___enum_case_for_Network_NWConnection_SendCompletion_contentProcessed_Network_NWConnection_SendCompletion_Type___>___Network_NWError____>______>_Network_NWConnection_SendCompletion_100eaa028
               ,lVar8);
    _swift_retain(param_2);
    Network::NWConnection::_send(this,(ContentContext *)0x0,false,(SendCompletion)(__int8)pCVar6);
    _swift_release(pCVar6);
    (**(code **)(lVar13 + 8))(puVar12,lVar8);
    FUN_1009b387c(param_1);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009ad468 | FUN_1009ad468 */

void FUN_1009ad468(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa9,auStack_38,0,0);
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad4c8);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_100627440();
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x1009ad4c8 | FUN_1009ad4c8 */

undefined8 FUN_1009ad4c8(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x100);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad518);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf0);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad51c);
  (*pcVar1)();
}



/* Address: 0x1009ad51c | FUN_1009ad51c */

undefined8 FUN_1009ad51c(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x100);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad56c);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ad570);
  (*pcVar1)();
}



/* Address: 0x1009ad570 | FUN_1009ad570 */

void FUN_1009ad570(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1009ad588(param_1,param_2,*unaff_x20,param_3,&PTR_PTR_100ff0b98,param_4);
  return;
}



/* Address: 0x1009ad588 | FUN_1009ad588 */

code * FUN_1009ad588(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,long param_5,
                    undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 unaff_x20;
  code *pcVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined1 auStack_e0 [8];
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  long local_90;
  undefined8 local_88;
  
  lVar3 = 0;
  local_a8 = param_1;
  local_a0 = param_2;
  local_88 = param_6;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar3 + -8);
  local_b8 = *(long *)(lVar7 + 0x40);
  local_98 = auStack_e0 + -(local_b8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + -8);
  local_c0 = *(long *)(lVar8 + 0x40);
  lVar11 = (long)local_98 - (local_c0 + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(*(long *)(*(long *)(param_5 + 8) + 8) + 8);
  pcVar9 = *(code **)(lVar12 + 0x50);
  uVar10 = param_3;
  lVar5 = lVar12;
  local_b0 = lVar3;
  local_90 = param_5;
  (*pcVar9)();
  uVar13 = uVar10;
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  _swift_unknownObjectRelease(uVar10);
  if ((uVar13 & 1) == 0) {
    uVar10 = param_3;
    (*pcVar9)();
    local_d8 = lVar12;
    local_c8 = uVar10;
    _swift_getObjectType();
    local_d0 = uVar10;
    (**(code **)(lVar8 + 0x10))(lVar11,local_a8,param_4);
    lVar5 = local_b0;
    (**(code **)(lVar7 + 0x10))(local_98,local_a0,local_b0);
    bVar1 = *(byte *)(lVar8 + 0x50);
    uVar10 = (ulong)bVar1 + 0x38 & ((ulong)bVar1 ^ 0xffffffffffffffff);
    bVar2 = *(byte *)(lVar7 + 0x50);
    uVar13 = local_c0 + uVar10 + (ulong)bVar2 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    puVar4 = &DAT_100f24510;
    _swift_allocObject(&DAT_100f24510,uVar13 + local_b8,bVar1 | bVar2 | 7);
    *(ulong *)(puVar4 + 0x10) = param_3;
    *(long *)(puVar4 + 0x18) = param_4;
    *(long *)(puVar4 + 0x20) = local_90;
    *(undefined8 *)(puVar4 + 0x28) = local_88;
    *(undefined8 *)(puVar4 + 0x30) = unaff_x20;
    (**(code **)(lVar8 + 0x20))(puVar4 + uVar10,lVar11,param_4);
    (**(code **)(lVar7 + 0x20))(puVar4 + uVar13,local_98,lVar5);
    lVar5 = local_d8;
    pcVar6 = *(code **)(local_d8 + 0x20);
    _swift_unknownObjectRetain();
    uVar10 = local_c8;
    pcVar9 = FUN_1009b5fd8;
    (*pcVar6)(FUN_1009b5fd8,puVar4,PTR___type_metadata_for____100eae0c8 + 8,local_d0,lVar5);
    _swift_unknownObjectRelease(uVar10);
    _swift_release(puVar4);
  }
  else {
    uVar10 = param_3;
    (*pcVar9)(param_3,lVar12);
    FUN_1009b00c8(local_a8,local_a0,param_3,param_4,local_90,local_88);
    uVar13 = uVar10;
    _swift_getObjectType(uVar10);
    pcVar9 = (code *)&stack0xffffffffffffff88;
    FUN_10063db28(pcVar9,uVar13,PTR___type_metadata_for____100eae0c8 + 8,lVar12);
    _swift_unknownObjectRelease(uVar10);
    FUN_1002ec258(0,0);
  }
  return pcVar9;
}



/* Address: 0x1009ad82c | FUN_1009ad82c */

void FUN_1009ad82c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1009ad844(param_1,*unaff_x20,param_2,&PTR_PTR_100ff0b98,param_3);
  return;
}



/* Address: 0x1009ad844 | FUN_1009ad844 */

code * FUN_1009ad844(undefined8 param_1,ulong param_2,long param_3,long param_4,undefined8 param_5)

{
  Result RVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 unaff_x20;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  code *pcVar11;
  long lVar12;
  long local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  undefined8 local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  
  lVar12 = *(long *)(param_3 + -8);
  local_e0 = *(long *)(lVar12 + 0x40);
  lVar6 = (long)&local_f0 - (local_e0 + 0xfU & 0xfffffffffffffff0);
  uVar2 = 0xff;
  local_d8 = lVar6;
  local_d0 = param_1;
  local_c0 = param_5;
  _swift_getAssociatedTypeWitness
            (0xff,param_5,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  puVar3 = &DAT_100ff1318;
  FUN_1000f8b08(&DAT_100ff1318,&DAT_100c8b710);
  local_b8 = uVar2;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lStack_e8 = CONCAT71(extraout_var,RVar1.value);
  local_f0 = *(long *)(lStack_e8 + -8);
  pcVar9 = (code *)(lVar6 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar8 = *(long *)(*(long *)(*(long *)(param_4 + 8) + 8) + 8);
  pcVar11 = *(code **)(lVar8 + 0x50);
  uVar4 = param_2;
  lVar6 = lVar8;
  local_c8 = param_4;
  (*pcVar11)();
  uVar5 = uVar4;
  _swift_getObjectType();
  (**(code **)(lVar6 + 0x10))();
  _swift_unknownObjectRelease(uVar4);
  if ((uVar5 & 1) == 0) {
    uVar4 = param_2;
    (*pcVar11)(param_2);
    uVar5 = uVar4;
    _swift_getObjectType();
    lVar6 = local_d8;
    (**(code **)(lVar12 + 0x10))(local_d8,local_d0,param_3);
    uVar7 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar10 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f244c0;
    _swift_allocObject(&DAT_100f244c0,uVar10 + local_e0,uVar7 | 7);
    *(ulong *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = param_3;
    *(long *)(puVar3 + 0x20) = local_c8;
    *(undefined8 *)(puVar3 + 0x28) = local_c0;
    *(undefined8 *)(puVar3 + 0x30) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(puVar3 + uVar10,lVar6,param_3);
    pcVar9 = *(code **)(lVar8 + 0x20);
    _swift_unknownObjectRetain();
    pcVar11 = FUN_1009b5d44;
    (*pcVar9)(FUN_1009b5d44,puVar3,local_b8,uVar5,lVar8);
    _swift_unknownObjectRelease(uVar4);
    _swift_release(puVar3);
  }
  else {
    (*pcVar11)(param_2,lVar8);
    uVar4 = param_2;
    _swift_getObjectType();
    uVar2 = local_b8;
    FUN_1006414f4(pcVar9,FUN_1009b5d84,&stack0xffffffffffffff50,local_b8,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    pcVar11 = pcVar9;
    FUN_10063db28(pcVar9,uVar4,uVar2,lVar8);
    _swift_unknownObjectRelease(param_2);
    (**(code **)(local_f0 + 8))(pcVar9,lStack_e8);
  }
  return pcVar11;
}



/* Address: 0x1009adadc | FUN_1009adadc */

byte FUN_1009adadc(void)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  long unaff_x20;
  byte *pbVar4;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 200,auStack_38,0,0);
  pbVar4 = *(byte **)(unaff_x20 + 200);
  pcVar3 = *(code **)(*(long *)pbVar4 + 0x88);
  pbVar2 = pbVar4;
  _swift_retain();
  (*pcVar3)();
  bVar1 = *pbVar2;
  _swift_release(pbVar4);
  return bVar1 & 1;
}



/* Address: 0x1009adb38 | FUN_1009adb38 */

void FUN_1009adb38(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1009adb64 | FUN_1009adb64 */

void FUN_1009adb64(void)

{
  FUN_1009adb9c(PTR__get_localEndpoint_100eaa300);
  return;
}



/* Address: 0x1009adb80 | FUN_1009adb80 */

void FUN_1009adb80(void)

{
  FUN_1009adb9c(PTR__get_remoteEndpoint_100eaa308);
  return;
}



/* Address: 0x1009adb9c | FUN_1009adb9c */

long FUN_1009adb9c(code *param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  NWConnection *pNVar4;
  NWPath NVar5;
  long lVar6;
  long unaff_x20;
  NWConnection *this;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  long lVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar12 + 0x40);
  puVar8 = auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff25b0;
  FUN_1000f7830(&DAT_100ff25b0,&DAT_100c8b6e0);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff26f0;
  FUN_1000f7830(&DAT_100ff26f0,&DAT_100c8b7b0);
  lVar11 = lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  this = *(NWConnection **)(unaff_x20 + 0x60);
  if (this != (NWConnection *)0x0) {
    pNVar4 = this;
    _swift_retain();
    Network::NWConnection::_get_currentPath(this,pNVar4);
    _swift_release(this);
    NVar5 = Network::NWPath::typeMetadataAccessor();
    lVar10 = *(long *)(NVar5.unknown + -8);
    lVar6 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,NVar5.unknown);
    if ((int)lVar6 != 1) {
      (*param_1)(lVar9);
      (**(code **)(lVar10 + 8))(lVar11,NVar5.unknown);
      lVar6 = lVar9;
      (**(code **)(lVar12 + 0x30))(lVar9,1,lVar2);
      if ((int)lVar6 != 1) {
        (**(code **)(lVar12 + 0x20))(puVar8,lVar9,lVar2);
        lVar11 = lVar11 - (lVar7 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar12 + 0x10))(lVar11,puVar8,lVar2);
        FUN_1009a3bfc(lVar11);
        (**(code **)(lVar12 + 8))(puVar8,lVar2);
        return lVar11;
      }
      goto LAB_1009adcd0;
    }
    FUN_1000fb4c4(lVar11,&DAT_100ff26f0,&DAT_100c8b7b0);
  }
  (**(code **)(lVar12 + 0x38))(lVar9,1,1,lVar2);
LAB_1009adcd0:
  FUN_1000fb4c4(lVar9,&DAT_100ff25b0,&DAT_100c8b6e0);
  FUN_100992044();
  _swift_allocError(&DAT_100f21b18,lVar9,0,0);
  _swift_willThrow();
  return lVar7;
}



/* Address: 0x1009adde4 | FUN_1009adde4 */

long FUN_1009adde4(code *param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  NWConnection *pNVar4;
  NWPath NVar5;
  long lVar6;
  long unaff_x20;
  NWConnection *this;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_70 [8];
  long lVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar12 + 0x40);
  puVar8 = auStack_70 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff25b0;
  FUN_1000f7830(&DAT_100ff25b0,&DAT_100c8b6e0);
  lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff26f0;
  FUN_1000f7830(&DAT_100ff26f0,&DAT_100c8b7b0);
  lVar11 = lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  this = *(NWConnection **)(unaff_x20 + 0x58);
  if (this != (NWConnection *)0x0) {
    pNVar4 = this;
    _swift_retain();
    Network::NWConnection::_get_currentPath(this,pNVar4);
    _swift_release(this);
    NVar5 = Network::NWPath::typeMetadataAccessor();
    lVar10 = *(long *)(NVar5.unknown + -8);
    lVar6 = lVar11;
    (**(code **)(lVar10 + 0x30))(lVar11,1,NVar5.unknown);
    if ((int)lVar6 != 1) {
      (*param_1)(lVar9);
      (**(code **)(lVar10 + 8))(lVar11,NVar5.unknown);
      lVar6 = lVar9;
      (**(code **)(lVar12 + 0x30))(lVar9,1,lVar2);
      if ((int)lVar6 != 1) {
        (**(code **)(lVar12 + 0x20))(puVar8,lVar9,lVar2);
        lVar11 = lVar11 - (lVar7 + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar12 + 0x10))(lVar11,puVar8,lVar2);
        FUN_1009a3bfc(lVar11);
        (**(code **)(lVar12 + 8))(puVar8,lVar2);
        return lVar11;
      }
      goto LAB_1009adf18;
    }
    FUN_1000fb4c4(lVar11,&DAT_100ff26f0,&DAT_100c8b7b0);
  }
  (**(code **)(lVar12 + 0x38))(lVar9,1,1,lVar2);
LAB_1009adf18:
  FUN_1000fb4c4(lVar9,&DAT_100ff25b0,&DAT_100c8b6e0);
  FUN_100992044();
  _swift_allocError(&DAT_100f21b18,lVar9,0,0);
  _swift_willThrow();
  return lVar7;
}



/* Address: 0x1009ae02c | thunk_FUN_1009ae030 */

void thunk_FUN_1009ae030(undefined8 param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x20;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  code *pcVar13;
  undefined1 auStack_70 [32];
  
  pcVar13 = (code *)auStack_70;
  puVar10 = (undefined8 *)*unaff_x20;
  pbVar8 = (byte *)unaff_x20[0x14];
  pcVar11 = *(code **)(*(long *)pbVar8 + 0x88);
  pbVar2 = pbVar8;
  lVar9 = param_2;
  _swift_retain();
  (*pcVar11)();
  bVar1 = *pbVar2;
  _swift_release();
  if ((bVar1 & 1) == 0) {
    if (param_2 == 0) {
      return;
    }
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,pbVar8,0,0);
    pbVar8[0] = 2;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 3;
    uVar12 = *(ulong *)(param_2 + 0x20);
    lVar9 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar12;
    lVar6 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f24628;
      _swift_allocObject(&DAT_100f24628,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcVar13 = *(code **)(lVar9 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar3);
      (*pcVar13)(thunk_FUN_1008d678c,puVar5,uVar12,lVar9);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  FUN_10065b5f8();
  _swift_beginAccess(unaff_x20 + 0x16,auStack_70,0x21,0);
  _swift_retain(pbVar8);
  _swift_retain(param_2);
  FUN_1009b29e0(pbVar8,lVar9,param_3 & 0xffffffffffffff,param_2);
  _swift_endAccess(auStack_70);
  _swift_release(param_2);
  _swift_release(pbVar8);
  uVar12 = (ulong)(uint)((int)((ulong)lVar9 >> 0x20) - (int)lVar9);
  FUN_100983790(auStack_70,puVar10,&PTR_PTR_100ff0b98);
  lVar9 = puVar10[1] + uVar12;
  if (!SCARRY8(puVar10[1],uVar12)) {
    puVar10[1] = lVar9;
    if (((long)puVar10[3] < lVar9) &&
       (pcVar11 = pcVar13, (**(code **)(*(long *)*puVar10 + 0x88))(), ((byte)*pcVar11 & 1) != 0)) {
      (**(code **)(*(long *)*puVar10 + 0x88))();
      *pcVar11 = (code)0x0;
      (*pcVar13)(auStack_70,0);
      lVar9 = unaff_x20[10];
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1009ae2b8);
        (*pcVar13)();
      }
      _swift_retain(lVar9);
      FUN_10062994c();
      _swift_release(lVar9);
    }
    else {
      (*pcVar13)(auStack_70,0);
    }
    _swift_release(pbVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1009ae2b4);
  (*pcVar13)();
}



/* Address: 0x1009ae030 | FUN_1009ae030 */

void FUN_1009ae030(undefined8 param_1,long param_2,ulong param_3)

{
  byte bVar1;
  byte *pbVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long *unaff_x20;
  byte *pbVar8;
  long lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  ulong uVar12;
  code *pcVar13;
  undefined1 auStack_70 [32];
  
  pcVar13 = (code *)auStack_70;
  puVar10 = (undefined8 *)*unaff_x20;
  pbVar8 = (byte *)unaff_x20[0x14];
  pcVar11 = *(code **)(*(long *)pbVar8 + 0x88);
  pbVar2 = pbVar8;
  lVar9 = param_2;
  _swift_retain();
  (*pcVar11)();
  bVar1 = *pbVar2;
  _swift_release();
  if ((bVar1 & 1) == 0) {
    if (param_2 == 0) {
      return;
    }
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,pbVar8,0,0);
    pbVar8[0] = 2;
    pbVar8[1] = 0;
    pbVar8[2] = 0;
    pbVar8[3] = 0;
    pbVar8[4] = 0;
    pbVar8[5] = 0;
    pbVar8[6] = 0;
    pbVar8[7] = 0;
    pbVar8[8] = 3;
    uVar12 = *(ulong *)(param_2 + 0x20);
    lVar9 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar12;
    lVar6 = lVar9;
    (**(code **)(lVar9 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f24628;
      _swift_allocObject(&DAT_100f24628,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      pcVar13 = *(code **)(lVar9 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar3);
      (*pcVar13)(thunk_FUN_1008d678c,puVar5,uVar12,lVar9);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  FUN_10065b5f8();
  _swift_beginAccess(unaff_x20 + 0x16,auStack_70,0x21,0);
  _swift_retain(pbVar8);
  _swift_retain(param_2);
  FUN_1009b29e0(pbVar8,lVar9,param_3 & 0xffffffffffffff,param_2);
  _swift_endAccess(auStack_70);
  _swift_release(param_2);
  _swift_release(pbVar8);
  uVar12 = (ulong)(uint)((int)((ulong)lVar9 >> 0x20) - (int)lVar9);
  FUN_100983790(auStack_70,puVar10,&PTR_PTR_100ff0b98);
  lVar9 = puVar10[1] + uVar12;
  if (!SCARRY8(puVar10[1],uVar12)) {
    puVar10[1] = lVar9;
    if (((long)puVar10[3] < lVar9) &&
       (pcVar11 = pcVar13, (**(code **)(*(long *)*puVar10 + 0x88))(), ((byte)*pcVar11 & 1) != 0)) {
      (**(code **)(*(long *)*puVar10 + 0x88))();
      *pcVar11 = (code)0x0;
      (*pcVar13)(auStack_70,0);
      lVar9 = unaff_x20[10];
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1009ae2b8);
        (*pcVar13)();
      }
      _swift_retain(lVar9);
      FUN_10062994c();
      _swift_release(lVar9);
    }
    else {
      (*pcVar13)(auStack_70,0);
    }
    _swift_release(pbVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1009ae2b4);
  (*pcVar13)();
}



/* Address: 0x1009ae2b8 | FUN_1009ae2b8 */

void FUN_1009ae2b8(byte *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  code *pcVar10;
  undefined1 auStack_70 [32];
  
  pcVar10 = (code *)auStack_70;
  puVar8 = (undefined8 *)*unaff_x20;
  lVar7 = param_2;
  (**(code **)(*(long *)unaff_x20[0x15] + 0x88))();
  if ((*param_1 & 1) == 0) {
    if (param_2 == 0) {
      return;
    }
    FUN_100980638();
    puVar1 = &DAT_100eeb710;
    uVar6 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    param_1[0] = 2;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 3;
    uVar9 = *(ulong *)(param_2 + 0x20);
    lVar7 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar2 = uVar9;
    lVar5 = lVar7;
    (**(code **)(lVar7 + 0x10))();
    if ((uVar2 & 1) == 0) {
      puVar4 = &DAT_100f248d0;
      _swift_allocObject(&DAT_100f248d0,0x20,7);
      *(long *)(puVar4 + 0x10) = param_2;
      *(undefined **)(puVar4 + 0x18) = puVar1;
      pcVar10 = *(code **)(lVar7 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar1);
      (*pcVar10)(thunk_FUN_1008d678c,puVar4,uVar9,lVar7);
      _swift_release(puVar4);
    }
    else {
      puVar4 = puVar1;
      thunk_FUN_1005de8f4(puVar1);
      FUN_1006486f8();
      FUN_100004550(puVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
    }
    _swift_errorRelease(puVar1);
    return;
  }
  FUN_10065b5f8();
  _swift_beginAccess(unaff_x20 + 0x17,auStack_70,0x21,0);
  _swift_retain(param_1);
  _swift_retain(param_2);
  FUN_1009b29e0(param_1,lVar7,param_3 & 0xffffffffffffff,param_2);
  _swift_endAccess(auStack_70);
  _swift_release(param_2);
  _swift_release(param_1);
  uVar9 = (ulong)(uint)((int)((ulong)lVar7 >> 0x20) - (int)lVar7);
  FUN_100990ad4(auStack_70,puVar8,&PTR_PTR_100ff18f0);
  lVar7 = puVar8[1] + uVar9;
  if (!SCARRY8(puVar8[1],uVar9)) {
    puVar8[1] = lVar7;
    if (((long)puVar8[3] < lVar7) &&
       (pcVar3 = pcVar10, (**(code **)(*(long *)*puVar8 + 0x88))(), ((byte)*pcVar3 & 1) != 0)) {
      (**(code **)(*(long *)*puVar8 + 0x88))();
      *pcVar3 = (code)0x0;
      (*pcVar10)(auStack_70,0);
      lVar7 = unaff_x20[9];
      if (lVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x1009ae530);
        (*pcVar10)();
      }
      _swift_retain(lVar7);
      FUN_10062994c();
      _swift_release(lVar7);
    }
    else {
      (*pcVar10)(auStack_70,0);
    }
    _swift_release(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1009ae52c);
  (*pcVar10)();
}



/* Address: 0x1009ae530 | thunk_FUN_1009ae534 */

void thunk_FUN_1009ae534(void)

{
  byte bVar1;
  byte *pbVar2;
  long unaff_x20;
  byte *pbVar3;
  NWConnection *this;
  code *pcVar4;
  
  pbVar3 = *(byte **)(unaff_x20 + 0xa0);
  pcVar4 = *(code **)(*(long *)pbVar3 + 0x88);
  pbVar2 = pbVar3;
  _swift_retain();
  (*pcVar4)();
  bVar1 = *pbVar2;
  _swift_release(pbVar3);
  if ((bVar1 & 1) != 0) {
    this = *(NWConnection **)(unaff_x20 + 0x60);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ae5b8);
      (*pcVar4)();
    }
    _swift_retain(this);
    Network::NWConnection::_batch(this);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009ae534 | FUN_1009ae534 */

void FUN_1009ae534(void)

{
  byte bVar1;
  byte *pbVar2;
  long unaff_x20;
  byte *pbVar3;
  NWConnection *this;
  code *pcVar4;
  
  pbVar3 = *(byte **)(unaff_x20 + 0xa0);
  pcVar4 = *(code **)(*(long *)pbVar3 + 0x88);
  pbVar2 = pbVar3;
  _swift_retain();
  (*pcVar4)();
  bVar1 = *pbVar2;
  _swift_release(pbVar3);
  if ((bVar1 & 1) != 0) {
    this = *(NWConnection **)(unaff_x20 + 0x60);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ae5b8);
      (*pcVar4)();
    }
    _swift_retain(this);
    Network::NWConnection::_batch(this);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009ae5b8 | FUN_1009ae5b8 */

void FUN_1009ae5b8(byte *param_1)

{
  code *pcVar1;
  long unaff_x20;
  NWConnection *this;
  
  (**(code **)(**(long **)(unaff_x20 + 0xa8) + 0x88))();
  if ((*param_1 & 1) != 0) {
    this = *(NWConnection **)(unaff_x20 + 0x58);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ae624);
      (*pcVar1)();
    }
    _swift_retain(this);
    Network::NWConnection::_batch(this);
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009ae624 | thunk_FUN_1009ae628 */

void thunk_FUN_1009ae628(void)

{
  __int64 minimumIncompleteLength;
  __int64 maximumLength;
  code *pcVar1;
  NWConnection *this;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x98,auStack_48,0,0);
  if ((4 < *(byte *)(unaff_x20 + 0x98) - 1) && ((*(byte *)(unaff_x20 + 0xa8) & 1) == 0)) {
    this = *(NWConnection **)(unaff_x20 + 0x60);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ae6d4);
      (*pcVar1)();
    }
    *(undefined1 *)(unaff_x20 + 0xa8) = 1;
    minimumIncompleteLength = *(__int64 *)(unaff_x20 + 0x68);
    maximumLength = *(__int64 *)(unaff_x20 + 0x70);
    _swift_retain(this);
    _swift_retain();
    Network::NWConnection::_receive(this,minimumIncompleteLength,maximumLength);
    _swift_release(this);
    _swift_release();
  }
  return;
}



/* Address: 0x1009ae628 | FUN_1009ae628 */

void FUN_1009ae628(void)

{
  __int64 minimumIncompleteLength;
  __int64 maximumLength;
  code *pcVar1;
  NWConnection *this;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x98,auStack_48,0,0);
  if ((4 < *(byte *)(unaff_x20 + 0x98) - 1) && ((*(byte *)(unaff_x20 + 0xa8) & 1) == 0)) {
    this = *(NWConnection **)(unaff_x20 + 0x60);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ae6d4);
      (*pcVar1)();
    }
    *(undefined1 *)(unaff_x20 + 0xa8) = 1;
    minimumIncompleteLength = *(__int64 *)(unaff_x20 + 0x68);
    maximumLength = *(__int64 *)(unaff_x20 + 0x70);
    _swift_retain(this);
    _swift_retain();
    Network::NWConnection::_receive(this,minimumIncompleteLength,maximumLength);
    _swift_release(this);
    _swift_release();
  }
  return;
}



/* Address: 0x1009ae6d4 | FUN_1009ae6d4 */

void FUN_1009ae6d4(void)

{
  __int64 minimumIncompleteLength;
  __int64 maximumLength;
  code *pcVar1;
  NWConnection *this;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0xa0,auStack_48,0,0);
  if ((*(byte *)(unaff_x20 + 0xa0) < 2 && (*(byte *)(unaff_x20 + 0xa0) & 0xfc) != 4) &&
     ((*(byte *)(unaff_x20 + 0xb1) & 1) == 0)) {
    this = *(NWConnection **)(unaff_x20 + 0x58);
    if (this == (NWConnection *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ae784);
      (*pcVar1)();
    }
    *(undefined1 *)(unaff_x20 + 0xb1) = 1;
    minimumIncompleteLength = *(__int64 *)(unaff_x20 + 0x60);
    maximumLength = *(__int64 *)(unaff_x20 + 0x68);
    _swift_retain(this);
    _swift_retain();
    Network::NWConnection::_receive(this,minimumIncompleteLength,maximumLength);
    _swift_release(this);
    _swift_release();
  }
  return;
}



/* Address: 0x1009ae784 | FUN_1009ae784 */

void FUN_1009ae784(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    FUN_1009b5920(param_3);
    return;
  }
  if (param_2 == '\x01') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar7 = &DAT_100f243a8;
      _swift_allocObject(&DAT_100f243a8,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined **)(puVar7 + 0x18) = puVar3;
      pcVar12 = *(code **)(lVar10 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar3);
      (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar4,lVar10);
      _swift_release(puVar7);
    }
    else {
      puVar7 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  puVar2 = (undefined8 *)(unaff_x20 + 0x98);
  _swift_beginAccess(puVar2,auStack_68,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0x98);
  if (bVar1 == 5) {
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 3;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_willThrow();
    if (param_3 == 0) {
      _swift_errorRelease(puVar3);
      return;
    }
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar5 & 1) != 0) {
      puVar7 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      _swift_errorRelease(puVar3);
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
      return;
    }
    puVar7 = &DAT_100f243d0;
    _swift_allocObject(&DAT_100f243d0,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar3;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar3);
    (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar4,lVar10);
    _swift_errorRelease(puVar3);
    goto LAB_1009aeaf0;
  }
  *(undefined1 *)(unaff_x20 + 0x98) = 5;
  plVar9 = *(long **)(unaff_x20 + 0xa0);
  pcVar12 = *(code **)(*plVar9 + 0x88);
  plVar6 = plVar9;
  _swift_retain();
  (*pcVar12)();
  *(undefined1 *)plVar6 = 0;
  _swift_release(plVar9);
  FUN_1009ace70(param_1);
  if (bVar1 - 3 < 2) {
LAB_1009ae980:
    _swift_beginAccess(*(long *)(unaff_x20 + 0x48) +
                       _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88,
                       0x21,0);
    lVar10 = unaff_x20;
    FUN_1009b5580();
    _swift_endAccess(auStack_88);
    _swift_unknownObjectRelease(lVar10);
    lVar10 = *(long *)(unaff_x20 + 0x50);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1009aeb14);
      (*pcVar12)();
    }
    _swift_retain(lVar10);
    FUN_10062953c();
    _swift_release(lVar10);
  }
  else if (bVar1 != 2) {
    lVar10 = *(long *)(unaff_x20 + 0x50);
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1009aeb18);
      (*pcVar12)();
    }
    _swift_retain(lVar10);
    FUN_100629550();
    _swift_release(lVar10);
    goto LAB_1009ae980;
  }
  if (param_3 != 0) {
    FUN_100988b88(0,0,param_3);
  }
  lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  lVar11 = *(long *)(unaff_x20 + 0x48);
  _swift_retain();
  FUN_100992db8(lVar11 + lVar10,FUN_1009b5c30);
LAB_1009aeaf0:
  _swift_release();
  return;
}



/* Address: 0x1009aeb18 | FUN_1009aeb18 */

void FUN_1009aeb18(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lVar8;
  long lVar9;
  code *pcVar10;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    FUN_1009ad07c(param_1,param_3);
    return;
  }
  if (param_2 == '\x01') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar8 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar9 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f24718;
      _swift_allocObject(&DAT_100f24718,0x20,7);
      *(long *)(puVar6 + 0x10) = param_3;
      *(undefined **)(puVar6 + 0x18) = puVar3;
      pcVar10 = *(code **)(lVar8 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar3);
      (*pcVar10)(thunk_FUN_1008d678c,puVar6,uVar4,lVar8);
      _swift_release(puVar6);
    }
    else {
      puVar6 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar6,lVar9);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  puVar2 = (undefined8 *)(unaff_x20 + 0xa0);
  _swift_beginAccess(puVar2,auStack_68,1,0);
  bVar1 = *(byte *)(unaff_x20 + 0xa0);
  if (bVar1 == 7) {
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 3;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_willThrow();
    if (param_3 == 0) {
      _swift_errorRelease(puVar3);
      return;
    }
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar8 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar9 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar5 & 1) != 0) {
      puVar6 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      _swift_errorRelease(puVar3);
      FUN_100004550(puVar6,lVar9);
      _swift_bridgeObjectRelease(uVar7);
      return;
    }
    puVar6 = &DAT_100f24740;
    _swift_allocObject(&DAT_100f24740,0x20,7);
    *(long *)(puVar6 + 0x10) = param_3;
    *(undefined **)(puVar6 + 0x18) = puVar3;
    pcVar10 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar3);
    (*pcVar10)(thunk_FUN_1008d678c,puVar6,uVar4,lVar8);
    _swift_errorRelease(puVar3);
    goto LAB_1009aee74;
  }
  *(undefined1 *)(unaff_x20 + 0xa0) = 7;
  (**(code **)(**(long **)(unaff_x20 + 0xa8) + 0x88))();
  *(undefined1 *)puVar2 = 0;
  FUN_1009acc6c(param_1);
  if (bVar1 - 5 < 2) {
LAB_1009aed04:
    _swift_beginAccess(*(long *)(unaff_x20 + 0x40) +
                       _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88,
                       0x21,0);
    lVar8 = unaff_x20;
    FUN_1009b5580();
    _swift_endAccess(auStack_88);
    _swift_unknownObjectRelease(lVar8);
    lVar8 = *(long *)(unaff_x20 + 0x48);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009aee98);
      (*pcVar10)();
    }
    _swift_retain(lVar8);
    FUN_10062953c();
    _swift_release(lVar8);
  }
  else if (bVar1 != 4) {
    lVar8 = *(long *)(unaff_x20 + 0x48);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009aee9c);
      (*pcVar10)();
    }
    _swift_retain(lVar8);
    FUN_100629550();
    _swift_release(lVar8);
    goto LAB_1009aed04;
  }
  if (param_3 != 0) {
    FUN_100988b88(0,0,param_3);
  }
  lVar8 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  lVar9 = *(long *)(unaff_x20 + 0x40);
  _swift_retain();
  FUN_100992db8(lVar9 + lVar8,FUN_1009b6770);
LAB_1009aee74:
  _swift_release();
  return;
}



/* Address: 0x1009aee9c | FUN_1009aee9c */

void FUN_1009aee9c(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) {
LAB_1009aefb0:
      puVar7 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
      goto LAB_1009af204;
    }
    puVar7 = &DAT_100f24b00;
    _swift_allocObject(&DAT_100f24b00,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  else {
    if (param_2 != '\x01') {
      puVar5 = (undefined8 *)(unaff_x20 + 0x88);
      _swift_beginAccess(puVar5,auStack_68,1,0);
      bVar1 = *(byte *)(unaff_x20 + 0x88);
      if (3 < bVar1) {
        FUN_100980638();
        puVar2 = &DAT_100eeb710;
        uVar8 = 0;
        _swift_allocError(&DAT_100eeb710,puVar5,0,0);
        *puVar5 = 3;
        *(undefined1 *)(puVar5 + 1) = 3;
        _swift_willThrow();
        if (param_3 == 0) {
          _swift_errorRelease(puVar2);
          return;
        }
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar10 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar11 = lVar10;
        (**(code **)(lVar10 + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar7 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar7,lVar11);
          _swift_bridgeObjectRelease(uVar8);
          return;
        }
        puVar7 = &DAT_100f24b50;
        _swift_allocObject(&DAT_100f24b50,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined **)(puVar7 + 0x18) = puVar2;
        pcVar12 = *(code **)(lVar10 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar2);
        (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
        _swift_errorRelease(puVar2);
        goto LAB_1009af284;
      }
      *(undefined1 *)(unaff_x20 + 0x88) = 4;
      plVar9 = *(long **)(unaff_x20 + 0x90);
      pcVar12 = *(code **)(*plVar9 + 0x88);
      plVar6 = plVar9;
      _swift_retain();
      (*pcVar12)();
      *(undefined1 *)plVar6 = 0;
      _swift_release(plVar9);
      FUN_1009b2254(param_1,&DAT_100f24ad8,thunk_FUN_1008d678c);
      if (bVar1 - 2 < 2) {
LAB_1009af080:
        _swift_beginAccess(*(long *)(unaff_x20 + 0x40) +
                           _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88
                           ,0x21,0);
        lVar10 = unaff_x20;
        FUN_1009b5580();
        _swift_endAccess(auStack_88);
        _swift_unknownObjectRelease(lVar10);
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009af2a8);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_10062953c();
        _swift_release(lVar10);
      }
      else if (bVar1 == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009af2ac);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_100629550();
        _swift_release(lVar10);
        goto LAB_1009af080;
      }
      if (param_3 != 0) {
        FUN_100988b88(0,0,param_3);
      }
      lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
      lVar11 = *(long *)(unaff_x20 + 0x40);
      _swift_retain();
      FUN_100992db8(lVar11 + lVar10,thunk_FUN_1009b6e9c);
LAB_1009af284:
      _swift_release();
      return;
    }
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) goto LAB_1009aefb0;
    puVar7 = &DAT_100f24b28;
    _swift_allocObject(&DAT_100f24b28,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
  _swift_release(puVar7);
LAB_1009af204:
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009af2ac | FUN_1009af2ac */

void FUN_1009af2ac(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) {
LAB_1009af3c0:
      puVar7 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
      goto LAB_1009af614;
    }
    puVar7 = &DAT_100f24a60;
    _swift_allocObject(&DAT_100f24a60,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  else {
    if (param_2 != '\x01') {
      puVar5 = (undefined8 *)(unaff_x20 + 0x88);
      _swift_beginAccess(puVar5,auStack_68,1,0);
      bVar1 = *(byte *)(unaff_x20 + 0x88);
      if (3 < bVar1) {
        FUN_100980638();
        puVar2 = &DAT_100eeb710;
        uVar8 = 0;
        _swift_allocError(&DAT_100eeb710,puVar5,0,0);
        *puVar5 = 3;
        *(undefined1 *)(puVar5 + 1) = 3;
        _swift_willThrow();
        if (param_3 == 0) {
          _swift_errorRelease(puVar2);
          return;
        }
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar10 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar11 = lVar10;
        (**(code **)(lVar10 + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar7 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar7,lVar11);
          _swift_bridgeObjectRelease(uVar8);
          return;
        }
        puVar7 = &DAT_100f24ab0;
        _swift_allocObject(&DAT_100f24ab0,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined **)(puVar7 + 0x18) = puVar2;
        pcVar12 = *(code **)(lVar10 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar2);
        (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
        _swift_errorRelease(puVar2);
        goto LAB_1009af694;
      }
      *(undefined1 *)(unaff_x20 + 0x88) = 4;
      plVar9 = *(long **)(unaff_x20 + 0x90);
      pcVar12 = *(code **)(*plVar9 + 0x88);
      plVar6 = plVar9;
      _swift_retain();
      (*pcVar12)();
      *(undefined1 *)plVar6 = 0;
      _swift_release(plVar9);
      FUN_1009b2254(param_1,&DAT_100f24ad8,thunk_FUN_1008d678c);
      if (bVar1 - 2 < 2) {
LAB_1009af490:
        _swift_beginAccess(*(long *)(unaff_x20 + 0x40) +
                           _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88
                           ,0x21,0);
        lVar10 = unaff_x20;
        FUN_1009b5580();
        _swift_endAccess(auStack_88);
        _swift_unknownObjectRelease(lVar10);
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009af6b8);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_10062953c();
        _swift_release(lVar10);
      }
      else if (bVar1 == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009af6bc);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_100629550();
        _swift_release(lVar10);
        goto LAB_1009af490;
      }
      if (param_3 != 0) {
        FUN_100988b88(0,0,param_3);
      }
      lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
      lVar11 = *(long *)(unaff_x20 + 0x40);
      _swift_retain();
      FUN_100992db8(lVar11 + lVar10,FUN_1009b6ebc);
LAB_1009af694:
      _swift_release();
      return;
    }
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) goto LAB_1009af3c0;
    puVar7 = &DAT_100f24a88;
    _swift_allocObject(&DAT_100f24a88,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
  _swift_release(puVar7);
LAB_1009af614:
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009af6bc | FUN_1009af6bc */

void FUN_1009af6bc(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) {
LAB_1009af7d0:
      puVar7 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
      goto LAB_1009afa24;
    }
    puVar7 = &DAT_100f249e8;
    _swift_allocObject(&DAT_100f249e8,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  else {
    if (param_2 != '\x01') {
      puVar5 = (undefined8 *)(unaff_x20 + 0x88);
      _swift_beginAccess(puVar5,auStack_68,1,0);
      bVar1 = *(byte *)(unaff_x20 + 0x88);
      if (3 < bVar1) {
        FUN_100980638();
        puVar2 = &DAT_100eeb710;
        uVar8 = 0;
        _swift_allocError(&DAT_100eeb710,puVar5,0,0);
        *puVar5 = 3;
        *(undefined1 *)(puVar5 + 1) = 3;
        _swift_willThrow();
        if (param_3 == 0) {
          _swift_errorRelease(puVar2);
          return;
        }
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar10 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar11 = lVar10;
        (**(code **)(lVar10 + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar7 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar7,lVar11);
          _swift_bridgeObjectRelease(uVar8);
          return;
        }
        puVar7 = &DAT_100f24a38;
        _swift_allocObject(&DAT_100f24a38,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined **)(puVar7 + 0x18) = puVar2;
        pcVar12 = *(code **)(lVar10 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar2);
        (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
        _swift_errorRelease(puVar2);
        goto LAB_1009afaa4;
      }
      *(undefined1 *)(unaff_x20 + 0x88) = 4;
      plVar9 = *(long **)(unaff_x20 + 0x90);
      pcVar12 = *(code **)(*plVar9 + 0x88);
      plVar6 = plVar9;
      _swift_retain();
      (*pcVar12)();
      *(undefined1 *)plVar6 = 0;
      _swift_release(plVar9);
      FUN_1009b2254(param_1,&DAT_100f249c0,thunk_FUN_1008d678c);
      if (bVar1 - 2 < 2) {
LAB_1009af8a0:
        _swift_beginAccess(*(long *)(unaff_x20 + 0x40) +
                           _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88
                           ,0x21,0);
        lVar10 = unaff_x20;
        FUN_1009b5580();
        _swift_endAccess(auStack_88);
        _swift_unknownObjectRelease(lVar10);
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009afac8);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_10062953c();
        _swift_release(lVar10);
      }
      else if (bVar1 == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009afacc);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_100629550();
        _swift_release(lVar10);
        goto LAB_1009af8a0;
      }
      if (param_3 != 0) {
        FUN_100988b88(0,0,param_3);
      }
      lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
      lVar11 = *(long *)(unaff_x20 + 0x40);
      _swift_retain();
      FUN_100992db8(lVar11 + lVar10,FUN_1009b6e9c);
LAB_1009afaa4:
      _swift_release();
      return;
    }
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) goto LAB_1009af7d0;
    puVar7 = &DAT_100f24a10;
    _swift_allocObject(&DAT_100f24a10,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
  _swift_release(puVar7);
LAB_1009afa24:
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009afacc | FUN_1009afacc */

void FUN_1009afacc(undefined8 *param_1,char param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long unaff_x20;
  long *plVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  if (param_2 == '\0') {
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) {
LAB_1009afbe0:
      puVar7 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar7,lVar11);
      _swift_bridgeObjectRelease(uVar8);
      goto LAB_1009afe34;
    }
    puVar7 = &DAT_100f24948;
    _swift_allocObject(&DAT_100f24948,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  else {
    if (param_2 != '\x01') {
      puVar5 = (undefined8 *)(unaff_x20 + 0x88);
      _swift_beginAccess(puVar5,auStack_68,1,0);
      bVar1 = *(byte *)(unaff_x20 + 0x88);
      if (3 < bVar1) {
        FUN_100980638();
        puVar2 = &DAT_100eeb710;
        uVar8 = 0;
        _swift_allocError(&DAT_100eeb710,puVar5,0,0);
        *puVar5 = 3;
        *(undefined1 *)(puVar5 + 1) = 3;
        _swift_willThrow();
        if (param_3 == 0) {
          _swift_errorRelease(puVar2);
          return;
        }
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar10 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar11 = lVar10;
        (**(code **)(lVar10 + 0x10))();
        if ((uVar4 & 1) != 0) {
          puVar7 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar7,lVar11);
          _swift_bridgeObjectRelease(uVar8);
          return;
        }
        puVar7 = &DAT_100f24998;
        _swift_allocObject(&DAT_100f24998,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined **)(puVar7 + 0x18) = puVar2;
        pcVar12 = *(code **)(lVar10 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(puVar2);
        (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
        _swift_errorRelease(puVar2);
        goto LAB_1009afeb4;
      }
      *(undefined1 *)(unaff_x20 + 0x88) = 4;
      plVar9 = *(long **)(unaff_x20 + 0x90);
      pcVar12 = *(code **)(*plVar9 + 0x88);
      plVar6 = plVar9;
      _swift_retain();
      (*pcVar12)();
      *(undefined1 *)plVar6 = 0;
      _swift_release(plVar9);
      FUN_1009b2254(param_1,&DAT_100f249c0,thunk_FUN_1008d678c);
      if (bVar1 - 2 < 2) {
LAB_1009afcb0:
        _swift_beginAccess(*(long *)(unaff_x20 + 0x40) +
                           _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,auStack_88
                           ,0x21,0);
        lVar10 = unaff_x20;
        FUN_1009b5580();
        _swift_endAccess(auStack_88);
        _swift_unknownObjectRelease(lVar10);
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009afed8);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_10062953c();
        _swift_release(lVar10);
      }
      else if (bVar1 == 0) {
        lVar10 = *(long *)(unaff_x20 + 0x48);
        if (lVar10 == 0) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x1009afedc);
          (*pcVar12)();
        }
        _swift_retain(lVar10);
        FUN_100629550();
        _swift_release(lVar10);
        goto LAB_1009afcb0;
      }
      if (param_3 != 0) {
        FUN_100988b88(0,0,param_3);
      }
      lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
      lVar11 = *(long *)(unaff_x20 + 0x40);
      _swift_retain();
      FUN_100992db8(lVar11 + lVar10,FUN_1009b6e74);
LAB_1009afeb4:
      _swift_release();
      return;
    }
    if (param_3 == 0) {
      return;
    }
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar10 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar11 = lVar10;
    (**(code **)(lVar10 + 0x10))();
    if ((uVar4 & 1) != 0) goto LAB_1009afbe0;
    puVar7 = &DAT_100f24970;
    _swift_allocObject(&DAT_100f24970,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined **)(puVar7 + 0x18) = puVar2;
    pcVar12 = *(code **)(lVar10 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(puVar2);
  }
  (*pcVar12)(thunk_FUN_1008d678c,puVar7,uVar3,lVar10);
  _swift_release(puVar7);
LAB_1009afe34:
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x1009afedc | FUN_1009afedc */

void FUN_1009afedc(undefined8 param_1,undefined8 param_2)

{
  FUN_1009aff08(param_1,param_2,FUN_1009b1c50,&DAT_100f24538,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1009aff08 | FUN_1009aff08 */

void FUN_1009aff08(undefined8 param_1,long param_2,code *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  code *pcVar10;
  undefined8 auStack_80 [4];
  
  lVar1 = 0;
  FUN_1009a2f4c();
  uVar8 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar6 = (long)auStack_80 - uVar8;
  puVar9 = (undefined8 *)(lVar6 - uVar8);
  FUN_10000cbfc(param_1,auStack_80);
  puVar2 = puVar9;
  _swift_dynamicCast(puVar9,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,lVar1,0);
  if ((int)puVar2 == 0) {
    if (param_2 != 0) {
      FUN_100980638();
      puVar3 = &DAT_100eeb710;
      uVar7 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar8 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar8;
      lVar6 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar4 & 1) == 0) {
        _swift_allocObject(param_4,0x20,7);
        *(long *)(param_4 + 0x10) = param_2;
        *(undefined **)(param_4 + 0x18) = puVar3;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar3);
        (*pcVar10)(param_5,param_4,uVar8,lVar1);
        _swift_release(param_4);
      }
      else {
        puVar5 = puVar3;
        thunk_FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        FUN_100004550(puVar5,lVar6);
        _swift_bridgeObjectRelease(uVar7);
      }
      _swift_errorRelease(puVar3);
    }
  }
  else {
    FUN_1009b6084(puVar9,lVar6);
    (*param_3)(0,lVar6,param_2);
    FUN_1009b60c8(lVar6);
  }
  FUN_100004594(auStack_80);
  return;
}



/* Address: 0x1009b00c8 | FUN_1009b00c8 */

void FUN_1009b00c8(undefined8 param_1,undefined8 param_2,NWConnection *param_3,long param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  NWConnection *pNVar7;
  undefined1 *puVar8;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar9;
  long lVar10;
  ulong uVar11;
  code *pcVar12;
  ulong unaff_x20;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_110 [8];
  long local_108;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  undefined1 *local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  int local_98;
  int iStack_94;
  undefined8 uStack_90;
  
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_5,param_3,0x100cc8118,&TargetProtocolRequirement_100cc8138);
  local_e0 = *(long *)(lVar5 + -8);
  lVar10 = *(long *)(local_e0 + 0x40);
  uVar6 = 0;
  local_100 = param_6;
  local_e8 = auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  local_d8 = lVar5;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  local_c0 = *(long *)(uVar6 - 8);
  uVar11 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = (long)(auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) - uVar11;
  local_c8 = local_f0 - uVar11;
  lVar10 = *(long *)(param_4 + -8);
  uVar11 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar17 = local_c8 - uVar11;
  lVar5 = lVar17 - uVar11;
  lVar15 = *(long *)(param_5 + 8);
  local_f8 = *(long *)(lVar15 + 8);
  local_b8 = uVar6;
  local_b0 = param_5;
  (**(code **)(*(long *)(local_f8 + 8) + 0x50))(param_3);
  _swift_unknownObjectRelease();
  pNVar7 = param_3;
  local_d0 = lVar15;
  FUN_1009a6764(param_3,lVar15);
  if (((ulong)pNVar7 & 1) != 0) {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,pNVar7,0,0);
    *(undefined8 *)pNVar7 = 2;
    pNVar7[8] = (NWConnection)0x3;
    _swift_willThrow();
    return;
  }
  pcVar12 = *(code **)(lVar10 + 0x10);
  lVar15 = lVar5;
  local_108 = lVar10;
  (*pcVar12)(lVar5,param_1,param_4);
  iVar4 = (int)lVar15;
  _swift_dynamicCast();
  uVar6 = local_b8;
  lVar10 = local_c8;
  if (iVar4 != 0) {
    (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
    _swift_dynamicCast(&local_98,lVar10,uVar6,PTR___type_metadata_for_Swift_Bool_100eac570,7);
    pcVar12 = (code *)&stack0xffffffffffffff78;
    pNVar7 = param_3;
    (**(code **)(local_b0 + 200))();
    *pNVar7 = local_98._0_1_;
    (*pcVar12)(&stack0xffffffffffffff78,0);
    (**(code **)(local_d0 + 0x88))(param_3);
    lVar10 = param_4;
    goto LAB_1009b0808;
  }
  puVar8 = &stack0xffffffffffffff78;
  _swift_dynamicCast(puVar8,lVar5,param_4,&DAT_100eec8d0,0);
  iVar4 = (int)puVar8;
  if (iVar4 == 0) {
    _swift_dynamicCast();
    uVar6 = local_b8;
    lVar10 = local_c8;
    if (iVar4 == 0) {
      _swift_dynamicCast();
      uVar6 = local_b8;
      lVar10 = local_c8;
      if (iVar4 == 0) {
        _swift_dynamicCast();
        uVar6 = local_b8;
        lVar10 = local_c8;
        if (iVar4 == 0) {
          _swift_dynamicCast();
          uVar6 = local_b8;
          lVar10 = local_c8;
          if (iVar4 == 0) {
            _swift_dynamicCast();
            uVar6 = local_b8;
            lVar10 = local_c8;
            if (iVar4 == 0) {
              _swift_dynamicCast();
              uVar6 = local_b8;
              lVar10 = local_c8;
              if (iVar4 == 0) {
                _swift_dynamicCast();
                uVar6 = local_b8;
                lVar10 = local_c8;
                if (iVar4 == 0) {
                  (**(code **)(local_b0 + 0x1a8))(param_1,param_2,param_4,local_100,param_3);
                  lVar10 = param_4;
                  goto LAB_1009b0808;
                }
                (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
                _swift_dynamicCast(&stack0xffffffffffffff78,lVar10,uVar6,
                                   PTR___type_metadata_for_Swift_Int_100eac6f8,7);
                pcVar12 = *(code **)(local_b0 + 0x70);
              }
              else {
                (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
                _swift_dynamicCast(&stack0xffffffffffffff78,lVar10,uVar6,
                                   PTR___type_metadata_for_Swift_Int_100eac6f8,7);
                pcVar12 = *(code **)(local_b0 + 0x58);
              }
              (*pcVar12)(unaff_x20,param_3);
              lVar10 = param_4;
            }
            else {
              (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
              _swift_dynamicCast(&stack0xffffffffffffff78,lVar10,uVar6,
                                 PTR___type_metadata_for_Swift_Bool_100eac570,7);
              (**(code **)(local_b0 + 0x180))(unaff_x20 & 0xff,param_3);
              lVar10 = param_4;
            }
          }
          else {
            (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
            _swift_dynamicCast(&local_98,lVar10,uVar6,PTR___type_metadata_for_Swift_Bool_100eac570,7
                              );
            pcVar12 = (code *)&stack0xffffffffffffff78;
            (**(code **)(local_b0 + 200))();
            param_3[1] = local_98._0_1_;
            (*pcVar12)(&stack0xffffffffffffff78,0);
            lVar10 = param_4;
          }
        }
        else {
          local_f8 = param_4;
          local_d8 = lVar5;
          (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
          _swift_dynamicCast(&stack0xffffffffffffff78,lVar10,uVar6,
                             PTR___type_metadata_for_Swift_Bool_100eac570,7);
          lVar10 = local_b0;
          pcVar12 = (code *)&stack0xffffffffffffff78;
          pNVar7 = param_3;
          (**(code **)(local_b0 + 200))(pcVar12,param_3,local_b0);
          local_b8 = CONCAT44(local_b8._4_4_,(uint)(byte)SUB81(unaff_x20,0));
          pNVar7[2] = SUB81(unaff_x20,0);
          (*pcVar12)(&stack0xffffffffffffff78,0);
          SVar2 = Network::NWConnection::State::typeMetadataAccessor();
          lVar15 = CONCAT71(extraout_var,SVar2.value);
          lVar16 = *(long *)(lVar15 + -8);
          uVar6 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
          lVar17 = lVar5 - uVar6;
          pNVar7 = param_3;
          (**(code **)(lVar10 + 0x38))(param_3,lVar10);
          lVar10 = local_f8;
          lVar5 = local_d8;
          if (pNVar7 != (NWConnection *)0x0) {
            Network::NWConnection::get_state(pNVar7,pNVar7);
            _swift_release(pNVar7);
            (**(code **)(lVar16 + 0x20))(lVar17,lVar17 - uVar6,lVar15);
            NVar3 = Network::NWError::typeMetadataAccessor();
            lVar10 = CONCAT71(extraout_var_00,NVar3.value);
            local_c0 = *(long *)(lVar10 + -8);
            lVar14 = lVar17 - (*(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar13 = lVar14 - uVar6;
            local_b0 = lVar14;
            (**(code **)(lVar16 + 0x10))(lVar13,lVar17,lVar15);
            lVar5 = lVar13;
            (**(code **)(lVar16 + 0x58))(lVar13,lVar15);
            if ((PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
                 == (undefined *)0x0) ||
               ((int)lVar5 !=
                *(int *)
                 PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
               )) {
              pcVar12 = *(code **)(lVar16 + 8);
              (*pcVar12)(lVar17,lVar15);
              (*pcVar12)(lVar13,lVar15);
              lVar10 = local_f8;
              lVar5 = local_d8;
            }
            else {
              (**(code **)(lVar16 + 0x60))(lVar13,lVar15);
              lVar5 = local_c0;
              lVar9 = lVar14;
              (**(code **)(local_c0 + 0x20))(lVar14,lVar13,lVar10);
              if ((local_b8 & 1) == 0) {
                FUN_1009a8044();
                lVar13 = lVar10;
                _swift_allocError(lVar10,lVar9,0,0);
                local_b0 = lVar13;
                (**(code **)(lVar5 + 0x10))(lVar9,lVar14,lVar10);
                (**(code **)(*(long *)(local_d0 + 0x10) + 0x50))(lVar13,2,0,param_3);
                (**(code **)(lVar5 + 8))(lVar14,lVar10);
                (**(code **)(lVar16 + 8))(lVar17,lVar15);
                _swift_errorRelease(local_b0);
                lVar10 = local_f8;
                lVar5 = local_d8;
              }
              else {
                (**(code **)(lVar5 + 8))(lVar14,lVar10);
                (**(code **)(lVar16 + 8))(lVar17,lVar15);
                lVar10 = local_f8;
                lVar5 = local_d8;
              }
            }
          }
        }
      }
      else {
        (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
        _swift_dynamicCast(&stack0xffffffffffffff78,lVar10,uVar6,
                           PTR___type_metadata_for_Swift_Bool_100eac570,7);
        (**(code **)(local_b0 + 0x138))(unaff_x20 & 0xff,param_3);
        lVar10 = param_4;
      }
    }
    else {
      (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
      _swift_dynamicCast(&local_98,lVar10,uVar6,&DAT_100eecab0,7);
      uVar6 = CONCAT44(iStack_94,local_98);
      pcVar12 = (code *)&stack0xffffffffffffff78;
      (**(code **)(local_b0 + 0xf8))(pcVar12,param_3);
      FUN_100990848(uVar6,uStack_90);
      (*pcVar12)(&stack0xffffffffffffff78,0);
      lVar10 = param_4;
      if ((uVar6 & 1) != 0) {
        (**(code **)(local_f8 + 0x28))(param_3);
        FUN_10062994c();
        _swift_release(param_3);
        lVar10 = param_4;
      }
    }
    goto LAB_1009b0808;
  }
  (*pcVar12)(lVar17,param_1,param_4);
  local_f8 = param_4;
  _swift_dynamicCast(&local_98,lVar17,param_4,&DAT_100eec8d0,7);
  lVar15 = local_b0;
  uVar6 = local_b8;
  lVar10 = local_c8;
  puVar8 = local_e8;
  uVar1 = CONCAT44(iStack_94,local_98);
  if (local_98 == 0xffff) {
    if (iStack_94 == 0x200) {
      (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
      _swift_dynamicCast(&local_98,lVar10,uVar6,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
      lVar10 = 0x120;
    }
    else {
      if (iStack_94 != 4) goto LAB_1009b047c;
      (**(code **)(local_c0 + 0x10))(local_c8,param_2,local_b8);
      _swift_dynamicCast(&local_98,lVar10,uVar6,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
      lVar10 = 0x108;
    }
    (**(code **)(local_b0 + lVar10))(local_98 != 0,param_3);
    lVar10 = local_f8;
  }
  else {
LAB_1009b047c:
    (**(code **)(local_b0 + 0x30))(local_e8,param_3,local_b0);
    uVar6 = local_b8;
    lVar10 = local_f0;
    (**(code **)(local_c0 + 0x10))(local_f0,param_2,local_b8);
    _swift_dynamicCast(&local_98,lVar10,uVar6,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
    lVar10 = local_d8;
    _swift_getAssociatedConformanceWitness
              (lVar15,param_3,local_d8,0x100cc8118,&TargetProtocolRequirement_100cc8130);
    (**(code **)(lVar15 + 8))(uVar1,local_98,lVar10,lVar15);
    (**(code **)(local_e0 + 8))(puVar8,lVar10);
    lVar10 = local_f8;
  }
LAB_1009b0808:
  (**(code **)(local_108 + 8))(lVar5,lVar10);
  return;
}



/* Address: 0x1009b0b04 | FUN_1009b0b04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009b0b04(undefined8 param_1,long param_2,NWConnection *param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  byte bVar1;
  int iVar2;
  NWConnection *pNVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  NWProtocolDefinition *pNVar6;
  NWPath NVar7;
  long lVar8;
  NWProtocolDefinition *definition;
  NWConnection *pNVar9;
  NWConnection *pNVar10;
  undefined *puVar11;
  PendingDataTransferReport *pPVar12;
  undefined1 *puVar13;
  undefined8 unaff_x20;
  long unaff_x21;
  long lVar14;
  code *pcVar15;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  undefined1 *local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined1 *local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_58;
  
  lVar14 = *(long *)(param_5 + 8);
  lVar18 = *(long *)(*(long *)(lVar14 + 8) + 8);
  pcVar16 = *(code **)(lVar18 + 0x50);
  local_88 = param_6;
  (*pcVar16)(param_3,lVar18);
  _swift_unknownObjectRelease();
  pNVar3 = param_3;
  FUN_1009a6764(param_3,lVar14);
  if (((ulong)pNVar3 & 1) != 0) {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,pNVar3,0,0);
    *(undefined8 *)pNVar3 = 2;
    pNVar3[8] = (NWConnection)0x3;
    _swift_willThrow();
    return;
  }
  local_90 = *(long *)(param_4 + -8);
  lVar14 = *(long *)(local_90 + 0x40);
  puVar13 = auStack_c0 + -(lVar14 + 0xfU & 0xfffffffffffffff0);
  pcVar15 = *(code **)(local_90 + 0x10);
  puVar4 = puVar13;
  local_a8 = param_2;
  local_a0 = param_1;
  local_98 = auStack_c0;
  (*pcVar15)(puVar13,param_2,param_4);
  iVar2 = (int)puVar4;
  _swift_dynamicCast();
  if (iVar2 != 0) {
    pcVar16 = *(code **)(param_5 + 0xb8);
    goto LAB_1009b0c18;
  }
  puVar4 = &stack0xffffffffffffff90;
  _swift_dynamicCast(puVar4,puVar13,param_4,&DAT_100eec8d0,0);
  iVar2 = (int)puVar4;
  if (iVar2 == 0) {
    _swift_dynamicCast();
    if (iVar2 == 0) {
      _swift_dynamicCast();
      if (iVar2 == 0) {
        _swift_dynamicCast();
        if (iVar2 != 0) {
          pcVar16 = *(code **)(param_5 + 0x178);
          goto LAB_1009b0c18;
        }
        _swift_dynamicCast();
        if (iVar2 == 0) {
          _swift_dynamicCast();
          if (iVar2 == 0) {
            _swift_dynamicCast();
            if (iVar2 != 0) {
              local_b0 = puVar13;
              local_a8 = param_4;
              NVar7 = Network::NWPath::typeMetadataAccessor();
              lVar14 = *(long *)(NVar7.unknown + -8);
              lVar17 = *(long *)(lVar14 + 0x40);
              puVar13 = puVar13 + -(lVar17 + 0xfU & 0xfffffffffffffff0);
              puVar11 = &DAT_100ff26f0;
              FUN_1000f7830(&DAT_100ff26f0,&DAT_100c8b7b0);
              lVar18 = (long)puVar13 -
                       (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
              local_b8 = puVar13;
              (**(code **)(param_5 + 0x38))();
              if (param_3 == (NWConnection *)0x0) {
                (**(code **)(lVar14 + 0x38))(lVar18,1,1,NVar7.unknown);
              }
              else {
                Network::NWConnection::_get_currentPath(param_3,param_3);
                _swift_release(param_3);
                lVar8 = lVar18;
                (**(code **)(lVar14 + 0x30))(lVar18,1,NVar7.unknown);
                if ((int)lVar8 != 1) {
                  pcVar16 = *(code **)(lVar14 + 0x20);
                  (*pcVar16)(puVar13,lVar18,NVar7.unknown);
                  lVar18 = (long)local_b8 - (lVar17 + 0xfU & 0xfffffffffffffff0);
                  (*pcVar16)(lVar18,puVar13,NVar7.unknown);
                  param_4 = local_a8;
                  uVar5 = 0;
                  _swift_getAssociatedTypeWitness
                            (0,local_88,local_a8,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
                  _swift_dynamicCast(local_a0,lVar18,NVar7.unknown,uVar5,7);
                  puVar13 = local_b0;
                  lVar18 = local_90;
                  goto LAB_1009b0c78;
                }
              }
              FUN_1000fb4c4(lVar18,&DAT_100ff26f0,&DAT_100c8b7b0);
              FUN_100992044(local_b8);
              _swift_allocError(&DAT_100f21b18,lVar18,0,0);
              _swift_willThrow();
              goto LAB_1009b0e7c;
            }
            puVar4 = &stack0xffffffffffffff90;
            _swift_dynamicCast(puVar4,puVar13,param_4,&DAT_100f20818,0);
            iVar2 = (int)puVar4;
            if (iVar2 == 0) {
              _swift_dynamicCast();
              if (iVar2 != 0) {
                (**(code **)(param_5 + 0x50))();
                uVar5 = 0;
                _swift_getAssociatedTypeWitness
                          (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
                puVar11 = PTR___type_metadata_for_Swift_Int_100eac6f8;
                goto LAB_1009b0c58;
              }
              local_b0 = puVar13;
              _swift_dynamicCast();
              if (iVar2 == 0) {
                bVar1 = Swift::_stdlib_isOSVersionAtLeast(10,0xf,0);
                if ((bVar1 & 1) == 0) {
LAB_1009b168c:
                  (**(code **)(param_5 + 0x1b0))(local_a0,local_a8,param_4,local_88,param_3);
                  puVar13 = local_b0;
                  lVar18 = local_90;
                }
                else {
                  lVar17 = (long)puVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
                  lVar14 = lVar17;
                  local_b8 = puVar13;
                  (*pcVar15)(lVar17,local_a8,param_4);
                  iVar2 = (int)lVar14;
                  _swift_dynamicCast();
                  if (iVar2 == 0) {
                    _swift_dynamicCast();
                    if (iVar2 == 0) {
                      (**(code **)(local_90 + 8))(lVar17,param_4);
                      goto LAB_1009b168c;
                    }
                    (**(code **)(param_5 + 0x38))();
                    if (param_3 == (NWConnection *)0x0) {
                      FUN_1009920d8();
                      _swift_allocError(&DAT_100f21b38,param_3,0,0);
                      _swift_willThrow();
                      pcVar16 = *(code **)(local_90 + 8);
                      (*pcVar16)(lVar17,param_4);
                      goto LAB_1009b174c;
                    }
                    Network::NWConnection::startDataTransferReport(param_3);
                    _swift_release(param_3);
                    pPVar12 = Network::NWConnection::PendingDataTransferReport::typeMetadataAccessor
                                        ();
                    uVar5 = 0;
                    _swift_getAssociatedTypeWitness
                              (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
                    _swift_dynamicCast(local_a0,&stack0xffffffffffffff90,pPVar12,uVar5,7);
                    lVar18 = local_90;
                    (**(code **)(local_90 + 8))(lVar17,param_4);
                    puVar13 = local_b0;
                  }
                  else {
                    pNVar3 = param_3;
                    (**(code **)(param_5 + 0x38))();
                    if (pNVar3 == (NWConnection *)0x0) {
                      FUN_1009920d8();
                      _swift_allocError(&DAT_100f21b38,pNVar3,0,0);
                      _swift_willThrow();
                      pcVar16 = *(code **)(local_90 + 8);
                      (*pcVar16)(lVar17,param_4);
LAB_1009b174c:
                      (*pcVar16)(local_b0,param_4);
                      return;
                    }
                    pNVar9 = param_3;
                    (*pcVar16)(param_3,lVar18);
                    pNVar10 = pNVar9;
                    _swift_getObjectType();
                    puVar11 = &DAT_100ff26f8;
                    FUN_1000f7830(&DAT_100ff26f8,&DAT_100c8b7c0);
                    FUN_1000f4a44(pNVar10,puVar11,lVar18);
                    FUN_100988f00(pNVar10,puVar11,lVar18);
                    _swift_unknownObjectRelease(pNVar9);
                    (**(code **)(param_5 + 0x80))();
                    _swift_retain(pNVar10);
                    Network::NWConnection::_requestEstablishmentReport
                              (pNVar3,(OS_dispatch_queue *)param_3);
                    _swift_release(pNVar10);
                    _swift_release(pNVar3);
                    puVar11 = &DAT_100ff2700;
                    FUN_1000f7830(&DAT_100ff2700,&DAT_100c8b7c8);
                    uVar5 = 0;
                    _swift_getAssociatedTypeWitness
                              (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
                    _swift_dynamicCast(local_a0,&stack0xffffffffffffff90,puVar11,uVar5,7);
                    lVar18 = local_90;
                    (**(code **)(local_90 + 8))(lVar17,param_4);
                    puVar13 = local_b0;
                  }
                }
              }
              else {
                (**(code **)(param_5 + 0x68))();
                uVar5 = 0;
                _swift_getAssociatedTypeWitness
                          (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
                _swift_dynamicCast(local_a0,&stack0xffffffffffffff90,
                                   PTR___type_metadata_for_Swift_Int_100eac6f8,uVar5,7);
                puVar13 = local_b0;
                lVar18 = local_90;
              }
              goto LAB_1009b0c78;
            }
            local_b0 = puVar13;
            _swift_release(unaff_x20);
            lVar18 = (long)puVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
            (*pcVar15)(lVar18,local_a8,param_4);
            _swift_dynamicCast(&local_58,lVar18,param_4,&DAT_100f20818,7);
            pNVar6 = local_58;
            (**(code **)(param_5 + 0x38))();
            if (param_3 == (NWConnection *)0x0) {
              FUN_1009920d8();
              _swift_allocError(&DAT_100f21b38,param_3,0,0);
              _swift_willThrow();
              _swift_release(pNVar6);
              pcVar16 = *(code **)(local_90 + 8);
              puVar13 = local_b0;
              goto LAB_1009b0c7c;
            }
            definition = pNVar6;
            _swift_retain();
            Network::NWConnection::_metadata(param_3,definition);
            _swift_release(param_3);
            _swift_release_n(pNVar6,2);
            puVar11 = &DAT_100ff1698;
            local_58 = definition;
            FUN_1000f7830(&DAT_100ff1698,&DAT_100c8a130);
            uVar5 = 0;
            _swift_getAssociatedTypeWitness
                      (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
            goto LAB_1009b0f78;
          }
          (**(code **)(param_5 + 0xb8))();
        }
        else {
          (**(code **)(param_5 + 0xb8))();
        }
      }
      else {
        pcVar16 = *(code **)(param_5 + 0x130);
LAB_1009b0c18:
        (*pcVar16)();
      }
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar11 = PTR___type_metadata_for_Swift_Bool_100eac570;
    }
    else {
      (**(code **)(param_5 + 0xe8))(param_3);
      _swift_release();
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar11 = &DAT_100eecab0;
    }
LAB_1009b0c58:
    _swift_dynamicCast(local_a0,&stack0xffffffffffffff90,puVar11,uVar5,7);
    lVar18 = local_90;
  }
  else {
    lVar18 = (long)puVar13 - (lVar14 + 0xfU & 0xfffffffffffffff0);
    local_b0 = puVar13;
    (*pcVar15)(lVar18,local_a8,param_4);
    _swift_dynamicCast(&local_58,lVar18,param_4,&DAT_100eec8d0,7);
    pNVar6 = local_58;
    if ((int)local_58 == 0xffff) {
      if (local_58._4_4_ == 0x200) {
        pcVar16 = *(code **)(param_5 + 0x118);
      }
      else {
        if (local_58._4_4_ != 4) goto LAB_1009b0db4;
        pcVar16 = *(code **)(param_5 + 0x100);
      }
      (*pcVar16)();
      local_58 = (NWProtocolDefinition *)
                 (CONCAT44(local_58._4_4_,(int)param_3) & 0xffffffff00000001);
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,local_88,param_4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar11 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
LAB_1009b0f78:
      _swift_dynamicCast(local_a0,&local_58,puVar11,uVar5,7);
      puVar13 = local_b0;
      lVar18 = local_90;
    }
    else {
LAB_1009b0db4:
      lVar18 = 0;
      local_a8 = param_4;
      _swift_getAssociatedTypeWitness
                (0,param_5,param_3,0x100cc8118,&TargetProtocolRequirement_100cc8138);
      lVar14 = *(long *)(lVar18 + -8);
      lVar17 = (long)puVar13 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_b8 = puVar13;
      (**(code **)(param_5 + 0x30))(lVar17,param_3,param_5);
      _swift_getAssociatedConformanceWitness
                (param_5,param_3,lVar18,0x100cc8118,&TargetProtocolRequirement_100cc8130);
      (**(code **)(param_5 + 0x10))(pNVar6,lVar18,param_5);
      (**(code **)(lVar14 + 8))(lVar17,lVar18);
      param_4 = local_a8;
      if (unaff_x21 != 0) {
LAB_1009b0e7c:
        pcVar16 = *(code **)(local_90 + 8);
        puVar13 = local_b0;
        param_4 = local_a8;
        goto LAB_1009b0c7c;
      }
      local_58 = (NWProtocolDefinition *)CONCAT44(local_58._4_4_,(int)pNVar6);
      uVar5 = 0;
      _swift_getAssociatedTypeWitness
                (0,local_88,local_a8,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      _swift_dynamicCast(local_a0,&local_58,PTR___type_metadata_for_Swift_Int32_100eadbd0,uVar5,7);
      puVar13 = local_b0;
      lVar18 = local_90;
    }
  }
LAB_1009b0c78:
  pcVar16 = *(code **)(lVar18 + 8);
LAB_1009b0c7c:
  (*pcVar16)(puVar13,param_4);
  return;
}



/* Address: 0x1009b1754 | FUN_1009b1754 */

void FUN_1009b1754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_67;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar3;
  (**(code **)(lVar4 + 0x10))();
  local_98 = (undefined4)param_3;
  local_94 = (undefined2)((ulong)param_3 >> 0x20);
  local_92 = (undefined1)((ulong)param_3 >> 0x30);
  if ((uVar1 & 1) != 0) {
    local_67 = 0;
    local_a8 = param_1;
    uStack_a0 = param_2;
    _swift_retain(param_1);
    FUN_1006296a8(&local_a8);
    FUN_1005e70f4(&local_a8);
    return;
  }
  puVar2 = &DAT_100f245b0;
  _swift_allocObject(&DAT_100f245b0,0x2f,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(int *)(puVar2 + 0x20) = (int)param_2;
  *(int *)(puVar2 + 0x24) = (int)((ulong)param_2 >> 0x20);
  *(undefined4 *)(puVar2 + 0x28) = local_98;
  *(undefined2 *)(puVar2 + 0x2c) = local_94;
  puVar2[0x2e] = local_92;
  pcVar5 = *(code **)(lVar4 + 0x18);
  _swift_retain(param_1);
  _swift_retain();
  (*pcVar5)(FUN_1009b6714,puVar2,uVar3,lVar4);
  _swift_release(puVar2);
  return;
}



/* Address: 0x1009b1890 | FUN_1009b1890 */

void FUN_1009b1890(undefined8 param_1)

{
  FUN_1009b18c8(param_1,FUN_100983480,&DAT_100f24920,FUN_1009b6e50);
  return;
}



/* Address: 0x1009b18ac | FUN_1009b18ac */

void FUN_1009b18ac(undefined8 param_1)

{
  FUN_1009b18c8(param_1,FUN_100991a3c,&DAT_100f248f8,FUN_1009b6e2c);
  return;
}



/* Address: 0x1009b18c8 | FUN_1009b18c8 */

void FUN_1009b18c8(undefined8 param_1,code *param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_98 [3];
  undefined8 local_80;
  undefined1 local_57;
  
  uVar3 = *(ulong *)(unaff_x20 + 0x30);
  lVar4 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar3;
  (**(code **)(lVar4 + 0x10))();
  if ((uVar1 & 1) != 0) {
    uVar2 = 0;
    (*param_2)();
    local_57 = 2;
    local_98[0] = param_1;
    local_80 = uVar2;
    _swift_retain(param_1);
    FUN_1006296a8(local_98);
    FUN_1005e70f4(local_98);
    return;
  }
  _swift_allocObject(param_3,0x20,7);
  *(long *)(param_3 + 0x10) = unaff_x20;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  pcVar5 = *(code **)(lVar4 + 0x18);
  _swift_retain(param_1);
  _swift_retain();
  (*pcVar5)(param_4,param_3,uVar3,lVar4);
  _swift_release(param_3);
  return;
}



/* Address: 0x1009b19cc | FUN_1009b19cc */

void FUN_1009b19cc(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b19dc);
  (*pcVar1)();
}



/* Address: 0x1009b19dc | FUN_1009b19dc */

undefined8 FUN_1009b19dc(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 +
                   _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b1a44);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b1a48);
  (*pcVar1)();
}



/* Address: 0x1009b1a48 | FUN_1009b1a48 */

undefined8 FUN_1009b1a48(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 +
                   _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b1ab4);
    (*pcVar1)();
  }
  uVar3 = *(undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache + 8);
  FUN_1005d84e8(uVar3);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar4 + 0x10));
  if (iVar2 == 0) {
    return uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b1ab8);
  (*pcVar1)();
}



/* Address: 0x1009b1ab8 | FUN_1009b1ab8 */

void FUN_1009b1ab8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1009ad588(param_1,param_2,*unaff_x20,param_3,&PTR_PTR_100ff18f0,param_4);
  return;
}



/* Address: 0x1009b1ad0 | FUN_1009b1ad0 */

void FUN_1009b1ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1009ad844(param_1,*unaff_x20,param_2,&PTR_PTR_100ff18f0,param_3);
  return;
}



/* Address: 0x1009b1ae8 | FUN_1009b1ae8 */

byte FUN_1009b1ae8(void)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  long unaff_x20;
  byte *pbVar4;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xd0,auStack_38,0,0);
  pbVar4 = *(byte **)(unaff_x20 + 0xd0);
  pcVar3 = *(code **)(*(long *)pbVar4 + 0x88);
  pbVar2 = pbVar4;
  _swift_retain();
  (*pcVar3)();
  bVar1 = *pbVar2;
  _swift_release(pbVar4);
  return bVar1 & 1;
}



/* Address: 0x1009b1b44 | FUN_1009b1b44 */

void FUN_1009b1b44(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1009b1b70 | thunk_FUN_1009abd4c */

void thunk_FUN_1009abd4c(void)

{
  FUN_1009abd4c();
  return;
}



/* Address: 0x1009b1b74 | thunk_FUN_1009ac90c */

void thunk_FUN_1009ac90c(void)

{
  FUN_1009ac90c();
  return;
}



/* Address: 0x1009b1b78 | thunk_FUN_1009acc6c */

void thunk_FUN_1009acc6c(void)

{
  FUN_1009acc6c();
  return;
}



/* Address: 0x1009b1b7c | thunk_FUN_1009ad07c */

void thunk_FUN_1009ad07c(void)

{
  FUN_1009ad07c();
  return;
}



/* Address: 0x1009b1b80 | FUN_1009b1b80 */

void FUN_1009b1b80(void)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0xb2,auStack_38,0,0);
  if (*(char *)(unaff_x20 + 0xb2) == '\x01') {
    lVar2 = *(long *)(unaff_x20 + 0x48);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b1be0);
      (*pcVar1)();
    }
    _swift_retain(lVar2);
    FUN_100627440();
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x1009b1be0 | FUN_1009b1be0 */

void FUN_1009b1be0(void)

{
  FUN_1009adde4(PTR__get_localEndpoint_100eaa300);
  return;
}



/* Address: 0x1009b1bfc | FUN_1009b1bfc */

void FUN_1009b1bfc(void)

{
  FUN_1009adde4(PTR__get_remoteEndpoint_100eaa308);
  return;
}



/* Address: 0x1009b1c18 | thunk_FUN_1009ae2b8 */

void thunk_FUN_1009ae2b8(void)

{
  FUN_1009ae2b8();
  return;
}



/* Address: 0x1009b1c1c | thunk_FUN_1009ae5b8 */

void thunk_FUN_1009ae5b8(void)

{
  FUN_1009ae5b8();
  return;
}



/* Address: 0x1009b1c20 | thunk_FUN_1009ae6d4 */

void thunk_FUN_1009ae6d4(void)

{
  FUN_1009ae6d4();
  return;
}



/* Address: 0x1009b1c24 | FUN_1009b1c24 */

void FUN_1009b1c24(undefined8 param_1,undefined8 param_2)

{
  FUN_1009aff08(param_1,param_2,FUN_1009b1eb8,&DAT_100f24808,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1009b1c50 | FUN_1009b1c50 */

void FUN_1009b1c50(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  if ((uint)*(byte *)(unaff_x20 + 0x10) == ((uint)param_1 & 0xff)) {
    lVar1 = unaff_x20 + 0x98;
    _swift_beginAccess(lVar1,auStack_68,1,0);
    if (*(char *)(unaff_x20 + 0x98) == '\x03') {
      *(undefined1 *)(unaff_x20 + 0x98) = 4;
      FUN_1009ab88c(param_2,param_3);
    }
    else {
      FUN_100991e0c();
      puVar2 = &DAT_100f21a58;
      uVar7 = 0;
      _swift_allocError(&DAT_100f21a58,lVar1,0,0);
      _swift_willThrow();
      if (param_3 == 0) {
        _swift_errorRelease(puVar2);
      }
      else {
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar1 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar6 = lVar1;
        (**(code **)(lVar1 + 0x10))();
        if ((uVar4 & 1) == 0) {
          puVar5 = &DAT_100f24588;
          _swift_allocObject(&DAT_100f24588,0x20,7);
          *(long *)(puVar5 + 0x10) = param_3;
          *(undefined **)(puVar5 + 0x18) = puVar2;
          pcVar8 = *(code **)(lVar1 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(puVar2);
          (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
          _swift_errorRelease(puVar2);
          _swift_release(puVar5);
        }
        else {
          puVar5 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar5,lVar6);
          _swift_bridgeObjectRelease(uVar7);
        }
      }
    }
  }
  else if (param_3 != 0) {
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f24560;
      _swift_allocObject(&DAT_100f24560,0x20,7);
      *(long *)(puVar5 + 0x10) = param_3;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar2);
      (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar2);
    return;
  }
  return;
}



/* Address: 0x1009b1eb8 | FUN_1009b1eb8 */

void FUN_1009b1eb8(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  if ((uint)*(byte *)(unaff_x20 + 0xb0) == ((uint)param_1 & 0xff)) {
    lVar1 = unaff_x20 + 0xa0;
    _swift_beginAccess(lVar1,auStack_68,1,0);
    if (*(char *)(unaff_x20 + 0xa0) == '\x05') {
      *(undefined1 *)(unaff_x20 + 0xa0) = 6;
      FUN_1009abd4c(param_2,param_3);
    }
    else {
      FUN_100991e0c();
      puVar2 = &DAT_100f21a58;
      uVar7 = 0;
      _swift_allocError(&DAT_100f21a58,lVar1,0,0);
      _swift_willThrow();
      if (param_3 == 0) {
        _swift_errorRelease(puVar2);
      }
      else {
        uVar3 = *(ulong *)(param_3 + 0x20);
        lVar1 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar4 = uVar3;
        lVar6 = lVar1;
        (**(code **)(lVar1 + 0x10))();
        if ((uVar4 & 1) == 0) {
          puVar5 = &DAT_100f24858;
          _swift_allocObject(&DAT_100f24858,0x20,7);
          *(long *)(puVar5 + 0x10) = param_3;
          *(undefined **)(puVar5 + 0x18) = puVar2;
          pcVar8 = *(code **)(lVar1 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(puVar2);
          (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
          _swift_errorRelease(puVar2);
          _swift_release(puVar5);
        }
        else {
          puVar5 = puVar2;
          thunk_FUN_1005de8f4(puVar2);
          FUN_1006486f8();
          _swift_errorRelease(puVar2);
          FUN_100004550(puVar5,lVar6);
          _swift_bridgeObjectRelease(uVar7);
        }
      }
    }
  }
  else if (param_3 != 0) {
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f24830;
      _swift_allocObject(&DAT_100f24830,0x20,7);
      *(long *)(puVar5 + 0x10) = param_3;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar2);
      (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar2);
    return;
  }
  return;
}



/* Address: 0x1009b2120 | FUN_1009b2120 */

void FUN_1009b2120(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_10061d97c();
    _swift_release(lVar2);
    FUN_100988b88(0,0,*(undefined8 *)(param_1 + 0x58));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b2180);
  (*pcVar1)();
}



/* Address: 0x1009b2180 | FUN_1009b2180 */

void FUN_1009b2180(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_10061d97c();
    _swift_release(lVar2);
    FUN_100988b88(0,0,*(undefined8 *)(param_1 + 0x50));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b21e0);
  (*pcVar1)();
}



/* Address: 0x1009b21e0 | FUN_1009b21e0 */

void FUN_1009b21e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1000f7830(param_2,param_3);
    FUN_10061d97c(lVar2,param_2,&PTR_PTR_100f23ff8);
    _swift_release(lVar2);
    FUN_100988b88(0,0,*(undefined8 *)(param_1 + 0x50));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b2254);
  (*pcVar1)();
}


