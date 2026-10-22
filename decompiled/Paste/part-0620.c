/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10069dcb8 | FUN_10069dcb8 */

long * FUN_10069dcb8(undefined8 param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = unaff_x20[10];
  lVar6 = *(long *)(lVar5 + -8);
  lVar3 = *(long *)(lVar6 + 0x40);
  plVar1 = unaff_x20;
  _swift_allocObject();
  lVar4 = unaff_x20[0xb];
  uVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar4,lVar5,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,lVar5);
  _swift_getAssociatedConformanceWitness
            (lVar4,lVar5,uVar2,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar4 + 0x10))
            ((long)plVar1 + *(long *)(*plVar1 + 0x60),
             &stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),uVar2,lVar4);
  (**(code **)(lVar6 + 8))(param_1,lVar5);
  return plVar1;
}



/* Address: 0x10069ddb8 | FUN_10069ddb8 */

void FUN_10069ddb8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  lVar2 = 0;
  _swift_getAssociatedTypeWitness(0,lVar3,lVar1,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = *(long *)(lVar1 + -8);
  lVar4 = (long)(&stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0))
          - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar5 + 0x10))
            (&stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0),
             unaff_x20 + 2,lVar2);
  _swift_getAssociatedConformanceWitness
            (lVar3,lVar1,lVar2,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(lVar3 + 0x18))(lVar4,lVar2,lVar3);
  (**(code **)(lVar6 + 8))(lVar4,lVar1);
  (**(code **)(lVar5 + 8))((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60),lVar2);
  return;
}



/* Address: 0x10069ded4 | FUN_10069ded4 */

void FUN_10069ded4(void)

{
  FUN_10069ddb8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10069def8 | FUN_10069def8 */

void FUN_10069def8(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x58);
  lVar1 = 0x13f;
  _swift_getAssociatedTypeWitness
            (0x13f,uVar2,*(undefined8 *)(param_1 + 0x50),0x100cbad48,
             &TargetProtocolRequirement_100cbad58);
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,1,&local_28,param_1 + 0x60);
  }
  return;
}



/* Address: 0x10069df78 | FUN_10069df78 */

void FUN_10069df78(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069df84 | FUN_10069df84 */

long FUN_10069df84(void)

{
  long unaff_x20;
  
  return unaff_x20 + 0x10;
}



/* Address: 0x10069df8c | FUN_10069df8c */

undefined8 FUN_10069df8c(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10069dfc0();
  return unaff_x20;
}



/* Address: 0x10069dfc0 | FUN_10069dfc0 */

void FUN_10069dfc0(void)

{
  long lVar1;
  Optional OVar2;
  long *unaff_x20;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  char local_38;
  
  local_50 = *(undefined8 *)(*unaff_x20 + 0x50);
  uStack_48 = 0;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_40,FUN_10069d464,auStack_60,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_38 != '\x01') {
    lVar1 = local_40;
  }
  unaff_x20[2] = lVar1;
  return;
}



/* Address: 0x10069e05c | FUN_10069e05c */

void FUN_10069e05c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_unknownObjectRelease();
  }
  return;
}



/* Address: 0x10069e07c | FUN_10069e07c */

void FUN_10069e07c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_unknownObjectRelease();
  }
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10069e0a4 | FUN_10069e0a4 */

long FUN_10069e0a4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  Optional OVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  long local_70;
  char local_68;
  
  uVar9 = *(undefined8 *)(*unaff_x20 + 0x50);
  lStack_78 = 0;
  local_80 = uVar9;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar7 = Swift::Optional::typeMetadataAccessor();
  _swift_unknownObjectRetain(param_1);
  puVar5 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar4 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar3 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100617fb8(&local_70,FUN_10069d4a0,auStack_90,OVar7.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_68 != '\x01') {
    lVar1 = local_70;
  }
  local_80 = uVar9;
  lStack_78 = param_1;
  FUN_100617fb8(&local_70,FUN_10069d4a0,auStack_90,OVar7.value,puVar4,puVar3,puVar5);
  lVar2 = 0;
  if (local_68 != '\x01') {
    lVar2 = local_70;
  }
  lVar8 = unaff_x20[2];
  if (lVar8 == lVar1) {
    unaff_x20[2] = lVar2;
    lVar8 = param_1;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10069e1e4);
      (*pcVar6)();
    }
    _swift_unknownObjectRetain(lVar8);
    _swift_unknownObjectRelease(param_1);
  }
  return lVar8;
}



/* Address: 0x10069e1e4 | FUN_10069e1e4 */

void FUN_10069e1e4(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_unknownObjectRetain();
  }
  return;
}



/* Address: 0x10069e204 | FUN_10069e204 */

void FUN_10069e204(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x58);
  return;
}



/* Address: 0x10069e248 | FUN_10069e248 */

void FUN_10069e248(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069e254 | FUN_10069e254 */

undefined * FUN_10069e254(undefined8 param_1,long param_2,long param_3)

{
  UnsafeMutablePointer UVar1;
  UnsafeMutablePointer<undefined> UVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_2 + -8);
  puVar3 = &stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar1.unknown = (undefined *)0x0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  lVar6 = *(long *)(UVar1.unknown + -8);
  lVar4 = (long)puVar3 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Swift::UnsafeMutablePointer::allocate(1,UVar1);
  (**(code **)(lVar5 + 0x10))(puVar3,param_1,param_2);
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,UVar1.unknown,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(param_3 + 0x10))(lVar4,puVar3,UVar1.unknown,param_3);
  (**(code **)(lVar6 + 0x20))(UVar2.unknown,lVar4,UVar1.unknown);
  (**(code **)(lVar5 + 8))(param_1,param_2);
  return UVar2.unknown;
}



/* Address: 0x10069e380 | FUN_10069e380 */

