/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100948590 | FUN_100948590 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100948590(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009485c4 | FUN_1009485c4 */

void FUN_1009485c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100941168(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009485d0 | FUN_1009485d0 */

void FUN_1009485d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100948600 | FUN_100948600 */

void FUN_100948600(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10094862c | FUN_10094862c */

void FUN_10094862c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100948660 | FUN_100948660 */

void FUN_100948660(void)

{
  long unaff_x20;
  
  FUN_1008f630c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10094866c | FUN_10094866c */

void FUN_10094866c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009486a0 | FUN_1009486a0 */

void FUN_1009486a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar2;
  _swift_getObjectType(uVar2);
  FUN_10094686c(uVar1,uVar3,uVar2,uVar5,uVar4);
  return;
}



/* Address: 0x1009486e4 | thunk_FUN_100949c20 */

void thunk_FUN_100949c20(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009486e8 | thunk_FUN_100949c54 */

void thunk_FUN_100949c54(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_100945198(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1009486ec | FUN_1009486ec */

void FUN_1009486ec(void)

{
  long unaff_x20;
  
  FUN_100949a98(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009486fc | FUN_1009486fc */

undefined1  [16] FUN_1009486fc(ulong *param_1,long *param_2,ulong *param_3,long param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ulong *puVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  DispatchTime DVar8;
  DispatchTime DVar9;
  __uint64 _Var10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auVar18 [16];
  undefined8 local_180;
  undefined8 uStack_178;
  __uint64 local_168;
  __uint64 local_160;
  ulong *local_158;
  long *local_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 uStack_128;
  undefined7 uStack_127;
  undefined1 local_120;
  undefined1 auStack_118 [40];
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  char cStack_c8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 local_97;
  undefined1 uStack_90;
  undefined8 uStack_8f;
  ulong local_78;
  
  DVar8 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar15 = *(long *)(DVar8.unknown + -8);
  lVar13 = *(long *)(lVar15 + 0x40);
  uVar16 = *param_1;
  if (*(long *)(uVar16 + 0x18) == 0 && *(long *)(*param_2 + 0x10) == 0) {
    local_160 = 0;
    uVar12 = 1;
  }
  else {
    bVar6 = *(long *)(*param_2 + 0x10) != 0;
    bVar7 = *(long *)(uVar16 + 0x18) != 0;
    local_158 = param_1;
    local_150 = param_2;
    DVar9 = Dispatch::DispatchTime::now(DVar8);
    _Var10 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar9);
    (**(code **)(lVar15 + 8))((long)&local_180 - (lVar13 + 0xfU & 0xfffffffffffffff0),DVar8.unknown)
    ;
    plVar14 = local_150;
    local_168 = _Var10;
    local_160 = _Var10;
    bVar1 = bVar6;
    if (0x7ffffffffffffffe < _Var10) {
      local_168 = 0x7fffffffffffffff;
      local_160 = local_168;
    }
    while (bVar3 = bVar1, bVar2 = bVar6, puVar4 = local_158, bVar1 = bVar2, bVar7) {
      uVar17 = *param_3;
      if (param_4 <= *(long *)(uVar17 + 0x10)) {
LAB_100948940:
        bVar7 = false;
        bVar1 = bVar7;
        if (!bVar3) break;
        goto LAB_100948954;
      }
      if (*(long *)(uVar16 + 0x18) < 1) {
        uStack_d0 = 0;
        uStack_cf = 0;
        uStack_e8 = 0;
        local_f0 = 0;
        local_d8 = 0;
        uStack_d7 = 0;
        uStack_e0 = 0;
        cStack_c8 = -1;
        FUN_1000fb4c4(&local_f0,&DAT_100feda90,&DAT_100c85af8);
        goto LAB_100948940;
      }
      uVar16 = *local_158;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar16 & 1) == 0) {
        FUN_1009145ec();
      }
      uVar16 = *puVar4;
      lVar15 = *(long *)(uVar16 + 0x20);
      lVar13 = uVar16 + lVar15 * 0x30;
      uVar12 = *(undefined8 *)(lVar13 + 0x49);
      uStack_e0 = *(undefined8 *)(lVar13 + 0x38);
      uStack_e8 = *(undefined8 *)(lVar13 + 0x30);
      local_f0 = *(undefined8 *)(lVar13 + 0x28);
      local_d8 = (undefined1)*(undefined8 *)(lVar13 + 0x40);
      uStack_cf = (undefined7)uVar12;
      cStack_c8 = (char)((ulong)uVar12 >> 0x38);
      uStack_d7 = (undefined7)*(undefined8 *)(lVar13 + 0x41);
      uStack_d0 = (undefined1)((ulong)*(undefined8 *)(lVar13 + 0x41) >> 0x38);
      lVar13 = lVar15 + 1;
      if (SCARRY8(lVar15,1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100948bdc);
        (*pcVar5)();
      }
      if (*(long *)(uVar16 + 0x10) <= lVar13) {
        lVar13 = 0;
      }
      *(long *)(uVar16 + 0x20) = lVar13;
      if (SBORROW8(*(long *)(uVar16 + 0x18),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100948be0);
        (*pcVar5)();
      }
      *(long *)(uVar16 + 0x18) = *(long *)(uVar16 + 0x18) + -1;
      uStack_98 = local_d8;
      local_b0 = local_f0;
      uStack_a8 = uStack_e8;
      uStack_a0 = uStack_e0;
      local_97 = uStack_d7;
      uStack_90 = uStack_d0;
      uStack_8f = uVar12;
      FUN_100949c84(&local_b0,&local_f0);
      uVar11 = uVar17;
      _swift_isUniquelyReferenced_nonNull_native();
      *param_3 = uVar17;
      if ((uVar11 & 1) == 0) {
        FUN_10090d9f4(0,*(long *)(uVar17 + 0x10) + 1,1);
        uVar17 = *param_3;
      }
      uVar11 = *(ulong *)(uVar17 + 0x10);
      if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar11) {
        FUN_10090d9f4(1 < *(ulong *)(uVar17 + 0x18),uVar11 + 1,1);
      }
      FUN_1009475e8(&local_b0);
      uVar17 = *param_3;
      *(ulong *)(uVar17 + 0x10) = uVar11 + 1;
      lVar13 = uVar17 + uVar11 * 0x30;
      *(ulong *)(lVar13 + 0x41) = CONCAT17(cStack_c8,uStack_cf);
      *(ulong *)(lVar13 + 0x39) = CONCAT17(uStack_d0,uStack_d7);
      *(undefined8 *)(lVar13 + 0x28) = uStack_e8;
      *(undefined8 *)(lVar13 + 0x20) = local_f0;
      *(ulong *)(lVar13 + 0x38) = CONCAT71(uStack_d7,local_d8);
      *(undefined8 *)(lVar13 + 0x30) = uStack_e0;
      *param_3 = uVar17;
      bVar7 = true;
      plVar14 = local_150;
      bVar6 = false;
      bVar1 = false;
      if (bVar3) {
LAB_100948954:
        uVar17 = *param_3;
        bVar6 = false;
        bVar1 = false;
        if (*(long *)(uVar17 + 0x10) < param_4) {
          if (*(long *)(*plVar14 + 0x10) == 0) {
            bVar6 = false;
            bVar1 = false;
          }
          else {
            FUN_1009474f8(*plVar14 + 0x20,&local_b0);
            _Var10 = local_78;
            if ((long)local_78 < 0) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100948be4);
              (*pcVar5)();
            }
            bVar1 = (long)local_78 <= (long)local_160 || local_78 < local_160;
            if ((long)local_78 <= (long)local_160 || local_78 < local_160) {
              FUN_100944484(&local_f0,0);
              FUN_1000fb4c4(&local_f0,&DAT_100feda70,&DAT_100c85ac8);
              FUN_10090de94(&local_b0,&local_f0);
              uVar12 = uStack_e8;
              if (cStack_c8 == '\x01') {
                FUN_100076508(&local_f0,auStack_118);
                FUN_100076688(auStack_118,&local_148);
                local_120 = 2;
                uVar11 = uVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                *param_3 = uVar17;
                if ((uVar11 & 1) == 0) {
                  FUN_10090d9f4(0,*(long *)(uVar17 + 0x10) + 1,1);
                  uVar17 = *param_3;
                }
                uVar11 = *(ulong *)(uVar17 + 0x10);
                if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar11) {
                  FUN_10090d9f4(1 < *(ulong *)(uVar17 + 0x18),uVar11 + 1,1);
                }
                FUN_100004594(auStack_118);
                FUN_100947534(&local_b0);
                uVar17 = *param_3;
                *(ulong *)(uVar17 + 0x10) = uVar11 + 1;
                lVar13 = uVar17 + uVar11 * 0x30;
                *(ulong *)(lVar13 + 0x41) = CONCAT17(local_120,uStack_127);
                *(ulong *)(lVar13 + 0x39) = CONCAT17(uStack_128,uStack_12f);
                *(undefined8 *)(lVar13 + 0x28) = uStack_140;
                *(undefined8 *)(lVar13 + 0x20) = local_148;
                *(ulong *)(lVar13 + 0x38) = CONCAT71(uStack_12f,uStack_130);
                *(undefined8 *)(lVar13 + 0x30) = local_138;
              }
              else {
                uStack_178 = uStack_e8;
                local_180 = local_f0;
                _swift_release(CONCAT71(uStack_d7,local_d8));
                _swift_retain(uVar12);
                uVar11 = uVar17;
                _swift_isUniquelyReferenced_nonNull_native();
                *param_3 = uVar17;
                if ((uVar11 & 1) == 0) {
                  FUN_10090d9f4(0,*(long *)(uVar17 + 0x10) + 1,1);
                  uVar17 = *param_3;
                }
                uVar11 = *(ulong *)(uVar17 + 0x10);
                if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar11) {
                  FUN_10090d9f4(1 < *(ulong *)(uVar17 + 0x18),uVar11 + 1,1);
                }
                _swift_release(uVar12);
                FUN_100947534(&local_b0);
                uVar17 = *param_3;
                *(ulong *)(uVar17 + 0x10) = uVar11 + 1;
                lVar13 = uVar17 + uVar11 * 0x30;
                *(undefined8 *)(lVar13 + 0x28) = uStack_178;
                *(undefined8 *)(lVar13 + 0x20) = local_180;
                *(undefined1 *)(lVar13 + 0x48) = 0;
              }
              *param_3 = uVar17;
              plVar14 = local_150;
              bVar6 = bVar2;
            }
            else {
              FUN_100947534(&local_b0);
              local_168 = _Var10;
              bVar6 = false;
            }
          }
        }
      }
    }
    if (bVar1) {
      bVar7 = false;
      bVar2 = true;
      goto LAB_100948954;
    }
    uVar12 = 0;
    if (*(long *)(uVar16 + 0x18) < 1) {
      local_160 = local_168;
    }
  }
  auVar18._8_8_ = uVar12;
  auVar18._0_8_ = local_160;
  return auVar18;
}



