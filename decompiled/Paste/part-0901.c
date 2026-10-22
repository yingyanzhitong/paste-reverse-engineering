/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009b2254 | FUN_1009b2254 */

void FUN_1009b2254(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  NWListener *this;
  code *pcVar5;
  
  this = *(NWListener **)(unaff_x20 + 0x58);
  uVar2 = param_3;
  if (this != (NWListener *)0x0) {
    _swift_retain(this);
    Network::NWListener::cancel(this);
    _swift_release(this);
  }
  lVar4 = *(long *)(unaff_x20 + 0x80);
  if (lVar4 != 0) {
    *(undefined8 *)(unaff_x20 + 0x80) = 0;
    uVar1 = *(ulong *)(lVar4 + 0x20);
    lVar3 = *(long *)(lVar4 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar3 + 0x10))();
    if ((uVar1 & 1) != 0) {
      thunk_FUN_1005de8f4(param_1);
      FUN_1006486f8();
      _swift_release(lVar4);
      FUN_100004550(param_1,lVar3);
      _swift_bridgeObjectRelease(uVar2);
      return;
    }
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    lVar3 = *(long *)(lVar4 + 0x28);
    _swift_getObjectType(uVar2);
    _swift_allocObject(param_2,0x20,7);
    *(long *)(param_2 + 0x10) = lVar4;
    *(undefined8 *)(param_2 + 0x18) = param_1;
    pcVar5 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar4);
    _swift_errorRetain(param_1);
    (*pcVar5)(param_3,param_2,uVar2,lVar3);
    _swift_release(lVar4);
    _swift_release(param_2);
    return;
  }
  return;
}



/* Address: 0x1009b2398 | FUN_1009b2398 */

void FUN_1009b2398(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  undefined7 extraout_var_01;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lVar5;
  
  SVar2 = Network::NWConnection::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar11 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + lVar9;
  (**(code **)(lVar11 + 0x10))(puVar10,param_1,lVar5);
  puVar6 = puVar10;
  (**(code **)(lVar11 + 0x58))(puVar10,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
     )) {
    if ((PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
       )) {
      if ((PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
         )) {
        FUN_1009b3fd8();
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
         )) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
        *(undefined8 *)(unaff_x20 + 0x60) = 0;
        _swift_release(uVar7);
        return;
      }
      *(undefined4 *)((long)auStack_98 + lVar9) = 0;
      *(undefined8 *)((long)&uStack_a0 + lVar9) = 0x19f;
      SVar13.bridgeObject = (void *)0x2;
      SVar13.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar13,(StaticString)0x6168636165726e55,
                 0xeb00000000656c62,0xdb71d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b26bc);
      (*pcVar1)();
    }
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_01,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar9 = lVar11;
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
  }
  else {
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_00,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
    lVar9 = unaff_x20 + 0x98;
    _swift_beginAccess(lVar9,auStack_58,0,0);
    if (*(char *)(unaff_x20 + 0x98) == '\x04') {
      lVar9 = unaff_x20 + 0xa9;
      _swift_beginAccess(lVar9,auStack_70,0,0);
      if (*(char *)(unaff_x20 + 0xab) == '\x01') {
        lVar9 = *(long *)(unaff_x20 + 0x50);
        if (lVar9 != 0) {
          uVar7 = 0;
          FUN_1009a2fec();
          local_78 = uVar7;
          FUN_10000cbb0(auStack_90);
          (**(code **)(lVar12 + 0x10))();
          _swift_retain(lVar9);
          FUN_100629a5c(auStack_90);
          _swift_release(lVar9);
          (**(code **)(lVar12 + 8))(lVar11,lVar5);
          FUN_100004594(auStack_90);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b2664);
        (*pcVar1)();
      }
    }
  }
  FUN_1009a8044();
  lVar8 = lVar5;
  _swift_allocError(lVar5,lVar9,0,0);
  (**(code **)(lVar12 + 0x10))(lVar9,lVar11,lVar5);
  FUN_1009ae784(lVar8,2,0);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  _swift_errorRelease(lVar8);
  return;
}



/* Address: 0x1009b26bc | FUN_1009b26bc */

void FUN_1009b26bc(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  undefined7 extraout_var_01;
  long lVar8;
  long unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lVar5;
  
  SVar2 = Network::NWConnection::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar11 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + lVar9;
  (**(code **)(lVar11 + 0x10))(puVar10,param_1,lVar5);
  puVar6 = puVar10;
  (**(code **)(lVar11 + 0x58))(puVar10,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
     )) {
    if ((PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
       )) {
      if ((PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
         )) {
        FUN_1009b420c();
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
         )) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x58);
        *(undefined8 *)(unaff_x20 + 0x58) = 0;
        _swift_release(uVar7);
        return;
      }
      *(undefined4 *)((long)auStack_98 + lVar9) = 0;
      *(undefined8 *)((long)&uStack_a0 + lVar9) = 0x19f;
      SVar13.bridgeObject = (void *)0x2;
      SVar13.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar13,(StaticString)0x6168636165726e55,
                 0xeb00000000656c62,0xdb71d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b29e0);
      (*pcVar1)();
    }
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_01,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar9 = lVar11;
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
  }
  else {
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_00,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
    lVar9 = unaff_x20 + 0xa0;
    _swift_beginAccess(lVar9,auStack_58,0,0);
    if (*(char *)(unaff_x20 + 0xa0) == '\x06') {
      lVar9 = unaff_x20 + 0xb2;
      _swift_beginAccess(lVar9,auStack_70,0,0);
      if (*(char *)(unaff_x20 + 0xb4) == '\x01') {
        lVar9 = *(long *)(unaff_x20 + 0x48);
        if (lVar9 != 0) {
          uVar7 = 0;
          FUN_1009a2fec();
          local_78 = uVar7;
          FUN_10000cbb0(auStack_90);
          (**(code **)(lVar12 + 0x10))();
          _swift_retain(lVar9);
          FUN_100629a5c(auStack_90);
          _swift_release(lVar9);
          (**(code **)(lVar12 + 8))(lVar11,lVar5);
          FUN_100004594(auStack_90);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b2988);
        (*pcVar1)();
      }
    }
  }
  FUN_1009a8044();
  lVar8 = lVar5;
  _swift_allocError(lVar5,lVar9,0,0);
  (**(code **)(lVar12 + 0x10))(lVar9,lVar11,lVar5);
  FUN_1009aeb18(lVar8,2,0);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  _swift_errorRelease(lVar8);
  return;
}



/* Address: 0x1009b29e0 | FUN_1009b29e0 */

void FUN_1009b29e0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  
  uVar9 = unaff_x20[2];
  uVar8 = *unaff_x20;
  _swift_retain(param_4);
  _swift_retain(param_1);
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar7 & 1) == 0) {
    FUN_1009b4a98();
  }
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1009b2ac0);
    (*pcVar6)();
  }
  if (*(ulong *)(uVar8 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1009b2ac4);
    (*pcVar6)();
  }
  lVar1 = uVar8 + uVar9 * 0x20;
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar3 = *(undefined8 *)(lVar1 + 0x30);
  uVar5 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  *(ulong *)(lVar1 + 0x30) = param_3 & 0xffffffffffffff;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  FUN_1009b5c4c(uVar2,uVar4,uVar3,uVar5);
  *unaff_x20 = uVar8;
  uVar7 = *(long *)(uVar8 + 0x10) + 0x7fffffffffffffffU & uVar9 + 1;
  unaff_x20[2] = uVar7;
  if (unaff_x20[1] == uVar7) {
    FUN_1009b496c();
    return;
  }
  return;
}



/* Address: 0x1009b2ac4 | FUN_1009b2ac4 */

void FUN_1009b2ac4(undefined8 param_1,long param_2,long param_3,long param_4)

{
  NWError NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined1 auStack_78 [24];
  long lVar2;
  
  NVar1 = Network::NWError::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  puVar14 = auStack_90 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff2708;
  FUN_1000f7830(&DAT_100ff2708,&DAT_100c8b7d8);
  lVar10 = (long)puVar14 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
  lVar11 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar11 == 1) {
    FUN_1000fb4c4(lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
    if (param_2 != 0) {
      FUN_100988b88(0,0,param_2);
    }
  }
  else {
    puVar4 = puVar14;
    (**(code **)(lVar12 + 0x20))(puVar14,lVar10,lVar2);
    if (param_2 == 0) {
      (**(code **)(lVar12 + 8))(puVar14,lVar2);
    }
    else {
      FUN_1009a8044();
      lVar10 = lVar2;
      _swift_allocError(lVar2,puVar4,0,0);
      lVar9 = lVar2;
      (**(code **)(lVar12 + 0x10))(puVar4,puVar14,lVar2);
      uVar5 = *(ulong *)(param_2 + 0x20);
      lVar11 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar8 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar3 = &DAT_100f24600;
        _swift_allocObject(&DAT_100f24600,0x20,7);
        *(long *)(puVar3 + 0x10) = param_2;
        *(long *)(puVar3 + 0x18) = lVar10;
        local_88 = *(code **)(lVar11 + 0x18);
        local_80 = param_4;
        _swift_retain(param_2);
        _swift_errorRetain(lVar10);
        (*local_88)(thunk_FUN_1008d678c,puVar3,uVar5,lVar11);
        param_4 = local_80;
        _swift_release(puVar3);
      }
      else {
        lVar11 = lVar10;
        thunk_FUN_1005de8f4(lVar10);
        FUN_1006486f8();
        FUN_100004550(lVar11,lVar8);
        _swift_bridgeObjectRelease(lVar9);
      }
      (**(code **)(lVar12 + 8))(puVar14,lVar2);
      _swift_errorRelease(lVar10);
    }
  }
  pbVar7 = (byte *)(param_3 + 200);
  _swift_beginAccess(pbVar7,auStack_78,0x21,0);
  lVar11 = *(long *)(param_3 + 0xd0) - param_4;
  if (!SBORROW8(*(long *)(param_3 + 0xd0),param_4)) {
    *(long *)(param_3 + 0xd0) = lVar11;
    if (lVar11 < *(long *)(param_3 + 0xd8)) {
      pcVar13 = *(code **)(**(long **)(param_3 + 200) + 0x88);
      (*pcVar13)();
      if ((*pbVar7 & 1) == 0) {
        (*pcVar13)();
        *pbVar7 = 1;
        _swift_endAccess(auStack_78);
        lVar11 = *(long *)(param_3 + 0x50);
        if (lVar11 != 0) {
          _swift_retain(lVar11);
          FUN_10062994c();
          _swift_release(lVar11);
          return;
        }
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1009b2d88);
        (*pcVar13)();
      }
    }
    _swift_endAccess(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1009b2d84);
  (*pcVar13)();
}



