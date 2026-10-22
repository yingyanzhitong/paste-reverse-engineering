/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008db320 | FUN_1008db320 */

undefined8 FUN_1008db320(void)

{
  long *unaff_x20;
  
  return *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70));
}



/* Address: 0x1008db330 | FUN_1008db330 */

void FUN_1008db330(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200)) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008db348);
  (*pcVar1)();
}



/* Address: 0x1008db348 | FUN_1008db348 */

void FUN_1008db348(void)

{
  FUN_1008db36c();
  return;
}



/* Address: 0x1008db350 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1008db354 | FUN_1008db354 */

void FUN_1008db354(void)

{
  long unaff_x20;
  
  FUN_10064c120(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008db360 | FUN_1008db360 */

void FUN_1008db360(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008db36c | FUN_1008db36c */

void FUN_1008db36c(long *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1008d732c(0,*(undefined8 *)(*param_1 + 0x50),*(undefined8 *)(*param_1 + 0x58));
  FUN_10061cf14(2,0,uVar1,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008db3b0 | FUN_1008db3b0 */

void FUN_1008db3b0(void)

{
  FUN_1008db144();
  return;
}



/* Address: 0x1008db3b8 | FUN_1008db3b8 */

void FUN_1008db3b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008db3c4 | FUN_1008db3c4 */

void FUN_1008db3c4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),lVar4,0x100cb819c,
             &TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar4);
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar6 + lVar2 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar1)
  ;
  _swift_deallocObject();
  return;
}



/* Address: 0x1008db488 | FUN_1008db488 */

void FUN_1008db488(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,lVar4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  (**(code **)(**(long **)(unaff_x20 + 0x30) + 0x2c0))
            (unaff_x20 + uVar6,unaff_x20 + (uVar6 + lVar2 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),
             lVar4,uVar5);
  return;
}



/* Address: 0x1008db52c | FUN_1008db52c */

undefined8 FUN_1008db52c(undefined8 param_1)

{
  FUN_100662374();
  return param_1;
}



/* Address: 0x1008db560 | FUN_1008db560 */

void FUN_1008db560(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008db584 | FUN_1008db584 */

void FUN_1008db584(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *param_1;
  _swift_retain(uVar2);
  FUN_10062cce4(uVar1,uVar2);
  _swift_release(uVar2);
  return;
}



/* Address: 0x1008db5bc | FUN_1008db5bc */

void FUN_1008db5bc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008d9538(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008db5c4 | FUN_1008db5c4 */

void FUN_1008db5c4(void)

{
  FUN_1008d963c();
  return;
}



/* Address: 0x1008db5cc | FUN_1008db5cc */

void FUN_1008db5cc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008db630 | FUN_1008db630 */

void FUN_1008db630(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(**(long **)(unaff_x20 + 0x30) + 0x2d0))
            (unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),*(long *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008db674 | FUN_1008db674 */

void FUN_1008db674(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1008db688();
    return;
  }
  return;
}



/* Address: 0x1008db688 | FUN_1008db688 */

void FUN_1008db688(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    _swift_retain();
    return;
  }
  return;
}



/* Address: 0x1008db69c | FUN_1008db69c */

void FUN_1008db69c(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1008db6b0();
    return;
  }
  return;
}



/* Address: 0x1008db6b0 | FUN_1008db6b0 */

void FUN_1008db6b0(undefined8 param_1,byte param_2)

{
  if (param_2 < 2) {
    _swift_release();
    return;
  }
  return;
}



/* Address: 0x1008db6c4 | FUN_1008db6c4 */

void FUN_1008db6c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febe78 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100febe78 = pTVar1;
  return;
}



/* Address: 0x1008db704 | FUN_1008db704 */

void FUN_1008db704(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xd0));
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  FUN_1005d84e8();
  FUN_1005d84e8(uVar2);
  return;
}



/* Address: 0x1008db744 | FUN_1008db744 */

undefined1  [16] FUN_1008db744(void)

{
  return ZEXT816(0x100f0fb38);
}



/* Address: 0x1008db754 | thunk_FUN_1008db758 */

void thunk_FUN_1008db758(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febf00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83748;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83748,&DAT_100f0fb38);
  DAT_100febf00 = pTVar1;
  return;
}



/* Address: 0x1008db758 | FUN_1008db758 */

