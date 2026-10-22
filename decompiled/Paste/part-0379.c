/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004a1b90 | FUN_1004a1b90 */

void FUN_1004a1b90(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x89) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 0x11) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x89) = 1;
    }
  }
  return;
}



/* Address: 0x1004a1c08 | FUN_1004a1c08 */

undefined1  [16] FUN_1004a1c08(void)

{
  return ZEXT816(0x100ed9458);
}



/* Address: 0x1004a1c18 | thunk_FUN_1004a1c1c */

void thunk_FUN_1004a1c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fbf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fbf8,&DAT_100ed9360);
  DAT_100fcb0a0 = pTVar1;
  return;
}



/* Address: 0x1004a1c1c | FUN_1004a1c1c */

void FUN_1004a1c1c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0a0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fbf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fbf8,&DAT_100ed9360);
  DAT_100fcb0a0 = pTVar1;
  return;
}



/* Address: 0x1004a1c5c | thunk_FUN_1004a1c60 */

void thunk_FUN_1004a1c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fcb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fcb0,&DAT_100ed92d0);
  DAT_100fcb0a8 = pTVar1;
  return;
}



/* Address: 0x1004a1c60 | FUN_1004a1c60 */

void FUN_1004a1c60(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fcb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fcb0,&DAT_100ed92d0);
  DAT_100fcb0a8 = pTVar1;
  return;
}



/* Address: 0x1004a1ca0 | thunk_FUN_1004a1ca4 */

void thunk_FUN_1004a1ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fc48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fc48,&DAT_100ed92d0);
  DAT_100fcb0b0 = pTVar1;
  return;
}



/* Address: 0x1004a1ca4 | FUN_1004a1ca4 */

void FUN_1004a1ca4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fc48;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fc48,&DAT_100ed92d0);
  DAT_100fcb0b0 = pTVar1;
  return;
}



/* Address: 0x1004a1ce4 | thunk_FUN_1004a1ce8 */

void thunk_FUN_1004a1ce8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fc20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fc20,&DAT_100ed92d0);
  DAT_100fcb0b8 = pTVar1;
  return;
}



/* Address: 0x1004a1ce8 | FUN_1004a1ce8 */

void FUN_1004a1ce8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fc20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fc20,&DAT_100ed92d0);
  DAT_100fcb0b8 = pTVar1;
  return;
}



/* Address: 0x1004a1d28 | thunk_FUN_1004a1d2c */

void thunk_FUN_1004a1d2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fb90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fb90,&DAT_100ed9360);
  DAT_100fcb0c0 = pTVar1;
  return;
}



/* Address: 0x1004a1d2c | FUN_1004a1d2c */

void FUN_1004a1d2c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fb90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fb90,&DAT_100ed9360);
  DAT_100fcb0c0 = pTVar1;
  return;
}



/* Address: 0x1004a1d6c | thunk_FUN_1004a1d70 */

void thunk_FUN_1004a1d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fb68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fb68,&DAT_100ed9360);
  DAT_100fcb0c8 = pTVar1;
  return;
}



/* Address: 0x1004a1d70 | FUN_1004a1d70 */

void FUN_1004a1d70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fb68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fb68,&DAT_100ed9360);
  DAT_100fcb0c8 = pTVar1;
  return;
}



/* Address: 0x1004a1db0 | thunk_FUN_1004a168c */

undefined8 * thunk_FUN_1004a168c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1004a1db4 | thunk_FUN_1004a1de0 */

void thunk_FUN_1004a1de0(void)

{
  FUN_1004a1de0();
  return;
}



/* Address: 0x1004a1db8 | FUN_1004a1db8 */

void FUN_1004a1db8(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_release(param_1[1]);
  return;
}



/* Address: 0x1004a1de0 | FUN_1004a1de0 */

undefined8 * FUN_1004a1de0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1004a1e1c | FUN_1004a1e1c */

undefined8 * FUN_1004a1e1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1004a1e78 | FUN_1004a1e78 */

undefined8 * FUN_1004a1e78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1004a1eb4 | FUN_1004a1eb4 */

undefined1  [16] FUN_1004a1eb4(void)

{
  return ZEXT816(0x100ed95b0);
}



/* Address: 0x1004a1ec4 | FUN_1004a1ec4 */

