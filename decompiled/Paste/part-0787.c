/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008aa66c | FUN_1008aa66c */

void FUN_1008aa66c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1f);
  *(undefined8 *)((long)param_1 + 0x27) = *(undefined8 *)((long)param_2 + 0x27);
  *(undefined8 *)((long)param_1 + 0x1f) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1008aa680 | thunk_FUN_1008aa7e4 */

void thunk_FUN_1008aa7e4(void)

{
  FUN_1008aa7e4();
  return;
}



/* Address: 0x1008aa684 | thunk_FUN_1008aa858 */

int thunk_FUN_1008aa858(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2f) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008aa688 | thunk_FUN_1008aa8a0 */

void thunk_FUN_1008aa8a0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
    *(undefined2 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x2f) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x2f) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008aa68c | FUN_1008aa68c */

undefined1  [16] FUN_1008aa68c(void)

{
  return ZEXT816(0x100f0b790);
}



/* Address: 0x1008aa69c | FUN_1008aa69c */

void FUN_1008aa69c(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_release(param_1[3]);
  return;
}



/* Address: 0x1008aa6cc | FUN_1008aa6cc */

undefined8 * FUN_1008aa6cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[3] = uVar2;
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined4 *)((long)param_1 + 0x2b) = *(undefined4 *)((long)param_2 + 0x2b);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1008aa740 | FUN_1008aa740 */

undefined8 * FUN_1008aa740(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined4 *)((long)param_1 + 0x24) = *(undefined4 *)((long)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined2 *)((long)param_1 + 0x2c) = *(undefined2 *)((long)param_2 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x2e) = *(undefined1 *)((long)param_2 + 0x2e);
  return param_1;
}



/* Address: 0x1008aa7e4 | FUN_1008aa7e4 */

undefined8 * FUN_1008aa7e4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar1);
  param_1[4] = param_2[4];
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
  *(undefined2 *)((long)param_1 + 0x2c) = *(undefined2 *)((long)param_2 + 0x2c);
  *(undefined1 *)((long)param_1 + 0x2e) = *(undefined1 *)((long)param_2 + 0x2e);
  return param_1;
}



/* Address: 0x1008aa858 | FUN_1008aa858 */

int FUN_1008aa858(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x2f) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008aa8a0 | FUN_1008aa8a0 */

void FUN_1008aa8a0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)((long)param_1 + 0x2e) = 0;
    *(undefined2 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x2f) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x2f) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008aa8f4 | FUN_1008aa8f4 */

undefined1  [16] FUN_1008aa8f4(void)

{
  return ZEXT816(0x100f0b810);
}



/* Address: 0x1008aa904 | FUN_1008aa904 */

undefined1  [16] FUN_1008aa904(void)

{
  return ZEXT816(0x100f0b890);
}



/* Address: 0x1008aa914 | FUN_1008aa914 */

undefined1  [16] FUN_1008aa914(void)

{
  return ZEXT816(0x100f0b910);
}



/* Address: 0x1008aa924 | FUN_1008aa924 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008aa924(void)

{
  return ZEXT816(0x100fea4e0);
}



/* Address: 0x1008aa944 | FUN_1008aa944 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008aa944(void)

{
  return ZEXT816(0x100fea5a0);
}



/* Address: 0x1008aa964 | FUN_1008aa964 */

undefined1  [16] FUN_1008aa964(void)

{
  return ZEXT816(0x100f0b9a8);
}



/* Address: 0x1008aa974 | FUN_1008aa974 */

undefined1  [16] FUN_1008aa974(void)

{
  return ZEXT816(0x100f0ba38);
}



/* Address: 0x1008aa984 | thunk_FUN_10002b870 */

int thunk_FUN_10002b870(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfa < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 5) {
      iVar2 = 4;
    }
    if (param_2 + 5 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10002b8ec;
        goto LAB_10002b8d0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10002b8d0:
      return ((uint)*param_1 | uVar1 << 8) - 5;
    }
  }
LAB_10002b8ec:
  iVar2 = *param_1 - 6;
  if (*param_1 < 6) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1008aa988 | thunk_FUN_10002b900 */

void thunk_FUN_10002b900(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 5) {
    uVar3 = 4;
  }
  if (param_3 + 5 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfa < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfb) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10002b980;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10002b980:
      *param_1 = (char)param_2 + '\x05';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfb >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfb);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1008aa98c | FUN_1008aa98c */

