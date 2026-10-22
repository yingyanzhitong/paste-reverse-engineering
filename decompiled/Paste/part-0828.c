/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100900bf4 | FUN_100900bf4 */

undefined * FUN_100900bf4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fec548;
    FUN_1000f7830(&DAT_100fec548,&DAT_100c83d90);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x100900c64 | FUN_100900c64 */

void FUN_100900c64(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_38;
  
  puVar3 = &local_70;
  puVar6 = &local_70;
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  FUN_1006734a4();
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar3 != (undefined8 *)0x0) {
    lVar7 = 0;
    do {
      puVar1 = (undefined *)(lVar7 + 1);
      if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100900d4c);
        (*pcVar2)();
      }
      uStack_68 = param_1[1];
      local_70 = *param_1;
      uStack_58 = param_1[3];
      uStack_60 = param_1[2];
      uStack_48 = param_1[5];
      local_50 = param_1[4];
      puVar4 = &local_70;
      FUN_1006734d0(&local_70,puVar3);
      lVar7 = lVar7 + 1;
      puVar3 = puVar4;
    } while (puVar4 != (undefined8 *)0x0);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar1 != (undefined *)0x0) {
      puVar5 = puVar1;
      FUN_1009009c4(puVar1,0);
      FUN_1009012b8(&local_70,puVar5 + 0x20,puVar1);
      if (puVar6 != (undefined8 *)puVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100900d50);
        (*pcVar2)();
      }
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar5);
  }
  return;
}



/* Address: 0x100900d54 | FUN_100900d54 */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_100900d54(undefined *param_1,undefined *param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  puVar1 = (undefined *)0x0;
  if (param_3 != 0) {
    puVar1 = (undefined *)(param_4 - param_3);
  }
  if (puVar1 < param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100900e8c);
    (*pcVar3)();
  }
  if (puVar1 < param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100900e90);
    (*pcVar3)();
  }
  puVar2 = param_2 + -(long)param_1;
  if (puVar2 == (undefined *)0x0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  puVar4 = puVar2;
  FUN_100900bf4(puVar2,0);
  lVar5 = 0;
  if (param_3 == 0) {
    FUN_10060f464(0,param_1,0,param_4);
    puVar6 = param_1;
    FUN_10060f464(param_1,param_2,0,param_4);
    if (SCARRY8(lVar5,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100900ea8);
      (*pcVar3)();
    }
    if ((long)(puVar6 + lVar5) < lVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100900eac);
      (*pcVar3)();
    }
  }
  else {
    FUN_10060f464(0,param_1,param_3,param_4);
    puVar6 = param_1;
    FUN_10060f464(param_1,param_2,param_3,param_4);
    if (SCARRY8(lVar5,(long)puVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100900ea0);
      (*pcVar3)();
    }
    puVar7 = puVar6 + lVar5 + -lVar5;
    if ((long)(puVar6 + lVar5) < lVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100900ea4);
      (*pcVar3)();
    }
    if (puVar7 != (undefined *)0x0) {
      if (puVar2 <= puVar7) {
        puVar7 = puVar2;
      }
      _memcpy(puVar4 + 0x20,(void *)(param_3 + lVar5),(size_t)puVar7);
      goto LAB_100900e54;
    }
  }
  puVar7 = (undefined *)0x0;
LAB_100900e54:
  if (SCARRY8((long)param_1,(long)puVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100900e94);
    (*pcVar3)();
  }
  if (param_1 + (long)puVar7 <= puVar1) {
    if (puVar7 == puVar2) {
      return puVar4;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100900e9c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100900e98);
  (*pcVar3)();
}



/* Address: 0x100900eac | FUN_100900eac */