void FUN_1004a1ec4(undefined8 param_1,undefined8 param_2,ulong param_3,char *param_4,void *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined2 uVar1;
  CancellationError CVar2;
  ulong uVar3;
  long *plVar4;
  undefined *puVar5;
  void *pvVar6;
  _StringGuts _Var7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  
  *(undefined8 *)(unaff_x22 + 0x370) = param_8;
  *(void **)(unaff_x22 + 0x368) = param_5;
  *(char **)(unaff_x22 + 0x360) = param_4;
  *(undefined8 *)(unaff_x22 + 0x358) = param_1;
  pcVar9 = param_4;
  CVar2 = Swift::CancellationError::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x378) = CVar2.unknown;
  lVar10 = *(long *)(CVar2.unknown + -8);
  *(long *)(unaff_x22 + 0x380) = lVar10;
  uVar3 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x388) = uVar3;
  if (*(long *)(param_7 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_7);
    pcVar8 = param_4;
    pvVar6 = param_5;
    FUN_10046483c(param_4);
    if (((ulong)pvVar6 & 1) != 0) {
      FUN_100076688(*(long *)(param_7 + 0x38) + (long)pcVar8 * 0x28,unaff_x22 + 0x2c0);
      _swift_bridgeObjectRelease(param_7);
      FUN_100076508(unaff_x22 + 0x2c0,unaff_x22 + 0x298);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x2b0);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x2b8);
      FUN_100004640(unaff_x22 + 0x298,uVar12);
      plVar4 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x390) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1004a2164;
      FUN_100499908(plVar4,unaff_x22 + 0x110,param_2,param_3 & 0xcfffffffffffffff,param_6,uVar12,
                    uVar11);
      return;
    }
    _swift_bridgeObjectRelease(param_7);
  }
  puVar5 = &DAT_100fca1f0;
  FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
  _Var7.unknown = (undefined *)0xa0;
  pcVar8 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  Swift::_StringGuts::grow(0x10,_Var7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar19.bridgeObject = param_5;
  SVar19.str = param_4;
  SVar20.bridgeObject = pcVar9;
  SVar20.str = pcVar8;
  Swift::String::append(SVar19,SVar20);
  puVar13 = (undefined8 *)(unaff_x22 + 0x10);
  *puVar13 = 0x206e776f6e6b6e55;
  *(undefined8 *)(unaff_x22 + 0x18) = 0xee00203a6c6f6f74;
  *(undefined8 *)(unaff_x22 + 0x20) = 1;
  *(undefined8 *)(unaff_x22 + 0x30) = 0;
  *(undefined8 *)(unaff_x22 + 0x28) = 0;
  *(undefined8 *)(unaff_x22 + 0x40) = 0;
  *(undefined8 *)(unaff_x22 + 0x38) = 0;
  *(undefined8 *)(unaff_x22 + 0x48) = 0;
  FUN_10049a544(puVar13);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(puVar5 + 0x68) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(puVar5 + 0x60) = uVar16;
  *(undefined8 *)(puVar5 + 0x78) = uVar12;
  *(undefined8 *)(puVar5 + 0x70) = uVar11;
  *(undefined8 *)(puVar5 + 0x88) = uVar15;
  *(undefined8 *)(puVar5 + 0x80) = uVar14;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x79);
  *(undefined8 *)(puVar5 + 0x91) = *(undefined8 *)(unaff_x22 + 0x81);
  *(undefined8 *)(puVar5 + 0x89) = uVar11;
  uVar11 = *puVar13;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x30);
  *(undefined8 *)(puVar5 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar5 + 0x20) = uVar11;
  *(undefined8 *)(puVar5 + 0x38) = uVar14;
  *(undefined8 *)(puVar5 + 0x30) = uVar12;
  *(undefined8 *)(puVar5 + 0x48) = uVar16;
  *(undefined8 *)(puVar5 + 0x40) = uVar15;
  *(undefined8 *)(puVar5 + 0x58) = uVar18;
  *(undefined8 *)(puVar5 + 0x50) = uVar17;
  *(undefined8 *)(unaff_x22 + 0x188) = 0;
  *(undefined8 *)(unaff_x22 + 400) = 0;
  *(undefined8 *)(unaff_x22 + 0x198) = 0;
  *(undefined8 *)(unaff_x22 + 0x1a0) = 0x3000000000000000;
  *(undefined2 *)(unaff_x22 + 0x1a8) = 0x1ff;
  *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
  *(undefined **)(unaff_x22 + 0x148) = puVar5;
  *(undefined8 *)(unaff_x22 + 0x150) = 0;
  *(undefined8 *)(unaff_x22 + 0x158) = 0;
  *(undefined8 *)(unaff_x22 + 0x160) = 0;
  *(undefined8 *)(unaff_x22 + 0x168) = 0x3000000000000000;
  *(undefined2 *)(unaff_x22 + 0x170) = 0x1ff;
  *(undefined8 *)(unaff_x22 + 0x178) = 0;
  *(undefined **)(unaff_x22 + 0x180) = puVar5;
  FUN_1004a2548(unaff_x22 + 0x180,unaff_x22 + 0x1b8);
  FUN_1004a2584(unaff_x22 + 0x148);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar1 = *(undefined2 *)(unaff_x22 + 0x1a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 400);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x388);
  puVar13 = *(undefined8 **)(unaff_x22 + 0x358);
  *puVar13 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar13[2] = uVar15;
  puVar13[1] = uVar14;
  puVar13[4] = uVar17;
  puVar13[3] = uVar16;
  *(undefined2 *)(puVar13 + 5) = uVar1;
  puVar13[6] = uVar12;
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001004a2160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1004a2164 | FUN_1004a2164 */