undefined1  [16] FUN_1008aa98c(void)

{
  return ZEXT816(0x100f0bac8);
}



/* Address: 0x1008aa99c | thunk_FUN_1008aa9a0 */

void thunk_FUN_1008aa9a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea618 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81e58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81e58,&DAT_100f0bac8);
  DAT_100fea618 = pTVar1;
  return;
}



/* Address: 0x1008aa9a0 | FUN_1008aa9a0 */

void FUN_1008aa9a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea618 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81e58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81e58,&DAT_100f0bac8);
  DAT_100fea618 = pTVar1;
  return;
}



/* Address: 0x1008aa9e0 | thunk_FUN_1008aa9e4 */

void thunk_FUN_1008aa9e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea620 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81ec0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81ec0,&DAT_100f0ba38);
  DAT_100fea620 = pTVar1;
  return;
}



/* Address: 0x1008aa9e4 | FUN_1008aa9e4 */

void FUN_1008aa9e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea620 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81ec0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81ec0,&DAT_100f0ba38);
  DAT_100fea620 = pTVar1;
  return;
}



/* Address: 0x1008aaa24 | thunk_FUN_1008aaa28 */

void thunk_FUN_1008aaa28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81f28,&DAT_100f0b9a8);
  DAT_100fea628 = pTVar1;
  return;
}



/* Address: 0x1008aaa28 | FUN_1008aaa28 */

void FUN_1008aaa28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea628 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81f28;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81f28,&DAT_100f0b9a8);
  DAT_100fea628 = pTVar1;
  return;
}



/* Address: 0x1008aaa68 | thunk_FUN_1008aaa6c */

void thunk_FUN_1008aaa6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008aaa6c | FUN_1008aaa6c */

void FUN_1008aaa6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008aaaa0 | thunk_FUN_1008a8bf4 */

void thunk_FUN_1008a8bf4(void)

{
  thunk_FUN_1008a8bf4();
  return;
}



/* Address: 0x1008aaaa4 | thunk_FUN_1008a8c74 */

void thunk_FUN_1008a8c74(void)

{
  thunk_FUN_1008a8c74();
  return;
}



/* Address: 0x1008aaaa8 | thunk_FUN_1008a9f9c */

void thunk_FUN_1008a9f9c(void)

{
  thunk_FUN_1008a9f9c();
  return;
}



/* Address: 0x1008aaaac | thunk_FUN_1008aa8a0 */

void thunk_FUN_1008aa8a0(void)

{
  thunk_FUN_1008aa8a0();
  return;
}



/* Address: 0x1008aaab0 | thunk_FUN_10002b900 */

void thunk_FUN_10002b900(void)

{
  thunk_FUN_10002b900();
  return;
}



/* Address: 0x1008aaab4 | thunk_FUN_1008a8b40 */

void thunk_FUN_1008a8b40(void)

{
  FUN_1008a8b40();
  return;
}



/* Address: 0x1008aaab8 | thunk_FUN_1008aa69c */

void thunk_FUN_1008aa69c(void)

{
  thunk_FUN_1008aa69c();
  return;
}



/* Address: 0x1008aaabc | thunk_FUN_1008aa6cc */

void thunk_FUN_1008aa6cc(void)

{
  thunk_FUN_1008aa6cc();
  return;
}



/* Address: 0x1008aaac0 | thunk_FUN_1008aa740 */

void thunk_FUN_1008aa740(void)

{
  thunk_FUN_1008aa740();
  return;
}



/* Address: 0x1008aaac4 | thunk_FUN_1008aa7e4 */

void thunk_FUN_1008aa7e4(void)

{
  thunk_FUN_1008aa7e4();
  return;
}



/* Address: 0x1008aaac8 | thunk_FUN_1008aa858 */

void thunk_FUN_1008aa858(void)

{
  thunk_FUN_1008aa858();
  return;
}



/* Address: 0x1008aaacc | thunk_FUN_10002b870 */

void thunk_FUN_10002b870(void)

{
  thunk_FUN_10002b870();
  return;
}



/* Address: 0x1008aaad0 | thunk_FUN_1008a8bb0 */

void thunk_FUN_1008a8bb0(void)

{
  thunk_FUN_1008a8bb0();
  return;
}



/* Address: 0x1008aaad4 | thunk_FUN_1008a8c38 */

void thunk_FUN_1008a8c38(void)

