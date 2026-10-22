/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10065a764 | FUN_10065a764 */

undefined8 * FUN_10065a764(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_retain();
  return param_1;
}



/* Address: 0x10065a7a8 | FUN_10065a7a8 */

undefined8 * FUN_10065a7a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x10065a80c | FUN_10065a80c */

undefined8 * FUN_10065a80c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10065a858 | FUN_10065a858 */

int FUN_10065a858(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10065a8a0 | FUN_10065a8a0 */

void FUN_10065a8a0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10065a8e4 | FUN_10065a8e4 */

void FUN_10065a8e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10065a8f0 | thunk_FUN_10065a3a0 */

void thunk_FUN_10065a3a0(void)

{
  FUN_10065a3a0();
  return;
}



/* Address: 0x10065a8f4 | thunk_FUN_10065a33c */

void thunk_FUN_10065a33c(void)

{
  thunk_FUN_10065a33c();
  return;
}



/* Address: 0x10065a8f8 | thunk_FUN_10065a404 */

void thunk_FUN_10065a404(void)

{
  thunk_FUN_10065a404();
  return;
}



/* Address: 0x10065a8fc | thunk_FUN_10065a6fc */

void thunk_FUN_10065a6fc(void)

{
  FUN_10065a6fc();
  return;
}



/* Address: 0x10065a900 | FUN_10065a900 */

void FUN_10065a900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010065a914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x20))(param_1,0,param_2,param_3);
  return;
}



/* Address: 0x10065a918 | FUN_10065a918 */

undefined8 FUN_10065a918(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_2;
  (**(code **)(*(long *)(*(long *)(param_3 + 8) + 8) + 0x50))(param_2);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_3 + 0x10);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,uVar2,param_2,param_3);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065a9d8 | FUN_10065a9d8 */

undefined8 FUN_10065a9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_3;
  (**(code **)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x50))(param_3);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x18);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,param_2,uVar2,param_3,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065aaa0 | FUN_10065aaa0 */

undefined8 FUN_10065aaa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_3;
  (**(code **)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x50))(param_3);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x20);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,param_2,uVar2,param_3,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065ab68 | FUN_10065ab68 */

void FUN_10065ab68(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010065ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 0x38))(param_1,0,param_2,param_3);
  return;
}



/* Address: 0x10065ab80 | FUN_10065ab80 */

undefined8 FUN_10065ab80(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_2;
  (**(code **)(*(long *)(*(long *)(param_3 + 8) + 8) + 0x50))(param_2);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_3 + 0x28);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,uVar2,param_2,param_3);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065ac40 | FUN_10065ac40 */

undefined8 FUN_10065ac40(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_3;
  (**(code **)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x50))(param_3);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x30);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,param_2,uVar2,param_3,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065ad08 | FUN_10065ad08 */

undefined8 FUN_10065ad08(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  uVar1 = param_3;
  (**(code **)(*(long *)(*(long *)(param_4 + 8) + 8) + 0x50))(param_3);
  uVar2 = uVar1;
  _swift_getObjectType();
  FUN_1006422fc();
  _swift_unknownObjectRelease(uVar1);
  pcVar3 = *(code **)(param_4 + 0x38);
  _swift_retain(uVar2);
  (*pcVar3)(param_1,param_2,uVar2,param_3,param_4);
  _swift_release(uVar2);
  return uVar2;
}



/* Address: 0x10065add0 | FUN_10065add0 */

void FUN_10065add0(void)

{
  FUN_10065adf8();
  return;
}



/* Address: 0x10065ade4 | FUN_10065ade4 */

void FUN_10065ade4(void)

{
  FUN_10065adf8();
  return;
}



/* Address: 0x10065adf8 | FUN_10065adf8 */

void FUN_10065adf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  if (param_3 != 0) {
    FUN_10065aefc();
    puVar2 = &DAT_100ef1948;
    uVar7 = 0;
    _swift_allocError(&DAT_100ef1948,param_1,0,0);
    uVar3 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar4 & 1) == 0) {
      _swift_allocObject(param_6,0x20,7);
      *(long *)(param_6 + 0x10) = param_3;
      *(undefined **)(param_6 + 0x18) = puVar2;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(puVar2);
      (*pcVar8)(param_7,param_6,uVar3,lVar1);
      _swift_release(param_6);
    }
    else {
      puVar5 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar2);
    return;
  }
  return;
}



/* Address: 0x10065aefc | FUN_10065aefc */

void FUN_10065aefc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd8ac8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b8c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b8c0,&DAT_100ef1948);
  DAT_100fd8ac8 = pTVar1;
  return;
}



/* Address: 0x10065af3c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10065af40 | FUN_10065af40 */

undefined1  [16] FUN_10065af40(void)

{
  return ZEXT816(0x100ef1920);
}



/* Address: 0x10065af50 | FUN_10065af50 */

undefined1  [16] FUN_10065af50(void)

{
  return ZEXT816(0x100ef1948);
}



/* Address: 0x10065af60 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10065af64 | FUN_10065af64 */

