/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100881f24 | thunk_FUN_100881f28 */

void thunk_FUN_100881f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7fbfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7fbfc,&DAT_100f09088);
  DAT_100fe9508 = pTVar1;
  return;
}



/* Address: 0x100881f28 | FUN_100881f28 */

void FUN_100881f28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9508 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7fbfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7fbfc,&DAT_100f09088);
  DAT_100fe9508 = pTVar1;
  return;
}



/* Address: 0x100881f68 | thunk_FUN_100881f6c */

void thunk_FUN_100881f6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7fc64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7fc64,&DAT_100f08ff8);
  DAT_100fe9510 = pTVar1;
  return;
}



/* Address: 0x100881f6c | FUN_100881f6c */

void FUN_100881f6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7fc64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7fc64,&DAT_100f08ff8);
  DAT_100fe9510 = pTVar1;
  return;
}



/* Address: 0x100881fac | FUN_100881fac */

void FUN_100881fac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9518 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81390,&DAT_100f0ace8);
  DAT_100fe9518 = pTVar1;
  return;
}



/* Address: 0x100881fec | FUN_100881fec */

void FUN_100881fec(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x22) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x100882000 | FUN_100882000 */

void FUN_100882000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9520 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f850;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f850,&DAT_100f08f60);
  DAT_100fe9520 = pTVar1;
  return;
}



/* Address: 0x100882040 | FUN_100882040 */

void FUN_100882040(undefined8 param_1,long param_2)

{
  if (param_2 == 0x22) {
    return;
  }
  FUN_10087b1c4();
  return;
}



/* Address: 0x100882050 | FUN_100882050 */

void FUN_100882050(undefined8 param_1,long param_2)

{
  if (param_2 == 0x22) {
    return;
  }
  FUN_100881fec();
  return;
}



/* Address: 0x100882060 | FUN_100882060 */

undefined8 FUN_100882060(undefined8 param_1,undefined8 param_2)

{
  FUN_10089473c(param_2,param_1);
  return param_2;
}



/* Address: 0x10088209c | FUN_10088209c */

undefined8 FUN_10088209c(undefined8 param_1)

{
  FUN_10089467c();
  return param_1;
}



/* Address: 0x1008820d0 | FUN_1008820d0 */

void FUN_1008820d0(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    _swift_retain();
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x1008820fc | FUN_1008820fc */

void FUN_1008820fc(void)

{
  FUN_10087e4b4();
  return;
}



/* Address: 0x100882110 | thunk_FUN_100880a88 */

undefined * thunk_FUN_100880a88(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100880bb8);
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
    puVar3 = &DAT_100fe9538;
    FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
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
    puVar5 = &DAT_100fe9540;
    FUN_1000f7830(&DAT_100fe9540,&DAT_100c7fcb0);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100882114 | thunk_FUN_10087bb00 */

undefined8 thunk_FUN_10087bb00(long param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb18);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb1c);
  (*pcVar1)();
}



/* Address: 0x100882118 | thunk_FUN_10087bb00 */

undefined8 thunk_FUN_10087bb00(long param_1)

{
  code *pcVar1;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb18);
    (*pcVar1)();
  }
  if (*(long *)(param_1 + 0x30) != 0) {
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10087bb1c);
  (*pcVar1)();
}



/* Address: 0x10088211c | FUN_10088211c */

void FUN_10088211c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,0x21,0);
  if (*(long *)(unaff_x20 + 0x20) == 0x22) {
    *(undefined8 *)(unaff_x20 + 0x18) = param_1;
    *(undefined8 *)(unaff_x20 + 0x20) = param_2;
    FUN_100881fec(param_1,param_2);
  }
  else {
    if (*(long *)(unaff_x20 + 0x28) == 0) {
      uVar1 = 0;
      FUN_100893d5c(0,0x22,4);
      *(undefined8 *)(unaff_x20 + 0x30) = 0;
      *(undefined8 *)(unaff_x20 + 0x38) = 0;
      *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
    }
    FUN_10087ce0c(param_1,param_2);
  }
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1008821bc | FUN_1008821bc */

void FUN_1008821bc(code *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  long param_6,ulong param_7,long param_8)

{
  uint uVar1;
  uint uVar2;
  code cVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  long lVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  String SVar22;
  long local_100;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  long local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  long local_b0 [10];
  
  uVar15 = param_7 & 0xffffffffffffff;
  lVar7 = param_5;
  lVar17 = param_6;
  uVar16 = param_4;
  FUN_10065603c(param_5,param_6,uVar15);
  if (((param_4 & 1) == 0) || (lVar7 < 1)) {
    (*param_1)(local_b0,param_5,param_6,param_7 & 0xffffffffffffff);
    FUN_100626ebc(local_b0,param_8);
    FUN_1005e70f4(local_b0);
  }
  else {
    if (param_8 == 0) {
      local_100 = 0;
      uVar20 = 0;
      uVar21 = 0;
      lVar12 = lVar7;
    }
    else {
      lVar17 = *(long *)(param_3 + 0x20);
      uVar21 = *(undefined8 *)(lVar17 + 0x30);
      _swift_getObjectType();
      FUN_100893ef4();
      uVar20 = *(undefined8 *)(lVar17 + 0x30);
      _swift_getObjectType(uVar20);
      FUN_100893ef4();
      local_100 = *(long *)(lVar17 + 0x30);
      _swift_getObjectType();
      FUN_100893ef4();
      _swift_retain(param_8);
      _swift_retain(uVar21);
      uVar19 = uVar20;
      _swift_retain(uVar20);
      FUN_100882790();
      _swift_release(uVar21);
      _swift_release(uVar20);
      lVar17 = local_100;
      _swift_retain(local_100);
      FUN_100882c20();
      _swift_release(uVar19);
      _swift_release(local_100);
      pcVar6 = FUN_100004520;
      FUN_100885068(FUN_100004520,0);
      _swift_release(lVar17);
      puVar8 = &DAT_100f09430;
      _swift_allocObject(&DAT_100f09430,0x28,7);
      *(code **)(puVar8 + 0x10) = FUN_100888164;
      *(long *)(puVar8 + 0x18) = param_8;
      *(code **)(puVar8 + 0x20) = pcVar6;
      uVar15 = *(ulong *)(pcVar6 + 0x20);
      uVar16 = *(ulong *)(pcVar6 + 0x28);
      _swift_getObjectType();
      pcVar18 = *(code **)(uVar16 + 0x10);
      _swift_retain_n(param_8,6);
      _swift_retain_n(pcVar6,2);
      uVar9 = uVar15;
      (*pcVar18)(uVar15,uVar16);
      if ((uVar9 & 1) == 0) {
        _swift_release(param_8);
        puVar10 = &DAT_100f09458;
        _swift_allocObject(&DAT_100f09458,0x28,7);
        *(code **)(puVar10 + 0x10) = pcVar6;
        *(code **)(puVar10 + 0x18) = FUN_1006225d4;
        *(undefined **)(puVar10 + 0x20) = puVar8;
        pcVar18 = *(code **)(uVar16 + 0x18);
        _swift_retain(pcVar6);
        _swift_retain(puVar8);
        (*pcVar18)(FUN_10088819c,puVar10,uVar15,uVar16);
        _swift_release(puVar10);
        _swift_release_n(pcVar6,2);
        lVar17 = 4;
        _swift_release_n(param_8);
        _swift_release(puVar8);
      }
      else {
        uVar16 = 0;
        _swift_beginAccess(pcVar6 + 0x10,auStack_f8,0,0);
        cVar3 = pcVar6[0x18];
        if (cVar3 == (code)0xff) {
          _swift_release(param_8);
          uVar16 = 0;
          _swift_beginAccess(pcVar6 + 0x30,local_b0,0x21,0);
          FUN_10064967c(FUN_1006225d4,puVar8);
          _swift_endAccess(local_b0);
        }
        else {
          uVar19 = *(undefined8 *)(pcVar6 + 0x10);
          FUN_1005dfeb4(uVar19,cVar3);
          FUN_100892a8c(uVar19,cVar3,param_8);
          _swift_release(param_8);
          FUN_100308538(uVar19,cVar3);
        }
        uVar15 = 0;
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(pcVar6,2);
        lVar17 = 4;
        _swift_release_n(param_8);
        _swift_release(puVar8);
        _swift_bridgeObjectRelease(0);
      }
      _swift_release(param_8);
      _swift_retain(uVar21);
      _swift_retain(uVar20);
      lVar12 = local_100;
      _swift_retain(local_100);
    }
    FUN_100627f08();
    lVar11 = lVar12;
    _swift_getObjectType();
    (**(code **)(lVar17 + 0x18))();
    _swift_unknownObjectRelease(lVar12);
    lVar12 = 0x20;
    FUN_100488140(0x20,lVar11,lVar17,uVar15,uVar16);
    lVar17 = lVar12 + 0x10;
    _swift_beginAccess(lVar17,auStack_e0,0,0);
    local_b8 = *(undefined4 *)(lVar12 + 0x10);
    local_c0 = 0;
    local_b4 = 0;
    local_b2 = 0;
    local_c8 = lVar12;
    local_b0[0] = lVar7;
    FUN_100888124();
    SVar22 = Swift::String::_init
                       (local_b0,0x10,0,PTR___type_metadata_for_Swift_Int_100eac6f8,lVar17);
    pcVar13 = SVar22.str;
    FUN_10060b1ac(pcVar13,SVar22.bridgeObject,0);
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    if ((long)pcVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882770);
      (*pcVar6)();
    }
    if ((ulong)pcVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882774);
      (*pcVar6)();
    }
    if (CARRY4(local_c0._4_4_,(uint)pcVar13)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882778);
      (*pcVar6)();
    }
    pcVar14 = "\r\n";
    local_c0._4_4_ = local_c0._4_4_ + (uint)pcVar13;
    FUN_10060af44("\r\n",2,2);
    uVar5 = (uint)local_c0;
    lVar7 = local_c8;
    if ((long)pcVar14 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10088277c);
      (*pcVar6)();
    }
    if ((ulong)pcVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882780);
      (*pcVar6)();
    }
    uVar1 = local_c0._4_4_ + (uint)pcVar14;
    if (CARRY4(local_c0._4_4_,(uint)pcVar14)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882784);
      (*pcVar6)();
    }
    uVar15 = (ulong)CONCAT16(local_b2,CONCAT24(local_b4,local_b8));
    (*param_1)(local_b0,local_c8,CONCAT44(uVar1,(uint)local_c0),uVar15);
    FUN_100626ebc(local_b0,uVar21);
    _swift_release(uVar21);
    FUN_1005e70f4(local_b0);
    (*param_1)(local_b0,param_5,param_6,param_7 & 0xffffffffffffff);
    FUN_100626ebc(local_b0,uVar20);
    _swift_release(uVar20);
    FUN_1005e70f4(local_b0);
    uVar4 = (uVar1 - uVar5) - 2;
    if (uVar1 - uVar5 < 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882788);
      (*pcVar6)();
    }
    uVar2 = uVar5 + uVar4;
    if (CARRY4(uVar5,uVar4)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10088278c);
      (*pcVar6)();
    }
    if (uVar1 < uVar2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100882790);
      (*pcVar6)();
    }
    (*param_1)(local_b0,lVar7,CONCAT44(uVar1,uVar2),uVar15);
    FUN_100626ebc(local_b0,local_100);
    _swift_release(uVar20);
    _swift_release(uVar21);
    _swift_release_n(local_100,2);
    FUN_1005e70f4(local_b0);
    _swift_release(lVar7);
  }
  return;
}



