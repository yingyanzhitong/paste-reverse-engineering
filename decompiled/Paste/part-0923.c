/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009ebf30 | FUN_1009ebf30 */

void FUN_1009ebf30(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar4 = *(code **)(unaff_x22 + 0x50);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar4)(uVar2,uVar1,uVar7);
  _swift_storeEnumTagMultiPayload(uVar2,uVar5,0);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009ebfe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar6,uVar8);
  return;
}



/* Address: 0x1009ebfe4 | FUN_1009ebfe4 */

void FUN_1009ebfe4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  pcVar3 = *(code **)(unaff_x22 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_1000fb4c4(uVar2,&DAT_100ff3c10,&DAT_100c8e0d0);
  (*pcVar3)(uVar2,uVar1,uVar5);
  _swift_storeEnumTagMultiPayload(uVar2,uVar4,0);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001009ec078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009ec07c | FUN_1009ec07c */

void FUN_1009ec07c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1009ea194;
  FUN_1009e9f20();
  return;
}



/* Address: 0x1009ec0cc | FUN_1009ec0cc */

void FUN_1009ec0cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009ec148;
  FUN_1009ea410(param_2,param_3);
  return;
}



/* Address: 0x1009ec148 | FUN_1009ec148 */

void FUN_1009ec148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x20));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(int *)(puVar1 + 2) = (int)param_3;
    *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
    *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
  else {
    **(long **)(lVar3 + 0x18) = unaff_x20;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar2 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001009ec1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1009ec1dc | FUN_1009ec1dc */

void FUN_1009ec1dc(long param_1,long param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  
  puVar4 = &DAT_100ff3ce0;
  FUN_1000f7830(&DAT_100ff3ce0,&DAT_100c8d348);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x14));
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ec2d4);
    (*pcVar2)();
  }
  uVar1 = *(undefined1 *)(lVar5 + 0x10);
  *(undefined1 *)(lVar5 + 0x10) = 1;
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x18));
  if (iVar3 == 0) {
    FUN_1000f8cac();
    FUN_10011532c(&stack0xffffffffffffffc0 + -extraout_x8,param_1,&DAT_100ff3c00,&DAT_100c8d460);
    lVar5 = 0;
    FUN_1009eda8c();
    *(undefined1 *)(param_1 + *(int *)(lVar5 + 0x14)) = uVar1;
    FUN_10005241c();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ec2d8);
  (*pcVar2)();
}



/* Address: 0x1009ec2d8 | FUN_1009ec2d8 */

undefined1  [16] FUN_1009ec2d8(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  puVar3 = &DAT_100f270e0;
  _swift_allocObject(&DAT_100f270e0,0x18,7);
  lVar5 = *(long *)(param_1 + 0x10);
  puVar4 = &DAT_100ff4298;
  FUN_1000f7830(&DAT_100ff4298,&DAT_100c8d720);
  _swift_allocObject();
  *(long *)(puVar4 + 0x10) = lVar5;
  _swift_retain(lVar5);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ec37c);
    (*pcVar1)();
  }
  thunk_FUN_100a1c99c();
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x58));
  if (iVar2 == 0) {
    *(undefined **)(puVar3 + 0x10) = puVar4;
    auVar6._8_8_ = puVar3;
    auVar6._0_8_ = &DAT_100c8d730;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ec380);
  (*pcVar1)();
}



/* Address: 0x1009ec380 | FUN_1009ec380 */

undefined * FUN_1009ec380(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_120;
  undefined1 auStack_110 [72];
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  ushort uStack_a0;
  undefined1 uStack_9e;
  undefined5 uStack_9d;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_b8 = param_3 & 1;
  uStack_9e = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_40 = 0;
  uStack_58 = CONCAT53(uStack_9d,(uint3)uStack_a0);
  uStack_48 = 0;
  puVar3 = &DAT_100ff42a0;
  local_c8 = param_1;
  uStack_c0 = param_2;
  local_98 = param_4;
  local_80 = param_1;
  uStack_78 = param_2;
  uStack_70 = local_b8;
  uStack_50 = param_4;
  FUN_1000f7830(&DAT_100ff42a0,&DAT_100c8d738);
  _swift_allocObject();
  *(ulong *)(puVar3 + 0x38) = CONCAT53(uStack_9d,CONCAT12(uStack_9e,uStack_a0));
  *(undefined8 *)(puVar3 + 0x30) = local_a8;
  *(undefined8 *)(puVar3 + 0x48) = uStack_90;
  *(undefined8 *)(puVar3 + 0x40) = local_98;
  *(undefined8 *)(puVar3 + 0x50) = local_88;
  *(undefined8 *)(puVar3 + 0x18) = uStack_c0;
  *(undefined8 *)(puVar3 + 0x10) = local_c8;
  *(undefined8 *)(puVar3 + 0x28) = uStack_b0;
  *(ulong *)(puVar3 + 0x20) = local_b8;
  local_120.__sig = 0;
  local_120.__opaque[0] = '\0';
  local_120.__opaque[1] = '\0';
  local_120.__opaque[2] = '\0';
  local_120.__opaque[3] = '\0';
  local_120.__opaque[4] = '\0';
  local_120.__opaque[5] = '\0';
  local_120.__opaque[6] = '\0';
  local_120.__opaque[7] = '\0';
  FUN_1000f8cac(&local_80,auStack_110,&DAT_100ff42a8,&DAT_100c8d740);
  _pthread_mutexattr_init(&local_120);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x58),&local_120);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ec4a4);
    (*pcVar1)();
  }
  FUN_1000fb4c4(&local_c8,&DAT_100ff42a8,&DAT_100c8d740);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009ec4a8 | FUN_1009ec4a8 */

