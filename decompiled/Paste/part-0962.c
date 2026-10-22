/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a57660 | FUN_100a57660 */

undefined8 * FUN_100a57660(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar11 = *param_2;
  uVar4 = param_2[1];
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  uVar12 = param_2[4];
  uVar8 = *(undefined2 *)(param_2 + 5);
  FUN_100a57448(uVar11,uVar4,uVar1,uVar5,uVar12,uVar8);
  uVar2 = *param_1;
  uVar6 = param_1[1];
  uVar3 = param_1[2];
  uVar7 = param_1[3];
  uVar10 = param_1[4];
  *param_1 = uVar11;
  param_1[1] = uVar4;
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  param_1[4] = uVar12;
  uVar9 = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)(param_1 + 5) = uVar8;
  FUN_100a57528(uVar2,uVar6,uVar3,uVar7,uVar10,uVar9);
  uVar11 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  uVar11 = param_1[7];
  param_1[7] = param_2[7];
  _swift_retain();
  _swift_release(uVar11);
  return param_1;
}



/* Address: 0x100a5771c | FUN_100a5771c */

undefined8 * FUN_100a5771c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = param_2[4];
  uVar3 = *(undefined2 *)(param_2 + 5);
  uVar5 = *param_1;
  uVar6 = param_1[1];
  uVar1 = param_1[2];
  uVar9 = param_1[3];
  uVar2 = param_1[4];
  uVar8 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar8;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar7;
  uVar4 = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)(param_1 + 5) = uVar3;
  FUN_100a57528(uVar5,uVar6,uVar1,uVar9,uVar2,uVar4);
  _swift_bridgeObjectRelease(param_1[6]);
  uVar6 = param_1[7];
  uVar9 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar9;
  _swift_release(uVar6);
  return param_1;
}



/* Address: 0x100a57784 | FUN_100a57784 */

int FUN_100a57784(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100a577cc | FUN_100a577cc */

void FUN_100a577cc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 8) = 0;
    }
    if (param_2 != 0) {
      param_1[6] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100a5781c | FUN_100a5781c */

undefined1  [16] FUN_100a5781c(void)

{
  return ZEXT816(0x100f2b8a8);
}



/* Address: 0x100a5782c | FUN_100a5782c */

void FUN_100a5782c(void)

{
  FUN_100a55b24();
  return;
}



/* Address: 0x100a57844 | FUN_100a57844 */

void FUN_100a57844(void)

{
  FUN_100a5506c();
  return;
}



/* Address: 0x100a5784c | FUN_100a5784c */

void FUN_100a5784c(void)

{
  CancellationError CVar1;
  undefined *puVar2;
  
  if (DAT_100ff6ba0 != (undefined *)0x0) {
    return;
  }
  CVar1 = Swift::CancellationError::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40;
  _swift_getWitnessTable(PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40,CVar1.unknown);
  DAT_100ff6ba0 = puVar2;
  return;
}



/* Address: 0x100a57890 | FUN_100a57890 */

undefined8 FUN_100a57890(undefined8 param_1,undefined8 param_2)

{
  FUN_100a57ba4(param_2,param_1,&DAT_100f2b960);
  return param_2;
}



/* Address: 0x100a578c4 | FUN_100a578c4 */

undefined8 FUN_100a578c4(undefined8 param_1)

{
  FUN_100a57b50(param_1,&DAT_100f2b960);
  return param_1;
}



/* Address: 0x100a578f0 | FUN_100a578f0 */

/* WARNING: Removing unreachable block (ram,0x000100a57a54) */

undefined * FUN_100a578f0(long param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  FUN_100a54a6c(0);
  _swift_allocObject();
  lVar3 = param_1;
  _swift_retain();
  FUN_100a54c80();
  _swift_retain();
  uVar4 = 4;
  FUN_100a56aa8(4,8,1,lVar3,&DAT_100ff6bc0,&DAT_100c90ec0,&DAT_100ff6bc8,&DAT_100c90ec8);
  puVar5 = &DAT_100ff6bb0;
  FUN_1000f7830(&DAT_100ff6bb0,&DAT_100c90eb0);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x10) = uVar4;
  puVar6 = &DAT_100ff6bb8;
  FUN_1000f7830(&DAT_100ff6bb8,&DAT_100c90eb8);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x10) = uVar4;
  puVar6[0x18] = 0;
  lVar7 = *(long *)(lVar3 + 0x10);
  _swift_retain(uVar4);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar7 + 0x50));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a57a50);
    (*pcVar1)();
  }
  FUN_100a54ddc(lVar7 + 0x10,puVar6);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar7 + 0x50));
  _swift_release(param_1);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a57a54);
    (*pcVar1)();
  }
  _swift_release(puVar6);
  _swift_release(lVar3);
  return puVar5;
}



