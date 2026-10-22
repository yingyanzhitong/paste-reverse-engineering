/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10060a6c8 | FUN_10060a6c8 */

undefined1  [16] FUN_10060a6c8(void)

{
  return ZEXT816(0x100eea660);
}



/* Address: 0x10060a6d8 | FUN_10060a6d8 */

undefined1  [16] FUN_10060a6d8(void)

{
  return ZEXT816(0x100eea6d8);
}



/* Address: 0x10060a6e8 | FUN_10060a6e8 */

undefined1  [16] FUN_10060a6e8(void)

{
  return ZEXT816(0x100eea700);
}



/* Address: 0x10060a6f8 | FUN_10060a6f8 */

undefined1  [16] FUN_10060a6f8(void)

{
  return ZEXT816(0x100eea728);
}



/* Address: 0x10060a708 | FUN_10060a708 */

undefined1  [16] FUN_10060a708(void)

{
  return ZEXT816(0x100eea750);
}



/* Address: 0x10060a718 | FUN_10060a718 */

undefined1  [16] FUN_10060a718(void)

{
  return ZEXT816(0x100eea778);
}



/* Address: 0x10060a728 | FUN_10060a728 */

char * FUN_10060a728(int param_1,void *param_2,char *param_3,socklen_t param_4)

{
  __int32 _Var1;
  char *pcVar2;
  undefined4 extraout_var;
  undefined8 *puVar3;
  
  pcVar2 = _inet_ntop(param_1,param_2,param_3,param_4);
  if (pcVar2 == (char *)0x0) {
    _Var1 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var1);
    FUN_10060a840();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000052;
    puVar3[1] = 0x8000000100daeb60;
    *(__int32 *)(puVar3 + 2) = _Var1;
    _swift_willThrow();
  }
  return pcVar2;
}



/* Address: 0x10060a7b0 | FUN_10060a7b0 */

void FUN_10060a7b0(int param_1,char *param_2,void *param_3)

{
  int iVar1;
  __int32 _Var2;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined8 *puVar4;
  undefined8 *puVar3;
  
  iVar1 = _inet_pton(param_1,param_2,param_3);
  puVar3 = (undefined8 *)CONCAT44(extraout_var,iVar1);
  if (iVar1 == 0) {
    puVar4 = (undefined8 *)0x16;
  }
  else {
    if (iVar1 == 1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var_00,_Var2);
    puVar4 = puVar3;
  }
  FUN_10060a840();
  _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
  *puVar3 = 0xd000000000000034;
  puVar3[1] = 0x8000000100daeb20;
  *(int *)(puVar3 + 2) = (int)puVar4;
  _swift_willThrow();
  return;
}



/* Address: 0x10060a840 | FUN_10060a840 */

void FUN_10060a840(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ed8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b000;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b000,&DAT_100ef11e8);
  DAT_100fd6ed8 = pTVar1;
  return;
}



/* Address: 0x10060a880 | thunk_FUN_10044d3a8 */

void thunk_FUN_10044d3a8(undefined4 param_1)

{
  undefined4 *unaff_x20;
  
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10060a884 | FUN_10060a884 */

void FUN_10060a884(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  FUN_1006112c0(uVar2,*(undefined4 *)(unaff_x20 + 0xc),param_2,param_3);
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060a8c4);
    (*pcVar1)();
  }
  if (iVar3 == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 0xc),uVar2)) {
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + uVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060a8cc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060a8c8);
  (*pcVar1)();
}



/* Address: 0x10060a8cc | FUN_10060a8cc */

void FUN_10060a8cc(void)

{
  FUN_10060e23c();
  return;
}



/* Address: 0x10060a8d8 | FUN_10060a8d8 */

void FUN_10060a8d8(void)

{
  if (DAT_100fd6f38 != -1) {
    _swift_once(&DAT_100fd6f38,FUN_100611c84);
  }
  _swift_retain(DAT_101057bd0);
  return;
}



/* Address: 0x10060a944 | FUN_10060a944 */

undefined * FUN_10060a944(long param_1,undefined *param_2,long param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined *)0x0;
  if (((long)(param_4 & 0xffffffff) <= param_1) && (-1 < (long)param_2)) {
    if ((long)((ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) - (long)param_2) <
        (long)(param_1 - (param_4 & 0xffffffff))) {
      return (undefined *)0x0;
    }
    _swift_beginAccess(param_3 + 0x18,auStack_48,0,0);
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (param_2 != (undefined *)0x0) {
      lVar2 = *(long *)(param_3 + 0x18);
      puVar1 = param_2;
      FUN_10060f15c(param_2,0);
      _memcpy(puVar1 + 0x20,
              (void *)(lVar2 + (param_5 >> 0x18 & 0xffff00) + (param_5 >> 0x30 & 0xff) + param_1),
              (size_t)param_2);
    }
  }
  return puVar1;
}



/* Address: 0x10060aa14 | FUN_10060aa14 */

void FUN_10060aa14(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *unaff_x20;
  ulong uVar3;
  
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar3 = (ulong)uVar1;
  FUN_10060a944(uVar3,param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  if (uVar3 != 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060aa84);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060aa88);
      (*pcVar2)();
    }
    if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060aa8c);
      (*pcVar2)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1 + (uint)param_1;
  }
  return;
}



/* Address: 0x10060aa8c | FUN_10060aa8c */

void FUN_10060aa8c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  InlineArray IVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  
  lVar3 = *(long *)(*(long *)(param_4 + -8) + 0x48);
  lVar5 = lVar3 * param_3;
  if (SUB168(SEXT816(lVar3) * SEXT816(param_3),8) != lVar5 >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060abb0);
    (*pcVar1)();
  }
  uVar4 = (ulong)(uint)(*(int *)(unaff_x20 + 0xc) - *(int *)(unaff_x20 + 8));
  if (lVar5 - uVar4 != 0 && (long)uVar4 <= lVar5) {
    IVar2 = Swift::InlineArray::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010060ab04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(IVar2.unknown + -8) + 0x38))(param_1,1,1,IVar2.unknown);
    return;
  }
  local_80 = param_3;
  lStack_78 = param_4;
  local_70 = param_5;
  FUN_10060adc0(param_1,FUN_10060f1cc,auStack_90,param_3,param_4,
                PTR___type_metadata_for_Swift_Never_100eadc38,
                PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (lVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060abb4);
    (*pcVar1)();
  }
  if (!CARRY4(*(uint *)(unaff_x20 + 8),(uint)lVar5)) {
    *(uint *)(unaff_x20 + 8) = *(uint *)(unaff_x20 + 8) + (uint)lVar5;
    IVar2 = Swift::InlineArray::typeMetadataAccessor();
    (**(code **)(*(long *)(IVar2.unknown + -8) + 0x38))(param_1,0,1,IVar2.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060abb8);
  (*pcVar1)();
}



/* Address: 0x10060abb8 | FUN_10060abb8 */

