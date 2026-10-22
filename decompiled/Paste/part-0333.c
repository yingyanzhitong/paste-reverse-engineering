/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10041da8c | FUN_10041da8c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10041da8c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = param_2[1];
  *param_1 = *param_2;
  if (lVar1 != 1) {
    _swift_unknownObjectRetain(lVar1);
  }
  uVar2 = param_2[2];
  param_1[1] = lVar1;
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_2[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  _swift_bridgeObjectRetain();
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10041db0c | FUN_10041db0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10041db0c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  plVar2 = param_1 + 1;
  lVar5 = *plVar2;
  lVar1 = param_2[1];
  if (lVar5 == 1) {
    if (lVar1 != 1) {
      *plVar2 = lVar1;
      _swift_unknownObjectRetain();
      goto LAB_10041db98;
    }
    lVar1 = 1;
  }
  else {
    if (lVar1 != 1) {
      *plVar2 = lVar1;
      _swift_unknownObjectRetain();
      _swift_unknownObjectRelease(lVar5);
      goto LAB_10041db98;
    }
    FUN_10041dc00(plVar2);
    lVar1 = param_2[1];
  }
  *plVar2 = lVar1;
LAB_10041db98:
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar3 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar4 = param_1[8];
  uVar3 = param_2[8];
  uVar6 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar6;
  _swift_retain(uVar3);
  _swift_release(uVar4);
  return param_1;
}



/* Address: 0x10041dc00 | FUN_10041dc00 */

undefined8 * FUN_10041dc00(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  return param_1;
}



/* Address: 0x10041dc28 | FUN_10041dc28 */

void FUN_10041dc28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x10041dc4c | FUN_10041dc4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10041dc4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  
  *param_1 = *param_2;
  plVar4 = param_1 + 1;
  lVar3 = param_2[1];
  if (*plVar4 != 1) {
    if (lVar3 != 1) {
      *plVar4 = lVar3;
      _swift_unknownObjectRelease();
      goto LAB_10041dcac;
    }
    FUN_10041dc00(plVar4);
    lVar3 = 1;
  }
  *plVar4 = lVar3;
LAB_10041dcac:
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10041dcf8 | FUN_10041dcf8 */

int FUN_10041dcf8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[9] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10041dd40 | FUN_10041dd40 */

void FUN_10041dd40(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10041dd90 | FUN_10041dd90 */

undefined1  [16] FUN_10041dd90(void)

{
  return ZEXT816(0x100ed3858);
}



/* Address: 0x10041dda0 | thunk_FUN_10041dda4 */

void thunk_FUN_10041dda4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5d48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c494bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c494bc,&DAT_100ed3858);
  DAT_100fc5d48 = pTVar1;
  return;
}



/* Address: 0x10041dda4 | FUN_10041dda4 */

void FUN_10041dda4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5d48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c494bc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c494bc,&DAT_100ed3858);
  DAT_100fc5d48 = pTVar1;
  return;
}



/* Address: 0x10041dde4 | FUN_10041dde4 */

void FUN_10041dde4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10041de70();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10041de00 | FUN_10041de00 */

void FUN_10041de00(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10041dfa0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10041de1c | FUN_10041de1c */

void FUN_10041de1c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10041e134();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10041de38 | FUN_10041de38 */

void FUN_10041de38(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10041e2b0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10041de54 | FUN_10041de54 */

void FUN_10041de54(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10041e4a4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10041de70 | FUN_10041de70 */

undefined * FUN_10041de70(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041dfa0);
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
    puVar3 = &DAT_100fc5d70;
    FUN_1000f7830(&DAT_100fc5d70,&DAT_100c49570);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc58e8;
    FUN_1000f7830(&DAT_100fc58e8,&DAT_100c49178);
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



/* Address: 0x10041dfa0 | FUN_10041dfa0 */

undefined * FUN_10041dfa0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10041e134);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fc5d68;
    FUN_1000f7830(&DAT_100fc5d68,&DAT_100c49560);
    puVar6 = &DAT_100fc5b28;
    FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10041e12c);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10041e130);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar5;
}



/* Address: 0x10041e134 | FUN_10041e134 */

undefined * FUN_10041e134(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10041e2b0);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fc5d60;
    FUN_1000f7830(&DAT_100fc5d60,&DAT_100c49558);
    lVar5 = 0;
    FUN_100424764();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10041e2a8);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10041e2ac);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  FUN_100424764();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x10041e2b0 | FUN_10041e2b0 */

undefined * FUN_10041e2b0(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041e3d4);
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
    FUN_100420520();
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
    FUN_1004157e8(0);
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



/* Address: 0x10041e3d4 | FUN_10041e3d4 */

undefined8 FUN_10041e3d4(undefined8 param_1)

{
  FUN_10041da4c(param_1,&DAT_100ed3858);
  return param_1;
}



/* Address: 0x10041e400 | FUN_10041e400 */

undefined8 FUN_10041e400(undefined8 param_1,undefined8 param_2)

{
  FUN_100425118(param_2,param_1);
  return param_2;
}



/* Address: 0x10041e43c | FUN_10041e43c */

undefined8 FUN_10041e43c(undefined8 param_1)

{
  FUN_10041b558();
  return param_1;
}



/* Address: 0x10041e470 | FUN_10041e470 */

undefined8 FUN_10041e470(undefined8 param_1)

{
  FUN_1004250cc();
  return param_1;
}



/* Address: 0x10041e4a4 | FUN_10041e4a4 */

