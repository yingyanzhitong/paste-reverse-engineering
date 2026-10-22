/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100967778 | FUN_100967778 */

void FUN_100967778(undefined8 param_1)

{
  FUN_100967788(param_1,2,FUN_100626d58);
  return;
}



/* Address: 0x100967788 | FUN_100967788 */

void FUN_100967788(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_3e = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  local_36 = 5;
  local_78 = param_2;
  _swift_retain(uVar2);
  (*pcVar1)(&local_78,param_1);
  _swift_release(uVar2);
  FUN_10096760c(&local_78);
  (*param_3)();
  return;
}



/* Address: 0x100967804 | FUN_100967804 */

void FUN_100967804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 local_88 [66];
  undefined1 local_46;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_88[0] = (undefined1)param_2;
  local_46 = 3;
  _swift_retain(uVar2);
  (*pcVar1)(local_88,param_1);
  _swift_release(uVar2);
  FUN_10096760c(local_88);
  FUN_100626d64(param_2,param_3);
  return;
}



/* Address: 0x100967884 | FUN_100967884 */

void FUN_100967884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_88 [66];
  undefined1 local_46;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10000cbfc(param_2,auStack_88);
  local_46 = 4;
  _swift_retain(uVar2);
  (*pcVar1)(auStack_88,param_1);
  _swift_release(uVar2);
  FUN_10096760c(auStack_88);
  FUN_100627c90(param_2,param_3);
  return;
}



/* Address: 0x10096790c | FUN_10096790c */

void FUN_10096790c(void)

{
  FUN_10096792c();
  return;
}



/* Address: 0x10096791c | FUN_10096791c */

void FUN_10096791c(void)

{
  FUN_10096792c();
  return;
}



/* Address: 0x10096792c | FUN_10096792c */

void FUN_10096792c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6,code *param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong local_88 [8];
  undefined1 local_46;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  local_88[0] = param_2;
  local_46 = param_6;
  _swift_retain(param_2 & 0x3fffffffffffffff);
  _swift_retain(uVar2);
  (*pcVar1)(local_88,param_1);
  _swift_release(uVar2);
  FUN_10096760c(local_88);
  (*param_7)(param_2,param_3);
  return;
}



/* Address: 0x1009679b4 | FUN_1009679b4 */

void FUN_1009679b4(void)

{
  FUN_1009679d4();
  return;
}



/* Address: 0x1009679c4 | FUN_1009679c4 */

void FUN_1009679c4(void)

{
  FUN_1009679d4();
  return;
}



/* Address: 0x1009679d4 | FUN_1009679d4 */

void FUN_1009679d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined2 uStack_48;
  undefined6 uStack_46;
  undefined2 uStack_40;
  undefined8 uStack_3e;
  undefined1 local_36;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_3e = 0;
  uStack_46 = 0;
  uStack_40 = 0;
  local_36 = 5;
  local_78 = param_4;
  _swift_retain(uVar2);
  (*pcVar1)(&local_78,param_1);
  _swift_release(uVar2);
  FUN_10096760c(&local_78);
  (*param_5)();
  return;
}



/* Address: 0x100967a50 | FUN_100967a50 */

void FUN_100967a50(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_40 [32];
  
  FUN_10000cbfc(param_2,auStack_40);
  FUN_100968340(param_1,auStack_40);
  return;
}



/* Address: 0x100967a88 | FUN_100967a88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100967a88(void)

{
  return ZEXT816(0x100fef038);
}



/* Address: 0x100967aa8 | FUN_100967aa8 */

void FUN_100967aa8(ulong *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x42);
  if (4 < *(byte *)((long)param_1 + 0x42)) {
    uVar2 = (int)*param_1 + 5;
  }
  if ((int)uVar2 < 2) {
    if ((uVar2 == 0) || (uVar2 == 1)) {
      uVar3 = *param_1;
LAB_100967ae0:
      _swift_release(uVar3 & 0x3fffffffffffffff);
      return;
    }
  }
  else if (uVar2 == 2) {
    cVar1 = *(char *)((long)param_1 + 0x41);
    if (cVar1 == '\x02') goto LAB_100967b00;
    if (cVar1 == '\x01') {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (uVar3 = param_1[5], ((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0))
      goto LAB_100967ae0;
    }
    else if (cVar1 == '\0') {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
      return;
    }
  }
  else if (uVar2 == 4) {
LAB_100967b00:
    FUN_100004594();
    return;
  }
  return;
}



/* Address: 0x100967b8c | FUN_100967b8c */

