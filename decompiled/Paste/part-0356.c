/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100454de0 | FUN_100454de0 */

undefined *
FUN_100454de0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100454f78);
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
    puVar5 = &DAT_100fc7950;
    FUN_1000037f0(&DAT_100fc7950,&DAT_100c4c148);
    puVar6 = &DAT_100fc7948;
    FUN_1000037f0(&DAT_100fc7948,&DAT_100c4c140);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100454f70);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100454f74);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc7948;
  FUN_1000037f0(&DAT_100fc7948,&DAT_100c4c140);
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
  (*param_5)(param_4);
  return puVar5;
}



/* Address: 0x100454f78 | FUN_100454f78 */

void FUN_100454f78(void)

{
  FUN_100018280();
  return;
}



/* Address: 0x100454f84 | FUN_100454f84 */

undefined1 FUN_100454f84(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x40);
}



/* Address: 0x100454f8c | FUN_100454f8c */

undefined1 FUN_100454f8c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x41);
}



/* Address: 0x100454f94 | FUN_100454f94 */

undefined1  [16] FUN_100454f94(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Address: 0x100454fc4 | FUN_100454fc4 */

undefined1  [16] FUN_100454fc4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Address: 0x100454ff4 | FUN_100454ff4 */

void FUN_100454ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  FUN_1000385d4(param_2,param_1);
  *(undefined8 *)(param_1 + 0x30) = param_3;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined1 *)(param_1 + 0x40) = param_5;
  *(undefined1 *)(param_1 + 0x41) = param_6;
  *(undefined8 *)(param_1 + 0x48) = param_7;
  *(undefined8 *)(param_1 + 0x50) = param_8;
  *(undefined8 *)(param_1 + 0x58) = param_9;
  *(undefined8 *)(param_1 + 0x60) = param_10;
  return;
}



/* Address: 0x10045506c | FUN_10045506c */

undefined1  [16] FUN_10045506c(void)

{
  return ZEXT816(0x10045507c);
}



/* Address: 0x10045507c | FUN_10045507c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100455134 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10045507c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ObservedObject<undefined> OVar11;
  AnyView AVar12;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x38);
  uVar6 = *(undefined1 *)(param_2 + 0x40);
  uVar7 = *(undefined1 *)(param_2 + 0x41);
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x50);
  uVar10 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x60);
  lVar8 = 0;
  FUN_10045901c();
  lVar9 = lVar8;
  _swift_allocObject();
  FUN_100018280(param_2,lVar9 + 0x10);
  *(undefined8 *)(lVar9 + 0x40) = uVar1;
  *(undefined8 *)(lVar9 + 0x48) = uVar3;
  *(undefined1 *)(lVar9 + 0x70) = uVar6;
  *(undefined1 *)(lVar9 + 0x71) = uVar7;
  *(undefined8 *)(lVar9 + 0x50) = uVar2;
  *(undefined8 *)(lVar9 + 0x58) = uVar4;
  *(undefined8 *)(lVar9 + 0x60) = uVar10;
  *(undefined8 *)(lVar9 + 0x68) = uVar5;
  _swift_bridgeObjectRetain(uVar3);
  FUN_100011128(uVar2,uVar4);
  FUN_100011128(uVar10,uVar5);
  FUN_1004556e4();
  _swift_retain(lVar9);
  OVar11 = SwiftUI::ObservedObject::init(uVar10,lVar8,uVar10);
  FUN_100455728();
  _swift_retain(lVar8);
  AVar12 = SwiftUI::AnyView::_init(OVar11.unknown,&DAT_100ed6718,OVar11.unknown);
  _swift_release(lVar8);
  _swift_release(lVar9);
  *param_1 = AVar12.unknown;
  return;
}



/* Address: 0x1004551a0 | FUN_1004551a0 */

void FUN_1004551a0(long param_1)

{
  FUN_100004594();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  if (*(long *)(param_1 + 0x48) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x50));
  }
  if (*(long *)(param_1 + 0x58) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x60));
    return;
  }
  return;
}



/* Address: 0x1004551f0 | FUN_1004551f0 */

long FUN_1004551f0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  lVar2 = *(long *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  *(undefined2 *)(param_1 + 0x40) = *(undefined2 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(long *)(param_1 + 0x48) = lVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(long *)(param_1 + 0x48) = lVar2;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
    _swift_retain();
  }
  lVar2 = *(long *)(param_2 + 0x58);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x58);
    *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
    *(long *)(param_1 + 0x58) = lVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x60);
    *(long *)(param_1 + 0x58) = lVar2;
    *(undefined8 *)(param_1 + 0x60) = uVar1;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100455298 | FUN_100455298 */

long FUN_100455298(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_1004553a8();
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  *(undefined1 *)(param_1 + 0x41) = *(undefined1 *)(param_2 + 0x41);
  lVar1 = *(long *)(param_2 + 0x48);
  if (*(long *)(param_1 + 0x48) == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      *(long *)(param_1 + 0x48) = lVar1;
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      _swift_retain();
      goto LAB_10045533c;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x50);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      *(long *)(param_1 + 0x48) = lVar1;
      *(undefined8 *)(param_1 + 0x50) = uVar2;
      _swift_retain();
      _swift_release(uVar3);
      goto LAB_10045533c;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x50));
  }
  lVar1 = *(long *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(long *)(param_1 + 0x48) = lVar1;
LAB_10045533c:
  lVar1 = *(long *)(param_2 + 0x58);
  if (*(long *)(param_1 + 0x58) == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      *(long *)(param_1 + 0x58) = lVar1;
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x60);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x58) = lVar1;
      *(undefined8 *)(param_1 + 0x60) = uVar2;
      _swift_retain();
      _swift_release(uVar3);
      return param_1;
    }
    _swift_release(*(undefined8 *)(param_1 + 0x60));
  }
  lVar1 = *(long *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(long *)(param_1 + 0x58) = lVar1;
  return param_1;
}



/* Address: 0x1004553a8 | FUN_1004553a8 */

void FUN_1004553a8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000100455468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
        _swift_release(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Address: 0x100455510 | FUN_100455510 */

void FUN_100455510(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x10045553c | FUN_10045553c */

undefined8 * FUN_10045553c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  FUN_100004594();
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar1;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  lVar3 = param_2[9];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  *(undefined1 *)((long)param_1 + 0x41) = *(undefined1 *)((long)param_2 + 0x41);
  if (param_1[9] == 0) {
    if (lVar3 != 0) {
      uVar2 = param_2[10];
      param_1[9] = lVar3;
      param_1[10] = uVar2;
      goto LAB_1004555d4;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar1 = param_2[10];
      uVar2 = param_1[10];
      param_1[9] = lVar3;
      param_1[10] = uVar1;
      _swift_release(uVar2);
      goto LAB_1004555d4;
    }
    _swift_release(param_1[10]);
  }
  lVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = lVar3;
LAB_1004555d4:
  lVar3 = param_2[0xb];
  if (param_1[0xb] == 0) {
    if (lVar3 != 0) {
      uVar2 = param_2[0xc];
      param_1[0xb] = lVar3;
      param_1[0xc] = uVar2;
      return param_1;
    }
  }
  else {
    if (lVar3 != 0) {
      uVar1 = param_2[0xc];
      uVar2 = param_1[0xc];
      param_1[0xb] = lVar3;
      param_1[0xc] = uVar1;
      _swift_release(uVar2);
      return param_1;
    }
    _swift_release(param_1[0xc]);
  }
  lVar3 = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  param_1[0xb] = lVar3;
  return param_1;
}



/* Address: 0x100455634 | FUN_100455634 */

int FUN_100455634(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10045567c | FUN_10045567c */

void FUN_10045567c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1004556d4 | FUN_1004556d4 */

undefined1  [16] FUN_1004556d4(void)

{
  return ZEXT816(0x100ed6688);
}



/* Address: 0x1004556e4 | FUN_1004556e4 */

void FUN_1004556e4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fc7960 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10045901c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c4c3c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c3c4,uVar1);
  DAT_100fc7960 = pTVar2;
  return;
}



/* Address: 0x100455728 | FUN_100455728 */

void FUN_100455728(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7968 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c19c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c19c,&DAT_100ed6718);
  DAT_100fc7968 = pTVar1;
  return;
}



/* Address: 0x100455768 | FUN_100455768 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100455768(void)

{
  if (DAT_100fc7958 != -1) {
    _swift_once(&DAT_100fc7958,FUN_10045446c);
  }
  DAT_101057ac0 = DAT_101057ab8;
  return DAT_101057ab8;
}



/* Address: 0x10045578c | FUN_10045578c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10045578c(void)

{
  _swift_once(&DAT_100fc7958,FUN_10045446c);
  DAT_101057ac0 = DAT_101057ab8;
  return DAT_101057ab8;
}



/* Address: 0x1004557b0 | FUN_1004557b0 */

void FUN_1004557b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004557bc | FUN_1004557bc */

undefined1  [16] FUN_1004557bc(void)

{
  return ZEXT816(0x100ed6718);
}



/* Address: 0x1004557cc | FUN_1004557cc */

void FUN_1004557cc(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100cb0f40,1);
  return;
}



