/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009b610c | FUN_1009b610c */

void FUN_1009b610c(byte *param_1,ulong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  NWError NVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  undefined7 extraout_var;
  undefined *puVar10;
  __DataStorage *p_Var11;
  int iVar12;
  long unaff_x20;
  byte *pbVar13;
  long lVar14;
  long lVar15;
  byte bVar16;
  code *pcVar17;
  int iVar18;
  uint uVar19;
  undefined4 uVar20;
  __DataStorage *p_Var21;
  undefined8 uVar22;
  uint uVar23;
  undefined2 uVar24;
  __DataStorage *p_Var25;
  long lVar26;
  undefined8 local_b0;
  __DataStorage local_a8 [16];
  undefined1 auStack_98 [24];
  __DataStorage *local_80;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  undefined2 local_6c;
  byte local_6a;
  long local_68;
  long lVar9;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x20 + 0xa8) != '\x01') {
                    /* WARNING: Does not return */
    pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66d0);
    (*pcVar17)();
  }
  *(undefined1 *)(unaff_x20 + 0xa8) = 0;
  pbVar13 = *(byte **)(unaff_x20 + 0xa0);
  pcVar17 = *(code **)(*(long *)pbVar13 + 0x88);
  pbVar8 = pbVar13;
  _swift_retain();
  (*pcVar17)();
  bVar16 = *pbVar8;
  _swift_release();
  if ((bVar16 & 1) == 0) goto LAB_1009b6694;
  local_b0 = param_3;
  if (param_2 >> 0x3c < 0xf) {
    uVar22 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar19 = (uint)(param_2 >> 0x20);
    uVar7 = uVar19 >> 0x1e;
    iVar18 = (int)param_1;
    iVar12 = (int)((ulong)param_1 >> 0x20);
    if (uVar19 >> 0x1e < 2) {
      if (uVar7 == 0) {
        p_Var25 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
      }
      else {
        if (SBORROW4(iVar12,iVar18)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66e0);
          (*pcVar17)();
        }
        p_Var25 = (__DataStorage *)(long)(iVar12 - iVar18);
LAB_1009b61dc:
        pbVar13 = param_1;
        FUN_1001037b4(param_1,param_2);
        if ((long)p_Var25 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66d4);
          (*pcVar17)();
        }
      }
      if (p_Var25 == (__DataStorage *)0x0) goto LAB_1009b6240;
      if ((ulong)p_Var25 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66dc);
        (*pcVar17)();
      }
      FUN_100488140(p_Var25,uVar22,uVar2,uVar1,uVar3);
      p_Var21 = p_Var25 + 0x10;
      _swift_beginAccess(p_Var21,auStack_98,0,0);
      uVar20 = 0;
      uVar19 = 0;
      uVar24 = 0;
      bVar16 = 0;
      uVar23 = *(uint *)(p_Var25 + 0x10);
    }
    else {
      if (uVar7 == 2) {
        p_Var25 = (__DataStorage *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b61cc);
          (*pcVar17)();
        }
        goto LAB_1009b61dc;
      }
