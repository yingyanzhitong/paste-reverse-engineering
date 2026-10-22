/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001a0a34 | FUN_1001a0a34 */

undefined8 * FUN_1001a0a34(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  lVar7 = (long)*(int *)(param_3 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  lVar4 = (long)param_2 + lVar7;
  (*pcVar9)(lVar4,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar3.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar3.unknown);
  }
  else {
    puVar5 = &DAT_100fb4018;
    FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar6.unknown + -8);
  lVar4 = (long)param_2 + lVar7;
  (**(code **)(lVar8 + 0x30))(lVar4,1,UVar6.unknown);
  if ((int)lVar4 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar6.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar6.unknown);
  }
  else {
    puVar5 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
            *(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1001a0ba4 | FUN_1001a0ba4 */

undefined8 * FUN_1001a0ba4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  URL UVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  uVar6 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  param_1[2] = param_2[2];
  uVar6 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  lVar7 = (long)*(int *)(param_3 + 0x18);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = (long)param_1 + lVar7;
  (*pcVar9)(lVar2,1,DVar1.unknown);
  lVar3 = (long)param_2 + lVar7;
  (*pcVar9)(lVar3,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar1.unknown);
      goto LAB_1001a0cb8;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,DVar1.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,DVar1.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,DVar1.unknown);
    goto LAB_1001a0cb8;
  }
  puVar4 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_1001a0cb8:
  lVar7 = (long)*(int *)(param_3 + 0x1c);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar5.unknown + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  lVar2 = (long)param_1 + lVar7;
  (*pcVar9)(lVar2,1,UVar5.unknown);
  lVar3 = (long)param_2 + lVar7;
  (*pcVar9)(lVar3,1,UVar5.unknown);
  if ((int)lVar2 == 0) {
    if ((int)lVar3 == 0) {
      (**(code **)(lVar8 + 0x18))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar5.unknown);
      return param_1;
    }
    (**(code **)(lVar8 + 8))((long)param_1 + lVar7,UVar5.unknown);
  }
  else if ((int)lVar3 == 0) {
    (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar5.unknown);
    (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar5.unknown);
    return param_1;
  }
  puVar4 = &DAT_100fb4020;
  FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
  _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
          *(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1001a0db4 | FUN_1001a0db4 */

undefined8 * FUN_1001a0db4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  Date DVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  lVar5 = (long)*(int *)(param_3 + 0x18);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar1.unknown + -8);
  lVar2 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar2,1,DVar1.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,DVar1.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,DVar1.unknown);
  }
  else {
    puVar3 = &DAT_100fb4018;
    FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar4.unknown + -8);
  lVar2 = (long)param_2 + lVar5;
  (**(code **)(lVar6 + 0x30))(lVar2,1,UVar4.unknown);
  if ((int)lVar2 == 0) {
    (**(code **)(lVar6 + 0x20))((long)param_1 + lVar5,(long)param_2 + lVar5,UVar4.unknown);
    (**(code **)(lVar6 + 0x38))((long)param_1 + lVar5,0,1,UVar4.unknown);
  }
  else {
    puVar3 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    _memcpy((void *)((long)param_1 + lVar5),(void *)((long)param_2 + lVar5),
            *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
  }
  return param_1;
}



/* Address: 0x1001a0efc | FUN_1001a0efc */

undefined8 * FUN_1001a0efc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Date DVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  URL UVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  lVar8 = (long)*(int *)(param_3 + 0x18);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar4 = (long)param_1 + lVar8;
  (*pcVar10)(lVar4,1,DVar3.unknown);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar10)(lVar5,1,DVar3.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar3.unknown);
      goto LAB_1001a0ff0;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,DVar3.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar3.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar3.unknown);
    goto LAB_1001a0ff0;
  }
  puVar6 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
LAB_1001a0ff0:
  lVar8 = (long)*(int *)(param_3 + 0x1c);
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar7.unknown + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  lVar4 = (long)param_1 + lVar8;
  (*pcVar10)(lVar4,1,UVar7.unknown);
  lVar5 = (long)param_2 + lVar8;
  (*pcVar10)(lVar5,1,UVar7.unknown);
  if ((int)lVar4 == 0) {
    if ((int)lVar5 == 0) {
      (**(code **)(lVar9 + 0x28))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar7.unknown);
      return param_1;
    }
    (**(code **)(lVar9 + 8))((long)param_1 + lVar8,UVar7.unknown);
  }
  else if ((int)lVar5 == 0) {
    (**(code **)(lVar9 + 0x20))((long)param_1 + lVar8,(long)param_2 + lVar8,UVar7.unknown);
    (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,UVar7.unknown);
    return param_1;
  }
  puVar6 = &DAT_100fb4020;
  FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
  _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
          *(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  return param_1;
}



/* Address: 0x1001a10ec | FUN_1001a10ec */

void FUN_1001a10ec(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1001a10f8 | FUN_1001a10f8 */

ulong FUN_1001a10f8(long param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_2 == 0x7fffffff) {
    uVar3 = *(ulong *)(param_1 + 8);
    if (0xfffffffe < uVar3) {
      uVar3 = 0xffffffff;
    }
    return (ulong)((int)uVar3 + 1);
  }
  puVar2 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  lVar4 = *(long *)(puVar2 + -8);
  if ((int)param_2 == *(int *)(lVar4 + 0x54)) {
    iVar1 = *(int *)(param_3 + 0x18);
  }
  else {
    puVar2 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    lVar4 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_3 + 0x1c);
  }
  uVar3 = param_1 + iVar1;
                    /* WARNING: Could not recover jumptable at 0x0001001a11ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 0x30))(uVar3,param_2,puVar2);
  return uVar3;
}



/* Address: 0x1001a11b0 | FUN_1001a11b0 */

void FUN_1001a11b0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1001a11bc | FUN_1001a11bc */

void FUN_1001a11bc(long param_1,undefined8 param_2,int param_3,long param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_3 == 0x7fffffff) {
    *(ulong *)(param_1 + 8) = (ulong)((int)param_2 - 1);
    return;
  }
  puVar2 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  lVar3 = *(long *)(puVar2 + -8);
  if (param_3 == *(int *)(lVar3 + 0x54)) {
    iVar1 = *(int *)(param_4 + 0x18);
  }
  else {
    puVar2 = &DAT_100fb4020;
    FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
    lVar3 = *(long *)(puVar2 + -8);
    iVar1 = *(int *)(param_4 + 0x1c);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001a126c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 0x38))(param_1 + iVar1,param_2,param_2,puVar2);
  return;
}



/* Address: 0x1001a1270 | FUN_1001a1270 */

void FUN_1001a1270(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long local_28;
  
  local_40 = &DAT_100c322a8;
  puStack_38 = &DAT_100c322a8;
  puVar2 = &DAT_100fb40c8;
  lVar1 = 0x13f;
  FUN_1001a1320(0x13f,&DAT_100fb40c8,PTR_typeMetadataAccessor_100ea7480);
  if (puVar2 < (undefined *)0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puVar2 = &DAT_100fb40d0;
    lVar1 = 0x13f;
    FUN_1001a1320(0x13f,&DAT_100fb40d0,PTR_typeMetadataAccessor_100ea71a8);
    if (puVar2 < (undefined *)0x40) {
      local_28 = *(long *)(lVar1 + -8) + 0x40;
      _swift_initStructMetadata(param_1,0x100,4,&local_40,param_1 + 0x10);
    }
  }
  return;
}



/* Address: 0x1001a1320 | FUN_1001a1320 */

void FUN_1001a1320(undefined8 param_1,long *param_2,code *param_3)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (*param_2 == 0) {
    lVar2 = 0xff;
    (*param_3)();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      *param_2 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1001a136c | FUN_1001a136c */

void FUN_1001a136c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1001a1378 | FUN_1001a1378 */

void FUN_1001a1378(void)

{
  return;
}



/* Address: 0x1001a137c | FUN_1001a137c */

undefined1  [16] FUN_1001a137c(void)

{
  return ZEXT816(0x100ebda18);
}



/* Address: 0x1001a138c | thunk_FUN_1001a1390 */

void thunk_FUN_1001a1390(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3235c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3235c,&DAT_100ebda18);
  DAT_100fb4108 = pTVar1;
  return;
}



/* Address: 0x1001a1390 | FUN_1001a1390 */

void FUN_1001a1390(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3235c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3235c,&DAT_100ebda18);
  DAT_100fb4108 = pTVar1;
  return;
}



/* Address: 0x1001a13d0 | thunk_FUN_1001a13d4 */

void thunk_FUN_1001a13d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c322f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c322f4,&DAT_100ebda18);
  DAT_100fb4110 = pTVar1;
  return;
}



/* Address: 0x1001a13d4 | FUN_1001a13d4 */

void FUN_1001a13d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c322f4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c322f4,&DAT_100ebda18);
  DAT_100fb4110 = pTVar1;
  return;
}



/* Address: 0x1001a1414 | thunk_FUN_1001a1418 */

