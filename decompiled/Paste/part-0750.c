/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10083efb8 | FUN_10083efb8 */

void FUN_10083efb8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7650 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7caf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7caf4,&DAT_100f05f08);
  DAT_100fe7650 = pTVar1;
  return;
}



/* Address: 0x10083eff8 | FUN_10083eff8 */

void FUN_10083eff8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe7658 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7cb1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7cb1c,&DAT_100f05f08);
  DAT_100fe7658 = pTVar1;
  return;
}



/* Address: 0x10083f038 | FUN_10083f038 */

void FUN_10083f038(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  thunk_FUN_1007ff8e4();
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0x200;
  return;
}



/* Address: 0x10083f070 | thunk_FUN_10083f074 */

undefined1  [16]
thunk_FUN_10083f074(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  String SVar2;
  String SVar3;
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x5d7974706d655b;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  return auVar1;
}



/* Address: 0x10083f074 | FUN_10083f074 */

undefined1  [16] FUN_10083f074(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  String SVar2;
  String SVar3;
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x5d7974706d655b;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  return auVar1;
}



/* Address: 0x10083f0c0 | FUN_10083f0c0 */

undefined1  [16] FUN_10083f0c0(void)

{
  return ZEXT816(0x100f05f08);
}



/* Address: 0x10083f0d0 | thunk_FUN_10083f074 */

undefined1  [16]
thunk_FUN_10083f074(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  String SVar2;
  String SVar3;
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain();
  SVar2.bridgeObject = &DAT_e700000000000000;
  SVar2.str = (char *)0x5d7974706d655b;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  return auVar1;
}



/* Address: 0x10083f0d4 | FUN_10083f0d4 */

void FUN_10083f0d4(undefined8 *param_1)

{
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  FUN_100840ee0(&local_50);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[2] = local_40;
  param_1[4] = uStack_30;
  param_1[3] = local_38;
  return;
}



/* Address: 0x10083f118 | FUN_10083f118 */

void FUN_10083f118(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008408b8(*unaff_x20,unaff_x20[1],unaff_x20[4]);
  return;
}



/* Address: 0x10083f124 | FUN_10083f124 */

void FUN_10083f124(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008409bc(*unaff_x20,unaff_x20[1],unaff_x20[4]);
  return;
}



/* Address: 0x10083f130 | FUN_10083f130 */

void FUN_10083f130(long param_1,long *param_2,ulong param_3,ulong param_4,undefined8 *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lStack_58;
  
  lVar9 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar9 + 0x10) != 0) {
    lStack_58 = lVar9;
    _swift_bridgeObjectRetain(lVar9);
    plVar4 = param_2;
    uVar7 = param_3;
    FUN_1008350fc();
    if ((uVar7 & 1) == 0) {
      FUN_100841024(&lStack_58);
    }
    else {
      puVar8 = (undefined8 *)(*(long *)(lVar9 + 0x38) + (long)plVar4 * 0x18);
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      uVar3 = *(undefined1 *)(puVar8 + 2);
      FUN_1007fb2a0(uVar1,uVar2,uVar3);
      FUN_100841024(&lStack_58);
      uVar5 = uVar1;
      FUN_1000f4a4c(uVar1,uVar2,uVar3);
      if (((uint)uVar5 & 0xff) != ((uint)param_4 & 0xff)) {
        FUN_1007fb2ec(uVar1,uVar2,uVar3);
        thunk_FUN_1007ff8e4();
        plVar4 = param_2;
        FUN_10080a3bc();
        puVar6 = &DAT_100f05368;
        _swift_allocError(&DAT_100f05368,plVar4,0,0);
        *plVar4 = (long)param_2;
        plVar4[1] = param_3;
        plVar4[2] = param_4 & 0xff;
        plVar4[3] = 0;
        *(undefined1 *)(plVar4 + 4) = 1;
        _swift_willThrow();
        *param_5 = puVar6;
      }
    }
  }
  return;
}



/* Address: 0x10083f2b8 | FUN_10083f2b8 */

void FUN_10083f2b8(void)

{
  FUN_10083f2cc();
  return;
}



/* Address: 0x10083f2cc | FUN_10083f2cc */

void FUN_10083f2cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar2 = &local_80;
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  local_60 = unaff_x20[4];
  uVar1 = param_2;
  uVar3 = param_3;
  thunk_FUN_1007ff8e4();
  FUN_10083f130();
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = puVar2;
    param_1[3] = param_2;
    *(short *)(param_1 + 4) = (short)param_3;
  }
  else {
    _swift_bridgeObjectRelease(uVar3);
  }
  return;
}



/* Address: 0x10083f370 | FUN_10083f370 */

/* WARNING: Removing unreachable block (ram,0x00010083f3ec) */

void FUN_10083f370(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_50 = unaff_x20[4];
  uVar1 = param_4;
  uVar3 = param_5;
  thunk_FUN_1007ff8e4();
  puVar2 = &local_70;
  FUN_10083f130();
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = puVar2;
  param_1[3] = param_4;
  *(short *)(param_1 + 4) = (short)param_5;
                    /* WARNING: Could not recover jumptable at 0x00010083f42c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10083f430 | FUN_10083f430 */

void FUN_10083f430(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20[4];
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007b34fc;
  FUN_100803754(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8,&DAT_100f06010,param_9);
  return;
}



/* Address: 0x10083f514 | FUN_10083f514 */

void FUN_10083f514(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar2 = unaff_x20[4];
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  local_50 = unaff_x20[2];
  param_1[3] = &DAT_100f06090;
  param_1[4] = &PTR_PTR_100f060b0;
  puVar1 = &DAT_100f05f58;
  local_58 = uVar2;
  _swift_allocObject(&DAT_100f05f58,0x38,7);
  *param_1 = puVar1;
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[3];
  uVar4 = unaff_x20[2];
  *(undefined8 *)(puVar1 + 0x18) = unaff_x20[1];
  *(undefined8 *)(puVar1 + 0x10) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  *(undefined8 *)(puVar1 + 0x30) = uVar2;
  FUN_1000f8cac(&uStack_40,auStack_68,&DAT_100fe7660,&DAT_100c7cb90);
  FUN_10000ca28(&local_50,auStack_68);
  FUN_1000f8cac(&local_58,auStack_68,&DAT_100fe7668,&DAT_100c7cb98);
  return;
}



/* Address: 0x10083f5cc | FUN_10083f5cc */

void FUN_10083f5cc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20[4];
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1007b34fc;
  FUN_100803b8c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,&DAT_100f06010,
                param_6,&PTR_PTR_100f05f70);
  return;
}



/* Address: 0x10083f68c | FUN_10083f68c */

void FUN_10083f68c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20[4];
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1007b34fc;
  FUN_10083f430(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x10083f758 | FUN_10083f758 */

void FUN_10083f758(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = unaff_x20[2];
  param_1[3] = &DAT_100f06090;
  param_1[4] = &PTR_PTR_100f060b0;
  puVar2 = &DAT_100f05f58;
  _swift_allocObject(&DAT_100f05f58,0x38,7);
  *param_1 = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  uVar3 = unaff_x20[4];
  uVar4 = unaff_x20[3];
  *(undefined8 *)(puVar2 + 0x30) = unaff_x20[4];
  *(undefined8 *)(puVar2 + 0x28) = uVar4;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  return;
}



/* Address: 0x10083f7f0 | FUN_10083f7f0 */

void FUN_10083f7f0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[3];
  uVar3 = unaff_x20[2];
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20[4];
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1007b34fc;
  FUN_10083f5cc(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6);
  return;
}



/* Address: 0x10083f89c | FUN_10083f89c */