undefined * FUN_10041e4a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041e5ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc5b40;
    FUN_1000f7830(&DAT_100fc5b40,&DAT_100c49550);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10041e5ac | FUN_10041e5ac */

void FUN_10041e5ac(long param_1)

{
  FUN_100420c1c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10041e5c0 | FUN_10041e5c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10041e5c0(ID param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  String SVar6;
  
  uVar5 = *(undefined8 *)PTR__SKErrorDomain_100ea8078;
  puVar2 = &DAT_100fc5d50;
  FUN_1000f7830(&DAT_100fc5d50,&DAT_100c49540);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(char **)(puVar2 + 0x20) = SVar6.str;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(void **)(puVar2 + 0x28) = SVar6.bridgeObject;
  *(undefined8 *)(puVar2 + 0x30) = 0x206e776f6e6b6e55;
  *(undefined8 *)(puVar2 + 0x38) = 0xed0000726f727265;
  puVar1 = puVar2;
  FUN_10042c9f0(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_10041e720(puVar2 + 0x20);
  puVar2 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar1);
  IVar4 = objc_stub::initWithDomain_code_userInfo_((ID)puVar2,uVar5,0,pNVar3);
  if (param_1 != 0) {
    IVar4 = param_1;
  }
  return IVar4;
}



/* Address: 0x10041e720 | FUN_10041e720 */

undefined8 FUN_10041e720(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5d58;
  FUN_1000f7830(&DAT_100fc5d58,&DAT_100c49548);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10041e768 | FUN_10041e768 */

void FUN_10041e768(long param_1)

{
  if (param_1 == 1) {
    return;
  }
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10041e778 | FUN_10041e778 */

void FUN_10041e778(long param_1)

{
  if (param_1 == 1) {
    return;
  }
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x10041e788 | thunk_FUN_10041cf00 */

void thunk_FUN_10041cf00(void)

{
  FUN_10041cf00();
  return;
}



/* Address: 0x10041e78c | FUN_10041e78c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041e78c(void)

{
  return ZEXT816(0x100fc5db8);
}



/* Address: 0x10041e7ac | FUN_10041e7ac */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041e7ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  long *plVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  undefined **ppuVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  long local_90;
  long lStack_88;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar14 = _TtC14SwiftyStoreKit22ProductsInfoController::inflightRequests;
  puVar8 = auStack_78;
  _swift_beginAccess(unaff_x20 + _TtC14SwiftyStoreKit22ProductsInfoController::inflightRequests,
                     puVar8,0,0);
  lVar12 = *(long *)(unaff_x20 + lVar14);
  if (*(long *)(lVar12 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar12);
    FUN_100417f28(param_1);
    _swift_bridgeObjectRelease(lVar12);
    if (((ulong)puVar8 & 1) != 0) {
      puVar4 = &DAT_100ed39c8;
      _swift_allocObject(&DAT_100ed39c8,0x20,7);
      *(undefined8 *)(puVar4 + 0x10) = param_2;
      *(undefined8 *)(puVar4 + 0x18) = param_3;
      plVar10 = &local_90;
      _swift_beginAccess(unaff_x20 + lVar14,plVar10,0x21,0);
      _swift_retain(param_3);
      uVar3 = *(ulong *)(unaff_x20 + lVar14);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = (uint)uVar3;
      lVar13 = *(long *)(unaff_x20 + lVar14);
      *(undefined8 *)(unaff_x20 + lVar14) = 0x8000000000000000;
      lVar12 = param_1;
      FUN_100417f28();
      uVar11 = (ulong)~(uint)plVar10 & 1;
      if (SCARRY8(*(long *)(lVar13 + 0x10),uVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ec54);
        (*pcVar2)();
      }
      if (*(long *)(lVar13 + 0x18) < (long)(*(long *)(lVar13 + 0x10) + uVar11)) {
        FUN_10041f410();
        lVar12 = param_1;
        FUN_100417f28();
        if (((uint)plVar10 & 1) != (uVar7 & 1)) {
          FUN_1000f7830(&DAT_100fc5e58,&DAT_100c49610);
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ecf0);
          (*pcVar2)();
        }
      }
      else if ((uVar3 & 1) == 0) {
        FUN_10041f27c();
      }
      if (((ulong)plVar10 & 1) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ecb0);
        (*pcVar2)();
      }
      plVar10 = (long *)(*(long *)(lVar13 + 0x38) + lVar12 * 0x18);
      lVar19 = plVar10[1];
      lVar15 = *plVar10;
      uVar16 = plVar10[2];
      uVar3 = uVar16;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar11 = uVar16;
      if ((uVar3 & 1) == 0) {
        uVar11 = 0;
        FUN_100420ea4(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
      }
      uVar3 = *(ulong *)(uVar11 + 0x10);
      uVar16 = uVar11;
      if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar3) {
        uVar16 = (ulong)(1 < *(ulong *)(uVar11 + 0x18));
        FUN_100420ea4(uVar16,uVar3 + 1,1,uVar11);
      }
      *(ulong *)(uVar16 + 0x10) = uVar3 + 1;
      lVar1 = uVar16 + uVar3 * 0x10;
      *(code **)(lVar1 + 0x20) = thunk_FUN_10041f8a0;
      *(undefined **)(lVar1 + 0x28) = puVar4;
      if (lVar15 == 0) {
        FUN_10041f8cc(*(long *)(lVar13 + 0x30) + lVar12 * 8);
        FUN_10041f0c8(lVar12,lVar13);
      }
      else {
        plVar10 = (long *)(*(long *)(lVar13 + 0x38) + lVar12 * 0x18);
        plVar10[1] = lVar19;
        *plVar10 = lVar15;
        plVar10[2] = uVar16;
      }
      *(long *)(unaff_x20 + lVar14) = lVar13;
      _swift_endAccess(&local_90);
      if (*(long *)(lVar13 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ec9c);
        (*pcVar2)();
      }
      uVar3 = 0;
      _swift_bridgeObjectRetain_n(lVar13);
      lVar12 = param_1;
      FUN_100417f28();
      if ((uVar3 & 1) == 0) {
        _swift_release_n(lVar13,2);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ecc4);
        (*pcVar2)();
      }
      plVar10 = (long *)(*(long *)(lVar13 + 0x38) + lVar12 * 0x18);
      lVar12 = *plVar10;
      lVar15 = plVar10[2];
      _swift_unknownObjectRetain(lVar12);
      _swift_bridgeObjectRetain(lVar15);
      _swift_release_n(lVar13,2);
      plVar10 = (long *)(lVar12 + _TtC14SwiftyStoreKit24InAppProductQueryRequest::cachedResults);
      if ((*plVar10 != 0) && (uVar3 = *(ulong *)(lVar15 + 0x10), uVar3 != 0)) {
        uVar11 = 0;
        puVar18 = (undefined8 *)(lVar15 + 0x28);
        do {
          if (*(ulong *)(lVar15 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ec50);
            (*pcVar2)();
          }
          lVar13 = *plVar10;
          if (lVar13 == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ecb4);
            (*pcVar2)();
          }
          uVar11 = uVar11 + 1;
          pcVar2 = (code *)puVar18[-1];
          uVar6 = *puVar18;
          lVar19 = plVar10[1];
          lVar1 = plVar10[2];
          local_90 = lVar13;
          lStack_88 = lVar19;
          local_80 = lVar1;
          _swift_retain(uVar6);
          FUN_10041f914(lVar13,lVar19,lVar1);
          (*pcVar2)(&local_90);
          _swift_bridgeObjectRelease(lVar19);
          _swift_bridgeObjectRelease(lVar13);
          _swift_release(uVar6);
          _swift_errorRelease(lVar1);
          puVar18 = puVar18 + 2;
        } while (uVar3 != uVar11);
      }
      lVar14 = *(long *)(unaff_x20 + lVar14);
      if (*(long *)(lVar14 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041eca0);
        (*pcVar2)();
      }
      uVar3 = 0;
      _swift_bridgeObjectRetain_n(lVar14);
      FUN_100417f28();
      if ((uVar3 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar14,2);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041ecd4);
        (*pcVar2)();
      }
      plVar10 = (long *)(*(long *)(lVar14 + 0x38) + param_1 * 0x18);
      lVar13 = *plVar10;
      ppuVar17 = (undefined **)plVar10[1];
      _swift_unknownObjectRetain(lVar13);
      _swift_bridgeObjectRelease(lVar15);
      _swift_unknownObjectRelease(lVar12);
      _swift_bridgeObjectRelease_n(lVar14,2);
      goto LAB_10041ec24;
    }
  }
  puVar4 = &DAT_100ed3978;
  _swift_allocObject(&DAT_100ed3978,0x30,7);
  *(long *)(puVar4 + 0x10) = unaff_x20;
  *(long *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  *(undefined8 *)(puVar4 + 0x28) = param_3;
  FUN_100415d34(0);
  _objc_allocWithZone();
  _swift_bridgeObjectRetain_n(param_1,2);
  _swift_retain(param_3);
  lVar13 = param_1;
  FUN_100415940(param_1,FUN_10041f094,puVar4);
  puVar4 = &DAT_100fc5e50;
  FUN_1000f7830(&DAT_100fc5e50,&DAT_100c496d0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100ed39a0;
  _swift_allocObject(&DAT_100ed39a0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = param_3;
  *(code **)(puVar4 + 0x20) = thunk_FUN_10041f8a0;
  *(undefined **)(puVar4 + 0x28) = puVar5;
  _swift_beginAccess(unaff_x20 + lVar14,&local_90,0x21,0);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_3);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar14);
  _swift_isUniquelyReferenced_nonNull_native(uVar6);
  uVar9 = *(undefined8 *)(unaff_x20 + lVar14);
  *(undefined8 *)(unaff_x20 + lVar14) = 0x8000000000000000;
  ppuVar17 = &PTR_PTR_100ed3418;
  FUN_10041f72c(lVar13,&PTR_PTR_100ed3418,puVar4,param_1,uVar6);
  _swift_bridgeObjectRelease(param_1);
  *(undefined8 *)(unaff_x20 + lVar14) = uVar9;
  _swift_endAccess(&local_90);
  objc_stub::start(*(ID *)(lVar13 + _TtC14SwiftyStoreKit24InAppProductQueryRequest::request));
LAB_10041ec24:
  auVar20._8_8_ = ppuVar17;
  auVar20._0_8_ = lVar13;
  return auVar20;
}