void FUN_10069e380(undefined8 param_1,UnsafeMutablePointer param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cbad48,&TargetProtocolRequirement_100cbad58);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffb0 +
             -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),param_2.unknown,
             lVar1);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar1,0x100cbad48,&TargetProtocolRequirement_100cbad50);
  (**(code **)(param_4 + 0x18))(param_1,lVar1,param_4);
  Swift::UnsafeMutablePointer::deinitialize(1,param_2);
  Swift::UnsafeMutablePointer::deallocate(param_2);
  return;
}



/* Address: 0x10069e46c | FUN_10069e46c */

void FUN_10069e46c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10069e478 | FUN_10069e478 */

void FUN_10069e478(void)

{
  return;
}



/* Address: 0x10069e47c | FUN_10069e47c */

void FUN_10069e47c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069e488 | FUN_10069e488 */

undefined8 FUN_10069e488(undefined8 param_1)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_38;
  
  uStack_48 = 0;
  local_50 = param_1;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_40,FUN_10069d464,auStack_60,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar1 = 0;
  if (local_38 != '\x01') {
    uVar1 = local_40;
  }
  return uVar1;
}



/* Address: 0x10069e514 | FUN_10069e514 */

undefined8 FUN_10069e514(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_10069e540();
  return uVar1;
}



/* Address: 0x10069e540 | FUN_10069e540 */