long FUN_100900eac(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 uVar4;
  long lVar5;
  undefined2 uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long *plVar11;
  long lVar12;
  long *unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined1 uVar15;
  ulong uVar16;
  undefined1 auStack_1a0 [80];
  long local_150;
  long local_148;
  long lStack_140;
  long local_138;
  long lStack_130;
  long local_128;
  long lStack_120;
  long local_118;
  long lStack_110;
  undefined1 local_108;
  long local_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long local_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined1 local_c0;
  long local_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long local_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined1 local_70;
  
  uVar14 = (ulong)*(uint *)(unaff_x20 + 8);
  uVar6 = *(undefined2 *)((long)unaff_x20 + 0x44);
  uVar4 = *(undefined1 *)((long)unaff_x20 + 0x46);
  uVar15 = *(undefined1 *)((long)unaff_x20 + 0x47);
  uVar13 = unaff_x20[9];
  if (param_2 != (long *)0x0) {
    lVar12 = param_3;
    if (param_3 == 0) goto LAB_100901168;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009011cc);
      (*pcVar3)();
    }
    if (uVar13 >> 0x38 != 2) {
      lVar8 = unaff_x20[1];
      lVar9 = *unaff_x20;
      uVar16 = uVar13 & 0xffffffff;
      uVar10 = *(ulong *)(lVar9 + 0x10);
      if ((*(uint *)((long)unaff_x20 + 0x44) >> 0x18 & 1) == 0) {
        if ((uVar13 >> 0x38 & 1) == 0) {
          lVar12 = uVar16 - uVar14;
        }
        else {
          lVar5 = (uVar14 - uVar16) + uVar10;
          lVar12 = -lVar5;
          if (SBORROW8(0,lVar5)) {
LAB_1009011cc:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009011d0);
            (*pcVar3)();
          }
        }
      }
      else {
        uVar2 = uVar10;
        if ((uVar13 & 0x100000000000000) != 0) {
          uVar2 = 0;
        }
        lVar12 = (uVar16 - uVar14) + uVar2;
      }
      if (-1 < lVar12) {
        if (uVar10 <= uVar14) {
LAB_1009011c0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009011c4);
          (*pcVar3)();
        }
        plVar7 = (long *)(lVar9 + 0x20 + uVar14 * 0x50);
        lVar5 = *plVar7;
        lStack_98 = plVar7[4];
        lStack_a0 = plVar7[3];
        lStack_88 = plVar7[6];
        local_90 = plVar7[5];
        lStack_78 = plVar7[8];
        lStack_80 = plVar7[7];
        local_70 = (undefined1)plVar7[9];
        lStack_a8 = plVar7[2];
        local_b0 = plVar7[1];
        if (lVar5 == 0) {
LAB_1009011d0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009011d4);
          (*pcVar3)();
        }
        lStack_e8 = plVar7[4];
        lStack_f0 = plVar7[3];
        lStack_d8 = plVar7[6];
        local_e0 = plVar7[5];
        lStack_c8 = plVar7[8];
        lStack_d0 = plVar7[7];
        local_c0 = (undefined1)plVar7[9];
        lStack_f8 = plVar7[2];
        local_100 = plVar7[1];
        uVar14 = uVar10 - 1 & uVar14 + 1;
        if (uVar14 >> 0x20 != 0) {
LAB_1009011c4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009011c8);
          (*pcVar3)();
        }
        *param_2 = lVar5;
        uVar15 = lVar8 <= (long)uVar14;
        param_2[4] = lStack_e8;
        param_2[3] = lStack_f0;
        param_2[6] = lStack_d8;
        param_2[5] = local_e0;
        param_2[8] = lStack_c8;
        param_2[7] = lStack_d0;
        *(undefined1 *)(param_2 + 9) = local_c0;
        param_2[2] = lStack_f8;
        param_2[1] = local_100;
        if (param_3 != 1) {
          lVar12 = 1;
          plVar7 = param_2 + 0xb;
          do {
            lStack_130 = lStack_98;
            local_138 = lStack_a0;
            lStack_120 = lStack_88;
            local_128 = local_90;
            lStack_110 = lStack_78;
            local_118 = lStack_80;
            local_108 = local_70;
            lStack_140 = lStack_a8;
            local_148 = local_b0;
            local_150 = lVar5;
            FUN_100901d00(&local_150,auStack_1a0);
            uVar10 = *(ulong *)(lVar9 + 0x10);
            if ((bool)uVar15 == false) {
              if ((uVar13 >> 0x38 & 1) == 0) {
                lVar5 = uVar16 - uVar14;
              }
              else {
                lVar1 = (uVar14 - uVar16) + uVar10;
                lVar5 = -lVar1;
                if (SBORROW8(0,lVar1)) goto LAB_1009011cc;
              }
            }
            else {
              uVar2 = uVar10;
              if ((uVar13 & 0x100000000000000) != 0) {
                uVar2 = 0;
              }
              lVar5 = (uVar16 - uVar14) + uVar2;
            }
            if (lVar5 < 0) {
              uVar4 = 0xff;
              uVar6 = 0xffff;
              goto LAB_100901168;
            }
            if (uVar10 <= uVar14) goto LAB_1009011c0;
            plVar11 = (long *)(lVar9 + 0x20 + uVar14 * 0x50);
            lVar5 = *plVar11;
            lStack_98 = plVar11[4];
            lStack_a0 = plVar11[3];
            lStack_88 = plVar11[6];
            local_90 = plVar11[5];
            lStack_78 = plVar11[8];
            lStack_80 = plVar11[7];
            local_70 = (undefined1)plVar11[9];
            lStack_a8 = plVar11[2];
            local_b0 = plVar11[1];
            if (lVar5 == 0) goto LAB_1009011d0;
            lStack_e8 = plVar11[4];
            lStack_f0 = plVar11[3];
            lStack_d8 = plVar11[6];
            local_e0 = plVar11[5];
            lStack_c8 = plVar11[8];
            lStack_d0 = plVar11[7];
            local_c0 = (undefined1)plVar11[9];
            lStack_f8 = plVar11[2];
            local_100 = plVar11[1];
            uVar14 = uVar10 + 0x1ffffffff & uVar14 + 1;
            if (uVar14 >> 0x20 != 0) goto LAB_1009011c4;
            lVar12 = lVar12 + 1;
            plVar7[-1] = lVar5;
            uVar15 = lVar8 <= (long)uVar14;
            plVar7[5] = lStack_d8;
            plVar7[4] = local_e0;
            plVar7[7] = lStack_c8;
            plVar7[6] = lStack_d0;
            *(undefined1 *)(plVar7 + 8) = local_c0;
            plVar7[1] = lStack_f8;
            *plVar7 = local_100;
            plVar7[3] = lStack_e8;
            plVar7[2] = lStack_f0;
            plVar7 = plVar7 + 10;
          } while (param_3 != lVar12);
        }
        lStack_130 = lStack_98;
        local_138 = lStack_a0;
        lStack_120 = lStack_88;
        local_128 = local_90;
        lStack_110 = lStack_78;
        local_118 = lStack_80;
        local_108 = local_70;
        lStack_140 = lStack_a8;
        local_148 = local_b0;
        local_150 = lVar5;
        FUN_100901d00(&local_150,auStack_1a0);
        uVar4 = 0xff;
        uVar6 = 0xffff;
        lVar12 = param_3;
        goto LAB_100901168;
      }
    }
  }
  lVar12 = 0;
LAB_100901168:
  lVar8 = *unaff_x20;
  lVar5 = unaff_x20[3];
  lVar9 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = lVar8;
  param_1[3] = lVar5;
  param_1[2] = lVar9;
  lVar8 = unaff_x20[4];
  lVar5 = unaff_x20[7];
  lVar9 = unaff_x20[6];
  param_1[5] = unaff_x20[5];
  param_1[4] = lVar8;
  param_1[7] = lVar5;
  param_1[6] = lVar9;
  *(int *)(param_1 + 8) = (int)uVar14;
  *(undefined2 *)((long)param_1 + 0x44) = uVar6;
  *(undefined1 *)((long)param_1 + 0x46) = uVar4;
  *(undefined1 *)((long)param_1 + 0x47) = uVar15;
  param_1[9] = uVar13;
  return lVar12;
}



/* Address: 0x1009011d4 | FUN_1009011d4 */

