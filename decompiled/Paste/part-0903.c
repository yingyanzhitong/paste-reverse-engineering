/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009b6f94 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f98 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6f9c | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fa0 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fa4 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fa8 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fac | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fb0 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fb4 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fb8 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fbc | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fc0 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fc4 | thunk_FUN_1009b5c20 */

void thunk_FUN_1009b5c20(void)

{
  FUN_1009b5c20();
  return;
}



/* Address: 0x1009b6fc8 | thunk_FUN_1009b6e9c */

void thunk_FUN_1009b6e9c(void)

{
  FUN_1009b2180();
  return;
}



/* Address: 0x1009b6fcc | FUN_1009b6fcc */

void FUN_1009b6fcc(int *param_1,int param_2)

{
  Options *unaff_x20;
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = (int)((ulong)param_1 >> 0x20);
  if (iVar1 == 0xffff) {
    if ((ulong)param_1 >> 0x20 == 8) {
      Network::NWProtocolTCP::Options::set_enableKeepalive(unaff_x20,param_2 != 0);
      return;
    }
  }
  else if (iVar1 == 6) {
    if (iVar2 < 0x20) {
      if (iVar2 < 4) {
        if (iVar2 == 1) {
          Network::NWProtocolTCP::Options::set_noDelay(unaff_x20,param_2 != 0);
          return;
        }
        if (iVar2 == 2) {
          Network::NWProtocolTCP::Options::set_maximumSegmentSize(unaff_x20,(long)param_2);
          return;
        }
      }
      else {
        if (iVar2 == 4) {
          Network::NWProtocolTCP::Options::set_noPush(unaff_x20,param_2 != 0);
          return;
        }
        if (iVar2 == 8) {
          Network::NWProtocolTCP::Options::set_noOptions(unaff_x20,param_2 != 0);
          return;
        }
        if (iVar2 == 0x10) {
          Network::NWProtocolTCP::Options::set_keepaliveIdle(unaff_x20,(long)param_2);
          return;
        }
      }
    }
    else if (iVar2 < 0x101) {
      if (iVar2 == 0x20) {
        Network::NWProtocolTCP::Options::set_connectionTimeout(unaff_x20,(long)param_2);
        return;
      }
      if (iVar2 == 0x80) {
        Network::NWProtocolTCP::Options::set_connectionDropTime(unaff_x20,(long)param_2);
        return;
      }
      if (iVar2 == 0x100) {
        Network::NWProtocolTCP::Options::set_retransmitFinDrop(unaff_x20,param_2 != 0);
        return;
      }
    }
    else {
      if (iVar2 == 0x101) {
        Network::NWProtocolTCP::Options::set_keepaliveInterval(unaff_x20,(long)param_2);
        return;
      }
      if (iVar2 == 0x102) {
        Network::NWProtocolTCP::Options::set_keepaliveCount(unaff_x20,(long)param_2);
        return;
      }
      if (iVar2 == 0x103) {
        Network::NWProtocolTCP::Options::set_disableAckStretching(unaff_x20,param_2 != 0);
        return;
      }
    }
  }
  FUN_100991fb0();
  _swift_allocError(&DAT_100f21af0,param_1,0,0);
  *param_1 = iVar1;
  param_1[1] = iVar2;
  _swift_willThrow();
  return;
}



/* Address: 0x1009b715c | FUN_1009b715c */

void FUN_1009b715c(Options *param_1)