/* Address: 0x10041ecf0 | FUN_10041ecf0 */

void FUN_10041ecf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5,code *param_6)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  
  lVar2 = _TtC14SwiftyStoreKit22ProductsInfoController::inflightRequests;
  puVar4 = &local_90;
  _swift_beginAccess(param_4 + _TtC14SwiftyStoreKit22ProductsInfoController::inflightRequests,
                     auStack_78,0,0);
  lVar7 = *(long *)(param_4 + lVar2);
  if (*(long *)(lVar7 + 0x10) != 0) {
    uVar3 = 0;
    _swift_bridgeObjectRetain_n(lVar7);
    lVar9 = param_5;
    FUN_100417f28();
    if ((uVar3 & 1) != 0) {
      puVar6 = (undefined8 *)(*(long *)(lVar7 + 0x38) + lVar9 * 0x18);
      uVar8 = *puVar6;
      lVar9 = puVar6[2];
      _swift_unknownObjectRetain(uVar8);
      _swift_bridgeObjectRetain(lVar9);
      _swift_bridgeObjectRelease_n(lVar7,2);
      lVar7 = *(long *)(lVar9 + 0x10);
      if (lVar7 != 0) {
        local_90 = param_1;
        uStack_88 = param_2;
        local_80 = param_3;
        _swift_bridgeObjectRetain(lVar9);
        puVar6 = (undefined8 *)(lVar9 + 0x28);
        do {
          pcVar1 = (code *)puVar6[-1];
          uVar5 = *puVar6;
          _swift_retain(uVar5);
          (*pcVar1)(&local_90);
          _swift_release(uVar5);
          puVar6 = puVar6 + 2;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
        _swift_bridgeObjectRelease(lVar9);
      }
      uVar5 = 0x21;
      _swift_beginAccess(param_4 + lVar2,&local_90,0x21,0);
      lVar2 = param_5;
      _swift_bridgeObjectRetain(param_5);
      FUN_10041f658();
      _swift_endAccess(&local_90);
      FUN_10041fa9c(lVar2,puVar4,uVar5);
      _swift_bridgeObjectRelease(lVar9);
      _swift_unknownObjectRelease(uVar8);
      _swift_bridgeObjectRelease(param_5);
      return;
    }
    _swift_bridgeObjectRelease_n(lVar7,2);
  }
  (*param_6)(param_1,param_2,param_3);
  return;
}



