/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10095c6e0 | FUN_10095c6e0 */

void FUN_10095c6e0(void)

{
  FUN_10095ee24();
  return;
}



/* Address: 0x10095c6f4 | FUN_10095c6f4 */

void FUN_10095c6f4(void)

{
  FUN_10095e9d0();
  return;
}



/* Address: 0x10095c708 | FUN_10095c708 */

void FUN_10095c708(void)

{
  FUN_10095ef78();
  return;
}



/* Address: 0x10095c71c | FUN_10095c71c */

void FUN_10095c71c(void)

{
  FUN_10095f038();
  return;
}



/* Address: 0x10095c730 | FUN_10095c730 */

void FUN_10095c730(void)

{
  FUN_10095f100();
  return;
}



/* Address: 0x10095c744 | FUN_10095c744 */

void FUN_10095c744(void)

{
  FUN_10095f1e0();
  return;
}



/* Address: 0x10095c758 | FUN_10095c758 */

void FUN_10095c758(void)

{
  FUN_10095f2e4();
  return;
}



/* Address: 0x10095c76c | FUN_10095c76c */

void FUN_10095c76c(void)

{
  FUN_10095f3d0();
  return;
}



/* Address: 0x10095c780 | FUN_10095c780 */

void FUN_10095c780(void)

{
  FUN_10095f4b0();
  return;
}



/* Address: 0x10095c794 | FUN_10095c794 */

void FUN_10095c794(void)

{
  FUN_10095f590();
  return;
}



/* Address: 0x10095c7a8 | FUN_10095c7a8 */

void FUN_10095c7a8(void)

{
  FUN_10095f660();
  return;
}



/* Address: 0x10095c7bc | FUN_10095c7bc */

void FUN_10095c7bc(void)

{
  FUN_10095f718();
  return;
}



/* Address: 0x10095c7d0 | FUN_10095c7d0 */

void FUN_10095c7d0(void)

{
  FUN_10095f7c8();
  return;
}



/* Address: 0x10095c7e4 | FUN_10095c7e4 */

void FUN_10095c7e4(void)

{
  FUN_10095f8d4();
  return;
}



/* Address: 0x10095c7f8 | FUN_10095c7f8 */

void FUN_10095c7f8(void)

{
  FUN_10095ebc4();
  return;
}



/* Address: 0x10095c80c | FUN_10095c80c */

void FUN_10095c80c(void)

{
  FUN_10095eed4();
  return;
}



/* Address: 0x10095c820 | FUN_10095c820 */

undefined * FUN_10095c820(void)

{
  return &DAT_100c861c0;
}



/* Address: 0x10095c82c | FUN_10095c82c */

uint FUN_10095c82c(uint param_1)

{
  return (uint)(param_1 < 0x17) & 0x404200U >> (ulong)(param_1 & 0x1f);
}



/* Address: 0x10095c848 | FUN_10095c848 */

void FUN_10095c848(int param_1)

{
  code *pcVar1;
  
  if ((param_1 != 9) && (param_1 != 0xe)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c860);
  (*pcVar1)();
}



/* Address: 0x10095c860 | FUN_10095c860 */

void FUN_10095c860(uint param_1)