/* Address: 0x1009b2d88 | FUN_1009b2d88 */

void FUN_1009b2d88(undefined8 param_1,long param_2,long param_3,long param_4)

{
  NWError NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined1 *puVar14;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined1 auStack_78 [24];
  long lVar2;
  
  NVar1 = Network::NWError::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  puVar14 = auStack_90 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff2708;
  FUN_1000f7830(&DAT_100ff2708,&DAT_100c8b7d8);
  lVar10 = (long)puVar14 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
  lVar11 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar11 == 1) {
    FUN_1000fb4c4(lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
    if (param_2 != 0) {
      FUN_100988b88(0,0,param_2);
    }
  }
  else {
    puVar4 = puVar14;
    (**(code **)(lVar12 + 0x20))(puVar14,lVar10,lVar2);
    if (param_2 == 0) {
      (**(code **)(lVar12 + 8))(puVar14,lVar2);
    }
    else {
      FUN_1009a8044();
      lVar10 = lVar2;
      _swift_allocError(lVar2,puVar4,0,0);
      lVar9 = lVar2;
      (**(code **)(lVar12 + 0x10))(puVar4,puVar14,lVar2);
      uVar5 = *(ulong *)(param_2 + 0x20);
      lVar11 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar5;
      lVar8 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar6 & 1) == 0) {
        puVar3 = &DAT_100f248a8;
        _swift_allocObject(&DAT_100f248a8,0x20,7);
        *(long *)(puVar3 + 0x10) = param_2;
        *(long *)(puVar3 + 0x18) = lVar10;
        local_88 = *(code **)(lVar11 + 0x18);
        local_80 = param_4;
        _swift_retain(param_2);
        _swift_errorRetain(lVar10);
        (*local_88)(thunk_FUN_1008d678c,puVar3,uVar5,lVar11);
        param_4 = local_80;
        _swift_release(puVar3);
      }
      else {
        lVar11 = lVar10;
        thunk_FUN_1005de8f4(lVar10);
        FUN_1006486f8();
        FUN_100004550(lVar11,lVar8);
        _swift_bridgeObjectRelease(lVar9);
      }
      (**(code **)(lVar12 + 8))(puVar14,lVar2);
      _swift_errorRelease(lVar10);
    }
  }
  pbVar7 = (byte *)(param_3 + 0xd0);
  _swift_beginAccess(pbVar7,auStack_78,0x21,0);
  lVar11 = *(long *)(param_3 + 0xd8) - param_4;
  if (!SBORROW8(*(long *)(param_3 + 0xd8),param_4)) {
    *(long *)(param_3 + 0xd8) = lVar11;
    if (lVar11 < *(long *)(param_3 + 0xe0)) {
      pcVar13 = *(code **)(**(long **)(param_3 + 0xd0) + 0x88);
      (*pcVar13)();
      if ((*pbVar7 & 1) == 0) {
        (*pcVar13)();
        *pbVar7 = 1;
        _swift_endAccess(auStack_78);
        lVar11 = *(long *)(param_3 + 0x48);
        if (lVar11 != 0) {
          _swift_retain(lVar11);
          FUN_10062994c();
          _swift_release(lVar11);
          return;
        }
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1009b304c);
        (*pcVar13)();
      }
    }
    _swift_endAccess(auStack_78);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1009b3048);
  (*pcVar13)();
}



/* Address: 0x1009b304c | FUN_1009b304c */

void FUN_1009b304c(ContentContext *param_1,NWConnection *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  NWConnection **ppNVar6;
  SendCompletion SVar7;
  ulong uVar8;
  ulong uVar9;
  ContentContext *content;
  undefined7 extraout_var;
  undefined *puVar11;
  ContentContext *this;
  ContentContext *pCVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  NWConnection *local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lVar10;
  
  local_b0 = param_2;
  _swift_beginAccess(param_1 + 0xb0,auStack_78,0,0);
  ppNVar6 = &local_b0;
  while( true ) {
    uVar9 = *(ulong *)(param_1 + 0xb0);
    uVar16 = *(ulong *)(param_1 + 0xb8);
    uVar14 = *(ulong *)(param_1 + 0xc0);
    lVar10 = uVar14 - uVar16;
    if ((long)uVar14 < (long)uVar16) {
      lVar10 = lVar10 + *(long *)(uVar9 + 0x10);
    }
    if (lVar10 < 1) {
      return;
    }
    _swift_beginAccess(param_1 + 0xb0,auStack_90,0x21,0);
    if (uVar14 == uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b32ec);
      (*pcVar5)();
    }
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b32f0);
      (*pcVar5)();
    }
    if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b32f4);
      (*pcVar5)();
    }
    uVar13 = *(ulong *)(uVar9 + 0x10);
    if (uVar13 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b32f8);
      (*pcVar5)();
    }
    lVar10 = uVar9 + uVar16 * 0x20;
    lVar17 = *(long *)(lVar10 + 0x20);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b3304);
      (*pcVar5)();
    }
    if ((long)uVar16 <= (long)uVar14) {
      uVar13 = 0;
    }
    if ((long)((uVar14 - uVar16) + uVar13) < 1) break;
    uVar14 = *(ulong *)(lVar10 + 0x28);
    uVar13 = *(ulong *)(lVar10 + 0x30);
    uVar15 = *(undefined8 *)(lVar10 + 0x38);
    _swift_retain(uVar15);
    _swift_retain(lVar17);
    uVar8 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0xb0) = uVar9;
    if ((uVar8 & 1) == 0) {
      FUN_1009b4a98();
    }
    *(ulong *)(param_1 + 0xb0) = uVar9;
    if (*(ulong *)(uVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b3300);
      (*pcVar5)();
    }
    lVar10 = uVar9 + uVar16 * 0x20;
    uVar1 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    uVar2 = *(undefined8 *)(lVar10 + 0x30);
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(ulong *)(param_1 + 0xb0) = uVar9;
    *(ulong *)(param_1 + 0xb8) = *(long *)(uVar9 + 0x10) + 0x1ffffffffU & uVar16 + 1;
    local_98 = uVar15;
    _swift_endAccess(auStack_90);
    FUN_1009b5c4c(uVar1,uVar3,uVar2,uVar4);
    _swift_retain(lVar17);
    content = (ContentContext *)(uVar14 & 0xffffffff);
    uVar16 = (ulong)(uint)((int)(uVar14 >> 0x20) - (int)uVar14);
    uVar9 = uVar16;
    FUN_1009b7c7c(content,uVar16,2,lVar17,uVar14,uVar13 & 0xffffffffffffff);
    SVar7 = Network::NWConnection::SendCompletion::typeMetadataAccessor();
    lVar10 = CONCAT71(extraout_var,SVar7.value);
    lVar18 = *(long *)(lVar10 + -8);
    puVar19 = (undefined8 *)
              ((long)ppNVar6 + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
    puVar11 = &DAT_100f245d8;
    local_a8 = uVar13;
    local_a0 = (undefined1 *)ppNVar6;
    _swift_allocObject(&DAT_100f245d8,0x28,7);
    uVar15 = local_98;
    *(undefined8 *)(puVar11 + 0x10) = local_98;
    *(ContentContext **)(puVar11 + 0x18) = param_1;
    *(ulong *)(puVar11 + 0x20) = uVar16;
    *puVar19 = FUN_1009b6728;
    puVar19[1] = puVar11;
    (**(code **)(lVar18 + 0x68))
              (puVar19,*(undefined4 *)
                        PTR___enum_case_for_Network_NWConnection_SendCompletion_contentProcessed_Network_NWConnection_SendCompletion_Type___>___Network_NWError____>______>_Network_NWConnection_SendCompletion_100eaa028
               ,lVar10);
    this = Network::NWConnection::ContentContext::typeMetadataAccessor();
    _swift_retain(uVar15);
    pCVar12 = param_1;
    _swift_retain();
    pCVar12 = Network::NWConnection::ContentContext::get_defaultMessage(this,pCVar12);
    Network::NWConnection::_send(local_b0,content,SUB81(uVar9,0),(SendCompletion)(__int8)pCVar12);
    FUN_10003bf18(content,uVar9);
    _swift_release(lVar17);
    _swift_release(pCVar12);
    FUN_1009b5c4c(lVar17,uVar14,local_a8,local_98);
    (**(code **)(lVar18 + 8))(puVar19,lVar10);
    ppNVar6 = (NWConnection **)local_a0;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b32fc);
  (*pcVar5)();
}



/* Address: 0x1009b3304 | FUN_1009b3304 */