void FUN_1004a2164(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 *puVar9;
  long unaff_x20;
  undefined8 uVar10;
  long *unaff_x22;
  long lVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  lVar14 = *unaff_x22;
  lVar11 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar14 + 0x390));
  if (unaff_x20 == 0) {
    FUN_100004594(lVar14 + 0x298);
    uVar10 = *(undefined8 *)(lVar14 + 0x140);
    uVar1 = *(undefined1 *)(lVar14 + 0x139);
    uVar16 = *(undefined8 *)(lVar14 + 0x120);
    uVar15 = *(undefined8 *)(lVar14 + 0x118);
    uVar18 = *(undefined8 *)(lVar14 + 0x130);
    uVar17 = *(undefined8 *)(lVar14 + 0x128);
    uVar2 = *(undefined1 *)(lVar14 + 0x138);
    uVar13 = *(undefined8 *)(lVar14 + 0x110);
  }
  else {
    *(long *)(lVar14 + 0x340) = unaff_x20;
    _swift_errorRetain();
    puVar3 = &DAT_100fc84b0;
    FUN_1000037f0(&DAT_100fc84b0,&DAT_100c4cfe8);
    puVar12 = &DAT_100ed8ab0;
    lVar4 = lVar14 + 0x328;
    _swift_dynamicCast(lVar4,(long *)(lVar14 + 0x340),puVar3,&DAT_100ed8ab0,6);
    if ((int)lVar4 == 0) {
      uVar10 = *(undefined8 *)(lVar14 + 0x388);
      puVar12 = *(undefined **)(lVar14 + 0x378);
      *(long *)(lVar14 + 0x348) = unaff_x20;
      _swift_errorRetain();
      _swift_dynamicCast(uVar10,lVar14 + 0x348,puVar3,puVar12,6);
      if ((int)uVar10 == 0) {
        uVar10 = *(undefined8 *)(lVar14 + 0x368);
        uVar13 = *(undefined8 *)(lVar14 + 0x360);
        FUN_1000da768(lVar14 + 0x2e8);
        puVar12 = *(undefined **)(lVar14 + 0x308);
        FUN_100004640(lVar14 + 0x2e8,*(undefined8 *)(lVar14 + 0x300));
        puVar3 = &DAT_100fc81a0;
        FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
        _swift_allocObject();
        *(undefined8 *)(puVar3 + 0x18) = 4;
        *(undefined8 *)(puVar3 + 0x10) = 2;
        *(undefined8 *)(puVar3 + 0x20) = 0x6c6f6f74;
        puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
        *(undefined1 **)(puVar3 + 0x28) = &DAT_e400000000000000;
        *(undefined8 *)(puVar3 + 0x30) = uVar13;
        *(undefined8 *)(puVar3 + 0x38) = uVar10;
        *(undefined **)(puVar3 + 0x48) = puVar6;
        *(undefined8 *)(puVar3 + 0x50) = 0x6573616870;
        *(undefined **)(puVar3 + 0x78) = puVar6;
        *(undefined1 **)(puVar3 + 0x58) = &DAT_e500000000000000;
        *(undefined8 *)(puVar3 + 0x60) = 0x7369642d6c6f6f74;
        *(undefined8 *)(puVar3 + 0x68) = 0xed00006863746170;
        _swift_bridgeObjectRetain(uVar10);
        puVar5 = puVar3;
        FUN_10045a404(puVar3);
        _swift_setDeallocating(puVar3);
        puVar6 = &DAT_100fc7d78;
        FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
        _swift_arrayDestroy(puVar3 + 0x20,2,puVar6);
        _swift_deallocClassInstance(puVar3,0x20,7);
        (**(code **)(puVar12 + 0x28))();
        _swift_bridgeObjectRelease(puVar5);
        FUN_100004594(lVar14 + 0x2e8);
      }
      else {
        (**(code **)(*(long *)(lVar14 + 0x380) + 8))
                  (*(undefined8 *)(lVar14 + 0x388),*(undefined8 *)(lVar14 + 0x378));
      }
    }
    else {
      FUN_10049a3ac(*(undefined8 *)(lVar14 + 0x328),*(undefined8 *)(lVar14 + 0x330),
                    *(undefined1 *)(lVar14 + 0x338));
    }
    uVar10 = *(undefined8 *)(lVar14 + 0x368);
    uVar13 = *(undefined8 *)(lVar14 + 0x360);
    puVar3 = &DAT_100fca1f0;
    FUN_1000037f0(&DAT_100fca1f0,&DAT_100c4f338);
    pcVar8 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    _swift_bridgeObjectRetain(uVar10);
    SVar19.bridgeObject = (void *)0xe900000000000020;
    SVar19.str = (char *)0x3a64656c69616620;
    SVar20.bridgeObject = puVar12;
    SVar20.str = pcVar8;
    Swift::String::append(SVar19,SVar20);
    pcVar8 = (char *)(lVar14 + 0x310);
    _swift_getErrorValue();
    SVar19 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar21.bridgeObject = puVar12;
    SVar21.str = pcVar8;
    Swift::String::append(SVar19,SVar21);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    _swift_errorRelease();
    *(undefined8 *)(lVar14 + 0x90) = uVar13;
    *(undefined8 *)(lVar14 + 0x98) = uVar10;
    *(undefined8 *)(lVar14 + 0xa0) = 1;
    *(undefined8 *)(lVar14 + 0xb0) = 0;
    *(undefined8 *)(lVar14 + 0xa8) = 0;
    *(undefined8 *)(lVar14 + 0xc0) = 0;
    *(undefined8 *)(lVar14 + 0xb8) = 0;
    *(undefined8 *)(lVar14 + 200) = 0;
    FUN_10049a544(lVar14 + 0x90);
    uVar13 = *(undefined8 *)(lVar14 + 0x98);
    uVar10 = *(undefined8 *)(lVar14 + 0x90);
    uVar16 = *(undefined8 *)(lVar14 + 0xa8);
    uVar15 = *(undefined8 *)(lVar14 + 0xa0);
    uVar17 = *(undefined8 *)(lVar14 + 0xb0);
    uVar7 = *(undefined8 *)(lVar14 + 200);
    uVar18 = *(undefined8 *)(lVar14 + 0xc0);
    *(undefined8 *)(puVar3 + 0x48) = *(undefined8 *)(lVar14 + 0xb8);
    *(undefined8 *)(puVar3 + 0x40) = uVar17;
    *(undefined8 *)(puVar3 + 0x58) = uVar7;
    *(undefined8 *)(puVar3 + 0x50) = uVar18;
    *(undefined8 *)(puVar3 + 0x28) = uVar13;
    *(undefined8 *)(puVar3 + 0x20) = uVar10;
    *(undefined8 *)(puVar3 + 0x38) = uVar16;
    *(undefined8 *)(puVar3 + 0x30) = uVar15;
    uVar13 = *(undefined8 *)(lVar14 + 0xd8);
    uVar10 = *(undefined8 *)(lVar14 + 0xd0);
    uVar16 = *(undefined8 *)(lVar14 + 0xe8);
    uVar15 = *(undefined8 *)(lVar14 + 0xe0);
    uVar18 = *(undefined8 *)(lVar14 + 0xf8);
    uVar17 = *(undefined8 *)(lVar14 + 0xf0);
    uVar7 = *(undefined8 *)(lVar14 + 0xf9);
    *(undefined8 *)(puVar3 + 0x91) = *(undefined8 *)(lVar14 + 0x101);
    *(undefined8 *)(puVar3 + 0x89) = uVar7;
    *(undefined8 *)(puVar3 + 0x78) = uVar16;
    *(undefined8 *)(puVar3 + 0x70) = uVar15;
    *(undefined8 *)(puVar3 + 0x88) = uVar18;
    *(undefined8 *)(puVar3 + 0x80) = uVar17;
    *(undefined8 *)(puVar3 + 0x68) = uVar13;
    *(undefined8 *)(puVar3 + 0x60) = uVar10;
    *(undefined **)(lVar14 + 0x228) = puVar3;
    *(undefined8 *)(lVar14 + 0x230) = 0;
    *(undefined8 *)(lVar14 + 0x240) = 0;
    *(undefined8 *)(lVar14 + 0x238) = 0;
    *(undefined8 *)(lVar14 + 0x248) = 0x3000000000000000;
    *(undefined2 *)(lVar14 + 0x250) = 0x1ff;
    *(undefined8 *)(lVar14 + 600) = 0;
    *(undefined **)(lVar14 + 0x1f0) = puVar3;
    *(undefined8 *)(lVar14 + 0x1f8) = 0;
    *(undefined8 *)(lVar14 + 0x208) = 0;
    *(undefined8 *)(lVar14 + 0x200) = 0;
    *(undefined8 *)(lVar14 + 0x210) = 0x3000000000000000;
    *(undefined2 *)(lVar14 + 0x218) = 0x1ff;
    *(undefined8 *)(lVar14 + 0x220) = 0;
    FUN_1004a2548(lVar14 + 0x228,lVar14 + 0x260);
    FUN_1004a2584(lVar14 + 0x1f0);
    FUN_100004594(lVar14 + 0x298);
    uVar10 = *(undefined8 *)(lVar14 + 600);
    uVar1 = *(undefined1 *)(lVar14 + 0x251);
    uVar16 = *(undefined8 *)(lVar14 + 0x238);
    uVar15 = *(undefined8 *)(lVar14 + 0x230);
    uVar18 = *(undefined8 *)(lVar14 + 0x248);
    uVar17 = *(undefined8 *)(lVar14 + 0x240);
    uVar2 = *(undefined1 *)(lVar14 + 0x250);
    uVar13 = *(undefined8 *)(lVar14 + 0x228);
  }
  uVar7 = *(undefined8 *)(lVar14 + 0x388);
  puVar9 = *(undefined8 **)(lVar14 + 0x358);
  *puVar9 = uVar13;
  puVar9[2] = uVar16;
  puVar9[1] = uVar15;
  puVar9[4] = uVar18;
  puVar9[3] = uVar17;
  *(undefined1 *)(puVar9 + 5) = uVar2;
  *(undefined1 *)((long)puVar9 + 0x29) = uVar1;
  puVar9[6] = uVar10;
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001004a2544. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar11 + 8))();
  return;
}