ulong * FUN_100967b8c(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined3 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar6 = (uint)*(byte *)((long)param_2 + 0x42);
  if (4 < *(byte *)((long)param_2 + 0x42)) {
    uVar6 = (int)*param_2 + 5;
  }
  if ((int)uVar6 < 2) {
    if (uVar6 == 0) {
      uVar4 = *param_2;
      *param_1 = uVar4;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    else {
      if (uVar6 != 1) goto LAB_100967cc4;
      uVar4 = *param_2;
      *param_1 = uVar4;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
    _swift_retain(uVar4 & 0x3fffffffffffffff);
  }
  else {
    if (uVar6 == 2) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar4 = param_2[3];
        param_1[3] = uVar4;
        (*(code *)**(undefined8 **)(uVar4 - 8))();
      }
      else if (cVar2 == '\x01') {
        uVar4 = *param_2;
        uVar7 = param_2[1];
        *param_1 = uVar4;
        param_1[1] = uVar7;
        param_1[2] = param_2[2];
        *(int *)(param_1 + 3) = (int)param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        cVar1 = (char)param_2[4];
        _swift_retain(uVar4 & 0x3fffffffffffffff);
        _swift_retain(uVar7);
        if (cVar1 == '\x04') {
          uVar4 = param_2[4];
          uVar8 = param_2[7];
          uVar7 = param_2[6];
          param_1[5] = param_2[5];
          param_1[4] = uVar4;
          param_1[7] = uVar8;
          param_1[6] = uVar7;
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar4 = param_2[5];
          if (((uVar4 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar4 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar4;
          }
          else {
            uVar7 = param_2[6];
            param_1[5] = uVar4;
            param_1[6] = uVar7;
            _swift_retain(uVar4 & 0x3fffffffffffffff);
          }
          param_1[7] = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
        }
      }
      else {
        uVar4 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar5 = *(undefined1 *)((long)param_2 + 0x16);
        uVar3 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar4,uVar7,(ulong)(uint7)param_2[2]);
        *param_1 = uVar4;
        param_1[1] = uVar7;
        *(undefined1 *)((long)param_1 + 0x16) = uVar5;
        *(short *)((long)param_1 + 0x14) = (short)uVar3;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      uVar5 = 2;
    }
    else {
      if (uVar6 != 3) {
        if (uVar6 == 4) {
          uVar4 = param_2[3];
          param_1[3] = uVar4;
          (*(code *)**(undefined8 **)(uVar4 - 8))();
          *(undefined1 *)((long)param_1 + 0x42) = 4;
          return param_1;
        }
LAB_100967cc4:
        uVar4 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        param_1[5] = param_2[5];
        param_1[4] = uVar4;
        param_1[7] = uVar8;
        param_1[6] = uVar7;
        *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
        uVar8 = *param_2;
        uVar7 = param_2[3];
        uVar4 = param_2[2];
        param_1[1] = param_2[1];
        *param_1 = uVar8;
        param_1[3] = uVar7;
        param_1[2] = uVar4;
        return param_1;
      }
      *(char *)param_1 = (char)*param_2;
      uVar5 = 3;
    }
    *(undefined1 *)((long)param_1 + 0x42) = uVar5;
  }
  return param_1;
}



/* Address: 0x100967db8 | FUN_100967db8 */

ulong * FUN_100967db8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar5 = (uint)*(byte *)((long)param_1 + 0x42);
  if (4 < *(byte *)((long)param_1 + 0x42)) {
    uVar5 = (int)*param_1 + 5;
  }
  if ((int)uVar5 < 2) {
    if ((uVar5 == 0) || (uVar5 == 1)) {
      uVar6 = *param_1;
LAB_100967e0c:
      _swift_release(uVar6 & 0x3fffffffffffffff);
    }
  }
  else if (uVar5 == 2) {
    cVar2 = *(char *)((long)param_1 + 0x41);
    if (cVar2 == '\x02') goto LAB_100967e28;
    if (cVar2 == '\x01') {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (uVar6 = param_1[5], ((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) != 0))
      goto LAB_100967e0c;
    }
    else if (cVar2 == '\0') {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    }
  }
  else if (uVar5 == 4) {
LAB_100967e28:
    FUN_100004594(param_1);
  }
  uVar5 = (uint)*(byte *)((long)param_2 + 0x42);
  if (4 < *(byte *)((long)param_2 + 0x42)) {
    uVar5 = (int)*param_2 + 5;
  }
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar6 = *param_2;
      *param_1 = uVar6;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    else {
      if (uVar5 != 1) {
LAB_100967f80:
        uVar6 = *param_2;
        param_1[1] = param_2[1];
        *param_1 = uVar6;
        uVar7 = param_2[3];
        uVar6 = param_2[2];
        uVar9 = param_2[5];
        uVar8 = param_2[4];
        uVar11 = param_2[7];
        uVar10 = param_2[6];
        *(undefined4 *)((long)param_1 + 0x3f) = *(undefined4 *)((long)param_2 + 0x3f);
        param_1[5] = uVar9;
        param_1[4] = uVar8;
        param_1[7] = uVar11;
        param_1[6] = uVar10;
        param_1[3] = uVar7;
        param_1[2] = uVar6;
        return param_1;
      }
      uVar6 = *param_2;
      *param_1 = uVar6;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
    _swift_retain(uVar6 & 0x3fffffffffffffff);
  }
  else {
    if (uVar5 == 2) {
      cVar2 = *(char *)((long)param_2 + 0x41);
      if (cVar2 == '\x02') {
        uVar6 = param_2[3];
        param_1[3] = uVar6;
        (*(code *)**(undefined8 **)(uVar6 - 8))(param_1,param_2);
      }
      else if (cVar2 == '\x01') {
        uVar7 = *param_2;
        *param_1 = uVar7;
        uVar8 = param_2[1];
        param_1[1] = uVar8;
        *(int *)(param_1 + 2) = (int)param_2[2];
        *(int *)((long)param_1 + 0x14) = *(int *)((long)param_2 + 0x14);
        uVar6 = param_2[3];
        *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
        *(int *)(param_1 + 3) = (int)uVar6;
        cVar1 = (char)param_2[4];
        _swift_retain(uVar7 & 0x3fffffffffffffff);
        _swift_retain(uVar8);
        if (cVar1 == '\x04') {
          uVar7 = param_2[5];
          uVar6 = param_2[4];
          uVar9 = param_2[7];
          uVar8 = param_2[6];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[5] = uVar7;
          param_1[4] = uVar6;
          param_1[7] = uVar9;
          param_1[6] = uVar8;
        }
        else {
          *(char *)(param_1 + 4) = cVar1;
          uVar6 = param_2[5];
          if (((uVar6 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
            uVar6 = param_2[5];
            param_1[6] = param_2[6];
            param_1[5] = uVar6;
          }
          else {
            param_1[5] = uVar6;
            param_1[6] = param_2[6];
            _swift_retain(uVar6 & 0x3fffffffffffffff);
          }
          uVar6 = param_2[7];
          *(char *)(param_1 + 8) = (char)param_2[8];
          param_1[7] = uVar6;
        }
      }
      else {
        uVar6 = *param_2;
        uVar7 = param_2[1];
        uVar8 = param_2[2];
        uVar4 = *(undefined1 *)((long)param_2 + 0x16);
        uVar3 = *(undefined3 *)((long)param_2 + 0x14);
        FUN_100656200(uVar6,uVar7,(ulong)(uint7)param_2[2]);
        *param_1 = uVar6;
        param_1[1] = uVar7;
        *(undefined1 *)((long)param_1 + 0x16) = uVar4;
        *(short *)((long)param_1 + 0x14) = (short)uVar3;
        *(int *)(param_1 + 2) = (int)uVar8;
      }
      *(char *)((long)param_1 + 0x41) = cVar2;
      uVar4 = 2;
    }
    else if (uVar5 == 3) {
      *(char *)param_1 = (char)*param_2;
      uVar4 = 3;
    }
    else {
      if (uVar5 != 4) goto LAB_100967f80;
      uVar6 = param_2[3];
      param_1[3] = uVar6;
      (*(code *)**(undefined8 **)(uVar6 - 8))(param_1,param_2);
      uVar4 = 4;
    }
    *(undefined1 *)((long)param_1 + 0x42) = uVar4;
  }
  return param_1;
}



/* Address: 0x1009680a0 | FUN_1009680a0 */

void FUN_1009680a0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 == param_2) {
    return;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0x42);
  if (4 < *(byte *)((long)param_1 + 0x42)) {
    uVar2 = (int)*param_1 + 5;
  }
  if ((int)uVar2 < 2) {
    if ((uVar2 != 0) && (uVar2 != 1)) goto LAB_100968110;
    uVar3 = *param_1;
LAB_1009680e8:
    _swift_release(uVar3 & 0x3fffffffffffffff);
  }
  else {
    if (uVar2 == 2) {
      cVar1 = *(char *)((long)param_1 + 0x41);
      if (cVar1 != '\x02') {
        if (cVar1 != '\x01') {
          if (cVar1 == '\0') {
            FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
          }
          goto LAB_100968110;
        }
        _swift_release(*param_1 & 0x3fffffffffffffff);
        _swift_release(param_1[1]);
        if (((char)param_1[4] == '\x04') ||
           (uVar3 = param_1[5], ((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0))
        goto LAB_100968110;
        goto LAB_1009680e8;
      }
    }
    else if (uVar2 != 4) goto LAB_100968110;
    FUN_100004594();
  }
LAB_100968110:
  uVar2 = (uint)*(byte *)((long)param_2 + 0x42);
  if (4 < *(byte *)((long)param_2 + 0x42)) {
    uVar2 = (int)*param_2 + 5;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 0;
      return;
    }
    if (uVar2 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 1;
      return;
    }
  }
  else {
    if (uVar2 == 2) {
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
      *(undefined1 *)((long)param_1 + 0x42) = 2;
      return;
    }
    if (uVar2 == 3) {
      *(char *)param_1 = (char)*param_2;
      *(undefined1 *)((long)param_1 + 0x42) = 3;
      return;
    }
    if (uVar2 == 4) {
      uVar3 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      *(undefined1 *)((long)param_1 + 0x42) = 4;
      return;
    }
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
  return;
}



/* Address: 0x10096825c | FUN_10096825c */

int FUN_10096825c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x43) != '\0')) {
    return *param_1 + 0xfb;
  }
  iVar1 = 0;
  if (5 < *(byte *)((long)param_1 + 0x42)) {
    iVar1 = (*(byte *)((long)param_1 + 0x42) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100968298 | FUN_100968298 */

void FUN_100968298(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfb) {
    if (0xfa < param_3) {
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
    *param_1 = param_2 - 0xfb;
    if (0xfa < param_3) {
      *(undefined1 *)((long)param_1 + 0x43) = 1;
    }
  }
  return;
}



/* Address: 0x1009682e8 | FUN_1009682e8 */

uint FUN_1009682e8(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x42);
  if (4 < *(byte *)((long)param_1 + 0x42)) {
    uVar1 = *param_1 + 5;
  }
  return uVar1;
}



/* Address: 0x100968304 | FUN_100968304 */

void FUN_100968304(int *param_1,uint param_2)

{
  if (4 < param_2) {
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
    *param_1 = param_2 - 5;
    param_2 = 5;
  }
  *(char *)((long)param_1 + 0x42) = (char)param_2;
  return;
}



/* Address: 0x100968330 | FUN_100968330 */

undefined1  [16] FUN_100968330(void)

{
  return ZEXT816(0x100f1c768);
}



/* Address: 0x100968340 | FUN_100968340 */

void FUN_100968340(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong local_a0;
  ulong uStack_98;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 uStack_89;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined1 local_60;
  undefined1 auStack_50 [32];
  int iVar2;
  int iVar3;
  
  iVar1 = (int)&local_a0;
  uVar4 = 0;
  iVar2 = (int)&local_a0;
  iVar3 = (int)&local_a0;
  FUN_10000cbfc(param_2,auStack_50);
  puVar6 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_a0,auStack_50,PTR___type_metadata_for_Any_100eae0c0 + 8,&DAT_100eeaaa8,0
                    );
  if (iVar1 == 0) {
    _swift_dynamicCast(&local_a0,auStack_50,puVar6 + 8,&DAT_100ef1120,0);
    if ((uVar4 & 1) != 0) {
      FUN_100004594(param_2);
      local_a0 = local_a0 | 0x8000000000000000;
      goto LAB_1009683e4;
    }
    _swift_dynamicCast(&local_a0,auStack_50,puVar6 + 8,&DAT_100ef13d8,0);
    if (iVar2 == 0) {
      puVar5 = &DAT_100fef0f0;
      FUN_1000f7830(&DAT_100fef0f0,&DAT_100c88790);
      _swift_dynamicCast(&local_a0,auStack_50,puVar6 + 8,puVar5,0);
      if (iVar3 == 0) {
        param_1[3] = (ulong)(puVar6 + 8);
        puVar6 = &DAT_100f1c788;
        _swift_allocObject(&DAT_100f1c788,0x30,7);
        *param_1 = (ulong)puVar6;
        FUN_100011080(param_2,puVar6 + 0x10);
        *(undefined1 *)((long)param_1 + 0x41) = 2;
      }
      else {
        FUN_100004594(param_2);
        param_1[5] = uStack_78;
        param_1[4] = local_80;
        param_1[7] = uStack_68;
        param_1[6] = uStack_70;
        *(undefined1 *)(param_1 + 8) = local_60;
        param_1[1] = uStack_98;
        *param_1 = local_a0;
        param_1[3] = uStack_88;
        param_1[2] = CONCAT17(uStack_89,CONCAT16(local_8a,CONCAT24(local_8c,local_90)));
        *(undefined1 *)((long)param_1 + 0x41) = 1;
      }
      goto LAB_1009683f8;
    }
    FUN_100004594(param_2);
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    *(undefined2 *)((long)param_1 + 0x14) = local_8c;
    *(undefined4 *)(param_1 + 2) = local_90;
    *(undefined1 *)((long)param_1 + 0x16) = local_8a;
  }
  else {
    FUN_100004594(param_2);
LAB_1009683e4:
    *param_1 = local_a0;
    param_1[1] = uStack_98;
    *(undefined1 *)((long)param_1 + 0x16) = local_8a;
    *(undefined2 *)((long)param_1 + 0x14) = local_8c;
    *(undefined4 *)(param_1 + 2) = local_90;
  }
  *(undefined1 *)((long)param_1 + 0x41) = 0;
LAB_1009683f8:
  FUN_100004594(auStack_50);
  return;
}



