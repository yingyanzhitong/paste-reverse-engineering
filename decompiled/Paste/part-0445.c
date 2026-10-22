/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100566d04 | FUN_100566d04 */

undefined1  [16] FUN_100566d04(void)

{
  return ZEXT816(0x100edfa80);
}



/* Address: 0x100566d14 | FUN_100566d14 */

undefined1  [16] FUN_100566d14(void)

{
  return ZEXT816(0x100edfb28);
}



/* Address: 0x100566d24 | thunk_FUN_100428918 */

int thunk_FUN_100428918(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf5 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 10) {
      iVar2 = 4;
    }
    if (param_2 + 10 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100428994;
        goto LAB_100428978;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100428978:
      return ((uint)*param_1 | uVar1 << 8) - 10;
    }
  }
LAB_100428994:
  iVar2 = *param_1 - 0xb;
  if (*param_1 < 0xb) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100566d28 | thunk_FUN_1004289a8 */

void thunk_FUN_1004289a8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 10) {
    uVar3 = 4;
  }
  if (param_3 + 10 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf5 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf6) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100428a28;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_100428a28:
      *param_1 = (char)param_2 + '\n';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf6 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf6);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x100566d2c | FUN_100566d2c */

undefined1  [16] FUN_100566d2c(void)

{
  return ZEXT816(0x100edfbb8);
}



/* Address: 0x100566d3c | FUN_100566d3c */

undefined1  [16] FUN_100566d3c(void)

{
  return ZEXT816(0x100edfc48);
}



/* Address: 0x100566d4c | FUN_100566d4c */

undefined1  [16] FUN_100566d4c(void)

{
  return ZEXT816(0x100edfcd8);
}



/* Address: 0x100566d5c | FUN_100566d5c */

undefined1  [16] FUN_100566d5c(void)

{
  return ZEXT816(0x100edfd68);
}



/* Address: 0x100566d6c | FUN_100566d6c */

undefined1  [16] FUN_100566d6c(void)

{
  return ZEXT816(0x100edfdf8);
}



/* Address: 0x100566d7c | FUN_100566d7c */

undefined1  [16] FUN_100566d7c(void)

{
  return ZEXT816(0x100edfe88);
}



/* Address: 0x100566d8c | FUN_100566d8c */

undefined1  [16] FUN_100566d8c(void)

{
  return ZEXT816(0x100edff18);
}



/* Address: 0x100566d9c | FUN_100566d9c */

undefined1  [16] FUN_100566d9c(void)

{
  return ZEXT816(0x100edffa8);
}



/* Address: 0x100566dac | FUN_100566dac */

undefined1  [16] FUN_100566dac(void)

{
  return ZEXT816(0x100ee0038);
}



/* Address: 0x100566dbc | thunk_FUN_100566dc0 */

void thunk_FUN_100566dc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c597a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c597a4,&DAT_100ee0038);
  DAT_100fcfd18 = pTVar1;
  return;
}



/* Address: 0x100566dc0 | FUN_100566dc0 */

void FUN_100566dc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c597a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c597a4,&DAT_100ee0038);
  DAT_100fcfd18 = pTVar1;
  return;
}



/* Address: 0x100566e00 | thunk_FUN_100566e04 */

void thunk_FUN_100566e04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5985c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5985c,&DAT_100edffa8);
  DAT_100fcfd20 = pTVar1;
  return;
}



/* Address: 0x100566e04 | FUN_100566e04 */

void FUN_100566e04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5985c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5985c,&DAT_100edffa8);
  DAT_100fcfd20 = pTVar1;
  return;
}



/* Address: 0x100566e44 | thunk_FUN_100566e48 */

void thunk_FUN_100566e48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59914;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59914,&DAT_100edff18);
  DAT_100fcfd28 = pTVar1;
  return;
}



/* Address: 0x100566e48 | FUN_100566e48 */

void FUN_100566e48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59914;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59914,&DAT_100edff18);
  DAT_100fcfd28 = pTVar1;
  return;
}



/* Address: 0x100566e88 | thunk_FUN_100566e8c */

void thunk_FUN_100566e8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c599cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c599cc,&DAT_100edfe88);
  DAT_100fcfd30 = pTVar1;
  return;
}



/* Address: 0x100566e8c | FUN_100566e8c */

void FUN_100566e8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd30 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c599cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c599cc,&DAT_100edfe88);
  DAT_100fcfd30 = pTVar1;
  return;
}



/* Address: 0x100566ecc | thunk_FUN_100566ed0 */

