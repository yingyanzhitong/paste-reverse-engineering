/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100639774 | FUN_100639774 */

void FUN_100639774(long param_1,undefined8 param_2)

{
  char *pcVar1;
  long *unaff_x20;
  long lVar2;
  char local_51;
  undefined1 auStack_50 [32];
  
  FUN_10000cbfc(param_2,auStack_50);
  pcVar1 = &local_51;
  _swift_dynamicCast(pcVar1,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,&DAT_100eeb880,6);
  if (((int)pcVar1 != 0) && (local_51 == '\0')) {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x90)) = 1;
    FUN_1006388bc(param_1);
  }
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_10062b574(param_2);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x100639818 | thunk_FUN_100639720 */

void thunk_FUN_100639720(void)

{
  FUN_100639720();
  return;
}



/* Address: 0x10063981c | thunk_FUN_1006394b4 */

void thunk_FUN_1006394b4(void)

{
  FUN_1006394b4();
  return;
}



/* Address: 0x100639820 | thunk_FUN_100639774 */

void thunk_FUN_100639774(void)

{
  FUN_100639774();
  return;
}



/* Address: 0x100639824 | thunk_FUN_1006390cc */

void thunk_FUN_1006390cc(void)

{
  FUN_1006390cc();
  return;
}



/* Address: 0x100639828 | thunk_FUN_1006393a0 */

void thunk_FUN_1006393a0(void)

{
  FUN_1006393a0();
  return;
}



/* Address: 0x10063982c | FUN_10063982c */

void FUN_10063982c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  long lVar3;
  TargetResilientWitness *pTVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined1 auStack_d0 [8];
  long local_c8;
  long lStack_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar9 = *unaff_x20;
  lVar14 = *(long *)(lVar9 + 0x50);
  lVar2 = 0;
  local_b8 = param_4;
  local_b0 = param_1;
  local_a8 = param_3;
  local_a0 = param_2;
  _swift_getAssociatedTypeWitness(0,param_4,lVar14,0x100cb86dc,&TargetProtocolRequirement_100cb86ec)
  ;
  local_c8 = *(long *)(lVar2 + -8);
  puVar15 = auStack_d0 + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lStack_c0 = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,OVar1.value);
  lVar13 = *(long *)(lVar8 + -8);
  lVar12 = (long)puVar15 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar9 + 0x60);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_78,0,0);
  (**(code **)(lVar13 + 0x10))(lVar12,(long)unaff_x20 + lVar2,lVar8);
  pcVar11 = *(code **)(*(long *)(lVar14 + -8) + 0x30);
  lVar3 = lVar12;
  (*pcVar11)(lVar12,1,lVar14);
  (**(code **)(lVar13 + 8))(lVar12,lVar8);
  lVar8 = local_b8;
  if ((int)lVar3 == 1) {
    lVar8 = 0x21;
    _swift_beginAccess((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70),auStack_90,0x21,0);
    uVar7 = local_a0;
    FUN_100637768(local_a0);
    _swift_endAccess(auStack_90);
  }
  else {
    local_98 = local_b8;
    pTVar4 = &TargetResilientWitness_100c69dfc;
    _swift_getWitnessTable(&TargetResilientWitness_100c69dfc,lVar9,&local_98);
    uVar7 = local_a0;
    thunk_FUN_10066a214(puVar15,local_a0,lVar9,pTVar4);
    _swift_beginAccess((long)unaff_x20 + lVar2,auStack_90,0x21,0);
    lVar2 = (long)unaff_x20 + lVar2;
    (*pcVar11)(lVar2,1,lVar14);
    if ((int)lVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100639b1c);
      (*pcVar11)();
    }
    (**(code **)(lVar8 + 0x18))(puVar15,lVar14,lVar8);
    _swift_endAccess(auStack_90);
    (**(code **)(local_c8 + 8))(puVar15,lStack_c0);
  }
  lVar2 = local_a8;
  puVar10 = *(undefined **)(local_b0 + 0x18);
  if (puVar10 == (undefined *)0x0) {
    if (local_a8 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar7 = DAT_101057be8;
    uVar5 = *(ulong *)(lVar2 + 0x20);
    lVar3 = *(long *)(lVar2 + 0x28);
    _swift_getObjectType();
    uVar6 = uVar5;
    lVar9 = lVar3;
    (**(code **)(lVar3 + 0x10))();
    if ((uVar6 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar7);
      FUN_1006486f8();
      FUN_100004550(uVar7,lVar9);
      _swift_bridgeObjectRelease(lVar8);
      return;
    }
    puVar10 = &DAT_100eee408;
    _swift_allocObject(&DAT_100eee408,0x20,7);
    *(long *)(puVar10 + 0x10) = lVar2;
    *(undefined8 *)(puVar10 + 0x18) = uVar7;
    pcVar11 = *(code **)(lVar3 + 0x18);
    _swift_retain(lVar2);
    _swift_errorRetain(uVar7);
    (*pcVar11)(FUN_10061dfe0,puVar10,uVar5,lVar3);
  }
  else {
    _swift_retain(puVar10);
    FUN_10062ac2c(uVar7,lVar2);
  }
  _swift_release(puVar10);
  return;
}



