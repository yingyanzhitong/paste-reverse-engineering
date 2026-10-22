/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100728f14 | FUN_100728f14 */

uint FUN_100728f14(uint *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 uVar12;
  ulong uVar13;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar4 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar13 = *(ulong *)(*(long *)(lVar7 + -8) + 0x40);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar2,uVar1,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar12,uVar8,puVar5,puVar4);
  uVar10 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar10 = (uVar13 + uVar10 & (uVar10 ^ 0xffffffffffffffff)) +
           *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar10 <= uVar13) {
    uVar10 = uVar13;
  }
  bVar3 = *(byte *)((long)param_1 + uVar10);
  uVar6 = (uint)bVar3;
  if (1 < bVar3) {
    uVar9 = (uint)uVar10;
    uVar11 = 4;
    if (uVar9 < 4) {
      uVar11 = uVar9;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) {
        return uVar6;
      }
      uVar11 = (uint)(byte)*param_1;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*param_1;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*param_1;
    }
    else {
      uVar11 = *param_1;
    }
    uVar6 = uVar11 | bVar3 - 2 << (ulong)((uVar9 & 3) << 3);
    if (3 < uVar9) {
      uVar6 = uVar11;
    }
    uVar6 = uVar6 + 2;
  }
  return uVar6;
}



/* Address: 0x10072904c | FUN_10072904c */

void FUN_10072904c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined8 uVar11;
  ulong uVar12;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  puVar5 = PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  uVar12 = *(ulong *)(*(long *)(lVar7 + -8) + 0x40);
  uVar11 = *(undefined8 *)(param_3 + 0x20);
  uVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness(0,uVar11,uVar8,puVar6,puVar5);
  uVar9 = (ulong)*(byte *)(*(long *)(lVar7 + -8) + 0x50);
  uVar9 = (uVar12 + uVar9 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(*(long *)(lVar7 + -8) + 0x40);
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  if (param_2 < 2) {
    *(char *)((long)param_1 + uVar9) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar10 = (uint)uVar9;
    if (uVar10 < 4) {
      *(char *)((long)param_1 + uVar9) = (char)(param_2 >> (ulong)(uVar10 << 3 & 0x1f)) + '\x02';
      if (uVar10 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,uVar9);
        uVar4 = (undefined2)uVar1;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + uVar9) = 2;
      _bzero(param_1,uVar9);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1007291a4 | thunk_FUN_100728ce0 */

void thunk_FUN_100728ce0(void)

{
  thunk_FUN_100728ce0();
  return;
}



/* Address: 0x1007291a8 | thunk_FUN_100728084 */

void thunk_FUN_100728084(void)

{
  thunk_FUN_100728084();
  return;
}



/* Address: 0x1007291ac | thunk_FUN_100727e64 */

void thunk_FUN_100727e64(void)

{
  thunk_FUN_100727e64();
  return;
}



/* Address: 0x1007291b0 | thunk_FUN_10072822c */

void thunk_FUN_10072822c(void)

{
  thunk_FUN_10072822c();
  return;
}



/* Address: 0x1007291b4 | thunk_FUN_10072840c */

void thunk_FUN_10072840c(void)

{
  thunk_FUN_10072840c();
  return;
}



/* Address: 0x1007291b8 | thunk_FUN_1007286ac */

void thunk_FUN_1007286ac(void)

{
  thunk_FUN_1007286ac();
  return;
}



/* Address: 0x1007291bc | thunk_FUN_10072888c */

void thunk_FUN_10072888c(void)

{
  thunk_FUN_10072888c();
  return;
}



/* Address: 0x1007291c0 | thunk_FUN_100728b2c */

void thunk_FUN_100728b2c(void)

{
  thunk_FUN_100728b2c();
  return;
}



/* Address: 0x1007291c4 | FUN_1007291c4 */

void FUN_1007291c4(void)

{
  FUN_100729300();
  return;
}



/* Address: 0x1007291d8 | FUN_1007291d8 */

void FUN_1007291d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x22;
  
  (*param_3)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000100729214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100729218 | FUN_100729218 */

void FUN_100729218(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x10072923c | FUN_10072923c */

void FUN_10072923c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  thunk_FUN_1007291d8(plVar7,param_1,param_2,uVar3,uVar6,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x1007292ec | FUN_1007292ec */

void FUN_1007292ec(void)

{
  FUN_100729300();
  return;
}



/* Address: 0x100729300 | FUN_100729300 */

void FUN_100729300(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_88 = param_9;
  (**(code **)(lVar3 + 0x10))(auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  _swift_allocObject(param_8,0x40,7);
  *(long *)(param_8 + 0x10) = param_4;
  *(undefined8 *)(param_8 + 0x18) = param_5;
  *(undefined8 *)(param_8 + 0x20) = param_6;
  *(undefined8 *)(param_8 + 0x28) = param_7;
  *(undefined8 *)(param_8 + 0x30) = param_2;
  *(undefined8 *)(param_8 + 0x38) = param_3;
  (**(code **)(lVar3 + 0x20))(param_1,auStack_90 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_7;
  FUN_1007294a8(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = local_88;
  puVar1[1] = param_8;
  _swift_retain(param_3);
  return;
}



/* Address: 0x1007293f4 | FUN_1007293f4 */

void FUN_1007293f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)thunk_FUN_1005c804c;
  thunk_FUN_1007291d8(plVar7,param_1,param_2,uVar3,uVar6,uVar1,uVar4,uVar2,uVar5);
  return;
}



/* Address: 0x1007294a4 | thunk_FUN_1007294b4 */

void thunk_FUN_1007294b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  uVar1 = 0xff;
  FUN_1007294a8(0xff,&uStack_30);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,uVar1);
  return;
}



/* Address: 0x1007294a8 | FUN_1007294a8 */

void FUN_1007294a8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbda5c);
  return;
}



/* Address: 0x1007294b4 | FUN_1007294b4 */

void FUN_1007294b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_1[1];
  local_30 = *param_1;
  uStack_18 = param_1[3];
  uStack_20 = param_1[2];
  uVar1 = 0xff;
  FUN_1007294a8(0xff,&local_30);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75018,uVar1);
  return;
}