/* Address: 0x100948be4 | FUN_100948be4 */

void FUN_100948be4(long param_1,long param_2,code *param_3,code *UNRECOVERED_JUMPTABLE)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100948ca4);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100948ca8);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100948cac);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        (*param_3)();
      }
                    /* WARNING: Could not recover jumptable at 0x000100948c9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,0);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100948cb4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100948cb0);
  (*pcVar2)();
}



/* Address: 0x100948cb4 | FUN_100948cb4 */

/* WARNING: Removing unreachable block (ram,0x000100948dc8) */

void FUN_100948cb4(uint param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  _StringGuts _Var10;
  byte bVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  long local_78;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var10.unknown = auStack_60;
  _swift_beginAccess(param_2 + 0x118,_Var10.unknown,1,0);
  bVar11 = *(byte *)(param_2 + 0x132);
  if (bVar11 == 5) goto LAB_100948e8c;
  uVar2 = param_1 & 0xff;
  if ((param_1 & 1) == 0) {
    if ((uVar2 >> 5 & 1) == 0) {
      if ((uVar2 >> 4 & 1) != 0) {
        local_70.unknown = (undefined *)0x0;
        _Stack_68 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x28,_Var10);
        pcVar9 = &DAT_100fec480;
        local_78 = param_2;
        FUN_1000f7830(&DAT_100fec480,&DAT_100c85b00);
        puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (&local_78,&local_70,pcVar9,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar12.bridgeObject = (void *)0x8000000100db53c0;
        SVar12.str = (char *)0xd000000000000026;
        SVar14.bridgeObject = puVar7;
        SVar14.str = pcVar9;
        Swift::String::append(SVar12,SVar14);
        SVar13.bridgeObject = (void *)0x2;
        SVar13.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar13,local_70,_Stack_68,0xdb47e0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100949058);
        (*pcVar5)();
      }
      if ((uVar2 >> 3 & 1) != 0) {
        FUN_10093d700(thunk_FUN_100937a78,thunk_FUN_10095a9d8,FUN_10094eff4);
        bVar11 = *(byte *)(param_2 + 0x132);
        if (bVar11 == 5) goto LAB_100948e8c;
        if ((*(byte *)(param_2 + 0x110) >> 3 & 1) != 0) {
          thunk_FUN_10094dc20(*(byte *)(param_2 + 0x110) & 0xf7);
          bVar11 = *(byte *)(param_2 + 0x132);
          if (bVar11 == 5) goto LAB_100948e8c;
        }
      }
      if ((uVar2 >> 1 & 1) == 0) {
        if ((uVar2 >> 2 & 1) != 0) {
          thunk_FUN_10094f79c();
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x130) = 1;
        if (1 < bVar11) {
          uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
          thunk_FUN_10094dc20();
          while (*(byte *)(param_2 + 0x132) - 3 < 2) {
            thunk_FUN_10094f79c();
            if (((uint)uVar8 & 0xfe) == 2) break;
            if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100948fa4);
              (*pcVar5)();
            }
          }
        }
      }
      goto LAB_100948e8c;
    }
    if (1 < bVar11) {
      uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        thunk_FUN_10094f79c();
        if (((uint)uVar8 & 0xfe) == 2) break;
        if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100948f00);
          (*pcVar5)();
        }
      }
    }
  }
  else if (1 < bVar11) {
    uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
    thunk_FUN_10094dc20();
    while (*(byte *)(param_2 + 0x132) - 3 < 2) {
      thunk_FUN_10094f79c();
      if (((uint)uVar8 & 0xfe) == 2) break;
      if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100948d78);
        (*pcVar5)();
      }
    }
  }
  iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 0x10);
  if (-1 < iVar3) {
    local_70.unknown._0_4_ = 4;
    piVar6 = (int *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *piVar6 = 0;
    FUN_10095dcec(iVar3,0xffff,0x1007,piVar6,&local_70);
    iVar3 = *piVar6;
    _swift_slowDealloc(piVar6,0xffffffffffffffff,0xffffffffffffffff);
    uVar1 = 0xd000000000000050;
    pcVar9 = "OF which is unexpected";
    iVar4 = 0x36;
    if (iVar3 != 0) {
      uVar1 = 0xd00000000000001c;
      pcVar9 = " (no error set).";
      iVar4 = iVar3;
    }
    FUN_1008d5300();
    puVar7 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,piVar6,0,0);
    *(undefined8 *)piVar6 = uVar1;
    *(ulong *)(piVar6 + 2) = (ulong)pcVar9 | 0x8000000000000000;
    piVar6[4] = iVar4;
    FUN_10094e964();
    _swift_bridgeObjectRelease((ulong)pcVar9 | 0x8000000000000000);
    _swift_errorRelease(puVar7);
  }