/* Address: 0x100639b1c | FUN_100639b1c */

void FUN_100639b1c(void)

{
  FUN_10063982c();
  return;
}



/* Address: 0x100639b24 | FUN_100639b24 */

void FUN_100639b24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  
  if (*(char *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) == '\x01') {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80)) = 2;
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    _swift_getObjectType(uVar1);
    FUN_1000f3c84();
    puVar2 = &DAT_100eee430;
    _swift_allocObject(&DAT_100eee430,0x28,7);
    *(long **)(puVar2 + 0x10) = unaff_x20;
    *(long *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    uVar3 = uVar1;
    _swift_getObjectType(uVar1);
    pcVar5 = *(code **)(lVar4 + 0x98);
    _swift_retain(param_2);
    _swift_unknownObjectRetain(uVar1);
    _swift_retain();
    _swift_retain(param_1);
    (*pcVar5)(FUN_10063a890,puVar2,uVar3,lVar4);
    _swift_unknownObjectRelease(uVar1);
    _swift_release(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100639c14);
  (*pcVar5)();
}



/* Address: 0x100639c14 | FUN_100639c14 */

void FUN_100639c14(long *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1006388bc(param_2);
  if (*(char *)((long)param_1 + *(long *)(*param_1 + 0x80)) == '\x02') {
    *(undefined1 *)((long)param_1 + *(long *)(*param_1 + 0x80)) = 3;
  }
  uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38);
  uVar3 = uVar1;
  _swift_getObjectType(uVar1);
  _swift_unknownObjectRetain(uVar1);
  FUN_100642338(uVar3,uVar2);
  _swift_unknownObjectRelease(uVar1);
  FUN_100631244(param_2,param_3);
  return;
}



/* Address: 0x100639ca4 | thunk_FUN_100639b24 */

void thunk_FUN_100639b24(void)

{
  FUN_100639b24();
  return;
}



/* Address: 0x100639ca8 | FUN_100639ca8 */

long * FUN_100639ca8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar2 = *unaff_x20;
  unaff_x20[2] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  return unaff_x20;
}



/* Address: 0x100639d34 | FUN_100639d34 */

void FUN_100639d34(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  unaff_x20[2] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = param_2;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



/* Address: 0x100639da0 | FUN_100639da0 */

long * FUN_100639da0(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  _swift_allocObject();
  lVar2 = *unaff_x20;
  unaff_x20[2] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return unaff_x20;
}



/* Address: 0x100639e24 | FUN_100639e24 */

void FUN_100639e24(undefined8 param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  unaff_x20[2] = 0;
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(lVar2 + 0x70));
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x20))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),param_1);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  return;
}



/* Address: 0x100639e88 | FUN_100639e88 */

void FUN_100639e88(void)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  FUN_10063a718(unaff_x20[2]);
  (**(code **)(*(long *)(*(long *)(lVar1 + 0x50) + -8) + 8))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  return;
}



/* Address: 0x100639edc | FUN_100639edc */

void FUN_100639edc(void)

{
  FUN_100639ee8(FUN_100639e88);
  return;
}



/* Address: 0x100639ee8 | FUN_100639ee8 */

void FUN_100639ee8(code *param_1)

