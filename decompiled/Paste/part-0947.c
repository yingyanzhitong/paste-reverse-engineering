/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a3875c | FUN_100a3875c */

undefined8 FUN_100a3875c(void)

{
  return 0x100c8f2e0;
}



/* Address: 0x100a38768 | FUN_100a38768 */

undefined1  [16] FUN_100a38768(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1000;
  auVar1._0_8_ = 1;
  return auVar1;
}



/* Address: 0x100a38774 | FUN_100a38774 */

undefined8 FUN_100a38774(void)

{
  return 0x100c8f2f0;
}



/* Address: 0x100a38780 | FUN_100a38780 */

undefined1  [16] FUN_100a38780(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1000000;
  auVar1._0_8_ = 2;
  return auVar1;
}



/* Address: 0x100a38790 | FUN_100a38790 */

undefined8 FUN_100a38790(void)

{
  return 0x100c8f300;
}



/* Address: 0x100a3879c | FUN_100a3879c */

undefined1  [16] FUN_100a3879c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 1000000000;
  auVar1._0_8_ = 3;
  return auVar1;
}



/* Address: 0x100a387ac | FUN_100a387ac */

undefined8 FUN_100a387ac(void)

{
  return 0x100c8f310;
}



/* Address: 0x100a387b8 | FUN_100a387b8 */

undefined1  [16] FUN_100a387b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 60000000000;
  auVar1._0_8_ = 4;
  return auVar1;
}



/* Address: 0x100a387cc | FUN_100a387cc */

undefined8 FUN_100a387cc(void)

{
  return 0x100c8f320;
}



/* Address: 0x100a387d8 | FUN_100a387d8 */

undefined1  [16] FUN_100a387d8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 3600000000000;
  auVar1._0_8_ = 5;
  return auVar1;
}



/* Address: 0x100a387ec | FUN_100a387ec */

undefined8 FUN_100a387ec(void)

{
  return 0x100c8f330;
}



/* Address: 0x100a387f8 | FUN_100a387f8 */

undefined1  [16] FUN_100a387f8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 86400000000000;
  auVar1._0_8_ = 6;
  return auVar1;
}



/* Address: 0x100a38808 | FUN_100a38808 */

bool FUN_100a38808(char param_1,long param_2,char param_3,long param_4)

{
  return param_1 == param_3 && param_2 == param_4;
}



/* Address: 0x100a3881c | FUN_100a3881c */

bool FUN_100a3881c(char *param_1,char *param_2)

{
  if (*param_1 == *param_2) {
    return *(long *)(param_1 + 8) == *(long *)(param_2 + 8);
  }
  return false;
}



/* Address: 0x100a38848 | FUN_100a38848 */

long FUN_100a38848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  FUN_100076508(param_6,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a388c0 | FUN_100a388c0 */

void FUN_100a388c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  FUN_100076508(param_6,unaff_x20 + 0x20);
  return;
}



/* Address: 0x100a388ec | FUN_100a388ec */

long FUN_100a388ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_68 [40];
  
  FUN_100a36fb8(auStack_68);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = param_4;
  *(undefined8 *)(unaff_x20 + 0x18) = param_5;
  FUN_100076508(auStack_68,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a38968 | FUN_100a38968 */

void FUN_100a38968(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar1 + 0x10))(param_1,uVar2,lVar1);
  return;
}



/* Address: 0x100a389b0 | FUN_100a389b0 */

void FUN_100a389b0(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  undefined8 uVar5;
  __uint64 _Var6;
  ulong uVar7;
  __uint64 _Var8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  
  local_78 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  puVar12 = auStack_80 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(param_2 + -8);
  uVar7 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)puVar12 - uVar7;
  lVar10 = lVar9 - uVar7;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if (bVar2) {
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (0x3f < _Var4) goto LAB_100a38b64;
LAB_100a38b44:
    _Var6 = Swift::BinaryInteger::get__lowWord();
    _Var8 = 0x7fffffffffffffff;
    if (_Var6 == 0x7fffffffffffffff) goto LAB_100a38e84;
  }
  else {
    bVar2 = Swift::BinaryInteger::get_isSigned();
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (bVar2) {
      if (_Var4 < 0x41) {
        uVar5 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar12,&DAT_100c6c6b8,0x100,lVar3,uVar5);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (param_1,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar11 + 8))(lVar10,param_2);
        if (!bVar2) goto LAB_100a38b44;
        goto LAB_100a38bc4;
      }
    }
    else if (_Var4 < 0x40) goto LAB_100a38b44;