void thunk_FUN_1001a1418(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c322cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c322cc,&DAT_100ebda18);
  DAT_100fb4118 = pTVar1;
  return;
}



/* Address: 0x1001a1418 | FUN_1001a1418 */

void FUN_1001a1418(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c322cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c322cc,&DAT_100ebda18);
  DAT_100fb4118 = pTVar1;
  return;
}



/* Address: 0x1001a1458 | FUN_1001a1458 */

undefined4 FUN_1001a1458(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &SUB_00006469 || param_2 != &SUB_e200000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6469,(_StringGuts)0xe200000000000000,expecting);
    if (!bVar1) {
      if (((param_1 == (undefined1 *)0x4e79616c70736964) &&
          (param_2 == (undefined1 *)0xeb00000000656d61)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x4e79616c70736964,(_StringGuts)0xeb00000000656d61,
                             expecting), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != (undefined1 *)0x6974617269707865) ||
          (param_2 != (undefined1 *)0xee00657461446e6f)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6974617269707865,(_StringGuts)0xee00657461446e6f,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x656d6567616e616d) &&
           (param_2 == (undefined1 *)0xed00004c5255746e)) {
          _swift_bridgeObjectRelease(0xed00004c5255746e);
          return 3;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x656d6567616e616d,(_StringGuts)0xed00004c5255746e,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 3;
        }
        return 4;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1001a15c4 | FUN_1001a15c4 */

bool FUN_1001a15c4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  
  puVar1 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffc0 + -extraout_x8;
  (**(code **)(param_2 + 8))(puVar4,param_1,param_2);
  lVar2 = 0;
  FUN_10019fee0();
  puVar3 = puVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar4,1,lVar2);
  FUN_100005808(puVar4,&DAT_100fb4120,&DAT_100c323e0);
  return (int)puVar3 != 1;
}



/* Address: 0x1001a168c | FUN_1001a168c */

bool FUN_1001a168c(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_78,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  lVar7 = *(long *)(lVar6 + 0x10);
  _swift_bridgeObjectRetain(lVar6);
  uVar8 = 0xffffffffffffffff;
  plVar5 = (long *)(lVar6 + 0x28);
  do {
    lVar1 = uVar8 - lVar7;
    if (lVar1 == -1) break;
    uVar8 = uVar8 + 1;
    if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1001a1770);
      (*pcVar9)();
    }
    uVar2 = plVar5[-1];
    lVar3 = *plVar5;
    uVar4 = uVar2;
    _swift_getObjectType();
    pcVar9 = *(code **)(lVar3 + 8);
    _swift_unknownObjectRetain(uVar2);
    (*pcVar9)(uVar4,lVar3);
    _swift_unknownObjectRelease(uVar2);
    plVar5 = plVar5 + 2;
  } while ((uVar4 & 1) == 0);
  _swift_bridgeObjectRelease(lVar6);
  return lVar1 != -1;
}



/* Address: 0x1001a1770 | FUN_1001a1770 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001a18d8) */

long FUN_1001a1770(void)

{
  long lVar1;
  undefined *puVar2;
  ID self;
  NSString *pNVar3;
  Data DVar4;
  Data DVar5;
  JSONDecoder *pJVar6;
  undefined *extraout_x1;
  _StringGuts _Var7;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  char *pcVar11;
  undefined1 *puVar12;
  String SVar13;
  String SVar14;
  undefined1 auStack_c0 [8];
  JSONDecoder *local_b8;
  undefined *local_b0 [4];
  undefined1 auStack_90 [24];
  undefined *local_78;
  undefined8 uStack_70;
  
  puVar2 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + lVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)puVar9 - extraout_x12;
  self = *(ID *)(unaff_x20 + 0x48);
  lVar10 = 0;
  if (self != 0) {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    DVar4.unknown = (undefined *)objc_stub::dataForKey_(self,pNVar3);
    if (DVar4.unknown == (undefined *)0x0) {
      return 0;
    }
    puVar2 = extraout_x1;
    DVar5 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar4);
    pJVar6 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
    pJVar6 = Foundation::JSONDecoder::init(pJVar6);
    DVar4.unknown = (undefined *)0x0;
    FUN_10019fee0();
    FUN_100003a00(&DAT_100fb4238,FUN_10019fee0,&TargetProtocolConformanceDescriptor_100c32238);
    local_b8 = pJVar6;
    local_b0[0] = puVar2;
    local_b0[1] = DVar5.unknown;
    Foundation::JSONDecoder::_decode(pJVar6,DVar4);
    lVar10 = *(long *)(DVar4.unknown + -8);
    (**(code **)(lVar10 + 0x38))(lVar8,0,1,DVar4.unknown);
    FUN_1000d468c(auStack_90);
    _Var7.unknown = local_78;
    FUN_100004640(auStack_90);
    local_b0[2] = (undefined *)0x0;
    local_b0[3] = (undefined *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1c,_Var7);
    _swift_bridgeObjectRelease(local_b0[3]);
    local_b0[2] = (undefined *)0xd00000000000001a;
    local_b0[3] = (undefined *)0x8000000100d97ce0;
    puVar2 = &DAT_100c323e0;
    FUN_100011090(lVar8,puVar9,&DAT_100fb4120);
    puVar12 = puVar9;
    (**(code **)(lVar10 + 0x30))(puVar9,1);
    if ((int)puVar12 == 1) {
      DVar4.unknown = &DAT_100c323e0;
      FUN_100005808(puVar9,&DAT_100fb4120);
      puVar12 = &DAT_e400000000000000;
      pcVar11 = (char *)0x656e6f6e;
    }
    else {
      pcVar11 = *(char **)((long)local_b0 + lVar1);
      puVar12 = *(undefined1 **)((long)local_b0 + lVar1 + 8);
      _swift_bridgeObjectRetain(puVar12);
      FUN_10001835c(puVar9);
    }
    SVar13.bridgeObject = puVar12;
    SVar13.str = pcVar11;
    SVar14.bridgeObject = puVar2;
    SVar14.str = DVar4.unknown;
    Swift::String::append(SVar13,SVar14);
    _swift_bridgeObjectRelease(puVar12);
    puVar2 = local_b0[3];
    FUN_1000d4dd4(local_b0[2],local_b0[3],local_78,uStack_70);
    _swift_bridgeObjectRelease(puVar2);
    FUN_100004594(auStack_90);
    FUN_1001a4280(lVar8,1);
    _swift_release(local_b8);
    FUN_10003bf2c(local_b0[1],local_b0[0]);
    FUN_100005808(lVar8,&DAT_100fb4120,&DAT_100c323e0);
    lVar10 = lVar8;
  }
  return lVar10;
}



/* Address: 0x1001a1a90 | FUN_1001a1a90 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a1a90(void)

{
  Task TVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined **)(unaff_x20 + 0x20);
  if (puVar2 != (undefined *)0x0) {
    TVar1.unknown = puVar2;
    _swift_retain();
    Swift::Task::cancel(TVar1);
    _swift_release(puVar2);
  }
  puVar2 = *(undefined **)(unaff_x20 + 0x28);
  if (puVar2 != (undefined *)0x0) {
    TVar1.unknown = puVar2;
    _swift_retain();
    Swift::Task::cancel(TVar1);
    _swift_release(puVar2);
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1001a1b5c | FUN_1001a1b5c */

void FUN_1001a1b5c(void)

{
  FUN_1001a1a90();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001a1b7c | FUN_1001a1b7c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001a1b7c(void)

{
  return ZEXT816(0x100fb4168);
}



/* Address: 0x1001a1b9c | FUN_1001a1b9c */

void FUN_1001a1b9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  TaskPriority TVar3;
  long lVar4;
  ID self;
  long unaff_x20;
  Task TVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  puVar1 = &DAT_100fb4230;
  FUN_1000037f0(&DAT_100fb4230,&DAT_100c324b8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  self = *(ID *)(unaff_x20 + 0x30);
  objc_stub::lock(self);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar4 = lVar6;
  if (lVar6 == 0) {
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))(uVar2,1,1,TVar3.unknown);
    puVar1 = &DAT_100ebdb40;
    _swift_allocObject(&DAT_100ebdb40,0x28,7);
    *(undefined8 *)(puVar1 + 0x10) = 0;
    *(undefined8 *)(puVar1 + 0x18) = 0;
    *(long *)(puVar1 + 0x20) = unaff_x20;
    _swift_retain();
    lVar4 = 0;
    FUN_1001a28cc(0,0,uVar2,&DAT_100c324c8,puVar1);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
    *(long *)(unaff_x20 + 0x28) = lVar4;
    _swift_retain();
    _swift_release(uVar7);
  }
  *(long *)(unaff_x22 + 0x28) = lVar4;
  _swift_retain(lVar6);
  objc_stub::unlock(self);
  TVar5.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
  _swift_retain(lVar4);
  _swift_task_alloc();
  *(undefined **)(unaff_x22 + 0x30) = TVar5.unknown;
  *(long *)TVar5.unknown = unaff_x22;
  *(code **)(TVar5.unknown + 8) = FUN_1001a1cf0;
  (extension_Swift)::Swift::Task::_get_value(TVar5);
  return;
}



