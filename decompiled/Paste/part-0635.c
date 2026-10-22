/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006c292c | FUN_1006c292c */

undefined * FUN_1006c292c(long param_1)

{
  int iVar1;
  code *pcVar2;
  undefined *puVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  undefined1 *puVar5;
  CodingUserInfoKey CVar6;
  undefined1 *puVar7;
  long extraout_x8;
  ulong uVar8;
  undefined1 *puVar9;
  undefined *capacity;
  long lVar10;
  long lVar11;
  
  puVar3 = &DAT_100fdc5a0;
  FUN_1000f7830(&DAT_100fdc5a0,&DAT_100c70d48);
  lVar11 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffa0 + -extraout_x8;
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc5a8;
    FUN_1000f7830(&DAT_100fdc5a8,&DAT_100c70d50);
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    iVar1 = *(int *)(puVar3 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
    lVar11 = *(long *)(lVar11 + 0x48);
    _swift_retain();
    do {
      puVar7 = puVar9;
      FUN_1000f8cac(param_1,puVar9,&DAT_100fdc5a0,&DAT_100c70d48);
      puVar5 = puVar9;
      FUN_1006a31e8();
      if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c2ab4);
        (*pcVar2)();
      }
      uVar8 = (ulong)puVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar8 + 0x40) =
           *(ulong *)(puVar4 + uVar8 + 0x40) | 1L << ((ulong)puVar5 & 0x3f);
      lVar10 = *(long *)(puVar4 + 0x30);
      CVar6 = Swift::CodingUserInfoKey::typeMetadataAccessor();
      (**(code **)(*(long *)(CVar6.unknown + -8) + 0x20))
                (lVar10 + *(long *)(*(long *)(CVar6.unknown + -8) + 0x48) * (long)puVar5,puVar9,
                 CVar6.unknown);
      FUN_100011080(puVar9 + iVar1,*(long *)(puVar4 + 0x38) + (long)puVar5 * 0x20);
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006c2ab8);
        (*pcVar2)();
      }
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      param_1 = param_1 + lVar11;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x1006c2ab8 | FUN_1006c2ab8 */

undefined * FUN_1006c2ab8(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  code *pcVar9;
  _DictionaryStorage *this;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined *capacity;
  undefined8 *puVar13;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc498;
    FUN_1000f7830(&DAT_100fdc498,&DAT_100c706c0);
    puVar10 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar13 = (undefined8 *)(param_1 + 0x48);
    do {
      uVar3 = puVar13[-5];
      uVar6 = puVar13[-4];
      uVar4 = puVar13[-3];
      uVar7 = puVar13[-2];
      uVar5 = puVar13[-1];
      uVar8 = *puVar13;
      _swift_bridgeObjectRetain(uVar7);
      _swift_bridgeObjectRetain(uVar8);
      uVar11 = uVar3;
      uVar12 = uVar6;
      FUN_1006a3238(uVar3,uVar6,uVar4,uVar7);
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006c2bd0);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar6;
      puVar1[2] = uVar4;
      puVar1[3] = uVar7;
      puVar2 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x10);
      *puVar2 = uVar5;
      puVar2[1] = uVar8;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006c2bd4);
        (*pcVar9)();
      }
      puVar13 = puVar13 + 6;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}



/* Address: 0x1006c2bd4 | FUN_1006c2bd4 */

undefined * FUN_1006c2bd4(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 uVar8;
  undefined8 *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc488;
    FUN_1000f7830(&DAT_100fdc488,&DAT_100c706b0);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      _swift_bridgeObjectRetain(uVar3);
      _swift_retain(uVar8);
      uVar6 = uVar2;
      uVar7 = uVar3;
      FUN_10046483c();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2ccc);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2cd0);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1006c2cd0 | FUN_1006c2cd0 */

undefined * FUN_1006c2cd0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *capacity;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc480;
    uVar6 = 0;
    FUN_1000f7830();
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      local_98 = puVar11[-3];
      uStack_90 = puVar11[-2];
      local_88 = puVar11[-1];
      uVar2 = *puVar11;
      uVar10 = puVar11[3];
      uVar13 = puVar11[5];
      uVar12 = puVar11[4];
      uVar1 = puVar11[5];
      uVar3 = puVar11[6];
      uStack_70 = puVar11[2];
      local_78 = puVar11[1];
      uStack_80 = uVar2;
      local_68 = uVar10;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar10);
      _swift_retain(uVar12);
      _swift_retain(uVar1);
      _swift_retain(uVar3);
      puVar9 = &local_98;
      FUN_1006a32d4();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2e48);
        (*pcVar4)();
      }
      uVar7 = (ulong)puVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) =
           *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << ((ulong)puVar9 & 0x3f);
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x30) + (long)puVar9 * 0x38);
      puVar8[1] = uStack_90;
      *puVar8 = local_98;
      puVar8[3] = uStack_80;
      puVar8[2] = local_88;
      puVar8[5] = uStack_70;
      puVar8[4] = local_78;
      puVar8[6] = local_68;
      puVar9 = (undefined8 *)(*(long *)(puVar5 + 0x38) + (long)puVar9 * 0x18);
      puVar9[1] = uVar13;
      *puVar9 = uVar12;
      puVar9[2] = uVar3;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006c2e4c);
        (*pcVar4)();
      }
      puVar11 = puVar11 + 10;
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1006c2e4c | FUN_1006c2e4c */

undefined * FUN_1006c2e4c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long extraout_x8;
  ulong uVar9;
  long extraout_x12;
  undefined *capacity;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fdc588;
    FUN_1000f7830(&DAT_100fdc588,&DAT_100c70d30);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  }
  puVar7 = &DAT_100fdc590;
  FUN_1000f7830(&DAT_100fdc590,&DAT_100c70d38);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = (ulong *)(&stack0xffffffffffffffa0 + -extraout_x12);
  if (capacity != (undefined *)0x0) {
    iVar4 = *(int *)(puVar7 + 0x30);
    param_1 = param_1 + ((ulong)*(byte *)(extraout_x8 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(extraout_x8 + 0x50) ^ 0xffffffffffffffff));
    lVar12 = *(long *)(extraout_x8 + 0x48);
    _swift_retain(puVar6);
    do {
      FUN_1000f8cac(param_1,puVar10,&DAT_100fdc590,&DAT_100c70d38);
      uVar2 = *puVar10;
      uVar3 = *(ulong *)(&stack0xffffffffffffffa8 + -extraout_x12);
      uVar8 = uVar2;
      uVar9 = uVar3;
      FUN_10046483c();
      if ((uVar9 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006c2fdc);
        (*pcVar5)();
      }
      uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar9 + 0x40) = *(ulong *)(puVar6 + uVar9 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      lVar11 = *(long *)(puVar6 + 0x38);
      puVar7 = &DAT_100fdc598;
      FUN_1000f7830(&DAT_100fdc598,&DAT_100c70d40);
      FUN_1006c2fe0((long)puVar10 + (long)iVar4,
                    lVar11 + *(long *)(*(long *)(puVar7 + -8) + 0x48) * uVar8);
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1006c2fe0);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      param_1 = param_1 + lVar12;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x1006c2fe0 | FUN_1006c2fe0 */

undefined8 FUN_1006c2fe0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdc598;
  FUN_1000f7830(&DAT_100fdc598,&DAT_100c70d40);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006c3030 | FUN_1006c3030 */

void FUN_1006c3030(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1006c1418(plVar5,param_1,param_2,uVar6,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1006c30c8 | FUN_1006c30c8 */

void FUN_1006c30c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_1005c804c;
  FUN_1006c1cf0(plVar5,param_1,param_2,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x1006c3150 | FUN_1006c3150 */

undefined8 FUN_1006c3150(undefined8 param_1)

{
  FUN_100a572c8();
  return param_1;
}



/* Address: 0x1006c3184 | FUN_1006c3184 */

undefined1  [16] FUN_1006c3184(void)

{
  return ZEXT816(0x100ef8218);
}



/* Address: 0x1006c3194 | thunk_FUN_1006c3198 */

void thunk_FUN_1006c3198(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70dd0,&DAT_100ef8218);
  DAT_100fdc5c0 = pTVar1;
  return;
}



/* Address: 0x1006c3198 | FUN_1006c3198 */

void FUN_1006c3198(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc5c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c70dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c70dd0,&DAT_100ef8218);
  DAT_100fdc5c0 = pTVar1;
  return;
}



/* Address: 0x1006c31d8 | thunk_FUN_1006c24c8 */

void thunk_FUN_1006c24c8(void)

{
  FUN_1006c24c8();
  return;
}



/* Address: 0x1006c31dc | thunk_FUN_1006c1c28 */

void thunk_FUN_1006c1c28(void)

{
  thunk_FUN_1006c1c28();
  return;
}



/* Address: 0x1006c31e0 | FUN_1006c31e0 */

void FUN_1006c31e0(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  long unaff_x20;
  
  lVar2 = 0;
  FUN_1006c322c();
  iVar1 = *(int *)(lVar2 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006c3228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar3.unknown);
  return;
}



/* Address: 0x1006c322c | FUN_1006c322c */

void FUN_1006c322c(undefined8 param_1)

{
  if (DAT_100fdc658 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cbb8a4);
  return;
}



/* Address: 0x1006c3264 | FUN_1006c3264 */

void FUN_1006c3264(undefined8 param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006c32a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1006c32a8 | thunk_FUN_1006c3bdc */

void thunk_FUN_1006c3bdc(void)

{
  FUN_1006c3bdc();
  return;
}



/* Address: 0x1006c32ac | thunk_FUN_1006c3950 */

void thunk_FUN_1006c3950(void)

{
  FUN_1006c3950();
  return;
}



/* Address: 0x1006c32b0 | FUN_1006c32b0 */

void FUN_1006c32b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x1f8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_2;
  _swift_task_switch(FUN_1006c32d0,0,0);
  return;
}



/* Address: 0x1006c32d0 | FUN_1006c32d0 */

void FUN_1006c32d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_bridgeObjectRetain(uVar1);
  thunk_FUN_1005b3cd0(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar2;
  plVar3 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1006c3358;
  FUN_100a6d674(plVar3,unaff_x22 + 0xe8,uVar2,0,*(undefined8 *)(unaff_x22 + 0x1d8),
                *(undefined1 *)(unaff_x22 + 0x1f8));
  return;
}



/* Address: 0x1006c3358 | FUN_1006c3358 */

void FUN_1006c3358(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1e0);
  *(long *)(lVar3 + 0x1f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1e8));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1006c33c4;
  }
  else {
    pcVar2 = FUN_1006c34e0;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1006c33c4 | FUN_1006c33c4 */

void FUN_1006c33c4(void)

{
  bool bVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  long unaff_x22;
  undefined8 uVar5;
  long lVar6;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0xf0);
  *(undefined8 *)(unaff_x22 + 0x10) = *(undefined8 *)(unaff_x22 + 0xe8);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x100);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0xf8);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xb0) = *(undefined8 *)(unaff_x22 + 0x188);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x148);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0x98) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0x90) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xa8) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x108);
  *(undefined8 *)(unaff_x22 + 0x48) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 *)(unaff_x22 + 0x50) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0x138);
  lVar3 = unaff_x22 + 0x10;
  FUN_1006c09cc();
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    pbVar4 = *(byte **)(unaff_x22 + 0x1c0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xa8);
    bVar2 = *(byte *)(unaff_x22 + 0xa1);
    lVar6 = *(long *)(unaff_x22 + 200);
    FUN_100403254();
    FUN_1001a7d78(bVar2,lVar3);
    lVar3 = 0;
    FUN_1006c322c();
    Foundation::Date::init((double)lVar6);
    *pbVar4 = bVar2 & 1;
    *(undefined8 *)(pbVar4 + 8) = uVar5;
  }
  else {
    lVar3 = 0;
    FUN_1006c322c();
  }
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x1c0),!bVar1,1,lVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006c34dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c34e0 | FUN_1006c34e0 */

void FUN_1006c34e0(void)

{
  long lVar1;
  long unaff_x22;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1f0));
  lVar1 = 0;
  FUN_1006c322c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(*(undefined8 *)(unaff_x22 + 0x1c0),1,1);
                    /* WARNING: Could not recover jumptable at 0x0001006c353c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006c3540 | FUN_1006c3540 */

void FUN_1006c3540(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1006c36c4;
  FUN_1006c3b2c(unaff_x22 + 0x10,param_2,param_3,param_4,param_7,param_8,param_9,param_10);
  return;
}



/* Address: 0x1006c35f8 | FUN_1006c35f8 */

void FUN_1006c35f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined1 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006c36c4;
  FUN_1006c3a6c(unaff_x22 + 0x10,param_2,param_3,param_4,param_5,param_6,param_9,param_10);
  return;
}



/* Address: 0x1006c36c4 | FUN_1006c36c4 */

void FUN_1006c36c4(void)

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
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar2 + 0x38);
    uVar5 = *(undefined8 *)(lVar2 + 0x18);
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    uVar7 = *(undefined8 *)(lVar2 + 0x28);
    uVar6 = *(undefined8 *)(lVar2 + 0x20);
    *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(lVar2 + 0x30);
    puVar1[1] = uVar5;
    *puVar1 = uVar4;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006c371c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1006c3720 | FUN_1006c3720 */

void FUN_1006c3720(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1006c3950(param_2,param_3,*unaff_x20,unaff_x20[1]);
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006c3748 | FUN_1006c3748 */

void FUN_1006c3748(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x200;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1005c804c;
  FUN_1006c32b0(plVar4,param_1,uVar1,uVar2,param_4,param_5,uVar5,uVar3);
  return;
}



/* Address: 0x1006c37cc | FUN_1006c37cc */

void FUN_1006c37cc(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar4 = (long *)0x50;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x18);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1006c36c4;
  FUN_1006c3b2c(unaff_x22 + 0x10,uVar1,uVar2,param_3,uVar5,uVar3,param_4,param_5);
  return;
}



/* Address: 0x1006c3884 | FUN_1006c3884 */

void FUN_1006c3884(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar5;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  plVar4 = (long *)0x50;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x18);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1006c36c4;
  FUN_1006c3a6c(unaff_x22 + 0x10,uVar1,uVar2,param_3,param_4,param_5,uVar5,uVar3);
  return;
}



/* Address: 0x1006c3950 | FUN_1006c3950 */

undefined1  [16] FUN_1006c3950(char *param_1,char *param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  bool bVar2;
  _StringGuts _Var3;
  char *pcVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  void *pvVar8;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar9;
  
  _Var3.unknown = param_1;
  _Var5.unknown = param_2;
  pcVar6 = param_3;
  pvVar7 = param_4;
  FUN_1005d6258();
  if (_Var5.unknown == (undefined *)0x0) {
LAB_1006c3a34:
    _swift_bridgeObjectRetain(param_4);
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    SVar12.bridgeObject = pvVar7;
    SVar12.str = pcVar6;
    Swift::String::append(SVar9,SVar12);
  }
  else {
    if ((_Var3.unknown == (undefined *)0x2f) && (_Var5.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      pcVar6 = (char *)0x2f;
      pvVar7 = (void *)0xe100000000000000;
      bVar2 = Swift::_stringCompareWithSmolCheck(_Var3,_Var5,(_StringComparisonResult)0x2f);
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (!bVar2) goto LAB_1006c3a34;
    }
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(param_2);
    pcVar4 = &DAT_00000001;
    pcVar6 = param_2;
    FUN_100108f9c();
    _swift_bridgeObjectRelease(param_2);
    SVar10.bridgeObject = param_1;
    SVar10.str = pcVar4;
    pvVar8 = pvVar7;
    SVar9 = Swift::String::__fromSubstring(SVar10);
    SVar11.bridgeObject = pvVar8;
    SVar11.str = pcVar6;
    Swift::String::append(SVar9,SVar11);
    _swift_bridgeObjectRelease(pvVar7);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
  }
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1006c3a6c | FUN_1006c3a6c */

void FUN_1006c3a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x230;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1006c36c4;
  FUN_1006c0a20(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4,param_5,param_6,0x20000,param_7,
                param_8);
  return;
}



/* Address: 0x1006c3b2c | FUN_1006c3b2c */

void FUN_1006c3b2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1006c36c4;
  FUN_1006c0568(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4,0x20000,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x1006c3bdc | FUN_1006c3bdc */

char * FUN_1006c3bdc(char *param_1,undefined *param_2,char *param_3,void *param_4)

{
  bool bVar1;
  _StringGuts _Var2;
  UnsafePointer<__int8> cString;
  _StringGuts _Var3;
  void *pvVar4;
  char *pcVar5;
  void *pvVar6;
  char *pcVar7;
  undefined1 *puVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char *local_1d0;
  undefined1 auStack_1c8 [96];
  undefined1 auStack_168 [24];
  undefined *local_150;
  long lStack_148;
  undefined1 local_140 [8];
  char *local_138;
  void *pvStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [24];
  String local_c8;
  void *pvStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  _Var2.unknown = param_1;
  _Var3.unknown = param_2;
  pvVar6 = param_4;
  FUN_1006d60e4();
  if (_Var3.unknown == (undefined *)0x0) {
LAB_1006c3c6c:
    local_c8.bridgeObject = param_2;
    local_c8.str = param_1;
    _swift_bridgeObjectRetain(param_2);
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0x2f;
    SVar13.bridgeObject = pvVar6;
    SVar13.str = param_3;
    Swift::String::append(SVar9,SVar13);
    pcVar7 = local_c8.str;
  }
  else {
    if ((_Var2.unknown == (undefined *)0x2f) && (_Var3.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_3 = (char *)0x2f;
      pvVar6 = (void *)0xe100000000000000;
      bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x2f);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar1) goto LAB_1006c3c6c;
    }
    _swift_bridgeObjectRetain(param_2);
    pcVar7 = param_1;
  }
  _Var2.unknown = param_1;
  _Var3.unknown = param_2;
  FUN_1005d6258();
  if (_Var3.unknown == (undefined *)0x0) {
LAB_1006c3cec:
    cString.unknown = _getcwd((char *)0x0,0x400);
    if (cString.unknown == (undefined *)0x0) {
      puVar8 = &SUB_e200000000000000;
      local_1d0 = (char *)0x2f2e;
    }
    else {
      local_c8 = Swift::String::init(cString);
      pvVar4 = local_c8.bridgeObject;
      _swift_bridgeObjectRetain(pvVar4);
      SVar10.bridgeObject = (void *)0xe100000000000000;
      SVar10.str = (char *)0x2f;
      SVar14.bridgeObject = pvVar6;
      SVar14.str = param_3;
      Swift::String::append(SVar10,SVar14);
      _swift_bridgeObjectRelease(pvVar4);
      puVar8 = local_c8.bridgeObject;
      local_1d0 = local_c8.str;
      _free(cString.unknown);
    }
  }
  else {
    if ((_Var2.unknown == (undefined *)0x2f) && (_Var3.unknown == (undefined *)0xe100000000000000))
    {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      param_3 = (char *)0x2f;
      pvVar6 = (void *)0xe100000000000000;
      bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x2f);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar1) goto LAB_1006c3cec;
    }
    local_1d0 = (char *)0x0;
    puVar8 = (undefined1 *)0xe000000000000000;
  }
  pcVar5 = (char *)0x0;
  pvVar6 = (void *)0x0;
  _swift_beginAccess((long)param_4 + 0x20,auStack_e0);
  FUN_100076688((long)param_4 + 0x20,&local_c8);
  FUN_100004640(&local_c8,local_b0);
  (**(code **)(lStack_a8 + 0x70))(local_b0,lStack_a8);
  FUN_100004594(&local_c8);
  if (((uint)local_b0 & 0xff) < 3) {
    FUN_100076688((long)param_4 + 0x20,auStack_168);
    _Var2.unknown = local_150;
    FUN_100004640();
    local_c8.str = (char *)0x0;
    local_c8.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x17,_Var2);
    _swift_bridgeObjectRelease(local_c8.bridgeObject);
    local_c8.bridgeObject = (void *)0x8000000100db02c0;
    local_c8.str = (char *)0xd000000000000013;
    SVar11.bridgeObject = puVar8;
    SVar11.str = local_1d0;
    SVar15.bridgeObject = pvVar6;
    SVar15.str = pcVar5;
    Swift::String::append(SVar11,SVar15);
    SVar12.bridgeObject = param_2;
    SVar12.str = param_1;
    SVar16.bridgeObject = pvVar6;
    SVar16.str = pcVar5;
    Swift::String::append(SVar12,SVar16);
    pcVar5 = local_c8.str;
    FUN_1006c446c();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init
              ((DefaultStringInterpolation)pcVar5);
    local_138 = local_c8.str;
    pvStack_b8 = local_c8.bridgeObject;
    local_c8.str._0_1_ = 2;
    local_c8.bridgeObject = local_138;
    lStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    local_90 = 0xd000000000000021;
    uStack_88 = 0x8000000100db0260;
    local_80 = 0xd000000000000023;
    uStack_78 = 0x8000000100db0290;
    local_70 = 0x45;
    local_140[0] = 2;
    pvStack_130 = pvStack_b8;
    uStack_120 = 0;
    local_128 = 0;
    uStack_110 = 0;
    local_118 = 0;
    local_108 = 0xd000000000000021;
    uStack_100 = 0x8000000100db0260;
    local_f8 = 0xd000000000000023;
    uStack_f0 = 0x8000000100db0290;
    local_e8 = 0x45;
    FUN_1005bf638(&local_c8,auStack_1c8);
    FUN_1004eaa3c(local_140);
    (**(code **)(lStack_148 + 0x28))(&local_c8,local_150,lStack_148);
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_4);
    _swift_bridgeObjectRelease(puVar8);
    FUN_1004eaa3c(&local_c8);
    FUN_100004594(auStack_168);
  }
  else {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_4);
    _swift_bridgeObjectRelease(puVar8);
  }
  return pcVar7;
}