LAB_100a38b64:
    _Var8 = 0x7fffffffffffffff;
    local_68 = 0x7fffffffffffffff;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar10,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (param_1,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar11 + 8))(lVar10,param_2);
    if (!bVar2) goto LAB_100a38e84;
  }
LAB_100a38bc4:
  (**(code **)(lVar11 + 0x10))(lVar9,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a38c6c:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar10,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar11 + 8))(lVar10,param_2);
        if (bVar2) {
LAB_100a38ec8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a38ecc);
          (*pcVar1)();
        }
        goto LAB_100a38d6c;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a38c6c;
        uVar5 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(puVar12,&DAT_100c6c6b8,0x100,lVar3,uVar5);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar9,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar11 + 8))(lVar10,param_2);
        if (bVar2) goto LAB_100a38ec8;
      }
      else if (0x3f < _Var4) goto LAB_100a38d6c;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a38d6c:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((0x40 < _Var4) ||
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 == 0x40 &&
      (bVar2 = Swift::BinaryInteger::get_isSigned(), !bVar2)))) {
    local_68 = 0x7fffffffffffffff;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (bVar2) {
      if (_Var4 < 0x41) {
LAB_100a38e50:
        Swift::BinaryInteger::get__lowWord();
        goto LAB_100a38e60;
      }
    }
    else if (_Var4 < 0x40) goto LAB_100a38e50;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar10,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar10,lVar9,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar11 + 8))(lVar10,param_2);
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a38e18);
      (*pcVar1)();
    }
  }
LAB_100a38e60:
  _Var8 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar11 + 8))(lVar9,param_2);
LAB_100a38e84:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar5);
  (**(code **)(lVar3 + 0x10))(_Var8,uVar5,lVar3);
  return;
}



/* Address: 0x100a38ecc | FUN_100a38ecc */

void FUN_100a38ecc(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  undefined8 uVar5;
  __uint64 _Var6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  
  local_78 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar12 = *(long *)(param_2 + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) - uVar8;
  lVar11 = lVar10 - uVar8;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) goto LAB_100a39008;
LAB_100a38f9c:
    local_68 = 0x7fffffffffffffff;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    lVar9 = 0x7fffffffffffffff;
    if (bVar2) goto LAB_100a392f0;
  }
  else {
    if (0x3f < _Var4) goto LAB_100a38f9c;
LAB_100a39008:
    Swift::BinaryInteger::get__lowWord();
  }
  (**(code **)(lVar12 + 0x10))(lVar10,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a390c0:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) {
LAB_100a39334:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a39338);
          (*pcVar1)();
        }
        goto LAB_100a391c0;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a390c0;
        uVar5 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init
                  (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_100c6c6b8,0x100,lVar3,
                   uVar5);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) goto LAB_100a39334;
      }
      else if (0x3f < _Var4) goto LAB_100a391c0;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a391c0:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((0x40 < _Var4) ||
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 == 0x40 &&
      (bVar2 = Swift::BinaryInteger::get_isSigned(), !bVar2)))) {
    local_68 = 0x7fffffffffffffff;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (bVar2) {
      if (_Var4 < 0x41) {
LAB_100a392a4:
        Swift::BinaryInteger::get__lowWord();
        goto LAB_100a392b4;
      }
    }
    else if (_Var4 < 0x40) goto LAB_100a392a4;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3926c);
      (*pcVar1)();
    }
  }
LAB_100a392b4:
  _Var6 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar12 + 8))(lVar10,param_2);
  lVar9 = 0x7fffffffffffffff;
  if (SUB168(SEXT816((long)_Var6) * SEXT816(1000),8) == (long)(_Var6 * 1000) >> 0x3f) {
    lVar9 = _Var6 * 1000;
  }
LAB_100a392f0:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar5);
  (**(code **)(lVar3 + 0x10))(lVar9,uVar5,lVar3);
  return;
}



/* Address: 0x100a39338 | FUN_100a39338 */

void FUN_100a39338(void)

{
  FUN_100a39c48();
  return;
}



/* Address: 0x100a39348 | FUN_100a39348 */

void FUN_100a39348(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  undefined8 uVar5;
  __uint64 _Var6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  
  local_78 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar12 = *(long *)(param_2 + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) - uVar8;
  lVar11 = lVar10 - uVar8;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) goto LAB_100a39484;