/* Address: 0x1001a1cf0 | FUN_1001a1cf0 */

void FUN_1001a1cf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  uVar2 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x30));
  _swift_release(uVar1);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1001a1d60,uVar2,uVar3);
  return;
}



/* Address: 0x1001a1d60 | FUN_1001a1d60 */

void FUN_1001a1d60(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001a1d94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a1d98 | FUN_1001a1d98 */

void FUN_1001a1d98(void)

{
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  _swift_task_switch(FUN_1001a1db0,0,0);
  return;
}



/* Address: 0x1001a1db0 | FUN_1001a1db0 */

void FUN_1001a1db0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a1e00;
  FUN_1001a1e5c(0,0);
  return;
}



/* Address: 0x1001a1e00 | FUN_1001a1e00 */

void FUN_1001a1e00(void)

{
  long lVar1;
  undefined8 uVar2;
  ID self;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *(long *)(*unaff_x22 + 0x10);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
  self = *(ID *)(lVar1 + 0x30);
  objc_stub::lock(self);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
  _swift_release(uVar2);
  objc_stub::unlock(self);
                    /* WARNING: Could not recover jumptable at 0x0001001a1e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x1001a1e5c | FUN_1001a1e5c */

void FUN_1001a1e5c(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long *plVar8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  int *piVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long unaff_x20;
  long unaff_x22;
  String SVar15;
  String SVar16;
  
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
  *(long *)(unaff_x22 + 0x1a0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  puVar4 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar5;
  lVar6 = 0;
  FUN_10019fee0();
  *(long *)(unaff_x22 + 0x1b0) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar5;
  lVar6 = 0;
  FUN_1001a5804();
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  FUN_100004640(lVar6,uVar2);
  FUN_1000d4db8(0xd000000000000014,0x8000000100d97bd0,uVar2,uVar14,lVar6);
  FUN_100004594(unaff_x22 + 0x10);
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x18,unaff_x22 + 0x128);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  *(long *)(unaff_x22 + 0x1d8) = lVar6;
  lVar11 = *(long *)(lVar6 + 0x10);
  *(long *)(unaff_x22 + 0x1e0) = lVar11;
  if (lVar11 == 0) {
    FUN_1000d468c(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x118);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x120);
    lVar6 = unaff_x22 + 0x100;
    FUN_100004640(lVar6,uVar2);
    FUN_1000d4db8(0xd000000000000038,0x8000000100d97ca0,uVar2,uVar14,lVar6);
    FUN_100004594(unaff_x22 + 0x100);
    FUN_1001a1770();
    uVar2 = *(undefined8 *)(unaff_x22 + 0x1c0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar14);
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined1 *)(unaff_x22 + 0x218) = 0;
  *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
  lVar11 = *(long *)(lVar6 + 0x10);
  _swift_bridgeObjectRetain();
  if (lVar11 != 0) {
    uVar5 = *(ulong *)(unaff_x22 + 0x198);
    uVar13 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x1f0) = uVar13;
    lVar6 = *(long *)(lVar6 + 0x28);
    _swift_unknownObjectRetain(uVar13);
    FUN_1000d468c(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x58);
    FUN_100004640(unaff_x22 + 0x38,uVar2);
    *(undefined8 *)(unaff_x22 + 0x140) = 0x20676e697355;
    *(undefined1 **)(unaff_x22 + 0x148) = &DAT_e600000000000000;
    uVar7 = uVar13;
    _swift_getObjectType();
    *(undefined8 *)(unaff_x22 + 0x1f8) = uVar7;
    SVar15 = Swift::__typeName(SUB81(uVar7,0));
    SVar16.bridgeObject = pvVar10;
    SVar16.str = pcVar9;
    Swift::String::append(SVar15,SVar16);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x148);
    FUN_1000d4db8(*(undefined8 *)(unaff_x22 + 0x140),uVar7,uVar2,uVar14);
    _swift_bridgeObjectRelease(uVar7);
    FUN_100004594(unaff_x22 + 0x38);
    _swift_getObjectType(uVar13);
    piVar12 = *(int **)(lVar6 + 0x28);
    iVar1 = *piVar12;
    plVar8 = (long *)(ulong)(uint)piVar12[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x200) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1001a2144;
                    /* WARNING: Could not recover jumptable at 0x0001001a20a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar12))
              (plVar8,*(undefined8 *)(unaff_x22 + 0x1c8),*(undefined8 *)(unaff_x22 + 400),
               uVar5 & 0xcfffffffffffffff,uVar13,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a2144);
  (*pcVar3)();
}



/* Address: 0x1001a2144 | FUN_1001a2144 */