/* Address: 0x1009684fc | FUN_1009684fc */

void FUN_1009684fc(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100968520 | FUN_100968520 */

void FUN_100968520(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100968578 | FUN_100968578 */

void FUN_100968578(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(char *)(unaff_x20 + 0x26) = (char)((ulong)param_3 >> 0x30);
  *(short *)(unaff_x20 + 0x24) = (short)((ulong)param_3 >> 0x20);
  *(int *)(unaff_x20 + 0x20) = (int)param_3;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1009685e0 | FUN_1009685e0 */

void FUN_1009685e0(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x100968618 | FUN_100968618 */

void FUN_100968618(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x10096862c | FUN_10096862c */

bool FUN_10096862c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long unaff_x20;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  lVar1 = *(long *)(unaff_x20 + 0x28);
  FUN_10060c6b4();
  if (lVar1 != 0) {
    local_62 = (undefined1)((uint)uVar3 >> 0x10);
    local_64 = (undefined2)uVar3;
    local_37 = 0;
    local_78 = lVar1;
    uStack_70 = param_2;
    local_68 = uVar2;
    _swift_retain();
    FUN_100626ce0(&local_78);
    _swift_release(lVar1);
    FUN_1005e70f4(&local_78);
  }
  return lVar1 == 0;
}



/* Address: 0x1009686bc | FUN_1009686bc */

void FUN_1009686bc(void)

{
  FUN_1009687a8();
  return;
}



/* Address: 0x1009686d0 | FUN_1009686d0 */

void FUN_1009686d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009686f4 | FUN_1009686f4 */

bool FUN_1009686f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *unaff_x20;
  long local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  uVar3 = (undefined4)((ulong)param_3 >> 0x20);
  uVar2 = (undefined4)param_3;
  lVar1 = *(long *)(*unaff_x20 + 0x28);
  FUN_10060c6b4();
  if (lVar1 != 0) {
    local_62 = (undefined1)((uint)uVar3 >> 0x10);
    local_64 = (undefined2)uVar3;
    local_37 = 0;
    local_78 = lVar1;
    uStack_70 = param_2;
    local_68 = uVar2;
    _swift_retain();
    FUN_100626ce0(&local_78);
    _swift_release(lVar1);
    FUN_1005e70f4(&local_78);
  }
  return lVar1 == 0;
}



/* Address: 0x100968788 | FUN_100968788 */

void FUN_100968788(void)

{
  FUN_1009687a8();
  return;
}



/* Address: 0x1009687a8 | FUN_1009687a8 */

undefined8 FUN_1009687a8(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined *puVar3;
  byte bVar4;
  ulong uVar5;
  ulong uVar6;
  undefined2 uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined1 uVar15;
  undefined4 uVar16;
  ulong local_a8;
  ulong uStack_a0;
  undefined4 local_98;
  undefined2 local_94;
  byte local_92;
  undefined1 local_67;
  
  uVar14 = *(ulong *)(unaff_x20 + 0x28);
  uVar10 = *param_2;
  uVar12 = (uint)param_2[1];
  uVar2 = (ulong)uVar12;
  uVar11 = *(uint *)((long)param_2 + 0xc);
  uVar16 = (undefined4)param_2[2];
  uVar7 = *(undefined2 *)((long)param_2 + 0x14);
  uVar15 = *(undefined1 *)((long)param_2 + 0x16);
  if ((-1 < (long)uVar14) && (uVar14 <= uVar11 && (long)uVar2 <= (long)(uVar11 - uVar14))) {
    do {
      uVar11 = (uint)uVar2;
      uVar12 = CONCAT21(uVar7,uVar15) + uVar11;
      bVar4 = (byte)uVar12;
      if (CARRY4((uint)CONCAT21(uVar7,uVar15),uVar11)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10096896c);
        (*pcVar1)();
      }
      uVar13 = (uint)uVar14;
      if ((uVar12 & 0xff000000) == 0) {
        uVar8 = (ulong)(uVar12 >> 8);
        _swift_retain(uVar10);
        uVar6 = 0;
        uVar5 = uVar14;
        uVar9 = (ulong)(uVar12 + uVar13);
        uVar2 = uVar10;
      }
      else {
        uVar6 = uVar14;
        FUN_1006135c8();
        uVar5 = uVar6 >> 0x20;
        uVar8 = uVar10 >> 0x20 & 0xffff;
        bVar4 = (byte)(uVar10 >> 0x30);
        uVar6 = uVar6 & 0xffffffff;
        uVar9 = uVar10;
      }
      if (CARRY4(uVar11,uVar13)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100968970);
        (*pcVar1)();
      }
      *(uint *)(param_2 + 1) = uVar11 + uVar13;
      uStack_a0 = uVar6 | uVar5 << 0x20;
      local_92 = bVar4 | (byte)(uVar8 >> 0x10);
      local_94 = (undefined2)uVar8;
      local_98 = (undefined4)uVar9;
      local_67 = 0;
      local_a8 = uVar2;
      _swift_retain(uVar2);
      FUN_100626ce0(&local_a8);
      _swift_release(uVar2);
      param_1 = &local_a8;
      FUN_1005e70f4();
      uVar10 = *param_2;
      uVar12 = (uint)param_2[1];
      uVar2 = (ulong)uVar12;
      uVar11 = *(uint *)((long)param_2 + 0xc);
      uVar16 = (undefined4)param_2[2];
      uVar7 = *(undefined2 *)((long)param_2 + 0x14);
      uVar15 = *(undefined1 *)((long)param_2 + 0x16);
    } while ((uVar14 <= uVar11) && ((long)uVar2 <= (long)(uVar11 - uVar14)));
  }
  if (uVar11 != uVar12) {
    FUN_100968990();
    puVar3 = &DAT_100f1d3d8;
    _swift_allocError(&DAT_100f1d3d8,param_1,0,0);
    *param_1 = uVar10;
    *(uint *)(param_1 + 1) = uVar12;
    *(uint *)((long)param_1 + 0xc) = uVar11;
    *(undefined4 *)(param_1 + 2) = uVar16;
    *(undefined2 *)((long)param_1 + 0x14) = uVar7;
    *(undefined1 *)((long)param_1 + 0x16) = uVar15;
    _swift_retain(uVar10);
    FUN_100626c9c(puVar3);
    _swift_errorRelease(puVar3);
  }
  return 1;
}



/* Address: 0x100968970 | FUN_100968970 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100968970(void)

{
  return ZEXT816(0x100fef170);
}



/* Address: 0x100968990 | FUN_100968990 */

void FUN_100968990(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef1d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c88334;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c88334,&DAT_100f1d3d8);
  DAT_100fef1d8 = pTVar1;
  return;
}