/* Address: 0x1004a2548 | FUN_1004a2548 */

undefined8 FUN_1004a2548(undefined8 param_1,undefined8 param_2)

{
  FUN_1005a9ee0(param_2,param_1);
  return param_2;
}



/* Address: 0x1004a2584 | FUN_1004a2584 */

undefined8 FUN_1004a2584(undefined8 param_1)

{
  FUN_1005a9e90();
  return param_1;
}



/* Address: 0x1004a25b8 | FUN_1004a25b8 */

undefined1  [16] FUN_1004a25b8(long param_1)

{
  ulong *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  ulong local_98;
  undefined1 auStack_90 [48];
  
  puVar3 = &DAT_100c4fd98;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0();
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045a530();
  lVar12 = *(long *)(param_1 + 0x10);
  if (lVar12 != 0) {
    param_1 = param_1 + 0x20;
    do {
      FUN_100076688(param_1,auStack_90);
      FUN_100076508(auStack_90,auStack_b8);
      puVar5 = auStack_b8;
      FUN_100004640(puVar5,local_a0);
      _swift_getDynamicType();
      uVar8 = local_98;
      (**(code **)(local_98 + 0x30))();
      FUN_100076688(auStack_b8,&local_e0);
      uStack_138 = uStack_d8;
      local_140 = local_e0;
      local_128 = lStack_c8;
      uStack_130 = uStack_d0;
      local_120 = local_c0;
      if (lStack_c8 == 0) {
        FUN_1004a28e8(&local_140);
        _swift_bridgeObjectRetain(puVar4);
        uVar9 = uVar8;
        FUN_10046483c();
        _swift_bridgeObjectRelease(puVar4);
        if ((uVar9 & 1) == 0) {
          FUN_100004594(auStack_b8);
          _swift_bridgeObjectRelease(uVar8);
          local_f0 = 0;
          uStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
        }
        else {
          puVar7 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          local_140 = puVar4;
          if ((int)puVar7 == 0) {
            FUN_100466acc();
          }
          puVar4 = local_140;
          _swift_bridgeObjectRelease
                    (*(undefined8 *)(*(long *)(local_140 + 0x30) + (long)puVar5 * 0x10 + 8));
          FUN_100076508(*(long *)(puVar4 + 0x38) + (long)puVar5 * 0x28,&local_110);
          FUN_1001977c8(puVar5,puVar4);
          _swift_bridgeObjectRelease(uVar8);
          FUN_100004594(auStack_b8);
        }
        FUN_1004a28e8(&local_110);
      }
      else {
        FUN_100076508(&local_140,&local_110);
        puVar7 = puVar4;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar6 = puVar5;
        uVar9 = uVar8;
        local_140 = puVar4;
        FUN_10046483c();
        uVar10 = (ulong)~(uint)uVar9 & 1;
        lVar11 = *(long *)(puVar4 + 0x10) + uVar10;
        if (SCARRY8(*(long *)(puVar4 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004a28d0);
          (*pcVar2)();
        }
        if (*(long *)(puVar4 + 0x18) < lVar11) {
          FUN_100468088(lVar11,puVar7);
          puVar6 = puVar5;
          uVar10 = uVar8;
          FUN_10046483c();
          puVar4 = local_140;
          if (((uint)uVar9 & 1) != ((uint)uVar10 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004a28e4);
            (*pcVar2)();
          }
        }
        else {
          puVar4 = local_140;
          if (((ulong)puVar7 & 1) == 0) {
            FUN_100466acc();
            puVar4 = local_140;
          }
        }
        local_140 = puVar4;
        if ((uVar9 & 1) == 0) {
          *(ulong *)(puVar4 + ((ulong)puVar6 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar4 + ((ulong)puVar6 >> 6) * 8 + 0x40) | 1L << ((ulong)puVar6 & 0x3f);
          puVar1 = (ulong *)(*(long *)(puVar4 + 0x30) + (long)puVar6 * 0x10);
          *puVar1 = (ulong)puVar5;
          puVar1[1] = uVar8;
          FUN_100076508(&local_110,*(long *)(puVar4 + 0x38) + (long)puVar6 * 0x28);
          FUN_100004594(auStack_b8);
          if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1004a28d4);
            (*pcVar2)();
          }
          *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        }
        else {
          lVar11 = *(long *)(puVar4 + 0x38) + (long)puVar6 * 0x28;
          FUN_100004594(lVar11);
          FUN_100076508(&local_110,lVar11);
          _swift_bridgeObjectRelease(uVar8);
          FUN_100004594(auStack_b8);
        }
      }
      param_1 = param_1 + 0x28;
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
  }
  auVar13._8_8_ = puVar3;
  auVar13._0_8_ = puVar4;
  return auVar13;
}



/* Address: 0x1004a28e4 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1004a28e8 | FUN_1004a28e8 */

undefined8 FUN_1004a28e8(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb0d0;
  FUN_1000037f0(&DAT_100fcb0d0,&DAT_100c4fdc8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1004a2930 | thunk_FUN_1004a1de0 */

void thunk_FUN_1004a1de0(void)

{
  thunk_FUN_1004a1de0();
  return;
}



/* Address: 0x1004a2934 | FUN_1004a2934 */

undefined1  [16] FUN_1004a2934(void)

{
  return ZEXT816(0x100ed95e0);
}



/* Address: 0x1004a2944 | thunk_FUN_1004a2948 */

void thunk_FUN_1004a2948(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe0c,&DAT_100ed96e8);
  DAT_100fcb0d8 = pTVar1;
  return;
}



/* Address: 0x1004a2948 | FUN_1004a2948 */

void FUN_1004a2948(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb0d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe0c,&DAT_100ed96e8);
  DAT_100fcb0d8 = pTVar1;
  return;
}



/* Address: 0x1004a2988 | FUN_1004a2988 */

undefined1  [16] FUN_1004a2988(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0x656c746974;
  if (cVar4 != '\x01') {
    puVar3 = (undefined1 *)0x746e65746e6f63;
  }
  puVar1 = &DAT_e500000000000000;
  if (cVar4 != '\x01') {
    puVar1 = &DAT_e700000000000000;
  }
  puVar2 = &SUB_00006469;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &SUB_e200000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x1004a29d4 | FUN_1004a29d4 */

void FUN_1004a29d4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004a3430();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004a29f8 | FUN_1004a29f8 */

String FUN_1004a29f8(void)

{
  String SVar1;
  
  FUN_1004a3714();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004a2a20 | FUN_1004a2a20 */

String FUN_1004a2a20(void)

{
  String SVar1;
  
  FUN_1004a3714();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004a2a48 | FUN_1004a2a48 */

void FUN_1004a2a48(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_1004a3538(&local_50);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_48;
    *param_1 = local_50;
    param_1[3] = uStack_38;
    param_1[2] = uStack_40;
    param_1[5] = uStack_28;
    param_1[4] = local_30;
  }
  return;
}



/* Address: 0x1004a2a88 | FUN_1004a2a88 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1004a2a88(undefined8 *param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_110 [16];
  long local_100;
  long lStack_f8;
  long alStack_e8 [3];
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100357cf0(alStack_e8);
  lVar3 = lStack_c8;
  uVar1 = local_d0;
  FUN_100004640(alStack_e8,local_d0);
  lVar10 = *param_3;
  lVar8 = param_3[1];
  lVar7 = *(long *)(lVar3 + 8);
  pcVar11 = *(code **)(lVar7 + 0x20);
  _swift_bridgeObjectRetain(lVar8);
  lVar3 = lVar10;
  (*pcVar11)(lVar10,lVar8,uVar1,lVar7);
  if (lVar3 == 0) {
    plVar5 = alStack_e8;
    FUN_100004594();
    FUN_100491028();
    _swift_allocError(&DAT_100ed8ab0,plVar5,0,0);
    *plVar5 = lVar10;
    plVar5[1] = lVar8;
    *(undefined1 *)(plVar5 + 2) = 2;
    _swift_willThrow();
    return;
  }
  _swift_bridgeObjectRelease(lVar8);
  FUN_100004594(alStack_e8);
  puVar9 = (undefined8 *)param_3[5];
  if (puVar9 != (undefined8 *)0x0) {
    lVar10 = param_3[4];
    puVar4 = puVar9;
    _swift_bridgeObjectRetain();
    uVar2 = (uint)puVar4;
    FUN_10031eba8();
    if (((uVar2 & 0xff) == 1) || (FUN_10031eba8(), (uVar2 & 0xff) == 3)) {
      _swift_bridgeObjectRelease();
      FUN_100491028();
      _swift_allocError(&DAT_100ed8ab0,puVar9,0,0);
      *puVar9 = 0xd000000000000051;
      puVar9[1] = 0x8000000100daa180;
      *(undefined1 *)(puVar9 + 2) = 4;
      _swift_willThrow();
      return;
    }
    FUN_100357cf0(alStack_e8);
    lVar8 = lStack_c8;
    uVar1 = local_d0;
    FUN_100004640();
    puVar6 = &DAT_100fc95d8;
    FUN_1000037f0(&DAT_100fc95d8,&DAT_100c4e180);
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x18) = 3;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    FUN_100381740(0);
    FUN_10037c6d4(lVar10,puVar9);
    *(long *)(puVar6 + 0x20) = lVar10;
    (**(code **)(*(long *)(lVar8 + 0x10) + 0x18))(lVar3,puVar6,uVar1);
    _swift_release(puVar6);
    FUN_100004594(alStack_e8);
  }
  lVar10 = param_3[3];
  if (lVar10 != 0) {
    lVar8 = param_3[2];
    FUN_100357cf0(alStack_e8);
    FUN_100004640(alStack_e8,local_d0);
    local_100 = lVar8;
    lStack_f8 = lVar10;
    (**(code **)(*(long *)(lStack_c8 + 0x10) + 0x20))(lVar3,FUN_1004a376c,auStack_110,local_d0);
    FUN_100004594(alStack_e8);
  }
  FUN_10049738c(&local_c0,lVar3);
  param_1[5] = uStack_98;
  param_1[4] = local_a0;
  param_1[7] = uStack_88;
  param_1[6] = uStack_90;
  param_1[9] = uStack_78;
  param_1[8] = local_80;
  param_1[10] = local_70;
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_a8;
  param_1[2] = uStack_b0;
  return;
}



/* Address: 0x1004a2d38 | FUN_1004a2d38 */

void FUN_1004a2d38(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_2 = 0;
    param_3 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_3);
  }
  _swift_bridgeObjectRelease(param_1[1]);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1004a2d98 | FUN_1004a2d98 */

undefined1  [16] FUN_1004a2d98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb000000006d6574;
  auVar1._0_8_ = 0x695f657461647075;
  return auVar1;
}



/* Address: 0x1004a2db8 | FUN_1004a2db8 */

void FUN_1004a2db8(undefined8 *param_1)

{
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined4 local_28;
  
  FUN_1004a2f1c(&local_c8);
  param_1[0x11] = uStack_40;
  param_1[0x10] = local_48;
  param_1[0x13] = uStack_30;
  param_1[0x12] = local_38;
  *(undefined4 *)(param_1 + 0x14) = local_28;
  param_1[9] = uStack_80;
  param_1[8] = local_88;
  param_1[0xb] = uStack_70;
  param_1[10] = local_78;
  param_1[0xd] = uStack_60;
  param_1[0xc] = local_68;
  param_1[0xf] = uStack_50;
  param_1[0xe] = local_58;
  param_1[1] = uStack_c0;
  *param_1 = local_c8;
  param_1[3] = uStack_b0;
  param_1[2] = local_b8;
  param_1[5] = uStack_a0;
  param_1[4] = local_a8;
  param_1[7] = uStack_90;
  param_1[6] = local_98;
  return;
}



/* Address: 0x1004a2e28 | FUN_1004a2e28 */

void FUN_1004a2e28(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 *param_4)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_4;
  uVar4 = param_4[3];
  uVar3 = param_4[2];
  *(undefined8 *)(unaff_x22 + 0x70) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x78) = uVar3;
  uVar2 = param_4[4];
  plVar1 = (long *)0x10;
  *(undefined8 *)(unaff_x22 + 0x90) = param_4[5];
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1004a2eb8;
  FUN_1004a32d8(plVar1,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x68);
  return;
}