void FUN_10069e540(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  Optional OVar2;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  char local_38;
  
  uStack_48 = 0;
  local_50 = param_2;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_40,FUN_10069d4a0,auStack_60,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  uVar1 = 0;
  if (local_38 != '\x01') {
    uVar1 = local_40;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x10069e5d0 | FUN_10069e5d0 */

undefined * FUN_10069e5d0(undefined8 param_1)

{
  Optional OVar1;
  UnsafeMutablePointer UVar2;
  UnsafeMutablePointer<undefined> UVar3;
  undefined8 local_70 [2];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  char local_48;
  
  UVar2.unknown = (undefined *)0x0;
  FUN_10069e6a0(0,param_1);
  UVar3 = Swift::UnsafeMutablePointer::allocate(1,UVar2);
  uStack_58 = 0;
  local_60 = param_1;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  FUN_100617fb8(&local_50,FUN_10069d4a0,local_70,OVar1.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  local_70[0] = 0;
  if (local_48 != '\x01') {
    local_70[0] = local_50;
  }
  FUN_1006331c4(local_70,UVar3.unknown,UVar2.unknown);
  return UVar3.unknown;
}



/* Address: 0x10069e6a0 | FUN_10069e6a0 */

void FUN_10069e6a0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069e6ac | FUN_10069e6ac */

undefined8 FUN_10069e6ac(UnsafeMutablePointer param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)param_1.unknown;
  FUN_10069e540();
  FUN_10069e6a0(0,param_2);
  Swift::UnsafeMutablePointer::deallocate(param_1);
  return uVar1;
}



/* Address: 0x10069e6f8 | FUN_10069e6f8 */

long FUN_10069e6f8(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  Optional OVar6;
  long lVar7;
  long in_xzr;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long lStack_78;
  long local_70;
  char local_68;
  
  lStack_78 = 0;
  local_80 = param_3;
  Swift::Unmanaged::typeMetadataAccessor();
  OVar6 = Swift::Optional::typeMetadataAccessor();
  _swift_unknownObjectRetain(param_1);
  puVar4 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar3 = PTR___type_metadata_for_Swift_Never_100eadc38;
  puVar2 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  FUN_100617fb8(&local_70,FUN_10069d4a0,auStack_90,OVar6.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for_Swift_Int_100eac6f8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar1 = 0;
  if (local_68 != '\x01') {
    lVar1 = local_70;
  }
  local_80 = param_3;
  lStack_78 = param_1;
  FUN_100617fb8(&local_70,FUN_10069d4a0,auStack_90,OVar6.value,puVar3,puVar2,puVar4);
  if (local_68 == '\x01') {
    lVar7 = *param_2;
    if (lVar7 == lVar1) {
      *param_2 = in_xzr;
      return param_1;
    }
  }
  else {
    lVar7 = *param_2;
    if (lVar7 == lVar1) {
      *param_2 = local_70;
      return param_1;
    }
  }
  _swift_unknownObjectRelease(param_1);
  if (lVar7 != 0) {
    _swift_unknownObjectRetain(lVar7);
    _swift_unknownObjectRelease(param_1);
    return lVar7;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10069e848);
  (*pcVar5)();
}



/* Address: 0x10069e848 | FUN_10069e848 */

void FUN_10069e848(long *param_1)

{
  if (*param_1 != 0) {
    _swift_unknownObjectRetain();
  }
  return;
}



/* Address: 0x10069e850 | FUN_10069e850 */

void FUN_10069e850(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10069e864 | FUN_10069e864 */

void FUN_10069e864(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10069e870 | _swift_retain_n */

void _swift_retain_n(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_n_100eae400)();
  return;
}



/* Address: 0x10069e874 | _swift_release_n */

void _swift_release_n(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_n_100eae3f0)();
  return;
}



/* Address: 0x10069e878 | FUN_10069e878 */

void FUN_10069e878(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long extraout_x8;
  long lVar12;
  char *pcVar13;
  undefined1 *puVar14;
  undefined8 auStack_e0 [2];
  char *local_d0 [7];
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar2 = 0;
  FUN_1006b7d9c();
  lVar8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar11 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)local_d0 + lVar11;
  puVar3 = (undefined8 *)(param_1 + *(int *)(lVar8 + 0x14));
  *puVar3 = 0;
  puVar3[1] = 0;
  local_d0[3] = (char *)(param_1 + *(int *)(lVar8 + 0x20));
  *(undefined8 *)((long)local_d0[3] + 0x20) = 0;
  *(undefined8 *)((long)local_d0[3] + 8) = 0;
  *(undefined8 *)local_d0[3] = 0;
  *(undefined8 *)((long)local_d0[3] + 0x18) = 0;
  *(undefined8 *)((long)local_d0[3] + 0x10) = 0;
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_98 = param_1;
  FUN_100a0dde8(lVar12,0x2e302e302e373231,0xe900000000000031,0x1f90);
  puVar3 = (undefined8 *)(lVar12 + *(int *)(lVar2 + 0x14));
  puVar1 = (undefined8 *)(lVar12 + *(int *)(lVar2 + 0x20));
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *puVar3 = 0;
  puVar3[1] = 0;
  local_d0[1] = (char *)puVar3;
  *(undefined8 *)(lVar12 + *(int *)(lVar2 + 0x18)) = 0x100;
  *(undefined1 *)(lVar12 + *(int *)(lVar2 + 0x1c)) = 1;
  puVar3 = &local_90;
  FUN_10069ec50();
  FUN_100002c1c();
  *(undefined8 **)(lVar12 + *(int *)(lVar2 + 0x24)) = puVar3;
  pcVar4 = (char *)0x74736f68;
  puVar9 = &DAT_e400000000000000;
  thunk_FUN_1007fffbc();
  *(undefined8 *)((long)auStack_e0 + lVar11) = param_4;
  pcVar5 = pcVar4;
  puVar14 = puVar9;
  FUN_10080b040();
  local_d0[0] = pcVar5;
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(pcVar4);
  uVar6 = 0x74726f70;
  puVar10 = &DAT_e400000000000000;
  thunk_FUN_1007fffbc(0x74726f70);
  local_d0[6] = (char *)param_4;
  *(undefined8 *)((long)auStack_e0 + lVar11) = param_4;
  local_d0[2] = "DoubleWord(first: ";
  uVar7 = uVar6;
  puVar9 = puVar10;
  local_d0[4] = (char *)param_2;
  local_d0[5] = (char *)param_3;
  FUN_10080bd80();
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(uVar6);
  if (puVar14 == (undefined1 *)0x0) {
    if (((uint)puVar9 & 0xff) != 1) {
      lVar8 = 0;
      FUN_100a0e718();
      (**(code **)(*(long *)(lVar8 + -8) + 8))(lVar12,lVar8);
      puVar14 = (undefined1 *)0xe900000000000031;
      pcVar5 = (char *)0x2e302e302e373231;
      uVar6 = uVar7;
      goto LAB_10069eb74;
    }
    uVar6 = 0xd000000000000010;
    puVar9 = (undefined1 *)0x8000000100dafd90;
    thunk_FUN_1007fffbc(0xd000000000000010);
    pcVar13 = local_d0[6];
    *(char **)((long)auStack_e0 + lVar11) = local_d0[6];
    pcVar4 = local_d0[5];
    pcVar5 = local_d0[4];
    uVar7 = uVar6;
    puVar14 = puVar9;
    FUN_10080b040();
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(uVar6);
    if (puVar14 == (undefined1 *)0x0) goto LAB_10069eb98;
    lVar8 = 0;
    FUN_100a0e718();
    (**(code **)(*(long *)(lVar8 + -8) + 8))(lVar12,lVar8);
    FUN_100a0de40(lVar12,uVar7,puVar14);
  }
  else {
    lVar8 = 0;
    FUN_100a0e718();
    (**(code **)(*(long *)(lVar8 + -8) + 8))(lVar12,lVar8);
    pcVar5 = local_d0[0];
    uVar6 = 0x1f90;
    if (((uint)puVar9 & 0xff) != 1) {
      uVar6 = uVar7;
    }
LAB_10069eb74:
    FUN_100a0dde8(lVar12,pcVar5,puVar14,uVar6);
    pcVar13 = local_d0[6];
    pcVar4 = local_d0[5];
    pcVar5 = local_d0[4];
  }
  _swift_bridgeObjectRelease(puVar14);
LAB_10069eb98:
  uVar6 = 0x614e726576726573;
  lVar8 = -0x15ffffffffff9a93;
  thunk_FUN_1007fffbc();
  *(char **)((long)auStack_e0 + lVar11) = pcVar13;
  uVar7 = uVar6;
  lVar11 = lVar8;
  FUN_10080b040();
  FUN_1001b9e60(pcVar5,pcVar4);
  _swift_bridgeObjectRelease(lVar8);
  _swift_bridgeObjectRelease(uVar6);
  _swift_release(pcVar13);
  pcVar5 = local_d0[1];
  if (lVar11 != 0) {
    *(undefined8 *)local_d0[1] = uVar7;
    *(long *)((long)pcVar5 + 8) = lVar11;
  }
  FUN_10069eca0(local_d0[3]);
  FUN_10069ece8(lVar12,local_98);
  return;
}



/* Address: 0x10069ec50 | FUN_10069ec50 */

undefined8 FUN_10069ec50(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbb50;
  FUN_1000f7830(&DAT_100fdbb50,&DAT_100c6f310);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10069eca0 | FUN_10069eca0 */

undefined8 FUN_10069eca0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbb50;
  FUN_1000f7830(&DAT_100fdbb50,&DAT_100c6f310);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10069ece8 | FUN_10069ece8 */

undefined8 FUN_10069ece8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1006b7d9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10069ed2c | FUN_10069ed2c */

void FUN_10069ed2c(void)

{
  FUN_100a2fc0c(PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___type_metadata_for_Swift_Substring_100eaca98,
                PTR___protocol_witness_table_for_Swift_Substring___Swift_Hashable_in_Swift_100eacaa0
               );
  return;
}



/* Address: 0x10069ed44 | FUN_10069ed44 */

undefined1  [16] FUN_10069ed44(long param_1,undefined **param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = param_1;
  if (param_1 == 0) {
    FUN_10090e224();
    thunk_FUN_10093a518();
    param_2 = &PTR_PTR_100f14e20;
  }
  _swift_unknownObjectRetain(param_1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = lVar1;
  return auVar2;
}



/* Address: 0x10069ed98 | FUN_10069ed98 */

void FUN_10069ed98(void)

{
  code *local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined2 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_40 = 0;
  uStack_38 = 0;
  local_48 = FUN_1000f26f8;
  local_30 = 1;
  uStack_20 = 0x14000;
  local_28 = 0x14000;
  local_18 = 1000;
  FUN_100a2363c(&local_48);
  return;
}



/* Address: 0x10069ede8 | FUN_10069ede8 */

void FUN_10069ede8(void)

{
  FUN_10090e224(0);
  thunk_FUN_10093a518();
  return;
}



/* Address: 0x10069ee18 | FUN_10069ee18 */

void FUN_10069ee18(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar4 = &local_50;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  FUN_100a0dde8(0x2e302e302e373231,0xe900000000000031,0x1f90);
  lVar3 = 0;
  FUN_1006b7d9c();
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x14));
  puVar2 = (undefined8 *)(param_1 + *(int *)(lVar3 + 0x20));
  puVar2[4] = 0;
  puVar2[1] = 0;
  *puVar2 = 0;
  puVar2[3] = 0;
  puVar2[2] = 0;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + *(int *)(lVar3 + 0x18)) = 0x100;
  *(undefined1 *)(param_1 + *(int *)(lVar3 + 0x1c)) = 1;
  FUN_10069ec50();
  FUN_100002c1c();
  *(undefined8 **)(param_1 + *(int *)(lVar3 + 0x24)) = puVar4;
  return;
}



/* Address: 0x10069eec0 | FUN_10069eec0 */

void FUN_10069eec0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long extraout_x8;
  undefined1 *puVar5;
  
  lVar4 = 0;
  FUN_1006b7d9c();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar5 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(param_2 + 0x40))(puVar5,param_1,param_2);
  uVar3 = *(undefined8 *)(puVar5 + *(int *)(lVar4 + 0x14));
  lVar4 = *(long *)((long)(puVar5 + *(int *)(lVar4 + 0x14)) + 8);
  _swift_bridgeObjectRetain(lVar4);
  FUN_10005241c(puVar5,FUN_1006b7d9c);
  uVar1 = 0x42676e696d6d7548;
  if (lVar4 != 0) {
    uVar1 = uVar3;
  }
  lVar2 = -0x14ffffffff9b8d97;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  FUN_1005cbc74(uVar1,lVar2);
  return;
}