LAB_100a39418:
    local_68 = 0x7fffffffffffffff;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    lVar9 = 0x7fffffffffffffff;
    if (bVar2) goto LAB_100a39770;
  }
  else {
    if (0x3f < _Var4) goto LAB_100a39418;
LAB_100a39484:
    Swift::BinaryInteger::get__lowWord();
  }
  (**(code **)(lVar12 + 0x10))(lVar10,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a3953c:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) {
LAB_100a397b4:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a397b8);
          (*pcVar1)();
        }
        goto LAB_100a3963c;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a3953c;
        uVar5 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init
                  (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_100c6c6b8,0x100,lVar3,
                   uVar5);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) goto LAB_100a397b4;
      }
      else if (0x3f < _Var4) goto LAB_100a3963c;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a3963c:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((0x40 < _Var4) ||
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 == 0x40 &&
      (bVar2 = Swift::BinaryInteger::get_isSigned(), !bVar2)))) {
    local_68 = 0x7fffffffffffffff;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (bVar2) {
      if (_Var4 < 0x41) {
LAB_100a39720:
        Swift::BinaryInteger::get__lowWord();
        goto LAB_100a39730;
      }
    }
    else if (_Var4 < 0x40) goto LAB_100a39720;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a396e8);
      (*pcVar1)();
    }
  }
LAB_100a39730:
  _Var6 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar12 + 8))(lVar10,param_2);
  lVar9 = 0x7fffffffffffffff;
  if (SUB168(SEXT816((long)_Var6) * SEXT816(1000000),8) == (long)(_Var6 * 1000000) >> 0x3f) {
    lVar9 = _Var6 * 1000000;
  }
LAB_100a39770:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar5);
  (**(code **)(lVar3 + 0x10))(lVar9,uVar5,lVar3);
  return;
}



/* Address: 0x100a397b8 | FUN_100a397b8 */

void FUN_100a397b8(void)

{
  FUN_100a39c48();
  return;
}



/* Address: 0x100a397c8 | FUN_100a397c8 */

void FUN_100a397c8(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  undefined8 uVar5;
  __uint64 _Var6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined8 local_68;
  
  local_78 = *(undefined8 *)(*(long *)(param_3 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,local_78,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar7 = *(long *)(*(long *)(lVar3 + -8) + 0x40);
  lVar12 = *(long *)(param_2 + -8);
  uVar8 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)(auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) - uVar8;
  lVar11 = lVar10 - uVar8;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) goto LAB_100a39904;
LAB_100a39898:
    local_68 = 0x7fffffffffffffff;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,param_1,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    lVar9 = 0x7fffffffffffffff;
    if (bVar2) goto LAB_100a39bf0;
  }
  else {
    if (0x3f < _Var4) goto LAB_100a39898;
LAB_100a39904:
    Swift::BinaryInteger::get__lowWord();
  }
  (**(code **)(lVar12 + 0x10))(lVar10,param_1,param_2);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_68 = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100a399bc:
        FUN_100a3a714();
        Swift::BinaryInteger::_init
                  (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,
                   param_3);
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) {
LAB_100a39c34:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100a39c38);
          (*pcVar1)();
        }
        goto LAB_100a39abc;
      }
    }
    else {
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100a399bc;
        uVar5 = local_78;
        _swift_getAssociatedConformanceWitness
                  (local_78,param_2,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init
                  (auStack_80 + -(lVar7 + 0xfU & 0xfffffffffffffff0),&DAT_100c6c6b8,0x100,lVar3,
                   uVar5);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar10,lVar11,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
        (**(code **)(lVar12 + 8))(lVar11,param_2);
        if (bVar2) goto LAB_100a39c34;
      }
      else if (0x3f < _Var4) goto LAB_100a39abc;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100a39abc:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((0x40 < _Var4) ||
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 == 0x40 &&
      (bVar2 = Swift::BinaryInteger::get_isSigned(), !bVar2)))) {
    local_68 = 0x7fffffffffffffff;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    _Var4 = Swift::BinaryInteger::get_bitWidth();
    if (bVar2) {
      if (_Var4 < 0x41) {
LAB_100a39ba0:
        Swift::BinaryInteger::get__lowWord();
        goto LAB_100a39bb0;
      }
    }
    else if (_Var4 < 0x40) goto LAB_100a39ba0;
    FUN_100a3a714();
    Swift::BinaryInteger::_init
              (lVar11,&local_68,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_2,param_3)
    ;
    bVar2 = Swift::Comparable::<_infix
                      (lVar11,lVar10,param_2,*(undefined8 *)(*(long *)(param_3 + 0x20) + 8));
    (**(code **)(lVar12 + 8))(lVar11,param_2);
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a39b68);
      (*pcVar1)();
    }
  }