void FUN_1009b3304(ContentContext *param_1,NWConnection *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  NWConnection **ppNVar6;
  SendCompletion SVar7;
  ulong uVar8;
  ulong uVar9;
  ContentContext *content;
  undefined7 extraout_var;
  undefined *puVar11;
  ContentContext *this;
  ContentContext *pCVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  NWConnection *local_b0;
  ulong local_a8;
  undefined1 *local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lVar10;
  
  local_b0 = param_2;
  _swift_beginAccess(param_1 + 0xb8,auStack_78,0,0);
  ppNVar6 = &local_b0;
  while( true ) {
    uVar9 = *(ulong *)(param_1 + 0xb8);
    uVar16 = *(ulong *)(param_1 + 0xc0);
    uVar14 = *(ulong *)(param_1 + 200);
    lVar10 = uVar14 - uVar16;
    if ((long)uVar14 < (long)uVar16) {
      lVar10 = lVar10 + *(long *)(uVar9 + 0x10);
    }
    if (lVar10 < 1) {
      return;
    }
    _swift_beginAccess(param_1 + 0xb8,auStack_90,0x21,0);
    if (uVar14 == uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35a4);
      (*pcVar5)();
    }
    if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35a8);
      (*pcVar5)();
    }
    if (uVar16 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35ac);
      (*pcVar5)();
    }
    uVar13 = *(ulong *)(uVar9 + 0x10);
    if (uVar13 <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35b0);
      (*pcVar5)();
    }
    lVar10 = uVar9 + uVar16 * 0x20;
    lVar17 = *(long *)(lVar10 + 0x20);
    if (lVar17 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35bc);
      (*pcVar5)();
    }
    if ((long)uVar16 <= (long)uVar14) {
      uVar13 = 0;
    }
    if ((long)((uVar14 - uVar16) + uVar13) < 1) break;
    uVar14 = *(ulong *)(lVar10 + 0x28);
    uVar13 = *(ulong *)(lVar10 + 0x30);
    uVar15 = *(undefined8 *)(lVar10 + 0x38);
    _swift_retain(uVar15);
    _swift_retain(lVar17);
    uVar8 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(param_1 + 0xb8) = uVar9;
    if ((uVar8 & 1) == 0) {
      FUN_1009b4a98();
    }
    *(ulong *)(param_1 + 0xb8) = uVar9;
    if (*(ulong *)(uVar9 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35b8);
      (*pcVar5)();
    }
    lVar10 = uVar9 + uVar16 * 0x20;
    uVar1 = *(undefined8 *)(lVar10 + 0x20);
    uVar3 = *(undefined8 *)(lVar10 + 0x28);
    uVar2 = *(undefined8 *)(lVar10 + 0x30);
    uVar4 = *(undefined8 *)(lVar10 + 0x38);
    *(undefined8 *)(lVar10 + 0x28) = 0;
    *(undefined8 *)(lVar10 + 0x20) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x30) = 0;
    *(ulong *)(param_1 + 0xb8) = uVar9;
    *(ulong *)(param_1 + 0xc0) = *(long *)(uVar9 + 0x10) + 0x1ffffffffU & uVar16 + 1;
    local_98 = uVar15;
    _swift_endAccess(auStack_90);
    FUN_1009b5c4c(uVar1,uVar3,uVar2,uVar4);
    _swift_retain(lVar17);
    content = (ContentContext *)(uVar14 & 0xffffffff);
    uVar16 = (ulong)(uint)((int)(uVar14 >> 0x20) - (int)uVar14);
    uVar9 = uVar16;
    FUN_1009b7c7c(content,uVar16,2,lVar17,uVar14,uVar13 & 0xffffffffffffff);
    SVar7 = Network::NWConnection::SendCompletion::typeMetadataAccessor();
    lVar10 = CONCAT71(extraout_var,SVar7.value);
    lVar18 = *(long *)(lVar10 + -8);
    puVar19 = (undefined8 *)
              ((long)ppNVar6 + -(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
    puVar11 = &DAT_100f24880;
    local_a8 = uVar13;
    local_a0 = (undefined1 *)ppNVar6;
    _swift_allocObject(&DAT_100f24880,0x28,7);
    uVar15 = local_98;
    *(undefined8 *)(puVar11 + 0x10) = local_98;
    *(ContentContext **)(puVar11 + 0x18) = param_1;
    *(ulong *)(puVar11 + 0x20) = uVar16;
    *puVar19 = FUN_1009b6e10;
    puVar19[1] = puVar11;
    (**(code **)(lVar18 + 0x68))
              (puVar19,*(undefined4 *)
                        PTR___enum_case_for_Network_NWConnection_SendCompletion_contentProcessed_Network_NWConnection_SendCompletion_Type___>___Network_NWError____>______>_Network_NWConnection_SendCompletion_100eaa028
               ,lVar10);
    this = Network::NWConnection::ContentContext::typeMetadataAccessor();
    _swift_retain(uVar15);
    pCVar12 = param_1;
    _swift_retain();
    pCVar12 = Network::NWConnection::ContentContext::get_defaultMessage(this,pCVar12);
    Network::NWConnection::_send(local_b0,content,SUB81(uVar9,0),(SendCompletion)(__int8)pCVar12);
    FUN_10003bf18(content,uVar9);
    _swift_release(lVar17);
    _swift_release(pCVar12);
    FUN_1009b5c4c(lVar17,uVar14,local_a8,local_98);
    (**(code **)(lVar18 + 8))(puVar19,lVar10);
    ppNVar6 = (NWConnection **)local_a0;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b35b4);
  (*pcVar5)();
}



/* Address: 0x1009b35bc | FUN_1009b35bc */

void FUN_1009b35bc(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  undefined *local_28;
  
  lVar2 = *(long *)(param_2 + 0x50);
  if ((param_1 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b362c);
      (*pcVar1)();
    }
    local_28 = &DAT_100f23918;
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b3628);
      (*pcVar1)();
    }
    local_28 = &DAT_100f238f8;
  }
  _swift_retain(lVar2);
  FUN_100629a5c(auStack_40);
  _swift_release(lVar2);
  FUN_100004594(auStack_40);
  return;
}



/* Address: 0x1009b362c | FUN_1009b362c */

void FUN_1009b362c(ulong param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_40 [24];
  undefined *local_28;
  
  lVar2 = *(long *)(param_2 + 0x48);
  if ((param_1 & 1) == 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b369c);
      (*pcVar1)();
    }
    local_28 = &DAT_100f23918;
  }
  else {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b3698);
      (*pcVar1)();
    }
    local_28 = &DAT_100f238f8;
  }
  _swift_retain(lVar2);
  FUN_100629a5c(auStack_40);
  _swift_release(lVar2);
  FUN_100004594(auStack_40);
  return;
}



/* Address: 0x1009b369c | FUN_1009b369c */