/* Address: 0x10069ef94 | FUN_10069ef94 */

void FUN_10069ef94(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  Date DVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1b8) = unaff_x20;
  *(long *)(unaff_x22 + 0x1a8) = param_1;
  lVar4 = *(long *)(param_1 + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x1c8) = lVar4;
  uVar2 = lVar4 + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar1;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d8) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar2;
  lVar4 = 0;
  FUN_100a2d4c0();
  *(long *)(unaff_x22 + 0x1e8) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar2;
  lVar4 = 0;
  FUN_1006b7d9c();
  *(long *)(unaff_x22 + 0x1f8) = lVar4;
  uVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_2,param_1,0x100cbafe4,&TargetProtocolRequirement_100cbb004);
  *(long *)(unaff_x22 + 0x208) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x210) = lVar4;
  lVar4 = *(long *)(lVar4 + 0x40);
  *(long *)(unaff_x22 + 0x218) = lVar4;
  uVar2 = lVar4 + 0xf;
  uVar1 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x220) = uVar1;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x228) = uVar2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x230) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x238) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x240) = uVar2;
  _swift_task_switch(FUN_10069f0dc,0,0);
  return;
}



/* Address: 0x10069f0dc | FUN_10069f0dc */

void FUN_10069f0dc(void)

{
  int iVar1;
  Date DVar2;
  Date DVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar11 = *(long *)(unaff_x22 + 0x238);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
  lVar10 = *(long *)(unaff_x22 + 0x1b0);
  DVar2.unknown = (undefined *)0x0;
  FUN_1007018f0();
  *(undefined **)(unaff_x22 + 0x248) = DVar2.unknown;
  uVar6 = 0x18;
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x250) = DVar2.unknown;
  DVar3 = Foundation::Date::get_now(DVar2);
  FUN_100701f80();
  (**(code **)(lVar11 + 8))(uVar9,uVar8);
  lVar11 = 0;
  FUN_100701910();
  _swift_allocObject();
  *(undefined **)(lVar11 + 0x10) = DVar3.unknown;
  *(undefined8 *)(lVar11 + 0x18) = uVar6;
  puVar4 = &DAT_100fdbb58;
  FUN_1000f7830(&DAT_100fdbb58,&DAT_100c6f328);
  _swift_allocObject();
  *(long *)(puVar4 + 0x10) = lVar11;
  *(undefined8 *)(puVar4 + 0x18) = 0;
  *(undefined **)(DVar2.unknown + 0x10) = puVar4;
  piVar7 = *(int **)(lVar10 + 0x28);
  iVar1 = *piVar7;
  plVar5 = (long *)(ulong)(uint)piVar7[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 600) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10069f1f8;
                    /* WARNING: Could not recover jumptable at 0x00010069f1f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (plVar5,*(undefined8 *)(unaff_x22 + 0x228),*(undefined8 *)(unaff_x22 + 0x1a8),
             *(undefined8 *)(unaff_x22 + 0x1b0));
  return;
}



/* Address: 0x10069f1f8 | FUN_10069f1f8 */

