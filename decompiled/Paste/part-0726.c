/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007f67b0 | FUN_1007f67b0 */

void FUN_1007f67b0(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 8) + 0x10);
  return;
}



/* Address: 0x1007f67c0 | FUN_1007f67c0 */

undefined1  [16] FUN_1007f67c0(long *param_1,__int64 *param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auVar3 [16];
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  *param_1 = *(long *)(param_3 + 0x10);
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0xc62);
  }
  param_1[2] = (long)pvVar1;
  Swift::ContiguousArray::get_subscript(*param_2,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = FUN_1006333c4;
  return auVar3;
}



/* Address: 0x1007f6844 | FUN_1007f6844 */

void FUN_1007f6844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *unaff_x20;
  uVar4 = unaff_x20[1];
  FUN_1007f6328();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  return;
}



/* Address: 0x1007f6878 | FUN_1007f6878 */

void FUN_1007f6878(void)

{
  ContiguousArray CVar1;
  
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__RandomAccessCollection_100ead140,
             CVar1.unknown);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x1007f68e8 | FUN_1007f68e8 */

bool FUN_1007f68e8(void)

{
  bool bVar1;
  ContiguousArray CVar2;
  
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  return bVar1;
}



/* Address: 0x1007f6944 | FUN_1007f6944 */

void FUN_1007f6944(void)

{
  long unaff_x20;
  
  Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 8));
  return;
}



/* Address: 0x1007f6954 | thunk_FUN_1007f6958 */

void thunk_FUN_1007f6958(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f66bc(param_2,uVar1,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(char *)((long)param_1 + 9) = (char)((ulong)uVar1 >> 8);
  return;
}



/* Address: 0x1007f6958 | FUN_1007f6958 */

void FUN_1007f6958(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f66bc(param_2,uVar1,unaff_x20[1],*(undefined8 *)(param_3 + 0x10),
                *(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(char *)((long)param_1 + 9) = (char)((ulong)uVar1 >> 8);
  return;
}



/* Address: 0x1007f6994 | FUN_1007f6994 */

void FUN_1007f6994(undefined8 *param_1,undefined8 *param_2)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_28;
  
  local_28 = *param_1;
  uStack_38 = param_2[1];
  local_40 = *param_2;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar1.unknown
            );
  FUN_1007e023c(&local_28,&local_40,CVar1.unknown,puVar2);
  return;
}



/* Address: 0x1007f69f8 | FUN_1007f69f8 */

void FUN_1007f69f8(undefined8 param_1,ContiguousArray param_2)

{
  _swift_retain();
  Swift::ContiguousArray::_copyToContiguousArray(param_2);
  return;
}



/* Address: 0x1007f6a20 | FUN_1007f6a20 */

void FUN_1007f6a20(__int64 *param_1,UnsafePointer<undefined> param_2,long param_3)

{
  __int64 count;
  code *pcVar1;
  long unaff_x20;
  
  if (*(undefined **)(unaff_x20 + 0x20) == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f6a78);
    (*pcVar1)();
  }
  if (param_2.unknown != (undefined *)0x0) {
    count = *(long *)(unaff_x20 + 0x28);
    if (param_3 <= *(long *)(unaff_x20 + 0x28)) {
      count = param_3;
    }
    Swift::UnsafeMutablePointer::initialize
              (param_2,count,(UnsafeMutablePointer)*(undefined **)(unaff_x20 + 0x20));
    *param_1 = count;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f6a7c);
  (*pcVar1)();
}



/* Address: 0x1007f6a7c | FUN_1007f6a7c */

void FUN_1007f6a7c(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c7a180,param_1);
  return;
}



/* Address: 0x1007f6a8c | FUN_1007f6a8c */

void FUN_1007f6a8c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a3a0,param_1);
  return;
}



/* Address: 0x1007f6a9c | FUN_1007f6a9c */

void FUN_1007f6a9c(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c7a1e0,param_1);
  return;
}



/* Address: 0x1007f6aac | FUN_1007f6aac */

void FUN_1007f6aac(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a3f0,param_1);
  return;
}



/* Address: 0x1007f6abc | FUN_1007f6abc */

void FUN_1007f6abc(undefined8 param_1)

{
  _swift_getWitnessTable(0x100c7a0c8,param_1);
  return;
}



/* Address: 0x1007f6acc | FUN_1007f6acc */

void FUN_1007f6acc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a450,param_1);
  return;
}



/* Address: 0x1007f6adc | thunk_FUN_1007f6958 */

void thunk_FUN_1007f6958(void)

{
  thunk_FUN_1007f6958();
  return;
}



/* Address: 0x1007f6ae0 | FUN_1007f6ae0 */