/* Address: 0x100882790 | FUN_100882790 */

undefined * FUN_100882790(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fe97e0;
  FUN_1000f7830(&DAT_100fe97e0,&DAT_100c803c8);
  _swift_allocObject();
  lVar7 = *(long *)(unaff_x20 + 0x28);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar1 + 0x20) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar2 = &DAT_100fe97e8;
  FUN_1000f7830(&DAT_100fe97e8,&DAT_100c803d0);
  _swift_allocObject();
  *(undefined2 *)(puVar2 + 0x10) = 0x101;
  puVar3 = &DAT_100f09570;
  _swift_allocObject(&DAT_100f09570,0x28,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  uVar4 = uVar12;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar7 + 0x10);
  _swift_retain_n();
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_unknownObjectRetain(uVar12);
  uVar5 = uVar4;
  (*pcVar11)(uVar4,lVar7);
  if ((uVar5 & 1) == 0) {
    puVar10 = &DAT_100f09598;
    _swift_allocObject(&DAT_100f09598,0x28,7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    *(code **)(puVar10 + 0x18) = FUN_1008881e0;
    *(undefined **)(puVar10 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar7 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_10088819c,puVar10,uVar4,lVar7);
    _swift_release(puVar10);
    _swift_release(puVar2);
    _swift_release(puVar1);
    _swift_release();
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0,0);
    if (*(char *)(unaff_x20 + 0x18) == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0x21,0);
      FUN_10064967c(FUN_1008881e0,puVar3);
      _swift_endAccess(auStack_78);
      lVar9 = 0;
      puVar10 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar9 = unaff_x20;
      puVar10 = puVar1;
      puVar6 = puVar2;
      FUN_100884f44();
    }
    FUN_1006486f8(lVar9,puVar10,puVar6);
    FUN_100004550(lVar9,puVar10);
    _swift_release(puVar2);
    _swift_release(puVar1);
    _swift_release();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(puVar6);
  }
  FUN_1008af964(uVar12,lVar7);
  puVar3 = &DAT_100f095c0;
  _swift_allocObject(&DAT_100f095c0,0x30,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = *(ulong *)(uVar12 + 0x20);
  lVar7 = *(long *)(uVar12 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar7 + 0x10);
  _swift_retain_n();
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(param_1,2);
  (*pcVar11)(uVar4,lVar7);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar12 + 0x20);
    lVar7 = *(long *)(uVar12 + 0x28);
    _swift_getObjectType(uVar8);
    puVar10 = &DAT_100f095e8;
    _swift_allocObject(&DAT_100f095e8,0x28,7);
    *(ulong *)(puVar10 + 0x10) = uVar12;
    *(code **)(puVar10 + 0x18) = FUN_100888208;
    *(undefined **)(puVar10 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar7 + 0x18);
    _swift_retain(uVar12);
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_10088819c,puVar10,uVar8,lVar7);
    _swift_release(uVar12);
    _swift_release(puVar10);
    _swift_release_n(puVar2,2);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release();
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(uVar12 + 0x10,auStack_78,0,0);
    if (*(char *)(uVar12 + 0x18) == -1) {
      _swift_beginAccess(uVar12 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_100888208,puVar3);
      _swift_endAccess(auStack_90);
      uVar8 = 0;
      puVar10 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar8 = param_1;
      puVar10 = puVar1;
      puVar6 = puVar2;
      FUN_100885884(param_1,puVar1,puVar2,FUN_1006303f4);
    }
    FUN_1006486f8(uVar8,puVar10,puVar6);
    FUN_100004550(uVar8,puVar10);
    _swift_release_n(puVar2,2);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release();
    _swift_release(puVar3);
    _swift_release(uVar12);
    _swift_bridgeObjectRelease(puVar6);
  }
  return puVar1;
}



/* Address: 0x100882c20 | FUN_100882c20 */

undefined * FUN_100882c20(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  ulong uVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100fe97d0;
  FUN_1000f7830(&DAT_100fe97d0,&DAT_100c803b8);
  _swift_allocObject();
  lVar7 = *(long *)(unaff_x20 + 0x28);
  uVar12 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar1 + 0x20) = uVar12;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar2 = &DAT_100fe97d8;
  FUN_1000f7830(&DAT_100fe97d8,&DAT_100c803c0);
  _swift_allocObject();
  *(undefined2 *)(puVar2 + 0x10) = 0x101;
  puVar3 = &DAT_100f094d0;
  _swift_allocObject(&DAT_100f094d0,0x28,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  uVar4 = uVar12;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar7 + 0x10);
  _swift_retain_n();
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_unknownObjectRetain(uVar12);
  uVar5 = uVar4;
  (*pcVar11)(uVar4,lVar7);
  if ((uVar5 & 1) == 0) {
    puVar10 = &DAT_100f094f8;
    _swift_allocObject(&DAT_100f094f8,0x28,7);
    *(long *)(puVar10 + 0x10) = unaff_x20;
    *(code **)(puVar10 + 0x18) = FUN_1008881e0;
    *(undefined **)(puVar10 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar7 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(FUN_10088819c,puVar10,uVar4,lVar7);
    _swift_release(puVar10);
    _swift_release(puVar2);
    _swift_release(puVar1);
    _swift_release();
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,0,0);
    if (*(char *)(unaff_x20 + 0x18) == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_78,0x21,0);
      FUN_10064967c(FUN_1008881e0,puVar3);
      _swift_endAccess(auStack_78);
      lVar9 = 0;
      puVar10 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
    else {
      lVar9 = unaff_x20;
      puVar10 = puVar1;
      puVar6 = puVar2;
      FUN_100884f44();
    }
    FUN_1006486f8(lVar9,puVar10,puVar6);
    FUN_100004550(lVar9,puVar10);
    _swift_release(puVar2);
    _swift_release(puVar1);
    _swift_release();
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(puVar6);
  }
  FUN_1008af964(uVar12,lVar7);
  puVar3 = &DAT_100f09520;
  _swift_allocObject(&DAT_100f09520,0x30,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = *(ulong *)(uVar12 + 0x20);
  lVar7 = *(long *)(uVar12 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar7 + 0x10);
  _swift_retain_n();
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(param_1,2);
  (*pcVar11)(uVar4,lVar7);
  if ((uVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(uVar12 + 0x20);
    lVar7 = *(long *)(uVar12 + 0x28);
    _swift_getObjectType(uVar8);
    puVar10 = &DAT_100f09548;
    _swift_allocObject(&DAT_100f09548,0x28,7);
    *(ulong *)(puVar10 + 0x10) = uVar12;
    *(code **)(puVar10 + 0x18) = FUN_100888208;
    *(undefined **)(puVar10 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar7 + 0x18);
    _swift_retain(uVar12);
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_10088819c,puVar10,uVar8,lVar7);
    _swift_release(uVar12);
    _swift_release(puVar10);
    _swift_release_n(puVar2,2);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release();
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(uVar12 + 0x10,auStack_78,0,0);
    if (*(char *)(uVar12 + 0x18) == -1) {
      _swift_beginAccess(uVar12 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_100888208,puVar3);
      _swift_endAccess(auStack_90);
      uVar8 = 0;
      puVar10 = (undefined *)0x0;
      puVar6 = (undefined *)0x0;
    }
    else {
      uVar8 = param_1;
      puVar10 = puVar1;
      puVar6 = puVar2;
      FUN_100885884(param_1,puVar1,puVar2,FUN_1006303f4);
    }
    FUN_1006486f8(uVar8,puVar10,puVar6);
    FUN_100004550(uVar8,puVar10);
    _swift_release_n(puVar2,2);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release();
    _swift_release(puVar3);
    _swift_release(uVar12);
    _swift_bridgeObjectRelease(puVar6);
  }
  return puVar1;
}



/* Address: 0x1008830b0 | FUN_1008830b0 */

void FUN_1008830b0(code *param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  undefined8 param_6,undefined8 *param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 *puVar4;
  code *pcVar5;
  char *pcVar6;
  undefined1 auStack_d8 [24];
  long local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 auStack_a8 [72];
  
  if ((param_4 & 1) == 0) {
    if (param_7 != (undefined8 *)0x0) {
      puVar4 = param_7;
      _swift_retain();
      FUN_100627f08();
      _swift_getObjectType();
      (**(code **)(param_2 + 0x18))();
      _swift_unknownObjectRelease();
      FUN_1006116e8();
      uVar1 = *puVar4;
      _swift_retain(uVar1);
      (*param_1)(auStack_a8);
      _swift_retain(param_7);
      FUN_100626ebc(auStack_a8,param_7);
      _swift_release(uVar1);
      _swift_release_n(param_7,2);
      FUN_1005e70f4(auStack_a8);
    }
  }
  else {
    if (param_5 == 0) {
      pcVar2 = param_1;
      FUN_100627f08();
      pcVar5 = pcVar2;
      _swift_getObjectType();
      (**(code **)(param_2 + 0x18))();
      _swift_unknownObjectRelease(pcVar2);
      lVar3 = 8;
      FUN_100488140(8,pcVar5,param_2,param_3,param_4);
      _swift_beginAccess(lVar3 + 0x10,auStack_d8,0,0);
      local_b0 = *(undefined4 *)(lVar3 + 0x10);
      uStack_b8 = 0;
      local_ac = 0;
      local_aa = 0;
      pcVar6 = "0\r\n\r\n";
      local_c0 = lVar3;
      FUN_10060af44("0\r\n\r\n",5,2,0);
      if ((long)pcVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100883388);
        (*pcVar2)();
      }
      if ((ulong)pcVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10088338c);
        (*pcVar2)();
      }
      if (CARRY4(uStack_b8._4_4_,(uint)pcVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100883390);
        (*pcVar2)();
      }
      uStack_b8 = CONCAT44(uStack_b8._4_4_ + (uint)pcVar6,(undefined4)uStack_b8);
    }
    else {
      pcVar2 = param_1;
      FUN_100627f08();
      pcVar5 = pcVar2;
      _swift_getObjectType();
      (**(code **)(param_2 + 0x18))();
      _swift_unknownObjectRelease(pcVar2);
      lVar3 = 0x100;
      FUN_100488140(0x100,pcVar5,param_2,param_3,param_4);
      _swift_beginAccess(lVar3 + 0x10,auStack_d8,0,0);
      local_b0 = *(undefined4 *)(lVar3 + 0x10);
      uStack_b8 = 0;
      local_ac = 0;
      local_aa = 0;
      pcVar6 = "0\r\n";
      local_c0 = lVar3;
      FUN_10060af44("0\r\n",3,2,0);
      if ((long)pcVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10088337c);
        (*pcVar2)();
      }
      if ((ulong)pcVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100883380);
        (*pcVar2)();
      }
      if (CARRY4(uStack_b8._4_4_,(uint)pcVar6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100883384);
        (*pcVar2)();
      }
      uStack_b8 = CONCAT44(uStack_b8._4_4_ + (uint)pcVar6,(undefined4)uStack_b8);
      FUN_10089bd1c(param_5,param_6);
    }
    lVar3 = local_c0;
    (*param_1)(auStack_a8,local_c0,uStack_b8,(ulong)CONCAT16(local_aa,CONCAT24(local_ac,local_b0)));
    FUN_100626ebc(auStack_a8,param_7);
    FUN_1005e70f4(auStack_a8);
    _swift_release(lVar3);
  }
  return;
}



