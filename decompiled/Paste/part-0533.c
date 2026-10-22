/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100617544 | FUN_100617544 */

void FUN_100617544(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7080 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67ec4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67ec4,&DAT_100eeb010);
  DAT_100fd7080 = pTVar1;
  return;
}



/* Address: 0x100617584 | FUN_100617584 */

void FUN_100617584(undefined8 param_1,long param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long local_80;
  long lStack_78;
  undefined8 local_70;
  code *pcStack_68;
  
  local_70 = param_5;
  pcStack_68 = param_4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_78 = CONCAT71(extraout_var,OVar1.value);
  local_80 = *(long *)(lStack_78 + -8);
  puVar3 = (undefined1 *)
           ((long)&local_80 - (*(long *)(local_80 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar5 = *(long *)(param_7 + -8);
  lVar6 = (long)puVar3 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10061772c();
  if (param_2 == 0) {
    (**(code **)(lVar5 + 0x38))(param_1,1,1,param_7);
  }
  else {
    (*pcStack_68)(puVar3);
    if (unaff_x21 == 0) {
      puVar2 = puVar3;
      (**(code **)(lVar5 + 0x30))(puVar3,1,param_7);
      if ((int)puVar2 != 1) {
        _swift_release(param_2);
        pcVar4 = *(code **)(lVar5 + 0x20);
        (*pcVar4)(lVar6,puVar3,param_7);
        (*pcVar4)(param_1,lVar6,param_7);
        (**(code **)(lVar5 + 0x38))(param_1,0,1,param_7);
        return;
      }
      (**(code **)(local_80 + 8))(puVar3,lStack_78);
      FUN_100617544();
      _swift_allocError(&DAT_100eeb010,puVar3,0,0);
      *puVar3 = 1;
      _swift_willThrow();
    }
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x10061772c | FUN_10061772c */

void FUN_10061772c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x20;
  
  uVar1 = *(uint *)(unaff_x20 + 8);
  uVar5 = (ulong)uVar1;
  FUN_1006177cc();
  if (uVar5 != 0) {
    lVar4 = *(long *)(*(long *)(param_3 + -8) + 0x40);
    uVar3 = (ulong)(uint)((int)((ulong)param_1 >> 0x20) - (int)param_1);
    uVar5 = lVar4 + uVar3;
    if (SCARRY8(lVar4,uVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006177c0);
      (*pcVar2)();
    }
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006177c4);
      (*pcVar2)();
    }
    if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006177c8);
      (*pcVar2)();
    }
    if (CARRY4(uVar1,(uint)uVar5)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006177cc);
      (*pcVar2)();
    }
    *(uint *)(unaff_x20 + 8) = uVar1 + (uint)uVar5;
  }
  return;
}



/* Address: 0x1006177cc | FUN_1006177cc */

long FUN_1006177cc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  Optional OVar2;
  bool bVar3;
  long lVar4;
  undefined7 extraout_var;
  __int64 _Var5;
  undefined8 uVar6;
  __uint64 _Var7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_c0 [8];
  undefined1 *local_b8;
  long local_b0;
  undefined8 local_a8;
  long local_a0;
  ulong local_98;
  long local_90;
  long local_88;
  ulong local_80;
  undefined8 local_78;
  long local_70;
  undefined8 local_68;
  
  local_80 = CONCAT44(local_80._4_4_,param_2);
  local_88 = *(long *)(param_8 + 8);
  local_a8 = *(undefined8 *)(*(long *)(local_88 + 0x18) + 0x10);
  lVar4 = 0;
  local_78 = param_5;
  local_70 = param_1;
  _swift_getAssociatedTypeWitness
            (0,local_a8,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  local_b8 = auStack_c0 + -(lVar8 + 0xfU & 0xfffffffffffffff0);
  local_b0 = lVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar1 = local_78;
  lVar10 = *(long *)(CONCAT71(extraout_var,OVar2.value) + -8);
  lVar14 = (long)(auStack_c0 + -(lVar8 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_7 + -8);
  local_90 = *(long *)(lVar8 + 0x40);
  uVar9 = local_90 + 0xfU & 0xfffffffffffffff0;
  local_a0 = lVar14 - uVar9;
  lVar13 = local_a0 - uVar9;
  lVar12 = lVar13 - uVar9;
  uVar9 = local_80 & 0xffffffff;
  local_98 = param_6;
  local_80 = param_4;
  FUN_100616088(lVar14,local_70,uVar9,param_7,param_4,local_78,param_6 & 0xffffffffffffff,param_7,
                param_8);
  lVar4 = lVar14;
  (**(code **)(lVar8 + 0x30))(lVar14,1,param_7);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar10 + 8))(lVar14,CONCAT71(extraout_var,OVar2.value));
    return 0;
  }
  (**(code **)(lVar8 + 0x20))(lVar12,lVar14,param_7);
  (**(code **)(lVar8 + 0x10))(lVar13,lVar12,param_7);
  lVar4 = local_88;
  bVar3 = Swift::BinaryInteger::get_isSigned();
  if ((bVar3) && (_Var5 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var5)) {
    local_68 = 0x8000000000000000;
    bVar3 = Swift::BinaryInteger::get_isSigned();
    if (bVar3) {
      _Var5 = Swift::BinaryInteger::get_bitWidth();
      if (_Var5 < 0x40) {
LAB_100617ad4:
        Swift::BinaryInteger::get__lowWord();
      }
      else {
LAB_1006179dc:
        FUN_10061602c();
        lVar10 = local_a0;
        Swift::BinaryInteger::_init
                  (local_a0,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_7,
                   lVar4);
        bVar3 = Swift::Comparable::<_infix
                          (lVar13,lVar10,param_7,*(undefined8 *)(*(long *)(lVar4 + 0x20) + 8));
        pcVar11 = *(code **)(lVar8 + 8);
        (*pcVar11)(lVar10,param_7);
        if (bVar3) goto LAB_100617b90;
      }
      goto LAB_100617ae4;
    }
    bVar3 = Swift::BinaryInteger::get_isSigned();
    _Var5 = Swift::BinaryInteger::get_bitWidth();
    lVar10 = local_b0;
    if (!bVar3) {
      if (_Var5 < 0x40) goto LAB_100617ad4;
      goto LAB_100617ae4;
    }
    if (0x40 < _Var5) goto LAB_1006179dc;
    uVar6 = local_a8;
    _swift_getAssociatedConformanceWitness
              (local_a8,param_7,local_b0,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(local_b8,&DAT_100c6c6b8,0x100,lVar10,uVar6);
    lVar10 = local_a0;
    Swift::ExpressibleByIntegerLiteral::_init();
    bVar3 = Swift::Comparable::<_infix
                      (lVar13,lVar10,param_7,*(undefined8 *)(*(long *)(lVar4 + 0x20) + 8));
    pcVar11 = *(code **)(lVar8 + 8);
    (*pcVar11)(lVar10,param_7);
    if (!bVar3) goto LAB_100617ad4;
LAB_100617b90:
    (*pcVar11)(lVar13,param_7);
    (*pcVar11)(lVar12,param_7);
  }
  else {
LAB_100617ae4:
    _Var5 = Swift::BinaryInteger::get_bitWidth();
    if ((0x40 < _Var5) ||
       ((_Var5 = Swift::BinaryInteger::get_bitWidth(), _Var5 == 0x40 &&
        (bVar3 = Swift::BinaryInteger::get_isSigned(), !bVar3)))) {
      local_68 = 0x7fffffffffffffff;
      bVar3 = Swift::BinaryInteger::get_isSigned();
      _Var5 = Swift::BinaryInteger::get_bitWidth();
      if (bVar3) {
        if (_Var5 < 0x41) {
LAB_100617be4:
          Swift::BinaryInteger::get__lowWord();
          goto LAB_100617bf4;
        }
      }
      else if (_Var5 < 0x40) goto LAB_100617be4;
      FUN_10061602c();
      lVar10 = local_a0;
      Swift::BinaryInteger::_init
                (local_a0,&local_68,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_7,lVar4)
      ;
      bVar3 = Swift::Comparable::<_infix
                        (lVar10,lVar13,param_7,*(undefined8 *)(*(long *)(lVar4 + 0x20) + 8));
      pcVar11 = *(code **)(lVar8 + 8);
      (*pcVar11)(lVar10,param_7);
      if (bVar3) goto LAB_100617b90;
    }
LAB_100617bf4:
    _Var7 = Swift::BinaryInteger::get__lowWord();
    pcVar11 = *(code **)(lVar8 + 8);
    (*pcVar11)(lVar13,param_7);
    lVar4 = local_70 + local_90;
    if (SCARRY8(local_70,local_90)) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100617c9c);
      (*pcVar11)();
    }
    thunk_FUN_10061160c(lVar4,_Var7,local_80,uVar1,local_98 & 0xffffffffffffff);
    (*pcVar11)(lVar12,param_7);
    if (lVar4 != 0) {
      return lVar4;
    }
  }
  return 0;
}



