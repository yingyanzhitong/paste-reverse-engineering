/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100894590 | FUN_100894590 */

void FUN_100894590(undefined8 *param_1)

{
  FUN_100892a8c(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1008945a4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1008945a8 | thunk_FUN_1008945ac */

void thunk_FUN_1008945ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9a08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80660,&DAT_100f09b58);
  DAT_100fe9a08 = pTVar1;
  return;
}



/* Address: 0x1008945ac | FUN_1008945ac */

void FUN_1008945ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9a08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80660;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80660,&DAT_100f09b58);
  DAT_100fe9a08 = pTVar1;
  return;
}



/* Address: 0x1008945ec | FUN_1008945ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008945ec(void)

{
  return ZEXT816(0x100fe9ac8);
}



/* Address: 0x10089460c | FUN_10089460c */

void FUN_10089460c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100894620 | FUN_100894620 */

undefined1  [16] FUN_100894620(void)

{
  return ZEXT816(0x100f09b58);
}



/* Address: 0x100894630 | FUN_100894630 */

void FUN_100894630(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10089463c | FUN_10089463c */

undefined1  [16] FUN_10089463c(void)

{
  return ZEXT816(0x100f09bf8);
}



/* Address: 0x10089464c | FUN_10089464c */

undefined1  [16] FUN_10089464c(void)

{
  return ZEXT816(0x100f09c88);
}



/* Address: 0x10089465c | FUN_10089465c */

undefined1  [16] FUN_10089465c(void)

{
  return ZEXT816(0x100f09d18);
}



/* Address: 0x10089466c | FUN_10089466c */

undefined1  [16] FUN_10089466c(void)

{
  return ZEXT816(0x100f09da8);
}



/* Address: 0x10089467c | FUN_10089467c */

void FUN_10089467c(ulong *param_1)

{
  char cVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x42);
  if (1 < *(byte *)((long)param_1 + 0x42)) {
    uVar2 = (int)*param_1 + 2;
  }
  if (uVar2 == 0) {
    cVar1 = *(char *)((long)param_1 + 0x41);
    if (cVar1 == '\x02') {
      FUN_100004594();
      return;
    }
    if (cVar1 == '\x01') {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
        return;
      }
    }
    else if (cVar1 == '\0') {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      return;
    }
  }
  return;
}



/* Address: 0x10089473c | FUN_10089473c */

void FUN_10089473c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (uint)*(byte *)((long)param_2 + 0x42);
  if (1 < *(byte *)((long)param_2 + 0x42)) {
    uVar5 = (int)*param_2 + 2;
  }
  if (uVar5 != 1) {
    if (uVar5 == 0) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar7 = param_2[3];
        param_1[3] = uVar7;
        (*(code *)**(undefined8 **)(uVar7 - 8))();
      }
      else if (cVar2 == '\x01') {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        *param_1 = uVar7;
        param_1[1] = uVar6;
        param_1[2] = param_2[2];
        *(int *)(param_1 + 3) = (int)param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        cVar1 = (char)param_2[4];
        _swift_retain(uVar7 & 0x3fffffffffffffff);
        _swift_retain(uVar6);
        if (cVar1 == '\x04') {
          uVar7 = param_2[4];
          uVar8 = param_2[7];
          uVar6 = param_2[6];
          param_1[5] = param_2[5];
          param_1[4] = uVar7;
          param_1[7] = uVar8;
          param_1[6] = uVar6;
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar7 = param_2[5];
          if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar7 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar7;
          }
          else {
            uVar6 = param_2[6];
            param_1[5] = uVar7;
            param_1[6] = uVar6;
            _swift_retain(uVar7 & 0x3fffffffffffffff);
          }
          param_1[7] = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
      }
      else {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        uVar8 = param_2[2];
        uVar3 = *(undefined1 *)((long)param_2 + 0x16);
        uVar4 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
        *param_1 = uVar7;
        param_1[1] = uVar6;
        *(undefined1 *)((long)param_1 + 0x16) = uVar3;
        *(short *)((long)param_1 + 0x14) = (short)uVar4;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return;
    }
    uVar7 = param_2[4];
    uVar8 = param_2[7];
    uVar6 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar7;
    param_1[7] = uVar8;
    param_1[6] = uVar6;
    *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
    uVar8 = *param_2;
    uVar6 = param_2[3];
    uVar7 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar6;
    param_1[2] = uVar7;
    return;
  }
  *(char *)param_1 = (char)*param_2;
  *(undefined1 *)((long)param_1 + 0x42) = 1;
  return;
}