LAB_1009b6240:
      FUN_1006116e8();
      p_Var25 = *(__DataStorage **)pbVar13;
      uVar20 = *(undefined4 *)(pbVar13 + 8);
      uVar19 = *(uint *)(pbVar13 + 0xc);
      uVar23 = *(uint *)(pbVar13 + 0x10);
      uVar24 = *(undefined2 *)(pbVar13 + 0x14);
      bVar16 = pbVar13[0x16];
      p_Var21 = p_Var25;
      _swift_retain();
    }
    local_80 = p_Var25;
    local_78 = uVar20;
    local_74 = uVar19;
    local_70 = uVar23;
    local_6c = uVar24;
    local_6a = bVar16;
    if (uVar7 < 2) {
      if (uVar7 == 0) {
        local_a8[0] = SUB81(param_1,0);
        local_a8[1] = SUB81((ulong)param_1 >> 8,0);
        local_a8[2] = SUB81((ulong)param_1 >> 0x10,0);
        local_a8[3] = SUB81((ulong)param_1 >> 0x18,0);
        local_a8[4] = SUB81((ulong)param_1 >> 0x20,0);
        local_a8[5] = SUB81((ulong)param_1 >> 0x28,0);
        local_a8[6] = SUB81((ulong)param_1 >> 0x30,0);
        local_a8[7] = SUB81((ulong)param_1 >> 0x38,0);
        local_a8[8] = SUB81(param_2,0);
        local_a8[9] = SUB81(param_2 >> 8,0);
        local_a8[10] = SUB81(param_2 >> 0x10,0);
        local_a8[0xb] = SUB81(param_2 >> 0x18,0);
        local_a8[0xc] = SUB81(param_2 >> 0x20,0);
        p_Var21 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
        local_a8[0xd] = SUB81(param_2 >> 0x28,0);
        uVar7 = uVar19 + (uint)p_Var21;
        if (CARRY4(uVar19,(uint)p_Var21)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66e4);
          (*pcVar17)();
        }
        _swift_isUniquelyReferenced_nonNull_native();
        uVar6 = (uint)p_Var25;
        if (((ulong)p_Var25 & 1) == 0) {
          iVar12 = 0;
          if (uVar23 <= uVar7) {
            iVar12 = uVar7 - uVar23;
          }
          FUN_1000d2130();
          FUN_100612358(iVar12,uVar6 & 1);
        }
        FUN_100612380(p_Var21,uVar19);
        FUN_10061258c(local_a8,local_a8 + (long)p_Var21,uVar19);
      }
      else {
        lVar14 = (long)iVar18;
        lVar15 = ((long)param_1 >> 0x20) - lVar14;
        if ((long)param_1 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66e8);
          (*pcVar17)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var21);
        if (p_Var21 != (__DataStorage *)0x0) {
          p_Var25 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var21);
          if (SBORROW8(lVar14,(long)p_Var25)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66f0);
            (*pcVar17)();
          }
          p_Var21 = p_Var21 + (lVar14 - (long)p_Var25);
          goto LAB_1009b63b4;
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_1009b6438:
        p_Var21 = (__DataStorage *)0x0;
        p_Var25 = (__DataStorage *)0x0;
LAB_1009b6444:
        FUN_1006124ec(p_Var21,p_Var25,uVar19);
      }
    }
    else {
      if (uVar7 == 2) {
        lVar14 = *(long *)(param_1 + 0x10);
        lVar9 = *(long *)(param_1 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var21);
        p_Var25 = (__DataStorage *)0x0;
        if (p_Var21 != (__DataStorage *)0x0) {
          p_Var25 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var21);
          if (SBORROW8(lVar14,(long)p_Var25)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66ec);
            (*pcVar17)();
          }
          p_Var21 = p_Var21 + (lVar14 - (long)p_Var25);
        }
        lVar15 = lVar9 - lVar14;
        if (SBORROW8(lVar9,lVar14)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b6380);
          (*pcVar17)();
        }