/* Address: 0x1006c3f68 | FUN_1006c3f68 */

void FUN_1006c3f68(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Address: 0x1006c3f90 | FUN_1006c3f90 */

undefined8 * FUN_1006c3f90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1006c3fdc | FUN_1006c3fdc */

undefined8 * FUN_1006c3fdc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x1006c4048 | FUN_1006c4048 */

undefined8 * FUN_1006c4048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x1006c4094 | FUN_1006c4094 */

undefined1  [16] FUN_1006c4094(void)

{
  return ZEXT816(0x100ef8310);
}



/* Address: 0x1006c40a4 | FUN_1006c40a4 */

long * FUN_1006c40a4(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  Date DVar3;
  long lVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    *(char *)param_1 = (char)*param_2;
    param_1[1] = param_2[1];
    iVar2 = *(int *)(param_3 + 0x18);
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))
              ((undefined1 *)((long)param_1 + (long)iVar2),
               (undefined1 *)((long)param_2 + (long)iVar2),DVar3.unknown);
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1006c4130 | FUN_1006c4130 */

void FUN_1006c4130(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006c4164. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1 + iVar1,DVar2.unknown);
  return;
}



/* Address: 0x1006c4168 | FUN_1006c4168 */

undefined1 * FUN_1006c4168(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1006c41c8 | FUN_1006c41c8 */

undefined1 * FUN_1006c41c8(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x18))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1006c4228 | FUN_1006c4228 */

undefined1 * FUN_1006c4228(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1006c4288 | FUN_1006c4288 */

undefined1 * FUN_1006c4288(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  iVar1 = *(int *)(param_3 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x28))(param_1 + iVar1,param_2 + iVar1,DVar2.unknown)
  ;
  return param_1;
}



/* Address: 0x1006c42e8 | FUN_1006c42e8 */

void FUN_1006c42e8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1006c42f4 | FUN_1006c42f4 */

byte * FUN_1006c42f4(byte *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  
  if ((int)param_2 == 0xfe) {
    uVar1 = 0;
    if (1 < *param_1) {
      uVar1 = (*param_1 + 0x7ffffffe & 0x7fffffff) + 1;
    }
    return (byte *)(ulong)uVar1;
  }
  DVar2 = Foundation::Date::typeMetadataAccessor();
  param_1 = param_1 + *(int *)(param_3 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x0001006c436c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x30))(param_1,param_2,DVar2.unknown);
  return param_1;
}



/* Address: 0x1006c4370 | FUN_1006c4370 */

void FUN_1006c4370(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1006c437c | FUN_1006c437c */

void FUN_1006c437c(char *param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  if (param_3 == 0xfe) {
    *param_1 = (char)param_2 + '\x01';
    return;
  }
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001006c43e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))
            (param_1 + *(int *)(param_4 + 0x18),param_2,param_2,DVar1.unknown);
  return;
}



/* Address: 0x1006c43ec | FUN_1006c43ec */

undefined1  [16] FUN_1006c43ec(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  puStack_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_38 = &DAT_100c70ed0;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(DVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x1006c446c | FUN_1006c446c */

void FUN_1006c446c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdc698 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ee0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ee0,&DAT_100ee6ec8);
  DAT_100fdc698 = pTVar1;
  return;
}



/* Address: 0x1006c44ac | thunk_FUN_1006c36c4 */

void thunk_FUN_1006c36c4(void)

{
  FUN_1006c36c4();
  return;
}



/* Address: 0x1006c44b0 | thunk_FUN_1006c6308 */

void thunk_FUN_1006c6308(void)

{
  FUN_1006c6308();
  return;
}



/* Address: 0x1006c44b4 | FUN_1006c44b4 */

LazyMapSequence
FUN_1006c44b4(ulong param_1,undefined8 param_2,byte *param_3,byte *param_4,undefined8 param_5,
             long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  LazyMapSequence LVar3;
  __int64 _Var4;
  byte *pbVar5;
  code *pcVar7;
  code *extraout_x8;
  long lVar8;
  code *extraout_x8_00;
  byte *pbVar9;
  undefined **in_x16;
  LazyMapSequence unaff_x19;
  byte *unaff_x20;
  LazySequence unaff_x21;
  byte *unaff_x22;
  byte *unaff_x23;
  byte *unaff_x24;
  long unaff_x25;
  byte *unaff_x26;
  byte *unaff_x27;
  byte *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 unaff_x30;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_40 [16];
  String separator;
  byte *pbVar6;
  
  pbVar5 = (byte *)0xe900000000000063;
  LVar3.unknown = (byte *)0x72732d646c696863;
  pcVar7 = (code *)(param_1 & 0xff);
  pbVar9 = &switchD_1006c44e8::switchdataD_100c70ef0;
  pbVar6 = pbVar5;
  switch(pcVar7) {
  case (code *)0x0:
  case (code *)0xf4:
    goto switchD_1006c44e8_caseD_0;
  default:
    LVar3.unknown = (byte *)0x6f63;
  case (code *)0x23:
  case (code *)0x2b:
  case (code *)0x2d:
  case (code *)0x31:
  case (code *)0x98:
  case (code *)0xa6:
  case (code *)0xe6:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x63656e6e0000);
    goto switchD_1006c44e8_caseD_96;
  case (code *)0x2:
    LVar3.unknown = (byte *)0x6c7561666564;
    goto LAB_1006c4564;
  case (code *)0x3:
    return (LazyMapSequence)(byte *)0xd000000000000010;
  case (code *)0x4:
    LVar3.unknown = (byte *)0x732d746e6f66;
  case (code *)0x16:
  case (code *)0x38:
  case (code *)0xa0:
    return (undefined *)((ulong)LVar3.unknown & 0xffffffffffff | 0x6372000000000000);
  case (code *)0x5:
    LVar3.unknown = (byte *)0x6d617266;
    goto LAB_1006c45e8;
  case (code *)0x6:
  case (code *)0x2a:
    LVar3.unknown = (byte *)0x6372732d676d69;
switchD_1006c44e8_caseD_1c:
    return (LazyMapSequence)LVar3.unknown;
  case (code *)0x7:
  case (code *)0x19:
  case (code *)0x3b:
    return (LazyMapSequence)(byte *)0x74736566696e616d;
  case (code *)0x8:
    return (LazyMapSequence)(byte *)0x72732d616964656d;
  case (code *)0x9:
    LVar3.unknown = (byte *)0x626f;
  case (code *)0x1b:
  case (code *)0x3d:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x7463656a0000);
    goto switchD_1006c44e8_caseD_22;
  case (code *)0xa:
    LVar3.unknown = (byte *)0x66657270;
  case (code *)0x2c:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x746500000000);
switchD_1006c44e8_caseD_49:
    return (LazyMapSequence)(byte *)((ulong)LVar3.unknown & 0xffffffffffff | 0x6863000000000000);
  case (code *)0xb:
  case (code *)0x1d:
  case (code *)0x3f:
    LVar3.unknown = (byte *)0x6373;
  case (code *)0x4a:
  case (code *)0x52:
  case (code *)0x5a:
  case (code *)0x62:
  case (code *)0x6a:
  case (code *)0x7a:
  case (code *)0x82:
  case (code *)0x84:
  case (code *)0xca:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff00000000ffff | 0x747069720000);
    goto LAB_1006c45d0;
  case (code *)0xc:
  case (code *)0x4c:
  case (code *)0x54:
  case (code *)0x5c:
  case (code *)0x64:
  case (code *)0x6c:
  case (code *)0x7c:
  case (code *)0x1e:
  case (code *)0x40:
switchD_1006c44e8_caseD_a2:
    LVar3.unknown = (byte *)0x6373;
switchD_1006c44e8_caseD_12:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffff0000ffff | 0x69720000);
switchD_1006c44e8_caseD_18:
    return (undefined *)((ulong)LVar3.unknown & 0xffffffff | 0x732d747000000000);
  case (code *)0xd:
  case (code *)0xae:
  case (code *)0xee:
    goto switchD_1006c44e8_caseD_a2;
  case (code *)0xe:
    break;
  case (code *)0xf:
    break;
  case (code *)0x10:
  case (code *)0x8e:
  case (code *)0xb6:
  case (code *)0xc0:
  case (code *)0xf6:
    break;
  case (code *)0x11:
  case (code *)0xd1:
  case (code *)0xd9:
  case (code *)0xe1:
    LVar3.unknown = (byte *)0x6b726f77;
  case (code *)0x17:
  case (code *)0x39:
    LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x726500000000);
    goto LAB_1006c45d0;
  case (code *)0x12:
  case (code *)0x34:
    goto switchD_1006c44e8_caseD_12;
  case (code *)0x14:
  case (code *)0x36:
    goto switchD_1006c44e8_caseD_14;
  case (code *)0x15:
  case (code *)0x37:
    goto switchD_1006c44e8_caseD_15;
  case (code *)0x18:
  case (code *)0x3a:
    goto switchD_1006c44e8_caseD_18;
  case (code *)0x1a:
  case (code *)0x3c:
    return (LazyMapSequence)(byte *)0x72732d646c696863;
  case (code *)0x1c:
  case (code *)0x3e:
    goto switchD_1006c44e8_caseD_1c;
  case (code *)0x1f:
  case (code *)0x41:
    goto switchD_1006c44e8_caseD_1f;
  case (code *)0x22:
    goto switchD_1006c44e8_caseD_22;
  case (code *)0x24:
    goto switchD_1006c44e8_caseD_24;
  case (code *)0x26:
    goto switchD_1006c44e8_caseD_26;
  case (code *)0x28:
    goto switchD_1006c44e8_caseD_28;
  case (code *)0x2e:
    goto switchD_1006c44e8_caseD_2e;
  case (code *)0x30:
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case (code *)0xb0:
    unaff_x29 = &stack0x00000050;
    register0x00000008 = (BADSPACEBASE *)auStack_40;
    unaff_x26 = *(byte **)(param_6 + 8);
    unaff_x20 = param_3;
    unaff_x24 = pbVar5;
    unaff_x25 = param_6;
    unaff_x27 = param_4;
    unaff_x28 = LVar3.unknown;
switchD_1006c44e8_caseD_9c:
    unaff_x21 = Swift::LazySequence::typeMetadataAccessor();
    lVar8 = *(long *)(unaff_x21.unknown + -8);
    unaff_x29[-0xe] = lVar8;
    pcVar7 = (code *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
switchD_1006c44e8_caseD_8c:
    in_x16 = &PTR_get_displayPrice_100ea8000;
switchD_1006c44e8_caseD_d2:
    (*(code *)in_x16[0x58])(pcVar7);
    pcVar7 = extraout_x8;
    pbVar9 = (byte *)register0x00000008;
switchD_1006c44e8_caseD_ad:
    unaff_x23 = pbVar9 + -(long)pcVar7;
switchD_1006c44e8_caseD_88:
    register0x00000008 = (BADSPACEBASE *)unaff_x23;
    param_3 = PTR___type_metadata_for_Swift_String_100eac208;
    unaff_x23 = (byte *)register0x00000008;
switchD_1006c44e8_caseD_e0:
    param_4 = unaff_x26;
    LVar3 = Swift::LazyMapSequence::typeMetadataAccessor();
    unaff_x19 = LVar3;
switchD_1006c44e8_caseD_26:
    lVar8 = *(long *)(LVar3.unknown + -8);
    unaff_x29[-0xd] = lVar8;
    (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pcVar7 = extraout_x8_00;
    pbVar9 = (byte *)register0x00000008;
switchD_1006c44e8_caseD_48:
    unaff_x22 = pbVar9 + -(long)pcVar7;
    unaff_x29[-0x11] = unaff_x20;
switchD_1006c44e8_caseD_c8:
    _Var4 = Swift::Collection::get_count();
    if (_Var4 < 1) {
      _swift_bridgeObjectRetain(unaff_x24);
    }
    else {
      unaff_x29[-0xc] = unaff_x28;
      unaff_x29[-0xb] = unaff_x24;
      _swift_bridgeObjectRetain(unaff_x24);
switchD_1006c44e8_caseD_50:
      SVar10.bridgeObject = (void *)0xe100000000000000;
      SVar10.str = (char *)0x20;
      SVar12.bridgeObject = param_4;
      SVar12.str = (char *)param_3;
      Swift::String::append(SVar10,SVar12);
      (extension_Swift)::Swift::Sequence::get_lazy();
      LVar3.unknown = &DAT_100ef8348;
      pbVar5 = &DAT_00000030;
      param_3 = (byte *)0x7;
switchD_1006c44e8_caseD_58:
      _swift_allocObject(LVar3.unknown,pbVar5,param_3);
      uVar1 = unaff_x29[-0x10];
      uVar2 = unaff_x29[-0xf];
      *(byte **)(LVar3.unknown + 0x10) = unaff_x27;
      *(undefined8 *)(LVar3.unknown + 0x18) = uVar1;
      *(long *)(LVar3.unknown + 0x20) = unaff_x25;
      *(undefined8 *)(LVar3.unknown + 0x28) = uVar2;
      _swift_getWitnessTable
                (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
                 unaff_x21.unknown);
      unaff_x24 = LVar3.unknown;
switchD_1006c44e8_caseD_60:
      (extension_Swift)::Swift::LazySequenceProtocol::_map();
switchD_1006c44e8_caseD_2e:
      LVar3.unknown = unaff_x23;
      _swift_release(unaff_x24);
      pcVar7 = *(code **)(unaff_x29[-0xe] + 8);
switchD_1006c44e8_caseD_68:
      pbVar5 = unaff_x21.unknown;
switchD_1006c44e8_caseD_a1:
      (*pcVar7)(LVar3.unknown,pbVar5);
      LVar3.unknown =
           PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
switchD_1006c44e8_caseD_78:
      _swift_getWitnessTable(LVar3.unknown,unaff_x19.unknown);
      FUN_1006b7aa4();
      separator.bridgeObject = (void *)0xe100000000000000;
      separator.str = (char *)0x20;
      param_3 = unaff_x19.unknown;
      SVar10 = (extension_Swift)::Swift::Sequence::_joined(separator);
      pbVar6 = SVar10.bridgeObject;
      unaff_x21.unknown = SVar10.str;
      param_4 = LVar3.unknown;
switchD_1006c44e8_caseD_80:
      LVar3.unknown = unaff_x22;
      pbVar5 = unaff_x19.unknown;
      pcVar7 = *(code **)(unaff_x29[-0xd] + 8);
      unaff_x23 = pbVar6;
switchD_1006c44e8_caseD_a3:
      (*pcVar7)(LVar3.unknown,pbVar5);
      SVar11.bridgeObject = unaff_x23;
      SVar11.str = unaff_x21.unknown;
      SVar13.bridgeObject = param_4;
      SVar13.str = (char *)param_3;
      Swift::String::append(SVar11,SVar13);
      _swift_bridgeObjectRelease(unaff_x23);
      unaff_x28 = (byte *)unaff_x29[-0xc];
    }
    return (LazyMapSequence)unaff_x28;
  case (code *)0x32:
    return (LazyMapSequence)LVar3.unknown;
  case (code *)0x48:
    goto switchD_1006c44e8_caseD_48;
  case (code *)0x49:
  case (code *)0x51:
  case (code *)0x59:
  case (code *)0x61:
  case (code *)0x69:
  case (code *)0x79:
  case (code *)0x81:
  case (code *)0xc9:
    goto switchD_1006c44e8_caseD_49;
  case (code *)0x50:
    goto switchD_1006c44e8_caseD_50;
  case (code *)0x58:
    goto switchD_1006c44e8_caseD_58;
  case (code *)0x60:
    goto switchD_1006c44e8_caseD_60;
  case (code *)0x68:
    goto switchD_1006c44e8_caseD_68;
  case (code *)0x78:
    goto switchD_1006c44e8_caseD_78;
  case (code *)0x80:
    goto switchD_1006c44e8_caseD_80;
  case (code *)0x88:
  case (code *)0x8d:
  case (code *)0xb5:
  case (code *)0xf5:
    goto switchD_1006c44e8_caseD_88;
  case (code *)0x89:
  case (code *)0x9d:
  case (code *)0xb1:
  case (code *)0xc5:
  case (code *)0xcd:
  case (code *)0xd5:
  case (code *)0xdd:
  case (code *)0xf1:
    return (LazyMapSequence)LVar3.unknown;
  case (code *)0x8a:
  case (code *)0x9e:
  case (code *)0xb2:
  case (code *)0xc6:
  case (code *)0xce:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xf2:
    goto switchD_1006c44e8_caseD_8a;
  case (code *)0x8c:
  case (code *)0xd0:
  case (code *)0xec:
    goto switchD_1006c44e8_caseD_8c;
  case (code *)0x96:
  case (code *)0xbe:
  case (code *)0xfe:
    goto switchD_1006c44e8_caseD_96;
  case (code *)0x9c:
    goto switchD_1006c44e8_caseD_9c;
  case (code *)0xa1:
    goto switchD_1006c44e8_caseD_a1;
  case (code *)0xa2:
    goto switchD_1006c44e8_caseD_a2;
  case (code *)0xa3:
  case (code *)0xd3:
  case (code *)0xdb:
  case (code *)0xe3:
    goto switchD_1006c44e8_caseD_a3;
  case (code *)0xac:
    switchD_10055d294::caseD_1c();
    return (LazyMapSequence)LVar3.unknown;
  case (code *)0xad:
  case (code *)0xd8:
  case (code *)0xed:
    goto switchD_1006c44e8_caseD_ad;
  case (code *)0xb4:
    goto switchD_1006c44e8_caseD_24;
  case (code *)0xc4:
  case (code *)0xcc:
  case (code *)0xd4:
  case (code *)0xdc:
    goto switchD_1006c44e8_caseD_c4;
  case (code *)0xc8:
    goto switchD_1006c44e8_caseD_c8;
  case (code *)0xd2:
  case (code *)0xda:
  case (code *)0xe2:
    goto switchD_1006c44e8_caseD_d2;
  case (code *)0xe0:
    goto switchD_1006c44e8_caseD_e0;
  case (code *)0xf0:
    return (LazyMapSequence)LVar3.unknown;
  }
  LVar3.unknown = (byte *)0x7473;
switchD_1006c44e8_caseD_8a:
  LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffff0000ffff | 0x6c790000);