/* Address: 0x1008948ec | FUN_1008948ec */

void FUN_1008948ec(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 != param_2) {
    uVar5 = (uint)*(byte *)((long)param_1 + 0x42);
    if (1 < *(byte *)((long)param_1 + 0x42)) {
      uVar5 = (int)*param_1 + 2;
    }
    if (uVar5 == 0) {
      cVar2 = *(char *)((long)param_1 + 0x41);
      if (cVar2 == '\x02') {
        FUN_100004594();
      }
      else if (cVar2 == '\x01') {
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] != '\x04') &&
           (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
          _swift_release(param_1[5] & 0x3fffffffffffffff);
        }
      }
      else if (cVar2 == '\0') {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      }
    }
    uVar5 = (uint)*(byte *)((long)param_2 + 0x42);
    if (1 < *(byte *)((long)param_2 + 0x42)) {
      uVar5 = (int)*param_2 + 2;
    }
    if (uVar5 == 1) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
    else if (uVar5 == 0) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar7 = param_2[3];
        param_1[3] = uVar7;
        (*(code *)**(undefined8 **)(uVar7 - 8))();
      }
      else if (cVar2 == '\x01') {
        uVar6 = *param_2;
        *param_1 = uVar6;
        uVar8 = param_2[1];
        param_1[1] = uVar8;
        *(int *)(param_1 + 2) = (int)param_2[2];
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
        uVar7 = param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        *(int *)(param_1 + 3) = (int)uVar7;
        cVar1 = (char)param_2[4];
        _swift_retain(uVar6 & 0x3fffffffffffffff);
        _swift_retain(uVar8);
        if (cVar1 == '\x04') {
          uVar6 = param_2[5];
          uVar7 = param_2[4];
          uVar9 = param_2[7];
          uVar8 = param_2[6];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[5] = uVar6;
          param_1[4] = uVar7;
          param_1[7] = uVar9;
          param_1[6] = uVar8;
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar7 = param_2[5];
          if (((uVar7 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar7 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar7;
          }
          else {
            param_1[5] = uVar7;
            param_1[6] = param_2[6];
            _swift_retain(uVar7 & 0x3fffffffffffffff);
          }
          uVar7 = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[7] = uVar7;
        }
      }
      else {
        uVar7 = *param_2;
        uVar6 = param_2[1];
        uVar8 = param_2[2];
        uVar3 = *(undefined1 *)((long)param_2 + 0x16);
        uVar4 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
        *param_1 = uVar7;
        param_1[1] = uVar6;
        *(undefined1 *)((long)param_1 + 0x16) = uVar3;
        *(short *)((long)param_1 + 0x14) = (short)uVar4;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    else {
      uVar7 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar7;
      uVar6 = param_2[3];
      uVar7 = param_2[2];
      uVar9 = param_2[5];
      uVar8 = param_2[4];
      uVar11 = param_2[7];
      uVar10 = param_2[6];
      *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
      param_1[5] = uVar9;
      param_1[4] = uVar8;
      param_1[7] = uVar11;
      param_1[6] = uVar10;
      param_1[3] = uVar6;
      param_1[2] = uVar7;
    }
  }
  return;
}



/* Address: 0x100894b80 | FUN_100894b80 */

void FUN_100894b80(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100894ba4 | FUN_100894ba4 */

void FUN_100894ba4(ulong *param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)((long)param_1 + 0x42);
    if (1 < *(byte *)((long)param_1 + 0x42)) {
      uVar2 = (int)*param_1 + 2;
    }
    if (uVar2 == 0) {
      cVar1 = *(char *)((long)param_1 + 0x41);
      if (cVar1 == '\x02') {
        FUN_100004594();
      }
      else if (cVar1 == '\x01') {
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] != '\x04') &&
           (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
          _swift_release(param_1[5] & 0x3fffffffffffffff);
        }
      }
      else if (cVar1 == '\0') {
        FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      }
    }
    uVar2 = (uint)*(byte *)((long)param_2 + 0x42);
    if (1 < *(byte *)((long)param_2 + 0x42)) {
      uVar2 = (int)*param_2 + 2;
    }
    if (uVar2 == 1) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return;
    }
    if (uVar2 == 0) {
      uVar3 = param_2[4];
      uVar5 = param_2[7];
      uVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      *(short *)(param_1 + 8) = (short)param_2[8];
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return;
    }
    uVar3 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
    uVar5 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
  }
  return;
}