/* Address: 0x100617c9c | FUN_100617c9c */

void FUN_100617c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_1006177cc(param_4 & 0xffffffff,param_1,param_3,param_3,param_4,param_5 & 0xffffffffffffff,
                param_6,param_7);
  return;
}



/* Address: 0x100617cd4 | FUN_100617cd4 */

undefined1  [16] FUN_100617cd4(void)

{
  return ZEXT816(0x100eeb010);
}



/* Address: 0x100617ce4 | FUN_100617ce4 */

undefined1  [16] FUN_100617ce4(void)

{
  return ZEXT816(0x100eeb0a8);
}



/* Address: 0x100617cf4 | thunk_FUN_100617cf8 */

void thunk_FUN_100617cf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67f6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67f6c,&DAT_100eeb0a8);
  DAT_100fd7088 = pTVar1;
  return;
}



/* Address: 0x100617cf8 | FUN_100617cf8 */

void FUN_100617cf8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67f6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67f6c,&DAT_100eeb0a8);
  DAT_100fd7088 = pTVar1;
  return;
}



/* Address: 0x100617d38 | FUN_100617d38 */

void FUN_100617d38(long param_1,char param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_1 < (long)(param_4 & 0xffffffff)) ||
     ((long)((ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) - 8) <
      (long)(param_1 - (param_4 & 0xffffffff)))) {
    uVar2 = 1;
    uVar1 = 0;
  }
  else {
    _swift_beginAccess(param_3 + 0x18,auStack_60,0,0);
    uVar2 = 0;
    uVar3 = *(ulong *)(*(long *)(param_3 + 0x18) + (param_5 >> 0x18 & 0xffff00) +
                       (param_5 >> 0x30 & 0xff) + param_1);
    uVar1 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
    uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
    uVar1 = uVar1 >> 0x20 | uVar1 << 0x20;
    if (param_2 != '\0') {
      uVar1 = uVar3;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar1,uVar2);
  }
  return;
}



/* Address: 0x100617e10 | FUN_100617e10 */

void FUN_100617e10(long param_1,char param_2,long param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_1 < (long)(param_4 & 0xffffffff)) ||
     ((long)((ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) - 4) <
      (long)(param_1 - (param_4 & 0xffffffff)))) {
    uVar3 = 0x100000000;
  }
  else {
    _swift_beginAccess(param_3 + 0x18,auStack_60,0,0);
    uVar1 = *(uint *)(*(long *)(param_3 + 0x18) + (param_5 >> 0x18 & 0xffff00) +
                      (param_5 >> 0x30 & 0xff) + param_1);
    uVar2 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
    if (param_2 != '\0') {
      uVar2 = uVar1;
    }
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}



/* Address: 0x100617ee0 | FUN_100617ee0 */

void FUN_100617ee0(long param_1,char param_2,long param_3,ulong param_4,ulong param_5)

{
  ushort uVar1;
  uint uVar2;
  undefined1 auStack_60 [24];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_1 < (long)(param_4 & 0xffffffff)) ||
     ((long)((ulong)(uint)((int)(param_4 >> 0x20) - (int)param_4) - 2) <
      (long)(param_1 - (param_4 & 0xffffffff)))) {
    uVar2 = 0x10000;
  }
  else {
    _swift_beginAccess(param_3 + 0x18,auStack_60,0,0);
    uVar1 = *(ushort *)
             (*(long *)(param_3 + 0x18) + (param_5 >> 0x18 & 0xffff00) + (param_5 >> 0x30 & 0xff) +
             param_1);
    uVar2 = (uint)(uVar1 >> 8) | (uVar1 & 0xff00ff) << 8;
    if (param_2 != '\0') {
      uVar2 = (uint)uVar1;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar2);
  }
  return;
}



/* Address: 0x100617fb8 | FUN_100617fb8 */

void FUN_100617fb8(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  
  lVar4 = *(long *)(param_5 + -8);
  lVar6 = (long)&local_80 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + 0x10);
  lVar3 = *(long *)(lVar8 + -8);
  lVar5 = lVar6 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar5 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_5;
  local_78 = param_8;
  local_70 = param_3;
  local_68 = param_2;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar7);
  uVar2 = 1;
  lVar1 = lVar7;
  (**(code **)(lVar3 + 0x30))(lVar7,1,lVar8);
  if ((int)lVar1 != 1) {
    (**(code **)(lVar3 + 0x20))(lVar5,lVar7,lVar8);
    (*local_68)(param_1,lVar5,lVar6);
    (**(code **)(lVar3 + 8))(lVar5,lVar8);
    if (unaff_x21 != 0) {
      (**(code **)(lVar4 + 0x20))(local_78,lVar6,local_80);
      return;
    }
    uVar2 = 0;
  }
  (**(code **)(*(long *)(param_6 + -8) + 0x38))(param_1,uVar2,1);
  return;
}



