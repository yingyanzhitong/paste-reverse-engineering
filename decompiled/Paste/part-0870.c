/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10096ed44 | FUN_10096ed44 */

void FUN_10096ed44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10096ed68 | FUN_10096ed68 */

void FUN_10096ed68(void)

{
  FUN_10096e9f4();
  return;
}



/* Address: 0x10096ed88 | FUN_10096ed88 */

void FUN_10096ed88(void)

{
  FUN_10096eda8();
  return;
}



/* Address: 0x10096eda8 | FUN_10096eda8 */

undefined8 FUN_10096eda8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong uVar9;
  byte bVar10;
  uint uVar11;
  long unaff_x20;
  long unaff_x21;
  ulong uVar12;
  ulong uVar13;
  uint uVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong local_a8;
  ulong uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  byte local_92;
  undefined1 local_67;
  
  puVar7 = param_2;
  do {
    if (*(char *)(unaff_x20 + 0x30) == '\x01') {
      param_1 = param_2;
      FUN_10096eb0c();
      if (unaff_x21 != 0) {
        return 1;
      }
      if (((uint)puVar7 & 0xff) == 1) {
        if (*(char *)(unaff_x20 + 0x30) == '\x01') {
          uVar11 = (uint)param_2[1];
          goto LAB_10096ef34;
        }
        goto LAB_10096ee14;
      }
      *(ulong **)(unaff_x20 + 0x28) = param_1;
      *(undefined1 *)(unaff_x20 + 0x30) = 0;
      uVar11 = (uint)param_2[1];
      puVar15 = param_1;
    }
    else {
LAB_10096ee14:
      puVar15 = *(ulong **)(unaff_x20 + 0x28);
      uVar11 = (uint)param_2[1];
    }
    uVar5 = (ulong)uVar11;
    if (((long)puVar15 < 0) ||
       ((ulong *)(ulong)*(uint *)((long)param_2 + 0xc) < puVar15 ||
        (long)(ulong)*(uint *)((long)param_2 + 0xc) - (long)puVar15 < (long)uVar5)) {
LAB_10096ef34:
      uVar1 = *(uint *)((long)param_2 + 0xc);
      if (uVar1 != uVar11) {
        uVar13 = *param_2;
        uVar5 = param_2[2];
        uVar3 = *(undefined2 *)((long)param_2 + 0x14);
        uVar2 = *(undefined1 *)((long)param_2 + 0x16);
        FUN_100968990();
        puVar6 = &DAT_100f1d3d8;
        _swift_allocError(&DAT_100f1d3d8,param_1,0,0);
        *param_1 = uVar13;
        *(uint *)(param_1 + 1) = uVar11;
        *(uint *)((long)param_1 + 0xc) = uVar1;
        *(int *)(param_1 + 2) = (int)uVar5;
        *(undefined2 *)((long)param_1 + 0x14) = uVar3;
        *(undefined1 *)((long)param_1 + 0x16) = uVar2;
        _swift_retain(uVar13);
        FUN_100626c9c(puVar6);
        _swift_errorRelease(puVar6);
      }
      return 1;
    }
    uVar14 = (uint)CONCAT21(*(undefined2 *)((long)param_2 + 0x14),
                            *(undefined1 *)((long)param_2 + 0x16));
    uVar1 = uVar14 + uVar11;
    bVar10 = (byte)uVar1;
    if (CARRY4(uVar14,uVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096efcc);
      (*pcVar4)();
    }
    uVar13 = *param_2;
    uVar14 = (uint)puVar15;
    if ((uVar1 & 0xff000000) == 0) {
      uVar16 = (ulong)(uVar1 >> 8);
      _swift_retain(uVar13);
      uVar9 = 0;
      puVar8 = puVar15;
      uVar12 = (ulong)(uVar1 + uVar14);
      uVar5 = uVar13;
    }
    else {
      FUN_1006135c8();
      puVar8 = (ulong *)((ulong)puVar15 >> 0x20);
      uVar16 = uVar13 >> 0x20 & 0xffff;
      bVar10 = (byte)(uVar13 >> 0x30);
      uVar9 = (ulong)puVar15 & 0xffffffff;
      puVar7 = puVar15;
      uVar12 = uVar13;
    }
    if (CARRY4(uVar11,uVar14)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096efd0);
      (*pcVar4)();
    }
    *(uint *)(param_2 + 1) = uVar11 + uVar14;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    uStack_a0 = uVar9 | (long)puVar8 << 0x20;
    local_92 = bVar10 | (byte)(uVar16 >> 0x10);
    local_94 = (undefined2)uVar16;
    local_98 = (undefined4)uVar12;
    local_67 = 0;
    local_a8 = uVar5;
    _swift_retain(uVar5);
    FUN_100626ce0(&local_a8);
    _swift_release(uVar5);
    param_1 = &local_a8;
    FUN_1005e70f4();
  } while( true );
}