void FUN_10083f89c(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_100847488();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fe7528;
      FUN_1000f7830(&DAT_100fe7528,&DAT_100c7c650);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_10083f9a8(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_100840020(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x10083f9a8 | FUN_10083f9a8 */

void FUN_10083f9a8(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  undefined8 uVar22;
  long unaff_x21;
  long lVar23;
  undefined8 *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  ulong uVar37;
  ulong uVar38;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar17 = param_3[1];
  if (0 < lVar17) {
    lVar16 = 0;
    do {
      lVar23 = lVar16 + 1;
      if (lVar23 < lVar17) {
        puVar14 = (ulong *)(*param_3 + lVar23 * 0x28);
        uVar21 = *puVar14;
        uVar35 = puVar14[1];
        uVar33 = puVar14[2];
        uVar37 = puVar14[3];
        lVar19 = lVar16 * 0x28;
        puVar24 = (undefined8 *)(*param_3 + lVar19);
        uVar22 = *puVar24;
        uVar29 = puVar24[1];
        uVar28 = puVar24[2];
        uVar30 = puVar24[3];
        uVar38 = puVar14[4];
        uVar2 = *(undefined1 *)(puVar24 + 4);
        _swift_bridgeObjectRetain(uVar21);
        _swift_bridgeObjectRetain(uVar35);
        FUN_1007fb2a0(uVar33,uVar37,(char)uVar38);
        _swift_bridgeObjectRetain(uVar22);
        _swift_bridgeObjectRetain(uVar29);
        FUN_1007fb2a0(uVar28,uVar30,uVar2);
        uVar8 = uVar21;
        thunk_FUN_10080038c(uVar21,uVar35,uVar22,uVar29);
        _swift_bridgeObjectRelease(uVar29);
        _swift_bridgeObjectRelease(uVar22);
        FUN_1007fb2ec(uVar28,uVar30,uVar2);
        _swift_bridgeObjectRelease(uVar35);
        _swift_bridgeObjectRelease(uVar21);
        FUN_1007fb2ec(uVar33,uVar37,(char)uVar38);
        puVar24 = puVar24 + 0xe;
        lVar20 = lVar16 + 2;
        do {
          lVar23 = lVar17;
          if (lVar17 == lVar20) break;
          uVar22 = puVar24[-4];
          uVar31 = puVar24[-3];
          uVar28 = puVar24[-2];
          uVar32 = puVar24[-1];
          uVar29 = puVar24[-9];
          uVar34 = puVar24[-8];
          uVar30 = puVar24[-7];
          uVar36 = puVar24[-6];
          uVar2 = *(undefined1 *)puVar24;
          uVar3 = *(undefined1 *)(puVar24 + -5);
          _swift_bridgeObjectRetain(uVar22);
          _swift_bridgeObjectRetain(uVar31);
          FUN_1007fb2a0(uVar28,uVar32,uVar2);
          _swift_bridgeObjectRetain(uVar29);
          _swift_bridgeObjectRetain(uVar34);
          FUN_1007fb2a0(uVar30,uVar36,uVar3);
          uVar9 = uVar22;
          thunk_FUN_10080038c(uVar22,uVar31,uVar29,uVar34);
          _swift_bridgeObjectRelease(uVar34);
          _swift_bridgeObjectRelease(uVar29);
          FUN_1007fb2ec(uVar30,uVar36,uVar3);
          _swift_bridgeObjectRelease(uVar31);
          _swift_bridgeObjectRelease(uVar22);
          FUN_1007fb2ec(uVar28,uVar32,uVar2);
          puVar24 = puVar24 + 5;
          lVar23 = lVar20;
          lVar20 = lVar20 + 1;
        } while (((uint)uVar8 & 1) == ((uint)uVar9 & 1));
        if ((uVar8 & 1) != 0) {
          if (lVar23 < lVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10083fff4);
            (*pcVar6)();
          }
          if (lVar16 < lVar23) {
            lVar15 = *param_3;
            lVar18 = lVar23 * 0x28;
            lVar20 = lVar23;
            lVar17 = lVar16;
            do {
              lVar20 = lVar20 + -1;
              if (lVar17 != lVar20) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100840014);
                  (*pcVar6)();
                }
                puVar24 = (undefined8 *)(lVar15 + lVar19);
                uVar2 = *(undefined1 *)(puVar24 + 4);
                lVar1 = lVar15 + lVar18;
                uVar3 = *(undefined1 *)((long)puVar24 + 0x21);
                uVar31 = puVar24[1];
                uVar30 = *puVar24;
                uVar29 = puVar24[3];
                uVar28 = puVar24[2];
                uVar22 = *(undefined8 *)(lVar1 + -8);
                uVar34 = *(undefined8 *)(lVar1 + -0x10);
                uVar32 = *(undefined8 *)(lVar1 + -0x18);
                uVar36 = *(undefined8 *)(lVar1 + -0x28);
                puVar24[1] = *(undefined8 *)(lVar1 + -0x20);
                *puVar24 = uVar36;
                puVar24[3] = uVar34;
                puVar24[2] = uVar32;
                puVar24[4] = uVar22;
                *(undefined8 *)(lVar1 + -0x20) = uVar31;
                *(undefined8 *)(lVar1 + -0x28) = uVar30;
                *(undefined8 *)(lVar1 + -0x10) = uVar29;
                *(undefined8 *)(lVar1 + -0x18) = uVar28;
                *(undefined1 *)(lVar1 + -8) = uVar2;
                *(undefined1 *)(lVar1 + -7) = uVar3;
              }
              lVar17 = lVar17 + 1;
              lVar18 = lVar18 + -0x28;
              lVar19 = lVar19 + 0x28;
            } while (lVar17 < lVar20);
          }
        }
      }
      lVar17 = param_3[1];
      lVar19 = lVar23;
      if (lVar23 < lVar17) {
        if (SBORROW8(lVar23,lVar16)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10083fff0);
          (*pcVar6)();
        }
        if (lVar23 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10083fff8);
            (*pcVar6)();
          }
          lVar20 = lVar16 + param_4;
          if (lVar17 <= lVar16 + param_4) {
            lVar20 = lVar17;
          }
          if (lVar20 < lVar16) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10083fffc);
            (*pcVar6)();
          }
          if (lVar23 != lVar20) {
            lVar18 = *param_3;
            puVar14 = (ulong *)(lVar18 + lVar23 * 0x28 + -0x28);
            lVar17 = lVar16 - lVar23;
            puVar25 = puVar14;
            lVar15 = lVar17;
LAB_10083fd0c:
            do {
              uVar26 = puVar14[5];
              uVar21 = puVar14[6];
              uVar37 = puVar14[7];
              uVar27 = puVar14[8];
              uVar33 = *puVar14;
              uVar38 = puVar14[1];
              uVar35 = puVar14[2];
              uVar8 = puVar14[3];
              uVar4 = puVar14[9];
              uVar5 = puVar14[4];
              _swift_bridgeObjectRetain(uVar26);
              _swift_bridgeObjectRetain(uVar21);
              FUN_1007fb2a0(uVar37,uVar27,(char)uVar4);
              _swift_bridgeObjectRetain(uVar33);
              _swift_bridgeObjectRetain(uVar38);
              FUN_1007fb2a0(uVar35,uVar8,(char)uVar5);
              uVar10 = uVar26;
              thunk_FUN_10080038c(uVar26,uVar21,uVar33,uVar38);
              _swift_bridgeObjectRelease(uVar38);
              _swift_bridgeObjectRelease(uVar33);
              FUN_1007fb2ec(uVar35,uVar8,(char)uVar5);
              _swift_bridgeObjectRelease(uVar21);
              _swift_bridgeObjectRelease(uVar26);
              FUN_1007fb2ec(uVar37,uVar27,(char)uVar4);
              if ((uVar10 & 1) != 0) {
                if (lVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100840000);
                  (*pcVar6)();
                }
                uVar35 = puVar14[1];
                uVar33 = *puVar14;
                uVar38 = puVar14[3];
                uVar37 = puVar14[2];
                uVar21 = puVar14[4];
                puVar14[1] = puVar14[6];
                *puVar14 = puVar14[5];
                puVar14[3] = puVar14[8];
                puVar14[2] = puVar14[7];
                *(char *)(puVar14 + 4) = (char)puVar14[9];
                *(undefined1 *)((long)puVar14 + 0x21) = *(undefined1 *)((long)puVar14 + 0x49);
                puVar14[6] = uVar35;
                puVar14[5] = uVar33;
                puVar14[8] = uVar38;
                puVar14[7] = uVar37;
                puVar14[9] = uVar21;
                bVar7 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                puVar14 = puVar14 + -5;
                if (bVar7) goto LAB_10083fd0c;
              }
              lVar23 = lVar23 + 1;
              puVar14 = puVar25 + 5;
              lVar17 = lVar15 + -1;
              lVar19 = lVar20;
              puVar25 = puVar14;
              lVar15 = lVar17;
            } while (lVar23 != lVar20);
          }
        }
      }
      puVar13 = local_58;
      if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10083ffe4);
        (*pcVar6)();
      }
      puVar11 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_1008441e8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar21 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_1008441e8(puVar13,uVar21 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar21 + 1;
      *(long *)(puVar13 + uVar21 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar13 + uVar21 * 0x10 + 0x28) = lVar19;
      local_58 = puVar13;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100840018);
        (*pcVar6)();
      }
      FUN_1008401d8(&local_58,*param_1,param_3);
      puVar13 = local_58;
      if (unaff_x21 != 0) goto LAB_10083ffb4;
      lVar17 = param_3[1];
      lVar16 = lVar19;
    } while (lVar19 < lVar17);
  }
  puVar13 = local_58;
  lVar17 = *param_1;
  if (lVar17 == 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100840020);
    (*pcVar6)();
  }
  puVar11 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar11 & 1) == 0) {
    FUN_100844370();
  }
  uVar21 = *(ulong *)(puVar13 + 0x10);
  while (local_58 = puVar13, 1 < uVar21) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10084001c);
      (*pcVar6)();
    }
    lVar19 = uVar21 - 1;
    lVar20 = *(long *)(puVar13 + uVar21 * 0x10);
    lVar23 = *(long *)(puVar13 + lVar19 * 0x10 + 0x28);
    FUN_100840448(lVar16 + lVar20 * 0x28,lVar16 + *(long *)(puVar13 + lVar19 * 0x10 + 0x20) * 0x28,
                  lVar16 + lVar23 * 0x28,lVar17);
    if (unaff_x21 != 0) break;
    if (lVar23 < lVar20) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10083ffe8);
      (*pcVar6)();
    }
    puVar11 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar11 & 1) == 0) {
      FUN_100844370();
    }
    if (*(ulong *)(puVar13 + 0x10) <= uVar21 - 2) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10083ffec);
      (*pcVar6)();
    }
    *(long *)(puVar13 + uVar21 * 0x10) = lVar20;
    *(long *)((long)(puVar13 + uVar21 * 0x10) + 8) = lVar23;
    local_58 = puVar13;
    FUN_1008442e8(lVar19);
    puVar13 = local_58;
    uVar21 = *(ulong *)(local_58 + 0x10);
  }
LAB_10083ffb4:
  _swift_bridgeObjectRelease(puVar13);
  return;
}



/* Address: 0x100840020 | FUN_100840020 */

void FUN_100840020(long param_1,long param_2,long param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long local_88;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    puVar10 = (ulong *)(lVar7 + param_3 * 0x28 + -0x28);
    local_88 = param_1 - param_3;
    lVar13 = local_88;
    puVar11 = puVar10;
LAB_1008400b4:
    do {
      uVar12 = puVar10[5];
      uVar8 = puVar10[6];
      uVar16 = puVar10[7];
      uVar9 = puVar10[8];
      uVar14 = *puVar10;
      uVar17 = puVar10[1];
      uVar15 = puVar10[2];
      uVar1 = puVar10[3];
      uVar2 = puVar10[9];
      uVar3 = puVar10[4];
      _swift_bridgeObjectRetain(uVar12);
      _swift_bridgeObjectRetain(uVar8);
      FUN_1007fb2a0(uVar16,uVar9,(char)uVar2);
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(uVar17);
      FUN_1007fb2a0(uVar15,uVar1,(char)uVar3);
      uVar6 = uVar12;
      thunk_FUN_10080038c(uVar12,uVar8,uVar14,uVar17);
      _swift_bridgeObjectRelease(uVar17);
      _swift_bridgeObjectRelease(uVar14);
      FUN_1007fb2ec(uVar15,uVar1,(char)uVar3);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar12);
      FUN_1007fb2ec(uVar16,uVar9,(char)uVar2);
      if ((uVar6 & 1) != 0) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008401d8);
          (*pcVar4)();
        }
        uVar15 = puVar10[1];
        uVar14 = *puVar10;
        uVar17 = puVar10[3];
        uVar16 = puVar10[2];
        uVar8 = puVar10[4];
        puVar10[1] = puVar10[6];
        *puVar10 = puVar10[5];
        puVar10[3] = puVar10[8];
        puVar10[2] = puVar10[7];
        *(char *)(puVar10 + 4) = (char)puVar10[9];
        *(undefined1 *)((long)puVar10 + 0x21) = *(undefined1 *)((long)puVar10 + 0x49);
        puVar10[6] = uVar15;
        puVar10[5] = uVar14;
        puVar10[8] = uVar17;
        puVar10[7] = uVar16;
        puVar10[9] = uVar8;
        bVar5 = local_88 != -1;
        local_88 = local_88 + 1;
        puVar10 = puVar10 + -5;
        if (bVar5) goto LAB_1008400b4;
      }
      param_3 = param_3 + 1;
      puVar10 = puVar11 + 5;
      local_88 = lVar13 + -1;
      lVar13 = local_88;
      puVar11 = puVar10;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1008401d8 | FUN_1008401d8 */

