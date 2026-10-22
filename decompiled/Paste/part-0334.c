/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004202b0 | FUN_1004202b0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004202b0(void)

{
  return ZEXT816(0x100fc5ea8);
}



/* Address: 0x1004202d0 | FUN_1004202d0 */

void FUN_1004202d0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1004202f8 | FUN_1004202f8 */

undefined1 * FUN_1004202f8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x100420348 | FUN_100420348 */

undefined1 * FUN_100420348(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1004203b8 | FUN_1004203b8 */

void FUN_1004203b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1004203cc | FUN_1004203cc */

undefined1 * FUN_1004203cc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100420420 | FUN_100420420 */

int FUN_100420420(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100420468 | FUN_100420468 */

void FUN_100420468(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004204b0 | FUN_1004204b0 */

undefined1  [16] FUN_1004204b0(void)

{
  return ZEXT816(0x100ed3a48);
}



/* Address: 0x1004204c0 | FUN_1004204c0 */

void FUN_1004204c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 != 0) {
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(param_5);
    return;
  }
  return;
}



/* Address: 0x1004204f0 | FUN_1004204f0 */

void FUN_1004204f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  if (param_4 != 0) {
    _swift_release(param_5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  return;
}



/* Address: 0x100420520 | FUN_100420520 */

void FUN_100420520(void)

{
  byte bVar1;
  long lVar2;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xd,0,0,0x10,0,0);
  if ((bVar1 & 1) != 0) {
    lVar2 = 0;
    FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
    if (lVar2 != 0) {
      FUN_1000f7830(&DAT_100fc5f78,&DAT_100c49698);
      return;
    }
  }
  FUN_1000f7830(&DAT_100fc5f70,&DAT_100c49690);
  return;
}



/* Address: 0x100420594 | FUN_100420594 */

void FUN_100420594(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8,&DAT_100fc59c0);
  return;
}



/* Address: 0x1004205a8 | FUN_1004205a8 */

void FUN_1004205a8(undefined8 param_1,undefined8 param_2)

{
  FUN_10010eb84(param_1,param_2,&PTR__OBJC_CLASS___SKProduct_100f8dcc0,&DAT_100fc5a28);
  return;
}



/* Address: 0x1004205bc | FUN_1004205bc */

ulong FUN_1004205bc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar5 = param_2;
  if (((param_3 & 1) != 0) && (uVar5 = uVar3, (long)uVar3 < (long)param_2)) {
    if ((long)(uVar3 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004206e4);
      (*pcVar2)();
    }
    uVar5 = uVar3 * 2;
    if (uVar5 - param_2 == 0 || (long)uVar5 < (long)param_2) {
      uVar5 = param_2;
    }
  }
  if ((ulong)param_4 >> 0x3e == 0) {
    uVar3 = *(ulong *)((undefined *)((ulong)param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_4 & 0xffffffffffffff8);
    if (((ulong)param_4 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_4;
    }
    uVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar4 = uVar3;
  FUN_100421118(uVar3,uVar5);
  if ((param_1 & 1) == 0) {
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004206e0);
      (*pcVar2)();
    }
    FUN_100421198(0,uVar3,uVar4 + 0x20,param_4);
  }
  else {
    uVar5 = (ulong)param_4 & 0xffffffffffffff8;
    if ((uVar4 != uVar5) || ((void *)((long)(uVar5 + 0x20) + uVar3 * 8) <= (void *)(uVar4 + 0x20)))
    {
      _memmove((void *)(uVar4 + 0x20),(void *)(uVar5 + 0x20),uVar3 << 3);
    }
    *(undefined8 *)(uVar5 + 0x10) = 0;
    _swift_bridgeObjectRelease(param_4);
  }
  return uVar4;
}



/* Address: 0x1004206e4 | FUN_1004206e4 */

undefined * FUN_1004206e4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100420804);
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
    puVar3 = &DAT_100fc5f88;
    FUN_1000f7830(&DAT_100fc5f88,&DAT_100c496a8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x70) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed3b70);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x70 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x70);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100420804 | FUN_100420804 */

undefined * FUN_100420804(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100420980);
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100420978);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10042097c);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x100420980 | FUN_100420980 */

undefined * FUN_100420980(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100420b14);
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
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100420b0c);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100420b10);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar5;
}



/* Address: 0x100420b14 | FUN_100420b14 */

undefined * FUN_100420b14(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100420c1c);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100420c1c | FUN_100420c1c */

undefined * FUN_100420c1c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100420d40);
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
    puVar3 = &DAT_100fc5f80;
    FUN_1000f7830(&DAT_100fc5f80,&DAT_100c496a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x48) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed3858);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x48 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x48);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100420d40 | FUN_100420d40 */

undefined * FUN_100420d40(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100420e5c);
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
    puVar3 = &DAT_100fc5f60;
    FUN_1000f7830(&DAT_100fc5f60,&DAT_100c49680);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x78) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ed36d0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x78 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x78);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100420e5c | FUN_100420e5c */

undefined8 FUN_100420e5c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5f68;
  FUN_1000f7830(&DAT_100fc5f68,&DAT_100c49688);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100420ea4 | FUN_100420ea4 */