/* Address: 0x10096efd0 | thunk_FUN_10096efd4 */

void thunk_FUN_10096efd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87ee8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87ee8,&DAT_100f1cf10);
  DAT_100fef578 = pTVar1;
  return;
}



/* Address: 0x10096efd4 | FUN_10096efd4 */

void FUN_10096efd4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef578 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87ee8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87ee8,&DAT_100f1cf10);
  DAT_100fef578 = pTVar1;
  return;
}



/* Address: 0x10096f014 | thunk_FUN_10096f018 */

void thunk_FUN_10096f018(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef580 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87f90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87f90,&DAT_100f1cfa0);
  DAT_100fef580 = pTVar1;
  return;
}



/* Address: 0x10096f018 | FUN_10096f018 */

void FUN_10096f018(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef580 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87f90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87f90,&DAT_100f1cfa0);
  DAT_100fef580 = pTVar1;
  return;
}



/* Address: 0x10096f058 | FUN_10096f058 */

void FUN_10096f058(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10096f064 | FUN_10096f064 */

undefined1  [16] FUN_10096f064(void)

{
  return ZEXT816(0x100f1cf10);
}



/* Address: 0x10096f074 | FUN_10096f074 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10096f074(void)

{
  return ZEXT816(0x100fef600);
}



/* Address: 0x10096f094 | FUN_10096f094 */

undefined1  [16] FUN_10096f094(void)

{
  return ZEXT816(0x100f1cfa0);
}



/* Address: 0x10096f0a4 | FUN_10096f0a4 */

void FUN_10096f0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10096f0b8 | FUN_10096f0b8 */

undefined1  [16] FUN_10096f0b8(void)

{
  return ZEXT816(0x100f1d030);
}



/* Address: 0x10096f0c8 | FUN_10096f0c8 */

void FUN_10096f0c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87f50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87f50,&DAT_100f1cf10);
  DAT_100fef678 = pTVar1;
  return;
}



/* Address: 0x10096f108 | FUN_10096f108 */

long FUN_10096f108(ulong param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  
  if ((param_1 & 0xff000000) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1c8);
    (*pcVar1)();
  }
  if ((param_2 & 0xff) == 0) {
    uVar3 = param_1 >> 8 & 0xffffff;
    FUN_10096f93c(uVar3,*(undefined4 *)(unaff_x20 + 0xc),0);
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1d8);
      (*pcVar1)();
    }
    if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1dc);
      (*pcVar1)();
    }
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1e0);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
    FUN_10096fa14();
    lVar4 = uVar3 + param_1;
    if (SCARRY8(uVar3,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1e4);
      (*pcVar1)();
    }
  }
  else {
    uVar3 = param_1;
    FUN_10096fa14();
    uVar2 = param_1 >> 8 & 0xffffff;
    FUN_10096f93c(uVar2,*(undefined4 *)(unaff_x20 + 0xc),param_2);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1cc);
      (*pcVar1)();
    }
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1d0);
      (*pcVar1)();
    }
    if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f1d4);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar2;
    lVar4 = uVar3 + uVar2;
    if (SCARRY8(uVar3,uVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096f174);
      (*pcVar1)();
    }
  }
  return lVar4;
}



/* Address: 0x10096f1e4 | FUN_10096f1e4 */

void FUN_10096f1e4(uint param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x27) = 0;
  *(char *)(unaff_x20 + 0x10) = (char)(0x4030100 >> (ulong)((param_1 & 3) << 3));
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  return;
}



/* Address: 0x10096f238 | FUN_10096f238 */

void FUN_10096f238(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x27) = 0;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  return;
}



/* Address: 0x10096f280 | FUN_10096f280 */

void FUN_10096f280(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x27) = 0;
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  return;
}



/* Address: 0x10096f298 | FUN_10096f298 */