void FUN_1009b369c(byte param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  byte local_40 [24];
  undefined *local_28;
  
  lVar2 = *(long *)(param_2 + 0x50);
  if (lVar2 != 0) {
    local_28 = &DAT_100f23990;
    local_40[0] = param_1 & 1;
    _swift_retain(lVar2);
    FUN_100629a5c(local_40);
    _swift_release(lVar2);
    FUN_100004594(local_40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b36fc);
  (*pcVar1)();
}



/* Address: 0x1009b36fc | FUN_1009b36fc */

void FUN_1009b36fc(byte param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  byte local_40 [24];
  undefined *local_28;
  
  lVar2 = *(long *)(param_2 + 0x48);
  if (lVar2 != 0) {
    local_28 = &DAT_100f23990;
    local_40[0] = param_1 & 1;
    _swift_retain(lVar2);
    FUN_100629a5c(local_40);
    _swift_release(lVar2);
    FUN_100004594(local_40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b375c);
  (*pcVar1)();
}



/* Address: 0x1009b375c | FUN_1009b375c */

void FUN_1009b375c(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  NWPath NVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  puVar3 = auStack_50;
  lVar5 = *(long *)(param_2 + 0x50);
  if (lVar5 != 0) {
    uVar2 = 0;
    FUN_1009a2efc();
    local_38 = uVar2;
    FUN_10000cbb0(auStack_50);
    NVar4 = Network::NWPath::typeMetadataAccessor();
    (**(code **)(*(long *)(NVar4.unknown + -8) + 0x10))(puVar3,param_1,NVar4.unknown);
    _swift_retain(lVar5);
    FUN_100629a5c(auStack_50);
    _swift_release(lVar5);
    FUN_100004594(auStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b37ec);
  (*pcVar1)();
}



/* Address: 0x1009b37ec | FUN_1009b37ec */

void FUN_1009b37ec(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  NWPath NVar4;
  long lVar5;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  puVar3 = auStack_50;
  lVar5 = *(long *)(param_2 + 0x48);
  if (lVar5 != 0) {
    uVar2 = 0;
    FUN_1009a2efc();
    local_38 = uVar2;
    FUN_10000cbb0(auStack_50);
    NVar4 = Network::NWPath::typeMetadataAccessor();
    (**(code **)(*(long *)(NVar4.unknown + -8) + 0x10))(puVar3,param_1,NVar4.unknown);
    _swift_retain(lVar5);
    FUN_100629a5c(auStack_50);
    _swift_release(lVar5);
    FUN_100004594(auStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b387c);
  (*pcVar1)();
}



/* Address: 0x1009b387c | FUN_1009b387c */

void FUN_1009b387c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0xb8,auStack_78,0,0);
  while( true ) {
    uVar5 = *(ulong *)(unaff_x20 + 0xb8);
    uVar2 = *(ulong *)(unaff_x20 + 0xc0);
    uVar8 = *(ulong *)(unaff_x20 + 200);
    lVar10 = uVar8 - uVar2;
    if ((long)uVar8 < (long)uVar2) {
      lVar10 = lVar10 + *(long *)(uVar5 + 0x10);
    }
    if (lVar10 < 1) {
      return;
    }
    _swift_beginAccess(unaff_x20 + 0xb8,auStack_90,0x21,0);
    if (uVar8 == uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b04);
      (*pcVar9)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b08);
      (*pcVar9)();
    }
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b0c);
      (*pcVar9)();
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    if (uVar6 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b10);
      (*pcVar9)();
    }
    lVar10 = uVar5 + uVar2 * 0x20;
    lVar11 = *(long *)(lVar10 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b1c);
      (*pcVar9)();
    }
    if ((long)uVar2 <= (long)uVar8) {
      uVar6 = 0;
    }
    if ((long)((uVar8 - uVar2) + uVar6) < 1) break;
    lVar10 = *(long *)(lVar10 + 0x38);
    _swift_retain(lVar10);
    _swift_retain(lVar11);
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0xb8) = uVar5;
    if ((uVar8 & 1) == 0) {
      FUN_1009b4a98();
    }
    *(ulong *)(unaff_x20 + 0xb8) = uVar5;
    if (*(ulong *)(uVar5 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b18);
      (*pcVar9)();
    }
    lVar1 = uVar5 + uVar2 * 0x20;
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(ulong *)(unaff_x20 + 0xb8) = uVar5;
    *(ulong *)(unaff_x20 + 0xc0) = *(long *)(uVar5 + 0x10) + 0x1ffffffffU & uVar2 + 1;
    _swift_endAccess(auStack_90);
    FUN_1009b5c4c(uVar7,uVar12,uVar13,uVar3);
    _swift_release(lVar11);
    if (lVar10 != 0) {
      uVar5 = *(ulong *)(lVar10 + 0x20);
      lVar11 = *(long *)(lVar10 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar11 + 0x10))();
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar10 + 0x20);
        lVar11 = *(long *)(lVar10 + 0x28);
        _swift_getObjectType(uVar7);
        puVar4 = &DAT_100f246c8;
        _swift_allocObject(&DAT_100f246c8,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar10;
        *(undefined8 *)(puVar4 + 0x18) = param_1;
        pcVar9 = *(code **)(lVar11 + 0x18);
        _swift_retain(lVar10);
        _swift_errorRetain(param_1);
        (*pcVar9)(thunk_FUN_1008d678c,puVar4,uVar7,lVar11);
        _swift_release(lVar10);
        _swift_release(puVar4);
      }
      else {
        _swift_beginAccess(lVar10 + 0x10,auStack_a8,1,0);
        uVar7 = 0;
        uVar13 = 0;
        uVar12 = 0;
        if (*(char *)(lVar10 + 0x18) == -1) {
          *(undefined8 *)(lVar10 + 0x10) = param_1;
          *(undefined1 *)(lVar10 + 0x18) = 1;
          _swift_beginAccess(lVar10 + 0x30,auStack_c0,1,0);
          uVar7 = *(undefined8 *)(lVar10 + 0x30);
          uVar13 = *(undefined8 *)(lVar10 + 0x38);
          uVar12 = *(undefined8 *)(lVar10 + 0x40);
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x30) = 0;
          _swift_errorRetain(param_1);
        }
        FUN_1006486f8(uVar7,uVar13,uVar12);
        _swift_release(lVar10);
        FUN_100004550(uVar7,uVar13);
        _swift_bridgeObjectRelease(uVar12);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3b14);
  (*pcVar9)();
}



/* Address: 0x1009b3b1c | FUN_1009b3b1c */

void FUN_1009b3b1c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0xb0,auStack_78,0,0);
  while( true ) {
    uVar5 = *(ulong *)(unaff_x20 + 0xb0);
    uVar2 = *(ulong *)(unaff_x20 + 0xb8);
    uVar8 = *(ulong *)(unaff_x20 + 0xc0);
    lVar10 = uVar8 - uVar2;
    if ((long)uVar8 < (long)uVar2) {
      lVar10 = lVar10 + *(long *)(uVar5 + 0x10);
    }
    if (lVar10 < 1) {
      return;
    }
    _swift_beginAccess(unaff_x20 + 0xb0,auStack_90,0x21,0);
    if (uVar8 == uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3da4);
      (*pcVar9)();
    }
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3da8);
      (*pcVar9)();
    }
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3dac);
      (*pcVar9)();
    }
    uVar6 = *(ulong *)(uVar5 + 0x10);
    if (uVar6 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3db0);
      (*pcVar9)();
    }
    lVar10 = uVar5 + uVar2 * 0x20;
    lVar11 = *(long *)(lVar10 + 0x20);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3dbc);
      (*pcVar9)();
    }
    if ((long)uVar2 <= (long)uVar8) {
      uVar6 = 0;
    }
    if ((long)((uVar8 - uVar2) + uVar6) < 1) break;
    lVar10 = *(long *)(lVar10 + 0x38);
    _swift_retain(lVar10);
    _swift_retain(lVar11);
    uVar8 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0xb0) = uVar5;
    if ((uVar8 & 1) == 0) {
      FUN_1009b4a98();
    }
    *(ulong *)(unaff_x20 + 0xb0) = uVar5;
    if (*(ulong *)(uVar5 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3db8);
      (*pcVar9)();
    }
    lVar1 = uVar5 + uVar2 * 0x20;
    uVar7 = *(undefined8 *)(lVar1 + 0x20);
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    uVar13 = *(undefined8 *)(lVar1 + 0x30);
    uVar3 = *(undefined8 *)(lVar1 + 0x38);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined8 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
    *(ulong *)(unaff_x20 + 0xb0) = uVar5;
    *(ulong *)(unaff_x20 + 0xb8) = *(long *)(uVar5 + 0x10) + 0x1ffffffffU & uVar2 + 1;
    _swift_endAccess(auStack_90);
    FUN_1009b5c4c(uVar7,uVar12,uVar13,uVar3);
    _swift_release(lVar11);
    if (lVar10 != 0) {
      uVar5 = *(ulong *)(lVar10 + 0x20);
      lVar11 = *(long *)(lVar10 + 0x28);
      _swift_getObjectType();
      (**(code **)(lVar11 + 0x10))();
      if ((uVar5 & 1) == 0) {
        uVar7 = *(undefined8 *)(lVar10 + 0x20);
        lVar11 = *(long *)(lVar10 + 0x28);
        _swift_getObjectType(uVar7);
        puVar4 = &DAT_100f24420;
        _swift_allocObject(&DAT_100f24420,0x20,7);
        *(long *)(puVar4 + 0x10) = lVar10;
        *(undefined8 *)(puVar4 + 0x18) = param_1;
        pcVar9 = *(code **)(lVar11 + 0x18);
        _swift_retain(lVar10);
        _swift_errorRetain(param_1);
        (*pcVar9)(thunk_FUN_1008d678c,puVar4,uVar7,lVar11);
        _swift_release(lVar10);
        _swift_release(puVar4);
      }
      else {
        _swift_beginAccess(lVar10 + 0x10,auStack_a8,1,0);
        uVar7 = 0;
        uVar13 = 0;
        uVar12 = 0;
        if (*(char *)(lVar10 + 0x18) == -1) {
          *(undefined8 *)(lVar10 + 0x10) = param_1;
          *(undefined1 *)(lVar10 + 0x18) = 1;
          _swift_beginAccess(lVar10 + 0x30,auStack_c0,1,0);
          uVar7 = *(undefined8 *)(lVar10 + 0x30);
          uVar13 = *(undefined8 *)(lVar10 + 0x38);
          uVar12 = *(undefined8 *)(lVar10 + 0x40);
          *(undefined8 *)(lVar10 + 0x38) = 0;
          *(undefined8 *)(lVar10 + 0x40) = 0;
          *(undefined8 *)(lVar10 + 0x30) = 0;
          _swift_errorRetain(param_1);
        }
        FUN_1006486f8(uVar7,uVar13,uVar12);
        _swift_release(lVar10);
        FUN_100004550(uVar7,uVar13);
        _swift_bridgeObjectRelease(uVar12);
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b3db4);
  (*pcVar9)();
}



/* Address: 0x1009b3dbc | FUN_1009b3dbc */

void FUN_1009b3dbc(undefined8 param_1,long param_2)

