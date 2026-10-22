/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100176b48 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE16set_cfa_registerEjy */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE16set_cfa_registerEjy
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 2;
  puVar1[2] = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return;
}



/* Address: 0x100176b68 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE23set_cfa_register_signedEjx */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE23set_cfa_register_signedEjx
               (long param_1,undefined4 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 3;
  puVar1[2] = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return;
}



/* Address: 0x100176b88 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE18set_cfa_expressionEyy */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE18set_cfa_expressionEyy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_1 + (ulong)*(byte *)(param_1 + 0xea) * 0x18);
  *puVar1 = 1;
  *(undefined8 *)(puVar1 + 2) = param_2;
  *(undefined8 *)(puVar1 + 4) = param_3;
  return;
}



/* Address: 0x100176ba4 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv */

void __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)(param_2 + (ulong)*(byte *)(param_2 + 0xea) * 0x18);
  uVar2 = *puVar1;
  param_1[1] = puVar1[1];
  *param_1 = uVar2;
  param_1[2] = puVar1[2];
  return;
}



/* Address: 0x100176bc4 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE10push_stateEv */

bool __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE10push_stateEv(long param_1)

{
  char cVar1;
  byte bVar2;
  
  cVar1 = *(char *)(param_1 + 0xea);
  if (cVar1 != '\x05') {
    *(byte *)(param_1 + 0xea) = cVar1 + 1U;
    *(undefined1 *)(param_1 + (ulong)(byte)(cVar1 + 1U) + 0x90) = 0;
    bVar2 = *(byte *)(param_1 + 0xea);
    *(undefined4 *)(param_1 + (ulong)bVar2 * 0x18) = 0;
    FUN_1001751ec(param_1 + (ulong)bVar2 * 0xe + 0x96,0xff,0xe);
  }
  return cVar1 != '\x05';
}



/* Address: 0x100176c28 | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE9pop_stateEv */

bool __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE9pop_stateEv(long param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xea);
  if (cVar1 != '\0') {
    *(char *)(param_1 + 0xea) = cVar1 + -1;
  }
  return cVar1 != '\0';
}



/* Address: 0x100176c44 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC2EPNS1_15dwarf_cfa_stateIyxEE */

void __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC2EPNS1_15dwarf_cfa_stateIyxEE
               (undefined2 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 0xff00;
  return;
}



/* Address: 0x100176c54 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC1EPNS1_15dwarf_cfa_stateIyxEE */

void __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC1EPNS1_15dwarf_cfa_stateIyxEE
               (undefined2 *param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 4) = param_2;
  *param_1 = 0xff00;
  return;
}



/* Address: 0x100176c64 | __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy */

undefined8
__ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
          (byte *param_1,undefined4 *param_2,undefined4 *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  byte bVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  
  if ((ulong)param_1[1] == 0xff) {
    bVar4 = *param_1;
  }
  else {
    lVar3 = *(long *)(param_1 + 8);
    bVar2 = *(byte *)(lVar3 + (ulong)param_1[1] * 0x18 + 0x100);
    param_1[1] = bVar2;
    if (bVar2 != 0xff) {
LAB_100176cfc:
      lVar3 = lVar3 + (ulong)bVar2 * 0x18;
      uVar1 = *(undefined4 *)(lVar3 + 0xfc);
      *param_2 = *(undefined4 *)(lVar3 + 0xf8);
      *param_4 = *(undefined8 *)(lVar3 + 0xf0);
      *param_3 = uVar1;
      return 1;
    }
    bVar4 = *param_1 + 1;
    *param_1 = bVar4;
  }
  if (bVar4 < 0xe) {
    lVar3 = *(long *)(param_1 + 8);
    lVar5 = (ulong)*(byte *)(lVar3 + 0xea) * 0xe + (ulong)bVar4 + 0x96;
    do {
      bVar4 = bVar4 + 1;
      bVar2 = *(byte *)(lVar3 + lVar5);
      if (bVar2 != 0xff) {
        param_1[1] = bVar2;
        goto LAB_100176cfc;
      }
      *param_1 = bVar4;
      lVar5 = lVar5 + 1;
    } while (bVar4 != 0xe);
  }
  return 0;
}



/* Address: 0x100176d20 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12eval_programEP21plcrash_async_mobjectjjPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIjEEPK25PHplcrash_async_byteorderyxy */

ushort ** __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12eval_programEP21plcrash_async_mobjectjjPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIjEEPK25PHplcrash_async_byteorderyxy
                    (ulong param_1,undefined8 param_2,uint param_3,uint param_4,long param_5,
                    long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                    undefined8 param_10)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  ushort **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ushort *puVar15;
  undefined1 uVar16;
  ulong uVar17;
  int local_b28 [2];
  uint local_b20;
  int iStack_b1c;
  uint local_b18;
  int local_b14;
  undefined4 local_b08;
  undefined4 uStack_b04;
  undefined1 auStack_b00 [2644];
  uint local_ac;
  ushort *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  ushort *local_88;
  ushort *local_80;
  undefined8 *local_78;
  int local_70;
  int iStack_6c;
  
  local_ac = param_4;
  __ZN7plcrash2PH5async15dwarf_cfa_stateIjiEC1Ev(auStack_b00);
  __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC1EPNS1_15dwarf_cfa_stateIjiEE
            (&local_a8,param_1);
  while( true ) {
    ppuVar6 = &local_a8;
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_
              (ppuVar6,&local_b20,&local_70,&local_b08);
    if ((int)ppuVar6 == 0) break;
    puVar9 = auStack_b00;
    __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj
              (puVar9,local_b20,local_70,local_b08);
    if (((ulong)puVar9 & 1) == 0) {
      return (ushort **)0x3;
    }
  }
  if (*(char *)(param_5 + 0x38) == '\x01') {
    uVar16 = 0;
    if ((param_6 != 0) && ((*(byte *)(param_5 + 0x50) & 1) != 0)) {
      uVar16 = *(undefined1 *)(param_5 + 0x51);
    }
  }
  else {
    uVar16 = 0;
  }
  uVar7 = param_8;
  FUN_100174f78(param_8,param_9,&local_b08);
  if ((int)uVar7 == 0) {
    return (ushort **)0x5;
  }
  ppuVar6 = &local_a8;
  FUN_10018b644(ppuVar6,param_2,param_7,param_8,param_9,param_10);
  puVar15 = local_a8;
  uVar7 = local_a0;
  if ((int)ppuVar6 != 0) {
    return ppuVar6;
  }
  do {
    if (((param_3 != 0) && (param_3 < local_ac)) || (puVar15 < local_88 || local_80 == puVar15)) {
      return (ushort **)0x0;
    }
    local_a8 = (ushort *)((long)puVar15 + 1);
    bVar2 = (byte)*puVar15;
    bVar4 = (bVar2 & 0xc0) != 0;
    uVar13 = (uint)bVar2;
    if (bVar4) {
      uVar13 = bVar2 & 0xc0;
    }
    uVar1 = 0;
    if (bVar4) {
      uVar1 = bVar2 & 0x3f;
    }
    uVar17 = (ulong)uVar1;
    uVar11 = param_1;
    local_a0 = uVar7;
    if (0x3f < uVar13) {
      if (uVar13 == 0x40) {
        local_ac = local_ac + *(int *)(param_5 + 0x20) * uVar1;
        goto switchD_100176e80_caseD_0;
      }
      uVar12 = uVar17;
      if (uVar13 != 0x80) {
        if (uVar13 != 0xc0) {
          return (ushort **)0x4;
        }
        puVar9 = auStack_b00;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPj
                  (puVar9,uVar17,&local_b20,&local_70);
        iVar5 = (int)puVar9;
        goto joined_r0x000100176f80;
      }
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      iVar14 = *(int *)(param_5 + 0x28) * local_70;
      goto LAB_100177544;
    }
    switch(uVar13) {
    case 0:
      break;
    case 1:
      if (*(char *)(param_5 + 0x1a) != '\0') {
        return (ushort **)0x4;
      }
      lVar10 = param_6;
      __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm
                (param_6,uVar7,local_98,(long)local_a8 - (long)local_88,uVar16,&local_ac,&local_b20)
      ;
      if ((int)lVar10 != 0) {
        return (ushort **)0x5;
      }
      if (iStack_b1c < 0) {
        return (ushort **)0x5;
      }
      puVar15 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (puVar15 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < puVar15) {
        return (ushort **)0x5;
      }
      goto LAB_1001777fc;
    case 2:
      if (local_80 == local_a8) {
        return (ushort **)0x5;
      }
      local_a8 = puVar15 + 1;
      local_ac = local_ac + *(int *)(param_5 + 0x20) * (uint)*(byte *)((long)puVar15 + 1);
      break;
    case 3:
      if ((ulong)((long)local_80 - (long)local_a8) < 2) {
        return (ushort **)0x5;
      }
      uVar13 = (uint)*local_a8;
      (*(code *)*local_78)();
      local_a8 = local_a8 + 1;
      local_ac = local_ac + *(int *)(param_5 + 0x20) * uVar13;
      break;
    case 4:
      if ((ulong)((long)local_80 - (long)local_a8) < 4) {
        return (ushort **)0x5;
      }
      iVar5 = *(int *)local_a8;
      (*(code *)local_78[1])();
      local_a8 = local_a8 + 2;
      local_ac = local_ac + iVar5 * *(int *)(param_5 + 0x20);
      break;
    case 5:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      iVar5 = (int)uVar7;
      goto joined_r0x0001001774a0;
    case 6:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      puVar9 = auStack_b00;
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPj
                (puVar9,uVar12,&local_b20,&local_70);
      iVar5 = (int)puVar9;
joined_r0x000100176f80:
      uVar13 = local_b20;
      iVar14 = local_70;
      if (iVar5 == 0) goto LAB_1001777c0;
      goto LAB_10017770c;
    case 7:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
LAB_1001777c0:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE15remove_registerEj(param_1,uVar17);
      break;
    case 8:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar13 = 5;
      iVar14 = 0;
      goto LAB_10017770c;
    case 9:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar13 = 2;
      iVar14 = local_70;
      goto LAB_10017770c;
    case 10:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE10push_stateEv();
      goto joined_r0x0001001775f8;
    case 0xb:
      uVar17 = param_1;
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE9pop_stateEv();
      if ((int)uVar17 == 0) {
        return (ushort **)0x5;
      }
      break;
    case 0xc:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      iVar5 = local_70;
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      goto LAB_100177828;
    case 0xd:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(&local_b20,param_1);
      if (local_b20 != 2) {
        if (local_b20 != 3) goto LAB_10017756c;
        ppuVar6 = &local_a8;
        FUN_10017789c(ppuVar6,&local_70);
        if ((int)ppuVar6 == 0) {
          return (ushort **)0x5;
        }
        uVar17 = CONCAT44(iStack_6c,local_70);
        iVar5 = local_b14;
        if (iStack_6c != 0) {
          return (ushort **)0x4;
        }
        goto LAB_100177854;
      }
      ppuVar6 = &local_a8;
      FUN_10017789c(ppuVar6,&local_70);
      if ((int)ppuVar6 == 0) {
        return (ushort **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      iVar5 = local_b14;
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
LAB_100177828:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE16set_cfa_registerEjj(param_1,uVar17,iVar5);
      break;
    case 0xe:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(&local_b20,param_1);
      if (local_b20 - 2 < 2) {
        uVar17 = (ulong)local_b18;
        uVar7 = local_a0;
        FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,local_b28,&local_70);
        if ((int)uVar7 != 0) {
          return (ushort **)0x5;
        }
        local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_6c,local_70));
        if (local_a8 < local_88) {
          return (ushort **)0x5;
        }
        iVar5 = local_b28[0];
        if (local_80 < local_a8) {
          return (ushort **)0x5;
        }
        goto LAB_100177828;
      }
LAB_10017756c:
      if (local_b20 < 2) {
        return (ushort **)0x5;
      }
      break;
    case 0xf:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if ((long)(uVar17 | (long)local_a8 - (long)local_88) < 0) {
        return (ushort **)0x4;
      }
      uVar7 = CONCAT44(uStack_b04,local_b08);
      FUN_100174f78(uVar7,(long)local_a8 - (long)local_88,&local_b20);
      if ((int)uVar7 == 0) {
        return (ushort **)0x5;
      }
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE18set_cfa_expressionEyy
                (param_1,CONCAT44(iStack_b1c,local_b20),uVar17);
      puVar15 = (ushort *)((long)local_a8 + uVar17);
      goto LAB_1001777e8;
    case 0x10:
    case 0x16:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      lVar10 = (long)local_a8 - (long)local_88;
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar7 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b8b4(local_a0,local_98,lVar10,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      if (lVar10 < 0) {
        return (ushort **)0x4;
      }
      lVar3 = CONCAT44(iStack_6c,local_70);
      uVar8 = CONCAT44(uStack_b04,local_b08);
      FUN_100174f78(uVar8,lVar10,&local_b20);
      if ((int)uVar8 == 0) {
        return (ushort **)0x5;
      }
      if (uVar13 == 0x10) {
        uVar17 = param_1;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj
                  (param_1,uVar7,3,local_b20);
        if ((uVar17 & 1) == 0) {
          return (ushort **)0x3;
        }
      }
      else {
        uVar17 = param_1;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj
                  (param_1,uVar7,4,local_b20);
        if ((int)uVar17 == 0) {
          return (ushort **)0x3;
        }
      }
      puVar15 = (ushort *)((long)local_a8 + lVar3);
LAB_1001777e8:
      if ((local_88 <= puVar15) && (puVar15 <= local_80)) {
LAB_1001777fc:
        local_a8 = puVar15;
      }
      break;
    case 0x11:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      iVar5 = (int)uVar7;
joined_r0x0001001774a0:
      if (iVar5 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      iVar14 = *(int *)(param_5 + 0x28) * local_70;
LAB_100177544:
      uVar13 = 0;
      goto LAB_10017770c;
    case 0x12:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      iVar5 = *(int *)(param_5 + 0x28) * local_70;
      goto LAB_100177854;
    case 0x13:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(&local_b20,param_1);
      if (1 < local_b20 - 2) goto LAB_10017756c;
      uVar17 = (ulong)local_b18;
      uVar7 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,local_b28,&local_70);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_6c,local_70));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      iVar5 = *(int *)(param_5 + 0x28) * local_b28[0];
LAB_100177854:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE23set_cfa_register_signedEji(param_1,uVar17,iVar5);
      break;
    case 0x14:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      goto LAB_1001776cc;
    case 0x15:
      FUN_10017b8b4(uVar7,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (ushort **)0x4;
      }
      uVar7 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar7 != 0) {
        return (ushort **)0x5;
      }
LAB_1001776cc:
      local_a8 = (ushort *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (ushort **)0x5;
      }
      if (local_80 < local_a8) {
        return (ushort **)0x5;
      }
      uVar13 = 1;
      iVar14 = *(int *)(param_5 + 0x28) * local_70;
LAB_10017770c:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEj
                (param_1,uVar12,uVar13,iVar14);
joined_r0x0001001775f8:
      if ((uVar11 & 1) == 0) {
        return (ushort **)0x3;
      }
      break;
    default:
      return (ushort **)0x4;
    }
switchD_100176e80_caseD_0:
    puVar15 = local_a8;
    uVar7 = local_a0;
  } while( true );
}



/* Address: 0x10017789c | FUN_10017789c */

