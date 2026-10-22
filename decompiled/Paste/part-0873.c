/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009751c4 | thunk_FUN_100974e58 */

void thunk_FUN_100974e58(void)

{
  long unaff_x20;
  
  FUN_100972c70(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009751c8 | thunk_FUN_100974b7c */

void thunk_FUN_100974b7c(void)

{
  FUN_1009743a8();
  return;
}



/* Address: 0x1009751cc | thunk_FUN_100974f74 */

void thunk_FUN_100974f74(void)

{
  FUN_100974f74();
  return;
}



/* Address: 0x1009751d0 | thunk_FUN_100974fc0 */

void thunk_FUN_100974fc0(void)

{
  thunk_FUN_100974fc0();
  return;
}



/* Address: 0x1009751d4 | thunk_FUN_100975018 */

void thunk_FUN_100975018(void)

{
  thunk_FUN_100975018();
  return;
}



/* Address: 0x1009751d8 | thunk_FUN_10097505c */

int thunk_FUN_10097505c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7d < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7e;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x19 & 0x18 | (uint)*(undefined8 *)(param_1 + 4) & 7) << 2) ^
          0x7f;
  if (0x7c < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1009751dc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009751e0 | thunk_FUN_100974b20 */

void thunk_FUN_100974b20(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x1009751e4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009751e8 | thunk_FUN_100974db8 */

void thunk_FUN_100974db8(void)

{
  FUN_100622760(PTR__swift_unknownObjectRelease_100eae458,0x28);
  return;
}



/* Address: 0x1009751ec | thunk_FUN_100974db8 */

void thunk_FUN_100974db8(void)

{
  FUN_100622760(PTR__swift_unknownObjectRelease_100eae458,0x28);
  return;
}



/* Address: 0x1009751f0 | thunk_FUN_100974de8 */

void thunk_FUN_100974de8(void)

{
  FUN_10090eee4(FUN_1002ec258);
  return;
}



/* Address: 0x1009751f4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009751f8 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1009751fc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100975200 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100975204 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100975208 | thunk_FUN_100974b20 */

void thunk_FUN_100974b20(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x10097520c | thunk_FUN_100974b20 */

void thunk_FUN_100974b20(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x100975210 | thunk_FUN_100974ddc */

void thunk_FUN_100974ddc(void)

{
  long unaff_x20;
  
  FUN_100972404(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100975214 | FUN_100975214 */

undefined8 FUN_100975214(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100975250(param_1);
  return unaff_x20;
}



/* Address: 0x100975250 | FUN_100975250 */

void FUN_100975250(undefined8 param_1)

{
  FUN_1009759e0(param_1,FUN_100653a08,&TargetProtocolConformanceDescriptor_100c88a00);
  return;
}



/* Address: 0x100975264 | FUN_100975264 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010097531c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100975264(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 local_78 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_78,0x21,0);
  uVar3 = 0xff;
  FUN_100653a08(0xff,*(undefined8 *)(lVar9 + 0x58));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar5);
  lVar9 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  FUN_100976a98();
  _swift_endAccess(local_78);
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    _Var6 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var6 != 0) {
      lVar10 = 0;
      do {
        lVar7 = lVar10;
        Swift::Array<undefined>::get_subscript(local_78,lVar10,lVar9,uVar3);
        uVar5 = local_78[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009753d4);
          (*pcVar2)();
        }
        FUN_100970578();
        puVar8 = &DAT_100f1d400;
        _swift_allocError(&DAT_100f1d400,lVar7,0,0);
        FUN_100646f54();
        _swift_errorRelease(puVar8);
        _swift_release(uVar5);
        _Var6 = Swift::Array<undefined>::get_endIndex(puVar8,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var6);
    }
    FUN_100976234(lVar9);
  }
  FUN_100626b8c();
  return;
}



/* Address: 0x1009753d4 | FUN_1009753d4 */

void FUN_1009753d4(undefined8 param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [24];
  ulong local_58;
  
  lVar8 = *unaff_x20;
  lVar6 = *(long *)(lVar8 + 0x58);
  lVar9 = *(long *)(lVar6 + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88880;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88880,lVar8);
  FUN_10066a0e4(puVar7,param_2,lVar8,pTVar1);
  _swift_beginAccess(unaff_x20 + 2,auStack_70,0x21,0);
  uVar2 = 0xff;
  FUN_100653a08(0xff,lVar6);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar2);
  uVar3 = 0xff;
  FUN_100976a2c(0xff,uVar2,pTVar1);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar3);
  FUN_100976a20(0,uVar3,pTVar1);
  FUN_100976ae4(&local_58);
  puVar4 = auStack_70;
  _swift_endAccess(puVar4);
  if (local_58 < 2) {
    FUN_10097063c();
    puVar5 = &DAT_100f1d420;
    _swift_allocError(&DAT_100f1d420,puVar4,0,0);
    FUN_100626c9c();
    (**(code **)(lVar9 + 8))(puVar7,lVar6);
    _swift_errorRelease(puVar5);
  }
  else {
    if (local_58 != 2) {
      FUN_100646e88(puVar7,local_58,lVar6);
      FUN_100976258(local_58);
    }
    (**(code **)(lVar9 + 8))(puVar7,lVar6);
  }
  return;
}



/* Address: 0x10097555c | FUN_10097555c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100975614 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10097555c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __int64 _Var7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_68 [3];
  
  lVar8 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_68,0x21,0);
  uVar9 = *(undefined8 *)(lVar8 + 0x58);
  uVar3 = 0xff;
  FUN_100653a08(0xff,uVar9);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar5);
  uVar6 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  lVar8 = param_2;
  FUN_100976ca4(param_2,uVar6);
  _swift_endAccess(local_68);
  if (lVar8 != 0) {
    _Var7 = Swift::Array<undefined>::get_endIndex(lVar8,uVar3);
    if (_Var7 != 0) {
      lVar10 = 0;
      do {
        Swift::Array<undefined>::get_subscript(local_68,lVar10,lVar8,uVar3);
        uVar5 = local_68[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009756a8);
          (*pcVar2)();
        }
        FUN_100646f54(param_2,local_68[0],uVar9);
        _swift_release(uVar5);
        _Var7 = Swift::Array<undefined>::get_endIndex(_Var7,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var7);
    }
    _swift_bridgeObjectRelease(lVar8);
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x1009756a8 | FUN_1009756a8 */

void FUN_1009756a8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long alStack_d0 [4];
  undefined1 auStack_b0 [72];
  undefined8 local_68;
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x50);
  alStack_d0[2] = *(undefined8 *)(lVar16 + 0x58);
  uVar3 = 0xff;
  alStack_d0[1] = param_1;
  alStack_d0[3] = param_3;
  FUN_100653a08(0xff);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,uVar3,0,0);
  lVar9 = (long)alStack_d0 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar1 + -8);
  lVar13 = lVar9 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c8889c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8889c,lVar16);
  FUN_10066a214(lVar9,param_2,lVar16,pTVar5);
  uVar14 = *(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar13,lVar9,lVar1);
  local_68 = uVar14;
  _swift_beginAccess(unaff_x20 + 2,auStack_b0,0x21,0);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar6 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar5);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar6);
  lVar4 = 0;
  FUN_100976a20(0,uVar6,pTVar5);
  FUN_100976d10();
  _swift_endAccess(auStack_b0);
  if (lVar4 == 0) {
    pTVar5 = &TargetProtocolConformanceDescriptor_100c888c8;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c888c8,lVar16);
    FUN_10066a16c(auStack_b0,lVar13,lVar16,pTVar5);
    FUN_100626ebc(auStack_b0,alStack_d0[3]);
    _swift_release(uVar14);
    FUN_1005e70f4(auStack_b0);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  else {
    lVar16 = alStack_d0[2];
    FUN_100646f54(lVar4,uVar14,alStack_d0[2]);
    lVar9 = alStack_d0[3];
    if (alStack_d0[3] == 0) {
      (**(code **)(lVar15 + 8))(lVar13,lVar1);
      _swift_errorRelease(lVar4);
      _swift_release(uVar14);
      return;
    }
    uVar7 = *(ulong *)(alStack_d0[3] + 0x20);
    lVar2 = *(long *)(alStack_d0[3] + 0x28);
    _swift_getObjectType();
    uVar8 = uVar7;
    lVar11 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    if ((uVar8 & 1) == 0) {
      puVar10 = &DAT_100f1dc38;
      _swift_allocObject(&DAT_100f1dc38,0x20,7);
      *(long *)(puVar10 + 0x10) = lVar9;
      *(long *)(puVar10 + 0x18) = lVar4;
      pcVar12 = *(code **)(lVar2 + 0x18);
      _swift_retain(lVar9);
      _swift_errorRetain(lVar4);
      (*pcVar12)(FUN_1008d678c,puVar10,uVar7,lVar2);
      _swift_release(uVar14);
      _swift_release(puVar10);
    }
    else {
      lVar9 = lVar4;
      thunk_FUN_1005de8f4(lVar4);
      FUN_1006486f8();
      FUN_100004550(lVar9,lVar11);
      _swift_release(uVar14);
      _swift_bridgeObjectRelease(lVar16);
    }
    _swift_errorRelease(lVar4);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  (*pcVar12)(lVar13,lVar1);
  return;
}