undefined1  [16]
FUN_1007f6ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_3;
  uVar4 = param_4;
  FUN_1007f61ec();
  uVar3 = 0;
  FUN_1007fa688(0,param_3,param_4);
  FUN_1007f6b5c(param_1,param_2,uVar3);
  auVar1._8_8_ = uVar4;
  auVar1._0_8_ = uVar2;
  return auVar1;
}



/* Address: 0x1007f6b50 | FUN_1007f6b50 */

void FUN_1007f6b50(undefined8 param_1,undefined8 param_2)

{
  FUN_1007f6b5c(param_1,0,param_2);
  return;
}



/* Address: 0x1007f6b5c | FUN_1007f6b5c */

void FUN_1007f6b5c(ulong param_1,ulong param_2,long param_3)

{
  code *pcVar1;
  ContiguousArray CVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined1 auStack_78 [24];
  
  param_1 = param_1 & ((long)param_1 >> 0x3f ^ 0xffffffffffffffffU);
  uVar6 = *(undefined8 *)(param_3 + 0x10);
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  Swift::ContiguousArray::reserveCapacity(param_1,CVar2);
  uVar4 = *unaff_x20;
  CVar2.unknown = (undefined *)unaff_x20[1];
  uVar8 = *(undefined8 *)(param_3 + 0x18);
  uVar3 = uVar4;
  FUN_1007f9608(uVar4,CVar2.unknown,uVar6,uVar8);
  FUN_1007d7edc();
  uVar7 = param_1;
  if ((param_2 & 1) == 0) {
    FUN_1007f964c(uVar4,CVar2.unknown,uVar6,uVar8);
    uVar7 = uVar4;
  }
  if ((long)param_1 <= (long)uVar3) {
    uVar5 = Swift::ContiguousArray::get_count(CVar2);
    FUN_1007d7edc();
    uVar4 = uVar7;
    if ((long)uVar7 <= (long)param_1) {
      uVar4 = param_1;
    }
    param_1 = uVar5;
    if ((long)uVar5 <= (long)uVar4) {
      param_1 = uVar4;
    }
    if ((long)uVar3 <= (long)param_1) {
      FUN_1007f9544(param_3);
      uVar4 = *unaff_x20;
      uVar3 = uVar4;
      FUN_1007f964c(uVar4,unaff_x20[1],uVar6,uVar8);
      if (uVar3 != uVar7) {
        if (uVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f6cc8);
          (*pcVar1)();
        }
        _swift_beginAccess(uVar4 + 0x10,auStack_78,1,0);
        *(ulong *)(uVar4 + 0x18) = *(ulong *)(uVar4 + 0x18) & 0xffffffffffffffc0 | uVar7 & 0x3f;
      }
      return;
    }
  }
  FUN_1007f9690(param_1,uVar7,param_3);
  return;
}



/* Address: 0x1007f6cc8 | FUN_1007f6cc8 */

void FUN_1007f6cc8(undefined8 param_1,undefined8 param_2,Range<__int64> param_3,
                  ContiguousArray param_4)

{
  Swift::ContiguousArray::get_subscript(param_3,param_4);
  return;
}



/* Address: 0x1007f6cdc | FUN_1007f6cdc */

undefined1  [16]
FUN_1007f6cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Address: 0x1007f6ce8 | FUN_1007f6ce8 */

void FUN_1007f6ce8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1007f6cf0 | FUN_1007f6cf0 */

undefined1  [16]
FUN_1007f6cf0(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auVar4 [16];
  
  FUN_1007f9250();
  uVar3 = (uint)(param_1 < param_4 || param_5 <= param_1);
  lVar1 = 0;
  if (uVar3 == 0) {
    lVar1 = param_1;
  }
  uVar2 = 1;
  if ((param_2 & 0xff) != 1) {
    param_1 = lVar1;
    uVar2 = uVar3;
  }
  auVar4._8_4_ = uVar2;
  auVar4._0_8_ = param_1;
  auVar4._12_4_ = 0;
  return auVar4;
}



/* Address: 0x1007f6d44 | FUN_1007f6d44 */

void FUN_1007f6d44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  local_40 = param_1;
  uStack_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_1007f6da0(0,param_5,param_6);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7a450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a450,uVar1);
  FUN_10068f120(&local_40,uVar1,pTVar2);
  return;
}



/* Address: 0x1007f6da0 | FUN_1007f6da0 */

void FUN_1007f6da0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007f6dac | FUN_1007f6dac */

void FUN_1007f6dac(undefined8 param_1,undefined8 param_2)

{
  FUN_1007f6dc8(param_1,param_2,FUN_1007f6d44);
  return;
}



