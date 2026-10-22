/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100733668 | FUN_100733668 */

void FUN_100733668(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1007336d8,0,0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x0001007336d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1007336d8 | FUN_1007336d8 */

void FUN_1007336d8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar7,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar7,uVar2,uVar6,puVar5,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  _swift_allocError(uVar4,uVar7,0,0);
  (**(code **)(lVar1 + 0x20))(uVar7,uVar3,uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001007337c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1007337c4 | FUN_1007337c4 */

void FUN_1007337c4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  UnownedSerialExecutor UVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(long *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_4 + 0x18),*(undefined8 *)(param_4 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x38) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  if (param_2 == 0) {
    UVar3.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar3 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar3.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  _swift_task_switch(FUN_100733884,UVar3.unknown);
  return;
}



/* Address: 0x100733884 | FUN_100733884 */

void FUN_100733884(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1007338e8;
  FUN_10072d450(plVar1,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1007338e8 | FUN_1007338e8 */

void FUN_1007338e8(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  if (unaff_x20 != 0) {
    _swift_task_switch(thunk_FUN_10072d5e8,*(undefined8 *)(lVar1 + 0x50),
                       *(undefined8 *)(lVar1 + 0x58));
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100733950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100733954 | FUN_100733954 */

void FUN_100733954(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100733574(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007339bc | FUN_1007339bc */

void FUN_1007339bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_5 + 0x18),*(undefined8 *)(param_5 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  *(long *)(unaff_x22 + 0x18) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x20) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x28) = uVar2;
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100708dfc;
  FUN_1007337c4(plVar3,param_1,param_2,param_3,param_5,uVar2);
  return;
}



/* Address: 0x100733a84 | FUN_100733a84 */

long * FUN_100733a84(long param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(param_1 + 0x10);
  FUN_10072d3c0(0,*(undefined8 *)(*plVar2 + 0x50),*(undefined8 *)(*plVar2 + 0x58));
  plVar1 = plVar2;
  _swift_retain(plVar2);
  FUN_100733e48();
  _swift_release(plVar2);
  return plVar1;
}



/* Address: 0x100733ad0 | FUN_100733ad0 */

void FUN_100733ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_100733a84();
  _swift_release(uVar2);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100733b10 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  FUN_1005d7508();
  return;
}



/* Address: 0x100733b14 | FUN_100733b14 */

void FUN_100733b14(undefined8 param_1)

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
  FUN_1007320a8(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x100733b9c | FUN_100733b9c */

undefined8 FUN_100733b9c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100733be4 | FUN_100733be4 */

void FUN_100733be4(undefined8 param_1)

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
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100731dec(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x100733c6c | FUN_100733c6c */

undefined8 FUN_100733c6c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe0dc8;
  FUN_1000f7830(&DAT_100fe0dc8,&DAT_100c75540);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100733cbc | FUN_100733cbc */

void FUN_100733cbc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100733ce0 | FUN_100733ce0 */

void FUN_100733ce0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1005dfa74(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100733d58 | FUN_100733d58 */

void FUN_100733d58(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100733d64 | FUN_100733d64 */

void FUN_100733d64(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100733d70 | FUN_100733d70 */

void FUN_100733d70(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar3 = param_2[1];
  if (!SBORROW8(lVar3,lVar2)) {
    *param_1 = *param_2;
    param_1[1] = lVar3 - lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100733d90);
  (*pcVar1)();
}



/* Address: 0x100733d90 | FUN_100733d90 */

void FUN_100733d90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100730744(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x100733dfc | FUN_100733dfc */

void FUN_100733dfc(void)

{
  long unaff_x20;
  
  FUN_10072d044(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100733e20 | FUN_100733e20 */

void FUN_100733e20(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100733e2c | FUN_100733e2c */

void FUN_100733e2c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_100732a34();
    return;
  }
  return;
}



/* Address: 0x100733e40 | FUN_100733e40 */

void FUN_100733e40(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100730918(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100733e48 | FUN_100733e48 */

long FUN_100733e48(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_retain();
  FUN_10072cf50();
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return unaff_x20;
}



/* Address: 0x100733e9c | FUN_100733e9c */

undefined1  [16] FUN_100733e9c(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  Optional OVar3;
  Result RVar4;
  undefined7 extraout_var;
  undefined8 uVar6;
  undefined7 extraout_var_00;
  long lVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined *local_60;
  long local_58;
  ulong uVar5;
  
  puVar2 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  local_60 = &DAT_100c755f0;
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar8,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  uVar5 = CONCAT71(extraout_var,OVar3.value);
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar8,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar6 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar1,uVar8,puVar2,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getAssociatedConformanceWitness
            (uVar1,uVar8,uVar6,puVar2,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  _swift_getAssociatedConformanceWitness();
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,RVar4.value);
  if (uVar5 < 0x40) {
    local_58 = *(long *)(lVar7 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,2,&local_60,param_1 + 0x20);
    lVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar8 = 0x3f;
  }
  auVar9._8_8_ = uVar8;
  auVar9._0_8_ = lVar7;
  return auVar9;
}



/* Address: 0x100733fe4 | FUN_100733fe4 */

long * FUN_100733fe4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  ulong uVar13;
  void *pvVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar6 + -8);
  uVar11 = *(uint *)(lVar17 + 0x50);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar9 = *(long *)(lVar7 + -8);
  uVar11 = *(uint *)(lVar9 + 0x50) | uVar11;
  uVar10 = (ulong)(uVar11 & 0xff);
  uVar13 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar13 = uVar13 + 1;
  }
  uVar1 = *(ulong *)(lVar9 + 0x40);
  if (*(ulong *)(lVar9 + 0x40) <= uVar13) {
    uVar1 = uVar13;
  }
  if ((7 < (uVar11 & 0xff) || (uVar11 & 0x100000) != 0) || 0x18 < uVar1 - (-uVar10 - 9 | uVar10)) {
    lVar6 = *param_2;
    *param_1 = lVar6;
    _swift_retain();
    return (long *)(lVar6 + ((ulong)(uVar11 & 0xf8 ^ 0x1f8) & uVar10 + 0x10));
  }
  *param_1 = *param_2;
  pvVar14 = (void *)((long)param_1 + uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff));
  puVar15 = (uint *)((long)param_2 + uVar10 + 8 & (uVar10 ^ 0xffffffffffffffff));
  bVar4 = *(byte *)((long)puVar15 + uVar1);
  uVar11 = (uint)bVar4;
  if (1 < bVar4) {
    uVar16 = (uint)uVar1;
    uVar12 = 4;
    if (uVar16 < 4) {
      uVar12 = uVar16;
    }
    if ((int)uVar12 < 2) {
      if (uVar12 == 0) goto LAB_100734160;
      uVar12 = (uint)(byte)*puVar15;
    }
    else if (uVar12 == 2) {
      uVar12 = (uint)(ushort)*puVar15;
    }
    else if (uVar12 == 3) {
      uVar12 = (uint)(uint3)*puVar15;
    }
    else {
      uVar12 = *puVar15;
    }
    uVar11 = uVar12 | bVar4 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar11 = uVar12;
    }
    uVar11 = uVar11 + 2;
  }
LAB_100734160:
  if (uVar11 == 1) {
    (**(code **)(lVar9 + 0x10))(pvVar14,puVar15,lVar7);
    *(undefined1 *)((long)pvVar14 + uVar1) = 1;
  }
  else {
    puVar8 = puVar15;
    (**(code **)(lVar17 + 0x30))(puVar15,1,lVar6);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar17 + 0x10))(pvVar14,puVar15,lVar6);
      (**(code **)(lVar17 + 0x38))(pvVar14,0,1,lVar6);
    }
    else {
      _memcpy(pvVar14,puVar15,uVar13);
    }
    *(undefined1 *)((long)pvVar14 + uVar1) = 0;
  }
  return param_1;
}



/* Address: 0x1007341fc | FUN_1007341fc */

void FUN_1007341fc(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  long lVar9;
  uint uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar15 = *(long *)(lVar6 + -8);
  bVar4 = *(byte *)(lVar15 + 0x50);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar9 = *(long *)(lVar7 + -8);
  uVar11 = (ulong)(*(byte *)(lVar9 + 0x50) | bVar4);
  puVar14 = (uint *)(param_1 + uVar11 + 8 & (uVar11 ^ 0xffffffffffffffff));
  uVar11 = *(ulong *)(lVar15 + 0x40);
  if (*(int *)(lVar15 + 0x54) == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar1 = *(ulong *)(lVar9 + 0x40);
  if (*(ulong *)(lVar9 + 0x40) <= uVar11) {
    uVar1 = uVar11;
  }
  bVar4 = *(byte *)((long)puVar14 + uVar1);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar10 = (uint)uVar1;
    uVar13 = 4;
    if (uVar10 < 4) {
      uVar13 = uVar10;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100734310;
      uVar13 = (uint)(byte)*puVar14;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar14;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar14;
    }
    else {
      uVar13 = *puVar14;
    }
    uVar12 = uVar13 | bVar4 - 2 << (ulong)((uVar10 & 3) << 3);
    if (3 < uVar10) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100734310:
  if ((uVar12 != 1) &&
     (puVar8 = puVar14, (**(code **)(lVar15 + 0x30))(puVar14,1,lVar6), lVar7 = lVar6, lVar9 = lVar15
     , (int)puVar8 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100734374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar9 + 8))(puVar14,lVar7);
  return;
}



/* Address: 0x100734378 | FUN_100734378 */

undefined8 * FUN_100734378(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  
  *param_1 = *param_2;
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar6 + -8);
  bVar4 = *(byte *)(lVar17 + 0x50);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar10 = *(long *)(lVar7 + -8);
  uVar11 = (ulong)(*(byte *)(lVar10 + 0x50) | bVar4);
  pvVar14 = (void *)(uVar11 + 8 + (long)param_1 & (uVar11 ^ 0xffffffffffffffff));
  puVar15 = (uint *)(uVar11 + 8 + (long)param_2 & (uVar11 ^ 0xffffffffffffffff));
  uVar11 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar1 = *(ulong *)(lVar10 + 0x40);
  if (*(ulong *)(lVar10 + 0x40) <= uVar11) {
    uVar1 = uVar11;
  }
  bVar4 = *(byte *)((long)puVar15 + uVar1);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar16 = (uint)uVar1;
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007344a4;
      uVar13 = (uint)(byte)*puVar15;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar15;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar15;
    }
    else {
      uVar13 = *puVar15;
    }
    uVar12 = uVar13 | bVar4 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_1007344a4:
  if (uVar12 == 1) {
    (**(code **)(lVar10 + 0x10))(pvVar14,puVar15,lVar7);
    uVar9 = 1;
  }
  else {
    puVar8 = puVar15;
    (**(code **)(lVar17 + 0x30))(puVar15,1,lVar6);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar17 + 0x10))(pvVar14,puVar15,lVar6);
      (**(code **)(lVar17 + 0x38))(pvVar14,0,1,lVar6);
    }
    else {
      _memcpy(pvVar14,puVar15,uVar11);
    }
    uVar9 = 0;
  }
  *(undefined1 *)((long)pvVar14 + uVar1) = uVar9;
  return param_1;
}



/* Address: 0x100734540 | FUN_100734540 */

undefined8 * FUN_100734540(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  *param_1 = *param_2;
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar5 + -8);
  bVar9 = *(byte *)(lVar17 + 0x50);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar18 = *(long *)(lVar6 + -8);
  uVar10 = (ulong)(*(byte *)(lVar18 + 0x50) | bVar9);
  puVar14 = (uint *)(uVar10 + 8 + (long)param_1 & (uVar10 ^ 0xffffffffffffffff));
  puVar15 = (uint *)(uVar10 + 8 + (long)param_2 & (uVar10 ^ 0xffffffffffffffff));
  if (puVar14 == puVar15) {
    return param_1;
  }
  uVar10 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar1 = *(ulong *)(lVar18 + 0x40);
  if (*(ulong *)(lVar18 + 0x40) <= uVar10) {
    uVar1 = uVar10;
  }
  bVar9 = *(byte *)((long)puVar14 + uVar1);
  uVar12 = (uint)bVar9;
  uVar16 = (uint)uVar1;
  if (1 < bVar9) {
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100734678;
      uVar13 = (uint)(byte)*puVar14;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar14;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar14;
    }
    else {
      uVar13 = *puVar14;
    }
    uVar12 = uVar13 | bVar9 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100734678:
  lVar8 = lVar6;
  lVar11 = lVar18;
  if ((uVar12 == 1) ||
     (puVar7 = puVar14, (**(code **)(lVar17 + 0x30))(puVar14,1,lVar5), lVar8 = lVar5,
     lVar11 = lVar17, (int)puVar7 == 0)) {
    (**(code **)(lVar11 + 8))(puVar14,lVar8);
  }
  bVar9 = *(byte *)((long)puVar15 + uVar1);
  uVar12 = (uint)bVar9;
  if (1 < bVar9) {
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100734728;
      uVar13 = (uint)(byte)*puVar15;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar15;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar15;
    }
    else {
      uVar13 = *puVar15;
    }
    uVar12 = uVar13 | bVar9 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100734728:
  if (uVar12 == 1) {
    (**(code **)(lVar18 + 0x10))(puVar14,puVar15,lVar6);
    bVar9 = 1;
  }
  else {
    puVar7 = puVar15;
    (**(code **)(lVar17 + 0x30))(puVar15,1,lVar5);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar17 + 0x10))(puVar14,puVar15,lVar5);
      (**(code **)(lVar17 + 0x38))(puVar14,0,1,lVar5);
    }
    else {
      _memcpy(puVar14,puVar15,uVar10);
    }
    bVar9 = 0;
  }
  *(byte *)((long)puVar14 + uVar1) = bVar9;
  return param_1;
}