switchD_1006c44e8_caseD_15:
LAB_1006c45e8:
  LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffff0000ffffffff | 0x2d6500000000);
switchD_1006c44e8_caseD_1f:
  return (undefined *)((ulong)LVar3.unknown & 0xffffffffffff | 0x7273000000000000);
switchD_1006c44e8_caseD_24:
  FUN_1006c6374();
switchD_1006c44e8_caseD_c4:
  return (LazyMapSequence)LVar3.unknown;
switchD_1006c44e8_caseD_96:
LAB_1006c4564:
  LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffffffff | 0x2d74000000000000);
switchD_1006c44e8_caseD_14:
  return (LazyMapSequence)LVar3.unknown;
switchD_1006c44e8_caseD_22:
LAB_1006c45d0:
  LVar3.unknown = (undefined *)((ulong)LVar3.unknown & 0xffffffffffff | 0x732d000000000000);
switchD_1006c44e8_caseD_28:
switchD_1006c44e8_caseD_0:
  return (LazyMapSequence)LVar3.unknown;
}



/* Address: 0x1006c4664 | FUN_1006c4664 */

void FUN_1006c4664(undefined8 param_1,undefined8 param_2)

{
  FUN_10055d370(param_1,param_2,FUN_1006c44b4);
  return;
}



/* Address: 0x1006c4670 | FUN_1006c4670 */

void FUN_1006c4670(void)

{
  FUN_10055d3e0();
  return;
}



/* Address: 0x1006c467c | switchD_1006c44e8::caseD_ac */

void switchD_1006c44e8::caseD_ac(void)

{
  switchD_10055d294::caseD_1c();
  return;
}



/* Address: 0x1006c4688 | FUN_1006c4688 */