undefined * FUN_100420ea4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100420fd4);
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
    puVar3 = &DAT_100fc5e50;
    FUN_1000f7830(&DAT_100fc5e50,&DAT_100c496d0);
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
    puVar5 = &DAT_100fc5fa0;
    FUN_1000f7830(&DAT_100fc5fa0,&DAT_100c496d8);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100420fd4 | FUN_100420fd4 */

undefined * FUN_100420fd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100421118);
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
    puVar3 = &DAT_100fc5f90;
    FUN_1000f7830(&DAT_100fc5f90,&DAT_100c496c0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fc5f98;
    FUN_1000f7830(&DAT_100fc5f98,&DAT_100c496c8);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100421118 | FUN_100421118 */

undefined * FUN_100421118(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_100420520();
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Address: 0x100421198 | FUN_100421198 */

UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
 FUN_100421198(Range<__int64> param_1,
              UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              param_2,_CocoaArrayWrapper param_3,_ArrayBuffer param_4)

{
  undefined *puVar1;
  code *pcVar2;
  Range<__int64> RVar3;
  undefined8 uVar4;
  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
  UVar5;
  
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if ((long)param_2.unknown < (long)param_1.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004212ac);
      (*pcVar2)();
    }
    if (param_1.unknown != param_2.unknown) {
      if ((long)param_2.unknown <= (long)param_1.unknown) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004212b0);
        (*pcVar2)();
      }
      FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
      RVar3.unknown = param_1.unknown;
      do {
        puVar1 = RVar3.unknown + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath((__int64)RVar3.unknown,param_4);
        RVar3.unknown = puVar1;
      } while (param_2.unknown != puVar1);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8((long)param_2.unknown,(long)param_1.unknown)) {
      uVar4 = 0;
      FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
      _swift_arrayInitWithCopy
                (param_3.unknown,
                 ((ulong)param_4.unknown & 0xffffffffffffff8) + (long)param_1.unknown * 8 + 0x20,
                 (long)param_2.unknown - (long)param_1.unknown,uVar4);
      _swift_bridgeObjectRelease(param_4.unknown);
      return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
              )(param_3.unknown + ((long)param_2.unknown - (long)param_1.unknown) * 8);
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004212a8);
    (*pcVar2)();
  }
  UVar5 = Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return (UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
          )UVar5.unknown;
}