void FUN_10096f298(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  byte bVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long unaff_x20;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  ulong local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_87;
  ulong local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  
  lVar11 = param_2;
  lVar12 = param_3;
  FUN_10065b5f8();
  uVar2 = (int)((ulong)lVar11 >> 0x20) - (int)lVar11;
  uVar14 = (ulong)uVar2;
  bVar1 = *(byte *)(unaff_x20 + 0x10);
  bVar4 = false;
  bVar5 = false;
  bVar6 = false;
  if (uVar2 != 0) {
    uVar17 = (uint)bVar1;
    bVar6 = SBORROW4(uVar17,2);
    bVar4 = (int)(uVar17 - 2) < 0;
    bVar5 = uVar17 == 2;
  }
  if (bVar5 || bVar4 != bVar6) {
    uVar15 = 0xffff;
    if (bVar1 != 1) {
      uVar15 = 0xffffff;
    }
    uVar9 = 0xff;
    if (bVar1 != 0) {
      uVar9 = uVar15;
    }
    if (uVar9 < uVar14) {
      if (param_3 != 0) {
        uVar16 = param_1;
        FUN_10096fadc();
        puVar8 = &DAT_100f1d1b8;
        uVar13 = 0;
        _swift_allocError(&DAT_100f1d1b8,uVar16,0,0);
        uVar14 = *(ulong *)(param_3 + 0x20);
        lVar11 = *(long *)(param_3 + 0x28);
        _swift_getObjectType();
        uVar15 = uVar14;
        lVar12 = lVar11;
        (**(code **)(lVar11 + 0x10))();
        if ((uVar15 & 1) == 0) {
          puVar10 = &DAT_100f1d0b8;
          _swift_allocObject(&DAT_100f1d0b8,0x20,7);
          *(long *)(puVar10 + 0x10) = param_3;
          *(undefined **)(puVar10 + 0x18) = puVar8;
          pcVar3 = *(code **)(lVar11 + 0x18);
          _swift_retain(param_3);
          _swift_errorRetain(puVar8);
          (*pcVar3)(FUN_1005dfd68,puVar10,uVar14,lVar11);
          _swift_release(puVar10);
          _swift_release(param_1);
        }
        else {
          puVar10 = puVar8;
          FUN_1005de8f4(puVar8);
          FUN_1006486f8();
          _swift_release(param_1);
          FUN_100004550(puVar10,lVar12);
          _swift_bridgeObjectRelease(uVar13);
        }
        _swift_errorRelease(puVar8);
        return;
      }
      _swift_release(param_1);
      return;
    }
  }
  uVar15 = *(ulong *)(unaff_x20 + 0x18);
  if (uVar15 == 0) {
    uVar16 = param_1;
    FUN_100627f08();
    uVar13 = uVar16;
    _swift_getObjectType();
    (**(code **)(lVar11 + 0x18))();
    _swift_unknownObjectRelease(uVar16);
    uVar15 = (ulong)*(uint *)(&DAT_100c88274 + (ulong)bVar1 * 4);
    FUN_100488140(uVar15,uVar13,lVar11,lVar12,param_4);
    _swift_beginAccess(uVar15 + 0x10,auStack_e0,0,0);
    local_70 = *(undefined4 *)(uVar15 + 0x10);
    local_78 = 0;
    local_6c = 0;
    local_6a = 0;
    uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
    *(ulong *)(unaff_x20 + 0x18) = uVar15;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined1 *)(unaff_x20 + 0x2e) = 0;
    *(undefined2 *)(unaff_x20 + 0x2c) = 0;
    *(undefined4 *)(unaff_x20 + 0x28) = local_70;
    local_80 = uVar15;
    _swift_retain(uVar15);
    _swift_release(uVar16);
    if (bVar1 < 2) goto LAB_10096f3e0;
LAB_10096f520:
    if (bVar1 == 2) {
      FUN_10096f108(uVar14,*(undefined1 *)(unaff_x20 + 0x11));
      goto LAB_10096f5dc;
    }
    if (bVar1 == 3) {
      FUN_10096f824(uVar14,0,*(undefined1 *)(unaff_x20 + 0x11));
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f700);
        (*pcVar3)();
      }
      if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f710);
        (*pcVar3)();
      }
      iVar7 = local_78._4_4_ + (uint)uVar14;
      if (CARRY4(local_78._4_4_,(uint)uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f560);
        (*pcVar3)();
      }
    }
    else {
      FUN_10096f750(uVar14,0,*(undefined1 *)(unaff_x20 + 0x11));
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f704);
        (*pcVar3)();
      }
      if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f714);
        (*pcVar3)();
      }
      iVar7 = local_78._4_4_ + (uint)uVar14;
      if (CARRY4(local_78._4_4_,(uint)uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f5a4);
        (*pcVar3)();
      }
    }
  }
  else {
    uVar9 = uVar15;
    local_80 = uVar15;
    _swift_retain_n(uVar15,2);
    iVar7 = (int)uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if (iVar7 == 0) {
      _swift_beginAccess(uVar15 + 0x10,auStack_e0,0,0);
      uVar9 = (ulong)*(uint *)(uVar15 + 0x10);
      FUN_10061204c();
      _swift_release_n(uVar15,2);
      local_80 = uVar9;
    }
    else {
      _swift_release(uVar15);
      uVar9 = uVar15;
    }
    _swift_beginAccess(uVar9 + 0x10,auStack_f8,0,0);
    local_70 = *(undefined4 *)(uVar9 + 0x10);
    local_6c = 0;
    local_6a = 0;
    local_78 = 0;
    if (1 < bVar1) goto LAB_10096f520;
LAB_10096f3e0:
    if (bVar1 == 0) {
      if (0xff < uVar2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f708);
        (*pcVar3)();
      }
      FUN_1008859a8(uVar14,0);
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f718);
        (*pcVar3)();
      }
      if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f720);
        (*pcVar3)();
      }
      iVar7 = local_78._4_4_ + (uint)uVar14;
      if (CARRY4(local_78._4_4_,(uint)uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f418);
        (*pcVar3)();
      }
    }
    else {
      if (uVar2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f70c);
        (*pcVar3)();
      }
      FUN_10096f93c(uVar14,0,*(undefined1 *)(unaff_x20 + 0x11));
      if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f71c);
        (*pcVar3)();
      }
      if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f724);
        (*pcVar3)();
      }
      iVar7 = local_78._4_4_ + (uint)uVar14;
      if (CARRY4(local_78._4_4_,(uint)uVar14)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f728);
        (*pcVar3)();
      }
    }
  }
  local_78 = CONCAT44(iVar7,(undefined4)local_78);