ulong FUN_1009011d4(ulong *param_1,ulong *param_2,ulong param_3,ulong param_4,ulong param_5,
                   ulong param_6,byte param_7)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  if (param_2 != (ulong *)0x0) {
    uVar3 = param_3;
    if (param_3 == 0) {
      uVar4 = 0;
      goto LAB_100901220;
    }
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009012b4);
      (*pcVar2)();
    }
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009012b8);
      (*pcVar2)();
    }
    if (param_5 != 0) {
      lVar6 = 0;
      if (param_4 != 0) {
        lVar6 = (long)(param_6 - param_5) / (long)param_4;
      }
      if (lVar6 != 0) {
        if ((long)param_4 < 0) {
LAB_1009012a4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1009012a8);
          (*pcVar2)();
        }
        *param_2 = param_5;
        param_2[1] = param_5 + param_4;
        if (param_3 == 1) {
          uVar4 = 1;
        }
        else {
          param_2 = param_2 + 3;
          uVar5 = 1;
          uVar1 = 0;
          if (param_4 != 0) {
            uVar1 = (param_6 - param_5) / param_4;
          }
          do {
            uVar3 = uVar1;
            uVar4 = uVar1;
            if (uVar1 == uVar5) break;
            lVar6 = uVar5 * param_4;
            if (SUB168(SEXT816((long)uVar5) * SEXT816((long)param_4),8) != lVar6 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009012ac);
              (*pcVar2)();
            }
            uVar5 = uVar5 + 1;
            lVar7 = uVar5 * param_4;
            if (SUB168(SEXT816((long)uVar5) * SEXT816((long)param_4),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1009012b0);
              (*pcVar2)();
            }
            if (lVar7 < lVar6) goto LAB_1009012a4;
            param_2[-1] = param_5 + lVar6;
            *param_2 = param_5 + lVar7;
            param_2 = param_2 + 2;
            uVar3 = param_3;
            uVar4 = param_3;
          } while (param_3 != uVar5);
        }
        goto LAB_100901220;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0;
LAB_100901220:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6;
  *(byte *)(param_1 + 3) = param_7 & 1;
  param_1[4] = uVar4;
  return uVar3;
}



/* Address: 0x1009012b8 | FUN_1009012b8 */

long FUN_1009012b8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 uVar7;
  code *pcVar8;
  uint *puVar9;
  uint *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *unaff_x20;
  long lVar15;
  uint *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_88;
  
  local_88 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar14 = *unaff_x20;
  uVar17 = unaff_x20[1];
  uVar4 = *(undefined4 *)(unaff_x20 + 1);
  uVar12 = unaff_x20[2];
  uVar18 = unaff_x20[3];
  uVar5 = *(undefined4 *)(unaff_x20 + 3);
  uVar13 = unaff_x20[4];
  uVar2 = *(undefined4 *)(unaff_x20 + 5);
  uVar3 = *(undefined4 *)((long)unaff_x20 + 0x2c);
  uVar7 = unaff_x20[5];
  uStack_b8 = unaff_x20[1];
  local_c0 = *unaff_x20;
  local_a8 = unaff_x20[3];
  local_b0 = unaff_x20[2];
  uStack_98 = unaff_x20[5];
  local_a0 = unaff_x20[4];
  puVar9 = (uint *)&local_c0;
  FUN_1006734a4();
  if (param_2 != (undefined8 *)0x0) {
    lVar11 = param_3;
    if (param_3 == 0) goto LAB_1009013f0;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10090146c);
      (*pcVar8)();
    }
    if (puVar9 != (uint *)0x0) {
      lVar15 = 0;
      puVar16 = puVar9;
      do {
        uVar19 = *(undefined8 *)(puVar16 + 1);
        puVar10 = puVar16;
        FUN_100673518();
        uVar6 = *puVar16;
        lVar11 = 0;
        FUN_100673548();
        if (SBORROW8((ulong)uVar6,lVar11)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100901468);
          (*pcVar8)();
        }
        lVar1 = 0;
        if (puVar10 != (uint *)0x0) {
          lVar1 = (long)puVar10 + ((ulong)uVar6 - lVar11);
        }
        uStack_b8 = CONCAT44(uStack_b8._4_4_,uVar4);
        local_a8 = CONCAT44(local_a8._4_4_,uVar5);
        puVar9 = (uint *)&local_c0;
        local_c0 = uVar14;
        local_b0 = uVar12;
        local_a0 = uVar13;
        uStack_98 = uVar7;
        FUN_1006734d0(puVar9,puVar16);
        *param_2 = uVar19;
        param_2[1] = puVar10;
        param_2[2] = lVar1;
        *(undefined1 *)(param_2 + 3) = 0;
        lVar11 = param_3;
        if (param_3 + -1 == lVar15) break;
        param_2 = param_2 + 4;
        lVar15 = lVar15 + 1;
        puVar16 = puVar9;
        lVar11 = lVar15;
      } while (puVar9 != (uint *)0x0);
      goto LAB_1009013f0;
    }
  }
  lVar11 = 0;
LAB_1009013f0:
  *param_1 = uVar14;
  param_1[1] = uVar17;
  param_1[2] = uVar12;
  param_1[3] = uVar18;
  param_1[4] = uVar13;
  *(undefined4 *)(param_1 + 5) = uVar2;
  *(undefined4 *)((long)param_1 + 0x2c) = uVar3;
  param_1[6] = puVar9;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return lVar11;
}



/* Address: 0x100901470 | FUN_100901470 */