{
  code *pcVar1;
  __int64 _Var2;
  Options *unaff_x20;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_1;
  iVar4 = (int)((ulong)param_1 >> 0x20);
  if (iVar3 == 0xffff) {
    if ((ulong)param_1 >> 0x20 == 8) {
      Network::NWProtocolTCP::Options::get_enableKeepalive(unaff_x20,param_1);
      return;
    }
  }
  else if (iVar3 == 6) {
    if (iVar4 < 0x20) {
      if (iVar4 < 4) {
        if (iVar4 == 1) {
          Network::NWProtocolTCP::Options::get_noDelay(unaff_x20,param_1);
          return;
        }
        if (iVar4 == 2) {
          _Var2 = Network::NWProtocolTCP::Options::get_maximumSegmentSize(unaff_x20,param_1);
          if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b733c);
            (*pcVar1)();
          }
          if (_Var2 < 0x80000000) {
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7260);
          (*pcVar1)();
        }
      }
      else {
        if (iVar4 == 4) {
          Network::NWProtocolTCP::Options::get_noPush(unaff_x20,param_1);
          return;
        }
        if (iVar4 == 8) {
          Network::NWProtocolTCP::Options::get_noOptions(unaff_x20,param_1);
          return;
        }
        if (iVar4 == 0x10) {
          _Var2 = Network::NWProtocolTCP::Options::get_keepaliveIdle(unaff_x20,param_1);
          if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7348);
            (*pcVar1)();
          }
          if (_Var2 < 0x80000000) {
            return;
          }
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7210);
          (*pcVar1)();
        }
      }
    }
    else if (iVar4 < 0x101) {
      if (iVar4 == 0x20) {
        _Var2 = Network::NWProtocolTCP::Options::get_connectionTimeout(unaff_x20,param_1);
        if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b734c);
          (*pcVar1)();
        }
        if (_Var2 < 0x80000000) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7308);
        (*pcVar1)();
      }
      if (iVar4 == 0x80) {
        _Var2 = Network::NWProtocolTCP::Options::get_connectionDropTime(unaff_x20,param_1);
        if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7340);
          (*pcVar1)();
        }
        if (_Var2 < 0x80000000) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b72c0);
        (*pcVar1)();
      }
      if (iVar4 == 0x100) {
        Network::NWProtocolTCP::Options::get_retransmitFinDrop(unaff_x20,param_1);
        return;
      }
    }
    else {
      if (iVar4 == 0x101) {
        _Var2 = Network::NWProtocolTCP::Options::get_keepaliveInterval(unaff_x20,param_1);
        if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7350);
          (*pcVar1)();
        }
        if (_Var2 < 0x80000000) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7354);
        (*pcVar1)();
      }
      if (iVar4 == 0x102) {
        _Var2 = Network::NWProtocolTCP::Options::get_keepaliveCount(unaff_x20,param_1);
        if (_Var2 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7344);
          (*pcVar1)();
        }
        if (_Var2 < 0x80000000) {
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b72e0);
        (*pcVar1)();
      }
      if (iVar4 == 0x103) {
        Network::NWProtocolTCP::Options::get_disableAckStretching(unaff_x20,param_1);
        return;
      }
    }
  }
  FUN_100991fb0();
  _swift_allocError(&DAT_100f21af0,param_1,0,0);
  *(int *)param_1 = iVar3;
  *(int *)(param_1 + 4) = iVar4;
  _swift_willThrow();
  return;
}



/* Address: 0x1009b7354 | FUN_1009b7354 */

void FUN_1009b7354(void)

{
  FUN_1009b6fcc();
  return;
}



/* Address: 0x1009b7374 | FUN_1009b7374 */

void FUN_1009b7374(void)

{
  FUN_1009b715c();
  return;
}



/* Address: 0x1009b7394 | FUN_1009b7394 */

void FUN_1009b7394(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1;
  FUN_100991fb0();
  _swift_allocError(&DAT_100f21af0,puVar1,0,0);
  *puVar1 = param_1;
  _swift_willThrow();
  return;
}



/* Address: 0x1009b73e0 | FUN_1009b73e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1009b73e0(Data param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  NSData *pNVar1;
  ID IVar2;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_retain();
  FUN_1009b8ea8();
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  FUN_10003bf2c(param_1.unknown,param_2);
  local_60 = 0;
  IVar2 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar1,param_4,&local_60);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009b7510 | FUN_1009b7510 */

void FUN_1009b7510(void)

{
  FUN_1009b7524();
  return;
}



/* Address: 0x1009b7524 | FUN_1009b7524 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009b7524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  Result RVar2;
  Optional OVar3;
  Date DVar4;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  ID self;
  undefined *puVar8;
  Date DVar9;
  NSDate *pNVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long *unaff_x20;
  long lVar16;
  code *pcVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  undefined8 local_d0;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lVar5;
  long lVar6;
  
  lVar19 = *unaff_x20;
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar4.unknown + -8);
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar20 = (undefined *)((long)&local_d0 - uVar12);
  lVar21 = (long)puVar20 - uVar12;
  local_d0 = *(undefined8 *)(lVar19 + 0x50);
  FUN_1000f8b08(&DAT_100ff2748,&DAT_100c8b8c0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var_00,OVar3.value);
  lVar13 = *(long *)(lVar6 + -8);
  uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = lVar21 - uVar12;
  lVar16 = lVar18 - uVar12;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar19 + 0x60));
  uVar7 = *puVar1;
  lVar19 = puVar1[1];
  _swift_getObjectType(uVar7);
  (**(code **)(lVar19 + 0x68))(param_3,param_4,param_5,param_6,uVar7,lVar19);
  self = objc_stub::FUN_100c007a0((ID)&_OBJC_CLASS___NSRunLoop);
  lVar14 = *(long *)(lVar5 + -8);
  (**(code **)(lVar14 + 0x38))(lVar16,1,1,lVar5);
  FUN_10066ecf8(0,lVar6);
  lVar19 = lVar16;
  FUN_10066e7bc();
  pcVar15 = *(code **)(lVar13 + 8);
  (*pcVar15)(lVar16,lVar6);
  puVar8 = &DAT_100f24c10;
  _swift_allocObject(&DAT_100f24c10,0x20,7);
  uVar7 = local_d0;
  *(undefined8 *)(puVar8 + 0x10) = local_d0;
  *(long *)(puVar8 + 0x18) = lVar19;
  _swift_retain(lVar19);
  FUN_100646e1c(FUN_1009b7b0c,puVar8);
  _swift_release(puVar8);
  while( true ) {
    local_70 = uVar7;
    FUN_10066ed6c(lVar18,FUN_1009b7b14,auStack_80,lVar19,lVar6,lVar6);
    lVar13 = lVar18;
    (**(code **)(lVar14 + 0x30))(lVar18,1,lVar5);
    (*pcVar15)(lVar18,lVar6);
    if ((int)lVar13 != 1) break;
    DVar9 = Foundation::Date::init();
    Foundation::Date::addingTimeInterval(0.01,DVar9);
    pcVar17 = *(code **)(lVar11 + 8);
    DVar9.unknown = puVar20;
    (*pcVar17)(puVar20,DVar4.unknown);
    pNVar10 = Foundation::Date::_bridgeToObjectiveC(DVar9);
    (*pcVar17)(lVar21,DVar4.unknown);
    objc_stub::FUN_100c09800(self,param_2,pNVar10);
  }
  local_70 = uVar7;
  FUN_10066ed6c(param_1,FUN_1009b7b2c,auStack_80,lVar19,lVar6,uVar7);
  _swift_release(lVar19);
  return;
}



/* Address: 0x1009b7828 | FUN_1009b7828 */