/* Address: 0x100894cf0 | FUN_100894cf0 */

int FUN_100894cf0(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x43) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)((long)param_1 + 0x42)) {
    iVar1 = (*(byte *)((long)param_1 + 0x42) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100894d2c | FUN_100894d2c */

void FUN_100894d2c(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x43) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x42) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined4 *)((long)param_1 + 0x3f) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x43) = 1;
    }
  }
  return;
}



/* Address: 0x100894d7c | FUN_100894d7c */

uint FUN_100894d7c(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x42);
  if (1 < *(byte *)((long)param_1 + 0x42)) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x100894d98 | FUN_100894d98 */

void FUN_100894d98(int *param_1,uint param_2)

{
  if (1 < param_2) {
    *(undefined2 *)(param_1 + 0x10) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 2;
    param_2 = 2;
  }
  *(char *)((long)param_1 + 0x42) = (char)param_2;
  return;
}



/* Address: 0x100894dc4 | FUN_100894dc4 */

undefined1  [16] FUN_100894dc4(void)

{
  return ZEXT816(0x100f09e38);
}



/* Address: 0x100894dd4 | thunk_FUN_100894dd8 */

void thunk_FUN_100894dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80808,&DAT_100f09da8);
  DAT_100fe9b58 = pTVar1;
  return;
}



/* Address: 0x100894dd8 | FUN_100894dd8 */

void FUN_100894dd8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80808;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80808,&DAT_100f09da8);
  DAT_100fe9b58 = pTVar1;
  return;
}



/* Address: 0x100894e18 | thunk_FUN_100894e1c */

void thunk_FUN_100894e1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80870,&DAT_100f09d18);
  DAT_100fe9b60 = pTVar1;
  return;
}



/* Address: 0x100894e1c | FUN_100894e1c */

void FUN_100894e1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80870,&DAT_100f09d18);
  DAT_100fe9b60 = pTVar1;
  return;
}



/* Address: 0x100894e5c | thunk_FUN_100894e60 */

void thunk_FUN_100894e60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c808d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c808d8,&DAT_100f09c88);
  DAT_100fe9b68 = pTVar1;
  return;
}



/* Address: 0x100894e60 | FUN_100894e60 */

void FUN_100894e60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c808d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c808d8,&DAT_100f09c88);
  DAT_100fe9b68 = pTVar1;
  return;
}



/* Address: 0x100894ea0 | thunk_FUN_100894ea4 */

void thunk_FUN_100894ea4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80900;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80900,&DAT_100f09bf8);
  DAT_100fe9b70 = pTVar1;
  return;
}



/* Address: 0x100894ea4 | FUN_100894ea4 */

void FUN_100894ea4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80900;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80900,&DAT_100f09bf8);
  DAT_100fe9b70 = pTVar1;
  return;
}



/* Address: 0x100894ee4 | FUN_100894ee4 */

void FUN_100894ee4(void)