/* Address: 0x100975978 | thunk_FUN_1009761c4 */

void thunk_FUN_1009761c4(void)

{
  FUN_1009761c4();
  return;
}



/* Address: 0x10097597c | thunk_FUN_1009761f0 */

void thunk_FUN_1009761f0(void)

{
  FUN_1009761f0();
  return;
}



/* Address: 0x100975980 | thunk_FUN_100975264 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010097531c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_100975264(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  undefined8 auStack_78 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,auStack_78,0x21,0);
  uVar3 = 0xff;
  FUN_100653a08(0xff,*(undefined8 *)(lVar9 + 0x58));
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a00,uVar3);
  uVar5 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar5);
  lVar9 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  FUN_100976a98();
  _swift_endAccess(auStack_78);
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    _Var6 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var6 != 0) {
      lVar10 = 0;
      do {
        lVar7 = lVar10;
        Swift::Array<undefined>::get_subscript(auStack_78,lVar10,lVar9,uVar3);
        uVar5 = auStack_78[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009753d4);
          (*pcVar2)();
        }
        FUN_100970578();
        puVar8 = &DAT_100f1d400;
        _swift_allocError(&DAT_100f1d400,lVar7,0,0);
        FUN_100646f54();
        _swift_errorRelease(puVar8);
        _swift_release(uVar5);
        _Var6 = Swift::Array<undefined>::get_endIndex(puVar8,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var6);
    }
    FUN_100976234(lVar9);
  }
  FUN_100626b8c();
  return;
}



/* Address: 0x100975984 | thunk_FUN_1009753d4 */