void FUN_1009b7828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Optional OVar1;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_1;
  FUN_1000f8b08(&DAT_100ff2748,&DAT_100c8b8c0);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_10066ed6c(FUN_1009b7b44,auStack_50,param_2,OVar1.value,
                PTR___type_metadata_for____100eae0c8 + 8);
  return;
}



/* Address: 0x1009b78bc | FUN_1009b78bc */

void FUN_1009b78bc(undefined8 param_1,undefined8 param_2)

{
  Result RVar1;
  Optional OVar2;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long lVar4;
  long lVar3;
  
  FUN_1000f8b08(&DAT_100ff2748,&DAT_100c8b8c0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar1.value);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,OVar2.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var_00,OVar2.value));
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(param_1,param_2,lVar3);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,lVar3);
  return;
}



/* Address: 0x1009b7978 | FUN_1009b7978 */

void FUN_1009b7978(undefined8 param_1,undefined8 param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  FUN_1000f8b08(&DAT_100ff2748,&DAT_100c8b8c0);
  Swift::Result::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))
            (param_1,param_2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1009b79fc | FUN_1009b79fc */

void FUN_1009b79fc(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar5;
  long lVar6;
  undefined1 local_38 [8];
  long lVar4;
  
  FUN_1000f8b08(&DAT_100ff2748,&DAT_100c8b8c0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var_00,OVar3.value) + -8);
  puVar5 = &stack0xffffffffffffffc0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,CONCAT71(extraout_var_00,OVar3.value));
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar5,1,lVar4);
  if ((int)puVar5 != 1) {
    FUN_100628180(param_1,lVar4,local_38);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b7ae8);
  (*pcVar1)();
}



/* Address: 0x1009b7ae8 | FUN_1009b7ae8 */

void FUN_1009b7ae8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b7b0c | FUN_1009b7b0c */

void FUN_1009b7b0c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b7828(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b7b14 | FUN_1009b7b14 */

void FUN_1009b7b14(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b7978(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b7b2c | FUN_1009b7b2c */

void FUN_1009b7b2c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b79fc(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b7b44 | FUN_1009b7b44 */

void FUN_1009b7b44(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b78bc(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b7b5c | FUN_1009b7b5c */

void FUN_1009b7b5c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar3 = *(uint *)((long)unaff_x20 + 0xc);
  uVar5 = param_1;
  FUN_1009b7c7c(uVar2,param_1,2,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  if (uVar5 >> 0x3c < 0xf) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7be0);
      (*pcVar4)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7be4);
      (*pcVar4)();
    }
    uVar1 = uVar2 + (uint)param_1;
    if (CARRY4(uVar2,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7be8);
      (*pcVar4)();
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7bec);
      (*pcVar4)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1;
  }
  return;
}



/* Address: 0x1009b7bec | FUN_1009b7bec */

void FUN_1009b7bec(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar3 = *(uint *)((long)unaff_x20 + 0xc);
  uVar5 = param_1;
  FUN_1009b7c7c(uVar2,param_1,param_2,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  if (uVar5 >> 0x3c < 0xf) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7c70);
      (*pcVar4)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7c74);
      (*pcVar4)();
    }
    uVar1 = uVar2 + (uint)param_1;
    if (CARRY4(uVar2,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7c78);
      (*pcVar4)();
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b7c7c);
      (*pcVar4)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1;
  }
  return;
}



/* Address: 0x1009b7c7c | FUN_1009b7c7c */

/* WARNING: Type propagation algorithm not settling */

long FUN_1009b7c7c(long param_1,ulong param_2,char param_3,long param_4,ulong param_5,ulong param_6)