/* Address: 0x1004a2eb8 | FUN_1004a2eb8 */

void FUN_1004a2eb8(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x98);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar6 = *(undefined8 *)(lVar2 + 0x28);
    uVar5 = *(undefined8 *)(lVar2 + 0x20);
    puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
    *puVar1 = uVar4;
    puVar1[3] = uVar6;
    puVar1[2] = uVar5;
    uVar5 = *(undefined8 *)(lVar2 + 0x38);
    uVar4 = *(undefined8 *)(lVar2 + 0x30);
    uVar7 = *(undefined8 *)(lVar2 + 0x48);
    uVar6 = *(undefined8 *)(lVar2 + 0x40);
    uVar9 = *(undefined8 *)(lVar2 + 0x58);
    uVar8 = *(undefined8 *)(lVar2 + 0x50);
    puVar1[10] = *(undefined8 *)(lVar2 + 0x60);
    puVar1[7] = uVar7;
    puVar1[6] = uVar6;
    puVar1[9] = uVar9;
    puVar1[8] = uVar8;
    puVar1[5] = uVar5;
    puVar1[4] = uVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x0001004a2f18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1004a2f1c | FUN_1004a2f1c */

void FUN_1004a2f1c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 auStack_3f0 [168];
  undefined1 auStack_348 [400];
  undefined8 local_1b8;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined7 uStack_137;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar1 = &DAT_100fc95f0;
  FUN_1000037f0(&DAT_100fc95f0,&DAT_100c4e190);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 6;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  *(undefined1 **)(puVar2 + 0x20) = &DAT_65707974;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined1 **)(puVar2 + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x7463656a626f;
  *(undefined8 *)(puVar2 + 0x48) = 0x3000000000000000;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar2[0x50] = 0;
  *(undefined8 *)(puVar2 + 0x58) = 0x69747265706f7270;
  *(undefined8 *)(puVar2 + 0x60) = 0xea00000000007365;
  puVar3 = puVar1;
  _swift_initStackObject(puVar1,auStack_348);
  *(undefined8 *)(puVar3 + 0x18) = 6;
  *(undefined8 *)(puVar3 + 0x10) = 3;
  *(undefined1 **)(puVar3 + 0x20) = &SUB_00006469;
  *(undefined1 **)(puVar3 + 0x28) = &SUB_e200000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcb150);
  puVar5 = puVar4;
  FUN_10045afd8();
  puVar6 = &DAT_100fc9690;
  FUN_1000037f0(&DAT_100fc9690,&DAT_100c4e4e0);
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x30) = puVar5;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0x2000000000000000;
  puVar3[0x50] = 1;
  *(undefined8 *)(puVar3 + 0x58) = 0x656c746974;
  *(undefined1 **)(puVar3 + 0x60) = &DAT_e500000000000000;
  puVar4 = puVar1;
  _swift_initStaticObject(puVar1,&DAT_100fcb1e8);
  puVar5 = puVar4;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar4 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0x68) = puVar5;
  *(undefined8 *)(puVar3 + 0x70) = 0;
  *(undefined8 *)(puVar3 + 0x78) = 0;
  *(undefined8 *)(puVar3 + 0x80) = 0x2000000000000000;
  puVar3[0x88] = 1;
  *(undefined8 *)(puVar3 + 0x90) = 0x746e65746e6f63;
  *(undefined1 **)(puVar3 + 0x98) = &DAT_e700000000000000;
  _swift_initStaticObject(puVar1,&DAT_100fcb280);
  puVar4 = puVar1;
  FUN_10045afd8();
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar6);
  *(undefined **)(puVar3 + 0xa0) = puVar4;
  *(undefined8 *)(puVar3 + 0xa8) = 0;
  *(undefined8 *)(puVar3 + 0xb0) = 0;
  *(undefined8 *)(puVar3 + 0xb8) = 0x2000000000000000;
  puVar3[0xc0] = 1;
  puVar1 = puVar3;
  FUN_10045afd8();
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(puVar3 + 0x20,3,puVar6);
  *(undefined **)(puVar2 + 0x68) = puVar1;
  *(undefined8 *)(puVar2 + 0x70) = 0;
  *(undefined8 *)(puVar2 + 0x78) = 0;
  *(undefined8 *)(puVar2 + 0x80) = 0x2000000000000000;
  puVar2[0x88] = 1;
  *(undefined8 *)(puVar2 + 0x90) = 0x6465726975716572;
  *(undefined1 **)(puVar2 + 0x98) = &DAT_e800000000000000;
  puVar1 = &DAT_100fc97a8;
  FUN_1000037f0(&DAT_100fc97a8,&DAT_100c4e1a0);
  _swift_initStaticObject();
  *(undefined **)(puVar2 + 0xa0) = puVar1;
  *(undefined8 *)(puVar2 + 0xa8) = 0;
  *(undefined8 *)(puVar2 + 0xb0) = 0;
  *(undefined8 *)(puVar2 + 0xb8) = 0x1000000000000000;
  puVar2[0xc0] = 1;
  puVar1 = puVar2;
  FUN_10045afd8();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,3,puVar6);
  local_1b8 = 0x695f657461647075;
  uStack_1b0 = 0xeb000000006d6574;
  local_1a8 = 0xd000000000000011;
  local_1a0 = 0x8000000100daa1e0;
  local_198 = 0xd00000000000017e;
  uStack_190 = 0x8000000100daa200;
  local_180 = 0;
  local_178 = 0;
  uStack_170 = 0x2000000000000000;
  local_168 = 1;
  uStack_158 = 0;
  local_160 = 0;
  uStack_148 = 0;
  local_150 = 0;
  local_140 = 0x3000000000000000;
  local_138 = 0xff;
  local_120 = 0;
  uStack_130 = 0;
  local_128 = 0;
  local_118 = 2;
  local_110 = 0x695f657461647075;
  uStack_108 = 0xeb000000006d6574;
  local_100 = 0xd000000000000011;
  uStack_f8 = 0x8000000100daa1e0;
  local_f0 = 0xd00000000000017e;
  uStack_e8 = 0x8000000100daa200;
  uStack_d8 = 0;
  local_d0 = 0;
  uStack_c8 = 0x2000000000000000;
  local_c0 = 1;
  uStack_b0 = 0;
  local_b8 = 0;
  uStack_a0 = 0;
  local_a8 = 0;
  local_98 = 0x3000000000000000;
  local_90 = 0xff;
  local_80 = 0;
  uStack_78 = 0;
  local_88 = 0;
  local_70 = 2;
  local_188 = puVar1;
  local_e0 = puVar1;
  FUN_1004910b8(&local_1b8,auStack_3f0);
  FUN_1004910f4(&local_110);
  param_1[0x11] = uStack_130;
  param_1[0x10] = CONCAT71(uStack_137,local_138);
  param_1[0x13] = local_120;
  param_1[0x12] = local_128;
  *(undefined4 *)(param_1 + 0x14) = local_118;
  param_1[9] = uStack_170;
  param_1[8] = local_178;
  param_1[0xb] = local_160;
  param_1[10] = CONCAT71(uStack_167,local_168);
  param_1[0xd] = local_150;
  param_1[0xc] = uStack_158;
  param_1[0xf] = local_140;
  param_1[0xe] = uStack_148;
  param_1[1] = uStack_1b0;
  *param_1 = local_1b8;
  param_1[3] = local_1a0;
  param_1[2] = local_1a8;
  param_1[5] = uStack_190;
  param_1[4] = local_198;
  param_1[7] = local_180;
  param_1[6] = local_188;
  return;
}



