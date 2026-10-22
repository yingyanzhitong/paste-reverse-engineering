/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10068abec | thunk_FUN_10068cb10 */

void thunk_FUN_10068cb10(void)

{
  FUN_10068cb10();
  return;
}



/* Address: 0x10068abf0 | FUN_10068abf0 */

undefined8 FUN_10068abf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_50 [4];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  Swift::UnsafeMutableBufferPointer::_init(0);
  lVar1 = 0;
  FUN_10068ef90(0,uVar2);
  pcVar3 = *(code **)(*(long *)(lVar1 + -8) + 0x20);
  (*pcVar3)(local_50);
  (*pcVar3)();
  return local_50[0];
}



/* Address: 0x10068ac74 | FUN_10068ac74 */

undefined1  [16] FUN_10068ac74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_3;
  return auVar1 << 0x40;
}



/* Address: 0x10068ac80 | FUN_10068ac80 */

void FUN_10068ac80(ulong param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 *unaff_x20;
  
  if (param_1 < (ulong)unaff_x20[2] && param_2 < (ulong)unaff_x20[2]) {
    lVar5 = unaff_x20[1];
    lVar1 = unaff_x20[3] + param_1;
    lVar3 = 0;
    if (lVar5 <= lVar1) {
      lVar3 = lVar5;
    }
    lVar2 = unaff_x20[3] + param_2;
    lVar4 = 0;
    if (lVar5 <= lVar2) {
      lVar4 = lVar5;
    }
    Swift::UnsafeMutableBufferPointer::swapAt(lVar1 - lVar3,lVar2 - lVar4,(undefined *)*unaff_x20);
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10068acc8);
  (*pcVar6)();
}



/* Address: 0x10068acc8 | FUN_10068acc8 */

void FUN_10068acc8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10068ef90(0,*(undefined8 *)(param_2 + 0x10));
  FUN_10068cc24(param_1,uVar1);
  return;
}



/* Address: 0x10068acf8 | FUN_10068acf8 */

void FUN_10068acf8(long param_1,long param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 8) < param_1) {
    uVar1 = 0;
    FUN_10068ef90(0,*(undefined8 *)(param_2 + 0x10));
    FUN_10068cc24(param_1,uVar1);
    return;
  }
  return;
}



/* Address: 0x10068ad40 | FUN_10068ad40 */

void FUN_10068ad40(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068ad44);
  (*pcVar1)();
}



/* Address: 0x10068ad44 | FUN_10068ad44 */

void FUN_10068ad44(undefined8 *param_1,long param_2)

{
  FUN_10068cb10(*param_1,param_1[1],param_1[2],param_1[3],*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x10068ad5c | FUN_10068ad5c */

void FUN_10068ad5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10068ad68 | FUN_10068ad68 */

void FUN_10068ad68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10068ad74 | FUN_10068ad74 */

void FUN_10068ad74(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10068ad80 | FUN_10068ad80 */

undefined * FUN_10068ad80(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_10068ef90(0,*param_1);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x10068ad8c | FUN_10068ad8c */

void FUN_10068ad8c(undefined8 *param_1)

{
  FUN_10068ef90(0,*param_1);
  return;
}



/* Address: 0x10068adb8 | FUN_10068adb8 */

void FUN_10068adb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(param_3 + 0x10));
  FUN_10068905c(param_1,param_2,uVar1);
  return;
}



/* Address: 0x10068adf8 | thunk_FUN_1006891b4 */

void thunk_FUN_1006891b4(void)

{
  FUN_1006891b4();
  return;
}



/* Address: 0x10068adfc | thunk_FUN_100689358 */

void thunk_FUN_100689358(void)

{
  FUN_100689358();
  return;
}



/* Address: 0x10068ae00 | FUN_10068ae00 */

void FUN_10068ae00(undefined *param_1,undefined8 param_2,undefined8 param_3,
                  UnsafeMutableBufferPointer param_4,long param_5,undefined8 param_6,
                  undefined8 param_7)

{
  undefined8 uVar1;
  UnsafeMutableBufferPointer UVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  long unaff_x21;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *(long *)(param_5 + -8);
  uVar3 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_a0 + -uVar3;
  lVar6 = (long)puVar7 - uVar3;
  if ((long)param_1 < 1) {
    Swift::UnsafeMutableBufferPointer::_init(0);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10068af68);
      (*pcVar5)();
    }
  }
  else {
    UVar2.unknown = param_4.unknown;
    local_90 = param_3;
    uStack_88 = param_6;
    local_80 = (undefined *)Swift::UnsafeMutableBufferPointer::allocate((__int64)param_1,param_4);
    local_70 = 0;
    uStack_68 = 0;
    puStack_78 = UVar2.unknown;
    if (UVar2.unknown < param_1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10068af6c);
      (*pcVar5)();
    }
    uVar1 = 0;
    local_98 = param_7;
    FUN_10068ef90(0,param_4.unknown);
    FUN_10068c004(param_1,param_2,local_90,uVar1,param_5,uStack_88,puVar7);
    if (unaff_x21 != 0) {
      pcVar5 = *(code **)(lVar4 + 0x20);
      (*pcVar5)(lVar6,puVar7,param_5);
      (*pcVar5)(lVar6 - uVar3,lVar6,param_5);
      FUN_10068cb10(local_80,puStack_78,local_70,uStack_68,param_4.unknown);
      (*pcVar5)(local_98,lVar6 - uVar3,param_5);
    }
  }
  return;
}



