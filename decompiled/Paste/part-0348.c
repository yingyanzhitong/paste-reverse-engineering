/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10044992c | FUN_10044992c */

undefined8 * FUN_10044992c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100449968 | FUN_100449968 */

undefined8 * FUN_100449968(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x1004499c4 | FUN_1004499c4 */

void FUN_1004499c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 9);
  *(undefined8 *)((long)param_1 + 0x11) = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)((long)param_1 + 9) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004499d8 | FUN_1004499d8 */

undefined8 * FUN_1004499d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100449a1c | FUN_100449a1c */

int FUN_100449a1c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100449a64 | FUN_100449a64 */

void FUN_100449a64(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100449aa8 | FUN_100449aa8 */

undefined1  [16] FUN_100449aa8(void)

{
  return ZEXT816(0x100ed5530);
}



/* Address: 0x100449ab8 | thunk_FUN_100449abc */

void thunk_FUN_100449abc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc73c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b030,&DAT_100ed5530);
  DAT_100fc73c0 = pTVar1;
  return;
}



/* Address: 0x100449abc | FUN_100449abc */

void FUN_100449abc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc73c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b030;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b030,&DAT_100ed5530);
  DAT_100fc73c0 = pTVar1;
  return;
}



/* Address: 0x100449afc | thunk_FUN_100449b00 */

void thunk_FUN_100449b00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc73c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b008,&DAT_100ed5530);
  DAT_100fc73c8 = pTVar1;
  return;
}



/* Address: 0x100449b00 | FUN_100449b00 */

void FUN_100449b00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc73c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4b008;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4b008,&DAT_100ed5530);
  DAT_100fc73c8 = pTVar1;
  return;
}



/* Address: 0x100449b40 | FUN_100449b40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100449b40(void)

{
  return ZEXT816(0x100fc7410);
}



/* Address: 0x100449b60 | FUN_100449b60 */

void FUN_100449b60(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100449b7c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100449b7c | FUN_100449b7c */

undefined * FUN_100449b7c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100449c84);
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
    puVar3 = &DAT_100fc7490;
    FUN_1000f7830(&DAT_100fc7490,&DAT_100c4b0d8);
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



/* Address: 0x100449c84 | FUN_100449c84 */

void FUN_100449c84(long param_1,ulong param_2,long param_3)

{
  __DataStorage _Var1;
  uint uVar2;
  code *pcVar3;
  Deallocator DVar4;
  undefined7 extraout_var;
  ulong uVar6;
  __DataStorage *p_Var7;
  bool bVar8;
  __DataStorage *p_Var9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  long local_88;
  ulong local_80;
  __DataStorage local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  __DataStorage *p_Var5;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  p_Var5 = (__DataStorage *)CONCAT71(extraout_var,DVar4.value);
  lVar11 = (long)&local_e0 - (*(long *)(*(long *)(p_Var5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    param_2 = 0xc000000000000000;
    p_Var9 = (__DataStorage *)0x0;
    uVar10 = 3;
  }
  else {
    (**(code **)(*(long *)(p_Var5 + -8) + 0x68))
              (lVar11,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,p_Var5);
    p_Var5 = (__DataStorage *)(param_1 + param_3);
    FUN_100445398(p_Var5,param_2,lVar11);
    uVar2 = (uint)(param_2 >> 0x20);
    uVar10 = uVar2 >> 0x1e;
    p_Var9 = p_Var5;
    if (uVar2 >> 0x1e < 2) {
      bVar8 = false;
      if (uVar2 >> 0x1e == 0) {
        lVar11 = 0;
        uVar12 = param_2 >> 0x30 & 0xff;
      }
      else {
        lVar11 = (long)(int)p_Var5;
        uVar12 = (long)p_Var5 >> 0x20;
        uVar10 = 1;
      }
      goto LAB_100449d84;
    }
    uVar10 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e == 2) {
      bVar8 = false;
      lVar11 = *(long *)(p_Var5 + 0x10);
      uVar12 = *(ulong *)(p_Var5 + 0x18);
      uVar10 = 2;
      goto LAB_100449d84;
    }
  }
  uVar12 = 0;
  lVar11 = 0;
  bVar8 = true;
LAB_100449d84:
  if (SCARRY8(lVar11,uVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f88);
    (*pcVar3)();
  }
  if ((long)(lVar11 + uVar12) < lVar11) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f8c);
    (*pcVar3)();
  }
  if (lVar11 == lVar11 + uVar12) {
    FUN_10003bf2c(p_Var9,param_2);
    uVar6 = 0;
  }
  else {
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f9c);
      (*pcVar3)();
    }
    uVar6 = 0;
    local_88 = (long)p_Var9 >> 0x20;
    local_80 = param_2 >> 0x30 & 0xff;
    uStack_90 = (ulong)p_Var9 >> 8;
    local_98 = (ulong)p_Var9 >> 0x10;
    uStack_a0 = (ulong)p_Var9 >> 0x18;
    local_a8 = (ulong)p_Var9 >> 0x20;
    uStack_b0 = (ulong)p_Var9 >> 0x28;
    local_b8 = (ulong)p_Var9 >> 0x30;
    local_c0 = (ulong)p_Var9 >> 0x38;
    local_c8 = param_2 >> 8;
    local_d0 = param_2 >> 0x10;
    local_d8 = param_2 >> 0x18;
    local_e0 = param_2 >> 0x20;
    do {
      if (uVar10 == 1) {
        if ((lVar11 < (int)p_Var9) || (local_88 <= lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f7c);
          (*pcVar3)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f90);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar11,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f84);
          (*pcVar3)();
        }