/* Address: 0x100618118 | thunk_FUN_100618ff4 */

void thunk_FUN_100618ff4(void)

{
  FUN_100618ff4();
  return;
}



/* Address: 0x10061811c | FUN_10061811c */

undefined8 FUN_10061811c(ulong param_1)

{
  return *(undefined8 *)(&DAT_100c680a0 + (param_1 & 0xff) * 8);
}



/* Address: 0x100618130 | FUN_100618130 */

void FUN_100618130(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(0);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c680a0)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10061817c | FUN_10061817c */

void FUN_10061817c(undefined8 param_1,Hasher param_2)

{
  byte *unaff_x20;
  
  Swift::Hasher::_combine(*(__uint64 *)(&DAT_100c680a0 + (ulong)*unaff_x20 * 8),param_2);
  return;
}



/* Address: 0x1006181b0 | FUN_1006181b0 */

void FUN_1006181b0(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  byte *unaff_x20;
  
  bVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
                    /* WARNING: Load size is inaccurate */
  HVar2.unknown = (&DAT_100c680a0)[(ulong)bVar1 * 8];
  Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x1006181f8 | FUN_1006181f8 */

void FUN_1006181f8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_100618ff4();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100618220 | FUN_100618220 */

void FUN_100618220(undefined8 *param_1)

{
  byte *unaff_x20;
  
  *param_1 = *(undefined8 *)(&DAT_100c680a0 + (ulong)*unaff_x20 * 8);
  return;
}



/* Address: 0x100618238 | FUN_100618238 */

void FUN_100618238(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte local_b0 [16];
  long local_a0;
  long lStack_98;
  ulong local_88;
  undefined1 local_80;
  undefined1 auStack_78 [24];
  
  puVar1 = (uint *)(param_3 + 1);
  uVar3 = *puVar1;
  uVar8 = (ulong)uVar3;
  uVar10 = *(uint *)((long)param_3 + 0xc);
  uVar5 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)puVar1;
  uVar11 = *(undefined8 *)puVar1;
  if (uVar10 == uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010061829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_5 + -8) + 0x38))(param_1,1,1,param_5);
    return;
  }
  lVar12 = *param_3;
  uVar14 = (ulong)*(byte *)((long)param_3 + 0x16);
  uVar13 = (ulong)*(ushort *)((long)param_3 + 0x14);
  lVar7 = lVar12 + 0x18;
  _swift_beginAccess(lVar7,auStack_78,0,0);
  local_b0[0] = *(byte *)(*(long *)(lVar12 + 0x18) + uVar13 * 0x100 + uVar14 + uVar8);
  bVar2 = local_b0[0] >> 6 ^ 2;
  local_a0 = param_5;
  lStack_98 = param_6;
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      FUN_100617e10(uVar8,0,lVar12,uVar11,
                    uVar14 << 0x30 | uVar13 << 0x20 | (ulong)*(uint *)(param_3 + 2));
      if (((uint)(uVar8 >> 0x20) & 0xff) != 1) {
        if (0xfffffffb < uVar3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1006184fc);
          (*pcVar6)();
        }
        *(uint *)(param_3 + 1) = uVar3 + 4;
      }
      local_88._0_5_ = (undefined5)uVar8;
      puVar9 = &DAT_100fd7098;
      FUN_1000f7830(&DAT_100fd7098,&DAT_100c67fa8);
      pcVar6 = FUN_100619090;
    }
    else {
      uVar10 = 0;
      FUN_100617d38(uVar8,0,lVar12,uVar4,
                    uVar14 << 0x30 | uVar13 << 0x20 | (ulong)*(uint *)(param_3 + 2));
      if ((uVar10 & 0xff) != 1) {
        if (0xfffffff7 < uVar3) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100618500);
          (*pcVar6)();
        }
        *(uint *)(param_3 + 1) = uVar3 + 8;
      }
      local_80 = (undefined1)uVar10;
      puVar9 = &DAT_100fd7090;
      local_88 = uVar8;
      FUN_1000f7830(&DAT_100fd7090,&DAT_100c67fa0);
      pcVar6 = FUN_100619020;
    }
  }
  else {
    if (bVar2 == 2) {
      if (0xfffffffe < uVar3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006184f4);
        (*pcVar6)();
      }
      if (uVar3 + 1 <= uVar10) {
        *(uint *)(param_3 + 1) = uVar3 + 1;
        local_b0[0] = local_b0[0] & 0x3f;
        uVar11 = *(undefined8 *)(param_6 + 8);
        FUN_100615fec();
        Swift::BinaryInteger::_init
                  (param_1,local_b0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,lVar7,param_5,
                   uVar11);
        (**(code **)(*(long *)(param_5 + -8) + 0x38))(param_1,0,1,param_5);
        return;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1006184f8);
      (*pcVar6)();
    }
    FUN_100617ee0(uVar8,0,lVar12,uVar5,
                  uVar14 << 0x30 | uVar13 << 0x20 | (ulong)*(uint *)(param_3 + 2));
    if (((uint)uVar8 >> 0x10 & 0xff) != 1) {
      if (0xfffffffd < uVar3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100618504);
        (*pcVar6)();
      }
      *(uint *)(param_3 + 1) = uVar3 + 2;
    }
    local_88 = CONCAT53(local_88._3_5_,(int3)uVar8);
    puVar9 = &DAT_100fd70a0;
    FUN_1000f7830(&DAT_100fd70a0,&DAT_100c67fb0);
    pcVar6 = FUN_100619100;
  }
  FUN_100617fb8(param_1,pcVar6,local_b0,puVar9,PTR___type_metadata_for_Swift_Never_100eadc38,param_5
                ,PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  return;
}



/* Address: 0x100618504 | FUN_100618504 */

undefined8 FUN_100618504(ulong param_1)

{
  code *pcVar1;
  String SVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061854c);
    (*pcVar1)();
  }
  if (param_1 < 0x40) {
    return 1;
  }
  if (param_1 >> 0xe == 0) {
    return 2;
  }
  if (param_1 >> 0x1e == 0) {
    return 4;
  }
  if (param_1 >> 0x3e == 0) {
    return 8;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000033,0x8000000100daecb0,
             0xdaec90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006185a4);
  (*pcVar1)();
}



/* Address: 0x1006185a4 | FUN_1006185a4 */