void thunk_FUN_1009753d4(void)

{
  FUN_1009753d4();
  return;
}



/* Address: 0x100975988 | thunk_FUN_10097555c */

void thunk_FUN_10097555c(void)

{
  FUN_10097555c();
  return;
}



/* Address: 0x10097598c | thunk_FUN_1009756a8 */

void thunk_FUN_1009756a8(void)

{
  FUN_1009756a8();
  return;
}



/* Address: 0x100975990 | FUN_100975990 */

undefined8 FUN_100975990(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1009759cc(param_1);
  return unaff_x20;
}



/* Address: 0x1009759cc | FUN_1009759cc */

void FUN_1009759cc(undefined8 param_1)

{
  FUN_1009759e0(param_1,FUN_100645fc0,&TargetProtocolConformanceDescriptor_100c88a1c);
  return;
}



/* Address: 0x1009759e0 | FUN_1009759e0 */

void FUN_1009759e0(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long *unaff_x20;
  long local_50;
  long lStack_48;
  long local_40;
  long lStack_38;
  
  uVar1 = 0xff;
  (*param_2)(0xff,*(undefined8 *)(*unaff_x20 + 0x58));
  _swift_getWitnessTable(param_3,uVar1);
  uVar2 = 0;
  FUN_100976a2c(0,uVar1,param_3);
  pTVar3 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar2);
  FUN_100976a38(&local_50,param_1,uVar2,pTVar3);
  unaff_x20[2] = local_50;
  unaff_x20[3] = lStack_48;
  unaff_x20[5] = lStack_38;
  unaff_x20[4] = local_40;
  return;
}