LAB_100449e14:
        _Var1 = p_Var5[lVar11 - (long)p_Var7];
      }
      else {
        if (uVar10 != 0) {
          if (lVar11 < *(long *)(p_Var9 + 0x10)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f74);
            (*pcVar3)();
          }
          if (*(long *)(p_Var9 + 0x18) <= lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f80);
            (*pcVar3)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f94);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar11,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f20);
            (*pcVar3)();
          }
          goto LAB_100449e14;
        }
        if ((long)local_80 <= lVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100449f78);
          (*pcVar3)();
        }
        local_76[0] = SUB81(p_Var9,0);
        local_76[1] = (__DataStorage)(char)uStack_90;
        local_76[2] = (__DataStorage)(char)local_98;
        local_76[3] = (__DataStorage)(char)uStack_a0;
        local_72 = (char)local_a8;
        local_71 = (char)uStack_b0;
        local_70 = (char)local_b8;
        local_6f = (char)local_c0;
        local_6e = (char)param_2;
        local_6d = (char)local_c8;
        local_6c = (char)local_d0;
        local_6b = (char)local_d8;
        local_6a = (char)local_e0;
        local_69 = (char)(param_2 >> 0x28);
        _Var1 = local_76[lVar11];
        p_Var7 = p_Var5;
      }
      uVar6 = uVar6 << 8 | (ulong)(byte)_Var1;
      lVar11 = lVar11 + 1;
      uVar12 = uVar12 - 1;
      p_Var5 = p_Var7;
    } while (uVar12 != 0);
    FUN_10003bf2c(p_Var9,param_2);
    if (uVar6 == 0x7fffffffffffffff) {
      uVar6 = 0xffffffffffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}



/* Address: 0x100449f9c | FUN_100449f9c */

void FUN_100449f9c(long param_1,ulong param_2,long param_3)