/* Address: 0x1004212b0 | FUN_1004212b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1004212b0(void)

{
  Locale LVar1;
  Locale LVar2;
  undefined *self;
  NSLocale *pNVar3;
  ID IVar4;
  long lVar5;
  ID unaff_x20;
  long lVar6;
  String SVar7;
  
  LVar1 = Foundation::Locale::typeMetadataAccessor();
  lVar6 = *(long *)(LVar1.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  LVar2.unknown = (undefined *)objc_stub::priceLocale(unaff_x20);
  Foundation::Locale::__unconditionallyBridgeFromObjectiveC(LVar2);
  self = &_OBJC_CLASS___NSNumberFormatter;
  _objc_allocWithZone();
  LVar2.unknown = (undefined *)objc_stub::init(self);
  pNVar3 = Foundation::Locale::_bridgeToObjectiveC(LVar2);
  objc_stub::setLocale_((ID)LVar2.unknown,pNVar3);
  objc_stub::setNumberStyle_((ID)LVar2.unknown,2);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffc0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),LVar1.unknown);
  IVar4 = objc_stub::price(unaff_x20);
  IVar4 = objc_stub::stringFromNumber_((ID)LVar2.unknown,IVar4);
  if (IVar4 == 0) {
    SVar7 = (String)ZEXT816(0);
  }
  else {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar7;
}



/* Address: 0x1004213e4 | FUN_1004213e4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1004213e4(void)

{
  undefined *puVar1;
  DateComponents DVar2;
  ID IVar3;
  ID IVar4;
  Calendar CVar5;
  TimeZone TVar6;
  char *pcVar7;
  NSDateComponents *pNVar8;
  ID unaff_x20;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String separator;
  ID IStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ID IStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = &DAT_100fc5fa8;
  FUN_1000f7830(&DAT_100fc5fa8,&DAT_100c496e0);
  puVar10 = &stack0xffffffffffffffb0 +
            -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fc5fb0;
  FUN_1000f7830(&DAT_100fc5fb0,&DAT_100c496e8);
  lVar11 = (long)puVar10 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Foundation::DateComponents::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  lVar9 = lVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
  if (IVar3 == 0) {
    return (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  IVar4 = objc_stub::unit(IVar3);
  if ((long)IVar4 < 2) {
    if (IVar4 == 0) {
      CVar5 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(lVar11,1,1,CVar5.unknown);
      TVar6 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar10,1,1,TVar6.unknown);
      IVar3 = objc_stub::numberOfUnits(IVar3);
      *(undefined1 *)(lVar9 + -8) = 1;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined1 *)(lVar9 + -0x18) = 1;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined1 *)(lVar9 + -0x28) = 1;
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined1 *)(lVar9 + -0x38) = 1;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined1 *)(lVar9 + -0x48) = 1;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined1 *)(lVar9 + -0x58) = 1;
      *(undefined8 *)(lVar9 + -0x60) = 0;
      *(undefined1 *)(lVar9 + -0x68) = 1;
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined1 *)(lVar9 + -0x78) = 1;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined1 *)(lVar9 + -0x88) = 1;
      *(undefined8 *)(lVar9 + -0x90) = 0;
      *(undefined1 *)(lVar9 + -0x98) = 1;
      *(undefined8 *)(lVar9 + -0xa0) = 0;
      *(undefined1 *)(lVar9 + -0xa8) = 0;
      *(ID *)(lVar9 + -0xb0) = IVar3;
      goto LAB_100421874;
    }
    if (IVar4 == 1) {
      CVar5 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(lVar11,1,1,CVar5.unknown);
      TVar6 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar10,1,1,TVar6.unknown);
      IVar3 = objc_stub::numberOfUnits(IVar3);
      *(undefined1 *)(lVar9 + -8) = 1;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined1 *)(lVar9 + -0x18) = 1;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined1 *)(lVar9 + -0x28) = 0;
      *(ID *)(lVar9 + -0x30) = IVar3;
      *(undefined1 *)(lVar9 + -0x38) = 1;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined1 *)(lVar9 + -0x48) = 1;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined1 *)(lVar9 + -0x58) = 1;
      *(undefined8 *)(lVar9 + -0x60) = 0;
      *(undefined1 *)(lVar9 + -0x68) = 1;
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined1 *)(lVar9 + -0x78) = 1;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined1 *)(lVar9 + -0x88) = 1;
      *(undefined8 *)(lVar9 + -0x90) = 0;
      *(undefined1 *)(lVar9 + -0x98) = 1;
      *(undefined8 *)(lVar9 + -0xa0) = 0;
      *(undefined1 *)(lVar9 + -0xa8) = 1;
      *(undefined8 *)(lVar9 + -0xb0) = 0;
      goto LAB_100421874;
    }
LAB_100421658:
    pcVar7 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar7[0x20] = 'c';
    pcVar7[0x21] = '\0';
    pcVar7[0x22] = '\0';
    pcVar7[0x23] = '\0';
    pcVar7[0x24] = '\0';
    pcVar7[0x25] = '\0';
    pcVar7[0x26] = '\0';
    pcVar7[0x27] = -0x30;
    pcVar7[0x28] = -0x50;
    pcVar7[0x29] = 'a';
    pcVar7[0x2a] = -0x26;
    pcVar7[0x2b] = '\0';
    pcVar7[0x2c] = '\x01';
    pcVar7[0x2d] = '\0';
    pcVar7[0x2e] = '\0';
    pcVar7[0x2f] = -0x80;
    SVar13.bridgeObject = (void *)0x20;
    SVar13.str = pcVar7;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar13,separator);
    _swift_release(pcVar7);
  }
  else if (IVar4 != 2) {
    if (IVar4 == 3) {
      CVar5 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(lVar11,1,1,CVar5.unknown);
      TVar6 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar10,1,1,TVar6.unknown);
      objc_stub::numberOfUnits(IVar3);
      *(undefined1 *)(lVar9 + -8) = 1;
      *(undefined8 *)(lVar9 + -0x10) = 0;
      *(undefined1 *)(lVar9 + -0x18) = 1;
      *(undefined8 *)(lVar9 + -0x20) = 0;
      *(undefined1 *)(lVar9 + -0x28) = 1;
      *(undefined8 *)(lVar9 + -0x30) = 0;
      *(undefined1 *)(lVar9 + -0x38) = 1;
      *(undefined8 *)(lVar9 + -0x40) = 0;
      *(undefined1 *)(lVar9 + -0x48) = 1;
      *(undefined8 *)(lVar9 + -0x50) = 0;
      *(undefined1 *)(lVar9 + -0x58) = 1;
      *(undefined8 *)(lVar9 + -0x60) = 0;
      *(undefined1 *)(lVar9 + -0x68) = 1;
      *(undefined8 *)(lVar9 + -0x70) = 0;
      *(undefined1 *)(lVar9 + -0x78) = 1;
      *(undefined8 *)(lVar9 + -0x80) = 0;
      *(undefined1 *)(lVar9 + -0x88) = 1;
      *(undefined8 *)(lVar9 + -0x90) = 0;
      *(undefined1 *)(lVar9 + -0x98) = 1;
      *(undefined8 *)(lVar9 + -0xa0) = 0;
      *(undefined1 *)(lVar9 + -0xa8) = 1;
      *(undefined8 *)(lVar9 + -0xb0) = 0;
      goto LAB_100421874;
    }
    goto LAB_100421658;
  }
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar5.unknown + -8) + 0x38))(lVar11,1,1,CVar5.unknown);
  TVar6 = Foundation::TimeZone::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar6.unknown + -8) + 0x38))(puVar10,1,1,TVar6.unknown);
  objc_stub::numberOfUnits(IVar3);
  *(undefined1 *)(lVar9 + -8) = 1;
  *(undefined8 *)(lVar9 + -0x10) = 0;
  *(undefined1 *)(lVar9 + -0x18) = 1;
  *(undefined8 *)(lVar9 + -0x20) = 0;
  *(undefined1 *)(lVar9 + -0x28) = 1;
  *(undefined8 *)(lVar9 + -0x30) = 0;
  *(undefined1 *)(lVar9 + -0x38) = 1;
  *(undefined8 *)(lVar9 + -0x40) = 0;
  *(undefined1 *)(lVar9 + -0x48) = 1;
  *(undefined8 *)(lVar9 + -0x50) = 0;
  *(undefined1 *)(lVar9 + -0x58) = 1;
  *(undefined8 *)(lVar9 + -0x60) = 0;
  *(undefined1 *)(lVar9 + -0x68) = 1;
  *(undefined8 *)(lVar9 + -0x70) = 0;
  *(undefined1 *)(lVar9 + -0x78) = 1;
  *(undefined8 *)(lVar9 + -0x80) = 0;
  *(undefined1 *)(lVar9 + -0x88) = 1;
  *(undefined8 *)(lVar9 + -0x90) = 0;
  *(undefined1 *)(lVar9 + -0x98) = 1;
  *(undefined8 *)(lVar9 + -0xa0) = 0;
  *(undefined1 *)(lVar9 + -0xa8) = 1;
  *(undefined8 *)(lVar9 + -0xb0) = 0;
LAB_100421874:
  Foundation::DateComponents::_init();
  pNVar8 = Foundation::DateComponents::_bridgeToObjectiveC
                     ((DateComponents)&_OBJC_CLASS___NSDateComponentsFormatter);
  IVar3 = NSDateComponentsFormatter::localizedStringFromDateComponents_unitsStyle_
                    ((ID)&_OBJC_CLASS___NSDateComponentsFormatter,pNVar8,2);
  if (IVar3 == 0) {
    SVar13 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  (**(code **)(lVar12 + 8))(lVar9,DVar2.unknown);
  return SVar13;
}



/* Address: 0x100421924 | FUN_100421924 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

String FUN_100421924(void)

{
  undefined *puVar1;
  DateComponents DVar2;
  ID IVar3;
  Calendar CVar4;
  TimeZone TVar5;
  char *pcVar6;
  NSDateComponents *pNVar7;
  ID unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String separator;
  ID IStack_100;
  undefined1 auStack_f8 [8];
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  undefined1 auStack_a8 [8];
  undefined8 uStack_a0;
  undefined1 auStack_98 [8];
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  ID IStack_80;
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = &DAT_100fc5fa8;
  FUN_1000f7830(&DAT_100fc5fa8,&DAT_100c496e0);
  puVar9 = &stack0xffffffffffffffb0 +
           -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fc5fb0;
  FUN_1000f7830(&DAT_100fc5fb0,&DAT_100c496e8);
  lVar10 = (long)puVar9 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Foundation::DateComponents::typeMetadataAccessor();
  lVar11 = *(long *)(DVar2.unknown + -8);
  lVar8 = lVar10 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
  IVar3 = objc_stub::unit(IVar3);
  if ((long)IVar3 < 2) {
    if (IVar3 == 0) {
      CVar4 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar4.unknown + -8) + 0x38))(lVar10,1,1,CVar4.unknown);
      TVar5 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar9,1,1,TVar5.unknown);
      IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
      IVar3 = objc_stub::numberOfUnits(IVar3);
      *(undefined1 *)(lVar8 + -8) = 1;
      *(undefined8 *)(lVar8 + -0x10) = 0;
      *(undefined1 *)(lVar8 + -0x18) = 1;
      *(undefined8 *)(lVar8 + -0x20) = 0;
      *(undefined1 *)(lVar8 + -0x28) = 1;
      *(undefined8 *)(lVar8 + -0x30) = 0;
      *(undefined1 *)(lVar8 + -0x38) = 1;
      *(undefined8 *)(lVar8 + -0x40) = 0;
      *(undefined1 *)(lVar8 + -0x48) = 1;
      *(undefined8 *)(lVar8 + -0x50) = 0;
      *(undefined1 *)(lVar8 + -0x58) = 1;
      *(undefined8 *)(lVar8 + -0x60) = 0;
      *(undefined1 *)(lVar8 + -0x68) = 1;
      *(undefined8 *)(lVar8 + -0x70) = 0;
      *(undefined1 *)(lVar8 + -0x78) = 1;
      *(undefined8 *)(lVar8 + -0x80) = 0;
      *(undefined1 *)(lVar8 + -0x88) = 1;
      *(undefined8 *)(lVar8 + -0x90) = 0;
      *(undefined1 *)(lVar8 + -0x98) = 1;
      *(undefined8 *)(lVar8 + -0xa0) = 0;
      *(undefined1 *)(lVar8 + -0xa8) = 0;
      *(ID *)(lVar8 + -0xb0) = IVar3;
      goto LAB_100421e80;
    }
    if (IVar3 == 1) {
      CVar4 = Foundation::Calendar::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar4.unknown + -8) + 0x38))(lVar10,1,1,CVar4.unknown);
      TVar5 = Foundation::TimeZone::typeMetadataAccessor();
      (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar9,1,1,TVar5.unknown);
      IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
      IVar3 = objc_stub::numberOfUnits(IVar3);
      *(undefined1 *)(lVar8 + -8) = 1;
      *(undefined8 *)(lVar8 + -0x10) = 0;
      *(undefined1 *)(lVar8 + -0x18) = 1;
      *(undefined8 *)(lVar8 + -0x20) = 0;
      *(undefined1 *)(lVar8 + -0x28) = 0;
      *(ID *)(lVar8 + -0x30) = IVar3;
      *(undefined1 *)(lVar8 + -0x38) = 1;
      *(undefined8 *)(lVar8 + -0x40) = 0;
      *(undefined1 *)(lVar8 + -0x48) = 1;
      *(undefined8 *)(lVar8 + -0x50) = 0;
      *(undefined1 *)(lVar8 + -0x58) = 1;
      *(undefined8 *)(lVar8 + -0x60) = 0;
      *(undefined1 *)(lVar8 + -0x68) = 1;
      *(undefined8 *)(lVar8 + -0x70) = 0;
      *(undefined1 *)(lVar8 + -0x78) = 1;
      *(undefined8 *)(lVar8 + -0x80) = 0;
      *(undefined1 *)(lVar8 + -0x88) = 1;
      *(undefined8 *)(lVar8 + -0x90) = 0;
      *(undefined1 *)(lVar8 + -0x98) = 1;
      *(undefined8 *)(lVar8 + -0xa0) = 0;
      *(undefined1 *)(lVar8 + -0xa8) = 1;
      *(undefined8 *)(lVar8 + -0xb0) = 0;
      goto LAB_100421e80;
    }
LAB_100421bcc:
    pcVar6 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar6[0x20] = 'c';
    pcVar6[0x21] = '\0';
    pcVar6[0x22] = '\0';
    pcVar6[0x23] = '\0';
    pcVar6[0x24] = '\0';
    pcVar6[0x25] = '\0';
    pcVar6[0x26] = '\0';
    pcVar6[0x27] = -0x30;
    pcVar6[0x28] = -0x50;
    pcVar6[0x29] = 'a';
    pcVar6[0x2a] = -0x26;
    pcVar6[0x2b] = '\0';
    pcVar6[0x2c] = '\x01';
    pcVar6[0x2d] = '\0';
    pcVar6[0x2e] = '\0';
    pcVar6[0x2f] = -0x80;
    SVar12.bridgeObject = (void *)0x20;
    SVar12.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar12,separator);
    _swift_release(pcVar6);
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x38))(lVar10,1,1,CVar4.unknown);
    TVar5 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar9,1,1,TVar5.unknown);
    IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
  }
  else {
    if (IVar3 != 2) {
      if (IVar3 == 3) {
        CVar4 = Foundation::Calendar::typeMetadataAccessor();
        (**(code **)(*(long *)(CVar4.unknown + -8) + 0x38))(lVar10,1,1,CVar4.unknown);
        TVar5 = Foundation::TimeZone::typeMetadataAccessor();
        (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar9,1,1,TVar5.unknown);
        IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
        objc_stub::numberOfUnits(IVar3);
        *(undefined1 *)(lVar8 + -8) = 1;
        *(undefined8 *)(lVar8 + -0x10) = 0;
        *(undefined1 *)(lVar8 + -0x18) = 1;
        *(undefined8 *)(lVar8 + -0x20) = 0;
        *(undefined1 *)(lVar8 + -0x28) = 1;
        *(undefined8 *)(lVar8 + -0x30) = 0;
        *(undefined1 *)(lVar8 + -0x38) = 1;
        *(undefined8 *)(lVar8 + -0x40) = 0;
        *(undefined1 *)(lVar8 + -0x48) = 1;
        *(undefined8 *)(lVar8 + -0x50) = 0;
        *(undefined1 *)(lVar8 + -0x58) = 1;
        *(undefined8 *)(lVar8 + -0x60) = 0;
        *(undefined1 *)(lVar8 + -0x68) = 1;
        *(undefined8 *)(lVar8 + -0x70) = 0;
        *(undefined1 *)(lVar8 + -0x78) = 1;
        *(undefined8 *)(lVar8 + -0x80) = 0;
        *(undefined1 *)(lVar8 + -0x88) = 1;
        *(undefined8 *)(lVar8 + -0x90) = 0;
        *(undefined1 *)(lVar8 + -0x98) = 1;
        *(undefined8 *)(lVar8 + -0xa0) = 0;
        *(undefined1 *)(lVar8 + -0xa8) = 1;
        *(undefined8 *)(lVar8 + -0xb0) = 0;
        goto LAB_100421e80;
      }
      goto LAB_100421bcc;
    }
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x38))(lVar10,1,1,CVar4.unknown);
    TVar5 = Foundation::TimeZone::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar9,1,1,TVar5.unknown);
    IVar3 = objc_stub::subscriptionPeriod(unaff_x20);
  }
  objc_stub::numberOfUnits(IVar3);
  *(undefined1 *)(lVar8 + -8) = 1;
  *(undefined8 *)(lVar8 + -0x10) = 0;
  *(undefined1 *)(lVar8 + -0x18) = 1;
  *(undefined8 *)(lVar8 + -0x20) = 0;
  *(undefined1 *)(lVar8 + -0x28) = 1;
  *(undefined8 *)(lVar8 + -0x30) = 0;
  *(undefined1 *)(lVar8 + -0x38) = 1;
  *(undefined8 *)(lVar8 + -0x40) = 0;
  *(undefined1 *)(lVar8 + -0x48) = 1;
  *(undefined8 *)(lVar8 + -0x50) = 0;
  *(undefined1 *)(lVar8 + -0x58) = 1;
  *(undefined8 *)(lVar8 + -0x60) = 0;
  *(undefined1 *)(lVar8 + -0x68) = 1;
  *(undefined8 *)(lVar8 + -0x70) = 0;
  *(undefined1 *)(lVar8 + -0x78) = 1;
  *(undefined8 *)(lVar8 + -0x80) = 0;
  *(undefined1 *)(lVar8 + -0x88) = 1;
  *(undefined8 *)(lVar8 + -0x90) = 0;
  *(undefined1 *)(lVar8 + -0x98) = 1;
  *(undefined8 *)(lVar8 + -0xa0) = 0;
  *(undefined1 *)(lVar8 + -0xa8) = 1;
  *(undefined8 *)(lVar8 + -0xb0) = 0;
LAB_100421e80:
  Foundation::DateComponents::_init();
  pNVar7 = Foundation::DateComponents::_bridgeToObjectiveC
                     ((DateComponents)&_OBJC_CLASS___NSDateComponentsFormatter);
  IVar3 = NSDateComponentsFormatter::localizedStringFromDateComponents_unitsStyle_
                    ((ID)&_OBJC_CLASS___NSDateComponentsFormatter,pNVar7,3);
  if (IVar3 == 0) {
    SVar12 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  (**(code **)(lVar11 + 8))(lVar8,DVar2.unknown);
  return SVar12;
}



/* Address: 0x100421f20 | FUN_100421f20 */

