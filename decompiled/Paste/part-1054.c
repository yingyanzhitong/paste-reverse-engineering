/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b56f20 | FUN_100b56f20 */

void FUN_100b56f20(void)

{
  FUN_100bf33a4();
  return;
}



/* Address: 0x100b56f28 | FUN_100b56f28 */

void FUN_100b56f28(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  *unaff_x19 = param_1;
  return;
}



/* Address: 0x100b56f3c | FUN_100b56f3c */

void FUN_100b56f3c(void)

{
  return;
}



/* Address: 0x100b56f48 | FUN_100b56f48 */

void FUN_100b56f48(void)

{
  return;
}



/* Address: 0x100b56f54 | FUN_100b56f54 */

void FUN_100b56f54(void)

{
  int in_w8;
  long unaff_x19;
  
  *(int *)(unaff_x19 + 0x10) = in_w8 + 1;
  return;
}



/* Address: 0x100b56f68 | FUN_100b56f68 */

void FUN_100b56f68(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = 0xdc4274;
  FUN_100b56ec4(*param_1,"\"",param_2,param_1[1]);
  if (iVar1 == 0) {
    FUN_100b56ac8(param_1,param_2,param_3);
    FUN_100b56ec4(*param_1,"\"");
  }
  FUN_100b56e60();
  return;
}



/* Address: 0x100b56fd0 | FUN_100b56fd0 */