undefined8 FUN_1008401d8(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_100844370();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1008402b0;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100840430);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_100840314:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100840420);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100840428);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100840408);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10084040c);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100840414);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10084041c);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1008402b0:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100840410);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100840418);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100840424);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10084042c);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_100840314;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100840434);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008403fc);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100840448);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_100840448(lVar9 + lVar12 * 0x28,lVar9 + *plVar1 * 0x28,lVar9 + lVar7 * 0x28,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100840400);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_100844370();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100840404);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1008442e8(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x100840448 | FUN_100840448 */

undefined8 FUN_100840448(ulong *param_1,ulong *param_2,ulong *param_3,ulong *param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  size_t sVar10;
  ulong *puVar11;
  ulong *puVar12;
  long lVar13;
  ulong *puVar14;
  ulong *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong *local_68;
  
  lVar13 = ((long)param_2 - (long)param_1) / 0x28;
  lVar6 = ((long)param_3 - (long)param_2) / 0x28;
  if (lVar13 < lVar6) {
    if ((param_4 != param_1) || (param_1 + lVar13 * 5 <= param_4)) {
      _memmove(param_4,param_1,lVar13 * 0x28);
    }
    puVar15 = param_4 + lVar13 * 5;
    puVar9 = param_1;
    if (0x27 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        uVar17 = *param_2;
        uVar2 = param_2[1];
        uVar18 = param_2[2];
        uVar3 = param_2[3];
        uVar19 = *param_4;
        uVar4 = param_4[1];
        uVar20 = param_4[2];
        uVar5 = param_4[3];
        uVar8 = param_2[4];
        uVar7 = param_4[4];
        _swift_bridgeObjectRetain(uVar17);
        _swift_bridgeObjectRetain(uVar2);
        FUN_1007fb2a0(uVar18,uVar3,(char)uVar8);
        _swift_bridgeObjectRetain(uVar19);
        _swift_bridgeObjectRetain(uVar4);
        FUN_1007fb2a0(uVar20,uVar5,(char)uVar7);
        uVar16 = uVar17;
        thunk_FUN_10080038c(uVar17,uVar2,uVar19,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar19);
        FUN_1007fb2ec(uVar20,uVar5,(char)uVar7);
        _swift_bridgeObjectRelease(uVar2);
        _swift_bridgeObjectRelease(uVar17);
        FUN_1007fb2ec(uVar18,uVar3,(char)uVar8);
        if ((uVar16 & 1) == 0) {
          puVar14 = param_4 + 5;
          puVar11 = param_4;
        }
        else {
          puVar14 = param_4;
          puVar11 = param_2;
          param_2 = param_2 + 5;
        }
        param_4 = puVar14;
        if (puVar9 != puVar11) {
          uVar18 = puVar11[1];
          uVar17 = *puVar11;
          uVar20 = puVar11[3];
          uVar19 = puVar11[2];
          puVar9[4] = puVar11[4];
          puVar9[1] = uVar18;
          *puVar9 = uVar17;
          puVar9[3] = uVar20;
          puVar9[2] = uVar19;
        }
        puVar9 = puVar9 + 5;
      } while (param_4 < puVar15);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar6 * 5 <= param_4)) {
      _memmove(param_4,param_2,lVar6 * 0x28);
    }
    puVar15 = param_4 + lVar6 * 5;
    puVar9 = param_2;
    if ((param_1 < param_2) && (local_68 = param_3, 0x27 < (long)param_3 - (long)param_2)) {
      do {
        puVar14 = puVar15;
        lVar13 = 0;
        puVar11 = puVar9 + -5;
        while( true ) {
          puVar15 = (ulong *)((long)puVar14 + lVar13);
          uVar7 = puVar15[-5];
          puVar1 = (ulong *)((long)local_68 + lVar13);
          puVar12 = puVar1 + -5;
          uVar17 = puVar15[-4];
          uVar20 = puVar15[-3];
          uVar16 = puVar15[-2];
          uVar18 = puVar9[-5];
          uVar2 = puVar9[-4];
          uVar19 = puVar9[-3];
          uVar3 = puVar9[-2];
          uVar4 = puVar15[-1];
          uVar5 = puVar9[-1];
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar17);
          FUN_1007fb2a0(uVar20,uVar16,(char)uVar4);
          _swift_bridgeObjectRetain(uVar18);
          _swift_bridgeObjectRetain(uVar2);
          FUN_1007fb2a0(uVar19,uVar3,(char)uVar5);
          uVar8 = uVar7;
          thunk_FUN_10080038c(uVar7,uVar17,uVar18,uVar2);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar18);
          FUN_1007fb2ec(uVar19,uVar3,(char)uVar5);
          _swift_bridgeObjectRelease(uVar17);
          _swift_bridgeObjectRelease(uVar7);
          FUN_1007fb2ec(uVar20,uVar16,(char)uVar4);
          if ((uVar8 & 1) != 0) break;
          if (puVar1 != puVar15) {
            uVar18 = puVar15[-4];
            uVar17 = puVar15[-5];
            uVar20 = puVar15[-2];
            uVar19 = puVar15[-3];
            puVar1[-1] = puVar15[-1];
            puVar1[-4] = uVar18;
            *puVar12 = uVar17;
            puVar1[-2] = uVar20;
            puVar1[-3] = uVar19;
          }
          lVar13 = lVar13 + -0x28;
          puVar15 = (ulong *)((long)puVar14 + lVar13);
          if (puVar15 <= param_4) goto LAB_100840848;
        }
        if (puVar1 != puVar9) {
          uVar18 = puVar9[-4];
          uVar17 = *puVar11;
          uVar20 = puVar9[-2];
          uVar19 = puVar9[-3];
          puVar1[-1] = puVar9[-1];
          puVar1[-4] = uVar18;
          *puVar12 = uVar17;
          puVar1[-2] = uVar20;
          puVar1[-3] = uVar19;
        }
        puVar9 = puVar11;
      } while ((param_1 < puVar11) && (local_68 = puVar12, param_4 < puVar15));
      puVar15 = (ulong *)((long)puVar14 + lVar13);
    }
  }
LAB_100840848:
  sVar10 = (((long)puVar15 - (long)param_4) / 0x28) * 0x28;
  if ((puVar9 != param_4) ||
     ((ulong *)((long)puVar15 + (sVar10 - ((long)puVar15 - (long)param_4))) <= puVar9)) {
    _memmove(puVar9,param_4,sVar10);
  }
  return 1;
}



/* Address: 0x1008408b8 | FUN_1008408b8 */