LAB_10096f5dc:
  uVar14 = local_80;
  local_c8 = local_80;
  uStack_c0 = local_78;
  local_b2 = local_6a;
  local_b4 = local_6c;
  local_b8 = local_70;
  local_87 = 0;
  _swift_retain(local_80);
  FUN_100626ebc(&local_c8,0);
  FUN_1005e70f4(&local_c8);
  FUN_100626ebc(param_2,param_3);
  _swift_release(uVar14);
  _swift_release(param_1);
  return;
}



/* Address: 0x10096f728 | FUN_10096f728 */

void FUN_10096f728(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10096f74c | thunk_FUN_10096f298 */

void thunk_FUN_10096f298(void)

{
  FUN_10096f298();
  return;
}



/* Address: 0x10096f750 | FUN_10096f750 */

undefined8 FUN_10096f750(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (param_1 & 0xff00ff00ff00ff00) >> 8 | (param_1 & 0xff00ff00ff00ff) << 8;
  uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
  local_40 = uVar5 >> 0x20 | uVar5 << 0x20;
  if (param_3 != '\0') {
    local_40 = param_1;
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f818);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f81c);
    (*pcVar3)();
  }
  uVar1 = (uint)param_2 + 8;
  if ((uint)param_2 < 0xfffffff8) {
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
    FUN_10061258c(&local_40,&local_38,param_2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return 8;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f820);
  (*pcVar3)();
}



/* Address: 0x10096f824 | FUN_10096f824 */

undefined8 FUN_10096f824(uint param_1,ulong param_2,char param_3)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  uint local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  local_3c = uVar2 >> 0x10 | uVar2 << 0x10;
  if (param_3 != '\0') {
    local_3c = param_1;
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f8ec);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f8f0);
    (*pcVar3)();
  }
  uVar2 = (uint)param_2 + 4;
  if ((uint)param_2 < 0xfffffffc) {
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar2) {
        iVar1 = uVar2 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar4 & 1);
    }
    FUN_100612380(4,param_2);
    FUN_10061258c(&local_3c,&local_38,param_2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return 4;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10096f8f4);
  (*pcVar3)();
}



/* Address: 0x10096f8f8 | FUN_10096f8f8 */

void FUN_10096f8f8(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_10096f93c();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10096f93c | FUN_10096f93c */

undefined8 FUN_10096f93c(uint param_1,ulong param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ushort local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_3a = (ushort)(param_1 >> 8) & 0xff | (ushort)((param_1 & 0xff00ff) << 8);
  if (param_3 != '\0') {
    local_3a = (ushort)param_1;
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096fa08);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096fa0c);
    (*pcVar3)();
  }
  uVar1 = (uint)param_2 + 2;
  if ((uint)param_2 < 0xfffffffe) {
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
    FUN_100612380(2,param_2);
    FUN_10061258c(&local_3a,&local_38,param_2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return 2;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10096fa10);
  (*pcVar3)();
}