LAB_100948e8c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100949058 | FUN_100949058 */

/* WARNING: Removing unreachable block (ram,0x0001009491c4) */

void FUN_100949058(uint param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  undefined *puVar7;
  ulong uVar8;
  char *pcVar9;
  _StringGuts _Var10;
  byte bVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  long local_78;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var10.unknown = auStack_60;
  _swift_beginAccess(param_2 + 0x118,_Var10.unknown,1,0);
  bVar11 = *(byte *)(param_2 + 0x132);
  if (bVar11 == 5) goto LAB_100949288;
  uVar2 = param_1 & 0xff;
  if ((param_1 & 1) == 0) {
    if ((uVar2 >> 5 & 1) == 0) {
      if ((uVar2 >> 4 & 1) != 0) {
        local_70.unknown = (undefined *)0x0;
        _Stack_68 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x28,_Var10);
        pcVar9 = &DAT_100fec438;
        local_78 = param_2;
        FUN_1000f7830(&DAT_100fec438,&DAT_100c83b30);
        puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (&local_78,&local_70,pcVar9,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar12.bridgeObject = (void *)0x8000000100db53c0;
        SVar12.str = (char *)0xd000000000000026;
        SVar14.bridgeObject = puVar7;
        SVar14.str = pcVar9;
        Swift::String::append(SVar12,SVar14);
        SVar13.bridgeObject = (void *)0x2;
        SVar13.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar13,local_70,_Stack_68,0xdb47e0);
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100949404);
        (*pcVar5)();
      }
      if ((uVar2 >> 3 & 1) != 0) {
        pcVar5 = thunk_FUN_100937a78;
        FUN_10093d700(thunk_FUN_100937a78,thunk_FUN_10095a9d8,thunk_FUN_10094f284);
        thunk_FUN_10094d97c();
        bVar11 = *(byte *)(param_2 + 0x132);
        if (((ulong)pcVar5 & 0xff) != 0) {
          if (bVar11 == 5) goto LAB_100949288;
          if ((*(byte *)(param_2 + 0x110) >> 3 & 1) == 0) goto LAB_100949114;
          thunk_FUN_10094dc20(*(byte *)(param_2 + 0x110) & 0xf7);
          bVar11 = *(byte *)(param_2 + 0x132);
        }
        if (bVar11 == 5) goto LAB_100949288;
      }
LAB_100949114:
      if ((uVar2 >> 1 & 1) == 0) {
        if ((uVar2 >> 2 & 1) != 0) {
          thunk_FUN_10094f79c();
        }
      }
      else {
        *(undefined1 *)(param_2 + 0x130) = 1;
        if (1 < bVar11) {
          uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
          thunk_FUN_10094dc20();
          while (*(byte *)(param_2 + 0x132) - 3 < 2) {
            thunk_FUN_10094f79c();
            if (((uint)uVar8 & 0xfe) == 2) break;
            if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100949350);
              (*pcVar5)();
            }
          }
        }
      }
      goto LAB_100949288;
    }
    if (1 < bVar11) {
      uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        thunk_FUN_10094f79c();
        if (((uint)uVar8 & 0xfe) == 2) break;
        if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009492fc);
          (*pcVar5)();
        }
      }
    }
  }
  else if (1 < bVar11) {
    uVar8 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
    thunk_FUN_10094dc20();
    while (*(byte *)(param_2 + 0x132) - 3 < 2) {
      thunk_FUN_10094f79c();
      if (((uint)uVar8 & 0xfe) == 2) break;
      if (((uint)uVar8 & 0xff) != 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100949174);
        (*pcVar5)();
      }
    }
  }
  iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 0x10);
  if (-1 < iVar3) {
    local_70.unknown._0_4_ = 4;
    piVar6 = (int *)0x4;
    _swift_slowAlloc(4,0xffffffffffffffff);
    *piVar6 = 0;
    FUN_10095dcec(iVar3,0xffff,0x1007,piVar6,&local_70);
    iVar3 = *piVar6;
    _swift_slowDealloc(piVar6,0xffffffffffffffff,0xffffffffffffffff);
    uVar1 = 0xd000000000000050;
    pcVar9 = "OF which is unexpected";
    iVar4 = 0x36;
    if (iVar3 != 0) {
      uVar1 = 0xd00000000000001c;
      pcVar9 = " (no error set).";
      iVar4 = iVar3;
    }
    FUN_1008d5300();
    puVar7 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,piVar6,0,0);
    *(undefined8 *)piVar6 = uVar1;
    *(ulong *)(piVar6 + 2) = (ulong)pcVar9 | 0x8000000000000000;
    piVar6[4] = iVar4;
    FUN_100950464();
    _swift_bridgeObjectRelease((ulong)pcVar9 | 0x8000000000000000);
    _swift_errorRelease(puVar7);
  }