{
  (*param_1)();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100639f0c | thunk_FUN_100639f10 */

/* WARNING: Removing unreachable block (ram,0x00010063a158) */
/* WARNING: Removing unreachable block (ram,0x00010063a174) */
/* WARNING: Removing unreachable block (ram,0x00010063a328) */
/* WARNING: Removing unreachable block (ram,0x00010063a194) */
/* WARNING: Removing unreachable block (ram,0x00010063a378) */
/* WARNING: Removing unreachable block (ram,0x00010063a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010063a384) */

void thunk_FUN_100639f10(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  TargetResilientWitness *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long *unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  ulong uStack_100;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined2 uStack_ec;
  undefined1 uStack_ea;
  undefined1 auStack_e8 [80];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar16 = *unaff_x20;
  lVar12 = *(long *)(lVar16 + 0x50);
  lVar6 = *(long *)(lVar16 + 0x58);
  lVar9 = *(long *)(lVar12 + -8);
  lVar17 = (long)&lStack_120 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lVar7 = lVar12;
  lStack_108 = param_1;
  _swift_getAssociatedTypeWitness(0,lVar6,lVar12,0x100cb87a8,&TargetProtocolRequirement_100cb87b0);
  lStack_120 = *(long *)(lVar2 + -8);
  lVar14 = lVar17 - (*(long *)(lStack_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = unaff_x20[2];
  if (lVar13 != 1) {
    if (lVar13 == 2) {
      return;
    }
    if (lVar13 != 0) {
      if (param_3 == 0) {
        _swift_errorRetain(lVar13);
      }
      else {
        uVar4 = *(ulong *)(param_3 + 0x20);
        lVar12 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        pcVar15 = *(code **)(lVar12 + 0x10);
        _swift_errorRetain(lVar13);
        uVar10 = uVar4;
        lVar6 = lVar12;
        (*pcVar15)(uVar4,lVar12);
        if ((uVar10 & 1) == 0) {
          puVar11 = &DAT_100eee4a8;
          _swift_allocObject(&DAT_100eee4a8,0x20,7);
          *(long *)(puVar11 + 0x10) = param_3;
          *(long *)(puVar11 + 0x18) = lVar13;
          pcVar15 = *(code **)(lVar12 + 0x18);
          FUN_10063a848(lVar13);
          _swift_retain(param_3);
          (*pcVar15)(thunk_FUN_10061dfe0,puVar11,uVar4,lVar12);
          _swift_release(puVar11);
        }
        else {
          lVar12 = lVar13;
          thunk_FUN_1005de8f4(lVar13);
          FUN_1006486f8();
          FUN_100004550(lVar12,lVar6);
          _swift_bridgeObjectRelease(lVar7);
        }
      }
      lVar12 = *(long *)(lStack_108 + 0x10);
      if (lVar12 == 0) {
        FUN_10063a718(lVar13);
        return;
      }
      _swift_retain(lVar12);
      FUN_10062b624(lVar13);
      FUN_10063a718(lVar13);
      _swift_release(lVar12);
      return;
    }
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4ec);
    (*pcVar15)();
  }
  pTVar3 = &TargetResilientWitness_100c69e5c;
  lStack_118 = lVar2;
  _swift_getWitnessTable(&TargetResilientWitness_100c69e5c,lVar16);
  lStack_110 = lVar14;
  thunk_FUN_10066a214(lVar14,param_2,lVar16,pTVar3);
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(puVar1,auStack_e8,0x21,0);
  uVar4 = *puVar1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f0);
    (*pcVar15)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    uVar10 = *puVar1;
    _swift_beginAccess(uVar10 + 0x10,auStack_80,0,0);
    uVar4 = (ulong)*(uint *)(uVar10 + 0x10);
    FUN_10061204c();
    *puVar1 = uVar4;
    _swift_release(uVar10);
  }
  uVar4 = *puVar1;
  _swift_beginAccess(uVar4 + 0x10,auStack_98,0,0);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined2 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)((long)puVar1 + 0x16) = 0;
  puVar1[1] = 0;
  _swift_endAccess(auStack_e8);
  (**(code **)(lVar9 + 0x10))(lVar17,(long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),lVar12);
  _swift_beginAccess(puVar1,auStack_e8,0x21,0);
  if (*puVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f4);
    (*pcVar15)();
  }
  (**(code **)(lVar6 + 0x10))(lStack_110,puVar1,lVar12,lVar6);
  _swift_endAccess(auStack_e8);
  (**(code **)(lVar9 + 8))(lVar17,lVar12);
  uStack_100 = *puVar1;
  if (uStack_100 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f8);
    (*pcVar15)();
  }
  uStack_ea = *(undefined1 *)((long)puVar1 + 0x16);
  uStack_ec = *(undefined2 *)((long)puVar1 + 0x14);
  uStack_f0 = (undefined4)puVar1[2];
  uStack_f8 = (undefined4)puVar1[1];
  uStack_f4 = (undefined4)(puVar1[1] >> 0x20);
  ppuVar8 = &PTR_TargetResilientWitness_100c69e84_Implementation_100fd7db0;
  FUN_10066a260(auStack_e8,&uStack_100,lVar16,
                &PTR_TargetResilientWitness_100c69e84_Implementation_100fd7db0);
  puVar11 = *(undefined **)(lStack_108 + 0x18);
  if (puVar11 == (undefined *)0x0) {
    if (param_3 == 0) goto LAB_10063a250;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar5 = DAT_101057be8;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar12 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar10 = uVar4;
    lVar6 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar10 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar5);
      FUN_1006486f8();
      FUN_100004550(uVar5,lVar6);
      _swift_bridgeObjectRelease(ppuVar8);
      goto LAB_10063a250;
    }
    puVar11 = &DAT_100eee480;
    _swift_allocObject(&DAT_100eee480,0x20,7);
    *(long *)(puVar11 + 0x10) = param_3;
    *(undefined8 *)(puVar11 + 0x18) = uVar5;
    pcVar15 = *(code **)(lVar12 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar5);
    (*pcVar15)(thunk_FUN_10061dfe0,puVar11,uVar4,lVar12);
  }
  else {
    _swift_retain(puVar11);
    FUN_10062ac2c(auStack_e8,param_3);
  }
  _swift_release(puVar11);