/* Address: 0x1007294f0 | FUN_1007294f0 */

void FUN_1007294f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[2],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  _swift_getFunctionTypeMetadata1(0x64000001,uVar2,uVar1);
  return;
}



/* Address: 0x100729538 | FUN_100729538 */

void FUN_100729538(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c75070,param_1);
  return;
}



/* Address: 0x100729548 | FUN_100729548 */

void FUN_100729548(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))(param_1,param_2,lVar2);
  lVar2 = 0;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_7;
  uStack_58 = param_8;
  FUN_100729e6c(0,&local_70);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x1007295f8 | FUN_1007295f8 */

void FUN_1007295f8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  lVar3 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100729698;
  FUN_100729758(plVar2,param_1,0,0,param_2,uVar1);
  return;
}



/* Address: 0x100729698 | FUN_100729698 */

void FUN_100729698(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x30));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_100729708,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x000100729704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100729708 | FUN_100729708 */

void FUN_100729708(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  (**(code **)(*(long *)(unaff_x22 + 0x20) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar1,*(undefined8 *)(unaff_x22 + 0x18));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100729754. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100729758 | FUN_100729758 */

void FUN_100729758(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(long *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x38) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  uVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar7,uVar8,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar8,uVar5,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaebb0 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1007298a4;
  Swift::AsyncIteratorProtocol::_next();
  return;
}



/* Address: 0x1007298a4 | FUN_1007298a4 */

void FUN_1007298a4(void)

{
  UnownedSerialExecutor UVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  
  lVar5 = *unaff_x22;
  lVar4 = *(long *)(lVar5 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x60));
  if (unaff_x20 == 0) {
    if (lVar4 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      _swift_getObjectType(*(undefined8 *)(lVar5 + 0x10));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    pcVar2 = FUN_10072996c;
  }
  else {
    if (lVar4 == 0) {
      UVar1.unknown = (undefined *)0x0;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined8 *)(lVar5 + 0x18);
      _swift_getObjectType(*(undefined8 *)(lVar5 + 0x10));
      UVar1 = Swift::Actor::get_unownedExecutor();
    }
    *(undefined **)(lVar5 + 0x68) = UVar1.unknown;
    *(undefined8 *)(lVar5 + 0x70) = uVar3;
    pcVar2 = FUN_1007299bc;
  }
  _swift_task_switch(pcVar2,UVar1.unknown,uVar3);
  return;
}



/* Address: 0x10072996c | FUN_10072996c */

void FUN_10072996c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007299b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007299bc | FUN_1007299bc */

void FUN_1007299bc(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  int *piVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar3 = *(long *)(unaff_x22 + 0x20);
  lVar7 = *(long *)(unaff_x22 + 0x28);
  (**(code **)(lVar2 + 0x20))(uVar5,*(undefined8 *)(unaff_x22 + 0x50),uVar9);
  (**(code **)(lVar2 + 0x10))(uVar6,uVar5,uVar9);
  piVar4 = *(int **)(lVar7 + *(int *)(lVar3 + 0x34));
  iVar1 = *piVar4;
  plVar8 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_100729a74;
                    /* WARNING: Could not recover jumptable at 0x000100729a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar8,*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x100729a74 | FUN_100729a74 */

void FUN_100729a74(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x78));
  _swift_task_switch(FUN_100729ac0,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Address: 0x100729ac0 | FUN_100729ac0 */

void FUN_100729ac0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  code *pcVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  FUN_1005c64f0(*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x18),
                *(undefined8 *)(*(long *)(unaff_x22 + 0x20) + 0x28));
  pcVar6 = *(code **)(lVar2 + 8);
  (*pcVar6)(uVar4,uVar5);
  (*pcVar6)(uVar3,uVar5);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000100729b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100729b54 | FUN_100729b54 */

void FUN_100729b54(undefined8 param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = param_2;
  lVar3 = *(long *)(param_2 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100729bec;
  FUN_1007295f8(plVar2,param_1,param_2,uVar1);
  return;
}



/* Address: 0x100729bec | FUN_100729bec */

void FUN_100729bec(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long *unaff_x22;
  long lVar6;
  
  lVar5 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x30));
  if (unaff_x20 == 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x28));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
  else {
    lVar1 = *(long *)(lVar5 + 0x20);
    uVar2 = *(undefined8 *)(lVar5 + 0x28);
    uVar3 = *(undefined8 *)(lVar5 + 0x18);
    uVar4 = *(undefined8 *)(*(long *)(lVar5 + 0x10) + 0x28);
    _swift_allocError(uVar3,uVar4,0,0);
    (**(code **)(lVar1 + 0x20))(uVar4,uVar2,uVar3);
    _swift_task_dealloc(uVar2);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar6 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100729c88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100729c8c | FUN_100729c8c */

void FUN_100729c8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar3 = *(long *)(param_5 + 0x18);
  *(long *)(unaff_x22 + 0x18) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar1;
  plVar2 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100708dfc;
  FUN_100729758(plVar2,param_1,param_2,param_3,param_5,uVar1);
  return;
}