void FUN_10060abb8(undefined8 param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined4 param_5,long param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined1 *puVar5;
  OutputSpan OVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong unaff_x26;
  long lVar11;
  
  OVar4 = Swift::Optional::typeMetadataAccessor();
  puVar7 = &stack0xffffffffffffff70 +
           -(*(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40) + 0xfU &
            0xfffffffffffffff0);
  lVar11 = *(long *)(param_7 + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)puVar7 - uVar8;
  lVar9 = lVar10 - uVar8;
  if (param_6 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060ad68);
    (*pcVar3)();
  }
  while( true ) {
    if (param_6 == 0) {
      return;
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    unaff_x26 = unaff_x26 & 0xff00000000000000 | (ulong)*(uint *)(param_2 + 2) |
                (ulong)*(ushort *)((long)param_2 + 0x14) << 0x20 |
                (ulong)*(byte *)((long)param_2 + 0x16) << 0x30;
    _swift_retain(uVar1);
    FUN_100616088(puVar7,param_3,param_5,param_7,uVar1,uVar2,unaff_x26,param_7,param_8);
    _swift_release(uVar1);
    puVar5 = puVar7;
    (**(code **)(lVar11 + 0x30))(puVar7,1,param_7);
    if ((int)puVar5 == 1) break;
    (**(code **)(lVar11 + 0x20))(lVar9,puVar7,param_7);
    (**(code **)(lVar11 + 0x10))(lVar10,lVar9,param_7);
    OVar6 = Swift::OutputSpan::typeMetadataAccessor();
    FUN_10060ad6c(lVar10,OVar6.unknown);
    (**(code **)(lVar11 + 8))(lVar9,param_7);
    param_3 = param_3 + param_4;
    param_6 = param_6 + -1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060ad6c);
  (*pcVar3)();
}



/* Address: 0x10060ad6c | FUN_10060ad6c */

void FUN_10060ad6c(undefined8 param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar1 = unaff_x20[2];
  if (lVar1 < unaff_x20[1]) {
    lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
    (**(code **)(lVar3 + 0x20))(*unaff_x20 + *(long *)(lVar3 + 0x48) * lVar1,param_1);
    unaff_x20[2] = lVar1 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060adc0);
  (*pcVar2)();
}



/* Address: 0x10060adc0 | FUN_10060adc0 */

void FUN_10060adc0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar1 = 0;
  local_70 = param_8;
  _swift_getFixedArrayTypeMetadata(0,param_4,param_5);
  lVar1 = (long)&local_70 - (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10060ec6c(lVar1,param_2,param_3,param_4,param_5,param_6,param_7,local_70);
  if ((unaff_x21 == 0) && (0 < param_4)) {
    lVar3 = *(long *)(param_5 + -8);
    pcVar4 = *(code **)(lVar3 + 0x20);
    do {
      (*pcVar4)(param_1,lVar1,param_5);
      lVar2 = *(long *)(lVar3 + 0x48);
      param_1 = param_1 + lVar2;
      lVar1 = lVar1 + lVar2;
      param_4 = param_4 + -1;
    } while (param_4 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10060aeec | FUN_10060aeec */

void FUN_10060aeec(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  FUN_10060a944(param_3 & 0xffffffff,param_1,param_2,param_3,param_4 & 0xffffffffffffff);
  return;
}



/* Address: 0x10060af08 | FUN_10060af08 */

undefined8 FUN_10060af08(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_10060af44();
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_2)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_2;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060af44);
  (*pcVar1)();
}



/* Address: 0x10060af44 | FUN_10060af44 */

ulong FUN_10060af44(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060afe8);
    (*pcVar3)();
  }
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060afec);
    (*pcVar3)();
  }
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060aff0);
    (*pcVar3)();
  }
  if (param_4 >> 0x20 == 0) {
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060aff8);
      (*pcVar3)();
    }
    uVar1 = (uint)param_4 + (uint)param_2;
    if (!CARRY4((uint)param_4,(uint)param_2)) {
      uVar5 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = (uint)uVar5;
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
        if ((uint)unaff_x20[2] <= uVar1) {
          iVar2 = uVar1 - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar2,uVar4 & 1);
      }
      FUN_100612380(param_2,param_4);
      FUN_10061258c(param_1,param_2 + param_1,param_4);
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060affc);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060aff4);
  (*pcVar3)();
}



/* Address: 0x10060affc | FUN_10060affc */

void FUN_10060affc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  uint3 uVar5;
  code *pcVar6;
  uint uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  ulong *unaff_x20;
  ulong uVar11;
  long unaff_x21;
  uint uVar12;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  uVar8 = 0xf;
  FUN_10060f534();
  uVar12 = *(uint *)((long)unaff_x20 + 0xc);
  local_80 = uVar8;
  uStack_78 = param_1;
  local_70 = param_2;
  local_68 = param_4;
  _swift_bridgeObjectRetain();
  FUN_100614470();
  if (unaff_x21 == 0) {
    while (((uint)param_4 & 0xff00) != 0x100) {
      if (0xfffffffe < uVar12) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10060b17c);
        (*pcVar6)();
      }
      uVar9 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar7 = (uint)uVar9;
      if ((uVar9 & 1) == 0) {
        iVar1 = 0;
        if ((uint)unaff_x20[2] <= uVar12 + 1) {
          iVar1 = (uVar12 + 1) - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar7 & 1);
      }
      FUN_100612380(1,uVar12);
      uVar11 = *unaff_x20;
      uVar9 = unaff_x20[2];
      uVar4 = *(undefined2 *)((long)unaff_x20 + 0x14);
      uVar3 = *(undefined1 *)((long)unaff_x20 + 0x16);
      lVar10 = uVar11 + 0x18;
      _swift_beginAccess(lVar10,auStack_98,0,0);
      uVar5 = CONCAT21(uVar4,uVar3);
      uVar7 = (int)uVar9 - (uint)uVar5;
      if (uVar12 <= uVar7) {
        uVar7 = uVar12;
      }
      uVar2 = 0;
      if (uVar12 != 0) {
        uVar2 = uVar7;
      }
      *(char *)(*(long *)(uVar11 + 0x18) + (ulong)uVar5 + (ulong)uVar2) = (char)param_4;
      uVar12 = *(uint *)((long)unaff_x20 + 0xc) + 1;
      if (0xfffffffe < *(uint *)((long)unaff_x20 + 0xc)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10060b180);
        (*pcVar6)();
      }
      *(uint *)((long)unaff_x20 + 0xc) = uVar12;
      FUN_100614470();
      param_4 = lVar10;
    }
    _swift_bridgeObjectRelease(local_68);
  }
  else {
    FUN_100611284(uVar12);
    _swift_willThrow();
    _swift_bridgeObjectRelease(local_68);
  }
  return;
}



/* Address: 0x10060b180 | FUN_10060b180 */

void FUN_10060b180(uint param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_10060b1ac(param_1,param_2,*(undefined4 *)(unaff_x20 + 0xc));
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),param_1)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060b1ac);
  (*pcVar1)();
}



/* Address: 0x10060b1ac | FUN_10060b1ac */

