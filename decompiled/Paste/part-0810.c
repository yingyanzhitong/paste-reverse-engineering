/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008dc258 | FUN_1008dc258 */

void FUN_1008dc258(ulong *param_1,long *param_2,long *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long unaff_x21;
  ulong uVar10;
  undefined1 auStack_68 [24];
  
  FUN_100612cb0();
  lVar9 = *param_2;
  lVar8 = param_2[2];
  uVar3 = *(undefined2 *)((long)param_2 + 0x14);
  uVar2 = *(undefined1 *)((long)param_2 + 0x16);
  _swift_beginAccess(lVar9 + 0x18,auStack_68,0,0);
  uVar4 = (uint)CONCAT21(uVar3,uVar2);
  lVar9 = *(long *)(lVar9 + 0x18) + (ulong)uVar4;
  uVar1 = *(uint *)((long)param_2 + 0xc);
  uVar10 = (ulong)uVar1;
  lVar8 = lVar9 + (ulong)((int)lVar8 - uVar4);
  FUN_10095a0a8();
  lVar7 = 0;
  if (lVar8 != 0) {
    lVar7 = lVar8 + lVar9;
  }
  uVar6 = 0;
  if (lVar8 != 0) {
    uVar6 = lVar8 + uVar10;
  }
  (**(code **)(*(long *)(*param_3 + 0x380) + 0x30))(uVar6,lVar7,*(undefined8 *)(*param_3 + 0x378));
  if (unaff_x21 == 0) {
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008dc348);
      (*pcVar5)();
    }
    if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008dc34c);
      (*pcVar5)();
    }
    if (CARRY4(uVar1,(uint)uVar6)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008dc350);
      (*pcVar5)();
    }
    *(uint *)((long)param_2 + 0xc) = uVar1 + (uint)uVar6;
    *param_1 = uVar6;
    *(char *)(param_1 + 1) = (char)lVar7;
  }
  return;
}



/* Address: 0x1008dc350 | FUN_1008dc350 */

undefined1  [16] FUN_1008dc350(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long *unaff_x20;
  long unaff_x21;
  undefined1 auVar3 [16];
  
  uVar1 = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
  _swift_retain(uVar1);
  uVar2 = uVar1;
  FUN_100936884();
  if (unaff_x21 != 0) {
    uVar1 = extraout_x8;
  }
  auVar3._8_4_ = (uint)uVar2 & 0x1ff;
  auVar3._0_8_ = uVar1;
  auVar3._12_4_ = 0;
  return auVar3;
}



/* Address: 0x1008dc3a8 | FUN_1008dc3a8 */

undefined1  [16] FUN_1008dc3a8(long param_1,long param_2,long *param_3)

{
  undefined1 auVar1 [16];
  
  if ((param_1 != 0) && (param_2 != param_1)) {
    (**(code **)(*(long *)(*param_3 + 0x380) + 0x20))
              (param_1,param_2,*(undefined8 *)(*param_3 + 0x378));
    auVar1._8_8_ = param_2;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  return ZEXT816(1) << 0x40;
}



/* Address: 0x1008dc3fc | FUN_1008dc3fc */

/* WARNING: Removing unreachable block (ram,0x0001008dc800) */
/* WARNING: Removing unreachable block (ram,0x0001008dc8c0) */
/* WARNING: Removing unreachable block (ram,0x0001008dc804) */
/* WARNING: Removing unreachable block (ram,0x0001008dc8cc) */
/* WARNING: Removing unreachable block (ram,0x0001008dc824) */
/* WARNING: Removing unreachable block (ram,0x0001008dc614) */
/* WARNING: Removing unreachable block (ram,0x0001008dc928) */
/* WARNING: Removing unreachable block (ram,0x0001008dc618) */
/* WARNING: Removing unreachable block (ram,0x0001008dc934) */
/* WARNING: Removing unreachable block (ram,0x0001008dc634) */

void FUN_1008dc3fc(long param_1,ulong param_2,long param_3)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 local_90;
  undefined7 uStack_8f;
  char local_88;
  undefined *local_78;
  long local_68;
  
  iVar3 = (int)&local_90;
  lVar8 = *unaff_x20;
  lVar9 = param_3;
  if ((param_2 & 0xff) == 0) {
    if ((*(byte *)((long)unaff_x20 + *(long *)(lVar8 + 0x3a0)) & 1) != 0) {
      if (param_3 == 0) {
        return;
      }
      if (DAT_100fec5a8 != -1) {
        _swift_once(&DAT_100fec5a8,FUN_100901fdc);
      }
      uVar6 = DAT_1010581d0;
      uVar4 = *(ulong *)(param_3 + 0x20);
      lVar8 = *(long *)(param_3 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar10 = lVar8;
      (**(code **)(lVar8 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar7 = &DAT_100f0fd90;
        _swift_allocObject(&DAT_100f0fd90,0x20,7);
        *(long *)(puVar7 + 0x10) = param_3;
        *(undefined8 *)(puVar7 + 0x18) = uVar6;
        pcVar11 = *(code **)(lVar8 + 0x18);
        _swift_retain(param_3);
        _swift_errorRetain(uVar6);
LAB_1008dc72c:
        (*pcVar11)(thunk_FUN_1008d678c,puVar7,uVar4,lVar8);
        _swift_release(puVar7);
        return;
      }
LAB_1008dc568:
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar10);
      _swift_bridgeObjectRelease(lVar9);
      return;
    }
    if ((*(byte *)((long)unaff_x20 + *(long *)(lVar8 + 0x398)) & 1) != 0) goto LAB_1008dc434;
    FUN_100934a9c();
    uVar2 = (uint)lVar9 & 0xff;
    if (1 < uVar2) {
      if (uVar2 != 2) {
        return;
      }
      if (param_2 == 0) {
        _swift_errorRetain(param_3);
        uVar4 = 0;
      }
      else {
        uVar5 = *(ulong *)(param_2 + 0x20);
        lVar8 = *(long *)(param_2 + 0x28);
        _swift_getObjectType();
        pcVar11 = *(code **)(lVar8 + 0x10);
        _swift_retain_n(param_2,2);
        _swift_errorRetain(param_3);
        (*pcVar11)(uVar5,lVar8);
        uVar4 = param_2;
        if ((uVar5 & 1) == 0) {
          uVar6 = *(undefined8 *)(param_2 + 0x20);
          lVar9 = *(long *)(param_2 + 0x28);
          _swift_getObjectType(uVar6);
          puVar7 = &DAT_100f0fd40;
          _swift_allocObject(&DAT_100f0fd40,0x20,7);
          *(ulong *)(puVar7 + 0x10) = param_2;
          *(long *)(puVar7 + 0x18) = param_3;
          pcVar11 = *(code **)(lVar9 + 0x18);
          _swift_retain(param_2);
          _swift_errorRetain(param_3);
          (*pcVar11)(thunk_FUN_1008d678c,puVar7,uVar6,lVar9);
          _swift_release(param_2);
          _swift_release(puVar7);
        }
        else {
          lVar10 = param_3;
          thunk_FUN_1005de8f4(param_3);
          FUN_1006486f8();
          _swift_release(param_2);
          FUN_100004550(lVar10,lVar8);
          _swift_bridgeObjectRelease(lVar9);
        }
      }
      FUN_1008dc3fc(param_3,2,0);
      FUN_1008dd938(param_3,param_2,2);
      _swift_release(uVar4);
      _swift_errorRelease(param_3);
      return;
    }
    pcVar11 = *(code **)(*unaff_x20 + 0x418);
    FUN_1008dd970(param_3,param_2);
    lVar8 = 0;
    (*pcVar11)(0);
    if (param_3 != 0) {
      FUN_10090d0b8(0,0,param_3);
      lVar8 = param_3;
      FUN_1008dd938(param_3,param_2,lVar9);
    }
    FUN_1008d8c68();
    FUN_1008db330();
    local_78 = &DAT_100eeb880;
    local_90 = 1;
    _swift_retain();
    FUN_100629a5c(&local_90);
    FUN_1008dd938(param_3,param_2,lVar9);
    goto LAB_1008dc9f4;
  }
  if (((uint)param_2 & 0xff) == 2) {
LAB_1008dc434:
    plVar1 = (long *)((long)unaff_x20 + *(long *)(lVar8 + 0x388));
    lVar9 = *plVar1;
    if (lVar9 != 0) {
      lVar8 = plVar1[1];
      lVar10 = plVar1[2];
      plVar1[1] = 0;
      plVar1[2] = 0;
      *plVar1 = 0;
      FUN_100950b80(lVar9,lVar8,lVar10);
      _swift_release(lVar10);
      _swift_release(lVar9);
    }
    FUN_1008d8e84(param_1,2,param_3);
    return;
  }
  lVar10 = *(long *)(lVar8 + 0x398);
  if ((*(byte *)((long)unaff_x20 + lVar10) & 1) != 0) {
    if (param_3 == 0) {
      return;
    }
    if (DAT_100fec5b0 != -1) {
      _swift_once(&DAT_100fec5b0,FUN_100901fac);
    }
    uVar6 = DAT_1010581d8;
    uVar4 = *(ulong *)(param_3 + 0x20);
    lVar8 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar10 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar7 = &DAT_100f0fd18;
      _swift_allocObject(&DAT_100f0fd18,0x20,7);
      *(long *)(puVar7 + 0x10) = param_3;
      *(undefined8 *)(puVar7 + 0x18) = uVar6;
      pcVar11 = *(code **)(lVar8 + 0x18);
      _swift_retain(param_3);
      _swift_errorRetain(uVar6);
      goto LAB_1008dc72c;
    }
    goto LAB_1008dc568;
  }
  if ((*(byte *)((long)unaff_x20 + *(long *)(lVar8 + 0x3a0)) & 1) != 0) goto LAB_1008dc434;
  local_68 = param_1;
  _swift_errorRetain();
  puVar7 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(&local_90,&local_68,puVar7,&DAT_100eeb710,0);
  if (iVar3 == 0) {
LAB_1008dc7e0:
    _swift_errorRelease(local_68);
    lVar8 = 1;
    (**(code **)(*unaff_x20 + 0x418))(1);
  }
  else {
    if ((local_88 != '\x03') || (CONCAT71(uStack_8f,local_90) != 6)) {
      FUN_10061e298();
      goto LAB_1008dc7e0;
    }
    *(undefined1 *)((long)unaff_x20 + lVar10) = 1;
    lVar8 = local_68;
    _swift_errorRelease(local_68);
  }
  FUN_1008d8e08();
  if (param_3 != 0) {
    lVar8 = 0;
    FUN_10090d0b8(0,0,param_3);
  }
  FUN_1008db330();
  local_78 = &DAT_100eeb880;
  local_90 = 0;
  _swift_retain();
  FUN_100629a5c(&local_90);
LAB_1008dc9f4:
  _swift_release(lVar8);
  FUN_100004594(&local_90);
  return;
}