undefined8 FUN_10017789c(ulong *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long local_28;
  
  uVar1 = param_1[1];
  FUN_10017b8b4(uVar1,param_1[2],*param_1 - param_1[4],param_2,&local_28);
  if ((((int)uVar1 == 0) && (uVar1 = *param_1 + local_28, param_1[4] <= uVar1)) &&
     (uVar1 <= param_1[5])) {
    *param_1 = uVar1;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x100177914 | __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_ */

int * __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_
                (undefined8 param_1,int *param_2,long param_3,ulong param_4,undefined8 param_5,
                ulong param_6)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  int *piVar8;
  ulong uVar9;
  int local_110;
  uint local_10c;
  int iStack_108;
  uint local_104;
  undefined1 auStack_100 [20];
  uint local_ec;
  int local_e8 [2];
  undefined4 local_e0;
  int iStack_dc;
  undefined8 uStack_d8;
  int local_d0 [14];
  undefined8 local_98;
  undefined8 local_90;
  ulong local_88;
  uint local_80;
  undefined4 uStack_7c;
  ulong local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10017f6e4(param_6,param_4);
  FUN_10017fd3c(param_6);
  __ZN7plcrash2PH5async15dwarf_cfa_stateIjiE12get_cfa_ruleEv(local_e8,param_1);
  if (local_e8[0] - 2U < 2) {
    uVar5 = param_4;
    FUN_10017fe40(param_4,local_e0,local_d0);
    if ((int)uVar5 == 0) {
      piVar8 = (int *)0x4;
      goto LAB_100177d7c;
    }
    uVar5 = param_4;
    FUN_10017f6ec(param_4,local_d0[0]);
    if ((int)uVar5 == 0) {
LAB_100177d78:
      piVar8 = (int *)0x8;
      goto LAB_100177d7c;
    }
    uVar5 = param_4;
    FUN_10017f724(param_4,local_d0[0]);
    local_ec = iStack_dc + (int)uVar5;
    uVar6 = local_ec;
LAB_100177a40:
    FUN_10017f888(param_6,2,uVar6);
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiEC1EPNS1_15dwarf_cfa_stateIjiEE
              (auStack_100,param_1);
    puVar3 = auStack_100;
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_
              (puVar3,&local_104,&iStack_108,&local_10c);
    if ((int)puVar3 != 0) {
      do {
        uVar5 = param_4;
        FUN_10017fe40(param_4,local_104,&local_110);
        uVar2 = local_ec;
        iVar4 = iStack_108;
        uVar6 = local_10c;
        if ((int)uVar5 == 0) {
          if (*(ulong *)(param_3 + 0x30) != (ulong)local_104) goto LAB_100177d70;
          local_110 = 0;
        }
        iVar1 = local_110;
        uVar9 = (ulong)local_ec;
        uVar5 = (ulong)local_10c;
        uVar7 = param_4;
        FUN_10017f71c();
        uVar7 = uVar7 & 0xff;
        piVar8 = param_2;
        if (iVar4 < 3) {
          if (iVar4 == 0) {
            FUN_100174ff0(param_2,uVar9,uVar5,&local_80,uVar7);
            if ((int)piVar8 != 0) goto LAB_100177d7c;
            if (uVar7 == 8) {
              uVar5 = CONCAT44(uStack_7c,local_80);
            }
            else {
              uVar5 = (ulong)local_80;
            }
            FUN_10017f888(param_6,iVar1,uVar5);
          }
          else if (iVar4 == 1) {
            uVar5 = (ulong)(uVar6 + uVar2);
LAB_100177c10:
            FUN_10017f888(param_6,iVar1,uVar5);
          }
          else if (iVar4 == 2) {
            uVar7 = param_4;
            FUN_10017fe40(param_4,uVar5,local_d0);
            if ((int)uVar7 != 0) {
              uVar5 = param_4;
              FUN_10017f6ec(param_4,local_d0[0]);
              iVar4 = local_d0[0];
              if ((uVar5 & 1) != 0) goto LAB_100177bd0;
              goto LAB_100177d78;
            }
            goto LAB_100177d70;
          }
        }
        else if (iVar4 - 3U < 2) {
          local_88 = uVar5;
          FUN_10017b810(param_2,uVar5,0,&local_90,&local_98);
          if ((int)piVar8 != 0) goto LAB_100177d7c;
          FUN_100174f78(uVar5,local_98,&local_88);
          if ((int)uVar5 == 0) goto LAB_100177d70;
          piVar8 = local_d0;
          FUN_10017c508(piVar8,param_2,local_88,local_90,1);
          if ((int)piVar8 != 0) goto LAB_100177d7c;
          if (uVar7 == 8) {
            piVar8 = local_d0;
            local_78 = uVar9;
            __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
                      (piVar8,param_2,param_4,param_5,local_88,0,local_90,&local_78,1,&local_80);
            if ((int)piVar8 != 0) {
LAB_100177db8:
              FUN_10017c9b0(local_d0);
              goto LAB_100177d7c;
            }
            uVar5 = CONCAT44(uStack_7c,local_80);
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,uVar2);
            piVar8 = local_d0;
            __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
                      (piVar8,param_2,param_4,param_5,local_88,0,local_90,&local_78,1,&local_80);
            if ((int)piVar8 != 0) goto LAB_100177db8;
            uVar5 = (ulong)local_80;
          }
          FUN_10017c9b0(local_d0);
          if (iVar4 == 3) {
            piVar8 = param_2;
            FUN_100174ff0(param_2,uVar5,0,&local_80,uVar7);
            if ((int)piVar8 != 0) goto LAB_100177d7c;
            if (uVar7 == 8) {
              uVar5 = CONCAT44(uStack_7c,local_80);
            }
            else {
              uVar5 = (ulong)local_80;
            }
          }
          FUN_10017f888(param_6,iVar1,uVar5);
        }
        else if (iVar4 == 5) {
          uVar5 = param_4;
          FUN_10017f6ec(param_4,iVar1);
          iVar4 = iVar1;
          if ((int)uVar5 != 0) {
LAB_100177bd0:
            uVar5 = param_4;
            FUN_10017f724(param_4,iVar4);
            goto LAB_100177c10;
          }
          goto LAB_100177d78;
        }
        if ((*(ulong *)(param_3 + 0x30) == (ulong)local_104) && (local_110 != 0)) {
          uVar5 = param_6;
          FUN_10017f724(param_6);
          FUN_10017f888(param_6,0,uVar5);
        }
        puVar3 = auStack_100;
        __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIjiE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tES4_
                  (puVar3,&local_104,&iStack_108,&local_10c);
      } while (((ulong)puVar3 & 1) != 0);
    }
    uVar5 = param_6;
    FUN_10017f6ec(param_6,0);
    piVar8 = (int *)0x0;
    if ((uVar5 & 1) != 0) goto LAB_100177d7c;
    uVar5 = param_4;
    FUN_10017fe40(param_4,*(undefined8 *)(param_3 + 0x30),local_d0);
    if (((int)uVar5 != 0) && (uVar5 = param_4, FUN_10017f6ec(param_4,local_d0[0]), (uVar5 & 1) != 0)
       ) {
      FUN_10017f724(param_4,local_d0[0]);
      FUN_10017f888(param_6,0,param_4);
      piVar8 = (int *)0x0;
      goto LAB_100177d7c;
    }
  }
  else if (local_e8[0] != 0) {
    uVar6 = local_e8[0] - 2U;
    if (local_e8[0] == 1) {
      piVar8 = local_d0;
      FUN_10017c508(piVar8,param_2,CONCAT44(iStack_dc,local_e0),uStack_d8,1);
      if ((int)piVar8 != 0) goto LAB_100177d7c;
      piVar8 = local_d0;
      __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
                (piVar8,param_2,param_4,param_5,CONCAT44(iStack_dc,local_e0),0,uStack_d8,0,0,
                 &local_ec);
      if ((int)piVar8 != 0) goto LAB_100177d7c;
      FUN_10017c9b0(local_d0);
      uVar6 = local_ec;
    }
    goto LAB_100177a40;
  }
LAB_100177d70:
  piVar8 = (int *)0x5;
LAB_100177d7c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar8;
}



/* Address: 0x100177dcc | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12eval_programEP21plcrash_async_mobjectyyPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIyEEPK25PHplcrash_async_byteorderyxy */

uint ** __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12eval_programEP21plcrash_async_mobjectyyPNS1_28plcrash_async_dwarf_cie_infoEPNS1_16gnu_ehptr_readerIyEEPK25PHplcrash_async_byteorderyxy
                  (ulong param_1,undefined8 param_2,ulong param_3,ulong param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                  undefined8 param_10)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  uint **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined4 uVar13;
  long lVar14;
  uint *puVar15;
  undefined1 uVar16;
  ulong uVar17;
  long local_b28;
  uint local_b20;
  int iStack_b1c;
  uint local_b18;
  long local_b10;
  undefined4 local_b08;
  undefined4 uStack_b04;
  undefined1 auStack_b00 [2640];
  ulong local_b0;
  uint *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  uint *local_88;
  uint *local_80;
  undefined8 *local_78;
  undefined4 local_70;
  int iStack_6c;
  
  local_b0 = param_4;
  __ZN7plcrash2PH5async15dwarf_cfa_stateIyxEC1Ev(auStack_b00);
  __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC1EPNS1_15dwarf_cfa_stateIyxEE
            (&local_a8,param_1);
  while( true ) {
    ppuVar7 = &local_a8;
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
              (ppuVar7,&local_70,&local_b08,&local_b20);
    if ((int)ppuVar7 == 0) break;
    puVar10 = auStack_b00;
    __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy
              (puVar10,local_70,local_b08,CONCAT44(iStack_b1c,local_b20));
    if (((ulong)puVar10 & 1) == 0) {
      return (uint **)0x3;
    }
  }
  if (*(char *)(param_5 + 0x38) == '\x01') {
    uVar16 = 0;
    if ((param_6 != 0) && ((*(byte *)(param_5 + 0x50) & 1) != 0)) {
      uVar16 = *(undefined1 *)(param_5 + 0x51);
    }
  }
  else {
    uVar16 = 0;
  }
  uVar8 = param_8;
  FUN_100174f78(param_8,param_9,&local_b08);
  if ((int)uVar8 == 0) {
    return (uint **)0x5;
  }
  ppuVar7 = &local_a8;
  FUN_10018b644(ppuVar7,param_2,param_7,param_8,param_9,param_10);
  puVar15 = local_a8;
  uVar8 = local_a0;
  if ((int)ppuVar7 != 0) {
    return ppuVar7;
  }
  do {
    if (((param_3 != 0) && (param_3 < local_b0)) || (puVar15 < local_88 || local_80 == puVar15)) {
      return (uint **)0x0;
    }
    local_a8 = (uint *)((long)puVar15 + 1);
    bVar3 = (byte)*puVar15;
    bVar5 = (bVar3 & 0xc0) != 0;
    uVar1 = (uint)bVar3;
    if (bVar5) {
      uVar1 = bVar3 & 0xc0;
    }
    uVar2 = 0;
    if (bVar5) {
      uVar2 = bVar3 & 0x3f;
    }
    uVar17 = (ulong)uVar2;
    uVar11 = param_1;
    local_a0 = uVar8;
    if (0x3f < uVar1) {
      if (uVar1 == 0x40) {
        local_b0 = local_b0 + *(long *)(param_5 + 0x20) * uVar17;
        goto switchD_100177f2c_caseD_0;
      }
      uVar12 = uVar17;
      if (uVar1 != 0x80) {
        if (uVar1 != 0xc0) {
          return (uint **)0x4;
        }
        puVar10 = auStack_b00;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
                  (puVar10,uVar17,&local_70,&local_b20);
        if ((int)puVar10 == 0) goto LAB_100178860;
        lVar14 = CONCAT44(iStack_b1c,local_b20);
        uVar13 = local_70;
        goto LAB_1001787ac;
      }
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = *(long *)(param_5 + 0x28) * CONCAT44(iStack_6c,local_70);
      goto LAB_1001785e4;
    }
    switch(uVar1) {
    case 0:
      break;
    case 1:
      if (*(char *)(param_5 + 0x1a) != '\0') {
        return (uint **)0x4;
      }
      lVar14 = param_6;
      __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm
                (param_6,uVar8,local_98,(long)local_a8 - (long)local_88,uVar16,&local_b0,&local_b20)
      ;
      if ((int)lVar14 != 0) {
        return (uint **)0x5;
      }
      if (iStack_b1c < 0) {
        return (uint **)0x5;
      }
      puVar15 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (puVar15 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < puVar15) {
        return (uint **)0x5;
      }
      goto LAB_10017889c;
    case 2:
      if (local_80 == local_a8) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)puVar15 + 2);
      local_b0 = local_b0 + *(long *)(param_5 + 0x20) * (ulong)*(byte *)((long)puVar15 + 1);
      break;
    case 3:
      if ((ulong)((long)local_80 - (long)local_a8) < 2) {
        return (uint **)0x5;
      }
      uVar17 = (ulong)*(ushort *)local_a8;
      (*(code *)*local_78)();
      local_a8 = (uint *)((long)local_a8 + 2);
      goto LAB_1001782e8;
    case 4:
      if ((ulong)((long)local_80 - (long)local_a8) < 4) {
        return (uint **)0x5;
      }
      uVar17 = (ulong)*local_a8;
      (*(code *)local_78[1])();
      local_a8 = local_a8 + 1;
LAB_1001782e8:
      local_b0 = local_b0 + *(long *)(param_5 + 0x20) * (uVar17 & 0xffffffff);
      break;
    case 5:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      iVar6 = (int)uVar8;
      goto joined_r0x000100178540;
    case 6:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      puVar10 = auStack_b00;
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE17get_register_ruleEjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
                (puVar10,uVar12,&local_70,&local_b20);
      if ((int)puVar10 == 0) goto LAB_100178860;
      lVar14 = CONCAT44(iStack_b1c,local_b20);
      uVar13 = local_70;
      goto LAB_1001787ac;
    case 7:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
LAB_100178860:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE15remove_registerEj(param_1,uVar17);
      break;
    case 8:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      lVar14 = 0;
      uVar13 = 5;
      goto LAB_1001787ac;
    case 9:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = CONCAT44(iStack_6c,local_70);
      uVar13 = 2;
      goto LAB_1001787ac;
    case 10:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE10push_stateEv();
      goto joined_r0x000100178698;
    case 0xb:
      uVar17 = param_1;
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE9pop_stateEv();
      if ((int)uVar17 == 0) {
        return (uint **)0x5;
      }
      break;
    case 0xc:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = CONCAT44(iStack_6c,local_70);
      goto LAB_1001788c8;
    case 0xd:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(&local_b20,param_1);
      if (local_b20 != 2) {
        if (local_b20 != 3) goto LAB_10017860c;
        ppuVar7 = &local_a8;
        FUN_10017789c(ppuVar7,&local_70);
        if ((int)ppuVar7 == 0) {
          return (uint **)0x5;
        }
        uVar17 = CONCAT44(iStack_6c,local_70);
        lVar14 = local_b10;
        if (iStack_6c != 0) {
          return (uint **)0x4;
        }
        goto LAB_1001788f4;
      }
      ppuVar7 = &local_a8;
      FUN_10017789c(ppuVar7,&local_70);
      if ((int)ppuVar7 == 0) {
        return (uint **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      lVar14 = local_b10;
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
LAB_1001788c8:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE16set_cfa_registerEjy(param_1,uVar17,lVar14);
      break;
    case 0xe:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(&local_b20,param_1);
      if (local_b20 - 2 < 2) {
        uVar17 = (ulong)local_b18;
        uVar8 = local_a0;
        FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_b28,&local_70);
        if ((int)uVar8 != 0) {
          return (uint **)0x5;
        }
        local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_6c,local_70));
        if (local_a8 < local_88) {
          return (uint **)0x5;
        }
        lVar14 = local_b28;
        if (local_80 < local_a8) {
          return (uint **)0x5;
        }
        goto LAB_1001788c8;
      }
LAB_10017860c:
      if (local_b20 < 2) {
        return (uint **)0x5;
      }
      break;
    case 0xf:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if ((long)(uVar17 | (long)local_a8 - (long)local_88) < 0) {
        return (uint **)0x4;
      }
      uVar8 = CONCAT44(uStack_b04,local_b08);
      FUN_100174f78(uVar8,(long)local_a8 - (long)local_88,&local_b20);
      if ((int)uVar8 == 0) {
        return (uint **)0x5;
      }
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE18set_cfa_expressionEyy
                (param_1,CONCAT44(iStack_b1c,local_b20),uVar17);
      puVar15 = (uint *)((long)local_a8 + uVar17);
      goto LAB_100178888;
    case 0x10:
    case 0x16:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      lVar14 = (long)local_a8 - (long)local_88;
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar8 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar9 = local_a0;
      FUN_10017b8b4(local_a0,local_98,lVar14,&local_70,&local_b20);
      if ((int)uVar9 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      if (lVar14 < 0) {
        return (uint **)0x4;
      }
      lVar4 = CONCAT44(iStack_6c,local_70);
      uVar9 = CONCAT44(uStack_b04,local_b08);
      FUN_100174f78(uVar9,lVar14,&local_b20);
      if ((int)uVar9 == 0) {
        return (uint **)0x5;
      }
      if (uVar1 == 0x10) {
        uVar17 = param_1;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy
                  (param_1,uVar8,3,CONCAT44(iStack_b1c,local_b20));
        if ((uVar17 & 1) == 0) {
          return (uint **)0x3;
        }
      }
      else {
        uVar17 = param_1;
        __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy
                  (param_1,uVar8,4,CONCAT44(iStack_b1c,local_b20));
        if ((int)uVar17 == 0) {
          return (uint **)0x3;
        }
      }
      puVar15 = (uint *)((long)local_a8 + lVar4);
LAB_100178888:
      if ((local_88 <= puVar15) && (puVar15 <= local_80)) {
LAB_10017889c:
        local_a8 = puVar15;
      }
      break;
    case 0x11:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      iVar6 = (int)uVar8;
joined_r0x000100178540:
      if (iVar6 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = *(long *)(param_5 + 0x28) * CONCAT44(iStack_6c,local_70);
LAB_1001785e4:
      uVar13 = 0;
      goto LAB_1001787ac;
    case 0x12:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar17 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = *(long *)(param_5 + 0x28) * CONCAT44(iStack_6c,local_70);
      goto LAB_1001788f4;
    case 0x13:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(&local_b20,param_1);
      if (1 < local_b20 - 2) goto LAB_10017860c;
      uVar17 = (ulong)local_b18;
      uVar8 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_b28,&local_70);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_6c,local_70));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = *(long *)(param_5 + 0x28) * local_b28;