/* Address: 0x1004a32d8 | FUN_1004a32d8 */

/* WARNING: Removing unreachable block (ram,0x0001004a334c) */

void FUN_1004a32d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined1 auStack_a0 [16];
  long local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = *(ulong *)(param_4 + 0x28);
  if (*(long *)(param_4 + 0x18) == 0) {
    if (uVar3 != 0) goto LAB_1004a330c;
    pcVar4 = "0, capped at 100.";
    FUN_100491028();
    _swift_allocError(&DAT_100ed8ab0,param_1,0,0);
    uVar5 = 0xd000000000000034;
LAB_1004a3400:
    *param_1 = uVar5;
    param_1[1] = (ulong)pcVar4 | 0x8000000000000000;
    *(undefined1 *)(param_1 + 2) = 4;
    _swift_willThrow();
    pcVar2 = *(code **)(unaff_x22 + 8);
  }
  else {
    if (uVar3 != 0) {
LAB_1004a330c:
      uVar1 = *(ulong *)(param_4 + 0x20) & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        pcVar4 = "nboard (from list_pinboards).";
        FUN_100491028();
        _swift_allocError(&DAT_100ed8ab0,param_1,0,0);
        uVar5 = 0xd00000000000001a;
        goto LAB_1004a3400;
      }
    }
    local_90 = param_4;
    FUN_100357d14(&local_88,FUN_1004a3754,auStack_a0,&DAT_100ed8770);
    param_1[5] = uStack_60;
    param_1[4] = local_68;
    param_1[7] = uStack_50;
    param_1[6] = local_58;
    param_1[9] = uStack_40;
    param_1[8] = local_48;
    param_1[10] = local_38;
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = uStack_70;
    param_1[2] = local_78;
    pcVar2 = *(code **)(unaff_x22 + 8);
  }
  (*pcVar2)();
  return;
}



