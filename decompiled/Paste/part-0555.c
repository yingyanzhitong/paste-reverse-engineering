/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10063bfdc | FUN_10063bfdc */

int FUN_10063bfdc(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar1 = 0;
  if (uVar3 != 0) {
    uVar1 = uVar3 - 1;
  }
  lVar7 = *(long *)(lVar5 + 0x40);
  if (uVar3 == 0) {
    lVar7 = lVar7 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_10063c080;
  uVar6 = (uint)lVar7;
  uVar4 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar4 & 0x1f)) >> (ulong)(uVar4 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_10063c080;
      goto LAB_10063c018;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + lVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + lVar7);
    }
  }
  else {
LAB_10063c018:
    uVar8 = (uint)*(byte *)((long)param_1 + lVar7);
  }
  if (uVar8 != 0) {
    uVar3 = 0;
    if (uVar6 < 4) {
      uVar3 = uVar8 - 1 << (ulong)(uVar4 & 0x1f);
    }
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
      if (uVar6 < 4) {
        uVar4 = uVar6;
      }
      if ((int)uVar4 < 3) {
        if (uVar4 == 1) {
          uVar4 = (uint)(byte)*param_1;
        }
        else {
          uVar4 = (uint)(ushort)*param_1;
        }
      }
      else if (uVar4 == 3) {
        uVar4 = (uint)(uint3)*param_1;
      }
      else {
        uVar4 = *param_1;
      }
    }
    return uVar1 + (uVar4 | uVar3) + 1;
  }
LAB_10063c080:
  if (uVar3 < 2) {
    return 0;
  }
  (**(code **)(lVar5 + 0x30))();
  iVar2 = 0;
  if ((int)param_1 != 0) {
    iVar2 = (int)param_1 + -1;
  }
  return iVar2;
}



/* Address: 0x10063c104 | FUN_10063c104 */

void FUN_10063c104(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined2 uVar4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  
  bVar9 = 0;
  lVar5 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar3 = *(uint *)(lVar5 + 0x54);
  uVar2 = 0;
  if (uVar3 != 0) {
    uVar2 = uVar3 - 1;
  }
  sVar6 = *(size_t *)(lVar5 + 0x40);
  if (uVar3 == 0) {
    sVar6 = sVar6 + 1;
  }
  uVar7 = (uint)sVar6;
  if (uVar2 <= param_3 && param_3 - uVar2 != 0) {
    if (uVar7 < 4) {
      uVar1 = ((param_3 - uVar2) + ~(-1 << (ulong)(uVar7 << 3 & 0x1f)) >> (ulong)(uVar7 << 3 & 0x1f)
              ) + 1;
      bVar9 = 2;
      if (0xffff < uVar1) {
        bVar9 = 4;
      }
      if (uVar1 < 0x100) {
        bVar9 = 1 < uVar1;
      }
    }
    else {
      bVar9 = 1;
    }
  }
  if (uVar2 < param_2) {
    param_2 = param_2 + ~uVar2;
    if (uVar7 < 4) {
      iVar8 = (param_2 >> (ulong)(uVar7 << 3 & 0x1f)) + 1;
      if (uVar7 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar7 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar6);
        uVar4 = (undefined2)uVar2;
        if (uVar7 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar7 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar6);
      *param_1 = param_2;
      iVar8 = 1;
    }
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(char *)((long)param_1 + sVar6) = (char)iVar8;
      }
    }
    else if (bVar9 == 2) {
      *(short *)((long)param_1 + sVar6) = (short)iVar8;
    }
    else {
      *(int *)((long)param_1 + sVar6) = iVar8;
    }
  }
  else {
    if (bVar9 < 2) {
      if (bVar9 != 0) {
        *(undefined1 *)((long)param_1 + sVar6) = 0;
      }
    }
    else if (bVar9 == 2) {
      *(undefined2 *)((long)param_1 + sVar6) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar6) = 0;
    }
    if ((param_2 != 0) && (1 < uVar3)) {
                    /* WARNING: Could not recover jumptable at 0x00010063c264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar5 + 0x38))(param_1,param_2 + 1);
      return;
    }
  }
  return;
}



/* Address: 0x10063c2c8 | FUN_10063c2c8 */

void FUN_10063c2c8(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010063c2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x30))(param_1,1);
  return;
}