/* Address: 0x1004557dc | FUN_1004557dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004557dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  EdgeInsets capInsets;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ResizingMode RVar9;
  RoundedCornerStyle RVar10;
  undefined *puVar11;
  undefined7 extraout_var;
  MainActor *pMVar12;
  UnownedSerialExecutor UVar13;
  UnownedSerialExecutor UVar14;
  LocalizedStringKey LVar15;
  Button<Text> BVar16;
  Image IVar17;
  Image IVar18;
  RoundedRectangle RVar19;
  undefined7 extraout_var_00;
  Alignment AVar20;
  _FrameLayout _Var21;
  long extraout_x8;
  undefined8 *puVar22;
  long extraout_x8_00;
  undefined *puVar23;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long lVar24;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  HorizontalAlignment HVar25;
  long lVar26;
  KeyboardShortcut KVar27;
  undefined1 auVar28 [16];
  String SVar29;
  long alStack_120 [2];
  undefined *local_110;
  EdgeInsets local_108;
  long local_100;
  undefined *local_f8;
  undefined *local_f0;
  MainActor *local_e8;
  long local_e0;
  long local_d8;
  undefined8 *local_d0;
  long local_c8;
  undefined8 *local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  puVar11 = &DAT_100fc79a0;
  local_d8 = param_2;
  local_a8 = param_1;
  FUN_1000037f0(&DAT_100fc79a0,&DAT_100c4c210);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar24 = (long)alStack_120 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar22 = (undefined8 *)(lVar24 - extraout_x12);
  local_c0 = puVar22;
  RVar9 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  local_f8 = (undefined *)CONCAT71(extraout_var,RVar9.value);
  local_100 = *(long *)(local_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_100 + 0x40));
  puVar23 = (undefined *)((long)puVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fc79a8;
  local_108.unknown = puVar23;
  FUN_1000037f0(&DAT_100fc79a8,&DAT_100c4c218);
  local_f0 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar24 = (long)puVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_b8 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar22 = (undefined8 *)(lVar24 - extraout_x12_00);
  puVar11 = &DAT_100fc79b0;
  local_d0 = puVar22;
  FUN_1000037f0(&DAT_100fc79b0,&DAT_100c4c220);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar24 = (long)puVar22 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar22 = (undefined8 *)(lVar24 - extraout_x12_01);
  local_a0 = puVar22;
  local_110 = (undefined *)SwiftUI::KeyboardShortcut::typeMetadataAccessor();
  alStack_120[1] = *(long *)(local_110 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_120[1] + 0x40));
  KVar27.unknown = (undefined *)((long)puVar22 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0));
  puVar11 = &DAT_100fc79b8;
  FUN_1000037f0(&DAT_100fc79b8,&DAT_100c4c228);
  lVar26 = *(long *)(puVar11 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar26 + 0x40) + 0xfU & 0xfffffffffffffff0);
  HVar25.unknown = KVar27.unknown + -extraout_x8_04;
  puVar23 = &DAT_100fc79c0;
  FUN_1000037f0(&DAT_100fc79c0,&DAT_100c4c230);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar23 + -8) + 0x40));
  lVar24 = (long)HVar25.unknown - (extraout_x8_05 + 0xfU & 0xfffffffffffffff0);
  local_e0 = lVar24;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar24 = lVar24 - extraout_x12_02;
  pMVar12 = Swift::MainActor::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eaec10;
  pMVar12 = Swift::MainActor::get_shared(pMVar12,pMVar12);
  puVar23 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar4,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_e8 = pMVar12;
  UVar13 = Swift::Actor::get_unownedExecutor();
  UVar14 = UVar13;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar14.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x1f,UVar13.unknown,puVar23);
  }
  LVar15 = SwiftUI::LocalizedStringKey::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  _swift_retain(param_3);
  BVar16 = (extension_SwiftUI)::SwiftUI::Button::_init(LVar15);
  SwiftUI::KeyboardShortcut::get_cancelAction((KeyboardShortcut)BVar16.unknown);
  FUN_100016eac(&DAT_100fc79c8,&DAT_100fc79b8,&DAT_100c4c228,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  (extension_SwiftUI)::SwiftUI::View::_keyboardShortcut(KVar27);
  (**(code **)(alStack_120[1] + 8))(KVar27.unknown,local_110);
  (**(code **)(lVar26 + 8))(HVar25.unknown,puVar11);
  HVar25 = SwiftUI::HorizontalAlignment::get_center(HVar25);
  puVar22 = local_a0;
  *local_a0 = HVar25.unknown;
  puVar22[1] = 0x4020000000000000;
  *(undefined1 *)(puVar22 + 2) = 0;
  puVar11 = &DAT_100fc79d0;
  FUN_1000037f0(&DAT_100fc79d0,&DAT_100c4c238);
  FUN_100455f7c((long)puVar22 + (long)*(int *)(puVar11 + 0x2c));
  if (DAT_100fc7970 != -1) {
    _swift_once(&DAT_100fc7970,FUN_100455768);
  }
  SVar29.bridgeObject = (void *)0xe900000000000077;
  SVar29.str = (char *)0x656e2d7374616877;
  IVar17 = SwiftUI::Image::_init(SVar29);
  puVar11 = local_f8;
  lVar26 = local_100;
  capInsets.unknown = local_108.unknown;
  IVar18.unknown = local_f8;
  (**(code **)(local_100 + 0x68))
            (local_108.unknown,
             *(undefined4 *)
              PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
            );
  IVar18 = SwiftUI::Image::resizable(capInsets,(ResizingMode)(__int8)IVar17.unknown,IVar18);
  _swift_release(IVar17.unknown);
  (**(code **)(lVar26 + 8))(capInsets.unknown,puVar11);
  puVar11 = &DAT_100fc79d8;
  FUN_1000037f0(&DAT_100fc79d8,&DAT_100c4c240);
  puVar5 = local_d0;
  puVar1 = (undefined8 *)((long)local_d0 + (long)*(int *)(puVar11 + 0x24));
  RVar19 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
  iVar3 = *(int *)(RVar19.unknown + 0x14);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar10 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,RVar10.value) + -8) + 0x68))
            ((long)puVar1 + (long)iVar3,uVar2,CONCAT71(extraout_var_00,RVar10.value));
  auVar28 = NEON_fmov(0x4034000000000000,8);
  puVar1[1] = auVar28._8_8_;
  *puVar1 = auVar28._0_8_;
  AVar20.unknown = &DAT_100fc79e0;
  FUN_1000037f0(&DAT_100fc79e0,&DAT_100c4c248);
  *(undefined2 *)((long)puVar1 + (long)*(int *)(AVar20.unknown + 0x24)) = 0x100;
  *puVar5 = IVar18.unknown;
  SwiftUI::Alignment::get_center(AVar20);
  _Var21 = SwiftUI::_FrameLayout::_init((Alignment)0x4079000000000000);
  puVar1 = (undefined8 *)((long)puVar5 + (long)*(int *)(local_f0 + 0x24));
  puVar1[1] = uStack_90;
  *puVar1 = local_98;
  puVar1[3] = uStack_80;
  puVar1[2] = local_88;
  puVar1[5] = uStack_70;
  puVar1[4] = local_78;
  HVar25 = SwiftUI::HorizontalAlignment::get_center(_Var21.unknown);
  puVar1 = local_c0;
  *local_c0 = HVar25.unknown;
  puVar1[1] = 0x4020000000000000;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar11 = &DAT_100fc79e8;
  FUN_1000037f0(&DAT_100fc79e8,&DAT_100c4c250);
  FUN_100456608((long)puVar1 + (long)*(int *)(puVar11 + 0x2c),local_d8,param_3);
  lVar26 = local_e0;
  FUN_100011090(lVar24,local_e0,&DAT_100fc79c0,&DAT_100c4c230);
  lVar6 = local_c8;
  FUN_100011090(puVar22,local_c8,&DAT_100fc79b0,&DAT_100c4c220);
  lVar7 = local_b8;
  FUN_100011090(puVar5,local_b8,&DAT_100fc79a8,&DAT_100c4c218);
  lVar8 = local_b0;
  local_d8 = lVar24;
  FUN_100011090(puVar1,local_b0,&DAT_100fc79a0,&DAT_100c4c210);
  lVar24 = local_a8;
  FUN_100011090(lVar26,local_a8,&DAT_100fc79c0,&DAT_100c4c230);
  puVar11 = &DAT_100fc79f0;
  FUN_1000037f0(&DAT_100fc79f0,&DAT_100c4c258);
  FUN_100011090(lVar6,lVar24 + *(int *)(puVar11 + 0x30),&DAT_100fc79b0,&DAT_100c4c220);
  FUN_100011090(lVar7,lVar24 + *(int *)(puVar11 + 0x40),&DAT_100fc79a8,&DAT_100c4c218);
  FUN_100011090(lVar8,lVar24 + *(int *)(puVar11 + 0x50),&DAT_100fc79a0,&DAT_100c4c210);
  FUN_100005808(puVar1,&DAT_100fc79a0,&DAT_100c4c210);
  FUN_100005808(puVar5,&DAT_100fc79a8,&DAT_100c4c218);
  FUN_100005808(local_a0,&DAT_100fc79b0,&DAT_100c4c220);
  FUN_100005808(local_d8,&DAT_100fc79c0,&DAT_100c4c230);
  FUN_100005808(lVar8,&DAT_100fc79a0,&DAT_100c4c210);
  FUN_100005808(lVar7,&DAT_100fc79a8,&DAT_100c4c218);
  FUN_100005808(lVar6,&DAT_100fc79b0,&DAT_100c4c220);
  FUN_100005808(lVar26,&DAT_100fc79c0,&DAT_100c4c230);
  _swift_release(local_e8);
  return;
}



/* Address: 0x100455f7c | FUN_100455f7c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100456334 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100455f7c(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  code *pcVar5;
  ResizingMode RVar6;
  RoundedCornerStyle RVar7;
  LocalizedStringResource LVar8;
  undefined *puVar10;
  MainActor *pMVar11;
  UnownedSerialExecutor UVar12;
  UnownedSerialExecutor UVar13;
  NSImage *nsImage;
  Image IVar14;
  RoundedRectangle RVar15;
  Set SVar16;
  char *pcVar17;
  Text TVar18;
  Font FVar19;
  Font FVar20;
  Text TVar21;
  Text TVar22;
  Image IVar23;
  char *pcVar24;
  undefined *puVar25;
  undefined8 uVar26;
  char *pcVar27;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  ulong uVar28;
  undefined8 *puVar29;
  long lVar30;
  long lVar31;
  Alignment capInsets;
  undefined8 uVar32;
  undefined1 auVar33 [16];
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  String SVar37;
  ulong local_210;
  undefined *local_208;
  long local_200 [2];
  char *local_1f0;
  LocalizedStringResource local_1e8;
  MainActor *local_1e0;
  undefined1 auStack_1d8 [56];
  char *local_1a0;
  void *pvStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined1 local_170;
  char *local_160;
  void *pvStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 local_130;
  char *local_120;
  void *pvStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  String local_e0;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  ulong local_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *puVar9;
  
  LVar8 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar8.unknown + -8) + 0x40));
  puVar10 = (undefined *)((long)&local_210 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_1e8.unknown = puVar10;
  RVar6 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar9 = (undefined *)CONCAT71((int7)((ulong)LVar8.unknown >> 8),RVar6.value);
  lVar30 = *(long *)(puVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar30 + 0x40));
  capInsets.unknown = puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar10 = &DAT_100fc7ae8;
  FUN_1000037f0(&DAT_100fc7ae8,&DAT_100c4c2d0);
  local_1f0 = puVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar10 + -8) + 0x40));
  lVar31 = (long)capInsets.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar29 = (undefined8 *)(lVar31 - extraout_x12);
  pMVar11 = Swift::MainActor::typeMetadataAccessor();
  puVar25 = PTR_typeMetadataAccessor_100eaec10;
  pMVar11 = Swift::MainActor::get_shared(pMVar11,pMVar11);
  puVar10 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar25,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_1e0 = pMVar11;
  UVar12 = Swift::Actor::get_unownedExecutor();
  UVar13 = UVar12;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar13.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x26,UVar12.unknown,puVar10);
  }
  if (*(ID *)PTR__NSApp_100ea8fa0 != 0) {
    local_200[0] = param_1;
    local_200[1] = lVar31;
    nsImage = (NSImage *)objc_stub::applicationIconImage(*(ID *)PTR__NSApp_100ea8fa0);
    if (nsImage != (NSImage *)0x0) {
      IVar14 = SwiftUI::Image::init(nsImage);
      IVar23.unknown = puVar9;
      (**(code **)(lVar30 + 0x68))
                (capInsets.unknown,
                 *(undefined4 *)
                  PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
                );
      uVar34 = 0;
      uVar35 = 0;
      uVar36 = 0;
      local_208 = (undefined *)
                  SwiftUI::Image::resizable
                            (capInsets.unknown,(ResizingMode)(__int8)IVar14.unknown,IVar23);
      _swift_release(IVar14.unknown);
      (**(code **)(lVar30 + 8))(capInsets.unknown,puVar9);
      SwiftUI::Alignment::get_center(capInsets);
      uVar26 = 0;
      SwiftUI::_FrameLayout::_init((Alignment)0x4054000000000000);
      local_210 = local_a0;
      puVar10 = &DAT_100fc7af0;
      FUN_1000037f0(&DAT_100fc7af0,&DAT_100c4c2d8);
      puVar1 = (undefined8 *)((long)puVar29 + (long)*(int *)(puVar10 + 0x24));
      RVar15 = SwiftUI::RoundedRectangle::typeMetadataAccessor();
      iVar4 = *(int *)(RVar15.unknown + 0x14);
      uVar3 = *(undefined4 *)
               PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
      ;
      RVar7 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
      lVar30 = CONCAT71((int7)((ulong)RVar15.unknown >> 8),RVar7.value);
      (**(code **)(*(long *)(lVar30 + -8) + 0x68))((long)puVar1 + (long)iVar4,uVar3,lVar30);
      auVar33 = NEON_fmov(0x4032000000000000,8);
      puVar1[1] = auVar33._8_8_;
      *puVar1 = auVar33._0_8_;
      SVar16.unknown = &DAT_100fc79e0;
      FUN_1000037f0(&DAT_100fc79e0,&DAT_100c4c248);
      *(undefined2 *)((long)puVar1 + (long)*(int *)(SVar16.unknown + 0x24)) = 0x100;
      uVar28 = local_210;
      *puVar29 = local_208;
      puVar29[1] = uVar28;
      *(undefined1 *)(puVar29 + 2) = local_98;
      puVar29[3] = local_90;
      *(undefined1 *)(puVar29 + 4) = local_88;
      puVar29[5] = local_80;
      puVar29[6] = uStack_78;
      SVar16 = SwiftUI::Edge::Set::get_all(SVar16);
      uVar32 = 0x4020000000000000;
      SwiftUI::EdgeInsets::init((CGFloat)SVar16.unknown);
      LVar8.unknown = local_1e8.unknown;
      puVar2 = (undefined1 *)((long)puVar29 + (long)*(int *)(local_1f0 + 0x24));
      *puVar2 = (char)SVar16.unknown;
      *(undefined8 *)(puVar2 + 8) = uVar32;
      *(undefined8 *)(puVar2 + 0x10) = uVar34;
      *(undefined8 *)(puVar2 + 0x18) = uVar35;
      *(undefined8 *)(puVar2 + 0x20) = uVar36;
      puVar2[0x28] = 0;
      FUN_1001e67f8(LVar8.unknown);
      SVar37 = (extension_Foundation)::Swift::String::init(LVar8);
      local_e0 = SVar37;
      FUN_100458c64();
      pcVar17 = SVar37.str;
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar24 = pcVar17;
      TVar18 = SwiftUI::Text::_init();
      FVar20.unknown = puVar10;
      FVar19 = SwiftUI::Font::get_title(TVar18.unknown);
      SwiftUI::Font::Weight::get_bold((Weight)FVar19.unknown);
      FVar20 = SwiftUI::Font::weight(FVar19.unknown,FVar20);
      _swift_release(FVar19.unknown);
      TVar22 = TVar18;
      puVar25 = puVar10;
      pcVar27 = pcVar24;
      TVar21 = SwiftUI::Text::_font(FVar20.unknown);
      local_210 = CONCAT44(local_210._4_4_,(int)puVar25);
      local_208 = TVar22.unknown;
      local_1f0 = pcVar27;
      _swift_release(FVar20.unknown);
      FUN_100016d74(TVar18.unknown,puVar10,pcVar24);
      _swift_bridgeObjectRelease(uVar26);
      FUN_1001e5778(LVar8.unknown);
      local_e0 = (extension_Foundation)::Swift::String::init(LVar8);
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      TVar22 = SwiftUI::Text::_init
                         (TVar21.unknown,PTR___type_metadata_for_Swift_String_100eac208,pcVar17);
      FUN_100205044(&local_e0,1,TVar22.unknown,puVar10,pcVar17,pcVar27);
      FUN_100016d74(TVar22.unknown,puVar10,pcVar17);
      _swift_bridgeObjectRelease(pcVar27);
      pvStack_158 = local_e0.bridgeObject;
      local_160 = local_e0.str;
      uStack_148 = uStack_c8;
      local_150 = uStack_d0;
      uStack_138 = uStack_b8;
      uStack_140 = local_c0;
      local_130 = local_b0;
      pvStack_118 = local_e0.bridgeObject;
      local_120 = local_e0.str;
      uStack_108 = uStack_c8;
      uStack_110 = uStack_d0;
      uStack_f8 = uStack_b8;
      local_100 = local_c0;
      local_f0 = local_b0;
      FUN_100011090(&local_160,&local_1a0,&DAT_100fc7af8,&DAT_100c4c2e0);
      FUN_100005808(&local_120,&DAT_100fc7af8,&DAT_100c4c2e0);
      lVar31 = local_200[1];
      FUN_100011090(puVar29,local_200[1],&DAT_100fc7ae8,&DAT_100c4c2d0);
      lVar30 = local_200[0];
      pvStack_198 = pvStack_158;
      local_1a0 = local_160;
      uStack_188 = uStack_148;
      uStack_190 = local_150;
      uStack_178 = uStack_138;
      local_180 = uStack_140;
      local_170 = local_130;
      FUN_100011090(lVar31,local_200[0],&DAT_100fc7ae8,&DAT_100c4c2d0);
      puVar10 = &DAT_100fc7b00;
      FUN_1000037f0(&DAT_100fc7b00,&DAT_100c4c2e8);
      pcVar24 = local_1f0;
      puVar25 = local_208;
      puVar1 = (undefined8 *)(lVar30 + *(int *)(puVar10 + 0x30));
      *puVar1 = TVar21.unknown;
      puVar1[1] = local_208;
      uVar28 = local_210 & 0xffffffff;
      *(char *)(puVar1 + 2) = (char)local_210;
      puVar1[3] = local_1f0;
      puVar1 = (undefined8 *)(lVar30 + *(int *)(puVar10 + 0x40));
      local_b0 = local_170;
      local_e0.bridgeObject = pvStack_198;
      local_e0.str = local_1a0;
      uStack_c8 = uStack_188;
      uStack_d0 = uStack_190;
      uStack_b8 = uStack_178;
      local_c0 = local_180;
      puVar1[1] = pvStack_198;
      *puVar1 = local_1a0;
      puVar1[3] = uStack_188;
      puVar1[2] = uStack_190;
      puVar1[5] = uStack_178;
      puVar1[4] = local_180;
      *(undefined1 *)(puVar1 + 6) = local_170;
      FUN_100016d5c(TVar21.unknown,local_208,uVar28);
      _swift_bridgeObjectRetain(pcVar24);
      FUN_100011090(&local_e0,auStack_1d8,&DAT_100fc7af8,&DAT_100c4c2e0);
      FUN_100005808(puVar29,&DAT_100fc7ae8,&DAT_100c4c2d0);
      FUN_100005808(&local_1a0,&DAT_100fc7af8,&DAT_100c4c2e0);
      FUN_100016d74(TVar21.unknown,puVar25,uVar28);
      _swift_bridgeObjectRelease(pcVar24);
      FUN_100005808(lVar31,&DAT_100fc7ae8,&DAT_100c4c2d0);
      _swift_release(local_1e0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100456550);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10045654c);
  (*pcVar5)();
}



/* Address: 0x100456550 | FUN_100456550 */