/* Address: 0x1008dcb20 | FUN_1008dcb20 */

bool FUN_1008dcb20(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  return *(char *)(lVar1 + 0x30) != '\x01';
}



/* Address: 0x1008dcb6c | FUN_1008dcb6c */

void FUN_1008dcb6c(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
  _swift_beginAccess(lVar2 + 0x10,auStack_38,1,0);
  lVar1 = *(long *)(lVar2 + 0x20) - *(long *)(lVar2 + 0x18);
  if (*(long *)(lVar2 + 0x20) < *(long *)(lVar2 + 0x18)) {
    lVar1 = lVar1 + *(long *)(*(long *)(lVar2 + 0x10) + 0x10);
  }
  if (0 < lVar1) {
    *(long *)(lVar2 + 0x28) = lVar1 + -1;
    *(undefined1 *)(lVar2 + 0x30) = 0;
  }
  return;
}



/* Address: 0x1008dcbd4 | FUN_1008dcbd4 */

void FUN_1008dcbd4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  lVar1 = param_1;
  FUN_10093507c();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = *(ulong *)(lVar1 + 0x20);
  lVar5 = *(long *)(lVar1 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  if ((uVar2 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    _swift_release(lVar1);
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  uVar3 = *(undefined8 *)(lVar1 + 0x20);
  lVar5 = *(long *)(lVar1 + 0x28);
  _swift_getObjectType(uVar3);
  puVar4 = &DAT_100f0fcc8;
  _swift_allocObject(&DAT_100f0fcc8,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar1;
  *(long *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar5 + 0x18);
  _swift_retain(lVar1);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1008d678c,puVar4,uVar3,lVar5);
  _swift_release(lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008dcd04 | FUN_1008dcd04 */

undefined8 FUN_1008dcd04(undefined8 param_1)

{
  long *unaff_x20;
  
  if ((*(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x398)) & 1) != 0) {
    return 0;
  }
  FUN_1008d8588();
  return param_1;
}



/* Address: 0x1008dcd20 | FUN_1008dcd20 */

void FUN_1008dcd20(void)

{
  long *unaff_x20;
  
  if ((*(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x398)) & 1) != 0) {
    return;
  }
  FUN_1008d8d2c();
  return;
}



/* Address: 0x1008dcd38 | FUN_1008dcd38 */

void FUN_1008dcd38(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  code *pcVar7;
  ulong local_68;
  undefined8 uStack_60;
  uint7 local_58;
  
  lVar5 = *unaff_x20;
  if (*(char *)((long)unaff_x20 + *(long *)(lVar5 + 0x3a0)) == '\x01') {
    if (param_2 != 0) {
      if (DAT_100fec5a8 != -1) {
        _swift_once(&DAT_100fec5a8,FUN_100901fdc);
      }
      uVar1 = DAT_1010581d0;
      uVar2 = *(ulong *)(param_2 + 0x20);
      lVar5 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar6 = uVar2;
      lVar4 = lVar5;
      (**(code **)(lVar5 + 0x10))();
      if ((uVar6 & 1) != 0) {
        thunk_FUN_1005de8f4(uVar1);
        FUN_1006486f8();
        FUN_100004550(uVar1,lVar4);
        _swift_bridgeObjectRelease(param_3);
        return;
      }
      puVar3 = &DAT_100f0fca0;
      _swift_allocObject(&DAT_100f0fca0,0x20,7);
      *(long *)(puVar3 + 0x10) = param_2;
      *(undefined8 *)(puVar3 + 0x18) = uVar1;
      pcVar7 = *(code **)(lVar5 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(uVar1);
      (*pcVar7)(FUN_1008d678c,puVar3,uVar2,lVar5);
      _swift_release(puVar3);
      return;
    }
  }
  else {
    uVar1 = 0;
    FUN_1008db8fc(0,*(undefined8 *)(lVar5 + 0x378),*(undefined8 *)(lVar5 + 0x380));
    FUN_10061d8d8(&local_68,param_1,&DAT_100ef13d8,uVar1,&DAT_100ef13d8,&PTR_PTR_100f0f660);
    uVar6 = (ulong)local_58;
    uVar2 = local_68;
    FUN_1009351dc(local_68,uStack_60,uVar6,param_2);
    if ((uVar2 & 1) == 0) {
      FUN_1008db330();
      _swift_retain();
      FUN_10062cc8c();
      FUN_10000c650(local_68,uStack_60,uVar6);
      _swift_release(uVar2);
    }
    else {
      FUN_10000c650(local_68,uStack_60,uVar6);
    }
  }
  return;
}



/* Address: 0x1008dcf48 | FUN_1008dcf48 */

void FUN_1008dcf48(ulong *param_1,code *param_2)

{
  long lVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong uVar11;
  ulong *unaff_x20;
  long unaff_x21;
  long lVar12;
  ulong local_a0;
  char local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar8 = unaff_x20[9];
  uVar7 = unaff_x20[10];
  FUN_100004640(unaff_x20 + 6,uVar8);
  (**(code **)(uVar7 + 0x18))();
  uVar6 = *unaff_x20;
  if (((uint)uVar7 & 0xff) != 1) {
    if ((uVar6 != 0) && (_swift_isUniquelyReferenced_nonNull_native(), (int)uVar6 != 0)) {
      puVar10 = unaff_x20;
      FUN_100959fb4();
      if (unaff_x21 != 0) {
        return;
      }
      uVar7 = *unaff_x20;
      if (uVar7 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd334);
        (*pcVar4)();
      }
      uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
      uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
      uVar6 = unaff_x20[2];
      uVar11 = unaff_x20[1];
      *param_1 = uVar7;
      *(int *)(param_1 + 1) = (int)uVar11;
      *(int *)((long)param_1 + 0xc) = (int)(uVar11 >> 0x20);
      *(int *)(param_1 + 2) = (int)uVar6;
      *(undefined2 *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)((long)param_1 + 0x16) = uVar2;
      param_1[3] = (ulong)puVar10;
      *(char *)(param_1 + 4) = (char)uVar8;
      goto LAB_1008dd2c4;
    }
    uVar7 = unaff_x20[3];
    uVar6 = unaff_x20[4];
    uVar11 = *(ulong *)(uVar7 + 0x10);
    if ((long)uVar11 < (long)uVar6) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd310);
      (*pcVar4)();
    }
    uVar9 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar9 & 1) == 0) {
      FUN_1008dd920();
    }
    lVar12 = uVar6 * 0x18;
    uVar9 = uVar6;
    do {
      if (uVar11 == uVar9) {
        if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd324);
          (*pcVar4)();
        }
        lVar12 = 0;
        uVar9 = 0;
        goto LAB_1008dd17c;
      }
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd304);
        (*pcVar4)();
      }
      if (*(ulong *)(uVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd308);
        (*pcVar4)();
      }
      iVar5 = (int)*(undefined8 *)(uVar7 + lVar12 + 0x20);
      _swift_isUniquelyReferenced_nonNull_native();
      lVar12 = lVar12 + 0x18;
      uVar9 = uVar9 + 1;
    } while (iVar5 == 0);
    if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd170);
      (*pcVar4)();
    }
    goto LAB_1008dd1b0;
  }
  if ((uVar6 == 0) || ((unaff_x20[0xb] & 1) != 0)) goto LAB_1008dd2d0;
  uVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = *unaff_x20;
  uVar8 = uVar6;
  if ((uVar7 & 1) == 0) {
    _swift_beginAccess(uVar6 + 0x10,auStack_78,0,0);
    uVar8 = (ulong)*(uint *)(uVar6 + 0x10);
    FUN_10061204c();
    _swift_release(uVar6);
    *unaff_x20 = uVar8;
  }
  _swift_beginAccess(uVar8 + 0x10,auStack_90,0,0);
  *(undefined4 *)(unaff_x20 + 2) = *(undefined4 *)(uVar8 + 0x10);
  *(undefined2 *)((long)unaff_x20 + 0x14) = 0;
  *(undefined1 *)((long)unaff_x20 + 0x16) = 0;
  unaff_x20[1] = 0;
  if (*unaff_x20 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd330);
    (*pcVar4)();
  }
  (*param_2)(&local_a0);
  if (unaff_x21 != 0) {
    return;
  }
  uVar7 = *unaff_x20;
  if (uVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd338);
    (*pcVar4)();
  }
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar8 = unaff_x20[2];
  uVar6 = unaff_x20[1];
  *param_1 = uVar7;
  *(int *)(param_1 + 1) = (int)uVar6;
  *(int *)((long)param_1 + 0xc) = (int)(uVar6 >> 0x20);
  *(int *)(param_1 + 2) = (int)uVar8;
  *(undefined2 *)((long)param_1 + 0x14) = uVar3;
  *(undefined1 *)((long)param_1 + 0x16) = uVar2;
  goto LAB_1008dd2bc;
  while( true ) {
    if (*(ulong *)(uVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd30c);
      (*pcVar4)();
    }
    uVar9 = uVar9 + 1;
    iVar5 = (int)*(undefined8 *)(uVar7 + lVar12 + 0x20);
    _swift_isUniquelyReferenced_nonNull_native();
    lVar12 = lVar12 + 0x18;
    if (iVar5 != 0) break;
LAB_1008dd17c:
    if (uVar6 == uVar9) {
      unaff_x20[3] = uVar7;
      goto LAB_1008dd2d0;
    }
  }
  if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd328);
    (*pcVar4)();
  }