undefined8 FUN_1006185a4(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  __int64 _Var5;
  __uint64 _Var6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  long lVar13;
  String SVar14;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  lVar8 = *(long *)(param_3 + 8);
  uVar11 = *(undefined8 *)(*(long *)(lVar8 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  puVar12 = auStack_70 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)puVar12 - uVar7;
  lVar9 = lVar10 - uVar7;
  (**(code **)(lVar13 + 0x10))(lVar9,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if (bVar2) {
    uVar4 = uVar11;
    _swift_getAssociatedConformanceWitness
              (uVar11,param_2,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar12,&DAT_100c6c6b8,0x100,lVar3,uVar4);
    Swift::ExpressibleByIntegerLiteral::_init();
    bVar2 = Swift::Comparable::>__infix
                      (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 8));
    (**(code **)(lVar13 + 8))(lVar10,param_2);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006188c4);
      (*pcVar1)();
    }
  }
  _Var5 = Swift::BinaryInteger::get_bitWidth();
  if (_Var5 < 0x40) goto LAB_100618840;
  local_68 = 0xffffffffffffffff;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var5 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (0x40 < _Var5) {
LAB_1006187e8:
      FUN_100619170();
      Swift::BinaryInteger::_init
                (lVar10,&local_68,PTR___type_metadata_for_Swift_UInt64_100eade90,_Var5,param_2,lVar8
                );
      bVar2 = Swift::Comparable::<_infix
                        (lVar10,lVar9,param_2,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 8));
      (**(code **)(lVar13 + 8))(lVar10,param_2);
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006188c8);
        (*pcVar1)();
      }
      goto LAB_100618840;
    }
    _swift_getAssociatedConformanceWitness
              (uVar11,param_2,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
               ,
               PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
              );
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar12,&DAT_100c6c6b8,0x100,lVar3,uVar11);
    Swift::ExpressibleByIntegerLiteral::_init();
    bVar2 = Swift::Comparable::>_infix
                      (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(lVar8 + 0x20) + 8));
    (**(code **)(lVar13 + 8))(lVar10,param_2);
    if (!bVar2) goto LAB_100618840;
  }
  else if (0x40 < _Var5) goto LAB_1006187e8;
  Swift::BinaryInteger::get__lowWord();
LAB_100618840:
  _Var6 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar13 + 8))(lVar9,param_2);
  if (_Var6 < 0x40) {
    uVar11 = 1;
  }
  else if (_Var6 < 0x4000) {
    uVar11 = 2;
  }
  else if (_Var6 >> 0x1e == 0) {
    uVar11 = 4;
  }
  else {
    if (_Var6 >> 0x3e != 0) {
      *(undefined4 *)(lVar9 + -8) = 0;
      *(undefined8 *)(lVar9 + -0x10) = 0x54;
      SVar14.bridgeObject = (void *)0x2;
      SVar14.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar14,(StaticString)0xd000000000000033,
                 0x8000000100daecb0,0xdaec90);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10061891c);
      (*pcVar1)();
    }
    uVar11 = 8;
  }
  return uVar11;
}



/* Address: 0x10061891c | FUN_10061891c */

void FUN_10061891c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  FUN_100618d28(param_1,param_2,param_4,param_5);
  return;
}



/* Address: 0x100618928 | FUN_100618928 */

void FUN_100618928(void)

{
  FUN_100618a10();
  return;
}



/* Address: 0x100618934 | FUN_100618934 */

void FUN_100618934(void)

{
  FUN_100618238();
  return;
}



/* Address: 0x100618940 | thunk_FUN_100618d28 */

void thunk_FUN_100618d28(void)

{
  FUN_100618d28();
  return;
}



/* Address: 0x100618944 | thunk_FUN_100618d3c */

void thunk_FUN_100618d3c(void)

{
  FUN_100618d3c();
  return;
}



/* Address: 0x100618948 | FUN_100618948 */

undefined8 FUN_100618948(undefined1 param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  local_39 = param_1;
  if (0xfffffffe < uVar2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100618a08);
    (*pcVar3)();
  }
  uVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = (uint)uVar5;
  if ((uVar5 & 1) == 0) {
    iVar1 = 0;
    if ((uint)unaff_x20[2] <= uVar2 + 1) {
      iVar1 = (uVar2 + 1) - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar1,uVar4 & 1);
  }
  FUN_100612380(1,uVar2);
  FUN_10061258c(&local_39,&local_38,uVar2);
  if (*(int *)((long)unaff_x20 + 0xc) != -1) {
    *(int *)((long)unaff_x20 + 0xc) = *(int *)((long)unaff_x20 + 0xc) + 1;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return 1;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100618a0c);
  (*pcVar3)();
}



/* Address: 0x100618a10 | FUN_100618a10 */

void FUN_100618a10(long param_1,long param_2,ulong *param_3,undefined8 param_4,undefined8 param_5)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  uint uVar4;
  __uint64 _Var5;
  ulong uVar6;
  StaticString file;
  String SVar7;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_2 < 9) {
    FUN_1006185a4(param_1,param_4,param_5);
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    if (param_1 < 4) {
      if (param_1 == 1) {
        Swift::BinaryInteger::get__lowWord();
        FUN_100618948();
LAB_100618c4c:
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      if (param_1 == 2) {
        _Var5 = Swift::BinaryInteger::get__lowWord();
        uVar2 = *(uint *)((long)param_3 + 0xc);
        local_50 = CONCAT62(local_50._2_6_,
                            (ushort)(_Var5 >> 8) & 0xff | 0x40 |
                            (ushort)(((uint)_Var5 & 0xff00ff) << 8));
        if (0xfffffffd < uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c84);
          (*pcVar3)();
        }
        uVar6 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = (uint)uVar6;
        if ((uVar6 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar2 + 2) {
            iVar1 = (uVar2 + 2) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar4 & 1);
        }
        FUN_100612380(2,uVar2);
        FUN_10061258c(&local_50,(long)&local_50 + 2,uVar2);
        if (0xfffffffd < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c90);
          (*pcVar3)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 2;
        goto LAB_100618c4c;
      }
    }
    else {
      if (param_1 == 4) {
        _Var5 = Swift::BinaryInteger::get__lowWord();
        uVar2 = *(uint *)((long)param_3 + 0xc);
        uVar4 = ((uint)_Var5 & 0xff00ff00 | 0x80000000) >> 8 | ((uint)_Var5 & 0xff00ff) << 8;
        local_50 = CONCAT44(local_50._4_4_,uVar4 >> 0x10 | uVar4 << 0x10);
        if (0xfffffffb < uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c80);
          (*pcVar3)();
        }
        uVar6 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = (uint)uVar6;
        if ((uVar6 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar2 + 4) {
            iVar1 = (uVar2 + 4) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar4 & 1);
        }
        FUN_100612380(4,uVar2);
        FUN_10061258c(&local_50,(long)&local_50 + 4,uVar2);
        if (0xfffffffb < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c8c);
          (*pcVar3)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 4;
        goto LAB_100618c4c;
      }
      if (param_1 == 8) {
        _Var5 = Swift::BinaryInteger::get__lowWord();
        uVar2 = *(uint *)((long)param_3 + 0xc);
        uVar6 = (_Var5 & 0xff00ff00ff00ff00 | 0xc000000000000000) >> 8 |
                (_Var5 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        local_50 = uVar6 >> 0x20 | uVar6 << 0x20;
        if (0xfffffff7 < uVar2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c88);
          (*pcVar3)();
        }
        uVar6 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = (uint)uVar6;
        if ((uVar6 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar2 + 8) {
            iVar1 = (uVar2 + 8) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar4 & 1);
        }
        FUN_100612380(8,uVar2);
        FUN_10061258c(&local_50,&local_48,uVar2);
        if (0xfffffff7 < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100618c94);
          (*pcVar3)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 8;
        goto LAB_100618c4c;
      }
    }
    file.unknown = (undefined *)0x6168636165726e55;
    _Var5 = 0xeb00000000656c62;
  }
  else {
    _Var5 = 0x8000000100daecf0;
    file.unknown = (undefined *)0xd00000000000003f;
  }
  SVar7.bridgeObject = (void *)0x2;
  SVar7.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar7,file,_Var5,0xdaec90);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100618d28);
  (*pcVar3)();
}