void FUN_1008db758(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febf00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c83748;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c83748,&DAT_100f0fb38);
  DAT_100febf00 = pTVar1;
  return;
}



/* Address: 0x1008db798 | thunk_FUN_1008d678c */

void thunk_FUN_1008d678c(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008db79c | thunk_FUN_1008d69d4 */

void thunk_FUN_1008d69d4(long param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    FUN_10090d0b8(0,0,param_1);
  }
  FUN_10062cc10(param_2);
  return;
}



/* Address: 0x1008db7a0 | thunk_FUN_1008d6974 */

void thunk_FUN_1008d6974(void)

{
  FUN_1008d6974();
  return;
}



/* Address: 0x1008db7a4 | thunk_FUN_1008d6948 */

void thunk_FUN_1008d6948(void)

{
  FUN_1008d6948();
  return;
}



/* Address: 0x1008db7a8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7ac | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7b0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7b4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008db7b8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008db7bc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1008db7c0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7c4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7c8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7cc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7d0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7d4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7d8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7dc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7e0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7e4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7e8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7ec | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7f0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7f4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1008db7f8 | thunk_FUN_1008db354 */

void thunk_FUN_1008db354(void)

{
  long unaff_x20;
  
  FUN_10064c120(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008db7fc | thunk_FUN_1008db360 */

void thunk_FUN_1008db360(void)

{
  long unaff_x20;
  
  thunk_FUN_10064bebc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008db800 | FUN_1008db800 */

void FUN_1008db800(long param_1)

{
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_38 = &DAT_100c837a8;
  puStack_30 = &DAT_100c837c0;
  local_28 = &DAT_100c837c0;
  puStack_20 = &DAT_100c837c0;
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0,5,&local_38,param_1 + 0x388);
  return;
}



/* Address: 0x1008db85c | FUN_1008db85c */

void FUN_1008db85c(void)

{
  undefined8 *puVar1;
  long *unaff_x20;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x388));
  FUN_100622430(*puVar1,puVar1[1],puVar1[2]);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8)));
  return;
}



/* Address: 0x1008db890 | FUN_1008db890 */

long * FUN_1008db890(long *param_1)

{
  undefined8 *puVar1;
  
  FUN_1008d7204();
  puVar1 = (undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x388));
  FUN_100622430(*puVar1,puVar1[1],puVar1[2]);
  _swift_release(*(undefined8 *)((long)param_1 + *(long *)(*param_1 + 0x3a8)));
  return param_1;
}



/* Address: 0x1008db8dc | FUN_1008db8dc */

void FUN_1008db8dc(void)

{
  FUN_1008db890();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008db8fc | FUN_1008db8fc */

void FUN_1008db8fc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008db908 | FUN_1008db908 */

void FUN_1008db908(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined1 local_70;
  undefined7 uStack_6f;
  undefined8 uStack_68;
  
  uVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  lVar9 = *(long *)(uVar3 - 8);
  lVar7 = (long)&local_80 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_3 + -8);
  lVar6 = lVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar4 = uVar3;
  FUN_1008db22c();
  FUN_1008db22c();
  FUN_1008d6e34();
  if ((uVar4 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar1 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar1);
  }
  else {
    lVar5 = lVar6;
    local_80 = param_1;
    (**(code **)(lVar8 + 0x10))(lVar6,param_1,param_3);
    iVar2 = (int)lVar5;
    _swift_dynamicCast();
    if (iVar2 == 0) {
      _swift_dynamicCast();
      if (iVar2 == 0) {
        _swift_dynamicCast();
        if (iVar2 == 0) {
          FUN_1008d7a78(local_80,param_2,param_3,param_4);
        }
        else {
          lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
          (**(code **)(lVar9 + 0x10))(lVar7,param_2,uVar3);
          _swift_dynamicCast(&local_70,lVar7,uVar3,&DAT_100eecab0,7);
          *(undefined8 *)(lVar5 + 0x50) = uStack_68;
          *(ulong *)(lVar5 + 0x48) = CONCAT71(uStack_6f,local_70);
        }
      }
      else {
        lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
        (**(code **)(lVar9 + 0x10))(lVar7,param_2,uVar3);
        _swift_dynamicCast(&local_70,lVar7,uVar3,PTR___type_metadata_for_Swift_UInt_100eacb00,7);
        *(ulong *)(lVar5 + 0x68) = CONCAT71(uStack_6f,local_70);
      }
    }
    else {
      (**(code **)(lVar9 + 0x10))(lVar7,param_2,uVar3);
      _swift_dynamicCast(&local_70,lVar7,uVar3,PTR___type_metadata_for_Swift_Bool_100eac570,7);
      *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x390)) = local_70;
    }
    (**(code **)(lVar8 + 8))(lVar6,param_3);
  }
  return;
}