void FUN_1006c4688(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1006c6308(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1006c46b4 | FUN_1006c46b4 */

void FUN_1006c46b4(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_1006c44b4();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1006c46dc | switchD_1006c44e8::caseD_b4 */

undefined8 switchD_1006c44e8::caseD_b4(undefined8 param_1)

{
  FUN_1006c6374();
  return param_1;
}



/* Address: 0x1006c4718 | FUN_1006c4718 */

undefined1  [16]
FUN_1006c4718(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7)

{
  LazySequence LVar1;
  LazyMapSequence LVar2;
  __int64 _Var3;
  undefined *puVar4;
  char *pcVar5;
  LazyMapSequence LVar6;
  long extraout_x8;
  long extraout_x8_00;
  void *pvVar7;
  String SVar8;
  undefined1 auVar9 [16];
  String SVar10;
  String SVar11;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  String separator;
  
  pvVar7 = *(void **)(param_6 + 8);
  local_90 = param_5;
  uStack_88 = param_7;
  LVar1 = Swift::LazySequence::typeMetadataAccessor();
  local_80 = *(long *)(LVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  LVar2 = Swift::LazyMapSequence::typeMetadataAccessor();
  local_78 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_78 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = param_3;
  _Var3 = Swift::Collection::get_count();
  uStack_68 = param_2;
  local_70 = param_1;
  if (_Var3 < 1) {
    _swift_bridgeObjectRetain(param_2);
  }
  else {
    _swift_bridgeObjectRetain(param_2);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x20;
    SVar10.bridgeObject = pvVar7;
    SVar10.str = pcVar5;
    Swift::String::append(SVar8,SVar10);
    (extension_Swift)::Swift::Sequence::get_lazy();
    puVar4 = &DAT_100ef8348;
    _swift_allocObject(&DAT_100ef8348,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = param_4;
    *(undefined8 *)(puVar4 + 0x18) = local_90;
    *(long *)(puVar4 + 0x20) = param_6;
    *(undefined8 *)(puVar4 + 0x28) = uStack_88;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazySequence<undefined>_>Swift__LazySequenceProtocol_100eace88,
               LVar1.unknown);
    (extension_Swift)::Swift::LazySequenceProtocol::_map();
    _swift_release(puVar4);
    (**(code **)(local_80 + 8))(auStack_a0 + -extraout_x8,LVar1.unknown);
    puVar4 = PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
    _swift_getWitnessTable
              (PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0,
               LVar2.unknown);
    FUN_1006b7aa4();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    LVar6 = LVar2;
    SVar8 = (extension_Swift)::Swift::Sequence::_joined(separator);
    (**(code **)(local_78 + 8))((long)(auStack_a0 + -extraout_x8) - extraout_x8_00,LVar2.unknown);
    SVar11.bridgeObject = puVar4;
    SVar11.str = LVar6.unknown;
    Swift::String::append(SVar8,SVar11);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
  }
  auVar9._8_8_ = uStack_68;
  auVar9._0_8_ = local_70;
  return auVar9;
}



/* Address: 0x1006c493c | FUN_1006c493c */

undefined1  [16]
FUN_1006c493c(ulong param_1,undefined8 param_2,char *param_3,Union_Impl_FuncImpl *param_4)

{
  undefined1 in_ZR;
  Union_Impl_FuncImpl *pUVar1;
  Union_Impl_FuncImpl *pUVar2;
  Union_Impl_FuncImpl *pUVar3;
  char *pcVar4;
  Union_Impl_FuncImpl *pUVar5;
  byte *pbVar6;
  Union_Impl_FuncImpl *pUVar7;
  Union_Impl_FuncImpl *UNRECOVERED_JUMPTABLE;
  Union_Impl_FuncImpl *in_x12;
  byte *unaff_x19;
  Union_Impl_FuncImpl *unaff_x20;
  Union_Impl_FuncImpl *unaff_x21;
  Union_Impl_FuncImpl *pUVar8;
  Union_Impl_FuncImpl *unaff_x22;
  byte *pbVar9;
  Union_Impl_FuncImpl *unaff_x23;
  void *unaff_x24;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  String SVar22;
  String SVar23;
  String SVar24;
  String separator_00;
  String SVar25;
  String separator_01;
  undefined1 auVar26 [16];
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  Union_Impl_FuncImpl *in_stack_00000020;
  Union_Impl_FuncImpl *in_stack_00000028;
  String separator;
  
  SVar23.bridgeObject = unaff_x24;
  SVar23.str = (char *)unaff_x23;
  pUVar2 = (Union_Impl_FuncImpl *)0xef7364616f6c6e77;
  pUVar1 = (Union_Impl_FuncImpl *)&DAT_6f642d776f6c6c61;
  pUVar5 = (Union_Impl_FuncImpl *)(param_1 & 0xff);
  pbVar6 = &switchD_1006c4978::switchdataD_100c70f02;
  UNRECOVERED_JUMPTABLE = (Union_Impl_FuncImpl *)(ulong)*(byte *)((long)pUVar5 + 0x100c70f02);
  pUVar7 = (Union_Impl_FuncImpl *)((long)UNRECOVERED_JUMPTABLE * 4 + 0x1006c497c);
  pUVar3 = pUVar2;
  pUVar8 = unaff_x21;
  pbVar9 = (byte *)unaff_x22;
  switch(pUVar5) {
  case (Union_Impl_FuncImpl *)0x0:
  case (Union_Impl_FuncImpl *)0x22:
    goto switchD_1006c4978_caseD_0;
  default:
    pUVar2 = (Union_Impl_FuncImpl *)0x6d72;
  case (Union_Impl_FuncImpl *)0x11:
  case (Union_Impl_FuncImpl *)0x19:
  case (Union_Impl_FuncImpl *)0x1b:
  case (Union_Impl_FuncImpl *)0x1f:
  case (Union_Impl_FuncImpl *)0x86:
  case (Union_Impl_FuncImpl *)0x94:
  case (Union_Impl_FuncImpl *)0xd4:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 & 0xffff0000ffff | 0xeb00000000730000);
  case (Union_Impl_FuncImpl *)0x84:
  case (Union_Impl_FuncImpl *)0xac:
  case (Union_Impl_FuncImpl *)0xec:
  case (Union_Impl_FuncImpl *)0xee:
    pUVar1 = (Union_Impl_FuncImpl *)0x6c61;
    goto switchD_1006c4978_caseD_7c;
  case (Union_Impl_FuncImpl *)0x2:
  case (Union_Impl_FuncImpl *)0x24:
    pUVar2 = (Union_Impl_FuncImpl *)0xec000000736c6164;
    pUVar1 = (Union_Impl_FuncImpl *)0x6f6d2d776f6c6c61;
  case (Union_Impl_FuncImpl *)0x78:
  case (Union_Impl_FuncImpl *)0x8c:
  case (Union_Impl_FuncImpl *)0xa0:
  case (Union_Impl_FuncImpl *)0xb4:
  case (Union_Impl_FuncImpl *)0xbc:
  case (Union_Impl_FuncImpl *)0xc4:
  case (Union_Impl_FuncImpl *)0xcc:
  case (Union_Impl_FuncImpl *)0xe0:
  case (Union_Impl_FuncImpl *)0xf4:
  case (Union_Impl_FuncImpl *)0xfc:
    auVar13._8_8_ = pUVar2;
    auVar13._0_8_ = pUVar1;
    return auVar13;
  case (Union_Impl_FuncImpl *)0x3:
  case (Union_Impl_FuncImpl *)0x25:
    auVar14._8_8_ = 0x8000000100db0510;
    auVar14._0_8_ = 0xd000000000000016;
    return auVar14;
  case (Union_Impl_FuncImpl *)0x4:
  case (Union_Impl_FuncImpl *)0x26:
  case (Union_Impl_FuncImpl *)0x8e:
    pUVar1 = (Union_Impl_FuncImpl *)0xd000000000000012;
  case (Union_Impl_FuncImpl *)0x3a:
  case (Union_Impl_FuncImpl *)0x42:
  case (Union_Impl_FuncImpl *)0x4a:
  case (Union_Impl_FuncImpl *)0x52:
  case (Union_Impl_FuncImpl *)0x5a:
  case (Union_Impl_FuncImpl *)0x6a:
    pcVar4 = "allow-pointer-lock";
LAB_1006c4a50:
    pUVar5 = (Union_Impl_FuncImpl *)(pcVar4 + -0x20);
switchD_1006c4978_caseD_bf:
    auVar15._8_8_ = (ulong)pUVar5 | 0x8000000000000000;
    auVar15._0_8_ = pUVar1;
    return auVar15;
  case (Union_Impl_FuncImpl *)0x5:
  case (Union_Impl_FuncImpl *)0x27:
    pUVar2 = (Union_Impl_FuncImpl *)0x73707570;
  case (Union_Impl_FuncImpl *)0x16:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 & 0xffffffffffff | 0xec00000000000000);
    pUVar1 = (Union_Impl_FuncImpl *)0x6c61;
    goto switchD_1006c4978_caseD_e2;
  case (Union_Impl_FuncImpl *)0x6:
  case (Union_Impl_FuncImpl *)0x28:
    pUVar2 = (Union_Impl_FuncImpl *)0x8000000100db04d0;
  case (Union_Impl_FuncImpl *)0x18:
    pUVar1 = (Union_Impl_FuncImpl *)0xd00000000000001e;
    goto switchD_1006c4978_caseD_f7;
  case (Union_Impl_FuncImpl *)0x7:
  case (Union_Impl_FuncImpl *)0x29:
    pUVar1 = (Union_Impl_FuncImpl *)0xd000000000000012;
    pcVar4 = "allow-presentation";
    goto LAB_1006c4a50;
  case (Union_Impl_FuncImpl *)0x8:
  case (Union_Impl_FuncImpl *)0x2a:
    auVar20._8_8_ = 0x8000000100db0490;
    auVar20._0_8_ = 0xd000000000000011;
    return auVar20;
  case (Union_Impl_FuncImpl *)0x9:
  case (Union_Impl_FuncImpl *)0x2b:
    pUVar2 = (Union_Impl_FuncImpl *)0x6972;
  case (Union_Impl_FuncImpl *)0xf6:
    pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar2 & 0xffffffff0000ffff | 0x74700000);
    goto switchD_1006c4978_caseD_10;
  case (Union_Impl_FuncImpl *)0xa:
  case (Union_Impl_FuncImpl *)0x2c:
    pcVar4 = "allow-storage-access-by-user-activation";
    break;
  case (Union_Impl_FuncImpl *)0xb:
  case (Union_Impl_FuncImpl *)0x2d:
    pUVar5 = (Union_Impl_FuncImpl *)0x100db0000;
  case (Union_Impl_FuncImpl *)0x38:
  case (Union_Impl_FuncImpl *)0x40:
  case (Union_Impl_FuncImpl *)0x48:
  case (Union_Impl_FuncImpl *)0x50:
  case (Union_Impl_FuncImpl *)0x58:
  case (Union_Impl_FuncImpl *)0x68:
  case (Union_Impl_FuncImpl *)0x70:
  case (Union_Impl_FuncImpl *)0x72:
  case (Union_Impl_FuncImpl *)0xb8:
  case (Union_Impl_FuncImpl *)0xf8:
    auVar11._8_8_ = (ulong)(pUVar5 + 0x110) | 0x8000000000000000;
    auVar11._0_8_ = 0xd000000000000014;
    return auVar11;
  case (Union_Impl_FuncImpl *)0xc:
  case (Union_Impl_FuncImpl *)0x2e:
    pcVar4 = "allow-top-navigation-by-user-activation";
    break;
  case (Union_Impl_FuncImpl *)0xd:
  case (Union_Impl_FuncImpl *)0x2f:
    pUVar2 = (Union_Impl_FuncImpl *)0x8000000100db03e0;
  case (Union_Impl_FuncImpl *)0x9c:
  case (Union_Impl_FuncImpl *)0xdc:
    pUVar5 = (Union_Impl_FuncImpl *)0xd000000000000012;
    goto switchD_1006c4978_caseD_90;
  case (Union_Impl_FuncImpl *)0x10:
    goto switchD_1006c4978_caseD_10;
  case (Union_Impl_FuncImpl *)0x12:
    goto switchD_1006c4978_caseD_12;
  case (Union_Impl_FuncImpl *)0x14:
    goto switchD_1006c4978_caseD_14;
  case (Union_Impl_FuncImpl *)0x1a:
    goto switchD_1006c4978_caseD_1a;
  case (Union_Impl_FuncImpl *)0x1e:
    goto switchD_1006c4978_caseD_1e;
  case (Union_Impl_FuncImpl *)0x20:
    unaff_x21 = pUVar2;
    FUN_1006c44b4();
    pUVar1 = (Union_Impl_FuncImpl *)pbVar6;
    if (lRamef7364616f6c6e87 == 0) goto LAB_1006c519c;
    _swift_bridgeObjectRetain(unaff_x21);
    unaff_x22 = pUVar2;
    in_stack_00000020 = (Union_Impl_FuncImpl *)pbVar6;
    in_stack_00000028 = unaff_x21;
  case (Union_Impl_FuncImpl *)0xde:
    pUVar1 = (Union_Impl_FuncImpl *)0x20;
    pUVar2 = (Union_Impl_FuncImpl *)0xe100000000000000;
    goto switchD_1006c4978_caseD_77;
  case (Union_Impl_FuncImpl *)0x36:
    goto switchD_1006c4978_caseD_36;
  case (Union_Impl_FuncImpl *)0x37:
  case (Union_Impl_FuncImpl *)0x3f:
  case (Union_Impl_FuncImpl *)0x47:
  case (Union_Impl_FuncImpl *)0x4f:
  case (Union_Impl_FuncImpl *)0x57:
  case (Union_Impl_FuncImpl *)0x67:
  case (Union_Impl_FuncImpl *)0x6f:
  case (Union_Impl_FuncImpl *)0xb7:
    goto switchD_1006c4978_caseD_37;
  case (Union_Impl_FuncImpl *)0x3e:
    goto switchD_1006c4978_caseD_3e;
  case (Union_Impl_FuncImpl *)0x46:
    goto switchD_1006c4978_caseD_46;
  case (Union_Impl_FuncImpl *)0x4e:
    pUVar5 = (Union_Impl_FuncImpl *)((ulong)pUVar5 | 0xd000000000000000);
    pbVar6 = (byte *)0xef7364616fef6f77;
    pUVar7 = (Union_Impl_FuncImpl *)0x8000000100db0320;
    UNRECOVERED_JUMPTABLE = (Union_Impl_FuncImpl *)0x100db0000;
  case (Union_Impl_FuncImpl *)0x1c:
    UNRECOVERED_JUMPTABLE =
         (Union_Impl_FuncImpl *)((ulong)(UNRECOVERED_JUMPTABLE + 0xc0) | 0x8000000000000000);
    in_x12 = (Union_Impl_FuncImpl *)((long)pUVar5 + -2);
    in_ZR = pbVar6 == (byte *)0x0;
  case (Union_Impl_FuncImpl *)0x56:
    goto switchD_1006c4978_caseD_56;
  case (Union_Impl_FuncImpl *)0x66:
    in_stack_00000020 = (Union_Impl_FuncImpl *)0x786f62646e6c61;
    in_stack_00000028 = (Union_Impl_FuncImpl *)&DAT_e700000000000000;
    pUVar1 = (Union_Impl_FuncImpl *)0x20;
    pUVar3 = (Union_Impl_FuncImpl *)0xe100000000000000;
    unaff_x19 = pbVar6;
    unaff_x21 = pUVar2;
  case (Union_Impl_FuncImpl *)0x6e:
    SVar25.bridgeObject = pUVar3;
    SVar25.str = (char *)pUVar1;
    SVar30.bridgeObject = param_4;
    SVar30.str = param_3;
    Swift::String::append(SVar25,SVar30);
    goto switchD_1006c4978_caseD_91;
  case (Union_Impl_FuncImpl *)0x77:
  case (Union_Impl_FuncImpl *)0x8b:
  case (Union_Impl_FuncImpl *)0x9f:
  case (Union_Impl_FuncImpl *)0xb3:
  case (Union_Impl_FuncImpl *)0xbb:
  case (Union_Impl_FuncImpl *)0xc3:
  case (Union_Impl_FuncImpl *)0xcb:
  case (Union_Impl_FuncImpl *)0xdf:
  case (Union_Impl_FuncImpl *)0xf3:
  case (Union_Impl_FuncImpl *)0xfb:
    goto switchD_1006c4978_caseD_77;
  case (Union_Impl_FuncImpl *)0x7a:
  case (Union_Impl_FuncImpl *)0xbe:
  case (Union_Impl_FuncImpl *)0xda:
    goto switchD_1006c4978_caseD_7a;
  case (Union_Impl_FuncImpl *)0x7c:
  case (Union_Impl_FuncImpl *)0xa4:
  case (Union_Impl_FuncImpl *)0xae:
  case (Union_Impl_FuncImpl *)0xe4:
    goto switchD_1006c4978_caseD_7c;
  case (Union_Impl_FuncImpl *)0x8a:
    goto switchD_1006c4978_caseD_8a;
  case (Union_Impl_FuncImpl *)0x8f:
    goto switchD_1006c4978_caseD_8f;
  case (Union_Impl_FuncImpl *)0x90:
    goto switchD_1006c4978_caseD_90;
  case (Union_Impl_FuncImpl *)0x91:
  case (Union_Impl_FuncImpl *)0xc1:
  case (Union_Impl_FuncImpl *)0xc9:
  case (Union_Impl_FuncImpl *)0xd1:
    goto switchD_1006c4978_caseD_91;
  case (Union_Impl_FuncImpl *)0x9a:
    UNRECOVERED_JUMPTABLE =
         (Union_Impl_FuncImpl *)
         ((ulong)*(ushort *)(&switchD_1006c4b30::switchdataD_100c70f10 + (long)pUVar5 * 2) * 4 +
         0x1006c4b34);
  case (Union_Impl_FuncImpl *)0xf2:
  case (Union_Impl_FuncImpl *)0xfa:
                    /* WARNING: Could not recover jumptable at 0x0001006c4b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar21._8_8_ = pUVar2;
    auVar21._0_8_ = pUVar1;
    return auVar21;
  case (Union_Impl_FuncImpl *)0x9b:
  case (Union_Impl_FuncImpl *)0xc6:
  case (Union_Impl_FuncImpl *)0xdb:
    unaff_x21 = (Union_Impl_FuncImpl *)0x6563;
  case (Union_Impl_FuncImpl *)0x76:
  case (Union_Impl_FuncImpl *)0x7b:
  case (Union_Impl_FuncImpl *)0xa3:
  case (Union_Impl_FuncImpl *)0xe3:
    unaff_x21 = (Union_Impl_FuncImpl *)((ulong)unaff_x21 & 0xffff | 0xef73726f74730000);
    goto switchD_1006c4978_caseD_ce;
  case (Union_Impl_FuncImpl *)0x9e:
    goto switchD_1006c4978_caseD_9e;
  case (Union_Impl_FuncImpl *)0xa2:
    goto switchD_1006c4978_caseD_a2;
  case (Union_Impl_FuncImpl *)0xb2:
  case (Union_Impl_FuncImpl *)0xba:
  case (Union_Impl_FuncImpl *)0xc2:
  case (Union_Impl_FuncImpl *)0xca:
    goto switchD_1006c4978_caseD_b2;
  case (Union_Impl_FuncImpl *)0xb6:
    goto switchD_1006c4978_caseD_b6;
  case (Union_Impl_FuncImpl *)0xbf:
  case (Union_Impl_FuncImpl *)0xc7:
  case (Union_Impl_FuncImpl *)0xcf:
  case (Union_Impl_FuncImpl *)0xff:
    goto switchD_1006c4978_caseD_bf;
  case (Union_Impl_FuncImpl *)0xc0:
  case (Union_Impl_FuncImpl *)0xc8:
  case (Union_Impl_FuncImpl *)0xd0:
    goto switchD_1006c4978_caseD_c0;
  case (Union_Impl_FuncImpl *)0xce:
    goto switchD_1006c4978_caseD_ce;
  case (Union_Impl_FuncImpl *)0xe2:
    goto switchD_1006c4978_caseD_e2;
  case (Union_Impl_FuncImpl *)0xf7:
    goto switchD_1006c4978_caseD_f7;
  case (Union_Impl_FuncImpl *)0xfe:
    goto switchD_1006c4978_caseD_fe;
  }
  pUVar5 = (Union_Impl_FuncImpl *)(pcVar4 + -0x20);
switchD_1006c4978_caseD_1a:
  pUVar2 = (Union_Impl_FuncImpl *)((ulong)pUVar5 | 0x8000000000000000);
  goto switchD_1006c4978_caseD_37;
switchD_1006c4978_caseD_ce:
  pUVar1 = (Union_Impl_FuncImpl *)0x6e612d656d617266;
  pUVar7 = (Union_Impl_FuncImpl *)0x3a00b1007f011a;
  pUVar8 = unaff_x21;
switchD_1006c4978_caseD_14:
  unaff_x21 = pUVar8;
  if (pUVar7 != (Union_Impl_FuncImpl *)0x0) {
    SVar24.bridgeObject = (void *)0xe100000000000000;
    SVar24.str = (char *)0x20;
    SVar29.bridgeObject = param_4;
    SVar29.str = param_3;
    Swift::String::append(SVar24,SVar29);
    unaff_x19 = pbVar6;
    unaff_x21 = pUVar2;
    in_stack_00000020 = pUVar1;
    in_stack_00000028 = pUVar8;
switchD_1006c4978_caseD_36:
    goto switchD_1006c4978_caseD_b6;
  }
  goto LAB_1006c519c;
switchD_1006c4978_caseD_91:
  _swift_bridgeObjectRetain(unaff_x19);
  FUN_1000f7830(&DAT_100fdc6d0,&BYTE_100c70f50);
  unaff_x22 = (Union_Impl_FuncImpl *)&DAT_100fdc6d8;
  FUN_100134584(&DAT_100fdc6d8,&DAT_100fdc6d0,&BYTE_100c70f50,
                PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0);
  FUN_1006b7aa4();
  separator_01.bridgeObject = (void *)0xe100000000000000;
  separator_01.str = (char *)0x20;
  SVar23 = (extension_Swift)::Swift::Sequence::_joined(separator_01);
  pcVar4 = (char *)0x2;
LAB_1006c5148:
  unaff_x24 = SVar23.bridgeObject;
  FUN_1006c63e0(unaff_x19,unaff_x21);
  SVar31.bridgeObject = unaff_x22;
  SVar31.str = pcVar4;
  Swift::String::append(SVar23,SVar31);
  goto LAB_1006c5160;
switchD_1006c4978_caseD_77:
  SVar22.bridgeObject = pUVar2;
  SVar22.str = (char *)pUVar1;
  SVar27.bridgeObject = param_4;
  SVar27.str = param_3;
  Swift::String::append(SVar22,SVar27);
switchD_1006c4978_caseD_a2:
  goto switchD_1006c4978_caseD_12;
switchD_1006c4978_caseD_56:
  pUVar1 = pUVar5;
  if (!(bool)in_ZR) {
    pUVar1 = in_x12;
  }
  goto switchD_1006c4978_caseD_8f;
switchD_1006c4978_caseD_b6:
  _swift_bridgeObjectRetain(unaff_x19);
  unaff_x20 = (Union_Impl_FuncImpl *)&DAT_100fdc6c0;
  pbVar9 = &BYTE_100c70f48;
  FUN_1000f7830(&DAT_100fdc6c0,&BYTE_100c70f48);
switchD_1006c4978_caseD_3e:
  unaff_x22 = (Union_Impl_FuncImpl *)&DAT_100fdc6c8;
  FUN_100134584(&DAT_100fdc6c8,unaff_x20,pbVar9,
                PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0);
  FUN_1006b7aa4();
switchD_1006c4978_caseD_46:
  separator_00.bridgeObject = (void *)0xe100000000000000;
  separator_00.str = (char *)0x20;
  SVar23 = (extension_Swift)::Swift::Sequence::_joined(separator_00);
  pcVar4 = (char *)0x4;
  goto LAB_1006c5148;
switchD_1006c4978_caseD_12:
  _swift_bridgeObjectRetain(unaff_x22);
  unaff_x23 = &TargetResilientWitness_100c6fffc.Implementation;
  unaff_x20 = (Union_Impl_FuncImpl *)&DAT_100fdc6e0;
switchD_1006c4978_caseD_b2:
  pUVar1 = unaff_x20;
  pUVar2 = unaff_x23 + 0x3d6;
  unaff_x20 = pUVar1;
  unaff_x23 = pUVar2;
switchD_1006c4978_caseD_fe:
  FUN_1000f7830(pUVar1,pUVar2);
  pUVar1 = (Union_Impl_FuncImpl *)&DAT_100fdc6e8;
  param_4 = (Union_Impl_FuncImpl *)
            PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0;
switchD_1006c4978_caseD_1e:
  FUN_100134584(pUVar1,unaff_x20,unaff_x23,param_4);
switchD_1006c4978_caseD_9e:
  FUN_1006b7aa4();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar23 = (extension_Swift)::Swift::Sequence::_joined(separator);
  param_4 = pUVar1;
switchD_1006c4978_caseD_8a:
  unaff_x24 = SVar23.bridgeObject;
  pcVar4 = (char *)0x0;
  FUN_1006c63e0();
  SVar28.bridgeObject = param_4;
  SVar28.str = pcVar4;
  Swift::String::append(SVar23,SVar28);
switchD_1006c4978_caseD_7a:
  pUVar1 = unaff_x21;
switchD_1006c4978_caseD_c0:
  _swift_bridgeObjectRelease(pUVar1);
LAB_1006c5160:
  _swift_bridgeObjectRelease(unaff_x24);
  pUVar1 = in_stack_00000020;
  unaff_x21 = in_stack_00000028;
  goto LAB_1006c519c;
switchD_1006c4978_caseD_90:
  pUVar1 = (Union_Impl_FuncImpl *)((long)pUVar5 + 0x16);
  goto switchD_1006c4978_caseD_0;
switchD_1006c4978_caseD_37:
  auVar19._8_8_ = pUVar2;
  auVar19._0_8_ = 0xd000000000000027;
  return auVar19;
switchD_1006c4978_caseD_0:
  auVar17._8_8_ = pUVar2;
  auVar17._0_8_ = pUVar1;
  return auVar17;
switchD_1006c4978_caseD_7c:
  auVar10._0_8_ = (ulong)pUVar1 & 0xffff | 0x6f662d776f6c0000;
  auVar10._8_8_ = pUVar2;
  return auVar10;
switchD_1006c4978_caseD_e2:
  auVar16._0_8_ = (ulong)pUVar1 & 0xffff | 0x6f702d776f6c0000;
  auVar16._8_8_ = pUVar2;
  return auVar16;
switchD_1006c4978_caseD_f7:
  auVar18._8_8_ = pUVar2;
  auVar18._0_8_ = pUVar1;
  return auVar18;
switchD_1006c4978_caseD_10:
  auVar12._8_8_ = (ulong)pUVar2 & 0xffffffff | 0xed00007300000000;
  auVar12._0_8_ = 0x63732d776f6c6c61;
  return auVar12;
switchD_1006c4978_caseD_8f:
  unaff_x21 = pUVar7;
  if (!(bool)in_ZR) {
    unaff_x21 = UNRECOVERED_JUMPTABLE;
  }
LAB_1006c519c:
  auVar26._8_8_ = unaff_x21;
  auVar26._0_8_ = pUVar1;
  return auVar26;
}



/* Address: 0x1006c4afc | FUN_1006c4afc */

undefined1  [16]
FUN_1006c4afc(code *****param_1,code *****param_2,Index UNRECOVERED_JUMPTABLE_06,
             UnicodeScalarView param_4,code ******param_5,code ******param_6,code *****param_7,
             code *****param_8,code *****param_9,code *****param_10,code *****param_11,
             code *****param_12,code *****param_13,code *****param_14,code *****param_15)

{
  short sVar1;
  long *plVar2;
  byte bVar3;
  code *pcVar4;
  char in_NG;
  undefined1 in_ZR;
  char in_OV;
  bool bVar5;
  int iVar6;
  UnsafeMutablePointer UVar7;
  _DictionaryStorage *this;
  Date DVar8;
  Date DVar9;
  _StringGuts _Var10;
  code ****UNRECOVERED_JUMPTABLE_07;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined *puVar13;
  TargetProtocolConformanceDescriptor *pTVar14;
  UnsafeBufferPointer<__int8> UVar15;
  code ****ppppcVar17;
  _StringGuts _Var18;
  undefined1 *puVar19;
  undefined8 uVar20;
  char *pcVar21;
  ushort uVar22;
  code ******ppppppcVar23;
  code *****UNRECOVERED_JUMPTABLE;
  code *****pppppcVar24;
  code ******ppppppcVar25;
  ulong uVar26;
  long extraout_x8;
  long lVar27;
  uint uVar28;
  uint uVar29;
  code *****pppppcVar30;
  code *****pppppcVar31;
  undefined1 *puVar32;
  code ******ppppppcVar33;
  uint uVar34;
  long lVar35;
  ushort uVar36;
  ulong in_x16;
  UnsafeMutablePointer unaff_x19;
  code ***pppcVar37;
  code ******ppppppcVar38;
  UnicodeScalarView unaff_x20;
  code ******unaff_x21;
  code *****pppppcVar39;
  long *plVar40;
  code ******unaff_x22;
  ulong uVar41;
  code *****unaff_x23;
  code *****pppppcVar42;
  code ****ppppcVar43;
  ulong uVar44;
  code ******unaff_x24;
  code *****pppppcVar45;
  code ****ppppcVar46;
  code ******unaff_x25;
  code *****pppppcVar47;
  code ******unaff_x26;
  code *****pppppcVar48;
  _StringGuts unaff_x27;
  code *****pppppcVar49;
  _StringGuts unaff_x28;
  code *****pppppcVar50;
  ulong uVar51;
  code *****unaff_x29;
  code ******unaff_x30;
  double dVar52;
  double dVar53;
  code *****in_register_00005008;
  undefined1 uVar54;
  code *****in_register_00005028;
  String SVar55;
  String SVar56;
  String SVar57;
  String separator_00;
  String SVar58;
  String separator_01;
  String SVar59;
  String separator_02;
  String SVar60;
  String separator_03;
  String SVar61;
  String separator_04;
  String SVar62;
  String separator_05;
  String SVar63;
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  String SVar77;
  String SVar78;
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  undefined1 auVar100 [16];
  undefined1 auVar101 [16];
  undefined1 auVar102 [16];
  undefined1 auVar103 [16];
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  String SVar109;
  String SVar110;
  String SVar111;
  String SVar112;
  String SVar113;
  String SVar114;
  String SVar115;
  String SVar116;
  String SVar117;
  String SVar118;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  undefined1 *puStack_80;
  code *****in_stack_ffffffffffffff90;
  UnsafeMutablePointer local_68;
  undefined8 in_stack_ffffffffffffffa0;
  code ******in_stack_ffffffffffffffa8;
  code *****local_50;
  code *****pppppcStack_48;
  code ******ppppppcVar119;
  String separator;
  void *pvVar16;
  
  SVar56.bridgeObject = param_4.unknown;
  SVar56.str = (char *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
  ppppppcVar23 = (code ******)((ulong)param_5 & 0xff);
  uVar22 = *(ushort *)(&switchD_1006c4b30::switchdataD_100c70f10 + (long)ppppppcVar23 * 2);
  sVar1 = uVar22 * 4;
  UVar7.unknown = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
  ppppppcVar38 = (code ******)unaff_x19.unknown;
  UNRECOVERED_JUMPTABLE = unaff_x23;
  ppppppcVar25 = unaff_x24;
  ppppppcVar119 = unaff_x21;
  switch(ppppppcVar23) {
  default:
    unaff_x19 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
  case (code ******)0x3c:
  case (code ******)0x43:
  case (code ******)0x63:
  case (code ******)0x7f:
  case (code ******)0x8c:
  case (code ******)0x93:
  case (code ******)0xa0:
  case (code ******)0xa7:
  case (code ******)0xc7:
  case (code ******)0xe7:
    unaff_x22 = (code ******)param_4.unknown;
switchD_1006c4b30_caseD_3b:
    FUN_1006c44b4();
    UVar7.unknown = (undefined *)(code ******)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
switchD_1006c4b30_caseD_37:
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)param_4.unknown;
    local_50 = (code *****)UVar7.unknown;
    unaff_x21 = (code ******)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    pppppcStack_48 = (code *****)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    if (unaff_x22[2] == (code *****)0x0) goto LAB_1006c519c;
switchD_1006c4b30_caseD_15:
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    SVar55.bridgeObject = (void *)0xe100000000000000;
    SVar55.str = (char *)0x20;
    SVar104.bridgeObject = param_6;
    SVar104.str = (char *)param_5;
    Swift::String::append(SVar55,SVar104);
    local_68.unknown = (undefined *)unaff_x22;
switchD_1006c4b30_caseD_16:
    _swift_bridgeObjectRetain(unaff_x22);
    FUN_1000f7830(&DAT_100fdc6e0,&BYTE_100c70f58);
    unaff_x23 = (code *****)&DAT_100fdc6e8;
    FUN_100134584(&DAT_100fdc6e8,&DAT_100fdc6e0,&BYTE_100c70f58,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x20;
switchD_1006c4b30_caseD_35:
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator);
    pvVar16 = SVar56.bridgeObject;
    pcVar21 = (char *)0x0;
    FUN_1006c63e0(unaff_x19.unknown,unaff_x22);
    SVar105.bridgeObject = unaff_x23;
    SVar105.str = pcVar21;
    Swift::String::append(SVar56,SVar105);
    _swift_bridgeObjectRelease(unaff_x21);
    goto LAB_1006c5160;
  case (code ******)0x1:
    local_50 = (code *****)0x6972752d65736162;
    unaff_x21 = (code ******)&DAT_e800000000000000;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
    local_50 = (code *****)0x6972752d65736162;
    pppppcStack_48 = (code *****)&DAT_e800000000000000;
    SVar61.bridgeObject = (void *)0xe100000000000000;
    SVar61.str = (char *)0x20;
    SVar110.bridgeObject = param_6;
    SVar110.str = (char *)param_5;
    Swift::String::append(SVar61,SVar110);
    local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6c0,&BYTE_100c70f48);
    puVar13 = &DAT_100fdc6c8;
    FUN_100134584(&DAT_100fdc6c8,&DAT_100fdc6c0,&BYTE_100c70f48,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_04.bridgeObject = (void *)0xe100000000000000;
    separator_04.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_04);
    pcVar21 = &DAT_00000001;
    break;
  case (code ******)0x2:
    local_50 = (code *****)0x786f62646e6173;
    unaff_x21 = (code ******)&DAT_e700000000000000;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
    local_50 = (code *****)0x786f62646e6173;
    pppppcStack_48 = (code *****)&DAT_e700000000000000;
    SVar58.bridgeObject = (void *)0xe100000000000000;
    SVar58.str = (char *)0x20;
    SVar107.bridgeObject = param_6;
    SVar107.str = (char *)param_5;
    Swift::String::append(SVar58,SVar107);
    local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6d0,&BYTE_100c70f50);
    puVar13 = &DAT_100fdc6d8;
    FUN_100134584(&DAT_100fdc6d8,&DAT_100fdc6d0,&BYTE_100c70f50,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_01.bridgeObject = (void *)0xe100000000000000;
    separator_01.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_01);
    pcVar21 = (char *)0x2;
    break;
  case (code ******)0x3:
    unaff_x21 = (code ******)&DAT_eb000000006e6f69;
    local_50 = (code *****)0x7463612d6d726f66;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
    local_50 = (code *****)0x7463612d6d726f66;
    pppppcStack_48 = (code *****)&DAT_eb000000006e6f69;
    SVar59.bridgeObject = (void *)0xe100000000000000;
    SVar59.str = (char *)0x20;
    SVar108.bridgeObject = param_6;
    SVar108.str = (char *)param_5;
    Swift::String::append(SVar59,SVar108);
    local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6c0,&BYTE_100c70f48);
    puVar13 = &DAT_100fdc6c8;
    FUN_100134584(&DAT_100fdc6c8,&DAT_100fdc6c0,&BYTE_100c70f48,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_02.bridgeObject = (void *)0xe100000000000000;
    separator_02.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_02);
    pcVar21 = (char *)0x3;
    break;
  case (code ******)0x4:
    unaff_x21 = (code ******)0xef73726f74736563;
    local_50 = (code *****)0x6e612d656d617266;
    UVar7.unknown = (undefined *)local_50;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
  case (code ******)0x47:
  case (code ******)0x67:
  case (code ******)0x83:
  case (code ******)0x97:
  case (code ******)0xab:
  case (code ******)0xcb:
  case (code ******)0xeb:
    unaff_x19 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    local_50 = (code *****)UVar7.unknown;
    pppppcStack_48 = (code *****)unaff_x21;
switchD_1006c4b30_caseD_a:
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x19.unknown;
    SVar57.bridgeObject = (void *)0xe100000000000000;
    SVar57.str = (char *)0x20;
    SVar106.bridgeObject = param_6;
    SVar106.str = (char *)param_5;
    Swift::String::append(SVar57,SVar106);
    local_68.unknown = (undefined *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6c0,&BYTE_100c70f48);
    puVar13 = &DAT_100fdc6c8;
    FUN_100134584(&DAT_100fdc6c8,&DAT_100fdc6c0,&BYTE_100c70f48,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_00.bridgeObject = (void *)0xe100000000000000;
    separator_00.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_00);
    pcVar21 = (char *)0x4;
    break;
  case (code ******)0x5:
    local_68.unknown = (undefined *)0x742d74726f706572;
    unaff_x21 = (code ******)0xea0000000000206f;
    goto LAB_1006c5188;
  case (code ******)0x6:
    local_50 = (code *****)0xd000000000000019;
    unaff_x21 = (code ******)0x8000000100db0340;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
    local_50 = (code *****)0xd000000000000019;
    pppppcStack_48 = (code *****)0x8000000100db0340;
    SVar62.bridgeObject = (void *)0xe100000000000000;
    SVar62.str = (char *)0x20;
    SVar111.bridgeObject = param_6;
    SVar111.str = (char *)param_5;
    Swift::String::append(SVar62,SVar111);
    local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6b0,&BYTE_100c70f40);
    puVar13 = &DAT_100fdc6b8;
    FUN_100134584(&DAT_100fdc6b8,&DAT_100fdc6b0,&BYTE_100c70f40,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_05.bridgeObject = (void *)0xe100000000000000;
    separator_05.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_05);
    pcVar21 = (char *)0x6;
    break;
  case (code ******)0x7:
    unaff_x21 = (code ******)0xed00007365707974;
    local_50 = (code *****)0x2d64657473757274;
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10) == (code *****)0x0
       ) goto LAB_1006c519c;
    local_50 = (code *****)0x2d64657473757274;
    pppppcStack_48 = (code *****)0xed00007365707974;
    SVar60.bridgeObject = (void *)0xe100000000000000;
    SVar60.str = (char *)0x20;
    SVar109.bridgeObject = param_6;
    SVar109.str = (char *)param_5;
    Swift::String::append(SVar60,SVar109);
    local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    FUN_1000f7830(&DAT_100fdc6a0,&BYTE_100c70f38);
    puVar13 = &DAT_100fdc6a8;
    FUN_100134584(&DAT_100fdc6a8,&DAT_100fdc6a0,&BYTE_100c70f38,
                  PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0)
    ;
    FUN_1006b7aa4();
    separator_03.bridgeObject = (void *)0xe100000000000000;
    separator_03.str = (char *)0x20;
    SVar56 = (extension_Swift)::Swift::Sequence::_joined(separator_03);
    pcVar21 = (char *)0x7;
    break;
  case (code ******)0x8:
    local_68.unknown = (undefined *)0x752d74726f706572;
    unaff_x21 = (code ******)0xeb00000000206972;