void FUN_10065af64(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_78;
  undefined *puStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if (param_3 == &DAT_100eeaaa8) {
    FUN_10065b5f8();
    local_68 = (undefined4)param_4;
    local_62 = (undefined1)((ulong)param_4 >> 0x30);
    local_64 = (undefined2)((ulong)param_4 >> 0x20);
    puVar1 = &DAT_100eeaaa8;
    puVar2 = puVar1;
    local_78 = param_2;
    puStack_70 = param_3;
  }
  else if (param_3 == &DAT_100ef1120) {
    FUN_10065bcfc();
    local_68 = (undefined4)param_4;
    local_62 = (undefined1)((ulong)param_4 >> 0x30);
    local_64 = (undefined2)((ulong)param_4 >> 0x20);
    puVar1 = &DAT_100ef1120;
    puVar2 = puVar1;
    local_78 = param_2;
    puStack_70 = param_3;
  }
  else if (param_3 == &DAT_100ef13d8) {
    FUN_10065b97c();
    local_68 = (undefined4)param_4;
    local_62 = (undefined1)((ulong)param_4 >> 0x30);
    local_64 = (undefined2)((ulong)param_4 >> 0x20);
    puVar1 = &DAT_100ef13d8;
    puVar2 = puVar1;
    local_78 = param_2;
    puStack_70 = param_3;
  }
  else {
    puVar1 = &DAT_100fd8ad0;
    FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
    if (param_3 != puVar1) {
      FUN_10065c4dc(param_1);
      return;
    }
    FUN_10065c09c(&local_78);
    puVar2 = param_3;
  }
  _swift_dynamicCast(param_1,&local_78,puVar1,puVar2,7);
  return;
}



/* Address: 0x10065b0ac | FUN_10065b0ac */

void FUN_10065b0ac(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined7 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  char local_8f;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  puVar4 = &DAT_100eeaaa8;
  if (param_3 == &DAT_100eeaaa8) {
    FUN_10065c850();
    if (local_8f != '\0') goto LAB_10065b1c8;
    uVar1 = CONCAT16(local_ba,CONCAT24(local_bc,local_c0));
    param_3 = &DAT_100eeaaa8;
    if (-1 < (long)local_d0) {
      local_80 = local_d0;
      uStack_78 = uStack_c8;
LAB_10065b2a0:
      local_ba = (undefined1)((uint7)uVar1 >> 0x30);
      local_70._0_6_ = CONCAT24(local_bc,(int)uVar1);
LAB_10065b2ac:
      local_70._0_7_ = CONCAT16(local_ba,(undefined6)local_70);
      _swift_dynamicCast(param_1,&local_80,param_3,param_3,7);
      pcVar3 = *(code **)(*(long *)(param_3 + -8) + 0x38);
      uVar2 = 0;
      goto LAB_10065b2e0;
    }
LAB_10065b1a8:
    FUN_10000c650();
  }
  else {
    puVar4 = &DAT_100ef1120;
    if (param_3 == &DAT_100ef1120) {
      FUN_10065c850();
      if (local_8f == '\0') {
        uVar1 = CONCAT16(local_ba,CONCAT24(local_bc,local_c0));
        param_3 = puVar4;
        if ((long)local_d0 < 0) {
          local_80 = local_d0 & 0x7fffffffffffffff;
          uStack_78 = uStack_c8;
          goto LAB_10065b2a0;
        }
        goto LAB_10065b1a8;
      }
    }
    else {
      puVar4 = &DAT_100ef13d8;
      if (param_3 != &DAT_100ef13d8) {
        puVar4 = &DAT_100fd8ad0;
        FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
        if (param_3 != puVar4) {
          FUN_10065c3cc(param_1);
          return;
        }
        FUN_10065c850();
        if (local_8f == '\x01') {
          uStack_58 = uStack_a8;
          local_60 = local_b0;
          uStack_48 = uStack_98;
          uStack_50 = uStack_a0;
          local_40 = local_90;
          local_70 = CONCAT17(uStack_b9,CONCAT16(local_ba,CONCAT24(local_bc,local_c0)));
          uStack_78 = uStack_c8;
          local_80 = local_d0;
          uStack_68 = uStack_b8;
          _swift_dynamicCast(param_1,&local_80,puVar4,param_3,7);
          pcVar3 = *(code **)(*(long *)(param_3 + -8) + 0x38);
          uVar2 = 0;
        }
        else {
          FUN_10065c884(&local_d0);
          pcVar3 = *(code **)(*(long *)(param_3 + -8) + 0x38);
          uVar2 = 1;
        }
        goto LAB_10065b2e0;
      }
      FUN_10065c850();
      if (local_8f == '\0') {
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        local_70._0_6_ = CONCAT24(local_bc,local_c0);
        param_3 = puVar4;
        goto LAB_10065b2ac;
      }
    }
LAB_10065b1c8:
    FUN_10065c884(&local_d0);
    param_3 = puVar4;
  }
  pcVar3 = *(code **)(*(long *)(param_3 + -8) + 0x38);
  uVar2 = 1;
LAB_10065b2e0:
  (*pcVar3)(param_1,uVar2,1,param_3);
  return;
}



/* Address: 0x10065b2f8 | FUN_10065b2f8 */

void FUN_10065b2f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_3 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  FUN_10065b38c(param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  (**(code **)(lVar2 + 8))(param_2,param_3);
  return;
}



/* Address: 0x10065b380 | FUN_10065b380 */

void FUN_10065b380(void)

{
  FUN_10065c850();
  return;
}



/* Address: 0x10065b38c | FUN_10065b38c */

