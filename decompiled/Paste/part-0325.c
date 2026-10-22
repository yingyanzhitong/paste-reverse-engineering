/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10040a4f8 | FUN_10040a4f8 */

void * FUN_10040a4f8(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined *puVar3;
  Calendar CVar4;
  void *pvVar5;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_100408dd0);
    pvVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar5 != 1) {
      pvVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar5;
    }
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
    puVar3 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar1 = *(int *)(puVar3 + 0x30);
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,CVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x10040a5dc | FUN_10040a5dc */

void * FUN_10040a5dc(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined *puVar3;
  Calendar CVar4;
  void *pvVar5;
  
  pvVar5 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar5 == 1) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))(param_1,param_2,DVar2.unknown);
    puVar3 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar1 = *(int *)(puVar3 + 0x30);
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,CVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
    return param_1;
  }
  pvVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar5;
}



/* Address: 0x10040a6a8 | FUN_10040a6a8 */

void * FUN_10040a6a8(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  undefined *puVar3;
  Calendar CVar4;
  void *pvVar5;
  
  if (param_1 != param_2) {
    FUN_10005241c(param_1,FUN_100408dd0);
    pvVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar5 != 1) {
      pvVar5 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar5;
    }
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 0x20))(param_1,param_2,DVar2.unknown);
    puVar3 = &DAT_100fc4e68;
    FUN_1000037f0(&DAT_100fc4e68,&DAT_100c48510);
    iVar1 = *(int *)(puVar3 + 0x30);
    CVar4 = Foundation::Calendar::typeMetadataAccessor();
    (**(code **)(*(long *)(CVar4.unknown + -8) + 0x20))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,CVar4.unknown);
    _swift_storeEnumTagMultiPayload(param_1,param_3,1);
  }
  return param_1;
}



/* Address: 0x10040a78c | FUN_10040a78c */

undefined1  [16] FUN_10040a78c(undefined8 param_1,ulong param_2)

{
  Date DVar1;
  Date DVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_50 [32];
  undefined *local_30;
  undefined1 *local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  DVar1 = Foundation::Date::typeMetadataAccessor();
  DVar2 = DVar1;
  if ((param_2 < 0x40) &&
     (DVar2.unknown = (undefined *)Foundation::Calendar::typeMetadataAccessor(), param_2 < 0x40)) {
    _swift_getTupleTypeLayout2
              (auStack_50,*(long *)(DVar1.unknown + -8) + 0x40,*(long *)(DVar2.unknown + -8) + 0x40)
    ;
    local_28 = auStack_50;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_30);
    DVar2.unknown = (undefined *)0x0;
    uVar3 = 0;
  }
  else {
    uVar3 = 0x3f;
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = DVar2.unknown;
  return auVar4;
}



/* Address: 0x10040a828 | FUN_10040a828 */

undefined1  [16] FUN_10040a828(void)

{
  return ZEXT816(0x100ed2238);
}



/* Address: 0x10040a838 | FUN_10040a838 */

undefined1  [16] FUN_10040a838(void)

{
  return ZEXT816(0x100ed22c8);
}



/* Address: 0x10040a848 | FUN_10040a848 */

undefined1  [16] FUN_10040a848(void)

{
  return ZEXT816(0x100ed22e8);
}



/* Address: 0x10040a858 | FUN_10040a858 */

undefined1  [16] FUN_10040a858(void)

{
  return ZEXT816(0x100ed2308);
}



/* Address: 0x10040a868 | FUN_10040a868 */

int FUN_10040a868(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf7 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 8) {
      iVar2 = 4;
    }
    if (param_2 + 8 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_10040a8e4;
        goto LAB_10040a8c8;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10040a8c8:
      return ((uint)*param_1 | uVar1 << 8) - 8;
    }
  }
LAB_10040a8e4:
  iVar2 = *param_1 - 9;
  if (*param_1 < 9) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x10040a8f8 | FUN_10040a8f8 */