/* Address: 0x10041ee8c | _TtC14SwiftyStoreKit22ProductsInfoController::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC14SwiftyStoreKit22ProductsInfoController::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SwiftyStoreKit.ProductsInfoController",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10041eeb8);
  (*pcVar1)();
}



/* Address: 0x10041eeb8 | FUN_10041eeb8 */

void FUN_10041eeb8(void)

{
  FUN_10041ef20();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10041eee8 | _TtC14SwiftyStoreKit22ProductsInfoController::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit22ProductsInfoController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + inAppProductRequestBuilder));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + inflightRequests));
  return;
}



/* Address: 0x10041ef20 | FUN_10041ef20 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041ef20(void)

{
  return ZEXT816(0x100f9c460);
}



/* Address: 0x10041ef40 | thunk_FUN_10041ef6c */

void thunk_FUN_10041ef6c(void)

{
  FUN_10041ef6c();
  return;
}



/* Address: 0x10041ef44 | FUN_10041ef44 */

void FUN_10041ef44(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[2]);
  return;
}



/* Address: 0x10041ef6c | FUN_10041ef6c */

undefined8 * FUN_10041ef6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  _swift_unknownObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10041efac | FUN_10041efac */

undefined8 * FUN_10041efac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10041f00c | FUN_10041f00c */

undefined8 * FUN_10041f00c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10041f050 | FUN_10041f050 */

undefined1  [16] FUN_10041f050(void)

{
  return ZEXT816(0x100ed3940);
}



/* Address: 0x10041f060 | FUN_10041f060 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041f060(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10041f094 | FUN_10041f094 */

void FUN_10041f094(void)

{
  FUN_10041ecf0();
  return;
}



/* Address: 0x10041f0a0 | FUN_10041f0a0 */

void FUN_10041f0a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10041f0c4 | thunk_FUN_10041f8a0 */

void thunk_FUN_10041f8a0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x10041f0c8 | FUN_10041f0c8 */

void FUN_10041f0c8(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  code *pcVar2;
  Bucket BVar3;
  Hasher HVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar10 = param_1.offset + 1U & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0) {
    uVar6 = ~uVar6;
    BVar3 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar11 = BVar3.offset + 1U & uVar6;
    do {
      uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 8);
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar9);
      HVar4.unknown = auStack_a8;
      FUN_10041f94c(HVar4.unknown,uVar9);
      uVar5 = Swift::Hasher::_finalize(HVar4);
      _swift_bridgeObjectRelease(uVar9);
      uVar5 = uVar5 & uVar6;
      if (param_1.offset < (long)uVar11) {
        if (uVar5 < uVar11) {
LAB_10041f1c0:
          if (param_1.offset < (long)uVar5) goto LAB_10041f150;
        }
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 8);
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar10 * 8);
        if ((param_1.offset < (long)uVar10) || (puVar8 + 1 <= puVar7 || param_1.offset != uVar10)) {
          *puVar7 = *puVar8;
        }
        puVar7 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x18);
        puVar8 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar10 * 0x18);
        if (((param_1.offset < (long)uVar10) || (puVar8 + 3 <= puVar7)) ||
           (param_1.offset != uVar10)) {
          uVar12 = puVar8[1];
          uVar9 = *puVar8;
          puVar7[2] = puVar8[2];
          puVar7[1] = uVar12;
          *puVar7 = uVar9;
          param_1.offset = uVar10;
        }
      }
      else if (uVar11 <= uVar5) goto LAB_10041f1c0;
LAB_10041f150:
      uVar10 = uVar10 + 1 & uVar6;
    } while ((*(ulong *)(_Var1.unknown + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) != 0);
  }
  uVar6 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar6) =
       *(ulong *)(_Var1.unknown + uVar6) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10041f27c);
  (*pcVar2)();
}



/* Address: 0x10041f27c | FUN_10041f27c */