/* Address: 0x100a57a58 | FUN_100a57a58 */

void FUN_100a57a58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6ba8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c922f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c922f0,&DAT_100f2dfc8);
  DAT_100ff6ba8 = pTVar1;
  return;
}



/* Address: 0x100a57a98 | FUN_100a57a98 */

undefined1 FUN_100a57a98(int param_1)

{
  if (param_1 - 1U < 0xd) {
    return (&DAT_100c90f14)[param_1 - 1U];
  }
  return 0xc;
}



/* Address: 0x100a57abc | FUN_100a57abc */

undefined8 FUN_100a57abc(undefined8 param_1)

{
  FUN_100a5aeb0();
  return param_1;
}



/* Address: 0x100a57af0 | FUN_100a57af0 */

undefined8 FUN_100a57af0(undefined8 param_1,undefined8 param_2)

{
  FUN_100a575cc(param_2,param_1,&DAT_100f2b8a8);
  return param_2;
}



/* Address: 0x100a57b24 | FUN_100a57b24 */

undefined8 FUN_100a57b24(undefined8 param_1)

{
  FUN_100a574ec(param_1,&DAT_100f2b8a8);
  return param_1;
}



/* Address: 0x100a57b50 | FUN_100a57b50 */

void FUN_100a57b50(undefined8 *param_1)

{
  if (*(byte *)(param_1 + 9) < 2) {
    if (*(byte *)(param_1 + 9) == 1) {
      _swift_bridgeObjectRelease(param_1[2]);
      _swift_errorRelease(param_1[3]);
      _swift_bridgeObjectRelease(param_1[5]);
      param_1 = param_1 + 7;
    }
    _swift_bridgeObjectRelease(*param_1);
    return;
  }
  return;
}



/* Address: 0x100a57ba4 | FUN_100a57ba4 */

undefined8 * FUN_100a57ba4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(byte *)(param_2 + 9) < 2) {
    if (*(byte *)(param_2 + 9) == 1) {
      *(undefined1 *)param_1 = *(undefined1 *)param_2;
      param_1[1] = param_2[1];
      uVar1 = param_2[3];
      uVar3 = param_2[3];
      uVar2 = param_2[2];
      _swift_bridgeObjectRetain(uVar2);
      _swift_errorRetain(uVar1);
      param_1[3] = uVar3;
      param_1[2] = uVar2;
      uVar1 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = uVar1;
      uVar1 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = uVar1;
      param_1[8] = param_2[8];
      *(undefined1 *)(param_1 + 9) = 1;
      _swift_bridgeObjectRetain();
    }
    else {
      uVar1 = *param_2;
      *param_1 = uVar1;
      *(undefined1 *)(param_1 + 9) = 0;
    }
    _swift_bridgeObjectRetain(uVar1);
    return param_1;
  }
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  uVar1 = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)((long)param_1 + 0x39) = uVar1;
  uVar3 = *param_2;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x100a57c84 | FUN_100a57c84 */