/* Address: 0x100883390 | FUN_100883390 */

/* WARNING: Removing unreachable block (ram,0x0001008835cc) */
/* WARNING: Removing unreachable block (ram,0x0001008835fc) */

undefined8 FUN_100883390(char param_1,undefined8 *param_2,ulong param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  undefined1 uVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  
  uVar8 = (uint)(param_3 >> 0x10) & 0xffff;
  if (param_1 == '\0') {
    uVar6 = 0x2d746e65746e6f63;
    FUN_10089c840(0x2d746e65746e6f63,0xee006874676e656c,*param_2,*(undefined1 *)(param_2 + 1));
    if ((uVar6 & 1) == 0) {
      if (uVar8 != 1) {
        return 2;
      }
      if ((param_3 & 0xffff) == 0) {
        return 2;
      }
      FUN_10089bed4(0xd000000000000011,0x8000000100db2550);
      FUN_10089f74c(0xd000000000000011,0x8000000100db2550,0x64656b6e756863,&DAT_e700000000000000);
      return 0;
    }
LAB_1008834d4:
    FUN_10089bed4(0xd000000000000011,0x8000000100db2550);
    uVar5 = 1;
  }
  else {
    if (param_1 == '\x01') {
      FUN_10089bed4(0x2d746e65746e6f63,0xee006874676e656c);
      FUN_10089bed4(0xd000000000000011,0x8000000100db2550);
    }
    else {
      uVar5 = *param_2;
      uVar3 = *(undefined1 *)(param_2 + 1);
      uVar6 = 0x2d746e65746e6f63;
      FUN_10089c840(0x2d746e65746e6f63,0xee006874676e656c,uVar5,uVar3);
      if ((uVar6 & 1) != 0) goto LAB_1008834d4;
      if (uVar8 != 1) {
        return 2;
      }
      if ((param_3 & 0xffff) == 0) {
        return 2;
      }
      lVar7 = -0x2fffffffffffffef;
      FUN_10089cd18(0xd000000000000011,0x8000000100db2550,uVar5,uVar3);
      if (*(long *)(lVar7 + 0x10) == 0) {
        _swift_bridgeObjectRelease();
      }
      else {
        _Var1.unknown = *(undefined **)(lVar7 + 0x20);
        _Var2.unknown = *(undefined **)(lVar7 + 0x28);
        _swift_bridgeObjectRetain(_Var2.unknown);
        _swift_bridgeObjectRelease(lVar7);
        if (_Var1.unknown == (undefined *)0x64656b6e756863 && _Var2.unknown == &DAT_e700000000000000
           ) {
          _swift_bridgeObjectRelease(_Var2.unknown);
          return 0;
        }
        bVar4 = Swift::_stringCompareWithSmolCheck(_Var1,_Var2,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var2.unknown);
        if (bVar4) {
          return 0;
        }
      }
    }
    uVar5 = 2;
  }
  return uVar5;
}



/* Address: 0x100883608 | FUN_100883608 */

bool FUN_100883608(undefined8 param_1,undefined8 param_2,uint param_3)

{
  bool bVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  
  if ((param_3 & 0xffff0000) == 0x10000 && (param_3 & 0xffff) != 0) {
    _Var3.unknown = (undefined *)0x8000000100db2550;
    _Var2.unknown = (undefined *)0xd000000000000011;
    FUN_10089d0ac(0xd000000000000011,0x8000000100db2550,param_1,param_2);
    if (_Var3.unknown != (undefined *)0x0) {
      if (_Var2.unknown == (undefined *)0x64656b6e756863 && _Var3.unknown == &DAT_e700000000000000)
      {
        bVar1 = true;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x63);
      }
      _swift_bridgeObjectRelease(_Var3.unknown);
      return bVar1;
    }
  }
  return false;
}



/* Address: 0x1008836b4 | thunk_FUN_100528d68 */

void thunk_FUN_100528d68(uint param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(ulong)(param_1 & 1);
  Swift::Hasher::_combine((__uint8)(param_1 & 1),param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1008836b8 | FUN_1008836b8 */

void FUN_1008836b8(undefined1 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x11) = param_1;
  return;
}



/* Address: 0x1008836ec | FUN_1008836ec */

void FUN_1008836ec(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x11) = param_1;
  return;
}



/* Address: 0x1008836fc | FUN_1008836fc */

void FUN_1008836fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  ulong uVar13;
  undefined8 uVar14;
  long lVar15;
  long unaff_x20;
  undefined **ppuVar16;
  long local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_a7;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined *local_70;
  byte local_68;
  
  puVar11 = &DAT_100fe95a8;
  ppuVar16 = (undefined **)&DAT_100c80030;
  puVar6 = puVar11;
  FUN_1000f7830(&DAT_100fe95a8,&DAT_100c80030);
  FUN_1008854b0();
  cVar3 = (char)((ulong)ppuVar16 >> 0x38);
  if (cVar3 != '\0') {
    if (cVar3 == '\x01') {
      FUN_1008821bc(thunk_FUN_100883acc,0,param_1,*(undefined1 *)(unaff_x20 + 0x10),puVar6,puVar11,
                    (ulong)ppuVar16 & 0xffffffffffffff,param_3);
      uVar14 = 1;
    }
    else {
      FUN_1008830b0(thunk_FUN_100883acc,0,param_1,*(undefined1 *)(unaff_x20 + 0x10),puVar6,puVar11,
                    param_3);
      uVar14 = 2;
    }
    FUN_100878fe8(puVar6,puVar11,ppuVar16,uVar14);
    return;
  }
  local_68 = (byte)ppuVar16;
  local_70 = puVar11;
  if ((*(byte *)(unaff_x20 + 0x11) & 1) == 0) {
    uVar13 = (ulong)*(uint *)(puVar6 + 0x30);
    puVar7 = puVar11;
    _swift_bridgeObjectRetain();
    bVar5 = (byte)puVar7;
    ppuVar12 = ppuVar16;
    FUN_100883608();
    puVar7 = puVar11;
    _swift_bridgeObjectRelease(puVar11);
    *(byte *)(unaff_x20 + 0x10) = bVar5 & 1;
    goto LAB_100883888;
  }
  lVar15 = *(long *)(puVar6 + 0x18);
  if (lVar15 < 10) {
    if (lVar15 == 1 || lVar15 == 4) {
LAB_10088385c:
      puVar7 = (undefined *)0x0;
    }
    else {
LAB_100883864:
      puVar7 = (undefined *)0x2;
    }
  }
  else {
    if (lVar15 == 10) goto LAB_10088385c;
    if (lVar15 != 0xb) goto LAB_100883864;
    puVar7 = (undefined *)0x1;
  }
  uVar13 = (ulong)*(uint *)(puVar6 + 0x30);
  ppuVar12 = &local_70;
  FUN_100883390(puVar7,ppuVar12,uVar13);
  *(bool *)(unaff_x20 + 0x10) = ((ulong)puVar7 & 0xff) == 0;
  ppuVar16 = (undefined **)(ulong)local_68;
  puVar11 = local_70;
LAB_100883888:
  FUN_100627f08();
  puVar8 = puVar7;
  _swift_getObjectType();
  (*(code *)ppuVar12[3])();
  _swift_unknownObjectRelease(puVar7);
  lVar15 = 0x100;
  FUN_100488140(0x100,puVar8,ppuVar12,uVar13,param_4);
  _swift_beginAccess(lVar15 + 0x10,auStack_a0,0,0);
  local_78 = *(undefined4 *)(lVar15 + 0x10);
  uStack_80 = 0;
  local_74 = 0;
  local_72 = 0;
  uVar14 = *(undefined8 *)(puVar6 + 0x10);
  uVar2 = *(undefined8 *)(puVar6 + 0x18);
  local_88 = lVar15;
  FUN_100881fec(uVar14,uVar2);
  FUN_1008845c8(uVar14,uVar2);
  FUN_10087b1c4(uVar14,uVar2);
  uVar13 = 0x20;
  FUN_1008859a8(0x20,uStack_80._4_4_);
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883aa0);
    (*pcVar4)();
  }
  if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883aa4);
    (*pcVar4)();
  }
  uVar1 = uStack_80._4_4_ + (uint)uVar13;
  if (CARRY4(uStack_80._4_4_,(uint)uVar13)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883aa8);
    (*pcVar4)();
  }
  uVar13 = *(ulong *)(puVar6 + 0x20);
  uVar14 = *(undefined8 *)(puVar6 + 0x28);
  uStack_80._4_4_ = uVar1;
  _swift_bridgeObjectRetain(uVar14);
  FUN_10060b1ac(uVar13,uVar14,uVar1);
  _swift_bridgeObjectRelease(uVar14);
  if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883aac);
    (*pcVar4)();
  }
  if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ab0);
    (*pcVar4)();
  }
  if (CARRY4(uStack_80._4_4_,(uint)uVar13)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ab4);
    (*pcVar4)();
  }
  uVar9 = 0x20;
  uStack_80._4_4_ = uStack_80._4_4_ + (uint)uVar13;
  FUN_1008859a8();
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ab8);
    (*pcVar4)();
  }
  if (uVar9 >> 0x20 == 0) {
    if (CARRY4(uStack_80._4_4_,(uint)uVar9)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ac0);
      (*pcVar4)();
    }
    uStack_80._4_4_ = uStack_80._4_4_ + (uint)uVar9;
    FUN_1008843b4(*(undefined4 *)(puVar6 + 0x30));
    pcVar10 = "\r\n";
    FUN_10060af44("\r\n",2,2,uStack_80._4_4_);
    if ((long)pcVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ac4);
      (*pcVar4)();
    }
    if ((ulong)pcVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100883ac8);
      (*pcVar4)();
    }
    if (!CARRY4(uStack_80._4_4_,(uint)pcVar10)) {
      uStack_80 = CONCAT44(uStack_80._4_4_ + (uint)pcVar10,(undefined4)uStack_80);
      FUN_10089bd1c(puVar11,ppuVar16);
      lVar15 = local_88;
      local_e8 = local_88;
      uStack_e0 = uStack_80;
      local_d2 = local_72;
      local_d4 = local_74;
      local_d8 = local_78;
      local_a7 = 0;
      _swift_retain(local_88);
      FUN_100626ebc(&local_e8,param_3);
      FUN_1005e70f4(&local_e8);
      _swift_bridgeObjectRelease(puVar11);
      _swift_release(puVar6);
      _swift_release(lVar15);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100883acc);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100883abc);
  (*pcVar4)();
}