{
  bool bVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  Deallocator DVar5;
  undefined7 extraout_var;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uStack_80;
  undefined8 auStack_78 [3];
  
  DVar5 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var,DVar5.value) + -8);
  lVar4 = -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)&uStack_80 + lVar4);
  uVar11 = param_5 & 0xffffffff;
  lVar3 = param_1 - uVar11;
  if (SBORROW8(param_1,uVar11)) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x1009b7e10);
    (*pcVar9)();
  }
  lVar7 = 0;
  if ((-1 < lVar3) && (-1 < (long)param_2)) {
    if ((long)((uint)((int)(param_5 >> 0x20) - (int)param_5) - param_2) < lVar3) {
      lVar7 = 0;
    }
    else {
      if (param_3 == '\0') {
        bVar1 = true;
      }
      else if (param_3 == '\x01') {
        bVar1 = false;
      }
      else {
        bVar1 = param_2 < 0x40001;
      }
      _swift_beginAccess(param_4 + 0x18,auStack_78,0,0);
      lVar7 = *(long *)(param_4 + 0x18) + (param_6 >> 0x18 & 0xffff00) + (param_6 >> 0x30 & 0xff) +
              uVar11 + lVar3;
      if (bVar1) {
        FUN_10046be0c(lVar7,lVar7 + param_2);
      }
      else {
        puVar6 = &DAT_100f24c80;
        _swift_allocObject(&DAT_100f24c80,0x18,7);
        *(long *)(puVar6 + 0x10) = param_4;
        *puVar8 = FUN_1009b7ebc;
        *(undefined **)((long)auStack_78 + lVar4) = puVar6;
        uVar2 = *(undefined4 *)
                 PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
        ;
        pcVar9 = *(code **)(lVar10 + 0x68);
        _swift_unknownObjectRetain(param_4);
        (*pcVar9)(puVar8,uVar2,CONCAT71(extraout_var,DVar5.value));
        FUN_100445398(lVar7,param_2,puVar8);
      }
    }
  }
  return lVar7;
}



/* Address: 0x1009b7e10 | FUN_1009b7e10 */