LAB_1008dd1b0:
  lVar1 = uVar7 + lVar12;
  iVar5 = (int)*(undefined8 *)(lVar1 + 8);
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = *(ulong *)(lVar1 + 8);
  if (iVar5 == 0) {
    FUN_10061204c();
    _swift_release(uVar6);
    *(ulong *)(lVar1 + 8) = uVar8;
    uVar6 = uVar8;
  }
  else {
    _swift_beginAccess(uVar6 + 0x10,auStack_90,0,0);
    if (*(uint *)(uVar6 + 0x10) < (uint)uVar8) {
      FUN_10061217c(uVar8);
    }
  }
  _swift_beginAccess(uVar6 + 0x10,auStack_78,0,0);
  lVar12 = uVar7 + lVar12;
  *(undefined4 *)(lVar12 + 0x18) = *(undefined4 *)(uVar6 + 0x10);
  *(undefined2 *)(lVar12 + 0x1c) = 0;
  *(undefined1 *)(lVar12 + 0x1e) = 0;
  *(undefined8 *)(lVar12 + 0x10) = 0;
  (*param_2)(&local_a0,lVar1 + 8);
  if (unaff_x21 != 0) {
    unaff_x20[3] = uVar7;
    return;
  }
  uVar9 = uVar9 - 1;
  unaff_x20[3] = uVar7;
  if (local_98 == -1) {
LAB_1008dd2d0:
    *(undefined1 *)(param_1 + 4) = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  unaff_x20[4] = uVar9;
  if (*(ulong *)(uVar7 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008dd32c);
    (*pcVar4)();
  }
  puVar10 = (ulong *)(uVar7 + 0x20 + uVar9 * 0x18);
  uVar7 = *puVar10;
  uVar8 = puVar10[2];
  uVar3 = *(undefined2 *)((long)puVar10 + 0x14);
  uVar2 = *(undefined1 *)((long)puVar10 + 0x16);
  *param_1 = uVar7;
  param_1[1] = puVar10[1];
  *(int *)(param_1 + 2) = (int)uVar8;
  *(undefined2 *)((long)param_1 + 0x14) = uVar3;
  *(undefined1 *)((long)param_1 + 0x16) = uVar2;
LAB_1008dd2bc:
  param_1[3] = local_a0;
  *(char *)(param_1 + 4) = local_98;
LAB_1008dd2c4:
  _swift_retain(uVar7);
  return;
}



/* Address: 0x1008dd338 | FUN_1008dd338 */

undefined8 *
FUN_1008dd338(undefined8 *param_1,undefined8 *param_2,long param_3,undefined8 param_4,
             undefined8 param_5,code *param_6,undefined8 *param_7)

{
  long lVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined3 uVar5;
  long lVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined4 uVar11;
  long *unaff_x20;
  undefined8 *puVar12;
  long unaff_x21;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 uVar16;
  long lVar17;
  ulong local_d8;
  undefined8 local_88;
  undefined1 local_80;
  undefined8 *local_78;
  long local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar17 = unaff_x20[10];
  FUN_100004640(unaff_x20 + 6,unaff_x20[9]);
  (**(code **)(lVar17 + 0x10))();
  uVar11 = (undefined4)param_4;
  uVar3 = (undefined1)((ulong)param_4 >> 0x30);
  uVar4 = (undefined2)((ulong)param_4 >> 0x20);
  lVar17 = *unaff_x20;
  uVar16 = (undefined4)((ulong)param_3 >> 0x20);
  local_78 = param_2;
  local_70 = param_3;
  local_68 = uVar11;
  local_64 = uVar4;
  local_62 = uVar3;
  if (lVar17 == 0) {
    uVar14 = unaff_x20[3];
    lVar17 = *(long *)(uVar14 + 0x10);
    if (lVar17 == 0) {
      *unaff_x20 = (long)param_2;
      unaff_x20[1] = param_3;
      *(undefined4 *)(unaff_x20 + 2) = uVar11;
      *(undefined1 *)((long)unaff_x20 + 0x16) = uVar3;
      *(undefined2 *)((long)unaff_x20 + 0x14) = uVar4;
      _swift_retain(param_2);
      (*param_6)(&local_88);
      if (unaff_x21 == 0) {
        puVar12 = (undefined8 *)*unaff_x20;
        if (puVar12 != (undefined8 *)0x0) {
          _swift_retain(puVar12);
          _swift_release(param_2);
          *param_1 = local_88;
          *(undefined1 *)(param_1 + 1) = local_80;
          return puVar12;
        }
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008dd830);
        (*pcVar7)();
      }
    }
    else {
      if (lVar17 < unaff_x20[5]) {
        _swift_retain(param_2);
        uVar15 = uVar14;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar10 = uVar14;
        if ((uVar15 & 1) == 0) {
          uVar10 = 0;
          FUN_100902da8(0,lVar17 + 1,1,uVar14);
        }
        uVar14 = *(ulong *)(uVar10 + 0x10);
        uVar15 = uVar10;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar14) {
          uVar15 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
          FUN_100902da8(uVar15,uVar14 + 1,1,uVar10);
        }
        *(ulong *)(uVar15 + 0x10) = uVar14 + 1;
        lVar17 = uVar15 + uVar14 * 0x18;
        *(undefined8 **)(lVar17 + 0x20) = param_2;
        *(int *)(lVar17 + 0x28) = (int)param_3;
        *(undefined4 *)(lVar17 + 0x2c) = uVar16;
        *(undefined4 *)(lVar17 + 0x30) = uVar11;
        *(undefined2 *)(lVar17 + 0x34) = uVar4;
        *(undefined1 *)(lVar17 + 0x36) = uVar3;
        unaff_x20[3] = uVar15;
        unaff_x20[4] = uVar14;
        FUN_1008dd830(param_1,uVar14,param_6,param_7);
        _swift_release(param_2);
        return param_1;
      }
      (*param_6)(&local_88,&local_78);
      param_2 = local_78;
      param_7 = local_78;
      if (unaff_x21 == 0) {
        *param_1 = local_88;
        *(undefined1 *)(param_1 + 1) = local_80;
        return local_78;
      }
    }
    _swift_release(param_2);
    return param_7;
  }
  uVar14 = unaff_x20[5];
  if ((long)uVar14 < 2) {
    _swift_retain(lVar17);
    (*param_6)(&local_88,&local_78);
    puVar12 = local_78;
    if (unaff_x21 != 0) {
      _swift_release(lVar17);
      _swift_release(puVar12);
      return param_7;
    }
    _swift_release(lVar17);
    *param_1 = local_88;
    *(undefined1 *)(param_1 + 1) = local_80;
    return local_78;
  }
  uVar5 = *(undefined3 *)((long)unaff_x20 + 0x14);
  lVar9 = unaff_x20[2];
  lVar6 = unaff_x20[1];
  uVar2 = *(undefined4 *)((long)unaff_x20 + 0xc);
  *unaff_x20 = 0;
  unaff_x20[1] = 0;
  *(undefined8 *)((long)unaff_x20 + 0xf) = 0;
  uVar10 = unaff_x20[3];
  uVar15 = uVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((int)uVar15 != 0) {
    local_d8 = *(ulong *)(uVar10 + 0x18);
    uVar13 = local_d8 >> 1;
    if (uVar14 <= uVar13) goto LAB_1008dd55c;
  }
  FUN_100902da8();
  local_d8 = *(ulong *)(uVar15 + 0x18);
  uVar13 = local_d8 >> 1;
  uVar10 = uVar15;
LAB_1008dd55c:
  uVar15 = *(ulong *)(uVar10 + 0x10);
  lVar1 = uVar15 + 1;
  _swift_retain(lVar17);
  uVar14 = uVar10;
  if (uVar13 <= uVar15) {
    uVar14 = (ulong)(1 < local_d8);
    FUN_100902da8(uVar14,lVar1,1,uVar10);
    local_d8 = *(ulong *)(uVar14 + 0x18);
    uVar13 = local_d8 >> 1;
  }
  *(long *)(uVar14 + 0x10) = lVar1;
  lVar8 = uVar14 + uVar15 * 0x18;
  *(long *)(lVar8 + 0x20) = lVar17;
  *(int *)(lVar8 + 0x28) = (int)lVar6;
  *(undefined4 *)(lVar8 + 0x2c) = uVar2;
  *(int *)(lVar8 + 0x30) = (int)lVar9;
  *(short *)(lVar8 + 0x34) = (short)uVar5;
  *(char *)(lVar8 + 0x36) = (char)((uint3)uVar5 >> 0x10);
  lVar9 = uVar15 + 2;
  _swift_retain(param_2);
  uVar15 = uVar14;
  if ((long)uVar13 < lVar9) {
    uVar15 = (ulong)(1 < local_d8);
    FUN_100902da8(uVar15,lVar9,1,uVar14);
  }
  *(long *)(uVar15 + 0x10) = lVar9;
  lVar9 = uVar15 + lVar1 * 0x18;
  *(undefined8 **)(lVar9 + 0x20) = param_2;
  *(int *)(lVar9 + 0x28) = (int)param_3;
  *(undefined4 *)(lVar9 + 0x2c) = uVar16;
  *(undefined4 *)(lVar9 + 0x30) = uVar11;
  *(undefined2 *)(lVar9 + 0x34) = uVar4;
  *(undefined1 *)(lVar9 + 0x36) = uVar3;
  unaff_x20[3] = uVar15;
  unaff_x20[4] = lVar1;
  FUN_1008dd830(param_1,lVar1,param_6,param_7);
  _swift_release(lVar17);
  _swift_release(param_2);
  return param_1;
}



/* Address: 0x1008dd830 | FUN_1008dd830 */

void FUN_1008dd830(undefined8 *param_1,ulong param_2,code *param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  ulong uVar4;
  long lVar5;
  undefined8 local_60;
  undefined1 local_58;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar3 & 1) == 0) {
    FUN_1008dd920();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008dd918);
    (*pcVar2)();
  }
  if (*(ulong *)(uVar4 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008dd91c);
    (*pcVar2)();
  }
  lVar5 = uVar4 + param_2 * 0x18;
  (*param_3)(&local_60,lVar5 + 0x20);
  *(ulong *)(unaff_x20 + 0x18) = uVar4;
  if (unaff_x21 == 0) {
    if (*(ulong *)(uVar4 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008dd920);
      (*pcVar2)();
    }
    uVar1 = *(undefined8 *)(lVar5 + 0x20);
    *param_1 = local_60;
    *(undefined1 *)(param_1 + 1) = local_58;
    _swift_retain(uVar1);
  }
  return;
}



/* Address: 0x1008dd920 | FUN_1008dd920 */

void FUN_1008dd920(long param_1)

{
  FUN_100902da8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008dd934 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008dd938 | FUN_1008dd938 */

void FUN_1008dd938(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (1 < param_3) {
    if (param_3 != 2) {
      return;
    }
    _swift_errorRelease();
    param_1 = param_2;
  }
  _swift_release(param_1);
  return;
}



/* Address: 0x1008dd970 | FUN_1008dd970 */

void FUN_1008dd970(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (1 < param_3) {
    if (param_3 != 2) {
      return;
    }
    _swift_errorRetain();
    param_1 = param_2;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x1008dd9a8 | FUN_1008dd9a8 */

void FUN_1008dd9a8(void)

{
  FUN_1008dc3a8();
  return;
}



/* Address: 0x1008dd9c0 | FUN_1008dd9c0 */

void FUN_1008dd9c0(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*unaff_x20 + 0x380) + 0x28))
            (param_1,param_2,*(undefined8 *)(*unaff_x20 + 0x378));
  return;
}