/* Address: 0x1009689d0 | FUN_1009689d0 */

long FUN_1009689d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &local_a0;
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  *(undefined1 *)(unaff_x20 + 0x78) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_6;
  *(undefined8 *)(unaff_x20 + 0x88) = param_7;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_60 = 0;
  uStack_58 = 1;
  FUN_10096b47c(&local_a0,0x10);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  return unaff_x20;
}



/* Address: 0x100968a88 | FUN_100968a88 */

void FUN_100968a88(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar1 = &local_70;
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0xc000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  *(undefined8 *)(unaff_x20 + 0x68) = param_3;
  *(undefined8 *)(unaff_x20 + 0x70) = param_4;
  *(undefined1 *)(unaff_x20 + 0x78) = param_5;
  *(undefined8 *)(unaff_x20 + 0x80) = param_6;
  *(undefined8 *)(unaff_x20 + 0x88) = param_7;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_30 = 0;
  uStack_28 = 1;
  FUN_10096b47c(&local_70,0x10);
  *(undefined8 **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  return;
}



/* Address: 0x100968af8 | FUN_100968af8 */

void FUN_100968af8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10096b7c8(param_2,param_3);
  return;
}



/* Address: 0x100968b04 | thunk_FUN_10096b998 */

void thunk_FUN_10096b998(void)

{
  FUN_10096b998();
  return;
}



/* Address: 0x100968b08 | FUN_100968b08 */

void FUN_100968b08(long param_1,undefined8 param_2)

{
  ulong uVar1;
  bool bVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  ulong uVar9;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  long lStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  long lStack_148;
  undefined1 auStack_138 [24];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  long local_d8;
  char local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  if ((2 < *(ulong *)(unaff_x20 + 0x40) >> 0x3e) &&
     (*(ulong *)(unaff_x20 + 0x40) != 0xc000000000000000 ||
      (*(long *)(unaff_x20 + 0x48) != 0 || *(long *)(unaff_x20 + 0x50) != 0))) {
    do {
      _swift_beginAccess(unaff_x20 + 0x18,auStack_138,0x21,0);
      uVar6 = *(ulong *)(unaff_x20 + 0x18);
      uVar1 = *(ulong *)(unaff_x20 + 0x20);
      lVar7 = *(long *)(unaff_x20 + 0x28);
      if (*(char *)(unaff_x20 + 0x38) == '\x01') {
        if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968ea0);
          (*pcVar4)();
        }
        if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968ea8);
          (*pcVar4)();
        }
        bVar5 = false;
joined_r0x000100968c3c:
        if ((long)uVar1 <= lVar7) goto LAB_100968c40;
LAB_100968c04:
        bVar2 = true;
        if ((long)((lVar7 - uVar1) + *(long *)(uVar6 + 0x10)) < 1) goto LAB_100968c1c;
LAB_100968c50:
        if (lVar7 - uVar1 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968e8c);
          (*pcVar4)();
        }
        uVar9 = *(ulong *)(uVar6 + 0x10);
        if (uVar9 <= uVar1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968e90);
          (*pcVar4)();
        }
        FUN_10096b9ec(uVar6 + uVar1 * 0x50 + 0x20,&local_1e0);
        if (lStack_198 == 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968eb4);
          (*pcVar4)();
        }
        uStack_168 = uStack_1b8;
        local_170 = local_1c0;
        uStack_158 = uStack_1a8;
        uStack_160 = uStack_1b0;
        lStack_148 = lStack_198;
        local_150 = local_1a0;
        uStack_188 = uStack_1d8;
        local_190 = local_1e0;
        uStack_178 = uStack_1c8;
        uStack_180 = uStack_1d0;
        if (!bVar2) {
          uVar9 = 0;
        }
        if ((long)((lVar7 - uVar1) + uVar9) < 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968e94);
          (*pcVar4)();
        }
        uVar9 = uVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(unaff_x20 + 0x18) = uVar6;
        if ((uVar9 & 1) == 0) {
          FUN_10096b51c();
        }
        uStack_1b8 = 0;
        local_1c0 = 0;
        uStack_1a8 = 0;
        uStack_1b0 = 0;
        uStack_1d8 = 0;
        local_1e0 = 0;
        uStack_1c8 = 0;
        uStack_1d0 = 0;
        local_1a0 = 0;
        lStack_198 = 1;
        *(ulong *)(unaff_x20 + 0x18) = uVar6;
        if (*(ulong *)(uVar6 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968e98);
          (*pcVar4)();
        }
        FUN_10096ba9c(&local_1e0,uVar6 + uVar1 * 0x50 + 0x20);
        *(ulong *)(unaff_x20 + 0x18) = uVar6;
        *(ulong *)(unaff_x20 + 0x20) = *(long *)(uVar6 + 0x10) - 1U & uVar1 + 1;
      }
      else {
        if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968e9c);
          (*pcVar4)();
        }
        if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968ea4);
          (*pcVar4)();
        }
        lVar8 = *(long *)(unaff_x20 + 0x30);
        uVar9 = *(long *)(uVar6 + 0x10) - 1U & lVar8 + uVar1;
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968eac);
          (*pcVar4)();
        }
        if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100968eb0);
          (*pcVar4)();
        }
        bVar5 = uVar9 == uVar1;
        if (lVar8 < 1) {
          *(undefined8 *)(unaff_x20 + 0x30) = 0;
          *(undefined1 *)(unaff_x20 + 0x38) = 1;
          goto joined_r0x000100968c3c;
        }
        *(long *)(unaff_x20 + 0x30) = lVar8 + -1;
        *(undefined1 *)(unaff_x20 + 0x38) = 0;
        if (lVar7 < (long)uVar1) goto LAB_100968c04;