void FUN_10065b38c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  ulong local_90;
  ulong uStack_88;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 uStack_79;
  ulong uStack_78;
  ulong local_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  undefined1 local_50;
  
  lVar4 = *(long *)(param_3 - 8);
  lVar3 = (long)&local_90 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(lVar3,param_2,param_3);
  puVar1 = &local_90;
  _swift_dynamicCast(puVar1,lVar3,param_3,&DAT_100eeaaa8,0);
  if ((int)puVar1 == 0) {
    puVar1 = &local_90;
    _swift_dynamicCast(puVar1,lVar3,param_3,&DAT_100ef1120,0);
    if ((int)puVar1 != 0) {
      pcVar5 = *(code **)(lVar4 + 8);
      (*pcVar5)(param_2,param_3);
      local_90 = local_90 | 0x8000000000000000;
      goto LAB_10065b468;
    }
    puVar1 = &local_90;
    _swift_dynamicCast(puVar1,lVar3,param_3,&DAT_100ef13d8,0);
    if ((int)puVar1 == 0) {
      puVar2 = &DAT_100fd8ad0;
      FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
      puVar1 = &local_90;
      _swift_dynamicCast(puVar1,lVar3,param_3,puVar2,0);
      if ((int)puVar1 == 0) {
        param_1[3] = param_3;
        FUN_10000cbb0(param_1);
        (**(code **)(lVar4 + 0x20))();
        *(undefined1 *)((long)param_1 + 0x41) = 2;
        pcVar5 = *(code **)(lVar4 + 8);
      }
      else {
        pcVar5 = *(code **)(lVar4 + 8);
        (*pcVar5)(param_2,param_3);
        param_1[5] = uStack_68;
        param_1[4] = local_70;
        param_1[7] = uStack_58;
        param_1[6] = uStack_60;
        *(undefined1 *)(param_1 + 8) = local_50;
        param_1[1] = uStack_88;
        *param_1 = local_90;
        param_1[3] = uStack_78;
        param_1[2] = CONCAT17(uStack_79,CONCAT16(local_7a,CONCAT24(local_7c,local_80)));
        *(undefined1 *)((long)param_1 + 0x41) = 1;
      }
      goto LAB_10065b47c;
    }
    pcVar5 = *(code **)(lVar4 + 8);
    (*pcVar5)(param_2,param_3);
    param_1[1] = uStack_88;
    *param_1 = local_90;
    *(undefined2 *)((long)param_1 + 0x14) = local_7c;
    *(undefined4 *)(param_1 + 2) = local_80;
    *(undefined1 *)((long)param_1 + 0x16) = local_7a;
  }
  else {
    pcVar5 = *(code **)(lVar4 + 8);
    (*pcVar5)(param_2,param_3);
LAB_10065b468:
    *param_1 = local_90;
    param_1[1] = uStack_88;
    *(undefined1 *)((long)param_1 + 0x16) = local_7a;
    *(undefined2 *)((long)param_1 + 0x14) = local_7c;
    *(undefined4 *)(param_1 + 2) = local_80;
  }
  *(undefined1 *)((long)param_1 + 0x41) = 0;
LAB_10065b47c:
  (*pcVar5)(lVar3,param_3);
  return;
}



/* Address: 0x10065b58c | FUN_10065b58c */

long FUN_10065b58c(void)

{
  long local_58;
  undefined8 uStack_50;
  char local_17;
  
  FUN_10065c850();
  if (local_17 == '\0') {
    if (-1 < local_58) {
      return local_58;
    }
    FUN_10000c650(local_58,uStack_50);
  }
  else {
    FUN_10065c884(&local_58);
  }
  return 0;
}



/* Address: 0x10065b5f8 | FUN_10065b5f8 */

void FUN_10065b5f8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  code *local_c8;
  void *local_c0;
  StaticString local_b8;
  __uint64 _Stack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined3 local_94;
  undefined *local_90;
  char local_67;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_d0 + -uVar14) - uVar14;
  _Var12.unknown = (undefined *)&local_a8;
  FUN_10065c850();
  if (local_67 == '\0') {
    param_3 = (char *)(ulong)CONCAT34(local_94,local_98);
    if (-1 < (long)local_a8) {
      return;
    }
    FUN_10000c650();
    _Var12.unknown = local_a0;
  }
  else {
    FUN_10065c884(&local_a8);
  }
  local_a8 = (undefined *)0x0;
  local_a0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_b8.unknown = local_a8;
  _Stack_b0 = (__uint64)local_a0;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = (void *)0xea00000000007265;
  SVar17.str = (char *)0x6666754265747942;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar18,SVar24);
  local_90 = &DAT_100ef1ad8;
  puVar6 = &DAT_100ef1998;
  _swift_allocObject(&DAT_100ef1998,0x52,7);
  local_a8 = puVar6;
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_c8 = *(code **)(lVar16 + 8);
  (*local_c8)(auStack_d0 + -uVar14,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar13 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_c0 = pvVar13;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar13 = local_c0;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b81c);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_a0);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_c8)(lVar15,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar13;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar13;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_b0;
    file.unknown = local_b8.unknown;
    *(undefined4 *)(lVar15 + -8) = 0;
    *(undefined8 *)(lVar15 + -0x10) = 0x65;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b920);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10065b820);
  (*pcVar3)();
}



/* Address: 0x10065b920 | FUN_10065b920 */

undefined8 FUN_10065b920(void)

{
  undefined8 local_58 [8];
  char local_17;
  
  FUN_10065c850();
  if (local_17 != '\0') {
    FUN_10065c884(local_58);
    local_58[0] = 0xf000000000000007;
  }
  return local_58[0];
}



/* Address: 0x10065b97c | FUN_10065b97c */