/* Address: 0x100618d28 | FUN_100618d28 */

void FUN_100618d28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100618a10(param_1,0,param_2,param_3,param_4);
  return;
}



/* Address: 0x100618d3c | FUN_100618d3c */

void FUN_100618d3c(ulong param_1,ulong param_2,ulong *param_3)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  StaticString file;
  __uint64 line;
  String SVar6;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((long)param_2 < 9) {
    uVar5 = param_1;
    FUN_100618504();
    if ((long)uVar5 <= (long)param_2) {
      uVar5 = param_2;
    }
    uVar3 = (uint)param_1;
    if ((long)uVar5 < 4) {
      if (uVar5 == 1) {
        FUN_100618948(param_1);
LAB_100618f1c:
        if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
          return;
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      if (uVar5 == 2) {
        uVar4 = *(uint *)((long)param_3 + 0xc);
        local_40 = CONCAT62(local_40._2_6_,
                            (ushort)(param_1 >> 8) & 0xff | 0x40 | (ushort)((uVar3 & 0xff00ff) << 8)
                           );
        if (0xfffffffd < uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f50);
          (*pcVar2)();
        }
        uVar5 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = (uint)uVar5;
        if ((uVar5 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar4 + 2) {
            iVar1 = (uVar4 + 2) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar3 & 1);
        }
        FUN_100612380(2,uVar4);
        FUN_10061258c(&local_40,(long)&local_40 + 2,uVar4);
        if (0xfffffffd < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f5c);
          (*pcVar2)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 2;
        goto LAB_100618f1c;
      }
    }
    else {
      if (uVar5 == 4) {
        uVar4 = *(uint *)((long)param_3 + 0xc);
        uVar3 = (uVar3 & 0xff00ff00 | 0x80000000) >> 8 | (uVar3 & 0xff00ff) << 8;
        local_40 = CONCAT44(local_40._4_4_,uVar3 >> 0x10 | uVar3 << 0x10);
        if (0xfffffffb < uVar4) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f4c);
          (*pcVar2)();
        }
        uVar5 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar3 = (uint)uVar5;
        if ((uVar5 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar4 + 4) {
            iVar1 = (uVar4 + 4) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar3 & 1);
        }
        FUN_100612380(4,uVar4);
        FUN_10061258c(&local_40,(long)&local_40 + 4,uVar4);
        if (0xfffffffb < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f58);
          (*pcVar2)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 4;
        goto LAB_100618f1c;
      }
      if (uVar5 == 8) {
        uVar3 = *(uint *)((long)param_3 + 0xc);
        uVar5 = (param_1 & 0xff00ff00ff00ff00 | 0xc000000000000000) >> 8 |
                (param_1 & 0xff00ff00ff00ff) << 8;
        uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
        local_40 = uVar5 >> 0x20 | uVar5 << 0x20;
        if (0xfffffff7 < uVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f54);
          (*pcVar2)();
        }
        uVar5 = *param_3;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar4 = (uint)uVar5;
        if ((uVar5 & 1) == 0) {
          iVar1 = 0;
          if ((uint)param_3[2] <= uVar3 + 8) {
            iVar1 = (uVar3 + 8) - (uint)param_3[2];
          }
          FUN_1000d2130();
          FUN_100612358(iVar1,uVar4 & 1);
        }
        FUN_100612380(8,uVar3);
        FUN_10061258c(&local_40,&local_38,uVar3);
        if (0xfffffff7 < *(uint *)((long)param_3 + 0xc)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100618f60);
          (*pcVar2)();
        }
        *(uint *)((long)param_3 + 0xc) = *(uint *)((long)param_3 + 0xc) + 8;
        goto LAB_100618f1c;
      }
    }
    file.unknown = (undefined *)0x6168636165726e55;
    line = 0xeb00000000656c62;
  }
  else {
    line = 0x8000000100daecf0;
    file.unknown = (undefined *)0xd00000000000003f;
  }
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar6,file,line,0xdaec90);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100618ff4);
  (*pcVar2)();
}



/* Address: 0x100618ff4 | FUN_100618ff4 */

undefined4 FUN_100618ff4(long param_1)

{
  undefined4 uVar1;
  
  uVar1 = (undefined4)(0x304040402040100 >> ((param_1 - 1U) * 8 & 0x3f));
  if (7 < param_1 - 1U) {
    uVar1 = 4;
  }
  return uVar1;
}



/* Address: 0x100619020 | FUN_100619020 */

void FUN_100619020(undefined8 param_1,ulong *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  ulong local_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  local_38 = *param_2 & 0x3fffffffffffffff;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 8);
  FUN_100619170();
  Swift::BinaryInteger::_init
            (param_1,&local_38,PTR___type_metadata_for_Swift_UInt64_100eade90,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100619090 | FUN_100619090 */

void FUN_100619090(undefined8 param_1,uint *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  uint local_34;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  local_34 = *param_2 & 0x3fffffff;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 8);
  FUN_100619254();
  Swift::BinaryInteger::_init
            (param_1,&local_34,PTR___type_metadata_for_Swift_UInt32_100eade50,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100619100 | FUN_100619100 */

void FUN_100619100(undefined8 param_1,ushort *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  ushort local_32;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  local_32 = *param_2 & 0x3fff;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 8);
  FUN_100619214();
  Swift::BinaryInteger::_init
            (param_1,&local_32,PTR___type_metadata_for_Swift_UInt16_100eade18,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x100619170 | FUN_100619170 */

void FUN_100619170(void)

{
  undefined *puVar1;
  
  if (DAT_100fd70a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadea8;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadea8,
             PTR___type_metadata_for_Swift_UInt64_100eade90);
  DAT_100fd70a8 = puVar1;
  return;
}



/* Address: 0x1006191b0 | thunk_FUN_1006191b4 */

void thunk_FUN_1006191b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67fb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67fb8,&DAT_100eeb1f0);
  DAT_100fd70b0 = pTVar1;
  return;
}



/* Address: 0x1006191b4 | FUN_1006191b4 */

void FUN_1006191b4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd70b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c67fb8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c67fb8,&DAT_100eeb1f0);
  DAT_100fd70b0 = pTVar1;
  return;
}