LAB_100968c40:
        bVar2 = false;
        if (0 < (long)(lVar7 - uVar1)) goto LAB_100968c50;
LAB_100968c1c:
        uStack_168 = 0;
        local_170 = 0;
        uStack_158 = 0;
        uStack_160 = 0;
        uStack_188 = 0;
        local_190 = 0;
        uStack_178 = 0;
        uStack_180 = 0;
        local_150 = 0;
        lStack_148 = 1;
      }
      FUN_10096b9ec(&local_190,&local_1e0);
      if (lStack_198 == 1) {
        FUN_1000fb4c4(&local_190,&DAT_100fef1e0,&DAT_100c87af0);
        uStack_118 = 0;
        local_120 = 0;
        uStack_108 = 0;
        local_110 = 0;
        uStack_f8 = 0;
        local_100 = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_e0 = 0;
        local_d8 = 1;
        local_d0 = '\0';
      }
      else {
        FUN_10096ba68(&local_1e0,&local_120);
        local_d0 = bVar5;
        FUN_10096ba3c(&local_1e0);
        FUN_1000fb4c4(&local_190,&DAT_100fef1e0,&DAT_100c87af0);
      }
      _swift_endAccess(auStack_138);
      cVar3 = local_d0;
      if (local_d8 == 1) goto LAB_100968e40;
      uStack_88 = uStack_e8;
      local_90 = local_f0;
      local_78 = local_d8;
      uStack_80 = local_e0;
      uStack_a8 = uStack_108;
      local_b0 = local_110;
      uStack_98 = uStack_f8;
      uStack_a0 = local_100;
      uStack_b8 = uStack_118;
      local_c0 = local_120;
      FUN_100626ebc(&local_c0,local_d8);
      if (cVar3 == '\x01') {
        FUN_100626ed8();
      }
      FUN_10096ba3c(&local_c0);
    } while( true );
  }
  FUN_10096baec();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xd000000000000028;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000100db6b80;
  *(undefined8 *)(param_1 + 0x38) = 0x5e;
  FUN_100968ec0();
  _swift_release(param_1);
LAB_100968e5c:
  FUN_100627ea0(param_2);
  return;
LAB_100968e40:
  FUN_1000fb4c4(&local_120,&DAT_100fef1e8,&DAT_100c87af8);
  goto LAB_100968e5c;
}



/* Address: 0x100968eb4 | FUN_100968eb4 */

void FUN_100968eb4(void)

{
  FUN_10096a0ec(4);
  return;
}



/* Address: 0x100968ec0 | FUN_100968ec0 */

