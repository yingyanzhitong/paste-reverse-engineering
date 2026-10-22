/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009f7504 | FUN_1009f7504 */

void FUN_1009f7504(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_1;
  lVar1 = 0;
  FUN_1009ea95c();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  uVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x78) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar3;
  _swift_task_switch(FUN_1009f7574,0,0);
  return;
}



/* Address: 0x1009f7574 | FUN_1009f7574 */

void FUN_1009f7574(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  CancellationError CVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long *plVar17;
  long lVar18;
  undefined8 uVar19;
  long *plVar20;
  undefined8 uVar21;
  ulong *puVar22;
  code *pcVar23;
  long unaff_x22;
  long lVar24;
  ulong uVar25;
  String SVar26;
  
  lVar18 = *(long *)(unaff_x22 + 0x68);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(lVar18 + 0x58));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8144);
    (*pcVar3)();
  }
  lVar5 = 0;
  FUN_1009fb640(*(undefined8 *)(unaff_x22 + 0x68));
  plVar20 = (long *)(param_3 >> 0x38);
  bVar2 = (byte)(param_3 >> 0x38);
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      plVar20 = *(long **)(*(long *)(unaff_x22 + 0x68) + 0x40);
      _swift_retain(plVar20);
    }
  }
  else if (bVar2 == 2) {
    plVar20 = *(long **)(*(long *)(unaff_x22 + 0x68) + 0x40);
    *(undefined8 *)(*(long *)(unaff_x22 + 0x68) + 0x40) = 0;
  }
  else {
    if ((((lVar5 != 0 || param_2 != 0) || (param_3 & 0xffffffffffffff) != 0) &&
        ((lVar5 != 1 || param_2 != 0) || (param_3 & 0xffffffffffffff) != 0)) &&
       ((lVar5 != 2 || ((param_2 != 0 || ((param_3 & 0xffffffffffffff) != 0))))))
    goto LAB_1009f7e04;
    plVar20 = (long *)0x0;
  }
  *(long **)(unaff_x22 + 0x88) = plVar20;
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar18 + 0x58));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8158);
    (*pcVar3)();
  }
  if (bVar2 < 2) {
    if (bVar2 != 0) {
      if (plVar20 == (long *)0x0) goto LAB_1009f7ff0;
      lVar18 = *(long *)(*plVar20 +
                         *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                        + 0x10);
      uVar25 = (ulong)*(uint *)(*plVar20 + 0x30) + 7 & 0x1fffffff8;
      _swift_retain(lVar5);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar20 + uVar25));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f815c);
        (*pcVar3)();
      }
      uVar21 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar19 = *(undefined8 *)(unaff_x22 + 0x70);
      FUN_1009fc104((long)plVar20 + lVar18,uVar21);
      _swift_getEnumCaseMultiPayload(uVar21,uVar19);
      iVar4 = (int)uVar21;
      if (iVar4 < 2) {
        if (iVar4 == 0) {
          uVar21 = *(undefined8 *)(unaff_x22 + 0x80);
          FUN_1009fc148((long)plVar20 + lVar18);
          puVar13 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          uVar8 = *(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xf;
          uVar6 = uVar8 & 0xfffffffffffffff0;
          _swift_task_alloc(uVar6);
          FUN_10011532c(uVar21,uVar6,&DAT_100ff3d50,&DAT_100c8d458);
          puVar13 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar24 = *(long *)(puVar13 + -8);
          uVar7 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc(uVar7);
          uVar8 = uVar8 & 0xfffffffffffffff0;
          _swift_task_alloc();
          FUN_1000f8cac(uVar6,uVar8,&DAT_100ff3d50,&DAT_100c8d458);
          uVar12 = uVar8;
          (**(code **)(lVar24 + 0x30))(uVar8,1,puVar13);
          if ((int)uVar12 == 1) {
            FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
            FUN_1000fb4c4(uVar8,&DAT_100ff3d50,&DAT_100c8d458);
            _swift_task_dealloc(uVar8);
          }
          else {
            (**(code **)(lVar24 + 0x20))(uVar7,uVar8,puVar13);
            _swift_task_dealloc(uVar8);
            Swift::CheckedContinuation::resume();
            (**(code **)(lVar24 + 8))(uVar7,puVar13);
            FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
          }
          uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
          _swift_task_dealloc(uVar7);
          _swift_storeEnumTagMultiPayload((long)plVar20 + lVar18,uVar21,2);
          _swift_task_dealloc(uVar6);
        }
        else {
          puVar22 = *(ulong **)(unaff_x22 + 0x80);
          FUN_1009fc148((long)plVar20 + lVar18);
          uVar7 = *puVar22;
          puVar13 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar24 = *(long *)(puVar13 + -8);
          bVar2 = *(byte *)(lVar24 + 0x50);
          uVar8 = *(long *)(lVar24 + 0x40) + 0xf;
          uVar12 = uVar8 & 0xfffffffffffffff0;
          _swift_task_alloc(uVar12);
          puVar14 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          uVar6 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc(uVar6);
          if (*(long *)(uVar7 + 0x18) < 1) {
            pcVar3 = *(code **)(lVar24 + 0x38);
          }
          else {
            do {
              uVar15 = uVar7;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar15 & 1) == 0) {
                FUN_1009ed5b0();
              }
              pcVar23 = *(code **)(lVar24 + 0x20);
              (*pcVar23)(uVar6,uVar7 + (bVar2 + 0x28 & (bVar2 ^ 0xffffffff)) +
                               *(long *)(lVar24 + 0x48) * *(long *)(uVar7 + 0x20),puVar13);
              lVar1 = *(long *)(uVar7 + 0x20) + 1;
              if (SCARRY8(*(long *)(uVar7 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8148);
                (*pcVar3)();
              }
              if (*(long *)(uVar7 + 0x10) <= lVar1) {
                lVar1 = 0;
              }
              *(long *)(uVar7 + 0x20) = lVar1;
              if (SBORROW8(*(long *)(uVar7 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8150);
                (*pcVar3)();
              }
              *(long *)(uVar7 + 0x18) = *(long *)(uVar7 + 0x18) + -1;
              pcVar3 = *(code **)(lVar24 + 0x38);
              (*pcVar3)(uVar6,0,1,puVar13);
              (*pcVar23)(uVar12,uVar6,puVar13);
              _swift_task_dealloc(uVar6);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar24 + 8))(uVar12,puVar13);
              _swift_task_dealloc(uVar12);
              uVar12 = uVar8 & 0xfffffffffffffff0;
              _swift_task_alloc();
              puVar14 = &DAT_100ff3d50;
              FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
              uVar6 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
              _swift_task_alloc();
            } while (0 < *(long *)(uVar7 + 0x18));
          }
          uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
          (*pcVar3)(uVar6,1,1,puVar13);
          _swift_release(uVar7);
          FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
          _swift_task_dealloc(uVar6);
          _swift_task_dealloc(uVar12);
          _swift_storeEnumTagMultiPayload((long)plVar20 + lVar18,uVar21,2);
        }
      }
      else if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f7acc);
        (*pcVar3)();
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar20 + uVar25));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8164);
        (*pcVar3)();
      }
      FUN_1009fc0bc(lVar5,param_2,param_3,1);
    }
  }
  else {
    if (bVar2 == 2) {
      if (plVar20 == (long *)0x0) {
        _swift_errorRetain(lVar5);
      }
      else {
        lVar18 = *(long *)(*plVar20 +
                           *(long *)
                            PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                          0x10);
        uVar25 = (ulong)*(uint *)(*plVar20 + 0x30) + 7 & 0x1fffffff8;
        FUN_1009fc0e0(lVar5,param_2,param_3,2);
        _swift_retain(plVar20);
        iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar20 + uVar25));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8160);
          (*pcVar3)();
        }
        uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x78);
        FUN_1009fc104((long)plVar20 + lVar18,uVar19);
        _swift_getEnumCaseMultiPayload(uVar19,uVar21);
        iVar4 = (int)uVar19;
        if (iVar4 < 2) {
          if (iVar4 == 0) {
            uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
            FUN_1009fc148((long)plVar20 + lVar18);
            puVar13 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            uVar8 = *(long *)(*(long *)(puVar13 + -8) + 0x40) + 0xf;
            uVar6 = uVar8 & 0xfffffffffffffff0;
            _swift_task_alloc(uVar6);
            FUN_10011532c(uVar21,uVar6,&DAT_100ff3d50,&DAT_100c8d458);
            puVar13 = &DAT_100ff3d48;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar24 = *(long *)(puVar13 + -8);
            uVar7 = *(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc(uVar7);
            uVar8 = uVar8 & 0xfffffffffffffff0;
            _swift_task_alloc();
            FUN_1000f8cac(uVar6,uVar8,&DAT_100ff3d50,&DAT_100c8d458);
            uVar12 = uVar8;
            (**(code **)(lVar24 + 0x30))(uVar8,1,puVar13);
            if ((int)uVar12 == 1) {
              FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
              FUN_1000fb4c4(uVar8,&DAT_100ff3d50,&DAT_100c8d458);
              _swift_task_dealloc(uVar8);
            }
            else {
              (**(code **)(lVar24 + 0x20))(uVar7,uVar8,puVar13);
              _swift_task_dealloc(uVar8);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar24 + 8))(uVar7,puVar13);
              FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
            }
            uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
            _swift_task_dealloc(uVar7);
            _swift_storeEnumTagMultiPayload((long)plVar20 + lVar18,uVar21,3);
            _swift_task_dealloc(uVar6);
          }
          else {
            puVar22 = *(ulong **)(unaff_x22 + 0x78);
            FUN_1009fc148((long)plVar20 + lVar18);
            uVar7 = *puVar22;
            puVar13 = &DAT_100ff3d48;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar24 = *(long *)(puVar13 + -8);
            bVar2 = *(byte *)(lVar24 + 0x50);
            uVar8 = *(long *)(lVar24 + 0x40) + 0xf;
            uVar12 = uVar8 & 0xfffffffffffffff0;
            _swift_task_alloc(uVar12);
            puVar14 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            uVar6 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
            _swift_task_alloc(uVar6);
            if (*(long *)(uVar7 + 0x18) < 1) {
              pcVar3 = *(code **)(lVar24 + 0x38);
            }
            else {
              do {
                uVar15 = uVar7;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar15 & 1) == 0) {
                  FUN_1009ed5b0();
                }
                pcVar23 = *(code **)(lVar24 + 0x20);
                (*pcVar23)(uVar6,uVar7 + (bVar2 + 0x28 & (bVar2 ^ 0xffffffff)) +
                                 *(long *)(lVar24 + 0x48) * *(long *)(uVar7 + 0x20),puVar13);
                lVar1 = *(long *)(uVar7 + 0x20) + 1;
                if (SCARRY8(*(long *)(uVar7 + 0x20),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f814c);
                  (*pcVar3)();
                }
                if (*(long *)(uVar7 + 0x10) <= lVar1) {
                  lVar1 = 0;
                }
                *(long *)(uVar7 + 0x20) = lVar1;
                if (SBORROW8(*(long *)(uVar7 + 0x18),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8154);
                  (*pcVar3)();
                }
                *(long *)(uVar7 + 0x18) = *(long *)(uVar7 + 0x18) + -1;
                pcVar3 = *(code **)(lVar24 + 0x38);
                (*pcVar3)(uVar6,0,1,puVar13);
                (*pcVar23)(uVar12,uVar6,puVar13);
                _swift_task_dealloc(uVar6);
                Swift::CheckedContinuation::resume();
                (**(code **)(lVar24 + 8))(uVar12,puVar13);
                _swift_task_dealloc(uVar12);
                uVar12 = uVar8 & 0xfffffffffffffff0;
                _swift_task_alloc();
                puVar14 = &DAT_100ff3d50;
                FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
                uVar6 = *(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
                _swift_task_alloc();
              } while (0 < *(long *)(uVar7 + 0x18));
            }
            uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
            (*pcVar3)(uVar6,1,1,puVar13);
            _swift_release(uVar7);
            FUN_1000fb4c4(uVar6,&DAT_100ff3d50,&DAT_100c8d458);
            _swift_task_dealloc(uVar6);
            _swift_task_dealloc(uVar12);
            _swift_storeEnumTagMultiPayload((long)plVar20 + lVar18,uVar21,3);
          }
        }
        else if (iVar4 != 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f7ad8);
          (*pcVar3)();
        }
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar20 + uVar25));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009f8168);
          (*pcVar3)();
        }
        _swift_release(plVar20);
      }
      if (lVar5 != 0) {
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        plVar17 = (long *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *plVar17 = lVar5;
        _swift_willThrow();
        _swift_release(plVar20);
        FUN_1009fc0bc(lVar5,param_2,param_3,2);
        goto LAB_1009f810c;
      }
      FUN_1009fc0bc(0,param_2,param_3,2);
    }
    else {
      if ((lVar5 == 0 && param_2 == 0) && ((param_3 & 0xffffffffffffff) == 0)) {
        CVar9 = Swift::CancellationError::typeMetadataAccessor();
        lVar18 = *(long *)(CVar9.unknown + -8);
        uVar25 = *(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar25);
        CVar10 = Swift::CancellationError::init();
        FUN_1009e8a00();
        CVar11 = CVar9;
        _swift_allocError(CVar9.unknown,CVar10.unknown,0,0);
        (**(code **)(lVar18 + 0x20))(CVar10.unknown,uVar25,CVar9.unknown);
        _swift_task_dealloc(uVar25);
        FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
        puVar16 = (undefined8 *)
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
        _swift_allocError();
        *puVar16 = CVar11.unknown;
        _swift_willThrow();
        _swift_release(plVar20);
LAB_1009f810c:
        uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
        _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
        _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001009f813c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(unaff_x22 + 8))();
        return;
      }
      if (((lVar5 != 1) || (param_2 != 0)) || ((param_3 & 0xffffffffffffff) != 0)) {
        if (((lVar5 == 2) && (param_2 == 0)) && ((param_3 & 0xffffffffffffff) == 0)) {
          *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
          *(long *)(unaff_x22 + 0x10) = unaff_x22;
          *(code **)(unaff_x22 + 0x18) = FUN_1009f8168;
          _swift_continuation_init(unaff_x22 + 0x10,1);
          FUN_1009f9a8c();
          _swift_continuation_await(unaff_x22 + 0x10);
          return;
        }
LAB_1009f7e04:
        SVar26.bridgeObject = (void *)0x2;
        SVar26.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar26,(StaticString)0x0,0xe000000000000000,0xdaeab0);
        return;
      }
      lVar5 = 0;
    }
    param_2 = 0;
    param_3 = 0;
  }
  _swift_release(plVar20);
