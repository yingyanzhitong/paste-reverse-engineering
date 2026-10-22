/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10017c854 | FUN_10017c854 */

undefined8
FUN_10017c854(long param_1,undefined8 *param_2,long param_3,long param_4,undefined2 *param_5)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined8 uVar3;
  
  param_3 = param_3 - *(long *)(param_1 + 0x20);
  FUN_10017c758(param_1,param_3,param_4,2);
  puVar1 = (undefined2 *)(param_3 + param_4);
  if ((int)param_1 == 0 || puVar1 == (undefined2 *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar2 = *puVar1;
    (*(code *)*param_2)();
    uVar3 = 0;
    *param_5 = uVar2;
  }
  return uVar3;
}



/* Address: 0x10017c8c8 | FUN_10017c8c8 */

undefined8 FUN_10017c8c8(long param_1,long param_2,long param_3,long param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  param_3 = param_3 - *(long *)(param_1 + 0x20);
  FUN_10017c758(param_1,param_3,param_4,4);
  puVar1 = (undefined4 *)(param_3 + param_4);
  if ((int)param_1 == 0 || puVar1 == (undefined4 *)0x0) {
    uVar3 = 5;
  }
  else {
    uVar2 = *puVar1;
    (**(code **)(param_2 + 8))();
    uVar3 = 0;
    *param_5 = uVar2;
  }
  return uVar3;
}



/* Address: 0x10017c93c | FUN_10017c93c */

undefined8 FUN_10017c93c(long param_1,long param_2,long param_3,long param_4,undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  param_3 = param_3 - *(long *)(param_1 + 0x20);
  FUN_10017c758(param_1,param_3,param_4,8);
  puVar1 = (undefined8 *)(param_3 + param_4);
  if ((int)param_1 == 0 || puVar1 == (undefined8 *)0x0) {
    uVar2 = 5;
  }
  else {
    uVar3 = *puVar1;
    (**(code **)(param_2 + 0x10))();
    uVar2 = 0;
    *param_5 = uVar3;
  }
  return uVar2;
}



/* Address: 0x10017c9b0 | FUN_10017c9b0 */

void FUN_10017c9b0(mach_port_name_t *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__mach_task_self__100ea8778;
  _mach_vm_deallocate(*(vm_map_t *)PTR__mach_task_self__100ea8778,
                      *(mach_vm_address_t *)(param_1 + 10),*(mach_vm_size_t *)(param_1 + 0xc));
  _mach_port_mod_refs(*(ipc_space_t *)puVar1,*param_1,0,-1);
  return;
}



/* Address: 0x10017c9f0 | FUN_10017c9f0 */

undefined8 FUN_10017c9f0(int param_1,long *param_2,uint param_3,undefined8 param_4,int *param_5)

{
  long lVar1;
  long lVar2;
  int iVar3;
  
  if (param_3 < 2) {
    return 0;
  }
  lVar1 = *param_2;
  lVar2 = param_2[1];
  if (param_1 < 4) {
    if (param_1 == 1) {
      iVar3 = 10;
      if (lVar1 == 1) {
        iVar3 = 0xb;
      }
LAB_10017caac:
      *param_5 = iVar3;
      *(long *)(param_5 + 6) = lVar2;
      if ((9 < iVar3) && (1 < iVar3 - 0xcU)) {
        if (iVar3 != 10) {
          if (lVar1 == 1) {
LAB_10017ca58:
            param_5[2] = 1;
            return 1;
          }
          if (lVar1 != 2) goto LAB_10017cad8;
        }
        param_5[2] = 2;
        return 1;
      }
      goto LAB_10017cad8;
    }
    if (param_1 == 2) {
      iVar3 = 4;
    }
    else {
      if (param_1 != 3) {
        return 0;
      }
      iVar3 = 8;
    }
  }
  else {
    if (param_1 != 4) {
      if (param_1 != 5) {
        if (param_1 != 6) {
          return 0;
        }
        *param_5 = 5;
        *(long *)(param_5 + 6) = lVar2;
        goto LAB_10017ca58;
      }
      if (lVar1 - 0x10000U < 4) {
        iVar3 = *(int *)(&DAT_100c30ff0 + (lVar1 - 0x10000U) * 4);
      }
      else {
        iVar3 = 6;
      }
      goto LAB_10017caac;
    }
    iVar3 = 7;
  }
  *param_5 = iVar3;
  *(long *)(param_5 + 6) = lVar2;
LAB_10017cad8:
  param_5[2] = 0;
  return 1;
}



/* Address: 0x10017cb08 | FUN_10017cb08 */

mach_port_name_t *
FUN_10017cb08(mach_port_name_t *param_1,mach_port_name_t param_2,char *param_3,ulong param_4)

{
  undefined *puVar1;
  mach_port_name_t mVar2;
  char *pcVar3;
  ulong uVar4;
  mach_port_name_t *pmVar5;
  mach_port_name_t *pmVar6;
  undefined **ppuVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  mach_port_name_t *pmVar10;
  long lVar11;
  mach_port_name_t mVar12;
  long lVar13;
  
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = param_2;
  *(ulong *)(param_1 + 2) = param_4;
  pcVar3 = _strdup(param_3);
  *(char **)(param_1 + 6) = pcVar3;
  puVar1 = PTR__mach_task_self__100ea8778;
  _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,param_2,0,1);
  mVar12 = *param_1;
  FUN_100174ff0(mVar12,*(undefined8 *)(param_1 + 2),0,param_1 + 8,0x1c);
  if (mVar12 != 0) {
    pmVar10 = (mach_port_name_t *)0x6;
    goto LAB_10017cd5c;
  }
  ppuVar7 = &PTR_FUN_100eba1a0;
  *(undefined ***)(param_1 + 0x28) = &PTR_FUN_100eba1a0;
  mVar12 = param_1[8];
  if ((int)mVar12 < -0x1120532) {
    if (mVar12 != 0xcefaedfe) {
      if (mVar12 != 0xcffaedfe) {
        return (mach_port_name_t *)0x5;
      }
      ppuVar7 = &PTR_FUN_100eba188;
      *(undefined ***)(param_1 + 0x28) = &PTR_FUN_100eba188;
      goto LAB_10017cbf8;
    }
    ppuVar7 = &PTR_FUN_100eba188;
    *(undefined ***)(param_1 + 0x28) = &PTR_FUN_100eba188;
LAB_10017cc1c:
    uVar8 = 0;
    uVar9 = 0x1c;
  }
  else {
    if (mVar12 == 0xfeedface) goto LAB_10017cc1c;
    if (mVar12 != 0xfeedfacf) {
      return (mach_port_name_t *)0x5;
    }
LAB_10017cbf8:
    uVar8 = 1;
    uVar9 = 0x20;
  }
  *(undefined1 *)(param_1 + 0x26) = uVar8;
  *(undefined8 *)(param_1 + 0x10) = uVar9;
  uVar4 = (ulong)param_1[0xd];
  (*(code *)ppuVar7[1])(uVar4);
  lVar11 = *(long *)(param_1 + 2);
  lVar13 = *(long *)(param_1 + 0x10);
  mVar12 = param_1[0xc];
  (**(code **)(*(long *)(param_1 + 0x28) + 8))();
  param_1[0x12] = mVar12;
  pmVar10 = param_1 + 0x14;
  FUN_10017c508(pmVar10,*param_1,lVar13 + lVar11,uVar4 & 0xffffffff,1);
  if ((int)pmVar10 == 0) {
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    pmVar10 = (mach_port_name_t *)0x0;
    do {
      while( true ) {
        mVar12 = 0x19;
        if ((char)param_1[0x26] == '\0') {
          mVar12 = 1;
        }
        do {
          pmVar5 = param_1;
          FUN_10017cea4(param_1,pmVar10);
          if (pmVar5 == (mach_port_name_t *)0x0) goto LAB_10017cd50;
          mVar2 = *pmVar5;
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          pmVar10 = pmVar5;
        } while (mVar2 != mVar12);
        pmVar6 = param_1 + 0x14;
        if ((char)param_1[0x26] == '\x01') break;
        FUN_10017c758(pmVar6,pmVar5,0,0x38);
        if ((int)pmVar6 == 0) goto LAB_10017cd50;
        pmVar6 = pmVar5 + 2;
        FUN_10017518c(pmVar6,"__TEXT",0x10);
        if ((int)pmVar6 == 0) {
          uVar4 = (ulong)pmVar5[7];
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          *(ulong *)(param_1 + 0x24) = uVar4 & 0xffffffff;
          uVar4 = (ulong)pmVar5[6];
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          uVar4 = uVar4 & 0xffffffff;
LAB_10017cdbc:
          *(ulong *)(param_1 + 0x22) = uVar4;
          if ((uVar4 > param_4 || param_4 - uVar4 == 0) && (uVar4 <= param_4)) {
            param_1[4] = 0;
            param_1[5] = 0;
            return (mach_port_name_t *)0x0;
          }
          *(ulong *)(param_1 + 4) = param_4 - uVar4;
          return (mach_port_name_t *)0x0;
        }
      }
      FUN_10017c758(pmVar6,pmVar5,0,0x48);
      if ((int)pmVar6 == 0) {
LAB_10017cd50:
        FUN_10017c9b0(param_1 + 0x14);
        pmVar10 = (mach_port_name_t *)0x5;
        break;
      }
      pmVar6 = pmVar5 + 2;
      FUN_10017518c(pmVar6,"__TEXT",0x10);
      if ((int)pmVar6 == 0) {
        uVar9 = *(undefined8 *)(pmVar5 + 8);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
        *(undefined8 *)(param_1 + 0x24) = uVar9;
        uVar4 = *(ulong *)(pmVar5 + 6);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
        goto LAB_10017cdbc;
      }
    } while( true );
  }