LAB_1009b63b4:
        lVar14 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var25);
        if (p_Var21 == (__DataStorage *)0x0) goto LAB_1009b6438;
        if (lVar15 <= lVar14) {
          lVar14 = lVar15;
        }
        p_Var25 = p_Var21 + lVar14;
        goto LAB_1009b6444;
      }
      local_a8[8] = (__DataStorage)0x0;
      local_a8[9] = (__DataStorage)0x0;
      local_a8[10] = (__DataStorage)0x0;
      local_a8[0xb] = (__DataStorage)0x0;
      local_a8[0xc] = (__DataStorage)0x0;
      local_a8[0xd] = (__DataStorage)0x0;
      local_a8[0] = (__DataStorage)0x0;
      local_a8[1] = (__DataStorage)0x0;
      local_a8[2] = (__DataStorage)0x0;
      local_a8[3] = (__DataStorage)0x0;
      local_a8[4] = (__DataStorage)0x0;
      local_a8[5] = (__DataStorage)0x0;
      local_a8[6] = (__DataStorage)0x0;
      local_a8[7] = (__DataStorage)0x0;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = (uint)p_Var25;
      if (((ulong)p_Var25 & 1) == 0) {
        iVar12 = 0;
        if (uVar23 <= uVar19) {
          iVar12 = uVar19 - uVar23;
        }
        FUN_1000d2130();
        FUN_100612358(iVar12,uVar7 & 1);
      }
      FUN_100612380(0,uVar19);
      FUN_10061258c(local_a8,local_a8,uVar19);
      p_Var21 = (__DataStorage *)0x0;
    }
    p_Var25 = local_80;
    if (CARRY4(local_74,(uint)p_Var21)) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66d8);
      (*pcVar17)();
    }
    lVar14 = *(long *)(unaff_x20 + 0x50);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b6700);
      (*pcVar17)();
    }
    uVar4 = CONCAT16(local_6a,CONCAT24(local_6c,local_70));
    uVar22 = CONCAT44(local_74 + (uint)p_Var21,local_78);
    _swift_retain(lVar14);
    FUN_1009b1754(p_Var25,uVar22,(ulong)uVar4);
    _swift_release(lVar14);
    lVar14 = *(long *)(unaff_x20 + 0x50);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b6704);
      (*pcVar17)();
    }
    _swift_retain(lVar14);
    FUN_100629938();
    FUN_10003bf18(param_1,param_2);
    _swift_release(p_Var25);
    _swift_release(lVar14);
  }
  NVar5 = Network::NWError::typeMetadataAccessor();
  lVar9 = CONCAT71(extraout_var,NVar5.value);
  lVar26 = *(long *)(lVar9 + -8);
  p_Var25 = local_a8 + (-8 - (*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar10 = &DAT_100ff2708;
  FUN_1000f7830(&DAT_100ff2708,&DAT_100c8b7d8);
  lVar15 = (long)p_Var25 - (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(local_b0,lVar15,&DAT_100ff2708,&DAT_100c8b7d8);
  lVar14 = lVar15;
  (**(code **)(lVar26 + 0x30))(lVar15,1,lVar9);
  if ((int)lVar14 == 1) {
    FUN_1000fb4c4(lVar15,&DAT_100ff2708,&DAT_100c8b7d8);
  }
  else {
    p_Var21 = p_Var25;
    (**(code **)(lVar26 + 0x20))(p_Var25,lVar15,lVar9);
    lVar14 = *(long *)(unaff_x20 + 0x50);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66f8);
      (*pcVar17)();
    }
    FUN_1009a8044();
    lVar15 = lVar9;
    p_Var11 = p_Var21;
    _swift_allocError(lVar9,p_Var21,0,0);
    pcVar17 = *(code **)(lVar26 + 0x10);
    (*pcVar17)(p_Var11,p_Var25,lVar9);
    _swift_retain(lVar14);
    FUN_100629c10(lVar15);
    _swift_release(lVar14);
    _swift_errorRelease(lVar15);
    lVar14 = lVar9;
    _swift_allocError(lVar9,p_Var21,0,0);
    (*pcVar17)(p_Var21,p_Var25,lVar9);
    FUN_1009ae784(lVar14,2,0);
    (**(code **)(lVar26 + 8))(p_Var25,lVar9);
    _swift_errorRelease(lVar14);
  }
  _swift_beginAccess(unaff_x20 + 0xa9,&local_80,0,0);
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    lVar14 = *(long *)(unaff_x20 + 0x50);
    if (lVar14 == 0) {
                    /* WARNING: Does not return */
      pcVar17 = (code *)SoftwareBreakpoint(1,0x1009b66fc);
      (*pcVar17)();
    }
    _swift_retain(lVar14);
    FUN_100627440();
    _swift_release(lVar14);
  }
LAB_1009b6694:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009b6704 | FUN_1009b6704 */

void FUN_1009b6704(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x2f);
  return;
}



/* Address: 0x1009b6714 | FUN_1009b6714 */

void FUN_1009b6714(void)

{
  long unaff_x20;
  
  FUN_1009b586c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18);
  return;
}



/* Address: 0x1009b6720 | FUN_1009b6720 */

void FUN_1009b6720(void)