void FUN_10069f1f8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x260) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 600));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10069f25c;
  }
  else {
    pcVar1 = FUN_10069fa1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10069f25c | FUN_10069f25c */

void FUN_10069f25c(void)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 uVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  undefined *puVar13;
  undefined *puVar14;
  long *plVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  code *pcVar24;
  code *pcVar25;
  ulong uVar26;
  int *piVar27;
  long lVar28;
  undefined8 uVar29;
  ulong uVar30;
  ulong uVar31;
  undefined8 uVar32;
  long lVar33;
  ulong uVar34;
  long unaff_x22;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  code *pcVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  code *pcVar42;
  undefined8 uVar43;
  
  lVar28 = *(long *)(unaff_x22 + 0x260);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar21 = *(long *)(unaff_x22 + 0x218);
  lVar22 = *(long *)(unaff_x22 + 0x210);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x208);
  lVar17 = *(long *)(unaff_x22 + 0x1f8);
  lVar6 = *(long *)(unaff_x22 + 0x200);
  lVar3 = *(long *)(unaff_x22 + 0x1e8);
  lVar7 = *(long *)(unaff_x22 + 0x1f0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1e0);
  lVar4 = *(long *)(unaff_x22 + 0x1c0);
  lVar33 = *(long *)(unaff_x22 + 0x1c8);
  lVar5 = *(long *)(unaff_x22 + 0x1b0);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar43 = *(undefined8 *)(unaff_x22 + 0x1b0);
  pcVar42 = *(code **)(unaff_x22 + 0x1a8);
  pcVar9 = pcVar42;
  lVar16 = lVar5;
  (**(code **)(lVar5 + 0x30))();
  (**(code **)(lVar5 + 0x40))(lVar6,pcVar42,lVar5);
  lVar10 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar10 + -8) + 0x10))(lVar7,lVar6,lVar10);
  puVar1 = (undefined8 *)(lVar6 + *(int *)(lVar17 + 0x14));
  uVar29 = *(undefined8 *)(lVar6 + *(int *)(lVar17 + 0x18));
  uVar35 = *puVar1;
  uVar36 = puVar1[1];
  uVar8 = *(undefined1 *)(lVar6 + *(int *)(lVar17 + 0x1c));
  FUN_1000f8cac(lVar6 + *(int *)(lVar17 + 0x20),lVar7 + *(int *)(lVar3 + 0x20),&DAT_100fdbb50,
                &DAT_100c6f310);
  uVar37 = *(undefined8 *)(lVar6 + *(int *)(lVar17 + 0x24));
  _swift_retain(uVar37);
  _swift_bridgeObjectRetain(uVar36);
  FUN_10005241c(lVar6,FUN_1006b7d9c);
  puVar1 = (undefined8 *)(lVar7 + *(int *)(lVar3 + 0x14));
  *puVar1 = uVar35;
  puVar1[1] = uVar36;
  *(undefined8 *)(lVar7 + *(int *)(lVar3 + 0x18)) = uVar29;
  *(undefined1 *)(lVar7 + *(int *)(lVar3 + 0x1c)) = uVar8;
  *(undefined8 *)(lVar7 + *(int *)(lVar3 + 0x24)) = uVar37;
  pcVar11 = pcVar42;
  lVar17 = lVar5;
  (**(code **)(lVar5 + 0x38))();
  pcVar24 = *(code **)(lVar5 + 0x48);
  pcVar12 = pcVar42;
  (*pcVar24)(pcVar42,lVar5);
  pcVar25 = *(code **)(lVar4 + 0x10);
  (*pcVar25)(uVar40,uVar41,pcVar42);
  (**(code **)(lVar22 + 0x10))(uVar20,uVar19,uVar23);
  uVar26 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar31 = uVar26 + 0x20 & (uVar26 ^ 0xffffffffffffffff);
  uVar30 = (ulong)*(byte *)(lVar22 + 0x50);
  lVar33 = uVar31 + lVar33;
  uVar34 = lVar33 + uVar30 & (uVar30 ^ 0xffffffffffffffff);
  uVar26 = uVar26 | 7;
  uVar38 = lVar21 + uVar34 + 7 & 0xfffffffffffffff8;
  puVar13 = &DAT_100ef6378;
  _swift_allocObject(&DAT_100ef6378,uVar38 + 8,uVar26 | uVar30);
  *(undefined8 *)(puVar13 + 0x18) = uVar43;
  *(code **)(puVar13 + 0x10) = pcVar42;
  pcVar39 = *(code **)(lVar4 + 0x20);
  (*pcVar39)(puVar13 + uVar31,uVar40,pcVar42);
  (**(code **)(lVar22 + 0x20))(puVar13 + uVar34,uVar20,uVar23);
  *(undefined8 *)(puVar13 + uVar38) = uVar18;
  (*pcVar25)(uVar32,uVar41,pcVar42);
  puVar14 = &DAT_100ef63a0;
  _swift_allocObject(&DAT_100ef63a0,lVar33,uVar26);
  *(code **)(puVar14 + 0x10) = pcVar42;
  *(long *)(puVar14 + 0x18) = lVar5;
  (*pcVar39)(puVar14 + uVar31,uVar32,pcVar42);
  _swift_retain(uVar18);
  (*pcVar9)(unaff_x22 + 0x158,&DAT_100c6f338,puVar13);
  if (lVar28 != 0) {
    uVar41 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x228);
    lVar33 = *(long *)(unaff_x22 + 0x210);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x208);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x1f0);
    _swift_release(lVar16);
    _swift_release(puVar14);
    _swift_release(puVar13);
    _swift_release(pcVar12);
    _swift_unknownObjectRelease(pcVar11);
    _swift_release(uVar41);
    FUN_10005241c(uVar40,FUN_100a2d4c0);
    (**(code **)(lVar33 + 8))(uVar32,uVar35);
    uVar41 = *(undefined8 *)(unaff_x22 + 0x228);
    uVar40 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar36 = *(undefined8 *)(unaff_x22 + 0x200);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x1f0);
    uVar32 = *(undefined8 *)(unaff_x22 + 0x1d8);
    uVar35 = *(undefined8 *)(unaff_x22 + 0x1e0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x1d0);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
    _swift_task_dealloc(uVar41);
    _swift_task_dealloc(uVar40);
    _swift_task_dealloc(uVar36);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar35);
    _swift_task_dealloc(uVar32);
    _swift_task_dealloc(uVar19);
                    /* WARNING: Could not recover jumptable at 0x00010069f638. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar36 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x178);
  lVar3 = *(long *)(unaff_x22 + 0x1b0);
  uVar40 = *(undefined8 *)(unaff_x22 + 0x1b8);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x1b0);
  uVar41 = *(undefined8 *)(unaff_x22 + 0x1a8);
  FUN_100004640(unaff_x22 + 0x158,uVar32);
  FUN_100a2d2a8(unaff_x22 + 0x130,uVar19,&DAT_100c6f348,puVar14,pcVar11,lVar17,pcVar12,uVar32,uVar35
               );
  _swift_release(lVar16);
  _swift_release(puVar14);
  _swift_release(puVar13);
  _swift_release(pcVar12);
  _swift_unknownObjectRelease(pcVar11);
  FUN_10005241c(uVar19,FUN_100a2d4c0);
  FUN_100004594(unaff_x22 + 0x158);
  uVar32 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar35 = *(undefined8 *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar32);
  (*pcVar25)(uVar20,uVar40,uVar41);
  puVar13 = &DAT_100ef63c8;
  _swift_allocObject(&DAT_100ef63c8,lVar33,uVar26);
  *(undefined8 *)(puVar13 + 0x18) = uVar23;
  *(undefined8 *)(puVar13 + 0x10) = uVar41;
  (*pcVar39)(puVar13 + uVar31,uVar20,uVar41);
  FUN_100705494(unaff_x22 + 0x180,&DAT_100c6f358,puVar13,uVar32,uVar35);
  _swift_release(puVar13);
  uVar32 = uVar41;
  (**(code **)(lVar3 + 0x58))(uVar41,lVar3);
  puVar13 = &DAT_100fdbb60;
  FUN_1000f7830(&DAT_100fdbb60,&DAT_100c6f360);
  _swift_initStackObject();
  *(undefined8 *)(puVar13 + 0x18) = 4;
  *(undefined8 *)(puVar13 + 0x10) = 2;
  *(undefined8 *)(puVar13 + 0x38) = uVar18;
  *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100efb520;
  *(undefined8 *)(puVar13 + 0x20) = uVar36;
  FUN_100076688(unaff_x22 + 0x180,puVar13 + 0x48);
  _swift_retain(uVar36);
  FUN_1006a1a40(puVar13);
  (*pcVar24)(uVar41,lVar3);
  FUN_1009d9df8(unaff_x22 + 0x10,uVar32,uVar41);
  FUN_1009d79f8();
  _swift_allocObject();
  plVar15 = (long *)(unaff_x22 + 0x10);
  FUN_1009ca8a0();
  *(long **)(unaff_x22 + 0x268) = plVar15;
  piVar27 = *(int **)(*plVar15 + 0xd0);
  iVar2 = *piVar27;
  plVar15 = (long *)(ulong)(uint)piVar27[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x270) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_10069f8c8;
                    /* WARNING: Could not recover jumptable at 0x00010069f8c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar2 + (long)piVar27))(0xd00000000000001d,0x8000000100dafdb0,0x9c);
  return;
}



/* Address: 0x10069f8c8 | FUN_10069f8c8 */