/* Address: 0x1004a3430 | FUN_1004a3430 */

undefined4 FUN_1004a3430(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != (undefined1 *)0x656c746974) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x656c746974,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == (undefined1 *)0x746e65746e6f63) && (param_2 == &DAT_e700000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e700000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x746e65746e6f63,(_StringGuts)0xe700000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1004a3538 | FUN_1004a3538 */

/* WARNING: Removing unreachable block (ram,0x0001004a36ac) */
/* WARNING: Removing unreachable block (ram,0x0001004a366c) */
/* WARNING: Removing unreachable block (ram,0x0001004a36bc) */
/* WARNING: Removing unreachable block (ram,0x0001004a36d0) */
/* WARNING: Removing unreachable block (ram,0x0001004a3604) */

void FUN_1004a3538(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  long lVar6;
  String SVar7;
  undefined1 auStack_80 [8];
  undefined1 *local_78;
  undefined *local_70;
  char *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcb138;
  FUN_1000037f0(&DAT_100fcb138,&DAT_100c4fe38);
  lVar6 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1004a3714();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar7 = Swift::KeyedDecodingContainer::_decode(&local_51,puVar1);
    local_68 = SVar7.str;
    local_52 = 1;
    puVar2 = &local_52;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    puVar3 = &local_53;
    puVar5 = puVar1;
    local_78 = puVar2;
    local_70 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    (**(code **)(lVar6 + 8))(auStack_80 + -extraout_x8,puVar1);
    FUN_100004594(param_2);
    *param_1 = local_68;
    param_1[1] = SVar7.bridgeObject;
    param_1[2] = local_78;
    param_1[3] = local_70;
    param_1[4] = puVar3;
    param_1[5] = puVar5;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1004a3714 | FUN_1004a3714 */

void FUN_1004a3714(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4ff14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4ff14,&DAT_100ed9670);
  DAT_100fcb140 = pTVar1;
  return;
}



/* Address: 0x1004a3754 | FUN_1004a3754 */

void FUN_1004a3754(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004a2a88(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1004a376c | FUN_1004a376c */

void FUN_1004a376c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1004a2d38(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1004a3774 | FUN_1004a3774 */

undefined1  [16] FUN_1004a3774(void)

{
  return ZEXT816(0x100ed9670);
}



/* Address: 0x1004a3784 | FUN_1004a3784 */

void FUN_1004a3784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004a3798 | FUN_1004a3798 */

undefined1  [16] FUN_1004a3798(void)

{
  return ZEXT816(0x100ed96e8);
}



/* Address: 0x1004a37a8 | thunk_FUN_1004a37ac */

void thunk_FUN_1004a37ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4feec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4feec,&DAT_100ed9670);
  DAT_100fcb360 = pTVar1;
  return;
}



/* Address: 0x1004a37ac | FUN_1004a37ac */

void FUN_1004a37ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4feec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4feec,&DAT_100ed9670);
  DAT_100fcb360 = pTVar1;
  return;
}



/* Address: 0x1004a37ec | thunk_FUN_1004a37f0 */

void thunk_FUN_1004a37f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe84,&DAT_100ed9670);
  DAT_100fcb368 = pTVar1;
  return;
}



/* Address: 0x1004a37f0 | FUN_1004a37f0 */

void FUN_1004a37f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe84;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe84,&DAT_100ed9670);
  DAT_100fcb368 = pTVar1;
  return;
}



/* Address: 0x1004a3830 | thunk_FUN_1004a3834 */

void thunk_FUN_1004a3834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe5c,&DAT_100ed9670);
  DAT_100fcb370 = pTVar1;
  return;
}



/* Address: 0x1004a3834 | FUN_1004a3834 */

void FUN_1004a3834(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fcb370 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4fe5c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4fe5c,&DAT_100ed9670);
  DAT_100fcb370 = pTVar1;
  return;
}



/* Address: 0x1004a3874 | _TtC3MCP30OAuthNoRedirectSessionDelegate::URLSession:task:willPerformHTTPRedirection:newRequest:completionHandler: */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x38 bytes */

void _TtC3MCP30OAuthNoRedirectSessionDelegate::
     URLSession_task_willPerformHTTPRedirection_newRequest_completionHandler_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6,ID param_7,
               undefined4 param_8)

{
  undefined *puVar1;
  URLRequest_conflict UVar2;
  URLRequest_conflict UVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar4;
  long lVar5;
  NSURLRequest *pNVar6;
  long lVar7;
  
  puVar1 = &DAT_100fcb3f8;
  FUN_1000f7830(&DAT_100fcb3f8,&DAT_100c50248);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)puVar4 - extraout_x12;
  UVar2 = Foundation::URLRequest::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  Foundation::URLRequest::__unconditionallyBridgeFromObjectiveC((URLRequest_conflict)param_6);
  (**(code **)(lVar7 + 0x38))(lVar5,1,1,UVar2.unknown);
  FUN_1000f8cac(lVar5,puVar4,&DAT_100fcb3f8,&DAT_100c50248);
  UVar3.unknown = puVar4;
  (**(code **)(lVar7 + 0x30))(puVar4,1,UVar2.unknown);
  pNVar6 = (NSURLRequest *)0x0;
  if ((int)UVar3.unknown != 1) {
    pNVar6 = Foundation::URLRequest::_bridgeToObjectiveC(UVar3);
    (**(code **)(lVar7 + 8))(puVar4,UVar2.unknown);
  }
  (**(code **)(param_7 + 0x10))(param_7,pNVar6);
  FUN_1000fb4c4(lVar5,&DAT_100fcb3f8,&DAT_100c50248);
  (**(code **)(lVar7 + 8))(lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  return;
}