{
  code *pcVar1;
  
  if ((param_1 < 0x17) && ((1 << (ulong)(param_1 & 0x1f) & 0x404200U) != 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095c888);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x10095c888 | FUN_10095c888 */

/* WARNING: Removing unreachable block (ram,0x00010095cb9c) */

void FUN_10095c888(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6,long param_7,long param_8)

{
  code *pcVar1;
  bool bVar2;
  __int32 _Var3;
  long lVar4;
  __int64 _Var5;
  __uint64 _Var6;
  undefined4 extraout_var;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x21;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long local_b0;
  undefined8 local_a8;
  uint local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  code *local_68;
  undefined8 local_58;
  undefined8 *puVar7;
  
  lVar13 = *(long *)(param_8 + 8);
  local_78 = *(undefined8 *)(*(long *)(lVar13 + 0x18) + 0x10);
  lVar4 = 0;
  local_a8 = param_4;
  local_9c = param_2;
  local_98 = param_1;
  local_70 = param_3;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_7,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar16 = (long)&local_b0 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_7 + -8);
  uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = lVar16 - uVar10;
  lVar14 = lVar15 - uVar10;
  local_90 = lVar4;
  local_68 = param_5;
  (*param_5)(lVar14);
  uVar8 = local_78;
  uVar11 = local_70;
  local_b0 = lVar16;
  local_88 = lVar15;
  local_80 = param_6;
  if (unaff_x21 != 0) {
    return;
  }
  do {
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (!bVar2) {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var5 = Swift::BinaryInteger::get_bitWidth();
      lVar4 = local_90;
      if (bVar2) {
        if (_Var5 < 0x41) {
          uVar11 = uVar8;
          _swift_getAssociatedConformanceWitness
                    (uVar8,param_7,local_90,
                     PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                     ,
                     PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                    );
          Swift::_ExpressibleByBuiltinIntegerLiteral::init
                    (local_b0,&DAT_100c6c6b8,0x100,lVar4,uVar11);
          lVar4 = local_88;
          Swift::ExpressibleByIntegerLiteral::_init();
          bVar2 = Swift::Comparable::>__infix
                            (lVar14,lVar4,param_7,*(undefined8 *)(*(long *)(lVar13 + 0x20) + 8));
          (**(code **)(lVar12 + 8))(lVar4,param_7);
          uVar11 = local_70;
          if (bVar2) goto LAB_10095cb4c;
        }
        else {
          local_58 = 0xffffffffffffffff;
          FUN_100908eec();
          lVar4 = local_88;
          Swift::BinaryInteger::_init
                    (local_88,&local_58,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_7,
                     lVar13);
          bVar2 = Swift::Equatable::___infix
                            (lVar14,lVar4,param_7,*(undefined8 *)(*(long *)(lVar13 + 0x10) + 8));
          (**(code **)(lVar12 + 8))(lVar4,param_7);
          uVar11 = local_70;
          if (bVar2) goto LAB_10095cb64;
        }
      }
      else {
        uVar11 = local_70;
        if (_Var5 < 0x40) goto LAB_10095cb4c;
      }
LAB_10095cba0:
      uVar8 = local_98;
      (**(code **)(lVar12 + 0x20))(local_98,lVar14,param_7);
      uVar11 = 1;
      goto LAB_10095cc44;
    }
    _Var5 = Swift::BinaryInteger::get_bitWidth();
    if (_Var5 < 0x40) {
LAB_10095cb4c:
      _Var6 = Swift::BinaryInteger::get__lowWord();
      if (_Var6 != 0xffffffffffffffff) goto LAB_10095cba0;
    }
    else {
      local_58 = 0xffffffffffffffff;
      FUN_100908eec();
      lVar4 = local_88;
      Swift::BinaryInteger::_init
                (local_88,&local_58,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_7,lVar13
                );
      bVar2 = Swift::Equatable::___infix
                        (lVar14,lVar4,param_7,*(undefined8 *)(*(long *)(lVar13 + 0x10) + 8));
      uVar8 = local_78;
      (**(code **)(lVar12 + 8))(lVar4,param_7);
      if (!bVar2) goto LAB_10095cba0;
    }
LAB_10095cb64:
    _Var3 = Darwin::get_errno();
    lVar4 = local_90;
    puVar7 = (undefined8 *)CONCAT44(extraout_var,_Var3);
    if (_Var3 != 4) {
      if (((local_9c & 1) == 0) || (_Var3 != 0x23)) {
        if ((_Var3 != 9) && (_Var3 != 0xe)) {
          FUN_1008d5300();
          _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
          uVar8 = local_a8;
          *puVar7 = uVar11;
          puVar7[1] = local_a8;
          *(__int32 *)(puVar7 + 2) = _Var3;
          _swift_willThrow();
          _swift_bridgeObjectRetain(uVar8);
          (**(code **)(lVar12 + 8))(lVar14,param_7);
          return;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ccf4);
        (*pcVar1)();
      }
      _swift_getAssociatedConformanceWitness
                (uVar8,param_7,local_90,
                 PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                 ,
                 PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                );
      Swift::_ExpressibleByBuiltinIntegerLiteral::init(local_b0,&DAT_100c6c6b8,0x100,lVar4,uVar8);
      uVar8 = local_98;
      Swift::ExpressibleByIntegerLiteral::_init();
      (**(code **)(lVar12 + 8))(lVar14,param_7);
      uVar11 = 0;
LAB_10095cc44:
      uVar9 = 0;
      FUN_100908624(0,param_7,*(undefined8 *)(*(long *)(lVar13 + 0x10) + 8));
      _swift_storeEnumTagMultiPayload(uVar8,uVar9,uVar11);
      return;
    }
    (**(code **)(lVar12 + 8))(lVar14,param_7);
    (*local_68)(lVar14);
  } while( true );
}



/* Address: 0x10095ccf4 | FUN_10095ccf4 */

void FUN_10095ccf4(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined4 extraout_var;
  long unaff_x21;
  undefined8 *puVar3;
  
  puVar3 = param_1;
  while( true ) {
    (*param_3)();
    if (unaff_x21 != 0) {
      return;
    }
    if (puVar3 != (undefined8 *)0x0) break;
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
    if (_Var2 != 4) {
      if ((_Var2 != 9) && (_Var2 != 0xe)) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
        *puVar3 = param_1;
        puVar3[1] = param_2;
        *(__int32 *)(puVar3 + 2) = _Var2;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_2);
        return;
      }
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095cda4);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x10095cda4 | FUN_10095cda4 */

void FUN_10095cda4(undefined8 param_1,undefined8 param_2,code *param_3,Darwin *param_4)

{
  code *pcVar1;
  __int32 _Var2;
  long lVar3;
  undefined4 extraout_var;
  long unaff_x21;
  undefined8 *puVar4;
  
  while( true ) {
    lVar3 = 0;
    Darwin::set_errno(param_4,0);
    (*param_3)();
    if (unaff_x21 != 0) {
      return;
    }
    if (lVar3 != 0) break;
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
    if (_Var2 != 4) {
      if (_Var2 != 0) {
        if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ce68);
          (*pcVar1)();
        }
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
        *puVar4 = param_1;
        puVar4[1] = param_2;
        *(__int32 *)(puVar4 + 2) = _Var2;
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_2);
      }
      return;
    }
  }
  return;
}