{
  __DataStorage _Var1;
  code *pcVar2;
  Deallocator DVar3;
  undefined7 extraout_var;
  __DataStorage *p_Var5;
  bool bVar6;
  __DataStorage *p_Var7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_b8;
  ulong uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  ulong uStack_90;
  long local_88;
  ulong local_80;
  __DataStorage local_76 [4];
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  __DataStorage *p_Var4;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar3 = Foundation::Data::Deallocator::typeMetadataAccessor();
  p_Var4 = (__DataStorage *)CONCAT71(extraout_var,DVar3.value);
  lVar9 = (long)&local_e0 - (*(long *)(*(long *)(p_Var4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == 0) {
    param_2 = 0xc000000000000000;
    p_Var7 = (__DataStorage *)0x0;
    uVar8 = 3;
  }
  else {
    (**(code **)(*(long *)(p_Var4 + -8) + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,p_Var4);
    p_Var4 = (__DataStorage *)(param_1 + param_3);
    FUN_100445398(p_Var4,param_2,lVar9);
    uVar11 = (uint)(param_2 >> 0x20);
    uVar8 = uVar11 >> 0x1e;
    p_Var7 = p_Var4;
    if (uVar11 >> 0x1e < 2) {
      bVar6 = false;
      if (uVar11 >> 0x1e == 0) {
        lVar9 = 0;
        uVar10 = param_2 >> 0x30 & 0xff;
      }
      else {
        lVar9 = (long)(int)p_Var4;
        uVar10 = (long)p_Var4 >> 0x20;
        uVar8 = 1;
      }
      goto LAB_10044a09c;
    }
    uVar8 = uVar11 >> 0x1e;
    if (uVar11 >> 0x1e == 2) {
      bVar6 = false;
      lVar9 = *(long *)(p_Var4 + 0x10);
      uVar10 = *(ulong *)(p_Var4 + 0x18);
      uVar8 = 2;
      goto LAB_10044a09c;
    }
  }
  uVar10 = 0;
  lVar9 = 0;
  bVar6 = true;
LAB_10044a09c:
  if (SCARRY8(lVar9,uVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a2a0);
    (*pcVar2)();
  }
  if ((long)(lVar9 + uVar10) < lVar9) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a2a4);
    (*pcVar2)();
  }
  if (lVar9 == lVar9 + uVar10) {
    FUN_10003bf2c(p_Var7,param_2);
    uVar11 = 0;
  }
  else {
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a2b4);
      (*pcVar2)();
    }
    uVar11 = 0;
    local_88 = (long)p_Var7 >> 0x20;
    local_80 = param_2 >> 0x30 & 0xff;
    uStack_90 = (ulong)p_Var7 >> 8;
    local_98 = (ulong)p_Var7 >> 0x10;
    uStack_a0 = (ulong)p_Var7 >> 0x18;
    local_a8 = (ulong)p_Var7 >> 0x20;
    uStack_b0 = (ulong)p_Var7 >> 0x28;
    local_b8 = (ulong)p_Var7 >> 0x30;
    local_c0 = (ulong)p_Var7 >> 0x38;
    local_c8 = param_2 >> 8;
    local_d0 = param_2 >> 0x10;
    local_d8 = param_2 >> 0x18;
    local_e0 = param_2 >> 0x20;
    do {
      if (uVar8 == 1) {
        if ((lVar9 < (int)p_Var7) || (local_88 <= lVar9)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a294);
          (*pcVar2)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (p_Var4 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a2a8);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (SBORROW8(lVar9,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a29c);
          (*pcVar2)();
        }
LAB_10044a12c:
        _Var1 = p_Var4[lVar9 - (long)p_Var5];
      }
      else {
        if (uVar8 != 0) {
          if (lVar9 < *(long *)(p_Var7 + 0x10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a28c);
            (*pcVar2)();
          }
          if (*(long *)(p_Var7 + 0x18) <= lVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a298);
            (*pcVar2)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
          if (p_Var4 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a2ac);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
          if (SBORROW8(lVar9,(long)p_Var5)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a238);
            (*pcVar2)();
          }
          goto LAB_10044a12c;
        }
        if ((long)local_80 <= lVar9) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10044a290);
          (*pcVar2)();
        }
        local_76[0] = SUB81(p_Var7,0);
        local_76[1] = (__DataStorage)(char)uStack_90;
        local_76[2] = (__DataStorage)(char)local_98;
        local_76[3] = (__DataStorage)(char)uStack_a0;
        local_72 = (char)local_a8;
        local_71 = (char)uStack_b0;
        local_70 = (char)local_b8;
        local_6f = (char)local_c0;
        local_6e = (char)param_2;
        local_6d = (char)local_c8;
        local_6c = (char)local_d0;
        local_6b = (char)local_d8;
        local_6a = (char)local_e0;
        local_69 = (char)(param_2 >> 0x28);
        _Var1 = local_76[lVar9];
        p_Var5 = p_Var4;
      }
      uVar11 = uVar11 << 8 | (uint)(byte)_Var1;
      lVar9 = lVar9 + 1;
      uVar10 = uVar10 - 1;
      p_Var4 = p_Var5;
    } while (uVar10 != 0);
    FUN_10003bf2c(p_Var7,param_2);
    if (uVar11 == 0x7fffffff) {
      uVar11 = 0xffffffff;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar11);
  }
  return;
}