/* Address: 0x1004a3a04 | _TtC3MCP30OAuthNoRedirectSessionDelegate::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC3MCP30OAuthNoRedirectSessionDelegate::init(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}



/* Address: 0x1004a3a40 | FUN_1004a3a40 */

void FUN_1004a3a40(undefined8 param_1,bool param_2)

{
  ulong uVar1;
  byte bVar2;
  undefined *puVar3;
  URLQueryItem UVar4;
  URLComponents UVar5;
  undefined8 *puVar6;
  URLQueryItem UVar7;
  URLComponents UVar8;
  URL UVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long in_x7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar13;
  code *pcVar14;
  long lVar15;
  URLComponents *this;
  undefined8 *puVar16;
  long lVar17;
  String SVar18;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  URLComponents UStack_110;
  ulong local_108;
  long local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined1 auStack_90 [24];
  long local_78;
  long lStack_70;
  
  puVar3 = &DAT_100fcb378;
  FUN_1000f7830(&DAT_100fcb378,&DAT_100c50170);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)((long)&UStack_110 - extraout_x8);
  UVar4 = Foundation::URLQueryItem::typeMetadataAccessor();
  lVar13 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  lVar12 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fcb380;
  FUN_1000f7830(&DAT_100fcb380,&DAT_100c504a0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = (undefined8 *)(lVar12 - extraout_x8_01);
  UVar5 = Foundation::URLComponents::typeMetadataAccessor();
  lVar17 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  this = (URLComponents *)((long)puVar16 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::_init(param_2);
  puVar6 = puVar16;
  (**(code **)(lVar17 + 0x30))(puVar16,1,UVar5.unknown);
  if ((int)puVar6 == 1) {
    FUN_1000fb4c4(puVar16,&DAT_100fcb380,&DAT_100c504a0);
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,puVar16,0,0);
    *puVar16 = 2;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    *(undefined1 *)(puVar16 + 4) = 0xe;
    _swift_willThrow();
  }
  else {
    local_e0 = in_stack_00000010;
    local_e8 = in_stack_00000008;
    local_f0 = in_stack_00000000;
    local_f8 = param_1;
    (**(code **)(lVar17 + 0x20))(this,puVar16,UVar5.unknown);
    puVar3 = &DAT_100fcb390;
    FUN_1000f7830(&DAT_100fcb390,&DAT_100c50180);
    lVar15 = *(long *)(lVar13 + 0x48);
    bVar2 = *(byte *)(lVar13 + 0x50);
    local_100 = lVar13;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 0xe;
    *(undefined8 *)(puVar3 + 0x10) = 7;
    local_108 = (ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff);
    Foundation::URLQueryItem::_init();
    UVar7 = Foundation::URLQueryItem::_init();
    SVar18 = Foundation::URL::get_absoluteString((URL)UVar7.unknown);
    Foundation::URLQueryItem::_init();
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    UVar7 = Foundation::URLQueryItem::_init();
    SVar18 = Foundation::URL::get_absoluteString((URL)UVar7.unknown);
    Foundation::URLQueryItem::_init();
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    Foundation::URLQueryItem::_init();
    Foundation::URLQueryItem::_init();
    FUN_100076688(local_e0,auStack_90);
    if (in_x7 == 0) {
      FUN_100004594(auStack_90);
    }
    else {
      FUN_100004640(auStack_90,local_78);
      pcVar14 = *(code **)(lStack_70 + 0x18);
      _swift_bridgeObjectRetain(in_x7);
      lVar13 = local_78;
      (*pcVar14)();
      _swift_bridgeObjectRelease(in_x7);
      FUN_100004594(auStack_90);
      if (lVar13 != 0) {
        Foundation::URLQueryItem::_init();
        _swift_bridgeObjectRelease(lVar13);
        uVar1 = *(ulong *)(puVar3 + 0x10);
        puVar11 = puVar3;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          FUN_1004a42cc(puVar11,uVar1 + 1,1,puVar3);
        }
        *(ulong *)(puVar11 + 0x10) = uVar1 + 1;
        (**(code **)(local_100 + 0x20))(puVar11 + uVar1 * lVar15 + local_108,lVar12,UVar4.unknown);
        puVar3 = puVar11;
      }
    }
    UVar8.unknown = puVar3;
    _swift_bridgeObjectRetain();
    Foundation::URLComponents::_set_queryItems(this);
    Foundation::URLComponents::_get_url(UVar8);
    UVar9 = Foundation::URL::typeMetadataAccessor();
    lVar12 = *(long *)(UVar9.unknown + -8);
    puVar6 = puVar10;
    (**(code **)(lVar12 + 0x30))(puVar10,1,UVar9.unknown);
    if ((int)puVar6 == 1) {
      FUN_1000fb4c4(puVar10,&DAT_100fcb378,&DAT_100c50170);
      FUN_1004a3fb4();
      _swift_allocError(&DAT_100ed9e90,puVar10,0,0);
      *puVar10 = 2;
      puVar10[1] = 0;
      puVar10[2] = 0;
      puVar10[3] = 0;
      *(undefined1 *)(puVar10 + 4) = 0xe;
      _swift_willThrow();
      (**(code **)(lVar17 + 8))(this,UVar5.unknown);
      _swift_bridgeObjectRelease(puVar3);
    }
    else {
      (**(code **)(lVar17 + 8))(this,UVar5.unknown);
      _swift_bridgeObjectRelease(puVar3);
      (**(code **)(lVar12 + 0x20))(local_f8,puVar10,UVar9.unknown);
    }
  }
  return;
}



/* Address: 0x1004a3fb4 | FUN_1004a3fb4 */

void FUN_1004a3fb4(void)

{
  undefined *puVar1;
  
  if (DAT_100fcb388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c50ae0;
  _swift_getWitnessTable(&DAT_100c50ae0,&DAT_100ed9e90);
  DAT_100fcb388 = puVar1;
  return;
}



/* Address: 0x1004a3ff4 | FUN_1004a3ff4 */

void FUN_1004a3ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x110;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1003b0960;
  FUN_1004a5ba4(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}