/* Address: 0x10095ce68 | FUN_10095ce68 */

/* WARNING: Removing unreachable block (ram,0x00010095d174) */

void FUN_10095ce68(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  code *pcVar1;
  bool bVar2;
  __int32 _Var3;
  long lVar4;
  __int64 _Var5;
  __uint64 _Var6;
  undefined4 extraout_var;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x21;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_58;
  undefined8 *puVar7;
  
  lVar14 = *(long *)(param_7 + 8);
  local_78 = *(undefined8 *)(*(long *)(lVar14 + 0x18) + 0x10);
  lVar4 = 0;
  local_98 = param_3;
  local_90 = param_1;
  local_88 = param_2;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_6,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar10 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar13 = *(long *)(param_6 + -8);
  uVar11 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_b0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) - uVar11;
  lVar15 = lVar16 - uVar11;
  (*param_4)(lVar15);
  uVar8 = local_88;
  local_a8 = auStack_b0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar4;
  local_80 = param_5;
  if (unaff_x21 != 0) {
    return;
  }
  do {
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (!bVar2) {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var5 = Swift::BinaryInteger::get_bitWidth();
      lVar4 = local_a0;
      if (bVar2) {
        if (_Var5 < 0x41) {
          uVar12 = local_78;
          _swift_getAssociatedConformanceWitness
                    (local_78,param_6,local_a0,
                     PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                     ,
                     PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                    );
          Swift::_ExpressibleByBuiltinIntegerLiteral::init
                    (local_a8,&DAT_100c6c6b8,0x100,lVar4,uVar12);
          Swift::ExpressibleByIntegerLiteral::_init();
          bVar2 = Swift::Comparable::>__infix
                            (lVar15,lVar16,param_6,*(undefined8 *)(*(long *)(lVar14 + 0x20) + 8));
          (**(code **)(lVar13 + 8))(lVar16,param_6);
          if (bVar2) goto LAB_10095d128;
        }
        else {
          local_58 = 0xffffffffffffffff;
          FUN_100908eec();
          Swift::BinaryInteger::_init
                    (lVar16,&local_58,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_6,
                     lVar14);
          bVar2 = Swift::Equatable::___infix
                            (lVar15,lVar16,param_6,*(undefined8 *)(*(long *)(lVar14 + 0x10) + 8));
          (**(code **)(lVar13 + 8))(lVar16,param_6);
          if (bVar2) goto LAB_10095d140;
        }
      }
      else if (_Var5 < 0x40) goto LAB_10095d128;
LAB_10095d208:
      uVar8 = local_90;
      (**(code **)(lVar13 + 0x20))(local_90,lVar15,param_6);
      uVar12 = 1;
      goto LAB_10095d224;
    }
    _Var5 = Swift::BinaryInteger::get_bitWidth();
    if (_Var5 < 0x40) {
LAB_10095d128:
      _Var6 = Swift::BinaryInteger::get__lowWord();
      if (_Var6 != 0xffffffffffffffff) goto LAB_10095d208;
    }
    else {
      local_58 = 0xffffffffffffffff;
      FUN_100908eec();
      Swift::BinaryInteger::_init
                (lVar16,&local_58,PTR___type_metadata_for_Swift_Int_100eac6f8,_Var5,param_6,lVar14);
      bVar2 = Swift::Equatable::___infix
                        (lVar15,lVar16,param_6,*(undefined8 *)(*(long *)(lVar14 + 0x10) + 8));
      (**(code **)(lVar13 + 8))(lVar16,param_6);
      if (!bVar2) goto LAB_10095d208;
    }
LAB_10095d140:
    _Var3 = Darwin::get_errno();
    uVar12 = local_98;
    lVar4 = local_a0;
    puVar7 = (undefined8 *)CONCAT44(extraout_var,_Var3);
    if (_Var3 != 4) {
      if (_Var3 < 0x23) {
        if (((_Var3 == 9) || (_Var3 == 0xe)) || (_Var3 == 0x16)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d2dc);
          (*pcVar1)();
        }
      }
      else if (_Var3 == 0x23) {
        uVar8 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_6,local_a0,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(local_a8,&DAT_100c6c6b8,0x100,lVar4,uVar8);
        uVar8 = local_90;
        Swift::ExpressibleByIntegerLiteral::_init();
        (**(code **)(lVar13 + 8))(lVar15,param_6);
        uVar12 = 0;
LAB_10095d224:
        uVar9 = 0;
        FUN_100908624(0,param_6,*(undefined8 *)(*(long *)(lVar14 + 0x10) + 8));
        _swift_storeEnumTagMultiPayload(uVar8,uVar9,uVar12);
        return;
      }
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
      *puVar7 = uVar8;
      puVar7[1] = uVar12;
      *(__int32 *)(puVar7 + 2) = _Var3;
      _swift_willThrow();
      _swift_bridgeObjectRetain(uVar12);
      (**(code **)(lVar13 + 8))(lVar15,param_6);
      return;
    }
    (**(code **)(lVar13 + 8))(lVar15,param_6);
    (*param_4)(lVar15);
  } while( true );
}