undefined * FUN_10065b97c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  code *local_c8;
  void *local_c0;
  StaticString local_b8;
  __uint64 _Stack_b0;
  undefined *local_a8;
  __uint64 local_a0;
  undefined *local_90;
  char local_67;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_d0 + -uVar14) - uVar14;
  _Var12.unknown = (undefined *)&local_a8;
  FUN_10065c850();
  if (local_67 == '\0') {
    return local_a8;
  }
  FUN_10065c884(&local_a8);
  local_a8 = (undefined *)0x0;
  local_a0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_b8.unknown = local_a8;
  _Stack_b0 = local_a0;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = &DAT_e600000000000000;
  SVar17.str = (char *)0x617461444f49;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar18,SVar24);
  local_90 = &DAT_100ef1ad8;
  puVar6 = &DAT_100ef1998;
  _swift_allocObject(&DAT_100ef1998,0x52,7);
  local_a8 = puVar6;
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_c8 = *(code **)(lVar16 + 8);
  (*local_c8)(auStack_d0 + -uVar14,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar13 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_c0 = pvVar13;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar13 = local_c0;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065bb88);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_a0);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_c8)(lVar15,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar13;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar13;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_b0;
    file.unknown = local_b8.unknown;
    *(undefined4 *)(lVar15 + -8) = 0;
    *(undefined8 *)(lVar15 + -0x10) = 0x7f;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065bc8c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10065bb8c);
  (*pcVar3)();
}



/* Address: 0x10065bc8c | FUN_10065bc8c */

ulong FUN_10065bc8c(void)

{
  ulong local_58;
  undefined8 uStack_50;
  char local_17;
  
  FUN_10065c850();
  if (local_17 == '\0') {
    if ((long)local_58 < 0) {
      return local_58 & 0x7fffffffffffffff;
    }
    FUN_10000c650(local_58,uStack_50);
  }
  else {
    FUN_10065c884(&local_58);
  }
  return 0;
}



/* Address: 0x10065bcfc | FUN_10065bcfc */

ulong FUN_10065bcfc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  code *local_c8;
  void *local_c0;
  StaticString local_b8;
  __uint64 _Stack_b0;
  undefined *local_a8;
  undefined *local_a0;
  undefined4 local_98;
  undefined3 local_94;
  undefined *local_90;
  char local_67;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_d0 + -uVar14) - uVar14;
  _Var12.unknown = (undefined *)&local_a8;
  FUN_10065c850();
  if (local_67 == '\0') {
    param_3 = (char *)(ulong)CONCAT34(local_94,local_98);
    if ((long)local_a8 < 0) {
      return (ulong)local_a8 & 0x7fffffffffffffff;
    }
    FUN_10000c650();
    _Var12.unknown = local_a0;
  }
  else {
    FUN_10065c884(&local_a8);
  }
  local_a8 = (undefined *)0x0;
  local_a0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_b8.unknown = local_a8;
  _Stack_b0 = (__uint64)local_a0;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = (void *)0xea00000000006e6f;
  SVar17.str = (char *)0x69676552656c6946;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar18,SVar24);
  local_90 = &DAT_100ef1ad8;
  puVar6 = &DAT_100ef1998;
  _swift_allocObject(&DAT_100ef1998,0x52,7);
  local_a8 = puVar6;
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_c8 = *(code **)(lVar16 + 8);
  (*local_c8)(auStack_d0 + -uVar14,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar13 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_c0 = pvVar13;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar13 = local_c0;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065bf24);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_a0);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_c8)(lVar15,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar13;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar13;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_b0;
    file.unknown = local_b8.unknown;
    *(undefined4 *)(lVar15 + -8) = 0;
    *(undefined8 *)(lVar15 + -0x10) = 0x99;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065c028);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10065bf28);
  (*pcVar3)();
}



/* Address: 0x10065c028 | FUN_10065c028 */

void FUN_10065c028(undefined8 *param_1)

{
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  char local_2f;
  
  FUN_10065c850();
  if (local_2f != '\x01') {
    FUN_10065c884(&local_70);
    local_30 = 0;
    local_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 0;
    local_50 = 0;
    uStack_48 = 0;
    uStack_40 = 0;
    uStack_38 = 0;
  }
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  param_1[5] = uStack_48;
  param_1[4] = local_50;
  param_1[7] = uStack_38;
  param_1[6] = uStack_40;
  *(undefined1 *)(param_1 + 8) = local_30;
  return;
}



/* Address: 0x10065c09c | FUN_10065c09c */

void FUN_10065c09c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  _StringGuts _Var12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_e0;
  undefined4 auStack_d8 [2];
  undefined1 auStack_d0 [8];
  code *local_c8;
  void *local_c0;
  StaticString local_b8;
  __uint64 _Stack_b0;
  undefined *local_a8;
  __uint64 _Stack_a0;
  undefined8 local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  char local_67;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar14 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)(auStack_d0 + -uVar14) - uVar14;
  _Var12.unknown = (undefined *)&local_a8;
  FUN_10065c850();
  if (local_67 == '\x01') {
    param_1[5] = uStack_80;
    param_1[4] = local_88;
    param_1[7] = uStack_70;
    param_1[6] = local_78;
    *(undefined1 *)(param_1 + 8) = local_68;
    param_1[1] = _Stack_a0;
    *param_1 = local_a8;
    param_1[3] = puStack_90;
    param_1[2] = local_98;
    return;
  }
  FUN_10065c884(&local_a8);
  local_a8 = (undefined *)0x0;
  _Stack_a0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var12);
  local_b8.unknown = local_a8;
  _Stack_b0 = _Stack_a0;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_5;
  SVar22.str = param_4;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = (void *)0x8000000100daf940;
  SVar17.str = (char *)0xd00000000000001d;
  SVar23.bridgeObject = param_5;
  SVar23.str = param_4;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_5;
  SVar24.str = param_4;
  Swift::String::append(SVar18,SVar24);
  puStack_90 = &DAT_100ef1ad8;
  puVar6 = &DAT_100ef1998;
  _swift_allocObject(&DAT_100ef1998,0x52,7);
  local_a8 = puVar6;
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_c8 = *(code **)(lVar16 + 8);
  (*local_c8)(auStack_d0 + -uVar14,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar13 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_c0 = pvVar13;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar13 = local_c0;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10065c2c8);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(_Stack_a0);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_c8)(lVar15,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar13;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar13;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_b0;
    file.unknown = local_b8.unknown;
    *(undefined4 *)(lVar15 + -8) = 0;
    *(undefined8 *)(lVar15 + -0x10) = 0xb3;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10065c3cc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10065c2cc);
  (*pcVar3)();
}