/* Address: 0x1008dd9f4 | FUN_1008dd9f4 */

void FUN_1008dd9f4(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (!SBORROW8(param_3,param_2)) {
    (**(code **)(*(long *)(*unaff_x20 + 0x380) + 0x48))
              (param_1,param_2,param_3 - param_2,*(undefined8 *)(*unaff_x20 + 0x378));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008dda34);
  (*pcVar1)();
}



/* Address: 0x1008dda34 | FUN_1008dda34 */

void FUN_1008dda34(void)

{
  FUN_1008dc258();
  return;
}



/* Address: 0x1008dda4c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda50 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda54 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda58 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda5c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda60 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008dda64 | FUN_1008dda64 */

void FUN_1008dda64(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_68 [24];
  
  uVar2 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar6 = DAT_101058180;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar7 = &DAT_100f13850;
    _swift_allocObject(&DAT_100f13850,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar6;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar6);
    (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar2,lVar8);
    _swift_release(puVar7);
    return;
  }
  uVar6 = 1;
  _swift_beginAccess(unaff_x20 + 0x23,auStack_68,1,0);
  cVar1 = *(char *)((long)unaff_x20 + 0x132);
  if (cVar1 == '\0' || cVar1 == '\x05') {
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      if (cVar1 != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dddf0);
        (*pcVar9)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 1;
      puVar7 = (undefined *)unaff_x20[0x1b];
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dddf4);
        (*pcVar9)();
      }
      if (param_1 == 0) {
        _swift_retain(puVar7);
      }
      else {
        _swift_retain(puVar7);
        FUN_10090d0b8(0,0,param_1);
      }
      FUN_10062cc04(puVar7);
      goto LAB_1008ddd7c;
    }
    if (DAT_100fec608 == -1) {
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    else {
      _swift_once(&DAT_100fec608,FUN_100902068);
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    DAT_1010581e8 = uVar4;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dddd4);
      (*pcVar9)();
    }
    _swift_retain(lVar8);
    FUN_10062cce4(uVar4,lVar8);
    _swift_release(lVar8);
    uVar6 = 0;
    (**(code **)(*unaff_x20 + 0x300))(uVar4,2,0);
    if (param_1 == 0) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) goto LAB_1008ddc08;
    puVar7 = &DAT_100f13878;
    _swift_allocObject(&DAT_100f13878,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  else {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec5f8 != -1) {
      _swift_once(&DAT_100fec5f8,FUN_100901f9c);
    }
    uVar4 = DAT_101058190;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
LAB_1008ddc08:
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
    puVar7 = &DAT_100f138a0;
    _swift_allocObject(&DAT_100f138a0,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar2,lVar8);
LAB_1008ddd7c:
  _swift_release(puVar7);
  return;
}



/* Address: 0x1008dddf4 | FUN_1008dddf4 */

void FUN_1008dddf4(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_68 [24];
  
  uVar2 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar6 = DAT_101058180;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar7 = &DAT_100f12450;
    _swift_allocObject(&DAT_100f12450,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar6;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar6);
    (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar2,lVar8);
    _swift_release(puVar7);
    return;
  }
  uVar6 = 1;
  _swift_beginAccess(unaff_x20 + 0x23,auStack_68,1,0);
  cVar1 = *(char *)((long)unaff_x20 + 0x132);
  if (cVar1 == '\0' || cVar1 == '\x05') {
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      if (cVar1 != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de180);
        (*pcVar9)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 1;
      puVar7 = (undefined *)unaff_x20[0x1b];
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de184);
        (*pcVar9)();
      }
      if (param_1 == 0) {
        _swift_retain(puVar7);
      }
      else {
        _swift_retain(puVar7);
        FUN_10090d0b8(0,0,param_1);
      }
      FUN_10062cc04(puVar7);
      goto LAB_1008de10c;
    }
    if (DAT_100fec608 == -1) {
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    else {
      _swift_once(&DAT_100fec608,FUN_100902068);
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    DAT_1010581e8 = uVar4;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de164);
      (*pcVar9)();
    }
    _swift_retain(lVar8);
    FUN_10062cce4(uVar4,lVar8);
    _swift_release(lVar8);
    uVar6 = 0;
    (**(code **)(*unaff_x20 + 0x300))(uVar4,2,0);
    if (param_1 == 0) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) goto LAB_1008ddf98;
    puVar7 = &DAT_100f12478;
    _swift_allocObject(&DAT_100f12478,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  else {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec5f8 != -1) {
      _swift_once(&DAT_100fec5f8,FUN_100901f9c);
    }
    uVar4 = DAT_101058190;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
LAB_1008ddf98:
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
    puVar7 = &DAT_100f124a0;
    _swift_allocObject(&DAT_100f124a0,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar2,lVar8);
LAB_1008de10c:
  _swift_release(puVar7);
  return;
}



/* Address: 0x1008de184 | FUN_1008de184 */

void FUN_1008de184(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined *puVar7;
  long lVar8;
  code *pcVar9;
  undefined1 auStack_68 [24];
  
  uVar2 = param_1;
  (**(code **)(*unaff_x20 + 0x248))();
  if ((uVar2 & 1) == 0) {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar6 = DAT_101058180;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar6);
      FUN_1006486f8();
      FUN_100004550(uVar6,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar7 = &DAT_100f112d0;
    _swift_allocObject(&DAT_100f112d0,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar6;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar6);
    (*pcVar9)(FUN_1008d678c,puVar7,uVar2,lVar8);
    _swift_release(puVar7);
    return;
  }
  uVar6 = 1;
  _swift_beginAccess(unaff_x20 + 0x23,auStack_68,1,0);
  cVar1 = *(char *)((long)unaff_x20 + 0x132);
  if (cVar1 == '\0' || cVar1 == '\x05') {
    if (*(char *)(unaff_x20[6] + 0x70) == '\0') {
      if (cVar1 != '\0') {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de510);
        (*pcVar9)();
      }
      *(undefined1 *)((long)unaff_x20 + 0x132) = 1;
      puVar7 = (undefined *)unaff_x20[0x1b];
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de514);
        (*pcVar9)();
      }
      if (param_1 == 0) {
        _swift_retain(puVar7);
      }
      else {
        _swift_retain(puVar7);
        FUN_10090d0b8(0,0,param_1);
      }
      FUN_10062cc04(puVar7);
      goto LAB_1008de49c;
    }
    if (DAT_100fec608 == -1) {
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    else {
      _swift_once(&DAT_100fec608,FUN_100902068);
      lVar8 = unaff_x20[0x1b];
      uVar4 = DAT_1010581e8;
    }
    DAT_1010581e8 = uVar4;
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de4f4);
      (*pcVar9)();
    }
    _swift_retain(lVar8);
    FUN_10062cce4(uVar4,lVar8);
    _swift_release(lVar8);
    uVar6 = 0;
    (**(code **)(*unaff_x20 + 0x300))(uVar4,2,0);
    if (param_1 == 0) {
      return;
    }
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) goto LAB_1008de328;
    puVar7 = &DAT_100f112f8;
    _swift_allocObject(&DAT_100f112f8,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  else {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fec5f8 != -1) {
      _swift_once(&DAT_100fec5f8,FUN_100901f9c);
    }
    uVar4 = DAT_101058190;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar8 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar8;
    (**(code **)(lVar8 + 0x10))();
    if ((uVar3 & 1) != 0) {
LAB_1008de328:
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(uVar6);
      return;
    }
    puVar7 = &DAT_100f11320;
    _swift_allocObject(&DAT_100f11320,0x20,7);
    *(ulong *)(puVar7 + 0x10) = param_1;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar9 = *(code **)(lVar8 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
  }
  (*pcVar9)(thunk_FUN_1008d678c,puVar7,uVar2,lVar8);
LAB_1008de49c:
  _swift_release(puVar7);
  return;
}



/* Address: 0x1008de514 | FUN_1008de514 */

/* WARNING: Removing unreachable block (ram,0x0001008de7e8) */

void FUN_1008de514(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  _swift_retain(uVar8);
  _swift_retain(puVar2);
  FUN_1008dda64();
  puVar3 = &DAT_100f13800;
  _swift_allocObject(&DAT_100f13800,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1008fe674;
  *(long *)(puVar3 + 0x20) = unaff_x20;
  uVar4 = *(ulong *)(puVar2 + 0x20);
  lVar1 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f13828;
    _swift_allocObject(&DAT_100f13828,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008db354;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar2);
    _swift_retain(puVar3);
    (*pcVar9)(thunk_FUN_100653138,puVar6,uVar4,lVar1);
    _swift_release(puVar6);
    _swift_release_n();
    _swift_release(puVar2);
    _swift_release(puVar3);
    goto LAB_1008de744;
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_98,0,0);
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  cVar7 = puVar2[0x18];
  if (cVar7 == '\x01') {
    FUN_100308524(uVar8);
    puVar6 = &DAT_100fec480;
    FUN_1000f7830(&DAT_100fec480,&DAT_100c85b00);
    FUN_10061cf14(2,0,puVar6,&PTR_PTR_100f0f5c8);
    cVar7 = '\x01';
LAB_1008de724:
    FUN_100308538(uVar8,cVar7);
  }
  else {
    if (cVar7 != -1) goto LAB_1008de724;
    _swift_beginAccess(puVar2 + 0x30,auStack_78,0x21,0);
    FUN_10064967c(thunk_FUN_1008db354,puVar3);
    _swift_endAccess(auStack_78);
  }
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release_n();
LAB_1008de744:
  FUN_1008d9d68(param_1);
  _swift_release(puVar2);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_78,1,0);
  if ((*(char *)(unaff_x20 + 0x132) != '\0') && (*(char *)(unaff_x20 + 0x132) != '\x05')) {
    FUN_10095b6d4(0x21);
    if (*(char *)(unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de7e4);
      (*pcVar9)();
    }
    *(undefined1 *)(unaff_x20 + 0x132) = 2;
    if (*(long *)(unaff_x20 + 0xd8) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008de7e8);
      (*pcVar9)();
    }
    FUN_10094eff4(param_1);
  }
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008de808 | FUN_1008de808 */

/* WARNING: Removing unreachable block (ram,0x0001008deadc) */