void FUN_10041f27c(void)

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
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  this = (_DictionaryStorage *)&DAT_100fc5e60;
  FUN_1000f7830(&DAT_100fc5e60,&DAT_100c49618);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x40) {
      _memmove(p_Var5 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_10041f35c;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x38) + uVar8 * 0x18);
        uVar9 = puVar3[2];
        uVar12 = puVar3[1];
        uVar11 = *puVar3;
        *(undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar8 * 8) =
             *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x38) + uVar8 * 0x18);
        puVar3[1] = uVar12;
        *puVar3 = uVar11;
        puVar3[2] = uVar9;
        _swift_bridgeObjectRetain();
        _swift_unknownObjectRetain(uVar11);
        _swift_bridgeObjectRetain(uVar9);
        if (uVar6 != 0) break;
LAB_10041f35c:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10041f410);
            (*pcVar4)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_10041f3e4;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_10041f3e4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x10041f410 | FUN_10041f410 */

void FUN_10041f410(long param_1,bool param_2)

{
  _HashTable _Var1;
  __int64 capacity;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  Hasher HVar4;
  Bucket BVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar10;
  __RawDictionaryStorage *p_Var11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fc5e60;
  FUN_1000f7830(&DAT_100fc5e60,&DAT_100c49618);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10041f628:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var11 = original + 0x40;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)p_Var11;
  _Var1.unknown = p_Var3 + 0x40;
  lVar7 = 0;
  do {
    if (uVar10 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10041f658);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) != 0) {
            uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var11 = -1L << (uVar10 & 0x3f);
            }
            else {
              _bzero(p_Var11,uVar10 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_10041f628;
        }
        uVar10 = *(ulong *)(p_Var11 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar10 == 0);
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
    }
    else {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar10 = uVar10 - 1 & uVar10;
      lVar14 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar14 << 6;
    uVar13 = *(undefined8 *)(*(long *)(original + 0x30) + uVar6 * 8);
    puVar8 = (undefined8 *)(*(long *)(original + 0x38) + uVar6 * 0x18);
    uVar16 = puVar8[1];
    uVar15 = *puVar8;
    uVar12 = puVar8[2];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(uVar13);
      _swift_unknownObjectRetain(uVar15);
      _swift_bridgeObjectRetain(uVar12);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    HVar4.unknown = auStack_a8;
    FUN_10041f94c(HVar4.unknown,uVar13);
    uVar6 = Swift::Hasher::_finalize(HVar4);
    BVar5 = Swift::_HashTable::nextHole
                      ((Bucket)(uVar6 & (-1L << ((ulong)(byte)p_Var3[0x20] & 0x3f) ^
                                        0xffffffffffffffffU)),_Var1);
    uVar6 = (ulong)BVar5.offset >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(_Var1.unknown + uVar6) =
         1L << (BVar5.offset & 0x3fU) | *(ulong *)(_Var1.unknown + uVar6);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + BVar5.offset * 8) = uVar13;
    puVar8 = (undefined8 *)(*(long *)(p_Var3 + 0x38) + BVar5.offset * 0x18);
    puVar8[1] = uVar16;
    *puVar8 = uVar15;
    puVar8[2] = uVar12;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x10041f658 | FUN_10041f658 */

undefined8 FUN_10041f658(long param_1,ulong param_2)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_100417f28();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_2 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_10041f27c();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar2 + 0x30) + param_1 * 8));
    uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x38) + param_1 * 0x18);
    FUN_10041f0c8(param_1,lVar2);
    *unaff_x20 = lVar2;
  }
  return uVar3;
}



/* Address: 0x10041f72c | FUN_10041f72c */

void FUN_10041f72c(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4,uint param_5)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  
  lVar9 = *unaff_x20;
  uVar2 = param_4;
  uVar4 = param_2;
  FUN_100417f28();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10041f820);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    param_5 = param_5 & 1;
    FUN_10041f410(lVar6);
    uVar2 = param_4;
    FUN_100417f28();
    if (((uint)uVar4 & 1) != (param_5 & 1)) {
      FUN_1000f7830(&DAT_100fc5e58,&DAT_100c49610);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10041f7d4);
      (*pcVar1)();
    }
  }
  else if ((param_5 & 1) == 0) {
    FUN_10041f27c();
    lVar6 = *unaff_x20;
    goto joined_r0x00010041f834;
  }
  lVar6 = *unaff_x20;
joined_r0x00010041f834:
  if ((uVar4 & 1) != 0) {
    puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x18);
    uVar10 = *puVar7;
    uVar3 = puVar7[2];
    *puVar7 = param_1;
    puVar7[1] = param_2;
    puVar7[2] = param_3;
    _swift_bridgeObjectRelease(uVar3);
    _swift_unknownObjectRelease(uVar10);
    return;
  }
  lVar5 = lVar6 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar2 & 0x3f);
  *(ulong *)(*(long *)(lVar6 + 0x30) + uVar2 * 8) = param_4;
  puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar2 * 0x18);
  *puVar7 = param_1;
  puVar7[1] = param_2;
  puVar7[2] = param_3;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10041f8a0);
    (*pcVar1)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_4);
  return;
}



/* Address: 0x10041f8a0 | FUN_10041f8a0 */

void FUN_10041f8a0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x10041f8cc | FUN_10041f8cc */

undefined8 FUN_10041f8cc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5e58;
  FUN_1000f7830(&DAT_100fc5e58,&DAT_100c49610);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10041f914 | FUN_10041f914 */

void FUN_10041f914(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(param_2);
    _swift_errorRetain(param_3);
    return;
  }
  return;
}