/* Address: 0x100729d3c | FUN_100729d3c */

void FUN_100729d3c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar5 = *(long *)(param_2 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  lVar4 = *(long *)(lVar7 + 0x40);
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar6,lVar5,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar7 + 0x10))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::AsyncSequence::_makeAsyncIterator();
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x34));
  uVar2 = puVar1[1];
  FUN_100729548(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),*puVar1,uVar2,lVar5,
                *(undefined8 *)(param_2 + 0x18),uVar6,*(undefined8 *)(param_2 + 0x28));
  _swift_retain(uVar2);
  return;
}



/* Address: 0x100729e34 | FUN_100729e34 */

void FUN_100729e34(long param_1)

{
  FUN_100729d3c();
                    /* WARNING: Could not recover jumptable at 0x000100729e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100729e64 | FUN_100729e64 */

undefined8 FUN_100729e64(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x28);
}



/* Address: 0x100729e6c | FUN_100729e6c */

void FUN_100729e6c(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cbdaa4);
  return;
}



/* Address: 0x100729e78 | FUN_100729e78 */

void FUN_100729e78(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x30);
  }
  return;
}



/* Address: 0x100729f04 | FUN_100729f04 */

long * FUN_100729f04(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar3 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar3 + 0x40);
  if ((*(uint *)(lVar3 + 0x50) & 0x1000f8) == 0 && (lVar6 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar3 + 0x10))(param_1,param_2,lVar2);
    puVar4 = (undefined8 *)((long)param_1 + lVar6 + 7 & 0xfffffffffffffff8);
    puVar5 = (undefined8 *)((long)param_2 + lVar6 + 7 & 0xfffffffffffffff8);
    lVar2 = puVar5[1];
    uVar7 = *puVar5;
    puVar4[1] = puVar5[1];
    *puVar4 = uVar7;
  }
  else {
    uVar1 = *(uint *)(lVar3 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
  }
  _swift_retain(lVar2);
  return param_1;
}