void FUN_1008de808(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  _swift_retain(uVar8);
  _swift_retain(puVar2);
  FUN_1008dddf4();
  puVar3 = &DAT_100f12400;
  _swift_allocObject(&DAT_100f12400,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1008fd6dc;
  *(long *)(puVar3 + 0x20) = unaff_x20;
  uVar4 = *(ulong *)(puVar2 + 0x20);
  lVar1 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f12428;
    _swift_allocObject(&DAT_100f12428,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008db354;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar2);
    _swift_retain(puVar3);
    (*pcVar9)(thunk_FUN_100653138,puVar6,uVar4,lVar1);
    _swift_release(puVar6);
    _swift_release_n();
    _swift_release(puVar2);
    _swift_release(puVar3);
    goto LAB_1008dea38;
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_98,0,0);
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  cVar7 = puVar2[0x18];
  if (cVar7 == '\x01') {
    FUN_100308524(uVar8);
    puVar6 = &DAT_100fec438;
    FUN_1000f7830(&DAT_100fec438,&DAT_100c83b30);
    FUN_10061cf14(2,0,puVar6,&PTR_PTR_100f0f5c8);
    cVar7 = '\x01';
LAB_1008dea18:
    FUN_100308538(uVar8,cVar7);
  }
  else {
    if (cVar7 != -1) goto LAB_1008dea18;
    _swift_beginAccess(puVar2 + 0x30,auStack_78,0x21,0);
    FUN_10064967c(thunk_FUN_1008db354,puVar3);
    _swift_endAccess(auStack_78);
  }
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release_n();
LAB_1008dea38:
  FUN_1008d9d68(param_1);
  _swift_release(puVar2);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_78,1,0);
  if ((*(char *)(unaff_x20 + 0x132) != '\0') && (*(char *)(unaff_x20 + 0x132) != '\x05')) {
    FUN_10095b6d4(0x21);
    if (*(char *)(unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dead8);
      (*pcVar9)();
    }
    *(undefined1 *)(unaff_x20 + 0x132) = 2;
    if (*(long *)(unaff_x20 + 0xd8) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008deadc);
      (*pcVar9)();
    }
    thunk_FUN_10094f284(param_1);
  }
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008deafc | FUN_1008deafc */

/* WARNING: Removing unreachable block (ram,0x0001008dedd0) */

void FUN_1008deafc(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar2 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  _swift_retain(uVar8);
  _swift_retain(puVar2);
  FUN_1008de184();
  puVar3 = &DAT_100f11280;
  _swift_allocObject(&DAT_100f11280,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1008fa808;
  *(long *)(puVar3 + 0x20) = unaff_x20;
  uVar4 = *(ulong *)(puVar2 + 0x20);
  lVar1 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f112a8;
    _swift_allocObject(&DAT_100f112a8,0x28,7);
    *(undefined **)(puVar6 + 0x10) = puVar2;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008db354;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar2);
    _swift_retain(puVar3);
    (*pcVar9)(thunk_FUN_100653138,puVar6,uVar4,lVar1);
    _swift_release(puVar6);
    _swift_release_n();
    _swift_release(puVar2);
    _swift_release(puVar3);
    goto LAB_1008ded2c;
  }
  _swift_beginAccess(puVar2 + 0x10,auStack_98,0,0);
  uVar8 = *(undefined8 *)(puVar2 + 0x10);
  cVar7 = puVar2[0x18];
  if (cVar7 == '\x01') {
    FUN_100308524(uVar8);
    puVar6 = &DAT_100fec430;
    FUN_1000f7830(&DAT_100fec430,&DAT_100c83b28);
    FUN_10061cf14(2,0,puVar6,&PTR_PTR_100f0f5c8);
    cVar7 = '\x01';
LAB_1008ded0c:
    FUN_100308538(uVar8,cVar7);
  }
  else {
    if (cVar7 != -1) goto LAB_1008ded0c;
    _swift_beginAccess(puVar2 + 0x30,auStack_78,0x21,0);
    FUN_10064967c(thunk_FUN_1008db354,puVar3);
    _swift_endAccess(auStack_78);
  }
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_release_n();
LAB_1008ded2c:
  FUN_1008d9d68(param_1);
  _swift_release(puVar2);
  _swift_beginAccess(unaff_x20 + 0x118,auStack_78,1,0);
  if ((*(char *)(unaff_x20 + 0x132) != '\0') && (*(char *)(unaff_x20 + 0x132) != '\x05')) {
    FUN_10095b6d4(0x21);
    if (*(char *)(unaff_x20 + 0x132) != '\x01') {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dedcc);
      (*pcVar9)();
    }
    *(undefined1 *)(unaff_x20 + 0x132) = 2;
    if (*(long *)(unaff_x20 + 0xd8) == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1008dedd0);
      (*pcVar9)();
    }
    thunk_FUN_10094f284(param_1);
  }
  _swift_release(puVar2);
  return;
}



/* Address: 0x1008dedf0 | FUN_1008dedf0 */

void FUN_1008dedf0(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008dee24 | FUN_1008dee24 */

void FUN_1008dee24(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008dee68 | FUN_1008dee68 */

void FUN_1008dee68(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_28,0,0);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008dee9c | FUN_1008dee9c */

void FUN_1008dee9c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_38,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008deee0 | FUN_1008deee0 */

class_t * FUN_1008deee0(class_t *param_1)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop || param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008def74);
    (*pcVar1)();
  }
  _swift_allocObject();
  pcVar2 = param_1;
  _swift_unknownObjectRetain_n(param_1,2);
  FUN_1008df0b4();
  if (pcVar2 != (class_t *)0x0) {
    _swift_unknownObjectRelease(param_1);
    return pcVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008def78);
  (*pcVar1)();
}



/* Address: 0x1008def78 | FUN_1008def78 */

class_t * FUN_1008def78(class_t *param_1,undefined8 param_2,class_t *param_3,undefined8 param_4)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop || param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008df04c);
    (*pcVar1)();
  }
  pcVar2 = param_3;
  _object_getClass();
  if ((pcVar2 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
      pcVar2 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_3 != (class_t *)0x0) {
    _swift_allocObject();
    _swift_unknownObjectRetain(param_1);
    _swift_unknownObjectRetain(param_3);
    pcVar2 = param_1;
    FUN_1008df0b4(param_1,param_2,param_3,param_4);
    if (pcVar2 != (class_t *)0x0) {
      _swift_unknownObjectRelease(param_1);
      _swift_unknownObjectRelease(param_3);
      return pcVar2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008df054);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008df050);
  (*pcVar1)();
}



/* Address: 0x1008df054 | FUN_1008df054 */

void FUN_1008df054(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_allocObject();
  FUN_1008df0b4(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x1008df0b4 | FUN_1008df0b4 */

long FUN_1008df0b4(class_t *param_1,undefined8 param_2,class_t *param_3,undefined8 param_4)

{
  class_t *pcVar1;
  class_t *pcVar2;
  long unaff_x20;
  class_t *pcVar3;
  class_t *pcVar4;
  undefined1 auStack_78 [24];
  
  pcVar3 = param_3;
  if (param_3 == (class_t *)0x0) {
    _swift_unknownObjectRetain(param_1);
    pcVar3 = param_1;
    param_4 = param_2;
  }
  pcVar1 = param_1;
  _object_getClass();
  pcVar2 = param_1;
  pcVar4 = pcVar3;
  if (((pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
       pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && param_1 != (class_t *)0x0)
     && (pcVar1 = pcVar3, _object_getClass(), pcVar2 = pcVar3, pcVar4 = param_1,
        (pcVar1 == &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup ||
        pcVar1 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) && pcVar3 != (class_t *)0x0))
  {
    *(class_t **)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(class_t **)(unaff_x20 + 0x20) = pcVar3;
    *(undefined8 *)(unaff_x20 + 0x28) = param_4;
    _swift_unknownObjectRetain(param_3);
    _swift_unknownObjectRetain(pcVar3);
    pcVar1 = param_1;
    _swift_unknownObjectRetain();
    FUN_100622d2c();
    *(undefined8 *)(unaff_x20 + 0x50) = pcVar1;
    FUN_100622d2c();
    *(class_t **)(unaff_x20 + 0x58) = pcVar1;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    _swift_beginAccess((undefined8 *)(unaff_x20 + 0x50),auStack_78,0x21,0);
    FUN_1008df228(0x100000006,1);
    _swift_endAccess(auStack_78);
    _swift_unknownObjectRelease(param_1);
    _swift_unknownObjectRelease(param_3);
    _swift_unknownObjectRelease(pcVar3);
    *(undefined1 *)(unaff_x20 + 0x60) = 0;
  }
  else {
    _swift_unknownObjectRelease(pcVar2);
    _swift_unknownObjectRelease(pcVar4);
    _swift_deallocPartialClassInstance();
    unaff_x20 = 0;
  }
  return unaff_x20;
}



/* Address: 0x1008df228 | FUN_1008df228 */

void FUN_1008df228(ulong param_1,undefined4 param_2)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long *unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_278 [6];
  undefined *local_260;
  int local_258;
  uint uStack_254;
  undefined *local_240;
  int *local_238;
  undefined1 auStack_230 [48];
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [40];
  int local_180;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined *local_78;
  
  lVar10 = *unaff_x20;
  uVar12 = *(ulong *)(lVar10 + 0x10);
  iVar9 = (int)param_1;
  uVar8 = (uint)(param_1 >> 0x20);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1008f215c(0,uVar12,0);
    uVar11 = 0;
    bVar2 = false;
    lVar13 = lVar10 + 0x20;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008df66c);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar13,auStack_128,&DAT_100fec498,&DAT_100c83b70);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f13e18;
      _swift_allocObject(&DAT_100f13e18,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = FUN_1008feda4;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100fec498,&DAT_100c83b70);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100fec4a0;
      FUN_1000f7830(&DAT_100fec4a0,&DAT_100c83b78);
      piVar5 = &local_258;
      _swift_dynamicCast(piVar5,&local_200,puVar4,&DAT_100eec8d0,6);
      if ((((int)piVar5 == 0) || (local_258 != iVar9)) || ((ulong)uStack_254 != param_1 >> 0x20)) {
        FUN_100004594(auStack_1a8);
        puVar6 = local_130;
        pcVar3 = local_138;
        puStack_1b0 = local_130;
        uStack_1c8 = uStack_148;
        local_1d0 = local_150;
        local_1b8 = local_138;
        uStack_1c0 = uStack_140;
        local_200 = (ulong)uStack_17c << 0x20;
        uStack_1f8 = uStack_178;
        puStack_1e8 = puStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = local_160;
        FUN_100076508(&local_200,&local_258);
        FUN_100011080(&uStack_1d8,auStack_230);
        FUN_100076508(&local_258,&local_d0);
        FUN_100011080(auStack_230,&uStack_a8);
        puVar4 = &DAT_100f13e40;
        _swift_allocObject(&DAT_100f13e40,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = FUN_1008fee00;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100eec8d0;
        FUN_1008df8a4();
        local_260 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
        local_278[0] = param_2;
        local_258 = iVar9;
        uStack_254 = uVar8;
        local_238 = piVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100fec498,&DAT_100c83b70);
        FUN_100076508(&local_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_1008f20d4;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_1008f215c(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = local_78;
      uVar11 = uVar11 + 1;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x28) = uStack_c8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x20) = local_d0;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x38) = uStack_b8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x30) = local_c0;
      *(undefined **)(local_78 + uVar1 * 0x58 + 0x70) = local_80;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x58) = uStack_98;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x50) = local_a0;
      *(code **)(local_78 + uVar1 * 0x58 + 0x68) = pcStack_88;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x60) = local_90;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x48) = uStack_a8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x40) = local_b0;
      lVar13 = lVar13 + 0x58;
    } while (uVar12 != uVar11);
    _swift_bridgeObjectRelease();
    *unaff_x20 = (long)puVar7;
    if (bVar2) {
      return;
    }
  }
  puStack_168 = &DAT_100eec8d0;
  FUN_1008df8a4();
  puStack_1e8 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  local_200 = CONCAT44(local_200._4_4_,param_2);
  local_180 = iVar9;
  uStack_17c = uVar8;
  local_160 = lVar10;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_1008f20d4;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_1008f226c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar12 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1008f226c(puVar7,uVar12 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
  }
  *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x20) = local_d0;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x30) = local_c0;
  *(undefined **)(puVar7 + uVar12 * 0x58 + 0x70) = local_80;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x58) = uStack_98;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x50) = local_a0;
  *(code **)(puVar7 + uVar12 * 0x58 + 0x68) = pcStack_88;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x60) = local_90;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x40) = local_b0;
  *unaff_x20 = (long)puVar7;
  return;
}