/* Address: 0x10096fa14 | FUN_10096fa14 */

undefined8 FUN_10096fa14(undefined1 param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  local_39 = param_1;
  if (0xfffffffe < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096fad4);
    (*pcVar3)();
  }
  uVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar2 + 1) {
      iVar1 = (uVar2 + 1) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar4 & 1);
  }
  FUN_100612380(1,uVar2);
  FUN_10061258c(&local_39,&local_38,uVar2);
  if (*(int *)((long)unaff_x20 + 0xc) != -1) {
    *(int *)((long)unaff_x20 + 0xc) = *(int *)((long)unaff_x20 + 0xc) + 1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10096fad8);
  (*pcVar3)();
}



/* Address: 0x10096fadc | FUN_10096fadc */

void FUN_10096fadc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88118;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88118,&DAT_100f1d1b8);
  DAT_100fef680 = pTVar1;
  return;
}



/* Address: 0x10096fb1c | FUN_10096fb1c */

void FUN_10096fb1c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10096fb48 | thunk_FUN_10096fb4c */

void thunk_FUN_10096fb4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef688 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c880b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c880b0,&DAT_100f1d1b8);
  DAT_100fef688 = pTVar1;
  return;
}



/* Address: 0x10096fb4c | FUN_10096fb4c */

void FUN_10096fb4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef688 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c880b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c880b0,&DAT_100f1d1b8);
  DAT_100fef688 = pTVar1;
  return;
}



/* Address: 0x10096fb8c | thunk_FUN_10096fb90 */

void thunk_FUN_10096fb90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88158;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88158,&DAT_100f1d248);
  DAT_100fef690 = pTVar1;
  return;
}



/* Address: 0x10096fb90 | FUN_10096fb90 */

void FUN_10096fb90(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88158;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88158,&DAT_100f1d248);
  DAT_100fef690 = pTVar1;
  return;
}



/* Address: 0x10096fbd0 | FUN_10096fbd0 */

void FUN_10096fbd0(void)

{
  return;
}



/* Address: 0x10096fbd4 | FUN_10096fbd4 */

undefined1  [16] FUN_10096fbd4(void)

{
  return ZEXT816(0x100f1d1b8);
}



/* Address: 0x10096fbe4 | FUN_10096fbe4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10096fbe4(void)

{
  return ZEXT816(0x100fef718);
}



/* Address: 0x10096fc04 | FUN_10096fc04 */

undefined1  [16] FUN_10096fc04(void)

{
  return ZEXT816(0x100f1d248);
}



/* Address: 0x10096fc14 | FUN_10096fc14 */

void FUN_10096fc14(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  return;
}



/* Address: 0x10096fc40 | FUN_10096fc40 */

void FUN_10096fc40(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  return;
}



/* Address: 0x10096fc54 | FUN_10096fc54 */