void FUN_100456550(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x4a,UVar4.unknown,puVar3);
  }
  if (*(code **)(param_2 + 0x50) != (code *)0x0) {
    (**(code **)(param_2 + 0x50))();
  }
  _swift_release(pMVar2);
  return;
}



/* Address: 0x100456608 | FUN_100456608 */

void FUN_100456608(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  LocalizedStringResource LVar4;
  PlainButtonStyle PVar5;
  undefined *puVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar15;
  String SVar16;
  undefined1 auStack_140 [8];
  undefined *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined1 *local_f0;
  long local_e8;
  undefined8 local_e0;
  code *local_d8;
  code *local_d0;
  MainActor *local_c8;
  undefined *local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  long local_98;
  String local_80;
  
  puVar3 = &DAT_100fc79f8;
  local_e0 = param_2;
  local_a0 = param_1;
  FUN_1000037f0(&DAT_100fc79f8,&DAT_100c4c260);
  local_100 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc7a00;
  local_f0 = auStack_140 + -extraout_x8;
  FUN_1000037f0(&DAT_100fc7a00,&DAT_100c4c268);
  local_f8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)(auStack_140 + -extraout_x8) - extraout_x8_00;
  local_108 = lVar13;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)(lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  puVar3 = &DAT_100fc7a08;
  FUN_1000037f0(&DAT_100fc7a08,&DAT_100c4c270);
  local_a8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc7a10;
  local_e8 = (long)LVar4.unknown - extraout_x8_02;
  FUN_1000037f0(&DAT_100fc7a10,&DAT_100c4c278);
  local_b8 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = ((long)LVar4.unknown - extraout_x8_02) - extraout_x8_03;
  local_b0 = lVar13;
  PVar5 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  local_d0 = *(code **)(PVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  lVar13 = lVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fc7a18;
  FUN_1000037f0(&DAT_100fc7a18,&DAT_100c4c280);
  local_d8 = *(code **)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar13 - extraout_x8_05;
  puVar6 = &DAT_100fc7a20;
  FUN_1000037f0(&DAT_100fc7a20,&DAT_100c4c288);
  local_c0 = puVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar6 + -8) + 0x40));
  lVar14 = lVar15 - (extraout_x8_06 + 0xfU & 0xfffffffffffffff0);
  local_118 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_110 = lVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_98 = (lVar14 - extraout_x12_00) - extraout_x12_01;
  pMVar7 = Swift::MainActor::typeMetadataAccessor();
  puVar10 = PTR_typeMetadataAccessor_100eaec10;
  pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
  puVar6 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar10,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_c8 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x4e,UVar8.unknown,puVar6);
  }
  if (*(char *)(param_3 + 0x71) == '\x01') {
    _swift_retain(param_3);
    FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
    FUN_100458794();
    SwiftUI::Button::_init();
    SwiftUI::PlainButtonStyle::init();
    puVar6 = &DAT_100fc7a98;
    FUN_100016eac(&DAT_100fc7a98,&DAT_100fc7a18,&DAT_100c4c280,
                  PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
    puVar10 = &DAT_100fc7aa0;
    FUN_100003a00(&DAT_100fc7aa0,PTR_typeMetadataAccessor_100eaa9d0,
                  PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
    lVar14 = local_98;
    (extension_SwiftUI)::SwiftUI::View::_buttonStyle
              (local_98,lVar13,puVar3,PVar5.unknown,puVar6,puVar10);
    (**(code **)(local_d0 + 8))(lVar13,PVar5.unknown);
    (**(code **)(local_d8 + 8))(lVar15,puVar3);
    lVar13 = local_b0;
    puVar3 = &DAT_100fc7a20;
    puVar6 = &DAT_100c4c288;
    FUN_100011090(lVar14,local_b0,&DAT_100fc7a20,&DAT_100c4c288);
    _swift_storeEnumTagMultiPayload(lVar13,local_b8,0);
    FUN_100458a24();
    FUN_100458b70();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar13);
  }
  else {
    if (*(char *)(param_3 + 0x70) == '\x01') {
      FUN_1001e5478(LVar4.unknown);
      SVar16 = (extension_Foundation)::Swift::String::init(LVar4);
      puVar6 = &DAT_100ed6790;
      _swift_allocObject(&DAT_100ed6790,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = local_e0;
      *(long *)(puVar6 + 0x18) = param_3;
      local_80 = SVar16;
      _swift_retain(param_3);
      _swift_retain(puVar6);
      puVar10 = &DAT_100fc7a28;
      FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
      local_120 = puVar10;
      FUN_100458794();
      local_128 = puVar10;
      SwiftUI::Button::_init();
      SwiftUI::PlainButtonStyle::init();
      puVar10 = &DAT_100fc7a98;
      FUN_100016eac(&DAT_100fc7a98,&DAT_100fc7a18,&DAT_100c4c280,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
      puVar11 = &DAT_100fc7aa0;
      local_130 = puVar10;
      FUN_100003a00(&DAT_100fc7aa0,PTR_typeMetadataAccessor_100eaa9d0,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0)
      ;
      local_138 = puVar11;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (local_98,lVar13,puVar3,PVar5.unknown,puVar10,puVar11);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      local_d0 = *(code **)(local_d0 + 8);
      (*local_d0)(lVar13,PVar5.unknown);
      local_d8 = *(code **)(local_d8 + 8);
      (*local_d8)(lVar15,puVar3);
      FUN_1001c0a88(LVar4.unknown);
      SVar16 = (extension_Foundation)::Swift::String::init(LVar4);
      puVar6 = &DAT_100ed67b8;
      _swift_allocObject(&DAT_100ed67b8,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = local_e0;
      *(long *)(puVar6 + 0x18) = param_3;
      local_80 = SVar16;
      _swift_retain(param_3);
      _swift_retain(puVar6);
      SwiftUI::Button::_init();
      SwiftUI::PlainButtonStyle::init();
      lVar1 = local_110;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (local_110,lVar13,puVar3,PVar5.unknown,local_130,local_138);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      (*local_d0)(lVar13,PVar5.unknown);
      (*local_d8)(lVar15,puVar3);
      lVar15 = local_98;
      FUN_100011090(local_98,lVar14,&DAT_100fc7a20,&DAT_100c4c288);
      lVar13 = local_118;
      FUN_100011090(lVar1,local_118,&DAT_100fc7a20,&DAT_100c4c288);
      lVar12 = local_108;
      FUN_100011090(lVar14,local_108,&DAT_100fc7a20,&DAT_100c4c288);
      puVar3 = &DAT_100fc7ac8;
      FUN_1000037f0(&DAT_100fc7ac8,&DAT_100c4c2c8);
      FUN_100011090(lVar13,lVar12 + *(int *)(puVar3 + 0x30),&DAT_100fc7a20,&DAT_100c4c288);
      FUN_100005808(lVar13,&DAT_100fc7a20,&DAT_100c4c288);
      FUN_100005808(lVar14,&DAT_100fc7a20,&DAT_100c4c288);
      puVar2 = local_f0;
      puVar3 = &DAT_100fc7a00;
      puVar6 = &DAT_100c4c268;
      FUN_100011090(lVar12,local_f0,&DAT_100fc7a00,&DAT_100c4c268);
      _swift_storeEnumTagMultiPayload(puVar2,local_100,0);
      FUN_100016eac(&DAT_100fc7aa8,&DAT_100fc7a00,&DAT_100c4c268,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_100458a24();
      lVar14 = local_e8;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar2);
      FUN_100005808(lVar1,&DAT_100fc7a20,&DAT_100c4c288);
      FUN_100005808(lVar15,&DAT_100fc7a20,&DAT_100c4c288);
    }
    else {
      FUN_1001c0a88(LVar4.unknown);
      SVar16 = (extension_Foundation)::Swift::String::init(LVar4);
      puVar6 = &DAT_100ed6768;
      _swift_allocObject(&DAT_100ed6768,0x20,7);
      *(undefined8 *)(puVar6 + 0x10) = local_e0;
      *(long *)(puVar6 + 0x18) = param_3;
      local_80 = SVar16;
      _swift_retain(param_3);
      _swift_retain(puVar6);
      FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
      FUN_100458794();
      SwiftUI::Button::_init();
      SwiftUI::PlainButtonStyle::init();
      puVar10 = &DAT_100fc7a98;
      FUN_100016eac(&DAT_100fc7a98,&DAT_100fc7a18,&DAT_100c4c280,
                    PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
      puVar11 = &DAT_100fc7aa0;
      FUN_100003a00(&DAT_100fc7aa0,PTR_typeMetadataAccessor_100eaa9d0,
                    PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0)
      ;
      lVar12 = local_98;
      (extension_SwiftUI)::SwiftUI::View::_buttonStyle
                (local_98,lVar13,puVar3,PVar5.unknown,puVar10,puVar11);
      _swift_release(puVar6);
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      (**(code **)(local_d0 + 8))(lVar13,PVar5.unknown);
      (**(code **)(local_d8 + 8))(lVar15,puVar3);
      puVar2 = local_f0;
      puVar3 = &DAT_100fc7a20;
      puVar6 = &DAT_100c4c288;
      FUN_100011090(lVar12,local_f0,&DAT_100fc7a20,&DAT_100c4c288);
      _swift_storeEnumTagMultiPayload(puVar2,local_100,1);
      FUN_100016eac(&DAT_100fc7aa8,&DAT_100fc7a00,&DAT_100c4c268,
                    PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
      FUN_100458a24();
      lVar14 = local_e8;
      (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)puVar2);
    }
    FUN_100005808(lVar12,puVar3,puVar6);
    lVar13 = local_b0;
    puVar3 = &DAT_100fc7a08;
    puVar6 = &DAT_100c4c270;
    FUN_100011090(lVar14,local_b0,&DAT_100fc7a08,&DAT_100c4c270);
    _swift_storeEnumTagMultiPayload(lVar13,local_b8,1);
    FUN_100458a24();
    FUN_100458b70();
    (extension_SwiftUI)::SwiftUI::_ConditionalContent::_init((Storage)(__int8)lVar13);
  }
  FUN_100005808(lVar14,puVar3,puVar6);
  _swift_release(local_c8);
  return;
}



/* Address: 0x10045706c | FUN_10045706c */

void FUN_10045706c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  lVar3 = param_2 + 0x10;
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  if (*(code **)(param_2 + 0x60) != (code *)0x0) {
    (**(code **)(param_2 + 0x60))();
  }
  return;
}



/* Address: 0x1004570c4 | FUN_1004570c4 */

void FUN_1004570c4(long param_1)

{
  undefined8 uVar1;
  URL UVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = *(long *)(param_1 + 0x38);
  FUN_100004640(param_1 + 0x10,uVar4);
  FUN_1001ab7c8(puVar3,*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  (**(code **)(lVar5 + 8))(puVar3,uVar4,lVar5);
  (**(code **)(lVar6 + 8))(puVar3,UVar2.unknown);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  param_1 = param_1 + 0x10;
  FUN_100004640(param_1,uVar4);
  FUN_1001ad344(uVar4,uVar1,param_1);
  return;
}



/* Address: 0x1004571a0 | FUN_1004571a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004572b0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004571a0(undefined8 *param_1,Text param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 *puVar3;
  RoundedCornerStyle RVar4;
  LocalizedStringResource LVar5;
  MainActor *pMVar6;
  undefined *puVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  Text TVar11;
  Text TVar12;
  Color CVar13;
  Text TVar14;
  Set SVar15;
  EdgeInsets EVar16;
  Set _all;
  Alignment AVar17;
  undefined8 uVar19;
  Text TVar20;
  undefined8 uVar21;
  Color in_x3;
  undefined *puVar22;
  long extraout_x8;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  String SVar27;
  undefined8 uStack_860;
  undefined1 auStack_858 [8];
  undefined8 uStack_850;
  undefined1 auStack_848 [8];
  undefined8 auStack_840 [2];
  undefined8 *local_830;
  MainActor *local_828;
  undefined1 auStack_820 [256];
  char *local_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined1 uStack_6b0;
  undefined7 uStack_6af;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  char *local_630;
  undefined *puStack_628;
  undefined1 local_620;
  undefined7 uStack_61f;
  undefined *local_618;
  undefined1 local_610;
  undefined7 uStack_60f;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined1 local_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined *local_5e0;
  undefined *local_5d8;
  undefined1 local_5d0;
  undefined *local_5c8;
  undefined1 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  char *local_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined7 uStack_53f;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 local_520;
  undefined7 uStack_51f;
  undefined1 local_518;
  char *local_510;
  undefined *puStack_508;
  undefined8 local_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498;
  char *local_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  char *local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined *puStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  char *local_2b0;
  undefined *puStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 local_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  String local_1b0;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined1 local_b8;
  long lVar18;
  
  local_830 = param_1;
  LVar5 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar5.unknown + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  puVar22 = PTR_typeMetadataAccessor_100eaec10;
  pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  puVar7 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar22,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  local_828 = pMVar6;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    in_x3.unknown = &DAT_00000069;
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x69,UVar8.unknown,puVar7);
  }
  FUN_1001e55f8((undefined *)((long)&local_830 + lVar1));
  SVar27 = (extension_Foundation)::Swift::String::init((undefined *)((long)&local_830 + lVar1));
  local_1b0 = SVar27;
  FUN_100458c64();
  pcVar10 = SVar27.str;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar11 = SwiftUI::Text::_init(pcVar10,PTR___type_metadata_for_Swift_String_100eac208,pcVar10);
  SwiftUI::Font::Weight::get_medium((Weight)TVar11.unknown);
  uVar19 = 0;
  TVar20 = TVar11;
  SVar15.unknown = puVar7;
  TVar12 = SwiftUI::Text::_fontWeight(param_2);
  FUN_100016d74(TVar11.unknown,puVar7,pcVar10);
  _swift_bridgeObjectRelease();
  CVar13 = SwiftUI::Color::get_white(in_x3);
  local_1b0.str = CVar13.unknown;
  FUN_100458ca4();
  TVar11 = TVar12;
  uVar21 = uVar19;
  puVar22 = TVar20.unknown;
  TVar14 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar12.unknown,uVar19,TVar20.unknown);
  _swift_release(CVar13.unknown);
  _swift_bridgeObjectRelease();
  SVar15 = SwiftUI::Edge::Set::get_horizontal(SVar15);
  uVar23 = 0x4030000000000000;
  EVar16 = SwiftUI::EdgeInsets::init(SVar15.unknown);
  uVar19 = param_3;
  uVar25 = param_4;
  uVar26 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar16.unknown);
  local_5f8 = (undefined1)param_4;
  uStack_5f7 = (undefined7)((ulong)param_4 >> 8);
  uStack_5f0 = (undefined1)param_5;
  uStack_5ef = (undefined7)((ulong)param_5 >> 8);
  uStack_5e8 = 0;
  uVar24 = 0x4024000000000000;
  local_630 = (char *)TVar14;
  puStack_628 = TVar11.unknown;
  local_620 = (char)uVar21;
  local_618 = puVar22;
  local_610 = (char)SVar15.unknown;
  uStack_608 = uVar23;
  local_600 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_290 = CONCAT71(uStack_60f,local_610);
  uStack_288 = uStack_608;
  uStack_278 = local_5f8;
  local_280 = local_600;
  uStack_26f = uStack_5ef;
  uStack_268 = uStack_5e8;
  uStack_277 = uStack_5f7;
  local_270 = uStack_5f0;
  local_2a0 = CONCAT71(uStack_61f,local_620);
  puStack_298 = local_618;
  puStack_2a8 = puStack_628;
  local_2b0 = local_630;
  local_598 = 0;
  puVar7 = &DAT_100fc7a70;
  local_5e0 = TVar14.unknown;
  local_5d8 = TVar11.unknown;
  local_5d0 = (char)uVar21;
  local_5c8 = puVar22;
  local_5c0 = (char)SVar15.unknown;
  local_5b8 = uVar23;
  local_5b0 = param_3;
  local_5a8 = param_4;
  local_5a0 = param_5;
  FUN_100011090(&local_630,&local_1b0,&DAT_100fc7a70,&DAT_100c4c2b0);
  AVar17.unknown = (undefined *)&local_5e0;
  FUN_100005808(AVar17.unknown,&DAT_100fc7a70,&DAT_100c4c2b0);
  AVar17 = SwiftUI::Alignment::get_center(AVar17);
  uStack_558 = CONCAT71(uStack_277,uStack_278);
  uStack_568 = uStack_288;
  local_570 = local_290;
  uStack_560 = local_280;
  uStack_548 = CONCAT71(uStack_267,uStack_268);
  local_550 = CONCAT71(uStack_26f,local_270);
  puStack_588 = puStack_2a8;
  local_590 = local_2b0;
  puStack_578 = puStack_298;
  uStack_580 = local_2a0;
  uStack_528 = (undefined1)uVar25;
  uStack_527 = (undefined7)((ulong)uVar25 >> 8);
  local_520 = (undefined1)uVar26;
  uStack_51f = (undefined7)((ulong)uVar26 >> 8);
  local_518 = 0;
  local_540 = (char)_all.unknown;
  local_538 = uVar24;
  local_530 = uVar19;
  *(undefined **)((long)auStack_840 + lVar1) = AVar17.unknown;
  *(undefined **)((long)auStack_840 + lVar1 + 8) = puVar7;
  auStack_848[lVar1] = 1;
  *(undefined8 *)((long)&uStack_850 + lVar1) = 0;
  auStack_858[lVar1] = 1;
  *(undefined8 *)((long)&uStack_860 + lVar1) = 0;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4069000000000000);
  uStack_6d0 = CONCAT71(uStack_53f,local_540);
  uStack_6d8 = uStack_548;
  local_6e0 = local_550;
  uStack_6c8 = local_538;
  uStack_6b8 = uStack_528;
  local_6c0 = local_530;
  uStack_6af = uStack_51f;
  uStack_6a8 = local_518;
  uStack_6b7 = uStack_527;
  uStack_6b0 = local_520;
  puStack_718 = puStack_588;
  local_720 = local_590;
  puStack_708 = puStack_578;
  uStack_710 = uStack_580;
  uStack_6f8 = uStack_568;
  local_700 = local_570;
  uStack_6e8 = uStack_558;
  uStack_6f0 = uStack_560;
  uStack_4c8 = CONCAT71(uStack_267,uStack_268);
  uStack_4d0 = CONCAT71(uStack_26f,local_270);
  uStack_4d8 = CONCAT71(uStack_277,uStack_278);
  local_4e0 = local_280;
  puStack_4f8 = puStack_298;
  local_500 = local_2a0;
  uStack_4e8 = uStack_288;
  uStack_4f0 = local_290;
  puStack_508 = puStack_2a8;
  local_510 = local_2b0;
  local_498 = 0;
  local_4c0 = (char)_all.unknown;
  local_4b8 = uVar24;
  local_4b0 = uVar19;
  local_4a8 = uVar25;
  local_4a0 = uVar26;
  FUN_100011090(&local_590,&local_1b0,&DAT_100fc7a60,&DAT_100c4c2a8);
  CVar13.unknown = (undefined *)&local_510;
  FUN_100005808(CVar13.unknown,&DAT_100fc7a60,&DAT_100c4c2a8);
  CVar13 = SwiftUI::Color::get_accentColor(CVar13);
  SVar15 = SwiftUI::Edge::Set::get_all(CVar13.unknown);
  uStack_3c8 = uStack_658;
  local_3d0 = local_660;
  uStack_3b8 = uStack_648;
  local_3c0 = uStack_650;
  uStack_3a8 = uStack_638;
  local_3b0 = local_640;
  uStack_408 = uStack_698;
  local_410 = local_6a0;
  uStack_3f8 = uStack_688;
  local_400 = uStack_690;
  uStack_3d8 = uStack_668;
  local_3e0 = uStack_670;
  uStack_3e8 = uStack_678;
  local_3f0 = local_680;
  uStack_448 = uStack_6d8;
  local_450 = local_6e0;
  uStack_438 = uStack_6c8;
  uStack_440 = uStack_6d0;
  uStack_428 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_418 = CONCAT71(uStack_6a7,uStack_6a8);
  local_420 = CONCAT71(uStack_6af,uStack_6b0);
  uStack_338 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_328 = CONCAT71(uStack_6a7,uStack_6a8);
  local_330 = CONCAT71(uStack_6af,uStack_6b0);
  local_430 = local_6c0;
  puStack_488 = puStack_718;
  local_490 = local_720;
  puStack_478 = puStack_708;
  uStack_480 = uStack_710;
  uStack_468 = uStack_6f8;
  local_470 = local_700;
  uStack_458 = uStack_6e8;
  uStack_460 = uStack_6f0;
  uStack_2d8 = uStack_658;
  local_2e0 = local_660;
  uStack_2c8 = uStack_648;
  local_2d0 = uStack_650;
  uStack_2b8 = uStack_638;
  local_2c0 = local_640;
  uStack_318 = uStack_698;
  local_320 = local_6a0;
  uStack_308 = uStack_688;
  local_310 = uStack_690;
  uStack_2e8 = uStack_668;
  local_2f0 = uStack_670;
  uStack_2f8 = uStack_678;
  local_300 = local_680;
  uStack_358 = uStack_6d8;
  local_360 = local_6e0;
  uStack_348 = uStack_6c8;
  local_350 = uStack_6d0;
  local_340 = local_6c0;
  puStack_398 = puStack_718;
  local_3a0 = local_720;
  puStack_388 = puStack_708;
  local_390 = uStack_710;
  uStack_368 = uStack_6e8;
  local_370 = uStack_6f0;
  uStack_378 = uStack_6f8;
  local_380 = local_700;
  FUN_100011090(&local_490,&local_1b0,&DAT_100fc7a50,&DAT_100c4c2a0);
  FUN_100005808(&local_3a0,&DAT_100fc7a50,&DAT_100c4c2a0);
  puVar7 = &DAT_100fc7a28;
  FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
  puVar3 = local_830;
  lVar1 = (long)local_830 + (long)*(int *)(puVar7 + 0x24);
  uVar2 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar18 = CONCAT71((int7)((ulong)puVar7 >> 8),RVar4.value);
  (**(code **)(*(long *)(lVar18 + -8) + 0x68))(lVar1,uVar2,lVar18);
  uStack_1e8 = uStack_658;
  local_1f0 = local_660;
  uStack_1d8 = uStack_648;
  local_1e0 = uStack_650;
  uStack_1c8 = (undefined1)uStack_638;
  uStack_1c7 = (undefined7)((ulong)uStack_638 >> 8);
  local_1d0 = local_640;
  uStack_228 = uStack_698;
  local_230 = local_6a0;
  uStack_218 = uStack_688;
  local_220 = uStack_690;
  uStack_1f8 = uStack_668;
  local_200 = uStack_670;
  uStack_208 = uStack_678;
  local_210 = local_680;
  uStack_268 = (undefined1)uStack_6d8;
  uStack_267 = (undefined7)((ulong)uStack_6d8 >> 8);
  local_270 = (undefined1)local_6e0;
  uStack_26f = (undefined7)((ulong)local_6e0 >> 8);
  uStack_258 = uStack_6c8;
  local_260 = uStack_6d0;
  uStack_248 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_238 = CONCAT71(uStack_6a7,uStack_6a8);
  local_240 = CONCAT71(uStack_6af,uStack_6b0);
  local_250 = local_6c0;
  puStack_2a8 = puStack_718;
  local_2b0 = local_720;
  puStack_298 = puStack_708;
  local_2a0 = uStack_710;
  uStack_278 = (undefined1)uStack_6e8;
  uStack_277 = (undefined7)((ulong)uStack_6e8 >> 8);
  local_280 = uStack_6f0;
  uStack_288 = uStack_6f8;
  local_290 = local_700;
  local_1c0 = SUB81(CVar13.unknown,0);
  uStack_1bf = (undefined7)((ulong)CVar13.unknown >> 8);
  puVar7 = &DAT_100fc7a90;
  local_1b8 = (char)SVar15.unknown;
  FUN_1000037f0(&DAT_100fc7a90,&DAT_100c4c2c0);
  *(undefined2 *)(lVar1 + *(int *)(puVar7 + 0x24)) = 0x100;
  puVar3[0x19] = uStack_1e8;
  puVar3[0x18] = local_1f0;
  puVar3[0x1b] = uStack_1d8;
  puVar3[0x1a] = local_1e0;
  puVar3[0x1d] = CONCAT71(uStack_1c7,uStack_1c8);
  puVar3[0x1c] = local_1d0;
  *(ulong *)((long)puVar3 + 0xf1) = CONCAT17(local_1b8,uStack_1bf);
  *(ulong *)((long)puVar3 + 0xe9) = CONCAT17(local_1c0,uStack_1c7);
  puVar3[0x11] = uStack_228;
  puVar3[0x10] = local_230;
  puVar3[0x13] = uStack_218;
  puVar3[0x12] = local_220;
  puVar3[0x15] = uStack_208;
  puVar3[0x14] = local_210;
  puVar3[0x17] = uStack_1f8;
  puVar3[0x16] = local_200;
  puVar3[9] = CONCAT71(uStack_267,uStack_268);
  puVar3[8] = CONCAT71(uStack_26f,local_270);
  puVar3[0xb] = uStack_258;
  puVar3[10] = local_260;
  puVar3[0xd] = uStack_248;
  puVar3[0xc] = local_250;
  puVar3[0xf] = uStack_238;
  puVar3[0xe] = local_240;
  puVar3[1] = puStack_2a8;
  *puVar3 = local_2b0;
  puVar3[3] = puStack_298;
  puVar3[2] = local_2a0;
  puVar3[5] = uStack_288;
  puVar3[4] = local_290;
  puVar3[7] = CONCAT71(uStack_277,uStack_278);
  puVar3[6] = local_280;
  uStack_e8 = uStack_658;
  local_f0 = local_660;
  uStack_d8 = uStack_648;
  local_e0 = uStack_650;
  uStack_c8 = uStack_638;
  local_d0 = local_640;
  uStack_128 = uStack_698;
  local_130 = local_6a0;
  uStack_118 = uStack_688;
  local_120 = uStack_690;
  uStack_f8 = uStack_668;
  local_100 = uStack_670;
  uStack_108 = uStack_678;
  local_110 = local_680;
  uStack_168 = uStack_6d8;
  local_170 = local_6e0;
  uStack_158 = uStack_6c8;
  local_160 = uStack_6d0;
  uStack_148 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_138 = CONCAT71(uStack_6a7,uStack_6a8);
  local_140 = CONCAT71(uStack_6af,uStack_6b0);
  local_150 = local_6c0;
  local_1b0.bridgeObject = puStack_718;
  local_1b0.str = local_720;
  puStack_198 = puStack_708;
  local_1a0 = uStack_710;
  uStack_178 = uStack_6e8;
  local_180 = uStack_6f0;
  uStack_188 = uStack_6f8;
  local_190 = local_700;
  local_c0 = CVar13.unknown;
  local_b8 = (char)SVar15.unknown;
  FUN_100011090(&local_2b0,auStack_820,&DAT_100fc7a40,&DAT_100c4c298);
  FUN_100005808(&local_1b0,&DAT_100fc7a40,&DAT_100c4c298);
  _swift_release(local_828);
  return;
}



/* Address: 0x100457874 | FUN_100457874 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100457950 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100457874(undefined8 *param_1,Text param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  Color param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  RoundedCornerStyle RVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  Text TVar9;
  Text TVar10;
  Color CVar11;
  Text TVar12;
  Set SVar13;
  EdgeInsets EVar14;
  Set _all;
  Alignment AVar15;
  undefined8 uVar17;
  Text TVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 auStack_820 [256];
  undefined *local_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined1 uStack_6b0;
  undefined7 uStack_6af;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined *local_630;
  undefined *puStack_628;
  undefined1 local_620;
  undefined7 uStack_61f;
  undefined *local_618;
  undefined1 local_610;
  undefined7 uStack_60f;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined1 local_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined *local_5e0;
  undefined *local_5d8;
  undefined1 local_5d0;
  undefined *local_5c8;
  undefined1 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined *local_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined7 uStack_53f;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 local_520;
  undefined7 uStack_51f;
  undefined1 local_518;
  undefined *local_510;
  undefined *puStack_508;
  undefined8 local_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498;
  undefined *local_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined *puStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 local_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined1 local_b8;
  long lVar16;
  
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteWhatsNew/WhatsNewView.swift";
    param_9.unknown = (undefined *)0x7e;
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x7e,UVar7.unknown,puVar6);
  }
  local_1b0 = param_6;
  puStack_1a8 = (undefined *)param_7;
  FUN_100458c64();
  _swift_bridgeObjectRetain(param_7);
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar9 = SwiftUI::Text::_init(pcVar8,PTR___type_metadata_for_Swift_String_100eac208,pcVar8);
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  uVar17 = 0;
  TVar18 = TVar9;
  SVar13.unknown = puVar6;
  TVar10 = SwiftUI::Text::_fontWeight(param_2);
  FUN_100016d74(TVar9.unknown,puVar6,pcVar8);
  _swift_bridgeObjectRelease();
  CVar11 = SwiftUI::Color::get_white(param_9);
  local_1b0 = CVar11.unknown;
  FUN_100458ca4();
  TVar9 = TVar10;
  uVar19 = uVar17;
  puVar6 = TVar18.unknown;
  TVar12 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar10.unknown,uVar17,TVar18.unknown);
  _swift_release(CVar11.unknown);
  _swift_bridgeObjectRelease();
  SVar13 = SwiftUI::Edge::Set::get_horizontal(SVar13);
  uVar20 = 0x4030000000000000;
  EVar14 = SwiftUI::EdgeInsets::init(SVar13.unknown);
  uVar17 = param_3;
  uVar22 = param_4;
  uVar23 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar14.unknown);
  local_5f8 = (undefined1)param_4;
  uStack_5f7 = (undefined7)((ulong)param_4 >> 8);
  uStack_5f0 = (undefined1)param_5;
  uStack_5ef = (undefined7)((ulong)param_5 >> 8);
  uStack_5e8 = 0;
  uVar21 = 0x4024000000000000;
  local_630 = TVar12.unknown;
  puStack_628 = TVar9.unknown;
  local_620 = (char)uVar19;
  local_618 = puVar6;
  local_610 = (char)SVar13.unknown;
  uStack_608 = uVar20;
  local_600 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_290 = CONCAT71(uStack_60f,local_610);
  uStack_288 = uStack_608;
  uStack_278 = local_5f8;
  local_280 = local_600;
  uStack_26f = uStack_5ef;
  uStack_268 = uStack_5e8;
  uStack_277 = uStack_5f7;
  local_270 = uStack_5f0;
  local_2a0 = CONCAT71(uStack_61f,local_620);
  puStack_298 = local_618;
  puStack_2a8 = puStack_628;
  local_2b0 = local_630;
  local_598 = 0;
  local_5e0 = TVar12.unknown;
  local_5d8 = TVar9.unknown;
  local_5d0 = (char)uVar19;
  local_5c8 = puVar6;
  local_5c0 = (char)SVar13.unknown;
  local_5b8 = uVar20;
  local_5b0 = param_3;
  local_5a8 = param_4;
  local_5a0 = param_5;
  FUN_100011090(&local_630,&local_1b0,&DAT_100fc7a70,&DAT_100c4c2b0);
  AVar15.unknown = (undefined *)&local_5e0;
  FUN_100005808(AVar15.unknown,&DAT_100fc7a70,&DAT_100c4c2b0);
  SwiftUI::Alignment::get_center(AVar15);
  uStack_558 = CONCAT71(uStack_277,uStack_278);
  uStack_568 = uStack_288;
  local_570 = local_290;
  uStack_560 = local_280;
  uStack_548 = CONCAT71(uStack_267,uStack_268);
  local_550 = CONCAT71(uStack_26f,local_270);
  puStack_588 = puStack_2a8;
  local_590 = local_2b0;
  puStack_578 = puStack_298;
  uStack_580 = local_2a0;
  uStack_528 = (undefined1)uVar22;
  uStack_527 = (undefined7)((ulong)uVar22 >> 8);
  local_520 = (undefined1)uVar23;
  uStack_51f = (undefined7)((ulong)uVar23 >> 8);
  local_518 = 0;
  local_540 = (char)_all.unknown;
  local_538 = uVar21;
  local_530 = uVar17;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4069000000000000);
  uStack_6d0 = CONCAT71(uStack_53f,local_540);
  uStack_6d8 = uStack_548;
  local_6e0 = local_550;
  uStack_6c8 = local_538;
  uStack_6b8 = uStack_528;
  local_6c0 = local_530;
  uStack_6af = uStack_51f;
  uStack_6a8 = local_518;
  uStack_6b7 = uStack_527;
  uStack_6b0 = local_520;
  puStack_718 = puStack_588;
  local_720 = local_590;
  puStack_708 = puStack_578;
  uStack_710 = uStack_580;
  uStack_6f8 = uStack_568;
  local_700 = local_570;
  uStack_6e8 = uStack_558;
  uStack_6f0 = uStack_560;
  uStack_4c8 = CONCAT71(uStack_267,uStack_268);
  uStack_4d0 = CONCAT71(uStack_26f,local_270);
  uStack_4d8 = CONCAT71(uStack_277,uStack_278);
  local_4e0 = local_280;
  puStack_4f8 = puStack_298;
  local_500 = local_2a0;
  uStack_4e8 = uStack_288;
  uStack_4f0 = local_290;
  puStack_508 = puStack_2a8;
  local_510 = local_2b0;
  local_498 = 0;
  local_4c0 = (char)_all.unknown;
  local_4b8 = uVar21;
  local_4b0 = uVar17;
  local_4a8 = uVar22;
  local_4a0 = uVar23;
  FUN_100011090(&local_590,&local_1b0,&DAT_100fc7a60,&DAT_100c4c2a8);
  CVar11.unknown = (undefined *)&local_510;
  FUN_100005808(CVar11.unknown,&DAT_100fc7a60,&DAT_100c4c2a8);
  CVar11 = SwiftUI::Color::get_accentColor(CVar11);
  SVar13 = SwiftUI::Edge::Set::get_all(CVar11.unknown);
  uStack_3c8 = uStack_658;
  local_3d0 = local_660;
  uStack_3b8 = uStack_648;
  local_3c0 = uStack_650;
  uStack_3a8 = uStack_638;
  local_3b0 = local_640;
  uStack_408 = uStack_698;
  local_410 = local_6a0;
  uStack_3f8 = uStack_688;
  local_400 = uStack_690;
  uStack_3d8 = uStack_668;
  local_3e0 = uStack_670;
  uStack_3e8 = uStack_678;
  local_3f0 = local_680;
  uStack_448 = uStack_6d8;
  local_450 = local_6e0;
  uStack_438 = uStack_6c8;
  local_440 = uStack_6d0;
  uStack_428 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_418 = CONCAT71(uStack_6a7,uStack_6a8);
  local_420 = CONCAT71(uStack_6af,uStack_6b0);
  uStack_338 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_328 = CONCAT71(uStack_6a7,uStack_6a8);
  local_330 = CONCAT71(uStack_6af,uStack_6b0);
  local_430 = local_6c0;
  puStack_488 = puStack_718;
  local_490 = local_720;
  puStack_478 = puStack_708;
  uStack_480 = uStack_710;
  uStack_468 = uStack_6f8;
  local_470 = local_700;
  uStack_458 = uStack_6e8;
  uStack_460 = uStack_6f0;
  uStack_2d8 = uStack_658;
  local_2e0 = local_660;
  uStack_2c8 = uStack_648;
  local_2d0 = uStack_650;
  uStack_2b8 = uStack_638;
  local_2c0 = local_640;
  uStack_318 = uStack_698;
  local_320 = local_6a0;
  uStack_308 = uStack_688;
  local_310 = uStack_690;
  uStack_2e8 = uStack_668;
  local_2f0 = uStack_670;
  uStack_2f8 = uStack_678;
  local_300 = local_680;
  uStack_358 = uStack_6d8;
  local_360 = local_6e0;
  uStack_348 = uStack_6c8;
  local_350 = uStack_6d0;
  local_340 = local_6c0;
  puStack_398 = puStack_718;
  local_3a0 = local_720;
  puStack_388 = puStack_708;
  local_390 = uStack_710;
  uStack_368 = uStack_6e8;
  local_370 = uStack_6f0;
  uStack_378 = uStack_6f8;
  local_380 = local_700;
  FUN_100011090(&local_490,&local_1b0,&DAT_100fc7a50,&DAT_100c4c2a0);
  FUN_100005808(&local_3a0,&DAT_100fc7a50,&DAT_100c4c2a0);
  puVar6 = &DAT_100fc7a28;
  FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
  iVar2 = *(int *)(puVar6 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar16 = CONCAT71((int7)((ulong)puVar6 >> 8),RVar4.value);
  (**(code **)(*(long *)(lVar16 + -8) + 0x68))((long)param_1 + (long)iVar2,uVar1,lVar16);
  uStack_1e8 = uStack_658;
  local_1f0 = local_660;
  uStack_1d8 = uStack_648;
  local_1e0 = uStack_650;
  uStack_1c8 = (undefined1)uStack_638;
  uStack_1c7 = (undefined7)((ulong)uStack_638 >> 8);
  local_1d0 = local_640;
  uStack_228 = uStack_698;
  local_230 = local_6a0;
  uStack_218 = uStack_688;
  local_220 = uStack_690;
  uStack_1f8 = uStack_668;
  local_200 = uStack_670;
  uStack_208 = uStack_678;
  local_210 = local_680;
  uStack_268 = (undefined1)uStack_6d8;
  uStack_267 = (undefined7)((ulong)uStack_6d8 >> 8);
  local_270 = (undefined1)local_6e0;
  uStack_26f = (undefined7)((ulong)local_6e0 >> 8);
  uStack_258 = uStack_6c8;
  local_260 = uStack_6d0;
  uStack_248 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_238 = CONCAT71(uStack_6a7,uStack_6a8);
  local_240 = CONCAT71(uStack_6af,uStack_6b0);
  local_250 = local_6c0;
  puStack_2a8 = puStack_718;
  local_2b0 = local_720;
  puStack_298 = puStack_708;
  local_2a0 = uStack_710;
  uStack_278 = (undefined1)uStack_6e8;
  uStack_277 = (undefined7)((ulong)uStack_6e8 >> 8);
  local_280 = uStack_6f0;
  uStack_288 = uStack_6f8;
  local_290 = local_700;
  local_1c0 = SUB81(CVar11.unknown,0);
  uStack_1bf = (undefined7)((ulong)CVar11.unknown >> 8);
  puVar6 = &DAT_100fc7a90;
  local_1b8 = (char)SVar13.unknown;
  FUN_1000037f0(&DAT_100fc7a90,&DAT_100c4c2c0);
  *(undefined2 *)((long)param_1 + (long)iVar2 + (long)*(int *)(puVar6 + 0x24)) = 0x100;
  param_1[0x19] = uStack_1e8;
  param_1[0x18] = local_1f0;
  param_1[0x1b] = uStack_1d8;
  param_1[0x1a] = local_1e0;
  param_1[0x1d] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[0x1c] = local_1d0;
  *(ulong *)((long)param_1 + 0xf1) = CONCAT17(local_1b8,uStack_1bf);
  *(ulong *)((long)param_1 + 0xe9) = CONCAT17(local_1c0,uStack_1c7);
  param_1[0x11] = uStack_228;
  param_1[0x10] = local_230;
  param_1[0x13] = uStack_218;
  param_1[0x12] = local_220;
  param_1[0x15] = uStack_208;
  param_1[0x14] = local_210;
  param_1[0x17] = uStack_1f8;
  param_1[0x16] = local_200;
  param_1[9] = CONCAT71(uStack_267,uStack_268);
  param_1[8] = CONCAT71(uStack_26f,local_270);
  param_1[0xb] = uStack_258;
  param_1[10] = local_260;
  param_1[0xd] = uStack_248;
  param_1[0xc] = local_250;
  param_1[0xf] = uStack_238;
  param_1[0xe] = local_240;
  param_1[1] = puStack_2a8;
  *param_1 = local_2b0;
  param_1[3] = puStack_298;
  param_1[2] = local_2a0;
  param_1[5] = uStack_288;
  param_1[4] = local_290;
  param_1[7] = CONCAT71(uStack_277,uStack_278);
  param_1[6] = local_280;
  uStack_e8 = uStack_658;
  local_f0 = local_660;
  uStack_d8 = uStack_648;
  local_e0 = uStack_650;
  uStack_c8 = uStack_638;
  local_d0 = local_640;
  uStack_128 = uStack_698;
  local_130 = local_6a0;
  uStack_118 = uStack_688;
  local_120 = uStack_690;
  uStack_f8 = uStack_668;
  local_100 = uStack_670;
  uStack_108 = uStack_678;
  local_110 = local_680;
  uStack_168 = uStack_6d8;
  local_170 = local_6e0;
  uStack_158 = uStack_6c8;
  local_160 = uStack_6d0;
  uStack_148 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_138 = CONCAT71(uStack_6a7,uStack_6a8);
  local_140 = CONCAT71(uStack_6af,uStack_6b0);
  local_150 = local_6c0;
  puStack_1a8 = puStack_718;
  local_1b0 = local_720;
  puStack_198 = puStack_708;
  local_1a0 = uStack_710;
  uStack_178 = uStack_6e8;
  local_180 = uStack_6f0;
  uStack_188 = uStack_6f8;
  local_190 = local_700;
  local_c0 = CVar11.unknown;
  local_b8 = (char)SVar13.unknown;
  FUN_100011090(&local_2b0,auStack_820,&DAT_100fc7a40,&DAT_100c4c298);
  FUN_100005808(&local_1b0,&DAT_100fc7a40,&DAT_100c4c298);
  _swift_release(pMVar5);
  return;
}



/* Address: 0x100457f0c | FUN_100457f0c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100457fe8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100457f0c(undefined8 *param_1,Text param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6,undefined8 param_7,undefined8 param_8,
                  HierarchicalShapeStyle param_9)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  RoundedCornerStyle RVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  Text TVar9;
  Text TVar10;
  HierarchicalShapeStyle HVar11;
  Text TVar12;
  Set SVar13;
  EdgeInsets EVar14;
  Set _all;
  Alignment AVar15;
  Color CVar16;
  undefined8 uVar18;
  Text TVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_820 [256];
  undefined *local_720;
  undefined *puStack_718;
  undefined8 uStack_710;
  undefined *puStack_708;
  undefined8 local_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 local_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 local_6c0;
  undefined1 uStack_6b8;
  undefined7 uStack_6b7;
  undefined1 uStack_6b0;
  undefined7 uStack_6af;
  undefined1 uStack_6a8;
  undefined7 uStack_6a7;
  undefined8 local_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 local_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 local_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 local_640;
  undefined8 uStack_638;
  undefined *local_630;
  undefined *puStack_628;
  undefined1 local_620;
  undefined7 uStack_61f;
  undefined *local_618;
  undefined1 local_610;
  undefined7 uStack_60f;
  undefined8 uStack_608;
  undefined8 local_600;
  undefined1 local_5f8;
  undefined7 uStack_5f7;
  undefined1 uStack_5f0;
  undefined7 uStack_5ef;
  undefined1 uStack_5e8;
  undefined *local_5e0;
  undefined *local_5d8;
  undefined1 local_5d0;
  undefined *local_5c8;
  undefined1 local_5c0;
  undefined8 local_5b8;
  undefined8 local_5b0;
  undefined8 local_5a8;
  undefined8 local_5a0;
  undefined1 local_598;
  undefined *local_590;
  undefined *puStack_588;
  undefined8 uStack_580;
  undefined *puStack_578;
  undefined8 local_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 local_550;
  undefined8 uStack_548;
  undefined1 local_540;
  undefined7 uStack_53f;
  undefined8 local_538;
  undefined8 local_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
  undefined1 local_520;
  undefined7 uStack_51f;
  undefined1 local_518;
  undefined *local_510;
  undefined *puStack_508;
  undefined8 local_500;
  undefined *puStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 local_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined1 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 local_4a8;
  undefined8 local_4a0;
  undefined1 local_498;
  undefined *local_490;
  undefined *puStack_488;
  undefined8 uStack_480;
  undefined *puStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 local_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 local_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 local_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined *local_3a0;
  undefined *puStack_398;
  undefined8 local_390;
  undefined *puStack_388;
  undefined8 local_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 local_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 local_2c0;
  undefined8 uStack_2b8;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined8 local_2a0;
  undefined *puStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined1 uStack_278;
  undefined7 uStack_277;
  undefined1 local_270;
  undefined7 uStack_26f;
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 local_1c0;
  undefined7 uStack_1bf;
  undefined1 local_1b8;
  undefined *local_1b0;
  undefined *puStack_1a8;
  undefined8 local_1a0;
  undefined *puStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined1 local_b8;
  long lVar17;
  
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  puVar6 = &DAT_100fc7998;
  FUN_100003a00(&DAT_100fc7998,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "PasteWhatsNew/WhatsNewView.swift";
    param_9.unknown = (undefined *)0x95;
    _swift_task_reportUnexpectedExecutor
              ("PasteWhatsNew/WhatsNewView.swift",0x20,1,0x95,UVar7.unknown,puVar6);
  }
  local_1b0 = param_6;
  puStack_1a8 = (undefined *)param_7;
  FUN_100458c64();
  _swift_bridgeObjectRetain(param_7);
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar9 = SwiftUI::Text::_init(pcVar8,PTR___type_metadata_for_Swift_String_100eac208,pcVar8);
  SwiftUI::Font::Weight::get_medium((Weight)TVar9.unknown);
  uVar18 = 0;
  TVar19 = TVar9;
  SVar13.unknown = puVar6;
  TVar10 = SwiftUI::Text::_fontWeight(param_2);
  FUN_100016d74(TVar9.unknown,puVar6,pcVar8);
  _swift_bridgeObjectRelease();
  HVar11 = SwiftUI::HierarchicalShapeStyle::get_primary(param_9);
  local_1b0 = (undefined *)CONCAT44(local_1b0._4_4_,(int)HVar11.unknown);
  FUN_100458d64();
  TVar9 = TVar10;
  uVar20 = uVar18;
  puVar6 = TVar19.unknown;
  TVar12 = SwiftUI::Text::_foregroundStyle();
  FUN_100016d74(TVar10.unknown,uVar18,TVar19.unknown);
  _swift_bridgeObjectRelease();
  SVar13 = SwiftUI::Edge::Set::get_horizontal(SVar13);
  uVar21 = 0x4030000000000000;
  EVar14 = SwiftUI::EdgeInsets::init(SVar13.unknown);
  uVar18 = param_3;
  uVar23 = param_4;
  uVar24 = param_5;
  _all = SwiftUI::Edge::Set::get_vertical(EVar14.unknown);
  local_5f8 = (undefined1)param_4;
  uStack_5f7 = (undefined7)((ulong)param_4 >> 8);
  uStack_5f0 = (undefined1)param_5;
  uStack_5ef = (undefined7)((ulong)param_5 >> 8);
  uStack_5e8 = 0;
  uVar22 = 0x4024000000000000;
  local_630 = TVar12.unknown;
  puStack_628 = TVar9.unknown;
  local_620 = (char)uVar20;
  local_618 = puVar6;
  local_610 = (char)SVar13.unknown;
  uStack_608 = uVar21;
  local_600 = param_3;
  SwiftUI::EdgeInsets::init((CGFloat)_all.unknown);
  local_290 = CONCAT71(uStack_60f,local_610);
  uStack_288 = uStack_608;
  uStack_278 = local_5f8;
  local_280 = local_600;
  uStack_26f = uStack_5ef;
  uStack_268 = uStack_5e8;
  uStack_277 = uStack_5f7;
  local_270 = uStack_5f0;
  local_2a0 = CONCAT71(uStack_61f,local_620);
  puStack_298 = local_618;
  puStack_2a8 = puStack_628;
  local_2b0 = local_630;
  local_598 = 0;
  local_5e0 = TVar12.unknown;
  local_5d8 = TVar9.unknown;
  local_5d0 = (char)uVar20;
  local_5c8 = puVar6;
  local_5c0 = (char)SVar13.unknown;
  local_5b8 = uVar21;
  local_5b0 = param_3;
  local_5a8 = param_4;
  local_5a0 = param_5;
  FUN_100011090(&local_630,&local_1b0,&DAT_100fc7a70,&DAT_100c4c2b0);
  AVar15.unknown = (undefined *)&local_5e0;
  FUN_100005808(AVar15.unknown,&DAT_100fc7a70,&DAT_100c4c2b0);
  SwiftUI::Alignment::get_center(AVar15);
  uStack_558 = CONCAT71(uStack_277,uStack_278);
  uStack_568 = uStack_288;
  local_570 = local_290;
  uStack_560 = local_280;
  uStack_548 = CONCAT71(uStack_267,uStack_268);
  local_550 = CONCAT71(uStack_26f,local_270);
  puStack_588 = puStack_2a8;
  local_590 = local_2b0;
  puStack_578 = puStack_298;
  uStack_580 = local_2a0;
  uStack_528 = (undefined1)uVar23;
  uStack_527 = (undefined7)((ulong)uVar23 >> 8);
  local_520 = (undefined1)uVar24;
  uStack_51f = (undefined7)((ulong)uVar24 >> 8);
  local_518 = 0;
  local_540 = (char)_all.unknown;
  local_538 = uVar22;
  local_530 = uVar18;
  SwiftUI::_FlexFrameLayout::_init((Alignment)0x4069000000000000);
  uStack_6d0 = CONCAT71(uStack_53f,local_540);
  uStack_6d8 = uStack_548;
  local_6e0 = local_550;
  uStack_6c8 = local_538;
  uStack_6b8 = uStack_528;
  local_6c0 = local_530;
  uStack_6af = uStack_51f;
  uStack_6a8 = local_518;
  uStack_6b7 = uStack_527;
  uStack_6b0 = local_520;
  puStack_718 = puStack_588;
  local_720 = local_590;
  puStack_708 = puStack_578;
  uStack_710 = uStack_580;
  uStack_6f8 = uStack_568;
  local_700 = local_570;
  uStack_6e8 = uStack_558;
  uStack_6f0 = uStack_560;
  uStack_4c8 = CONCAT71(uStack_267,uStack_268);
  uStack_4d0 = CONCAT71(uStack_26f,local_270);
  uStack_4d8 = CONCAT71(uStack_277,uStack_278);
  local_4e0 = local_280;
  puStack_4f8 = puStack_298;
  local_500 = local_2a0;
  uStack_4e8 = uStack_288;
  uStack_4f0 = local_290;
  puStack_508 = puStack_2a8;
  local_510 = local_2b0;
  local_498 = 0;
  local_4c0 = (char)_all.unknown;
  local_4b8 = uVar22;
  local_4b0 = uVar18;
  local_4a8 = uVar23;
  local_4a0 = uVar24;
  FUN_100011090(&local_590,&local_1b0,&DAT_100fc7a60,&DAT_100c4c2a8);
  CVar16.unknown = (undefined *)&local_510;
  FUN_100005808(CVar16.unknown,&DAT_100fc7a60,&DAT_100c4c2a8);
  SVar13.unknown = (undefined *)SwiftUI::Color::get_primary(CVar16);
  CVar16 = SwiftUI::Color::opacity(0.1,(Color)SVar13.unknown);
  _swift_release();
  SVar13 = SwiftUI::Edge::Set::get_all(SVar13);
  uStack_3c8 = uStack_658;
  local_3d0 = local_660;
  uStack_3b8 = uStack_648;
  local_3c0 = uStack_650;
  uStack_3a8 = uStack_638;
  local_3b0 = local_640;
  uStack_408 = uStack_698;
  local_410 = local_6a0;
  uStack_3f8 = uStack_688;
  local_400 = uStack_690;
  uStack_3d8 = uStack_668;
  local_3e0 = uStack_670;
  uStack_3e8 = uStack_678;
  local_3f0 = local_680;
  uStack_448 = uStack_6d8;
  local_450 = local_6e0;
  uStack_438 = uStack_6c8;
  local_440 = uStack_6d0;
  uStack_428 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_418 = CONCAT71(uStack_6a7,uStack_6a8);
  local_420 = CONCAT71(uStack_6af,uStack_6b0);
  uStack_338 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_328 = CONCAT71(uStack_6a7,uStack_6a8);
  local_330 = CONCAT71(uStack_6af,uStack_6b0);
  local_430 = local_6c0;
  puStack_488 = puStack_718;
  local_490 = local_720;
  puStack_478 = puStack_708;
  uStack_480 = uStack_710;
  uStack_468 = uStack_6f8;
  local_470 = local_700;
  uStack_458 = uStack_6e8;
  uStack_460 = uStack_6f0;
  uStack_2d8 = uStack_658;
  local_2e0 = local_660;
  uStack_2c8 = uStack_648;
  local_2d0 = uStack_650;
  uStack_2b8 = uStack_638;
  local_2c0 = local_640;
  uStack_318 = uStack_698;
  local_320 = local_6a0;
  uStack_308 = uStack_688;
  local_310 = uStack_690;
  uStack_2e8 = uStack_668;
  local_2f0 = uStack_670;
  uStack_2f8 = uStack_678;
  local_300 = local_680;
  uStack_358 = uStack_6d8;
  local_360 = local_6e0;
  uStack_348 = uStack_6c8;
  local_350 = uStack_6d0;
  local_340 = local_6c0;
  puStack_398 = puStack_718;
  local_3a0 = local_720;
  puStack_388 = puStack_708;
  local_390 = uStack_710;
  uStack_368 = uStack_6e8;
  local_370 = uStack_6f0;
  uStack_378 = uStack_6f8;
  local_380 = local_700;
  FUN_100011090(&local_490,&local_1b0,&DAT_100fc7a50,&DAT_100c4c2a0);
  FUN_100005808(&local_3a0,&DAT_100fc7a50,&DAT_100c4c2a0);
  puVar6 = &DAT_100fc7a28;
  FUN_1000037f0(&DAT_100fc7a28,&DAT_100c4c290);
  iVar2 = *(int *)(puVar6 + 0x24);
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_SwiftUI_RoundedCornerStyle_continuous_SwiftUI_RoundedCornerStyle_Type___>_SwiftUI_RoundedCornerStyle_100eaac50
  ;
  RVar4 = SwiftUI::RoundedCornerStyle::typeMetadataAccessor();
  lVar17 = CONCAT71((int7)((ulong)puVar6 >> 8),RVar4.value);
  (**(code **)(*(long *)(lVar17 + -8) + 0x68))((long)param_1 + (long)iVar2,uVar1,lVar17);
  uStack_1e8 = uStack_658;
  local_1f0 = local_660;
  uStack_1d8 = uStack_648;
  local_1e0 = uStack_650;
  uStack_1c8 = (undefined1)uStack_638;
  uStack_1c7 = (undefined7)((ulong)uStack_638 >> 8);
  local_1d0 = local_640;
  uStack_228 = uStack_698;
  local_230 = local_6a0;
  uStack_218 = uStack_688;
  local_220 = uStack_690;
  uStack_1f8 = uStack_668;
  local_200 = uStack_670;
  uStack_208 = uStack_678;
  local_210 = local_680;
  uStack_268 = (undefined1)uStack_6d8;
  uStack_267 = (undefined7)((ulong)uStack_6d8 >> 8);
  local_270 = (undefined1)local_6e0;
  uStack_26f = (undefined7)((ulong)local_6e0 >> 8);
  uStack_258 = uStack_6c8;
  local_260 = uStack_6d0;
  uStack_248 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_238 = CONCAT71(uStack_6a7,uStack_6a8);
  local_240 = CONCAT71(uStack_6af,uStack_6b0);
  local_250 = local_6c0;
  puStack_2a8 = puStack_718;
  local_2b0 = local_720;
  puStack_298 = puStack_708;
  local_2a0 = uStack_710;
  uStack_278 = (undefined1)uStack_6e8;
  uStack_277 = (undefined7)((ulong)uStack_6e8 >> 8);
  local_280 = uStack_6f0;
  uStack_288 = uStack_6f8;
  local_290 = local_700;
  local_1c0 = SUB81(CVar16.unknown,0);
  uStack_1bf = (undefined7)((ulong)CVar16.unknown >> 8);
  puVar6 = &DAT_100fc7a90;
  local_1b8 = (char)SVar13.unknown;
  FUN_1000037f0(&DAT_100fc7a90,&DAT_100c4c2c0);
  *(undefined2 *)((long)param_1 + (long)iVar2 + (long)*(int *)(puVar6 + 0x24)) = 0x100;
  param_1[0x19] = uStack_1e8;
  param_1[0x18] = local_1f0;
  param_1[0x1b] = uStack_1d8;
  param_1[0x1a] = local_1e0;
  param_1[0x1d] = CONCAT71(uStack_1c7,uStack_1c8);
  param_1[0x1c] = local_1d0;
  *(ulong *)((long)param_1 + 0xf1) = CONCAT17(local_1b8,uStack_1bf);
  *(ulong *)((long)param_1 + 0xe9) = CONCAT17(local_1c0,uStack_1c7);
  param_1[0x11] = uStack_228;
  param_1[0x10] = local_230;
  param_1[0x13] = uStack_218;
  param_1[0x12] = local_220;
  param_1[0x15] = uStack_208;
  param_1[0x14] = local_210;
  param_1[0x17] = uStack_1f8;
  param_1[0x16] = local_200;
  param_1[9] = CONCAT71(uStack_267,uStack_268);
  param_1[8] = CONCAT71(uStack_26f,local_270);
  param_1[0xb] = uStack_258;
  param_1[10] = local_260;
  param_1[0xd] = uStack_248;
  param_1[0xc] = local_250;
  param_1[0xf] = uStack_238;
  param_1[0xe] = local_240;
  param_1[1] = puStack_2a8;
  *param_1 = local_2b0;
  param_1[3] = puStack_298;
  param_1[2] = local_2a0;
  param_1[5] = uStack_288;
  param_1[4] = local_290;
  param_1[7] = CONCAT71(uStack_277,uStack_278);
  param_1[6] = local_280;
  uStack_e8 = uStack_658;
  local_f0 = local_660;
  uStack_d8 = uStack_648;
  local_e0 = uStack_650;
  uStack_c8 = uStack_638;
  local_d0 = local_640;
  uStack_128 = uStack_698;
  local_130 = local_6a0;
  uStack_118 = uStack_688;
  local_120 = uStack_690;
  uStack_f8 = uStack_668;
  local_100 = uStack_670;
  uStack_108 = uStack_678;
  local_110 = local_680;
  uStack_168 = uStack_6d8;
  local_170 = local_6e0;
  uStack_158 = uStack_6c8;
  local_160 = uStack_6d0;
  uStack_148 = CONCAT71(uStack_6b7,uStack_6b8);
  uStack_138 = CONCAT71(uStack_6a7,uStack_6a8);
  local_140 = CONCAT71(uStack_6af,uStack_6b0);
  local_150 = local_6c0;
  puStack_1a8 = puStack_718;
  local_1b0 = local_720;
  puStack_198 = puStack_708;
  local_1a0 = uStack_710;
  uStack_178 = uStack_6e8;
  local_180 = uStack_6f0;
  uStack_188 = uStack_6f8;
  local_190 = local_700;
  local_c0 = CVar16.unknown;
  local_b8 = (char)SVar13.unknown;
  FUN_100011090(&local_2b0,auStack_820,&DAT_100fc7a40,&DAT_100c4c298);
  FUN_100005808(&local_1b0,&DAT_100fc7a40,&DAT_100c4c298);
  _swift_release(pMVar5);
  return;
}



/* Address: 0x1004585b8 | FUN_1004585b8 */

void FUN_1004585b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  HorizontalAlignment HVar3;
  undefined *puVar4;
  Set SVar5;
  undefined *puVar6;
  Alignment AVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar6 = (undefined *)*unaff_x20;
  AVar7.unknown = (undefined *)unaff_x20[1];
  HVar3 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar3.unknown;
  param_1[1] = 0x4038000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar4 = &DAT_100fc7978;
  FUN_1000037f0(&DAT_100fc7978,&DAT_100c4c1f0);
  SVar5.unknown = puVar6;
  FUN_1004557dc((long)param_1 + (long)*(int *)(puVar4 + 0x2c),puVar6,AVar7.unknown);
  SVar5 = SwiftUI::Edge::Set::get_bottom(SVar5);
  uVar8 = 0x4052000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar5.unknown);
  puVar4 = &DAT_100fc7980;
  FUN_1000037f0(&DAT_100fc7980,&DAT_100c4c1f8);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  *puVar1 = (char)SVar5.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  puVar4 = &DAT_100ed6740;
  _swift_allocObject(&DAT_100ed6740,0x20,7);
  *(undefined **)(puVar4 + 0x10) = puVar6;
  *(undefined **)(puVar4 + 0x18) = AVar7.unknown;
  puVar6 = &DAT_100fc7988;
  FUN_1000037f0(&DAT_100fc7988,&DAT_100c4c200);
  puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x24));
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = FUN_100458744;
  puVar2[3] = puVar4;
  _swift_retain();
  SwiftUI::Alignment::get_center(AVar7);
  SwiftUI::_FrameLayout::_init((Alignment)0x4081000000000000);
  puVar4 = &DAT_100fc7990;
  FUN_1000037f0(&DAT_100fc7990,&DAT_100c4c208);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x24));
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  return;
}