/* Address: 0x100883acc | FUN_100883acc */

void FUN_100883acc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(int *)(param_1 + 2) = (int)param_4;
  *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
  *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  FUN_100656200();
  return;
}



/* Address: 0x100883aec | FUN_100883aec */

void FUN_100883aec(void)

{
  FUN_1008841dc();
  return;
}



/* Address: 0x100883b00 | thunk_FUN_1008836fc */

void thunk_FUN_1008836fc(void)

{
  FUN_1008836fc();
  return;
}



/* Address: 0x100883b04 | thunk_FUN_100884248 */

void thunk_FUN_100884248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  uint7 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar4 = *(undefined3 *)((long)param_2 + 0x14);
  uVar5 = *(uint7 *)(param_2 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar6;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  FUN_100656200(uVar1,uVar2,(ulong)uVar5);
  return;
}



/* Address: 0x100883b08 | FUN_100883b08 */

void FUN_100883b08(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined2 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x22;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Address: 0x100883b48 | FUN_100883b48 */

void FUN_100883b48(undefined1 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined2 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x22;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Address: 0x100883b90 | FUN_100883b90 */

void FUN_100883b90(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0x22;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Address: 0x100883bb4 | FUN_100883bb4 */

void FUN_100883bb4(undefined8 param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  char cVar2;
  byte bVar3;
  bool bVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  long lVar9;
  _StringGuts _Var10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x20;
  undefined **ppuVar17;
  undefined *puVar18;
  undefined *puVar19;
  code *pcVar20;
  long local_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_a7;
  undefined1 auStack_a0 [24];
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined *local_70;
  byte local_68;
  
  puVar11 = &DAT_100fe95b0;
  ppuVar17 = (undefined **)&DAT_100c80420;
  puVar5 = puVar11;
  FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
  FUN_1008854b0();
  cVar2 = (char)((ulong)ppuVar17 >> 0x38);
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      if (*(char *)(unaff_x20 + 0x11) == '\x01') {
        if (param_3 != 0) {
          puVar7 = puVar5;
          FUN_100885a70();
          puVar18 = &DAT_100f09350;
          uVar15 = 0;
          _swift_allocError(&DAT_100f09350,puVar7,0,0);
          uVar16 = *(ulong *)(param_3 + 0x20);
          lVar9 = *(long *)(param_3 + 0x28);
          _swift_getObjectType();
          uVar6 = uVar16;
          lVar12 = lVar9;
          (**(code **)(lVar9 + 0x10))();
          if ((uVar6 & 1) == 0) {
            puVar7 = &DAT_100f09128;
            _swift_allocObject(&DAT_100f09128,0x20,7);
            *(long *)(puVar7 + 0x10) = param_3;
            *(undefined **)(puVar7 + 0x18) = puVar18;
            pcVar20 = *(code **)(lVar9 + 0x18);
            _swift_retain(param_3);
            _swift_errorRetain(puVar18);
            (*pcVar20)(FUN_1008777d0,puVar7,uVar16,lVar9);
            FUN_100878fe8(puVar5,puVar11,ppuVar17,1);
            _swift_release(puVar7);
          }
          else {
            puVar7 = puVar18;
            FUN_1005de8f4(puVar18);
            FUN_1006486f8();
            FUN_100878fe8(puVar5,puVar11,ppuVar17,1);
            FUN_100004550(puVar7,lVar12);
            _swift_bridgeObjectRelease(uVar15);
          }
          _swift_errorRelease(puVar18);
          return;
        }
      }
      else {
        FUN_1008821bc(thunk_FUN_100883acc,0,param_1,*(undefined1 *)(unaff_x20 + 0x10),puVar5,puVar11
                      ,(ulong)ppuVar17 & 0xffffffffffffff,param_3);
      }
      uVar15 = 1;
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x11) = 0;
      FUN_1008830b0(thunk_FUN_100883acc,0,param_1,*(undefined1 *)(unaff_x20 + 0x10),puVar5,puVar11,
                    param_3);
      uVar15 = 2;
    }
    FUN_100878fe8(puVar5,puVar11,ppuVar17,uVar15);
    return;
  }
  local_68 = (byte)ppuVar17;
  lVar9 = *(long *)(puVar5 + 0x10);
  local_70 = puVar11;
  FUN_10089d3a8(lVar9,*(undefined8 *)(puVar5 + 0x18),*(undefined8 *)(puVar5 + 0x20));
  if ((lVar9 == 0x65) || (99 < lVar9 - 100U)) {
    param_4 = (undefined1 *)0x0;
    _swift_beginAccess(unaff_x20 + 0x18,&local_e8,0x21,0);
    puVar18 = *(undefined **)(unaff_x20 + 0x20);
    if (puVar18 == (undefined *)0x22) {
      _swift_endAccess(&local_e8);
      goto LAB_100883d10;
    }
    puVar19 = *(undefined **)(unaff_x20 + 0x18);
    lVar9 = *(long *)(unaff_x20 + 0x28);
    puVar7 = puVar19;
    puVar13 = puVar18;
    FUN_100881fec();
    if (lVar9 == 0) {
      puVar7 = (undefined *)0x0;
      puVar13 = (undefined *)0x22;
    }
    else {
      FUN_100884ea8();
    }
    uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined **)(unaff_x20 + 0x18) = puVar7;
    *(undefined **)(unaff_x20 + 0x20) = puVar13;
    _swift_endAccess(&local_e8);
    FUN_100882040(uVar15,uVar1);
    _Var8.unknown = puVar19;
    _Var10.unknown = puVar18;
    FUN_1008a1014();
    if ((_Var8.unknown == (undefined *)0x44414548) && (_Var10.unknown == &DAT_e400000000000000)) {
      bVar4 = true;
      _Var8.unknown = &DAT_e400000000000000;
LAB_100883edc:
      _swift_bridgeObjectRelease(_Var8.unknown);
    }
    else {
      param_4 = &DAT_e400000000000000;
      bVar4 = Swift::_stringCompareWithSmolCheck(_Var8,_Var10,(_StringComparisonResult)0x48);
      _swift_bridgeObjectRelease(_Var10.unknown);
      if (!bVar4) {
        _Var10.unknown = puVar19;
        _Var8.unknown = puVar18;
        FUN_1008a1014();
        if ((_Var10.unknown == (undefined *)0x5443454e4e4f43) &&
           (_Var8.unknown == &DAT_e700000000000000)) {
          bVar4 = true;
        }
        else {
          param_4 = &DAT_e700000000000000;
          bVar4 = Swift::_stringCompareWithSmolCheck(_Var10,_Var8,(_StringComparisonResult)0x43);
        }
        goto LAB_100883edc;
      }
      bVar4 = true;
    }
    *(bool *)(unaff_x20 + 0x11) = bVar4;
    _Var8.unknown = puVar19;
    _Var10.unknown = puVar18;
    FUN_1008a1014();
    if ((_Var8.unknown != (undefined *)0x5443454e4e4f43) ||
       (_Var10.unknown != &DAT_e700000000000000)) {
      param_4 = &DAT_e700000000000000;
      bVar4 = Swift::_stringCompareWithSmolCheck(_Var8,_Var10,(_StringComparisonResult)0x43);
      _swift_bridgeObjectRelease(_Var10.unknown);
      FUN_100882040(puVar19,puVar18);
      bVar3 = *(byte *)(unaff_x20 + 0x40);
      goto joined_r0x000100883fbc;
    }
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
    FUN_100882040(puVar19,puVar18);
    if ((*(byte *)(unaff_x20 + 0x40) & 1) != 0) goto LAB_100883f68;
  }
  else {
LAB_100883d10:
    bVar4 = false;
    bVar3 = *(byte *)(unaff_x20 + 0x40);
joined_r0x000100883fbc:
    if ((bVar3 & 1) != 0) {
      if (bVar4 == false) {
        if (*(ulong *)(puVar5 + 0x20) < 0x3c) {
          puVar18 = (undefined *)(ulong)(byte)(&DAT_100c803da)[*(ulong *)(puVar5 + 0x20)];
        }
        else {
          lVar9 = *(long *)(puVar5 + 0x10);
          FUN_10089d3a8(lVar9,*(undefined8 *)(puVar5 + 0x18));
          puVar18 = (undefined *)(ulong)(lVar9 - 100U < 100);
        }
      }
      else {
LAB_100883f68:
        puVar18 = (undefined *)0x1;
      }
      uVar16 = (ulong)*(uint *)(puVar5 + 0x28);
      ppuVar14 = &local_70;
      FUN_100883390(puVar18,ppuVar14,uVar16);
      bVar3 = ((ulong)puVar18 & 0xff) == 0;
      ppuVar17 = (undefined **)(ulong)local_68;
      puVar11 = local_70;
      goto LAB_100883fe4;
    }
  }
  uVar16 = (ulong)*(uint *)(puVar5 + 0x28);
  puVar18 = puVar11;
  _swift_bridgeObjectRetain();
  bVar3 = (byte)puVar18;
  ppuVar14 = ppuVar17;
  FUN_100883608();
  puVar18 = puVar11;
  _swift_bridgeObjectRelease(puVar11);