/* Address: 0x100975a80 | FUN_100975a80 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100975b38 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100975a80(void)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  __int64 _Var6;
  long lVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_78 [3];
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_78,0x21,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x58);
  uVar3 = 0xff;
  FUN_100645fc0(0xff,uVar10);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar5 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar5);
  lVar9 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  FUN_100976a98();
  _swift_endAccess(local_78);
  if (lVar9 != 0) {
    if (lVar9 == 1) {
      return;
    }
    _Var6 = Swift::Array<undefined>::get_endIndex(lVar9,uVar3);
    if (_Var6 != 0) {
      lVar11 = 0;
      do {
        lVar7 = lVar11;
        Swift::Array<undefined>::get_subscript(local_78,lVar11,lVar9,uVar3);
        uVar5 = local_78[0];
        lVar1 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100975c04);
          (*pcVar2)();
        }
        FUN_100970578();
        puVar8 = &DAT_100f1d400;
        _swift_allocError(&DAT_100f1d400,lVar7,0,0);
        _swift_retain(uVar5);
        FUN_100646f54(puVar8,uVar5,uVar10);
        _swift_release(uVar5);
        _swift_errorRelease(puVar8);
        _swift_release(uVar5);
        _Var6 = Swift::Array<undefined>::get_endIndex(puVar8,uVar3);
        lVar11 = lVar11 + 1;
      } while (lVar1 != _Var6);
    }
    FUN_100976234(lVar9);
  }
  FUN_100626b8c();
  return;
}



/* Address: 0x100975c04 | FUN_100975c04 */

void FUN_100975c04(undefined8 param_1,undefined8 param_2)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_70 [24];
  ulong local_58;
  
  lVar8 = *unaff_x20;
  lVar6 = *(long *)(lVar8 + 0x58);
  lVar9 = *(long *)(lVar6 + -8);
  puVar7 = auStack_70 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88904;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88904,lVar8);
  FUN_10066a0e4(puVar7,param_2,lVar8,pTVar1);
  _swift_beginAccess(unaff_x20 + 2,auStack_70,0x21,0);
  uVar2 = 0xff;
  FUN_100645fc0(0xff,lVar6);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar2);
  uVar3 = 0xff;
  FUN_100976a2c(0xff,uVar2,pTVar1);
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar3);
  FUN_100976a20(0,uVar3,pTVar1);
  FUN_100976ae4(&local_58);
  puVar4 = auStack_70;
  _swift_endAccess(puVar4);
  if (local_58 < 2) {
    FUN_10097063c();
    puVar5 = &DAT_100f1d420;
    _swift_allocError(&DAT_100f1d420,puVar4,0,0);
    FUN_100626c9c();
    (**(code **)(lVar9 + 8))(puVar7,lVar6);
    _swift_errorRelease(puVar5);
  }
  else {
    if (local_58 != 2) {
      FUN_100643020(puVar7,local_58,lVar6);
      FUN_100976258(local_58);
    }
    (**(code **)(lVar9 + 8))(puVar7,lVar6);
  }
  return;
}