void FUN_10040a8f8(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 8) {
    uVar3 = 4;
  }
  if (param_3 + 8 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf7 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xf8) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10040a978;
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
LAB_10040a978:
      *param_1 = (char)param_2 + '\b';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xf8 >> 8) + 1;
    *param_1 = (char)(param_2 - 0xf8);
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



/* Address: 0x10040a9a8 | FUN_10040a9a8 */

undefined1  [16] FUN_10040a9a8(void)

{
  return ZEXT816(0x100ed2398);
}



/* Address: 0x10040a9b8 | FUN_10040a9b8 */

undefined1  [16] FUN_10040a9b8(void)

{
  return ZEXT816(0x100ed2428);
}



/* Address: 0x10040a9c8 | FUN_10040a9c8 */

void FUN_10040a9c8(void)

{
  return;
}



/* Address: 0x10040a9cc | FUN_10040a9cc */

undefined1  [16] FUN_10040a9cc(void)

{
  return ZEXT816(0x100ed24b8);
}



/* Address: 0x10040a9dc | FUN_10040a9dc */

undefined1  [16] FUN_10040a9dc(void)

{
  return ZEXT816(0x100ed2548);
}



/* Address: 0x10040a9ec | thunk_FUN_1000d2064 */

void thunk_FUN_1000d2064(void)

{
  FUN_1000d2064();
  return;
}



/* Address: 0x10040a9f0 | thunk_FUN_1000d20b4 */

void thunk_FUN_1000d20b4(void)

{
  FUN_1000d20b4();
  return;
}



/* Address: 0x10040a9f4 | FUN_10040a9f4 */

undefined1  [16] FUN_10040a9f4(void)

{
  return ZEXT816(0x100ed25d8);
}



/* Address: 0x10040aa04 | FUN_10040aa04 */

undefined1  [16] FUN_10040aa04(void)

{
  return ZEXT816(0x100ed2668);
}



/* Address: 0x10040aa14 | thunk_FUN_10040aa18 */

void thunk_FUN_10040aa18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b94,&DAT_100ed2668);
  DAT_100fc50a8 = pTVar1;
  return;
}



/* Address: 0x10040aa18 | FUN_10040aa18 */

void FUN_10040aa18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b94,&DAT_100ed2668);
  DAT_100fc50a8 = pTVar1;
  return;
}



/* Address: 0x10040aa58 | thunk_FUN_10040aa5c */

void thunk_FUN_10040aa5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c4c,&DAT_100ed25d8);
  DAT_100fc50b0 = pTVar1;
  return;
}



/* Address: 0x10040aa5c | FUN_10040aa5c */

void FUN_10040aa5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c4c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c4c,&DAT_100ed25d8);
  DAT_100fc50b0 = pTVar1;
  return;
}



/* Address: 0x10040aa9c | thunk_FUN_10040aaa0 */

void thunk_FUN_10040aaa0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d04,&DAT_100ed2548);
  DAT_100fc50b8 = pTVar1;
  return;
}



/* Address: 0x10040aaa0 | FUN_10040aaa0 */

void FUN_10040aaa0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d04,&DAT_100ed2548);
  DAT_100fc50b8 = pTVar1;
  return;
}



/* Address: 0x10040aae0 | thunk_FUN_10040aae4 */

void thunk_FUN_10040aae4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47dbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47dbc,&DAT_100ed24b8);
  DAT_100fc50c0 = pTVar1;
  return;
}



/* Address: 0x10040aae4 | FUN_10040aae4 */

void FUN_10040aae4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47dbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47dbc,&DAT_100ed24b8);
  DAT_100fc50c0 = pTVar1;
  return;
}



/* Address: 0x10040ab24 | thunk_FUN_10040ab28 */

void thunk_FUN_10040ab28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e74,&DAT_100ed2428);
  DAT_100fc50c8 = pTVar1;
  return;
}