undefined * FUN_10060b1ac(_StringObject param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  UnsafeBufferPointer<__int8> UVar6;
  ulong *unaff_x20;
  undefined *puVar7;
  undefined *local_50;
  ulong uStack_48;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    FUN_10060b3dc(param_1.unknown,param_2,param_3);
    return param_1.unknown;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      UVar6 = Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      UVar6.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = (ulong)param_1.unknown & 0xffffffffffff;
    }
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060b2c0);
      (*pcVar3)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060b2c8);
      (*pcVar3)();
    }
    puVar7 = (undefined *)0x0;
    if (UVar6.unknown != (undefined *)0x0) {
      puVar7 = UVar6.unknown + param_2;
    }
    FUN_1006124ec(UVar6.unknown,puVar7,param_3);
    puVar7 = UVar6.unknown & 0xffffffff;
  }
  else {
    uStack_48 = param_2 & 0xffffffffffffff;
    local_50 = param_1.unknown;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060b2c4);
      (*pcVar3)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060b2cc);
      (*pcVar3)();
    }
    puVar7 = (undefined *)(param_2 >> 0x38 & 0xf);
    uVar1 = (uint)param_3 + (uint)puVar7;
    if (CARRY4((uint)param_3,(uint)puVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060b2d0);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      iVar2 = 0;
      if ((uint)unaff_x20[2] <= uVar1) {
        iVar2 = uVar1 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,uVar4 & 1);
    }
    FUN_100612380(puVar7,param_3);
    FUN_10061258c(&local_50,(undefined *)((long)&local_50 + (long)puVar7),param_3);
  }
  return puVar7;
}



/* Address: 0x10060b2d0 | FUN_10060b2d0 */

void FUN_10060b2d0(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  FUN_10060b308(uVar2,param_2,*(undefined4 *)(unaff_x20 + 0xc));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060b304);
    (*pcVar1)();
  }
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),uVar2)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + uVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060b308);
  (*pcVar1)();
}



/* Address: 0x10060b308 | FUN_10060b308 */

long FUN_10060b308(long param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10060b1ac();
  local_39 = 0;
  uVar2 = param_1 + param_3;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b3d0);
    (*pcVar4)();
  }
  if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b3d4);
    (*pcVar4)();
  }
  uVar1 = (uint)uVar2 + 1;
  if (0xfffffffe < (uint)uVar2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b3d8);
    (*pcVar4)();
  }
  uVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar5 = (uint)uVar6;
  if ((uVar6 & 1) == 0) {
    iVar3 = 0;
    if ((uint)unaff_x20[2] <= uVar1) {
      iVar3 = uVar1 - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar3,uVar5 & 1);
  }
  FUN_100612380(1,uVar2);
  FUN_10061258c(&local_39,&local_38,uVar2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return param_1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10060b3dc | FUN_10060b3dc */

ulong FUN_10060b3dc(UnsafeBufferPointer<__int8> param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  undefined *local_50;
  ulong uStack_48;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) != 0) {
      uStack_48 = param_2 & 0xffffffffffffff;
      local_50 = param_1.unknown;
      if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b4f0);
        (*pcVar4)();
      }
      if (param_3 >> 0x20 == 0) {
        uVar7 = param_2 >> 0x38 & 0xf;
        uVar1 = (uint)param_3 + (uint)uVar7;
        if (!CARRY4((uint)param_3,(uint)uVar7)) {
          uVar6 = *unaff_x20;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar5 = (uint)uVar6;
          if ((uVar6 & 1) == 0) {
            iVar2 = 0;
            if ((uint)unaff_x20[2] <= uVar1) {
              iVar2 = uVar1 - (uint)unaff_x20[2];
            }
            FUN_1000d2130();
            FUN_100612358(iVar2,uVar5 & 1);
          }
          FUN_100612380(uVar7,param_3);
          FUN_10061258c(&local_50,(long)&local_50 + uVar7,param_3);
          return uVar7;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b4fc);
        (*pcVar4)();
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b4f8);
      (*pcVar4)();
    }
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      param_1 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
    }
    else {
      uVar7 = param_2 & 0xfffffffffffffff;
      param_2 = (ulong)param_1.unknown & 0xffffffffffff;
      param_1.unknown = (undefined *)(uVar7 + 0x20);
    }
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b4ec);
      (*pcVar4)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b4f4);
      (*pcVar4)();
    }
    puVar3 = (undefined *)0x0;
    if (param_1.unknown != (undefined *)0x0) {
      puVar3 = param_1.unknown + param_2;
    }
    FUN_1006124ec(param_1.unknown,puVar3,param_3);
  }
  else {
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b500);
      (*pcVar4)();
    }
    if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b504);
      (*pcVar4)();
    }
    FUN_10060e710(param_1.unknown,param_2,param_3);
  }
  return (ulong)param_1.unknown & 0xffffffff;
}



/* Address: 0x10060b504 | FUN_10060b504 */

char * FUN_10060b504(long param_1,char *param_2,long param_3,ulong param_4,ulong param_5)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  tuple2_conflict1 tVar4;
  undefined1 auStack_58 [24];
  
  pcVar1 = (char *)0x0;
  if (((long)(param_4 & 0xffffffff) <= param_1) && (-1 < (long)param_2)) {
    if ((long)((ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) - (long)param_2) <
        (long)(param_1 - (param_4 & 0xffffffff))) {
      return (char *)0x0;
    }
    pvVar2 = (void *)0x0;
    _swift_beginAccess(param_3 + 0x18,auStack_58,0,0);
    SVar3.bridgeObject = pvVar2;
    SVar3.str = param_2;
    tVar4 = Swift::String::_fromUTF8Repairing
                      ((undefined *)
                       (*(long *)(param_3 + 0x18) + (param_5 >> 0x18 & 0xffff00) +
                        (param_5 >> 0x30 & 0xff) + param_1),SVar3);
    pcVar1 = tVar4.result.str;
  }
  return pcVar1;
}



/* Address: 0x10060b5c0 | FUN_10060b5c0 */

undefined1  [16] FUN_10060b5c0(char *param_1,long param_2,ulong param_3,ulong param_4)

{
  char *pcVar1;
  long lVar2;
  void *pvVar3;
  char *pcVar4;
  undefined1 auVar5 [16];
  String SVar6;
  tuple2_conflict1 tVar7;
  undefined1 auStack_58 [24];
  
  pcVar1 = param_1;
  lVar2 = param_2;
  FUN_10060b690();
  if (((uint)lVar2 & 0xff) != 1) {
    pcVar4 = (char *)0x0;
    pvVar3 = (void *)0x0;
    if (((long)param_1 < (long)(param_3 & 0xffffffff)) || ((long)pcVar1 < 0)) goto LAB_10060b604;
    if ((long)((long)param_1 - (param_3 & 0xffffffff)) <=
        (long)((ulong)(uint)((int)(param_3 >> 0x20) - (int)param_3) - (long)pcVar1)) {
      pvVar3 = (void *)0x0;
      _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
      SVar6.bridgeObject = pvVar3;
      SVar6.str = pcVar1;
      tVar7 = Swift::String::_fromUTF8Repairing
                        ((UnsafeBufferPointer<__int8>)
                         (param_1 +
                         *(long *)(param_2 + 0x18) + (param_4 >> 0x18 & 0xffff00) +
                         (param_4 >> 0x30 & 0xff)),SVar6);
      pvVar3 = tVar7.result.bridgeObject;
      pcVar4 = tVar7.result.str;
      goto LAB_10060b604;
    }
  }
  pcVar4 = (char *)0x0;
  pvVar3 = (void *)0x0;
LAB_10060b604:
  auVar5._8_8_ = pvVar3;
  auVar5._0_8_ = pcVar4;
  return auVar5;
}