/* Address: 0x10095d2dc | FUN_10095d2dc */

void FUN_10095d2dc(void)

{
  DAT_10105820c = 0;
  return;
}



/* Address: 0x10095d2f4 | FUN_10095d2f4 */

void FUN_10095d2f4(void)

{
  DAT_10105821c = 3;
  return;
}



/* Address: 0x10095d30c | FUN_10095d30c */

void FUN_10095d30c(void)

{
  DAT_101058210 = 2;
  return;
}



/* Address: 0x10095d324 | FUN_10095d324 */

void FUN_10095d324(void)

{
  DAT_101058214 = 1;
  return;
}



/* Address: 0x10095d33c | FUN_10095d33c */

void FUN_10095d33c(void)

{
  DAT_101058218 = 3;
  return;
}



/* Address: 0x10095d354 | FUN_10095d354 */

void FUN_10095d354(void)

{
  DAT_101058224 = 0x3d;
  return;
}



/* Address: 0x10095d36c | FUN_10095d36c */

void FUN_10095d36c(void)

{
  DAT_101058220 = 0x2e;
  return;
}



/* Address: 0x10095d384 | FUN_10095d384 */

__int32 FUN_10095d384(UnsafePointer<__int8> param_1,__int32 param_2,__uint16 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 *puVar3;
  undefined4 extraout_var;
  
  do {
    _Var2 = Darwin::open(param_1,param_2,param_3);
    if (_Var2 != -1) {
      return _Var2;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000016;
    puVar3[1] = 0x8000000100daf9e0;
    *(__int32 *)(puVar3 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d44c);
  (*pcVar1)();
}



/* Address: 0x10095d44c | FUN_10095d44c */

__int32 FUN_10095d44c(UnsafePointer<__int8> param_1,__int32 param_2)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 *puVar3;
  undefined4 extraout_var;
  
  do {
    _Var2 = Darwin::open(param_1,param_2);
    if (_Var2 != -1) {
      return _Var2;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000011;
    puVar3[1] = 0x8000000100db5700;
    *(__int32 *)(puVar3 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d50c);
  (*pcVar1)();
}



/* Address: 0x10095d50c | FUN_10095d50c */

void FUN_10095d50c(int param_1,int param_2,int param_3,int *param_4)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  if (param_4 == (int *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d5dc);
    (*pcVar1)();
  }
  do {
    iVar2 = _socketpair(param_1,param_2,param_3,param_4);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000035;
    puVar4[1] = 0x8000000100db5720;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d5d8);
  (*pcVar1)();
}



/* Address: 0x10095d5dc | FUN_10095d5dc */

void FUN_10095d5dc(void)

{
  FUN_10095ecb4();
  return;
}



/* Address: 0x10095d5f0 | FUN_10095d5f0 */

void FUN_10095d5f0(char *param_1,void *param_2,stat *param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _stat(CVar4.unknown + 0x20,param_3);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000017;
    puVar5[1] = 0x8000000100db5960;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d6d0);
  (*pcVar1)();
}



/* Address: 0x10095d6d0 | FUN_10095d6d0 */

void FUN_10095d6d0(char *param_1,void *param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  ContiguousArray<__int8> CVar4;
  undefined4 extraout_var;
  String SVar6;
  undefined8 *puVar5;
  
  do {
    SVar6.bridgeObject = param_2;
    SVar6.str = param_1;
    CVar4 = Swift::String::get_utf8CString(SVar6);
    iVar2 = _unlink(CVar4.unknown + 0x20);
    _swift_release(CVar4.unknown);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar5 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
    *puVar5 = 0xd000000000000011;
    puVar5[1] = 0x8000000100db5940;
    *(__int32 *)(puVar5 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d7a0);
  (*pcVar1)();
}



/* Address: 0x10095d7a0 | FUN_10095d7a0 */

void FUN_10095d7a0(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _accept(param_1,param_2,param_3);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if (_Var3 != 0x23) {
    if ((_Var3 == 9) || (_Var3 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d884);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001c;
    puVar4[1] = 0x8000000100db5c90;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095d884 | FUN_10095d884 */

void FUN_10095d884(int param_1,sockaddr *param_2,ulong param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d950);
    (*pcVar1)();
  }
  if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d954);
    (*pcVar1)();
  }
  do {
    iVar2 = _bind(param_1,param_2,(socklen_t)param_3);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001b;
    puVar4[1] = 0x8000000100db5c70;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d958);
  (*pcVar1)();
}



/* Address: 0x10095d958 | FUN_10095d958 */

void FUN_10095d958(int param_1)

{
  code *pcVar1;
  __int32 _Var2;
  undefined4 extraout_var;
  undefined8 *puVar3;
  
  _close();
  if (param_1 == -1) {
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
    if (_Var2 != 4) {
      if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10095d9e8);
        (*pcVar1)();
      }
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
      *puVar3 = 0x65736f6c63;
      puVar3[1] = &DAT_e500000000000000;
      *(__int32 *)(puVar3 + 2) = _Var2;
      _swift_willThrow();
    }
  }
  return;
}



