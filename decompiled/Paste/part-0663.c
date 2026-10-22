/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007056f4 | FUN_1007056f4 */

undefined8 * FUN_1007056f4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  uVar4 = (ulong)*(byte *)(lVar2 + 0x50);
  pcVar5 = *(code **)(lVar2 + 0x10);
  _swift_retain(uVar1);
  (*pcVar5)(uVar4 + 0x10 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff),
            uVar4 + 0x10 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff),lVar3);
  return param_1;
}



/* Address: 0x100705760 | FUN_100705760 */

undefined8 * FUN_100705760(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_1[1];
  uVar1 = param_2[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  _swift_retain(uVar1);
  _swift_release(uVar4);
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x18))
            (uVar3 + 0x10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 0x10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x1007057d4 | FUN_1007057d4 */

undefined8 * FUN_1007057d4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  _swift_release(uVar1);
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  (**(code **)(lVar2 + 0x28))
            (uVar3 + 0x10 + (long)param_1 & (uVar3 ^ 0xffffffffffffffff),
             uVar3 + 0x10 + (long)param_2 & (uVar3 ^ 0xffffffffffffffff));
  return param_1;
}



/* Address: 0x10070583c | FUN_10070583c */

void FUN_10070583c(void)

{
  FUN_1006a4b78(0);
  return;
}



/* Address: 0x100705844 | FUN_100705844 */

void FUN_100705844(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = unaff_x20;
  _swift_task_switch(FUN_10070585c,0,0);
  return;
}



/* Address: 0x10070585c | FUN_10070585c */