void FUN_100421f20(byte param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  puVar6 = (undefined1 *)0xef657461645f6e6f;
  pcVar1 = (char *)0x6974617269707865;
  if (param_1 != 4) {
    puVar6 = &DAT_e600000000000000;
    pcVar1 = (char *)0x7070615f6e69;
  }
  HVar5.unknown = (undefined1 *)0xed0000657461645f;
  pcVar2 = (char *)0x6e6f697461657263;
  if (param_1 != 3) {
    HVar5.unknown = puVar6;
    pcVar2 = pcVar1;
  }
  pcVar1 = "original_application_version";
  pcVar3 = (char *)0xd000000000000013;
  if (param_1 != 1) {
    pcVar1 = "version_external_identifier";
    pcVar3 = (char *)0xd00000000000001c;
  }
  puVar6 = (undefined1 *)0xe900000000000064;
  pcVar4 = (char *)0x695f656c646e7562;
  if (param_1 != 0) {
    puVar6 = (undefined1 *)((ulong)pcVar1 | 0x8000000000000000);
    pcVar4 = pcVar3;
  }
  if (param_1 < 3) {
    HVar5.unknown = puVar6;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100422040 | FUN_100422040 */

void FUN_100422040(__int64 param_1,byte param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  Hasher HVar5;
  undefined1 *puVar6;
  String SVar7;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  puVar6 = (undefined1 *)0xef657461645f6e6f;
  pcVar1 = (char *)0x6974617269707865;
  if (param_2 != 4) {
    puVar6 = &DAT_e600000000000000;
    pcVar1 = (char *)0x7070615f6e69;
  }
  HVar5.unknown = (undefined1 *)0xed0000657461645f;
  pcVar2 = (char *)0x6e6f697461657263;
  if (param_2 != 3) {
    HVar5.unknown = puVar6;
    pcVar2 = pcVar1;
  }
  pcVar1 = "original_application_version";
  pcVar3 = (char *)0xd000000000000013;
  if (param_2 != 1) {
    pcVar1 = "version_external_identifier";
    pcVar3 = (char *)0xd00000000000001c;
  }
  puVar6 = (undefined1 *)0xe900000000000064;
  pcVar4 = (char *)0x695f656c646e7562;
  if (param_2 != 0) {
    puVar6 = (undefined1 *)((ulong)pcVar1 | 0x8000000000000000);
    pcVar4 = pcVar3;
  }
  if (param_2 < 3) {
    HVar5.unknown = puVar6;
    pcVar2 = pcVar4;
  }
  SVar7.bridgeObject = HVar5.unknown;
  SVar7.str = pcVar2;
  Swift::String::hash((Hasher)auStack_68,SVar7);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x10042215c | thunk_FUN_100424624 */

void thunk_FUN_100424624(void)

{
  FUN_100424624();
  return;
}



/* Address: 0x100422160 | FUN_100422160 */

void FUN_100422160(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 *param_6,undefined1 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  FUN_100076508(param_5,param_1 + 3);
  uVar1 = *param_6;
  uVar3 = param_6[3];
  uVar2 = param_6[2];
  param_1[9] = param_6[1];
  param_1[8] = uVar1;
  param_1[0xb] = uVar3;
  param_1[10] = uVar2;
  param_1[0xc] = param_6[4];
  *(undefined1 *)(param_1 + 0xd) = param_7;
  return;
}



/* Address: 0x1004221b4 | FUN_1004221b4 */

void FUN_1004221b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 *param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  FUN_100076508(param_6,param_1 + 4);
  uVar1 = *param_7;
  uVar3 = param_7[3];
  uVar2 = param_7[2];
  param_1[10] = param_7[1];
  param_1[9] = uVar1;
  param_1[0xc] = uVar3;
  param_1[0xb] = uVar2;
  param_1[0xd] = param_7[4];
  *(undefined1 *)(param_1 + 0xe) = param_8;
  return;
}



/* Address: 0x10042220c | FUN_10042220c */

void FUN_10042220c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  Date DVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_90 + -uVar6;
  lVar9 = (long)puVar8 - uVar6;
  lVar7 = lVar9 - uVar6;
  FUN_1000f8cac(unaff_x20 + 0x40,auStack_88,&DAT_100fc5fb8,&BYTE_100c49720);
  if (local_70 == 0) {
    FUN_1000fb4c4(auStack_88,&DAT_100fc5fb8,&BYTE_100c49720);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x38))(lVar9,1,1,DVar3.unknown);
  }
  else {
    FUN_100004640(auStack_88,local_70);
    (**(code **)(local_68 + 8))(lVar9,local_70,local_68);
    FUN_100004594(auStack_88);
  }
  FUN_100424714(lVar9,puVar8);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar4 = puVar8;
  (*pcVar10)(puVar8,1,DVar3.unknown);
  if ((int)puVar4 == 1) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar5 = *(long *)(unaff_x20 + 0x38);
    FUN_100004640(unaff_x20 + 0x18,uVar1);
    (**(code **)(lVar5 + 8))(lVar7,uVar1,lVar5);
    puVar4 = puVar8;
    (*pcVar10)(puVar8,1,DVar3.unknown);
    if ((int)puVar4 != 1) {
      FUN_1000fb4c4(puVar8,&DAT_100fc5a30,&DAT_100c49370);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,DVar3.unknown);
    (**(code **)(lVar9 + 0x38))(lVar7,0,1,DVar3.unknown);
  }
  lVar5 = lVar7;
  (*pcVar10)(lVar7,1,DVar3.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar9 + 0x20))(param_1,lVar7,DVar3.unknown);
    return;
  }
  FUN_1000fb4c4(lVar7,&DAT_100fc5a30,&DAT_100c49370);
  *(undefined4 *)(lVar7 + -8) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0x30;
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000047,0x8000000100da6250,
             0xda6240);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100422488);
  (*pcVar10)();
}