{
  NWError NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar2;
  
  NVar1 = Network::NWError::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar12 = *(long *)(lVar2 + -8);
  puVar11 = &stack0xffffffffffffffa0 + -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff2708;
  FUN_1000f7830(&DAT_100ff2708,&DAT_100c8b7d8);
  lVar10 = (long)puVar11 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
  lVar4 = lVar10;
  (**(code **)(lVar12 + 0x30))(lVar10,1,lVar2);
  if ((int)lVar4 == 1) {
    FUN_1000fb4c4(lVar10,&DAT_100ff2708,&DAT_100c8b7d8);
    if (param_2 != 0) {
      FUN_100988b88(0,0,param_2);
    }
  }
  else {
    puVar5 = puVar11;
    (**(code **)(lVar12 + 0x20))(puVar11,lVar10,lVar2);
    if (param_2 == 0) {
      (**(code **)(lVar12 + 8))(puVar11,lVar2);
    }
    else {
      FUN_1009a8044();
      lVar10 = lVar2;
      _swift_allocError(lVar2,puVar5,0,0);
      lVar9 = lVar2;
      (**(code **)(lVar12 + 0x10))(puVar5,puVar11,lVar2);
      uVar6 = *(ulong *)(param_2 + 0x20);
      lVar4 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar7 = uVar6;
      lVar8 = lVar4;
      (**(code **)(lVar4 + 0x10))();
      if ((uVar7 & 1) == 0) {
        puVar3 = &DAT_100f246f0;
        _swift_allocObject(&DAT_100f246f0,0x20,7);
        *(long *)(puVar3 + 0x10) = param_2;
        *(long *)(puVar3 + 0x18) = lVar10;
        pcVar13 = *(code **)(lVar4 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(lVar10);
        (*pcVar13)(thunk_FUN_1008d678c,puVar3,uVar6,lVar4);
        _swift_release(puVar3);
      }
      else {
        lVar4 = lVar10;
        thunk_FUN_1005de8f4(lVar10);
        FUN_1006486f8();
        FUN_100004550(lVar4,lVar8);
        _swift_bridgeObjectRelease(lVar9);
      }
      (**(code **)(lVar12 + 8))(puVar11,lVar2);
      _swift_errorRelease(lVar10);
    }
  }
  return;
}



/* Address: 0x1009b3fd8 | FUN_1009b3fd8 */

/* WARNING: Removing unreachable block (ram,0x0001009b4018) */
/* WARNING: Removing unreachable block (ram,0x0001009b4044) */

void FUN_1009b3fd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  NWProtocolTLS *this;
  NWConnection *pNVar6;
  NWProtocolDefinition *pNVar7;
  NWProtocolDefinition *pNVar8;
  Metadata *pMVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  Metadata *pMVar12;
  long lVar13;
  NWConnection *this_00;
  undefined1 local_90 [24];
  undefined *local_78;
  Metadata *local_70 [2];
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  puVar4 = PTR__get_localEndpoint_100eaa300;
  FUN_1009adb9c();
  puVar5 = PTR__get_remoteEndpoint_100eaa308;
  FUN_1009adb9c();
  uVar1 = *(undefined8 *)(unaff_x20 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined **)(unaff_x20 + 0xf0) = puVar4;
  *(undefined **)(unaff_x20 + 0xf8) = puVar5;
  FUN_1005d84e8(puVar4);
  FUN_1005d84e8(puVar5);
  FUN_1005d8534(uVar1);
  FUN_1005d8534(uVar2);
  FUN_1009ac214(uVar11);
  this_00 = *(NWConnection **)(unaff_x20 + 0x60);
  if (this_00 != (NWConnection *)0x0) {
    this = Network::NWProtocolTLS::typeMetadataAccessor();
    pNVar6 = this_00;
    _swift_retain();
    pNVar7 = Network::NWProtocolTLS::get_definition(this,(NWProtocolTLS *)pNVar6);
    pNVar8 = pNVar7;
    Network::NWConnection::_metadata(this_00,pNVar7);
    _swift_release(this_00);
    _swift_release(pNVar7);
    if (pNVar8 != (NWProtocolDefinition *)0x0) {
      pMVar9 = Network::NWProtocolTLS::Metadata::typeMetadataAccessor();
      pNVar7 = pNVar8;
      _swift_dynamicCastClass(pNVar8,pMVar9);
      if (pNVar7 != (NWProtocolDefinition *)0x0) {
        pMVar12 = (Metadata *)pNVar7;
        Network::NWProtocolTLS::Metadata::_get_securityProtocolMetadata
                  ((Metadata *)pNVar7,(Metadata *)pNVar7);
        pMVar9 = (Metadata *)pNVar7;
        _swift_getObjectType();
        puVar10 = &DAT_100ff26e8;
        local_70[0] = (Metadata *)pNVar7;
        FUN_1000f7830(&DAT_100ff26e8,&DAT_100c8b7a0);
        FUN_1006716c8(local_90,local_70,FUN_1009b5c78,pMVar12,pMVar9,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar10,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        lVar13 = *(long *)(unaff_x20 + 0x50);
        if (lVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b420c);
          (*pcVar3)();
        }
        local_78 = &DAT_100f258d0;
        _swift_retain(lVar13);
        FUN_100629a5c(local_90);
        FUN_1005d8534(puVar4);
        FUN_1005d8534(puVar5);
        _swift_release(lVar13);
        _swift_unknownObjectRelease(pNVar7);
        _swift_release(pNVar8);
        _swift_release(uVar11);
        FUN_100004594(local_90);
        return;
      }
      _swift_release(pNVar8);
    }
  }
  _swift_release(uVar11);
  FUN_1005d8534(puVar5);
  FUN_1005d8534(puVar4);
  return;
}



/* Address: 0x1009b420c | FUN_1009b420c */

/* WARNING: Removing unreachable block (ram,0x0001009b424c) */
/* WARNING: Removing unreachable block (ram,0x0001009b4278) */

void FUN_1009b420c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  NWProtocolTLS *this;
  NWConnection *pNVar7;
  NWProtocolDefinition *pNVar8;
  NWProtocolDefinition *pNVar9;
  Metadata *pMVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long unaff_x20;
  Metadata *pMVar13;
  long lVar14;
  NWConnection *this_00;
  undefined1 local_90 [24];
  undefined *local_78;
  Metadata *local_70 [2];
  
  uVar12 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  puVar5 = PTR__get_localEndpoint_100eaa300;
  FUN_1009adde4();
  puVar6 = PTR__get_remoteEndpoint_100eaa308;
  FUN_1009adde4();
  puVar1 = (undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = puVar5;
  puVar1[1] = puVar6;
  FUN_1005d84e8(puVar5);
  FUN_1005d84e8(puVar6);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar3);
  FUN_1009ac354(uVar12);
  this_00 = *(NWConnection **)(unaff_x20 + 0x58);
  if (this_00 != (NWConnection *)0x0) {
    this = Network::NWProtocolTLS::typeMetadataAccessor();
    pNVar7 = this_00;
    _swift_retain();
    pNVar8 = Network::NWProtocolTLS::get_definition(this,(NWProtocolTLS *)pNVar7);
    pNVar9 = pNVar8;
    Network::NWConnection::_metadata(this_00,pNVar8);
    _swift_release(this_00);
    _swift_release(pNVar8);
    if (pNVar9 != (NWProtocolDefinition *)0x0) {
      pMVar10 = Network::NWProtocolTLS::Metadata::typeMetadataAccessor();
      pNVar8 = pNVar9;
      _swift_dynamicCastClass(pNVar9,pMVar10);
      if (pNVar8 != (NWProtocolDefinition *)0x0) {
        pMVar13 = (Metadata *)pNVar8;
        Network::NWProtocolTLS::Metadata::_get_securityProtocolMetadata
                  ((Metadata *)pNVar8,(Metadata *)pNVar8);
        pMVar10 = (Metadata *)pNVar8;
        _swift_getObjectType();
        puVar11 = &DAT_100ff26e8;
        local_70[0] = (Metadata *)pNVar8;
        FUN_1000f7830(&DAT_100ff26e8,&DAT_100c8b7a0);
        FUN_1006716c8(local_90,local_70,FUN_1009b6ee4,pMVar13,pMVar10,
                      PTR___type_metadata_for_Swift_Never_100eadc38,puVar11,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40)
        ;
        lVar14 = *(long *)(unaff_x20 + 0x48);
        if (lVar14 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b4450);
          (*pcVar4)();
        }
        local_78 = &DAT_100f258d0;
        _swift_retain(lVar14);
        FUN_100629a5c(local_90);
        FUN_1005d8534(puVar5);
        FUN_1005d8534(puVar6);
        _swift_release(lVar14);
        _swift_unknownObjectRelease(pNVar8);
        _swift_release(pNVar9);
        _swift_release(uVar12);
        FUN_100004594(local_90);
        return;
      }
      _swift_release(pNVar9);
    }
  }
  _swift_release(uVar12);
  FUN_1005d8534(puVar6);
  FUN_1005d8534(puVar5);
  return;
}



/* Address: 0x1009b4450 | FUN_1009b4450 */

void FUN_1009b4450(void)

{
  byte bVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 local_88 [24];
  undefined *local_70;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar3 = (undefined8 *)(unaff_x20 + 0xb2);
  _swift_beginAccess(puVar3,auStack_48,0,0);
  if (*(char *)(unaff_x20 + 0xb3) == '\x01') {
    lVar6 = unaff_x20 + 0xa0;
    _swift_beginAccess(lVar6,auStack_60,1,0);
    bVar1 = *(byte *)(unaff_x20 + 0xa0);
    if (((bVar1 & 0xfc) != 4) && (1 < bVar1 - 2)) {
      uVar5 = 2;
      if (bVar1 != 0) {
        uVar5 = 3;
      }
      *(undefined1 *)(unaff_x20 + 0xa0) = uVar5;
      lVar6 = *(long *)(unaff_x20 + 0x48);
      if (lVar6 != 0) {
        local_70 = &DAT_100eeb880;
        local_88[0] = 0;
        _swift_retain(lVar6);
        FUN_100629a5c(local_88);
        _swift_release(lVar6);
        FUN_100004594(local_88);
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4590);
      (*pcVar2)();
    }
    FUN_100991e0c();
    puVar4 = &DAT_100f21a58;
    _swift_allocError(&DAT_100f21a58,lVar6,0,0);
    _swift_willThrow();
  }
  else {
    FUN_100980638();
    puVar4 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar3,0,0);
    *puVar3 = 6;
    *(undefined1 *)(puVar3 + 1) = 3;
  }
  FUN_1009aeb18();
  _swift_errorRelease(puVar4);
  return;
}



/* Address: 0x1009b4590 | FUN_1009b4590 */

void FUN_1009b4590(String *param_1,Metadata *param_2)