undefined8 FUN_10096fc54(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long unaff_x21;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  lVar1 = param_2;
  FUN_10096fd4c();
  uVar4 = extraout_x8;
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar4 = 1;
    }
    else {
      local_62 = (undefined1)((uint)uVar3 >> 0x10);
      local_64 = (undefined2)uVar3;
      local_37 = 0;
      local_78 = param_2;
      lStack_70 = lVar1;
      local_68 = uVar2;
      _swift_retain();
      FUN_100626ce0(&local_78);
      _swift_release(param_2);
      FUN_1005e70f4(&local_78);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Address: 0x10096fce8 | FUN_10096fce8 */

ulong FUN_10096fce8(ulong param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x21;
  
  FUN_10096fd4c();
  if (unaff_x21 != 0) {
    param_1 = param_3 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x10096fd10 | FUN_10096fd10 */

void FUN_10096fd10(void)

{
  FUN_10097010c();
  return;
}



/* Address: 0x10096fd24 | FUN_10096fd24 */

ulong FUN_10096fd24(ulong param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x21;
  
  FUN_100970238();
  if (unaff_x21 != 0) {
    param_1 = param_3 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x10096fd4c | FUN_10096fd4c */

long FUN_10096fd4c(long *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  int iVar6;
  byte bVar7;
  char cVar8;
  ushort uVar9;
  code *pcVar10;
  bool bVar11;
  long lVar12;
  uint uVar13;
  long unaff_x20;
  long lVar14;
  undefined1 auStack_138 [24];
  long local_120;
  uint local_118;
  uint uStack_114;
  int local_110;
  ushort local_10c;
  byte local_10a;
  ulong local_108;
  ulong uStack_100;
  long local_f8;
  uint local_f0;
  uint uStack_ec;
  int local_e8;
  ushort local_e4;
  byte local_e2;
  ulong local_e0;
  ulong uStack_d8;
  undefined1 auStack_d0 [24];
  long local_b8;
  uint local_b0;
  uint uStack_ac;
  int local_a8;
  ushort local_a4;
  byte local_a2;
  ulong local_a0;
  ulong uStack_98;
  long local_90 [2];
  ushort local_7c;
  byte local_7a;
  long local_78;
  long lStack_70;
  
  uVar13 = *(uint *)(param_1 + 1);
  uVar3 = (ulong)uVar13;
  uVar4 = *(uint *)((long)param_1 + 0xc);
  uVar5 = (ulong)uVar4;
  if (uVar4 < uVar13) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffa4);
    (*pcVar10)();
  }
  iVar6 = (int)param_1[2];
  uVar9 = *(ushort *)((long)param_1 + 0x14);
  bVar7 = *(byte *)((long)param_1 + 0x16);
  if (iVar6 - (uint)CONCAT21(uVar9,bVar7) < uVar4) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffa8);
    (*pcVar10)();
  }
  lVar14 = *param_1;
  local_b8 = lVar14;
  local_b0 = uVar13;
  uStack_ac = uVar4;
  local_a8 = iVar6;
  local_a4 = uVar9;
  local_a2 = bVar7;
  local_a0 = uVar3;
  uStack_98 = uVar5;
  FUN_1005de7cc(local_90,*(undefined8 *)(unaff_x20 + 0x28));
  _swift_beginAccess(local_90[0] + 0x18,auStack_d0,0,0);
  if (SBORROW8(lStack_70,local_78)) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffac);
    (*pcVar10)();
  }
  if (lStack_70 != local_78) {
    lVar12 = 0;
    do {
      if (*(char *)(*(long *)(local_90[0] + 0x18) + (ulong)local_7c * 0x100 +
                    (ulong)local_7a + local_78 + lVar12) == '\n') {
        lVar2 = lVar12 + local_78;
        if (SCARRY8(lVar12,local_78)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffb0);
          (*pcVar10)();
        }
        lVar12 = lVar2 - uVar3;
        if (SBORROW8(lVar2,uVar3)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffb4);
          (*pcVar10)();
        }
        local_f8 = lVar14;
        local_f0 = uVar13;
        uStack_ec = uVar4;
        local_e8 = iVar6;
        local_e4 = uVar9;
        local_e2 = bVar7;
        local_e0 = uVar3;
        uStack_d8 = uVar5;
        _swift_retain_n(lVar14,2);
        FUN_10096e070(&local_f8);
        if ((long)local_e0 < lVar2) {
          local_120 = lVar14;
          local_118 = uVar13;
          uStack_114 = uVar4;
          local_110 = iVar6;
          local_10c = uVar9;
          local_10a = bVar7;
          local_108 = uVar3;
          uStack_100 = uVar5;
          if ((lVar2 <= (long)uVar3) || ((long)uVar5 < lVar2)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffc0);
            (*pcVar10)();
          }
          if ((long)(ulong)(uVar4 - uVar13) <= (long)((lVar2 + -1) - uVar3)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffc4);
            (*pcVar10)();
          }
          _swift_beginAccess(lVar14 + 0x18,auStack_138,0,0);
          cVar8 = *(char *)(*(long *)(lVar14 + 0x18) + (ulong)uVar9 * 0x100 + (ulong)bVar7 +
                           lVar2 + -1);
          _swift_retain(lVar14);
          FUN_10096e070(&local_120);
          if (cVar8 == '\r') {
            bVar11 = SBORROW8(lVar12,1);
            lVar12 = lVar12 + -1;
            if (bVar11) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffc8);
              (*pcVar10)();
            }
            uVar13 = 2;
            goto LAB_10096ff30;
          }
        }
        uVar13 = 1;