void FUN_1009b7e10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  FUN_1009b7c7c(param_1,param_2,2,param_3,param_4,param_5 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009b7e28 | FUN_1009b7e28 */

void FUN_1009b7e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_38;
  
  uVar1 = param_3;
  _swift_getObjectType(param_3);
  local_38 = param_3;
  FUN_1006716c8(&local_38,FUN_100004520,0,uVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x1009b7e98 | FUN_1009b7e98 */

void FUN_1009b7e98(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009b7ebc | FUN_1009b7ebc */

void FUN_1009b7ebc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1009b7e28(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009b7ec4 | FUN_1009b7ec4 */

void FUN_1009b7ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5)

{
  FUN_1009b7c7c(param_4 & 0xffffffff,param_1,param_2,param_3,param_4,param_5 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009b7ee4 | FUN_1009b7ee4 */

undefined1  [16]
FUN_1009b7ee4(Encoding param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,ulong param_6)

{
  Encoding EVar1;
  ulong uVar2;
  Encoding EVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  EVar1 = Encoding::_typeMetadataAccessor();
  lVar5 = *(long *)(EVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  FUN_1009b7c7c(param_1.unknown,param_2,2,param_4,param_5,param_6 & 0xffffffffffffff);
  EVar3.unknown = (undefined *)0x0;
  uVar2 = 0;
  if (param_2 >> 0x3c < 0xf) {
    (**(code **)(lVar5 + 0x10))
              (&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_3,EVar1.unknown
              );
    EVar3.unknown = param_1.unknown;
    uVar2 = param_2;
    (extension_Foundation)::Swift::String::_init(param_1);
    FUN_10003bf18(param_1.unknown,param_2);
  }
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = EVar3.unknown;
  return auVar6;
}



/* Address: 0x1009b7fe0 | FUN_1009b7fe0 */

undefined1  [16] FUN_1009b7fe0(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  Encoding EVar5;
  Encoding data;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *unaff_x20;
  long lVar9;
  undefined1 auVar10 [16];
  
  EVar5 = Encoding::_typeMetadataAccessor();
  lVar9 = *(long *)(EVar5.unknown + -8);
  lVar8 = *(long *)(lVar9 + 0x40);
  uVar2 = *(uint *)(unaff_x20 + 1);
  data.unknown = (undefined *)(ulong)uVar2;
  uVar3 = *(uint *)((long)unaff_x20 + 0xc);
  if (((long)(ulong)(uVar3 - uVar2) < (long)param_1) ||
     (uVar6 = param_1,
     FUN_1009b7c7c(data.unknown,param_1,2,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2)),
     0xe < uVar6 >> 0x3c)) {
    EVar5.unknown = (undefined *)0x0;
    uVar7 = 0;
  }
  else {
    (**(code **)(lVar9 + 0x10))
              (&stack0xffffffffffffffa0 + -(lVar8 + 0xfU & 0xfffffffffffffff0),param_2,EVar5.unknown
              );
    EVar5.unknown = data.unknown;
    uVar7 = uVar6;
    (extension_Foundation)::Swift::String::_init(data);
    FUN_10003bf18(data.unknown,uVar6);
    if (uVar7 != 0) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b8110);
        (*pcVar4)();
      }
      uVar1 = uVar2 + (uint)param_1;
      if (CARRY4(uVar2,(uint)param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b8114);
        (*pcVar4)();
      }
      if (uVar3 < uVar1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009b8118);
        (*pcVar4)();
      }
      *(uint *)(unaff_x20 + 1) = uVar1;
    }
  }
  auVar10._8_8_ = uVar7;
  auVar10._0_8_ = EVar5.unknown;
  return auVar10;
}



/* Address: 0x1009b8118 | FUN_1009b8118 */

void FUN_1009b8118(void)

{
  long unaff_x21;
  
  FUN_1009b8150();
  if (unaff_x21 == 0) {
    FUN_100613ae4();
  }
  return;
}



/* Address: 0x1009b8150 | FUN_1009b8150 */

void FUN_1009b8150(undefined8 param_1,undefined8 param_2,Encoding param_3,ulong param_4)

{
  int iVar1;
  long lVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  ulong uVar9;
  ulong *unaff_x20;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined1 local_78 [14];
  undefined2 uStack_6a;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_78[0] = (undefined1)param_1;
  local_78[1] = (undefined1)((ulong)param_1 >> 8);
  local_78[2] = (undefined1)((ulong)param_1 >> 0x10);
  local_78[3] = (undefined1)((ulong)param_1 >> 0x18);
  local_78[4] = (undefined1)((ulong)param_1 >> 0x20);
  local_78[5] = (undefined1)((ulong)param_1 >> 0x28);
  local_78[6] = (undefined1)((ulong)param_1 >> 0x30);
  local_78[7] = (undefined1)((ulong)param_1 >> 0x38);
  local_78[8] = (undefined1)param_2;
  local_78[9] = (undefined1)((ulong)param_2 >> 8);
  local_78[10] = (undefined1)((ulong)param_2 >> 0x10);
  local_78[0xb] = (undefined1)((ulong)param_2 >> 0x18);
  local_78[0xc] = (undefined1)((ulong)param_2 >> 0x20);
  local_78[0xd] = (undefined1)((ulong)param_2 >> 0x28);
  uStack_6a = (undefined2)((ulong)param_2 >> 0x30);
  FUN_1009b8f3c();
  uVar9 = 0;
  (extension_Foundation)::Swift::StringProtocol::_data(param_3,false);
  if (0xe < uVar9 >> 0x3c) {
    FUN_1009b8f7c();
    _swift_allocError(&DAT_100f24d18,param_3.unknown,0,0);
    _swift_willThrow();
    goto LAB_1009b840c;
  }
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b844c);
    (*pcVar3)();
  }
  if (param_4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8450);
    (*pcVar3)();
  }
  uVar5 = (uint)(uVar9 >> 0x20);
  uVar4 = uVar5 >> 0x1e;
  uVar10 = (uint)param_4;
  if (uVar5 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar13 = (long)(int)param_3.unknown;
      lVar12 = ((long)param_3.unknown >> 0x20) - lVar13;
      if ((long)param_3.unknown >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8458);
        (*pcVar3)();
      }
      p_Var8 = (__DataStorage *)param_3.unknown;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),(__DataStorage *)param_3.unknown);
      if (p_Var8 != (__DataStorage *)0x0) {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar13,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8460);
          (*pcVar3)();
        }
        p_Var8 = p_Var8 + (lVar13 - (long)p_Var7);
        goto LAB_1009b8350;
      }
      Foundation::__DataStorage::get__length
                ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),(__DataStorage *)0x0);
      goto LAB_1009b83e4;
    }
    local_78[0] = SUB81(param_3.unknown,0);
    local_78[1] = (undefined1)((ulong)param_3.unknown >> 8);
    local_78[2] = (undefined1)((ulong)param_3.unknown >> 0x10);
    local_78[3] = (undefined1)((ulong)param_3.unknown >> 0x18);
    local_78[4] = (undefined1)((ulong)param_3.unknown >> 0x20);
    local_78[5] = (undefined1)((ulong)param_3.unknown >> 0x28);
    local_78[6] = (undefined1)((ulong)param_3.unknown >> 0x30);
    local_78[7] = (undefined1)((ulong)param_3.unknown >> 0x38);
    local_78[8] = (undefined1)uVar9;
    local_78[9] = (undefined1)(uVar9 >> 8);
    local_78[10] = (undefined1)(uVar9 >> 0x10);
    local_78[0xb] = (undefined1)(uVar9 >> 0x18);
    local_78[0xc] = (undefined1)(uVar9 >> 0x20);
    uVar11 = uVar9 >> 0x30 & 0xff;
    local_78[0xd] = (undefined1)(uVar9 >> 0x28);
    uVar5 = uVar10 + (uint)uVar11;
    if (CARRY4(uVar10,(uint)uVar11)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8454);
      (*pcVar3)();
    }
    uVar6 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar6;
    if ((uVar6 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar5) {
        iVar1 = uVar5 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar4 & 1);
    }
    FUN_100612380(uVar11,param_4);
    FUN_10061258c(local_78,local_78 + uVar11,param_4);
  }
  else {
    if (uVar4 != 2) {
      local_78[8] = 0;
      local_78[9] = 0;
      local_78[10] = 0;
      local_78[0xb] = 0;
      local_78[0xc] = 0;
      local_78[0xd] = 0;
      local_78[0] = 0;
      local_78[1] = 0;
      local_78[2] = 0;
      local_78[3] = 0;
      local_78[4] = 0;
      local_78[5] = 0;
      local_78[6] = 0;
      local_78[7] = 0;
      uVar11 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar5 = (uint)uVar11;
      if ((uVar11 & 1) == 0) {
        iVar1 = 0;
        if ((uint)unaff_x20[2] <= uVar10) {
          iVar1 = uVar10 - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar5 & 1);
      }
      FUN_100612380(0,param_4);
      FUN_10061258c(local_78,local_78,param_4);
      FUN_10003bf18(param_3.unknown,uVar9);
      goto LAB_1009b840c;
    }
    lVar13 = *(long *)(param_3.unknown + 0x10);
    lVar2 = *(long *)(param_3.unknown + 0x18);
    p_Var8 = (__DataStorage *)param_3.unknown;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),(__DataStorage *)param_3.unknown);
    p_Var7 = (__DataStorage *)0x0;
    if (p_Var8 != (__DataStorage *)0x0) {
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),p_Var8);
      if (SBORROW8(lVar13,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b845c);
        (*pcVar3)();
      }
      p_Var8 = p_Var8 + (lVar13 - (long)p_Var7);
    }
    lVar12 = lVar2 - lVar13;
    if (SBORROW8(lVar2,lVar13)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8318);
      (*pcVar3)();
    }