/* Address: 0x10063c2dc | FUN_10063c2dc */

void FUN_10063c2dc(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010063c2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x38))(param_1,param_2,1);
  return;
}



/* Address: 0x10063c2f0 | FUN_10063c2f0 */

void FUN_10063c2f0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10063c2fc | FUN_10063c2fc */

undefined1  [16] FUN_10063c2fc(void)

{
  return ZEXT816(0x100eeece8);
}



/* Address: 0x10063c30c | FUN_10063c30c */

void FUN_10063c30c(undefined2 *param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x10063c320 | FUN_10063c320 */

int FUN_10063c320(uint3 *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    if (param_2 + 0x1ffff01 >> 0x18 == 0) {
      uVar1 = (uint)*(ushort *)((long)param_1 + 3);
      if (*(ushort *)((long)param_1 + 3) == 0) goto LAB_10063c37c;
    }
    else {
      uVar1 = (uint)*(byte *)((long)param_1 + 3);
      if (uVar1 == 0) goto LAB_10063c37c;
    }
    return ((uint)*param_1 | uVar1 << 0x18) - 0xffff01;
  }
LAB_10063c37c:
  uVar1 = 0xffffffff;
  if (1 < (byte)*param_1) {
    uVar1 = (byte)*param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10063c3a0 | FUN_10063c3a0 */

void FUN_10063c3a0(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  if (param_3 + 0x1ffff01 >> 0x18 == 0) {
    iVar2 = 2;
  }
  if (param_3 < 0xff) {
    iVar2 = 0;
  }
  if (param_2 < 0xff) {
    if (iVar2 != 0) {
      if (iVar2 != 2) {
        param_1[3] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10063c418;
      }
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10063c418:
      *param_1 = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_2 = param_2 - 0xff;
    *(short *)param_1 = (short)param_2;
    param_1[2] = (char)(param_2 >> 0x10);
    if (iVar2 != 0) {
      iVar1 = (param_2 >> 0x18) + 1;
      if (iVar2 != 2) {
        param_1[3] = (char)iVar1;
        return;
      }
      *(short *)(param_1 + 3) = (short)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x10063c42c | FUN_10063c42c */

undefined1  [16] FUN_10063c42c(void)

{
  return ZEXT816(0x100eeed68);
}



/* Address: 0x10063c43c | FUN_10063c43c */

undefined1  [16] FUN_10063c43c(void)

{
  return ZEXT816(0x100eeee08);
}



/* Address: 0x10063c44c | thunk_FUN_10063c450 */

void thunk_FUN_10063c450(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd80e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a394;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a394,&DAT_100eeee08);
  DAT_100fd80e8 = pTVar1;
  return;
}



/* Address: 0x10063c450 | FUN_10063c450 */

void FUN_10063c450(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd80e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a394;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a394,&DAT_100eeee08);
  DAT_100fd80e8 = pTVar1;
  return;
}



/* Address: 0x10063c490 | FUN_10063c490 */

undefined8 FUN_10063c490(undefined8 param_1,undefined8 param_2)

{
  FUN_10066b48c(param_2,param_1);
  return param_2;
}



/* Address: 0x10063c4cc | FUN_10063c4cc */

void FUN_10063c4cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd80f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68cf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68cf4,&DAT_100eec938);
  DAT_100fd80f0 = pTVar1;
  return;
}



/* Address: 0x10063c50c | FUN_10063c50c */

void FUN_10063c50c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd80f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69090,&DAT_100eecb18);
  DAT_100fd80f8 = pTVar1;
  return;
}



/* Address: 0x10063c54c | FUN_10063c54c */

void FUN_10063c54c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68bf8,&DAT_100eec8d0);
  DAT_100fd8100 = pTVar1;
  return;
}



/* Address: 0x10063c58c | FUN_10063c58c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10063c58c(void)

{
  return ZEXT816(0x100fd8148);
}



/* Address: 0x10063c5ac | FUN_10063c5ac */