LAB_10063a250:
  lVar12 = lStack_110;
  FUN_1005e70f4(auStack_e8);
  (**(code **)(lStack_120 + 8))(lVar12,lStack_118);
  return;
}



/* Address: 0x100639f10 | FUN_100639f10 */

/* WARNING: Removing unreachable block (ram,0x00010063a158) */
/* WARNING: Removing unreachable block (ram,0x00010063a174) */
/* WARNING: Removing unreachable block (ram,0x00010063a328) */
/* WARNING: Removing unreachable block (ram,0x00010063a194) */
/* WARNING: Removing unreachable block (ram,0x00010063a378) */
/* WARNING: Removing unreachable block (ram,0x00010063a3c4) */
/* WARNING: Removing unreachable block (ram,0x00010063a384) */

void FUN_100639f10(long param_1,undefined8 param_2,long param_3)

{
  ulong *puVar1;
  long lVar2;
  TargetResilientWitness *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  long *unaff_x20;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  ulong local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined2 local_ec;
  undefined1 local_ea;
  undefined1 auStack_e8 [80];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar16 = *unaff_x20;
  lVar12 = *(long *)(lVar16 + 0x50);
  lVar6 = *(long *)(lVar16 + 0x58);
  lVar9 = *(long *)(lVar12 + -8);
  lVar17 = (long)&local_120 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  lVar7 = lVar12;
  local_108 = param_1;
  _swift_getAssociatedTypeWitness(0,lVar6,lVar12,0x100cb87a8,&TargetProtocolRequirement_100cb87b0);
  local_120 = *(long *)(lVar2 + -8);
  lVar14 = lVar17 - (*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = unaff_x20[2];
  if (lVar13 != 1) {
    if (lVar13 == 2) {
      return;
    }
    if (lVar13 != 0) {
      if (param_3 == 0) {
        _swift_errorRetain(lVar13);
      }
      else {
        uVar4 = *(ulong *)(param_3 + 0x20);
        lVar12 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        pcVar15 = *(code **)(lVar12 + 0x10);
        _swift_errorRetain(lVar13);
        uVar10 = uVar4;
        lVar6 = lVar12;
        (*pcVar15)(uVar4,lVar12);
        if ((uVar10 & 1) == 0) {
          puVar11 = &DAT_100eee4a8;
          _swift_allocObject(&DAT_100eee4a8,0x20,7);
          *(long *)(puVar11 + 0x10) = param_3;
          *(long *)(puVar11 + 0x18) = lVar13;
          pcVar15 = *(code **)(lVar12 + 0x18);
          FUN_10063a848(lVar13);
          _swift_retain(param_3);
          (*pcVar15)(thunk_FUN_10061dfe0,puVar11,uVar4,lVar12);
          _swift_release(puVar11);
        }
        else {
          lVar12 = lVar13;
          thunk_FUN_1005de8f4(lVar13);
          FUN_1006486f8();
          FUN_100004550(lVar12,lVar6);
          _swift_bridgeObjectRelease(lVar7);
        }
      }
      lVar12 = *(long *)(local_108 + 0x10);
      if (lVar12 == 0) {
        FUN_10063a718(lVar13);
        return;
      }
      _swift_retain(lVar12);
      FUN_10062b624(lVar13);
      FUN_10063a718(lVar13);
      _swift_release(lVar12);
      return;
    }
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4ec);
    (*pcVar15)();
  }
  pTVar3 = &TargetResilientWitness_100c69e5c;
  local_118 = lVar2;
  _swift_getWitnessTable(&TargetResilientWitness_100c69e5c,lVar16);
  local_110 = lVar14;
  thunk_FUN_10066a214(lVar14,param_2,lVar16,pTVar3);
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(puVar1,auStack_e8,0x21,0);
  uVar4 = *puVar1;
  if (uVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f0);
    (*pcVar15)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    uVar10 = *puVar1;
    _swift_beginAccess(uVar10 + 0x10,auStack_80,0,0);
    uVar4 = (ulong)*(uint *)(uVar10 + 0x10);
    FUN_10061204c();
    *puVar1 = uVar4;
    _swift_release(uVar10);
  }
  uVar4 = *puVar1;
  _swift_beginAccess(uVar4 + 0x10,auStack_98,0,0);
  *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(uVar4 + 0x10);
  *(undefined2 *)((long)puVar1 + 0x14) = 0;
  *(undefined1 *)((long)puVar1 + 0x16) = 0;
  puVar1[1] = 0;
  _swift_endAccess(auStack_e8);
  (**(code **)(lVar9 + 0x10))(lVar17,(long)unaff_x20 + *(long *)(*unaff_x20 + 0x68),lVar12);
  _swift_beginAccess(puVar1,auStack_e8,0x21,0);
  if (*puVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f4);
    (*pcVar15)();
  }
  (**(code **)(lVar6 + 0x10))(local_110,puVar1,lVar12,lVar6);
  _swift_endAccess(auStack_e8);
  (**(code **)(lVar9 + 8))(lVar17,lVar12);
  local_100 = *puVar1;
  if (local_100 == 0) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10063a4f8);
    (*pcVar15)();
  }
  local_ea = *(undefined1 *)((long)puVar1 + 0x16);
  local_ec = *(undefined2 *)((long)puVar1 + 0x14);
  local_f0 = (undefined4)puVar1[2];
  local_f8 = (undefined4)puVar1[1];
  uStack_f4 = (undefined4)(puVar1[1] >> 0x20);
  ppuVar8 = &PTR_TargetResilientWitness_100c69e84_Implementation_100fd7db0;
  FUN_10066a260(auStack_e8,&local_100,lVar16,
                &PTR_TargetResilientWitness_100c69e84_Implementation_100fd7db0);
  puVar11 = *(undefined **)(local_108 + 0x18);
  if (puVar11 == (undefined *)0x0) {
    if (param_3 == 0) goto LAB_10063a250;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar5 = DAT_101057be8;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar12 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar10 = uVar4;
    lVar6 = lVar12;
    (**(code **)(lVar12 + 0x10))();
    if ((uVar10 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar5);
      FUN_1006486f8();
      FUN_100004550(uVar5,lVar6);
      _swift_bridgeObjectRelease(ppuVar8);
      goto LAB_10063a250;
    }
    puVar11 = &DAT_100eee480;
    _swift_allocObject(&DAT_100eee480,0x20,7);
    *(long *)(puVar11 + 0x10) = param_3;
    *(undefined8 *)(puVar11 + 0x18) = uVar5;
    pcVar15 = *(code **)(lVar12 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar5);
    (*pcVar15)(thunk_FUN_10061dfe0,puVar11,uVar4,lVar12);
  }
  else {
    _swift_retain(puVar11);
    FUN_10062ac2c(auStack_e8,param_3);
  }
  _swift_release(puVar11);