/* Address: 0x10068af6c | FUN_10068af6c */

void FUN_10068af6c(undefined8 param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 *puStack_48;
  undefined8 local_40;
  ulong uStack_38;
  
  if (0 < (long)param_2) {
    uVar3 = *(undefined8 *)(param_4 + 0x10);
    puStack_48 = &local_40;
    local_50 = uVar3;
    local_40 = param_1;
    uStack_38 = param_2;
    if (*(ulong *)(unaff_x20 + 0x10) < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b01c);
      (*pcVar1)();
    }
    if (*(long *)(unaff_x20 + 8) - *(ulong *)(unaff_x20 + 0x10) < param_2) {
      FUN_10068bde0(param_2,param_4);
    }
    uVar2 = 0;
    FUN_10068ef90(0,uVar3);
    FUN_10068c5ec(param_2,param_3,FUN_100689a9c,auStack_60,uVar2,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  return;
}



/* Address: 0x10068b01c | FUN_10068b01c */

void FUN_10068b01c(UnsafeMutableBufferPointer<undefined> param_1,undefined8 param_2,
                  undefined8 param_3,undefined8 param_4)

{
  UnsafeBufferPointer<undefined> UVar1;
  
  UVar1 = Swift::UnsafeBufferPointer::init(param_1);
  FUN_10068af6c(UVar1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x10068b054 | FUN_10068b054 */

void FUN_10068b054(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(param_4 + 0x10);
  FUN_10068978c(FUN_10068b338,auStack_50,param_1,param_2,local_40,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068b0c0 | FUN_10068b0c0 */

void FUN_10068b0c0(ulong param_1,undefined8 param_2,ulong param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  code *pcVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  ulong local_b8;
  ulong local_b0;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  char local_61;
  
  lVar2 = 0;
  local_b8 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_5,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  local_c0 = *(long *)(lVar2 + -8);
  uVar4 = *(long *)(local_c0 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_d0 + -uVar4;
  lVar6 = (long)puVar7 - uVar4;
  uVar8 = *(undefined8 *)(param_4 + 0x10);
  local_c8 = param_4;
  local_b0 = param_1;
  local_90 = uVar8;
  uStack_88 = param_5;
  local_80 = param_6;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_61 == '\x01') {
    Swift::Collection::_get_startIndex();
    if (((long)local_b8 < 0) || (*(ulong *)(unaff_x20 + 0x10) < local_b0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10068b2d0);
      local_90 = uVar8;
      uStack_88 = param_5;
      local_80 = param_6;
      (*pcVar5)();
    }
    local_90 = uVar8;
    uStack_88 = param_5;
    local_80 = param_6;
    if (local_b8 != 0) {
      if (*(long *)(unaff_x20 + 8) - *(ulong *)(unaff_x20 + 0x10) < local_b8) {
        FUN_10068bde0(local_b8,local_c8);
      }
      uVar4 = local_b8;
      uVar3 = 0;
      FUN_10068ef90(0,uVar8);
      FUN_10068c5ec(uVar4,local_b0,FUN_10068a0cc,auStack_a0,uVar3,
                    PTR___type_metadata_for_Swift_Never_100eadc38,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    }
    Swift::Collection::_get_endIndex();
    _swift_getAssociatedConformanceWitness
              (param_6,param_5,lVar2,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
              );
    bVar1 = Swift::Equatable::___infix(lVar6,puVar7,lVar2,*(undefined8 *)(param_6 + 8));
    pcVar5 = *(code **)(local_c0 + 8);
    (*pcVar5)(puVar7,lVar2);
    if (!bVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10068b2d4);
      (*pcVar5)();
    }
    (*pcVar5)(lVar6,lVar2);
  }
  return;
}



/* Address: 0x10068b2d4 | FUN_10068b2d4 */

void FUN_10068b2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  __int64 _Var1;
  
  _Var1 = Swift::Collection::get_count();
  FUN_10068b0c0(param_2,param_1,_Var1,param_3,param_4,param_5);
  return;
}



/* Address: 0x10068b338 | FUN_10068b338 */

void FUN_10068b338(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = 0;
  FUN_10068be4c(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10068af6c(param_1,param_2,uVar2,uVar1);
  return;
}



/* Address: 0x10068b398 | FUN_10068b398 */

void FUN_10068b398(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = 0;
  FUN_10068be4c(0,*(undefined8 *)(unaff_x20 + 0x10));
  FUN_10068af6c(param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x10068b3f8 | FUN_10068b3f8 */

void FUN_10068b3f8(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  UnsafeBufferPointer<undefined> UVar3;
  long lVar4;
  long *unaff_x20;
  __int64 start;
  
  if (-1 < param_1) {
    lVar4 = unaff_x20[1];
    lVar1 = lVar4;
    if (param_1 <= lVar4) {
      lVar1 = param_1;
    }
    if (lVar1 < 1) {
      start = 0;
    }
    else {
      lVar4 = lVar4 - lVar1;
      start = *unaff_x20;
      UVar3 = Swift::UnsafeBufferPointer::_init
                        (start + *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x48) * lVar1
                        );
      *unaff_x20 = (long)UVar3.unknown;
      unaff_x20[1] = lVar4;
    }
    Swift::UnsafeBufferPointer::_init(start);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10068b478);
  (*pcVar2)();
}



/* Address: 0x10068b478 | FUN_10068b478 */

void FUN_10068b478(ulong param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                  long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  long unaff_x21;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [8];
  long local_68;
  undefined8 local_60;
  
  local_68 = *(long *)(param_7 + -8);
  lVar2 = -(*(long *)(local_68 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (((long)(param_3 | param_1) < 0) || (*(long *)(unaff_x20 + 0x10) < param_2)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10068b588);
    (*pcVar3)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10068b58c);
    (*pcVar3)();
  }
  lVar1 = param_3 - (param_2 - param_1);
  if (!SBORROW8(param_3,param_2 - param_1)) {
    local_60 = param_8;
    if (*(long *)(unaff_x20 + 8) - *(long *)(unaff_x20 + 0x10) < lVar1) {
      FUN_10068bde0(lVar1,param_6);
    }
    uVar4 = 0;
    FUN_10068ef90(0,*(undefined8 *)(param_6 + 0x10));
    *(undefined1 **)((long)auStack_80 + lVar2) = auStack_70 + lVar2;
    FUN_10068c958(param_1,param_2,param_3,param_4,param_5,uVar4,param_7,local_60);
    if (unaff_x21 != 0) {
      (**(code **)(local_68 + 0x20))(param_9,auStack_70 + lVar2,param_7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10068b590);
  (*pcVar3)();
}



/* Address: 0x10068b590 | FUN_10068b590 */

void FUN_10068b590(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 auStack_50 [16];
  undefined8 local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_40 = *(undefined8 *)(param_5 + 0x10);
  puStack_38 = &local_30;
  local_30 = param_3;
  uStack_28 = param_4;
  FUN_10068b478(param_1,param_2,param_4,FUN_10068ba04,auStack_50,param_5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068b5f0 | FUN_10068b5f0 */

void FUN_10068b5f0(long *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  long unaff_x21;
  long local_58 [3];
  long local_40;
  undefined8 uStack_38;
  
  local_40 = param_3;
  uStack_38 = param_2;
  if (*param_1 == 0) {
    local_58[0] = param_1[2];
  }
  else {
    local_58[0] = param_1[2];
    if (*(long *)(*(long *)(param_3 + -8) + 0x48) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b6d4);
      (*pcVar1)();
    }
  }
  Swift::UnsafeMutableBufferPointer::_init(*param_1);
  FUN_10068ba40();
  if (unaff_x21 != 0) {
    FUN_10068bab4(local_58,param_1,param_3,PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b704);
    (*pcVar1)();
  }
  if (local_58[0] < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b6cc);
    (*pcVar1)();
  }
  if (local_58[0] <= param_1[1]) {
    param_1[2] = local_58[0];
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b6d0);
  (*pcVar1)();
}



/* Address: 0x10068b704 | FUN_10068b704 */

void FUN_10068b704(undefined8 param_1,undefined8 param_2,
                  UnsafeMutableBufferPointer<undefined> param_3,undefined8 param_4,long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined **ppuStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(param_5 + 0x10);
  local_50 = (undefined *)Swift::UnsafeBufferPointer::init(param_3);
  ppuStack_58 = &local_50;
  local_60 = uVar1;
  uStack_48 = param_4;
  FUN_10068b478(param_1,param_2,param_4,FUN_10068ba04,auStack_70,param_5,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068b794 | FUN_10068b794 */

void FUN_10068b794(void)

{
  long in_x4;
  undefined1 auStack_50 [16];
  undefined8 local_40;
  
  local_40 = *(undefined8 *)(in_x4 + 0x10);
  FUN_10068978c(FUN_10068ba20,auStack_50);
  return;
}



/* Address: 0x10068b7f0 | FUN_10068b7f0 */

void FUN_10068b7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar1 = 0;
  FUN_10068be4c(0,param_6);
  local_60 = *(undefined8 *)(lVar1 + 0x10);
  puStack_58 = &local_50;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_10068b478(param_4,param_5,param_2,FUN_10068ba04,auStack_70,lVar1,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x10068b890 | FUN_10068b890 */

void FUN_10068b890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  FUN_10068bad8();
                    /* WARNING: Could not recover jumptable at 0x00010068b8c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_6 + -8) + 8))(param_3,param_6);
  return;
}



/* Address: 0x10068b8cc | FUN_10068b8cc */

void FUN_10068b8cc(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 *puStack_58;
  undefined8 local_50;
  long lStack_48;
  
  if (param_2 == param_3) {
    lVar2 = 0;
    FUN_10068be4c(0,param_7);
    local_60 = *(undefined8 *)(lVar2 + 0x10);
    puStack_58 = &local_50;
    local_50 = param_1;
    lStack_48 = param_2;
    FUN_10068b478(param_5,param_6,param_2,FUN_10068ba04,auStack_70,lVar2,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068b974);
  (*pcVar1)();
}



/* Address: 0x10068b974 | FUN_10068b974 */

void FUN_10068b974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  __int64 _Var1;
  
  _Var1 = Swift::Collection::get_count();
  FUN_10068bad8(param_1,param_2,param_3,_Var1,param_4,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00010068ba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_3,param_5);
  return;
}



/* Address: 0x10068ba04 | FUN_10068ba04 */

void FUN_10068ba04(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10068b5f0(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10),param_2)
  ;
  return;
}



/* Address: 0x10068ba20 | FUN_10068ba20 */

void FUN_10068ba20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10068b7f0(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),param_3);
  return;
}



/* Address: 0x10068ba40 | FUN_10068ba40 */

void FUN_10068ba40(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(param_7 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(param_1,param_2,param_5,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0)
            );
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000008,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
               param_7);
  }
  return;
}



/* Address: 0x10068bab4 | FUN_10068bab4 */

void FUN_10068bab4(long *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = *param_1;
  if (lVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068bad4);
    (*pcVar1)();
  }
  if (lVar2 <= *(long *)(param_2 + 8)) {
    *(long *)(param_2 + 0x10) = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068bad8);
  (*pcVar1)();
}



/* Address: 0x10068bad8 | FUN_10068bad8 */

void FUN_10068bad8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  undefined1 *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined1 *local_e0;
  undefined8 local_d8;
  long local_d0;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  char local_61;
  
  lVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_7,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0 = auStack_f0 + -uVar6;
  local_e8 = (long)local_e0 - uVar6;
  uVar8 = *(undefined8 *)(param_5 + 0x10);
  local_d8 = param_4;
  local_d0 = param_5;
  local_a0 = uVar8;
  uStack_98 = param_6;
  local_90 = param_7;
  uStack_88 = param_4;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  lVar1 = local_e8;
  if (local_61 == '\x01') {
    Swift::Collection::_get_startIndex();
    local_a0 = uVar8;
    uStack_98 = param_6;
    local_90 = param_7;
    uStack_88 = param_3;
    FUN_10068b478(param_1,param_2,local_d8,FUN_10068a0cc,auStack_b0,local_d0,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
    puVar2 = local_e0;
    Swift::Collection::_get_endIndex();
    _swift_getAssociatedConformanceWitness
              (param_7,param_6,lVar4,
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
              );
    bVar3 = Swift::Equatable::___infix(lVar1,puVar2,lVar4,*(undefined8 *)(param_7 + 8));
    pcVar7 = *(code **)(lVar5 + 8);
    (*pcVar7)(puVar2,lVar4);
    if (!bVar3) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10068bcc0);
      (*pcVar7)();
    }
    (*pcVar7)(lVar1,lVar4);
  }
  return;
}



/* Address: 0x10068bcc0 | FUN_10068bcc0 */

void FUN_10068bcc0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10068b8cc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10068bcf0 | FUN_10068bcf0 */

void FUN_10068bcf0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *unaff_x20;
  
  FUN_10068cb10(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],*(undefined8 *)(param_5 + 0x10));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  unaff_x20[3] = param_4;
  return;
}



/* Address: 0x10068bd40 | FUN_10068bd40 */

void FUN_10068bd40(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(param_3 + 0x10));
  FUN_10068ac80(param_1,param_2,uVar1);
  return;
}