void FUN_100b56fd0(undefined8 param_1,long *param_2,undefined8 param_3,code *UNRECOVERED_JUMPTABLE)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  byte *pbVar10;
  char *extraout_x8;
  char *pcVar11;
  byte *extraout_x8_00;
  byte *extraout_x8_01;
  byte *extraout_x8_02;
  byte *extraout_x8_03;
  long lVar12;
  long lVar13;
  char *pcVar14;
  byte *pbVar15;
  byte *pbVar16;
  double dVar17;
  
  pbVar15 = (byte *)*param_2;
  pbVar10 = (byte *)param_2[1];
  while (pbVar15 < pbVar10) {
    iVar7 = (int)(char)*pbVar15;
    if ((char)*pbVar15 < '\0') {
      FUN_100b56e90();
    }
    else {
      FUN_100b56e6c();
    }
    if (iVar7 == 0) {
      pbVar15 = (byte *)*param_2;
      pbVar10 = (byte *)param_2[1];
      break;
    }
    pbVar15 = pbVar15 + 1;
    *param_2 = (long)pbVar15;
    pbVar10 = (byte *)param_2[1];
  }
  if (pbVar10 <= pbVar15) {
    return;
  }
  bVar1 = *pbVar15;
  if (bVar1 - 0x30 < 10) {
    bVar5 = false;
    iVar7 = 1;
    pbVar16 = pbVar15;
  }
  else {
    if (bVar1 != 0x2d) {
      if (bVar1 == 0x5b) {
        *param_2 = (long)(pbVar15 + 1);
        (**(code **)(param_2[6] + 0x38))(param_1,param_2[7]);
        if ((int)param_1 != 0) {
          return;
        }
        pbVar15 = (byte *)*param_2;
        pbVar10 = (byte *)param_2[1];
        do {
          if (pbVar10 <= pbVar15) {
            return;
          }
          while (pbVar15 < pbVar10) {
            iVar7 = (int)(char)*pbVar15;
            if ((char)*pbVar15 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
            if (iVar7 == 0) {
              pbVar15 = (byte *)*param_2;
              pbVar10 = (byte *)param_2[1];
              break;
            }
            FUN_100b56ed4();
            pbVar10 = (byte *)param_2[1];
          }
          if (pbVar10 <= pbVar15) {
            return;
          }
          uVar6 = 0x5c < *pbVar15;
          if (*pbVar15 == 0x5d) goto LAB_100b575d0;
          iVar7 = 0;
          FUN_100b56fd0(0,param_2);
          if (iVar7 != 0) {
            return;
          }
          pbVar15 = (byte *)*param_2;
          while (FUN_100b56f48(), pbVar10 = extraout_x8_02, !(bool)uVar6) {
            iVar7 = (int)(char)*pbVar15;
            if ((char)*pbVar15 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
            if (iVar7 == 0) {
              pbVar15 = (byte *)*param_2;
              pbVar10 = (byte *)param_2[1];
              break;
            }
            FUN_100b56ed4();
          }
          if (pbVar10 <= pbVar15) {
            return;
          }
          if (*pbVar15 == 0x2c) {
            FUN_100b56ed4();
            pbVar10 = extraout_x8_03;
          }
        } while( true );
      }
      if (bVar1 == 0x66) {
        if ((long)pbVar10 - (long)pbVar15 < 5) {
          return;
        }
        if (pbVar15[1] != 0x61) {
          return;
        }
        if (pbVar15[2] != 0x6c) {
          return;
        }
        if (pbVar15[3] != 0x73) {
          return;
        }
        if (pbVar15[4] != 0x65) {
          return;
        }
        FUN_100b56f28(pbVar15 + 5,1);
LAB_100b573d8:
                    /* WARNING: Could not recover jumptable at 0x000100b573e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return;
      }
      if (bVar1 == 0x6e) {
        if ((long)pbVar10 - (long)pbVar15 < 4) {
          return;
        }
        if (pbVar15[1] != 0x75) {
          return;
        }
        if (pbVar15[2] != 0x6c) {
          return;
        }
        if (pbVar15[3] != 0x6c) {
          return;
        }
        *param_2 = (long)(pbVar15 + 4);
                    /* WARNING: Could not recover jumptable at 0x000100b57440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[6] + 0x20))(param_1,param_2[7]);
        return;
      }
      if (bVar1 == 0x74) {
        if ((long)pbVar10 - (long)pbVar15 < 4) {
          return;
        }
        if (pbVar15[1] != 0x72) {
          return;
        }
        if (pbVar15[2] != 0x75) {
          return;
        }
        if (pbVar15[3] != 0x65) {
          return;
        }
        FUN_100b56f28(pbVar15 + 4,1);
        goto LAB_100b573d8;
      }
      if (bVar1 == 0x7b) {
        *param_2 = (long)(pbVar15 + 1);
        (**(code **)(param_2[6] + 0x30))(param_1,param_2[7]);
        if ((int)param_1 != 0) {
          return;
        }
        pbVar15 = (byte *)*param_2;
        pbVar10 = (byte *)param_2[1];
        do {
          if (pbVar10 <= pbVar15) {
            return;
          }
          while (pbVar15 < pbVar10) {
            iVar7 = (int)(char)*pbVar15;
            if ((char)*pbVar15 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
            if (iVar7 == 0) {
              pbVar15 = (byte *)*param_2;
              pbVar10 = (byte *)param_2[1];
              break;
            }
            FUN_100b56ed4();
            pbVar10 = (byte *)param_2[1];
          }
          if (pbVar10 <= pbVar15) {
            return;
          }
          uVar6 = 0x7c < *pbVar15;
          if (*pbVar15 == 0x7d) {
LAB_100b575d0:
            *param_2 = (long)(pbVar15 + 1);
                    /* WARNING: Could not recover jumptable at 0x000100b575f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(param_2[6] + 0x40))(param_2[7]);
            return;
          }
          plVar8 = param_2;
          FUN_100b57898(param_2,param_2[2],(int)param_2[3]);
          if ((int)plVar8 != 0) {
            return;
          }
          pcVar14 = (char *)*param_2;
          while (FUN_100b56f48(), pcVar11 = extraout_x8, !(bool)uVar6) {
            iVar7 = (int)*pcVar14;
            if (*pcVar14 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
            if (iVar7 == 0) {
              pcVar14 = (char *)*param_2;
              pcVar11 = (char *)param_2[1];
              break;
            }
            FUN_100b56ed4();
          }
          if (pcVar11 <= pcVar14) {
            return;
          }
          if (*pcVar14 != ':') {
            return;
          }
          uVar6 = 1;
          do {
            pcVar14 = pcVar14 + 1;
            *param_2 = (long)pcVar14;
            FUN_100b56f48();
            if ((bool)uVar6) break;
            iVar7 = (int)*pcVar14;
            if (*pcVar14 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
          } while (iVar7 != 0);
          lVar13 = param_2[2];
          FUN_100b56fd0(lVar13,param_2);
          if ((int)lVar13 != 0) {
            return;
          }
          pbVar15 = (byte *)*param_2;
          while (FUN_100b56f48(), pbVar10 = extraout_x8_00, !(bool)uVar6) {
            iVar7 = (int)(char)*pbVar15;
            if ((char)*pbVar15 < '\0') {
              FUN_100b56e90();
            }
            else {
              FUN_100b56e6c();
            }
            if (iVar7 == 0) {
              pbVar15 = (byte *)*param_2;
              pbVar10 = (byte *)param_2[1];
              break;
            }
            FUN_100b56ed4();
          }
          if (pbVar10 <= pbVar15) {
            return;
          }
          if (*pbVar15 == 0x2c) {
            FUN_100b56ed4();
            pbVar10 = extraout_x8_01;
          }
        } while( true );
      }
      if (bVar1 != 0x22) {
        return;
      }
      plVar8 = param_2;
      FUN_100b57898(param_2,param_2[4],(int)param_2[5]);
      if ((int)plVar8 != 0) {
        return;
      }
      lVar13 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x28);
      uVar9 = param_2[4];
      goto LAB_100b57554;
    }
    pbVar16 = pbVar15 + 1;
    *param_2 = (long)pbVar16;
    bVar5 = true;
    if ((int)(char)pbVar15[1] - 0x3aU < 0xfffffff6) {
      return;
    }
    iVar7 = -1;
  }
  if (pbVar10 <= pbVar16) {
    return;
  }
  lVar13 = 0;
  lVar12 = 0;
  uVar9 = 0;
  while( true ) {
    uVar2 = (int)(char)pbVar16[lVar13] - 0x30;
    if ((0x1999999999999999 < uVar9 || 9 < uVar2) ||
       (uVar9 = uVar9 * 10, CARRY8(uVar9,(ulong)uVar2))) break;
    uVar9 = uVar9 + uVar2;
    *param_2 = (long)(pbVar16 + lVar13 + 1);
    lVar12 = lVar12 + 0x100000000;
    lVar13 = lVar13 + 1;
    if ((long)pbVar10 - (long)pbVar16 == lVar13) {
      return;
    }
  }
  uVar3 = pbVar16[lVar13] - 0x2b;
  if ((0x3a < uVar3 || (1L << ((ulong)uVar3 & 0x3f) & 0x400000004007fedU) == 0) && 9 < uVar2) {
    bVar4 = false;
    if (uVar9 < 0x8000000000000001) {
      bVar4 = bVar5;
    }
    if ((-1 < (long)uVar9) || (bVar4)) {
      uVar9 = uVar9 * (long)iVar7;
      lVar13 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x10);
      goto LAB_100b57554;
    }
  }
  if ((uVar3 < 0x3b && (1L << ((ulong)uVar3 & 0x3f) & 0x400000004007fedU) != 0) ||
     (!(bool)(9 < uVar2 & (bVar5 ^ 1U)))) {
    if (pbVar10 <= pbVar16 + lVar13) {
      return;
    }
    do {
      if (0x3a < pbVar16[lVar13] - 0x2b ||
          (1L << ((ulong)(pbVar16[lVar13] - 0x2b) & 0x3f) & 0x400000004007fedU) == 0) {
        if ((int)param_2[5] <= (int)lVar13) {
          return;
        }
        _strncpy((char *)param_2[4],(char *)pbVar16,lVar12 >> 0x20);
        *(undefined1 *)(param_2[4] + (lVar12 >> 0x20)) = 0;
        dVar17 = _strtod((char *)param_2[4],(char **)0x0);
                    /* WARNING: Could not recover jumptable at 0x000100b575c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[6] + 8))(dVar17 * (double)iVar7,param_1,param_2[7]);
        return;
      }
      *param_2 = (long)(pbVar16 + lVar13 + 1);
      lVar12 = lVar12 + 0x100000000;
      lVar13 = lVar13 + 1;
    } while ((long)pbVar10 - (long)pbVar16 != lVar13);
    return;
  }
  lVar13 = param_2[7];
  UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x18);
LAB_100b57554:
                    /* WARNING: Could not recover jumptable at 0x000100b57568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar9,lVar13);
  return;
}



/* Address: 0x100b575fc | FUN_100b575fc */

void FUN_100b575fc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b56ef0(param_1,param_2,param_2);
  FUN_100bf2e7c();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b57628 | FUN_100b57628 */

void FUN_100b57628(void)

{
  FUN_100b56ef0();
  FUN_100bf2ecc();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b57650 | FUN_100b57650 */

void FUN_100b57650(undefined8 param_1,undefined8 param_2)

{
  FUN_100b56ef0(param_1,param_2,param_2);
  FUN_100bf307c();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b5767c | FUN_100b5767c */

void FUN_100b5767c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b56ef0(param_1,param_2,param_2);
  FUN_100bf3104();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b576a8 | FUN_100b576a8 */

void FUN_100b576a8(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  param_2 = (undefined8 *)*param_2;
  puVar1 = param_2;
  FUN_100bf2d64(param_2,param_1);
  if ((int)puVar1 == 0) {
    FUN_100b56f18(*param_2,"null");
  }
  FUN_100b56e50();
  FUN_100b56e60();
  return;
}



/* Address: 0x100b576f0 | FUN_100b576f0 */

void FUN_100b576f0(undefined8 param_1,char *param_2,undefined8 *param_3)

{
  size_t sVar1;
  undefined8 uVar2;
  
  uVar2 = *param_3;
  sVar1 = _strlen(param_2);
  FUN_100bf318c(uVar2,param_1,param_2,sVar1);
  FUN_100b56e50();
  FUN_100b56e60(param_2);
  return;
}



/* Address: 0x100b5773c | FUN_100b5773c */

void FUN_100b5773c(void)

{
  FUN_100b56ef0();
  FUN_100bf333c();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b57764 | FUN_100b57764 */

void FUN_100b57764(void)

{
  FUN_100b56ef0();
  FUN_100bf32d4();
  FUN_100b56e50();
  FUN_100b56e88();
  return;
}



/* Address: 0x100b5778c | FUN_100b5778c */

void FUN_100b5778c(long param_1)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined **ppuVar6;
  int extraout_w8;
  int iVar7;
  
  if ((*(byte *)(param_1 + 0x24) & 1) == 0) {
    pvVar2 = *(void **)(param_1 + 0x10);
    pvVar1 = (void *)**(undefined8 **)(param_1 + 8);
    iVar7 = (int)(*(undefined8 **)(param_1 + 8))[1];
    iVar4 = iVar7 - (int)pvVar2;
    iVar7 = iVar7 - (int)pvVar1;
    if (iVar7 < iVar4 / 2) {
      iVar4 = iVar4 - iVar7;
      _memcpy(pvVar2,pvVar1,(long)iVar7);
      **(undefined8 **)(param_1 + 8) = pvVar2;
      iVar3 = *(int *)(param_1 + 0x20);
      _read(iVar3,(long)pvVar2 + (long)iVar7,iVar4);
      if (iVar3 < iVar4) {
        if (iVar3 < 0) {
          piVar5 = ___error();
          ppuVar6 = &PTR___tlv_bootstrap_101049358;
          (*(code *)PTR___tlv_bootstrap_101049358)(*piVar5);
          iVar4 = _strerror_r(extraout_w8,(char *)ppuVar6,0x400);
          if (iVar4 != 0) {
            ___error();
            _snprintf((char *)ppuVar6,0x400,"Unknown error %d");
          }
          FUN_100b5e930("ERROR",
                        "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashJSONCodec.c"
                        ,0x588,"Error reading file %s: %s");
        }
        *(undefined1 *)(param_1 + 0x24) = 1;
      }
    }
  }
  return;
}



/* Address: 0x100b57898 | FUN_100b57898 */

undefined8 FUN_100b57898(long *param_1,byte *param_2,int param_3)

{
  long lVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  undefined8 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  char *pcVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  byte *local_68;
  
  *param_2 = 0;
  pcVar9 = (char *)*param_1;
  if (*pcVar9 != '\"') {
    return 1;
  }
  pbVar7 = (byte *)(pcVar9 + 1);
  if ((byte *)param_1[1] <= pbVar7) {
    return 4;
  }
  lVar12 = 0;
  lVar11 = 1;
  bVar5 = true;
  while (pcVar9[lVar11] != '\"') {
    lVar1 = lVar12 + 2;
    lVar12 = lVar11;
    if (pcVar9[lVar11] == '\\') {
      bVar5 = false;
      lVar12 = lVar1;
    }
    lVar11 = lVar12 + 1;
    if ((byte *)param_1[1] <= pcVar9 + lVar11) {
      return 4;
    }
  }
  iVar13 = (int)lVar11 + -1;
  if (param_3 <= iVar13) {
    return 2;
  }
  *param_1 = (long)(pcVar9 + lVar12 + 2);
  if (bVar5) {
    _memcpy(param_2,pbVar7,(long)iVar13);
    param_2[iVar13] = 0;
    return 0;
  }
  if (1 < lVar11) {
    pbVar2 = (byte *)(pcVar9 + lVar11);
    local_68 = param_2;
    do {
      if (*pbVar7 == 0x5c) {
        pbVar8 = pbVar7 + 1;
        bVar10 = *pbVar8;
        uVar6 = 1;
        switch(bVar10) {
        case 0x6e:
          *local_68 = 10;
          break;
        case 0x6f:
        case 0x70:
        case 0x71:
        case 0x73:
          goto switchD_100b57a24_caseD_6f;
        case 0x72:
          *local_68 = 0xd;
          break;
        case 0x74:
          *local_68 = 9;
          break;
        case 0x75:
          if (pbVar2 < pbVar7 + 6) {
            return 4;
          }
          uVar3 = *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[3] * 4) << 8 |
                  *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[2] * 4) << 0xc |
                  *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[4] * 4) << 4 |
                  *(uint *)(&DAT_100c97d80 + (long)(char)pbVar7[5] * 4);
          if (uVar3 >> 0x10 != 0 || (uVar3 & 0xfc00) == 0xdc00) {
            return 1;
          }
          if ((uVar3 & 0xfc00) == 0xd800) {
            if (pbVar2 < pbVar7 + 0xc) {
              return 4;
            }
            if (pbVar7[6] != 0x5c) {
              return 1;
            }
            if (pbVar7[7] != 0x75) {
              return 1;
            }
            uVar4 = *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[9] * 4) << 8 |
                    *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[8] * 4) << 0xc |
                    *(int *)(&DAT_100c97d80 + (long)(char)pbVar7[10] * 4) << 4 |
                    *(uint *)(&DAT_100c97d80 + (long)(char)pbVar7[0xb] * 4);
            if (uVar4 >> 10 != 0x37) {
              return 1;
            }
            uVar3 = uVar4 + uVar3 * 0x400 + 0xfc9f2400;
            lVar11 = 7;
          }
          else {
            lVar11 = 1;
          }
          FUN_100b56df8(uVar3,&local_68);
          pbVar8 = pbVar7 + lVar11 + 4;
          goto LAB_100b579b8;
        default:
          if (bVar10 == 0x66) {
            bVar10 = 0xc;
          }
          else if (bVar10 == 0x2f) {
            bVar10 = 0x2f;
          }
          else if (bVar10 == 0x5c) {
            bVar10 = 0x5c;
          }
          else {
            if (bVar10 != 0x62) {
              if (bVar10 != 0x22) {
                return 1;
              }
              *local_68 = 0x22;
              break;
            }
            bVar10 = 8;
          }
          *local_68 = bVar10;
        }
        local_68 = local_68 + 1;
      }
      else {
        *local_68 = *pbVar7;
        pbVar8 = pbVar7;
        local_68 = local_68 + 1;
      }
LAB_100b579b8:
      pbVar7 = pbVar8 + 1;
      param_2 = local_68;
    } while (pbVar7 < pbVar2);
  }
  uVar6 = 0;
  *param_2 = 0;
switchD_100b57a24_caseD_6f:
  return uVar6;
}



/* Address: 0x100b57bc0 | FUN_100b57bc0 */

void FUN_100b57bc0(uint param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 < 0x800) {
    *(byte *)*param_2 = (byte)(param_1 >> 6) | 0xc0;
    uVar1 = 2;
    lVar2 = 1;
  }
  else if (param_1 >> 0x10 == 0) {
    *(byte *)*param_2 = (byte)(param_1 >> 0xc) | 0xe0;
    *(byte *)(*param_2 + 1) = (byte)(param_1 >> 6) & 0x3f | 0x80;
    uVar1 = 3;
    lVar2 = 2;
  }
  else {
    *(byte *)*param_2 = (byte)(param_1 >> 0x12) | 0xf0;
    *(byte *)(*param_2 + 1) = (byte)(param_1 >> 0xc) & 0x3f | 0x80;
    *(byte *)(*param_2 + 2) = (byte)(param_1 >> 6) & 0x3f | 0x80;
    uVar1 = 4;
    lVar2 = 3;
  }
  *(byte *)(*param_2 + lVar2) = (byte)param_1 & 0x3f | 0x80;
  *param_3 = uVar1;
  return;
}



/* Address: 0x100b57c64 | FUN_100b57c64 */

char * FUN_100b57c64(uint param_1)

{
  if (param_1 < 0x35) {
    return (&PTR_s_Success__100f359b0)[param_1];
  }
  return "Unknown error.";
}



/* Address: 0x100b57c88 | FUN_100b57c88 */

char * FUN_100b57c88(int param_1)

{
  switch(param_1) {
  case 0x10004002:
    return "The specified receive_name was invalid.";
  case 0x10004003:
switchD_100b57cc4_caseD_10000004:
    return "The timeout interval expired.";
  case 0x10004004:
    return 
    "When using MACH_RCV_LARGE, the message was larger than receive_limit. The message is left queued, and its actual size is returned in the message header/message body."
    ;
  case 0x10004005:
switchD_100b57cc4_caseD_10000007:
    return "A software interrupt occurred.";
  case 0x10004006:
    return "receive_name specified a receive right which was moved into a port set during the call."
    ;
  case 0x10004007:
    return "When using MACH_RCV_NOTIFY, the notify argument did not denote a valid receive right.";
  case 0x10004008:
    return "The specified message buffer was not writable.";
  case 0x10004009:
    return "The caller lost the rights specified by receive_name.";
  case 0x1000400a:
    return "The specified port was a member of a port set.";
  case 0x1000400b:
    return "A resource shortage prevented the reception of the port rights in the message header.";
  case 0x1000400c:
    return 
    "A resource shortage prevented the reception of a port right or out-of- line memory region in the message body."
    ;
  case 0x1000400d:
    return 
    "When using MACH_RCV_OVERWRITE, one or more scatter list descriptors did not have the type matching the corresponding incoming message descriptor or had an invalid copy (disposition) field."
    ;
  case 0x1000400e:
    return 
    "When not using MACH_RCV_LARGE with MACH_RCV_OVERWRITE, one or more scatter list descriptors specified an overwrite region smaller than the corresponding incoming region. The message was de-queued and destroyed."
    ;
  case 0x1000400f:
    return 
    "The trailer type desired, or the number of trailer elements desired, is not supported by the kernel."
    ;
  }
  switch(param_1) {
  case 0x10000002:
    return "The supplied message buffer was not readable.";
  case 0x10000003:
    return "The msgh_remote_port value was invalid.";
  case 0x10000004:
    goto switchD_100b57cc4_caseD_10000004;
  case 0x10000007:
    goto switchD_100b57cc4_caseD_10000007;
  case 0x10000008:
    return "The last data item in the message ran over the end of the message.";
  case 0x10000009:
    return "The msgh_local_port value was invalid.";
  case 0x1000000a:
    return "The message body specified a port right which the caller didn\'t possess.";
  case 0x1000000b:
    return "When using MACH_SEND_CANCEL, the notify argument did not denote a valid receive right.";
  case 0x1000000c:
    return "The message body specified out-of-line data that was not readable.";
  case 0x1000000d:
    return "A resource shortage prevented the kernel from allocating a message buffer.";
  case 0x1000000f:
    return "A kernel processed descriptor was invalid.";
  case 0x10000010:
    return "The msgh_bits value was invalid.";
  case 0x10000011:
    return 
    "The trailer to be sent does not correspond to the current kernel format, or the sending task does not have the privilege to supply the message attributes."
    ;
  default:
    if (param_1 == 0) {
      return "Success.";
    }
  case 0x10000005:
  case 0x10000006:
  case 0x1000000e:
    return "Unknown error.";
  }
}



/* Address: 0x100b57e28 | SentryEventSwiftHelper::setEventIdString:event: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryEventSwiftHelper::setEventIdString_event_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  class_t *self;
  
  self = &objc::class_t::SentryId;
  _objc_alloc();
  IVar1 = objc_stub::FUN_100c05120((ID)self,param_3);
  objc_stub::FUN_100c0b9c0(param_4,IVar1);
  return;
}



/* Address: 0x100b57ea0 | SentryEventSwiftHelper::getEventIdString: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryEventSwiftHelper::getEventIdString_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c01f00(param_3);
  IVar1 = objc_stub::FUN_100c0a000(IVar1);
  return IVar1;
}



/* Address: 0x100b57ee8 | SentryAttachment::initWithData:filename: */

/* Function Stack Size: 0x20 bytes */

ID SentryAttachment::initWithData_filename_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03ec0(param_1,param_3,param_4,0,0);
  return IVar1;
}