LAB_10063a250:
  lVar12 = local_110;
  FUN_1005e70f4(auStack_e8);
  (**(code **)(local_120 + 8))(lVar12,local_118);
  return;
}



/* Address: 0x10063a4f8 | thunk_FUN_10063a4fc */

void thunk_FUN_10063a4fc(long param_1)

{
  undefined8 *puVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar2 = *puVar1;
    lVar3 = *(long *)(*unaff_x20 + 0x70);
    _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0x21,0);
    if (*(long *)((long)unaff_x20 + lVar3) != 0) {
      FUN_100613734(uVar2);
    }
    _swift_endAccess(auStack_48);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_10062aae4();
    _swift_release(lVar3);
  }
  return;
}



/* Address: 0x10063a4fc | FUN_10063a4fc */

void FUN_10063a4fc(long param_1)

{
  undefined8 *puVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  if (*(char *)(puVar1 + 1) != '\x01') {
    uVar2 = *puVar1;
    lVar3 = *(long *)(*unaff_x20 + 0x70);
    _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0x21,0);
    if (*(long *)((long)unaff_x20 + lVar3) != 0) {
      FUN_100613734(uVar2);
    }
    _swift_endAccess(auStack_48);
  }
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_10062aae4();
    _swift_release(lVar3);
  }
  return;
}



/* Address: 0x10063a594 | thunk_FUN_10063a598 */

void thunk_FUN_10063a598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long *unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (unaff_x20[2] != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10063a714);
    (*pcVar8)();
  }
  unaff_x20[2] = 1;
  FUN_10063a718(0);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(lVar7 + 0x40);
  ppuVar6 = *(undefined ***)(lVar7 + 0x48);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    param_3 = 7;
    _swift_allocObject();
    uVar10 = *(undefined8 *)(lVar7 + 0x38);
    uVar9 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined ***)(lVar5 + 0x30) = ppuVar6;
    *(undefined2 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = uVar3;
    *(undefined ***)(lVar5 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar5 + 0x20) = lVar7;
    *(undefined8 *)(lVar5 + 0x18) = uVar10;
    *(undefined8 *)(lVar5 + 0x10) = uVar9;
    _swift_retain(lVar7);
    _swift_unknownObjectRetain(uVar9);
    ppuVar6 = &PTR_PTR_100eeeed8;
  }
  lVar7 = lVar5;
  _swift_getObjectType(lVar5);
  pcVar8 = (code *)ppuVar6[3];
  _swift_unknownObjectRetain(lVar4);
  (*pcVar8)(lVar7,ppuVar6);
  _swift_unknownObjectRelease(lVar5);
  lVar4 = 0x100;
  FUN_100613fa8(0x100,lVar7,ppuVar6,param_3,param_4);
  _swift_beginAccess(lVar4 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined4 *)(lVar4 + 0x10);
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(plVar1,auStack_70,1,0);
  lVar5 = *plVar1;
  *plVar1 = lVar4;
  plVar1[1] = 0;
  *(undefined1 *)((long)plVar1 + 0x16) = 0;
  *(undefined2 *)((long)plVar1 + 0x14) = 0;
  *(undefined4 *)(plVar1 + 2) = uVar2;
  _swift_release(lVar5);
  return;
}