/* Address: 0x1008dbb80 | FUN_1008dbb80 */

void FUN_1008dbb80(void)

{
  FUN_1008db22c();
  FUN_1008d6e34();
  return;
}



/* Address: 0x1008dbb94 | FUN_1008dbb94 */

void FUN_1008dbb94(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_58;
  
  lVar8 = *(long *)(param_3 + -8);
  lVar7 = (long)&local_70 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = param_2;
  FUN_1008db22c();
  FUN_1008db22c();
  FUN_1008d6e34();
  if ((uVar2 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    uVar3 = DAT_101058180;
    _swift_willThrow();
    _swift_errorRetain(uVar3);
    return;
  }
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x10))(lVar7,param_2,param_3);
  iVar1 = (int)lVar6;
  _swift_dynamicCast();
  if (iVar1 == 0) {
    _swift_dynamicCast();
    if (iVar1 != 0) {
      local_70 = *(undefined8 *)(*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8)) + 0x68);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar5 = PTR___type_metadata_for_Swift_UInt_100eacb00;
      goto LAB_1008dbd48;
    }
    _swift_dynamicCast();
    if (iVar1 != 0) {
      lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
      uStack_68 = *(undefined8 *)(lVar6 + 0x50);
      local_70 = *(undefined8 *)(lVar6 + 0x48);
      uVar3 = 0;
      _swift_getAssociatedTypeWitness
                (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
      puVar5 = &DAT_100eecab0;
      goto LAB_1008dbd48;
    }
    _swift_dynamicCast();
    if (iVar1 == 0) {
      FUN_1008d81dc(param_1,param_2,param_3,param_4);
      goto LAB_1008dbd58;
    }
    lVar6 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8));
    _swift_beginAccess(lVar6 + 0x10,&local_70,0,0);
    local_58 = *(undefined8 *)(lVar6 + 0x38);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    puVar4 = &local_58;
    puVar5 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  }
  else {
    local_70 = CONCAT71(local_70._1_7_,
                        *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x390)));
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_4,param_3,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
    puVar5 = PTR___type_metadata_for_Swift_Bool_100eac570;
LAB_1008dbd48:
    puVar4 = &local_70;
  }
  _swift_dynamicCast(param_1,puVar4,puVar5,uVar3,7);
LAB_1008dbd58:
  (**(code **)(lVar8 + 8))(lVar7,param_3);
  return;
}



/* Address: 0x1008dbe38 | FUN_1008dbe38 */

void FUN_1008dbe38(char param_1)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  
  lVar1 = *unaff_x20;
  if (param_1 == '\0') {
    (**(code **)(*(long *)(lVar1 + 0x380) + 0x60))(1,*(undefined8 *)(lVar1 + 0x378));
    if (unaff_x21 == 0) {
      *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a0)) = 1;
    }
  }
  else if ((param_1 == '\x01') &&
          ((**(code **)(*(long *)(lVar1 + 0x380) + 0x60))(0,*(undefined8 *)(lVar1 + 0x378)),
          unaff_x21 == 0)) {
    *(undefined1 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x398)) = 1;
  }
  return;
}



/* Address: 0x1008dbed4 | FUN_1008dbed4 */

byte FUN_1008dbed4(byte *param_1)

{
  long *unaff_x20;
  
  (**(code **)(**(long **)(*(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x3a8)) + 0x58) + 0x88
              ))();
  return *param_1 & 1;
}



/* Address: 0x1008dbf10 | FUN_1008dbf10 */