/* Address: 0x10041f94c | FUN_10041f94c */

void FUN_10041f94c(Hasher param_1,char *param_2)

{
  String *pSVar1;
  void *pvVar2;
  String SVar3;
  code *pcVar4;
  bool bVar5;
  __int64 _seed;
  Hasher into;
  ulong uVar6;
  Hasher HVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_f8 [72];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  uStack_88 = *(undefined8 *)(param_1.unknown + 0x28);
  local_90 = *(undefined8 *)(param_1.unknown + 0x20);
  uStack_78 = *(undefined8 *)(param_1.unknown + 0x38);
  uStack_80 = *(undefined8 *)(param_1.unknown + 0x30);
  local_70 = *(undefined8 *)(param_1.unknown + 0x40);
  uStack_a8 = *(undefined8 *)(param_1.unknown + 8);
  local_b0 = *(undefined8 *)param_1.unknown;
  uStack_98 = *(undefined8 *)(param_1.unknown + 0x18);
  uStack_a0 = *(undefined8 *)(param_1.unknown + 0x10);
  HVar7.unknown = param_2;
  _seed = Swift::Hasher::_finalize(param_1);
  uVar8 = 1L << ((ulong)(byte)param_2[0x20] & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((param_2[0x20] & 0x3fU) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_2 + 0x38);
  _swift_bridgeObjectRetain(param_2);
  uVar9 = 0;
  lVar11 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar6 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      pSVar1 = (String *)
               (*(long *)(param_2 + 0x30) + LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) * 0x10 +
               lVar11 * 0x400);
      HVar7.unknown = pSVar1->str;
      pvVar2 = pSVar1->bridgeObject;
      SVar3 = *pSVar1;
      Swift::Hasher::init(_seed);
      _swift_bridgeObjectRetain(pvVar2);
      into.unknown = auStack_f8;
      Swift::String::hash(into,SVar3);
      uVar6 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar2);
      uVar9 = uVar6 ^ uVar9;
    }
    bVar5 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar5) break;
    if ((long)(uVar8 + 0x3f >> 6) <= lVar11) {
      _swift_release(param_2);
      Swift::Hasher::_combine(uVar9,HVar7);
      return;
    }
    uVar10 = *(ulong *)((long)(param_2 + 0x38) + lVar11 * 8);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10041fa9c);
  (*pcVar4)();
}



/* Address: 0x10041fa9c | FUN_10041fa9c */

void FUN_10041fa9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_unknownObjectRelease();
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  return;
}



/* Address: 0x10041fac8 | thunk_FUN_10041f0a0 */

void thunk_FUN_10041f0a0(void)

{
  FUN_10041f0a0();
  return;
}



/* Address: 0x10041facc | thunk_FUN_10041ef6c */

void thunk_FUN_10041ef6c(void)

{
  FUN_10041ef6c();
  return;
}



/* Address: 0x10041fad0 | thunk_FUN_10041f8a0 */

void thunk_FUN_10041f8a0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x10041fad4 | FUN_10041fad4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10041fad4(undefined *param_1,undefined8 param_2,long param_3)