/* Address: 0x100b57ef4 | SentryAttachment::initWithData:filename:contentType: */

/* Function Stack Size: 0x28 bytes */

ID SentryAttachment::initWithData_filename_contentType_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c03ec0(param_1);
  return IVar1;
}



/* Address: 0x100b57efc | SentryAttachment::initWithData:filename:contentType:attachmentType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryAttachment::initWithData_filename_contentType_attachmentType_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  ID IVar1;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryAttachment;
  local_60.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_60,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 8) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
    *(ID *)(IVar1 + 0x20) = param_5;
    *(long_long *)(IVar1 + 0x28) = param_6;
  }
  return IVar1;
}



/* Address: 0x100b57fd4 | SentryAttachment::initWithPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryAttachment::initWithPath_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::lastPathComponent(param_3);
  IVar1 = objc_stub::FUN_100c04820(param_1,param_3,IVar1);
  return IVar1;
}



/* Address: 0x100b5803c | SentryAttachment::initWithPath:filename: */

/* Function Stack Size: 0x20 bytes */

ID SentryAttachment::initWithPath_filename_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04840(param_1,param_3,param_4,0);
  return IVar1;
}



/* Address: 0x100b58044 | SentryAttachment::initWithPath:filename:contentType: */

/* Function Stack Size: 0x28 bytes */