void FUN_10070585c(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  piVar2 = (int *)**(undefined8 **)(unaff_x22 + 0x18);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1007058bc;
                    /* WARNING: Could not recover jumptable at 0x0001007058b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))();
  return;
}



/* Address: 0x1007058bc | FUN_1007058bc */

void FUN_1007058bc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100705910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(*(long *)(lVar7 + 0x10) + 0x10);
  lVar3 = *(long *)(*(long *)(lVar7 + 0x10) + 0x18);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(lVar7 + 0x28) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_1005fc418;
                    /* WARNING: Could not recover jumptable at 0x000100705970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(uVar2,lVar3);
  return;
}



/* Address: 0x100705974 | FUN_100705974 */

void FUN_100705974(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100705844(param_1);
  return;
}



/* Address: 0x1007059c8 | FUN_1007059c8 */

void FUN_1007059c8(long param_1)

{
  FUN_1007059d4(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007059d4 | FUN_1007059d4 */

undefined1  [16] FUN_1007059d4(bool param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x12,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::__typeName(param_1);
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x3e;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0xef3c656369767265;
  auVar1._0_8_ = 0x536564756c657250;
  return auVar1;
}



/* Address: 0x100705a6c | FUN_100705a6c */

void FUN_100705a6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  (**(code **)(lVar2 + 0x10))(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4);
  lVar2 = 0;
  FUN_1007067c8(0,param_4,param_5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100705b28 | FUN_100705b28 */

void FUN_100705b28(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  FUN_10070637c(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,
                uVar3,lVar5,uVar4);
  return;
}



/* Address: 0x100705bd4 | FUN_100705bd4 */

void FUN_100705bd4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong local_80;
  ulong uStack_78;
  
  lVar7 = (long)*(int *)(param_2 + 0x28);
  uVar10 = *(ulong *)(unaff_x20 + lVar7);
  uVar13 = uVar10 >> 0xe;
  uVar9 = *(ulong *)(unaff_x20 + *(int *)(param_2 + 0x24)) >> 0xe;
  if (uVar9 <= uVar13) {
    lVar7 = 0;
    _swift_getAssociatedTypeWitness
              (0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8),
               *(undefined8 *)(param_2 + 0x10),
               PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
               PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
                    /* WARNING: Could not recover jumptable at 0x000100705d18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar12 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8);
  uVar11 = uVar10;
  uVar14 = uVar13;
  do {
    pcVar5 = (code *)&local_80;
    puVar8 = (undefined8 *)(unaff_x20 + lVar7);
    __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
              (pcVar5,puVar8,uVar1,uVar12);
    _Var2.unknown = (undefined *)*puVar8;
    _Var4.unknown = (undefined *)puVar8[1];
    _swift_bridgeObjectRetain(_Var4.unknown);
    (*pcVar5)(&local_80,0);
    puVar8 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x2c));
    puVar3 = (undefined *)*puVar8;
    if (_Var2.unknown == puVar3 && _Var4.unknown == (undefined *)puVar8[1]) {
      _swift_bridgeObjectRelease(_Var4.unknown);
      break;
    }
    bVar6 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
    _swift_bridgeObjectRelease(_Var4.unknown);
    if (bVar6) break;
    Swift::Collection::_formIndex();
    uVar11 = *(ulong *)(unaff_x20 + lVar7);
    uVar14 = uVar11 >> 0xe;
  } while (uVar14 < uVar9);
  if (uVar14 < uVar13) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100705e48);
    (*pcVar5)();
  }
  local_80 = uVar10;
  uStack_78 = uVar11;
  __dispatch_thunk_of_Swift_Collection_subscript_getter____Swift_Range<A_Index>___>_A_SubSequence
            (param_1,&local_80,uVar1,uVar12);
  uVar10 = *(ulong *)(unaff_x20 + lVar7);
  while (uVar10 >> 0xe < uVar9) {
    pcVar5 = (code *)&local_80;
    puVar8 = (undefined8 *)(unaff_x20 + lVar7);
    __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
              (pcVar5,puVar8,uVar1,uVar12);
    _Var2.unknown = (undefined *)*puVar8;
    _Var4.unknown = (undefined *)puVar8[1];
    _swift_bridgeObjectRetain(_Var4.unknown);
    (*pcVar5)(&local_80,0);
    puVar8 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x2c));
    puVar3 = (undefined *)*puVar8;
    if (_Var2.unknown == puVar3 && _Var4.unknown == (undefined *)puVar8[1]) {
      _swift_bridgeObjectRelease(_Var4.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
      _swift_bridgeObjectRelease(_Var4.unknown);
      if (!bVar6) break;
    }
    Swift::Collection::_formIndex();
    uVar10 = *(ulong *)(unaff_x20 + lVar7);
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar12,uVar1,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,0,1,lVar7);
  return;
}



/* Address: 0x100705e48 | FUN_100705e48 */

void FUN_100705e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = *(long *)(param_5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar2 + 0x40));
  (**(code **)(lVar2 + 0x10))(&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0))
  ;
  (**(code **)(lVar2 + 0x20))
            (param_1,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_5);
  lVar2 = 0;
  FUN_1007067e0(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x28)) = param_4;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100705f1c | FUN_100705f1c */

void FUN_100705f1c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_2 + 0x10);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  (**(code **)(extraout_x12 + 0x10))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar1 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28));
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  FUN_1007065c8(param_1,&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar2,
                uVar3,uVar5,lVar6,uVar4);
  return;
}



/* Address: 0x100705fd8 | FUN_100705fd8 */