/* Address: 0x10063a598 | FUN_10063a598 */

void FUN_10063a598(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long *unaff_x20;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  if (unaff_x20[2] != 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10063a714);
    (*pcVar8)();
  }
  unaff_x20[2] = 1;
  FUN_10063a718(0);
  lVar7 = *(long *)(param_1 + 0x20);
  lVar4 = *(long *)(lVar7 + 0x40);
  ppuVar6 = *(undefined ***)(lVar7 + 0x48);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    lVar5 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    param_3 = 7;
    _swift_allocObject();
    uVar10 = *(undefined8 *)(lVar7 + 0x38);
    uVar9 = *(undefined8 *)(lVar7 + 0x30);
    *(undefined8 *)(lVar5 + 0x28) = 0;
    *(undefined ***)(lVar5 + 0x30) = ppuVar6;
    *(undefined2 *)(lVar5 + 0x38) = 0;
    *(undefined8 *)(lVar5 + 0x40) = uVar3;
    *(undefined ***)(lVar5 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar5 + 0x20) = lVar7;
    *(undefined8 *)(lVar5 + 0x18) = uVar10;
    *(undefined8 *)(lVar5 + 0x10) = uVar9;
    _swift_retain(lVar7);
    _swift_unknownObjectRetain(uVar9);
    ppuVar6 = &PTR_PTR_100eeeed8;
  }
  lVar7 = lVar5;
  _swift_getObjectType(lVar5);
  pcVar8 = (code *)ppuVar6[3];
  _swift_unknownObjectRetain(lVar4);
  (*pcVar8)(lVar7,ppuVar6);
  _swift_unknownObjectRelease(lVar5);
  lVar4 = 0x100;
  FUN_100613fa8(0x100,lVar7,ppuVar6,param_3,param_4);
  _swift_beginAccess(lVar4 + 0x10,auStack_58,0,0);
  uVar2 = *(undefined4 *)(lVar4 + 0x10);
  plVar1 = (long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(plVar1,auStack_70,1,0);
  lVar5 = *plVar1;
  *plVar1 = lVar4;
  plVar1[1] = 0;
  *(undefined1 *)((long)plVar1 + 0x16) = 0;
  *(undefined2 *)((long)plVar1 + 0x14) = 0;
  *(undefined4 *)(plVar1 + 2) = uVar2;
  _swift_release(lVar5);
  return;
}



/* Address: 0x10063a714 | thunk_FUN_10063a89c */

void thunk_FUN_10063a89c(void)

{
  FUN_10063a89c();
  return;
}



/* Address: 0x10063a718 | FUN_10063a718 */

void FUN_10063a718(ulong param_1)

{
  if (param_1 < 3) {
    return;
  }
  _swift_errorRelease();
  return;
}



/* Address: 0x10063a728 | FUN_10063a728 */

void FUN_10063a728(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    _swift_release(param_2);
    _swift_release(param_5);
    return;
  }
  return;
}



/* Address: 0x10063a758 | FUN_10063a758 */

undefined8 FUN_10063a758(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd7cf0;
  FUN_1000f7830(&DAT_100fd7cf0,0x100c69c90);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10063a7a0 | FUN_10063a7a0 */

bool FUN_10063a7a0(long param_1,ulong param_2)

{
  bool bVar1;
  undefined1 auStack_38 [24];
  
  param_2 = param_2 & 0xffffffff;
  if (param_2 < 0x800) {
    _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
    bVar1 = (long)(*(uint *)(param_1 + 0x10) - param_2) < (long)param_2;
    if (*(uint *)(param_1 + 0x10) < 0x401) {
      bVar1 = false;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}



/* Address: 0x10063a804 | thunk_FUN_10063a7a0 */

void thunk_FUN_10063a7a0(void)

{
  FUN_10063a7a0();
  return;
}



/* Address: 0x10063a808 | FUN_10063a808 */

void FUN_10063a808(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd7d00 != 0) {
    return;
  }
  uVar1 = 0x100c69d08;
  _swift_getWitnessTable(0x100c69d08,&DAT_100eee720);
  DAT_100fd7d00 = uVar1;
  return;
}



/* Address: 0x10063a848 | FUN_10063a848 */

void FUN_10063a848(ulong param_1)

{
  if (param_1 < 3) {
    return;
  }
  _swift_errorRetain();
  return;
}



/* Address: 0x10063a858 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10063a85c | FUN_10063a85c */

void FUN_10063a85c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10063a890 | FUN_10063a890 */

void FUN_10063a890(void)

{
  long unaff_x20;
  
  FUN_100639c14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10063a89c | FUN_10063a89c */

void FUN_10063a89c(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = unaff_x20[2];
  unaff_x20[2] = 2;
  FUN_10063a718(lVar2);
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
  _swift_beginAccess(puVar1,auStack_38,1,0);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)((long)puVar1 + 0xf) = 0;
  _swift_release(uVar3);
  return;
}



/* Address: 0x10063a8fc | thunk_FUN_10063a900 */

void thunk_FUN_10063a900(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd7d08 != 0) {
    return;
  }
  uVar1 = 0x100c69ca0;
  _swift_getWitnessTable(0x100c69ca0,&DAT_100eee690);
  DAT_100fd7d08 = uVar1;
  return;
}



/* Address: 0x10063a900 | FUN_10063a900 */

void FUN_10063a900(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd7d08 != 0) {
    return;
  }
  uVar1 = 0x100c69ca0;
  _swift_getWitnessTable(0x100c69ca0,&DAT_100eee690);
  DAT_100fd7d08 = uVar1;
  return;
}