LAB_100949288:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100949404 | FUN_100949404 */

/* WARNING: Removing unreachable block (ram,0x000100949524) */

void FUN_100949404(uint param_1,long param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar8;
  undefined *puVar9;
  ulong uVar10;
  char *pcVar11;
  _StringGuts _Var12;
  byte bVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  long local_78;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined1 auStack_60 [24];
  long local_48;
  long lVar7;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar7 = param_2 + 0x118;
  _Var12.unknown = auStack_60;
  _swift_beginAccess(lVar7,_Var12.unknown,1,0);
  uVar6 = (uint)lVar7;
  bVar13 = *(byte *)(param_2 + 0x132);
  if (bVar13 == 5) goto LAB_100949650;
  uVar2 = param_1 & 0xff;
  if ((param_1 & 1) != 0) {
    if (1 < bVar13) {
      uVar10 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        thunk_FUN_10094f79c();
        if (((uint)uVar10 & 0xfe) == 2) break;
        if (((uint)uVar10 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009495b8);
          (*pcVar5)();
        }
      }
    }
    iVar3 = *(int *)(*(long *)(param_2 + 0x20) + 0x10);
    if (-1 < iVar3) {
      local_70.unknown._0_4_ = 4;
      piVar8 = (int *)0x4;
      _swift_slowAlloc(4,0xffffffffffffffff);
      *piVar8 = 0;
      FUN_10095dcec(iVar3,0xffff,0x1007,piVar8,&local_70);
      iVar3 = *piVar8;
      _swift_slowDealloc(piVar8,0xffffffffffffffff,0xffffffffffffffff);
      uVar1 = 0xd000000000000050;
      pcVar11 = "OF which is unexpected";
      iVar4 = 0x36;
      if (iVar3 != 0) {
        uVar1 = 0xd00000000000001c;
        pcVar11 = " (no error set).";
        iVar4 = iVar3;
      }
      FUN_1008d5300();
      puVar9 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,piVar8,0,0);
      *(undefined8 *)piVar8 = uVar1;
      *(ulong *)(piVar8 + 2) = (ulong)pcVar11 | 0x8000000000000000;
      piVar8[4] = iVar4;
      FUN_10094e2ec();
      _swift_bridgeObjectRelease((ulong)pcVar11 | 0x8000000000000000);
      _swift_errorRelease(puVar9);
    }
    goto LAB_100949650;
  }
  if (((uVar2 >> 5 & 1) != 0) &&
     ((FUN_100956120(), (uVar6 & 0xff) != 1 || (bVar13 = *(byte *)(param_2 + 0x132), bVar13 == 5))))
  goto LAB_100949650;
  if ((uVar2 >> 4 & 1) != 0) {
    local_70.unknown = (undefined *)0x0;
    _Stack_68 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x28,_Var12);
    pcVar11 = &DAT_100fec438;
    local_78 = param_2;
    FUN_1000f7830(&DAT_100fec438,&DAT_100c83b30);
    puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_78,&local_70,pcVar11,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar14.bridgeObject = (void *)0x8000000100db53c0;
    SVar14.str = (char *)0xd000000000000026;
    SVar16.bridgeObject = puVar9;
    SVar16.str = pcVar11;
    Swift::String::append(SVar14,SVar16);
    SVar15.bridgeObject = (void *)0x2;
    SVar15.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar15,local_70,_Stack_68,0xdb47e0);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100949788);
    (*pcVar5)();
  }
  if ((uVar2 >> 3 & 1) != 0) {
    pcVar5 = thunk_FUN_100937a78;
    FUN_10093d700(thunk_FUN_100937a78,thunk_FUN_10095a9d8,thunk_FUN_10094f284);
    thunk_FUN_10094d97c();
    bVar13 = *(byte *)(param_2 + 0x132);
    if (((ulong)pcVar5 & 0xff) != 0) {
      if (bVar13 == 5) goto LAB_100949650;
      if ((*(byte *)(param_2 + 0x110) >> 3 & 1) == 0) goto LAB_1009494c0;
      thunk_FUN_10094dc20(*(byte *)(param_2 + 0x110) & 0xf7);
      bVar13 = *(byte *)(param_2 + 0x132);
    }
    if (bVar13 == 5) goto LAB_100949650;
  }