/* Address: 0x100422488 | FUN_100422488 */

undefined8 FUN_100422488(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x10);
}



/* Address: 0x100422490 | thunk_FUN_10042220c */

void thunk_FUN_10042220c(void)

{
  FUN_10042220c();
  return;
}



/* Address: 0x100422494 | FUN_100422494 */

void FUN_100422494(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  Date DVar3;
  undefined1 *puVar4;
  long lVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  long local_70;
  long local_68;
  
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  uVar6 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = auStack_90 + -uVar6;
  lVar9 = (long)puVar8 - uVar6;
  lVar7 = lVar9 - uVar6;
  FUN_1000f8cac(unaff_x20 + 0x48,auStack_88,&DAT_100fc5fb8,&BYTE_100c49720);
  if (local_70 == 0) {
    FUN_1000fb4c4(auStack_88,&DAT_100fc5fb8,&BYTE_100c49720);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x38))(lVar9,1,1,DVar3.unknown);
  }
  else {
    FUN_100004640(auStack_88,local_70);
    (**(code **)(local_68 + 8))(lVar9,local_70,local_68);
    FUN_100004594(auStack_88);
  }
  FUN_100424714(lVar9,puVar8);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar4 = puVar8;
  (*pcVar10)(puVar8,1,DVar3.unknown);
  if ((int)puVar4 == 1) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    lVar5 = *(long *)(unaff_x20 + 0x40);
    FUN_100004640(unaff_x20 + 0x20,uVar1);
    (**(code **)(lVar5 + 8))(lVar7,uVar1,lVar5);
    puVar4 = puVar8;
    (*pcVar10)(puVar8,1,DVar3.unknown);
    if ((int)puVar4 != 1) {
      FUN_1000fb4c4(puVar8,&DAT_100fc5a30,&DAT_100c49370);
    }
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar7,puVar8,DVar3.unknown);
    (**(code **)(lVar9 + 0x38))(lVar7,0,1,DVar3.unknown);
  }
  lVar5 = lVar7;
  (*pcVar10)(lVar7,1,DVar3.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar9 + 0x20))(param_1,lVar7,DVar3.unknown);
    return;
  }
  FUN_1000fb4c4(lVar7,&DAT_100fc5a30,&DAT_100c49370);
  *(undefined4 *)(lVar7 + -8) = 0;
  *(undefined8 *)(lVar7 + -0x10) = 0x39;
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd000000000000047,0x8000000100da6250,
             0xda6240);
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100422710);
  (*pcVar10)();
}