/* Address: 0x100458720 | FUN_100458720 */

void FUN_100458720(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100458744 | FUN_100458744 */

void FUN_100458744(void)

{
  long unaff_x20;
  
  FUN_100456550(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10045874c | FUN_10045874c */

void FUN_10045874c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100004640(unaff_x20 + 0x10,uVar1);
  FUN_1001ad344(uVar1,uVar2);
  return;
}



/* Address: 0x10045878c | FUN_10045878c */

void FUN_10045878c(void)

{
  long unaff_x20;
  
  FUN_100457874(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100458794 | FUN_100458794 */

void FUN_100458794(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a28;
  FUN_100005c24(&DAT_100fc7a28,&DAT_100c4c290);
  puVar2 = puVar1;
  FUN_10045882c();
  puVar3 = &DAT_100fc7a88;
  FUN_100016eac(&DAT_100fc7a88,&DAT_100fc7a90,&DAT_100c4c2c0,
                PTR_SwiftUI__SwiftUI___ClipEffect<undefined>_>SwiftUI__ViewModifier_100eaa680);
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7a30 = puVar4;
  return;
}



/* Address: 0x10045882c | FUN_10045882c */

void FUN_10045882c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7a38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a40;
  FUN_100005c24(&DAT_100fc7a40,&DAT_100c4c298);
  puVar2 = puVar1;
  FUN_1004588c4();
  puVar3 = &DAT_100fc7a78;
  FUN_100016eac(&DAT_100fc7a78,&DAT_100fc7a80,&DAT_100c4c2b8,
                PTR_SwiftUI__SwiftUI___BackgroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eaafe0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7a38 = puVar4;
  return;
}



/* Address: 0x1004588c4 | FUN_1004588c4 */

void FUN_1004588c4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7a48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a50;
  FUN_100005c24(&DAT_100fc7a50,&DAT_100c4c2a0);
  puVar2 = puVar1;
  FUN_10045893c();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7a48 = puVar3;
  return;
}



/* Address: 0x10045893c | FUN_10045893c */

void FUN_10045893c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a60;
  FUN_100005c24(&DAT_100fc7a60,&DAT_100c4c2a8);
  puVar2 = puVar1;
  FUN_1004589b4();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7a58 = puVar3;
  return;
}



/* Address: 0x1004589b4 | FUN_1004589b4 */

void FUN_1004589b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fc7a68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a70;
  FUN_100005c24(&DAT_100fc7a70,&DAT_100c4c2b0);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fc7a68 = puVar2;
  return;
}



/* Address: 0x100458a24 | FUN_100458a24 */

void FUN_100458a24(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  PlainButtonStyle PVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined8 *local_70;
  undefined8 *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  
  if (DAT_100fc7ab0 != (undefined *)0x0) {
    return;
  }
  puVar2 = &DAT_100fc7a20;
  FUN_100005c24(&DAT_100fc7a20,&DAT_100c4c288);
  puVar3 = &DAT_100fc7a18;
  FUN_100005c24(&DAT_100fc7a18,&DAT_100c4c280);
  PVar4 = SwiftUI::PlainButtonStyle::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaa9d0;
  puVar5 = &DAT_100fc7a98;
  FUN_100016eac(&DAT_100fc7a98,&DAT_100fc7a18,&DAT_100c4c280,
                PTR_SwiftUI__SwiftUI__Button<undefined>_>SwiftUI__View_100eab888);
  puVar6 = &DAT_100fc7aa0;
  FUN_100003a00(&DAT_100fc7aa0,puVar1,
                PTR_SwiftUI__SwiftUI__PlainButtonStyle_>SwiftUI__PrimitiveButtonStyle_100eaa9c0);
  ppuVar7 = &local_60;
  local_60 = puVar3;
  puStack_58 = PVar4.unknown;
  local_50 = puVar5;
  puStack_48 = puVar6;
  _swift_getOpaqueTypeConformance2
            (ppuVar7,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_buttonStyle<A_where_A1:_SwiftUI_PrimitiveButtonStyle>(A1)__>_some>>_100eab3c0
             ,1);
  ppuVar8 = ppuVar7;
  FUN_100458b30();
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_70 = ppuVar7;
  puStack_68 = ppuVar8;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar2,&local_70);
  DAT_100fc7ab0 = puVar3;
  return;
}