{
  long unaff_x20;
  
  FUN_1009b304c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009b6728 | FUN_1009b6728 */

void FUN_1009b6728(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b2ac4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009b6734 | FUN_1009b6734 */

void FUN_1009b6734(long param_1)

{
  if (param_1 == 1) {
    return;
  }
  FUN_1009b5c4c();
  return;
}



/* Address: 0x1009b6744 | FUN_1009b6744 */

void FUN_1009b6744(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b6768 | FUN_1009b6768 */

void FUN_1009b6768(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b3dbc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b6770 | FUN_1009b6770 */

void FUN_1009b6770(void)

{
  FUN_1009b2180();
  return;
}



/* Address: 0x1009b6790 | thunk_FUN_1009b26bc */

void thunk_FUN_1009b26bc(undefined8 param_1)

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



/* Address: 0x1009b6794 | FUN_1009b6794 */

void FUN_1009b6794(void)

{
  FUN_1009b362c();
  return;
}



/* Address: 0x1009b67ac | FUN_1009b67ac */

void FUN_1009b67ac(void)

{
  FUN_1009b36fc();
  return;
}



/* Address: 0x1009b67c4 | FUN_1009b67c4 */

void FUN_1009b67c4(void)

{
  FUN_1009b37ec();
  return;
}



/* Address: 0x1009b67dc | FUN_1009b67dc */

void FUN_1009b67dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_1009b67e8(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x1009b67e8 | FUN_1009b67e8 */

void FUN_1009b67e8(byte *param_1,ulong param_2,uint param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  code *pcVar5;
  NWError NVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined7 extraout_var;
  undefined *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  int iVar14;
  long unaff_x20;
  long lVar15;
  long lVar16;
  byte bVar17;
  int iVar18;
  undefined1 *puVar19;
  uint uVar20;
  undefined4 uVar21;
  __DataStorage *p_Var22;
  undefined8 uVar23;
  uint uVar24;
  undefined2 uVar25;
  __DataStorage *p_Var26;
  long lVar27;
  undefined1 auStack_c0 [12];
  uint local_b4;
  undefined8 local_b0;
  __DataStorage local_a8 [16];
  undefined1 auStack_98 [24];
  __DataStorage *local_80;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  undefined2 local_6c;
  byte local_6a;
  long local_68;
  long lVar10;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(char *)(unaff_x20 + 0xb1) != '\x01') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dc4);
    (*pcVar5)();
  }
  *(undefined1 *)(unaff_x20 + 0xb1) = 0;
  pbVar9 = param_1;
  (**(code **)(**(long **)(unaff_x20 + 0xa8) + 0x88))();
  if ((*pbVar9 & 1) == 0) goto LAB_1009b6d88;
  local_b0 = param_4;
  if (param_2 >> 0x3c < 0xf) {
    uVar23 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar20 = (uint)(param_2 >> 0x20);
    uVar8 = uVar20 >> 0x1e;
    iVar18 = (int)param_1;
    iVar14 = (int)((ulong)param_1 >> 0x20);
    local_b4 = param_3;
    if (uVar20 >> 0x1e < 2) {
      if (uVar8 == 0) {
        p_Var26 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
      }
      else {
        if (SBORROW4(iVar14,iVar18)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dd4);
          (*pcVar5)();
        }
        p_Var26 = (__DataStorage *)(long)(iVar14 - iVar18);
LAB_1009b68b0:
        pbVar9 = param_1;
        FUN_1001037b4(param_1,param_2);
        if ((long)p_Var26 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dc8);
          (*pcVar5)();
        }
      }
      if (p_Var26 == (__DataStorage *)0x0) goto LAB_1009b6914;
      if ((ulong)p_Var26 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dd0);
        (*pcVar5)();
      }
      FUN_100488140(p_Var26,uVar23,uVar2,uVar1,uVar3);
      p_Var22 = p_Var26 + 0x10;
      _swift_beginAccess(p_Var22,auStack_98,0,0);
      uVar21 = 0;
      uVar20 = 0;
      uVar25 = 0;
      bVar17 = 0;
      uVar24 = *(uint *)(p_Var26 + 0x10);
    }
    else {
      if (uVar8 == 2) {
        p_Var26 = (__DataStorage *)(*(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10));
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b68a0);
          (*pcVar5)();
        }
        goto LAB_1009b68b0;
      }