LAB_1009f7ff0:
  uVar21 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar21);
                    /* WARNING: Could not recover jumptable at 0x0001009f8030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(lVar5,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009f8168 | FUN_1009f8168 */

void FUN_1009f8168(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0xa0) = *(undefined8 *)(lVar2 + 0x58);
    *(undefined8 *)(lVar2 + 0x98) = *(undefined8 *)(lVar2 + 0x50);
    *(undefined4 *)(lVar2 + 0xa8) = *(undefined4 *)(lVar2 + 0x60);
    *(undefined2 *)(lVar2 + 0xac) = *(undefined2 *)(lVar2 + 100);
    *(undefined1 *)(lVar2 + 0xae) = *(undefined1 *)(lVar2 + 0x66);
    pcVar1 = FUN_1009f81f8;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1009f8270;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009f81f8 | FUN_1009f81f8 */

void FUN_1009f81f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  uVar4 = *(uint7 *)(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001009f826c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1,uVar3,(ulong)uVar4);
  return;
}



/* Address: 0x1009f8270 | FUN_1009f8270 */

void FUN_1009f8270(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x88));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x78);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x80));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001009f82b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009f82bc | FUN_1009f82bc */

void FUN_1009f82bc(undefined8 param_1)

{
  FUN_1009f82d0(param_1,&DAT_100f273a8,thunk_FUN_1005e664c);
  return;
}



/* Address: 0x1009f82d0 | FUN_1009f82d0 */

void FUN_1009f82d0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined4 extraout_var;
  CancellationError CVar3;
  CancellationError CVar4;
  CancellationError CVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined1 *local_80;
  long local_78;
  undefined8 local_70;
  code *local_68;
  ulong uVar2;
  
  iVar1 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x80));
  uVar2 = CONCAT44(extraout_var,iVar1);
  if (iVar1 != 0) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1009f855c);
    (*pcVar16)();
  }
  FUN_1009fad7c();
  if (uVar2 == 1) {
    uVar11 = 0;
    lVar12 = 0;
    pcVar16 = (code *)0x0;
    uVar15 = 0;
    uVar17 = 0;
    uVar13 = 0;
  }
  else {
    uVar11 = *(ulong *)(param_1 + 0x40);
    lVar12 = *(long *)(param_1 + 0x48);
    pcVar16 = *(code **)(param_1 + 0x50);
    uVar15 = *(undefined8 *)(param_1 + 0x58);
    uVar17 = *(undefined8 *)(param_1 + 0x60);
    uVar13 = *(undefined8 *)(param_1 + 0x68);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x58) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x68) = 0;
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  iVar1 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x80));
  if (iVar1 == 0) {
    if (1 < uVar2) {
      CVar3 = Swift::CancellationError::typeMetadataAccessor();
      lVar14 = *(long *)(CVar3.unknown + -8);
      local_80 = (undefined1 *)&local_80;
      local_70 = param_3;
      local_68 = pcVar16;
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
      local_78 = param_2;
      CVar4 = Swift::CancellationError::init();
      FUN_1009e8a00();
      CVar5 = CVar3;
      _swift_allocError(CVar3.unknown,CVar4.unknown,0,0);
      (**(code **)(lVar14 + 0x20))
                (CVar4.unknown,(long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0),
                 CVar3.unknown);
      puVar6 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar10 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar7 = puVar6;
      puVar9 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      param_2 = local_78;
      *puVar9 = CVar5.unknown;
      _swift_allocError(puVar6,puVar10,0,0);
      pcVar16 = local_68;
      param_3 = local_70;
      *puVar10 = puVar7;
      _swift_continuation_throwingResumeWithError(uVar2,puVar6);
    }
    if (uVar11 != 0) {
      uVar2 = uVar11;
      _swift_getObjectType();
      uVar8 = uVar2;
      (**(code **)(lVar12 + 0x10))();
      if ((uVar8 & 1) == 0) {
        _swift_allocObject(param_2,0x40,7);
        *(ulong *)(param_2 + 0x10) = uVar11;
        *(long *)(param_2 + 0x18) = lVar12;
        *(code **)(param_2 + 0x20) = pcVar16;
        *(undefined8 *)(param_2 + 0x28) = uVar15;
        *(undefined8 *)(param_2 + 0x30) = uVar17;
        *(undefined8 *)(param_2 + 0x38) = uVar13;
        local_68 = *(code **)(lVar12 + 0x18);
        _swift_unknownObjectRetain(uVar11);
        _swift_retain(uVar15);
        _swift_retain(uVar13);
        (*local_68)(param_3,param_2,uVar2,lVar12);
        FUN_1009fbde8(uVar11,lVar12,pcVar16,uVar15,uVar17,uVar13);
        _swift_release(param_2);
      }
      else {
        (*pcVar16)();
        FUN_1009fbde8(uVar11,lVar12,pcVar16,uVar15,uVar17,uVar13);
      }
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1009f8560);
  (*pcVar16)();
}



/* Address: 0x1009f8560 | FUN_1009f8560 */

void FUN_1009f8560(long param_1)

{
  byte bVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined4 extraout_var;
  CancellationError CVar5;
  CancellationError CVar6;
  CancellationError CVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  ulong uVar14;
  code *pcVar15;
  long lVar16;
  ulong *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long *plVar21;
  ulong local_90 [2];
  long *local_80;
  long lStack_78;
  ulong *local_70;
  ulong local_68;
  
  lVar4 = 0;
  FUN_1009ea95c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar17 = (ulong *)((long)local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x58));
  uVar14 = CONCAT44(extraout_var,iVar3);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b58);
    (*pcVar2)();
  }
  FUN_1009fad7c();
  if (uVar14 == 1) {
    plVar21 = (long *)0x0;
  }
  else {
    plVar21 = *(long **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x58));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b5c);
    (*pcVar2)();
  }
  if (1 < uVar14) {
    CVar5 = Swift::CancellationError::typeMetadataAccessor();
    lVar16 = *(long *)(CVar5.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
    CVar6 = Swift::CancellationError::init();
    FUN_1009e8a00();
    CVar7 = CVar5;
    _swift_allocError(CVar5.unknown,CVar6.unknown,0,0);
    (**(code **)(lVar16 + 0x20))
              (CVar6.unknown,(long)puVar17 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),
               CVar5.unknown);
    puVar8 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar13 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar9 = puVar8;
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar12 = CVar7.unknown;
    _swift_allocError(puVar8,puVar13,0,0);
    *puVar13 = puVar9;
    _swift_continuation_throwingResumeWithError(uVar14,puVar8);
  }
  if (plVar21 != (long *)0x0) {
    lVar16 = *(long *)(*plVar21 +
                       *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                      0x10);
    uVar14 = (ulong)*(uint *)(*plVar21 + 0x30) + 7 & 0x1fffffff8;
    iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar21 + uVar14));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b60);
      (*pcVar2)();
    }
    FUN_1009fc104((long)plVar21 + lVar16,puVar17);
    puVar10 = puVar17;
    _swift_getEnumCaseMultiPayload(puVar17,lVar4);
    iVar3 = (int)puVar10;
    if (iVar3 < 2) {
      local_90[0] = uVar14;
      local_90[1] = lVar16;
      local_80 = plVar21;
      lStack_78 = lVar4;
      if (iVar3 == 0) {
        FUN_1009fc148((long)plVar21 + lVar16);
        puVar8 = &DAT_100ff3d50;
        FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
        lVar4 = *(long *)(*(long *)(puVar8 + -8) + 0x40);
        local_70 = puVar17;
        (*(code *)PTR____chkstk_darwin_100ea82c0)();
        uVar14 = lVar4 + 0xfU & 0xfffffffffffffff0;
        lVar16 = (long)puVar17 - uVar14;
        FUN_10011532c(puVar17,lVar16,&DAT_100ff3d50,&DAT_100c8d458);
        puVar8 = &DAT_100ff3d48;
        FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
        lVar20 = *(long *)(puVar8 + -8);
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar18 = lVar16 - extraout_x8_01;
        (*(code *)PTR____chkstk_darwin_100ea82c0)();
        lVar19 = lVar18 - uVar14;
        FUN_1000f8cac(lVar16,lVar19,&DAT_100ff3d50,&DAT_100c8d458);
        lVar4 = lVar19;
        (**(code **)(lVar20 + 0x30))(lVar19,1,puVar8);
        if ((int)lVar4 == 1) {
          FUN_1000fb4c4(lVar16,&DAT_100ff3d50,&DAT_100c8d458);
          FUN_1000fb4c4(lVar19,&DAT_100ff3d50,&DAT_100c8d458);
        }
        else {
          (**(code **)(lVar20 + 0x20))(lVar18,lVar19,puVar8);
          Swift::CheckedContinuation::resume();
          (**(code **)(lVar20 + 8))(lVar18,puVar8);
          FUN_1000fb4c4(lVar16,&DAT_100ff3d50,&DAT_100c8d458);
        }
        plVar21 = local_80;
        uVar14 = local_90[0];
        _swift_storeEnumTagMultiPayload((long)local_80 + local_90[1],lStack_78,3);
      }
      else {
        FUN_1009fc148((long)plVar21 + lVar16);
        uVar14 = *puVar17;
        puVar8 = &DAT_100ff3d48;
        local_68 = uVar14;
        FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
        lVar4 = *(long *)(puVar8 + -8);
        bVar1 = *(byte *)(lVar4 + 0x50);
        lVar16 = *(long *)(lVar4 + 0x40);
        (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar16 + 0xfU & 0xfffffffffffffff0);
        lVar18 = (long)puVar17 - extraout_x8_02;
        puVar9 = &DAT_100ff3d50;
        FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
        (*(code *)PTR____chkstk_darwin_100ea82c0)
                  (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        lVar19 = lVar18 - extraout_x8_03;
        if (*(long *)(uVar14 + 0x18) < 1) {
          pcVar2 = *(code **)(lVar4 + 0x38);
        }
        else {
          local_70 = (ulong *)(ulong)(bVar1 + 0x28 & (bVar1 ^ 0xffffffff));
          do {
            uVar11 = uVar14;
            _swift_isUniquelyReferenced_nonNull_native();
            if ((uVar11 & 1) == 0) {
              FUN_1009ed5b0();
              uVar14 = local_68;
            }
            pcVar15 = *(code **)(lVar4 + 0x20);
            (*pcVar15)(lVar19,(long)local_70 +
                              *(long *)(lVar4 + 0x48) * *(long *)(uVar14 + 0x20) + uVar14,puVar8);
            lVar20 = *(long *)(uVar14 + 0x20) + 1;
            if (SCARRY8(*(long *)(uVar14 + 0x20),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b50);
              (*pcVar2)();
            }
            if (*(long *)(uVar14 + 0x10) <= lVar20) {
              lVar20 = 0;
            }
            *(long *)(uVar14 + 0x20) = lVar20;
            if (SBORROW8(*(long *)(uVar14 + 0x18),1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b54);
              (*pcVar2)();
            }
            *(long *)(uVar14 + 0x18) = *(long *)(uVar14 + 0x18) + -1;
            pcVar2 = *(code **)(lVar4 + 0x38);
            (*pcVar2)(lVar19,0,1,puVar8);
            (*pcVar15)(lVar18,lVar19,puVar8);
            Swift::CheckedContinuation::resume();
            (**(code **)(lVar4 + 8))(lVar18,puVar8);
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            lVar18 = (long)puVar17 - (lVar16 + 0xfU & 0xfffffffffffffff0);
            puVar9 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            (*(code *)PTR____chkstk_darwin_100ea82c0)
                      (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar19 = lVar18 - extraout_x8_04;
          } while (0 < *(long *)(uVar14 + 0x18));
        }
        uVar11 = local_90[1];
        (*pcVar2)(lVar19,1,1,puVar8);
        _swift_release(uVar14);
        FUN_1000fb4c4(lVar19,&DAT_100ff3d50,&DAT_100c8d458);
        plVar21 = local_80;
        _swift_storeEnumTagMultiPayload((long)local_80 + uVar11,lStack_78,3);
        uVar14 = local_90[0];
      }
    }
    else if (iVar3 != 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8874);
      (*pcVar2)();
    }
    iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar21 + uVar14));
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009f8b64);
      (*pcVar2)();
    }
    _swift_release(plVar21);
  }
  return;
}