{
  UnsafePointer<__int8> cString;
  String SVar1;
  
  Network::NWProtocolTLS::Metadata::_get_securityProtocolMetadata(param_2,param_2);
  cString.unknown = param_2;
  _sec_protocol_metadata_get_negotiated_protocol();
  _swift_unknownObjectRelease(param_2);
  if (cString.unknown == (undefined *)0x0) {
    SVar1 = (String)ZEXT816(0);
  }
  else {
    SVar1 = Swift::String::init(cString);
  }
  *param_1 = SVar1;
  return;
}



/* Address: 0x1009b45f4 | FUN_1009b45f4 */

void FUN_1009b45f4(undefined8 param_1,long *param_2)

{
  ulong *puVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  
  puVar3 = &DAT_100ff1dc0;
  FUN_1000f7830(&DAT_100ff1dc0,&DAT_100c8aeb0);
  lVar13 = *(long *)(puVar3 + -8);
  lVar12 = *(long *)(lVar13 + 0x40);
  uVar9 = lVar12 + 0xfU & 0xfffffffffffffff0;
  puVar8 = &stack0xffffffffffffffa0 + -uVar9;
  FUN_1000f8cac(param_1,puVar8,&DAT_100ff26f8,&DAT_100c8b7c0);
  uVar6 = 0;
  _swift_storeEnumTagMultiPayload(puVar8,puVar3,0);
  puVar1 = (ulong *)((long)param_2 + *(long *)(*param_2 + 0x60));
  uVar4 = *puVar1;
  uVar2 = puVar1[1];
  _swift_getObjectType();
  uVar7 = uVar4;
  uVar14 = uVar2;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar7 & 1) == 0) {
    lVar10 = (long)puVar8 - uVar9;
    FUN_1000f8cac(puVar8,lVar10,&DAT_100ff1dc0,&DAT_100c8aeb0);
    uVar7 = (ulong)*(byte *)(lVar13 + 0x50);
    uVar14 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
    puVar3 = &DAT_100f244e8;
    _swift_allocObject(&DAT_100f244e8,uVar14 + lVar12,uVar7 | 7);
    *(long **)(puVar3 + 0x10) = param_2;
    FUN_1009b5e88(lVar10,puVar3 + uVar14);
    pcVar11 = *(code **)(uVar2 + 0x18);
    _swift_retain(param_2);
    (*pcVar11)(FUN_1009b5ed8,puVar3,uVar4,uVar2);
    _swift_release(puVar3);
  }
  else {
    puVar5 = puVar8;
    FUN_100999920(puVar8);
    FUN_1006486f8();
    FUN_100004550(puVar5,uVar14);
    _swift_bridgeObjectRelease(uVar6);
  }
  FUN_1000fb4c4(puVar8,&DAT_100ff1dc0,&DAT_100c8aeb0);
  return;
}



/* Address: 0x1009b47a0 | FUN_1009b47a0 */

void FUN_1009b47a0(long *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *(long *)(*param_1 + 0x58);
  _swift_beginAccess((long)param_1 + lVar9,auStack_78,0,0);
  puVar2 = &DAT_100ff1db8;
  FUN_1000f7830(&DAT_100ff1db8,&DAT_100c8b7d0);
  uVar10 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_90 + -uVar10;
  FUN_1000f8cac((long)param_1 + lVar9,puVar7,&DAT_100ff1db8,&DAT_100c8b7d0);
  puVar2 = &DAT_100ff1dc0;
  FUN_1000f7830(&DAT_100ff1dc0,&DAT_100c8aeb0);
  lVar11 = *(long *)(puVar2 + -8);
  puVar3 = puVar7;
  (**(code **)(lVar11 + 0x30))(puVar7,1,puVar2);
  FUN_1000fb4c4(puVar7,&DAT_100ff1db8,&DAT_100c8b7d0);
  uVar4 = 0;
  uVar8 = 0;
  uVar6 = 0;
  if ((int)puVar3 == 1) {
    lVar5 = (long)puVar7 - uVar10;
    FUN_1000f8cac(param_2,lVar5,&DAT_100ff1dc0,&DAT_100c8aeb0);
    (**(code **)(lVar11 + 0x38))(lVar5,0,1,puVar2);
    _swift_beginAccess((long)param_1 + lVar9,auStack_90,0x21,0);
    FUN_10099a2b4(lVar5,(long)param_1 + lVar9);
    _swift_endAccess(auStack_90);
    puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x68));
    _swift_beginAccess(puVar1,auStack_90,1,0);
    uVar4 = *puVar1;
    uVar8 = puVar1[1];
    uVar6 = puVar1[2];
    puVar1[1] = 0;
    puVar1[2] = 0;
    *puVar1 = 0;
  }
  FUN_1006486f8(uVar4,uVar8,uVar6);
  FUN_100004550(uVar4,uVar8);
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Address: 0x1009b496c | FUN_1009b496c */

void FUN_1009b496c(void)

{
  undefined *puVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long lVar5;
  long local_68 [5];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10) * 2;
  if (lVar4 < 1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a84);
    (*pcVar2)();
  }
  FUN_1009b4f88(0,lVar4,0);
  if (*(long *)(lVar3 + 0x10) < unaff_x20[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a88);
    (*pcVar2)();
  }
  if (unaff_x20[1] < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a8c);
    (*pcVar2)();
  }
  _swift_retain(lVar3);
  FUN_1009b4aac();
  if (-1 < unaff_x20[2]) {
    if (*(ulong *)(lVar3 + 0x10) < (ulong)unaff_x20[2]) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a94);
      (*pcVar2)();
    }
    _swift_retain(lVar3);
    FUN_1009b4aac();
    lVar5 = *(long *)(puVar1 + 0x10);
    local_68[0] = lVar4 - lVar5;
    if (-1 < local_68[0]) {
      local_68[2] = 0;
      local_68[1] = 0;
      local_68[4] = 0;
      local_68[3] = 0;
      FUN_1009b4c00(local_68);
      _swift_release(lVar3);
      unaff_x20[1] = 0;
      unaff_x20[2] = lVar5;
      *unaff_x20 = (long)puVar1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a98);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b4a90);
  (*pcVar2)();
}



/* Address: 0x1009b4a98 | FUN_1009b4a98 */

void FUN_1009b4a98(long param_1)

{
  FUN_1009b4ff8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1009b4aac | FUN_1009b4aac */

void FUN_1009b4aac(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  param_4 = param_4 >> 1;
  lVar4 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4bf0);
    (*pcVar1)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,lVar4)) {
    lVar7 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = lVar5;
    if (((int)lVar7 == 0) || (uVar3 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar3 < lVar6 + lVar4)) {
      FUN_1009b4f88();
      lVar5 = *unaff_x20;
      uVar3 = *(ulong *)(lVar5 + 0x18) >> 1;
    }
    lVar6 = *(long *)(lVar5 + 0x10);
    lVar7 = uVar3 - lVar6;
    if (param_3 == param_4) {
      if (0 < lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4bf8);
        (*pcVar1)();
      }
      lVar4 = 0;
    }
    else {
      if (lVar7 < lVar4) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4bfc);
        (*pcVar1)();
      }
      puVar2 = &DAT_100ff2270;
      FUN_1000f7830(&DAT_100ff2270,&DAT_100c8afd8);
      _swift_arrayInitWithCopy(lVar5 + lVar6 * 0x20 + 0x20,param_2 + param_3 * 0x20,lVar4,puVar2);
      if (0 < lVar4) {
        if (SCARRY8(*(long *)(lVar5 + 0x10),lVar4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4c00);
          (*pcVar1)();
        }
        *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + lVar4;
      }
    }
    _swift_unknownObjectRelease(param_1);
    if (lVar4 == lVar7) {
      FUN_1009b6734(1,0,0,0);
    }
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4bf4);
  (*pcVar1)();
}



/* Address: 0x1009b4c00 | FUN_1009b4c00 */