/* Address: 0x10044a2b4 | FUN_10044a2b4 */

/* WARNING: Removing unreachable block (ram,0x00010044a670) */

String FUN_10044a2b4(Data param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  String SVar16;
  uint local_80 [2];
  undefined *local_78;
  undefined4 local_6c;
  undefined8 local_68;
  
  puVar8 = &DAT_100fc7470;
  FUN_1000f7830(&DAT_100fc7470,&DAT_100c4b0c8);
  lVar12 = (long)local_80 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = (uint)(param_2 >> 0x20);
  uVar9 = uVar3 >> 0x1e;
  local_78 = puVar8;
  if (uVar3 >> 0x1e < 2) {
    if (uVar9 == 0) {
      if ((param_2 & 0xff000000000000) == 0) {
LAB_10044a368:
        return (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      goto LAB_10044a384;
    }
    if ((long)(int)param_1.unknown == (long)param_1.unknown >> 0x20) goto LAB_10044a368;
  }
  else if ((uVar9 != 2) || (*(long *)(param_1.unknown + 0x10) == *(long *)(param_1.unknown + 0x18)))
  goto LAB_10044a368;
  FUN_1001037b4(param_1.unknown,param_2);
LAB_10044a384:
  Foundation::Data::Iterator::init(param_1,param_2);
  Foundation::Data::Iterator::typeMetadataAccessor();
  FUN_10044a8d8();
  Swift::IteratorProtocol::_next();
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (local_68._1_1_ == '\x01') {
    lVar15 = 0;
  }
  else {
    local_80[0] = 0;
    local_80[1] = 0;
    lVar14 = 0;
    do {
      while( true ) {
        lVar15 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10044a6f8);
          (*pcVar5)();
        }
        bVar4 = (byte)local_68;
        if (lVar14 != 0) break;
        puVar7 = puVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar8;
        if (((ulong)puVar7 & 1) == 0) {
          puVar6 = (undefined *)0x0;
          FUN_10044c738(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
        }
        uVar2 = *(ulong *)(puVar6 + 0x10);
        uVar10 = *(ulong *)(puVar6 + 0x18);
        uVar11 = uVar10 >> 1;
        lVar14 = uVar2 + 1;
        puVar7 = puVar6;
        if (uVar11 <= uVar2) {
          puVar7 = (undefined *)(ulong)(1 < uVar10);
          FUN_10044c738(puVar7,lVar14,1,puVar6);
          uVar10 = *(ulong *)(puVar7 + 0x18);
          uVar11 = uVar10 >> 1;
        }
        uVar3 = bVar4 / 0x28;
        *(long *)(puVar7 + 0x10) = lVar14;
        *(uint *)(puVar7 + uVar2 * 4 + 0x20) = uVar3;
        lVar1 = uVar2 + 2;
        puVar8 = puVar7;
        if ((long)uVar11 < lVar1) {
          puVar8 = (undefined *)(ulong)(1 < uVar10);
          FUN_10044c738(puVar8,lVar1,1,puVar7);
        }
        *(long *)(puVar8 + 0x10) = lVar1;
        *(uint *)(puVar8 + lVar14 * 4 + 0x20) = (uint)bVar4 + uVar3 * -0x28 & 0xff;
        Swift::IteratorProtocol::_next();
        lVar14 = 1;
        if (local_68._1_1_ == '\x01') goto LAB_10044a3d4;
      }
      puVar7 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar8;
      if (((ulong)puVar7 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10044c738(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar2 = *(ulong *)(puVar6 + 0x10);
      puVar8 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10044c738(puVar8,uVar2 + 1,1,puVar6);
      }
      *(ulong *)(puVar8 + 0x10) = uVar2 + 1;
      *(uint *)(puVar8 + uVar2 * 4 + 0x20) = local_80[1] | local_80[0] & 0xff;
      local_80[0] = 0;
      local_80[1] = 0;
      Swift::IteratorProtocol::_next();
      lVar14 = lVar15;
    } while (local_68._1_1_ != '\x01');
  }
LAB_10044a3d4:
  *(long *)(lVar12 + *(int *)(local_78 + 0x24)) = lVar15;
  FUN_10044a91c(lVar12);
  lVar12 = *(long *)(puVar8 + 0x10);
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar12 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100449b60(0,lVar12,0);
    puVar13 = (undefined4 *)(puVar8 + 0x20);
    do {
      puVar7 = local_68;
      local_6c = *puVar13;
      SVar16 = Swift::CustomStringConvertible::get_description();
      uVar2 = *(ulong *)(puVar7 + 0x10);
      local_68 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar2) {
        FUN_100449b60(1 < *(ulong *)(puVar7 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar2 + 1;
      *(String *)(local_68 + uVar2 * 0x10 + 0x20) = SVar16;
      lVar12 = lVar12 + -1;
      puVar7 = local_68;
      puVar13 = puVar13 + 1;
    } while (lVar12 != 0);
  }
  local_68 = puVar7;
  FUN_1000f7830(&DAT_100fc7480,&DAT_100c4b0d0);
  FUN_10044a964();
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2e;
  SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar7);
  return SVar16;
}



/* Address: 0x10044a6f8 | FUN_10044a6f8 */

undefined1  [16] FUN_10044a6f8(long param_1,undefined *param_2,long param_3,Encoding param_4)

{
  Deallocator DVar1;
  bool bVar2;
  Encoding EVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  Encoding EVar5;
  Encoding EVar6;
  Encoding EVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined *local_60;
  undefined *puStack_58;
  
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar11 = *(long *)(EVar3.unknown + -8);
  EVar6.unknown =
       (undefined *)((long)&local_60 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar1 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,DVar1.value) + -8);
  lVar9 = (long)EVar6.unknown - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (param_2 == (undefined *)0x0) {
    param_2 = (undefined *)0xc000000000000000;
    puVar4 = (undefined *)0x0;
  }
  else {
    (**(code **)(lVar8 + 0x68))
              (lVar9,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
               ,CONCAT71(extraout_var,DVar1.value));
    puVar4 = (undefined *)(param_1 + param_3);
    FUN_100445398(puVar4,param_2,lVar9);
  }
  if (DAT_100fc75e0 != -1) {
    _swift_once(&DAT_100fc75e0,FUN_10044c4b8);
  }
  EVar5 = EVar3;
  FUN_1000cd990(EVar3.unknown,&DAT_101057aa0);
  pcVar10 = *(code **)(lVar11 + 0x10);
  EVar7 = EVar3;
  (*pcVar10)(EVar6.unknown,EVar5.unknown);
  bVar2 = Encoding::____infix(param_4,EVar6,EVar7);
  (**(code **)(lVar11 + 8))(EVar6.unknown,EVar3.unknown);
  if (bVar2) {
    EVar3.unknown = puVar4;
    EVar6.unknown = param_2;
    FUN_10044a2b4(puVar4,param_2);
  }
  else {
    local_60 = puVar4;
    puStack_58 = param_2;
    (*pcVar10)(EVar6.unknown,param_4.unknown,EVar3.unknown);
    FUN_10044a898();
    EVar3.unknown = (undefined *)&local_60;
    (extension_Foundation)::Swift::String::_init(EVar3);
  }
  FUN_10003bf2c(puVar4,param_2);
  auVar12._8_8_ = EVar6.unknown;
  auVar12._0_8_ = EVar3.unknown;
  return auVar12;
}



/* Address: 0x10044a898 | FUN_10044a898 */

void FUN_10044a898(void)

{
  undefined *puVar1;
  
  if (DAT_100fc7468 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Swift__Sequence_100ea7310;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Swift__Sequence_100ea7310,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100fc7468 = puVar1;
  return;
}



/* Address: 0x10044a8d8 | FUN_10044a8d8 */

void FUN_10044a8d8(void)

{
  Iterator IVar1;
  undefined *puVar2;
  
  if (DAT_100fc7478 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Data::Iterator::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data__Iterator_>Swift__IteratorProtocol_100ea72d8,
             IVar1.unknown);
  DAT_100fc7478 = puVar2;
  return;
}



/* Address: 0x10044a91c | FUN_10044a91c */

undefined8 FUN_10044a91c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7470;
  FUN_1000f7830(&DAT_100fc7470,&DAT_100c4b0c8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10044a964 | FUN_10044a964 */

void FUN_10044a964(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc7488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7480;
  FUN_1000f8b08(&DAT_100fc7480,&DAT_100c4b0d0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fc7488 = puVar2;
  return;
}



/* Address: 0x10044a9b4 | FUN_10044a9b4 */

void FUN_10044a9b4(undefined8 param_1)

{
  byte bVar1;
  Encoding EVar2;
  long lVar3;
  byte *pbVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  EVar2.unknown = (undefined *)(unaff_x20 + 0x10);
  _swift_beginAccess(EVar2.unknown,auStack_38,0,0);
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  pbVar4 = (byte *)(*(long *)(unaff_x20 + 0x10) + 0x20);
  do {
    if (lVar3 == 0) {
      Encoding::_get_utf8(EVar2);
      return;
    }
    bVar1 = *pbVar4;
    EVar2.unknown = (undefined *)(ulong)bVar1;
    lVar3 = lVar3 + -1;
    pbVar4 = pbVar4 + 1;
  } while (0x3f < bVar1);
  FUN_10044ae34(param_1);
  return;
}



/* Address: 0x10044aa20 | FUN_10044aa20 */

void FUN_10044aa20(void)

{
  _swift_retain();
  return;
}



/* Address: 0x10044aa28 | FUN_10044aa28 */

void FUN_10044aa28(undefined1 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0x21,0);
  uVar3 = *(ulong *)(unaff_x20 + 0x10);
  uVar1 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x10) = uVar3;
  uVar2 = uVar3;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
    FUN_10044c504(0,*(long *)(uVar3 + 0x10) + 1,1,uVar3);
    *(ulong *)(unaff_x20 + 0x10) = uVar2;
  }
  uVar1 = *(ulong *)(uVar2 + 0x10);
  uVar3 = uVar2;
  if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar1) {
    uVar3 = (ulong)(1 < *(ulong *)(uVar2 + 0x18));
    FUN_10044c504(uVar3,uVar1 + 1,1,uVar2);
  }
  *(ulong *)(uVar3 + 0x10) = uVar1 + 1;
  *(undefined1 *)(uVar3 + uVar1 + 0x20) = param_1;
  *(ulong *)(unaff_x20 + 0x10) = uVar3;
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x10044aaf8 | FUN_10044aaf8 */

void FUN_10044aaf8(void)

{
  FUN_10044ac88();
  _swift_retain();
  return;
}



/* Address: 0x10044ab0c | FUN_10044ab0c */

long FUN_10044ab0c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = param_1;
  FUN_10044add8();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_beginAccess((undefined8 *)(lVar3 + 0x10),auStack_48,0x21,0);
  uVar4 = 0;
  FUN_10044c504(0,1,1,puVar2);
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10044c504(uVar4,uVar1 + 1,1);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(byte *)(uVar4 + uVar1 + 0x20) = (byte)param_1 | 0x80;
  *(ulong *)(lVar3 + 0x10) = uVar4;
  _swift_endAccess(auStack_48);
  return lVar3;
}



/* Address: 0x10044abcc | FUN_10044abcc */

long FUN_10044abcc(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_48 [24];
  
  lVar3 = param_1;
  FUN_10044add8();
  _swift_allocObject();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar3 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_beginAccess((undefined8 *)(lVar3 + 0x10),auStack_48,0x21,0);
  uVar4 = 0;
  FUN_10044c504(0,1,1,puVar2);
  uVar1 = *(ulong *)(uVar4 + 0x10);
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar1) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_10044c504(uVar4,uVar1 + 1,1);
  }
  *(ulong *)(uVar4 + 0x10) = uVar1 + 1;
  *(char *)(uVar4 + uVar1 + 0x20) = (char)param_1;
  *(ulong *)(lVar3 + 0x10) = uVar4;
  _swift_endAccess(auStack_48);
  return lVar3;
}