/* Address: 0x10095d9e8 | FUN_10095d9e8 */

uint FUN_10095d9e8(int param_1,sockaddr *param_2,socklen_t param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint extraout_w8;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  undefined *local_38;
  undefined8 *puVar4;
  
  do {
    iVar2 = _connect(param_1,param_2,param_3);
    if (iVar2 != -1) {
      uVar8 = 1;
      goto LAB_10095db48;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 == 9) || (_Var3 == 0xe)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095db6c);
    (*pcVar1)();
  }
  FUN_1008d5300();
  puVar5 = &DAT_100ef11e8;
  puVar7 = puVar4;
  _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
  *puVar7 = 0xd00000000000001e;
  puVar7[1] = 0x8000000100db5c50;
  *(__int32 *)(puVar7 + 2) = _Var3;
  _swift_willThrow();
  local_38 = puVar5;
  _swift_errorRetain(puVar5);
  puVar6 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  puVar7 = &local_58;
  _swift_dynamicCast(puVar7,&local_38,puVar6,&DAT_100ef11e8,0);
  if (((ulong)puVar7 & 1) != 0) {
    _swift_errorRelease(puVar5);
    if (local_48 == 0x24) {
      _swift_bridgeObjectRelease(local_50);
      _swift_errorRelease(local_38);
      uVar8 = 0;
      goto LAB_10095db48;
    }
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = local_58;
    puVar4[1] = local_50;
    *(int *)(puVar4 + 2) = local_48;
    _swift_willThrow();
  }
  _swift_errorRelease(local_38);
  uVar8 = extraout_w8;