/* Address: 0x10060b690 | FUN_10060b690 */

undefined1  [16] FUN_10060b690(ulong param_1,long param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_48 [24];
  
  if ((long)(param_3 & 0xffffffff) <= (long)param_1) {
    param_3 = param_3 >> 0x20;
    if (param_1 < param_3) {
      uVar1 = (uint)((ulong)param_4 >> 0x18) & 0xffff00 | (ushort)((ulong)param_4 >> 0x30) & 0xff;
      if ((int)param_4 - uVar1 < param_3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10060b74c);
        (*pcVar2)();
      }
      _swift_beginAccess(param_2 + 0x18,auStack_48,0,0);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x18) + param_1 + (ulong)uVar1 + lVar4) == '\0') {
          if (SCARRY8(lVar4,param_1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10060b750);
            (*pcVar2)();
          }
          uVar3 = 0;
          goto LAB_10060b720;
        }
        lVar4 = lVar4 + 1;
      } while (param_3 - param_1 != lVar4);
    }
  }
  lVar4 = 0;
  uVar3 = 1;
LAB_10060b720:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = lVar4;
  return auVar5;
}



/* Address: 0x10060b750 | FUN_10060b750 */

char * FUN_10060b750(char *param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  void *pvVar5;
  long *unaff_x20;
  long lVar6;
  String SVar7;
  tuple2_conflict1 tVar8;
  undefined1 auStack_58 [24];
  
  if (-1 < (long)param_1) {
    uVar1 = *(uint *)(unaff_x20 + 1);
    if (param_1 <= (char *)(ulong)(*(int *)((long)unaff_x20 + 0xc) - uVar1)) {
      lVar6 = *unaff_x20;
      uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
      bVar2 = *(byte *)((long)unaff_x20 + 0x16);
      pvVar5 = (void *)0x0;
      _swift_beginAccess(lVar6 + 0x18,auStack_58,0,0);
      SVar7.bridgeObject = pvVar5;
      SVar7.str = param_1;
      tVar8 = Swift::String::_fromUTF8Repairing
                        ((undefined *)
                         (*(long *)(lVar6 + 0x18) + (ulong)uVar3 * 0x100 +
                         (ulong)bVar2 + (ulong)uVar1),SVar7);
      if (!CARRY4(uVar1,(uint)param_1)) {
        *(uint *)(unaff_x20 + 1) = uVar1 + (uint)param_1;
        return tVar8.result.str;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060b7ec);
      (*pcVar4)();
    }
  }
  return (char *)0x0;
}



/* Address: 0x10060b7ec | FUN_10060b7ec */

undefined1  [16] FUN_10060b7ec(void)

{
  char *pcVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  char *pcVar7;
  char *pcVar8;
  long lVar9;
  char *pcVar10;
  void *pvVar11;
  uint uVar12;
  long *unaff_x20;
  long lVar13;
  undefined1 auVar14 [16];
  String SVar15;
  tuple2_conflict1 tVar16;
  undefined1 auStack_68 [24];
  
  lVar13 = *unaff_x20;
  uVar12 = *(uint *)(unaff_x20 + 1);
  pcVar1 = (char *)(ulong)uVar12;
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  pcVar7 = pcVar1;
  lVar9 = lVar13;
  FUN_10060b690(pcVar1,lVar13,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  if (((uint)lVar9 & 0xff) == 1) {
    pcVar8 = (char *)0x0;
    pcVar10 = (char *)0x0;
  }
  else {
    pcVar8 = (char *)0x0;
    if ((long)pcVar7 < 0) {
      pcVar10 = pcVar8;
      if (uVar12 == 0xffffffff) goto LAB_10060b8dc;
    }
    else {
      pcVar10 = (char *)0x0;
      if ((long)pcVar7 <= (long)(ulong)(uVar2 - uVar12)) {
        pvVar11 = (void *)0x0;
        _swift_beginAccess(lVar13 + 0x18,auStack_68,0,0);
        SVar15.bridgeObject = pvVar11;
        SVar15.str = pcVar7;
        tVar16 = Swift::String::_fromUTF8Repairing
                           ((UnsafeBufferPointer<__int8>)
                            (pcVar1 + *(long *)(lVar13 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3
                            ),SVar15);
        pcVar10 = tVar16.result.bridgeObject;
        pcVar8 = tVar16.result.str;
        bVar6 = CARRY4(uVar12,(uint)pcVar7);
        uVar12 = uVar12 + (uint)pcVar7;
        if (bVar6) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10060b8e8);
          (*pcVar5)();
        }
        *(uint *)(unaff_x20 + 1) = uVar12;
      }
      if (0xfffffffe < uVar12) {
LAB_10060b8dc:
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10060b8e0);
        (*pcVar5)();
      }
    }
    if (uVar2 < uVar12 + 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10060b8e4);
      (*pcVar5)();
    }
    *(uint *)(unaff_x20 + 1) = uVar12 + 1;
  }
  auVar14._8_8_ = pcVar10;
  auVar14._0_8_ = pcVar8;
  return auVar14;
}



/* Address: 0x10060b8e8 | FUN_10060b8e8 */

void FUN_10060b8e8(char *param_1,void *param_2,_StringObject param_3,ulong param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  UnsafeBufferPointer<__int8> UVar3;
  long unaff_x20;
  String SVar4;
  undefined *local_58;
  ulong uStack_50;
  
  uVar1 = *(undefined4 *)(unaff_x20 + 0xc);
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        UVar3 = Swift::_StringObject::get_sharedUTF8(param_3);
      }
      else {
        UVar3.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      uStack_50 = param_4 & 0xffffffffffffff;
      UVar3.unknown = (undefined *)&local_58;
      local_58 = param_3.unknown;
    }
    FUN_10060f5a8(UVar3.unknown,param_1,param_2,param_3.unknown,param_4);
    if ((long)UVar3.unknown < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060b98c);
      (*pcVar2)();
    }
    if ((ulong)UVar3.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060b990);
      (*pcVar2)();
    }
  }
  else {
    SVar4.bridgeObject = param_2;
    SVar4.str = param_1;
    SVar4 = Swift::String::__fromSubstring(SVar4);
    UVar3.unknown = SVar4.str;
    FUN_10060b1ac(UVar3.unknown,SVar4.bridgeObject,uVar1);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
  }
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)UVar3.unknown)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)UVar3.unknown;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060b9cc);
  (*pcVar2)();
}



/* Address: 0x10060b9e4 | FUN_10060b9e4 */

void FUN_10060b9e4(char *param_1,void *param_2,_StringObject param_3,ulong param_4,
                  undefined8 param_5)