LAB_1001788f4:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE23set_cfa_register_signedEjx(param_1,uVar17,lVar14);
      break;
    case 0x14:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b8b4(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      goto LAB_10017876c;
    case 0x15:
      FUN_10017b8b4(uVar8,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      uVar12 = CONCAT44(iStack_6c,local_70);
      if (iStack_6c != 0) {
        return (uint **)0x4;
      }
      uVar8 = local_a0;
      FUN_10017b72c(local_a0,local_98,(long)local_a8 - (long)local_88,&local_70,&local_b20);
      if ((int)uVar8 != 0) {
        return (uint **)0x5;
      }
LAB_10017876c:
      local_a8 = (uint *)((long)local_a8 + CONCAT44(iStack_b1c,local_b20));
      if (local_a8 < local_88) {
        return (uint **)0x5;
      }
      if (local_80 < local_a8) {
        return (uint **)0x5;
      }
      lVar14 = *(long *)(param_5 + 0x28) * CONCAT44(iStack_6c,local_70);
      uVar13 = 1;
LAB_1001787ac:
      __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12set_registerEjNS1_28plcrash_dwarf_cfa_reg_rule_tEy
                (param_1,uVar12,uVar13,lVar14);
joined_r0x000100178698:
      if ((uVar11 & 1) == 0) {
        return (uint **)0x3;
      }
      break;
    default:
      return (uint **)0x4;
    }
switchD_100177f2c_caseD_0:
    puVar15 = local_a8;
    uVar8 = local_a0;
  } while( true );
}



/* Address: 0x10017893c | __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_ */

int * __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE11apply_stateEjPNS1_28plcrash_async_dwarf_cie_infoEPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderPS6_
                (undefined8 param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5,
                ulong param_6)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  int local_114;
  long local_110;
  int local_108;
  uint local_104;
  undefined1 auStack_100 [16];
  long local_f0;
  int local_e8 [2];
  undefined4 local_e0;
  undefined4 uStack_dc;
  long local_d8;
  int local_d0 [14];
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  uint local_80;
  undefined4 uStack_7c;
  long local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10017f6e4(param_6,param_4);
  FUN_10017fd3c(param_6);
  __ZN7plcrash2PH5async15dwarf_cfa_stateIyxE12get_cfa_ruleEv(local_e8,param_1);
  if (local_e8[0] - 2U < 2) {
    uVar8 = param_4;
    FUN_10017fe40(param_4,local_e0,local_d0);
    if ((int)uVar8 == 0) {
      piVar6 = (int *)0x4;
      goto LAB_100178dd0;
    }
    uVar8 = param_4;
    FUN_10017f6ec(param_4,local_d0[0]);
    if ((int)uVar8 == 0) {
LAB_100178dcc:
      piVar6 = (int *)0x8;
      goto LAB_100178dd0;
    }
    uVar8 = param_4;
    FUN_10017f724(param_4,local_d0[0]);
    local_f0 = local_d8 + uVar8;
LAB_100178a70:
    FUN_10017f888(param_6,2,local_f0);
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxEC1EPNS1_15dwarf_cfa_stateIyxEE
              (auStack_100,param_1);
    puVar3 = auStack_100;
    __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
              (puVar3,&local_104,&local_108,&local_110);
    if ((int)puVar3 != 0) {
      do {
        uVar8 = param_4;
        FUN_10017fe40(param_4,local_104,&local_114);
        lVar2 = local_f0;
        iVar7 = local_108;
        lVar5 = local_110;
        if ((int)uVar8 == 0) {
          if (*(ulong *)(param_3 + 0x30) != (ulong)local_104) goto LAB_1001789f8;
          local_114 = 0;
        }
        iVar1 = local_114;
        uVar8 = param_4;
        FUN_10017f71c();
        uVar8 = uVar8 & 0xff;
        if (iVar7 < 3) {
          if (iVar7 == 0) {
            piVar6 = (int *)(param_2 & 0xffffffff);
            FUN_100174ff0(piVar6,lVar2,lVar5,&local_80,uVar8);
            if ((int)piVar6 != 0) goto LAB_100178dd0;
            if (uVar8 == 8) {
              uVar8 = CONCAT44(uStack_7c,local_80);
            }
            else {
              uVar8 = (ulong)local_80;
            }
            FUN_10017f888(param_6,iVar1,uVar8);
          }
          else if (iVar7 == 1) {
            uVar8 = lVar5 + lVar2;
LAB_100178c64:
            FUN_10017f888(param_6,iVar1,uVar8);
          }
          else if (iVar7 == 2) {
            uVar8 = param_4;
            FUN_10017fe40(param_4,lVar5,local_d0);
            if ((int)uVar8 != 0) {
              uVar8 = param_4;
              FUN_10017f6ec(param_4,local_d0[0]);
              iVar7 = local_d0[0];
              if ((uVar8 & 1) != 0) goto LAB_100178c1c;
              goto LAB_100178dcc;
            }
            goto LAB_1001789f8;
          }
        }
        else if (iVar7 - 3U < 2) {
          piVar4 = (int *)(param_2 & 0xffffffff);
          local_88 = lVar5;
          piVar6 = piVar4;
          FUN_10017b810(piVar4,lVar5,0,&local_90,&local_98);
          if ((int)piVar6 != 0) goto LAB_100178dd0;
          FUN_100174f78(lVar5,local_98,&local_88);
          if ((int)lVar5 == 0) goto LAB_1001789f8;
          piVar6 = local_d0;
          FUN_10017c508(piVar6,piVar4,local_88,local_90,1);
          if ((int)piVar6 != 0) goto LAB_100178dd0;
          if (uVar8 == 8) {
            local_78 = lVar2;
            piVar6 = local_d0;
            __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
                      (piVar6,piVar4,param_4,param_5,local_88,0,local_90,&local_78,1,&local_80);
            if ((int)piVar6 != 0) {
LAB_100178e0c:
              FUN_10017c9b0(local_d0);
              goto LAB_100178dd0;
            }
            uVar9 = CONCAT44(uStack_7c,local_80);
          }
          else {
            local_78 = CONCAT44(local_78._4_4_,(int)lVar2);
            piVar6 = local_d0;
            __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
                      (piVar6,piVar4,param_4,param_5,local_88,0,local_90,&local_78,1,&local_80);
            if ((int)piVar6 != 0) goto LAB_100178e0c;
            uVar9 = (ulong)local_80;
          }
          FUN_10017c9b0(local_d0);
          if (iVar7 == 3) {
            FUN_100174ff0(piVar4,uVar9,0,&local_80,uVar8);
            piVar6 = piVar4;
            if ((int)piVar4 != 0) goto LAB_100178dd0;
            if (uVar8 == 8) {
              uVar9 = CONCAT44(uStack_7c,local_80);
            }
            else {
              uVar9 = (ulong)local_80;
            }
          }
          FUN_10017f888(param_6,iVar1,uVar9);
        }
        else if (iVar7 == 5) {
          uVar8 = param_4;
          FUN_10017f6ec(param_4,iVar1);
          iVar7 = iVar1;
          if ((int)uVar8 != 0) {
LAB_100178c1c:
            uVar8 = param_4;
            FUN_10017f724(param_4,iVar7);
            goto LAB_100178c64;
          }
          goto LAB_100178dcc;
        }
        if ((*(ulong *)(param_3 + 0x30) == (ulong)local_104) && (local_114 != 0)) {
          uVar8 = param_6;
          FUN_10017f724(param_6);
          FUN_10017f888(param_6,0,uVar8);
        }
        puVar3 = auStack_100;
        __ZN7plcrash2PH5async24dwarf_cfa_state_iteratorIyxE4nextEPjPNS1_28plcrash_dwarf_cfa_reg_rule_tEPy
                  (puVar3,&local_104,&local_108,&local_110);
      } while (((ulong)puVar3 & 1) != 0);
    }
    uVar8 = param_6;
    FUN_10017f6ec(param_6,0);
    piVar6 = (int *)0x0;
    if ((uVar8 & 1) != 0) goto LAB_100178dd0;
    uVar8 = param_4;
    FUN_10017fe40(param_4,*(undefined8 *)(param_3 + 0x30),local_d0);
    if (((int)uVar8 != 0) && (uVar8 = param_4, FUN_10017f6ec(param_4,local_d0[0]), (uVar8 & 1) != 0)
       ) {
      FUN_10017f724(param_4,local_d0[0]);
      FUN_10017f888(param_6,0,param_4);
      piVar6 = (int *)0x0;
      goto LAB_100178dd0;
    }
  }
  else if (local_e8[0] != 0) {
    piVar6 = local_d0;
    FUN_10017c508(piVar6,param_2,CONCAT44(uStack_dc,local_e0),local_d8,1);
    if ((int)piVar6 != 0) goto LAB_100178dd0;
    piVar6 = local_d0;
    __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
              (piVar6,param_2,param_4,param_5,CONCAT44(uStack_dc,local_e0),0,local_d8,0,0,&local_f0)
    ;
    if ((int)piVar6 != 0) goto LAB_100178dd0;
    FUN_10017c9b0(local_d0);
    goto LAB_100178a70;
  }
LAB_1001789f8:
  piVar6 = (int *)0x5;
LAB_100178dd0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return piVar6;
}



/* Address: 0x100178e20 | __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy */

void __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_88;
  undefined1 local_79;
  uint local_78;
  byte local_71;
  long local_70;
  uint local_68;
  undefined4 uStack_64;
  
  lVar9 = param_2;
  FUN_10017c740();
  FUN_1001751ec(param_1,0,0x68);
  lVar6 = param_2;
  FUN_10017c8c8(param_2,param_3,param_5,0,&local_68);
  if ((int)lVar6 != 0) {
    return;
  }
  if (local_68 == 0xffffffff) {
    lVar6 = param_2;
    FUN_10017c93c(param_2,param_3,param_5,4,param_1 + 1);
    if ((int)lVar6 != 0) {
      return;
    }
    *param_1 = (param_5 - lVar9) + 0xc;
    lVar9 = param_2;
    FUN_10017c93c(param_2,param_3,param_5,0xc,param_1 + 2);
    if ((int)lVar9 != 0) {
      return;
    }
    uVar5 = param_1[2];
    lVar9 = -0xc;
    uVar7 = 0xffffffffffffffff;
    uVar8 = 0x14;
  }
  else {
    *param_1 = (param_5 - lVar9) + 4;
    param_1[1] = (ulong)local_68;
    lVar9 = param_2;
    FUN_10017c8c8(param_2,param_3,param_5,4,&local_68);
    if ((int)lVar9 != 0) {
      return;
    }
    uVar5 = (ulong)local_68;
    param_1[2] = uVar5;
    lVar9 = -4;
    uVar8 = 8;
    uVar7 = 0xffffffff;
  }
  if ((((uVar5 == 0) || (uVar5 == uVar7)) &&
      (lVar6 = param_2, FUN_10017c7f4(param_2,param_5,uVar8,param_1 + 3), (int)lVar6 == 0)) &&
     ((*(byte *)(param_1 + 3) < 5 && ((1 << (ulong)(*(byte *)(param_1 + 3) & 0x1f) & 0x1aU) != 0))))
  {
    lVar6 = 0;
    uVar5 = uVar8 | 1;
    do {
      lVar11 = lVar6;
      lVar6 = param_2;
      FUN_10017c7f4(param_2,param_5,uVar5,&local_68);
      if ((int)lVar6 != 0) {
        return;
      }
      bVar1 = lVar11 == 0;
      if (lVar11 == 0) {
        if ((local_68 & 0xff) != 0x7a) {
          if ((local_68 & 0xff) != 0) {
            return;
          }
          bVar1 = true;
          lVar6 = 1;
          goto LAB_100179020;
        }
        *(undefined1 *)(param_1 + 7) = 1;
      }
      lVar6 = lVar11 + -1;
    } while ((lVar11 != 2) && (uVar5 = uVar5 + 1, (char)local_68 != '\0'));
    if (lVar6 != 1) {
      lVar6 = -lVar6;
LAB_100179020:
      lVar6 = lVar6 + (uVar8 | 1);
      if ((char)param_1[3] == '\x04') {
        lVar2 = param_2;
        FUN_10017c7f4(param_2,param_5,lVar6,(long)param_1 + 0x19);
        if ((int)lVar2 != 0) {
          return;
        }
        lVar2 = param_2;
        FUN_10017c7f4(param_2,param_5,lVar6 + 1,(long)param_1 + 0x1a);
        if ((int)lVar2 != 0) {
          return;
        }
        lVar6 = lVar6 + 2;
      }
      lVar2 = param_2;
      FUN_10017b8b4(param_2,param_5,lVar6,param_1 + 4,&local_68);
      if ((int)lVar2 == 0) {
        lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
        lVar2 = param_2;
        FUN_10017b72c(param_2,param_5,lVar6,param_1 + 5,&local_68);
        if ((int)lVar2 == 0) {
          lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
          lVar2 = param_2;
          FUN_10017b8b4(param_2,param_5,lVar6,param_1 + 6,&local_68);
          if ((int)lVar2 == 0) {
            lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
            local_70 = 0;
            if ((char)param_1[7] == '\x01') {
              lVar2 = param_2;
              FUN_10017b8b4(param_2,param_5,lVar6,&local_70,&local_68);
              if ((int)lVar2 != 0) {
                return;
              }
              lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
              if (!bVar1) {
                lVar11 = -lVar11;
                lVar2 = uVar8 + 2;
                lVar10 = lVar6;
                do {
                  lVar3 = param_2;
                  FUN_10017c7f4(param_2,param_5,lVar2,&local_71);
                  if ((int)lVar3 != 0) {
                    return;
                  }
                  if (local_71 < 0x50) {
                    if (local_71 != 0) {
                      if (local_71 != 0x4c) break;
                      lVar3 = param_2;
                      FUN_10017c7f4(param_2,param_5,lVar10,(long)param_1 + 0x41);
                      if ((int)lVar3 != 0) {
                        return;
                      }
                      *(undefined1 *)(param_1 + 8) = 1;
LAB_1001791ac:
                      lVar10 = lVar10 + 1;
                    }
                  }
                  else if (local_71 == 0x50) {
                    lVar3 = param_2;
                    FUN_10017c7f4(param_2,param_5,lVar10,&local_79);
                    if ((int)lVar3 != 0) {
                      return;
                    }
                    uVar4 = param_4;
                    __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm
                              (param_4,param_2,param_5,lVar10 + 1,local_79,&local_78,&local_88);
                    if ((int)uVar4 != 0) {
                      return;
                    }
                    param_1[9] = (ulong)local_78;
                    *(undefined1 *)((long)param_1 + 0x42) = 1;
                    lVar10 = local_88 + lVar10 + 1;
                  }
                  else {
                    if (local_71 == 0x52) {
                      lVar3 = param_2;
                      FUN_10017c7f4(param_2,param_5,lVar10,(long)param_1 + 0x51);
                      if ((int)lVar3 != 0) {
                        return;
                      }
                      *(undefined1 *)(param_1 + 10) = 1;
                      goto LAB_1001791ac;
                    }
                    if (local_71 != 0x53) break;
                    *(undefined1 *)((long)param_1 + 0x52) = 1;
                  }
                  lVar2 = lVar2 + 1;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
            }
            uVar5 = lVar6 + lVar9 + local_70;
            param_1[0xb] = uVar5 + *param_1;
            if (uVar5 <= (ulong)param_1[1]) {
              param_1[0xc] = param_1[1] - uVar5;
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100179250 | __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy */

void __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
               (long *param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_90;
  undefined1 local_81;
  long local_80;
  byte local_71;
  long local_70;
  uint local_68;
  undefined4 uStack_64;
  
  lVar9 = param_2;
  FUN_10017c740();
  FUN_1001751ec(param_1,0,0x68);
  lVar6 = param_2;
  FUN_10017c8c8(param_2,param_3,param_5,0,&local_68);
  if ((int)lVar6 != 0) {
    return;
  }
  if (local_68 == 0xffffffff) {
    lVar6 = param_2;
    FUN_10017c93c(param_2,param_3,param_5,4,param_1 + 1);
    if ((int)lVar6 != 0) {
      return;
    }
    *param_1 = (param_5 - lVar9) + 0xc;
    lVar9 = param_2;
    FUN_10017c93c(param_2,param_3,param_5,0xc,param_1 + 2);
    if ((int)lVar9 != 0) {
      return;
    }
    uVar5 = param_1[2];
    lVar9 = -0xc;
    uVar7 = 0xffffffffffffffff;
    uVar8 = 0x14;
  }
  else {
    *param_1 = (param_5 - lVar9) + 4;
    param_1[1] = (ulong)local_68;
    lVar9 = param_2;
    FUN_10017c8c8(param_2,param_3,param_5,4,&local_68);
    if ((int)lVar9 != 0) {
      return;
    }
    uVar5 = (ulong)local_68;
    param_1[2] = uVar5;
    lVar9 = -4;
    uVar8 = 8;
    uVar7 = 0xffffffff;
  }
  if ((((uVar5 == 0) || (uVar5 == uVar7)) &&
      (lVar6 = param_2, FUN_10017c7f4(param_2,param_5,uVar8,param_1 + 3), (int)lVar6 == 0)) &&
     ((*(byte *)(param_1 + 3) < 5 && ((1 << (ulong)(*(byte *)(param_1 + 3) & 0x1f) & 0x1aU) != 0))))
  {
    lVar6 = 0;
    uVar5 = uVar8 | 1;
    do {
      lVar11 = lVar6;
      lVar6 = param_2;
      FUN_10017c7f4(param_2,param_5,uVar5,&local_68);
      if ((int)lVar6 != 0) {
        return;
      }
      bVar1 = lVar11 == 0;
      if (lVar11 == 0) {
        if ((local_68 & 0xff) != 0x7a) {
          if ((local_68 & 0xff) != 0) {
            return;
          }
          bVar1 = true;
          lVar6 = 1;
          goto LAB_100179450;
        }
        *(undefined1 *)(param_1 + 7) = 1;
      }
      lVar6 = lVar11 + -1;
    } while ((lVar11 != 2) && (uVar5 = uVar5 + 1, (char)local_68 != '\0'));
    if (lVar6 != 1) {
      lVar6 = -lVar6;
LAB_100179450:
      lVar6 = lVar6 + (uVar8 | 1);
      if ((char)param_1[3] == '\x04') {
        lVar2 = param_2;
        FUN_10017c7f4(param_2,param_5,lVar6,(long)param_1 + 0x19);
        if ((int)lVar2 != 0) {
          return;
        }
        lVar2 = param_2;
        FUN_10017c7f4(param_2,param_5,lVar6 + 1,(long)param_1 + 0x1a);
        if ((int)lVar2 != 0) {
          return;
        }
        lVar6 = lVar6 + 2;
      }
      lVar2 = param_2;
      FUN_10017b8b4(param_2,param_5,lVar6,param_1 + 4,&local_68);
      if ((int)lVar2 == 0) {
        lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
        lVar2 = param_2;
        FUN_10017b72c(param_2,param_5,lVar6,param_1 + 5,&local_68);
        if ((int)lVar2 == 0) {
          lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
          lVar2 = param_2;
          FUN_10017b8b4(param_2,param_5,lVar6,param_1 + 6,&local_68);
          if ((int)lVar2 == 0) {
            lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
            local_70 = 0;
            if ((char)param_1[7] == '\x01') {
              lVar2 = param_2;
              FUN_10017b8b4(param_2,param_5,lVar6,&local_70,&local_68);
              if ((int)lVar2 != 0) {
                return;
              }
              lVar6 = CONCAT44(uStack_64,local_68) + lVar6;
              if (!bVar1) {
                lVar11 = -lVar11;
                lVar2 = uVar8 + 2;
                lVar10 = lVar6;
                do {
                  lVar3 = param_2;
                  FUN_10017c7f4(param_2,param_5,lVar2,&local_71);
                  if ((int)lVar3 != 0) {
                    return;
                  }
                  if (local_71 < 0x50) {
                    if (local_71 != 0) {
                      if (local_71 != 0x4c) break;
                      lVar3 = param_2;
                      FUN_10017c7f4(param_2,param_5,lVar10,(long)param_1 + 0x41);
                      if ((int)lVar3 != 0) {
                        return;
                      }
                      *(undefined1 *)(param_1 + 8) = 1;
LAB_1001795dc:
                      lVar10 = lVar10 + 1;
                    }
                  }
                  else if (local_71 == 0x50) {
                    lVar3 = param_2;
                    FUN_10017c7f4(param_2,param_5,lVar10,&local_81);
                    if ((int)lVar3 != 0) {
                      return;
                    }
                    uVar4 = param_4;
                    __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm
                              (param_4,param_2,param_5,lVar10 + 1,local_81,&local_80,&local_90);
                    if ((int)uVar4 != 0) {
                      return;
                    }
                    param_1[9] = local_80;
                    *(undefined1 *)((long)param_1 + 0x42) = 1;
                    lVar10 = local_90 + lVar10 + 1;
                  }
                  else {
                    if (local_71 == 0x52) {
                      lVar3 = param_2;
                      FUN_10017c7f4(param_2,param_5,lVar10,(long)param_1 + 0x51);
                      if ((int)lVar3 != 0) {
                        return;
                      }
                      *(undefined1 *)(param_1 + 10) = 1;
                      goto LAB_1001795dc;
                    }
                    if (local_71 != 0x53) break;
                    *(undefined1 *)((long)param_1 + 0x52) = 1;
                  }
                  lVar2 = lVar2 + 1;
                  lVar11 = lVar11 + -1;
                } while (lVar11 != 0);
              }
            }
            uVar5 = lVar6 + lVar9 + local_70;
            param_1[0xb] = uVar5 + *param_1;
            if (uVar5 <= (ulong)param_1[1]) {
              param_1[0xc] = param_1[1] - uVar5;
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x100179680 | FUN_100179680 */

undefined8 FUN_100179680(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Address: 0x100179688 | FUN_100179688 */

undefined8 FUN_100179688(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Address: 0x100179690 | FUN_100179690 */

void FUN_100179690(void)

{
  return;
}



/* Address: 0x100179694 | FUN_100179694 */

undefined8
FUN_100179694(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)((long)param_1 + 0x11) = param_5;
  *(undefined1 *)(param_1 + 2) = param_4;
  return 0;
}



/* Address: 0x1001796a8 | FUN_1001796a8 */

void FUN_1001796a8(ulong *param_1,undefined8 param_2,ulong param_3,long param_4)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  uint *puVar6;
  ulong uVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_78;
  ulong local_70;
  ulong local_68;
  
  uVar7 = *param_1;
  uVar2 = param_1[1];
  FUN_10017c740();
  uVar5 = *param_1;
  FUN_10017c748();
  uVar5 = uVar5 + uVar7;
  local_68 = uVar7;
  FUN_100174f78(uVar7,param_2,&local_68);
  if ((int)uVar7 != 0 && local_68 < uVar5) {
    while( true ) {
      puVar6 = (uint *)*param_1;
      FUN_10017c7bc(puVar6,local_68,0,4);
      if (puVar6 == (uint *)0x0) break;
      uVar3 = *puVar6;
      (**(code **)(uVar2 + 8))();
      if (uVar3 == 0xffffffff) {
        puVar8 = (ulong *)*param_1;
        FUN_10017c7bc(puVar8,local_68,4,8);
        if (puVar8 == (ulong *)0x0) {
          return;
        }
        uVar7 = *puVar8;
        (**(code **)(uVar2 + 0x10))();
        uVar10 = 8;
        lVar11 = 0xc;
      }
      else {
        uVar7 = (ulong)*puVar6;
        (**(code **)(uVar2 + 8))();
        uVar7 = uVar7 & 0xffffffff;
        uVar10 = 4;
        lVar11 = 4;
      }
      if (uVar7 == 0) {
        return;
      }
      lVar9 = local_68 + lVar11;
      FUN_100174f78(lVar9,uVar7,&local_70);
      if ((int)lVar9 == 0) {
        return;
      }
      uVar7 = *param_1;
      FUN_100179884(uVar7,uVar2,local_68,lVar11,uVar10,&local_78);
      if ((int)uVar7 != 0) {
        return;
      }
      lVar11 = 0xffffffff;
      if (uVar3 == 0xffffffff) {
        lVar11 = -1;
      }
      bVar1 = 0;
      if (local_78 == lVar11) {
        bVar1 = *(byte *)((long)param_1 + 0x11);
      }
      if (((bVar1 & 1) == 0) && ((local_78 == 0 & (*(byte *)((long)param_1 + 0x11) ^ 0xff)) == 0)) {
        if ((char)param_1[2] == '\x01') {
          lVar11 = param_4;
          __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb
                    ();
          iVar4 = (int)lVar11;
        }
        else {
          lVar11 = param_4;
          __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb
                    (param_4,*param_1,uVar2,local_68);
          iVar4 = (int)lVar11;
        }
        if (iVar4 != 0) {
          return;
        }
        if ((*(ulong *)(param_4 + 0x18) <= param_3) && (param_3 < *(ulong *)(param_4 + 0x20))) {
          return;
        }
      }
      local_68 = local_70;
      if (uVar5 <= local_70) {
        return;
      }
    }
  }
  return;
}



/* Address: 0x100179884 | FUN_100179884 */

undefined8
FUN_100179884(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,int param_5,
             ulong *param_6)

{
  ulong uVar1;
  code *pcVar2;
  
  FUN_10017c7bc(param_1,param_3,param_4,param_5);
  if (param_1 == (ulong *)0x0) {
    return 5;
  }
  if (param_5 < 4) {
    if (param_5 == 1) {
      uVar1 = (ulong)(byte)*param_1;
      goto LAB_100179918;
    }
    if (param_5 != 2) {
      return 5;
    }
    pcVar2 = (code *)*param_2;
    uVar1 = (ulong)(ushort)*param_1;
  }
  else {
    if (param_5 != 4) {
      if (param_5 != 8) {
        return 5;
      }
      uVar1 = *param_1;
      (*(code *)param_2[2])();
      goto LAB_100179918;
    }
    pcVar2 = (code *)param_2[1];
    uVar1 = (ulong)(uint)*param_1;
  }
  (*pcVar2)();
  uVar1 = uVar1 & 0xffffffff;
LAB_100179918:
  *param_6 = uVar1;
  return 0;
}



/* Address: 0x100179934 | __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_ */

/* WARNING: Type propagation algorithm not settling */

void __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIjiEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
               (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,uint *param_8,long param_9,
               uint *param_10)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  uint **ppuVar5;
  undefined8 uVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  uint *******pppppppuVar10;
  uint *******pppppppuVar11;
  ulong uVar12;
  uint *******pppppppuVar13;
  undefined4 local_234;
  uint local_230 [2];
  uint *local_228;
  undefined8 local_220;
  undefined8 local_218;
  uint *local_208;
  uint *local_200;
  undefined8 *local_1f8;
  uint ******local_1f0 [50];
  uint *******local_60;
  byte local_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  
  local_60 = local_1f0;
  ppuVar5 = &local_228;
  FUN_10018b644(ppuVar5,param_1,param_4,param_5,param_6,param_7);
  if ((int)ppuVar5 == 0) {
    for (; param_9 != 0; param_9 = param_9 + -1) {
      if ((uint ********)local_60 == &local_60) {
        return;
      }
      *(uint *)local_60 = *param_8;
      param_8 = param_8 + 1;
      local_60 = (uint *******)((long)local_60 + 4);
    }
    if (local_208 <= local_228 && local_200 != local_228) {
      do {
        puVar8 = (uint *)((long)local_228 + 1);
        bVar1 = (byte)*local_228;
        pppppppuVar10 = local_60;
        switch((uint)bVar1) {
        case 6:
          goto LAB_10017a1ac;
        default:
          goto switchD_100179a14_caseD_7;
        case 8:
          if (puVar8 < local_208) {
            return;
          }
          if (local_200 == puVar8) {
            return;
          }
          uVar7 = (uint)*(byte *)((long)local_228 + 1);
          goto LAB_10017a264;
        case 9:
          if (puVar8 < local_208) {
            return;
          }
          if (local_200 == puVar8) {
            return;
          }
          uVar7 = (uint)*(char *)((long)local_228 + 1);
LAB_10017a264:
          local_228 = (uint *)((long)local_228 + 2);
LAB_10017a508:
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = uVar7;
          puVar8 = local_228;
          local_60 = (uint *******)((long)local_60 + 4);
          break;
        case 10:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 2) {
            return;
          }
          uVar7 = (uint)*(ushort *)puVar8;
          local_228 = puVar8;
          (*(code *)*local_1f8)();
          puVar8 = (uint *)((long)local_228 + 2);
          goto LAB_100179f40;
        case 0xb:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 2) {
            return;
          }
          sVar4 = *(short *)puVar8;
          local_228 = puVar8;
          (*(code *)*local_1f8)();
          local_228 = (uint *)((long)local_228 + 2);
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          uVar7 = (uint)sVar4;
          goto LAB_100179abc;
        case 0xc:
        case 0xd:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 4) {
            return;
          }
          uVar7 = *puVar8;
          local_228 = puVar8;
          (*(code *)local_1f8[1])();
          puVar8 = local_228 + 1;
LAB_100179f40:
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = uVar7;
          local_60 = (uint *******)((long)local_60 + 4);
          break;
        case 0xe:
        case 0xf:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 8) {
            return;
          }
          uVar7 = (uint)*(undefined8 *)puVar8;
          local_228 = puVar8;
          (*(code *)local_1f8[2])();
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = uVar7;
          puVar8 = local_228 + 2;
          local_60 = (uint *******)((long)local_60 + 4);
          break;
        case 0x10:
          uVar6 = local_220;
          local_228 = puVar8;
          FUN_10017b8b4(local_220,local_218,(long)puVar8 - (long)local_208,local_230,&local_58);
          if ((int)uVar6 != 0) {
            return;
          }
          goto LAB_100179ffc;
        case 0x11:
          uVar6 = local_220;
          local_228 = puVar8;
          FUN_10017b72c(local_220,local_218,(long)puVar8 - (long)local_208,local_230,&local_58);
          if ((int)uVar6 != 0) {
            return;
          }
LAB_100179ffc:
          puVar8 = (uint *)((long)local_228 +
                           CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))));
          if (puVar8 < local_208 || local_200 < puVar8) {
            return;
          }
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = local_230[0];
          local_60 = (uint *******)((long)local_60 + 4);
          break;
        case 0x12:
          if ((uint ********)local_60 == &local_60 || local_60 == local_1f0) {
            return;
          }
          uVar7 = *(uint *)((long)local_60 + -4);
          local_228 = puVar8;
          goto LAB_100179abc;
        case 0x13:
          if (local_60 == local_1f0) {
            return;
          }
          local_60 = (uint *******)((long)local_60 + -4);
          break;
        case 0x14:
          if ((uint ********)local_60 != &local_60 && 4 < (ulong)((long)local_60 - (long)local_1f0))
          {
            uVar7 = *(uint *)(local_60 + -1);
            local_228 = puVar8;
            goto LAB_100179abc;
          }
          if ((ulong)((long)local_60 - (long)local_1f0) < 5) {
            return;
          }
          break;
        case 0x15:
          if (puVar8 < local_208) {
            return;
          }
          if (local_200 == puVar8) {
            return;
          }
          uVar9 = (ulong)*(byte *)((long)local_228 + 1);
          uVar12 = (long)local_60 - (long)local_1f0 >> 2;
          if (((uint ********)local_60 != &local_60) && (uVar9 < uVar12)) {
            *(uint *)local_60 = *(uint *)((long)local_60 + (-1 - uVar9) * 4);
            local_60 = (uint *******)((long)local_60 + 4);
          }
          puVar8 = (uint *)((long)local_228 + 2);
          if (uVar12 <= uVar9) {
            return;
          }
          break;
        case 0x16:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar10 = (uint *******)((long)local_60 + -4);
          if (pppppppuVar10 == local_1f0) {
            return;
          }
          pppppppuVar11 = local_60 + -1;
          uVar7 = *(uint *)pppppppuVar11;
          if ((uint ********)pppppppuVar11 == &local_60) {
            return;
          }
          *(uint *)pppppppuVar11 = *(uint *)pppppppuVar10;
          if ((uint ********)pppppppuVar10 == &local_60) {
            return;
          }
          *(uint *)((long)local_60 + -4) = uVar7;
          break;
        case 0x17:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar10 = (uint *******)((long)local_60 + -4);
          if (pppppppuVar10 == local_1f0) {
            return;
          }
          pppppppuVar11 = local_60 + -1;
          uVar7 = *(uint *)pppppppuVar11;
          if (pppppppuVar11 == local_1f0) {
            return;
          }
          pppppppuVar13 = (uint *******)((long)local_60 + -0xc);
          uVar2 = *(uint *)pppppppuVar13;
          if ((uint ********)pppppppuVar13 == &local_60) {
            return;
          }
          *(uint *)pppppppuVar13 = *(uint *)pppppppuVar10;
          if ((uint ********)pppppppuVar11 == &local_60) {
            return;
          }
          *(uint *)pppppppuVar11 = uVar2;
          if ((uint ********)pppppppuVar10 == &local_60) {
            return;
          }
          *(uint *)((long)local_60 + -4) = uVar7;
          break;
        case 0x18:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar10 = (uint *******)((long)local_60 + -4);
          if (pppppppuVar10 == local_1f0) {
            return;
          }
          local_60 = local_60 + -1;
          uVar7 = *(uint *)local_60;
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = *(uint *)pppppppuVar10;
          if ((uint ********)pppppppuVar10 == &local_60) {
            return;
          }
          *(uint *)pppppppuVar10 = uVar7;
          local_60 = pppppppuVar10;
LAB_10017a1ac:
          if (local_60 == local_1f0) {
            return;
          }
          local_60 = (uint *******)((long)local_60 + -4);
          uVar6 = param_2;
          local_228 = puVar8;
          FUN_100174ff0(param_2,*(uint *)local_60,0,&local_58,4);
          if ((int)uVar6 != 0) {
            return;
          }
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          uVar7 = CONCAT22(uStack_56,CONCAT11(uStack_57,local_58));
          goto LAB_100179abc;
        case 0x19:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar11 = (uint *******)((long)local_60 + -4);
          uVar7 = *(uint *)pppppppuVar11;
          if ((int)uVar7 < 0) {
            if ((uint ********)pppppppuVar11 == &local_60) {
              return;
            }
            goto LAB_10017a530;
          }
          if ((uint ********)pppppppuVar11 == &local_60) {
            return;
          }
          break;
        case 0x1a:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) & *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x1b:
          if (local_60 == local_1f0) {
            return;
          }
          uVar2 = *(uint *)((long)local_60 + -4);
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if (uVar2 == 0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = 0;
          if (uVar2 != 0) {
            uVar7 = *(uint *)(local_60 + -1) / uVar2;
          }
          goto LAB_10017a4c4;
        case 0x1c:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) - *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x1d:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar10 = (uint *******)((long)local_60 + -4);
          uVar7 = *(uint *)pppppppuVar10;
          if (pppppppuVar10 == local_1f0) {
            return;
          }
          if (uVar7 == 0) {
            return;
          }
          local_60 = local_60 + -1;
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          uVar2 = 0;
          if (uVar7 != 0) {
            uVar2 = *(uint *)local_60 / uVar7;
          }
          *(uint *)local_60 = *(uint *)local_60 - uVar2 * uVar7;
          local_60 = pppppppuVar10;
          break;
        case 0x1e:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) * *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x1f:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint ********)((long)local_60 + -4) == &local_60) {
            return;
          }
          uVar7 = *(uint *)((long)local_60 + -4);
LAB_10017a530:
          uVar7 = -uVar7;
          local_228 = puVar8;
          goto LAB_10017a534;
        case 0x20:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint ********)((long)local_60 + -4) == &local_60) {
            return;
          }
          uVar7 = ~*(uint *)((long)local_60 + -4);
          local_228 = puVar8;
          goto LAB_10017a534;
        case 0x21:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) | *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x22:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) + *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x23:
          uVar6 = local_220;
          local_228 = puVar8;
          FUN_10017b8b4(local_220,local_218,(long)puVar8 - (long)local_208,local_230,&local_58);
          if ((int)uVar6 != 0) {
            return;
          }
          local_228 = (uint *)((long)local_228 +
                              CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))));
          if (local_228 < local_208 || local_200 < local_228) {
            return;
          }
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint ********)((long)local_60 + -4) == &local_60) {
            return;
          }
          uVar7 = *(uint *)((long)local_60 + -4) + local_230[0];
          pppppppuVar10 = local_60;