void FUN_1009ec4a8(long param_1,long param_2)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong *puVar7;
  long *plVar8;
  long extraout_x8;
  undefined8 *puVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  ulong uVar10;
  code *pcVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong local_a0 [2];
  long *local_90;
  long local_88;
  long local_80;
  long local_78;
  ulong *local_70;
  ulong local_68;
  
  lVar4 = 0;
  lVar16 = param_2;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar13 = (ulong *)((long)local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecac0);
    (*pcVar2)();
  }
  FUN_1009ecacc();
  if (param_1 == 0) {
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar3 == 0) goto LAB_1009ec5d0;
  }
  else {
    plVar15 = *(long **)(param_2 + 0x40);
    *(undefined8 *)(param_2 + 0x40) = 0;
    _swift_errorRetain(lVar16);
    _swift_errorRelease(lVar16);
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
    if (iVar3 == 0) {
      if (lVar16 == 0) {
        _swift_errorRetain(0);
        puVar9 = *(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28);
        *puVar9 = 0;
        puVar9[1] = 0;
        *(undefined8 *)((long)puVar9 + 0xf) = 0;
        _swift_continuation_throwingResume(param_1);
      }
      else {
        puVar5 = &DAT_100ff3d20;
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar9 = (undefined8 *)
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        puVar6 = puVar5;
        plVar8 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar8 = lVar16;
        _swift_allocError(puVar5,puVar9,0,0);
        *puVar9 = puVar6;
        _swift_errorRetain(lVar16);
        _swift_continuation_throwingResumeWithError(param_1,puVar5);
      }
      if (plVar15 != (long *)0x0) {
        uVar12 = *(ulong *)(*plVar15 +
                            *(long *)
                             PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                           0x10);
        uVar10 = (ulong)*(uint *)(*plVar15 + 0x30) + 7 & 0x1fffffff8;
        iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar15 + uVar10));
        if (iVar3 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecac8);
          (*pcVar2)();
        }
        FUN_1000c495c((long)plVar15 + uVar12,puVar13,FUN_1009ea95c);
        puVar7 = puVar13;
        _swift_getEnumCaseMultiPayload(puVar13,lVar4);
        iVar3 = (int)puVar7;
        if (iVar3 < 2) {
          local_a0[0] = uVar12;
          local_a0[1] = uVar10;
          local_90 = plVar15;
          local_88 = lVar4;
          local_80 = param_1;
          local_78 = lVar16;
          if (iVar3 == 0) {
            FUN_10005241c((long)plVar15 + uVar12,FUN_1009ea95c);
            puVar5 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            lVar16 = *(long *)(*(long *)(puVar5 + -8) + 0x40);
            local_70 = puVar13;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            uVar10 = lVar16 + 0xfU & 0xfffffffffffffff0;
            lVar4 = (long)puVar13 - uVar10;
            FUN_10011532c(puVar13,lVar4,&DAT_100ff3d50,&DAT_100c8d458);
            puVar5 = &DAT_100ff3d48;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar18 = *(long *)(puVar5 + -8);
            (*(code *)PTR____chkstk_darwin_100ea82c0)
                      (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar14 = lVar4 - extraout_x8_00;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            lVar17 = lVar14 - uVar10;
            FUN_1000f8cac(lVar4,lVar17,&DAT_100ff3d50,&DAT_100c8d458);
            lVar16 = lVar17;
            (**(code **)(lVar18 + 0x30))(lVar17,1,puVar5);
            if ((int)lVar16 == 1) {
              FUN_1000fb4c4(lVar4,&DAT_100ff3d50,&DAT_100c8d458);
              FUN_1000fb4c4(lVar17,&DAT_100ff3d50,&DAT_100c8d458);
            }
            else {
              (**(code **)(lVar18 + 0x20))(lVar14,lVar17,puVar5);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar18 + 8))(lVar14,puVar5);
              FUN_1000fb4c4(lVar4,&DAT_100ff3d50,&DAT_100c8d458);
            }
            lVar16 = local_78;
            param_1 = local_80;
            plVar15 = local_90;
            uVar10 = local_a0[1];
            _swift_storeEnumTagMultiPayload((long)local_90 + local_a0[0],local_88,3);
          }
          else {
            FUN_10005241c((long)plVar15 + uVar12,FUN_1009ea95c);
            uVar10 = *puVar13;
            puVar5 = &DAT_100ff3d48;
            local_68 = uVar10;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar16 = *(long *)(puVar5 + -8);
            bVar1 = *(byte *)(lVar16 + 0x50);
            lVar4 = *(long *)(lVar16 + 0x40);
            (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar4 + 0xfU & 0xfffffffffffffff0);
            lVar14 = (long)puVar13 - extraout_x8_01;
            puVar6 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            (*(code *)PTR____chkstk_darwin_100ea82c0)
                      (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar17 = lVar14 - extraout_x8_02;
            if (*(long *)(uVar10 + 0x18) < 1) {
              pcVar2 = *(code **)(lVar16 + 0x38);
            }
            else {
              local_70 = (ulong *)(ulong)(bVar1 + 0x28 & (bVar1 ^ 0xffffffff));
              do {
                uVar12 = uVar10;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar12 & 1) == 0) {
                  FUN_1009ed5b0();
                  uVar10 = local_68;
                }
                pcVar11 = *(code **)(lVar16 + 0x20);
                (*pcVar11)(lVar17,(long)local_70 +
                                  *(long *)(lVar16 + 0x48) * *(long *)(uVar10 + 0x20) + uVar10,
                           puVar5);
                lVar18 = *(long *)(uVar10 + 0x20) + 1;
                if (SCARRY8(*(long *)(uVar10 + 0x20),1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecab8);
                  (*pcVar2)();
                }
                if (*(long *)(uVar10 + 0x10) <= lVar18) {
                  lVar18 = 0;
                }
                *(long *)(uVar10 + 0x20) = lVar18;
                if (SBORROW8(*(long *)(uVar10 + 0x18),1)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecabc);
                  (*pcVar2)();
                }
                *(long *)(uVar10 + 0x18) = *(long *)(uVar10 + 0x18) + -1;
                pcVar2 = *(code **)(lVar16 + 0x38);
                (*pcVar2)(lVar17,0,1,puVar5);
                (*pcVar11)(lVar14,lVar17,puVar5);
                Swift::CheckedContinuation::resume();
                (**(code **)(lVar16 + 8))(lVar14,puVar5);
                (*(code *)PTR____chkstk_darwin_100ea82c0)();
                lVar14 = (long)puVar13 - (lVar4 + 0xfU & 0xfffffffffffffff0);
                puVar6 = &DAT_100ff3d50;
                FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
                (*(code *)PTR____chkstk_darwin_100ea82c0)
                          (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
                lVar17 = lVar14 - extraout_x8_03;
              } while (0 < *(long *)(uVar10 + 0x18));
            }
            (*pcVar2)(lVar17,1,1,puVar5);
            _swift_release(uVar10);
            FUN_1000fb4c4(lVar17,&DAT_100ff3d50,&DAT_100c8d458);
            plVar15 = local_90;
            _swift_storeEnumTagMultiPayload((long)local_90 + local_a0[0],local_88,3);
            lVar16 = local_78;
            uVar10 = local_a0[1];
            param_1 = local_80;
          }
        }
        else if (iVar3 != 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ec7c4);
          (*pcVar2)();
        }
        iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar15 + uVar10));
        if (iVar3 == 0) {
          FUN_1009e8f20(param_1,lVar16);
          _swift_release(plVar15);
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecacc);
        (*pcVar2)();
      }
LAB_1009ec5d0:
      FUN_1009e8f20(param_1,lVar16);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ecac4);
  (*pcVar2)();
}



/* Address: 0x1009ecacc | FUN_1009ecacc */

undefined1  [16] FUN_1009ecacc(ulong param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  ushort uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auVar16 [16];
  
  puVar8 = (ulong *)*unaff_x20;
  uVar9 = unaff_x20[1];
  uVar10 = unaff_x20[2];
  uVar11 = unaff_x20[3];
  uVar12 = unaff_x20[4];
  uVar6 = unaff_x20[5];
  bVar2 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar2 < 3) {
    bVar3 = *(byte *)((long)unaff_x20 + 0x11);
    if (bVar2 == 0) {
      FUN_1009e8ec8();
      FUN_1006883ac();
      uVar13 = *puVar8;
      uVar6 = *unaff_x20;
      uVar10 = unaff_x20[1];
      uVar9 = unaff_x20[2];
      uVar11 = unaff_x20[3];
      uVar15 = unaff_x20[4];
      uVar4 = *(undefined1 *)((long)unaff_x20 + 0x2a);
      uVar12 = unaff_x20[5];
      _swift_retain(uVar13);
      _swift_errorRetain(param_1);
      FUN_1009e8f30(uVar6,uVar10,uVar9,uVar11,uVar15,(short)uVar12,uVar4);
      *unaff_x20 = uVar13;
      unaff_x20[1] = (ulong)bVar3 & 1;
      unaff_x20[2] = param_1;
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      *(undefined1 *)((long)unaff_x20 + 0x2a) = 2;
    }
    else if (bVar2 == 1) {
      bVar2 = *(byte *)((long)unaff_x20 + 0x29);
      if (uVar12 != 0) {
        lVar14 = *(long *)(uVar11 + 0x18);
        FUN_1009e8ec8();
        _swift_release(uVar11);
        if (lVar14 != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1009ecd1c);
          (*pcVar7)();
        }
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(undefined1 *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = (ulong)bVar2 & 1;
        unaff_x20[2] = 0;
        unaff_x20[1] = 0;
        unaff_x20[4] = 0;
        unaff_x20[3] = 0;
        *(undefined2 *)(unaff_x20 + 5) = 0;
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 4;
        _swift_errorRetain(param_1);
        goto LAB_1009eccf0;
      }
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar8,uVar9,uVar10,uVar11,0,(short)uVar6,1);
      *unaff_x20 = uVar11;
      *(byte *)(unaff_x20 + 1) = bVar2 & 1;
      unaff_x20[2] = param_1;
      *(undefined1 *)((long)unaff_x20 + 0x2a) = 2;
      _swift_errorRetain(param_1);
    }
    else {
      uVar5 = *(ushort *)((long)unaff_x20 + 0x16);
      uVar1 = *(uint *)((long)unaff_x20 + 0x12);
      uVar6 = unaff_x20[2];
      FUN_1009e8ec8();
      _swift_release(puVar8);
      _swift_errorRelease((ulong)CONCAT11(bVar3,(char)uVar6) |
                          (ulong)uVar1 << 0x10 | (ulong)uVar5 << 0x30);
    }
  }
  else if (bVar2 == 3) {
    FUN_1009e8ec8();
  }
  else {
    if (bVar2 != 4) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1009ecd20);
      (*pcVar7)();
    }
    FUN_1009e8ec8();
  }
  uVar12 = 0;
  param_1 = 0;