void FUN_100705fd8(undefined8 param_1,long param_2)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  long lVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  code *pcVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long unaff_x20;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong local_80;
  ulong uStack_78;
  
  lVar7 = (long)*(int *)(param_2 + 0x28);
  uVar11 = *(ulong *)(unaff_x20 + lVar7);
  uVar12 = *(ulong *)(unaff_x20 + *(int *)(param_2 + 0x24));
  uVar13 = uVar12 >> 0xe;
  if (uVar11 >> 0xe < uVar13) {
    lVar10 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x2c));
    lVar3 = lVar10 + -1;
    if (0 < lVar10) {
      *(long *)(unaff_x20 + *(int *)(param_2 + 0x2c)) = lVar3;
      local_80 = uVar11;
      if (lVar3 == 0) {
        uVar16 = *(undefined8 *)(param_2 + 0x10);
        puVar5 = &DAT_100fdf778;
        FUN_1000f7830(&DAT_100fdf778,&DAT_100c73f90);
        uVar14 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8);
        puVar6 = puVar5;
        FUN_100706778();
        ___extension_in_Swift__Swift_Collection_subscript_getter___<A_where_A1:_Swift_RangeExpression,A_Index____A1_Bound>_A1___>_A_SubSequence
                  (param_1,&local_80,uVar16,puVar5,uVar14,puVar6);
        *(ulong *)(unaff_x20 + lVar7) = uVar12;
        lVar7 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar14,uVar16,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
                   PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
        pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      }
      else {
        uVar12 = *(ulong *)(unaff_x20 + lVar7);
        uVar15 = uVar12 >> 0xe;
        if (uVar15 < uVar13) {
          uVar14 = *(undefined8 *)(param_2 + 0x10);
          uVar16 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8);
          do {
            pcVar9 = (code *)&local_80;
            puVar8 = (undefined8 *)(unaff_x20 + lVar7);
            __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                      (pcVar9,puVar8,uVar14,uVar16);
            _Var1.unknown = (undefined *)*puVar8;
            _Var2.unknown = (undefined *)puVar8[1];
            _swift_bridgeObjectRetain(_Var2.unknown);
            (*pcVar9)(&local_80,0);
            puVar8 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
            puVar5 = (undefined *)*puVar8;
            if (_Var1.unknown == puVar5 && _Var2.unknown == (undefined *)puVar8[1]) {
              _swift_bridgeObjectRelease(_Var2.unknown);
              break;
            }
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar5);
            _swift_bridgeObjectRelease(_Var2.unknown);
            if (bVar4) break;
            Swift::Collection::_formIndex();
            uVar12 = *(ulong *)(unaff_x20 + lVar7);
            uVar15 = uVar12 >> 0xe;
          } while (uVar15 < uVar13);
        }
        if (uVar15 < uVar11 >> 0xe) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100706308);
          (*pcVar9)();
        }
        uVar14 = *(undefined8 *)(param_2 + 0x10);
        uVar16 = *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8);
        uStack_78 = uVar12;
        __dispatch_thunk_of_Swift_Collection_subscript_getter____Swift_Range<A_Index>___>_A_SubSequence
                  (param_1,&local_80,uVar14,uVar16);
        while (*(ulong *)(unaff_x20 + lVar7) >> 0xe < uVar13) {
          pcVar9 = (code *)&local_80;
          puVar8 = (undefined8 *)(unaff_x20 + lVar7);
          __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
                    (pcVar9,puVar8,uVar14,uVar16);
          _Var1.unknown = (undefined *)*puVar8;
          _Var2.unknown = (undefined *)puVar8[1];
          _swift_bridgeObjectRetain(_Var2.unknown);
          (*pcVar9)(&local_80,0);
          puVar8 = (undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x30));
          puVar5 = (undefined *)*puVar8;
          if (_Var1.unknown == puVar5 && _Var2.unknown == (undefined *)puVar8[1]) {
            _swift_bridgeObjectRelease(_Var2.unknown);
          }
          else {
            bVar4 = Swift::_stringCompareWithSmolCheck
                              (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar5);
            _swift_bridgeObjectRelease(_Var2.unknown);
            if (!bVar4) break;
          }
          Swift::Collection::_formIndex();
        }
        lVar7 = 0;
        _swift_getAssociatedTypeWitness
                  (0,uVar16,uVar14,
                   PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
                   PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
        pcVar9 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
      }
      (*pcVar9)(param_1,0,1,lVar7);
      return;
    }
  }
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(*(long *)(*(long *)(param_2 + 0x18) + 8) + 8),
             *(undefined8 *)(param_2 + 0x10),
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_SubSequence_100eabcd8);
                    /* WARNING: Could not recover jumptable at 0x00010070614c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))(param_1,1,1,lVar7);
  return;
}



/* Address: 0x100706308 | thunk_FUN_1002ee454 */

void thunk_FUN_1002ee454(void)

{
  FUN_1002ee454();
  return;
}



/* Address: 0x10070630c | FUN_10070630c */