LAB_10096ff30:
        FUN_10060c6b4(lVar12);
        FUN_10096e070(local_90);
        uVar1 = *(uint *)(param_1 + 1) + uVar13;
        if (CARRY4(*(uint *)(param_1 + 1),uVar13)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffb8);
          (*pcVar10)();
        }
        if (uVar1 <= uVar4) {
          *(uint *)(param_1 + 1) = uVar1;
          *(undefined8 *)(unaff_x20 + 0x28) = 0;
          return lVar12;
        }
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096ffbc);
        (*pcVar10)();
      }
      lVar12 = lVar12 + 1;
    } while (lStack_70 - local_78 != lVar12);
  }
  _swift_retain(lVar14);
  FUN_10096e070(local_90);
  *(ulong *)(unaff_x20 + 0x28) = (ulong)(uVar4 - uVar13);
  return 0;
}



/* Address: 0x10096ffc8 | FUN_10096ffc8 */

undefined8 FUN_10096ffc8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 extraout_x8;
  undefined8 uVar4;
  long unaff_x21;
  long local_78;
  long lStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  lVar1 = param_2;
  FUN_10096fd4c();
  uVar4 = extraout_x8;
  if (unaff_x21 == 0) {
    if (param_2 == 0) {
      uVar4 = 1;
    }
    else {
      local_62 = (undefined1)((uint)uVar3 >> 0x10);
      local_64 = (undefined2)uVar3;
      local_37 = 0;
      local_78 = param_2;
      lStack_70 = lVar1;
      local_68 = uVar2;
      _swift_retain();
      FUN_100626ce0(&local_78);
      _swift_release(param_2);
      FUN_1005e70f4(&local_78);
      uVar4 = 0;
    }
  }
  return uVar4;
}



/* Address: 0x100970060 | FUN_100970060 */

void FUN_100970060(void)

{
  FUN_10097010c();
  return;
}



/* Address: 0x100970080 | FUN_100970080 */

void FUN_100970080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100004520(param_2,param_3);
  return;
}



/* Address: 0x10097008c | FUN_10097008c */

void FUN_10097008c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  FUN_10096fd4c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined4 *)(param_1 + 2) = uVar1;
    *(char *)((long)param_1 + 0x16) = (char)((uint)uVar2 >> 0x10);
    *(short *)((long)param_1 + 0x14) = (short)uVar2;
  }
  return;
}



/* Address: 0x1009700cc | FUN_1009700cc */

void FUN_1009700cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long unaff_x21;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  FUN_100970238();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined4 *)(param_1 + 2) = uVar1;
    *(char *)((long)param_1 + 0x16) = (char)((uint)uVar2 >> 0x10);
    *(short *)((long)param_1 + 0x14) = (short)uVar2;
  }
  return;
}



/* Address: 0x10097010c | FUN_10097010c */

undefined8 FUN_10097010c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 *local_a8;
  undefined8 *puStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_67;
  
  puVar6 = param_2;
  puVar8 = param_2;
  FUN_10096fd4c();
  if (unaff_x21 == 0) {
    while (puVar6 != (undefined8 *)0x0) {
      local_98 = (undefined4)param_3;
      local_92 = (undefined1)((ulong)param_3 >> 0x30);
      local_94 = (undefined2)((ulong)param_3 >> 0x20);
      local_67 = 0;
      local_a8 = puVar6;
      puStack_a0 = puVar8;
      _swift_retain();
      FUN_100626ce0(&local_a8);
      _swift_release(puVar6);
      FUN_1005e70f4(&local_a8);
      puVar6 = param_2;
      FUN_10096fd4c();
    }
    iVar1 = *(int *)(param_2 + 1);
    iVar2 = *(int *)((long)param_2 + 0xc);
    if (iVar2 != iVar1) {
      uVar9 = *param_2;
      uVar3 = *(undefined4 *)(param_2 + 2);
      uVar5 = *(undefined2 *)((long)param_2 + 0x14);
      uVar4 = *(undefined1 *)((long)param_2 + 0x16);
      FUN_100968990();
      puVar7 = &DAT_100f1d3d8;
      _swift_allocError(&DAT_100f1d3d8,puVar6,0,0);
      *puVar6 = uVar9;
      *(int *)(puVar6 + 1) = iVar1;
      *(int *)((long)puVar6 + 0xc) = iVar2;
      *(undefined4 *)(puVar6 + 2) = uVar3;
      *(undefined2 *)((long)puVar6 + 0x14) = uVar5;
      *(undefined1 *)((long)puVar6 + 0x16) = uVar4;
      _swift_retain(uVar9);
      FUN_100626c9c(puVar7);
      _swift_errorRelease(puVar7);
    }
  }
  return 1;
}



/* Address: 0x100970238 | FUN_100970238 */