/* Address: 0x10065c3cc | FUN_10065c3cc */

void FUN_10065c3cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  char local_3f;
  
  puVar2 = &local_f0;
  FUN_10065c850();
  if (local_3f == '\0') {
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    local_e0 = CONCAT44(CONCAT22(CONCAT11(local_e0._7_1_,local_6a),local_6c),local_70);
    puVar3 = &DAT_100ef13d8;
  }
  else if (local_3f == '\x01') {
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    uStack_b8 = uStack_48;
    uStack_c0 = uStack_50;
    local_b0 = local_40;
    local_e0 = CONCAT17(uStack_69,CONCAT16(local_6a,CONCAT24(local_6c,local_70)));
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    uStack_d8 = uStack_68;
    puVar3 = &DAT_100fd8ad0;
    FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
    puVar2 = &local_f0;
  }
  else {
    FUN_100011080(&local_80,&local_f0);
    FUN_100011080(&local_f0,auStack_a0);
    puVar2 = (undefined8 *)auStack_a0;
    puVar3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  }
  uVar1 = param_1;
  _swift_dynamicCast(param_1,puVar2,puVar3,param_3,6);
  (**(code **)(*(long *)(param_3 + -8) + 0x38))(param_1,(uint)uVar1 ^ 1,1,param_3);
  return;
}



/* Address: 0x10065c4dc | FUN_10065c4dc */

void FUN_10065c4dc(undefined8 param_1,undefined8 param_2,char *param_3,undefined8 param_4,
                  void *param_5)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  Optional OVar2;
  bool bVar3;
  Mirror MVar4;
  undefined7 extraout_var;
  long lVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  char *pcVar12;
  void *pvVar13;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  undefined8 unaff_x20;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  StaticString local_70;
  __uint64 _Stack_68;
  _StringGuts _Var5;
  
  MVar4 = Swift::Mirror::typeMetadataAccessor();
  lVar20 = *(long *)(MVar4.unknown + -8);
  uVar14 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar18 = (long)(auStack_c0 + -uVar14) - uVar14;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  _Var5.unknown = (undefined *)CONCAT71(extraout_var,OVar2.value);
  lVar16 = *(long *)(_Var5.unknown + -8);
  lVar19 = lVar18 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10065c3cc(lVar19,_Var5.unknown,param_3);
  lVar17 = *(long *)(param_3 + -8);
  lVar6 = lVar19;
  pcVar12 = param_3;
  (**(code **)(lVar17 + 0x30))(lVar19,1);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar17 + 0x20))(param_1,lVar19,param_3);
    return;
  }
  (**(code **)(lVar16 + 8))(lVar19);
  Swift::_StringGuts::grow(0x38,_Var5);
  local_70.unknown = (undefined *)0x0;
  _Stack_68 = 0xe000000000000000;
  SVar21.bridgeObject = (void *)0x8000000100daf900;
  SVar21.str = (char *)0xd000000000000018;
  SVar25.bridgeObject = param_5;
  SVar25.str = pcVar12;
  Swift::String::append(SVar21,SVar25);
  SVar21 = Swift::__typeName(SUB81(param_3,0));
  SVar26.bridgeObject = param_5;
  SVar26.str = pcVar12;
  Swift::String::append(SVar21,SVar26);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  SVar22.bridgeObject = (void *)0xeb0000000020646e;
  SVar22.str = (char *)0x756f662074756220;
  SVar27.bridgeObject = param_5;
  SVar27.str = pcVar12;
  Swift::String::append(SVar22,SVar27);
  _swift_allocObject(&DAT_100ef1998,0x52,7);
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  pcVar15 = *(code **)(lVar20 + 8);
  (*pcVar15)(auStack_c0 + -uVar14);
  pcVar12 = *(char **)(AVar8.unknown + 0x10);
  pvVar13 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar12;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar12);
  _swift_unknownObjectRetain(uVar1);
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    bVar3 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar1);
    if (bVar3) {
      _swift_unknownObjectRelease(pcVar12);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10065c74c);
      (*pcVar15)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar12);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(0xe000000000000000);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*pcVar15)(lVar18,MVar4.unknown);
    SVar21 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar28.bridgeObject = pvVar13;
    SVar28.str = pcVar9;
    Swift::String::append(SVar21,SVar28);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    SVar23.bridgeObject = (void *)0xef2073746e65746e;
    SVar23.str = (char *)0x6f63206874697720;
    SVar29.bridgeObject = pvVar13;
    SVar29.str = pcVar9;
    Swift::String::append(SVar23,SVar29);
    Swift::__print_unlocked
              (unaff_x20,&local_70,&DAT_100ef1ad8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    line = _Stack_68;
    file.unknown = local_70.unknown;
    *(undefined4 *)(lVar19 + -8) = 0;
    *(undefined8 *)(lVar19 + -0x10) = 0xd0;
    SVar24.bridgeObject = (void *)0x2;
    SVar24.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar24,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10065c850);
    (*pcVar15)();
  }
                    /* WARNING: Does not return */
  pcVar15 = (code *)SoftwareBreakpoint(1,0x10065c750);
  (*pcVar15)();
}