void FUN_1001a2144(void)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  char cVar4;
  undefined *puVar5;
  code *pcVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  undefined *puVar9;
  long *plVar10;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  void *in_x3;
  void *pvVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  long *unaff_x22;
  ulong uVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  char *local_68;
  void *local_60;
  
  lVar23 = *unaff_x22;
  uVar20 = *(undefined8 *)(lVar23 + 0x1c8);
  pcVar12 = *(char **)(lVar23 + 0x1b0);
  lVar16 = *(long *)(lVar23 + 0x1b8);
  lVar15 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x200));
  (**(code **)(lVar16 + 0x30))(uVar20,2);
  if ((int)uVar20 == 0) {
    uVar19 = *(undefined8 *)(lVar23 + 0x1f8);
    lVar16 = *(long *)(lVar23 + 0x1b8);
    lVar15 = *(long *)(lVar23 + 0x1c0);
    uVar20 = *(undefined8 *)(lVar23 + 0x1a8);
    uVar18 = *(undefined8 *)(lVar23 + 0x1b0);
    pcVar6 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(lVar23 + 0x1c8),lVar15);
    FUN_1000d468c(lVar23 + 0xb0);
    puVar9 = *(undefined **)(lVar23 + 200);
    uVar21 = *(undefined8 *)(lVar23 + 0xd0);
    _Var11.unknown = puVar9;
    FUN_100004640(lVar23 + 0xb0);
    Swift::_StringGuts::grow(0x15,_Var11);
    SVar24 = Swift::__typeName(SUB81(uVar19,0));
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar26.bridgeObject = (void *)0x8000000100d97c30;
    SVar26.str = (char *)0xd000000000000011;
    SVar28.bridgeObject = in_x3;
    SVar28.str = (char *)pcVar6;
    Swift::String::append(SVar26,SVar28);
    SVar29.bridgeObject = in_x3;
    SVar29.str = (char *)pcVar6;
    Swift::String::append(*(String *)(lVar15 + 0x10),SVar29);
    local_68 = SVar24.str;
    local_60 = SVar24.bridgeObject;
    FUN_1000d4db8(local_68,local_60,puVar9,uVar21);
    _swift_bridgeObjectRelease(local_60);
    FUN_100004594(lVar23 + 0xb0);
    FUN_1001a0764(lVar15,uVar20);
    (**(code **)(lVar16 + 0x38))(uVar20,0,1,uVar18);
    pMVar7 = Swift::MainActor::typeMetadataAccessor();
    puVar5 = PTR_typeMetadataAccessor_100eaec10;
    pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
    *(MainActor **)(lVar23 + 0x208) = pMVar7;
    puVar9 = &DAT_100fb4200;
    FUN_100003a00(&DAT_100fb4200,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar8 = Swift::Actor::get_unownedExecutor();
    pcVar6 = FUN_1001a271c;
LAB_1001a2440:
    _swift_task_switch(pcVar6,UVar8.unknown,puVar9);
    return;
  }
  if ((int)uVar20 == 1) {
    uVar20 = *(undefined8 *)(lVar23 + 0x1f0);
    uVar18 = *(undefined8 *)(lVar23 + 0x1f8);
    lVar16 = *(long *)(lVar23 + 0x1e0);
    lVar3 = *(long *)(lVar23 + 0x1e8);
    FUN_1000d468c(lVar23 + 0x88);
    pcVar13 = *(char **)(lVar23 + 0xa0);
    pvVar14 = *(void **)(lVar23 + 0xa8);
    _Var11.unknown = pcVar13;
    FUN_100004640(lVar23 + 0x88);
    *(undefined8 *)(lVar23 + 0x180) = 0;
    *(undefined8 *)(lVar23 + 0x188) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x12,_Var11);
    uVar21 = *(undefined8 *)(lVar23 + 0x188);
    SVar24 = Swift::__typeName(SUB81(uVar18,0));
    _swift_bridgeObjectRelease(uVar21);
    *(String *)(lVar23 + 0x170) = SVar24;
    SVar25.bridgeObject = (void *)0x8000000100d97c10;
    SVar25.str = (char *)0xd000000000000010;
    SVar27.bridgeObject = in_x3;
    SVar27.str = pcVar12;
    Swift::String::append(SVar25,SVar27);
    uVar18 = *(undefined8 *)(lVar23 + 0x178);
    FUN_1000d4db8(*(undefined8 *)(lVar23 + 0x170),uVar18);
    _swift_unknownObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar18);
    FUN_100004594(lVar23 + 0x88);
    if (lVar3 + 1 == lVar16) {
      cVar4 = *(char *)(lVar23 + 0x218);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar23 + 0x1d8));
      if (cVar4 == '\x01') goto LAB_1001a2540;
      (**(code **)(*(long *)(lVar23 + 0x1b8) + 0x38))
                (*(undefined8 *)(lVar23 + 0x1a8),1,1,*(undefined8 *)(lVar23 + 0x1b0));
      pMVar7 = Swift::MainActor::typeMetadataAccessor();
      puVar5 = PTR_typeMetadataAccessor_100eaec10;
      pMVar7 = Swift::MainActor::get_shared(pMVar7,pMVar7);
      *(MainActor **)(lVar23 + 0x210) = pMVar7;
      puVar9 = &DAT_100fb4200;
      FUN_100003a00(&DAT_100fb4200,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar8 = Swift::Actor::get_unownedExecutor();
      pcVar6 = FUN_1001a2804;
      goto LAB_1001a2440;
    }
    lVar16 = *(long *)(lVar23 + 0x1e8);
  }
  else {
    uVar20 = *(undefined8 *)(lVar23 + 0x1f0);
    uVar18 = *(undefined8 *)(lVar23 + 0x1f8);
    lVar16 = *(long *)(lVar23 + 0x1e0);
    lVar3 = *(long *)(lVar23 + 0x1e8);
    FUN_1000d468c(lVar23 + 0x60);
    pcVar13 = *(char **)(lVar23 + 0x78);
    pvVar14 = *(void **)(lVar23 + 0x80);
    _Var11.unknown = pcVar13;
    FUN_100004640(lVar23 + 0x60);
    *(undefined8 *)(lVar23 + 0x160) = 0;
    *(undefined8 *)(lVar23 + 0x168) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1d,_Var11);
    uVar21 = *(undefined8 *)(lVar23 + 0x168);
    SVar24 = Swift::__typeName(SUB81(uVar18,0));
    _swift_bridgeObjectRelease(uVar21);
    *(String *)(lVar23 + 0x150) = SVar24;
    SVar24.bridgeObject = (void *)0x8000000100d97bf0;
    SVar24.str = (char *)0xd00000000000001b;
    SVar30.bridgeObject = in_x3;
    SVar30.str = pcVar12;
    Swift::String::append(SVar24,SVar30);
    uVar18 = *(undefined8 *)(lVar23 + 0x158);
    FUN_1000d4db8(*(undefined8 *)(lVar23 + 0x150),uVar18);
    _swift_unknownObjectRelease(uVar20);
    _swift_bridgeObjectRelease(uVar18);
    FUN_100004594(lVar23 + 0x60);
    if (lVar3 + 1 == lVar16) {
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar23 + 0x1d8));
LAB_1001a2540:
      FUN_1000d468c(lVar23 + 0xd8);
      uVar20 = *(undefined8 *)(lVar23 + 0xf0);
      uVar18 = *(undefined8 *)(lVar23 + 0xf8);
      lVar16 = lVar23 + 0xd8;
      FUN_100004640(lVar16,uVar20);
      FUN_1000d4db8(0x1000000000000041,0x8000000100d97c50,uVar20,uVar18,lVar16);
      FUN_100004594(lVar23 + 0xd8);
      uVar20 = *(undefined8 *)(lVar23 + 0x1c0);
      uVar18 = *(undefined8 *)(lVar23 + 0x1a8);
      _swift_task_dealloc(*(undefined8 *)(lVar23 + 0x1c8));
      _swift_task_dealloc(uVar20);
      _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001001a25d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar15 + 8))();
      return;
    }
    lVar16 = *(long *)(lVar23 + 0x1e8);
    *(undefined1 *)(lVar23 + 0x218) = 1;
  }
  uVar1 = lVar16 + 1;
  *(ulong *)(lVar23 + 0x1e8) = uVar1;
  if (uVar1 < *(ulong *)(*(long *)(lVar23 + 0x1d8) + 0x10)) {
    uVar22 = *(ulong *)(lVar23 + 0x198);
    lVar16 = *(long *)(lVar23 + 0x1d8) + uVar1 * 0x10;
    uVar19 = *(undefined8 *)(lVar16 + 0x20);
    *(undefined8 *)(lVar23 + 0x1f0) = uVar19;
    lVar16 = *(long *)(lVar16 + 0x28);
    _swift_unknownObjectRetain(uVar19);
    FUN_1000d468c(lVar23 + 0x38);
    uVar20 = *(undefined8 *)(lVar23 + 0x50);
    uVar18 = *(undefined8 *)(lVar23 + 0x58);
    FUN_100004640(lVar23 + 0x38,uVar20);
    *(undefined8 *)(lVar23 + 0x140) = 0x20676e697355;
    *(undefined1 **)(lVar23 + 0x148) = &DAT_e600000000000000;
    uVar21 = uVar19;
    _swift_getObjectType();
    *(undefined8 *)(lVar23 + 0x1f8) = uVar21;
    SVar24 = Swift::__typeName(SUB81(uVar21,0));
    SVar31.bridgeObject = pvVar14;
    SVar31.str = pcVar13;
    Swift::String::append(SVar24,SVar31);
    _swift_bridgeObjectRelease(SVar24.bridgeObject);
    uVar21 = *(undefined8 *)(lVar23 + 0x148);
    FUN_1000d4db8(*(undefined8 *)(lVar23 + 0x140),uVar21,uVar20,uVar18);
    _swift_bridgeObjectRelease(uVar21);
    FUN_100004594(lVar23 + 0x38);
    _swift_getObjectType(uVar19);
    piVar17 = *(int **)(lVar16 + 0x28);
    iVar2 = *piVar17;
    plVar10 = (long *)(ulong)(uint)piVar17[1];
    _swift_task_alloc();
    *(long **)(lVar23 + 0x200) = plVar10;
    *plVar10 = lVar15;
    plVar10[1] = (long)FUN_1001a2144;
                    /* WARNING: Could not recover jumptable at 0x0001001a2714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar17))
              (plVar10,*(undefined8 *)(lVar23 + 0x1c8),*(undefined8 *)(lVar23 + 400),
               uVar22 & 0xcfffffffffffffff,uVar19,lVar16);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1001a271c);
  (*pcVar6)();
}



/* Address: 0x1001a271c | FUN_1001a271c */

void FUN_1001a271c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x208));
  FUN_1001a4280(uVar1,0);
  FUN_100005808(uVar1,&DAT_100fb4120,&DAT_100c323e0);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1001a27a0,uVar2,uVar3);
  return;
}



/* Address: 0x1001a27a0 | FUN_1001a27a0 */

void FUN_1001a27a0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1d8));
  _swift_unknownObjectRelease(uVar2);
  FUN_10001835c(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001a2800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a2804 | FUN_1001a2804 */

void FUN_1001a2804(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x210));
  FUN_1001a4280(uVar1,0);
  FUN_100005808(uVar1,&DAT_100fb4120,&DAT_100c323e0);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1001a2888,uVar2,uVar3);
  return;
}



/* Address: 0x1001a2888 | FUN_1001a2888 */