/* Address: 0x1006191f4 | FUN_1006191f4 */

undefined1  [16] FUN_1006191f4(void)

{
  return ZEXT816(0x100eeb158);
}



/* Address: 0x100619204 | FUN_100619204 */

undefined1  [16] FUN_100619204(void)

{
  return ZEXT816(0x100eeb1f0);
}



/* Address: 0x100619214 | FUN_100619214 */

void FUN_100619214(void)

{
  undefined *puVar1;
  
  if (DAT_100fd70b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int16_>Swift__BinaryInteger_100eade28;
  _swift_getWitnessTable
            (PTR_Swift____int16_>Swift__BinaryInteger_100eade28,
             PTR___type_metadata_for_Swift_UInt16_100eade18);
  DAT_100fd70b8 = puVar1;
  return;
}



/* Address: 0x100619254 | FUN_100619254 */

void FUN_100619254(void)

{
  undefined *puVar1;
  
  if (DAT_100fd70c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int32_>Swift__BinaryInteger_100eade60;
  _swift_getWitnessTable
            (PTR_Swift____int32_>Swift__BinaryInteger_100eade60,
             PTR___type_metadata_for_Swift_UInt32_100eade50);
  DAT_100fd70c0 = puVar1;
  return;
}



/* Address: 0x100619294 | thunk_FUN_10061811c */

void thunk_FUN_10061811c(void)

{
  FUN_10061811c();
  return;
}



/* Address: 0x100619298 | FUN_100619298 */

void FUN_100619298(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = (uint)((ulong)param_4 >> 0x20);
  uVar2 = (uint)(param_3 >> 0x20);
  uVar4 = (ulong)uVar2;
  if (uVar4 < (param_3 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006192e4);
    (*pcVar1)();
  }
  if (uVar4 <= (int)param_4 - (uVar3 >> 0x10 & 0xff | (uVar3 & 0xffff) << 8)) {
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)param_3;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 2) = (int)param_4;
    *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
    *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
    param_1[3] = param_3 & 0xffffffff;
    param_1[4] = uVar4;
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006192e8);
  (*pcVar1)();
}



/* Address: 0x1006192e8 | FUN_1006192e8 */

void FUN_1006192e8(void)

{
  undefined8 *unaff_x20;
  
  _swift_retain(*unaff_x20);
  return;
}



/* Address: 0x100619324 | FUN_100619324 */

void FUN_100619324(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  _swift_release(*unaff_x20);
  *unaff_x20 = param_1;
  *(int *)(unaff_x20 + 1) = (int)param_2;
  *(int *)((long)unaff_x20 + 0xc) = (int)((ulong)param_2 >> 0x20);
  *(int *)(unaff_x20 + 2) = (int)param_3;
  *(short *)((long)unaff_x20 + 0x14) = (short)((ulong)param_3 >> 0x20);
  *(char *)((long)unaff_x20 + 0x16) = (char)((ulong)param_3 >> 0x30);
  return;
}



/* Address: 0x100619388 | FUN_100619388 */

undefined1  [16] FUN_100619388(void)

{
  long unaff_x20;
  
  return *(undefined1 (*) [16])(unaff_x20 + 0x18);
}



/* Address: 0x100619390 | FUN_100619390 */

void FUN_100619390(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Address: 0x100619398 | FUN_100619398 */

void FUN_100619398(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  
  if ((-1 < param_5) &&
     (param_6 <=
      (long)(ulong)((int)param_4 -
                   ((uint)((ulong)param_4 >> 0x30) & 0xff |
                   (uint)((ulong)param_4 >> 0x18) & 0xffff00)))) {
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)param_3;
    *(int *)((long)param_1 + 0xc) = (int)((ulong)param_3 >> 0x20);
    *(int *)(param_1 + 2) = (int)param_4;
    *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
    *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
    param_1[3] = param_5;
    param_1[4] = param_6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006193e4);
  (*pcVar1)();
}



/* Address: 0x1006193e4 | FUN_1006193e4 */

void FUN_1006193e4(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  
  uVar3 = (uint)((ulong)param_4 >> 0x20);
  uVar2 = (uint)(param_3 >> 0x20);
  uVar4 = (ulong)uVar2;
  if (uVar4 < (param_3 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100619430);
    (*pcVar1)();
  }
  if (uVar4 <= (int)param_4 - (uVar3 >> 0x10 & 0xff | (uVar3 & 0xffff) << 8)) {
    *param_1 = param_2;
    *(int *)(param_1 + 1) = (int)param_3;
    *(uint *)((long)param_1 + 0xc) = uVar2;
    *(int *)(param_1 + 2) = (int)param_4;
    *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
    *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
    param_1[3] = param_3 & 0xffffffff;
    param_1[4] = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100619434);
  (*pcVar1)();
}



/* Address: 0x100619434 | FUN_100619434 */

bool FUN_100619434(long *param_1,char param_2)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  char *pcVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_58 [24];
  
  lVar10 = *param_1;
  uVar4 = *(ushort *)((long)param_1 + 0x14);
  bVar3 = *(byte *)((long)param_1 + 0x16);
  _swift_beginAccess(lVar10 + 0x18,auStack_58,0,0);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  if (!SBORROW8(uVar2,uVar1)) {
    if (uVar2 == uVar1) {
      bVar6 = false;
    }
    else {
      lVar9 = ~uVar1 + uVar2;
      pcVar8 = (char *)(*(long *)(lVar10 + 0x18) + (ulong)uVar4 * 0x100 + bVar3 + uVar1);
      do {
        bVar6 = *pcVar8 == param_2;
        bVar7 = lVar9 != 0;
        lVar9 = lVar9 + -1;
        pcVar8 = pcVar8 + 1;
      } while (!bVar6 && bVar7);
    }
    return bVar6;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1006194e4);
  (*pcVar5)();
}



/* Address: 0x1006194e4 | FUN_1006194e4 */