/* Address: 0x10068bd80 | FUN_10068bd80 */

void FUN_10068bd80(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(param_2 + 0x10));
  FUN_10068acc8(param_1,uVar1);
  return;
}



/* Address: 0x10068bdb0 | FUN_10068bdb0 */

void FUN_10068bdb0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10068ad74(0,*(undefined8 *)(param_2 + 0x10));
  FUN_10068acf8(param_1,uVar1);
  return;
}



/* Address: 0x10068bde0 | FUN_10068bde0 */

void FUN_10068bde0(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  
  uVar1 = *(long *)(unaff_x20 + 0x10) + param_1;
  if (!SCARRY8(*(long *)(unaff_x20 + 0x10),param_1)) {
    uVar4 = *(long *)(unaff_x20 + 8) * 3 + 1U >> 1;
    if ((long)uVar4 <= (long)uVar1) {
      uVar4 = uVar1;
    }
    uVar3 = 0;
    FUN_10068ad74(0,*(undefined8 *)(param_2 + 0x10));
    FUN_10068acc8(uVar4,uVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10068be34);
  (*pcVar2)();
}



/* Address: 0x10068be34 | FUN_10068be34 */

void FUN_10068be34(undefined8 *param_1,long param_2)

{
  thunk_FUN_10068cb10(*param_1,param_1[1],param_1[2],param_1[3],*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x10068be4c | FUN_10068be4c */

void FUN_10068be4c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10068be58 | FUN_10068be58 */

undefined * FUN_10068be58(undefined8 *param_1)

{
  undefined *puVar1;
  
  if (PTR__swift_runtimeSupportsNoncopyableTypes_100eae408 != (undefined *)0x0) {
    puVar1 = (undefined *)0x0;
    FUN_10068ad74(0,*param_1);
    return puVar1;
  }
  return PTR___type_metadata_for____100eae0c8 + 8;
}



/* Address: 0x10068be64 | FUN_10068be64 */

void FUN_10068be64(undefined8 *param_1)

{
  FUN_10068ad74(0,*param_1);
  return;
}



/* Address: 0x10068be90 | FUN_10068be90 */

undefined1  [16] FUN_10068be90(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x40;
  return auVar1;
}



/* Address: 0x10068bef0 | FUN_10068bef0 */

undefined1  [16] FUN_10068bef0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  auVar1._8_8_ = 0xe100000000000000;
  auVar1._0_8_ = 0x40;
  return auVar1;
}



/* Address: 0x10068bf54 | thunk_FUN_10068bf58 */

void thunk_FUN_10068bf58(void)

{
  undefined8 uVar1;
  
  if (DAT_100fda418 != 0) {
    return;
  }
  uVar1 = 0x100c6dd20;
  _swift_getWitnessTable(0x100c6dd20,&DAT_100ef5230);
  DAT_100fda418 = uVar1;
  return;
}



/* Address: 0x10068bf58 | FUN_10068bf58 */

void FUN_10068bf58(void)

{
  undefined8 uVar1;
  
  if (DAT_100fda418 != 0) {
    return;
  }
  uVar1 = 0x100c6dd20;
  _swift_getWitnessTable(0x100c6dd20,&DAT_100ef5230);
  DAT_100fda418 = uVar1;
  return;
}



/* Address: 0x10068bf98 | FUN_10068bf98 */

undefined1  [16] FUN_10068bf98(void)

{
  return ZEXT816(0x100ef5230);
}



/* Address: 0x10068bfa8 | FUN_10068bfa8 */

undefined1  [16] FUN_10068bfa8(ulong param_1,long param_2,long param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068bff4);
    (*pcVar1)();
  }
  if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10068bff8);
    (*pcVar1)();
  }
  if ((param_1 == 0) || (lVar2 = param_3, param_1 <= (ulong)(param_3 - param_2))) {
    lVar2 = param_2 + param_1;
    if (SCARRY8(param_2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068c000);
      (*pcVar1)();
    }
    if ((lVar2 < param_2) || (param_3 < lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10068c004);
      (*pcVar1)();
    }
  }
  if (param_2 <= lVar2) {
    auVar3._8_8_ = lVar2;
    auVar3._0_8_ = param_2;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068bffc);
  (*pcVar1)();
}