void FUN_1001a2888(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1c8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001001a28c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a28cc | FUN_1001a28cc */

void FUN_1001a28cc(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fb4230;
  FUN_1000037f0(&DAT_100fb4230,&DAT_100c324b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fb4230,&DAT_100c324b8);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fb4230,&DAT_100c324b8);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fb4230,&DAT_100c324b8);
    puVar2 = &DAT_100ebdb68;
    _swift_allocObject(&DAT_100ebdb68,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c324d8,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ebdb90;
    _swift_allocObject(&DAT_100ebdb90,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c324e0,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fb4230,&DAT_100c324b8);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1001a2b68 | FUN_1001a2b68 */

void FUN_1001a2b68(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long *plVar8;
  _StringGuts _Var9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  int *piVar13;
  undefined8 uVar14;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar15;
  undefined8 uVar16;
  String SVar17;
  String SVar18;
  
  *(undefined8 *)(unaff_x22 + 0x130) = param_2;
  *(long *)(unaff_x22 + 0x138) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x128) = param_1;
  puVar4 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  uVar5 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x140) = uVar5;
  lVar6 = 0;
  FUN_1001a5804();
  uVar5 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x148) = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x150) = uVar5;
  lVar6 = 0;
  FUN_10019fee0();
  *(long *)(unaff_x22 + 0x158) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x160) = lVar6;
  uVar5 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar7 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x168) = uVar7;
  uVar5 = uVar5 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar6 = unaff_x22 + 0x10;
  FUN_100004640(lVar6,uVar2);
  FUN_1000d4db8(0xd000000000000016,0x8000000100d97b00,uVar2,uVar16,lVar6);
  FUN_100004594(unaff_x22 + 0x10);
  pcVar10 = (char *)0x0;
  pvVar11 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x18,unaff_x22 + 0xb0);
  lVar6 = *(long *)(unaff_x20 + 0x18);
  *(long *)(unaff_x22 + 0x180) = lVar6;
  lVar12 = *(long *)(lVar6 + 0x10);
  *(long *)(unaff_x22 + 0x188) = lVar12;
  if (lVar12 == 0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x148);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x150);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x140);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x170));
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001001a2e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(undefined8 *)(unaff_x22 + 400) = 0;
  lVar12 = *(long *)(lVar6 + 0x10);
  _swift_bridgeObjectRetain();
  if (lVar12 != 0) {
    uVar5 = *(ulong *)(unaff_x22 + 0x130);
    uVar14 = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(unaff_x22 + 0x198) = uVar14;
    lVar6 = *(long *)(lVar6 + 0x28);
    *(long *)(unaff_x22 + 0x1a0) = lVar6;
    _swift_unknownObjectRetain(uVar14);
    FUN_1000d468c(unaff_x22 + 0x38);
    puVar4 = *(undefined **)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
    _Var9.unknown = puVar4;
    FUN_100004640(unaff_x22 + 0x38);
    *(undefined8 *)(unaff_x22 + 0xf0) = 0;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var9);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0xf8));
    *(undefined8 *)(unaff_x22 + 0xe0) = 0xd00000000000001c;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0x8000000100d97b20;
    uVar16 = uVar14;
    _swift_getObjectType();
    *(undefined8 *)(unaff_x22 + 0x1a8) = uVar16;
    SVar17 = Swift::__typeName(SUB81(uVar16,0));
    SVar18.bridgeObject = pvVar11;
    SVar18.str = pcVar10;
    Swift::String::append(SVar17,SVar18);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    uVar16 = *(undefined8 *)(unaff_x22 + 0xe8);
    FUN_1000d4db8(*(undefined8 *)(unaff_x22 + 0xe0),uVar16,puVar4,uVar2);
    _swift_bridgeObjectRelease(uVar16);
    FUN_100004594(unaff_x22 + 0x38);
    _swift_getObjectType();
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar14;
    piVar13 = *(int **)(lVar6 + 0x30);
    iVar1 = *piVar13;
    plVar8 = (long *)(ulong)(uint)piVar13[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1b8) = plVar8;
    *plVar8 = unaff_x22;
    plVar8[1] = (long)FUN_1001a2e58;
                    /* WARNING: Could not recover jumptable at 0x0001001a2df8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar13))
              (*(undefined8 *)(unaff_x22 + 0x128),uVar5 & 0xcfffffffffffffff,uVar14,lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a2e58);
  (*pcVar3)();
}



/* Address: 0x1001a2e58 | FUN_1001a2e58 */