LAB_1009eccf0:
  auVar16._8_8_ = param_1;
  auVar16._0_8_ = uVar12;
  return auVar16;
}



/* Address: 0x1009ecd20 | FUN_1009ecd20 */

undefined8 FUN_1009ecd20(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  ulong uVar5;
  undefined8 uVar6;
  long local_60;
  long lStack_58;
  long local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  char local_41;
  
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(param_4 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ecf44);
    (*pcVar1)();
  }
  FUN_1009ecf48(&local_60,param_1,param_2,param_3 & 0xffffffffffffff);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(param_4 + 0x58));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ecf48);
    (*pcVar1)();
  }
  uVar5 = (ulong)CONCAT16(local_42,CONCAT24(local_44,local_48));
  if (local_41 == '\0') {
    FUN_1009f1e24(local_60,lStack_58,local_50,uVar5,0);
    plVar4 = *(long **)(*(long *)(local_60 + 0x40) + 0x28);
    *plVar4 = lStack_58;
    plVar4[1] = local_50;
    *(undefined1 *)((long)plVar4 + 0x16) = local_42;
    *(undefined2 *)((long)plVar4 + 0x14) = local_44;
    *(undefined4 *)(plVar4 + 2) = local_48;
    _swift_continuation_throwingResume(local_60);
    uVar6 = 0;
LAB_1009ece9c:
    FUN_1009f1e3c(local_60,lStack_58,local_50,uVar5,uVar6);
    uVar6 = 0;
  }
  else {
    if (local_41 == '\x01') {
      uVar6 = 1;
      FUN_1009f1e24(local_60,lStack_58,local_50,uVar5,1);
      plVar4 = *(long **)(*(long *)(local_60 + 0x40) + 0x28);
      *plVar4 = lStack_58;
      plVar4[1] = local_50;
      *(undefined1 *)((long)plVar4 + 0x16) = local_42;
      *(undefined2 *)((long)plVar4 + 0x14) = local_44;
      *(undefined4 *)(plVar4 + 2) = local_48;
      _swift_continuation_throwingResume(local_60);
      uVar3 = 1;
    }
    else {
      if (((local_50 == 0 && lStack_58 == 0) && local_60 == 0) && (uVar5 == 0)) {
        FUN_1009f1e24(0,0,0,0,2);
        local_60 = 0;
        lStack_58 = 0;
        local_50 = 0;
        uVar5 = 0;
        uVar6 = 2;
        goto LAB_1009ece9c;
      }
      if ((uVar5 == 0 && local_60 == 1) && (local_50 == 0 && lStack_58 == 0)) {
        FUN_1009f1e24(1,0,0,0,2);
        FUN_1009f1e3c(1,0,0,0,2);
        return 1;
      }
      uVar6 = 2;
      FUN_1009f1e24(2,0,0,0,2);
      local_60 = 2;
      lStack_58 = 0;
      local_50 = 0;
      uVar5 = 0;
      uVar3 = 2;
    }
    FUN_1009f1e3c(local_60,lStack_58,local_50,uVar5,uVar3);
  }
  return uVar6;
}



/* Address: 0x1009ecf48 | FUN_1009ecf48 */

void FUN_1009ecf48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uVar11;
  byte bVar12;
  byte bVar13;
  undefined1 uVar14;
  undefined2 uVar15;
  ushort uVar16;
  ushort uVar17;
  byte bVar18;
  uint7 uVar19;
  code *pcVar20;
  ulong uVar21;
  long *plVar22;
  long lVar23;
  long lVar24;
  undefined8 *unaff_x20;
  undefined8 uVar25;
  
  plVar2 = (long *)*unaff_x20;
  lVar6 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar7 = unaff_x20[3];
  lVar23 = unaff_x20[4];
  uVar15 = *(undefined2 *)(unaff_x20 + 5);
  bVar12 = *(byte *)((long)unaff_x20 + 0x2a);
  if (2 < bVar12) {
    if ((bVar12 != 3) && (bVar12 != 4)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1009ed3d8);
      (*pcVar20)();
    }
    FUN_1009e8ec8(plVar2,lVar6);
LAB_1009ed248:
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 2;
    *(undefined8 *)((long)param_1 + 0x17) = 0;
    *(undefined1 *)((long)param_1 + 0x1f) = 2;
    return;
  }
  bVar18 = (byte)*(ushort *)(unaff_x20 + 2);
  bVar13 = *(byte *)((long)unaff_x20 + 0x11);
  uVar17 = *(ushort *)(unaff_x20 + 2);
  if (bVar12 == 0) {
    plVar22 = plVar2;
    FUN_1009e8ec8(plVar2,lVar6);
    FUN_1006883ac();
    lVar23 = *plVar22;
    _swift_retain();
    FUN_100a056c8(param_2,param_3,param_4 & 0xffffffffffffff);
    bVar18 = *(long *)(lVar23 + 0x18) < lVar6 & bVar18;
    FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                  *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
    *unaff_x20 = plVar2;
    unaff_x20[1] = lVar6;
    *(byte *)(unaff_x20 + 2) = bVar18;
    unaff_x20[3] = lVar23;
    unaff_x20[4] = 0;
    *(byte *)(unaff_x20 + 5) = bVar18;
LAB_1009ed318:
    *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
    if (bVar18 == 1) {
LAB_1009ed32c:
      *param_1 = 0;
      param_1[1] = 0;
      *(undefined8 *)((long)param_1 + 0x17) = 0;
      param_1[2] = 0;
      goto LAB_1009ed3a0;
    }
  }
  else {
    if (bVar12 != 1) {
      uVar16 = *(ushort *)((long)unaff_x20 + 0x16);
      uVar11 = *(uint *)((long)unaff_x20 + 0x12);
      FUN_1009e8ec8(plVar2,lVar6);
      _swift_release(plVar2);
      _swift_errorRelease((ulong)uVar17 | (ulong)uVar11 << 0x10 | (ulong)uVar16 << 0x30);
      goto LAB_1009ed248;
    }
    bVar13 = *(byte *)((long)unaff_x20 + 0x29);
    if (lVar23 == 0) {
      FUN_1009e8ec8(plVar2,lVar6);
      FUN_1009e8f30(plVar2,lVar6,uVar3,uVar7,0,uVar15,1);
      *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
      *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
      FUN_100a056c8(param_2,param_3,param_4 & 0xffffffffffffff);
      bVar18 = *(long *)(uVar7 + 0x18) < lVar6 & bVar18;
      FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                    *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
      *unaff_x20 = plVar2;
      unaff_x20[1] = lVar6;
      *(byte *)(unaff_x20 + 2) = bVar18;
      unaff_x20[3] = uVar7;
      unaff_x20[4] = 0;
      *(byte *)(unaff_x20 + 5) = bVar18;
      goto LAB_1009ed318;
    }
    bVar12 = *(byte *)(unaff_x20 + 5);
    if (*(long *)(uVar7 + 0x18) != 0) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1009ed3cc);
      (*pcVar20)();
    }
    FUN_1009e8ec8(plVar2,lVar6);
    FUN_1009e8f30(plVar2,lVar6,uVar3,uVar7,lVar23,uVar15,1);
    *(undefined8 *)((long)unaff_x20 + 0x22) = 0;
    *(undefined8 *)((long)unaff_x20 + 0x1a) = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 5;
    FUN_100a056c8(param_2,param_3,param_4 & 0xffffffffffffff);
    if (0 < *(long *)(uVar7 + 0x18)) {
      uVar21 = uVar7;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar21 & 1) == 0) {
        FUN_1009ed510();
      }
      lVar24 = *(long *)(uVar7 + 0x20);
      lVar1 = lVar24 + 1;
      if (SCARRY8(lVar24,1)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1009ed3d0);
        (*pcVar20)();
      }
      lVar24 = uVar7 + lVar24 * 0x18;
      uVar3 = *(undefined8 *)(lVar24 + 0x28);
      uVar8 = *(undefined8 *)(lVar24 + 0x30);
      uVar19 = *(uint7 *)(lVar24 + 0x38);
      if (*(long *)(uVar7 + 0x10) <= lVar1) {
        lVar1 = 0;
      }
      *(long *)(uVar7 + 0x20) = lVar1;
      lVar1 = *(long *)(uVar7 + 0x18) + -1;
      if (!SBORROW8(*(long *)(uVar7 + 0x18),1)) {
        *(long *)(uVar7 + 0x18) = lVar1;
        bVar18 = lVar1 < lVar6 & bVar18;
        uVar4 = *unaff_x20;
        uVar9 = unaff_x20[1];
        uVar5 = unaff_x20[2];
        uVar10 = unaff_x20[3];
        uVar25 = unaff_x20[4];
        uVar14 = *(undefined1 *)((long)unaff_x20 + 0x2a);
        uVar15 = *(undefined2 *)(unaff_x20 + 5);
        _swift_retain(uVar7);
        FUN_1009e8f30(uVar4,uVar9,uVar5,uVar10,uVar25,uVar15,uVar14);
        *unaff_x20 = plVar2;
        unaff_x20[1] = lVar6;
        *(byte *)(unaff_x20 + 2) = bVar18;
        unaff_x20[3] = uVar7;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar18;
        *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
        *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
        FUN_1009ed3d8(param_1,bVar18,lVar23,uVar3,uVar8,(ulong)uVar19);
        _swift_release(uVar7);
        return;
      }
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1009ed3d4);
      (*pcVar20)();
    }
    FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                  *(undefined2 *)(unaff_x20 + 5),*(undefined1 *)((long)unaff_x20 + 0x2a));
    *unaff_x20 = plVar2;
    unaff_x20[1] = lVar6;
    *(byte *)(unaff_x20 + 2) = bVar18 & 1;
    unaff_x20[3] = uVar7;
    unaff_x20[4] = lVar23;
    *(byte *)(unaff_x20 + 5) = bVar12 & 1;
    *(byte *)((long)unaff_x20 + 0x29) = bVar13 & 1;
    *(undefined1 *)((long)unaff_x20 + 0x2a) = 1;
    if ((bVar12 & 1) != 0) goto LAB_1009ed32c;
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = 1;
  *(undefined8 *)((long)param_1 + 0x17) = 0;