{
  UnsafeBufferPointer<__int8> UVar1;
  String SVar2;
  undefined *local_58;
  ulong uStack_50;
  
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        UVar1 = Swift::_StringObject::get_sharedUTF8(param_3);
      }
      else {
        UVar1.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      uStack_50 = param_4 & 0xffffffffffffff;
      UVar1.unknown = (undefined *)&local_58;
      local_58 = param_3.unknown;
    }
    FUN_10060f5a8(UVar1.unknown,param_1,param_2,param_3.unknown,param_4);
  }
  else {
    SVar2.bridgeObject = param_2;
    SVar2.str = param_1;
    SVar2 = Swift::String::__fromSubstring(SVar2);
    FUN_10060b1ac(SVar2.str,SVar2.bridgeObject,param_5);
    _swift_bridgeObjectRelease(SVar2.bridgeObject);
  }
  return;
}



/* Address: 0x10060bab0 | FUN_10060bab0 */

char * FUN_10060bab0(char *param_1,long param_2,ulong param_3,ulong param_4)

{
  void *pvVar1;
  String SVar2;
  tuple2_conflict1 tVar3;
  undefined1 auStack_58 [24];
  
  if ((-1 < (long)param_1) &&
     (param_1 <= (char *)(ulong)(uint)((int)(param_3 >> 0x20) - (int)param_3))) {
    pvVar1 = (void *)0x0;
    _swift_beginAccess(param_2 + 0x18,auStack_58,0,0);
    SVar2.bridgeObject = pvVar1;
    SVar2.str = param_1;
    tVar3 = Swift::String::_fromUTF8Repairing
                      ((undefined *)
                       (*(long *)(param_2 + 0x18) + (param_4 >> 0x18 & 0xffff00) +
                        (param_4 >> 0x30 & 0xff) + (param_3 & 0xffffffff)),SVar2);
    return tVar3.result.str;
  }
  return (char *)0x0;
}



/* Address: 0x10060bb48 | FUN_10060bb48 */

undefined1  [16] FUN_10060bb48(long param_1,ulong param_2,ulong param_3)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  void *pvVar4;
  char *pcVar5;
  undefined1 auVar6 [16];
  String SVar7;
  tuple2_conflict1 tVar8;
  undefined1 auStack_58 [24];
  
  pcVar5 = (char *)(param_2 & 0xffffffff);
  pcVar1 = pcVar5;
  lVar3 = param_1;
  FUN_10060b690(pcVar5,param_1,param_2,param_3 & 0xffffffffffffff);
  pcVar2 = (char *)0x0;
  pvVar4 = (void *)0x0;
  if ((((uint)lVar3 & 0xff) != 1) && (-1 < (long)pcVar1)) {
    if ((char *)(ulong)(uint)((int)(param_2 >> 0x20) - (int)param_2) < pcVar1) {
      pcVar2 = (char *)0x0;
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = (void *)0x0;
      _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
      SVar7.bridgeObject = pvVar4;
      SVar7.str = pcVar1;
      tVar8 = Swift::String::_fromUTF8Repairing
                        ((UnsafeBufferPointer<__int8>)
                         (pcVar5 + *(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) +
                                   (param_3 >> 0x30 & 0xff)),SVar7);
      pvVar4 = tVar8.result.bridgeObject;
      pcVar2 = tVar8.result.str;
    }
  }
  auVar6._8_8_ = pvVar4;
  auVar6._0_8_ = pcVar2;
  return auVar6;
}



/* Address: 0x10060bc10 | FUN_10060bc10 */

void FUN_10060bc10(undefined8 param_1)

{
  code *pcVar1;
  uint uVar2;
  int iVar3;
  long unaff_x20;
  
  iVar3 = (int)((ulong)param_1 >> 0x20);
  uVar2 = (uint)param_1;
  FUN_10060bc50(uVar2,*(undefined4 *)(unaff_x20 + 0xc));
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060bc48);
    (*pcVar1)();
  }
  if (iVar3 == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 0xc),uVar2)) {
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + uVar2;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060bc50);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060bc4c);
  (*pcVar1)();
}



/* Address: 0x10060bc50 | FUN_10060bc50 */

__int64 FUN_10060bc50(DispatchData param_1,ulong param_2)

{
  ulong uVar1;
  UnsafeMutableRawBufferPointer to;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  __int64 _Var7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  undefined1 auStack_68 [24];
  
  _Var7 = Dispatch::DispatchData::get_count(param_1);
  uVar1 = param_2 + _Var7;
  if (SCARRY8(param_2,_Var7)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd28);
    (*pcVar6)();
  }
  FUN_100611328(uVar1);
  FUN_100612cb0();
  lVar9 = *unaff_x20;
  lVar5 = unaff_x20[2];
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar9 + 0x18,auStack_68,0,0);
  uVar4 = (uint)CONCAT21(uVar3,uVar2);
  uVar8 = (ulong)((int)lVar5 - uVar4);
  if ((long)uVar1 < (long)param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd2c);
    (*pcVar6)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd30);
    (*pcVar6)();
  }
  if (param_2 <= uVar8) {
    if (uVar8 < uVar1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd38);
      (*pcVar6)();
    }
    if (!SBORROW8(uVar1,param_2)) {
      to.unknown = (undefined *)(*(long *)(lVar9 + 0x18) + (ulong)uVar4 + param_2);
      Dispatch::DispatchData::copyBytes
                (to,(__int64)(to.unknown + (long)(uVar1 - param_2)),(undefined *)(uVar1 - param_2));
      return _Var7;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd3c);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x10060bd34);
  (*pcVar6)();
}



/* Address: 0x10060bd3c | FUN_10060bd3c */

void FUN_10060bd3c(undefined8 param_1,long param_2,long param_3,long param_4,ulong param_5,
                  ulong param_6)

{
  DispatchData DVar1;
  undefined1 auStack_58 [24];
  
  if ((((long)(param_5 & 0xffffffff) <= param_2) && (-1 < param_3)) &&
     ((long)(param_2 - (param_5 & 0xffffffff)) <=
      (long)((ulong)(uint)((int)(param_5 >> 0x20) - (int)param_5) - param_3))) {
    _swift_beginAccess(param_4 + 0x18,auStack_58,0,0);
    Dispatch::DispatchData::init
              ((undefined *)
               (*(long *)(param_4 + 0x18) + (param_6 >> 0x18 & 0xffff00) + (param_6 >> 0x30 & 0xff)
               + param_2));
    DVar1 = Dispatch::DispatchData::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,0,1,DVar1.unknown);
    return;
  }
  DVar1 = Dispatch::DispatchData::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010060bdb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x10060be3c | FUN_10060be3c */