undefined8 FUN_100901470(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fec530;
  FUN_1000f7830(&DAT_100fec530,&DAT_100c83d78);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1009014b8 | FUN_1009014b8 */

ulong FUN_1009014b8(ulong *param_1,ulong *param_2,ulong param_3)

{
  code *pcVar1;
  ulong *unaff_x20;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_f0 [80];
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  ulong uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  if (param_2 == (ulong *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009015d0);
        (*pcVar1)();
      }
      uVar2 = *unaff_x20;
      if (uVar2 != 0) {
        uVar3 = 0;
        do {
          uStack_88 = unaff_x20[4];
          uStack_90 = unaff_x20[3];
          uStack_78 = unaff_x20[6];
          local_80 = unaff_x20[5];
          uStack_70 = unaff_x20[7];
          uStack_68 = (undefined1)unaff_x20[8];
          uStack_5f = *(undefined8 *)((long)unaff_x20 + 0x49);
          local_67 = (undefined7)*(undefined8 *)((long)unaff_x20 + 0x41);
          uStack_60 = (undefined1)((ulong)*(undefined8 *)((long)unaff_x20 + 0x41) >> 0x38);
          uStack_98 = unaff_x20[2];
          local_a0 = unaff_x20[1];
          if ((uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU)) == uVar3) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1009015cc);
            (*pcVar1)();
          }
          uVar5 = unaff_x20[4];
          uVar4 = unaff_x20[3];
          uVar6 = unaff_x20[5];
          uVar9 = unaff_x20[8];
          uVar8 = unaff_x20[7];
          param_2[5] = unaff_x20[6];
          param_2[4] = uVar6;
          param_2[7] = uVar9;
          param_2[6] = uVar8;
          uVar7 = *(undefined8 *)((long)unaff_x20 + 0x41);
          *(undefined8 *)((long)param_2 + 0x41) = *(undefined8 *)((long)unaff_x20 + 0x49);
          *(undefined8 *)((long)param_2 + 0x39) = uVar7;
          uVar6 = unaff_x20[1];
          param_2[1] = unaff_x20[2];
          *param_2 = uVar6;
          param_2[3] = uVar5;
          param_2[2] = uVar4;
          if (param_3 - 1 == uVar3) {
            FUN_1009015d0(&local_a0,auStack_f0);
            uVar2 = param_3;
            break;
          }
          FUN_1009015d0(&local_a0,auStack_f0);
          uVar3 = uVar3 + 1;
          param_2 = param_2 + 10;
        } while (uVar2 != uVar3);
      }
    }
  }
  uVar3 = unaff_x20[4];
  uVar5 = unaff_x20[7];
  uVar4 = unaff_x20[6];
  param_1[5] = unaff_x20[5];
  param_1[4] = uVar3;
  param_1[7] = uVar5;
  param_1[6] = uVar4;
  uVar3 = unaff_x20[8];
  param_1[9] = unaff_x20[9];
  param_1[8] = uVar3;
  *(char *)(param_1 + 10) = (char)unaff_x20[10];
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  param_1[1] = unaff_x20[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  param_1[0xb] = uVar2;
  return uVar2;
}



/* Address: 0x1009015d0 | FUN_1009015d0 */

undefined8 FUN_1009015d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fec538;
  FUN_1000f7830(&DAT_100fec538,&DAT_100c83d80);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100901620 | FUN_100901620 */

void FUN_100901620(ulong *param_1,ulong *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  ulong uVar6;
  ulong *unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar8 = unaff_x20[4];
  if (param_2 == (ulong *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = param_3;
    if (param_3 != 0) {
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100901718);
        (*pcVar5)();
      }
      uVar6 = uVar1;
      if (uVar1 != 0) {
        uVar7 = 0;
        do {
          if ((uVar1 & ((long)uVar1 >> 0x3f ^ 0xffffffffffffffffU)) == uVar7) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100901714);
            (*pcVar5)();
          }
          *param_2 = uVar3;
          param_2[1] = uVar2;
          param_2[2] = uVar4;
          param_2[3] = uVar8;
          if (param_3 - 1 == uVar7) {
            FUN_100901b4c(uVar3,uVar2,uVar4,uVar8);
            uVar6 = param_3;
            break;
          }
          param_2 = param_2 + 4;
          FUN_100901b4c(uVar3,uVar2,uVar4,uVar8);
          uVar7 = uVar7 + 1;
        } while (uVar1 != uVar7);
      }
    }
  }
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar8;
  param_1[5] = uVar6;
  return;
}



/* Address: 0x100901718 | FUN_100901718 */

void FUN_100901718(undefined1 *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puVar10;
  long lVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined1 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong local_98;
  ulong local_90;
  ulong uStack_88;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar16 = *param_2;
  uVar4 = param_2[1];
  uVar17 = param_2[2];
  uVar5 = param_2[3];
  uVar15 = param_2[4];
  uVar19 = param_2[5];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_98 = param_2[3];
  local_a0 = param_2[2];
  uStack_88 = param_2[5];
  local_90 = param_2[4];
  puVar8 = &local_b0;
  FUN_1006734a4();
  if (puVar8 == (ulong *)0x0) {
    uVar13 = 0;
    uVar14 = 0;
    uVar9 = 0xf000000000000007;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    uVar9 = 0xf000000000000007;
    do {
      while( true ) {
        uVar18 = *(uint *)((long)puVar8 + 4);
        uVar2 = (uint)puVar8[1];
        puVar10 = puVar8;
        FUN_100673518();
        uVar6 = *puVar8;
        lVar11 = 0;
        FUN_100673548();
        if (SBORROW8((ulong)(uint)uVar6,lVar11)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100901b38);
          (*pcVar7)();
        }
        puVar1 = (ulong *)0x0;
        if (puVar10 != (ulong *)0x0) {
          puVar1 = (ulong *)((long)puVar10 + ((ulong)(uint)uVar6 - lVar11));
        }
        uStack_a8 = CONCAT44(uStack_a8._4_4_,(int)uVar4);
        local_98 = CONCAT44(local_98._4_4_,(int)uVar5);
        puVar12 = &local_b0;
        local_b0 = uVar16;
        local_a0 = uVar17;
        local_90 = uVar15;
        uStack_88 = uVar19;
        FUN_1006734d0(puVar12,puVar8);
        puVar8 = puVar12;
        if (uVar18 == 0) break;
        if (uVar18 == 0x29) {
          if (uVar2 == 0x24) {
            if ((puVar10 == (ulong *)0x0) || ((ulong)((long)puVar1 - (long)puVar10) < 4)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100901b3c);
              (*pcVar7)();
            }
            local_b0 = local_b0 & 0xffffffff00000000;
            _memcpy(&local_b0,puVar10,(long)puVar1 - (long)puVar10);
            uVar2 = (uint)local_b0;
            if (DAT_100feeba8 != -1) {
              _swift_once(&DAT_100feeba8,FUN_10095d2f4);
            }
            uVar18 = DAT_10105821c;
            if (DAT_100feebc8 != -1) {
              _swift_once(&DAT_100feebc8,FUN_10095d324);
            }
            uVar18 = uVar18 & uVar2;
            if (DAT_101058214 == uVar18) {
joined_r0x00010090191c:
              uVar14 = 2;
            }
            else {
              if (DAT_100feebc0 != -1) {
                _swift_once(&DAT_100feebc0,FUN_10095d30c);
              }
              if (DAT_101058210 == uVar18) {
                uVar14 = 1;
              }
              else {
LAB_10090197c:
                if (DAT_100feebd0 != -1) {
                  _swift_once(&DAT_100feebd0,FUN_10095d33c);
                }
                uVar14 = 3;
                if (DAT_101058218 != uVar18) {
                  uVar14 = 0;
                }
              }
            }
          }
          else {
            if (DAT_100feebb0 != -1) {
              _swift_once(&DAT_100feebb0,FUN_10095d36c);
            }
            if (uVar2 == DAT_101058220) {
              if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100901b4c);
                (*pcVar7)();
              }
              uVar6 = *puVar10;
              uVar3 = puVar10[1];
              uVar18 = (uint)puVar10[2];
              FUN_1005d8534(uVar9,uVar13);
              uVar9 = 0x1e00;
              FUN_1006677c8(0x1e00,uVar6,uVar3,0,0,0xe000000000000000);
              goto LAB_100901ab0;
            }
          }
        }