/* Address: 0x10068c004 | FUN_10068c004 */

/* WARNING: Removing unreachable block (ram,0x00010068c388) */
/* WARNING: Removing unreachable block (ram,0x00010068c408) */
/* WARNING: Removing unreachable block (ram,0x00010068c3d4) */
/* WARNING: Removing unreachable block (ram,0x00010068c4a8) */
/* WARNING: Removing unreachable block (ram,0x00010068c3d8) */
/* WARNING: Removing unreachable block (ram,0x00010068c3e0) */
/* WARNING: Removing unreachable block (ram,0x00010068c40c) */
/* WARNING: Removing unreachable block (ram,0x00010068c498) */
/* WARNING: Removing unreachable block (ram,0x00010068c414) */

void FUN_10068c004(long param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  Optional OVar3;
  UnsafeMutableBufferPointer<undefined> UVar4;
  UnsafeMutableBufferPointer UVar5;
  UnsafeMutableBufferPointer<undefined> UVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *unaff_x20;
  code *pcVar11;
  long unaff_x21;
  undefined8 uVar12;
  long lVar13;
  long local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  long local_130;
  long local_128;
  undefined8 local_120;
  long local_118;
  long local_110;
  long local_108;
  undefined8 local_100;
  undefined8 local_f8;
  code *local_f0;
  long local_e8;
  undefined *local_e0;
  long lStack_d8;
  long local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined *local_a8;
  long lStack_a0;
  byte local_98;
  UnsafeBufferPointer<undefined> local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_118 = *(long *)(param_5 + -8);
  uVar9 = *(long *)(local_118 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_140 = (long)&local_150 - uVar9;
  local_150 = local_140 - uVar9;
  local_148 = local_150 - uVar9;
  lVar10 = local_148 - uVar9;
  local_130 = lVar10 - uVar9;
  local_128 = local_130 - uVar9;
  lVar13 = unaff_x20[2];
  local_110 = param_5;
  if (SCARRY8(lVar13,param_1)) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c48c);
    (*pcVar11)();
  }
  if (lVar13 + param_1 < lVar13) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c490);
    (*pcVar11)();
  }
  uVar12 = *(undefined8 *)(param_4 + 0x10);
  local_120 = param_7;
  local_f8 = param_3;
  FUN_10068d098(&local_90,lVar13,lVar13 + param_1,*unaff_x20,unaff_x20[1],lVar13,unaff_x20[3],uVar12
               );
  lVar8 = lStack_88;
  UVar4 = Swift::UnsafeMutableBufferPointer::init(local_90);
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  local_b0 = local_70;
  local_e8 = lVar10;
  local_d0 = uVar12;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar3 = Swift::Optional::typeMetadataAccessor();
  local_f0 = param_2;
  UVar5 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_a8,FUN_100688370,&local_e0,OVar3.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar5.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar2 = local_e8;
  local_138 = local_a8;
  lVar10 = 0;
  UVar6 = UVar4;
  local_108 = lVar8;
  local_100 = uVar12;
  FUN_10060ed88();
  pcVar11 = local_f0;
  local_e0 = UVar6.unknown;
  lStack_d8 = lVar8;
  local_d0 = lVar10;
  (*local_f0)(&local_e0,lVar2);
  uVar12 = local_100;
  lVar8 = local_110;
  lVar10 = local_130;
  puVar1 = local_138;
  if (unaff_x21 == 0) {
    local_e8 = CONCAT44(local_e8._4_4_,(uint)local_98);
    if (UVar4.unknown == (undefined *)0x0) {
      if (local_e0 != (undefined *)0x0) goto LAB_10068c4a4;
    }
    else {
      if (local_e0 == (undefined *)0x0) {
LAB_10068c4a4:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c4a8);
        (*pcVar11)();
      }
      if (UVar4.unknown != local_e0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c274);
        (*pcVar11)();
      }
    }
    if (local_108 != lStack_d8) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c498);
      (*pcVar11)();
    }
    unaff_x20[2] = unaff_x20[2] + local_d0;
    FUN_10060ee44(0,0,0,local_100);
    if (((unaff_x20[2] == local_108 + lVar13) && ((int)local_e8 != 1)) && (lStack_a0 != 0)) {
      lVar13 = 0;
      puVar7 = puVar1;
      lVar10 = lStack_a0;
      FUN_10060ed88();
      local_e0 = puVar7;
      lStack_d8 = lVar10;
      local_d0 = lVar13;
      (*pcVar11)(&local_e0,local_140);
      if (puVar1 == (undefined *)0x0) {
        if (local_e0 != (undefined *)0x0) goto LAB_10068c4ac;
      }
      else {
        if (local_e0 == (undefined *)0x0) {
LAB_10068c4ac:
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c4b0);
          (*pcVar11)();
        }
        if (puVar1 != local_e0) {
                    /* WARNING: Does not return */
          pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c400);
          (*pcVar11)();
        }
      }
      if (lStack_a0 != lStack_d8) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c4a0);
        (*pcVar11)();
      }
      unaff_x20[2] = unaff_x20[2] + local_d0;
      FUN_10060ee44(0,0,0,uVar12);
    }
  }
  else {
    pcVar11 = *(code **)(local_118 + 0x20);
    (*pcVar11)(local_130,lVar2,local_110);
    lVar13 = local_128;
    (*pcVar11)(local_128,lVar10,lVar8);
    if (UVar4.unknown == (undefined *)0x0) {
      if (local_e0 != (undefined *)0x0) goto LAB_10068c4a0;
    }
    else {
      if (local_e0 == (undefined *)0x0) {
LAB_10068c4a0:
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c4a4);
        (*pcVar11)();
      }
      if (UVar4.unknown != local_e0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c248);
        (*pcVar11)();
      }
    }
    if (local_108 != lStack_d8) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10068c494);
      (*pcVar11)();
    }
    unaff_x20[2] = unaff_x20[2] + local_d0;
    FUN_10060ee44(0,0,0,local_100);
    (*pcVar11)(local_120,lVar13,lVar8);
  }
  return;
}