/* Address: 0x100458b30 | FUN_100458b30 */

void FUN_100458b30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc7ab8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4c318;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4c318,&DAT_100ed67e0);
  DAT_100fc7ab8 = pTVar1;
  return;
}



/* Address: 0x100458b70 | FUN_100458b70 */

void FUN_100458b70(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7ac0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7a08;
  FUN_100005c24(&DAT_100fc7a08,&DAT_100c4c270);
  puVar2 = &DAT_100fc7aa8;
  FUN_100016eac(&DAT_100fc7aa8,&DAT_100fc7a00,&DAT_100c4c268,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = puVar2;
  FUN_100458a24();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fc7ac0 = puVar4;
  return;
}



/* Address: 0x100458c08 | FUN_100458c08 */

void FUN_100458c08(void)

{
  long unaff_x20;
  
  FUN_10045706c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100458c10 | thunk_FUN_100458c14 */

void thunk_FUN_100458c14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  lVar3 = lVar3 + 0x10;
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  return;
}



/* Address: 0x100458c14 | FUN_100458c14 */

void FUN_100458c14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  uVar2 = *(undefined8 *)(lVar3 + 0x30);
  lVar3 = lVar3 + 0x10;
  FUN_100004640(lVar3,uVar1);
  FUN_1001ad344(uVar1,uVar2,lVar3);
  return;
}