LAB_10017cd5c:
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    _free(*(void **)(param_1 + 6));
  }
  _mach_port_mod_refs(*(ipc_space_t *)puVar1,*param_1,0,-1);
  return pmVar10;
}



/* Address: 0x10017cde4 | FUN_10017cde4 */

int * FUN_10017cde4(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  
  do {
    piVar2 = param_1;
    FUN_10017cea4(param_1,param_2);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    iVar1 = *piVar2;
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    param_2 = piVar2;
  } while (iVar1 != param_3);
  return piVar2;
}



/* Address: 0x10017ce40 | FUN_10017ce40 */

undefined8 FUN_10017ce40(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Address: 0x10017ce48 | FUN_10017ce48 */

long FUN_10017ce48(long param_1)

{
  return param_1 + 0x20;
}



/* Address: 0x10017ce50 | FUN_10017ce50 */

undefined8 FUN_10017ce50(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Address: 0x10017ce58 | FUN_10017ce58 */

undefined8 FUN_10017ce58(long param_1,ulong param_2)

{
  if ((*(ulong *)(param_1 + 8) <= param_2) &&
     (param_2 < *(long *)(param_1 + 0x90) + *(ulong *)(param_1 + 8))) {
    return 1;
  }
  return 0;
}



/* Address: 0x10017ce84 | FUN_10017ce84 */

void FUN_10017ce84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010017ce90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xa0) + 8))(*(undefined4 *)(param_1 + 0x24));
  return;
}



/* Address: 0x10017ce94 | FUN_10017ce94 */

void FUN_10017ce94(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010017cea0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0xa0) + 8))(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10017cea4 | FUN_10017cea4 */

ulong FUN_10017cea4(long param_1,ulong param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    uVar1 = *(uint *)(param_1 + 0x34);
    (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
    if (7 < uVar1) {
      uVar3 = param_1 + 0x50;
      FUN_10017c7bc(uVar3,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x40),8);
      return uVar3;
    }
  }
  else {
    lVar2 = param_1 + 0x50;
    FUN_10017c758(lVar2,param_2,0,8);
    if ((int)lVar2 != 0) {
      uVar3 = (ulong)*(uint *)(param_2 + 4);
      (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
      if ((uint)uVar3 < 8) {
        return 0;
      }
      if (CARRY8(param_2,uVar3 & 0xffffffff)) {
        return 0;
      }
      param_2 = param_2 + (uVar3 & 0xffffffff);
      if (param_2 < (ulong)(*(long *)(param_1 + 0x68) + *(long *)(param_1 + 0x58))) {
        lVar2 = param_1 + 0x50;
        FUN_10017c758(lVar2,param_2,0,8);
        if ((int)lVar2 != 0) {
          uVar3 = (ulong)*(uint *)(param_2 + 4);
          (**(code **)(*(long *)(param_1 + 0xa0) + 8))(uVar3);
          param_1 = param_1 + 0x50;
          FUN_10017c758(param_1,param_2,0,uVar3 & 0xffffffff);
          if ((int)param_1 != 0) {
            return param_2;
          }
          return 0;
        }
      }
    }
  }
  return 0;
}



/* Address: 0x10017cfa4 | FUN_10017cfa4 */

int * FUN_10017cfa4(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  while( true ) {
    piVar2 = param_1;
    FUN_10017cea4(param_1,piVar3);
    if (piVar2 == (int *)0x0) {
      return (int *)0x0;
    }
    piVar3 = param_1 + 0x14;
    FUN_10017c758(piVar3,piVar2,0,8);
    if ((int)piVar3 == 0) break;
    iVar1 = *piVar2;
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    piVar3 = piVar2;
    if (iVar1 == param_2) {
      return piVar2;
    }
  }
  return (int *)0x0;
}



/* Address: 0x10017d020 | FUN_10017d020 */

int * FUN_10017d020(int *param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar3 = (int *)0x0;
  do {
    iVar5 = 0x19;
    piVar4 = piVar3;
    if ((char)param_1[0x26] == '\0') {
      iVar5 = 1;
    }
    do {
      piVar3 = param_1;
      FUN_10017cea4(param_1,piVar4);
      if (piVar3 == (int *)0x0) {
        return (int *)0x0;
      }
      iVar1 = *piVar3;
      (**(code **)(*(long *)(param_1 + 0x28) + 8))();
      piVar4 = piVar3;
    } while (iVar1 != iVar5);
    uVar2 = param_2;
    FUN_10017518c(param_2,piVar3 + 2,0x10);
  } while ((int)uVar2 != 0);
  return piVar3;
}



/* Address: 0x10017d0a8 | FUN_10017d0a8 */

long FUN_10017d0a8(undefined4 *param_1,undefined8 param_2,long param_3)

{
  undefined4 *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  puVar1 = param_1;
  FUN_10017d020();
  if (puVar1 != (undefined4 *)0x0) {
    if (*(char *)(param_1 + 0x26) == '\x01') {
      lVar2 = *(long *)(puVar1 + 6);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(lVar2);
      lVar2 = *(long *)(param_1 + 4) + lVar2;
      uVar3 = *(ulong *)(puVar1 + 8);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar3);
      uVar4 = *(undefined8 *)(puVar1 + 10);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
      *(undefined8 *)(param_3 + 0x38) = uVar4;
      uVar5 = *(ulong *)(puVar1 + 0xc);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    }
    else {
      uVar3 = (ulong)(uint)puVar1[6];
      (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar3);
      lVar2 = *(long *)(param_1 + 4) + (uVar3 & 0xffffffff);
      uVar3 = (ulong)(uint)puVar1[7];
      (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar3);
      uVar3 = uVar3 & 0xffffffff;
      uVar5 = (ulong)(uint)puVar1[8];
      (**(code **)(*(long *)(param_1 + 0x28) + 8))();
      *(ulong *)(param_3 + 0x38) = uVar5 & 0xffffffff;
      uVar5 = (ulong)(uint)puVar1[9];
      (**(code **)(*(long *)(param_1 + 0x28) + 8))();
      uVar5 = uVar5 & 0xffffffff;
    }
    *(ulong *)(param_3 + 0x40) = uVar5;
    FUN_10017c508(param_3,*param_1,lVar2,uVar3,0);
    return param_3;
  }
  return 8;
}



/* Address: 0x10017d1c8 | FUN_10017d1c8 */

undefined8
FUN_10017d1c8(undefined4 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  
  puVar3 = param_1;
  FUN_10017d020();
  if (puVar3 != (undefined4 *)0x0) {
    cVar1 = *(char *)(param_1 + 0x26);
    lVar8 = 0x40;
    if (cVar1 == '\0') {
      lVar8 = 0x30;
    }
    uVar4 = (ulong)*(uint *)((long)puVar3 + lVar8);
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    if ((int)uVar4 != 0) {
      lVar8 = 0x48;
      if (cVar1 == '\0') {
        lVar8 = 0x38;
      }
      lVar8 = lVar8 + (long)puVar3;
      do {
        puVar3 = param_1 + 0x14;
        if (*(char *)(param_1 + 0x26) == '\x01') {
          FUN_10017c758(puVar3,lVar8,0,0x50);
          if ((int)puVar3 == 0) {
            return 5;
          }
          lVar5 = *(long *)(lVar8 + 0x20);
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(lVar5);
          lVar5 = *(long *)(param_1 + 4) + lVar5;
          uVar6 = *(ulong *)(lVar8 + 0x28);
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar6);
          lVar9 = 0x50;
        }
        else {
          FUN_10017c758(puVar3,lVar8,0,0x44);
          if ((int)puVar3 == 0) {
            return 5;
          }
          uVar6 = (ulong)*(uint *)(lVar8 + 0x20);
          (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar6);
          lVar5 = *(long *)(param_1 + 4) + (uVar6 & 0xffffffff);
          uVar6 = (ulong)*(uint *)(lVar8 + 0x24);
          (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar6);
          uVar6 = uVar6 & 0xffffffff;
          lVar9 = 0x44;
        }
        uVar7 = param_3;
        FUN_10017518c(param_3,lVar8,0x10);
        if ((int)uVar7 == 0) {
          FUN_10017c508(param_4,*param_1,lVar5,uVar6,1);
          return param_4;
        }
        lVar8 = lVar9 + lVar8;
        uVar2 = (int)uVar4 - 1;
        uVar4 = (ulong)uVar2;
      } while (uVar2 != 0);
    }
  }
  return 8;
}



/* Address: 0x10017d340 | FUN_10017d340 */

void FUN_10017d340(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint local_110;
  byte local_10c;
  long local_100;
  undefined1 auStack_f8 [8];
  undefined1 auStack_f0 [72];
  undefined8 local_a8;
  uint local_a0;
  long local_78;
  
  puVar3 = auStack_f8;
  FUN_10017d460(puVar3,param_1);
  if ((int)puVar3 == 0) {
    if (local_a0 != 0) {
      uVar6 = 0;
      do {
        FUN_10017d66c(&local_110,auStack_f8,local_a8,uVar6);
        lVar2 = local_78;
        lVar1 = local_100;
        if ((local_10c & 0xee) == 0xe) {
          uVar5 = (ulong)local_110;
          lVar4 = local_78 + uVar5;
          lVar7 = lVar4;
          do {
            uVar5 = uVar5 + 1;
            puVar3 = auStack_f0;
            FUN_10017c758(puVar3,lVar7,0,1);
            if ((int)puVar3 == 0) goto LAB_10017d404;
            lVar7 = lVar7 + 1;
          } while (*(char *)(lVar2 + uVar5) != '\0');
          if ((lVar2 != 0) && (FUN_10017516c(lVar4,param_2), (int)lVar4 == 0)) {
            FUN_10017c9b0(auStack_f0);
            *param_3 = *(long *)(param_1 + 0x10) + lVar1;
            return;
          }
        }
LAB_10017d404:
        uVar6 = uVar6 + 1;
      } while (uVar6 < local_a0);
    }
    FUN_10017c9b0(auStack_f0);
  }
  return;
}