LAB_1009ed3a0:
  *(undefined1 *)((long)param_1 + 0x1f) = 2;
  return;
}



/* Address: 0x1009ed3d8 | FUN_1009ed3d8 */

void FUN_1009ed3d8(long *param_1,uint param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_5 >> 0x20);
  uVar1 = (undefined1)((ulong)param_6 >> 0x30);
  uVar2 = (undefined2)((ulong)param_6 >> 0x20);
  if ((param_2 & 1) == 0) {
    if (param_3 != 0) {
      *(int *)(param_1 + 2) = (int)param_5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)param_6;
      *(undefined2 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined1 *)((long)param_1 + 0x1e) = uVar1;
      *param_1 = param_3;
      param_1[1] = param_4;
      *(undefined1 *)((long)param_1 + 0x1f) = 1;
      return;
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 1;
    *(undefined8 *)((long)param_1 + 0x17) = 0;
  }
  else {
    if (param_3 != 0) {
      *(int *)(param_1 + 2) = (int)param_5;
      *(undefined4 *)((long)param_1 + 0x14) = uVar3;
      *(int *)(param_1 + 3) = (int)param_6;
      *(undefined2 *)((long)param_1 + 0x1c) = uVar2;
      *(undefined1 *)((long)param_1 + 0x1e) = uVar1;
      *param_1 = param_3;
      param_1[1] = param_4;
      *(undefined1 *)((long)param_1 + 0x1f) = 0;
      return;
    }
    *param_1 = 0;
    param_1[1] = 0;
    *(undefined8 *)((long)param_1 + 0x17) = 0;
    param_1[2] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x1f) = 2;
  return;
}



/* Address: 0x1009ed464 | thunk_FUN_1009ed468 */

void thunk_FUN_1009ed468(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff4280;
  FUN_1000f7830(&DAT_100ff4280,&DAT_100c8d6f0);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1009ed8b4(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28,
                  &DAT_100f08218);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009ed468 | FUN_1009ed468 */

void FUN_1009ed468(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff4280;
  FUN_1000f7830(&DAT_100ff4280,&DAT_100c8d6f0);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1009ed8b4(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28,
                  &DAT_100f08218);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009ed510 | FUN_1009ed510 */

void FUN_1009ed510(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff4290;
  FUN_1000f7830(&DAT_100ff4290,&DAT_100c8d718);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1009ed678(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009ed5b0 | FUN_1009ed5b0 */

void FUN_1009ed5b0(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  puVar2 = &DAT_100ff3d48;
  FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
  uVar6 = *(undefined8 *)(lVar4 + 0x10);
  bVar1 = *(byte *)(*(long *)(puVar2 + -8) + 0x50);
  puVar2 = &DAT_100ff4288;
  FUN_1000f7830(&DAT_100ff4288,&DAT_100c8d710);
  uVar5 = (ulong)bVar1 + 0x28 & ((ulong)bVar1 ^ 0xffffffffffffffff);
  _swift_allocObject();
  uVar8 = *(undefined8 *)(lVar4 + 0x20);
  uVar7 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x18);
  *(undefined8 *)(puVar2 + 0x10) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x18) = uVar7;
  if (0 < lVar3) {
    FUN_1009ed754(puVar2 + 0x10,puVar2 + uVar5,(undefined8 *)(lVar4 + 0x10),lVar4 + uVar5);
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x1009ed678 | FUN_1009ed678 */

void FUN_1009ed678(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed748);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed74c);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed750);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x18,param_4 + lVar5 * 0x18,lVar2,&DAT_100eeaaa8);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed754);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,&DAT_100eeaaa8);
  }
  return;
}



/* Address: 0x1009ed754 | FUN_1009ed754 */

void FUN_1009ed754(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_3[2];
  lVar1 = *param_3 - lVar9;
  if (SBORROW8(*param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009ed88c);
    (*pcVar3)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar6 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009ed890);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar2 = lVar1;
    lVar7 = param_4;
  }
  else {
    puVar4 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar7 = 0;
    lVar6 = 0;
    lVar2 = lVar8;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009ed894);
      (*pcVar3)();
    }
    lVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
    puVar4 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    _swift_arrayInitWithCopy
              (param_2 + *(long *)(*(long *)(puVar4 + -8) + 0x48) * lVar9,param_4 + lVar5 * lVar9,
               lVar2,puVar4);
  }
  if ((lVar1 < lVar8) && (lVar6 != 0)) {
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009ed898);
      (*pcVar3)();
    }
    puVar4 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    _swift_arrayInitWithCopy(param_2,lVar7,lVar6,puVar4);
  }
  return;
}



/* Address: 0x1009ed898 | FUN_1009ed898 */

void FUN_1009ed898(void)

{
  FUN_1009ed8b4();
  return;
}



/* Address: 0x1009ed8b4 | FUN_1009ed8b4 */

void FUN_1009ed8b4(undefined8 param_1,long param_2,long *param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed984);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed988);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed98c);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x18,param_4 + lVar5 * 0x18,lVar2,param_5);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009ed990);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,param_5);
  }
  return;
}



/* Address: 0x1009ed990 | FUN_1009ed990 */

void FUN_1009ed990(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2] + lVar4;
  if (SCARRY8(param_1[2],lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eda48);
    (*pcVar1)();
  }
  if (lVar4 < 0) {
    if (lVar5 < 0) {
      bVar2 = SCARRY8(lVar5,*param_1);
      lVar5 = lVar5 + *param_1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eda50);
        (*pcVar1)();
      }
    }
  }
  else {
    lVar4 = *param_1;
    bVar2 = SBORROW8(lVar5,lVar4);
    if ((lVar4 <= lVar5) && (lVar5 = lVar5 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ed9dc);
      (*pcVar1)();
    }
  }
  puVar3 = &DAT_100ff3d48;
  FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
  (**(code **)(*(long *)(puVar3 + -8) + 0x10))
            (param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar5,param_3,puVar3);
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009eda4c);
  (*pcVar1)();
}