undefined1  [16] FUN_1008408b8(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  Swift::_StringGuts::grow(0x1d,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_2.unknown == (undefined *)0x0) {
    param_2.unknown = (undefined *)0xe100000000000000;
    param_1 = (char *)0x20;
  }
  else {
    _swift_bridgeObjectRetain(param_2.unknown);
    SVar3.bridgeObject = &SUB_e200000000000000;
    SVar3.str = (char *)0x202c;
    SVar5.bridgeObject = param_4;
    SVar5.str = param_3;
    Swift::String::append(SVar3,SVar5);
  }
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = param_1;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  _swift_bridgeObjectRelease(param_2.unknown);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar4.bridgeObject = &DAT_e800000000000000;
  SVar4.str = (char *)0x5d7365756c617620;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  auVar1._8_8_ = 0x8000000100db1f90;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x1008409bc | FUN_1008409bc */

/* WARNING: Removing unreachable block (ram,0x000100840ed4) */

String FUN_1008409bc(char *param_1,void *param_2,long param_3)

{
  ulong uVar1;
  char cVar2;
  byte bVar3;
  char *pcVar4;
  code *pcVar5;
  String *pSVar6;
  String *pSVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  undefined *puVar14;
  String *pSVar15;
  char *pcVar16;
  void *pvVar17;
  void *pvVar18;
  long lVar19;
  char *pcVar20;
  char *pcVar21;
  char *pcVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String separator;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  byte local_a9;
  char *local_a8;
  void *pvStack_a0;
  char *local_98;
  String local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  _StringGuts _Var13;
  
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pSVar15 = *(String **)(param_3 + 0x10);
  pSVar6 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pSVar15 != (String *)0x0) {
    _swift_bridgeObjectRetain(param_3);
    pSVar6 = pSVar15;
    FUN_100835c00(pSVar15,0);
    pSVar7 = &local_88;
    FUN_100837ad8(pSVar7,pSVar6 + 2,pSVar15,param_3);
    FUN_10000c650(local_88.str,local_88.bridgeObject,local_78,uStack_70,local_68);
    if (pSVar7 != pSVar15) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100840a44);
      (*pcVar5)();
    }
  }
  local_88.str = (char *)pSVar6;
  FUN_10083f89c(&local_88);
  pcVar10 = local_88.str;
  lVar19 = *(long *)(local_88.str + 0x10);
  if (lVar19 == 0) {
    _swift_release(local_88.str);
    pcVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_98 = puVar14;
    FUN_10083547c(0,lVar19,0);
    pcVar11 = pcVar10 + 0x41;
    do {
      pcVar4 = local_98;
      pcVar21 = *(char **)(pcVar11 + -0x21);
      pcVar22 = *(char **)(pcVar11 + -0x19);
      pcVar16 = *(char **)(pcVar11 + -0x11);
      pvVar17 = *(void **)(pcVar11 + -9);
      bVar3 = pcVar11[-1];
      pcVar20 = (char *)(ulong)bVar3;
      cVar2 = *pcVar11;
      local_88.str = pcVar21;
      _swift_bridgeObjectRetain(pcVar21);
      _swift_bridgeObjectRetain(pcVar22);
      FUN_1007fb2a0(pcVar16,pvVar17,pcVar20);
      pcVar12 = &DAT_100fe6f38;
      FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
      pcVar8 = pcVar12;
      FUN_1007ff838();
      SVar23.bridgeObject = (void *)0xe100000000000000;
      SVar23.str = (char *)0x2e;
      SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar23);
      pvVar18 = SVar23.bridgeObject;
      pcVar9 = pcVar22;
      FUN_1007fe864();
      uVar1 = (ulong)pcVar9 & 0xffffffffffff;
      if (((ulong)pvVar18 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)pvVar18 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        _swift_bridgeObjectRelease(pvVar18);
      }
      else {
        SVar36.bridgeObject = &SUB_e200000000000000;
        SVar36.str = (char *)0x5b20;
        SVar39.bridgeObject = pcVar8;
        SVar39.str = pcVar12;
        local_88 = SVar23;
        Swift::String::append(SVar36,SVar39);
        SVar24.bridgeObject = pvVar18;
        SVar24.str = pcVar9;
        SVar40.bridgeObject = pcVar8;
        SVar40.str = pcVar12;
        Swift::String::append(SVar24,SVar40);
        _swift_bridgeObjectRelease(pvVar18);
        SVar25.bridgeObject = (void *)0xe100000000000000;
        SVar25.str = (char *)0x5d;
        SVar41.bridgeObject = pcVar8;
        SVar41.str = pcVar12;
        Swift::String::append(SVar25,SVar41);
        SVar23 = local_88;
      }
      SVar26.bridgeObject = (void *)0xe100000000000000;
      SVar26.str = (char *)0x3d;
      _Var13.unknown = (undefined *)0xe100000000000000;
      SVar42.bridgeObject = pcVar8;
      SVar42.str = pcVar12;
      local_88 = SVar23;
      Swift::String::append(SVar26,SVar42);
      if (cVar2 == '\0') {
        local_a8 = (char *)0x0;
        pvStack_a0 = (void *)0xe000000000000000;
        SVar29.bridgeObject = (void *)0xe100000000000000;
        SVar29.str = (char *)0x5b;
        SVar45.bridgeObject = pcVar8;
        SVar45.str = pcVar12;
        Swift::String::append(SVar29,SVar45);
        pcVar12 = "\x01\x02";
        puVar14 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_a9 = bVar3;
        Swift::__print_unlocked
                  (&local_a9,&local_a8,&DAT_100f046d8,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar30.bridgeObject = &SUB_e200000000000000;
        SVar30.str = (char *)0x203a;
        SVar46.bridgeObject = puVar14;
        SVar46.str = pcVar12;
        Swift::String::append(SVar30,SVar46);
        pcVar8 = pcVar16;
        pvVar18 = pvVar17;
        pcVar12 = pcVar20;
        FUN_1008017c0();
        SVar31.bridgeObject = pvVar18;
        SVar31.str = pcVar8;
        SVar47.bridgeObject = puVar14;
        SVar47.str = pcVar12;
        Swift::String::append(SVar31,SVar47);
        _swift_bridgeObjectRelease(pvVar18);
        SVar32.bridgeObject = (void *)0xe100000000000000;
        SVar32.str = (char *)0x5d;
        SVar48.bridgeObject = puVar14;
        SVar48.str = pcVar12;
        Swift::String::append(SVar32,SVar48);
      }
      else {
        local_a8 = (char *)0x0;
        pvStack_a0 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x10,_Var13);
        SVar27.bridgeObject = (void *)0xe100000000000000;
        SVar27.str = (char *)0x5b;
        SVar43.bridgeObject = pcVar8;
        SVar43.str = pcVar12;
        Swift::String::append(SVar27,SVar43);
        pcVar12 = "\x01\x02";
        puVar14 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_a9 = bVar3;
        Swift::__print_unlocked
                  (&local_a9,&local_a8,&DAT_100f046d8,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar28.bridgeObject = (void *)0xed00005d3e444554;
        SVar28.str = (char *)0x43414445523c203a;
        SVar44.bridgeObject = puVar14;
        SVar44.str = pcVar12;
        Swift::String::append(SVar28,SVar44);
      }
      pvVar18 = pvStack_a0;
      SVar33.bridgeObject = pvStack_a0;
      SVar33.str = local_a8;
      SVar49.bridgeObject = puVar14;
      SVar49.str = pcVar12;
      Swift::String::append(SVar33,SVar49);
      _swift_bridgeObjectRelease(pcVar22);
      _swift_bridgeObjectRelease(pcVar21);
      _swift_bridgeObjectRelease(pvVar18);
      FUN_1007fb2ec(pcVar16,pvVar17,pcVar20);
      pcVar8 = local_88.str;
      pvVar18 = local_88.bridgeObject;
      uVar1 = *(ulong *)(pcVar4 + 0x10);
      local_98 = pcVar4;
      if (*(ulong *)(pcVar4 + 0x18) >> 1 <= uVar1) {
        FUN_10083547c(1 < *(ulong *)(pcVar4 + 0x18),uVar1 + 1,1);
      }
      pcVar12 = local_98;
      *(ulong *)(local_98 + 0x10) = uVar1 + 1;
      *(char **)(local_98 + uVar1 * 0x10 + 0x20) = pcVar8;
      *(void **)(local_98 + uVar1 * 0x10 + 0x28) = pvVar18;
      pcVar11 = pcVar11 + 0x28;
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
    _swift_release(pcVar10);
  }
  pcVar10 = &DAT_100fe6f38;
  local_88.str = pcVar12;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar11 = pcVar10;
  FUN_1007ff838();
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x202c;
  SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _Var13.unknown = SVar23.bridgeObject;
  _swift_bridgeObjectRelease(pcVar12);
  local_88.str = (char *)0x0;
  local_88.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x21,_Var13);
  _swift_bridgeObjectRelease(local_88.bridgeObject);
  local_88.bridgeObject = (void *)0x8000000100db1f90;
  local_88.str = (char *)0xd000000000000011;
  if (param_2 == (void *)0x0) {
    pvVar18 = (void *)0xe100000000000000;
    pcVar12 = (char *)0x20;
  }
  else {
    local_a8 = param_1;
    pvStack_a0 = param_2;
    _swift_bridgeObjectRetain(param_2);
    SVar34.bridgeObject = &SUB_e200000000000000;
    SVar34.str = (char *)0x202c;
    SVar50.bridgeObject = pcVar11;
    SVar50.str = pcVar10;
    Swift::String::append(SVar34,SVar50);
    pcVar12 = local_a8;
    pvVar18 = pvStack_a0;
  }
  SVar35.bridgeObject = pvVar18;
  SVar35.str = pcVar12;
  SVar51.bridgeObject = pcVar11;
  SVar51.str = pcVar10;
  Swift::String::append(SVar35,SVar51);
  _swift_bridgeObjectRelease(pvVar18);
  local_a8 = *(char **)(param_3 + 0x10);
  SVar36 = Swift::CustomStringConvertible::get_description();
  SVar52.bridgeObject = pcVar11;
  SVar52.str = pcVar10;
  Swift::String::append(SVar36,SVar52);
  _swift_bridgeObjectRelease(SVar36.bridgeObject);
  SVar37.bridgeObject = (void *)0xe900000000000020;
  SVar37.str = (char *)0x3a7365756c617620;
  SVar53.bridgeObject = pcVar11;
  SVar53.str = pcVar10;
  Swift::String::append(SVar37,SVar53);
  SVar54.bridgeObject = pcVar11;
  SVar54.str = pcVar10;
  Swift::String::append(SVar23,SVar54);
  _swift_bridgeObjectRelease(SVar23.bridgeObject);
  SVar38.bridgeObject = (void *)0xe100000000000000;
  SVar38.str = (char *)0x5d;
  SVar55.bridgeObject = pcVar11;
  SVar55.str = pcVar10;
  Swift::String::append(SVar38,SVar55);
  return local_88;
}



/* Address: 0x100840ee0 | FUN_100840ee0 */

void FUN_100840ee0(undefined8 *param_1,char *param_2,_StringGuts param_3,char *param_4,void *param_5
                  )