void FUN_1006194e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  uint7 uVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined8 auStack_80 [2];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long lStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  lVar5 = *(long *)(param_4 + -8);
  lVar3 = -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = *(uint7 *)(unaff_x20 + 2);
  local_60 = param_3;
  lStack_58 = param_4;
  local_50 = param_5;
  uStack_48 = param_1;
  local_40 = param_2;
  *(undefined1 **)((long)auStack_80 + lVar3) = auStack_70 + lVar3;
  FUN_100613244(FUN_10061c1a8,auStack_70,uVar1,uVar2,(ulong)uVar4,param_3,param_4,param_5);
  if (unaff_x21 != 0) {
    (**(code **)(lVar5 + 0x20))(param_6,auStack_70 + lVar3,param_4);
  }
  return;
}



/* Address: 0x100619594 | FUN_100619594 */

void FUN_100619594(long param_1,undefined8 param_2,code *param_3,undefined8 param_4,long param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *(long *)(param_7 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100619624);
    (*pcVar2)();
  }
  lVar1 = *(long *)(param_5 + 0x18);
  if (!SBORROW8(*(long *)(param_5 + 0x20),lVar1)) {
    (*param_3)(param_1 + lVar1,param_1 + lVar1 + (*(long *)(param_5 + 0x20) - lVar1),
               &stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0));
    if (unaff_x21 != 0) {
      (**(code **)(lVar4 + 0x20))
                (param_9,&stack0xffffffffffffffd0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_7);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100619620);
  (*pcVar2)();
}



/* Address: 0x100619624 | FUN_100619624 */

long FUN_100619624(long param_1)

{
  code *pcVar1;
  
  if (!SCARRY8(param_1,1)) {
    return param_1 + 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100619634);
  (*pcVar1)();
}



/* Address: 0x100619634 | FUN_100619634 */

long FUN_100619634(void)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x20) - *(long *)(unaff_x20 + 0x18);
}



/* Address: 0x100619640 | FUN_100619640 */

undefined1 FUN_100619640(long param_1)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 auStack_48 [24];
  
  if (param_1 < unaff_x20[3] || unaff_x20[4] <= param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006196cc);
    (*pcVar4)();
  }
  uVar1 = *(uint *)(unaff_x20 + 1);
  if ((long)(ulong)uVar1 <= param_1) {
    if ((long)(param_1 - (ulong)uVar1) < (long)(ulong)(*(int *)((long)unaff_x20 + 0xc) - uVar1)) {
      lVar5 = *unaff_x20;
      uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
      bVar2 = *(byte *)((long)unaff_x20 + 0x16);
      _swift_beginAccess(lVar5 + 0x18,auStack_48,0,0);
      return *(undefined1 *)
              (*(long *)(lVar5 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + param_1);
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006196d4);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006196d0);
  (*pcVar4)();
}



/* Address: 0x1006196d4 | FUN_1006196d4 */

void FUN_1006196d4(undefined1 param_1,ulong param_2)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined1 local_39;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((long)param_2 < (long)unaff_x20[3]) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006197a4);
    (*pcVar3)();
  }
  if ((long)unaff_x20[4] <= (long)param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006197a8);
    (*pcVar3)();
  }
  local_39 = param_1;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006197ac);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 == 0) {
    uVar1 = (uint)param_2 + 1;
    if (0xfffffffe < (uint)param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1006197b4);
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
    FUN_100612380(1,param_2);
    FUN_10061258c(&local_39,&local_38,param_2);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006197b0);
  (*pcVar3)();
}



/* Address: 0x1006197b8 | FUN_1006197b8 */

undefined1  [16] FUN_1006197b8(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  ushort uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  puVar5 = &DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar5 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xad05);
  }
  *param_1 = puVar5;
  *(long *)(puVar5 + 0x18) = param_2;
  *(long **)(puVar5 + 0x20) = unaff_x20;
  if ((param_2 < unaff_x20[3]) || (unaff_x20[4] <= param_2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10061988c);
    (*pcVar4)();
  }
  uVar1 = *(uint *)(unaff_x20 + 1);
  if (param_2 < (long)(ulong)uVar1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100619890);
    (*pcVar4)();
  }
  if ((long)(param_2 - (ulong)uVar1) < (long)(ulong)(*(int *)((long)unaff_x20 + 0xc) - uVar1)) {
    lVar6 = *unaff_x20;
    uVar3 = *(ushort *)((long)unaff_x20 + 0x14);
    bVar2 = *(byte *)((long)unaff_x20 + 0x16);
    _swift_beginAccess(lVar6 + 0x18,puVar5,0,0);
    puVar5[0x28] = *(undefined1 *)
                    (*(long *)(lVar6 + 0x18) + (ulong)uVar3 * 0x100 + (ulong)bVar2 + param_2);
    auVar7._8_8_ = puVar5 + 0x28;
    auVar7._0_8_ = FUN_100619894;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100619894);
  (*pcVar4)();
}



/* Address: 0x100619894 | FUN_100619894 */

void FUN_100619894(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  FUN_1006196d4(*(undefined1 *)((long)pvVar1 + 0x28),*(undefined8 *)((long)pvVar1 + 0x18));
  _free(pvVar1);
  return;
}



/* Address: 0x1006198c0 | FUN_1006198c0 */