/* Address: 0x100975d8c | FUN_100975d8c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100975e44 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100975d8c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  __int64 _Var7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 local_68 [3];
  
  lVar8 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 2,local_68,0x21,0);
  uVar9 = *(undefined8 *)(lVar8 + 0x58);
  uVar3 = 0xff;
  FUN_100645fc0(0xff,uVar9);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar5 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar4);
  pTVar4 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar5);
  uVar6 = 0;
  FUN_100976a20(0,uVar5,pTVar4);
  lVar8 = param_2;
  FUN_100976ca4(param_2,uVar6);
  _swift_endAccess(local_68);
  if (lVar8 != 0) {
    _Var7 = Swift::Array<undefined>::get_endIndex(lVar8,uVar3);
    if (_Var7 != 0) {
      lVar10 = 0;
      do {
        Swift::Array<undefined>::get_subscript(local_68,lVar10,lVar8,uVar3);
        uVar5 = local_68[0];
        lVar1 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100975ee4);
          (*pcVar2)();
        }
        _swift_retain(local_68[0]);
        FUN_100646f54(param_2,uVar5,uVar9);
        _swift_release_n(uVar5,2);
        _Var7 = Swift::Array<undefined>::get_endIndex(_Var7,uVar3);
        lVar10 = lVar10 + 1;
      } while (lVar1 != _Var7);
    }
    _swift_bridgeObjectRelease(lVar8);
    FUN_100626d64(2,0);
  }
  return;
}



/* Address: 0x100975ee4 | FUN_100975ee4 */

void FUN_100975ee4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  code *pcVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long alStack_d0 [4];
  undefined1 auStack_b0 [72];
  undefined8 local_68;
  
  lVar16 = *unaff_x20;
  lVar1 = *(long *)(lVar16 + 0x50);
  alStack_d0[2] = *(undefined8 *)(lVar16 + 0x58);
  uVar3 = 0xff;
  alStack_d0[1] = param_1;
  alStack_d0[3] = param_3;
  FUN_100645fc0(0xff);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,uVar3,0,0);
  lVar9 = (long)alStack_d0 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar1 + -8);
  lVar13 = lVar9 - (*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c88920;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88920,lVar16);
  FUN_10066a214(lVar9,param_2,lVar16,pTVar5);
  uVar14 = *(undefined8 *)(lVar9 + *(int *)(lVar4 + 0x30));
  (**(code **)(lVar15 + 0x20))(lVar13,lVar9,lVar1);
  local_68 = uVar14;
  _swift_beginAccess(unaff_x20 + 2,auStack_b0,0x21,0);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c88a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88a1c,uVar3);
  uVar6 = 0xff;
  FUN_100976a2c(0xff,uVar3,pTVar5);
  pTVar5 = &TargetProtocolConformanceDescriptor_100c88b74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88b74,uVar6);
  lVar4 = 0;
  FUN_100976a20(0,uVar6,pTVar5);
  FUN_100976d10();
  _swift_endAccess(auStack_b0);
  if (lVar4 == 0) {
    pTVar5 = &TargetProtocolConformanceDescriptor_100c8894c;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8894c,lVar16);
    FUN_10066a16c(auStack_b0,lVar13,lVar16,pTVar5);
    FUN_100626ebc(auStack_b0,alStack_d0[3]);
    _swift_release(uVar14);
    FUN_1005e70f4(auStack_b0);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  else {
    _swift_retain(uVar14);
    lVar16 = alStack_d0[2];
    FUN_100646f54(lVar4,uVar14,alStack_d0[2]);
    _swift_release(uVar14);
    lVar9 = alStack_d0[3];
    if (alStack_d0[3] == 0) {
      (**(code **)(lVar15 + 8))(lVar13,lVar1);
      _swift_errorRelease(lVar4);
      _swift_release(uVar14);
      return;
    }
    uVar7 = *(ulong *)(alStack_d0[3] + 0x20);
    lVar2 = *(long *)(alStack_d0[3] + 0x28);
    _swift_getObjectType();
    uVar8 = uVar7;
    lVar11 = lVar2;
    (**(code **)(lVar2 + 0x10))();
    if ((uVar8 & 1) == 0) {
      puVar10 = &DAT_100f1dc60;
      _swift_allocObject(&DAT_100f1dc60,0x20,7);
      *(long *)(puVar10 + 0x10) = lVar9;
      *(long *)(puVar10 + 0x18) = lVar4;
      pcVar12 = *(code **)(lVar2 + 0x18);
      _swift_retain(lVar9);
      _swift_errorRetain(lVar4);
      (*pcVar12)(thunk_FUN_1008d678c,puVar10,uVar7,lVar2);
      _swift_release(uVar14);
      _swift_release(puVar10);
    }
    else {
      lVar9 = lVar4;
      thunk_FUN_1005de8f4(lVar4);
      FUN_1006486f8();
      FUN_100004550(lVar9,lVar11);
      _swift_release(uVar14);
      _swift_bridgeObjectRelease(lVar16);
    }
    _swift_errorRelease(lVar4);
    pcVar12 = *(code **)(lVar15 + 8);
  }
  (*pcVar12)(lVar13,lVar1);
  return;
}