/* Address: 0x1008df6bc | FUN_1008df6bc */

void FUN_1008df6bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  FUN_100004550(uVar1,uVar2);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x1008df6f4 | FUN_1008df6f4 */

void FUN_1008df6f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  FUN_100004550(uVar1,uVar2);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x1008df72c | FUN_1008df72c */

void FUN_1008df72c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x50,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x1008df7ac | FUN_1008df7ac */

void FUN_1008df7ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x58,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x1008df82c | FUN_1008df82c */

void FUN_1008df82c(byte param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_40 [24];
  undefined8 local_28;
  
  *(byte *)(unaff_x20 + 0x60) = param_1;
  if ((param_1 & 1) != 0) {
    local_28 = 0x100000006;
    lVar1 = unaff_x20 + 0x50;
    _swift_beginAccess(lVar1,auStack_40,0x21,0);
    FUN_1008df8a4();
    FUN_100623cbc(&local_28,&DAT_100eec8d0,lVar1);
    _swift_endAccess(auStack_40);
  }
  _swift_retain();
  return;
}



/* Address: 0x1008df8a4 | FUN_1008df8a4 */

void FUN_1008df8a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febf88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68bf8,&DAT_100eec8d0);
  DAT_100febf88 = pTVar1;
  return;
}



/* Address: 0x1008df8e4 | FUN_1008df8e4 */

/* WARNING: Removing unreachable block (ram,0x0001008dfaf4) */
/* WARNING: Removing unreachable block (ram,0x0001008df914) */

code * FUN_1008df8e4(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  class_t *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  class_t *pcVar12;
  class_t *pcVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  FUN_100668048();
  puVar8 = &DAT_100f0fe38;
  _swift_allocObject(&DAT_100f0fe38,0x18,7);
  *(ulong *)(puVar8 + 0x10) = param_1;
  pcVar9 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar17 = *(code **)(lVar15 + 0x10);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar17)();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_80,0,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar10 = &DAT_100f0fe60;
    _swift_allocObject(&DAT_100f0fe60,0x20,7);
    *(class_t **)(puVar10 + 0x10) = pcVar9;
    *(long *)(puVar10 + 0x18) = lVar15;
    _swift_unknownObjectRetain(pcVar9);
    pcVar17 = thunk_FUN_1008fe70c;
  }
  else {
    puVar10 = &DAT_100f0fed8;
    _swift_allocObject(&DAT_100f0fed8,0x20,7);
    *(long *)(puVar10 + 0x10) = lVar2;
    *(undefined8 *)(puVar10 + 0x18) = uVar5;
    pcVar17 = thunk_FUN_1008fe864;
  }
  puVar11 = &DAT_100f0fe88;
  _swift_allocObject(&DAT_100f0fe88,0x20,7);
  *(code **)(puVar11 + 0x10) = pcVar17;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_98,0,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar12 = pcVar9;
  _object_getClass();
  if (pcVar12 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
    uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
    _swift_unknownObjectRetain(pcVar9);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100011128(lVar2,uVar5);
    FUN_100011128(uVar3,uVar6);
    _swift_bridgeObjectRetain(uVar18);
    pcVar12 = pcVar9;
    FUN_1008e2c38(pcVar9,uVar1,uVar4,uVar7,param_1);
    _swift_unknownObjectRelease(pcVar9);
    pcVar13 = pcVar9;
    _swift_getObjectType();
    puVar10 = &DAT_100f0feb0;
    _swift_allocObject(&DAT_100f0feb0,0x68,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar16;
    *(class_t **)(puVar10 + 0x18) = pcVar12;
    *(code **)(puVar10 + 0x20) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar10 + 0x28) = puVar11;
    *(undefined8 *)(puVar10 + 0x30) = uVar3;
    *(undefined8 *)(puVar10 + 0x38) = uVar6;
    *(undefined8 *)(puVar10 + 0x40) = uVar18;
    *(code **)(puVar10 + 0x48) = FUN_1008e11b8;
    *(undefined **)(puVar10 + 0x50) = puVar8;
    *(class_t **)(puVar10 + 0x58) = pcVar9;
    *(long *)(puVar10 + 0x60) = lVar15;
    pcVar19 = *(code **)(lVar15 + 0x20);
    _swift_unknownObjectRetain(pcVar9);
    FUN_100011128(uVar3,uVar6);
    _swift_retain(pcVar12);
    _swift_retain(puVar11);
    _swift_retain(puVar8);
    puVar14 = &DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    pcVar17 = FUN_1008e1678;
    (*pcVar19)(FUN_1008e1678,puVar10,puVar14,pcVar13,lVar15);
    _swift_release(puVar10);
    pcVar19 = pcVar17;
    FUN_1008f23d0(pcVar17);
    _swift_release(puVar11);
    _swift_release(pcVar12);
    FUN_100004550(uVar3,uVar6);
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release(puVar8);
    _swift_release(pcVar17);
    _swift_unknownObjectRelease(pcVar9);
    return pcVar19;
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x1008dfcb8);
  (*pcVar17)();
}



/* Address: 0x1008dfcb8 | FUN_1008dfcb8 */

/* WARNING: Removing unreachable block (ram,0x0001008dfe50) */

code * FUN_1008dfcb8(ulong param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  class_t *pcVar11;
  class_t *pcVar12;
  undefined *puVar13;
  long lVar14;
  long unaff_x20;
  class_t *pcVar15;
  code *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar8 = &DAT_100f0ff00;
  _swift_allocObject(&DAT_100f0ff00,0x18,7);
  *(ulong *)(puVar8 + 0x10) = param_1;
  pcVar15 = *(class_t **)(unaff_x20 + 0x10);
  lVar14 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar14 + 0x10);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar16)();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar9 = &DAT_100f0ff28;
    _swift_allocObject(&DAT_100f0ff28,0x20,7);
    *(class_t **)(puVar9 + 0x10) = pcVar15;
    *(long *)(puVar9 + 0x18) = lVar14;
    _swift_unknownObjectRetain(pcVar15);
    pcVar16 = thunk_FUN_1008fe70c;
  }
  else {
    puVar9 = &DAT_100f0ffa0;
    _swift_allocObject(&DAT_100f0ffa0,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(undefined8 *)(puVar9 + 0x18) = uVar5;
    pcVar16 = thunk_FUN_1008fe864;
  }
  puVar10 = &DAT_100f0ff50;
  _swift_allocObject(&DAT_100f0ff50,0x20,7);
  *(code **)(puVar10 + 0x10) = pcVar16;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_90,0,0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar11 = pcVar15;
  _object_getClass();
  if (pcVar11 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1008e0000);
    (*pcVar16)();
  }
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  _swift_unknownObjectRetain(pcVar15);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100011128(lVar2,uVar5);
  FUN_100011128(uVar3,uVar6);
  _swift_bridgeObjectRetain(uVar19);
  pcVar11 = pcVar15;
  FUN_1008e2c38(pcVar15,uVar1,uVar4,uVar7,param_1);
  _swift_unknownObjectRelease(pcVar15);
  pcVar12 = pcVar15;
  _swift_getObjectType(pcVar15);
  puVar9 = &DAT_100f0ff78;
  _swift_allocObject(&DAT_100f0ff78,0x68,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar17;
  *(class_t **)(puVar9 + 0x18) = pcVar11;
  *(code **)(puVar9 + 0x20) = thunk_FUN_1008fe75c;
  *(undefined **)(puVar9 + 0x28) = puVar10;
  *(undefined8 *)(puVar9 + 0x30) = uVar3;
  *(undefined8 *)(puVar9 + 0x38) = uVar6;
  *(undefined8 *)(puVar9 + 0x40) = uVar19;
  *(code **)(puVar9 + 0x48) = thunk_FUN_1008e11b8;
  *(undefined **)(puVar9 + 0x50) = puVar8;
  *(class_t **)(puVar9 + 0x58) = pcVar15;
  *(long *)(puVar9 + 0x60) = lVar14;
  pcVar18 = *(code **)(lVar14 + 0x20);
  _swift_unknownObjectRetain(pcVar15);
  FUN_100011128(uVar3,uVar6);
  _swift_retain(pcVar11);
  _swift_retain(puVar10);
  _swift_retain(puVar8);
  puVar13 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  pcVar16 = FUN_1008ff238;
  (*pcVar18)(FUN_1008ff238,puVar9,puVar13,pcVar12,lVar14);
  _swift_release(puVar9);
  pcVar18 = pcVar16;
  FUN_1008f23d0(pcVar16);
  _swift_release(puVar10);
  _swift_release(pcVar11);
  FUN_100004550(uVar3,uVar6);
  _swift_release(puVar8);
  _swift_release(pcVar16);
  _swift_unknownObjectRelease(pcVar15);
  return pcVar18;
}