void FUN_10070630c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_5 + -8) + 0x20))(param_1,param_2,param_5);
  lVar2 = 0;
  FUN_1007067c8(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



/* Address: 0x10070637c | FUN_10070637c */

void FUN_10070637c(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,long param_6)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  ulong uVar4;
  bool bVar5;
  long lVar6;
  code *pcVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_90 [4];
  ulong local_70;
  ulong local_68;
  
  lVar9 = *(long *)(param_5 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,param_5);
  lVar6 = 0;
  FUN_1007067d4(0,param_5,param_6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar6 + 0x2c));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  uVar10 = *(undefined8 *)(*(long *)(param_6 + 8) + 8);
  _swift_bridgeObjectRetain(param_4);
  Swift::Collection::_get_endIndex();
  Swift::Collection::_get_startIndex();
  while (uVar4 = local_68, Swift::Collection::_get_endIndex(), uVar4 >> 0xe < local_90[0] >> 0xe) {
    local_70 = uVar4;
    pcVar7 = (code *)local_90;
    puVar8 = &local_70;
    __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
              (pcVar7,puVar8,param_5,uVar10);
    _Var2.unknown = (undefined *)*puVar8;
    _Var3.unknown = (undefined *)puVar8[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    (*pcVar7)(local_90,0);
    if (_Var2.unknown == param_3 && _Var3.unknown == param_4) {
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var3,(_StringComparisonResult)(__int8)param_3);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar5) break;
    }
    Swift::Collection::_formIndex();
  }
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar9 + 8))(param_2,param_5);
  *(ulong *)(param_1 + *(int *)(lVar6 + 0x28)) = uVar4;
  return;
}



/* Address: 0x100706514 | FUN_100706514 */

undefined8 FUN_100706514(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x24));
}



/* Address: 0x100706520 | FUN_100706520 */

undefined8 FUN_100706520(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x28));
}



/* Address: 0x10070652c | FUN_10070652c */

void FUN_10070652c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x28)) = param_1;
  return;
}



/* Address: 0x100706538 | thunk_FUN_100705bd4 */

void thunk_FUN_100705bd4(void)

{
  FUN_100705bd4();
  return;
}



/* Address: 0x10070653c | FUN_10070653c */

void FUN_10070653c(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_100705b28);
  return;
}



/* Address: 0x100706548 | thunk_FUN_100706870 */

void thunk_FUN_100706870(void)

{
  FUN_100706870();
  return;
}



/* Address: 0x10070654c | FUN_10070654c */

void FUN_10070654c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long lVar2;
  
  (**(code **)(*(long *)(param_6 + -8) + 0x20))(param_1,param_2,param_6);
  lVar2 = 0;
  FUN_1007067e0(0,param_6,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x24));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(param_1 + *(int *)(lVar2 + 0x28)) = param_5;
  return;
}



/* Address: 0x1007065c8 | FUN_1007065c8 */

void FUN_1007065c8(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  long param_5,long param_6,long param_7)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  ulong uVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  undefined8 uVar10;
  ulong local_90 [4];
  ulong local_70;
  ulong local_68;
  
  lVar9 = *(long *)(param_6 + -8);
  (**(code **)(lVar9 + 0x10))(param_1,param_2,param_6);
  lVar7 = 0;
  FUN_1007067ec(0,param_6,param_7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar7 + 0x30));
  *puVar1 = param_3;
  puVar1[1] = param_4;
  uVar10 = *(undefined8 *)(*(long *)(param_7 + 8) + 8);
  _swift_bridgeObjectRetain(param_4);
  Swift::Collection::_get_endIndex();
  Swift::Collection::_get_startIndex();
  while (uVar4 = local_68, Swift::Collection::_get_endIndex(), uVar4 >> 0xe < local_90[0] >> 0xe) {
    local_70 = uVar4;
    pcVar5 = (code *)local_90;
    puVar8 = &local_70;
    __dispatch_thunk_of_Swift_Collection_subscript_read____A_Index___>_A_Element
              (pcVar5,puVar8,param_6,uVar10);
    _Var2.unknown = (undefined *)*puVar8;
    _Var3.unknown = (undefined *)puVar8[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    (*pcVar5)(local_90,0);
    if (_Var2.unknown == param_3 && _Var3.unknown == param_4) {
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar6 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var3,(_StringComparisonResult)(__int8)param_3);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar6) break;
    }
    Swift::Collection::_formIndex();
  }
  _swift_bridgeObjectRelease(param_4);
  (**(code **)(lVar9 + 8))(param_2,param_6);
  *(ulong *)(param_1 + *(int *)(lVar7 + 0x28)) = uVar4;
  if (!SCARRY8(param_5,1)) {
    *(long *)(param_1 + *(int *)(lVar7 + 0x2c)) = param_5 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x100706778);
  (*pcVar5)();
}