void FUN_100968ec0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  long lStack_168;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar3 = *(undefined8 **)(unaff_x20 + 0x40);
  if ((uint)((ulong)puVar3 >> 0x3e) != 2) {
    uVar10 = *(undefined8 *)(unaff_x20 + 0x50);
    *(ulong *)(unaff_x20 + 0x40) = (ulong)param_1 | 0x8000000000000000;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    FUN_10096bb60(puVar3,uVar8,uVar10);
    lVar11 = *(long *)(unaff_x20 + 0x88);
    if (lVar11 == 0) {
      puVar5 = param_1;
      _swift_retain();
    }
    else {
      FUN_10096c9c8();
      puVar5 = (undefined8 *)&DAT_100f1c8b0;
      uVar8 = 0;
      _swift_allocError(&DAT_100f1c8b0,puVar3,0,0);
      *puVar3 = param_1;
      uVar4 = *(ulong *)(lVar11 + 0x20);
      lVar9 = *(long *)(lVar11 + 0x28);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar9 + 0x10);
      _swift_retain_n(param_1,2);
      (*pcVar14)(uVar4,lVar9);
      if ((uVar4 & 1) == 0) {
        uVar8 = *(undefined8 *)(lVar11 + 0x20);
        lVar9 = *(long *)(lVar11 + 0x28);
        _swift_getObjectType();
        puVar6 = &DAT_100f1cb18;
        _swift_allocObject(&DAT_100f1cb18,0x20,7);
        *(long *)(puVar6 + 0x10) = lVar11;
        *(undefined8 **)(puVar6 + 0x18) = puVar5;
        pcVar14 = *(code **)(lVar9 + 0x18);
        _swift_retain(lVar11);
        _swift_errorRetain(puVar5);
        (*pcVar14)(thunk_FUN_1008d678c,puVar6,uVar8,lVar9);
        _swift_release(puVar6);
      }
      else {
        puVar3 = puVar5;
        thunk_FUN_1005de8f4(puVar5);
        FUN_1006486f8();
        FUN_100004550(puVar3,lVar9);
        _swift_bridgeObjectRelease(uVar8);
      }
      _swift_errorRelease();
    }
    FUN_10096c9c8();
    puVar6 = &DAT_100f1c8b0;
    puVar3 = puVar5;
    _swift_allocError(&DAT_100f1c8b0,puVar5,0,0);
    *puVar3 = param_1;
    _swift_retain(param_1);
    FUN_100626c9c(puVar6);
    _swift_errorRelease(puVar6);
    if ((param_3 & 1) != 0) {
      FUN_100626d64(2,0);
    }
    while( true ) {
      _swift_beginAccess(unaff_x20 + 0x18,auStack_128,0x21,0);
      if (*(char *)(unaff_x20 + 0x38) != '\x01') {
        lVar11 = *(long *)(unaff_x20 + 0x30);
        bVar1 = lVar11 < 1;
        if (lVar11 < 2) {
          lVar11 = 1;
        }
        *(long *)(unaff_x20 + 0x30) = lVar11 + -1;
        *(bool *)(unaff_x20 + 0x38) = bVar1;
      }
      uVar4 = *(ulong *)(unaff_x20 + 0x18);
      uVar2 = *(ulong *)(unaff_x20 + 0x20);
      uVar12 = *(ulong *)(unaff_x20 + 0x28);
      lVar11 = uVar12 - uVar2;
      if ((long)uVar12 < (long)uVar2) {
        lVar11 = lVar11 + *(long *)(uVar4 + 0x10);
      }
      if (lVar11 < 1) break;
      if (uVar12 == uVar2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693a8);
        (*pcVar14)();
      }
      if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693ac);
        (*pcVar14)();
      }
      if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693b0);
        (*pcVar14)();
      }
      uVar13 = *(ulong *)(uVar4 + 0x10);
      if (uVar13 <= uVar2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693b4);
        (*pcVar14)();
      }
      FUN_10096b9ec(uVar4 + uVar2 * 0x50 + 0x20,&local_1b0);
      if (lStack_168 == 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693c0);
        (*pcVar14)();
      }
      uStack_e8 = uStack_188;
      local_f0 = local_190;
      uStack_d8 = uStack_178;
      local_e0 = uStack_180;
      lStack_c8 = lStack_168;
      local_d0 = local_170;
      uStack_108 = uStack_1a8;
      local_110 = local_1b0;
      uStack_f8 = uStack_198;
      local_100 = uStack_1a0;
      if ((long)uVar2 <= (long)uVar12) {
        uVar13 = 0;
      }
      if ((long)((uVar12 - uVar2) + uVar13) < 1) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693b8);
        (*pcVar14)();
      }
      uVar12 = uVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar4;
      if ((uVar12 & 1) == 0) {
        FUN_10096b51c();
      }
      uStack_188 = 0;
      local_190 = 0;
      uStack_178 = 0;
      uStack_180 = 0;
      uStack_1a8 = 0;
      local_1b0 = 0;
      uStack_198 = 0;
      uStack_1a0 = 0;
      local_170 = 0;
      lStack_168 = 1;
      *(ulong *)(unaff_x20 + 0x18) = uVar4;
      if (*(ulong *)(uVar4 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1009693bc);
        (*pcVar14)();
      }
      FUN_10096ba9c(&local_1b0,uVar4 + uVar2 * 0x50 + 0x20);
      lVar11 = lStack_c8;
      *(ulong *)(unaff_x20 + 0x18) = uVar4;
      *(ulong *)(unaff_x20 + 0x20) = *(long *)(uVar4 + 0x10) + 0x1ffffffffU & uVar2 + 1;
      _swift_endAccess(auStack_128);
      lVar9 = lStack_c8;
      if (lVar11 == 1) goto LAB_10096936c;
      uStack_88 = uStack_d8;
      local_90 = local_e0;
      local_78 = lStack_c8;
      uStack_80 = local_d0;
      uStack_a8 = uStack_f8;
      local_b0 = local_100;
      uStack_98 = uStack_e8;
      uStack_a0 = local_f0;
      uStack_b8 = uStack_108;
      local_c0 = local_110;
      if (lStack_c8 == 0) {
        FUN_10096ba3c(&local_c0);
      }
      else {
        puVar6 = &DAT_100f1c8b0;
        puVar3 = puVar5;
        _swift_allocError(&DAT_100f1c8b0,puVar5,0,0);
        *puVar3 = param_1;
        uVar4 = *(ulong *)(lVar9 + 0x20);
        lVar11 = *(long *)(lVar9 + 0x28);
        _swift_getObjectType();
        pcVar14 = *(code **)(lVar11 + 0x10);
        _swift_retain(param_1);
        (*pcVar14)(uVar4,lVar11);
        if ((uVar4 & 1) == 0) {
          uVar8 = *(undefined8 *)(lVar9 + 0x20);
          lVar11 = *(long *)(lVar9 + 0x28);
          _swift_getObjectType(uVar8);
          puVar7 = &DAT_100f1caf0;
          _swift_allocObject(&DAT_100f1caf0,0x20,7);
          *(long *)(puVar7 + 0x10) = lVar9;
          *(undefined **)(puVar7 + 0x18) = puVar6;
          pcVar14 = *(code **)(lVar11 + 0x18);
          _swift_errorRetain(puVar6);
          _swift_retain(lVar9);
          (*pcVar14)(thunk_FUN_1008d678c,puVar7,uVar8,lVar11);
          _swift_release(puVar7);
        }
        else {
          _swift_beginAccess(lVar9 + 0x10,auStack_140,1,0);
          uVar8 = 0;
          uVar10 = 0;
          uVar15 = 0;
          if (*(char *)(lVar9 + 0x18) == -1) {
            *(undefined **)(lVar9 + 0x10) = puVar6;
            *(undefined1 *)(lVar9 + 0x18) = 1;
            _swift_beginAccess(lVar9 + 0x30,auStack_158,1,0);
            uVar8 = *(undefined8 *)(lVar9 + 0x30);
            uVar10 = *(undefined8 *)(lVar9 + 0x38);
            uVar15 = *(undefined8 *)(lVar9 + 0x40);
            *(undefined8 *)(lVar9 + 0x38) = 0;
            *(undefined8 *)(lVar9 + 0x40) = 0;
            *(undefined8 *)(lVar9 + 0x30) = 0;
            _swift_errorRetain(puVar6);
          }
          FUN_1006486f8(uVar8,uVar10,uVar15);
          FUN_100004550(uVar8,uVar10);
          _swift_bridgeObjectRelease(uVar15);
        }
        FUN_10096ba3c(&local_c0);
        _swift_errorRelease(puVar6);
      }
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_108 = 0;
    local_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    local_d0 = 0;
    lStack_c8 = 1;
    _swift_endAccess(auStack_128);
LAB_10096936c:
    FUN_1000fb4c4(&local_110,&DAT_100fef1e0,&DAT_100c87af0);
  }
  return;
}



/* Address: 0x1009693c0 | FUN_1009693c0 */

void FUN_1009693c0(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  FUN_100627f08();
  uVar2 = uVar1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(uVar1);
  if ((uVar2 & 1) != 0) {
    FUN_10096942c(param_1);
    return;
  }
  return;
}



/* Address: 0x10096942c | FUN_10096942c */