/* Address: 0x100729fd8 | FUN_100729fd8 */

void FUN_100729fd8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_2 + 0x20),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar2 = *(long *)(lVar1 + -8);
  (**(code **)(lVar2 + 8))(param_1,lVar1);
  _swift_release(*(undefined8 *)((param_1 + *(long *)(lVar2 + 0x40) + 7U & 0xfffffffffffffff8) + 8))
  ;
  return;
}



/* Address: 0x10072a040 | FUN_10072a040 */

long FUN_10072a040(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x10))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar2 = puVar3[1];
  uVar6 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar6;
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10072a0cc | FUN_10072a0cc */

long FUN_10072a0cc(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar6 = *(long *)(lVar1 + -8);
  (**(code **)(lVar6 + 0x18))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar6 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar5 = puVar4[1];
  uVar2 = puVar3[1];
  uVar7 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar7;
  _swift_retain(uVar2);
  _swift_release(uVar5);
  return param_1;
}



/* Address: 0x10072a164 | FUN_10072a164 */

long FUN_10072a164(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x20))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar5 = *puVar2;
  puVar3[1] = puVar2[1];
  *puVar3 = uVar5;
  return param_1;
}



/* Address: 0x10072a1e8 | FUN_10072a1e8 */

long FUN_10072a1e8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar5 = *(long *)(lVar1 + -8);
  (**(code **)(lVar5 + 0x28))(param_1,param_2,lVar1);
  lVar1 = *(long *)(lVar5 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar1 + param_1 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(lVar1 + param_2 & 0xfffffffffffffff8);
  uVar2 = puVar4[1];
  uVar6 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar6;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10072a274 | FUN_10072a274 */

int * FUN_10072a274(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar8 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar1 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar1 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (int *)0x0;
  }
  if (uVar1 <= param_2 && param_2 - uVar1 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar9 = 2;
    uVar3 = uVar9;
    if ((uVar7 & 0xfffffff8) == 0) {
      uVar3 = (param_2 - uVar1) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar2 = 0;
    if (1 < uVar3) {
      uVar2 = uVar9;
    }
    if (uVar2 < 2) {
      if ((uVar2 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10072a334;
    }
    else if (uVar2 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10072a334:
        iVar5 = uVar9 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return (int *)(ulong)(uVar1 + iVar5 + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_10072a334;
    }
  }
  if (uVar4 < 0x7fffffff) {
    uVar7 = *(ulong *)((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    return (int *)(ulong)((int)uVar7 + 1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010072a370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 0x30))(param_1,uVar4,lVar6);
  return param_1;
}



/* Address: 0x10072a3b4 | FUN_10072a3b4 */

void FUN_10072a3b4(int *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x20),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  lVar7 = *(long *)(lVar6 + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar11 = uVar10;
  if ((int)sVar1 == 0) {
    uVar11 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar11) {
    uVar10 = 4;
  }
  if (uVar11 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar11) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  uVar11 = (uint)param_2;
  iVar5 = uVar11 - uVar2;
  if (uVar11 < uVar2 || iVar5 == 0) {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (uVar11 != 0) {
      if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x00010072a4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar7 + 0x38))(param_1,param_2,uVar4,lVar6);
        return;
      }
      puVar8 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)uVar11 < 0) {
        *puVar8 = (ulong)(uVar11 & 0x7fffffff);
        puVar8[1] = 0;
      }
      else {
        *puVar8 = (ulong)(uVar11 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar5 = 1;
      _bzero(param_1,sVar1);
      *param_1 = uVar11 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar5;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar5;
    }
  }
  return;
}



/* Address: 0x10072a540 | thunk_FUN_100729218 */

void thunk_FUN_100729218(void)

{
  FUN_100729218();
  return;
}



/* Address: 0x10072a544 | thunk_FUN_1007291d8 */

void thunk_FUN_1007291d8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long unaff_x22;
  
  (*param_3)(param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x000100729214. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10072a548 | thunk_FUN_1007294b4 */

void thunk_FUN_1007294b4(void)

{
  thunk_FUN_1007294b4();
  return;
}



/* Address: 0x10072a54c | FUN_10072a54c */

void FUN_10072a54c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_2 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  (**(code **)(lVar4 + 0x10))(&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100efcc10;
  _swift_allocObject(&DAT_100efcc10,0x28,7);
  *(long *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  (**(code **)(lVar4 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_2);
  lVar3 = 0;
  FUN_10072bda0(0,param_2,param_3);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x24));
  *puVar1 = &DAT_100c750f8;
  puVar1[1] = puVar2;
  return;
}



/* Address: 0x10072a618 | FUN_10072a618 */

void FUN_10072a618(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10072a638,0,0);
  return;
}



/* Address: 0x10072a638 | FUN_10072a638 */

void FUN_10072a638(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  bVar3 = Swift::Equatable::___infix(uVar5,uVar1,uVar4,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010072a6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(bVar3);
  return;
}



/* Address: 0x10072a6b0 | FUN_10072a6b0 */

void FUN_10072a6b0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10072a6c0 | FUN_10072a6c0 */

void FUN_10072a6c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10072a740;
  FUN_10072a618(param_1,param_2,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10072a740 | FUN_10072a740 */

void FUN_10072a740(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010072a788. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Address: 0x10072a78c | FUN_10072a78c */

void FUN_10072a78c(void)

{
  FUN_10072a7a4();
  return;
}



/* Address: 0x10072a798 | FUN_10072a798 */

void FUN_10072a798(void)

{
  FUN_10072a7a4();
  return;
}



/* Address: 0x10072a7a4 | FUN_10072a7a4 */

void FUN_10072a7a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_4 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  (**(code **)(lVar3 + 0x10))(&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(lVar3 + 0x20))
            (param_1,&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  (*param_6)(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_retain(param_3);
  return;
}



/* Address: 0x10072a85c | thunk_FUN_100708198 */

void thunk_FUN_100708198(void)

{
  FUN_100708198();
  return;
}



/* Address: 0x10072a860 | thunk_FUN_1007081e4 */

void thunk_FUN_1007081e4(void)

{
  FUN_1007081e4();
  return;
}



/* Address: 0x10072a864 | thunk_FUN_10071ca04 */

void thunk_FUN_10071ca04(void)

{
  FUN_10071ca04();
  return;
}



/* Address: 0x10072a868 | thunk_FUN_10072b178 */

void thunk_FUN_10072b178(void)

{
  FUN_10072b178();
  return;
}