/* Address: 0x1007347cc | FUN_1007347cc */

undefined8 * FUN_1007347cc(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  uint *puVar8;
  undefined1 uVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  void *pvVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  
  *param_1 = *param_2;
  puVar5 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar6 + -8);
  bVar4 = *(byte *)(lVar17 + 0x50);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar5,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar10 = *(long *)(lVar7 + -8);
  uVar11 = (ulong)(*(byte *)(lVar10 + 0x50) | bVar4);
  pvVar14 = (void *)(uVar11 + 8 + (long)param_1 & (uVar11 ^ 0xffffffffffffffff));
  puVar15 = (uint *)(uVar11 + 8 + (long)param_2 & (uVar11 ^ 0xffffffffffffffff));
  uVar11 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar11 = uVar11 + 1;
  }
  uVar1 = *(ulong *)(lVar10 + 0x40);
  if (*(ulong *)(lVar10 + 0x40) <= uVar11) {
    uVar1 = uVar11;
  }
  bVar4 = *(byte *)((long)puVar15 + uVar1);
  uVar12 = (uint)bVar4;
  if (1 < bVar4) {
    uVar16 = (uint)uVar1;
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_1007348f8;
      uVar13 = (uint)(byte)*puVar15;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar15;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar15;
    }
    else {
      uVar13 = *puVar15;
    }
    uVar12 = uVar13 | bVar4 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_1007348f8:
  if (uVar12 == 1) {
    (**(code **)(lVar10 + 0x20))(pvVar14,puVar15,lVar7);
    uVar9 = 1;
  }
  else {
    puVar8 = puVar15;
    (**(code **)(lVar17 + 0x30))(puVar15,1,lVar6);
    if ((int)puVar8 == 0) {
      (**(code **)(lVar17 + 0x20))(pvVar14,puVar15,lVar6);
      (**(code **)(lVar17 + 0x38))(pvVar14,0,1,lVar6);
    }
    else {
      _memcpy(pvVar14,puVar15,uVar11);
    }
    uVar9 = 0;
  }
  *(undefined1 *)((long)pvVar14 + uVar1) = uVar9;
  return param_1;
}