void FUN_10096942c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  char *pcVar15;
  ulong uVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined8 local_a8;
  undefined7 uStack_a0;
  undefined1 local_99;
  uint uStack_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined1 local_67;
  
  if ((2 < *(ulong *)(unaff_x20 + 0x40) >> 0x3e) &&
     (*(ulong *)(unaff_x20 + 0x40) == 0xc000000000000000 &&
      (*(long *)(unaff_x20 + 0x48) == 0 && *(long *)(unaff_x20 + 0x50) == 0))) {
    lVar12 = *(long *)(param_1 + 0x20);
    lVar10 = *(long *)(lVar12 + 0x38);
    uVar4 = *(undefined8 *)(lVar12 + 0x38);
    uVar16 = *(ulong *)(lVar12 + 0x30);
    uVar1 = uVar16;
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar10 + 0x10);
    _swift_unknownObjectRetain(uVar16);
    (*pcVar13)(uVar1,lVar10);
    if ((uVar1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x100969708);
      (*pcVar13)();
    }
    uVar1 = *(ulong *)(lVar12 + 0x30);
    lVar10 = *(long *)(lVar12 + 0x38);
    uVar2 = uVar1;
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar10 + 0x10);
    _swift_retain(param_1);
    _swift_unknownObjectRetain(uVar1);
    (*pcVar13)(uVar2,lVar10);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x10096970c);
      (*pcVar13)();
    }
    uVar11 = *(undefined8 *)(unaff_x20 + 0x80);
    puVar3 = &DAT_100f1cac8;
    _swift_allocObject(&DAT_100f1cac8,0x30,7);
    *(long *)(puVar3 + 0x10) = unaff_x20;
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(ulong *)(puVar3 + 0x18) = uVar16;
    *(long *)(puVar3 + 0x28) = param_1;
    _swift_getObjectType(uVar1);
    pcVar14 = *(code **)(lVar10 + 0xa8);
    _swift_unknownObjectRetain(uVar16);
    _swift_retain(param_1);
    _swift_retain();
    pcVar13 = FUN_10096c9ac;
    puVar8 = PTR___type_metadata_for____100eae0c8 + 8;
    puVar7 = puVar3;
    (*pcVar14)();
    _swift_unknownObjectRelease(uVar1);
    _swift_release(puVar3);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
    pcVar15 = *(char **)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x40) = uVar11;
    *(code **)(unaff_x20 + 0x48) = pcVar13;
    *(undefined **)(unaff_x20 + 0x50) = puVar7;
    _swift_retain(uVar11);
    _swift_retain(puVar7);
    FUN_10096bb60(uVar4,uVar5);
    local_a8 = *(undefined8 *)(unaff_x20 + 0x58);
    uStack_a0 = (undefined7)*(undefined8 *)(unaff_x20 + 0x60);
    local_99 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x60) >> 0x38);
    _swift_bridgeObjectRetain();
    SVar17.bridgeObject = (void *)0xe100000000000000;
    SVar17.str = &DAT_0000003a;
    SVar18.bridgeObject = puVar8;
    SVar18.str = pcVar15;
    Swift::String::append(SVar17,SVar18);
    SVar17 = Swift::CustomStringConvertible::get_description();
    SVar19.bridgeObject = puVar8;
    SVar19.str = pcVar15;
    Swift::String::append(SVar17,SVar19);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar4 = 0x10001;
    uVar5 = 0;
    uVar6 = 0x17;
    FUN_10089bc04();
    puVar3 = &DAT_100fef408;
    FUN_1000f7830(&DAT_100fef408,&DAT_100c87d30);
    uStack_a0 = (undefined7)uVar5;
    local_99 = (undefined1)((ulong)uVar5 >> 0x38);
    uStack_94 = 0;
    local_67 = 2;
    local_a8 = uVar4;
    uStack_98 = uVar6 & 0xff;
    local_90 = puVar3;
    _swift_bridgeObjectRetain(uVar9);
    _swift_retain(uVar4);
    _swift_bridgeObjectRetain(uVar5);
    FUN_100626ebc(&local_a8,0);
    FUN_1005e70f4(&local_a8);
    local_a8 = 0;
    uStack_a0 = 0;
    local_99 = 0;
    uStack_98 = 0;
    uStack_94 = 0x2000000;
    local_67 = 2;
    local_90 = puVar3;
    FUN_100626ebc(&local_a8,0);
    FUN_1005e70f4(&local_a8);
    FUN_100626ed8();
    _swift_release(param_1);
    _swift_unknownObjectRelease(uVar16);
    _swift_release(puVar7);
    _swift_release(uVar11);
    _swift_bridgeObjectRelease(uVar5);
    _swift_release(uVar4);
  }
  return;
}



/* Address: 0x10096970c | FUN_10096970c */

void FUN_10096970c(long param_1)

{
  long lVar1;
  uint uVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  uVar2 = (uint)((ulong)*(long *)(unaff_x20 + 0x40) >> 0x3e);
  if ((1 < uVar2) &&
     ((uVar2 == 2 ||
      (*(long *)(unaff_x20 + 0x40) != -0x4000000000000000 ||
       (*(long *)(unaff_x20 + 0x48) != 0 || *(long *)(unaff_x20 + 0x50) != 0))))) {
    lVar1 = unaff_x20 + 0x18;
    _swift_beginAccess(lVar1,auStack_48,0,0);
    if (*(long *)(unaff_x20 + 0x20) != *(long *)(unaff_x20 + 0x28)) {
      FUN_10096baec();
      _swift_allocObject();
      *(undefined8 *)(lVar1 + 0x18) = 0;
      *(undefined8 *)(lVar1 + 0x10) = 6;
      *(undefined1 *)(lVar1 + 0x20) = 0;
      *(undefined8 *)(lVar1 + 0x28) = 0xd000000000000028;
      *(undefined8 *)(lVar1 + 0x30) = 0x8000000100db6b80;
      *(undefined8 *)(lVar1 + 0x38) = 0x77;
      FUN_100968ec0();
      _swift_release(lVar1);
    }
    return;
  }
  FUN_10096baec();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 4;
  *(undefined1 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0xd000000000000028;
  *(undefined8 *)(param_1 + 0x30) = 0x8000000100db6b80;
  *(undefined8 *)(param_1 + 0x38) = 0x7d;
  FUN_100968ec0();
  _swift_release(param_1);
  return;
}



/* Address: 0x10096984c | FUN_10096984c */

void FUN_10096984c(void)

{
  FUN_10096a0ec(6);
  return;
}



/* Address: 0x100969858 | FUN_100969858 */

void FUN_100969858(void)

{
  FUN_10096942c();
  FUN_100626b80();
  return;
}



/* Address: 0x100969880 | FUN_100969880 */

void FUN_100969880(void)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x40);
  lVar1 = *(long *)(unaff_x20 + 0x48);
  lVar7 = *(long *)(unaff_x20 + 0x50);
  uVar2 = (uint)(uVar4 >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    uVar3 = uVar4;
    if (uVar5 != 0) {
      uVar3 = uVar4 & 0x3fffffffffffffff;
    }
    FUN_10096bb0c(uVar4,lVar1,lVar7);
    FUN_1009699d0(uVar3,lVar1,lVar7);
    _swift_release(lVar7);
    _swift_release();
    FUN_10096baec();
    _swift_allocObject();
    *(undefined8 *)(uVar3 + 0x18) = 0;
    *(undefined8 *)(uVar3 + 0x10) = 2;
    *(undefined1 *)(uVar3 + 0x20) = 0;
    *(undefined8 *)(uVar3 + 0x28) = 0xd000000000000028;
    *(undefined8 *)(uVar3 + 0x30) = 0x8000000100db6b80;
    uVar6 = 0x8c;
    uVar4 = uVar3;
  }
  else {
    if ((uVar5 == 2) || (uVar4 != 0xc000000000000000 || (lVar7 != 0 || lVar1 != 0)))
    goto LAB_100969960;
    FUN_10096baec();
    _swift_allocObject();
    *(undefined8 *)(uVar4 + 0x18) = 0;
    *(undefined8 *)(uVar4 + 0x10) = 5;
    *(undefined1 *)(uVar4 + 0x20) = 0;
    *(undefined8 *)(uVar4 + 0x28) = 0xd000000000000028;
    *(undefined8 *)(uVar4 + 0x30) = 0x8000000100db6b80;
    uVar6 = 0x89;
  }
  *(undefined8 *)(uVar4 + 0x38) = uVar6;
  FUN_100968ec0();
  _swift_release(uVar4);
LAB_100969960:
  FUN_100626b8c();
  return;
}



/* Address: 0x1009699c4 | FUN_1009699c4 */

void FUN_1009699c4(void)

{
  FUN_10096a0ec(5);
  return;
}



/* Address: 0x1009699d0 | FUN_1009699d0 */