/* Address: 0x1009f8b64 | FUN_1009f8b64 */

void FUN_1009f8b64(code *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  String SVar21;
  undefined1 auStack_d0 [8];
  code *local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  long local_98;
  uint local_8c;
  code *local_88;
  ulong local_80;
  code *local_78;
  undefined8 local_70;
  code *local_68;
  
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f92b0);
    (*pcVar5)();
  }
  pcVar5 = thunk_FUN_1009ed468;
  local_a0 = param_1;
  FUN_1009faffc();
  lVar2 = *(long *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  pcVar3 = *(code **)(param_2 + 0x40);
  lVar18 = *(long *)(param_2 + 0x48);
  local_78 = *(code **)(param_2 + 0x50);
  local_70 = *(undefined8 *)(param_2 + 0x58);
  local_68 = *(code **)(param_2 + 0x60);
  pcVar16 = *(code **)(param_2 + 0x68);
  local_8c = param_4;
  local_88 = pcVar5;
  local_80 = param_3;
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = &DAT_100f274c0;
    _swift_allocObject(&DAT_100f274c0,0x20,7);
    *(long *)(puVar13 + 0x10) = lVar2;
    *(undefined8 *)(puVar13 + 0x18) = uVar4;
    pcVar5 = thunk_FUN_1000386a0;
  }
  FUN_1009fbe70(pcVar3,lVar18,local_78,local_70,local_68,pcVar16);
  FUN_100011128(lVar2,uVar4);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f92b4);
    (*pcVar5)();
  }
  local_98 = lVar18;
  if (lVar2 == 0) {
    local_a8 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = &DAT_100f27498;
    _swift_allocObject(&DAT_100f27498,0x20,7);
    *(code **)(puVar14 + 0x10) = pcVar5;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    local_a8 = thunk_FUN_1000386a0;
  }
  uVar15 = local_80;
  pcVar5 = local_88;
  uVar17 = local_8c;
  uVar1 = local_8c & 0xff;
  if (uVar1 < 2) {
    if ((uVar1 == 0) || (pcVar3 == (code *)0x0)) {
      FUN_1008758fc(param_1,local_88,local_80,local_80 >> 0x38);
    }
    else {
      pcVar19 = pcVar3;
      _swift_getObjectType();
      lVar18 = local_98;
      local_b8 = *(code **)(local_98 + 0x10);
      FUN_1009fbe70(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
      local_b0 = param_1;
      FUN_1009fbe48(param_1,pcVar5,uVar15,1);
      local_c0 = pcVar19;
      (*local_b8)(pcVar19,lVar18);
      pcVar5 = local_68;
      if (((ulong)pcVar19 & 1) == 0) {
        puVar13 = &DAT_100f27470;
        _swift_allocObject(&DAT_100f27470,0x40,7);
        pcVar19 = local_68;
        uVar4 = local_70;
        pcVar5 = local_78;
        *(code **)(puVar13 + 0x10) = pcVar3;
        *(long *)(puVar13 + 0x18) = lVar18;
        *(code **)(puVar13 + 0x20) = local_78;
        *(undefined8 *)(puVar13 + 0x28) = local_70;
        *(code **)(puVar13 + 0x30) = local_68;
        *(code **)(puVar13 + 0x38) = pcVar16;
        local_b8 = *(code **)(lVar18 + 0x18);
        _swift_unknownObjectRetain(pcVar3);
        _swift_retain(uVar4);
        _swift_retain(pcVar16);
        (*local_b8)(thunk_FUN_1005e666c,puVar13,local_c0,lVar18);
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,pcVar19,pcVar16);
        uVar17 = local_8c;
        _swift_release(puVar13);
        pcVar5 = local_88;
        uVar15 = local_80;
        param_1 = local_b0;
      }
      else {
        (*local_68)();
        FUN_1009fbde8(pcVar3,lVar18,local_78,local_70,pcVar5,pcVar16);
        pcVar5 = local_88;
        uVar15 = local_80;
        param_1 = local_b0;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(local_a0 + 0x40) + 0x28);
    *puVar12 = param_1;
    puVar12[1] = pcVar5;
    puVar12[2] = uVar15;
    _swift_continuation_throwingResume();
    goto joined_r0x0001009f8fe8;
  }
  if (uVar1 == 2) {
    if (pcVar3 == (code *)0x0) {
      _swift_errorRetain(param_1);
    }
    else {
      pcVar19 = pcVar3;
      _swift_getObjectType();
      lVar18 = local_98;
      pcVar20 = *(code **)(local_98 + 0x10);
      local_b8 = pcVar16;
      FUN_1009fbe70(pcVar3,local_98,local_78,local_70,local_68);
      local_b0 = param_1;
      FUN_1009fbe48(param_1,pcVar5,uVar15,2);
      local_c0 = pcVar19;
      (*pcVar20)(pcVar19,lVar18);
      uVar4 = local_70;
      pcVar5 = local_78;
      if (((ulong)pcVar19 & 1) == 0) {
        puVar13 = &DAT_100f27448;
        _swift_allocObject(&DAT_100f27448,0x40,7);
        pcVar19 = local_68;
        uVar4 = local_70;
        pcVar5 = local_78;
        pcVar16 = local_b8;
        *(code **)(puVar13 + 0x10) = pcVar3;
        *(long *)(puVar13 + 0x18) = lVar18;
        *(code **)(puVar13 + 0x20) = local_78;
        *(undefined8 *)(puVar13 + 0x28) = local_70;
        *(code **)(puVar13 + 0x30) = local_68;
        *(code **)(puVar13 + 0x38) = local_b8;
        local_c8 = *(code **)(lVar18 + 0x18);
        _swift_unknownObjectRetain(pcVar3);
        _swift_retain(uVar4);
        _swift_retain(pcVar16);
        (*local_c8)(thunk_FUN_1005e664c,puVar13,local_c0,lVar18);
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,pcVar19,pcVar16);
        uVar17 = local_8c;
        _swift_release(puVar13);
        param_1 = local_b0;
        pcVar5 = local_88;
        uVar15 = local_80;
      }
      else {
        (*local_78)();
        pcVar16 = local_b8;
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,local_68,local_b8);
        param_1 = local_b0;
        pcVar5 = local_88;
        uVar15 = local_80;
      }
    }
    if (param_1 == (code *)0x0) {
LAB_1009f914c:
      puVar12 = *(undefined8 **)(*(long *)(local_a0 + 0x40) + 0x28);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0xff00000000000000;
      _swift_continuation_throwingResume();
      goto joined_r0x0001009f8fe8;
    }
    puVar13 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar10 = puVar13;
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    pcVar5 = local_88;
    uVar17 = local_8c;
    *puVar11 = param_1;
    _swift_allocError(puVar13,puVar12,0,0);
    *puVar12 = puVar10;
    uVar15 = local_80;
  }
  else {
    if ((local_80 != 0 || local_88 != (code *)0x0) || param_1 != (code *)0x0) {
      if ((param_1 != (code *)&DAT_00000001) || (local_80 != 0 || local_88 != (code *)0x0)) {
        if ((param_1 == (code *)0x2) && (local_80 == 0 && local_88 == (code *)0x0)) {
          SVar21.bridgeObject = (void *)0x2;
          SVar21.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar21,(StaticString)0x0,0xe000000000000000,0xdaeab0)
          ;
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f92f8);
          (*pcVar5)();
        }
        if (((param_1 == (code *)0x3) && (local_80 == 0 && local_88 == (code *)0x0)) &&
           (pcVar3 != (code *)0x0)) {
          pcVar19 = pcVar3;
          _swift_getObjectType();
          lVar18 = local_98;
          local_a0 = *(code **)(local_98 + 0x10);
          _swift_unknownObjectRetain(pcVar3);
          uVar4 = local_70;
          _swift_retain(local_70);
          _swift_retain(pcVar16);
          local_b0 = pcVar19;
          (*local_a0)(pcVar19,lVar18);
          pcVar5 = local_68;
          if (((ulong)pcVar19 & 1) == 0) {
            puVar13 = &DAT_100f27420;
            _swift_allocObject(&DAT_100f27420,0x40,7);
            pcVar5 = local_68;
            *(code **)(puVar13 + 0x10) = pcVar3;
            *(long *)(puVar13 + 0x18) = lVar18;
            *(code **)(puVar13 + 0x20) = local_78;
            *(undefined8 *)(puVar13 + 0x28) = uVar4;
            *(code **)(puVar13 + 0x30) = local_68;
            *(code **)(puVar13 + 0x38) = pcVar16;
            pcVar19 = *(code **)(lVar18 + 0x18);
            _swift_unknownObjectRetain(pcVar3);
            _swift_retain(uVar4);
            _swift_retain(pcVar16);
            (*pcVar19)(thunk_FUN_1005e666c,puVar13,local_b0,lVar18);
            uVar17 = local_8c;
            FUN_1009fbde8(pcVar3,lVar18,local_78,local_70,pcVar5,pcVar16);
            _swift_release(puVar13);
            pcVar5 = local_88;
            uVar15 = local_80;
          }
          else {
            (*local_68)();
            FUN_1009fbde8(pcVar3,lVar18,local_78,uVar4,pcVar5,pcVar16);
            pcVar5 = local_88;
            uVar15 = local_80;
          }
        }
        goto joined_r0x0001009f8fe8;
      }
      goto LAB_1009f914c;
    }
    CVar7 = Swift::CancellationError::typeMetadataAccessor();
    lVar18 = *(long *)(CVar7.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
    CVar8 = Swift::CancellationError::init();
    FUN_1009e8a00();
    CVar9 = CVar7;
    _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
    (**(code **)(lVar18 + 0x20))
              (CVar8.unknown,auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar7.unknown);
    puVar13 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar10 = puVar13;
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    uVar15 = local_80;
    pcVar5 = local_88;
    *puVar11 = CVar9.unknown;
    _swift_allocError(puVar13,puVar12,0,0);
    *puVar12 = puVar10;
    uVar17 = local_8c;
  }
  _swift_continuation_throwingResumeWithError(local_a0,puVar13);