/* Address: 0x10044ac88 | FUN_10044ac88 */

void FUN_10044ac88(void)

{
  byte bVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x10);
  uVar5 = *(ulong *)(uVar4 + 0x10);
  if (uVar5 == 0) {
    _swift_beginAccess(unaff_x20 + 0x10,auStack_70,0x21,0);
    uVar5 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0x10) = uVar4;
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
      FUN_10044c504(0,1,1,uVar4);
      *(ulong *)(unaff_x20 + 0x10) = uVar3;
    }
    uVar5 = *(ulong *)(uVar3 + 0x10);
    uVar4 = uVar3;
    if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar5) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
      FUN_10044c504(uVar4,uVar5 + 1,1,uVar3);
    }
    *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
    *(undefined1 *)(uVar4 + uVar5 + 0x20) = 0;
    *(ulong *)(unaff_x20 + 0x10) = uVar4;
    _swift_endAccess(auStack_70);
    uVar5 = *(ulong *)(uVar4 + 0x10);
    if (uVar5 == 0) {
      return;
    }
  }
  bVar1 = *(byte *)(uVar4 + (uVar5 - 1) + 0x20);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_70,0x21,0);
  uVar3 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(unaff_x20 + 0x10) = uVar4;
  if ((uVar3 & 1) == 0) {
    FUN_10044526c();
  }
  if (uVar5 <= *(ulong *)(uVar4 + 0x10)) {
    *(byte *)(uVar4 + (uVar5 - 1) + 0x20) = bVar1 | 0x20;
    *(ulong *)(unaff_x20 + 0x10) = uVar4;
    _swift_endAccess(auStack_70);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10044ad98);
  (*pcVar2)();
}