{
  char *pcVar1;
  _StringGuts _Var2;
  char *pcVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  pcVar3 = param_4;
  Swift::_StringGuts::grow(0x14,param_3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar1 = (char *)0x0;
  if (param_3.unknown != (undefined *)0x0) {
    pcVar1 = param_2;
  }
  _Var2.unknown = (undefined *)0xe000000000000000;
  if (param_3.unknown != (undefined *)0x0) {
    _Var2.unknown = param_3.unknown;
  }
  _swift_bridgeObjectRetain(param_3.unknown);
  SVar4.bridgeObject = _Var2.unknown;
  SVar4.str = pcVar1;
  SVar6.bridgeObject = param_5;
  SVar6.str = pcVar3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(_Var2.unknown);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x5d;
  SVar7.bridgeObject = param_5;
  SVar7.str = pcVar3;
  Swift::String::append(SVar5,SVar7);
  *param_1 = param_2;
  param_1[1] = param_3.unknown;
  param_1[2] = 0xd000000000000011;
  param_1[3] = 0x8000000100db1f90;
  param_1[4] = param_4;
  return;
}



/* Address: 0x100840fac | FUN_100840fac */

void FUN_100840fac(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100840fe0 | FUN_100840fe0 */

void FUN_100840fe0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100840ff4 | FUN_100840ff4 */

undefined1  [16] FUN_100840ff4(void)

{
  return ZEXT816(0x100f06010);
}



/* Address: 0x100841004 | thunk_FUN_1004dd758 */

void thunk_FUN_1004dd758(void)

{
  FUN_1004dd758();
  return;
}



/* Address: 0x100841008 | thunk_FUN_1005588e8 */

void thunk_FUN_1005588e8(void)

{
  FUN_1005588e8();
  return;
}



/* Address: 0x10084100c | thunk_FUN_1006cb604 */

void thunk_FUN_1006cb604(void)

{
  FUN_1006cb604();
  return;
}



/* Address: 0x100841010 | thunk_FUN_1005589cc */

void thunk_FUN_1005589cc(void)

{
  FUN_1005589cc();
  return;
}



/* Address: 0x100841014 | FUN_100841014 */

undefined1  [16] FUN_100841014(void)

{
  return ZEXT816(0x100f06090);
}



/* Address: 0x100841024 | FUN_100841024 */

undefined8 FUN_100841024(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe7668;
  FUN_1000f7830(&DAT_100fe7668,&DAT_100c7cb98);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10084106c | FUN_10084106c */

void FUN_10084106c(void)

{
  FUN_10083f2b8();
  return;
}



/* Address: 0x100841080 | thunk_FUN_100420468 */

void thunk_FUN_100420468(void)

{
  thunk_FUN_100420468();
  return;
}



/* Address: 0x100841084 | thunk_FUN_1007b34fc */

void thunk_FUN_1007b34fc(void)

{
  FUN_1007b34fc();
  return;
}



/* Address: 0x100841088 | thunk_FUN_1004dd758 */

void thunk_FUN_1004dd758(void)

{
  thunk_FUN_1004dd758();
  return;
}



/* Address: 0x10084108c | thunk_FUN_1005588e8 */

void thunk_FUN_1005588e8(void)

{
  thunk_FUN_1005588e8();
  return;
}



/* Address: 0x100841090 | thunk_FUN_1006cb604 */

void thunk_FUN_1006cb604(void)

{
  thunk_FUN_1006cb604();
  return;
}



/* Address: 0x100841094 | thunk_FUN_1005589cc */

void thunk_FUN_1005589cc(void)

{
  thunk_FUN_1005589cc();
  return;
}



/* Address: 0x100841098 | thunk_FUN_100420420 */

void thunk_FUN_100420420(void)

{
  thunk_FUN_100420420();
  return;
}



/* Address: 0x10084109c | FUN_10084109c */

void FUN_10084109c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  UUID UVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100fe6fb8;
  FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
  lVar8 = *(long *)(puVar1 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fe71d8;
  FUN_1000f7830(&DAT_100fe71d8,&DAT_100c7bad8);
  uVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar6 - uVar9;
  FUN_10011532c(param_1,lVar7,&DAT_100fe71d8,&DAT_100c7bad8);
  lVar3 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,puVar1);
  if ((int)lVar3 == 1) {
    FUN_1000fb4c4(lVar7,&DAT_100fe71d8,&DAT_100c7bad8);
    lVar7 = lVar7 - uVar9;
    FUN_1008464fc(lVar7,param_2,&DAT_100fe6fb8,&DAT_100c7cc90,&DAT_100fe6fa8,&DAT_100c7b458);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    FUN_1000fb4c4(lVar7,&DAT_100fe71d8,&DAT_100c7bad8);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar6,lVar7,puVar1);
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = *unaff_x20;
    FUN_100846760(puVar6,param_2,uVar5,&DAT_100fe6fa8,&DAT_100c7b458,&DAT_100fe6fb8,&DAT_100c7cc90);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100841290 | FUN_100841290 */

void FUN_100841290(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  UUID UVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  puVar1 = &DAT_100fe6fd0;
  FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
  lVar8 = *(long *)(puVar1 + -8);
  puVar6 = auStack_70 + -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fe71c0;
  FUN_1000f7830(&DAT_100fe71c0,&DAT_100c7cd20);
  uVar9 = *(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)puVar6 - uVar9;
  FUN_10011532c(param_1,lVar7,&DAT_100fe71c0,&DAT_100c7cd20);
  lVar3 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,puVar1);
  if ((int)lVar3 == 1) {
    FUN_1000fb4c4(lVar7,&DAT_100fe71c0,&DAT_100c7cd20);
    lVar7 = lVar7 - uVar9;
    FUN_1008464fc(lVar7,param_2,&DAT_100fe6fd0,&DAT_100c7b480,&DAT_100fe6fc0,&DAT_100c7b470);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    FUN_1000fb4c4(lVar7,&DAT_100fe71c0,&DAT_100c7cd20);
  }
  else {
    (**(code **)(lVar8 + 0x20))(puVar6,lVar7,puVar1);
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar5);
    local_68 = *unaff_x20;
    FUN_100846760(puVar6,param_2,uVar5,&DAT_100fe6fc0,&DAT_100c7b470,&DAT_100fe6fd0,&DAT_100c7b480);
    UVar4 = Foundation::UUID::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 8))(param_2,UVar4.unknown);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100841484 | FUN_100841484 */

long FUN_100841484(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar3 = param_2;
  FUN_1008415b0();
  _swift_bridgeObjectRelease(param_2);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008007a0();
  FUN_1008008b8();
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  return unaff_x20;
}



/* Address: 0x100841524 | FUN_100841524 */

void FUN_100841524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_bridgeObjectRetain(param_2);
  uVar3 = param_2;
  FUN_1008415b0();
  _swift_bridgeObjectRelease(param_2);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008007a0();
  FUN_1008008b8();
  *(undefined4 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  *(undefined **)(unaff_x20 + 0x48) = puVar2;
  return;
}



/* Address: 0x1008415b0 | FUN_1008415b0 */

undefined1  [16] FUN_1008415b0(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  pvVar3 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x19,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (param_2.unknown == (undefined *)0x0) {
    pcVar2 = (char *)0x0;
  }
  else {
    SVar4.bridgeObject = param_2.unknown;
    SVar4.str = param_1;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar4,SVar7);
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x5d;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar5,SVar8);
    pcVar2 = (char *)0x5b;
    pvVar3 = (void *)0xe100000000000000;
  }
  SVar6.bridgeObject = pvVar3;
  SVar6.str = pcVar2;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar6,SVar9);
  _swift_bridgeObjectRelease(pvVar3);
  auVar1._8_8_ = 0x8000000100c7cda0;
  auVar1._0_8_ = 0xd000000000000017;
  return auVar1;
}



/* Address: 0x10084166c | FUN_10084166c */

void FUN_10084166c(void)

{
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  local_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x38);
  local_20 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_10084749c(&local_40);
  return;
}



/* Address: 0x1008416ac | FUN_1008416ac */

void FUN_1008416ac(void)

{
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x30);
  local_40 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_28 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x38);
  local_20 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_10084749c(&local_40);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008416f8 | FUN_1008416f8 */