{
  thunk_FUN_1008a8c38();
  return;
}



/* Address: 0x1008aaad8 | thunk_FUN_1008aa04c */

void thunk_FUN_1008aa04c(void)

{
  thunk_FUN_1008aa04c();
  return;
}



/* Address: 0x1008aaadc | thunk_FUN_1008aaa6c */

void thunk_FUN_1008aaa6c(void)

{
  thunk_FUN_1008aaa6c();
  return;
}



/* Address: 0x1008aaae0 | FUN_1008aaae0 */

void FUN_1008aaae0(undefined8 param_1,undefined8 param_2)

{
  FUN_1008aabd0(param_1,param_2,FUN_1008abfd4);
  return;
}



/* Address: 0x1008aaaec | FUN_1008aaaec */

void FUN_1008aaaec(void)

{
  FUN_1008ac01c();
  _swift_retain();
  return;
}



/* Address: 0x1008aab00 | FUN_1008aab00 */

void FUN_1008aab00(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Address: 0x1008aab34 | FUN_1008aab34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001008aab88 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1008aab34(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  undefined *puVar2;
  __int64 _Var3;
  undefined8 local_58;
  
  puVar2 = &DAT_100c81f58;
  local_58 = param_8;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c81f58,&local_58);
  _Var3 = Swift::Array<undefined>::get_count(puVar2,puVar2);
  if (0 < _Var3) {
    *param_1 = param_2;
    param_1[1] = param_3;
    *(undefined1 *)(param_1 + 2) = param_4;
    param_1[3] = param_5;
    param_1[4] = param_6;
    param_1[5] = param_7;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008aabc4);
  (*pcVar1)();
}



/* Address: 0x1008aabc4 | FUN_1008aabc4 */

void FUN_1008aabc4(undefined8 param_1,undefined8 param_2)

{
  FUN_1008aabd0(param_1,param_2,FUN_1008abf0c);
  return;
}



/* Address: 0x1008aabd0 | FUN_1008aabd0 */

undefined8 FUN_1008aabd0(undefined8 param_1,undefined8 *param_2,code *param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined1 local_28;
  
  (*param_3)();
  local_30 = param_2[1];
  local_28 = *(undefined1 *)(param_2 + 2);
  _swift_release(*param_2);
  FUN_10089aeb8(&local_30);
  local_38 = param_2[3];
  FUN_10089aeec(&local_38);
  _swift_release(param_2[5]);
  return param_1;
}



/* Address: 0x1008aac34 | FUN_1008aac34 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001008aae58 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1008aac34(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  __int64 _Var7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  String SVar10;
  String separator;
  undefined8 local_c8 [3];
  undefined8 local_b0;
  long lStack_a8;
  code *local_a0 [2];
  undefined8 local_90;
  undefined8 local_70 [2];
  
  pcVar3 = (code *)&DAT_100fe9598;
  FUN_1000f7830(&DAT_100fe9598,&DAT_100c7fd10);
  _swift_initStaticObject();
  uVar8 = *(undefined8 *)(unaff_x20 + 0x50);
  puVar4 = &DAT_100c81f58;
  local_c8[0] = param_2;
  local_90 = uVar8;
  local_70[0] = uVar8;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c81f58,local_70);
  uVar5 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  FUN_1000f7830(&DAT_100fea3a8,&DAT_100c81b18);
  puVar6 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar5);
  FUN_1008ac574(&DAT_100fea838,puVar6);
  (extension_Swift)::Swift::Sequence::_flatMap();
  local_a0[0] = pcVar3;
  FUN_10089fc04();
  pcVar3 = local_a0[0];
  FUN_1008ac574(&DAT_100fea3b0,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar10.bridgeObject = (void *)0xe100000000000000;
  SVar10.str = (char *)0x2c;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar10);
  _swift_bridgeObjectRelease(pcVar3);
  FUN_10089f74c(0x697463656e6e6f43,0xea00000000006e6f,SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  puVar6 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  local_c8[0] = param_2;
  local_90 = uVar8;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,uVar5);
  pcVar3 = FUN_1008ac5c0;
  FUN_1005f45bc(FUN_1008ac5c0,local_a0,uVar5,PTR___type_metadata_for_Swift_String_100eac208,
                PTR___type_metadata_for_Swift_Never_100eadc38,puVar6,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x2c;
  local_a0[0] = pcVar3;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(pcVar3);
  FUN_10089f74c(0x65646172677055,&DAT_e700000000000000,SVar10.str,SVar10.bridgeObject);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  _Var7 = Swift::Array<undefined>::get_endIndex(SVar10.str,puVar4);
  if (_Var7 != 0) {
    lVar9 = 0;
    do {
      Swift::Array<undefined>::get_subscript(local_a0,lVar9,param_2,puVar4);
      lVar1 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008aaef8);
        (*pcVar3)();
      }
      FUN_100076508(local_a0,local_c8);
      lVar2 = lStack_a8;
      uVar5 = local_b0;
      FUN_100004640(local_c8,local_b0);
      (**(code **)(lVar2 + 0x20))(param_1 + 8,uVar5,lVar2);
      FUN_100004594(local_c8);
      _Var7 = Swift::Array<undefined>::get_endIndex(_Var7,puVar4);
      lVar9 = lVar9 + 1;
    } while (lVar1 != _Var7);
  }
  return;
}



/* Address: 0x1008aaef8 | FUN_1008aaef8 */