/* Address: 0x1008e0000 | FUN_1008e0000 */

/* WARNING: Removing unreachable block (ram,0x0001008e0228) */
/* WARNING: Removing unreachable block (ram,0x0001008e0048) */

code * FUN_1008e0000(ulong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  class_t *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  class_t *pcVar12;
  class_t *pcVar13;
  undefined *puVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x20;
  code *pcVar17;
  undefined8 uVar18;
  code *pcVar19;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  puVar8 = &DAT_100f0ffc8;
  _swift_allocObject(&DAT_100f0ffc8,0x18,7);
  *(ulong *)(puVar8 + 0x10) = param_1;
  pcVar9 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar17 = *(code **)(lVar15 + 0x10);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar17)();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_80,0,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar10 = &DAT_100f0fff0;
    _swift_allocObject(&DAT_100f0fff0,0x20,7);
    *(class_t **)(puVar10 + 0x10) = pcVar9;
    *(long *)(puVar10 + 0x18) = lVar15;
    _swift_unknownObjectRetain(pcVar9);
    pcVar17 = thunk_FUN_1008fe70c;
  }
  else {
    puVar10 = &DAT_100f10068;
    _swift_allocObject(&DAT_100f10068,0x20,7);
    *(long *)(puVar10 + 0x10) = lVar2;
    *(undefined8 *)(puVar10 + 0x18) = uVar5;
    pcVar17 = thunk_FUN_1008fe864;
  }
  puVar11 = &DAT_100f10018;
  _swift_allocObject(&DAT_100f10018,0x20,7);
  *(code **)(puVar11 + 0x10) = pcVar17;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_98,0,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar12 = pcVar9;
  _object_getClass();
  if (pcVar12 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
    uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
    _swift_unknownObjectRetain(pcVar9);
    _swift_bridgeObjectRetain(uVar16);
    FUN_100011128(lVar2,uVar5);
    FUN_100011128(uVar3,uVar6);
    _swift_bridgeObjectRetain(uVar18);
    pcVar12 = pcVar9;
    FUN_1008e2c38(pcVar9,uVar1,uVar4,uVar7,param_1);
    _swift_unknownObjectRelease(pcVar9);
    pcVar13 = pcVar9;
    _swift_getObjectType();
    puVar10 = &DAT_100f10040;
    _swift_allocObject(&DAT_100f10040,0x68,7);
    *(undefined8 *)(puVar10 + 0x10) = uVar16;
    *(class_t **)(puVar10 + 0x18) = pcVar12;
    *(code **)(puVar10 + 0x20) = thunk_FUN_1008fe75c;
    *(undefined **)(puVar10 + 0x28) = puVar11;
    *(undefined8 *)(puVar10 + 0x30) = uVar3;
    *(undefined8 *)(puVar10 + 0x38) = uVar6;
    *(undefined8 *)(puVar10 + 0x40) = uVar18;
    *(code **)(puVar10 + 0x48) = thunk_FUN_1008e11b8;
    *(undefined **)(puVar10 + 0x50) = puVar8;
    *(class_t **)(puVar10 + 0x58) = pcVar9;
    *(long *)(puVar10 + 0x60) = lVar15;
    pcVar19 = *(code **)(lVar15 + 0x20);
    _swift_unknownObjectRetain(pcVar9);
    FUN_100011128(uVar3,uVar6);
    _swift_retain(pcVar12);
    _swift_retain(puVar11);
    _swift_retain(puVar8);
    puVar14 = &DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    pcVar17 = FUN_1008ff238;
    (*pcVar19)(FUN_1008ff238,puVar10,puVar14,pcVar13,lVar15);
    _swift_release(puVar10);
    pcVar19 = pcVar17;
    FUN_1008f23d0(pcVar17);
    _swift_release(puVar11);
    _swift_release(pcVar12);
    FUN_100004550(uVar3,uVar6);
    _swift_release(param_1 & 0x3fffffffffffffff);
    _swift_release(puVar8);
    _swift_release(pcVar17);
    _swift_unknownObjectRelease(pcVar9);
    return pcVar19;
  }
                    /* WARNING: Does not return */
  pcVar17 = (code *)SoftwareBreakpoint(1,0x1008e03ec);
  (*pcVar17)();
}



/* Address: 0x1008e03ec | FUN_1008e03ec */

/* WARNING: Removing unreachable block (ram,0x0001008e0420) */

undefined8 FUN_1008e03ec(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if ((param_3 & 1) != 0) {
    FUN_1008d5170();
  }
  FUN_1008e0000(param_1,param_2);
  return param_1;
}



/* Address: 0x1008e04b4 | FUN_1008e04b4 */

/* WARNING: Removing unreachable block (ram,0x0001008e063c) */

code * FUN_1008e04b4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  class_t *pcVar12;
  class_t *pcVar13;
  undefined *puVar14;
  long lVar15;
  long unaff_x20;
  class_t *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar9 = &DAT_100f10090;
  _swift_allocObject(&DAT_100f10090,0x18,7);
  *(undefined8 *)(puVar9 + 0x10) = param_1;
  pcVar16 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar15 + 0x10))();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar10 = &DAT_100f100b8;
    _swift_allocObject(&DAT_100f100b8,0x20,7);
    *(class_t **)(puVar10 + 0x10) = pcVar16;
    *(long *)(puVar10 + 0x18) = lVar15;
    _swift_unknownObjectRetain(pcVar16);
    pcVar8 = thunk_FUN_1008fe70c;
  }
  else {
    puVar10 = &DAT_100f10130;
    _swift_allocObject(&DAT_100f10130,0x20,7);
    *(long *)(puVar10 + 0x10) = lVar2;
    *(undefined8 *)(puVar10 + 0x18) = uVar5;
    pcVar8 = thunk_FUN_1008fe864;
  }
  puVar11 = &DAT_100f100e0;
  _swift_allocObject(&DAT_100f100e0,0x20,7);
  *(code **)(puVar11 + 0x10) = pcVar8;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_90,0,0);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar12 = pcVar16;
  _object_getClass();
  if (pcVar12 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1008e07ec);
    (*pcVar8)();
  }
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  _swift_unknownObjectRetain(pcVar16);
  _swift_bridgeObjectRetain(uVar17);
  FUN_100011128(lVar2,uVar5);
  FUN_100011128(uVar3,uVar6);
  _swift_bridgeObjectRetain(uVar19);
  pcVar12 = pcVar16;
  FUN_1008e35e0(pcVar16,uVar1,uVar4,uVar7);
  _swift_unknownObjectRelease(pcVar16);
  pcVar13 = pcVar16;
  _swift_getObjectType(pcVar16);
  puVar10 = &DAT_100f10108;
  _swift_allocObject(&DAT_100f10108,0x68,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar17;
  *(class_t **)(puVar10 + 0x18) = pcVar12;
  *(code **)(puVar10 + 0x20) = thunk_FUN_1008fe75c;
  *(undefined **)(puVar10 + 0x28) = puVar11;
  *(undefined8 *)(puVar10 + 0x30) = uVar3;
  *(undefined8 *)(puVar10 + 0x38) = uVar6;
  *(undefined8 *)(puVar10 + 0x40) = uVar19;
  *(code **)(puVar10 + 0x48) = FUN_1008f67dc;
  *(undefined **)(puVar10 + 0x50) = puVar9;
  *(class_t **)(puVar10 + 0x58) = pcVar16;
  *(long *)(puVar10 + 0x60) = lVar15;
  pcVar18 = *(code **)(lVar15 + 0x20);
  _swift_unknownObjectRetain(pcVar16);
  FUN_100011128(uVar3,uVar6);
  _swift_retain(pcVar12);
  _swift_retain(puVar11);
  _swift_retain(puVar9);
  puVar14 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  pcVar8 = FUN_1008ff238;
  (*pcVar18)(FUN_1008ff238,puVar10,puVar14,pcVar13,lVar15);
  _swift_release(puVar10);
  pcVar18 = pcVar8;
  FUN_1008f23d0(pcVar8);
  _swift_release(puVar11);
  _swift_release(pcVar12);
  FUN_100004550(uVar3,uVar6);
  _swift_release(puVar9);
  _swift_release(pcVar8);
  _swift_unknownObjectRelease(pcVar16);
  return pcVar18;
}



/* Address: 0x1008e07ec | FUN_1008e07ec */

char * FUN_1008e07ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  
  uVar1 = 0;
  FUN_10095456c(0);
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x13e,uVar1,&PTR_PTR_100f0f570);
  puVar3 = &DAT_100f13b20;
  _swift_allocObject(&DAT_100f13b20,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(int *)(puVar3 + 0x28) = (int)param_4;
  *(int *)(puVar3 + 0x2c) = (int)((ulong)param_4 >> 0x20);
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_3);
  pcVar4 = pcVar2;
  FUN_1008f7070(pcVar2,FUN_1008feba4,puVar3);
  _swift_release(pcVar2);
  _swift_release_n(puVar3,2);
  return pcVar4;
}



/* Address: 0x1008e08d8 | FUN_1008e08d8 */

undefined8
FUN_1008e08d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined *local_48;
  
  uVar1 = param_1;
  FUN_1008f6880(param_1,param_2,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_unknownObjectRetain(param_1);
  local_48 = &DAT_100f1c228;
  local_60 = (undefined4)param_4;
  uStack_5c = (undefined4)((ulong)param_4 >> 0x20);
  _swift_retain(uVar1);
  FUN_100950c78(&local_60,uVar1);
  _swift_release(uVar1);
  FUN_100004594(&local_60);
  return uVar1;
}



/* Address: 0x1008e096c | FUN_1008e096c */