void FUN_10060be3c(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  byte bVar2;
  DispatchData DVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong local_80;
  undefined1 auStack_78 [24];
  
  DVar3 = Dispatch::DispatchData::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar5 = (long)(auStack_78 + (-8 - uVar4)) - uVar4;
  if (-1 < (long)param_2) {
    uVar1 = *(uint *)(unaff_x20 + 1);
    if (param_2 <= *(int *)((long)unaff_x20 + 0xc) - uVar1) {
      lVar7 = *unaff_x20;
      local_80 = (ulong)*(ushort *)((long)unaff_x20 + 0x14);
      bVar2 = *(byte *)((long)unaff_x20 + 0x16);
      _swift_beginAccess(lVar7 + 0x18,auStack_78,0,0);
      Dispatch::DispatchData::init
                ((undefined *)
                 (*(long *)(lVar7 + 0x18) + local_80 * 0x100 + (ulong)bVar2 + (ulong)uVar1));
      pcVar8 = *(code **)(lVar6 + 0x20);
      (*pcVar8)(lVar5,auStack_78 + (-8 - uVar4),DVar3.unknown);
      if (!CARRY4(uVar1,(uint)param_2)) {
        *(uint *)(unaff_x20 + 1) = uVar1 + (uint)param_2;
        (*pcVar8)(param_1,lVar5,DVar3.unknown);
        (**(code **)(lVar6 + 0x38))(param_1,0,1,DVar3.unknown);
        return;
      }
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10060bf90);
      (*pcVar8)();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010060bedc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 0x38))(param_1,1,1,DVar3.unknown);
  return;
}



/* Address: 0x10060bf90 | FUN_10060bf90 */

void FUN_10060bf90(undefined8 param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  DispatchData DVar1;
  undefined1 auStack_58 [24];
  
  if ((-1 < (long)param_2) && (param_2 <= (uint)((int)(param_4 >> 0x20) - (int)param_4))) {
    _swift_beginAccess(param_3 + 0x18,auStack_58,0,0);
    Dispatch::DispatchData::init
              ((undefined *)
               (*(long *)(param_3 + 0x18) + (param_5 >> 0x18 & 0xffff00) + (param_5 >> 0x30 & 0xff)
               + (param_4 & 0xffffffff)));
    DVar1 = Dispatch::DispatchData::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,0,1,DVar1.unknown);
    return;
  }
  DVar1 = Dispatch::DispatchData::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010060bff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x10060c080 | FUN_10060c080 */

void FUN_10060c080(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint7 uVar4;
  code *pcVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  uint uVar6;
  long lVar7;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_38;
  
  lVar7 = *(long *)(param_3 + -8);
  lVar3 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = *(uint7 *)(unaff_x20 + 2);
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_1;
  uStack_48 = param_2;
  *(undefined1 **)((long)auStack_80 + lVar3) = auStack_70 + lVar3;
  FUN_100611110(&local_38,FUN_10060f7a8,auStack_70,uVar1,uVar2,(ulong)uVar4,
                PTR___type_metadata_for_Swift_Int_100eac6f8,param_3,param_4);
  if (unaff_x21 == 0) {
    if ((long)local_38 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10060c164);
      (*pcVar5)();
    }
    if (local_38 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10060c168);
      (*pcVar5)();
    }
    uVar6 = (uint)uVar2;
    if (CARRY4(uVar6,(uint)local_38)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10060c16c);
      (*pcVar5)();
    }
    *(uint *)(unaff_x20 + 1) = uVar6 + (uint)local_38;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_5,auStack_70 + lVar3,param_3);
  }
  return;
}



/* Address: 0x10060c16c | FUN_10060c16c */

void FUN_10060c16c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_70 [16];
  long local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  ulong local_38;
  
  lVar3 = *(long *)(param_3 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_60 = param_3;
  uStack_58 = param_4;
  local_50 = param_1;
  uStack_48 = param_2;
  FUN_100611484(&local_38,FUN_1006101a4,auStack_70,PTR___type_metadata_for_Swift_Int_100eac6f8,
                param_3,param_4,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 == 0) {
    if ((long)local_38 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c22c);
      (*pcVar1)();
    }
    if (local_38 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c230);
      (*pcVar1)();
    }
    if (CARRY4(*(uint *)(unaff_x20 + 8),(uint)local_38)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c234);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 8) = *(uint *)(unaff_x20 + 8) + (uint)local_38;
  }
  else {
    (**(code **)(lVar3 + 0x20))(param_5,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_3);
  }
  return;
}



/* Address: 0x10060c234 | FUN_10060c234 */

void FUN_10060c234(undefined8 *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(param_6 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_4)(param_2,param_3,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  else {
    (**(code **)(lVar2 + 0x20))
              (param_8,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_6);
  }
  return;
}



/* Address: 0x10060c2bc | thunk_FUN_10060c2c0 */

long thunk_FUN_10060c2c0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_78,0,0);
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3a8);
    (*pcVar3)();
  }
  if (param_4 >> 0x20 == 0) {
    lVar6 = (param_2 >> 0x20) - (param_2 & 0xffffffff);
    uVar1 = (uint)param_4 + (uint)lVar6;
    if (!CARRY4((uint)param_4,(uint)lVar6)) {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar5 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = (uint)uVar5;
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
        if ((uint)unaff_x20[2] <= uVar1) {
          iVar2 = uVar1 - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar2,uVar4 & 1);
      }
      lVar7 = lVar7 + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff);
      FUN_100612380(lVar6,param_4);
      FUN_10061258c(lVar7 + (param_2 & 0xffffffff),lVar7 + (param_2 >> 0x20),param_4);
      return lVar6;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3b0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3ac);
  (*pcVar3)();
}



/* Address: 0x10060c2c0 | FUN_10060c2c0 */

long FUN_10060c2c0(long param_1,ulong param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x18,auStack_78,0,0);
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3a8);
    (*pcVar3)();
  }
  if (param_4 >> 0x20 == 0) {
    lVar6 = (param_2 >> 0x20) - (param_2 & 0xffffffff);
    uVar1 = (uint)param_4 + (uint)lVar6;
    if (!CARRY4((uint)param_4,(uint)lVar6)) {
      lVar7 = *(long *)(param_1 + 0x18);
      uVar5 = *unaff_x20;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = (uint)uVar5;
      if ((uVar5 & 1) == 0) {
        iVar2 = 0;
        if ((uint)unaff_x20[2] <= uVar1) {
          iVar2 = uVar1 - (uint)unaff_x20[2];
        }
        FUN_1000d2130();
        FUN_100612358(iVar2,uVar4 & 1);
      }
      lVar7 = lVar7 + (param_3 >> 0x18 & 0xffff00) + (param_3 >> 0x30 & 0xff);
      FUN_100612380(lVar6,param_4);
      FUN_10061258c(lVar7 + (param_2 & 0xffffffff),lVar7 + (param_2 >> 0x20),param_4);
      return lVar6;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3b0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c3ac);
  (*pcVar3)();
}



/* Address: 0x10060c3b0 | FUN_10060c3b0 */