LAB_1009b8350:
    lVar13 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)(uVar9 & 0x3fffffffffffffff),p_Var7);
    if (p_Var8 == (__DataStorage *)0x0) {
LAB_1009b83e4:
      p_Var8 = (__DataStorage *)0x0;
      p_Var7 = (__DataStorage *)0x0;
    }
    else {
      if (lVar12 <= lVar13) {
        lVar13 = lVar12;
      }
      p_Var7 = p_Var8 + lVar13;
    }
    FUN_1006124ec(p_Var8,p_Var7,param_4);
  }
  FUN_10003bf18(param_3.unknown,uVar9);
LAB_1009b840c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1009b8464 | FUN_1009b8464 */

undefined8
FUN_1009b8464(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  uVar3 = param_2;
  FUN_100611728();
  uVar2 = param_1;
  FUN_100487db4(param_1,param_2,uVar1,uVar3,param_3,param_4);
  FUN_10003bf2c(param_1,param_2);
  return uVar2;
}



/* Address: 0x1009b84e8 | FUN_1009b84e8 */

undefined8 FUN_1009b84e8(void)

{
  undefined8 local_38;
  
  Foundation::ContiguousBytes::_withUnsafeBytes();
  FUN_100613ae4(local_38);
  return local_38;
}



/* Address: 0x1009b855c | FUN_1009b855c */

undefined8 FUN_1009b855c(void)

{
  undefined8 local_38;
  
  Foundation::ContiguousBytes::_withUnsafeBytes();
  return local_38;
}



/* Address: 0x1009b85bc | FUN_1009b85bc */

undefined8 FUN_1009b85bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1009b85f0(param_1,*(undefined4 *)(unaff_x20 + 0xc),param_2,param_3);
  FUN_100613ae4();
  return param_1;
}



/* Address: 0x1009b85f0 | FUN_1009b85f0 */