void FUN_1008aaef8(long param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  undefined1 auStack_58 [24];
  
  lVar5 = *unaff_x20;
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  _swift_getObjectType();
  lVar6 = *(long *)(lVar5 + 0x50);
  lVar5 = lVar6;
  FUN_100893ef4();
  uVar4 = unaff_x20[0x10];
  unaff_x20[0x10] = lVar2;
  _swift_release();
  FUN_100627f08();
  uVar3 = uVar4;
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x60))();
  _swift_unknownObjectRelease(uVar4);
  if ((uVar3 & 1) != 0) {
    _swift_beginAccess(unaff_x20 + 8,auStack_58,0x21,0);
    uVar1 = 0;
    FUN_1008ac9a4(0,lVar6);
    FUN_1008acf0c();
    _swift_endAccess(auStack_58);
    if ((uVar1 & 0xff) != 1) {
      FUN_1008aafdc(param_1);
    }
  }
  return;
}



/* Address: 0x1008aafdc | FUN_1008aafdc */

void FUN_1008aafdc(void)

{
  undefined8 *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 local_90;
  undefined7 uStack_88;
  undefined1 uStack_81;
  uint uStack_80;
  undefined2 uStack_7c;
  undefined1 uStack_7a;
  undefined1 local_79;
  undefined8 auStack_78 [9];
  
  uVar2 = *unaff_x20;
  local_90 = unaff_x20[2];
  uStack_88 = (undefined7)unaff_x20[3];
  uStack_81 = (undefined1)((ulong)unaff_x20[3] >> 0x38);
  uStack_80 = (uint)*(byte *)(unaff_x20 + 4);
  uStack_7c = 0;
  uStack_7a = 0;
  local_79 = 0;
  FUN_10066a260(auStack_78,&local_90,uVar2,&PTR_PTR_100fea6d8);
  FUN_100626ebc(auStack_78,0);
  puVar1 = auStack_78;
  FUN_1005e70f4();
  FUN_1006116e8();
  local_90 = *puVar1;
  uStack_80 = *(uint *)(puVar1 + 2);
  uStack_7c = *(undefined2 *)((long)puVar1 + 0x14);
  uStack_7a = *(undefined1 *)((long)puVar1 + 0x16);
  uStack_88 = (undefined7)puVar1[1];
  uStack_81 = (undefined1)((ulong)puVar1[1] >> 0x38);
  local_79 = 1;
  FUN_10066a260(auStack_78,&local_90,uVar2,&PTR_PTR_100fea6d8);
  FUN_100626ebc(auStack_78,0);
  FUN_1005e70f4(auStack_78);
  local_90 = 0;
  uStack_88 = 0;
  uStack_81 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_7a = 0;
  local_79 = 2;
  FUN_10066a260(auStack_78,&local_90,uVar2,&PTR_PTR_100fea6d8);
  FUN_10062dee8(auStack_78,0);
  FUN_1005e70f4(auStack_78);
  return;
}



/* Address: 0x1008ab0f0 | thunk_FUN_1008ac02c */

void thunk_FUN_1008ac02c(void)

{
  FUN_1008ac02c();
  return;
}



/* Address: 0x1008ab0f4 | FUN_1008ab0f4 */

void FUN_1008ab0f4(undefined8 param_1)