LAB_1009b6914:
      FUN_1006116e8();
      p_Var26 = *(__DataStorage **)pbVar9;
      uVar21 = *(undefined4 *)(pbVar9 + 8);
      uVar20 = *(uint *)(pbVar9 + 0xc);
      uVar24 = *(uint *)(pbVar9 + 0x10);
      uVar25 = *(undefined2 *)(pbVar9 + 0x14);
      bVar17 = pbVar9[0x16];
      p_Var22 = p_Var26;
      _swift_retain();
    }
    param_3 = local_b4;
    local_80 = p_Var26;
    local_78 = uVar21;
    local_74 = uVar20;
    local_70 = uVar24;
    local_6c = uVar25;
    local_6a = bVar17;
    if (uVar8 < 2) {
      if (uVar8 == 0) {
        local_a8[0] = SUB81(param_1,0);
        local_a8[1] = SUB81((ulong)param_1 >> 8,0);
        local_a8[2] = SUB81((ulong)param_1 >> 0x10,0);
        local_a8[3] = SUB81((ulong)param_1 >> 0x18,0);
        local_a8[4] = SUB81((ulong)param_1 >> 0x20,0);
        local_a8[5] = SUB81((ulong)param_1 >> 0x28,0);
        local_a8[6] = SUB81((ulong)param_1 >> 0x30,0);
        local_a8[7] = SUB81((ulong)param_1 >> 0x38,0);
        local_a8[8] = SUB81(param_2,0);
        local_a8[9] = SUB81(param_2 >> 8,0);
        local_a8[10] = SUB81(param_2 >> 0x10,0);
        local_a8[0xb] = SUB81(param_2 >> 0x18,0);
        local_a8[0xc] = SUB81(param_2 >> 0x20,0);
        p_Var22 = (__DataStorage *)(param_2 >> 0x30 & 0xff);
        local_a8[0xd] = SUB81(param_2 >> 0x28,0);
        uVar8 = uVar20 + (uint)p_Var22;
        if (CARRY4(uVar20,(uint)p_Var22)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dd8);
          (*pcVar5)();
        }
        _swift_isUniquelyReferenced_nonNull_native();
        uVar7 = (uint)p_Var26;
        if (((ulong)p_Var26 & 1) == 0) {
          iVar14 = 0;
          if (uVar24 <= uVar8) {
            iVar14 = uVar8 - uVar24;
          }
          FUN_1000d2130();
          FUN_100612358(iVar14,uVar7 & 1);
        }
        FUN_100612380(p_Var22,uVar20);
        FUN_10061258c(local_a8,local_a8 + (long)p_Var22,uVar20);
      }
      else {
        lVar15 = (long)iVar18;
        lVar16 = ((long)param_1 >> 0x20) - lVar15;
        if ((long)param_1 >> 0x20 < lVar15) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6ddc);
          (*pcVar5)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var22);
        if (p_Var22 != (__DataStorage *)0x0) {
          p_Var26 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var22);
          if (SBORROW8(lVar15,(long)p_Var26)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6de4);
            (*pcVar5)();
          }
          p_Var22 = p_Var22 + (lVar15 - (long)p_Var26);
          goto LAB_1009b6a8c;
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_1009b6b1c:
        p_Var22 = (__DataStorage *)0x0;
        p_Var26 = (__DataStorage *)0x0;
LAB_1009b6b28:
        param_3 = local_b4;
        FUN_1006124ec(p_Var22,p_Var26,uVar20);
      }
    }
    else {
      if (uVar8 == 2) {
        lVar15 = *(long *)(param_1 + 0x10);
        lVar10 = *(long *)(param_1 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var22);
        p_Var26 = (__DataStorage *)0x0;
        if (p_Var22 != (__DataStorage *)0x0) {
          p_Var26 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var22);
          if (SBORROW8(lVar15,(long)p_Var26)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6de0);
            (*pcVar5)();
          }
          p_Var22 = p_Var22 + (lVar15 - (long)p_Var26);
        }
        lVar16 = lVar10 - lVar15;
        if (SBORROW8(lVar10,lVar15)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6a58);
          (*pcVar5)();
        }