joined_r0x00010090191c:
        if (puVar12 == (ulong *)0x0) goto LAB_100901ad8;
      }
      if (uVar2 == 0x1a) {
        if (puVar10 == (ulong *)0x0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100901b48);
          (*pcVar7)();
        }
        uVar18 = (uint)*puVar10;
        uVar6 = puVar10[1];
        FUN_1005d8534(uVar9,uVar13);
        uVar9 = (ulong)(uint)uVar6 << 0x20 | 0x200;
        FUN_100667770(uVar9,0,0,0xe000000000000000);
LAB_100901ab0:
        uVar13 = (ulong)uVar18;
        goto joined_r0x00010090191c;
      }
      if (uVar2 != 0x1b) goto joined_r0x00010090191c;
      if ((puVar10 == (ulong *)0x0) || (puVar1 == puVar10)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100901b40);
        (*pcVar7)();
      }
      uVar6 = *puVar10;
      if (DAT_100feeba8 != -1) {
        _swift_once(&DAT_100feeba8,FUN_10095d2f4);
      }
      uVar18 = DAT_10105821c;
      if (DAT_100feebc8 != -1) {
        _swift_once(&DAT_100feebc8,FUN_10095d324);
      }
      uVar18 = uVar18 & (byte)uVar6;
      if (DAT_101058214 == uVar18) goto joined_r0x00010090191c;
      if (DAT_100feebc0 != -1) {
        _swift_once(&DAT_100feebc0,FUN_10095d30c);
      }
      if (DAT_101058210 != uVar18) goto LAB_10090197c;
      uVar14 = 1;
    } while (puVar12 != (ulong *)0x0);
  }
LAB_100901ad8:
  *param_1 = uVar14;
  *(ulong *)(param_1 + 8) = uVar9;
  *(ulong *)(param_1 + 0x10) = uVar13;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = 1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100901b4c | FUN_100901b4c */

void FUN_100901b4c(void)

{
  long in_x3;
  
  if (in_x3 == 1) {
    return;
  }
  FUN_100656200();
  _swift_retain(in_x3);
  return;
}



/* Address: 0x100901b7c | FUN_100901b7c */

undefined1  [16] FUN_100901b7c(void)

{
  return ZEXT816(0x100f13f30);
}



/* Address: 0x100901b8c | FUN_100901b8c */

void FUN_100901b8c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100901ba0 | FUN_100901ba0 */

int FUN_100901ba0(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x100901bc0 | FUN_100901bc0 */

void FUN_100901bc0(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x19) = uVar1;
  return;
}



/* Address: 0x100901bf0 | FUN_100901bf0 */

undefined1  [16] FUN_100901bf0(void)

{
  return ZEXT816(0x100f13fb0);
}



/* Address: 0x100901c00 | FUN_100901c00 */

undefined1  [16] FUN_100901c00(void)

{
  return ZEXT816(0x100f14038);
}



/* Address: 0x100901c10 | FUN_100901c10 */

undefined1  [16] FUN_100901c10(void)

{
  return ZEXT816(0x100f140b8);
}



/* Address: 0x100901c20 | FUN_100901c20 */

void FUN_100901c20(void)

{
  FUN_100134584(&DAT_100fec558,&DAT_100fec560,&DAT_100c83e10,
                PTR_Swift__Swift__IndexingIterator<undefined>_>Swift__IteratorProtocol_100ead1e0);
  return;
}



/* Address: 0x100901c54 | thunk_FUN_100901c58 */

void thunk_FUN_100901c58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec568 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83e18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83e18,&DAT_100f140b8);
  DAT_100fec568 = pTVar1;
  return;
}



/* Address: 0x100901c58 | FUN_100901c58 */

void FUN_100901c58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec568 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83e18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83e18,&DAT_100f140b8);
  DAT_100fec568 = pTVar1;
  return;
}



/* Address: 0x100901c98 | FUN_100901c98 */

void FUN_100901c98(void)

{
  FUN_100134584(&DAT_100fec570,&DAT_100fec578,&DAT_100c83e80,
                PTR_Swift__Swift__DefaultIndices<undefined>_>Swift__Collection_100eabec0);
  return;
}



/* Address: 0x100901ccc | FUN_100901ccc */

void FUN_100901ccc(void)

{
  FUN_100134584(&DAT_100fec580,&DAT_100fec588,&DAT_100c83e88,
                PTR_Swift__Swift__Slice<undefined>_>Swift__Collection_100eadcb8);
  return;
}



/* Address: 0x100901d00 | FUN_100901d00 */

undefined8 FUN_100901d00(undefined8 param_1,undefined8 param_2)

{
  FUN_1009344f0(param_2,param_1);
  return param_2;
}



/* Address: 0x100901d3c | FUN_100901d3c */