void FUN_1008dbf10(ulong param_1,long **param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  long *plVar9;
  long lVar10;
  long **pplVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *unaff_x20;
  long unaff_x21;
  int iVar16;
  ulong uVar17;
  long *local_d8;
  ulong local_d0;
  int local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  long local_c0;
  char local_b8;
  undefined1 local_97;
  undefined1 auStack_90 [24];
  long local_78;
  char local_70;
  
  FUN_1008db22c();
  lVar12 = *unaff_x20;
  lVar14 = *(long *)((long)unaff_x20 + *(long *)(lVar12 + 0xb0));
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008dc228);
    (*pcVar7)();
  }
  lVar15 = *(long *)(lVar12 + 0x398);
  lVar1 = (long)unaff_x20 + *(long *)(lVar12 + 0xa8);
  lVar13 = *(long *)(lVar12 + 0x98);
  lVar12 = 1;
  while( true ) {
    FUN_1008db22c();
    FUN_1008d6e34();
    if (((param_1 & 1) == 0) || ((*(byte *)((long)unaff_x20 + lVar15) & 1) != 0)) {
      if (DAT_100fec5b8 != -1) {
        _swift_once(&DAT_100fec5b8,FUN_100901f8c);
      }
      uVar2 = DAT_1010581c8;
      _swift_willThrow();
      _swift_errorRetain(uVar2);
      return;
    }
    thunk_FUN_1008d6b4c();
    _swift_beginAccess(lVar1,auStack_90,0x21,0);
    FUN_1008dcf48(&local_d8,FUN_1008dda34,unaff_x20);
    if (unaff_x21 != 0) {
      _swift_endAccess(auStack_90);
      return;
    }
    if (local_d8 == (long *)0x0) {
      plVar9 = &local_78;
      FUN_1008dd338();
      lVar10 = local_78;
      uVar17 = param_1;
      cVar4 = local_70;
    }
    else {
      param_2 = (long **)(ulong)CONCAT16(local_c2,CONCAT24(local_c4,local_c8));
      lVar10 = local_c0;
      plVar9 = local_d8;
      uVar17 = local_d0;
      cVar4 = local_b8;
    }
    _swift_endAccess(auStack_90);
    if (cVar4 != '\x01') break;
    if (lVar10 < 1) {
      if (*(char *)((long)unaff_x20 + lVar15) != '\x01') {
        if (DAT_100fec5b8 != -1) {
          _swift_once(&DAT_100fec5b8,FUN_100901f8c);
        }
        uVar2 = DAT_1010581c8;
        _swift_willThrow();
        _swift_errorRetain(uVar2);
        _swift_release(plVar9);
        return;
      }
      *(undefined1 *)((long)unaff_x20 + lVar13) = 0;
      FUN_1008d8e08();
      break;
    }
    _swift_beginAccess(lVar1,&local_d8,0x21);
    uVar2 = *(undefined8 *)(lVar1 + 0x48);
    lVar3 = *(long *)(lVar1 + 0x50);
    FUN_10007d048(lVar1 + 0x30,uVar2);
    (**(code **)(lVar3 + 0x20))(lVar10,uVar2);
    *(byte *)(lVar1 + 0x58) = (byte)lVar10 & 1;
    pplVar11 = &local_d8;
    _swift_endAccess();
    *(undefined1 *)((long)unaff_x20 + lVar13) = 0;
    FUN_1008db330();
    uVar5 = (ulong)param_2 >> 0x30;
    local_c2 = (undefined1)((ulong)param_2 >> 0x30);
    uVar6 = (ulong)param_2 >> 0x20;
    local_c4 = (undefined2)((ulong)param_2 >> 0x20);
    iVar16 = (int)param_2;
    local_97 = 0;
    local_d8 = plVar9;
    local_d0 = uVar17;
    local_c8 = iVar16;
    _swift_retain();
    _swift_retain(plVar9);
    param_2 = pplVar11;
    FUN_10062cc34(&local_d8);
    _swift_release(pplVar11);
    FUN_1005e70f4(&local_d8);
    _swift_release(plVar9);
    param_1 = 1;
    if (iVar16 + ((uint)uVar6 & 0xffff) * -0x100 != (int)(uVar17 >> 0x20) + ((ushort)uVar5 & 0xff))
    {
      return;
    }
    if (lVar14 == lVar12) {
      return;
    }
    bVar8 = lVar12 == -1;
    lVar12 = lVar12 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008dc168);
      (*pcVar7)();
    }
  }
  _swift_release(plVar9);
  return;
}