/* Address: 0x100458c54 | FUN_100458c54 */

void FUN_100458c54(void)

{
  long unaff_x20;
  
  FUN_100457f0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100458c5c | FUN_100458c5c */

void FUN_100458c5c(void)

{
  FUN_1004570c4();
  return;
}



/* Address: 0x100458c64 | FUN_100458c64 */

void FUN_100458c64(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7ad0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fc7ad0 = puVar1;
  return;
}



/* Address: 0x100458ca4 | FUN_100458ca4 */

void FUN_100458ca4(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7ad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700,
             PTR___type_metadata_for_SwiftUI_Color_100eab718);
  DAT_100fc7ad8 = puVar1;
  return;
}



/* Address: 0x100458ce4 | FUN_100458ce4 */

void FUN_100458ce4(void)

{
  FUN_1000037f0(&DAT_100fc7b30,&DAT_100c4c368);
  FUN_100016eac(&DAT_100fc7b38,&DAT_100fc7b30,&DAT_100c4c368,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  (extension_SwiftUI)::SwiftUI::View::_focusEffectDisabled(true);
  return;
}



/* Address: 0x100458d64 | FUN_100458d64 */

void FUN_100458d64(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7ae0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__HierarchicalShapeStyle_>SwiftUI__ShapeStyle_100eaaee0,
             PTR___type_metadata_for_SwiftUI_HierarchicalShapeStyle_100eaaef0);
  DAT_100fc7ae0 = puVar1;
  return;
}