/* Address: 0x10068c4b0 | FUN_10068c4b0 */

void FUN_10068c4b0(long param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  UnsafeMutableBufferPointer<undefined> UVar1;
  
  if (param_2 != 0) {
    param_5 = param_5 + param_1;
    if (param_5 < param_3) {
      param_5 = *(long *)(*(long *)(param_6 + -8) + 0x48) * param_5;
    }
    else {
      param_5 = *(long *)(*(long *)(param_6 + -8) + 0x48) * (param_5 - param_3);
    }
    Swift::UnsafeBufferPointer::_init(param_2 + param_5);
    return;
  }
  UVar1 = Swift::UnsafeMutableBufferPointer::_init(0);
  Swift::UnsafeBufferPointer::init(UVar1);
  return;
}



/* Address: 0x10068c534 | FUN_10068c534 */

void FUN_10068c534(undefined8 *param_1,long param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  UnsafeBufferPointer<undefined> UVar1;
  UnsafeBufferPointer<undefined> UVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  
  if (param_2 == 0) {
    param_4 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_6 + -8) + 0x48) * param_5;
    param_3 = param_3 - param_5;
    lVar3 = param_4 - param_3;
    if (lVar3 != 0 && param_3 <= param_4) {
      UVar1 = Swift::UnsafeBufferPointer::_init(lVar4 + param_2);
      UVar2 = Swift::UnsafeBufferPointer::_init(param_2);
      uVar5 = 0;
      param_4 = param_3;
      goto LAB_10068c5cc;
    }
    lVar4 = lVar4 + param_2;
  }
  UVar1 = Swift::UnsafeBufferPointer::_init(lVar4);
  UVar2.unknown = (undefined *)0x0;
  lVar3 = 0;
  uVar5 = 1;