void FUN_1009699d0(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f1caa0;
    _swift_allocObject(&DAT_100f1caa0,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(FUN_1008d678c,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    thunk_FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x100969ac8 | FUN_100969ac8 */

void FUN_100969ac8(void)

{
  FUN_10096a0ec(2);
  return;
}



/* Address: 0x100969ad4 | FUN_100969ad4 */

void FUN_100969ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  long unaff_x20;
  ulong uVar9;
  
  cVar7 = (char)((ulong)param_3 >> 0x38);
  puVar5 = &DAT_100fef1f0;
  puVar6 = &DAT_100c87b00;
  FUN_1000f7830(&DAT_100fef1f0,&DAT_100c87b00);
  FUN_10096abd0();
  if (cVar7 == '\0') {
    FUN_100969c40();
    _swift_bridgeObjectRelease(puVar6);
LAB_100969bec:
    _swift_release(puVar5);
    return;
  }
  if (cVar7 != '\x01') {
    FUN_100877974();
    FUN_100969df8(param_1);
    return;
  }
  FUN_100877974();
  uVar9 = *(ulong *)(unaff_x20 + 0x40);
  uVar3 = (uint)(uVar9 >> 0x20);
  uVar8 = uVar3 >> 0x1e;
  if (uVar8 < 2) {
    if (uVar8 == 1) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      _swift_retain(uVar9 & 0x3fffffffffffffff);
      _swift_retain(uVar2);
      puVar5 = (undefined *)(uVar9 & 0x3fffffffffffffff);
      FUN_1009699d0(puVar5,uVar1,uVar2);
      FUN_10096baec();
      _swift_allocObject();
      *(undefined8 *)(puVar5 + 0x18) = 0;
      *(undefined8 *)(puVar5 + 0x10) = 1;
      puVar5[0x20] = 0;
      *(undefined8 *)(puVar5 + 0x28) = 0xd000000000000028;
      *(undefined8 *)(puVar5 + 0x30) = 0x8000000100db6b80;
      *(undefined8 *)(puVar5 + 0x38) = 0xde;
      FUN_100968ec0();
      _swift_release(uVar2);
      _swift_release(uVar9 & 0x3fffffffffffffff);
      goto LAB_100969bec;
    }
  }
  else if (uVar3 >> 0x1e == 2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100969c40);
  (*pcVar4)();
}



/* Address: 0x100969c40 | FUN_100969c40 */

void FUN_100969c40(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong uVar11;
  long unaff_x20;
  
  uVar11 = *(ulong *)(unaff_x20 + 0x40);
  uVar3 = (uint)(uVar11 >> 0x20);
  uVar10 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar10 == 0) {
      uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
      uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
      lVar5 = param_1;
      uVar7 = param_2;
      uVar8 = param_3;
      FUN_10089d364();
      lVar6 = lVar5;
      FUN_10089d3a8();
      _swift_retain(uVar11);
      _swift_retain(uVar2);
      FUN_10087b2d4(lVar5,uVar7,uVar8);
      if (lVar6 - 200U < 100) {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
        *(ulong *)(unaff_x20 + 0x40) = uVar11 | 0x4000000000000000;
        *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
        *(undefined8 *)(unaff_x20 + 0x50) = uVar2;
        FUN_10096bb60(uVar7,uVar8,uVar9);
        return;
      }
      if (lVar6 == 0x197) {
        FUN_10096baec();
        _swift_allocObject();
        *(undefined8 *)(lVar5 + 0x10) = 0;
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined1 *)(lVar5 + 0x20) = 0;
        *(undefined8 *)(lVar5 + 0x28) = 0xd000000000000028;
        *(undefined8 *)(lVar5 + 0x30) = 0x8000000100db6b80;
        *(undefined8 *)(lVar5 + 0x38) = 0xcb;
      }
      else {
        FUN_10096baec();
        _swift_allocObject();
        *(long *)(lVar5 + 0x10) = param_1;
        *(undefined8 *)(lVar5 + 0x18) = param_2;
        *(char *)(lVar5 + 0x20) = (char)param_3;
        *(undefined8 *)(lVar5 + 0x28) = 0xd000000000000028;
        *(undefined8 *)(lVar5 + 0x30) = 0x8000000100db6b80;
        *(undefined8 *)(lVar5 + 0x38) = 0xd0;
        _swift_retain(param_1);
        _swift_bridgeObjectRetain(param_2);
      }
      FUN_100968ec0();
      _swift_release(lVar5);
      _swift_release(uVar2);
      _swift_release(uVar11);
      return;
    }
  }
  else if (uVar10 == 2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100969df8);
  (*pcVar4)();
}



/* Address: 0x100969df8 | FUN_100969df8 */

void FUN_100969df8(long param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar7 = *(ulong *)(unaff_x20 + 0x40);
  uVar1 = (uint)(uVar7 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar4 < 2) {
    if (uVar4 != 1) {
LAB_100969ee0:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100969ee4);
      (*pcVar2)();
    }
    uVar6 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_retain(uVar7 & 0x3fffffffffffffff);
    _swift_retain(uVar6);
    FUN_1009699d0(uVar7 & 0x3fffffffffffffff,uVar5,uVar6);
    _swift_release(uVar6);
    _swift_release(uVar7 & 0x3fffffffffffffff);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x50);
    *(undefined8 *)(unaff_x20 + 0x40) = 0xc000000000000008;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    FUN_10096bb60(uVar5,uVar6,uVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar5);
    thunk_FUN_1006313ac(param_1,0,uVar5);
    _swift_release(uVar5);
    if (*(long *)(unaff_x20 + 0x88) != 0) {
      FUN_100973bdc(0,0);
      return;
    }
  }
  else if (uVar1 >> 0x1e != 2) goto LAB_100969ee0;
  return;
}



/* Address: 0x100969ee4 | FUN_100969ee4 */

void FUN_100969ee4(long param_1,ulong param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(long *)(param_1 + 0x40) >> 0x3e);
  if (uVar2 < 2) {
    FUN_10096baec();
    _swift_allocObject();
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x10) = 3;
    *(undefined1 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0xd000000000000028;
    *(undefined8 *)(param_1 + 0x30) = 0x8000000100db6b80;
    *(undefined8 *)(param_1 + 0x38) = 0xac;
    _swift_getObjectType();
    (**(code **)(param_3 + 0x10))();
    if ((param_2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100969fec);
      (*pcVar1)();
    }
    _swift_retain(param_4);
    FUN_100968ec0(param_1,param_4,1);
    _swift_release(param_1);
    _swift_release(param_4);
  }
  else if ((uVar2 != 2) &&
          (*(long *)(param_1 + 0x40) == -0x4000000000000000 &&
           (*(long *)(param_1 + 0x48) == 0 && *(long *)(param_1 + 0x50) == 0))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100969ff0);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100969ff0 | FUN_100969ff0 */

void FUN_100969ff0(void)

{
  FUN_10096a0ec(3);
  return;
}



/* Address: 0x100969ffc | FUN_100969ffc */

long FUN_100969ffc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10096baec();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_1;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  _swift_bridgeObjectRetain(param_2);
  return lVar1;
}



/* Address: 0x10096a058 | FUN_10096a058 */

long FUN_10096a058(long param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10096baec();
  _swift_allocObject();
  *(long *)(lVar1 + 0x10) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  *(undefined1 *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  *(undefined8 *)(lVar1 + 0x30) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = param_6;
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_5);
  return lVar1;
}



/* Address: 0x10096a0e0 | FUN_10096a0e0 */

void FUN_10096a0e0(void)

{
  FUN_10096a0ec(1);
  return;
}



/* Address: 0x10096a0ec | FUN_10096a0ec */

long FUN_10096a0ec(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 in_register_00005008;
  
  lVar1 = param_2;
  FUN_10096baec();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = in_register_00005008;
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x20) = 0;
  *(long *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  _swift_bridgeObjectRetain(param_3);
  return lVar1;
}



/* Address: 0x10096a158 | FUN_10096a158 */

void FUN_10096a158(void)

{
  long unaff_x20;
  
  FUN_10096c948(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10096a188 | FUN_10096a188 */

void FUN_10096a188(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10096bb60(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Address: 0x10096a1c8 | FUN_10096a1c8 */

void FUN_10096a1c8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10096bb60(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x88));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10096a210 | FUN_10096a210 */

void FUN_10096a210(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar3 = (undefined4)param_4;
  puVar1 = &DAT_100fef1f0;
  puVar2 = &DAT_100c87b00;
  FUN_1000f7830();
  FUN_10096abd0();
  *param_1 = puVar1;
  param_1[1] = puVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar4 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar4 >> 0x18);
  return;
}