LAB_10017a534:
          *(uint *)((long)pppppppuVar10 + -4) = uVar7;
          puVar8 = local_228;
          local_60 = pppppppuVar10;
          break;
        case 0x24:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) << (ulong)(*(uint *)((long)local_60 + -4) & 0x1f);
          goto LAB_10017a4c4;
        case 0x25:
        case 0x26:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (int)*(uint *)(local_60 + -1) >> (*(uint *)((long)local_60 + -4) & 0x1f);
          goto LAB_10017a4c4;
        case 0x27:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = *(uint *)(local_60 + -1) ^ *(uint *)((long)local_60 + -4);
          goto LAB_10017a4c4;
        case 0x28:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 2) {
            return;
          }
          sVar4 = *(short *)puVar8;
          local_228 = puVar8;
          (*(code *)*local_1f8)();
          if (local_60 == local_1f0) {
            return;
          }
          local_60 = (uint *******)((long)local_60 + -4);
          puVar8 = (uint *)((long)local_228 + 2);
          if (*(uint *)local_60 != 0) {
            puVar8 = (uint *)((long)local_228 + 2 + (long)sVar4);
            goto LAB_10017a388;
          }
          break;
        case 0x29:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)(local_60 + -1) == *(uint *)((long)local_60 + -4));
          goto LAB_10017a4c4;
        case 0x2a:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)((long)local_60 + -4) <= *(uint *)(local_60 + -1));
          goto LAB_10017a4c4;
        case 0x2b:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)((long)local_60 + -4) < *(uint *)(local_60 + -1));
          goto LAB_10017a4c4;
        case 0x2c:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)(local_60 + -1) <= *(uint *)((long)local_60 + -4));
          goto LAB_10017a4c4;
        case 0x2d:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)(local_60 + -1) < *(uint *)((long)local_60 + -4));
          goto LAB_10017a4c4;
        case 0x2e:
          if (local_60 == local_1f0) {
            return;
          }
          if ((uint *******)((long)local_60 + -4) == local_1f0) {
            return;
          }
          if ((uint ********)(local_60 + -1) == &local_60) {
            return;
          }
          uVar7 = (uint)(*(uint *)(local_60 + -1) != *(uint *)((long)local_60 + -4));
LAB_10017a4c4:
          *(uint *)(local_60 + -1) = uVar7;
          local_60 = (uint *******)((long)local_60 + -4);
          break;
        case 0x2f:
          if (puVar8 < local_208) {
            return;
          }
          if ((ulong)((long)local_200 - (long)puVar8) < 2) {
            return;
          }
          sVar4 = *(short *)puVar8;
          local_228 = puVar8;
          (*(code *)*local_1f8)();
          puVar8 = (uint *)((long)local_228 + (long)sVar4 + 2);
LAB_10017a388:
          if (puVar8 < local_208 || local_200 < puVar8) {
            return;
          }
          break;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          uVar7 = bVar1 - 0x30;
          local_228 = puVar8;
          goto LAB_100179abc;
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x8f:
          uVar9 = param_3;
          local_228 = puVar8;
          FUN_10017fe40(param_3,(ulong)bVar1 - 0x70,&local_58);
          if ((int)uVar9 == 0) {
            return;
          }
          uVar9 = param_3;
          FUN_10017f6ec(param_3,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
          if ((uVar9 & 1) == 0) {
            return;
          }
          uVar3 = CONCAT22(uStack_56,CONCAT11(uStack_57,local_58));
          goto LAB_100179a54;
        case 0x92:
          uVar6 = local_220;
          local_228 = puVar8;
          FUN_10017b8b4(local_220,local_218,(long)puVar8 - (long)local_208,local_230,&local_58);
          if ((int)uVar6 != 0) {
            return;
          }
          local_228 = (uint *)((long)local_228 +
                              CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))));
          if (local_228 < local_208 || local_200 < local_228) {
            return;
          }
          uVar9 = param_3;
          FUN_10017fe40(param_3,local_230[0],&local_234);
          if ((int)uVar9 == 0) {
            return;
          }
          uVar9 = param_3;
          FUN_10017f6ec(param_3,local_234);
          uVar3 = local_234;
          if ((uVar9 & 1) == 0) {
            return;
          }
LAB_100179a54:
          uVar9 = param_3;
          FUN_10017f724(param_3,uVar3);
          uVar6 = local_220;
          FUN_10017b72c(local_220,local_218,(long)local_228 - (long)local_208,local_230,&local_58);
          if ((int)uVar6 != 0) {
            return;
          }
          local_228 = (uint *)((long)local_228 +
                              CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))));
          if (local_228 < local_208) {
            return;
          }
          if (local_200 < local_228) {
            return;
          }
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          uVar7 = local_230[0] + (int)uVar9;
LAB_100179abc:
          *(uint *)local_60 = uVar7;
          puVar8 = local_228;
          local_60 = (uint *******)((long)local_60 + 4);
          break;
        case 0x94:
          goto switchD_100179a14_caseD_94;
        case 0x95:
          if (local_60 == local_1f0) {
            return;
          }
          pppppppuVar10 = (uint *******)((long)local_60 + -4);
          if (pppppppuVar10 == local_1f0) {
            return;
          }
          local_60 = local_60 + -1;
          uVar7 = *(uint *)local_60;
          if ((uint ********)local_60 == &local_60) {
            return;
          }
          *(uint *)local_60 = *(uint *)pppppppuVar10;
          if ((uint ********)pppppppuVar10 == &local_60) {
            return;
          }
          *(uint *)pppppppuVar10 = uVar7;
          local_60 = pppppppuVar10;
          goto switchD_100179a14_caseD_94;
        case 0x96:
          break;
        }
        local_228 = puVar8;
      } while (local_208 <= local_228 && local_200 != local_228);
    }
    if (local_60 == local_1f0) {
      return;
    }
    *param_10 = *(uint *)((long)local_60 + -4);
    return;
  }
switchD_100179a14_caseD_7:
  return;
switchD_100179a14_caseD_94:
  if (puVar8 < local_208) {
    return;
  }
  if (local_200 == puVar8) {
    return;
  }
  bVar1 = *(byte *)((long)local_228 + 1);
  local_228 = (uint *)((long)local_228 + 2);
  if (4 < bVar1) {
    return;
  }
  if (local_60 == local_1f0) {
    return;
  }
  local_60 = (uint *******)((long)local_60 + -4);
  uVar7 = *(uint *)local_60;
  if (bVar1 == 4) {
    uVar6 = param_2;
    FUN_100174ff0(param_2,uVar7,0,&local_58,4);
    if ((int)uVar6 != 0) {
      return;
    }
    uVar7 = CONCAT22(uStack_56,CONCAT11(uStack_57,local_58));
  }
  else if (bVar1 == 2) {
    uVar6 = param_2;
    FUN_100174ff0(param_2,uVar7,0,&local_58,2);
    if ((int)uVar6 != 0) {
      return;
    }
    uVar7 = (uint)CONCAT11(uStack_57,local_58);
  }
  else {
    if (bVar1 != 1) {
      return;
    }
    uVar6 = param_2;
    FUN_100174ff0(param_2,uVar7,0,&local_58,1);
    if ((int)uVar6 != 0) {
      return;
    }
    uVar7 = (uint)local_58;
  }
  goto LAB_10017a508;
}



/* Address: 0x10017a57c | __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_ */

/* WARNING: Type propagation algorithm not settling */

void __ZN7plcrash2PH5async35plcrash_async_dwarf_expression_evalIyxEE15plcrash_error_tP21plcrash_async_mobjectjPK26plcrash_async_thread_statePK25PHplcrash_async_byteorderyxyPT_mSD_
               (undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
               undefined8 param_5,undefined8 param_6,undefined8 param_7,long *param_8,long param_9,
               long *param_10)

{
  byte bVar1;
  undefined4 uVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  ulong **ppuVar6;
  undefined8 uVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *******pppppppuVar10;
  ulong ******ppppppuVar11;
  ulong uVar12;
  ulong *******pppppppuVar13;
  ulong ******ppppppuVar14;
  ulong *******pppppppuVar15;
  undefined4 local_3c4;
  ulong ******local_3c0;
  ulong *local_3b8;
  undefined8 local_3b0;
  undefined8 local_3a8;
  ulong *local_398;
  ulong *local_390;
  undefined8 *local_388;
  ulong ******local_380 [100];
  ulong *******local_60;
  byte local_58;
  undefined1 uStack_57;
  undefined2 uStack_56;
  undefined4 uStack_54;
  
  local_60 = local_380;
  ppuVar6 = &local_3b8;
  FUN_10018b644(ppuVar6,param_1,param_4,param_5,param_6,param_7);
  if ((int)ppuVar6 == 0) {
    for (; param_9 != 0; param_9 = param_9 + -1) {
      if ((ulong ********)local_60 == &local_60) {
        return;
      }
      *local_60 = (ulong ******)*param_8;
      param_8 = param_8 + 1;
      local_60 = local_60 + 1;
    }
    if (local_398 <= local_3b8 && local_390 != local_3b8) {
      do {
        puVar8 = (ulong *)((long)local_3b8 + 1);
        bVar1 = (byte)*local_3b8;
        pppppppuVar10 = local_60;
        switch(bVar1) {
        case 6:
          goto LAB_10017ae08;
        default:
          goto switchD_10017a65c_caseD_7;
        case 8:
          if (puVar8 < local_398) {
            return;
          }
          if (local_390 == puVar8) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)*(byte *)((long)local_3b8 + 1);
          goto LAB_10017aee8;
        case 9:
          if (puVar8 < local_398) {
            return;
          }
          if (local_390 == puVar8) {
            return;
          }
          ppppppuVar14 = (ulong ******)(long)*(char *)((long)local_3b8 + 1);
LAB_10017aee8:
          local_3b8 = (ulong *)((long)local_3b8 + 2);
LAB_10017aef0:
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          *local_60 = ppppppuVar14;
          puVar8 = local_3b8;
          local_60 = local_60 + 1;
          goto switchD_10017a65c_caseD_96;
        case 10:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 2) {
            return;
          }
          uVar9 = (ulong)*(ushort *)puVar8;
          local_3b8 = puVar8;
          (*(code *)*local_388)();
          local_3b8 = (ulong *)((long)local_3b8 + 2);
          goto LAB_10017af94;
        case 0xb:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 2) {
            return;
          }
          sVar3 = *(short *)puVar8;
          local_3b8 = puVar8;
          (*(code *)*local_388)();
          local_3b8 = (ulong *)((long)local_3b8 + 2);
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(long)sVar3;
          goto LAB_10017a704;
        case 0xc:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 4) {
            return;
          }
          uVar9 = (ulong)*(uint *)puVar8;
          local_3b8 = puVar8;
          (*(code *)local_388[1])();
          local_3b8 = (ulong *)((long)local_3b8 + 4);
LAB_10017af94:
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(uVar9 & 0xffffffff);
          goto LAB_10017a704;
        case 0xd:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 4) {
            return;
          }
          uVar4 = *(uint *)puVar8;
          local_3b8 = puVar8;
          (*(code *)local_388[1])();
          local_3b8 = (ulong *)((long)local_3b8 + 4);
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(long)(int)uVar4;
          goto LAB_10017a704;
        case 0xe:
        case 0xf:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 8) {
            return;
          }
          ppppppuVar14 = (ulong ******)*puVar8;
          local_3b8 = puVar8;
          (*(code *)local_388[2])();
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          *local_60 = ppppppuVar14;
          puVar8 = local_3b8 + 1;
          local_60 = local_60 + 1;
          goto switchD_10017a65c_caseD_96;
        case 0x10:
          uVar7 = local_3b0;
          local_3b8 = puVar8;
          FUN_10017b8b4(local_3b0,local_3a8,(long)puVar8 - (long)local_398,&local_3c0,&local_58);
          iVar5 = (int)uVar7;
          ppppppuVar14 = local_3c0;
          goto joined_r0x00010017ac50;
        case 0x11:
          uVar7 = local_3b0;
          local_3b8 = puVar8;
          FUN_10017b72c(local_3b0,local_3a8,(long)puVar8 - (long)local_398,&local_3c0,&local_58);
          iVar5 = (int)uVar7;
          ppppppuVar14 = local_3c0;