LAB_10068c5cc:
  *param_1 = UVar1.unknown;
  param_1[1] = param_4;
  param_1[2] = UVar2.unknown;
  param_1[3] = lVar3;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return;
}



/* Address: 0x10068c5ec | FUN_10068c5ec */

/* WARNING: Removing unreachable block (ram,0x00010068c830) */
/* WARNING: Removing unreachable block (ram,0x00010068c894) */
/* WARNING: Removing unreachable block (ram,0x00010068c868) */
/* WARNING: Removing unreachable block (ram,0x00010068c950) */
/* WARNING: Removing unreachable block (ram,0x00010068c86c) */
/* WARNING: Removing unreachable block (ram,0x00010068c874) */
/* WARNING: Removing unreachable block (ram,0x00010068c898) */
/* WARNING: Removing unreachable block (ram,0x00010068c940) */
/* WARNING: Removing unreachable block (ram,0x00010068c8a0) */

void FUN_10068c5ec(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 unaff_x20;
  code *pcVar7;
  long unaff_x21;
  long lVar8;
  long lVar9;
  undefined1 auStack_100 [8];
  long local_f8;
  undefined1 *local_f0;
  long local_e8;
  undefined8 local_e0;
  long local_d8;
  undefined8 uStack_d0;
  long local_a0;
  long lStack_98;
  long local_90;
  long local_88;
  long lStack_80;
  long local_78;
  long lStack_70;
  char local_68;
  long local_58;
  
  lVar9 = *(long *)(param_6 + -8);
  uVar5 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_f0 = auStack_100 + -uVar5;
  local_f8 = (long)local_f0 - uVar5;
  local_e8 = local_f8 - uVar5;
  lVar6 = local_e8 - uVar5;
  lVar8 = lVar6 - uVar5;
  if (0 < param_1) {
    local_e0 = param_8;
    local_d8 = param_1;
    uStack_d0 = param_2;
    FUN_10068d4e0(&local_88,param_1,param_2,param_5);
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    lVar3 = 0;
    lVar1 = local_88;
    lVar2 = lStack_80;
    FUN_10060ed88();
    local_a0 = lVar1;
    lStack_98 = lVar2;
    local_90 = lVar3;
    (*param_3)(&local_a0,lVar6);
    lVar1 = local_90;
    if (unaff_x21 == 0) {
      if (local_88 == 0) {
        if (local_a0 != 0) goto LAB_10068c94c;
      }
      else {
        if (local_a0 == 0) {
LAB_10068c94c:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c950);
          (*pcVar7)();
        }
        if (local_88 != local_a0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c74c);
          (*pcVar7)();
        }
      }
      if (lStack_80 != lStack_98) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c940);
        (*pcVar7)();
      }
      local_58 = local_90;
      FUN_10060ee44(0,0,0,uVar4);
      if ((lVar1 == lStack_80) && (local_68 != '\x01')) {
        lVar9 = 0;
        lVar6 = local_78;
        lVar8 = lStack_70;
        FUN_10060ed88();
        local_a0 = lVar6;
        lStack_98 = lVar8;
        local_90 = lVar9;
        (*param_3)(&local_a0,local_f0);
        if (local_78 == 0) {
          if (local_a0 != 0) goto LAB_10068c954;
        }
        else {
          if (local_a0 == 0) {
LAB_10068c954:
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c958);
            (*pcVar7)();
          }
          if (local_78 != local_a0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c894);
            (*pcVar7)();
          }
        }
        if (lStack_70 != lStack_98) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c948);
          (*pcVar7)();
        }
        local_58 = local_90 + lStack_80;
        FUN_10060ee44(0,0,0,uVar4);
      }
      FUN_10068d998(&local_58,local_d8,unaff_x20,uStack_d0,uVar4,param_6,param_7);
    }
    else {
      pcVar7 = *(code **)(lVar9 + 0x20);
      (*pcVar7)(lVar8,lVar6,param_6);
      (*pcVar7)(lVar8 - uVar5,lVar8,param_6);
      if (local_88 == 0) {
        if (local_a0 != 0) goto LAB_10068c948;
      }
      else {
        if (local_a0 == 0) {
LAB_10068c948:
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c94c);
          (*pcVar7)();
        }
        if (local_88 != local_a0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c728);
          (*pcVar7)();
        }
      }
      if (lStack_80 != lStack_98) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10068c93c);
        (*pcVar7)();
      }
      local_58 = local_90;
      FUN_10060ee44(0,0,0,uVar4);
      (*pcVar7)(local_e0,lVar8 - uVar5,param_6);
      FUN_10068d998(&local_58,local_d8,unaff_x20,uStack_d0,uVar4,param_6,param_7);
    }
  }
  return;
}