/* Address: 0x1009eda50 | FUN_1009eda50 */

void FUN_1009eda50(void)

{
  FUN_1009ec2d8();
  return;
}



/* Address: 0x1009eda58 | FUN_1009eda58 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009eda58(void)

{
  return ZEXT816(0x100ff4040);
}



/* Address: 0x1009eda78 | FUN_1009eda78 */

void FUN_1009eda78(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3fc8,&TargetEnumDescriptor_100cc8e70);
  return;
}



/* Address: 0x1009eda8c | FUN_1009eda8c */

void FUN_1009eda8c(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff4198,&TargetStructDescriptor_100cc8f18);
  return;
}



/* Address: 0x1009edaa0 | FUN_1009edaa0 */

undefined8 FUN_1009edaa0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009eda78();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009edae4 | FUN_1009edae4 */

void FUN_1009edae4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff3d70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8e128;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e128,&DAT_100f28438);
  DAT_100ff3d70 = pTVar1;
  return;
}



/* Address: 0x1009edb24 | FUN_1009edb24 */

void FUN_1009edb24(void)

{
  FUN_1009eb19c();
  return;
}



/* Address: 0x1009edb2c | FUN_1009edb2c */

undefined8 FUN_1009edb2c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3c00;
  FUN_1000f7830(&DAT_100ff3c00,&DAT_100c8d460);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009edb7c | FUN_1009edb7c */

void FUN_1009edb7c(void)

{
  FUN_100003a00(&DAT_100ff3d78,FUN_1009edba8,&TargetProtocolConformanceDescriptor_100c8d538);
  return;
}



/* Address: 0x1009edba8 | FUN_1009edba8 */

void FUN_1009edba8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3f20,&TargetStructDescriptor_100cc8e48);
  return;
}



/* Address: 0x1009edbbc | FUN_1009edbbc */

void FUN_1009edbbc(void)

{
  FUN_100003a00(&DAT_100ff3d80,FUN_1009eda8c,&TargetProtocolConformanceDescriptor_100c8d5a0);
  return;
}



/* Address: 0x1009edbe8 | FUN_1009edbe8 */

long * FUN_1009edbe8(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  code *pcVar13;
  long lVar14;
  
  lVar5 = 0;
  FUN_1009e8f94();
  uVar3 = *(uint *)(*(long *)(lVar5 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar5);
    if ((int)plVar6 == 2) {
      lVar9 = param_2[1];
      lVar14 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar14;
      _swift_retain(lVar9);
      puVar7 = &DAT_100ff3bf0;
      FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar7 + 0x30));
      lVar9 = 0;
      FUN_1009e908c();
      lVar14 = *(long *)(lVar9 + -8);
      puVar8 = puVar2;
      (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar8 == 0) {
        puVar7 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar8 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar7);
        bVar4 = (int)puVar8 != 1;
        if (bVar4) {
          puVar10 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar1,puVar2,puVar10);
        }
        else {
          *puVar1 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar1,puVar7,!bVar4);
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
        pcVar13 = *(code **)(lVar14 + 0x38);
        _swift_retain();
        (*pcVar13)(puVar1,0,1,lVar9);
      }
      else {
        puVar7 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      uVar11 = 2;
    }
    else if ((int)plVar6 == 1) {
      puVar7 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar6 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar7);
      bVar4 = (int)plVar6 != 1;
      if (bVar4) {
        puVar10 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar10 + -8) + 0x10))(param_1,param_2,puVar10);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar7,!bVar4);
      lVar9 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
      _swift_retain();
      uVar11 = 1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      _swift_retain();
      puVar7 = &DAT_100ff3bf8;
      FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar7 + 0x30));
      lVar9 = 0;
      FUN_1009e908c();
      lVar14 = *(long *)(lVar9 + -8);
      puVar8 = puVar2;
      (**(code **)(lVar14 + 0x30))(puVar2,1,lVar9);
      if ((int)puVar8 == 0) {
        puVar7 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar8 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar7);
        bVar4 = (int)puVar8 != 1;
        if (bVar4) {
          puVar10 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar1,puVar2,puVar10);
        }
        else {
          *puVar1 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar1,puVar7,!bVar4);
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar9 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar9 + 0x14));
        pcVar13 = *(code **)(lVar14 + 0x38);
        _swift_retain();
        (*pcVar13)(puVar1,0,1,lVar9);
      }
      else {
        puVar7 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
      }
      uVar11 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar5,uVar11);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar12 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar5 + (uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009edfa0 | FUN_1009edfa0 */

void FUN_1009edfa0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  uVar2 = 0;
  FUN_1009e8f94(0);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
    _swift_release(param_1[1]);
    puVar4 = &DAT_100ff3bf0;
    puVar6 = &DAT_100c8d490;
  }
  else {
    if (iVar1 == 1) {
      puVar4 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar3 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,puVar4);
      if ((int)puVar3 == 1) {
        _swift_release(*param_1);
      }
      else {
        puVar4 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar4 + -8) + 8))(param_1,puVar4);
      }
      lVar5 = 0;
      FUN_1009e908c();
      goto LAB_1009ee114;
    }
    if (iVar1 != 0) {
      return;
    }
    _swift_release(*param_1);
    puVar4 = &DAT_100ff3bf8;
    puVar6 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar4,puVar6);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar4 + 0x30));
  lVar5 = 0;
  FUN_1009e908c();
  puVar3 = param_1;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(param_1,1,lVar5);
  if ((int)puVar3 != 0) {
    return;
  }
  puVar4 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar4);
  if ((int)puVar3 == 1) {
    _swift_release(*param_1);
  }
  else {
    puVar4 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar4 + -8) + 8))(param_1,puVar4);
  }
LAB_1009ee114:
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14)));
  return;
}



/* Address: 0x1009ee128 | FUN_1009ee128 */

undefined8 * FUN_1009ee128(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  uVar2 = 0;
  FUN_1009e8f94(0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar2);
  if ((int)puVar3 == 2) {
    uVar5 = param_2[1];
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    _swift_retain(uVar5);
    puVar6 = &DAT_100ff3bf0;
    puVar9 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar3 == 1) {
      puVar6 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar6);
      bVar1 = (int)puVar4 != 1;
      if (bVar1) {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar9 + -8) + 0x10))(param_1,param_2,puVar9);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar6,!bVar1);
      lVar8 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      _swift_retain();
      goto LAB_1009ee36c;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    _swift_retain();
    puVar6 = &DAT_100ff3bf8;
    puVar9 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar6,puVar9);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
  lVar8 = 0;
  FUN_1009e908c();
  lVar11 = *(long *)(lVar8 + -8);
  puVar7 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar8);
  if ((int)puVar7 == 0) {
    puVar6 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar6);
    bVar1 = (int)puVar7 != 1;
    if (bVar1) {
      puVar9 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar9 + -8) + 0x10))(puVar4,param_2,puVar9);
    }
    else {
      *puVar4 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar4,puVar6,!bVar1);
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
    pcVar10 = *(code **)(lVar11 + 0x38);
    _swift_retain();
    (*pcVar10)(puVar4,0,1,lVar8);
  }
  else {
    puVar6 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar4,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
LAB_1009ee36c:
  _swift_storeEnumTagMultiPayload(param_1,uVar2,puVar3);
  return param_1;
}



/* Address: 0x1009ee398 | FUN_1009ee398 */