/* Address: 0x10065c850 | FUN_10065c850 */

undefined8 FUN_10065c850(undefined8 param_1,undefined8 param_2)

{
  FUN_10065d0f8(param_2,param_1,&DAT_100ef1ad8);
  return param_2;
}



/* Address: 0x10065c884 | FUN_10065c884 */

undefined8 FUN_10065c884(undefined8 param_1)

{
  FUN_10065d044(param_1,&DAT_100ef1ad8);
  return param_1;
}



/* Address: 0x10065c8b0 | FUN_10065c8b0 */

void FUN_10065c8b0(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10065c948 | FUN_10065c948 */

void FUN_10065c948(ulong *param_1)

{
  undefined *puVar1;
  ulong local_68;
  ulong uStack_60;
  undefined4 local_58;
  undefined2 uStack_54;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  char local_27;
  
  FUN_10065c850();
  if (local_27 == '\0') {
    if ((long)local_68 < 0) {
      param_1[3] = (ulong)&DAT_100ef1120;
      *param_1 = local_68 & 0x7fffffffffffffff;
      param_1[1] = uStack_60;
      *(undefined4 *)(param_1 + 2) = local_58;
      *(undefined2 *)((long)param_1 + 0x14) = uStack_54;
      *(undefined1 *)((long)param_1 + 0x16) = uStack_52;
    }
    else {
      param_1[3] = (ulong)&DAT_100eeaaa8;
      *param_1 = local_68;
      *(int *)(param_1 + 1) = (int)uStack_60;
      *(int *)((long)param_1 + 0xc) = (int)(uStack_60 >> 0x20);
      *(undefined4 *)(param_1 + 2) = local_58;
      *(undefined2 *)((long)param_1 + 0x14) = uStack_54;
      *(undefined1 *)((long)param_1 + 0x16) = uStack_52;
    }
  }
  else if (local_27 == '\x01') {
    puVar1 = &DAT_100fd8ad0;
    FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
    param_1[3] = (ulong)puVar1;
    puVar1 = &DAT_100ef19c0;
    _swift_allocObject(&DAT_100ef19c0,0x51,7);
    *param_1 = (ulong)puVar1;
    *(undefined8 *)(puVar1 + 0x38) = uStack_40;
    *(undefined8 *)(puVar1 + 0x30) = local_48;
    *(undefined8 *)(puVar1 + 0x48) = uStack_30;
    *(undefined8 *)(puVar1 + 0x40) = local_38;
    puVar1[0x50] = local_28;
    *(ulong *)(puVar1 + 0x18) = uStack_60;
    *(ulong *)(puVar1 + 0x10) = local_68;
    *(undefined8 *)(puVar1 + 0x28) = uStack_50;
    *(ulong *)(puVar1 + 0x20) = CONCAT17(uStack_51,CONCAT16(uStack_52,CONCAT24(uStack_54,local_58)))
    ;
  }
  else {
    FUN_100011080(&local_68,param_1);
  }
  return;
}



/* Address: 0x10065ca60 | FUN_10065ca60 */

void FUN_10065ca60(void)

{
  long unaff_x20;
  
  _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
     (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10065cab4 | FUN_10065cab4 */

undefined1  [16] FUN_10065cab4(void)

{
  undefined1 auVar1 [16];
  undefined1 uVar2;
  char *pcVar3;
  void *in_x3;
  String SVar4;
  String SVar5;
  String SVar6;
  undefined1 auStack_60 [24];
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar2 = SUB81(auStack_60,0);
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  FUN_10065c948(auStack_60);
  FUN_100004640(auStack_60,local_48);
  pcVar3 = &DAT_00000001;
  _swift_getDynamicType();
  SVar4 = Swift::__typeName((bool)uVar2);
  SVar5.bridgeObject = in_x3;
  SVar5.str = pcVar3;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  FUN_100004594(auStack_60);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x203a;
  SVar6.bridgeObject = in_x3;
  SVar6.str = pcVar3;
  Swift::String::append(SVar4,SVar6);
  FUN_10065c948(auStack_60);
  FUN_100004640(auStack_60,local_48);
  Swift::DefaultStringInterpolation::_appendInterpolation();
  FUN_100004594(auStack_60);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x10065cb74 | thunk_FUN_10065cab4 */

void thunk_FUN_10065cab4(void)

{
  FUN_10065cab4();
  return;
}



/* Address: 0x10065cb78 | FUN_10065cb78 */

undefined1  [16] FUN_10065cb78(char *param_1,void *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  
  FUN_10065cab4();
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  _swift_bridgeObjectRelease(param_2);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = (char *)0x29;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x28;
  return auVar1;
}



/* Address: 0x10065cbd0 | FUN_10065cbd0 */

void FUN_10065cbd0(ulong *param_1)

{
  char cVar1;
  
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
  return;
}



/* Address: 0x10065cc78 | FUN_10065cc78 */

ulong * FUN_10065cc78(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  cVar2 = *(char *)((long)param_2 + 0x41);
  if (cVar2 == '\x02') {
    uVar6 = param_2[3];
    param_1[3] = uVar6;
    (*(code *)**(undefined8 **)(uVar6 - 8))(param_1);
  }
  else if (cVar2 == '\x01') {
    uVar6 = *param_2;
    uVar5 = param_2[1];
    *param_1 = uVar6;
    param_1[1] = uVar5;
    param_1[2] = param_2[2];
    *(int *)(param_1 + 3) = (int)param_2[3];
    *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
    cVar1 = (char)param_2[4];
    _swift_retain(uVar6 & 0x3fffffffffffffff);
    _swift_retain(uVar5);
    if (cVar1 == '\x04') {
      uVar6 = param_2[4];
      uVar7 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar6;
      param_1[7] = uVar7;
      param_1[6] = uVar5;
      *(char *)(param_1 + 8) = (char)param_2[8];
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
        uVar5 = param_2[6];
        param_1[5] = uVar6;
        param_1[6] = uVar5;
        _swift_retain(uVar6 & 0x3fffffffffffffff);
      }
      param_1[7] = param_2[7];
      *(char *)(param_1 + 8) = (char)param_2[8];
    }
  }
  else {
    uVar6 = *param_2;
    uVar5 = param_2[1];
    uVar7 = param_2[2];
    uVar3 = *(undefined1 *)((long)param_2 + 0x16);
    uVar4 = *(undefined3 *)((long)param_2 + 0x14);
    FUN_100656200(uVar6,uVar5,(ulong)(uint7)param_2[2]);
    *param_1 = uVar6;
    param_1[1] = uVar5;
    *(undefined1 *)((long)param_1 + 0x16) = uVar3;
    *(short *)((long)param_1 + 0x14) = (short)uVar4;
    *(int *)(param_1 + 2) = (int)uVar7;
  }
  *(char *)((long)param_1 + 0x41) = cVar2;
  return param_1;
}



/* Address: 0x10065cdc0 | FUN_10065cdc0 */

ulong * FUN_10065cdc0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  undefined3 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_1 != param_2) {
    FUN_10065c884(param_1);
    cVar2 = *(char *)((long)param_2 + 0x41);
    if (cVar2 == '\x02') {
      uVar6 = param_2[3];
      param_1[3] = uVar6;
      (*(code *)**(undefined8 **)(uVar6 - 8))(param_1,param_2);
    }
    else if (cVar2 == '\x01') {
      uVar5 = *param_2;
      *param_1 = uVar5;
      uVar7 = param_2[1];
      param_1[1] = uVar7;
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x14) = *(undefined4 *)((long)param_2 + 0x14);
      uVar6 = param_2[3];
      *(undefined4 *)((long)param_1 + 0x1b) = *(undefined4 *)((long)param_2 + 0x1b);
      *(int *)(param_1 + 3) = (int)uVar6;
      cVar1 = (char)param_2[4];
      _swift_retain(uVar5 & 0x3fffffffffffffff);
      _swift_retain(uVar7);
      if (cVar1 == '\x04') {
        uVar5 = param_2[5];
        uVar6 = param_2[4];
        uVar8 = param_2[7];
        uVar7 = param_2[6];
        *(char *)(param_1 + 8) = (char)param_2[8];
        param_1[5] = uVar5;
        param_1[4] = uVar6;
        param_1[7] = uVar8;
        param_1[6] = uVar7;
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
      uVar5 = param_2[1];
      uVar7 = param_2[2];
      uVar3 = *(undefined1 *)((long)param_2 + 0x16);
      uVar4 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_100656200(uVar6,uVar5,(ulong)(uint7)param_2[2]);
      *param_1 = uVar6;
      param_1[1] = uVar5;
      *(undefined1 *)((long)param_1 + 0x16) = uVar3;
      *(short *)((long)param_1 + 0x14) = (short)uVar4;
      *(int *)(param_1 + 2) = (int)uVar7;
    }
    *(char *)((long)param_1 + 0x41) = cVar2;
  }
  return param_1;
}



/* Address: 0x10065cf28 | FUN_10065cf28 */

void FUN_10065cf28(undefined8 *param_1,undefined8 *param_2)

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
  *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x10065cf4c | FUN_10065cf4c */

undefined8 * FUN_10065cf4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (param_1 != param_2) {
    FUN_10065c884();
    uVar1 = param_2[4];
    uVar3 = param_2[7];
    uVar2 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar3;
    param_1[6] = uVar2;
    *(undefined2 *)(param_1 + 8) = *(undefined2 *)(param_2 + 8);
    uVar3 = *param_2;
    uVar2 = param_2[3];
    uVar1 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    param_1[3] = uVar2;
    param_1[2] = uVar1;
  }
  return param_1;
}