joined_r0x0001009f8fe8:
  if (lVar2 == 0) {
    FUN_1009fbde8(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
    FUN_1009fbe20(param_1,pcVar5,uVar15,uVar17);
  }
  else {
    _swift_retain(puVar14);
    pcVar19 = local_a8;
    (*local_a8)();
    FUN_1009fbde8(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
    FUN_1009fbe20(param_1,pcVar5,uVar15,uVar17);
    FUN_100004550(pcVar19,puVar14);
    FUN_100004550(pcVar19,puVar14);
  }
  return;
}



/* Address: 0x1009f92f8 | FUN_1009f92f8 */

void FUN_1009f92f8(code *param_1,long param_2,ulong param_3,uint param_4)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  code *pcVar5;
  int iVar6;
  CancellationError CVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  code *pcVar16;
  uint uVar17;
  long lVar18;
  code *pcVar19;
  code *pcVar20;
  String SVar21;
  undefined1 auStack_d0 [8];
  code *local_c8;
  code *local_c0;
  code *local_b8;
  code *local_b0;
  code *local_a8;
  code *local_a0;
  long local_98;
  uint local_8c;
  code *local_88;
  ulong local_80;
  code *local_78;
  undefined8 local_70;
  code *local_68;
  
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x80));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f9a44);
    (*pcVar5)();
  }
  pcVar5 = thunk_FUN_1009ed468;
  local_a0 = param_1;
  FUN_1009faffc();
  lVar2 = *(long *)(param_2 + 0x70);
  uVar4 = *(undefined8 *)(param_2 + 0x78);
  pcVar3 = *(code **)(param_2 + 0x40);
  lVar18 = *(long *)(param_2 + 0x48);
  local_78 = *(code **)(param_2 + 0x50);
  local_70 = *(undefined8 *)(param_2 + 0x58);
  local_68 = *(code **)(param_2 + 0x60);
  pcVar16 = *(code **)(param_2 + 0x68);
  local_8c = param_4;
  local_88 = pcVar5;
  local_80 = param_3;
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = &DAT_100f27380;
    _swift_allocObject(&DAT_100f27380,0x20,7);
    *(long *)(puVar13 + 0x10) = lVar2;
    *(undefined8 *)(puVar13 + 0x18) = uVar4;
    pcVar5 = FUN_1000386a0;
  }
  FUN_1009fbe70(pcVar3,lVar18,local_78,local_70,local_68,pcVar16);
  FUN_100011128(lVar2,uVar4);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x80));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f9a48);
    (*pcVar5)();
  }
  local_98 = lVar18;
  if (lVar2 == 0) {
    local_a8 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = &DAT_100f27358;
    _swift_allocObject(&DAT_100f27358,0x20,7);
    *(code **)(puVar14 + 0x10) = pcVar5;
    *(undefined **)(puVar14 + 0x18) = puVar13;
    local_a8 = FUN_1000386a0;
  }
  uVar15 = local_80;
  pcVar5 = local_88;
  uVar17 = local_8c;
  uVar1 = local_8c & 0xff;
  if (uVar1 < 2) {
    if ((uVar1 == 0) || (pcVar3 == (code *)0x0)) {
      FUN_1008758fc(param_1,local_88,local_80,local_80 >> 0x38);
    }
    else {
      pcVar19 = pcVar3;
      _swift_getObjectType();
      lVar18 = local_98;
      local_b8 = *(code **)(local_98 + 0x10);
      FUN_1009fbe70(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
      local_b0 = param_1;
      FUN_1009fbe48(param_1,pcVar5,uVar15,1);
      local_c0 = pcVar19;
      (*local_b8)(pcVar19,lVar18);
      pcVar5 = local_68;
      if (((ulong)pcVar19 & 1) == 0) {
        puVar13 = &DAT_100f27330;
        _swift_allocObject(&DAT_100f27330,0x40,7);
        pcVar19 = local_68;
        uVar4 = local_70;
        pcVar5 = local_78;
        *(code **)(puVar13 + 0x10) = pcVar3;
        *(long *)(puVar13 + 0x18) = lVar18;
        *(code **)(puVar13 + 0x20) = local_78;
        *(undefined8 *)(puVar13 + 0x28) = local_70;
        *(code **)(puVar13 + 0x30) = local_68;
        *(code **)(puVar13 + 0x38) = pcVar16;
        local_b8 = *(code **)(lVar18 + 0x18);
        _swift_unknownObjectRetain(pcVar3);
        _swift_retain(uVar4);
        _swift_retain(pcVar16);
        (*local_b8)(thunk_FUN_1005e666c,puVar13,local_c0,lVar18);
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,pcVar19,pcVar16);
        uVar17 = local_8c;
        _swift_release(puVar13);
        pcVar5 = local_88;
        uVar15 = local_80;
        param_1 = local_b0;
      }
      else {
        (*local_68)();
        FUN_1009fbde8(pcVar3,lVar18,local_78,local_70,pcVar5,pcVar16);
        pcVar5 = local_88;
        uVar15 = local_80;
        param_1 = local_b0;
      }
    }
    puVar12 = *(undefined8 **)(*(long *)(local_a0 + 0x40) + 0x28);
    *puVar12 = param_1;
    puVar12[1] = pcVar5;
    puVar12[2] = uVar15;
    _swift_continuation_throwingResume();
    goto joined_r0x0001009f977c;
  }
  if (uVar1 == 2) {
    if (pcVar3 == (code *)0x0) {
      _swift_errorRetain(param_1);
    }
    else {
      pcVar19 = pcVar3;
      _swift_getObjectType();
      lVar18 = local_98;
      pcVar20 = *(code **)(local_98 + 0x10);
      local_b8 = pcVar16;
      FUN_1009fbe70(pcVar3,local_98,local_78,local_70,local_68);
      local_b0 = param_1;
      FUN_1009fbe48(param_1,pcVar5,uVar15,2);
      local_c0 = pcVar19;
      (*pcVar20)(pcVar19,lVar18);
      uVar4 = local_70;
      pcVar5 = local_78;
      if (((ulong)pcVar19 & 1) == 0) {
        puVar13 = &DAT_100f27308;
        _swift_allocObject(&DAT_100f27308,0x40,7);
        pcVar19 = local_68;
        uVar4 = local_70;
        pcVar5 = local_78;
        pcVar16 = local_b8;
        *(code **)(puVar13 + 0x10) = pcVar3;
        *(long *)(puVar13 + 0x18) = lVar18;
        *(code **)(puVar13 + 0x20) = local_78;
        *(undefined8 *)(puVar13 + 0x28) = local_70;
        *(code **)(puVar13 + 0x30) = local_68;
        *(code **)(puVar13 + 0x38) = local_b8;
        local_c8 = *(code **)(lVar18 + 0x18);
        _swift_unknownObjectRetain(pcVar3);
        _swift_retain(uVar4);
        _swift_retain(pcVar16);
        (*local_c8)(thunk_FUN_1005e664c,puVar13,local_c0,lVar18);
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,pcVar19,pcVar16);
        uVar17 = local_8c;
        _swift_release(puVar13);
        param_1 = local_b0;
        pcVar5 = local_88;
        uVar15 = local_80;
      }
      else {
        (*local_78)();
        pcVar16 = local_b8;
        FUN_1009fbde8(pcVar3,lVar18,pcVar5,uVar4,local_68,local_b8);
        param_1 = local_b0;
        pcVar5 = local_88;
        uVar15 = local_80;
      }
    }
    if (param_1 == (code *)0x0) {
LAB_1009f98e0:
      puVar12 = *(undefined8 **)(*(long *)(local_a0 + 0x40) + 0x28);
      *puVar12 = 0;
      puVar12[1] = 0;
      puVar12[2] = 0xff00000000000000;
      _swift_continuation_throwingResume();
      goto joined_r0x0001009f977c;
    }
    puVar13 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar10 = puVar13;
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    pcVar5 = local_88;
    uVar17 = local_8c;
    *puVar11 = param_1;
    _swift_allocError(puVar13,puVar12,0,0);
    *puVar12 = puVar10;
    uVar15 = local_80;
  }
  else {
    if ((local_80 != 0 || local_88 != (code *)0x0) || param_1 != (code *)0x0) {
      if ((param_1 != (code *)&DAT_00000001) || (local_80 != 0 || local_88 != (code *)0x0)) {
        if ((param_1 == (code *)0x2) && (local_80 == 0 && local_88 == (code *)0x0)) {
          SVar21.bridgeObject = (void *)0x2;
          SVar21.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar21,(StaticString)0x0,0xe000000000000000,0xdaeab0)
          ;
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009f9a8c);
          (*pcVar5)();
        }
        if (((param_1 == (code *)0x3) && (local_80 == 0 && local_88 == (code *)0x0)) &&
           (pcVar3 != (code *)0x0)) {
          pcVar19 = pcVar3;
          _swift_getObjectType();
          lVar18 = local_98;
          local_a0 = *(code **)(local_98 + 0x10);
          _swift_unknownObjectRetain(pcVar3);
          uVar4 = local_70;
          _swift_retain(local_70);
          _swift_retain(pcVar16);
          local_b0 = pcVar19;
          (*local_a0)(pcVar19,lVar18);
          pcVar5 = local_68;
          if (((ulong)pcVar19 & 1) == 0) {
            puVar13 = &DAT_100f272e0;
            _swift_allocObject(&DAT_100f272e0,0x40,7);
            pcVar5 = local_68;
            *(code **)(puVar13 + 0x10) = pcVar3;
            *(long *)(puVar13 + 0x18) = lVar18;
            *(code **)(puVar13 + 0x20) = local_78;
            *(undefined8 *)(puVar13 + 0x28) = uVar4;
            *(code **)(puVar13 + 0x30) = local_68;
            *(code **)(puVar13 + 0x38) = pcVar16;
            pcVar19 = *(code **)(lVar18 + 0x18);
            _swift_unknownObjectRetain(pcVar3);
            _swift_retain(uVar4);
            _swift_retain(pcVar16);
            (*pcVar19)(thunk_FUN_1005e666c,puVar13,local_b0,lVar18);
            uVar17 = local_8c;
            FUN_1009fbde8(pcVar3,lVar18,local_78,local_70,pcVar5,pcVar16);
            _swift_release(puVar13);
            pcVar5 = local_88;
            uVar15 = local_80;
          }
          else {
            (*local_68)();
            FUN_1009fbde8(pcVar3,lVar18,local_78,uVar4,pcVar5,pcVar16);
            pcVar5 = local_88;
            uVar15 = local_80;
          }
        }
        goto joined_r0x0001009f977c;
      }
      goto LAB_1009f98e0;
    }
    CVar7 = Swift::CancellationError::typeMetadataAccessor();
    lVar18 = *(long *)(CVar7.unknown + -8);
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
    CVar8 = Swift::CancellationError::init();
    FUN_1009e8a00();
    CVar9 = CVar7;
    _swift_allocError(CVar7.unknown,CVar8.unknown,0,0);
    (**(code **)(lVar18 + 0x20))
              (CVar8.unknown,auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar7.unknown);
    puVar13 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar10 = puVar13;
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    uVar15 = local_80;
    pcVar5 = local_88;
    *puVar11 = CVar9.unknown;
    _swift_allocError(puVar13,puVar12,0,0);
    *puVar12 = puVar10;
    uVar17 = local_8c;
  }
  _swift_continuation_throwingResumeWithError(local_a0,puVar13);
joined_r0x0001009f977c:
  if (lVar2 == 0) {
    FUN_1009fbde8(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
    FUN_1009fbe20(param_1,pcVar5,uVar15,uVar17);
  }
  else {
    _swift_retain(puVar14);
    pcVar19 = local_a8;
    (*local_a8)();
    FUN_1009fbde8(pcVar3,local_98,local_78,local_70,local_68,pcVar16);
    FUN_1009fbe20(param_1,pcVar5,uVar15,uVar17);
    FUN_100004550(pcVar19,puVar14);
    FUN_100004550(pcVar19,puVar14);
  }
  return;
}



/* Address: 0x1009f9a8c | FUN_1009f9a8c */

/* WARNING: Type propagation algorithm not settling */