void FUN_1009b4c00(long *param_1)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  lVar9 = *param_1;
  lVar11 = *unaff_x20;
  lVar10 = *(long *)(lVar11 + 0x10);
  if (SCARRY8(lVar10,lVar9)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4f7c);
    (*pcVar1)();
  }
  lVar6 = lVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  *unaff_x20 = lVar11;
  if (((int)lVar6 == 0) || (uVar5 = *(ulong *)(lVar11 + 0x18) >> 1, (long)uVar5 < lVar10 + lVar9)) {
    FUN_1009b4f88();
    lVar11 = *unaff_x20;
    uVar5 = *(ulong *)(lVar11 + 0x18) >> 1;
  }
  plVar13 = (long *)(uVar5 - *(long *)(lVar11 + 0x10));
  plVar2 = &local_90;
  FUN_1009b5774(plVar2,lVar11 + *(long *)(lVar11 + 0x10) * 0x20 + 0x20,plVar13);
  lVar4 = lStack_70;
  lVar3 = local_78;
  lVar6 = lStack_80;
  lVar10 = local_88;
  if ((long)plVar2 < lVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4f80);
    (*pcVar1)();
  }
  if (0 < (long)plVar2) {
    if (SCARRY8(*(long *)(lVar11 + 0x10),(long)plVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4f84);
      (*pcVar1)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + (long)plVar2;
  }
  if (plVar2 == plVar13) {
    if (local_68 == local_90) {
      lVar6 = 0;
      lVar3 = 0;
      lVar4 = 0;
      lVar12 = local_88;
      lVar14 = lStack_80;
      lVar15 = local_78;
      lVar16 = lStack_70;
    }
    else {
      if ((local_68 < 0) || (local_90 <= local_68)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4f88);
        (*pcVar1)();
      }
      lVar7 = *(long *)(lVar11 + 0x10);
      lVar9 = local_68 + 1;
      local_68 = lVar9;
      FUN_1009a2c14(local_88);
      while (lVar12 = local_88, lVar14 = lStack_80, lVar15 = local_78, lVar16 = lStack_70,
            lVar10 != 1) {
        if ((long)(*(ulong *)(lVar11 + 0x18) >> 1) < lVar7 + 1) {
          FUN_1009b4f88(1 < *(ulong *)(lVar11 + 0x18),lVar7 + 1,1);
        }
        lVar11 = *unaff_x20;
        lVar8 = lVar7;
        local_98 = lVar9;
        if ((lVar10 != 1) && (uVar5 = *(ulong *)(lVar11 + 0x18) >> 1, lVar7 < (long)uVar5)) {
          FUN_1009a2c14(lVar10,lVar6);
          FUN_1009b6734(lVar10,lVar6,lVar3,lVar4);
          plVar2 = (long *)(lVar11 + 0x20 + lVar7 * 0x20);
          *plVar2 = lVar10;
          plVar2[1] = lVar6;
          plVar2[2] = lVar3;
          plVar2[3] = lVar4;
          lVar8 = lVar7 + 1;
          if (lVar9 == local_90) {
LAB_1009b4f1c:
            lVar4 = 0;
            lVar3 = 0;
            lVar6 = 0;
            *(long *)(lVar11 + 0x10) = lVar8;
            break;
          }
          if ((lVar9 < 0) || (local_90 <= lVar9)) {
LAB_1009b4f74:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b4f78);
            (*pcVar1)();
          }
          local_98 = lVar9 + 1;
          FUN_1009a2c14(local_88,lStack_80,local_78,lStack_70);
          lVar3 = local_78;
          lVar4 = lStack_70;
          lVar6 = lStack_80;
          lVar10 = local_88;
          if ((local_88 != 1) && (lVar8 < (long)uVar5)) {
            plVar2 = (long *)(lVar11 + lVar7 * 0x20 + 0x58);
            do {
              FUN_1009a2c14(local_88,lStack_80,local_78,lStack_70);
              FUN_1009b6734(local_88,lStack_80,local_78,lStack_70);
              plVar2[-3] = local_88;
              plVar2[-2] = lStack_80;
              lVar8 = lVar8 + 1;
              plVar2[-1] = local_78;
              *plVar2 = lStack_70;
              if (local_90 == local_98) goto LAB_1009b4f1c;
              if ((lVar9 < 0) || (local_90 <= local_98)) goto LAB_1009b4f74;
              local_98 = local_98 + 1;
              FUN_1009a2c14(local_88,lStack_80,local_78,lStack_70);
              plVar2 = plVar2 + 4;
            } while (lVar8 < (long)uVar5);
          }
        }
        *(long *)(lVar11 + 0x10) = lVar8;
        lVar7 = lVar8;
        lVar9 = local_98;
      }
    }
    FUN_1009b6734(1,lVar6,lVar3,lVar4);
    local_88 = lVar12;
    lStack_80 = lVar14;
    local_78 = lVar15;
    lStack_70 = lVar16;
  }
  FUN_1009b5c4c(local_88,lStack_80,local_78,lStack_70);
  *unaff_x20 = lVar11;
  return;
}



/* Address: 0x1009b4f88 | FUN_1009b4f88 */

void FUN_1009b4f88(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009b4ff8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009b4fa4 | FUN_1009b4fa4 */

void FUN_1009b4fa4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009b5128();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009b4fc0 | FUN_1009b4fc0 */

void FUN_1009b4fc0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009b5258();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009b4fdc | FUN_1009b4fdc */

void FUN_1009b4fdc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009b537c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009b4ff8 | FUN_1009b4ff8 */

undefined * FUN_1009b4ff8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b5128);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff26e0;
    FUN_1000f7830(&DAT_100ff26e0,&DAT_100c8b790);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff2270;
    FUN_1000f7830(&DAT_100ff2270,&DAT_100c8afd8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009b5128 | FUN_1009b5128 */

undefined * FUN_1009b5128(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b5258);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1009b54ac();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    puVar5 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009b5258 | FUN_1009b5258 */

undefined * FUN_1009b5258(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b537c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_1009b551c();
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_1009943f8(0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009b537c | FUN_1009b537c */

undefined * FUN_1009b537c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b54ac);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff2728;
    FUN_1000f7830(&DAT_100ff2728,&DAT_100c8b7f8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff2730;
    FUN_1000f7830(&DAT_100ff2730,&DAT_100c8b800);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009b54ac | FUN_1009b54ac */

void FUN_1009b54ac(void)

{
  byte bVar1;
  undefined *puVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    puVar2 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    if (puVar2 != (undefined *)0x0) {
      FUN_1000f7830(&DAT_100ff2718,&DAT_100c8b7e8);
      return;
    }
  }
  FUN_1000f7830(&DAT_100ff2738,&DAT_100c8b810);
  return;
}



/* Address: 0x1009b551c | FUN_1009b551c */

void FUN_1009b551c(void)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_1009943f8();
    if (lVar2 != 0) {
      FUN_1000f7830(&DAT_100ff2718,&DAT_100c8b7e8);
      return;
    }
  }
  FUN_1000f7830(&DAT_100ff2710,&DAT_100c8b7e0);
  return;
}



/* Address: 0x1009b5580 | FUN_1009b5580 */

undefined1  [16] FUN_1009b5580(long param_1,ulong param_2)

{
  undefined8 *puVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  FUN_100071340();
  if ((param_2 & 1) == 0) {
    uVar4 = 0;
    uVar5 = 0;
  }
  else {
    iVar2 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar2 == 0) {
      FUN_1009b5610();
    }
    puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_1 * 0x10);
    uVar4 = *puVar1;
    uVar5 = puVar1[1];
    FUN_1001f60f0(param_1,lVar3);
    *unaff_x20 = lVar3;
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x1009b5610 | FUN_1009b5610 */

void FUN_1009b5610(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  this = (_DictionaryStorage *)&DAT_100ff1cb0;
  FUN_1000f7830(&DAT_100ff1cb0,&DAT_100c8ade0);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_1009b56ec;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar9 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x10);
        uVar11 = puVar3[1];
        uVar10 = *puVar3;
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x10);
        puVar3[1] = uVar11;
        *puVar3 = uVar10;
        _swift_unknownObjectRetain(uVar10);
        if (uVar6 != 0) break;
LAB_1009b56ec:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b5774);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1009b574c;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1009b574c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x1009b5774 | FUN_1009b5774 */

void FUN_1009b5774(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  if (param_2 == (ulong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b586c);
        (*pcVar5)();
      }
      uVar6 = uVar1;
      if (uVar1 != 0) {
        uVar7 = 0;
        do {
          if ((uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) == uVar7) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b5868);
            (*pcVar5)();
          }
          *param_2 = uVar3;
          param_2[1] = uVar2;
          param_2[2] = uVar4;
          param_2[3] = uVar8;
          if (param_3 - 1 == uVar7) {
            FUN_1009a2c14(uVar3,uVar2,uVar4,uVar8);
            uVar6 = param_3;
            break;
          }
          param_2 = param_2 + 4;
          FUN_1009a2c14(uVar3,uVar2,uVar4,uVar8);
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
      }
    }
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar8;
  param_1[5] = uVar6;
  return;
}



/* Address: 0x1009b586c | FUN_1009b586c */

void FUN_1009b586c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_27;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *(undefined4 *)(param_2 + 2);
  local_54 = *(undefined2 *)((long)param_2 + 0x14);
  local_52 = *(undefined1 *)((long)param_2 + 0x16);
  local_27 = 0;
  _swift_retain();
  FUN_1006296a8(&local_68);
  FUN_1005e70f4(&local_68);
  return;
}



/* Address: 0x1009b58c8 | FUN_1009b58c8 */

void FUN_1009b58c8(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_68 [3];
  undefined8 local_50;
  undefined1 local_27;
  
  uVar2 = *param_2;
  uVar1 = 0;
  (*param_3)();
  local_27 = 2;
  local_68[0] = uVar2;
  local_50 = uVar1;
  _swift_retain(uVar2);
  FUN_1006296a8(local_68);
  FUN_1005e70f4(local_68);
  return;
}



/* Address: 0x1009b5920 | FUN_1009b5920 */

