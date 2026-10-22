/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10097da24 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10097da28 | FUN_10097da28 */

void FUN_10097da28(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10097da34 | FUN_10097da34 */

void FUN_10097da34(void)

{
  FUN_100622760(PTR__swift_errorRelease_100eae218,0x20);
  return;
}



/* Address: 0x10097da44 | FUN_10097da44 */

undefined8 * FUN_10097da44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  *param_2 = *param_1;
  uVar1 = param_1[2];
  FUN_10097d5b0(uVar2,uVar1);
  param_2[1] = uVar2;
  param_2[2] = uVar1;
  uVar2 = param_1[3];
  param_2[4] = param_1[4];
  param_2[3] = uVar2;
  uVar1 = param_1[6];
  uVar2 = param_1[5];
  *(undefined4 *)(param_2 + 7) = *(undefined4 *)(param_1 + 7);
  param_2[6] = uVar1;
  param_2[5] = uVar2;
  return param_2;
}



/* Address: 0x10097daa4 | FUN_10097daa4 */

void FUN_10097daa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10097dab8 | FUN_10097dab8 */

int FUN_10097dab8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[5] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x10097dad8 | FUN_10097dad8 */

void FUN_10097dad8(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x14) = uVar1;
  return;
}



/* Address: 0x10097db04 | FUN_10097db04 */

undefined1  [16] FUN_10097db04(void)

{
  return ZEXT816(0x100f1ed20);
}



/* Address: 0x10097db14 | FUN_10097db14 */

undefined8 * FUN_10097db14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_10097d5b0(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x10097db50 | FUN_10097db50 */

void FUN_10097db50(undefined8 *param_1)

{
  FUN_10097d0e8(*param_1,param_1[1]);
  return;
}



/* Address: 0x10097db5c | FUN_10097db5c */

undefined8 * FUN_10097db5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_10097d5b0(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_10097d0e8(uVar2,uVar4);
  return param_1;
}



/* Address: 0x10097dba0 | FUN_10097dba0 */

undefined8 * FUN_10097dba0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10097d0e8(uVar1,uVar2);
  return param_1;
}



/* Address: 0x10097dbd8 | FUN_10097dbd8 */

int FUN_10097dbd8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3ffe < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x3fff;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1f |
          (uVar1 >> 0x12 & 0x1c00 | ((uint)*(undefined8 *)(param_1 + 2) & 7) << 7 |
          (uint)((ulong)*(undefined8 *)param_1 >> 0x39) & 0x78 | (uint)*(undefined8 *)param_1 & 7)
          << 1) ^ 0x3fff;
  if (0x3ffd < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10097dc50 | FUN_10097dc50 */

void FUN_10097dc50(ulong *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 < 0x3fff) {
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      uVar1 = -param_2 >> 1 & 0x1fff | (-param_2 & 0x3fff) << 0xd;
      uVar2 = (ulong)uVar1;
      *param_1 = (uVar2 | uVar2 << 0x39) & 0xf000000000000007;
      param_1[1] = ((ulong)(uVar1 >> 7) | uVar2 << 0x32) & 0xf000000000000007;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 0x3fff);
    param_1[1] = 0;
    if (0x3ffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x10097dcbc | FUN_10097dcbc */

void FUN_10097dcbc(ulong *param_1,long param_2)

{
  *param_1 = *param_1 & 0xffffffffffffff8;
  param_1[1] = param_1[1] & 0xffffffffffffff8 | param_2 << 0x3f;
  return;
}



/* Address: 0x10097dcd4 | FUN_10097dcd4 */

undefined1  [16] FUN_10097dcd4(void)

{
  return ZEXT816(0x100f1edc8);
}



/* Address: 0x10097dce4 | FUN_10097dce4 */

undefined1  [16] FUN_10097dce4(void)

{
  return ZEXT816(0x100f1ede8);
}



/* Address: 0x10097dcf4 | thunk_FUN_10097dcf8 */

void thunk_FUN_10097dcf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff06f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89208,&DAT_100f1ede8);
  DAT_100ff06f8 = pTVar1;
  return;
}



/* Address: 0x10097dcf8 | FUN_10097dcf8 */

void FUN_10097dcf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff06f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89208,&DAT_100f1ede8);
  DAT_100ff06f8 = pTVar1;
  return;
}



/* Address: 0x10097dd38 | thunk_FUN_10097dd3c */