ID SentryAttachment::initWithPath_filename_contentType_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c04860(param_1);
  return IVar1;
}



/* Address: 0x100b5804c | SentryAttachment::initWithPath:filename:contentType:attachmentType: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

ID SentryAttachment::initWithPath_filename_contentType_attachmentType_
             (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,long_long param_6)

{
  ID IVar1;
  objc_super local_60;
  
  local_60.super_class = &objc::class_t::SentryAttachment;
  local_60.receiver = param_1;
  IVar1 = _objc_msgSendSuper2(&local_60,"init");
  if (IVar1 != 0) {
    *(ID *)(IVar1 + 0x10) = param_3;
    *(ID *)(IVar1 + 0x18) = param_4;
    *(ID *)(IVar1 + 0x20) = param_5;
    *(long_long *)(IVar1 + 0x28) = param_6;
  }
  return IVar1;
}



/* Address: 0x100b58124 | SentryAttachment::data */

/* Function Stack Size: 0x10 bytes */

ID SentryAttachment::data(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 8);
}



/* Address: 0x100b5812c | SentryAttachment::path */

/* Function Stack Size: 0x10 bytes */

ID SentryAttachment::path(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x10);
}



/* Address: 0x100b58134 | SentryAttachment::filename */

/* Function Stack Size: 0x10 bytes */