LAB_100a39bb0:
  _Var6 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar12 + 8))(lVar10,param_2);
  lVar9 = 0x7fffffffffffffff;
  if (SUB168(SEXT816((long)_Var6) * SEXT816(1000000000),8) == (long)(_Var6 * 1000000000) >> 0x3f) {
    lVar9 = _Var6 * 1000000000;
  }
LAB_100a39bf0:
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar5);
  (**(code **)(lVar3 + 0x10))(lVar9,uVar5,lVar3);
  return;
}



/* Address: 0x100a39c38 | FUN_100a39c38 */

void FUN_100a39c38(void)

{
  FUN_100a39c48();
  return;
}



/* Address: 0x100a39c48 | FUN_100a39c48 */

void FUN_100a39c48(undefined8 param_1,void *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  StaticString file;
  __uint64 line;
  long lVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined *local_98;
  long local_90;
  StaticString local_70;
  __uint64 local_68;
  
  puVar1 = 
  PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898;
  lVar13 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + 0x10) + 8);
  uVar11 = *(undefined8 *)(lVar13 + 0x10);
  lVar2 = 0;
  local_90 = param_3;
  _swift_getAssociatedTypeWitness
            (0,uVar11,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar10 = (long)&local_b0 - (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)((long)param_2 + -8);
  uVar6 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_98 = (undefined *)(lVar10 - uVar6);
  lVar7 = (long)local_98 - uVar6;
  lVar12 = lVar7 - uVar6;
  _swift_getAssociatedConformanceWitness
            (uVar11,param_2,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
            );
  local_b0 = uVar11;
  uStack_a8 = param_4;
  Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar10,param_4,param_5,lVar2);
  Swift::ExpressibleByIntegerLiteral::_init();
  local_a0 = lVar13;
  Swift::Numeric::__infix(lVar12,param_1,lVar7,param_2,lVar13);
  lVar13 = local_90;
  pcVar9 = *(code **)(lVar8 + 8);
  (*pcVar9)(lVar7,param_2);
  FUN_100a3a754();
  (extension_Swift)::Swift::BinaryFloatingPoint::_init
            (&local_70,lVar12,PTR___type_metadata_for_Swift_Double_100eac5d0,param_2,lVar7,lVar13);
  if (9.223372036854776e+18 <= (double)local_70.unknown) {
    local_70.unknown = (undefined *)0x7fffffffffffffff;
  }
  else {
    Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar10,uStack_a8,param_5,lVar2,local_b0);
    Swift::ExpressibleByIntegerLiteral::_init();
    puVar1 = local_98;
    Swift::Numeric::__infix(local_98,param_1,lVar12,param_2,local_a0);
    (*pcVar9)(lVar12,param_2);
    FUN_100a3cca8();
    _Var3.unknown = puVar1;
    pcVar4 = PTR___type_metadata_for_Swift_Int64_100eadc00;
    pvVar5 = param_2;
    (extension_Swift)::Swift::FixedWidthInteger::__convert(&local_70);
    if ((char)local_68 == '\x01') {
      local_70.unknown = (undefined *)0x0;
      local_68 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x50,_Var3);
      SVar14 = Swift::__typeName(SUB81(param_2,0));
      SVar18.bridgeObject = pvVar5;
      SVar18.str = pcVar4;
      Swift::String::append(SVar14,SVar18);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      SVar14.bridgeObject = (void *)0x8000000100db8370;
      SVar14.str = (char *)0xd00000000000001e;
      SVar19.bridgeObject = pvVar5;
      SVar19.str = pcVar4;
      Swift::String::append(SVar14,SVar19);
      SVar15.bridgeObject = &DAT_e500000000000000;
      SVar15.str = (char *)0x3436746e49;
      SVar20.bridgeObject = pvVar5;
      SVar20.str = pcVar4;
      Swift::String::append(SVar15,SVar20);
      SVar16.bridgeObject = (void *)0x8000000100db8390;
      SVar16.str = (char *)0xd00000000000002e;
      SVar21.bridgeObject = pvVar5;
      SVar21.str = pcVar4;
      Swift::String::append(SVar16,SVar21);
      line = local_68;
      file.unknown = local_70.unknown;
      *(undefined4 *)(lVar12 + -8) = 0;
      *(undefined8 *)(lVar12 + -0x10) = 0x32f4;
      SVar17.bridgeObject = (void *)0x2;
      SVar17.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar17,file,line,0xda6c60);
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100a39f78);
      (*pcVar9)();
    }
    (*pcVar9)(puVar1,param_2);
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar13 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar11);
  (**(code **)(lVar13 + 0x10))(local_70.unknown,uVar11,lVar13);
  return;
}