/* Address: 0x1007f6db8 | thunk_FUN_1007f6d44 */

void thunk_FUN_1007f6d44(void)

{
  FUN_1007f6d44();
  return;
}



/* Address: 0x1007f6dbc | FUN_1007f6dbc */

void FUN_1007f6dbc(undefined8 param_1,undefined8 param_2)

{
  FUN_1007f6dc8(param_1,param_2,thunk_FUN_1007f6d44);
  return;
}



/* Address: 0x1007f6dc8 | FUN_1007f6dc8 */

void FUN_1007f6dc8(long param_1,undefined8 param_2,code *param_3)

{
  undefined8 *unaff_x20;
  
  (*param_3)(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_1 + 0x10),
             *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007f6de0 | FUN_1007f6de0 */

bool FUN_1007f6de0(long param_1,uint param_2,undefined8 param_3,long param_4,long param_5)

{
  FUN_1007f9250();
  return (param_2 & 0xff) != 1 && (param_4 <= param_1 && param_1 < param_5);
}



/* Address: 0x1007f6e24 | FUN_1007f6e24 */

undefined8 FUN_1007f6e24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1007f7c64();
  _swift_release(param_2);
  _swift_release(param_1);
  return uVar1;
}



/* Address: 0x1007f6e68 | FUN_1007f6e68 */

void FUN_1007f6e68(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Range<__int64> param_6,ContiguousArray param_7,
                  undefined8 param_8,undefined8 param_9)

{
  code *pcVar1;
  ArraySlice<undefined> AVar2;
  ContiguousArray CVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  Range<__int64> RVar7;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar6 = 0;
  RVar7.unknown = param_6.unknown;
  if (param_6.unknown != param_7.unknown) {
    CVar3.unknown = param_7.unknown;
    uVar4 = param_5;
    uVar5 = param_8;
    AVar2 = Swift::ContiguousArray::get_subscript(param_6,param_7);
    local_90 = param_8;
    uStack_88 = param_9;
    local_80 = param_2;
    uStack_78 = param_3;
    FUN_1007f6f80(&local_68,FUN_1007f7c98,auStack_a0,AVar2.unknown,CVar3.unknown,uVar4,uVar5,param_8
                  ,PTR___type_metadata_for_Swift_Int_100eac6f8,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    _swift_unknownObjectRelease(AVar2.unknown);
    RVar7.unknown = param_6.unknown + local_68;
    lVar6 = local_68;
    if (SCARRY8((long)param_6.unknown,local_68)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f6f74);
      (*pcVar1)();
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = param_6.unknown;
  param_1[3] = param_7.unknown;
  param_1[4] = RVar7.unknown;
  param_1[5] = lVar6;
  return;
}



/* Address: 0x1007f6f74 | FUN_1007f6f74 */

bool FUN_1007f6f74(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  return param_3 == param_4;
}



/* Address: 0x1007f6f80 | FUN_1007f6f80 */

void FUN_1007f6f80(void)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  long in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  long alStack_50 [4];
  
  lVar2 = *(long *)(in_stack_00000000 + -8);
  lVar1 = -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)((long)alStack_50 + lVar1 + 8) = in_stack_00000008;
  *(undefined1 **)((long)alStack_50 + lVar1 + 0x10) = &stack0xffffffffffffffd0 + lVar1;
  *(long *)((long)alStack_50 + lVar1) = in_stack_00000000;
  FUN_1007f7b6c();
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000010,&stack0xffffffffffffffd0 + lVar1,in_stack_00000000);
  }
  return;
}



/* Address: 0x1007f6ff4 | FUN_1007f6ff4 */

void FUN_1007f6ff4(ArraySlice param_1)

{
  ArraySlice<undefined> AVar1;
  Range<__int64> in_x4;
  ContiguousArray in_x5;
  
  AVar1 = Swift::ContiguousArray::get_subscript(in_x4,in_x5);
  Swift::ArraySlice::_withContiguousStorageIfAvailable(param_1);
  _swift_unknownObjectRelease(AVar1.unknown);
  return;
}



/* Address: 0x1007f709c | FUN_1007f709c */

void FUN_1007f709c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  uVar2 = unaff_x20[2];
  uVar1 = unaff_x20[2];
  param_1[3] = unaff_x20[3];
  param_1[2] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x1007f70b8 | FUN_1007f70b8 */

void FUN_1007f70b8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7a450,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x1007f70ec | FUN_1007f70ec */

void FUN_1007f70ec(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_1007f6de0(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],
                *(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18));
  return;
}



/* Address: 0x1007f7100 | FUN_1007f7100 */