/* Address: 0x10063a940 | FUN_10063a940 */

void FUN_10063a940(long param_1,undefined8 param_2,undefined8 *param_3)

{
  TargetResilientWitness *pTVar1;
  undefined8 local_28;
  
  local_28 = *param_3;
  pTVar1 = &TargetResilientWitness_100c69e24;
  _swift_getWitnessTable(&TargetResilientWitness_100c69e24,param_2,&local_28);
  *(TargetResilientWitness **)(param_1 + 8) = pTVar1;
  return;
}



/* Address: 0x10063a980 | FUN_10063a980 */

undefined1  [16] FUN_10063a980(void)

{
  return ZEXT816(0x100eee690);
}



/* Address: 0x10063a990 | FUN_10063a990 */

void FUN_10063a990(ulong param_1,ulong param_2)

{
  if ((long)param_1 < 0) {
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  else {
    _swift_errorRetain();
  }
  _swift_retain(param_2);
  return;
}



/* Address: 0x10063a9c0 | FUN_10063a9c0 */

void FUN_10063a9c0(undefined8 *param_1)

{
  FUN_10063a9e4(*param_1,param_1[1],param_1[2],(ulong)*(uint7 *)(param_1 + 3));
  return;
}



/* Address: 0x10063a9e4 | FUN_10063a9e4 */

void FUN_10063a9e4(ulong param_1,ulong param_2)

{
  if ((long)param_1 < 0) {
    param_2 = param_1 & 0x7fffffffffffffff;
  }
  else {
    _swift_errorRelease();
  }
  _swift_release(param_2);
  return;
}



/* Address: 0x10063aa14 | FUN_10063aa14 */

undefined8 * FUN_10063aa14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint7 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar6 = param_2[2];
  uVar5 = *(uint7 *)(param_2 + 3);
  uVar3 = *(undefined1 *)((long)param_2 + 0x1e);
  uVar4 = *(undefined3 *)((long)param_2 + 0x1c);
  FUN_10063a990(uVar1,uVar2,uVar6,(ulong)*(uint7 *)(param_2 + 3));
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar6;
  *(undefined1 *)((long)param_1 + 0x1e) = uVar3;
  *(short *)((long)param_1 + 0x1c) = (short)uVar4;
  *(int *)(param_1 + 3) = (int)uVar5;
  return param_1;
}



/* Address: 0x10063aa8c | FUN_10063aa8c */

undefined8 * FUN_10063aa8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined3 uVar6;
  uint7 uVar7;
  uint7 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar10 = param_2[2];
  uVar8 = *(uint7 *)(param_2 + 3);
  uVar5 = *(undefined1 *)((long)param_2 + 0x1e);
  uVar6 = *(undefined3 *)((long)param_2 + 0x1c);
  FUN_10063a990(uVar1,uVar3,uVar10,(ulong)*(uint7 *)(param_2 + 3));
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar9 = param_1[2];
  uVar7 = *(uint7 *)(param_1 + 3);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar10;
  *(int *)(param_1 + 3) = (int)uVar8;
  *(undefined1 *)((long)param_1 + 0x1e) = uVar5;
  *(short *)((long)param_1 + 0x1c) = (short)uVar6;
  FUN_10063a9e4(uVar2,uVar4,uVar9,(ulong)uVar7);
  return param_1;
}



/* Address: 0x10063ab28 | FUN_10063ab28 */

void FUN_10063ab28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xf);
  *(undefined8 *)((long)param_1 + 0x17) = *(undefined8 *)((long)param_2 + 0x17);
  *(undefined8 *)((long)param_1 + 0xf) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10063ab3c | FUN_10063ab3c */