LAB_100883fe4:
  *(byte *)(unaff_x20 + 0x10) = bVar3 & (*(byte *)(unaff_x20 + 0x11) ^ 0xff) & 1;
  FUN_100627f08();
  puVar7 = puVar18;
  _swift_getObjectType();
  (*(code *)ppuVar14[3])();
  _swift_unknownObjectRelease(puVar18);
  lVar9 = 0x100;
  FUN_100488140(0x100,puVar7,ppuVar14,uVar16,param_4);
  _swift_beginAccess(lVar9 + 0x10,auStack_a0,0,0);
  local_78 = *(undefined4 *)(lVar9 + 0x10);
  uStack_80 = 0;
  local_74 = 0;
  local_72 = 0;
  local_88 = lVar9;
  FUN_100885adc(puVar5);
  FUN_10089bd1c(puVar11,ppuVar17);
  lVar9 = local_88;
  local_e8 = local_88;
  uStack_e0 = uStack_80;
  local_d2 = local_72;
  local_d4 = local_74;
  local_d8 = local_78;
  local_a7 = 0;
  _swift_retain(local_88);
  FUN_100626ebc(&local_e8,param_3);
  FUN_1005e70f4(&local_e8);
  _swift_bridgeObjectRelease(puVar11);
  _swift_release(puVar5);
  _swift_release(lVar9);
  return;
}



/* Address: 0x100884160 | FUN_100884160 */

void FUN_100884160(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100882040(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar1);
  return;
}



/* Address: 0x100884190 | FUN_100884190 */

void FUN_100884190(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  FUN_100882040(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008841c8 | FUN_1008841c8 */

void FUN_1008841c8(void)

{
  FUN_1008841dc();
  return;
}



/* Address: 0x1008841dc | FUN_1008841dc */

void FUN_1008841dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  uVar1 = in_x3;
  FUN_1000f7830(in_x3,in_x4);
  FUN_1008854b0();
  *param_1 = uVar1;
  param_1[1] = in_x3;
  *(int *)(param_1 + 2) = (int)in_x4;
  *(char *)((long)param_1 + 0x16) = (char)((ulong)in_x4 >> 0x30);
  *(short *)((long)param_1 + 0x14) = (short)((ulong)in_x4 >> 0x20);
  *(char *)((long)param_1 + 0x17) = (char)((ulong)in_x4 >> 0x38);
  return;
}



/* Address: 0x100884244 | thunk_FUN_100883bb4 */

void thunk_FUN_100883bb4(void)

{
  FUN_100883bb4();
  return;
}



/* Address: 0x100884248 | FUN_100884248 */

void FUN_100884248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  uint7 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x16);
  uVar4 = *(undefined3 *)((long)param_2 + 0x14);
  uVar5 = *(uint7 *)(param_2 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar6;
  *(undefined1 *)((long)param_1 + 0x16) = uVar3;
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  FUN_100656200(uVar1,uVar2,(ulong)uVar5);
  return;
}



/* Address: 0x10088427c | FUN_10088427c */

String FUN_10088427c(undefined8 param_1)

{
  String SVar1;
  
  SVar1 = Swift::String::_init(param_1,&DAT_100f093e8);
  return SVar1;
}



/* Address: 0x100884288 | FUN_100884288 */

void FUN_100884288(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  long unaff_x20;
  String SVar4;
  
  FUN_10089d3a8();
  SVar4 = Swift::CustomStringConvertible::get_description();
  pcVar2 = SVar4.str;
  FUN_10060b1ac(pcVar2,SVar4.bridgeObject,*(undefined4 *)(unaff_x20 + 0xc));
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884394);
    (*pcVar1)();
  }
  if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884398);
    (*pcVar1)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088439c);
    (*pcVar1)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
  uVar3 = 0x20;
  FUN_1008859a8();
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843a0);
    (*pcVar1)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843a4);
    (*pcVar1)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843a8);
    (*pcVar1)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  FUN_10089d40c(param_1,param_2,param_3);
  FUN_10060b1ac();
  _swift_bridgeObjectRelease(param_2);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843ac);
    (*pcVar1)();
  }
  if (param_1 >> 0x20 == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1)) {
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008843b0);
  (*pcVar1)();
}



/* Address: 0x1008843b4 | FUN_1008843b4 */

void FUN_1008843b4(ulong param_1)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  long unaff_x20;
  String SVar4;
  
  if (((uint)param_1 & 0xffff) == 1) {
    if (((uint)(param_1 >> 0x10) & 0xffff) == 1) {
      pcVar2 = "HTTP/1.1";
      FUN_10060af44("HTTP/1.1",8,2,*(undefined4 *)(unaff_x20 + 0xc));
      if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845bc);
        (*pcVar1)();
      }
      if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845c4);
        (*pcVar1)();
      }
      iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845c8);
        (*pcVar1)();
      }
      goto LAB_10088456c;
    }
    if ((param_1 & 0xffff0000) == 0) {
      pcVar2 = "HTTP/1.0";
      FUN_10060af44("HTTP/1.0",8,2,*(undefined4 *)(unaff_x20 + 0xc));
      if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845b8);
        (*pcVar1)();
      }
      if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845c0);
        (*pcVar1)();
      }
      iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100884424);
        (*pcVar1)();
      }
      goto LAB_10088456c;
    }
  }
  pcVar2 = "HTTP/";
  FUN_10060af44("HTTP/",5,2,*(undefined4 *)(unaff_x20 + 0xc));
  if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088458c);
    (*pcVar1)();
  }
  if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884590);
    (*pcVar1)();
  }
  iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884594);
    (*pcVar1)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar3;
  SVar4 = Swift::CustomStringConvertible::get_description();
  pcVar2 = SVar4.str;
  FUN_10060b1ac(pcVar2,SVar4.bridgeObject,iVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884598);
    (*pcVar1)();
  }
  if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10088459c);
    (*pcVar1)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845a0);
    (*pcVar1)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
  pcVar2 = ".";
  FUN_10060af44(".",1,2);
  if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845a4);
    (*pcVar1)();
  }
  if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845a8);
    (*pcVar1)();
  }
  iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845ac);
    (*pcVar1)();
  }
  *(int *)(unaff_x20 + 0xc) = iVar3;
  SVar4 = Swift::CustomStringConvertible::get_description();
  pcVar2 = SVar4.str;
  FUN_10060b1ac(pcVar2,SVar4.bridgeObject,iVar3);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845b0);
    (*pcVar1)();
  }
  if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008845b4);
    (*pcVar1)();
  }
  iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100884538);
    (*pcVar1)();
  }
LAB_10088456c:
  *(int *)(unaff_x20 + 0xc) = iVar3;
  return;
}



/* Address: 0x1008845c8 | FUN_1008845c8 */

void FUN_1008845c8(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  char *pcVar2;
  int iVar3;
  long unaff_x20;
  
  switch(param_2) {
  case 0:
    pcVar2 = "GET";
    FUN_10060af44("GET",3,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d40);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dcc);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884624);
      (*pcVar1)();
    }
    break;
  case 1:
    pcVar2 = "PUT";
    FUN_10060af44("PUT",3,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d44);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dd0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884930);
      (*pcVar1)();
    }
    break;
  case 2:
    pcVar2 = "ACL";
    FUN_10060af44("ACL",3,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d30);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dbc);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884860);
      (*pcVar1)();
    }
    break;
  case 3:
    pcVar2 = "HEAD";
    FUN_10060af44("HEAD",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d38);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dc4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008848c8);
      (*pcVar1)();
    }
    break;
  case 4:
    pcVar2 = "POST";
    FUN_10060af44("POST",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d1c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884da8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10088475c);
      (*pcVar1)();
    }
    break;
  case 5:
    pcVar2 = "COPY";
    FUN_10060af44("COPY",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d54);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884de0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884a00);
      (*pcVar1)();
    }
    break;
  case 6:
    pcVar2 = "LOCK";
    FUN_10060af44("LOCK",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d60);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dec);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884a9c);
      (*pcVar1)();
    }
    break;
  case 7:
    pcVar2 = "MOVE";
    FUN_10060af44("MOVE",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d3c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dc8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008848fc);
      (*pcVar1)();
    }
    break;
  case 8:
    pcVar2 = "BIND";
    FUN_10060af44("BIND",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d6c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884df8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884b38);
      (*pcVar1)();
    }
    break;
  case 9:
    pcVar2 = "LINK";
    FUN_10060af44("LINK",4,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d24);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884db0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008847c4);
      (*pcVar1)();
    }
    break;
  case 10:
    pcVar2 = "PATCH";
    FUN_10060af44("PATCH",5,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d68);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884df4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884b04);
      (*pcVar1)();
    }
    break;
  case 0xb:
    pcVar2 = "TRACE";
    FUN_10060af44("TRACE",5,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d18);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884da4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884728);
      (*pcVar1)();
    }
    break;
  case 0xc:
    pcVar2 = "MKCOL";
    FUN_10060af44("MKCOL",5,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d20);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dac);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884790);
      (*pcVar1)();
    }
    break;
  case 0xd:
    pcVar2 = "MERGE";
    FUN_10060af44("MERGE",5,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d5c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884de8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884a68);
      (*pcVar1)();
    }
    break;
  case 0xe:
    pcVar2 = "PURGE";
    FUN_10060af44("PURGE",5,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d10);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d9c);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008846c0);
      (*pcVar1)();
    }
    break;
  case 0xf:
    pcVar2 = "NOTIFY";
    FUN_10060af44("NOTIFY",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d34);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dc0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884894);
      (*pcVar1)();
    }
    break;
  case 0x10:
    pcVar2 = "SEARCH";
    FUN_10060af44("SEARCH",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d0c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d98);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10088468c);
      (*pcVar1)();
    }
    break;
  case 0x11:
    pcVar2 = "UNLOCK";
    FUN_10060af44("UNLOCK",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d4c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dd8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884998);
      (*pcVar1)();
    }
    break;
  case 0x12:
    pcVar2 = "REBIND";
    FUN_10060af44("REBIND",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d64);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884df0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884ad0);
      (*pcVar1)();
    }
    break;
  case 0x13:
    pcVar2 = "UNBIND";
    FUN_10060af44("UNBIND",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d7c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e08);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884c08);
      (*pcVar1)();
    }
    break;
  case 0x14:
    pcVar2 = "REPORT";
    FUN_10060af44("REPORT",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d50);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884ddc);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008849cc);
      (*pcVar1)();
    }
    break;
  case 0x15:
    pcVar2 = "DELETE";
    FUN_10060af44("DELETE",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d58);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884de4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884a34);
      (*pcVar1)();
    }
    break;
  case 0x16:
    pcVar2 = "UNLINK";
    FUN_10060af44("UNLINK",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d78);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e04);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884bd4);
      (*pcVar1)();
    }
    break;
  case 0x17:
    pcVar2 = "CONNECT";
    FUN_10060af44("CONNECT",7,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d80);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e0c);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884c3c);
      (*pcVar1)();
    }
    break;
  case 0x18:
    pcVar2 = "MSEARCH";
    FUN_10060af44("MSEARCH",7,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d2c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884db8);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10088482c);
      (*pcVar1)();
    }
    break;
  case 0x19:
    pcVar2 = "OPTIONS";
    FUN_10060af44("OPTIONS",7,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d28);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884db4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008847f8);
      (*pcVar1)();
    }
    break;
  case 0x1a:
    pcVar2 = "PROPFIND";
    FUN_10060af44("PROPFIND",8,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d8c);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e18);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884cd8);
      (*pcVar1)();
    }
    break;
  case 0x1b:
    pcVar2 = "CHECKOUT";
    FUN_10060af44("CHECKOUT",8,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d08);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d94);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884658);
      (*pcVar1)();
    }
    break;
  case 0x1c:
    pcVar2 = "PROPPATCH";
    FUN_10060af44("PROPPATCH",9,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d84);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e10);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884c70);
      (*pcVar1)();
    }
    break;
  case 0x1d:
    pcVar2 = "SUBSCRIBE";
    FUN_10060af44("SUBSCRIBE",9,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d88);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e14);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884ca4);
      (*pcVar1)();
    }
    break;
  case 0x1e:
    pcVar2 = "MKCALENDAR";
    FUN_10060af44("MKCALENDAR",10,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d70);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dfc);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884b6c);
      (*pcVar1)();
    }
    break;
  case 0x1f:
    pcVar2 = "MKACTIVITY";
    FUN_10060af44("MKACTIVITY",10,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d48);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884dd4);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884964);
      (*pcVar1)();
    }
    break;
  case 0x20:
    pcVar2 = "UNSUBSCRIBE";
    FUN_10060af44("UNSUBSCRIBE",0xb,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d74);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e00);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884ba0);
      (*pcVar1)();
    }
    break;
  case 0x21:
    pcVar2 = "SOURCE";
    FUN_10060af44("SOURCE",6,2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)pcVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d14);
      (*pcVar1)();
    }
    if ((ulong)pcVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884da0);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar2;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008846f4);
      (*pcVar1)();
    }
    break;
  default:
    FUN_10060b1ac(param_1,param_2,*(undefined4 *)(unaff_x20 + 0xc));
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884d90);
      (*pcVar1)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e1c);
      (*pcVar1)();
    }
    iVar3 = *(uint *)(unaff_x20 + 0xc) + (uint)param_1;
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884e20);
      (*pcVar1)();
    }
  }
  *(int *)(unaff_x20 + 0xc) = iVar3;
  return;
}