LAB_10095db48:
  return uVar8 & 1;
}



/* Address: 0x10095db6c | FUN_10095db6c */

void FUN_10095db6c(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _getpeername(param_1,param_2,param_3);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000002a;
    puVar4[1] = 0x8000000100db5c20;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095dc2c);
  (*pcVar1)();
}



/* Address: 0x10095dc2c | FUN_10095dc2c */

void FUN_10095dc2c(int param_1,sockaddr *param_2,socklen_t *param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _getsockname(param_1,param_2,param_3);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000002a;
    puVar4[1] = 0x8000000100db5bf0;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095dcec);
  (*pcVar1)();
}



/* Address: 0x10095dcec | FUN_10095dcec */

void FUN_10095dcec(int param_1,int param_2,int param_3,void *param_4,socklen_t *param_5)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _getsockopt(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000003a;
    puVar4[1] = 0x8000000100db5bb0;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ddc4);
  (*pcVar1)();
}



/* Address: 0x10095ddc4 | FUN_10095ddc4 */

void FUN_10095ddc4(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _listen(param_1,param_2);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001b;
    puVar4[1] = 0x8000000100db5b90;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095de74);
  (*pcVar1)();
}



/* Address: 0x10095de74 | FUN_10095de74 */

void FUN_10095de74(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  long lVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    lVar3 = param_1;
    _read(param_1,param_2,param_3);
    if (lVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 < 0x23) {
    if (((_Var2 == 9) || (_Var2 == 0xe)) || (_Var2 == 0x16)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095df60);
      (*pcVar1)();
    }
  }
  else if (_Var2 == 0x23) {
    return;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
  *puVar4 = 0xd00000000000001e;
  puVar4[1] = 0x8000000100db5b70;
  *(__int32 *)(puVar4 + 2) = _Var2;
  _swift_willThrow();
  return;
}



/* Address: 0x10095df60 | FUN_10095df60 */

void FUN_10095df60(int param_1,msghdr *param_2,int param_3)