undefined8 * FUN_10063ab3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  uint7 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar8 = param_2[2];
  uVar9 = *param_2;
  uVar3 = *(undefined4 *)(param_2 + 3);
  uVar5 = *(undefined2 *)((long)param_2 + 0x1c);
  uVar4 = *(undefined1 *)((long)param_2 + 0x1e);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = *(uint7 *)(param_1 + 3);
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[2] = uVar8;
  *(undefined4 *)(param_1 + 3) = uVar3;
  *(undefined2 *)((long)param_1 + 0x1c) = uVar5;
  *(undefined1 *)((long)param_1 + 0x1e) = uVar4;
  FUN_10063a9e4(uVar7,uVar1,uVar2,(ulong)uVar6);
  return param_1;
}



/* Address: 0x10063aba8 | FUN_10063aba8 */

int FUN_10063aba8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7e < param_2) && (*(char *)((long)param_1 + 0x1f) != '\0')) {
    return *param_1 + 0x7f;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)param_1 >> 0x20);
  uVar1 = (uVar1 >> 0x1f | (uVar1 >> 0x19 & 0x38 | (uint)*(undefined8 *)param_1 & 7) << 1) ^ 0x7f;
  if (0x7d < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10063ac04 | FUN_10063ac04 */

void FUN_10063ac04(ulong *param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  
  if (param_2 < 0x7f) {
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x1f) = 0;
    }
    if (param_2 != 0) {
      uVar1 = (ulong)(-param_2 >> 1 & 0x3f | (-param_2 & 0x7f) << 6);
      param_1[1] = 0;
      param_1[2] = 0;
      *param_1 = (uVar1 | uVar1 << 0x39) & 0xf000000000000007;
      *(undefined8 *)((long)param_1 + 0x17) = 0;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)((long)param_1 + 0x1e) = 0;
    *(undefined2 *)((long)param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 0x7f);
    if (0x7e < param_3) {
      *(undefined1 *)((long)param_1 + 0x1f) = 1;
    }
  }
  return;
}



/* Address: 0x10063ac6c | FUN_10063ac6c */

ulong FUN_10063ac6c(ulong *param_1)

{
  return *param_1 >> 0x3f;
}



/* Address: 0x10063ac78 | FUN_10063ac78 */

void FUN_10063ac78(ulong *param_1)

{
  *param_1 = *param_1 & 0x7fffffffffffffff;
  return;
}



/* Address: 0x10063ac88 | FUN_10063ac88 */

void FUN_10063ac88(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x10063ac9c | FUN_10063ac9c */

undefined1  [16] FUN_10063ac9c(void)

{
  return ZEXT816(0x100eee720);
}



/* Address: 0x10063acac | FUN_10063acac */

undefined1  [16] FUN_10063acac(void)

{
  return ZEXT816(0x100eee740);
}



/* Address: 0x10063acbc | FUN_10063acbc */

undefined1  [16] FUN_10063acbc(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_60 [2];
  TargetResilientWitness *local_50;
  TargetGenericWitnessTable *pTStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_60[0] = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
    local_60[1] = 0x100c69f78;
    local_50 = &TargetResilientWitness_100c69f90;
    pTStack_48 = &TargetGenericWitnessTable_100c69fa8;
    local_40 = &DAT_100c69fc0;
    puStack_38 = &DAT_100c69fd8;
    local_30 = &DAT_100c69ff0;
    puStack_28 = &DAT_100c6a008;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1,0,8,local_60,param_1 + 0x60);
    if (param_1 == 0) {
      param_1 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = CONCAT71(extraout_var,OVar1.value);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x10063ad70 | FUN_10063ad70 */

void FUN_10063ad70(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063ad7c | FUN_10063ad7c */

void FUN_10063ad7c(long param_1)

{
  long lVar1;
  ulong uVar2;
  TargetGenericWitnessTable *local_40;
  long local_38;
  undefined *puStack_30;
  undefined8 local_28;
  
  local_40 = &TargetGenericWitnessTable_100c69fa8;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c6a078;
    local_28 = 0x100c69f78;
    _swift_initClassMetadata2(param_1,0,4,&local_40,param_1 + 0x60);
  }
  return;
}



/* Address: 0x10063ae0c | FUN_10063ae0c */

void FUN_10063ae0c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063ae18 | FUN_10063ae18 */

void FUN_10063ae18(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (0xfffffffe < uVar1) {
    _swift_errorRetain(uVar1);
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10063ae54 | FUN_10063ae54 */

void FUN_10063ae54(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063ae60 | FUN_10063ae60 */

void FUN_10063ae60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x10063ae88 | FUN_10063ae88 */

undefined1 * FUN_10063ae88(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x33) = *(undefined4 *)(param_2 + 0x33);
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10063aeec | FUN_10063aeec */

undefined1 * FUN_10063aeec(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_retain();
  _swift_release(uVar1);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_retain();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_2 + 0x34);
  param_1[0x36] = param_2[0x36];
  return param_1;
}



/* Address: 0x10063af88 | FUN_10063af88 */

void FUN_10063af88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  *(undefined8 *)((long)param_1 + 0x2f) = *(undefined8 *)((long)param_2 + 0x2f);
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}