joined_r0x00010017ac50:
          if (iVar5 != 0) {
            return;
          }
          local_3b8 = (ulong *)((long)local_3b8 +
                               CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))))
          ;
          if (local_3b8 < local_398) {
            return;
          }
          if (local_390 < local_3b8) {
            return;
          }
          local_3c0 = ppppppuVar14;
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          goto LAB_10017a704;
        case 0x12:
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          if (local_60 == local_380) {
            return;
          }
          ppppppuVar14 = local_60[-1];
          local_3b8 = puVar8;
          goto LAB_10017a704;
        case 0x13:
          if (local_60 == local_380) {
            return;
          }
          local_60 = local_60 + -1;
          goto switchD_10017a65c_caseD_96;
        case 0x14:
          if ((ulong ********)local_60 != &local_60 && 8 < (ulong)((long)local_60 - (long)local_380)
             ) {
            ppppppuVar14 = local_60[-2];
            local_3b8 = puVar8;
            goto LAB_10017a704;
          }
          if ((ulong)((long)local_60 - (long)local_380) < 9) {
            return;
          }
          goto switchD_10017a65c_caseD_96;
        case 0x15:
          if (puVar8 < local_398) {
            return;
          }
          if (local_390 == puVar8) {
            return;
          }
          uVar9 = (ulong)*(byte *)((long)local_3b8 + 1);
          uVar12 = (long)local_60 - (long)local_380 >> 3;
          if (((ulong ********)local_60 != &local_60) && (uVar9 < uVar12)) {
            *local_60 = local_60[-1 - uVar9];
            local_60 = local_60 + 1;
          }
          puVar8 = (ulong *)((long)local_3b8 + 2);
          if (uVar12 <= uVar9) {
            return;
          }
          goto switchD_10017a65c_caseD_96;
        case 0x16:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar10 = local_60 + -1;
          if (pppppppuVar10 == local_380) {
            return;
          }
          pppppppuVar13 = local_60 + -2;
          ppppppuVar14 = *pppppppuVar13;
          if ((ulong ********)pppppppuVar13 == &local_60) {
            return;
          }
          *pppppppuVar13 = *pppppppuVar10;
          if ((ulong ********)pppppppuVar10 == &local_60) {
            return;
          }
          local_60[-1] = ppppppuVar14;
          goto switchD_10017a65c_caseD_96;
        case 0x17:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar10 = local_60 + -1;
          if (pppppppuVar10 == local_380) {
            return;
          }
          pppppppuVar13 = local_60 + -2;
          ppppppuVar14 = *pppppppuVar13;
          if (pppppppuVar13 == local_380) {
            return;
          }
          pppppppuVar15 = local_60 + -3;
          ppppppuVar11 = *pppppppuVar15;
          if ((ulong ********)pppppppuVar15 == &local_60) {
            return;
          }
          *pppppppuVar15 = *pppppppuVar10;
          if ((ulong ********)pppppppuVar13 == &local_60) {
            return;
          }
          *pppppppuVar13 = ppppppuVar11;
          if ((ulong ********)pppppppuVar10 == &local_60) {
            return;
          }
          local_60[-1] = ppppppuVar14;
          goto switchD_10017a65c_caseD_96;
        case 0x18:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar10 = local_60 + -1;
          if (pppppppuVar10 == local_380) {
            return;
          }
          local_60 = local_60 + -2;
          ppppppuVar14 = *local_60;
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          *local_60 = *pppppppuVar10;
          if ((ulong ********)pppppppuVar10 == &local_60) {
            return;
          }
          *pppppppuVar10 = ppppppuVar14;
          local_60 = pppppppuVar10;
LAB_10017ae08:
          if (local_60 == local_380) {
            return;
          }
          local_60 = local_60 + -1;
          uVar7 = param_2;
          local_3b8 = puVar8;
          FUN_100174ff0(param_2,*local_60,0,&local_58,8);
          if ((int)uVar7 != 0) {
            return;
          }
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)
                         CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
          goto LAB_10017a704;
        case 0x19:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar13 = local_60 + -1;
          ppppppuVar14 = *pppppppuVar13;
          if ((long)ppppppuVar14 < 0) {
            if ((ulong ********)pppppppuVar13 == &local_60) {
              return;
            }
            goto LAB_10017b208;
          }
          if ((ulong ********)pppppppuVar13 == &local_60) {
            return;
          }
          goto switchD_10017a65c_caseD_96;
        case 0x1a:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((ulong)local_60[-2] & (ulong)local_60[-1]);
          break;
        case 0x1b:
          if (local_60 == local_380) {
            return;
          }
          ppppppuVar11 = local_60[-1];
          if (local_60 + -1 == local_380) {
            return;
          }
          if (ppppppuVar11 == (ulong ******)0x0) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)0x0;
          if (ppppppuVar11 != (ulong ******)0x0) {
            ppppppuVar14 = (ulong ******)((ulong)local_60[-2] / (ulong)ppppppuVar11);
          }
          break;
        case 0x1c:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-2] - (long)local_60[-1]);
          break;
        case 0x1d:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar10 = local_60 + -1;
          ppppppuVar14 = *pppppppuVar10;
          if (pppppppuVar10 == local_380) {
            return;
          }
          if (ppppppuVar14 == (ulong ******)0x0) {
            return;
          }
          local_60 = local_60 + -2;
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          uVar9 = 0;
          if (ppppppuVar14 != (ulong ******)0x0) {
            uVar9 = (ulong)*local_60 / (ulong)ppppppuVar14;
          }
          *local_60 = (ulong ******)((long)*local_60 - uVar9 * (long)ppppppuVar14);
          local_60 = pppppppuVar10;
          goto switchD_10017a65c_caseD_96;
        case 0x1e:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-2] * (long)local_60[-1]);
          break;
        case 0x1f:
          if (local_60 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -1) == &local_60) {
            return;
          }
          ppppppuVar14 = local_60[-1];
LAB_10017b208:
          ppppppuVar14 = (ulong ******)-(long)ppppppuVar14;
          local_3b8 = puVar8;
          goto LAB_10017b20c;
        case 0x20:
          if (local_60 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -1) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)~(ulong)local_60[-1];
          local_3b8 = puVar8;
          goto LAB_10017b20c;
        case 0x21:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((ulong)local_60[-2] | (ulong)local_60[-1]);
          break;
        case 0x22:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-2] + (long)local_60[-1]);
          break;
        case 0x23:
          uVar7 = local_3b0;
          local_3b8 = puVar8;
          FUN_10017b8b4(local_3b0,local_3a8,(long)puVar8 - (long)local_398,&local_3c0,&local_58);
          if ((int)uVar7 != 0) {
            return;
          }
          local_3b8 = (ulong *)((long)local_3b8 +
                               CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))))
          ;
          if (local_3b8 < local_398) {
            return;
          }
          if (local_390 < local_3b8) {
            return;
          }
          if (local_60 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -1) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-1] + (long)local_3c0);
          pppppppuVar10 = local_60;
LAB_10017b20c:
          pppppppuVar10[-1] = ppppppuVar14;
          puVar8 = local_3b8;
          local_60 = pppppppuVar10;
          goto switchD_10017a65c_caseD_96;
        case 0x24:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-2] << ((ulong)local_60[-1] & 0x3f));
          break;
        case 0x25:
        case 0x26:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_60[-2] >> ((ulong)local_60[-1] & 0x3f));
          break;
        case 0x27:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((ulong)local_60[-2] ^ (ulong)local_60[-1]);
          break;
        case 0x28:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 2) {
            return;
          }
          sVar3 = *(short *)puVar8;
          local_3b8 = puVar8;
          (*(code *)*local_388)();
          if (local_60 == local_380) {
            return;
          }
          local_60 = local_60 + -1;
          puVar8 = (ulong *)((long)local_3b8 + 2);
          if (*local_60 != (ulong ******)0x0) {
            puVar8 = (ulong *)((long)local_3b8 + 2 + (long)sVar3);
            goto LAB_10017b044;
          }
          goto switchD_10017a65c_caseD_96;
        case 0x29:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-2] == local_60[-1]);
          break;
        case 0x2a:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-1] <= local_60[-2]);
          break;
        case 0x2b:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-1] < local_60[-2]);
          break;
        case 0x2c:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-2] <= local_60[-1]);
          break;
        case 0x2d:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-2] < local_60[-1]);
          break;
        case 0x2e:
          if (local_60 == local_380) {
            return;
          }
          if (local_60 + -1 == local_380) {
            return;
          }
          if ((ulong ********)(local_60 + -2) == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)(ulong)(local_60[-2] != local_60[-1]);
          break;
        case 0x2f:
          if (puVar8 < local_398) {
            return;
          }
          if ((ulong)((long)local_390 - (long)puVar8) < 2) {
            return;
          }
          sVar3 = *(short *)puVar8;
          local_3b8 = puVar8;
          (*(code *)*local_388)();
          puVar8 = (ulong *)((long)local_3b8 + (long)sVar3 + 2);
LAB_10017b044:
          if (puVar8 < local_398 || local_390 < puVar8) {
            return;
          }
          goto switchD_10017a65c_caseD_96;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4a:
        case 0x4b:
        case 0x4c:
        case 0x4d:
        case 0x4e:
        case 0x4f:
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((ulong)bVar1 - 0x30);
          local_3b8 = puVar8;
          goto LAB_10017a704;
        case 0x70:
        case 0x71:
        case 0x72:
        case 0x73:
        case 0x74:
        case 0x75:
        case 0x76:
        case 0x77:
        case 0x78:
        case 0x79:
        case 0x7a:
        case 0x7b:
        case 0x7c:
        case 0x7d:
        case 0x7e:
        case 0x7f:
        case 0x80:
        case 0x81:
        case 0x82:
        case 0x83:
        case 0x84:
        case 0x85:
        case 0x86:
        case 0x87:
        case 0x88:
        case 0x89:
        case 0x8a:
        case 0x8b:
        case 0x8c:
        case 0x8d:
        case 0x8e:
        case 0x8f:
          uVar9 = param_3;
          local_3b8 = puVar8;
          FUN_10017fe40(param_3,(ulong)bVar1 - 0x70,&local_58);
          if ((int)uVar9 == 0) {
            return;
          }
          uVar9 = param_3;
          FUN_10017f6ec(param_3,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
          if ((uVar9 & 1) == 0) {
            return;
          }
          uVar2 = CONCAT22(uStack_56,CONCAT11(uStack_57,local_58));
          goto LAB_10017a69c;
        case 0x92:
          uVar7 = local_3b0;
          local_3b8 = puVar8;
          FUN_10017b8b4(local_3b0,local_3a8,(long)puVar8 - (long)local_398,&local_3c0,&local_58);
          if ((int)uVar7 != 0) {
            return;
          }
          local_3b8 = (ulong *)((long)local_3b8 +
                               CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))))
          ;
          if (local_3b8 < local_398) {
            return;
          }
          if (local_390 < local_3b8) {
            return;
          }
          uVar9 = param_3;
          FUN_10017fe40(param_3,local_3c0,&local_3c4);
          if ((int)uVar9 == 0) {
            return;
          }
          uVar9 = param_3;
          FUN_10017f6ec(param_3,local_3c4);
          uVar2 = local_3c4;
          if ((uVar9 & 1) == 0) {
            return;
          }
LAB_10017a69c:
          uVar9 = param_3;
          FUN_10017f724(param_3,uVar2);
          uVar7 = local_3b0;
          FUN_10017b72c(local_3b0,local_3a8,(long)local_3b8 - (long)local_398,&local_3c0,&local_58);
          if ((int)uVar7 != 0) {
            return;
          }
          local_3b8 = (ulong *)((long)local_3b8 +
                               CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58))))
          ;
          if (local_3b8 < local_398) {
            return;
          }
          if (local_390 < local_3b8) {
            return;
          }
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          ppppppuVar14 = (ulong ******)((long)local_3c0 + uVar9);
LAB_10017a704:
          *local_60 = ppppppuVar14;
          puVar8 = local_3b8;
          local_60 = local_60 + 1;
          goto switchD_10017a65c_caseD_96;
        case 0x94:
          goto switchD_10017a65c_caseD_94;
        case 0x95:
          if (local_60 == local_380) {
            return;
          }
          pppppppuVar10 = local_60 + -1;
          if (pppppppuVar10 == local_380) {
            return;
          }
          local_60 = local_60 + -2;
          ppppppuVar14 = *local_60;
          if ((ulong ********)local_60 == &local_60) {
            return;
          }
          *local_60 = *pppppppuVar10;
          if ((ulong ********)pppppppuVar10 == &local_60) {
            return;
          }
          *pppppppuVar10 = ppppppuVar14;
          local_60 = pppppppuVar10;
          goto switchD_10017a65c_caseD_94;
        case 0x96:
          goto switchD_10017a65c_caseD_96;
        }
        local_60[-2] = ppppppuVar14;
        local_60 = local_60 + -1;
switchD_10017a65c_caseD_96:
        local_3b8 = puVar8;
      } while (local_398 <= local_3b8 && local_390 != local_3b8);
    }
    if (local_60 == local_380) {
      return;
    }
    *param_10 = (long)local_60[-1];
    return;
  }
switchD_10017a65c_caseD_7:
  return;
switchD_10017a65c_caseD_94:
  if (puVar8 < local_398) {
    return;
  }
  if (local_390 == puVar8) {
    return;
  }
  bVar1 = *(byte *)((long)local_3b8 + 1);
  local_3b8 = (ulong *)((long)local_3b8 + 2);
  if (8 < bVar1) {
    return;
  }
  if (local_60 == local_380) {
    return;
  }
  local_60 = local_60 + -1;
  ppppppuVar14 = *local_60;
  if (bVar1 < 4) {
    if (bVar1 == 1) {
      uVar7 = param_2;
      FUN_100174ff0(param_2,ppppppuVar14,0,&local_58,1);
      if ((int)uVar7 != 0) {
        return;
      }
      ppppppuVar14 = (ulong ******)(ulong)local_58;
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      uVar7 = param_2;
      FUN_100174ff0(param_2,ppppppuVar14,0,&local_58,2);
      if ((int)uVar7 != 0) {
        return;
      }
      ppppppuVar14 = (ulong ******)(ulong)CONCAT11(uStack_57,local_58);
    }
  }
  else if (bVar1 == 4) {
    uVar7 = param_2;
    FUN_100174ff0(param_2,ppppppuVar14,0,&local_58,4);
    if ((int)uVar7 != 0) {
      return;
    }
    ppppppuVar14 = (ulong ******)(ulong)CONCAT22(uStack_56,CONCAT11(uStack_57,local_58));
  }
  else {
    if (bVar1 != 8) {
      return;
    }
    uVar7 = param_2;
    FUN_100174ff0(param_2,ppppppuVar14,0,&local_58,8);
    if ((int)uVar7 != 0) {
      return;
    }
    ppppppuVar14 = (ulong ******)
                   CONCAT44(uStack_54,CONCAT22(uStack_56,CONCAT11(uStack_57,local_58)));
  }
  goto LAB_10017aef0;
}



/* Address: 0x10017b254 | __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb */

void __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb
               (long *param_1,ulong param_2,undefined8 param_3,long param_4,int param_5)