/* Address: 0x10017d460 | FUN_10017d460 */

undefined8 FUN_10017d460(long *param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  
  lVar3 = param_2;
  FUN_10017cfa4(param_2,2);
  lVar4 = param_2;
  FUN_10017cfa4(param_2,0xb);
  if (lVar3 == 0) {
    return 8;
  }
  lVar13 = param_2;
  FUN_10017d0a8(param_2,"__LINKEDIT",param_1 + 1);
  if ((int)lVar13 != 0) {
    return 6;
  }
  uVar5 = (ulong)*(uint *)(lVar3 + 0xc);
  (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
  lVar13 = 0x10;
  if (*(char *)(param_2 + 0x98) == '\0') {
    lVar13 = 0xc;
  }
  uVar6 = (ulong)*(uint *)(lVar3 + 0x14);
  (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
  lVar12 = param_1[3];
  uVar7 = (ulong)*(uint *)(lVar3 + 8);
  (**(code **)(*(long *)(param_2 + 0xa0) + 8))(uVar7);
  plVar8 = param_1 + 1;
  FUN_10017c7bc(plVar8,lVar12,(uVar7 & 0xffffffff) - param_1[8],lVar13 * (uVar5 & 0xffffffff));
  if (plVar8 != (long *)0x0) {
    lVar13 = param_1[3];
    uVar7 = (ulong)*(uint *)(lVar3 + 0x10);
    (**(code **)(*(long *)(param_2 + 0xa0) + 8))(uVar7);
    plVar9 = param_1 + 1;
    FUN_10017c7bc(plVar9,lVar13,(uVar7 & 0xffffffff) - param_1[8],uVar6 & 0xffffffff);
    if (plVar9 != (long *)0x0) {
      *param_1 = param_2;
      param_1[0x10] = (long)plVar9;
      param_1[0x11] = uVar6 & 0xffffffff;
      param_1[10] = (long)plVar8;
      uVar11 = (uint)uVar5;
      *(uint *)(param_1 + 0xb) = uVar11;
      if (lVar4 == 0) {
        return 0;
      }
      uVar5 = (ulong)*(uint *)(lVar4 + 0x10);
      (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
      uVar6 = (ulong)*(uint *)(lVar4 + 8);
      (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
      iVar1 = *(int *)(lVar4 + 0x14);
      (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
      iVar2 = *(int *)(lVar4 + 0xc);
      (**(code **)(*(long *)(param_2 + 0xa0) + 8))();
      uVar10 = 5;
      if (((uint)(iVar1 + (int)uVar5) <= uVar11) && ((uint)(iVar2 + (int)uVar6) <= uVar11)) {
        *(int *)(param_1 + 0xd) = iVar1;
        *(int *)(param_1 + 0xf) = iVar2;
        if (*(char *)(param_2 + 0x98) == '\x01') {
          param_1[0xc] = (long)(plVar8 + (uVar5 & 0xffffffff) * 2);
          lVar3 = (uVar6 & 0xffffffff) << 4;
        }
        else {
          param_1[0xc] = (long)plVar8 + (uVar5 & 0xffffffff) * 0xc;
          lVar3 = (uVar6 & 0xffffffff) * 0xc;
        }
        param_1[0xe] = (long)plVar8 + lVar3;
        return 0;
      }
      goto LAB_10017d62c;
    }
  }
  uVar10 = 6;
LAB_10017d62c:
  FUN_10017c9b0(param_1 + 1);
  return uVar10;
}



/* Address: 0x10017d66c | FUN_10017d66c */

void FUN_10017d66c(undefined4 *param_1,long *param_2,long param_3,uint param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar6 = *(undefined8 **)(*param_2 + 0xa0);
  lVar5 = (ulong)param_4 << 4;
  if (*(char *)(*param_2 + 0x98) == '\0') {
    lVar5 = ((ulong)param_4 * 2 + (ulong)param_4) * 4;
  }
  puVar1 = (undefined4 *)(param_3 + lVar5);
  uVar2 = *puVar1;
  (*(code *)puVar6[1])();
  *param_1 = uVar2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(puVar1 + 1);
  uVar3 = (uint)*(ushort *)((long)puVar1 + 6);
  (*(code *)*puVar6)();
  *(short *)((long)param_1 + 6) = (short)uVar3;
  lVar5 = *(long *)(*param_2 + 0xa0);
  if (*(char *)(*param_2 + 0x98) == '\x01') {
    uVar4 = *(ulong *)(puVar1 + 2);
    (**(code **)(lVar5 + 0x10))();
  }
  else {
    uVar4 = (ulong)(uint)puVar1[2];
    (**(code **)(lVar5 + 8))();
    uVar4 = uVar4 & 0xffffffff;
  }
  *(ulong *)(param_1 + 2) = uVar4;
  *(ulong *)(param_1 + 4) = uVar4 | uVar3 >> 3 & 1;
  return;
}



/* Address: 0x10017d728 | FUN_10017d728 */

char * FUN_10017d728(long param_1,ulong param_2)

{
  char *pcVar1;
  long lVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar1 = (char *)(*(long *)(param_1 + 0x80) + (param_2 & 0xffffffff));
  pcVar3 = pcVar1;
  pcVar4 = pcVar1;
  do {
    pcVar4 = pcVar4 + 1;
    lVar2 = param_1 + 8;
    FUN_10017c758(lVar2,pcVar3,0,1);
    if ((int)lVar2 == 0) {
      return (char *)0x0;
    }
    pcVar3 = pcVar3 + 1;
  } while (*pcVar4 != '\0');
  return pcVar1;
}



/* Address: 0x10017d78c | FUN_10017d78c */

void FUN_10017d78c(long param_1)

{
  FUN_10017c9b0(param_1 + 8);
  return;
}



/* Address: 0x10017d794 | thunk_FUN_10017c9b0 */

void thunk_FUN_10017c9b0(void)

{
  FUN_10017c9b0();
  return;
}



/* Address: 0x10017d798 | FUN_10017d798 */

undefined1 * FUN_10017d798(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  uint *puVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  char local_109;
  uint local_108 [4];
  long local_f8;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [72];
  long local_a0;
  undefined4 local_98;
  long local_90;
  undefined4 local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  
  puVar4 = auStack_f0;
  FUN_10017d460(puVar4,param_1);
  if ((int)puVar4 == 0) {
    param_2 = param_2 - *(long *)(param_1 + 0x10);
    if (local_90 == 0 || local_80 == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      FUN_10017d904(auStack_f0,param_2,local_90,local_88,local_108,0,&local_109);
      puVar2 = local_108;
      local_a0 = local_80;
      local_98 = local_78;
    }
    FUN_10017d904(auStack_f0,param_2,local_a0,local_98,local_108,puVar2,&local_109);
    if (local_109 == '\x01') {
      uVar3 = (ulong)local_108[0];
      lVar1 = local_70 + uVar3;
      lVar5 = lVar1;
      do {
        uVar3 = uVar3 + 1;
        puVar4 = auStack_e8;
        FUN_10017c758(puVar4,lVar5,0,1);
        if ((int)puVar4 == 0) goto LAB_10017d8d0;
        lVar5 = lVar5 + 1;
      } while (*(char *)(local_70 + uVar3) != '\0');
      if (local_70 == 0) {
LAB_10017d8d0:
        puVar4 = (undefined1 *)0x5;
      }
      else {
        (*param_3)(*(long *)(param_1 + 0x10) + local_f8,lVar1,param_4);
        puVar4 = (undefined1 *)0x0;
      }
    }
    else {
      puVar4 = (undefined1 *)0x8;
    }
    FUN_10017c9b0(auStack_e8);
  }
  return puVar4;
}



/* Address: 0x10017d904 | FUN_10017d904 */

void FUN_10017d904(undefined8 param_1,ulong param_2,undefined8 param_3,int param_4,
                  undefined4 *param_5,undefined4 *param_6,char *param_7)

{
  int iVar1;
  undefined4 local_80;
  byte local_7c;
  ulong local_78;
  undefined8 uStack_70;
  undefined2 local_64;
  undefined1 local_62;
  
  if (param_6 == (undefined4 *)0x0) {
    *param_7 = '\0';
  }
  if (param_4 != 0) {
    iVar1 = 0;
    do {
      FUN_10017d66c(&local_80,param_1,param_3,iVar1);
      local_64 = *(undefined2 *)((ulong)&local_80 | 5);
      local_62 = *(undefined1 *)((undefined2 *)((ulong)&local_80 | 5) + 1);
      if (((local_7c & 0xee) == 0xe && local_78 <= param_2) &&
         ((*param_7 != '\x01' || (*(ulong *)(param_6 + 2) < local_78)))) {
        *param_5 = local_80;
        *(byte *)(param_5 + 1) = local_7c;
        *(undefined2 *)((long)param_5 + 5) = local_64;
        *(undefined1 *)((long)param_5 + 7) = local_62;
        *(undefined8 *)(param_5 + 4) = uStack_70;
        *(ulong *)(param_5 + 2) = local_78;
        *param_7 = '\x01';
        param_6 = param_5;
      }
      iVar1 = iVar1 + 1;
    } while (param_4 != iVar1);
  }
  return;
}



/* Address: 0x10017da0c | FUN_10017da0c */

void FUN_10017da0c(mach_port_name_t *param_1)

{
  if (*(void **)(param_1 + 6) != (void *)0x0) {
    _free(*(void **)(param_1 + 6));
  }
  FUN_10017c9b0(param_1 + 0x14);
  _mach_port_mod_refs(*(ipc_space_t *)PTR__mach_task_self__100ea8778,*param_1,0,-1);
  return;
}



/* Address: 0x10017da54 | FUN_10017da54 */

undefined8 FUN_10017da54(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  *(undefined1 *)(param_1 + 9) = 0;
  return 0;
}



/* Address: 0x10017da64 | FUN_10017da64 */

void FUN_10017da64(long param_1,undefined8 *param_2)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_10017da94();
  if (iVar1 == 0) {
    *param_2 = *(undefined8 *)(param_1 + 0x50);
  }
  return;
}



/* Address: 0x10017da94 | FUN_10017da94 */

undefined8 * FUN_10017da94(undefined8 *param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR__vm_page_size_100ea8be0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    return (undefined8 *)0x0;
  }
  puVar3 = param_1 + 2;
  lVar4 = param_1[1];
  FUN_10017c508(puVar3,*(undefined4 *)*param_1,lVar4,*(undefined8 *)PTR__vm_page_size_100ea8be0,0);
  if ((int)puVar3 == 0) {
    lVar5 = 1;
    do {
      pcVar2 = (char *)(param_1 + 2);
      FUN_10017c7bc(pcVar2,lVar4,0,1);
      if (pcVar2 == (char *)0x0) {
        lVar5 = lVar5 + 1;
        FUN_10017c9b0(param_1 + 2);
        puVar3 = param_1 + 2;
        FUN_10017c508(puVar3,*(undefined4 *)*param_1,param_1[1],*(long *)puVar1 * lVar5,0);
        if ((int)puVar3 != 0) {
          return puVar3;
        }
        pcVar2 = (char *)(param_1 + 2);
        FUN_10017c7bc(pcVar2,lVar4,0,1);
        if (pcVar2 == (char *)0x0) {
          return (undefined8 *)0x5;
        }
      }
      lVar4 = lVar4 + 1;
    } while (*pcVar2 != '\0');
    puVar3 = (undefined8 *)0x0;
    param_1[10] = ~param_1[1] + lVar4;
    *(undefined1 *)(param_1 + 9) = 1;
  }
  return puVar3;
}



/* Address: 0x10017db7c | FUN_10017db7c */

void FUN_10017db7c(long param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10017da94();
  if ((int)lVar1 == 0) {
    lVar1 = param_1 + 0x10;
    FUN_10017c7bc(lVar1,*(undefined8 *)(param_1 + 0x20),0,*(undefined8 *)(param_1 + 0x28));
    *param_2 = lVar1;
  }
  return;
}



/* Address: 0x10017dbc4 | FUN_10017dbc4 */

void FUN_10017dbc4(long param_1)

{
  if (*(char *)(param_1 + 0x48) == '\x01') {
    FUN_10017c9b0(param_1 + 0x10);
    return;
  }
  return;
}



/* Address: 0x10017dbdc | FUN_10017dbdc */

undefined8 FUN_10017dbdc(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  param_1[0x50] = 0;
  param_1[0x90] = 0;
  param_1[0xd0] = 0;
  param_1[0x110] = 0;
  param_1[0x150] = 0;
  param_1[400] = 0;
  param_1[0x1d0] = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  return 0;
}



/* Address: 0x10017dc18 | FUN_10017dc18 */

void FUN_10017dc18(long param_1)

{
  FUN_10017dc60();
  if (*(vm_address_t *)(param_1 + 0x218) != 0) {
    _vm_deallocate(*(vm_map_t *)PTR__mach_task_self__100ea8778,*(vm_address_t *)(param_1 + 0x218),
                   *(long *)(param_1 + 0x210) << 4);
    return;
  }
  return;
}



/* Address: 0x10017dc60 | FUN_10017dc60 */

void FUN_10017dc60(long param_1)

{
  if (*(char *)(param_1 + 0x10) == '\x01') {
    FUN_10017c9b0(param_1 + 0x18);
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  if (*(char *)(param_1 + 0x50) == '\x01') {
    FUN_10017c9b0(param_1 + 0x58);
    *(undefined1 *)(param_1 + 0x50) = 0;
  }
  if (*(char *)(param_1 + 0x90) == '\x01') {
    FUN_10017c9b0(param_1 + 0x98);
    *(undefined1 *)(param_1 + 0x90) = 0;
  }
  if (*(char *)(param_1 + 0xd0) == '\x01') {
    FUN_10017c9b0(param_1 + 0xd8);
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  if (*(char *)(param_1 + 0x110) == '\x01') {
    FUN_10017c9b0(param_1 + 0x118);
    *(undefined1 *)(param_1 + 0x110) = 0;
  }
  if (*(char *)(param_1 + 0x150) == '\x01') {
    FUN_10017c9b0(param_1 + 0x158);
    *(undefined1 *)(param_1 + 0x150) = 0;
  }
  if (*(char *)(param_1 + 400) == '\x01') {
    FUN_10017c9b0(param_1 + 0x198);
    *(undefined1 *)(param_1 + 400) = 0;
  }
  if (*(char *)(param_1 + 0x1d0) == '\x01') {
    FUN_10017c9b0(param_1 + 0x1d8);
    *(undefined1 *)(param_1 + 0x1d0) = 0;
  }
  return;
}



/* Address: 0x10017dd3c | FUN_10017dd3c */

void FUN_10017dd3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = 0;
  uVar1 = param_1;
  local_40 = param_3;
  FUN_10017ddbc(param_1,param_2,FUN_10017e510,&local_40);
  if (((int)uVar1 == 0) && (local_38 != 0)) {
    local_58 = local_38;
    uStack_50 = param_4;
    local_48 = param_5;
    FUN_10017ddbc(param_1,param_2,FUN_10017e530,&local_58);
  }
  return;
}



/* Address: 0x10017ddbc | FUN_10017ddbc */

uint * FUN_10017ddbc(uint *param_1,byte *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulong uVar13;
  uint *puVar14;
  undefined8 uVar15;
  uint *puVar16;
  uint local_140;
  undefined1 auStack_13c [8];
  ushort local_134;
  byte abStack_130 [40];
  uint local_108 [18];
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  ulong local_a8;
  
  if (param_2 == (byte *)0x0) {
    return (uint *)0x7;
  }
  if ((*param_2 & 1) == 0) {
    puVar14 = param_1;
    FUN_10017d1c8(param_1,"__OBJC","__module_info",auStack_c0);
    if ((int)puVar14 == 0) {
      puVar4 = auStack_c0;
      FUN_10017c7bc(puVar4,local_b0,0,0x10);
      if (puVar4 == (undefined1 *)0x0) {
        puVar14 = (uint *)0x8;
      }
      else {
        if (0xf < local_a8) {
          uVar13 = 0;
          do {
            uVar7 = (ulong)*(uint *)(puVar4 + uVar13 * 0x10 + 0xc);
            (**(code **)(*(long *)(param_1 + 0x28) + 8))();
            if ((int)uVar7 != 0) {
              puVar14 = (uint *)(ulong)*param_1;
              FUN_100174ff0(puVar14,uVar7 & 0xffffffff,0,auStack_13c,0xc);
              if ((int)puVar14 != 0) goto LAB_10017dfa0;
              uVar5 = (ulong)local_134;
              (*(code *)**(undefined8 **)(param_1 + 0x28))();
              if ((int)uVar5 != 0) {
                lVar8 = (uVar7 & 0xffffffff) + 0xc;
                uVar5 = uVar5 & 0xffffffff;
                do {
                  puVar14 = (uint *)(ulong)*param_1;
                  FUN_100174ff0(puVar14,lVar8,0,&local_140,4);
                  if ((int)puVar14 != 0) goto LAB_10017dfa0;
                  uVar7 = (ulong)local_140;
                  (**(code **)(*(long *)(param_1 + 0x28) + 8))();
                  local_140 = (uint)uVar7;
                  puVar14 = (uint *)(ulong)*param_1;
                  FUN_100174ff0(puVar14,uVar7 & 0xffffffff,0,local_108,0x28);
                  if (((int)puVar14 != 0) ||
                     (puVar14 = param_1, FUN_10017e56c(param_1,local_108,0,param_3,param_4),
                     (int)puVar14 != 0)) goto LAB_10017dfa0;
                  uVar10 = (ulong)local_108[0];
                  (**(code **)(*(long *)(param_1 + 0x28) + 8))();
                  uVar7 = uVar10 & 0xffffffff;
                  if ((uVar10 & 1) != 0) {
                    uVar7 = uVar10 & 0xfffffff8;
                  }
                  puVar14 = (uint *)(ulong)*param_1;
                  FUN_100174ff0(puVar14,uVar7,0,abStack_130,0x28);
                  if (((int)puVar14 != 0) ||
                     (puVar14 = param_1, FUN_10017e56c(param_1,abStack_130,1,param_3,param_4),
                     (int)puVar14 != 0)) goto LAB_10017dfa0;
                  lVar8 = lVar8 + 4;
                  uVar5 = uVar5 - 1;
                } while (uVar5 != 0);
              }
            }
            uVar13 = (ulong)((int)uVar13 + 1);
          } while (uVar13 < local_a8 >> 4);
        }
        puVar14 = (uint *)0x0;
      }
LAB_10017dfa0:
      FUN_10017c9b0(auStack_c0);
    }
    if ((int)puVar14 != 8) {
      return puVar14;
    }
  }
  uVar3 = param_1[0x26];
  puVar14 = param_1;
  FUN_10017e76c(param_1,param_2);
  if ((char)uVar3 == '\x01') {
    if ((int)puVar14 != 0) {
      return puVar14;
    }
    pbVar9 = param_2 + 0x118;
    FUN_10017c7bc(pbVar9,*(undefined8 *)(param_2 + 0x128),0,*(undefined8 *)(param_2 + 0x130));
    if (pbVar9 == (byte *)0x0) {
LAB_10017e4e0:
      return (uint *)&DAT_00000009;
    }
    uVar13 = *(ulong *)(param_2 + 0x130);
    if (7 < uVar13) {
      uVar7 = 0;
      uVar5 = 1;
      do {
        uVar15 = *(undefined8 *)(pbVar9 + uVar7 * 8);
        puVar6 = (ulong *)(param_2 + 0x198);
        FUN_10017c7bc(puVar6,uVar15,0,0x28);
        if (puVar6 == (ulong *)0x0) {
          puVar6 = (ulong *)(param_2 + 0x1d8);
          FUN_10017c7bc(puVar6,uVar15,0,0x28);
          if (puVar6 == (ulong *)0x0) goto LAB_10017e4e0;
        }
        puVar16 = param_1;
        FUN_10017e8ec(param_1,param_2,puVar6,0,param_3,param_4);
        if ((int)puVar16 != 8) {
          if ((int)puVar16 != 0) goto LAB_10017e4cc;
          uVar7 = *puVar6;
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
          if ((uVar7 & 1) != 0) {
            uVar7 = uVar7 & 0xffffffff8;
          }
          pbVar11 = param_2 + 0x198;
          FUN_10017c7bc(pbVar11,uVar7,0,0x28);
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = param_2 + 0x1d8;
            FUN_10017c7bc(pbVar11,uVar7,0,0x28);
            if (pbVar11 == (byte *)0x0) goto LAB_10017e4e0;
          }
          puVar14 = param_1;
          FUN_10017e8ec(param_1,param_2,pbVar11,1,param_3,param_4);
          if ((int)puVar14 != 0) {
            return puVar14;
          }
        }
        bVar1 = uVar5 < uVar13 >> 3;
        uVar7 = uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar1);
    }
    pbVar9 = param_2 + 0x158;
    FUN_10017c7bc(pbVar9,*(undefined8 *)(param_2 + 0x168),0,*(undefined8 *)(param_2 + 0x170));
    if (pbVar9 == (byte *)0x0) goto LAB_10017e4e0;
    uVar13 = *(ulong *)(param_2 + 0x170);
    if (uVar13 < 8) goto LAB_10017e4d0;
    uVar7 = 0;
    uVar5 = 1;
    do {
      uVar15 = *(undefined8 *)(pbVar9 + uVar7 * 8);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar15);
      pbVar11 = param_2 + 0x18;
      FUN_10017c7bc(pbVar11,uVar15,0,0x30);
      if (pbVar11 == (byte *)0x0) goto LAB_10017e4e0;
      uVar15 = *(undefined8 *)(pbVar11 + 8);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar15);
      pbVar12 = param_2 + 0x198;
      FUN_10017c7bc(pbVar12,uVar15,0,0x28);
      if (pbVar12 == (byte *)0x0) {
        uVar3 = *param_1;
        pbVar12 = abStack_130;
        FUN_100174ff0(uVar3,uVar15,0,abStack_130,0x28);
        if (uVar3 != 0) goto LAB_10017e4e0;
      }
      puVar16 = param_1;
      FUN_10017ea24(param_1,param_2,pbVar12,auStack_c0,local_108);
      if ((int)puVar16 == 0) {
        lVar8 = *(long *)(pbVar11 + 0x10);
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
        if ((lVar8 == 0) ||
           (puVar16 = param_1, FUN_10017ec28(param_1,param_2,auStack_c0,0,lVar8,param_3,param_4),
           (int)puVar16 == 0)) {
          lVar8 = *(long *)(pbVar11 + 0x18);
          (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
          if ((lVar8 == 0) ||
             (puVar16 = param_1, FUN_10017ec28(param_1,param_2,auStack_c0,1,lVar8,param_3,param_4),
             (int)puVar16 == 0)) {
            puVar16 = (uint *)0x0;
          }
        }
        FUN_10017dbc4(auStack_c0);
      }
    } while ((((ulong)puVar16 & 0xfffffff7) == 0) &&
            (bVar1 = uVar5 < uVar13 >> 3, uVar7 = uVar5, uVar5 = (ulong)((int)uVar5 + 1), bVar1));
  }
  else {
    if ((int)puVar14 != 0) {
      return puVar14;
    }
    pbVar9 = param_2 + 0x118;
    FUN_10017c7bc(pbVar9,*(undefined8 *)(param_2 + 0x128),0,*(undefined8 *)(param_2 + 0x130));
    if (pbVar9 == (byte *)0x0) goto LAB_10017e4e0;
    uVar13 = *(ulong *)(param_2 + 0x130);
    if (3 < uVar13) {
      uVar7 = 0;
      uVar5 = 1;
      do {
        uVar2 = *(undefined4 *)(pbVar9 + uVar7 * 4);
        puVar14 = (uint *)(param_2 + 0x198);
        FUN_10017c7bc(puVar14,uVar2,0,0x14);
        if (puVar14 == (uint *)0x0) {
          puVar14 = (uint *)(param_2 + 0x1d8);
          FUN_10017c7bc(puVar14,uVar2,0,0x14);
          if (puVar14 == (uint *)0x0) goto LAB_10017e4e0;
        }
        puVar16 = param_1;
        FUN_10017ef2c(param_1,param_2,puVar14,0,param_3,param_4);
        if ((int)puVar16 != 8) {
          if ((int)puVar16 != 0) goto LAB_10017e4cc;
          uVar10 = (ulong)*puVar14;
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          uVar7 = uVar10 & 0xffffffff;
          if ((uVar10 & 1) != 0) {
            uVar7 = uVar10 & 0xfffffff8;
          }
          pbVar11 = param_2 + 0x198;
          FUN_10017c7bc(pbVar11,uVar7,0,0x14);
          if (pbVar11 == (byte *)0x0) {
            pbVar11 = param_2 + 0x1d8;
            FUN_10017c7bc(pbVar11,uVar7,0,0x14);
            if (pbVar11 == (byte *)0x0) goto LAB_10017e4e0;
          }
          puVar14 = param_1;
          FUN_10017ef2c(param_1,param_2,pbVar11,1,param_3,param_4);
          if ((int)puVar14 != 0) {
            return puVar14;
          }
        }
        bVar1 = uVar5 < uVar13 >> 2;
        uVar7 = uVar5;
        uVar5 = (ulong)((int)uVar5 + 1);
      } while (bVar1);
    }
    pbVar9 = param_2 + 0x158;
    FUN_10017c7bc(pbVar9,*(undefined8 *)(param_2 + 0x168),0,*(undefined8 *)(param_2 + 0x170));
    if (pbVar9 == (byte *)0x0) goto LAB_10017e4e0;
    uVar13 = *(ulong *)(param_2 + 0x170);
    if (uVar13 < 4) goto LAB_10017e4d0;
    uVar7 = 0;
    uVar5 = 1;
    do {
      uVar7 = (ulong)*(uint *)(pbVar9 + uVar7 * 4);
      (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar7);
      pbVar11 = param_2 + 0x18;
      FUN_10017c7bc(pbVar11,uVar7 & 0xffffffff,0,0x18);
      if (pbVar11 == (byte *)0x0) goto LAB_10017e4e0;
      uVar7 = (ulong)*(uint *)(pbVar11 + 4);
      (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar7);
      pbVar12 = param_2 + 0x198;
      FUN_10017c7bc(pbVar12,uVar7 & 0xffffffff,0,0x14);
      if (pbVar12 == (byte *)0x0) {
        uVar3 = *param_1;
        pbVar12 = abStack_130;
        FUN_100174ff0(uVar3,uVar7 & 0xffffffff,0,abStack_130,0x14);
        if (uVar3 != 0) goto LAB_10017e4e0;
      }
      puVar16 = param_1;
      FUN_10017efd0(param_1,param_2,pbVar12,auStack_c0,local_108);
      if ((int)puVar16 == 0) {
        uVar7 = (ulong)*(uint *)(pbVar11 + 8);
        (**(code **)(*(long *)(param_1 + 0x28) + 8))();
        if (((int)uVar7 == 0) ||
           (puVar16 = param_1,
           FUN_10017ec28(param_1,param_2,auStack_c0,0,uVar7 & 0xffffffff,param_3,param_4),
           (int)puVar16 == 0)) {
          uVar7 = (ulong)*(uint *)(pbVar11 + 0xc);
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          if (((int)uVar7 == 0) ||
             (puVar16 = param_1,
             FUN_10017ec28(param_1,param_2,auStack_c0,1,uVar7 & 0xffffffff,param_3,param_4),
             (int)puVar16 == 0)) {
            puVar16 = (uint *)0x0;
          }
        }
        FUN_10017dbc4(auStack_c0);
      }
    } while ((((ulong)puVar16 & 0xfffffff7) == 0) &&
            (bVar1 = uVar5 < uVar13 >> 2, uVar7 = uVar5, uVar5 = (ulong)((int)uVar5 + 1), bVar1));
  }
LAB_10017e4cc:
  if ((int)puVar16 != 0) {
    return puVar16;
  }
LAB_10017e4d0:
  *param_2 = 1;
  return (uint *)0x0;
}



/* Address: 0x10017e510 | FUN_10017e510 */

void FUN_10017e510(void)

{
  ulong in_x3;
  ulong *in_x4;
  
  if ((in_x4[1] <= in_x3) && (in_x3 <= *in_x4)) {
    in_x4[1] = in_x3;
  }
  return;
}



/* Address: 0x10017e530 | FUN_10017e530 */

void FUN_10017e530(void)

{
  long in_x3;
  long *in_x4;
  
  if ((in_x3 == *in_x4) && ((code *)in_x4[1] != (code *)0x0)) {
    (*(code *)in_x4[1])();
    in_x4[1] = 0;
  }
  return;
}



/* Address: 0x10017e56c | FUN_10017e56c */

undefined1 *
FUN_10017e56c(uint *param_1,long param_2,undefined8 param_3,code *param_4,undefined8 param_5)

{
  uint uVar1;
  ulong uVar2;
  uint *puVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  uint local_130 [23];
  uint local_d4 [2];
  uint local_cc;
  undefined1 auStack_c8 [4];
  uint local_c4;
  undefined1 auStack_c0 [96];
  
  uVar2 = (ulong)*(uint *)(param_2 + 8);
  (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar2);
  puVar3 = (uint *)auStack_c0;
  FUN_10017da54(puVar3,param_1,uVar2 & 0xffffffff);
  if ((int)puVar3 == 0) {
    uVar2 = (ulong)*(uint *)(param_2 + 0x1c);
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    uVar2 = uVar2 & 0xffffffff;
    uVar1 = *(uint *)(param_2 + 0x10);
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    uVar6 = -(uVar1 >> 0xe & 1) & 3;
    do {
      if ((uVar1 >> 0xe & 1) == 0) {
        puVar3 = (uint *)(ulong)*param_1;
        FUN_100174ff0(puVar3,uVar2,0,local_130,4);
        if ((int)puVar3 == 0) {
          uVar4 = (ulong)local_130[0];
          (**(code **)(*(long *)(param_1 + 0x28) + 8))();
          if (1 < (int)uVar4 + 1U) {
            uVar2 = uVar2 + 4;
            uVar4 = uVar4 & 0xffffffff;
            goto LAB_10017e650;
          }
          uVar6 = 3;
        }
        else {
LAB_10017e674:
          uVar6 = 4;
        }
        break;
      }
      uVar4 = uVar2;
      if (uVar2 == 0) goto LAB_10017e73c;
LAB_10017e650:
      puVar3 = (uint *)(ulong)*param_1;
      FUN_100174ff0(puVar3,uVar4,0,auStack_c8,8);
      if ((int)puVar3 != 0) goto LAB_10017e674;
      uVar5 = (ulong)local_c4;
      (**(code **)(*(long *)(param_1 + 0x28) + 8))();
      if ((int)uVar5 != 0) {
        lVar7 = uVar4 + 8;
        uVar5 = uVar5 & 0xffffffff;
        do {
          puVar3 = (uint *)(ulong)*param_1;
          FUN_100174ff0(puVar3,lVar7,0,local_d4,0xc);
          if ((int)puVar3 != 0) goto LAB_10017e674;
          uVar4 = (ulong)local_d4[0];
          (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar4);
          puVar3 = local_130;
          FUN_10017da54(local_130,param_1,uVar4 & 0xffffffff);
          if ((int)puVar3 != 0) goto LAB_10017e674;
          uVar4 = (ulong)local_cc;
          (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar4);
          (*param_4)(param_3,auStack_c0,local_130,uVar4 & 0xffffffff,param_5);
          FUN_10017dbc4(local_130);
          lVar7 = lVar7 + 0xc;
          uVar5 = uVar5 - 1;
        } while (uVar5 != 0);
      }
      puVar3 = (uint *)0x0;
    } while (uVar6 == 0);
    if (uVar6 - 3 < 2) {
LAB_10017e73c:
      FUN_10017dbc4(auStack_c0);
    }
  }
  return (undefined1 *)puVar3;
}



/* Address: 0x10017e76c | FUN_10017e76c */

long FUN_10017e76c(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_38 [8];
  
  if (param_1 != *(long *)(param_2 + 8)) {
    FUN_10017dc60(param_2);
    *(undefined8 *)(param_2 + 8) = 0;
    lVar1 = param_1;
    FUN_10017e990(param_1,auStack_38,"__objc_const",param_2 + 0x18);
    if ((int)lVar1 == 0) {
      *(undefined1 *)(param_2 + 0x10) = 1;
      lVar1 = param_1;
      FUN_10017d1c8(param_1,"__DATA","__objc_const_ax",param_2 + 0x58);
      *(bool *)(param_2 + 0x50) = (int)lVar1 == 0;
      lVar1 = param_1;
      FUN_10017d1c8(param_1,"__TEXT","__objc_methlist",param_2 + 0x98);
      *(bool *)(param_2 + 0x90) = (int)lVar1 == 0;
      lVar1 = param_1;
      FUN_10017d1c8(param_1,"__DATA","__objc_selrefs",param_2 + 0xd8);
      *(bool *)(param_2 + 0xd0) = (int)lVar1 == 0;
      lVar1 = param_1;
      FUN_10017e990(param_1,auStack_38,"__objc_classlist",param_2 + 0x118);
      if ((int)lVar1 == 0) {
        *(undefined1 *)(param_2 + 0x110) = 1;
        lVar1 = param_1;
        FUN_10017e990(param_1,auStack_38,"__objc_catlist",param_2 + 0x158);
        if ((int)lVar1 == 0) {
          *(undefined1 *)(param_2 + 0x150) = 1;
          lVar1 = param_1;
          FUN_10017d1c8(param_1,"__DATA","__objc_data",param_2 + 0x198);
          if ((int)lVar1 == 0) {
            *(undefined1 *)(param_2 + 400) = 1;
            lVar1 = param_1;
            FUN_10017d1c8(param_1,"__DATA","__data",param_2 + 0x1d8);
            *(bool *)(param_2 + 0x1d0) = (int)lVar1 == 0;
            *(long *)(param_2 + 8) = param_1;
          }
        }
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x10017e8ec | FUN_10017e8ec */

long FUN_10017e8ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long local_c0;
  undefined1 auStack_98 [88];
  
  lVar1 = param_1;
  FUN_10017ea24();
  if ((int)lVar1 == 0) {
    (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))();
    if (local_c0 == 0) {
      param_1 = 0;
    }
    else {
      FUN_10017ec28(param_1,param_2,auStack_98,param_4,local_c0,param_5,param_6);
    }
    FUN_10017dbc4(auStack_98);
    lVar1 = param_1;
  }
  return lVar1;
}



/* Address: 0x10017e990 | FUN_10017e990 */

void FUN_10017e990(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *param_2 = "__DATA";
  uVar1 = param_1;
  FUN_10017d1c8();
  if ((int)uVar1 == 8) {
    *param_2 = "__DATA_CONST";
    uVar1 = param_1;
    FUN_10017d1c8(param_1,"__DATA_CONST",param_3,param_4);
    if ((int)uVar1 == 8) {
      *param_2 = "__DATA_DIRTY";
      FUN_10017d1c8(param_1,"__DATA_DIRTY",param_3,param_4);
      return;
    }
  }
  return;
}



/* Address: 0x10017ea24 | FUN_10017ea24 */

undefined4 FUN_10017ea24(int *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  ulong local_68;
  uint local_60 [2];
  ulong local_58;
  
  uVar4 = *(ulong *)(param_3 + 0x20);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  uVar4 = uVar4 & 0x7ffffffffff8;
  uVar8 = *(ulong *)(param_2 + 0x210);
  if (uVar8 == 0) {
LAB_10017eac0:
    iVar2 = *param_1;
    FUN_100174ff0(iVar2,uVar4,0,local_60,0x10);
    if (iVar2 == 0) {
      uVar3 = local_60[0];
      (**(code **)(*(long *)(param_1 + 0x28) + 8))();
      uVar8 = uVar4;
      if ((-1 < (int)uVar3) ||
         ((**(code **)(*(long *)(param_1 + 0x28) + 0x10))(), uVar8 = local_58, (local_58 & 1) == 0))
      {
        if ((uVar3 >> 0x1b & 1) == 0) {
LAB_10017eb58:
          piVar5 = param_1;
          FUN_10017ce58(param_1,uVar8);
          if (((ulong)piVar5 & 1) == 0) goto LAB_10017eb94;
          lVar9 = param_2 + 0x18;
          FUN_10017c7bc(lVar9,uVar8,0,0x48);
          if (lVar9 == 0) goto LAB_10017eadc;
          FUN_1001751cc(param_5,lVar9,0x48);
        }
        else {
LAB_10017eb94:
          iVar2 = *param_1;
          FUN_100174ff0(iVar2,uVar8,0,param_5,0x48);
          if (iVar2 != 0) goto LAB_10017eadc;
        }
        FUN_10017ee88(param_2,uVar4,uVar8);
        goto LAB_10017ebe0;
      }
      iVar2 = *param_1;
      FUN_100174ff0(iVar2,local_58 & 0xfffffffffffffffe,0,&local_68,8);
      if (iVar2 == 0) {
        (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(local_68);
        uVar8 = local_68;
        if ((uVar3 >> 0x1b & 1) == 0) goto LAB_10017eb58;
        goto LAB_10017eb94;
      }
    }
LAB_10017eadc:
    uVar7 = 9;
  }
  else {
    uVar1 = 0;
    if (uVar8 != 0) {
      uVar1 = (uVar4 >> 2) / uVar8;
    }
    lVar9 = (uVar4 >> 2) - uVar1 * uVar8;
    if ((*(ulong *)(*(long *)(param_2 + 0x218) + lVar9 * 8) != uVar4) ||
       (lVar9 = *(long *)(*(long *)(param_2 + 0x220) + lVar9 * 8), lVar9 == 0)) goto LAB_10017eac0;
    param_2 = param_2 + 0x18;
    FUN_10017c7bc(param_2,lVar9,0,0x48);
    if (param_2 == 0) {
      iVar2 = *param_1;
      FUN_100174ff0(iVar2,lVar9,0,param_5,0x48);
      if (iVar2 == 0) goto LAB_10017ebe0;
      goto LAB_10017eadc;
    }
    FUN_1001751cc(param_5,param_2,0x48);
LAB_10017ebe0:
    uVar6 = *(undefined8 *)(param_5 + 0x18);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(uVar6);
    FUN_10017da54(param_4,param_1,uVar6);
    uVar7 = 0;
    if ((int)param_4 != 0) {
      uVar7 = 9;
    }
  }
  return uVar7;
}



/* Address: 0x10017ec28 | FUN_10017ec28 */

void FUN_10017ec28(long param_1,long param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  code *param_6,undefined8 param_7)

{
  ulong *puVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  uint uVar9;
  ulong *local_d0;
  undefined1 auStack_b8 [88];
  
  local_d0 = (ulong *)(param_2 + 0x18);
  puVar3 = local_d0;
  FUN_10017c7bc(local_d0,param_5,0,8);
  if (puVar3 == (ulong *)0x0) {
    if (*(char *)(param_2 + 0x50) == '\x01') {
      local_d0 = (ulong *)(param_2 + 0x58);
      puVar3 = local_d0;
      FUN_10017c7bc(local_d0,param_5,0,8);
      if (puVar3 != (ulong *)0x0) goto LAB_10017ec7c;
    }
    if (*(char *)(param_2 + 0x90) != '\x01') {
      return;
    }
    local_d0 = (ulong *)(param_2 + 0x98);
    puVar3 = local_d0;
    FUN_10017c7bc(local_d0,param_5,0,8);
    if (puVar3 == (ulong *)0x0) {
      return;
    }
  }
LAB_10017ec7c:
  uVar2 = (uint)*puVar3;
  (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
  uVar8 = (ulong)(uVar2 & 0xfffc);
  uVar2 = (uint)*puVar3;
  (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
  uVar4 = (ulong)*(uint *)((long)puVar3 + 4);
  (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
  puVar3 = local_d0;
  FUN_10017c7bc(local_d0,param_5 + 8,0,(uVar4 & 0xffffffff) * uVar8);
  if (puVar3 != (ulong *)0x0) {
    uVar9 = (uint)uVar4;
    puVar1 = puVar3;
    while (uVar9 != 0) {
      if (*(char *)(param_1 + 0x98) == '\x01') {
        if ((int)uVar2 < 0) {
          uVar5 = local_d0[4];
          uVar9 = (uint)*puVar3;
          (**(code **)(*(long *)(param_1 + 0xa0) + 8))(uVar9);
          uVar5 = (long)puVar1 + uVar5 + (long)(int)uVar9;
        }
        else {
          uVar5 = *puVar3;
          (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))(uVar5);
        }
      }
      else {
        uVar5 = (ulong)(uint)*puVar3;
        (**(code **)(*(long *)(param_1 + 0xa0) + 8))(uVar5);
        uVar5 = uVar5 & 0xffffffff;
      }
      if (*(char *)(param_2 + 0xd0) == '\x01') {
        puVar6 = (ulong *)(param_2 + 0xd8);
        FUN_10017c7bc(puVar6,uVar5,0,8);
        if (puVar6 != (ulong *)0x0) {
          uVar5 = *puVar6;
        }
      }
      puVar7 = auStack_b8;
      FUN_10017da54(puVar7,param_1,uVar5);
      if ((int)puVar7 != 0) {
        return;
      }
      if (*(char *)(param_1 + 0x98) == '\x01') {
        if ((int)uVar2 < 0) {
          uVar5 = local_d0[4];
          uVar9 = (uint)puVar3[1];
          (**(code **)(*(long *)(param_1 + 0xa0) + 8))(uVar9);
          uVar5 = (long)puVar1 + uVar5 + (long)(int)uVar9 + 8;
        }
        else {
          uVar5 = puVar3[2];
          (**(code **)(*(long *)(param_1 + 0xa0) + 0x10))(uVar5);
        }
      }
      else {
        uVar5 = (ulong)(uint)puVar3[1];
        (**(code **)(*(long *)(param_1 + 0xa0) + 8))(uVar5);
        uVar5 = uVar5 & 0xffffffff;
      }
      (*param_6)(param_4,param_3,auStack_b8,uVar5,param_7);
      FUN_10017dbc4(auStack_b8);
      puVar3 = (ulong *)((long)puVar3 + uVar8);
      puVar1 = (ulong *)((long)puVar1 + uVar8);
      uVar9 = (int)uVar4 - 1;
      uVar4 = (ulong)uVar9;
    }
  }
  return;
}



/* Address: 0x10017ee88 | FUN_10017ee88 */

void FUN_10017ee88(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  kern_return_t kVar2;
  vm_address_t vVar3;
  long lVar4;
  ulong uVar5;
  vm_address_t local_38;
  
  vVar3 = *(vm_address_t *)(param_1 + 0x218);
  if (*(vm_address_t *)(param_1 + 0x218) == 0) {
    *(undefined8 *)(param_1 + 0x210) = 0x400;
    kVar2 = _vm_allocate(*(vm_map_t *)PTR__mach_task_self__100ea8778,&local_38,0x4000,1);
    if (kVar2 != 0) {
      *(undefined8 *)(param_1 + 0x210) = 0;
      return;
    }
    *(vm_address_t *)(param_1 + 0x218) = local_38;
    *(vm_address_t *)(param_1 + 0x220) = local_38 + 0x2000;
    vVar3 = local_38;
  }
  uVar5 = *(ulong *)(param_1 + 0x210);
  uVar1 = 0;
  if (uVar5 != 0) {
    uVar1 = (param_2 >> 2) / uVar5;
  }
  lVar4 = (param_2 >> 2) - uVar1 * uVar5;
  if (*(long *)(vVar3 + lVar4 * 8) == 0) {
    *(ulong *)(vVar3 + lVar4 * 8) = param_2;
    *(undefined8 *)(*(long *)(param_1 + 0x220) + lVar4 * 8) = param_3;
  }
  return;
}



/* Address: 0x10017ef2c | FUN_10017ef2c */

long FUN_10017ef2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  uint local_ac;
  undefined1 auStack_98 [88];
  
  lVar1 = param_1;
  FUN_10017efd0();
  if ((int)lVar1 == 0) {
    uVar2 = (ulong)local_ac;
    (**(code **)(*(long *)(param_1 + 0xa0) + 8))();
    if ((int)uVar2 == 0) {
      param_1 = 0;
    }
    else {
      FUN_10017ec28(param_1,param_2,auStack_98,param_4,uVar2 & 0xffffffff,param_5,param_6);
    }
    FUN_10017dbc4(auStack_98);
    lVar1 = param_1;
  }
  return lVar1;
}



/* Address: 0x10017efd0 | FUN_10017efd0 */

undefined4 FUN_10017efd0(int *param_1,long param_2,long param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint local_60;
  uint local_5c [2];
  uint local_54;
  
  uVar1 = *(uint *)(param_3 + 0x10);
  (**(code **)(*(long *)(param_1 + 0x28) + 8))();
  uVar9 = (ulong)(uVar1 & 0xfffffff8);
  uVar6 = *(ulong *)(param_2 + 0x210);
  if (uVar6 != 0) {
    uVar8 = (ulong)((uVar1 & 0xfffffff8) >> 2);
    uVar3 = 0;
    if (uVar6 != 0) {
      uVar3 = uVar8 / uVar6;
    }
    lVar7 = uVar8 - uVar3 * uVar6;
    if ((*(ulong *)(*(long *)(param_2 + 0x218) + lVar7 * 8) == uVar9) &&
       (lVar7 = *(long *)(*(long *)(param_2 + 0x220) + lVar7 * 8), lVar7 != 0)) {
      param_2 = param_2 + 0x18;
      FUN_10017c7bc(param_2,lVar7,0,0x28);
      if (param_2 == 0) {
        iVar2 = *param_1;
        FUN_100174ff0(iVar2,lVar7,0,param_5,0x28);
        if (iVar2 != 0) {
          return 9;
        }
      }
      else {
        FUN_1001751cc(param_5,param_2,0x28);
      }
      goto LAB_10017f18c;
    }
  }
  iVar2 = *param_1;
  FUN_100174ff0(iVar2,uVar9,0,local_5c,0xc);
  if (iVar2 != 0) {
    return 9;
  }
  uVar1 = local_5c[0];
  (**(code **)(*(long *)(param_1 + 0x28) + 8))();
  uVar6 = uVar9;
  if ((int)uVar1 < 0) {
    uVar3 = (ulong)local_54;
    (**(code **)(*(long *)(param_1 + 0x28) + 8))();
    uVar6 = uVar3 & 0xffffffff;
    if ((uVar3 & 1) == 0) goto LAB_10017f0b0;
    iVar2 = *param_1;
    FUN_100174ff0(iVar2,uVar3 & 0xfffffffe,0,&local_60,4);
    if (iVar2 != 0) {
      return 9;
    }
    uVar6 = (ulong)local_60;
    (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar6);
    uVar6 = uVar6 & 0xffffffff;
    if ((uVar1 >> 0x1b & 1) == 0) goto LAB_10017f104;
LAB_10017f140:
    iVar2 = *param_1;
    FUN_100174ff0(iVar2,uVar6,0,param_5,0x28);
    if (iVar2 != 0) {
      return 9;
    }
  }
  else {
LAB_10017f0b0:
    if ((uVar1 >> 0x1b & 1) != 0) goto LAB_10017f140;
LAB_10017f104:
    piVar4 = param_1;
    FUN_10017ce58(param_1,uVar6);
    if (((ulong)piVar4 & 1) == 0) goto LAB_10017f140;
    lVar7 = param_2 + 0x18;
    FUN_10017c7bc(lVar7,uVar6,0,0x28);
    if (lVar7 == 0) {
      return 9;
    }
    FUN_1001751cc(param_5,lVar7,0x28);
  }
  FUN_10017ee88(param_2,uVar9,uVar6);
LAB_10017f18c:
  uVar6 = (ulong)*(uint *)(param_5 + 0x10);
  (**(code **)(*(long *)(param_1 + 0x28) + 8))(uVar6);
  FUN_10017da54(param_4,param_1,uVar6 & 0xffffffff);
  uVar5 = 0;
  if ((int)param_4 != 0) {
    uVar5 = 9;
  }
  return uVar5;
}



/* Address: 0x10017f1d4 | FUN_10017f1d4 */

char * FUN_10017f1d4(int param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  int *piVar3;
  
  pcVar1 = "ILL_NOOP";
  lVar2 = 0x1d;
  piVar3 = &DAT_100eba20c;
  while ((piVar3[-1] != param_1 || (*piVar3 != param_2))) {
    pcVar1 = *(char **)(piVar3 + 5);
    piVar3 = piVar3 + 4;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) {
      return pcVar1;
    }
  }
  return pcVar1;
}



/* Address: 0x10017f218 | FUN_10017f218 */

char * FUN_10017f218(int param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  
  if (param_1 == 1) {
    return "SIGHUP";
  }
  lVar2 = 0x20;
  ppuVar1 = &PTR_s_SIGINT_100eba400;
  do {
    ppuVar3 = ppuVar1;
    lVar2 = lVar2 + -1;
    if (lVar2 == 0) break;
    ppuVar1 = ppuVar3 + 2;
  } while (*(int *)(ppuVar3 + -1) != param_1);
  return *ppuVar3;
}



/* Address: 0x10017f25c | thunk_FUN_10017dbdc */

undefined8 thunk_FUN_10017dbdc(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  param_1[0x10] = 0;
  param_1[0x50] = 0;
  param_1[0x90] = 0;
  param_1[0xd0] = 0;
  param_1[0x110] = 0;
  param_1[0x150] = 0;
  param_1[400] = 0;
  param_1[0x1d0] = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  *(undefined8 *)(param_1 + 0x218) = 0;
  return 0;
}



/* Address: 0x10017f260 | thunk_FUN_10017dc18 */

void thunk_FUN_10017dc18(long param_1)

{
  FUN_10017dc60();
  if (*(vm_address_t *)(param_1 + 0x218) != 0) {
    _vm_deallocate(*(vm_map_t *)PTR__mach_task_self__100ea8778,*(vm_address_t *)(param_1 + 0x218),
                   *(long *)(param_1 + 0x210) << 4);
    return;
  }
  return;
}



/* Address: 0x10017f264 | FUN_10017f264 */

void FUN_10017f264(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 auStack_168 [256];
  char local_68;
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_60 = 0;
  local_68 = '\0';
  if ((param_2 & 1) == 0) {
    bVar2 = true;
  }
  else {
    uVar3 = param_1;
    FUN_10017d798(param_1,param_4,FUN_10017f37c,auStack_168);
    bVar2 = (int)uVar3 != 0;
  }
  if ((param_2 >> 1 & 1) == 0) {
    bVar1 = true;
  }
  else {
    FUN_10017dd3c(param_1,param_3,param_4,FUN_10017f3dc,auStack_168);
    bVar1 = (int)param_1 != 0;
  }
  if ((bool)(bVar2 & bVar1)) {
    uVar3 = 8;
  }
  else if (local_68 == '\x01') {
    (*param_5)(local_60,auStack_168,param_6);
    uVar3 = 0;
  }
  else {
    uVar3 = 6;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3);
  }
  return;
}



/* Address: 0x10017f37c | FUN_10017f37c */

void FUN_10017f37c(ulong param_1,char *param_2,long param_3)

{
  bool bVar1;
  char cVar2;
  ulong uVar3;
  ulong uVar4;
  
  if ((*(char *)(param_3 + 0x100) != '\x01') || (*(ulong *)(param_3 + 0x108) <= param_1)) {
    *(ulong *)(param_3 + 0x108) = param_1;
    *(undefined1 *)(param_3 + 0x100) = 1;
    cVar2 = *param_2;
    if (cVar2 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar3 = 0;
      do {
        uVar4 = uVar3 + 1;
        *(char *)(param_3 + uVar3) = cVar2;
        cVar2 = param_2[uVar3 + 1];
        if (cVar2 == '\0') break;
        bVar1 = uVar3 < 0xfe;
        uVar3 = uVar4;
      } while (bVar1);
    }
    *(undefined1 *)(param_3 + uVar4) = 0;
  }
  return;
}



/* Address: 0x10017f3dc | FUN_10017f3dc */

void FUN_10017f3dc(int param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 *param_5)

{
  undefined8 uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 uVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  undefined1 *local_60;
  long local_58;
  long local_50;
  long local_48;
  
  if ((param_5[0x100] == '\x01') && (param_4 < *(ulong *)(param_5 + 0x108))) {
    return;
  }
  uVar1 = param_2;
  FUN_10017da64(param_2,&local_48);
  if ((int)uVar1 != 0) {
    return;
  }
  FUN_10017db7c(param_2,&local_50);
  if ((int)param_2 != 0) {
    return;
  }
  uVar1 = param_3;
  FUN_10017da64(param_3,&local_58);
  if ((int)uVar1 != 0) {
    return;
  }
  FUN_10017db7c(param_3,&local_60);
  if ((int)param_3 != 0) {
    return;
  }
  uVar7 = 0x2b;
  if (param_1 == 0) {
    uVar7 = 0x2d;
  }
  *param_5 = uVar7;
  param_5[1] = 0x5b;
  if (local_48 == 0) {
    uVar3 = 2;
LAB_10017f4c8:
    uVar4 = (ulong)(uVar3 + 1);
    param_5[uVar3] = 0x20;
  }
  else {
    lVar6 = 0;
    do {
      lVar8 = lVar6;
      if (lVar8 == 0xfd) {
        uVar4 = 0xff;
        goto LAB_10017f4dc;
      }
      param_5[lVar8 + 2] = *(undefined1 *)(local_50 + lVar8);
      lVar6 = lVar8 + 1;
    } while (local_48 != lVar8 + 1);
    uVar4 = lVar8 + 3;
    if (lVar8 + 2U < 0xfe) {
      uVar3 = (uint)uVar4;
      goto LAB_10017f4c8;
    }
  }
LAB_10017f4dc:
  if (local_58 != 0) {
    iVar2 = (int)uVar4;
    iVar10 = iVar2;
    if (iVar2 < 0x100) {
      iVar10 = 0xff;
    }
    uVar5 = (ulong)(uint)(iVar10 - iVar2);
    uVar9 = uVar4 & 0xffffffff;
    do {
      if (uVar5 == 0) {
        uVar3 = (uint)uVar9;
        goto LAB_10017f540;
      }
      uVar4 = uVar9 + 1;
      param_5[uVar9] = *local_60;
      uVar5 = uVar5 - 1;
      local_58 = local_58 + -1;
      local_60 = local_60 + 1;
      uVar9 = uVar4;
    } while (local_58 != 0);
  }
  uVar3 = (uint)uVar4;
  if ((int)uVar3 < 0xff) {
    param_5[(int)uVar3] = 0x5d;
    lVar6 = (long)(int)(uVar3 + 1);
  }
  else {
LAB_10017f540:
    if (0xff < uVar3) goto LAB_10017f550;
    lVar6 = 0xff;
  }
  param_5[lVar6] = 0;
LAB_10017f550:
  *(ulong *)(param_5 + 0x108) = param_4;
  param_5[0x100] = 1;
  return;
}



/* Address: 0x10017f574 | FUN_10017f574 */

undefined8 FUN_10017f574(undefined8 *param_1,int param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  uVar1 = 4;
  param_1[1] = 0;
  *param_1 = 0;
  if (param_2 == 0xc) {
    uVar2 = 0x1100000009;
  }
  else {
    if (param_2 != 0x100000c) {
      return 4;
    }
    uVar2 = 0x4400000006;
    uVar1 = 8;
  }
  param_1[3] = uVar2;
  *(undefined4 *)param_1 = 2;
  param_1[1] = uVar1;
  param_1[2] = 0;
  return 0;
}



/* Address: 0x10017f5f0 | FUN_10017f5f0 */

void FUN_10017f5f0(long param_1)

{
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Address: 0x10017f5f8 | FUN_10017f5f8 */

void FUN_10017f5f8(undefined8 *param_1,long param_2)

{
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x25] = 0;
  param_1[0x24] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0x4400000006;
  *(undefined4 *)param_1 = 2;
  param_1[2] = 0;
  param_1[1] = 8;
  FUN_1001751cc(param_1 + 4,param_2 + 0x10,0x110);
  param_1[2] = 0xffffffffffffffff;
  return;
}



/* Address: 0x10017f674 | FUN_10017f674 */

undefined4 FUN_10017f674(undefined4 *param_1,thread_act_t param_2)

{
  undefined8 uVar1;
  kern_return_t kVar2;
  undefined4 uVar3;
  mach_msg_type_number_t local_24;
  
  local_24 = 0x46;
  kVar2 = _thread_get_state(param_2,1,param_1 + 6,&local_24);
  if (kVar2 == 0) {
    *param_1 = 2;
    uVar1 = 8;
    if (param_1[6] != 6) {
      uVar1 = 4;
    }
    *(undefined8 *)(param_1 + 2) = uVar1;
    *(undefined8 *)(param_1 + 4) = 0xffffffffffffffff;
    uVar3 = 0;
  }
  else {
    uVar3 = 6;
  }
  return uVar3;
}



/* Address: 0x10017f6e4 | FUN_10017f6e4 */

void FUN_10017f6e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1001751cc(param_1,param_2,0x130);
  return;
}



/* Address: 0x10017f6ec | FUN_10017f6ec */

uint FUN_10017f6ec(long param_1,ulong param_2)

{
  return (uint)(*(ulong *)(param_1 + 0x10) >> (param_2 & 0x3f)) & 1;
}



/* Address: 0x10017f6fc | FUN_10017f6fc */

void FUN_10017f6fc(long param_1,ulong param_2)

{
  *(ulong *)(param_1 + 0x10) =
       *(ulong *)(param_1 + 0x10) & (1L << (param_2 & 0x3f) ^ 0xffffffffffffffffU);
  return;
}



/* Address: 0x10017f714 | FUN_10017f714 */

undefined4 FUN_10017f714(undefined4 *param_1)

{
  return *param_1;
}



/* Address: 0x10017f71c | FUN_10017f71c */

undefined8 FUN_10017f71c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}