LAB_1009b6a8c:
        lVar15 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var26);
        if (p_Var22 == (__DataStorage *)0x0) goto LAB_1009b6b1c;
        if (lVar16 <= lVar15) {
          lVar15 = lVar16;
        }
        p_Var26 = p_Var22 + lVar15;
        goto LAB_1009b6b28;
      }
      local_a8[8] = (__DataStorage)0x0;
      local_a8[9] = (__DataStorage)0x0;
      local_a8[10] = (__DataStorage)0x0;
      local_a8[0xb] = (__DataStorage)0x0;
      local_a8[0xc] = (__DataStorage)0x0;
      local_a8[0xd] = (__DataStorage)0x0;
      local_a8[0] = (__DataStorage)0x0;
      local_a8[1] = (__DataStorage)0x0;
      local_a8[2] = (__DataStorage)0x0;
      local_a8[3] = (__DataStorage)0x0;
      local_a8[4] = (__DataStorage)0x0;
      local_a8[5] = (__DataStorage)0x0;
      local_a8[6] = (__DataStorage)0x0;
      local_a8[7] = (__DataStorage)0x0;
      _swift_isUniquelyReferenced_nonNull_native();
      param_3 = local_b4;
      uVar8 = (uint)p_Var26;
      if (((ulong)p_Var26 & 1) == 0) {
        iVar14 = 0;
        if (uVar24 <= uVar20) {
          iVar14 = uVar20 - uVar24;
        }
        FUN_1000d2130();
        FUN_100612358(iVar14,uVar8 & 1);
      }
      FUN_100612380(0,uVar20);
      FUN_10061258c(local_a8,local_a8,uVar20);
      p_Var22 = (__DataStorage *)0x0;
    }
    p_Var26 = local_80;
    if (CARRY4(local_74,(uint)p_Var22)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dcc);
      (*pcVar5)();
    }
    lVar15 = *(long *)(unaff_x20 + 0x48);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6df4);
      (*pcVar5)();
    }
    uVar4 = CONCAT16(local_6a,CONCAT24(local_6c,local_70));
    uVar23 = CONCAT44(local_74 + (uint)p_Var22,local_78);
    _swift_retain(lVar15);
    FUN_1009b1754(p_Var26,uVar23,(ulong)uVar4);
    _swift_release(lVar15);
    lVar15 = *(long *)(unaff_x20 + 0x48);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6df8);
      (*pcVar5)();
    }
    _swift_retain(lVar15);
    FUN_100629938();
    FUN_10003bf18(param_1,param_2);
    _swift_release(p_Var26);
    _swift_release(lVar15);
  }
  NVar6 = Network::NWError::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,NVar6.value);
  lVar27 = *(long *)(lVar10 + -8);
  puVar19 = auStack_c0 + -(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100ff2708;
  FUN_1000f7830(&DAT_100ff2708,&DAT_100c8b7d8);
  lVar16 = (long)puVar19 - (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(local_b0,lVar16,&DAT_100ff2708,&DAT_100c8b7d8);
  lVar15 = lVar16;
  (**(code **)(lVar27 + 0x30))(lVar16,1,lVar10);
  if ((int)lVar15 == 1) {
    FUN_1000fb4c4(lVar16,&DAT_100ff2708,&DAT_100c8b7d8);
    if ((param_3 & 1) != 0) {
      FUN_1009b4450();
    }
  }
  else {
    puVar12 = puVar19;
    (**(code **)(lVar27 + 0x20))(puVar19,lVar16,lVar10);
    lVar15 = *(long *)(unaff_x20 + 0x48);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6dec);
      (*pcVar5)();
    }
    FUN_1009a8044();
    lVar16 = lVar10;
    puVar13 = puVar12;
    _swift_allocError(lVar10,puVar12,0,0);
    pcVar5 = *(code **)(lVar27 + 0x10);
    (*pcVar5)(puVar13,puVar19,lVar10);
    _swift_retain(lVar15);
    FUN_100629c10(lVar16);
    _swift_release(lVar15);
    _swift_errorRelease(lVar16);
    lVar15 = lVar10;
    _swift_allocError(lVar10,puVar12,0,0);
    (*pcVar5)(puVar12,puVar19,lVar10);
    FUN_1009aeb18(lVar15,2,0);
    (**(code **)(lVar27 + 8))(puVar19,lVar10);
    _swift_errorRelease(lVar15);
  }
  _swift_beginAccess(unaff_x20 + 0xb2,&local_80,0,0);
  if (*(char *)(unaff_x20 + 0xb2) == '\x01') {
    lVar15 = *(long *)(unaff_x20 + 0x48);
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009b6df0);
      (*pcVar5)();
    }
    _swift_retain(lVar15);
    FUN_100627440();
    _swift_release(lVar15);
  }