int * FUN_100a57c84(int *param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  int *piVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  bVar1 = *(byte *)(param_1 + 0x12);
  bVar2 = *(byte *)(param_2 + 0x12);
  if (bVar1 < 2) {
    if (1 < bVar2) {
      piVar5 = param_1;
      if (bVar1 == 1) {
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
        _swift_errorRelease(*(undefined8 *)(param_1 + 6));
        _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 10));
        piVar5 = param_1 + 0xe;
      }
      _swift_bridgeObjectRelease(*(undefined8 *)piVar5);
LAB_100a57dc0:
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      uVar8 = *(undefined8 *)(param_2 + 10);
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar10 = *(undefined8 *)(param_2 + 0xe);
      uVar9 = *(undefined8 *)(param_2 + 0xc);
      uVar11 = *(undefined8 *)((long)param_2 + 0x39);
      *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
      *(undefined8 *)((long)param_1 + 0x39) = uVar11;
      *(undefined8 *)(param_1 + 10) = uVar8;
      *(undefined8 *)(param_1 + 8) = uVar7;
      *(undefined8 *)(param_1 + 0xe) = uVar10;
      *(undefined8 *)(param_1 + 0xc) = uVar9;
      *(undefined8 *)(param_1 + 6) = uVar6;
      *(undefined8 *)(param_1 + 4) = uVar3;
      return param_1;
    }
    if (param_1 == param_2) {
      return param_1;
    }
    piVar5 = param_1;
    if (bVar1 == 1) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 4));
      _swift_errorRelease(*(undefined8 *)(param_1 + 6));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 10));
      piVar5 = param_1 + 0xe;
    }
    _swift_bridgeObjectRelease(*(undefined8 *)piVar5);
    uVar4 = (uint)*(byte *)(param_2 + 0x12);
    if (1 < *(byte *)(param_2 + 0x12)) {
      uVar4 = *param_2 + 2;
    }
    if (uVar4 == 1) {
LAB_100a57d24:
      *(char *)param_1 = (char)*param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      uVar3 = *(undefined8 *)(param_2 + 6);
      _swift_bridgeObjectRetain();
      _swift_errorRetain(uVar3);
      *(undefined8 *)(param_1 + 6) = uVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
      uVar3 = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)(param_1 + 0xe) = uVar3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      *(undefined1 *)(param_1 + 0x12) = 1;
      _swift_bridgeObjectRetain();
      goto LAB_100a57d88;
    }
  }
  else {
    if (1 < bVar2) goto LAB_100a57dc0;
    if (bVar2 == 1) goto LAB_100a57d24;
  }
  uVar3 = *(undefined8 *)param_2;
  *(undefined8 *)param_1 = uVar3;
  *(undefined1 *)(param_1 + 0x12) = 0;
LAB_100a57d88:
  _swift_bridgeObjectRetain(uVar3);
  return param_1;
}



/* Address: 0x100a57df4 | FUN_100a57df4 */

void FUN_100a57df4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x100a57e18 | FUN_100a57e18 */

undefined8 * FUN_100a57e18(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = *(byte *)(param_1 + 9);
  bVar2 = *(byte *)(param_2 + 9);
  if (bVar1 < 2) {
    if (bVar2 < 2) {
      if (param_1 != param_2) {
        puVar3 = param_1;
        if (bVar1 == 1) {
          _swift_bridgeObjectRelease(param_1[2]);
          _swift_errorRelease(param_1[3]);
          _swift_bridgeObjectRelease(param_1[5]);
          puVar3 = param_1 + 7;
        }
        _swift_bridgeObjectRelease(*puVar3);
        if (bVar2 == 1) {
          uVar4 = param_2[4];
          uVar6 = param_2[7];
          uVar5 = param_2[6];
          param_1[5] = param_2[5];
          param_1[4] = uVar4;
          param_1[7] = uVar6;
          param_1[6] = uVar5;
          param_1[8] = param_2[8];
          uVar6 = *param_2;
          uVar5 = param_2[3];
          uVar4 = param_2[2];
          param_1[1] = param_2[1];
          *param_1 = uVar6;
          param_1[3] = uVar5;
          param_1[2] = uVar4;
          *(undefined1 *)(param_1 + 9) = 1;
        }
        else {
          *param_1 = *param_2;
          *(undefined1 *)(param_1 + 9) = 0;
        }
      }
    }
    else {
      puVar3 = param_1;
      if (bVar1 == 1) {
        _swift_bridgeObjectRelease(param_1[2]);
        _swift_errorRelease(param_1[3]);
        _swift_bridgeObjectRelease(param_1[5]);
        puVar3 = param_1 + 7;
      }
      _swift_bridgeObjectRelease(*puVar3);
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      uVar4 = *(undefined8 *)((long)param_2 + 0x39);
      *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
      *(undefined8 *)((long)param_1 + 0x39) = uVar4;
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 == 1) {
      uVar4 = param_2[4];
      uVar6 = param_2[7];
      uVar5 = param_2[6];
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      param_1[8] = param_2[8];
      uVar6 = *param_2;
      uVar5 = param_2[3];
      uVar4 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = uVar6;
      param_1[3] = uVar5;
      param_1[2] = uVar4;
      *(undefined1 *)(param_1 + 9) = 1;
    }
    else {
      *param_1 = *param_2;
      *(undefined1 *)(param_1 + 9) = 0;
    }
  }
  else {
    uVar4 = param_2[4];
    uVar6 = param_2[7];
    uVar5 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar4;
    param_1[7] = uVar6;
    param_1[6] = uVar5;
    uVar4 = *(undefined8 *)((long)param_2 + 0x39);
    *(undefined8 *)((long)param_1 + 0x41) = *(undefined8 *)((long)param_2 + 0x41);
    *(undefined8 *)((long)param_1 + 0x39) = uVar4;
    uVar6 = *param_2;
    uVar5 = param_2[3];
    uVar4 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar6;
    param_1[3] = uVar5;
    param_1[2] = uVar4;
  }
  return param_1;
}