long FUN_10060c3b0(long *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  ushort uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  uint uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_78 [24];
  
  lVar12 = *param_1;
  uVar2 = *(uint *)(param_1 + 1);
  uVar3 = *(uint *)((long)param_1 + 0xc);
  uVar6 = *(ushort *)((long)param_1 + 0x14);
  bVar5 = *(byte *)((long)param_1 + 0x16);
  uVar4 = *(uint *)((long)unaff_x20 + 0xc);
  _swift_beginAccess(lVar12 + 0x18,auStack_78,0,0);
  lVar11 = (ulong)uVar3 - (ulong)uVar2;
  uVar10 = (uint)lVar11;
  if (CARRY4(uVar4,uVar10)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060c49c);
    (*pcVar7)();
  }
  lVar12 = *(long *)(lVar12 + 0x18) + (ulong)uVar6 * 0x100 + (ulong)bVar5;
  uVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = (uint)uVar9;
  if ((uVar9 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar4 + uVar10) {
      iVar1 = (uVar4 + uVar10) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar8 & 1);
  }
  FUN_100612380(lVar11,uVar4);
  FUN_10061258c(lVar12 + (ulong)uVar2,lVar12 + (ulong)uVar3,uVar4);
  if (!CARRY4(*(uint *)((long)unaff_x20 + 0xc),uVar10)) {
    *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + uVar10;
    if (!CARRY4(uVar2,uVar10)) {
      *(uint *)(param_1 + 1) = uVar2 + uVar10;
      return lVar11;
    }
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060c4a4);
    (*pcVar7)();
  }
                    /* WARNING: Does not return */
  pcVar7 = (code *)SoftwareBreakpoint(1,0x10060c4a0);
  (*pcVar7)();
}



/* Address: 0x10060c4a4 | FUN_10060c4a4 */

ulong FUN_10060c4a4(ulong param_1,undefined8 param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_1006124ec(param_1,param_2,*(undefined4 *)(unaff_x20 + 0xc));
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_1;
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c4d4);
  (*pcVar1)();
}



/* Address: 0x10060c4d4 | FUN_10060c4d4 */

ulong FUN_10060c4d4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong *unaff_x20;
  
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c574);
    (*pcVar3)();
  }
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  uVar6 = (uint)param_2;
  if (!CARRY4(uVar2,uVar6)) {
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar2 + uVar6) {
        iVar1 = (uVar2 + uVar6) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar4 & 1);
    }
    FUN_100612380(param_2,uVar2);
    FUN_100612720(param_1,param_2,uVar2);
    if (!CARRY4(*(uint *)((long)unaff_x20 + 0xc),uVar6)) {
      *(uint *)((long)unaff_x20 + 0xc) = *(uint *)((long)unaff_x20 + 0xc) + uVar6;
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c57c);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c578);
  (*pcVar3)();
}



/* Address: 0x10060c57c | FUN_10060c57c */

ulong FUN_10060c57c(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  FUN_10060c5c4(param_1,param_2,*(undefined4 *)(unaff_x20 + 0xc));
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c5c0);
    (*pcVar1)();
  }
  if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_2)) {
    *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_2;
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c5c4);
  (*pcVar1)();
}



/* Address: 0x10060c5c4 | FUN_10060c5c4 */

size_t FUN_10060c5c4(int param_1,size_t param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_68 [24];
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060c670);
    (*pcVar4)();
  }
  lVar1 = param_3 + param_2;
  if (!SCARRY8(param_3,param_2)) {
    FUN_100611328(lVar1);
    FUN_100612cb0();
    lVar5 = *unaff_x20;
    uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
    bVar2 = *(byte *)((long)unaff_x20 + 0x16);
    _swift_beginAccess(lVar5 + 0x18,auStack_68,0,0);
    if (param_3 <= lVar1) {
      if (lVar1 != param_3) {
        _memset((void *)(*(long *)(lVar5 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + param_3),
                param_1,param_2);
      }
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10060c678);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10060c674);
  (*pcVar4)();
}



/* Address: 0x10060c678 | FUN_10060c678 */

void FUN_10060c678(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_2 & 0xffffffff;
  thunk_FUN_10061160c(uVar2,(int)(param_2 >> 0x20) - (int)param_2,param_1,param_2,
                      param_3 & 0xffffffffffffff);
  if (uVar2 != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c6b4);
  (*pcVar1)();
}



/* Address: 0x10060c6b4 | FUN_10060c6b4 */

void FUN_10060c6b4(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 *unaff_x20;
  
  if (-1 < (long)param_1) {
    uVar1 = *(uint *)(unaff_x20 + 1);
    if (param_1 <= *(uint *)((long)unaff_x20 + 0xc) &&
        (long)(ulong)uVar1 <= (long)(*(uint *)((long)unaff_x20 + 0xc) - param_1)) {
      uVar2 = (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                             *(undefined1 *)((long)unaff_x20 + 0x16));
      if (CARRY4(uVar2,uVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c790);
        (*pcVar3)();
      }
      if (uVar2 + uVar1 >> 0x18 == 0) {
        _swift_retain();
      }
      else {
        FUN_1006135c8((ulong)uVar1,param_1,*unaff_x20,unaff_x20[1],
                      (ulong)CONCAT16(*(undefined1 *)((long)unaff_x20 + 0x16),
                                      CONCAT24(*(undefined2 *)((long)unaff_x20 + 0x14),
                                               *(undefined4 *)(unaff_x20 + 2))));
      }
      if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10060c794);
        (*pcVar3)();
      }
      *(uint *)(unaff_x20 + 1) = uVar1 + (uint)param_1;
    }
  }
  return;
}



/* Address: 0x10060c794 | FUN_10060c794 */

void FUN_10060c794(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong local_b0 [3];
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_b0[1] = *(long *)(param_5 + -8);
  lVar4 = (long)local_b0 - (*(long *)(local_b0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_b0[0] = param_1;
  local_b0[2] = param_7;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_Int_100eac6f8,param_4,0,0);
  puVar5 = (ulong *)(lVar4 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_2;
  local_60 = param_3;
  FUN_100611484(puVar5,FUN_100610190,auStack_90,lVar2,param_5,param_6,lVar4);
  if (unaff_x21 == 0) {
    uVar3 = *puVar5;
    (**(code **)(*(long *)(param_4 + -8) + 0x20))
              (local_b0[0],(long)puVar5 + (long)*(int *)(lVar2 + 0x30),param_4);
    if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c8dc);
      (*pcVar1)();
    }
    if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c8e0);
      (*pcVar1)();
    }
    if (CARRY4(*(uint *)(unaff_x20 + 8),(uint)uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060c8e4);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 8) = *(uint *)(unaff_x20 + 8) + (uint)uVar3;
  }
  else {
    (**(code **)(local_b0[1] + 0x20))(local_b0[2],lVar4,param_5);
  }
  return;
}



/* Address: 0x10060c8e4 | FUN_10060c8e4 */