/* Address: 0x100a39f78 | FUN_100a39f78 */

void FUN_100a39f78(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x100a39fac | FUN_100a39fac */

void FUN_100a39fac(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a39ff4 | FUN_100a39ff4 */

long FUN_100a39ff4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(param_4 + 0x20);
  FUN_100004640(param_4,uVar1);
  uVar3 = param_1;
  uVar4 = param_2;
  (**(code **)(lVar2 + 0x30))(param_1,param_2,param_3,uVar1,lVar2);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar4;
  FUN_100076508(param_4,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a3a0a0 | FUN_100a3a0a0 */

long FUN_100a3a0a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  FUN_100a36fb8(auStack_78);
  FUN_100004640(auStack_78,local_60);
  uVar1 = param_1;
  uVar2 = param_2;
  (**(code **)(lStack_58 + 0x30))(param_1,param_2,param_3,local_60,lStack_58);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  FUN_100076508(auStack_78,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a3a158 | FUN_100a3a158 */

long FUN_100a3a158(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(param_6 + 0x18);
  lVar1 = *(long *)(param_6 + 0x20);
  FUN_100004640(param_6,uVar3);
  uVar2 = param_1;
  lVar4 = param_2;
  (**(code **)(lVar1 + 0x30))(param_1,param_2,param_3,uVar3,lVar1);
  uVar3 = uVar2;
  _swift_getObjectType();
  (**(code **)(lVar4 + 0x18))(param_4,param_5,uVar3,lVar4);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(long *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  *(long *)(unaff_x20 + 0x18) = lVar4;
  FUN_100076508(param_6,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a3a230 | FUN_100a3a230 */

long FUN_100a3a230(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  FUN_100a36fb8(auStack_88);
  FUN_100004640(auStack_88,local_70);
  uVar1 = param_1;
  lVar3 = param_2;
  (**(code **)(lStack_68 + 0x30))(param_1,param_2,param_3,local_70,lStack_68);
  uVar2 = uVar1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x18))(param_4,param_5,uVar2,lVar3);
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(long *)(unaff_x20 + 0x50) = param_2;
  *(undefined8 *)(unaff_x20 + 0x58) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(long *)(unaff_x20 + 0x18) = lVar3;
  FUN_100076508(auStack_88,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100a3a314 | FUN_100a3a314 */

void FUN_100a3a314(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  (**(code **)(lVar2 + 0x58))
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),uVar1,lVar2);
  return;
}



/* Address: 0x100a3a360 | FUN_100a3a360 */

void FUN_100a3a360(void)

{
  FUN_100a3a378(0x19,0x2872656d6954,&DAT_e600000000000000);
  return;
}



/* Address: 0x100a3a378 | FUN_100a3a378 */

undefined1  [16] FUN_100a3a378(__int64 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  char *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  pcVar3 = param_3;
  Swift::_StringGuts::grow(param_1,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar7);
  SVar5.bridgeObject = (void *)0xee00203a736e6f69;
  SVar5.str = (char *)0x736e656d6964202c;
  SVar8.bridgeObject = param_4;
  SVar8.str = pcVar3;
  Swift::String::append(SVar5,SVar8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x58);
  puVar2 = &DAT_100ff58d0;
  FUN_1000f7830(&DAT_100ff58d0,0x100c8f348);
  SVar5 = Swift::Array<undefined>::get_description(uVar4,puVar2);
  SVar9.bridgeObject = param_4;
  SVar9.str = pcVar3;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = (void *)0xe100000000000000;
  SVar6.str = (char *)0x29;
  SVar10.bridgeObject = param_4;
  SVar10.str = pcVar3;
  Swift::String::append(SVar6,SVar10);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2.unknown;
  return auVar1;
}



/* Address: 0x100a3a448 | FUN_100a3a448 */

void FUN_100a3a448(void)

{
  FUN_100a3a360();
  return;
}



/* Address: 0x100a3a468 | FUN_100a3a468 */

void FUN_100a3a468(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  pthread_rwlock_t *ppVar6;
  undefined8 local_48 [3];
  undefined8 local_30;
  undefined **ppuStack_28;
  
  FUN_100a3d86c();
  uVar3 = param_1;
  _swift_initStaticObject();
  ppuStack_28 = &PTR_TargetResilientWitness_100c8f47c_Implementation_100f2a018;
  lVar4 = 0;
  local_48[0] = uVar3;
  local_30 = param_1;
  FUN_100a3d82c();
  _swift_allocObject();
  lVar5 = 0;
  FUN_100a369e8();
  _swift_allocObject();
  ppVar6 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar5 + 0x10) = ppVar6;
  iVar2 = _pthread_rwlock_init(ppVar6,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    *(long *)(lVar4 + 0x10) = lVar5;
    *(undefined1 *)(lVar4 + 0x40) = 0;
    FUN_100076508(local_48,lVar4 + 0x18);
    DAT_100ff58b0 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a3a518);
  (*pcVar1)();
}



/* Address: 0x100a3a518 | FUN_100a3a518 */

undefined8 * FUN_100a3a518(void)

{
  if (DAT_100ff58e8 != -1) {
    _swift_once(&DAT_100ff58e8,FUN_100a3cab8);
  }
  return &DAT_1010582c0;
}



/* Address: 0x100a3a558 | FUN_100a3a558 */

void FUN_100a3a558(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_rwlock_t *ppVar4;
  undefined1 auStack_48 [24];
  
  if (DAT_100ff58a8 != -1) {
    _swift_once(&DAT_100ff58a8,FUN_100a3a468);
  }
  lVar1 = DAT_100ff58b0;
  ppVar4 = *(pthread_rwlock_t **)(*(long *)(DAT_100ff58b0 + 0x10) + 0x10);
  iVar3 = _pthread_rwlock_wrlock(ppVar4);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3a610);
    (*pcVar2)();
  }
  if ((*(byte *)(lVar1 + 0x40) & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3a614);
    (*pcVar2)();
  }
  _swift_beginAccess(lVar1 + 0x18,auStack_48,0x21,0);
  FUN_10008820c(lVar1 + 0x18,param_1);
  _swift_endAccess(auStack_48);
  *(undefined1 *)(lVar1 + 0x40) = 1;
  iVar3 = _pthread_rwlock_unlock(ppVar4);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3a618);
  (*pcVar2)();
}



/* Address: 0x100a3a618 | FUN_100a3a618 */

void FUN_100a3a618(void)

{
  if (DAT_100ff58b8 != -1) {
    _swift_once(&DAT_100ff58b8,FUN_100a3a66c);
  }
  Swift::TaskLocal::get(DAT_1010582c8);
  return;
}



/* Address: 0x100a3a66c | FUN_100a3a66c */

void FUN_100a3a66c(void)

{
  TaskLocal *pTVar1;
  undefined8 *puVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  puVar2 = &local_50;
  local_30 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  pTVar1 = (TaskLocal *)&DAT_100ff6458;
  FUN_1000f7830(&DAT_100ff6458,&DAT_100c8f9d8);
  _swift_allocObject();
  Swift::TaskLocal::_init(pTVar1);
  DAT_1010582c8 = (undefined1 *)puVar2;
  return;
}



/* Address: 0x100a3a6cc | FUN_100a3a6cc */

undefined8 FUN_100a3a6cc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff58c0;
  FUN_1000f7830(&DAT_100ff58c0,0x100c8f340);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100a3a714 | FUN_100a3a714 */

void FUN_100a3a714(void)

{
  undefined *puVar1;
  
  if (DAT_100ff58c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eadc10;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eadc10,
             PTR___type_metadata_for_Swift_Int64_100eadc00);
  DAT_100ff58c8 = puVar1;
  return;
}



/* Address: 0x100a3a754 | FUN_100a3a754 */

void FUN_100a3a754(void)

{
  undefined *puVar1;
  
  if (DAT_100ff58d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__double_>Swift__BinaryFloatingPoint_100eac5d8;
  _swift_getWitnessTable
            (PTR_Swift__double_>Swift__BinaryFloatingPoint_100eac5d8,
             PTR___type_metadata_for_Swift_Double_100eac5d0);
  DAT_100ff58d8 = puVar1;
  return;
}



/* Address: 0x100a3a794 | thunk_FUN_100a36fb8 */

void thunk_FUN_100a36fb8(void)

{
  FUN_100a36fb8();
  return;
}



/* Address: 0x100a3a798 | FUN_100a3a798 */

void FUN_100a3a798(TaskLocal *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [40];
  
  if (DAT_100ff58b8 != -1) {
    _swift_once(&DAT_100ff58b8,FUN_100a3a66c);
  }
  uVar1 = DAT_1010582c8;
  FUN_100076688(param_2,auStack_68);
  Swift::TaskLocal::_withValue
            (param_1,uVar1,auStack_68,param_3,param_4,0xd000000000000019,0x8000000100db83e0,0x3c2,
             param_5);
  FUN_100a3a6cc(auStack_68);
  return;
}



/* Address: 0x100a3a868 | FUN_100a3a868 */

void FUN_100a3a868(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(ulong *)(unaff_x22 + 0x68) = param_3;
  if (DAT_100ff58b8 != -1) {
    _swift_once(&DAT_100ff58b8,FUN_100a3a66c);
  }
  FUN_100076688(param_4,unaff_x22 + 0x38);
  *(undefined8 *)(unaff_x22 + 0x20) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a3a988;
  FUN_100a3aaec(param_1,unaff_x22 + 0x38,0x100c8f360,unaff_x22 + 0x10,param_2,
                param_3 & 0xcfffffffffffffff,0xd000000000000019,0x8000000100db83e0,0x3cf,param_7);
  return;
}



/* Address: 0x100a3a988 | FUN_100a3a988 */

void FUN_100a3a988(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x70));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_100a3a6cc(lVar4 + 0x38);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1000e5808;
  }
  else {
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_100a3aa24;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x100a3aa24 | FUN_100a3aa24 */

void FUN_100a3aa24(void)

{
  long unaff_x22;
  
  FUN_100a3a6cc(unaff_x22 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x000100a3aa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a3aa60 | FUN_100a3aa60 */

void FUN_100a3aa60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100a3aa7c,0,0);
  return;
}



/* Address: 0x100a3aa7c | FUN_100a3aa7c */

void FUN_100a3aa7c(void)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  long unaff_x22;
  
  piVar3 = *(int **)(unaff_x22 + 0x18);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005fc418;
                    /* WARNING: Could not recover jumptable at 0x000100a3aae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))(plVar2,*(undefined8 *)(unaff_x22 + 0x10),0,0);
  return;
}



/* Address: 0x100a3aaec | FUN_100a3aaec */

void FUN_100a3aaec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValue_100eaf040 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = thunk_FUN_1005cd444;
    Swift::TaskLocal::_withValue
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_100a3cd70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a3ac44 | FUN_100a3ac44 */

void FUN_100a3ac44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_100ff58a8 != -1) {
    _swift_once(&DAT_100ff58a8,FUN_100a3a468);
  }
  FUN_100a36a8c(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100a3acd4 | FUN_100a3acd4 */

void FUN_100a3acd4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x18);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a3ad00 | FUN_100a3ad00 */