{
  byte bVar1;
  ulong uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint local_11c;
  long local_118;
  uint local_10c;
  uint local_108;
  int iStack_104;
  byte local_d0;
  byte local_b8;
  byte local_b7;
  undefined1 auStack_a0 [48];
  long local_70 [2];
  
  uVar5 = param_2;
  FUN_10017c740();
  uVar2 = param_2;
  FUN_10017c8c8(param_2,param_3,param_4,0,&local_108);
  if ((int)uVar2 == 0) {
    if (local_108 == 0xffffffff) {
      uVar2 = param_2;
      FUN_10017c93c(param_2,param_3,param_4,4,param_1 + 1);
      if ((int)uVar2 != 0) {
        return;
      }
      lVar7 = 8;
      lVar6 = 0xc;
    }
    else {
      param_1[1] = (ulong)local_108;
      lVar6 = 4;
      lVar7 = 4;
    }
    lVar8 = param_4 - uVar5;
    *param_1 = lVar8 + lVar6;
    uVar2 = param_2;
    FUN_100179884(param_2,param_3,param_4,lVar6,lVar7,&local_108);
    if ((int)uVar2 == 0) {
      uVar2 = CONCAT44(iStack_104,local_108);
      if (param_5 == 0) {
        local_70[0] = (lVar6 + param_4) - uVar2;
        if ((ulong)(lVar6 + param_4) < uVar2) {
          return;
        }
        param_1[2] = local_70[0] - uVar5;
      }
      else {
        param_1[2] = uVar2;
        if (iStack_104 < 0) {
          return;
        }
        FUN_100174f78(uVar5,uVar2,local_70);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC1EPK25PHplcrash_async_byteorder(auStack_a0,param_3)
      ;
      puVar3 = &local_108;
      __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIjEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
                (puVar3,param_2,param_3,auStack_a0,local_70[0]);
      if ((int)puVar3 == 0) {
        bVar1 = local_b7;
        if ((local_d0 & local_b8 & 1) == 0) {
          bVar1 = 0;
        }
        puVar4 = auStack_a0;
        __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm
                  (puVar4,param_2,param_4,lVar6 + lVar7,bVar1,&local_10c,&local_118);
        if ((int)puVar4 == 0) {
          param_1[3] = (ulong)local_10c;
          lVar6 = local_118 + lVar6 + lVar7;
          puVar4 = auStack_a0;
          __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm
                    (puVar4,param_2,param_4,lVar6,bVar1 & 0xf,&local_11c,&local_118);
          if ((int)puVar4 == 0) {
            if (!CARRY8((ulong)local_11c,param_1[3])) {
              local_118 = lVar8 + lVar6 + local_118;
              param_1[4] = param_1[3] + (ulong)local_11c;
              param_1[5] = local_118;
              uVar5 = local_118 - *param_1;
              if (uVar5 <= (ulong)param_1[1]) {
                param_1[6] = param_1[1] - uVar5;
                FUN_100179690(&local_108);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10017b468 | __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb */

void __ZN7plcrash2PH5async33plcrash_async_dwarf_fde_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_fde_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderyb
               (long *param_1,ulong param_2,undefined8 param_3,long param_4,int param_5)

{
  byte bVar1;
  ulong uVar2;
  uint *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong local_138;
  long local_130;
  long lStack_128;
  uint local_120;
  int iStack_11c;
  byte local_e8;
  byte local_d0;
  byte local_cf;
  undefined1 auStack_b8 [80];
  long local_68;
  
  uVar5 = param_2;
  FUN_10017c740();
  uVar2 = param_2;
  FUN_10017c8c8(param_2,param_3,param_4,0,&local_120);
  if ((int)uVar2 == 0) {
    if (local_120 == 0xffffffff) {
      uVar2 = param_2;
      FUN_10017c93c(param_2,param_3,param_4,4,param_1 + 1);
      if ((int)uVar2 != 0) {
        return;
      }
      lVar7 = 8;
      lVar6 = 0xc;
    }
    else {
      param_1[1] = (ulong)local_120;
      lVar6 = 4;
      lVar7 = 4;
    }
    lVar8 = param_4 - uVar5;
    *param_1 = lVar8 + lVar6;
    uVar2 = param_2;
    FUN_100179884(param_2,param_3,param_4,lVar6,lVar7,&local_120);
    if ((int)uVar2 == 0) {
      uVar2 = CONCAT44(iStack_11c,local_120);
      if (param_5 == 0) {
        local_68 = (lVar6 + param_4) - uVar2;
        if ((ulong)(lVar6 + param_4) < uVar2) {
          return;
        }
        param_1[2] = local_68 - uVar5;
      }
      else {
        param_1[2] = uVar2;
        if (iStack_11c < 0) {
          return;
        }
        FUN_100174f78(uVar5,uVar2,&local_68);
        if ((uVar5 & 1) == 0) {
          return;
        }
      }
      __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC1EPK25PHplcrash_async_byteorder(auStack_b8,param_3)
      ;
      puVar3 = &local_120;
      __ZN7plcrash2PH5async33plcrash_async_dwarf_cie_info_initIyEE15plcrash_error_tPNS1_28plcrash_async_dwarf_cie_infoEP21plcrash_async_mobjectPK25PHplcrash_async_byteorderPNS1_16gnu_ehptr_readerIT_EEy
                (puVar3,param_2,param_3,auStack_b8,local_68);
      if ((int)puVar3 == 0) {
        bVar1 = local_cf;
        if ((local_e8 & local_d0 & 1) == 0) {
          bVar1 = 0;
        }
        puVar4 = auStack_b8;
        __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm
                  (puVar4,param_2,param_4,lVar6 + lVar7,bVar1,&lStack_128,&local_130);
        if ((int)puVar4 == 0) {
          param_1[3] = lStack_128;
          lVar6 = local_130 + lVar6 + lVar7;
          puVar4 = auStack_b8;
          __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm
                    (puVar4,param_2,param_4,lVar6,bVar1 & 0xf,&local_138,&local_130);
          if (((int)puVar4 == 0) && (!CARRY8(local_138,param_1[3]))) {
            local_130 = lVar8 + lVar6 + local_130;
            param_1[4] = param_1[3] + local_138;
            param_1[5] = local_130;
            uVar5 = local_130 - *param_1;
            if (uVar5 <= (ulong)param_1[1]) {
              param_1[6] = param_1[1] - uVar5;
              FUN_100179690(&local_120);
            }
          }
        }
      }
    }
  }
  return;
}



/* Address: 0x10017b674 | FUN_10017b674 */

undefined8 FUN_10017b674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Address: 0x10017b67c | FUN_10017b67c */

undefined8 FUN_10017b67c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Address: 0x10017b684 | FUN_10017b684 */

void FUN_10017b684(void)

{
  return;
}



/* Address: 0x10017b688 | FUN_10017b688 */

undefined1 *
FUN_10017b688(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  puVar2 = auStack_70;
  puVar1 = auStack_70;
  FUN_100174f78(param_2,param_3,&local_38);
  if ((int)param_2 == 0) {
    puVar2 = (undefined1 *)0x5;
  }
  else {
    FUN_10017c508(auStack_70,param_1,local_38,*(undefined8 *)PTR__vm_page_size_100ea8be0,0);
    if ((int)puVar2 == 0) {
      FUN_10017b72c(auStack_70,local_38,0,param_4,param_5);
      FUN_10017c9b0(auStack_70);
      puVar2 = puVar1;
    }
  }
  return puVar2;
}



/* Address: 0x10017b72c | FUN_10017b72c */

undefined8 FUN_10017b72c(byte *param_1,undefined8 param_2,long param_3,ulong *param_4,long *param_5)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  byte *pbVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  lVar7 = 0;
  uVar8 = 0;
  *param_4 = 0;
  do {
    pbVar4 = param_1;
    FUN_10017c7bc(param_1,param_2,param_3 + lVar7,1);
    if (pbVar4 == (byte *)0x0) {
      return 5;
    }
    bVar3 = *pbVar4;
    uVar6 = ((ulong)bVar3 & 0x7f) << (uVar8 & 0x3f) | *param_4;
    *param_4 = uVar6;
    uVar1 = (int)uVar8 + 7;
    uVar8 = (ulong)uVar1;
    lVar7 = lVar7 + 1;
    cVar2 = '\x03';
    if (0x7fffffff < (uint)(int)(char)bVar3) {
      cVar2 = 0x3f < uVar1;
    }
  } while (cVar2 == '\0');
  if (cVar2 == '\x03') {
    if ((uVar1 < 0x40) && ((*pbVar4 >> 6 & 1) != 0)) {
      *param_4 = uVar6 | -1L << (uVar8 & 0x3f);
    }
    uVar5 = 0;
    *param_5 = lVar7;
  }
  else {
    uVar5 = 4;
  }
  return uVar5;
}



/* Address: 0x10017b810 | FUN_10017b810 */

undefined1 *
FUN_10017b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_70 [56];
  undefined8 local_38;
  
  puVar2 = auStack_70;
  puVar1 = auStack_70;
  FUN_100174f78(param_2,param_3,&local_38);
  if ((int)param_2 == 0) {
    puVar2 = (undefined1 *)0x5;
  }
  else {
    FUN_10017c508(auStack_70,param_1,local_38,*(undefined8 *)PTR__vm_page_size_100ea8be0,0);
    if ((int)puVar2 == 0) {
      FUN_10017b8b4(auStack_70,local_38,0,param_4,param_5);
      FUN_10017c9b0(auStack_70);
      puVar2 = puVar1;
    }
  }
  return puVar2;
}



/* Address: 0x10017b8b4 | FUN_10017b8b4 */

undefined8 FUN_10017b8b4(byte *param_1,undefined8 param_2,long param_3,ulong *param_4,long *param_5)

{
  char cVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  long lVar5;
  uint uVar6;
  
  lVar5 = 0;
  *param_4 = 0;
  uVar6 = 7;
  do {
    pbVar3 = param_1;
    FUN_10017c7bc(param_1,param_2,param_3 + lVar5,1);
    if (pbVar3 == (byte *)0x0) {
      return 5;
    }
    bVar2 = *pbVar3;
    *param_4 = ((ulong)bVar2 & 0x7f) << ((ulong)(uVar6 - 7) & 0x3f) | *param_4;
    lVar5 = lVar5 + 1;
    cVar1 = '\x03';
    if (0x7fffffff < (uint)(int)(char)bVar2) {
      cVar1 = 0x3f < uVar6;
    }
    uVar6 = uVar6 + 7;
  } while (cVar1 == '\0');
  if (cVar1 == '\x03') {
    uVar4 = 0;
    *param_5 = lVar5;
  }
  else {
    uVar4 = 4;
  }
  return uVar4;
}



/* Address: 0x10017b97c | __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC2EPK25PHplcrash_async_byteorder */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC2EPK25PHplcrash_async_byteorder
               (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}



/* Address: 0x10017b994 | __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC1EPK25PHplcrash_async_byteorder */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjEC1EPK25PHplcrash_async_byteorder
               (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)((long)param_1 + 0x14) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
  *(undefined1 *)((long)param_1 + 0x24) = 0;
  return;
}



/* Address: 0x10017b9ac | __ZN7plcrash2PH5async16gnu_ehptr_readerIjE22set_frame_section_baseEjj */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjE22set_frame_section_baseEjj
               (long param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 0x10) = param_3;
  return;
}



/* Address: 0x10017b9bc | __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_text_baseEj */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_text_baseEj(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined4 *)(param_1 + 0x18) = param_2;
  return;
}



/* Address: 0x10017b9cc | __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_data_baseEj */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_data_baseEj(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x1c) = 1;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  return;
}



/* Address: 0x10017b9dc | __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_func_baseEj */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIjE13set_func_baseEj(long param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined4 *)(param_1 + 0x28) = param_2;
  return;
}



/* Address: 0x10017b9ec | __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm */

uint * __ZN7plcrash2PH5async16gnu_ehptr_readerIjE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPjPm
                 (long *param_1,uint *param_2,long param_3,undefined8 param_4,uint param_5,
                 uint *param_6,ulong *param_7)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ulong uVar4;
  int iVar5;
  long lVar6;
  long local_60;
  uint local_58 [2];
  
  if (param_5 == 0xff) {
    return (uint *)0x8;
  }
  *param_7 = 0;
  uVar3 = param_5 >> 4 & 7;
  if (uVar3 < 3) {
    iVar5 = 0;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        iVar5 = (int)param_4 + (int)param_3;
      }
      else {
        if (uVar3 != 2) {
          return (uint *)0x4;
        }
        if (*(char *)((long)param_1 + 0x14) != '\x01') {
          return (uint *)0x4;
        }
        iVar5 = (int)param_1[3];
      }
    }
  }
  else if (uVar3 == 3) {
    if (*(char *)((long)param_1 + 0x1c) != '\x01') {
      return (uint *)0x4;
    }
    iVar5 = (int)param_1[4];
  }
  else if (uVar3 == 4) {
    if (*(char *)((long)param_1 + 0x24) != '\x01') {
      return (uint *)0x4;
    }
    iVar5 = (int)param_1[5];
  }
  else {
    if (uVar3 != 5) {
      return (uint *)0x4;
    }
    if ((char)param_1[1] != '\x01') {
      return (uint *)0x4;
    }
    iVar5 = 0;
    iVar1 = (int)param_1[2] + ((int)param_3 - *(int *)((long)param_1 + 0xc));
    uVar4 = (ulong)((iVar1 + 3U & 0xfffffffc) - iVar1);
    param_3 = param_3 + uVar4;
    *param_7 = uVar4;
  }
  uVar3 = param_5 & 0xf;
  puVar2 = param_2;
  if (uVar3 < 4) {
    if (uVar3 < 2) {
      if ((param_5 & 0xf) != 0) {
        if (uVar3 != 1) {
          return (uint *)0x4;
        }
        FUN_10017b8b4(param_2,param_3,param_4,local_58,&local_60);
        iVar1 = (int)puVar2;
        goto joined_r0x00010017bb40;
      }
      lVar6 = *param_1;
      FUN_10017c7bc(param_2,param_3,param_4,4);
      if (puVar2 == (uint *)0x0) {
        return (uint *)0x5;
      }
      uVar3 = *puVar2;
      (**(code **)(lVar6 + 8))();
    }
    else {
      if (uVar3 == 2) {
        FUN_10017c854(param_2,*param_1,param_3,param_4,local_58);
        if ((int)puVar2 != 0) {
          return puVar2;
        }
        uVar3 = local_58[0] & 0xffff;
        goto LAB_10017bc6c;
      }
      if (uVar3 != 3) {
        return (uint *)0x4;
      }
LAB_10017bb58:
      FUN_10017c8c8(param_2,*param_1,param_3,param_4,local_58);
      uVar3 = local_58[0];
      if ((int)puVar2 != 0) {
        return puVar2;
      }
    }
    *param_6 = uVar3 + iVar5;
    uVar4 = *param_7 + 4;
  }
  else {
    if (uVar3 < 10) {
      if (uVar3 != 4) {
        if (uVar3 != 9) {
          return (uint *)0x4;
        }
        FUN_10017b72c(param_2,param_3,param_4,local_58,&local_60);
        iVar1 = (int)puVar2;
joined_r0x00010017bb40:
        if (iVar1 != 0) {
          return puVar2;
        }
        *param_6 = iVar5 + local_58[0];
        uVar4 = *param_7 + local_60;
        goto LAB_10017bc7c;
      }
    }
    else {
      if (uVar3 == 10) {
        FUN_10017c854(param_2,*param_1,param_3,param_4,local_58);
        if ((int)puVar2 != 0) {
          return puVar2;
        }
        uVar3 = (uint)(short)local_58[0];
LAB_10017bc6c:
        *param_6 = iVar5 + uVar3;
        uVar4 = *param_7 + 2;
        goto LAB_10017bc7c;
      }
      if (uVar3 == 0xb) goto LAB_10017bb58;
      if (uVar3 != 0xc) {
        return (uint *)0x4;
      }
    }
    FUN_10017c93c(param_2,*param_1,param_3,param_4,local_58);
    if ((int)puVar2 != 0) {
      return puVar2;
    }
    *param_6 = iVar5 + local_58[0];
    uVar4 = *param_7 + 8;
  }
LAB_10017bc7c:
  *param_7 = uVar4;
  if ((param_5 >> 7 & 1) == 0) {
    param_2 = (uint *)0x0;
  }
  else {
    FUN_10017c750();
    FUN_1001750c4();
    if ((int)param_2 == 0) {
      *param_6 = local_58[0];
    }
  }
  return param_2;
}



/* Address: 0x10017bcd8 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC2EPK25PHplcrash_async_byteorder */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC2EPK25PHplcrash_async_byteorder
               (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x10017bcf0 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC1EPK25PHplcrash_async_byteorder */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyEC1EPK25PHplcrash_async_byteorder
               (undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x10017bd08 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyE22set_frame_section_baseEyy */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyE22set_frame_section_baseEyy
               (long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0x10) = param_2;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Address: 0x10017bd18 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_text_baseEy */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_text_baseEy(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x20) = 1;
  *(undefined8 *)(param_1 + 0x28) = param_2;
  return;
}



/* Address: 0x10017bd28 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_data_baseEy */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_data_baseEy(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined8 *)(param_1 + 0x38) = param_2;
  return;
}



/* Address: 0x10017bd38 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_func_baseEy */

void __ZN7plcrash2PH5async16gnu_ehptr_readerIyE13set_func_baseEy(long param_1,undefined8 param_2)

{
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined8 *)(param_1 + 0x48) = param_2;
  return;
}



/* Address: 0x10017bd48 | __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm */

long * __ZN7plcrash2PH5async16gnu_ehptr_readerIyE4readEP21plcrash_async_mobjectyxNS1_8DW_EH_PEEPyPm
                 (long *param_1,long *param_2,long param_3,long param_4,uint param_5,long *param_6,
                 long *param_7)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long local_60;
  ushort local_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  
  if (param_5 == 0xff) {
    return (long *)0x8;
  }
  *param_7 = 0;
  uVar1 = param_5 >> 4 & 7;
  uVar6 = (ulong)uVar1;
  if (uVar1 < 3) {
    if (uVar1 != 0) {
      if (uVar1 == 1) {
        uVar6 = param_4 + param_3;
      }
      else {
        if (uVar1 != 2) {
          return (long *)0x4;
        }
        if ((char)param_1[4] != '\x01') {
          return (long *)0x4;
        }
        uVar6 = param_1[5];
      }
    }
  }
  else if (uVar1 == 3) {
    if ((char)param_1[6] != '\x01') {
      return (long *)0x4;
    }
    uVar6 = param_1[7];
  }
  else if (uVar1 == 4) {
    if ((char)param_1[8] != '\x01') {
      return (long *)0x4;
    }
    uVar6 = param_1[9];
  }
  else {
    if (uVar1 != 5) {
      return (long *)0x4;
    }
    if ((char)param_1[1] != '\x01') {
      return (long *)0x4;
    }
    uVar6 = 0;
    lVar7 = param_1[3] + (param_3 - param_1[2]);
    lVar7 = (lVar7 + 7U & 0xfffffffffffffff8) - lVar7;
    param_3 = lVar7 + param_3;
    *param_7 = lVar7;
  }
  uVar1 = param_5 & 0xf;
  plVar4 = param_2;
  if (uVar1 < 4) {
    if (1 < uVar1) {
      if (uVar1 != 2) {
        if (uVar1 != 3) {
          return (long *)0x4;
        }
        FUN_10017c8c8(param_2,*param_1,param_3,param_4,&local_58);
        if ((int)plVar4 != 0) {
          return plVar4;
        }
        uVar5 = (ulong)CONCAT22(uStack_56,local_58);
LAB_10017bfe8:
        *param_6 = uVar6 + uVar5;
        local_60 = *param_7 + 4;
        goto LAB_10017bff8;
      }
      FUN_10017c854(param_2,*param_1,param_3,param_4,&local_58);
      if ((int)plVar4 != 0) {
        return plVar4;
      }
      uVar5 = (ulong)local_58;
LAB_10017bfb8:
      *param_6 = uVar6 + uVar5;
      local_60 = *param_7 + 2;
      goto LAB_10017bff8;
    }
    if ((param_5 & 0xf) != 0) {
      if (uVar1 != 1) {
        return (long *)0x4;
      }
      FUN_10017b8b4(param_2,param_3,param_4,&local_58,&local_60);
      iVar2 = (int)plVar4;
      goto joined_r0x00010017be9c;
    }
    lVar7 = *param_1;
    FUN_10017c7bc(param_2,param_3,param_4,8);
    if (plVar4 == (long *)0x0) {
      return (long *)0x5;
    }
    lVar3 = *plVar4;
    (**(code **)(lVar7 + 0x10))();
  }
  else {
    if (uVar1 < 10) {
      if (uVar1 != 4) {
        if (uVar1 != 9) {
          return (long *)0x4;
        }
        FUN_10017b72c(param_2,param_3,param_4,&local_58,&local_60);
        iVar2 = (int)plVar4;
joined_r0x00010017be9c:
        if (iVar2 != 0) {
          return plVar4;
        }
        *param_6 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58)) + uVar6;
        local_60 = *param_7 + local_60;
        goto LAB_10017bff8;
      }
    }
    else {
      if (uVar1 == 10) {
        FUN_10017c854(param_2,*param_1,param_3,param_4,&local_58);
        if ((int)plVar4 != 0) {
          return plVar4;
        }
        uVar5 = (ulong)(short)local_58;
        goto LAB_10017bfb8;
      }
      if (uVar1 == 0xb) {
        FUN_10017c8c8(param_2,*param_1,param_3,param_4,&local_58);
        if ((int)plVar4 != 0) {
          return plVar4;
        }
        uVar5 = (ulong)CONCAT22(uStack_56,local_58);
        goto LAB_10017bfe8;
      }
      if (uVar1 != 0xc) {
        return (long *)0x4;
      }
    }
    FUN_10017c93c(param_2,*param_1,param_3,param_4,&local_58);
    if ((int)plVar4 != 0) {
      return plVar4;
    }
    lVar3 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
  }
  *param_6 = lVar3 + uVar6;
  local_60 = *param_7 + 8;
LAB_10017bff8:
  *param_7 = local_60;
  if ((param_5 >> 7 & 1) == 0) {
    param_2 = (long *)0x0;
  }
  else {
    FUN_10017c750();
    FUN_100175118();
    if ((int)param_2 == 0) {
      *param_6 = CONCAT44(uStack_54,CONCAT22(uStack_56,local_58));
    }
  }
  return param_2;
}



/* Address: 0x10017c054 | FUN_10017c054 */

void FUN_10017c054(mach_port_name_t *param_1,mach_port_name_t param_2)

{
  undefined *puVar1;
  undefined4 *puVar2;
  
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = _malloc(0x28);
  *(undefined8 *)(puVar2 + 2) = 0;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[6] = 0;
  *puVar2 = 0;
  *(undefined4 **)(param_1 + 2) = puVar2;
  puVar1 = PTR__mach_task_self__100ea8778;
  *param_1 = param_2;
  _mach_port_mod_refs(*(ipc_space_t *)puVar1,param_2,0,1);
  return;
}



/* Address: 0x10017c0bc | FUN_10017c0bc */

void FUN_10017c0bc(mach_port_name_t *param_1)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  undefined8 *puVar4;
  
  LOAcquire();
  *(int *)(*(long *)(param_1 + 2) + 0x18) = *(int *)(*(long *)(param_1 + 2) + 0x18) + 1;
  LORelease();
  do {
    puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
    while( true ) {
      puVar4 = (undefined8 *)*puVar4;
      if (puVar4 == (undefined8 *)0x0) {
        piVar1 = (int *)(*(long *)(param_1 + 2) + 0x18);
        LOAcquire();
        iVar2 = *piVar1;
        *piVar1 = iVar2 + -1;
        LORelease();
        pvVar3 = *(void **)(param_1 + 2);
        if (pvVar3 != (void *)0x0) {
          FUN_10017c4a4(CONCAT44((int)((ulong)piVar1 >> 0x20),iVar2));
          _free(pvVar3);
        }
        _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*param_1,0,-1);
        return;
      }
      pvVar3 = (void *)*puVar4;
      FUN_10017da0c(pvVar3);
      _free(pvVar3);
      if (puVar4 == (undefined8 *)0x0) break;
      puVar4 = puVar4 + 2;
    }
  } while( true );
}



/* Address: 0x10017c164 | FUN_10017c164 */

void FUN_10017c164(undefined4 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = _calloc(1,0xb0);
  pvVar2 = pvVar1;
  FUN_10017cb08(pvVar1,*param_1,param_3,param_2);
  if ((int)pvVar2 != 0) {
    _free(pvVar1);
    return;
  }
  FUN_10017c1d0(*(undefined8 *)(param_1 + 2),pvVar1);
  return;
}



/* Address: 0x10017c1d0 | FUN_10017c1d0 */

void FUN_10017c1d0(long param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  
  _os_unfair_lock_lock();
  puVar2 = *(undefined8 **)(param_1 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = _malloc(0x18);
    *puVar2 = param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
  }
  else {
    *puVar2 = param_2;
    puVar2[1] = 0;
    puVar2[2] = 0;
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  }
  DataMemoryBarrier(2,3);
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 **)(param_1 + 0x10) = puVar2;
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 == 0) {
      *(long *)(param_1 + 8) = (long)puVar2;
    }
  }
  else {
    plVar1 = (long *)(*(long *)(param_1 + 0x10) + 0x10);
    if (*plVar1 == 0) {
      *plVar1 = (long)puVar2;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    puVar2[1] = lVar3;
    *(undefined8 **)(param_1 + 0x10) = puVar2;
  }
  _os_unfair_lock_unlock(lVar3,param_1);
  return;
}



/* Address: 0x10017c268 | FUN_10017c268 */

void FUN_10017c268(long param_1,long param_2)

{
  int *piVar1;
  long *plVar2;
  
  plVar2 = (long *)0x0;
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x18);
  LOAcquire();
  *piVar1 = *piVar1 + 1;
  LORelease();
  do {
    if (plVar2 == (long *)0x0) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 8);
    }
    else {
      plVar2 = plVar2 + 2;
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) goto LAB_10017c2c4;
  } while (*(long *)(*plVar2 + 8) != param_2);
  FUN_10017c2e0(*(undefined8 *)(param_1 + 8),plVar2);
LAB_10017c2c4:
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x18);
  LOAcquire();
  *piVar1 = *piVar1 + -1;
  LORelease();
  return;
}



/* Address: 0x10017c2e0 | FUN_10017c2e0 */

void FUN_10017c2e0(long param_1,void *param_2)

{
  void *pvVar1;
  void *pvVar2;
  long *plVar3;
  
  _os_unfair_lock_lock();
  plVar3 = (long *)(param_1 + 8);
  while( true ) {
    pvVar1 = (void *)*plVar3;
    if (pvVar1 == (void *)0x0 || param_2 == pvVar1) break;
    plVar3 = (long *)((long)pvVar1 + 0x10);
  }
  if (pvVar1 != (void *)0x0) {
    plVar3 = (long *)(param_1 + 8);
    if (pvVar1 == (void *)*plVar3) {
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x10);
        pvVar2 = pvVar1;
      }
    }
    else {
      plVar3 = (long *)(*(long *)((long)pvVar1 + 8) + 0x10);
      pvVar2 = (void *)*plVar3;
      if (pvVar2 == pvVar1) {
        *plVar3 = *(long *)((long)pvVar1 + 0x10);
        pvVar2 = pvVar1;
      }
    }
    if (*(long *)((long)pvVar2 + 0x10) == 0) {
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)((long)pvVar2 + 8);
    }
    else {
      *(undefined8 *)(*(long *)((long)pvVar2 + 0x10) + 8) = *(undefined8 *)((long)pvVar2 + 8);
    }
    if (*(int *)(param_1 + 0x18) < 1) {
      _free(pvVar2);
    }
    else {
      *(undefined8 *)((long)pvVar2 + 8) = 0;
      *(undefined8 *)((long)pvVar2 + 0x10) = *(undefined8 *)(param_1 + 0x20);
      if (*(long *)(param_1 + 0x20) != 0) {
        *(void **)(*(long *)(param_1 + 0x20) + 8) = pvVar2;
      }
      *(void **)(param_1 + 0x20) = pvVar2;
    }
  }
  _os_unfair_lock_unlock(param_1);
  return;
}



/* Address: 0x10017c3d8 | FUN_10017c3d8 */

void FUN_10017c3d8(long param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(*(long *)(param_1 + 8) + 0x18);
  if (param_2 == 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = 1;
  }
  LOAcquire();
  *piVar1 = *piVar1 + iVar2;
  LORelease();
  return;
}



/* Address: 0x10017c3f8 | FUN_10017c3f8 */

long FUN_10017c3f8(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  
  lVar3 = 0;
  while( true ) {
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0xa8) == 0)) {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 8);
    }
    else {
      plVar2 = (long *)(*(long *)(lVar3 + 0xa8) + 0x10);
    }
    plVar2 = (long *)*plVar2;
    if (plVar2 == (long *)0x0) break;
    lVar3 = *plVar2;
    *(long **)(lVar3 + 0xa8) = plVar2;
    lVar1 = lVar3;
    FUN_10017ce58(lVar3,param_2);
    if ((int)lVar1 != 0) {
      return lVar3;
    }
  }
  return 0;
}



/* Address: 0x10017c46c | FUN_10017c46c */

long FUN_10017c46c(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  undefined8 *puVar3;
  
  if ((param_2 == 0) || (*(long *)(param_2 + 0xa8) == 0)) {
    puVar3 = (undefined8 *)(*(long *)(param_1 + 8) + 8);
  }
  else {
    puVar3 = (undefined8 *)(*(long *)(param_2 + 0xa8) + 0x10);
  }
  plVar2 = (long *)*puVar3;
  if (plVar2 != (long *)0x0) {
    lVar1 = *plVar2;
    *(long **)(lVar1 + 0xa8) = plVar2;
    return lVar1;
  }
  return 0;
}



/* Address: 0x10017c4a4 | FUN_10017c4a4 */

long FUN_10017c4a4(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  if (*(long *)(param_1 + 8) != 0) {
    pvVar1 = *(void **)(param_1 + 8);
    while (pvVar1 != (void *)0x0) {
      pvVar2 = *(void **)((long)pvVar1 + 0x10);
      _free(pvVar1);
      pvVar1 = pvVar2;
    }
  }
  pvVar1 = *(void **)(param_1 + 0x20);
  while (pvVar1 != (void *)0x0) {
    pvVar2 = *(void **)((long)pvVar1 + 0x10);
    _free(pvVar1);
    pvVar1 = pvVar2;
  }
  return param_1;
}



/* Address: 0x10017c508 | FUN_10017c508 */

undefined8
FUN_10017c508(vm_map_t *param_1,vm_map_t param_2,ulong param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  kern_return_t kVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  mach_vm_address_t local_80;
  mem_entry_name_port_t local_74;
  mach_vm_size_t local_70;
  memory_object_size_t local_68;
  
  puVar3 = PTR__mach_task_self__100ea8778;
  uVar6 = (ulong)(int)~(uint)*(long *)PTR__vm_page_mask_100ea8bd8;
  uVar8 = uVar6 & param_3;
  uVar6 = (param_4 + param_3 + *(long *)PTR__vm_page_mask_100ea8bd8) - uVar8 & uVar6;
  if ((param_5 & 1) == 0) {
    if (uVar6 == 0) {
      return 3;
    }
    uVar7 = 0;
    do {
      local_68 = uVar6 - uVar7;
      kVar4 = _mach_make_memory_entry_64
                        (param_2,&local_68,uVar7 + uVar8,1,(mach_port_t *)&local_70,0);
      if (kVar4 != 0) {
        uVar2 = uVar7;
        if (uVar6 <= uVar7) {
          uVar2 = uVar6;
        }
        uVar6 = uVar2;
        if (uVar7 == 0) {
          return 3;
        }
        break;
      }
      _mach_port_mod_refs(*(ipc_space_t *)puVar3,(mach_port_name_t)local_70,0,-1);
      uVar7 = local_68 + uVar7;
    } while (uVar7 < uVar6);
  }
  local_68 = 0;
  kVar4 = _mach_vm_allocate(*(vm_map_t *)puVar3,&local_68,uVar6,1);
  if (kVar4 == 0) {
    uVar7 = 0;
    if (uVar6 != 0) {
      do {
        local_70 = uVar6 - uVar7;
        kVar4 = _mach_make_memory_entry_64(param_2,&local_70,uVar7 + uVar8,1,&local_74,0);
        if (kVar4 != 0) {
          _vm_deallocate(*(vm_map_t *)puVar3,local_68,uVar6);
          return 3;
        }
        local_80 = local_68 + uVar7;
        kVar4 = _mach_vm_map(*(vm_map_t *)puVar3,&local_80,local_70,0,0x4000,local_74,0,1,1,1,1);
        if (kVar4 != 0) {
          _vm_deallocate(*(ipc_space_t *)puVar3,local_68,uVar6);
          _mach_port_mod_refs(*(ipc_space_t *)puVar3,local_74,0,-1);
          return 3;
        }
        _mach_port_mod_refs(*(ipc_space_t *)puVar3,local_74,0,-1);
        uVar7 = local_70 + uVar7;
      } while (uVar7 < uVar6);
    }
    *(memory_object_size_t *)(param_1 + 10) = local_68;
    *(ulong *)(param_1 + 0xc) = uVar7;
    uVar6 = param_3 & ((long)(int)~*(uint *)PTR__vm_page_mask_100ea8bd8 ^ 0xffffffffffffffffU);
    uVar7 = uVar7 - uVar6;
    if (param_4 <= uVar7) {
      uVar7 = param_4;
    }
    lVar1 = uVar6 + local_68;
    *(ulong *)(param_1 + 6) = uVar7;
    *(ulong *)(param_1 + 8) = param_3 - lVar1;
    *(long *)(param_1 + 2) = lVar1;
    *(ulong *)(param_1 + 4) = param_3;
    *param_1 = param_2;
    _mach_port_mod_refs(*(ipc_space_t *)puVar3,param_2,0,1);
    uVar5 = 0;
  }
  else {
    uVar5 = 6;
  }
  return uVar5;
}



/* Address: 0x10017c740 | FUN_10017c740 */

undefined8 FUN_10017c740(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Address: 0x10017c748 | FUN_10017c748 */

undefined8 FUN_10017c748(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Address: 0x10017c750 | FUN_10017c750 */

undefined4 FUN_10017c750(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x10017c758 | FUN_10017c758 */

bool FUN_10017c758(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  bool bVar1;
  
  if (((0 < (long)param_3) && (CARRY8(param_3,param_2))) ||
     (((long)param_3 < 0 && (param_2 < -param_3)))) {
    bVar1 = false;
  }
  else {
    bVar1 = false;
    param_3 = param_3 + param_2;
    if ((!CARRY8(param_4,param_3)) && (*(ulong *)(param_1 + 8) <= param_3)) {
      bVar1 = param_3 + param_4 <= *(long *)(param_1 + 0x18) + *(ulong *)(param_1 + 8);
    }
  }
  return bVar1;
}



/* Address: 0x10017c7bc | FUN_10017c7bc */

long FUN_10017c7bc(long param_1,long param_2,long param_3)

{
  param_2 = param_2 - *(long *)(param_1 + 0x20);
  FUN_10017c758(param_1,param_2);
  param_2 = param_2 + param_3;
  if ((int)param_1 == 0) {
    param_2 = 0;
  }
  return param_2;
}



/* Address: 0x10017c7f4 | FUN_10017c7f4 */

undefined8 FUN_10017c7f4(long param_1,long param_2,long param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  
  param_2 = param_2 - *(long *)(param_1 + 0x20);
  FUN_10017c758(param_1,param_2,param_3,1);
  puVar1 = (undefined1 *)(param_2 + param_3);
  if ((int)param_1 == 0 || puVar1 == (undefined1 *)0x0) {
    uVar2 = 5;
  }
  else {
    uVar2 = 0;
    *param_4 = *puVar1;
  }
  return uVar2;
}