{
  uint uVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 8,auStack_48,0x21,0);
  uVar1 = 0;
  FUN_1008ac9a4(0,*(undefined8 *)(lVar2 + 0x50));
  FUN_1008acf0c();
  _swift_endAccess(auStack_48);
  if ((uVar1 & 0xff) != 1) {
    FUN_1008aafdc(param_1);
  }
  return;
}



/* Address: 0x1008ab16c | FUN_1008ab16c */

void FUN_1008ab16c(String *param_1,long param_2)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  
  pcVar1 = *(char **)(param_2 + 0x18);
  pvVar2 = *(void **)(param_2 + 0x20);
  FUN_100004640(param_2,pcVar1);
  (**(code **)((long)pvVar2 + 0x10))();
  SVar3.bridgeObject = pvVar2;
  SVar3.str = pcVar1;
  SVar3 = Swift::String::lowercased(SVar3);
  _swift_bridgeObjectRelease(pvVar2);
  *param_1 = SVar3;
  return;
}



/* Address: 0x1008ab1dc | FUN_1008ab1dc */

void FUN_1008ab1dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_a8 [64];
  undefined1 auStack_68 [24];
  
  lVar6 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 8,auStack_68,0,0);
  lVar1 = 0;
  FUN_1008ac9a4(0,*(undefined8 *)(lVar6 + 0x50));
  lVar7 = *(long *)(lVar1 + -8);
  lVar5 = lVar1;
  (**(code **)(lVar7 + 0x10))(auStack_a8,unaff_x20 + 8,lVar1);
  lVar6 = lVar1;
  FUN_1008ad178();
  (**(code **)(lVar7 + 8))(auStack_a8,lVar1);
  if (lVar6 == 0) {
    FUN_100626ebc(param_2,param_3);
  }
  else if (param_3 == 0) {
    _swift_errorRelease(lVar6);
  }
  else {
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar7 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) == 0) {
      puVar4 = &DAT_100f0bbc0;
      _swift_allocObject(&DAT_100f0bbc0,0x20,7);
      *(long *)(puVar4 + 0x10) = param_3;
      *(long *)(puVar4 + 0x18) = lVar6;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(lVar6);
      (*pcVar8)(FUN_1008777d0,puVar4,uVar2,lVar1);
      _swift_errorRelease(lVar6);
      _swift_release(puVar4);
    }
    else {
      lVar1 = lVar6;
      FUN_1005de8f4(lVar6);
      FUN_1006486f8();
      _swift_errorRelease(lVar6);
      FUN_100004550(lVar1,lVar7);
      _swift_bridgeObjectRelease(lVar5);
    }
  }
  return;
}



/* Address: 0x1008ab35c | FUN_1008ab35c */

void FUN_1008ab35c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 8,&local_68,0x21,0);
  uVar2 = 0;
  FUN_1008ac9a4(0,*(undefined8 *)(lVar4 + 0x50));
  uVar3 = param_2;
  FUN_1008ad2ac(param_2,uVar2);
  _swift_endAccess(&local_68);
  uVar1 = (uint)uVar3 & 0xff;
  if (uVar1 == 1) {
    FUN_100626ce0(param_2);
  }
  else if (uVar1 != 2) {
    thunk_FUN_10066a0e4(&local_68,param_2,lVar4,&PTR_PTR_100fea678);
    FUN_1008ab464(param_1,local_68,uStack_60,CONCAT44(local_54,local_58));
    FUN_100877974(local_68,uStack_60,(ulong)CONCAT34((undefined3)local_54,local_58),local_54._3_1_);
  }
  return;
}



/* Address: 0x1008ab464 | FUN_1008ab464 */