void FUN_1006198c0(undefined8 *param_1,long param_2,long param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (-1 < param_2) {
    iVar1 = *(int *)(unaff_x20 + 2);
    uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
    uVar2 = *(undefined1 *)((long)unaff_x20 + 0x16);
    if (param_3 <= (long)(ulong)(iVar1 - (uint)CONCAT21(uVar3,uVar2))) {
      uVar6 = unaff_x20[1];
      uVar5 = *unaff_x20;
      FUN_1006100e8();
      param_1[1] = uVar6;
      *param_1 = uVar5;
      *(int *)(param_1 + 2) = iVar1;
      *(undefined2 *)((long)param_1 + 0x14) = uVar3;
      *(undefined1 *)((long)param_1 + 0x16) = uVar2;
      param_1[3] = param_2;
      param_1[4] = param_3;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100619954);
  (*pcVar4)();
}



/* Address: 0x100619954 | FUN_100619954 */

void FUN_100619954(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100619984(param_2,param_3,param_1);
  FUN_10060fd58(param_1);
  return;
}



/* Address: 0x100619984 | FUN_100619984 */

/* WARNING: Removing unreachable block (ram,0x000100619ce8) */
/* WARNING: Removing unreachable block (ram,0x000100619cc8) */

void FUN_100619984(ulong param_1,long param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  ulong *unaff_x20;
  uint uVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_80 [32];
  
  uVar11 = unaff_x20[3];
  if ((long)param_1 < (long)uVar11) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c68);
    (*pcVar6)();
  }
  uVar12 = unaff_x20[4];
  if ((long)uVar12 < param_2) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c6c);
    (*pcVar6)();
  }
  lVar2 = param_3[3];
  bVar7 = SBORROW8(param_3[4],lVar2);
  uVar5 = param_3[4] - lVar2;
  lVar15 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c70);
    (*pcVar6)();
  }
  uVar10 = lVar15 - uVar5;
  uVar14 = (uint)uVar5;
  uVar13 = (uint)param_1;
  if (uVar10 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c74);
      (*pcVar6)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c78);
      (*pcVar6)();
    }
    lVar15 = *param_3;
    uVar4 = *(ushort *)((long)param_3 + 0x14);
    bVar3 = *(byte *)((long)param_3 + 0x16);
    _swift_beginAccess(lVar15 + 0x18,auStack_80,0,0);
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c7c);
      (*pcVar6)();
    }
    if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c80);
      (*pcVar6)();
    }
    if (CARRY4(uVar13,uVar14)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c84);
      (*pcVar6)();
    }
    lVar2 = *(long *)(lVar15 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + lVar2;
    uVar11 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = (uint)uVar11;
    if ((uVar11 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar13 + uVar14) {
        iVar1 = (uVar13 + uVar14) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar8 & 1);
    }
    FUN_100612380(uVar5,param_1);
    FUN_10061258c(lVar2,lVar2 + uVar5,param_1);
  }
  else if (uVar10 == 0 || lVar15 < (long)uVar5) {
    if (SCARRY8(param_1,uVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c8c);
      (*pcVar6)();
    }
    if (SBORROW8((ulong)*(uint *)((long)unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c94);
      (*pcVar6)();
    }
    FUN_100611884(param_2,param_1 + uVar5,(ulong)*(uint *)((long)unaff_x20 + 0xc) - param_2);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c9c);
      (*pcVar6)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619ca4);
      (*pcVar6)();
    }
    lVar16 = *param_3;
    uVar4 = *(ushort *)((long)param_3 + 0x14);
    bVar3 = *(byte *)((long)param_3 + 0x16);
    _swift_beginAccess(lVar16 + 0x18,auStack_80,0,0);
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cac);
      (*pcVar6)();
    }
    if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cb4);
      (*pcVar6)();
    }
    if (CARRY4(uVar13,uVar14)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cbc);
      (*pcVar6)();
    }
    lVar2 = *(long *)(lVar16 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + lVar2;
    uVar10 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = (uint)uVar10;
    if ((uVar10 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar13 + uVar14) {
        iVar1 = (uVar13 + uVar14) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar8 & 1);
    }
    FUN_100612380(uVar5,param_1);
    FUN_10061258c(lVar2,lVar2 + uVar5,param_1);
    lVar2 = uVar5 - lVar15;
    if (SBORROW8(uVar5,lVar15)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cc0);
      (*pcVar6)();
    }
    FUN_100613ae4(lVar2);
    if (SCARRY8(uVar12,lVar2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cc4);
      (*pcVar6)();
    }
    if ((long)(uVar12 + lVar2) < (long)uVar11) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cc8);
      (*pcVar6)();
    }
    unaff_x20[3] = uVar11;
    unaff_x20[4] = uVar12 + lVar2;
  }
  else {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c88);
      (*pcVar6)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c90);
      (*pcVar6)();
    }
    lVar15 = *param_3;
    uVar4 = *(ushort *)((long)param_3 + 0x14);
    bVar3 = *(byte *)((long)param_3 + 0x16);
    _swift_beginAccess(lVar15 + 0x18,auStack_80,0,0);
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619c98);
      (*pcVar6)();
    }
    if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619ca0);
      (*pcVar6)();
    }
    if (CARRY4(uVar13,uVar14)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619ca8);
      (*pcVar6)();
    }
    lVar2 = *(long *)(lVar15 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + lVar2;
    uVar9 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = (uint)uVar9;
    if ((uVar9 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= uVar13 + uVar14) {
        iVar1 = (uVar13 + uVar14) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar8 & 1);
    }
    FUN_100612380(uVar5,param_1);
    FUN_10061258c(lVar2,lVar2 + uVar5,param_1);
    if (SBORROW8((ulong)*(uint *)((long)unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cb0);
      (*pcVar6)();
    }
    FUN_100611884(param_2,uVar5 + param_1,(ulong)*(uint *)((long)unaff_x20 + 0xc) - param_2);
    if (SBORROW8((ulong)*(uint *)((long)unaff_x20 + 0xc),uVar10)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100619cb8);
      (*pcVar6)();
    }
    FUN_100611284(*(uint *)((long)unaff_x20 + 0xc) - uVar10);
    FUN_10061b390(uVar10,uVar11,uVar12);
    unaff_x20[3] = uVar10;
    unaff_x20[4] = uVar11;
  }
  return;
}



/* Address: 0x100619d08 | FUN_100619d08 */

/* WARNING: Removing unreachable block (ram,0x000100619ec8) */
/* WARNING: Removing unreachable block (ram,0x000100619ea8) */

void FUN_100619d08(ulong param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if ((long)param_1 < lVar4) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e70);
    (*pcVar2)();
  }
  lVar5 = *(long *)(unaff_x20 + 0x20);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e74);
    (*pcVar2)();
  }
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e78);
    (*pcVar2)();
  }
  lVar3 = lVar1 + -1;
  if (lVar3 == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e7c);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e80);
      (*pcVar2)();
    }
    FUN_10060e8fc(param_3,param_1);
    return;
  }
  if (lVar1 < 1) {
    if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e88);
      (*pcVar2)();
    }
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e90);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1 + 1,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e98);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e9c);
      (*pcVar2)();
    }
    FUN_10060e8fc(param_3,param_1);
    lVar3 = 1 - lVar1;
    if (SBORROW8(1,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619ea0);
      (*pcVar2)();
    }
    FUN_100613ae4(lVar3);
    if (SCARRY8(lVar5,lVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619ea4);
      (*pcVar2)();
    }
    if (lVar5 + lVar3 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619ea8);
      (*pcVar2)();
    }
    *(long *)(unaff_x20 + 0x18) = lVar4;
    *(long *)(unaff_x20 + 0x20) = lVar5 + lVar3;
  }
  else {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e84);
      (*pcVar2)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e8c);
      (*pcVar2)();
    }
    FUN_10060e8fc(param_3,param_1);
    if (SBORROW8((ulong)*(uint *)(unaff_x20 + 0xc),param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100619e94);
      (*pcVar2)();
    }
    FUN_100611884(param_2,param_1 + 1,(ulong)*(uint *)(unaff_x20 + 0xc) - param_2);
    FUN_100611284((ulong)*(uint *)(unaff_x20 + 0xc) - lVar3);
    FUN_10061b390(lVar3,lVar4,lVar5);
    *(long *)(unaff_x20 + 0x18) = lVar3;
    *(long *)(unaff_x20 + 0x20) = lVar4;
  }
  return;
}