/* Address: 0x10040ab28 | FUN_10040ab28 */

void FUN_10040ab28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e74,&DAT_100ed2428);
  DAT_100fc50c8 = pTVar1;
  return;
}



/* Address: 0x10040ab68 | thunk_FUN_10040ab6c */

void thunk_FUN_10040ab6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f2c,&DAT_100ed2398);
  DAT_100fc50d0 = pTVar1;
  return;
}



/* Address: 0x10040ab6c | FUN_10040ab6c */

void FUN_10040ab6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f2c,&DAT_100ed2398);
  DAT_100fc50d0 = pTVar1;
  return;
}



/* Address: 0x10040abac | thunk_FUN_10040abb0 */

void thunk_FUN_10040abb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48084;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48084,&DAT_100ed22c8);
  DAT_100fc50d8 = pTVar1;
  return;
}



/* Address: 0x10040abb0 | FUN_10040abb0 */

void FUN_10040abb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48084;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48084,&DAT_100ed22c8);
  DAT_100fc50d8 = pTVar1;
  return;
}



/* Address: 0x10040abf0 | thunk_FUN_10040abf4 */

void thunk_FUN_10040abf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47fcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47fcc,&DAT_100ed22e8);
  DAT_100fc50e0 = pTVar1;
  return;
}



/* Address: 0x10040abf4 | FUN_10040abf4 */

void FUN_10040abf4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47fcc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47fcc,&DAT_100ed22e8);
  DAT_100fc50e0 = pTVar1;
  return;
}



/* Address: 0x10040ac34 | thunk_FUN_10040ac38 */

void thunk_FUN_10040ac38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47fa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47fa4,&DAT_100ed22e8);
  DAT_100fc50e8 = pTVar1;
  return;
}



/* Address: 0x10040ac38 | FUN_10040ac38 */

void FUN_10040ac38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47fa4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47fa4,&DAT_100ed22e8);
  DAT_100fc50e8 = pTVar1;
  return;
}



/* Address: 0x10040ac78 | thunk_FUN_10040ac7c */

void thunk_FUN_10040ac7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f7c,&DAT_100ed2308);
  DAT_100fc50f0 = pTVar1;
  return;
}



/* Address: 0x10040ac7c | FUN_10040ac7c */

void FUN_10040ac7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f7c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f7c,&DAT_100ed2308);
  DAT_100fc50f0 = pTVar1;
  return;
}



/* Address: 0x10040acbc | thunk_FUN_10040acc0 */

void thunk_FUN_10040acc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f54,&DAT_100ed2308);
  DAT_100fc50f8 = pTVar1;
  return;
}



/* Address: 0x10040acc0 | FUN_10040acc0 */

void FUN_10040acc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc50f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47f54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47f54,&DAT_100ed2308);
  DAT_100fc50f8 = pTVar1;
  return;
}



/* Address: 0x10040ad00 | thunk_FUN_10040ad04 */

void thunk_FUN_10040ad04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4801c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4801c,&DAT_100ed22c8);
  DAT_100fc5100 = pTVar1;
  return;
}



/* Address: 0x10040ad04 | FUN_10040ad04 */

void FUN_10040ad04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4801c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4801c,&DAT_100ed22c8);
  DAT_100fc5100 = pTVar1;
  return;
}



/* Address: 0x10040ad44 | thunk_FUN_10040ad48 */

void thunk_FUN_10040ad48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47ff4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47ff4,&DAT_100ed22c8);
  DAT_100fc5108 = pTVar1;
  return;
}



/* Address: 0x10040ad48 | FUN_10040ad48 */

void FUN_10040ad48(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5108 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47ff4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47ff4,&DAT_100ed22c8);
  DAT_100fc5108 = pTVar1;
  return;
}



/* Address: 0x10040ad88 | thunk_FUN_10040ad8c */

void thunk_FUN_10040ad8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47ec4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47ec4,&DAT_100ed2398);
  DAT_100fc5110 = pTVar1;
  return;
}