/* Address: 0x100706778 | FUN_100706778 */

void FUN_100706778(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fdf780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fdf778;
  FUN_1000f8b08(&DAT_100fdf778,&DAT_100c73f90);
  puVar2 = PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200;
  _swift_getWitnessTable
            (PTR_Swift__Swift__PartialRangeFrom<undefined>_>Swift__RangeExpression_100ead200,puVar1)
  ;
  DAT_100fdf780 = puVar2;
  return;
}



/* Address: 0x1007067c8 | FUN_1007067c8 */

void FUN_1007067c8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007067d4 | FUN_1007067d4 */

void FUN_1007067d4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007067e0 | FUN_1007067e0 */

void FUN_1007067e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007067ec | FUN_1007067ec */

void FUN_1007067ec(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007067f8 | FUN_1007067f8 */

undefined8 FUN_1007067f8(long param_1)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + *(int *)(param_1 + 0x2c));
}



/* Address: 0x100706804 | FUN_100706804 */

void FUN_100706804(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x2c)) = param_1;
  return;
}



/* Address: 0x100706810 | FUN_100706810 */

void FUN_100706810(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73f98,param_1);
  return;
}



/* Address: 0x100706820 | thunk_FUN_100705fd8 */

void thunk_FUN_100705fd8(void)

{
  FUN_100705fd8();
  return;
}



/* Address: 0x100706824 | FUN_100706824 */

void FUN_100706824(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c74030,param_1);
  return;
}



/* Address: 0x100706834 | FUN_100706834 */

void FUN_100706834(undefined8 param_1,undefined8 param_2)

{
  FUN_100706840(param_1,param_2,FUN_100705f1c);
  return;
}



/* Address: 0x100706840 | FUN_100706840 */