LAB_1009b6d88:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009b6df8 | FUN_1009b6df8 */

void FUN_1009b6df8(void)

{
  long unaff_x20;
  
  FUN_1009b3304(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009b6e00 | FUN_1009b6e00 */

void FUN_1009b6e00(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x28);
  return;
}



/* Address: 0x1009b6e10 | FUN_1009b6e10 */

void FUN_1009b6e10(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b2d88(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009b6e1c | FUN_1009b6e1c */

void FUN_1009b6e1c(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x20);
  return;
}



/* Address: 0x1009b6e2c | FUN_1009b6e2c */

void FUN_1009b6e2c(void)

{
  long unaff_x20;
  
  FUN_1009b58c8(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_100991a3c);
  return;
}



/* Address: 0x1009b6e50 | FUN_1009b6e50 */

void FUN_1009b6e50(void)

{
  long unaff_x20;
  
  FUN_1009b58c8(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,FUN_100983480);
  return;
}



/* Address: 0x1009b6e74 | FUN_1009b6e74 */

void FUN_1009b6e74(void)

{
  FUN_1009b21e0();
  return;
}



/* Address: 0x1009b6e9c | FUN_1009b6e9c */

void FUN_1009b6e9c(void)

{
  FUN_1009b2180();
  return;
}



/* Address: 0x1009b6ebc | FUN_1009b6ebc */

void FUN_1009b6ebc(void)

{
  FUN_1009b21e0();
  return;
}



/* Address: 0x1009b6ee4 | FUN_1009b6ee4 */

void FUN_1009b6ee4(void)

{
  FUN_1009b5c78();
  return;
}



/* Address: 0x1009b6ef8 | thunk_FUN_1009b2398 */

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



/* Address: 0x1009b6efc | thunk_FUN_1009b5c98 */

void thunk_FUN_1009b5c98(void)

{
  FUN_1009b35bc();
  return;
}



/* Address: 0x1009b6f00 | thunk_FUN_1009b5cb0 */

void thunk_FUN_1009b5cb0(void)

{
  FUN_1009b369c();
  return;
}



/* Address: 0x1009b6f04 | thunk_FUN_1009b5cc8 */

void thunk_FUN_1009b5cc8(void)

{
  FUN_1009b375c();
  return;
}



/* Address: 0x1009b6f08 | thunk_FUN_1009b26bc */

void thunk_FUN_1009b26bc(undefined8 param_1)

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



/* Address: 0x1009b6f0c | thunk_FUN_1009b6794 */

void thunk_FUN_1009b6794(void)

{
  FUN_1009b362c();
  return;
}



/* Address: 0x1009b6f10 | thunk_FUN_1009b67ac */

void thunk_FUN_1009b67ac(void)

{
  FUN_1009b36fc();
  return;
}



/* Address: 0x1009b6f14 | thunk_FUN_1009b67c4 */

void thunk_FUN_1009b67c4(void)

{
  FUN_1009b37ec();
  return;
}



/* Address: 0x1009b6f18 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f1c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f20 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f24 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f28 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f2c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f30 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f34 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f38 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f3c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f40 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f44 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f48 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f4c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f50 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f54 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f58 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f5c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f60 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f64 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f68 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f6c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f70 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f74 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f78 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f7c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f80 | thunk_FUN_1009b6e00 */

void thunk_FUN_1009b6e00(void)

{
  FUN_1009b6e00();
  return;
}



/* Address: 0x1009b6f84 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f88 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f8c | thunk_FUN_1009b6e1c */

void thunk_FUN_1009b6e1c(void)

{
  FUN_1009b6e1c();
  return;
}



/* Address: 0x1009b6f90 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}