/* Address: 0x100a57f9c | FUN_100a57f9c */

uint FUN_100a57f9c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x49) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x12)) {
    uVar1 = *(byte *)(param_1 + 0x12) ^ 0xff;
  }
  return uVar1;
}



/* Address: 0x100a57fd8 | FUN_100a57fd8 */

void FUN_100a57fd8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 0;
    }
    if (param_2 != 0) {
      *(byte *)(param_1 + 0x12) = ~(byte)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x41) = 0;
    *(undefined8 *)((long)param_1 + 0x39) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x49) = 1;
    }
  }
  return;
}



/* Address: 0x100a58028 | FUN_100a58028 */

int FUN_100a58028(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x48)) {
    iVar1 = (*(byte *)(param_1 + 0x48) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100a5803c | FUN_100a5803c */

void FUN_100a5803c(int *param_1,uint param_2)

{
  if (param_2 < 0xff) {
    if (param_2 != 0) {
      *(char *)(param_1 + 0x12) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x41) = 0;
    *(undefined8 *)((long)param_1 + 0x39) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xff;
  }
  return;
}



/* Address: 0x100a58070 | FUN_100a58070 */

undefined1  [16] FUN_100a58070(void)

{
  return ZEXT816(0x100f2b960);
}



/* Address: 0x100a58080 | FUN_100a58080 */

void FUN_100a58080(undefined8 *param_1)

{
  FUN_100a57528(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],*(undefined2 *)(param_1 + 5));
  return;
}



/* Address: 0x100a58098 | FUN_100a58098 */

undefined8 * FUN_100a58098(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  uVar5 = *(undefined2 *)(param_2 + 5);
  FUN_100a57448(uVar1,uVar3,uVar2,uVar4,uVar6,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  param_1[4] = uVar6;
  *(undefined2 *)(param_1 + 5) = uVar5;
  return param_1;
}



/* Address: 0x100a5810c | FUN_100a5810c */

undefined8 * FUN_100a5810c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar12 = param_2[4];
  uVar9 = *(undefined2 *)(param_2 + 5);
  FUN_100a57448(uVar1,uVar5,uVar2,uVar6,uVar12,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  uVar11 = param_1[4];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  param_1[4] = uVar12;
  uVar10 = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)(param_1 + 5) = uVar9;
  FUN_100a57528(uVar3,uVar7,uVar4,uVar8,uVar11,uVar10);
  return param_1;
}



/* Address: 0x100a58194 | FUN_100a58194 */

void FUN_100a58194(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x1a);
  *(undefined8 *)((long)param_1 + 0x22) = *(undefined8 *)((long)param_2 + 0x22);
  *(undefined8 *)((long)param_1 + 0x1a) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100a581a8 | FUN_100a581a8 */

undefined8 * FUN_100a581a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = param_2[4];
  uVar5 = *(undefined2 *)(param_2 + 5);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  param_1[4] = uVar8;
  uVar6 = *(undefined2 *)(param_1 + 5);
  *(undefined2 *)(param_1 + 5) = uVar5;
  FUN_100a57528(uVar7,uVar1,uVar3,uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x100a581f8 | FUN_100a581f8 */

int FUN_100a581f8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffc < param_2) && (*(char *)((long)param_1 + 0x2a) != '\0')) {
    return *param_1 + 0x3ffd;
  }
  uVar1 = ((uint)(*(ushort *)(param_1 + 10) >> 0xe) |
          ((uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7 |
          *(ushort *)(param_1 + 10) >> 2 & 0xf80) << 2) ^ 0x3fff;
  if (0xffe < uVar1 >> 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100a58270 | FUN_100a58270 */

void FUN_100a58270(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (param_2 < 0x3ffd) {
    if (0x3ffc < param_3) {
      *(undefined1 *)((long)param_1 + 0x2a) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 2 & 0xfff | (-param_2 & 0x3fff) << 0xc;
      *param_1 = ((ulong)uVar1 | (ulong)uVar1 << 0x39) & 0xf000000000000007;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[4] = 0;
      param_1[3] = 0;
      *(short *)(param_1 + 5) = (short)((uVar1 & 0x3f80) << 2);
      return;
    }
  }
  else {
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 5) = 0;
    *param_1 = (ulong)(param_2 - 0x3ffd);
    if (0x3ffc < param_3) {
      *(undefined1 *)((long)param_1 + 0x2a) = 1;
    }
  }
  return;
}



/* Address: 0x100a582f8 | FUN_100a582f8 */

uint FUN_100a582f8(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)(ushort)((ushort)param_1[5] >> 0xe);
  uVar1 = (int)(*param_1 >> 3) + 3;
  if (uVar2 != 3) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x100a58318 | FUN_100a58318 */

void FUN_100a58318(long param_1)

{
  *(ushort *)(param_1 + 0x28) = *(ushort *)(param_1 + 0x28) & 0x3fff;
  return;
}



/* Address: 0x100a58328 | FUN_100a58328 */

void FUN_100a58328(ulong *param_1,uint param_2)

{
  if (2 < param_2) {
    *param_1 = (ulong)(param_2 - 3) << 3;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *(undefined2 *)(param_1 + 5) = 0xc000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8;
  *(ushort *)(param_1 + 5) = (ushort)param_1[5] & 0x1ff | (ushort)(param_2 << 0xe);
  return;
}



/* Address: 0x100a58370 | FUN_100a58370 */

undefined1  [16] FUN_100a58370(void)

{
  return ZEXT816(0x100f2b9f0);
}



/* Address: 0x100a58380 | FUN_100a58380 */

void FUN_100a58380(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a58394 | FUN_100a58394 */

undefined1  [16] FUN_100a58394(void)

{
  return ZEXT816(0x100f2ba80);
}



/* Address: 0x100a583a4 | thunk_FUN_1000947cc */

void thunk_FUN_1000947cc(void)

{
  thunk_FUN_1000947cc();
  return;
}



/* Address: 0x100a583a8 | thunk_FUN_100a571c0 */

void thunk_FUN_100a571c0(void)

{
  FUN_100a571c0();
  return;
}



/* Address: 0x100a583ac | thunk_FUN_100a5782c */

void thunk_FUN_100a5782c(void)

{
  FUN_100a55b24();
  return;
}



/* Address: 0x100a583b0 | thunk_FUN_100a54970 */

void thunk_FUN_100a54970(void)

{
  FUN_100a54970();
  return;
}



/* Address: 0x100a583b4 | thunk_FUN_100a571d0 */

void thunk_FUN_100a571d0(void)

{
  thunk_FUN_100a571d0();
  return;
}



/* Address: 0x100a583b8 | thunk_FUN_100a5721c */

void thunk_FUN_100a5721c(void)

{
  thunk_FUN_100a5721c();
  return;
}



/* Address: 0x100a583bc | thunk_FUN_100a57274 */

void thunk_FUN_100a57274(void)

{
  thunk_FUN_100a57274();
  return;
}



/* Address: 0x100a583c0 | thunk_FUN_100094784 */

void thunk_FUN_100094784(void)

{
  thunk_FUN_100094784();
  return;
}



/* Address: 0x100a583c4 | FUN_100a583c4 */

undefined1  [16] FUN_100a583c4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar1 = param_1;
  lVar3 = param_2;
  _swift_bridgeObjectRetain();
  FUN_1005ad054();
  lVar2 = lVar1;
  FUN_1005ac824();
  _swift_bridgeObjectRelease(lVar1);
  if (lVar3 == lVar2) {
    _swift_bridgeObjectRelease(param_1);
    param_1 = 0;
    param_2 = 0;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x100a58434 | FUN_100a58434 */

void FUN_100a58434(long param_1)

{
  code *pcVar1;
  
  FUN_1005b4b8c();
  if (param_1 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a58450);
  (*pcVar1)();
}



/* Address: 0x100a58450 | FUN_100a58450 */

uint FUN_100a58450(undefined8 param_1,char param_2,undefined8 param_3,char param_4)

{
  thunk_FUN_100556d68(param_1,param_3);
  return (uint)param_1 & (uint)(param_2 == param_4);
}



/* Address: 0x100a58484 | FUN_100a58484 */

void FUN_100a58484(undefined8 param_1,Hasher param_2,ulong param_3)

{
  FUN_1005ac830();
  Swift::Hasher::_combine(param_3 & 0xff,param_2);
  return;
}



/* Address: 0x100a584b0 | FUN_100a584b0 */

void FUN_100a584b0(Hasher param_1,ulong param_2)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  FUN_1005ac830(auStack_68);
  HVar1.unknown = (undefined *)(param_2 & 0xff);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_1);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100a58504 | FUN_100a58504 */

void FUN_100a58504(void)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  Hasher HVar2;
  undefined1 auStack_78 [72];
  
  HVar1.unknown = (undefined *)*unaff_x20;
  HVar2.unknown = (undefined *)(ulong)*(byte *)(unaff_x20 + 1);
  Swift::Hasher::init(0);
  FUN_1005ac830(auStack_78);
  Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100a58560 | FUN_100a58560 */

void FUN_100a58560(void)

{
  byte bVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  FUN_1005ac830();
  Swift::Hasher::_combine((ulong)bVar1,HVar2);
  return;
}



/* Address: 0x100a58594 | FUN_100a58594 */

void FUN_100a58594(__int64 param_1)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  Hasher HVar2;
  undefined1 auStack_78 [72];
  
  HVar1.unknown = (undefined *)*unaff_x20;
  HVar2.unknown = (undefined *)(ulong)*(byte *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  FUN_1005ac830(auStack_78);
  Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100a585ec | FUN_100a585ec */

uint FUN_100a585ec(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  cVar1 = *(char *)(param_1 + 1);
  cVar2 = *(char *)(param_2 + 1);
  thunk_FUN_100556d68(uVar3,*param_2);
  return (uint)uVar3 & (uint)(cVar1 == cVar2);
}



/* Address: 0x100a58630 | thunk_FUN_100a58634 */

void thunk_FUN_100a58634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6be8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90f64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90f64,&DAT_100f2bb60);
  DAT_100ff6be8 = pTVar1;
  return;
}



/* Address: 0x100a58634 | FUN_100a58634 */

void FUN_100a58634(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6be8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90f64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90f64,&DAT_100f2bb60);
  DAT_100ff6be8 = pTVar1;
  return;
}



/* Address: 0x100a58674 | FUN_100a58674 */

undefined1  [16] FUN_100a58674(void)

{
  return ZEXT816(0x100f2bb60);
}



/* Address: 0x100a58684 | FUN_100a58684 */

void FUN_100a58684(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100a586d8(0);
  FUN_100a87eb0(param_1,&DAT_100eeaaa8,uVar1,param_2,&PTR_PTR_100f2bd30,param_3);
  return;
}



/* Address: 0x100a586d8 | FUN_100a586d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100a586d8(void)

{
  return ZEXT816(0x100ff6c48);
}



/* Address: 0x100a586f8 | FUN_100a586f8 */

void FUN_100a586f8(undefined8 *param_1,code *param_2,undefined8 param_3,char param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  long lVar5;
  
  if (param_4 == '\x01') {
    (*param_2)(param_1);
    uVar4 = 1;
  }
  else {
    lVar5 = *(long *)(param_2 + 0x10);
    puVar3 = &DAT_100ff6bf0;
    FUN_1000f7830(&DAT_100ff6bf0,&DAT_100c90fb0);
    _swift_allocObject();
    *(long *)(puVar3 + 0x10) = lVar5;
    _swift_retain(lVar5);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a587a0);
      (*pcVar1)();
    }
    thunk_FUN_100a1c99c();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x58));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a587a4);
      (*pcVar1)();
    }
    uVar4 = 0;
    *param_1 = puVar3;
  }
  *(undefined1 *)(param_1 + 5) = uVar4;
  return;
}



/* Address: 0x100a587a4 | FUN_100a587a4 */

void FUN_100a587a4(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a4dbdc;
  FUN_100a66b68();
  return;
}



/* Address: 0x100a58804 | FUN_100a58804 */

void FUN_100a58804(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a58868;
  FUN_100a66b68();
  return;
}