/* WARNING: Removing unreachable block (ram,0x000100a3ae2c) */

void FUN_100a3ad00(double param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  __int64 _Var4;
  undefined8 uVar5;
  pthread_mutex_t *ppVar6;
  long unaff_x20;
  
  if (((ulong)param_1 >> 0x34 < 0x7ff) &&
     (((ulong)param_1 & 0xfffffffffffff) != 0 || (ulong)param_1 >> 0x34 != 0)) {
    _Var4 = double::get_exponent(param_1);
    if (_Var4 < 0x3f) {
      if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ae24);
        (*pcVar2)();
      }
      if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ae28);
        (*pcVar2)();
      }
      ppVar6 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x10) + 0x10);
      iVar3 = _pthread_mutex_lock(ppVar6);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ae2c);
        (*pcVar2)();
      }
      FUN_100a3ae30();
      iVar3 = _pthread_mutex_unlock(ppVar6);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ae1c);
        (*pcVar2)();
      }
    }
    else {
      ppVar6 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x10) + 0x10);
      iVar3 = _pthread_mutex_lock(ppVar6);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ae20);
        (*pcVar2)();
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      lVar1 = *(long *)(unaff_x20 + 0x20);
      _swift_getObjectType(uVar5);
      (**(code **)(lVar1 + 0x10))(0x7fffffffffffffff,uVar5,lVar1);
      iVar3 = _pthread_mutex_unlock(ppVar6);
      if (iVar3 != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3ada4);
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Address: 0x100a3ae30 | FUN_100a3ae30 */