undefined8 FUN_1007f7100(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = uVar1;
  FUN_1007f7c64(uVar1,uVar2,unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  _swift_release(uVar2);
  _swift_release(uVar1);
  return uVar3;
}



/* Address: 0x1007f7150 | FUN_1007f7150 */

undefined8 FUN_1007f7150(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *unaff_x20;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  FUN_1007f6e68(&local_50,param_2,param_3,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],
                *(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  *param_1 = local_50;
  param_1[1] = uStack_48;
  param_1[3] = uStack_38;
  param_1[2] = local_40;
  param_1[4] = local_30;
  return uStack_28;
}



/* Address: 0x1007f71b0 | FUN_1007f71b0 */

void FUN_1007f71b0(void)

{
  FUN_1007f6ff4();
  return;
}



/* Address: 0x1007f71e0 | FUN_1007f71e0 */

undefined1  [16]
FUN_1007f71e0(undefined8 param_1,undefined8 param_2,Range<__int64> param_3,ContiguousArray param_4)

{
  ArraySlice<undefined> AVar1;
  ArraySlice AVar2;
  undefined1 local_60 [16];
  
  AVar1 = Swift::ContiguousArray::get_subscript(param_3,param_4);
  AVar2 = Swift::ArraySlice::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__RandomAccessCollection_100eacc68,
             AVar2.unknown);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  _swift_unknownObjectRelease(AVar1.unknown);
  return local_60;
}



/* Address: 0x1007f7274 | FUN_1007f7274 */

undefined1  [16]
FUN_1007f7274(long param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
             Range<__int64> param_6,ContiguousArray param_7)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  Swift::ContiguousArray::get_subscript(param_6,param_7);
  _swift_unknownObjectRelease();
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f7304);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (((long)uVar1 < 1) && ((long)param_2 < (long)uVar1)) goto LAB_1007f72d8;
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
LAB_1007f72d8:
    lVar3 = 0;
    uVar4 = 1;
    goto LAB_1007f72f0;
  }
  lVar3 = param_1 + param_2;
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007f7308);
    (*pcVar2)();
  }
  uVar4 = 0;
LAB_1007f72f0:
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1007f7308 | FUN_1007f7308 */

void FUN_1007f7308(__int64 param_1,undefined8 param_2,undefined8 param_3,Range<__int64> param_4,
                  ContiguousArray param_5)

{
  ArraySlice<undefined> AVar1;
  
  AVar1 = Swift::ContiguousArray::get_subscript(param_4,param_5);
  Swift::ArraySlice::get_subscript(param_1,(ArraySlice)AVar1.unknown);
  _swift_unknownObjectRelease(AVar1.unknown);
  return;
}



/* Address: 0x1007f7378 | FUN_1007f7378 */

undefined8
FUN_1007f7378(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             Range<__int64> param_5,ContiguousArray param_6)

{
  code *pcVar1;
  
  if ((long)param_5.unknown <= (long)param_6.unknown) {
    Swift::ContiguousArray::get_subscript(param_5,param_6);
    _swift_unknownObjectRelease();
    _swift_retain(param_3);
    _swift_retain(param_4);
    return param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f73ec);
  (*pcVar1)();
}



/* Address: 0x1007f73ec | FUN_1007f73ec */

void FUN_1007f73ec(void)

{
  Range<__int64> in_x6;
  ContiguousArray in_x7;
  
  Swift::ContiguousArray::get_subscript(in_x6,in_x7);
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x1007f7410 | FUN_1007f7410 */

long FUN_1007f7410(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  
  if (!SBORROW8(param_4,param_3)) {
    return param_4 - param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f7420);
  (*pcVar1)();
}



/* Address: 0x1007f7420 | thunk_FUN_1007f6cf0 */

void thunk_FUN_1007f6cf0(void)

{
  FUN_1007f6cf0();
  return;
}



/* Address: 0x1007f7424 | FUN_1007f7424 */

void FUN_1007f7424(void)

{
  Range<__int64> in_x5;
  ContiguousArray in_x6;
  
  Swift::ContiguousArray::get_subscript(in_x5,in_x6);
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x1007f7448 | FUN_1007f7448 */

void FUN_1007f7448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,Range<__int64> param_6,ContiguousArray param_7)

{
  ArraySlice<undefined> AVar1;
  ArraySlice AVar2;
  undefined *puVar3;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  AVar1 = Swift::ContiguousArray::get_subscript(param_6,param_7);
  local_58 = param_2;
  local_50 = param_3;
  uStack_48 = param_1;
  AVar2 = Swift::ArraySlice::typeMetadataAccessor();
  puVar3 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Collection_100eacc70;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Collection_100eacc70,AVar2.unknown);
  FUN_1007e023c(&uStack_48,&local_58,AVar2.unknown,puVar3);
  _swift_unknownObjectRelease(AVar1.unknown);
  return;
}