void FUN_1008416f8(long param_1,undefined8 param_2,ulong param_3,long param_4,ulong param_5)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined *puVar9;
  UUID UVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong uVar13;
  long unaff_x20;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  undefined1 *puVar23;
  uint uVar24;
  long lVar25;
  undefined1 auStack_f0 [8];
  undefined1 *local_e8;
  ulong *local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  uint local_bc;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined1 *local_a8;
  ulong *local_a0;
  ulong local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  long local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  local_a0 = (ulong *)param_1;
  local_98 = param_2;
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  plVar17 = (long *)(unaff_x20 + 0x38);
  lVar14 = *plVar17;
  uVar24 = (uint)param_3;
  if (*(long *)(lVar14 + 0x10) == 0) {
LAB_1008417e8:
    if ((uVar24 & 0xff00) != 0x200) {
LAB_100841844:
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_5);
      uVar13 = local_98;
      puVar12 = local_a0;
      FUN_1007fb28c(local_a0,local_98,param_3);
      lVar14 = *plVar17;
      _swift_isUniquelyReferenced_nonNull_native(lVar14);
      local_78 = *plVar17;
      FUN_100846910(puVar12,uVar13,uVar24 & 0x1ff,param_4,param_5,lVar14);
      _swift_bridgeObjectRelease(param_5);
      _swift_bridgeObjectRelease(param_4);
      *plVar17 = local_78;
LAB_1008418b0:
      lVar14 = *(long *)(unaff_x20 + 0x40);
      if (*(long *)(lVar14 + 0x10) == 0) {
        lVar16 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar14);
        FUN_1008350fc();
        if ((param_5 & 1) == 0) {
          lVar16 = 0;
        }
        else {
          lVar16 = *(long *)(*(long *)(lVar14 + 0x38) + param_4 * 8);
          _swift_bridgeObjectRetain(lVar16);
        }
        _swift_bridgeObjectRelease(lVar14);
      }
      lVar14 = *(long *)(unaff_x20 + 0x48);
      local_d0 = lVar16;
      if (*(long *)(lVar14 + 0x10) == 0) {
        lVar14 = 0;
        local_c8 = 0;
        local_b8 = 0;
        local_b0 = 0;
      }
      else {
        local_c8 = *(long *)(unaff_x20 + 0x28);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
        uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
        _swift_bridgeObjectRetain(lVar14);
        local_b0 = uVar1;
        _swift_bridgeObjectRetain(uVar1);
        local_b8 = uVar18;
        _swift_bridgeObjectRetain(uVar18);
      }
      _os_unfair_lock_unlock(unaff_x20 + 0x20);
      puVar6 = auStack_f0;
      local_d8 = lVar14;
      if (lVar16 != 0) {
        local_e0 = (ulong *)(lVar16 + 0x40);
        uVar15 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
        uVar13 = 0xffffffffffffffff;
        if ((*(byte *)(lVar16 + 0x20) & 0x3f) < 6) {
          uVar13 = ~(-1L << (uVar15 & 0x3f));
        }
        uVar13 = uVar13 & *local_e0;
        puVar9 = &DAT_100fe7688;
        local_bc = uVar24;
        FUN_1000f7830(&DAT_100fe7688,&DAT_100c7cc80);
        local_a8 = (undefined1 *)
                   (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        puVar23 = auStack_f0 + -(long)local_a8;
        puVar22 = (undefined1 *)(uVar15 + 0x3f >> 6);
        local_e8 = auStack_f0;
        _swift_bridgeObjectRetain(lVar16);
        puVar7 = puVar23;
        puVar6 = (undefined1 *)0x0;
        local_90 = puVar23;
        do {
          lVar14 = local_d0;
          puVar9 = &DAT_100fe7690;
          lVar16 = (long)puVar7 - (long)local_a8;
          puVar19 = puVar6;
          if (uVar13 == 0) {
            puVar21 = puVar22;
            if ((long)puVar22 <= (long)(puVar6 + 1)) {
              puVar21 = puVar6 + 1;
            }
            puVar21 = puVar21 + -1;
            do {
              puVar19 = puVar6 + 1;
              if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100842078);
                (*pcVar5)();
              }
              if ((long)puVar22 <= (long)puVar19) {
                FUN_1000f7830(&DAT_100fe7690,&DAT_100c7cc88);
                (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar16,1,1,puVar9);
                uVar13 = 0;
                goto LAB_100841afc;
              }
              uVar13 = local_e0[(long)puVar19];
              puVar6 = puVar6 + 1;
            } while (uVar13 == 0);
          }
          uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar13 = uVar13 - 1 & uVar13;
          uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | (long)puVar19 << 6;
          lVar20 = *(long *)(local_d0 + 0x30);
          UVar10 = Foundation::UUID::typeMetadataAccessor();
          (**(code **)(*(long *)(UVar10.unknown + -8) + 0x10))
                    (lVar16,lVar20 + *(long *)(*(long *)(UVar10.unknown + -8) + 0x48) * uVar15,
                     UVar10.unknown);
          FUN_1000f7830(&DAT_100fe7690,&DAT_100c7cc88);
          iVar4 = *(int *)(puVar9 + 0x30);
          lVar14 = *(long *)(lVar14 + 0x38);
          puVar11 = &DAT_100fe6fb8;
          FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
          (**(code **)(*(long *)(puVar11 + -8) + 0x10))
                    (lVar16 + iVar4,lVar14 + *(long *)(*(long *)(puVar11 + -8) + 0x48) * uVar15,
                     puVar11);
          (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar16,0,1,puVar9);
          puVar21 = puVar19;
          puVar23 = local_90;
LAB_100841afc:
          puVar9 = &DAT_100fe7690;
          FUN_10011532c(lVar16,puVar23,&DAT_100fe7688,&DAT_100c7cc80);
          FUN_1000f7830(&DAT_100fe7690,&DAT_100c7cc88);
          puVar6 = puVar23;
          (**(code **)(*(long *)(puVar9 + -8) + 0x30))(puVar23,1,puVar9);
          lVar16 = local_d0;
          if ((int)puVar6 == 1) goto LAB_100841c98;
          puVar11 = &DAT_100fe6fb8;
          FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
          lVar25 = *(long *)(puVar11 + -8);
          lVar14 = (long)puVar7 - (*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
          local_88 = puVar7;
          local_80 = puVar21;
          (**(code **)(lVar25 + 0x20))(lVar14,puVar23 + *(int *)(puVar9 + 0x30),puVar11);
          puVar9 = &DAT_100fe7698;
          FUN_1000f7830(&DAT_100fe7698,&DAT_100c7cc98);
          lVar16 = *(long *)(puVar9 + -8);
          lVar20 = lVar14 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
          local_78 = (long)local_a0;
          uStack_70 = local_98;
          local_68 = CONCAT62(local_68._2_6_,(short)local_bc);
          FUN_1007fb28c();
          Swift::AsyncStream::Continuation::_yield(lVar20,&local_78,puVar11);
          puVar23 = local_90;
          (**(code **)(lVar16 + 8))(lVar20,puVar9);
          (**(code **)(lVar25 + 8))(lVar14,puVar11);
          UVar10 = Foundation::UUID::typeMetadataAccessor();
          (**(code **)(*(long *)(UVar10.unknown + -8) + 8))(puVar23,UVar10.unknown);
          puVar7 = local_88;
          puVar6 = local_80;
        } while( true );
      }
      goto LAB_100841cb0;
    }
  }
  else {
    _swift_bridgeObjectRetain(lVar14);
    lVar16 = param_4;
    uVar13 = param_5;
    FUN_1008350fc();
    if ((uVar13 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_1008417e8;
    }
    puVar12 = (ulong *)(*(long *)(lVar14 + 0x38) + lVar16 * 0x18);
    uVar13 = *puVar12;
    uVar15 = puVar12[1];
    uVar2 = (undefined1)puVar12[2];
    bVar3 = *(byte *)((long)puVar12 + 0x11);
    FUN_1007fb2a0(uVar13,uVar15,uVar2);
    _swift_bridgeObjectRelease(lVar14);
    if ((uVar24 & 0xff00) == 0x200) {
      FUN_1007fb2ec(uVar13,uVar15,uVar2);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRetain(param_5);
      FUN_100846660(param_4,param_5);
      FUN_1007fb2d8();
      _swift_bridgeObjectRelease(param_5);
      _swift_bridgeObjectRelease(param_4);
      goto LAB_1008418b0;
    }
    uVar8 = uVar13;
    FUN_100802964(uVar13,uVar15,uVar2,local_a0,local_98,param_3);
    FUN_1007fb2ec(uVar13,uVar15,uVar2);
    if (((uVar8 & 1) == 0) || ((((param_3 & 0x100) == 0 ^ bVar3) & 1) == 0)) goto LAB_100841844;
  }
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  lVar16 = 0;
  goto LAB_100842004;
LAB_100841c98:
  _swift_release(local_d0);
  puVar6 = local_e8;
LAB_100841cb0:
  lVar14 = local_d8;
  if (local_d8 != 0) {
    local_a0 = (ulong *)(local_d8 + 0x40);
    uVar15 = 1L << ((ulong)*(byte *)(local_d8 + 0x20) & 0x3f);
    uVar13 = 0xffffffffffffffff;
    if ((*(byte *)(local_d8 + 0x20) & 0x3f) < 6) {
      uVar13 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar13 = uVar13 & *local_a0;
    puVar9 = &DAT_100fe7670;
    FUN_1000f7830(&DAT_100fe7670,&DAT_100c7cc60);
    local_98 = *(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    puVar23 = puVar6 + -local_98;
    puVar22 = (undefined1 *)(uVar15 + 0x3f >> 6);
    local_a8 = puVar6;
    _swift_bridgeObjectRetain(lVar14);
    _swift_bridgeObjectRetain(local_b0);
    _swift_bridgeObjectRetain(local_b8);
    puVar7 = puVar23;
    puVar6 = (undefined1 *)0x0;
    local_90 = puVar23;
    do {
      lVar14 = local_d8;
      puVar9 = &DAT_100fe7678;
      lVar16 = (long)puVar7 - local_98;
      puVar19 = puVar6;
      if (uVar13 == 0) {
        puVar21 = puVar22;
        if ((long)puVar22 <= (long)(puVar6 + 1)) {
          puVar21 = puVar6 + 1;
        }
        puVar21 = puVar21 + -1;
        do {
          puVar19 = puVar6 + 1;
          if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10084207c);
            (*pcVar5)();
          }
          if ((long)puVar22 <= (long)puVar19) {
            FUN_1000f7830(&DAT_100fe7678,&DAT_100c7cc68);
            (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar16,1,1,puVar9);
            uVar13 = 0;
            goto LAB_100841e64;
          }
          uVar13 = local_a0[(long)puVar19];
          puVar6 = puVar6 + 1;
        } while (uVar13 == 0);
      }
      uVar15 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
      uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
      uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 - 1 & uVar13;
      uVar15 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | (long)puVar19 << 6;
      lVar20 = *(long *)(local_d8 + 0x30);
      UVar10 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar10.unknown + -8) + 0x10))
                (lVar16,lVar20 + *(long *)(*(long *)(UVar10.unknown + -8) + 0x48) * uVar15,
                 UVar10.unknown);
      FUN_1000f7830(&DAT_100fe7678,&DAT_100c7cc68);
      iVar4 = *(int *)(puVar9 + 0x30);
      lVar14 = *(long *)(lVar14 + 0x38);
      puVar11 = &DAT_100fe6fd0;
      FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
      (**(code **)(*(long *)(puVar11 + -8) + 0x10))
                (lVar16 + iVar4,lVar14 + *(long *)(*(long *)(puVar11 + -8) + 0x48) * uVar15,puVar11)
      ;
      (**(code **)(*(long *)(puVar9 + -8) + 0x38))(lVar16,0,1,puVar9);
      puVar21 = puVar19;
      puVar23 = local_90;
LAB_100841e64:
      puVar9 = &DAT_100fe7678;
      FUN_10011532c(lVar16,puVar23,&DAT_100fe7670,&DAT_100c7cc60);
      FUN_1000f7830(&DAT_100fe7678,&DAT_100c7cc68);
      puVar6 = puVar23;
      (**(code **)(*(long *)(puVar9 + -8) + 0x30))(puVar23,1,puVar9);
      lVar14 = local_d8;
      if ((int)puVar6 == 1) {
        _swift_release(local_d8);
        uVar18 = local_b0;
        uVar1 = local_b8;
        FUN_1008474c8(lVar14,local_c8,local_b0,local_b8);
        _swift_bridgeObjectRelease(uVar1);
        _swift_bridgeObjectRelease(uVar18);
        _swift_bridgeObjectRelease(local_d0);
        return;
      }
      puVar11 = &DAT_100fe6fd0;
      FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
      lVar20 = *(long *)(puVar11 + -8);
      lVar16 = (long)puVar7 - (*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_88 = puVar21;
      local_80 = puVar7;
      (**(code **)(lVar20 + 0x20))(lVar16,puVar23 + *(int *)(puVar9 + 0x30),puVar11);
      puVar9 = &DAT_100fe7680;
      FUN_1000f7830(&DAT_100fe7680,&DAT_100c7cc78);
      uVar1 = local_b8;
      lVar25 = *(long *)(puVar9 + -8);
      lVar14 = lVar16 - (*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_78 = local_c8;
      uStack_70 = local_b0;
      local_68 = local_b8;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar1);
      Swift::AsyncStream::Continuation::_yield(lVar14,&local_78,puVar11);
      (**(code **)(lVar25 + 8))(lVar14,puVar9);
      (**(code **)(lVar20 + 8))(lVar16,puVar11);
      puVar23 = local_90;
      UVar10 = Foundation::UUID::typeMetadataAccessor();
      (**(code **)(*(long *)(UVar10.unknown + -8) + 8))(puVar23,UVar10.unknown);
      puVar7 = local_80;
      puVar6 = local_88;
    } while( true );
  }