undefined8 * FUN_1009ee398(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  long lVar12;
  undefined8 uVar13;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009e8f94);
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar3);
  if ((int)puVar4 == 2) {
    uVar6 = param_2[1];
    uVar13 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar13;
    _swift_retain(uVar6);
    puVar7 = &DAT_100ff3bf0;
    puVar10 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar4 == 1) {
      puVar7 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar7);
      bVar2 = (int)puVar5 != 1;
      if (bVar2) {
        puVar10 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar10 + -8) + 0x10))(param_1,param_2,puVar10);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar7,!bVar2);
      lVar9 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
      _swift_retain();
      goto LAB_1009ee5fc;
    }
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    *(undefined4 *)(param_1 + 2) = uVar1;
    _swift_retain();
    puVar7 = &DAT_100ff3bf8;
    puVar10 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar7,puVar10);
  puVar5 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar7 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar7 + 0x30));
  lVar9 = 0;
  FUN_1009e908c();
  lVar12 = *(long *)(lVar9 + -8);
  puVar8 = param_2;
  (**(code **)(lVar12 + 0x30))(param_2,1,lVar9);
  if ((int)puVar8 == 0) {
    puVar7 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar8 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar7);
    bVar2 = (int)puVar8 != 1;
    if (bVar2) {
      puVar10 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar10 + -8) + 0x10))(puVar5,param_2,puVar10);
    }
    else {
      *puVar5 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar5,puVar7,!bVar2);
    *(undefined8 *)((long)puVar5 + (long)*(int *)(lVar9 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x14));
    pcVar11 = *(code **)(lVar12 + 0x38);
    _swift_retain();
    (*pcVar11)(puVar5,0,1,lVar9);
  }
  else {
    puVar7 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar5,param_2,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
  }
LAB_1009ee5fc:
  _swift_storeEnumTagMultiPayload(param_1,uVar3,puVar4);
  return param_1;
}



/* Address: 0x1009ee628 | FUN_1009ee628 */

undefined8 * FUN_1009ee628(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar3);
  if ((int)puVar4 == 2) {
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    puVar6 = &DAT_100ff3bf0;
    puVar9 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar4 == 1) {
      puVar6 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar6);
      if ((int)puVar5 == 0) {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar9 + -8) + 0x20))(param_1,param_2,puVar9);
        _swift_storeEnumTagMultiPayload(param_1,puVar6,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      lVar8 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      goto LAB_1009ee848;
    }
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar6 = &DAT_100ff3bf8;
    puVar9 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar6,puVar9);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
  lVar8 = 0;
  FUN_1009e908c();
  lVar10 = *(long *)(lVar8 + -8);
  pvVar7 = pvVar2;
  (**(code **)(lVar10 + 0x30))(pvVar2,1,lVar8);
  if ((int)pvVar7 == 0) {
    puVar6 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar7 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,puVar6);
    if ((int)pvVar7 == 0) {
      puVar9 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar9 + -8) + 0x20))(pvVar1,pvVar2,puVar9);
      _swift_storeEnumTagMultiPayload(pvVar1,puVar6,0);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x14)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x14));
    (**(code **)(lVar10 + 0x38))(pvVar1,0,1,lVar8);
  }
  else {
    puVar6 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
LAB_1009ee848:
  _swift_storeEnumTagMultiPayload(param_1,uVar3,puVar4);
  return param_1;
}



/* Address: 0x1009ee874 | FUN_1009ee874 */

undefined8 * FUN_1009ee874(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  void *pvVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009e8f94);
  uVar3 = 0;
  FUN_1009e8f94(0);
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,uVar3);
  if ((int)puVar4 == 2) {
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    puVar6 = &DAT_100ff3bf0;
    puVar9 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar4 == 1) {
      puVar6 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar6);
      if ((int)puVar5 == 0) {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar9 + -8) + 0x20))(param_1,param_2,puVar9);
        _swift_storeEnumTagMultiPayload(param_1,puVar6,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      lVar8 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      goto LAB_1009eeaac;
    }
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar6 = &DAT_100ff3bf8;
    puVar9 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar6,puVar9);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
  lVar8 = 0;
  FUN_1009e908c();
  lVar10 = *(long *)(lVar8 + -8);
  pvVar7 = pvVar2;
  (**(code **)(lVar10 + 0x30))(pvVar2,1,lVar8);
  if ((int)pvVar7 == 0) {
    puVar6 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar7 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,puVar6);
    if ((int)pvVar7 == 0) {
      puVar9 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar9 + -8) + 0x20))(pvVar1,pvVar2,puVar9);
      _swift_storeEnumTagMultiPayload(pvVar1,puVar6,0);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar8 + 0x14)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar8 + 0x14));
    (**(code **)(lVar10 + 0x38))(pvVar1,0,1,lVar8);
  }
  else {
    puVar6 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
LAB_1009eeaac:
  _swift_storeEnumTagMultiPayload(param_1,uVar3,puVar4);
  return param_1;
}



/* Address: 0x1009eead8 | FUN_1009eead8 */

void FUN_1009eead8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009eeae4 | FUN_1009eeae4 */

void FUN_1009eeae4(void)

{
  FUN_1009a3340();
  return;
}



/* Address: 0x1009eeaf0 | FUN_1009eeaf0 */

void FUN_1009eeaf0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009eeafc | FUN_1009eeafc */

void FUN_1009eeafc(void)

{
  FUN_1009a3394();
  return;
}



/* Address: 0x1009eeb08 | FUN_1009eeb08 */

void FUN_1009eeb08(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100ff3de0,&TargetStructDescriptor_100cc8df8);
  return;
}



/* Address: 0x1009eeb1c | FUN_1009eeb1c */

void FUN_1009eeb1c(void)

{
  FUN_1009a33e0();
  return;
}



/* Address: 0x1009eeb28 | FUN_1009eeb28 */

long * FUN_1009eeb28(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  bool bVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  code *pcVar12;
  long lVar13;
  
  uVar3 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar3 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)plVar5 == 2) {
      lVar8 = param_2[1];
      lVar13 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar13;
      _swift_retain(lVar8);
      puVar6 = &DAT_100ff3bf0;
      FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      lVar8 = 0;
      FUN_1009e908c();
      lVar13 = *(long *)(lVar8 + -8);
      puVar7 = puVar2;
      (**(code **)(lVar13 + 0x30))(puVar2,1,lVar8);
      if ((int)puVar7 == 0) {
        puVar6 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar7 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar6);
        bVar4 = (int)puVar7 != 1;
        if (bVar4) {
          puVar9 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar9 + -8) + 0x10))(puVar1,puVar2,puVar9);
        }
        else {
          *puVar1 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar1,puVar6,!bVar4);
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x14));
        pcVar12 = *(code **)(lVar13 + 0x38);
        _swift_retain();
        (*pcVar12)(puVar1,0,1,lVar8);
      }
      else {
        puVar6 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      uVar10 = 2;
    }
    else if ((int)plVar5 == 1) {
      puVar6 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar5 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar6);
      bVar4 = (int)plVar5 != 1;
      if (bVar4) {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar9 + -8) + 0x10))(param_1,param_2,puVar9);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar6,!bVar4);
      lVar8 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      _swift_retain();
      uVar10 = 1;
    }
    else {
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      _swift_retain();
      puVar6 = &DAT_100ff3bf8;
      FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      lVar8 = 0;
      FUN_1009e908c();
      lVar13 = *(long *)(lVar8 + -8);
      puVar7 = puVar2;
      (**(code **)(lVar13 + 0x30))(puVar2,1,lVar8);
      if ((int)puVar7 == 0) {
        puVar6 = &DAT_100ff3c10;
        FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
        puVar7 = puVar2;
        _swift_getEnumCaseMultiPayload(puVar2,puVar6);
        bVar4 = (int)puVar7 != 1;
        if (bVar4) {
          puVar9 = &DAT_100ff3c18;
          FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
          (**(code **)(*(long *)(puVar9 + -8) + 0x10))(puVar1,puVar2,puVar9);
        }
        else {
          *puVar1 = *puVar2;
          _swift_retain();
        }
        _swift_storeEnumTagMultiPayload(puVar1,puVar6,!bVar4);
        *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14)) =
             *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar8 + 0x14));
        pcVar12 = *(code **)(lVar13 + 0x38);
        _swift_retain();
        (*pcVar12)(puVar1,0,1,lVar8);
      }
      else {
        puVar6 = &DAT_100ff3be8;
        FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
        _memcpy(puVar1,puVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
      }
      uVar10 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    uVar11 = (ulong)uVar3 & 0xff;
    param_1 = (long *)(lVar8 + (uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009eeed8 | FUN_1009eeed8 */

void FUN_1009eeed8(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar1 = (int)puVar2;
  if (iVar1 == 2) {
    _swift_release(param_1[1]);
    puVar3 = &DAT_100ff3bf0;
    puVar5 = &DAT_100c8d490;
  }
  else {
    if (iVar1 == 1) {
      puVar3 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar2 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,puVar3);
      if ((int)puVar2 == 1) {
        _swift_release(*param_1);
      }
      else {
        puVar3 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar3 + -8) + 8))(param_1,puVar3);
      }
      lVar4 = 0;
      FUN_1009e908c();
      goto LAB_1009ef03c;
    }
    if (iVar1 != 0) {
      return;
    }
    _swift_release(*param_1);
    puVar3 = &DAT_100ff3bf8;
    puVar5 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar3,puVar5);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30));
  lVar4 = 0;
  FUN_1009e908c();
  puVar2 = param_1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(param_1,1,lVar4);
  if ((int)puVar2 != 0) {
    return;
  }
  puVar3 = &DAT_100ff3c10;
  FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar3);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
  }
  else {
    puVar3 = &DAT_100ff3c18;
    FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
    (**(code **)(*(long *)(puVar3 + -8) + 8))(param_1,puVar3);
  }