/* Address: 0x10040ad8c | FUN_10040ad8c */

void FUN_10040ad8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47ec4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47ec4,&DAT_100ed2398);
  DAT_100fc5110 = pTVar1;
  return;
}



/* Address: 0x10040adcc | thunk_FUN_10040add0 */

void thunk_FUN_10040add0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e9c,&DAT_100ed2398);
  DAT_100fc5118 = pTVar1;
  return;
}



/* Address: 0x10040add0 | FUN_10040add0 */

void FUN_10040add0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5118 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e9c,&DAT_100ed2398);
  DAT_100fc5118 = pTVar1;
  return;
}



/* Address: 0x10040ae10 | thunk_FUN_10040ae14 */

void thunk_FUN_10040ae14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d54,&DAT_100ed24b8);
  DAT_100fc5120 = pTVar1;
  return;
}



/* Address: 0x10040ae14 | FUN_10040ae14 */

void FUN_10040ae14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5120 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d54;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d54,&DAT_100ed24b8);
  DAT_100fc5120 = pTVar1;
  return;
}



/* Address: 0x10040ae54 | thunk_FUN_10040ae58 */

void thunk_FUN_10040ae58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d2c,&DAT_100ed24b8);
  DAT_100fc5128 = pTVar1;
  return;
}



/* Address: 0x10040ae58 | FUN_10040ae58 */

void FUN_10040ae58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5128 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47d2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47d2c,&DAT_100ed24b8);
  DAT_100fc5128 = pTVar1;
  return;
}



/* Address: 0x10040ae98 | thunk_FUN_10040ae9c */

void thunk_FUN_10040ae9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c9c,&DAT_100ed2548);
  DAT_100fc5130 = pTVar1;
  return;
}



/* Address: 0x10040ae9c | FUN_10040ae9c */

void FUN_10040ae9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5130 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c9c,&DAT_100ed2548);
  DAT_100fc5130 = pTVar1;
  return;
}



/* Address: 0x10040aedc | thunk_FUN_10040aee0 */

void thunk_FUN_10040aee0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c74,&DAT_100ed2548);
  DAT_100fc5138 = pTVar1;
  return;
}



/* Address: 0x10040aee0 | FUN_10040aee0 */

void FUN_10040aee0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5138 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47c74;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47c74,&DAT_100ed2548);
  DAT_100fc5138 = pTVar1;
  return;
}



/* Address: 0x10040af20 | thunk_FUN_10040af24 */

void thunk_FUN_10040af24(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e0c,&DAT_100ed2428);
  DAT_100fc5140 = pTVar1;
  return;
}



/* Address: 0x10040af24 | FUN_10040af24 */

void FUN_10040af24(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5140 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47e0c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47e0c,&DAT_100ed2428);
  DAT_100fc5140 = pTVar1;
  return;
}



/* Address: 0x10040af64 | thunk_FUN_10040af68 */

void thunk_FUN_10040af68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47de4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47de4,&DAT_100ed2428);
  DAT_100fc5148 = pTVar1;
  return;
}



/* Address: 0x10040af68 | FUN_10040af68 */

void FUN_10040af68(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5148 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47de4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47de4,&DAT_100ed2428);
  DAT_100fc5148 = pTVar1;
  return;
}



/* Address: 0x10040afa8 | thunk_FUN_10040afac */

void thunk_FUN_10040afac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b2c,&DAT_100ed2668);
  DAT_100fc5150 = pTVar1;
  return;
}



/* Address: 0x10040afac | FUN_10040afac */

void FUN_10040afac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5150 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b2c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b2c,&DAT_100ed2668);
  DAT_100fc5150 = pTVar1;
  return;
}



/* Address: 0x10040afec | thunk_FUN_10040aff0 */

void thunk_FUN_10040aff0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc5158 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c47b04;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c47b04,&DAT_100ed2668);
  DAT_100fc5158 = pTVar1;
  return;
}