LAB_100842004:
  _swift_bridgeObjectRelease(lVar16);
  return;
}



/* Address: 0x10084207c | FUN_10084207c */

void FUN_10084207c(void)

{
  FUN_10084221c(FUN_100842088);
  return;
}



/* Address: 0x100842088 | FUN_100842088 */

void FUN_100842088(undefined8 *param_1,long param_2,long param_3,char *param_4,void *param_5)

{
  void *pvVar1;
  _StringGuts _Var2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  _Var2.unknown = *(undefined **)(param_2 + 0x20);
  FUN_1008479ac();
  Swift::_StringGuts::grow(0x31,_Var2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pvVar1 = *(void **)(param_3 + 0x18);
  pcVar3 = (char *)0x0;
  pvVar4 = (void *)0xe000000000000000;
  if (pvVar1 != (void *)0x0) {
    pcVar3 = *(char **)(param_3 + 0x10);
    _swift_bridgeObjectRetain();
    SVar6.bridgeObject = &SUB_e200000000000000;
    SVar6.str = (char *)0x202c;
    SVar9.bridgeObject = param_5;
    SVar9.str = param_4;
    Swift::String::append(SVar6,SVar9);
    pvVar4 = pvVar1;
  }
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar3;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar5,SVar10);
  _swift_bridgeObjectRelease(pvVar4);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar6,SVar11);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar7.bridgeObject = (void *)0xeb00000000202c73;
  SVar7.str = (char *)0x7265686374617720;
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar7,SVar12);
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar13.bridgeObject = param_5;
  SVar13.str = param_4;
  Swift::String::append(SVar6,SVar13);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar8.bridgeObject = &DAT_e800000000000000;
  SVar8.str = (char *)0x5d7365756c617620;
  SVar14.bridgeObject = param_5;
  SVar14.str = param_4;
  Swift::String::append(SVar8,SVar14);
  *param_1 = 0xd000000000000018;
  param_1[1] = 0x8000000100db1fb0;
  return;
}



/* Address: 0x100842204 | FUN_100842204 */

void FUN_100842204(undefined8 param_1,undefined8 param_2)

{
  FUN_100842818(param_1,param_2,FUN_100842088);
  return;
}



/* Address: 0x100842210 | FUN_100842210 */

void FUN_100842210(void)

{
  FUN_10084221c(FUN_100842270);
  return;
}



/* Address: 0x10084221c | FUN_10084221c */

undefined1  [16] FUN_10084221c(code *param_1)

{
  long unaff_x20;
  undefined1 local_40 [16];
  
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  (*param_1)(local_40,unaff_x20 + 0x28);
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  return local_40;
}



/* Address: 0x100842270 | FUN_100842270 */

void FUN_100842270(undefined8 *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  char cVar3;
  byte bVar4;
  code *pcVar5;
  char *pcVar6;
  String *pSVar7;
  String *pSVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined *puVar18;
  char *pcVar19;
  String *pSVar20;
  void *pvVar21;
  long unaff_x21;
  char *pcVar22;
  char *pcVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String separator;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  byte local_99;
  char *local_98;
  void *pvStack_90;
  String local_88;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *pvVar16;
  _StringGuts _Var17;
  
  lVar1 = *(long *)(param_2 + 0x10);
  pcVar6 = *(char **)(param_2 + 0x18);
  FUN_1008479ac(pcVar6,*(undefined8 *)(param_2 + 0x20));
  pcVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  pSVar20 = *(String **)(lVar1 + 0x10);
  pSVar7 = (String *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (pSVar20 != (String *)0x0) {
    _swift_bridgeObjectRetain(lVar1);
    pSVar7 = pSVar20;
    FUN_100835c00(pSVar20,0);
    pSVar8 = &local_88;
    FUN_100837ad8(pSVar8,pSVar7 + 2,pSVar20,lVar1);
    FUN_10000c650(local_88.str,local_88.bridgeObject,local_78,uStack_70,local_68);
    if (pSVar8 != pSVar20) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10084230c);
      (*pcVar5)();
    }
  }
  local_88.str = (char *)pSVar7;
  FUN_10083f89c(&local_88);
  pcVar13 = local_88.str;
  if (unaff_x21 != 0) {
    _swift_release(local_88.str);
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10084280c);
    (*pcVar5)();
  }
  lVar24 = *(long *)(local_88.str + 0x10);
  if (lVar24 == 0) {
    _swift_release(local_88.str);
    pcVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10083547c(0,lVar24,0);
    pcVar14 = pcVar13 + 0x41;
    do {
      pcVar9 = *(char **)(pcVar14 + -0x21);
      pcVar23 = *(char **)(pcVar14 + -0x19);
      pcVar22 = *(char **)(pcVar14 + -0x11);
      pvVar21 = *(void **)(pcVar14 + -9);
      bVar4 = pcVar14[-1];
      pcVar19 = (char *)(ulong)bVar4;
      cVar3 = *pcVar14;
      local_88.str = pcVar9;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(pcVar23);
      FUN_1007fb2a0(pcVar22,pvVar21,pcVar19);
      pcVar10 = &DAT_100fe6f38;
      FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
      pcVar11 = pcVar10;
      FUN_1007ff838();
      SVar25.bridgeObject = (void *)0xe100000000000000;
      SVar25.str = (char *)0x2e;
      SVar25 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar25);
      pvVar16 = SVar25.bridgeObject;
      pcVar12 = pcVar23;
      FUN_1007fe864();
      uVar2 = (ulong)pcVar12 & 0xffffffffffff;
      if (((ulong)pvVar16 & 0x2000000000000000) != 0) {
        uVar2 = (ulong)pvVar16 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        _swift_bridgeObjectRelease(pvVar16);
      }
      else {
        SVar39.bridgeObject = &SUB_e200000000000000;
        SVar39.str = (char *)0x5b20;
        SVar43.bridgeObject = pcVar11;
        SVar43.str = pcVar10;
        local_88 = SVar25;
        Swift::String::append(SVar39,SVar43);
        SVar26.bridgeObject = pvVar16;
        SVar26.str = pcVar12;
        SVar44.bridgeObject = pcVar11;
        SVar44.str = pcVar10;
        Swift::String::append(SVar26,SVar44);
        _swift_bridgeObjectRelease(pvVar16);
        SVar27.bridgeObject = (void *)0xe100000000000000;
        SVar27.str = (char *)0x5d;
        SVar45.bridgeObject = pcVar11;
        SVar45.str = pcVar10;
        Swift::String::append(SVar27,SVar45);
        SVar25 = local_88;
      }
      SVar28.bridgeObject = (void *)0xe100000000000000;
      SVar28.str = (char *)0x3d;
      _Var17.unknown = (undefined *)0xe100000000000000;
      SVar46.bridgeObject = pcVar11;
      SVar46.str = pcVar10;
      local_88 = SVar25;
      Swift::String::append(SVar28,SVar46);
      if (cVar3 == '\0') {
        local_98 = (char *)0x0;
        pvStack_90 = (void *)0xe000000000000000;
        SVar31.bridgeObject = (void *)0xe100000000000000;
        SVar31.str = (char *)0x5b;
        SVar49.bridgeObject = pcVar11;
        SVar49.str = pcVar10;
        Swift::String::append(SVar31,SVar49);
        pcVar10 = "\x01\x02";
        puVar18 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_99 = bVar4;
        Swift::__print_unlocked
                  (&local_99,&local_98,&DAT_100f046d8,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar32.bridgeObject = &SUB_e200000000000000;
        SVar32.str = (char *)0x203a;
        SVar50.bridgeObject = puVar18;
        SVar50.str = pcVar10;
        Swift::String::append(SVar32,SVar50);
        pcVar11 = pcVar22;
        pvVar16 = pvVar21;
        pcVar10 = pcVar19;
        FUN_1008017c0();
        SVar33.bridgeObject = pvVar16;
        SVar33.str = pcVar11;
        SVar51.bridgeObject = puVar18;
        SVar51.str = pcVar10;
        Swift::String::append(SVar33,SVar51);
        _swift_bridgeObjectRelease(pvVar16);
        SVar34.bridgeObject = (void *)0xe100000000000000;
        SVar34.str = (char *)0x5d;
        SVar52.bridgeObject = puVar18;
        SVar52.str = pcVar10;
        Swift::String::append(SVar34,SVar52);
      }
      else {
        local_98 = (char *)0x0;
        pvStack_90 = (void *)0xe000000000000000;
        Swift::_StringGuts::grow(0x10,_Var17);
        SVar29.bridgeObject = (void *)0xe100000000000000;
        SVar29.str = (char *)0x5b;
        SVar47.bridgeObject = pcVar11;
        SVar47.str = pcVar10;
        Swift::String::append(SVar29,SVar47);
        pcVar10 = "\x01\x02";
        puVar18 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        local_99 = bVar4;
        Swift::__print_unlocked
                  (&local_99,&local_98,&DAT_100f046d8,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar30.bridgeObject = (void *)0xed00005d3e444554;
        SVar30.str = (char *)0x43414445523c203a;
        SVar48.bridgeObject = puVar18;
        SVar48.str = pcVar10;
        Swift::String::append(SVar30,SVar48);
      }
      pvVar16 = pvStack_90;
      SVar35.bridgeObject = pvStack_90;
      SVar35.str = local_98;
      SVar53.bridgeObject = puVar18;
      SVar53.str = pcVar10;
      Swift::String::append(SVar35,SVar53);
      _swift_bridgeObjectRelease(pcVar23);
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(pvVar16);
      FUN_1007fb2ec(pcVar22,pvVar21,pcVar19);
      pcVar10 = local_88.str;
      pvVar16 = local_88.bridgeObject;
      uVar2 = *(ulong *)(pcVar15 + 0x10);
      if (*(ulong *)(pcVar15 + 0x18) >> 1 <= uVar2) {
        FUN_10083547c(1 < *(ulong *)(pcVar15 + 0x18),uVar2 + 1,1);
      }
      *(ulong *)(pcVar15 + 0x10) = uVar2 + 1;
      *(char **)(pcVar15 + uVar2 * 0x10 + 0x20) = pcVar10;
      *(void **)(pcVar15 + uVar2 * 0x10 + 0x28) = pvVar16;
      pcVar14 = pcVar14 + 0x28;
      lVar24 = lVar24 + -1;
    } while (lVar24 != 0);
    _swift_release(pcVar13);
  }
  pcVar13 = &DAT_100fe6f38;
  local_88.str = pcVar15;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar14 = pcVar13;
  FUN_1007ff838();
  separator.bridgeObject = &SUB_e200000000000000;
  separator.str = (char *)0x202c;
  SVar25 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _Var17.unknown = SVar25.bridgeObject;
  _swift_bridgeObjectRelease(pcVar15);
  local_88.str = (char *)0x0;
  local_88.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x35,_Var17);
  SVar36.bridgeObject = (void *)0x8000000100db1fb0;
  SVar36.str = (char *)0xd000000000000018;
  SVar54.bridgeObject = pcVar14;
  SVar54.str = pcVar13;
  Swift::String::append(SVar36,SVar54);
  pcVar15 = (char *)0x0;
  pvVar16 = (void *)0xe000000000000000;
  if (*(void **)(param_3 + 0x18) != (void *)0x0) {
    local_98 = *(char **)(param_3 + 0x10);
    pvStack_90 = *(void **)(param_3 + 0x18);
    _swift_bridgeObjectRetain();
    SVar37.bridgeObject = &SUB_e200000000000000;
    SVar37.str = (char *)0x202c;
    SVar55.bridgeObject = pcVar14;
    SVar55.str = pcVar13;
    Swift::String::append(SVar37,SVar55);
    pcVar15 = local_98;
    pvVar16 = pvStack_90;
  }
  SVar38.bridgeObject = pvVar16;
  SVar38.str = pcVar15;
  SVar56.bridgeObject = pcVar14;
  SVar56.str = pcVar13;
  Swift::String::append(SVar38,SVar56);
  _swift_bridgeObjectRelease(pvVar16);
  local_98 = pcVar6;
  SVar39 = Swift::CustomStringConvertible::get_description();
  SVar57.bridgeObject = pcVar14;
  SVar57.str = pcVar13;
  Swift::String::append(SVar39,SVar57);
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  SVar40.bridgeObject = (void *)0xeb00000000202c73;
  SVar40.str = (char *)0x7265686374617720;
  SVar58.bridgeObject = pcVar14;
  SVar58.str = pcVar13;
  Swift::String::append(SVar40,SVar58);
  local_98 = *(char **)(lVar1 + 0x10);
  SVar39 = Swift::CustomStringConvertible::get_description();
  SVar59.bridgeObject = pcVar14;
  SVar59.str = pcVar13;
  Swift::String::append(SVar39,SVar59);
  _swift_bridgeObjectRelease(SVar39.bridgeObject);
  SVar41.bridgeObject = (void *)0xe900000000000020;
  SVar41.str = (char *)0x3a7365756c617620;
  SVar60.bridgeObject = pcVar14;
  SVar60.str = pcVar13;
  Swift::String::append(SVar41,SVar60);
  SVar61.bridgeObject = pcVar14;
  SVar61.str = pcVar13;
  Swift::String::append(SVar25,SVar61);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar42.bridgeObject = (void *)0xe100000000000000;
  SVar42.str = (char *)0x5d;
  SVar62.bridgeObject = pcVar14;
  SVar62.str = pcVar13;
  Swift::String::append(SVar42,SVar62);
  *param_1 = local_88.str;
  param_1[1] = local_88.bridgeObject;
  return;
}