/* Address: 0x10068c958 | FUN_10068c958 */

void FUN_10068c958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9
                  )

{
  long lVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer UVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar6;
  undefined8 uVar7;
  long alStack_130 [2];
  long local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  long local_f0;
  undefined8 local_e8;
  undefined1 auStack_e0 [16];
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined8 local_a8;
  long lStack_a0;
  char local_98;
  UnsafeBufferPointer<undefined> local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_120 = *(long *)(param_7 + -8);
  lVar1 = -(*(long *)(local_120 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_120 + lVar1;
  uVar7 = *(undefined8 *)(param_6 + 0x10);
  local_118 = param_1;
  local_110 = param_2;
  local_108 = param_3;
  local_100 = param_4;
  uStack_f8 = param_5;
  local_f0 = param_6;
  local_e8 = param_8;
  FUN_10068d098(&local_90,param_1,param_2,*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3],uVar7);
  uVar5 = uStack_88;
  UVar3 = Swift::UnsafeMutableBufferPointer::init(local_90);
  uStack_b8 = uStack_78;
  local_c0 = local_80;
  local_b0 = local_70;
  local_d0 = uVar7;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  UVar4 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_a8,FUN_100688370,auStack_e0,OVar2.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar4.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  FUN_100688150(UVar3.unknown,uVar5,uVar7);
  if ((local_98 != '\x01') && (lStack_a0 != 0)) {
    FUN_100688150(local_a8,lStack_a0,uVar7);
  }
  *(long *)((long)alStack_130 + lVar1) = lVar6;
  FUN_10068def0(local_118,local_110,local_108,local_100,uStack_f8,local_f0,param_7,local_e8);
  if (unaff_x21 != 0) {
    (**(code **)(local_120 + 0x20))(param_9,lVar6,param_7);
  }
  return;
}



/* Address: 0x10068cb10 | FUN_10068cb10 */

void FUN_10068cb10(UnsafeMutableBufferPointer param_1)

{
  Optional OVar1;
  UnsafeMutableBufferPointer<undefined> UVar2;
  UnsafeMutableBufferPointer UVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_90;
  long lStack_88;
  char local_80;
  UnsafeBufferPointer<undefined> local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  FUN_10068c534(&local_78);
  uVar4 = uStack_70;
  UVar2 = Swift::UnsafeMutableBufferPointer::init(local_78);
  uStack_a8 = uStack_60;
  local_b0 = local_68;
  local_a0 = local_58;
  local_c0 = in_x4;
  Swift::UnsafeBufferPointer::typeMetadataAccessor();
  OVar1 = Swift::Optional::typeMetadataAccessor();
  UVar3 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
  FUN_100617fb8(&local_90,FUN_1006834ec,auStack_d0,OVar1.value,
                PTR___type_metadata_for_Swift_Never_100eadc38,UVar3.unknown,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  FUN_100688150(UVar2.unknown,uVar4,in_x4);
  if ((local_80 != '\x01') && (lStack_88 != 0)) {
    FUN_100688150(local_90,lStack_88,in_x4);
  }
  Swift::UnsafeMutableBufferPointer::deallocate(param_1);
  return;
}



/* Address: 0x10068cc24 | FUN_10068cc24 */

void FUN_10068cc24(__int64 param_1,long param_2)

{
  code *pcVar1;
  Optional OVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  UnsafeMutableBufferPointer UVar4;
  UnsafeMutableBufferPointer<undefined> UVar5;
  UnsafeMutableBufferPointer UVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  long lVar8;
  long lVar9;
  UnsafeMutableBufferPointer UVar10;
  undefined1 auStack_100 [16];
  undefined *local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0;
  undefined1 local_c8 [8];
  long lStack_c0;
  char local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  UnsafeBufferPointer<undefined> local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  lVar8 = unaff_x20[2];
  if (lVar8 <= param_1) {
    lVar9 = unaff_x20[1];
    if (param_1 != lVar9) {
      UVar10.unknown = *(undefined **)(param_2 + 0x10);
      if (param_1 < 1) {
        UVar6.unknown = (undefined *)0x0;
        UVar3 = Swift::UnsafeMutableBufferPointer::_init(0);
      }
      else {
        UVar6.unknown = UVar10.unknown;
        UVar3 = Swift::UnsafeMutableBufferPointer::allocate(param_1,UVar10);
      }
      UVar4.unknown = (undefined *)*unaff_x20;
      local_b0 = UVar3.unknown;
      puStack_a8 = UVar6.unknown;
      FUN_10068c534(&local_90,UVar4.unknown,lVar9,lVar8,unaff_x20[3],UVar10.unknown);
      uVar7 = uStack_88;
      UVar5 = Swift::UnsafeMutableBufferPointer::init(local_90);
      uStack_d8 = uStack_78;
      local_e0 = local_80;
      local_d0 = local_70;
      local_f0 = UVar10.unknown;
      Swift::UnsafeBufferPointer::typeMetadataAccessor();
      OVar2 = Swift::Optional::typeMetadataAccessor();
      UVar10 = Swift::UnsafeMutableBufferPointer::typeMetadataAccessor();
      FUN_100617fb8(local_c8,FUN_100688370,auStack_100,OVar2.value,
                    PTR___type_metadata_for_Swift_Never_100eadc38,UVar10.unknown,
                    PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
      FUN_10068d038(0,UVar5.unknown,uVar7,param_2);
      if ((local_b8 != '\x01') && (lStack_c0 != 0)) {
        FUN_10068d038();
      }
      Swift::UnsafeMutableBufferPointer::deallocate(UVar4);
      *unaff_x20 = UVar3.unknown;
      unaff_x20[1] = UVar6.unknown;
      unaff_x20[3] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10068cdb8);
  (*pcVar1)();
}



/* Address: 0x10068cdb8 | FUN_10068cdb8 */

undefined1  [16] FUN_10068cdb8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  Swift::_StringGuts::grow(0x24,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe900000000000020;
  SVar3.str = (char *)0x3a746e756f63202c;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar2,SVar8);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar4.bridgeObject = (void *)0xe900000000000020;
  SVar4.str = (char *)0x3a7472617473202c;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar4,SVar9);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar2,SVar10);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x40;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar2,SVar11);
  _swift_bridgeObjectRelease(0xe100000000000000);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x29;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar5,SVar12);
  auVar1._8_8_ = 0xeb00000000203a79;
  auVar1._0_8_ = 0x7469636170616328;
  return auVar1;
}



/* Address: 0x10068cf30 | FUN_10068cf30 */

undefined1  [16]
FUN_10068cf30(undefined8 param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
             long param_7)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  if ((-1 < param_2) && (param_2 < param_5)) {
    lVar1 = 0;
    if (param_4 <= param_6 + param_2) {
      lVar1 = param_4;
    }
    auVar3._8_8_ = param_3 + *(long *)(*(long *)(param_7 + -8) + 0x48) *
                             ((param_6 + param_2) - lVar1);
    auVar3._0_8_ = FUN_100004520;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10068cf68);
  (*pcVar2)();
}