LAB_1006c5188:
    SVar63.bridgeObject = param_4.unknown;
    SVar63.str = (char *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    SVar113.bridgeObject = param_6;
    SVar113.str = (char *)param_5;
    Swift::String::append(SVar63,SVar113);
    local_50 = (code *****)local_68.unknown;
    goto LAB_1006c519c;
  case (code ******)0x9:
    pcVar21 = "block-all-mixed-content";
    local_50 = (code *****)(code ******)0xd000000000000019;
    if ((code ******)param_4.unknown != (code ******)0x0 ||
        UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown != (undefined *)0x0) {
      pcVar21 = "fenced-frame-src";
      local_50 = (code *****)(code ******)0xd000000000000017;
    }
    unaff_x21 = (code ******)((ulong)pcVar21 | 0x8000000000000000);
    goto LAB_1006c519c;
  case (code ******)0xa:
    goto switchD_1006c4b30_caseD_a;
  case (code ******)0xb:
    auVar67._8_8_ = param_4.unknown;
    auVar67._0_8_ = (code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x50);
    return auVar67;
  case (code ******)0xc:
    while (uVar54 = SUB81(unaff_x29,0), ((ulong)param_4.unknown & 1) == 0) {
LAB_1006d2ad0:
      uVar51 = (ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown >> 3 & 0x1ffffffffffffff8;
      lVar35 = *(long *)(unaff_x20.unknown + 0x30);
      *(ulong *)((long)unaff_x23 + uVar51) =
           *(ulong *)((long)unaff_x23 + uVar51) |
           (long)unaff_x24 << ((ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown & 0x3f);
      puVar11 = (undefined8 *)(lVar35 + (long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown * 0x10);
      *puVar11 = unaff_x21;
      puVar11[1] = unaff_x22;
      puVar32 = (undefined1 *)
                (*(long *)(unaff_x20.unknown + 0x38) +
                (long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown * (long)unaff_x25);
      *puVar32 = uVar54;
      *(code *******)(puVar32 + 8) = unaff_x30;
      *(code ******)(puVar32 + 0x10) = param_11;
      *(code ******)(puVar32 + 0x20) = param_13;
      *(code ******)(puVar32 + 0x18) = param_12;
      *(code ******)(puVar32 + 0x30) = param_15;
      *(code ******)(puVar32 + 0x28) = param_14;
      if (SCARRY8(*(long *)(unaff_x20.unknown + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006d2bf0);
        (*pcVar4)();
      }
      *(long *)(unaff_x20.unknown + 0x10) = *(long *)(unaff_x20.unknown + 0x10) + 1;
      if (unaff_x26 + 9 == (code ******)0x0) {
        _swift_release(unaff_x20.unknown);
        _swift_setDeallocating();
        puVar13 = &DAT_100fdd040;
        FUN_1000f7830(&DAT_100fdd040,&DAT_100c71a70);
        _swift_arrayDestroy((code ******)((long)unaff_x19.unknown + 0x20),0x4b,puVar13);
        uVar20 = 0x20;
        _swift_deallocClassInstance();
        DAT_101058110 = unaff_x20.unknown;
        auVar69._8_8_ = uVar20;
        auVar69._0_8_ = unaff_x19.unknown;
        return auVar69;
      }
      puVar32 = (undefined1 *)((long)unaff_x19.unknown + (long)unaff_x26);
      unaff_x22 = *(code *******)(puVar32 + 0x1588);
      unaff_x21 = *(code *******)(puVar32 + 0x1580);
      unaff_x30 = *(code *******)(puVar32 + 0x1598);
      unaff_x29 = *(code ******)(puVar32 + 0x1590);
      param_12 = *(code ******)(puVar32 + 0x15a8);
      param_11 = *(code ******)(puVar32 + 0x15a0);
      param_14 = *(code ******)(puVar32 + 0x15b8);
      param_13 = *(code ******)(puVar32 + 0x15b0);
      param_15 = *(code ******)(puVar32 + 0x15c0);
      FUN_1006d3c88(&stack0xffffffffffffffe0,&local_68);
      UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
           (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x21;
      param_4.unknown = (undefined *)unaff_x22;
      FUN_10046483c();
      unaff_x26 = unaff_x26 + 9;
    }
    goto LAB_1006d2b7c;
  case (code ******)0xd:
    ppppppcVar23[4] = in_register_00005008;
    ppppppcVar23[3] = param_1;
    ppppppcVar23[6] = in_register_00005008;
    ppppppcVar23[5] = param_1;
    auVar68._8_8_ = param_4.unknown;
    auVar68._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar68;
  case (code ******)0xe:
    if (in_NG == in_OV) {
      uVar22 = 0x3a;
    }
    if (UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown == (undefined *)0x0) {
      uVar29 = 0;
      uVar28 = 0;
    }
    else {
      uVar34 = 0;
      do {
        bVar3 = *(byte *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
        if ((bVar3 < 0x30) || ((uVar22 & 0xff) <= (ushort)bVar3)) {
          uVar36 = (ushort)bVar3;
          if ((uVar36 < 0x41) || ((sVar1 + 0x4b34U & 0xff) <= uVar36)) {
            uVar29 = 0;
            uVar28 = 0x10000;
            if ((uVar36 < 0x61) || (0xf < uVar36)) goto LAB_1006cad48;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar29 = (uVar34 & 0xffff) * ((uint)param_5 & 0xffff);
        if (((uVar29 & 0xffff0000) != 0) ||
           (uVar34 = (uVar29 & 0xffff) + ((uint)bVar3 + iVar6 & 0xff), uVar34 >> 0x10 != 0)) {
          uVar29 = 0;
          uVar28 = 0x10000;
          goto LAB_1006cad48;
        }
        UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
             (UnsafeMutablePointer)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 1);
        param_4.unknown = param_4.unknown + -1;
      } while ((code ******)param_4.unknown != (code ******)0x0);
      uVar28 = 0;
      uVar29 = uVar34;
    }
LAB_1006cad48:
    auVar66._4_4_ = 0;
    auVar66._0_4_ = uVar28 | uVar29 & 0xffff;
    auVar66._8_8_ = param_4.unknown;
    return auVar66;
  case (code ******)0xf:
    auVar65._8_8_ = param_4.unknown;
    auVar65._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar65;
  case (code ******)0x10:
    puVar13 = (undefined *)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0xe54);
    uVar20 = 0;
    _swift_task_switch(puVar13,0,0);
    auVar70._8_8_ = uVar20;
    auVar70._0_8_ = puVar13;
    return auVar70;
  case (code ******)0x14:
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x26;
    (*(code *)unaff_x24)();
  case (code ******)0x54:
    unaff_x22[0x10] = (code *****)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    SVar56 = Swift::CustomStringConvertible::get_description();
    *(String *)(unaff_x21 + 6) = SVar56;
    param_4.unknown = (undefined *)unaff_x23[2];
switchD_1006c4b30_caseD_18:
    UNRECOVERED_JUMPTABLE = (code *****)unaff_x23[4];
    unaff_x28.unknown = (undefined *)unaff_x21;
    unaff_x27.unknown = param_4.unknown;
    FUN_1006db26c();
    _swift_release();
    thunk_FUN_10085c548();
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x21;
    in_stack_ffffffffffffffa8 = (code ******)param_4.unknown;
switchD_1006c4b30_caseD_1c:
    ppppppcVar23 = unaff_x26;
    (*(code *)unaff_x24)();
    unaff_x22 = unaff_x22 + 0x11;
    *unaff_x22 = (code *****)ppppppcVar23;
    ppppppcVar119 = unaff_x24;
    unaff_x30 = (code ******)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
switchD_1006c4b30_caseD_20:
    SVar56 = Swift::CustomStringConvertible::get_description();
    param_5 = (code ******)0x2d746e65746e6f43;
    param_7 = (code *****)0x2d746e65746e6f63;
    param_6 = (code ******)0xee006874676e654c;
switchD_1006c4b30_caseD_24:
    FUN_10085c664(SVar56.str,SVar56.bridgeObject,param_5,param_6,param_7,(ulong)param_6 | 0x20);
switchD_1006c4b30_caseD_2c:
    unaff_x21 = unaff_x26;
    ppppppcVar25 = unaff_x25;
    (*(code *)unaff_x23)();
    FUN_100701f80();
    ppppppcVar23 = unaff_x24;
switchD_1006c4b30_caseD_30:
    (*(code *)ppppppcVar23)();
    FUN_10085c664(unaff_x21,ppppppcVar25,0x646f4d2d7473614c,0xed00006465696669,0x646f6d2d7473616c,
                  0xed00006465696669);
    _swift_bridgeObjectRetain(unaff_x27.unknown);
    FUN_10085c664(unaff_x28.unknown,unaff_x27.unknown,0x67615445,&DAT_e400000000000000,0x67617465,
                  &DAT_e400000000000000);
    ppppppcVar23 = (code ******)pppppcStack_48;
    FUN_1006db3a0(local_50,pppppcStack_48,in_stack_ffffffffffffffa8,unaff_x20.unknown,
                  UNRECOVERED_JUMPTABLE,unaff_x19.unknown);
    if (ppppppcVar23 != (code ******)0x0) {
      lVar35 = *(long *)((long)unaff_x29[0x1b] + (long)*(int *)((long)unaff_x29[0x1a] + 0x4c));
      if (*(long *)(lVar35 + 0x10) == 0) {
LAB_1006da058:
        ppppppcVar25 = ppppppcVar23;
        FUN_1006d331c(unaff_x22 + -8,local_50,ppppppcVar23);
        _swift_bridgeObjectRelease(ppppppcVar23);
        UNRECOVERED_JUMPTABLE_07 = unaff_x29[0xb];
        if (UNRECOVERED_JUMPTABLE_07 == (code ****)0x0) goto LAB_1006da118;
        ppppcVar43 = unaff_x29[0xe];
        ppppcVar46 = unaff_x29[0xf];
        ppppcVar17 = unaff_x29[0xc];
        ppppppcVar38 = (code ******)unaff_x29[0xd];
        ppppppcVar33 = (code ******)unaff_x29[10];
        uVar54 = *(undefined1 *)(unaff_x29 + 9);
      }
      else {
        _swift_bridgeObjectRetain(lVar35);
        ppppppcVar25 = (code ******)local_50;
        ppppppcVar38 = ppppppcVar23;
        FUN_10046483c();
        if (((ulong)ppppppcVar38 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar35);
          goto LAB_1006da058;
        }
        puVar32 = (undefined1 *)(*(long *)(lVar35 + 0x38) + (long)ppppppcVar25 * 0x38);
        uVar54 = *puVar32;
        pppppcStack_48 = *(code ******)(puVar32 + 8);
        UNRECOVERED_JUMPTABLE_07 = *(code *****)(puVar32 + 0x10);
        ppppcVar17 = *(code *****)(puVar32 + 0x18);
        ppppppcVar38 = *(code *******)(puVar32 + 0x20);
        ppppcVar43 = *(code *****)(puVar32 + 0x28);
        ppppcVar46 = *(code *****)(puVar32 + 0x30);
        _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE_07);
        ppppppcVar25 = ppppppcVar38;
        FUN_1006bcff0(ppppcVar17,ppppppcVar38,ppppcVar43,ppppcVar46);
        _swift_bridgeObjectRelease(lVar35);
        _swift_bridgeObjectRelease(ppppppcVar23);
        ppppppcVar33 = (code ******)pppppcStack_48;
      }
      *(undefined1 *)(unaff_x29 + 2) = uVar54;
      unaff_x29[3] = (code ****)ppppppcVar33;
      unaff_x29[4] = UNRECOVERED_JUMPTABLE_07;
      unaff_x29[5] = ppppcVar17;
      unaff_x29[6] = (code ****)ppppppcVar38;
      unaff_x29[7] = ppppcVar43;
      unaff_x29[8] = ppppcVar46;
      FUN_1006cfc74();
      _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_07);
      FUN_1006bf814(ppppcVar17,ppppppcVar38,ppppcVar43,ppppcVar46);
      FUN_10085c664(ppppppcVar23,ppppppcVar25,0x2d746e65746e6f43,0xec00000065707954,
                    0x2d746e65746e6f63,0xec00000065707974);
    }
LAB_1006da118:
    ppppcVar43 = unaff_x29[0x1b];
    UNRECOVERED_JUMPTABLE_07 = unaff_x29[0x16];
    ppppcVar17 = unaff_x29[0x17];
    FUN_10085c664(0x7365747962,&DAT_e500000000000000,0x522d747065636341,0xed00007365676e61,
                  0x722d747065636361,0xed00007365676e61);
    FUN_1006bf090(UNRECOVERED_JUMPTABLE_07,ppppcVar17,*ppppcVar43);
    if (ppppcVar17 != (code ****)0x0) {
      FUN_10085c664();
    }
    pppcVar37 = unaff_x29[0x19][0x17];
    lVar35 = 0x2d656e6f4e2d6649;
    FUN_10085ca84(0x2d656e6f4e2d6649,0xed0000686374614d,0x2d656e6f6e2d6669,0xed0000686374616d,
                  pppcVar37);
    if (*(long *)(lVar35 + 0x10) != 0) {
      plVar40 = (long *)(lVar35 + 0x28);
      lVar27 = *(long *)(lVar35 + 0x10) + 1;
      do {
        lVar27 = lVar27 + -1;
        if (lVar27 == 0) {
          _swift_bridgeObjectRelease(lVar35);
          _swift_bridgeObjectRelease(unaff_x27.unknown);
          goto LAB_1006da39c;
        }
        plVar2 = plVar40 + -1;
        if (unaff_x28.unknown == (undefined *)*plVar2 && unaff_x27.unknown == (undefined *)*plVar40)
        break;
        plVar40 = plVar40 + 2;
        bVar5 = Swift::_stringCompareWithSmolCheck
                          (unaff_x28,unaff_x27,(_StringComparisonResult)(__int8)(undefined *)*plVar2
                          );
      } while (!bVar5);
      _swift_bridgeObjectRelease(lVar35);
      _swift_bridgeObjectRelease(unaff_x27.unknown);
LAB_1006da260:
      uVar51 = 0;
      UNRECOVERED_JUMPTABLE_07 = (code ****)0x0;
      uVar20 = 0;
      goto LAB_1006da7d8;
    }
    _swift_bridgeObjectRelease(lVar35);
    _swift_bridgeObjectRelease(unaff_x27.unknown);
    lVar35 = -0x7ffffffeff24f3f0;
    FUN_10085c5ec(0xd000000000000011,0x8000000100db0c10,0xd000000000000011,0x8000000100db0c30,
                  pppcVar37);
    if (lVar35 != 0) {
      UNRECOVERED_JUMPTABLE_07 = unaff_x29[0x1d];
      ppppcVar17 = unaff_x29[0x1e];
      ppppcVar43 = unaff_x29[0x1c];
      FUN_100701c70(ppppcVar43);
      (*(code *)ppppcVar17[6])(ppppcVar43,1,UNRECOVERED_JUMPTABLE_07);
      if ((int)ppppcVar43 == 1) {
        FUN_1000fb4c4(unaff_x29[0x1c],&DAT_100fdbf88,&DAT_100c6f990);
      }
      else {
        UNRECOVERED_JUMPTABLE_07 = unaff_x29[0x1f];
        DVar9.unknown = (undefined *)unaff_x29[0x20];
        ppppcVar17 = unaff_x29[0x1d];
        (*(code *)unaff_x29[0x1e][4])(UNRECOVERED_JUMPTABLE_07,unaff_x29[0x1c],ppppcVar17);
        DVar8.unknown = (undefined *)unaff_x26;
        (*(code *)unaff_x23)(DVar9.unknown,unaff_x26,unaff_x25);
        dVar52 = Foundation::Date::get_timeIntervalSince1970(DVar8);
        (*(code *)unaff_x24)(DVar9.unknown,ppppcVar17);
        dVar53 = Foundation::Date::get_timeIntervalSince1970(DVar9);
        (*(code *)unaff_x24)(UNRECOVERED_JUMPTABLE_07,ppppcVar17);
        if ((double)(long)dVar52 <= dVar53) goto LAB_1006da260;
      }
    }
LAB_1006da39c:
    uVar51 = 0x65676e6152;
    uVar29 = 0x676e6172;
    ppppcVar17 = (code ****)&DAT_e500000000000000;
    FUN_10085c5ec();
    if (ppppcVar17 == (code ****)0x0) {
LAB_1006da7cc:
      uVar51 = 0;
      UNRECOVERED_JUMPTABLE_07 = (code ****)0x0;
      uVar20 = 0x81;
    }
    else {
      UNRECOVERED_JUMPTABLE_07 = ppppcVar17;
      FUN_1006db4a0();
      _swift_bridgeObjectRelease(ppppcVar17);
      if ((uVar29 & 0xff) == 1) {
        UNRECOVERED_JUMPTABLE_07 = unaff_x29[0x1f];
        ppppcVar17 = unaff_x29[0x20];
        ppppcVar43 = unaff_x29[0x1c];
        puVar11 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10085d78c();
        puVar12 = puVar11;
        FUN_1006be0ac();
        _swift_allocError(&DAT_100ef7ae0,puVar12,0,0);
        puVar12[1] = 0xd000000000000015;
        *puVar12 = 0x1a0;
        puVar12[2] = 0x8000000100db0c50;
        puVar12[3] = puVar11;
        puVar12[4] = 0xd000000000000028;
        puVar12[5] = 0x8000000100db0c70;
        _swift_willThrow();
        _swift_release(unaff_x30);
        _swift_task_dealloc(ppppcVar17);
        _swift_task_dealloc(UNRECOVERED_JUMPTABLE_07);
        _swift_task_dealloc(ppppcVar43);
        UNRECOVERED_JUMPTABLE_07 = unaff_x29[1];
                    /* WARNING: Could not recover jumptable at 0x0001006da4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)UNRECOVERED_JUMPTABLE_07)();
        auVar76._8_8_ = puVar12;
        auVar76._0_8_ = UNRECOVERED_JUMPTABLE_07;
        return auVar76;
      }
      _Var10.unknown = (undefined *)0x65676e61522d6649;
      pcVar21 = (char *)0x65676e61722d6669;
      _Var18.unknown = &DAT_e800000000000000;
      puVar32 = &DAT_e800000000000000;
      FUN_10085c5ec();
      if (_Var18.unknown != (undefined *)0x0) {
        _swift_bridgeObjectRetain(_Var18.unknown);
        pcVar21 = (char *)0x67615445;
        puVar19 = &DAT_e400000000000000;
        puVar32 = &DAT_e400000000000000;
        FUN_10085c5ec(0x67615445,&DAT_e400000000000000,0x67617465,&DAT_e400000000000000,unaff_x30);
        if (puVar19 == (undefined1 *)0x0) {
          _swift_bridgeObjectRelease(_Var18.unknown);
LAB_1006da57c:
          pcVar21 = (char *)0x646f4d2d7473614c;
          puVar19 = (undefined1 *)0xed00006465696669;
          puVar32 = puVar19;
          FUN_10085c5ec(0x646f4d2d7473614c,0xed00006465696669,0x646f6d2d7473616c,0xed00006465696669,
                        unaff_x30);
          if (puVar19 == (undefined1 *)0x0) {
            _swift_bridgeObjectRelease(_Var18.unknown);
          }
          else {
            if ((_Var10.unknown == pcVar21) && (_Var18.unknown == puVar19)) goto LAB_1006da5d4;
            puVar32 = puVar19;
            bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var10,_Var18,(_StringComparisonResult)(__int8)pcVar21);
            _swift_bridgeObjectRelease(puVar19);
            _swift_bridgeObjectRelease(_Var18.unknown);
            if (bVar5) goto LAB_1006da5ec;
          }
          goto LAB_1006da7cc;
        }
        if ((_Var10.unknown == pcVar21) && (_Var18.unknown == puVar19)) {
          _swift_bridgeObjectRelease(_Var18.unknown);
LAB_1006da5d4:
          _swift_bridgeObjectRelease(_Var18.unknown);
          _Var18.unknown = puVar19;
        }
        else {
          puVar32 = puVar19;
          bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var10,_Var18,(_StringComparisonResult)(__int8)pcVar21);
          _swift_bridgeObjectRelease(puVar19);
          _swift_bridgeObjectRelease(_Var18.unknown);
          if (!bVar5) goto LAB_1006da57c;
        }
        _swift_bridgeObjectRelease(_Var18.unknown);
      }
LAB_1006da5ec:
      ppppppcVar23 = unaff_x26;
      (*(code *)ppppppcVar119)(unaff_x26,unaff_x25);
      if (SBORROW8((long)ppppppcVar23,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006da838);
        (*pcVar4)();
      }
      ppppcVar43 = (code ****)(uVar51 & ((long)uVar51 >> 0x3f ^ 0xffffffffffffffffU));
      ppppcVar17 = (code ****)((long)ppppppcVar23 + -1);
      if ((long)UNRECOVERED_JUMPTABLE_07 <= (long)ppppppcVar23 + -1) {
        ppppcVar17 = UNRECOVERED_JUMPTABLE_07;
      }
      unaff_x29[0x12] = ppppcVar43;
      SVar56 = Swift::CustomStringConvertible::get_description();
      SVar114.bridgeObject = puVar32;
      SVar114.str = pcVar21;
      Swift::String::append(SVar56,SVar114);
      _swift_bridgeObjectRelease(SVar56.bridgeObject);
      SVar77.bridgeObject = (void *)0xe100000000000000;
      SVar77.str = (char *)0x2d;
      SVar115.bridgeObject = puVar32;
      SVar115.str = pcVar21;
      Swift::String::append(SVar77,SVar115);
      unaff_x29[0x13] = ppppcVar17;
      SVar56 = Swift::CustomStringConvertible::get_description();
      SVar116.bridgeObject = puVar32;
      SVar116.str = pcVar21;
      Swift::String::append(SVar56,SVar116);
      _swift_bridgeObjectRelease(SVar56.bridgeObject);
      SVar78.bridgeObject = (void *)0xe100000000000000;
      SVar78.str = (char *)0x2f;
      SVar117.bridgeObject = puVar32;
      SVar117.str = pcVar21;
      Swift::String::append(SVar78,SVar117);
      (*(code *)ppppppcVar119)(unaff_x26,unaff_x25);
      unaff_x29[0x14] = (code ****)unaff_x26;
      SVar56 = Swift::CustomStringConvertible::get_description();
      SVar118.bridgeObject = puVar32;
      SVar118.str = pcVar21;
      Swift::String::append(SVar56,SVar118);
      _swift_bridgeObjectRelease(SVar56.bridgeObject);
      FUN_10085c664(0x207365747962,&DAT_e600000000000000,0x2d746e65746e6f43,0xed000065676e6152,
                    0x2d746e65746e6f63,0xed000065676e6172);
      if (SBORROW8((long)ppppcVar17,(long)ppppcVar43)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006da83c);
        (*pcVar4)();
      }
      if (SCARRY8((long)ppppcVar17 - (long)ppppcVar43,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006da840);
        (*pcVar4)();
      }
      unaff_x22[4] = (code *****)(((long)ppppcVar17 - (long)ppppcVar43) + 1);
      SVar56 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar56.str,SVar56.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      uVar20 = 0x80;
    }
LAB_1006da7d8:
    ppppcVar17 = unaff_x29[0x1f];
    ppppcVar43 = unaff_x29[0x1c];
    _swift_task_dealloc(unaff_x29[0x20]);
    _swift_task_dealloc(ppppcVar17);
    _swift_task_dealloc(ppppcVar43);
                    /* WARNING: Could not recover jumptable at 0x0001006da830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x29[1])(unaff_x30,uVar51,UNRECOVERED_JUMPTABLE_07,uVar20);
    auVar79._8_8_ = uVar51;
    auVar79._0_8_ = unaff_x30;
    return auVar79;
  case (code ******)0x15:
  case (code ******)0x19:
  case (code ******)0x1d:
  case (code ******)0x21:
  case (code ******)0x25:
  case (code ******)0x2d:
  case (code ******)0x31:
  case (code ******)0x32:
  case (code ******)0x55:
  case (code ******)0x75:
  case (code ******)0xb9:
  case (code ******)0xbd:
  case (code ******)0xc1:
  case (code ******)0xd9:
  case (code ******)0xdd:
  case (code ******)0xe1:
  case (code ******)0xf9:
  case (code ******)0xfd:
    goto switchD_1006c4b30_caseD_15;
  case (code ******)0x16:
  case (code ******)0x1a:
  case (code ******)0x1e:
  case (code ******)0x22:
  case (code ******)0x26:
  case (code ******)0x2e:
    goto switchD_1006c4b30_caseD_16;
  case (code ******)0x18:
    goto switchD_1006c4b30_caseD_18;
  case (code ******)0x1c:
    goto switchD_1006c4b30_caseD_1c;
  case (code ******)0x20:
    goto switchD_1006c4b30_caseD_20;
  case (code ******)0x24:
    goto switchD_1006c4b30_caseD_24;
  case (code ******)0x2c:
    goto switchD_1006c4b30_caseD_2c;
  case (code ******)0x30:
    goto switchD_1006c4b30_caseD_30;
  case (code ******)0x34:
    (*(code *)ppppppcVar23)();
    _swift_task_dealloc();
    _swift_task_dealloc();
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001006e3a00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar88._8_8_ = param_4.unknown;
    auVar88._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar88;
  case (code ******)0x35:
  case (code ******)0x3f:
  case (code ******)0x49:
  case (code ******)0x53:
  case (code ******)0x57:
  case (code ******)0x5b:
  case (code ******)0x5f:
  case (code ******)0x69:
  case (code ******)0x73:
  case (code ******)0x77:
  case (code ******)0x7b:
  case (code ******)0x85:
  case (code ******)0x8f:
  case (code ******)0x99:
  case (code ******)0xa3:
  case (code ******)0xad:
  case (code ******)0xb7:
  case (code ******)0xbb:
  case (code ******)0xbf:
  case (code ******)0xc3:
  case (code ******)0xcd:
  case (code ******)0xd7:
  case (code ******)0xdb:
  case (code ******)0xdf:
  case (code ******)0xe3:
  case (code ******)0xed:
  case (code ******)0xf7:
  case (code ******)0xfb:
  case (code ******)0xff:
    goto switchD_1006c4b30_caseD_35;
  case (code ******)0x36:
    pTVar14 = &TargetProtocolConformanceDescriptor_100c72bc8;
    puVar13 = &DAT_100efa290;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72bc8,&DAT_100efa290);
    DAT_100fde0a8 = pTVar14;
    auVar98._8_8_ = puVar13;
    auVar98._0_8_ = pTVar14;
    return auVar98;
  case (code ******)0x37:
  case (code ******)0x4b:
  case (code ******)0x50:
  case (code ******)0x6b:
  case (code ******)0x87:
  case (code ******)0x9b:
  case (code ******)0xaf:
  case (code ******)0xb4:
  case (code ******)0xcf:
  case (code ******)0xd4:
  case (code ******)0xef:
    goto switchD_1006c4b30_caseD_37;
  case (code ******)0x3b:
  case (code ******)0x4f:
  case (code ******)0x6f:
  case (code ******)0x70:
  case (code ******)0x8b:
  case (code ******)0x9f:
  case (code ******)0xb3:
  case (code ******)0xd3:
  case (code ******)0xf3:
  case (code ******)0xf4:
    goto switchD_1006c4b30_caseD_3b;
  case (code ******)0x3e:
    goto switchD_1006c4b30_caseD_3e;
  case (code ******)0x40:
    FUN_1009c2a80();
    *(code *******)unaff_x19.unknown = unaff_x22;
    *(code **)((long)unaff_x19.unknown + 8) = FUN_1006ff7ac;
    UNRECOVERED_JUMPTABLE = unaff_x22[0xf];
    FUN_1009bfdac(UNRECOVERED_JUMPTABLE,UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    auVar101._8_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    auVar101._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar101;
  case (code ******)0x41:
    do {
      if (-0x41 < *(char *)((long)unaff_x24 + (long)unaff_x28.unknown)) goto LAB_10070487c;
      lVar35 = -2;
      do {
        lVar27 = lVar35;
        lVar35 = lVar27 + -1;
      } while ((char)((undefined1 *)((long)unaff_x23 + (long)unaff_x28.unknown))[lVar27] < -0x40);
      while( true ) {
        UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             ((ulong)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + lVar27 * 0x2000 * 8) &
              0xffffffffffff0000 | (ulong)unaff_x27.unknown & 0xffff);
        while( true ) {
          if ((code ******)((ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown >> 0xe) <= unaff_x22
             ) {
            auVar102._8_8_ = param_4.unknown;
            auVar102._0_8_ = unaff_x21;
            return auVar102;
          }
          bVar5 = SBORROW8((long)unaff_x21,1);
          unaff_x21 = (code ******)((long)unaff_x21 + -1);
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1007048e0);
            (*pcVar4)();
          }
          if (((ulong)unaff_x19.unknown >> 0x3c & 1) == 0) break;
          param_4.unknown = unaff_x20.unknown;
          UNRECOVERED_JUMPTABLE_06 =
               Swift::String::UnicodeScalarView::_foreignIndex(UNRECOVERED_JUMPTABLE_06,unaff_x20);
        }
        unaff_x28.unknown =
             (undefined *)((ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown >> 0x10);
        if (((ulong)unaff_x19.unknown >> 0x3d & 1) != 0) break;
        UVar15.unknown = (undefined *)unaff_x26;
        if (((ulong)unaff_x20.unknown >> 0x3c & 1) == 0) {
          param_4.unknown = unaff_x19.unknown;
          local_68 = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
          UVar15 = Swift::_StringObject::get_sharedUTF8(unaff_x20.unknown);
          UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
               (UnsafeMutablePointer)(UnsafeMutablePointer)local_68.unknown;
        }
        uVar29 = (uint)(byte)((undefined1 *)((long)UVar15.unknown + (long)unaff_x28.unknown))[-1];
        if (uVar29 == 0xffffffbf || SCARRY4(uVar29,0x41)) {
          lVar35 = -2;
          do {
            lVar27 = lVar35;
            lVar35 = lVar27 + -1;
          } while ((char)((undefined1 *)((long)UVar15.unknown + (long)unaff_x28.unknown))[lVar27] <
                   -0x40);
        }
        else {
LAB_10070487c:
          lVar27 = -1;
        }
      }
    } while( true );
  case (code ******)0x46:
    _swift_bridgeObjectRetain();
    pcVar4 = FUN_1006eefc4;
    FUN_1006f8c1c();
    _swift_release();
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease();
    _swift_retain();
    _swift_bridgeObjectRelease(puStack_80);
    _swift_bridgeObjectRelease(in_stack_ffffffffffffff90);
    auVar89._8_8_ = pcVar4;
    auVar89._0_8_ = unaff_x20.unknown;
    return auVar89;
  case (code ******)0x48:
    goto switchD_1006c4b30_caseD_48;
  case (code ******)0x4a:
    if (DAT_100fde098 == (TargetProtocolConformanceDescriptor *)0x0) {
      pTVar14 = &TargetProtocolConformanceDescriptor_100c72ad8;
      puVar13 = &DAT_100efa290;
      puStack_80 = &stack0xfffffffffffffff0;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c72ad8,&DAT_100efa290);
      DAT_100fde098 = pTVar14;
      auVar96._8_8_ = puVar13;
      auVar96._0_8_ = pTVar14;
      return auVar96;
    }
    auVar95._8_8_ = param_4.unknown;
    auVar95._0_8_ = DAT_100fde098;
    return auVar95;
  case (code ******)0x52:
  case (code ******)0x56:
  case (code ******)0x5a:
  case (code ******)0x5e:
    goto switchD_1006c4b30_caseD_52;
  case (code ******)0x58:
    goto switchD_1006c4b30_caseD_58;
  case (code ******)0x59:
  case (code ******)0x5d:
  case (code ******)0x61:
  case (code ******)0x79:
  case (code ******)0x7d:
  case (code ******)0x91:
  case (code ******)0xa5:
  case (code ******)0xc5:
  case (code ******)0xe5:
    do {
      if ((ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown < (undefined *)0x10000) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100704abc);
        (*pcVar4)();
      }
      if (((ulong)unaff_x19.unknown >> 0x3c & 1) == 0) {
        uVar51 = (ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown >> 0x10;
        if (((ulong)unaff_x19.unknown >> 0x3d & 1) == 0) {
          UVar15.unknown = (undefined *)(((ulong)unaff_x19.unknown & 0xfffffffffffffff) + 0x20);
          if (((ulong)unaff_x20.unknown >> 0x3c & 1) == 0) {
            param_4.unknown = unaff_x19.unknown;
            UVar15 = Swift::_StringObject::get_sharedUTF8(unaff_x20.unknown);
          }
          if ((byte)UVar15.unknown[uVar51 - 1] == 0xffffffbf ||
              SCARRY4((uint)(byte)UVar15.unknown[uVar51 - 1],0x41)) {
            lVar35 = -2;
            do {
              lVar27 = lVar35;
              lVar35 = lVar27 + -1;
            } while ((char)UVar15.unknown[lVar27 + uVar51] < -0x40);
          }
          else {
LAB_100704a74:
            lVar27 = -1;
          }
        }
        else {
          local_68.unknown = (undefined *)((ulong)unaff_x19.unknown & 0xffffffffffffff);
          if (-0x41 < (char)(&stack0xffffffffffffff8f)[uVar51]) goto LAB_100704a74;
          lVar35 = -2;
          do {
            lVar27 = lVar35;
            lVar35 = lVar27 + -1;
          } while ((char)(&stack0xffffffffffffff90)[lVar27 + uVar51] < -0x40);
        }
        UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
             (UnsafeMutablePointer)((lVar27 + uVar51) * 0x10000 | 5);
      }
      else {
        param_4.unknown = unaff_x20.unknown;
        UNRECOVERED_JUMPTABLE_06 =
             Swift::String::UnicodeScalarView::_foreignIndex(UNRECOVERED_JUMPTABLE_06,unaff_x20);
      }
      unaff_x22 = (code ******)((long)unaff_x22 + -1);
      if ((long)unaff_x22 <= (long)unaff_x21) {
        auVar103._8_8_ = param_4.unknown;
        auVar103._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
        return auVar103;
      }
    } while( true );
  case (code ******)0x5c:
    goto switchD_1006c4b30_caseD_5c;
  case (code ******)0x60:
  case (code ******)0x7c:
    goto switchD_1006c4b30_caseD_60;
  case (code ******)0x66:
    UNRECOVERED_JUMPTABLE = *(code ******)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    FUN_10000cbb0(&stack0xffffffffffffff90);
    (*(code *)param_8[-1][2])();
    FUN_1006e1c5c(&pppppcStack_48,&stack0xffffffffffffff90);
    FUN_100004594(&stack0xffffffffffffff90);
    _swift_beginAccess((code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x60),
                       &stack0xffffffffffffff90,0x21,0);
    if (*(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x60) == (code *****)0x0
       ) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006eee7c);
      (*pcVar4)();
    }
    FUN_1006e8694(param_4.unknown,param_5,&pppppcStack_48,UNRECOVERED_JUMPTABLE[10]);
    _swift_endAccess(&stack0xffffffffffffff90);
    param_4.unknown = (undefined *)param_5;
  case (code ******)0xce:
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)&pppppcStack_48;
    FUN_100004594(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
switchD_1006c4b30_caseD_86:
    auVar91._8_8_ = param_4.unknown;
    auVar91._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar91;
  case (code ******)0x68:
    puStack_80 = (undefined1 *)
                 ((ulong)&stack0xfffffffffffffff0 |
                 (ulong)PTR__swift_async_extendedFramePointerFlags_100eaf070);
    ppppppcVar38 = (code ******)*unaff_x22;
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)ppppppcVar38[0x11];
    unaff_x22 = (code ******)*unaff_x22;
    ppppppcVar38[0x12] = (code *****)unaff_x20.unknown;
switchD_1006c4b30_caseD_52:
    _swift_task_dealloc(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    if (unaff_x20.unknown != (undefined *)0x0) {
      pcVar4 = FUN_1006e39ac;
      uVar20 = 0;
      _swift_task_switch(FUN_1006e39ac,0,0);
      auVar86._8_8_ = uVar20;
      auVar86._0_8_ = pcVar4;
      return auVar86;
    }
    ppppppcVar23 = (code ******)ppppppcVar38[0xf];
    unaff_x20.unknown = (undefined *)ppppppcVar38[0x10];
    unaff_x19.unknown = (undefined *)ppppppcVar38[0xd];
    param_4.unknown = (undefined *)ppppppcVar38[0xe];
switchD_1006c4b30_caseD_48:
    (*(code *)ppppppcVar23[1])(unaff_x20.unknown,param_4.unknown);
    _swift_task_dealloc(unaff_x20.unknown);
    _swift_task_dealloc(unaff_x19.unknown);
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)unaff_x22[1];
switchD_1006c4b30_caseD_3e:
                    /* WARNING: Could not recover jumptable at 0x0001006e39a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown)();
    auVar87._8_8_ = param_4.unknown;
    auVar87._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar87;
  case (code ******)0x6a:
    goto switchD_1006c4b30_caseD_6a;
  case (code ******)0x72:
  case (code ******)0x76:
  case (code ******)0x7a:
    goto switchD_1006c4b30_caseD_72;
  case (code ******)0x74:
    ppppppcVar23[0xd7] = (code *****)unaff_x20.unknown;
    _swift_task_dealloc();
    if (unaff_x20.unknown == (undefined *)0x0) {
      pcVar4 = FUN_1006d87d4;
    }
    else {
      pcVar4 = FUN_1006d8d60;
    }
    uVar20 = 0;
    _swift_task_switch(pcVar4,0,0);
    auVar74._8_8_ = uVar20;
    auVar74._0_8_ = pcVar4;
    return auVar74;
  case (code ******)0x78:
    *(code ******)((long)unaff_x19.unknown + 0x10d0) = (code *****)0x6d736177;
    *(undefined1 **)((long)unaff_x19.unknown + 0x10d8) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x10e8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x10e0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x10f8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x10f0) = (code *****)0x0;
    lVar35 = DAT_100fdcdf8;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdcdf8,FUN_1006cedd4);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058028;
    *(code ******)((long)unaff_x19.unknown + 0x1100) = DAT_101058020;
    *(code ******)((long)unaff_x19.unknown + 0x1108) = UNRECOVERED_JUMPTABLE;
    unaff_x25 = (code ******)&DAT_00000001;
    *(undefined1 *)(unaff_x23 + 0x22) = 1;
    *(code ******)((long)unaff_x19.unknown + 0x1118) = (code *****)0x65766177;
    *(undefined1 **)((long)unaff_x19.unknown + 0x1120) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1130) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1128) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1140) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1138) = (code *****)0x0;
switchD_1006c4b30_caseD_58:
    lVar35 = DAT_100fdce00;
    _swift_bridgeObjectRetain();
    in_ZR = lVar35 == -1;
switchD_1006c4b30_caseD_5c:
    if (!(bool)in_ZR) {
      _swift_once(&DAT_100fdce00,FUN_1006cee60);
    }
    ppppppcVar23 = (code ******)&DAT_101058030;
    unaff_x26 = (code ******)0x6577;
switchD_1006c4b30_caseD_60:
    pppppcVar24 = (code *****)(ulong)((uint)unaff_x26 & 0xffff | 0x6d620000);
    UNRECOVERED_JUMPTABLE = ppppppcVar23[1];
    *(code ******)((long)unaff_x19.unknown + 0x1148) = *ppppppcVar23;
    *(code ******)((long)unaff_x19.unknown + 0x1150) = UNRECOVERED_JUMPTABLE;
    *(char *)(unaff_x23 + 0x2b) = (char)unaff_x25;
    *(code ******)((long)unaff_x19.unknown + 0x1160) = pppppcVar24;
    *(undefined1 **)((long)unaff_x19.unknown + 0x1168) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1178) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1170) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1188) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1180) = (code *****)0x0;
    lVar35 = DAT_100fdce08;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce08,FUN_1006ceeec);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058048;
    *(code ******)((long)unaff_x19.unknown + 0x1190) = DAT_101058040;
    *(code ******)((long)unaff_x19.unknown + 0x1198) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x34) = 9;
    *(code ******)((long)unaff_x19.unknown + 0x11a8) = pppppcVar24;
    *(undefined1 **)((long)unaff_x19.unknown + 0x11b0) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x11c0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x11b8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x11d0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x11c8) = (code *****)0x0;
    lVar35 = DAT_100fdce10;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce10,FUN_1006cef78);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058058;
    *(code ******)((long)unaff_x19.unknown + 0x11d8) = DAT_101058050;
    *(code ******)((long)unaff_x19.unknown + 0x11e0) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x3d) = 4;
    *(code ******)((long)unaff_x19.unknown + 0x11f0) = (code *****)0x70626577;
    *(undefined1 **)((long)unaff_x19.unknown + 0x11f8) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1208) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1200) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1218) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1210) = (code *****)0x0;
    lVar35 = DAT_100fdce18;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce18,FUN_1006cf004);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058068;
    *(code ******)((long)unaff_x19.unknown + 0x1220) = DAT_101058060;
    *(code ******)((long)unaff_x19.unknown + 0x1228) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x46) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x1238) = (code *****)0x74736566696e616d;
    *(code ******)((long)unaff_x19.unknown + 0x1240) = (code *****)0xed00006e6f736a2b;
    *(code ******)((long)unaff_x19.unknown + 0x1250) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1248) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1260) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1258) = (code *****)0x0;
    lVar35 = DAT_100fdce20;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce20,FUN_1006cf0a0);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058078;
    *(code ******)((long)unaff_x19.unknown + 0x1268) = DAT_101058070;
    *(code ******)((long)unaff_x19.unknown + 0x1270) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x4f) = 3;
    *(code ******)((long)unaff_x19.unknown + 0x1280) = (code *****)((long)unaff_x24 + 0x603);
    *(undefined1 **)((long)unaff_x19.unknown + 0x1288) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1298) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1290) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x12a8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x12a0) = (code *****)0x0;
    lVar35 = DAT_100fdce28;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce28,FUN_1006cf12c);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058088;
    *(code ******)((long)unaff_x19.unknown + 0x12b0) = DAT_101058080;
    *(code ******)((long)unaff_x19.unknown + 0x12b8) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x58) = 3;
    *(code ******)((long)unaff_x19.unknown + 0x12c8) = (code *****)0x3266666f77;
    *(undefined1 **)((long)unaff_x19.unknown + 0x12d0) = &DAT_e500000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x12e0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x12d8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x12f0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x12e8) = (code *****)0x0;
    lVar35 = DAT_100fdce30;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce30,FUN_1006cf1bc);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058098;
    *(code ******)((long)unaff_x19.unknown + 0x12f8) = DAT_101058090;
    *(code ******)((long)unaff_x19.unknown + 0x1300) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x61) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x1310) = (code *****)0x6d782b6c6d746878;
    *(code ******)((long)unaff_x19.unknown + 0x1318) = (code *****)((long)unaff_x27.unknown + 9);
    *(code ******)((long)unaff_x19.unknown + 0x1328) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1320) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1338) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1330) = (code *****)0x0;
    lVar35 = DAT_100fdce38;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce38,FUN_1006cf24c);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580a8;
    *(code ******)((long)unaff_x19.unknown + 0x1340) = DAT_1010580a0;
    *(code ******)((long)unaff_x19.unknown + 0x1348) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x6a) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x1358) = (code *****)0x652d736d2e646e76;
    *(code ******)((long)unaff_x19.unknown + 0x1360) = (code *****)0xec0000006c656378;
    *(code ******)((long)unaff_x19.unknown + 0x1370) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1368) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1380) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1378) = (code *****)0x0;
    lVar35 = DAT_100fdce40;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce40,FUN_1006cf2d8);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580b8;
    *(code ******)((long)unaff_x19.unknown + 5000) = DAT_1010580b0;
    *(code ******)((long)unaff_x19.unknown + 0x1390) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x73) = 0;
    *(undefined **)((long)unaff_x19.unknown + 0x13a0) = unaff_x20.unknown + 0x24;
    *(code ******)((long)unaff_x19.unknown + 0x13a8) = (code *****)0x8000000100db0860;
    *(code ******)((long)unaff_x19.unknown + 0x13b8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x13b0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x13c8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x13c0) = (code *****)0x0;
    lVar35 = DAT_100fdce48;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce48,FUN_1006cf364);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580c8;
    *(code ******)((long)unaff_x19.unknown + 0x13d0) = DAT_1010580c0;
    *(code ******)((long)unaff_x19.unknown + 0x13d8) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x7c) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x13e8) = (code *****)0x6c6d78;
    *(code ******)((long)unaff_x19.unknown + 0x13f0) = (code *****)0xe300000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1400) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x13f8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1410) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1408) = (code *****)0x0;
    lVar35 = DAT_100fdce50;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce50,FUN_1006cf3f0);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580d8;
    *(code ******)((long)unaff_x19.unknown + 0x1418) = DAT_1010580d0;
    *(code ******)((long)unaff_x19.unknown + 0x1420) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x85) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x1430) = (code *****)0x70697a;
    *(code ******)((long)unaff_x19.unknown + 0x1438) = (code *****)0xe300000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1448) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1440) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1458) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1450) = (code *****)0x0;
    lVar35 = DAT_100fdce58;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce58,FUN_1006cf47c);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580e8;
    *(code ******)((long)unaff_x19.unknown + 0x1460) = DAT_1010580e0;
    *(code ******)((long)unaff_x19.unknown + 0x1468) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x8e) = 9;
    *(code ******)((long)unaff_x19.unknown + 0x1478) = (code *****)0x70706733;
    *(undefined1 **)((long)unaff_x19.unknown + 0x1480) = &DAT_e400000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x1490) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1488) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x14a0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1498) = (code *****)0x0;
    lVar35 = DAT_100fdce60;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce60,FUN_1006cf508);
    }
    UNRECOVERED_JUMPTABLE = DAT_1010580f8;
    *(code ******)((long)unaff_x19.unknown + 0x14a8) = DAT_1010580f0;
    *(code ******)((long)unaff_x19.unknown + 0x14b0) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0x97) = 9;
    *(code ******)((long)unaff_x19.unknown + 0x14c0) = (code *****)0x3270706733;
    *(undefined1 **)((long)unaff_x19.unknown + 0x14c8) = &DAT_e500000000000000;
    *(code ******)((long)unaff_x19.unknown + 0x14d8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x14d0) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x14e8) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x14e0) = (code *****)0x0;
    lVar35 = DAT_100fdce68;
    _swift_bridgeObjectRetain();
    if (lVar35 != -1) {
      _swift_once(&DAT_100fdce68,FUN_1006cf594);
    }
    UNRECOVERED_JUMPTABLE = DAT_101058108;
    *(code ******)((long)unaff_x19.unknown + 0x14f0) = DAT_101058100;
    *(code ******)((long)unaff_x19.unknown + 0x14f8) = UNRECOVERED_JUMPTABLE;
    *(undefined1 *)(unaff_x23 + 0xa0) = 0;
    *(code ******)((long)unaff_x19.unknown + 0x1508) = (code *****)0x6d6f632d7a372d78;
    *(code ******)((long)unaff_x19.unknown + 0x1510) = (code *****)0xef64657373657270;
    *(code ******)((long)unaff_x19.unknown + 0x1520) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1518) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1530) = (code *****)0x0;
    *(code ******)((long)unaff_x19.unknown + 0x1528) = (code *****)0x0;
    this = (_DictionaryStorage *)&DAT_100fdc490;
    FUN_1000f7830(&DAT_100fdc490,&DAT_100c706b8);
    unaff_x20.unknown = (undefined *)0x4b;
    Swift::_DictionaryStorage::_allocate(this,0x4b);
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE);
    _swift_retain(unaff_x20.unknown);
    unaff_x22 = *(code *******)((long)unaff_x19.unknown + 0x28);
    unaff_x21 = *(code *******)((long)unaff_x19.unknown + 0x20);
    unaff_x30 = *(code *******)((long)unaff_x19.unknown + 0x38);
    uVar54 = SUB81(*(code ******)((long)unaff_x19.unknown + 0x30),0);
    param_12 = *(code ******)((long)unaff_x19.unknown + 0x48);
    param_11 = *(code ******)((long)unaff_x19.unknown + 0x40);
    param_14 = *(code ******)((long)unaff_x19.unknown + 0x58);
    param_13 = *(code ******)((long)unaff_x19.unknown + 0x50);
    param_15 = *(code ******)((long)unaff_x19.unknown + 0x60);
    FUN_1006d3c88(&stack0xffffffffffffffe0,&local_68);
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)unaff_x21;
    ppppppcVar23 = unaff_x22;
    FUN_10046483c();
    if (((ulong)ppppppcVar23 & 1) == 0) {
      unaff_x23 = (code *****)(unaff_x20.unknown + 0x40);
      unaff_x26 = (code ******)0xffffffffffffeae8;
      unaff_x24 = (code ******)&DAT_00000001;
      unaff_x25 = (code ******)&DAT_00000038;
      goto LAB_1006d2ad0;
    }
LAB_1006d2b7c:
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006d2b80);
    (*pcVar4)();
  case (code ******)0x82:
    *(undefined **)unaff_x19.unknown = unaff_x20.unknown;
    auVar92._8_8_ = param_4.unknown;
    auVar92._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar92;
  case (code ******)0x84:
    goto switchD_1006c4b30_caseD_84;
  case (code ******)0x86:
    goto switchD_1006c4b30_caseD_86;
  case (code ******)0x8e:
    (extension_Swift)::Swift::Collection::_dropFirst
              ((__int64)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    unaff_x20.unknown = (undefined *)0xf0;
    _swift_task_alloc();
    unaff_x22[0x11] = (code *****)unaff_x20.unknown;
switchD_1006c4b30_caseD_84:
    _swift_getAssociatedConformanceWitness();
    *(code *******)unaff_x20.unknown = unaff_x22;
    *(code **)((long)unaff_x20.unknown + 8) = switchD_1006c4b30::caseD_68;
    param_4.unknown = (undefined *)unaff_x22[0x10];
    param_10 = unaff_x22[0xe];
    param_8 = unaff_x22[7];
    param_9 = unaff_x22[8];
switchD_1006c4b30_caseD_72:
    UNRECOVERED_JUMPTABLE = unaff_x22[2];
    FUN_1006e3404(UNRECOVERED_JUMPTABLE,param_4.unknown,unaff_x22[3],unaff_x22[4],unaff_x22[6],
                  param_8,param_9,param_10);
    auVar85._8_8_ = param_4.unknown;
    auVar85._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar85;
  case (code ******)0x90:
    auVar71._8_8_ = param_4.unknown;
    auVar71._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar71;
  case (code ******)0x96:
    goto switchD_1006c4b30_caseD_96;
  case (code ******)0x98:
    goto switchD_1006c4b30_caseD_98;
  case (code ******)0x9a:
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown =
         (UnsafeMutablePointer)(UnsafeMutablePointer)param_6;
    (*(code *)param_6[8])(param_5);
    _swift_release();
    _swift_bridgeObjectRelease(param_5);
    unaff_x19.unknown = (undefined *)param_6;
switchD_1006c4b30_caseD_6a:
    _swift_bridgeObjectRelease(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
    iVar6 = _pthread_mutex_lock((pthread_mutex_t *)((long)unaff_x19.unknown + 0x20));
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ef0c8);
      (*pcVar4)();
    }
    _swift_bridgeObjectRelease(*(code ******)((long)unaff_x19.unknown + 0x18));
    in_register_00005008 = (code *****)&DAT_e800000000000000;
    param_1 = (code *****)0x646e756f46746f4e;
switchD_1006c4b30_caseD_96:
    *(code ******)((long)unaff_x19.unknown + 0x18) = in_register_00005008;
    *(code ******)((long)unaff_x19.unknown + 0x10) = param_1;
    iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)((long)unaff_x19.unknown + 0x20));
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006ef0cc);
      (*pcVar4)();
    }
    _swift_release(unaff_x19.unknown);
    puVar11 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10085d78c();
    puVar12 = puVar11;
    FUN_1006be0ac();
    puVar13 = &DAT_100ef7ae0;
    _swift_allocError(&DAT_100ef7ae0,puVar12,0,0);
    puVar12[1] = 0x6e756f4620746f4e;
    *puVar12 = 0x194;
    puVar12[2] = 0xe900000000000064;
    puVar12[3] = puVar11;
    puVar12[4] = 0;
    puVar12[5] = 0;
    _swift_willThrow();
    auVar94._8_8_ = puVar12;
    auVar94._0_8_ = puVar13;
    return auVar94;
  case (code ******)0xa2:
    goto switchD_1006c4b30_caseD_a2;
  case (code ******)0xa4:
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001006d74e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar72._8_8_ = param_4.unknown;
    auVar72._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar72;
  case (code ******)0xaa:
    auVar97._8_8_ = param_4.unknown;
    auVar97._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar97;
  case (code ******)0xac:
    goto switchD_1006c4b30_caseD_ac;
  case (code ******)0xae:
    if (unaff_x21 == (code ******)0x0) {
      *(code *******)(unaff_x20.unknown + 0x28) = unaff_x24;
      *(code ******)(unaff_x20.unknown + 0x20) = pppppcStack_48;
      *(code *******)(unaff_x20.unknown + 0x38) = unaff_x22;
      *(code ******)(unaff_x20.unknown + 0x30) = unaff_x23;
      unaff_x20.unknown[0x40] = 0;
      *(undefined8 *)(unaff_x20.unknown + 8) = in_stack_ffffffffffffffa0;
      *(undefined **)unaff_x20.unknown = local_68.unknown;
      *(code ******)(unaff_x20.unknown + 0x18) = local_50;
      *(code *******)(unaff_x20.unknown + 0x10) = in_stack_ffffffffffffffa8;
      UNRECOVERED_JUMPTABLE = unaff_x22[1];
    }
    else {
      UNRECOVERED_JUMPTABLE = unaff_x22[1];
    }
                    /* WARNING: Could not recover jumptable at 0x0001006eef9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar93._8_8_ = param_4.unknown;
    auVar93._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar93;
  case (code ******)0xb6:
  case (code ******)0xba:
  case (code ******)0xbe:
  case (code ******)0xc2:
    puStack_80 = (undefined1 *)((ulong)&stack0xfffffffffffffff0 | in_x16);
    unaff_x22[10] = in_stack_ffffffffffffff90;
    unaff_x22[0xb] = (code *****)local_68.unknown;
    unaff_x22[8] = param_9;
    unaff_x22[9] = param_10;
    unaff_x22[6] = param_7;
    unaff_x22[7] = param_8;
    unaff_x22[4] = (code *****)param_5;
    unaff_x22[5] = (code *****)param_6;
    unaff_x22[2] = (code *****)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    unaff_x22[3] = (code *****)param_4.unknown;
    unaff_x19.unknown = local_68.unknown;
    unaff_x20.unknown = (undefined *)param_10;
switchD_1006c4b30_caseD_ac:
    UNRECOVERED_JUMPTABLE = (code *****)param_10[-1];
    unaff_x22[0xc] = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = (code *****)((long)UNRECOVERED_JUMPTABLE[8] + 0xfU & 0xfffffffffffffff0)
    ;
    _swift_task_alloc();
    unaff_x22[0xd] = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
    param_6 = (code ******)
              PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
    param_7 = (code *****)
              PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8;
switchD_1006c4b30_caseD_a2:
    _swift_getAssociatedTypeWitness
              (UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown,unaff_x19.unknown,unaff_x20.unknown,
               param_6,param_7);
    unaff_x22[0xe] = (code *****)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    UNRECOVERED_JUMPTABLE = *(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + -8);
    unaff_x22[0xf] = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE = (code *****)((long)UNRECOVERED_JUMPTABLE[8] + 0xfU & 0xfffffffffffffff0)
    ;
    _swift_task_alloc();
    unaff_x22[0x10] = UNRECOVERED_JUMPTABLE;
    UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x1006e3000;
switchD_1006c4b30_caseD_98:
    ppppppcVar23 = (code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x838);
    uVar20 = 0;
    _swift_task_switch(ppppppcVar23,0,0);
    auVar84._8_8_ = uVar20;
    auVar84._0_8_ = ppppppcVar23;
    return auVar84;
  case (code ******)0xb8:
  case (code ******)0xbc:
    goto switchD_1006c4b30_caseD_b8;
  case (code ******)0xc0:
    goto LAB_1006d804c;
  case (code ******)0xc4:
    goto switchD_1006c4b30_caseD_c4;
  case (code ******)0xca:
    FUN_100004594();
    FUN_10030e034();
    unaff_x21[8] = (code *****)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    auVar99._8_8_ = param_4.unknown;
    auVar99._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar99;
  case (code ******)0xcc:
    goto switchD_1006c4b30_caseD_cc;
  case (code ******)0xd6:
  case (code ******)0xda:
  case (code ******)0xde:
  case (code ******)0xe2:
    puStack_80 = (undefined1 *)
                 ((ulong)&stack0xfffffffffffffff0 |
                 (ulong)PTR__swift_async_extendedFramePointerFlags_100eaf070);
    param_4.unknown = (undefined *)unaff_x22[0x11];
    (*(code *)unaff_x22[0x18][1])(unaff_x22[0x19],param_4.unknown);
switchD_1006c4b30_caseD_cc:
    UNRECOVERED_JUMPTABLE = unaff_x22[0x17];
    _swift_task_dealloc(unaff_x22[0x19]);
    _swift_task_dealloc(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001006e377c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar83._8_8_ = param_4.unknown;
    auVar83._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar83;
  case (code ******)0xd8:
  case (code ******)0xdc:
    unaff_x23 = unaff_x22[0x23];
    unaff_x21 = (code ******)unaff_x22[0x24];
    unaff_x25 = (code ******)unaff_x22[0x1e];
    unaff_x24 = (code ******)unaff_x22[0x1f];
  case (code ******)0xf8:
    unaff_x27.unknown = (undefined *)unaff_x22[0x1b];
    unaff_x26 = (code ******)unaff_x22[0x1c];
    _swift_task_dealloc();
    _swift_task_dealloc();
    _swift_task_dealloc(unaff_x21);
switchD_1006c4b30_caseD_b8:
    _swift_task_dealloc(unaff_x23);
    _swift_task_dealloc(unaff_x24);
    _swift_task_dealloc(unaff_x25);
    _swift_task_dealloc(unaff_x26);
    _swift_task_dealloc(unaff_x27.unknown);
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
                    /* WARNING: Could not recover jumptable at 0x0001006d9b9c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar75._8_8_ = param_4.unknown;
    auVar75._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar75;
  case (code ******)0xe0:
    pppppcVar42 = unaff_x22[0xd2];
    pppppcVar45 = unaff_x22[0xd1];
    pppppcVar47 = unaff_x22[0xd0];
    unaff_x23 = unaff_x22[0xce];
    pppppcVar39 = unaff_x22[0xcd];
    unaff_x21 = (code ******)unaff_x22[0xcc];
    local_68.unknown = (undefined *)unaff_x22[0xcb];
    pppppcVar48 = unaff_x22[0xca];
    UNRECOVERED_JUMPTABLE = unaff_x22[0xc9];
    unaff_x19.unknown = (undefined *)unaff_x22[0xc3];
    pppppcVar24 = unaff_x22[0xc1];
    pppppcVar30 = unaff_x22[0xc0];
    param_13 = (code *****)(ulong)*(byte *)((long)unaff_x22 + 0x102);
    param_12 = unaff_x22[0xb2];
    pppppcVar31 = unaff_x22[0xb1];
    in_register_00005028 = *(code ******)((long)unaff_x28.unknown + 0x418);
    param_2 = *(code ******)((long)unaff_x28.unknown + 0x410);
    pppppcStack_48 = *(code ******)((long)unaff_x28.unknown + 0x3f8);
    pppppcVar49 = *(code ******)((long)unaff_x28.unknown + 0x3f0);
    unaff_x30 = *(code *******)((long)unaff_x28.unknown + 0x408);
    unaff_x29 = *(code ******)((long)unaff_x28.unknown + 0x400);
    uVar54 = *(undefined1 *)((long)unaff_x22 + 0x104);
    _swift_bridgeObjectRelease(unaff_x22[0xbb]);
    _swift_release(pppppcVar47,pppppcVar45,pppppcVar42,uVar54);
    _swift_release(pppppcVar47,pppppcVar45,pppppcVar42,uVar54);
    (*(code *)pppppcVar39[1])(unaff_x23,pppppcVar48);
    (*(code *)*(code ******)(local_68.unknown + 8))(unaff_x21,UNRECOVERED_JUMPTABLE);
    (*(code *)pppppcVar24[1])(unaff_x19.unknown,pppppcVar30);
    unaff_x22[0x33] = pppppcVar31;
    unaff_x22[0x34] = param_12;
    *(code ******)((long)unaff_x28.unknown + 8) = pppppcStack_48;
    *(code ******)unaff_x28.unknown = pppppcVar49;
LAB_1006d804c:
    *(code *******)((long)unaff_x28.unknown + 0x18) = unaff_x30;
    *(code ******)((long)unaff_x28.unknown + 0x10) = unaff_x29;
    *(code ******)((long)unaff_x28.unknown + 0x28) = in_register_00005028;
    *(code ******)((long)unaff_x28.unknown + 0x20) = param_2;
    *(char *)(unaff_x22 + 0x3b) = (char)param_13;
    *(char *)((long)unaff_x22 + 0x1d9) = (char)unaff_x20.unknown;
    ppppppcVar23 = unaff_x22 + 0x69;
    FUN_1006be04c(unaff_x22 + 0x33,ppppppcVar23);
    _swift_task_dealloc(unaff_x23);
    _swift_task_dealloc(unaff_x21);
    _swift_task_dealloc(param_12);
    _swift_task_dealloc(unaff_x19.unknown);
    uVar54 = *(undefined1 *)((long)unaff_x22 + 0x102);
    pppppcVar47 = *(code ******)((long)unaff_x28.unknown + 0x418);
    pppppcVar45 = *(code ******)((long)unaff_x28.unknown + 0x410);
    pppppcVar39 = *(code ******)((long)unaff_x28.unknown + 0x408);
    pppppcVar31 = *(code ******)((long)unaff_x28.unknown + 0x400);
    pppppcVar30 = unaff_x22[0xb4];
    UNRECOVERED_JUMPTABLE = unaff_x22[0xb3];
    pppppcVar42 = *(code ******)((long)unaff_x28.unknown + 0x3e0);
    pppppcVar24 = unaff_x22[0xac];
    pppppcVar24[1] = (code ****)*(code ******)((long)unaff_x28.unknown + 1000);
    *pppppcVar24 = (code ****)pppppcVar42;
    pppppcVar24[2] = (code ****)UNRECOVERED_JUMPTABLE;
    pppppcVar24[3] = (code ****)pppppcVar30;
    pppppcVar24[5] = (code ****)pppppcVar39;
    pppppcVar24[4] = (code ****)pppppcVar31;
    pppppcVar24[7] = (code ****)pppppcVar47;
    pppppcVar24[6] = (code ****)pppppcVar45;
    *(undefined1 *)(pppppcVar24 + 8) = uVar54;
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
LAB_1006d8068:
                    /* WARNING: Could not recover jumptable at 0x0001006d8084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar73._8_8_ = ppppppcVar23;
    auVar73._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar73;
  case (code ******)0xe4:
    uVar44 = (ulong)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown & 0xff;
    uVar51 = (long)unaff_x24[8] +
             ((ulong)((undefined1 *)((long)unaff_x25 + uVar44) + (long)unaff_x27.unknown) &
             (uVar44 ^ 0xffffffffffffffff));
    if (uVar51 < 0x11) {
      uVar51 = 0x10;
    }
    uVar26 = uVar44 | (ulong)unaff_x28.unknown;
    if ((uVar26 < 8 &&
        ((SUB84(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown,0) | (uint)unaff_x21) & 0x100000) == 0)
        && uVar51 + 1 < 0x19) {
      uVar29 = (uint)(byte)unaff_x20.unknown[uVar51];
      if (1 < (byte)unaff_x20.unknown[uVar51]) {
        uVar29 = *(int *)unaff_x20.unknown + 2;
      }
      UNRECOVERED_JUMPTABLE = *(code ******)(unaff_x20.unknown + 8);
      *(code ******)unaff_x19.unknown = *(code ******)unaff_x20.unknown;
      *(code ******)((long)unaff_x19.unknown + 8) = UNRECOVERED_JUMPTABLE;
      if (uVar29 == 1) {
        *(undefined1 *)((long)unaff_x19.unknown + uVar51) = 1;
        _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE);
      }
      else {
        uVar26 = (ulong)((undefined1 *)((long)unaff_x19.unknown + (long)unaff_x28.unknown) + 0x10) &
                 ~(ulong)unaff_x28.unknown;
        uVar41 = (ulong)(unaff_x20.unknown + unaff_x28.unknown + 0x10) & ~(ulong)unaff_x28.unknown;
        pppppcVar24 = unaff_x26[2];
        _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE);
        (*(code *)pppppcVar24)(uVar26,uVar41,local_68.unknown);
        param_4.unknown = (undefined *)((ulong)((long)unaff_x25 + uVar41 + uVar44) & ~uVar44);
        (*(code *)unaff_x24[2])
                  ((ulong)((long)unaff_x25 + uVar26 + uVar44) & ~uVar44,param_4.unknown,
                   UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown);
        *(undefined1 *)((long)unaff_x19.unknown + uVar51) = 0;
      }
    }
    else {
      UNRECOVERED_JUMPTABLE = *(code ******)unaff_x20.unknown;
      *(code ******)unaff_x19.unknown = UNRECOVERED_JUMPTABLE;
      unaff_x19.unknown =
           (undefined *)
           ((long)UNRECOVERED_JUMPTABLE + ((ulong)((uint)uVar26 & 0xf8 ^ 0x1f8) & uVar26 + 0x10));
      _swift_retain();
    }
switchD_1006c4b30_caseD_c4:
    auVar80._8_8_ = param_4.unknown;
    auVar80._0_8_ = unaff_x19.unknown;
    return auVar80;
  case (code ******)0xea:
    (*(code *)PTR____chkstk_darwin_100ea82c0)();
    lVar35 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    FUN_10000cbb0(auStack_b0);
    (*(code *)(*(code ******)((long)unaff_x28.unknown + -8))[2])();
    FUN_1006e1c5c(&stack0xffffffffffffff78,auStack_b0);
    FUN_100004594(auStack_b0);
    FUN_100004640(&stack0xffffffffffffff78,in_stack_ffffffffffffff90);
    UNRECOVERED_JUMPTABLE = unaff_x21[3];
    *(code *******)((long)&puStack_80 + lVar35) = unaff_x25;
    *(code *******)(&stack0xffffffffffffff88 + lVar35) = unaff_x21;
    (*(code *)UNRECOVERED_JUMPTABLE)(&stack0xffffffffffffff90 + lVar35);
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease();
    (*(code *)unaff_x23[1])(&stack0xffffffffffffff90 + lVar35);
    FUN_100004594(&stack0xffffffffffffff78);
    (**(code **)(*(long *)(lStack_b8 + -8) + 0x10))(uStack_c0);
    auVar100._8_8_ = unaff_x19.unknown;
    auVar100._0_8_ = uStack_c0;
    return auVar100;
  case (code ******)0xec:
    pppppcVar24 = *unaff_x22;
    _swift_task_dealloc();
    UNRECOVERED_JUMPTABLE = *(code ******)((long)unaff_x19.unknown + 0xb8);
    _swift_task_dealloc(*(code ******)((long)unaff_x19.unknown + 200));
    _swift_task_dealloc(UNRECOVERED_JUMPTABLE);
    UNRECOVERED_JUMPTABLE_07 = pppppcVar24[1];
                    /* WARNING: Could not recover jumptable at 0x0001006e3724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_07)();
    auVar82._8_8_ = param_4.unknown;
    auVar82._0_8_ = UNRECOVERED_JUMPTABLE_07;
    return auVar82;
  case (code ******)0xee:
    UNRECOVERED_JUMPTABLE = *(code ******)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    pppppcVar24 = *(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 8);
    pppppcVar30 = *(code ******)((long)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown + 0x10);
    _swift_bridgeObjectRetain(UNRECOVERED_JUMPTABLE);
    _swift_bridgeObjectRetain(pppppcVar30);
    FUN_1006e8524();
    *ppppppcVar23 = UNRECOVERED_JUMPTABLE;
    ppppppcVar23[1] = pppppcVar24;
    ppppppcVar23[2] = pppppcVar30;
    ppppppcVar23[3] = (code *****)param_4.unknown;
    auVar90._8_8_ = pppppcVar24;
    auVar90._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar90;
  case (code ******)0xf6:
  case (code ******)0xfa:
  case (code ******)0xfe:
                    /* WARNING: Could not recover jumptable at 0x0001006e36cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown)();
    auVar81._8_8_ = param_4.unknown;
    auVar81._0_8_ = UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown;
    return auVar81;
  case (code ******)0xfc:
    pppppcVar39 = unaff_x22[0xd1];
    pppppcVar42 = unaff_x22[0xd0];
    pppppcVar45 = unaff_x22[0xce];
    pppppcVar49 = unaff_x22[0xcd];
    pppppcVar47 = unaff_x22[0xcc];
    pppppcVar30 = unaff_x22[0xcb];
    pppppcVar48 = unaff_x22[0xca];
    UNRECOVERED_JUMPTABLE = unaff_x22[0xc9];
    pppppcVar31 = unaff_x22[199];
    pppppcVar50 = unaff_x22[0xc3];
    pppppcVar24 = unaff_x22[0xc1];
    ppppppcVar25 = (code ******)unaff_x22[0xc0];
    _swift_bridgeObjectRelease(unaff_x22[0xbb]);
    _swift_release(pppppcVar42,pppppcVar39);
    _swift_release(pppppcVar42,pppppcVar39);
    (*(code *)pppppcVar49[1])(pppppcVar45,pppppcVar48);
    (*(code *)pppppcVar30[1])(pppppcVar47,UNRECOVERED_JUMPTABLE);
    ppppppcVar23 = ppppppcVar25;
    (*(code *)pppppcVar24[1])(pppppcVar50,ppppppcVar25);
    _swift_errorRetain(ppppppcVar25);
    _swift_task_dealloc(pppppcVar45);
    _swift_task_dealloc(pppppcVar47);
    _swift_task_dealloc(pppppcVar31);
    _swift_task_dealloc(pppppcVar50);
    UNRECOVERED_JUMPTABLE = unaff_x22[1];
    goto LAB_1006d8068;
  }
  pvVar16 = SVar56.bridgeObject;
  FUN_1006c63e0(UNRECOVERED_JUMPTABLE_06.cmsgPointer.unknown,param_4.unknown);
  SVar112.bridgeObject = puVar13;
  SVar112.str = pcVar21;
  Swift::String::append(SVar56,SVar112);
LAB_1006c5160:
  _swift_bridgeObjectRelease(pvVar16);
  unaff_x21 = (code ******)pppppcStack_48;
LAB_1006c519c:
  auVar64._8_8_ = unaff_x21;
  auVar64._0_8_ = local_50;
  return auVar64;
}