void FUN_100970238(undefined8 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long unaff_x21;
  
  puVar6 = param_1;
  FUN_10096fd4c();
  if ((unaff_x21 == 0) && (puVar6 == (undefined8 *)0x0)) {
    iVar1 = *(int *)(param_1 + 1);
    iVar2 = *(int *)((long)param_1 + 0xc);
    if (iVar2 != iVar1) {
      uVar7 = *param_1;
      uVar3 = *(undefined4 *)(param_1 + 2);
      uVar5 = *(undefined2 *)((long)param_1 + 0x14);
      uVar4 = *(undefined1 *)((long)param_1 + 0x16);
      FUN_100968990();
      _swift_allocError(&DAT_100f1d3d8,puVar6,0,0);
      *puVar6 = uVar7;
      *(int *)(puVar6 + 1) = iVar1;
      *(int *)((long)puVar6 + 0xc) = iVar2;
      *(undefined4 *)(puVar6 + 2) = uVar3;
      *(undefined2 *)((long)puVar6 + 0x14) = uVar5;
      *(undefined1 *)((long)puVar6 + 0x16) = uVar4;
      _swift_willThrow();
      _swift_retain(uVar7);
    }
  }
  return;
}



/* Address: 0x1009702e8 | FUN_1009702e8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009702e8(void)

{
  return ZEXT816(0x100fef800);
}



/* Address: 0x100970308 | FUN_100970308 */

void FUN_100970308(undefined8 param_1,ulong param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long lVar2;
  
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar8 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar8 + 0x40);
  uStack_88 = unaff_x20[1];
  local_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  local_70 = *(undefined1 *)(unaff_x20 + 4);
  uVar4 = param_2;
  FUN_10065910c();
  uVar3 = param_2;
  FUN_100659090(param_2);
  if (uVar4 >> 0x38 == 2) {
    local_98 = 0;
  }
  else {
    uVar4 = uVar4 & 0x1ffffffffffffff;
    FUN_1006324f0(uVar4,uVar3 & 0x1ffffffffffffff,uVar7);
    local_98 = (byte)uVar4;
  }
  FUN_100658f14(auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_2);
  local_98 = local_98 & 1;
  uVar5 = 0;
  local_a0 = uVar7;
  _swift_getTupleTypeMetadata2(0,uVar7,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  FUN_100617fb8(param_1,FUN_100970454,auStack_b0,lVar2,PTR___type_metadata_for_Swift_Never_100eadc38
                ,uVar5,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40
               );
  (**(code **)(lVar8 + 8))(auStack_c0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Address: 0x100970454 | FUN_100970454 */

void FUN_100970454(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined1 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,PTR___type_metadata_for_Swift_Bool_100eac570,0,0);
  iVar2 = *(int *)(lVar3 + 0x30);
  (**(code **)(*(long *)(lVar4 + -8) + 0x10))(param_1,param_2,lVar4);
  *(undefined1 *)(param_1 + iVar2) = uVar1;
  return;
}



/* Address: 0x1009704d0 | FUN_1009704d0 */

void FUN_1009704d0(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x1009704e4 | FUN_1009704e4 */

void FUN_1009704e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8830c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8830c,&DAT_100f1d3d8);
  DAT_100fef8c0 = pTVar1;
  return;
}



/* Address: 0x100970524 | FUN_100970524 */

void FUN_100970524(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x100970538 | FUN_100970538 */

void FUN_100970538(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88390,&DAT_100f1d400);
  DAT_100fef8c8 = pTVar1;
  return;
}



/* Address: 0x100970578 | FUN_100970578 */

void FUN_100970578(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c883b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c883b8,&DAT_100f1d400);
  DAT_100fef8d0 = pTVar1;
  return;
}



/* Address: 0x1009705b8 | FUN_1009705b8 */

void FUN_1009705b8(void)

{
  FUN_1009705cc();
  return;
}



/* Address: 0x1009705cc | FUN_1009705cc */

void FUN_1009705cc(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x1009705fc | FUN_1009705fc */

void FUN_1009705fc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88414;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88414,&DAT_100f1d420);
  DAT_100fef8d8 = pTVar1;
  return;
}



/* Address: 0x10097063c | FUN_10097063c */

void FUN_10097063c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef8e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8843c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8843c,&DAT_100f1d420);
  DAT_100fef8e0 = pTVar1;
  return;
}



/* Address: 0x10097067c | FUN_10097067c */

undefined1  [16] FUN_10097067c(void)

{
  return ZEXT816(0x100f1d360);
}