ID SentryAttachment::filename(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x18);
}



/* Address: 0x100b5813c | SentryAttachment::contentType */

/* Function Stack Size: 0x10 bytes */

ID SentryAttachment::contentType(ID param_1,SEL param_2)

{
  return *(ID *)(param_1 + 0x20);
}



/* Address: 0x100b58144 | SentryAttachment::attachmentType */

/* Function Stack Size: 0x10 bytes */

long_long SentryAttachment::attachmentType(ID param_1,SEL param_2)

{
  return *(long_long *)(param_1 + 0x28);
}



/* Address: 0x100b5814c | SentryAttachment::.cxx_destruct */

/* WARNING: Function: _objc_storeStrong replaced with injection: _objc_store_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryAttachment::_cxx_destruct(ID param_1,SEL param_2)

{
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Address: 0x100b58194 | FUN_100b58194 */

cfstringStruct * FUN_100b58194(long param_1)

{
  cfstringStruct *pcVar1;
  
  pcVar1 = &cf_event_view_hierarchy;
  if (param_1 != 1) {
    pcVar1 = &cf_event_attachment;
  }
  return pcVar1;
}



/* Address: 0x100b581b0 | FUN_100b581b0 */

ulong FUN_100b581b0(ID param_1)

{
  ID IVar1;
  
  IVar1 = objc_stub::isEqualToString_(param_1,&cf_event_view_hierarchy);
  return IVar1 & 0xffffffff;
}



/* Address: 0x100b581d0 | FUN_100b581d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

byte FUN_100b581d0(ID param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  ID IVar4;
  ID IVar5;
  
  iVar3 = 1;
  FUN_100bf158c(1,0xb,3,0);
  if (iVar3 != 0) {
    IVar4 = objc_stub::FUN_100c10d40(param_1);
    IVar4 = objc_stub::firstObject(IVar4);
    if (IVar4 != 0) goto LAB_100b582a0;
  }
  IVar4 = objc_stub::userInfo(param_1);
  IVar4 = objc_stub::FUN_100c112a0(IVar4,*(undefined8 *)PTR__NSUnderlyingErrorKey_100ea7c80);
  if (IVar4 != 0) {
    IVar5 = objc_stub::class((ID)&_OBJC_CLASS___NSError);
    IVar5 = objc_stub::isKindOfClass_(IVar4,IVar5);
    if ((IVar5 & 1) != 0) goto LAB_100b582a0;
  }
  IVar4 = param_1;
LAB_100b582a0:
  IVar5 = objc_stub::domain(IVar4);
  if (IVar5 == *(ID *)PTR__NSPOSIXErrorDomain_100ea7c28) {
    IVar5 = objc_stub::code(IVar4);
    bVar1 = IVar5 == 0x3f;
  }
  else {
    bVar1 = false;
  }
  IVar5 = objc_stub::domain(IVar4);
  if (IVar5 == *(ID *)PTR__NSCocoaErrorDomain_100ea7b88) {
    IVar4 = objc_stub::code(IVar4);
    bVar2 = IVar4 == 0x200;
  }
  else {
    bVar2 = false;
  }
  return bVar1 | bVar2;
}



/* Address: 0x100b5835c | FUN_100b5835c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */

ID FUN_100b5835c(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar2 = objc_stub::createDirectoryAtPath_withIntermediateDirectories_attributes_error_
                    (IVar2,param_1,1,0,param_2);
  if ((IVar2 & 1) == 0) {
    iVar1 = (int)*param_2;
    FUN_100b581d0();
    if ((iVar1 != 0) && (FUN_100b3a200(), iVar1 != 0)) {
      FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x38,&cf_Failedtocreatedirectory_pathistoolong___);
    }
    IVar3 = objc_stub::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_Failedtocreatethedirectoryatpath___);
    uVar4 = 0x6c;
    FUN_100b1e10c(0x6c,IVar3,*param_2);
    *param_2 = uVar4;
  }
  return IVar2;
}



/* Address: 0x100b58454 | FUN_100b58454 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b58454(undefined8 param_1)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  ID local_38;
  
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_38 = 0;
  IVar3 = objc_stub::removeItemAtPath_error_(IVar2,param_1,&local_38);
  IVar2 = local_38;
  if ((int)IVar3 == 0) {
    IVar3 = objc_stub::code(local_38);
    if (IVar3 != 4) {
      if (IVar2 != 0) {
        FUN_100b581d0();
        iVar1 = (int)IVar2;
        IVar3 = IVar2;
        if (iVar1 != 0) {
          FUN_100b3a200();
          if (iVar1 == 0) {
            return 0;
          }
          FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                        ,0x4e,&cf_Failedtoremovefile_pathistoolong___);
          return 0;
        }
      }
      iVar1 = (int)IVar3;
      FUN_100b3a1f0();
      if (iVar1 == 0) {
        return 0;
      }
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x50,&cf_Erroroccurredwhiledeletingfileat__becauseof__);
      return 0;
    }
    FUN_100b3a1c0();
    if ((int)IVar3 == 0) {
      return 0;
    }
    pcVar5 = &cf_Nofiletodeleteat__;
    uVar4 = 0x4c;
  }
  else {
    FUN_100b3a1c0();
    if ((int)IVar2 == 0) {
      return 0;
    }
    pcVar5 = &cf_Successfullydeletedfileat__;
    uVar4 = 0x4a;
  }
  FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                ,uVar4,pcVar5);
  return 0;
}



/* Address: 0x100b58590 | SentryFileManagerHelper::initWithPlaceholder:error: */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryFileManagerHelper::initWithPlaceholder_error_
             (ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  ID IVar1;
  
  IVar1 = objc_stub::options((ID)&objc::class_t::SentrySDKInternal);
  IVar1 = objc_stub::FUN_100c047a0(param_1,IVar1,param_4);
  return IVar1;
}



/* Address: 0x100b585f0 | SentryFileManagerHelper::initWithOptions:error: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryFileManagerHelper::initWithOptions_error_(ID param_1,SEL param_2,ID param_3,ID *param_4)

{
  int iVar1;
  ID self;
  ID IVar2;
  ulong uVar3;
  undefined8 uVar4;
  cfstringStruct *pcVar5;
  objc_super local_50;
  
  local_50.super_class = &objc::class_t::SentryFileManagerHelper;
  local_50.receiver = param_1;
  self = _objc_msgSendSuper2(&local_50,"init");
  if (self == 0) {
    return 0;
  }
  objc_stub::FUN_100c00500(self,param_3);
  IVar2 = objc_stub::FUN_100c0a040(self);
  IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,&cf_events);
  objc_stub::FUN_100c0b9e0(self,IVar2);
  IVar2 = objc_stub::FUN_100c01f40(self);
  objc_stub::FUN_100c08fc0(self,IVar2);
  uVar3 = objc_stub::FUN_100c0a040(self);
  FUN_100b5835c(uVar3,param_4);
  iVar1 = 0;
  if ((uVar3 & 1) == 0) {
    FUN_100b3a200();
    if (iVar1 == 0) {
      return 0;
    }
    objc_stub::FUN_100c0a040(self);
    pcVar5 = &cf_FailedtocreateSentrySDKworkingdirectory___;
    uVar4 = 0x7c;
  }
  else {
    uVar3 = objc_stub::FUN_100c01da0(self);
    FUN_100b5835c(uVar3,param_4);
    iVar1 = 0;
    if ((uVar3 & 1) != 0) {
      objc_stub::FUN_100c0b2c0(self,0);
      IVar2 = objc_stub::FUN_100c06a80(param_3);
      objc_stub::FUN_100c0c8e0(self,IVar2);
      return self;
    }
    FUN_100b3a200();
    if (iVar1 == 0) {
      return 0;
    }
    objc_stub::FUN_100c01da0(self);
    pcVar5 = &cf_FailedtocreateSentrySDKenvelopesdirectory___;
    uVar4 = 0x84;
  }
  FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                ,uVar4,pcVar5);
  return 0;
}



/* Address: 0x100b587ec | SentryFileManagerHelper::createPathsWithOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::createPathsWithOptions_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100bfeb80(param_3);
  IVar3 = IVar2;
  FUN_100b3a1c0();
  if ((int)IVar3 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x93,&cf_SentryFileManager_cachePath___);
  }
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar2,&cf_io_sentry);
  objc_stub::FUN_100c0aa80(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c07a60(param_3);
  IVar3 = objc_stub::FUN_100c02e60(IVar3);
  iVar1 = 0;
  if ((IVar3 == 0) && (FUN_100b3a200(), iVar1 != 0)) {
    objc_stub::basePath(param_1);
    FUN_100b3a2f0("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x9a,&cf_NoDSNprovided_usingbasepathforenvelopes___);
  }
  IVar2 = objc_stub::basePath(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar2,IVar3);
  objc_stub::FUN_100c0d960(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_session_current);
  objc_stub::FUN_100c0b320(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_session_crashed);
  objc_stub::FUN_100c0b220(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_session_abnormal);
  objc_stub::FUN_100c0a360(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_lastInForeground_timestamp);
  objc_stub::FUN_100c0c600(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_previous_app_state);
  objc_stub::FUN_100c0d220(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_app_state);
  objc_stub::FUN_100c0a6c0(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_previous_breadcrumbs_1_state);
  objc_stub::FUN_100c0d240(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_previous_breadcrumbs_2_state);
  objc_stub::FUN_100c0d260(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_breadcrumbs_1_state);
  objc_stub::FUN_100c0ac40(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_breadcrumbs_2_state);
  objc_stub::FUN_100c0ac60(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_timezone_offset);
  objc_stub::FUN_100c0e300(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_app_hang_event_json);
  objc_stub::FUN_100c0a6a0(param_1,IVar3);
  IVar3 = objc_stub::FUN_100c0a040(param_1);
  IVar3 = objc_stub::stringByAppendingPathComponent_(IVar3,&cf_envelopes);
  objc_stub::FUN_100c0b8e0(param_1,IVar3);
  return;
}



/* Address: 0x100b58d04 | SentryFileManagerHelper::getSentryPathAsURL */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::getSentryPathAsURL(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c0a040(param_1);
  IVar1 = objc_stub::fileURLWithPath_((ID)&_OBJC_CLASS___NSURL,IVar1);
  return IVar1;
}