void thunk_FUN_100566ed0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59abc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59abc,&DAT_100edfdf8);
  DAT_100fcfd38 = pTVar1;
  return;
}



/* Address: 0x100566ed0 | FUN_100566ed0 */

void FUN_100566ed0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59abc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59abc,&DAT_100edfdf8);
  DAT_100fcfd38 = pTVar1;
  return;
}



/* Address: 0x100566f10 | thunk_FUN_100566f14 */

void thunk_FUN_100566f14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bac,&DAT_100edfd68);
  DAT_100fcfd40 = pTVar1;
  return;
}



/* Address: 0x100566f14 | FUN_100566f14 */

void FUN_100566f14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bac,&DAT_100edfd68);
  DAT_100fcfd40 = pTVar1;
  return;
}



/* Address: 0x100566f54 | thunk_FUN_100566f58 */

void thunk_FUN_100566f58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59c9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59c9c,&DAT_100edfcd8);
  DAT_100fcfd48 = pTVar1;
  return;
}



/* Address: 0x100566f58 | FUN_100566f58 */

void FUN_100566f58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59c9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59c9c,&DAT_100edfcd8);
  DAT_100fcfd48 = pTVar1;
  return;
}



/* Address: 0x100566f98 | thunk_FUN_100566f9c */

void thunk_FUN_100566f9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59d8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59d8c,&DAT_100edfc48);
  DAT_100fcfd50 = pTVar1;
  return;
}



/* Address: 0x100566f9c | FUN_100566f9c */

void FUN_100566f9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59d8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59d8c,&DAT_100edfc48);
  DAT_100fcfd50 = pTVar1;
  return;
}



/* Address: 0x100566fdc | thunk_FUN_100566fe0 */

void thunk_FUN_100566fe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e44,&DAT_100edfbb8);
  DAT_100fcfd58 = pTVar1;
  return;
}



/* Address: 0x100566fe0 | FUN_100566fe0 */

void FUN_100566fe0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e44;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e44,&DAT_100edfbb8);
  DAT_100fcfd58 = pTVar1;
  return;
}



/* Address: 0x100567020 | FUN_100567020 */

void FUN_100567020(void)

{
  FUN_100134584(&DAT_100fcfd60,&DAT_100fcfd68,&DAT_100c59ec0,
                PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548);
  return;
}



/* Address: 0x100567054 | thunk_FUN_100567058 */

void thunk_FUN_100567058(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59f78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59f78,&DAT_100edfb28);
  DAT_100fcfd70 = pTVar1;
  return;
}



/* Address: 0x100567058 | FUN_100567058 */

void FUN_100567058(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59f78;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59f78,&DAT_100edfb28);
  DAT_100fcfd70 = pTVar1;
  return;
}



/* Address: 0x100567098 | thunk_FUN_10056709c */

void thunk_FUN_10056709c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e94,&DAT_100edfb28);
  DAT_100fcfd78 = pTVar1;
  return;
}



/* Address: 0x10056709c | FUN_10056709c */

void FUN_10056709c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e94,&DAT_100edfb28);
  DAT_100fcfd78 = pTVar1;
  return;
}



/* Address: 0x1005670dc | thunk_FUN_1005670e0 */

void thunk_FUN_1005670e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e6c,&DAT_100edfb28);
  DAT_100fcfd80 = pTVar1;
  return;
}



/* Address: 0x1005670e0 | FUN_1005670e0 */

void FUN_1005670e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59e6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59e6c,&DAT_100edfb28);
  DAT_100fcfd80 = pTVar1;
  return;
}



/* Address: 0x100567120 | thunk_FUN_100567124 */

void thunk_FUN_100567124(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59ddc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59ddc,&DAT_100edfbb8);
  DAT_100fcfd88 = pTVar1;
  return;
}



/* Address: 0x100567124 | FUN_100567124 */

void FUN_100567124(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59ddc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59ddc,&DAT_100edfbb8);
  DAT_100fcfd88 = pTVar1;
  return;
}



/* Address: 0x100567164 | thunk_FUN_100567168 */

void thunk_FUN_100567168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59db4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59db4,&DAT_100edfbb8);
  DAT_100fcfd90 = pTVar1;
  return;
}



/* Address: 0x100567168 | FUN_100567168 */

void FUN_100567168(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59db4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59db4,&DAT_100edfbb8);
  DAT_100fcfd90 = pTVar1;
  return;
}



/* Address: 0x1005671a8 | thunk_FUN_1005671ac */

void thunk_FUN_1005671ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59cec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59cec,&DAT_100edfc48);
  DAT_100fcfd98 = pTVar1;
  return;
}