{
  code *pcVar1;
  __int32 _Var2;
  ssize_t sVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    sVar3 = _recvmsg(param_1,param_2,param_3);
    if (sVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e03c);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000021;
    puVar4[1] = 0x8000000100db5b40;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095e03c | FUN_10095e03c */

void FUN_10095e03c(int param_1,msghdr *param_2,int param_3)

{
  code *pcVar1;
  __int32 _Var2;
  ssize_t sVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    sVar3 = _sendmsg(param_1,param_2,param_3);
    if (sVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e118);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000021;
    puVar4[1] = 0x8000000100db5b10;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095e118 | FUN_10095e118 */

void FUN_10095e118(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  long lVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    lVar3 = param_1;
    _write(param_1,param_2,param_3);
    if (lVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e1f4);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001f;
    puVar4[1] = 0x8000000100db5af0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095e1f4 | FUN_10095e1f4 */

void FUN_10095e1f4(int param_1,iovec *param_2,long param_3)

{
  code *pcVar1;
  __int32 _Var2;
  ssize_t sVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  if (param_2 == (iovec *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e2f8);
    (*pcVar1)();
  }
  if (-0x80000001 < param_3) {
    if (0x7fffffff < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e2f0);
      (*pcVar1)();
    }
    do {
      sVar3 = _writev(param_1,param_2,(int)param_3);
      if (sVar3 != -1) {
        return;
      }
      _Var2 = Darwin::get_errno();
      puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
    } while (_Var2 == 4);
    if (_Var2 != 0x23) {
      if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e2f4);
        (*pcVar1)();
      }
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
      *puVar4 = 0xd00000000000001a;
      puVar4[1] = 0x8000000100db5ad0;
      *(__int32 *)(puVar4 + 2) = _Var2;
      _swift_willThrow();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e2ec);
  (*pcVar1)();
}



/* Address: 0x10095e2f8 | FUN_10095e2f8 */

void FUN_10095e2f8(int param_1,int param_2,int param_3,void *param_4,socklen_t param_5)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _setsockopt(param_1,param_2,param_3,param_4,param_5);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000003a;
    puVar4[1] = 0x8000000100db5a90;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e3d0);
  (*pcVar1)();
}



/* Address: 0x10095e3d0 | FUN_10095e3d0 */

void FUN_10095e3d0(int param_1,uint param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _shutdown(param_1,param_2 & 0xff);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000019;
    puVar4[1] = 0x8000000100db5a70;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e480);
  (*pcVar1)();
}



/* Address: 0x10095e480 | FUN_10095e480 */

int FUN_10095e480(int param_1,int param_2,int param_3)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _socket(param_1,param_2,param_3);
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000024;
    puVar4[1] = 0x8000000100db5a40;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e548);
  (*pcVar1)();
}



/* Address: 0x10095e548 | FUN_10095e548 */

void FUN_10095e548(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    uVar3 = param_1;
    FUN_100673408(param_1,param_2,param_3,param_4);
    if ((int)uVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e630);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000023;
    puVar4[1] = 0x8000000100db5a10;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095e630 | FUN_10095e630 */

void FUN_10095e630(int param_1,void *param_2,size_t param_3,off_t param_4)

{
  code *pcVar1;
  __int32 _Var2;
  ssize_t sVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    sVar3 = _pread(param_1,param_2,param_3,param_4);
    if (sVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 < 0x23) {
    if (((_Var2 == 9) || (_Var2 == 0xe)) || (_Var2 == 0x16)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e724);
      (*pcVar1)();
    }
  }
  else if (_Var2 == 0x23) {
    return;
  }
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
  *puVar4 = 0xd000000000000026;
  puVar4[1] = 0x8000000100db59e0;
  *(__int32 *)(puVar4 + 2) = _Var2;
  _swift_willThrow();
  return;
}



/* Address: 0x10095e724 | FUN_10095e724 */

void FUN_10095e724(int param_1,void *param_2,size_t param_3,off_t param_4)