long FUN_1009b85f0(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  Optional OVar4;
  undefined8 uVar5;
  long lVar6;
  undefined7 extraout_var;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_68;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Foundation_DataProtocol_100ea6bd0;
  uVar5 = 0xff;
  local_b8 = param_1;
  local_b0 = param_2;
  local_a8 = param_3;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Foundation_DataProtocol_100ea6bd0,
             PTR___associated_type_descriptor_for_Foundation_DataProtocol_Regions_100ea7758);
  lVar7 = param_4;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar5,puVar1,
             PTR___associated_conformance_descriptor_for_Foundation_DataProtocol_Foundation_DataProtocol_Regions__Swift_BidirectionalCollection_100ea6b88
            );
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0;
  uVar12 = *(undefined8 *)(*(long *)(lVar7 + 8) + 8);
  lVar6 = 0;
  local_c0 = uVar12;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar5,PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0
             ,PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  lVar13 = *(long *)(lVar6 + -8);
  lVar14 = (long)&local_e0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  lVar15 = lVar14 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40) + 0xfU &
                    0xfffffffffffffff0);
  lVar7 = 0;
  _swift_checkMetadataState(0,uVar5);
  lVar10 = lVar15 - (*(long *)(*(long *)(lVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_d8 = lVar10;
  local_d0 = lVar7;
  _swift_getAssociatedTypeWitness
            (0,uVar12,lVar7,puVar1,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_e0 = *(long *)(lVar8 + -8);
  lVar11 = *(long *)(local_e0 + 0x40);
  local_c8 = lVar8;
  Swift::Collection::get_count();
  FUN_1006117fc();
  local_b8 = param_4;
  Foundation::DataProtocol::_get_regions();
  uVar5 = local_c0;
  lVar7 = local_d0;
  Swift::Sequence::_makeIterator();
  lVar8 = local_c8;
  _swift_getAssociatedConformanceWitness
            (uVar5,lVar7,local_c8,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
            );
  lVar7 = 0;
  while( true ) {
    Swift::IteratorProtocol::_next();
    lVar9 = lVar15;
    (**(code **)(lVar13 + 0x30))(lVar15,1,lVar6);
    if ((int)lVar9 == 1) {
      (**(code **)(local_e0 + 8))(lVar10 - (lVar11 + 0xfU & 0xfffffffffffffff0),lVar8);
      return lVar7;
    }
    (**(code **)(lVar13 + 0x20))(lVar14,lVar15,lVar6);
    if (SCARRY8(local_b0,lVar7)) break;
    _swift_getAssociatedConformanceWitness
              (local_b8,local_a8,lVar6,
               PTR___protocol_requirements_base_descriptor_for_Foundation_DataProtocol_100ea6bd0,
               PTR___associated_conformance_descriptor_for_Foundation_DataProtocol_Foundation_DataProtocol_Regions_Swift_Sequence_Element__Foundation_ContiguousBytes_100ea6b80
              );
    Foundation::ContiguousBytes::_withUnsafeBytes();
    (**(code **)(lVar13 + 8))(lVar14,lVar6);
    bVar3 = SCARRY8(lVar7,local_68);
    lVar7 = lVar7 + local_68;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b889c);
      (*pcVar2)();
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b88d8);
  (*pcVar2)();
}



/* Address: 0x1009b88d8 | FUN_1009b88d8 */

void FUN_1009b88d8(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  UUID UVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  tuple16 uuid;
  
  uVar4 = 0;
  uVar2 = param_2;
  FUN_100617d38(param_2,0,param_3,param_4,param_5 & 0xffffffffffffff);
  if ((uVar4 & 0xff) != 1) {
    if (SCARRY8(param_2,8)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009b8a00);
      (*pcVar1)();
    }
    uVar4 = 0;
    FUN_100617d38(param_2 + 8,0,param_3,param_4,param_5 & 0xffffffffffffff);
    if ((uVar4 & 0xff) != 1) {
      uVar5 = uVar2 >> 0x38;
      uuid._8_8_ = uVar2 >> 0x30;
      uuid._ = (char)uVar5;
      uuid._ = (char)(uVar5 >> 8);
      uuid._ = (char)(uVar5 >> 0x10);
      uuid._ = (char)(uVar5 >> 0x18);
      uuid._ = (char)(uVar5 >> 0x20);
      uuid._ = (char)(uVar5 >> 0x28);
      uuid._ = (char)(uVar5 >> 0x30);
      uuid._ = (char)(uVar5 >> 0x38);
      Foundation::UUID::init(uuid);
      uVar6 = 0;
      goto LAB_1009b89c4;
    }
  }
  uVar6 = 1;
LAB_1009b89c4:
  UVar3 = Foundation::UUID::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001009b89f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x38))(param_1,uVar6,1,UVar3.unknown);
  return;
}



/* Address: 0x1009b8a00 | FUN_1009b8a00 */

undefined8 FUN_1009b8a00(UUID param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *unaff_x20;
  uint uVar7;
  tuple16 tVar8;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  tVar8 = Foundation::UUID::get_uuid(param_1);
  uVar6 = tVar8._8_8_;
  local_50 = tVar8._0_8_;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8b44);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8b48);
    (*pcVar3)();
  }
  uVar7 = (uint)param_2;
  uVar1 = uVar7 + 8;
  if (0xfffffff7 < uVar7) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8b4c);
    (*pcVar3)();
  }
  uVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) {
    iVar2 = 0;
    if ((uint)unaff_x20[2] <= uVar1) {
      iVar2 = uVar1 - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar2,uVar4 & 1);
  }
  FUN_100612380(8,param_2);
  FUN_10061258c(&local_50,&local_48,param_2);
  local_50 = uVar6;
  if (param_2 < 0xfffffff8) {
    if (0xfffffff7 < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8b54);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      iVar2 = 0;
      if ((uint)unaff_x20[2] <= uVar7 + 0x10) {
        iVar2 = (uVar7 + 0x10) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,uVar4 & 1);
    }
    FUN_100612380(8,uVar1);
    FUN_10061258c(&local_50,&local_48,uVar1);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
      return 0x10;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009b8b50);
  (*pcVar3)();
}



/* Address: 0x1009b8b58 | FUN_1009b8b58 */

void FUN_1009b8b58(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  UUID UVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  puVar3 = &DAT_100ff2760;
  FUN_1000f7830(&DAT_100ff2760,&DAT_100c8b8d0);
  puVar7 = &stack0xffffffffffffffa0 +
           -(*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  FUN_1009b88d8(puVar7,uVar1,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  puVar5 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,UVar4.unknown);
  if ((int)puVar5 == 1) {
    FUN_1009b8fbc(puVar7);
    uVar6 = 1;
  }
  else {
    pcVar10 = *(code **)(lVar9 + 0x20);
    (*pcVar10)(lVar8,puVar7,UVar4.unknown);
    if (0xffffffef < uVar1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009b8c9c);
      (*pcVar10)();
    }
    if (uVar2 < uVar1 + 0x10) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009b8ca0);
      (*pcVar10)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1 + 0x10;
    (*pcVar10)(param_1,lVar8,UVar4.unknown);
    uVar6 = 0;
  }
  (**(code **)(lVar9 + 0x38))(param_1,uVar6,1,UVar4.unknown);
  return;
}