/* Address: 0x100734994 | FUN_100734994 */

undefined8 * FUN_100734994(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  
  *param_1 = *param_2;
  puVar4 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar17 = *(long *)(lVar5 + -8);
  bVar9 = *(byte *)(lVar17 + 0x50);
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar4,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  lVar18 = *(long *)(lVar6 + -8);
  uVar10 = (ulong)(*(byte *)(lVar18 + 0x50) | bVar9);
  puVar14 = (uint *)(uVar10 + 8 + (long)param_1 & (uVar10 ^ 0xffffffffffffffff));
  puVar15 = (uint *)(uVar10 + 8 + (long)param_2 & (uVar10 ^ 0xffffffffffffffff));
  if (puVar14 == puVar15) {
    return param_1;
  }
  uVar10 = *(ulong *)(lVar17 + 0x40);
  if (*(int *)(lVar17 + 0x54) == 0) {
    uVar10 = uVar10 + 1;
  }
  uVar1 = *(ulong *)(lVar18 + 0x40);
  if (*(ulong *)(lVar18 + 0x40) <= uVar10) {
    uVar1 = uVar10;
  }
  bVar9 = *(byte *)((long)puVar14 + uVar1);
  uVar12 = (uint)bVar9;
  uVar16 = (uint)uVar1;
  if (1 < bVar9) {
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100734acc;
      uVar13 = (uint)(byte)*puVar14;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar14;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar14;
    }
    else {
      uVar13 = *puVar14;
    }
    uVar12 = uVar13 | bVar9 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100734acc:
  lVar8 = lVar6;
  lVar11 = lVar18;
  if ((uVar12 == 1) ||
     (puVar7 = puVar14, (**(code **)(lVar17 + 0x30))(puVar14,1,lVar5), lVar8 = lVar5,
     lVar11 = lVar17, (int)puVar7 == 0)) {
    (**(code **)(lVar11 + 8))(puVar14,lVar8);
  }
  bVar9 = *(byte *)((long)puVar15 + uVar1);
  uVar12 = (uint)bVar9;
  if (1 < bVar9) {
    uVar13 = 4;
    if (uVar16 < 4) {
      uVar13 = uVar16;
    }
    if ((int)uVar13 < 2) {
      if (uVar13 == 0) goto LAB_100734b7c;
      uVar13 = (uint)(byte)*puVar15;
    }
    else if (uVar13 == 2) {
      uVar13 = (uint)(ushort)*puVar15;
    }
    else if (uVar13 == 3) {
      uVar13 = (uint)(uint3)*puVar15;
    }
    else {
      uVar13 = *puVar15;
    }
    uVar12 = uVar13 | bVar9 - 2 << (ulong)((uVar16 & 3) << 3);
    if (3 < uVar16) {
      uVar12 = uVar13;
    }
    uVar12 = uVar12 + 2;
  }
LAB_100734b7c:
  if (uVar12 == 1) {
    (**(code **)(lVar18 + 0x20))(puVar14,puVar15,lVar6);
    bVar9 = 1;
  }
  else {
    puVar7 = puVar15;
    (**(code **)(lVar17 + 0x30))(puVar15,1,lVar5);
    if ((int)puVar7 == 0) {
      (**(code **)(lVar17 + 0x20))(puVar14,puVar15,lVar5);
      (**(code **)(lVar17 + 0x38))(puVar14,0,1,lVar5);
    }
    else {
      _memcpy(puVar14,puVar15,uVar10);
    }
    bVar9 = 0;
  }
  *(byte *)((long)puVar14 + uVar1) = bVar9;
  return param_1;
}