undefined1  [16] FUN_100901d3c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100901e24);
    (*pcVar2)();
  }
  uVar3 = 0;
  if (param_2 != 0) {
    uVar8 = param_3 - param_1;
    if (param_2 - 1U <= param_3 - param_1) {
      uVar8 = param_2 - 1U;
    }
    if ((param_1 ^ 0x7fffffffffffffff) <= uVar8) {
      uVar8 = param_1 ^ 0x7fffffffffffffff;
    }
    uVar8 = uVar8 + 1;
    if (uVar8 < 9) {
      lVar4 = 0;
      uVar8 = param_1;
    }
    else {
      uVar1 = 8;
      if ((uVar8 & 7) != 0) {
        uVar1 = uVar8 & 7;
      }
      lVar4 = uVar8 - uVar1;
      lVar6 = 0;
      lVar7 = 0;
      lVar9 = 0;
      lVar10 = 0;
      lVar11 = 0;
      lVar12 = 0;
      lVar13 = 0;
      lVar5 = lVar4;
      uVar8 = param_1;
      do {
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 1;
        lVar6 = lVar6 + 1;
        lVar7 = lVar7 + 1;
        lVar10 = lVar10 + 1;
        lVar11 = lVar11 + 1;
        lVar12 = lVar12 + 1;
        lVar13 = lVar13 + 1;
        lVar5 = lVar5 + -8;
      } while (lVar5 != 0);
      uVar8 = lVar12 + lVar10 + lVar6 + uVar8 + lVar13 + lVar11 + lVar7 + lVar9;
    }
    lVar5 = lVar4 + param_1 + -0x7fffffffffffffff;
    param_3 = (lVar4 + param_1) - param_3;
    param_2 = param_2 - lVar4;
    while (param_3 != 0) {
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100901e20);
        (*pcVar2)();
      }
      uVar8 = uVar8 + 1;
      lVar5 = lVar5 + 1;
      param_3 = param_3 + 1;
      param_2 = param_2 + -1;
      if (param_2 == 0) {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar8;
        return auVar14;
      }
    }
    param_1 = 0;
    uVar3 = 1;
  }
  auVar15._8_8_ = uVar3;
  auVar15._0_8_ = param_1;
  return auVar15;
}



/* Address: 0x100901e24 | thunk_FUN_1008ffaa0 */

void thunk_FUN_1008ffaa0(void)

{
  FUN_1008ffaa0();
  return;
}



/* Address: 0x100901e28 | FUN_100901e28 */

void FUN_100901e28(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_100900410();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100901e6c | FUN_100901e6c */

void FUN_100901e6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  uVar7 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar7;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100901e90 | FUN_100901e90 */

int FUN_100901e90(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 0x12)) {
    uVar1 = *(byte *)(param_1 + 0x12) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100901ee4 | FUN_100901ee4 */

void FUN_100901ee4(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 9) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 1;
    }
  }
  return;
}



/* Address: 0x100901f3c | FUN_100901f3c */

undefined1  [16] FUN_100901f3c(void)

{
  return ZEXT816(0x100f14298);
}



/* Address: 0x100901f4c | FUN_100901f4c */

void FUN_100901f4c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_101058198,3);
  return;
}



/* Address: 0x100901f5c | FUN_100901f5c */

void FUN_100901f5c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581a0,0xb);
  return;
}



/* Address: 0x100901f6c | FUN_100901f6c */

void FUN_100901f6c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581a8,10);
  return;
}



/* Address: 0x100901f7c | FUN_100901f7c */

void FUN_100901f7c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_101058188,0);
  return;
}



/* Address: 0x100901f8c | FUN_100901f8c */

void FUN_100901f8c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581c8,6);
  return;
}



/* Address: 0x100901f9c | FUN_100901f9c */

void FUN_100901f9c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_101058190,0xc);
  return;
}



/* Address: 0x100901fac | FUN_100901fac */

void FUN_100901fac(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581d8,5);
  return;
}



/* Address: 0x100901fbc | FUN_100901fbc */

void FUN_100901fbc(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_101058180,2);
  return;
}



/* Address: 0x100901fcc | FUN_100901fcc */

void FUN_100901fcc(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581f0,1);
  return;
}



/* Address: 0x100901fdc | FUN_100901fdc */

void FUN_100901fdc(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581d0,4);
  return;
}



/* Address: 0x100901fec | FUN_100901fec */

void FUN_100901fec(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581b0,9);
  return;
}



/* Address: 0x100901ffc | FUN_100901ffc */

void FUN_100901ffc(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581c0,8);
  return;
}



/* Address: 0x10090200c | FUN_10090200c */

void FUN_10090200c(undefined8 param_1)

{
  FUN_10090201c(param_1,&DAT_1010581b8,7);
  return;
}



/* Address: 0x10090201c | FUN_10090201c */

void FUN_10090201c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  FUN_1008db6c4();
  puVar1 = &DAT_100eeb710;
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_2 = puVar1;
  *param_1 = param_3;
  *(undefined1 *)(param_1 + 1) = 3;
  return;
}



/* Address: 0x100902068 | FUN_100902068 */

void FUN_100902068(undefined8 param_1)

{
  FUN_100902088(param_1,&DAT_1010581e8,2);
  return;
}



/* Address: 0x100902078 | FUN_100902078 */

void FUN_100902078(undefined8 param_1)

{
  FUN_100902088(param_1,&DAT_1010581e0,0);
  return;
}



/* Address: 0x100902088 | FUN_100902088 */

void FUN_100902088(undefined1 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined *puVar1;
  
  FUN_1009020cc();
  puVar1 = &DAT_100eef640;
  _swift_allocError(&DAT_100eef640,param_1,0,0);
  *param_2 = puVar1;
  *param_1 = param_3;
  return;
}



/* Address: 0x1009020cc | FUN_1009020cc */

void FUN_1009020cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fec598 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a870,&DAT_100eef640);
  DAT_100fec598 = pTVar1;
  return;
}



/* Address: 0x10090210c | FUN_10090210c */

void FUN_10090210c(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar3 = &DAT_100fec730;
  FUN_1000f7830(&DAT_100fec730,&DAT_100c84018);
  _swift_allocObject();
  puVar4 = &DAT_100fec738;
  FUN_1000f7830(&DAT_100fec738,&DAT_100c84020);
  _swift_allocObject();
  *(pthread_key_t *)(puVar4 + 0x10) = 0;
  iVar2 = _pthread_key_create((pthread_key_t *)(puVar4 + 0x10),_swift_release);
  if (iVar2 == 0) {
    *(undefined **)(puVar3 + 0x10) = puVar4;
    DAT_1010581f8 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100902190);
  (*pcVar1)();
}



/* Address: 0x100902190 | FUN_100902190 */

void FUN_100902190(char *param_1,void *param_2,undefined8 param_3)