LAB_1009494c0:
  if ((uVar2 >> 1 & 1) == 0) {
    if ((uVar2 >> 2 & 1) != 0) {
      thunk_FUN_10094f79c();
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x130) = 1;
    if (1 < bVar13) {
      uVar10 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        thunk_FUN_10094f79c();
        if (((uint)uVar10 & 0xfe) == 2) break;
        if (((uint)uVar10 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1009496d4);
          (*pcVar5)();
        }
      }
    }
  }
LAB_100949650:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100949788 | FUN_100949788 */

/* WARNING: Removing unreachable block (ram,0x000100949a0c) */
/* WARNING: Removing unreachable block (ram,0x000100949a04) */

void FUN_100949788(uint param_1,long param_2)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined1 auStack_48 [24];
  
  uVar5 = param_2 + 0x118;
  _swift_beginAccess(uVar5,auStack_48,1,0);
  bVar7 = *(byte *)(param_2 + 0x132);
  if (bVar7 == 5) {
    return;
  }
  uVar1 = param_1 & 0xff;
  if ((param_1 & 1) != 0) {
    if (1 < bVar7) {
      uVar5 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        FUN_10094f50c();
        if (((uint)uVar5 & 0xfe) == 2) break;
        if (((uint)uVar5 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10094984c);
          (*pcVar4)();
        }
      }
    }