/* Address: 0x100734c20 | FUN_100734c20 */

uint FUN_100734c20(ulong *param_1,int param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  ulong uVar12;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar2 = *(undefined8 *)(param_3 + 0x10);
  uVar3 = *(undefined8 *)(param_3 + 0x18);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar11 = *(long *)(lVar7 + -8);
  iVar4 = *(int *)(lVar11 + 0x54);
  uVar12 = *(ulong *)(lVar11 + 0x40);
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar3,uVar2,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar9 = *(ulong *)(*(long *)(lVar7 + -8) + 0x40);
  if (iVar4 == 0) {
    uVar12 = uVar12 + 1;
  }
  if (uVar9 <= uVar12) {
    uVar9 = uVar12;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (-1 < param_2) goto LAB_100734cb0;
  uVar12 = (ulong)(*(byte *)(*(long *)(lVar7 + -8) + 0x50) | *(byte *)(lVar11 + 0x50));
  uVar12 = uVar9 + (uVar12 + 8 & (uVar12 ^ 0xffffffffffffffff)) + 1;
  uVar8 = (uint)uVar12;
  uVar5 = uVar8 << 3;
  if (uVar8 < 4) {
    uVar10 = (uint)(param_2 + -0x7fffffff + ~(-1 << (ulong)(uVar5 & 0x1f))) >> (ulong)(uVar5 & 0x1f)
    ;
    if (uVar10 < 0xff) {
      if (uVar10 == 0) goto LAB_100734cb0;
      goto LAB_100734d20;
    }
    if (uVar10 < 0xffff) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar12);
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar12);
    }
  }
  else {
LAB_100734d20:
    uVar10 = (uint)*(byte *)((long)param_1 + uVar12);
  }
  if (uVar10 != 0) {
    uVar1 = 0;
    if (uVar8 < 4) {
      uVar1 = uVar10 - 1 << (ulong)(uVar5 & 0x1f);
    }
    if (uVar8 != 0) {
      uVar5 = 4;
      if (uVar8 < 4) {
        uVar5 = uVar8;
      }
      if ((int)uVar5 < 3) {
        if (uVar5 == 1) {
          uVar12 = (ulong)(byte)*param_1;
        }
        else {
          uVar12 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar5 == 3) {
        uVar12 = (ulong)(uint3)*param_1;
      }
      else {
        uVar12 = (ulong)(uint)*param_1;
      }
    }
    return ((uint)uVar12 | uVar1) ^ 0x80000000;
  }
LAB_100734cb0:
  uVar12 = *param_1;
  if (0xfffffffe < uVar12) {
    uVar12 = 0xffffffff;
  }
  return (int)uVar12 + 1;
}