/* Address: 0x100422710 | thunk_FUN_100422494 */

void thunk_FUN_100422494(void)

{
  FUN_100422494();
  return;
}



/* Address: 0x100422714 | FUN_100422714 */

void FUN_100422714(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000f8cac(unaff_x20 + 0x40,param_1,&DAT_100fc5fb8,&BYTE_100c49720);
  return;
}



/* Address: 0x100422740 | FUN_100422740 */

undefined1 FUN_100422740(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x68);
}



/* Address: 0x100422748 | FUN_100422748 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100422748(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x18);
}



/* Address: 0x100422750 | FUN_100422750 */

void FUN_100422750(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100076688(unaff_x20 + 0x20,param_1);
  return;
}



/* Address: 0x10042275c | FUN_10042275c */

void FUN_10042275c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000f8cac(unaff_x20 + 0x48,param_1,&DAT_100fc5fb8,&BYTE_100c49720);
  return;
}



/* Address: 0x100422788 | FUN_100422788 */

undefined1 FUN_100422788(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x70);
}



/* Address: 0x100422790 | FUN_100422790 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100422790(undefined8 param_1)

{
  Date DVar1;
  Date DVar2;
  ID *unaff_x20;
  
  DVar1.unknown = (undefined *)objc_stub::transactionDate(*unaff_x20);
  if (DVar1.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar1);
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004227fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))
            (param_1,DVar1.unknown == (undefined *)0x0,1,DVar2.unknown);
  return;
}



/* Address: 0x100422800 | FUN_100422800 */