/* Address: 0x100b58d58 | SentryFileManagerHelper::storeEnvelopeData:currentTime: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryFileManagerHelper::storeEnvelopeData_currentTime_
             (ID param_1,SEL param_2,ID param_3,double param_4)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c01da0(param_1);
  IVar3 = objc_stub::FUN_100c10da0(param_1,param_4);
  IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,IVar3);
  iVar1 = 0;
  FUN_100b3a1c0();
  if (iVar1 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0xd2,&cf_Writingenvelopetopath___);
  }
  IVar3 = objc_stub::FUN_100c115e0(param_1,param_3,IVar2);
  iVar1 = (int)IVar3;
  if ((IVar3 & 1) == 0) {
    FUN_100b3a1e0();
    if (iVar1 != 0) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0xd5,&cf_Failedtostoreenvelope_);
    }
    IVar2 = 0;
  }
  else {
    IVar3 = objc_stub::FUN_100c031c0(param_1);
    (**(code **)(IVar3 + 0x10))();
  }
  _objc_sync_exit(param_1);
  return IVar2;
}



/* Address: 0x100b58ed0 | SentryFileManagerHelper::getEnvelopesPath: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryFileManagerHelper::getEnvelopesPath_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  long local_48;
  
  IVar2 = objc_stub::basePath(param_1);
  IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,param_3);
  IVar3 = objc_stub::FUN_100c03380(IVar2,&cf__DS_Store);
  iVar1 = (int)IVar3;
  if (iVar1 == 0) {
    IVar3 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    local_48 = 0;
    IVar3 = objc_stub::attributesOfItemAtPath_error_(IVar3,IVar2,&local_48);
    iVar1 = 0;
    if (local_48 == 0) {
      IVar3 = objc_stub::objectForKeyedSubscript_(IVar3,*(undefined8 *)PTR__NSFileType_100ea7bd0);
      iVar1 = 0;
      if (IVar3 == *(ID *)PTR__NSFileTypeDirectory_100ea7bd8) {
        IVar3 = objc_stub::FUN_100c03380(IVar2,&cf_envelopes);
        if ((int)IVar3 == 0) {
          IVar2 = objc_stub::stringByAppendingPathComponent_(IVar2,&cf_envelopes);
          return IVar2;
        }
        return IVar2;
      }
      FUN_100b3a1c0();
      if (iVar1 != 0) {
        FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0xf3,&cf_Ignoringnondirectorywhendeletingoldenvelopesatpath___);
      }
    }
    else {
      FUN_100b3a1e0();
      if (iVar1 != 0) {
        FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                      ,0xed,&cf_Couldnotgetattributesofitematpath____Error___);
      }
    }
  }
  else {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0xe4,&cf_Ignoring_DS_Storefilewhenbuildingenvelopespathatpath___);
    }
  }
  return 0;
}



/* Address: 0x100b590b8 | SentryFileManagerHelper::pathsOfAllEnvelopes */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::pathsOfAllEnvelopes(ID param_1,SEL param_2)

{
  ID IVar1;
  
  _objc_sync_enter();
  IVar1 = objc_stub::FUN_100c01da0(param_1);
  IVar1 = objc_stub::FUN_100bfda20(param_1,IVar1);
  _objc_sync_exit(param_1);
  return IVar1;
}



/* Address: 0x100b59140 | SentryFileManagerHelper::deleteAllEnvelopes */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteAllEnvelopes(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ulong uVar3;
  undefined8 local_28;
  
  IVar2 = objc_stub::FUN_100c01da0(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar2);
  uVar3 = objc_stub::FUN_100c01da0(param_1);
  local_28 = 0;
  FUN_100b5835c(uVar3,&local_28);
  iVar1 = 0;
  if (((uVar3 & 1) == 0) && (FUN_100b3a1f0(), iVar1 != 0)) {
    FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x111,&cf_Couldn_tcreateenvelopespath_);
  }
  return;
}