/* Address: 0x100734dc0 | FUN_100734dc0 */

void FUN_100734dc0(ulong *param_1,uint param_2,int param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  byte bVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  ulong uVar14;
  
  puVar6 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  uVar3 = *(undefined8 *)(param_4 + 0x10);
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  lVar13 = *(long *)(lVar8 + -8);
  iVar12 = *(int *)(lVar13 + 0x54);
  uVar14 = *(ulong *)(lVar13 + 0x40);
  lVar8 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar4,uVar3,puVar6,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Failure_100eaeae0);
  uVar10 = *(ulong *)(*(long *)(lVar8 + -8) + 0x40);
  uVar9 = (ulong)(*(byte *)(*(long *)(lVar8 + -8) + 0x50) | *(byte *)(lVar13 + 0x50));
  if (iVar12 == 0) {
    uVar14 = uVar14 + 1;
  }
  if (uVar10 <= uVar14) {
    uVar10 = uVar14;
  }
  sVar1 = uVar10 + (uVar9 + 8 & (uVar9 ^ 0xffffffffffffffff)) + 1;
  uVar11 = (uint)sVar1;
  if (param_3 < 0) {
    if (uVar11 < 4) {
      uVar2 = (uint)(param_3 + -0x7fffffff + ~(-1 << (ulong)(uVar11 << 3 & 0x1f))) >>
              (ulong)(uVar11 << 3 & 0x1f);
      bVar7 = 2;
      if (0xfffe < uVar2) {
        bVar7 = 4;
      }
      if (uVar2 < 0xff) {
        bVar7 = uVar2 != 0;
      }
    }
    else {
      bVar7 = 1;
    }
  }
  else {
    bVar7 = 0;
  }
  if ((int)param_2 < 0) {
    if (uVar11 < 4) {
      iVar12 = ((param_2 & 0x7fffffff) >> (ulong)(uVar11 << 3 & 0x1f)) + 1;
      if (uVar11 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar11 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar5 = (undefined2)uVar2;
        if (uVar11 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar11 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *(uint *)param_1 = param_2 & 0x7fffffff;
      iVar12 = 1;
    }
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar12;
      }
    }
    else if (bVar7 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar12;
    }
  }
  else {
    if (bVar7 < 2) {
      if (bVar7 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar7 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x100734fe0 | FUN_100734fe0 */

void FUN_100734fe0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100734fec | FUN_100734fec */

void FUN_100734fec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100735000 | FUN_100735000 */

void FUN_100735000(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10073500c | thunk_FUN_100735020 */

void thunk_FUN_100735020(void)

{
  FUN_100735020();
  return;
}



/* Address: 0x100735010 | FUN_100735010 */

void FUN_100735010(undefined8 *param_1)

{
  FUN_100732a34(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100735020 | FUN_100735020 */

undefined8 * FUN_100735020(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100732958(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x100735068 | FUN_100735068 */

undefined8 * FUN_100735068(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100732958(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_100732a34(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1007350bc | FUN_1007350bc */

void FUN_1007350bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1007350d0 | FUN_1007350d0 */

undefined8 * FUN_1007350d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_100732a34(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x100735114 | FUN_100735114 */

void FUN_100735114(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100735120 | FUN_100735120 */

int FUN_100735120(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10073517c | FUN_10073517c */

void FUN_10073517c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1007351cc | FUN_1007351cc */

void FUN_1007351cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_1[1],*param_1,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  _swift_getExtendedFunctionTypeMetadata(0xc4000000,0,0,0,uVar1,0,0x10,0);
  return;
}



/* Address: 0x10073521c | thunk_FUN_100733cbc */

void thunk_FUN_100733cbc(void)

{
  FUN_100733cbc();
  return;
}



/* Address: 0x100735220 | thunk_FUN_100733cbc */

void thunk_FUN_100733cbc(void)

{
  FUN_100733cbc();
  return;
}



/* Address: 0x100735224 | thunk_FUN_100733cbc */

void thunk_FUN_100733cbc(void)

{
  FUN_100733cbc();
  return;
}



/* Address: 0x100735228 | thunk_FUN_10072d5e8 */

void thunk_FUN_10072d5e8(void)

{
  FUN_10072d5e8();
  return;
}



/* Address: 0x10073522c | thunk_FUN_100735020 */

void thunk_FUN_100735020(void)

{
  thunk_FUN_100735020();
  return;
}



/* Address: 0x100735230 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  thunk_FUN_1005d7508();
  return;
}



/* Address: 0x100735234 | FUN_100735234 */

void FUN_100735234(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100735288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x10073528c | FUN_10073528c */

void FUN_10073528c(undefined8 param_1,long param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001007352e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x28))();
  return;
}



/* Address: 0x1007352e8 | FUN_1007352e8 */

void FUN_1007352e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Optional OVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined7 extraout_var;
  long lVar3;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar3 = *(long *)(lVar2 + -8);
  UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
  (*UNRECOVERED_JUMPTABLE)(param_1,1,1,lVar2);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            (param_1,CONCAT71(extraout_var,OVar1.value));
  (**(code **)(lVar3 + 0x20))(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007353a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,0,1,lVar2);
  return;
}



/* Address: 0x1007353ac | FUN_1007353ac */

void FUN_1007353ac(undefined8 param_1,long param_2)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar5;
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,uVar5,uVar4,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Element_100eabd00);
  *(long *)(unaff_x22 + 0x30) = lVar2;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x38) = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  *(long *)(unaff_x22 + 0x40) = lVar6;
  uVar3 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar3;
  _swift_task_switch(FUN_100735468,0,0);
  return;
}



/* Address: 0x100735468 | FUN_100735468 */

void FUN_100735468(Task param_1)

{
  bool bVar1;
  Optional OVar2;
  long lVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (!bVar1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
    lVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,uVar7,uVar8,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
    (**(code **)(*(long *)(lVar3 + -8) + 0x30))(uVar6,1,lVar3);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    lVar4 = *(long *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
    if ((int)uVar6 == 0) {
      _swift_getAssociatedConformanceWitness
                (uVar7,uVar8,lVar3,
                 PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
                 PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
                );
      Swift::IteratorProtocol::_next();
      (**(code **)(lVar4 + 0x30))(uVar5,1,uVar9);
      if ((int)uVar5 != 1) {
        uVar7 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
        pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x50) + 0x20);
        (*pcVar10)(uVar7,*(undefined8 *)(unaff_x22 + 0x48),uVar5);
        (*pcVar10)(uVar8,uVar7,uVar5);
        uVar7 = 0;
        goto LAB_1007355c4;
      }
    }
    else {
      (**(code **)(lVar4 + 0x38))(uVar5,1,1,uVar9);
    }
    (**(code **)(*(long *)(unaff_x22 + 0x40) + 8))
              (*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x38));
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x18);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            (uVar5,CONCAT71(extraout_var,OVar2.value));
  uVar7 = 1;
  (**(code **)(*(long *)(lVar4 + -8) + 0x38))(uVar5,1,1,lVar4);
LAB_1007355c4:
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x10),uVar7,1,*(undefined8 *)(unaff_x22 + 0x30));
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100735610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10073564c | FUN_10073564c */

void FUN_10073564c(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dfae0;
  FUN_1007353ac(plVar1,param_1,param_2);
  return;
}



/* Address: 0x1007356b4 | FUN_1007356b4 */

void FUN_1007356b4(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar5 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar2,lVar1,PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  lVar3 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  (**(code **)(lVar5 + 0x10))(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0));
  Swift::Sequence::_makeIterator();
  FUN_1007352e8(param_1,(long)(&stack0xffffffffffffffb0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
                        (lVar3 + 0xfU & 0xfffffffffffffff0),lVar1,uVar2);
  return;
}



/* Address: 0x100735784 | FUN_100735784 */

void FUN_100735784(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c756c8,param_1);
  return;
}



/* Address: 0x100735794 | FUN_100735794 */

void FUN_100735794(long param_1)

{
  FUN_1007356b4();
                    /* WARNING: Could not recover jumptable at 0x0001007357c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1007357c4 | FUN_1007357c4 */

void FUN_1007357c4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007357d0 | FUN_1007357d0 */

undefined1  [16] FUN_1007357d0(long param_1)

{
  Optional OVar1;
  ulong uVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  long local_28;
  
  uVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,OVar1.value);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar3 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0,1,&local_28,param_1 + 0x20);
    lVar3 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = 0x3f;
  }
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}