LAB_100949854:
    lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0x10);
    if (((lVar8 != 0) && (-1 < *(int *)(lVar8 + 0x10))) ||
       ((lVar8 = *(long *)(*(long *)(param_2 + 0x20) + 0x18), lVar8 != 0 &&
        (-1 < *(int *)(lVar8 + 0x10))))) {
      if (DAT_100fec610 != -1) {
        _swift_once(&DAT_100fec610,FUN_100901fcc);
      }
      uVar3 = DAT_1010581f0;
      _swift_willThrow();
      _swift_errorRetain(uVar3);
      FUN_10094fd38(uVar3,2,0);
      _swift_errorRelease(uVar3);
    }
    return;
  }
  if ((uVar1 >> 5 & 1) != 0) {
    if (1 < bVar7) {
      uVar5 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
      thunk_FUN_10094dc20();
      while (*(byte *)(param_2 + 0x132) - 3 < 2) {
        FUN_10094f50c();
        if (((uint)uVar5 & 0xfe) == 2) break;
        if (((uint)uVar5 & 0xff) != 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100949928);
          (*pcVar4)();
        }
      }
    }
    goto LAB_100949854;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    if ((uVar1 >> 3 & 1) == 0) goto LAB_1009498dc;
    FUN_10093d58c();
    thunk_FUN_10094d97c();
    bVar7 = *(byte *)(param_2 + 0x132);
    if ((uVar5 & 0xff) != 0) {
      if (bVar7 == 5) {
        return;
      }
      if ((*(byte *)(param_2 + 0x110) >> 3 & 1) == 0) goto LAB_1009498dc;
      thunk_FUN_10094dc20(*(byte *)(param_2 + 0x110) & 0xf7);
      goto LAB_1009498d0;
    }
  }
  else {
    FUN_10093827c();
LAB_1009498d0:
    bVar7 = *(byte *)(param_2 + 0x132);
  }
  if (bVar7 == 5) {
    return;
  }