void FUN_1009b5920(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long local_70;
  char local_68;
  undefined8 *local_60 [2];
  
  uVar4 = 0;
  lVar10 = *(long *)(unaff_x20 + 0x60);
  if (lVar10 == 0) {
    if (param_1 != (undefined8 *)0x0) {
      puVar2 = param_1;
      FUN_100980638();
      puVar3 = &DAT_100eeb710;
      uVar9 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 2;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar4 = param_1[4];
      lVar10 = param_1[5];
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar8 = lVar10;
      (**(code **)(lVar10 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar6 = &DAT_100f24358;
        _swift_allocObject(&DAT_100f24358,0x20,7);
        *(undefined8 **)(puVar6 + 0x10) = param_1;
        *(undefined **)(puVar6 + 0x18) = puVar3;
        pcVar11 = *(code **)(lVar10 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar3);
        (*pcVar11)(FUN_1008d678c,puVar6,uVar4,lVar10);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar3;
        thunk_FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar8);
        _swift_bridgeObjectRelease(uVar9);
      }
      _swift_errorRelease(puVar3);
      return;
    }
  }
  else {
    puVar1 = param_1;
    FUN_100991e0c();
    puVar2 = (undefined8 *)&DAT_100f21a58;
    _swift_allocError(&DAT_100f21a58,puVar1,0,0);
    _swift_willThrow();
    local_60[0] = puVar2;
    _swift_retain(lVar10);
    _swift_errorRetain(puVar2);
    puVar3 = &DAT_100ff1318;
    FUN_1000f7830(&DAT_100ff1318,&DAT_100c8b710);
    _swift_dynamicCast(&local_70,local_60,puVar3,&DAT_100eeb710,0);
    if ((uVar4 & 1) != 0) {
      if ((local_68 == '\x03') && (local_70 == 4)) {
        _swift_errorRelease();
        if (param_1 == (undefined8 *)0x0) {
          _swift_release(lVar10);
        }
        else {
          FUN_100980638();
          puVar3 = &DAT_100eeb710;
          uVar9 = 0;
          _swift_allocError(&DAT_100eeb710,puVar2,0,0);
          *puVar2 = 4;
          *(undefined1 *)(puVar2 + 1) = 3;
          uVar4 = param_1[4];
          lVar8 = param_1[5];
          _swift_getObjectType();
          uVar5 = uVar4;
          lVar7 = lVar8;
          (**(code **)(lVar8 + 0x10))();
          if ((uVar5 & 1) == 0) {
            puVar6 = &DAT_100f24380;
            _swift_allocObject(&DAT_100f24380,0x20,7);
            *(undefined8 **)(puVar6 + 0x10) = param_1;
            *(undefined **)(puVar6 + 0x18) = puVar3;
            pcVar11 = *(code **)(lVar8 + 0x18);
            _swift_retain(param_1);
            _swift_errorRetain(puVar3);
            (*pcVar11)(thunk_FUN_1008d678c,puVar6,uVar4,lVar8);
            _swift_release(puVar6);
            _swift_release(lVar10);
          }
          else {
            puVar6 = puVar3;
            thunk_FUN_1005de8f4(puVar3);
            FUN_1006486f8();
            _swift_release(lVar10);
            FUN_100004550(puVar6,lVar7);
            _swift_bridgeObjectRelease(uVar9);
          }
          _swift_errorRelease(puVar3);
        }
        _swift_errorRelease(local_60[0]);
        return;
      }
      FUN_10061e298();
    }
    _swift_errorRelease(local_60[0]);
    FUN_1009ae784(puVar2,2,param_1);
    _swift_errorRelease(puVar2);
    _swift_release(lVar10);
  }
  return;
}



/* Address: 0x1009b5c20 | FUN_1009b5c20 */

void FUN_1009b5c20(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x1009b5c30 | FUN_1009b5c30 */

void FUN_1009b5c30(void)

{
  FUN_1009b2120();
  return;
}



/* Address: 0x1009b5c38 | FUN_1009b5c38 */

void FUN_1009b5c38(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_10061e298();
    return;
  }
  return;
}



/* Address: 0x1009b5c4c | FUN_1009b5c4c */

void FUN_1009b5c4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_release(param_4);
    return;
  }
  return;
}



/* Address: 0x1009b5c78 | FUN_1009b5c78 */

void FUN_1009b5c78(void)

{
  FUN_1009b4590();
  return;
}



/* Address: 0x1009b5c94 | thunk_FUN_1009b2398 */

void thunk_FUN_1009b2398(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  undefined7 extraout_var_01;
  long lVar8;
  long lVar9;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  long lVar5;
  
  SVar2 = Network::NWConnection::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar11 = *(long *)(lVar5 + -8);
  lVar9 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_90 + lVar9;
  (**(code **)(lVar11 + 0x10))(puVar10,param_1,lVar5);
  puVar6 = puVar10;
  (**(code **)(lVar11 + 0x58))(puVar10,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
     )) {
    if ((PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
       )) {
      if ((PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
         )) {
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
         )) {
        FUN_1009b3fd8();
        return;
      }
      if ((PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
         )) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x60);
        *(undefined8 *)(unaff_x20 + 0x60) = 0;
        _swift_release(uVar7);
        return;
      }
      *(undefined4 *)((long)auStack_98 + lVar9) = 0;
      *(undefined8 *)((long)&uStack_a0 + lVar9) = 0x19f;
      SVar13.bridgeObject = (void *)0x2;
      SVar13.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar13,(StaticString)0x6168636165726e55,
                 0xeb00000000656c62,0xdb71d0);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b26bc);
      (*pcVar1)();
    }
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_01,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    lVar9 = lVar11;
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
  }
  else {
    (**(code **)(lVar11 + 0x60))(puVar10,lVar5);
    NVar3 = Network::NWError::typeMetadataAccessor();
    lVar5 = CONCAT71(extraout_var_00,NVar3.value);
    lVar12 = *(long *)(lVar5 + -8);
    lVar11 = (long)puVar10 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar12 + 0x20))(lVar11,puVar10,lVar5);
    lVar9 = unaff_x20 + 0x98;
    _swift_beginAccess(lVar9,auStack_58,0,0);
    if (*(char *)(unaff_x20 + 0x98) == '\x04') {
      lVar9 = unaff_x20 + 0xa9;
      _swift_beginAccess(lVar9,auStack_70,0,0);
      if (*(char *)(unaff_x20 + 0xab) == '\x01') {
        lVar9 = *(long *)(unaff_x20 + 0x50);
        if (lVar9 != 0) {
          uVar7 = 0;
          FUN_1009a2fec();
          uStack_78 = uVar7;
          FUN_10000cbb0(auStack_90);
          (**(code **)(lVar12 + 0x10))();
          _swift_retain(lVar9);
          FUN_100629a5c(auStack_90);
          _swift_release(lVar9);
          (**(code **)(lVar12 + 8))(lVar11,lVar5);
          FUN_100004594(auStack_90);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b2664);
        (*pcVar1)();
      }
    }
  }
  FUN_1009a8044();
  lVar8 = lVar5;
  _swift_allocError(lVar5,lVar9,0,0);
  (**(code **)(lVar12 + 0x10))(lVar9,lVar11,lVar5);
  FUN_1009ae784(lVar8,2,0);
  (**(code **)(lVar12 + 8))(lVar11,lVar5);
  _swift_errorRelease(lVar8);
  return;
}



/* Address: 0x1009b5c98 | FUN_1009b5c98 */

void FUN_1009b5c98(void)

{
  FUN_1009b35bc();
  return;
}



/* Address: 0x1009b5cb0 | FUN_1009b5cb0 */

void FUN_1009b5cb0(void)

{
  FUN_1009b369c();
  return;
}



/* Address: 0x1009b5cc8 | FUN_1009b5cc8 */

void FUN_1009b5cc8(void)

{
  FUN_1009b375c();
  return;
}



/* Address: 0x1009b5ce0 | FUN_1009b5ce0 */

void FUN_1009b5ce0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b5d44 | FUN_1009b5d44 */

void FUN_1009b5d44(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_1009b0b04(unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009b5d84 | FUN_1009b5d84 */

void FUN_1009b5d84(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1009b0b04(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Address: 0x1009b5dc0 | FUN_1009b5dc0 */

void FUN_1009b5dc0(void)

{
  FUN_1009b45f4();
  return;
}



/* Address: 0x1009b5dc8 | FUN_1009b5dc8 */

void FUN_1009b5dc8(void)

{
  undefined *puVar1;
  long lVar2;
  EstablishmentReport EVar3;
  long unaff_x20;
  ulong uVar4;
  long lVar5;
  
  puVar1 = &DAT_100ff1dc0;
  FUN_1000f7830(&DAT_100ff1dc0,&DAT_100c8aeb0);
  uVar4 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x18 &
          ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar2 = unaff_x20 + uVar4;
  _swift_getEnumCaseMultiPayload(lVar2,puVar1);
  if ((int)lVar2 == 1) {
    _swift_errorRelease(*(undefined8 *)(unaff_x20 + uVar4));
  }
  else {
    EVar3 = Network::NWConnection::EstablishmentReport::typeMetadataAccessor();
    lVar5 = *(long *)(EVar3.unknown + -8);
    lVar2 = unaff_x20 + uVar4;
    (**(code **)(lVar5 + 0x30))(lVar2,1,EVar3.unknown);
    if ((int)lVar2 == 0) {
      (**(code **)(lVar5 + 8))(unaff_x20 + uVar4,EVar3.unknown);
    }
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b5e88 | FUN_1009b5e88 */

undefined8 FUN_1009b5e88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff1dc0;
  FUN_1000f7830(&DAT_100ff1dc0,&DAT_100c8aeb0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009b5ed8 | FUN_1009b5ed8 */

void FUN_1009b5ed8(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100ff1dc0;
  FUN_1000f7830(&DAT_100ff1dc0,&DAT_100c8aeb0);
  FUN_1009b47a0(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1009b5f14 | FUN_1009b5f14 */

void FUN_1009b5f14(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),lVar4,0x100cb819c,
             &TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar4);
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar6 + lVar2 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar1)
  ;
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b5fd8 | FUN_1009b5fd8 */

void FUN_1009b5fd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long unaff_x20;
  ulong uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  uVar8 = uVar7 + 0x38 & (uVar7 ^ 0xffffffffffffffff);
  lVar6 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,uVar4,lVar3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  FUN_1009b00c8(*(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + uVar8,
                unaff_x20 + (uVar8 + lVar6 + uVar7 & (uVar7 ^ 0xffffffffffffffff)),uVar1,lVar3,uVar2
                ,uVar4);
  return;
}



/* Address: 0x1009b6084 | FUN_1009b6084 */

undefined8 FUN_1009b6084(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009a2f4c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009b60c8 | FUN_1009b60c8 */

undefined8 FUN_1009b60c8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009a2f4c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1009b6104 | FUN_1009b6104 */

void FUN_1009b6104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1009b610c(param_1,param_2,param_5);
  return;
}