void FUN_100422800(void)

{
  ID *unaff_x20;
  
  objc_stub::transactionState(*unaff_x20);
  return;
}



/* Address: 0x100422808 | FUN_100422808 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_100422808(void)

{
  ID IVar1;
  ID *unaff_x20;
  String SVar2;
  
  IVar1 = objc_stub::transactionIdentifier(*unaff_x20);
  if (IVar1 == 0) {
    SVar2 = (String)ZEXT816(0);
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x100422868 | FUN_100422868 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100422868(void)

{
  ID IVar1;
  ID *unaff_x20;
  
  IVar1 = objc_stub::downloads(*unaff_x20);
  FUN_100428cb8(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  return IVar1;
}



/* Address: 0x1004228b8 | FUN_1004228b8 */

undefined8 FUN_1004228b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_errorRetain(param_3);
  return param_3;
}



/* Address: 0x1004228e0 | FUN_1004228e0 */

bool FUN_1004228e0(double param_1,char param_2,double param_3,char param_4)

{
  if (param_2 == '\x01') {
    if (param_4 == '\x01') {
      return true;
    }
  }
  else if (param_4 != '\x01') {
    return param_1 == param_3;
  }
  return false;
}



/* Address: 0x10042292c | FUN_10042292c */

void FUN_10042292c(undefined8 param_1,Hasher param_2,char param_3)