/* Address: 0x10084280c | FUN_10084280c */

void FUN_10084280c(undefined8 param_1,undefined8 param_2)

{
  FUN_100842818(param_1,param_2,FUN_100842270);
  return;
}



/* Address: 0x100842818 | FUN_100842818 */

undefined1  [16] FUN_100842818(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined1 local_40 [16];
  
  lVar1 = *unaff_x20;
  _os_unfair_lock_lock(lVar1 + 0x20);
  (*param_3)(local_40,lVar1 + 0x28,lVar1);
  _os_unfair_lock_unlock(lVar1 + 0x20);
  return local_40;
}



/* Address: 0x100842870 | FUN_100842870 */

void FUN_100842870(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  code *pcVar2;
  UUID UVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  ushort uVar17;
  undefined8 local_80;
  long local_78;
  long lStack_70;
  ushort local_68;
  
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar13 = *(long *)(UVar3.unknown + -8);
  lVar14 = (long)&local_80 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  (**(code **)(lVar13 + 0x10))(lVar14,param_2,UVar3.unknown);
  puVar4 = &DAT_100fe71d8;
  FUN_1000f7830(&DAT_100fe71d8,&DAT_100c7bad8);
  lVar16 = lVar14 - (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fe6fb8;
  FUN_1000f7830(&DAT_100fe6fb8,&DAT_100c7cc90);
  lVar13 = *(long *)(puVar4 + -8);
  local_80 = param_1;
  (**(code **)(lVar13 + 0x10))(lVar16,param_1,puVar4);
  (**(code **)(lVar13 + 0x38))(lVar16,0,1,puVar4);
  uVar5 = *(ulong *)(unaff_x20 + 0x40);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar11 = *(long *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = 0x8000000000000000;
  uVar6 = param_3;
  uVar8 = param_4;
  local_78 = lVar11;
  FUN_1008350fc();
  uVar10 = (ulong)~(uint)uVar8 & 1;
  lVar13 = *(long *)(lVar11 + 0x10) + uVar10;
  if (SCARRY8(*(long *)(lVar11 + 0x10),uVar10)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100842b94);
    (*pcVar2)();
  }
  if (*(long *)(lVar11 + 0x18) < lVar13) {
    FUN_10084534c(lVar13,uVar5);
    lVar11 = local_78;
    uVar6 = param_3;
    uVar5 = param_4;
    FUN_1008350fc();
    if (((uint)uVar8 & 1) != ((uint)uVar5 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100842bb8);
      (*pcVar2)();
    }
  }
  else if ((uVar5 & 1) == 0) {
    FUN_100844644();
    lVar11 = local_78;
  }
  uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x20 + 0x40) = lVar11;
  _swift_retain(lVar11);
  _swift_bridgeObjectRelease(uVar12);
  if ((uVar8 & 1) == 0) {
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100800a60();
    lVar13 = lVar11 + (uVar6 >> 6) * 8;
    *(ulong *)(lVar13 + 0x40) = *(ulong *)(lVar13 + 0x40) | 1L << (uVar6 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar6 * 0x10);
    *puVar1 = param_3;
    puVar1[1] = param_4;
    *(undefined **)(*(long *)(lVar11 + 0x38) + uVar6 * 8) = puVar7;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100842ba8);
      (*pcVar2)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRetain(param_4);
  }
  _swift_release(lVar11);
  FUN_10084109c(lVar16,lVar14);
  puVar7 = &DAT_100fe7698;
  FUN_1000f7830(&DAT_100fe7698,&DAT_100c7cc98);
  lVar11 = *(long *)(puVar7 + -8);
  lVar16 = lVar16 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(unaff_x20 + 0x38);
  if (*(long *)(lVar13 + 0x10) == 0) {
    lVar14 = 0;
    lVar15 = 0;
    local_68 = 0x200;
  }
  else {
    _swift_bridgeObjectRetain(lVar13);
    FUN_1008350fc();
    if ((param_4 & 1) == 0) {
      lVar14 = 0;
      lVar15 = 0;
      uVar17 = 0x200;
    }
    else {
      plVar9 = (long *)(*(long *)(lVar13 + 0x38) + param_3 * 0x18);
      lVar14 = *plVar9;
      lVar15 = plVar9[1];
      uVar17 = 0x100;
      if (*(char *)((long)plVar9 + 0x11) == '\0') {
        uVar17 = 0;
      }
      uVar17 = uVar17 | *(byte *)(plVar9 + 2);
      FUN_1007fb2a0(lVar14,lVar15);
    }
    _swift_bridgeObjectRelease(lVar13);
    local_68 = uVar17;
  }
  local_78 = lVar14;
  lStack_70 = lVar15;
  Swift::AsyncStream::Continuation::_yield(lVar16,&local_78,puVar4);
  (**(code **)(lVar11 + 8))(lVar16,puVar7);
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  return;
}



/* Address: 0x100842bb8 | FUN_100842bb8 */

code * FUN_100842bb8(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x23bd);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_100847148();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10022c3e4;
}



/* Address: 0x100842c2c | FUN_100842c2c */

void FUN_100842c2c(undefined8 param_1,undefined8 param_2)

{
  UUID UVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  puVar5 = auStack_70 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _os_unfair_lock_lock(unaff_x20 + 0x20);
  (**(code **)(lVar6 + 0x10))(puVar5,param_2,UVar1.unknown);
  puVar2 = &DAT_100fe71c0;
  FUN_1000f7830(&DAT_100fe71c0,&DAT_100c7cd20);
  lVar7 = (long)puVar5 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fe6fd0;
  FUN_1000f7830(&DAT_100fe6fd0,&DAT_100c7b480);
  lVar6 = *(long *)(puVar2 + -8);
  (**(code **)(lVar6 + 0x10))(lVar7,param_1,puVar2);
  (**(code **)(lVar6 + 0x38))(lVar7,0,1,puVar2);
  FUN_100841290(lVar7,puVar5);
  puVar3 = &DAT_100fe7680;
  FUN_1000f7830(&DAT_100fe7680,&DAT_100c7cc78);
  lVar6 = *(long *)(puVar3 + -8);
  lVar7 = lVar7 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
  local_60 = *(undefined8 *)(unaff_x20 + 0x30);
  _swift_bridgeObjectRetain(local_60);
  _swift_bridgeObjectRetain(uVar4);
  Swift::AsyncStream::Continuation::_yield(lVar7,&local_68,puVar2);
  (**(code **)(lVar6 + 8))(lVar7,puVar3);
  _os_unfair_lock_unlock(unaff_x20 + 0x20);
  return;
}