void FUN_100706840(long param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x00010070686c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x100706870 | FUN_100706870 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100706890 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_100706870(long param_1,undefined8 param_2)

{
  ContiguousArray<Swift__copySequenceToContiguousArray<A_where_A:_Swift_Sequence>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar1;
  
  CVar1 = Swift::__copySequenceToContiguousArray(param_1,param_1,param_2);
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return CVar1.unknown;
}



/* Address: 0x1007068c0 | FUN_1007068c0 */

void FUN_1007068c0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c740e8;
    _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100706934 | FUN_100706934 */

long * FUN_100706934(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x10 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1007069ec | thunk_FUN_100707564 */

void thunk_FUN_100707564(void)

{
  FUN_100707564();
  return;
}



/* Address: 0x1007069f0 | FUN_1007069f0 */

long FUN_1007069f0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100706a58 | FUN_100706a58 */

long FUN_100706a58(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  uVar3 = puVar2[1];
  puVar2[1] = puVar1[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x100706acc | FUN_100706acc */

long FUN_100706acc(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  uVar1 = puVar3[1];
  puVar3[1] = puVar2[1];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100706b38 | FUN_100706b38 */

uint * FUN_100706b38(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x10;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_100706bc8;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_100706bc8:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_100706bc8;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100706c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 8);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100706c2c | FUN_100706c2c */

void FUN_100706c2c(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  ulong *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x10;
  uVar10 = 2;
  uVar4 = uVar10;
  if ((int)sVar1 == 0) {
    uVar4 = (param_3 - uVar2) + 1;
  }
  if (0xffff < uVar4) {
    uVar10 = 4;
  }
  if (uVar4 < 0x100) {
    uVar10 = 1;
  }
  uVar3 = 0;
  if (1 < uVar4) {
    uVar3 = uVar10;
  }
  uVar10 = 0;
  if (uVar2 < param_3) {
    uVar10 = uVar3;
  }
  iVar6 = param_2 - uVar2;
  if (param_2 < uVar2 || iVar6 == 0) {
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
    if (param_2 != 0) {
      if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100706d3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))();
        return;
      }
      puVar7 = (ulong *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if ((int)param_2 < 0) {
        *puVar7 = (ulong)(param_2 & 0x7fffffff);
        puVar7[1] = 0;
      }
      else {
        puVar7[1] = (ulong)(param_2 - 1);
      }
    }
  }
  else {
    if ((int)sVar1 != 0) {
      iVar6 = 1;
      _bzero(param_1,sVar1);
      *param_1 = param_2 + ~uVar2;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  return;
}



/* Address: 0x100706d8c | FUN_100706d8c */

void FUN_100706d8c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    puStack_28 = &DAT_100c740e8;
    local_30 = puStack_38;
    _swift_initStructMetadata(param_1,0,4,&local_40,param_1 + 0x20);
  }
  return;
}



/* Address: 0x100706e10 | FUN_100706e10 */

long * FUN_100706e10(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x20 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    puVar3[3] = puVar4[3];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100706ef8 | FUN_100706ef8 */

void FUN_100706ef8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_bridgeObjectRelease
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 0x18));
  return;
}



/* Address: 0x100706f48 | FUN_100706f48 */

long FUN_100706f48(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  puVar2[3] = puVar1[3];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100706fd0 | FUN_100706fd0 */

long FUN_100706fd0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x18))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  uVar3 = puVar2[3];
  puVar2[3] = puVar1[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x100707064 | FUN_100707064 */

long FUN_100707064(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  uVar4 = puVar1[2];
  puVar2[3] = puVar1[3];
  puVar2[2] = uVar4;
  return param_1;
}



/* Address: 0x1007070e0 | FUN_1007070e0 */

long FUN_1007070e0(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar4 + 0x28))();
  lVar4 = *(long *)(lVar4 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar4 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar4 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar2;
  puVar3[1] = puVar2[1];
  puVar3[2] = puVar2[2];
  uVar1 = puVar3[3];
  puVar3[3] = puVar2[3];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10070716c | FUN_10070716c */

uint * FUN_10070716c(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar5;
  if (uVar5 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  if (uVar2 <= param_2 && param_2 - uVar2 != 0) {
    uVar7 = (*(long *)(lVar8 + 0x40) + 7U & 0xfffffffffffffff8) + 0x20;
    uVar1 = uVar7 & 0xfffffff8;
    uVar6 = (uint)uVar1;
    uVar9 = 2;
    uVar4 = uVar9;
    if (uVar1 == 0) {
      uVar4 = (param_2 - uVar2) + 1;
    }
    if (0xffff < uVar4) {
      uVar9 = 4;
    }
    if (uVar4 < 0x100) {
      uVar9 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar9;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_10070720c;
    }
    else if (uVar3 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_10070720c:
        uVar9 = uVar9 - 1;
        if (uVar1 != 0) {
          uVar9 = 0;
          uVar6 = *param_1;
        }
        return (uint *)(ulong)(uVar2 + (uVar6 | uVar9) + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar7);
      if (uVar9 != 0) goto LAB_10070720c;
    }
  }
  if (0x7ffffffe < uVar5) {
                    /* WARNING: Could not recover jumptable at 0x000100707248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar8 + 0x30))();
    return param_1;
  }
  uVar7 = *(ulong *)(((long)param_1 + *(long *)(lVar8 + 0x40) + 7 & 0xfffffffffffffff8U) + 0x18);
  if (0xfffffffe < uVar7) {
    uVar7 = 0xffffffff;
  }
  return (uint *)(ulong)((int)uVar7 + 1);
}



/* Address: 0x100707280 | FUN_100707280 */

void FUN_100707280(int *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  lVar7 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar8 = *(long *)(lVar7 + 0x40);
  sVar1 = (lVar8 + 7U & 0xfffffffffffffff8) + 0x20;
  if (param_3 < uVar2 || param_3 - uVar2 == 0) {
    uVar10 = 0;
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) goto LAB_10070732c;
  }
  else {
    uVar9 = 2;
    uVar3 = uVar9;
    if ((int)sVar1 == 0) {
      uVar3 = (param_3 - uVar2) + 1;
    }
    if (0xffff < uVar3) {
      uVar9 = 4;
    }
    if (uVar3 < 0x100) {
      uVar9 = 1;
    }
    uVar10 = 0;
    if (1 < uVar3) {
      uVar10 = uVar9;
    }
    iVar5 = param_2 - uVar2;
    if (uVar2 <= param_2 && iVar5 != 0) {
LAB_10070732c:
      if ((int)sVar1 != 0) {
        iVar5 = 1;
        _bzero(param_1,sVar1);
        *param_1 = param_2 + ~uVar2;
      }
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar1) = (char)iVar5;
        return;
      }
      if (uVar10 == 2) {
        *(short *)((long)param_1 + sVar1) = (short)iVar5;
        return;
      }
      *(int *)((long)param_1 + sVar1) = iVar5;
      return;
    }
  }
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
  if (param_2 != 0) {
    if (0x7ffffffe < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x000100707398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar7 + 0x38))();
      return;
    }
    uVar6 = (long)param_1 + lVar8 + 7 & 0xfffffffffffffff8;
    if ((int)param_2 < 0) {
      *(ulong *)(uVar6 + 0x10) = (ulong)(param_2 & 0x7fffffff);
      *(undefined8 *)(uVar6 + 0x18) = 0;
    }
    else {
      *(ulong *)(uVar6 + 0x18) = (ulong)(param_2 - 1);
    }
  }
  return;
}