LAB_1009ef03c:
  _swift_release(*(undefined8 *)((long)param_1 + (long)*(int *)(lVar4 + 0x14)));
  return;
}



/* Address: 0x1009ef050 | FUN_1009ef050 */

undefined8 * FUN_1009ef050(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  
  puVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar2 == 2) {
    uVar4 = param_2[1];
    uVar11 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    _swift_retain(uVar4);
    puVar5 = &DAT_100ff3bf0;
    puVar8 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar2 == 1) {
      puVar5 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar3 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar5);
      bVar1 = (int)puVar3 != 1;
      if (bVar1) {
        puVar8 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar8 + -8) + 0x10))(param_1,param_2,puVar8);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar5,!bVar1);
      lVar7 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
      _swift_retain();
      goto LAB_1009ef28c;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    _swift_retain();
    puVar5 = &DAT_100ff3bf8;
    puVar8 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar5,puVar8);
  puVar3 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
  lVar7 = 0;
  FUN_1009e908c();
  lVar10 = *(long *)(lVar7 + -8);
  puVar6 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar7);
  if ((int)puVar6 == 0) {
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar5);
    bVar1 = (int)puVar6 != 1;
    if (bVar1) {
      puVar8 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar8 + -8) + 0x10))(puVar3,param_2,puVar8);
    }
    else {
      *puVar3 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar3,puVar5,!bVar1);
    *(undefined8 *)((long)puVar3 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
    pcVar9 = *(code **)(lVar10 + 0x38);
    _swift_retain();
    (*pcVar9)(puVar3,0,1,lVar7);
  }
  else {
    puVar5 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar3,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
LAB_1009ef28c:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar2);
  return param_1;
}



/* Address: 0x1009ef2b8 | FUN_1009ef2b8 */

undefined8 * FUN_1009ef2b8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009e8f94);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 2) {
    uVar5 = param_2[1];
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    _swift_retain(uVar5);
    puVar6 = &DAT_100ff3bf0;
    puVar9 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar3 == 1) {
      puVar6 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar6);
      bVar2 = (int)puVar4 != 1;
      if (bVar2) {
        puVar9 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar9 + -8) + 0x10))(param_1,param_2,puVar9);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar6,!bVar2);
      lVar8 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      _swift_retain();
      goto LAB_1009ef514;
    }
    *param_1 = *param_2;
    *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
    *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
    uVar1 = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    *(undefined4 *)(param_1 + 2) = uVar1;
    _swift_retain();
    puVar6 = &DAT_100ff3bf8;
    puVar9 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar6,puVar9);
  puVar4 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30));
  param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
  lVar8 = 0;
  FUN_1009e908c();
  lVar11 = *(long *)(lVar8 + -8);
  puVar7 = param_2;
  (**(code **)(lVar11 + 0x30))(param_2,1,lVar8);
  if ((int)puVar7 == 0) {
    puVar6 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar6);
    bVar2 = (int)puVar7 != 1;
    if (bVar2) {
      puVar9 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar9 + -8) + 0x10))(puVar4,param_2,puVar9);
    }
    else {
      *puVar4 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(puVar4,puVar6,!bVar2);
    *(undefined8 *)((long)puVar4 + (long)*(int *)(lVar8 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
    pcVar10 = *(code **)(lVar11 + 0x38);
    _swift_retain();
    (*pcVar10)(puVar4,0,1,lVar8);
  }
  else {
    puVar6 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(puVar4,param_2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
LAB_1009ef514:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar3);
  return param_1;
}



/* Address: 0x1009ef540 | FUN_1009ef540 */

undefined8 * FUN_1009ef540(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 2) {
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    puVar5 = &DAT_100ff3bf0;
    puVar8 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar3 == 1) {
      puVar5 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar5);
      if ((int)puVar4 == 0) {
        puVar8 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar8 + -8) + 0x20))(param_1,param_2,puVar8);
        _swift_storeEnumTagMultiPayload(param_1,puVar5,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
      }
      lVar7 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
      goto LAB_1009ef758;
    }
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar5 = &DAT_100ff3bf8;
    puVar8 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar5,puVar8);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(puVar5 + 0x30));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
  lVar7 = 0;
  FUN_1009e908c();
  lVar9 = *(long *)(lVar7 + -8);
  pvVar6 = pvVar2;
  (**(code **)(lVar9 + 0x30))(pvVar2,1,lVar7);
  if ((int)pvVar6 == 0) {
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar6 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,puVar5);
    if ((int)pvVar6 == 0) {
      puVar8 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar8 + -8) + 0x20))(pvVar1,pvVar2,puVar8);
      _swift_storeEnumTagMultiPayload(pvVar1,puVar5,0);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x14));
    (**(code **)(lVar9 + 0x38))(pvVar1,0,1,lVar7);
  }
  else {
    puVar5 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
LAB_1009ef758:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar3);
  return param_1;
}



/* Address: 0x1009ef784 | FUN_1009ef784 */

undefined8 * FUN_1009ef784(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  void *pvVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  
  if (param_1 == param_2) {
    return param_1;
  }
  FUN_10005241c(param_1,FUN_1009e8f94);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar3 == 2) {
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    puVar5 = &DAT_100ff3bf0;
    puVar8 = &DAT_100c8d490;
  }
  else {
    if ((int)puVar3 == 1) {
      puVar5 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar4 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar5);
      if ((int)puVar4 == 0) {
        puVar8 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar8 + -8) + 0x20))(param_1,param_2,puVar8);
        _swift_storeEnumTagMultiPayload(param_1,puVar5,0);
      }
      else {
        _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
      }
      lVar7 = 0;
      FUN_1009e908c();
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
      goto LAB_1009ef9b4;
    }
    uVar10 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar10;
    *(undefined8 *)((long)param_1 + 0xf) = *(undefined8 *)((long)param_2 + 0xf);
    puVar5 = &DAT_100ff3bf8;
    puVar8 = &DAT_100c8d470;
  }
  FUN_1000f7830(puVar5,puVar8);
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(puVar5 + 0x30));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
  lVar7 = 0;
  FUN_1009e908c();
  lVar9 = *(long *)(lVar7 + -8);
  pvVar6 = pvVar2;
  (**(code **)(lVar9 + 0x30))(pvVar2,1,lVar7);
  if ((int)pvVar6 == 0) {
    puVar5 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar6 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,puVar5);
    if ((int)pvVar6 == 0) {
      puVar8 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar8 + -8) + 0x20))(pvVar1,pvVar2,puVar8);
      _swift_storeEnumTagMultiPayload(pvVar1,puVar5,0);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar7 + 0x14));
    (**(code **)(lVar9 + 0x38))(pvVar1,0,1,lVar7);
  }
  else {
    puVar5 = &DAT_100ff3be8;
    FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
LAB_1009ef9b4:
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar3);
  return param_1;
}



/* Address: 0x1009ef9e0 | FUN_1009ef9e0 */