void FUN_100a3ae30(long param_1,double *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  double dVar5;
  
  dVar5 = *param_2 + *(double *)(param_1 + 0x50);
  *(double *)(param_1 + 0x50) = dVar5;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3aef0);
    (*pcVar2)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3aef4);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3aef8);
    (*pcVar2)();
  }
  if (!SCARRY8(*param_3,(long)dVar5)) {
    *param_3 = *param_3 + (long)dVar5;
    *(double *)(param_1 + 0x50) = dVar5 - (double)(long)dVar5;
    lVar4 = *param_3;
    if (0 < lVar4) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      lVar1 = *(long *)(param_1 + 0x20);
      _swift_getObjectType(uVar3);
      (**(code **)(lVar1 + 0x10))(lVar4,uVar3,lVar1);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3aefc);
  (*pcVar2)();
}



/* Address: 0x100a3aefc | FUN_100a3aefc */

void FUN_100a3aefc(void)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_mutex_t *ppVar4;
  long unaff_x20;
  
  ppVar4 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x10) + 0x10);
  iVar3 = _pthread_mutex_lock(ppVar4);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3af60);
    (*pcVar2)();
  }
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  lVar1 = *(long *)(unaff_x20 + 0x20);
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar1 + 0x18))();
  iVar3 = _pthread_mutex_unlock(ppVar4);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3af64);
  (*pcVar2)();
}