{
  addrinfo *paVar1;
  code *pcVar2;
  int iVar3;
  ContiguousArray<__int8> CVar4;
  ContiguousArray<__int8> CVar5;
  UnsafePointer<__int8> cString;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  String SVar11;
  String SVar12;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  addrinfo local_90;
  addrinfo *local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_60 = (addrinfo *)0x0;
  local_90.ai_canonname = (char *)0x0;
  local_90.ai_addrlen = 0;
  local_90._20_4_ = 0;
  local_90.ai_next = (addrinfo *)0x0;
  local_90.ai_addr = (sockaddr *)0x0;
  local_90.ai_flags = 0;
  local_90.ai_family = 0;
  local_90.ai_socktype = 1;
  local_90.ai_protocol = 6;
  local_c0 = param_3;
  SVar11 = Swift::CustomStringConvertible::get_description();
  SVar12.bridgeObject = param_2;
  SVar12.str = param_1;
  CVar4 = Swift::String::get_utf8CString(SVar12);
  CVar5 = Swift::String::get_utf8CString(SVar11);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  iVar3 = _getaddrinfo(CVar4.unknown + 0x20,CVar5.unknown + 0x20,&local_90,&local_60);
  _swift_release(CVar4.unknown);
  _swift_release();
  paVar1 = local_60;
  if (iVar3 == 0) {
    if (local_60 != (addrinfo *)0x0) {
      FUN_100902424(local_60,param_1,param_2);
      _freeaddrinfo(paVar1);
      goto LAB_10090236c;
    }
    FUN_1008d5ed0();
    puVar6 = &DAT_100ef2820;
    _swift_allocError(&DAT_100ef2820,CVar5.unknown,0,0);
    *(undefined8 *)((long)CVar5.unknown + 8) = 0;
    *(undefined8 *)((long)CVar5.unknown + 0x10) = 0;
    *(undefined8 *)CVar5.unknown = 0;
    *(undefined1 *)((long)CVar5.unknown + 0x18) = 2;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar9 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType(uVar7);
    puVar8 = &DAT_100f14360;
    _swift_allocObject(&DAT_100f14360,0x20,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcVar10 = *(code **)(lVar9 + 0x18);
    _swift_retain();
    _swift_errorRetain(puVar6);
    pcVar2 = thunk_FUN_100903d44;
  }
  else {
    cString.unknown = _gai_strerror(iVar3);
    if (cString.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100902424);
      (*pcVar2)();
    }
    SVar11 = Swift::String::init(cString);
    _swift_bridgeObjectRetain(param_2);
    FUN_100317e68(&local_c0,param_1,param_2,param_3,(long)iVar3,SVar11.str,SVar11.bridgeObject);
    FUN_100903d04();
    puVar6 = &DAT_100ef2918;
    _swift_allocError(&DAT_100ef2918,param_1,0,0);
    *(undefined8 *)(param_1 + 8) = uStack_b8;
    *(undefined8 *)param_1 = local_c0;
    *(undefined8 *)(param_1 + 0x18) = uStack_a8;
    *(undefined8 *)(param_1 + 0x10) = local_b0;
    *(undefined8 *)(param_1 + 0x28) = uStack_98;
    *(undefined8 *)(param_1 + 0x20) = local_a0;
    uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
    lVar9 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType(uVar7);
    puVar8 = &DAT_100f14338;
    _swift_allocObject(&DAT_100f14338,0x20,7);
    *(long *)(puVar8 + 0x10) = unaff_x20;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    pcVar10 = *(code **)(lVar9 + 0x18);
    _swift_retain();
    _swift_errorRetain(puVar6);
    pcVar2 = FUN_100903d44;
  }
  (*pcVar10)(pcVar2,puVar8,uVar7,lVar9);
  _swift_release(puVar8);
  _swift_errorRelease(puVar6);
LAB_10090236c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100902424 | FUN_100902424 */

void FUN_100902424(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  ulong uVar10;
  
  puVar1 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar7 = param_1;
  do {
    puVar6 = (undefined8 *)puVar7[4];
    if (*(int *)((long)puVar7 + 4) == 0x1e) {
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1009026f4);
        (*pcVar9)();
      }
      uVar2 = *puVar6;
      FUN_1006677c8(uVar2,puVar6[1],puVar6[2],*(undefined4 *)(puVar6 + 3),param_2,param_3);
      _swift_bridgeObjectRetain(param_3);
      puVar6 = puVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      param_1 = puVar1;
      if (((ulong)puVar6 & 1) == 0) {
        param_1 = (undefined8 *)0x0;
        FUN_100902a24(0,puVar1[2] + 1,1,puVar1);
      }
      uVar10 = param_1[2];
      lVar8 = uVar10 + 1;
      puVar1 = param_1;
      if ((ulong)param_1[3] >> 1 <= uVar10) {
        puVar1 = (undefined8 *)(ulong)(1 < (ulong)param_1[3]);
        FUN_100902a24(puVar1,lVar8,1,param_1);
        param_1 = puVar1;
      }
    }
    else {
      if (*(int *)((long)puVar7 + 4) != 2) {
        FUN_1008d5ed0();
        puVar4 = &DAT_100ef2820;
        _swift_allocError(&DAT_100ef2820,param_1,0,0);
        param_1[1] = 0;
        param_1[2] = 0;
        *param_1 = 0;
        *(undefined1 *)(param_1 + 3) = 2;
        uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
        lVar8 = *(long *)(unaff_x20 + 0x18);
        _swift_getObjectType(uVar2);
        puVar5 = &DAT_100f14388;
        _swift_allocObject(&DAT_100f14388,0x20,7);
        *(long *)(puVar5 + 0x10) = unaff_x20;
        *(undefined **)(puVar5 + 0x18) = puVar4;
        pcVar9 = *(code **)(lVar8 + 0x18);
        _swift_retain();
        _swift_errorRetain(puVar4);
        (*pcVar9)(thunk_FUN_100903d44,puVar5,uVar2,lVar8);
        _swift_bridgeObjectRelease(puVar3);
        _swift_bridgeObjectRelease(puVar1);
        _swift_release(puVar5);
        _swift_errorRelease(puVar4);
        return;
      }
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1009026f8);
        (*pcVar9)();
      }
      uVar2 = *puVar6;
      FUN_100667770(uVar2,puVar6[1],param_2,param_3);
      _swift_bridgeObjectRetain(param_3);
      puVar6 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      param_1 = puVar3;
      if (((ulong)puVar6 & 1) == 0) {
        param_1 = (undefined8 *)0x0;
        FUN_100902a24(0,puVar3[2] + 1,1,puVar3);
      }
      uVar10 = param_1[2];
      lVar8 = uVar10 + 1;
      puVar3 = param_1;
      if ((ulong)param_1[3] >> 1 <= uVar10) {
        puVar3 = (undefined8 *)(ulong)(1 < (ulong)param_1[3]);
        FUN_100902a24(puVar3,lVar8,1,param_1);
        param_1 = puVar3;
      }
    }
    param_1[2] = lVar8;
    param_1[uVar10 + 4] = uVar2;
    puVar7 = (undefined8 *)puVar7[5];
    if (puVar7 == (undefined8 *)0x0) {
      uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
      lVar8 = *(long *)(unaff_x20 + 0x18);
      _swift_getObjectType(uVar2);
      puVar4 = &DAT_100f143b0;
      _swift_allocObject(&DAT_100f143b0,0x28,7);
      *(long *)(puVar4 + 0x10) = unaff_x20;
      *(undefined8 **)(puVar4 + 0x18) = puVar1;
      *(undefined8 **)(puVar4 + 0x20) = puVar3;
      pcVar9 = *(code **)(lVar8 + 0x18);
      _swift_retain();
      _swift_bridgeObjectRetain(puVar3);
      _swift_bridgeObjectRetain(puVar1);
      (*pcVar9)(FUN_100903d80,puVar4,uVar2,lVar8);
      _swift_bridgeObjectRelease(puVar3);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar4);
      return;
    }
  } while( true );
}