void FUN_1009ef9e0(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  long local_40;
  undefined1 *local_38;
  
  lVar1 = 0x13f;
  FUN_1009efa9c();
  if (param_2 < 0x40) {
    lVar3 = *(long *)(lVar1 + -8);
    puVar2 = &DAT_100c8d660;
    _swift_getTupleTypeLayout2(auStack_68,&DAT_100c8d660,lVar3 + 0x40);
    lVar1 = 0x13f;
    local_48 = auStack_68;
    FUN_1009e908c();
    if (puVar2 < (undefined *)0x40) {
      local_40 = *(long *)(lVar1 + -8) + 0x40;
      _swift_getTupleTypeLayout2
                (auStack_88,PTR___value_witness_table_for_____>____100eae0d0 + 0x40,lVar3 + 0x40);
      local_38 = auStack_88;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_48);
    }
  }
  return;
}



/* Address: 0x1009efa9c | FUN_1009efa9c */

void FUN_1009efa9c(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff3e98 == 0) {
    lVar2 = 0xff;
    FUN_1009e908c();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100ff3e98 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1009efaf0 | FUN_1009efaf0 */

long * FUN_1009efaf0(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  lVar4 = 0;
  FUN_1009eda78();
  lVar10 = *(long *)(lVar4 + -8);
  uVar1 = *(uint *)(lVar10 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar4);
    iVar3 = (int)plVar6;
    if (iVar3 == 2) {
      lVar10 = param_2[1];
      lVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar11;
      _swift_retain(lVar10);
      uVar8 = 2;
    }
    else if (iVar3 == 1) {
      puVar5 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      plVar6 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar5);
      bVar2 = (int)plVar6 != 1;
      if (bVar2) {
        puVar7 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar7 + -8) + 0x10))(param_1,param_2,puVar7);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar5,!bVar2);
      lVar10 = 0;
      FUN_1009eda8c();
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar10 + 0x14)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar10 + 0x14));
      uVar8 = 1;
    }
    else {
      if (iVar3 != 0) {
        plVar6 = _memcpy(param_1,param_2,*(size_t *)(lVar10 + 0x40));
        return plVar6;
      }
      *param_1 = *param_2;
      param_1[1] = param_2[1];
      *(int *)(param_1 + 2) = (int)param_2[2];
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      _swift_retain();
      uVar8 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar4,uVar8);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar9 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009efc84 | FUN_1009efc84 */

void FUN_1009efc84(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  uVar2 = 0;
  FUN_1009eda78(0);
  puVar3 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,uVar2);
  iVar1 = (int)puVar3;
  if (iVar1 == 2) {
    uVar2 = param_1[1];
  }
  else {
    if (iVar1 == 1) {
      puVar4 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar3 = param_1;
      _swift_getEnumCaseMultiPayload(param_1,puVar4);
      if ((int)puVar3 != 1) {
        puVar4 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
                    /* WARNING: Could not recover jumptable at 0x0001009efd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(puVar4 + -8) + 8))(param_1,puVar4);
        return;
      }
    }
    else if (iVar1 != 0) {
      return;
    }
    uVar2 = *param_1;
  }
  _swift_release(uVar2);
  return;
}



/* Address: 0x1009efd38 | FUN_1009efd38 */

undefined8 * FUN_1009efd38(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar3 = 0;
  FUN_1009eda78();
  puVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar3);
  iVar2 = (int)puVar5;
  if (iVar2 == 2) {
    uVar8 = param_2[1];
    uVar9 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar9;
    _swift_retain(uVar8);
    uVar8 = 2;
  }
  else if (iVar2 == 1) {
    puVar4 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    puVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar4);
    bVar1 = (int)puVar5 != 1;
    if (bVar1) {
      puVar6 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar4,!bVar1);
    lVar7 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar7 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar7 + 0x14));
    uVar8 = 1;
  }
  else {
    if (iVar2 != 0) {
      puVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar3 + -8) + 0x40));
      return puVar5;
    }
    *param_1 = *param_2;
    param_1[1] = param_2[1];
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
    _swift_retain();
    uVar8 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,lVar3,uVar8);
  return param_1;
}



/* Address: 0x1009efea4 | FUN_1009efea4 */

undefined8 * FUN_1009efea4(undefined8 *param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009eda78);
    lVar4 = 0;
    FUN_1009eda78();
    puVar6 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar4);
    iVar3 = (int)puVar6;
    if (iVar3 == 2) {
      uVar9 = param_2[1];
      uVar10 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar10;
      _swift_retain(uVar9);
      uVar9 = 2;
    }
    else if (iVar3 == 1) {
      puVar5 = &DAT_100ff3c10;
      FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
      puVar6 = param_2;
      _swift_getEnumCaseMultiPayload(param_2,puVar5);
      bVar2 = (int)puVar6 != 1;
      if (bVar2) {
        puVar7 = &DAT_100ff3c18;
        FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
        (**(code **)(*(long *)(puVar7 + -8) + 0x10))(param_1,param_2,puVar7);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload(param_1,puVar5,!bVar2);
      lVar8 = 0;
      FUN_1009eda8c();
      *(undefined1 *)((long)param_1 + (long)*(int *)(lVar8 + 0x14)) =
           *(undefined1 *)((long)param_2 + (long)*(int *)(lVar8 + 0x14));
      uVar9 = 1;
    }
    else {
      if (iVar3 != 0) {
        puVar6 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar4 + -8) + 0x40));
        return puVar6;
      }
      *param_1 = *param_2;
      *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
      uVar1 = *(undefined4 *)(param_2 + 2);
      *(undefined4 *)((long)param_1 + 0x13) = *(undefined4 *)((long)param_2 + 0x13);
      *(undefined4 *)(param_1 + 2) = uVar1;
      _swift_retain();
      uVar9 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar4,uVar9);
  }
  return param_1;
}



/* Address: 0x1009f0030 | FUN_1009f0030 */

void * FUN_1009f0030(void *param_1,void *param_2)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  
  lVar1 = 0;
  FUN_1009eda78();
  pvVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,lVar1);
  if ((int)pvVar3 == 1) {
    puVar2 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    if ((int)pvVar3 == 0) {
      puVar4 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar4 + -8) + 0x20))(param_1,param_2,puVar4);
      _swift_storeEnumTagMultiPayload(param_1,puVar2,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
    }
    lVar5 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x14));
    _swift_storeEnumTagMultiPayload(param_1,lVar1,1);
    return param_1;
  }
  pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar1 + -8) + 0x40));
  return pvVar3;
}



/* Address: 0x1009f013c | FUN_1009f013c */

void * FUN_1009f013c(void *param_1,void *param_2)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_1009eda78);
    lVar1 = 0;
    FUN_1009eda78();
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,lVar1);
    if ((int)pvVar3 != 1) {
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(lVar1 + -8) + 0x40));
      return pvVar3;
    }
    puVar2 = &DAT_100ff3c10;
    FUN_1000f7830(&DAT_100ff3c10,&DAT_100c8e0d0);
    pvVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    if ((int)pvVar3 == 0) {
      puVar4 = &DAT_100ff3c18;
      FUN_1000f7830(&DAT_100ff3c18,&DAT_100c8d640);
      (**(code **)(*(long *)(puVar4 + -8) + 0x20))(param_1,param_2,puVar4);
      _swift_storeEnumTagMultiPayload(param_1,puVar2,0);
    }
    else {
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar2 + -8) + 0x40));
    }
    lVar5 = 0;
    FUN_1009eda8c();
    *(undefined1 *)((long)param_1 + (long)*(int *)(lVar5 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(lVar5 + 0x14));
    _swift_storeEnumTagMultiPayload(param_1,lVar1,1);
  }
  return param_1;
}



/* Address: 0x1009f0260 | FUN_1009f0260 */

void FUN_1009f0260(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f026c | FUN_1009f026c */

void FUN_1009f026c(void)

{
  FUN_1009a3340();
  return;
}



/* Address: 0x1009f0278 | FUN_1009f0278 */

void FUN_1009f0278(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009f0284 | FUN_1009f0284 */

void FUN_1009f0284(void)

{
  FUN_1009a3394();
  return;
}



/* Address: 0x1009f0290 | FUN_1009f0290 */

void FUN_1009f0290(void)

{
  FUN_1009a33e0();
  return;
}