/* Address: 0x100707408 | FUN_100707408 */

void FUN_100707408(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c740e8;
    local_28 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    _swift_initStructMetadata(param_1,0,3,&local_38,param_1 + 0x20);
  }
  return;
}



/* Address: 0x10070748c | FUN_10070748c */

long * FUN_10070748c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(lVar2 + 0x40);
  if ((*(uint *)(lVar2 + 0x50) & 0x1000f8) == 0 && (lVar5 + 7U & 0xfffffffffffffff8) + 0x18 < 0x19)
  {
    (**(code **)(lVar2 + 0x10))(param_1);
    puVar3 = (undefined8 *)((long)param_1 + lVar5 + 7 & 0xfffffffffffffff8);
    puVar4 = (undefined8 *)((long)param_2 + lVar5 + 7 & 0xfffffffffffffff8);
    *puVar3 = *puVar4;
    puVar3[1] = puVar4[1];
    puVar3[2] = puVar4[2];
    _swift_bridgeObjectRetain();
  }
  else {
    uVar1 = *(uint *)(lVar2 + 0x50) & 0xf8;
    lVar2 = *param_2;
    *param_1 = lVar2;
    param_1 = (long *)(lVar2 + ((ulong)(uVar1 + 0x17 & (uVar1 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100707564 | FUN_100707564 */

void FUN_100707564(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar1 + 8))();
  _swift_bridgeObjectRelease
            (*(undefined8 *)((param_1 + *(long *)(lVar1 + 0x40) + 7U & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x1007075a4 | FUN_1007075a4 */

long FUN_1007075a4(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar2 = *puVar1;
  puVar2[1] = puVar1[1];
  puVar2[2] = puVar1[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100707624 | FUN_100707624 */

long FUN_100707624(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  
  lVar2 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar2 + 0x18))();
  lVar2 = *(long *)(lVar2 + 0x40) + 7;
  puVar3 = (undefined8 *)(lVar2 + param_1 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)(lVar2 + param_2 & 0xfffffffffffffff8);
  *puVar3 = *puVar4;
  uVar1 = puVar3[1];
  puVar3[1] = puVar4[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  puVar3[2] = puVar4[2];
  return param_1;
}



/* Address: 0x1007076b0 | FUN_1007076b0 */

long FUN_1007076b0(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar2 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar1 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  uVar4 = *puVar1;
  puVar2[1] = puVar1[1];
  *puVar2 = uVar4;
  puVar2[2] = puVar1[2];
  return param_1;
}



/* Address: 0x10070771c | FUN_10070771c */

long FUN_10070771c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x28))();
  lVar3 = *(long *)(lVar3 + 0x40) + 7;
  puVar4 = (undefined8 *)(lVar3 + param_1 & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)(lVar3 + param_2 & 0xfffffffffffffff8);
  *puVar4 = *puVar2;
  uVar1 = puVar4[1];
  puVar4[1] = puVar2[1];
  _swift_bridgeObjectRelease(uVar1);
  puVar4[2] = puVar2[2];
  return param_1;
}