/* Address: 0x100884ea8 | FUN_100884ea8 */

undefined1  [16] FUN_100884ea8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  lVar3 = *unaff_x20;
  lVar4 = unaff_x20[1];
  lVar2 = unaff_x20[2] - lVar4;
  if (unaff_x20[2] < lVar4) {
    lVar2 = lVar2 + *(long *)(lVar3 + 0x10);
  }
  if (lVar2 < 1) {
    lVar3 = 0;
    lVar4 = 0x22;
  }
  else {
    FUN_10087e618();
    if (lVar4 == 0x22) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100884f1c);
      (*pcVar1)();
    }
    FUN_1008928c4(1);
  }
  auVar5._8_8_ = lVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x100884f1c | FUN_100884f1c */

int FUN_100884f1c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (int)LZCOUNT(param_1 + -1);
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = 1 << (ulong)(-iVar2 & 0x1f);
  }
  iVar2 = 1;
  if (param_1 != 0) {
    iVar2 = iVar1;
  }
  return iVar2;
}



/* Address: 0x100884f44 | FUN_100884f44 */

void FUN_100884f44(long param_1,long param_2,long param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_70,1,0);
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_88,1,0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar2);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100885068);
      (*pcVar1)();
    }
    _swift_beginAccess(param_3 + 0x10,auStack_70,1,0);
    if (*(char *)(param_3 + 0x11) == '\x01') {
      *(undefined1 *)(param_3 + 0x10) = 0;
    }
    else {
      (*param_4)(0,0);
    }
  }
  return;
}



/* Address: 0x100885068 | FUN_100885068 */

undefined * FUN_100885068(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fe97c8;
  FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f09480;
  _swift_allocObject(&DAT_100f09480,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100f094a8;
    _swift_allocObject(&DAT_100f094a8,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1005dfec8;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(FUN_10088819c,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  uVar6 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar12 = 1;
    FUN_100308524(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1005dfec8,puVar3);
      _swift_endAccess(auStack_90);
      uVar7 = 0;
      uVar10 = 0;
      uVar6 = 0;
      goto LAB_100885294;
    }
    (*param_1)();
    FUN_100308538(uVar9,cVar1);
    uVar9 = 0;
    uVar12 = 0;
  }
  uVar7 = uVar9;
  uVar10 = uVar12;
  FUN_100630328(uVar9,uVar12);
  FUN_1002ec258(uVar9,uVar12);
LAB_100885294:
  FUN_1006486f8(uVar7,uVar10,uVar6);
  FUN_100004550(uVar7,uVar10);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1008852fc | FUN_1008852fc */

void FUN_1008852fc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x19) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined2 *)(param_1 + 0x18) = 0x100;
    _swift_beginAccess(param_1 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1008853bc | FUN_1008853bc */

undefined8 FUN_1008853bc(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x19) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined2 *)(unaff_x20 + 0x18) = 0x100;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x100885460 | FUN_100885460 */

void FUN_100885460(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe95a8,&DAT_100c80030);
  return;
}



/* Address: 0x100885474 | FUN_100885474 */

void FUN_100885474(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe95b0,&DAT_100c80420);
  return;
}



/* Address: 0x100885488 | FUN_100885488 */

void FUN_100885488(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe90f8,&DAT_100c7f5d0);
  return;
}



/* Address: 0x10088549c | FUN_10088549c */

void FUN_10088549c(undefined8 param_1)

{
  FUN_1008854b0(param_1,&DAT_100fe9100,&DAT_100c803a0);
  return;
}



/* Address: 0x1008854b0 | FUN_1008854b0 */

undefined1  [16] FUN_1008854b0(bool param_1,void *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  undefined1 *puVar12;
  char *pcVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  void *local_110;
  undefined1 auStack_108 [32];
  StaticString local_e8;
  __uint64 _Stack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined3 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  char *local_98;
  void *pvStack_90;
  char local_87;
  undefined1 local_80 [16];
  char *local_70;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar5.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_120 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    FUN_1000f7830(param_2,param_3);
    iVar4 = (int)local_80;
    puVar12 = auStack_108;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    puStack_a0 = puVar12;
    local_98 = pcVar13;
    param_4 = param_2;
    if ((iVar4 != 0) && (local_98 = local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    local_98 = (char *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    puStack_a0 = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = pvStack_90;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    param_4 = local_118;
    FUN_1005d8fac(local_110);
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_a0);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = local_98;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_1);
  SVar23.bridgeObject = param_4;
  SVar23.str = local_98;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = local_98;
  Swift::String::append(SVar19,SVar24);
  local_b0 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f09408;
  _swift_allocObject(&DAT_100f09408,0x52,7);
  local_c8 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_118 = *(code **)(lVar17 + 8);
  (*local_118)(auStack_120 + -uVar15,MVar5.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_110 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown != OVar11.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100885780);
    (*pcVar2)();
  }
  pvVar14 = local_110;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088577c);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_118)(lVar16,MVar5.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar7.unknown,0));
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar9;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  Swift::__print_unlocked();
  line = _Stack_e0;
  file.unknown = local_e8.unknown;
  *(undefined4 *)(lVar16 + -8) = 0;
  *(undefined8 *)(lVar16 + -0x10) = 0xd0;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100885884);
  (*pcVar2)();
}



/* Address: 0x100885884 | FUN_100885884 */

void FUN_100885884(long param_1,long param_2,long param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_70,1,0);
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar2;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_88,1,0);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar2);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008859a8);
      (*pcVar1)();
    }
    _swift_beginAccess(param_3 + 0x10,auStack_70,1,0);
    if (*(char *)(param_3 + 0x10) == '\x01') {
      *(undefined1 *)(param_3 + 0x11) = 0;
    }
    else {
      (*param_4)(0,0);
    }
  }
  return;
}



/* Address: 0x1008859a8 | FUN_1008859a8 */

undefined8 FUN_1008859a8(undefined1 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_39 = param_1;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100885a64);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100885a68);
    (*pcVar3)();
  }
  uVar1 = (uint)param_2 + 1;
  if (0xfffffffe < (uint)param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100885a6c);
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
  FUN_100612380(1,param_2);
  FUN_10061258c(&local_39,&local_38,param_2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100885a70 | FUN_100885a70 */

void FUN_100885a70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe95b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c801b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c801b0,&DAT_100f09350);
  DAT_100fe95b8 = pTVar1;
  return;
}



/* Address: 0x100885ab0 | FUN_100885ab0 */

void FUN_100885ab0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100885adc | FUN_100885adc */