void FUN_1009f9a8c(ulong *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  ulong *puVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  undefined8 *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long extraout_x8_07;
  long extraout_x8_08;
  long extraout_x8_09;
  long extraout_x8_10;
  long extraout_x8_11;
  long extraout_x8_12;
  long extraout_x12;
  long extraout_x12_00;
  ulong uVar13;
  undefined *puVar14;
  ulong uVar15;
  code *pcVar16;
  ulong *puVar17;
  long *plVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  ulong uVar24;
  String SVar25;
  ulong auStack_e0 [2];
  ulong local_d0 [2];
  code *local_c0;
  ulong local_b8;
  ulong *local_b0;
  long local_a8;
  ulong local_a0;
  long local_98;
  ulong *local_90;
  long local_88;
  undefined *local_80;
  ulong *local_78;
  long *local_70;
  ulong local_68;
  
  lVar5 = 0;
  lVar21 = param_2;
  FUN_1009ea95c();
  local_88 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  puVar17 = (ulong *)((long)local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_90 = puVar17;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (ulong *)((long)puVar17 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar19 = (ulong *)((long)puVar17 - extraout_x12_00);
  iVar4 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad14);
    (*pcVar3)();
  }
  local_78 = param_1;
  FUN_1009fb640();
  lVar5 = *(long *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x50);
  local_70 = *(long **)(param_2 + 0x40);
  if (lVar5 == 0) {
    pcVar3 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = &DAT_100f27538;
    _swift_allocObject(&DAT_100f27538,0x20,7);
    *(long *)(puVar14 + 0x10) = lVar5;
    *(undefined8 *)(puVar14 + 0x18) = uVar1;
    pcVar3 = thunk_FUN_1000386a0;
  }
  _swift_retain(local_70);
  FUN_100011128(lVar5,uVar1);
  iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0x58));
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad18);
    (*pcVar3)();
  }
  uVar13 = param_3 >> 0x38;
  if (lVar5 == 0) {
    pcVar3 = (code *)0x0;
    local_80 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f27510;
    _swift_allocObject(&DAT_100f27510,0x20,7);
    *(code **)(puVar6 + 0x10) = pcVar3;
    *(undefined **)(puVar6 + 0x18) = puVar14;
    pcVar3 = thunk_FUN_1000386a0;
    local_80 = puVar6;
  }
  plVar18 = local_70;
  puVar7 = local_78;
  bVar2 = (byte)(param_3 >> 0x38);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      puVar12 = *(undefined8 **)(local_78[8] + 0x28);
      *puVar12 = param_1;
      puVar12[1] = lVar21;
      *(char *)((long)puVar12 + 0x16) = (char)(param_3 >> 0x30);
      *(short *)((long)puVar12 + 0x14) = (short)(param_3 >> 0x20);
      *(int *)(puVar12 + 2) = (int)param_3;
      _swift_retain(param_1);
      _swift_continuation_throwingResume(puVar7);
      puVar14 = local_80;
    }
    else {
      if (local_70 == (long *)0x0) {
        _swift_retain(param_1);
      }
      else {
        uVar24 = *(ulong *)(*local_70 +
                            *(long *)
                             PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                           0x10);
        uVar15 = (ulong)*(uint *)(*local_70 + 0x30) + 7 & 0x1fffffff8;
        _swift_retain(local_70);
        FUN_1009fc0e0(param_1,lVar21,param_3,1);
        iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar18 + uVar15));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad20);
          (*pcVar3)();
        }
        FUN_1009fc104((long)plVar18 + uVar24,puVar19);
        puVar17 = puVar19;
        _swift_getEnumCaseMultiPayload(puVar19,local_88);
        iVar4 = (int)puVar17;
        if (iVar4 < 2) {
          local_d0[0] = uVar24;
          local_d0[1] = uVar15;
          if (iVar4 == 0) {
            local_c0 = pcVar3;
            local_b8 = uVar13;
            local_b0 = param_1;
            local_a8 = lVar21;
            local_a0 = param_3;
            local_98 = lVar5;
            FUN_1009fc148((long)plVar18 + uVar24);
            puVar14 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            lVar21 = *(long *)(*(long *)(puVar14 + -8) + 0x40);
            local_90 = puVar19;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            uVar13 = lVar21 + 0xfU & 0xfffffffffffffff0;
            lVar5 = (long)puVar19 - uVar13;
            FUN_10011532c(puVar19,lVar5,&DAT_100ff3d50,&DAT_100c8d458);
            puVar14 = &DAT_100ff3d48;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar23 = *(long *)(puVar14 + -8);
            (*(code *)PTR____chkstk_darwin_100ea82c0)
                      (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar20 = lVar5 - extraout_x8_01;
            (*(code *)PTR____chkstk_darwin_100ea82c0)();
            lVar22 = lVar20 - uVar13;
            FUN_1000f8cac(lVar5,lVar22,&DAT_100ff3d50,&DAT_100c8d458);
            lVar21 = lVar22;
            (**(code **)(lVar23 + 0x30))(lVar22,1,puVar14);
            if ((int)lVar21 == 1) {
              FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
              FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
            }
            else {
              (**(code **)(lVar23 + 0x20))(lVar20,lVar22,puVar14);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar23 + 8))(lVar20,puVar14);
              FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
            }
            plVar18 = local_70;
            pcVar3 = local_c0;
            _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[0],local_88,2);
            uVar13 = local_b8;
            uVar15 = local_d0[1];
            lVar21 = local_a8;
            param_3 = local_a0;
            lVar5 = local_98;
            param_1 = local_b0;
          }
          else {
            local_c0 = pcVar3;
            local_b8 = uVar13;
            local_b0 = param_1;
            local_a8 = lVar21;
            local_a0 = param_3;
            local_98 = lVar5;
            FUN_1009fc148((long)plVar18 + uVar24);
            uVar13 = *puVar19;
            puVar14 = &DAT_100ff3d48;
            local_68 = uVar13;
            FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
            lVar20 = *(long *)(puVar14 + -8);
            bVar2 = *(byte *)(lVar20 + 0x50);
            lVar5 = *(long *)(lVar20 + 0x40);
            (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar5 + 0xfU & 0xfffffffffffffff0);
            lVar21 = (long)puVar19 - extraout_x8_07;
            puVar6 = &DAT_100ff3d50;
            FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
            (*(code *)PTR____chkstk_darwin_100ea82c0)
                      (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
            lVar22 = lVar21 - extraout_x8_08;
            if (*(long *)(uVar13 + 0x18) < 1) {
              pcVar3 = *(code **)(lVar20 + 0x38);
            }
            else {
              local_90 = (ulong *)(ulong)(bVar2 + 0x28 & (bVar2 ^ 0xffffffff));
              do {
                uVar15 = uVar13;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar15 & 1) == 0) {
                  FUN_1009ed5b0();
                  uVar13 = local_68;
                }
                pcVar16 = *(code **)(lVar20 + 0x20);
                (*pcVar16)(lVar22,(undefined1 *)
                                  ((long)local_90 +
                                  *(long *)(lVar20 + 0x48) * *(long *)(uVar13 + 0x20) + uVar13),
                           puVar14);
                lVar23 = *(long *)(uVar13 + 0x20) + 1;
                if (SCARRY8(*(long *)(uVar13 + 0x20),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad08);
                  (*pcVar3)();
                }
                if (*(long *)(uVar13 + 0x10) <= lVar23) {
                  lVar23 = 0;
                }
                *(long *)(uVar13 + 0x20) = lVar23;
                if (SBORROW8(*(long *)(uVar13 + 0x18),1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad10);
                  (*pcVar3)();
                }
                *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + -1;
                pcVar3 = *(code **)(lVar20 + 0x38);
                (*pcVar3)(lVar22,0,1,puVar14);
                (*pcVar16)(lVar21,lVar22,puVar14);
                Swift::CheckedContinuation::resume();
                (**(code **)(lVar20 + 8))(lVar21,puVar14);
                (*(code *)PTR____chkstk_darwin_100ea82c0)();
                lVar21 = (long)puVar19 - (lVar5 + 0xfU & 0xfffffffffffffff0);
                puVar6 = &DAT_100ff3d50;
                FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
                (*(code *)PTR____chkstk_darwin_100ea82c0)
                          (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
                lVar22 = lVar21 - extraout_x8_09;
              } while (0 < *(long *)(uVar13 + 0x18));
            }
            uVar15 = local_d0[1];
            (*pcVar3)(lVar22,1,1,puVar14);
            _swift_release(uVar13);
            FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
            plVar18 = local_70;
            _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[0],local_88,2);
            uVar13 = local_b8;
            lVar21 = local_a8;
            pcVar3 = local_c0;
            param_3 = local_a0;
            lVar5 = local_98;
            param_1 = local_b0;
          }
        }
        else if (iVar4 != 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fa314);
          (*pcVar3)();
        }
        iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar18 + uVar15));
        if (iVar4 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad28);
          (*pcVar3)();
        }
        _swift_release(plVar18);
      }
      puVar12 = *(undefined8 **)(local_78[8] + 0x28);
      *puVar12 = param_1;
      puVar12[1] = lVar21;
      *(char *)((long)puVar12 + 0x16) = (char)(param_3 >> 0x30);
      *(short *)((long)puVar12 + 0x14) = (short)(param_3 >> 0x20);
      *(int *)(puVar12 + 2) = (int)param_3;
      _swift_continuation_throwingResume();
      puVar14 = local_80;
    }
  }
  else if (bVar2 == 2) {
    if (local_70 == (long *)0x0) {
      _swift_errorRetain(param_1);
    }
    else {
      uVar24 = *(ulong *)(*local_70 +
                          *(long *)
                           PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 + 0x10
                         );
      uVar15 = (ulong)*(uint *)(*local_70 + 0x30) + 7 & 0x1fffffff8;
      _swift_retain(local_70);
      FUN_1009fc0e0(param_1,lVar21,param_3,2);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar18 + uVar15));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad1c);
        (*pcVar3)();
      }
      FUN_1009fc104((long)plVar18 + uVar24,puVar17);
      puVar7 = puVar17;
      _swift_getEnumCaseMultiPayload(puVar17,local_88);
      iVar4 = (int)puVar7;
      if (iVar4 < 2) {
        local_d0[0] = uVar15;
        local_d0[1] = uVar24;
        if (iVar4 == 0) {
          local_c0 = pcVar3;
          local_b8 = uVar13;
          local_b0 = param_1;
          local_a8 = lVar21;
          local_a0 = param_3;
          local_98 = lVar5;
          FUN_1009fc148((long)plVar18 + uVar24);
          puVar14 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          lVar21 = *(long *)(*(long *)(puVar14 + -8) + 0x40);
          local_90 = puVar19;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          uVar13 = lVar21 + 0xfU & 0xfffffffffffffff0;
          lVar5 = (long)puVar19 - uVar13;
          FUN_10011532c(puVar17,lVar5,&DAT_100ff3d50,&DAT_100c8d458);
          puVar14 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar23 = *(long *)(puVar14 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar20 = lVar5 - extraout_x8_00;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          lVar22 = lVar20 - uVar13;
          FUN_1000f8cac(lVar5,lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          lVar21 = lVar22;
          (**(code **)(lVar23 + 0x30))(lVar22,1,puVar14);
          if ((int)lVar21 == 1) {
            FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
            FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          }
          else {
            (**(code **)(lVar23 + 0x20))(lVar20,lVar22,puVar14);
            Swift::CheckedContinuation::resume();
            (**(code **)(lVar23 + 8))(lVar20,puVar14);
            FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
          }
          plVar18 = local_70;
          uVar15 = local_d0[0];
          _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[1],local_88,3);
          uVar13 = local_b8;
          lVar21 = local_a8;
          pcVar3 = local_c0;
          param_3 = local_a0;
          lVar5 = local_98;
          param_1 = local_b0;
        }
        else {
          local_c0 = pcVar3;
          local_b8 = uVar13;
          local_b0 = param_1;
          local_a8 = lVar21;
          local_a0 = param_3;
          local_98 = lVar5;
          FUN_1009fc148((long)plVar18 + uVar24);
          uVar13 = *puVar17;
          puVar14 = &DAT_100ff3d48;
          local_68 = uVar13;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar20 = *(long *)(puVar14 + -8);
          bVar2 = *(byte *)(lVar20 + 0x50);
          lVar5 = *(long *)(lVar20 + 0x40);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar5 + 0xfU & 0xfffffffffffffff0);
          lVar21 = (long)puVar19 - extraout_x8_04;
          puVar6 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar22 = lVar21 - extraout_x8_05;
          if (*(long *)(uVar13 + 0x18) < 1) {
            pcVar3 = *(code **)(lVar20 + 0x38);
          }
          else {
            local_90 = (ulong *)(ulong)(bVar2 + 0x28 & (bVar2 ^ 0xffffffff));
            do {
              uVar15 = uVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar15 & 1) == 0) {
                FUN_1009ed5b0();
                uVar13 = local_68;
              }
              pcVar16 = *(code **)(lVar20 + 0x20);
              (*pcVar16)(lVar22,(undefined1 *)
                                ((long)local_90 +
                                *(long *)(lVar20 + 0x48) * *(long *)(uVar13 + 0x20) + uVar13),
                         puVar14);
              lVar23 = *(long *)(uVar13 + 0x20) + 1;
              if (SCARRY8(*(long *)(uVar13 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad04);
                (*pcVar3)();
              }
              if (*(long *)(uVar13 + 0x10) <= lVar23) {
                lVar23 = 0;
              }
              *(long *)(uVar13 + 0x20) = lVar23;
              if (SBORROW8(*(long *)(uVar13 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad0c);
                (*pcVar3)();
              }
              *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + -1;
              pcVar3 = *(code **)(lVar20 + 0x38);
              (*pcVar3)(lVar22,0,1,puVar14);
              (*pcVar16)(lVar21,lVar22,puVar14);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar20 + 8))(lVar21,puVar14);
              (*(code *)PTR____chkstk_darwin_100ea82c0)();
              lVar21 = (long)puVar19 - (lVar5 + 0xfU & 0xfffffffffffffff0);
              puVar6 = &DAT_100ff3d50;
              FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
              (*(code *)PTR____chkstk_darwin_100ea82c0)
                        (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
              lVar22 = lVar21 - extraout_x8_06;
            } while (0 < *(long *)(uVar13 + 0x18));
          }
          (*pcVar3)(lVar22,1,1,puVar14);
          _swift_release(uVar13);
          FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          plVar18 = local_70;
          _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[1],local_88,3);
          uVar13 = local_b8;
          uVar15 = local_d0[0];
          lVar21 = local_a8;
          pcVar3 = local_c0;
          param_3 = local_a0;
          lVar5 = local_98;
          param_1 = local_b0;
        }
      }
      else if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fa308);
        (*pcVar3)();
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar18 + uVar15));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad24);
        (*pcVar3)();
      }
      _swift_release(plVar18);
    }
    if (param_1 == (ulong *)0x0) {
      puVar12 = *(undefined8 **)(local_78[8] + 0x28);
      *puVar12 = 0;
      puVar12[1] = 0;
      *(undefined8 *)((long)puVar12 + 0xf) = 0;
      _swift_continuation_throwingResume();
      puVar14 = local_80;
    }
    else {
      puVar14 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar12 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      puVar6 = puVar14;
      puVar11 = (undefined8 *)
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar11 = param_1;
      _swift_allocError(puVar14,puVar12,0,0);
      *puVar12 = puVar6;
      _swift_continuation_throwingResumeWithError(local_78,puVar14);
      puVar14 = local_80;
    }
  }
  else if ((param_1 == (ulong *)0x0 && lVar21 == 0) && ((param_3 & 0xffffffffffffff) == 0)) {
    CVar8 = Swift::CancellationError::typeMetadataAccessor();
    lVar20 = *(long *)(CVar8.unknown + -8);
    local_98 = lVar5;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar20 + 0x40));
    CVar9 = Swift::CancellationError::init();
    FUN_1009e8a00();
    CVar10 = CVar8;
    _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
    (**(code **)(lVar20 + 0x20))
              (CVar9.unknown,(long)puVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0),
               CVar8.unknown);
    puVar14 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar12 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar6 = puVar14;
    puVar11 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    lVar5 = local_98;
    *puVar11 = CVar10.unknown;
    _swift_allocError(puVar14,puVar12,0,0);
    *puVar12 = puVar6;
    _swift_continuation_throwingResumeWithError(local_78,puVar14);
    puVar14 = local_80;
    plVar18 = local_70;
  }
  else if ((param_1 == (ulong *)&DAT_00000001) &&
          ((lVar21 == 0 && ((param_3 & 0xffffffffffffff) == 0)))) {
    puVar12 = *(undefined8 **)(local_78[8] + 0x28);
    *puVar12 = 0;
    puVar12[1] = 0;
    *(undefined8 *)((long)puVar12 + 0xf) = 0;
    _swift_continuation_throwingResume();
    puVar14 = local_80;
    plVar18 = local_70;
  }
  else {
    if ((param_1 == (ulong *)0x2) && ((lVar21 == 0 && ((param_3 & 0xffffffffffffff) == 0)))) {
      *(undefined4 *)(puVar19 + -1) = 0;
      puVar19[-2] = 0x2b1;
      SVar25.bridgeObject = (void *)0x2;
      SVar25.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar25,(StaticString)0x0,0xe000000000000000,0xdaeab0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad7c);
      (*pcVar3)();
    }
    puVar14 = local_80;
    if ((((param_1 == (ulong *)0x3) && (lVar21 == 0)) && ((param_3 & 0xffffffffffffff) == 0)) &&
       (local_70 != (long *)0x0)) {
      uVar24 = *(ulong *)(*local_70 +
                          *(long *)
                           PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 + 0x10
                         );
      uVar15 = (ulong)*(uint *)(*local_70 + 0x30) + 7 & 0x1fffffff8;
      _swift_retain(local_70);
      iVar4 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar18 + uVar15));
      puVar17 = local_90;
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad34);
        (*pcVar3)();
      }
      FUN_1009fc104((long)plVar18 + uVar24,local_90);
      _swift_getEnumCaseMultiPayload(puVar17,local_88);
      iVar4 = (int)puVar17;
      if (iVar4 < 2) {
        local_d0[0] = uVar24;
        local_d0[1] = uVar15;
        if (iVar4 == 0) {
          local_c0 = pcVar3;
          local_b8 = uVar13;
          local_b0 = param_1;
          local_a8 = lVar21;
          local_a0 = param_3;
          local_98 = lVar5;
          FUN_1009fc148((long)plVar18 + uVar24);
          puVar14 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          lVar21 = *(long *)(*(long *)(puVar14 + -8) + 0x40);
          local_78 = puVar19;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          uVar13 = lVar21 + 0xfU & 0xfffffffffffffff0;
          lVar5 = (long)puVar19 - uVar13;
          FUN_10011532c(local_90,lVar5,&DAT_100ff3d50,&DAT_100c8d458);
          puVar14 = &DAT_100ff3d48;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar23 = *(long *)(puVar14 + -8);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar20 = lVar5 - extraout_x8_03;
          (*(code *)PTR____chkstk_darwin_100ea82c0)();
          lVar22 = lVar20 - uVar13;
          FUN_1000f8cac(lVar5,lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          lVar21 = lVar22;
          (**(code **)(lVar23 + 0x30))(lVar22,1,puVar14);
          if ((int)lVar21 == 1) {
            FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
            FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          }
          else {
            (**(code **)(lVar23 + 0x20))(lVar20,lVar22,puVar14);
            Swift::CheckedContinuation::resume();
            (**(code **)(lVar23 + 8))(lVar20,puVar14);
            FUN_1000fb4c4(lVar5,&DAT_100ff3d50,&DAT_100c8d458);
          }
          plVar18 = local_70;
          param_1 = local_b0;
          pcVar3 = local_c0;
          _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[0],local_88,2);
          uVar13 = local_b8;
          uVar15 = local_d0[1];
          lVar21 = local_a8;
          param_3 = local_a0;
          lVar5 = local_98;
        }
        else {
          local_c0 = pcVar3;
          local_b8 = uVar13;
          local_b0 = param_1;
          local_a8 = lVar21;
          local_a0 = param_3;
          local_98 = lVar5;
          FUN_1009fc148((long)plVar18 + uVar24);
          uVar13 = *local_90;
          puVar14 = &DAT_100ff3d48;
          local_68 = uVar13;
          FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
          lVar5 = *(long *)(puVar14 + -8);
          bVar2 = *(byte *)(lVar5 + 0x50);
          lVar20 = *(long *)(lVar5 + 0x40);
          (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar20 + 0xfU & 0xfffffffffffffff0);
          lVar21 = (long)puVar19 - extraout_x8_10;
          puVar6 = &DAT_100ff3d50;
          FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
          (*(code *)PTR____chkstk_darwin_100ea82c0)
                    (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          lVar22 = lVar21 - extraout_x8_11;
          if (*(long *)(uVar13 + 0x18) < 1) {
            pcVar3 = *(code **)(lVar5 + 0x38);
          }
          else {
            local_78 = (ulong *)(ulong)(bVar2 + 0x28 & (bVar2 ^ 0xffffffff));
            do {
              uVar15 = uVar13;
              _swift_isUniquelyReferenced_nonNull_native();
              if ((uVar15 & 1) == 0) {
                FUN_1009ed5b0();
                uVar13 = local_68;
              }
              pcVar16 = *(code **)(lVar5 + 0x20);
              (*pcVar16)(lVar22,(undefined1 *)
                                ((long)local_78 +
                                *(long *)(lVar5 + 0x48) * *(long *)(uVar13 + 0x20) + uVar13),puVar14
                        );
              lVar23 = *(long *)(uVar13 + 0x20) + 1;
              if (SCARRY8(*(long *)(uVar13 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad2c);
                (*pcVar3)();
              }
              if (*(long *)(uVar13 + 0x10) <= lVar23) {
                lVar23 = 0;
              }
              *(long *)(uVar13 + 0x20) = lVar23;
              if (SBORROW8(*(long *)(uVar13 + 0x18),1)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad30);
                (*pcVar3)();
              }
              *(long *)(uVar13 + 0x18) = *(long *)(uVar13 + 0x18) + -1;
              pcVar3 = *(code **)(lVar5 + 0x38);
              (*pcVar3)(lVar22,0,1,puVar14);
              (*pcVar16)(lVar21,lVar22,puVar14);
              Swift::CheckedContinuation::resume();
              (**(code **)(lVar5 + 8))(lVar21,puVar14);
              (*(code *)PTR____chkstk_darwin_100ea82c0)();
              lVar21 = (long)puVar19 - (lVar20 + 0xfU & 0xfffffffffffffff0);
              puVar6 = &DAT_100ff3d50;
              FUN_1000f7830(&DAT_100ff3d50,&DAT_100c8d458);
              (*(code *)PTR____chkstk_darwin_100ea82c0)
                        (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
              lVar22 = lVar21 - extraout_x8_12;
            } while (0 < *(long *)(uVar13 + 0x18));
          }
          uVar15 = local_d0[1];
          (*pcVar3)(lVar22,1,1,puVar14);
          _swift_release(uVar13);
          FUN_1000fb4c4(lVar22,&DAT_100ff3d50,&DAT_100c8d458);
          plVar18 = local_70;
          _swift_storeEnumTagMultiPayload((long)local_70 + local_d0[0],local_88,2);
          uVar13 = local_b8;
          lVar21 = local_a8;
          pcVar3 = local_c0;
          param_3 = local_a0;
          lVar5 = local_98;
          param_1 = local_b0;
        }
      }
      else if (iVar4 != 2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fa9d4);
        (*pcVar3)();
      }
      iVar4 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar18 + uVar15));
      if (iVar4 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009fad38);
        (*pcVar3)();
      }
      _swift_release(plVar18);
      puVar14 = local_80;
    }
  }
  local_80 = puVar14;
  if (lVar5 == 0) {
    _swift_release(plVar18);
    FUN_1009fc0bc(param_1,lVar21,param_3,uVar13);
  }
  else {
    _swift_retain(puVar14);
    (*pcVar3)();
    _swift_release(plVar18);
    FUN_1009fc0bc(param_1,lVar21,param_3,uVar13);
    FUN_100004550(pcVar3,puVar14);
    FUN_100004550(pcVar3,puVar14);
  }
  return;
}