/* Address: 0x100a3af64 | FUN_100a3af64 */

void FUN_100a3af64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100a3af98 | thunk_FUN_100a3ad00 */

void thunk_FUN_100a3ad00(void)

{
  FUN_100a3ad00();
  return;
}



/* Address: 0x100a3af9c | thunk_FUN_100a3aefc */

void thunk_FUN_100a3aefc(void)

{
  FUN_100a3aefc();
  return;
}



/* Address: 0x100a3afa0 | FUN_100a3afa0 */

void FUN_100a3afa0(undefined8 param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_mutex_t *ppVar4;
  long unaff_x20;
  
  ppVar4 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x28) + 0x10);
  iVar3 = _pthread_mutex_lock(ppVar4);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b014);
    (*pcVar2)();
  }
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  iVar3 = _pthread_mutex_unlock(ppVar4);
  if (iVar3 == 0) {
    lVar1 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
    (**(code **)(lVar1 + 0x18))(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b018);
  (*pcVar2)();
}



/* Address: 0x100a3b018 | FUN_100a3b018 */

void FUN_100a3b018(double param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_mutex_t *ppVar4;
  long unaff_x20;
  
  if (((ulong)param_1 >> 0x34 < 0x7ff) &&
     (((ulong)param_1 & 0xfffffffffffff) != 0 || (ulong)param_1 >> 0x34 != 0)) {
    ppVar4 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x28) + 0x10);
    iVar3 = _pthread_mutex_lock(ppVar4);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b0b4);
      (*pcVar2)();
    }
    param_1 = param_1 + *(double *)(unaff_x20 + 0x20);
    *(double *)(unaff_x20 + 0x20) = param_1;
    iVar3 = _pthread_mutex_unlock(ppVar4);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b0b8);
      (*pcVar2)();
    }
    lVar1 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
    (**(code **)(lVar1 + 0x18))(param_1);
  }
  return;
}



/* Address: 0x100a3b0b8 | FUN_100a3b0b8 */

void FUN_100a3b0b8(double param_1)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  pthread_mutex_t *ppVar4;
  long unaff_x20;
  
  if (((ulong)param_1 >> 0x34 < 0x7ff) &&
     (((ulong)param_1 & 0xfffffffffffff) != 0 || (ulong)param_1 >> 0x34 != 0)) {
    ppVar4 = *(pthread_mutex_t **)(*(long *)(unaff_x20 + 0x28) + 0x10);
    iVar3 = _pthread_mutex_lock(ppVar4);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b154);
      (*pcVar2)();
    }
    param_1 = *(double *)(unaff_x20 + 0x20) - param_1;
    *(double *)(unaff_x20 + 0x20) = param_1;
    iVar3 = _pthread_mutex_unlock(ppVar4);
    if (iVar3 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3b158);
      (*pcVar2)();
    }
    lVar1 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
    (**(code **)(lVar1 + 0x18))(param_1);
  }
  return;
}



/* Address: 0x100a3b158 | FUN_100a3b158 */

void FUN_100a3b158(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100004594(unaff_x20 + 0x30);
  _swift_deallocClassInstance();
  return;
}