void FUN_1008ab464(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined8 uVar9;
  undefined1 auStack_b8 [40];
  undefined8 local_90 [5];
  undefined8 local_68;
  undefined8 uStack_60;
  ushort local_58;
  
  lVar8 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 8,auStack_b8,0x21,0);
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  uVar3 = 0;
  FUN_1008ac9a4(0,uVar9);
  FUN_1008ad510(local_90,param_2,param_3,param_4,uVar3);
  puVar4 = auStack_b8;
  _swift_endAccess(puVar4);
  uVar1 = local_58 >> 8;
  if (uVar1 < 0xff) {
    if (uVar1 == 0) {
      lVar8 = unaff_x20[0x10];
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ab690);
        (*pcVar2)();
      }
      _swift_retain(lVar8);
      FUN_100646f54(local_90[0],lVar8,uVar9);
      _swift_release(lVar8);
      FUN_100626c9c(local_90[0]);
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      _swift_retain(uVar3);
      FUN_1006287b8();
      _swift_release(uVar3);
      _swift_errorRelease(local_90[0]);
    }
    else if (uVar1 == 1) {
      FUN_100076508(local_90,auStack_b8);
      FUN_1008ab9ac(param_1,auStack_b8,local_68,uStack_60,local_58);
      _swift_bridgeObjectRelease(uStack_60);
      _swift_release(local_68);
      FUN_100004594(auStack_b8);
    }
    else {
      pcVar2 = (code *)unaff_x20[6];
      lVar8 = *(long *)(param_1 + 0x20);
      FUN_100627f08();
      puVar5 = puVar4;
      (*pcVar2)();
      _swift_unknownObjectRelease(puVar4);
      uVar3 = *(undefined8 *)(lVar8 + 0x30);
      uVar6 = uVar3;
      _swift_unknownObjectRetain(uVar3);
      FUN_100647054();
      _swift_release(puVar5);
      _swift_unknownObjectRelease(uVar3);
      FUN_10064311c();
      _swift_release(uVar6);
      puVar7 = &DAT_100f0bdf8;
      _swift_allocObject(&DAT_100f0bdf8,0x20,7);
      *(long **)(puVar7 + 0x10) = unaff_x20;
      *(long *)(puVar7 + 0x18) = param_1;
      _swift_retain();
      _swift_retain(param_1);
      FUN_100642e24(FUN_1008ac3a0,puVar7,uVar3,uVar9);
      _swift_release(uVar3);
      _swift_release(puVar7);
    }
  }
  return;
}



/* Address: 0x1008ab690 | FUN_1008ab690 */

void FUN_1008ab690(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *unaff_x20;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = unaff_x20[0x10];
  if (lVar3 != 0) {
    uVar2 = *(undefined8 *)(*unaff_x20 + 0x50);
    _swift_retain(lVar3);
    FUN_100646f54(param_2,lVar3,uVar2);
    _swift_release(lVar3);
    FUN_100626c9c(param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ab6f8);
  (*pcVar1)();
}



/* Address: 0x1008ab6f8 | FUN_1008ab6f8 */

void FUN_1008ab6f8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(*unaff_x20 + 0x50);
  lVar11 = *(long *)(lVar7 + -8);
  lVar8 = (long)&uStack_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  FUN_1008ae920(0xff,lVar7);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar10 = (undefined8 *)
            (lVar8 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                     0xfffffffffffffff0));
  _swift_beginAccess(unaff_x20 + 8,auStack_78,0x21,0);
  uVar5 = 0;
  FUN_1008ac9a4(0,lVar7);
  FUN_1008adc60(puVar10,param_2,uVar5);
  _swift_endAccess(auStack_78);
  puVar6 = puVar10;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar10,1,lVar4);
  if ((int)puVar6 == 1) {
    return;
  }
  puVar6 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar4);
  iVar3 = (int)puVar6;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      (**(code **)(lVar11 + 0x20))(lVar8,puVar10,lVar7);
      lVar4 = unaff_x20[0x10];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ab9a8);
        (*pcVar1)();
      }
      _swift_retain(lVar4);
      FUN_100646e88(lVar8,lVar4,lVar7);
      _swift_release(lVar4);
      uVar5 = *(undefined8 *)(param_1 + 0x20);
      _swift_retain(uVar5);
      FUN_1006287b8();
      _swift_release(uVar5);
LAB_1008ab96c:
      (**(code **)(lVar11 + 8))(lVar8,lVar7);
      return;
    }
    lVar4 = unaff_x20[0x10];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ab9a0);
      (*pcVar1)();
    }
    uVar9 = *puVar10;
    _swift_retain(lVar4);
    FUN_100646f54(uVar9,lVar4,lVar7);
    _swift_release(lVar4);
    FUN_100626c9c(uVar9);
    FUN_1008abd60(param_1);
  }
  else {
    if (iVar3 != 2) {
      (**(code **)(lVar11 + 0x20))(lVar8,puVar10,lVar7);
      lVar4 = unaff_x20[0x10];
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ab9ac);
        (*pcVar1)();
      }
      _swift_retain(lVar4);
      FUN_100646e88(lVar8,lVar4,lVar7);
      _swift_release(lVar4);
      FUN_1008abd60(param_1);
      goto LAB_1008ab96c;
    }
    lVar4 = unaff_x20[0x10];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ab9a4);
      (*pcVar1)();
    }
    uVar9 = *puVar10;
    _swift_retain(lVar4);
    FUN_100646f54(uVar9,lVar4,lVar7);
    _swift_release(lVar4);
    FUN_100626c9c(uVar9);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar5);
    FUN_1006287b8();
    _swift_release(uVar5);
  }
  _swift_errorRelease(uVar9);
  return;
}