void thunk_FUN_10097dd3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0700 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c891d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c891d8,&DAT_100f1ede8);
  DAT_100ff0700 = pTVar1;
  return;
}



/* Address: 0x10097dd3c | FUN_10097dd3c */

void FUN_10097dd3c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0700 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c891d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c891d8,&DAT_100f1ede8);
  DAT_100ff0700 = pTVar1;
  return;
}



/* Address: 0x10097dd7c | thunk_FUN_10097dd80 */

void thunk_FUN_10097dd80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c892f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c892f8,&DAT_100f1ede8);
  DAT_100ff0708 = pTVar1;
  return;
}



/* Address: 0x10097dd80 | FUN_10097dd80 */

void FUN_10097dd80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c892f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c892f8,&DAT_100f1ede8);
  DAT_100ff0708 = pTVar1;
  return;
}



/* Address: 0x10097ddc0 | thunk_FUN_10097ddc4 */

void thunk_FUN_10097ddc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0710 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89230;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89230,&DAT_100f1ede8);
  DAT_100ff0710 = pTVar1;
  return;
}



/* Address: 0x10097ddc4 | FUN_10097ddc4 */

void FUN_10097ddc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff0710 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89230;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89230,&DAT_100f1ede8);
  DAT_100ff0710 = pTVar1;
  return;
}



/* Address: 0x10097de04 | thunk_FUN_10097d438 */