/* Address: 0x1009fad7c | FUN_1009fad7c */

ulong FUN_1009fad7c(void)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  code *pcVar6;
  ulong uVar7;
  CancellationError CVar8;
  CancellationError CVar9;
  CancellationError CVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  long extraout_x8;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined1 *local_70;
  ulong local_68;
  
  uVar7 = *unaff_x20;
  uVar11 = unaff_x20[1];
  uVar12 = unaff_x20[2];
  uVar16 = unaff_x20[3];
  uVar15 = unaff_x20[4];
  uVar4 = (ushort)unaff_x20[5];
  bVar2 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar2 < 3) {
    bVar3 = *(byte *)((long)unaff_x20 + 0x11);
    if (bVar2 == 0) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,(uint)uVar4);
      CVar8 = Swift::CancellationError::typeMetadataAccessor();
      lVar18 = *(long *)(CVar8.unknown + -8);
      local_70 = auStack_80;
      local_68 = (ulong)bVar3;
      (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
      FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar16,uVar15,(ulong)local_78 & 0xffffffff,0);
      CVar9 = Swift::CancellationError::init();
      FUN_1009e8a00();
      CVar10 = CVar8;
      _swift_allocError(CVar8.unknown,CVar9.unknown,0,0);
      local_78 = CVar10.unknown;
      (**(code **)(lVar18 + 0x20))
                (CVar9.unknown,auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),CVar8.unknown
                );
      FUN_1006883ac();
      uVar17 = *(ulong *)CVar9.unknown;
      local_68 = local_68 & 1;
      uVar7 = *unaff_x20;
      uVar12 = unaff_x20[1];
      uVar11 = unaff_x20[2];
      uVar15 = unaff_x20[3];
      uVar19 = unaff_x20[4];
      uVar14 = *(undefined1 *)((long)unaff_x20 + 0x2a);
      uVar16 = unaff_x20[5];
      _swift_retain(uVar17);
      FUN_1009e8f30(uVar7,uVar12,uVar11,uVar15,uVar19,(short)uVar16,uVar14);
      *unaff_x20 = uVar17;
      unaff_x20[1] = local_68;
      unaff_x20[2] = (ulong)local_78;
      unaff_x20[3] = 0;
      unaff_x20[4] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      uVar14 = 2;
      uVar15 = 1;
    }
    else {
      if (bVar2 != 1) {
        uVar5 = *(ushort *)((long)unaff_x20 + 0x16);
        uVar1 = *(uint *)((long)unaff_x20 + 0x12);
        uVar17 = unaff_x20[2];
        FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar16,uVar15,uVar4,2);
        _swift_release(uVar7);
        _swift_errorRelease((ulong)CONCAT11(bVar3,(char)uVar17) |
                            (ulong)uVar1 << 0x10 | (ulong)uVar5 << 0x30);
        return 1;
      }
      bVar2 = *(byte *)((long)unaff_x20 + 0x29);
      FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar16,uVar15,uVar4,1);
      _swift_release(uVar16);
      FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                    (short)unaff_x20[5],*(undefined1 *)((long)unaff_x20 + 0x2a));
      *unaff_x20 = (ulong)bVar2 & 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      if (uVar15 == 0) {
        uVar14 = 3;
      }
      else {
        uVar14 = 4;
      }
    }
    *(undefined1 *)((long)unaff_x20 + 0x2a) = uVar14;
  }
  else {
    if (bVar2 == 3) {
      uVar13 = 3;
    }
    else {
      if (bVar2 != 4) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1009faffc);
        (*pcVar6)();
      }
      uVar13 = 4;
    }
    FUN_1009e8ec8(uVar7,uVar11,uVar12,uVar16,uVar15,uVar4,uVar13);
    uVar15 = 1;
  }
  return uVar15;
}



/* Address: 0x1009faffc | FUN_1009faffc */