void FUN_10063c5ac(void)

{
  FUN_10063c5c0();
  return;
}



/* Address: 0x10063c5c0 | FUN_10063c5c0 */

void FUN_10063c5c0(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar1 = DAT_101057be8;
  _swift_willThrow();
  _swift_errorRetain(uVar1);
  return;
}



/* Address: 0x10063c620 | thunk_FUN_10063cbcc */

void thunk_FUN_10063cbcc(void)

{
  FUN_10063cbcc();
  return;
}



/* Address: 0x10063c624 | thunk_FUN_10063d0a0 */

void thunk_FUN_10063d0a0(void)

{
  FUN_10063d0a0();
  return;
}



/* Address: 0x10063c628 | FUN_10063c628 */

void FUN_10063c628(undefined8 param_1,undefined8 param_2)

{
  FUN_10063cd00(param_2);
  return;
}



/* Address: 0x10063c630 | FUN_10063c630 */

void FUN_10063c630(undefined8 param_1,undefined8 param_2)

{
  FUN_10063ce34(param_2);
  return;
}



/* Address: 0x10063c638 | thunk_FUN_10063c824 */

void thunk_FUN_10063c824(void)

{
  FUN_10063c824();
  return;
}



/* Address: 0x10063c63c | FUN_10063c63c */

void FUN_10063c63c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10063c958(param_3);
  return;
}



/* Address: 0x10063c644 | thunk_FUN_10063cf68 */

void thunk_FUN_10063cf68(void)

{
  FUN_10063cf68();
  return;
}



/* Address: 0x10063c648 | FUN_10063c648 */

void FUN_10063c648(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd00000000000002a,0x8000000100daef90,
             0xdaef60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063c6a0);
  (*pcVar1)();
}



/* Address: 0x10063c6a0 | FUN_10063c6a0 */

void FUN_10063c6a0(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd00000000000002e,0x8000000100daef60,
             0xdaef60);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063c6f8);
  (*pcVar1)();
}



/* Address: 0x10063c6f8 | FUN_10063c6f8 */

void FUN_10063c6f8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10063c734 | FUN_10063c734 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10063c734(void)

{
  return ZEXT816(0x100fd81e0);
}



/* Address: 0x10063c754 | FUN_10063c754 */

void FUN_10063c754(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10063dc68();
  return;
}



/* Address: 0x10063c794 | FUN_10063c794 */

undefined8 FUN_10063c794(void)

{
  return 0xf000000000000007;
}



/* Address: 0x10063c79c | FUN_10063c79c */

void FUN_10063c79c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10063c7c0 | FUN_10063c7c0 */

void FUN_10063c7c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10063ca88(param_3,param_4);
  return;
}



/* Address: 0x10063c7cc | FUN_10063c7cc */

void FUN_10063c7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10063cb20(param_2,param_3);
  return;
}



/* Address: 0x10063c7d8 | FUN_10063c7d8 */

void FUN_10063c7d8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10063c7fc | FUN_10063c7fc */

void FUN_10063c7fc(void)

{
  long *unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(*unaff_x20 + 0x10));
  return;
}



/* Address: 0x10063c824 | FUN_10063c824 */