code * FUN_1008e096c(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  class_t *pcVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  class_t *pcVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pcVar14 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar15 + 0x10))();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar9 = &DAT_100f10158;
    _swift_allocObject(&DAT_100f10158,0x20,7);
    *(class_t **)(puVar9 + 0x10) = pcVar14;
    *(long *)(puVar9 + 0x18) = lVar15;
    _swift_unknownObjectRetain(pcVar14);
    pcVar8 = thunk_FUN_1008fe70c;
  }
  else {
    puVar9 = &DAT_100f101d0;
    _swift_allocObject(&DAT_100f101d0,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(undefined8 *)(puVar9 + 0x18) = uVar5;
    pcVar8 = thunk_FUN_1008fe864;
  }
  puVar10 = &DAT_100f10180;
  _swift_allocObject(&DAT_100f10180,0x20,7);
  *(code **)(puVar10 + 0x10) = pcVar8;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_90,0,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar11 = pcVar14;
  _object_getClass();
  if (pcVar11 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
    cVar7 = *(char *)(unaff_x20 + 0x60);
    _swift_unknownObjectRetain(pcVar14);
    if (cVar7 == '\x01') {
      _swift_bridgeObjectRetain(uVar16);
      FUN_100011128(lVar2,uVar5);
      FUN_100011128(uVar3,uVar6);
      lVar2 = DAT_100fec610;
      _swift_bridgeObjectRetain(uVar18);
      if (lVar2 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      pcVar8 = DAT_1010581f0;
      _swift_willThrow();
      _swift_errorRetain(pcVar8);
      _swift_release(puVar10);
      FUN_100004550(uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(uVar18);
      _swift_unknownObjectRelease(pcVar14);
      pcVar11 = pcVar14;
      _swift_getObjectType(pcVar14);
      puVar9 = &DAT_100febf90;
      FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
      pcVar17 = pcVar8;
      FUN_10063dd74(pcVar8,pcVar11,puVar9,lVar15);
      _swift_unknownObjectRelease(pcVar14);
      _swift_errorRelease(pcVar8);
    }
    else {
      _swift_unknownObjectRetain(pcVar14);
      _swift_bridgeObjectRetain(uVar16);
      FUN_100011128(lVar2,uVar5);
      FUN_100011128(uVar3,uVar6);
      _swift_bridgeObjectRetain(uVar18);
      _swift_unknownObjectRetain(uVar1);
      uVar12 = (ulong)param_1;
      FUN_10095ad10(uVar12,pcVar14,uVar1,uVar4);
      _swift_unknownObjectRelease(pcVar14);
      pcVar11 = pcVar14;
      _swift_getObjectType(pcVar14);
      puVar9 = &DAT_100f101a8;
      _swift_allocObject(&DAT_100f101a8,0x68,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar16;
      *(ulong *)(puVar9 + 0x18) = uVar12;
      *(code **)(puVar9 + 0x20) = thunk_FUN_1008fe75c;
      *(undefined **)(puVar9 + 0x28) = puVar10;
      *(undefined8 *)(puVar9 + 0x30) = uVar3;
      *(undefined8 *)(puVar9 + 0x38) = uVar6;
      *(undefined8 *)(puVar9 + 0x40) = uVar18;
      *(code **)(puVar9 + 0x48) = FUN_1008e1084;
      *(undefined8 *)(puVar9 + 0x50) = 0;
      *(class_t **)(puVar9 + 0x58) = pcVar14;
      *(long *)(puVar9 + 0x60) = lVar15;
      pcVar17 = *(code **)(lVar15 + 0x20);
      _swift_unknownObjectRetain(pcVar14);
      FUN_100011128(uVar3,uVar6);
      _swift_retain(uVar12);
      _swift_retain(puVar10);
      puVar13 = &DAT_100febf98;
      FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
      pcVar8 = FUN_1008ff238;
      (*pcVar17)(FUN_1008ff238,puVar9,puVar13,pcVar11,lVar15);
      _swift_release(puVar9);
      pcVar17 = pcVar8;
      FUN_1008f23d0(pcVar8);
      _swift_release(puVar10);
      _swift_release(uVar12);
      FUN_100004550(uVar3,uVar6);
      _swift_release(pcVar8);
      _swift_unknownObjectRelease(pcVar14);
    }
    return pcVar17;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1008e0ce0);
  (*pcVar8)();
}



/* Address: 0x1008e0cf8 | FUN_1008e0cf8 */

code * FUN_1008e0cf8(uint param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char cVar7;
  code *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  class_t *pcVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  class_t *pcVar14;
  long lVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  pcVar14 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar15 + 0x10))();
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  _swift_beginAccess(unaff_x20 + 0x50,auStack_78,0,0);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x50);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  if (lVar2 == 0) {
    puVar9 = &DAT_100f101f8;
    _swift_allocObject(&DAT_100f101f8,0x20,7);
    *(class_t **)(puVar9 + 0x10) = pcVar14;
    *(long *)(puVar9 + 0x18) = lVar15;
    _swift_unknownObjectRetain(pcVar14);
    pcVar8 = thunk_FUN_1008fe70c;
  }
  else {
    puVar9 = &DAT_100f10270;
    _swift_allocObject(&DAT_100f10270,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar2;
    *(undefined8 *)(puVar9 + 0x18) = uVar5;
    pcVar8 = thunk_FUN_1008fe864;
  }
  puVar10 = &DAT_100f10220;
  _swift_allocObject(&DAT_100f10220,0x20,7);
  *(code **)(puVar10 + 0x10) = pcVar8;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_beginAccess(unaff_x20 + 0x58,auStack_90,0,0);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x58);
  pcVar11 = pcVar14;
  _object_getClass();
  if (pcVar11 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
    cVar7 = *(char *)(unaff_x20 + 0x60);
    _swift_unknownObjectRetain(pcVar14);
    if (cVar7 == '\x01') {
      _swift_bridgeObjectRetain(uVar16);
      FUN_100011128(lVar2,uVar5);
      FUN_100011128(uVar3,uVar6);
      lVar2 = DAT_100fec610;
      _swift_bridgeObjectRetain(uVar18);
      if (lVar2 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      pcVar8 = DAT_1010581f0;
      _swift_willThrow();
      _swift_errorRetain(pcVar8);
      _swift_release(puVar10);
      FUN_100004550(uVar3,uVar6);
      _swift_bridgeObjectRelease(uVar16);
      _swift_bridgeObjectRelease(uVar18);
      _swift_unknownObjectRelease(pcVar14);
      pcVar11 = pcVar14;
      _swift_getObjectType(pcVar14);
      puVar9 = &DAT_100febf90;
      FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
      pcVar17 = pcVar8;
      FUN_10063dd74(pcVar8,pcVar11,puVar9,lVar15);
      _swift_unknownObjectRelease(pcVar14);
      _swift_errorRelease(pcVar8);
    }
    else {
      _swift_unknownObjectRetain(pcVar14);
      _swift_bridgeObjectRetain(uVar16);
      FUN_100011128(lVar2,uVar5);
      FUN_100011128(uVar3,uVar6);
      _swift_bridgeObjectRetain(uVar18);
      _swift_unknownObjectRetain(uVar1);
      uVar12 = (ulong)param_1;
      FUN_10095ad10(uVar12,pcVar14,uVar1,uVar4);
      _swift_unknownObjectRelease(pcVar14);
      pcVar11 = pcVar14;
      _swift_getObjectType(pcVar14);
      puVar9 = &DAT_100f10248;
      _swift_allocObject(&DAT_100f10248,0x68,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar16;
      *(ulong *)(puVar9 + 0x18) = uVar12;
      *(code **)(puVar9 + 0x20) = thunk_FUN_1008fe75c;
      *(undefined **)(puVar9 + 0x28) = puVar10;
      *(undefined8 *)(puVar9 + 0x30) = uVar3;
      *(undefined8 *)(puVar9 + 0x38) = uVar6;
      *(undefined8 *)(puVar9 + 0x40) = uVar18;
      *(code **)(puVar9 + 0x48) = FUN_1008e1084;
      *(undefined8 *)(puVar9 + 0x50) = 0;
      *(class_t **)(puVar9 + 0x58) = pcVar14;
      *(long *)(puVar9 + 0x60) = lVar15;
      pcVar17 = *(code **)(lVar15 + 0x20);
      _swift_unknownObjectRetain(pcVar14);
      FUN_100011128(uVar3,uVar6);
      _swift_retain(uVar12);
      _swift_retain(puVar10);
      puVar13 = &DAT_100febf98;
      FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
      pcVar8 = FUN_1008ff238;
      (*pcVar17)(FUN_1008ff238,puVar9,puVar13,pcVar11,lVar15);
      _swift_release(puVar9);
      pcVar17 = pcVar8;
      FUN_1008f23d0(pcVar8);
      _swift_release(puVar10);
      _swift_release(uVar12);
      FUN_100004550(uVar3,uVar6);
      _swift_release(pcVar8);
      _swift_unknownObjectRelease(pcVar14);
    }
    return pcVar17;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1008e106c);
  (*pcVar8)();
}



/* Address: 0x1008e1084 | FUN_1008e1084 */

void FUN_1008e1084(void)

{
  FUN_1008e64bc();
  return;
}



/* Address: 0x1008e1090 | FUN_1008e1090 */

char * FUN_1008e1090(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  
  puVar1 = &DAT_100f13dc8;
  _swift_allocObject(&DAT_100f13dc8,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_4;
  uVar2 = 0;
  FUN_10095456c(0);
  _swift_retain(param_4 & 0x3fffffffffffffff);
  pcVar3 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x30a,uVar2,&PTR_PTR_100f0f570);
  _swift_getObjectType(*(undefined8 *)(pcVar3 + 0x20));
  FUN_100642338();
  puVar4 = &DAT_100f13df0;
  _swift_allocObject(&DAT_100f13df0,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1008fed3c;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(puVar1);
  _swift_retain(param_3);
  pcVar5 = pcVar3;
  FUN_1008f77b8(pcVar3,thunk_FUN_1008fcb94,puVar4);
  _swift_release(puVar1);
  _swift_release(pcVar3);
  _swift_release_n(puVar4,2);
  return pcVar5;
}



/* Address: 0x1008e11b0 | FUN_1008e11b0 */

void FUN_1008e11b0(void)

{
  FUN_1008fed08(0x18);
  return;
}



/* Address: 0x1008e11b8 | FUN_1008e11b8 */

void FUN_1008e11b8(void)

{
  FUN_1008e1090();
  return;
}



/* Address: 0x1008e11c0 | FUN_1008e11c0 */

void FUN_1008e11c0(undefined8 *param_1,undefined8 *param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_3)(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008e11f4 | FUN_1008e11f4 */

undefined8 FUN_1008e11f4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  (*param_3)(&local_38,&local_30);
  return local_38;
}



/* Address: 0x1008e122c | thunk_FUN_1008fe75c */

undefined8 thunk_FUN_1008fe75c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_38,&uStack_30);
  return uStack_38;
}