void FUN_10069f8c8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x278) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x270));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10069f92c;
  }
  else {
    pcVar1 = FUN_10069fac8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10069f92c | FUN_10069f92c */

void FUN_10069f92c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x240);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x220);
  lVar11 = *(long *)(unaff_x22 + 0x210);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x268));
  _swift_release(uVar5);
  FUN_100004594(unaff_x22 + 0x180);
  (**(code **)(lVar11 + 8))(uVar6,uVar8);
  FUN_100004594(unaff_x22 + 0x130);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010069fa18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10069fa1c | FUN_10069fa1c */

void FUN_10069fa1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x250));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010069fac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10069fac8 | FUN_10069fac8 */

void FUN_10069fac8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar5 = *(long *)(unaff_x22 + 0x210);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x208);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x268));
  _swift_release(uVar2);
  FUN_100004594(unaff_x22 + 0x180);
  (**(code **)(lVar5 + 8))(uVar1,uVar3);
  FUN_100004594(unaff_x22 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x228);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x220);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x240));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010069fba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10069fbac | FUN_10069fbac */

void FUN_10069fbac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_8;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x1e8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1c0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1c8) = param_3;
  lVar1 = 0;
  FUN_100a03644();
  uVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  FUN_1006a4c18(param_2,uVar2);
  _swift_task_switch(FUN_10069fc2c,0,0);
  return;
}



/* Address: 0x10069fc2c | FUN_10069fc2c */

void FUN_10069fc2c(void)