LAB_1009498dc:
  if ((uVar1 >> 1 & 1) == 0) {
    if ((uVar1 >> 2 & 1) == 0) {
      return;
    }
    FUN_10094f50c();
    return;
  }
  *(undefined1 *)(param_2 + 0x130) = 1;
  if (1 < bVar7) {
    uVar5 = (ulong)(*(byte *)(param_2 + 0x110) & 0xfffffffd);
    thunk_FUN_10094dc20();
    while (*(byte *)(param_2 + 0x132) - 3 < 2) {
      FUN_10094f50c();
      if (((uint)uVar5 & 0xfe) == 2) break;
      if (((uint)uVar5 & 0xff) != 1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009499a4);
        (*pcVar4)();
      }
    }
  }
  lVar8 = *(long *)(*(long *)(param_2 + 0x180) + 0x10);
  if (lVar8 == 0) {
    return;
  }
  iVar2 = *(int *)(lVar8 + 0x10);
  if (iVar2 < 0) {
    return;
  }
  if (*(char *)(*(long *)(param_2 + 0x30) + 0x70) == '\0') {
    puVar9 = *(undefined8 **)(*(long *)(param_2 + 0x30) + 0x10);
    _swift_retain(lVar8);
    FUN_100938124(puVar9,1);
    iVar2 = *(int *)(lVar8 + 0x10);
    if (iVar2 < 0) {
      FUN_1008d5300();
      puVar6 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,puVar9,0,0);
      *puVar9 = 0xd00000000000002e;
      puVar9[1] = 0x8000000100db4d00;
      *(undefined4 *)(puVar9 + 2) = 9;
      _swift_willThrow();
      _swift_unexpectedError(puVar6,"NIOPosix/PipeChannel.swift",0x1a,1,0x76);
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100949a98);
      (*pcVar4)();
    }
  }
  else {
    _swift_retain(lVar8);
  }
  *(undefined4 *)(lVar8 + 0x10) = 0xffffffff;
  FUN_10095d958(iVar2);
  _swift_release(lVar8);
  return;
}



/* Address: 0x100949a98 | FUN_100949a98 */

void FUN_100949a98(undefined8 param_1,char param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_68 [24];
  
  if (param_2 != '\x01') {
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    uVar2 = *(undefined8 *)(param_3 + 0x18);
    _swift_getObjectType(uVar5);
    FUN_100642338();
    _swift_beginAccess(param_3 + 0x20,auStack_68,1,0);
    if (!SBORROW8(*(long *)(param_3 + 0x20),1)) {
      *(long *)(param_3 + 0x20) = *(long *)(param_3 + 0x20) + -1;
      FUN_100642338(uVar5,uVar2);
      if (*(long *)(param_3 + 0x20) == 0) {
        FUN_1009452c4(0,0,param_4);
      }
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100949c20);
    (*pcVar8)();
  }
  uVar3 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar7);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar6 = &DAT_100f1a818;
  _swift_allocObject(&DAT_100f1a818,0x20,7);
  *(long *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_1;
  pcVar8 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(param_1,1);
  (*pcVar8)(thunk_FUN_1008777d0,puVar6,uVar3,lVar1);
  _swift_release(puVar6);
  return;
}



/* Address: 0x100949c20 | FUN_100949c20 */