{
  Hasher HVar1;
  Hasher HVar2;
  
  if (param_3 == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    HVar1.unknown = (undefined *)0x0;
    if (((ulong)param_2.unknown & 0x7fffffffffffffff) != 0) {
      HVar1.unknown = param_2.unknown;
    }
    Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar2);
  }
  return;
}



/* Address: 0x100422978 | FUN_100422978 */

void FUN_100422978(undefined *param_1,undefined8 param_2)

{
  uint uVar1;
  Hasher HVar2;
  Hasher HVar3;
  Hasher HVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = (uint)param_2;
  uVar1 = uVar5 & 0xff;
  Swift::Hasher::init(0);
  if (uVar1 == 1) {
    HVar4.unknown = (undefined *)0x0;
    HVar3.unknown._4_4_ = uVar6;
    HVar3.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine(0,HVar3);
  }
  else {
    HVar4.unknown._4_4_ = uVar6;
    HVar4.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine(1,HVar4);
    HVar4.unknown = (undefined *)0x0;
    if (((ulong)param_1 & 0x7fffffffffffffff) != 0) {
      HVar4.unknown = param_1;
    }
    HVar2.unknown._4_4_ = uVar6;
    HVar2.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar2);
  }
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1004229e8 | FUN_1004229e8 */

void FUN_1004229e8(void)

{
  undefined8 *unaff_x20;
  
  FUN_100422978(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x1004229f4 | FUN_1004229f4 */

void FUN_1004229f4(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  ulong uVar2;
  ulong *unaff_x20;
  
  if ((char)unaff_x20[1] == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    uVar2 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    _Var1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
  }
  return;
}



/* Address: 0x100422a44 | FUN_100422a44 */

void FUN_100422a44(__int64 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  
  puVar3 = (undefined *)*unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  if (cVar1 == '\x01') {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    HVar2.unknown = (undefined *)0x0;
    if (((ulong)puVar3 & 0x7fffffffffffffff) != 0) {
      HVar2.unknown = puVar3;
    }
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100422ab0 | FUN_100422ab0 */

bool FUN_100422ab0(double *param_1,double *param_2)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    if (*(char *)(param_2 + 1) == '\x01') {
      return true;
    }
  }
  else if (*(char *)(param_2 + 1) != '\x01') {
    return *param_1 == *param_2;
  }
  return false;
}



/* Address: 0x100422af8 | FUN_100422af8 */

undefined1  [16] FUN_100422af8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Address: 0x100422b24 | FUN_100422b24 */

void FUN_100422b24(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Address: 0x100422b58 | FUN_100422b58 */

undefined1  [16] FUN_100422b58(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Address: 0x100422b84 | FUN_100422b84 */

void FUN_100422b84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Address: 0x100422bb8 | FUN_100422bb8 */

undefined1  [16] FUN_100422bb8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x100422bc8 | FUN_100422bc8 */

void FUN_100422bc8(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100422c10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x100422c14 | FUN_100422c14 */

void FUN_100422c14(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_100424764();
  iVar1 = *(int *)(lVar2 + 0x20);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100422c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))(unaff_x20 + iVar1,param_1,DVar3.unknown);
  return;
}