/* Address: 0x1008ab9ac | FUN_1008ab9ac */

void FUN_1008ab9ac(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_88 [40];
  
  lVar10 = *unaff_x20;
  lVar9 = *(long *)(param_1 + 0x20);
  lVar1 = param_1;
  uVar7 = param_2;
  FUN_100627f08();
  lVar2 = lVar9;
  FUN_1008abb78(lVar9);
  FUN_100076688(param_2,auStack_88);
  puVar3 = &DAT_100f0be20;
  _swift_allocObject(&DAT_100f0be20,0x61,7);
  uVar8 = *(undefined8 *)(lVar10 + 0x50);
  *(undefined8 *)(puVar3 + 0x10) = uVar8;
  FUN_100076508(auStack_88,puVar3 + 0x18);
  *(long *)(puVar3 + 0x40) = lVar1;
  *(undefined8 *)(puVar3 + 0x48) = uVar7;
  *(undefined8 *)(puVar3 + 0x50) = param_3;
  *(undefined8 *)(puVar3 + 0x58) = param_4;
  puVar3[0x60] = param_5;
  puVar4 = &DAT_100f0be48;
  _swift_allocObject(&DAT_100f0be48,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(code **)(puVar4 + 0x18) = FUN_1008ac404;
  *(undefined **)(puVar4 + 0x20) = puVar3;
  _swift_unknownObjectRetain(lVar1);
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(param_4);
  pcVar5 = FUN_100645f18;
  thunk_FUN_10064a5bc(FUN_100645f18,puVar4,uVar8);
  _swift_release(lVar2);
  _swift_release(puVar4);
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  uVar6 = uVar7;
  _swift_unknownObjectRetain(uVar7);
  FUN_100647054();
  _swift_release(pcVar5);
  _swift_unknownObjectRelease(uVar7);
  FUN_10064311c();
  _swift_release(uVar6);
  puVar3 = &DAT_100f0be70;
  _swift_allocObject(&DAT_100f0be70,0x20,7);
  *(long **)(puVar3 + 0x10) = unaff_x20;
  *(long *)(puVar3 + 0x18) = param_1;
  _swift_retain();
  _swift_retain(param_1);
  FUN_100642e24(thunk_FUN_1008ac3a0,puVar3,uVar7,uVar8);
  _swift_unknownObjectRelease(lVar1);
  _swift_release(uVar7);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1008abb78 | FUN_1008abb78 */

void FUN_1008abb78(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(unaff_x20 + 0x28);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    _swift_getObjectType(*(undefined8 *)(param_1 + 0x30));
    FUN_10063dc68();
  }
  else {
    FUN_100892704(0,lVar6,0);
    lVar7 = lVar7 + 0x28;
    do {
      uVar10 = *(undefined8 *)(lVar7 + -8);
      uVar2 = uVar10;
      _swift_unknownObjectRetain();
      FUN_10062c4e4();
      _swift_unknownObjectRelease(uVar10);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_100892704(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      lVar7 = lVar7 + 0x10;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 8 + 0x20) = uVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar7 = *(long *)(param_1 + 0x30);
    _swift_getObjectType();
    FUN_100893ef4();
    lVar6 = *(long *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(ulong *)(lVar7 + 0x20);
    uVar3 = uVar9;
    _swift_getObjectType();
    uVar4 = uVar3;
    (**(code **)(lVar6 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f0be98;
      _swift_allocObject(&DAT_100f0be98,0x30,7);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(ulong *)(puVar5 + 0x20) = uVar9;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_bridgeObjectRetain(puVar1);
      _swift_unknownObjectRetain(uVar9);
      (*pcVar8)(FUN_100899f28,puVar5,uVar3,lVar6);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar5);
    }
    else {
      FUN_1008b2cb0(lVar7,puVar1,uVar9,lVar6);
      _swift_bridgeObjectRelease(puVar1);
    }
  }
  return;
}