void FUN_100949c20(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100949c54 | FUN_100949c54 */

void FUN_100949c54(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_100945198(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100949c70 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100949c74 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100949c78 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100949c7c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100949c80 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x100949c84 | FUN_100949c84 */

undefined8 FUN_100949c84(undefined8 param_1,undefined8 param_2)

{
  FUN_100947968(param_2,param_1,&DAT_100f1a1d8);
  return param_2;
}



/* Address: 0x100949cb8 | FUN_100949cb8 */

void FUN_100949cb8(undefined8 param_1,ulong param_2)

{
  FUN_100940db0(param_1,param_2 & 0xffffffff0000ffff);
  return;
}



/* Address: 0x100949cc4 | FUN_100949cc4 */

undefined8 FUN_100949cc4(undefined8 param_1)

{
  FUN_100004594();
  return param_1;
}



/* Address: 0x100949ce8 | FUN_100949ce8 */

undefined8 FUN_100949ce8(undefined8 param_1,undefined8 param_2)

{
  FUN_100934218(param_2,param_1);
  return param_2;
}



/* Address: 0x100949d24 | thunk_FUN_100941a18 */

void thunk_FUN_100941a18(void)

{
  FUN_100941a18();
  return;
}



/* Address: 0x100949d28 | thunk_FUN_1009476c4 */

void thunk_FUN_1009476c4(void)

{
  FUN_1009476c4();
  return;
}



/* Address: 0x100949d2c | thunk_FUN_1009476c4 */

void thunk_FUN_1009476c4(void)

{
  FUN_1009476c4();
  return;
}



/* Address: 0x100949d30 | thunk_FUN_1009476e8 */

void thunk_FUN_1009476e8(void)

{
  FUN_1009476e8();
  return;
}



/* Address: 0x100949d34 | thunk_FUN_1009476e8 */

void thunk_FUN_1009476e8(void)

{
  FUN_1009476e8();
  return;
}



/* Address: 0x100949d38 | thunk_FUN_1009476e8 */

void thunk_FUN_1009476e8(void)

{
  FUN_1009476e8();
  return;
}



/* Address: 0x100949d3c | thunk_FUN_10094756c */

void thunk_FUN_10094756c(void)

{
  long unaff_x20;
  
  FUN_10093f9d0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100949d40 | thunk_FUN_1009486ec */

void thunk_FUN_1009486ec(void)

{
  long unaff_x20;
  
  FUN_100949a98(*(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100949d44 | thunk_FUN_1009476fc */

void thunk_FUN_1009476fc(void)

{
  FUN_1009476fc();
  return;
}



/* Address: 0x100949d48 | thunk_FUN_1009476fc */

void thunk_FUN_1009476fc(void)

{
  FUN_1009476fc();
  return;
}



/* Address: 0x100949d4c | thunk_FUN_1009476fc */

void thunk_FUN_1009476fc(void)

{
  FUN_1009476fc();
  return;
}



/* Address: 0x100949d50 | thunk_FUN_10093fdc4 */

void thunk_FUN_10093fdc4(void)

{
  thunk_FUN_10093fdc4();
  return;
}



/* Address: 0x100949d54 | thunk_FUN_100949c54 */

void thunk_FUN_100949c54(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_100945198(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100949d58 | thunk_FUN_10093eb98 */

void thunk_FUN_10093eb98(void)

{
  thunk_FUN_10093eb98();
  return;
}



/* Address: 0x100949d5c | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  thunk_FUN_100016e14();
  return;
}



/* Address: 0x100949d60 | thunk_FUN_100948590 */

void thunk_FUN_100948590(void)

{
  thunk_FUN_100948590();
  return;
}



/* Address: 0x100949d64 | thunk_FUN_100948590 */

void thunk_FUN_100948590(void)

{
  thunk_FUN_100948590();
  return;
}



/* Address: 0x100949d68 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100949d6c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100949d70 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100949d74 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100949d78 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100949d7c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100949d80 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100949d84 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100949d88 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  thunk_FUN_100653dc4();
  return;
}



/* Address: 0x100949d8c | thunk_FUN_100949c20 */

void thunk_FUN_100949c20(void)

{
  thunk_FUN_100949c20();
  return;
}



/* Address: 0x100949d90 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100949d94 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100949d98 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  thunk_FUN_100653dc4();
  return;
}



/* Address: 0x100949d9c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100949da0 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100949da4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100949da8 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  thunk_FUN_100653eac();
  return;
}



/* Address: 0x100949dac | FUN_100949dac */

undefined * FUN_100949dac(void)

{
  return &DAT_100c85b11;
}