/* Address: 0x1009b8ca0 | FUN_1009b8ca0 */

undefined8 FUN_1009b8ca0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009b8a00(param_1,*(undefined4 *)(unaff_x20 + 0xc));
  FUN_100613ae4(0x10);
  return 0x10;
}



/* Address: 0x1009b8cc4 | FUN_1009b8cc4 */

void FUN_1009b8cc4(undefined8 param_1,ulong param_2,ulong param_3)

{
  FUN_1009b88d8(param_2 & 0xffffffff,param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009b8cdc | FUN_1009b8cdc */

void FUN_1009b8cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined1 local_98 [8];
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  uStack_58 = unaff_x20[1];
  local_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  local_40 = unaff_x20[4];
  puVar1 = &DAT_100ff27b0;
  local_80 = param_4;
  uStack_78 = param_2;
  local_70 = param_3;
  FUN_1000f7830(&DAT_100ff27b0,&DAT_100c8bb58);
  FUN_1006194e4(param_1,FUN_1005bc29c,auStack_90,param_4,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_98);
  return;
}



/* Address: 0x1009b8d74 | FUN_1009b8d74 */

void FUN_1009b8d74(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_68 [40];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  uStack_38 = unaff_x20[1];
  local_40 = *unaff_x20;
  uStack_28 = unaff_x20[3];
  uStack_30 = unaff_x20[2];
  local_20 = unaff_x20[4];
  param_1[1] = uStack_38;
  *param_1 = local_40;
  param_1[3] = uStack_28;
  param_1[2] = uStack_30;
  param_1[4] = local_20;
  FUN_1006100e8(&local_40,auStack_68);
  return;
}



/* Address: 0x1009b8db0 | FUN_1009b8db0 */

void FUN_1009b8db0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined1 auStack_78 [40];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  local_30 = unaff_x20[4];
  FUN_1009b9004(&local_50,auStack_78);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  param_1[4] = local_30;
  return;
}



/* Address: 0x1009b8e00 | FUN_1009b8e00 */

void FUN_1009b8e00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  (extension_Foundation)::Foundation::DataProtocol::_firstRange
            (param_1,param_2,param_7,param_3,param_4,param_8,param_5,param_6);
  return;
}



/* Address: 0x1009b8e24 | FUN_1009b8e24 */

void FUN_1009b8e24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  (extension_Foundation)::Foundation::DataProtocol::_lastRange
            (param_1,param_2,param_7,param_3,param_4,param_8,param_5,param_6);
  return;
}



/* Address: 0x1009b8e48 | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Foundation::DataProtocol::copyBytes */

__int64 (extension_Foundation)::Foundation::DataProtocol::copyBytes
                  (UnsafeMutableRawBufferPointer to,__int64 count)

{
  __int64 _Var1;
  
  _Var1 = copyBytes(to,count);
  return _Var1;
}



/* Address: 0x1009b8e4c | FUN_1009b8e4c */

void FUN_1009b8e4c(UnsafeMutableBufferPointer<undefined> param_1,__int64 param_2)

{
  (extension_Foundation)::Foundation::DataProtocol::_copyBytes(param_1,param_2);
  return;
}



/* Address: 0x1009b8e5c | FUN_1009b8e5c */

void FUN_1009b8e5c(void)

{
  (extension_Foundation)::Foundation::DataProtocol::_copyBytes();
  return;
}



/* Address: 0x1009b8e74 | FUN_1009b8e74 */

void FUN_1009b8e74(void)

{
  (extension_Foundation)::Foundation::DataProtocol::_copyBytes();
  return;
}



/* Address: 0x1009b8e90 | FUN_1009b8e90 */

void FUN_1009b8e90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  (extension_Foundation)::Foundation::MutableDataProtocol::_resetBytes
            (param_1,param_4,param_2,param_5,param_3);
  return;
}



/* Address: 0x1009b8ea8 | FUN_1009b8ea8 */

undefined1  [16] FUN_1009b8ea8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = (uint)param_2;
  uVar1 = (int)(param_2 >> 0x20) - uVar4;
  uVar5 = (ulong)uVar1;
  uVar3 = param_2 & 0xffffffff;
  FUN_1009b7c7c(uVar3,uVar5,param_4,param_1,param_2,param_3 & 0xffffffffffffff);
  if (0xe < uVar5 >> 0x3c) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b8f3c);
    (*pcVar2)();
  }
  _swift_release(param_1);
  if (!CARRY4(uVar4,uVar1)) {
    if ((ulong)(uVar4 + uVar1) <= param_2 >> 0x20) {
      auVar6._8_8_ = uVar5;
      auVar6._0_8_ = uVar3;
      return auVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b8f38);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009b8f34);
  (*pcVar2)();
}