{
  undefined8 uVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  TaskLocal *pTVar7;
  long *plVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  plVar4 = *(long **)(unaff_x22 + 0x1f0);
  (**(code **)(*(long *)(unaff_x22 + 0x1f8) + 0x48))();
  plVar8 = plVar4;
  if (DAT_100fde8e8 != -1) {
    plVar8 = &DAT_100fde8e8;
    _swift_once(&DAT_100fde8e8,FUN_1006fc410);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x1c8);
  (**(code **)(*DAT_100fde8f0 + 0x88))();
  lVar2 = *plVar8;
  *plVar8 = lVar2 + 1;
  *(undefined **)(unaff_x22 + 0x150) = &DAT_100efb058;
  FUN_1006a4c5c();
  *(long **)(unaff_x22 + 0x158) = plVar8;
  *(long *)(unaff_x22 + 0x138) = lVar2;
  *(undefined1 *)(unaff_x22 + 0x160) = 1;
  uVar5 = 0x65757165722e6268;
  FUN_1006a04c0(0x65757165722e6268,0xed000064692e7473,unaff_x22 + 0x138,plVar4);
  *(undefined8 *)(unaff_x22 + 0x208) = uVar5;
  _swift_release(plVar4);
  puVar6 = (undefined8 *)(unaff_x22 + 0x138);
  FUN_1005bee8c();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined **)(unaff_x22 + 0x70) = &DAT_100c6f508;
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0x10;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar5;
  FUN_1005cccfc();
  uVar9 = *puVar6;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar9;
  *(undefined **)(unaff_x22 + 0xe0) = &DAT_100c6f518;
  *(long *)(unaff_x22 + 0xe8) = unaff_x22 + 0x60;
  *(undefined8 *)(unaff_x22 + 400) = uVar5;
  bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0xca) = bVar3 & 1;
  if ((bVar3 & 1) != 0) {
    pTVar7 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x218) = pTVar7;
    *(long *)pTVar7 = unaff_x22;
    *(code **)(pTVar7 + 8) = FUN_10069fe54;
    Swift::TaskLocal::_withValue
              (pTVar7,uVar9,unaff_x22 + 0x88,unaff_x22 + 400,&DAT_100c6f528,unaff_x22 + 0xd0,0,0,
               0xd000000000000014,0x8000000100dae580,0x5ca,&DAT_100f277d8);
    return;
  }
  _swift_task_switch(FUN_10069fee0,0,0);
  return;
}



/* Address: 0x10069fe54 | FUN_10069fe54 */

void FUN_10069fe54(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x218));
  if (unaff_x20 == 0) {
    uVar1 = 0;
    uVar3 = 0;
    FUN_1000da368(0,0);
    pcVar2 = FUN_1006a0130;
  }
  else {
    *(long *)(lVar4 + 0x250) = unaff_x20;
    uVar1 = 0;
    uVar3 = 0;
    FUN_1000da368(0,0);
    pcVar2 = FUN_1006a0288;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x10069fee0 | FUN_10069fee0 */

void FUN_10069fee0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x208);
  _swift_retain();
  *(undefined8 *)(unaff_x22 + 0x198) = uVar1;
  _swift_task_localValuePush(uVar2,unaff_x22 + 0x198,&DAT_100ee6d28);
  _swift_task_switch(FUN_10069ff40,0,0);
  return;
}



/* Address: 0x10069ff40 | FUN_10069ff40 */

void FUN_10069ff40(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x310;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x220) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10069ffc0;
  FUN_1006a0664(plVar1,unaff_x22 + 0x88,0,0,*(undefined8 *)(unaff_x22 + 0x208),
                *(undefined8 *)(unaff_x22 + 0x1c8),*(undefined8 *)(unaff_x22 + 0x1d0),
                *(undefined8 *)(unaff_x22 + 0x1e0),*(undefined8 *)(unaff_x22 + 0x1c0),
                *(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x1d8),
                *(undefined8 *)(unaff_x22 + 0x1f0),*(undefined8 *)(unaff_x22 + 0x1f8),
                unaff_x22 + 0x1a0);
  return;
}



/* Address: 0x10069ffc0 | FUN_10069ffc0 */

void FUN_10069ffc0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x220));
  if (unaff_x20 == 0) {
    pcVar3 = FUN_1006a0080;
  }
  else {
    puVar1 = &DAT_100fdbdb8;
    FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
    puVar5 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar2 = puVar1;
    puVar4 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar4 = *(undefined8 *)(lVar6 + 0x1a0);
    _swift_allocError(puVar1,puVar5,0,0);
    *(undefined **)(lVar6 + 0x228) = puVar1;
    *puVar5 = puVar2;
    pcVar3 = FUN_1006a00d4;
  }
  _swift_task_switch(pcVar3,0,0);
  return;
}



/* Address: 0x1006a0080 | FUN_1006a0080 */

void FUN_1006a0080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_task_localValuePop();
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1006a0130,uVar1,uVar2);
  return;
}



/* Address: 0x1006a00d4 | FUN_1006a00d4 */

void FUN_1006a00d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  _swift_task_localValuePop();
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(unaff_x22 + 0x228);
  uVar1 = 0;
  uVar2 = 0;
  FUN_1000da368(0,0);
  _swift_task_switch(FUN_1006a0288,uVar1,uVar2);
  return;
}



/* Address: 0x1006a0130 | FUN_1006a0130 */

void FUN_1006a0130(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x90);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x88);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0xb0);
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0xa8);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(undefined1 *)(unaff_x22 + 0x130) = *(undefined1 *)(unaff_x22 + 200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  FUN_10086e2c8(uVar3,uVar5,uVar1,uVar2);
  *(undefined8 *)(unaff_x22 + 0x230) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x238) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x168) = *(undefined8 *)(unaff_x22 + 0x110);
  *(undefined8 *)(unaff_x22 + 0x170) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0x178) = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x128);
  *(undefined1 *)(unaff_x22 + 0x188) = *(undefined1 *)(unaff_x22 + 0x130);
  FUN_1006a4e7c();
  plVar4 = (long *)0x1c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x240) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1006a0210;
  FUN_100a04314(uVar3,uVar5,unaff_x22 + 0x168);
  return;
}



/* Address: 0x1006a0210 | FUN_1006a0210 */