void thunk_FUN_10097d438(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10097de08 | thunk_FUN_10097d44c */

void thunk_FUN_10097d44c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10097de0c | thunk_FUN_10061e3e8 */

void thunk_FUN_10061e3e8(void)

{
  thunk_FUN_10061e3e8();
  return;
}



/* Address: 0x10097de10 | thunk_FUN_10097db14 */

void thunk_FUN_10097db14(void)

{
  FUN_10097db14();
  return;
}



/* Address: 0x10097de14 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x10097de18 | FUN_10097de18 */

void FUN_10097de18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined *puVar10;
  code cVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long local_90 [3];
  long local_78 [3];
  
  lVar14 = *unaff_x20;
  lVar15 = *(long *)(lVar14 + 0x58);
  uVar18 = *(undefined8 *)(lVar14 + 0x58);
  lVar17 = *(long *)(lVar14 + 0x50);
  uVar1 = 0;
  FUN_10097edd0(0,lVar17,lVar15);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c89438;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89438,uVar1);
  FUN_10066a0e4(local_78,param_2,uVar1,pTVar2);
  lVar12 = *(long *)(lVar15 + 8);
  lVar3 = lVar17;
  lVar13 = lVar12;
  (**(code **)(lVar12 + 0x50))();
  lVar14 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  lVar7 = unaff_x20[2];
  lVar8 = unaff_x20[3];
  if (lVar7 == 0) {
    puVar4 = &DAT_100f1f128;
    _swift_allocObject(&DAT_100f1f128,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar3;
    *(long *)(puVar4 + 0x18) = lVar13;
    _swift_unknownObjectRetain(lVar3);
    pcVar9 = FUN_1008fe70c;
  }
  else {
    puVar4 = &DAT_100f1f2b8;
    _swift_allocObject(&DAT_100f1f2b8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar7;
    *(long *)(puVar4 + 0x18) = lVar8;
    pcVar9 = FUN_1008fe864;
  }
  puVar5 = &DAT_100f1f150;
  _swift_allocObject(&DAT_100f1f150,0x20,7);
  *(code **)(puVar5 + 0x10) = pcVar9;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  lVar16 = unaff_x20[4];
  if (lVar3 == lVar14) {
    _swift_unknownObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar16);
    FUN_100011128(lVar7,lVar8);
    lVar7 = local_78[0];
    FUN_100623594(local_78[0],lVar15,lVar16);
    puVar4 = &DAT_100f1f218;
    _swift_allocObject(&DAT_100f1f218,0x48,7);
    *(undefined8 *)(puVar4 + 0x18) = uVar18;
    *(long *)(puVar4 + 0x10) = lVar17;
    *(long *)(puVar4 + 0x20) = lVar3;
    *(long *)(puVar4 + 0x28) = lVar13;
    *(code **)(puVar4 + 0x30) = FUN_1008fe75c;
    *(undefined **)(puVar4 + 0x38) = puVar5;
    *(long *)(puVar4 + 0x40) = local_78[0];
    _swift_unknownObjectRetain(lVar3);
    _swift_retain(puVar4);
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(local_78[0]);
    lVar8 = lVar7;
    FUN_10098029c(lVar7,FUN_100980550,puVar4);
    _swift_bridgeObjectRelease(lVar16);
    _swift_release(lVar7);
    _swift_release_n(puVar4,2);
    _swift_getObjectType(*(undefined8 *)(lVar8 + 0x20));
    FUN_100642338();
    puVar4 = &DAT_100f1f240;
    _swift_allocObject(&DAT_100f1f240,0x28,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = local_78[0];
    *(long **)(puVar4 + 0x20) = unaff_x20;
    _swift_unknownObjectRetain(local_78[0]);
    _swift_retain(param_1);
    _swift_retain();
    pcVar9 = thunk_FUN_100980530;
    FUN_10097e6ec(thunk_FUN_100980530,puVar4,lVar8);
    _swift_release(puVar4);
    puVar4 = &DAT_100f1f268;
    _swift_allocObject(&DAT_100f1f268,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar17;
    *(long *)(puVar4 + 0x18) = lVar15;
    *(long *)(puVar4 + 0x20) = param_1;
    *(long *)(puVar4 + 0x28) = local_78[0];
    puVar10 = &DAT_100f1f290;
    _swift_allocObject(&DAT_100f1f290,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar9;
    *(code **)(puVar10 + 0x18) = thunk_FUN_100980540;
    *(undefined **)(puVar10 + 0x20) = puVar4;
    _swift_beginAccess(pcVar9 + 0x10,local_78,0,0);
    uVar1 = *(undefined8 *)(pcVar9 + 0x10);
    cVar11 = pcVar9[0x18];
    if (cVar11 == (code)0x1) {
      local_90[0] = local_78[0];
      _swift_unknownObjectRetain(local_78[0]);
      _swift_retain(param_1);
      _swift_retain(puVar4);
      _swift_retain(pcVar9);
      FUN_1005dfeb4(uVar1,1);
      FUN_100622874(2,"NIOTransportServices/AcceptHandler.swift",0x28,2,0x3f,lVar17,lVar12);
      _swift_release();
      FUN_100626c9c(uVar1);
      FUN_100308538(uVar1,1);
    }
    else if (cVar11 == (code)0xff) {
      _swift_beginAccess(pcVar9 + 0x30,local_90,0x21,0);
      _swift_unknownObjectRetain(local_78[0]);
      _swift_retain(param_1);
      _swift_retain(puVar4);
      _swift_retain(pcVar9);
      FUN_10064967c(thunk_FUN_1008db354,puVar10);
      _swift_endAccess(local_90);
    }
    else {
      _swift_unknownObjectRetain(local_78[0]);
      _swift_retain(param_1);
      _swift_retain(puVar4);
      _swift_retain(pcVar9);
      FUN_100308538(uVar1,cVar11);
    }
  }
  else {
    lVar6 = lVar3;
    _swift_getObjectType();
    puVar4 = &DAT_100f1f178;
    _swift_allocObject(&DAT_100f1f178,0x50,7);
    *(long *)(puVar4 + 0x10) = lVar17;
    *(long *)(puVar4 + 0x18) = lVar15;
    *(long *)(puVar4 + 0x20) = lVar16;
    *(long *)(puVar4 + 0x28) = local_78[0];
    *(long *)(puVar4 + 0x30) = lVar3;
    *(long *)(puVar4 + 0x38) = lVar13;
    *(code **)(puVar4 + 0x40) = FUN_1008fe75c;
    *(undefined **)(puVar4 + 0x48) = puVar5;
    _swift_unknownObjectRetain(lVar3);
    _swift_unknownObjectRetain(lVar14);
    _swift_bridgeObjectRetain(lVar16);
    FUN_100011128(lVar7,lVar8);
    _swift_retain(puVar5);
    _swift_unknownObjectRetain(local_78[0]);
    pcVar9 = FUN_10097fb8c;
    FUN_100641014(FUN_10097fb8c,puVar4,lVar6,PTR___type_metadata_for____100eae0c8 + 8,lVar13);
    _swift_release(puVar4);
    lVar8 = lVar14;
    FUN_10097e9c8(lVar14,uVar1);
    _swift_release(pcVar9);
    _swift_getObjectType(*(undefined8 *)(lVar8 + 0x20));
    FUN_100642338();
    puVar4 = &DAT_100f1f1a0;
    _swift_allocObject(&DAT_100f1f1a0,0x28,7);
    *(long *)(puVar4 + 0x10) = param_1;
    *(long *)(puVar4 + 0x18) = local_78[0];
    *(long **)(puVar4 + 0x20) = unaff_x20;
    _swift_unknownObjectRetain(local_78[0]);
    _swift_retain(param_1);
    _swift_retain();
    pcVar9 = FUN_100980530;
    FUN_10097e6ec(FUN_100980530,puVar4,lVar8);
    _swift_release(puVar4);
    puVar4 = &DAT_100f1f1c8;
    _swift_allocObject(&DAT_100f1f1c8,0x30,7);
    *(long *)(puVar4 + 0x10) = lVar17;
    *(long *)(puVar4 + 0x18) = lVar15;
    *(long *)(puVar4 + 0x20) = param_1;
    *(long *)(puVar4 + 0x28) = local_78[0];
    puVar10 = &DAT_100f1f1f0;
    _swift_allocObject(&DAT_100f1f1f0,0x28,7);
    *(code **)(puVar10 + 0x10) = pcVar9;
    *(code **)(puVar10 + 0x18) = FUN_100980540;
    *(undefined **)(puVar10 + 0x20) = puVar4;
    _swift_beginAccess(pcVar9 + 0x10,local_78,0,0);
    uVar1 = *(undefined8 *)(pcVar9 + 0x10);
    cVar11 = pcVar9[0x18];
    if (cVar11 == (code)0x1) {
      local_90[0] = local_78[0];
      _swift_unknownObjectRetain(local_78[0]);
      _swift_retain(param_1);
      _swift_retain(puVar4);
      _swift_retain(pcVar9);
      FUN_1005dfeb4(uVar1,1);
      FUN_100622874(2,"NIOTransportServices/AcceptHandler.swift",0x28,2,0x3f,lVar17,lVar12);
      _swift_release();
      FUN_100626c9c(uVar1);
      cVar11 = (code)0x1;
    }
    else {
      if (cVar11 == (code)0xff) {
        _swift_beginAccess(pcVar9 + 0x30,local_90,0x21,0);
        _swift_unknownObjectRetain(local_78[0]);
        _swift_retain(param_1);
        _swift_retain(puVar4);
        _swift_retain(pcVar9);
        FUN_10064967c(FUN_1008db354,puVar10);
        _swift_endAccess(local_90);
        goto LAB_10097e41c;
      }
      _swift_unknownObjectRetain(local_78[0]);
      _swift_retain(param_1);
      _swift_retain(puVar4);
      _swift_retain(pcVar9);
    }
    FUN_100308538(uVar1,cVar11);
  }
LAB_10097e41c:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(lVar8);
  _swift_unknownObjectRelease(lVar3);
  _swift_unknownObjectRelease(lVar14);
  _swift_release(puVar5);
  _swift_unknownObjectRelease(local_78[0]);
  _swift_release(pcVar9);
  _swift_release(puVar4);
  _swift_release(puVar10);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x10097e548 | FUN_10097e548 */

undefined8 FUN_10097e548(ulong param_1,long param_2,undefined8 param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 local_a0;
  undefined8 local_98 [9];
  
  lVar6 = *param_4;
  lVar5 = *(long *)(param_2 + 0x20);
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(param_1);
  if ((uVar1 & 1) == 0) {
    uVar4 = 2;
    local_98[0] = param_3;
    FUN_100622874(2,"NIOTransportServices/AcceptHandler.swift",0x28,2,0x37,
                  *(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(*(long *)(lVar6 + 0x58) + 8));
    uVar2 = uVar4;
    FUN_10097fba0();
    _swift_release(uVar4);
  }
  else {
    uVar2 = 0;
    local_a0 = param_3;
    FUN_10097edd0(0,*(undefined8 *)(lVar6 + 0x50),*(undefined8 *)(lVar6 + 0x58));
    pTVar3 = &TargetProtocolConformanceDescriptor_100c89438;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89438,uVar2);
    FUN_10066a148(local_98,&local_a0,uVar2,pTVar3);
    FUN_100626ce0(local_98);
    FUN_1005e70f4(local_98);
    uVar4 = *(undefined8 *)(lVar5 + 0x30);
    _swift_getObjectType(uVar4);
    uVar2 = uVar4;
    _swift_unknownObjectRetain(uVar4);
    FUN_10063dc68();
    _swift_unknownObjectRelease(uVar4);
  }
  return uVar2;
}



/* Address: 0x10097e698 | FUN_10097e698 */

void FUN_10097e698(undefined8 *param_1)

{
  FUN_100980638();
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = 3;
  _swift_willThrow();
  return;
}



/* Address: 0x10097e6ec | FUN_10097e6ec */

undefined * FUN_10097e6ec(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(param_3 + 0x28);
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0xff;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  puVar2 = &DAT_100f1f448;
  _swift_allocObject(&DAT_100f1f448,0x30,7);
  *(long *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  _swift_beginAccess(param_3 + 0x10,auStack_58,0,0);
  if (*(char *)(param_3 + 0x18) == -1) {
    _swift_beginAccess(param_3 + 0x30,auStack_70,0x21,0);
    _swift_unknownObjectRetain(uVar3);
    _swift_retain(puVar1);
    _swift_retain(param_2);
    _swift_retain(param_3);
    FUN_10064967c(FUN_1009805f8,puVar2);
    _swift_endAccess(auStack_70);
    param_3 = 0;
    param_1 = 0;
    param_2 = 0;
  }
  else {
    _swift_unknownObjectRetain(uVar3);
    _swift_retain(puVar1);
    _swift_retain(param_2);
    _swift_retain(param_3);
    FUN_10097f75c();
  }
  FUN_1006486f8(param_3,param_1,param_2);
  FUN_100004550(param_3,param_1);
  _swift_release(puVar2);
  _swift_bridgeObjectRelease(param_2);
  return puVar1;
}



/* Address: 0x10097e880 | FUN_10097e880 */

void FUN_10097e880(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  FUN_100622874(2,"NIOTransportServices/AcceptHandler.swift",0x28,2,0x3f,param_4,
                *(undefined8 *)(param_5 + 8));
  _swift_release();
  FUN_100626c9c(param_1);
  return;
}



/* Address: 0x10097e8ec | FUN_10097e8ec */

undefined8
FUN_10097e8ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_2;
  FUN_100623594(param_2,param_8,param_1);
  puVar2 = &DAT_100f1f588;
  _swift_allocObject(&DAT_100f1f588,0x48,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_8;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined8 *)(puVar2 + 0x38) = param_6;
  *(undefined8 *)(puVar2 + 0x40) = param_2;
  _swift_retain();
  _swift_unknownObjectRetain(param_3);
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_2);
  uVar3 = uVar1;
  FUN_10098029c(uVar1,thunk_FUN_100980550,puVar2);
  _swift_release(uVar1);
  _swift_release_n(puVar2,2);
  return uVar3;
}



/* Address: 0x10097e9c8 | FUN_10097e9c8 */

ulong FUN_10097e9c8(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_100988f00();
    puVar4 = &DAT_100f1f538;
    _swift_allocObject(&DAT_100f1f538,0x28,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_1009805f0;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f1f560;
      _swift_allocObject(&DAT_100f1f560,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(thunk_FUN_1008db360,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_100988948(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Address: 0x10097ebf8 | FUN_10097ebf8 */

void FUN_10097ebf8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10097edd0(0,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  FUN_10066a0e4(param_1,param_2,uVar1,param_4);
  return;
}



/* Address: 0x10097ec44 | FUN_10097ec44 */

void FUN_10097ec44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10097edd0(0,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  FUN_10066a148(param_1,param_2,uVar1,param_4);
  return;
}



/* Address: 0x10097ec90 | thunk_FUN_10061e6e4 */

void thunk_FUN_10061e6e4(void)

{
  FUN_10061e6e4();
  return;
}



/* Address: 0x10097ec94 | thunk_FUN_10097de18 */

void thunk_FUN_10097de18(void)

{
  FUN_10097de18();
  return;
}



/* Address: 0x10097ec98 | FUN_10097ec98 */

void FUN_10097ec98(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10097edd0(0,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  FUN_10066a16c(param_1,param_2,uVar1,param_4);
  return;
}



/* Address: 0x10097ece4 | FUN_10097ece4 */

void FUN_10097ece4(void)

{
  FUN_1004a4218(PTR_typeMetadataAccessor_100eaa2d0,PTR_init_100eaa2c8);
  return;
}



/* Address: 0x10097ecf8 | FUN_10097ecf8 */

void FUN_10097ecf8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff0720;
  FUN_1000f7830(&DAT_100ff0720,&DAT_100c89370);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x10097ed2c | thunk_FUN_100622d2c */

void thunk_FUN_100622d2c(void)

{
  FUN_100622d2c();
  return;
}



/* Address: 0x10097ed30 | thunk_FUN_10097ed34 */

void thunk_FUN_10097ed34(undefined8 param_1)

{
  DispatchQoS DVar1;
  
  DVar1 = Dispatch::DispatchQoS::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010097ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x10097ed34 | FUN_10097ed34 */

void FUN_10097ed34(undefined8 param_1)

{
  DispatchQoS DVar1;
  
  DVar1 = Dispatch::DispatchQoS::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010097ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x10097ed70 | FUN_10097ed70 */

void FUN_10097ed70(void)

{
  FUN_1004a4218(PTR_typeMetadataAccessor_100eaa278,PTR_init_100eaa270);
  return;
}



/* Address: 0x10097ed84 | FUN_10097ed84 */

void FUN_10097ed84(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_20 = &DAT_100c893b8;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x60);
  return;
}



/* Address: 0x10097edd0 | FUN_10097edd0 */

void FUN_10097edd0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10097eddc | FUN_10097eddc */

void FUN_10097eddc(void)

{
  FUN_10097ede4(0);
  return;
}



/* Address: 0x10097ede4 | FUN_10097ede4 */

void FUN_10097ede4(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff07a8 == 0) {
    lVar2 = 0xff;
    FUN_10097ee38();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100ff07a8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10097ee38 | FUN_10097ee38 */

void FUN_10097ee38(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100ff07b0 != 0) {
    return;
  }
  puVar1 = &DAT_100ff07b8;
  FUN_1000f8b08(&DAT_100ff07b8,&DAT_100c89500);
  puVar2 = &DAT_100ff07c0;
  FUN_1000f8b08(&DAT_100ff07c0,&DAT_100c89400);
  uVar3 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar2,puVar1);
  DAT_100ff07b0 = uVar3;
  return;
}



/* Address: 0x10097eeb4 | FUN_10097eeb4 */

undefined8 FUN_10097eeb4(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10097f260);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f1f3d0;
      _swift_allocObject(&DAT_100f1f3d0,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1009805f0;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f1f3f8;
        _swift_allocObject(&DAT_100f1f3f8,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_1008db360,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_100988948(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f1f420;
      _swift_allocObject(&DAT_100f1f420,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630328(uVar5);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x10097f260 | FUN_10097f260 */

undefined8 FUN_10097f260(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_4 + 0x10,auStack_90,1,0);
    if (*(char *)(param_4 + 0x20) != -1) {
      return 0;
    }
    *(undefined8 *)(param_4 + 0x10) = uVar14;
    *(undefined8 *)(param_4 + 0x18) = 0;
    *(undefined1 *)(param_4 + 0x20) = 1;
    _swift_beginAccess(param_4 + 0x38,auStack_a8,1,0);
    uVar15 = *(undefined8 *)(param_4 + 0x38);
    *(undefined8 *)(param_4 + 0x40) = 0;
    *(undefined8 *)(param_4 + 0x48) = 0;
    *(undefined8 *)(param_4 + 0x38) = 0;
    _swift_errorRetain(uVar14);
    return uVar15;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x10097f75c);
    (*pcVar16)();
  }
  local_b0 = uVar14;
  FUN_1005dff00(uVar14,cVar3);
  puVar4 = &local_b0;
  (*param_2)();
  uVar8 = puVar4[5];
  lVar1 = puVar4[6];
  uVar5 = uVar8;
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar8);
  (*pcVar16)(uVar5,lVar1);
  _swift_unknownObjectRelease(uVar8);
  if ((uVar5 & 1) != 0) {
    puVar6 = (undefined8 *)&DAT_100f1f628;
    _swift_allocObject(&DAT_100f1f628,0x20,7);
    puVar6[2] = param_4;
    puVar6[3] = puVar4;
    _swift_beginAccess(puVar4 + 2,auStack_90,0,0);
    if (*(char *)(puVar4 + 4) == -1) {
      _swift_beginAccess(puVar4 + 7,auStack_a8,0x21,0);
      _swift_retain(param_4);
      _swift_retain(puVar4);
      FUN_10064967c(FUN_1008fcb8c,puVar6);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar6);
      uVar15 = 0;
    }
    else {
      uVar15 = puVar4[2];
      FUN_100999868(uVar15,puVar4[3]);
      _swift_retain(param_4);
      puVar4 = puVar6;
    }
    _swift_release(puVar4);
    FUN_100642b94(uVar14,cVar3);
    return uVar15;
  }
  puVar7 = &DAT_100f1f5b0;
  _swift_allocObject(&DAT_100f1f5b0,0x28,7);
  *(code **)(puVar7 + 0x10) = FUN_1009806ac;
  *(long *)(puVar7 + 0x18) = param_4;
  *(undefined8 **)(puVar7 + 0x20) = puVar4;
  uVar8 = puVar4[5];
  lVar1 = puVar4[6];
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_4,5);
  _swift_retain_n(puVar4,2);
  uVar5 = uVar8;
  (*pcVar16)(uVar8,lVar1);
  if ((uVar5 & 1) == 0) {
    _swift_release(param_4);
    puVar9 = &DAT_100f1f5d8;
    _swift_allocObject(&DAT_100f1f5d8,0x28,7);
    *(undefined8 **)(puVar9 + 0x10) = puVar4;
    *(code **)(puVar9 + 0x18) = FUN_1009806b8;
    *(undefined **)(puVar9 + 0x20) = puVar7;
    pcVar16 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar4);
    _swift_retain(puVar7);
    (*pcVar16)(FUN_1009806c8,puVar9,uVar8,lVar1);
    _swift_release(param_4);
    _swift_release(puVar7);
    _swift_release(puVar9);
    goto LAB_10097f6fc;
  }
  _swift_beginAccess(puVar4 + 2,auStack_90,0,0);
  uVar15 = puVar4[2];
  uVar2 = puVar4[3];
  cVar12 = *(char *)(puVar4 + 4);
  if (cVar12 == '\x01') {
    uVar8 = *(ulong *)(param_4 + 0x28);
    lVar1 = *(long *)(param_4 + 0x30);
    _swift_getObjectType();
    pcVar16 = *(code **)(lVar1 + 0x10);
    uVar13 = 1;
    FUN_1009806d4(uVar15,uVar2,1);
    uVar5 = uVar8;
    lVar11 = lVar1;
    (*pcVar16)(uVar8,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar9 = &DAT_100f1f600;
      _swift_allocObject(&DAT_100f1f600,0x20,7);
      *(long *)(puVar9 + 0x10) = param_4;
      *(undefined8 *)(puVar9 + 0x18) = uVar15;
      pcVar16 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_4);
      FUN_1009806d4(uVar15,uVar2,1);
      (*pcVar16)(FUN_1009806f4,puVar9,uVar8,lVar1);
      _swift_release(param_4);
      _swift_release(puVar9);
    }
    else {
      uVar10 = uVar15;
      FUN_10092b398(uVar15);
      FUN_1006486f8();
      FUN_100004550(uVar10,lVar11);
      _swift_release(param_4);
      _swift_bridgeObjectRelease(uVar13);
    }
    cVar12 = '\x01';
LAB_10097f6c4:
    FUN_1009082bc(uVar15,uVar2,cVar12);
  }
  else {
    if (cVar12 != -1) {
      FUN_1009806d4(uVar15,uVar2,cVar12);
      FUN_100988c80(uVar15,uVar2,cVar12,param_4);
      _swift_release(param_4);
      goto LAB_10097f6c4;
    }
    _swift_release(param_4);
    _swift_beginAccess(puVar4 + 7,auStack_a8,0x21,0);
    FUN_10064967c(FUN_1009806b8,puVar7);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(param_4);
  _swift_release(puVar7);
  _swift_bridgeObjectRelease(0);
LAB_10097f6fc:
  _swift_release_n(param_4,2);
  _swift_release_n(puVar4,2);
  FUN_100642b94(uVar14,cVar3);
  return 0;
}



/* Address: 0x10097f75c | FUN_10097f75c */

undefined8 FUN_10097f75c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10097fb08);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f1f470;
      _swift_allocObject(&DAT_100f1f470,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1009805f0;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f1f498;
        _swift_allocObject(&DAT_100f1f498,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_1008db360,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_100988948(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f1f4c0;
      _swift_allocObject(&DAT_100f1f4c0,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630328(uVar5);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x10097fb08 | FUN_10097fb08 */

void FUN_10097fb08(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097fb2c | FUN_10097fb2c */

void FUN_10097fb2c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097fb50 | FUN_10097fb50 */

void FUN_10097fb50(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x10097fb8c | FUN_10097fb8c */

void FUN_10097fb8c(void)

{
  long unaff_x20;
  
  FUN_10097e8ec(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10097fba0 | FUN_10097fba0 */

long FUN_10097fba0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar1 = *param_1;
  _swift_allocObject(lVar1,0x48,7);
  lVar6 = param_1[5];
  uVar9 = param_1[4];
  *(long *)(lVar1 + 0x28) = param_1[5];
  *(ulong *)(lVar1 + 0x20) = uVar9;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined1 *)(lVar1 + 0x18) = 0xff;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  puVar2 = &DAT_100f1f4e8;
  _swift_allocObject(&DAT_100f1f4e8,0x30,7);
  *(long **)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = FUN_10097e698;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(long *)(puVar2 + 0x28) = lVar1;
  uVar3 = uVar9;
  _swift_getObjectType();
  pcVar8 = *(code **)(lVar6 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(lVar1,2);
  _swift_unknownObjectRetain(uVar9);
  uVar9 = uVar3;
  (*pcVar8)(uVar3,lVar6);
  if ((uVar9 & 1) == 0) {
    puVar4 = &DAT_100f1f510;
    _swift_allocObject(&DAT_100f1f510,0x28,7);
    *(long **)(puVar4 + 0x10) = param_1;
    *(code **)(puVar4 + 0x18) = FUN_10095b568;
    *(undefined **)(puVar4 + 0x20) = puVar2;
    pcVar8 = *(code **)(lVar6 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar8)(thunk_FUN_1008db360,puVar4,uVar3,lVar6);
    _swift_release(puVar4);
    _swift_release(lVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar5 = 0;
    _swift_beginAccess(param_1 + 2,auStack_68,0,0);
    if ((char)param_1[3] == -1) {
      _swift_beginAccess(param_1 + 6,auStack_80,0x21,0);
      FUN_10064967c(FUN_10095b568,puVar2);
      _swift_endAccess(auStack_80);
      plVar7 = (long *)0x0;
      lVar6 = 0;
      uVar5 = 0;
    }
    else {
      plVar7 = param_1;
      lVar6 = lVar1;
      FUN_10097fdb4(param_1,lVar1);
    }
    FUN_1006486f8(plVar7,lVar6,uVar5);
    FUN_100004550(plVar7,lVar6);
    _swift_release(lVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar5);
  }
  return lVar1;
}



/* Address: 0x10097fdb4 | FUN_10097fdb4 */

undefined * FUN_10097fdb4(long param_1,long param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  puVar2 = (undefined8 *)(param_1 + 0x10);
  _swift_beginAccess(puVar2,auStack_58,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_70,1,0);
    puVar5 = (undefined *)0x0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_88,1,0);
      puVar5 = *(undefined **)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar4);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10097fee8);
      (*pcVar1)();
    }
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 2;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_willThrow();
    puVar5 = puVar3;
    FUN_100630328(puVar3,1);
    _swift_errorRelease(puVar3);
  }
  return puVar5;
}



/* Address: 0x10097fee8 | FUN_10097fee8 */

undefined8 FUN_10097fee8(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10098029c);
      (*pcVar10)();
    }
    (*param_3)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f1f358;
      _swift_allocObject(&DAT_100f1f358,0x28,7);
      *(code **)(puVar6 + 0x10) = FUN_1009805f0;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f1f380;
        _swift_allocObject(&DAT_100f1f380,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_1008db360,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_100988948(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f1f3a8;
      _swift_allocObject(&DAT_100f1f3a8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630328(uVar5);
        _swift_retain(param_2);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x10098029c | FUN_10098029c */

undefined * FUN_10098029c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f1f2e0;
  _swift_allocObject(&DAT_100f1f2e0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f1f308;
  _swift_allocObject(&DAT_100f1f308,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar4;
  (*pcVar7)(uVar4,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f1f330;
    _swift_allocObject(&DAT_100f1f330,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_1009805e4;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar7)(FUN_1008db360,puVar6,uVar4,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1009805e4,puVar3);
      _swift_endAccess(auStack_90);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_retain(param_3);
      lVar5 = param_1;
      puVar6 = puVar2;
      FUN_10097fee8(param_1,puVar2,param_2,param_3);
      _swift_release(param_3);
    }
    FUN_1006486f8(lVar5,puVar6,param_2);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(param_2);
  }
  return puVar2;
}