void FUN_1001a2e58(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  int iVar1;
  undefined *puVar2;
  code *pcVar3;
  long *plVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  
  lVar17 = *unaff_x22;
  lVar14 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 0x1b8));
  if (unaff_x20 == 0) {
    uVar10 = *(ulong *)(lVar17 + 0x130);
    piVar8 = *(int **)(*(long *)(lVar17 + 0x1a0) + 0x28);
    iVar1 = *piVar8;
    plVar4 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(lVar17 + 0x1c0) = plVar4;
    *plVar4 = lVar14;
    plVar4[1] = (long)FUN_1001a31c8;
                    /* WARNING: Could not recover jumptable at 0x0001001a305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))
              (plVar4,*(undefined8 *)(lVar17 + 0x150),*(undefined8 *)(lVar17 + 0x128),
               uVar10 & 0xcfffffffffffffff,*(undefined8 *)(lVar17 + 0x1b0),
               *(undefined8 *)(lVar17 + 0x1a0));
    return;
  }
  uVar16 = *(undefined8 *)(lVar17 + 0x1a8);
  uVar12 = *(undefined8 *)(lVar17 + 0x198);
  FUN_1000d468c(lVar17 + 0x60);
  pcVar6 = *(char **)(lVar17 + 0x78);
  pvVar7 = *(void **)(lVar17 + 0x80);
  _Var5.unknown = pcVar6;
  FUN_100004640(lVar17 + 0x60);
  *(undefined8 *)(lVar17 + 0x110) = 0;
  *(undefined8 *)(lVar17 + 0x118) = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1e,_Var5);
  *(undefined8 *)(lVar17 + 0x100) = *(undefined8 *)(lVar17 + 0x110);
  *(undefined8 *)(lVar17 + 0x108) = *(undefined8 *)(lVar17 + 0x118);
  SVar18.bridgeObject = (void *)0x8000000100d97b40;
  SVar18.str = (char *)0xd000000000000018;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar18,SVar20);
  SVar18 = Swift::__typeName(SUB81(uVar16,0));
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar18,SVar21);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = &SUB_e200000000000000;
  SVar19.str = (char *)0x203a;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  _swift_getErrorValue();
  Swift::DefaultStringInterpolation::_appendInterpolation
            (*(undefined8 *)(lVar17 + 200),*(undefined8 *)(lVar17 + 0xd0));
  uVar16 = *(undefined8 *)(lVar17 + 0x108);
  FUN_1000d4db8(*(undefined8 *)(lVar17 + 0x100),uVar16);
  _swift_errorRelease();
  _swift_unknownObjectRelease(uVar12);
  _swift_bridgeObjectRelease(uVar16);
  FUN_100004594(lVar17 + 0x60);
  uVar10 = *(long *)(lVar17 + 400) + 1;
  if (uVar10 == *(ulong *)(lVar17 + 0x188)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0x180));
    uVar16 = *(undefined8 *)(lVar17 + 0x168);
    uVar12 = *(undefined8 *)(lVar17 + 0x148);
    uVar11 = *(undefined8 *)(lVar17 + 0x150);
    uVar15 = *(undefined8 *)(lVar17 + 0x140);
    _swift_task_dealloc(*(undefined8 *)(lVar17 + 0x170));
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x0001001a2fec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 8))();
    return;
  }
  *(ulong *)(lVar17 + 400) = uVar10;
  if (uVar10 < *(ulong *)(*(long *)(lVar17 + 0x180) + 0x10)) {
    uVar9 = *(ulong *)(lVar17 + 0x130);
    lVar13 = *(long *)(lVar17 + 0x180) + uVar10 * 0x10;
    uVar11 = *(undefined8 *)(lVar13 + 0x20);
    *(undefined8 *)(lVar17 + 0x198) = uVar11;
    lVar13 = *(long *)(lVar13 + 0x28);
    *(long *)(lVar17 + 0x1a0) = lVar13;
    _swift_unknownObjectRetain(uVar11);
    FUN_1000d468c(lVar17 + 0x38);
    puVar2 = *(undefined **)(lVar17 + 0x50);
    uVar16 = *(undefined8 *)(lVar17 + 0x58);
    _Var5.unknown = puVar2;
    FUN_100004640(lVar17 + 0x38);
    *(undefined8 *)(lVar17 + 0xf0) = 0;
    *(undefined8 *)(lVar17 + 0xf8) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var5);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0xf8));
    *(undefined8 *)(lVar17 + 0xe0) = 0xd00000000000001c;
    *(undefined8 *)(lVar17 + 0xe8) = 0x8000000100d97b20;
    uVar12 = uVar11;
    _swift_getObjectType();
    *(undefined8 *)(lVar17 + 0x1a8) = uVar12;
    SVar18 = Swift::__typeName(SUB81(uVar12,0));
    SVar23.bridgeObject = pvVar7;
    SVar23.str = pcVar6;
    Swift::String::append(SVar18,SVar23);
    _swift_bridgeObjectRelease(SVar18.bridgeObject);
    uVar12 = *(undefined8 *)(lVar17 + 0xe8);
    FUN_1000d4db8(*(undefined8 *)(lVar17 + 0xe0),uVar12,puVar2,uVar16);
    _swift_bridgeObjectRelease(uVar12);
    FUN_100004594(lVar17 + 0x38);
    _swift_getObjectType();
    *(undefined8 *)(lVar17 + 0x1b0) = uVar11;
    piVar8 = *(int **)(lVar13 + 0x30);
    iVar1 = *piVar8;
    plVar4 = (long *)(ulong)(uint)piVar8[1];
    _swift_task_alloc();
    *(long **)(lVar17 + 0x1b8) = plVar4;
    *plVar4 = lVar14;
    plVar4[1] = (long)FUN_1001a2e58;
                    /* WARNING: Could not recover jumptable at 0x0001001a31c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar8))
              (*(undefined8 *)(lVar17 + 0x128),uVar9 & 0xcfffffffffffffff,uVar11,lVar13);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a31c8);
  (*pcVar3)();
}



/* Address: 0x1001a31c8 | FUN_1001a31c8 */

void FUN_1001a31c8(void)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  MainActor *pMVar6;
  undefined *puVar7;
  UnownedSerialExecutor UVar8;
  undefined8 uVar9;
  long *plVar10;
  _StringGuts _Var11;
  char *pcVar12;
  void *in_x3;
  int *piVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long *unaff_x22;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  
  lVar19 = *unaff_x22;
  pcVar12 = *(char **)(lVar19 + 0x158);
  lVar16 = *(long *)(lVar19 + 0x160);
  uVar5 = *(undefined8 *)(lVar19 + 0x148);
  uVar9 = *(undefined8 *)(lVar19 + 0x150);
  lVar17 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x1c0));
  FUN_1000523d8(uVar9,uVar5,FUN_1001a5804);
  (**(code **)(lVar16 + 0x30))(uVar5,2);
  if ((int)uVar5 == 0) {
    uVar18 = *(undefined8 *)(lVar19 + 0x1a8);
    lVar16 = *(long *)(lVar19 + 0x170);
    lVar17 = *(long *)(lVar19 + 0x160);
    uVar9 = *(undefined8 *)(lVar19 + 0x168);
    uVar15 = *(undefined8 *)(lVar19 + 0x158);
    uVar5 = *(undefined8 *)(lVar19 + 0x140);
    pcVar4 = FUN_10019fee0;
    FUN_1000523d8(*(undefined8 *)(lVar19 + 0x148),uVar9,FUN_10019fee0);
    FUN_1000523d8(uVar9,lVar16);
    FUN_1000d468c(lVar19 + 0x88);
    puVar7 = *(undefined **)(lVar19 + 0xa0);
    uVar9 = *(undefined8 *)(lVar19 + 0xa8);
    _Var11.unknown = puVar7;
    FUN_100004640(lVar19 + 0x88);
    Swift::_StringGuts::grow(0x29,_Var11);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar20 = Swift::__typeName(SUB81(uVar18,0));
    SVar21.bridgeObject = in_x3;
    SVar21.str = (char *)pcVar4;
    Swift::String::append(SVar20,SVar21);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    SVar20.bridgeObject = &SUB_e200000000000000;
    SVar20.str = (char *)0x203a;
    SVar22.bridgeObject = in_x3;
    SVar22.str = (char *)pcVar4;
    Swift::String::append(SVar20,SVar22);
    SVar23.bridgeObject = in_x3;
    SVar23.str = (char *)pcVar4;
    Swift::String::append(*(String *)(lVar16 + 0x10),SVar23);
    FUN_1000d4db8(0xd000000000000023,0x8000000100d97b60,puVar7,uVar9);
    _swift_bridgeObjectRelease(0x8000000100d97b60);
    FUN_100004594(lVar19 + 0x88);
    FUN_1001a0764(lVar16,uVar5);
    (**(code **)(lVar17 + 0x38))(uVar5,0,1,uVar15);
    pMVar6 = Swift::MainActor::typeMetadataAccessor();
    puVar3 = PTR_typeMetadataAccessor_100eaec10;
    pMVar6 = Swift::MainActor::get_shared(pMVar6,pMVar6);
    *(MainActor **)(lVar19 + 0x1c8) = pMVar6;
    puVar7 = &DAT_100fb4200;
    FUN_100003a00(&DAT_100fb4200,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    UVar8 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1001a35ac,UVar8.unknown,puVar7);
    return;
  }
  _swift_unknownObjectRelease(*(undefined8 *)(lVar19 + 0x198));
  uVar1 = *(long *)(lVar19 + 400) + 1;
  if (uVar1 == *(ulong *)(lVar19 + 0x188)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + 0x180));
    uVar5 = *(undefined8 *)(lVar19 + 0x168);
    uVar9 = *(undefined8 *)(lVar19 + 0x148);
    uVar15 = *(undefined8 *)(lVar19 + 0x150);
    uVar18 = *(undefined8 *)(lVar19 + 0x140);
    _swift_task_dealloc(*(undefined8 *)(lVar19 + 0x170));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x0001001a32a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar17 + 8))();
    return;
  }
  *(ulong *)(lVar19 + 400) = uVar1;
  if (uVar1 < *(ulong *)(*(long *)(lVar19 + 0x180) + 0x10)) {
    uVar14 = *(ulong *)(lVar19 + 0x130);
    lVar16 = *(long *)(lVar19 + 0x180) + uVar1 * 0x10;
    uVar15 = *(undefined8 *)(lVar16 + 0x20);
    *(undefined8 *)(lVar19 + 0x198) = uVar15;
    lVar16 = *(long *)(lVar16 + 0x28);
    *(long *)(lVar19 + 0x1a0) = lVar16;
    _swift_unknownObjectRetain(uVar15);
    FUN_1000d468c(lVar19 + 0x38);
    puVar7 = *(undefined **)(lVar19 + 0x50);
    uVar5 = *(undefined8 *)(lVar19 + 0x58);
    _Var11.unknown = puVar7;
    FUN_100004640(lVar19 + 0x38);
    *(undefined8 *)(lVar19 + 0xf0) = 0;
    *(undefined8 *)(lVar19 + 0xf8) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var11);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar19 + 0xf8));
    *(undefined8 *)(lVar19 + 0xe0) = 0xd00000000000001c;
    *(undefined8 *)(lVar19 + 0xe8) = 0x8000000100d97b20;
    uVar9 = uVar15;
    _swift_getObjectType();
    *(undefined8 *)(lVar19 + 0x1a8) = uVar9;
    SVar20 = Swift::__typeName(SUB81(uVar9,0));
    SVar24.bridgeObject = in_x3;
    SVar24.str = pcVar12;
    Swift::String::append(SVar20,SVar24);
    _swift_bridgeObjectRelease(SVar20.bridgeObject);
    uVar9 = *(undefined8 *)(lVar19 + 0xe8);
    FUN_1000d4db8(*(undefined8 *)(lVar19 + 0xe0),uVar9,puVar7,uVar5);
    _swift_bridgeObjectRelease(uVar9);
    FUN_100004594(lVar19 + 0x38);
    _swift_getObjectType();
    *(undefined8 *)(lVar19 + 0x1b0) = uVar15;
    piVar13 = *(int **)(lVar16 + 0x30);
    iVar2 = *piVar13;
    plVar10 = (long *)(ulong)(uint)piVar13[1];
    _swift_task_alloc();
    *(long **)(lVar19 + 0x1b8) = plVar10;
    *plVar10 = lVar17;
    plVar10[1] = (long)FUN_1001a2e58;
                    /* WARNING: Could not recover jumptable at 0x0001001a35a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar2 + (long)piVar13))
              (*(undefined8 *)(lVar19 + 0x128),uVar14 & 0xcfffffffffffffff,uVar15,lVar16);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001a35ac);
  (*pcVar4)();
}



/* Address: 0x1001a35ac | FUN_1001a35ac */

void FUN_1001a35ac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x130);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1c8));
  FUN_1001a4280(uVar1,0);
  FUN_100005808(uVar1,&DAT_100fb4120,&DAT_100c323e0);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(FUN_1001a3630,uVar2,uVar3);
  return;
}



/* Address: 0x1001a3630 | FUN_1001a3630 */

void FUN_1001a3630(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x180));
  _swift_unknownObjectRelease(uVar3);
  FUN_10001835c(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x140);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x170));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001001a36b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a36b4 | FUN_1001a36b4 */

undefined8 FUN_1001a36b4(Date param_1)

{
  Date DVar1;
  CurrentValueSubject *pCVar2;
  long lVar3;
  undefined1 *puVar4;
  Date DVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  code *pcVar6;
  long unaff_x20;
  CurrentValueSubject *this;
  Date DVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  double dVar12;
  undefined8 uVar13;
  
  puVar10 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  puVar10 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar7.unknown = puVar8 + -extraout_x8_00;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = (long)DVar7.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = (undefined *)(lVar9 - extraout_x12);
  this = *(CurrentValueSubject **)(unaff_x20 + 0x10);
  pCVar2 = this;
  _swift_retain();
  Combine::CurrentValueSubject::get_value(this,pCVar2);
  _swift_release(this);
  lVar3 = 0;
  FUN_10019fee0();
  puVar4 = puVar8;
  (**(code **)(*(long *)(lVar3 + -8) + 0x30))(puVar8,1,lVar3);
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar8,&DAT_100fb4120,&DAT_100c323e0);
    (**(code **)(lVar11 + 0x38))(DVar7.unknown,1,1,DVar1.unknown);
  }
  else {
    FUN_100011090(puVar8 + *(int *)(lVar3 + 0x18),DVar7.unknown,&DAT_100fb4018,&DAT_100c321e8);
    FUN_10001835c(puVar8);
    puVar4 = DVar7.unknown;
    (**(code **)(lVar11 + 0x30))(DVar7.unknown,1,DVar1.unknown);
    if ((int)puVar4 != 1) {
      DVar5.unknown = puVar10;
      (**(code **)(lVar11 + 0x20))(puVar10,DVar7.unknown,DVar1.unknown);
      Foundation::Date::addingTimeInterval(3600.0,DVar5);
      dVar12 = Foundation::Date::timeIntervalSince(param_1,DVar7);
      pcVar6 = *(code **)(lVar11 + 8);
      (*pcVar6)(lVar9,DVar1.unknown);
      (*pcVar6)(puVar10,DVar1.unknown);
      if (dVar12 <= 0.0) {
        return 0x40ac200000000000;
      }
      uVar13 = NEON_fminnm(dVar12,0x40f5180000000000);
      return uVar13;
    }
  }
  FUN_100005808(DVar7.unknown,&DAT_100fb4018,&DAT_100c321e8);
  return 0x40f5180000000000;
}