{
  code *pcVar1;
  __int32 _Var2;
  ssize_t sVar3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    sVar3 = _pwrite(param_1,param_2,param_3,param_4);
    if (sVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if (_Var2 != 0x23) {
    if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e808);
      (*pcVar1)();
    }
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000027;
    puVar4[1] = 0x8000000100db59b0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x10095e808 | FUN_10095e808 */

void FUN_10095e808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 uVar3;
  undefined4 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 local_70;
  undefined8 local_68;
  int local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_48;
  undefined8 *puVar4;
  
  uVar7 = 0;
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  do {
    uVar3 = param_2;
    local_50 = param_4;
    _sendfile(param_2,param_1,param_3,&local_50,0,0);
    if ((int)uVar3 != -1) goto LAB_10095e994;
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 == 9) || (_Var2 == 0xe)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10095e9cc);
    (*pcVar1)();
  }
  FUN_1008d5300();
  puVar5 = &DAT_100ef11e8;
  puVar8 = puVar4;
  _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
  *puVar8 = 0xd000000000000025;
  puVar8[1] = 0x8000000100db5980;
  *(__int32 *)(puVar8 + 2) = _Var2;
  _swift_willThrow();
  local_58 = puVar5;
  _swift_errorRetain(puVar5);
  puVar6 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  _swift_dynamicCast(&local_70,&local_58,puVar6,&DAT_100ef11e8,0);
  if ((uVar7 & 1) != 0) {
    _swift_errorRelease(puVar5);
    if (local_60 == 0x23) {
      _swift_bridgeObjectRelease(local_68);
      _swift_errorRelease(local_58);
      goto LAB_10095e994;
    }
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = local_70;
    puVar4[1] = local_68;
    *(int *)(puVar4 + 2) = local_60;
    _swift_willThrow();
  }
  _swift_errorRelease(local_58);
LAB_10095e994:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x10095e9d0 | FUN_10095e9d0 */

__int32 FUN_10095e9d0(__int32 param_1,__int32 param_2,__int32 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 *puVar3;
  undefined4 extraout_var;
  
  do {
    _Var2 = Darwin::fcntl(param_1,param_2,param_3);
    if (_Var2 != -1) {
      return _Var2;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000020;
    puVar3[1] = 0x8000000100db58f0;
    *(__int32 *)(puVar3 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ea98);
  (*pcVar1)();
}



/* Address: 0x10095ea98 | FUN_10095ea98 */

/* WARNING: Removing unreachable block (ram,0x00010095ead4) */
/* WARNING: Removing unreachable block (ram,0x00010095eb18) */
/* WARNING: Removing unreachable block (ram,0x00010095eb70) */
/* WARNING: Removing unreachable block (ram,0x00010095eb30) */
/* WARNING: Removing unreachable block (ram,0x00010095eb60) */

void FUN_10095ea98(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  
  uVar1 = param_1;
  FUN_10095e9d0(param_1,3,0);
  if (unaff_x21 == 0) {
    FUN_10095e9d0(param_1,4,(uint)uVar1 | 4);
  }
  return;
}



/* Address: 0x10095ebc4 | FUN_10095ebc4 */

int FUN_10095ebc4(int param_1,kevent *param_2,int param_3,kevent *param_4,int param_5,
                 timespec *param_6)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _kevent(param_1,param_2,param_3,param_4,param_5,param_6);
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000039;
    puVar4[1] = 0x8000000100db5780;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ecb4);
  (*pcVar1)();
}



/* Address: 0x10095ecb4 | FUN_10095ecb4 */

void FUN_10095ecb4(__int32 param_1,__uint64 param_2,UnsafeMutableRawPointer param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 *puVar3;
  undefined4 extraout_var;
  
  do {
    _Var2 = Darwin::ioctl(param_1,param_2,param_3);
    if (_Var2 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000016;
    puVar3[1] = 0x8000000100db5760;
    *(__int32 *)(puVar3 + 2) = _Var2;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ed74);
  (*pcVar1)();
}



/* Address: 0x10095ed74 | FUN_10095ed74 */

void FUN_10095ed74(int param_1,stat *param_2)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _fstat(param_1,param_2);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd00000000000001a;
    puVar4[1] = 0x8000000100db5920;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ee24);
  (*pcVar1)();
}



/* Address: 0x10095ee24 | FUN_10095ee24 */

int FUN_10095ee24(int param_1)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _dup(param_1);
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000010;
    puVar4[1] = 0x8000000100dafa00;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095eed4);
  (*pcVar1)();
}



/* Address: 0x10095eed4 | FUN_10095eed4 */

int FUN_10095eed4(void)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  undefined8 *puVar4;
  
  do {
    iVar2 = _kqueue();
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0x292865756575716b;
    puVar4[1] = &DAT_e800000000000000;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10095ef78);
  (*pcVar1)();
}