void FUN_10060c8e4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint7 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  ulong *puVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong auStack_c0 [2];
  ulong local_b0 [3];
  undefined1 auStack_90 [16];
  long local_80;
  long lStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_b0[1] = *(long *)(param_5 + -8);
  lVar8 = (long)local_b0 - (*(long *)(local_b0[1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  local_b0[0] = param_1;
  local_b0[2] = param_7;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_Int_100eac6f8,param_4,0,0);
  puVar6 = (ulong *)(lVar8 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint7 *)(unaff_x20 + 2);
  local_80 = param_4;
  lStack_78 = param_5;
  local_70 = param_6;
  uStack_68 = param_2;
  local_60 = param_3;
  puVar6[-2] = lVar8;
  FUN_100611110(puVar6,FUN_10060f7c8,auStack_90,uVar1,uVar2,(ulong)uVar3,lVar5,param_5,param_6);
  if (unaff_x21 == 0) {
    uVar7 = *puVar6;
    (**(code **)(*(long *)(param_4 + -8) + 0x20))
              (local_b0[0],(long)puVar6 + (long)*(int *)(lVar5 + 0x30),param_4);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060ca4c);
      (*pcVar4)();
    }
    if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060ca50);
      (*pcVar4)();
    }
    uVar9 = (uint)uVar2;
    if (CARRY4(uVar9,(uint)uVar7)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060ca54);
      (*pcVar4)();
    }
    *(uint *)(unaff_x20 + 1) = uVar9 + (uint)uVar7;
  }
  else {
    (**(code **)(local_b0[1] + 0x20))(local_b0[2],lVar8,param_5);
  }
  return;
}



/* Address: 0x10060ca54 | FUN_10060ca54 */

void FUN_10060ca54(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(param_7 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  lVar1 = 0;
  _swift_getTupleTypeMetadata2(0,PTR___type_metadata_for_Swift_Int_100eac6f8,param_6,0,0);
  lVar1 = (long)param_1 + (long)*(int *)(lVar1 + 0x30);
  (*param_4)(lVar1,param_2,param_3,&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 == 0) {
    *param_1 = lVar1;
  }
  else {
    (**(code **)(lVar3 + 0x20))
              (param_9,&stack0xffffffffffffffa0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_7);
  }
  return;
}



/* Address: 0x10060cb28 | FUN_10060cb28 */

undefined8 FUN_10060cb28(undefined8 param_1,undefined8 param_2)

{
  FUN_10060cb90(param_1,param_2,_malloc,FUN_100611bf8,_free,FUN_100611c04);
  _swift_bridgeObjectRelease(param_2);
  return param_1;
}



/* Address: 0x10060cb90 | FUN_10060cb90 */

ulong FUN_10060cb90(UTF8View param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
  }
  else {
    uVar2 = Swift::String::UTF8View::_foreignCount(param_1);
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cc3c);
      (*pcVar1)();
    }
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar6 = DAT_101057be6;
    uVar5 = DAT_101057be4;
    uVar7 = DAT_101057be0;
    uVar3 = DAT_101057bd8._4_4_;
    uVar4 = (undefined4)DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cc40);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_3,param_4,param_5,param_6);
    _swift_beginAccess(uVar2 + 0x10,auStack_80,0,0);
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = *(undefined4 *)(uVar2 + 0x10);
  }
  local_68 = uVar2;
  local_60 = uVar4;
  local_5c = uVar3;
  local_58 = uVar7;
  local_54 = uVar5;
  local_52 = uVar6;
  FUN_10060b1ac(param_1.unknown,param_2,uVar3);
  if (!CARRY4(local_5c,(uint)param_1.unknown)) {
    return local_68;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ccfc);
  (*pcVar1)();
}



/* Address: 0x10060cd14 | FUN_10060cd14 */

undefined8
FUN_10060cd14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10060cd7c();
  _swift_bridgeObjectRelease(param_4);
  return param_1;
}



/* Address: 0x10060cd7c | FUN_10060cd7c */

ulong FUN_10060cd7c(Index param_1,Index param_2,_StringObject param_3,ulong param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  ulong uVar2;
  UnsafeBufferPointer<__int8> UVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  String SVar9;
  undefined1 auStack_a8 [24];
  undefined *local_90;
  ulong uStack_88;
  ulong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar2 = Swift::Substring::UTF8View::distance
                    (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cf14);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar7 = DAT_101057be6;
    uVar6 = DAT_101057be4;
    uVar8 = DAT_101057be0;
    uVar4 = DAT_101057bd8._4_4_;
    uVar5 = (undefined4)DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cf58);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_5,param_6,param_7,param_8);
    _swift_beginAccess(uVar2 + 0x10,auStack_a8,0,0);
    uVar5 = 0;
    uVar4 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = *(undefined4 *)(uVar2 + 0x10);
  }
  local_78 = uVar2;
  local_70 = uVar5;
  local_6c = uVar4;
  local_68 = uVar8;
  local_64 = uVar6;
  local_62 = uVar7;
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
        UVar3 = Swift::_StringObject::get_sharedUTF8(param_3);
      }
      else {
        UVar3.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      uStack_88 = param_4 & 0xffffffffffffff;
      UVar3.unknown = (undefined *)&local_90;
      local_90 = param_3.unknown;
    }
    FUN_10060f5a8(UVar3.unknown,param_1.cmsgPointer.unknown,param_2.cmsgPointer.unknown,
                  param_3.unknown,param_4,&local_78,uVar4);
    if ((long)UVar3.unknown < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cf0c);
      (*pcVar1)();
    }
    if ((ulong)UVar3.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cf10);
      (*pcVar1)();
    }
  }
  else {
    SVar9.bridgeObject = (void *)param_2.cmsgPointer.unknown;
    SVar9.str = (char *)param_1.cmsgPointer.unknown;
    SVar9 = Swift::String::__fromSubstring(SVar9);
    UVar3.unknown = SVar9.str;
    FUN_10060b1ac(UVar3.unknown,SVar9.bridgeObject,uVar4);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
  }
  if (!CARRY4(local_6c,(uint)UVar3.unknown)) {
    return local_78;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060cf54);
  (*pcVar1)();
}



/* Address: 0x10060cf88 | FUN_10060cf88 */

void FUN_10060cf88(void)

{
  FUN_10060cfc0();
  return;
}



/* Address: 0x10060cfc0 | FUN_10060cfc0 */

ulong FUN_10060cfc0(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  undefined1 auStack_90 [24];
  ulong local_78;
  undefined4 local_70;
  uint local_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  if ((param_3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d100);
    (*pcVar1)();
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d104);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar7 = DAT_101057be6;
    uVar6 = DAT_101057be4;
    uVar8 = DAT_101057be0;
    uVar3 = DAT_101057bd8._4_4_;
    uVar4 = (undefined4)DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
    uVar5 = 0;
  }
  else {
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d10c);
      (*pcVar1)();
    }
    uVar2 = param_2;
    FUN_100613fa8(param_2,param_4,param_5,param_6,param_7);
    _swift_beginAccess(uVar2 + 0x10,auStack_90,0,0);
    uVar4 = 0;
    uVar3 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = *(undefined4 *)(uVar2 + 0x10);
    uVar5 = param_2;
  }
  local_78 = uVar2;
  local_70 = uVar4;
  local_6c = uVar3;
  local_68 = uVar8;
  local_64 = uVar6;
  local_62 = uVar7;
  FUN_10060af44(param_1,param_2,param_3,uVar3);
  if (!CARRY4(local_6c,(uint)uVar5)) {
    return local_78;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d108);
  (*pcVar1)();
}



/* Address: 0x10060d124 | FUN_10060d124 */

undefined8 FUN_10060d124(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10060d330(param_1,_malloc,FUN_100611bf8,_free,FUN_100611c04,param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return uVar1;
}