{
  _CocoaArrayWrapper _Var1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ID self;
  ID IVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x20;
  ulong uVar13;
  undefined8 uVar14;
  ID IVar15;
  ID IVar16;
  String SVar17;
  undefined1 auStack_178 [24];
  String local_160;
  ID local_150;
  ID local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined **ppuStack_128;
  ID local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined7 uStack_107;
  undefined1 uStack_100;
  undefined7 uStack_ff;
  byte bStack_f8;
  undefined7 uStack_f7;
  undefined2 local_f0;
  char *local_e0;
  void *pvStack_d8;
  ID IStack_d0;
  ID IStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined **ppuStack_a8;
  ID local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  if (*(long *)(unaff_x20 + 0x28) == 0) {
    _swift_bridgeObjectRetain(param_1);
    puVar9 = param_1;
  }
  else {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar2 = *(uint *)(unaff_x20 + 0x10);
    if ((ulong)param_1 >> 0x3e == 0) {
      IVar15 = *(ID *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        _Var1.unknown = param_1;
      }
      IVar15 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    PTR___swiftEmptyArrayStorage_100eae0d8 = puVar9;
    if (IVar15 != 0) {
      if ((long)IVar15 < 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10041ff28);
        (*pcVar4)();
      }
      bVar3 = ((byte)uVar2 ^ 0xff) & 1;
      _swift_bridgeObjectRetain();
      _swift_retain(uVar14);
      IVar16 = 0;
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          self = *(ID *)(param_1 + IVar16 * 8 + 0x20);
        }
        else {
          self = IVar16;
          FUN_10010eb84(IVar16,param_1,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8,
                        &DAT_100fc59c0);
        }
        IVar7 = objc_stub::transactionState(self);
        if (IVar7 == 3) {
          IVar7 = objc_stub::FUN_100c07b40(self);
          objc_stub::productIdentifier(IVar7);
          SVar17 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          IVar7 = objc_stub::FUN_100c07b40(self);
          IVar7 = objc_stub::FUN_100c08520(IVar7);
          uVar8 = 0;
          FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
          ppuStack_128 = &PTR_BYTE_100ed3ac0;
          local_148 = self;
          local_130 = uVar8;
          local_120 = objc_stub::FUN_100c07880(self);
          if (local_120 == 0) {
            uStack_100 = 0;
            uStack_ff = 0;
            uStack_118 = 0;
            local_120 = 0;
            local_108 = 0;
            uStack_107 = 0;
            uStack_110 = 0;
          }
          else {
            local_108 = (undefined1)uVar8;
            uStack_107 = (undefined7)((ulong)uVar8 >> 8);
            uStack_100 = 0xc0;
            uStack_ff = 0x100ed3a;
          }
          local_160 = SVar17;
          local_150 = IVar7;
          bStack_f8 = bVar3;
          if ((uVar2 & 1) != 0) {
            uVar8 = param_2;
            _swift_getObjectType(param_2);
            (**(code **)(param_3 + 0x48))(self,uVar8);
          }
          uStack_98 = uStack_118;
          local_a0 = local_120;
          uStack_88 = local_108;
          uStack_90 = uStack_110;
          uStack_7f = CONCAT17(bStack_f8,uStack_ff);
          local_87 = uStack_107;
          uStack_80 = uStack_100;
          pvStack_d8 = local_160.bridgeObject;
          local_e0 = local_160.str;
          IStack_c8 = local_148;
          IStack_d0 = local_150;
          uStack_b8 = uStack_138;
          local_c0 = local_140;
          ppuStack_a8 = ppuStack_128;
          uStack_b0 = local_130;
          FUN_1002c4bd0(&local_e0,&local_160);
          local_f0 = CONCAT11(1,(undefined1)local_f0);
          _swift_beginAccess(unaff_x20 + 0x38,auStack_178,0x21,0);
          uVar13 = *(ulong *)(unaff_x20 + 0x38);
          uVar10 = uVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(unaff_x20 + 0x38) = uVar13;
          if ((uVar10 & 1) == 0) {
            uVar10 = 0;
            FUN_100420d40(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
            *(ulong *)(unaff_x20 + 0x38) = uVar10;
            uVar13 = uVar10;
          }
          uVar10 = *(ulong *)(uVar13 + 0x10);
          uVar11 = uVar13;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar10) {
            uVar11 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_100420d40(uVar11,uVar10 + 1,1,uVar13);
          }
          *(ulong *)(uVar11 + 0x10) = uVar10 + 1;
          lVar12 = uVar11 + uVar10 * 0x78;
          *(undefined8 *)(lVar12 + 0x48) = uStack_138;
          *(undefined8 *)(lVar12 + 0x40) = local_140;
          *(undefined ***)(lVar12 + 0x58) = ppuStack_128;
          *(undefined8 *)(lVar12 + 0x50) = local_130;
          *(void **)(lVar12 + 0x28) = local_160.bridgeObject;
          *(char **)(lVar12 + 0x20) = local_160.str;
          *(ID *)(lVar12 + 0x38) = local_148;
          *(ID *)(lVar12 + 0x30) = local_150;
          *(undefined2 *)(lVar12 + 0x90) = local_f0;
          *(ulong *)(lVar12 + 0x78) = CONCAT71(uStack_107,local_108);
          *(undefined8 *)(lVar12 + 0x70) = uStack_110;
          *(ulong *)(lVar12 + 0x88) = CONCAT71(uStack_f7,bStack_f8);
          *(ulong *)(lVar12 + 0x80) = CONCAT71(uStack_ff,uStack_100);
          *(undefined8 *)(lVar12 + 0x68) = uStack_118;
          *(ID *)(lVar12 + 0x60) = local_120;
          *(ulong *)(unaff_x20 + 0x38) = uVar11;
          _swift_endAccess(auStack_178);
          FUN_1002c4c0c(&local_e0);
        }
        else {
          uStack_ff = 0;
          bStack_f8 = 0;
          uStack_100 = 0;
          uStack_118 = 0;
          local_120 = 0;
          local_108 = 0;
          uStack_107 = 0;
          uStack_110 = 0;
          uStack_138 = 0;
          local_140 = 0;
          ppuStack_128 = (undefined **)0x0;
          local_130 = 0;
          local_160 = (String)ZEXT816(0);
          local_148 = 0;
          local_150 = 0;
          FUN_100420e5c(&local_160);
          puVar6 = puVar9;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar6 == 0) || ((long)puVar9 < 0)) ||
             (puVar6 = puVar9, ((ulong)puVar9 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar9 >> 0x3e == 0) {
              lVar12 = *(long *)(((ulong)puVar9 & 0xffffffffffffff8) + 0x10);
            }
            else {
              _Var1.unknown = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar9) {
                _Var1.unknown = puVar9;
              }
              lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
            }
            puVar6 = (undefined *)0x0;
            FUN_1004205bc(0,lVar12 + 1,1,puVar9);
          }
          uVar13 = (ulong)puVar6 & 0xffffffffffffff8;
          uVar10 = *(ulong *)(uVar13 + 0x10);
          puVar9 = puVar6;
          if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar10) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(uVar13 + 0x18));
            FUN_1004205bc(puVar9,uVar10 + 1,1,puVar6);
            uVar13 = (ulong)puVar9 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar13 + 0x10) = uVar10 + 1;
          *(ID *)(uVar13 + uVar10 * 8 + 0x20) = self;
        }
        IVar16 = IVar16 + 1;
      } while (IVar15 != IVar16);
      _swift_release(uVar14);
      _swift_bridgeObjectRelease(uVar5);
    }
  }
  return puVar9;
}



/* Address: 0x10041ff28 | FUN_10041ff28 */