/* Address: 0x1001a3920 | FUN_1001a3920 */

void FUN_1001a3920(void)

{
  undefined *puVar1;
  ulong uVar2;
  Date DVar3;
  undefined8 in_x3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = in_x3;
  puVar1 = &DAT_100fb4230;
  FUN_1000037f0(&DAT_100fb4230,&DAT_100c324b8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x48) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x50) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  _swift_task_switch(FUN_1001a39ac,0,0);
  return;
}



/* Address: 0x1001a39ac | FUN_1001a39ac */

void FUN_1001a39ac(double param_1,Date param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
  Foundation::Date::get_now(param_2);
  FUN_1001a36b4(uVar2);
  (**(code **)(lVar1 + 8))(uVar2,uVar5);
  param_1 = param_1 * 1000000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a3a80);
    (*pcVar3)();
  }
  if (-1.0 < param_1) {
    if (param_1 < 1.8446744073709552e+19) {
      plVar4 = (long *)(ulong)*(uint *)(PTR__sleep_100eaed60 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_1001a3a88;
      (extension_Swift)::Swift::Task::_sleep((long)param_1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a3a88);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1001a3a84);
  (*pcVar3)();
}



/* Address: 0x1001a3a88 | FUN_1001a3a88 */

void FUN_1001a3a88(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1001a3ae8;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_1001a3ae8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1001a3ae8 | FUN_1001a3ae8 */

void FUN_1001a3ae8(Task param_1)

{
  undefined8 uVar1;
  bool bVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  bVar2 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar2) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x40);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
    _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001001a3b28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar3 = unaff_x22 + 0x10;
  FUN_100004640(lVar3,uVar5);
  FUN_1000d4db8(0xd00000000000001e,0x8000000100d97d00,uVar5,uVar1,lVar3);
  FUN_100004594(unaff_x22 + 0x10);
  plVar4 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1001a3bbc;
  FUN_1001a1b9c(0,0);
  return;
}



/* Address: 0x1001a3bbc | FUN_1001a3bbc */

void FUN_1001a3bbc(void)

{
  long lVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar1 = *(long *)(lVar7 + 0x38);
  uVar5 = *(undefined8 *)(lVar7 + 0x40);
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x68));
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar5,1,1,TVar2.unknown);
  puVar3 = &DAT_100ebdbe0;
  _swift_allocObject(&DAT_100ebdbe0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(long *)(puVar3 + 0x20) = lVar1;
  _swift_retain(lVar1);
  uVar4 = 0;
  FUN_1001a28cc(0,0,uVar5,&DAT_100c32500,puVar3);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  _swift_release(uVar5);
  uVar5 = *(undefined8 *)(lVar7 + 0x40);
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x58));
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001001a3c8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))();
  return;
}



/* Address: 0x1001a3c90 | FUN_1001a3c90 */

void FUN_1001a3c90(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  TaskPriority TVar4;
  _StringGuts _Var5;
  long extraout_x8;
  ulong uVar6;
  long extraout_x12;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  char *pcVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined1 *local_b0;
  undefined8 local_a8;
  long local_a0 [3];
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  
  puVar1 = &DAT_100fb4230;
  pcVar2 = param_3;
  FUN_1000037f0(&DAT_100fb4230,&DAT_100c324b8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_b0 - extraout_x8;
  puVar1 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  local_a0[0] = *(long *)(puVar1 + -8);
  lVar11 = *(long *)(local_a0[0] + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar7 - (lVar11 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar10 - extraout_x12;
  FUN_1000d468c(auStack_88);
  local_a8 = uStack_68;
  puVar8 = auStack_88;
  _Var5.unknown = local_70;
  FUN_100004640();
  local_a0[1] = 0;
  local_a0[2] = 0xe000000000000000;
  local_b0 = puVar8;
  Swift::_StringGuts::grow(0x21,_Var5);
  _swift_bridgeObjectRelease(local_a0[2]);
  local_a0[1] = 0x72656469766f7250;
  local_a0[2] = 0xe900000000000020;
  _swift_getObjectType();
  SVar15 = Swift::__typeName(SUB81(param_3,0));
  SVar17.bridgeObject = param_4;
  SVar17.str = pcVar2;
  Swift::String::append(SVar15,SVar17);
  _swift_bridgeObjectRelease(SVar15.bridgeObject);
  SVar15.bridgeObject = (void *)0x8000000100d97d20;
  SVar15.str = (char *)0xd000000000000014;
  SVar18.bridgeObject = param_4;
  SVar18.str = pcVar2;
  Swift::String::append(SVar15,SVar18);
  puVar1 = &DAT_100c323e0;
  FUN_100011090(param_1,lVar14,&DAT_100fb4120);
  pcVar2 = (char *)0x0;
  FUN_10019fee0();
  lVar3 = lVar14;
  (**(code **)(*(long *)(pcVar2 + -8) + 0x30))(lVar14,1);
  if ((int)lVar3 == 1) {
    pcVar2 = &DAT_100c323e0;
    FUN_100005808(lVar14,&DAT_100fb4120);
    puVar8 = &DAT_e400000000000000;
    pcVar13 = (char *)0x656e6f6e;
  }
  else {
    pcVar13 = *(char **)(lVar14 + 0x10);
    puVar8 = *(undefined1 **)(lVar14 + 0x18);
    _swift_bridgeObjectRetain(puVar8);
    FUN_10001835c(lVar14);
  }
  SVar16.bridgeObject = puVar8;
  SVar16.str = pcVar13;
  SVar19.bridgeObject = puVar1;
  SVar19.str = pcVar2;
  Swift::String::append(SVar16,SVar19);
  _swift_bridgeObjectRelease(puVar8);
  lVar3 = local_a0[2];
  FUN_1000d4db8(local_a0[1],local_a0[2],local_70,local_a8);
  _swift_bridgeObjectRelease(lVar3);
  FUN_100004594(auStack_88);
  TVar4 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar4.unknown + -8) + 0x38))(lVar7,1,1,TVar4.unknown);
  FUN_100011090(param_1,lVar10,&DAT_100fb4120,&DAT_100c323e0);
  uVar6 = (ulong)*(byte *)(local_a0[0] + 0x50);
  uVar9 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  uVar12 = lVar11 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar1 = &DAT_100ebdc30;
  _swift_allocObject(&DAT_100ebdc30,uVar12 + 8,uVar6 | 7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  FUN_1001a5360(lVar10,puVar1 + uVar9);
  *(undefined8 *)(puVar1 + uVar12) = param_2;
  _swift_retain(param_2);
  FUN_1001a28cc(0,0,lVar7,&DAT_100c32568,puVar1);
  _swift_release();
  return;
}



/* Address: 0x1001a3f7c | FUN_1001a3f7c */

void FUN_1001a3f7c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  puVar1 = &DAT_100fb4120;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x20) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar3;
  lVar4 = 0;
  FUN_10019fee0();
  *(long *)(unaff_x22 + 0x30) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x38) = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar3;
  _swift_task_switch(FUN_1001a4014,0,0);
  return;
}



/* Address: 0x1001a4014 | FUN_1001a4014 */