{
  long unaff_x20;
  
  FUN_1008852fc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100894eec | FUN_100894eec */

undefined8 FUN_100894eec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe90d0;
  FUN_1000f7830(&DAT_100fe90d0,&DAT_100c7f500);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100894f3c | FUN_100894f3c */

void FUN_100894f3c(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100894f48 | FUN_100894f48 */

void FUN_100894f48(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100894f6c | FUN_100894f6c */

void FUN_100894f6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100894fa0 | FUN_100894fa0 */

void FUN_100894fa0(void)

{
  long unaff_x20;
  
  FUN_100892e1c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100894fac | FUN_100894fac */

void FUN_100894fac(void)

{
  FUN_100894fcc(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100894fb8 | FUN_100894fb8 */

void FUN_100894fb8(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100894fc4 | FUN_100894fc4 */

void FUN_100894fc4(void)

{
  long unaff_x20;
  
  FUN_1008931c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100894fcc | FUN_100894fcc */

void FUN_100894fcc(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100894ffc | FUN_100894ffc */

void FUN_100894ffc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe9b80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c805b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c805b8,&DAT_100f09b58);
  DAT_100fe9b80 = pTVar1;
  return;
}



/* Address: 0x10089503c | thunk_FUN_100894fc4 */

void thunk_FUN_100894fc4(void)

{
  long unaff_x20;
  
  FUN_1008931c8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100895040 | thunk_FUN_100893b10 */

void thunk_FUN_100893b10(void)

{
  FUN_100893b10();
  return;
}



/* Address: 0x100895044 | thunk_FUN_10064bebc */

void thunk_FUN_10064bebc(void)

{
  thunk_FUN_10064bebc();
  return;
}



/* Address: 0x100895048 | thunk_FUN_100894f3c */

void thunk_FUN_100894f3c(void)

{
  FUN_100894f3c();
  return;
}



/* Address: 0x10089504c | thunk_FUN_100894fac */

void thunk_FUN_100894fac(void)

{
  FUN_100894fac();
  return;
}



/* Address: 0x100895050 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100895054 | thunk_FUN_100894fac */

void thunk_FUN_100894fac(void)

{
  FUN_100894fac();
  return;
}



/* Address: 0x100895058 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10089505c | thunk_FUN_100894fac */

void thunk_FUN_100894fac(void)

{
  FUN_100894fac();
  return;
}



/* Address: 0x100895060 | thunk_FUN_100894fb8 */

void thunk_FUN_100894fb8(void)

{
  FUN_100894fb8();
  return;
}



/* Address: 0x100895064 | thunk_FUN_100894f3c */

void thunk_FUN_100894f3c(void)

{
  FUN_100894f3c();
  return;
}



/* Address: 0x100895068 | thunk_FUN_100894f3c */

void thunk_FUN_100894f3c(void)

{
  FUN_100894f3c();
  return;
}



/* Address: 0x10089506c | thunk_FUN_100894590 */

void thunk_FUN_100894590(undefined8 *param_1)

{
  FUN_100892a8c(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x100895070 | thunk_FUN_1006225d4 */

void thunk_FUN_1006225d4(void)

{
  long unaff_x20;
  
  FUN_100622280(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100895074 | FUN_100895074 */

void FUN_100895074(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  long local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 local_78;
  undefined1 uStack_71;
  undefined *local_70;
  undefined1 local_47;
  undefined1 uStack_41;
  
  local_88 = param_2;
  _swift_errorRetain(param_2);
  puVar1 = &DAT_100fe9a00;
  FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
  puVar2 = &uStack_41;
  _swift_dynamicCast(puVar2,&local_88,puVar1,&DAT_100f0ace8,6);
  if (((int)puVar2 != 0) && ((*(byte *)(unaff_x20 + 0x10) & 1) == 0)) {
    puVar1 = &DAT_100fe9538;
    FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
    _swift_initStaticObject();
    lVar3 = 0;
    FUN_1008a3ae8();
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x10) = 0;
    *(undefined8 *)(lVar3 + 0x18) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0x15;
    *(undefined4 *)(lVar3 + 0x28) = 0x10001;
    puVar4 = &DAT_100fe95b0;
    FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
    uStack_80 = SUB87(puVar1,0);
    uStack_79 = (undefined1)((ulong)puVar1 >> 0x38);
    local_78 = 2;
    uStack_71 = 0;
    local_47 = 2;
    local_88 = lVar3;
    local_70 = puVar4;
    _swift_retain(lVar3);
    FUN_100626ebc(&local_88,0);
    FUN_1005e70f4(&local_88);
    local_88 = 0;
    uStack_80 = 0;
    uStack_79 = 0;
    local_78 = 0;
    uStack_71 = 2;
    local_47 = 2;
    local_70 = puVar4;
    FUN_10062dee8(&local_88,0);
    _swift_release(lVar3);
    FUN_1005e70f4(&local_88);
  }
  FUN_100626c9c(param_2);
  return;
}



/* Address: 0x1008951c4 | FUN_1008951c4 */

void FUN_1008951c4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  ulong uVar6;
  long unaff_x20;
  
  puVar3 = &DAT_100fe95b0;
  puVar5 = &DAT_100c80420;
  uVar6 = param_3;
  FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
  thunk_FUN_100885474();
  cVar1 = (char)(uVar6 >> 0x38);
  if (cVar1 == '\0') {
    lVar4 = *(long *)(puVar3 + 0x10);
    FUN_10089d3a8(lVar4,*(undefined8 *)(puVar3 + 0x18),*(undefined8 *)(puVar3 + 0x20));
    if ((lVar4 == 0x65) || (99 < lVar4 - 100U)) {
      if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008952b8);
        (*pcVar2)();
      }
      *(undefined1 *)(unaff_x20 + 0x10) = 1;
    }
    else if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100895258);
      (*pcVar2)();
    }
  }
  else if (cVar1 == '\x01') {
    if ((*(byte *)(unaff_x20 + 0x10) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10089522c);
      (*pcVar2)();
    }
  }
  else {
    if (*(char *)(unaff_x20 + 0x10) != '\x01') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008952b4);
      (*pcVar2)();
    }
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
  }
  FUN_100626ebc(param_2,param_3);
  FUN_100878fe8(puVar3,puVar5,uVar6,uVar6 >> 0x38);
  return;
}



/* Address: 0x1008952b8 | FUN_1008952b8 */

void FUN_1008952b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061e720(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x1008952c0 | thunk_FUN_100895074 */

void thunk_FUN_100895074(void)

{
  FUN_100895074();
  return;
}



/* Address: 0x1008952c4 | thunk_FUN_1008951c4 */

void thunk_FUN_1008951c4(void)

{
  FUN_1008951c4();
  return;
}



/* Address: 0x1008952c8 | FUN_1008952c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008952c8(void)

{
  return ZEXT816(0x100fe9ca8);
}



/* Address: 0x1008952e8 | FUN_1008952e8 */

void FUN_1008952e8(long param_1)

{
  if (0x22 < *(ulong *)(param_1 + 8)) {
    _swift_bridgeObjectRelease();
  }
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x100895318 | FUN_100895318 */

undefined8 * FUN_100895318(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if ((uVar1 < 0x22) || (uVar1 == 0x22)) {
    uVar2 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar2;
  }
  else {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    _swift_bridgeObjectRetain(uVar1);
  }
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_retain();
  return param_1;
}



/* Address: 0x100895380 | FUN_100895380 */

undefined8 * FUN_100895380(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  if (uVar2 == 0x22) {
    if ((0x21 < uVar1) && (uVar1 != 0x22)) {
LAB_10089541c:
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      goto LAB_1008953d0;
    }
  }
  else if (uVar1 == 0x22) {
    FUN_1008954b0(param_1);
  }
  else if (uVar2 < 0x22) {
    if (0x21 < uVar1) goto LAB_10089541c;
  }
  else {
    if (0x21 < uVar1) {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar2);
      goto LAB_1008953d0;
    }
    FUN_100895468(param_1);
  }
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
LAB_1008953d0:
  uVar3 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar3);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}