ulong FUN_1009faffc(ulong param_1,code *param_2)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  undefined2 uVar10;
  byte *pbVar11;
  undefined3 uVar12;
  undefined7 uVar13;
  undefined7 uVar14;
  code *pcVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  byte bVar19;
  undefined2 uVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  ulong *unaff_x20;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  
  bVar19 = (byte)*unaff_x20;
  puVar16 = (ulong *)*unaff_x20;
  puVar27 = unaff_x20 + 1;
  uVar24 = *puVar27;
  uVar17 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar18 = unaff_x20[4];
  uVar20 = (undefined2)unaff_x20[5];
  bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
  if (bVar4 < 3) {
    bVar5 = *(byte *)((long)unaff_x20 + 7);
    uVar12 = *(undefined3 *)((long)unaff_x20 + 5);
    uVar3 = *(undefined4 *)((long)unaff_x20 + 1);
    uVar13 = *(undefined7 *)((long)unaff_x20 + 1);
    bVar6 = (byte)*puVar27;
    uVar14 = *(undefined7 *)((long)unaff_x20 + 9);
    bVar7 = (byte)unaff_x20[2];
    bVar8 = *(byte *)((long)unaff_x20 + 0x11);
    bVar9 = (byte)((uint7)uVar14 >> 0x30);
    uVar10 = (undefined2)((uint7)uVar14 >> 0x20);
    uVar23 = (undefined4)uVar14;
    if (bVar4 == 0) {
      if (param_1 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb628);
        (*pcVar15)();
      }
      FUN_1009e8ec8(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,0);
      FUN_1006883ac();
      uVar17 = *puVar16;
      uVar20 = 0x100;
      if ((bVar8 & 1) == 0) {
        uVar20 = 0;
      }
      uVar2 = *unaff_x20;
      uVar24 = unaff_x20[1];
      uVar18 = unaff_x20[2];
      uVar26 = unaff_x20[3];
      uVar25 = unaff_x20[4];
      bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
      uVar28 = unaff_x20[5];
      _swift_retain();
      FUN_1009e8f30(uVar2,uVar24,uVar18,uVar26,uVar25,(short)uVar28,bVar4);
      *(byte *)unaff_x20 = bVar19;
      *(byte *)((long)unaff_x20 + 7) = bVar5;
      *(short *)((long)unaff_x20 + 5) = (short)uVar12;
      *(undefined4 *)((long)unaff_x20 + 1) = uVar3;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
      unaff_x20[2] = (ulong)bVar7 & 1;
      unaff_x20[3] = uVar17;
      unaff_x20[4] = 0;
      *(undefined2 *)(unaff_x20 + 5) = uVar20;
    }
    else {
      if (bVar4 != 1) {
        uVar26 = CONCAT71(uVar13,bVar19);
        uVar28 = (ulong)(ushort)unaff_x20[2] |
                 (ulong)*(uint *)((long)unaff_x20 + 0x12) << 0x10 |
                 (ulong)*(ushort *)((long)unaff_x20 + 0x16) << 0x30;
        FUN_1009e8ec8(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,2);
        FUN_1009e8f30(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,2);
        pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
        pbVar11 = (byte *)((long)unaff_x20 + 0x22);
        pbVar11[0] = 0;
        pbVar11[1] = 0;
        pbVar11[2] = 0;
        pbVar11[3] = 0;
        pbVar11[4] = 0;
        pbVar11[5] = 0;
        pbVar11[6] = 0;
        pbVar11[7] = 0;
        pbVar1[0] = 0;
        pbVar1[1] = 0;
        pbVar1[2] = 0;
        pbVar1[3] = 0;
        pbVar1[4] = 0;
        pbVar1[5] = 0;
        pbVar1[6] = 0;
        pbVar1[7] = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        *(byte *)((long)unaff_x20 + 0x2a) = 5;
        if (*(long *)(uVar26 + 0x18) < 1) {
          _swift_release(uVar26);
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = (ulong)bVar6 & 1;
          unaff_x20[2] = 0;
          *puVar27 = 0;
          unaff_x20[4] = 0;
          unaff_x20[3] = 0;
          *(undefined2 *)(unaff_x20 + 5) = 0;
          *(byte *)((long)unaff_x20 + 0x2a) = 4;
          return uVar28;
        }
        uVar17 = uVar26;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar17 & 1) == 0) {
          (*param_2)();
        }
        lVar22 = *(long *)(uVar26 + 0x20);
        lVar21 = lVar22 + 1;
        if (!SCARRY8(lVar22,1)) {
          uVar17 = *(ulong *)(uVar26 + lVar22 * 0x18 + 0x28);
          if (*(long *)(uVar26 + 0x10) <= lVar21) {
            lVar21 = 0;
          }
          *(long *)(uVar26 + 0x20) = lVar21;
          if (!SBORROW8(*(long *)(uVar26 + 0x18),1)) {
            *(long *)(uVar26 + 0x18) = *(long *)(uVar26 + 0x18) + -1;
            FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                          (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
            *unaff_x20 = uVar26;
            *(byte *)(unaff_x20 + 1) = bVar6 & 1;
            unaff_x20[2] = uVar28;
            *(byte *)((long)unaff_x20 + 0x2a) = 2;
            return uVar17;
          }
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb634);
          (*pcVar15)();
        }
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb62c);
        (*pcVar15)();
      }
      if (uVar18 != 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb640);
        (*pcVar15)();
      }
      uVar18 = unaff_x20[5];
      bVar4 = *(byte *)((long)unaff_x20 + 0x29);
      uVar26 = CONCAT71(uVar13,bVar19);
      FUN_1009e8ec8(puVar16,uVar24,uVar17,uVar2,0,uVar20,1);
      FUN_1009e8f30(puVar16,uVar24,uVar17,uVar2,0,uVar20,1);
      pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
      pbVar11 = (byte *)((long)unaff_x20 + 0x22);
      pbVar11[0] = 0;
      pbVar11[1] = 0;
      pbVar11[2] = 0;
      pbVar11[3] = 0;
      pbVar11[4] = 0;
      pbVar11[5] = 0;
      pbVar11[6] = 0;
      pbVar11[7] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 5;
      lVar21 = *(long *)(uVar2 + 0x18);
      if (0 < lVar21) {
        uVar17 = uVar2;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar17 & 1) == 0) {
          (*param_2)();
        }
        lVar22 = *(long *)(uVar2 + 0x20);
        lVar21 = lVar22 + 1;
        if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb630);
          (*pcVar15)();
        }
        uVar17 = *(ulong *)(uVar2 + lVar22 * 0x18 + 0x28);
        if (*(long *)(uVar2 + 0x10) <= lVar21) {
          lVar21 = 0;
        }
        *(long *)(uVar2 + 0x20) = lVar21;
        lVar21 = *(long *)(uVar2 + 0x18) + -1;
        if (!SBORROW8(*(long *)(uVar2 + 0x18),1)) {
          *(long *)(uVar2 + 0x18) = lVar21;
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = uVar26;
          *(byte *)(unaff_x20 + 1) = bVar6;
          *(byte *)((long)unaff_x20 + 0xf) = bVar9;
          *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
          *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
          bVar19 = lVar21 < (long)uVar26 | bVar7 & 1;
          *(byte *)(unaff_x20 + 2) = bVar19;
          unaff_x20[3] = uVar2;
          unaff_x20[4] = 0;
          *(byte *)(unaff_x20 + 5) = bVar19;
          *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
          *(byte *)((long)unaff_x20 + 0x2a) = 1;
          return uVar17;
        }
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb638);
        (*pcVar15)();
      }
      if (param_1 != 0) {
        FUN_1009e8f30(0,0,0,0,0,0,5);
        *unaff_x20 = uVar26;
        *(byte *)(unaff_x20 + 1) = bVar6;
        *(byte *)((long)unaff_x20 + 0xf) = bVar9;
        *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
        *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
        bVar19 = lVar21 < (long)uVar26 | bVar7 & 1;
        *(byte *)(unaff_x20 + 2) = bVar19;
        unaff_x20[3] = uVar2;
        unaff_x20[4] = param_1;
        *(byte *)(unaff_x20 + 5) = bVar19;
        bVar19 = 1;
        *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
        uVar17 = 3;
        if ((((byte)uVar18 | (lVar21 < (long)uVar26 | bVar7) ^ 0xff) & 1) != 0) {
          uVar17 = 4;
        }
        goto LAB_1009fb384;
      }
      FUN_1009e8f30(0,0,0,0,0,0,5);
      *unaff_x20 = uVar26;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar10;
      *(byte *)(unaff_x20 + 2) = bVar7 & 1;
      unaff_x20[3] = uVar2;
      unaff_x20[4] = 0;
      *(byte *)(unaff_x20 + 5) = (byte)uVar18 & 1;
      *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
    }
    bVar19 = 1;
    uVar17 = 2;
  }
  else {
    if (bVar4 != 3) {
      if (bVar4 == 4) {
        FUN_1009e8ec8(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,4);
        return 1;
      }
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x1009fb63c);
      (*pcVar15)();
    }
    FUN_1009e8ec8(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,3);
    FUN_1009e8f30(puVar16,uVar24,uVar17,uVar2,uVar18,uVar20,3);
    uVar17 = 0;
    *unaff_x20 = (ulong)bVar19 & 1;
    unaff_x20[2] = 0;
    *puVar27 = 0;
    unaff_x20[4] = 0;
    unaff_x20[3] = 0;
    *(undefined2 *)(unaff_x20 + 5) = 0;
    bVar19 = 4;
  }
LAB_1009fb384:
  *(byte *)((long)unaff_x20 + 0x2a) = bVar19;
  return uVar17;
}



/* Address: 0x1009fb640 | FUN_1009fb640 */

ulong FUN_1009fb640(ulong param_1)