/* Address: 0x1009026f8 | FUN_1009026f8 */

void FUN_1009026f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _swift_bridgeObjectRetain(param_2);
  FUN_10090d22c(param_2,0,uVar1);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRetain(param_3);
  FUN_10090d22c();
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100902764 | FUN_100902764 */

void FUN_100902764(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x28);
  uVar1 = *(ulong *)(lVar6 + 0x20);
  lVar5 = *(long *)(lVar6 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  if ((uVar1 & 1) == 0) {
    uVar3 = *(undefined8 *)(lVar6 + 0x20);
    lVar5 = *(long *)(lVar6 + 0x28);
    _swift_getObjectType(uVar3);
    puVar4 = &DAT_100f143d8;
    _swift_allocObject(&DAT_100f143d8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar6;
    *(undefined8 *)(puVar4 + 0x18) = param_2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(lVar6);
    _swift_errorRetain(param_2);
    (*pcVar7)(FUN_1008d678c,puVar4,uVar3,lVar5);
    _swift_release(puVar4);
  }
  else {
    uVar2 = param_2;
    thunk_FUN_1005de8f4(param_2);
    uVar3 = param_3;
    FUN_1006486f8();
    FUN_100004550(uVar2,lVar5);
    _swift_bridgeObjectRelease(param_3);
  }
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(ulong *)(lVar6 + 0x20);
  lVar5 = *(long *)(lVar6 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  if ((uVar1 & 1) != 0) {
    thunk_FUN_1005de8f4(param_2);
    FUN_1006486f8();
    FUN_100004550(param_2,lVar5);
    _swift_bridgeObjectRelease(uVar3);
    return;
  }
  uVar3 = *(undefined8 *)(lVar6 + 0x20);
  lVar5 = *(long *)(lVar6 + 0x28);
  _swift_getObjectType(uVar3);
  puVar4 = &DAT_100f14400;
  _swift_allocObject(&DAT_100f14400,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar6;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  pcVar7 = *(code **)(lVar5 + 0x18);
  _swift_errorRetain(param_2);
  _swift_retain(lVar6);
  (*pcVar7)(thunk_FUN_1008d678c,puVar4,uVar3,lVar5);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100902910 | FUN_100902910 */

void FUN_100902910(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100902944 | FUN_100902944 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100902944(void)

{
  return ZEXT816(0x100fec658);
}



/* Address: 0x100902964 | FUN_100902964 */

void FUN_100902964(void)

{
  long *unaff_x20;
  
  _swift_retain(*(undefined8 *)(*unaff_x20 + 0x20));
  return;
}



/* Address: 0x100902970 | FUN_100902970 */

void FUN_100902970(void)

{
  FUN_100903a94();
  _swift_retain();
  return;
}



/* Address: 0x100902990 | FUN_100902990 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100902990(long param_1)

{
  code *pcVar1;
  int iVar2;
  void *pvVar3;
  long unaff_x20;
  undefined *puVar4;
  long lVar5;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  pvVar3 = _pthread_getspecific(*(pthread_key_t *)(lVar5 + 0x10));
  if (pvVar3 != (void *)0x0) {
    _swift_release();
  }
  if (param_1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100fec728;
    FUN_1000f7830(&DAT_100fec728,&DAT_100c84010);
    _swift_allocObject();
    *(long *)(puVar4 + 0x10) = unaff_x20;
    *(long *)(puVar4 + 0x18) = param_1;
    _swift_retain();
  }
  iVar2 = _pthread_setspecific(*(pthread_key_t *)(lVar5 + 0x10),puVar4);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100902a24);
  (*pcVar1)();
}



/* Address: 0x100902a24 | FUN_100902a24 */

undefined * FUN_100902a24(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100902b2c);
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
    puVar3 = &DAT_100fec6f8;
    FUN_1000f7830(&DAT_100fec6f8,&DAT_100c84000);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef29b8);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100902b2c | FUN_100902b2c */

undefined * FUN_100902b2c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100902c5c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fec750;
    FUN_1000f7830(&DAT_100fec750,&DAT_100c84038);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec758;
    FUN_1000f7830(&DAT_100fec758,&DAT_100c84040);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100902c5c | FUN_100902c5c */

void FUN_100902c5c(void)

{
  FUN_100903464();
  return;
}



/* Address: 0x100902c78 | FUN_100902c78 */

undefined * FUN_100902c78(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100902da8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fec760;
    FUN_1000f7830(&DAT_100fec760,&DAT_100c84048);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fec768;
    FUN_1000f7830(&DAT_100fec768,&DAT_100c84050);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}