void FUN_100885adc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  code *pcVar7;
  ulong uVar8;
  char *pcVar9;
  int iVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  undefined8 uVar13;
  
  sVar5 = *(short *)(param_1 + 0x28);
  sVar6 = *(short *)(param_1 + 0x2a);
  uVar13 = *(undefined8 *)(param_1 + 0x20);
  switch(uVar13) {
  case 0:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 100 Continue\r\n";
        FUN_10060af44("HTTP/1.1 100 Continue\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b00);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ce4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887318);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 100 Continue\r\n";
        FUN_10060af44("HTTP/1.0 100 Continue\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887af4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cd4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885b6c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 1:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 101 Switching Protocols\r\n";
        FUN_10060af44("HTTP/1.1 101 Switching Protocols\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ae0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cc0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887248);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 101 Switching Protocols\r\n";
        FUN_10060af44("HTTP/1.0 101 Switching Protocols\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ad8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cb8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886274);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 2:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 102 Processing\r\n";
        FUN_10060af44("HTTP/1.1 102 Processing\r\n",0x19,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887af8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cd8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008872b0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 102 Processing\r\n";
        FUN_10060af44("HTTP/1.0 102 Processing\r\n",0x19,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ae8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cc8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886304);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 3:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 200 OK\r\n";
        FUN_10060af44("HTTP/1.1 200 OK\r\n",0x11,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ab8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c98);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887110);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 200 OK\r\n";
        FUN_10060af44("HTTP/1.0 200 OK\r\n",0x11,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887aa8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c88);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008860c4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 4:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 201 Created\r\n";
        FUN_10060af44("HTTP/1.1 201 Created\r\n",0x16,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b40);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d1c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088741c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 201 Created\r\n";
        FUN_10060af44("HTTP/1.0 201 Created\r\n",0x16,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b1c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cfc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008864b4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 5:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 202 Accepted\r\n";
        FUN_10060af44("HTTP/1.1 202 Accepted\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b4c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d2c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008874b8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 202 Accepted\r\n";
        FUN_10060af44("HTTP/1.0 202 Accepted\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b2c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d08);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088658c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 6:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 203 Non-Authoritative Information\r\n";
        FUN_10060af44("HTTP/1.1 203 Non-Authoritative Information\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887afc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cdc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008872e4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 203 Non-Authoritative Information\r\n";
        FUN_10060af44("HTTP/1.0 203 Non-Authoritative Information\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887af0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cd0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088634c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 7:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 204 No Content\r\n";
        FUN_10060af44("HTTP/1.1 204 No Content\r\n",0x19,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b58);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d38);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887554);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 204 No Content\r\n";
        FUN_10060af44("HTTP/1.0 204 No Content\r\n",0x19,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b3c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d20);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886664);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 8:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 205 Reset Content\r\n";
        FUN_10060af44("HTTP/1.1 205 Reset Content\r\n",0x1c,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ad0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cb0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008871ac);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 205 Reset Content\r\n";
        FUN_10060af44("HTTP/1.0 205 Reset Content\r\n",0x1c,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ac0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ca0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088619c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 9:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 206 Partial Content\r\n";
        FUN_10060af44("HTTP/1.1 206 Partial Content\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b54);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d34);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887520);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 206 Partial Content\r\n";
        FUN_10060af44("HTTP/1.0 206 Partial Content\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b38);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d14);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088661c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 10:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 207 Multi-Status\r\n";
        FUN_10060af44("HTTP/1.1 207 Multi-Status\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887aa0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c80);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008870a8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 207 Multi-Status\r\n";
        FUN_10060af44("HTTP/1.0 207 Multi-Status\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a98);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c78);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886034);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0xb:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 208 Already Reported\r\n";
        FUN_10060af44("HTTP/1.1 208 Already Reported\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ac8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ca8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887178);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 208 Already Reported\r\n";
        FUN_10060af44("HTTP/1.0 208 Already Reported\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ab0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c94);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886154);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0xc:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 226 IM Used\r\n";
        FUN_10060af44("HTTP/1.1 226 IM Used\r\n",0x16,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b48);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d28);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887484);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 226 IM Used\r\n";
        FUN_10060af44("HTTP/1.0 226 IM Used\r\n",0x16,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b24);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d04);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886544);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0xd:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 300 Multiple Choices\r\n";
        FUN_10060af44("HTTP/1.1 300 Multiple Choices\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a84);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c64);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886fd8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 300 Multiple Choices\r\n";
        FUN_10060af44("HTTP/1.0 300 Multiple Choices\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a78);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c58);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885f14);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0xe:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 301 Moved Permanently\r\n";
        FUN_10060af44("HTTP/1.1 301 Moved Permanently\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887aec);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ccc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088727c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 301 Moved Permanently\r\n";
        FUN_10060af44("HTTP/1.0 301 Moved Permanently\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ae4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cc4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008862bc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0xf:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 302 Found\r\n";
        FUN_10060af44("HTTP/1.1 302 Found\r\n",0x14,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a70);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c50);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886f70);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 302 Found\r\n";
        FUN_10060af44("HTTP/1.0 302 Found\r\n",0x14,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a6c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c4c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885e84);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x10:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 303 See Other\r\n";
        FUN_10060af44("HTTP/1.1 303 See Other\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b14);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cf4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887380);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 303 See Other\r\n";
        FUN_10060af44("HTTP/1.0 303 See Other\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b08);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ce8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008863dc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x11:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 304 Not Modified\r\n";
        FUN_10060af44("HTTP/1.1 304 Not Modified\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b50);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d30);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008874ec);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 304 Not Modified\r\n";
        FUN_10060af44("HTTP/1.0 304 Not Modified\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b30);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d10);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008865d4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x12:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 305 Use Proxy\r\n";
        FUN_10060af44("HTTP/1.1 305 Use Proxy\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b94);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d74);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088768c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 305 Use Proxy\r\n";
        FUN_10060af44("HTTP/1.0 305 Use Proxy\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b80);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d60);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886814);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x13:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 307 Temporary Redirect\r\n";
        FUN_10060af44("HTTP/1.1 307 Temporary Redirect\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b34);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d18);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008873e8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 307 Temporary Redirect\r\n";
        FUN_10060af44("HTTP/1.0 307 Temporary Redirect\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b18);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cf8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088646c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x14:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 308 Permanent Redirect\r\n";
        FUN_10060af44("HTTP/1.1 308 Permanent Redirect\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b44);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d24);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887450);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 308 Permanent Redirect\r\n";
        FUN_10060af44("HTTP/1.0 308 Permanent Redirect\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b20);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d00);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008864fc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x15:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 400 Bad Request\r\n";
        FUN_10060af44("HTTP/1.1 400 Bad Request\r\n",0x1a,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b78);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d58);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887624);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 400 Bad Request\r\n";
        FUN_10060af44("HTTP/1.0 400 Bad Request\r\n",0x1a,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b74);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d54);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886784);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x16:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 401 Unauthorized\r\n";
        FUN_10060af44("HTTP/1.1 401 Unauthorized\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bb0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d90);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088775c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 401 Unauthorized\r\n";
        FUN_10060af44("HTTP/1.0 401 Unauthorized\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ba4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d84);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886934);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x17:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 402 Payment Required\r\n";
        FUN_10060af44("HTTP/1.1 402 Payment Required\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887adc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cbc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887214);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 402 Payment Required\r\n";
        FUN_10060af44("HTTP/1.0 402 Payment Required\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887acc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cac);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088622c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x18:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 403 Forbidden\r\n";
        FUN_10060af44("HTTP/1.1 403 Forbidden\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ad4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cb4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008871e0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 403 Forbidden\r\n";
        FUN_10060af44("HTTP/1.0 403 Forbidden\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ac4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ca4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008861e4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x19:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 404 Not Found\r\n";
        FUN_10060af44("HTTP/1.1 404 Not Found\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bc8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887da8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088782c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 404 Not Found\r\n";
        FUN_10060af44("HTTP/1.0 404 Not Found\r\n",0x18,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bc4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887da4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886a54);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1a:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 405 Method Not Allowed\r\n";
        FUN_10060af44("HTTP/1.1 405 Method Not Allowed\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a64);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c44);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886f08);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 405 Method Not Allowed\r\n";
        FUN_10060af44("HTTP/1.0 405 Method Not Allowed\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a5c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c3c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885df4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1b:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 406 Not Acceptable\r\n";
        FUN_10060af44("HTTP/1.1 406 Not Acceptable\r\n",0x1d,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bb4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d94);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887790);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 406 Not Acceptable\r\n";
        FUN_10060af44("HTTP/1.0 406 Not Acceptable\r\n",0x1d,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ba8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d88);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088697c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1c:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 407 Proxy Authentication Required\r\n";
        FUN_10060af44("HTTP/1.1 407 Proxy Authentication Required\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bb8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d98);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008877c4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 407 Proxy Authentication Required\r\n";
        FUN_10060af44("HTTP/1.0 407 Proxy Authentication Required\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bac);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d8c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008869c4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1d:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 408 Request Timeout\r\n";
        FUN_10060af44("HTTP/1.1 408 Request Timeout\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b64);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d44);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887588);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 408 Request Timeout\r\n";
        FUN_10060af44("HTTP/1.0 408 Request Timeout\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b5c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d3c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008866ac);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1e:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 409 Conflict\r\n";
        FUN_10060af44("HTTP/1.1 409 Conflict\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b0c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cec);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088734c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 409 Conflict\r\n";
        FUN_10060af44("HTTP/1.0 409 Conflict\r\n",0x17,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b04);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ce0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886394);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x1f:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 410 Gone\r\n";
        FUN_10060af44("HTTP/1.1 410 Gone\r\n",0x13,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b68);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d48);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008875bc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 410 Gone\r\n";
        FUN_10060af44("HTTP/1.0 410 Gone\r\n",0x13,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b60);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d40);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008866f4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x20:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 411 Length Required\r\n";
        FUN_10060af44("HTTP/1.1 411 Length Required\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a88);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c68);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088700c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 411 Length Required\r\n";
        FUN_10060af44("HTTP/1.0 411 Length Required\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a80);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c60);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885f5c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x21:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 412 Precondition Failed\r\n";
        FUN_10060af44("HTTP/1.1 412 Precondition Failed\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a68);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c48);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886f3c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 412 Precondition Failed\r\n";
        FUN_10060af44("HTTP/1.0 412 Precondition Failed\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a60);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c40);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885e3c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x22:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 413 Payload Too Large\r\n";
        FUN_10060af44("HTTP/1.1 413 Payload Too Large\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a50);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c34);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886ea0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 413 Payload Too Large\r\n";
        FUN_10060af44("HTTP/1.0 413 Payload Too Large\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a44);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c28);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885d64);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x23:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 414 URI Too Long\r\n";
        FUN_10060af44("HTTP/1.1 414 URI Too Long\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a58);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c38);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886ed4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 414 URI Too Long\r\n";
        FUN_10060af44("HTTP/1.0 414 URI Too Long\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a54);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c30);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885dac);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x24:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 415 Unsupported Media Type\r\n";
        FUN_10060af44("HTTP/1.1 415 Unsupported Media Type\r\n",0x25,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a3c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c1c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886dd0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 415 Unsupported Media Type\r\n";
        FUN_10060af44("HTTP/1.0 415 Unsupported Media Type\r\n",0x25,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a2c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c0c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885c44);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x25:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 416 Range Not Satisfiable\r\n";
        FUN_10060af44("HTTP/1.1 416 Range Not Satisfiable\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bc0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887da0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008877f8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 416 Range Not Satisfiable\r\n";
        FUN_10060af44("HTTP/1.0 416 Range Not Satisfiable\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bbc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d9c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886a0c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x26:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 417 Expectation Failed\r\n";
        FUN_10060af44("HTTP/1.1 417 Expectation Failed\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b90);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d70);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887658);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 417 Expectation Failed\r\n";
        FUN_10060af44("HTTP/1.0 417 Expectation Failed\r\n",0x21,2,*(undefined4 *)(unaff_x20 + 0xc))
        ;
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b7c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d5c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008867cc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x27:
    break;
  case 0x28:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 421 Misdirected Request\r\n";
        FUN_10060af44("HTTP/1.1 421 Misdirected Request\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887abc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c9c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887144);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 421 Misdirected Request\r\n";
        FUN_10060af44("HTTP/1.0 421 Misdirected Request\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887aac);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c8c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088610c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x29:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 422 Unprocessable Entity\r\n";
        FUN_10060af44("HTTP/1.1 422 Unprocessable Entity\r\n",0x23,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b28);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d0c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008873b4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 422 Unprocessable Entity\r\n";
        FUN_10060af44("HTTP/1.0 422 Unprocessable Entity\r\n",0x23,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b10);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887cf0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886424);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2a:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 423 Locked\r\n";
        FUN_10060af44("HTTP/1.1 423 Locked\r\n",0x15,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b9c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d7c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008876f4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 423 Locked\r\n";
        FUN_10060af44("HTTP/1.0 423 Locked\r\n",0x15,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b88);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d68);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008868a4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2b:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 424 Failed Dependency\r\n";
        FUN_10060af44("HTTP/1.1 424 Failed Dependency\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a28);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c08);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886d9c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 424 Failed Dependency\r\n";
        FUN_10060af44("HTTP/1.0 424 Failed Dependency\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a24);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c04);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885bfc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2c:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 426 Upgrade Required\r\n";
        FUN_10060af44("HTTP/1.1 426 Upgrade Required\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a7c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c5c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886fa4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 426 Upgrade Required\r\n";
        FUN_10060af44("HTTP/1.0 426 Upgrade Required\r\n",0x1f,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a74);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c54);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885ecc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2d:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 428 Precondition Required\r\n";
        FUN_10060af44("HTTP/1.1 428 Precondition Required\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b70);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d50);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008875f0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 428 Precondition Required\r\n";
        FUN_10060af44("HTTP/1.0 428 Precondition Required\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b6c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d4c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088673c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2e:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 429 Too Many Requests\r\n";
        FUN_10060af44("HTTP/1.1 429 Too Many Requests\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887be8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dc8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008878fc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 429 Too Many Requests\r\n";
        FUN_10060af44("HTTP/1.0 429 Too Many Requests\r\n",0x20,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887be0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dc0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886b74);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x2f:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 431 Request Header Fields Too Large\r\n";
        FUN_10060af44("HTTP/1.1 431 Request Header Fields Too Large\r\n",0x2e,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a48);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c24);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886e38);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 431 Request Header Fields Too Large\r\n";
        FUN_10060af44("HTTP/1.0 431 Request Header Fields Too Large\r\n",0x2e,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a34);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c14);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885cd4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x30:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 451 Unavailable For Legal Reasons\r\n";
        FUN_10060af44("HTTP/1.1 451 Unavailable For Legal Reasons\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a90);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c70);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887040);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 451 Unavailable For Legal Reasons\r\n";
        FUN_10060af44("HTTP/1.0 451 Unavailable For Legal Reasons\r\n",0x2c,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a8c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c6c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885fa4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x31:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 500 Internal Server Error\r\n";
        FUN_10060af44("HTTP/1.1 500 Internal Server Error\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ab4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c90);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008870dc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 500 Internal Server Error\r\n";
        FUN_10060af44("HTTP/1.0 500 Internal Server Error\r\n",0x24,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887aa4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c84);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088607c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x32:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 501 Not Implemented\r\n";
        FUN_10060af44("HTTP/1.1 501 Not Implemented\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a20);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c00);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886d68);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 501 Not Implemented\r\n";
        FUN_10060af44("HTTP/1.0 501 Not Implemented\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a1c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bfc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885bb4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x33:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 502 Bad Gateway\r\n";
        FUN_10060af44("HTTP/1.1 502 Bad Gateway\r\n",0x1a,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bf0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dd0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887930);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 502 Bad Gateway\r\n";
        FUN_10060af44("HTTP/1.0 502 Bad Gateway\r\n",0x1a,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bec);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dcc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886bbc);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x34:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 503 Service Unavailable\r\n";
        FUN_10060af44("HTTP/1.1 503 Service Unavailable\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887be4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dc4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008878c8);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 503 Service Unavailable\r\n";
        FUN_10060af44("HTTP/1.0 503 Service Unavailable\r\n",0x22,2,*(undefined4 *)(unaff_x20 + 0xc)
                     );
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bdc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dbc);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886b2c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x35:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 504 Gateway Timeout\r\n";
        FUN_10060af44("HTTP/1.1 504 Gateway Timeout\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a40);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c20);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886e04);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 504 Gateway Timeout\r\n";
        FUN_10060af44("HTTP/1.0 504 Gateway Timeout\r\n",0x1e,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a30);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c10);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885c8c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x36:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 505 HTTP Version Not Supported\r\n";
        FUN_10060af44("HTTP/1.1 505 HTTP Version Not Supported\r\n",0x29,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bd0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887db0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887860);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 505 HTTP Version Not Supported\r\n";
        FUN_10060af44("HTTP/1.0 505 HTTP Version Not Supported\r\n",0x29,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bcc);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dac);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886a9c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x37:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 506 Variant Also Negotiates\r\n";
        FUN_10060af44("HTTP/1.1 506 Variant Also Negotiates\r\n",0x26,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bd8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887db8);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887894);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 506 Variant Also Negotiates\r\n";
        FUN_10060af44("HTTP/1.0 506 Variant Also Negotiates\r\n",0x26,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bd4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887db4);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886ae4);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x38:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 507 Insufficient Storage\r\n";
        FUN_10060af44("HTTP/1.1 507 Insufficient Storage\r\n",0x23,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a4c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c2c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886e6c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 507 Insufficient Storage\r\n";
        FUN_10060af44("HTTP/1.0 507 Insufficient Storage\r\n",0x23,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a38);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c18);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885d1c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x39:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 508 Loop Detected\r\n";
        FUN_10060af44("HTTP/1.1 508 Loop Detected\r\n",0x1c,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b98);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d78);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008876c0);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 508 Loop Detected\r\n";
        FUN_10060af44("HTTP/1.0 508 Loop Detected\r\n",0x1c,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b84);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d64);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10088685c);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x3a:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 510 Not Extended\r\n";
        FUN_10060af44("HTTP/1.1 510 Not Extended\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a9c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c7c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887074);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 510 Not Extended\r\n";
        FUN_10060af44("HTTP/1.0 510 Not Extended\r\n",0x1b,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a94);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887c74);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100885fec);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  case 0x3b:
    if (sVar6 == 1) {
      if (sVar5 == 1) {
        pcVar9 = "HTTP/1.1 511 Network Authentication Required\r\n";
        FUN_10060af44("HTTP/1.1 511 Network Authentication Required\r\n",0x2e,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ba0);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d80);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887728);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
      if (sVar5 == 0) {
        pcVar9 = "HTTP/1.0 511 Network Authentication Required\r\n";
        FUN_10060af44("HTTP/1.0 511 Network Authentication Required\r\n",0x2e,2,
                      *(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887b8c);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887d6c);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008868ec);
          (*pcVar7)();
        }
        goto LAB_100886d18;
      }
    }
    break;
  default:
    if (sVar6 == 1) {
      uVar1 = *(undefined8 *)(param_1 + 0x10);
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      if (sVar5 == 1) {
        uVar4 = *(undefined4 *)(unaff_x20 + 0xc);
        _swift_bridgeObjectRetain(uVar13);
        pcVar9 = "HTTP/1.1 ";
        FUN_10060af44("HTTP/1.1 ",9,2,uVar4);
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bf8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dd8);
          (*pcVar7)();
        }
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887de0);
          (*pcVar7)();
        }
        *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        FUN_100888110(uVar2,uVar3,uVar11);
        FUN_100884288(uVar2,uVar3,uVar11);
        FUN_10087b2d4(uVar2,uVar3,uVar11);
        pcVar9 = "\r\n";
        FUN_10060af44("\r\n",2,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887de8);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887df0);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887df4);
          (*pcVar7)();
        }
LAB_1008879d8:
        *(int *)(unaff_x20 + 0xc) = iVar10;
        FUN_10087b2d4(uVar1,uVar12,uVar13);
        return;
      }
      if (sVar5 == 0) {
        uVar4 = *(undefined4 *)(unaff_x20 + 0xc);
        _swift_bridgeObjectRetain(uVar13);
        pcVar9 = "HTTP/1.0 ";
        FUN_10060af44("HTTP/1.0 ",9,2,uVar4);
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887bf4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dd4);
          (*pcVar7)();
        }
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887ddc);
          (*pcVar7)();
        }
        *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        uVar2 = *(undefined8 *)(param_1 + 0x10);
        uVar3 = *(undefined8 *)(param_1 + 0x18);
        uVar11 = *(undefined8 *)(param_1 + 0x20);
        FUN_100888110(uVar2,uVar3,uVar11);
        FUN_100884288(uVar2,uVar3,uVar11);
        FUN_10087b2d4(uVar2,uVar3,uVar11);
        pcVar9 = "\r\n";
        FUN_10060af44("\r\n",2,2,*(undefined4 *)(unaff_x20 + 0xc));
        if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887de4);
          (*pcVar7)();
        }
        if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100887dec);
          (*pcVar7)();
        }
        iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
        if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100886c80);
          (*pcVar7)();
        }
        goto LAB_1008879d8;
      }
    }
  }
  FUN_1008843b4(*(undefined4 *)(param_1 + 0x28));
  uVar8 = 0x20;
  FUN_1008859a8(0x20,*(undefined4 *)(unaff_x20 + 0xc));
  if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a04);
    (*pcVar7)();
  }
  if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a08);
    (*pcVar7)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar8)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a0c);
    (*pcVar7)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar8;
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  FUN_100888110(uVar13,uVar1,uVar12);
  FUN_100884288(uVar13,uVar1,uVar12);
  FUN_10087b2d4(uVar13,uVar1,uVar12);
  pcVar9 = "\r\n";
  FUN_10060af44("\r\n",2,2,*(undefined4 *)(unaff_x20 + 0xc));
  if ((long)pcVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a10);
    (*pcVar7)();
  }
  if ((ulong)pcVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a14);
    (*pcVar7)();
  }
  iVar10 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar9;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar9)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100887a18);
    (*pcVar7)();
  }
LAB_100886d18:
  *(int *)(unaff_x20 + 0xc) = iVar10;
  return;
}



/* Address: 0x100887ee4 | thunk_FUN_100887ee8 */

void thunk_FUN_100887ee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe95c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80080,&DAT_100f092a8);
  DAT_100fe95c0 = pTVar1;
  return;
}



/* Address: 0x100887ee8 | FUN_100887ee8 */

void FUN_100887ee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe95c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80080;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80080,&DAT_100f092a8);
  DAT_100fe95c0 = pTVar1;
  return;
}



/* Address: 0x100887f28 | thunk_FUN_100887f2c */

void thunk_FUN_100887f2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80138;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80138,&DAT_100f09328);
  DAT_100fe9608 = pTVar1;
  return;
}