{
  byte *pbVar1;
  ulong uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  undefined2 uVar11;
  byte *pbVar12;
  undefined3 uVar13;
  undefined7 uVar14;
  undefined7 uVar15;
  code *pcVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  undefined2 uVar20;
  long lVar21;
  long lVar22;
  undefined4 uVar23;
  ulong *unaff_x20;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong *puVar27;
  ulong uVar28;
  
  bVar10 = (byte)*unaff_x20;
  puVar17 = (ulong *)*unaff_x20;
  puVar27 = unaff_x20 + 1;
  uVar18 = *puVar27;
  uVar24 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar19 = unaff_x20[4];
  uVar20 = (undefined2)unaff_x20[5];
  bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
  if (2 < bVar4) {
    if (bVar4 == 3) {
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,uVar19,uVar20,3);
      *unaff_x20 = (ulong)bVar10 & 1;
      unaff_x20[2] = 0;
      *puVar27 = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      *(undefined2 *)(unaff_x20 + 5) = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 4;
      return 0;
    }
    if (bVar4 == 4) {
      FUN_1009e8ec8();
      return 1;
    }
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc74);
    (*pcVar16)();
  }
  bVar5 = *(byte *)((long)unaff_x20 + 7);
  uVar13 = *(undefined3 *)((long)unaff_x20 + 5);
  uVar3 = *(undefined4 *)((long)unaff_x20 + 1);
  uVar14 = *(undefined7 *)((long)unaff_x20 + 1);
  bVar6 = (byte)*puVar27;
  uVar15 = *(undefined7 *)((long)unaff_x20 + 9);
  bVar7 = (byte)unaff_x20[2];
  bVar8 = *(byte *)((long)unaff_x20 + 0x11);
  bVar9 = (byte)((uint7)uVar15 >> 0x30);
  uVar11 = (undefined2)((uint7)uVar15 >> 0x20);
  uVar23 = (undefined4)uVar15;
  if (bVar4 == 0) {
    if (param_1 != 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc60);
      (*pcVar16)();
    }
    FUN_1009e8ec8();
    FUN_1006883ac();
    uVar24 = *puVar17;
    uVar20 = 0x100;
    if ((bVar8 & 1) == 0) {
      uVar20 = 0;
    }
    uVar2 = *unaff_x20;
    uVar19 = unaff_x20[1];
    uVar18 = unaff_x20[2];
    uVar26 = unaff_x20[3];
    uVar25 = unaff_x20[4];
    bVar4 = *(byte *)((long)unaff_x20 + 0x2a);
    uVar28 = unaff_x20[5];
    _swift_retain();
    FUN_1009e8f30(uVar2,uVar19,uVar18,uVar26,uVar25,(short)uVar28,bVar4);
    *(byte *)unaff_x20 = bVar10;
    *(byte *)((long)unaff_x20 + 7) = bVar5;
    *(short *)((long)unaff_x20 + 5) = (short)uVar13;
    *(undefined4 *)((long)unaff_x20 + 1) = uVar3;
    *(byte *)(unaff_x20 + 1) = bVar6;
    *(byte *)((long)unaff_x20 + 0xf) = bVar9;
    *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
    *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
    unaff_x20[2] = (ulong)bVar7 & 1;
    unaff_x20[3] = uVar24;
    unaff_x20[4] = 0;
    *(undefined2 *)(unaff_x20 + 5) = uVar20;
  }
  else {
    if (bVar4 != 1) {
      uVar26 = CONCAT71(uVar14,bVar10);
      uVar28 = (ulong)(ushort)unaff_x20[2] |
               (ulong)*(uint *)((long)unaff_x20 + 0x12) << 0x10 |
               (ulong)*(ushort *)((long)unaff_x20 + 0x16) << 0x30;
      FUN_1009e8ec8();
      FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,uVar19,uVar20,2);
      pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
      pbVar12 = (byte *)((long)unaff_x20 + 0x22);
      pbVar12[0] = 0;
      pbVar12[1] = 0;
      pbVar12[2] = 0;
      pbVar12[3] = 0;
      pbVar12[4] = 0;
      pbVar12[5] = 0;
      pbVar12[6] = 0;
      pbVar12[7] = 0;
      pbVar1[0] = 0;
      pbVar1[1] = 0;
      pbVar1[2] = 0;
      pbVar1[3] = 0;
      pbVar1[4] = 0;
      pbVar1[5] = 0;
      pbVar1[6] = 0;
      pbVar1[7] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      *(byte *)((long)unaff_x20 + 0x2a) = 5;
      if (*(long *)(uVar26 + 0x18) < 1) {
        _swift_release(uVar26);
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = (ulong)bVar6 & 1;
        unaff_x20[2] = 0;
        *puVar27 = 0;
        unaff_x20[4] = 0;
        unaff_x20[3] = 0;
        *(undefined2 *)(unaff_x20 + 5) = 0;
        *(byte *)((long)unaff_x20 + 0x2a) = 4;
        return uVar28;
      }
      uVar24 = uVar26;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar24 & 1) == 0) {
        FUN_1009ed510();
      }
      lVar22 = *(long *)(uVar26 + 0x20);
      lVar21 = lVar22 + 1;
      if (!SCARRY8(lVar22,1)) {
        uVar24 = *(ulong *)(uVar26 + lVar22 * 0x18 + 0x28);
        if (*(long *)(uVar26 + 0x10) <= lVar21) {
          lVar21 = 0;
        }
        *(long *)(uVar26 + 0x20) = lVar21;
        if (!SBORROW8(*(long *)(uVar26 + 0x18),1)) {
          *(long *)(uVar26 + 0x18) = *(long *)(uVar26 + 0x18) + -1;
          FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                        (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
          *unaff_x20 = uVar26;
          *(byte *)(unaff_x20 + 1) = bVar6 & 1;
          unaff_x20[2] = uVar28;
          *(byte *)((long)unaff_x20 + 0x2a) = 2;
          return uVar24;
        }
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc6c);
        (*pcVar16)();
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc64);
      (*pcVar16)();
    }
    if (uVar19 != 0) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc78);
      (*pcVar16)();
    }
    uVar19 = unaff_x20[5];
    bVar4 = *(byte *)((long)unaff_x20 + 0x29);
    uVar26 = CONCAT71(uVar14,bVar10);
    FUN_1009e8ec8();
    FUN_1009e8f30(puVar17,uVar18,uVar24,uVar2,0,uVar20,1);
    pbVar1 = (byte *)((long)unaff_x20 + 0x1a);
    pbVar12 = (byte *)((long)unaff_x20 + 0x22);
    pbVar12[0] = 0;
    pbVar12[1] = 0;
    pbVar12[2] = 0;
    pbVar12[3] = 0;
    pbVar12[4] = 0;
    pbVar12[5] = 0;
    pbVar12[6] = 0;
    pbVar12[7] = 0;
    pbVar1[0] = 0;
    pbVar1[1] = 0;
    pbVar1[2] = 0;
    pbVar1[3] = 0;
    pbVar1[4] = 0;
    pbVar1[5] = 0;
    pbVar1[6] = 0;
    pbVar1[7] = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    *(byte *)((long)unaff_x20 + 0x2a) = 5;
    lVar21 = *(long *)(uVar2 + 0x18);
    if (0 < lVar21) {
      uVar24 = uVar2;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar24 & 1) == 0) {
        FUN_1009ed510();
      }
      lVar22 = *(long *)(uVar2 + 0x20);
      lVar21 = lVar22 + 1;
      if (SCARRY8(lVar22,1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc68);
        (*pcVar16)();
      }
      uVar24 = *(ulong *)(uVar2 + lVar22 * 0x18 + 0x28);
      if (*(long *)(uVar2 + 0x10) <= lVar21) {
        lVar21 = 0;
      }
      *(long *)(uVar2 + 0x20) = lVar21;
      lVar21 = *(long *)(uVar2 + 0x18) + -1;
      if (!SBORROW8(*(long *)(uVar2 + 0x18),1)) {
        *(long *)(uVar2 + 0x18) = lVar21;
        FUN_1009e8f30(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],unaff_x20[4],
                      (short)unaff_x20[5],*(byte *)((long)unaff_x20 + 0x2a));
        *unaff_x20 = uVar26;
        *(byte *)(unaff_x20 + 1) = bVar6;
        *(byte *)((long)unaff_x20 + 0xf) = bVar9;
        *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
        bVar10 = lVar21 < (long)uVar26 | bVar7 & 1;
        *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
        *(byte *)(unaff_x20 + 2) = bVar10;
        unaff_x20[3] = uVar2;
        unaff_x20[4] = 0;
        *(byte *)(unaff_x20 + 5) = bVar10;
        *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
        *(byte *)((long)unaff_x20 + 0x2a) = 1;
        return uVar24;
      }
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1009fbc70);
      (*pcVar16)();
    }
    if (param_1 != 0) {
      FUN_1009e8f30(0,0,0,0,0,0,5);
      *unaff_x20 = uVar26;
      *(byte *)(unaff_x20 + 1) = bVar6;
      *(byte *)((long)unaff_x20 + 0xf) = bVar9;
      *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
      *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
      bVar10 = lVar21 < (long)uVar26 | bVar7 & 1;
      *(byte *)(unaff_x20 + 2) = bVar10;
      unaff_x20[3] = uVar2;
      unaff_x20[4] = param_1;
      *(byte *)(unaff_x20 + 5) = bVar10;
      *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
      uVar24 = 3;
      if ((((byte)uVar19 | (lVar21 < (long)uVar26 | bVar7) ^ 0xff) & 1) != 0) {
        uVar24 = 4;
      }
      *(byte *)((long)unaff_x20 + 0x2a) = 1;
      return uVar24;
    }
    FUN_1009e8f30(0,0,0,0,0,0,5);
    *unaff_x20 = uVar26;
    *(byte *)(unaff_x20 + 1) = bVar6;
    *(byte *)((long)unaff_x20 + 0xf) = bVar9;
    *(undefined4 *)((long)unaff_x20 + 9) = uVar23;
    *(undefined2 *)((long)unaff_x20 + 0xd) = uVar11;
    *(byte *)(unaff_x20 + 2) = bVar7 & 1;
    unaff_x20[3] = uVar2;
    unaff_x20[4] = 0;
    *(byte *)(unaff_x20 + 5) = (byte)uVar19 & 1;
    *(byte *)((long)unaff_x20 + 0x29) = bVar4 & 1;
  }
  *(byte *)((long)unaff_x20 + 0x2a) = 1;
  return 2;
}



/* Address: 0x1009fbc78 | FUN_1009fbc78 */

void FUN_1009fbc78(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1009f5f24;
  FUN_1009f6674(param_2);
  return;
}



/* Address: 0x1009fbce4 | FUN_1009fbce4 */

void FUN_1009fbce4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1009f5f24;
  FUN_1009f6d74(param_2);
  return;
}



/* Address: 0x1009fbd50 | FUN_1009fbd50 */

void FUN_1009fbd50(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009fbce4(plVar1,param_1);
  return;
}



/* Address: 0x1009fbdc0 | FUN_1009fbdc0 */

void FUN_1009fbdc0(void)

{
  FUN_1009f82d0();
  return;
}



/* Address: 0x1009fbde8 | FUN_1009fbde8 */

void FUN_1009fbde8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_unknownObjectRelease();
    _swift_release(param_4);
    _swift_release(param_6);
    return;
  }
  return;
}



/* Address: 0x1009fbe20 | FUN_1009fbe20 */

void FUN_1009fbe20(void)

{
  char in_w3;
  
  if (in_w3 == '\x02') {
    _swift_errorRelease();
    return;
  }
  if ((in_w3 != '\x01') && (in_w3 != '\0')) {
    return;
  }
  FUN_100875938();
  return;
}



/* Address: 0x1009fbe48 | FUN_1009fbe48 */

void FUN_1009fbe48(void)

{
  char in_w3;
  
  if (in_w3 == '\x02') {
    _swift_errorRetain();
    return;
  }
  if ((in_w3 != '\x01') && (in_w3 != '\0')) {
    return;
  }
  FUN_1008758fc();
  return;
}



/* Address: 0x1009fbe70 | FUN_1009fbe70 */

void FUN_1009fbe70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_unknownObjectRetain();
    _swift_retain(param_4);
    _swift_retain(param_6);
    return;
  }
  return;
}



/* Address: 0x1009fbea8 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  FUN_1005e70c0();
  return;
}



/* Address: 0x1009fbeac | FUN_1009fbeac */

void FUN_1009fbeac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009fbed0 | FUN_1009fbed0 */

void FUN_1009fbed0(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1009fbce4(plVar1,param_1);
  return;
}



/* Address: 0x1009fbf40 | FUN_1009fbf40 */

void FUN_1009fbf40(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009fbc78(plVar1,param_1);
  return;
}



/* Address: 0x1009fbfb0 | FUN_1009fbfb0 */

void FUN_1009fbfb0(void)

{
  FUN_1009f82d0();
  return;
}



/* Address: 0x1009fbfd8 | FUN_1009fbfd8 */

void FUN_1009fbfd8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009ea194;
  FUN_1009f7504(param_2);
  return;
}



/* Address: 0x1009fc044 | FUN_1009fc044 */

void FUN_1009fc044(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1009fbfd8(plVar1,param_1);
  return;
}



/* Address: 0x1009fc0b4 | FUN_1009fc0b4 */

void FUN_1009fc0b4(void)

{
  FUN_1009f8560();
  return;
}



/* Address: 0x1009fc0bc | FUN_1009fc0bc */

void FUN_1009fc0bc(void)

{
  char in_w3;
  
  if (in_w3 == '\x02') {
    _swift_errorRelease();
    return;
  }
  if ((in_w3 != '\x01') && (in_w3 != '\0')) {
    return;
  }
  _swift_release();
  return;
}



/* Address: 0x1009fc0e0 | FUN_1009fc0e0 */

void FUN_1009fc0e0(void)

{
  char in_w3;
  
  if (in_w3 == '\x02') {
    _swift_errorRetain();
    return;
  }
  if ((in_w3 != '\x01') && (in_w3 != '\0')) {
    return;
  }
  _swift_retain();
  return;
}



/* Address: 0x1009fc104 | FUN_1009fc104 */

undefined8 FUN_1009fc104(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009ea95c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009fc148 | FUN_1009fc148 */

undefined8 FUN_1009fc148(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009ea95c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1009fc184 | thunk_FUN_1009f63cc */

void thunk_FUN_1009f63cc(void)

{
  FUN_1009f63cc();
  return;
}



/* Address: 0x1009fc188 | thunk_FUN_1009fbeac */

void thunk_FUN_1009fbeac(void)

{
  FUN_1009fbeac();
  return;
}



/* Address: 0x1009fc18c | thunk_FUN_1009fbeac */

void thunk_FUN_1009fbeac(void)

{
  FUN_1009fbeac();
  return;
}



/* Address: 0x1009fc190 | thunk_FUN_1009fbeac */

void thunk_FUN_1009fbeac(void)

{
  FUN_1009fbeac();
  return;
}



/* Address: 0x1009fc194 | thunk_FUN_1009fbeac */

void thunk_FUN_1009fbeac(void)

{
  FUN_1009fbeac();
  return;
}



/* Address: 0x1009fc198 | thunk_FUN_1009fbeac */

void thunk_FUN_1009fbeac(void)

{
  FUN_1009fbeac();
  return;
}



/* Address: 0x1009fc19c | thunk_FUN_1009f629c */

void thunk_FUN_1009f629c(void)

{
  FUN_1009f629c();
  return;
}



/* Address: 0x1009fc1a0 | thunk_FUN_1009f6388 */

void thunk_FUN_1009f6388(void)

{
  FUN_1009f6388();
  return;
}



/* Address: 0x1009fc1a4 | thunk_FUN_1009f3bb4 */

void thunk_FUN_1009f3bb4(void)

{
  thunk_FUN_1009f3bb4();
  return;
}



/* Address: 0x1009fc1a8 | thunk_FUN_1009f74c0 */

void thunk_FUN_1009f74c0(void)

{
  FUN_1009f74c0();
  return;
}



/* Address: 0x1009fc1ac | thunk_FUN_1009f2758 */

void thunk_FUN_1009f2758(void)

{
  thunk_FUN_1009f2758();
  return;
}



/* Address: 0x1009fc1b0 | thunk_FUN_1009f2400 */

void thunk_FUN_1009f2400(void)

{
  thunk_FUN_1009f2400();
  return;
}



/* Address: 0x1009fc1b4 | thunk_FUN_1009f29ec */

void thunk_FUN_1009f29ec(void)

{
  thunk_FUN_1009f29ec();
  return;
}



/* Address: 0x1009fc1b8 | thunk_FUN_1009f2cf8 */

void thunk_FUN_1009f2cf8(void)

{
  thunk_FUN_1009f2cf8();
  return;
}



/* Address: 0x1009fc1bc | thunk_FUN_1009f3218 */

void thunk_FUN_1009f3218(void)

{
  thunk_FUN_1009f3218();
  return;
}



/* Address: 0x1009fc1c0 | thunk_FUN_1009f351c */

void thunk_FUN_1009f351c(void)

{
  thunk_FUN_1009f351c();
  return;
}



/* Address: 0x1009fc1c4 | thunk_FUN_1009f3a34 */

void thunk_FUN_1009f3a34(void)

{
  thunk_FUN_1009f3a34();
  return;
}



/* Address: 0x1009fc1c8 | thunk_FUN_1009f7474 */

void thunk_FUN_1009f7474(void)

{
  FUN_1009f7474();
  return;
}



/* Address: 0x1009fc1cc | thunk_FUN_1009f5f24 */

void thunk_FUN_1009f5f24(void)

{
  FUN_1009f5f24();
  return;
}



/* Address: 0x1009fc1d0 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1d4 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1d8 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1dc | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1e0 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1e4 | thunk_FUN_1009fbdc0 */

void thunk_FUN_1009fbdc0(void)

{
  FUN_1009fbdc0();
  return;
}



/* Address: 0x1009fc1e8 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1ec | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1f0 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1f4 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1009fc1f8 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}