/* Address: 0x1005671ac | FUN_1005671ac */

void FUN_1005671ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfd98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59cec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59cec,&DAT_100edfc48);
  DAT_100fcfd98 = pTVar1;
  return;
}



/* Address: 0x1005671ec | thunk_FUN_1005671f0 */

void thunk_FUN_1005671f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfda0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59cc4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59cc4,&DAT_100edfc48);
  DAT_100fcfda0 = pTVar1;
  return;
}



/* Address: 0x1005671f0 | FUN_1005671f0 */

void FUN_1005671f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfda0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59cc4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59cc4,&DAT_100edfc48);
  DAT_100fcfda0 = pTVar1;
  return;
}



/* Address: 0x100567230 | thunk_FUN_100567234 */

void thunk_FUN_100567234(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfda8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bfc,&DAT_100edfcd8);
  DAT_100fcfda8 = pTVar1;
  return;
}



/* Address: 0x100567234 | FUN_100567234 */

void FUN_100567234(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfda8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bfc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bfc,&DAT_100edfcd8);
  DAT_100fcfda8 = pTVar1;
  return;
}



/* Address: 0x100567274 | thunk_FUN_100567278 */

void thunk_FUN_100567278(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bd4,&DAT_100edfcd8);
  DAT_100fcfdb0 = pTVar1;
  return;
}



/* Address: 0x100567278 | FUN_100567278 */

void FUN_100567278(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59bd4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59bd4,&DAT_100edfcd8);
  DAT_100fcfdb0 = pTVar1;
  return;
}



/* Address: 0x1005672b8 | thunk_FUN_1005672bc */

void thunk_FUN_1005672bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59b0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59b0c,&DAT_100edfd68);
  DAT_100fcfdb8 = pTVar1;
  return;
}



/* Address: 0x1005672bc | FUN_1005672bc */

void FUN_1005672bc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59b0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59b0c,&DAT_100edfd68);
  DAT_100fcfdb8 = pTVar1;
  return;
}



/* Address: 0x1005672fc | thunk_FUN_100567300 */

void thunk_FUN_100567300(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59ae4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59ae4,&DAT_100edfd68);
  DAT_100fcfdc0 = pTVar1;
  return;
}



/* Address: 0x100567300 | FUN_100567300 */

void FUN_100567300(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59ae4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59ae4,&DAT_100edfd68);
  DAT_100fcfdc0 = pTVar1;
  return;
}



/* Address: 0x100567340 | thunk_FUN_100567344 */

void thunk_FUN_100567344(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59a1c,&DAT_100edfdf8);
  DAT_100fcfdc8 = pTVar1;
  return;
}



/* Address: 0x100567344 | FUN_100567344 */

void FUN_100567344(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59a1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59a1c,&DAT_100edfdf8);
  DAT_100fcfdc8 = pTVar1;
  return;
}



/* Address: 0x100567384 | thunk_FUN_100567388 */

void thunk_FUN_100567388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c599f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c599f4,&DAT_100edfdf8);
  DAT_100fcfdd0 = pTVar1;
  return;
}



/* Address: 0x100567388 | FUN_100567388 */

void FUN_100567388(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c599f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c599f4,&DAT_100edfdf8);
  DAT_100fcfdd0 = pTVar1;
  return;
}



/* Address: 0x1005673c8 | thunk_FUN_1005673cc */

void thunk_FUN_1005673cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59964;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59964,&DAT_100edfe88);
  DAT_100fcfdd8 = pTVar1;
  return;
}



/* Address: 0x1005673cc | FUN_1005673cc */

void FUN_1005673cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfdd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c59964;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c59964,&DAT_100edfe88);
  DAT_100fcfdd8 = pTVar1;
  return;
}



/* Address: 0x10056740c | thunk_FUN_100567410 */

void thunk_FUN_100567410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfde0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5993c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5993c,&DAT_100edfe88);
  DAT_100fcfde0 = pTVar1;
  return;
}



/* Address: 0x100567410 | FUN_100567410 */

void FUN_100567410(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfde0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5993c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5993c,&DAT_100edfe88);
  DAT_100fcfde0 = pTVar1;
  return;
}



/* Address: 0x100567450 | thunk_FUN_100567454 */

void thunk_FUN_100567454(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfde8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c598ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c598ac,&DAT_100edff18);
  DAT_100fcfde8 = pTVar1;
  return;
}



/* Address: 0x100567454 | FUN_100567454 */

void FUN_100567454(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcfde8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c598ac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c598ac,&DAT_100edff18);
  DAT_100fcfde8 = pTVar1;
  return;
}