void FUN_1006a0210(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x248) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x240));
  if (unaff_x20 == 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x238);
    _swift_release(*(undefined8 *)(lVar2 + 0x230));
    _swift_release(uVar3);
    pcVar1 = FUN_1006a0358;
  }
  else {
    pcVar1 = FUN_1006a03ac;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a0288 | FUN_1006a0288 */

void FUN_1006a0288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar4;
  if (*(char *)(unaff_x22 + 0xca) == '\x01') {
    puVar3 = &DAT_100fdbdb8;
    puVar2 = puVar3;
    FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
    puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_willThrowTypedImpl
              (unaff_x22 + 0x1a8,puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    *(undefined8 *)(unaff_x22 + 0x1b0) = uVar4;
    FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
    _swift_willThrowTypedImpl(unaff_x22 + 0x1b0,puVar3,puVar1);
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x208));
  FUN_1000fb4c4(uVar4,&DAT_100fdbdc0,&DAT_100c6f538);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x0001006a0354. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a0358 | FUN_1006a0358 */

void FUN_1006a0358(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
  FUN_1006a4e98(unaff_x22 + 0xf0);
  _swift_release(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a03a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a03ac | FUN_1006a03ac */

void FUN_1006a03ac(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x238);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x230));
  _swift_release(uVar4);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar5;
  _swift_errorRetain(uVar5);
  puVar1 = &DAT_100fdbdb8;
  FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
  lVar2 = unaff_x22 + 0xc9;
  _swift_dynamicCast(lVar2,unaff_x22 + 0x1b8,puVar1,&DAT_100f0ace8,0);
  if ((int)lVar2 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x208);
    FUN_1006a4e98(unaff_x22 + 0xf0);
    _swift_release(uVar4);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1b8));
  }
  else {
    puVar3 = *(undefined8 **)(unaff_x22 + 0x248);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x208);
    _swift_errorRelease();
    FUN_1006a4ecc();
    _swift_allocError(&DAT_100f28438,puVar3,0,0);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0xff00000000000000;
    _swift_willThrow();
    FUN_1006a4e98(unaff_x22 + 0xf0);
    _swift_release(uVar4);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x1b8));
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x200));
                    /* WARNING: Could not recover jumptable at 0x0001006a04bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a04c0 | FUN_1006a04c0 */

ulong FUN_1006a04c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  undefined1 auStack_158 [40];
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  long lStack_c8;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [48];
  
  FUN_1005bee50(param_3,auStack_90);
  FUN_1000f8cac(auStack_90,auStack_c0,&DAT_100fdbde8,&DAT_100c6f550);
  _swift_beginAccess(param_4 + 0x20,auStack_100,0,0);
  FUN_100076688(param_4 + 0x20,auStack_e8);
  FUN_10007d048(auStack_e8,local_d0);
  pcVar5 = *(code **)(lStack_c8 + 0x48);
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_2);
  (*pcVar5)(auStack_c0,param_1,param_2,local_d0,lStack_c8);
  FUN_1000fb4c4(auStack_90,&DAT_100fdbde8,&DAT_100c6f550);
  uVar3 = param_4;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = param_4;
  if ((uVar3 & 1) == 0) {
    _swift_beginAccess(param_4 + 0x10,auStack_118,0,0);
    uVar1 = *(undefined8 *)(param_4 + 0x10);
    uVar2 = *(undefined8 *)(param_4 + 0x18);
    _swift_beginAccess(param_4 + 0x20,auStack_130,0,0);
    FUN_100076688(param_4 + 0x20,auStack_158);
    uVar4 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(uVar4 + 0x10) = uVar1;
    *(undefined8 *)(uVar4 + 0x18) = uVar2;
    FUN_100076508(auStack_158,uVar4 + 0x20);
    _swift_bridgeObjectRetain(uVar2);
    _swift_release(param_4);
  }
  _swift_beginAccess(uVar4 + 0x20,auStack_158,0x21,0);
  FUN_100004594(uVar4 + 0x20);
  FUN_100076508(auStack_e8,uVar4 + 0x20);
  _swift_endAccess(auStack_158);
  return uVar4;
}



/* Address: 0x1006a0664 | FUN_1006a0664 */

void FUN_1006a0664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12,
                  undefined8 param_13)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  int *piVar9;
  long unaff_x22;
  code *pcVar10;
  
  *(undefined8 *)(unaff_x22 + 0x2c8) = param_13;
  *(long *)(unaff_x22 + 0x2c0) = param_12;
  *(undefined8 *)(unaff_x22 + 0x2b8) = param_11;
  *(undefined8 *)(unaff_x22 + 0x2b0) = param_10;
  *(undefined8 *)(unaff_x22 + 0x2a8) = param_9;
  *(undefined8 *)(unaff_x22 + 0x2a0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x298) = param_3;
  *(undefined8 *)(unaff_x22 + 0x290) = param_2;
  *(undefined8 *)(unaff_x22 + 0x288) = param_1;
  lVar2 = 0;
  FUN_1006b7d9c();
  *(long *)(unaff_x22 + 0x2d0) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2d8) = uVar3;
  uVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_12,param_11,0x100cbafe4,&TargetProtocolRequirement_100cbb004);
  lVar2 = param_12;
  _swift_getAssociatedConformanceWitness
            (param_12,param_11,uVar4,0x100cbafe4,&TargetProtocolRequirement_100cbaff4);
  lVar5 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,uVar4,0x100cbcb04,&TargetProtocolRequirement_100cbcb0c);
  *(long *)(unaff_x22 + 0x2e0) = lVar5;
  lVar8 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x2e8) = lVar8;
  uVar3 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2f0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x228) = param_5;
  *(undefined8 *)(unaff_x22 + 0x230) = param_6;
  *(undefined8 *)(unaff_x22 + 0x238) = param_4;
  _swift_getAssociatedConformanceWitness
            (param_12,param_11,lVar5,0x100cbafe4,&TargetProtocolRequirement_100cbaffc);
  pcVar10 = *(code **)(param_12 + 0x10);
  _swift_unknownObjectRetain(param_5);
  _swift_retain(param_4);
  (*pcVar10)(uVar3,unaff_x22 + 0x228,lVar5,param_12);
  piVar9 = *(int **)(lVar2 + 0x10);
  uVar6 = 0;
  _swift_checkMetadataState(0,uVar4);
  iVar1 = *piVar9;
  plVar7 = (long *)(ulong)(uint)piVar9[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2f8) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1006a0854;
                    /* WARNING: Could not recover jumptable at 0x0001006a0850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar9))(plVar7,unaff_x22 + 400,param_8,uVar3,uVar6,lVar2);
  return;
}