/* Address: 0x1007f74e4 | thunk_FUN_1007f770c */

void thunk_FUN_1007f770c(void)

{
  FUN_1007f770c();
  return;
}



/* Address: 0x1007f74e8 | FUN_1007f74e8 */

void FUN_1007f74e8(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1007f74f4 | FUN_1007f74f4 */

undefined1  [16] FUN_1007f74f4(long *param_1,__int64 *param_2,long param_3)

{
  undefined *puVar1;
  ArraySlice AVar2;
  long lVar3;
  __int64 _Var4;
  undefined1 auVar5 [16];
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  *param_1 = *(long *)(param_3 + 0x10);
  param_1[1] = lVar3;
  puVar1 = *(undefined **)(lVar3 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc((size_t)puVar1);
  }
  else {
    _swift_coroFrameAlloc(puVar1,0x8af6);
  }
  param_1[2] = (long)puVar1;
  _Var4 = *param_2;
  AVar2.unknown = puVar1;
  FUN_1007f6cc8();
  Swift::ArraySlice::get_subscript(_Var4,AVar2);
  _swift_unknownObjectRelease(AVar2.unknown);
  auVar5._8_8_ = puVar1;
  auVar5._0_8_ = FUN_1006333c4;
  return auVar5;
}



/* Address: 0x1007f75b0 | FUN_1007f75b0 */

void FUN_1007f75b0(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  
  if ((long)unaff_x20[2] <= (long)unaff_x20[3]) {
    uVar1 = *unaff_x20;
    uVar3 = unaff_x20[1];
    uVar2 = *param_2;
    uVar4 = param_2[1];
    FUN_1007f6cc8(param_2,uVar3,unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_3 + 0x10));
    _swift_unknownObjectRelease();
    *param_1 = uVar1;
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    _swift_retain(uVar1);
    _swift_retain(uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1007f7618);
  (*pcVar5)();
}



/* Address: 0x1007f7618 | FUN_1007f7618 */

void FUN_1007f7618(undefined8 param_1)

{
  ArraySlice AVar1;
  
  FUN_1007f6cc8();
  AVar1 = Swift::ArraySlice::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__RandomAccessCollection_100eacc68,
             AVar1.unknown);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x1007f76a8 | FUN_1007f76a8 */

bool FUN_1007f76a8(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x10) == *(long *)(unaff_x20 + 0x18);
}



/* Address: 0x1007f76b8 | FUN_1007f76b8 */

long FUN_1007f76b8(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (!SBORROW8(*(long *)(unaff_x20 + 0x18),*(long *)(unaff_x20 + 0x10))) {
    return *(long *)(unaff_x20 + 0x18) - *(long *)(unaff_x20 + 0x10);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007f76cc);
  (*pcVar1)();
}



/* Address: 0x1007f76cc | thunk_FUN_1007f76d0 */

void thunk_FUN_1007f76d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f6cf0(param_2,uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_3 + 0x10)
                ,*(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Address: 0x1007f76d0 | FUN_1007f76d0 */

void FUN_1007f76d0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_1007f6cf0(param_2,uVar1,unaff_x20[1],unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_3 + 0x10)
                ,*(undefined8 *)(param_3 + 0x18));
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)uVar1;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Address: 0x1007f770c | FUN_1007f770c */

void FUN_1007f770c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_4;
  FUN_1007f6cc8(param_2,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_5 + 0x10));
  FUN_1007dee60(uVar1,param_3,uVar2);
  _swift_unknownObjectRelease(param_2);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x1007f7784 | FUN_1007f7784 */

void FUN_1007f7784(undefined8 param_1,undefined8 param_2,long param_3)

{
  long unaff_x20;
  
  FUN_1007f6cc8(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_3 + 0x10));
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x1007f77a8 | FUN_1007f77a8 */

void FUN_1007f77a8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ArraySlice AVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar5 = *param_1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1007f6cc8(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(param_3 + 0x10));
  local_58 = uVar1;
  local_50 = uVar2;
  uStack_48 = uVar5;
  AVar3 = Swift::ArraySlice::typeMetadataAccessor();
  puVar4 = PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Collection_100eacc70;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ArraySlice<undefined>_>Swift__Collection_100eacc70,AVar3.unknown);
  FUN_1007e023c(&uStack_48,&local_58,AVar3.unknown,puVar4);
  _swift_unknownObjectRelease(param_1);
  return;
}