/* Address: 0x100458da4 | FUN_100458da4 */

undefined1  [16] FUN_100458da4(void)

{
  return ZEXT816(0x100ed67e0);
}



/* Address: 0x100458db4 | thunk_FUN_100458db8 */

void thunk_FUN_100458db8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fc7b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7990;
  FUN_100005c24(&DAT_100fc7990,&DAT_100c4c208);
  puVar2 = puVar1;
  FUN_100458e30();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fc7b08 = puVar3;
  return;
}



/* Address: 0x100458db8 | FUN_100458db8 */

void FUN_100458db8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7b08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7990;
  FUN_100005c24(&DAT_100fc7990,&DAT_100c4c208);
  puVar2 = puVar1;
  FUN_100458e30();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7b08 = puVar3;
  return;
}



/* Address: 0x100458e30 | FUN_100458e30 */

void FUN_100458e30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7b10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7988;
  FUN_100005c24(&DAT_100fc7988,&DAT_100c4c200);
  puVar2 = puVar1;
  FUN_100458ea8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__AppearanceActionModifier___SwiftUI_ViewModifier_in_SwiftUI_100eab060
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7b10 = puVar3;
  return;
}



/* Address: 0x100458ea8 | FUN_100458ea8 */

void FUN_100458ea8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fc7b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7980;
  FUN_100005c24(&DAT_100fc7980,&DAT_100c4c1f8);
  puVar2 = &DAT_100fc7b20;
  FUN_100016eac(&DAT_100fc7b20,&DAT_100fc7b28,&DAT_100c4c310,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fc7b18 = puVar3;
  return;
}



/* Address: 0x100458f40 | FUN_100458f40 */

void FUN_100458f40(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100cb0f68,1);
  return;
}



/* Address: 0x100458f50 | FUN_100458f50 */

void FUN_100458f50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = &DAT_100fc7b30;
  FUN_100005c24(&DAT_100fc7b30,&DAT_100c4c368);
  puVar2 = &DAT_100fc7b38;
  FUN_100016eac(&DAT_100fc7b38,&DAT_100fc7b30,&DAT_100c4c368,
                PTR_SwiftUI__SwiftUI___ViewModifier_Content<undefined>_>SwiftUI__View_100eaaeb8);
  local_40 = puVar1;
  puStack_38 = puVar2;
  _swift_getOpaqueTypeConformance2
            (&local_40,
             PTR___opaque_type_descriptor_for_<<opaque_return_type_of_(extension_in_SwiftUI):SwiftUI_View_focusEffectDisabled(Swift_Bool)__>_some>>_100eab4e8
             ,1);
  return;
}



/* Address: 0x100458fcc | thunk_FUN_100458720 */

void thunk_FUN_100458720(void)

{
  FUN_100458720();
  return;
}