/* Address: 0x10044add8 | FUN_10044add8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10044add8(void)

{
  return ZEXT816(0x100fc74d8);
}



/* Address: 0x10044adf8 | FUN_10044adf8 */

undefined * FUN_10044adf8(void)

{
  return &DAT_100c4b13b;
}



/* Address: 0x10044ae04 | FUN_10044ae04 */

undefined * FUN_10044ae04(void)

{
  return &DAT_100c4b116;
}



/* Address: 0x10044ae10 | FUN_10044ae10 */

undefined * FUN_10044ae10(void)

{
  return &DAT_100c4b11d;
}



/* Address: 0x10044ae1c | FUN_10044ae1c */

undefined * FUN_10044ae1c(void)

{
  return &DAT_100c4b112;
}



/* Address: 0x10044ae28 | FUN_10044ae28 */

undefined * FUN_10044ae28(void)

{
  return &DAT_100c4b114;
}



/* Address: 0x10044ae34 | FUN_10044ae34 */

void FUN_10044ae34(undefined8 param_1,Encoding param_2)

{
  uint uVar1;
  uint uVar2;
  Encoding EVar3;
  Encoding EVar4;
  
  uVar1 = (uint)param_2.unknown & 0xff;
  if (uVar1 < 0x1e) {
    uVar2 = 1 << (ulong)((uint)param_2.unknown & 0x1f);
    if ((uVar2 & 0x381c1000) != 0) {
      Encoding::_get_utf8(param_2);
      return;
    }
    if (((uVar2 & 0x1c00000) == 0) && (uVar1 == 6)) {
      if (DAT_100fc75e0 != -1) {
        _swift_once(&DAT_100fc75e0,FUN_10044c4b8);
      }
      EVar3 = Encoding::_typeMetadataAccessor();
      EVar4 = EVar3;
      FUN_1000cd990(EVar3.unknown,&DAT_101057aa0);
                    /* WARNING: Could not recover jumptable at 0x00010044aec4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(EVar3.unknown + -8) + 0x10))(param_1,EVar4.unknown,EVar3.unknown);
      return;
    }
  }
  Encoding::_get_ascii(param_2);
  return;
}



/* Address: 0x10044aee0 | FUN_10044aee0 */

void FUN_10044aee0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10003bf2c(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Address: 0x10044af14 | FUN_10044af14 */

void FUN_10044af14(void)

{
  FUN_10044b548(0);
  return;
}



/* Address: 0x10044af2c | FUN_10044af2c */

undefined1  [16] FUN_10044af2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x61746144776172;
  return auVar1;
}



/* Address: 0x10044af44 | FUN_10044af44 */

void FUN_10044af44(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x61746144776172 && param_3 == &DAT_e700000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x61746144776172,(_StringGuts)0xe700000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x10044afc8 | FUN_10044afc8 */

String FUN_10044afc8(void)

{
  String SVar1;
  
  FUN_10044baf4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x10044aff0 | FUN_10044aff0 */

String FUN_10044aff0(void)

{
  String SVar1;
  
  FUN_10044baf4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10044b018 | FUN_10044b018 */

void FUN_10044b018(void)

{
  FUN_10044b42c();
  return;
}



/* Address: 0x10044b02c | FUN_10044b02c */

void FUN_10044b02c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x21;
  
  FUN_10044b42c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
  }
  return;
}



/* Address: 0x10044b054 | FUN_10044b054 */

void FUN_10044b054(void)

{
  FUN_10044b548(5);
  return;
}



/* Address: 0x10044b06c | FUN_10044b06c */

undefined * FUN_10044b06c(void)

{
  return &DAT_100c4b123;
}



/* Address: 0x10044b078 | FUN_10044b078 */

void FUN_10044b078(void)

{
  FUN_100004594();
  return;
}



/* Address: 0x10044b09c | FUN_10044b09c */

undefined * FUN_10044b09c(void)

{
  return &DAT_100c4b124;
}



/* Address: 0x10044b0a8 | FUN_10044b0a8 */

undefined * FUN_10044b0a8(void)

{
  return &DAT_100c4b12a;
}



/* Address: 0x10044b0b4 | FUN_10044b0b4 */

undefined * FUN_10044b0b4(void)

{
  return &DAT_100c4b12f;
}



/* Address: 0x10044b0c0 | FUN_10044b0c0 */

undefined * FUN_10044b0c0(void)

{
  return &DAT_100c4b12e;
}



/* Address: 0x10044b0cc | FUN_10044b0cc */

undefined * FUN_10044b0cc(void)

{
  return &DAT_100c4b137;
}



/* Address: 0x10044b0d8 | FUN_10044b0d8 */

undefined * FUN_10044b0d8(void)

{
  return &DAT_100c4b138;
}



/* Address: 0x10044b0e4 | FUN_10044b0e4 */

undefined * FUN_10044b0e4(void)

{
  return &DAT_100c4b139;
}



/* Address: 0x10044b0f0 | FUN_10044b0f0 */

undefined * FUN_10044b0f0(void)

{
  return &DAT_100c4b130;
}



/* Address: 0x10044b0fc | FUN_10044b0fc */

undefined * FUN_10044b0fc(void)

{
  return &DAT_100c4b132;
}



/* Address: 0x10044b108 | FUN_10044b108 */

undefined * FUN_10044b108(void)

{
  return &DAT_100c4b133;
}



/* Address: 0x10044b114 | FUN_10044b114 */

undefined * FUN_10044b114(void)

{
  return &DAT_100c4b134;
}



/* Address: 0x10044b120 | FUN_10044b120 */

undefined * FUN_10044b120(void)

{
  return &DAT_100c4b110;
}



/* Address: 0x10044b12c | FUN_10044b12c */

undefined8 FUN_10044b12c(void)

{
  return 0x20;
}



/* Address: 0x10044b134 | FUN_10044b134 */

undefined * FUN_10044b134(void)

{
  return &DAT_100c4b111;
}



/* Address: 0x10044b140 | FUN_10044b140 */

undefined * FUN_10044b140(void)

{
  return &DAT_100c4b113;
}



/* Address: 0x10044b14c | FUN_10044b14c */

undefined8 FUN_10044b14c(void)

{
  return 0xc0;
}



/* Address: 0x10044b154 | FUN_10044b154 */

undefined * FUN_10044b154(void)

{
  return &DAT_100c4b115;
}