/* Address: 0x1009761c4 | FUN_1009761c4 */

void FUN_1009761c4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100976248(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(uVar1);
  return;
}



/* Address: 0x1009761f0 | FUN_1009761f0 */

void FUN_1009761f0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100976248(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(uVar1);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100976224 | thunk_FUN_100975a80 */

void thunk_FUN_100975a80(void)

{
  FUN_100975a80();
  return;
}



/* Address: 0x100976228 | thunk_FUN_100975c04 */

void thunk_FUN_100975c04(void)

{
  FUN_100975c04();
  return;
}



/* Address: 0x10097622c | thunk_FUN_100975d8c */

void thunk_FUN_100975d8c(void)

{
  FUN_100975d8c();
  return;
}



/* Address: 0x100976230 | thunk_FUN_100975ee4 */

void thunk_FUN_100975ee4(void)

{
  FUN_100975ee4();
  return;
}



/* Address: 0x100976234 | FUN_100976234 */

void FUN_100976234(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100976244 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100976248 | FUN_100976248 */

void FUN_100976248(ulong param_1)

{
  if (param_1 < 2) {
    return;
  }
  _swift_errorRelease();
  return;
}



/* Address: 0x100976258 | FUN_100976258 */

void FUN_100976258(ulong param_1)

{
  if (param_1 < 3) {
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x100976268 | FUN_100976268 */

void FUN_100976268(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c888c8;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x100976294 | FUN_100976294 */

void FUN_100976294(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8894c;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x1009762c0 | thunk_FUN_1009762d0 */

void thunk_FUN_1009762d0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_100c889a8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x60);
  return;
}



/* Address: 0x1009762c4 | FUN_1009762c4 */

void FUN_1009762c4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009762d0 | FUN_1009762d0 */

void FUN_1009762d0(long param_1)

{
  undefined *local_18;
  
  local_18 = &DAT_100c889a8;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}



/* Address: 0x100976310 | FUN_100976310 */

void FUN_100976310(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10097631c | thunk_FUN_1008abedc */

void thunk_FUN_1008abedc(void)

{
  FUN_1008abedc();
  return;
}



/* Address: 0x100976320 | thunk_FUN_1008abee4 */

void thunk_FUN_1008abee4(void)

{
  FUN_1008abee4();
  return;
}



/* Address: 0x100976324 | thunk_FUN_1008abeec */

void thunk_FUN_1008abeec(void)

{
  FUN_1008abeec();
  return;
}



/* Address: 0x100976328 | thunk_FUN_100976268 */

void thunk_FUN_100976268(void)

{
  FUN_100976268();
  return;
}



/* Address: 0x10097632c | thunk_FUN_100976294 */

void thunk_FUN_100976294(void)

{
  FUN_100976294();
  return;
}



/* Address: 0x100976330 | thunk_FUN_10066a16c */

void thunk_FUN_10066a16c(void)

{
  thunk_FUN_10066a16c();
  return;
}



/* Address: 0x100976334 | thunk_FUN_1009762d0 */

void thunk_FUN_1009762d0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &DAT_100c889a8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0x60);
  return;
}



/* Address: 0x100976338 | thunk_FUN_1009761c4 */

void thunk_FUN_1009761c4(void)

{
  FUN_1009761c4();
  return;
}



/* Address: 0x10097633c | thunk_FUN_1009761f0 */

void thunk_FUN_1009761f0(void)

{
  FUN_1009761f0();
  return;
}