void FUN_10041ff28(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  NSError *pNVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  String SVar13;
  String separator;
  undefined1 auStack_68 [24];
  
  pcVar12 = *(code **)(unaff_x20 + 0x28);
  if (pcVar12 != (code *)0x0) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar10);
    pNVar3 = Foundation::__convertErrorToNSError();
    _swift_beginAccess(unaff_x20 + 0x38,auStack_68,0x21,0);
    uVar11 = *(ulong *)(unaff_x20 + 0x38);
    uVar4 = uVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x38) = uVar11;
    uVar6 = uVar11;
    if ((uVar4 & 1) == 0) {
      uVar6 = 0;
      FUN_100420d40(0,*(long *)(uVar11 + 0x10) + 1,1,uVar11);
      *(ulong *)(unaff_x20 + 0x38) = uVar6;
    }
    uVar4 = *(ulong *)(uVar6 + 0x10);
    uVar11 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar4) {
      uVar11 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100420d40(uVar11,uVar4 + 1,1,uVar6);
    }
    *(ulong *)(uVar11 + 0x10) = uVar4 + 1;
    lVar8 = uVar11 + uVar4 * 0x78;
    *(NSError **)(lVar8 + 0x20) = pNVar3;
    *(undefined1 *)(lVar8 + 0x91) = 3;
    *(ulong *)(unaff_x20 + 0x38) = uVar11;
    _swift_endAccess(auStack_68);
    _swift_bridgeObjectRetain(uVar11);
    (*pcVar12)();
    _swift_release(uVar10);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar11);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRelease(uVar9);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_1004204f0(uVar9,uVar1,uVar10,uVar2,uVar7);
    return;
  }
  pcVar5 = &DAT_100fc59b8;
  FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
  _swift_allocObject();
  pcVar5[0x18] = '\x02';
  pcVar5[0x19] = '\0';
  pcVar5[0x1a] = '\0';
  pcVar5[0x1b] = '\0';
  pcVar5[0x1c] = '\0';
  pcVar5[0x1d] = '\0';
  pcVar5[0x1e] = '\0';
  pcVar5[0x1f] = '\0';
  pcVar5[0x10] = '\x01';
  pcVar5[0x11] = '\0';
  pcVar5[0x12] = '\0';
  pcVar5[0x13] = '\0';
  pcVar5[0x14] = '\0';
  pcVar5[0x15] = '\0';
  pcVar5[0x16] = '\0';
  pcVar5[0x17] = '\0';
  *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar5[0x20] = '\"';
  pcVar5[0x21] = '\0';
  pcVar5[0x22] = '\0';
  pcVar5[0x23] = '\0';
  pcVar5[0x24] = '\0';
  pcVar5[0x25] = '\0';
  pcVar5[0x26] = '\0';
  pcVar5[0x27] = -0x30;
  pcVar5[0x28] = -0x80;
  pcVar5[0x29] = 'a';
  pcVar5[0x2a] = -0x26;
  pcVar5[0x2b] = '\0';
  pcVar5[0x2c] = '\x01';
  pcVar5[0x2d] = '\0';
  pcVar5[0x2e] = '\0';
  pcVar5[0x2f] = -0x80;
  SVar13.bridgeObject = (void *)0x20;
  SVar13.str = pcVar5;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar13,separator);
  _swift_release(pcVar5);
  return;
}



/* Address: 0x100420118 | FUN_100420118 */

void FUN_100420118(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  String separator;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(unaff_x20 + 0x28);
  if (pcVar4 != (code *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
    _swift_beginAccess(unaff_x20 + 0x38,auStack_68,1,0);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x38);
    FUN_1004204c0(uVar6,uVar2,uVar1,pcVar4,uVar5);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar4)();
    _swift_release(uVar5);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar1);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined **)(unaff_x20 + 0x38) = PTR___swiftEmptyArrayStorage_100eae0d8;
    _swift_bridgeObjectRelease(uVar2);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_1004204f0(uVar2,uVar5,uVar1,uVar6,uVar7);
    return;
  }
  pcVar3 = &DAT_100fc59b8;
  FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
  _swift_allocObject();
  pcVar3[0x18] = '\x02';
  pcVar3[0x19] = '\0';
  pcVar3[0x1a] = '\0';
  pcVar3[0x1b] = '\0';
  pcVar3[0x1c] = '\0';
  pcVar3[0x1d] = '\0';
  pcVar3[0x1e] = '\0';
  pcVar3[0x1f] = '\0';
  pcVar3[0x10] = '\x01';
  pcVar3[0x11] = '\0';
  pcVar3[0x12] = '\0';
  pcVar3[0x13] = '\0';
  pcVar3[0x14] = '\0';
  pcVar3[0x15] = '\0';
  pcVar3[0x16] = '\0';
  pcVar3[0x17] = '\0';
  *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar3[0x20] = '\"';
  pcVar3[0x21] = '\0';
  pcVar3[0x22] = '\0';
  pcVar3[0x23] = '\0';
  pcVar3[0x24] = '\0';
  pcVar3[0x25] = '\0';
  pcVar3[0x26] = '\0';
  pcVar3[0x27] = -0x30;
  pcVar3[0x28] = -0x80;
  pcVar3[0x29] = 'a';
  pcVar3[0x2a] = -0x26;
  pcVar3[0x2b] = '\0';
  pcVar3[0x2c] = '\x01';
  pcVar3[0x2d] = '\0';
  pcVar3[0x2e] = '\0';
  pcVar3[0x2f] = -0x80;
  SVar8.bridgeObject = (void *)0x20;
  SVar8.str = pcVar3;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar8,separator);
  _swift_release(pcVar3);
  return;
}



/* Address: 0x10042027c | FUN_10042027c */

void FUN_10042027c(void)

{
  long unaff_x20;
  
  FUN_1004204f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocClassInstance();
  return;
}