/* Address: 0x10065cf94 | FUN_10065cf94 */

int FUN_10065cf94(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)((long)param_1 + 0x41) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x41) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10065cfdc | FUN_10065cfdc */

void FUN_10065cfdc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x41) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 8) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
  }
  return;
}



/* Address: 0x10065d034 | FUN_10065d034 */

undefined1  [16] FUN_10065d034(void)

{
  return ZEXT816(0x100ef1a40);
}



/* Address: 0x10065d044 | FUN_10065d044 */

void FUN_10065d044(ulong *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x41);
  if (2 < *(byte *)((long)param_1 + 0x41)) {
    uVar1 = (int)*param_1 + 3;
  }
  if (uVar1 == 2) {
    FUN_100004594();
    return;
  }
  if (uVar1 != 1) {
    FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    return;
  }
  _swift_release(*param_1 & 0x3fffffffffffffff);
  _swift_release(param_1[1]);
  if (((char)param_1[4] != '\x04') &&
     (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
    _swift_release(param_1[5] & 0x3fffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x10065d0f8 | FUN_10065d0f8 */

ulong * FUN_10065d0f8(ulong *param_1,ulong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar5 = (uint)*(byte *)((long)param_2 + 0x41);
  if (2 < *(byte *)((long)param_2 + 0x41)) {
    uVar5 = (int)*param_2 + 3;
  }
  if (uVar5 == 2) {
    uVar7 = param_2[3];
    param_1[3] = uVar7;
    (*(code *)**(undefined8 **)(uVar7 - 8))(param_1);
    uVar4 = 2;
  }
  else if (uVar5 == 1) {
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
    uVar4 = 1;
  }
  else {
    uVar7 = *param_2;
    uVar6 = param_2[1];
    uVar8 = param_2[2];
    uVar2 = *(undefined1 *)((long)param_2 + 0x16);
    uVar3 = *(undefined3 *)((long)param_2 + 0x14);
    FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
    uVar4 = 0;
    *param_1 = uVar7;
    param_1[1] = uVar6;
    *(undefined1 *)((long)param_1 + 0x16) = uVar2;
    *(short *)((long)param_1 + 0x14) = (short)uVar3;
    *(int *)(param_1 + 2) = (int)uVar8;
  }
  *(undefined1 *)((long)param_1 + 0x41) = uVar4;
  return param_1;
}



/* Address: 0x10065d254 | FUN_10065d254 */

ulong * FUN_10065d254(ulong *param_1,ulong *param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined3 uVar3;
  undefined1 uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  if (param_1 != param_2) {
    uVar5 = (uint)*(byte *)((long)param_1 + 0x41);
    if (2 < *(byte *)((long)param_1 + 0x41)) {
      uVar5 = (int)*param_1 + 3;
    }
    if (uVar5 == 2) {
      FUN_100004594(param_1);
    }
    else if (uVar5 == 1) {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
      }
    }
    else {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    }
    uVar5 = (uint)*(byte *)((long)param_2 + 0x41);
    if (2 < *(byte *)((long)param_2 + 0x41)) {
      uVar5 = (int)*param_2 + 3;
    }
    if (uVar5 == 2) {
      uVar7 = param_2[3];
      param_1[3] = uVar7;
      (*(code *)**(undefined8 **)(uVar7 - 8))(param_1,param_2);
      uVar4 = 2;
    }
    else if (uVar5 == 1) {
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
      uVar4 = 1;
    }
    else {
      uVar7 = *param_2;
      uVar6 = param_2[1];
      uVar8 = param_2[2];
      uVar2 = *(undefined1 *)((long)param_2 + 0x16);
      uVar3 = *(undefined3 *)((long)param_2 + 0x14);
      FUN_100656200(uVar7,uVar6,(ulong)(uint7)param_2[2]);
      uVar4 = 0;
      *param_1 = uVar7;
      param_1[1] = uVar6;
      *(undefined1 *)((long)param_1 + 0x16) = uVar2;
      *(short *)((long)param_1 + 0x14) = (short)uVar3;
      *(int *)(param_1 + 2) = (int)uVar8;
    }
    *(undefined1 *)((long)param_1 + 0x41) = uVar4;
  }
  return param_1;
}



/* Address: 0x10065d450 | FUN_10065d450 */

void FUN_10065d450(ulong *param_1,ulong *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)((long)param_1 + 0x41);
    if (2 < *(byte *)((long)param_1 + 0x41)) {
      uVar2 = (int)*param_1 + 3;
    }
    if (uVar2 == 2) {
      FUN_100004594();
    }
    else if (uVar2 == 1) {
      _swift_release(*param_1 & 0x3fffffffffffffff);
      _swift_release(param_1[1]);
      if (((char)param_1[4] != '\x04') &&
         (((param_1[5] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
        _swift_release(param_1[5] & 0x3fffffffffffffff);
      }
    }
    else {
      FUN_10000c650(*param_1,param_1[1],(ulong)(uint7)param_1[2]);
    }
    uVar2 = (uint)*(byte *)((long)param_2 + 0x41);
    if (2 < *(byte *)((long)param_2 + 0x41)) {
      uVar2 = (int)*param_2 + 3;
    }
    if (uVar2 == 2) {
      uVar3 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      uVar1 = 2;
    }
    else if (uVar2 == 1) {
      uVar3 = param_2[4];
      uVar5 = param_2[7];
      uVar4 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar3;
      param_1[7] = uVar5;
      param_1[6] = uVar4;
      *(char *)(param_1 + 8) = (char)param_2[8];
      uVar5 = *param_2;
      uVar4 = param_2[3];
      uVar3 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar5;
      param_1[3] = uVar4;
      param_1[2] = uVar3;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
      *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    }
    *(undefined1 *)((long)param_1 + 0x41) = uVar1;
  }
  return;
}



/* Address: 0x10065d578 | FUN_10065d578 */

int FUN_10065d578(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x42) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)((long)param_1 + 0x41)) {
    iVar1 = (*(byte *)((long)param_1 + 0x41) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x10065d5b4 | FUN_10065d5b4 */

void FUN_10065d5b4(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x41) = -(char)param_2;
      return;
    }
  }
  else {
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
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x42) = 1;
    }
  }
  return;
}



/* Address: 0x10065d604 | FUN_10065d604 */

uint FUN_10065d604(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x41);
  if (2 < *(byte *)((long)param_1 + 0x41)) {
    uVar1 = *param_1 + 3;
  }
  return uVar1;
}