/* Address: 0x100b591d8 | SentryFileManagerHelper::storeCurrentSessionData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeCurrentSessionData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c007c0(param_1);
  objc_stub::FUN_100c0f860(param_1,param_3,IVar1);
  return;
}



/* Address: 0x100b59238 | SentryFileManagerHelper::readCurrentSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readCurrentSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c007c0(param_1);
  IVar1 = objc_stub::FUN_100c088c0(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b59288 | SentryFileManagerHelper::deleteCurrentSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteCurrentSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c007c0(param_1);
  objc_stub::FUN_100c00fe0(param_1,IVar1);
  return;
}



/* Address: 0x100b592c4 | SentryFileManagerHelper::storeCrashedSessionData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeCrashedSessionData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c003c0(param_1);
  objc_stub::FUN_100c0f860(param_1,param_3,IVar1);
  return;
}



/* Address: 0x100b59324 | SentryFileManagerHelper::readCrashedSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readCrashedSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c003c0(param_1);
  IVar1 = objc_stub::FUN_100c088c0(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b59374 | SentryFileManagerHelper::deleteCrashedSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteCrashedSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100c003c0(param_1);
  objc_stub::FUN_100c00fe0(param_1,IVar1);
  return;
}



/* Address: 0x100b593b0 | SentryFileManagerHelper::storeAbnormalSessionData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeAbnormalSessionData_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfd160(param_1);
  objc_stub::FUN_100c0f860(param_1,param_3,IVar1);
  return;
}



/* Address: 0x100b59410 | SentryFileManagerHelper::readAbnormalSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readAbnormalSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfd160(param_1);
  IVar1 = objc_stub::FUN_100c088c0(param_1,IVar1);
  return IVar1;
}



/* Address: 0x100b59460 | SentryFileManagerHelper::deleteAbnormalSession */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteAbnormalSession(ID param_1,SEL param_2)

{
  ID IVar1;
  
  IVar1 = objc_stub::FUN_100bfd160(param_1);
  objc_stub::FUN_100c00fe0(param_1,IVar1);
  return;
}



/* Address: 0x100b5949c | SentryFileManagerHelper::storeTimestampLastInForeground: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeTimestampLastInForeground_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  
  FUN_100b40420();
  IVar2 = param_3;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x149,&cf_PersistinglastInForeground___);
  }
  IVar2 = objc_stub::FUN_100c06060(param_1);
  _objc_sync_enter();
  IVar3 = objc_stub::dataUsingEncoding_(param_3,4);
  if (IVar3 == 0) {
    FUN_100b3a1f0();
    if ((int)IVar3 != 0) {
      FUN_100b3a2b8("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x14d,&cf_FailedtoconvertlastInForegroundtimestamptodata_);
    }
  }
  else {
    IVar4 = objc_stub::FUN_100c06060(param_1);
    IVar3 = objc_stub::FUN_100c115e0(param_1,IVar3,IVar4);
    iVar1 = 0;
    if (((IVar3 & 1) == 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
      FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x152,&cf_Failedtostoretimestampoflastforegroundevent_);
    }
  }
  _objc_sync_exit(IVar2);
  return;
}



/* Address: 0x100b595f4 | SentryFileManagerHelper::deleteTimestampLastInForeground */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::deleteTimestampLastInForeground(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar1 != 0) {
    objc_stub::FUN_100c06060(param_1);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x159,&cf_DeletingLastInForegroundat___);
  }
  IVar1 = objc_stub::FUN_100c06060(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c06060(param_1);
  objc_stub::FUN_100c08fc0(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b596c0 | SentryFileManagerHelper::readTimestampLastInForeground */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readTimestampLastInForeground(ID param_1,SEL param_2)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  ID IVar4;
  undefined *self;
  
  IVar2 = param_1;
  FUN_100b3a1c0();
  if ((int)IVar2 != 0) {
    objc_stub::FUN_100c06060(param_1);
    FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x162,&cf_Readingtimestampoflastinforegroundat___);
  }
  IVar2 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = objc_stub::FUN_100c06060(param_1);
  _objc_sync_enter();
  IVar4 = objc_stub::FUN_100c06060(param_1);
  IVar2 = objc_stub::FUN_100bffdc0(IVar2,IVar4);
  _objc_sync_exit(IVar3);
  iVar1 = 0;
  if (IVar2 == 0) {
    FUN_100b3a1c0();
    if (iVar1 != 0) {
      FUN_100b3a210("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                    ,0x169,&cf_NolastInForegroundfound_);
    }
    IVar2 = 0;
  }
  else {
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar2 = objc_stub::initWithData_encoding_((ID)self,IVar2,4);
    FUN_100b40378();
  }
  return IVar2;
}



/* Address: 0x100b59828 | SentryFileManagerHelper::storeAppStateData: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryFileManagerHelper::storeAppStateData_(ID param_1,SEL param_2,ID param_3)

{
  int iVar1;
  ID IVar2;
  ID IVar3;
  
  IVar2 = objc_stub::FUN_100bfdca0(param_1);
  _objc_sync_enter();
  IVar3 = objc_stub::FUN_100bfdca0(param_1);
  IVar3 = objc_stub::FUN_100c115e0(param_1,param_3,IVar3);
  iVar1 = 0;
  if (((IVar3 & 1) == 0) && (FUN_100b3a1e0(), iVar1 != 0)) {
    FUN_100b3a280("/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/Sentry/SentryFileManagerHelper.m"
                  ,0x177,&cf_Failedtostoreappstate_);
  }
  _objc_sync_exit(IVar2);
  return;
}



/* Address: 0x100b598ec | SentryFileManagerHelper::moveAppStateToPreviousAppState */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void SentryFileManagerHelper::moveAppStateToPreviousAppState(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  ID IVar3;
  
  IVar1 = objc_stub::FUN_100bfdca0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bfdca0(param_1);
  IVar3 = objc_stub::FUN_100c080a0(param_1);
  objc_stub::FUN_100c06fc0(param_1,IVar2,IVar3);
  _objc_sync_exit(IVar1);
  return;
}



/* Address: 0x100b5998c | SentryFileManagerHelper::readAppStateData */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readAppStateData(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100bfdca0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100bfdca0(param_1);
  IVar2 = objc_stub::FUN_100c08840(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return IVar2;
}



/* Address: 0x100b59a20 | SentryFileManagerHelper::readPreviousAppState */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryFileManagerHelper::readPreviousAppState(ID param_1,SEL param_2)

{
  ID IVar1;
  ID IVar2;
  
  IVar1 = objc_stub::FUN_100c080a0(param_1);
  _objc_sync_enter();
  IVar2 = objc_stub::FUN_100c080a0(param_1);
  IVar2 = objc_stub::FUN_100c08840(param_1,IVar2);
  _objc_sync_exit(IVar1);
  return IVar2;
}