void FUN_10063c824(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef040;
  _swift_allocObject(&DAT_100eef040,0x20,7);
  *(long *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063c958 | FUN_10063c958 */

void FUN_10063c958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7170 != -1) {
    _swift_once(&DAT_100fd7170,FUN_10061d99c);
  }
  uVar4 = DAT_101057c10;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef018;
  _swift_allocObject(&DAT_100eef018,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063ca88 | FUN_10063ca88 */

undefined8 FUN_10063ca88(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x38);
  uVar4 = uVar1;
  _swift_getObjectType(uVar1);
  lVar3 = DAT_100fd7138;
  _swift_unknownObjectRetain(uVar1);
  if (lVar3 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar5 = DAT_101057be8;
  FUN_10063dd74(DAT_101057be8,uVar4,PTR___type_metadata_for____100eae0c8 + 8,uVar2);
  _swift_unknownObjectRelease(uVar1);
  return uVar5;
}



/* Address: 0x10063cb20 | FUN_10063cb20 */

void FUN_10063cb20(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar3);
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar2 = DAT_101057be8;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_2,param_1,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  FUN_10063dd74(uVar2,uVar3,uVar4,uVar1);
  return;
}



/* Address: 0x10063cbcc | FUN_10063cbcc */

void FUN_10063cbcc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef0e0;
  _swift_allocObject(&DAT_100eef0e0,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063cd00 | FUN_10063cd00 */

void FUN_10063cd00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef090;
  _swift_allocObject(&DAT_100eef090,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063ce34 | FUN_10063ce34 */

void FUN_10063ce34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef068;
  _swift_allocObject(&DAT_100eef068,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063cf68 | FUN_10063cf68 */

void FUN_10063cf68(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eeeff0;
  _swift_allocObject(&DAT_100eeeff0,0x20,7);
  *(long *)(puVar5 + 0x10) = param_2;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(uVar4);
  (*pcVar7)(FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063d09c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10063d0a0 | FUN_10063d0a0 */

void FUN_10063d0a0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_100fd7138 != -1) {
    _swift_once(&DAT_100fd7138,FUN_10061d9bc);
  }
  uVar4 = DAT_101057be8;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100eef0b8;
  _swift_allocObject(&DAT_100eef0b8,0x20,7);
  *(long *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_errorRetain(uVar4);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar5,uVar2,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10063d1d4 | FUN_10063d1d4 */

void FUN_10063d1d4(void)

{
  FUN_10063c5ac();
  return;
}



/* Address: 0x10063d1e8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d1ec | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d1f0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d1f4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d1f8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d1fc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10063d200 | FUN_10063d200 */

undefined *
FUN_10063d200(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a8 = *(long *)(DVar1.unknown + -8);
  puVar8 = auStack_b0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  _swift_getObjectType();
  FUN_1006422fc();
  puVar3 = &DAT_100eef128;
  _swift_allocObject(&DAT_100eef128,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_5;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined **)(puVar3 + 0x28) = param_1;
  local_70 = FUN_10063d4b0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eef140;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_4);
  DVar4.unknown = param_1;
  _swift_retain();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10063d4d8();
  puVar3 = &DAT_100fd8270;
  FUN_1000f7830(&DAT_100fd8270,&DAT_100c6acd0);
  puVar5 = puVar3;
  FUN_10063d51c();
  Swift::SetAlgebra::_init(puVar8,&local_98,puVar3,puVar5,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(puVar8,DVar1.unknown);
  (**(code **)(lVar7 + 8))(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return param_1;
}



/* Address: 0x10063d3e0 | FUN_10063d3e0 */

/* WARNING: Removing unreachable block (ram,0x00010063d430) */

void FUN_10063d3e0(code *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  puVar1 = auStack_50 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_1)(puVar1);
  FUN_100646e88(puVar1,param_3,param_4);
  (**(code **)(lVar2 + 8))(puVar1,param_4);
  return;
}



/* Address: 0x10063d484 | FUN_10063d484 */

void FUN_10063d484(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10063d4b0 | FUN_10063d4b0 */

void FUN_10063d4b0(void)

{
  long unaff_x20;
  
  FUN_10063d3e0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10063d4bc | FUN_10063d4bc */

void FUN_10063d4bc(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10063d4d0 | FUN_10063d4d0 */

void FUN_10063d4d0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10063d4d8 | FUN_10063d4d8 */

void FUN_10063d4d8(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  
  if (DAT_100fd8268 != (undefined *)0x0) {
    return;
  }
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar2 = PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680;
  _swift_getWitnessTable
            (PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680,
             DVar1.unknown);
  DAT_100fd8268 = puVar2;
  return;
}



/* Address: 0x10063d51c | FUN_10063d51c */

void FUN_10063d51c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd8278 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd8270;
  FUN_1000f8b08(&DAT_100fd8270,&DAT_100c6acd0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fd8278 = puVar2;
  return;
}



/* Address: 0x10063d56c | FUN_10063d56c */

void FUN_10063d56c(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  FUN_10063dd74(param_1,in_x5,in_x6,in_x7);
  return;
}