void FUN_1001a4014(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  MainActor *pMVar5;
  undefined *puVar6;
  UnownedSerialExecutor UVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar2 = *(long *)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_100011090(*(undefined8 *)(unaff_x22 + 0x10),uVar8,&DAT_100fb4120,&DAT_100c323e0);
  (**(code **)(lVar2 + 0x30))(uVar8,1,uVar1);
  if ((int)uVar8 == 1) {
    FUN_100005808(*(undefined8 *)(unaff_x22 + 0x28),&DAT_100fb4120,&DAT_100c323e0);
    plVar4 = (long *)0x40;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1001a4178;
    FUN_1001a1b9c(0,0);
    return;
  }
  lVar2 = *(long *)(unaff_x22 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_1000523d8(*(undefined8 *)(unaff_x22 + 0x28),uVar1,FUN_10019fee0);
  FUN_1001a0764(uVar1,uVar9);
  (**(code **)(lVar2 + 0x38))(uVar9,0,1,uVar8);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eaec10;
  pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar5;
  puVar6 = &DAT_100fb4200;
  FUN_100003a00(&DAT_100fb4200,puVar3,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar7 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_1001a41d0,UVar7.unknown,puVar6);
  return;
}



/* Address: 0x1001a4178 | FUN_1001a4178 */

void FUN_1001a4178(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar3 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  uVar1 = *(undefined8 *)(lVar3 + 0x20);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001a41cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1001a41d0 | FUN_1001a41d0 */

void FUN_1001a41d0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
  FUN_1001a4280(uVar1,0);
  FUN_100005808(uVar1,&DAT_100fb4120,&DAT_100c323e0);
  _swift_task_switch(FUN_1001a4234,0,0);
  return;
}



/* Address: 0x1001a4234 | FUN_1001a4234 */

void FUN_1001a4234(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  FUN_10001835c(*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001001a427c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1001a4280 | FUN_1001a4280 */

void FUN_1001a4280(undefined8 param_1,uint param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  long extraout_x8;
  undefined **ppuVar10;
  long extraout_x12;
  long lVar11;
  long unaff_x20;
  CurrentValueSubject *pCVar12;
  undefined8 uVar13;
  CurrentValueSubject *this;
  undefined1 *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined8 *puVar17;
  String SVar18;
  String SVar19;
  code *apcStack_120 [4];
  uint local_fc;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined1 auStack_90 [24];
  undefined *local_78;
  long lStack_70;
  
  puVar3 = &DAT_100fb4120;
  local_fc = param_2;
  FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar11 = (long)apcStack_120 + lVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar17 = (undefined8 *)(lVar11 - extraout_x12);
  pCVar12 = *(CurrentValueSubject **)(unaff_x20 + 0x10);
  _swift_retain(pCVar12);
  Combine::CurrentValueSubject::send(pCVar12,param_1);
  _swift_release(pCVar12);
  FUN_1000da768(auStack_90);
  lVar7 = lStack_70;
  puVar2 = local_78;
  puVar14 = auStack_90;
  FUN_100004640(puVar14,local_78);
  puVar3 = &DAT_100fb4208;
  apcStack_120[2] = (code *)puVar14;
  FUN_1000037f0(&DAT_100fb4208,&DAT_100c32498);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x20) = 0xd000000000000012;
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x28) = 0x8000000100d97b90;
  puVar9 = &DAT_100c323e0;
  apcStack_120[1] = (code *)param_1;
  FUN_100011090(param_1,puVar17,&DAT_100fb4120);
  pcVar4 = (char *)0x0;
  FUN_10019fee0();
  apcStack_120[3] = *(code **)(*(long *)(pcVar4 + -8) + 0x30);
  puVar5 = puVar17;
  (*apcStack_120[3])(puVar17,1,pcVar4);
  if ((int)puVar5 == 1) {
    FUN_100005808(puVar17,&DAT_100fb4120,&DAT_100c323e0);
    uVar15 = 0;
    uVar13 = 0;
    ppuVar10 = (undefined **)0x0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    puVar6 = (undefined *)0x0;
  }
  else {
    uVar15 = *puVar17;
    uVar13 = puVar17[1];
    _swift_bridgeObjectRetain(uVar13);
    FUN_10001835c(puVar17);
    ppuVar10 = &PTR_PTR_100ebcc60;
    puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  }
  *(undefined8 *)(puVar3 + 0x30) = uVar15;
  *(undefined8 *)(puVar3 + 0x38) = uVar13;
  *(undefined **)(puVar3 + 0x48) = puVar6;
  *(undefined ***)(puVar3 + 0x50) = ppuVar10;
  puVar6 = puVar3;
  FUN_1001a4b28(puVar3);
  _swift_setDeallocating(puVar3);
  FUN_100005808(puVar3 + 0x20,&DAT_100fb4210,&DAT_100c324a0);
  (**(code **)(lVar7 + 0x10))(puVar6,puVar2,lVar7);
  _swift_bridgeObjectRelease(puVar6);
  FUN_100004594(auStack_90);
  if ((local_fc & 1) == 0) {
    FUN_1001a45e0(apcStack_120[1]);
  }
  FUN_1000d468c(auStack_90);
  _Var8.unknown = local_78;
  FUN_100004640(auStack_90);
  local_f8 = 0;
  local_f0 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x12,_Var8);
  _swift_bridgeObjectRelease(local_f0);
  local_f8 = 0xd000000000000010;
  local_f0 = 0x8000000100d97bb0;
  this = *(CurrentValueSubject **)(unaff_x20 + 0x10);
  pCVar12 = this;
  _swift_retain();
  Combine::CurrentValueSubject::get_value(this,pCVar12);
  _swift_release(this);
  lVar7 = lVar11;
  (*apcStack_120[3])(lVar11,1);
  if ((int)lVar7 == 1) {
    pcVar4 = &DAT_100c323e0;
    FUN_100005808(lVar11,&DAT_100fb4120);
    puVar14 = &DAT_e400000000000000;
    pcVar16 = (char *)0x656e6f6e;
  }
  else {
    pcVar16 = *(char **)((long)apcStack_120 + lVar1 + 0x10);
    puVar14 = *(undefined1 **)((long)apcStack_120 + lVar1 + 0x18);
    _swift_bridgeObjectRetain(puVar14);
    FUN_10001835c(lVar11);
  }
  SVar18.bridgeObject = puVar14;
  SVar18.str = pcVar16;
  SVar19.bridgeObject = puVar9;
  SVar19.str = pcVar4;
  Swift::String::append(SVar18,SVar19);
  _swift_bridgeObjectRelease(puVar14);
  uVar15 = local_f0;
  FUN_1000d4dd4(local_f8,local_f0,local_78,lStack_70);
  _swift_bridgeObjectRelease(uVar15);
  FUN_100004594(auStack_90);
  return;
}



/* Address: 0x1001a45e0 | FUN_1001a45e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001a4664) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001a465c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001a45e0(void)

{
  JSONEncoder *pJVar1;
  undefined *puVar2;
  undefined *puVar3;
  Data DVar4;
  NSData *pNVar5;
  NSString *pNVar6;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x48);
  if (self != 0) {
    pJVar1 = Foundation::JSONEncoder::typeMetadataAccessor();
    _swift_allocObject(pJVar1,*(undefined4 *)(pJVar1 + 0x30),*(undefined2 *)(pJVar1 + 0x34));
    pJVar1 = Foundation::JSONEncoder::init(pJVar1);
    puVar2 = &DAT_100fb4120;
    FUN_1000037f0(&DAT_100fb4120,&DAT_100c323e0);
    puVar3 = puVar2;
    FUN_1001a4f30();
    DVar4 = Foundation::JSONEncoder::_encode(pJVar1,puVar3,puVar2,puVar3);
    pNVar5 = Foundation::Data::_bridgeToObjectiveC(DVar4);
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setObject_forKey_(self,pNVar5,pNVar6);
    _swift_release(pJVar1);
    FUN_10003bf2c(DVar4.unknown,puVar2);
    return;
  }
  return;
}



/* Address: 0x1001a4730 | FUN_1001a4730 */

void FUN_1001a4730(void)

{
  CurrentValueSubject *pCVar1;
  long *unaff_x20;
  CurrentValueSubject *this;
  
  this = *(CurrentValueSubject **)(*unaff_x20 + 0x10);
  pCVar1 = this;
  _swift_retain();
  Combine::CurrentValueSubject::get_value(this,pCVar1);
  _swift_release(this);
  return;
}



/* Address: 0x1001a4768 | FUN_1001a4768 */

void FUN_1001a4768(void)

{
  FUN_1000037f0(&DAT_100fb4240,&DAT_100c32510);
  FUN_1001a5198();
  (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
  return;
}



/* Address: 0x1001a47c0 | FUN_1001a47c0 */

uint FUN_1001a47c0(uint param_1)

{
  FUN_1001a168c();
  return param_1 & 1;
}



/* Address: 0x1001a47e4 | FUN_1001a47e4 */

void FUN_1001a47e4(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  puVar1 = &DAT_100fb4230;
  FUN_1000037f0(&DAT_100fb4230,&DAT_100c324b8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  uVar4 = *unaff_x20;
  *(ulong *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1001a4870;
  FUN_1001a1b9c(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x1001a4870 | FUN_1001a4870 */

void FUN_1001a4870(void)

{
  long lVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  
  lVar5 = *unaff_x22;
  lVar1 = *(long *)(lVar5 + 0x18);
  uVar7 = *(undefined8 *)(lVar5 + 0x10);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x20));
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar7,1,1,TVar2.unknown);
  puVar3 = &DAT_100ebdbb8;
  _swift_allocObject(&DAT_100ebdbb8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(long *)(puVar3 + 0x20) = lVar1;
  _swift_retain(lVar1);
  uVar4 = 0;
  FUN_1001a28cc(0,0,uVar7,&DAT_100c324f8,puVar3);
  uVar6 = *(undefined8 *)(lVar1 + 0x20);
  *(undefined8 *)(lVar1 + 0x20) = uVar4;
  _swift_release(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001001a4934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}



/* Address: 0x1001a4938 | FUN_1001a4938 */

void FUN_1001a4938(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1001a1b9c(param_1,param_2 & 0xcfffffffffffffff);
  return;
}


